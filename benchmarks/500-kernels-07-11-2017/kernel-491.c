// -g 73,30,2 -l 1,15,2
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


// Seed: 3199601513

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int64_t  f1;
   uint32_t  f2;
   volatile uint8_t  f3;
   uint8_t  f4;
   volatile int32_t  f5;
   volatile uint16_t  f6;
   uint16_t  f7;
   volatile int64_t  f8;
};

struct S1 {
   volatile struct S0  f0;
   int32_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
   int32_t  f5;
   int32_t  f6;
};

union U2 {
   struct S0  f0;
};

union U3 {
   volatile uint16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

struct S4 {
    uint8_t g_10[10][3];
    uint16_t g_23;
    volatile uint32_t g_24;
    int32_t g_29[2][8];
    uint8_t g_49[8];
    uint8_t * volatile g_48[6][4];
    int16_t g_100;
    int8_t g_102;
    int8_t g_105;
    uint16_t g_119;
    uint16_t g_133;
    int32_t g_138;
    int32_t *g_137;
    uint8_t *g_147;
    int32_t *g_169;
    volatile int8_t g_189;
    volatile int8_t * volatile g_188;
    volatile int8_t * volatile *g_187;
    uint16_t g_195;
    int8_t g_221;
    int32_t g_224;
    int8_t g_226;
    int32_t g_230[3];
    int32_t g_253;
    int16_t g_255;
    int32_t g_259;
    uint32_t g_280;
    int64_t g_326;
    uint8_t g_340;
    uint64_t g_367;
    uint64_t g_373;
    uint8_t g_399;
    uint32_t g_518;
    int16_t g_552;
    uint64_t g_555;
    uint8_t *g_556;
    int32_t g_569;
    uint32_t *g_581[5];
    uint32_t g_607[5];
    uint8_t **g_747;
    uint8_t ***g_746;
    volatile uint32_t * volatile *g_766;
    int8_t ** volatile *g_797;
    int8_t ** volatile * volatile *g_796;
    int16_t g_799;
    int32_t g_803;
    int16_t g_807;
    int16_t *** volatile g_844;
    volatile union U3 g_863;
    volatile union U2 g_887;
    int64_t g_890;
    volatile union U2 *g_900;
    volatile struct S0 * volatile g_914[7][8];
    int32_t ** volatile g_917;
    int8_t g_947;
    int32_t ** volatile g_956;
    int32_t ** volatile g_957;
    int32_t ** volatile g_958;
    struct S0 g_959;
    struct S0 g_960;
    struct S1 g_967;
    struct S0 *g_996;
    struct S0 **g_995;
    struct S0 **g_1000;
    union U3 g_1009;
    uint8_t g_1031;
    struct S0 g_1049;
    struct S0 g_1051;
    struct S0 *g_1050;
    int32_t ** volatile g_1054;
    uint32_t g_1082[4];
    union U3 *g_1099;
    union U3 ** volatile g_1098[1];
    volatile struct S0 g_1106;
    volatile struct S0 g_1120;
    volatile struct S1 g_1123[8];
    int32_t ** volatile g_1162;
    volatile int32_t g_1171[8][7][4];
    volatile int32_t *g_1170;
    volatile int32_t **g_1169[8][3][10];
    volatile int32_t ***g_1168;
    uint8_t g_1176;
    volatile struct S1 g_1186;
    volatile struct S1 g_1192;
    uint64_t *g_1206[7][5][5];
    uint64_t **g_1205;
    int32_t *g_1257[5][10];
    uint32_t *g_1268[5];
    uint32_t **g_1267;
    struct S1 g_1297[10];
    struct S1 * volatile g_1296;
    volatile uint16_t g_1302;
    struct S1 g_1319;
    uint32_t g_1320;
    int8_t g_1334;
    struct S0 g_1372;
    struct S0 g_1373;
    volatile struct S1 g_1385;
    int32_t **g_1414[2][5][5];
    int32_t ***g_1413[10];
    union U2 g_1451;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S4 * p_1454);
int8_t  func_11(uint32_t  p_12, uint8_t * p_13, int16_t  p_14, uint8_t * p_15, uint32_t  p_16, struct S4 * p_1454);
uint8_t * func_17(uint16_t  p_18, uint8_t  p_19, uint32_t  p_20, struct S4 * p_1454);
uint8_t  func_25(int8_t  p_26, int16_t  p_27, struct S4 * p_1454);
uint32_t  func_52(int32_t * p_53, struct S4 * p_1454);
int16_t  func_58(int8_t  p_59, struct S4 * p_1454);
int8_t  func_65(int32_t * p_66, int8_t  p_67, struct S4 * p_1454);
int32_t * func_68(int32_t  p_69, uint8_t * p_70, struct S4 * p_1454);
int8_t  func_80(uint8_t * p_81, uint8_t * p_82, struct S4 * p_1454);
uint8_t * func_84(int8_t  p_85, int32_t * p_86, struct S4 * p_1454);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1454->g_10 p_1454->g_24 p_1454->g_23 p_1454->g_29 p_1454->g_48 p_1454->g_49 p_1454->g_100 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_102 p_1454->g_138 p_1454->g_137 p_1454->g_187 p_1454->g_195 p_1454->g_230 p_1454->g_259 p_1454->g_221 p_1454->g_326 p_1454->g_340 p_1454->g_253 p_1454->g_280 p_1454->g_226 p_1454->g_399 p_1454->g_373 p_1454->g_518 p_1454->g_552 p_1454->g_555 p_1454->g_556 p_1454->g_169 p_1454->g_569 p_1454->g_607 p_1454->g_367 p_1454->g_224 p_1454->g_747 p_1454->g_766 p_1454->g_796 p_1454->g_803 p_1454->g_960.f4 p_1454->g_959.f4 p_1454->g_890 p_1454->g_967.f3 p_1454->g_188 p_1454->g_189 p_1454->g_960.f2 p_1454->g_1009 p_1454->g_960.f1 p_1454->g_1031 p_1454->g_967.f0.f5 p_1454->g_1000 p_1454->g_959.f1 p_1454->g_1049.f0 p_1454->g_1054 p_1454->g_863 p_1454->g_255 p_1454->g_1050 p_1454->g_1051 p_1454->g_1106 p_1454->g_996 p_1454->g_960.f7 p_1454->g_1120 p_1454->g_1162 p_1454->g_958 p_1454->g_959.f5 p_1454->g_1168 p_1454->g_947 p_1454->g_1176 p_1454->g_1082 p_1454->g_1170 p_1454->g_1171 p_1454->g_887.f0.f3 p_1454->g_1123 p_1454->g_1049.f4 p_1454->g_1192 p_1454->g_807 p_1454->g_799 p_1454->g_957 p_1454->g_967.f5 p_1454->g_1267 p_1454->g_863.f0 p_1454->g_967 p_1454->g_1296 p_1454->g_1302 p_1454->g_1297.f0.f7 p_1454->g_1319 p_1454->g_1320 p_1454->g_1169 p_1454->g_1297.f3 p_1454->g_917 p_1454->g_1297 p_1454->g_1373.f2 p_1454->g_900
 * writes: p_1454->g_10 p_1454->g_23 p_1454->g_100 p_1454->g_102 p_1454->g_105 p_1454->g_119 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169 p_1454->g_49 p_1454->g_195 p_1454->g_253 p_1454->g_255 p_1454->g_259 p_1454->g_280 p_1454->g_326 p_1454->g_226 p_1454->g_340 p_1454->g_367 p_1454->g_221 p_1454->g_373 p_1454->g_399 p_1454->g_555 p_1454->g_569 p_1454->g_581 p_1454->g_607 p_1454->g_230 p_1454->g_518 p_1454->g_552 p_1454->g_746 p_1454->g_799 p_1454->g_803 p_1454->g_960.f4 p_1454->g_967.f3 p_1454->g_995 p_1454->g_890 p_1454->g_1000 p_1454->g_967.f2 p_1454->g_959.f1 p_1454->g_996 p_1454->g_1050 p_1454->g_960.f1 p_1454->g_960 p_1454->g_1099 p_1454->g_1049 p_1454->g_1051 p_1454->g_947 p_1454->g_1082 p_1454->g_1171 p_1454->g_1186 p_1454->g_747 p_1454->g_1205 p_1454->g_1257 p_1454->g_967.f5 p_1454->g_959.f0 p_1454->g_1297 p_1454->g_1302 p_1454->g_900 p_1454->g_556 p_1454->g_1319.f3 p_1454->g_967
 */
int32_t  func_1(struct S4 * p_1454)
{ /* block id: 4 */
    uint16_t l_8[5][5][4] = {{{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL}},{{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL}},{{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL}},{{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL}},{{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL},{0x31FAL,65535UL,0x9CD4L,65535UL}}};
    uint8_t *l_9 = &p_1454->g_10[6][2];
    uint16_t *l_21 = (void*)0;
    uint16_t *l_22 = &p_1454->g_23;
    uint8_t *l_970 = &p_1454->g_960.f4;
    uint16_t *l_983[6];
    int32_t l_984 = 5L;
    struct S0 *l_993 = &p_1454->g_960;
    struct S0 **l_992[7][5] = {{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993}};
    int32_t **l_1006 = (void*)0;
    int32_t l_1083[2];
    int32_t *l_1094 = &l_1083[1];
    uint64_t l_1095 = 18446744073709551615UL;
    uint32_t l_1172[8][9] = {{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L},{5UL,4294967295UL,8UL,4294967295UL,8UL,4294967295UL,5UL,0x5B4B63AEL,0x1CFF0049L}};
    uint32_t l_1177[9][5][5] = {{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}},{{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L},{1UL,4294967294UL,0x5EE0DB7DL,0x594A1044L,0x2A9C7828L}}};
    uint32_t *l_1226 = &p_1454->g_607[4];
    int32_t *l_1292 = &p_1454->g_1009.f2;
    uint32_t l_1342 = 1UL;
    int32_t ***l_1417 = &p_1454->g_1414[0][3][4];
    uint16_t l_1453 = 0x85F1L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_983[i] = &p_1454->g_959.f7;
    for (i = 0; i < 2; i++)
        l_1083[i] = 0x59980CADL;
    if (((safe_lshift_func_uint16_t_u_s((l_984 ^= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((*l_9) &= l_8[2][2][0]), 6)), func_11(l_8[1][2][2], func_17(l_8[4][2][1], ((*l_970) &= (((~((*l_22) = 6UL)) == p_1454->g_24) , func_25(p_1454->g_24, (p_1454->g_23 , l_8[4][3][3]), p_1454))), p_1454->g_959.f4, p_1454), p_1454->g_890, (*p_1454->g_747), l_8[3][1][0], p_1454))) >= l_8[0][3][3])), 8)) != l_8[0][1][3]))
    { /* block id: 447 */
        uint8_t l_989 = 0xCBL;
        struct S0 ***l_994[2];
        int64_t *l_997[6][6][2] = {{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}},{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}},{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}},{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}},{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}},{{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890},{&p_1454->g_890,&p_1454->g_890}}};
        uint64_t *l_999 = &p_1454->g_960.f0;
        uint64_t **l_998 = &l_999;
        uint32_t l_1019 = 0x0093C307L;
        int32_t l_1020 = 0x4C02B8BAL;
        int8_t l_1068 = 0x2EL;
        uint16_t *l_1081 = &p_1454->g_195;
        int32_t l_1085[10] = {4L,4L,4L,4L,4L,4L,4L,4L,4L,4L};
        uint32_t l_1091 = 4294967289UL;
        int8_t *l_1156[8][2][4] = {{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}},{{(void*)0,(void*)0,(void*)0,&p_1454->g_221},{(void*)0,(void*)0,(void*)0,&p_1454->g_221}}};
        int8_t **l_1155[2];
        int8_t ***l_1154 = &l_1155[0];
        int8_t ****l_1153 = &l_1154;
        int8_t l_1161[3];
        int16_t l_1215 = 0x59C1L;
        int16_t ***l_1241 = (void*)0;
        int8_t l_1252[8] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        uint8_t l_1253[6];
        uint8_t ***l_1275 = (void*)0;
        int32_t *l_1293 = &p_1454->g_259;
        int32_t l_1322[4];
        uint16_t l_1341 = 0UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_994[i] = &l_992[2][2];
        for (i = 0; i < 2; i++)
            l_1155[i] = &l_1156[3][0][2];
        for (i = 0; i < 3; i++)
            l_1161[i] = 8L;
        for (i = 0; i < 6; i++)
            l_1253[i] = 0xBBL;
        for (i = 0; i < 4; i++)
            l_1322[i] = 0x7A0F21DEL;
        if ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((+l_989) <= ((safe_sub_func_int16_t_s_s((((((l_992[2][2] = l_992[2][2]) != (p_1454->g_995 = (void*)0)) > l_984) , (p_1454->g_890 = 0x1C7FD61A42554AC4L)) , (((*l_998) = l_997[0][5][1]) == &p_1454->g_373)), (&p_1454->g_996 == (p_1454->g_1000 = &p_1454->g_996)))) | 65528UL)), (*p_1454->g_556))) == p_1454->g_960.f2), 6)))
        { /* block id: 453 */
            int32_t l_1001 = 0L;
            int16_t *l_1011[4][2][10];
            int16_t **l_1010 = &l_1011[3][0][1];
            int8_t *l_1012 = &p_1454->g_226;
            uint16_t l_1017 = 0x7226L;
            int32_t *l_1018[5][1][4] = {{{&p_1454->g_138,&p_1454->g_230[2],&l_984,&p_1454->g_230[2]}},{{&p_1454->g_138,&p_1454->g_230[2],&l_984,&p_1454->g_230[2]}},{{&p_1454->g_138,&p_1454->g_230[2],&l_984,&p_1454->g_230[2]}},{{&p_1454->g_138,&p_1454->g_230[2],&l_984,&p_1454->g_230[2]}},{{&p_1454->g_138,&p_1454->g_230[2],&l_984,&p_1454->g_230[2]}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_1011[i][j][k] = &p_1454->g_255;
                }
            }
lbl_1025:
            l_1020 = (l_1019 = (l_1001 & (&p_1454->g_518 != ((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((*l_22) = ((void*)0 != l_1006)), 12)) && (((safe_rshift_func_int8_t_s_s(((*l_1012) = ((p_1454->g_1009 , l_1010) == &l_1011[2][1][0])), (p_1454->g_138 || (safe_add_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((*p_1454->g_556), 0x11L)) , l_989) && 0UL) > l_1017), p_1454->g_555))))) >= p_1454->g_224) == p_1454->g_373)), p_1454->g_518)) >= p_1454->g_960.f1) | 0x4B4C6159L) , &p_1454->g_518))));
            for (l_1001 = 0; (l_1001 != (-29)); l_1001--)
            { /* block id: 460 */
                uint8_t l_1033[4];
                struct S0 *l_1048 = &p_1454->g_1049;
                int32_t l_1089[5][9] = {{0x3DAA25C4L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0x3DAA25C4L},{0x3DAA25C4L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0x3DAA25C4L},{0x3DAA25C4L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0x3DAA25C4L},{0x3DAA25C4L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0x3DAA25C4L},{0x3DAA25C4L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0L,0L,0x15C8B2B5L,0x3DAA25C4L}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1033[i] = 0x94L;
                for (p_1454->g_967.f2 = 0; (p_1454->g_967.f2 >= (-20)); --p_1454->g_967.f2)
                { /* block id: 463 */
                    int32_t l_1030 = 6L;
                    int64_t *l_1032 = &p_1454->g_959.f1;
                    int32_t l_1034 = 0x0813B714L;
                    uint16_t l_1039 = 65535UL;
                    int64_t *l_1052[2][4][5] = {{{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1}},{{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1},{&p_1454->g_1049.f1,&p_1454->g_1049.f1,(void*)0,&p_1454->g_1051.f1,&p_1454->g_1049.f1}}};
                    int8_t l_1061 = 0x62L;
                    int i, j, k;
                    if (p_1454->g_960.f2)
                        goto lbl_1025;
                    l_1034 ^= (l_1033[2] = (safe_lshift_func_int16_t_s_s((((**p_1454->g_747)--) , (l_1030 & (p_1454->g_555 <= ((*l_1032) = (p_1454->g_1031 == p_1454->g_607[4]))))), 10)));
                    if ((p_1454->g_49[1] , (l_1030 ^= (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_1033[1], l_1039)), (safe_sub_func_uint32_t_u_u(p_1454->g_967.f0.f5, ((safe_add_func_uint8_t_u_u(l_1019, ((((p_1454->g_960.f1 = ((*l_1032) &= (l_1019 , (p_1454->g_29[0][0] , (safe_sub_func_uint32_t_u_u(0xA17A2520L, ((safe_lshift_func_uint16_t_u_s((((p_1454->g_1050 = ((*p_1454->g_1000) = l_1048)) != (void*)0) , l_1020), 2)) ^ 18446744073709551615UL))))))) ^ 4L) , p_1454->g_890) < 0x258CL))) & p_1454->g_1049.f0))))))))
                    { /* block id: 474 */
                        int32_t **l_1053 = &p_1454->g_137;
                        uint8_t *l_1084[2][9][5] = {{{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0}},{{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0},{(void*)0,(void*)0,&p_1454->g_49[7],&p_1454->g_1049.f4,(void*)0}}};
                        int i, j, k;
                        (*p_1454->g_1054) = ((*l_1053) = &p_1454->g_803);
                        (*l_1053) = l_1018[1][0][0];
                    }
                    else
                    { /* block id: 483 */
                        uint64_t l_1086 = 0xDE30E78BD3D23243L;
                        int32_t l_1090 = 2L;
                        --l_1086;
                        --l_1091;
                        l_1094 = (p_1454->g_863 , &l_1085[6]);
                    }
                    (*l_1094) = (((*l_1081) = 9UL) == ((**l_1010) |= 5L));
                }
                return l_1085[5];
            }
            (*l_1094) = l_1095;
        }
        else
        { /* block id: 495 */
            uint8_t l_1103 = 0x59L;
lbl_1101:
            (*l_1094) |= l_1085[7];
            for (p_1454->g_138 = 1; (p_1454->g_138 >= 0); p_1454->g_138 -= 1)
            { /* block id: 499 */
                union U3 *l_1097[1];
                union U3 **l_1096 = &l_1097[0];
                union U3 **l_1100 = &p_1454->g_1099;
                int i;
                for (i = 0; i < 1; i++)
                    l_1097[i] = &p_1454->g_1009;
                (*l_993) = (*p_1454->g_1050);
                (*l_1100) = ((&p_1454->g_1082[3] == (void*)0) , ((*l_1096) = &p_1454->g_1009));
                if (l_984)
                    goto lbl_1101;
                for (p_1454->g_253 = 1; (p_1454->g_253 >= 0); p_1454->g_253 -= 1)
                { /* block id: 506 */
                    int32_t *l_1102 = &p_1454->g_29[0][0];
                    int i, j;
                    if (p_1454->g_803)
                        goto lbl_1101;
                    l_1103--;
                    (**p_1454->g_1000) = p_1454->g_1106;
                }
            }
        }
        if ((*l_1094))
        { /* block id: 513 */
            int64_t l_1111 = (-3L);
            int32_t l_1112 = 0x16FC70D9L;
            int32_t l_1113 = 0x1EDFFC5BL;
            int32_t l_1114 = 0x1DA19950L;
            int32_t l_1115 = 1L;
            int32_t l_1116[4][9] = {{0x18DAD74AL,0x18DAD74AL,(-1L),0x2D226DFEL,1L,0x61DFF649L,1L,0x20B10367L,1L},{0x18DAD74AL,0x18DAD74AL,(-1L),0x2D226DFEL,1L,0x61DFF649L,1L,0x20B10367L,1L},{0x18DAD74AL,0x18DAD74AL,(-1L),0x2D226DFEL,1L,0x61DFF649L,1L,0x20B10367L,1L},{0x18DAD74AL,0x18DAD74AL,(-1L),0x2D226DFEL,1L,0x61DFF649L,1L,0x20B10367L,1L}};
            uint64_t l_1180 = 7UL;
            uint8_t **l_1203 = &p_1454->g_556;
            int32_t *l_1213 = (void*)0;
            int i, j;
            for (p_1454->g_960.f7 = 0; (p_1454->g_960.f7 <= 23); p_1454->g_960.f7++)
            { /* block id: 516 */
                int32_t *l_1109 = &l_1083[1];
                int32_t *l_1110[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t l_1117 = 0xDFL;
                uint32_t *l_1158 = &p_1454->g_1082[3];
                int i;
                --l_1117;
                if ((*l_1094))
                { /* block id: 518 */
                    (*p_1454->g_1050) = p_1454->g_1120;
                }
                else
                { /* block id: 520 */
                    int16_t *l_1136 = (void*)0;
                    int16_t *l_1137 = &p_1454->g_255;
                    uint16_t l_1157 = 1UL;
                    int32_t l_1159 = (-1L);
                    int16_t l_1160 = 0x4BB5L;
                    (*p_1454->g_1162) = &l_1159;
                    (*p_1454->g_958) = (*p_1454->g_1162);
                    if ((*p_1454->g_169))
                    { /* block id: 529 */
                        return p_1454->g_959.f4;
                    }
                    else
                    { /* block id: 531 */
                        uint32_t l_1175 = 1UL;
                        l_1085[6] |= (((*l_1158) = ((**p_1454->g_747) , ((0x8993AEFA9A33D2E8L <= ((((((void*)0 != &l_1019) ^ p_1454->g_959.f5) || (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(p_1454->g_1120.f1, p_1454->g_138)), (p_1454->g_947 &= (((p_1454->g_890 = (safe_unary_minus_func_uint8_t_u((p_1454->g_253 == ((((((void*)0 == p_1454->g_1168) == 7L) != 250UL) || 0x0B47L) == l_1114))))) , l_1172[3][8]) , 1L))))) || 0x1DAAL) >= l_1114)) && l_1111))) || l_1116[3][8]);
                        (*p_1454->g_1170) ^= ((p_1454->g_1082[2] |= (safe_mul_func_uint8_t_u_u(((*p_1454->g_556) = (((!(((l_1175 < (*l_1109)) >= ((void*)0 != (*p_1454->g_1000))) | (0xD3L <= l_1175))) ^ l_1019) != p_1454->g_1176)), (-1L)))) , l_1159);
                        ++l_1177[0][2][3];
                    }
                    if (l_1157)
                        continue;
                }
                --l_1180;
            }
            for (p_1454->g_340 = 0; (p_1454->g_340 <= 0); p_1454->g_340 += 1)
            { /* block id: 547 */
                int16_t *l_1185[6] = {(void*)0,&p_1454->g_255,(void*)0,(void*)0,&p_1454->g_255,(void*)0};
                int8_t *l_1197[5][5][6] = {{{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0}},{{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0}},{{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0}},{{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0}},{{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0},{(void*)0,(void*)0,&p_1454->g_947,(void*)0,&p_1454->g_221,(void*)0}}};
                uint8_t **l_1202 = (void*)0;
                int32_t l_1209 = 0L;
                int32_t **l_1212 = &p_1454->g_169;
                int i, j, k;
                if (l_1111)
                    break;
                p_1454->g_1186 = ((safe_mul_func_int16_t_s_s((l_1116[1][0] , (l_1114 = ((*l_1094) &= l_1115))), p_1454->g_887.f0.f3)) , p_1454->g_1123[4]);
                for (p_1454->g_1049.f4 = 1; (p_1454->g_1049.f4 <= 4); p_1454->g_1049.f4 += 1)
                { /* block id: 554 */
                    int32_t *l_1210[8][10][3] = {{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}},{{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984},{(void*)0,&p_1454->g_138,&l_984}}};
                    int i, j, k;
                    for (l_1095 = 0; (l_1095 <= 0); l_1095 += 1)
                    { /* block id: 557 */
                        uint8_t ***l_1204 = &l_1203;
                        struct S0 *l_1211 = &p_1454->g_1051;
                        int i, j, k;
                        (*l_1094) = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint32_t_u(l_1177[(l_1095 + 4)][(p_1454->g_340 + 2)][(p_1454->g_340 + 2)])) & (l_1020 = 0x4856L)), 7)) & (p_1454->g_1192 , 0x9EBBL)), l_1177[(p_1454->g_1049.f4 + 3)][(l_1095 + 3)][(p_1454->g_340 + 4)]));
                        (*p_1454->g_1170) = ((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(((((void*)0 != &l_1111) , l_1197[3][1][4]) == (p_1454->g_1171[(p_1454->g_340 + 6)][(l_1095 + 6)][(l_1095 + 1)] , func_84((((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((!((l_1202 != (p_1454->g_747 = ((*l_1204) = l_1203))) & ((p_1454->g_1205 = &l_999) != &p_1454->g_1206[1][0][0]))), (safe_rshift_func_uint8_t_u_s(p_1454->g_1171[(p_1454->g_1049.f4 + 3)][p_1454->g_340][l_1095], l_1209)))), l_1177[(l_1095 + 4)][(p_1454->g_340 + 2)][(p_1454->g_340 + 2)])) > 0x64398412E9160D90L) == 3L), l_1210[6][0][1], p_1454))), l_1112)) < l_1177[(p_1454->g_1049.f4 + 3)][(l_1095 + 3)][(p_1454->g_340 + 4)]) <= 0UL), p_1454->g_807)) && p_1454->g_799);
                        (*p_1454->g_1000) = (l_1211 = (*p_1454->g_1000));
                        (*p_1454->g_1170) = 1L;
                    }
                    (*l_1094) = (*p_1454->g_1170);
                    return p_1454->g_1051.f1;
                }
                l_1213 = ((*l_1212) = (void*)0);
            }
        }
        else
        { /* block id: 574 */
            uint16_t l_1214 = 0UL;
            int16_t *l_1240 = &l_1215;
            int16_t **l_1239 = &l_1240;
            int16_t ***l_1238[10] = {&l_1239,(void*)0,&l_1239,&l_1239,(void*)0,&l_1239,&l_1239,(void*)0,&l_1239,&l_1239};
            uint32_t *l_1250 = &p_1454->g_967.f4;
            uint32_t **l_1249 = &l_1250;
            uint8_t l_1258 = 255UL;
            uint32_t l_1277 = 4UL;
            int32_t l_1301 = 0x13575943L;
            int32_t **l_1321[2][4] = {{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137}};
            int8_t l_1338 = (-7L);
            int8_t **l_1340 = &l_1156[2][0][0];
            int i, j;
            if (l_1214)
            { /* block id: 575 */
                return p_1454->g_1120.f1;
            }
            else
            { /* block id: 577 */
                int8_t **l_1218 = (void*)0;
                int32_t l_1225 = 0x03E761A0L;
                int32_t *l_1229 = &p_1454->g_230[1];
                int16_t ****l_1242 = &l_1241;
                uint32_t **l_1251[8][7][1] = {{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}},{{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250},{&l_1250}}};
                int32_t **l_1254 = (void*)0;
                int32_t *l_1256 = &p_1454->g_259;
                int32_t **l_1255 = &l_1256;
                int i, j, k;
                (*p_1454->g_957) = func_68(p_1454->g_1051.f5, func_17(p_1454->g_29[1][2], (p_1454->g_133 & (l_1215 , (((safe_mul_func_uint8_t_u_u((*l_1094), ((void*)0 == l_1218))) && p_1454->g_960.f1) , 1L))), l_1085[6], p_1454), p_1454);
                (*l_1229) |= (((p_1454->g_1120.f4 >= (safe_lshift_func_uint16_t_u_u(((0x78F9L == l_1214) < (((safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((l_1225 | l_1161[1]) || (&p_1454->g_607[4] != l_1226)), (*l_1094))) > (safe_mul_func_int8_t_s_s((0x72L <= 4L), p_1454->g_1051.f4))), p_1454->g_799)) , 5UL) < l_1214)), 4))) || l_1225) < l_1225);
                (*l_1094) = (safe_mod_func_int64_t_s_s((p_1454->g_1123[4].f0.f5 <= (((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((l_1085[6] && ((safe_lshift_func_int8_t_s_u((((((l_1238[7] != ((*l_1242) = l_1241)) & ((&p_1454->g_259 == (p_1454->g_1257[1][1] = ((*l_1255) = &p_1454->g_259))) <= (*l_1094))) != (-8L)) , 0x39ECC65D26B2BB92L) != 0x284F97F8C97D219FL), l_1214)) == p_1454->g_947)), p_1454->g_133)) , (**p_1454->g_747)) & (*l_1094)) > p_1454->g_518), 0x4AL)) | l_1258) == l_989)), 0x92F98BCFDE8317EAL));
            }
            for (p_1454->g_367 = 3; (p_1454->g_367 > 4); ++p_1454->g_367)
            { /* block id: 587 */
                return l_1214;
            }
            for (p_1454->g_967.f5 = 3; (p_1454->g_967.f5 >= 0); p_1454->g_967.f5 -= 1)
            { /* block id: 592 */
                uint8_t l_1276 = 3UL;
                int32_t l_1299 = 1L;
                int32_t *l_1327 = &p_1454->g_1297[9].f3;
                int32_t l_1331 = 1L;
                int32_t l_1332 = 0x11846CDAL;
                int32_t l_1333[4][1][5] = {{{0x4A927150L,0x4223BD74L,0x5DBEDDB7L,0x4223BD74L,0x4A927150L}},{{0x4A927150L,0x4223BD74L,0x5DBEDDB7L,0x4223BD74L,0x4A927150L}},{{0x4A927150L,0x4223BD74L,0x5DBEDDB7L,0x4223BD74L,0x4A927150L}},{{0x4A927150L,0x4223BD74L,0x5DBEDDB7L,0x4223BD74L,0x4A927150L}}};
                int i, j, k;
                l_1277 |= ((safe_mul_func_int8_t_s_s((**p_1454->g_187), ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 == p_1454->g_1267), ((p_1454->g_100 = ((*l_1240) = ((safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(0x31BFL, l_1085[9])) , (safe_rshift_func_int8_t_s_u((((**p_1454->g_747) = ((void*)0 == l_1275)) | ((l_1214 , (-1L)) & l_1276)), 0))), p_1454->g_607[4])) , 7L))) < 5UL))), 6)) & 0x544B9C1F66C40669L))) != l_1253[1]);
                for (p_1454->g_799 = 0; (p_1454->g_799 <= 3); p_1454->g_799 += 1)
                { /* block id: 599 */
                    int32_t *l_1291 = &p_1454->g_259;
                    int32_t **l_1290[5][6] = {{&l_1291,(void*)0,(void*)0,&l_1291,&l_1291,(void*)0},{&l_1291,(void*)0,(void*)0,&l_1291,&l_1291,(void*)0},{&l_1291,(void*)0,(void*)0,&l_1291,&l_1291,(void*)0},{&l_1291,(void*)0,(void*)0,&l_1291,&l_1291,(void*)0},{&l_1291,(void*)0,(void*)0,&l_1291,&l_1291,(void*)0}};
                    int32_t l_1294 = 0L;
                    uint64_t *l_1295 = &p_1454->g_959.f0;
                    int16_t l_1300[6][2][9] = {{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}},{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}},{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}},{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}},{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}},{{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L},{0x3CA7L,0x72EBL,1L,7L,0x1BCAL,0L,(-9L),1L,0x4F69L}}};
                    uint8_t **l_1312 = &l_970;
                    uint8_t **l_1323 = &l_970;
                    int32_t l_1324 = (-1L);
                    uint32_t l_1325[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1325[i] = 0xB741AA2AL;
                    if (((l_1276 ^ (~((((*l_9) = ((((**l_1239) &= 7L) != p_1454->g_863.f0) <= (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_1252[4], 1)), ((p_1454->g_102 ^= (safe_div_func_uint8_t_u_u(((((~(((*l_1295) = (((((((**p_1454->g_747) = (safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(0x328B917EL, (safe_rshift_func_uint16_t_u_s((((*l_1081) = p_1454->g_1051.f0) == ((l_1292 = (p_1454->g_1257[3][5] = l_1094)) == l_1293)), l_1214)))) > (*p_1454->g_556)), (*l_1094)))) >= l_1214) > (*l_1094)) < (*l_1094)) >= l_1294) || l_1294)) ^ 0L)) , 5L) >= l_1294) , (*p_1454->g_556)), (*l_1094)))) || 0x46L))))) || l_1276) <= 255UL))) >= 0x0CC6FE31364DC179L))
                    { /* block id: 608 */
                        int32_t *l_1298[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1298[i] = &p_1454->g_803;
                        (*p_1454->g_1296) = p_1454->g_967;
                        --p_1454->g_1302;
                    }
                    else
                    { /* block id: 611 */
                        int32_t **l_1305 = &p_1454->g_169;
                        l_1299 ^= (p_1454->g_1297[9].f0.f7 == 6L);
                        (*l_1305) = (p_1454->g_1123[4].f0.f5 , &l_1299);
                        if (l_1300[4][1][1])
                            break;
                        (*l_1305) = (*l_1305);
                    }
                    (*l_1094) = (safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((l_1324 |= (((l_1312 == (((((safe_sub_func_int8_t_s_s(((void*)0 == l_1226), ((safe_rshift_func_int16_t_s_u(((*l_1240) = ((l_1253[5] & (*l_1094)) <= ((l_1258 <= (((l_1294 = (((((*l_1226) = (safe_mod_func_uint64_t_u_u(0xBFFABA1814CABECDL, ((p_1454->g_1319 , l_1299) , p_1454->g_807)))) || 4294967295UL) >= 18446744073709551608UL) | l_1299)) <= 6L) != (*l_1094))) ^ 1UL))), p_1454->g_1320)) < 6L))) , l_1321[0][1]) == (*p_1454->g_1168)) ^ l_1322[1]) , l_1323)) >= 0x82F5C510L) ^ 18446744073709551606UL)) > (**p_1454->g_747)), 0x45D7L)), 1L)), p_1454->g_100));
                    if (l_1325[1])
                        continue;
                    for (p_1454->g_105 = 3; (p_1454->g_105 >= 0); p_1454->g_105 -= 1)
                    { /* block id: 625 */
                        volatile union U2 **l_1326 = &p_1454->g_900;
                        (*l_1326) = &p_1454->g_887;
                    }
                }
                l_1327 = l_1327;
                if ((*l_1327))
                    continue;
                for (p_1454->g_138 = 0; (p_1454->g_138 <= 3); p_1454->g_138 += 1)
                { /* block id: 633 */
                    int8_t l_1328[3];
                    int32_t l_1329 = 0x6DB13C08L;
                    uint8_t *l_1339[1][10];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1328[i] = 1L;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_1339[i][j] = &l_1258;
                    }
                    if ((*l_1094))
                    { /* block id: 634 */
                        int32_t l_1330[7];
                        uint8_t l_1335 = 0x6FL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1330[i] = (-4L);
                        l_1335--;
                        (*p_1454->g_1170) = l_1328[2];
                        if (l_1338)
                            break;
                        (*l_1327) = l_1161[1];
                    }
                    else
                    { /* block id: 639 */
                        (*l_1154) = ((l_1339[0][1] == ((*p_1454->g_747) = (*p_1454->g_747))) , l_1340);
                        l_1329 = l_1328[2];
                        (*l_1094) ^= l_1328[2];
                    }
                    return l_1341;
                }
            }
            (*l_1094) = l_1342;
        }
    }
    else
    { /* block id: 650 */
        int64_t *l_1363[3];
        int32_t l_1399[1][6] = {{(-4L),(-3L),(-4L),(-4L),(-3L),(-4L)}};
        uint32_t l_1431 = 0x8EB660CDL;
        union U2 *l_1450[10];
        int8_t l_1452 = 0x33L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1363[i] = &p_1454->g_1051.f1;
        for (i = 0; i < 10; i++)
            l_1450[i] = &p_1454->g_1451;
        for (p_1454->g_960.f4 = 21; (p_1454->g_960.f4 <= 58); p_1454->g_960.f4 = safe_add_func_uint64_t_u_u(p_1454->g_960.f4, 1))
        { /* block id: 653 */
            int32_t *l_1349 = &l_984;
            int32_t l_1379 = 0x4CD67824L;
            uint32_t l_1400 = 4294967293UL;
            int32_t ***l_1416[5][9][5] = {{{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006}},{{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006}},{{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006}},{{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006}},{{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006},{&p_1454->g_1414[1][1][1],(void*)0,&p_1454->g_1414[0][2][2],&l_1006,&l_1006}}};
            uint64_t l_1440 = 0x3F83DA317A7FEDB0L;
            int8_t *l_1449 = &p_1454->g_226;
            int i, j, k;
            for (p_1454->g_226 = 12; (p_1454->g_226 < 6); --p_1454->g_226)
            { /* block id: 656 */
                int64_t *l_1362 = &p_1454->g_959.f1;
                int32_t l_1369 = 6L;
                uint32_t l_1418 = 0x1AE62DFDL;
                uint32_t **l_1423 = &l_1226;
                uint32_t *l_1425 = &p_1454->g_1082[3];
                uint32_t **l_1424 = &l_1425;
                for (p_1454->g_959.f0 = 0; (p_1454->g_959.f0 != 28); p_1454->g_959.f0++)
                { /* block id: 659 */
                    (*p_1454->g_917) = l_1349;
                    (*l_1094) |= (*p_1454->g_169);
                }
                for (p_1454->g_259 = 24; (p_1454->g_259 >= (-14)); p_1454->g_259--)
                { /* block id: 665 */
                    int32_t l_1364 = 0x052514EAL;
                    uint64_t *l_1367 = &p_1454->g_960.f0;
                    int32_t l_1368 = (-5L);
                    int16_t *l_1380 = &p_1454->g_100;
                    uint32_t *l_1398 = &p_1454->g_518;
                    int32_t l_1401 = 0x7BBB8657L;
                    (1 + 1);
                }
                (*l_1349) = (safe_sub_func_int8_t_s_s(l_1399[0][5], ((*p_1454->g_1296) , (safe_mod_func_uint16_t_u_u((&p_1454->g_1082[3] == ((*l_1424) = ((*l_1423) = &p_1454->g_1082[3]))), 0x1590L)))));
                for (p_1454->g_1319.f3 = 0; (p_1454->g_1319.f3 >= 19); p_1454->g_1319.f3 = safe_add_func_uint32_t_u_u(p_1454->g_1319.f3, 5))
                { /* block id: 700 */
                    for (p_1454->g_102 = (-8); (p_1454->g_102 == (-14)); p_1454->g_102 = safe_sub_func_int16_t_s_s(p_1454->g_102, 6))
                    { /* block id: 703 */
                        struct S1 *l_1430 = &p_1454->g_967;
                        (*l_1430) = (*p_1454->g_1296);
                    }
                }
            }
            l_1431++;
            (*l_1094) = (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((*l_1094), (((l_1440 >= ((safe_mul_func_int8_t_s_s((*p_1454->g_188), (((p_1454->g_1082[0] = p_1454->g_1297[9].f3) >= p_1454->g_1373.f2) ^ ((l_1399[0][4] , (l_1399[0][1] = (((((((safe_rshift_func_uint16_t_u_s(p_1454->g_967.f4, (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((*l_1449) = (*l_1349)) || (&p_1454->g_1268[4] != &p_1454->g_1268[4])), p_1454->g_1051.f0)), (*l_1094))))) & l_1399[0][1]) , p_1454->g_900) == l_1450[7]) && (**p_1454->g_747)) >= (-10L)) < p_1454->g_23))) && 0xAC4A2EC0585EFFBCL)))) | 0xE4L)) , l_1452) & l_1431))) , (-4L)), (*p_1454->g_556))), 15));
            if (l_1399[0][4])
                break;
        }
        for (p_1454->g_221 = 0; p_1454->g_221 < 5; p_1454->g_221 += 1)
        {
            p_1454->g_607[p_1454->g_221] = 0xDF19F9FBL;
        }
    }
    return l_1453;
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_967.f3 p_1454->g_188 p_1454->g_189
 * writes: p_1454->g_967.f3
 */
int8_t  func_11(uint32_t  p_12, uint8_t * p_13, int16_t  p_14, uint8_t * p_15, uint32_t  p_16, struct S4 * p_1454)
{ /* block id: 438 */
    uint64_t l_980 = 0x13AE428BB476F50DL;
    for (p_1454->g_967.f3 = 0; (p_1454->g_967.f3 <= 21); p_1454->g_967.f3++)
    { /* block id: 441 */
        int32_t *l_974 = &p_1454->g_253;
        int32_t *l_975 = (void*)0;
        int32_t *l_976 = (void*)0;
        int32_t *l_977 = (void*)0;
        int32_t *l_978 = &p_1454->g_29[0][0];
        int32_t *l_979[3][9] = {{&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0],&p_1454->g_803,&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0]},{&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0],&p_1454->g_803,&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0]},{&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0],&p_1454->g_803,&p_1454->g_803,&p_1454->g_29[0][0],(void*)0,&p_1454->g_29[0][0]}};
        int i, j;
        l_980++;
        return (*p_1454->g_188);
    }
    return l_980;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_17(uint16_t  p_18, uint8_t  p_19, uint32_t  p_20, struct S4 * p_1454)
{ /* block id: 436 */
    uint8_t *l_971 = &p_1454->g_49[6];
    return l_971;
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_29 p_1454->g_48 p_1454->g_23 p_1454->g_49 p_1454->g_100 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_102 p_1454->g_138 p_1454->g_137 p_1454->g_187 p_1454->g_195 p_1454->g_230 p_1454->g_259 p_1454->g_221 p_1454->g_326 p_1454->g_340 p_1454->g_253 p_1454->g_280 p_1454->g_226 p_1454->g_399 p_1454->g_373 p_1454->g_518 p_1454->g_552 p_1454->g_555 p_1454->g_556 p_1454->g_169 p_1454->g_569 p_1454->g_607 p_1454->g_367 p_1454->g_224 p_1454->g_747 p_1454->g_766 p_1454->g_796 p_1454->g_803
 * writes: p_1454->g_100 p_1454->g_102 p_1454->g_105 p_1454->g_119 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169 p_1454->g_49 p_1454->g_195 p_1454->g_253 p_1454->g_255 p_1454->g_259 p_1454->g_280 p_1454->g_326 p_1454->g_226 p_1454->g_340 p_1454->g_367 p_1454->g_221 p_1454->g_373 p_1454->g_399 p_1454->g_555 p_1454->g_569 p_1454->g_581 p_1454->g_607 p_1454->g_230 p_1454->g_518 p_1454->g_552 p_1454->g_746 p_1454->g_799 p_1454->g_803
 */
uint8_t  func_25(int8_t  p_26, int16_t  p_27, struct S4 * p_1454)
{ /* block id: 7 */
    int32_t *l_28 = &p_1454->g_29[0][0];
    int32_t l_30 = 0x01D68C2AL;
    int32_t *l_31 = &p_1454->g_29[0][0];
    int32_t *l_32 = &p_1454->g_29[0][0];
    int32_t *l_33 = (void*)0;
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = &p_1454->g_29[0][1];
    int32_t *l_36 = (void*)0;
    int32_t l_37[2];
    int32_t *l_38 = &l_30;
    int32_t *l_39 = &l_37[1];
    int32_t *l_40[1];
    int32_t l_41 = (-5L);
    uint16_t l_42 = 0x2748L;
    volatile struct S0 * volatile l_916[1];
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = 0x27EED050L;
    for (i = 0; i < 1; i++)
        l_40[i] = &l_30;
    for (i = 0; i < 1; i++)
        l_916[i] = &p_1454->g_887.f0;
    --l_42;
    (*l_39) |= (p_26 && (p_1454->g_29[0][0] && p_26));
    (*l_38) ^= (((((*l_28) >= p_27) >= (((void*)0 == &l_42) == (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u((~(p_1454->g_48[3][0] == (void*)0)))) >= p_1454->g_23), (safe_mod_func_uint32_t_u_u(func_52(&p_1454->g_29[0][0], p_1454), p_1454->g_224)))))) && p_27) == p_1454->g_29[0][0]);
    for (p_1454->g_195 = (-9); (p_1454->g_195 < 21); p_1454->g_195 = safe_add_func_int8_t_s_s(p_1454->g_195, 1))
    { /* block id: 358 */
        int32_t *l_822 = &p_1454->g_230[0];
        uint8_t *l_823 = &p_1454->g_49[6];
        uint32_t *l_827 = &p_1454->g_280;
        int32_t l_893 = 0L;
        int32_t l_894 = 0x3BBCA895L;
        uint32_t l_924 = 4294967295UL;
        int32_t l_927[4][1] = {{0x5D1E0597L},{0x5D1E0597L},{0x5D1E0597L},{0x5D1E0597L}};
        int64_t l_949[4];
        int8_t l_952 = (-1L);
        struct S1 *l_966[3][2] = {{&p_1454->g_967,&p_1454->g_967},{&p_1454->g_967,&p_1454->g_967},{&p_1454->g_967,&p_1454->g_967}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_949[i] = (-5L);
        for (p_26 = 0; (p_26 <= (-21)); p_26--)
        { /* block id: 361 */
            uint8_t l_830 = 1UL;
            uint16_t *l_836 = &l_42;
            int16_t *l_843 = (void*)0;
            int16_t **l_842[1][10] = {{&l_843,&l_843,&l_843,&l_843,&l_843,&l_843,&l_843,&l_843,&l_843,&l_843}};
            uint64_t l_847 = 18446744073709551609UL;
            int32_t l_871 = 0x50F00266L;
            int8_t *l_882 = &p_1454->g_102;
            int8_t **l_881 = &l_882;
            int8_t ***l_880[8] = {&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881,&l_881};
            uint8_t l_912[10] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
            int32_t l_932 = 0x670F307EL;
            int32_t l_934 = 0x434257B3L;
            int32_t l_936 = 0x561A8597L;
            int32_t l_939 = 0x09A345A4L;
            int16_t l_941 = 0x430AL;
            int32_t l_942 = 0x2928581FL;
            int32_t l_943 = (-1L);
            int32_t l_946 = 0L;
            int32_t l_950[3];
            uint8_t l_963 = 251UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_950[i] = 0x1FB10580L;
            for (p_27 = 16; (p_27 != (-11)); p_27--)
            { /* block id: 364 */
                if (p_26)
                    break;
            }
            for (p_1454->g_555 = (-5); (p_1454->g_555 == 4); ++p_1454->g_555)
            { /* block id: 369 */
                uint16_t *l_837[7] = {&p_1454->g_133,&l_42,&p_1454->g_133,&p_1454->g_133,&l_42,&p_1454->g_133,&p_1454->g_133};
                int32_t l_846[4][9][4] = {{{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L}},{{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L}},{{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L}},{{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L},{0L,(-1L),0x1C42869AL,0x6BB389D1L}}};
                int32_t l_892 = 0x707BDD69L;
                uint32_t *l_901 = &p_1454->g_607[4];
                int32_t l_913[3][3] = {{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}};
                int8_t l_951[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint64_t l_953 = 0x70C4D50FE198A84AL;
                int i, j, k;
                (1 + 1);
            }
        }
        l_966[1][1] = l_966[1][0];
        for (l_952 = 28; (l_952 <= 16); l_952 = safe_sub_func_int16_t_s_s(l_952, 5))
        { /* block id: 429 */
            if ((*l_35))
                break;
            return p_26;
        }
    }
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_49 p_1454->g_29 p_1454->g_100 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_23 p_1454->g_102 p_1454->g_138 p_1454->g_137 p_1454->g_187 p_1454->g_195 p_1454->g_230 p_1454->g_259 p_1454->g_221 p_1454->g_326 p_1454->g_340 p_1454->g_253 p_1454->g_280 p_1454->g_226 p_1454->g_399 p_1454->g_373 p_1454->g_518 p_1454->g_552 p_1454->g_555 p_1454->g_556 p_1454->g_169 p_1454->g_569 p_1454->g_607 p_1454->g_367 p_1454->g_224 p_1454->g_747 p_1454->g_766 p_1454->g_796 p_1454->g_803
 * writes: p_1454->g_100 p_1454->g_102 p_1454->g_105 p_1454->g_119 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169 p_1454->g_49 p_1454->g_195 p_1454->g_253 p_1454->g_255 p_1454->g_259 p_1454->g_280 p_1454->g_326 p_1454->g_226 p_1454->g_340 p_1454->g_367 p_1454->g_221 p_1454->g_373 p_1454->g_399 p_1454->g_555 p_1454->g_569 p_1454->g_581 p_1454->g_607 p_1454->g_230 p_1454->g_518 p_1454->g_552 p_1454->g_746 p_1454->g_799 p_1454->g_803
 */
uint32_t  func_52(int32_t * p_53, struct S4 * p_1454)
{ /* block id: 10 */
    uint32_t l_60 = 0x0306456AL;
    int16_t *l_798 = &p_1454->g_799;
    uint32_t l_800 = 4294967295UL;
    int32_t *l_801 = &p_1454->g_138;
    int32_t *l_802[6] = {&p_1454->g_29[0][0],&p_1454->g_803,&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_803,&p_1454->g_29[0][0]};
    int32_t l_804 = (-1L);
    int16_t l_805[1];
    int16_t l_806 = 0x27BFL;
    uint8_t l_808 = 0x50L;
    int i;
    for (i = 0; i < 1; i++)
        l_805[i] = (-6L);
    p_1454->g_803 &= ((*l_801) = (3L <= (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(func_58(l_60, p_1454), 11)), (((l_60 <= ((safe_sub_func_int32_t_s_s((255UL < (safe_sub_func_int16_t_s_s(0x7614L, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_60, 6)), ((safe_mod_func_int16_t_s_s(((*l_798) = ((safe_mod_func_int8_t_s_s((l_60 ^ (((((void*)0 != p_1454->g_796) == l_60) ^ p_1454->g_29[0][0]) , l_60)), p_1454->g_23)) == l_60)), l_800)) , 0x3357L))) == p_1454->g_29[0][0])))), 0x3B1D81F2L)) <= l_60)) == l_60) , l_800)))));
    l_808++;
    return (*l_801);
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_49 p_1454->g_29 p_1454->g_100 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_23 p_1454->g_102 p_1454->g_138 p_1454->g_137 p_1454->g_187 p_1454->g_195 p_1454->g_230 p_1454->g_259 p_1454->g_221 p_1454->g_326 p_1454->g_340 p_1454->g_253 p_1454->g_280 p_1454->g_226 p_1454->g_399 p_1454->g_373 p_1454->g_518 p_1454->g_552 p_1454->g_555 p_1454->g_556 p_1454->g_169 p_1454->g_569 p_1454->g_607 p_1454->g_367 p_1454->g_224 p_1454->g_747 p_1454->g_766
 * writes: p_1454->g_100 p_1454->g_102 p_1454->g_105 p_1454->g_119 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169 p_1454->g_49 p_1454->g_195 p_1454->g_253 p_1454->g_255 p_1454->g_259 p_1454->g_280 p_1454->g_326 p_1454->g_226 p_1454->g_340 p_1454->g_367 p_1454->g_221 p_1454->g_373 p_1454->g_399 p_1454->g_555 p_1454->g_569 p_1454->g_581 p_1454->g_607 p_1454->g_230 p_1454->g_518 p_1454->g_552 p_1454->g_746
 */
int16_t  func_58(int8_t  p_59, struct S4 * p_1454)
{ /* block id: 11 */
    int32_t l_559 = 0x3017E6D0L;
    int32_t l_568 = (-6L);
    uint32_t *l_582 = (void*)0;
    uint32_t l_609 = 0x0CCFE35EL;
    int64_t *l_619 = &p_1454->g_326;
    int32_t **l_629[5];
    uint32_t *l_635 = (void*)0;
    uint32_t **l_634[7][2][1] = {{{&l_635},{&l_635}},{{&l_635},{&l_635}},{{&l_635},{&l_635}},{{&l_635},{&l_635}},{{&l_635},{&l_635}},{{&l_635},{&l_635}},{{&l_635},{&l_635}}};
    uint32_t l_711 = 0xF44D94D1L;
    uint8_t **l_727 = &p_1454->g_147;
    uint64_t *l_728 = &p_1454->g_367;
    uint32_t l_767 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_629[i] = &p_1454->g_137;
    for (p_59 = (-10); (p_59 > 25); ++p_59)
    { /* block id: 14 */
        int64_t l_71[9] = {0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L,0x0D0DA963F4458B99L};
        int32_t *l_562 = &p_1454->g_230[2];
        int32_t **l_563 = &l_562;
        int32_t *l_565[4][7] = {{&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_29[0][0]}};
        int32_t **l_564 = &l_565[2][3];
        int64_t *l_576 = &p_1454->g_326;
        uint32_t *l_578 = &p_1454->g_518;
        uint32_t **l_577 = &l_578;
        uint32_t *l_580 = &p_1454->g_518;
        uint32_t **l_579[10][2][4] = {{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}},{{&l_580,&l_580,&l_580,&l_580},{&l_580,&l_580,&l_580,&l_580}}};
        uint64_t *l_583 = &p_1454->g_373;
        int16_t l_656[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        int8_t *l_681 = &p_1454->g_221;
        int8_t **l_680 = &l_681;
        int8_t ***l_679 = &l_680;
        int32_t l_705 = 0x1C3E6140L;
        uint32_t l_707 = 1UL;
        int16_t l_710 = 0L;
        int i, j, k;
        p_1454->g_569 &= (l_568 = (safe_rshift_func_int8_t_s_s(func_65(func_68(l_71[5], &p_1454->g_49[3], p_1454), l_71[4], p_1454), ((((l_559 > (((~(safe_mod_func_int16_t_s_s((((*l_564) = ((*l_563) = l_562)) == (void*)0), (safe_rshift_func_uint16_t_u_s(p_59, l_559))))) , 18446744073709551606UL) , p_59)) < p_1454->g_29[0][5]) && p_59) >= p_1454->g_230[2]))));
        if (((((*l_583) = (((((**l_564) <= ((p_1454->g_133 <= 0xF899CCDF64085D27L) || ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_59, (l_568 , (p_1454->g_102 < (safe_add_func_int16_t_s_s(p_1454->g_23, (((*l_576) |= 0x4C531A162E48AAADL) >= ((p_1454->g_581[2] = ((*l_577) = l_562)) == l_582)))))))), 65535UL)) & l_559))) , l_568) <= (-4L)) , 9UL)) < l_568) != p_59))
        { /* block id: 248 */
            int16_t *l_584 = &p_1454->g_100;
            int16_t *l_585 = (void*)0;
            int16_t *l_586[4][7][1] = {{{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552}},{{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552}},{{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552}},{{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552},{&p_1454->g_552}}};
            uint32_t l_587 = 0x328DF5CAL;
            uint16_t *l_604 = &p_1454->g_195;
            uint32_t *l_605 = (void*)0;
            uint32_t *l_606[7][5][7] = {{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}},{{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]},{&p_1454->g_607[0],(void*)0,&p_1454->g_607[4],&p_1454->g_607[1],(void*)0,&p_1454->g_607[4],&p_1454->g_607[0]}}};
            int32_t l_608 = 0x15647E14L;
            int8_t l_610[8][2] = {{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL},{0x1FL,0x1FL}};
            int32_t l_624[3][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
            int i, j, k;
            (**l_563) &= ((((l_568 |= ((*l_584) = p_1454->g_49[3])) , &l_71[5]) != &p_1454->g_326) , (l_587 > ((p_1454->g_607[4] |= (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(255UL, (safe_add_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((l_608 = (safe_add_func_uint16_t_u_u((p_59 ^ 0UL), (((*l_604) = ((safe_mul_func_uint8_t_u_u(((p_1454->g_119 |= p_1454->g_102) ^ ((safe_mod_func_int32_t_s_s(0x1262A5B2L, p_59)) != 0L)), 0x3CL)) != 0x3EA8E5ECL)) && 0xFD4EL)))), l_609)) ^ p_59), l_610[0][0])))), 0x885633D2C4245C47L)), 0xB999L))) , p_59)));
            l_568 |= ((safe_add_func_uint16_t_u_u((((((((p_1454->g_367 = (++(*l_583))) ^ p_1454->g_23) , &p_1454->g_259) != &p_1454->g_259) < p_1454->g_607[2]) , (safe_mod_func_int32_t_s_s(((p_1454->g_367 & ((safe_mul_func_int16_t_s_s(0L, 0x84ECL)) == (l_619 != ((((((*l_578) = (safe_lshift_func_uint8_t_u_s((((++p_1454->g_607[4]) ^ (l_610[7][0] , p_59)) , p_59), 4))) , p_1454->g_195) < p_59) | l_559) , &l_71[5])))) && 0x10L), l_559))) <= 1UL), p_59)) , p_1454->g_119);
            if (l_624[0][0])
                continue;
            (**l_563) = (l_624[0][0] = (((((p_1454->g_552 = ((*l_584) &= p_1454->g_253)) , (p_1454->g_49[3] < (0x2988L & (safe_lshift_func_uint8_t_u_u(5UL, 3))))) <= (++(*l_604))) , (&p_1454->g_169 == (p_59 , l_629[4]))) | (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((p_1454->g_607[4] &= p_1454->g_102) , (void*)0) != l_634[3][0][0]), 9)), 1)) && p_59) < p_59)));
        }
        else
        { /* block id: 268 */
            int32_t l_647 = 0x6380CA0EL;
            int32_t l_648[6] = {0x7952D175L,0x7952D175L,0x7952D175L,0x7952D175L,0x7952D175L,0x7952D175L};
            uint32_t *l_665[9][10][2] = {{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}},{{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0},{&p_1454->g_607[4],(void*)0}}};
            int32_t l_666 = 4L;
            int i, j, k;
            if (p_59)
            { /* block id: 269 */
                (*l_564) = (void*)0;
            }
            else
            { /* block id: 271 */
                uint32_t l_640 = 0xF63947FDL;
                for (p_1454->g_195 = 0; (p_1454->g_195 <= 2); p_1454->g_195++)
                { /* block id: 274 */
                    (**l_563) = (safe_add_func_uint32_t_u_u(l_640, (0x4FA0F4EDL ^ 0x415194CDL)));
                }
            }
            for (p_1454->g_399 = 17; (p_1454->g_399 >= 56); ++p_1454->g_399)
            { /* block id: 280 */
                int8_t l_649 = 6L;
                int32_t l_650[10] = {0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL,0x0003915EL};
                uint32_t l_658 = 0x06C713C9L;
                uint32_t *l_662 = &p_1454->g_607[4];
                uint32_t **l_661 = &l_662;
                int i;
                for (p_1454->g_552 = 28; (p_1454->g_552 >= (-27)); p_1454->g_552--)
                { /* block id: 283 */
                    int8_t l_651 = 0L;
                    int32_t l_652 = 0x377404C6L;
                    int32_t l_653 = 0x724A5A00L;
                    int32_t l_654 = 0x3D1DB68BL;
                    int32_t l_655 = 4L;
                    int32_t l_657[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int i;
                    (**l_563) = (-1L);
                    for (p_1454->g_100 = 21; (p_1454->g_100 >= 14); p_1454->g_100 = safe_sub_func_uint16_t_u_u(p_1454->g_100, 8))
                    { /* block id: 287 */
                        (**l_563) = 0x10E639B5L;
                    }
                    l_658++;
                }
                l_666 = ((p_59 , 0x7951L) || ((((*l_661) = &l_609) == (p_1454->g_102 , &p_1454->g_607[4])) & (safe_mul_func_int8_t_s_s((l_665[1][6][0] != &p_1454->g_607[4]), l_666))));
                if ((safe_div_func_int8_t_s_s(p_1454->g_138, p_59)))
                { /* block id: 294 */
                    for (p_1454->g_100 = 0; (p_1454->g_100 != (-1)); p_1454->g_100--)
                    { /* block id: 297 */
                        return p_59;
                    }
                }
                else
                { /* block id: 300 */
                    for (p_1454->g_259 = (-12); (p_1454->g_259 > 20); p_1454->g_259++)
                    { /* block id: 303 */
                        uint64_t l_688 = 2UL;
                        uint64_t l_695 = 0xF3842E0869EEC354L;
                        uint16_t *l_702 = &p_1454->g_195;
                        (*l_562) = ((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(p_1454->g_569, (safe_sub_func_uint32_t_u_u(((void*)0 == l_679), (((safe_rshift_func_int16_t_s_s(p_1454->g_326, (safe_add_func_uint8_t_u_u((l_688 != ((l_648[0] |= ((((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((l_695 && (((*l_702) &= ((+(safe_add_func_int64_t_s_s(p_1454->g_253, p_1454->g_280))) || (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(8L, p_1454->g_224)), p_59)))) > p_59)) & 0x10L), p_1454->g_224)), 7UL)), p_1454->g_253)) || p_1454->g_340) , 1UL) != 0x19021A57L)) < p_1454->g_49[3])), l_688)))) < p_59) >= 0x59L))))) <= p_59), l_695)) != 0x408E21E7L);
                        (*l_563) = &p_1454->g_138;
                        return p_59;
                    }
                    for (p_1454->g_373 = (-7); (p_1454->g_373 > 36); p_1454->g_373 = safe_add_func_uint16_t_u_u(p_1454->g_373, 9))
                    { /* block id: 312 */
                        uint64_t l_706 = 0x83C3EDD3608AE941L;
                        l_706 ^= ((*l_562) |= l_705);
                        l_707--;
                        if (l_710)
                            break;
                        if (l_711)
                            continue;
                    }
                    if (p_59)
                        break;
                }
            }
        }
        return p_1454->g_569;
    }
lbl_733:
    p_1454->g_138 = 0x32BA91AFL;
    if ((safe_add_func_int64_t_s_s((p_1454->g_340 >= (safe_mul_func_uint16_t_u_u(p_59, ((safe_unary_minus_func_int64_t_s(0L)) <= p_1454->g_373)))), (safe_lshift_func_int16_t_s_s(((!(safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(6UL, (safe_add_func_uint64_t_u_u(p_1454->g_102, (((*l_728) ^= ((((void*)0 != l_727) <= p_1454->g_340) > p_59)) < p_1454->g_29[1][4]))))) ^ 0x6B43L) && p_59), p_1454->g_607[0])), (-10L)))) >= p_59), 11)))))
    { /* block id: 327 */
        int16_t l_731 = 0x6B75L;
        int32_t *l_732 = &p_1454->g_29[1][5];
        p_1454->g_138 = (safe_add_func_int32_t_s_s((l_731 |= p_59), ((l_728 != l_728) <= (((*p_1454->g_556) = (*p_1454->g_556)) || (-1L)))));
        for (p_1454->g_569 = 6; (p_1454->g_569 >= 2); p_1454->g_569 -= 1)
        { /* block id: 333 */
            p_1454->g_169 = (p_1454->g_137 = l_732);
        }
    }
    else
    { /* block id: 337 */
        uint8_t ***l_744 = &l_727;
        uint8_t ****l_745[4][8];
        uint8_t l_756 = 0UL;
        uint64_t l_757 = 0x5E42E8FB08160B5AL;
        uint32_t **l_759 = (void*)0;
        uint32_t ***l_758 = &l_759;
        uint32_t *l_772[2][9][7] = {{{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280}},{{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280},{(void*)0,&l_767,&l_767,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280}}};
        int32_t l_781 = 0x1B8152F5L;
        int32_t l_782 = 0x38CC5982L;
        uint16_t l_783 = 1UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 8; j++)
                l_745[i][j] = &l_744;
        }
        if (p_1454->g_367)
            goto lbl_733;
        p_1454->g_230[2] |= ((((safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((((((**p_1454->g_747) = ((~(safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_1454->g_138, 9)), ((p_1454->g_746 = l_744) == (((((safe_div_func_int32_t_s_s(p_59, 1L)) & (safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_756 < ((l_757 &= (-5L)) > ((**p_1454->g_747) == (((*l_758) = (void*)0) == ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(p_59, 6)) >= 1L) && 8UL), 6)), p_59)) , p_1454->g_766))))), l_756)) > p_59), l_767)), 1L))) , &p_1454->g_137) == &p_1454->g_169) , &p_1454->g_747))))) < p_59)) == 248UL) , p_59) >= p_59) < p_59), 0xB0L)) , p_1454->g_119), 0x136A0DADL)) , (-1L)), 8)) , p_59) != p_59) && p_59);
        p_1454->g_253 |= 0x302BC46AL;
        p_1454->g_230[2] |= (((safe_rshift_func_uint16_t_u_s(p_1454->g_49[3], 3)) , &l_711) != ((((safe_lshift_func_int16_t_s_u(((void*)0 != l_772[1][8][3]), ((safe_mul_func_uint16_t_u_u(0xA7D1L, ((safe_add_func_int32_t_s_s((((void*)0 != &p_1454->g_29[1][3]) ^ ((!(((((((p_1454->g_766 == ((safe_lshift_func_uint16_t_u_s(((l_782 = (l_781 = 0UL)) && 0L), p_1454->g_221)) , (void*)0)) , p_59) != 0x955BL) , l_783) & p_1454->g_23) ^ p_1454->g_138) != p_59)) < p_1454->g_138)), p_59)) <= p_59))) && 0UL))) , 0x05C11AECL) , 0x78L) , &l_711));
    }
    return p_1454->g_29[1][7];
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_230 p_1454->g_259
 * writes:
 */
int8_t  func_65(int32_t * p_66, int8_t  p_67, struct S4 * p_1454)
{ /* block id: 237 */
    uint32_t l_558 = 0xE129C56AL;
    l_558 ^= p_1454->g_230[2];
    return p_1454->g_259;
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_49 p_1454->g_29 p_1454->g_100 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_23 p_1454->g_102 p_1454->g_138 p_1454->g_137 p_1454->g_187 p_1454->g_195 p_1454->g_230 p_1454->g_259 p_1454->g_221 p_1454->g_326 p_1454->g_340 p_1454->g_253 p_1454->g_280 p_1454->g_226 p_1454->g_399 p_1454->g_373 p_1454->g_518 p_1454->g_367 p_1454->g_552 p_1454->g_555 p_1454->g_556 p_1454->g_169
 * writes: p_1454->g_100 p_1454->g_102 p_1454->g_105 p_1454->g_119 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169 p_1454->g_49 p_1454->g_195 p_1454->g_253 p_1454->g_255 p_1454->g_259 p_1454->g_280 p_1454->g_326 p_1454->g_226 p_1454->g_340 p_1454->g_367 p_1454->g_221 p_1454->g_373 p_1454->g_399 p_1454->g_555
 */
int32_t * func_68(int32_t  p_69, uint8_t * p_70, struct S4 * p_1454)
{ /* block id: 15 */
    uint32_t l_171 = 0UL;
    int8_t l_174 = 0x27L;
    int32_t **l_183 = &p_1454->g_169;
    int32_t **l_186 = (void*)0;
    int8_t *l_193 = (void*)0;
    int8_t **l_192[1][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t l_198 = (-2L);
    uint16_t *l_211[3];
    int32_t l_220 = 0x39419DE7L;
    int32_t l_222 = 1L;
    int32_t l_233[9][2][10] = {{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}},{{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL},{0x47B62B50L,3L,1L,0x125C7451L,(-1L),0x125C7451L,1L,3L,0x47B62B50L,0x0A77CAADL}}};
    int32_t l_235 = 8L;
    int32_t l_237 = 0x7A730863L;
    uint8_t l_238 = 0x7FL;
    uint8_t l_295[1][6] = {{9UL,255UL,9UL,9UL,255UL,9UL}};
    uint32_t *l_472 = (void*)0;
    uint32_t *l_521 = &l_171;
    uint32_t **l_520 = &l_521;
    int32_t *l_530 = (void*)0;
    int32_t *l_557 = &l_220;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_211[i] = &p_1454->g_133;
lbl_300:
    for (p_69 = 9; (p_69 >= 4); p_69 = safe_sub_func_uint8_t_u_u(p_69, 1))
    { /* block id: 18 */
        uint8_t *l_83 = &p_1454->g_49[3];
        int16_t *l_99 = &p_1454->g_100;
        int8_t *l_101 = &p_1454->g_102;
        uint64_t l_103[7][2] = {{0UL,18446744073709551612UL},{0UL,18446744073709551612UL},{0UL,18446744073709551612UL},{0UL,18446744073709551612UL},{0UL,18446744073709551612UL},{0UL,18446744073709551612UL},{0UL,18446744073709551612UL}};
        int8_t *l_104 = &p_1454->g_105;
        int32_t *l_172 = (void*)0;
        int32_t *l_173 = &p_1454->g_138;
        int32_t **l_185[7][8] = {{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173},{&p_1454->g_169,&p_1454->g_137,&l_173,&l_173,(void*)0,&l_172,&l_172,&l_173}};
        int32_t ***l_184[9][1][9] = {{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}},{{&l_185[3][4],&l_185[1][2],&l_185[1][2],&l_185[4][5],&l_185[3][4],&l_185[6][5],&l_185[1][2],&l_185[5][4],&l_185[4][5]}}};
        int8_t **l_191 = &l_101;
        int8_t ***l_190[10] = {&l_191,&l_191,&l_191,&l_191,&l_191,&l_191,&l_191,&l_191,&l_191,&l_191};
        uint32_t *l_194[9][4][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t l_205 = 1UL;
        int8_t l_232 = 0x06L;
        int32_t l_234 = 0x20D92A69L;
        int64_t l_236 = 0x3499AA9D4D813FCFL;
        int i, j, k;
        (*l_173) = (safe_mul_func_int8_t_s_s(0x53L, (p_1454->g_49[4] = (((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((p_1454->g_49[3] && (func_80(l_83, func_84((((*l_104) = (l_103[1][1] &= (safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((p_1454->g_29[0][0] || ((p_1454->g_29[0][0] ^ (((void*)0 != l_83) , (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((*l_101) = (safe_lshift_func_int8_t_s_u((((*l_99) = 0x0F13L) > ((p_1454->g_29[0][3] < p_1454->g_29[1][3]) | p_1454->g_49[0])), 4))) || 0x7CL), 8)) != 1UL), p_69)), p_1454->g_49[3])))) < p_69)), 1L)) != p_69) <= 0xFAL), p_1454->g_29[0][0])))) , p_1454->g_100), &p_1454->g_29[0][0], p_1454), p_1454) && p_1454->g_23)), p_1454->g_49[1])) & l_171), p_69)) ^ p_69) ^ p_69))));
        if (l_174)
            continue;
        (*l_173) ^= ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((((l_183 = (void*)0) == (l_186 = &p_1454->g_137)) & (p_1454->g_187 != (l_192[0][4][0] = &l_101))) > (p_1454->g_195 &= l_174)) != (safe_lshift_func_uint8_t_u_u(((void*)0 != &p_1454->g_100), 2))), (l_198 = (-1L)))), ((((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(l_205, 0x43D635B3L)), 4)) && (-10L)), 1L)) < 1UL) >= l_174) & l_171))), l_174)) == p_1454->g_49[1]) < 1L), l_174)) != p_1454->g_29[0][0]);
        if (p_1454->g_100)
        { /* block id: 67 */
            uint32_t l_206[7];
            int8_t **l_218 = (void*)0;
            int32_t l_219 = 0x37B7EF6DL;
            int32_t l_223 = 6L;
            int32_t l_225 = 0x7D22A03BL;
            int32_t l_227 = 0x04490758L;
            int32_t l_228 = 0x094CEFB8L;
            int32_t l_229[10] = {0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L,0x1382D277L};
            int64_t l_231 = 0x64F2420815C10D9CL;
            int i;
            for (i = 0; i < 7; i++)
                l_206[i] = 0xB2710EF8L;
            if (p_69)
                break;
            l_206[3]++;
            l_198 &= (safe_lshift_func_uint8_t_u_u((1L > ((((-1L) > (&p_1454->g_195 == l_211[0])) || ((*p_70) = ((safe_rshift_func_int16_t_s_u((p_69 | ((((p_69 != (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((l_218 != &l_193), p_1454->g_29[0][0])) | p_69), p_69))) < p_1454->g_102) , 0x0AL) && p_1454->g_102)), p_1454->g_133)) >= p_69))) || 7L)), 3));
            --l_238;
        }
        else
        { /* block id: 73 */
            int64_t *l_254[2][6] = {{&l_236,&l_236,&l_236,&l_236,&l_236,&l_236},{&l_236,&l_236,&l_236,&l_236,&l_236,&l_236}};
            int32_t l_256 = 0x745F7256L;
            int32_t *l_257 = (void*)0;
            int32_t *l_258 = &p_1454->g_259;
            int32_t *l_260 = &p_1454->g_230[2];
            uint16_t l_281 = 0xEFBFL;
            uint64_t l_285 = 0x740B7A4064B14167L;
            int32_t l_289[6][7] = {{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L},{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L},{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L},{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L},{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L},{0x0E340233L,(-6L),1L,0x50E3D36CL,(-6L),0x50E3D36CL,1L}};
            int i, j;
            if (p_1454->g_133)
                break;
            for (p_1454->g_100 = 0; (p_1454->g_100 <= 0); p_1454->g_100 += 1)
            { /* block id: 77 */
                uint32_t l_241 = 0xD4D6A2B4L;
                uint32_t l_244[8] = {0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L,0x6DFDD3D1L};
                int i;
                if ((*l_173))
                    break;
                for (l_198 = 0; (l_198 >= 0); l_198 -= 1)
                { /* block id: 81 */
                    int i, j, k;
                    l_241++;
                    l_244[2] = p_69;
                }
            }
            if (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((((p_1454->g_105 >= p_1454->g_230[2]) ^ 5UL) && ((safe_rshift_func_int16_t_s_s(((~(safe_div_func_int64_t_s_s((p_1454->g_253 = p_69), p_1454->g_230[2]))) , 0x2F9DL), 7)) , ((((*l_258) = ((((p_1454->g_255 = (*l_173)) , (((*l_173) = 0x687A6853L) <= ((0x1FL > (*p_70)) > p_1454->g_133))) > l_256) == 1L)) , &l_237) == &p_1454->g_224))) , p_1454->g_105) , p_1454->g_100), (-5L))), p_69)) ^ p_69))
            { /* block id: 90 */
                l_260 = ((*l_186) = &p_1454->g_29[0][2]);
            }
            else
            { /* block id: 93 */
                if (p_69)
                    break;
            }
            if (p_69)
            { /* block id: 96 */
                int8_t **l_263[7][7] = {{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193},{&l_104,&l_193,&l_193,&l_193,&l_193,&l_193,&l_193}};
                int8_t ****l_264 = (void*)0;
                int8_t ****l_265 = &l_190[8];
                int16_t *l_275 = &p_1454->g_255;
                uint8_t l_282[7] = {0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL,0x0AL};
                int i, j;
                (*l_173) &= (safe_mul_func_uint16_t_u_u(((p_69 | (((~((void*)0 != l_263[2][0])) , ((*l_265) = (void*)0)) == (void*)0)) >= ((safe_mul_func_uint16_t_u_u((((p_1454->g_133 = (safe_add_func_int64_t_s_s((p_1454->g_280 = (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_1454->g_259, ((*l_275) = ((*l_99) = p_69)))), (safe_lshift_func_int8_t_s_u(p_1454->g_105, (safe_rshift_func_int8_t_s_s((((2UL >= p_69) | p_69) && p_1454->g_105), p_1454->g_23)))))) <= p_69)))), 3L))) , p_69) >= p_69), (-1L))) != p_69)), l_281));
                (*l_173) &= l_282[0];
                return &p_1454->g_29[0][0];
            }
            else
            { /* block id: 105 */
                int32_t *l_290[2][8] = {{&l_222,&l_256,&l_222,&l_222,&l_256,&l_222,&l_222,&l_256},{&l_222,&l_256,&l_222,&l_222,&l_256,&l_222,&l_222,&l_256}};
                int i, j;
                for (l_238 = 0; (l_238 == 14); ++l_238)
                { /* block id: 108 */
                    if (l_285)
                    { /* block id: 109 */
                        uint8_t ***l_286 = (void*)0;
                        uint8_t **l_288 = (void*)0;
                        uint8_t ***l_287 = &l_288;
                        int32_t l_291 = 0x22EF9B0AL;
                        (*l_287) = &p_1454->g_147;
                        (*l_173) = l_289[0][6];
                        (*l_186) = l_290[1][6];
                        if (l_291)
                            break;
                    }
                    else
                    { /* block id: 114 */
                        (*l_173) &= (p_1454->g_29[0][0] != (p_1454->g_133 = p_69));
                        return &p_1454->g_29[0][0];
                    }
                }
                (*l_173) ^= (0xF5L >= (*p_70));
                l_290[0][6] = (p_1454->g_169 = l_290[1][6]);
            }
        }
    }
    for (l_222 = 0; (l_222 <= 2); l_222 += 1)
    { /* block id: 128 */
        int32_t *l_292 = &p_1454->g_253;
        int32_t *l_293 = &l_233[3][0][7];
        int32_t *l_294[5][2][9] = {{{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]}},{{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]}},{{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]}},{{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]}},{{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]},{&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0],&p_1454->g_29[0][0],&p_1454->g_230[1],&p_1454->g_29[0][0]}}};
        int16_t *l_298 = &p_1454->g_100;
        uint8_t l_411 = 0x28L;
        int32_t l_467 = (-1L);
        int i, j, k;
        l_295[0][5]--;
        if ((l_211[l_222] != l_298))
        { /* block id: 130 */
            int64_t l_299 = 0x435A51F451565E2DL;
            l_299 |= 0L;
            if (p_1454->g_119)
                goto lbl_300;
            if (p_69)
                break;
        }
        else
        { /* block id: 134 */
            int32_t l_303 = 1L;
            uint32_t *l_318 = &l_171;
            int8_t **l_325 = &l_193;
            int64_t *l_327 = &p_1454->g_326;
            int16_t *l_328 = &p_1454->g_100;
            (*l_292) = (p_1454->g_230[2] & ((safe_mul_func_uint8_t_u_u(p_1454->g_221, (l_303 < (safe_add_func_int32_t_s_s((!(safe_div_func_uint8_t_u_u(((*l_293) && ((safe_mul_func_int16_t_s_s(0x47D1L, (safe_sub_func_int8_t_s_s((p_1454->g_105 = (l_303 , ((*l_293) = (safe_div_func_uint32_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((!((*l_318)++)), 0x3CDB0C69L)), (((((p_1454->g_226 = ((((*l_327) = ((((((((0xF07AL <= (safe_sub_func_uint16_t_u_u((((l_325 = ((p_69 != 250UL) , (void*)0)) != (void*)0) & (-1L)), p_1454->g_326))) ^ p_1454->g_49[4]) && 0x6BL) > 0x01L) ^ 0UL) <= p_69) >= p_69) | 0L)) == p_1454->g_259) != (*p_70))) && (*p_70)) , l_303) , 0xCB47L) , p_69))) , &p_1454->g_100) == l_328) < 0x3C0C030AABB352D9L), 0x08E7A480L))))), (*p_70))))) ^ 0UL)), p_1454->g_119))), 0UL))))) , p_69));
        }
        for (p_1454->g_102 = 2; (p_1454->g_102 >= 0); p_1454->g_102 -= 1)
        { /* block id: 145 */
            int8_t l_375 = 0x52L;
            int32_t l_378 = 0x468414EFL;
            uint64_t *l_397 = (void*)0;
            int32_t l_404 = 0x15005DFCL;
            int32_t l_405 = (-3L);
            int32_t l_406 = 0x00B1C70CL;
            int32_t l_410 = (-6L);
            uint8_t **l_455 = &p_1454->g_147;
            uint8_t ***l_454 = &l_455;
            uint32_t **l_522 = (void*)0;
            int32_t *l_524 = &l_198;
            int32_t *l_529 = &p_1454->g_230[1];
            if (p_69)
            { /* block id: 146 */
                int32_t l_374 = 0x458D17BAL;
                int32_t l_400 = 0x228902F3L;
                int32_t l_407 = 0L;
                int32_t l_408 = 0x4B93AA0CL;
                int32_t l_409 = (-8L);
                uint32_t *l_516 = (void*)0;
                uint32_t *l_517[5] = {&p_1454->g_518,&p_1454->g_518,&p_1454->g_518,&p_1454->g_518,&p_1454->g_518};
                uint32_t *l_519 = &l_171;
                int i;
                for (p_1454->g_259 = 2; (p_1454->g_259 >= 0); p_1454->g_259 -= 1)
                { /* block id: 149 */
                    uint32_t l_333 = 4294967290UL;
                    int16_t *l_364 = &p_1454->g_100;
                    int32_t l_401 = 0x608C39DEL;
                    int32_t l_402 = 0L;
                    int32_t l_403[5] = {4L,4L,4L,4L,4L};
                    uint32_t *l_451[1][7] = {{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333}};
                    uint32_t *l_480 = &l_171;
                    int i, j;
                    for (l_238 = 0; (l_238 <= 2); l_238 += 1)
                    { /* block id: 152 */
                        uint8_t *l_349 = &l_295[0][5];
                        int16_t *l_365 = &p_1454->g_255;
                        uint64_t *l_366 = &p_1454->g_367;
                        int32_t l_368 = (-3L);
                        int32_t l_369 = 0x7BF30F0EL;
                        uint8_t **l_371 = &l_349;
                        uint8_t ***l_370[2][4][8] = {{{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371}},{{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371},{&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371,&l_371}}};
                        uint64_t *l_372 = &p_1454->g_373;
                        uint32_t *l_398 = &l_171;
                        int i, j, k;
                        (*l_293) = (safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(l_333, 0x11L)) >= (((safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_1454->g_138, ((((++p_1454->g_340) | (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(0xA5L, 2)), ((+((((*l_372) = (safe_mul_func_uint16_t_u_u(p_69, ((p_69 , ((*l_349) |= (*p_70))) ^ ((((p_69 > (p_1454->g_221 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((*l_366) = (l_364 != l_365)), l_368)), (*l_293))), 1UL)), p_1454->g_259)), 3)) && p_69) && p_69) , l_369), p_1454->g_119)), p_1454->g_138)))) , l_370[0][1][5]) == (void*)0) && 9L))))) >= p_69) && l_374)) , 0x7B7D34FA7B23D429L)))) || l_375) || p_69))) || p_69), (-1L))) > p_1454->g_105), 3)) & p_1454->g_253) <= 0x2CL)), l_374));
                        (*l_293) = ((safe_add_func_int16_t_s_s((((void*)0 != &p_69) <= (((l_378 = (l_374 >= (*p_70))) || (((p_69 && p_1454->g_280) , ((void*)0 != &p_1454->g_29[0][0])) >= (1UL == p_1454->g_226))) , 18446744073709551612UL)), p_69)) | 2L);
                        p_1454->g_138 &= (safe_rshift_func_int8_t_s_u(((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_1454->g_399 = ((*l_398) &= ((4294967286UL < 4294967289UL) != (p_69 >= (((p_1454->g_49[3] > (safe_div_func_int8_t_s_s(0x5BL, (safe_lshift_func_uint16_t_u_u((0x24L | (~((safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((0x48L ^ (l_372 == l_397)) < l_333), 5)) , l_378) > p_69), 4294967288UL)) , p_1454->g_105))), p_69))))) == 0xC3L) != (*l_292)))))), p_69)), 0L)) >= 0x01DF8527255BE5C4L), p_1454->g_226)), (*p_70))) == l_374) | (*l_292)) >= p_1454->g_29[0][0]), 5));
                    }
                    ++l_411;
                    for (p_1454->g_399 = 0; (p_1454->g_399 <= 2); p_1454->g_399 += 1)
                    { /* block id: 168 */
                        int32_t **l_428 = &p_1454->g_169;
                        if (l_411)
                            goto lbl_300;
                        l_403[2] = p_69;
                        (*l_428) = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(l_407, 1UL)) || ((-1L) & p_1454->g_100)) <= ((void*)0 != &p_1454->g_259)), (safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(0x0843554DDED7C10AL, (safe_mod_func_uint64_t_u_u((&p_1454->g_49[3] == p_70), 4UL)))) , l_408), p_1454->g_105)))) <= 0UL), p_69)) , (void*)0);
                    }
                    if ((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((l_211[l_222] = &p_1454->g_23) != (((&p_1454->g_187 == (void*)0) >= ((((*p_70)--) | (&p_1454->g_102 != &p_1454->g_221)) || (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(p_69, ((safe_lshift_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((l_402 ^= (((p_1454->g_280++) , l_454) != (void*)0)) ^ (*p_70)) && p_1454->g_280), 8)), p_1454->g_340)), 0x8073B54D6EA847D2L)) > p_69) != p_1454->g_259), 2)) != (*p_70)))) , (*p_70)), p_1454->g_399)))) , l_298)) && p_69), l_401)), l_409)), p_1454->g_373)))
                    { /* block id: 177 */
                        int32_t *l_456 = (void*)0;
                        return l_456;
                    }
                    else
                    { /* block id: 179 */
                        uint32_t **l_473 = (void*)0;
                        uint32_t *l_474 = (void*)0;
                        int32_t l_475 = (-1L);
                        uint8_t *l_497 = &p_1454->g_340;
                        uint8_t *l_498 = (void*)0;
                        uint8_t *l_499 = &l_238;
                        l_410 = (!((*l_292) = (((safe_rshift_func_uint8_t_u_s((--p_1454->g_399), 4)) <= ((safe_div_func_int64_t_s_s(p_1454->g_29[0][0], p_69)) | p_1454->g_105)) ^ ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((l_467 | (p_1454->g_280 & (*p_70))) && (((!(safe_sub_func_uint16_t_u_u(((l_474 = (p_69 , (((l_403[2] | (safe_div_func_int64_t_s_s(0x4AF2AD5169D51CA2L, p_69))) == l_403[1]) , l_472))) == &p_1454->g_280), 1L))) & 0x0D084EB7L) ^ (-1L))), (*p_70))) < 0UL) | p_1454->g_105), l_475)) >= p_69))));
                        l_409 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_408 && ((l_480 == (void*)0) ^ ((safe_lshift_func_int16_t_s_s(p_1454->g_49[3], 4)) > ((*l_499) ^= ((*l_497) = (safe_lshift_func_uint8_t_u_s(((((*l_480)++) || (p_69 < (!(-1L)))) && (((0x7A60BC81L | (((((l_406 | (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_1454->g_29[1][3], p_69)), 4294967291UL)) >= 0UL) >= p_69), 0x6F36L)), p_1454->g_230[0])) == l_404), p_1454->g_100)) < p_1454->g_226) || l_400)) | p_69) >= (*p_70)) , p_1454->g_399) & 0x02D4L)) != p_69) & p_69)), 0))))))), l_400)), 3UL));
                    }
                }
                l_404 = ((*l_292) = (p_1454->g_399 ^ ((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(0xCF31L, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_409 = (((*l_519) |= (safe_div_func_int8_t_s_s(1L, ((l_406 = (((*l_293) = ((l_375 != (-1L)) ^ 0x33L)) == ((safe_lshift_func_int16_t_s_u((-10L), 3)) < ((p_70 != p_70) , 4L)))) , l_408)))) > p_69)), p_69)), p_69)))) & p_1454->g_518), 1UL)), 0L)) < p_1454->g_518)));
            }
            else
            { /* block id: 196 */
                int32_t *l_527 = &l_406;
                int32_t *l_528 = &l_220;
                for (p_1454->g_367 = 0; (p_1454->g_367 <= 2); p_1454->g_367 += 1)
                { /* block id: 199 */
                    int16_t l_523 = (-7L);
                    l_522 = l_520;
                    if (l_523)
                        break;
                }
                for (p_1454->g_138 = 2; (p_1454->g_138 >= 0); p_1454->g_138 -= 1)
                { /* block id: 205 */
                    int32_t **l_525 = &p_1454->g_169;
                    int32_t **l_526[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_526[i] = &l_294[2][1][3];
                    l_524 = &l_405;
                    l_528 = (l_527 = ((*l_525) = &p_1454->g_230[0]));
                }
            }
            l_529 = &p_1454->g_253;
        }
    }
    for (p_1454->g_367 = 0; (p_1454->g_367 <= 2); p_1454->g_367 += 1)
    { /* block id: 217 */
        int32_t **l_531 = &p_1454->g_169;
        uint8_t *l_532 = &l_295[0][5];
        uint8_t **l_541 = (void*)0;
        uint8_t **l_542 = &p_1454->g_147;
        int32_t *l_551[8] = {&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237};
        int32_t l_553[2][8] = {{0x5F5B52C4L,0x4E81A08CL,6L,0x4E81A08CL,0x5F5B52C4L,0x5F5B52C4L,0x4E81A08CL,6L},{0x5F5B52C4L,0x4E81A08CL,6L,0x4E81A08CL,0x5F5B52C4L,0x5F5B52C4L,0x4E81A08CL,6L}};
        uint64_t *l_554[6][6] = {{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555},{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555},{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555},{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555},{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555},{&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555,&p_1454->g_555}};
        int i, j;
        (*l_531) = l_530;
        l_553[1][7] = (((*l_532) = (+((*p_70) = ((void*)0 != l_472)))) , (((*p_70) <= p_1454->g_230[2]) | (safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((p_1454->g_119 = (safe_rshift_func_int16_t_s_s(((((*l_521) = (safe_add_func_uint16_t_u_u((p_1454->g_100 || (((*l_542) = &p_1454->g_49[3]) == ((p_1454->g_555 ^= (((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((p_1454->g_102 = ((l_551[0] != l_551[0]) >= (9L | p_1454->g_253))) > p_1454->g_119), p_1454->g_221)) && p_69), (*p_70))) , p_69), p_1454->g_552)), l_553[1][7])) , p_69) || 0UL) < p_69) <= p_1454->g_373)) , p_1454->g_556))), 0x1AA9L))) , l_551[0]) != p_1454->g_169), 9))), p_1454->g_280)) ^ p_69), 0xE68FL))));
        for (p_1454->g_326 = 2; (p_1454->g_326 >= 0); p_1454->g_326 -= 1)
        { /* block id: 229 */
            (*l_531) = &p_1454->g_29[1][6];
            if (p_69)
                continue;
            if ((**l_531))
                continue;
            (*l_531) = &p_1454->g_138;
        }
    }
    return &p_1454->g_138;
}


/* ------------------------------------------ */
/* 
 * reads : p_1454->g_102 p_1454->g_119 p_1454->g_29 p_1454->g_105 p_1454->g_133 p_1454->g_49 p_1454->g_23 p_1454->g_138 p_1454->g_137 p_1454->g_100
 * writes: p_1454->g_102 p_1454->g_119 p_1454->g_105 p_1454->g_133 p_1454->g_137 p_1454->g_138 p_1454->g_147 p_1454->g_169
 */
int8_t  func_80(uint8_t * p_81, uint8_t * p_82, struct S4 * p_1454)
{ /* block id: 25 */
    int32_t *l_111 = (void*)0;
    int32_t l_128 = (-1L);
    uint32_t l_131 = 0UL;
    int8_t *l_163 = (void*)0;
    uint8_t l_170 = 0x24L;
    for (p_1454->g_102 = (-7); (p_1454->g_102 >= 9); ++p_1454->g_102)
    { /* block id: 28 */
        int32_t *l_109[5];
        int32_t **l_110[10] = {&l_109[0],(void*)0,&l_109[0],&l_109[0],(void*)0,&l_109[0],&l_109[0],(void*)0,&l_109[0],&l_109[0]};
        uint16_t *l_118 = &p_1454->g_119;
        int8_t *l_129 = (void*)0;
        int8_t *l_130[10][7] = {{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105},{&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105,&p_1454->g_102,&p_1454->g_102,&p_1454->g_105}};
        uint16_t *l_132[10][2][2] = {{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}},{{&p_1454->g_23,&p_1454->g_23},{&p_1454->g_23,&p_1454->g_23}}};
        int32_t *l_146 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_109[i] = (void*)0;
        l_111 = l_109[0];
        if ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((--(*l_118)), 0x9137L)), 0x7B18L)), ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(l_128, 3)), 14)), (l_131 = (p_1454->g_105 ^= p_1454->g_29[0][1])))) ^ (p_1454->g_133++)))))
        { /* block id: 34 */
            int32_t *l_136 = &p_1454->g_29[1][6];
            p_1454->g_137 = l_136;
        }
        else
        { /* block id: 36 */
            return l_128;
        }
        p_1454->g_138 ^= ((p_1454->g_49[3] < (((p_1454->g_133 == (safe_unary_minus_func_uint16_t_u(l_131))) | (safe_sub_func_uint16_t_u_u(p_1454->g_23, (l_130[3][4] == (void*)0)))) != (safe_mul_func_uint32_t_u_u(p_1454->g_133, ((safe_add_func_uint16_t_u_u((p_1454->g_23 || (p_1454->g_29[1][1] , p_1454->g_29[0][0])), p_1454->g_29[0][3])) >= 0UL))))) != p_1454->g_102);
        l_128 = ((*p_1454->g_137) < (p_81 == (p_1454->g_147 = func_84(l_131, (l_146 = (void*)0), p_1454))));
    }
    for (p_1454->g_105 = 0; (p_1454->g_105 != (-6)); p_1454->g_105--)
    { /* block id: 46 */
        int32_t l_152 = 0x59136648L;
        int8_t *l_153 = &p_1454->g_102;
        uint8_t l_158[1];
        int32_t *l_164[10][7] = {{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152},{(void*)0,&l_152,(void*)0,&l_152,(void*)0,(void*)0,&l_152}};
        int32_t l_165 = 1L;
        int8_t **l_167[9][6][3] = {{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}},{{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163},{&l_163,&l_163,&l_163}}};
        int8_t ***l_166 = &l_167[2][2][1];
        int32_t **l_168[6];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_158[i] = 0x30L;
        for (i = 0; i < 6; i++)
            l_168[i] = (void*)0;
        (*l_166) = ((l_165 = (safe_lshift_func_uint8_t_u_u((*p_81), ((p_1454->g_133 ^ ((*l_153) = l_152)) && ((safe_lshift_func_int16_t_s_s(p_1454->g_138, 10)) != (((((*l_153) = (safe_div_func_int8_t_s_s(l_158[0], l_152))) && (safe_mul_func_int8_t_s_s(p_1454->g_49[3], ((((*l_153) = (safe_rshift_func_int8_t_s_s((l_163 == &p_1454->g_105), p_1454->g_23))) > p_1454->g_138) || l_152)))) < p_1454->g_49[6]) <= p_1454->g_100)))))) , (void*)0);
        p_1454->g_169 = (l_111 = (p_1454->g_137 = &l_128));
    }
    p_1454->g_137 = &l_128;
    return l_170;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_84(int8_t  p_85, int32_t * p_86, struct S4 * p_1454)
{ /* block id: 23 */
    uint8_t *l_106 = (void*)0;
    return l_106;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S4 c_1455;
    struct S4* p_1454 = &c_1455;
    struct S4 c_1456 = {
        {{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL},{0xE6L,0xE6L,0xEEL}}, // p_1454->g_10
        0xAFBFL, // p_1454->g_23
        4294967295UL, // p_1454->g_24
        {{9L,9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L,9L}}, // p_1454->g_29
        {252UL,252UL,252UL,252UL,252UL,252UL,252UL,252UL}, // p_1454->g_49
        {{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]},{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]},{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]},{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]},{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]},{&p_1454->g_49[3],&p_1454->g_49[4],&p_1454->g_49[3],&p_1454->g_49[4]}}, // p_1454->g_48
        (-1L), // p_1454->g_100
        (-2L), // p_1454->g_102
        (-3L), // p_1454->g_105
        0UL, // p_1454->g_119
        65529UL, // p_1454->g_133
        2L, // p_1454->g_138
        &p_1454->g_138, // p_1454->g_137
        (void*)0, // p_1454->g_147
        &p_1454->g_138, // p_1454->g_169
        8L, // p_1454->g_189
        &p_1454->g_189, // p_1454->g_188
        &p_1454->g_188, // p_1454->g_187
        65526UL, // p_1454->g_195
        0x41L, // p_1454->g_221
        4L, // p_1454->g_224
        0x6BL, // p_1454->g_226
        {0x2784E1F4L,0x2784E1F4L,0x2784E1F4L}, // p_1454->g_230
        0x285B6FE5L, // p_1454->g_253
        0x6185L, // p_1454->g_255
        0x1B3761B6L, // p_1454->g_259
        1UL, // p_1454->g_280
        0x50B3598A36E0A9AFL, // p_1454->g_326
        251UL, // p_1454->g_340
        0x4AE6775477B6F312L, // p_1454->g_367
        0x666F780B8A79502DL, // p_1454->g_373
        1UL, // p_1454->g_399
        0xB7B65D10L, // p_1454->g_518
        0x1BA5L, // p_1454->g_552
        0x958281AD77F57F17L, // p_1454->g_555
        &p_1454->g_340, // p_1454->g_556
        0x6823DB29L, // p_1454->g_569
        {&p_1454->g_518,&p_1454->g_518,&p_1454->g_518,&p_1454->g_518,&p_1454->g_518}, // p_1454->g_581
        {0UL,0UL,0UL,0UL,0UL}, // p_1454->g_607
        &p_1454->g_556, // p_1454->g_747
        &p_1454->g_747, // p_1454->g_746
        (void*)0, // p_1454->g_766
        (void*)0, // p_1454->g_797
        &p_1454->g_797, // p_1454->g_796
        (-1L), // p_1454->g_799
        0x7D329DE7L, // p_1454->g_803
        0x1088L, // p_1454->g_807
        (void*)0, // p_1454->g_844
        {0xFE01L}, // p_1454->g_863
        {{0x985C94CAD0DB020AL,0x2721B31BF34D8B16L,4294967295UL,1UL,247UL,0L,65529UL,0xF19AL,0L}}, // p_1454->g_887
        0L, // p_1454->g_890
        &p_1454->g_887, // p_1454->g_900
        {{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0},{&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0,&p_1454->g_887.f0}}, // p_1454->g_914
        &p_1454->g_169, // p_1454->g_917
        (-1L), // p_1454->g_947
        (void*)0, // p_1454->g_956
        &p_1454->g_137, // p_1454->g_957
        &p_1454->g_169, // p_1454->g_958
        {0xA6D1A8CBDAF799D9L,0x29BA95A224B70C92L,0xAD71084AL,0UL,0xE3L,0x21B3A610L,0x17CAL,65535UL,-8L}, // p_1454->g_959
        {0x81AF7230C6C11252L,0x577721D810ABFA14L,0x75B8C545L,0x6CL,0xFEL,0x5FCED262L,0UL,8UL,1L}, // p_1454->g_960
        {{18446744073709551609UL,0x18F91CE2BCCC8125L,0xADBEA6F6L,2UL,4UL,-1L,0x98E6L,7UL,0L},-1L,0x5E56A7B0L,1L,0x14CD65DEL,-1L,-7L}, // p_1454->g_967
        &p_1454->g_960, // p_1454->g_996
        &p_1454->g_996, // p_1454->g_995
        &p_1454->g_996, // p_1454->g_1000
        {1UL}, // p_1454->g_1009
        0x2EL, // p_1454->g_1031
        {0x7AE32958EE48D57CL,0x2BFDDA1E6258A154L,0x05E985FFL,246UL,247UL,0x6D5B49B0L,0xE851L,0x70B6L,0L}, // p_1454->g_1049
        {1UL,0x6244F3C7360A1E2FL,4294967288UL,0x61L,1UL,0x17615D3EL,0xB335L,0x6943L,6L}, // p_1454->g_1051
        &p_1454->g_1051, // p_1454->g_1050
        &p_1454->g_169, // p_1454->g_1054
        {0UL,0UL,0UL,0UL}, // p_1454->g_1082
        (void*)0, // p_1454->g_1099
        {&p_1454->g_1099}, // p_1454->g_1098
        {0x8E35831E4C3C00D0L,0x5D48C42FFF1172F0L,0x0A528819L,6UL,251UL,0x79137444L,65526UL,4UL,0x24782ADC4442BBBEL}, // p_1454->g_1106
        {0x98A5AFA67087E020L,1L,0x03B42067L,0x1AL,0x19L,0x3E4FA708L,0x9918L,0xD7D3L,0x69C58B44A7C4C8EDL}, // p_1454->g_1120
        {{{0x0CD3EC28434AE6BBL,0x7DCCF10E82908CF1L,0x6FA1C0B7L,253UL,0xBDL,0x6E10B04CL,0xB508L,65526UL,1L},0x4DA564A3L,0L,0x751451D8L,0x8649342BL,-5L,0x2A72FB03L},{{1UL,0x01A37E5AE01F17BCL,4294967295UL,255UL,1UL,-6L,0xB92AL,0UL,1L},-7L,0L,0L,0xA637F330L,-1L,0L},{{0x0CD3EC28434AE6BBL,0x7DCCF10E82908CF1L,0x6FA1C0B7L,253UL,0xBDL,0x6E10B04CL,0xB508L,65526UL,1L},0x4DA564A3L,0L,0x751451D8L,0x8649342BL,-5L,0x2A72FB03L},{{0x0CD3EC28434AE6BBL,0x7DCCF10E82908CF1L,0x6FA1C0B7L,253UL,0xBDL,0x6E10B04CL,0xB508L,65526UL,1L},0x4DA564A3L,0L,0x751451D8L,0x8649342BL,-5L,0x2A72FB03L},{{1UL,0x01A37E5AE01F17BCL,4294967295UL,255UL,1UL,-6L,0xB92AL,0UL,1L},-7L,0L,0L,0xA637F330L,-1L,0L},{{0x0CD3EC28434AE6BBL,0x7DCCF10E82908CF1L,0x6FA1C0B7L,253UL,0xBDL,0x6E10B04CL,0xB508L,65526UL,1L},0x4DA564A3L,0L,0x751451D8L,0x8649342BL,-5L,0x2A72FB03L},{{0x0CD3EC28434AE6BBL,0x7DCCF10E82908CF1L,0x6FA1C0B7L,253UL,0xBDL,0x6E10B04CL,0xB508L,65526UL,1L},0x4DA564A3L,0L,0x751451D8L,0x8649342BL,-5L,0x2A72FB03L},{{1UL,0x01A37E5AE01F17BCL,4294967295UL,255UL,1UL,-6L,0xB92AL,0UL,1L},-7L,0L,0L,0xA637F330L,-1L,0L}}, // p_1454->g_1123
        &p_1454->g_169, // p_1454->g_1162
        {{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}},{{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)},{0x64F74FF5L,0x0E7A0475L,0x01D8610BL,(-1L)}}}, // p_1454->g_1171
        &p_1454->g_1171[7][0][0], // p_1454->g_1170
        {{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}},{{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170},{&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,(void*)0,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170,&p_1454->g_1170}}}, // p_1454->g_1169
        &p_1454->g_1169[0][0][2], // p_1454->g_1168
        0UL, // p_1454->g_1176
        {{1UL,0x0DF8B8AFCB741C5FL,0UL,0x05L,1UL,0x7ADB89FAL,0xCF09L,0UL,-2L},0x57576191L,0x45E07A2BL,0L,9UL,0x523133B6L,0x0439A1B4L}, // p_1454->g_1186
        {{8UL,-1L,0xC3C61030L,251UL,0x16L,1L,65529UL,1UL,1L},0x1941264EL,8L,-7L,0UL,0x5B47EADBL,2L}, // p_1454->g_1192
        {{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}},{{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373},{&p_1454->g_367,&p_1454->g_960.f0,&p_1454->g_367,&p_1454->g_1049.f0,&p_1454->g_373}}}, // p_1454->g_1206
        &p_1454->g_1206[2][4][4], // p_1454->g_1205
        {{(void*)0,&p_1454->g_259,&p_1454->g_259,(void*)0,&p_1454->g_967.f1,&p_1454->g_967.f5,&p_1454->g_259,&p_1454->g_967.f5,&p_1454->g_967.f1,&p_1454->g_259},{(void*)0,&p_1454->g_259,&p_1454->g_259,(void*)0,&p_1454->g_967.f1,&p_1454->g_967.f5,&p_1454->g_259,&p_1454->g_967.f5,&p_1454->g_967.f1,&p_1454->g_259},{(void*)0,&p_1454->g_259,&p_1454->g_259,(void*)0,&p_1454->g_967.f1,&p_1454->g_967.f5,&p_1454->g_259,&p_1454->g_967.f5,&p_1454->g_967.f1,&p_1454->g_259},{(void*)0,&p_1454->g_259,&p_1454->g_259,(void*)0,&p_1454->g_967.f1,&p_1454->g_967.f5,&p_1454->g_259,&p_1454->g_967.f5,&p_1454->g_967.f1,&p_1454->g_259},{(void*)0,&p_1454->g_259,&p_1454->g_259,(void*)0,&p_1454->g_967.f1,&p_1454->g_967.f5,&p_1454->g_259,&p_1454->g_967.f5,&p_1454->g_967.f1,&p_1454->g_259}}, // p_1454->g_1257
        {&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280,&p_1454->g_280}, // p_1454->g_1268
        &p_1454->g_1268[4], // p_1454->g_1267
        {{{0x2A9C30E0DBA1191AL,1L,4294967295UL,0xA2L,0x2CL,0x545B21FBL,1UL,0x5E10L,0L},4L,0x3C39F41EL,0x0D9E7060L,1UL,7L,3L},{{18446744073709551613UL,5L,1UL,0x8EL,0UL,0x280B7235L,0x1FDCL,0x8C21L,0x39A028C74C395ED6L},1L,0x32CA7012L,0x7AC8584AL,0UL,0x0581684AL,0x249DB675L},{{7UL,0x3CA3734058A75B55L,4294967295UL,0x66L,1UL,0x2FF2060AL,1UL,65535UL,0L},-8L,0x7EA2828EL,0x72D17EC7L,4294967295UL,0x51E0174DL,1L},{{18446744073709551613UL,5L,1UL,0x8EL,0UL,0x280B7235L,0x1FDCL,0x8C21L,0x39A028C74C395ED6L},1L,0x32CA7012L,0x7AC8584AL,0UL,0x0581684AL,0x249DB675L},{{0x2A9C30E0DBA1191AL,1L,4294967295UL,0xA2L,0x2CL,0x545B21FBL,1UL,0x5E10L,0L},4L,0x3C39F41EL,0x0D9E7060L,1UL,7L,3L},{{0x2A9C30E0DBA1191AL,1L,4294967295UL,0xA2L,0x2CL,0x545B21FBL,1UL,0x5E10L,0L},4L,0x3C39F41EL,0x0D9E7060L,1UL,7L,3L},{{18446744073709551613UL,5L,1UL,0x8EL,0UL,0x280B7235L,0x1FDCL,0x8C21L,0x39A028C74C395ED6L},1L,0x32CA7012L,0x7AC8584AL,0UL,0x0581684AL,0x249DB675L},{{7UL,0x3CA3734058A75B55L,4294967295UL,0x66L,1UL,0x2FF2060AL,1UL,65535UL,0L},-8L,0x7EA2828EL,0x72D17EC7L,4294967295UL,0x51E0174DL,1L},{{18446744073709551613UL,5L,1UL,0x8EL,0UL,0x280B7235L,0x1FDCL,0x8C21L,0x39A028C74C395ED6L},1L,0x32CA7012L,0x7AC8584AL,0UL,0x0581684AL,0x249DB675L},{{0x2A9C30E0DBA1191AL,1L,4294967295UL,0xA2L,0x2CL,0x545B21FBL,1UL,0x5E10L,0L},4L,0x3C39F41EL,0x0D9E7060L,1UL,7L,3L}}, // p_1454->g_1297
        &p_1454->g_1297[9], // p_1454->g_1296
        1UL, // p_1454->g_1302
        {{0x6F52CC3F3AA480C4L,0x119A0F15786C10BAL,0xA2F8EAC3L,0UL,0UL,0x02D1AA38L,65535UL,0UL,0x05DD6AE558A46AEFL},0x4B05B383L,1L,-1L,0xB3175455L,0x024389A9L,-1L}, // p_1454->g_1319
        0xDAB5FB95L, // p_1454->g_1320
        0x17L, // p_1454->g_1334
        {0x20CA8859BD2D138CL,0x3DAD158229BDF752L,0x222390D3L,0UL,255UL,6L,0x3017L,65535UL,0x6AA49BA1CBD30CD0L}, // p_1454->g_1372
        {0xFC637ACD01BF2095L,0x5991726A0EE79178L,4294967295UL,0xFDL,0UL,0x098605E6L,0xD342L,0x062AL,1L}, // p_1454->g_1373
        {{0xF16FC667759C32B8L,0L,4294967288UL,0xE5L,0x4BL,0x39091203L,0x39A4L,0xDF26L,0x01B04E3BC88A8352L},1L,-9L,0x23189CA7L,0xA88AB30FL,0L,0L}, // p_1454->g_1385
        {{{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137}},{{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137},{&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137,&p_1454->g_137}}}, // p_1454->g_1414
        {&p_1454->g_1414[1][2][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][2][1],&p_1454->g_1414[1][2][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][1][1],&p_1454->g_1414[1][2][1]}, // p_1454->g_1413
        {{0UL,9L,4294967295UL,0x7FL,0xE7L,0L,0xA6D1L,65535UL,0L}}, // p_1454->g_1451
    };
    c_1455 = c_1456;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1454);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1454->g_10[i][j], "p_1454->g_10[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1454->g_23, "p_1454->g_23", print_hash_value);
    transparent_crc(p_1454->g_24, "p_1454->g_24", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1454->g_29[i][j], "p_1454->g_29[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1454->g_49[i], "p_1454->g_49[i]", print_hash_value);

    }
    transparent_crc(p_1454->g_100, "p_1454->g_100", print_hash_value);
    transparent_crc(p_1454->g_102, "p_1454->g_102", print_hash_value);
    transparent_crc(p_1454->g_105, "p_1454->g_105", print_hash_value);
    transparent_crc(p_1454->g_119, "p_1454->g_119", print_hash_value);
    transparent_crc(p_1454->g_133, "p_1454->g_133", print_hash_value);
    transparent_crc(p_1454->g_138, "p_1454->g_138", print_hash_value);
    transparent_crc(p_1454->g_189, "p_1454->g_189", print_hash_value);
    transparent_crc(p_1454->g_195, "p_1454->g_195", print_hash_value);
    transparent_crc(p_1454->g_221, "p_1454->g_221", print_hash_value);
    transparent_crc(p_1454->g_224, "p_1454->g_224", print_hash_value);
    transparent_crc(p_1454->g_226, "p_1454->g_226", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1454->g_230[i], "p_1454->g_230[i]", print_hash_value);

    }
    transparent_crc(p_1454->g_253, "p_1454->g_253", print_hash_value);
    transparent_crc(p_1454->g_255, "p_1454->g_255", print_hash_value);
    transparent_crc(p_1454->g_259, "p_1454->g_259", print_hash_value);
    transparent_crc(p_1454->g_280, "p_1454->g_280", print_hash_value);
    transparent_crc(p_1454->g_326, "p_1454->g_326", print_hash_value);
    transparent_crc(p_1454->g_340, "p_1454->g_340", print_hash_value);
    transparent_crc(p_1454->g_367, "p_1454->g_367", print_hash_value);
    transparent_crc(p_1454->g_373, "p_1454->g_373", print_hash_value);
    transparent_crc(p_1454->g_399, "p_1454->g_399", print_hash_value);
    transparent_crc(p_1454->g_518, "p_1454->g_518", print_hash_value);
    transparent_crc(p_1454->g_552, "p_1454->g_552", print_hash_value);
    transparent_crc(p_1454->g_555, "p_1454->g_555", print_hash_value);
    transparent_crc(p_1454->g_569, "p_1454->g_569", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1454->g_607[i], "p_1454->g_607[i]", print_hash_value);

    }
    transparent_crc(p_1454->g_799, "p_1454->g_799", print_hash_value);
    transparent_crc(p_1454->g_803, "p_1454->g_803", print_hash_value);
    transparent_crc(p_1454->g_807, "p_1454->g_807", print_hash_value);
    transparent_crc(p_1454->g_863.f0, "p_1454->g_863.f0", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f0, "p_1454->g_887.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f1, "p_1454->g_887.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f2, "p_1454->g_887.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f3, "p_1454->g_887.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f4, "p_1454->g_887.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f5, "p_1454->g_887.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f6, "p_1454->g_887.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f7, "p_1454->g_887.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_887.f0.f8, "p_1454->g_887.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_890, "p_1454->g_890", print_hash_value);
    transparent_crc(p_1454->g_947, "p_1454->g_947", print_hash_value);
    transparent_crc(p_1454->g_959.f0, "p_1454->g_959.f0", print_hash_value);
    transparent_crc(p_1454->g_959.f1, "p_1454->g_959.f1", print_hash_value);
    transparent_crc(p_1454->g_959.f2, "p_1454->g_959.f2", print_hash_value);
    transparent_crc(p_1454->g_959.f3, "p_1454->g_959.f3", print_hash_value);
    transparent_crc(p_1454->g_959.f4, "p_1454->g_959.f4", print_hash_value);
    transparent_crc(p_1454->g_959.f5, "p_1454->g_959.f5", print_hash_value);
    transparent_crc(p_1454->g_959.f6, "p_1454->g_959.f6", print_hash_value);
    transparent_crc(p_1454->g_959.f7, "p_1454->g_959.f7", print_hash_value);
    transparent_crc(p_1454->g_959.f8, "p_1454->g_959.f8", print_hash_value);
    transparent_crc(p_1454->g_960.f0, "p_1454->g_960.f0", print_hash_value);
    transparent_crc(p_1454->g_960.f1, "p_1454->g_960.f1", print_hash_value);
    transparent_crc(p_1454->g_960.f2, "p_1454->g_960.f2", print_hash_value);
    transparent_crc(p_1454->g_960.f3, "p_1454->g_960.f3", print_hash_value);
    transparent_crc(p_1454->g_960.f4, "p_1454->g_960.f4", print_hash_value);
    transparent_crc(p_1454->g_960.f5, "p_1454->g_960.f5", print_hash_value);
    transparent_crc(p_1454->g_960.f6, "p_1454->g_960.f6", print_hash_value);
    transparent_crc(p_1454->g_960.f7, "p_1454->g_960.f7", print_hash_value);
    transparent_crc(p_1454->g_960.f8, "p_1454->g_960.f8", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f0, "p_1454->g_967.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f1, "p_1454->g_967.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f2, "p_1454->g_967.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f3, "p_1454->g_967.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f4, "p_1454->g_967.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f5, "p_1454->g_967.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f6, "p_1454->g_967.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f7, "p_1454->g_967.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_967.f0.f8, "p_1454->g_967.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_967.f1, "p_1454->g_967.f1", print_hash_value);
    transparent_crc(p_1454->g_967.f2, "p_1454->g_967.f2", print_hash_value);
    transparent_crc(p_1454->g_967.f3, "p_1454->g_967.f3", print_hash_value);
    transparent_crc(p_1454->g_967.f4, "p_1454->g_967.f4", print_hash_value);
    transparent_crc(p_1454->g_967.f5, "p_1454->g_967.f5", print_hash_value);
    transparent_crc(p_1454->g_967.f6, "p_1454->g_967.f6", print_hash_value);
    transparent_crc(p_1454->g_1009.f0, "p_1454->g_1009.f0", print_hash_value);
    transparent_crc(p_1454->g_1031, "p_1454->g_1031", print_hash_value);
    transparent_crc(p_1454->g_1049.f0, "p_1454->g_1049.f0", print_hash_value);
    transparent_crc(p_1454->g_1049.f1, "p_1454->g_1049.f1", print_hash_value);
    transparent_crc(p_1454->g_1049.f2, "p_1454->g_1049.f2", print_hash_value);
    transparent_crc(p_1454->g_1049.f3, "p_1454->g_1049.f3", print_hash_value);
    transparent_crc(p_1454->g_1049.f4, "p_1454->g_1049.f4", print_hash_value);
    transparent_crc(p_1454->g_1049.f5, "p_1454->g_1049.f5", print_hash_value);
    transparent_crc(p_1454->g_1049.f6, "p_1454->g_1049.f6", print_hash_value);
    transparent_crc(p_1454->g_1049.f7, "p_1454->g_1049.f7", print_hash_value);
    transparent_crc(p_1454->g_1049.f8, "p_1454->g_1049.f8", print_hash_value);
    transparent_crc(p_1454->g_1051.f0, "p_1454->g_1051.f0", print_hash_value);
    transparent_crc(p_1454->g_1051.f1, "p_1454->g_1051.f1", print_hash_value);
    transparent_crc(p_1454->g_1051.f2, "p_1454->g_1051.f2", print_hash_value);
    transparent_crc(p_1454->g_1051.f3, "p_1454->g_1051.f3", print_hash_value);
    transparent_crc(p_1454->g_1051.f4, "p_1454->g_1051.f4", print_hash_value);
    transparent_crc(p_1454->g_1051.f5, "p_1454->g_1051.f5", print_hash_value);
    transparent_crc(p_1454->g_1051.f6, "p_1454->g_1051.f6", print_hash_value);
    transparent_crc(p_1454->g_1051.f7, "p_1454->g_1051.f7", print_hash_value);
    transparent_crc(p_1454->g_1051.f8, "p_1454->g_1051.f8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1454->g_1082[i], "p_1454->g_1082[i]", print_hash_value);

    }
    transparent_crc(p_1454->g_1106.f0, "p_1454->g_1106.f0", print_hash_value);
    transparent_crc(p_1454->g_1106.f1, "p_1454->g_1106.f1", print_hash_value);
    transparent_crc(p_1454->g_1106.f2, "p_1454->g_1106.f2", print_hash_value);
    transparent_crc(p_1454->g_1106.f3, "p_1454->g_1106.f3", print_hash_value);
    transparent_crc(p_1454->g_1106.f4, "p_1454->g_1106.f4", print_hash_value);
    transparent_crc(p_1454->g_1106.f5, "p_1454->g_1106.f5", print_hash_value);
    transparent_crc(p_1454->g_1106.f6, "p_1454->g_1106.f6", print_hash_value);
    transparent_crc(p_1454->g_1106.f7, "p_1454->g_1106.f7", print_hash_value);
    transparent_crc(p_1454->g_1106.f8, "p_1454->g_1106.f8", print_hash_value);
    transparent_crc(p_1454->g_1120.f0, "p_1454->g_1120.f0", print_hash_value);
    transparent_crc(p_1454->g_1120.f1, "p_1454->g_1120.f1", print_hash_value);
    transparent_crc(p_1454->g_1120.f2, "p_1454->g_1120.f2", print_hash_value);
    transparent_crc(p_1454->g_1120.f3, "p_1454->g_1120.f3", print_hash_value);
    transparent_crc(p_1454->g_1120.f4, "p_1454->g_1120.f4", print_hash_value);
    transparent_crc(p_1454->g_1120.f5, "p_1454->g_1120.f5", print_hash_value);
    transparent_crc(p_1454->g_1120.f6, "p_1454->g_1120.f6", print_hash_value);
    transparent_crc(p_1454->g_1120.f7, "p_1454->g_1120.f7", print_hash_value);
    transparent_crc(p_1454->g_1120.f8, "p_1454->g_1120.f8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1454->g_1123[i].f0.f0, "p_1454->g_1123[i].f0.f0", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f1, "p_1454->g_1123[i].f0.f1", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f2, "p_1454->g_1123[i].f0.f2", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f3, "p_1454->g_1123[i].f0.f3", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f4, "p_1454->g_1123[i].f0.f4", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f5, "p_1454->g_1123[i].f0.f5", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f6, "p_1454->g_1123[i].f0.f6", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f7, "p_1454->g_1123[i].f0.f7", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f0.f8, "p_1454->g_1123[i].f0.f8", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f1, "p_1454->g_1123[i].f1", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f2, "p_1454->g_1123[i].f2", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f3, "p_1454->g_1123[i].f3", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f4, "p_1454->g_1123[i].f4", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f5, "p_1454->g_1123[i].f5", print_hash_value);
        transparent_crc(p_1454->g_1123[i].f6, "p_1454->g_1123[i].f6", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1454->g_1171[i][j][k], "p_1454->g_1171[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1454->g_1176, "p_1454->g_1176", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f0, "p_1454->g_1186.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f1, "p_1454->g_1186.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f2, "p_1454->g_1186.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f3, "p_1454->g_1186.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f4, "p_1454->g_1186.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f5, "p_1454->g_1186.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f6, "p_1454->g_1186.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f7, "p_1454->g_1186.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_1186.f0.f8, "p_1454->g_1186.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_1186.f1, "p_1454->g_1186.f1", print_hash_value);
    transparent_crc(p_1454->g_1186.f2, "p_1454->g_1186.f2", print_hash_value);
    transparent_crc(p_1454->g_1186.f3, "p_1454->g_1186.f3", print_hash_value);
    transparent_crc(p_1454->g_1186.f4, "p_1454->g_1186.f4", print_hash_value);
    transparent_crc(p_1454->g_1186.f5, "p_1454->g_1186.f5", print_hash_value);
    transparent_crc(p_1454->g_1186.f6, "p_1454->g_1186.f6", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f0, "p_1454->g_1192.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f1, "p_1454->g_1192.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f2, "p_1454->g_1192.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f3, "p_1454->g_1192.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f4, "p_1454->g_1192.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f5, "p_1454->g_1192.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f6, "p_1454->g_1192.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f7, "p_1454->g_1192.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_1192.f0.f8, "p_1454->g_1192.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_1192.f1, "p_1454->g_1192.f1", print_hash_value);
    transparent_crc(p_1454->g_1192.f2, "p_1454->g_1192.f2", print_hash_value);
    transparent_crc(p_1454->g_1192.f3, "p_1454->g_1192.f3", print_hash_value);
    transparent_crc(p_1454->g_1192.f4, "p_1454->g_1192.f4", print_hash_value);
    transparent_crc(p_1454->g_1192.f5, "p_1454->g_1192.f5", print_hash_value);
    transparent_crc(p_1454->g_1192.f6, "p_1454->g_1192.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1454->g_1297[i].f0.f0, "p_1454->g_1297[i].f0.f0", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f1, "p_1454->g_1297[i].f0.f1", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f2, "p_1454->g_1297[i].f0.f2", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f3, "p_1454->g_1297[i].f0.f3", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f4, "p_1454->g_1297[i].f0.f4", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f5, "p_1454->g_1297[i].f0.f5", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f6, "p_1454->g_1297[i].f0.f6", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f7, "p_1454->g_1297[i].f0.f7", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f0.f8, "p_1454->g_1297[i].f0.f8", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f1, "p_1454->g_1297[i].f1", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f2, "p_1454->g_1297[i].f2", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f3, "p_1454->g_1297[i].f3", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f4, "p_1454->g_1297[i].f4", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f5, "p_1454->g_1297[i].f5", print_hash_value);
        transparent_crc(p_1454->g_1297[i].f6, "p_1454->g_1297[i].f6", print_hash_value);

    }
    transparent_crc(p_1454->g_1302, "p_1454->g_1302", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f0, "p_1454->g_1319.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f1, "p_1454->g_1319.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f2, "p_1454->g_1319.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f3, "p_1454->g_1319.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f4, "p_1454->g_1319.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f5, "p_1454->g_1319.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f6, "p_1454->g_1319.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f7, "p_1454->g_1319.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_1319.f0.f8, "p_1454->g_1319.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_1319.f1, "p_1454->g_1319.f1", print_hash_value);
    transparent_crc(p_1454->g_1319.f2, "p_1454->g_1319.f2", print_hash_value);
    transparent_crc(p_1454->g_1319.f3, "p_1454->g_1319.f3", print_hash_value);
    transparent_crc(p_1454->g_1319.f4, "p_1454->g_1319.f4", print_hash_value);
    transparent_crc(p_1454->g_1319.f5, "p_1454->g_1319.f5", print_hash_value);
    transparent_crc(p_1454->g_1319.f6, "p_1454->g_1319.f6", print_hash_value);
    transparent_crc(p_1454->g_1320, "p_1454->g_1320", print_hash_value);
    transparent_crc(p_1454->g_1334, "p_1454->g_1334", print_hash_value);
    transparent_crc(p_1454->g_1372.f0, "p_1454->g_1372.f0", print_hash_value);
    transparent_crc(p_1454->g_1372.f1, "p_1454->g_1372.f1", print_hash_value);
    transparent_crc(p_1454->g_1372.f2, "p_1454->g_1372.f2", print_hash_value);
    transparent_crc(p_1454->g_1372.f3, "p_1454->g_1372.f3", print_hash_value);
    transparent_crc(p_1454->g_1372.f4, "p_1454->g_1372.f4", print_hash_value);
    transparent_crc(p_1454->g_1372.f5, "p_1454->g_1372.f5", print_hash_value);
    transparent_crc(p_1454->g_1372.f6, "p_1454->g_1372.f6", print_hash_value);
    transparent_crc(p_1454->g_1372.f7, "p_1454->g_1372.f7", print_hash_value);
    transparent_crc(p_1454->g_1372.f8, "p_1454->g_1372.f8", print_hash_value);
    transparent_crc(p_1454->g_1373.f0, "p_1454->g_1373.f0", print_hash_value);
    transparent_crc(p_1454->g_1373.f1, "p_1454->g_1373.f1", print_hash_value);
    transparent_crc(p_1454->g_1373.f2, "p_1454->g_1373.f2", print_hash_value);
    transparent_crc(p_1454->g_1373.f3, "p_1454->g_1373.f3", print_hash_value);
    transparent_crc(p_1454->g_1373.f4, "p_1454->g_1373.f4", print_hash_value);
    transparent_crc(p_1454->g_1373.f5, "p_1454->g_1373.f5", print_hash_value);
    transparent_crc(p_1454->g_1373.f6, "p_1454->g_1373.f6", print_hash_value);
    transparent_crc(p_1454->g_1373.f7, "p_1454->g_1373.f7", print_hash_value);
    transparent_crc(p_1454->g_1373.f8, "p_1454->g_1373.f8", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f0, "p_1454->g_1385.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f1, "p_1454->g_1385.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f2, "p_1454->g_1385.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f3, "p_1454->g_1385.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f4, "p_1454->g_1385.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f5, "p_1454->g_1385.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f6, "p_1454->g_1385.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f7, "p_1454->g_1385.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_1385.f0.f8, "p_1454->g_1385.f0.f8", print_hash_value);
    transparent_crc(p_1454->g_1385.f1, "p_1454->g_1385.f1", print_hash_value);
    transparent_crc(p_1454->g_1385.f2, "p_1454->g_1385.f2", print_hash_value);
    transparent_crc(p_1454->g_1385.f3, "p_1454->g_1385.f3", print_hash_value);
    transparent_crc(p_1454->g_1385.f4, "p_1454->g_1385.f4", print_hash_value);
    transparent_crc(p_1454->g_1385.f5, "p_1454->g_1385.f5", print_hash_value);
    transparent_crc(p_1454->g_1385.f6, "p_1454->g_1385.f6", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f0, "p_1454->g_1451.f0.f0", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f1, "p_1454->g_1451.f0.f1", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f2, "p_1454->g_1451.f0.f2", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f3, "p_1454->g_1451.f0.f3", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f4, "p_1454->g_1451.f0.f4", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f5, "p_1454->g_1451.f0.f5", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f6, "p_1454->g_1451.f0.f6", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f7, "p_1454->g_1451.f0.f7", print_hash_value);
    transparent_crc(p_1454->g_1451.f0.f8, "p_1454->g_1451.f0.f8", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
