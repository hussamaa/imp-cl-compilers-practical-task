// -g 35,73,2 -l 35,1,1
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


// Seed: 3915639408

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
   int16_t  f1;
};

struct S1 {
    int8_t g_7[2][10];
    int8_t *g_10;
    int8_t **g_9;
    int8_t *** volatile g_8;
    uint32_t g_30;
    volatile uint32_t g_34;
    volatile uint32_t *g_33;
    int32_t g_38;
    uint8_t g_59[7][3][2];
    uint64_t g_89;
    int16_t g_100;
    int16_t g_103;
    uint32_t g_133;
    int32_t g_135;
    int32_t * volatile g_134;
    int64_t g_139;
    int64_t g_153;
    uint16_t g_200;
    uint16_t *g_219;
    uint16_t **g_218;
    uint16_t *** volatile g_217;
    int32_t g_236;
    int32_t *g_238;
    int32_t ** volatile g_237[7];
    int32_t ** volatile g_239;
    int32_t g_242;
    int64_t * volatile * volatile g_263;
    uint8_t g_278[7];
    int64_t g_289;
    volatile int32_t g_325;
    uint64_t g_361;
    volatile union U0 g_365;
    volatile union U0 *g_364;
    uint64_t *g_403[5];
    union U0 g_411[9];
    int16_t g_412;
    int64_t g_431;
    volatile int64_t g_456[3][4][10];
    volatile int64_t *g_455;
    volatile int64_t **g_454[2];
    volatile int64_t ***g_453;
    int8_t g_474[1][3][5];
    int32_t g_533;
    volatile int32_t g_552[4][1][10];
    uint64_t g_560;
    int16_t * volatile *g_586;
    uint32_t g_675;
    uint64_t g_714;
    int32_t *g_806[5][7];
    uint16_t g_839;
    int8_t **g_842;
    int8_t ***g_843;
    int32_t g_863[3][3][4];
    int32_t * volatile g_867;
    int32_t * volatile g_871;
    int32_t * volatile g_872;
    int32_t ** volatile g_895;
    uint64_t **g_974;
    uint64_t ***g_973;
    int64_t * volatile g_999;
    int64_t * volatile * volatile g_998[1][8][1];
    uint32_t **g_1009;
    uint32_t *** volatile g_1010;
    uint32_t *** volatile g_1011;
    uint8_t g_1128[8][5][4];
    int32_t ** volatile g_1145;
    volatile uint32_t **g_1165;
    volatile uint32_t *** volatile g_1164;
    int8_t g_1189;
    uint16_t **g_1194;
    uint8_t *g_1199;
    uint8_t **g_1198;
    int8_t g_1258;
    int16_t g_1270;
    int32_t ** volatile g_1285;
    int32_t ** volatile g_1286;
    uint32_t g_1337;
    int32_t ** volatile g_1389;
    int32_t ** volatile g_1397;
    union U0 *g_1416;
    union U0 **g_1415;
    uint16_t g_1474[9][8][3];
    int32_t g_1519;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_1523);
int8_t *** func_11(uint64_t  p_12, int8_t *** p_13, uint64_t  p_14, int8_t ** p_15, struct S1 * p_1523);
uint8_t  func_20(int8_t *** p_21, uint32_t  p_22, uint16_t  p_23, int8_t * p_24, struct S1 * p_1523);
int8_t *** func_25(uint32_t  p_26, int8_t ** p_27, uint32_t  p_28, struct S1 * p_1523);
uint8_t  func_44(uint64_t  p_45, int64_t  p_46, uint8_t  p_47, uint8_t  p_48, int32_t  p_49, struct S1 * p_1523);
int32_t  func_62(uint8_t * p_63, int32_t  p_64, int32_t  p_65, int8_t * p_66, struct S1 * p_1523);
uint8_t * func_67(int32_t  p_68, int8_t *** p_69, struct S1 * p_1523);
int32_t * func_70(int32_t * p_71, struct S1 * p_1523);
int8_t  func_77(int16_t  p_78, int32_t  p_79, struct S1 * p_1523);
uint8_t  func_80(uint64_t  p_81, int8_t ** p_82, int64_t  p_83, uint8_t * p_84, int8_t * p_85, struct S1 * p_1523);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1523->g_8 p_1523->g_7 p_1523->g_9 p_1523->g_33 p_1523->g_59 p_1523->g_10 p_1523->g_34 p_1523->g_89 p_1523->g_38 p_1523->g_103 p_1523->g_30 p_1523->g_134 p_1523->g_200 p_1523->g_236 p_1523->g_239 p_1523->g_263 p_1523->g_242 p_1523->g_219 p_1523->g_100 p_1523->g_238 p_1523->g_139 p_1523->g_278 p_1523->g_153 p_1523->g_411 p_1523->g_412 p_1523->g_218 p_1523->g_453 p_1523->g_474 p_1523->g_217 p_1523->g_586 p_1523->g_289 p_1523->g_364 p_1523->g_365 p_1523->g_560 p_1523->g_431 p_1523->g_361 p_1523->g_842 p_1523->g_843 p_1523->g_1011 p_1523->g_1009 p_1523->g_863 p_1523->g_454 p_1523->g_455 p_1523->g_456 p_1523->g_1128 p_1523->g_895 p_1523->g_806 p_1523->g_1145 p_1523->g_1164 p_1523->g_135 p_1523->g_867 p_1523->g_533 p_1523->g_675 p_1523->g_1258 p_1523->g_1474 p_1523->g_1199 p_1523->g_839 p_1523->g_552
 * writes: p_1523->g_9 p_1523->g_30 p_1523->g_38 p_1523->g_59 p_1523->g_7 p_1523->g_89 p_1523->g_100 p_1523->g_135 p_1523->g_236 p_1523->g_238 p_1523->g_242 p_1523->g_103 p_1523->g_133 p_1523->g_289 p_1523->g_403 p_1523->g_412 p_1523->g_139 p_1523->g_431 p_1523->g_474 p_1523->g_200 p_1523->g_411.f1 p_1523->g_560 p_1523->g_533 p_1523->g_361 p_1523->g_843 p_1523->g_839 p_1523->g_675 p_1523->g_552 p_1523->g_806 p_1523->g_1165 p_1523->g_863 p_1523->g_1189 p_1523->g_1194 p_1523->g_1198 p_1523->g_973
 */
int32_t  func_1(struct S1 * p_1523)
{ /* block id: 4 */
    uint16_t l_2 = 0x69AEL;
    int8_t *l_6 = &p_1523->g_7[0][6];
    int8_t **l_5 = &l_6;
    uint32_t *l_29[9][2];
    int32_t l_39[6] = {0x42391700L,(-1L),0x42391700L,0x42391700L,(-1L),0x42391700L};
    uint64_t l_40 = 8UL;
    int8_t l_857[4];
    int64_t *l_859 = (void*)0;
    uint16_t **l_891 = &p_1523->g_219;
    uint8_t l_956 = 0xD6L;
    uint64_t l_1066[6] = {18446744073709551613UL,1UL,18446744073709551613UL,18446744073709551613UL,1UL,18446744073709551613UL};
    uint32_t *l_1084 = (void*)0;
    uint32_t **l_1083 = &l_1084;
    uint8_t l_1087[6][8] = {{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L},{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L},{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L},{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L},{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L},{0xF9L,0xE0L,0xE0L,0xF9L,0x94L,0xA9L,0xA9L,0x94L}};
    uint16_t l_1105 = 0x4CF1L;
    uint16_t l_1106 = 1UL;
    uint64_t l_1127 = 0x7FDD20D90512E26CL;
    int64_t l_1139 = (-1L);
    int32_t l_1150 = (-6L);
    int32_t *l_1260 = (void*)0;
    int32_t l_1408 = 0x0A18B6E5L;
    int8_t **l_1431 = (void*)0;
    uint16_t ****l_1439 = (void*)0;
    uint16_t l_1464 = 0x6423L;
    int32_t l_1473 = 0x4C50E5D0L;
    uint8_t l_1487 = 0UL;
    int64_t l_1491 = (-1L);
    uint64_t l_1505[8][9] = {{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL},{0UL,1UL,18446744073709551607UL,18446744073709551612UL,0xA8C514CA65EA825EL,0UL,18446744073709551612UL,0xEB659319C9D1F578L,18446744073709551612UL}};
    int16_t l_1515[10] = {0x1B97L,0x5BDAL,0x1B97L,0x1B97L,0x5BDAL,0x1B97L,0x1B97L,0x5BDAL,0x1B97L,0x1B97L};
    int32_t *l_1516 = &l_1150;
    int32_t *l_1517 = &p_1523->g_135;
    int32_t *l_1518[6];
    uint8_t l_1520 = 1UL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
            l_29[i][j] = &p_1523->g_30;
    }
    for (i = 0; i < 4; i++)
        l_857[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_1518[i] = (void*)0;
    l_2--;
    (*p_1523->g_8) = l_5;
    if (((p_1523->g_843 = func_11(((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((func_20(func_25((p_1523->g_30 = ((-1L) | p_1523->g_7[0][5])), (*p_1523->g_8), ((safe_add_func_uint64_t_u_u((p_1523->g_33 != p_1523->g_33), (((((-1L) && ((((p_1523->g_33 != (void*)0) , (p_1523->g_38 = (((safe_unary_minus_func_int64_t_s(((((l_2 < p_1523->g_7[0][6]) , l_2) >= l_2) >= p_1523->g_7[1][3]))) != p_1523->g_7[0][6]) & l_2))) , 0x4630L) < p_1523->g_7[0][6])) && p_1523->g_7[0][8]) > l_39[3]) ^ l_39[5]))) <= l_40), p_1523), l_40, l_40, (*p_1523->g_9), p_1523) , 0x5F3FL), 5)), 13)) != 0xA883FB223343ED89L) < 0xDBL) , p_1523->g_278[3]), &l_5, l_2, p_1523->g_842, p_1523)) != &l_5))
    { /* block id: 392 */
        int32_t *l_844[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_844[i][j] = &p_1523->g_533;
        }
        l_39[4] = ((*p_1523->g_134) = ((*p_1523->g_843) != (void*)0));
        return p_1523->g_474[0][0][2];
    }
    else
    { /* block id: 396 */
        int16_t l_851 = (-9L);
        int64_t *l_860[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_879 = &p_1523->g_38;
        int32_t *l_880 = (void*)0;
        int32_t l_908 = (-3L);
        int32_t l_910 = 0x0AC9A081L;
        int32_t l_912 = 0x00F3395EL;
        int32_t l_930 = 3L;
        uint64_t ***l_977 = (void*)0;
        uint32_t l_1026 = 4294967287UL;
        uint64_t l_1140 = 18446744073709551614UL;
        int8_t l_1162 = (-1L);
        int8_t l_1174 = 3L;
        union U0 l_1190 = {0};
        uint64_t l_1279 = 0x80E51FB1EB2D512EL;
        int8_t ***l_1357 = (void*)0;
        int32_t *l_1396 = (void*)0;
        uint8_t l_1409 = 0x7CL;
        uint32_t l_1410 = 4294967294UL;
        uint16_t ***l_1438 = &p_1523->g_218;
        uint16_t ****l_1437 = &l_1438;
        int8_t l_1490 = 0x52L;
        int16_t l_1493[2];
        uint64_t ****l_1502 = &p_1523->g_973;
        uint8_t l_1512 = 3UL;
        uint64_t l_1513 = 1UL;
        int32_t *l_1514 = &l_1408;
        int i;
        for (i = 0; i < 2; i++)
            l_1493[i] = 0x688CL;
lbl_1202:
        for (p_1523->g_839 = 10; (p_1523->g_839 == 30); ++p_1523->g_839)
        { /* block id: 399 */
            int16_t *l_852 = &l_851;
            int32_t l_858[10][1] = {{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L},{7L}};
            int32_t *l_861 = (void*)0;
            int32_t *l_862 = &p_1523->g_863[1][0][1];
            int32_t l_892 = 0x41A824CEL;
            int32_t l_951[1][4] = {{8L,8L,8L,8L}};
            int32_t *l_1032 = &l_912;
            int32_t l_1080 = 0x3D948B59L;
            int32_t *l_1086[9][7][4] = {{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}},{{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]},{(void*)0,(void*)0,(void*)0,&l_39[4]}}};
            int i, j, k;
            for (p_1523->g_289 = 0; p_1523->g_289 < 4; p_1523->g_289 += 1)
            {
                for (p_1523->g_30 = 0; p_1523->g_30 < 1; p_1523->g_30 += 1)
                {
                    for (p_1523->g_675 = 0; p_1523->g_675 < 10; p_1523->g_675 += 1)
                    {
                        p_1523->g_552[p_1523->g_289][p_1523->g_30][p_1523->g_675] = 1L;
                    }
                }
            }
        }
        for (p_1523->g_30 = 0; (p_1523->g_30 != 34); ++p_1523->g_30)
        { /* block id: 510 */
            int32_t l_1100[3][9][2] = {{{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L}},{{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L}},{{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L},{5L,0x10217284L}}};
            uint32_t **l_1103[10] = {&l_1084,&l_1084,&l_1084,&l_1084,&l_1084,&l_1084,&l_1084,&l_1084,&l_1084,&l_1084};
            int32_t l_1104 = 0x4C1B9C8BL;
            int8_t *l_1107 = &p_1523->g_474[0][1][1];
            int32_t l_1108 = 0L;
            int32_t l_1133 = 0x6AFFC20BL;
            int32_t l_1136 = 0x7ECFBA7FL;
            int8_t l_1137 = 0x47L;
            int32_t l_1138 = 0x4B35C454L;
            int32_t **l_1261 = &l_880;
            int i, j, k;
            if ((safe_lshift_func_uint16_t_u_s(((l_859 == (void*)0) != ((l_1104 = ((*l_879) = (((!((safe_mul_func_uint8_t_u_u(p_1523->g_7[0][6], (safe_div_func_int64_t_s_s(l_857[0], (l_1100[2][7][0] |= (-5L)))))) < (((((*l_1107) &= (((((((safe_sub_func_int16_t_s_s(l_857[3], (((4294967295UL < ((4294967286UL != (l_1103[4] == (*p_1523->g_1011))) ^ 1L)) != l_1104) >= l_956))) != l_1104) , p_1523->g_863[1][0][1]) , l_1105) & l_1106) || 0x085EL) , l_2)) && (***p_1523->g_843)) , (***p_1523->g_453)) , l_1087[3][5]))) ^ l_1066[3]) , 0x5619AD01L))) == l_1108)), 2)))
            { /* block id: 515 */
                int8_t l_1113 = 0x7BL;
                int32_t l_1131[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                union U0 *l_1191 = &l_1190;
                uint8_t **l_1197 = (void*)0;
                uint16_t l_1206 = 0x9940L;
                int8_t l_1219 = 5L;
                int32_t l_1238 = 0x5D5707C3L;
                int32_t l_1239 = 2L;
                uint64_t l_1257 = 18446744073709551606UL;
                int i;
                for (l_851 = 0; (l_851 <= 1); l_851 += 1)
                { /* block id: 518 */
                    int64_t *l_1129 = &p_1523->g_289;
                    int32_t l_1132 = 0L;
                    int32_t l_1134[2];
                    int32_t l_1135 = 2L;
                    int32_t l_1163 = 0x07B95DD4L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1134[i] = 0x1B0A65CEL;
                    if (((~(safe_sub_func_uint64_t_u_u((+l_1087[(l_851 + 3)][(l_851 + 3)]), (((*l_1129) = (safe_mul_func_int8_t_s_s(((l_1113 < (safe_div_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u(l_2, (safe_add_func_int8_t_s_s((((*p_1523->g_364) , (p_1523->g_236 != ((void*)0 == (*l_891)))) | (safe_unary_minus_func_int64_t_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((&p_1523->g_973 != ((l_39[3] &= ((l_1087[(l_851 + 3)][(l_851 + 3)] , l_1113) | (*p_1523->g_10))) , (void*)0)), l_1106)), 11)), 0x4EC8CAD1FFE7DAFDL)) < l_1087[(l_851 + 3)][(l_851 + 3)])))), l_1127)))) , l_39[3]) > l_1113) == l_1066[5]), 0x5FDFL))) ^ p_1523->g_1128[2][1][0]), l_1113))) , l_857[1])))) & 0L))
                    { /* block id: 521 */
                        int32_t *l_1130[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1130[i] = &l_1104;
                        --l_1140;
                        if (l_1087[4][5])
                            continue;
                    }
                    else
                    { /* block id: 524 */
                        uint32_t **l_1148 = (void*)0;
                        uint32_t **l_1149 = &l_29[5][0];
                        int32_t l_1161 = 0L;
                        union U0 *l_1169 = &p_1523->g_411[7];
                        union U0 **l_1168 = &l_1169;
                        uint64_t *l_1185[5] = {&l_1066[5],&l_1066[5],&l_1066[5],&l_1066[5],&l_1066[5]};
                        int32_t *l_1186 = &p_1523->g_863[1][0][1];
                        int16_t l_1187[10][7][3] = {{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}},{{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL},{(-1L),(-7L),0x68BCL}}};
                        int32_t l_1188 = 0x255C8FFDL;
                        int i, j, k;
                        (*p_1523->g_1145) = ((l_1132 = ((safe_add_func_uint64_t_u_u((&p_1523->g_999 == &p_1523->g_999), ((*p_1523->g_455) == 0x87F104D22125CBE6L))) < (*l_879))) , (*p_1523->g_895));
                        l_1163 = (l_1134[0] == (((l_1162 = (4UL != ((safe_rshift_func_uint16_t_u_s(((l_1150 = (l_39[2] = ((**p_1523->g_9) |= (((*l_1149) = &p_1523->g_30) != l_1084)))) & p_1523->g_100), l_1132)) > ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(0x8129L, 4)), 6)) < (((p_1523->g_675 = (((((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((((0L == (l_1087[3][5] , 0x7EEDEBA802991223L)) , l_1108) > l_1161), l_1133)) < p_1523->g_34) <= 0L), l_1132)) <= l_1134[1]) > 0x26DC35BA66578356L) & 1L), l_1131[3])) , l_1161) < l_1137) || 0xCEA78D73L) | 6UL)) & p_1523->g_30) || 0x72D88694615C8C95L))))) , (*p_1523->g_33)) , l_1131[3]));
                        (*p_1523->g_1164) = &p_1523->g_33;
                        p_1523->g_1189 = ((*l_879) = ((safe_mod_func_int32_t_s_s((((*l_1168) = &p_1523->g_411[5]) == ((safe_lshift_func_uint8_t_u_s((((!((safe_mod_func_uint8_t_u_u(((l_1174 |= l_1161) < (((+0x53L) >= (p_1523->g_361 , (l_1105 || (0x6699L >= (((((safe_lshift_func_uint16_t_u_u(((**p_1523->g_218) = ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x5DB6L, (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((l_1087[(l_851 + 1)][(l_851 + 1)] = (((*l_1186) |= (l_1161 | (l_1131[4] = l_1163))) , l_1136)), l_1134[0])) >= p_1523->g_100) , p_1523->g_236), l_1127)))), 251UL)) & l_1161)), 6)) & l_1133) <= l_1187[0][6][1]) > l_1161) , l_1188))))) < l_1187[8][5][1])), 0x09L)) < (*l_879))) , l_1187[1][5][2]) && (***p_1523->g_453)), 6)) , (void*)0)), l_1136)) , (*l_879)));
                    }
                    for (l_1026 = 0; (l_1026 <= 1); l_1026 += 1)
                    { /* block id: 546 */
                        int i, j, k;
                        return l_1100[(l_1026 + 1)][(l_1026 + 6)][l_1026];
                    }
                }
                if (l_1131[3])
                    break;
                if ((((*l_1191) = l_1190) , l_1066[0]))
                { /* block id: 552 */
                    (*l_879) ^= (safe_sub_func_uint16_t_u_u((((*p_1523->g_217) == (p_1523->g_1194 = (void*)0)) <= 0x3BL), (safe_add_func_uint16_t_u_u((*p_1523->g_219), ((l_1108 = p_1523->g_236) == (**p_1523->g_218))))));
                    p_1523->g_1198 = l_1197;
                    for (l_1113 = 0; (l_1113 > (-15)); l_1113 = safe_sub_func_uint16_t_u_u(l_1113, 4))
                    { /* block id: 559 */
                        int32_t *l_1203 = &l_1131[3];
                        int32_t *l_1204 = &l_1108;
                        int32_t *l_1205 = &l_1150;
                        if (p_1523->g_100)
                            goto lbl_1202;
                        --l_1206;
                    }
                }
                else
                { /* block id: 563 */
                    uint32_t l_1216 = 3UL;
                    int32_t l_1240 = 0x226EA4F3L;
                    int16_t *l_1246 = &p_1523->g_412;
                    int16_t **l_1245 = &l_1246;
                    if ((*p_1523->g_134))
                        break;
                    for (l_1127 = 28; (l_1127 <= 48); l_1127 = safe_add_func_uint32_t_u_u(l_1127, 4))
                    { /* block id: 567 */
                        int32_t *l_1211 = &l_1131[3];
                        int32_t *l_1212 = &l_1138;
                        int32_t *l_1213 = &p_1523->g_236;
                        int32_t *l_1214 = &p_1523->g_38;
                        int32_t *l_1215[3];
                        int64_t **l_1237 = &l_860[5];
                        int64_t ***l_1236 = &l_1237;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1215[i] = &l_930;
                        l_1216++;
                        (*l_1213) &= (l_1219 == (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(0x3A89DD0DL, (l_1239 |= ((*p_1523->g_867) >= (((*p_1523->g_219) = (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((1L < ((((*l_6) = 0x39L) , &p_1523->g_454[0]) == l_1236)) <= (l_1238 = p_1523->g_675)), (-5L))), p_1523->g_38)), l_1106)) >= l_1138) , l_1216), l_857[1])), 0x6732L))) & l_1131[4]))))), 18446744073709551615UL)), l_1219)));
                        (*l_879) |= l_1238;
                    }
                    l_1240 &= l_1239;
                    (*l_879) = (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((((void*)0 == l_1245) | (l_1240 != 0x7AL)) != 0x743BL), l_1240)), ((safe_sub_func_uint32_t_u_u(l_1240, (safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_1137 != 3L), l_1257)), 0x2653L)), 0x38017F90L)), 0x5594L)))) , p_1523->g_474[0][2][2])));
                }
                l_1150 |= p_1523->g_1258;
            }
            else
            { /* block id: 580 */
                int32_t l_1259 = 0x7442F81BL;
                return l_1259;
            }
            (*l_1261) = l_1260;
        }
        if (((*l_879) , (-1L)))
        { /* block id: 585 */
            int16_t l_1264 = 0x7AE9L;
            int8_t *l_1281[1][10] = {{&l_1162,&l_857[3],(void*)0,&l_857[3],&l_1162,&l_1162,&l_857[3],(void*)0,&l_857[3],&l_1162}};
            int32_t l_1304[5] = {7L,7L,7L,7L,7L};
            int8_t l_1307 = 0L;
            int64_t l_1392[7][6] = {{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL},{0x7A29D71EB525B4A6L,(-9L),0L,0x5DF0C51127A62D7EL,(-7L),0x5DF0C51127A62D7EL}};
            uint32_t l_1471 = 4294967295UL;
            int64_t l_1472 = 4L;
            int i, j;
            for (l_1105 = 1; (l_1105 <= 5); l_1105 += 1)
            { /* block id: 588 */
                int32_t l_1265 = (-8L);
                uint32_t l_1280[2][4] = {{0xD643A470L,0xD643A470L,0xD643A470L,0xD643A470L},{0xD643A470L,0xD643A470L,0xD643A470L,0xD643A470L}};
                int32_t l_1282 = 1L;
                int64_t *l_1283 = &p_1523->g_289;
                uint64_t l_1334[4];
                uint32_t **l_1345 = &l_1084;
                int8_t ***l_1359 = &p_1523->g_9;
                uint32_t l_1382[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                uint32_t l_1393 = 0UL;
                int32_t l_1425 = 0x1FFA277FL;
                int32_t l_1426[4][10][6] = {{{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L}},{{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L}},{{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L}},{{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L},{(-3L),0x3CA7BADBL,0x3CA7BADBL,(-3L),1L,0x05F91D14L}}};
                uint32_t l_1428 = 1UL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1334[i] = 18446744073709551614UL;
                (1 + 1);
            }
            (*p_1523->g_134) &= ((*l_879) = l_1473);
            l_39[4] = (p_1523->g_1474[5][5][2] == ((((safe_rshift_func_uint8_t_u_u((((((l_1304[2] = (safe_div_func_uint8_t_u_u(((*p_1523->g_1199) = (((safe_mul_func_int8_t_s_s(((((*l_879) = (((**l_5) = (~0L)) ^ (0x7A8EL ^ 0L))) , p_1523->g_412) & ((((((safe_rshift_func_uint16_t_u_s((0x61843BBDL == (safe_lshift_func_int8_t_s_s(l_1487, (l_1264 | ((safe_add_func_uint64_t_u_u(0x2504ABA690CEC60EL, (***p_1523->g_453))) , (-1L)))))), 3)) || l_1304[3]) <= l_1307) | (*p_1523->g_219)) & l_1392[2][2]) && l_1490)), l_1473)) & 0xF120L) >= 0L)), l_1471))) || 0L) <= l_1472) , 0x64L) > l_1392[0][1]), l_1471)) != p_1523->g_839) != l_1491) < 1UL));
        }
        else
        { /* block id: 674 */
            int32_t l_1492 = (-1L);
            (*l_879) = (l_1492 | l_1493[1]);
            return p_1523->g_34;
        }
        l_39[3] &= (((*l_1514) |= ((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((*p_1523->g_1199) != ((-4L) <= (((safe_lshift_func_uint8_t_u_u(((0x77L | (((*l_1502) = &p_1523->g_974) != (void*)0)) | (safe_lshift_func_uint8_t_u_u(((((l_1505[2][4] <= ((**p_1523->g_218) != (~((((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((1UL && (safe_lshift_func_int16_t_s_s(((***p_1523->g_8) < (**p_1523->g_9)), 0))), 11)) == 0x812EL), l_1066[2])) == l_1106) ^ p_1523->g_7[0][0]) , (*p_1523->g_219))))) == l_1505[2][4]) > (**p_1523->g_9)) == l_1512), 6))), 1)) && (*l_879)) , l_1513))), (*l_879))), (*l_879))), p_1523->g_1128[2][1][0])) , p_1523->g_552[0][0][0])) , 0x7D37533EL);
    }
    --l_1520;
    return (*l_1517);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t *** func_11(uint64_t  p_12, int8_t *** p_13, uint64_t  p_14, int8_t ** p_15, struct S1 * p_1523)
{ /* block id: 389 */
    return &p_1523->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_103 p_1523->g_263 p_1523->g_238 p_1523->g_9 p_1523->g_278 p_1523->g_453 p_1523->g_7 p_1523->g_218 p_1523->g_219 p_1523->g_200 p_1523->g_59 p_1523->g_30 p_1523->g_474 p_1523->g_411 p_1523->g_217 p_1523->g_239 p_1523->g_38 p_1523->g_10 p_1523->g_236 p_1523->g_8 p_1523->g_586 p_1523->g_289 p_1523->g_34 p_1523->g_89 p_1523->g_134 p_1523->g_364 p_1523->g_365 p_1523->g_560 p_1523->g_431 p_1523->g_361 p_1523->g_100
 * writes: p_1523->g_238 p_1523->g_103 p_1523->g_7 p_1523->g_474 p_1523->g_200 p_1523->g_59 p_1523->g_411.f1 p_1523->g_412 p_1523->g_100 p_1523->g_38 p_1523->g_560 p_1523->g_403 p_1523->g_9 p_1523->g_89 p_1523->g_30 p_1523->g_135 p_1523->g_236 p_1523->g_289 p_1523->g_533 p_1523->g_361 p_1523->g_133
 */
uint8_t  func_20(int8_t *** p_21, uint32_t  p_22, uint16_t  p_23, int8_t * p_24, struct S1 * p_1523)
{ /* block id: 167 */
    int32_t *l_433 = &p_1523->g_236;
    int32_t **l_434 = &p_1523->g_238;
    int32_t l_436[10] = {0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL,0x5A91FBFDL};
    int32_t l_438 = 0x09D4FC97L;
    int64_t *l_447 = &p_1523->g_153;
    int64_t **l_446 = &l_447;
    uint64_t **l_457 = &p_1523->g_403[3];
    int16_t l_553[5] = {0L,0L,0L,0L,0L};
    int8_t ***l_612 = (void*)0;
    int32_t l_614[9][5][1] = {{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}},{{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L},{0x26974362L}}};
    int32_t l_615 = 0x09C6BF81L;
    int64_t *l_620 = (void*)0;
    int16_t l_644 = 0x46B2L;
    uint16_t l_648 = 1UL;
    int32_t l_729 = 1L;
    int16_t *l_754 = &l_553[0];
    int16_t **l_753[1];
    int32_t l_755 = 6L;
    uint32_t l_759 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_753[i] = &l_754;
    (*l_434) = l_433;
    for (p_1523->g_103 = 0; (p_1523->g_103 <= 1); p_1523->g_103 += 1)
    { /* block id: 171 */
        int32_t *l_435[8] = {&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242};
        int32_t l_437 = 0L;
        uint64_t l_439[1];
        int64_t **l_449 = &l_447;
        uint64_t **l_458 = &p_1523->g_403[1];
        int8_t ***l_465 = &p_1523->g_9;
        uint32_t l_468 = 4294967288UL;
        int64_t l_551 = 0x149A7F9ED6D21A75L;
        uint16_t ***l_636 = &p_1523->g_218;
        int8_t l_647[5];
        int64_t l_822 = 0x26C7CDCCEE0CE6A2L;
        int i;
        for (i = 0; i < 1; i++)
            l_439[i] = 0xA29E69DEA8204617L;
        for (i = 0; i < 5; i++)
            l_647[i] = 1L;
        l_439[0]++;
        for (p_22 = 1; (p_22 <= 6); p_22 += 1)
        { /* block id: 175 */
            int64_t ***l_448[5];
            int64_t ****l_452 = &l_448[0];
            int32_t l_464 = (-4L);
            uint32_t *l_484 = &p_1523->g_133;
            int32_t l_509 = 0x46E0F800L;
            uint32_t l_510 = 4294967286UL;
            int16_t l_523 = (-1L);
            int32_t l_531[4];
            uint32_t l_554 = 0xA6EBB624L;
            uint64_t *l_604 = (void*)0;
            uint64_t *l_605 = &p_1523->g_361;
            uint32_t *l_613 = &p_1523->g_30;
            uint16_t ***l_637 = &p_1523->g_218;
            int i;
            for (i = 0; i < 5; i++)
                l_448[i] = &l_446;
            for (i = 0; i < 4; i++)
                l_531[i] = (-1L);
            l_433 = ((*l_434) = &l_437);
            if ((safe_sub_func_uint16_t_u_u((((*l_452) = (((p_23++) != (((l_449 = l_446) != p_1523->g_263) != (((void*)0 == &p_1523->g_133) , (((((safe_div_func_uint32_t_u_u(((void*)0 == &p_1523->g_411[p_22]), (**l_434))) , (void*)0) == (*p_21)) >= p_1523->g_278[6]) || (**l_434))))) , &l_446)) != p_1523->g_453), 65534UL)))
            { /* block id: 181 */
                uint64_t ***l_459 = &l_458;
                int32_t l_466 = 0x56B91CECL;
                int32_t l_467 = 0x14F2A6D1L;
                int8_t *l_473 = &p_1523->g_474[0][0][4];
                int8_t ****l_479 = &l_465;
                int i, j;
                l_468 = ((*l_433) = ((l_457 == ((*l_459) = l_458)) , ((safe_mul_func_uint8_t_u_u(7UL, (*p_24))) , (safe_sub_func_int8_t_s_s(((((((p_1523->g_7[p_1523->g_103][(p_22 + 1)] ^= ((((**p_1523->g_218) < (l_464 >= (((l_466 = (l_465 == (((p_23 , p_22) > (**l_434)) , p_21))) > l_467) || p_22))) , p_23) || p_23)) != p_22) && 0x04E0L) >= 0x1AL) != p_1523->g_59[0][1][0]) >= (**l_434)), p_1523->g_30)))));
                l_466 ^= (safe_div_func_uint8_t_u_u((((**p_1523->g_218) <= ((((*p_24) = ((*l_473) |= (safe_mod_func_uint16_t_u_u((p_23 , (((*p_24) , (((*l_433) &= 1UL) <= p_23)) >= 0UL)), p_22)))) , (((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_479) = &p_1523->g_9) == &p_1523->g_9), 0x00L)), 5)) , (void*)0) == (void*)0)) , 0x0201L)) ^ 0x73L), l_464));
                (**l_434) = (((((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(p_23, (&l_447 == (l_446 = &l_447)))), 2)) && (*p_24)) , &p_1523->g_133) == l_484) , p_23);
            }
            else
            { /* block id: 194 */
                uint8_t *l_495 = &p_1523->g_59[1][0][0];
                int16_t *l_504 = &p_1523->g_411[p_1523->g_103].f1;
                int16_t *l_505 = &p_1523->g_100;
                int8_t *l_506[4][10][6] = {{{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]}},{{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]}},{{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]}},{{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]},{&p_1523->g_474[0][0][4],&p_1523->g_474[0][0][1],(void*)0,&p_1523->g_474[0][0][0],&p_1523->g_474[0][0][1],&p_1523->g_474[0][0][0]}}};
                int32_t l_507 = (-1L);
                int32_t l_508 = 0x65F3DBC0L;
                int32_t l_529 = 0x2E906515L;
                int32_t l_530 = 0x3EEBAE8CL;
                int32_t l_532 = 1L;
                int32_t l_535 = 0x52451908L;
                int32_t l_536 = 0x4E2368F9L;
                int32_t l_539 = 0x1E22773BL;
                int32_t l_540 = (-9L);
                int32_t l_542 = 0x24B4A164L;
                int32_t l_544 = 0x47E02ACCL;
                int32_t l_546 = (-2L);
                int32_t l_547 = 0x212ADB69L;
                int32_t l_548 = (-4L);
                int32_t l_549 = 0x2A156D1CL;
                int32_t l_550[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                uint16_t l_587[6];
                int64_t ****l_592[4][10][6] = {{{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]}},{{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]}},{{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]}},{{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]},{&l_448[3],&l_448[4],&l_448[2],&l_448[2],(void*)0,&l_448[2]}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_587[i] = 0xA766L;
                (*l_433) &= (((safe_lshift_func_int16_t_s_s(((p_1523->g_411[p_1523->g_103] , &l_435[7]) == (void*)0), (~l_464))) < (+((*p_1523->g_219) = l_464))) ^ (**p_1523->g_9));
                if (((((safe_div_func_uint64_t_u_u(((l_508 = (((((**p_1523->g_218) = (p_23 = (safe_sub_func_int8_t_s_s(((**l_434) <= (p_22 ^ (~(safe_div_func_uint64_t_u_u(((l_507 ^= ((safe_mul_func_uint8_t_u_u(((0x4C7CL > p_22) , ((*l_495) = p_23)), (safe_add_func_int16_t_s_s(((*l_505) = (((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(248UL, (safe_lshift_func_int16_t_s_s((**l_434), (p_1523->g_412 = ((*l_504) = p_22)))))), p_22)) >= 0x43AEB4B7L) <= (***p_21))), (*p_1523->g_219))))) > p_22)) >= p_22), (*l_433)))))), 0L)))) >= p_22) > (**p_1523->g_9)) == p_22)) | l_509), p_22)) , l_510) && p_23) || p_22))
                { /* block id: 205 */
                    int8_t l_524 = 0x5FL;
                    int32_t l_528[9][4] = {{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L},{(-8L),0L,0L,0L}};
                    uint64_t *l_561 = &p_1523->g_89;
                    uint32_t *l_593 = &p_1523->g_133;
                    uint32_t **l_594 = &l_593;
                    int64_t *l_595 = &p_1523->g_289;
                    int i, j;
                    if (l_507)
                    { /* block id: 206 */
                        int32_t l_527 = 2L;
                        int32_t l_534 = (-7L);
                        int32_t l_537 = 2L;
                        int32_t l_538 = 0L;
                        int32_t l_541 = 1L;
                        int32_t l_543 = 1L;
                        int32_t l_545[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_545[i] = 0L;
                        (*l_434) = &l_509;
                        l_509 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((-1L) > ((safe_add_func_int32_t_s_s(l_508, ((safe_sub_func_int8_t_s_s((**p_1523->g_9), (p_22 > (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((**l_434), (***p_1523->g_217))) >= (0x09L > l_523)), ((***p_21) <= (***p_21))))))) == 0UL))) != (*p_1523->g_219))) < l_524), 9)), 0x6561F577L));
                        p_1523->g_38 ^= (safe_div_func_uint32_t_u_u(p_22, (**p_1523->g_239)));
                        l_554--;
                    }
                    else
                    { /* block id: 211 */
                        uint64_t *l_559 = &p_1523->g_560;
                        int32_t l_568 = 1L;
                        int8_t **l_580 = &p_1523->g_10;
                        int8_t ***l_579 = &l_580;
                        int16_t **l_585 = &l_504;
                        (**l_434) = ((*p_1523->g_219) || (((((*l_559) = p_1523->g_38) , (((*l_458) = (void*)0) == l_561)) <= ((*p_1523->g_10) = (safe_rshift_func_uint8_t_u_s(0UL, (***p_21))))) <= ((safe_add_func_uint8_t_u_u(((p_22 , (safe_mod_func_uint64_t_u_u(18446744073709551606UL, p_23))) , l_568), p_23)) > (**p_1523->g_218))));
                        (*l_433) = l_528[7][1];
                        (*p_1523->g_238) &= ((safe_lshift_func_int16_t_s_u((p_1523->g_236 , (safe_sub_func_uint8_t_u_u((+p_22), l_528[4][3]))), ((safe_mul_func_uint16_t_u_u(65526UL, ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(0L, 6)) ^ (((*p_1523->g_8) = (*p_1523->g_8)) != ((*l_579) = (void*)0))), ((**l_585) = ((safe_sub_func_int32_t_s_s((-1L), (safe_sub_func_int64_t_s_s((l_585 != p_1523->g_586), p_22)))) < p_1523->g_289)))) > p_22))) ^ l_587[4]))) || (-1L));
                        if (l_523)
                            continue;
                    }
                    (*p_1523->g_239) = func_70(&l_509, p_1523);
                    (**l_434) ^= ((((((*l_433) = (*l_433)) | 0UL) > ((void*)0 != &l_446)) == l_528[2][3]) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((255UL >= ((((*p_1523->g_364) , l_592[3][3][5]) == (((*l_595) = (((((*l_594) = l_593) == (void*)0) != p_1523->g_560) || 0x16L)) , &p_1523->g_453)) == p_1523->g_431)), p_23)), 2)));
                }
                else
                { /* block id: 228 */
                    for (p_1523->g_560 = 1; (p_1523->g_560 <= 8); p_1523->g_560 += 1)
                    { /* block id: 231 */
                        if ((**l_434))
                            break;
                    }
                }
                for (l_510 = 1; (l_510 <= 6); l_510 += 1)
                { /* block id: 237 */
                    int i;
                    if (p_1523->g_278[(p_1523->g_103 + 4)])
                        break;
                    for (p_1523->g_533 = 8; (p_1523->g_533 >= 1); p_1523->g_533 -= 1)
                    { /* block id: 241 */
                        return l_548;
                    }
                }
            }
            l_436[3] |= (safe_add_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u(((((18446744073709551615UL || (((l_531[1] , ((safe_add_func_int64_t_s_s(p_23, ((((*p_24) , &p_1523->g_9) == ((safe_sub_func_int16_t_s_s((((*l_605)--) ^ ((void*)0 == (*p_21))), ((*p_1523->g_219) = (!(safe_sub_func_int32_t_s_s((((((p_1523->g_30 , ((safe_mul_func_uint8_t_u_u(p_23, p_22)) != p_22)) && (*l_433)) >= p_23) != p_23) >= p_23), p_1523->g_236)))))) , l_612)) || 0x10ED4458L))) , l_613)) == l_433) == (**l_434))) , 0xB9570E6C872F30F5L) , 0x4EL) && (**p_1523->g_9)), l_614[5][3][0])) != 255UL) , 0L) == l_615), 1L));
            for (p_1523->g_289 = 8; (p_1523->g_289 >= 2); p_1523->g_289 -= 1)
            { /* block id: 251 */
                int64_t **l_616 = (void*)0;
                int64_t **l_617 = (void*)0;
                int64_t *l_619 = &p_1523->g_289;
                int64_t **l_618[9][7][2] = {{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}},{{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0},{&l_619,(void*)0}}};
                int16_t *l_625 = &p_1523->g_411[7].f1;
                int16_t *l_626 = (void*)0;
                int16_t *l_627 = &p_1523->g_411[7].f1;
                int16_t *l_628 = &l_523;
                int32_t l_629[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_629[i] = 4L;
                l_464 = ((l_509 , ((l_620 = (void*)0) != l_447)) , (safe_add_func_int16_t_s_s(((*l_628) |= (18446744073709551615UL >= (safe_rshift_func_uint8_t_u_s(p_1523->g_100, (&l_437 != &l_437))))), l_629[4])));
                for (l_554 = 0; (l_554 <= 1); l_554 += 1)
                { /* block id: 257 */
                    uint32_t l_640 = 0UL;
                    uint64_t l_641[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_641[i] = 1UL;
                    l_509 ^= (((*l_433) = ((((((safe_lshift_func_int16_t_s_s(((p_1523->g_133 = ((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_636 != (l_629[4] , ((*l_433) , l_637))), (l_554 | 0x30B41F19CA011F37L))) > ((((l_531[3] &= (safe_sub_func_int16_t_s_s(l_640, ((l_641[1] ^ ((safe_mod_func_int8_t_s_s(l_644, 255UL)) , p_23)) || (*l_433))))) , (**p_1523->g_217)) == (void*)0) , (*p_1523->g_238))), 0xD5DDL)) > l_629[3])) > p_22), 4)) >= 0x7AA6L) , p_23) || (**p_1523->g_218)) ^ p_23) != l_523)) || 0x6D9DCE8BL);
                }
            }
        }
    }
    (*p_21) = (*p_1523->g_8);
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_59 p_1523->g_10 p_1523->g_34 p_1523->g_89 p_1523->g_38 p_1523->g_103 p_1523->g_30 p_1523->g_9 p_1523->g_134 p_1523->g_8 p_1523->g_7 p_1523->g_200 p_1523->g_236 p_1523->g_239 p_1523->g_33 p_1523->g_263 p_1523->g_242 p_1523->g_219 p_1523->g_100 p_1523->g_238 p_1523->g_139 p_1523->g_278 p_1523->g_153 p_1523->g_411 p_1523->g_412 p_1523->g_218
 * writes: p_1523->g_59 p_1523->g_7 p_1523->g_89 p_1523->g_100 p_1523->g_30 p_1523->g_135 p_1523->g_236 p_1523->g_238 p_1523->g_242 p_1523->g_103 p_1523->g_133 p_1523->g_38 p_1523->g_289 p_1523->g_403 p_1523->g_412 p_1523->g_139 p_1523->g_431
 */
int8_t *** func_25(uint32_t  p_26, int8_t ** p_27, uint32_t  p_28, struct S1 * p_1523)
{ /* block id: 9 */
    uint64_t l_43 = 0x2CD0AB83DCDCBD5FL;
    uint8_t *l_58[5][10][1] = {{{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]}},{{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]}},{{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]}},{{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]}},{{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]},{&p_1523->g_59[3][2][0]}}};
    int32_t *l_241 = &p_1523->g_242;
    int32_t l_252 = 0x7A6E5D1AL;
    uint8_t l_253 = 249UL;
    int64_t *l_288[6][8][5] = {{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}},{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}},{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}},{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}},{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}},{{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289},{(void*)0,&p_1523->g_289,&p_1523->g_289,(void*)0,&p_1523->g_289}}};
    uint64_t *l_402 = &p_1523->g_89;
    uint64_t **l_401[8][7] = {{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402},{&l_402,(void*)0,(void*)0,&l_402,(void*)0,&l_402,&l_402}};
    int16_t *l_410 = &p_1523->g_100;
    uint16_t **l_413[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_414 = 0x29E3522CL;
    uint32_t l_421 = 0xD0070319L;
    int64_t l_432 = 7L;
    int i, j, k;
    (*l_241) = (safe_lshift_func_uint8_t_u_u(l_43, func_44(((safe_add_func_uint32_t_u_u(p_26, (safe_mod_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((p_1523->g_59[0][1][0]++), 6)) , ((p_1523->g_289 = (func_62(func_67(p_1523->g_59[0][1][0], &p_1523->g_9, p_1523), ((*l_241) = 0x6015CD30L), (safe_unary_minus_func_int8_t_s((((((-9L) & (safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_252 = 0x6343L), ((l_253 > p_28) <= p_1523->g_103))), 0x57L)) <= (-10L)), 0UL))) , 0x0B46675EL) ^ l_43) , p_28))), l_58[3][6][0], p_1523) < p_1523->g_139)) , (***p_1523->g_8))), p_28)) & l_43) , 0x32685E0CE5C9CA6BL), p_1523->g_278[5])))) | p_1523->g_139), l_253, p_28, p_1523->g_153, p_1523->g_278[4], p_1523)));
    for (l_253 = 0; (l_253 <= 50); ++l_253)
    { /* block id: 143 */
        int64_t l_394 = 0L;
        l_394 = (p_1523->g_30 & p_26);
        (*p_1523->g_238) &= (safe_div_func_uint8_t_u_u((0x288B0B05L == p_28), (*l_241)));
    }
    (*l_241) = ((((+((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_1523->g_34, (&l_43 != (p_1523->g_403[1] = (void*)0)))), (safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((65526UL && (safe_mul_func_uint8_t_u_u((~((0x2AL != (((((((*l_410) = (*l_241)) , (((p_1523->g_411[7] , (((p_1523->g_412 ^= p_26) , l_413[0]) == l_413[0])) && (*l_241)) , (*p_1523->g_219))) <= p_1523->g_7[0][6]) , p_28) || p_26) < p_1523->g_278[5])) <= 0x3FL)), (*l_241)))), 1L)) || l_414), 0x10L)))) & (**p_1523->g_218)) | (**p_1523->g_9)) > p_1523->g_278[6])) , (*l_241)) & (*l_241)) , (**p_1523->g_239));
    for (p_26 = (-24); (p_26 < 45); p_26++)
    { /* block id: 153 */
        int32_t *l_418 = &p_1523->g_236;
        int32_t *l_419 = &l_252;
        int32_t *l_420[9][2] = {{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414},{&p_1523->g_242,&l_414}};
        int16_t **l_428 = &l_410;
        uint32_t *l_429[3][9][3] = {{{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421}},{{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421}},{{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421},{&p_1523->g_133,&p_1523->g_133,&l_421}}};
        int32_t l_430 = 0x4B27B7E0L;
        int i, j, k;
        (*p_1523->g_238) |= ((*l_241) = (safe_unary_minus_func_int16_t_s((*l_241))));
        for (p_1523->g_89 = 0; p_1523->g_89 < 2; p_1523->g_89 += 1)
        {
            for (p_1523->g_139 = 0; p_1523->g_139 < 10; p_1523->g_139 += 1)
            {
                p_1523->g_7[p_1523->g_89][p_1523->g_139] = 0x00L;
            }
        }
        l_421--;
        l_414 |= ((((p_28 != ((((*l_241) = ((*l_419) = (0x017FL ^ ((p_1523->g_431 = ((safe_sub_func_int8_t_s_s(0x5AL, ((p_1523->g_133 = (((*l_428) = &p_1523->g_103) != (void*)0)) & l_430))) != ((*l_402) = (0x29L == (((*l_241) || 0x05L) <= 0L))))) & (*l_241))))) == p_26) <= (-4L))) , l_432) & 0L) >= p_1523->g_236);
    }
    return &p_1523->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_89 p_1523->g_278
 * writes: p_1523->g_89
 */
uint8_t  func_44(uint64_t  p_45, int64_t  p_46, uint8_t  p_47, uint8_t  p_48, int32_t  p_49, struct S1 * p_1523)
{ /* block id: 92 */
    int64_t l_300 = 0x31ACB9F7C61B3FF6L;
    int32_t l_304 = 0x25F03459L;
    int32_t l_314 = 0x5B2431B7L;
    int32_t l_316 = (-1L);
    int32_t l_318[10] = {9L,0x350104BBL,0x613CF344L,0x350104BBL,9L,9L,0x350104BBL,0x613CF344L,0x350104BBL,9L};
    int32_t *l_334 = (void*)0;
    int32_t l_358 = 0L;
    int32_t *l_368 = &l_314;
    int32_t l_369 = 0x54FA31ECL;
    uint16_t l_375 = 0x6A76L;
    uint32_t l_385[8][6][3] = {{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}},{{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L},{0xD448F311L,4294967295UL,0xDEDD1452L}}};
    int i, j, k;
    for (p_48 = 0; (p_48 <= 46); p_48 = safe_add_func_uint32_t_u_u(p_48, 2))
    { /* block id: 95 */
        int32_t l_299 = 3L;
        int32_t l_302 = 5L;
        int32_t l_311 = (-1L);
        int32_t l_313 = 0x6760D366L;
        int32_t l_320 = 1L;
        int32_t l_326[3];
        uint8_t l_331[2];
        int32_t *l_378 = &p_1523->g_242;
        int32_t *l_379 = &l_313;
        int32_t *l_380 = &l_369;
        int32_t *l_381 = (void*)0;
        int32_t *l_382 = &p_1523->g_38;
        int32_t *l_383 = &l_358;
        int32_t *l_384[6][7][3] = {{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}},{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}},{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}},{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}},{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}},{{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]},{&p_1523->g_242,(void*)0,&l_326[0]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_326[i] = 1L;
        for (i = 0; i < 2; i++)
            l_331[i] = 255UL;
        for (p_1523->g_89 = 14; (p_1523->g_89 < 4); p_1523->g_89 = safe_sub_func_uint64_t_u_u(p_1523->g_89, 1))
        { /* block id: 98 */
            int8_t l_303[6][3][5];
            int32_t l_305 = (-1L);
            int32_t l_310 = 0x4ED354C9L;
            int32_t l_315 = 0L;
            int32_t l_317 = 0x21957178L;
            int32_t l_322[7] = {7L,7L,7L,7L,7L,7L,7L};
            int32_t **l_366 = (void*)0;
            int32_t **l_367[5][8][3] = {{{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}},{{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}},{{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}},{{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}},{{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238},{&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_303[i][j][k] = (-1L);
                }
            }
            (1 + 1);
        }
        for (l_300 = 0; (l_300 <= 1); l_300 += 1)
        { /* block id: 131 */
            int32_t *l_370 = (void*)0;
            int32_t l_371 = 1L;
            int32_t *l_372 = &l_299;
            int32_t *l_373[6] = {&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242,&p_1523->g_242};
            int64_t l_374 = 0L;
            int i;
            l_375++;
            return l_331[l_300];
        }
        (*l_368) = (-10L);
        l_385[3][5][2]--;
    }
    (*l_368) = (0x34L & (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(0xA7L, 6)), 0x074A68DBB830A52AL)));
    return p_1523->g_278[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_33 p_1523->g_34 p_1523->g_263 p_1523->g_59 p_1523->g_242 p_1523->g_219 p_1523->g_200 p_1523->g_10 p_1523->g_7 p_1523->g_100 p_1523->g_238 p_1523->g_38 p_1523->g_103
 * writes: p_1523->g_103 p_1523->g_7 p_1523->g_133 p_1523->g_38
 */
int32_t  func_62(uint8_t * p_63, int32_t  p_64, int32_t  p_65, int8_t * p_66, struct S1 * p_1523)
{ /* block id: 74 */
    int32_t l_256[6][2][3] = {{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}},{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}},{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}},{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}},{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}},{{0x24C053BFL,0x683345E1L,0x213BF90DL},{0x24C053BFL,0x683345E1L,0x213BF90DL}}};
    int64_t *l_261 = &p_1523->g_153;
    int64_t **l_260 = &l_261;
    int64_t ***l_262 = &l_260;
    int32_t l_276[4];
    uint8_t *l_277[1];
    int32_t l_279 = (-5L);
    int16_t *l_280 = &p_1523->g_103;
    int32_t l_281 = 0x7888573AL;
    int8_t *l_282 = (void*)0;
    int32_t l_283 = 0x5C25A6B1L;
    uint32_t *l_284 = &p_1523->g_133;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_276[i] = (-3L);
    for (i = 0; i < 1; i++)
        l_277[i] = &p_1523->g_278[5];
lbl_287:
    (*p_1523->g_238) |= ((*p_1523->g_33) , ((safe_div_func_int16_t_s_s(((~(l_256[5][1][1] >= ((*l_284) = ((p_65 , ((((safe_div_func_int8_t_s_s((l_283 = ((*p_1523->g_10) = (((((((safe_unary_minus_func_int32_t_s((((*l_262) = l_260) == p_1523->g_263))) , ((l_256[0][1][0] < (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((((l_281 = (((*l_280) = (safe_mul_func_int16_t_s_s(((l_279 |= (l_256[1][0][0] >= (((safe_sub_func_int16_t_s_s(8L, (safe_lshift_func_int16_t_s_u((l_276[1] = (l_256[5][1][1] ^ p_1523->g_59[1][1][1])), 4)))) != 9L) == 0UL))) & (-3L)), 0x1C76L))) >= p_1523->g_242)) > (*p_1523->g_219)) <= l_256[2][0][1]), 0x83E9DA6DL)) >= p_64), 1UL)), l_256[5][1][1]))) > p_64)) || p_64) , (void*)0) != (void*)0) , p_65) , (*p_1523->g_10)))), l_256[2][1][2])) == 0x5FF9D7EAL) && 0x7951L) | 0x3544L)) == p_1523->g_100)))) & p_64), p_64)) == l_256[3][0][1]));
    for (p_1523->g_103 = (-2); (p_1523->g_103 < (-2)); p_1523->g_103++)
    { /* block id: 86 */
        if (p_1523->g_38)
            goto lbl_287;
    }
    l_276[1] = l_276[1];
    return l_276[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_10 p_1523->g_34 p_1523->g_89 p_1523->g_38 p_1523->g_103 p_1523->g_30 p_1523->g_59 p_1523->g_9 p_1523->g_134 p_1523->g_8 p_1523->g_7 p_1523->g_200 p_1523->g_236 p_1523->g_239 l_6
 * writes: p_1523->g_7 p_1523->g_89 p_1523->g_100 p_1523->g_30 p_1523->g_135 p_1523->g_236 p_1523->g_238
 */
uint8_t * func_67(int32_t  p_68, int8_t *** p_69, struct S1 * p_1523)
{ /* block id: 11 */
    uint8_t *l_240 = (void*)0;
    (*p_1523->g_239) = func_70(&p_1523->g_38, p_1523);
    return l_240;
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_10 p_1523->g_34 p_1523->g_89 p_1523->g_38 p_1523->g_103 p_1523->g_30 p_1523->g_59 p_1523->g_9 p_1523->g_134 p_1523->g_8 p_1523->g_7 p_1523->g_200 p_1523->g_236 l_6 p_1523->g_242
 * writes: p_1523->g_7 p_1523->g_89 p_1523->g_100 p_1523->g_30 p_1523->g_135 p_1523->g_236
 */
int32_t * func_70(int32_t * p_71, struct S1 * p_1523)
{ /* block id: 12 */
    int64_t l_72 = (-3L);
    uint64_t *l_88 = &p_1523->g_89;
    int8_t *l_98 = &p_1523->g_7[1][0];
    int16_t *l_99[8] = {&p_1523->g_100,&p_1523->g_100,&p_1523->g_100,&p_1523->g_100,&p_1523->g_100,&p_1523->g_100,&p_1523->g_100,&p_1523->g_100};
    uint8_t *l_101[8] = {&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0],&p_1523->g_59[5][1][0]};
    int32_t l_102 = 0x20D67432L;
    int32_t l_104[10][6] = {{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L},{0x1C9FCC30L,(-8L),0L,(-8L),0x1C9FCC30L,0x1C9FCC30L}};
    int32_t *l_235[4][7] = {{&p_1523->g_236,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_236},{&p_1523->g_236,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_236},{&p_1523->g_236,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_236},{&p_1523->g_236,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_38,(void*)0,&p_1523->g_236}};
    int i, j;
    p_1523->g_236 ^= ((((*p_1523->g_10) = l_72) || ((safe_lshift_func_int8_t_s_u((l_72 != (safe_mod_func_uint8_t_u_u(l_72, func_77((((p_1523->g_34 , func_80((((safe_lshift_func_uint8_t_u_s(((~((*l_88)--)) >= (((*p_71) > (safe_lshift_func_int8_t_s_u(((*p_1523->g_10) = (((0x2DFEL <= (((p_1523->g_38 && (l_104[2][2] = ((l_102 = ((safe_div_func_int16_t_s_s((l_72 == (((p_1523->g_100 = (safe_mul_func_int32_t_s_s(((!((void*)0 != l_98)) && l_72), 0UL))) >= l_72) ^ l_72)), l_72)) & 0x55L)) > p_1523->g_103))) <= 0xDA29A6A9L) , p_1523->g_103)) != l_72) ^ p_1523->g_30)), 1))) >= p_1523->g_59[0][1][0])), 2)) || l_102) , 0xF4120E74272ABD0CL), &l_98, l_72, &p_1523->g_59[3][1][1], (*p_1523->g_9), p_1523)) && 0x01L) <= l_72), l_72, p_1523)))), l_72)) > l_72)) > p_1523->g_200);
    return &p_1523->g_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_30 p_1523->g_89 p_1523->g_59 p_1523->g_134 p_1523->g_8 p_1523->g_9 p_1523->g_7 l_6
 * writes: p_1523->g_30 p_1523->g_89 p_1523->g_135
 */
int8_t  func_77(int16_t  p_78, int32_t  p_79, struct S1 * p_1523)
{ /* block id: 52 */
    uint32_t l_221[2][8] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
    uint64_t *l_229 = &p_1523->g_89;
    int32_t l_230 = 0x7CD451E0L;
    int32_t *l_234[10];
    int32_t **l_233 = &l_234[8];
    int i, j;
    for (i = 0; i < 10; i++)
        l_234[i] = &p_1523->g_135;
    for (p_1523->g_30 = 0; (p_1523->g_30 <= 1); p_1523->g_30 += 1)
    { /* block id: 55 */
        uint8_t *l_228[9] = {&p_1523->g_59[6][1][1],&p_1523->g_59[2][0][1],&p_1523->g_59[6][1][1],&p_1523->g_59[6][1][1],&p_1523->g_59[2][0][1],&p_1523->g_59[6][1][1],&p_1523->g_59[6][1][1],&p_1523->g_59[2][0][1],&p_1523->g_59[6][1][1]};
        int32_t l_231[4][4][9] = {{{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L}},{{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L}},{{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L}},{{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L},{0x3158159EL,0x30310DE8L,0x42314006L,0x5B977AC5L,0x42314006L,0x30310DE8L,0x3158159EL,(-1L),4L}}};
        int i, j, k;
        l_221[0][3] = (-1L);
        for (p_1523->g_89 = 0; (p_1523->g_89 <= 1); p_1523->g_89 += 1)
        { /* block id: 59 */
            int8_t ***l_226 = (void*)0;
            uint8_t *l_227 = &p_1523->g_59[1][0][1];
            int16_t l_232 = 0x2192L;
            (*p_1523->g_134) = (p_78 <= (((l_221[0][5] & ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(247UL, (p_1523->g_30 == (((l_226 == (void*)0) , (l_230 = ((((~((p_1523->g_59[5][2][1] , l_227) == l_228[4])) <= 1UL) , (void*)0) == l_229))) > p_79)))) >= l_221[0][3]), 0x5D4EL)) ^ l_231[3][1][2])) || p_79) != l_232));
            return p_79;
        }
    }
    (*l_233) = &p_1523->g_135;
    (*l_233) = &p_1523->g_38;
    return (***p_1523->g_8);
}


/* ------------------------------------------ */
/* 
 * reads : p_1523->g_103
 * writes:
 */
uint8_t  func_80(uint64_t  p_81, int8_t ** p_82, int64_t  p_83, uint8_t * p_84, int8_t * p_85, struct S1 * p_1523)
{ /* block id: 19 */
    int32_t *l_113 = &p_1523->g_38;
    int16_t *l_114 = &p_1523->g_100;
    uint64_t *l_131 = &p_1523->g_89;
    uint32_t *l_132[8][1][7] = {{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}},{{(void*)0,(void*)0,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133,&p_1523->g_133}}};
    int64_t *l_138 = &p_1523->g_139;
    int64_t *l_152[2];
    int64_t **l_151 = &l_152[1];
    int32_t l_176 = 0x0C5E2D54L;
    int32_t l_184[4] = {0x668C3BF2L,0x668C3BF2L,0x668C3BF2L,0x668C3BF2L};
    int8_t **l_215 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_152[i] = &p_1523->g_153;
    return p_1523->g_103;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1524;
    struct S1* p_1523 = &c_1524;
    struct S1 c_1525 = {
        {{0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL},{0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL}}, // p_1523->g_7
        &p_1523->g_7[0][6], // p_1523->g_10
        &p_1523->g_10, // p_1523->g_9
        &p_1523->g_9, // p_1523->g_8
        0UL, // p_1523->g_30
        4294967289UL, // p_1523->g_34
        &p_1523->g_34, // p_1523->g_33
        0x71C19CD8L, // p_1523->g_38
        {{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}},{{0x3CL,0x03L},{0x3CL,0x03L},{0x3CL,0x03L}}}, // p_1523->g_59
        18446744073709551615UL, // p_1523->g_89
        (-1L), // p_1523->g_100
        0L, // p_1523->g_103
        0x5428794FL, // p_1523->g_133
        0x246063A1L, // p_1523->g_135
        &p_1523->g_135, // p_1523->g_134
        0x679E523DBDA42F3CL, // p_1523->g_139
        0x12F19563820F0242L, // p_1523->g_153
        0x76CDL, // p_1523->g_200
        &p_1523->g_200, // p_1523->g_219
        &p_1523->g_219, // p_1523->g_218
        &p_1523->g_218, // p_1523->g_217
        0x08EDF5FAL, // p_1523->g_236
        &p_1523->g_135, // p_1523->g_238
        {&p_1523->g_238,&p_1523->g_238,&p_1523->g_238,&p_1523->g_238,&p_1523->g_238,&p_1523->g_238,&p_1523->g_238}, // p_1523->g_237
        &p_1523->g_238, // p_1523->g_239
        3L, // p_1523->g_242
        (void*)0, // p_1523->g_263
        {255UL,253UL,255UL,255UL,253UL,255UL,255UL}, // p_1523->g_278
        0x50FC66B716D72287L, // p_1523->g_289
        0x0C36692CL, // p_1523->g_325
        2UL, // p_1523->g_361
        {0}, // p_1523->g_365
        &p_1523->g_365, // p_1523->g_364
        {&p_1523->g_361,&p_1523->g_361,&p_1523->g_361,&p_1523->g_361,&p_1523->g_361}, // p_1523->g_403
        {{0},{0},{0},{0},{0},{0},{0},{0},{0}}, // p_1523->g_411
        0x682FL, // p_1523->g_412
        5L, // p_1523->g_431
        {{{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)}},{{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)}},{{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)},{0x0105CBFDC910C9B0L,0x03E8E110F4131337L,(-1L),0x0105CBFDC910C9B0L,1L,(-1L),(-1L),1L,0x0105CBFDC910C9B0L,(-1L)}}}, // p_1523->g_456
        &p_1523->g_456[2][0][3], // p_1523->g_455
        {&p_1523->g_455,&p_1523->g_455}, // p_1523->g_454
        &p_1523->g_454[1], // p_1523->g_453
        {{{(-1L),(-1L),0x63L,0x37L,0x27L},{(-1L),(-1L),0x63L,0x37L,0x27L},{(-1L),(-1L),0x63L,0x37L,0x27L}}}, // p_1523->g_474
        (-2L), // p_1523->g_533
        {{{0L,0L,0x472DBD7EL,0L,(-7L),0x0229E090L,0x51855FB8L,0x59CFF891L,0x51855FB8L,0x0229E090L}},{{0L,0L,0x472DBD7EL,0L,(-7L),0x0229E090L,0x51855FB8L,0x59CFF891L,0x51855FB8L,0x0229E090L}},{{0L,0L,0x472DBD7EL,0L,(-7L),0x0229E090L,0x51855FB8L,0x59CFF891L,0x51855FB8L,0x0229E090L}},{{0L,0L,0x472DBD7EL,0L,(-7L),0x0229E090L,0x51855FB8L,0x59CFF891L,0x51855FB8L,0x0229E090L}}}, // p_1523->g_552
        0x0998771E8AC3AE52L, // p_1523->g_560
        (void*)0, // p_1523->g_586
        4294967295UL, // p_1523->g_675
        9UL, // p_1523->g_714
        {{(void*)0,&p_1523->g_135,&p_1523->g_236,(void*)0,&p_1523->g_236,&p_1523->g_135,(void*)0},{(void*)0,&p_1523->g_135,&p_1523->g_236,(void*)0,&p_1523->g_236,&p_1523->g_135,(void*)0},{(void*)0,&p_1523->g_135,&p_1523->g_236,(void*)0,&p_1523->g_236,&p_1523->g_135,(void*)0},{(void*)0,&p_1523->g_135,&p_1523->g_236,(void*)0,&p_1523->g_236,&p_1523->g_135,(void*)0},{(void*)0,&p_1523->g_135,&p_1523->g_236,(void*)0,&p_1523->g_236,&p_1523->g_135,(void*)0}}, // p_1523->g_806
        0x8FF7L, // p_1523->g_839
        (void*)0, // p_1523->g_842
        &p_1523->g_842, // p_1523->g_843
        {{{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L}},{{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L}},{{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L},{0x7E236AA6L,0x4AA0E294L,0x7E236AA6L,0x7E236AA6L}}}, // p_1523->g_863
        &p_1523->g_533, // p_1523->g_867
        (void*)0, // p_1523->g_871
        (void*)0, // p_1523->g_872
        &p_1523->g_806[0][0], // p_1523->g_895
        &p_1523->g_403[4], // p_1523->g_974
        &p_1523->g_974, // p_1523->g_973
        &p_1523->g_289, // p_1523->g_999
        {{{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999},{&p_1523->g_999}}}, // p_1523->g_998
        (void*)0, // p_1523->g_1009
        (void*)0, // p_1523->g_1010
        &p_1523->g_1009, // p_1523->g_1011
        {{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}},{{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL},{0xF7L,0xB8L,0x20L,0xBDL}}}, // p_1523->g_1128
        &p_1523->g_806[3][0], // p_1523->g_1145
        &p_1523->g_33, // p_1523->g_1165
        &p_1523->g_1165, // p_1523->g_1164
        1L, // p_1523->g_1189
        &p_1523->g_219, // p_1523->g_1194
        &p_1523->g_59[3][1][1], // p_1523->g_1199
        &p_1523->g_1199, // p_1523->g_1198
        0L, // p_1523->g_1258
        0x242BL, // p_1523->g_1270
        (void*)0, // p_1523->g_1285
        &p_1523->g_806[1][5], // p_1523->g_1286
        4294967290UL, // p_1523->g_1337
        &p_1523->g_806[3][0], // p_1523->g_1389
        &p_1523->g_806[3][0], // p_1523->g_1397
        &p_1523->g_411[8], // p_1523->g_1416
        &p_1523->g_1416, // p_1523->g_1415
        {{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}},{{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL},{65535UL,65533UL,65535UL}}}, // p_1523->g_1474
        0L, // p_1523->g_1519
    };
    c_1524 = c_1525;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1523);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1523->g_7[i][j], "p_1523->g_7[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1523->g_30, "p_1523->g_30", print_hash_value);
    transparent_crc(p_1523->g_34, "p_1523->g_34", print_hash_value);
    transparent_crc(p_1523->g_38, "p_1523->g_38", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1523->g_59[i][j][k], "p_1523->g_59[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1523->g_89, "p_1523->g_89", print_hash_value);
    transparent_crc(p_1523->g_100, "p_1523->g_100", print_hash_value);
    transparent_crc(p_1523->g_103, "p_1523->g_103", print_hash_value);
    transparent_crc(p_1523->g_133, "p_1523->g_133", print_hash_value);
    transparent_crc(p_1523->g_135, "p_1523->g_135", print_hash_value);
    transparent_crc(p_1523->g_139, "p_1523->g_139", print_hash_value);
    transparent_crc(p_1523->g_153, "p_1523->g_153", print_hash_value);
    transparent_crc(p_1523->g_200, "p_1523->g_200", print_hash_value);
    transparent_crc(p_1523->g_236, "p_1523->g_236", print_hash_value);
    transparent_crc(p_1523->g_242, "p_1523->g_242", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1523->g_278[i], "p_1523->g_278[i]", print_hash_value);

    }
    transparent_crc(p_1523->g_289, "p_1523->g_289", print_hash_value);
    transparent_crc(p_1523->g_325, "p_1523->g_325", print_hash_value);
    transparent_crc(p_1523->g_361, "p_1523->g_361", print_hash_value);
    transparent_crc(p_1523->g_412, "p_1523->g_412", print_hash_value);
    transparent_crc(p_1523->g_431, "p_1523->g_431", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1523->g_456[i][j][k], "p_1523->g_456[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1523->g_474[i][j][k], "p_1523->g_474[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1523->g_533, "p_1523->g_533", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1523->g_552[i][j][k], "p_1523->g_552[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1523->g_560, "p_1523->g_560", print_hash_value);
    transparent_crc(p_1523->g_675, "p_1523->g_675", print_hash_value);
    transparent_crc(p_1523->g_714, "p_1523->g_714", print_hash_value);
    transparent_crc(p_1523->g_839, "p_1523->g_839", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1523->g_863[i][j][k], "p_1523->g_863[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1523->g_1128[i][j][k], "p_1523->g_1128[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1523->g_1189, "p_1523->g_1189", print_hash_value);
    transparent_crc(p_1523->g_1258, "p_1523->g_1258", print_hash_value);
    transparent_crc(p_1523->g_1270, "p_1523->g_1270", print_hash_value);
    transparent_crc(p_1523->g_1337, "p_1523->g_1337", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1523->g_1474[i][j][k], "p_1523->g_1474[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1523->g_1519, "p_1523->g_1519", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
