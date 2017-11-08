// -g 90,52,2 -l 3,26,2
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


// Seed: 749235622

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   uint32_t  f4;
};

struct S1 {
   int64_t  f0;
   int32_t  f1;
   int64_t  f2;
   int32_t  f3;
   int64_t  f4;
   uint64_t  f5;
   uint32_t  f6;
   uint64_t  f7;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_4[6][6][1];
    uint8_t g_45[7][1][4];
    int32_t g_55;
    int32_t g_56[7][8][4];
    int8_t g_64;
    uint8_t g_80;
    uint32_t g_98;
    int64_t g_100;
    int16_t g_131;
    int16_t g_133;
    int8_t g_147[7][9];
    int64_t *g_150;
    int32_t g_223;
    uint32_t g_227;
    int8_t *g_233;
    int8_t **g_232;
    uint16_t g_279;
    uint16_t g_281;
    uint16_t g_283;
    uint32_t g_291[10];
    int32_t **g_300;
    struct S1 g_350;
    volatile int16_t g_387;
    volatile int16_t g_388;
    volatile int16_t g_389;
    volatile int16_t g_390[5][9];
    volatile int16_t g_391[6];
    volatile int16_t * volatile g_386[2][9];
    volatile int16_t * volatile *g_385;
    struct S0 g_394;
    volatile int32_t g_420[8];
    volatile int32_t *g_419;
    volatile int32_t **g_418;
    uint32_t g_455;
    uint16_t g_513[1];
    int32_t *g_530[8];
    struct S0 g_562;
    int32_t g_634;
    uint64_t g_670;
    int8_t g_762;
    uint64_t g_813;
    uint16_t g_915;
    struct S0 *g_919;
    struct S0 ** volatile g_918;
    struct S0 ** volatile g_965;
    volatile int8_t g_976;
    int32_t *g_1075;
    struct S1 *g_1205[5];
    struct S1 ** volatile g_1204;
    volatile uint32_t g_1257;
    uint16_t *g_1264;
    uint16_t **g_1263;
    uint16_t *** volatile g_1262[5];
    int32_t **g_1326;
    int32_t ***g_1325[6][7];
    uint16_t g_1344;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S2 * p_1345);
int32_t * func_16(uint64_t  p_17, uint32_t  p_18, uint32_t  p_19, int64_t  p_20, struct S2 * p_1345);
uint64_t  func_25(struct S1  p_26, uint64_t  p_27, struct S2 * p_1345);
struct S1  func_28(int32_t * p_29, int8_t  p_30, struct S2 * p_1345);
struct S0  func_31(int64_t  p_32, int32_t  p_33, struct S2 * p_1345);
uint8_t  func_48(uint32_t  p_49, int8_t  p_50, int32_t * p_51, struct S2 * p_1345);
uint64_t  func_57(struct S0  p_58, uint32_t  p_59, struct S2 * p_1345);
struct S0  func_60(uint8_t  p_61, uint8_t * p_62, int32_t  p_63, struct S2 * p_1345);
uint32_t  func_65(uint8_t * p_66, uint8_t * p_67, uint32_t  p_68, int32_t * p_69, uint32_t  p_70, struct S2 * p_1345);
uint8_t * func_71(int32_t * p_72, struct S1  p_73, struct S2 * p_1345);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1345->g_4 p_1345->g_2 p_1345->g_45 p_1345->g_232 p_1345->g_233 p_1345->g_147 p_1345->g_562.f1 p_1345->g_64 p_1345->g_281 p_1345->g_131 p_1345->g_283 p_1345->g_291 p_1345->g_513 p_1345->g_670 p_1345->g_350 p_1345->g_394 p_1345->g_813 p_1345->g_562.f3 p_1345->g_915 p_1345->g_150 p_1345->g_100 p_1345->g_918 p_1345->g_279 p_1345->g_390 p_1345->g_1075 p_1345->g_388 p_1345->g_562.f0 p_1345->g_1257 p_1345->g_418 p_1345->g_419 p_1345->g_420 p_1345->g_1264 p_1345->g_562.f2 p_1345->g_1263 p_1345->g_1325 p_1345->g_919 p_1345->g_1344
 * writes: p_1345->g_45 p_1345->g_55 p_1345->g_56 p_1345->g_634 p_1345->g_283 p_1345->g_131 p_1345->g_513 p_1345->g_670 p_1345->g_350.f5 p_1345->g_350.f1 p_1345->g_915 p_1345->g_919 p_1345->g_394.f2 p_1345->g_350.f7 p_1345->g_762 p_1345->g_100 p_1345->g_562.f3 p_1345->g_98 p_1345->g_291 p_1345->g_4 p_1345->g_1257 p_1345->g_281 p_1345->g_562.f2 p_1345->g_133 p_1345->g_394.f1 p_1345->g_1325 p_1345->g_394 p_1345->g_420
 */
uint16_t  func_1(struct S2 * p_1345)
{ /* block id: 4 */
    int32_t *l_3 = &p_1345->g_4[0][5][0];
    int32_t *l_5 = &p_1345->g_4[0][5][0];
    int32_t *l_6 = &p_1345->g_4[0][5][0];
    int32_t *l_7 = &p_1345->g_4[0][5][0];
    int32_t *l_8[6] = {&p_1345->g_4[0][5][0],&p_1345->g_4[2][0][0],&p_1345->g_4[0][5][0],&p_1345->g_4[0][5][0],&p_1345->g_4[2][0][0],&p_1345->g_4[0][5][0]};
    uint32_t l_9 = 0xC30F141BL;
    uint8_t *l_44 = &p_1345->g_45[4][0][2];
    uint16_t *l_650[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_854 = &l_8[4];
    int32_t l_1343 = 0L;
    int i, j;
    l_9++;
    (*l_7) = ((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((l_7 != ((*l_854) = func_16((safe_lshift_func_int8_t_s_u(p_1345->g_4[0][5][0], p_1345->g_2)), ((safe_sub_func_uint64_t_u_u(func_25(func_28(((*l_854) = (func_31(p_1345->g_4[0][5][0], (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((p_1345->g_283 = (safe_mod_func_int8_t_s_s((p_1345->g_4[0][5][0] != ((--(*l_44)) != func_48((*l_7), p_1345->g_4[0][5][0], &p_1345->g_4[0][5][0], p_1345))), 0x54L))) || p_1345->g_281), 1)), 253UL)), (*l_6))), p_1345) , (void*)0)), (*l_5), p_1345), (*l_3), p_1345), p_1345->g_350.f4)) > (*l_3)), (*l_7), (*p_1345->g_150), p_1345))), l_1343)), p_1345->g_1344)) > p_1345->g_350.f3);
    return (*l_6);
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_918 p_1345->g_150 p_1345->g_100 p_1345->g_394.f1 p_1345->g_394.f2 p_1345->g_283 p_1345->g_291 p_1345->g_513 p_1345->g_670 p_1345->g_350 p_1345->g_394 p_1345->g_813 p_1345->g_562.f1 p_1345->g_233 p_1345->g_147 p_1345->g_562.f3 p_1345->g_131 p_1345->g_279 p_1345->g_45 p_1345->g_4 p_1345->g_232 p_1345->g_390 p_1345->g_1075 p_1345->g_388 p_1345->g_562.f0 p_1345->g_1257 p_1345->g_418 p_1345->g_419 p_1345->g_420 p_1345->g_1264 p_1345->g_562.f2 p_1345->g_1263 p_1345->g_1325 p_1345->g_64 p_1345->g_919
 * writes: p_1345->g_919 p_1345->g_394.f2 p_1345->g_131 p_1345->g_283 p_1345->g_513 p_1345->g_670 p_1345->g_350.f5 p_1345->g_350.f1 p_1345->g_45 p_1345->g_350.f7 p_1345->g_762 p_1345->g_100 p_1345->g_562.f3 p_1345->g_98 p_1345->g_291 p_1345->g_4 p_1345->g_1257 p_1345->g_281 p_1345->g_915 p_1345->g_562.f2 p_1345->g_133 p_1345->g_394.f1 p_1345->g_1325 p_1345->g_394 p_1345->g_420
 */
int32_t * func_16(uint64_t  p_17, uint32_t  p_18, uint32_t  p_19, int64_t  p_20, struct S2 * p_1345)
{ /* block id: 431 */
    int64_t l_922 = (-5L);
    struct S1 l_926 = {0x4567AE85E63DC132L,1L,-3L,0x32C7A772L,0x5286DCA343B9B4CDL,0xE62943CB1A375534L,2UL,0x217D8E097F0861A0L};
    uint32_t *l_927 = &p_1345->g_98;
    uint64_t *l_946 = &p_1345->g_350.f5;
    uint64_t **l_945[8];
    uint64_t ***l_944[1];
    int64_t l_958 = (-3L);
    int8_t l_975[7][8] = {{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L},{0x5AL,1L,0x52L,0x5AL,0x35L,0x52L,0x52L,0x35L}};
    int32_t *l_978 = (void*)0;
    uint8_t l_1035 = 1UL;
    int16_t *l_1038 = &p_1345->g_131;
    int16_t **l_1037[5][10][4] = {{{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0}},{{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0}},{{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0}},{{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0}},{{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0},{&l_1038,(void*)0,&l_1038,(void*)0}}};
    uint32_t l_1079[6] = {0x52F6D72EL,0x52F6D72EL,0x52F6D72EL,0x52F6D72EL,0x52F6D72EL,0x52F6D72EL};
    int16_t **l_1085 = &l_1038;
    int64_t **l_1202 = &p_1345->g_150;
    int32_t *l_1342[1][2];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_945[i] = &l_946;
    for (i = 0; i < 1; i++)
        l_944[i] = &l_945[3];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1342[i][j] = &l_926.f1;
    }
    (*p_1345->g_918) = &p_1345->g_394;
    if (((*p_1345->g_150) , ((safe_mul_func_int16_t_s_s(l_922, (l_922 | p_1345->g_394.f1))) < (safe_unary_minus_func_uint32_t_u(((!((safe_mul_func_uint16_t_u_u(0x6D54L, (((l_926 , (((-1L) ^ (((l_926.f6 || (((&p_1345->g_670 != (void*)0) ^ 0L) , l_926.f1)) | p_20) , p_17)) || 0x7524D1DFL)) , (void*)0) == l_927))) && p_20)) , 4294967295UL))))))
    { /* block id: 433 */
        struct S0 l_943 = {0x8932CC87L,0x1D6B4EA5L,0x5AL,0UL,0UL};
        uint8_t *l_974 = &p_1345->g_45[4][0][2];
        uint8_t **l_973 = &l_974;
        uint8_t ***l_972 = &l_973;
        int32_t *l_979 = (void*)0;
        int16_t *l_1078 = &p_1345->g_133;
        uint64_t *l_1082[6][7] = {{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0},{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0},{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0},{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0},{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0},{(void*)0,&p_1345->g_813,(void*)0,(void*)0,&p_1345->g_813,(void*)0,(void*)0}};
        struct S1 l_1115 = {1L,4L,-2L,0x5A420A87L,0x5734D4CDF9CC810DL,0xFC9EECD3556369B6L,0UL,0xF608E0847F02D052L};
        uint16_t **l_1269[1];
        int32_t **l_1324 = &l_978;
        int32_t ***l_1323 = &l_1324;
        uint8_t l_1328 = 0x0CL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1269[i] = &p_1345->g_1264;
        for (p_1345->g_394.f2 = 2; (p_1345->g_394.f2 <= 7); p_1345->g_394.f2 += 1)
        { /* block id: 436 */
            uint32_t l_929[8][10][3];
            int32_t *l_931 = &p_1345->g_350.f1;
            struct S0 l_952 = {0xC2159DA1L,-1L,247UL,0xC67E2D2DL,0x0ABEF565L};
            int32_t l_1001 = 0x7ED62572L;
            struct S1 l_1008[3] = {{-1L,-1L,3L,0x2C1B1D9DL,-6L,2UL,4294967288UL,18446744073709551615UL},{-1L,-1L,3L,0x2C1B1D9DL,-6L,2UL,4294967288UL,18446744073709551615UL},{-1L,-1L,3L,0x2C1B1D9DL,-6L,2UL,4294967288UL,18446744073709551615UL}};
            uint64_t l_1036 = 18446744073709551615UL;
            uint8_t *l_1119 = &p_1345->g_80;
            uint32_t l_1156 = 0x43B12844L;
            int64_t **l_1203 = &p_1345->g_150;
            int i, j, k;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_929[i][j][k] = 4294967295UL;
                }
            }
            (1 + 1);
        }
        for (l_1115.f7 = (-7); (l_1115.f7 >= 57); l_1115.f7 = safe_add_func_uint8_t_u_u(l_1115.f7, 7))
        { /* block id: 573 */
            uint32_t l_1213 = 4294967295UL;
            uint8_t l_1236 = 254UL;
            int8_t *l_1245[4][3][6] = {{{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0}},{{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0}},{{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0}},{{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0},{(void*)0,&p_1345->g_147[3][1],(void*)0,(void*)0,&p_1345->g_147[3][1],(void*)0}}};
            int32_t l_1250 = 0x440CF735L;
            int32_t l_1253 = 0x47413FCAL;
            int32_t l_1256 = 0x361E3AE5L;
            uint64_t l_1285 = 1UL;
            uint64_t **l_1287 = &l_946;
            struct S1 *l_1295 = &l_1115;
            struct S1 *l_1298 = &p_1345->g_350;
            int32_t ****l_1327 = &p_1345->g_1325[2][0];
            struct S0 l_1329 = {0xB7EB93EDL,0x7CB098D2L,0xB3L,0UL,9UL};
            int i, j, k;
            for (l_1115.f4 = 0; (l_1115.f4 > (-1)); l_1115.f4 = safe_sub_func_uint64_t_u_u(l_1115.f4, 7))
            { /* block id: 576 */
                int32_t *l_1233 = &p_1345->g_223;
                int32_t **l_1232 = &l_1233;
                int32_t l_1248 = (-8L);
                uint16_t *l_1261[7] = {&p_1345->g_281,&p_1345->g_281,&p_1345->g_281,&p_1345->g_281,&p_1345->g_281,&p_1345->g_281,&p_1345->g_281};
                uint16_t **l_1260 = &l_1261[3];
                int i;
                if (((safe_lshift_func_int16_t_s_s(p_17, (func_28(&p_1345->g_4[0][5][0], l_1213, p_1345) , ((safe_div_func_uint64_t_u_u((p_1345->g_670 = ((*l_946) = 9UL)), (safe_unary_minus_func_uint16_t_u(l_1213)))) >= (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_1345->g_279, (((***l_972) &= (!(safe_rshift_func_int16_t_s_s(p_19, 15)))) >= (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((p_1345->g_350.f7 ^= 0x62C1C98E1DD91C85L), 6UL)), p_19)), p_1345->g_4[0][2][0]))))), 7UL)) && (-1L)) > 0x4639L))))) || (**p_1345->g_232)))
                { /* block id: 581 */
                    uint64_t l_1268 = 4UL;
                    uint8_t *l_1286 = &p_1345->g_394.f2;
                    int32_t l_1288 = 0x5205BEA5L;
                    uint64_t *l_1294[8][2] = {{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813},{&p_1345->g_813,&p_1345->g_813}};
                    int i, j;
                    for (p_1345->g_762 = 6; (p_1345->g_762 >= 2); p_1345->g_762 -= 1)
                    { /* block id: 584 */
                        int16_t ***l_1231 = (void*)0;
                        uint32_t *l_1237 = &p_1345->g_291[0];
                        int32_t *l_1249 = &p_1345->g_4[1][5][0];
                        int32_t *l_1251 = &l_1248;
                        int32_t *l_1252 = (void*)0;
                        int32_t *l_1254 = &l_926.f1;
                        int32_t *l_1255[3];
                        uint16_t ***l_1265 = &l_1260;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1255[i] = &l_1250;
                        (*p_1345->g_1075) &= (safe_mul_func_int16_t_s_s(((l_1231 != (p_1345->g_390[4][4] , &l_1037[1][1][1])) | (l_1232 != &l_1233)), (((**l_1202) |= p_19) < (((*l_1237) = (safe_sub_func_uint32_t_u_u((((~(p_19 , (p_1345->g_562.f3 &= l_1236))) != ((*l_927) = ((void*)0 != &p_1345->g_281))) ^ 0x0A129607709773A1L), p_1345->g_513[0]))) | 0x2D66558DL))));
                        l_1248 &= ((safe_unary_minus_func_uint64_t_u(0xC713BBCD09DD8435L)) <= (((+((((safe_add_func_uint32_t_u_u(p_18, (((*l_974) = 0x1DL) && (safe_mod_func_uint32_t_u_u((((void*)0 != &p_1345->g_1205[2]) != 250UL), (safe_lshift_func_uint8_t_u_u((l_1245[3][0][3] == (void*)0), 0))))))) ^ ((safe_mod_func_int16_t_s_s(p_17, 0x435FL)) & 8UL)) <= p_1345->g_388) & p_1345->g_562.f0)) <= p_17) != (-6L)));
                        p_1345->g_1257++;
                        (*l_1265) = l_1260;
                    }
                    (*p_1345->g_1075) &= (l_1268 <= ((l_1269[0] != (void*)0) < (**p_1345->g_418)));
                    l_1288 = ((*p_1345->g_1075) = (p_1345->g_291[5] <= (((*l_1078) = (safe_add_func_int32_t_s_s(((l_1268 < (!((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((p_1345->g_562.f2 |= ((safe_add_func_uint32_t_u_u(((p_17 || ((*p_1345->g_1264) >= (safe_mul_func_uint8_t_u_u(((*l_1286) = ((*l_974) ^= (safe_mul_func_uint16_t_u_u((l_1285 = (safe_rshift_func_int16_t_s_s(p_18, 13))), ((**l_1260) = l_1248))))), (l_1233 != &l_1079[3]))))) < ((((!((void*)0 == l_1287)) ^ 0xCBC463DCDBEAB37DL) != p_18) | p_1345->g_670)), 0x07722C0FL)) , 0UL)))), 0x18L)) || 0x4DA124F5125BC3D4L))) & (-1L)), 0x8CBBC92CL))) && 65535UL)));
                    for (p_1345->g_394.f1 = (-13); (p_1345->g_394.f1 != 19); ++p_1345->g_394.f1)
                    { /* block id: 606 */
                        uint64_t **l_1293 = &l_1082[0][6];
                        if (l_1248)
                            break;
                        (*p_1345->g_1075) = 0L;
                        if (p_17)
                            break;
                        (*p_1345->g_1075) = (p_17 || (safe_rshift_func_int16_t_s_u((((*l_1293) = (void*)0) != l_1294[0][0]), l_1253)));
                    }
                }
                else
                { /* block id: 613 */
                    struct S1 **l_1296 = &l_1295;
                    struct S1 **l_1297[10][2] = {{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]},{(void*)0,&p_1345->g_1205[2]}};
                    int i, j;
                    l_1298 = ((*l_1296) = l_1295);
                }
            }
            l_926.f1 |= (((*p_1345->g_150) |= ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((((l_1256 = ((**p_1345->g_1263)++)) && (safe_sub_func_int16_t_s_s((((*p_1345->g_919) = (l_1329 = func_31(((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((0x8B8FL || (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_1213 , 0xB89BL), 0)), (**p_1345->g_232)))) < (l_1323 != ((*l_1327) = p_1345->g_1325[2][0]))), ((((+((*l_1078) = (p_19 > (((*p_1345->g_1075) ^= p_19) , p_1345->g_64)))) & p_17) >= (-6L)) , 255UL))), 6)) , (**p_1345->g_232)), l_1328)), p_19)), 0xFEB3L)) , p_17), p_1345->g_390[4][4], p_1345))) , 0x6A23L), 0x5118L))) , p_19) < 0x34C56577L) , p_20), 4)), 1L)), 0xAEL)) != p_20)) & p_20);
        }
    }
    else
    { /* block id: 628 */
        uint64_t l_1330 = 0xFFBF5A5CE5DF3B3CL;
        int32_t l_1331[7][6][4] = {{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}},{{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)},{(-1L),0x555BDAEFL,8L,(-9L)}}};
        int i, j, k;
        l_1331[3][4][0] &= l_1330;
        (**p_1345->g_418) ^= ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_1331[3][4][0], ((safe_lshift_func_int8_t_s_s(((p_1345->g_45[4][0][2] = (&p_1345->g_418 == (void*)0)) != (0x3F75CFC9L > (((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(l_1331[6][3][3], (l_1331[3][4][0] == ((p_18 == ((void*)0 == (*l_1202))) && 0UL)))), 0x1FBC2A0CL)) ^ p_20) != (**p_1345->g_1263)))), (**p_1345->g_232))) | p_18))), (**p_1345->g_1263))) >= 65527UL);
    }
    return l_927;
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_915
 * writes: p_1345->g_915
 */
uint64_t  func_25(struct S1  p_26, uint64_t  p_27, struct S2 * p_1345)
{ /* block id: 428 */
    int16_t l_906 = (-1L);
    int32_t *l_907 = &p_1345->g_56[6][1][2];
    int32_t *l_908 = &p_1345->g_55;
    int32_t *l_909 = &p_1345->g_562.f1;
    int32_t *l_910 = &p_1345->g_394.f1;
    int32_t *l_911 = &p_1345->g_394.f1;
    int32_t *l_912 = &p_1345->g_350.f1;
    int32_t *l_913[7] = {&p_1345->g_350.f1,&p_1345->g_350.f1,&p_1345->g_350.f1,&p_1345->g_350.f1,&p_1345->g_350.f1,&p_1345->g_350.f1,&p_1345->g_350.f1};
    int32_t l_914 = (-1L);
    int i;
    --p_1345->g_915;
    return p_1345->g_915;
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_131 p_1345->g_283 p_1345->g_291 p_1345->g_513 p_1345->g_670 p_1345->g_350 p_1345->g_394 p_1345->g_813 p_1345->g_562.f1 p_1345->g_233 p_1345->g_147 p_1345->g_562.f3
 * writes: p_1345->g_131 p_1345->g_283 p_1345->g_513 p_1345->g_670 p_1345->g_350.f5 p_1345->g_350.f1
 */
struct S1  func_28(int32_t * p_29, int8_t  p_30, struct S2 * p_1345)
{ /* block id: 410 */
    uint64_t l_865 = 1UL;
    int32_t *l_882 = &p_1345->g_223;
    int32_t **l_881 = &l_882;
    int32_t l_885 = 0x479A5540L;
    struct S1 l_905 = {0x4295E20349757390L,9L,0x089B8837E6395566L,0x7AE24EAFL,0L,0xAB2DEF025E93E02DL,0xB38A5280L,0xE31C6DE94FB796CCL};
    for (p_1345->g_131 = 0; (p_1345->g_131 < (-3)); p_1345->g_131 = safe_sub_func_uint16_t_u_u(p_1345->g_131, 1))
    { /* block id: 413 */
        int32_t *l_857 = &p_1345->g_56[3][3][0];
        int32_t *l_858 = &p_1345->g_56[1][5][3];
        int32_t *l_859 = (void*)0;
        int32_t *l_860 = (void*)0;
        int32_t *l_861 = &p_1345->g_394.f1;
        int32_t *l_862 = &p_1345->g_562.f1;
        int32_t *l_863 = &p_1345->g_55;
        int32_t *l_864[6] = {(void*)0,&p_1345->g_350.f1,(void*)0,(void*)0,&p_1345->g_350.f1,(void*)0};
        int i;
        l_865++;
    }
    for (p_1345->g_283 = 0; (p_1345->g_283 <= 9); p_1345->g_283 += 1)
    { /* block id: 418 */
        uint16_t *l_871[8] = {&p_1345->g_279,&p_1345->g_279,&p_1345->g_279,&p_1345->g_279,&p_1345->g_279,&p_1345->g_279,&p_1345->g_279,&p_1345->g_279};
        int32_t *l_880 = (void*)0;
        int32_t **l_879 = &l_880;
        uint32_t l_890 = 1UL;
        int32_t l_895 = 0x2FCB64A9L;
        uint64_t *l_902 = (void*)0;
        uint64_t *l_903 = &p_1345->g_350.f5;
        int32_t *l_904 = &p_1345->g_350.f1;
        int i;
        if (p_1345->g_291[p_1345->g_283])
            break;
        (*l_904) = (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s(((1UL == (++p_1345->g_513[0])) && (((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((!(safe_unary_minus_func_int8_t_s((((!p_1345->g_291[p_1345->g_283]) == 0L) == ((l_879 == (l_881 = l_881)) | (safe_lshift_func_uint16_t_u_s((((*l_903) = ((((l_885 & (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((l_895 = (l_890 == ((++p_1345->g_670) != (safe_lshift_func_int16_t_s_u(p_30, 0))))) | (safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((p_1345->g_350 , p_1345->g_394) , 0x333D05B1L) | 0xE480DC53L), 2)), p_1345->g_350.f7)) > p_30) , p_1345->g_813), 5))) <= l_885), 1UL)) | l_885), p_30))) < 0x846CL) == p_1345->g_291[p_1345->g_283]) != 0x79L)) <= 0x6FD5CDD52A357116L), p_1345->g_562.f1))))))) || p_1345->g_291[p_1345->g_283]), (*p_1345->g_233))) , p_30) != l_865), p_1345->g_562.f3)) | p_30) && l_865)))) , 0x69BDL), p_1345->g_131));
    }
    return l_905;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0  func_31(int64_t  p_32, int32_t  p_33, struct S2 * p_1345)
{ /* block id: 268 */
    int32_t l_661 = 5L;
    int32_t **l_667 = &p_1345->g_530[1];
    int32_t ***l_666 = &l_667;
    uint8_t *l_668 = &p_1345->g_45[1][0][0];
    uint64_t *l_669[4][7] = {{&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f7,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5},{&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f7,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5},{&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f7,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5},{&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f7,&p_1345->g_350.f5,&p_1345->g_350.f5,&p_1345->g_350.f5}};
    struct S0 l_674 = {1UL,0x41A88C36L,252UL,4294967290UL,0xECA3186EL};
    int32_t ***l_684 = &p_1345->g_300;
    int32_t l_696 = (-7L);
    int32_t l_697 = 1L;
    int32_t l_698 = 2L;
    int32_t l_699 = 0x46DDE80BL;
    int32_t l_700 = 0x0C5209F2L;
    int32_t l_701 = 0L;
    int32_t l_702 = 5L;
    int32_t l_703 = 1L;
    int32_t l_704[9][5][5] = {{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}},{{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L},{0x27AE09DAL,(-8L),0x6D29FA6FL,0L,0x09250CA7L}}};
    uint16_t l_705 = 7UL;
    struct S1 l_710 = {0x25F8423E39490ED9L,0x52E18538L,-10L,0x5FDFC70BL,0x2305B46E79D128A5L,1UL,0UL,18446744073709551615UL};
    int16_t *l_727 = &p_1345->g_131;
    int32_t *l_728 = &l_704[8][4][2];
    int16_t **l_757[5][8][6] = {{{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0}},{{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0}},{{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0}},{{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0}},{{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0},{&l_727,&l_727,(void*)0,&l_727,&l_727,(void*)0}}};
    int32_t l_814 = 0x49372B96L;
    struct S0 l_853 = {0UL,-8L,0x45L,0x031194E1L,0x6C10AF88L};
    int i, j, k;
    return l_853;
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_232 p_1345->g_233 p_1345->g_147 p_1345->g_562.f1 p_1345->g_64 p_1345->g_4
 * writes: p_1345->g_55 p_1345->g_56 p_1345->g_634
 */
uint8_t  func_48(uint32_t  p_49, int8_t  p_50, int32_t * p_51, struct S2 * p_1345)
{ /* block id: 7 */
    int32_t l_87 = 0L;
    uint16_t l_95 = 0x4422L;
    int32_t l_467 = 0L;
    struct S1 l_470[5][1] = {{{5L,1L,-3L,1L,6L,18446744073709551615UL,0xE2A6DAEBL,0UL}},{{5L,1L,-3L,1L,6L,18446744073709551615UL,0xE2A6DAEBL,0UL}},{{5L,1L,-3L,1L,6L,18446744073709551615UL,0xE2A6DAEBL,0UL}},{{5L,1L,-3L,1L,6L,18446744073709551615UL,0xE2A6DAEBL,0UL}},{{5L,1L,-3L,1L,6L,18446744073709551615UL,0xE2A6DAEBL,0UL}}};
    int32_t *l_472 = &p_1345->g_223;
    uint64_t l_494 = 0xF9047A34AC26EF13L;
    struct S0 l_524 = {0x162D3755L,-3L,0xD8L,4294967295UL,0x552297DFL};
    int32_t l_588 = 0x4F58B35EL;
    int32_t l_589 = 0x22DEDAF4L;
    int32_t l_594 = 0x0699B4A5L;
    int32_t l_595[9][4][5] = {{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}},{{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L},{0x46D5632EL,1L,(-3L),(-1L),0x2526BA02L}}};
    uint64_t l_620[10][1][1] = {{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}},{{18446744073709551613UL}}};
    int16_t l_632 = (-3L);
    int32_t *l_633 = (void*)0;
    int16_t *l_637 = &p_1345->g_133;
    int16_t **l_636 = &l_637;
    int16_t ***l_635 = &l_636;
    int16_t ***l_648 = &l_636;
    int8_t *l_649[8] = {&p_1345->g_147[4][1],&p_1345->g_64,&p_1345->g_147[4][1],&p_1345->g_147[4][1],&p_1345->g_64,&p_1345->g_147[4][1],&p_1345->g_147[4][1],&p_1345->g_64};
    int i, j, k;
    for (p_50 = 10; (p_50 > 9); p_50--)
    { /* block id: 10 */
        int64_t l_54[2][4][8] = {{{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)}},{{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)},{(-1L),(-1L),0x0E11B1975C8F0ABFL,0x17EF0591FCF288C1L,(-8L),0x17EF0591FCF288C1L,0x0E11B1975C8F0ABFL,(-1L)}}};
        struct S1 l_74 = {0x699D52E2DA10ACF0L,0x4141FE13L,4L,0L,0x1DDE94EDE484D602L,0UL,0xD53066D2L,1UL};
        uint8_t *l_82 = &p_1345->g_80;
        uint8_t **l_81 = &l_82;
        int64_t *l_94 = &l_54[1][1][0];
        int32_t *l_96 = &p_1345->g_55;
        uint32_t *l_97 = &p_1345->g_98;
        int64_t *l_99 = &p_1345->g_100;
        int32_t l_458 = 1L;
        int16_t *l_465 = (void*)0;
        uint32_t l_468 = 0xEBFDBB4EL;
        int8_t *l_483 = &p_1345->g_147[3][5];
        int32_t l_511 = 0x2510B996L;
        int32_t l_590 = 0L;
        int32_t l_592 = 0x48EF4763L;
        int32_t l_593 = 0x6F8C0377L;
        int32_t l_597[7] = {0x50863AA6L,(-9L),0x50863AA6L,0x50863AA6L,(-9L),0x50863AA6L,0x50863AA6L};
        int i, j, k;
        for (p_49 = 0; p_49 < 2; p_49 += 1)
        {
            for (p_1345->g_55 = 0; p_1345->g_55 < 4; p_1345->g_55 += 1)
            {
                for (p_1345->g_56[3][3][0] = 0; p_1345->g_56[3][3][0] < 8; p_1345->g_56[3][3][0] += 1)
                {
                    l_54[p_49][p_1345->g_55][p_1345->g_56[3][3][0]] = 0L;
                }
            }
        }
    }
    l_589 = (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((p_1345->g_634 = l_632) | (((((l_635 == &p_1345->g_385) & (safe_mul_func_int8_t_s_s((**p_1345->g_232), (p_50 = (safe_rshift_func_int16_t_s_s(((((p_1345->g_562.f1 | ((safe_add_func_int8_t_s_s((-1L), (safe_sub_func_uint64_t_u_u((((void*)0 == &p_1345->g_350) >= (l_648 != (void*)0)), 0x30D9149116C99761L)))) == p_49)) , p_51) != p_51) ^ p_50), p_1345->g_64)))))) , (void*)0) == &p_1345->g_350) , (*p_51))), (*p_51))) | p_49), 0xCEL)) == 0x53L), 0x373B7E47L));
    return p_1345->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_64 p_1345->g_55 p_1345->g_4 p_1345->g_100 p_1345->g_56 p_1345->g_150 p_1345->g_133 p_1345->g_80 p_1345->g_98 p_1345->g_147 p_1345->g_279 p_1345->g_232 p_1345->g_233 p_1345->g_227 p_1345->g_131 p_1345->g_300 p_1345->g_291 p_1345->g_281 p_1345->g_283 p_1345->g_350 p_1345->g_223 p_1345->g_385 p_1345->g_394 p_1345->g_418 p_1345->g_419 p_1345->g_455
 * writes: p_1345->g_64 p_1345->g_147 p_1345->g_150 p_1345->g_56 p_1345->g_55 p_1345->g_100 p_1345->g_80 p_1345->g_98 p_1345->g_223 p_1345->g_227 p_1345->g_232 p_1345->g_133 p_1345->g_279 p_1345->g_281 p_1345->g_283 p_1345->g_131 p_1345->g_291 p_1345->g_300 p_1345->g_350.f1 p_1345->g_385 p_1345->g_419 p_1345->g_394 p_1345->g_350.f7
 */
uint64_t  func_57(struct S0  p_58, uint32_t  p_59, struct S2 * p_1345)
{ /* block id: 36 */
    int8_t *l_148 = &p_1345->g_147[0][7];
    int64_t *l_149[1][4] = {{&p_1345->g_100,&p_1345->g_100,&p_1345->g_100,&p_1345->g_100}};
    int32_t l_151 = 0L;
    int32_t *l_157 = &p_1345->g_4[0][5][0];
    int32_t **l_156 = &l_157;
    int16_t *l_180 = &p_1345->g_133;
    uint32_t l_183[5] = {0UL,0UL,0UL,0UL,0UL};
    uint64_t l_189 = 18446744073709551606UL;
    int32_t l_243[10] = {0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL,0x2368572FL};
    int16_t l_289 = 0x6D85L;
    struct S0 l_395 = {0x4C716A9CL,0x64597391L,3UL,0xF5472CE7L,0x3B011D3AL};
    int32_t l_429 = 0x40F3624FL;
    uint32_t *l_449 = (void*)0;
    int i, j;
    for (p_1345->g_64 = 0; (p_1345->g_64 >= 18); ++p_1345->g_64)
    { /* block id: 39 */
        uint32_t *l_144 = &p_1345->g_98;
        int8_t *l_145 = (void*)0;
        int8_t *l_146 = &p_1345->g_147[4][1];
        int32_t *l_152 = &p_1345->g_56[3][3][0];
        int32_t *l_153 = &p_1345->g_55;
        l_151 = ((*l_153) ^= ((*l_152) = (((((safe_add_func_int8_t_s_s(((*l_146) = (l_144 != (void*)0)), (&p_1345->g_131 != &p_1345->g_133))) && (&p_1345->g_64 == l_148)) ^ ((p_1345->g_150 = ((&p_1345->g_98 != (void*)0) , l_149[0][1])) == l_149[0][1])) , l_151) > l_151)));
    }
    if ((safe_mul_func_uint8_t_u_u(((((*l_156) = &l_151) == ((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x3942L, (safe_sub_func_uint8_t_u_u(p_1345->g_4[3][0][0], p_1345->g_100)))), p_1345->g_4[0][5][0])), ((safe_sub_func_uint16_t_u_u(0xAC02L, (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((l_180 != (void*)0), ((((safe_add_func_uint16_t_u_u(p_59, l_183[3])) || p_1345->g_56[5][2][1]) && p_1345->g_4[0][5][0]) <= p_58.f1))), (*p_1345->g_150))) && 0x012672E0L), 3)))) && p_59))), p_59)), l_183[2])), p_1345->g_4[0][5][0])) , &p_1345->g_56[3][3][0])) < p_1345->g_4[0][5][0]), p_59)))
    { /* block id: 47 */
        struct S1 l_188 = {0x4A2C02139C095ABAL,-6L,-5L,8L,0L,18446744073709551606UL,4294967295UL,0x03A3FB9E2A97B3EBL};
        int32_t **l_238 = &l_157;
        int32_t l_244 = 0x55551144L;
        int32_t l_245 = 0x6E37B53CL;
        int32_t l_246 = 3L;
        int32_t l_247 = 0L;
        int32_t l_248 = 1L;
        int32_t l_249[5][6][3] = {{{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L}},{{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L}},{{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L}},{{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L}},{{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L},{0x2A27FE94L,0x7FCAE45BL,0L}}};
        uint8_t l_250 = 1UL;
        int8_t *l_299 = (void*)0;
        int8_t l_310 = (-9L);
        int32_t *l_426 = &p_1345->g_223;
        uint16_t l_439 = 0xB3EDL;
        uint8_t *l_450 = &p_1345->g_80;
        int i, j, k;
        if ((safe_div_func_int32_t_s_s((((p_58.f0 < ((((*p_1345->g_150) ^= ((((l_188 , p_58.f2) , (*l_157)) , (((l_189 != (safe_div_func_int16_t_s_s((((safe_add_func_int8_t_s_s(6L, (-1L))) , l_149[0][1]) == (p_58.f4 , (void*)0)), p_58.f0))) != p_58.f2) > l_188.f6)) && p_58.f4)) < p_58.f4) != p_1345->g_133)) > p_58.f1) <= p_58.f0), 0x62452FD6L)))
        { /* block id: 49 */
            int16_t *l_198[4] = {&p_1345->g_131,&p_1345->g_131,&p_1345->g_131,&p_1345->g_131};
            int32_t l_219 = 0x19BA9801L;
            int32_t l_228 = 0x4215F252L;
            int64_t l_230 = 0x6954FF364518C668L;
            int32_t *l_241 = &p_1345->g_55;
            int32_t *l_242[1];
            int32_t **l_302 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_242[i] = &l_151;
            for (p_1345->g_80 = 0; (p_1345->g_80 != 13); ++p_1345->g_80)
            { /* block id: 52 */
                int16_t l_218 = 0x254CL;
                int8_t **l_231[7] = {&l_148,&l_148,&l_148,&l_148,&l_148,&l_148,&l_148};
                struct S0 l_235 = {4294967288UL,0x07B6B27BL,0UL,0x3E28ED99L,0x6EB53D80L};
                int32_t *l_237 = &p_1345->g_55;
                int32_t ***l_239 = (void*)0;
                int32_t ***l_240 = &l_238;
                int i;
                (*l_156) = (void*)0;
                for (p_1345->g_98 = 0; (p_1345->g_98 == 56); p_1345->g_98++)
                { /* block id: 56 */
                    uint16_t *l_217[3];
                    int32_t *l_220 = &p_1345->g_55;
                    int32_t *l_221 = (void*)0;
                    int32_t *l_222 = &p_1345->g_223;
                    int32_t *l_224 = &l_188.f1;
                    uint32_t *l_226 = &p_1345->g_227;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_217[i] = (void*)0;
                    if ((l_198[1] == (((safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((l_188.f1 = (safe_mul_func_uint16_t_u_u((~(((safe_rshift_func_uint16_t_u_u((l_218 |= l_188.f5), 12)) , (((*l_220) |= (p_58 , (l_219 = p_58.f4))) , ((*l_222) = (1UL == p_1345->g_98)))) , 0xC39EL)), (((l_224 != ((safe_unary_minus_func_uint32_t_u(((*l_226) = ((p_58.f1 && p_1345->g_64) || 7UL)))) , (void*)0)) , (*p_1345->g_150)) || (*p_1345->g_150))))) <= p_59), 1UL)), 255UL)), p_1345->g_4[0][4][0])), 0x3EL)), l_228)), 1L)) <= 0x666CL) | p_58.f3), 0x3A27L)) < p_58.f2) , l_180)))
                    { /* block id: 63 */
                        int32_t *l_229[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_229[i] = (void*)0;
                        (*l_156) = l_229[1];
                        (*l_224) = (!(l_218 , l_230));
                        p_1345->g_232 = l_231[0];
                    }
                    else
                    { /* block id: 67 */
                        int32_t *l_234 = &p_1345->g_4[4][2][0];
                        struct S0 *l_236 = &l_235;
                        (*l_156) = l_234;
                        (*l_236) = l_235;
                    }
                    (*l_220) = (*l_220);
                    (*l_156) = l_237;
                }
                if (p_58.f4)
                    continue;
                (*l_240) = l_238;
            }
            --l_250;
            for (l_188.f1 = 0; (l_188.f1 <= 3); l_188.f1 += 1)
            { /* block id: 80 */
                uint8_t *l_263 = &l_250;
                uint16_t *l_278 = &p_1345->g_279;
                uint16_t *l_280 = &p_1345->g_281;
                uint16_t *l_282 = &p_1345->g_283;
                int32_t l_284 = 0x30A00E1AL;
                uint32_t *l_285 = &p_1345->g_98;
                uint32_t *l_286 = (void*)0;
                uint32_t *l_287[1];
                int8_t *l_288 = (void*)0;
                uint64_t *l_290 = &l_188.f7;
                int i;
                for (i = 0; i < 1; i++)
                    l_287[i] = (void*)0;
                (*l_238) = (*l_238);
                l_284 = (p_58.f1 = ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u((p_1345->g_291[4] = ((*l_290) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((l_289 = (((p_58.f2 < (p_58.f3 = ((*l_285) = (((~(l_243[0] = ((*l_241) = (!(safe_mul_func_uint8_t_u_u(((*l_263) = p_58.f0), p_1345->g_147[3][8])))))) && ((safe_mul_func_int8_t_s_s((l_198[l_188.f1] == l_198[l_188.f1]), ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((p_1345->g_131 = (((*l_282) = ((*l_280) = (safe_lshift_func_uint16_t_u_u(((((**p_1345->g_232) = (p_58.f2 | (((*l_180) = p_58.f0) & ((*l_278) &= (safe_add_func_int8_t_s_s(p_59, ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(((p_1345->g_98 != (-1L)) > 4L), p_58.f4)) == l_188.f4) >= p_58.f1), 0x6527L)) & p_58.f1))))))) | p_58.f2) >= 6L), p_1345->g_80)))) >= p_1345->g_100)), p_1345->g_4[0][5][0])) | p_58.f3), l_284)) >= p_58.f4))) && 0xF50DFC92L)) != p_1345->g_4[0][4][0])))) < p_59) < p_59)) < p_58.f1), p_1345->g_80)), p_58.f1)))), p_1345->g_227)) > 0x207CL), 0)) || p_1345->g_56[2][3][3]));
                if (p_1345->g_80)
                    break;
                for (l_219 = 0; (l_219 <= 3); l_219 += 1)
                { /* block id: 101 */
                    (*l_241) = (-1L);
                    for (l_230 = 3; (l_230 >= 0); l_230 -= 1)
                    { /* block id: 105 */
                        int i, j, k;
                        return p_1345->g_56[(l_188.f1 + 1)][(l_188.f1 + 4)][l_230];
                    }
                }
            }
            for (p_1345->g_227 = (-5); (p_1345->g_227 != 28); p_1345->g_227 = safe_add_func_int32_t_s_s(p_1345->g_227, 1))
            { /* block id: 112 */
                struct S0 l_294 = {5UL,0L,250UL,0x60B660F0L,0xE5636584L};
                int32_t ***l_301[7];
                uint64_t *l_309 = &l_188.f5;
                int i;
                for (i = 0; i < 7; i++)
                    l_301[i] = (void*)0;
                p_58.f1 = (l_294 , ((*p_1345->g_232) != (((p_58.f4 < ((((*l_241) ^= (*p_1345->g_150)) && (p_59 , (((((void*)0 == l_242[0]) && ((safe_rshift_func_uint8_t_u_u((~(((&p_1345->g_131 != &l_289) || 0L) | 0x59BCL)), 1)) ^ p_1345->g_131)) <= (*l_241)) != 0xF74116E09BA2750BL))) == p_58.f1)) | 0x309AL) , l_299)));
                p_1345->g_300 = (l_302 = p_1345->g_300);
                p_58.f1 = (safe_rshift_func_int8_t_s_u(l_294.f3, (1L < p_1345->g_291[4])));
                (*l_241) &= (!((p_58.f1 >= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(((p_58.f2 != p_58.f2) & (l_309 != p_1345->g_150)), 0xED8817E3L)), 10))) == (((~(p_1345->g_281 | (l_310 , ((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(6L, p_59)), p_58.f4)) == p_1345->g_283)))) <= p_1345->g_100) , p_58.f0)));
            }
        }
        else
        { /* block id: 120 */
            int32_t l_335 = 0x2FE1B883L;
            int32_t **l_384 = (void*)0;
            uint32_t l_428 = 0UL;
            int32_t l_434 = (-1L);
            int32_t l_438[10][9][2] = {{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}},{{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L},{(-1L),0x36401061L}}};
            int i, j, k;
            for (p_1345->g_80 = 0; (p_1345->g_80 != 48); p_1345->g_80 = safe_add_func_uint32_t_u_u(p_1345->g_80, 9))
            { /* block id: 123 */
                uint8_t l_319 = 249UL;
                uint64_t *l_334 = &l_188.f7;
                uint8_t *l_336 = &l_250;
                p_1345->g_55 ^= (((*l_336) &= ((p_1345->g_4[0][5][0] <= ((((safe_lshift_func_uint16_t_u_s((l_319 , ((p_58.f4 >= (safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(p_58.f0, (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((p_58.f3 = ((safe_mul_func_int16_t_s_s((((*p_1345->g_233) ^= (p_58.f2 <= (((safe_mod_func_uint16_t_u_u((((*l_334) = p_59) || (p_1345->g_56[5][4][3] ^ 1UL)), 0xC77EL)) != p_58.f3) | 0x2CL))) > (**l_238)), p_1345->g_291[4])) & p_58.f3)), (-3L))) > (*p_1345->g_150)) != 0xF8E7BD97CFE254EAL), (**l_238))), 0x1CL)))) < p_59), l_335))) , p_58.f0)), 7)) >= 1L) ^ (-1L)) , p_58.f3)) , p_1345->g_227)) & 0x16L);
                for (p_58.f3 = (-13); (p_58.f3 != 32); ++p_58.f3)
                { /* block id: 131 */
                    for (p_1345->g_133 = 9; (p_1345->g_133 >= 2); p_1345->g_133 -= 1)
                    { /* block id: 134 */
                        int i;
                        if (p_1345->g_291[p_1345->g_133])
                            break;
                        return l_335;
                    }
                    for (l_188.f4 = (-12); (l_188.f4 > 13); l_188.f4++)
                    { /* block id: 140 */
                        if (p_58.f3)
                            break;
                        (*l_238) = &l_335;
                    }
                    p_1345->g_56[3][3][0] |= (((*p_1345->g_233) = (p_58.f1 > (*l_157))) & p_58.f1);
                    for (l_151 = (-26); (l_151 < 22); l_151 = safe_add_func_int32_t_s_s(l_151, 6))
                    { /* block id: 148 */
                        uint32_t *l_347[3][4] = {{&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4]},{&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4]},{&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4],&p_1345->g_291[4]}};
                        uint16_t *l_348 = &p_1345->g_279;
                        uint16_t *l_349 = &p_1345->g_283;
                        int32_t l_352 = 0L;
                        uint64_t l_353 = 18446744073709551615UL;
                        int i, j;
                        l_353 = ((((((safe_add_func_uint16_t_u_u((p_1345->g_4[0][5][0] , (safe_mod_func_int32_t_s_s((((p_1345->g_291[4] = 0UL) && ((-3L) <= ((*l_349) ^= ((*l_348) &= p_58.f2)))) > ((0x6C44L ^ (((p_1345->g_350 , (((void*)0 == &l_299) == (((safe_unary_minus_func_uint32_t_u(((void*)0 != l_334))) || p_58.f2) & (**p_1345->g_232)))) <= 0x88BAL) & l_352)) >= p_59)), p_58.f0))), 0x3C5FL)) && p_58.f2) & 0x208DL) && p_1345->g_350.f7) < p_1345->g_223) ^ p_1345->g_131);
                    }
                }
            }
            for (p_1345->g_55 = 0; (p_1345->g_55 >= (-6)); p_1345->g_55 = safe_sub_func_int16_t_s_s(p_1345->g_55, 1))
            { /* block id: 158 */
                uint8_t l_358[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                uint8_t *l_369 = &p_1345->g_80;
                uint8_t l_382[3][9] = {{0x7EL,248UL,0x8EL,248UL,0x7EL,0x7EL,248UL,0x8EL,248UL},{0x7EL,248UL,0x8EL,248UL,0x7EL,0x7EL,248UL,0x8EL,248UL},{0x7EL,248UL,0x8EL,248UL,0x7EL,0x7EL,248UL,0x8EL,248UL}};
                uint8_t *l_383 = &l_250;
                int32_t l_433 = 3L;
                int64_t l_435 = 0x0902A10BEFF45BC2L;
                int32_t l_437 = 0x781965B5L;
                int i, j;
                for (l_247 = (-7); (l_247 >= (-28)); --l_247)
                { /* block id: 161 */
                    for (l_244 = 0; (l_244 >= 0); l_244 -= 1)
                    { /* block id: 164 */
                        int i;
                        return l_243[(l_244 + 8)];
                    }
                    (**l_156) ^= l_358[8];
                    for (p_1345->g_350.f1 = 0; (p_1345->g_350.f1 <= 3); p_1345->g_350.f1 += 1)
                    { /* block id: 170 */
                        int i, j, k;
                        (*l_156) = &p_1345->g_56[p_1345->g_350.f1][(p_1345->g_350.f1 + 2)][p_1345->g_350.f1];
                    }
                }
                if (((((**l_238) = (((((safe_add_func_uint64_t_u_u(((safe_div_func_int8_t_s_s(p_58.f4, (safe_sub_func_uint16_t_u_u((0xA8C14D8FB2C9AD87L & l_358[0]), ((**l_238) <= (((*l_383) ^= (safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(((*l_369)--), (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(l_358[2], (0x6FL | ((safe_rshift_func_int8_t_s_s((((((**l_238) == (1L > ((((safe_div_func_int32_t_s_s(((~(safe_sub_func_int32_t_s_s(0x4D6352B6L, (-1L)))) < l_335), l_335)) , p_58.f4) , (-1L)) & p_1345->g_147[2][5]))) , l_382[1][8]) || l_358[8]) || p_58.f3), (*p_1345->g_233))) & p_58.f1)))) | p_58.f4), (**p_1345->g_232))))))) | (-1L))))) , 0x7788L)))))) > p_58.f2), 0x78B9AC42656696DFL)) < p_58.f1) < 0L) , (void*)0) != l_384)) , 0x04CDCDE99F172A4BL) != 0x342F73D3BFA659DBL))
                { /* block id: 177 */
                    int8_t l_424 = (-3L);
                    uint64_t l_425 = 0x1348B7A5742FB8A2L;
                    int32_t l_436 = (-2L);
                    if (p_58.f0)
                    { /* block id: 178 */
                        volatile int16_t * volatile **l_392[6];
                        int32_t l_393[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
                        int32_t *l_401 = (void*)0;
                        int32_t **l_400 = &l_401;
                        int32_t **l_421 = &l_157;
                        int16_t *l_427 = &l_289;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_392[i] = &p_1345->g_385;
                        p_1345->g_385 = p_1345->g_385;
                        l_395 = ((l_393[0] ^ p_1345->g_98) , p_1345->g_394);
                        (*p_1345->g_418) = (((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((((((*l_400) = &p_1345->g_223) == ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((l_335 != 0x198F5745L) >= (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_1345->g_350.f4, 12)), 1))), ((p_1345->g_418 == l_421) < l_382[1][8]))), (((**p_1345->g_232) &= ((p_59 , (safe_rshift_func_int16_t_s_u(((*l_180) = (p_58.f3 , l_358[8])), 4))) , p_59)) != (**l_421)))), 18446744073709551615UL)) | 1UL) <= l_424), l_425)) ^ 0x125C6C34BFBC7389L), (-9L))), 1L)) , l_426)) , (void*)0) == l_427) > 0x8BL) | p_1345->g_291[3]), 9UL)), l_428)) == l_429) , (*p_1345->g_418));
                    }
                    else
                    { /* block id: 185 */
                        int32_t *l_430 = (void*)0;
                        int32_t *l_431 = &l_395.f1;
                        int32_t *l_432[2];
                        struct S0 *l_442 = &p_1345->g_394;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_432[i] = &l_151;
                        ++l_439;
                        (*l_442) = p_1345->g_394;
                    }
                }
                else
                { /* block id: 189 */
                    int32_t l_444[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (p_1345->g_350.f7 = 3; (p_1345->g_350.f7 <= 9); p_1345->g_350.f7 += 1)
                    { /* block id: 192 */
                        int8_t *l_443 = &l_310;
                        struct S0 *l_446 = &p_1345->g_394;
                        struct S0 **l_445 = &l_446;
                        int i;
                        l_243[p_1345->g_350.f7] = (~((((*l_443) = ((*p_1345->g_233) = l_243[p_1345->g_350.f7])) ^ l_444[1]) ^ l_243[p_1345->g_350.f7]));
                        (*l_445) = &l_395;
                    }
                }
            }
        }
        (*l_156) = ((safe_mul_func_uint16_t_u_u(((((((&l_395 == &l_395) , l_449) != &p_1345->g_98) ^ (((&p_1345->g_133 == (void*)0) , (*p_1345->g_233)) >= ((*l_450)++))) || (p_1345->g_350.f1 || ((safe_sub_func_int16_t_s_s(3L, p_58.f1)) , l_249[3][2][1]))) && 0x551E6EEFL), p_1345->g_455)) , (void*)0);
        return p_58.f1;
    }
    else
    { /* block id: 204 */
        return p_1345->g_4[0][5][0];
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_4 p_1345->g_100 p_1345->g_80 p_1345->g_98 p_1345->g_131 p_1345->g_64 p_1345->g_133
 * writes: p_1345->g_56 p_1345->g_55 p_1345->g_80 p_1345->g_131 p_1345->g_133
 */
struct S0  func_60(uint8_t  p_61, uint8_t * p_62, int32_t  p_63, struct S2 * p_1345)
{ /* block id: 23 */
    int32_t *l_101 = &p_1345->g_56[3][1][1];
    int32_t *l_102 = &p_1345->g_56[2][2][2];
    int32_t *l_103 = &p_1345->g_55;
    int32_t l_104 = 0x714B1F07L;
    int32_t *l_105 = (void*)0;
    int32_t *l_106 = &p_1345->g_56[1][3][3];
    int32_t *l_107 = &p_1345->g_56[3][3][0];
    int32_t *l_108 = &p_1345->g_55;
    int32_t *l_109 = &p_1345->g_56[3][3][0];
    int32_t *l_110[10][8][3] = {{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}},{{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55},{&p_1345->g_55,(void*)0,&p_1345->g_55}}};
    uint32_t l_111[9] = {4294967295UL,4294967293UL,4294967295UL,4294967295UL,4294967293UL,4294967295UL,4294967295UL,4294967293UL,4294967295UL};
    int16_t *l_130 = &p_1345->g_131;
    int32_t l_132 = 0x7B8AB036L;
    struct S0 l_139 = {0x8CBA6210L,0x02DC3F19L,247UL,6UL,1UL};
    int i, j, k;
    l_111[7]++;
    p_1345->g_133 &= ((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0UL, ((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((1L || ((((*l_103) = ((*l_107) = 0L)) == ((((((((-10L) <= (!((*l_130) = ((p_1345->g_4[0][5][0] , p_1345->g_100) , (0x29B9L != (safe_rshift_func_uint8_t_u_s(((*p_62) = (0xD318FB5AA6BA308FL && (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((p_1345->g_80 && p_1345->g_98) != p_1345->g_4[0][5][0]), p_63)), 1UL)))), p_63))))))) & (-1L)) == 5L) , p_1345->g_131) , l_132) , p_63) != 0L)) != p_61)), p_1345->g_64)), 9L)) | p_63))), p_61)), p_1345->g_64)) && 0x7C3C3C14L);
    for (p_63 = (-14); (p_63 < 12); p_63++)
    { /* block id: 32 */
        uint32_t l_136 = 0x4B272FC5L;
        l_136++;
    }
    return l_139;
}


/* ------------------------------------------ */
/* 
 * reads : p_1345->g_80
 * writes:
 */
uint32_t  func_65(uint8_t * p_66, uint8_t * p_67, uint32_t  p_68, int32_t * p_69, uint32_t  p_70, struct S2 * p_1345)
{ /* block id: 20 */
    return p_1345->g_80;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1345->g_56
 */
uint8_t * func_71(int32_t * p_72, struct S1  p_73, struct S2 * p_1345)
{ /* block id: 13 */
    uint16_t l_77 = 65528UL;
    int32_t *l_78 = &p_1345->g_56[5][3][1];
    uint8_t *l_79 = &p_1345->g_80;
    (*l_78) = (safe_rshift_func_uint8_t_u_s(l_77, 5));
    return l_79;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1346;
    struct S2* p_1345 = &c_1346;
    struct S2 c_1347 = {
        0x62C9CC14L, // p_1345->g_2
        {{{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L}},{{4L},{4L},{4L},{4L},{4L},{4L}}}, // p_1345->g_4
        {{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}},{{0x6EL,255UL,0x6EL,0x6EL}}}, // p_1345->g_45
        0x68E9AC72L, // p_1345->g_55
        {{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}},{{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL},{4L,1L,6L,0x01C69F0BL}}}, // p_1345->g_56
        0L, // p_1345->g_64
        0x23L, // p_1345->g_80
        0UL, // p_1345->g_98
        0x406CBD5F4407CCE4L, // p_1345->g_100
        0x0AB7L, // p_1345->g_131
        (-9L), // p_1345->g_133
        {{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL},{0x1DL,0x58L,0x58L,0x1DL,0x1DL,0x58L,0x58L,0x1DL,0x1DL}}, // p_1345->g_147
        &p_1345->g_100, // p_1345->g_150
        (-1L), // p_1345->g_223
        4294967295UL, // p_1345->g_227
        &p_1345->g_147[4][1], // p_1345->g_233
        &p_1345->g_233, // p_1345->g_232
        0xCE96L, // p_1345->g_279
        0x30C4L, // p_1345->g_281
        0x1CAFL, // p_1345->g_283
        {4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL,4294967292UL}, // p_1345->g_291
        (void*)0, // p_1345->g_300
        {8L,8L,0x05698F180521CBCAL,0x36D74C52L,0L,0x2C8029AE6BF356E5L,4294967290UL,0xC7F951D9206460B1L}, // p_1345->g_350
        0x6B5AL, // p_1345->g_387
        0x7A56L, // p_1345->g_388
        9L, // p_1345->g_389
        {{1L,0x211CL,1L,1L,0x211CL,1L,1L,0x211CL,1L},{1L,0x211CL,1L,1L,0x211CL,1L,1L,0x211CL,1L},{1L,0x211CL,1L,1L,0x211CL,1L,1L,0x211CL,1L},{1L,0x211CL,1L,1L,0x211CL,1L,1L,0x211CL,1L},{1L,0x211CL,1L,1L,0x211CL,1L,1L,0x211CL,1L}}, // p_1345->g_390
        {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}, // p_1345->g_391
        {{(void*)0,(void*)0,&p_1345->g_388,(void*)0,&p_1345->g_391[5],(void*)0,&p_1345->g_388,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1345->g_388,(void*)0,&p_1345->g_391[5],(void*)0,&p_1345->g_388,(void*)0,(void*)0}}, // p_1345->g_386
        &p_1345->g_386[1][8], // p_1345->g_385
        {0x341F62EFL,0x76177223L,0x81L,4294967288UL,0x0F7EF95CL}, // p_1345->g_394
        {0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L,0x7B5B2F30L}, // p_1345->g_420
        &p_1345->g_420[7], // p_1345->g_419
        &p_1345->g_419, // p_1345->g_418
        0x966E42AAL, // p_1345->g_455
        {0UL}, // p_1345->g_513
        {&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1,&p_1345->g_394.f1}, // p_1345->g_530
        {0x58A9500EL,0x326D1256L,0xB5L,4294967295UL,0x7B010F48L}, // p_1345->g_562
        (-2L), // p_1345->g_634
        0x58C6F4D0C1E0A69CL, // p_1345->g_670
        1L, // p_1345->g_762
        0UL, // p_1345->g_813
        0UL, // p_1345->g_915
        (void*)0, // p_1345->g_919
        &p_1345->g_919, // p_1345->g_918
        &p_1345->g_919, // p_1345->g_965
        (-7L), // p_1345->g_976
        &p_1345->g_4[2][5][0], // p_1345->g_1075
        {&p_1345->g_350,&p_1345->g_350,&p_1345->g_350,&p_1345->g_350,&p_1345->g_350}, // p_1345->g_1205
        &p_1345->g_1205[2], // p_1345->g_1204
        0x1E04D0F5L, // p_1345->g_1257
        &p_1345->g_513[0], // p_1345->g_1264
        &p_1345->g_1264, // p_1345->g_1263
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1345->g_1262
        (void*)0, // p_1345->g_1326
        {{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326},{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326},{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326},{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326},{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326},{&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326,&p_1345->g_1326}}, // p_1345->g_1325
        0UL, // p_1345->g_1344
    };
    c_1346 = c_1347;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1345);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1345->g_2, "p_1345->g_2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1345->g_4[i][j][k], "p_1345->g_4[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1345->g_45[i][j][k], "p_1345->g_45[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1345->g_55, "p_1345->g_55", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1345->g_56[i][j][k], "p_1345->g_56[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1345->g_64, "p_1345->g_64", print_hash_value);
    transparent_crc(p_1345->g_80, "p_1345->g_80", print_hash_value);
    transparent_crc(p_1345->g_98, "p_1345->g_98", print_hash_value);
    transparent_crc(p_1345->g_100, "p_1345->g_100", print_hash_value);
    transparent_crc(p_1345->g_131, "p_1345->g_131", print_hash_value);
    transparent_crc(p_1345->g_133, "p_1345->g_133", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1345->g_147[i][j], "p_1345->g_147[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1345->g_223, "p_1345->g_223", print_hash_value);
    transparent_crc(p_1345->g_227, "p_1345->g_227", print_hash_value);
    transparent_crc(p_1345->g_279, "p_1345->g_279", print_hash_value);
    transparent_crc(p_1345->g_281, "p_1345->g_281", print_hash_value);
    transparent_crc(p_1345->g_283, "p_1345->g_283", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1345->g_291[i], "p_1345->g_291[i]", print_hash_value);

    }
    transparent_crc(p_1345->g_350.f0, "p_1345->g_350.f0", print_hash_value);
    transparent_crc(p_1345->g_350.f1, "p_1345->g_350.f1", print_hash_value);
    transparent_crc(p_1345->g_350.f2, "p_1345->g_350.f2", print_hash_value);
    transparent_crc(p_1345->g_350.f3, "p_1345->g_350.f3", print_hash_value);
    transparent_crc(p_1345->g_350.f4, "p_1345->g_350.f4", print_hash_value);
    transparent_crc(p_1345->g_350.f5, "p_1345->g_350.f5", print_hash_value);
    transparent_crc(p_1345->g_350.f6, "p_1345->g_350.f6", print_hash_value);
    transparent_crc(p_1345->g_350.f7, "p_1345->g_350.f7", print_hash_value);
    transparent_crc(p_1345->g_387, "p_1345->g_387", print_hash_value);
    transparent_crc(p_1345->g_388, "p_1345->g_388", print_hash_value);
    transparent_crc(p_1345->g_389, "p_1345->g_389", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1345->g_390[i][j], "p_1345->g_390[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1345->g_391[i], "p_1345->g_391[i]", print_hash_value);

    }
    transparent_crc(p_1345->g_394.f0, "p_1345->g_394.f0", print_hash_value);
    transparent_crc(p_1345->g_394.f1, "p_1345->g_394.f1", print_hash_value);
    transparent_crc(p_1345->g_394.f2, "p_1345->g_394.f2", print_hash_value);
    transparent_crc(p_1345->g_394.f3, "p_1345->g_394.f3", print_hash_value);
    transparent_crc(p_1345->g_394.f4, "p_1345->g_394.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1345->g_420[i], "p_1345->g_420[i]", print_hash_value);

    }
    transparent_crc(p_1345->g_455, "p_1345->g_455", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1345->g_513[i], "p_1345->g_513[i]", print_hash_value);

    }
    transparent_crc(p_1345->g_562.f0, "p_1345->g_562.f0", print_hash_value);
    transparent_crc(p_1345->g_562.f1, "p_1345->g_562.f1", print_hash_value);
    transparent_crc(p_1345->g_562.f2, "p_1345->g_562.f2", print_hash_value);
    transparent_crc(p_1345->g_562.f3, "p_1345->g_562.f3", print_hash_value);
    transparent_crc(p_1345->g_562.f4, "p_1345->g_562.f4", print_hash_value);
    transparent_crc(p_1345->g_634, "p_1345->g_634", print_hash_value);
    transparent_crc(p_1345->g_670, "p_1345->g_670", print_hash_value);
    transparent_crc(p_1345->g_762, "p_1345->g_762", print_hash_value);
    transparent_crc(p_1345->g_813, "p_1345->g_813", print_hash_value);
    transparent_crc(p_1345->g_915, "p_1345->g_915", print_hash_value);
    transparent_crc(p_1345->g_976, "p_1345->g_976", print_hash_value);
    transparent_crc(p_1345->g_1257, "p_1345->g_1257", print_hash_value);
    transparent_crc(p_1345->g_1344, "p_1345->g_1344", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
