// -g 93,3,7 -l 31,1,1
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


// Seed: 49841092

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   uint16_t  f2;
   int32_t  f3;
};

struct S1 {
    volatile int32_t g_3;
    int32_t g_4;
    int32_t g_5;
    int32_t *g_17;
    int32_t * volatile * volatile g_16;
    int32_t g_36;
    int32_t g_37[1];
    int32_t g_59;
    int32_t g_60;
    int32_t g_63;
    int32_t *g_62;
    int8_t g_79;
    struct S0 g_80;
    int32_t **g_83;
    int32_t ***g_82[9][2][5];
    uint32_t g_89;
    int8_t g_98[10][3];
    int16_t g_116;
    int64_t g_153;
    uint32_t g_164;
    uint32_t g_166;
    uint8_t g_208;
    uint64_t *g_211;
    int32_t g_216;
    uint32_t * volatile *g_337;
    uint32_t * volatile **g_336;
    int8_t g_380;
    uint32_t g_495;
    int64_t g_528;
    int64_t *g_527[4];
    volatile uint8_t ***g_531;
    uint64_t g_550[7][10];
    uint64_t g_552;
    uint64_t g_635;
    volatile uint64_t g_668;
    volatile uint64_t * volatile g_667;
    volatile uint64_t g_670;
    volatile uint64_t *g_669;
    volatile uint64_t * volatile *g_666[10][1][4];
    uint64_t g_700;
    struct S0 g_805;
    uint64_t *g_815;
    int16_t g_864;
    volatile uint16_t *g_913;
    uint32_t g_934;
    int8_t *g_1041;
    int8_t **g_1040;
    uint16_t **g_1091;
    uint16_t *** volatile g_1090;
    int32_t * volatile * volatile g_1138;
    int32_t g_1169[2][3][5];
    uint8_t g_1229;
    volatile int32_t *g_1237;
    volatile int32_t ** volatile g_1238;
    struct S0 g_1302;
    struct S0 * volatile g_1301;
    volatile int32_t g_1329;
    int8_t g_1380;
    int8_t g_1425;
    int64_t *g_1477;
    int64_t **g_1476[4];
    int64_t ***g_1475;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_1498);
int32_t  func_10(uint16_t  p_11, int32_t * p_12, uint32_t  p_13, struct S1 * p_1498);
int64_t  func_18(int32_t ** p_19, struct S0  p_20, int32_t  p_21, int32_t ** p_22, struct S1 * p_1498);
struct S0  func_23(uint64_t  p_24, uint32_t  p_25, int32_t ** p_26, int64_t  p_27, struct S1 * p_1498);
uint32_t  func_29(int64_t  p_30, struct S1 * p_1498);
int32_t * func_32(int32_t ** p_33, struct S1 * p_1498);
int8_t  func_43(int32_t ** p_44, int32_t * p_45, struct S1 * p_1498);
int32_t * func_48(int32_t ** p_49, int32_t  p_50, uint32_t  p_51, struct S1 * p_1498);
int32_t ** func_52(int32_t ** p_53, int32_t *** p_54, struct S1 * p_1498);
int32_t *** func_55(int32_t * p_56, struct S1 * p_1498);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1498->g_4 p_1498->g_5 p_1498->g_1040 p_1498->g_1041 p_1498->g_98 p_1498->g_83 p_1498->g_17 p_1498->g_62 p_1498->g_63 p_1498->g_1237 p_1498->g_1238 p_1498->g_3 p_1498->g_495 p_1498->g_805.f3 p_1498->g_550 p_1498->g_1169 p_1498->g_1302.f3 p_1498->g_164 p_1498->g_1380 p_1498->g_60 p_1498->g_211 p_1498->g_80.f0 p_1498->g_864 p_1498->g_166 p_1498->g_116 p_1498->g_80.f3 p_1498->g_37 p_1498->g_80.f1 p_1498->g_380 p_1498->g_36 p_1498->g_59 p_1498->g_1475 p_1498->g_552 p_1498->g_1425 p_1498->g_670 p_1498->g_805.f0 p_1498->g_1229 p_1498->g_805.f2
 * writes: p_1498->g_4 p_1498->g_5 p_1498->g_3 p_1498->g_495 p_1498->g_805.f3 p_1498->g_63 p_1498->g_1380 p_1498->g_79 p_1498->g_89 p_1498->g_17 p_1498->g_98 p_1498->g_380 p_1498->g_80.f3 p_1498->g_153 p_1498->g_80.f1 p_1498->g_59 p_1498->g_1229 p_1498->g_116 p_1498->g_864
 */
int32_t  func_1(struct S1 * p_1498)
{ /* block id: 4 */
    uint32_t l_2[8][3][4] = {{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}},{{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL},{0xAF72B572L,4294967295UL,4294967293UL,0xDCBA86BAL}}};
    int8_t l_6 = 0x00L;
    int32_t l_1172[3];
    int32_t l_1179[8][10][3] = {{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}},{{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L},{0x40009FBEL,3L,3L}}};
    uint64_t l_1190[4];
    uint64_t l_1205 = 1UL;
    int32_t **l_1225 = &p_1498->g_62;
    int64_t l_1232 = 0x7A03878EB4E777EBL;
    struct S0 l_1261 = {18446744073709551615UL,0x785EAC85L,0x44C0L,0x4D0E0E15L};
    int64_t **l_1276 = (void*)0;
    int8_t l_1277 = 0x17L;
    int8_t l_1281 = (-1L);
    int16_t l_1296[8] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
    uint8_t l_1330 = 1UL;
    uint32_t l_1334 = 4294967295UL;
    uint64_t l_1346 = 0x9187FCC264C71B62L;
    int32_t ****l_1490 = &p_1498->g_82[4][1][3];
    int16_t l_1492[3][6] = {{0x16C4L,1L,0x16C4L,0x16C4L,1L,0x16C4L},{0x16C4L,1L,0x16C4L,0x16C4L,1L,0x16C4L},{0x16C4L,1L,0x16C4L,0x16C4L,1L,0x16C4L}};
    int64_t l_1494 = 0x45A7C29FEC7CE6BFL;
    uint32_t l_1495 = 4294967295UL;
    uint32_t l_1497 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1172[i] = 0L;
    for (i = 0; i < 4; i++)
        l_1190[i] = 0UL;
    for (p_1498->g_4 = 0; (p_1498->g_4 <= 2); p_1498->g_4 += 1)
    { /* block id: 7 */
        volatile int32_t *l_9 = (void*)0;
        int32_t l_1171 = 0L;
        int32_t l_1173 = 0x76055FA4L;
        int32_t l_1174 = 0x36652F4CL;
        int32_t l_1175 = 1L;
        int8_t l_1176[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t l_1177 = 1L;
        int32_t l_1178 = 0x075276BCL;
        int32_t l_1199[4];
        int32_t l_1204[2][9][10] = {{{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L}},{{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L},{0L,0x36659611L,0x5A004129L,(-10L),(-10L),0x5A004129L,0x36659611L,0L,0x6CAF6F24L,0x670BEDD5L}}};
        int32_t **l_1239 = &p_1498->g_62;
        int64_t *l_1274 = &p_1498->g_153;
        int64_t **l_1273 = &l_1274;
        int32_t l_1278[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t l_1282 = 7L;
        uint32_t l_1285 = 0xED38BDC6L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1199[i] = 7L;
        for (p_1498->g_5 = 2; (p_1498->g_5 >= 0); p_1498->g_5 -= 1)
        { /* block id: 10 */
            return l_6;
        }
        for (l_6 = 0; (l_6 <= 2); l_6 += 1)
        { /* block id: 15 */
            volatile int32_t *l_8 = &p_1498->g_3;
            volatile int32_t **l_7[4][9][3] = {{{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8}},{{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8}},{{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8}},{{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8},{(void*)0,&l_8,&l_8}}};
            int i, j, k;
            l_9 = &p_1498->g_3;
            for (p_1498->g_5 = 0; (p_1498->g_5 <= 2); p_1498->g_5 += 1)
            { /* block id: 19 */
                int i, j, k;
                return l_2[(p_1498->g_5 + 1)][l_6][(l_6 + 1)];
            }
        }
    }
lbl_1381:
    (**p_1498->g_83) &= (safe_rshift_func_int8_t_s_s((**p_1498->g_1040), 0));
    for (l_1277 = 0; (l_1277 <= 1); l_1277 += 1)
    { /* block id: 851 */
        int64_t l_1355[8] = {0L,0x4918500C31A2D52BL,0L,0L,0x4918500C31A2D52BL,0L,0L,0x4918500C31A2D52BL};
        int64_t ***l_1384[4][10][5] = {{{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276}},{{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276}},{{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276}},{{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276},{(void*)0,&l_1276,(void*)0,&l_1276,&l_1276}}};
        uint8_t *l_1400[8] = {&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229,&p_1498->g_1229};
        uint8_t **l_1399 = &l_1400[1];
        uint8_t ***l_1398 = &l_1399;
        int32_t **l_1402[6] = {(void*)0,&p_1498->g_62,(void*)0,(void*)0,&p_1498->g_62,(void*)0};
        int64_t l_1405 = 5L;
        int64_t l_1416 = 0x4D02B44CAA585716L;
        int32_t l_1420 = 0x3A84FFB2L;
        int32_t l_1422 = (-6L);
        int32_t l_1424 = 0x1BCDFF09L;
        uint64_t l_1427[1][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1427[i][j] = 4UL;
        }
        (*p_1498->g_1237) = (**l_1225);
        (**p_1498->g_83) &= ((**l_1225) , 0x4824A818L);
        (**p_1498->g_83) = (**p_1498->g_1238);
        for (p_1498->g_495 = 0; (p_1498->g_495 <= 1); p_1498->g_495 += 1)
        { /* block id: 857 */
            uint32_t l_1358 = 4294967295UL;
            int32_t ***l_1403 = &l_1402[2];
            int32_t l_1404 = 0L;
            int32_t l_1406 = 7L;
            int32_t l_1407 = (-3L);
            int32_t l_1408 = 0x3A09BECDL;
            int32_t l_1409 = 0x706556E6L;
            int64_t l_1410[1][6];
            int32_t l_1411 = 0x1293BAE7L;
            int32_t l_1412 = 0x4FCAF850L;
            int32_t l_1413 = (-1L);
            int32_t l_1414 = 0x30FD763AL;
            int32_t l_1415 = 0x1B138883L;
            int32_t l_1417 = (-9L);
            int32_t l_1418 = 1L;
            int32_t l_1419 = 1L;
            int32_t l_1421[10][3] = {{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L},{1L,0x59F35515L,0x59F35515L}};
            int64_t l_1423 = 1L;
            int32_t l_1426[5] = {0L,0L,0L,0L,0L};
            uint32_t *l_1448 = (void*)0;
            uint32_t **l_1447 = &l_1448;
            uint32_t ***l_1446 = &l_1447;
            uint16_t ***l_1458 = &p_1498->g_1091;
            int32_t ****l_1491[10] = {&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2],&p_1498->g_82[1][0][2]};
            uint32_t l_1493[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
            int16_t *l_1496[1][9] = {{&l_1492[2][3],(void*)0,&l_1492[2][3],&l_1492[2][3],(void*)0,&l_1492[2][3],&l_1492[2][3],(void*)0,&l_1492[2][3]}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1410[i][j] = (-1L);
            }
            for (p_1498->g_805.f3 = 0; (p_1498->g_805.f3 <= 1); p_1498->g_805.f3 += 1)
            { /* block id: 860 */
                int16_t l_1394 = 5L;
                int i, j, k;
                l_1346++;
                for (l_1205 = 0; (l_1205 <= 1); l_1205 += 1)
                { /* block id: 864 */
                    int64_t *l_1361 = &l_1232;
                    int16_t *l_1378 = &l_1296[5];
                    int8_t l_1379 = 0x4AL;
                    uint8_t *l_1397 = &p_1498->g_1229;
                    uint8_t **l_1396 = &l_1397;
                    uint8_t ***l_1395[2][10] = {{&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396},{&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396,&l_1396}};
                    int i, j, k;
                    (*p_1498->g_62) = (*p_1498->g_62);
                    if (((safe_mul_func_uint16_t_u_u(((p_1498->g_1380 ^= (safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((*p_1498->g_1237) == l_1355[5]), ((safe_rshift_func_int16_t_s_s(p_1498->g_550[3][8], l_1358)) , (safe_lshift_func_int16_t_s_u((p_1498->g_1169[0][0][1] < (((*l_1361) = l_1358) & (safe_lshift_func_uint8_t_u_u(p_1498->g_1302.f3, 2)))), (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((*l_1378) = (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_1498->g_164, (safe_div_func_int8_t_s_s((*p_1498->g_1041), (**l_1225))))), (**l_1225)))) || p_1498->g_164), 0x7F83D6CCL)), 6)), l_1379)) || l_1355[6]), (*p_1498->g_1041)))))))), 0x56F81210183CA734L))) , 0x0BAFL), 0x5EDAL)) ^ 0x245CDC70739345EEL))
                    { /* block id: 869 */
                        (**p_1498->g_83) &= (l_1358 , 0x63D8602EL);
                        if (l_1277)
                            goto lbl_1381;
                    }
                    else
                    { /* block id: 872 */
                        uint16_t l_1389 = 1UL;
                        int8_t *l_1401 = &l_1281;
                        (*p_1498->g_83) = func_48(func_52((((((safe_lshift_func_int16_t_s_u(0x6852L, ((l_1384[1][3][4] == &l_1276) && (safe_div_func_uint32_t_u_u((((((safe_sub_func_int8_t_s_s((**p_1498->g_1040), l_1389)) < (**p_1498->g_1238)) > ((*l_1361) = ((((((*l_1401) = (safe_lshift_func_int16_t_s_u(((!(safe_mul_func_int8_t_s_s(((((l_1389 != (0x1EFCE1C77B8FE332L <= l_1394)) , l_1395[1][5]) != l_1398) || p_1498->g_60), l_1358))) != (*p_1498->g_211)), 2))) && (*p_1498->g_1041)) , l_1355[5]) || 0x1FA0L) & p_1498->g_864))) , 0x6AL) <= 0L), 0xB183CAC5L))))) , (**l_1225)) != l_1358) < l_1355[4]) , l_1402[2]), l_1403, p_1498), p_1498->g_36, p_1498->g_1302.f3, p_1498);
                    }
                }
            }
            ++l_1427[0][0];
            for (p_1498->g_59 = 6; (p_1498->g_59 >= 0); p_1498->g_59 -= 1)
            { /* block id: 882 */
                uint16_t *l_1430 = &p_1498->g_1302.f2;
                int32_t l_1437 = (-7L);
                int64_t *l_1449 = &l_1410[0][1];
                uint16_t *l_1450 = (void*)0;
                uint16_t *l_1451 = &l_1261.f2;
                uint16_t ***l_1457 = (void*)0;
                uint16_t ****l_1456 = &l_1457;
                int8_t *l_1468[1][6][5] = {{{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0},{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0},{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0},{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0},{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0},{&l_1277,&l_1277,&p_1498->g_1425,&l_6,(void*)0}}};
                int i, j, k;
                (1 + 1);
            }
            (*p_1498->g_17) &= (((((safe_mod_func_int16_t_s_s((p_1498->g_864 = (p_1498->g_116 = ((safe_add_func_uint16_t_u_u((((void*)0 == p_1498->g_1475) | 0x2C603072L), ((((***l_1398) ^= ((safe_sub_func_uint64_t_u_u(((((((&p_1498->g_80 != (void*)0) || (l_1358 == (safe_add_func_int32_t_s_s((**l_1225), ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((p_1498->g_552 <= (+((((l_1490 != l_1491[1]) <= p_1498->g_166) & l_1492[2][3]) > p_1498->g_3))), (*p_1498->g_1041))) < (*p_1498->g_211)), l_1493[5][0])), (**l_1225))), (-1L))) ^ l_1494))))) | (*p_1498->g_211)) || p_1498->g_1425) && p_1498->g_670) , (**l_1225)), 1L)) , p_1498->g_805.f0)) != 247UL) , l_1495))) == 18446744073709551615UL))), p_1498->g_805.f2)) && (**p_1498->g_1238)) || 4294967295UL) , (void*)0) == (*p_1498->g_83));
        }
    }
    return l_1497;
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_4 p_1498->g_16 p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_17 p_1498->g_60 p_1498->g_83 p_1498->g_116 p_1498->g_166 p_1498->g_864 p_1498->g_208 p_1498->g_528 p_1498->g_79 p_1498->g_62 p_1498->g_635 p_1498->g_700 p_1498->g_98 p_1498->g_805.f0 p_1498->g_80.f2 p_1498->g_552 p_1498->g_211 p_1498->g_913 p_1498->g_63 p_1498->g_153 p_1498->g_805.f3 p_1498->g_495 p_1498->g_380 p_1498->g_80 p_1498->g_59 p_1498->g_934 p_1498->g_666 p_1498->g_805 p_1498->g_89 p_1498->g_550 p_1498->g_1090 p_1498->g_216 p_1498->g_1041 p_1498->g_1138 p_1498->g_3 p_1498->g_1040
 * writes: p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_60 p_1498->g_17 p_1498->g_116 p_1498->g_166 p_1498->g_864 p_1498->g_528 p_1498->g_79 p_1498->g_635 p_1498->g_700 p_1498->g_805.f0 p_1498->g_380 p_1498->g_80.f2 p_1498->g_805.f2 p_1498->g_552 p_1498->g_63 p_1498->g_153 p_1498->g_59 p_1498->g_80 p_1498->g_805 p_1498->g_89 p_1498->g_208 p_1498->g_495 p_1498->g_527 p_1498->g_62 p_1498->g_1091 p_1498->g_216 p_1498->g_934
 */
int32_t  func_10(uint16_t  p_11, int32_t * p_12, uint32_t  p_13, struct S1 * p_1498)
{ /* block id: 23 */
    uint32_t l_28 = 4294967292UL;
    int32_t l_31 = 1L;
    int32_t **l_865 = &p_1498->g_62;
    struct S0 l_980[6][4][10] = {{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}},{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}},{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}},{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}},{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}},{{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}},{{0x34DE48C5CD9C7024L,-2L,0UL,0x20CE97D2L},{18446744073709551615UL,-1L,0xD463L,1L},{0xE9166BD1FA7BC901L,8L,3UL,-1L},{0x8DBBB48A78757499L,0x6E190743L,0xC818L,1L},{0x71D3B22D4902167CL,0x45D5817BL,0UL,0L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L},{0x3658B6688924C0E4L,0x35A2C13AL,1UL,0L},{0xCE9830CFBEE5DB25L,-3L,1UL,0x21D72232L},{18446744073709551615UL,0x13A0A69AL,5UL,-8L},{0x7B9081DF78FE677DL,8L,0x3E08L,-1L}}}};
    int32_t l_1082 = 0x3857BDD1L;
    int16_t l_1083 = 1L;
    int32_t l_1084[4] = {(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_1085 = 0x0AC9F523L;
    uint16_t *l_1089 = (void*)0;
    uint16_t **l_1088 = &l_1089;
    int32_t l_1167 = 8L;
    int i, j, k;
    for (p_13 = 0; (p_13 != 46); p_13 = safe_add_func_uint64_t_u_u(p_13, 3))
    { /* block id: 26 */
        return p_1498->g_4;
    }
    if (((p_1498->g_16 == (void*)0) > (func_18(&p_1498->g_17, (l_980[5][3][3] = func_23(l_28, (p_1498->g_864 ^= func_29(l_31, p_1498)), l_865, p_1498->g_208, p_1498)), l_31, l_865, p_1498) > p_1498->g_550[1][7])))
    { /* block id: 702 */
        int32_t *l_1080 = (void*)0;
        int32_t *l_1081[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1081[i] = (void*)0;
        --l_1085;
        return (*p_12);
    }
    else
    { /* block id: 705 */
        int32_t **l_1092 = &p_1498->g_62;
        int8_t l_1097 = 1L;
        uint8_t l_1112 = 0x8BL;
        int32_t l_1133 = 0L;
        int32_t l_1134 = 3L;
        int32_t **l_1140[9] = {&p_1498->g_62,(void*)0,&p_1498->g_62,&p_1498->g_62,(void*)0,&p_1498->g_62,&p_1498->g_62,(void*)0,&p_1498->g_62};
        int8_t l_1165 = 0x7FL;
        int64_t l_1166 = 0x18730A69A2C7529EL;
        int i;
        (*p_1498->g_1090) = l_1088;
        (*l_1092) = ((*p_1498->g_83) = p_12);
        for (p_1498->g_216 = 0; (p_1498->g_216 < (-14)); --p_1498->g_216)
        { /* block id: 711 */
            uint8_t l_1095[7][9] = {{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL},{1UL,0xAEL,7UL,0xAEL,1UL,1UL,0xAEL,7UL,0xAEL}};
            int16_t *l_1096 = &l_1083;
            int32_t l_1108 = (-1L);
            int32_t l_1110 = 1L;
            uint16_t l_1135 = 65535UL;
            int32_t * volatile l_1141[7] = {&p_1498->g_80.f3,&p_1498->g_80.f3,&p_1498->g_80.f3,&p_1498->g_80.f3,&p_1498->g_80.f3,&p_1498->g_80.f3,&p_1498->g_80.f3};
            uint8_t *l_1164[1];
            int32_t l_1168 = (-5L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_1164[i] = &l_1095[4][7];
            (*l_1092) = p_12;
            if ((((*l_1096) = l_1095[1][3]) || (((void*)0 != &p_1498->g_667) , ((((*l_1096) = 0x3C6FL) , ((l_1097 != ((*p_1498->g_211) | ((**l_1092) != (p_11 ^ (safe_add_func_uint16_t_u_u((**l_865), p_1498->g_116)))))) == p_13)) != (**l_1092)))))
            { /* block id: 715 */
                int32_t l_1122 = 0x589B46BDL;
                int32_t l_1123 = 0x0C6E5ACEL;
                for (p_1498->g_59 = 0; (p_1498->g_59 < 14); ++p_1498->g_59)
                { /* block id: 718 */
                    uint64_t l_1109[6];
                    int32_t ***l_1111 = &l_865;
                    int32_t l_1124 = 0x6FD45FEAL;
                    int32_t l_1125 = 0x54D1A716L;
                    int32_t *l_1126 = &l_1123;
                    int32_t *l_1127 = &l_1084[3];
                    int32_t *l_1128 = &l_1084[3];
                    int32_t *l_1129 = &p_1498->g_36;
                    int32_t *l_1130 = &p_1498->g_80.f3;
                    int32_t *l_1131 = (void*)0;
                    int32_t *l_1132[8];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1109[i] = 0UL;
                    for (i = 0; i < 8; i++)
                        l_1132[i] = &p_1498->g_805.f3;
                    l_1110 ^= (((((p_11 != ((((safe_rshift_func_uint8_t_u_u((&p_1498->g_528 == (void*)0), ((**l_865) != (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((p_13 , p_13) , (l_1108 = (**l_1092))) && ((p_11 < 0xCC911D17D8121816L) || l_1109[4])), 15)), (*p_1498->g_1041)))))) & (*p_1498->g_1041)) >= p_13) ^ p_11)) == p_1498->g_166) ^ p_13) == (**l_865)) < 4294967293UL);
                    (*p_1498->g_83) = func_48(((*l_1111) = &p_12), (l_1084[3] = (l_1112 , (((safe_lshift_func_uint8_t_u_u((l_980[5][3][3].f3 <= ((l_31 , (safe_unary_minus_func_uint32_t_u(p_11))) & (safe_sub_func_uint16_t_u_u(l_1108, ((l_1110 ^= (l_1122 &= (l_1095[3][7] > (safe_div_func_uint32_t_u_u((**l_1092), (safe_sub_func_uint16_t_u_u(((**l_1092) > p_11), l_1095[4][1]))))))) | l_1123))))), 7)) & 0x9B6D9C3CBC011DFEL) , p_13))), p_11, p_1498);
                    ++l_1135;
                }
            }
            else
            { /* block id: 728 */
                for (p_1498->g_934 = 0; (p_1498->g_934 <= 0); p_1498->g_934 += 1)
                { /* block id: 731 */
                    int i;
                    (*p_12) ^= p_1498->g_37[p_1498->g_934];
                    for (p_1498->g_528 = 3; (p_1498->g_528 >= 0); p_1498->g_528 -= 1)
                    { /* block id: 735 */
                        struct S0 l_1139 = {0x3285B173BB2C0E49L,-10L,0UL,0x52A0D37AL};
                        (*p_1498->g_1138) = (*p_1498->g_16);
                        l_1141[2] = (l_1139 , (*p_1498->g_1138));
                    }
                }
                (*p_1498->g_83) = p_12;
            }
            l_1168 &= ((((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_lshift_func_uint16_t_u_u(((void*)0 != &p_1498->g_1041), 12)) <= (safe_mod_func_uint16_t_u_u(0x3375L, ((((**l_865) = (*p_1498->g_211)) < p_13) ^ ((((safe_div_func_int32_t_s_s((l_1167 = (p_1498->g_934 && (l_1166 = (p_1498->g_3 & (safe_rshift_func_uint16_t_u_s((p_11 || (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(((l_980[5][3][3].f3 = ((l_1108 &= ((p_1498->g_208 = 1UL) , l_1110)) < l_1165)) || p_13), (-1L))) < 65535UL), 6)) == l_1110), p_13))), 8)))))), p_11)) != l_1110) && (*p_1498->g_211)) , p_11))))) > 0x10C395C3L) <= (*p_1498->g_211)) , 65535UL), 7)), 0x8FAF1BCBAA93E14EL)), p_11)), (**p_1498->g_1040))) & p_11) || 4294967288UL) | p_13);
        }
    }
    return (*p_1498->g_17);
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_635 p_1498->g_208 p_1498->g_5 p_1498->g_805.f0 p_1498->g_17 p_1498->g_63 p_1498->g_805.f3 p_1498->g_80 p_1498->g_700 p_1498->g_495 p_1498->g_62 p_1498->g_83 p_1498->g_166 p_1498->g_913 p_1498->g_550 p_1498->g_59
 * writes: p_1498->g_635 p_1498->g_208 p_1498->g_805.f3 p_1498->g_805.f2 p_1498->g_495 p_1498->g_17 p_1498->g_805 p_1498->g_80 p_1498->g_166 p_1498->g_527 p_1498->g_63 p_1498->g_5 p_1498->g_62
 */
int64_t  func_18(int32_t ** p_19, struct S0  p_20, int32_t  p_21, int32_t ** p_22, struct S1 * p_1498)
{ /* block id: 629 */
    uint16_t l_986 = 0x6F02L;
    int32_t l_987 = 9L;
    uint64_t *l_1001 = &p_1498->g_805.f0;
    int32_t l_1036 = (-1L);
    int32_t *l_1070 = &p_1498->g_60;
    int32_t *l_1071[4];
    int8_t l_1072 = 0x6EL;
    int8_t l_1073 = (-8L);
    int32_t l_1074 = 0x32F8EBFEL;
    int32_t l_1075 = (-10L);
    int16_t l_1076[6][8] = {{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L},{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L},{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L},{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L},{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L},{0x4BD6L,0x1B48L,1L,6L,0x0F1DL,0x4BD6L,6L,0L}};
    uint16_t l_1077[10] = {0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L,0x4E40L};
    int i, j;
    for (i = 0; i < 4; i++)
        l_1071[i] = (void*)0;
    for (p_1498->g_635 = 28; (p_1498->g_635 > 3); --p_1498->g_635)
    { /* block id: 632 */
        int64_t l_985 = 0x06C0B1E30674BC0AL;
        int32_t l_1002 = 0x595731E5L;
        int32_t *l_1003 = &p_1498->g_805.f3;
        uint16_t *l_1015 = &p_1498->g_805.f2;
        uint8_t *l_1016 = &p_1498->g_208;
        struct S0 l_1043[5][10][5] = {{{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}}},{{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}}},{{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}}},{{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}}},{{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}},{{0xB23E68D711C1FD63L,0x23F754C8L,65528UL,0x5F72867CL},{8UL,0x1520F818L,65535UL,0x454A3F72L},{0xDC9D04B4F0F6305DL,0x5A633D82L,0xF42AL,0x07DFEC2EL},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L},{0x4B01380860D0CBF7L,0x602C0B16L,65526UL,2L}}}};
        int i, j, k;
        for (p_1498->g_208 = 0; (p_1498->g_208 < 8); p_1498->g_208 = safe_add_func_int16_t_s_s(p_1498->g_208, 9))
        { /* block id: 635 */
            int16_t l_990[4][7][7] = {{{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L}},{{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L}},{{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L}},{{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L},{0L,0x4806L,0L,0L,0x4806L,0L,0L}}};
            int i, j, k;
            l_1002 ^= (((p_20.f1 || (((p_1498->g_5 <= ((l_985 == (!(l_987 = l_986))) != (safe_mod_func_uint32_t_u_u(l_990[1][6][2], ((safe_div_func_int16_t_s_s((l_986 & (safe_rshift_func_int16_t_s_s(l_985, 6))), (safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(3L, (&p_1498->g_550[0][5] != l_1001))) < p_20.f0), 9L)), l_985)))) , p_20.f1))))) , l_990[1][6][2]) == 0x64ADL)) >= p_1498->g_805.f0) & (**p_19));
            return l_987;
        }
        (*l_1003) |= (**p_19);
        if ((safe_add_func_int64_t_s_s(0x338F0FB668121D1CL, ((safe_unary_minus_func_int8_t_s(p_20.f2)) | ((((safe_rshift_func_int8_t_s_s(0L, ((((p_1498->g_80 , ((*l_1016) = ((0x75C75D6AL < (!0x7298F4A5L)) == (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((!(safe_rshift_func_int8_t_s_s((*l_1003), (*l_1003)))), (!((*l_1015) = (l_986 | p_20.f1))))), l_986))))) | 0x07L) | (*l_1003)) != p_1498->g_700))) & 0x63L) , p_21) ^ p_20.f2)))))
        { /* block id: 643 */
            int16_t l_1021[2];
            int16_t *l_1023 = &l_1021[0];
            int16_t **l_1022 = &l_1023;
            int i;
            for (i = 0; i < 2; i++)
                l_1021[i] = (-1L);
            if ((**p_19))
                break;
            if (l_1002)
                goto lbl_1069;
            if ((safe_div_func_int32_t_s_s((((**p_19) , (-4L)) || 0x674C3C76L), p_21)))
            { /* block id: 645 */
                int32_t l_1026 = (-10L);
                uint64_t l_1035[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1035[i] = 0UL;
                for (p_1498->g_495 = 0; (p_1498->g_495 <= 1); p_1498->g_495 += 1)
                { /* block id: 648 */
                    int8_t *l_1039 = &p_1498->g_79;
                    int8_t **l_1038 = &l_1039;
                    (*p_1498->g_83) = (*p_22);
                }
            }
            else
            { /* block id: 667 */
                p_1498->g_805 = l_1043[1][2][3];
            }
            if ((*l_1003))
                continue;
            return l_1021[1];
        }
        else
        { /* block id: 672 */
            struct S0 l_1044 = {18446744073709551608UL,-8L,1UL,0L};
            struct S0 *l_1045 = &p_1498->g_80;
            int64_t *l_1053 = (void*)0;
            int32_t *l_1068 = &p_1498->g_59;
            (*l_1045) = l_1044;
            for (p_1498->g_166 = (-4); (p_1498->g_166 > 9); p_1498->g_166 = safe_add_func_int64_t_s_s(p_1498->g_166, 2))
            { /* block id: 676 */
                uint16_t *l_1059[10][5] = {{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986},{&l_986,&l_986,&l_986,&l_986,&l_986}};
                int i, j;
                for (l_987 = 4; (l_987 >= 0); l_987 -= 1)
                { /* block id: 679 */
                    int64_t **l_1054 = &p_1498->g_527[3];
                    int32_t l_1060[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1060[i] = (-8L);
                    (*l_1003) ^= (~((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint64_t_u_u((((*l_1054) = l_1053) != (void*)0), 0x7A001F0172C0944EL)))) || ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0L, (((p_1498->g_913 != (l_1044.f1 , l_1059[9][3])) <= (0L >= 9UL)) < l_1060[3]))), p_20.f0)) != 0x6220L)));
                    if ((*l_1003))
                    { /* block id: 682 */
                        int64_t *l_1061 = &p_1498->g_528;
                        (**p_1498->g_83) = ((**p_19) && (((((l_1061 != ((safe_sub_func_uint8_t_u_u(255UL, ((p_1498->g_166 , (p_1498->g_913 == l_1015)) || (l_1060[1] = (((+(safe_sub_func_int32_t_s_s(((*l_1003) &= (**p_19)), (safe_lshift_func_uint8_t_u_s((~p_1498->g_550[0][5]), 2))))) && (0x01D5L & 65531UL)) && p_20.f1))))) , (void*)0)) , &l_1060[3]) != (*p_1498->g_83)) || 0x9EL) & 0L));
                    }
                    else
                    { /* block id: 686 */
                        (*p_1498->g_83) = l_1068;
                        (*p_1498->g_83) = ((*p_22) = (*p_22));
                        if ((**p_22))
                            continue;
                    }
                    if ((*p_1498->g_17))
                        continue;
                }
                return (*l_1068);
            }
        }
    }
lbl_1069:
    (*p_19) = &l_987;
    ++l_1077[5];
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_62 p_1498->g_83 p_1498->g_635 p_1498->g_79 p_1498->g_700 p_1498->g_98 p_1498->g_805.f0 p_1498->g_37 p_1498->g_80.f2 p_1498->g_552 p_1498->g_17 p_1498->g_211 p_1498->g_80.f0 p_1498->g_913 p_1498->g_63 p_1498->g_153 p_1498->g_805.f3 p_1498->g_495 p_1498->g_380 p_1498->g_4 p_1498->g_80 p_1498->g_59 p_1498->g_60 p_1498->g_864 p_1498->g_934 p_1498->g_116 p_1498->g_666 p_1498->g_36 p_1498->g_805 p_1498->g_89 p_1498->g_528
 * writes: p_1498->g_528 p_1498->g_79 p_1498->g_17 p_1498->g_635 p_1498->g_700 p_1498->g_805.f0 p_1498->g_380 p_1498->g_864 p_1498->g_116 p_1498->g_80.f2 p_1498->g_805.f2 p_1498->g_552 p_1498->g_63 p_1498->g_153 p_1498->g_59 p_1498->g_60 p_1498->g_37 p_1498->g_166 p_1498->g_36 p_1498->g_80 p_1498->g_805 p_1498->g_89
 */
struct S0  func_23(uint64_t  p_24, uint32_t  p_25, int32_t ** p_26, int64_t  p_27, struct S1 * p_1498)
{ /* block id: 546 */
    int32_t *l_866 = &p_1498->g_59;
    int32_t *l_867 = &p_1498->g_36;
    int32_t *l_868 = &p_1498->g_60;
    int32_t *l_869 = &p_1498->g_63;
    int32_t *l_870 = (void*)0;
    int32_t *l_871 = &p_1498->g_37[0];
    int32_t *l_872 = &p_1498->g_63;
    int32_t *l_873[8] = {&p_1498->g_59,&p_1498->g_59,&p_1498->g_59,&p_1498->g_59,&p_1498->g_59,&p_1498->g_59,&p_1498->g_59,&p_1498->g_59};
    uint8_t l_874[6][10][4] = {{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}},{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}},{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}},{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}},{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}},{{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL},{0x51L,0UL,0UL,0x0FL}}};
    int32_t l_945 = 0L;
    struct S0 l_949 = {0UL,-10L,1UL,4L};
    uint16_t l_977 = 0x8529L;
    int i, j, k;
lbl_921:
    --l_874[2][8][3];
    for (p_1498->g_528 = 0; (p_1498->g_528 >= 8); ++p_1498->g_528)
    { /* block id: 550 */
        int32_t l_880[3][5] = {{6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L}};
        uint32_t l_886 = 0x233CE732L;
        struct S0 l_890[1] = {{0UL,1L,65535UL,0x3FCE7139L}};
        int i, j;
        for (p_1498->g_79 = 1; (p_1498->g_79 >= 0); p_1498->g_79 -= 1)
        { /* block id: 553 */
            int32_t *l_879 = &p_1498->g_37[0];
            int32_t l_881 = (-2L);
            uint16_t *l_914[4][6][4] = {{{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0}},{{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0}},{{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0}},{{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0},{(void*)0,(void*)0,&p_1498->g_80.f2,(void*)0}}};
            int32_t l_963 = (-1L);
            int32_t l_966 = (-1L);
            int32_t l_968 = 1L;
            int32_t l_969 = 0x3B2C89ADL;
            int32_t l_971 = 0x5FF0BCCFL;
            int32_t l_972 = 8L;
            int32_t l_975 = 0L;
            int32_t l_976 = 0x4DAC6C8FL;
            int i, j, k;
            (*p_1498->g_83) = (*p_26);
            for (p_1498->g_635 = 0; (p_1498->g_635 <= 2); p_1498->g_635 += 1)
            { /* block id: 557 */
                int32_t l_883 = 0x3131AEBEL;
                int i, j, k;
                l_873[(p_1498->g_79 + 2)] = l_879;
                for (p_1498->g_700 = 0; (p_1498->g_700 <= 1); p_1498->g_700 += 1)
                { /* block id: 561 */
                    int32_t l_882 = 0x23BF0051L;
                    int32_t l_884 = 0x4274ABA6L;
                    int32_t l_885 = 2L;
                    int i, j;
                    if (p_1498->g_98[(p_1498->g_700 + 5)][p_1498->g_635])
                    { /* block id: 562 */
                        int i, j, k;
                        l_886++;
                    }
                    else
                    { /* block id: 564 */
                        struct S0 l_889 = {0xAF2ED8D1A2C37586L,0x1C2C69CFL,0x7109L,0x502A92DAL};
                        return l_889;
                    }
                }
                return l_890[0];
            }
            for (p_1498->g_805.f0 = 0; (p_1498->g_805.f0 <= 1); p_1498->g_805.f0 += 1)
            { /* block id: 572 */
                int8_t *l_893 = (void*)0;
                int8_t *l_894 = &p_1498->g_380;
                int16_t *l_895[10] = {&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116,&p_1498->g_116};
                uint64_t *l_902 = &p_1498->g_552;
                int16_t **l_918 = &l_895[1];
                int64_t *l_919[9] = {&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153,&p_1498->g_153};
                uint8_t *l_920 = &l_874[2][8][3];
                int i, j, k;
                (**p_1498->g_83) = (0x62F1263308D70EBFL > (((p_1498->g_116 = (p_1498->g_864 = (safe_mul_func_uint8_t_u_u(p_1498->g_98[(p_1498->g_805.f0 + 3)][p_1498->g_805.f0], ((*l_894) = (*l_879)))))) == (p_1498->g_80.f2 |= p_25)) < ((((*l_902) &= (((p_1498->g_805.f2 = p_25) == (0L < p_1498->g_635)) == ((safe_mod_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(0x1A34L, (safe_sub_func_uint32_t_u_u((*l_879), (*l_879))))) && p_24), l_886)) ^ 0x49L))) , 0x3F2BFE5313FF41E6L) <= 0x5BADF53B5935B2C2L)));
                (**p_26) = ((!((safe_rshift_func_uint8_t_u_u(((*l_920) = (((safe_lshift_func_int16_t_s_s((((((safe_add_func_int16_t_s_s(p_25, (safe_lshift_func_uint16_t_u_s((p_25 & (*p_1498->g_211)), 11)))) , (p_27 == (safe_mul_func_int16_t_s_s(((p_1498->g_153 ^= (((p_1498->g_913 == l_914[3][0][2]) != (safe_unary_minus_func_int32_t_s(p_1498->g_98[(p_1498->g_805.f0 + 3)][p_1498->g_805.f0]))) < (!((*l_872) && (safe_mod_func_uint32_t_u_u((((*l_918) = &p_1498->g_116) != &p_1498->g_864), (**p_26))))))) , 9L), p_1498->g_805.f3)))) | (*p_1498->g_211)) , l_890[0]) , p_1498->g_495), p_1498->g_380)) ^ p_24) == p_1498->g_4)), p_1498->g_552)) == 8UL)) > p_1498->g_98[(p_1498->g_805.f0 + 3)][p_1498->g_805.f0]);
                return p_1498->g_80;
            }
            (*l_866) = (*l_879);
            for (p_1498->g_59 = 0; (p_1498->g_59 <= 0); p_1498->g_59 += 1)
            { /* block id: 589 */
                int32_t l_944 = 0x7D143122L;
                int32_t l_952 = 0x171502B4L;
                int32_t l_954 = 0x532233D8L;
                int32_t l_957 = 0x6DBC3F46L;
                int32_t l_960 = 0x48071717L;
                int32_t l_961 = 0x5243035BL;
                int32_t l_962 = 0x76E8404DL;
                int32_t l_964 = (-6L);
                int32_t l_965 = (-8L);
                int32_t l_967 = 7L;
                int32_t l_970 = 0x549CE32BL;
                int32_t l_973 = 0x1C72A97BL;
                int32_t l_974 = 1L;
                if ((*p_1498->g_17))
                { /* block id: 590 */
                    for (p_1498->g_60 = 3; (p_1498->g_60 >= 0); p_1498->g_60 -= 1)
                    { /* block id: 593 */
                        int i, j, k;
                        (*l_871) |= (l_874[(p_1498->g_79 + 1)][(p_1498->g_59 + 1)][(p_1498->g_79 + 2)] == ((p_1498->g_864 >= (18446744073709551610UL > p_27)) >= p_24));
                        (**p_26) = (**p_26);
                    }
                }
                else
                { /* block id: 597 */
                    uint64_t l_935 = 4UL;
                    uint64_t l_946[8][9] = {{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL},{0x22AC53563F5ADF3CL,0x753CA444C8F741FCL,0x1645196EF674F80CL,18446744073709551615UL,0x753CA444C8F741FCL,18446744073709551615UL,0x1645196EF674F80CL,0x753CA444C8F741FCL,0x22AC53563F5ADF3CL}};
                    int i, j;
                    if (p_1498->g_153)
                        goto lbl_921;
                    for (p_1498->g_80.f2 = 0; (p_1498->g_80.f2 <= 0); p_1498->g_80.f2 += 1)
                    { /* block id: 601 */
                        uint32_t *l_942 = &p_1498->g_166;
                        int i, j, k;
                        (*l_867) ^= ((safe_add_func_int16_t_s_s((l_890[0].f3 = (safe_lshift_func_int16_t_s_s(0x2E05L, ((safe_add_func_int64_t_s_s(((((*l_942) = ((((safe_div_func_uint8_t_u_u((0x1A12DEB6L >= (l_880[0][1] = (p_24 != (safe_rshift_func_int8_t_s_s(l_890[0].f3, ((safe_add_func_int64_t_s_s((8UL > p_1498->g_934), l_935)) , (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(0x6534B3A2L, (**p_26))), 7)), p_1498->g_116)))))))), 0x7DL)) , p_1498->g_666[(p_1498->g_80.f2 + 2)][p_1498->g_80.f2][(p_1498->g_80.f2 + 3)]) != p_1498->g_666[p_1498->g_79][p_1498->g_59][(p_1498->g_59 + 2)]) & 0UL)) , p_1498->g_153) ^ 0x3F1CL), 0x4B65280CC37A8A46L)) <= 1UL)))), p_1498->g_60)) < (*p_1498->g_211));
                    }
                    if ((**p_26))
                    { /* block id: 607 */
                        struct S0 *l_943[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_943[i] = &p_1498->g_805;
                        p_1498->g_805 = (p_1498->g_80 = p_1498->g_805);
                        l_946[0][0]--;
                        p_1498->g_80 = l_949;
                    }
                    else
                    { /* block id: 612 */
                        if (p_1498->g_934)
                            goto lbl_921;
                    }
                    return l_890[0];
                }
                for (p_1498->g_89 = 0; (p_1498->g_89 < 39); p_1498->g_89 = safe_add_func_int16_t_s_s(p_1498->g_89, 9))
                { /* block id: 619 */
                    int64_t l_953 = 0x03D39084B3E706B8L;
                    int32_t l_955 = 0x382AC5D3L;
                    int32_t l_956 = 0x7728BEF5L;
                    int32_t l_958 = 0x298E3260L;
                    int32_t l_959[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_959[i] = 9L;
                    (*p_1498->g_83) = (*p_26);
                    --l_977;
                }
                if ((**p_26))
                    break;
            }
        }
    }
    return l_949;
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_17 p_1498->g_60 p_1498->g_83 p_1498->g_116 p_1498->g_166 p_1498->g_4
 * writes: p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_60 p_1498->g_17 p_1498->g_116 p_1498->g_166
 */
uint32_t  func_29(int64_t  p_30, struct S1 * p_1498)
{ /* block id: 29 */
    int32_t **l_34 = &p_1498->g_17;
    int32_t *l_809 = &p_1498->g_5;
    int32_t l_821 = 2L;
    uint32_t l_825 = 3UL;
    int32_t l_827[10][3] = {{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)},{0x6519B121L,0x6519B121L,(-1L)}};
    uint8_t *l_849 = (void*)0;
    int i, j;
    (*l_34) = func_32(l_34, p_1498);
    for (p_1498->g_116 = 0; (p_1498->g_116 == (-20)); p_1498->g_116 = safe_sub_func_uint32_t_u_u(p_1498->g_116, 7))
    { /* block id: 418 */
        (**l_34) |= p_30;
    }
    for (p_1498->g_166 = (-21); (p_1498->g_166 > 28); p_1498->g_166 = safe_add_func_uint8_t_u_u(p_1498->g_166, 3))
    { /* block id: 423 */
        uint32_t l_782 = 0xA6A1C854L;
        uint8_t *l_795 = &p_1498->g_208;
        int32_t l_800 = 8L;
        int32_t *l_801[5][6] = {{&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0]},{&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0]},{&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0]},{&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0]},{&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0],&p_1498->g_37[0]}};
        uint64_t *l_814 = &p_1498->g_552;
        uint8_t l_822 = 254UL;
        uint16_t l_828 = 0x3C9BL;
        int16_t *l_837 = &p_1498->g_116;
        uint32_t ***l_854 = (void*)0;
        int i, j;
        (1 + 1);
    }
    return p_1498->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_17 p_1498->g_60 p_1498->g_83
 * writes: p_1498->g_5 p_1498->g_36 p_1498->g_37 p_1498->g_80.f0 p_1498->g_60
 */
int32_t * func_32(int32_t ** p_33, struct S1 * p_1498)
{ /* block id: 30 */
    uint16_t l_35[6] = {65530UL,0xFE76L,65530UL,65530UL,0xFE76L,65530UL};
    int32_t *l_57 = (void*)0;
    int32_t l_729 = (-1L);
    int32_t *l_733 = &p_1498->g_60;
    int i;
    for (p_1498->g_5 = 0; (p_1498->g_5 <= 5); p_1498->g_5 += 1)
    { /* block id: 33 */
        int16_t l_382 = (-1L);
        int32_t l_705 = (-8L);
        int32_t l_770 = 0x4635C95AL;
        for (p_1498->g_36 = 5; (p_1498->g_36 >= 0); p_1498->g_36 -= 1)
        { /* block id: 36 */
            uint64_t l_40[4];
            uint32_t *l_725 = &p_1498->g_89;
            uint32_t **l_724 = &l_725;
            uint32_t ***l_723 = &l_724;
            int32_t l_740[4][8] = {{0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL},{0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL},{0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL},{0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL,0x33EE725CL}};
            int32_t l_769 = 1L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_40[i] = 0x98381653144D9913L;
            for (p_1498->g_37[0] = 0; (p_1498->g_37[0] <= 5); p_1498->g_37[0] += 1)
            { /* block id: 39 */
                int32_t **l_47[9][10][2] = {{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}},{{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17},{&p_1498->g_17,&p_1498->g_17}}};
                int32_t ***l_46 = &l_47[1][3][0];
                int16_t *l_763 = &l_382;
                uint64_t *l_764 = &l_40[3];
                uint8_t *l_767 = &p_1498->g_208;
                uint8_t *l_768 = (void*)0;
                int i, j, k;
                (1 + 1);
            }
        }
        if (l_770)
            break;
    }
    for (p_1498->g_80.f0 = (-27); (p_1498->g_80.f0 != 55); p_1498->g_80.f0 = safe_add_func_int32_t_s_s(p_1498->g_80.f0, 5))
    { /* block id: 410 */
        return (*p_33);
    }
    (*l_733) |= (**p_33);
    return (*p_1498->g_83);
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_63 p_1498->g_80.f2 p_1498->g_80.f0 p_1498->g_527 p_1498->g_531 p_1498->g_5 p_1498->g_80.f3 p_1498->g_98 p_1498->g_550 p_1498->g_37 p_1498->g_60 p_1498->g_59 p_1498->g_80 p_1498->g_116 p_1498->g_62 p_1498->g_83 p_1498->g_17 p_1498->g_635 p_1498->g_36 p_1498->g_666 p_1498->g_89 p_1498->g_380 p_1498->g_153 p_1498->g_495 p_1498->g_700
 * writes: p_1498->g_63 p_1498->g_80.f3 p_1498->g_98 p_1498->g_527 p_1498->g_211 p_1498->g_80.f0 p_1498->g_166 p_1498->g_550 p_1498->g_552 p_1498->g_59 p_1498->g_153 p_1498->g_80.f1 p_1498->g_17 p_1498->g_635 p_1498->g_380 p_1498->g_116 p_1498->g_495 p_1498->g_700
 */
int8_t  func_43(int32_t ** p_44, int32_t * p_45, struct S1 * p_1498)
{ /* block id: 281 */
    int64_t l_514 = (-8L);
    int16_t l_533[3];
    int32_t l_534 = 0x590DDAAEL;
    uint16_t l_539 = 0xD943L;
    int32_t l_582 = 0L;
    int32_t l_587 = 0L;
    int32_t l_599 = 0x5B92C3BBL;
    int32_t l_601[4][5][6] = {{{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L}},{{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L}},{{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L}},{{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L},{0L,0x04A3F98BL,0x04A3F98BL,0L,0x3093EF40L,9L}}};
    uint32_t *l_627 = &p_1498->g_164;
    uint32_t **l_626 = &l_627;
    uint32_t ***l_625 = &l_626;
    uint64_t *l_655 = &p_1498->g_552;
    uint64_t **l_654[8] = {&l_655,(void*)0,&l_655,&l_655,(void*)0,&l_655,&l_655,(void*)0};
    int32_t *l_691[10][10][2] = {{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}},{{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59},{&l_599,&p_1498->g_59}}};
    int64_t l_692 = 0L;
    uint64_t l_693[10] = {0x86B331322521A4D8L,18446744073709551615UL,0x3A0C6014D0324921L,18446744073709551615UL,0x86B331322521A4D8L,0x86B331322521A4D8L,18446744073709551615UL,0x3A0C6014D0324921L,18446744073709551615UL,0x86B331322521A4D8L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_533[i] = 0L;
    for (p_1498->g_63 = 0; (p_1498->g_63 >= (-21)); p_1498->g_63--)
    { /* block id: 284 */
        int32_t *l_515 = (void*)0;
        int32_t *l_516 = &p_1498->g_80.f3;
        int8_t *l_521 = (void*)0;
        int8_t *l_522 = &p_1498->g_98[6][1];
        int64_t *l_526 = (void*)0;
        int64_t **l_525[2];
        int32_t l_532 = 0x068F6CA4L;
        int32_t **l_553 = &p_1498->g_62;
        uint8_t l_561 = 249UL;
        int32_t l_575 = 7L;
        int32_t l_591 = 0L;
        int32_t l_593 = 0L;
        int32_t l_594 = 0x0B736A96L;
        int32_t l_600 = 0x17CF0894L;
        int32_t l_602 = 5L;
        int16_t l_690[8] = {0x5594L,0x5594L,0x5594L,0x5594L,0x5594L,0x5594L,0x5594L,0x5594L};
        int i;
        for (i = 0; i < 2; i++)
            l_525[i] = &l_526;
        (*l_516) = (p_1498->g_80.f2 >= l_514);
        l_534 ^= (safe_add_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((0x32L != ((*l_516) = ((*l_522) = l_514))), (l_532 = (((p_1498->g_80.f0 != l_514) , (safe_lshift_func_uint16_t_u_s(0UL, 2))) & (((p_1498->g_527[3] = (void*)0) == &l_514) , ((p_1498->g_211 = p_1498->g_527[1]) == ((safe_lshift_func_uint16_t_u_s((p_1498->g_531 == (void*)0), l_514)) , (void*)0))))))) != l_533[1]) ^ l_533[0]) & p_1498->g_5), 0x39C3F83477761BBEL));
        for (p_1498->g_80.f0 = 0; (p_1498->g_80.f0 <= 2); p_1498->g_80.f0 += 1)
        { /* block id: 294 */
            int32_t l_548 = 0x6AEACE87L;
            int32_t l_573 = 0x4804C6D3L;
            int32_t l_576 = 2L;
            int32_t l_580 = 0L;
            int32_t l_589 = 5L;
            int32_t l_590 = 0x6E36D7BBL;
            int32_t l_592 = 0x3E470BD7L;
            int32_t l_596 = 1L;
            int32_t **l_606 = (void*)0;
            uint32_t **l_647[7] = {&l_627,&l_627,&l_627,&l_627,&l_627,&l_627,&l_627};
            int i;
            for (p_1498->g_166 = 0; (p_1498->g_166 <= 2); p_1498->g_166 += 1)
            { /* block id: 297 */
                uint64_t *l_549 = &p_1498->g_550[0][5];
                uint64_t *l_551 = &p_1498->g_552;
                int32_t l_554 = (-2L);
                int32_t l_574 = 0x3683654FL;
                int32_t l_577 = 2L;
                int32_t l_578 = 0x3A8009EEL;
                int32_t l_579 = 0x6B557747L;
                int32_t l_584 = (-4L);
                int32_t l_588 = 0x77B8D109L;
                int32_t l_598 = (-6L);
                int32_t l_628 = 0x2B6E2707L;
                int32_t *l_630 = &l_573;
                int8_t l_646 = 0x63L;
                int i;
                if ((l_533[p_1498->g_80.f0] | ((l_554 |= (0x7F28L > (((((((*l_551) = ((safe_mul_func_uint16_t_u_u((((l_534 = ((safe_sub_func_uint16_t_u_u((l_533[p_1498->g_80.f0] & (((l_539 > (18446744073709551615UL ^ 18446744073709551612UL)) != ((-4L) & ((*l_549) |= ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((*l_516), (~((safe_sub_func_uint32_t_u_u(l_548, (*l_516))) | 0x45L)))) < l_533[p_1498->g_80.f0]) >= p_1498->g_98[9][0]), 253UL)), (*l_516))) == (*l_516))))) , l_548)), p_1498->g_80.f3)) ^ p_1498->g_37[0])) & 0UL) < l_533[p_1498->g_80.f0]), (*l_516))) & 0xF7L)) , l_553) != &p_45) && l_534) >= 0xDA9C886904FD8BC1L) , 0x18E9L))) , p_1498->g_60)))
                { /* block id: 302 */
                    uint16_t *l_556 = &l_539;
                    int32_t l_559 = (-1L);
                    int32_t l_560 = 0x06D381BDL;
                    int32_t l_581 = (-6L);
                    int32_t l_583 = 1L;
                    int32_t l_585 = 0x1F8D60D5L;
                    int32_t l_586 = 0x23D58C78L;
                    int32_t l_595 = 0x2FB21F6AL;
                    int32_t l_597 = 0x64F98132L;
                    uint16_t l_603[4];
                    uint64_t *l_644 = &p_1498->g_552;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_603[i] = 0x0D28L;
                    for (l_532 = 0; (l_532 <= 2); l_532 += 1)
                    { /* block id: 305 */
                        int32_t *l_555 = &p_1498->g_59;
                        (*l_555) &= (l_548 = ((*l_516) = l_533[p_1498->g_80.f0]));
                        l_548 = (p_1498->g_80.f2 && 1L);
                    }
                    if ((((--(*l_556)) > 0x2CFFL) != (((*l_549) = (l_559 = ((*l_516) == 0UL))) & (l_561 = (!(l_560 |= l_554))))))
                    { /* block id: 316 */
                        int32_t l_562 = 0x36CAE039L;
                        int32_t l_563 = 0x42C82492L;
                        int32_t *l_564 = &p_1498->g_59;
                        int32_t *l_565 = &l_563;
                        int32_t *l_566 = &p_1498->g_59;
                        int32_t *l_567 = &p_1498->g_80.f3;
                        int32_t *l_568 = &p_1498->g_59;
                        int32_t *l_569 = &l_563;
                        int32_t *l_570 = &p_1498->g_59;
                        int32_t *l_571 = &p_1498->g_60;
                        int32_t *l_572[9];
                        uint8_t *l_629 = &l_561;
                        uint64_t **l_645 = &l_551;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_572[i] = &p_1498->g_59;
                        if (l_562)
                            break;
                        l_603[2]++;
                        l_630 = func_48(l_606, l_539, (((*l_629) = ((((p_1498->g_80 , ((safe_sub_func_uint8_t_u_u(0UL, (((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((p_1498->g_80 , (safe_sub_func_int16_t_s_s(p_1498->g_116, ((((safe_add_func_uint64_t_u_u((++(*l_549)), l_582)) , l_625) == &p_1498->g_337) ^ (-1L))))), (**l_553))), 0x0D1604ACL)) , p_1498->g_550[0][5]), (**l_553))) >= (*l_569)) > l_581) >= (*l_565)) & l_578), 0)), p_1498->g_5)) ^ l_574) < l_628))) < 0x7FA4702BL)) && 0xBEDBB1EF15711258L) && 0x8230L) , (**l_553))) , l_596), p_1498);
                        (*l_569) |= ((safe_sub_func_int64_t_s_s(((((safe_mod_func_int32_t_s_s((p_1498->g_635 & p_1498->g_98[7][2]), 0xF8F3A324L)) == ((-1L) != (safe_div_func_uint64_t_u_u((((((*l_644) = ((safe_add_func_int16_t_s_s((l_533[p_1498->g_80.f0] = 0x0C2EL), (safe_mul_func_int16_t_s_s(p_1498->g_59, (((((safe_mul_func_uint8_t_u_u((((void*)0 == &p_45) | ((((l_583 = (((*l_645) = l_644) == l_644)) , (void*)0) == (void*)0) == l_554)), (*l_516))) <= l_514) <= 0x5DFEL) != p_1498->g_36) <= l_646))))) == (*p_1498->g_62))) , l_647[2]) != (*l_625)) , 0x2792E17735ACEC5EL), 0x1E69C34D8FA940CAL)))) == p_1498->g_37[0]) | l_514), p_1498->g_635)) == l_514);
                    }
                    else
                    { /* block id: 327 */
                        return p_1498->g_80.f2;
                    }
                    (*p_1498->g_83) = &l_534;
                }
                else
                { /* block id: 331 */
                    uint64_t l_665[2][4][3] = {{{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL}},{{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL},{0x54A7018DF323D9FFL,0x54A7018DF323D9FFL,0x54A7018DF323D9FFL}}};
                    int i, j, k;
                    for (p_1498->g_635 = 0; (p_1498->g_635 <= 2); p_1498->g_635 += 1)
                    { /* block id: 334 */
                        int32_t l_664 = 0L;
                        (*l_516) ^= (~((*l_630) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_1498->g_63, (0L < (l_654[3] != ((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(l_582, 0x44D7L)) | 255UL), ((safe_add_func_uint8_t_u_u(251UL, p_1498->g_36)) > (l_664 != l_665[1][0][2])))), p_1498->g_80.f1)) , p_1498->g_666[1][0][0]))))), p_1498->g_59))));
                        if (l_665[1][2][1])
                            continue;
                        return p_1498->g_89;
                    }
                }
            }
            for (p_1498->g_380 = 2; (p_1498->g_380 >= 0); p_1498->g_380 -= 1)
            { /* block id: 344 */
                int16_t *l_673 = (void*)0;
                int16_t *l_674 = &p_1498->g_116;
                struct S0 l_679[2] = {{18446744073709551615UL,-1L,0xDF87L,0x745726A4L},{18446744073709551615UL,-1L,0xDF87L,0x745726A4L}};
                int i;
                l_592 |= (safe_div_func_int8_t_s_s((((*l_674) ^= l_533[p_1498->g_380]) != (safe_lshift_func_uint8_t_u_s(((l_533[p_1498->g_380] <= (safe_add_func_uint32_t_u_u((l_679[0] , (**l_553)), (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_533[p_1498->g_380], p_1498->g_98[4][1])), ((void*)0 != &l_515))), ((safe_add_func_int64_t_s_s((l_690[1] = (l_573 , l_533[p_1498->g_380])), l_533[p_1498->g_380])) == 0x303092B4L))), (-1L))) < 0L) != 4294967295UL)))) >= 0x5CC6D1E8L), l_533[0]))), p_1498->g_153));
            }
        }
        if ((**l_553))
            continue;
    }
    ++l_693[1];
    if (((safe_div_func_int16_t_s_s(p_1498->g_80.f0, p_1498->g_5)) == ((*p_1498->g_62) | p_1498->g_80.f2)))
    { /* block id: 353 */
        uint8_t l_703[2][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
        int i, j;
        for (p_1498->g_495 = (-16); (p_1498->g_495 <= 49); p_1498->g_495++)
        { /* block id: 356 */
            ++p_1498->g_700;
        }
        return l_703[1][3];
    }
    else
    { /* block id: 360 */
        int16_t l_704 = 1L;
        return l_704;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_80.f3 p_1498->g_153 p_1498->g_80.f1 p_1498->g_83 p_1498->g_17
 * writes: p_1498->g_80.f3 p_1498->g_153 p_1498->g_80.f1
 */
int32_t * func_48(int32_t ** p_49, int32_t  p_50, uint32_t  p_51, struct S1 * p_1498)
{ /* block id: 202 */
    struct S0 l_383[10][8][3] = {{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}},{{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}},{{0x255149B856CDA9ECL,0x27D5AD24L,0xCC8EL,1L},{0x72A9A5BB908CFF1AL,0x10B64AF7L,0xE54AL,4L},{18446744073709551615UL,0x5A7264B7L,0xD0E5L,-1L}}}};
    int32_t l_391 = (-7L);
    int32_t l_392[1];
    int8_t *l_403[4][9] = {{&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380},{&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380},{&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380},{&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380,&p_1498->g_380,&p_1498->g_98[4][1],&p_1498->g_380}};
    int8_t **l_402 = &l_403[3][8];
    int64_t l_406 = (-1L);
    uint8_t *l_431[2];
    uint8_t **l_430 = &l_431[1];
    uint8_t ***l_429[9][9] = {{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430},{(void*)0,&l_430,(void*)0,&l_430,&l_430,(void*)0,(void*)0,&l_430,&l_430}};
    uint64_t l_439 = 0x9C004E1E4D1B6944L;
    uint16_t l_448 = 1UL;
    int64_t l_504 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_392[i] = 0x6ACAAF36L;
    for (i = 0; i < 2; i++)
        l_431[i] = (void*)0;
    for (p_1498->g_80.f3 = 1; (p_1498->g_80.f3 >= 0); p_1498->g_80.f3 -= 1)
    { /* block id: 205 */
        int8_t l_387 = 1L;
        int32_t l_389 = 0L;
        int32_t l_390 = (-1L);
        int32_t l_393 = (-6L);
        int32_t l_394 = 0x240626CDL;
        int32_t l_395 = 0x3F0B8DB4L;
        int32_t l_396 = 1L;
        int32_t l_397 = 0x4FA238ACL;
        int32_t l_398 = (-1L);
        uint8_t l_399[1][1][5];
        uint8_t *l_428[5][9] = {{(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,(void*)0,(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208},{(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,(void*)0,(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208},{(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,(void*)0,(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208},{(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,(void*)0,(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208},{(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,(void*)0,(void*)0,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208}};
        uint8_t **l_427 = &l_428[1][2];
        uint8_t ***l_426 = &l_427;
        int64_t *l_459 = (void*)0;
        int32_t *l_496 = &l_392[0];
        int32_t *l_497 = &l_389;
        int32_t *l_498 = (void*)0;
        int32_t *l_499 = (void*)0;
        int32_t *l_500 = &l_398;
        int32_t *l_501 = &p_1498->g_63;
        int32_t *l_502 = (void*)0;
        int32_t *l_503[1][7];
        int32_t l_505 = 0x6F86F55BL;
        uint8_t l_506 = 255UL;
        uint8_t l_509 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_399[i][j][k] = 1UL;
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_503[i][j] = &p_1498->g_59;
        }
        for (p_1498->g_153 = 1; (p_1498->g_153 >= 0); p_1498->g_153 -= 1)
        { /* block id: 208 */
            uint8_t ***l_384 = (void*)0;
            uint8_t **l_386[3][2];
            uint8_t ***l_385 = &l_386[1][1];
            int32_t *l_388[9][7][3] = {{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}},{{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63},{(void*)0,&p_1498->g_60,&p_1498->g_63}}};
            int8_t **l_424 = &l_403[3][7];
            int64_t l_460 = 1L;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_386[i][j] = (void*)0;
            }
            l_383[3][7][2] = l_383[3][7][2];
            (*l_385) = (void*)0;
            l_399[0][0][2]--;
            for (p_1498->g_80.f1 = 0; (p_1498->g_80.f1 <= 1); p_1498->g_80.f1 += 1)
            { /* block id: 214 */
                int16_t l_419 = 0x2878L;
                uint32_t *l_420 = (void*)0;
                uint32_t *l_421 = &p_1498->g_164;
                int8_t ***l_425 = &l_424;
                int32_t l_441 = 0x5482A337L;
                int32_t l_442 = 1L;
                int16_t *l_461 = &p_1498->g_116;
                int32_t *l_467 = (void*)0;
                int i, j, k;
                (1 + 1);
            }
        }
        l_506--;
        ++l_509;
    }
    return (*p_1498->g_83);
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_79 p_1498->g_89 p_1498->g_62 p_1498->g_5 p_1498->g_37 p_1498->g_63 p_1498->g_166 p_1498->g_116 p_1498->g_164 p_1498->g_80.f3 p_1498->g_83 p_1498->g_17 p_1498->g_80.f1 p_1498->g_80.f0 p_1498->g_380 p_1498->g_60
 * writes: p_1498->g_79 p_1498->g_89 p_1498->g_17 p_1498->g_98 p_1498->g_380 p_1498->g_80.f3
 */
int32_t ** func_52(int32_t ** p_53, int32_t *** p_54, struct S1 * p_1498)
{ /* block id: 185 */
    int32_t **l_351 = (void*)0;
    int32_t l_354 = 0x46A6A6E4L;
    int32_t l_371 = 1L;
    for (p_1498->g_79 = 0; (p_1498->g_79 < (-28)); --p_1498->g_79)
    { /* block id: 188 */
        int32_t **l_350 = &p_1498->g_62;
        int64_t l_368 = (-1L);
        uint32_t l_370 = 0x4503A5F2L;
        int8_t *l_378 = &p_1498->g_98[4][1];
        int8_t *l_379 = &p_1498->g_380;
        int32_t *l_381 = &p_1498->g_80.f3;
        for (p_1498->g_89 = 0; (p_1498->g_89 >= 60); p_1498->g_89 = safe_add_func_int64_t_s_s(p_1498->g_89, 2))
        { /* block id: 191 */
            int32_t l_359[8][8][4] = {{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}},{{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)},{0x140DA9D7L,(-9L),4L,(-9L)}}};
            int32_t l_369[9][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
            int i, j, k;
            l_371 ^= ((safe_lshift_func_uint16_t_u_u(65535UL, ((safe_add_func_int64_t_s_s((l_350 != l_351), (safe_rshift_func_uint8_t_u_u((((l_354 >= (safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(((l_359[7][7][1] ^= (**l_350)) & (!(((safe_rshift_func_int16_t_s_u(0x7B19L, ((!(((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((0x9D44FE45244A6C16L ^ 0x4D988A49D51BEF54L), (safe_add_func_int32_t_s_s(((+(p_1498->g_166 <= 0x52L)) | p_1498->g_116), l_368)))) | (**l_350)) & 0x0D6DC2FBB3DB7B4EL), p_1498->g_164)) , l_369[7][2]) > l_354)) && p_1498->g_5))) , 0xF05CFA0BL) , 0L))), l_369[7][2])) , p_1498->g_80.f3) , (**l_350)), l_369[7][2]))) == p_1498->g_37[0]) < l_370), 6)))) <= 0x51E5AF4CL))) <= p_1498->g_166);
            if ((**l_350))
                continue;
        }
        (*p_1498->g_83) = (*p_1498->g_83);
        (*l_381) = (safe_add_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s(((p_53 == l_351) != p_1498->g_80.f1), p_1498->g_80.f0)) , (0x6E7C522FL <= (safe_mul_func_int16_t_s_s(p_1498->g_80.f0, ((8L < (0x67L < ((*l_379) ^= ((*l_378) = p_1498->g_37[0])))) > p_1498->g_60))))) > (**l_350)), 0x15FB80A2L));
    }
    return l_351;
}


/* ------------------------------------------ */
/* 
 * reads : p_1498->g_59 p_1498->g_60 p_1498->g_37 p_1498->g_36 p_1498->g_63 p_1498->g_80 p_1498->g_82 p_1498->g_79 p_1498->g_98 p_1498->g_83 p_1498->g_17 p_1498->g_116 p_1498->g_5 p_1498->g_89 p_1498->g_62 p_1498->g_4 p_1498->g_153 p_1498->g_164 p_1498->g_166 p_1498->g_211 p_1498->g_216 p_1498->g_336
 * writes: p_1498->g_59 p_1498->g_60 p_1498->g_17 p_1498->g_62 p_1498->g_63 p_1498->g_79 p_1498->g_89 p_1498->g_98 p_1498->g_116 p_1498->g_80.f2 p_1498->g_153 p_1498->g_80 p_1498->g_164 p_1498->g_166 p_1498->g_208 p_1498->g_211 p_1498->g_216
 */
int32_t *** func_55(int32_t * p_56, struct S1 * p_1498)
{ /* block id: 41 */
    uint64_t l_58[3][3];
    struct S0 l_64 = {0xEE66DBAC6B9930EDL,4L,0x7B0CL,0x415C855AL};
    int32_t *l_87 = &p_1498->g_37[0];
    uint8_t *l_228 = &p_1498->g_208;
    uint32_t l_230 = 0xA3EB68EFL;
    int32_t l_235 = (-10L);
    int32_t l_241 = 0x378506ACL;
    int32_t l_242 = 0x729E9668L;
    int32_t ***l_262 = &p_1498->g_83;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_58[i][j] = 18446744073709551612UL;
    }
    for (p_1498->g_59 = 2; (p_1498->g_59 >= 0); p_1498->g_59 -= 1)
    { /* block id: 44 */
        int32_t **l_90 = &l_87;
        int32_t l_181 = 0x6744AC8FL;
        int32_t l_244 = 1L;
        int32_t l_245 = (-1L);
        uint64_t l_288 = 1UL;
        int8_t l_289 = (-9L);
        for (p_1498->g_60 = 2; (p_1498->g_60 >= 0); p_1498->g_60 -= 1)
        { /* block id: 47 */
            int32_t **l_61[2][5][4] = {{{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0}},{{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0},{&p_1498->g_17,&p_1498->g_17,&p_1498->g_17,(void*)0}}};
            struct S0 l_65 = {0UL,0x7FC8DFB1L,1UL,0x490A06BCL};
            int16_t l_118 = 0x7E74L;
            int32_t l_141 = (-1L);
            struct S0 *l_169 = (void*)0;
            uint32_t l_249 = 4294967295UL;
            int i, j, k;
            p_1498->g_62 = (p_1498->g_17 = &p_1498->g_37[0]);
            l_65 = l_64;
            if (l_58[p_1498->g_59][p_1498->g_60])
            { /* block id: 51 */
                int32_t ***l_86 = &l_61[0][0][1];
                uint32_t *l_88 = &p_1498->g_89;
                uint64_t l_119 = 1UL;
                int32_t l_120[1][1][10] = {{{0x26A1C6E9L,(-7L),0x26A1C6E9L,0x26A1C6E9L,(-7L),0x26A1C6E9L,0x26A1C6E9L,(-7L),0x26A1C6E9L,0x26A1C6E9L}}};
                struct S0 *l_139[9] = {(void*)0,&l_65,(void*)0,(void*)0,&l_65,(void*)0,(void*)0,&l_65,(void*)0};
                uint32_t l_162[8][6] = {{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL},{0UL,0x90A14B9FL,9UL,1UL,0x90A14B9FL,1UL}};
                uint32_t l_200[4][4] = {{0xB2DAAAC5L,0xE8F744D2L,0xE8F744D2L,0xB2DAAAC5L},{0xB2DAAAC5L,0xE8F744D2L,0xE8F744D2L,0xB2DAAAC5L},{0xB2DAAAC5L,0xE8F744D2L,0xE8F744D2L,0xB2DAAAC5L},{0xB2DAAAC5L,0xE8F744D2L,0xE8F744D2L,0xB2DAAAC5L}};
                int i, j, k;
                p_1498->g_63 = (1UL >= l_58[p_1498->g_60][p_1498->g_60]);
                for (l_64.f1 = 0; (l_64.f1 <= 2); l_64.f1 += 1)
                { /* block id: 55 */
                    int i, j;
                    if (l_58[p_1498->g_59][l_64.f1])
                    { /* block id: 56 */
                        int8_t *l_78 = &p_1498->g_79;
                        struct S0 *l_81 = &l_65;
                        int i, j;
                        p_1498->g_63 &= (safe_add_func_uint8_t_u_u(5UL, ((~(safe_mul_func_int16_t_s_s(((l_58[l_64.f1][l_64.f1] , (7L <= l_58[p_1498->g_60][l_64.f1])) , ((p_1498->g_62 = &p_1498->g_5) != (p_56 = &p_1498->g_59))), (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_58[p_1498->g_60][p_1498->g_59], (safe_rshift_func_int8_t_s_u(((*l_78) = (!((safe_add_func_uint16_t_u_u(0x2D4EL, l_58[l_64.f1][l_64.f1])) == p_1498->g_37[0]))), 5)))), l_58[p_1498->g_59][l_64.f1]))))) , p_1498->g_36)));
                        p_1498->g_17 = p_56;
                        (*l_81) = p_1498->g_80;
                        if ((*p_56))
                            break;
                    }
                    else
                    { /* block id: 64 */
                        p_56 = p_56;
                        return p_1498->g_82[4][1][3];
                    }
                }
                if ((((safe_mul_func_uint16_t_u_u(65526UL, (((*l_86) = &p_56) == (((void*)0 == &p_56) , (l_64.f0 , (((p_56 != l_87) | ((*l_88) = (p_1498->g_80.f0 < l_65.f0))) , l_90)))))) | 1UL) == l_58[p_1498->g_59][p_1498->g_60]))
                { /* block id: 71 */
                    int64_t l_101[9][2][2] = {{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}},{{0x26E093E1FD80D460L,1L},{0x26E093E1FD80D460L,1L}}};
                    int64_t l_140 = 0x643F028F5B55EC71L;
                    int i, j, k;
                    for (l_64.f3 = 0; (l_64.f3 <= 2); l_64.f3 += 1)
                    { /* block id: 74 */
                        int8_t *l_97 = &p_1498->g_98[4][1];
                        uint16_t *l_112 = &l_65.f2;
                        int16_t *l_115 = &p_1498->g_116;
                        int32_t l_117 = 0x68D70DECL;
                        int8_t *l_121 = &p_1498->g_79;
                        int32_t l_122 = 0x4CFF5D34L;
                        int32_t l_142 = 0x43364891L;
                        int i, j;
                        l_122 &= (safe_mul_func_int8_t_s_s((**l_90), (((*l_121) = (safe_div_func_int32_t_s_s((((**l_90) | (safe_mul_func_uint8_t_u_u(0x80L, ((*l_97) &= p_1498->g_79)))) , (l_120[0][0][3] |= (safe_mul_func_uint16_t_u_u((((*l_88) = 0UL) , l_101[4][0][1]), (safe_add_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u(((*l_112) = 1UL), ((*l_115) &= (safe_sub_func_int32_t_s_s((**p_1498->g_83), 4294967295UL))))) , (*l_87)) >= l_117) & l_118) && (**l_90)), 0x61L)), 0x0C60L)), p_1498->g_60)) && l_119) >= l_58[p_1498->g_60][p_1498->g_60]), l_101[4][0][1])))))), 0x2BF5F293L))) == p_1498->g_5)));
                        p_56 = p_56;
                        l_142 &= (safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((!((((+(safe_sub_func_uint32_t_u_u((((l_58[l_64.f3][l_64.f3] |= ((l_101[4][0][1] <= (safe_sub_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(2L, (safe_add_func_uint32_t_u_u(((*l_88) &= ((void*)0 != l_97)), (((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(((~((void*)0 != l_139[8])) <= 18446744073709551615UL), (65529UL < p_1498->g_116))), 18446744073709551609UL)) & 4L) >= l_117))))) ^ l_122) & l_140), 65535UL))) > 0L)) > p_1498->g_59) , p_1498->g_63), 0x08F32221L))) , p_1498->g_36) <= 65533UL) == l_117)), (**l_90))) <= l_141), 4));
                    }
                    l_64 = p_1498->g_80;
                }
                else
                { /* block id: 88 */
                    uint16_t *l_149 = (void*)0;
                    int64_t *l_152 = &p_1498->g_153;
                    int32_t l_163 = 0x5D69673EL;
                    (*p_1498->g_83) = l_87;
                    l_64.f3 = (safe_mul_func_uint16_t_u_u(((((p_1498->g_80.f3 , p_1498->g_37[0]) | (*p_1498->g_62)) != p_1498->g_80.f0) || ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_1498->g_80.f2--), 10)), p_1498->g_36)) < ((((((*l_152) = (~(0x03L == (**l_90)))) , &p_1498->g_83) == &p_1498->g_83) <= (*l_87)) , (*l_87)))), p_1498->g_4));
                    if ((p_1498->g_98[6][1] , ((!(p_1498->g_164 &= (safe_rshift_func_uint16_t_u_u(((((p_1498->g_153 ^ (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((((((p_1498->g_80 = l_64) , l_162[1][2]) || (+(**l_90))) < (&p_1498->g_98[4][1] != &p_1498->g_79)) , l_163) , 0xD1A5B37FL), (**l_90))) <= 1L), p_1498->g_37[0]))) > p_1498->g_36) >= (**p_1498->g_83)) , l_163), p_1498->g_98[1][0])))) , (**p_1498->g_83))))
                    { /* block id: 95 */
                        uint32_t *l_165 = &p_1498->g_166;
                        int32_t l_180 = 0x0373C028L;
                        struct S0 l_190 = {3UL,0L,0x3E2AL,0x5B44177AL};
                        uint64_t *l_193 = &l_58[p_1498->g_60][p_1498->g_60];
                        uint32_t l_198 = 0UL;
                        l_64.f3 |= ((~(((((l_139[0] == (l_169 = ((++(*l_165)) , &p_1498->g_80))) , p_56) == ((*p_1498->g_83) = l_165)) , 252UL) | p_1498->g_79)) & ((safe_add_func_uint64_t_u_u(((l_163 > (safe_add_func_uint16_t_u_u(((l_181 = (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x49L, (safe_mul_func_uint16_t_u_u(((p_1498->g_63 >= 0x9F1FL) | 0x50B9E8D0F59D7E22L), (*l_87))))), l_180))) | (**l_90)), 2UL))) , 0xC47B37152B1CF9FDL), (-4L))) , (**l_90)));
                        l_120[0][0][1] = ((**p_1498->g_83) = ((safe_sub_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*l_87), (((safe_rshift_func_int8_t_s_u((-1L), 0)) , l_190) , ((9L || 0UL) & (safe_sub_func_uint64_t_u_u(((*l_193) &= (0x74BBCF4FL <= (**l_90))), (((safe_rshift_func_int16_t_s_u((p_1498->g_80.f3 , (safe_sub_func_uint32_t_u_u((((((void*)0 != p_56) & (*l_87)) , l_163) > (**l_90)), 0x52739A24L))), p_1498->g_98[4][1])) && l_163) ^ (*l_87)))))))), 0x4BL)) & 1L) == l_198), (**l_90))) != 0L));
                        p_56 = p_56;
                    }
                    else
                    { /* block id: 105 */
                        int8_t l_199 = 1L;
                        l_199 &= 0x74803A4DL;
                        if (l_163)
                            break;
                        if (l_199)
                            break;
                        l_200[1][0]--;
                    }
                }
                if ((**l_90))
                    continue;
            }
            else
            { /* block id: 113 */
                uint8_t *l_207[2][9] = {{&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208},{&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208,&p_1498->g_208}};
                int32_t l_217 = 0x0249AFE3L;
                int8_t *l_218 = &p_1498->g_79;
                int32_t l_234 = 0x15E86104L;
                int32_t l_237 = 7L;
                int32_t l_240[1];
                int8_t l_248 = (-2L);
                int i, j;
                for (i = 0; i < 1; i++)
                    l_240[i] = 8L;
                l_181 ^= ((safe_div_func_int16_t_s_s(((safe_add_func_int16_t_s_s(p_1498->g_166, p_1498->g_98[7][1])) ^ (p_1498->g_208 = 0x2BL)), (*l_87))) >= (((*l_218) = (safe_div_func_int16_t_s_s((((**l_90) , &l_58[0][0]) != (p_1498->g_211 = ((**l_90) , p_1498->g_211))), (safe_rshift_func_uint8_t_u_s(((p_1498->g_216 = (safe_add_func_int8_t_s_s(((p_56 != (void*)0) < (**l_90)), p_1498->g_98[4][1]))) , l_217), p_1498->g_59))))) == l_217));
                (*l_90) = (void*)0;
                for (l_64.f1 = 0; (l_64.f1 == 26); ++l_64.f1)
                { /* block id: 122 */
                    uint8_t *l_229 = &p_1498->g_208;
                    int32_t l_261[1][10][10] = {{{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL},{0x1E788E5EL,0x57C7A187L,0x69CBBF9BL,0x57C7A187L,0x1E788E5EL,1L,(-1L),1L,0L,0x6F5524ACL}}};
                    int i, j, k;
                    for (l_64.f0 = 8; (l_64.f0 > 10); l_64.f0 = safe_add_func_int64_t_s_s(l_64.f0, 1))
                    { /* block id: 125 */
                        uint32_t **l_223 = (void*)0;
                        uint32_t ***l_224 = &l_223;
                        int32_t l_227[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_227[i] = 0x678DD13CL;
                        (*l_224) = l_223;
                        (*p_1498->g_83) = p_56;
                        l_217 |= (safe_lshift_func_uint16_t_u_s(p_1498->g_80.f3, l_227[1]));
                    }
                    l_230 = (l_228 != l_229);
                    for (p_1498->g_80.f0 = 0; (p_1498->g_80.f0 == 15); p_1498->g_80.f0 = safe_add_func_uint32_t_u_u(p_1498->g_80.f0, 1))
                    { /* block id: 133 */
                        int8_t l_233 = 0x6BL;
                        int32_t l_236 = 2L;
                        int32_t l_238 = 0x5D46D9FFL;
                        int32_t l_239 = 0x58DD0077L;
                        int32_t l_243 = 0x092CC2C3L;
                        int32_t l_246 = 0x11DC3B8FL;
                        int32_t l_247 = 0x5719E3CEL;
                        int16_t *l_254 = &l_118;
                        int16_t *l_255 = (void*)0;
                        int16_t *l_256 = &p_1498->g_116;
                        ++l_249;
                        l_247 &= (((*l_256) = ((*l_254) = (l_248 & (&l_90 == ((!(-1L)) , &p_1498->g_83))))) < ((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(p_1498->g_60, p_1498->g_216)) == ((p_1498->g_164 != p_1498->g_4) != l_261[0][2][9])), (-3L))) <= l_261[0][6][7]));
                        if (l_261[0][2][9])
                            break;
                    }
                    if (l_261[0][2][9])
                        continue;
                }
            }
            return l_262;
        }
        for (l_64.f3 = 0; (l_64.f3 <= 2); l_64.f3 += 1)
        { /* block id: 147 */
            int8_t *l_267 = (void*)0;
            int8_t *l_269 = (void*)0;
            int8_t **l_268 = &l_269;
            uint32_t l_280 = 0x6BB26CBDL;
            int8_t *l_290 = (void*)0;
            int8_t *l_291 = &p_1498->g_98[4][1];
            int32_t l_292 = 0x36925A8BL;
            int16_t *l_305 = &p_1498->g_116;
            int32_t ***l_310[3];
            struct S0 *l_313 = &p_1498->g_80;
            int i, j;
            for (i = 0; i < 3; i++)
                l_310[i] = &p_1498->g_83;
            l_292 ^= (((safe_add_func_uint8_t_u_u((((l_267 == ((*l_268) = l_228)) & ((((safe_div_func_int32_t_s_s(l_58[p_1498->g_59][l_64.f3], (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((*l_291) = (safe_sub_func_uint64_t_u_u((((p_1498->g_37[0] <= l_58[p_1498->g_59][l_64.f3]) , (safe_rshift_func_int16_t_s_s(((l_280 , (**l_90)) == (l_289 = (safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((**l_90), ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int64_t_s(p_1498->g_79)), l_58[p_1498->g_59][l_64.f3])) > l_288))) | l_280) && 0x1836L), l_58[p_1498->g_59][l_64.f3])))), 11))) , 0x1685A0F50867CCE0L), 1UL))), 1)) , l_58[p_1498->g_59][l_64.f3]), (**l_90))))) == 65534UL) | l_280) != l_58[p_1498->g_59][l_64.f3])) >= (**p_1498->g_83)), 0x3DL)) <= (*p_1498->g_211)) | p_1498->g_80.f1);
            if ((0x0B91969292E41388L > (!(safe_mul_func_uint8_t_u_u(((&l_288 != (void*)0) | (((*l_87) | (*p_1498->g_17)) >= ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((~(((safe_sub_func_uint32_t_u_u((((*l_305) = (-9L)) , (safe_mod_func_int16_t_s_s(p_1498->g_63, (***l_262)))), ((safe_add_func_int16_t_s_s((-1L), l_292)) , 0UL))) == 7UL) >= (*p_1498->g_211))) , l_58[p_1498->g_59][l_64.f3]), l_58[p_1498->g_59][l_64.f3])), 1UL)) <= p_1498->g_98[4][1]))), (*l_87))))))
            { /* block id: 153 */
                return l_310[0];
            }
            else
            { /* block id: 155 */
                int16_t l_311 = 0x6234L;
                for (l_235 = 0; (l_235 <= 2); l_235 += 1)
                { /* block id: 158 */
                    uint32_t l_312 = 1UL;
                    if ((*p_1498->g_62))
                        break;
                    l_312 ^= (~((p_1498->g_80.f0 > (l_311 >= p_1498->g_153)) <= 0x5E0FL));
                    if (l_312)
                        continue;
                }
            }
            (*l_313) = p_1498->g_80;
        }
    }
    for (l_230 = 0; (l_230 < 30); l_230 = safe_add_func_int32_t_s_s(l_230, 4))
    { /* block id: 169 */
        uint8_t l_323 = 255UL;
        for (p_1498->g_80.f1 = 0; (p_1498->g_80.f1 == 23); ++p_1498->g_80.f1)
        { /* block id: 172 */
            int32_t *l_318 = &l_235;
            int32_t *l_319 = &l_242;
            int32_t *l_320 = &p_1498->g_63;
            int32_t *l_321 = &l_64.f3;
            int32_t *l_322[10][1][1] = {{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}},{{&p_1498->g_80.f3}}};
            int i, j, k;
            --l_323;
        }
    }
    for (p_1498->g_80.f3 = 12; (p_1498->g_80.f3 == (-3)); p_1498->g_80.f3--)
    { /* block id: 178 */
        int16_t l_338 = 4L;
        int8_t *l_339 = (void*)0;
        int8_t *l_340 = &p_1498->g_79;
        int32_t l_341 = 0x25883090L;
        l_341 = (((safe_sub_func_int64_t_s_s((((*l_340) = (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s(3L, 12)) && ((0x11L && ((***l_262) , (***l_262))) >= ((void*)0 != p_1498->g_336))) == (*p_1498->g_211)), (*l_87))), ((l_338 | (*p_1498->g_211)) , (-1L))))) != p_1498->g_116), p_1498->g_59)) & (-1L)) && 0x24E1A288EE34ADD1L);
        if (l_338)
            continue;
    }
    return &p_1498->g_83;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1499;
    struct S1* p_1498 = &c_1499;
    struct S1 c_1500 = {
        (-1L), // p_1498->g_3
        5L, // p_1498->g_4
        0x2C40A98CL, // p_1498->g_5
        &p_1498->g_5, // p_1498->g_17
        &p_1498->g_17, // p_1498->g_16
        0x2E0AD50AL, // p_1498->g_36
        {0L}, // p_1498->g_37
        0x47EF217EL, // p_1498->g_59
        0x740323AAL, // p_1498->g_60
        0x501971A0L, // p_1498->g_63
        &p_1498->g_63, // p_1498->g_62
        0x42L, // p_1498->g_79
        {0x362DC179BD3B10D6L,0L,65529UL,-1L}, // p_1498->g_80
        &p_1498->g_17, // p_1498->g_83
        {{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}},{{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83},{&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83,&p_1498->g_83}}}, // p_1498->g_82
        0xEFA4ECE6L, // p_1498->g_89
        {{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L)}}, // p_1498->g_98
        (-2L), // p_1498->g_116
        0x535620B5F74D8AA7L, // p_1498->g_153
        0x950C9019L, // p_1498->g_164
        0x9404A225L, // p_1498->g_166
        247UL, // p_1498->g_208
        &p_1498->g_80.f0, // p_1498->g_211
        1L, // p_1498->g_216
        (void*)0, // p_1498->g_337
        &p_1498->g_337, // p_1498->g_336
        0x63L, // p_1498->g_380
        4294967295UL, // p_1498->g_495
        (-2L), // p_1498->g_528
        {&p_1498->g_528,&p_1498->g_528,&p_1498->g_528,&p_1498->g_528}, // p_1498->g_527
        (void*)0, // p_1498->g_531
        {{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL},{18446744073709551612UL,7UL,7UL,18446744073709551612UL,5UL,18446744073709551615UL,18446744073709551615UL,5UL,18446744073709551612UL,7UL}}, // p_1498->g_550
        0x3C242B6851238C0DL, // p_1498->g_552
        1UL, // p_1498->g_635
        0x829CD28B67BB0BF3L, // p_1498->g_668
        &p_1498->g_668, // p_1498->g_667
        9UL, // p_1498->g_670
        &p_1498->g_670, // p_1498->g_669
        {{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}},{{&p_1498->g_669,&p_1498->g_667,&p_1498->g_667,&p_1498->g_669}}}, // p_1498->g_666
        0xD3D72901EBB8FCE2L, // p_1498->g_700
        {0UL,0L,1UL,0x6849AB5AL}, // p_1498->g_805
        (void*)0, // p_1498->g_815
        0x217DL, // p_1498->g_864
        (void*)0, // p_1498->g_913
        0x9D9ED8C2L, // p_1498->g_934
        &p_1498->g_98[5][2], // p_1498->g_1041
        &p_1498->g_1041, // p_1498->g_1040
        (void*)0, // p_1498->g_1091
        &p_1498->g_1091, // p_1498->g_1090
        &p_1498->g_62, // p_1498->g_1138
        {{{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L},{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L},{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L}},{{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L},{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L},{0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L,0x48236AD0L}}}, // p_1498->g_1169
        0x15L, // p_1498->g_1229
        &p_1498->g_3, // p_1498->g_1237
        &p_1498->g_1237, // p_1498->g_1238
        {1UL,0x47939A18L,0UL,0x24E960C7L}, // p_1498->g_1302
        &p_1498->g_1302, // p_1498->g_1301
        0L, // p_1498->g_1329
        (-1L), // p_1498->g_1380
        0x5BL, // p_1498->g_1425
        &p_1498->g_153, // p_1498->g_1477
        {&p_1498->g_1477,&p_1498->g_1477,&p_1498->g_1477,&p_1498->g_1477}, // p_1498->g_1476
        &p_1498->g_1476[0], // p_1498->g_1475
    };
    c_1499 = c_1500;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1498);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1498->g_3, "p_1498->g_3", print_hash_value);
    transparent_crc(p_1498->g_4, "p_1498->g_4", print_hash_value);
    transparent_crc(p_1498->g_5, "p_1498->g_5", print_hash_value);
    transparent_crc(p_1498->g_36, "p_1498->g_36", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1498->g_37[i], "p_1498->g_37[i]", print_hash_value);

    }
    transparent_crc(p_1498->g_59, "p_1498->g_59", print_hash_value);
    transparent_crc(p_1498->g_60, "p_1498->g_60", print_hash_value);
    transparent_crc(p_1498->g_63, "p_1498->g_63", print_hash_value);
    transparent_crc(p_1498->g_79, "p_1498->g_79", print_hash_value);
    transparent_crc(p_1498->g_80.f0, "p_1498->g_80.f0", print_hash_value);
    transparent_crc(p_1498->g_80.f1, "p_1498->g_80.f1", print_hash_value);
    transparent_crc(p_1498->g_80.f2, "p_1498->g_80.f2", print_hash_value);
    transparent_crc(p_1498->g_80.f3, "p_1498->g_80.f3", print_hash_value);
    transparent_crc(p_1498->g_89, "p_1498->g_89", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1498->g_98[i][j], "p_1498->g_98[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1498->g_116, "p_1498->g_116", print_hash_value);
    transparent_crc(p_1498->g_153, "p_1498->g_153", print_hash_value);
    transparent_crc(p_1498->g_164, "p_1498->g_164", print_hash_value);
    transparent_crc(p_1498->g_166, "p_1498->g_166", print_hash_value);
    transparent_crc(p_1498->g_208, "p_1498->g_208", print_hash_value);
    transparent_crc(p_1498->g_216, "p_1498->g_216", print_hash_value);
    transparent_crc(p_1498->g_380, "p_1498->g_380", print_hash_value);
    transparent_crc(p_1498->g_495, "p_1498->g_495", print_hash_value);
    transparent_crc(p_1498->g_528, "p_1498->g_528", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1498->g_550[i][j], "p_1498->g_550[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1498->g_552, "p_1498->g_552", print_hash_value);
    transparent_crc(p_1498->g_635, "p_1498->g_635", print_hash_value);
    transparent_crc(p_1498->g_668, "p_1498->g_668", print_hash_value);
    transparent_crc(p_1498->g_670, "p_1498->g_670", print_hash_value);
    transparent_crc(p_1498->g_700, "p_1498->g_700", print_hash_value);
    transparent_crc(p_1498->g_805.f0, "p_1498->g_805.f0", print_hash_value);
    transparent_crc(p_1498->g_805.f1, "p_1498->g_805.f1", print_hash_value);
    transparent_crc(p_1498->g_805.f2, "p_1498->g_805.f2", print_hash_value);
    transparent_crc(p_1498->g_805.f3, "p_1498->g_805.f3", print_hash_value);
    transparent_crc(p_1498->g_864, "p_1498->g_864", print_hash_value);
    transparent_crc(p_1498->g_934, "p_1498->g_934", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1498->g_1169[i][j][k], "p_1498->g_1169[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1498->g_1229, "p_1498->g_1229", print_hash_value);
    transparent_crc(p_1498->g_1302.f0, "p_1498->g_1302.f0", print_hash_value);
    transparent_crc(p_1498->g_1302.f1, "p_1498->g_1302.f1", print_hash_value);
    transparent_crc(p_1498->g_1302.f2, "p_1498->g_1302.f2", print_hash_value);
    transparent_crc(p_1498->g_1302.f3, "p_1498->g_1302.f3", print_hash_value);
    transparent_crc(p_1498->g_1329, "p_1498->g_1329", print_hash_value);
    transparent_crc(p_1498->g_1380, "p_1498->g_1380", print_hash_value);
    transparent_crc(p_1498->g_1425, "p_1498->g_1425", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
