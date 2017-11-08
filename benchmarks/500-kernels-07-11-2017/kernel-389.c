// -g 56,9,19 -l 4,9,1
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


// Seed: 1749655895

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int64_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};

struct S1 {
    uint16_t g_31;
    uint32_t g_35;
    uint16_t g_53;
    uint16_t g_55[6];
    uint8_t g_77;
    int64_t g_85;
    volatile uint16_t g_94[6][5];
    int16_t g_96;
    uint32_t *g_102[3];
    int32_t g_104[7][4];
    int32_t * volatile g_103;
    int16_t *g_119;
    int32_t *g_156;
    int32_t ** volatile g_155;
    int64_t g_175;
    uint64_t g_204;
    int32_t **g_249;
    volatile int8_t g_271;
    uint8_t *g_357[5][3];
    int32_t g_375[3];
    uint8_t **g_404;
    int16_t g_412;
    int16_t g_465;
    volatile uint16_t g_484;
    volatile uint16_t *g_483;
    volatile uint16_t **g_482;
    uint16_t g_485;
    int16_t g_514;
    int64_t g_526;
    int32_t g_540;
    union U0 g_547;
    uint16_t g_570;
    volatile uint64_t g_587;
    volatile uint64_t * volatile g_586[3][5];
    int32_t * volatile g_597;
    int8_t g_618;
    uint16_t g_684;
    uint8_t g_711;
    uint16_t g_758;
    int8_t g_761;
    volatile uint8_t g_779;
    int32_t ***g_836;
    uint64_t g_889;
    uint64_t *g_888[3];
    uint64_t **g_887;
    union U0 *g_901;
    union U0 ** volatile g_900;
    uint32_t **g_939;
    int32_t g_981;
    volatile uint32_t g_1167;
    union U0 ** volatile g_1169[7][3];
    uint64_t g_1210[3][7][4];
    union U0 ** volatile g_1262;
    union U0 g_1296;
    int8_t *g_1327;
    int8_t **g_1326;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_1328);
uint64_t  func_4(int32_t  p_5, int64_t  p_6, uint32_t  p_7, union U0  p_8, int8_t  p_9, struct S1 * p_1328);
int16_t  func_12(int32_t  p_13, uint32_t  p_14, uint8_t  p_15, int32_t  p_16, int64_t  p_17, struct S1 * p_1328);
union U0  func_18(uint32_t  p_19, uint16_t  p_20, int32_t  p_21, struct S1 * p_1328);
uint8_t  func_42(uint32_t * p_43, struct S1 * p_1328);
int8_t  func_50(uint32_t * p_51, struct S1 * p_1328);
int16_t  func_56(int32_t  p_57, int64_t  p_58, struct S1 * p_1328);
uint32_t  func_60(uint16_t * p_61, uint16_t * p_62, int16_t  p_63, struct S1 * p_1328);
uint16_t * func_64(uint16_t * p_65, uint32_t * p_66, int8_t  p_67, uint32_t * p_68, uint16_t * p_69, struct S1 * p_1328);
uint16_t * func_70(uint8_t  p_71, int16_t  p_72, uint32_t  p_73, uint32_t  p_74, uint16_t * p_75, struct S1 * p_1328);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1328->g_31 p_1328->g_55 p_1328->g_77 p_1328->g_53 p_1328->g_35 p_1328->g_94 p_1328->g_85 p_1328->g_103 p_1328->g_104 p_1328->g_155 p_1328->g_156 p_1328->g_175 p_1328->g_204 p_1328->g_96 p_1328->g_249 p_1328->g_271 p_1328->g_375 p_1328->g_412 p_1328->g_404 p_1328->g_357 p_1328->g_465 p_1328->g_482 p_1328->g_485 p_1328->g_483 p_1328->g_484 p_1328->g_514 p_1328->g_540 p_1328->g_547 p_1328->g_547.f0 p_1328->g_586 p_1328->g_597 p_1328->g_570 p_1328->g_587 p_1328->g_684 p_1328->g_618 p_1328->g_758 p_1328->g_779 p_1328->g_887 p_1328->g_900 p_1328->g_888 p_1328->g_889 p_1328->g_761 p_1328->g_981 p_1328->g_711 p_1328->g_901 p_1328->g_547.f2 p_1328->g_1210 p_1328->g_1296 p_1328->g_1296.f2 p_1328->g_1326
 * writes: p_1328->g_53 p_1328->g_55 p_1328->g_85 p_1328->g_35 p_1328->g_102 p_1328->g_104 p_1328->g_119 p_1328->g_103 p_1328->g_156 p_1328->g_175 p_1328->g_204 p_1328->g_77 p_1328->g_96 p_1328->g_249 p_1328->g_357 p_1328->g_404 p_1328->g_412 p_1328->g_465 p_1328->g_375 p_1328->g_540 p_1328->g_570 p_1328->g_526 p_1328->g_618 p_1328->g_547.f0 p_1328->g_684 p_1328->g_485 p_1328->g_758 p_1328->g_761 p_1328->g_779 p_1328->g_836 p_1328->g_887 p_1328->g_901 p_1328->g_939 p_1328->g_889 p_1328->g_514 p_1328->g_981 p_1328->g_547.f2 p_1328->g_31 p_1328->g_1296.f2
 */
int32_t  func_1(struct S1 * p_1328)
{ /* block id: 4 */
    int64_t l_22 = 0x456E348CC3837ACEL;
    uint32_t *l_34[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_36 = 0L;
    uint32_t l_37[2];
    int8_t l_984 = 0x58L;
    int16_t l_1146 = 0x54BAL;
    uint8_t l_1147 = 9UL;
    uint16_t *l_1307[2];
    int32_t l_1319[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
    int32_t l_1320 = (-6L);
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = 0xDBAF9EB1L;
    for (i = 0; i < 2; i++)
        l_1307[i] = &p_1328->g_547.f2;
    l_36 = (safe_lshift_func_uint16_t_u_u((0x8D13034D00693E93L >= func_4((safe_mul_func_int16_t_s_s(func_12((func_18(l_22, (~(1L == ((safe_add_func_uint16_t_u_u(9UL, (safe_add_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(p_1328->g_31, p_1328->g_31)) < (0xA41A80D1C1D686A3L <= (1UL > (++l_37[0])))) && ((safe_rshift_func_uint8_t_u_u(func_42(l_34[5], p_1328), p_1328->g_711)) > 0UL)), l_22)))) <= l_984))), l_22, p_1328) , 0x7DAE72E6L), p_1328->g_31, l_1146, l_36, l_1147, p_1328), 0xC449L)), p_1328->g_1210[2][4][2], p_1328->g_1210[2][4][2], p_1328->g_1296, p_1328->g_1210[1][4][2], p_1328)), p_1328->g_711));
    l_36 &= 0x390E726CL;
    if ((safe_add_func_uint32_t_u_u(0xB9A49034L, (l_1146 , ((safe_unary_minus_func_int16_t_s(0L)) <= ((p_1328->g_570 = (((((safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_1328->g_375[1] == (+p_1328->g_104[4][3])), 0x16924A1303C6C8F9L)), 5)) | (l_36 = l_1146)) == (((l_1147 ^ (l_984 == (*p_1328->g_597))) && 0xC5FEL) <= 2UL)) ^ l_984) && 0x82CDEEF05A919ACAL)) , l_1146))))))
    { /* block id: 696 */
        union U0 *l_1310 = &p_1328->g_547;
        union U0 *l_1312 = (void*)0;
        int32_t l_1313 = 0x04FAF057L;
        for (p_1328->g_204 = 0; (p_1328->g_204 < 15); p_1328->g_204 = safe_add_func_int16_t_s_s(p_1328->g_204, 7))
        { /* block id: 699 */
            union U0 **l_1311 = &l_1310;
            l_1312 = ((*l_1311) = l_1310);
            for (l_36 = 8; (l_36 >= 0); l_36 -= 1)
            { /* block id: 704 */
                for (p_1328->g_31 = 0; (p_1328->g_31 <= 2); p_1328->g_31 += 1)
                { /* block id: 707 */
                    (*l_1311) = l_1310;
                }
            }
        }
        return l_1313;
    }
    else
    { /* block id: 713 */
        int32_t *l_1314 = (void*)0;
        int32_t *l_1315 = &p_1328->g_104[4][0];
        int32_t *l_1316 = &l_36;
        int32_t *l_1317 = &p_1328->g_104[6][1];
        int32_t *l_1318[8];
        uint8_t l_1321[3];
        int i;
        for (i = 0; i < 8; i++)
            l_1318[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1321[i] = 0xF2L;
        l_1321[1]--;
        for (p_1328->g_1296.f2 = 11; (p_1328->g_1296.f2 <= 26); p_1328->g_1296.f2 = safe_add_func_uint16_t_u_u(p_1328->g_1296.f2, 1))
        { /* block id: 717 */
            (*p_1328->g_249) = &l_36;
            (*p_1328->g_155) = l_1315;
            if (l_36)
                continue;
        }
        (*p_1328->g_155) = l_1314;
        (*p_1328->g_249) = &l_36;
    }
    (*p_1328->g_156) = ((p_1328->g_1326 == (void*)0) > 4294967290UL);
    return l_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_547.f2
 * writes: p_1328->g_547.f2
 */
uint64_t  func_4(int32_t  p_5, int64_t  p_6, uint32_t  p_7, union U0  p_8, int8_t  p_9, struct S1 * p_1328)
{ /* block id: 685 */
    int16_t l_1299 = 8L;
    for (p_1328->g_547.f2 = 19; (p_1328->g_547.f2 > 19); ++p_1328->g_547.f2)
    { /* block id: 688 */
        return l_1299;
    }
    return l_1299;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_684 p_1328->g_155 p_1328->g_547.f2 p_1328->g_597 p_1328->g_104 p_1328->g_35
 * writes: p_1328->g_684 p_1328->g_156 p_1328->g_547.f2 p_1328->g_104 p_1328->g_35
 */
int16_t  func_12(int32_t  p_13, uint32_t  p_14, uint8_t  p_15, int32_t  p_16, int64_t  p_17, struct S1 * p_1328)
{ /* block id: 571 */
    uint8_t l_1153[5][9] = {{0xD5L,0xD5L,0x5CL,1UL,0x80L,1UL,0x5CL,0xD5L,0xD5L},{0xD5L,0xD5L,0x5CL,1UL,0x80L,1UL,0x5CL,0xD5L,0xD5L},{0xD5L,0xD5L,0x5CL,1UL,0x80L,1UL,0x5CL,0xD5L,0xD5L},{0xD5L,0xD5L,0x5CL,1UL,0x80L,1UL,0x5CL,0xD5L,0xD5L},{0xD5L,0xD5L,0x5CL,1UL,0x80L,1UL,0x5CL,0xD5L,0xD5L}};
    union U0 l_1177[8][2][1] = {{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}},{{{0x4269816FL}},{{0x4269816FL}}}};
    int64_t *l_1180[6][6][5];
    int32_t l_1201 = 0x54B54D39L;
    uint32_t **l_1207 = &p_1328->g_102[2];
    uint16_t *l_1215 = &p_1328->g_570;
    uint16_t **l_1214 = &l_1215;
    int32_t l_1279 = 0L;
    uint64_t **l_1280 = &p_1328->g_888[2];
    union U0 *l_1284 = &l_1177[3][1][0];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
                l_1180[i][j][k] = &p_1328->g_85;
        }
    }
    for (p_1328->g_684 = 1; (p_1328->g_684 <= 4); p_1328->g_684 += 1)
    { /* block id: 574 */
        int32_t *l_1148[10][1][9] = {{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}},{{(void*)0,&p_1328->g_104[2][0],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0,(void*)0,&p_1328->g_375[1],(void*)0}}};
        int32_t l_1149 = 0x7826FF3BL;
        union U0 l_1164 = {0x13B241FDL};
        uint8_t *l_1165[7] = {&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711};
        uint64_t **l_1239 = (void*)0;
        uint64_t **l_1242[7];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1242[i] = &p_1328->g_888[2];
        (*p_1328->g_155) = l_1148[3][0][0];
    }
    for (p_1328->g_547.f2 = 29; (p_1328->g_547.f2 >= 30); p_1328->g_547.f2++)
    { /* block id: 678 */
        uint64_t l_1291[4][10][6] = {{{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL}},{{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL}},{{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL}},{{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL},{0xC386AC4914F13AB4L,8UL,1UL,6UL,5UL,0x016C2E42591DAD9DL}}};
        uint32_t *l_1292 = (void*)0;
        uint32_t *l_1293 = &p_1328->g_35;
        int i, j, k;
        l_1284 = &l_1177[1][1][0];
        l_1201 ^= (safe_add_func_int32_t_s_s(((*p_1328->g_597) &= l_1279), (safe_div_func_int64_t_s_s(p_17, (safe_sub_func_int32_t_s_s(l_1291[2][7][1], (++(*l_1293))))))));
    }
    return l_1201;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_104 p_1328->g_547.f0 p_1328->g_249 p_1328->g_156 p_1328->g_711 p_1328->g_404 p_1328->g_357 p_1328->g_77 p_1328->g_587 p_1328->g_55 p_1328->g_53 p_1328->g_375 p_1328->g_465 p_1328->g_540 p_1328->g_514 p_1328->g_597 p_1328->g_482 p_1328->g_483 p_1328->g_484 p_1328->g_758 p_1328->g_887 p_1328->g_888 p_1328->g_889 p_1328->g_412 p_1328->g_618 p_1328->g_900 p_1328->g_901
 * writes: p_1328->g_104 p_1328->g_547.f0 p_1328->g_156 p_1328->g_465 p_1328->g_53 p_1328->g_540 p_1328->g_514 p_1328->g_412 p_1328->g_758
 */
union U0  func_18(uint32_t  p_19, uint16_t  p_20, int32_t  p_21, struct S1 * p_1328)
{ /* block id: 459 */
    uint64_t l_985[3][1];
    int32_t l_986 = (-9L);
    int32_t *l_987 = &p_1328->g_104[4][3];
    uint32_t ***l_1000 = (void*)0;
    uint32_t ***l_1002 = (void*)0;
    uint32_t ****l_1001 = &l_1002;
    uint32_t ***l_1004 = &p_1328->g_939;
    uint32_t ****l_1003 = &l_1004;
    int16_t *l_1009 = &p_1328->g_465;
    uint8_t *l_1014 = &p_1328->g_77;
    int32_t l_1032 = 0x25DFCF5FL;
    int32_t l_1033 = 0L;
    int32_t l_1036 = 4L;
    int32_t l_1037 = 0x0A006B29L;
    int16_t l_1038[2];
    uint32_t l_1039 = 8UL;
    int32_t l_1044 = 1L;
    int32_t l_1045[1][10][2] = {{{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL},{0x53697729L,0x5C56C38CL}}};
    int8_t l_1046 = 0L;
    int64_t l_1094 = 0x50A275883C9E3DDBL;
    uint32_t l_1097 = 0x5D3D549AL;
    int32_t l_1138 = 0x219D545CL;
    union U0 l_1145 = {0x1CDBAEA0L};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_985[i][j] = 1UL;
    }
    for (i = 0; i < 2; i++)
        l_1038[i] = 0x6473L;
    (*l_987) &= (l_986 = l_985[1][0]);
    for (p_1328->g_547.f0 = 14; (p_1328->g_547.f0 == (-3)); p_1328->g_547.f0 = safe_sub_func_uint8_t_u_u(p_1328->g_547.f0, 9))
    { /* block id: 464 */
        int32_t *l_992 = &p_1328->g_104[1][1];
        union U0 l_995 = {-1L};
        (*p_1328->g_249) = ((safe_lshift_func_uint8_t_u_s(p_20, 6)) , l_992);
        (*p_1328->g_156) = (safe_rshift_func_int8_t_s_s(0L, 5));
        return l_995;
    }
    if (((p_20 > ((safe_lshift_func_uint8_t_u_s(1UL, ((safe_mul_func_int16_t_s_s((((l_1000 != ((*l_1003) = ((*l_1001) = l_1000))) | (((safe_div_func_int32_t_s_s(0x05C66F1CL, (((*l_1009) = ((*l_987) = p_1328->g_711)) || ((safe_mul_func_int8_t_s_s(p_21, (safe_rshift_func_uint8_t_u_u(((((*p_1328->g_404) != (l_1014 = l_1014)) , p_19) , p_21), 3)))) <= 1UL)))) <= 0x6EFDB287L) , p_20)) , (*l_987)), p_21)) != p_19))) , p_19)) || p_20))
    { /* block id: 474 */
        uint8_t *l_1017[5] = {&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711,&p_1328->g_711};
        int32_t l_1034 = 0L;
        int32_t l_1035[4][4][8] = {{{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L}},{{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L}},{{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L}},{{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L},{(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L,(-8L),(-8L),0x58779EC9L}}};
        union U0 l_1122 = {1L};
        int i, j, k;
        (*l_987) = (((safe_mod_func_uint16_t_u_u(((void*)0 == l_1017[1]), (safe_mul_func_int8_t_s_s(((**p_1328->g_404) >= (safe_mul_func_uint16_t_u_u(0xE6E3L, (safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_int32_t_s((p_1328->g_587 , (safe_lshift_func_int16_t_s_u(((((safe_mod_func_uint32_t_u_u(((void*)0 == &p_1328->g_888[2]), (p_1328->g_55[5] || p_19))) , 0x3E633C41L) , (*l_987)) , 0x330DL), (*l_987)))))) , 0x3DA0L) | 1UL) >= (-8L)), 15))))), 0x95L)))) <= p_19) || p_20);
        for (p_1328->g_53 = (-22); (p_1328->g_53 == 19); ++p_1328->g_53)
        { /* block id: 478 */
            int32_t l_1042[5][7][7] = {{{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)}},{{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)}},{{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)}},{{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)}},{{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)},{(-1L),0x38584928L,1L,0x56D55350L,(-7L),(-1L),(-1L)}}};
            int16_t l_1043 = 0x50E3L;
            uint8_t l_1054 = 0x40L;
            int8_t l_1096 = (-1L);
            union U0 l_1111 = {0L};
            uint64_t l_1116[10][6][2] = {{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}},{{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L},{5UL,0x074B2F3DE73FF9C7L}}};
            int i, j, k;
            for (l_986 = 2; (l_986 >= 0); l_986 -= 1)
            { /* block id: 481 */
                int32_t *l_1031[4];
                uint32_t l_1047 = 0xA49A53DCL;
                int i;
                for (i = 0; i < 4; i++)
                    l_1031[i] = (void*)0;
                l_1039--;
                if (p_1328->g_375[l_986])
                    break;
                --l_1047;
            }
            for (l_1044 = 0; (l_1044 <= 1); l_1044 += 1)
            { /* block id: 488 */
                int8_t l_1053 = 0L;
                uint8_t **l_1068 = &p_1328->g_357[4][2];
                uint32_t ***l_1074 = &p_1328->g_939;
                int32_t l_1079 = 9L;
                int32_t l_1093[6][9] = {{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L},{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L},{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L},{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L},{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L},{1L,0x372CF023L,(-9L),0x372CF023L,1L,1L,0x372CF023L,(-9L),0x372CF023L}};
                int i, j;
                for (l_1043 = 0; (l_1043 <= 1); l_1043 += 1)
                { /* block id: 491 */
                    int32_t l_1050[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int8_t *l_1064 = &p_1328->g_618;
                    int32_t *l_1069 = (void*)0;
                    int32_t *l_1070 = &l_1035[0][3][0];
                    int i;
                    (1 + 1);
                }
                for (p_1328->g_465 = 0; (p_1328->g_465 <= 2); p_1328->g_465 += 1)
                { /* block id: 532 */
                    uint16_t *l_1110 = &p_1328->g_485;
                    uint32_t *l_1112 = (void*)0;
                    uint16_t **l_1113 = &l_1110;
                    int16_t *l_1114 = (void*)0;
                    int16_t *l_1115 = &p_1328->g_514;
                    int32_t *l_1119 = &l_1036;
                    int32_t l_1120 = (-1L);
                    int i, j;
                    for (p_1328->g_540 = 2; (p_1328->g_540 >= 0); p_1328->g_540 -= 1)
                    { /* block id: 535 */
                        int i;
                        if (l_1038[l_1044])
                            break;
                        if (l_1038[l_1044])
                            break;
                    }
                    (*l_987) |= l_1038[l_1044];
                    if ((safe_div_func_uint16_t_u_u(((p_19 ^ (safe_mod_func_int64_t_s_s(((((l_1038[l_1044] &= p_21) >= p_21) , &p_1328->g_156) != (((+((safe_mul_func_int16_t_s_s(((*l_1115) |= (((*l_1113) = l_1009) == &p_20)), l_1116[6][2][0])) , (-1L))) , p_20) , &l_987)), (*l_987)))) != p_20), p_19)))
                    { /* block id: 543 */
                        if (l_1042[4][4][1])
                            break;
                        if (p_19)
                            break;
                    }
                    else
                    { /* block id: 546 */
                        int32_t **l_1117 = &p_1328->g_156;
                        int32_t **l_1118 = &p_1328->g_156;
                        union U0 l_1121[1][5] = {{{2L},{2L},{2L},{2L},{2L}}};
                        int i, j;
                        (*p_1328->g_597) |= (((l_987 = l_1112) == &l_1035[0][3][0]) | (l_1120 |= ((l_1119 = &l_1035[0][3][0]) != &l_1044)));
                        return l_1121[0][3];
                    }
                }
            }
            (*l_987) |= 1L;
            return l_1122;
        }
    }
    else
    { /* block id: 558 */
        int16_t **l_1133 = &p_1328->g_119;
        int16_t *l_1134 = &p_1328->g_412;
        int32_t l_1137 = 0x6817681FL;
        (*l_987) = (((*l_987) , ((safe_div_func_uint64_t_u_u((((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((((~(safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((~(**p_1328->g_482)), ((*l_1134) ^= ((((((*l_1009) = 0x1D07L) && p_1328->g_758) || (**p_1328->g_887)) , l_1133) != (void*)0)))), ((0x9A888FC0F77769EFL < (((((safe_mul_func_int16_t_s_s((!((*l_987) ^ p_20)), p_1328->g_758)) > l_1137) >= (**p_1328->g_404)) , (*l_987)) && 0x700CL)) , 0x2CA4L)))) | p_20) < p_19), l_1137)), l_1138)) && p_21) <= (-1L)), 0x5CDFAFB4AD9A6706L)) | p_20)) || 1L);
        (*l_987) &= l_1137;
        (*p_1328->g_249) = &l_1033;
    }
    for (p_1328->g_758 = 0; (p_1328->g_758 < 60); p_1328->g_758 = safe_add_func_int64_t_s_s(p_1328->g_758, 5))
    { /* block id: 567 */
        int8_t *l_1144 = &l_1046;
        int8_t **l_1143 = &l_1144;
        (*l_987) = (p_20 != ((p_1328->g_618 != p_19) , ((safe_add_func_uint32_t_u_u((*l_987), p_20)) < (((void*)0 != l_1143) | ((((*p_1328->g_900) != &p_1328->g_547) == p_19) && 0x7AF3L)))));
    }
    return l_1145;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_55 p_1328->g_77 p_1328->g_31 p_1328->g_53 p_1328->g_35 p_1328->g_94 p_1328->g_85 p_1328->g_103 p_1328->g_104 p_1328->g_155 p_1328->g_156 p_1328->g_175 p_1328->g_204 p_1328->g_96 p_1328->g_249 p_1328->g_271 p_1328->g_375 p_1328->g_412 p_1328->g_404 p_1328->g_357 p_1328->g_465 p_1328->g_482 p_1328->g_485 p_1328->g_483 p_1328->g_484 p_1328->g_514 p_1328->g_540 p_1328->g_547 p_1328->g_547.f0 p_1328->g_586 p_1328->g_597 p_1328->g_570 p_1328->g_587 p_1328->g_684 p_1328->g_618 p_1328->g_758 p_1328->g_779 p_1328->g_887 p_1328->g_900 p_1328->g_888 p_1328->g_889 p_1328->g_761 p_1328->g_981
 * writes: p_1328->g_53 p_1328->g_55 p_1328->g_85 p_1328->g_35 p_1328->g_102 p_1328->g_104 p_1328->g_119 p_1328->g_103 p_1328->g_156 p_1328->g_175 p_1328->g_204 p_1328->g_77 p_1328->g_96 p_1328->g_249 p_1328->g_357 p_1328->g_404 p_1328->g_412 p_1328->g_465 p_1328->g_375 p_1328->g_540 p_1328->g_570 p_1328->g_526 p_1328->g_618 p_1328->g_547.f0 p_1328->g_684 p_1328->g_485 p_1328->g_758 p_1328->g_761 p_1328->g_779 p_1328->g_836 p_1328->g_887 p_1328->g_901 p_1328->g_939 p_1328->g_889 p_1328->g_514 p_1328->g_981
 */
uint8_t  func_42(uint32_t * p_43, struct S1 * p_1328)
{ /* block id: 6 */
    uint16_t *l_52 = &p_1328->g_53;
    uint16_t *l_54 = &p_1328->g_55[4];
    int32_t l_59 = 0x2CAC2457L;
    uint8_t *l_76[8][3][9] = {{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}},{{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77},{(void*)0,&p_1328->g_77,&p_1328->g_77,(void*)0,&p_1328->g_77,(void*)0,(void*)0,&p_1328->g_77,&p_1328->g_77}}};
    int32_t l_78[1];
    int32_t l_79 = 0x175C8FE3L;
    int16_t *l_84 = (void*)0;
    uint16_t **l_177 = &l_54;
    int8_t l_178 = 2L;
    uint32_t *l_219[3][6][2] = {{{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35}},{{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35}},{{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35},{&p_1328->g_35,&p_1328->g_35}}};
    int32_t l_980 = 0L;
    int32_t *l_982 = &l_980;
    uint32_t l_983 = 5UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_78[i] = (-6L);
    (*l_982) = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_1328->g_981 &= (safe_mul_func_uint8_t_u_u((func_50(((5UL >= ((((*l_54) = ((*l_52) = (p_43 != p_43))) || func_56(l_59, ((~(!4294967295UL)) || (p_1328->g_55[4] , func_60(((*l_177) = func_64(func_70((l_79 = (l_78[0] = l_59)), (p_1328->g_77 , (p_1328->g_85 = (((((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_1328->g_31 <= p_1328->g_53), p_1328->g_77)), 0xF0EDL)) <= 0x7447L) & 0xDAEA480DL) && p_1328->g_55[4]) , 0x4B48L))), p_1328->g_31, p_1328->g_53, l_54, p_1328), p_43, l_59, p_43, l_52, p_1328)), &p_1328->g_31, l_178, p_1328))), p_1328)) || p_1328->g_96)) , l_219[1][3][1]), p_1328) == (-7L)), l_980))), l_178)), l_59));
    return l_983;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_53 p_1328->g_85 p_1328->g_94 p_1328->g_175 p_1328->g_77 p_1328->g_35 p_1328->g_249 p_1328->g_156 p_1328->g_271 p_1328->g_104 p_1328->g_55 p_1328->g_31 p_1328->g_375 p_1328->g_412 p_1328->g_404 p_1328->g_357 p_1328->g_204 p_1328->g_465 p_1328->g_155 p_1328->g_482 p_1328->g_485 p_1328->g_483 p_1328->g_484 p_1328->g_514 p_1328->g_540 p_1328->g_547 p_1328->g_547.f0 p_1328->g_586 p_1328->g_597 p_1328->g_570 p_1328->g_587 p_1328->g_96 p_1328->g_684 p_1328->g_618 p_1328->g_758 p_1328->g_779 p_1328->g_887 p_1328->g_900 p_1328->g_888 p_1328->g_889 p_1328->g_761
 * writes: p_1328->g_53 p_1328->g_85 p_1328->g_55 p_1328->g_104 p_1328->g_77 p_1328->g_35 p_1328->g_249 p_1328->g_175 p_1328->g_156 p_1328->g_96 p_1328->g_357 p_1328->g_404 p_1328->g_412 p_1328->g_465 p_1328->g_375 p_1328->g_540 p_1328->g_570 p_1328->g_526 p_1328->g_618 p_1328->g_547.f0 p_1328->g_684 p_1328->g_485 p_1328->g_758 p_1328->g_761 p_1328->g_779 p_1328->g_836 p_1328->g_887 p_1328->g_901 p_1328->g_939 p_1328->g_889 p_1328->g_514
 */
int8_t  func_50(uint32_t * p_51, struct S1 * p_1328)
{ /* block id: 58 */
    uint64_t l_220 = 0xF388FD20083641E5L;
    int32_t l_225 = (-2L);
    int32_t l_239 = (-9L);
    int32_t **l_247 = &p_1328->g_156;
    int16_t *l_282 = &p_1328->g_96;
    uint32_t *l_332 = &p_1328->g_35;
    int32_t l_348 = 0x67D07CCFL;
    int32_t l_350 = 0x2FD05890L;
    uint8_t *l_354 = &p_1328->g_77;
    uint64_t l_377[9];
    uint32_t l_417 = 4294967295UL;
    uint16_t *l_481 = &p_1328->g_31;
    uint16_t **l_480 = &l_481;
    union U0 l_516[9] = {{-7L},{0L},{-7L},{-7L},{0L},{-7L},{-7L},{0L},{-7L}};
    int64_t *l_560 = &p_1328->g_526;
    int16_t l_605 = 0x52FDL;
    int32_t *l_606[1][2][5] = {{{(void*)0,&l_350,(void*)0,&l_350,(void*)0},{(void*)0,&l_350,(void*)0,&l_350,(void*)0}}};
    uint32_t l_607 = 0xD7A59D0FL;
    uint64_t l_612 = 0UL;
    int64_t *l_613 = &p_1328->g_175;
    int8_t *l_617 = &p_1328->g_618;
    int32_t ***l_619 = &l_247;
    uint32_t l_632 = 0x5FC90E2EL;
    uint8_t l_773 = 0x6FL;
    uint16_t l_788 = 0x44B8L;
    int32_t l_846[6] = {0x6D2951BEL,0x6D2951BEL,0x6D2951BEL,0x6D2951BEL,0x6D2951BEL,0x6D2951BEL};
    uint32_t l_967 = 7UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_377[i] = 0x86218D794A1633E6L;
    for (p_1328->g_53 = 0; (p_1328->g_53 <= 5); p_1328->g_53 += 1)
    { /* block id: 61 */
        int32_t l_227 = 7L;
        int32_t l_259 = 0L;
        int16_t *l_286 = (void*)0;
        int64_t l_292 = 0x67AF4D267A018179L;
        uint8_t l_335[4];
        int32_t l_337 = (-9L);
        int32_t l_339 = 0x3A1C739DL;
        int32_t l_340 = 8L;
        union U0 l_390 = {0x7EADECD4L};
        uint64_t *l_413 = &p_1328->g_204;
        int8_t l_466[4];
        int16_t l_561 = 0x5131L;
        int16_t *l_562[1];
        int64_t *l_563 = &p_1328->g_175;
        int32_t *l_564 = &l_516[3].f0;
        int i;
        for (i = 0; i < 4; i++)
            l_335[i] = 9UL;
        for (i = 0; i < 4; i++)
            l_466[i] = 0x74L;
        for (i = 0; i < 1; i++)
            l_562[i] = &p_1328->g_412;
        for (p_1328->g_85 = 2; (p_1328->g_85 >= 0); p_1328->g_85 -= 1)
        { /* block id: 64 */
            int32_t *l_226[6] = {&p_1328->g_104[1][3],(void*)0,&p_1328->g_104[1][3],&p_1328->g_104[1][3],(void*)0,&p_1328->g_104[1][3]};
            uint64_t *l_230 = &l_220;
            uint8_t *l_242 = (void*)0;
            uint8_t *l_243 = &p_1328->g_77;
            int32_t ***l_248[3][2];
            uint32_t l_329[4];
            int8_t l_389[1][2];
            uint32_t l_410 = 0xA4BC5AE5L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_248[i][j] = &l_247;
            }
            for (i = 0; i < 4; i++)
                l_329[i] = 4294967295UL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_389[i][j] = 0x1BL;
            }
            l_220 = (-1L);
            l_239 = (0x13FF5F7AL & (((*l_243) = (safe_lshift_func_uint16_t_u_u((p_1328->g_55[p_1328->g_85] = p_1328->g_94[p_1328->g_85][(p_1328->g_85 + 2)]), (((((safe_sub_func_uint16_t_u_u((l_225 = 65533UL), (((p_1328->g_104[6][2] = p_1328->g_175) ^ l_227) != (safe_lshift_func_uint8_t_u_u((!(((*l_230) = l_227) >= (safe_lshift_func_int16_t_s_s((+(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_239, (((safe_add_func_int16_t_s_s(l_227, l_227)) >= l_239) == l_239))), l_239)), l_239)) | p_1328->g_175) || 1L)), p_1328->g_77)))), l_227))))) < p_1328->g_77) | l_227) || l_225) <= 8L)))) >= p_1328->g_35));
            for (l_220 = 0; (l_220 != 8); ++l_220)
            { /* block id: 74 */
                for (p_1328->g_35 = 0; (p_1328->g_35 <= 4); p_1328->g_35 += 1)
                { /* block id: 77 */
                    int32_t **l_246 = &l_226[0];
                    int i;
                    l_226[(p_1328->g_35 + 1)] = l_226[p_1328->g_53];
                    l_226[(p_1328->g_85 + 3)] = (void*)0;
                    (*l_246) = (void*)0;
                }
                l_225 = l_227;
            }
            if (((p_1328->g_249 = l_247) == &p_1328->g_156))
            { /* block id: 85 */
                uint8_t *l_253 = (void*)0;
                uint64_t **l_255 = &l_230;
                int32_t l_260 = 0L;
                int32_t *l_264 = &l_239;
                uint64_t *l_291[10][9][2] = {{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}},{{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204},{&p_1328->g_204,&p_1328->g_204}}};
                int i, j, k;
                for (p_1328->g_175 = 8; (p_1328->g_175 > (-21)); --p_1328->g_175)
                { /* block id: 88 */
                    uint8_t *l_252 = &p_1328->g_77;
                    if ((l_252 != l_253))
                    { /* block id: 89 */
                        uint64_t **l_254 = &l_230;
                        l_255 = l_254;
                        return p_1328->g_94[4][1];
                    }
                    else
                    { /* block id: 92 */
                        uint16_t l_258[8] = {0xB50AL,0xB50AL,0xB50AL,0xB50AL,0xB50AL,0xB50AL,0xB50AL,0xB50AL};
                        uint8_t l_261 = 255UL;
                        int i;
                        l_259 |= (safe_sub_func_int16_t_s_s(l_258[1], 0xA109L));
                        l_261++;
                    }
                    l_264 = (*p_1328->g_249);
                }
                if (l_227)
                    continue;
                for (l_225 = (-4); (l_225 == (-2)); l_225 = safe_add_func_int8_t_s_s(l_225, 3))
                { /* block id: 101 */
                    uint32_t l_269 = 0x234F56A3L;
                    int32_t l_270[9][1][5] = {{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}},{{0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L,0x2C26C5A0L}}};
                    int16_t **l_283 = (void*)0;
                    int16_t **l_284 = (void*)0;
                    int16_t **l_285 = &l_282;
                    int32_t l_293 = 9L;
                    uint32_t *l_294 = &p_1328->g_35;
                    int i, j, k;
                    l_239 = ((safe_lshift_func_int8_t_s_s(((l_269 |= 1UL) ^ ((l_270[3][0][1] = l_270[3][0][1]) != p_1328->g_271)), 2)) ^ ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_294) &= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((&p_1328->g_55[p_1328->g_85] != (((((*l_285) = l_282) == l_286) || 9L) , l_286)), 3)) && (safe_rshift_func_int16_t_s_u((+(safe_mod_func_uint8_t_u_u(((void*)0 != l_291[5][4][0]), 0x5FL))), l_292))) < l_293), p_1328->g_104[2][0])), l_293))), l_292)), p_1328->g_175)) || (-1L)));
                    (*p_1328->g_249) = p_51;
                }
            }
            else
            { /* block id: 109 */
                int8_t l_297 = 0L;
                uint32_t l_328 = 0x2E5146B4L;
                uint32_t *l_333 = &p_1328->g_35;
                int32_t l_336 = (-7L);
                int32_t l_341[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int32_t *l_378 = &p_1328->g_375[1];
                uint8_t **l_405 = &l_243;
                uint32_t l_407[7] = {4294967295UL,0x0DA0D204L,4294967295UL,4294967295UL,0x0DA0D204L,4294967295UL,4294967295UL};
                uint32_t l_409[6][8] = {{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL}};
                uint64_t *l_415 = &p_1328->g_204;
                int i, j;
                if (l_292)
                { /* block id: 110 */
                    int32_t l_311 = 0x4541896AL;
                    int64_t *l_330 = (void*)0;
                    int64_t *l_331 = &p_1328->g_175;
                    int32_t l_334[10][3] = {{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L},{(-10L),0x1DCB3F36L,0x2EF739C3L}};
                    int32_t l_338 = 0x126210A3L;
                    int i, j;
                    (*p_1328->g_249) = p_51;
                    for (l_220 = 29; (l_220 >= 33); l_220 = safe_add_func_int64_t_s_s(l_220, 2))
                    { /* block id: 114 */
                        uint32_t l_298 = 1UL;
                        ++l_298;
                        return p_1328->g_271;
                    }
                    l_334[0][1] = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(l_292, (+l_311))) >= ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*l_243) = p_1328->g_55[4]), (safe_div_func_uint16_t_u_u(l_297, (safe_mod_func_uint64_t_u_u(((*l_230) &= ((((((((*l_331) = (safe_rshift_func_int16_t_s_s(((*l_282) = (safe_lshift_func_uint8_t_u_s((l_225 , (safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(l_328, (l_227 >= l_311))) <= l_311), l_329[1]))), 4))), p_1328->g_175))) && 1L) || 1L) != l_292) <= 5L) && 1UL) <= l_328)), 0x579ABDAC233E80B9L)))))), l_227)) < p_1328->g_31)), 3)) > l_311), l_259)) , l_332) != l_333), l_311)), p_1328->g_53));
                    if (l_335[2])
                    { /* block id: 123 */
                        uint32_t l_342[9] = {0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L,0x12241EE3L};
                        int32_t l_345 = 0x15B034C1L;
                        int32_t l_346 = 8L;
                        int32_t l_347 = 0x533111EBL;
                        int32_t l_349[1];
                        uint64_t l_351 = 0xBCA56F5464C12E7FL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_349[i] = 0x5D71E60BL;
                        l_342[2]--;
                        l_338 |= 0x293332FBL;
                        ++l_351;
                    }
                    else
                    { /* block id: 127 */
                        uint8_t **l_355 = &l_242;
                        uint8_t **l_356 = (void*)0;
                        int32_t l_366 = 0x6AD2B3EFL;
                        int8_t *l_376 = &l_297;
                        l_334[0][1] ^= 1L;
                        l_377[2] = ((l_354 == (p_1328->g_357[0][1] = ((*l_355) = l_354))) | ((*l_333) = ((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((+(safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((*l_376) = ((l_366 == ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(0L, l_328)), (safe_rshift_func_uint8_t_u_s(((l_336 , ((l_337 = (((safe_rshift_func_int8_t_s_u(((&p_1328->g_55[2] != ((0x38D2L && 1L) , (void*)0)) != p_1328->g_31), l_366)) , p_1328->g_375[1]) >= l_335[2])) == l_366)) ^ 0x2CL), l_366)))) , l_297)) & 0x3E55L)) >= l_338), l_339)), p_1328->g_77))), 0L)) | p_1328->g_375[1]), 6)) , l_366)));
                    }
                }
                else
                { /* block id: 136 */
                    for (l_337 = 3; (l_337 >= 0); l_337 -= 1)
                    { /* block id: 139 */
                        int i;
                        (*l_247) = &l_341[p_1328->g_85];
                    }
                    (*l_247) = l_378;
                }
                if (((void*)0 != &p_1328->g_35))
                { /* block id: 144 */
                    int32_t l_406 = 0x57538749L;
                    int32_t l_408 = 0x1BF361C2L;
                    int16_t *l_411 = &p_1328->g_412;
                    if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((*l_411) = (safe_lshift_func_uint8_t_u_u(l_389[0][0], (0L ^ ((l_390 , 0x2EB16BC2C94C3D77L) == (safe_sub_func_uint8_t_u_u(l_339, ((safe_lshift_func_int8_t_s_u(((~(safe_div_func_int16_t_s_s(((void*)0 == &p_1328->g_35), ((safe_mul_func_uint16_t_u_u(((0x3F30L & (safe_unary_minus_func_int64_t_s((((l_406 |= (safe_mod_func_int16_t_s_s(((*l_282) = ((safe_mod_func_uint8_t_u_u(((p_1328->g_404 = &p_1328->g_357[1][2]) != l_405), 6L)) <= 0x1BL)), (-6L)))) > l_407[1]) | l_408)))) > l_409[3][1]), 0x1172L)) && 0x3E90L)))) != p_1328->g_85), l_410)) , 0x64L)))))))), p_1328->g_175)), (*l_378))) , 1UL) >= (*l_378)) == p_1328->g_77), l_225)), 13)))
                    { /* block id: 149 */
                        uint64_t **l_414[5] = {&l_413,&l_413,&l_413,&l_413,&l_413};
                        int32_t l_416[6][9] = {{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L},{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L},{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L},{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L},{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L},{0x47D5A120L,0x1DE80916L,0x45E25AF0L,(-9L),(-1L),(-9L),0x45E25AF0L,0x1DE80916L,0x47D5A120L}};
                        int i, j;
                        l_259 = ((l_415 = l_413) != (void*)0);
                        if (l_416[5][0])
                            break;
                        (*l_247) = p_51;
                        return p_1328->g_412;
                    }
                    else
                    { /* block id: 155 */
                        return p_1328->g_94[0][3];
                    }
                }
                else
                { /* block id: 158 */
                    uint8_t l_440 = 249UL;
                    int32_t l_448 = 0x6FBDC7FCL;
                    uint16_t *l_461 = (void*)0;
                    uint16_t *l_462 = (void*)0;
                    uint16_t *l_463 = &p_1328->g_55[4];
                    int64_t *l_464 = &l_390.f1;
                    l_417 |= (p_1328->g_375[1] || l_292);
                    for (l_339 = 29; (l_339 > (-11)); l_339 = safe_sub_func_uint32_t_u_u(l_339, 6))
                    { /* block id: 162 */
                        int16_t l_427 = 0x041AL;
                        int32_t l_441 = 0x5CDEB02BL;
                        l_341[2] &= ((**p_1328->g_404) ^ (((safe_unary_minus_func_int8_t_s(((((l_448 = (safe_mod_func_uint16_t_u_u((0x69ECBE81L || (safe_rshift_func_int16_t_s_u(6L, ((((*l_333)--) < l_427) , p_1328->g_204)))), ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((0x771510854AA61C21L >= (((safe_rshift_func_uint16_t_u_s((l_440 || (l_441 ^= 0x680E88FAL)), 9)) && (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((l_339 & l_427) >= l_348), 2)), l_335[2])), (-1L)))) , l_440)) | l_427) == l_340), p_1328->g_94[4][1])), l_427)), l_440)), l_427)), l_427)) , l_440)))) || l_227) & (*l_378)) | l_259))) < l_340) && p_1328->g_77));
                        return l_227;
                    }
                    if ((((safe_div_func_uint8_t_u_u(((7UL > (((0xAF81L > (((*l_243) = 0xB9L) > (((p_1328->g_104[6][2] & ((safe_mod_func_int64_t_s_s((0xEFD16A6CDCC86991L | ((((p_1328->g_465 |= (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0x1C05L, ((*l_463) &= ((((*l_378) != ((safe_lshift_func_uint16_t_u_u((l_413 != (void*)0), 5)) >= 0L)) , (void*)0) == (*p_1328->g_404))))), 0x1CL)) & 1UL), p_1328->g_104[3][2]))) , l_390.f0) == l_335[3]) > l_440)), l_448)) > l_466[0])) <= l_227) || l_335[2]))) && 0x6E46L) , p_1328->g_465)) , l_440), (*l_378))) , &l_286) != &p_1328->g_119))
                    { /* block id: 172 */
                        (*p_1328->g_249) = p_51;
                    }
                    else
                    { /* block id: 174 */
                        return l_440;
                    }
                }
            }
        }
        if (l_339)
            continue;
        for (p_1328->g_175 = 5; (p_1328->g_175 >= 0); p_1328->g_175 -= 1)
        { /* block id: 183 */
            int64_t l_476 = 0x5988472AB0E2C566L;
            uint16_t *l_477 = &p_1328->g_55[3];
            uint32_t *l_478 = &l_417;
            int64_t *l_525 = &p_1328->g_526;
            for (p_1328->g_412 = 1; (p_1328->g_412 <= 5); p_1328->g_412 += 1)
            { /* block id: 186 */
                uint64_t l_471 = 0x35C94276EAC0C169L;
                uint16_t *l_474 = &p_1328->g_55[4];
                int32_t *l_475 = &l_225;
                int16_t *l_479 = &p_1328->g_96;
                int32_t l_486 = 2L;
                int32_t l_511 = 0x0C74F1F3L;
                int16_t l_541 = (-1L);
                if (((((safe_add_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(l_337, (((((*l_475) = (l_471 ^ (safe_mul_func_int16_t_s_s(((void*)0 == l_474), l_471)))) && 0x65014AA9L) , l_476) > ((l_479 = func_64(l_477, l_478, l_476, p_51, l_282, p_1328)) != (void*)0)))) <= 1L), p_1328->g_375[1])) , l_480) != p_1328->g_482) > p_1328->g_485))
                { /* block id: 189 */
                    uint8_t l_488[6][4][9] = {{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}},{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}},{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}},{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}},{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}},{{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL},{0UL,0x0CL,0x9DL,255UL,0UL,1UL,0UL,0xBBL,9UL}}};
                    int i, j, k;
                    for (l_417 = 0; (l_417 <= 5); l_417 += 1)
                    { /* block id: 192 */
                        int32_t *l_487[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t *l_512 = &l_377[3];
                        int32_t l_513[9][3][2] = {{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}},{{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L},{0x058CFE0BL,0x47973B60L}}};
                        int i, j, k;
                        (*p_1328->g_249) = (*p_1328->g_155);
                        --l_488[5][2][4];
                        (**p_1328->g_155) = 4L;
                        (*l_475) = (l_259 &= (p_1328->g_375[2] &= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((l_488[4][3][5] , (4L > ((!((safe_div_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(p_1328->g_55[4], (((safe_mul_func_uint8_t_u_u(((p_1328->g_271 , (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((65535UL <= ((*l_475) <= ((l_511 && (*l_475)) && ((*l_512) = ((!(((0UL < l_476) < (**p_1328->g_249)) ^ (**p_1328->g_155))) , l_488[5][2][4]))))), (*l_475))), l_340))) ^ l_488[5][2][4]), (*l_475))) >= 0x4FE6EF8BL) || 0xF931866CL))) != l_390.f0), l_488[5][2][4])) == l_476)) , (*p_1328->g_483)))), (*l_475))) & l_513[5][2][1]) != p_1328->g_514), l_488[1][1][8])), l_337)) > (*l_475)), (*l_475))), (**l_247))) >= (-1L))));
                    }
                    (**p_1328->g_249) = (-6L);
                }
                else
                { /* block id: 202 */
                    uint32_t l_515 = 0x50F9AFD8L;
                    uint16_t *l_542 = &p_1328->g_53;
                    for (l_340 = 1; (l_340 <= 5); l_340 += 1)
                    { /* block id: 205 */
                        int32_t l_539 = 0x6948250DL;
                        uint16_t l_543[10][6][1] = {{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}}};
                        int i, j, k;
                        (*p_1328->g_156) |= (*l_475);
                        (*l_475) = (((l_515 != ((!1UL) & (l_516[3] , ((safe_div_func_int8_t_s_s((((((*l_282) = ((((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((void*)0 != l_525), 12)), 6)) || (safe_lshift_func_int8_t_s_s(((((p_1328->g_540 |= ((**p_1328->g_249) || ((safe_sub_func_uint16_t_u_u((p_1328->g_55[p_1328->g_53] &= 0xBD8DL), l_227)) ^ (safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((*l_354) = ((safe_div_func_int16_t_s_s(((l_539 && 0x413FL) , l_466[3]), l_515)) , 255UL)) > (**l_247)) > l_476), (*l_475))), 0UL)) ^ p_1328->g_271), 0x66L))))) && l_541) <= 4294967295UL) || l_340), 7))), (**l_247))) >= l_466[3]) , l_335[2]) <= 0x8FL)) , l_542) == l_286) < l_543[8][0][0]), (*l_475))) & l_515)))) & 0UL) < (*p_1328->g_156));
                        (*l_475) = l_515;
                        return p_1328->g_85;
                    }
                    (*p_1328->g_249) = (*p_1328->g_249);
                }
            }
            for (l_220 = 1; (l_220 <= 5); l_220 += 1)
            { /* block id: 220 */
                for (p_1328->g_465 = 1; (p_1328->g_465 <= 5); p_1328->g_465 += 1)
                { /* block id: 223 */
                    int64_t l_544 = 0x0D4600AA2A5F4B90L;
                    return l_544;
                }
            }
            for (p_1328->g_35 = 0; (p_1328->g_35 <= 5); p_1328->g_35 += 1)
            { /* block id: 229 */
                for (l_476 = 0; (l_476 <= 2); l_476 += 1)
                { /* block id: 232 */
                    for (l_339 = 2; (l_339 >= 0); l_339 -= 1)
                    { /* block id: 235 */
                        int i, j;
                        return p_1328->g_94[(l_339 + 3)][(l_476 + 2)];
                    }
                }
            }
            if (l_340)
                break;
        }
        if ((((safe_add_func_uint8_t_u_u((p_1328->g_547 , (((*l_564) |= (((*l_563) ^= ((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((**p_1328->g_482), ((l_337 &= (safe_lshift_func_uint16_t_u_s((0x173FD62DF29677E1L && l_466[0]), ((*l_282) = ((l_340 , (safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(((0x250C826E0553728DL || (p_1328->g_375[2] , p_1328->g_31)) || (((void*)0 != l_560) && p_1328->g_514)), p_1328->g_104[6][3])), l_561)) != l_350) == 0x7F34663DL), l_339))) ^ l_339))))) ^ p_1328->g_375[1]))) , 0UL), l_377[7])) == l_259)) ^ p_1328->g_547.f0)) , (**p_1328->g_404))), 0x2BL)) >= l_466[0]) >= l_466[2]))
        { /* block id: 246 */
            return p_1328->g_55[5];
        }
        else
        { /* block id: 248 */
            uint16_t *l_567 = &p_1328->g_53;
            int32_t l_583 = 0L;
            int64_t *l_588 = &p_1328->g_526;
            int32_t l_601[2];
            uint32_t l_602[10][4][6] = {{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}},{{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL},{0UL,0xC036BF5AL,4UL,9UL,0x057F657EL,0UL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_601[i] = 0x6D42315CL;
            (*p_1328->g_155) = p_51;
            for (l_390.f2 = 0; (l_390.f2 <= 5); l_390.f2 += 1)
            { /* block id: 252 */
                uint16_t **l_568[9][3][3] = {{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}},{{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567},{&l_567,&l_567,&l_567}}};
                uint64_t *l_569[6][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                int32_t l_584 = 0x0B1538B5L;
                uint32_t l_585 = 0xFCC78FBBL;
                int i, j, k;
                l_584 = (safe_mul_func_uint8_t_u_u(((p_1328->g_570 = (((*l_480) = &p_1328->g_55[4]) == (l_567 = l_567))) > (safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((+0x6EL), 0)) > ((p_51 != l_564) , (((safe_lshift_func_uint8_t_u_u(255UL, ((((safe_sub_func_uint8_t_u_u((**p_1328->g_404), (0x4AL && (safe_add_func_int32_t_s_s((((l_583 == 0x56BED6FDL) == l_584) , 0x3F6F475CL), l_585))))) , p_1328->g_586[1][4]) != (void*)0) != 6L))) , l_588) != l_563))) > 65535UL), 0UL))), l_335[0]));
                for (p_1328->g_570 = 0; (p_1328->g_570 <= 2); p_1328->g_570 += 1)
                { /* block id: 259 */
                    int i;
                    (*p_1328->g_597) = ((safe_mul_func_int16_t_s_s(6L, (l_583 &= (safe_rshift_func_uint8_t_u_u(((**p_1328->g_404)++), 7))))) | (l_340 = (safe_lshift_func_int16_t_s_u(0x7D5DL, 5))));
                    (*l_247) = &p_1328->g_375[p_1328->g_570];
                    for (p_1328->g_526 = 0; (p_1328->g_526 <= 0); p_1328->g_526 += 1)
                    { /* block id: 267 */
                        int i;
                        (*p_1328->g_249) = &p_1328->g_375[p_1328->g_526];
                    }
                    for (p_1328->g_540 = 2; (p_1328->g_540 >= 0); p_1328->g_540 -= 1)
                    { /* block id: 272 */
                        int32_t *l_598 = (void*)0;
                        int32_t *l_599 = (void*)0;
                        int32_t *l_600[3][3][1] = {{{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]}},{{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]}},{{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]},{&p_1328->g_104[2][0]}}};
                        int i, j, k;
                        ++l_602[1][3][0];
                        return p_1328->g_375[p_1328->g_570];
                    }
                }
            }
        }
    }
lbl_979:
    (*p_1328->g_597) = (*p_1328->g_597);
    ++l_607;
    if ((safe_lshift_func_uint16_t_u_s((((((((*l_332) = 0xE3173299L) < l_612) | (1L & ((*l_617) = ((((*l_613) = p_1328->g_412) <= (safe_lshift_func_uint16_t_u_s((**p_1328->g_482), p_1328->g_31))) < (~(safe_unary_minus_func_int64_t_s(p_1328->g_375[1]))))))) , &l_606[0][1][3]) != ((*l_619) = &p_1328->g_156)) != (-1L)), 4)))
    { /* block id: 286 */
        int32_t *l_623 = &p_1328->g_547.f0;
        int32_t l_624 = 1L;
        int32_t l_635 = (-3L);
        int32_t l_637 = 0x39CC346DL;
        int32_t l_638 = 0x2C39B091L;
        int32_t l_639 = 0x637507D4L;
        int32_t l_640 = 3L;
        int32_t l_641 = 0x3BD672F8L;
        int32_t l_642 = 0L;
        int32_t l_643 = (-1L);
        int32_t l_647 = 0x2EEF7B6FL;
        int32_t l_650 = (-1L);
        int32_t l_652 = 0L;
        int32_t l_653 = (-1L);
        int32_t l_654 = 0x17D80D73L;
        int32_t l_655 = 0x07A4572CL;
        int32_t l_656 = 0x738C20BEL;
        int32_t l_657 = 0x3772E24BL;
        int32_t l_658[6][8] = {{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)},{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)},{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)},{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)},{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)},{7L,(-9L),(-9L),7L,(-7L),(-1L),0x20CC581EL,(-1L)}};
        uint32_t l_683 = 0xE4EEB2F5L;
        uint32_t l_820 = 8UL;
        int i, j;
        for (p_1328->g_547.f0 = 0; (p_1328->g_547.f0 != (-7)); p_1328->g_547.f0--)
        { /* block id: 289 */
            int32_t l_622 = 6L;
            int32_t l_633 = (-1L);
            int32_t l_644 = 0x5C5A29C6L;
            int32_t l_646 = 0x778A054CL;
            int32_t l_648 = 0x5E5571C9L;
            int32_t l_649 = 0x04478288L;
            int32_t l_651[8][9][3] = {{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}},{{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL},{(-1L),0x4A8366D3L,0x3C160EACL}}};
            uint32_t l_659[3][1];
            uint64_t *l_671 = &l_377[2];
            int64_t l_680 = (-1L);
            uint32_t l_715 = 0xB4541768L;
            union U0 l_757 = {1L};
            uint16_t l_759 = 65528UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_659[i][j] = 4294967289UL;
            }
            if ((l_622 ^ (l_623 == (void*)0)))
            { /* block id: 290 */
                uint16_t l_631[7][10];
                int32_t l_634 = 0x74CBBDCAL;
                int32_t l_636 = 0x581F72D9L;
                int32_t l_645[9][6] = {{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L},{0L,0x3D5FA540L,0L,0x3D5FA540L,0L,0L}};
                uint16_t l_686 = 6UL;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_631[i][j] = 0x1B7FL;
                }
                l_624 = (l_624 >= (((safe_mul_func_int8_t_s_s(0L, (safe_sub_func_int64_t_s_s(0x0F3DE28B01561442L, l_624)))) , (safe_div_func_uint16_t_u_u(((0L < l_631[1][8]) && (((*l_617) = (0x43B1L || (((*l_282) = l_622) ^ (l_632 > l_622)))) | l_631[5][8])), l_624))) != l_624));
                l_659[1][0]--;
                l_651[3][4][0] ^= (safe_sub_func_uint64_t_u_u((p_1328->g_684 = (0x9FBD4D13L | (safe_unary_minus_func_int64_t_s((safe_mod_func_int8_t_s_s((p_1328->g_104[2][0] , ((+((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int16_t_s((((void*)0 == l_671) <= ((((safe_mod_func_int8_t_s_s(l_633, l_653)) >= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((((((*l_354)++) != l_631[6][5]) >= (l_646 |= (l_680 != (safe_lshift_func_uint8_t_u_u(l_683, l_680))))) < l_645[3][2]) , l_637), 12)), l_631[0][2]))) & p_1328->g_484) , p_1328->g_587)))))), l_656)) || l_631[5][8])) && 0x41DE3DB8L)), l_658[3][5])))))), 18446744073709551612UL));
                for (p_1328->g_485 = 0; (p_1328->g_485 <= 2); p_1328->g_485 += 1)
                { /* block id: 301 */
                    int8_t l_685 = (-10L);
                    int32_t l_708 = 0x4275E69EL;
                    if ((*p_1328->g_597))
                        break;
                    for (l_640 = 0; (l_640 <= 2); l_640 += 1)
                    { /* block id: 305 */
                        uint32_t l_709[4][2][1] = {{{0x01D70C27L},{0x01D70C27L}},{{0x01D70C27L},{0x01D70C27L}},{{0x01D70C27L},{0x01D70C27L}},{{0x01D70C27L},{0x01D70C27L}}};
                        uint8_t *l_710[3];
                        int32_t l_712 = 1L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_710[i] = &p_1328->g_711;
                        l_686++;
                        p_1328->g_375[2] |= (safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint8_t_u_u((l_712 |= ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((18446744073709551607UL ^ 0L), ((*l_282) ^= l_651[(l_640 + 5)][(p_1328->g_485 + 2)][p_1328->g_485]))) && (safe_add_func_uint32_t_u_u(l_685, (safe_sub_func_int32_t_s_s(5L, (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((p_1328->g_684 |= 0xD686L), ((0x5422L ^ (*p_1328->g_483)) , (l_708 = (safe_rshift_func_uint8_t_u_u((((l_651[(l_640 + 5)][(p_1328->g_485 + 2)][p_1328->g_485] == l_651[(l_640 + 5)][(p_1328->g_485 + 2)][p_1328->g_485]) < l_651[(l_640 + 5)][(p_1328->g_485 + 2)][p_1328->g_485]) , l_651[(l_640 + 5)][(p_1328->g_485 + 6)][l_640]), l_649)))))), p_1328->g_77))))))), l_709[2][0][0])) != l_654)), l_655)))), p_1328->g_31));
                    }
                }
            }
            else
            { /* block id: 314 */
                int32_t l_727 = 0x75A0B3E6L;
                int32_t l_742 = 0x6738A108L;
                int32_t l_756 = (-1L);
                int32_t l_762 = (-1L);
                int32_t *l_772 = &l_655;
                l_715 ^= (safe_rshift_func_uint8_t_u_u((l_655 >= 0x3F8A9417L), 6));
                for (l_644 = 0; (l_644 != 3); l_644 = safe_add_func_uint64_t_u_u(l_644, 1))
                { /* block id: 318 */
                    uint32_t l_718 = 1UL;
                    uint32_t l_741 = 0x0B661812L;
                    int32_t l_754[10][1] = {{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L},{0x0E078633L}};
                    int32_t l_755 = (-7L);
                    uint16_t l_769 = 0x45C4L;
                    int i, j;
                    if (((l_718 > (-1L)) == l_658[3][5]))
                    { /* block id: 319 */
                        int16_t l_728 = 0x64B4L;
                        int8_t l_734[4][9][7] = {{{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L}},{{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L}},{{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L}},{{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L},{8L,0L,0x7CL,0x61L,0x0FL,(-9L),0x55L}}};
                        uint64_t l_735 = 0x29A249E0991FFF1CL;
                        int32_t *l_740 = &l_641;
                        int i, j, k;
                        (*p_1328->g_597) = ((((((safe_rshift_func_uint16_t_u_s((**p_1328->g_482), 6)) > (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(p_1328->g_465, 1)), (safe_add_func_uint8_t_u_u((0x1AL && (((*l_332) = (&p_1328->g_249 != &p_1328->g_249)) >= (l_651[5][3][1] |= l_727))), l_728))))) && (((safe_lshift_func_int16_t_s_s(((((0xE078L || (safe_unary_minus_func_uint8_t_u((safe_div_func_uint32_t_u_u((((((*l_671) = (l_639 , l_728)) | p_1328->g_94[5][1]) <= p_1328->g_465) ^ 65535UL), 7UL))))) && l_728) , l_683) && (-9L)), l_728)) ^ (-1L)) >= l_734[0][2][4])) || l_727) > l_715) <= l_718);
                        ++l_735;
                        (*p_1328->g_249) = ((l_648 != (safe_sub_func_int16_t_s_s(l_646, l_715))) , l_740);
                        if (l_718)
                            break;
                    }
                    else
                    { /* block id: 327 */
                        int64_t l_753 = 0x5E8CEE7667F308B9L;
                        int8_t *l_760 = &p_1328->g_761;
                        int32_t l_763 = 0x6890A158L;
                        int32_t l_764 = 0L;
                        int32_t l_765 = 0x2269E97AL;
                        int32_t l_766 = 0x5BA16DA2L;
                        int32_t l_767 = 0x04067AF3L;
                        int32_t l_768[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_768[i] = 0x19CAA841L;
                        l_742 = l_741;
                        l_762 &= (safe_sub_func_int8_t_s_s(((*l_760) = (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((((**p_1328->g_482) >= (safe_mul_func_int8_t_s_s((l_742 = (p_1328->g_758 &= ((*l_617) &= (safe_sub_func_uint32_t_u_u(((l_659[1][0] & ((p_1328->g_85 = ((l_755 = (l_754[8][0] = (l_753 == l_742))) > (l_624 < (l_756 = (&p_1328->g_156 == ((*l_619) = &p_1328->g_156)))))) | (l_757 , (p_1328->g_55[0] && p_1328->g_540)))) | 18446744073709551615UL), l_727))))), l_648))) >= l_759) == p_1328->g_540) , l_639), l_635)), l_640))), 0x5DL));
                        l_769++;
                    }
                    l_742 ^= l_769;
                    (*p_1328->g_249) = (*p_1328->g_155);
                }
                l_772 = &l_651[2][0][2];
            }
            l_773++;
            for (l_757.f0 = 0; (l_757.f0 < (-13)); --l_757.f0)
            { /* block id: 349 */
                int64_t l_778 = 9L;
                (*p_1328->g_597) &= (l_778 < 0x99915114L);
                return p_1328->g_31;
            }
        }
        (*l_247) = p_51;
        p_1328->g_779--;
        for (l_650 = 0; (l_650 <= 23); l_650++)
        { /* block id: 358 */
            uint32_t l_793[10][4] = {{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL},{0x1ECA556BL,0x42DE5508L,0x8D2F43BDL,0xC151413FL}};
            int32_t *l_824 = &p_1328->g_375[1];
            int i, j;
            for (l_640 = 0; (l_640 <= 8); l_640 += 1)
            { /* block id: 361 */
                uint8_t l_804 = 0UL;
                uint64_t *l_819 = &l_377[2];
                uint16_t *l_821 = (void*)0;
                uint16_t *l_822 = &p_1328->g_570;
                int32_t l_823 = (-2L);
                l_823 &= (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_641 && (p_1328->g_540 > l_788)), l_641)), (((safe_mod_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((0xF5L >= l_793[5][1]), (((!((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((*l_822) = (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_804, (safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((((((*l_613) = (safe_mul_func_int16_t_s_s(((((((*l_819) ^= (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(l_793[8][1], (safe_lshift_func_uint8_t_u_u((((((safe_mod_func_int8_t_s_s((-1L), 253UL)) >= 0xB3FBL) < 0x3CA6F223L) > 0x5466633946681462L) != l_793[6][0]), (**p_1328->g_404))))) ^ 0xCAA9L), l_793[5][1]))) ^ l_804) || l_804) < l_804) || 0xD32A41B45D8C8C43L), (*p_1328->g_483)))) != l_804) ^ l_804) & 0x26F30002078CBDE8L) | l_804), l_820)), l_804)))), 0x89EAL))) || 0x04B4L), p_1328->g_758)), l_658[5][1])), l_793[3][3])) < l_793[1][1])) ^ 0x46L) , l_804))) != 1L) == l_804), l_804)) == l_804) & p_1328->g_104[0][1])));
                if (l_793[5][1])
                    break;
                l_824 = &l_653;
            }
        }
    }
    else
    { /* block id: 370 */
        uint32_t l_825[8][6] = {{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL},{0xB138CDCEL,0x90DE35FBL,0xB138CDCEL,0xB138CDCEL,0x90DE35FBL,0xB138CDCEL}};
        int32_t l_841 = 0x551787AFL;
        union U0 l_870[1][8][4] = {{{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}},{{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L},{0x65D5F7F0L}}}};
        uint64_t **l_891 = (void*)0;
        uint32_t **l_936[1][8][2] = {{{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332},{&l_332,&l_332}}};
        int64_t *l_950[1][2][6] = {{{&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526},{&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526,&p_1328->g_526}}};
        uint16_t l_958 = 0x28EAL;
        int i, j, k;
lbl_972:
        --l_825[3][3];
        for (p_1328->g_758 = 27; (p_1328->g_758 == 54); p_1328->g_758 = safe_add_func_uint32_t_u_u(p_1328->g_758, 3))
        { /* block id: 374 */
            uint32_t l_840 = 0x815A1BC4L;
            uint32_t *l_847 = &l_632;
            int32_t l_848 = 9L;
            int32_t l_864 = 0L;
            uint8_t **l_886 = &p_1328->g_357[4][2];
            int8_t l_903 = 4L;
            int64_t *l_908[3];
            int16_t **l_909 = &p_1328->g_119;
            uint16_t l_912 = 0xEA81L;
            uint16_t l_977 = 0UL;
            uint16_t **l_978 = &l_481;
            int i;
            for (i = 0; i < 3; i++)
                l_908[i] = &p_1328->g_526;
            if (((l_848 = (((safe_add_func_uint32_t_u_u(((*l_847) ^= (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((&p_1328->g_155 != (p_1328->g_836 = (void*)0)) , (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((((*l_613) = (l_825[3][3] == (l_841 = ((l_825[5][5] <= 18446744073709551612UL) != (0UL < l_840))))) || (safe_div_func_uint8_t_u_u(((**p_1328->g_404)--), (+((l_841 > ((*l_332) ^= ((l_840 || l_840) || 65533UL))) || l_825[3][3]))))))), l_840))) , p_51) == (void*)0), 0x20C08E42L)), l_846[2]))), (*p_1328->g_597))) >= (-1L)) | p_1328->g_55[1])) && 0xB3L))
            { /* block id: 382 */
                int8_t l_863 = (-1L);
                for (p_1328->g_761 = (-20); (p_1328->g_761 != (-23)); --p_1328->g_761)
                { /* block id: 385 */
                    uint16_t *l_868 = (void*)0;
                    uint16_t *l_869 = (void*)0;
                    l_848 |= ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_1328->g_375[1], (((safe_div_func_uint64_t_u_u(((p_1328->g_485 = ((safe_mod_func_int16_t_s_s(1L, 0x0577L)) , ((p_1328->g_485 >= (((safe_rshift_func_uint8_t_u_s(0xF1L, ((*l_617) = (l_863 | l_863)))) | l_864) , ((safe_unary_minus_func_uint32_t_u((((safe_sub_func_int32_t_s_s(((*p_1328->g_597) = 0x42A23CACL), l_863)) & l_825[6][5]) , 9UL))) == (-1L)))) , (**p_1328->g_482)))) > l_840), l_841)) && l_825[3][1]) || l_841))), p_1328->g_77)), 7)) && 6UL);
                }
                (*l_247) = (*p_1328->g_155);
            }
            else
            { /* block id: 392 */
                uint16_t l_883 = 0x825FL;
                uint8_t l_885 = 0x40L;
                uint64_t ***l_890 = &p_1328->g_887;
                int32_t l_895 = 0x139CF9E7L;
                int32_t l_896 = 0x37FDE51EL;
                uint64_t *l_902 = &p_1328->g_204;
                uint32_t **l_935 = &p_1328->g_102[2];
                int32_t *l_957 = &l_516[3].f0;
                if ((((l_825[3][3] , (void*)0) == (l_870[0][2][0] , (l_891 = ((*l_890) = (((-1L) > (safe_mod_func_uint8_t_u_u((--(*l_354)), (((l_848 , ((((safe_lshift_func_uint16_t_u_u((l_825[3][3] || ((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(l_883, 0UL)), ((safe_unary_minus_func_uint16_t_u(0x249EL)) & p_1328->g_484))), l_883)) | l_864)), p_1328->g_684)) || l_840) & l_885) , l_886)) != &p_1328->g_357[3][1]) , 0x29L)))) , p_1328->g_887))))) || (*p_1328->g_483)))
                { /* block id: 396 */
                    uint8_t l_897 = 0x68L;
                    uint8_t l_944 = 0x75L;
                    for (p_1328->g_526 = 16; (p_1328->g_526 >= (-25)); p_1328->g_526 = safe_sub_func_uint8_t_u_u(p_1328->g_526, 8))
                    { /* block id: 399 */
                        int32_t l_894[7][6] = {{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL},{(-8L),0x2848146FL,0x2848146FL,(-8L),(-8L),0x2848146FL}};
                        int i, j;
                        --l_897;
                        (*p_1328->g_900) = &p_1328->g_547;
                        if (l_894[2][4])
                            continue;
                    }
                    l_903 = (l_902 != (l_848 , &p_1328->g_204));
                    if ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(l_897, (l_908[0] == (void*)0))) || 4294967294UL) ^ ((**p_1328->g_887) & ((l_841 = (**p_1328->g_482)) != ((void*)0 != l_909)))), (safe_mod_func_uint8_t_u_u((l_885 >= l_912), p_1328->g_761)))))
                    { /* block id: 406 */
                        int16_t **l_913 = &p_1328->g_119;
                        uint32_t **l_918[1][1][9];
                        uint64_t **l_924 = &p_1328->g_888[2];
                        int32_t l_925 = 0x65E7D142L;
                        union U0 l_926 = {1L};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 9; k++)
                                    l_918[i][j][k] = &l_847;
                            }
                        }
                        (*p_1328->g_597) &= ((l_913 != l_909) >= (safe_mod_func_int64_t_s_s(((((safe_sub_func_uint64_t_u_u(((p_51 = &p_1328->g_35) != &l_632), (((*l_282) &= p_1328->g_618) != (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((**p_1328->g_404) && l_897))), (safe_mod_func_uint64_t_u_u((((0x4A92L || (l_924 != (void*)0)) , 5L) & l_925), 0x0C418410877397F0L))))))) , l_926) , (*p_51)) | l_841), l_897)));
                    }
                    else
                    { /* block id: 410 */
                        uint32_t ***l_937 = (void*)0;
                        uint32_t ***l_938[1];
                        int64_t *l_949 = &p_1328->g_526;
                        union U0 **l_956[4][3][3] = {{{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0}},{{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0}},{{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0}},{{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0},{&p_1328->g_901,(void*)0,(void*)0}}};
                        union U0 ***l_955 = &l_956[2][2][1];
                        int32_t l_959 = 2L;
                        int32_t *l_960 = &l_846[2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_938[i] = &l_936[0][6][1];
                        (**l_619) = &l_895;
                        l_960 = ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((((l_935 == (p_1328->g_939 = l_936[0][6][1])) < ((l_959 = (((safe_sub_func_uint64_t_u_u(((**p_1328->g_887)++), ((l_944++) >= (safe_div_func_int8_t_s_s((l_949 == l_950[0][0][0]), (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((*l_955) = &p_1328->g_901) == &p_1328->g_901), ((&p_1328->g_540 == (((void*)0 != &p_1328->g_900) , l_957)) || 0x45D48C6FL))), l_897))))))) && l_958) != l_870[0][2][0].f0)) ^ (-1L))) , 0L) || 0x1FA47369BB1407F9L), 65527UL)), 4)), 5)) , l_959), 3)) , &l_959);
                        return l_944;
                    }
                    (*l_247) = p_51;
                }
                else
                { /* block id: 421 */
                    int64_t l_961 = 1L;
                    int32_t l_968[7] = {0x45917D5AL,0x45917D5AL,0x45917D5AL,0x45917D5AL,0x45917D5AL,0x45917D5AL,0x45917D5AL};
                    uint8_t l_969 = 1UL;
                    int i;
                    (**l_619) = (void*)0;
                    if ((l_961 = l_825[3][3]))
                    { /* block id: 424 */
                        union U0 l_962 = {0x0672AE60L};
                        l_896 = ((((void*)0 == p_51) , l_962) , (safe_mul_func_int8_t_s_s((l_961 , (safe_mul_func_uint16_t_u_u(l_967, ((l_961 > (**p_1328->g_887)) <= (-1L))))), 0UL)));
                        l_969--;
                        return l_896;
                    }
                    else
                    { /* block id: 428 */
                        int64_t l_973 = 0L;
                        if (p_1328->g_889)
                            goto lbl_972;
                        l_841 &= 1L;
                        if (l_973)
                            break;
                    }
                }
                if (l_848)
                    break;
            }
            for (p_1328->g_514 = 0; (p_1328->g_514 >= (-21)); p_1328->g_514 = safe_sub_func_int8_t_s_s(p_1328->g_514, 4))
            { /* block id: 438 */
                for (l_225 = 2; (l_225 >= 0); l_225 -= 1)
                { /* block id: 441 */
                    uint8_t l_976 = 1UL;
                    if (l_976)
                        break;
                    for (p_1328->g_570 = 0; (p_1328->g_570 <= 0); p_1328->g_570 += 1)
                    { /* block id: 445 */
                        return l_977;
                    }
                }
            }
            l_841 &= ((void*)0 == l_978);
            if (p_1328->g_175)
                goto lbl_979;
        }
        return l_841;
    }
    return p_1328->g_94[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_94 p_1328->g_104
 * writes: p_1328->g_104
 */
int16_t  func_56(int32_t  p_57, int64_t  p_58, struct S1 * p_1328)
{ /* block id: 55 */
    int32_t *l_218 = &p_1328->g_104[2][0];
    (*l_218) ^= p_1328->g_94[4][1];
    return (*l_218);
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_175 p_1328->g_55 p_1328->g_94 p_1328->g_204 p_1328->g_96 p_1328->g_35 p_1328->g_104 p_1328->g_156 p_1328->g_31
 * writes: p_1328->g_175 p_1328->g_204 p_1328->g_77 p_1328->g_53 p_1328->g_96 p_1328->g_35 p_1328->g_104
 */
uint32_t  func_60(uint16_t * p_61, uint16_t * p_62, int16_t  p_63, struct S1 * p_1328)
{ /* block id: 40 */
    uint32_t l_183 = 4294967295UL;
    int32_t l_205[8][4][8] = {{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}},{{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L},{0L,(-8L),(-5L),0x7184DBDFL,0L,(-10L),0x216281FCL,0x2B659617L}}};
    union U0 l_217 = {0L};
    int i, j, k;
    for (p_1328->g_175 = 5; (p_1328->g_175 != (-12)); p_1328->g_175 = safe_sub_func_int16_t_s_s(p_1328->g_175, 5))
    { /* block id: 43 */
        int32_t **l_188[4][9][7] = {{{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0}},{{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0}},{{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0}},{{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0},{&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,&p_1328->g_156,(void*)0}}};
        uint64_t *l_203[6];
        uint8_t *l_211 = &p_1328->g_77;
        int16_t *l_212 = &p_1328->g_96;
        int16_t l_213 = 0x77C9L;
        uint32_t *l_214 = &p_1328->g_35;
        int32_t ***l_215 = (void*)0;
        int32_t ***l_216 = &l_188[0][4][6];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_203[i] = &p_1328->g_204;
        l_205[7][0][7] |= (+(safe_div_func_uint64_t_u_u((l_183 || (safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((((*l_214) = (((p_1328->g_55[4] , (!(l_188[3][2][6] == l_188[3][2][6]))) | (safe_mul_func_uint16_t_u_u((((*l_212) = ((safe_rshift_func_uint16_t_u_s(p_1328->g_94[0][2], 8)) | (p_1328->g_55[5] < (safe_mod_func_int32_t_s_s(p_63, (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*p_61) = (p_1328->g_175 != ((*l_211) = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((--p_1328->g_204) , (safe_unary_minus_func_uint8_t_u((safe_div_func_uint64_t_u_u(p_63, p_63))))) , 0x58L), l_183)), p_1328->g_96)) & 0x5DB99627L)))), 2)), p_1328->g_35))))))) && l_213), 0xD5E2L))) > p_1328->g_104[0][0])) < (*p_1328->g_156)) | p_1328->g_175) || (*p_1328->g_156)), p_1328->g_55[4])), (*p_62)))), p_63)));
        if (p_63)
            continue;
        (*l_216) = (void*)0;
        (*p_1328->g_156) = (l_217 , (*p_1328->g_156));
    }
    return l_217.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_155 p_1328->g_53 p_1328->g_156 p_1328->g_175 p_1328->g_85 p_1328->g_104
 * writes: p_1328->g_156 p_1328->g_35 p_1328->g_104
 */
uint16_t * func_64(uint16_t * p_65, uint32_t * p_66, int8_t  p_67, uint32_t * p_68, uint16_t * p_69, struct S1 * p_1328)
{ /* block id: 33 */
    uint32_t l_167 = 0xE2FC49ACL;
    uint32_t *l_168 = &p_1328->g_35;
    uint16_t *l_176 = &p_1328->g_55[4];
    (*p_1328->g_155) = &p_1328->g_104[2][0];
    (*p_1328->g_156) |= (248UL != (safe_sub_func_uint8_t_u_u((+(safe_lshift_func_uint8_t_u_s((((p_65 != ((0xF9D3L & ((safe_mod_func_uint16_t_u_u(((((((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(p_67, ((-6L) || (!((*l_168) = l_167))))), (p_1328->g_53 == ((safe_lshift_func_int16_t_s_s((~(~(safe_rshift_func_int8_t_s_u(l_167, (safe_add_func_int16_t_s_s(((l_167 , (*p_1328->g_155)) == p_68), l_167)))))), 10)) , 1UL)))) ^ l_167) & p_1328->g_175) ^ p_67) >= l_167) == p_1328->g_85), p_67)) , p_67)) , l_176)) | p_67) >= 6UL), 0))), p_67)));
    (**p_1328->g_155) = (**p_1328->g_155);
    return &p_1328->g_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_1328->g_53 p_1328->g_35 p_1328->g_94 p_1328->g_85 p_1328->g_103 p_1328->g_55 p_1328->g_104
 * writes: p_1328->g_35 p_1328->g_53 p_1328->g_102 p_1328->g_104 p_1328->g_119 p_1328->g_85 p_1328->g_103
 */
uint16_t * func_70(uint8_t  p_71, int16_t  p_72, uint32_t  p_73, uint32_t  p_74, uint16_t * p_75, struct S1 * p_1328)
{ /* block id: 12 */
    uint16_t l_86 = 0UL;
    uint32_t *l_93 = &p_1328->g_35;
    int16_t *l_95[1][9][6] = {{{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0},{(void*)0,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,(void*)0}}};
    int32_t l_97[1][3];
    uint32_t l_101 = 4294967289UL;
    uint16_t l_149[9] = {0x8E63L,0x8E63L,0x8E63L,0x8E63L,0x8E63L,0x8E63L,0x8E63L,0x8E63L,0x8E63L};
    uint16_t l_152 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_97[i][j] = 0x32E546C5L;
    }
    if (((l_86 > (0x299D621DD8CACF64L | l_86)) && (safe_div_func_uint64_t_u_u((((1L <= (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((p_1328->g_53 ^ (p_73 & (l_97[0][0] ^= (((l_86 > (((*l_93) ^= l_86) || ((0x487F0BBFFD32083BL || p_1328->g_94[4][1]) && p_71))) | p_1328->g_85) == l_86)))), p_1328->g_53)), 0x61E62ED8E9B07D9FL))) < p_72) , l_97[0][0]), l_86))))
    { /* block id: 15 */
        uint16_t *l_100 = (void*)0;
        int16_t *l_117[6] = {&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96,&p_1328->g_96};
        int i;
        for (p_1328->g_53 = 0; (p_1328->g_53 >= 12); p_1328->g_53 = safe_add_func_int8_t_s_s(p_1328->g_53, 8))
        { /* block id: 18 */
            int16_t **l_118[7];
            int64_t *l_120 = &p_1328->g_85;
            int32_t l_123 = 0x5D9B7F14L;
            int32_t *l_124 = &p_1328->g_104[2][0];
            int i;
            for (i = 0; i < 7; i++)
                l_118[i] = &l_95[0][7][2];
            (*p_1328->g_103) = ((65535UL && (p_1328->g_94[4][1] > ((p_75 == ((p_75 != (void*)0) , l_100)) < (((p_74 & l_101) , (p_1328->g_102[0] = &p_73)) == (void*)0)))) < p_74);
            (*p_1328->g_103) = p_72;
            (*l_124) = (((safe_div_func_int8_t_s_s(p_1328->g_94[4][1], (safe_mod_func_int16_t_s_s((1UL != ((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(0x0DC4L, ((((((safe_sub_func_int32_t_s_s((-2L), (safe_add_func_uint64_t_u_u(((l_117[4] == (p_1328->g_119 = &p_72)) | (p_1328->g_55[1] && ((*l_120) |= l_97[0][2]))), (safe_mod_func_uint32_t_u_u((p_1328->g_55[4] , 0x2A7AC8E6L), p_73)))))) ^ 0x06802A6C391FFBB2L) , (-2L)) & 1L) == p_72) , p_1328->g_85))) && l_86), 0x47E15CB465DCB784L)) == l_123)), 65535UL)))) >= p_73) , (-7L));
        }
    }
    else
    { /* block id: 26 */
        int32_t *l_125 = (void*)0;
        int32_t *l_126 = &p_1328->g_104[4][0];
        int32_t *l_127 = (void*)0;
        int32_t *l_128 = &p_1328->g_104[2][0];
        int32_t *l_129 = &l_97[0][0];
        int32_t *l_130 = (void*)0;
        int32_t *l_131 = &p_1328->g_104[5][2];
        int32_t l_132 = 0x21133990L;
        int32_t *l_133 = (void*)0;
        int32_t l_134 = (-1L);
        int32_t *l_135 = (void*)0;
        int32_t *l_136 = &l_132;
        int32_t l_137 = 0x427877F7L;
        int32_t l_138 = (-1L);
        int32_t *l_139 = (void*)0;
        int32_t *l_140 = &l_134;
        int32_t *l_141 = &l_137;
        int32_t *l_142 = &l_132;
        int32_t *l_143 = &l_132;
        int32_t *l_144 = &p_1328->g_104[2][0];
        int32_t *l_145 = (void*)0;
        int32_t *l_146 = &l_134;
        int32_t *l_147 = &l_97[0][1];
        int32_t *l_148[9][3][6] = {{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}},{{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]},{&l_132,&l_97[0][1],&l_97[0][2],&p_1328->g_104[2][0],&l_97[0][0],&p_1328->g_104[2][0]}}};
        int i, j, k;
        --l_149[8];
        l_152++;
        (*l_147) &= (*p_1328->g_103);
        p_1328->g_103 = &l_134;
    }
    return &p_1328->g_53;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1329;
    struct S1* p_1328 = &c_1329;
    struct S1 c_1330 = {
        0x1C3FL, // p_1328->g_31
        0x58C458A9L, // p_1328->g_35
        0x2CE6L, // p_1328->g_53
        {0x2975L,0x2975L,0x2975L,0x2975L,0x2975L,0x2975L}, // p_1328->g_55
        0x4DL, // p_1328->g_77
        0x09D4C80454F8DAE6L, // p_1328->g_85
        {{9UL,1UL,0xAFCEL,1UL,9UL},{9UL,1UL,0xAFCEL,1UL,9UL},{9UL,1UL,0xAFCEL,1UL,9UL},{9UL,1UL,0xAFCEL,1UL,9UL},{9UL,1UL,0xAFCEL,1UL,9UL},{9UL,1UL,0xAFCEL,1UL,9UL}}, // p_1328->g_94
        0x0765L, // p_1328->g_96
        {&p_1328->g_35,&p_1328->g_35,&p_1328->g_35}, // p_1328->g_102
        {{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L},{0x71C6CB56L,0x71C6CB56L,2L,0x353B3785L}}, // p_1328->g_104
        &p_1328->g_104[2][0], // p_1328->g_103
        &p_1328->g_96, // p_1328->g_119
        (void*)0, // p_1328->g_156
        &p_1328->g_156, // p_1328->g_155
        0L, // p_1328->g_175
        0xB4213D0C7CD9FD2CL, // p_1328->g_204
        &p_1328->g_156, // p_1328->g_249
        1L, // p_1328->g_271
        {{&p_1328->g_77,&p_1328->g_77,&p_1328->g_77},{&p_1328->g_77,&p_1328->g_77,&p_1328->g_77},{&p_1328->g_77,&p_1328->g_77,&p_1328->g_77},{&p_1328->g_77,&p_1328->g_77,&p_1328->g_77},{&p_1328->g_77,&p_1328->g_77,&p_1328->g_77}}, // p_1328->g_357
        {0x39CB4D59L,0x39CB4D59L,0x39CB4D59L}, // p_1328->g_375
        &p_1328->g_357[0][1], // p_1328->g_404
        0x4720L, // p_1328->g_412
        0x02DEL, // p_1328->g_465
        0x6894L, // p_1328->g_484
        &p_1328->g_484, // p_1328->g_483
        &p_1328->g_483, // p_1328->g_482
        0x614FL, // p_1328->g_485
        0x5743L, // p_1328->g_514
        0x7D2F0EB4EEB78836L, // p_1328->g_526
        0x42A3AFE2L, // p_1328->g_540
        {2L}, // p_1328->g_547
        5UL, // p_1328->g_570
        1UL, // p_1328->g_587
        {{&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,(void*)0},{&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,(void*)0},{&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,&p_1328->g_587,(void*)0}}, // p_1328->g_586
        &p_1328->g_104[2][3], // p_1328->g_597
        (-5L), // p_1328->g_618
        65535UL, // p_1328->g_684
        251UL, // p_1328->g_711
        0xBA89L, // p_1328->g_758
        0x1EL, // p_1328->g_761
        254UL, // p_1328->g_779
        &p_1328->g_249, // p_1328->g_836
        18446744073709551610UL, // p_1328->g_889
        {&p_1328->g_889,&p_1328->g_889,&p_1328->g_889}, // p_1328->g_888
        &p_1328->g_888[1], // p_1328->g_887
        (void*)0, // p_1328->g_901
        &p_1328->g_901, // p_1328->g_900
        (void*)0, // p_1328->g_939
        0x10B5ED63L, // p_1328->g_981
        4294967295UL, // p_1328->g_1167
        {{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901},{&p_1328->g_901,&p_1328->g_901,&p_1328->g_901}}, // p_1328->g_1169
        {{{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL}},{{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL}},{{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL},{0UL,18446744073709551615UL,0UL,1UL}}}, // p_1328->g_1210
        &p_1328->g_901, // p_1328->g_1262
        {0x7DD30A46L}, // p_1328->g_1296
        &p_1328->g_618, // p_1328->g_1327
        &p_1328->g_1327, // p_1328->g_1326
    };
    c_1329 = c_1330;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1328);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1328->g_31, "p_1328->g_31", print_hash_value);
    transparent_crc(p_1328->g_35, "p_1328->g_35", print_hash_value);
    transparent_crc(p_1328->g_53, "p_1328->g_53", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1328->g_55[i], "p_1328->g_55[i]", print_hash_value);

    }
    transparent_crc(p_1328->g_77, "p_1328->g_77", print_hash_value);
    transparent_crc(p_1328->g_85, "p_1328->g_85", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1328->g_94[i][j], "p_1328->g_94[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1328->g_96, "p_1328->g_96", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1328->g_104[i][j], "p_1328->g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1328->g_175, "p_1328->g_175", print_hash_value);
    transparent_crc(p_1328->g_204, "p_1328->g_204", print_hash_value);
    transparent_crc(p_1328->g_271, "p_1328->g_271", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1328->g_375[i], "p_1328->g_375[i]", print_hash_value);

    }
    transparent_crc(p_1328->g_412, "p_1328->g_412", print_hash_value);
    transparent_crc(p_1328->g_465, "p_1328->g_465", print_hash_value);
    transparent_crc(p_1328->g_484, "p_1328->g_484", print_hash_value);
    transparent_crc(p_1328->g_485, "p_1328->g_485", print_hash_value);
    transparent_crc(p_1328->g_514, "p_1328->g_514", print_hash_value);
    transparent_crc(p_1328->g_526, "p_1328->g_526", print_hash_value);
    transparent_crc(p_1328->g_540, "p_1328->g_540", print_hash_value);
    transparent_crc(p_1328->g_547.f0, "p_1328->g_547.f0", print_hash_value);
    transparent_crc(p_1328->g_570, "p_1328->g_570", print_hash_value);
    transparent_crc(p_1328->g_587, "p_1328->g_587", print_hash_value);
    transparent_crc(p_1328->g_618, "p_1328->g_618", print_hash_value);
    transparent_crc(p_1328->g_684, "p_1328->g_684", print_hash_value);
    transparent_crc(p_1328->g_711, "p_1328->g_711", print_hash_value);
    transparent_crc(p_1328->g_758, "p_1328->g_758", print_hash_value);
    transparent_crc(p_1328->g_761, "p_1328->g_761", print_hash_value);
    transparent_crc(p_1328->g_779, "p_1328->g_779", print_hash_value);
    transparent_crc(p_1328->g_889, "p_1328->g_889", print_hash_value);
    transparent_crc(p_1328->g_981, "p_1328->g_981", print_hash_value);
    transparent_crc(p_1328->g_1167, "p_1328->g_1167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1328->g_1210[i][j][k], "p_1328->g_1210[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1328->g_1296.f0, "p_1328->g_1296.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
