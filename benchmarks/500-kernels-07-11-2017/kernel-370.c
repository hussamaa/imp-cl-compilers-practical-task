// -g 77,98,1 -l 1,98,1
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


// Seed: 1804086561

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint16_t  f0;
};

union U1 {
   uint32_t  f0;
   int64_t  f1;
   volatile int16_t  f2;
};

union U2 {
   int64_t  f0;
   int8_t * volatile  f1;
   int64_t  f2;
   int64_t  f3;
};

union U3 {
   volatile uint64_t  f0;
};

union U4 {
   int32_t  f0;
   volatile int64_t  f1;
   uint64_t  f2;
   int8_t * f3;
   int64_t  f4;
};

struct S5 {
    int32_t g_3;
    uint64_t g_16;
    volatile int32_t g_22;
    volatile int32_t g_23[2];
    int32_t g_24;
    union U3 g_38;
    union U3 g_57;
    union U3 *g_56[5][8];
    int8_t g_66;
    uint8_t g_83;
    uint64_t g_89;
    uint64_t g_106;
    uint16_t g_120[8];
    uint16_t g_122;
    int16_t g_126;
    int8_t g_128[9][5][5];
    int64_t g_131;
    uint64_t g_133[6];
    uint8_t g_137;
    union U0 g_160;
    union U3 g_167;
    uint8_t *g_174;
    int32_t g_201;
    uint32_t g_203[7];
    volatile union U4 g_206;
    volatile union U4 *g_205;
    union U2 g_211[9][4];
    union U2 *g_213;
    int32_t *g_245;
    int32_t **g_244[8][8][3];
    volatile int8_t g_251;
    volatile int8_t g_252;
    volatile int8_t g_253;
    volatile int8_t g_254;
    volatile int8_t *g_250[9];
    volatile int8_t **g_249[1][7][3];
    uint32_t g_261;
    union U4 g_276;
    union U4 g_278;
    uint64_t g_330;
    uint32_t g_350;
    union U4 g_352;
    int64_t *g_397;
    uint8_t g_436;
    int16_t g_494;
    union U4 g_522;
    union U4 g_524;
    volatile union U1 g_584;
    volatile union U1 *g_583;
    uint32_t g_637;
    union U3 g_641[6];
    union U3 g_642;
    union U3 g_643[6];
    union U3 g_644[7][2][8];
    union U3 g_645[7][9][1];
    union U3 g_646;
    union U3 g_647;
    union U3 g_648[2];
    union U3 g_649[8][5];
    union U3 g_650;
    union U3 g_651[1][9][4];
    union U3 g_652;
    union U3 g_653;
    union U3 g_654;
    union U3 g_655;
    union U3 g_656[8][6][5];
    union U3 g_657;
    union U3 g_658;
    union U3 g_660;
    union U2 g_668;
    union U1 g_677;
    uint64_t *g_712;
    uint64_t **g_711;
    union U2 g_744;
    union U4 g_788;
    union U4 g_790;
    union U4 g_791[6][3][6];
    union U4 g_792[1];
    union U4 g_793;
    union U1 g_824;
    union U4 g_828[10][3];
    union U3 g_866;
    int32_t ** volatile g_883[3][5];
    int32_t * volatile g_906;
    volatile int16_t g_948;
    volatile int16_t *g_947;
    volatile int16_t **g_946;
    union U0 *g_997;
    union U0 ** volatile g_996[6];
    volatile union U2 g_1012;
    int32_t * volatile g_1051;
    int32_t ** volatile g_1052[7];
    union U2 g_1068[9][4][7];
    int64_t **g_1132;
    int64_t *** volatile g_1131[5];
    int64_t *** volatile g_1133;
    volatile union U2 g_1161;
    union U3 g_1166;
    uint16_t g_1178;
    int64_t g_1182;
    int64_t *g_1185[7][3][5];
    int64_t **g_1184[2];
    int64_t *** volatile g_1183[3];
    int64_t *** volatile g_1186;
    union U1 *g_1202[9];
    union U3 g_1212;
    int32_t *g_1227[1];
    int32_t **g_1226;
    volatile union U2 g_1238;
    union U4 *g_1258;
    union U4 **g_1257;
    union U3 g_1315;
    union U3 g_1341;
    union U3 g_1351;
    union U3 g_1352;
    union U3 g_1354[5];
    union U3 *g_1353;
    volatile union U4 g_1357;
    union U2 g_1384;
    int64_t g_1505;
    int32_t ** volatile g_1531[7];
    int32_t ** volatile g_1532;
    int32_t g_1561;
    int32_t *g_1565;
    int32_t **g_1564[7];
    int32_t *** volatile g_1563;
    int32_t ** volatile g_1609;
    int32_t ** volatile g_1610[7][8];
    int32_t ** volatile g_1611;
    int32_t ** volatile g_1616;
    union U4 g_1669[2];
    volatile uint32_t g_1683[4][7][7];
    volatile uint32_t *g_1682;
    volatile uint32_t ** volatile g_1681;
    union U3 g_1707[8];
};


/* --- FORWARD DECLARATIONS --- */
union U3  func_1(struct S5 * p_1708);
int32_t  func_5(int16_t  p_6, int8_t * p_7, int32_t  p_8, struct S5 * p_1708);
int32_t  func_11(uint32_t  p_12, uint32_t  p_13, int16_t  p_14, uint32_t  p_15, struct S5 * p_1708);
int32_t  func_19(uint64_t  p_20, struct S5 * p_1708);
union U3 * func_25(int8_t  p_26, int32_t * p_27, int32_t * p_28, union U3 * p_29, struct S5 * p_1708);
union U3  func_30(uint32_t  p_31, struct S5 * p_1708);
int8_t  func_34(int32_t * p_35, uint8_t  p_36, struct S5 * p_1708);
int8_t  func_41(uint32_t  p_42, uint32_t  p_43, union U3 * p_44, struct S5 * p_1708);
uint16_t  func_48(uint32_t  p_49, int32_t  p_50, int16_t  p_51, union U3 * p_52, struct S5 * p_1708);
int8_t  func_61(int8_t * p_62, uint64_t  p_63, int8_t * p_64, struct S5 * p_1708);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1708->g_16 p_1708->g_3 p_1708->g_24 p_1708->g_23 p_1708->g_261 p_1708->g_436 p_1708->g_522.f0 p_1708->g_330 p_1708->g_1505 p_1708->g_744.f0 p_1708->g_660.f0 p_1708->g_824.f0 p_1708->g_1227 p_1708->g_790.f0 p_1708->g_1132 p_1708->g_397 p_1708->g_131 p_1708->g_494 p_1708->g_788.f0 p_1708->g_1532 p_1708->g_637 p_1708->g_1212.f0 p_1708->g_83 p_1708->g_128 p_1708->g_245 p_1708->g_160.f0 p_1708->g_1563 p_1708->g_1166.f0 p_1708->g_906 p_1708->g_133 p_1708->g_946 p_1708->g_947 p_1708->g_948 p_1708->g_137 p_1708->g_1611 p_1708->g_1616 p_1708->g_1565 p_1708->g_1561 p_1708->g_793.f0 p_1708->g_644.f0 p_1708->g_66 p_1708->g_211.f0 p_1708->g_1257 p_1708->g_1068 p_1708->g_203 p_1708->g_1669 p_1708->g_167.f0 p_1708->g_89 p_1708->g_1178 p_1708->g_1681 p_1708->g_106 p_1708->g_668.f0 p_1708->g_1186 p_1708->g_1184 p_1708->g_1226 p_1708->g_122 p_1708->g_1051 p_1708->g_1707
 * writes: p_1708->g_16 p_1708->g_24 p_1708->g_23 p_1708->g_436 p_1708->g_824.f0 p_1708->g_494 p_1708->g_133 p_1708->g_245 p_1708->g_637 p_1708->g_120 p_1708->g_1178 p_1708->g_160.f0 p_1708->g_1564 p_1708->g_522.f0 p_1708->g_1182 p_1708->g_824.f1 p_1708->g_137 p_1708->g_3 p_1708->g_1565 p_1708->g_790.f0 p_1708->g_1258 p_1708->g_244 p_1708->g_83 p_1708->g_89 p_1708->g_1184 p_1708->g_792.f0
 */
union U3  func_1(struct S5 * p_1708)
{ /* block id: 4 */
    int32_t *l_2[10] = {&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3,&p_1708->g_3};
    int32_t l_4 = 7L;
    int64_t **l_1499[7] = {(void*)0,&p_1708->g_397,(void*)0,(void*)0,&p_1708->g_397,(void*)0,(void*)0};
    uint8_t *l_1502 = &p_1708->g_436;
    int64_t l_1503 = (-6L);
    int16_t l_1504 = 0L;
    uint16_t l_1618 = 0x7386L;
    int i;
    l_4 = (-1L);
    (*p_1708->g_1051) = func_5((((safe_div_func_int32_t_s_s((func_11((++p_1708->g_16), (((p_1708->g_3 , p_1708->g_3) | func_19(p_1708->g_3, p_1708)) & (((safe_add_func_int32_t_s_s((!(l_1499[3] != l_1499[6])), ((((((*l_1502) ^= p_1708->g_261) || (l_1503 , 0L)) == p_1708->g_522.f0) == p_1708->g_330) > l_1504))) | p_1708->g_261) ^ p_1708->g_522.f0)), p_1708->g_1505, p_1708->g_744.f0, p_1708) <= p_1708->g_131), 0xF963611BL)) && 0xD994ED0AL) | l_1618), &p_1708->g_66, (*p_1708->g_1565), p_1708);
    return p_1708->g_1707[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_3 p_1708->g_793.f0 p_1708->g_436 p_1708->g_947 p_1708->g_948 p_1708->g_644.f0 p_1708->g_946 p_1708->g_66 p_1708->g_211.f0 p_1708->g_790.f0 p_1708->g_1257 p_1708->g_160.f0 p_1708->g_128 p_1708->g_1068 p_1708->g_16 p_1708->g_203 p_1708->g_1669 p_1708->g_167.f0 p_1708->g_83 p_1708->g_89 p_1708->g_1178 p_1708->g_494 p_1708->g_1681 p_1708->g_1132 p_1708->g_397 p_1708->g_131 p_1708->g_106 p_1708->g_668.f0 p_1708->g_1186 p_1708->g_1184 p_1708->g_1226 p_1708->g_1227 p_1708->g_122
 * writes: p_1708->g_3 p_1708->g_16 p_1708->g_1565 p_1708->g_436 p_1708->g_790.f0 p_1708->g_1258 p_1708->g_160.f0 p_1708->g_244 p_1708->g_83 p_1708->g_89 p_1708->g_1178 p_1708->g_494 p_1708->g_1184 p_1708->g_245
 */
int32_t  func_5(int16_t  p_6, int8_t * p_7, int32_t  p_8, struct S5 * p_1708)
{ /* block id: 773 */
    int32_t *l_1634 = &p_1708->g_1561;
    int16_t l_1641 = (-6L);
    int32_t l_1642 = 3L;
    int32_t **l_1657 = &p_1708->g_245;
    uint32_t *l_1685[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_1684 = &l_1685[6];
    int8_t *l_1697 = &p_1708->g_128[7][0][0];
    uint64_t ***l_1705 = &p_1708->g_711;
    int i;
    for (p_1708->g_3 = 0; (p_1708->g_3 <= 2); p_1708->g_3 += 1)
    { /* block id: 776 */
        uint8_t l_1619 = 253UL;
        int32_t l_1637[7] = {0L,0L,0L,0L,0L,0L,0L};
        uint16_t *l_1649 = &p_1708->g_160.f0;
        int32_t l_1672 = 1L;
        int i;
        l_1619 &= 7L;
        if (p_6)
            break;
        for (p_1708->g_16 = 0; (p_1708->g_16 <= 5); p_1708->g_16 += 1)
        { /* block id: 781 */
            uint32_t l_1622 = 0x35506434L;
            int32_t *l_1632 = &p_1708->g_1561;
            int32_t **l_1633 = &p_1708->g_1565;
            int32_t *l_1635[4] = {&p_1708->g_1561,&p_1708->g_1561,&p_1708->g_1561,&p_1708->g_1561};
            uint8_t *l_1636[7];
            int32_t *l_1640 = &p_1708->g_790.f0;
            int32_t l_1658 = 0x5C9F17ECL;
            uint16_t *l_1663 = &p_1708->g_160.f0;
            int i;
            for (i = 0; i < 7; i++)
                l_1636[i] = &p_1708->g_436;
            if ((((l_1642 = ((l_1641 = ((l_1622 ^ 65535UL) | (((safe_unary_minus_func_uint8_t_u((p_1708->g_793.f0 > (safe_mul_func_uint8_t_u_u(l_1622, (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_8, (safe_lshift_func_uint8_t_u_u((p_6 , ((l_1634 = ((*l_1633) = l_1632)) != l_1635[1])), (++p_1708->g_436))))), (((*l_1640) = (-1L)) , (*p_1708->g_947))))))))) , p_1708->g_644[1][1][4].f0) != p_8))) || 0x7BL)) , (**p_1708->g_946)) != 0x59BAL))
            { /* block id: 788 */
                uint16_t *l_1651 = (void*)0;
                uint16_t **l_1650 = &l_1651;
                int32_t l_1652 = 0x6228F0A5L;
                (*l_1640) ^= (((*p_7) || 0UL) | (((p_6 >= 0UL) != p_1708->g_211[3][1].f0) > (safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(p_6, (safe_add_func_int64_t_s_s(((l_1649 != ((*l_1650) = l_1649)) & p_6), l_1652)))) , 0UL), 1L))));
                return (*l_1640);
            }
            else
            { /* block id: 792 */
                union U4 *l_1653 = &p_1708->g_792[0];
                (*p_1708->g_1257) = l_1653;
                for (p_1708->g_160.f0 = 1; (p_1708->g_160.f0 <= 5); p_1708->g_160.f0 += 1)
                { /* block id: 796 */
                    int32_t l_1673 = 0x1B9D7F53L;
                    for (l_1619 = 0; (l_1619 <= 4); l_1619 += 1)
                    { /* block id: 799 */
                        int32_t ***l_1654 = &p_1708->g_244[3][2][2];
                        int32_t **l_1656 = (void*)0;
                        int32_t ***l_1655[5][7][7] = {{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}},{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}},{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}},{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}},{{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656},{&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656,&l_1656}}};
                        uint16_t **l_1664 = (void*)0;
                        uint16_t **l_1665 = (void*)0;
                        uint16_t **l_1666 = &l_1663;
                        int i, j, k;
                        l_1658 |= ((p_1708->g_128[(l_1619 + 2)][l_1619][l_1619] <= (+(p_1708->g_1068[8][3][4] , (p_1708->g_83 = (p_1708->g_436 = ((*l_1640) = (((*l_1654) = &p_1708->g_245) == (l_1657 = &p_1708->g_245)))))))) || p_1708->g_203[p_1708->g_16]);
                        (*l_1640) ^= (l_1673 &= ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(0UL, (((*l_1666) = l_1663) == (void*)0))), (safe_lshift_func_uint16_t_u_s(0xE26CL, 10)))) < (p_6 >= ((p_1708->g_1669[1] , (p_1708->g_167.f0 ^ ((4UL == ((l_1672 = ((safe_mod_func_int64_t_s_s(0x424362C759D99B59L, p_8)) != 0x147004DCEF3909FBL)) ^ (*p_7))) <= (-1L)))) || p_6))));
                    }
                }
                for (p_1708->g_83 = 0; (p_1708->g_83 <= 4); p_1708->g_83 += 1)
                { /* block id: 814 */
                    for (p_1708->g_89 = 0; (p_1708->g_89 <= 5); p_1708->g_89 += 1)
                    { /* block id: 817 */
                        int i, j, k;
                        return p_1708->g_128[(p_1708->g_16 + 3)][(p_1708->g_3 + 2)][(p_1708->g_3 + 2)];
                    }
                }
            }
            for (p_1708->g_1178 = 0; (p_1708->g_1178 <= 5); p_1708->g_1178 += 1)
            { /* block id: 824 */
                uint32_t l_1674 = 0x743A86EFL;
                l_1674 ^= 1L;
                for (p_1708->g_494 = 0; (p_1708->g_494 <= 3); p_1708->g_494 += 1)
                { /* block id: 828 */
                    int32_t l_1688[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1688[i] = 0L;
                    l_1688[0] |= (0x1B07E75CL || (((0x7784464F1E74B795L & p_1708->g_128[(p_1708->g_494 + 5)][(p_1708->g_3 + 1)][p_1708->g_3]) ^ 8L) , (p_8 <= (safe_rshift_func_uint16_t_u_s(((*l_1663) = ((((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint64_t_u_u(l_1637[3], (((p_1708->g_1681 != l_1684) == (safe_mul_func_uint8_t_u_u((p_1708->g_160.f0 & p_8), 0L))) == (**p_1708->g_1132)))) >= p_1708->g_106), 2)) < (-2L)) && 4294967294UL) , p_1708->g_668.f0)), p_6)))));
                    if (p_6)
                        break;
                }
            }
        }
    }
    for (p_1708->g_494 = 0; (p_1708->g_494 > 23); ++p_1708->g_494)
    { /* block id: 838 */
        int16_t l_1691 = 0x3777L;
        int64_t ***l_1700 = &p_1708->g_1132;
        int64_t ****l_1701 = &l_1700;
        int32_t l_1702 = 0x0766104CL;
        int16_t *l_1703 = &l_1691;
        int32_t *l_1704 = &p_1708->g_201;
        int32_t *l_1706 = &p_1708->g_790.f0;
        (*p_1708->g_1186) = (*p_1708->g_1186);
        if (l_1691)
            continue;
        (*l_1706) |= (((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(p_8)), (safe_sub_func_int32_t_s_s((p_7 != l_1697), ((l_1702 = (((*l_1701) = l_1700) != &p_1708->g_1132)) & (((((((*l_1703) = (p_6 = p_6)) != ((((l_1704 != (*p_1708->g_1226)) <= (1L != p_8)) , (*p_7)) || (*p_7))) || p_1708->g_122) ^ (-2L)) && 0UL) < 1UL)))))) , (void*)0) == l_1705);
    }
    (*l_1657) = &l_1642;
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_660.f0 p_1708->g_824.f0 p_1708->g_1227 p_1708->g_790.f0 p_1708->g_1132 p_1708->g_397 p_1708->g_131 p_1708->g_494 p_1708->g_24 p_1708->g_788.f0 p_1708->g_1532 p_1708->g_1212.f0 p_1708->g_83 p_1708->g_128 p_1708->g_245 p_1708->g_1563 p_1708->g_1166.f0 p_1708->g_906 p_1708->g_637 p_1708->g_133 p_1708->g_946 p_1708->g_947 p_1708->g_948 p_1708->g_137 p_1708->g_522.f0 p_1708->g_1611 p_1708->g_1616 p_1708->g_160.f0
 * writes: p_1708->g_824.f0 p_1708->g_494 p_1708->g_133 p_1708->g_245 p_1708->g_637 p_1708->g_120 p_1708->g_1178 p_1708->g_160.f0 p_1708->g_1564 p_1708->g_522.f0 p_1708->g_1182 p_1708->g_824.f1 p_1708->g_16 p_1708->g_137
 */
int32_t  func_11(uint32_t  p_12, uint32_t  p_13, int16_t  p_14, uint32_t  p_15, struct S5 * p_1708)
{ /* block id: 705 */
    uint16_t l_1506 = 0x2834L;
    uint32_t *l_1525 = &p_1708->g_824.f0;
    int16_t *l_1528 = &p_1708->g_494;
    int32_t l_1529 = 0L;
    uint64_t *l_1530 = &p_1708->g_133[2];
    uint64_t l_1547 = 18446744073709551613UL;
    union U3 *l_1574[5];
    uint64_t l_1584 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 5; i++)
        l_1574[i] = &p_1708->g_643[0];
lbl_1572:
    --l_1506;
    if ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((((*l_1530) = (safe_mul_func_int16_t_s_s(l_1506, ((((safe_lshift_func_uint16_t_u_u((p_12 >= (((p_1708->g_660.f0 > ((safe_mod_func_uint64_t_u_u((+((safe_add_func_int16_t_s_s(l_1506, (((*l_1528) |= (((0x5BF430B4L || ((p_13 != ((!(((*l_1525)--) > (p_1708->g_1227[0] == ((p_1708->g_790.f0 >= 0x3A69L) , (void*)0)))) < (**p_1708->g_1132))) , l_1506)) , 0x08F5L) >= l_1506)) ^ l_1506))) == 4294967295UL)), l_1506)) ^ p_1708->g_24)) & l_1529) , p_13)), p_14)) != l_1506) || 0x8307C09DL) , p_1708->g_788.f0)))) < p_12) ^ l_1529) & p_14), 10)), p_14)), l_1529)))
    { /* block id: 710 */
        uint64_t l_1552 = 0x7FFBEBFB84B9D131L;
        (*p_1708->g_1532) = &l_1529;
        for (p_1708->g_637 = 13; (p_1708->g_637 >= 58); p_1708->g_637 = safe_add_func_int8_t_s_s(p_1708->g_637, 6))
        { /* block id: 714 */
            int32_t l_1554[2][4][7] = {{{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L}},{{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L},{(-1L),(-1L),0x45699EC1L,0x0D8ADDA2L,0x1069183DL,0x0D8ADDA2L,0x45699EC1L}}};
            int i, j, k;
            for (p_13 = 27; (p_13 == 25); p_13 = safe_sub_func_int8_t_s_s(p_13, 7))
            { /* block id: 717 */
                uint16_t *l_1543 = &p_1708->g_120[6];
                int32_t l_1544 = 0x2B62597CL;
                uint16_t *l_1553 = &p_1708->g_1178;
                (*p_1708->g_245) = (safe_sub_func_uint8_t_u_u(p_12, (safe_sub_func_uint16_t_u_u(((*l_1553) = ((safe_lshift_func_uint16_t_u_u(((*l_1543) = p_1708->g_1212.f0), ((l_1544 || (safe_div_func_int64_t_s_s((l_1544 & l_1547), p_13))) && (l_1544 <= (l_1547 || ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((!(l_1544 , p_1708->g_83)), p_1708->g_128[3][0][3])), l_1552)) , p_15)))))) < p_12)), p_12))));
                if (l_1554[1][1][2])
                    continue;
            }
        }
    }
    else
    { /* block id: 724 */
        int32_t *l_1566[9][9] = {{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0},{&p_1708->g_790.f0,&p_1708->g_24,&p_1708->g_792[0].f0,&p_1708->g_24,&p_1708->g_790.f0,&p_1708->g_791[4][0][1].f0,&p_1708->g_276.f0,&p_1708->g_276.f0,(void*)0}};
        int64_t *l_1607 = &p_1708->g_211[3][1].f0;
        int i, j;
lbl_1617:
        for (p_1708->g_160.f0 = (-6); (p_1708->g_160.f0 <= 30); p_1708->g_160.f0 = safe_add_func_int32_t_s_s(p_1708->g_160.f0, 3))
        { /* block id: 727 */
            int32_t *l_1560[5];
            int32_t **l_1559 = &l_1560[1];
            int32_t l_1567 = (-1L);
            int i;
            for (i = 0; i < 5; i++)
                l_1560[i] = &p_1708->g_1561;
            if ((safe_sub_func_uint8_t_u_u(l_1529, p_12)))
            { /* block id: 728 */
                int32_t ***l_1562 = (void*)0;
                (*p_1708->g_1563) = l_1559;
            }
            else
            { /* block id: 730 */
                uint64_t l_1576 = 18446744073709551615UL;
                int16_t **l_1597 = &l_1528;
                int32_t l_1606[1][10][10] = {{{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L},{0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L,(-9L),0x499927F9L,0x499927F9L}}};
                int i, j, k;
                l_1566[2][1] = &l_1529;
                (*p_1708->g_906) = (((*l_1530) = p_1708->g_1166.f0) && l_1567);
                for (p_1708->g_1182 = 19; (p_1708->g_1182 == (-1)); --p_1708->g_1182)
                { /* block id: 736 */
                    uint32_t l_1579 = 4294967290UL;
                    int32_t **l_1608 = (void*)0;
                    for (p_1708->g_824.f0 = 0; (p_1708->g_824.f0 == 23); p_1708->g_824.f0 = safe_add_func_int64_t_s_s(p_1708->g_824.f0, 2))
                    { /* block id: 739 */
                        union U3 **l_1573[7] = {&p_1708->g_1353,&p_1708->g_1353,&p_1708->g_1353,&p_1708->g_1353,&p_1708->g_1353,&p_1708->g_1353,&p_1708->g_1353};
                        int32_t l_1575[5][2] = {{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L}};
                        int i, j;
                        if (p_1708->g_637)
                            goto lbl_1572;
                        l_1574[4] = &p_1708->g_642;
                        l_1529 = (-9L);
                        --l_1576;
                    }
                    l_1567 ^= (p_15 , l_1579);
                    for (p_1708->g_824.f1 = 0; (p_1708->g_824.f1 < 1); ++p_1708->g_824.f1)
                    { /* block id: 748 */
                        uint64_t *l_1585 = &l_1576;
                        uint64_t *l_1586 = (void*)0;
                        uint64_t *l_1587 = &p_1708->g_16;
                        int32_t l_1588 = 0x09332F5AL;
                        uint8_t *l_1600 = &p_1708->g_137;
                        int32_t l_1605[1][6] = {{0x39A09EDAL,0x39A09EDAL,0x39A09EDAL,0x39A09EDAL,0x39A09EDAL,0x39A09EDAL}};
                        int i, j;
                        l_1588 |= (((*l_1530)--) >= ((*l_1587) = ((*l_1585) = l_1584)));
                        l_1606[0][8][5] = (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_12, (**p_1708->g_946))), 6)) > ((((safe_div_func_int8_t_s_s((l_1605[0][5] = ((l_1597 != (void*)0) > (((safe_add_func_uint8_t_u_u(p_15, ((*l_1600)++))) >= ((safe_add_func_uint8_t_u_u(l_1579, (l_1579 != l_1567))) <= (l_1588 = 0x704E8CC0L))) != p_15))), l_1579)) || 0x24L) && p_14) , 0x6A8CL)), p_1708->g_133[2]));
                        if ((*p_1708->g_906))
                            break;
                        l_1605[0][5] = ((void*)0 != l_1607);
                    }
                    (*p_1708->g_1611) = (l_1566[2][1] = l_1566[2][1]);
                }
            }
        }
        for (l_1529 = 17; (l_1529 < (-26)); l_1529--)
        { /* block id: 767 */
            int32_t *l_1614 = &p_1708->g_276.f0;
            int32_t **l_1615 = (void*)0;
            (*p_1708->g_1616) = l_1614;
            if (p_12)
                goto lbl_1617;
        }
    }
    return l_1506;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_3 p_1708->g_24 p_1708->g_23
 * writes: p_1708->g_24 p_1708->g_23
 */
int32_t  func_19(uint64_t  p_20, struct S5 * p_1708)
{ /* block id: 7 */
    int8_t l_21[6][7][6] = {{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}},{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}},{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}},{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}},{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}},{{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L},{0x03L,7L,0x37L,0x4BL,0L,0x54L}}};
    union U3 *l_865 = &p_1708->g_866;
    int32_t *l_879[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_1396 = (void*)0;
    int8_t **l_1395[2][4][5] = {{{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396}},{{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396},{&l_1396,&l_1396,(void*)0,&l_1396,&l_1396}}};
    int8_t ***l_1394 = &l_1395[1][0][0];
    uint8_t l_1469[5][7][3] = {{{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L}},{{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L}},{{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L}},{{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L}},{{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L},{0x5BL,0x6FL,0xE9L}}};
    uint32_t l_1496 = 0x3A3AC0C9L;
    int i, j, k;
    for (p_20 = 0; (p_20 <= 5); p_20 += 1)
    { /* block id: 10 */
        union U3 *l_39 = &p_1708->g_38;
        int32_t l_45 = 3L;
        int32_t l_863 = (-8L);
        uint64_t *l_1446 = &p_1708->g_276.f2;
        int32_t l_1461 = 0x5A988C66L;
        if (p_1708->g_3)
            break;
        for (p_1708->g_24 = 0; (p_1708->g_24 <= 5); p_1708->g_24 += 1)
        { /* block id: 14 */
            p_1708->g_23[1] |= p_20;
            return p_1708->g_23[1];
        }
        for (p_1708->g_24 = 5; (p_1708->g_24 >= 0); p_1708->g_24 -= 1)
        { /* block id: 20 */
            union U3 *l_37 = &p_1708->g_38;
            union U3 **l_40 = &l_39;
            int32_t l_55 = 0x579C1F62L;
            uint32_t *l_864[7] = {&p_1708->g_350,&p_1708->g_350,&p_1708->g_350,&p_1708->g_350,&p_1708->g_350,&p_1708->g_350,&p_1708->g_350};
            int8_t *l_877 = &l_21[4][0][5];
            int32_t l_878 = 0x57489F50L;
            int64_t l_1463 = 1L;
            int i;
            (1 + 1);
        }
    }
    return l_1496;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_1357 p_1708->g_946 p_1708->g_947 p_1708->g_948 p_1708->g_1384
 * writes: p_1708->g_244
 */
union U3 * func_25(int8_t  p_26, int32_t * p_27, int32_t * p_28, union U3 * p_29, struct S5 * p_1708)
{ /* block id: 646 */
    uint64_t *l_1372[2];
    int32_t l_1381 = 2L;
    uint16_t *l_1382[2];
    int32_t l_1383 = 0x4A00ECD3L;
    int32_t **l_1385 = (void*)0;
    int32_t ***l_1386[1][1];
    int32_t **l_1387 = &p_1708->g_245;
    union U3 *l_1388[7][9] = {{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654},{&p_1708->g_654,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],(void*)0,(void*)0,&p_1708->g_643[2],&p_1708->g_654}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_1372[i] = &p_1708->g_330;
    for (i = 0; i < 2; i++)
        l_1382[i] = &p_1708->g_120[6];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1386[i][j] = &p_1708->g_244[7][6][2];
    }
    (*p_28) = (safe_rshift_func_int16_t_s_s(((-1L) > (6L || ((p_1708->g_244[7][6][2] = (p_1708->g_1357 , ((((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0x09L, 2)), (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((0x1B76D9D0L | (safe_mul_func_uint8_t_u_u(0xCFL, ((safe_lshift_func_int16_t_s_u((l_1372[1] == (void*)0), (l_1383 |= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(p_26, l_1381)), l_1381)), 3)), 7)) >= 0xF0L)))) < p_26)))), p_26)), (**p_1708->g_946))) , 7UL), l_1381)))) , p_1708->g_1384) , p_26) , l_1385))) != l_1387))), 6));
    return l_1388[4][7];
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_906 p_1708->g_522.f0 p_1708->g_120 p_1708->g_397 p_1708->g_131 p_1708->g_654.f0 p_1708->g_128 p_1708->g_824.f1 p_1708->g_946 p_1708->g_261 p_1708->g_201 p_1708->g_824.f0 p_1708->g_133 p_1708->g_205 p_1708->g_206 p_1708->g_211 p_1708->g_350 p_1708->g_253 p_1708->g_793.f0 p_1708->g_947 p_1708->g_948 p_1708->g_160 p_1708->g_278.f0 p_1708->g_24 p_1708->g_203 p_1708->g_1012 p_1708->g_637 p_1708->g_791.f0 p_1708->g_126 p_1708->g_330 p_1708->g_712 p_1708->g_89 p_1708->g_1051 p_1708->g_1352
 * writes: p_1708->g_522.f0 p_1708->g_330 p_1708->g_824.f1 p_1708->g_261 p_1708->g_824.f0 p_1708->g_278.f0 p_1708->g_793.f0 p_1708->g_133 p_1708->g_637 p_1708->g_352.f0 p_1708->g_828.f0 p_1708->g_120 p_1708->g_89 p_1708->g_792.f0
 */
union U3  func_30(uint32_t  p_31, struct S5 * p_1708)
{ /* block id: 479 */
    union U0 l_905 = {65533UL};
    union U2 *l_921[2];
    int32_t l_923 = (-1L);
    int32_t l_928 = (-5L);
    int32_t l_929[1][1];
    int32_t l_930[6] = {0x44B1E8D3L,(-5L),0x44B1E8D3L,0x44B1E8D3L,(-5L),0x44B1E8D3L};
    int32_t l_932 = 1L;
    uint16_t l_945[10] = {65535UL,0xBCC3L,0x5AA9L,0xBCC3L,65535UL,65535UL,0xBCC3L,0x5AA9L,0xBCC3L,65535UL};
    uint32_t l_961 = 4294967288UL;
    uint64_t l_995 = 0UL;
    uint16_t *l_1016[8] = {&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0,&p_1708->g_160.f0};
    uint8_t l_1049 = 0x73L;
    int32_t *l_1054 = &p_1708->g_788.f0;
    uint32_t l_1196 = 0x8F2D6664L;
    uint8_t **l_1213 = (void*)0;
    int32_t *l_1225 = &p_1708->g_201;
    int32_t **l_1224[3];
    int32_t **l_1228 = &p_1708->g_1227[0];
    int32_t **l_1229 = &p_1708->g_1227[0];
    int32_t l_1316 = (-1L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_921[i] = &p_1708->g_211[7][1];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_929[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_1224[i] = &l_1225;
    (*p_1708->g_906) |= ((safe_lshift_func_uint16_t_u_s(0xC855L, 4)) <= (l_905 , 0x32E68AD0L));
    for (l_905.f0 = 0; (l_905.f0 <= 7); l_905.f0 += 1)
    { /* block id: 483 */
        int32_t l_916 = 0L;
        uint64_t *l_922 = &p_1708->g_330;
        int32_t l_924 = 0x1763E428L;
        int32_t *l_925 = &p_1708->g_792[0].f0;
        int32_t *l_926 = &p_1708->g_792[0].f0;
        int32_t *l_927[5];
        int32_t l_931 = 6L;
        uint64_t l_933 = 0xCB173BC97275A89DL;
        uint64_t l_941 = 18446744073709551615UL;
        int i;
        for (i = 0; i < 5; i++)
            l_927[i] = &p_1708->g_352.f0;
        l_924 ^= (safe_lshift_func_int8_t_s_u(((((p_1708->g_120[l_905.f0] , (l_905 , (p_1708->g_120[l_905.f0] > (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((-6L), (safe_unary_minus_func_int32_t_s((l_923 = ((~(((p_31 < 0x77L) != (safe_mod_func_uint16_t_u_u((((l_916 = (~p_31)) >= (safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u(((((*l_922) = (((void*)0 != l_921[0]) | p_1708->g_120[l_905.f0])) | p_31) && (*p_1708->g_397)), l_905.f0)) ^ l_905.f0), 7))) <= 18446744073709551611UL), p_1708->g_654.f0))) & 0xBFAC3B42B100F382L)) < p_1708->g_128[1][1][1])))))), 4))))) <= p_31) == 8L) < (-5L)), l_905.f0));
        l_923 ^= p_31;
        ++l_933;
        for (p_1708->g_824.f1 = 2; (p_1708->g_824.f1 >= 0); p_1708->g_824.f1 -= 1)
        { /* block id: 492 */
            uint32_t l_936 = 0x6927AC61L;
            int32_t l_939 = 0x0407E5E4L;
            int32_t l_940[2][8][10] = {{{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)}},{{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)},{(-6L),(-6L),(-1L),0x68CD3FA8L,1L,(-9L),1L,0L,1L,(-9L)}}};
            int32_t *l_944[1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_944[i][j] = &l_940[0][2][5];
            }
            l_936++;
            l_941--;
            l_944[0][0] = &l_939;
            if (l_929[0][0])
                break;
        }
    }
    if (((l_945[4] && l_923) != p_31))
    { /* block id: 499 */
        volatile int16_t **l_949[8][7] = {{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947},{&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947,&p_1708->g_947}};
        union U2 **l_974 = &l_921[1];
        int32_t l_977 = (-1L);
        uint16_t *l_1013 = &l_945[8];
        int32_t *l_1020 = &p_1708->g_352.f0;
        int32_t *l_1021 = &p_1708->g_828[0][1].f0;
        int i, j;
        l_949[2][4] = p_1708->g_946;
        for (p_1708->g_261 = 0; (p_1708->g_261 != 50); p_1708->g_261 = safe_add_func_int16_t_s_s(p_1708->g_261, 4))
        { /* block id: 503 */
            uint32_t *l_954 = &p_1708->g_824.f0;
            int32_t *l_966 = &p_1708->g_278.f0;
            int32_t *l_967 = &p_1708->g_793.f0;
            union U0 *l_982[4][9];
            int32_t l_993 = (-8L);
            int32_t *l_994[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            union U0 **l_998 = (void*)0;
            union U0 **l_999 = (void*)0;
            union U0 **l_1000 = (void*)0;
            union U0 **l_1001 = &l_982[1][0];
            uint64_t *l_1014 = &p_1708->g_133[2];
            int8_t *l_1015[3];
            uint32_t *l_1017[7][7] = {{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261},{&p_1708->g_261,&p_1708->g_677.f0,&p_1708->g_261,&p_1708->g_261,(void*)0,&p_1708->g_261,&p_1708->g_261}};
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 9; j++)
                    l_982[i][j] = &l_905;
            }
            for (i = 0; i < 3; i++)
                l_1015[i] = &p_1708->g_66;
            (*l_967) ^= ((+p_1708->g_201) >= ((*l_966) = (safe_add_func_int64_t_s_s((((*l_954)++) ^ (safe_add_func_uint16_t_u_u(((p_1708->g_133[2] , (*p_1708->g_205)) , ((safe_add_func_uint8_t_u_u((~((l_961 >= 3L) | (safe_sub_func_int16_t_s_s((-9L), 65535UL)))), (((1UL <= ((safe_mul_func_uint16_t_u_u((p_1708->g_211[3][1] , p_31), p_1708->g_350)) & p_31)) | p_31) && 0x19L))) , p_1708->g_253)), p_31))), l_928))));
            l_995 ^= ((safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((((*p_1708->g_947) && (safe_sub_func_uint64_t_u_u((l_974 == l_974), ((((safe_rshift_func_uint8_t_u_s((0L == l_977), (((+(((((safe_add_func_int64_t_s_s((((safe_lshift_func_int16_t_s_u((((l_905 = p_1708->g_160) , ((*l_954) |= (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((~((safe_sub_func_uint16_t_u_u(l_977, ((((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((l_930[5] != (*l_966)), 7)) | p_31), p_31)) || 0xEE1EL) <= l_905.f0) ^ l_929[0][0]))) && p_31)) , p_31), 0xE6554129L)), l_945[6])))) || (*l_967)), p_31)) <= l_977) & l_930[3]), l_993)) ^ 0x11L) < p_1708->g_133[5]) , 65535UL) && (*l_967))) > p_1708->g_24) , p_31))) == (-7L)) > 0xA813L) ^ p_31)))) && (*l_966)), p_31)) || (-1L)), l_977)) | p_1708->g_203[4]);
            (*l_1001) = l_982[1][5];
            (*l_966) = (4294967287UL & (l_977 = (p_1708->g_637 |= ((**l_974) , ((*l_954) |= (((safe_rshift_func_int8_t_s_s((&p_1708->g_122 == ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint32_t_u_u(1UL, ((*l_967) == (l_923 = ((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(l_977, ((*l_1014) ^= ((&p_1708->g_120[1] != (p_1708->g_1012 , l_1013)) || p_31)))), p_1708->g_261)) | 0L))))), 5)) , l_1016[3])), 4)) || (*p_1708->g_397)) > 65535UL))))));
        }
        (*l_1021) = ((*l_1020) = (safe_lshift_func_int16_t_s_s(0x466EL, (**p_1708->g_946))));
    }
    else
    { /* block id: 520 */
        uint64_t l_1022 = 1UL;
        int32_t *l_1050 = (void*)0;
        int32_t **l_1053[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1053[i] = &p_1708->g_245;
        --l_1022;
        (*p_1708->g_1051) = (((*p_1708->g_947) <= (safe_div_func_int16_t_s_s((0x63F65E717A73EE00L & (safe_mul_func_int16_t_s_s(((l_1022 & p_31) , (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((--p_1708->g_120[0]), 2)), ((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_u(l_930[2], (safe_lshift_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(p_31, 5)) == (safe_add_func_uint64_t_u_u(18446744073709551615UL, p_1708->g_791[4][0][1].f0))), (((*p_1708->g_712) &= ((((safe_lshift_func_int8_t_s_u((((((9UL || 0x13BA174FC4A8CF13L) & (-1L)) & p_1708->g_126) , p_31) | p_31), l_945[9])) != p_1708->g_330) && 0x0B6EACBED3B6D038L) , 0x88D9E2B778887DAAL)) , l_961))) == p_1708->g_791[4][0][1].f0) > l_1049), 7)))) ^ l_1022) | p_31) , l_1049), 6)) || 6UL)))), 0xE9A6L))), p_31))) >= 6L);
        l_1054 = &l_930[2];
    }
    for (p_1708->g_89 = 0; (p_1708->g_89 >= 27); p_1708->g_89++)
    { /* block id: 529 */
        int32_t *l_1057 = &l_928;
        uint8_t *l_1075 = &l_1049;
        uint8_t l_1082 = 0x7AL;
        uint8_t **l_1090 = &l_1075;
        uint8_t l_1096 = 0x0CL;
        uint32_t l_1124 = 0UL;
        union U2 *l_1127 = &p_1708->g_744;
        int64_t *l_1181[8] = {&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182,&p_1708->g_1182};
        int64_t **l_1180 = &l_1181[3];
        int16_t *l_1237 = &p_1708->g_494;
        int16_t **l_1236 = &l_1237;
        int32_t l_1246[2];
        uint16_t l_1261 = 0x0524L;
        int32_t l_1284 = 0x722C27C4L;
        int32_t **l_1286 = &l_1225;
        uint32_t l_1336 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1246[i] = 0x20C5E2CEL;
        (1 + 1);
    }
    return p_1708->g_1352;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_126 p_1708->g_122 p_1708->g_711 p_1708->g_712 p_1708->g_654.f0 p_1708->g_788.f0 p_1708->g_160.f0 p_1708->g_790.f0 p_1708->g_494 p_1708->g_23 p_1708->g_791.f0
 * writes: p_1708->g_126 p_1708->g_122 p_1708->g_160.f0 p_1708->g_120
 */
int8_t  func_34(int32_t * p_35, uint8_t  p_36, struct S5 * p_1708)
{ /* block id: 459 */
    int32_t *l_880[1][6];
    int8_t l_881 = 0L;
    uint64_t *l_889[10][7] = {{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89},{&p_1708->g_89,&p_1708->g_89,(void*)0,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89,&p_1708->g_89}};
    int32_t *l_901 = &p_1708->g_828[0][1].f0;
    int32_t *l_902 = &p_1708->g_522.f0;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_880[i][j] = &p_1708->g_791[4][0][1].f0;
    }
    l_881 ^= (-6L);
    for (p_1708->g_126 = 0; (p_1708->g_126 <= 2); p_1708->g_126 += 1)
    { /* block id: 463 */
        int32_t *l_882 = &p_1708->g_788.f0;
        int32_t *l_884 = &p_1708->g_278.f0;
        l_884 = l_882;
        return p_36;
    }
    for (p_1708->g_122 = 5; (p_1708->g_122 != 33); p_1708->g_122 = safe_add_func_uint32_t_u_u(p_1708->g_122, 9))
    { /* block id: 469 */
        uint64_t l_892 = 0x940AAA9A51F58D54L;
        uint16_t *l_899[7][7][5] = {{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}},{{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]},{&p_1708->g_120[6],&p_1708->g_120[6],&p_1708->g_122,&p_1708->g_120[6],&p_1708->g_120[1]}}};
        int32_t **l_900[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j, k;
        l_902 = (l_901 = (p_35 = (l_880[0][1] = ((((safe_sub_func_int32_t_s_s(((((*p_1708->g_711) != l_889[7][4]) < (p_1708->g_654.f0 == ((l_892 ^ (p_1708->g_788.f0 , (l_892 != p_36))) > (p_1708->g_120[6] = (l_892 && (((p_1708->g_160.f0++) & (safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((~(p_1708->g_790.f0 , p_36)), l_892)) == 0UL), p_1708->g_494))) != l_892)))))) && p_1708->g_23[0]), l_892)) < 0xDFL) , 18446744073709551608UL) , l_880[0][5]))));
        if ((*p_35))
            continue;
    }
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_790.f0
 * writes:
 */
int8_t  func_41(uint32_t  p_42, uint32_t  p_43, union U3 * p_44, struct S5 * p_1708)
{ /* block id: 454 */
    int32_t *l_867 = &p_1708->g_793.f0;
    int32_t *l_868 = &p_1708->g_790.f0;
    int32_t *l_869 = &p_1708->g_790.f0;
    int32_t *l_870 = &p_1708->g_793.f0;
    int32_t *l_871 = &p_1708->g_791[4][0][1].f0;
    int32_t *l_872[3][9] = {{&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3},{&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3},{&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3,&p_1708->g_3,&p_1708->g_790.f0,&p_1708->g_3}};
    int32_t l_873 = 0x417EBC06L;
    uint32_t l_874 = 0xD158B777L;
    int i, j;
    ++l_874;
    return (*l_869);
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_24 p_1708->g_83 p_1708->g_89 p_1708->g_66 p_1708->g_106 p_1708->g_120 p_1708->g_3 p_1708->g_133 p_1708->g_137 p_1708->g_56 p_1708->g_128 p_1708->g_160 p_1708->g_126 p_1708->g_201 p_1708->g_205 p_1708->g_160.f0 p_1708->g_122 p_1708->g_211.f0 p_1708->g_244 p_1708->g_249 p_1708->g_203 p_1708->g_261 p_1708->g_276.f0 p_1708->g_494 p_1708->g_711 p_1708->g_397 p_1708->g_131 p_1708->g_712 p_1708->g_213 p_1708->g_352.f0 p_1708->g_668.f0 p_1708->g_350 p_1708->g_330 p_1708->g_791.f0 p_1708->g_524.f0 p_1708->g_677.f0
 * writes: p_1708->g_83 p_1708->g_89 p_1708->g_106 p_1708->g_120 p_1708->g_122 p_1708->g_126 p_1708->g_128 p_1708->g_131 p_1708->g_133 p_1708->g_137 p_1708->g_174 p_1708->g_66 p_1708->g_201 p_1708->g_203 p_1708->g_213 p_1708->g_244 p_1708->g_249 p_1708->g_261 p_1708->g_677.f0 p_1708->g_711 p_1708->g_744.f2 p_1708->g_278.f4 p_1708->g_791.f0 p_1708->g_330
 */
uint16_t  func_48(uint32_t  p_49, int32_t  p_50, int16_t  p_51, union U3 * p_52, struct S5 * p_1708)
{ /* block id: 23 */
    union U3 **l_81 = &p_1708->g_56[1][6];
    int32_t l_84[5][5] = {{(-10L),0L,0L,(-10L),(-10L)},{(-10L),0L,0L,(-10L),(-10L)},{(-10L),0L,0L,(-10L),(-10L)},{(-10L),0L,0L,(-10L),(-10L)},{(-10L),0L,0L,(-10L),(-10L)}};
    int8_t l_766 = (-8L);
    uint32_t l_786 = 0x2894388FL;
    union U4 *l_827 = &p_1708->g_828[0][1];
    uint32_t l_848 = 0xC876E512L;
    uint64_t *l_851 = &p_1708->g_330;
    int32_t *l_857 = (void*)0;
    int16_t *l_858[9][7] = {{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0},{&p_1708->g_494,&p_1708->g_126,(void*)0,&p_1708->g_126,&p_1708->g_494,&p_1708->g_126,(void*)0}};
    int64_t l_859 = 0x4866FD35431F00F8L;
    int32_t *l_860 = (void*)0;
    int32_t *l_861 = &p_1708->g_791[4][0][1].f0;
    int i, j;
lbl_862:
    for (p_49 = 0; (p_49 > 14); ++p_49)
    { /* block id: 26 */
        uint8_t l_60[2][6] = {{0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL},{0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL}};
        int8_t *l_65 = &p_1708->g_66;
        union U3 **l_79 = &p_1708->g_56[2][5];
        union U3 ***l_80[3];
        uint8_t *l_82 = &p_1708->g_83;
        uint64_t *l_87 = (void*)0;
        uint64_t *l_88 = &p_1708->g_89;
        int32_t l_718 = 0x1D5A8750L;
        int32_t l_720[6][8][5] = {{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}},{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}},{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}},{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}},{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}},{{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L},{1L,0x212803B1L,0x5D5B0788L,8L,0x65D234F1L}}};
        union U2 **l_746 = &p_1708->g_213;
        union U4 *l_789[8] = {&p_1708->g_790,&p_1708->g_790,&p_1708->g_790,&p_1708->g_790,&p_1708->g_790,&p_1708->g_790,&p_1708->g_790,&p_1708->g_790};
        union U1 *l_823 = &p_1708->g_824;
        union U1 **l_822[2];
        uint8_t l_829 = 255UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_80[i] = &l_79;
        for (i = 0; i < 2; i++)
            l_822[i] = &l_823;
        p_50 = l_60[1][4];
        if ((&p_50 != ((func_61(l_65, ((*l_88) &= ((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((l_60[1][5] < ((safe_mul_func_int16_t_s_s(p_1708->g_24, (!(((*l_82) ^= ((&p_1708->g_56[1][6] != (l_81 = l_79)) | l_60[1][4])) < (!l_84[1][0]))))) >= ((((safe_rshift_func_uint8_t_u_s(p_50, 0)) != p_51) != l_84[1][0]) && p_50))) && l_84[4][4]), 6)), l_60[1][4])), l_60[0][2])), 0x37E8L)), p_49)) & l_84[1][0])), l_65, p_1708) , p_1708->g_133[0]) , &l_84[1][0])))
        { /* block id: 388 */
            int32_t l_679 = 0x01665050L;
            int32_t l_713 = 0x269707E1L;
            int32_t l_721 = 0x34B00950L;
            int32_t l_723 = (-1L);
            int32_t l_726 = 0x0A923642L;
            int32_t l_727 = (-5L);
            int32_t l_728 = 0x32D2E754L;
            int32_t l_729 = 0x7BF77BA7L;
            int32_t l_733 = (-10L);
            union U2 *l_743 = &p_1708->g_744;
            union U2 **l_751[7][2][4] = {{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}},{{&p_1708->g_213,&l_743,&l_743,(void*)0},{&p_1708->g_213,&l_743,&l_743,(void*)0}}};
            uint16_t *l_780 = (void*)0;
            uint16_t *l_781 = &p_1708->g_120[0];
            union U4 *l_787 = &p_1708->g_788;
            int i, j, k;
            l_679 &= p_50;
            if (((0x9724L & p_1708->g_128[7][0][0]) >= (p_1708->g_276.f0 == (-1L))))
            { /* block id: 390 */
                for (p_1708->g_66 = (-25); (p_1708->g_66 != 3); p_1708->g_66 = safe_add_func_int16_t_s_s(p_1708->g_66, 5))
                { /* block id: 393 */
                    if (l_60[1][4])
                        break;
                }
                if (l_84[0][3])
                    break;
            }
            else
            { /* block id: 397 */
                int32_t l_707 = (-7L);
                int32_t l_719 = 7L;
                int32_t l_722 = (-1L);
                int32_t l_724 = 0x2AA25755L;
                if ((p_51 < (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_50, 1)), 1)), (p_51 >= l_60[1][4]))), (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint8_t_u_u(1UL, (safe_mod_func_uint64_t_u_u(((251UL && ((*l_65) = (((p_51 ^ (safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((1UL > (safe_mod_func_uint16_t_u_u(((((((safe_div_func_uint8_t_u_u(0xD8L, 0x74L)) && p_51) ^ p_1708->g_494) | p_50) <= p_51) != p_51), p_1708->g_106))), p_51)) < p_1708->g_128[3][2][2]) ^ 0x242A2352L), p_50))) >= (-3L)) != 0L))) >= l_60[0][1]), p_1708->g_24)))))), p_50)) | l_707) | p_1708->g_211[3][1].f0)))))
                { /* block id: 399 */
                    return p_51;
                }
                else
                { /* block id: 401 */
                    int32_t *l_708 = &l_84[1][0];
                    int32_t l_725 = 0x6A04B15DL;
                    int32_t l_730 = 0L;
                    int32_t l_731 = (-1L);
                    int32_t l_732 = 0x5073526DL;
                    union U2 **l_745 = &l_743;
                    union U2 ***l_747 = &l_746;
                    uint16_t *l_748 = &p_1708->g_120[6];
                    int32_t *l_749 = &l_724;
                    union U0 l_750 = {0x0794L};
                    (*l_708) ^= p_49;
                    for (p_1708->g_677.f0 = 0; (p_1708->g_677.f0 != 31); p_1708->g_677.f0 = safe_add_func_int64_t_s_s(p_1708->g_677.f0, 8))
                    { /* block id: 405 */
                        int32_t *l_714 = &p_1708->g_522.f0;
                        int32_t *l_715 = &p_1708->g_352.f0;
                        int32_t *l_716 = &p_1708->g_276.f0;
                        int32_t *l_717[8][1] = {{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0},{&p_1708->g_524.f0}};
                        uint8_t l_734 = 0xEFL;
                        int i, j;
                        p_1708->g_711 = p_1708->g_711;
                        (*l_708) |= l_713;
                        --l_734;
                        l_708 = &l_720[1][3][3];
                    }
                    if (((*l_749) |= (((*l_748) |= ((((safe_sub_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((((*p_1708->g_397) < (((((void*)0 != (*p_1708->g_711)) & ((*l_82) = (~l_718))) != l_727) && (safe_mul_func_uint8_t_u_u((((((*l_745) = l_743) == ((((*l_747) = l_746) != &p_1708->g_213) , (*l_746))) & l_733) > 0x8DL), p_1708->g_352.f0)))) ^ 0L) , l_733), p_49)) && (*l_708)), 1UL)) >= p_50) == p_1708->g_3) && l_84[1][0])) >= 0UL)))
                    { /* block id: 416 */
                        return p_50;
                    }
                    else
                    { /* block id: 418 */
                        int32_t l_764 = 5L;
                        int64_t *l_765 = &p_1708->g_744.f2;
                        if (l_84[1][0])
                            break;
                        (*l_708) = (((l_733 = p_1708->g_133[2]) <= (((l_750 , l_726) , (((*l_765) = (((((((0xABD1C52BL <= ((void*)0 == l_751[4][0][3])) ^ (((safe_lshift_func_int16_t_s_s((0x475CL && (safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(p_1708->g_3, (((safe_sub_func_uint32_t_u_u(l_764, p_1708->g_203[0])) , l_722) , 0x02F9L))), l_84[1][0])), 2L)), 10))), p_1708->g_668.f0)) > p_1708->g_350) & p_49)) < 0UL) , l_764) || 0UL) != p_1708->g_24) && (-4L))) , (*p_1708->g_397))) || p_50)) <= 0x9C0A42ADD86085F9L);
                        if (l_766)
                            break;
                    }
                    for (p_1708->g_261 = 0; (p_1708->g_261 >= 48); p_1708->g_261 = safe_add_func_int32_t_s_s(p_1708->g_261, 1))
                    { /* block id: 427 */
                        int32_t l_769[8][2] = {{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L},{0x7E84B12DL,6L}};
                        int i, j;
                        return l_769[7][0];
                    }
                }
            }
            p_50 = ((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(((p_1708->g_261 ^ p_51) | (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_781)++), l_728)), ((l_60[1][4] | (((((((p_1708->g_350 , (0x85BDL != (((safe_sub_func_uint64_t_u_u((p_1708->g_160 , (l_786 < (l_787 == l_789[1]))), l_713)) < p_50) , p_1708->g_330))) , 0xE3421122L) < 0xAA8278D2L) == 0x6D54D8773276BD0BL) ^ l_721) <= p_51) ^ 1L)) > 4294967295UL))) ^ p_1708->g_128[3][1][2]) != p_50), 8))), l_84[1][0])), 0)) && p_50);
            return p_1708->g_133[1];
        }
        else
        { /* block id: 435 */
            int64_t *l_825 = &p_1708->g_278.f4;
            int32_t *l_826 = &p_1708->g_201;
            int32_t l_830[2];
            int32_t *l_831 = &p_1708->g_791[4][0][1].f0;
            int i;
            for (i = 0; i < 2; i++)
                l_830[i] = 0L;
            (*l_831) |= ((((safe_sub_func_int64_t_s_s((((l_718 >= ((((((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(((l_827 = (((*l_826) = (safe_lshift_func_int16_t_s_u((~((((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x5E863844L, ((((((*l_825) = (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((p_51 & (p_50 , 0UL)), (safe_rshift_func_int8_t_s_s(p_1708->g_83, (0xB0AC5349F5ACF16AL | (*p_1708->g_397)))))), l_84[1][0])) , l_822[1]) == &p_1708->g_583), p_50)), p_49))) , p_1708->g_211[3][1].f0) || 0xE811L) ^ l_60[1][4]) , 0x35874897L))), l_720[2][5][2])) != l_60[1][4]), 2L)) <= 1L) , (*p_1708->g_397)) && p_51)), p_1708->g_133[2]))) , (void*)0)) == l_789[6]), p_51)), p_1708->g_24)), 2)) && p_50), l_829)) > 0xCE37L) <= p_50) != (*p_1708->g_397)) > (-1L)) <= l_830[0])) , 4294967295UL) , (*p_1708->g_397)), p_49)) ^ p_1708->g_668.f0) != p_51) & l_830[0]);
        }
        l_84[0][1] = (p_49 < ((((+((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0x5B5EL, ((-1L) | ((safe_div_func_uint32_t_u_u((l_84[3][1] || p_1708->g_524.f0), (p_50 = (((l_84[1][0] > p_51) < (safe_add_func_uint64_t_u_u(p_1708->g_120[3], (p_1708->g_330 | 0x7B35L)))) || 4294967290UL)))) | p_1708->g_106)))), 0x7513L)), 7L)), 0x2E4BL)) , (void*)0) == &p_1708->g_126) >= 1UL)) , l_720[3][3][2]) >= 0x94B1A65AC2465166L) & 9UL));
        return l_786;
    }
    (*l_861) ^= ((p_51 != ((((safe_rshift_func_int16_t_s_u(l_84[2][3], 8)) == (((p_50 == 0L) , (!l_848)) > (safe_rshift_func_uint16_t_u_s((((*l_851) &= p_50) && (safe_mod_func_int16_t_s_s((p_1708->g_126 = (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((p_1708->g_205 != (void*)0))) || ((l_857 = &p_50) == &p_50)), p_50))), 65533UL))), l_859)))) ^ 3UL) != l_786)) != 1UL);
    for (p_1708->g_677.f0 = 0; p_1708->g_677.f0 < 7; p_1708->g_677.f0 += 1)
    {
        p_1708->g_203[p_1708->g_677.f0] = 4294967293UL;
    }
    if (p_1708->g_126)
        goto lbl_862;
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_1708->g_89 p_1708->g_66 p_1708->g_106 p_1708->g_120 p_1708->g_24 p_1708->g_3 p_1708->g_133 p_1708->g_137 p_1708->g_56 p_1708->g_128 p_1708->g_160 p_1708->g_126 p_1708->g_201 p_1708->g_205 p_1708->g_160.f0 p_1708->g_122 p_1708->g_211.f0 p_1708->g_83 p_1708->g_244 p_1708->g_249 p_1708->g_203 p_1708->g_261
 * writes: p_1708->g_106 p_1708->g_120 p_1708->g_122 p_1708->g_83 p_1708->g_126 p_1708->g_128 p_1708->g_131 p_1708->g_133 p_1708->g_137 p_1708->g_174 p_1708->g_66 p_1708->g_201 p_1708->g_203 p_1708->g_213 p_1708->g_244 p_1708->g_249 p_1708->g_261
 */
int8_t  func_61(int8_t * p_62, uint64_t  p_63, int8_t * p_64, struct S5 * p_1708)
{ /* block id: 31 */
    union U0 l_96 = {0x934DL};
    uint64_t *l_105 = &p_1708->g_106;
    uint16_t *l_119 = &p_1708->g_120[6];
    uint16_t *l_121 = &p_1708->g_122;
    uint16_t l_123 = 65531UL;
    uint8_t *l_124[10] = {&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83,&p_1708->g_83};
    int16_t *l_125 = &p_1708->g_126;
    int8_t *l_127 = &p_1708->g_128[7][0][0];
    int32_t l_129 = 0x32B1B5CBL;
    int64_t *l_130 = &p_1708->g_131;
    uint32_t l_175 = 4294967293UL;
    int32_t l_248 = 0x698DDD9EL;
    int32_t *l_263 = &l_129;
    uint8_t l_335 = 0UL;
    union U4 *l_351 = &p_1708->g_352;
    uint64_t **l_370 = &l_105;
    uint16_t l_431 = 0x11F5L;
    union U2 **l_503 = &p_1708->g_213;
    uint32_t **l_543 = (void*)0;
    uint32_t *l_545 = &p_1708->g_203[4];
    uint32_t **l_544 = &l_545;
    uint64_t l_579 = 3UL;
    int32_t l_616 = 9L;
    int32_t l_617[6][9] = {{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L},{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L},{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L},{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L},{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L},{(-10L),0x2E713E3FL,0x2E713E3FL,(-10L),0x6BCD18B3L,0x69B3F246L,(-6L),0x018CD8C7L,0x29321899L}};
    uint16_t l_622 = 0x2208L;
    union U3 *l_659 = &p_1708->g_660;
    int64_t l_670 = 0x0702DCAB6DA9656AL;
    int i, j;
    if ((safe_add_func_uint32_t_u_u(((((((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x0142L, (l_96 , ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_63, (((*l_130) = ((p_1708->g_89 ^ (((safe_rshift_func_int8_t_s_u(((((*p_64) | ((l_129 = (0x4EL > (((*l_127) = ((safe_mod_func_int16_t_s_s(((*l_125) = (((((--(*l_105)) , p_64) == ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((((((safe_rshift_func_uint8_t_u_s((p_1708->g_83 = (l_96.f0 > (((((*l_121) = ((*l_119) |= l_96.f0)) || 1L) , (-9L)) == l_123))), 7)) || (*p_62)) && p_63) , p_63) > l_123) == 0x47A1EF1CL), 2)) || 1UL), l_96.f0)) ^ p_1708->g_24), 0x3EL)) , 0x26L), p_63)) , p_64)) && p_1708->g_24) , p_1708->g_106)), p_1708->g_24)) >= 3UL)) , p_1708->g_89))) ^ l_123)) <= 0x25B80262L) & p_1708->g_3), l_123)) || p_1708->g_66) >= 0xF263C58A5459814CL)) <= p_1708->g_66)) != p_63))), 255UL)) & p_63)))), l_96.f0)) , 0x67L) >= 1UL) <= l_123) , 1L) ^ l_96.f0), p_1708->g_24)))
    { /* block id: 40 */
        int32_t *l_132 = &l_129;
        int32_t *l_136[2][8] = {{&p_1708->g_24,&l_129,&p_1708->g_24,&p_1708->g_24,&l_129,&p_1708->g_24,&p_1708->g_24,&l_129},{&p_1708->g_24,&l_129,&p_1708->g_24,&p_1708->g_24,&l_129,&p_1708->g_24,&p_1708->g_24,&l_129}};
        int i, j;
        p_1708->g_133[2]--;
        ++p_1708->g_137;
        (*l_132) = (safe_sub_func_uint32_t_u_u((p_1708->g_133[5] & (l_123 < (-7L))), (safe_mul_func_int8_t_s_s(((-9L) > p_1708->g_3), (((((((void*)0 == p_1708->g_56[1][6]) || (safe_lshift_func_uint8_t_u_s(((&p_1708->g_106 == (void*)0) || p_1708->g_128[8][4][1]), 5))) >= p_63) && p_63) , p_63) & p_63)))));
    }
    else
    { /* block id: 44 */
        uint32_t l_199[2];
        int i;
        for (i = 0; i < 2; i++)
            l_199[i] = 4294967295UL;
        for (p_1708->g_106 = (-4); (p_1708->g_106 <= 50); p_1708->g_106++)
        { /* block id: 47 */
            union U3 *l_166 = &p_1708->g_167;
            int32_t l_168 = 0x0C6410FAL;
            int32_t l_169 = 0x35B83EC2L;
            uint8_t *l_172 = &p_1708->g_83;
            int8_t l_209 = 0x6EL;
            union U2 *l_210 = &p_1708->g_211[3][1];
            uint32_t l_235[7] = {0x35052A22L,0xA8C6FE17L,0x35052A22L,0x35052A22L,0xA8C6FE17L,0x35052A22L,0x35052A22L};
            int i;
            for (p_1708->g_131 = (-14); (p_1708->g_131 > 29); p_1708->g_131 = safe_add_func_uint8_t_u_u(p_1708->g_131, 4))
            { /* block id: 50 */
                int64_t *l_170[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_177 = 0x193A35CCL;
                union U2 **l_212[6] = {&l_210,&l_210,&l_210,&l_210,&l_210,&l_210};
                int32_t *l_214 = &l_177;
                int i;
                for (p_1708->g_126 = 13; (p_1708->g_126 <= 5); p_1708->g_126--)
                { /* block id: 53 */
                    int8_t l_163 = 0x26L;
                    int64_t **l_171 = &l_130;
                    uint8_t **l_173[4][5] = {{(void*)0,&l_124[7],&l_172,&l_124[7],(void*)0},{(void*)0,&l_124[7],&l_172,&l_124[7],(void*)0},{(void*)0,&l_124[7],&l_172,&l_124[7],(void*)0},{(void*)0,&l_124[7],&l_172,&l_124[7],(void*)0}};
                    int32_t l_176 = 0L;
                    int32_t *l_178 = &l_169;
                    volatile union U4 *l_208 = (void*)0;
                    int i, j;
                    for (p_63 = 0; (p_63 != 49); p_63 = safe_add_func_uint16_t_u_u(p_63, 3))
                    { /* block id: 56 */
                        int32_t *l_154 = &l_129;
                        int32_t **l_155 = &l_154;
                        (*l_154) &= p_1708->g_89;
                        (*l_154) ^= p_1708->g_128[7][0][0];
                        if (p_1708->g_66)
                            continue;
                        (*l_155) = &p_1708->g_24;
                    }
                    (*l_178) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_177 = ((((*p_64) = (p_1708->g_160 , ((safe_sub_func_int64_t_s_s(l_163, p_63)) & (safe_rshift_func_int8_t_s_s((((l_168 = ((void*)0 == l_166)) == ((((((l_169 , (((*l_171) = l_170[2]) != (((p_1708->g_174 = (l_124[2] = l_172)) != &p_1708->g_83) , (void*)0))) != 7UL) >= p_1708->g_128[5][0][3]) & 0x18L) > 0L) <= l_175)) | l_169), l_176))))) > l_129) & p_1708->g_126)) && 0xF308F853C8310D4CL), p_63)), 7));
                    for (p_1708->g_137 = 0; (p_1708->g_137 <= 3); p_1708->g_137 += 1)
                    { /* block id: 71 */
                        int32_t *l_200 = &p_1708->g_201;
                        uint32_t *l_202 = &p_1708->g_203[4];
                        int32_t *l_204[1][10][1];
                        volatile union U4 **l_207[4];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 10; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_204[i][j][k] = (void*)0;
                            }
                        }
                        for (i = 0; i < 4; i++)
                            l_207[i] = &p_1708->g_205;
                        l_129 &= (safe_div_func_uint8_t_u_u((((*l_202) = ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_1708->g_120[(p_1708->g_137 + 3)] || ((1L == (p_63 , (safe_div_func_uint32_t_u_u(7UL, (safe_div_func_uint64_t_u_u(((p_1708->g_174 = (void*)0) != (((*l_200) ^= (safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(p_1708->g_126, ((!((p_63 >= ((((safe_sub_func_uint32_t_u_u(((65532UL < ((((p_1708->g_120[(p_1708->g_137 + 3)] = ((void*)0 == p_1708->g_56[1][6])) || p_1708->g_3) && 0x21438A76L) == p_1708->g_133[2])) || 248UL), 1UL)) , p_63) && (-1L)) < p_63)) && 0L)) , p_63))) , (*l_178)) && l_199[0]), p_63)), 1L))) , (void*)0)), 0x3F437BD5445E5001L)))))) <= l_199[0])), p_1708->g_128[0][1][4])), p_1708->g_133[2])), p_63)) == p_63)) , l_177), 1UL));
                        l_208 = p_1708->g_205;
                        if (l_209)
                            break;
                    }
                }
                p_1708->g_213 = l_210;
                (*l_214) = l_199[1];
                if (l_96.f0)
                { /* block id: 83 */
                    int32_t **l_241 = (void*)0;
                    (*l_214) = (l_96.f0 == ((((safe_div_func_int32_t_s_s(p_1708->g_106, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_96.f0, 11)), (safe_lshift_func_int16_t_s_s(((((p_63 | ((*l_125) |= (safe_mod_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((((((((&p_1708->g_203[0] != &p_1708->g_203[4]) , (safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((((*l_119) = 0UL) , ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((void*)0 == &l_214), 11)), 1)) < p_63) , 0xFA20L) || l_235[1])), p_1708->g_160.f0)) , (*p_62)) < 250UL), 0x70L))) ^ p_63) < 0UL) <= p_63) >= p_1708->g_122) , 1UL), p_1708->g_137)) > p_1708->g_211[3][1].f0) | p_1708->g_128[7][0][0]), p_1708->g_3)))) | 0x0FL) && p_1708->g_137) != p_1708->g_122), 1)))))) , p_1708->g_83) || p_1708->g_120[0]) || 255UL));
                    for (p_1708->g_122 = 0; p_1708->g_122 < 8; p_1708->g_122 += 1)
                    {
                        p_1708->g_120[p_1708->g_122] = 0xA994L;
                    }
                    for (p_1708->g_137 = 0; (p_1708->g_137 >= 27); p_1708->g_137 = safe_add_func_uint64_t_u_u(p_1708->g_137, 6))
                    { /* block id: 90 */
                        uint32_t l_240[6][6][2] = {{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}},{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}},{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}},{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}},{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}},{{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL},{0x604E7EADL,0x599ACBDCL}}};
                        int32_t ***l_246 = &p_1708->g_244[2][2][2];
                        int32_t ***l_247 = &l_241;
                        int i, j, k;
                        (*l_214) = ((((*l_119) = (&p_1708->g_213 == (((((p_1708->g_66 || (p_63 <= (safe_div_func_int64_t_s_s(0x547B228D5863DB9BL, l_240[5][5][1])))) < l_175) ^ ((void*)0 != l_241)) != (p_1708->g_83 = (safe_rshift_func_uint8_t_u_s(l_235[1], 0)))) , &p_1708->g_213))) != p_1708->g_66) != 0x14L);
                        (*l_247) = ((l_168 | (1L == l_240[5][5][1])) , ((*l_246) = p_1708->g_244[7][6][2]));
                    }
                }
                else
                { /* block id: 97 */
                    return p_1708->g_133[2];
                }
            }
            if (l_248)
                continue;
            for (l_96.f0 = 0; (l_96.f0 <= 6); l_96.f0 += 1)
            { /* block id: 104 */
                for (l_209 = 2; (l_209 <= 6); l_209 += 1)
                { /* block id: 107 */
                    volatile int8_t ***l_255 = &p_1708->g_249[0][6][1];
                    uint32_t *l_260 = (void*)0;
                    int32_t *l_262 = &l_248;
                    int i;
                    (*l_255) = p_1708->g_249[0][0][0];
                    (*l_262) |= (((((safe_rshift_func_int16_t_s_u(l_235[l_96.f0], p_63)) <= (p_1708->g_203[3] | (~l_235[l_96.f0]))) , (~0xD0E7BC4987A5CDC2L)) , (p_1708->g_261 |= ((((-1L) <= 0x95L) || (safe_mul_func_uint16_t_u_u(p_63, p_1708->g_211[3][1].f0))) && p_63))) || 2UL);
                }
            }
        }
        return (*p_64);
    }
    return (*p_64);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S5 c_1709;
    struct S5* p_1708 = &c_1709;
    struct S5 c_1710 = {
        9L, // p_1708->g_3
        0xF9150FAEB382E580L, // p_1708->g_16
        0L, // p_1708->g_22
        {6L,6L}, // p_1708->g_23
        0L, // p_1708->g_24
        {0xEE34D1CD05094191L}, // p_1708->g_38
        {1UL}, // p_1708->g_57
        {{&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57},{&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57},{&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57},{&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57},{&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57,&p_1708->g_57}}, // p_1708->g_56
        (-9L), // p_1708->g_66
        0xFEL, // p_1708->g_83
        0x4C9BF6A774B632CCL, // p_1708->g_89
        18446744073709551610UL, // p_1708->g_106
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1708->g_120
        65527UL, // p_1708->g_122
        0x092FL, // p_1708->g_126
        {{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}},{{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)},{2L,0x25L,(-8L),(-7L),(-1L)}}}, // p_1708->g_128
        0x5B92F13429A001A3L, // p_1708->g_131
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1708->g_133
        0xF8L, // p_1708->g_137
        {0xEFACL}, // p_1708->g_160
        {0xE6B6787CEB1106D9L}, // p_1708->g_167
        (void*)0, // p_1708->g_174
        (-3L), // p_1708->g_201
        {0x631D6AA0L,0x631D6AA0L,0x631D6AA0L,0x631D6AA0L,0x631D6AA0L,0x631D6AA0L,0x631D6AA0L}, // p_1708->g_203
        {-1L}, // p_1708->g_206
        &p_1708->g_206, // p_1708->g_205
        {{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}},{{0x598AD5BD78437ABAL},{0x010C4A4D08B0D3C1L},{0x5F1D39A98EA977DBL},{8L}}}, // p_1708->g_211
        (void*)0, // p_1708->g_213
        (void*)0, // p_1708->g_245
        {{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}},{{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,&p_1708->g_245,(void*)0}}}, // p_1708->g_244
        0x0CL, // p_1708->g_251
        0x60L, // p_1708->g_252
        (-1L), // p_1708->g_253
        0L, // p_1708->g_254
        {&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251,&p_1708->g_251}, // p_1708->g_250
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_1708->g_249
        0x2BDC2A12L, // p_1708->g_261
        {0L}, // p_1708->g_276
        {-1L}, // p_1708->g_278
        18446744073709551608UL, // p_1708->g_330
        0xE4F0868AL, // p_1708->g_350
        {0x072D8E7EL}, // p_1708->g_352
        &p_1708->g_131, // p_1708->g_397
        5UL, // p_1708->g_436
        0x6706L, // p_1708->g_494
        {-1L}, // p_1708->g_522
        {1L}, // p_1708->g_524
        {1UL}, // p_1708->g_584
        &p_1708->g_584, // p_1708->g_583
        1UL, // p_1708->g_637
        {{18446744073709551611UL},{5UL},{18446744073709551611UL},{18446744073709551611UL},{5UL},{18446744073709551611UL}}, // p_1708->g_641
        {0xBCCFA4F1D5326D52L}, // p_1708->g_642
        {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}, // p_1708->g_643
        {{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}},{{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}},{{1UL},{0x43DD510D3517C4ACL},{0xA58BD045835B1242L},{0UL},{5UL},{1UL},{0UL},{7UL}}}}, // p_1708->g_644
        {{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}},{{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}},{{0xEBC7EB909D2FE86DL}}}}, // p_1708->g_645
        {0x61F029C2C91ED0D4L}, // p_1708->g_646
        {7UL}, // p_1708->g_647
        {{8UL},{8UL}}, // p_1708->g_648
        {{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}},{{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{18446744073709551606UL}}}, // p_1708->g_649
        {0xE59F3B85A56DFD5EL}, // p_1708->g_650
        {{{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}},{{0x313636156718FBC5L},{18446744073709551615UL},{0x313636156718FBC5L},{0x313636156718FBC5L}}}}, // p_1708->g_651
        {0x66E655BAED629F6CL}, // p_1708->g_652
        {0x6194ADA2ABA59FC5L}, // p_1708->g_653
        {0UL}, // p_1708->g_654
        {0x03B9B2267796DAF0L}, // p_1708->g_655
        {{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}},{{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}},{{18446744073709551615UL},{0x63B70C2554D0E48AL},{0xB9DA19226F2EBB7DL},{0xF5370890B3456EDCL},{0x63B70C2554D0E48AL}}}}, // p_1708->g_656
        {0x3ACD204DEE0228AEL}, // p_1708->g_657
        {0x3225A8AF4C86CA63L}, // p_1708->g_658
        {18446744073709551609UL}, // p_1708->g_660
        {-5L}, // p_1708->g_668
        {0x7B4C5C54L}, // p_1708->g_677
        &p_1708->g_89, // p_1708->g_712
        &p_1708->g_712, // p_1708->g_711
        {0x413BD4A78A1ADADBL}, // p_1708->g_744
        {0x1872DC2CL}, // p_1708->g_788
        {0L}, // p_1708->g_790
        {{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}},{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}},{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}},{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}},{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}},{{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}},{{4L},{0x132D0A2AL},{-1L},{0x132D0A2AL},{4L},{4L}}}}, // p_1708->g_791
        {{0x350267C1L}}, // p_1708->g_792
        {4L}, // p_1708->g_793
        {9UL}, // p_1708->g_824
        {{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}},{{0x42271B69L},{0x42271B69L},{0x264F3D79L}}}, // p_1708->g_828
        {1UL}, // p_1708->g_866
        {{&p_1708->g_245,(void*)0,&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,(void*)0,&p_1708->g_245,&p_1708->g_245,(void*)0},{&p_1708->g_245,(void*)0,&p_1708->g_245,&p_1708->g_245,(void*)0}}, // p_1708->g_883
        &p_1708->g_522.f0, // p_1708->g_906
        0L, // p_1708->g_948
        &p_1708->g_948, // p_1708->g_947
        &p_1708->g_947, // p_1708->g_946
        &p_1708->g_160, // p_1708->g_997
        {&p_1708->g_997,&p_1708->g_997,&p_1708->g_997,&p_1708->g_997,&p_1708->g_997,&p_1708->g_997}, // p_1708->g_996
        {5L}, // p_1708->g_1012
        &p_1708->g_792[0].f0, // p_1708->g_1051
        {&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245}, // p_1708->g_1052
        {{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}},{{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}},{{9L},{9L},{0x27A975ABF81559F3L},{0L},{0L},{-4L},{-5L}}}}, // p_1708->g_1068
        &p_1708->g_397, // p_1708->g_1132
        {&p_1708->g_1132,&p_1708->g_1132,&p_1708->g_1132,&p_1708->g_1132,&p_1708->g_1132}, // p_1708->g_1131
        &p_1708->g_1132, // p_1708->g_1133
        {0x36ADD2BCA82F7CF4L}, // p_1708->g_1161
        {7UL}, // p_1708->g_1166
        5UL, // p_1708->g_1178
        0x0163AE14745F58F3L, // p_1708->g_1182
        {{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}},{{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0},{&p_1708->g_1182,&p_1708->g_1182,(void*)0,&p_1708->g_1182,(void*)0}}}, // p_1708->g_1185
        {&p_1708->g_1185[2][0][2],&p_1708->g_1185[2][0][2]}, // p_1708->g_1184
        {&p_1708->g_1184[0],&p_1708->g_1184[0],&p_1708->g_1184[0]}, // p_1708->g_1183
        &p_1708->g_1184[0], // p_1708->g_1186
        {&p_1708->g_677,&p_1708->g_824,&p_1708->g_677,&p_1708->g_677,&p_1708->g_824,&p_1708->g_677,&p_1708->g_677,&p_1708->g_824,&p_1708->g_677}, // p_1708->g_1202
        {1UL}, // p_1708->g_1212
        {(void*)0}, // p_1708->g_1227
        &p_1708->g_1227[0], // p_1708->g_1226
        {0x71AD3D52ED0525D2L}, // p_1708->g_1238
        &p_1708->g_278, // p_1708->g_1258
        &p_1708->g_1258, // p_1708->g_1257
        {3UL}, // p_1708->g_1315
        {0xC714060C70E35333L}, // p_1708->g_1341
        {0x409909F57152FF2DL}, // p_1708->g_1351
        {6UL}, // p_1708->g_1352
        {{0xE5A78FDBFB0BB445L},{0xE5A78FDBFB0BB445L},{0xE5A78FDBFB0BB445L},{0xE5A78FDBFB0BB445L},{0xE5A78FDBFB0BB445L}}, // p_1708->g_1354
        &p_1708->g_1354[2], // p_1708->g_1353
        {0x1DEF787CL}, // p_1708->g_1357
        {1L}, // p_1708->g_1384
        0L, // p_1708->g_1505
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1708->g_1531
        &p_1708->g_245, // p_1708->g_1532
        7L, // p_1708->g_1561
        &p_1708->g_1561, // p_1708->g_1565
        {&p_1708->g_1565,&p_1708->g_1565,&p_1708->g_1565,&p_1708->g_1565,&p_1708->g_1565,&p_1708->g_1565,&p_1708->g_1565}, // p_1708->g_1564
        &p_1708->g_1564[5], // p_1708->g_1563
        (void*)0, // p_1708->g_1609
        {{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245},{&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245,&p_1708->g_245}}, // p_1708->g_1610
        &p_1708->g_245, // p_1708->g_1611
        &p_1708->g_245, // p_1708->g_1616
        {{-1L},{-1L}}, // p_1708->g_1669
        {{{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL}},{{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL}},{{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL}},{{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL},{0x71676712L,0xDC37158FL,4294967295UL,4UL,0x0007534DL,0x95ECAA3AL,4294967290UL}}}, // p_1708->g_1683
        &p_1708->g_1683[3][6][3], // p_1708->g_1682
        &p_1708->g_1682, // p_1708->g_1681
        {{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L},{0x4FE0AA3AB094EAF4L}}, // p_1708->g_1707
    };
    c_1709 = c_1710;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1708);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1708->g_3, "p_1708->g_3", print_hash_value);
    transparent_crc(p_1708->g_16, "p_1708->g_16", print_hash_value);
    transparent_crc(p_1708->g_22, "p_1708->g_22", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1708->g_23[i], "p_1708->g_23[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_24, "p_1708->g_24", print_hash_value);
    transparent_crc(p_1708->g_38.f0, "p_1708->g_38.f0", print_hash_value);
    transparent_crc(p_1708->g_57.f0, "p_1708->g_57.f0", print_hash_value);
    transparent_crc(p_1708->g_66, "p_1708->g_66", print_hash_value);
    transparent_crc(p_1708->g_83, "p_1708->g_83", print_hash_value);
    transparent_crc(p_1708->g_89, "p_1708->g_89", print_hash_value);
    transparent_crc(p_1708->g_106, "p_1708->g_106", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1708->g_120[i], "p_1708->g_120[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_122, "p_1708->g_122", print_hash_value);
    transparent_crc(p_1708->g_126, "p_1708->g_126", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1708->g_128[i][j][k], "p_1708->g_128[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_131, "p_1708->g_131", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1708->g_133[i], "p_1708->g_133[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_137, "p_1708->g_137", print_hash_value);
    transparent_crc(p_1708->g_160.f0, "p_1708->g_160.f0", print_hash_value);
    transparent_crc(p_1708->g_167.f0, "p_1708->g_167.f0", print_hash_value);
    transparent_crc(p_1708->g_201, "p_1708->g_201", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1708->g_203[i], "p_1708->g_203[i]", print_hash_value);

    }
    transparent_crc(p_1708->g_206.f0, "p_1708->g_206.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1708->g_211[i][j].f0, "p_1708->g_211[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1708->g_251, "p_1708->g_251", print_hash_value);
    transparent_crc(p_1708->g_252, "p_1708->g_252", print_hash_value);
    transparent_crc(p_1708->g_253, "p_1708->g_253", print_hash_value);
    transparent_crc(p_1708->g_254, "p_1708->g_254", print_hash_value);
    transparent_crc(p_1708->g_261, "p_1708->g_261", print_hash_value);
    transparent_crc(p_1708->g_276.f0, "p_1708->g_276.f0", print_hash_value);
    transparent_crc(p_1708->g_278.f0, "p_1708->g_278.f0", print_hash_value);
    transparent_crc(p_1708->g_330, "p_1708->g_330", print_hash_value);
    transparent_crc(p_1708->g_350, "p_1708->g_350", print_hash_value);
    transparent_crc(p_1708->g_352.f0, "p_1708->g_352.f0", print_hash_value);
    transparent_crc(p_1708->g_436, "p_1708->g_436", print_hash_value);
    transparent_crc(p_1708->g_494, "p_1708->g_494", print_hash_value);
    transparent_crc(p_1708->g_522.f0, "p_1708->g_522.f0", print_hash_value);
    transparent_crc(p_1708->g_524.f0, "p_1708->g_524.f0", print_hash_value);
    transparent_crc(p_1708->g_584.f0, "p_1708->g_584.f0", print_hash_value);
    transparent_crc(p_1708->g_637, "p_1708->g_637", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1708->g_641[i].f0, "p_1708->g_641[i].f0", print_hash_value);

    }
    transparent_crc(p_1708->g_642.f0, "p_1708->g_642.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1708->g_643[i].f0, "p_1708->g_643[i].f0", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1708->g_644[i][j][k].f0, "p_1708->g_644[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1708->g_645[i][j][k].f0, "p_1708->g_645[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_646.f0, "p_1708->g_646.f0", print_hash_value);
    transparent_crc(p_1708->g_647.f0, "p_1708->g_647.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1708->g_648[i].f0, "p_1708->g_648[i].f0", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1708->g_649[i][j].f0, "p_1708->g_649[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1708->g_650.f0, "p_1708->g_650.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1708->g_651[i][j][k].f0, "p_1708->g_651[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_652.f0, "p_1708->g_652.f0", print_hash_value);
    transparent_crc(p_1708->g_653.f0, "p_1708->g_653.f0", print_hash_value);
    transparent_crc(p_1708->g_654.f0, "p_1708->g_654.f0", print_hash_value);
    transparent_crc(p_1708->g_655.f0, "p_1708->g_655.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1708->g_656[i][j][k].f0, "p_1708->g_656[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_657.f0, "p_1708->g_657.f0", print_hash_value);
    transparent_crc(p_1708->g_658.f0, "p_1708->g_658.f0", print_hash_value);
    transparent_crc(p_1708->g_660.f0, "p_1708->g_660.f0", print_hash_value);
    transparent_crc(p_1708->g_668.f0, "p_1708->g_668.f0", print_hash_value);
    transparent_crc(p_1708->g_677.f0, "p_1708->g_677.f0", print_hash_value);
    transparent_crc(p_1708->g_744.f0, "p_1708->g_744.f0", print_hash_value);
    transparent_crc(p_1708->g_788.f0, "p_1708->g_788.f0", print_hash_value);
    transparent_crc(p_1708->g_790.f0, "p_1708->g_790.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1708->g_791[i][j][k].f0, "p_1708->g_791[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1708->g_792[i].f0, "p_1708->g_792[i].f0", print_hash_value);

    }
    transparent_crc(p_1708->g_793.f0, "p_1708->g_793.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1708->g_828[i][j].f0, "p_1708->g_828[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1708->g_866.f0, "p_1708->g_866.f0", print_hash_value);
    transparent_crc(p_1708->g_948, "p_1708->g_948", print_hash_value);
    transparent_crc(p_1708->g_1012.f0, "p_1708->g_1012.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1708->g_1068[i][j][k].f0, "p_1708->g_1068[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1708->g_1161.f0, "p_1708->g_1161.f0", print_hash_value);
    transparent_crc(p_1708->g_1166.f0, "p_1708->g_1166.f0", print_hash_value);
    transparent_crc(p_1708->g_1178, "p_1708->g_1178", print_hash_value);
    transparent_crc(p_1708->g_1182, "p_1708->g_1182", print_hash_value);
    transparent_crc(p_1708->g_1212.f0, "p_1708->g_1212.f0", print_hash_value);
    transparent_crc(p_1708->g_1238.f0, "p_1708->g_1238.f0", print_hash_value);
    transparent_crc(p_1708->g_1315.f0, "p_1708->g_1315.f0", print_hash_value);
    transparent_crc(p_1708->g_1341.f0, "p_1708->g_1341.f0", print_hash_value);
    transparent_crc(p_1708->g_1351.f0, "p_1708->g_1351.f0", print_hash_value);
    transparent_crc(p_1708->g_1352.f0, "p_1708->g_1352.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1708->g_1354[i].f0, "p_1708->g_1354[i].f0", print_hash_value);

    }
    transparent_crc(p_1708->g_1357.f0, "p_1708->g_1357.f0", print_hash_value);
    transparent_crc(p_1708->g_1384.f0, "p_1708->g_1384.f0", print_hash_value);
    transparent_crc(p_1708->g_1505, "p_1708->g_1505", print_hash_value);
    transparent_crc(p_1708->g_1561, "p_1708->g_1561", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1708->g_1669[i].f0, "p_1708->g_1669[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1708->g_1683[i][j][k], "p_1708->g_1683[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1708->g_1707[i].f0, "p_1708->g_1707[i].f0", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
