// -g 68,18,4 -l 2,9,2
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


// Seed: 3143545322

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int16_t g_5;
    uint16_t g_6;
    int32_t g_29;
    uint32_t g_39[4];
    int64_t g_58[2][3];
    uint32_t g_68;
    uint32_t *g_67[1][4][8];
    int64_t *g_84;
    int8_t g_102;
    int32_t g_104;
    int16_t g_109;
    int32_t g_111;
    int16_t g_114;
    int32_t * volatile g_136;
    int32_t g_138;
    int64_t g_163;
    int32_t *g_182;
    uint16_t g_196;
    uint16_t g_202;
    int32_t *g_205;
    int32_t ** volatile g_204;
    int32_t g_231;
    uint16_t g_292;
    int64_t g_299[1];
    volatile int32_t g_300;
    volatile int32_t g_301;
    volatile uint8_t g_302;
    uint32_t g_313;
    uint32_t *g_312;
    uint64_t g_315;
    uint64_t g_342;
    int16_t *g_355;
    int16_t **g_354[6][3];
    uint8_t g_362[2][4][3];
    uint8_t g_366;
    int32_t g_378;
    int32_t * volatile g_411;
    int32_t * volatile * volatile g_410;
    uint64_t g_475;
    volatile uint8_t g_489;
    int64_t g_492;
    volatile int32_t g_493;
    volatile int32_t g_494;
    int64_t g_495;
    volatile int8_t g_496;
    uint32_t g_497[3][2][10];
    int32_t * volatile g_527[4];
    int32_t * volatile g_528[6][8][5];
    volatile uint16_t g_546[3];
    uint16_t *g_578;
    uint16_t **g_577;
    volatile int8_t * volatile *g_620;
    uint32_t g_644;
    volatile int32_t g_793;
    volatile int32_t g_794;
    volatile int32_t g_795;
    volatile int32_t g_796;
    volatile int32_t g_797[7][9];
    volatile int32_t g_798[1][4];
    volatile int32_t *g_792[3][6];
    volatile int32_t **g_791[3];
    int32_t ** volatile g_885[1];
    int32_t ** volatile g_886;
    int32_t ** volatile g_905;
    int32_t ** volatile g_941[2][3][4];
    uint64_t ** volatile g_988;
    int32_t ** volatile g_1003[5];
    int32_t ** volatile g_1039;
    uint64_t * volatile * volatile g_1042;
    int32_t * volatile g_1045;
    uint32_t g_1084[2];
    int32_t ** volatile g_1118;
    int16_t g_1170;
    int32_t * volatile g_1175;
    int32_t ** volatile g_1177;
    uint32_t g_1224;
    uint8_t g_1268;
    uint64_t g_1283[9];
    uint64_t * volatile g_1292[3];
    uint64_t * volatile *g_1291;
    int32_t g_1302;
    int32_t * volatile g_1424;
    uint32_t **g_1447;
    int32_t * volatile g_1466[9];
    uint32_t g_1591;
    int8_t g_1602[1][10];
    int8_t g_1604;
    int64_t g_1630;
    uint64_t g_1646;
    int32_t ** volatile g_1681;
    volatile uint32_t g_1735;
    uint32_t g_1801;
    int64_t * volatile g_1838;
    int64_t * volatile *g_1837;
    volatile int32_t *** volatile g_1888;
    int32_t g_1948;
    uint32_t ***g_1961[9];
    uint32_t ***g_1962;
    int32_t ** volatile g_1973[7][7];
    int64_t **g_1987;
    int64_t *** volatile g_1986;
    int32_t **g_2000;
    int32_t ***g_1999;
    uint64_t *g_2056;
    uint64_t * volatile *g_2055;
    uint8_t *g_2070;
    uint8_t **g_2069[4];
    int8_t g_2086;
    int8_t g_2122;
    uint64_t *g_2148[4];
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_2155);
int32_t  func_13(int32_t  p_14, struct S0 * p_2155);
int16_t  func_17(uint32_t  p_18, uint32_t  p_19, struct S0 * p_2155);
uint16_t  func_24(int8_t  p_25, struct S0 * p_2155);
uint8_t  func_32(uint32_t  p_33, uint32_t  p_34, int8_t  p_35, uint64_t  p_36, int32_t  p_37, struct S0 * p_2155);
uint64_t  func_42(uint64_t  p_43, uint32_t  p_44, struct S0 * p_2155);
uint32_t * func_45(int32_t * p_46, int32_t * p_47, int32_t  p_48, struct S0 * p_2155);
int32_t * func_49(int64_t  p_50, int32_t * p_51, int64_t  p_52, uint32_t  p_53, uint32_t * p_54, struct S0 * p_2155);
int32_t * func_59(uint16_t  p_60, uint32_t  p_61, struct S0 * p_2155);
uint16_t  func_62(uint32_t * p_63, uint32_t * p_64, uint64_t  p_65, int8_t  p_66, struct S0 * p_2155);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2155->g_6 p_2155->g_798
 * writes: p_2155->g_6
 */
uint32_t  func_1(struct S0 * p_2155)
{ /* block id: 4 */
    int32_t *l_2 = &p_2155->g_3;
    int32_t *l_4[8][6] = {{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3},{&p_2155->g_3,&p_2155->g_3,(void*)0,&p_2155->g_3,&p_2155->g_3,&p_2155->g_3}};
    uint32_t *l_1413 = (void*)0;
    uint32_t *l_1414 = &p_2155->g_1224;
    int32_t l_1415 = 0x6DF097ADL;
    uint8_t *l_1927 = &p_2155->g_362[1][3][2];
    uint8_t **l_1926 = &l_1927;
    int32_t *l_1958 = &p_2155->g_231;
    int32_t **l_1957[4] = {&l_1958,&l_1958,&l_1958,&l_1958};
    int32_t ***l_1956[3];
    int64_t **l_1985 = &p_2155->g_84;
    int32_t **l_1992 = (void*)0;
    int32_t ***l_2002 = &p_2155->g_2000;
    int64_t *l_2005 = &p_2155->g_163;
    uint64_t l_2023 = 0x2EF61160DD4F9520L;
    int64_t l_2027 = 0x584D571F7FC01A07L;
    uint8_t l_2036 = 0x48L;
    uint32_t ****l_2059 = (void*)0;
    int32_t l_2073[8] = {0x679535C3L,0x679535C3L,0x679535C3L,0x679535C3L,0x679535C3L,0x679535C3L,0x679535C3L,0x679535C3L};
    int32_t l_2098[2][2][3] = {{{0x60F3683EL,1L,0x60F3683EL},{0x60F3683EL,1L,0x60F3683EL}},{{0x60F3683EL,1L,0x60F3683EL},{0x60F3683EL,1L,0x60F3683EL}}};
    uint32_t l_2121 = 1UL;
    int32_t l_2130 = 0x51DAC5B9L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1956[i] = &l_1957[1];
    p_2155->g_6++;
    return p_2155->g_798[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_644 p_2155->g_362 p_2155->g_355 p_2155->g_5 p_2155->g_315 p_2155->g_1681 p_2155->g_312 p_2155->g_313 p_2155->g_114 p_2155->g_494 p_2155->g_138 p_2155->g_204 p_2155->g_205 p_2155->g_29 p_2155->g_39 p_2155->g_620 p_2155->g_1735 p_2155->g_793 p_2155->g_492 p_2155->g_475 p_2155->g_342 p_2155->g_104 p_2155->g_109 p_2155->g_1291 p_2155->g_1292 p_2155->g_366 p_2155->g_58 p_2155->g_67 p_2155->g_292 p_2155->g_231 p_2155->g_300 p_2155->g_111 p_2155->g_102 p_2155->g_6 p_2155->g_354 p_2155->g_299 p_2155->g_378 p_2155->g_410 p_2155->g_196 p_2155->g_202 p_2155->g_3 p_2155->g_301 p_2155->g_163 p_2155->g_489 p_2155->g_497 p_2155->g_1801 p_2155->g_1283 p_2155->g_1837 p_2155->g_794 p_2155->g_1838 p_2155->g_1045 p_2155->g_1888 p_2155->g_1424 p_2155->g_1604
 * writes: p_2155->g_1604 p_2155->g_644 p_2155->g_231 p_2155->g_577 p_2155->g_205 p_2155->g_313 p_2155->g_114 p_2155->g_1630 p_2155->g_362 p_2155->g_299 p_2155->g_366 p_2155->g_138 p_2155->g_29 p_2155->g_315 p_2155->g_1268 p_2155->g_292 p_2155->g_202 p_2155->g_342 p_2155->g_111 p_2155->g_475 p_2155->g_102 p_2155->g_489 p_2155->g_497 p_2155->g_1283 p_2155->g_492 p_2155->g_3 p_2155->g_104 p_2155->g_791
 */
int32_t  func_13(int32_t  p_14, struct S0 * p_2155)
{ /* block id: 733 */
    int32_t *l_1647[4] = {&p_2155->g_29,&p_2155->g_29,&p_2155->g_29,&p_2155->g_29};
    uint32_t l_1648 = 0xD30905B2L;
    uint32_t l_1658[9] = {0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL,0x5CD2EBCCL};
    uint16_t **l_1679 = &p_2155->g_578;
    uint64_t l_1682 = 0UL;
    uint16_t l_1721 = 1UL;
    uint16_t l_1761 = 0UL;
    int64_t **l_1772 = &p_2155->g_84;
    int64_t *l_1920 = &p_2155->g_1630;
    int64_t **l_1919 = &l_1920;
    int64_t ***l_1918 = &l_1919;
    int i;
lbl_1832:
    l_1648++;
    for (p_2155->g_1604 = 0; (p_2155->g_1604 > (-7)); p_2155->g_1604--)
    { /* block id: 737 */
        uint32_t *l_1655 = &p_2155->g_644;
        int32_t l_1661 = (-4L);
        uint8_t *l_1768 = &p_2155->g_362[1][3][2];
        uint16_t **l_1769 = &p_2155->g_578;
        int32_t *l_1781 = (void*)0;
        int32_t **l_1780 = &l_1781;
        int64_t **l_1836 = (void*)0;
        int16_t *l_1839 = &p_2155->g_1170;
        uint64_t *l_1844[4];
        uint8_t l_1922 = 0xF8L;
        int i;
        for (i = 0; i < 4; i++)
            l_1844[i] = (void*)0;
        if (((safe_div_func_uint16_t_u_u(65535UL, (((*l_1655)++) | (l_1658[2] = 0x46BE1C48L)))) | (safe_rshift_func_uint16_t_u_u(0xA273L, 9))))
        { /* block id: 740 */
            if (l_1661)
                break;
        }
        else
        { /* block id: 742 */
            uint16_t **l_1677 = &p_2155->g_578;
            int32_t l_1698 = (-2L);
            int32_t l_1742 = 0x4626D157L;
            int32_t l_1744 = (-3L);
            int32_t *l_1797 = (void*)0;
            int32_t l_1816 = (-6L);
            int16_t *l_1841 = &p_2155->g_109;
            int64_t l_1852 = 0x3BB3DE89761FD76DL;
            int64_t *l_1859 = &p_2155->g_1630;
            int32_t **l_1925 = &l_1647[1];
            for (p_2155->g_231 = 0; (p_2155->g_231 >= (-5)); p_2155->g_231 = safe_sub_func_uint64_t_u_u(p_2155->g_231, 1))
            { /* block id: 745 */
                int16_t l_1676[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
                uint16_t ***l_1678[9] = {&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677};
                uint32_t **l_1680 = &p_2155->g_67[0][3][6];
                int32_t l_1685 = 0x7247BFA7L;
                int32_t l_1743 = (-1L);
                uint8_t *l_1766 = &p_2155->g_366;
                int64_t **l_1771 = &p_2155->g_84;
                uint8_t l_1860 = 249UL;
                int64_t *l_1921 = &p_2155->g_163;
                int8_t *l_1923 = (void*)0;
                int8_t *l_1924 = &p_2155->g_102;
                int i;
                if ((((l_1661 ^ p_14) | (&p_2155->g_527[2] == (void*)0)) , ((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u(p_2155->g_362[0][2][1], 7)) <= (safe_sub_func_int64_t_s_s((l_1676[3] &= p_14), ((l_1679 = l_1677) == (p_2155->g_577 = ((((((l_1680 != (p_14 , (void*)0)) > 0x540A5BE7A5D3E815L) ^ (*p_2155->g_355)) , 0x7B3017D8L) && p_14) , &p_2155->g_578)))))) , 0x61113D76L) , (*p_2155->g_355)), l_1661)), 0x06B0E8BF91E08BBEL)), p_14)), p_2155->g_315)) , p_14) | p_14) ^ 0x5462L)))
                { /* block id: 749 */
                    return p_14;
                }
                else
                { /* block id: 751 */
                    uint32_t l_1694 = 4294967295UL;
                    int16_t *l_1697 = &p_2155->g_114;
                    int16_t *l_1703 = &l_1676[3];
                    int64_t *l_1704 = &p_2155->g_1630;
                    uint16_t **l_1714 = &p_2155->g_578;
                    uint16_t **l_1715 = &p_2155->g_578;
                    int32_t l_1723 = (-1L);
                    int32_t **l_1724[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1724[i] = &l_1647[1];
                    (*p_2155->g_1681) = l_1647[2];
                    if ((((*l_1704) = ((251UL && ((l_1682 , (safe_sub_func_int32_t_s_s((((*p_2155->g_312)--) , ((safe_div_func_int16_t_s_s(((*l_1697) |= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((p_14 == ((void*)0 != &p_14)), (--l_1694))), 1))), (l_1698 , ((*l_1703) |= (safe_add_func_int32_t_s_s(((*p_2155->g_355) | (0UL < (safe_mod_func_uint8_t_u_u(p_14, (-7L))))), p_2155->g_494)))))) || p_2155->g_138)), 0x211722D2L))) & p_14)) , l_1694)) , l_1685))
                    { /* block id: 758 */
                        uint8_t *l_1707 = &p_2155->g_362[1][0][1];
                        int64_t *l_1720 = &p_2155->g_299[0];
                        int32_t l_1722 = 0x4B2E36C8L;
                        int32_t **l_1726 = &p_2155->g_205;
                        int32_t ***l_1725 = &l_1726;
                        l_1723 ^= (p_14 , (p_14 && ((((*l_1707) = (safe_div_func_uint8_t_u_u(l_1685, l_1698))) || (+(((safe_sub_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((&p_14 != (*p_2155->g_204)), ((((safe_lshift_func_uint8_t_u_u(((l_1714 = &p_2155->g_578) != l_1715), ((l_1698 = (safe_add_func_int64_t_s_s(((*l_1720) = (safe_rshift_func_uint16_t_u_s(((l_1685 , (*p_2155->g_205)) == 0x23972C76L), 5))), p_2155->g_39[3]))) > l_1661))) < l_1721) && l_1685) != p_14))) <= l_1694) || l_1698), 0x1D8F8B1DL)) , l_1694) ^ p_14))) & l_1722)));
                        if (l_1694)
                            continue;
                        (*l_1725) = (l_1724[0] = &l_1647[1]);
                    }
                    else
                    { /* block id: 767 */
                        int16_t l_1727 = 2L;
                        uint8_t **l_1767[10];
                        uint64_t l_1770 = 0xAB8E58AD17092053L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1767[i] = &l_1766;
                        l_1744 = ((l_1698 = p_14) >= ((l_1727 >= (safe_mod_func_uint8_t_u_u(((((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int8_t_s_s(((p_2155->g_620 == (void*)0) ^ ((((((safe_add_func_uint8_t_u_u((((~((l_1661 ^ p_2155->g_1735) , (l_1742 = (p_14 | (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(p_14, (safe_div_func_uint32_t_u_u(p_2155->g_793, p_2155->g_362[1][3][2])))), p_2155->g_492)))))) , 6UL) != l_1661), p_2155->g_475)) , &l_1715) == (void*)0) && p_2155->g_342) & 0x5592L) & 0x28CC4DB4BDD960E6L)), 4)) != 0x9CB1L))) , &l_1679) != l_1678[6]) <= l_1743), p_2155->g_104))) <= p_14));
                        (*p_2155->g_205) |= (p_2155->g_109 && ((safe_mul_func_uint16_t_u_u((p_14 >= (-4L)), ((safe_div_func_uint64_t_u_u(0xF6ED8E062A91E222L, ((&p_2155->g_84 != ((((safe_mul_func_int8_t_s_s(((((safe_sub_func_int64_t_s_s(l_1744, p_14)) || (safe_lshift_func_uint8_t_u_u(((((*l_1766) ^= (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((((((safe_mul_func_uint16_t_u_u(l_1761, ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((l_1768 = l_1766) == &p_2155->g_362[1][3][2]), p_14)), l_1727)) < (-6L)) , l_1769) != l_1769))) ^ 0x4E6FL) , p_14) , p_2155->g_104) , (void*)0) == (*p_2155->g_1291)) , l_1743), 7)), 0x2AL)) , p_14) <= 0xD8L)) || 0x7EL) | p_2155->g_58[0][0]), 6))) >= l_1770) <= p_14), p_14)) > l_1727) >= p_14) , l_1771)) & (-2L)))) | l_1661))) >= p_14));
                    }
                    if ((!l_1661))
                    { /* block id: 775 */
                        int16_t **l_1777 = &l_1703;
                        int32_t l_1793 = 9L;
                        uint8_t *l_1794 = &p_2155->g_1268;
                        uint8_t l_1795 = 0x2EL;
                        uint32_t *l_1796 = &p_2155->g_39[3];
                        (**p_2155->g_1681) |= ((((p_14 = (l_1772 != (void*)0)) & (safe_lshift_func_int16_t_s_s(((*l_1703) = l_1698), 9))) , ((p_14 > ((void*)0 != l_1777)) && (p_2155->g_362[1][2][1] = (safe_sub_func_int16_t_s_s(((void*)0 != l_1780), (safe_rshift_func_uint8_t_u_u((((p_14 > p_14) > l_1742) >= 0xA2L), p_14))))))) == 0x4FL);
                        l_1797 = func_49(l_1661, func_49(((safe_unary_minus_func_uint8_t_u(5UL)) && (+(0x33732BEAL | p_14))), (l_1676[3] , &p_14), ((~(safe_rshift_func_int16_t_s_u((((*l_1768)--) <= 255UL), ((safe_rshift_func_uint16_t_u_u((((*l_1794) = (((safe_div_func_uint64_t_u_u(((**p_2155->g_1291) = (!(&l_1694 == &l_1648))), l_1661)) < l_1793) & 0x3B7F7ECDL)) == l_1795), 3)) == l_1742)))) , p_14), (*p_2155->g_312), (*l_1680), p_2155), p_14, p_14, l_1796, p_2155);
                    }
                    else
                    { /* block id: 784 */
                        uint16_t l_1798 = 6UL;
                        l_1798++;
                        return p_2155->g_1801;
                    }
                }
                for (l_1744 = 0; (l_1744 > (-3)); l_1744--)
                { /* block id: 791 */
                    uint64_t *l_1827 = &p_2155->g_1283[6];
                    int32_t l_1828 = 0x1913BB72L;
                    uint32_t l_1829 = 0x9ABA04F3L;
                    int64_t *l_1834 = (void*)0;
                    int64_t **l_1833 = &l_1834;
                    int32_t l_1863 = 0x0F419579L;
                    int32_t **l_1891 = &p_2155->g_205;
                    (*l_1797) = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(0x60L, (safe_div_func_uint8_t_u_u(p_14, (safe_sub_func_int8_t_s_s(l_1676[3], l_1816)))))) && (safe_add_func_uint16_t_u_u((((l_1685 , ((((((safe_mod_func_int16_t_s_s((!(p_14 , (safe_add_func_int16_t_s_s((p_14 > (safe_mod_func_int64_t_s_s(p_14, ((((*l_1827) |= (--(**p_2155->g_1291))) && (0x7B058A76L > p_14)) && 18446744073709551608UL)))), 0x12B4L)))), l_1828)) > l_1661) != 0x0CL) , 1L) > 0L) < 4294967294UL)) ^ 0xD48E3152F5A4B546L) > l_1828), l_1829))) >= p_2155->g_29), (*l_1797))), l_1661)), (-9L)));
                    for (p_2155->g_492 = 0; (p_2155->g_492 != (-5)); p_2155->g_492 = safe_sub_func_int16_t_s_s(p_2155->g_492, 2))
                    { /* block id: 797 */
                        int64_t ***l_1835[2];
                        int16_t **l_1840 = (void*)0;
                        uint64_t *l_1843 = &p_2155->g_475;
                        uint64_t **l_1842 = &l_1843;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1835[i] = &l_1833;
                        (*l_1797) = (-1L);
                        if (p_2155->g_315)
                            goto lbl_1832;
                        p_14 = (((**p_2155->g_1291) = ((l_1836 = l_1833) != p_2155->g_1837)) && (((l_1839 != (l_1841 = &l_1676[0])) != ((((*l_1842) = &p_2155->g_475) == l_1844[2]) & p_14)) , (!((safe_div_func_int64_t_s_s((p_14 || (safe_mod_func_uint8_t_u_u(p_2155->g_794, 0x2EL))), (*l_1797))) && p_14))));
                        l_1863 ^= ((safe_lshift_func_int16_t_s_s(((((safe_unary_minus_func_uint64_t_u((l_1852 >= (safe_add_func_int32_t_s_s((-9L), (l_1661 = (safe_add_func_int8_t_s_s(p_14, ((*p_2155->g_355) < ((l_1828 = (p_14 != ((safe_div_func_int64_t_s_s(((((*p_2155->g_1837) != l_1859) , l_1860) <= ((safe_mod_func_int16_t_s_s(((void*)0 != &l_1682), 2UL)) >= (*l_1797))), 0x35BE7CA2A511E3B7L)) != 5L))) , 0x5704L)))))))))) , p_14) < p_14) != p_14), 3)) | p_14);
                    }
                    for (p_2155->g_3 = (-21); (p_2155->g_3 <= (-2)); p_2155->g_3++)
                    { /* block id: 811 */
                        int8_t *l_1866 = &p_2155->g_102;
                        int64_t *l_1887[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1887[i] = &p_2155->g_299[0];
                        (*p_2155->g_1045) |= (p_14 , ((((*l_1866) = p_14) && (safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_14, (p_14 || ((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(((l_1828 |= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(0x7FL, 3)), ((p_14 , ((((((safe_mod_func_int8_t_s_s((-3L), p_14)) && ((l_1685 = (safe_rshift_func_int8_t_s_s(p_2155->g_644, l_1743))) , 0x3755L)) != l_1863) < 0x12D023BEC37C3DA6L) , l_1677) == &p_2155->g_578)) > (-1L))))) ^ p_14), 5)) & 0xE3E58BD5L), (*l_1797))) || 5L), l_1661)) <= (-4L))))), (-9L))), 6))) <= 0xCDL));
                        (*p_2155->g_1888) = &p_2155->g_792[2][5];
                    }
                    (*l_1891) = func_59((p_2155->g_292--), p_14, p_2155);
                }
            }
            (*l_1925) = &l_1661;
            return (*p_2155->g_1424);
        }
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_29 p_2155->g_1045 p_2155->g_1424 p_2155->g_3 p_2155->g_355 p_2155->g_5 p_2155->g_1291 p_2155->g_1292 p_2155->g_104 p_2155->g_313 p_2155->g_644 p_2155->g_1084 p_2155->g_109 p_2155->g_497 p_2155->g_362 p_2155->g_366 p_2155->g_102 p_2155->g_315 p_2155->g_410 p_2155->g_411 p_2155->g_231 p_2155->g_489 p_2155->g_1591 p_2155->g_1170 p_2155->g_182 p_2155->g_196 p_2155->g_67
 * writes: p_2155->g_29 p_2155->g_104 p_2155->g_3 p_2155->g_362 p_2155->g_315 p_2155->g_58 p_2155->g_196 p_2155->g_1447 p_2155->g_366 p_2155->g_497 p_2155->g_644 p_2155->g_313 p_2155->g_299 p_2155->g_102 p_2155->g_292 p_2155->g_6 p_2155->g_1268 p_2155->g_492 p_2155->g_182 p_2155->g_1591 p_2155->g_1170 p_2155->g_1466 p_2155->g_475 p_2155->g_1646
 */
int16_t  func_17(uint32_t  p_18, uint32_t  p_19, struct S0 * p_2155)
{ /* block id: 597 */
    uint16_t *l_1422 = &p_2155->g_292;
    uint16_t *l_1423 = &p_2155->g_6;
    int32_t l_1438 = 0x151EA2BEL;
    int32_t l_1439 = 0x6EEA2D7AL;
    uint8_t l_1460 = 1UL;
    int32_t **l_1465 = &p_2155->g_182;
    int32_t l_1555[1][9][9] = {{{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL},{0x1586A4EBL,(-1L),0x4C39D039L,0x3AB4E737L,1L,0x3AB4E737L,0x4C39D039L,(-1L),0x1586A4EBL}}};
    int64_t *l_1629[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t **l_1628 = &l_1629[3];
    int64_t *l_1632 = &p_2155->g_1630;
    int64_t **l_1631 = &l_1632;
    int64_t *l_1634 = &p_2155->g_1630;
    int64_t **l_1633 = &l_1634;
    uint32_t l_1635 = 0xA933A9BAL;
    uint32_t *l_1641 = (void*)0;
    uint32_t *l_1642 = (void*)0;
    uint32_t *l_1643[8] = {&l_1635,&p_2155->g_497[1][1][6],&l_1635,&l_1635,&p_2155->g_497[1][1][6],&l_1635,&l_1635,&p_2155->g_497[1][1][6]};
    uint8_t l_1644 = 0x18L;
    int32_t *l_1645[4] = {&p_2155->g_104,&p_2155->g_104,&p_2155->g_104,&p_2155->g_104};
    int i, j, k;
    for (p_2155->g_29 = 0; (p_2155->g_29 <= 0); p_2155->g_29 += 1)
    { /* block id: 600 */
        uint16_t *l_1420 = &p_2155->g_292;
        uint16_t **l_1421[2];
        int32_t l_1433[9][3][4] = {{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}},{{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L},{0x2CC5E1D2L,1L,4L,0L}}};
        int32_t l_1434 = 0x6129AB86L;
        uint8_t *l_1435 = &p_2155->g_362[1][3][2];
        uint32_t **l_1446 = (void*)0;
        int64_t l_1464 = 0L;
        int32_t l_1498 = 0x2DBAD839L;
        int64_t l_1561 = 2L;
        uint16_t l_1590 = 1UL;
        int64_t *l_1617 = &p_2155->g_163;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1421[i] = &l_1420;
        (*p_2155->g_1045) = 0x274E4EFCL;
        (*p_2155->g_1424) &= (safe_mul_func_uint8_t_u_u(p_18, (safe_add_func_uint8_t_u_u(p_18, ((!((l_1422 = l_1420) != l_1423)) < (&p_2155->g_1268 != (void*)0))))));
        l_1433[6][1][3] = ((safe_div_func_int32_t_s_s((((safe_add_func_uint32_t_u_u((((!p_19) && ((p_19 < (safe_rshift_func_uint16_t_u_s(((l_1433[6][1][3] && (((((*l_1435) = l_1434) , (((p_19 < ((safe_lshift_func_int16_t_s_u((-1L), 11)) & ((p_2155->g_58[0][0] = (((**p_2155->g_1291) = (((*p_2155->g_355) ^ 0x2336L) , p_19)) > p_19)) > l_1434))) ^ p_19) == l_1438)) , l_1439) < l_1438)) != 0x5C89CCF5AF201712L), l_1438))) | (-3L))) >= p_19), l_1433[6][1][3])) | l_1439) ^ 4294967290UL), l_1433[5][2][1])) > l_1434);
        l_1438 &= 9L;
        for (p_2155->g_196 = 0; (p_2155->g_196 <= 0); p_2155->g_196 += 1)
        { /* block id: 611 */
            uint32_t *l_1461 = &p_2155->g_497[0][1][8];
            uint32_t l_1462 = 4294967295UL;
            uint32_t *l_1463 = &p_2155->g_644;
            int32_t *l_1467 = &p_2155->g_104;
            uint64_t l_1501 = 0x912D323FB608ACC6L;
            int32_t l_1529 = 1L;
            int32_t l_1556 = (-10L);
            int32_t l_1557[6];
            int64_t l_1618 = 0x644B85EB0918E8ABL;
            int i;
            for (i = 0; i < 6; i++)
                l_1557[i] = (-7L);
            (*l_1467) = ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s(((p_2155->g_366 = (+((p_2155->g_1447 = l_1446) == (void*)0))) < ((safe_sub_func_int8_t_s_s(0x3FL, ((safe_div_func_uint16_t_u_u((l_1433[6][1][3] = (p_19 || ((safe_mod_func_uint32_t_u_u(p_18, ((*l_1463) |= ((((((*l_1461) = (safe_sub_func_int64_t_s_s((-4L), (p_2155->g_104 <= ((safe_sub_func_uint64_t_u_u(l_1433[3][0][3], (safe_mul_func_int16_t_s_s((-1L), 0x6630L)))) , l_1460))))) > p_2155->g_313) , l_1462) == p_18) ^ 0L)))) < p_2155->g_1084[1]))), (-1L))) != (*p_2155->g_355)))) || l_1433[3][0][3])), p_2155->g_109)) , p_19) == l_1464) , l_1465) != &p_2155->g_182), 0x731EL)) , 0x931FL), 6)) > l_1434);
            for (p_2155->g_313 = 0; (p_2155->g_313 <= 0); p_2155->g_313 += 1)
            { /* block id: 620 */
                uint8_t l_1478 = 0x06L;
                int32_t l_1481 = (-1L);
                int32_t *l_1522 = &l_1439;
                int32_t l_1523 = 0x377F0928L;
                for (l_1460 = 0; (l_1460 <= 1); l_1460 += 1)
                { /* block id: 623 */
                    int64_t *l_1479 = (void*)0;
                    int64_t *l_1480 = &p_2155->g_299[0];
                    int8_t *l_1494[7] = {&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102};
                    uint32_t l_1495 = 0xC0EE21BEL;
                    uint8_t *l_1496 = (void*)0;
                    uint8_t *l_1497 = (void*)0;
                    int64_t *l_1499 = &p_2155->g_58[0][2];
                    int8_t l_1500 = (-8L);
                    int32_t l_1508 = 0x0D0B2226L;
                    int32_t **l_1519 = (void*)0;
                    int32_t **l_1520 = &p_2155->g_182;
                    int32_t **l_1521[4] = {&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182};
                    int i, j, k;
                    (*p_2155->g_1424) = (p_2155->g_497[(l_1460 + 1)][l_1460][p_2155->g_313] >= ((((((((*l_1420) = (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1433[6][1][3] = (p_2155->g_362[l_1460][(p_2155->g_313 + 3)][(l_1460 + 1)] > p_19)), 0x36L)), (safe_mul_func_uint8_t_u_u((++p_2155->g_366), (((l_1478 != (l_1481 = ((*l_1480) = p_2155->g_362[l_1460][(p_2155->g_313 + 3)][(l_1460 + 1)]))) & (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((safe_add_func_int64_t_s_s(((*l_1499) = (safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u((l_1464 & (l_1498 = ((*l_1467) = ((!((p_2155->g_102 |= (safe_mul_func_uint16_t_u_u(3UL, (*l_1467)))) && l_1495)) != p_2155->g_497[(l_1460 + 1)][l_1460][p_2155->g_313])))), 4))))), p_18)) , p_18) & 0xBE930B4CL) , (*l_1467)) , l_1500), l_1501)), p_19))) , p_2155->g_315))))), l_1478))) <= p_18) >= 1L) & 0x5B24FDCE147D35F6L) | 0x31B0D275L) <= 0xA7FBF3CFL) ^ 0xE9L));
                    l_1523 &= ((p_19 != ((((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_1467) = ((1L >= p_18) , l_1508)) || ((l_1498 = (l_1481 = ((((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((((l_1478 > ((*l_1423) = ((*l_1420) = (((p_19 != (safe_rshift_func_uint8_t_u_s(l_1500, 0))) != (safe_add_func_uint8_t_u_u((((*l_1467) = l_1508) == (safe_mod_func_int64_t_s_s(((((((l_1522 = (void*)0) != (void*)0) , 0UL) || p_19) ^ l_1481) != p_19), p_18))), p_19))) > l_1434)))) > p_18) , (-1L)) == l_1434) == 0x7882EAE1CCEA6621L) != 0x05A8L), p_18)), l_1478)) || p_19) != l_1481) | p_18))) && p_18)), 2)), 65535UL)), l_1478)) == p_19) | 1L) >= 0x4D60L)) ^ 2L);
                }
            }
            for (p_2155->g_1268 = 0; (p_2155->g_1268 <= 0); p_2155->g_1268 += 1)
            { /* block id: 646 */
                int32_t l_1528 = (-1L);
                uint32_t **l_1547 = &p_2155->g_67[0][3][6];
                int32_t *l_1549 = &l_1529;
                int32_t *l_1550 = &l_1438;
                int32_t *l_1551 = &l_1438;
                int32_t l_1552[3][1][4] = {{{0x54F4545DL,0x2D7FC168L,0x54F4545DL,0x54F4545DL}},{{0x54F4545DL,0x2D7FC168L,0x54F4545DL,0x54F4545DL}},{{0x54F4545DL,0x2D7FC168L,0x54F4545DL,0x54F4545DL}}};
                int32_t *l_1553 = (void*)0;
                int32_t *l_1554[8][10][3] = {{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}},{{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]},{&p_2155->g_138,&l_1438,&l_1552[0][0][3]}}};
                uint8_t l_1558 = 0xDBL;
                int i, j, k;
                for (p_2155->g_492 = 0; (p_2155->g_492 <= 2); p_2155->g_492 += 1)
                { /* block id: 649 */
                    uint32_t l_1530 = 0x47656311L;
                    for (p_19 = 0; (p_19 <= 2); p_19 += 1)
                    { /* block id: 652 */
                        int32_t *l_1524 = &l_1438;
                        int32_t *l_1525 = &l_1498;
                        int32_t *l_1526 = &l_1439;
                        int32_t *l_1527[4] = {&p_2155->g_104,&p_2155->g_104,&p_2155->g_104,&p_2155->g_104};
                        uint32_t ***l_1548 = &l_1446;
                        int i;
                        --l_1530;
                        (*l_1525) = (safe_add_func_int16_t_s_s(((*l_1525) != (+p_19)), (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((*p_2155->g_355), (safe_div_func_uint32_t_u_u((*l_1467), ((*l_1461) &= (safe_mod_func_int8_t_s_s(((void*)0 != (*p_2155->g_410)), (safe_rshift_func_uint8_t_u_u(((4294967294UL || l_1434) || (((safe_sub_func_uint32_t_u_u(p_2155->g_231, p_19)) <= 0x26A56402E6E4115DL) , p_19)), 6))))))))), l_1528))));
                        (*l_1548) = l_1547;
                    }
                }
                for (l_1462 = 0; (l_1462 <= 0); l_1462 += 1)
                { /* block id: 661 */
                    return l_1433[5][1][3];
                }
                ++l_1558;
                for (l_1528 = 2; (l_1528 >= 0); l_1528 -= 1)
                { /* block id: 667 */
                    uint16_t l_1562 = 65535UL;
                    uint32_t l_1596 = 0xBAFE003CL;
                    int32_t l_1597[3];
                    int8_t *l_1600 = &p_2155->g_102;
                    int8_t *l_1601 = &p_2155->g_1602[0][3];
                    int8_t *l_1603[3][4] = {{&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604},{&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604},{&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604,&p_2155->g_1604}};
                    uint64_t *l_1610[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int16_t *l_1615 = (void*)0;
                    int64_t **l_1616[4] = {&p_2155->g_84,&p_2155->g_84,&p_2155->g_84,&p_2155->g_84};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1597[i] = 8L;
                    for (l_1556 = 0; (l_1556 <= 2); l_1556 += 1)
                    { /* block id: 670 */
                        uint8_t l_1565[6];
                        int32_t l_1578 = 4L;
                        int8_t *l_1589 = &p_2155->g_102;
                        uint32_t *l_1592 = (void*)0;
                        uint32_t *l_1593 = &p_2155->g_1591;
                        int16_t *l_1594 = (void*)0;
                        int16_t *l_1595 = &p_2155->g_1170;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1565[i] = 0xC1L;
                        (*l_1465) = &l_1557[2];
                        --l_1562;
                        (*l_1465) = &l_1498;
                        l_1529 ^= (l_1597[2] |= (((safe_lshift_func_uint8_t_u_s(1UL, (safe_sub_func_uint16_t_u_u(p_19, (safe_rshift_func_uint16_t_u_u(p_18, 14)))))) <= (((l_1578 &= p_2155->g_489) , &p_2155->g_527[0]) == &p_2155->g_182)) | ((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((*l_1595) ^= ((safe_add_func_uint32_t_u_u(p_18, (((*l_1593) = ((((safe_sub_func_uint16_t_u_u((p_2155->g_3 ^ ((safe_mod_func_uint64_t_u_u((((((((*l_1589) = 3L) ^ 6L) >= p_19) ^ (-10L)) , l_1590) , 18446744073709551615UL), (-1L))) < p_2155->g_1591)), 0x2124L)) , p_2155->g_1591) | l_1562) , 0x5CA45320L)) , p_18))) <= p_19)), (*p_2155->g_355))) , l_1596), (**l_1465))) <= (*l_1467))));
                    }
                    (*l_1465) = &l_1529;
                    if (((l_1617 = (p_18 , &p_2155->g_58[0][0])) == &p_2155->g_299[0]))
                    { /* block id: 689 */
                        return l_1618;
                    }
                    else
                    { /* block id: 691 */
                        (*l_1550) = l_1433[6][1][1];
                        (*l_1467) = 1L;
                        (*l_1551) |= l_1464;
                    }
                }
            }
            for (p_2155->g_313 = 0; (p_2155->g_313 <= 2); p_2155->g_313 += 1)
            { /* block id: 700 */
                int16_t l_1621 = (-7L);
                int32_t *l_1622 = &l_1433[6][1][3];
                int32_t l_1623 = 0x09FCD439L;
                for (l_1501 = 0; (l_1501 <= 2); l_1501 += 1)
                { /* block id: 703 */
                    int32_t *l_1620 = &p_2155->g_231;
                    int32_t **l_1619 = &l_1620;
                    int i, j, k;
                    l_1621 = (l_1619 != (void*)0);
                    p_2155->g_1466[(p_2155->g_196 + 4)] = p_2155->g_67[p_2155->g_196][(p_2155->g_196 + 1)][l_1501];
                    if ((*p_2155->g_1045))
                        continue;
                    if (p_19)
                    { /* block id: 707 */
                        int i;
                        p_2155->g_1466[(p_2155->g_29 + 2)] = l_1622;
                        return p_18;
                    }
                    else
                    { /* block id: 710 */
                        return l_1623;
                    }
                }
                for (p_2155->g_6 = 0; (p_2155->g_6 <= 2); p_2155->g_6 += 1)
                { /* block id: 716 */
                    uint32_t l_1627 = 3UL;
                    for (p_2155->g_475 = 0; (p_2155->g_475 <= 2); p_2155->g_475 += 1)
                    { /* block id: 719 */
                        uint16_t l_1624 = 1UL;
                        l_1624--;
                        return l_1627;
                    }
                }
            }
        }
    }
    p_2155->g_1646 = ((0L || (!((((*l_1633) = ((*l_1631) = ((*l_1628) = (void*)0))) == (void*)0) , l_1635))) > (((l_1555[0][5][6] = ((safe_unary_minus_func_int8_t_s((6L != (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(p_18, (p_19 , (~4L)))), (p_19 && (*p_2155->g_355))))))) && 1UL)) || 0xDB6FA924L) >= l_1644));
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_29 p_2155->g_39 p_2155->g_3 p_2155->g_67 p_2155->g_68 p_2155->g_84 p_2155->g_5 p_2155->g_104 p_2155->g_109 p_2155->g_111 p_2155->g_102 p_2155->g_114 p_2155->g_138 p_2155->g_163 p_2155->g_196 p_2155->g_204 p_2155->g_6 p_2155->g_205 p_2155->g_182 p_2155->g_292 p_2155->g_302 p_2155->g_312 p_2155->g_315 p_2155->g_231 p_2155->g_300 p_2155->g_58 p_2155->g_354 p_2155->g_362 p_2155->g_299 p_2155->g_378 p_2155->g_313 p_2155->g_355 p_2155->g_410 p_2155->g_202 p_2155->g_301 p_2155->g_342 p_2155->g_366 p_2155->g_475 p_2155->g_489 p_2155->g_497 p_2155->g_494 p_2155->g_546 p_2155->g_577 p_2155->g_496 p_2155->g_620 p_2155->g_578 p_2155->g_791 p_2155->g_495 p_2155->g_797 p_2155->g_644 p_2155->g_886 p_2155->g_794 p_2155->g_905 p_2155->g_492 p_2155->g_795 p_2155->g_793 p_2155->g_988 p_2155->g_798 p_2155->g_1039 p_2155->g_1042 p_2155->g_1045 p_2155->g_796 p_2155->g_1084 p_2155->g_1118 p_2155->g_1175 p_2155->g_1177 p_2155->g_1170 p_2155->g_1224 p_2155->g_1268 p_2155->g_1283 p_2155->g_1291 p_2155->g_1302 p_2155->g_1292
 * writes: p_2155->g_29 p_2155->g_39 p_2155->g_58 p_2155->g_102 p_2155->g_104 p_2155->g_109 p_2155->g_111 p_2155->g_67 p_2155->g_138 p_2155->g_114 p_2155->g_163 p_2155->g_182 p_2155->g_196 p_2155->g_202 p_2155->g_205 p_2155->g_231 p_2155->g_68 p_2155->g_292 p_2155->g_302 p_2155->g_315 p_2155->g_342 p_2155->g_362 p_2155->g_366 p_2155->g_299 p_2155->g_475 p_2155->g_489 p_2155->g_497 p_2155->g_546 p_2155->g_313 p_2155->g_495 p_2155->g_644 p_2155->g_492 p_2155->g_578 p_2155->g_795 p_2155->g_493 p_2155->g_1170 p_2155->g_1224 p_2155->g_1268 p_2155->g_378 p_2155->g_1302
 */
uint16_t  func_24(int8_t  p_25, struct S0 * p_2155)
{ /* block id: 6 */
    int32_t l_311[3];
    uint32_t *l_719 = &p_2155->g_68;
    int8_t l_1064 = 0x00L;
    int16_t **l_1091 = (void*)0;
    uint64_t *l_1121[1];
    uint8_t *l_1143 = &p_2155->g_362[0][2][2];
    int8_t l_1157 = 0x67L;
    uint16_t l_1172 = 0xAEF2L;
    int32_t l_1225 = 0x541B5CD1L;
    int32_t *l_1236 = &l_311[1];
    uint8_t l_1260[8] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL};
    int8_t l_1304 = 3L;
    uint32_t l_1305 = 0UL;
    uint32_t l_1350 = 1UL;
    uint32_t l_1391 = 4294967290UL;
    int i;
    for (i = 0; i < 3; i++)
        l_311[i] = 0x46653E88L;
    for (i = 0; i < 1; i++)
        l_1121[i] = &p_2155->g_475;
    for (p_25 = 23; (p_25 < 18); p_25 = safe_sub_func_int16_t_s_s(p_25, 1))
    { /* block id: 9 */
        int64_t l_28[7][8][4] = {{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}},{{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L},{(-10L),8L,(-1L),0x0A08677A3B2FE496L}}};
        uint32_t *l_76 = &p_2155->g_68;
        int32_t l_1063 = (-10L);
        int32_t l_1065 = 0x622D7C30L;
        int32_t l_1163[1][3];
        int32_t **l_1190[4][4] = {{(void*)0,(void*)0,&p_2155->g_205,&p_2155->g_182},{(void*)0,(void*)0,&p_2155->g_205,&p_2155->g_182},{(void*)0,(void*)0,&p_2155->g_205,&p_2155->g_182},{(void*)0,(void*)0,&p_2155->g_205,&p_2155->g_182}};
        int16_t l_1267 = 0x3031L;
        int8_t l_1303[6][10] = {{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL},{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL},{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL},{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL},{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL},{0x62L,0x62L,0L,(-1L),3L,0x5BL,(-1L),0x76L,(-1L),0x5BL}};
        uint64_t **l_1396 = &l_1121[0];
        int8_t l_1402 = 0L;
        int32_t *l_1409 = &l_311[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1163[i][j] = 0x5D694C60L;
        }
        for (p_2155->g_29 = 0; (p_2155->g_29 <= 3); p_2155->g_29 += 1)
        { /* block id: 12 */
            uint32_t *l_38 = &p_2155->g_39[3];
            int64_t *l_57 = &p_2155->g_58[0][0];
            uint64_t l_77 = 0xCE55470A06C62CF0L;
            uint32_t *l_906 = &p_2155->g_644;
            uint64_t *l_1061[6][9][4] = {{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}},{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}},{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}},{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}},{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}},{{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0},{(void*)0,&p_2155->g_475,(void*)0,(void*)0}}};
            uint64_t **l_1060 = &l_1061[4][4][2];
            int32_t l_1066 = 0x7DD31DCFL;
            int16_t l_1086 = 0x6E9BL;
            int8_t l_1088[1][2];
            int32_t l_1158 = 0x272523DDL;
            int32_t l_1159 = (-1L);
            int32_t l_1160 = 0x3B06A769L;
            int32_t l_1161 = 0x0AD60DD3L;
            int32_t l_1164 = 1L;
            int32_t l_1166 = 0x704BBACAL;
            int32_t l_1167 = 0x5BF3FFA6L;
            int32_t l_1168 = (-1L);
            int32_t l_1169[10] = {5L,5L,5L,5L,5L,5L,5L,5L,5L,5L};
            int32_t *l_1207 = &l_1160;
            int32_t *l_1263 = &p_2155->g_29;
            int8_t l_1264[8] = {(-8L),0x78L,(-8L),(-8L),0x78L,(-8L),(-8L),0x78L};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1088[i][j] = 1L;
            }
            if ((safe_div_func_uint16_t_u_u((func_32(((*l_38) ^= 0x59D2D10AL), ((*l_906) = ((safe_lshift_func_int16_t_s_u(0x0AF6L, 15)) & func_42(((l_719 = func_45(func_49(((safe_mul_func_int8_t_s_s(0x36L, p_25)) , ((*l_57) = (p_2155->g_3 < p_25))), func_59(func_62(p_2155->g_67[0][3][6], ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(2L, ((safe_div_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(p_25)), 3L)) && 0x6755D88D3DE1848AL))), p_25)) , l_76), l_77, p_25, p_2155), p_2155->g_29, p_2155), l_311[1], l_28[6][3][2], p_2155->g_312, p_2155), &p_2155->g_29, l_311[1], p_2155)) == l_38), l_311[1], p_2155))), p_2155->g_3, p_25, p_2155->g_492, p_2155) , l_28[0][1][1]), p_25)))
            { /* block id: 414 */
                int32_t *l_1062[1][1];
                uint64_t *l_1073 = &p_2155->g_475;
                uint64_t *l_1085 = &l_77;
                int8_t *l_1087 = &p_2155->g_102;
                int16_t **l_1089[2][9][2] = {{{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355}},{{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1062[i][j] = &l_311[1];
                }
                l_311[0] = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((0x73C3L > ((((*l_906) &= (safe_sub_func_int8_t_s_s(p_25, p_25))) == (l_1066 |= (l_1065 = (safe_mod_func_int32_t_s_s((l_1063 = (safe_add_func_uint8_t_u_u(p_25, (safe_add_func_int16_t_s_s(((p_25 , ((safe_rshift_func_uint8_t_u_u(4UL, 0)) , l_1060)) == p_2155->g_988), ((l_77 , l_77) | 0x2050L)))))), l_1064))))) , 1UL)), p_25)) <= 0xC64BF9BB708CF0A3L), 0x2608B3FAL));
                l_311[2] = (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(((*l_57) ^= 0x740D8FA1E6799A49L), (safe_div_func_uint8_t_u_u((&p_2155->g_475 != ((*l_1060) = l_1073)), (+((safe_mul_func_int16_t_s_s(1L, (((safe_rshift_func_int8_t_s_u(((*l_1087) &= ((safe_mod_func_int64_t_s_s(p_2155->g_362[1][1][1], (((safe_sub_func_int8_t_s_s((-6L), ((safe_add_func_int64_t_s_s((((+((*l_1085) |= (p_2155->g_1084[0] <= ((void*)0 == l_719)))) ^ p_2155->g_494) || 8UL), 0x218FC355F5237A90L)) > l_1066))) && l_1086) ^ p_25))) || 4294967295UL)), p_2155->g_1084[1])) || l_1063) && l_1063))) , p_25)))))), p_25));
                if (l_1088[0][1])
                { /* block id: 425 */
                    uint16_t l_1102[4][8] = {{65535UL,0x5FB9L,0x6B6AL,0xE459L,0xC3DBL,65535UL,0xE459L,0xA8ABL},{65535UL,0x5FB9L,0x6B6AL,0xE459L,0xC3DBL,65535UL,0xE459L,0xA8ABL},{65535UL,0x5FB9L,0x6B6AL,0xE459L,0xC3DBL,65535UL,0xE459L,0xA8ABL},{65535UL,0x5FB9L,0x6B6AL,0xE459L,0xC3DBL,65535UL,0xE459L,0xA8ABL}};
                    int32_t l_1116 = 0x21C247BEL;
                    int i, j;
                    for (p_2155->g_202 = 0; (p_2155->g_202 <= 1); p_2155->g_202 += 1)
                    { /* block id: 428 */
                        int16_t **l_1090 = (void*)0;
                        int32_t l_1109 = 0x330F6997L;
                        int32_t l_1117 = 0x79CF5E9FL;
                        int i, j, k;
                        if (l_28[(p_2155->g_29 + 3)][(p_2155->g_202 + 6)][p_2155->g_29])
                            break;
                        l_1063 ^= ((((l_28[p_2155->g_202][(p_2155->g_29 + 3)][p_2155->g_29] | l_28[(p_2155->g_202 + 2)][(p_2155->g_29 + 1)][(p_2155->g_202 + 2)]) ^ p_2155->g_362[p_2155->g_202][p_2155->g_29][(p_2155->g_202 + 1)]) , l_1089[0][8][0]) == l_1090);
                        l_1117 = (l_1091 != ((l_1116 = (safe_add_func_int8_t_s_s((-1L), ((!(safe_add_func_uint32_t_u_u(((!((safe_add_func_uint64_t_u_u(((*l_1085) &= 18446744073709551615UL), (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_2155->g_104 >= l_1102[1][6]), (l_1065 = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((~(safe_add_func_int16_t_s_s((l_1109 = 0x0ED1L), ((safe_lshift_func_int16_t_s_u(p_25, (65534UL < (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(l_311[1], p_25)) > 9L), p_25))))) || l_1102[3][1])))), p_2155->g_163)), 0))))), l_1063)))) , 0xD9C96FD96296259CL)) , p_2155->g_299[0]), p_25))) <= p_25)))) , (void*)0));
                    }
                    (*p_2155->g_1118) = (*p_2155->g_204);
                }
                else
                { /* block id: 438 */
                    return p_25;
                }
            }
            else
            { /* block id: 441 */
                uint32_t l_1134 = 0xD2EE2C06L;
                int32_t l_1136 = 1L;
                uint8_t *l_1144 = &p_2155->g_366;
                int32_t l_1154 = 0x5FA4AF21L;
                int32_t l_1165[2];
                int32_t l_1171 = 0x53A9BB6DL;
                uint8_t l_1235 = 1UL;
                int32_t l_1250 = 0x70CF93BAL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1165[i] = 1L;
                for (p_2155->g_202 = 0; (p_2155->g_202 <= 2); p_2155->g_202 += 1)
                { /* block id: 444 */
                    int8_t *l_1135 = &l_1088[0][0];
                    int32_t *l_1155 = &l_311[p_2155->g_202];
                    int32_t *l_1156[2][7][3] = {{{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]}},{{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]},{&l_311[1],&l_311[1],&l_311[1]}}};
                    int32_t l_1162[10] = {0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L,0x5EADE2B8L};
                    int i, j, k;
                    l_1136 |= ((((*p_2155->g_312) ^= ((l_28[(p_2155->g_202 + 2)][(p_2155->g_202 + 3)][(p_2155->g_202 + 1)] | ((*l_1135) = ((safe_rshift_func_uint16_t_u_u(l_311[p_2155->g_202], ((void*)0 == l_1121[0]))) && (safe_rshift_func_int16_t_s_u((l_311[p_2155->g_202] == (((((*l_76) = (safe_mod_func_uint8_t_u_u(((((*l_906) = ((safe_rshift_func_int8_t_s_s((+((safe_rshift_func_uint16_t_u_u(((((l_1064 , ((safe_mod_func_int32_t_s_s((p_2155->g_988 != (void*)0), (safe_sub_func_uint32_t_u_u(3UL, p_25)))) == 0x31CBL)) || (-8L)) == 1L) & l_1134), l_311[p_2155->g_202])) || l_1064)), 6)) != 5L)) && p_25) , 0UL), l_28[4][6][3]))) , 2L) ^ (-1L)) , 255UL)), 8))))) | (-1L))) , p_25) & p_25);
                    if (l_1136)
                        continue;
                    for (p_2155->g_109 = 1; (p_2155->g_109 >= 0); p_2155->g_109 -= 1)
                    { /* block id: 453 */
                        int32_t **l_1147 = &p_2155->g_182;
                        int64_t *l_1148 = (void*)0;
                        int64_t *l_1149 = &p_2155->g_299[0];
                        int32_t *l_1153[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int i, j, k;
                        (*l_1147) = func_59((p_2155->g_620 == p_2155->g_620), (safe_lshift_func_uint8_t_u_u(((*l_1143) ^= (((l_311[2] & ((*p_2155->g_355) >= ((l_1144 = l_1143) == &p_2155->g_362[1][0][0]))) & (l_1066 ^ 0x4C79L)) <= (((--(*l_906)) & 1UL) , 0x5367D5A2F3D9E542L))), p_25)), p_2155);
                        l_1154 = ((((p_2155->g_644 < (((*l_1149) = (p_2155->g_58[p_2155->g_109][p_2155->g_202] = (-6L))) , 1L)) , (((safe_mul_func_uint8_t_u_u(((void*)0 == (*l_1060)), (~(p_25 <= (!(((safe_unary_minus_func_int64_t_s(((*l_57) = p_25))) & ((((l_1136 |= ((18446744073709551609UL & l_77) > 6L)) & l_1088[0][1]) > p_2155->g_302) , p_25)) & p_25)))))) <= 0x0EC7CE45L) | p_25)) , p_25) == 0x0CE6L);
                    }
                    ++l_1172;
                }
                (*p_2155->g_1175) = (~(!0L));
                for (p_2155->g_104 = 3; (p_2155->g_104 >= 0); p_2155->g_104 -= 1)
                { /* block id: 469 */
                    int32_t *l_1176 = &l_1066;
                    int32_t l_1182 = (-1L);
                    int32_t l_1184[5][9] = {{0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L,0x2D943DB5L,0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L},{0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L,0x2D943DB5L,0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L},{0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L,0x2D943DB5L,0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L},{0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L,0x2D943DB5L,0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L},{0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L,0x2D943DB5L,0x2D943DB5L,0x02149C97L,0x19C20500L,0x02149C97L}};
                    int i, j;
                    (*p_2155->g_1177) = l_1176;
                    for (p_2155->g_114 = 0; (p_2155->g_114 <= 3); p_2155->g_114 += 1)
                    { /* block id: 473 */
                        int32_t *l_1178 = &l_1136;
                        int32_t *l_1179 = &l_1164;
                        int32_t *l_1180 = &l_1161;
                        int32_t *l_1181 = (void*)0;
                        int32_t *l_1183[10][10][2] = {{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}},{{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065},{&p_2155->g_138,&l_1065}}};
                        uint32_t l_1185[3][1];
                        uint32_t **l_1191 = &l_719;
                        uint16_t *l_1198 = &p_2155->g_202;
                        uint16_t *l_1203 = &l_1172;
                        int16_t *l_1204 = &p_2155->g_109;
                        int16_t *l_1205 = &p_2155->g_1170;
                        int16_t *l_1206 = &l_1086;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1185[i][j] = 8UL;
                        }
                        l_1185[2][0]++;
                        l_1178 = func_59(l_28[(p_2155->g_29 + 1)][(p_2155->g_29 + 3)][p_2155->g_29], (p_25 , ((safe_sub_func_uint8_t_u_u(((void*)0 == l_1190[3][0]), ((((*l_1191) = &p_2155->g_313) == ((safe_rshift_func_int8_t_s_u((p_25 | (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((*l_1198) = l_1169[9]), ((*l_1206) = (safe_sub_func_int16_t_s_s(l_311[1], (((safe_mul_func_int16_t_s_s(((*l_1205) ^= ((*l_1204) = (((*l_1203) = 0UL) , (*p_2155->g_355)))), 1UL)) , 0x8E8B047AL) | l_1136)))))), l_1136))), p_2155->g_5)) , (void*)0)) || p_25))) > p_25)), p_2155);
                        l_1207 = &l_311[1];
                    }
                }
                for (l_1168 = 0; (l_1168 <= 3); l_1168 += 1)
                { /* block id: 487 */
                    uint32_t **l_1210 = (void*)0;
                    int8_t *l_1211 = &l_1157;
                    int8_t *l_1220[8] = {&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102};
                    int32_t l_1223 = 0x77DCE817L;
                    int32_t l_1226 = (-6L);
                    uint16_t l_1241 = 1UL;
                    int32_t l_1256 = 1L;
                    int32_t l_1257 = 2L;
                    int32_t l_1258 = 0L;
                    int i;
                    for (l_1167 = 0; (l_1167 <= 3); l_1167 += 1)
                    { /* block id: 490 */
                        int i, j, k;
                        (*l_1207) = l_28[(l_1168 + 3)][(p_2155->g_29 + 2)][l_1167];
                        if ((*l_1207))
                            continue;
                    }
                    l_311[1] = (safe_div_func_int8_t_s_s((2L <= ((*l_57) |= ((((*l_1211) = (l_1210 == &l_719)) <= (safe_div_func_int16_t_s_s((l_1225 &= ((~(l_1165[1] = ((safe_add_func_int8_t_s_s((p_2155->g_1224 = (p_25 && (safe_add_func_int8_t_s_s(l_1064, (safe_rshift_func_int8_t_s_s((p_25 , (p_2155->g_102 = ((*p_2155->g_1045) | l_1165[0]))), (((~(safe_lshift_func_uint16_t_u_s((((l_1223 = (p_25 , p_25)) > (-10L)) && (*l_1207)), 15))) <= 0x5BL) < l_1165[0]))))))), p_2155->g_299[0])) != p_25))) <= p_25)), l_1226))) < p_25))), 4L));
                    if (((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((&l_76 != &p_2155->g_312), (*l_1207))), (p_25 <= (1UL < (p_2155->g_1170 < ((((safe_sub_func_uint64_t_u_u(l_1226, (l_1226 == ((((*l_57) ^= (safe_mod_func_uint32_t_u_u(l_1225, 0x11E0134BL))) , p_25) >= (*p_2155->g_1175))))) < 0x06B284D0L) ^ l_1235) >= 0x14L)))))) || l_1226))
                    { /* block id: 503 */
                        uint32_t l_1248 = 0xA992A242L;
                        uint64_t *l_1249 = &p_2155->g_342;
                        int32_t *l_1251[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1251[i] = (void*)0;
                        l_1251[2] = func_49(l_1172, (l_1236 = &l_1136), (safe_lshift_func_int8_t_s_u(((((*l_1249) |= ((p_2155->g_644 = (((((p_25 , (safe_sub_func_uint16_t_u_u(((0x4EL < p_2155->g_793) & (l_1241 <= p_25)), 6L))) <= ((l_1248 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((p_2155->g_138 != 255UL), 7)) != 0x1BD7E52FL), (*l_1207))) & p_25), (*l_1207)))) != l_311[1])) <= 4294967295UL) != p_2155->g_299[0]) ^ p_25)) != p_25)) && p_2155->g_138) > l_1250), p_2155->g_299[0])), l_1136, &p_2155->g_39[3], p_2155);
                        if (l_1165[0])
                            break;
                        return l_1241;
                    }
                    else
                    { /* block id: 511 */
                        int64_t l_1252 = 1L;
                        int16_t l_1253 = 0x78FCL;
                        int32_t l_1254 = 0x215B8D00L;
                        int32_t l_1255 = 6L;
                        int32_t l_1259 = 0x65501D07L;
                        l_1260[1]++;
                    }
                }
            }
            for (p_2155->g_1224 = 0; (p_2155->g_1224 <= 3); p_2155->g_1224 += 1)
            { /* block id: 518 */
                int8_t l_1265 = 0x60L;
                int32_t l_1266[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1266[i] = 0x63DEF724L;
                l_1207 = &l_1166;
                p_2155->g_1268++;
            }
            return p_25;
        }
        for (p_2155->g_196 = 0; (p_2155->g_196 <= 0); p_2155->g_196 += 1)
        { /* block id: 527 */
            uint32_t l_1295 = 4294967288UL;
            int32_t l_1299 = 0x6703AE63L;
            int32_t l_1301[9][8] = {{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL},{0L,(-8L),(-1L),0x0D261435L,(-1L),(-8L),0L,0x20BF18BDL}};
            int32_t *l_1342 = &p_2155->g_111;
            uint8_t l_1408 = 0x41L;
            int i, j;
            for (p_2155->g_114 = 0; (p_2155->g_114 <= 0); p_2155->g_114 += 1)
            { /* block id: 530 */
                int32_t *l_1271 = (void*)0;
                int32_t l_1296 = (-1L);
                int32_t l_1297 = (-5L);
                int32_t l_1298 = 3L;
                int32_t l_1300[8][8][4] = {{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}},{{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL},{1L,0L,(-3L),0x75C1AAFFL}}};
                uint64_t **l_1311 = (void*)0;
                int32_t l_1319[7];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1319[i] = 1L;
                for (l_1172 = 0; (l_1172 <= 0); l_1172 += 1)
                { /* block id: 533 */
                    uint16_t *l_1286 = &p_2155->g_292;
                    int i, j;
                    l_1236 = func_49(p_2155->g_797[(l_1172 + 6)][(l_1172 + 2)], l_1271, (safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u(8UL, (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u(p_2155->g_299[0], p_2155->g_1283[8])) , (((((safe_rshift_func_uint16_t_u_u(((*l_1286)--), 8)) && (0UL >= ((void*)0 != p_2155->g_1291))) <= ((safe_mod_func_int16_t_s_s(((*p_2155->g_182) >= p_2155->g_1084[1]), (*l_1236))) < l_1295)) >= 0x64E2807FC2397F78L) != (*p_2155->g_182))) , 0xA7A09EEE2BD25A7FL), p_25)), (**p_2155->g_577))))) != 0L) != (*p_2155->g_578)), 0L)))), p_25, l_1271, p_2155);
                }
                --l_1305;
                for (p_2155->g_378 = 6; (p_2155->g_378 >= 0); p_2155->g_378 -= 1)
                { /* block id: 540 */
                    uint16_t l_1316 = 0UL;
                    uint8_t l_1340 = 0x74L;
                    uint16_t *l_1341 = &l_1316;
                    int i, j;
                    for (p_2155->g_342 = 0; (p_2155->g_342 <= 6); p_2155->g_342 += 1)
                    { /* block id: 543 */
                        int i, j;
                        l_311[p_2155->g_114] = (p_2155->g_797[(p_2155->g_196 + 5)][(p_2155->g_114 + 2)] <= ((safe_unary_minus_func_int32_t_s(((void*)0 == l_1311))) == (safe_add_func_uint32_t_u_u(p_2155->g_644, ((++(*l_1143)) , p_25)))));
                        l_1316 = p_25;
                    }
                    (*p_2155->g_205) = ((safe_add_func_uint8_t_u_u((l_1319[5] = (+p_2155->g_797[p_2155->g_114][(p_2155->g_114 + 6)])), (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0x5CL >= 0xA7L), ((*l_1236) && ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u((+((*l_1341) = (0x33ACFEE7CFD67708L | (safe_mod_func_int64_t_s_s(p_25, ((safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(65526UL, (safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(((p_25 , &p_2155->g_67[0][2][6]) == &l_76), (*p_2155->g_182))), l_1301[3][6])))) >= l_1340) < 255UL), 0x2111L)) | p_25)))))), (*p_2155->g_578))) && 0x4AL) == 0x19L), 15)), 0x50L)) , 0L)))), 12)))) , (**p_2155->g_1177));
                }
            }
            if (p_25)
                continue;
            for (p_2155->g_1302 = 0; (p_2155->g_1302 >= 0); p_2155->g_1302 -= 1)
            { /* block id: 556 */
                uint32_t *l_1343 = &p_2155->g_39[3];
                int32_t *l_1344 = &l_1065;
                int32_t l_1346 = 0x0B3248D1L;
                int32_t l_1347 = (-1L);
                int32_t l_1348 = 0L;
                int32_t l_1349[10];
                uint16_t *l_1381 = (void*)0;
                uint64_t **l_1382[2][3][10] = {{{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]},{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]},{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]}},{{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]},{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]},{(void*)0,(void*)0,&l_1121[0],(void*)0,&l_1121[0],&l_1121[0],(void*)0,(void*)0,(void*)0,&l_1121[0]}}};
                uint64_t ***l_1397 = &l_1382[1][2][6];
                int32_t *l_1405 = &l_1163[0][0];
                int64_t *l_1406 = (void*)0;
                int64_t *l_1407 = &l_28[6][0][2];
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_1349[i] = 1L;
                l_1344 = func_49(p_25, l_1342, p_25, p_25, l_1343, p_2155);
                for (p_2155->g_475 = 0; (p_2155->g_475 <= 0); p_2155->g_475 += 1)
                { /* block id: 560 */
                    int32_t l_1345[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1345[i] = 0x23B7DBDFL;
                    l_1163[p_2155->g_1302][(p_2155->g_475 + 2)] = (p_2155->g_299[0] ^ 0x4653BBB0L);
                    (*p_2155->g_182) ^= p_25;
                    l_1350--;
                    for (p_2155->g_114 = 2; (p_2155->g_114 >= 0); p_2155->g_114 -= 1)
                    { /* block id: 566 */
                        uint32_t l_1374 = 1UL;
                        int64_t *l_1375 = &p_2155->g_58[0][0];
                        int64_t *l_1376[7];
                        int32_t l_1377 = 0x3B25986CL;
                        int16_t *l_1378 = &p_2155->g_1170;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1376[i] = &p_2155->g_163;
                        if ((*p_2155->g_182))
                            break;
                        if ((*l_1344))
                            continue;
                        l_1345[p_2155->g_475] = ((((0UL || (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((((((void*)0 == &p_2155->g_302) & ((**p_2155->g_1291) = ((safe_mul_func_int16_t_s_s((*p_2155->g_355), ((*l_1378) = (safe_div_func_uint8_t_u_u(p_25, (safe_unary_minus_func_uint64_t_u((safe_sub_func_int64_t_s_s((l_1377 = ((*l_1375) ^= (((((*l_1344) || (p_2155->g_299[0] <= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((l_1374 ^= ((safe_sub_func_uint32_t_u_u(p_2155->g_300, ((void*)0 != &p_2155->g_1283[8]))) && p_25)) , p_25), p_25)), (**p_2155->g_577))) >= (*p_2155->g_355)))) != (*l_1344)) | l_1345[0]) < (*l_1344)))), p_25))))))))) < p_2155->g_313))) || p_25) , p_2155->g_299[p_2155->g_196]) , (*l_1236)), (*l_1344))), 0x4BL)), p_2155->g_202))) <= 0L) != p_25) <= (**p_2155->g_577));
                    }
                }
                l_1348 = (safe_add_func_int8_t_s_s(p_25, (p_25 || ((*l_1344) = (((void*)0 != l_1381) | (((*l_1342) &= ((*l_1344) < (l_1382[1][2][6] != ((((((safe_sub_func_int32_t_s_s(p_25, p_25)) != (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((-1L) > p_25), (-9L))) != 0x63L), 0x52B14C5E7F4C6606L)), (**p_2155->g_577)))) <= p_2155->g_202) || 0x69E0B0E11834F7B0L) | l_1391) , (void*)0)))) < (*l_1344)))))));
                l_1409 = ((*p_2155->g_1039) = func_49(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((((((*l_1397) = l_1396) != p_2155->g_988) & ((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((p_25 ^ l_1402) <= (safe_sub_func_int64_t_s_s((p_25 || (p_2155->g_299[p_2155->g_1302] = (*l_1344))), (((*l_1407) = (((l_1405 = &l_1299) != &p_2155->g_111) ^ ((0x58L == p_2155->g_231) != p_2155->g_362[1][0][2]))) , (*l_1344))))) > 0xA0FDC873L) | p_25), l_1408)), 7)) , p_2155->g_315)) && p_2155->g_378), (*l_1236))) < (*p_2155->g_355)), 4)) | p_2155->g_497[0][0][6]), &p_2155->g_111, p_25, (*l_1344), l_76, p_2155));
            }
        }
        return p_25;
    }
    for (p_2155->g_475 = 0; (p_2155->g_475 > 21); ++p_2155->g_475)
    { /* block id: 592 */
        uint16_t l_1412 = 65535UL;
        l_1412 = p_25;
    }
    return (*p_2155->g_578);
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_492 p_2155->g_355 p_2155->g_5 p_2155->g_39 p_2155->g_497 p_2155->g_578 p_2155->g_196 p_2155->g_362 p_2155->g_494 p_2155->g_299 p_2155->g_366 p_2155->g_29 p_2155->g_163 p_2155->g_795 p_2155->g_312 p_2155->g_313 p_2155->g_475 p_2155->g_793 p_2155->g_68 p_2155->g_109 p_2155->g_988 p_2155->g_791 p_2155->g_114 p_2155->g_905 p_2155->g_205 p_2155->g_342 p_2155->g_315 p_2155->g_231 p_2155->g_577 p_2155->g_798 p_2155->g_1039 p_2155->g_1042 p_2155->g_620 p_2155->g_1045 p_2155->g_104 p_2155->g_796
 * writes: p_2155->g_492 p_2155->g_362 p_2155->g_58 p_2155->g_182 p_2155->g_163 p_2155->g_102 p_2155->g_366 p_2155->g_109 p_2155->g_205 p_2155->g_315 p_2155->g_578 p_2155->g_114 p_2155->g_795 p_2155->g_493 p_2155->g_138 p_2155->g_104
 */
uint8_t  func_32(uint32_t  p_33, uint32_t  p_34, int8_t  p_35, uint64_t  p_36, int32_t  p_37, struct S0 * p_2155)
{ /* block id: 333 */
    uint16_t l_909 = 0xDEEEL;
    int32_t l_935 = (-1L);
    int32_t l_944 = 0x38ACCACBL;
    int16_t *l_956[4][5][6] = {{{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5}},{{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5}},{{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5}},{{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5},{&p_2155->g_5,&p_2155->g_5,&p_2155->g_109,&p_2155->g_114,&p_2155->g_109,&p_2155->g_5}}};
    int32_t l_960 = 0x0DED8EB7L;
    int32_t l_962[8];
    int8_t *l_1018 = &p_2155->g_102;
    int32_t *l_1036 = &p_2155->g_231;
    uint16_t *l_1037 = (void*)0;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_962[i] = 0x0EE725EAL;
    for (p_2155->g_492 = 0; (p_2155->g_492 == (-6)); p_2155->g_492 = safe_sub_func_uint64_t_u_u(p_2155->g_492, 3))
    { /* block id: 336 */
        uint8_t l_920 = 251UL;
        uint64_t *l_921 = &p_2155->g_315;
        l_909++;
        if (((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_909, 0x0F203DEBA3D84962L)), (!(*p_2155->g_355)))) == ((safe_lshift_func_int8_t_s_s((p_2155->g_39[3] < ((p_36 > p_37) != ((1UL & (safe_div_func_uint32_t_u_u((((l_920 , &p_2155->g_355) != (void*)0) ^ p_2155->g_497[0][1][8]), p_37))) >= (-3L)))), 3)) && (*p_2155->g_578))))
        { /* block id: 338 */
            uint8_t *l_927 = &p_2155->g_362[1][2][2];
            int64_t *l_934 = &p_2155->g_58[0][0];
            int32_t l_936[3];
            int i;
            for (i = 0; i < 3; i++)
                l_936[i] = 0x17A4865DL;
            l_936[2] = ((l_935 &= (l_921 != ((p_34 , (~(safe_add_func_uint16_t_u_u((l_909 >= (safe_unary_minus_func_int8_t_s((((((((safe_lshift_func_uint8_t_u_u(((*l_927) ^= p_33), 7)) && ((!(((safe_lshift_func_uint8_t_u_s(p_2155->g_494, p_2155->g_299[0])) >= ((((((p_36 , p_2155->g_362[1][0][0]) , (safe_sub_func_uint8_t_u_u(((((*l_934) = (safe_mod_func_int16_t_s_s(0x768BL, 65529UL))) , p_2155->g_366) , l_909), p_2155->g_299[0]))) >= p_36) , (void*)0) != &p_2155->g_67[0][3][1]) == p_2155->g_29)) > p_34)) == 0x3AL)) ^ p_36) != p_2155->g_497[2][0][5]) , l_920) || l_909) | p_36)))), (-8L))))) , l_934))) , p_37);
        }
        else
        { /* block id: 343 */
            int32_t **l_937 = &p_2155->g_182;
            (*l_937) = (void*)0;
        }
        if (l_909)
            break;
    }
    if (l_909)
    { /* block id: 348 */
        int32_t *l_940 = &p_2155->g_111;
        int32_t l_942 = 0x66D500ABL;
        int32_t *l_943[1];
        uint16_t l_945 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_943[i] = &l_942;
        for (p_2155->g_163 = (-10); (p_2155->g_163 != 21); ++p_2155->g_163)
        { /* block id: 351 */
            l_940 = l_940;
        }
        ++l_945;
    }
    else
    { /* block id: 355 */
        uint16_t *l_955 = (void*)0;
        int32_t l_959 = 0x69C6A5A7L;
        int32_t l_963 = 0x325C9AE3L;
        uint16_t l_1017 = 0x2FDFL;
        uint8_t l_1027[7];
        int32_t *l_1028 = &l_962[0];
        int i;
        for (i = 0; i < 7; i++)
            l_1027[i] = 255UL;
        for (p_34 = 0; (p_34 <= 2); p_34 += 1)
        { /* block id: 358 */
            uint16_t l_952 = 0xC259L;
            int16_t **l_957 = &l_956[1][2][2];
            int32_t l_961 = 0x2D6014FCL;
            uint32_t l_964 = 9UL;
            uint64_t *l_987 = &p_2155->g_475;
            uint64_t **l_986 = &l_987;
            int32_t *l_1005 = &l_960;
            int16_t l_1007 = 0x6E08L;
            if ((((((safe_add_func_int32_t_s_s((~(((safe_lshift_func_int16_t_s_s(l_952, 1)) & (0x4D10L || (safe_add_func_int8_t_s_s(((((((l_952 , (p_2155->g_795 , l_955)) != (void*)0) , (*p_2155->g_312)) , p_37) , ((*l_957) = l_956[1][2][2])) == l_955), p_36)))) ^ p_2155->g_366)), 0x08008A3DL)) >= p_2155->g_475) & l_952) != 18446744073709551613UL) | l_944))
            { /* block id: 360 */
                int32_t *l_958[7];
                int64_t *l_979 = &p_2155->g_163;
                int8_t *l_980[5][6] = {{&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102},{&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102},{&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102},{&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102},{&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102}};
                int16_t *l_981 = &p_2155->g_109;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_958[i] = (void*)0;
                l_964--;
                l_963 = ((safe_add_func_uint32_t_u_u(l_959, (safe_div_func_int8_t_s_s((p_36 || (((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(249UL, l_962[0])), ((p_2155->g_102 = (safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_964, (l_961 && ((1L > l_962[0]) ^ (((*l_979) |= (((p_34 <= l_952) != 65526UL) == p_2155->g_793)) > p_2155->g_68))))), p_33))) && l_909))) , (*l_957)) != l_981)), (-2L))))) == 0x7BL);
            }
            else
            { /* block id: 365 */
                return p_2155->g_109;
            }
            for (p_2155->g_366 = 0; (p_2155->g_366 <= 2); p_2155->g_366 += 1)
            { /* block id: 370 */
                uint32_t **l_989 = &p_2155->g_67[0][1][5];
                int32_t l_990 = (-10L);
                int32_t **l_1004 = &p_2155->g_205;
                for (p_2155->g_109 = 0; (p_2155->g_109 <= 2); p_2155->g_109 += 1)
                { /* block id: 373 */
                    int32_t l_1000 = 0L;
                    int i;
                    l_1000 ^= (safe_mul_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(((l_986 != p_2155->g_988) != (p_2155->g_791[p_2155->g_366] != (void*)0)), ((&p_2155->g_312 != l_989) == l_962[4]))) == l_990) >= (safe_unary_minus_func_uint8_t_u(((((p_2155->g_492 = (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((!((~((safe_sub_func_uint16_t_u_u(((((void*)0 == &p_2155->g_578) , l_990) >= 0xAC700531D9F79980L), 0x7579L)) ^ 6UL)) | p_34)), (*p_2155->g_355))), p_2155->g_114)) , p_33), p_2155->g_29))) <= l_962[2]) , (void*)0) != (void*)0)))) > 0x0C500448L), l_952));
                }
                l_963 |= (safe_div_func_int16_t_s_s((p_34 ^ 0x02L), l_952));
                (*l_1004) = (*p_2155->g_905);
                return p_33;
            }
            l_959 |= ((*l_1005) = l_952);
            for (p_33 = 0; (p_33 <= 2); p_33 += 1)
            { /* block id: 385 */
                uint16_t l_1006 = 1UL;
                uint64_t *l_1009 = &p_2155->g_315;
                int64_t *l_1012 = &p_2155->g_58[0][0];
                (*l_1005) &= (p_2155->g_342 == (((0x6FF7L != 2UL) , l_1006) == (((((((l_1007 > ((&p_2155->g_792[1][4] == (void*)0) | ((safe_unary_minus_func_uint64_t_u((++(*l_1009)))) | 5L))) || ((*l_1012) = l_1006)) <= 251UL) && (-10L)) < 0x37L) , l_959) ^ l_962[0])));
            }
        }
        l_944 = (((safe_lshift_func_int16_t_s_s(p_33, 3)) < 7UL) , (l_959 > ((l_1017 && (l_1018 == (((p_36 != (*p_2155->g_578)) , ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(p_35, ((*l_1028) = (l_935 = (safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(0x8EL, p_37)), l_1027[2])))))), p_37)) , 0x02FE8E08L)) , (void*)0))) == p_2155->g_231)));
    }
    if ((safe_add_func_int32_t_s_s((((~0L) && (p_2155->g_58[0][0] = (((*p_2155->g_577) = &l_909) == ((safe_unary_minus_func_int16_t_s(l_935)) , (void*)0)))) & (safe_lshift_func_int8_t_s_u((((void*)0 != p_2155->g_577) > ((((p_2155->g_798[0][0] , ((((l_944 > ((safe_add_func_int16_t_s_s((l_1036 == (void*)0), p_33)) || 1UL)) && 0x21L) , l_1037) != (void*)0)) < l_935) , l_944) , p_34)), p_35))), l_935)))
    { /* block id: 397 */
        int32_t *l_1043[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1043[i] = &p_2155->g_111;
        for (p_2155->g_114 = 2; (p_2155->g_114 >= 0); p_2155->g_114 -= 1)
        { /* block id: 400 */
            for (p_2155->g_795 = 0; p_2155->g_795 < 4; p_2155->g_795 += 1)
            {
                for (p_2155->g_493 = 0; p_2155->g_493 < 5; p_2155->g_493 += 1)
                {
                    for (p_2155->g_138 = 0; p_2155->g_138 < 6; p_2155->g_138 += 1)
                    {
                        l_956[p_2155->g_795][p_2155->g_493][p_2155->g_138] = &p_2155->g_114;
                    }
                }
            }
            for (p_2155->g_163 = 3; (p_2155->g_163 >= 1); p_2155->g_163 -= 1)
            { /* block id: 404 */
                int32_t *l_1038 = &p_2155->g_111;
                int i;
                (*p_2155->g_1039) = l_1038;
            }
        }
        l_962[0] = (0x76L <= ((void*)0 != p_2155->g_1042));
        l_960 |= (p_35 && (p_2155->g_620 == ((0UL & p_33) , p_2155->g_620)));
    }
    else
    { /* block id: 410 */
        int32_t l_1044[2][4] = {{0x29087A1EL,0x29087A1EL,0x29087A1EL,0x29087A1EL},{0x29087A1EL,0x29087A1EL,0x29087A1EL,0x29087A1EL}};
        int i, j;
        (*p_2155->g_1045) &= l_1044[0][2];
    }
    return p_2155->g_796;
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_315 p_2155->g_578 p_2155->g_196 p_2155->g_577 p_2155->g_312 p_2155->g_355 p_2155->g_5 p_2155->g_313 p_2155->g_299 p_2155->g_362 p_2155->g_489 p_2155->g_68 p_2155->g_791 p_2155->g_6 p_2155->g_163 p_2155->g_495 p_2155->g_202 p_2155->g_111 p_2155->g_797 p_2155->g_644 p_2155->g_204 p_2155->g_205 p_2155->g_886 p_2155->g_794 p_2155->g_114 p_2155->g_109 p_2155->g_905 p_2155->g_342 p_2155->g_292 p_2155->g_366
 * writes: p_2155->g_315 p_2155->g_196 p_2155->g_109 p_2155->g_342 p_2155->g_292 p_2155->g_366 p_2155->g_68 p_2155->g_202 p_2155->g_313 p_2155->g_102 p_2155->g_362 p_2155->g_163 p_2155->g_58 p_2155->g_495 p_2155->g_182 p_2155->g_138 p_2155->g_205
 */
uint64_t  func_42(uint64_t  p_43, uint32_t  p_44, struct S0 * p_2155)
{ /* block id: 275 */
    int32_t l_722 = 1L;
    uint64_t *l_723 = (void*)0;
    uint64_t *l_724 = &p_2155->g_315;
    int16_t *l_731 = &p_2155->g_109;
    int32_t l_736 = (-9L);
    int32_t l_828 = 0x68F8F44DL;
    int32_t l_829[4][10][5] = {{{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)}},{{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)}},{{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)}},{{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)},{0x2133FCC3L,(-7L),0x51559861L,0x145E8870L,(-1L)}}};
    int32_t **l_887 = (void*)0;
    int64_t *l_904 = &p_2155->g_163;
    int i, j, k;
    l_722 = ((!(safe_add_func_int32_t_s_s(p_43, p_43))) & 1L);
lbl_897:
    l_736 = ((--(*l_724)) || ((((((*p_2155->g_578)++) | p_44) < 0xDDL) ^ ((+(safe_sub_func_int8_t_s_s((l_731 != l_731), l_722))) | (((void*)0 == &p_2155->g_495) >= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((*l_731) = (((void*)0 == &p_2155->g_578) & p_43)) , 0x32L), 5)), 8))))) | l_722));
    if ((safe_mod_func_uint16_t_u_u((**p_2155->g_577), ((*l_731) = p_43))))
    { /* block id: 282 */
        return p_43;
    }
    else
    { /* block id: 284 */
        uint16_t l_838 = 4UL;
        int32_t l_847 = 0x3472E01EL;
        int32_t l_852 = (-1L);
        int32_t l_860[4] = {0x754DA276L,0x754DA276L,0x754DA276L,0x754DA276L};
        int32_t **l_891 = &p_2155->g_182;
        uint32_t l_896 = 0xC56CB6EAL;
        int i;
        for (p_2155->g_342 = (-21); (p_2155->g_342 != 42); p_2155->g_342++)
        { /* block id: 287 */
            uint64_t l_830 = 0xFB587909804E4EF0L;
            int32_t l_851 = 0x5E87F002L;
            int32_t l_853 = 1L;
            int32_t l_858 = 0x067726F3L;
            int32_t l_859 = 0x243593FEL;
            int32_t l_861[5] = {0x403EA4A6L,0x403EA4A6L,0x403EA4A6L,0x403EA4A6L,0x403EA4A6L};
            int32_t **l_890 = &p_2155->g_182;
            uint32_t **l_894 = &p_2155->g_312;
            int i;
            for (p_2155->g_292 = 27; (p_2155->g_292 != 60); p_2155->g_292++)
            { /* block id: 290 */
                uint32_t l_777 = 4294967295UL;
                int8_t l_846 = 0x5AL;
                int32_t l_848 = 0L;
                int32_t l_849 = (-3L);
                int32_t l_857 = 0x33354E29L;
                int32_t l_864 = 0L;
                for (p_2155->g_366 = (-22); (p_2155->g_366 >= 4); ++p_2155->g_366)
                { /* block id: 293 */
                    int8_t l_749 = 0x17L;
                    int32_t *l_800[9] = {&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231,&p_2155->g_231};
                    int32_t **l_799 = &l_800[7];
                    int64_t *l_801 = &p_2155->g_163;
                    int64_t *l_802 = &p_2155->g_58[1][0];
                    int64_t *l_803 = (void*)0;
                    int64_t *l_804 = &p_2155->g_495;
                    int32_t l_845 = 0x78F3B714L;
                    int32_t l_850 = 0x07FF16ABL;
                    int32_t l_854 = 8L;
                    int32_t l_855 = 0x3130D606L;
                    int32_t l_856 = 0x4A01D4B6L;
                    int32_t l_862 = 0x180814DFL;
                    int32_t l_863[10][1] = {{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L},{0x0DFE9484L}};
                    int32_t *l_895 = &p_2155->g_138;
                    int i, j;
                    for (p_2155->g_68 = 0; (p_2155->g_68 < 1); ++p_2155->g_68)
                    { /* block id: 296 */
                        uint16_t *l_758 = &p_2155->g_202;
                        int32_t *l_773 = (void*)0;
                        int8_t *l_774 = &p_2155->g_102;
                        uint8_t *l_775 = (void*)0;
                        uint8_t *l_776 = &p_2155->g_362[0][2][2];
                        l_777 = (((*l_776) &= ((0x3776108DL & l_736) && (safe_div_func_uint16_t_u_u(l_749, (safe_lshift_func_uint8_t_u_s((((*p_2155->g_312) = (safe_sub_func_uint16_t_u_u(((**p_2155->g_577)--), ((*l_758) = (safe_lshift_func_int8_t_s_u(p_44, 1)))))) , ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((p_44 , (safe_rshift_func_int8_t_s_u(((*l_774) = ((safe_mul_func_int8_t_s_s(((*p_2155->g_577) != (*p_2155->g_577)), ((((0x26800061L < ((safe_div_func_int32_t_s_s((l_736 ^= ((((*l_758) = (~((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(l_749, p_44)), (*p_2155->g_355))) , 0xB5C3L))) | p_43) == p_2155->g_313)), 0xFEFEE39BL)) , p_43)) != 0UL) < 18446744073709551611UL) , l_749))) , (-7L))), 5))) >= (*p_2155->g_578)) < p_44) || p_2155->g_299[0]), l_749)), p_44)) <= (**p_2155->g_577))), p_43)))))) , 0x399E21D4L);
                    }
                    if ((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s(p_43, (safe_mul_func_uint16_t_u_u(p_43, (((l_736 = ((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(p_2155->g_489, l_777)), p_2155->g_299[0])) | (9L < ((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s(p_44)) | ((p_2155->g_68 == ((*l_804) &= ((*l_802) = ((*l_801) ^= ((((p_2155->g_791[2] == l_799) < l_722) <= p_2155->g_6) ^ l_722))))) , (*p_2155->g_578))) > 1L), 0x3C37L)) | 0x1E80D8FAL)))) || p_43) ^ p_2155->g_202))))) != 0L) != l_777), 3)))
                    { /* block id: 310 */
                        int32_t *l_805 = &p_2155->g_138;
                        int32_t *l_806 = &p_2155->g_111;
                        int32_t *l_807 = (void*)0;
                        int32_t *l_808 = &p_2155->g_111;
                        int32_t *l_809 = (void*)0;
                        int32_t *l_810 = &p_2155->g_104;
                        int32_t *l_811 = &l_736;
                        int32_t *l_812 = &p_2155->g_111;
                        int32_t *l_813 = &p_2155->g_104;
                        int32_t *l_814 = &l_736;
                        int32_t *l_815 = &l_736;
                        int32_t *l_816 = &l_736;
                        int32_t l_817 = (-5L);
                        int32_t *l_818 = &p_2155->g_104;
                        int32_t *l_819 = (void*)0;
                        int32_t *l_820 = &p_2155->g_111;
                        int32_t *l_821 = (void*)0;
                        int32_t *l_822 = &p_2155->g_111;
                        int32_t *l_823 = &p_2155->g_138;
                        int32_t *l_824 = (void*)0;
                        int32_t *l_825 = &l_817;
                        int32_t *l_826 = &p_2155->g_111;
                        int32_t *l_827[8][6] = {{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104},{&l_736,&l_736,(void*)0,&l_817,&l_817,&p_2155->g_104}};
                        int i, j;
                        ++l_830;
                        (*l_816) &= (((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((+p_44))), p_43)) | (safe_sub_func_uint16_t_u_u(l_722, ((l_838 >= (safe_lshift_func_int16_t_s_s(p_43, p_43))) , p_44)))) || (((!(safe_add_func_uint32_t_u_u(l_749, l_749))) || (*l_806)) == p_43));
                    }
                    else
                    { /* block id: 313 */
                        int32_t *l_843 = &p_2155->g_111;
                        int32_t *l_844[2];
                        uint64_t l_865 = 0x190F1DCB473D373AL;
                        uint8_t *l_882 = &p_2155->g_362[1][3][2];
                        int32_t **l_883 = (void*)0;
                        int32_t **l_884 = &l_844[1];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_844[i] = &l_829[3][4][3];
                        --l_865;
                        (*p_2155->g_886) = ((*l_884) = ((p_44 < (l_847 || (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((0x39044F3AL > (safe_rshift_func_uint8_t_u_s(((*l_882) = ((safe_add_func_uint32_t_u_u(((((0L <= ((safe_rshift_func_int16_t_s_u(p_43, l_847)) || (p_2155->g_797[2][6] >= (safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((p_44 != (p_44 & (*p_2155->g_578))), p_43)) || p_44), p_2155->g_362[1][3][2]))))) == (*l_843)) , 0x1AB230DA7B87611CL) <= 2UL), p_43)) <= 1UL)), p_2155->g_315))), p_44)) || 4L), p_2155->g_644)))) , (*p_2155->g_204)));
                    }
                    l_896 = ((*l_895) = (((l_887 != &p_2155->g_411) != p_43) ^ (safe_div_func_uint32_t_u_u((l_890 == l_891), (safe_add_func_int8_t_s_s((-8L), ((((*l_804) = ((((void*)0 != l_894) == p_2155->g_794) == p_44)) > 0x0E7492C71CB6ED7FL) & 0x54F2DF43L)))))));
                    if (l_838)
                        goto lbl_897;
                }
            }
        }
    }
    (*p_2155->g_905) = func_59(l_736, (safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((p_2155->g_366 = (p_2155->g_362[1][3][2] = p_2155->g_114)) && (+((safe_sub_func_uint64_t_u_u(((18446744073709551612UL != ((*l_904) = (9L || (l_828 , l_736)))) , p_44), (p_2155->g_109 , (-1L)))) <= 2L))), l_828)), p_43)), p_2155);
    return l_722;
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_109 p_2155->g_102 p_2155->g_29 p_2155->g_494 p_2155->g_313 p_2155->g_342 p_2155->g_231 p_2155->g_292 p_2155->g_6 p_2155->g_546 p_2155->g_489 p_2155->g_104 p_2155->g_355 p_2155->g_5 p_2155->g_138 p_2155->g_577 p_2155->g_68 p_2155->g_496 p_2155->g_163 p_2155->g_497 p_2155->g_202 p_2155->g_362 p_2155->g_620 p_2155->g_578 p_2155->g_196 p_2155->g_475 p_2155->g_204 p_2155->g_205 p_2155->g_378 p_2155->g_300 p_2155->g_3 p_2155->g_111
 * writes: p_2155->g_114 p_2155->g_109 p_2155->g_292 p_2155->g_231 p_2155->g_362 p_2155->g_342 p_2155->g_102 p_2155->g_546 p_2155->g_138 p_2155->g_299 p_2155->g_202 p_2155->g_111 p_2155->g_196 p_2155->g_475 p_2155->g_497 p_2155->g_205 p_2155->g_366
 */
uint32_t * func_45(int32_t * p_46, int32_t * p_47, int32_t  p_48, struct S0 * p_2155)
{ /* block id: 180 */
    int16_t *l_502 = &p_2155->g_114;
    int32_t l_503 = 0x7E83338BL;
    int32_t l_506 = 0x26A89FD6L;
    int16_t *l_509 = &p_2155->g_109;
    uint16_t *l_512 = &p_2155->g_292;
    int32_t *l_513 = &p_2155->g_231;
    uint8_t *l_514 = &p_2155->g_362[0][2][2];
    uint64_t *l_525 = &p_2155->g_342;
    int32_t l_537 = 1L;
    int32_t l_541 = 0x65A99385L;
    int32_t l_544 = (-3L);
    int32_t l_545 = 0x0D4638A2L;
    uint8_t l_561 = 0x1AL;
    int32_t **l_562 = &p_2155->g_205;
    uint16_t **l_579 = &l_512;
    uint8_t l_584 = 5UL;
    uint64_t *l_630 = (void*)0;
    uint64_t **l_629 = &l_630;
    uint32_t l_662 = 0x6774425FL;
    int32_t l_690 = 0L;
    int32_t l_714 = 0x0E00236CL;
    int32_t l_715 = (-10L);
    uint8_t l_716 = 246UL;
    if ((1UL >= (((safe_mod_func_uint8_t_u_u(((*l_514) = (((((void*)0 != &p_2155->g_313) , l_502) != ((((l_503 , (((*l_513) = (safe_rshift_func_int8_t_s_s(l_506, (+((safe_mul_func_int16_t_s_s(((*l_509) ^= ((*l_502) = 1L)), (safe_mul_func_uint16_t_u_u(((*l_512) = p_2155->g_102), p_48)))) == p_48))))) , (*p_47))) && l_506) > l_503) , (void*)0)) , p_2155->g_494)), l_506)) , l_503) | 0UL)))
    { /* block id: 186 */
        uint64_t *l_515[5][5] = {{&p_2155->g_315,&p_2155->g_342,&p_2155->g_315,&p_2155->g_315,&p_2155->g_342},{&p_2155->g_315,&p_2155->g_342,&p_2155->g_315,&p_2155->g_315,&p_2155->g_342},{&p_2155->g_315,&p_2155->g_342,&p_2155->g_315,&p_2155->g_315,&p_2155->g_342},{&p_2155->g_315,&p_2155->g_342,&p_2155->g_315,&p_2155->g_315,&p_2155->g_342},{&p_2155->g_315,&p_2155->g_342,&p_2155->g_315,&p_2155->g_315,&p_2155->g_342}};
        uint64_t **l_524 = &l_515[3][0];
        int8_t *l_526 = &p_2155->g_102;
        int32_t l_529 = 0x7FC1FD05L;
        int32_t *l_530 = &l_503;
        int32_t *l_531 = &l_503;
        int32_t *l_532 = (void*)0;
        int32_t *l_533 = &l_529;
        int32_t *l_534 = &l_503;
        int32_t *l_535 = &l_503;
        int32_t *l_536 = &p_2155->g_104;
        int32_t *l_538 = &p_2155->g_104;
        int32_t *l_539 = &l_529;
        int32_t l_540 = (-1L);
        int32_t *l_542 = &p_2155->g_138;
        int32_t *l_543[6];
        uint64_t *l_550 = &p_2155->g_475;
        uint64_t **l_549 = &l_550;
        uint64_t *l_552 = &p_2155->g_475;
        uint64_t **l_551 = &l_552;
        int64_t *l_585 = &p_2155->g_299[0];
        int i, j;
        for (i = 0; i < 6; i++)
            l_543[i] = &l_537;
        l_529 ^= (((((*l_512) = ((p_2155->g_313 | ((p_48 != 0x2DL) != ((p_48 & p_48) , (p_2155->g_342--)))) , p_48)) <= ((*l_502) = p_48)) , (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((*l_526) &= (safe_lshift_func_uint8_t_u_u((l_503 = ((((*l_524) = &p_2155->g_342) == l_525) == 0x6DL)), p_48))) & p_2155->g_231) > p_2155->g_292), l_506)), p_48))) > p_2155->g_6);
        --p_2155->g_546[0];
        (*l_542) ^= (((p_48 , ((*l_549) = l_515[2][0])) != ((*p_47) , ((*l_551) = &p_2155->g_475))) != (((safe_mul_func_uint16_t_u_u(((((((((l_530 == p_46) != (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(p_48, (((~(*p_47)) , l_503) && l_561))), p_2155->g_489)) == (*l_538)) >= p_48), (*l_538)))) >= p_48) > 7L) > l_506) , &p_47) == l_562) <= 0x21F5C0A1L), (*p_2155->g_355))) , (*p_47)) & (-1L)));
        (*l_539) = ((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((*l_585) = (safe_mod_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_s(((0x1BL == ((((safe_mul_func_int16_t_s_s(p_48, ((safe_mul_func_uint16_t_u_u((*l_531), ((safe_lshift_func_int16_t_s_u(((&l_512 == (l_579 = p_2155->g_577)) & ((((p_2155->g_68 || (*l_534)) != (safe_mod_func_int32_t_s_s((*p_47), (safe_lshift_func_int16_t_s_u((0x49C30984D15A5727L == p_48), (*l_536)))))) != (*p_47)) > l_561)), l_584)) < (*p_47)))) ^ 0x7DEF0A2A8DCFE52BL))) == p_2155->g_496) ^ p_48) , (-1L))) == p_2155->g_163), p_2155->g_497[0][1][8])) , 0L) | 0x7B4F8EDFL) > p_48), 0xB9F9E6933149704FL))), 18446744073709551615UL)), l_506)) > 0x91L);
    }
    else
    { /* block id: 201 */
        int16_t **l_613 = (void*)0;
        int8_t *l_619[3];
        int32_t l_621[4];
        uint8_t l_649 = 0x2DL;
        uint16_t l_691 = 1UL;
        int32_t *l_709 = (void*)0;
        int32_t *l_710 = (void*)0;
        int32_t *l_711 = &l_503;
        int32_t *l_712 = &l_621[2];
        int32_t *l_713[3][5][4] = {{{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537}},{{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537}},{{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537},{&p_2155->g_29,&p_2155->g_29,&l_541,&l_537}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_619[i] = &p_2155->g_102;
        for (i = 0; i < 4; i++)
            l_621[i] = (-1L);
        for (l_506 = 25; (l_506 == (-4)); l_506--)
        { /* block id: 204 */
            uint32_t l_594 = 1UL;
            uint32_t l_608 = 0xA85904CDL;
            int8_t *l_617 = &p_2155->g_102;
            int16_t *l_641 = &p_2155->g_114;
            uint32_t **l_654 = &p_2155->g_67[0][3][6];
            int32_t *l_663 = &p_2155->g_111;
            uint16_t l_672 = 0x998EL;
            int8_t l_686 = 0L;
            int64_t l_688 = 0x493118636FD50885L;
            int32_t l_689[8][6][1] = {{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L}}};
            int i, j, k;
            for (p_2155->g_292 = (-20); (p_2155->g_292 <= 12); ++p_2155->g_292)
            { /* block id: 207 */
                int32_t *l_590 = (void*)0;
                int32_t *l_591 = &p_2155->g_138;
                int32_t *l_592 = &l_503;
                int32_t *l_593 = &p_2155->g_138;
                int16_t **l_614[5] = {&p_2155->g_355,&p_2155->g_355,&p_2155->g_355,&p_2155->g_355,&p_2155->g_355};
                int i;
                if ((*p_47))
                    break;
                l_594--;
                for (p_2155->g_202 = 0; (p_2155->g_202 <= 1); p_2155->g_202 += 1)
                { /* block id: 212 */
                    int32_t *l_597 = &p_2155->g_138;
                    int32_t *l_598 = (void*)0;
                    int32_t *l_599 = &l_544;
                    int32_t *l_600 = &l_545;
                    int32_t *l_601 = &l_503;
                    int32_t *l_602 = &l_541;
                    int32_t *l_603 = &p_2155->g_111;
                    int32_t *l_604 = (void*)0;
                    int32_t *l_605 = (void*)0;
                    int32_t *l_606 = &l_545;
                    int32_t *l_607[6][2][4] = {{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}},{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}},{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}},{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}},{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}},{{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0},{(void*)0,&p_2155->g_104,&p_2155->g_104,(void*)0}}};
                    int8_t **l_618 = &l_617;
                    int i, j, k;
                    ++l_608;
                    (*l_603) = (((safe_sub_func_uint32_t_u_u((l_613 == l_614[1]), (((0xD3L < (((*l_618) = l_617) != (l_619[1] = &p_2155->g_102))) , ((p_2155->g_362[p_2155->g_202][(p_2155->g_202 + 2)][(p_2155->g_202 + 1)] && ((l_618 != p_2155->g_620) , (*p_47))) && p_48)) & p_2155->g_494))) | l_621[2]) <= p_48);
                }
            }
            for (l_541 = 0; (l_541 == (-30)); --l_541)
            { /* block id: 221 */
                uint16_t *l_639 = &p_2155->g_292;
                int32_t l_640 = 0x66F5D273L;
                uint32_t *l_642 = &p_2155->g_497[1][0][1];
                uint32_t *l_643[3][8][6] = {{{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644}},{{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644}},{{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644},{&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,&p_2155->g_644,(void*)0,&p_2155->g_644}}};
                int32_t l_645 = 0x12F197DEL;
                int32_t *l_646 = &l_621[2];
                int32_t *l_647 = &l_545;
                int32_t *l_648[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_648[i] = &p_2155->g_138;
                (*l_562) = func_59((safe_mod_func_uint32_t_u_u((l_608 && ((l_645 &= ((*l_642) = (((safe_sub_func_int32_t_s_s((p_2155->g_496 >= 0L), (safe_unary_minus_func_uint8_t_u(p_2155->g_68)))) | ((void*)0 == l_629)) || ((p_2155->g_475 |= (((safe_add_func_uint16_t_u_u(((*p_2155->g_578) = (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((((safe_lshift_func_int16_t_s_s((!((((*l_579) = (*l_579)) != l_639) & ((**p_2155->g_577) , p_48))), 14)) , 4294967295UL) ^ l_640) , l_641) == l_641), 1)), p_48))), 0x6E77L)) != p_48) != 0x2B2F43179FD6AF86L)) , p_2155->g_109)))) , l_640)), (*p_47))), l_640, p_2155);
                l_649++;
                if ((safe_add_func_uint32_t_u_u(0xECF9B499L, ((((*l_514) = 0xC7L) && (l_654 != l_654)) , ((safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((l_621[2] = (((safe_lshift_func_int8_t_s_s(p_48, (safe_unary_minus_func_uint8_t_u(((((*p_2155->g_355) , 0xC1L) & ((((+l_621[1]) ^ l_608) > p_48) && p_48)) == 0x52BEDD8BF22F229CL))))) != 0UL) || 0x281C32E0L)), l_594)) == p_48), l_662)) == p_2155->g_378)))))
                { /* block id: 231 */
                    (*l_562) = l_663;
                }
                else
                { /* block id: 233 */
                    uint8_t *l_685 = &l_584;
                    if ((safe_sub_func_int32_t_s_s((((*l_685) = ((safe_mul_func_int8_t_s_s(((p_48 <= (safe_div_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_672 , ((safe_rshift_func_uint16_t_u_s((p_48 || ((safe_mod_func_int16_t_s_s((0x23169BAE6AA56692L & p_2155->g_342), (safe_mul_func_uint8_t_u_u((p_2155->g_366 = ((*l_514) = (((void*)0 != &l_561) , (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((*l_642) = 0x51E4ED06L), (safe_add_func_int64_t_s_s(((*l_663) = p_2155->g_300), p_2155->g_292)))), 65534UL))))), p_48)))) , (*p_47))), l_649)) , (*l_647))), 2L)) , p_48), p_48))) && p_48), p_2155->g_3)) >= 0x5A0A54E4L)) < p_48), (-1L))))
                    { /* block id: 239 */
                        if ((*p_47))
                            break;
                        (*l_562) = (void*)0;
                    }
                    else
                    { /* block id: 242 */
                        if ((*p_47))
                            break;
                        if ((*l_647))
                            continue;
                    }
                }
            }
            if ((&p_2155->g_411 != &p_2155->g_411))
            { /* block id: 248 */
                int32_t *l_687[4][1][4] = {{{&l_621[3],&l_621[3],&l_621[3],&l_621[3]}},{{&l_621[3],&l_621[3],&l_621[3],&l_621[3]}},{{&l_621[3],&l_621[3],&l_621[3],&l_621[3]}},{{&l_621[3],&l_621[3],&l_621[3],&l_621[3]}}};
                int i, j, k;
                --l_691;
            }
            else
            { /* block id: 250 */
                int32_t *l_694 = &l_545;
                uint8_t l_695 = 0xFFL;
                l_695--;
                for (l_686 = 0; (l_686 < 26); l_686++)
                { /* block id: 254 */
                    uint32_t l_702 = 0x80AEA1B7L;
                    for (p_2155->g_475 = 1; (p_2155->g_475 < 23); p_2155->g_475 = safe_add_func_uint32_t_u_u(p_2155->g_475, 2))
                    { /* block id: 257 */
                        ++l_702;
                        l_621[3] ^= ((((*l_694) = ((l_691 , p_48) & (+(safe_mul_func_int8_t_s_s(p_48, ((p_48 > 2L) & (0xC46D518EL < (((+(*p_47)) == (4UL ^ p_2155->g_231)) >= p_2155->g_111)))))))) < p_48) , (*p_47));
                    }
                    for (p_2155->g_475 = 9; (p_2155->g_475 > 3); --p_2155->g_475)
                    { /* block id: 264 */
                        (*l_663) = (-1L);
                    }
                    (*l_562) = (void*)0;
                }
            }
        }
        --l_716;
    }
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_315 p_2155->g_292 p_2155->g_231 p_2155->g_300 p_2155->g_111 p_2155->g_58 p_2155->g_102 p_2155->g_5 p_2155->g_6 p_2155->g_354 p_2155->g_362 p_2155->g_109 p_2155->g_204 p_2155->g_205 p_2155->g_299 p_2155->g_378 p_2155->g_313 p_2155->g_355 p_2155->g_410 p_2155->g_196 p_2155->g_202 p_2155->g_3 p_2155->g_301 p_2155->g_342 p_2155->g_163 p_2155->g_366 p_2155->g_114 p_2155->g_475 p_2155->g_138 p_2155->g_489 p_2155->g_497
 * writes: p_2155->g_315 p_2155->g_292 p_2155->g_202 p_2155->g_342 p_2155->g_111 p_2155->g_362 p_2155->g_366 p_2155->g_299 p_2155->g_475 p_2155->g_102 p_2155->g_489 p_2155->g_497
 */
int32_t * func_49(int64_t  p_50, int32_t * p_51, int64_t  p_52, uint32_t  p_53, uint32_t * p_54, struct S0 * p_2155)
{ /* block id: 130 */
    uint64_t *l_314 = &p_2155->g_315;
    int32_t **l_327 = &p_2155->g_182;
    uint16_t *l_332 = &p_2155->g_292;
    int32_t l_339 = 0x33C66450L;
    uint16_t *l_340 = &p_2155->g_202;
    uint64_t *l_341 = &p_2155->g_342;
    int32_t *l_343 = (void*)0;
    int32_t *l_344 = &p_2155->g_111;
    uint32_t l_367 = 4294967295UL;
    int8_t *l_381 = (void*)0;
    uint8_t l_387 = 1UL;
    uint64_t l_407[6][10] = {{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL},{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL},{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL},{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL},{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL},{6UL,8UL,6UL,6UL,8UL,6UL,6UL,8UL,6UL,6UL}};
    int32_t *l_409 = &p_2155->g_231;
    int32_t **l_408 = &l_409;
    int32_t *l_488[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_488[i] = &p_2155->g_111;
    if (((*l_344) = (((!(++(*l_314))) <= ((*l_341) = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_340) = (safe_unary_minus_func_uint64_t_u(((((-10L) <= 0x2809L) < ((((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((l_327 == (void*)0), 8UL)) ^ (safe_mul_func_int16_t_s_s((((((((safe_add_func_int64_t_s_s(6L, ((++(*l_332)) > (p_53 > (safe_add_func_int8_t_s_s((~((safe_rshift_func_int16_t_s_u(p_52, (p_50 | p_2155->g_231))) <= (-1L))), p_2155->g_300)))))) != 8UL) & 18446744073709551609UL) > p_53) | p_50) < p_2155->g_111) == p_2155->g_58[0][0]), p_52))) || 1L) <= l_339), l_339)) & p_2155->g_102) != p_2155->g_5) & p_52)) != 0x91L)))), 3)), p_52)) ^ p_52))) && l_339)))
    { /* block id: 136 */
        uint32_t l_351 = 5UL;
        int32_t *l_353 = &p_2155->g_231;
        int32_t **l_352 = &l_353;
        int16_t *l_356 = (void*)0;
        int16_t *l_357[6][7][6] = {{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}},{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}},{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}},{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}},{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}},{{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5},{&p_2155->g_109,(void*)0,(void*)0,&p_2155->g_109,(void*)0,&p_2155->g_5}}};
        int32_t l_358 = 4L;
        int32_t l_380 = (-9L);
        int8_t *l_382[7] = {&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102,&p_2155->g_102};
        int64_t l_412 = 7L;
        int32_t l_413 = 0x7E98FB27L;
        int16_t l_433 = 0x76DCL;
        int8_t l_454 = 0L;
        int i, j, k;
        if (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((l_358 = ((*l_344) = (((-8L) >= l_351) <= (((!(0x20307555L ^ ((((p_2155->g_6 >= ((&p_2155->g_231 != ((*l_352) = l_343)) , (((*l_344) & p_50) & 253UL))) , p_2155->g_354[1][2]) == (void*)0) && 0UL))) , &p_53) != &p_2155->g_313)))), 12)), p_52)), l_351)) != l_351))
        { /* block id: 140 */
            uint8_t *l_361 = &p_2155->g_362[1][3][2];
            uint8_t *l_365 = &p_2155->g_366;
            int16_t l_379 = 0x518FL;
            int32_t **l_406 = &p_2155->g_182;
            l_358 = ((l_382[2] = ((safe_add_func_uint32_t_u_u((((*l_365) = (++(*l_361))) >= ((!p_2155->g_109) || ((-8L) <= l_367))), ((((((0x17L != 0x23L) , (*p_2155->g_204)) == p_54) > p_2155->g_102) < (l_380 &= ((*l_344) = (safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((((((safe_div_func_uint16_t_u_u((((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(p_2155->g_299[0], p_2155->g_378)), l_351)) != 0xAD99CC62D627531CL) < 0UL), p_2155->g_58[1][2])) != l_379) ^ 0x7FBC0174L) > 0x53CAL) || 65535UL) != (*l_344)), p_2155->g_313)), p_50))))) | p_52))) , l_381)) != &p_2155->g_102);
            l_413 &= (safe_lshift_func_uint8_t_u_s(((~((((((safe_div_func_int16_t_s_s(((((((l_387 >= (l_358 = (safe_add_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(1L, ((safe_mul_func_int8_t_s_s((p_52 , (p_52 > 0x095EA4B4L)), ((((safe_mod_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((l_406 = (((safe_mul_func_uint8_t_u_u(((((l_332 = &p_2155->g_196) == (void*)0) >= ((*p_2155->g_355) > 0x3634L)) <= l_379), l_380)) , p_53) , (void*)0)) != &p_51), p_52)), l_407[1][7])), 0x1B15L)) , l_408) == p_2155->g_410) , (*l_344)), p_53)) || p_52) || l_380) | 0x6EL))) <= 65528UL))), p_2155->g_196)) , p_53) , 0x4BAB2CAA2936E823L) != 1UL), 0x24FA66ED11156568L)))) && p_2155->g_102) > p_52) , 1L) | p_2155->g_58[0][1]) <= (*p_2155->g_355)), p_50)) > 0x36L) , (-1L)) && (-1L)) == l_412) , l_412)) | l_380), p_2155->g_202));
        }
        else
        { /* block id: 151 */
            int16_t l_432 = (-1L);
            uint32_t *l_434 = &l_351;
            if ((safe_lshift_func_int8_t_s_s(0L, (safe_unary_minus_func_uint32_t_u(((*l_434) = (((l_433 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((p_50 & ((safe_unary_minus_func_int32_t_s((((safe_mod_func_int64_t_s_s((l_380 && ((&p_2155->g_411 != &p_2155->g_411) != (-4L))), p_52)) <= (p_50 , (safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_2155->g_3, (*l_344))), p_2155->g_301)), 7)) ^ p_52) == p_53), p_2155->g_342)))) || p_52))) == 0x4DL)), p_52)), l_432))) & 1L) != l_432)))))))
            { /* block id: 154 */
                int64_t l_439 = 0x2DB0545102F7DF0AL;
                int32_t l_449 = 0x0027B496L;
                (*l_344) = (p_53 <= p_50);
                (*l_344) = (((safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((l_439 ^= (l_413 & l_433)), ((p_2155->g_299[0] |= (((((0xD896L | ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((p_2155->g_102 , (safe_mod_func_uint32_t_u_u(0xCFB28217L, p_2155->g_196))))), (((safe_sub_func_uint64_t_u_u(p_50, ((((p_52 ^ 0xF48CL) <= p_53) >= l_432) && 0x11L))) , 0x1EF74E5CL) , p_2155->g_163))), 0x97L)) || p_2155->g_58[1][1])) , p_2155->g_378) >= 0xA0L) | 1UL) >= l_432)) || p_2155->g_3))), l_449)) , p_53) >= p_52);
                return (*p_2155->g_204);
            }
            else
            { /* block id: 160 */
                uint64_t l_450 = 18446744073709551615UL;
                uint16_t **l_451 = &l_340;
                l_413 ^= (!((*l_344) &= ((((((p_52 <= p_50) , l_450) < ((((p_2155->g_366 == ((((*l_451) = &p_2155->g_6) != l_332) ^ p_52)) == (((safe_mul_func_int8_t_s_s(l_454, l_450)) , 0x1D18034684DBDAA5L) ^ 0x6154D2F9DCB7F035L)) , p_2155->g_292) || p_52)) , 0x3B0A91AB7716BC84L) | 0x4B1F751F4F8730F2L) < 0x28L)));
                return (*p_2155->g_204);
            }
        }
    }
    else
    { /* block id: 167 */
        uint16_t l_459 = 0x63A6L;
        uint64_t *l_474 = &p_2155->g_475;
        int32_t l_482 = 0x6CE2BC2FL;
        int64_t l_483 = 1L;
        int32_t **l_484 = &l_409;
        int8_t *l_485 = &p_2155->g_102;
        uint8_t *l_486[6] = {&p_2155->g_366,&p_2155->g_366,&p_2155->g_366,&p_2155->g_366,&p_2155->g_366,&p_2155->g_366};
        int32_t l_487 = 0x3507E35BL;
        int i;
        l_487 |= (safe_mul_func_uint8_t_u_u((((*l_341) &= ((*l_314) = ((safe_rshift_func_int16_t_s_u(p_50, l_459)) | 0L))) , ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((+0x54L), (p_2155->g_362[1][3][2] ^= ((safe_rshift_func_int16_t_s_u(((((((*p_2155->g_355) <= (((*l_332) ^= p_2155->g_114) && (safe_sub_func_int8_t_s_s(((*l_485) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((((((*l_474)--) , (safe_lshift_func_uint8_t_u_u(((((((p_52 | ((0x7B197927L & (safe_mod_func_int64_t_s_s(((((((l_482 = l_459) && p_2155->g_301) | 0L) || p_2155->g_109) , l_482) , l_459), p_52))) || p_50)) , p_53) , l_483) != (-3L)) , &p_2155->g_102) != (void*)0), p_53))) & p_53) , (void*)0) != l_484), p_2155->g_313)), p_2155->g_5))), 1UL)))) > 0x6BAB46328560B797L) , p_2155->g_138) , p_53) > p_53), 7)) != 0x3BE9D429L)))), 5)) ^ (*l_344)), p_52)) < p_50)), 2UL));
    }
    p_2155->g_489++;
    --p_2155->g_497[0][1][8];
    return (*p_2155->g_204);
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_204 p_2155->g_205
 * writes:
 */
int32_t * func_59(uint16_t  p_60, uint32_t  p_61, struct S0 * p_2155)
{ /* block id: 127 */
    int16_t l_307[5];
    int32_t l_310 = 6L;
    int i;
    for (i = 0; i < 5; i++)
        l_307[i] = 0L;
    l_310 = ((l_307[1] < p_61) == (p_60 < (safe_lshift_func_int8_t_s_s(l_307[3], l_307[3]))));
    return (*p_2155->g_204);
}


/* ------------------------------------------ */
/* 
 * reads : p_2155->g_68 p_2155->g_84 p_2155->g_5 p_2155->g_3 p_2155->g_104 p_2155->g_29 p_2155->g_109 p_2155->g_111 p_2155->g_67 p_2155->g_102 p_2155->g_114 p_2155->g_138 p_2155->g_163 p_2155->g_196 p_2155->g_204 p_2155->g_6 p_2155->g_205 p_2155->g_182 p_2155->g_292 p_2155->g_302
 * writes: p_2155->g_102 p_2155->g_104 p_2155->g_109 p_2155->g_111 p_2155->g_67 p_2155->g_138 p_2155->g_114 p_2155->g_163 p_2155->g_182 p_2155->g_196 p_2155->g_202 p_2155->g_205 p_2155->g_231 p_2155->g_68 p_2155->g_292 p_2155->g_302
 */
uint16_t  func_62(uint32_t * p_63, uint32_t * p_64, uint64_t  p_65, int8_t  p_66, struct S0 * p_2155)
{ /* block id: 15 */
    int32_t l_134[7][10] = {{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L},{0x44DF11EFL,0x03055D87L,0L,(-1L),0x4827C01AL,(-1L),0L,0x03055D87L,0x44DF11EFL,0L}};
    int32_t l_135[2][2];
    int16_t l_165 = 0L;
    uint8_t l_199 = 6UL;
    uint32_t **l_219[8][7] = {{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]},{&p_2155->g_67[0][1][0],&p_2155->g_67[0][1][3],&p_2155->g_67[0][0][5],&p_2155->g_67[0][3][6],&p_2155->g_67[0][1][3],&p_2155->g_67[0][3][6],&p_2155->g_67[0][0][5]}};
    int32_t l_229 = 0x2BA9483AL;
    uint64_t l_232 = 18446744073709551612UL;
    int32_t l_235 = 0x0DCDA376L;
    int8_t l_261[7] = {0L,0x0AL,0L,0L,0x0AL,0L,0L};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_135[i][j] = (-8L);
    }
    for (p_66 = 0; (p_66 > (-28)); --p_66)
    { /* block id: 18 */
        uint64_t l_87 = 0x1DE361C4DE7E0673L;
        int32_t *l_100 = &p_2155->g_29;
        int32_t l_176[5];
        int32_t *l_177[3][2][9] = {{{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]},{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]}},{{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]},{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]}},{{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]},{&p_2155->g_138,&p_2155->g_138,&l_134[0][4],&p_2155->g_111,&p_2155->g_104,&p_2155->g_104,&l_134[3][0],(void*)0,&l_134[3][0]}}};
        int32_t **l_180 = &l_100;
        int32_t **l_181[8];
        uint64_t l_190 = 0x16C91CB4C1B82195L;
        uint16_t *l_195 = &p_2155->g_196;
        uint16_t *l_200 = (void*)0;
        uint16_t *l_201 = &p_2155->g_202;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_176[i] = (-5L);
        for (i = 0; i < 8; i++)
            l_181[i] = &l_177[2][0][0];
        for (p_65 = 0; (p_65 >= 41); ++p_65)
        { /* block id: 21 */
            int32_t *l_99 = &p_2155->g_29;
            int32_t **l_98 = &l_99;
            int8_t *l_101 = &p_2155->g_102;
            int32_t *l_103 = &p_2155->g_104;
            int16_t *l_159 = &p_2155->g_109;
            int64_t *l_162[7][6] = {{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163},{&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163,&p_2155->g_163}};
            int32_t *l_164[8];
            int16_t **l_174 = &l_159;
            int16_t *l_175 = &l_165;
            int i, j;
            for (i = 0; i < 8; i++)
                l_164[i] = &p_2155->g_111;
            if (((*l_103) = ((!((p_2155->g_68 | (((((safe_add_func_int64_t_s_s((p_2155->g_84 != (void*)0), (safe_mod_func_int8_t_s_s((l_87 < (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s(p_65, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_66 != ((*l_101) = (safe_sub_func_uint32_t_u_u((&p_2155->g_68 != (((((*l_98) = (void*)0) != (p_2155->g_5 , l_100)) ^ p_66) , (void*)0)), p_65)))), 2)), 0x24C7F9B1L)))), 1UL))), (-1L))))) & p_2155->g_5) >= p_65) >= 0x20L) >= p_2155->g_68)) ^ p_2155->g_3)) != p_65)))
            { /* block id: 25 */
                (*l_103) ^= (p_2155->g_68 != 0x4BL);
            }
            else
            { /* block id: 27 */
                uint32_t *l_131 = &p_2155->g_68;
                for (p_2155->g_104 = 0; (p_2155->g_104 <= 0); p_2155->g_104 += 1)
                { /* block id: 30 */
                    uint64_t *l_115 = &l_87;
                    uint32_t **l_132 = &p_2155->g_67[p_2155->g_104][(p_2155->g_104 + 3)][(p_2155->g_104 + 7)];
                    int32_t l_133 = (-5L);
                    int32_t *l_137 = &p_2155->g_138;
                    int i, j, k;
                    for (p_2155->g_102 = 0; (p_2155->g_102 <= 0); p_2155->g_102 += 1)
                    { /* block id: 33 */
                        int32_t *l_110 = &p_2155->g_111;
                        (*l_110) ^= (p_2155->g_109 |= (safe_div_func_int32_t_s_s(p_2155->g_29, ((safe_mul_func_uint16_t_u_u(65533UL, p_66)) , p_65))));
                        if (p_66)
                            continue;
                        if (p_2155->g_109)
                            continue;
                    }
                    p_2155->g_111 = (safe_mod_func_uint64_t_u_u((++(*l_115)), (((p_2155->g_67[p_2155->g_104][(p_2155->g_104 + 3)][(p_2155->g_104 + 3)] = p_2155->g_67[p_2155->g_104][(p_2155->g_104 + 3)][(p_2155->g_104 + 7)]) == p_64) | (p_66 == p_2155->g_102))));
                    if (p_66)
                        break;
                    (*l_137) &= ((((safe_unary_minus_func_int64_t_s(((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((p_2155->g_104 <= ((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((void*)0 == p_64) && ((((*l_132) = l_131) != (void*)0) & p_2155->g_109)), p_2155->g_5)), (*l_103))) ^ l_133), l_134[6][7])), l_135[1][0])) < 18446744073709551606UL)), p_2155->g_114)), p_66)) < p_2155->g_102))) >= l_133) > p_2155->g_111) >= 0xC9L);
                }
            }
            (*l_103) |= p_65;
            l_165 = (((1UL > ((l_134[4][0] = ((-8L) <= (safe_mod_func_int16_t_s_s((p_65 >= ((safe_div_func_uint8_t_u_u(((*l_103) = (safe_sub_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s((((((+(p_2155->g_163 ^= (+(safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((((((+((((safe_div_func_int16_t_s_s((((*l_101) = ((((((safe_lshift_func_uint16_t_u_s(((0x6BCDL || ((5UL | (((((safe_lshift_func_int16_t_s_s(((&p_2155->g_68 == (void*)0) , (p_2155->g_114 = ((*l_159) = l_134[6][7]))), 7)) , (safe_mul_func_int16_t_s_s((0x11L ^ p_65), 1L))) != 0xD58820E6L) != p_65) || (-9L))) ^ l_135[1][0])) >= p_65), 6)) , 0x53L) != p_65) > p_66) || p_66) , p_66)) == p_2155->g_5), (*l_100))) || (*l_100)) && p_65) > 3UL)) != l_135[1][0]) >= p_65) & p_65) < p_2155->g_5), p_65)) , (void*)0) == (void*)0), p_66)), p_2155->g_29))))) , 1UL) & 0x17L) , &p_2155->g_67[0][2][2]) == (void*)0), p_2155->g_104)) , p_65) == p_2155->g_5) != p_2155->g_138), 0xBEC45CF2429CABE6L))), 248UL)) & p_65)), (*l_100))))) ^ p_2155->g_68)) , l_103) == l_100);
            (*l_103) = ((safe_div_func_int64_t_s_s(p_66, ((((safe_lshift_func_uint16_t_u_u(0xDA50L, 12)) & ((((((safe_mul_func_uint16_t_u_u(p_2155->g_5, p_66)) ^ 4L) && (!(safe_mod_func_int64_t_s_s(((((((((*l_174) = &p_2155->g_109) == l_175) , p_2155->g_163) > 65535UL) != (*l_100)) ^ p_65) >= l_134[3][4]), p_2155->g_138)))) <= l_176[2]) == (-1L)) == p_65)) , p_2155->g_109) | p_65))) <= (*l_100));
        }
        l_134[5][6] ^= p_66;
        p_2155->g_111 = p_65;
        p_2155->g_138 = (0x5FF730B3DA9CE404L && ((safe_add_func_uint32_t_u_u(p_2155->g_5, (((*l_180) = &p_2155->g_3) != (p_2155->g_182 = &l_134[4][8])))) >= (!(safe_unary_minus_func_int64_t_s((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(l_135[1][0], 3)), (safe_mul_func_uint16_t_u_u((l_190 && p_66), ((*l_201) = ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((p_2155->g_3 && (((*l_195)++) || p_65)), 0)), p_66)) , l_199)))))) | 0xEBD65303L) && p_2155->g_29))))));
    }
    for (p_2155->g_104 = 0; (p_2155->g_104 <= 6); p_2155->g_104 += 1)
    { /* block id: 68 */
        int32_t **l_203 = &p_2155->g_182;
        uint16_t *l_216 = &p_2155->g_202;
        int64_t l_226 = 0L;
        int32_t *l_230 = &p_2155->g_231;
        int64_t *l_233 = &p_2155->g_163;
        int32_t *l_234[1][6][8] = {{{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0},{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0},{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0},{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0},{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0},{&l_134[6][7],&l_134[6][7],(void*)0,&l_134[6][7],(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        (*p_2155->g_204) = ((*l_203) = p_63);
        l_235 |= (l_134[2][4] ^= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(0xB741L, ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_216) = (safe_lshift_func_uint8_t_u_s(250UL, 4))), 12)), (((+((*l_233) = ((safe_lshift_func_uint16_t_u_u((l_219[3][5] == ((l_135[1][0] & ((((safe_add_func_int32_t_s_s((p_65 || p_65), (((*l_230) = (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_66, l_226)), (safe_mod_func_int64_t_s_s((l_229 & l_165), p_2155->g_6))))) , 0x496BA849L))) , (-8L)) > 0L) , p_65)) , l_219[3][5])), 4)) && l_232))) ^ 18446744073709551613UL) ^ p_2155->g_138))) && l_229))), p_2155->g_3)));
        for (l_229 = 5; (l_229 >= 0); l_229 -= 1)
        { /* block id: 78 */
            uint8_t *l_260 = &l_199;
            int16_t *l_262 = &p_2155->g_109;
            int32_t l_263 = 0x5F889604L;
            int i, j;
            l_134[l_229][(p_2155->g_104 + 1)] = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(((l_263 |= (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_2155->g_102 |= l_134[p_2155->g_104][(l_229 + 1)]), (p_66 || (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_199 , ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*l_262) = ((((((safe_div_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_65, ((((safe_lshift_func_uint8_t_u_s(((*l_260) = p_66), ((((*p_2155->g_204) == ((*l_203) = &p_2155->g_138)) < 0x4859L) | l_134[p_2155->g_104][(l_229 + 1)]))) , p_2155->g_68) | 0x26L) , l_134[p_2155->g_104][(l_229 + 1)]))) || 2L) < p_65), 0x26E0L)) <= 1L) > p_2155->g_111) != l_232) <= l_261[1]) <= p_66)), p_65)), 0x0057L)) || (*p_2155->g_182))) | p_65), 1)), p_2155->g_138)) , (-1L)), p_66))))), p_65))) != 6UL), (-10L))) < p_66), 4));
            for (p_2155->g_196 = 0; (p_2155->g_196 <= 0); p_2155->g_196 += 1)
            { /* block id: 87 */
                for (p_2155->g_68 = 0; (p_2155->g_68 <= 0); p_2155->g_68 += 1)
                { /* block id: 90 */
                    return l_261[3];
                }
            }
        }
        for (p_2155->g_68 = 0; (p_2155->g_68 <= 0); p_2155->g_68 += 1)
        { /* block id: 97 */
            int8_t l_266[9][5] = {{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L},{(-2L),0x58L,0x7DL,0x69L,9L}};
            int64_t l_282 = 0x6994371F4B113F32L;
            uint8_t *l_291[9][9][3] = {{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}},{{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199},{&l_199,&l_199,&l_199}}};
            int32_t l_297 = 1L;
            int32_t l_298[6] = {0x6A679EB6L,1L,0x6A679EB6L,0x6A679EB6L,1L,0x6A679EB6L};
            int i, j, k;
            l_235 = (safe_add_func_uint32_t_u_u(0UL, (l_266[3][4] == ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((p_65 <= (!(l_134[6][7] = ((safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_66, ((p_65 > (safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s(l_282)) | (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(18446744073709551612UL, p_2155->g_29)), 7))), (safe_add_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((0x1EE3L ^ p_2155->g_6) < p_65), p_66)) | 5UL) > p_2155->g_138), p_66)))) , 0x496AL) != 0x4A84L) <= p_66), 2L))) & 0x19E4L))), p_2155->g_6)) ^ 65535UL) , 0x4216L), p_66)) <= p_65)))) , l_266[3][4]), 10)) != 0x33FDL), p_2155->g_114)) > 1UL))));
            for (l_229 = 0; (l_229 >= 0); l_229 -= 1)
            { /* block id: 102 */
                int i, j, k;
                (*l_203) = (void*)0;
                p_2155->g_292--;
                (*p_2155->g_204) = p_2155->g_67[p_2155->g_68][p_2155->g_68][(p_2155->g_104 + 1)];
            }
            for (p_2155->g_114 = 0; (p_2155->g_114 <= 0); p_2155->g_114 += 1)
            { /* block id: 109 */
                int8_t l_295 = 6L;
                int32_t l_296 = (-4L);
                int64_t l_305[5][10][4] = {{{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L}},{{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L}},{{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L}},{{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L}},{{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L},{0x44BC8077E6660620L,0x5E16A5420B66CFF6L,0x7E38AD08A1AE8705L,0x2B7A72458FD58873L}}};
                int i, j, k;
                p_2155->g_302++;
                if (l_305[3][2][2])
                    break;
                for (l_282 = 0; (l_282 <= 0); l_282 += 1)
                { /* block id: 114 */
                    int16_t l_306 = 0L;
                    for (l_229 = 0; (l_229 >= 0); l_229 -= 1)
                    { /* block id: 117 */
                        (*l_203) = (*p_2155->g_204);
                        (*p_2155->g_204) = (void*)0;
                        return l_306;
                    }
                }
            }
        }
    }
    return p_66;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2156;
    struct S0* p_2155 = &c_2156;
    struct S0 c_2157 = {
        1L, // p_2155->g_3
        (-10L), // p_2155->g_5
        0x40A1L, // p_2155->g_6
        (-1L), // p_2155->g_29
        {0x706E1857L,0x706E1857L,0x706E1857L,0x706E1857L}, // p_2155->g_39
        {{0x335339FE21AC514DL,0x335339FE21AC514DL,0x335339FE21AC514DL},{0x335339FE21AC514DL,0x335339FE21AC514DL,0x335339FE21AC514DL}}, // p_2155->g_58
        0xD269A62DL, // p_2155->g_68
        {{{&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68},{&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68},{&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68},{&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68,&p_2155->g_68}}}, // p_2155->g_67
        (void*)0, // p_2155->g_84
        0x73L, // p_2155->g_102
        0x7C0CF43AL, // p_2155->g_104
        0x2C2EL, // p_2155->g_109
        0L, // p_2155->g_111
        (-1L), // p_2155->g_114
        (void*)0, // p_2155->g_136
        0x4B0D776FL, // p_2155->g_138
        (-3L), // p_2155->g_163
        &p_2155->g_111, // p_2155->g_182
        0x4063L, // p_2155->g_196
        65535UL, // p_2155->g_202
        &p_2155->g_104, // p_2155->g_205
        &p_2155->g_205, // p_2155->g_204
        (-1L), // p_2155->g_231
        2UL, // p_2155->g_292
        {0L}, // p_2155->g_299
        0x1AE91BE4L, // p_2155->g_300
        0x6A86D9D5L, // p_2155->g_301
        1UL, // p_2155->g_302
        0x546763C7L, // p_2155->g_313
        &p_2155->g_313, // p_2155->g_312
        0xFB537554FBF96EEBL, // p_2155->g_315
        0x7F591201D7B1E90CL, // p_2155->g_342
        &p_2155->g_5, // p_2155->g_355
        {{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355},{&p_2155->g_355,&p_2155->g_355,&p_2155->g_355}}, // p_2155->g_354
        {{{1UL,1UL,0xAAL},{1UL,1UL,0xAAL},{1UL,1UL,0xAAL},{1UL,1UL,0xAAL}},{{1UL,1UL,0xAAL},{1UL,1UL,0xAAL},{1UL,1UL,0xAAL},{1UL,1UL,0xAAL}}}, // p_2155->g_362
        1UL, // p_2155->g_366
        0x163E4180L, // p_2155->g_378
        (void*)0, // p_2155->g_411
        &p_2155->g_411, // p_2155->g_410
        18446744073709551612UL, // p_2155->g_475
        0xD5L, // p_2155->g_489
        4L, // p_2155->g_492
        0x571592F3L, // p_2155->g_493
        8L, // p_2155->g_494
        (-1L), // p_2155->g_495
        4L, // p_2155->g_496
        {{{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L},{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L}},{{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L},{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L}},{{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L},{0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L,0x014746C8L,0x73AE7F0FL,0x91D2D1B0L,0x73AE7F0FL,0x014746C8L}}}, // p_2155->g_497
        {&p_2155->g_104,&p_2155->g_104,&p_2155->g_104,&p_2155->g_104}, // p_2155->g_527
        {{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}},{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}},{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}},{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}},{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}},{{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104},{&p_2155->g_138,(void*)0,&p_2155->g_138,(void*)0,&p_2155->g_104}}}, // p_2155->g_528
        {0xD573L,0xD573L,0xD573L}, // p_2155->g_546
        &p_2155->g_196, // p_2155->g_578
        &p_2155->g_578, // p_2155->g_577
        (void*)0, // p_2155->g_620
        1UL, // p_2155->g_644
        0x54DB089BL, // p_2155->g_793
        4L, // p_2155->g_794
        0x7A61EAC9L, // p_2155->g_795
        (-5L), // p_2155->g_796
        {{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L},{0x614619CBL,0x48FAAAD5L,(-4L),1L,1L,0x614619CBL,1L,0x3EE00A5DL,1L}}, // p_2155->g_797
        {{4L,4L,4L,4L}}, // p_2155->g_798
        {{&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7],&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7]},{&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7],&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7]},{&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7],&p_2155->g_797[0][7],&p_2155->g_795,&p_2155->g_797[0][7]}}, // p_2155->g_792
        {&p_2155->g_792[1][5],&p_2155->g_792[1][5],&p_2155->g_792[1][5]}, // p_2155->g_791
        {&p_2155->g_182}, // p_2155->g_885
        &p_2155->g_182, // p_2155->g_886
        &p_2155->g_205, // p_2155->g_905
        {{{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182}},{{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182}}}, // p_2155->g_941
        (void*)0, // p_2155->g_988
        {&p_2155->g_205,&p_2155->g_205,&p_2155->g_205,&p_2155->g_205,&p_2155->g_205}, // p_2155->g_1003
        &p_2155->g_182, // p_2155->g_1039
        (void*)0, // p_2155->g_1042
        &p_2155->g_104, // p_2155->g_1045
        {7UL,7UL}, // p_2155->g_1084
        &p_2155->g_182, // p_2155->g_1118
        0x2A1CL, // p_2155->g_1170
        &p_2155->g_104, // p_2155->g_1175
        &p_2155->g_205, // p_2155->g_1177
        0xEBA966AFL, // p_2155->g_1224
        0x79L, // p_2155->g_1268
        {0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL,0x976A5DF6D8542D7BL}, // p_2155->g_1283
        {&p_2155->g_315,&p_2155->g_315,&p_2155->g_315}, // p_2155->g_1292
        &p_2155->g_1292[1], // p_2155->g_1291
        0x5A5CCE1DL, // p_2155->g_1302
        &p_2155->g_3, // p_2155->g_1424
        &p_2155->g_67[0][1][5], // p_2155->g_1447
        {&p_2155->g_111,&p_2155->g_29,&p_2155->g_111,&p_2155->g_111,&p_2155->g_29,&p_2155->g_111,&p_2155->g_111,&p_2155->g_29,&p_2155->g_111}, // p_2155->g_1466
        6UL, // p_2155->g_1591
        {{0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L}}, // p_2155->g_1602
        0x30L, // p_2155->g_1604
        (-1L), // p_2155->g_1630
        0xF7CA99974AE48FD3L, // p_2155->g_1646
        &p_2155->g_205, // p_2155->g_1681
        0UL, // p_2155->g_1735
        0x51512A7DL, // p_2155->g_1801
        &p_2155->g_1630, // p_2155->g_1838
        &p_2155->g_1838, // p_2155->g_1837
        &p_2155->g_791[2], // p_2155->g_1888
        0x286670A3L, // p_2155->g_1948
        {(void*)0,&p_2155->g_1447,(void*)0,(void*)0,&p_2155->g_1447,(void*)0,(void*)0,&p_2155->g_1447,(void*)0}, // p_2155->g_1961
        &p_2155->g_1447, // p_2155->g_1962
        {{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182},{&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182,&p_2155->g_182}}, // p_2155->g_1973
        &p_2155->g_84, // p_2155->g_1987
        &p_2155->g_1987, // p_2155->g_1986
        &p_2155->g_205, // p_2155->g_2000
        &p_2155->g_2000, // p_2155->g_1999
        &p_2155->g_475, // p_2155->g_2056
        &p_2155->g_2056, // p_2155->g_2055
        &p_2155->g_366, // p_2155->g_2070
        {&p_2155->g_2070,&p_2155->g_2070,&p_2155->g_2070,&p_2155->g_2070}, // p_2155->g_2069
        0x1DL, // p_2155->g_2086
        1L, // p_2155->g_2122
        {&p_2155->g_315,&p_2155->g_315,&p_2155->g_315,&p_2155->g_315}, // p_2155->g_2148
    };
    c_2156 = c_2157;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2155);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2155->g_3, "p_2155->g_3", print_hash_value);
    transparent_crc(p_2155->g_5, "p_2155->g_5", print_hash_value);
    transparent_crc(p_2155->g_6, "p_2155->g_6", print_hash_value);
    transparent_crc(p_2155->g_29, "p_2155->g_29", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2155->g_39[i], "p_2155->g_39[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2155->g_58[i][j], "p_2155->g_58[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2155->g_68, "p_2155->g_68", print_hash_value);
    transparent_crc(p_2155->g_102, "p_2155->g_102", print_hash_value);
    transparent_crc(p_2155->g_104, "p_2155->g_104", print_hash_value);
    transparent_crc(p_2155->g_109, "p_2155->g_109", print_hash_value);
    transparent_crc(p_2155->g_111, "p_2155->g_111", print_hash_value);
    transparent_crc(p_2155->g_114, "p_2155->g_114", print_hash_value);
    transparent_crc(p_2155->g_138, "p_2155->g_138", print_hash_value);
    transparent_crc(p_2155->g_163, "p_2155->g_163", print_hash_value);
    transparent_crc(p_2155->g_196, "p_2155->g_196", print_hash_value);
    transparent_crc(p_2155->g_202, "p_2155->g_202", print_hash_value);
    transparent_crc(p_2155->g_231, "p_2155->g_231", print_hash_value);
    transparent_crc(p_2155->g_292, "p_2155->g_292", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2155->g_299[i], "p_2155->g_299[i]", print_hash_value);

    }
    transparent_crc(p_2155->g_300, "p_2155->g_300", print_hash_value);
    transparent_crc(p_2155->g_301, "p_2155->g_301", print_hash_value);
    transparent_crc(p_2155->g_302, "p_2155->g_302", print_hash_value);
    transparent_crc(p_2155->g_313, "p_2155->g_313", print_hash_value);
    transparent_crc(p_2155->g_315, "p_2155->g_315", print_hash_value);
    transparent_crc(p_2155->g_342, "p_2155->g_342", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_2155->g_362[i][j][k], "p_2155->g_362[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2155->g_366, "p_2155->g_366", print_hash_value);
    transparent_crc(p_2155->g_378, "p_2155->g_378", print_hash_value);
    transparent_crc(p_2155->g_475, "p_2155->g_475", print_hash_value);
    transparent_crc(p_2155->g_489, "p_2155->g_489", print_hash_value);
    transparent_crc(p_2155->g_492, "p_2155->g_492", print_hash_value);
    transparent_crc(p_2155->g_493, "p_2155->g_493", print_hash_value);
    transparent_crc(p_2155->g_494, "p_2155->g_494", print_hash_value);
    transparent_crc(p_2155->g_495, "p_2155->g_495", print_hash_value);
    transparent_crc(p_2155->g_496, "p_2155->g_496", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_2155->g_497[i][j][k], "p_2155->g_497[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_2155->g_546[i], "p_2155->g_546[i]", print_hash_value);

    }
    transparent_crc(p_2155->g_644, "p_2155->g_644", print_hash_value);
    transparent_crc(p_2155->g_793, "p_2155->g_793", print_hash_value);
    transparent_crc(p_2155->g_794, "p_2155->g_794", print_hash_value);
    transparent_crc(p_2155->g_795, "p_2155->g_795", print_hash_value);
    transparent_crc(p_2155->g_796, "p_2155->g_796", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2155->g_797[i][j], "p_2155->g_797[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_2155->g_798[i][j], "p_2155->g_798[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2155->g_1084[i], "p_2155->g_1084[i]", print_hash_value);

    }
    transparent_crc(p_2155->g_1170, "p_2155->g_1170", print_hash_value);
    transparent_crc(p_2155->g_1224, "p_2155->g_1224", print_hash_value);
    transparent_crc(p_2155->g_1268, "p_2155->g_1268", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2155->g_1283[i], "p_2155->g_1283[i]", print_hash_value);

    }
    transparent_crc(p_2155->g_1302, "p_2155->g_1302", print_hash_value);
    transparent_crc(p_2155->g_1591, "p_2155->g_1591", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2155->g_1602[i][j], "p_2155->g_1602[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2155->g_1604, "p_2155->g_1604", print_hash_value);
    transparent_crc(p_2155->g_1630, "p_2155->g_1630", print_hash_value);
    transparent_crc(p_2155->g_1646, "p_2155->g_1646", print_hash_value);
    transparent_crc(p_2155->g_1735, "p_2155->g_1735", print_hash_value);
    transparent_crc(p_2155->g_1801, "p_2155->g_1801", print_hash_value);
    transparent_crc(p_2155->g_1948, "p_2155->g_1948", print_hash_value);
    transparent_crc(p_2155->g_2086, "p_2155->g_2086", print_hash_value);
    transparent_crc(p_2155->g_2122, "p_2155->g_2122", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
