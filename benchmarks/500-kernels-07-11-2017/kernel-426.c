// -g 87,49,1 -l 87,1,1
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


// Seed: 3348426496

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int32_t  f1;
   uint8_t  f2;
   volatile int8_t * f3;
};

union U1 {
   int8_t * volatile  f0;
   volatile int64_t  f1;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3[7][2];
    volatile int32_t g_6;
    volatile int32_t g_7;
    int32_t g_8;
    uint32_t g_32;
    uint64_t g_39[3];
    int8_t g_43;
    int64_t g_66;
    int32_t g_67;
    union U0 g_124;
    uint16_t g_126;
    uint32_t g_128;
    uint8_t g_130;
    int64_t g_132;
    uint32_t g_133;
    int32_t g_134;
    uint32_t g_142;
    uint16_t g_158;
    union U0 g_161[7][6][6];
    uint64_t g_162;
    int32_t *g_168;
    int32_t ** volatile g_167;
    uint32_t g_187;
    uint16_t g_198;
    volatile uint32_t g_213;
    int32_t * volatile g_217;
    int32_t g_223;
    uint32_t g_233[5][2];
    int16_t g_252[7][10];
    int64_t *g_255;
    int64_t **g_254[6][3][4];
    int64_t **g_260;
    volatile uint32_t g_299;
    volatile int16_t g_306;
    volatile int16_t *g_305;
    volatile int16_t * volatile *g_304;
    int8_t **g_327;
    volatile uint16_t g_339;
    uint32_t *g_389;
    int64_t g_407;
    volatile int64_t g_424;
    uint32_t g_426;
    union U0 *g_436;
    union U0 ** volatile g_435;
    int8_t g_461;
    uint32_t g_475;
    int8_t g_510;
    int32_t * volatile g_512;
    int32_t g_559;
    int64_t g_566;
    int32_t g_608;
    uint32_t g_659;
    union U1 g_685[5];
    union U1 * volatile g_684;
    int8_t g_688;
    volatile int16_t g_689;
    uint16_t g_691;
    int32_t *g_717[3];
    int32_t * volatile g_794;
    int32_t * volatile g_795;
    int32_t ** volatile g_846;
    volatile union U0 g_883;
    int32_t g_893;
    int32_t * volatile g_898;
    union U1 g_925;
    union U0 g_929;
    int32_t * volatile g_1007[10][9][2];
    int32_t * volatile g_1008;
    int32_t ** volatile g_1009;
    volatile int8_t g_1057;
    int32_t g_1058;
    int32_t ** volatile g_1065;
    union U1 g_1105;
    int8_t g_1114[1];
    volatile uint64_t g_1156;
    volatile uint64_t g_1157;
    volatile uint64_t g_1158;
    volatile uint64_t g_1159;
    volatile uint64_t g_1160;
    volatile uint64_t g_1161[5];
    volatile uint64_t g_1162[2];
    volatile uint64_t g_1163;
    volatile uint64_t g_1164;
    volatile uint64_t g_1165;
    volatile uint64_t g_1166;
    volatile uint64_t * volatile g_1155[7][4];
    volatile uint64_t g_1168;
    volatile uint64_t * volatile g_1167;
    volatile uint64_t g_1170;
    volatile uint64_t *g_1169;
    volatile uint64_t * volatile *g_1154[2][9][8];
    union U1 g_1230[8];
    union U1 **g_1231;
    union U1 **g_1233;
    int64_t **g_1295;
    volatile union U0 g_1336;
    volatile union U1 g_1340;
    volatile int16_t g_1376;
    uint64_t g_1407;
    union U1 g_1421[3][9][2];
    uint8_t *g_1447;
    uint8_t **g_1446;
    uint8_t ** volatile * volatile g_1445;
    volatile union U1 g_1473;
    volatile union U1 g_1481;
    int64_t *g_1490;
    uint64_t *g_1530;
    volatile union U1 g_1558;
    volatile int16_t g_1635;
    int32_t * volatile g_1642;
    uint16_t g_1743;
    union U0 g_1744[8][8];
    union U1 g_1789;
    uint16_t g_1803[9];
    union U0 g_1813;
};


/* --- FORWARD DECLARATIONS --- */
union U0  func_1(struct S2 * p_1814);
int32_t * func_11(int32_t  p_12, uint32_t  p_13, uint32_t  p_14, struct S2 * p_1814);
int32_t  func_15(int64_t  p_16, struct S2 * p_1814);
uint8_t  func_19(int8_t * p_20, struct S2 * p_1814);
int8_t * func_21(int64_t  p_22, struct S2 * p_1814);
int16_t  func_47(int16_t  p_48, uint32_t  p_49, int8_t  p_50, struct S2 * p_1814);
int64_t  func_71(int64_t  p_72, uint64_t  p_73, struct S2 * p_1814);
uint64_t  func_76(int32_t ** p_77, int8_t * p_78, int32_t  p_79, int16_t  p_80, uint32_t  p_81, struct S2 * p_1814);
int32_t  func_83(int8_t  p_84, int64_t  p_85, uint16_t  p_86, struct S2 * p_1814);
int32_t  func_89(uint64_t  p_90, uint16_t  p_91, int64_t  p_92, int64_t * p_93, struct S2 * p_1814);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1814->g_2 p_1814->g_3 p_1814->g_32 p_1814->g_39 p_1814->g_43 p_1814->g_6 p_1814->g_8 p_1814->g_67 p_1814->g_846 p_1814->g_608 p_1814->g_252 p_1814->g_260 p_1814->g_167 p_1814->g_168 p_1814->g_795 p_1814->g_161.f0 p_1814->g_389 p_1814->g_883 p_1814->g_124.f0 p_1814->g_893 p_1814->g_559 p_1814->g_717 p_1814->g_217 p_1814->g_691 p_1814->g_407 p_1814->g_1635 p_1814->g_1446 p_1814->g_1447 p_1814->g_130 p_1814->g_1642 p_1814->g_1058 p_1814->g_659 p_1814->g_1065 p_1814->g_305 p_1814->g_306 p_1814->g_1407 p_1814->g_132 p_1814->g_1165 p_1814->g_158 p_1814->g_304 p_1814->g_1743 p_1814->g_1744 p_1814->g_566 p_1814->g_162 p_1814->g_255 p_1814->g_688 p_1814->g_1789 p_1814->g_1445 p_1814->g_1803 p_1814->g_223 p_1814->g_794 p_1814->g_1813
 * writes: p_1814->g_3 p_1814->g_8 p_1814->g_32 p_1814->g_39 p_1814->g_43 p_1814->g_66 p_1814->g_67 p_1814->g_717 p_1814->g_142 p_1814->g_168 p_1814->g_252 p_1814->g_255 p_1814->g_126 p_1814->g_130 p_1814->g_124.f0 p_1814->g_893 p_1814->g_559 p_1814->g_608 p_1814->g_407 p_1814->g_161.f0 p_1814->g_1058 p_1814->g_659 p_1814->g_158 p_1814->g_691 p_1814->g_1743 p_1814->g_566 p_1814->g_688 p_1814->g_1803 p_1814->g_684
 */
union U0  func_1(struct S2 * p_1814)
{ /* block id: 4 */
    uint32_t l_25 = 4294967295UL;
    int32_t *l_30[8] = {&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1],&p_1814->g_3[4][1]};
    int32_t l_1693 = 0x1FD3DC6DL;
    uint64_t l_1696 = 18446744073709551615UL;
    int64_t l_1709 = (-7L);
    int64_t **l_1777[10][8][2] = {{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}},{{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255},{&p_1814->g_255,&p_1814->g_255}}};
    uint16_t l_1802 = 65535UL;
    uint64_t l_1808 = 0x99E74639B6C6FC2DL;
    int i, j, k;
lbl_1751:
    if (p_1814->g_2)
    { /* block id: 5 */
        uint16_t l_26 = 0x2894L;
        int32_t l_1624 = (-9L);
        int32_t l_1691 = (-7L);
        int32_t l_1692[3][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
        int8_t l_1694 = 1L;
        int64_t l_1699 = (-5L);
        int8_t l_1700[9] = {0x5AL,0x5AL,0x5AL,0x5AL,0x5AL,0x5AL,0x5AL,0x5AL,0x5AL};
        int8_t l_1701 = 9L;
        int32_t l_1702 = 0x3FEAC0C0L;
        uint8_t l_1703[3];
        uint16_t *l_1706[1][1][7];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1703[i] = 0x13L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_1706[i][j][k] = &p_1814->g_126;
            }
        }
        for (p_1814->g_3[4][1] = 0; (p_1814->g_3[4][1] != 11); p_1814->g_3[4][1] = safe_add_func_int16_t_s_s(p_1814->g_3[4][1], 8))
        { /* block id: 8 */
            int32_t l_1689 = 1L;
            int32_t l_1690[2];
            int64_t l_1695 = 0x52DF7F9AE07A8141L;
            int i;
            for (i = 0; i < 2; i++)
                l_1690[i] = 0x07870BF5L;
            if (p_1814->g_3[2][1])
                break;
            for (p_1814->g_8 = 0; (p_1814->g_8 > (-15)); p_1814->g_8--)
            { /* block id: 12 */
                int32_t *l_29 = &p_1814->g_8;
                int32_t **l_31 = &l_30[6];
                int64_t l_896[3];
                int32_t l_1688[5];
                int i;
                for (i = 0; i < 3; i++)
                    l_896[i] = 0x52097F3887AEFA62L;
                for (i = 0; i < 5; i++)
                    l_1688[i] = 0x1BFDBDFBL;
                (*l_31) = func_11(func_15((~(safe_sub_func_int64_t_s_s((func_19(func_21((safe_mod_func_int16_t_s_s((l_25 > (l_26++)), (p_1814->g_32 |= (l_29 == (l_25 , ((*l_31) = l_30[6])))))), p_1814), p_1814) && ((-1L) && l_896[1])), 0x34309F7F85996813L))), p_1814), p_1814->g_691, l_1624, p_1814);
                --l_1696;
            }
        }
        ++l_1703[2];
        if (p_1814->g_893)
            goto lbl_1710;
lbl_1710:
        l_1709 ^= ((p_1814->g_691--) ^ (0xE656933BL > l_1703[2]));
        for (p_1814->g_158 = 0; (p_1814->g_158 < 1); p_1814->g_158++)
        { /* block id: 808 */
            int64_t l_1734[2];
            int16_t *l_1741 = &p_1814->g_252[3][0];
            int32_t l_1742[4] = {0x7FF468D5L,0x7FF468D5L,0x7FF468D5L,0x7FF468D5L};
            int i;
            for (i = 0; i < 2; i++)
                l_1734[i] = 1L;
            p_1814->g_1743 ^= (safe_mod_func_uint64_t_u_u(1UL, (safe_unary_minus_func_uint16_t_u((l_1742[3] = (safe_div_func_int16_t_s_s((**p_1814->g_304), (+((*l_1741) = (safe_div_func_uint16_t_u_u(p_1814->g_8, (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u((0x6D8C6598L <= ((((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((l_1692[1][2] |= 9UL) <= l_1734[1]), l_1734[1])), 2)) <= 0UL) >= (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((l_1691 &= (safe_lshift_func_uint8_t_u_s((*p_1814->g_1447), 3))), p_1814->g_893)), l_1734[1]))) , 0x16BF1F65L)), l_1734[0])), (-3L))), l_1734[0])), (-3L))))))))))))));
            return p_1814->g_1744[6][1];
        }
    }
    else
    { /* block id: 816 */
        int32_t l_1745 = 0x526719F7L;
        uint32_t l_1746 = 3UL;
        ++l_1746;
    }
    for (p_1814->g_566 = 0; (p_1814->g_566 == 20); p_1814->g_566++)
    { /* block id: 821 */
        int64_t l_1752[4][2][9];
        int16_t l_1753 = 0x41E3L;
        uint64_t l_1762 = 0x6A71B86E34DB7180L;
        int8_t *l_1778 = (void*)0;
        int8_t *l_1779 = &p_1814->g_688;
        int32_t l_1780 = 0x594C51DAL;
        int32_t l_1781 = 0x695DE743L;
        uint64_t l_1782 = 0x541567F51076E223L;
        uint64_t l_1783 = 0x421BB78F32238E43L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 9; k++)
                    l_1752[i][j][k] = 0x12D995CABCEDC95DL;
            }
        }
        if (p_1814->g_1058)
            goto lbl_1751;
        l_1753 &= (l_1752[1][0][6] = (*p_1814->g_1642));
        l_1783 ^= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((0L | (safe_mul_func_uint16_t_u_u(l_1753, (*p_1814->g_305)))), (safe_lshift_func_uint8_t_u_s(((l_1753 | (l_1762 != (safe_mod_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(((0x2E859E83L || (l_1781 = (l_1780 = ((safe_div_func_int8_t_s_s(((*l_1779) |= (((*p_1814->g_389) < (((((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((**p_1814->g_1446), ((((((+((safe_mod_func_int8_t_s_s(((((void*)0 == l_1777[1][6][0]) > p_1814->g_162) & p_1814->g_608), l_1752[1][1][8])) , 0x2D53D1C5F7F725B1L)) | l_1762) , 0L) >= l_1752[1][0][6]) != l_1752[1][0][6]) > (-1L)))) > p_1814->g_130), (*p_1814->g_1447))) || (**p_1814->g_260)) == p_1814->g_893) , l_1752[3][1][7]) < 0x3C3D95FF8FAD5F53L)) , 0x2AL)), (**p_1814->g_1446))) <= 4294967295UL)))) ^ 0x0246L), 0x1EE29132B6012AA0L)) > l_1752[1][0][6]) , (*p_1814->g_389)), 1L)))) ^ l_1782), p_1814->g_124.f0)))), 0x1DA9L));
    }
    for (p_1814->g_1058 = (-15); (p_1814->g_1058 >= 4); p_1814->g_1058++)
    { /* block id: 832 */
        int32_t **l_1786[2];
        int32_t l_1792 = 0L;
        uint64_t l_1799[2];
        uint32_t *l_1809[5];
        int32_t l_1810 = 0x0E05090CL;
        int16_t l_1811 = 1L;
        union U1 *l_1812 = &p_1814->g_685[0];
        int i;
        for (i = 0; i < 2; i++)
            l_1786[i] = &p_1814->g_168;
        for (i = 0; i < 2; i++)
            l_1799[i] = 0UL;
        for (i = 0; i < 5; i++)
            l_1809[i] = (void*)0;
        l_30[6] = (*p_1814->g_846);
        l_1811 = ((*p_1814->g_795) = ((*p_1814->g_794) = (safe_div_func_int16_t_s_s((p_1814->g_1789 , ((safe_sub_func_uint8_t_u_u(l_1792, (safe_rshift_func_uint8_t_u_s((***p_1814->g_1445), (safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(l_1799[0], ((p_1814->g_1803[5] |= l_1802) | (1L >= 1L)))) > ((safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(l_1808, (l_1810 |= (*p_1814->g_389)))) ^ p_1814->g_893), p_1814->g_252[1][1])) , 0x58C811A8D79026C2L)) == 0x8DAFC4F8L), p_1814->g_223)))))) , (*p_1814->g_305))), 0x0E92L))));
        p_1814->g_684 = l_1812;
    }
    return p_1814->g_1813;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_407 p_1814->g_893 p_1814->g_389 p_1814->g_32 p_1814->g_1635 p_1814->g_1446 p_1814->g_1447 p_1814->g_130 p_1814->g_67 p_1814->g_217 p_1814->g_1642 p_1814->g_1058 p_1814->g_659 p_1814->g_1065 p_1814->g_717 p_1814->g_305 p_1814->g_306 p_1814->g_1407 p_1814->g_132 p_1814->g_1165 p_1814->g_846 p_1814->g_168
 * writes: p_1814->g_407 p_1814->g_893 p_1814->g_67 p_1814->g_161.f0 p_1814->g_1058 p_1814->g_659 p_1814->g_158
 */
int32_t * func_11(int32_t  p_12, uint32_t  p_13, uint32_t  p_14, struct S2 * p_1814)
{ /* block id: 766 */
    int16_t l_1632 = 0x0BDFL;
    int8_t ***l_1641 = &p_1814->g_327;
    int8_t ****l_1640 = &l_1641;
    int32_t l_1650 = 0x155A88FEL;
    int32_t l_1663 = 9L;
    int32_t l_1665 = 0L;
    int32_t l_1666 = 1L;
    int32_t l_1667[3];
    int i;
    for (i = 0; i < 3; i++)
        l_1667[i] = (-10L);
    for (p_12 = (-1); (p_12 == (-29)); --p_12)
    { /* block id: 769 */
        int32_t *l_1629 = &p_1814->g_67;
        int32_t l_1647 = (-1L);
        int32_t l_1664 = 0x623A16FBL;
        int32_t l_1668 = 2L;
        int32_t l_1669 = 0x32B2E8FCL;
        uint64_t l_1670 = 0xA4A8DDE5DAEFC76DL;
        int8_t l_1687 = 0x68L;
        for (p_1814->g_407 = 12; (p_1814->g_407 < 23); p_1814->g_407++)
        { /* block id: 772 */
            return l_1629;
        }
        for (p_1814->g_893 = 0; (p_1814->g_893 > 19); p_1814->g_893 = safe_add_func_int16_t_s_s(p_1814->g_893, 1))
        { /* block id: 777 */
            (*l_1629) = p_12;
        }
        (*p_1814->g_1642) = ((*p_1814->g_217) = (l_1632 , ((((safe_lshift_func_uint8_t_u_s((((0x78F13FB26CD7CFEAL <= 0L) & ((*p_1814->g_389) < p_1814->g_1635)) , (safe_add_func_uint8_t_u_u(0xB5L, ((-3L) > (**p_1814->g_1446))))), (safe_add_func_uint16_t_u_u(((((p_12 | 0x77832EFCL) , p_14) , (-6L)) >= p_13), 0x3644L)))) , (void*)0) == l_1640) , (*l_1629))));
        for (p_1814->g_1058 = 0; (p_1814->g_1058 > 8); p_1814->g_1058++)
        { /* block id: 784 */
            uint16_t l_1659 = 65535UL;
            int32_t *l_1662[6];
            uint16_t *l_1675 = &p_1814->g_158;
            int32_t l_1684 = 1L;
            int i;
            for (i = 0; i < 6; i++)
                l_1662[i] = &p_1814->g_67;
            for (p_1814->g_659 = 7; (p_1814->g_659 <= 58); ++p_1814->g_659)
            { /* block id: 787 */
                int32_t *l_1648 = &p_1814->g_929.f0;
                int32_t *l_1649 = &l_1647;
                int32_t *l_1651 = &l_1647;
                int32_t *l_1652 = &p_1814->g_893;
                int32_t *l_1653 = &l_1647;
                int32_t *l_1654 = &p_1814->g_67;
                int32_t *l_1655 = &p_1814->g_67;
                int32_t l_1656[9][2][1] = {{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}},{{0x6E3494CAL},{0x6E3494CAL}}};
                int32_t *l_1657 = &p_1814->g_161[1][5][3].f0;
                int32_t *l_1658 = &p_1814->g_893;
                int i, j, k;
                --l_1659;
                return (*p_1814->g_1065);
            }
            ++l_1670;
            (*l_1629) = (p_14 >= (((((safe_sub_func_uint16_t_u_u(((*l_1675) = p_14), ((~(safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(0x0D97L, 6)) > (((**p_1814->g_1446) == ((*p_1814->g_305) >= p_12)) ^ 0x7F512727EE5BA43CL)), ((l_1684 != (safe_mod_func_int32_t_s_s((((((((p_1814->g_1407 == p_1814->g_132) && 4294967295UL) < p_12) | (*l_1629)) | 0UL) , 0xCD745F7DL) == 1L), l_1687))) || (*l_1629)))), p_13)), p_13))) < (-1L)))) , p_1814->g_1165) > (-1L)) == 9L) <= 0x18L));
            if (p_14)
                continue;
        }
    }
    return (*p_1814->g_846);
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_217 p_1814->g_67 p_1814->g_2
 * writes: p_1814->g_67 p_1814->g_608
 */
int32_t  func_15(int64_t  p_16, struct S2 * p_1814)
{ /* block id: 462 */
    int32_t l_897[10][3][6] = {{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}},{{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L},{0x763334CAL,0x763334CAL,0x6A06DDEEL,6L,(-1L),6L}}};
    uint32_t **l_908 = &p_1814->g_389;
    int32_t l_936 = 0x39109A8FL;
    int32_t l_937 = 0x0610DB07L;
    int32_t l_939 = (-7L);
    int32_t l_968 = 0L;
    int32_t l_974 = (-1L);
    int32_t l_975 = 1L;
    int32_t l_976 = 1L;
    int32_t l_977 = (-1L);
    int32_t l_978 = 0x6BDE5CD8L;
    int32_t l_979 = 0x091ACB82L;
    int32_t l_984 = (-1L);
    int32_t l_985 = (-1L);
    int32_t l_986 = 0L;
    uint16_t l_988 = 2UL;
    int64_t l_1049 = (-7L);
    uint64_t l_1060 = 0x33248FE1FB469367L;
    int32_t l_1113 = 6L;
    union U1 **l_1133 = (void*)0;
    uint8_t *l_1177 = &p_1814->g_130;
    uint8_t **l_1176[9][8] = {{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177},{&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177,&l_1177}};
    uint16_t l_1204 = 65527UL;
    int8_t ***l_1316[3];
    int32_t *l_1326 = (void*)0;
    int16_t l_1377 = 0x3931L;
    int32_t l_1381 = (-1L);
    int32_t l_1382 = 0x33E29A2EL;
    int32_t l_1383[8] = {4L,0x00B780EAL,4L,4L,0x00B780EAL,4L,4L,0x00B780EAL};
    int8_t **l_1487 = (void*)0;
    int32_t l_1580[2];
    int32_t *l_1584[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_1585 = &l_986;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1316[i] = &p_1814->g_327;
    for (i = 0; i < 2; i++)
        l_1580[i] = 0x4D3AE15FL;
    (*p_1814->g_217) |= (l_897[2][1][1] = 0x179AAB6EL);
    for (p_1814->g_608 = 5; (p_1814->g_608 == (-30)); p_1814->g_608 = safe_sub_func_uint16_t_u_u(p_1814->g_608, 1))
    { /* block id: 467 */
        int64_t l_903 = 0x1DC15A87E080983EL;
        int32_t l_915[6] = {0x02B106ADL,0x02B106ADL,0x02B106ADL,0x02B106ADL,0x02B106ADL,0x02B106ADL};
        uint32_t **l_926 = &p_1814->g_389;
        int8_t l_969 = (-4L);
        uint16_t l_1050 = 0x6064L;
        int8_t l_1059 = 0x5AL;
        int64_t *l_1079 = &p_1814->g_407;
        int16_t l_1115 = 0x66D4L;
        uint64_t *l_1172 = &p_1814->g_39[1];
        uint64_t **l_1171[10] = {&l_1172,&l_1172,&l_1172,&l_1172,&l_1172,&l_1172,&l_1172,&l_1172,&l_1172,&l_1172};
        union U1 *l_1229 = &p_1814->g_1230[6];
        union U1 **l_1228 = &l_1229;
        int64_t l_1232 = 0x4CCDB6E348245589L;
        union U1 **l_1235 = (void*)0;
        uint8_t l_1271 = 0UL;
        int32_t l_1317 = 0x62E9D2FDL;
        int64_t l_1362 = 0x2466813F76A2EEB5L;
        int32_t *l_1375[4][7][9] = {{{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977}},{{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977}},{{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977}},{{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977},{(void*)0,&l_974,&p_1814->g_124.f0,(void*)0,&l_968,&l_915[4],&l_975,&l_977,&l_977}}};
        int32_t l_1378 = 0x38004C26L;
        int16_t l_1379 = (-9L);
        int64_t l_1380 = 0x30C5B811DA5148E0L;
        uint16_t l_1384 = 0x0AB1L;
        int16_t l_1411 = (-9L);
        uint32_t l_1414 = 0xD304C00FL;
        union U0 **l_1545 = &p_1814->g_436;
        int i, j, k;
        (1 + 1);
    }
    return p_1814->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_43 p_1814->g_39 p_1814->g_32 p_1814->g_6 p_1814->g_8 p_1814->g_67 p_1814->g_846 p_1814->g_608 p_1814->g_252 p_1814->g_260 p_1814->g_167 p_1814->g_168 p_1814->g_795 p_1814->g_161.f0 p_1814->g_389 p_1814->g_883 p_1814->g_124.f0 p_1814->g_893 p_1814->g_559 p_1814->g_717
 * writes: p_1814->g_43 p_1814->g_66 p_1814->g_67 p_1814->g_717 p_1814->g_142 p_1814->g_168 p_1814->g_39 p_1814->g_252 p_1814->g_255 p_1814->g_126 p_1814->g_130 p_1814->g_124.f0 p_1814->g_893 p_1814->g_559
 */
uint8_t  func_19(int8_t * p_20, struct S2 * p_1814)
{ /* block id: 24 */
    uint16_t l_58[2][1];
    int32_t *l_895 = &p_1814->g_67;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_58[i][j] = 3UL;
    }
    for (p_1814->g_43 = 0; (p_1814->g_43 <= 2); p_1814->g_43 += 1)
    { /* block id: 27 */
        int64_t *l_65 = &p_1814->g_66;
        int16_t *l_891 = &p_1814->g_252[6][3];
        int32_t *l_892 = &p_1814->g_893;
        int i;
        (*l_892) |= (((*l_891) = (safe_mul_func_int16_t_s_s(func_47(p_1814->g_39[p_1814->g_43], ((p_1814->g_67 |= (((*l_65) = (safe_mod_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((p_20 != (void*)0), (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((l_58[1][0] || ((l_58[0][0] & (safe_lshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((p_1814->g_32 <= p_1814->g_6), (safe_div_func_int16_t_s_s(0x756EL, (p_1814->g_39[p_1814->g_43] ^ 65535UL))))) | 0L), p_1814->g_8))) <= 0x79L)) & l_58[0][0]) || l_58[1][0]))), 2)))) , 0x58A35CCC4EFF443AL), p_1814->g_8))) , l_58[1][0])) <= 0x1CC5CA36L), (*p_20), p_1814), 0x214AL))) && l_58[1][0]);
    }
    for (p_1814->g_559 = 0; (p_1814->g_559 <= 2); p_1814->g_559 += 1)
    { /* block id: 457 */
        int32_t **l_894 = (void*)0;
        int i;
        p_1814->g_717[p_1814->g_559] = p_1814->g_717[p_1814->g_559];
    }
    l_895 = l_895;
    return (*l_895);
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_39
 * writes: p_1814->g_39
 */
int8_t * func_21(int64_t  p_22, struct S2 * p_1814)
{ /* block id: 16 */
    int32_t l_35 = (-3L);
    int32_t l_36 = 0x7E80A7C6L;
    int32_t l_38 = 1L;
    int8_t *l_44 = &p_1814->g_43;
    for (p_22 = 0; (p_22 != (-11)); p_22 = safe_sub_func_uint64_t_u_u(p_22, 7))
    { /* block id: 19 */
        int32_t *l_37[10][5] = {{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]},{&l_35,&p_1814->g_3[6][0],&p_1814->g_3[4][1],&p_1814->g_8,&p_1814->g_3[6][0]}};
        int8_t *l_42 = &p_1814->g_43;
        int i, j;
        ++p_1814->g_39[0];
        return l_42;
    }
    return l_44;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_846 p_1814->g_608 p_1814->g_39 p_1814->g_252 p_1814->g_260 p_1814->g_126 p_1814->g_130 p_1814->g_167 p_1814->g_168 p_1814->g_795 p_1814->g_161.f0 p_1814->g_389 p_1814->g_32 p_1814->g_883 p_1814->g_124.f0 p_1814->g_142
 * writes: p_1814->g_67 p_1814->g_717 p_1814->g_142 p_1814->g_168 p_1814->g_39 p_1814->g_252 p_1814->g_255 p_1814->g_126 p_1814->g_130 p_1814->g_124.f0
 */
int16_t  func_47(int16_t  p_48, uint32_t  p_49, int8_t  p_50, struct S2 * p_1814)
{ /* block id: 30 */
    int32_t *l_68 = &p_1814->g_67;
    int32_t l_69 = 1L;
    int8_t *l_82 = (void*)0;
    int32_t l_437 = 0x04166A81L;
    uint32_t **l_473 = &p_1814->g_389;
    int16_t *l_506 = &p_1814->g_252[6][0];
    int16_t **l_505 = &l_506;
    uint32_t l_507 = 4294967289UL;
    union U0 *l_524 = &p_1814->g_161[1][5][3];
    uint16_t l_672 = 1UL;
    int32_t l_690 = 0x23BFABFCL;
    uint32_t l_711 = 2UL;
    int16_t l_712 = 0x24AEL;
    int64_t ***l_727 = (void*)0;
    int32_t l_773 = 0x30FD0672L;
    int32_t l_775 = (-1L);
    int32_t l_827[2][2] = {{0L,0L},{0L,0L}};
    uint32_t l_835 = 4294967293UL;
    int8_t l_876 = (-1L);
    int32_t **l_890[7][6] = {{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0},{&p_1814->g_717[2],&p_1814->g_717[0],&p_1814->g_717[1],(void*)0,&p_1814->g_168,(void*)0}};
    int i, j;
    if ((l_69 = ((*l_68) = (-1L))))
    { /* block id: 33 */
        int32_t **l_70 = &l_68;
        int32_t *l_438 = (void*)0;
        int32_t l_439 = 8L;
        int16_t *l_504[10] = {&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0],&p_1814->g_252[3][0]};
        int16_t **l_503 = &l_504[4];
        union U0 *l_523 = &p_1814->g_124;
        int16_t l_535 = 0x2867L;
        int16_t l_609 = 0x0204L;
        uint32_t l_621 = 0x503E9856L;
        uint8_t *l_634 = (void*)0;
        int32_t l_669 = 6L;
        int32_t l_670 = 4L;
        int32_t l_671[10][8] = {{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L},{0L,0L,0x01150BD0L,1L,0L,1L,0x01150BD0L,0L}};
        uint32_t l_679 = 0x775D51C2L;
        int i, j;
        (*l_70) = &l_69;
    }
    else
    { /* block id: 401 */
        uint8_t l_839 = 0UL;
        int32_t l_840 = 0L;
        int32_t **l_884 = (void*)0;
        int32_t **l_885 = &p_1814->g_168;
lbl_864:
        l_840 |= ((*l_68) = l_839);
        for (l_839 = (-16); (l_839 <= 30); ++l_839)
        { /* block id: 406 */
            int32_t *l_843 = &p_1814->g_608;
            int32_t **l_844 = &p_1814->g_717[2];
            int32_t l_874 = 0x533D2075L;
            int32_t l_877 = 0x691A0446L;
            uint8_t l_878 = 0x11L;
            (*l_844) = l_843;
            for (p_1814->g_142 = 0; (p_1814->g_142 <= 1); p_1814->g_142 += 1)
            { /* block id: 410 */
                int32_t **l_845 = (void*)0;
                uint64_t *l_851 = &p_1814->g_39[0];
                int64_t *l_857 = &p_1814->g_132;
                (*p_1814->g_846) = ((*l_844) = (void*)0);
                (*l_68) = ((&p_1814->g_794 != ((safe_add_func_uint64_t_u_u(((*l_851) &= (*l_843)), ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((p_49 || p_49), 11)), ((**l_505) &= p_49))))) != p_50))) , (void*)0)) || ((((((*p_1814->g_260) = l_857) != (void*)0) != (-9L)) >= p_49) >= 1UL));
                for (p_1814->g_126 = 0; (p_1814->g_126 <= 1); p_1814->g_126 += 1)
                { /* block id: 419 */
                    uint32_t l_861[7] = {0xAB200073L,0xAB200073L,0xAB200073L,0xAB200073L,0xAB200073L,0xAB200073L,0xAB200073L};
                    int32_t l_865 = (-7L);
                    int32_t *l_866 = &l_437;
                    int32_t *l_867 = &p_1814->g_161[1][5][3].f0;
                    int32_t *l_868 = &p_1814->g_67;
                    int32_t *l_869 = &p_1814->g_67;
                    int32_t *l_870 = &l_69;
                    int32_t *l_871 = &l_840;
                    int32_t *l_872 = &l_690;
                    int32_t *l_873[9] = {&l_775,&l_775,&l_775,&l_775,&l_775,&l_775,&l_775,&l_775,&l_775};
                    int64_t l_875 = (-4L);
                    int i;
                    if ((*l_843))
                        break;
                    for (p_1814->g_130 = 0; (p_1814->g_130 <= 1); p_1814->g_130 += 1)
                    { /* block id: 423 */
                        int32_t *l_858 = &l_69;
                        int32_t *l_859 = &l_437;
                        int32_t *l_860[6] = {&l_827[0][0],&l_827[1][0],&l_827[0][0],&l_827[0][0],&l_827[1][0],&l_827[0][0]};
                        int i;
                        --l_861[0];
                        if (l_839)
                            goto lbl_864;
                        (*l_844) = (*p_1814->g_167);
                        return p_50;
                    }
                    ++l_878;
                }
            }
        }
        if (((*p_1814->g_795) > (*p_1814->g_389)))
        { /* block id: 433 */
            int32_t l_881 = 0L;
            return l_881;
        }
        else
        { /* block id: 435 */
            int32_t **l_882[6] = {&l_68,&p_1814->g_168,&l_68,&l_68,&p_1814->g_168,&l_68};
            int i;
            l_68 = &l_827[1][1];
        }
        (*l_885) = (p_1814->g_883 , (void*)0);
    }
    if ((*l_68))
    { /* block id: 440 */
        int16_t l_889[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int i;
        for (l_69 = 12; (l_69 < (-22)); l_69 = safe_sub_func_uint64_t_u_u(l_69, 2))
        { /* block id: 443 */
            int32_t *l_888 = &p_1814->g_124.f0;
            (*l_888) |= 0x5D7E642BL;
        }
        return l_889[1];
    }
    else
    { /* block id: 447 */
        (*l_68) = (0x69D29924L != (*p_1814->g_389));
    }
    (*p_1814->g_846) = (void*)0;
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_339 p_1814->g_461 p_1814->g_389 p_1814->g_32 p_1814->g_39 p_1814->g_67
 * writes: p_1814->g_162 p_1814->g_461 p_1814->g_39 p_1814->g_67
 */
int64_t  func_71(int64_t  p_72, uint64_t  p_73, struct S2 * p_1814)
{ /* block id: 221 */
    uint64_t *l_442 = &p_1814->g_162;
    int32_t l_443 = 0L;
    uint16_t l_458 = 0x8D68L;
    int8_t *l_459 = (void*)0;
    int8_t *l_460 = &p_1814->g_461;
    uint64_t *l_462 = &p_1814->g_39[2];
    int32_t *l_463 = (void*)0;
    int32_t *l_464 = &p_1814->g_124.f0;
    int32_t *l_465 = &p_1814->g_67;
    (*l_465) &= (((*l_462) ^= (safe_mod_func_int32_t_s_s((((l_443 = ((*l_442) = (p_73 | p_1814->g_339))) && ((*l_442) = (safe_lshift_func_int16_t_s_s((((*l_460) ^= (safe_mod_func_int32_t_s_s(0x5486C482L, (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((void*)0 == l_442) != (p_72 >= (0UL == p_73))), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((0x2CL < 0x6FL), 4)), 7)), 0)) | p_73))) && l_458), l_458))))) < l_443), p_72)))) ^ (*p_1814->g_389)), l_458))) , l_458);
    return p_72;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_3 p_1814->g_66 p_1814->g_2 p_1814->g_43 p_1814->g_32 p_1814->g_124 p_1814->g_67 p_1814->g_39 p_1814->g_124.f0 p_1814->g_128 p_1814->g_130 p_1814->g_8 p_1814->g_133 p_1814->g_6 p_1814->g_161 p_1814->g_162 p_1814->g_158 p_1814->g_167 p_1814->g_134 p_1814->g_7 p_1814->g_187 p_1814->g_142 p_1814->g_126 p_1814->g_198 p_1814->g_161.f0 p_1814->g_213 p_1814->g_217
 * writes: p_1814->g_32 p_1814->g_67 p_1814->g_126 p_1814->g_128 p_1814->g_130 p_1814->g_132 p_1814->g_124.f0 p_1814->g_133 p_1814->g_134 p_1814->g_39 p_1814->g_142 p_1814->g_158 p_1814->g_168 p_1814->g_187 p_1814->g_198 p_1814->g_124.f2 p_1814->g_161.f0
 */
uint64_t  func_76(int32_t ** p_77, int8_t * p_78, int32_t  p_79, int16_t  p_80, uint32_t  p_81, struct S2 * p_1814)
{ /* block id: 35 */
    uint32_t l_102 = 0x99CB9CEBL;
    int32_t l_113[4][5][1] = {{{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL}},{{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL}},{{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL}},{{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL},{0x52D78A3DL}}};
    int32_t *l_216 = &p_1814->g_161[1][5][3].f0;
    int32_t *l_218 = &p_1814->g_124.f0;
    int32_t *l_219 = &p_1814->g_124.f0;
    int32_t *l_220 = &l_113[2][4][0];
    int32_t *l_221[4] = {&p_1814->g_161[1][5][3].f0,&p_1814->g_161[1][5][3].f0,&p_1814->g_161[1][5][3].f0,&p_1814->g_161[1][5][3].f0};
    int32_t l_222 = 3L;
    uint64_t l_224 = 0x354AD2E39DC23C6EL;
    int64_t **l_261 = (void*)0;
    int8_t l_297 = 0x7CL;
    volatile int16_t * volatile *l_307[3][9] = {{&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0,&p_1814->g_305,&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0},{&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0,&p_1814->g_305,&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0},{&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0,&p_1814->g_305,&p_1814->g_305,(void*)0,&p_1814->g_305,(void*)0}};
    uint8_t *l_384 = (void*)0;
    union U0 *l_434 = &p_1814->g_124;
    int i, j, k;
    (*p_1814->g_217) = ((*l_216) = func_83(p_1814->g_3[3][0], (safe_sub_func_int32_t_s_s(func_89((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_79, p_1814->g_66)), (-6L))), ((l_102 && 1L) || 0x2DD72F77L))), ((safe_div_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((0x3AL == (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_s(l_102, 9)) && 0xFBAEL) >= l_102) & 18446744073709551612UL) , 0UL), (-1L))) || l_113[2][4][0]), 7))), 0xCAFAL)) | p_1814->g_2) >= (-2L)) >= p_1814->g_66) <= 0x5D16L), p_1814->g_43)) && l_113[2][4][0]))), p_80, l_102, &p_1814->g_66, p_1814), l_113[3][1][0])), p_79, p_1814));
    ++l_224;
    return (*l_216);
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_66
 * writes: p_1814->g_168
 */
int32_t  func_83(int8_t  p_84, int64_t  p_85, uint16_t  p_86, struct S2 * p_1814)
{ /* block id: 79 */
    int32_t *l_214 = (void*)0;
    int32_t **l_215 = &p_1814->g_168;
    (*l_215) = l_214;
    return p_1814->g_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_1814->g_32 p_1814->g_124 p_1814->g_67 p_1814->g_39 p_1814->g_124.f0 p_1814->g_128 p_1814->g_130 p_1814->g_8 p_1814->g_133 p_1814->g_66 p_1814->g_6 p_1814->g_161 p_1814->g_162 p_1814->g_158 p_1814->g_167 p_1814->g_134 p_1814->g_7 p_1814->g_187 p_1814->g_142 p_1814->g_43 p_1814->g_126 p_1814->g_198 p_1814->g_161.f0 p_1814->g_213
 * writes: p_1814->g_32 p_1814->g_67 p_1814->g_126 p_1814->g_128 p_1814->g_130 p_1814->g_132 p_1814->g_124.f0 p_1814->g_133 p_1814->g_134 p_1814->g_39 p_1814->g_142 p_1814->g_158 p_1814->g_168 p_1814->g_187 p_1814->g_198 p_1814->g_124.f2
 */
int32_t  func_89(uint64_t  p_90, uint16_t  p_91, int64_t  p_92, int64_t * p_93, struct S2 * p_1814)
{ /* block id: 36 */
    int8_t *l_116 = &p_1814->g_43;
    uint32_t *l_121 = &p_1814->g_32;
    int32_t *l_125[10] = {&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67,&p_1814->g_67};
    uint32_t *l_127 = &p_1814->g_128;
    int8_t l_129 = (-1L);
    int64_t *l_131 = &p_1814->g_132;
    int8_t **l_135 = &l_116;
    uint32_t l_141 = 0x15252EC4L;
    int32_t l_143 = 6L;
    int16_t l_154 = 0L;
    uint32_t l_156[2];
    uint8_t l_191[9] = {0x99L,0UL,0x99L,0x99L,0UL,0x99L,0x99L,0UL,0x99L};
    int32_t l_203 = (-1L);
    int32_t l_212 = 3L;
    int i;
    for (i = 0; i < 2; i++)
        l_156[i] = 0x60D04652L;
    p_1814->g_133 ^= (p_1814->g_124.f0 = (((safe_lshift_func_int16_t_s_s((l_116 == l_116), 9)) ^ (~4294967295UL)) < ((*l_131) = (8L == (safe_lshift_func_int16_t_s_s(((p_1814->g_130 &= ((((*l_127) |= ((p_1814->g_126 = (((safe_lshift_func_uint16_t_u_s(((p_1814->g_67 &= (((*l_121)--) & (p_1814->g_124 , 0x37F256DAL))) <= p_1814->g_39[0]), 13)) , ((l_116 == (void*)0) ^ p_90)) , p_1814->g_124.f0)) < p_90)) & 4294967295UL) , l_129)) ^ p_90), p_1814->g_8))))));
    l_143 = (p_1814->g_67 = ((((*l_121) = (((*l_135) = func_21((p_1814->g_134 = (*p_93)), p_1814)) == ((safe_div_func_int16_t_s_s(p_1814->g_8, ((safe_unary_minus_func_uint8_t_u(((p_1814->g_142 = (p_90 <= (safe_add_func_int32_t_s_s(l_141, (l_131 != l_131))))) == ((&p_1814->g_128 != (void*)0) > 0x0255L)))) | p_1814->g_130))) , &p_1814->g_43))) && p_91) , 0x061C211FL));
    for (p_91 = 0; (p_91 <= 9); p_91 += 1)
    { /* block id: 53 */
        int32_t l_155 = 0x2CCF6E19L;
        int16_t *l_157[6] = {&l_154,(void*)0,&l_154,&l_154,(void*)0,&l_154};
        int i;
        p_1814->g_67 |= (safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s((l_125[p_91] != (void*)0), (safe_div_func_uint16_t_u_u(1UL, ((!(safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((p_1814->g_158 = (((l_154 == l_155) , (-8L)) , ((((p_90 > p_92) <= p_90) , l_156[1]) && 0xE694L))) || p_91) , p_1814->g_6), 4)), p_91))) , p_1814->g_124.f0))))) ^ p_92) || 0x2E1E1C95L), 0x0454759984D6A5DCL));
    }
    for (p_1814->g_130 = (-20); (p_1814->g_130 > 42); p_1814->g_130++)
    { /* block id: 59 */
        uint32_t l_165 = 0x6DFB0B29L;
        int32_t *l_166[4][10][6] = {{{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0}},{{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0}},{{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0}},{{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0},{&p_1814->g_161[1][5][3].f0,(void*)0,(void*)0,&p_1814->g_161[1][5][3].f0,&p_1814->g_67,(void*)0}}};
        uint8_t *l_183 = &p_1814->g_124.f2;
        uint8_t *l_184 = &p_1814->g_124.f2;
        uint8_t *l_185 = &p_1814->g_124.f2;
        uint8_t *l_186[3][4][4] = {{{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130}},{{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130}},{{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130},{&p_1814->g_130,&p_1814->g_130,&p_1814->g_130,&p_1814->g_130}}};
        uint16_t *l_190 = &p_1814->g_126;
        int i, j, k;
        (*p_1814->g_167) = ((4L | (p_1814->g_67 = (+(p_1814->g_130 , ((p_1814->g_161[1][5][3] , p_1814->g_162) | (safe_sub_func_int16_t_s_s(p_1814->g_158, l_165))))))) , l_166[2][9][4]);
        if (p_92)
            continue;
        if ((((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_127) = ((((safe_lshift_func_int16_t_s_u((+(p_1814->g_128 & (+(safe_rshift_func_int8_t_s_s((p_91 | (((p_90 ^ (safe_sub_func_uint8_t_u_u((p_1814->g_134 >= (-10L)), (p_1814->g_187 |= (safe_rshift_func_int8_t_s_u(p_1814->g_133, p_1814->g_7)))))) ^ ((*l_190) &= ((safe_lshift_func_int16_t_s_s(((((*l_135) != &p_1814->g_43) | p_1814->g_142) | p_1814->g_43), 15)) && p_90))) == p_92)), 5))))), 1)) && 0x2E07L) , p_92) >= l_191[4])), 0x8EA7C6D6L)), 0x5F9CL)), 1UL)) , p_92) < p_1814->g_43))
        { /* block id: 66 */
            int32_t *l_192 = &p_1814->g_161[1][5][3].f0;
            int32_t **l_193 = &l_166[2][8][0];
            if (p_90)
                break;
            l_125[9] = ((*l_193) = l_192);
            if (p_91)
                continue;
        }
        else
        { /* block id: 71 */
            int32_t l_194 = 3L;
            int32_t l_195 = 0x25DDED77L;
            int32_t l_196 = (-1L);
            int32_t l_197 = 0x0CA9B3D7L;
            p_1814->g_198++;
            l_197 = 1L;
            l_195 = ((0L > (safe_mod_func_uint32_t_u_u(((+p_1814->g_67) <= p_1814->g_198), (l_203 | p_1814->g_198)))) ^ ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(p_1814->g_128, (safe_sub_func_int8_t_s_s(0x7CL, p_1814->g_161[1][5][3].f0)))) > ((((*l_185) = (safe_div_func_int16_t_s_s(p_90, l_195))) ^ l_212) & 65528UL)), 1)) || p_1814->g_213));
        }
    }
    return p_92;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1815;
    struct S2* p_1814 = &c_1815;
    struct S2 c_1816 = {
        0x2AEB9AE7L, // p_1814->g_2
        {{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L},{0x04445559L,0x0707DFE4L}}, // p_1814->g_3
        3L, // p_1814->g_6
        0x2733582FL, // p_1814->g_7
        0x3414B58EL, // p_1814->g_8
        6UL, // p_1814->g_32
        {0x0039C1D55E0ECF58L,0x0039C1D55E0ECF58L,0x0039C1D55E0ECF58L}, // p_1814->g_39
        (-8L), // p_1814->g_43
        (-1L), // p_1814->g_66
        0x6A1EA569L, // p_1814->g_67
        {0L}, // p_1814->g_124
        0xB75FL, // p_1814->g_126
        1UL, // p_1814->g_128
        0x57L, // p_1814->g_130
        (-1L), // p_1814->g_132
        4294967295UL, // p_1814->g_133
        (-1L), // p_1814->g_134
        0x60635580L, // p_1814->g_142
        0x79E6L, // p_1814->g_158
        {{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}},{{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}},{{1L},{0L},{9L},{0x38AAF256L},{-6L},{0x2AD0072BL}}}}, // p_1814->g_161
        18446744073709551606UL, // p_1814->g_162
        &p_1814->g_161[1][5][3].f0, // p_1814->g_168
        &p_1814->g_168, // p_1814->g_167
        4294967295UL, // p_1814->g_187
        0x79E9L, // p_1814->g_198
        7UL, // p_1814->g_213
        &p_1814->g_67, // p_1814->g_217
        (-3L), // p_1814->g_223
        {{0x0FE71AB9L,0x0FE71AB9L},{0x0FE71AB9L,0x0FE71AB9L},{0x0FE71AB9L,0x0FE71AB9L},{0x0FE71AB9L,0x0FE71AB9L},{0x0FE71AB9L,0x0FE71AB9L}}, // p_1814->g_233
        {{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL},{0x4317L,0x0DDEL,0x41A1L,0x41A1L,0x0DDEL,0x4317L,(-10L),0x235EL,0L,0x516BL}}, // p_1814->g_252
        &p_1814->g_132, // p_1814->g_255
        {{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}},{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}},{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}},{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}},{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}},{{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255},{&p_1814->g_255,(void*)0,(void*)0,&p_1814->g_255}}}, // p_1814->g_254
        &p_1814->g_255, // p_1814->g_260
        1UL, // p_1814->g_299
        0x409EL, // p_1814->g_306
        &p_1814->g_306, // p_1814->g_305
        &p_1814->g_305, // p_1814->g_304
        (void*)0, // p_1814->g_327
        0x297BL, // p_1814->g_339
        &p_1814->g_32, // p_1814->g_389
        1L, // p_1814->g_407
        1L, // p_1814->g_424
        0x4DB7E52BL, // p_1814->g_426
        (void*)0, // p_1814->g_436
        &p_1814->g_436, // p_1814->g_435
        0x0FL, // p_1814->g_461
        4294967295UL, // p_1814->g_475
        0x14L, // p_1814->g_510
        (void*)0, // p_1814->g_512
        (-1L), // p_1814->g_559
        0x06AFFD7EFBB5068EL, // p_1814->g_566
        1L, // p_1814->g_608
        0xF591D6D7L, // p_1814->g_659
        {{0},{0},{0},{0},{0}}, // p_1814->g_685
        &p_1814->g_685[0], // p_1814->g_684
        1L, // p_1814->g_688
        0x65EEL, // p_1814->g_689
        0x721FL, // p_1814->g_691
        {&p_1814->g_8,&p_1814->g_8,&p_1814->g_8}, // p_1814->g_717
        &p_1814->g_124.f0, // p_1814->g_794
        &p_1814->g_161[1][5][3].f0, // p_1814->g_795
        &p_1814->g_168, // p_1814->g_846
        {-8L}, // p_1814->g_883
        0x4B14362AL, // p_1814->g_893
        (void*)0, // p_1814->g_898
        {0}, // p_1814->g_925
        {1L}, // p_1814->g_929
        {{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}},{{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0},{&p_1814->g_124.f0,&p_1814->g_161[1][5][3].f0}}}, // p_1814->g_1007
        &p_1814->g_161[1][5][3].f0, // p_1814->g_1008
        &p_1814->g_717[2], // p_1814->g_1009
        5L, // p_1814->g_1057
        2L, // p_1814->g_1058
        &p_1814->g_717[2], // p_1814->g_1065
        {0}, // p_1814->g_1105
        {(-9L)}, // p_1814->g_1114
        8UL, // p_1814->g_1156
        18446744073709551615UL, // p_1814->g_1157
        0xD5507053CE443042L, // p_1814->g_1158
        0x8F3CC6C3EBA6A41CL, // p_1814->g_1159
        0UL, // p_1814->g_1160
        {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL}, // p_1814->g_1161
        {1UL,1UL}, // p_1814->g_1162
        0x30D33D4157767F4AL, // p_1814->g_1163
        0x18FBCF4245549F8FL, // p_1814->g_1164
        0x8FF35853DC42E627L, // p_1814->g_1165
        0x3B00F8EEA1FA8A72L, // p_1814->g_1166
        {{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0},{&p_1814->g_1165,&p_1814->g_1165,&p_1814->g_1163,(void*)0}}, // p_1814->g_1155
        0xA3B7B59F43D8449DL, // p_1814->g_1168
        &p_1814->g_1168, // p_1814->g_1167
        18446744073709551615UL, // p_1814->g_1170
        &p_1814->g_1170, // p_1814->g_1169
        {{{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0}},{{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0},{&p_1814->g_1169,&p_1814->g_1169,(void*)0,(void*)0,&p_1814->g_1169,&p_1814->g_1169,&p_1814->g_1169,(void*)0}}}, // p_1814->g_1154
        {{0},{0},{0},{0},{0},{0},{0},{0}}, // p_1814->g_1230
        (void*)0, // p_1814->g_1231
        (void*)0, // p_1814->g_1233
        (void*)0, // p_1814->g_1295
        {-1L}, // p_1814->g_1336
        {0}, // p_1814->g_1340
        0x01A6L, // p_1814->g_1376
        0xCFF2256376BF91D3L, // p_1814->g_1407
        {{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},{{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}}}, // p_1814->g_1421
        &p_1814->g_130, // p_1814->g_1447
        &p_1814->g_1447, // p_1814->g_1446
        &p_1814->g_1446, // p_1814->g_1445
        {0}, // p_1814->g_1473
        {0}, // p_1814->g_1481
        &p_1814->g_66, // p_1814->g_1490
        (void*)0, // p_1814->g_1530
        {0}, // p_1814->g_1558
        1L, // p_1814->g_1635
        &p_1814->g_161[1][5][3].f0, // p_1814->g_1642
        65535UL, // p_1814->g_1743
        {{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}},{{-1L},{1L},{1L},{-1L},{0x7761E272L},{-8L},{5L},{8L}}}, // p_1814->g_1744
        {0}, // p_1814->g_1789
        {65535UL,0UL,65535UL,65535UL,0UL,65535UL,65535UL,0UL,65535UL}, // p_1814->g_1803
        {0x764B3234L}, // p_1814->g_1813
    };
    c_1815 = c_1816;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1814);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1814->g_2, "p_1814->g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1814->g_3[i][j], "p_1814->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1814->g_6, "p_1814->g_6", print_hash_value);
    transparent_crc(p_1814->g_7, "p_1814->g_7", print_hash_value);
    transparent_crc(p_1814->g_8, "p_1814->g_8", print_hash_value);
    transparent_crc(p_1814->g_32, "p_1814->g_32", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1814->g_39[i], "p_1814->g_39[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_43, "p_1814->g_43", print_hash_value);
    transparent_crc(p_1814->g_66, "p_1814->g_66", print_hash_value);
    transparent_crc(p_1814->g_67, "p_1814->g_67", print_hash_value);
    transparent_crc(p_1814->g_124.f0, "p_1814->g_124.f0", print_hash_value);
    transparent_crc(p_1814->g_126, "p_1814->g_126", print_hash_value);
    transparent_crc(p_1814->g_128, "p_1814->g_128", print_hash_value);
    transparent_crc(p_1814->g_130, "p_1814->g_130", print_hash_value);
    transparent_crc(p_1814->g_132, "p_1814->g_132", print_hash_value);
    transparent_crc(p_1814->g_133, "p_1814->g_133", print_hash_value);
    transparent_crc(p_1814->g_134, "p_1814->g_134", print_hash_value);
    transparent_crc(p_1814->g_142, "p_1814->g_142", print_hash_value);
    transparent_crc(p_1814->g_158, "p_1814->g_158", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1814->g_161[i][j][k].f0, "p_1814->g_161[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1814->g_162, "p_1814->g_162", print_hash_value);
    transparent_crc(p_1814->g_187, "p_1814->g_187", print_hash_value);
    transparent_crc(p_1814->g_198, "p_1814->g_198", print_hash_value);
    transparent_crc(p_1814->g_213, "p_1814->g_213", print_hash_value);
    transparent_crc(p_1814->g_223, "p_1814->g_223", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1814->g_233[i][j], "p_1814->g_233[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1814->g_252[i][j], "p_1814->g_252[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1814->g_299, "p_1814->g_299", print_hash_value);
    transparent_crc(p_1814->g_306, "p_1814->g_306", print_hash_value);
    transparent_crc(p_1814->g_339, "p_1814->g_339", print_hash_value);
    transparent_crc(p_1814->g_407, "p_1814->g_407", print_hash_value);
    transparent_crc(p_1814->g_424, "p_1814->g_424", print_hash_value);
    transparent_crc(p_1814->g_426, "p_1814->g_426", print_hash_value);
    transparent_crc(p_1814->g_461, "p_1814->g_461", print_hash_value);
    transparent_crc(p_1814->g_475, "p_1814->g_475", print_hash_value);
    transparent_crc(p_1814->g_510, "p_1814->g_510", print_hash_value);
    transparent_crc(p_1814->g_559, "p_1814->g_559", print_hash_value);
    transparent_crc(p_1814->g_566, "p_1814->g_566", print_hash_value);
    transparent_crc(p_1814->g_608, "p_1814->g_608", print_hash_value);
    transparent_crc(p_1814->g_659, "p_1814->g_659", print_hash_value);
    transparent_crc(p_1814->g_688, "p_1814->g_688", print_hash_value);
    transparent_crc(p_1814->g_689, "p_1814->g_689", print_hash_value);
    transparent_crc(p_1814->g_691, "p_1814->g_691", print_hash_value);
    transparent_crc(p_1814->g_883.f0, "p_1814->g_883.f0", print_hash_value);
    transparent_crc(p_1814->g_893, "p_1814->g_893", print_hash_value);
    transparent_crc(p_1814->g_929.f0, "p_1814->g_929.f0", print_hash_value);
    transparent_crc(p_1814->g_1057, "p_1814->g_1057", print_hash_value);
    transparent_crc(p_1814->g_1058, "p_1814->g_1058", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1814->g_1114[i], "p_1814->g_1114[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_1156, "p_1814->g_1156", print_hash_value);
    transparent_crc(p_1814->g_1157, "p_1814->g_1157", print_hash_value);
    transparent_crc(p_1814->g_1158, "p_1814->g_1158", print_hash_value);
    transparent_crc(p_1814->g_1159, "p_1814->g_1159", print_hash_value);
    transparent_crc(p_1814->g_1160, "p_1814->g_1160", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1814->g_1161[i], "p_1814->g_1161[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1814->g_1162[i], "p_1814->g_1162[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_1163, "p_1814->g_1163", print_hash_value);
    transparent_crc(p_1814->g_1164, "p_1814->g_1164", print_hash_value);
    transparent_crc(p_1814->g_1165, "p_1814->g_1165", print_hash_value);
    transparent_crc(p_1814->g_1166, "p_1814->g_1166", print_hash_value);
    transparent_crc(p_1814->g_1168, "p_1814->g_1168", print_hash_value);
    transparent_crc(p_1814->g_1170, "p_1814->g_1170", print_hash_value);
    transparent_crc(p_1814->g_1336.f0, "p_1814->g_1336.f0", print_hash_value);
    transparent_crc(p_1814->g_1376, "p_1814->g_1376", print_hash_value);
    transparent_crc(p_1814->g_1407, "p_1814->g_1407", print_hash_value);
    transparent_crc(p_1814->g_1635, "p_1814->g_1635", print_hash_value);
    transparent_crc(p_1814->g_1743, "p_1814->g_1743", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1814->g_1744[i][j].f0, "p_1814->g_1744[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1814->g_1803[i], "p_1814->g_1803[i]", print_hash_value);

    }
    transparent_crc(p_1814->g_1813.f0, "p_1814->g_1813.f0", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
