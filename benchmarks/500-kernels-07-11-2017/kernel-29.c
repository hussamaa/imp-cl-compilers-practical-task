// -g 70,32,2 -l 1,16,2
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


// Seed: 1478213038

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_4;
    uint64_t g_18;
    int32_t g_20;
    int8_t g_45;
    uint16_t g_58;
    int32_t g_62;
    int8_t g_68;
    int16_t g_69;
    int8_t g_70;
    uint32_t g_71[9];
    uint32_t g_112;
    int32_t g_121;
    int8_t g_122;
    int32_t g_124;
    uint8_t g_125;
    uint64_t g_158;
    uint8_t g_196[2][3];
    int32_t **g_197;
    uint64_t g_208;
    int64_t g_226;
    uint64_t *g_255;
    uint64_t **g_254[1];
    int32_t *g_276;
    uint64_t g_288;
    int8_t g_292;
    int64_t g_293;
    int8_t g_294;
    uint32_t g_295[4][6][5];
    int64_t g_332;
    int8_t g_418;
    int16_t g_420;
    int16_t g_422[8][5][6];
    uint8_t g_426;
    uint32_t g_474;
    int32_t g_476[10][2];
    int32_t *g_487;
    int8_t g_511;
    int32_t g_517;
    uint64_t g_561;
    int32_t g_567;
    int32_t **g_595;
    int64_t g_616;
    int16_t g_617;
    uint32_t g_618;
    int32_t g_631;
    int32_t g_632;
    int32_t g_653;
    int16_t g_654;
    int8_t g_657;
    uint32_t g_658;
    int32_t g_687[8][9];
    uint32_t g_693;
    uint32_t g_721[8];
    int64_t **g_805;
    int64_t *g_812;
    int16_t *g_820;
    int16_t * volatile *g_819;
    int32_t g_898;
    int32_t g_934;
    uint8_t * volatile g_970;
    uint8_t * volatile *g_969;
    int32_t g_1010;
    int32_t g_1025;
    uint64_t g_1027;
    uint64_t g_1070;
    int32_t g_1139;
    uint64_t ***g_1190;
    int16_t g_1272;
    int8_t * volatile g_1317[6][7][6];
    int8_t * volatile *g_1316;
    uint32_t *g_1342;
    uint32_t g_1434;
    uint16_t g_1457;
    uint64_t g_1516;
    volatile int16_t g_1540;
    volatile int16_t *g_1539;
    volatile int16_t * volatile *g_1538;
    volatile int16_t * volatile * volatile *g_1537;
    volatile int16_t * volatile * volatile **g_1536;
    uint32_t *g_1637;
    int64_t * volatile *g_1697;
    int64_t * volatile **g_1696;
    uint16_t g_1699;
    uint32_t *g_1708;
    uint32_t **g_1707[4][10];
    uint16_t g_1774;
    int32_t g_1789;
    int32_t g_1841;
    int32_t ***g_1854[8][5][6];
    uint8_t g_1868[7][9][4];
    uint8_t g_2018;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2019);
uint64_t  func_10(int32_t  p_11, struct S0 * p_2019);
int64_t  func_14(int32_t  p_15, int64_t  p_16, uint64_t  p_17, struct S0 * p_2019);
int16_t  func_25(uint8_t  p_26, uint32_t  p_27, int32_t  p_28, int32_t  p_29, struct S0 * p_2019);
uint64_t  func_33(int32_t  p_34, int32_t  p_35, struct S0 * p_2019);
int32_t  func_36(int32_t * p_37, int32_t  p_38, int32_t  p_39, struct S0 * p_2019);
int16_t  func_42(uint32_t  p_43, struct S0 * p_2019);
int32_t * func_46(int32_t * p_47, int8_t * p_48, struct S0 * p_2019);
int32_t * func_49(uint32_t  p_50, int32_t  p_51, uint16_t  p_52, struct S0 * p_2019);
int64_t  func_53(int8_t  p_54, struct S0 * p_2019);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2019->g_4 p_2019->g_18 p_2019->g_20 p_2019->g_62 p_2019->g_71 p_2019->g_70 p_2019->g_68 p_2019->g_58 p_2019->g_112 p_2019->g_69 p_2019->g_125 p_2019->g_124 p_2019->g_197 p_2019->g_158 p_2019->g_226 p_2019->g_254 p_2019->g_208 p_2019->g_255 p_2019->g_288 p_2019->g_295 p_2019->g_332 p_2019->g_122 p_2019->g_121 p_2019->g_196 p_2019->g_293 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_418 p_2019->g_292 p_2019->g_45 p_2019->g_517 p_2019->g_658 p_2019->g_653 p_2019->g_567 p_2019->g_693 p_2019->g_511 p_2019->g_618 p_2019->g_632 p_2019->g_422 p_2019->g_687 p_2019->g_805 p_2019->g_819 p_2019->g_820 p_2019->g_812 p_2019->g_616 p_2019->g_721 p_2019->g_969 p_2019->g_654 p_2019->g_487 p_2019->g_1027 p_2019->g_1010 p_2019->g_934 p_2019->g_1070 p_2019->g_898 p_2019->g_1025 p_2019->g_1139 p_2019->g_1190 p_2019->g_1316 p_2019->g_1342 p_2019->g_1434 p_2019->g_657 p_2019->g_561 p_2019->g_1536 p_2019->g_617 p_2019->g_1457 p_2019->g_1696 p_2019->g_1637 p_2019->g_1697 p_2019->g_1774 p_2019->g_1789 p_2019->g_631 p_2019->g_1272 p_2019->g_1841 p_2019->g_1868 p_2019->g_2018
 * writes: p_2019->g_20 p_2019->g_45 p_2019->g_58 p_2019->g_62 p_2019->g_71 p_2019->g_68 p_2019->g_112 p_2019->g_69 p_2019->g_125 p_2019->g_158 p_2019->g_196 p_2019->g_208 p_2019->g_226 p_2019->g_276 p_2019->g_288 p_2019->g_295 p_2019->g_255 p_2019->g_254 p_2019->g_332 p_2019->g_418 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_487 p_2019->g_511 p_2019->g_517 p_2019->g_124 p_2019->g_658 p_2019->g_567 p_2019->g_693 p_2019->g_721 p_2019->g_632 p_2019->g_595 p_2019->g_292 p_2019->g_617 p_2019->g_422 p_2019->g_812 p_2019->g_819 p_2019->g_197 p_2019->g_616 p_2019->g_70 p_2019->g_654 p_2019->g_1027 p_2019->g_1010 p_2019->g_1070 p_2019->g_121 p_2019->g_820 p_2019->g_898 p_2019->g_1025 p_2019->g_1190 p_2019->g_687 p_2019->g_1342 p_2019->g_122 p_2019->g_1434 p_2019->g_657 p_2019->g_1457 p_2019->g_561 p_2019->g_1516 p_2019->g_1699 p_2019->g_1707 p_2019->g_1139 p_2019->g_1841 p_2019->g_1789 p_2019->g_618 p_2019->g_1854 p_2019->g_1868 p_2019->g_18 p_2019->g_1774 p_2019->g_2018
 */
int32_t  func_1(struct S0 * p_2019)
{ /* block id: 4 */
    uint16_t l_9[7][10] = {{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL},{0xFDEBL,65527UL,65533UL,0UL,0UL,0xFDEBL,0UL,2UL,0UL,0xFDEBL}};
    int32_t *l_19 = &p_2019->g_20;
    int8_t l_30 = 1L;
    int32_t l_1437 = (-2L);
    int8_t *l_1438[5];
    int32_t *l_1840[7] = {&l_1437,(void*)0,&l_1437,&l_1437,(void*)0,&l_1437,&l_1437};
    int i, j;
    for (i = 0; i < 5; i++)
        l_1438[i] = &p_2019->g_657;
    p_2019->g_687[2][0] = (p_2019->g_2018 |= (18446744073709551610UL || (!((p_2019->g_4 && (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_9[0][3], (p_2019->g_4 <= func_10((p_2019->g_1789 = (p_2019->g_1841 ^= (safe_mul_func_int8_t_s_s((-10L), (func_14(p_2019->g_18, (((*l_19) = (-1L)) , ((p_2019->g_657 |= ((safe_add_func_int64_t_s_s(p_2019->g_20, ((safe_mul_func_int16_t_s_s(func_25(p_2019->g_18, l_30, p_2019->g_18, l_9[4][8], p_2019), 0x2661L)) < l_1437))) < 0x24L)) || (-1L))), p_2019->g_618, p_2019) || (-9L)))))), p_2019)))), 5))) && 0x28L))));
    return p_2019->g_1272;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_618 p_2019->g_1010 p_2019->g_197 p_2019->g_1697 p_2019->g_812 p_2019->g_616 p_2019->g_426 p_2019->g_820 p_2019->g_1190 p_2019->g_254 p_2019->g_255 p_2019->g_158 p_2019->g_69 p_2019->g_196 p_2019->g_1868 p_2019->g_567 p_2019->g_632 p_2019->g_476 p_2019->g_68 p_2019->g_125 p_2019->g_474 p_2019->g_487 p_2019->g_420 p_2019->g_687 p_2019->g_1696 p_2019->g_1841 p_2019->g_1637 p_2019->g_112 p_2019->g_122 p_2019->g_294 p_2019->g_295 p_2019->g_1774 p_2019->g_1316 p_2019->g_70 p_2019->g_18 p_2019->g_62 p_2019->g_71 p_2019->g_124 p_2019->g_20 p_2019->g_226 p_2019->g_208 p_2019->g_805
 * writes: p_2019->g_618 p_2019->g_1010 p_2019->g_487 p_2019->g_1854 p_2019->g_616 p_2019->g_125 p_2019->g_69 p_2019->g_196 p_2019->g_1868 p_2019->g_632 p_2019->g_567 p_2019->g_18 p_2019->g_1139 p_2019->g_122 p_2019->g_1774 p_2019->g_70 p_2019->g_68 p_2019->g_58 p_2019->g_112 p_2019->g_62 p_2019->g_158 p_2019->g_208 p_2019->g_226 p_2019->g_276
 */
uint64_t  func_10(int32_t  p_11, struct S0 * p_2019)
{ /* block id: 864 */
    uint8_t *l_1848 = &p_2019->g_125;
    uint8_t **l_1847 = &l_1848;
    int32_t l_1849 = 0L;
    int32_t ***l_1852 = &p_2019->g_595;
    int32_t ***l_1853 = &p_2019->g_595;
    int32_t l_1869 = 0x65FB50ADL;
    int64_t *l_1874 = &p_2019->g_332;
    uint32_t l_1881 = 0UL;
    int32_t l_1909 = 0L;
    int8_t *l_1952 = &p_2019->g_70;
    int8_t **l_1951 = &l_1952;
    int16_t l_1970 = 1L;
    int64_t **l_1972[8][4] = {{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874},{&l_1874,&l_1874,&l_1874,&l_1874}};
    int8_t l_1982[2];
    int32_t l_1983 = (-1L);
    int32_t l_1984 = 0x4F402E31L;
    int32_t l_1985 = 0L;
    int32_t l_1986 = 0x4660F7E7L;
    int32_t l_1987 = (-1L);
    int32_t l_1988 = 1L;
    int32_t l_1989 = (-1L);
    int32_t l_1990 = (-5L);
    int32_t l_1991 = 0x50730467L;
    int32_t l_1992 = 0x718EE85EL;
    int32_t l_1993[10][8] = {{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L},{(-6L),0x3CA925F3L,(-1L),4L,0x3CA925F3L,4L,(-1L),0x3CA925F3L}};
    uint8_t l_1994 = 9UL;
    uint32_t **l_1997 = &p_2019->g_1708;
    int32_t *l_2008 = &p_2019->g_124;
    uint8_t l_2015 = 1UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1982[i] = 0x57L;
    for (p_2019->g_618 = 0; (p_2019->g_618 != 48); p_2019->g_618 = safe_add_func_uint8_t_u_u(p_2019->g_618, 8))
    { /* block id: 867 */
        uint8_t *l_1845 = &p_2019->g_426;
        uint8_t **l_1844 = &l_1845;
        uint8_t ***l_1846 = (void*)0;
        l_1847 = l_1844;
        return l_1849;
    }
    for (p_2019->g_1010 = 0; (p_2019->g_1010 <= 1); p_2019->g_1010 += 1)
    { /* block id: 873 */
        int32_t *l_1850 = &p_2019->g_567;
        int32_t ***l_1851[3];
        uint8_t *l_1865 = (void*)0;
        uint8_t *l_1866 = &p_2019->g_196[1][1];
        uint8_t *l_1867 = &p_2019->g_1868[6][7][3];
        int32_t l_1902 = 4L;
        uint32_t l_1912 = 0x3FD9313AL;
        int8_t **l_1969 = &l_1952;
        int i;
        for (i = 0; i < 3; i++)
            l_1851[i] = &p_2019->g_595;
        l_1850 = ((*p_2019->g_197) = &p_2019->g_567);
        l_1869 &= (((*l_1867) ^= (((((l_1852 = l_1851[0]) == (p_2019->g_1854[6][2][1] = l_1853)) | ((*l_1866) &= (((safe_rshift_func_int8_t_s_u((((((*p_2019->g_820) = (((((**p_2019->g_1697) |= l_1849) < (p_2019->g_426 , ((safe_mul_func_int8_t_s_s((((*l_1848) = (p_11 < 0xFF91L)) <= ((l_1849 > (0xC1D385FBB5B6293EL >= (((((safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(0L, (-6L))), p_11)) , 0xF989D6F2L), 0x399EE63DL)) >= (-5L)) ^ 8UL) >= p_11) == l_1849))) , p_11)), p_11)) <= 0UL))) | 248UL) , (-1L))) , (***p_2019->g_1190)) > p_11) , (-1L)), p_11)) , (*p_2019->g_820)) && 65535UL))) , p_11) , l_1849)) ^ (*l_1850));
        for (p_2019->g_632 = 0; (p_2019->g_632 <= 1); p_2019->g_632 += 1)
        { /* block id: 886 */
            uint32_t *l_1882 = &p_2019->g_71[3];
            uint32_t **l_1890 = &p_2019->g_1637;
            uint32_t ***l_1889 = &l_1890;
            int32_t l_1900[4] = {0x580A7B83L,0x580A7B83L,0x580A7B83L,0x580A7B83L};
            int i, j;
            if (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((void*)0 == l_1874) >= p_2019->g_476[(p_2019->g_632 + 8)][p_2019->g_1010]), ((((((*p_2019->g_820) = (safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((p_2019->g_68 != (p_11 , (p_2019->g_125 ^ (safe_rshift_func_uint8_t_u_u((((l_1881 , (&p_2019->g_71[5] == (l_1882 = &l_1881))) > p_2019->g_474) | (*p_2019->g_487)), 5))))), 3)) , 0x2B424E5890A24C88L), p_11))) , 0x13A9E80E53408432L) & 0x2B0D0FA5FFB6B0E3L) || l_1849) , (*l_1850)))), 13)) , (**p_2019->g_197)))
            { /* block id: 889 */
                int16_t l_1891 = 0L;
                int32_t l_1892 = 0L;
                int32_t l_1910 = 0x0EB7AC43L;
                uint32_t l_1940 = 0UL;
                uint64_t l_1942 = 0x24333FE8DB2D5D0BL;
                if (((safe_div_func_int64_t_s_s(((((((*p_2019->g_820) = ((*l_1850) = (((safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s(l_1881, (((&p_2019->g_1699 == &p_2019->g_58) || p_11) , p_2019->g_420))) , ((0x29182CA630ABDB2FL <= ((void*)0 != l_1889)) <= ((0L ^ 0x12L) || (*l_1850)))) > (-2L)), 4)) == 0x4BDFL) || l_1891))) > p_2019->g_476[(p_2019->g_632 + 8)][p_2019->g_1010]) , p_2019->g_687[3][4]) , (*p_2019->g_255)) > (-1L)), (***p_2019->g_1696))) & p_11))
                { /* block id: 892 */
                    int32_t l_1908 = 0x3888CC9FL;
                    int32_t l_1911[3][7] = {{0x1B3AFAC0L,0x03A78FA8L,1L,0x4D065F1DL,0x03A78FA8L,0x4D065F1DL,1L},{0x1B3AFAC0L,0x03A78FA8L,1L,0x4D065F1DL,0x03A78FA8L,0x4D065F1DL,1L},{0x1B3AFAC0L,0x03A78FA8L,1L,0x4D065F1DL,0x03A78FA8L,0x4D065F1DL,1L}};
                    int32_t *l_1939 = &p_2019->g_1139;
                    int8_t *l_1941 = &p_2019->g_122;
                    int i, j;
                    for (p_2019->g_18 = 0; (p_2019->g_18 <= 1); p_2019->g_18 += 1)
                    { /* block id: 895 */
                        int32_t *l_1893 = (void*)0;
                        int32_t *l_1894 = (void*)0;
                        int32_t *l_1895 = &l_1892;
                        int32_t *l_1896 = &l_1849;
                        int32_t *l_1897 = (void*)0;
                        int32_t *l_1898 = &p_2019->g_1841;
                        int32_t *l_1899 = &p_2019->g_1841;
                        int32_t l_1901 = 0x19BF4A8EL;
                        int32_t *l_1903 = &p_2019->g_687[7][2];
                        int32_t *l_1904 = &p_2019->g_567;
                        int32_t l_1905 = (-1L);
                        int32_t l_1906[5];
                        int32_t *l_1907[7][9] = {{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841},{&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841,&p_2019->g_1841}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1906[i] = 0x1A0D8BC6L;
                        l_1912++;
                        (*p_2019->g_197) = &p_11;
                    }
                    (*l_1850) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(l_1909, (p_11 == p_11))) & (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_11 <= p_2019->g_1841), (((p_11 , (*p_2019->g_1637)) < (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((*l_1850), (safe_lshift_func_int8_t_s_s(((*l_1941) ^= (((*p_2019->g_820) = ((safe_mod_func_uint64_t_u_u(((+((((*l_1939) = (safe_mul_func_uint8_t_u_u(l_1910, 0UL))) , p_11) == 0x1BL)) & l_1940), 18446744073709551607UL)) | l_1900[2])) == l_1849)), 6)))), p_11))) , 0x3BE4D075L))), 6))), (-9L))) >= 3L) && p_2019->g_294), (*l_1850))) || p_11) > 0x245BL), l_1942)), p_11));
                }
                else
                { /* block id: 903 */
                    uint16_t *l_1943[10] = {&p_2019->g_1457,&p_2019->g_1699,&p_2019->g_1774,&p_2019->g_1699,&p_2019->g_1457,&p_2019->g_1457,&p_2019->g_1699,&p_2019->g_1774,&p_2019->g_1699,&p_2019->g_1457};
                    int32_t l_1950 = 0x2C4D592DL;
                    int8_t **l_1953 = (void*)0;
                    int i;
                    for (l_1910 = 0; (l_1910 >= 0); l_1910 -= 1)
                    { /* block id: 906 */
                        int i, j, k;
                        return p_2019->g_295[(p_2019->g_1010 + 1)][(p_2019->g_1010 + 2)][(l_1910 + 3)];
                    }
                    l_1892 = ((**p_2019->g_197) = (+((((p_11 || ((***p_2019->g_1696) = (((++p_2019->g_1774) != 0L) == (safe_mod_func_uint16_t_u_u(p_11, (safe_sub_func_uint64_t_u_u(l_1900[3], 0x155FC4B5703BAB32L))))))) || ((0x63L > (((l_1950 , (-7L)) & (*l_1850)) >= 0L)) && (*l_1850))) != 0UL) | (-4L))));
                    (*l_1850) = (l_1951 != (l_1950 , l_1953));
                    if ((**p_2019->g_197))
                        continue;
                }
                if (p_11)
                    continue;
                return (***p_2019->g_1190);
            }
            else
            { /* block id: 918 */
                int16_t l_1968 = 0x26E8L;
                int32_t l_1971 = (-1L);
                int i, j;
                (*p_2019->g_197) = (*p_2019->g_197);
                (*p_2019->g_197) = func_49(((safe_lshift_func_int16_t_s_u(((p_11 >= p_11) , (safe_sub_func_uint64_t_u_u((***p_2019->g_1190), l_1869))), 14)) , ((safe_mod_func_int64_t_s_s(0x333E7DB21CB6334CL, (*l_1850))) & (-6L))), (((l_1971 = (((*l_1952) = (((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((((((*l_1867) = (p_2019->g_196[p_2019->g_1010][p_2019->g_632]++)) || (((((safe_div_func_uint64_t_u_u(0x22E671EF8364F2E0L, ((((l_1968 , p_2019->g_1316) == l_1969) | p_11) || p_11))) & 0x7F42B874753C5E68L) >= p_11) & 0L) || 1L)) >= 0UL) , p_2019->g_196[p_2019->g_1010][p_2019->g_632]) <= p_2019->g_474), 4)), l_1900[3])) <= l_1900[3]) , l_1970)) <= p_11)) && p_11) != (-8L)), p_11, p_2019);
                return (***p_2019->g_1190);
            }
        }
    }
    (*p_2019->g_197) = func_49(p_11, (((p_11 ^ (p_11 | p_11)) , l_1852) != (l_1853 = l_1853)), (p_11 & p_11), p_2019);
    if ((+(&l_1874 == (l_1972[2][3] = p_2019->g_805))))
    { /* block id: 932 */
        int16_t l_1973[1][10];
        int32_t *l_1974 = (void*)0;
        int32_t *l_1975 = (void*)0;
        int32_t *l_1976 = &p_2019->g_1025;
        int32_t *l_1977 = &p_2019->g_1789;
        int32_t *l_1978 = (void*)0;
        int32_t *l_1979[2];
        int32_t l_1980[7];
        int8_t l_1981 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_1973[i][j] = 4L;
        }
        for (i = 0; i < 2; i++)
            l_1979[i] = &p_2019->g_1841;
        for (i = 0; i < 7; i++)
            l_1980[i] = 0x42B9BE8AL;
        ++l_1994;
        l_1984 &= ((l_1997 != &p_2019->g_1708) , ((((safe_mod_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((p_11 <= ((((l_1987 |= (!(p_11 != (safe_mul_func_uint8_t_u_u((~l_1989), (((*p_2019->g_820) = p_11) , ((*l_1848) = ((void*)0 == l_2008)))))))) >= (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((0xF8L != p_11) , l_1970) , p_2019->g_476[0][0]), l_1983)) > l_1994) > l_1993[0][7]), p_2019->g_420)), 0x659E0EA8L))) & 1L) , 0L)), (-6L))) & l_2015), p_11)) ^ 0x52L), l_1983)), 1UL)) && p_11) <= p_11) , l_1991));
    }
    else
    { /* block id: 938 */
        int32_t l_2016[1][3];
        int32_t *l_2017 = &l_1986;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_2016[i][j] = 0x19B6F360L;
        }
        (*l_2017) = (l_2016[0][1] = p_11);
    }
    return l_1984;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_517 p_2019->g_820 p_2019->g_812 p_2019->g_616 p_2019->g_45 p_2019->g_687 p_2019->g_1190 p_2019->g_254 p_2019->g_255 p_2019->g_158 p_2019->g_125 p_2019->g_69 p_2019->g_197 p_2019->g_58 p_2019->g_71 p_2019->g_721 p_2019->g_561 p_2019->g_1434 p_2019->g_474 p_2019->g_208 p_2019->g_294 p_2019->g_1536 p_2019->g_617 p_2019->g_654 p_2019->g_1457 p_2019->g_1696 p_2019->g_476 p_2019->g_124 p_2019->g_1637 p_2019->g_112 p_2019->g_693 p_2019->g_20 p_2019->g_1697 p_2019->g_121 p_2019->g_1774 p_2019->g_1027 p_2019->g_1789 p_2019->g_1342 p_2019->g_631 p_2019->g_1272
 * writes: p_2019->g_58 p_2019->g_69 p_2019->g_617 p_2019->g_1457 p_2019->g_1342 p_2019->g_687 p_2019->g_487 p_2019->g_561 p_2019->g_254 p_2019->g_616 p_2019->g_332 p_2019->g_125 p_2019->g_226 p_2019->g_474 p_2019->g_1516 p_2019->g_294 p_2019->g_158 p_2019->g_654 p_2019->g_1699 p_2019->g_124 p_2019->g_1707 p_2019->g_71 p_2019->g_693 p_2019->g_112 p_2019->g_1139 p_2019->g_517 p_2019->g_721 p_2019->g_657
 */
int64_t  func_14(int32_t  p_15, int64_t  p_16, uint64_t  p_17, struct S0 * p_2019)
{ /* block id: 690 */
    uint8_t l_1447 = 1UL;
    uint16_t *l_1452 = &p_2019->g_58;
    int16_t *l_1455 = &p_2019->g_617;
    uint16_t *l_1456 = &p_2019->g_1457;
    uint32_t **l_1458 = &p_2019->g_1342;
    int64_t *l_1459 = &p_2019->g_332;
    uint32_t l_1460[6][7] = {{1UL,4UL,0UL,4UL,1UL,1UL,4UL},{1UL,4UL,0UL,4UL,1UL,1UL,4UL},{1UL,4UL,0UL,4UL,1UL,1UL,4UL},{1UL,4UL,0UL,4UL,1UL,1UL,4UL},{1UL,4UL,0UL,4UL,1UL,1UL,4UL},{1UL,4UL,0UL,4UL,1UL,1UL,4UL}};
    int32_t *l_1461 = &p_2019->g_687[4][3];
    int32_t l_1511 = 0x0562CD1FL;
    int8_t l_1514 = (-2L);
    uint32_t *l_1550 = &p_2019->g_693;
    uint32_t **l_1549 = &l_1550;
    int32_t *l_1561 = &p_2019->g_934;
    int32_t **l_1560 = &l_1561;
    int32_t l_1569 = 0x14280639L;
    int32_t l_1572 = 1L;
    int32_t l_1573 = 5L;
    int32_t l_1579 = 0x636A53BBL;
    int32_t l_1583 = (-6L);
    int32_t l_1588 = 0L;
    int32_t l_1591 = 0x79251382L;
    int64_t l_1598 = 6L;
    int8_t l_1772[3][1];
    int32_t l_1834 = 0x5F6335ABL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1772[i][j] = 0x0AL;
    }
    (*l_1461) &= ((((((safe_add_func_int16_t_s_s(p_16, ((((*l_1458) = (((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((0x1AL < (p_16 && ((*l_1456) = (((*l_1455) = (safe_mul_func_uint8_t_u_u(l_1447, ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(((((safe_unary_minus_func_int8_t_s((l_1452 == (p_2019->g_517 , l_1452)))) == ((*p_2019->g_820) = ((l_1447 , (safe_mod_func_uint8_t_u_u((((*l_1452) = ((p_15 & 0L) | l_1447)) == 65532UL), p_16))) > p_16))) < p_17) || p_15))), (*p_2019->g_812))) != 0x6BL)))) ^ l_1447)))) >= p_2019->g_517) >= l_1447) && 0x5F654AFCL), p_16)), 247UL)) >= l_1447) , &p_2019->g_721[4])) == (void*)0) >= p_2019->g_45))) , (void*)0) == l_1459) >= 0L) & p_17) & l_1460[5][3]);
    if (((*l_1461) = (*l_1461)))
    { /* block id: 698 */
        uint64_t ***l_1464 = &p_2019->g_254[0];
        uint8_t **l_1466 = (void*)0;
        uint8_t ***l_1465 = &l_1466;
        int32_t l_1475[10][2] = {{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L},{0x77AC5018L,0L}};
        uint32_t l_1476 = 0x6680728DL;
        int i, j;
        (*l_1461) &= (((4294967295UL != ((p_17 >= (((safe_mod_func_uint8_t_u_u(0x9AL, ((l_1464 == l_1464) || (+(((*l_1465) = (void*)0) != (void*)0))))) , (((safe_lshift_func_int16_t_s_u(((((safe_div_func_uint64_t_u_u((***p_2019->g_1190), (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((+p_16), 0x7BE31183L)), p_2019->g_125)))) | l_1475[3][0]) || l_1476) == 0UL), 13)) ^ (*p_2019->g_820)) , 1L)) , l_1475[3][0])) && p_16)) | (*p_2019->g_812)) != p_15);
        (*p_2019->g_197) = &l_1475[3][0];
    }
    else
    { /* block id: 702 */
        uint32_t l_1485 = 0x0FA1E298L;
        uint64_t ****l_1505 = &p_2019->g_1190;
        int64_t *l_1508 = (void*)0;
        uint32_t *l_1509 = &p_2019->g_474;
        int32_t *l_1510[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint64_t *l_1515[10] = {&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516,&p_2019->g_1516};
        uint16_t *l_1529 = &p_2019->g_58;
        int8_t *l_1530 = &p_2019->g_294;
        uint16_t l_1593[8][4] = {{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL}};
        int32_t *l_1731 = &p_2019->g_517;
        int8_t l_1831 = 0x45L;
        int32_t l_1836[3][2] = {{5L,5L},{5L,5L},{5L,5L}};
        int i, j;
        for (p_2019->g_58 = 0; (p_2019->g_58 <= 7); p_2019->g_58 += 1)
        { /* block id: 705 */
            uint16_t l_1486 = 0xB131L;
            int i;
            for (p_2019->g_561 = 0; p_2019->g_561 < 1; p_2019->g_561 += 1)
            {
                p_2019->g_254[p_2019->g_561] = &p_2019->g_255;
            }
            p_15 = ((p_2019->g_71[(p_2019->g_58 + 1)] >= (safe_add_func_int64_t_s_s(((*p_2019->g_812) = (safe_add_func_int32_t_s_s(p_2019->g_721[p_2019->g_58], (safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((*l_1461) = l_1485), p_17)), 0x16D572D7L))))), (p_16 == (((*l_1459) = p_15) , 0xD5L))))) , ((((l_1486 , (void*)0) != (void*)0) < l_1485) , (*l_1461)));
            (*p_2019->g_197) = &p_15;
            for (p_2019->g_125 = 0; p_2019->g_125 < 6; p_2019->g_125 += 1)
            {
                for (p_2019->g_226 = 0; p_2019->g_226 < 7; p_2019->g_226 += 1)
                {
                    l_1460[p_2019->g_125][p_2019->g_226] = 1UL;
                }
            }
        }
        l_1511 |= ((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(((*p_2019->g_812) = p_17), (safe_div_func_int64_t_s_s(((((*l_1509) &= (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x0FB22AD0L, (p_16 ^ (+((((*p_2019->g_820) < ((safe_div_func_int64_t_s_s((p_2019->g_226 = (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((*l_1461) , (safe_sub_func_int64_t_s_s(((void*)0 == l_1505), ((safe_div_func_int64_t_s_s((*l_1461), p_15)) | p_16)))), l_1485)), p_2019->g_561))), p_17)) <= l_1485)) || 4294967294UL) , p_2019->g_1434))))), 6))) ^ 1L) == p_17), l_1485)))), p_2019->g_208)) && l_1485);
        if (((p_16 |= (safe_div_func_int64_t_s_s((!0x44EDAFDC25CF24C1L), l_1514))) >= ((((p_2019->g_1516 = (!(&p_2019->g_254[0] != &p_2019->g_254[0]))) , p_17) < (safe_add_func_int8_t_s_s(((*l_1530) &= (((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((++(*l_1509)) < (safe_lshift_func_uint8_t_u_u(((p_17 <= 0xECD76345L) < (safe_mul_func_int8_t_s_s(((((void*)0 == l_1529) <= (-9L)) != p_17), 0x73L))), 4))), 0x2CL)), (*l_1461))) ^ (*l_1461)) < p_15)), (*l_1461)))) | p_15)))
        { /* block id: 722 */
            int16_t **l_1535 = (void*)0;
            int16_t ***l_1534 = &l_1535;
            int16_t ****l_1533[9] = {&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534,&l_1534};
            int32_t l_1563 = 1L;
            int32_t l_1564 = 0L;
            int32_t l_1566 = (-3L);
            int32_t l_1570 = (-1L);
            int32_t l_1581 = 1L;
            int32_t l_1590 = 0x6C25DF4AL;
            int i;
            for (p_2019->g_158 = 7; (p_2019->g_158 == 24); p_2019->g_158 = safe_add_func_int8_t_s_s(p_2019->g_158, 9))
            { /* block id: 725 */
                p_15 |= (l_1533[4] == p_2019->g_1536);
            }
            for (p_2019->g_617 = 0; (p_2019->g_617 <= 3); p_2019->g_617 += 1)
            { /* block id: 730 */
                int8_t **l_1559 = &l_1530;
                int32_t l_1565 = 0x6350F78EL;
                int32_t l_1575 = 0x781DA2ACL;
                int32_t l_1576 = 3L;
                int32_t l_1580 = 0x6CF493C1L;
                int32_t l_1585 = 2L;
                int32_t l_1586 = 0x1EB6D126L;
                int32_t l_1587 = 8L;
                int32_t l_1589 = (-1L);
                int32_t l_1592[5][9] = {{0x34A392C5L,(-8L),1L,(-8L),0x34A392C5L,0x34A392C5L,(-8L),1L,(-8L)},{0x34A392C5L,(-8L),1L,(-8L),0x34A392C5L,0x34A392C5L,(-8L),1L,(-8L)},{0x34A392C5L,(-8L),1L,(-8L),0x34A392C5L,0x34A392C5L,(-8L),1L,(-8L)},{0x34A392C5L,(-8L),1L,(-8L),0x34A392C5L,0x34A392C5L,(-8L),1L,(-8L)},{0x34A392C5L,(-8L),1L,(-8L),0x34A392C5L,0x34A392C5L,(-8L),1L,(-8L)}};
                uint32_t *l_1610 = &l_1460[1][0];
                int16_t *l_1633 = &p_2019->g_654;
                int64_t *l_1638 = &p_2019->g_616;
                uint8_t l_1682 = 0x1CL;
                int i, j;
                (*p_2019->g_197) = &l_1511;
            }
            for (p_2019->g_654 = 0; (p_2019->g_654 <= 11); ++p_2019->g_654)
            { /* block id: 787 */
                (*p_2019->g_197) = &p_15;
            }
            for (p_2019->g_158 = 0; p_2019->g_158 < 9; p_2019->g_158 += 1)
            {
                l_1533[p_2019->g_158] = &l_1534;
            }
        }
        else
        { /* block id: 791 */
            int64_t l_1691 = 0x3882F58453FD7E45L;
            int32_t l_1719 = 1L;
            uint8_t l_1730[7] = {248UL,248UL,248UL,248UL,248UL,248UL,248UL};
            int32_t l_1832 = 0x309701ABL;
            int32_t l_1833[3];
            int32_t l_1835 = 0L;
            uint8_t l_1837 = 0xD1L;
            int i;
            for (i = 0; i < 3; i++)
                l_1833[i] = 1L;
            for (p_2019->g_1457 = 0; (p_2019->g_1457 <= 3); p_2019->g_1457 += 1)
            { /* block id: 794 */
                int16_t **l_1688 = &p_2019->g_820;
                int16_t ***l_1687 = &l_1688;
                int16_t **l_1690[2][7][9];
                int16_t ***l_1689 = &l_1690[1][0][3];
                int32_t l_1698 = (-9L);
                int16_t l_1718 = 0x4B40L;
                uint32_t **l_1752 = &l_1509;
                uint8_t *l_1760 = (void*)0;
                uint32_t **l_1773 = &p_2019->g_1708;
                int32_t l_1787 = 0L;
                uint16_t *l_1808 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 9; k++)
                            l_1690[i][j][k] = &p_2019->g_820;
                    }
                }
                (*l_1689) = ((*l_1687) = (void*)0);
                (*l_1461) = ((l_1691 < ((safe_unary_minus_func_uint8_t_u((((1UL == ((*p_2019->g_820) , (safe_unary_minus_func_int64_t_s((((*l_1529) = (l_1691 || 0x0F21L)) & (p_2019->g_1699 = (0xEBL & (0x46C3E65A307731E6L | (0x5EL >= (safe_rshift_func_int8_t_s_s((((void*)0 != p_2019->g_1696) , p_2019->g_1434), l_1698))))))))))) < p_2019->g_476[4][0]) , l_1698))) < 0x15C0B96DL)) < 0xAC81E865C5080A6EL);
                for (l_1598 = 3; (l_1598 >= 0); l_1598 -= 1)
                { /* block id: 802 */
                    return p_16;
                }
                for (p_2019->g_124 = 8; (p_2019->g_124 >= 0); p_2019->g_124 -= 1)
                { /* block id: 807 */
                    int64_t l_1717 = 0L;
                    int32_t l_1729 = 1L;
                    uint8_t **l_1767[2][8][2] = {{{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760}},{{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760},{(void*)0,&l_1760}}};
                    uint8_t ***l_1766[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j, k;
                    for (p_2019->g_654 = 7; (p_2019->g_654 >= 0); p_2019->g_654 -= 1)
                    { /* block id: 810 */
                        uint32_t *l_1706[6][3][4] = {{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}},{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}},{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}},{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}},{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}},{{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]},{&l_1460[5][3],&p_2019->g_295[1][0][2],(void*)0,&p_2019->g_295[1][0][2]}}};
                        uint32_t **l_1705 = &l_1706[0][1][1];
                        uint32_t ***l_1704[3][2] = {{&l_1705,&l_1705},{&l_1705,&l_1705},{&l_1705,&l_1705}};
                        int16_t l_1711 = (-3L);
                        int32_t ***l_1716 = (void*)0;
                        int i, j, k;
                        l_1719 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_1698 , ((p_2019->g_1707[1][0] = (void*)0) == &p_2019->g_1708)) && (((p_16 , ((((*p_2019->g_255) = ((p_2019->g_71[(p_2019->g_1457 + 2)] = (safe_mul_func_uint8_t_u_u((*l_1461), l_1711))) ^ (safe_mod_func_int64_t_s_s((*p_2019->g_812), ((((safe_mod_func_int16_t_s_s(((((void*)0 != l_1716) > 0x60L) , (*l_1461)), l_1717)) | l_1718) >= p_17) , (*p_2019->g_255)))))) ^ 18446744073709551615UL) < p_16)) > (*l_1461)) ^ 1L)), p_16)), 0x13L));
                        l_1698 &= ((*l_1461) |= ((l_1719 = (((*p_2019->g_1637) >= ((safe_add_func_uint32_t_u_u(((**l_1549) ^= ((void*)0 != &p_2019->g_196[1][1])), ((p_16 || p_17) & p_16))) < l_1717)) || ((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(p_17, (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u(((l_1729 != l_1691) & l_1730[6]))), 10)))) == l_1730[6]), (*p_2019->g_1637))) != 0xBD5038C79EF9A912L))) == p_15));
                    }
                    l_1510[p_2019->g_1457][(p_2019->g_1457 + 4)] = l_1731;
                    if ((safe_sub_func_int64_t_s_s((*p_2019->g_812), ((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((&p_2019->g_1190 == &p_2019->g_1190), (safe_add_func_uint16_t_u_u(p_15, (safe_rshift_func_int16_t_s_u(((*p_2019->g_820) ^= (safe_add_func_uint8_t_u_u(((((void*)0 != (*p_2019->g_1190)) >= (safe_mod_func_uint32_t_u_u(((*p_2019->g_1637)--), 0x3D21E148L))) < ((p_15 | (0x6DL ^ p_17)) , 0x6D757ECF5713AE7DL)), p_15))), p_17)))))), 0x2EL)), 4294967294UL)) , p_17))))
                    { /* block id: 823 */
                        uint32_t ***l_1753 = &l_1752;
                        int32_t *l_1761 = &p_2019->g_1139;
                        int32_t l_1762 = 0L;
                        (*l_1461) = (safe_lshift_func_int8_t_s_u((((*l_1753) = l_1752) != (((safe_lshift_func_int16_t_s_s(p_17, ((((*l_1529) = 0xD0AEL) == ((((*l_1509) = (((safe_mod_func_uint8_t_u_u((((*l_1761) = (((p_2019->g_693 && (&p_2019->g_196[1][1] != (((255UL >= l_1719) <= ((0x7B3E500A34CAE101L < ((**p_2019->g_1697) |= (safe_sub_func_int32_t_s_s(p_2019->g_20, l_1730[6])))) != p_15)) , l_1760))) != (*l_1461)) ^ p_2019->g_121)) , 0x74L), p_15)) , p_17) != l_1698)) , l_1762) < 4294967295UL)) & p_2019->g_476[9][0]))) <= (*p_2019->g_1637)) , (void*)0)), 5));
                        (*l_1461) |= l_1718;
                        (*l_1731) = (p_15 > p_17);
                        (*l_1731) ^= (6L != ((safe_unary_minus_func_int16_t_s(p_15)) , (safe_sub_func_int32_t_s_s((4294967295UL > (((((p_16 == p_2019->g_687[4][4]) && (((l_1766[7] == (void*)0) < ((++(***l_1753)) > ((~((((l_1762 = (l_1719 |= ((l_1772[2][0] , (void*)0) == l_1773))) < p_2019->g_1774) , l_1762) , l_1691)) > (***p_2019->g_1190)))) > p_17)) >= 8L) & 0xF7B0L) ^ (-2L))), l_1698))));
                    }
                    else
                    { /* block id: 836 */
                        int8_t l_1788 = 0x7DL;
                        int32_t l_1817 = 1L;
                        (*l_1731) ^= ((*l_1461) = ((l_1788 &= (safe_mod_func_uint64_t_u_u(l_1698, (safe_mul_func_uint8_t_u_u((!(safe_sub_func_int64_t_s_s(p_16, (safe_rshift_func_uint8_t_u_s(p_2019->g_616, (l_1787 = (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((*p_2019->g_1637), 0x7D33DA7BL)), ((*l_1530) = l_1719))))))))), p_2019->g_1027))))) , p_17));
                        if (p_2019->g_1789)
                            continue;
                        (*l_1731) = ((safe_add_func_uint32_t_u_u(((*l_1550) = ((safe_div_func_uint32_t_u_u((*p_2019->g_1637), p_16)) > ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((l_1730[6] > (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_mod_func_uint16_t_u_u((((*l_1509) |= (((void*)0 != &l_1772[2][0]) , (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((l_1808 == &l_1593[7][3]), (safe_mod_func_int8_t_s_s((((*l_1461) ^= (--(*p_2019->g_1342))) , ((((((*p_2019->g_1342) = (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((p_2019->g_657 = l_1817) && ((255UL <= l_1817) ^ 0x3E69D2B5L)), (*p_2019->g_820))) ^ p_2019->g_631), (*p_2019->g_1637)))) , p_15) || p_16) != 0x0FA4L) , 0L)), p_16)))) | p_16), 247UL)))) | 0x9AB5CEE4L), l_1719)) < l_1787) , (*p_2019->g_812)) ^ (***p_2019->g_1696)) == p_2019->g_1272), p_17)), l_1691))) ^ (*p_2019->g_820)), 0x05D2L)), 11)) <= l_1691))), 0x25635A29L)) > l_1817);
                    }
                    (*l_1461) = (safe_sub_func_uint8_t_u_u((((p_17 < 0x51FB419EL) , ((**l_1549) = ((safe_mul_func_uint8_t_u_u(l_1718, (safe_unary_minus_func_uint64_t_u((0x560CD59CL | (+(safe_lshift_func_int8_t_s_u((p_16 ^ ((*p_2019->g_1637)--)), l_1691)))))))) < (safe_mod_func_uint64_t_u_u(((void*)0 != (*p_2019->g_1696)), ((safe_mod_func_uint8_t_u_u((p_16 , p_16), 7UL)) && (***p_2019->g_1696))))))) < l_1691), 1L));
                }
            }
            (*l_1731) = ((*l_1461) = l_1831);
            l_1837--;
        }
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_20 p_2019->g_62 p_2019->g_71 p_2019->g_70 p_2019->g_18 p_2019->g_68 p_2019->g_58 p_2019->g_112 p_2019->g_69 p_2019->g_125 p_2019->g_124 p_2019->g_197 p_2019->g_158 p_2019->g_226 p_2019->g_254 p_2019->g_208 p_2019->g_255 p_2019->g_288 p_2019->g_295 p_2019->g_332 p_2019->g_122 p_2019->g_121 p_2019->g_196 p_2019->g_293 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_418 p_2019->g_292 p_2019->g_45 p_2019->g_517 p_2019->g_658 p_2019->g_653 p_2019->g_567 p_2019->g_693 p_2019->g_511 p_2019->g_618 p_2019->g_632 p_2019->g_422 p_2019->g_687 p_2019->g_805 p_2019->g_819 p_2019->g_820 p_2019->g_812 p_2019->g_616 p_2019->g_721 p_2019->g_969 p_2019->g_654 p_2019->g_487 p_2019->g_1027 p_2019->g_1010 p_2019->g_934 p_2019->g_1070 p_2019->g_898 p_2019->g_1025 p_2019->g_1139 p_2019->g_1190 p_2019->g_1316 p_2019->g_1342 p_2019->g_1434
 * writes: p_2019->g_45 p_2019->g_58 p_2019->g_62 p_2019->g_71 p_2019->g_68 p_2019->g_112 p_2019->g_69 p_2019->g_125 p_2019->g_158 p_2019->g_196 p_2019->g_208 p_2019->g_226 p_2019->g_276 p_2019->g_288 p_2019->g_295 p_2019->g_255 p_2019->g_254 p_2019->g_332 p_2019->g_418 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_487 p_2019->g_511 p_2019->g_517 p_2019->g_124 p_2019->g_658 p_2019->g_567 p_2019->g_693 p_2019->g_721 p_2019->g_632 p_2019->g_595 p_2019->g_292 p_2019->g_617 p_2019->g_422 p_2019->g_812 p_2019->g_819 p_2019->g_197 p_2019->g_616 p_2019->g_70 p_2019->g_654 p_2019->g_1027 p_2019->g_1010 p_2019->g_1070 p_2019->g_121 p_2019->g_820 p_2019->g_898 p_2019->g_1025 p_2019->g_1190 p_2019->g_687 p_2019->g_1342 p_2019->g_122 p_2019->g_1434
 */
int16_t  func_25(uint8_t  p_26, uint32_t  p_27, int32_t  p_28, int32_t  p_29, struct S0 * p_2019)
{ /* block id: 6 */
    int32_t *l_40[6] = {&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20};
    int32_t l_41 = 0x2E5F0E77L;
    int8_t *l_44 = &p_2019->g_45;
    uint16_t *l_57 = &p_2019->g_58;
    int32_t *l_281[3][6][5] = {{{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20}},{{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20}},{{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20}}};
    int32_t **l_280 = &l_281[2][2][2];
    uint64_t **l_1313[7][10] = {{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255},{(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255,&p_2019->g_255,(void*)0,(void*)0,&p_2019->g_255}};
    int32_t **l_1319 = &p_2019->g_276;
    uint32_t **l_1336[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1346 = 0x0706F414L;
    uint64_t l_1348[1];
    uint16_t l_1366 = 0x551AL;
    uint16_t l_1388[2];
    int32_t *l_1430 = &p_2019->g_517;
    int32_t *l_1431 = &p_2019->g_62;
    int32_t *l_1432 = &p_2019->g_687[7][6];
    int32_t *l_1433[8][5] = {{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62},{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_62,&p_2019->g_1025,&p_2019->g_62}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1348[i] = 18446744073709551615UL;
    for (i = 0; i < 2; i++)
        l_1388[i] = 65535UL;
    if ((safe_sub_func_uint64_t_u_u(func_33(func_36(l_40[5], ((l_41 , func_42((!(((6L != (0x22L && ((*l_44) = p_2019->g_20))) & (((((((*l_280) = func_46(((*l_280) = func_49(p_29, (func_53(((((*l_57) = (((void*)0 == l_44) & (safe_div_func_int64_t_s_s(l_41, p_26)))) , 18446744073709551615UL) , p_28), p_2019) | p_29), l_41, p_2019)), l_44, p_2019)) != (void*)0) != l_41) , 254UL) , &p_28) != &p_2019->g_20)) , p_2019->g_418)), p_2019)) & l_41), p_27, p_2019), l_41, p_2019), p_2019->g_618)))
    { /* block id: 606 */
        int32_t *l_1300 = &p_2019->g_1025;
        int8_t **l_1318 = (void*)0;
        uint64_t l_1320 = 0x77A188565F9059F1L;
        uint32_t *l_1321 = &p_2019->g_71[3];
        int32_t l_1344 = (-1L);
        int32_t l_1345 = (-1L);
        int32_t l_1347 = (-1L);
        int32_t *l_1375 = (void*)0;
        int32_t *l_1376 = &p_2019->g_62;
        int32_t *l_1377 = &l_1347;
        int32_t *l_1378 = &l_41;
        int32_t *l_1379 = &p_2019->g_687[7][6];
        int32_t *l_1380 = (void*)0;
        int32_t *l_1381 = &p_2019->g_687[4][0];
        int32_t *l_1382 = (void*)0;
        int32_t *l_1383 = &p_2019->g_632;
        int32_t *l_1384 = &p_2019->g_517;
        int32_t *l_1385 = &l_41;
        int32_t *l_1386 = &p_2019->g_687[2][8];
        int32_t *l_1387[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int i, j;
        if ((((safe_mul_func_uint16_t_u_u((((((*l_1321) &= (((*p_2019->g_820) = ((void*)0 == l_1300)) <= (+(((*p_2019->g_812) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_1313[5][0] == l_1313[3][6]), ((((((safe_add_func_uint8_t_u_u(l_41, (((p_2019->g_1316 == l_1318) , l_1300) != l_1300))) < 65534UL) , 65534UL) && p_27) , l_1319) == &l_1300))), (*l_1300))) > p_29), l_1320)) || 0x39L), p_26)) < (*l_1300)), (*l_1300))), (*l_1300)))) , (*l_1300))))) | (*l_1300)) , (*p_2019->g_820)) != p_2019->g_332), p_27)) , p_29) <= 0UL))
        { /* block id: 610 */
            uint32_t **l_1326 = &l_1321;
            int32_t l_1329 = 1L;
            int32_t *l_1332 = &p_2019->g_687[0][4];
            uint16_t l_1333[10];
            uint32_t **l_1338 = (void*)0;
            uint32_t **l_1339 = (void*)0;
            uint32_t *l_1341 = &p_2019->g_721[4];
            uint32_t **l_1340[9][10][2] = {{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}},{{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341},{(void*)0,&l_1341}}};
            int32_t *l_1343[5] = {&p_2019->g_632,&p_2019->g_632,&p_2019->g_632,&p_2019->g_632,&p_2019->g_632};
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1333[i] = 65534UL;
            (*l_1332) = (safe_mul_func_int8_t_s_s(0x39L, (((p_28 , (safe_div_func_int64_t_s_s(((p_2019->g_567 = ((*l_1300) |= p_2019->g_1027)) & ((*p_2019->g_812) > ((((*l_1326) = &p_2019->g_474) == &p_27) , ((0x4AL & (safe_add_func_int32_t_s_s(l_1329, ((safe_sub_func_uint16_t_u_u(p_2019->g_125, 0xEA3FL)) || (*p_2019->g_812))))) , l_1329)))), p_29))) > (*p_2019->g_812)) < p_2019->g_898)));
            (*l_1332) |= ((l_1333[7] , l_1321) == (p_2019->g_1342 = (((*l_1300) = (safe_mul_func_uint8_t_u_u(((l_1336[3] == (void*)0) <= (((safe_unary_minus_func_int16_t_s((((p_29 > p_27) , p_28) >= ((*l_1300) , ((0x4E74L < (-1L)) & 255UL))))) != 0x3400C3ADF76B795DL) > p_2019->g_693)), (*l_1300)))) , l_1300)));
            l_1348[0]--;
            l_1332 = (void*)0;
        }
        else
        { /* block id: 620 */
            uint8_t l_1371 = 0x6BL;
            int32_t l_1372[10][10] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}};
            int i, j;
            for (p_2019->g_288 = 1; (p_2019->g_288 >= 40); p_2019->g_288 = safe_add_func_uint8_t_u_u(p_2019->g_288, 5))
            { /* block id: 623 */
                uint64_t l_1362 = 0xD4603B22CCDB510AL;
                for (p_2019->g_292 = 15; (p_2019->g_292 < (-2)); --p_2019->g_292)
                { /* block id: 626 */
                    int64_t l_1365 = 0x0F28DE4E7DCDEB5CL;
                    (*l_1319) = ((*p_2019->g_197) = &p_2019->g_62);
                    if ((p_28 > p_26))
                    { /* block id: 629 */
                        int32_t *l_1355 = &p_2019->g_567;
                        int32_t *l_1356 = &p_2019->g_1025;
                        int32_t *l_1357 = &p_2019->g_567;
                        int32_t *l_1358 = &l_1344;
                        int32_t *l_1359 = (void*)0;
                        int32_t *l_1360 = &p_2019->g_567;
                        int32_t *l_1361[1][5] = {{&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_687[7][6],&p_2019->g_687[7][6]}};
                        int i, j;
                        ++l_1362;
                        return l_1365;
                    }
                    else
                    { /* block id: 632 */
                        return (*p_2019->g_820);
                    }
                }
            }
            p_2019->g_517 ^= (l_1366 < (safe_rshift_func_int16_t_s_u((((*p_2019->g_812) != ((((l_1371 , (-2L)) ^ ((*l_57) &= ((l_1372[3][8] = p_27) >= (*p_2019->g_820)))) , 0x03E9L) != (*l_1300))) >= ((safe_add_func_uint32_t_u_u((*l_1300), p_27)) || 4294967295UL)), p_2019->g_45)));
        }
        (*l_1300) = (*l_1300);
        l_1388[1]--;
        (*l_1378) = (safe_mul_func_int16_t_s_s((((void*)0 != l_1313[5][0]) , p_28), (~p_2019->g_618)));
    }
    else
    { /* block id: 644 */
        uint16_t l_1393[7] = {3UL,0UL,3UL,3UL,0UL,3UL,3UL};
        uint16_t l_1402 = 3UL;
        int i;
        for (p_2019->g_632 = 5; (p_2019->g_632 >= 0); p_2019->g_632 -= 1)
        { /* block id: 647 */
            int32_t l_1394 = 1L;
            if (p_29)
                break;
            for (p_2019->g_226 = 0; (p_2019->g_226 <= 0); p_2019->g_226 += 1)
            { /* block id: 651 */
                int i, j;
                p_2019->g_687[p_2019->g_632][(p_2019->g_226 + 5)] = p_2019->g_687[(p_2019->g_226 + 6)][(p_2019->g_632 + 2)];
                if (p_2019->g_687[(p_2019->g_226 + 6)][(p_2019->g_632 + 2)])
                    break;
                for (p_2019->g_125 = 0; (p_2019->g_125 <= 0); p_2019->g_125 += 1)
                { /* block id: 656 */
                    int16_t l_1395 = (-5L);
                    uint8_t *l_1403 = &p_2019->g_196[1][1];
                    int64_t **l_1404 = (void*)0;
                    int64_t ***l_1405 = &l_1404;
                    int64_t **l_1407 = &p_2019->g_812;
                    int64_t ***l_1406 = &l_1407;
                    int i, j, k;
                    for (p_27 = 0; (p_27 <= 2); p_27 += 1)
                    { /* block id: 659 */
                        l_1393[4] ^= p_29;
                    }
                    for (p_2019->g_898 = 0; (p_2019->g_898 >= 0); p_2019->g_898 -= 1)
                    { /* block id: 664 */
                        if (l_1394)
                            break;
                        return l_1395;
                    }
                    (*p_2019->g_197) = ((safe_sub_func_int64_t_s_s(5L, ((0L > (safe_mod_func_uint32_t_u_u(l_1393[4], ((0x21194AF5E84F1637L >= (((*l_1403) = l_1402) == ((*l_44) ^= p_2019->g_687[(p_2019->g_226 + 6)][(p_2019->g_632 + 2)]))) || ((((*l_1405) = l_1404) == ((*l_1406) = &p_2019->g_812)) , (safe_mod_func_int64_t_s_s((p_2019->g_294 != l_1394), p_27))))))) , p_27))) , l_281[p_2019->g_226][(p_2019->g_125 + 5)][(p_2019->g_226 + 2)]);
                    p_29 = 9L;
                }
            }
        }
        for (p_2019->g_122 = 14; (p_2019->g_122 == (-27)); --p_2019->g_122)
        { /* block id: 679 */
            uint32_t *l_1426[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_1427 = (-9L);
            int i;
            (*p_2019->g_197) = func_49(((*p_2019->g_1342) ^= (safe_rshift_func_uint8_t_u_s(p_2019->g_474, p_28))), (p_2019->g_422[7][4][0] , (safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((p_29 < ((safe_rshift_func_uint8_t_u_u((((*l_44) &= (-7L)) | (0xBDB5333C54B14838L > (!0x2461014E2EF228D6L))), 1)) || ((safe_sub_func_int32_t_s_s(p_2019->g_112, ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((++p_2019->g_658) , ((*p_2019->g_812) <= p_26)), 0x9E0E09EAL)) | p_2019->g_898), p_28)) , p_26))) & 0x4643D7726D946C90L))), l_1402)) == l_1393[4]), p_27))), l_1393[4], p_2019);
        }
        return l_1348[0];
    }
    ++p_2019->g_1434;
    return (*p_2019->g_820);
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_69 p_2019->g_45 p_2019->g_474 p_2019->g_517 p_2019->g_1025 p_2019->g_616 p_2019->g_196 p_2019->g_1190 p_2019->g_254 p_2019->g_255 p_2019->g_158 p_2019->g_812 p_2019->g_295 p_2019->g_332 p_2019->g_122 p_2019->g_654 p_2019->g_197 p_2019->g_658 p_2019->g_418 p_2019->g_62
 * writes: p_2019->g_69 p_2019->g_62 p_2019->g_474 p_2019->g_112 p_2019->g_58 p_2019->g_1025 p_2019->g_1190 p_2019->g_196 p_2019->g_517 p_2019->g_158 p_2019->g_487 p_2019->g_1010 p_2019->g_292 p_2019->g_1070 p_2019->g_658 p_2019->g_418 p_2019->g_616
 */
uint64_t  func_33(int32_t  p_34, int32_t  p_35, struct S0 * p_2019)
{ /* block id: 514 */
    int32_t *l_1140 = (void*)0;
    int32_t *l_1141 = &p_2019->g_1025;
    int32_t *l_1142 = &p_2019->g_62;
    int32_t *l_1143 = &p_2019->g_517;
    int32_t *l_1144 = &p_2019->g_517;
    int32_t *l_1145 = &p_2019->g_62;
    int32_t *l_1146 = &p_2019->g_567;
    int32_t *l_1147[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1148 = 0x1E3BBAA3L;
    int32_t l_1149 = 0x4B7C68FAL;
    uint32_t l_1150[1][6];
    uint8_t *l_1174 = &p_2019->g_196[1][1];
    uint8_t **l_1173[9];
    uint8_t ***l_1172 = &l_1173[7];
    int32_t l_1201 = 0x134025E7L;
    int16_t **l_1249 = &p_2019->g_820;
    int16_t ***l_1248 = &l_1249;
    uint32_t l_1254 = 4294967295UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1150[i][j] = 5UL;
    }
    for (i = 0; i < 9; i++)
        l_1173[i] = &l_1174;
    --l_1150[0][1];
    for (p_2019->g_69 = 0; (p_2019->g_69 != (-27)); p_2019->g_69 = safe_sub_func_int32_t_s_s(p_2019->g_69, 1))
    { /* block id: 518 */
        uint32_t *l_1163 = (void*)0;
        uint32_t *l_1164 = &p_2019->g_474;
        int32_t l_1169 = 0x5DBFDE9AL;
        uint8_t ***l_1170 = (void*)0;
        uint8_t ****l_1171 = &l_1170;
        uint8_t ****l_1175 = &l_1172;
        uint32_t *l_1178 = &p_2019->g_112;
        int8_t l_1179 = 0x47L;
        uint64_t ***l_1188 = &p_2019->g_254[0];
        int32_t l_1203 = 0x478C9B22L;
        int32_t l_1206 = 0L;
        int32_t l_1212 = 0x1D095891L;
        int32_t l_1213 = 0x27F8D096L;
        int32_t l_1214 = (-1L);
        int32_t l_1215 = 0x5B5E03ECL;
        int16_t ***l_1246 = (void*)0;
        int64_t l_1276 = (-1L);
        int32_t l_1277 = (-6L);
        int32_t l_1278 = 0x47BE2D16L;
        int32_t l_1279 = 8L;
        int32_t l_1280 = (-1L);
        int32_t l_1281 = 1L;
        int32_t l_1282 = (-6L);
        int32_t l_1291[7] = {0x01004BA3L,0x01004BA3L,0x01004BA3L,0x01004BA3L,0x01004BA3L,0x01004BA3L,0x01004BA3L};
        int64_t l_1292 = 0x315746A7F63F8B44L;
        int32_t l_1293[7] = {0L,0x75991679L,0L,0L,0x75991679L,0L,0L};
        int16_t l_1294 = 0x1B86L;
        uint32_t l_1295 = 4294967293UL;
        int i;
        if ((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_2019->g_45, (safe_add_func_uint8_t_u_u(((+((*l_1145) = 0x0120DCAEL)) ^ (l_1179 &= (((safe_div_func_uint32_t_u_u(((*l_1164)++), (((safe_add_func_int8_t_s_s(7L, (((*l_1178) = (((l_1169 , ((((((*l_1171) = (p_34 , l_1170)) != ((*l_1175) = l_1172)) ^ (!((safe_sub_func_int32_t_s_s(3L, 0x3CB67A80L)) != (*l_1143)))) <= 0x0FEF762DL) == 9UL)) , (*l_1141)) >= p_35)) < 0x0A8943F3L))) , l_1169) | 0xD7987C16FF34A568L))) ^ 0xA0782F66L) , (-3L)))), p_34)))), l_1169)))
        { /* block id: 525 */
            int32_t l_1191 = 0L;
            uint64_t ***l_1192 = &p_2019->g_254[0];
            int32_t l_1199 = (-9L);
            int32_t l_1200 = 0x311DDCBFL;
            int32_t l_1205[1][8] = {{1L,1L,1L,1L,1L,1L,1L,1L}};
            uint32_t l_1216 = 0UL;
            uint8_t l_1260[9][5] = {{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL},{0xD6L,0xD6L,0x5FL,0xDAL,255UL}};
            uint16_t l_1283 = 65535UL;
            int32_t l_1289[7][10] = {{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL},{0x353D4384L,0x353D4384L,0x0BDE229DL,0x7A7403E5L,0x41951802L,0x7A7403E5L,0x0BDE229DL,0x353D4384L,0x353D4384L,0x0BDE229DL}};
            int i, j;
            if (((*l_1142) = (-4L)))
            { /* block id: 527 */
                uint16_t *l_1182 = (void*)0;
                uint16_t *l_1183 = &p_2019->g_58;
                int16_t *l_1184[4];
                int32_t l_1185 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1184[i] = &p_2019->g_422[6][1][3];
                (*l_1141) &= (safe_mod_func_uint16_t_u_u(((*l_1183) = 6UL), (l_1185 = (l_1169 &= 8L))));
                if (p_35)
                    break;
            }
            else
            { /* block id: 533 */
                uint64_t ****l_1189[10];
                int32_t l_1204 = (-1L);
                int32_t l_1209 = 0x2E7A3969L;
                int32_t l_1211[9] = {0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL,0x5A86F89EL};
                int i;
                for (i = 0; i < 10; i++)
                    l_1189[i] = &l_1188;
                if ((((((((****l_1175) ^= (safe_sub_func_uint8_t_u_u(((((p_2019->g_1190 = l_1188) != ((l_1191 , p_34) , l_1192)) , &p_2019->g_969) != &l_1173[7]), (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(l_1191, (p_35 > (safe_add_func_uint16_t_u_u(p_2019->g_616, l_1191))))), p_35)) , p_34) == p_34)))) || l_1199) , l_1191) == l_1169) >= l_1169) < 0xF524L))
                { /* block id: 536 */
                    int8_t l_1202[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
                    int16_t l_1207 = 9L;
                    int32_t l_1208 = 0L;
                    int32_t l_1210[4] = {0x7F2BFA93L,0x7F2BFA93L,0x7F2BFA93L,0x7F2BFA93L};
                    int i, j;
                    l_1216++;
                    for (p_35 = 0; (p_35 < 6); p_35 = safe_add_func_int32_t_s_s(p_35, 8))
                    { /* block id: 540 */
                        return (***p_2019->g_1190);
                    }
                }
                else
                { /* block id: 543 */
                    uint8_t l_1223 = 0x59L;
                    int16_t ****l_1247[9] = {&l_1246,&l_1246,&l_1246,&l_1246,&l_1246,&l_1246,&l_1246,&l_1246,&l_1246};
                    int i;
                    for (l_1214 = (-12); (l_1214 <= (-14)); l_1214 = safe_sub_func_uint32_t_u_u(l_1214, 1))
                    { /* block id: 546 */
                        (*l_1143) |= p_34;
                    }
                    --l_1223;
                    (*l_1144) = (((void*)0 == &p_2019->g_197) < ((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((+(!((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((*p_2019->g_812), ((((&p_2019->g_819 == (l_1248 = l_1246)) | (safe_rshift_func_int16_t_s_s(((((((((p_34 && (l_1192 != (((safe_add_func_uint32_t_u_u(4294967291UL, ((p_2019->g_1025 || p_35) || p_2019->g_295[3][5][0]))) >= 0x7C8F54BE7F887F32L) , (void*)0))) ^ p_35) , 0x185EE9F26F514648L) && p_35) >= l_1216) , &p_2019->g_254[0]) == &p_2019->g_254[0]) , p_35), 0))) || 0x17L) >= l_1254))), 0x40AA678DD34F4043L)) , (void*)0) != (void*)0), 0x1E70B85730EFA7CCL)), p_2019->g_332)) && (*p_2019->g_812)))), p_34)) || p_2019->g_122), 1L)), p_35)), p_34)) , 0x60FB3215L) , 0UL), 0x1B6108C5L)), 0x2A431EF16AA032C9L)) <= l_1199));
                }
            }
            if (p_2019->g_654)
            { /* block id: 554 */
                int32_t **l_1255 = &l_1147[6];
                (*l_1255) = ((*p_2019->g_197) = (((*p_2019->g_255) = (***p_2019->g_1190)) , &p_34));
            }
            else
            { /* block id: 558 */
                for (l_1199 = (-28); (l_1199 == (-9)); l_1199 = safe_add_func_uint8_t_u_u(l_1199, 7))
                { /* block id: 561 */
                    for (p_2019->g_1010 = 19; (p_2019->g_1010 == (-6)); p_2019->g_1010--)
                    { /* block id: 564 */
                        int32_t *l_1263 = &p_2019->g_517;
                        l_1260[0][0]++;
                        (*p_2019->g_197) = l_1263;
                    }
                }
            }
            for (p_2019->g_292 = (-4); (p_2019->g_292 == (-19)); --p_2019->g_292)
            { /* block id: 572 */
                int8_t l_1271[7][1];
                int32_t l_1274 = 1L;
                int32_t l_1275[1][6][7] = {{{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL},{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL},{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL},{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL},{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL},{0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL,0x3801FC5FL}}};
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1271[i][j] = 0x35L;
                }
                for (p_2019->g_1070 = (-27); (p_2019->g_1070 == 2); ++p_2019->g_1070)
                { /* block id: 575 */
                    uint16_t l_1268 = 0x8A5FL;
                    int32_t l_1273[2];
                    int32_t **l_1286 = &l_1145;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1273[i] = 0L;
                    ++l_1268;
                    ++l_1283;
                    (*l_1143) = ((&p_2019->g_969 == (void*)0) == 1L);
                    (*l_1286) = ((*p_2019->g_197) = &l_1148);
                }
            }
            for (p_2019->g_658 = 0; (p_2019->g_658 != 44); p_2019->g_658 = safe_add_func_uint8_t_u_u(p_2019->g_658, 2))
            { /* block id: 585 */
                uint16_t l_1290[8] = {0xFA79L,0xFA79L,0xFA79L,0xFA79L,0xFA79L,0xFA79L,0xFA79L,0xFA79L};
                int i;
                for (p_2019->g_418 = 1; (p_2019->g_418 >= 0); p_2019->g_418 -= 1)
                { /* block id: 588 */
                    (*l_1142) &= 0x605C6ECDL;
                    if (l_1203)
                        continue;
                    if (l_1279)
                        continue;
                }
                if (l_1289[2][4])
                    break;
                return l_1290[3];
            }
        }
        else
        { /* block id: 596 */
            for (p_2019->g_616 = 3; (p_2019->g_616 >= 0); p_2019->g_616 -= 1)
            { /* block id: 599 */
                return (***p_2019->g_1190);
            }
        }
        l_1295--;
    }
    return (*p_2019->g_255);
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_197 p_2019->g_1139
 * writes: p_2019->g_487 p_2019->g_276
 */
int32_t  func_36(int32_t * p_37, int32_t  p_38, int32_t  p_39, struct S0 * p_2019)
{ /* block id: 510 */
    int32_t **l_1138 = &p_2019->g_276;
    (*l_1138) = ((*p_2019->g_197) = (void*)0);
    return p_2019->g_1139;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_474 p_2019->g_70 p_2019->g_196 p_2019->g_255 p_2019->g_58 p_2019->g_122 p_2019->g_292 p_2019->g_294 p_2019->g_45 p_2019->g_517 p_2019->g_658 p_2019->g_295 p_2019->g_418 p_2019->g_653 p_2019->g_62 p_2019->g_567 p_2019->g_693 p_2019->g_511 p_2019->g_158 p_2019->g_618 p_2019->g_288 p_2019->g_632 p_2019->g_422 p_2019->g_71 p_2019->g_687 p_2019->g_805 p_2019->g_819 p_2019->g_820 p_2019->g_69 p_2019->g_812 p_2019->g_616 p_2019->g_18 p_2019->g_476 p_2019->g_721 p_2019->g_125 p_2019->g_112 p_2019->g_124 p_2019->g_20 p_2019->g_68 p_2019->g_197 p_2019->g_226 p_2019->g_254 p_2019->g_208 p_2019->g_969 p_2019->g_654 p_2019->g_426 p_2019->g_293 p_2019->g_487 p_2019->g_332 p_2019->g_121 p_2019->g_420 p_2019->g_1027 p_2019->g_1010 p_2019->g_934 p_2019->g_1070 p_2019->g_898 p_2019->g_1025
 * writes: p_2019->g_474 p_2019->g_69 p_2019->g_196 p_2019->g_158 p_2019->g_62 p_2019->g_511 p_2019->g_517 p_2019->g_58 p_2019->g_124 p_2019->g_658 p_2019->g_567 p_2019->g_693 p_2019->g_288 p_2019->g_721 p_2019->g_632 p_2019->g_595 p_2019->g_292 p_2019->g_45 p_2019->g_617 p_2019->g_422 p_2019->g_812 p_2019->g_294 p_2019->g_819 p_2019->g_197 p_2019->g_616 p_2019->g_71 p_2019->g_70 p_2019->g_125 p_2019->g_68 p_2019->g_112 p_2019->g_208 p_2019->g_226 p_2019->g_276 p_2019->g_487 p_2019->g_654 p_2019->g_426 p_2019->g_295 p_2019->g_255 p_2019->g_254 p_2019->g_332 p_2019->g_418 p_2019->g_420 p_2019->g_476 p_2019->g_1027 p_2019->g_1010 p_2019->g_1070 p_2019->g_121 p_2019->g_820 p_2019->g_898
 */
int16_t  func_42(uint32_t  p_43, struct S0 * p_2019)
{ /* block id: 199 */
    int32_t l_509 = 0x2E1BB083L;
    int32_t l_513 = 0x3A3FC51CL;
    int32_t l_514 = 6L;
    int32_t l_655 = 0x347D17CEL;
    int32_t *l_673 = &p_2019->g_20;
    int32_t l_688 = 0x61ED8859L;
    int32_t l_690[5][3][10] = {{{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)}},{{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)}},{{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)}},{{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)}},{{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)},{0L,0x317BF8BBL,(-2L),0L,1L,0x244B5D92L,0x244B5D92L,1L,0L,(-2L)}}};
    uint32_t l_767 = 4UL;
    int16_t l_793[5];
    int64_t *l_808 = &p_2019->g_293;
    int64_t l_815 = 0x75092D3E1F394628L;
    int16_t * volatile **l_821[1][5][8] = {{{&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819},{&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819},{&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819},{&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819},{&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819,&p_2019->g_819}}};
    int32_t **l_822 = &p_2019->g_487;
    int32_t ***l_823 = &p_2019->g_197;
    int32_t **l_825 = &p_2019->g_487;
    int32_t ***l_824 = &l_825;
    uint16_t l_844 = 0x1F56L;
    uint16_t *l_845 = &l_844;
    uint16_t *l_846 = &p_2019->g_58;
    uint64_t l_858 = 0xAECC7FBC3126DF4EL;
    uint32_t l_906 = 1UL;
    int16_t l_920[8][2][7] = {{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}},{{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L},{0x4981L,0x668FL,1L,(-6L),0L,(-8L),0x7420L}}};
    int32_t l_959 = 0x33CA04CFL;
    int8_t *l_1020 = &p_2019->g_418;
    int64_t *l_1058[7] = {&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332};
    int64_t **l_1057 = &l_1058[1];
    int8_t l_1068 = 0x50L;
    uint32_t l_1075 = 0x93558B36L;
    uint16_t l_1092 = 65535UL;
    int64_t *l_1108 = &p_2019->g_332;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_793[i] = 0L;
    for (p_2019->g_474 = 0; (p_2019->g_474 != 60); ++p_2019->g_474)
    { /* block id: 202 */
        uint8_t *l_500 = (void*)0;
        uint8_t *l_501[9][2] = {{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0},{&p_2019->g_196[1][1],(void*)0}};
        int32_t l_506[6][6][7] = {{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}},{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}},{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}},{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}},{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}},{{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL},{(-3L),6L,(-1L),1L,4L,0L,0x52BB03DBL}}};
        uint64_t l_510[6][4] = {{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L},{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L},{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L},{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L},{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L},{0xA1B42C07D8D0AD66L,0x700D4DE8D4270259L,1UL,0x700D4DE8D4270259L}};
        uint16_t *l_512[7] = {&p_2019->g_58,&p_2019->g_58,&p_2019->g_58,&p_2019->g_58,&p_2019->g_58,&p_2019->g_58,&p_2019->g_58};
        uint32_t l_515 = 1UL;
        int32_t *l_516 = &p_2019->g_517;
        uint64_t *l_532 = &p_2019->g_288;
        uint64_t l_540 = 0x7342120BC1B79115L;
        uint32_t l_545 = 0UL;
        int8_t l_717 = 1L;
        int8_t l_765 = (-7L);
        uint32_t l_816 = 4294967295UL;
        int i, j, k;
        if (((*l_516) &= (safe_div_func_uint64_t_u_u(((((safe_div_func_uint8_t_u_u((p_2019->g_70 & (safe_sub_func_int16_t_s_s((p_2019->g_69 = p_43), ((p_43 , ((safe_mul_func_int8_t_s_s((((((l_513 = ((p_2019->g_196[1][2] &= (safe_lshift_func_uint16_t_u_s(0UL, 9))) < ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((l_506[0][4][2] >= (p_2019->g_511 = (p_2019->g_62 = (((((((p_43 <= ((((((*p_2019->g_255) = ((((safe_sub_func_int8_t_s_s(((l_509 = (+0xC2L)) , (1L <= (l_509 = (p_43 == l_506[0][4][2])))), 0x14L)) ^ 0x5817C65F96F7D0ECL) ^ 0x9D6454BA736D55F5L) && l_510[0][2])) && 18446744073709551609UL) , 7L) || p_43) || p_2019->g_58)) < 0x23FBL) , 1UL) && p_43) > p_43) , (void*)0) == &p_2019->g_20)))) , 4294967295UL) , l_506[0][5][5]), p_2019->g_122)) , 1UL), p_2019->g_292)) , 0x45L))) ^ p_2019->g_294) ^ l_514) | l_515) || p_2019->g_45), p_2019->g_45)) == p_43)) ^ 0x4975CAADL)))), 1UL)) , (void*)0) != &p_2019->g_20) , l_510[0][2]), p_2019->g_292))))
        { /* block id: 212 */
            uint64_t *l_530 = &p_2019->g_208;
            int32_t l_537 = 0x47352B2BL;
            int32_t l_546 = 0x1D0CAD96L;
            uint32_t *l_564 = &p_2019->g_474;
            int32_t *l_574[6] = {&l_506[0][4][2],&l_506[0][4][2],&l_506[0][4][2],&l_506[0][4][2],&l_506[0][4][2],&l_506[0][4][2]};
            int8_t l_615 = 0x17L;
            int i;
            l_513 &= 1L;
            for (p_2019->g_58 = (-25); (p_2019->g_58 != 54); p_2019->g_58++)
            { /* block id: 216 */
                uint64_t **l_531[8];
                int16_t *l_541 = &p_2019->g_422[6][1][3];
                int64_t *l_542[6] = {&p_2019->g_293,&p_2019->g_293,&p_2019->g_293,&p_2019->g_293,&p_2019->g_293,&p_2019->g_293};
                int32_t *l_543 = (void*)0;
                int32_t *l_544 = &p_2019->g_476[4][0];
                int32_t l_558 = 0x3AB2A21DL;
                int32_t l_559 = (-1L);
                int32_t l_560[7] = {0x63EFDEC6L,1L,0x63EFDEC6L,0x63EFDEC6L,1L,0x63EFDEC6L,0x63EFDEC6L};
                int8_t *l_585[7][3] = {{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511},{&p_2019->g_511,&p_2019->g_511,&p_2019->g_511}};
                int64_t *l_602 = &p_2019->g_332;
                int i, j;
                for (i = 0; i < 8; i++)
                    l_531[i] = &p_2019->g_255;
                (1 + 1);
            }
            p_2019->g_517 |= (-1L);
        }
        else
        { /* block id: 266 */
            uint64_t l_633 = 0xD30E2EBE6962EDEBL;
            int32_t l_644 = 8L;
            int32_t l_645 = 1L;
            int32_t l_648[3][7][8] = {{{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L}},{{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L}},{{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L},{0L,0L,0L,(-1L),0x1219227DL,(-1L),0L,0L}}};
            int64_t **l_668 = (void*)0;
            uint32_t *l_686 = &p_2019->g_474;
            int i, j, k;
            for (p_2019->g_511 = 0; (p_2019->g_511 == 26); p_2019->g_511 = safe_add_func_uint32_t_u_u(p_2019->g_511, 7))
            { /* block id: 269 */
                uint32_t l_636 = 4294967290UL;
                int32_t l_646 = 1L;
                int32_t l_651[9][6] = {{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL},{0x6615A78FL,0x3608441CL,0x6615A78FL,0x6615A78FL,0x3608441CL,0x6615A78FL}};
                int8_t l_689[7][3][1] = {{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}},{{0x19L},{0x19L},{0x19L}}};
                int i, j, k;
                if (p_43)
                    break;
                for (l_515 = 0; (l_515 <= 8); l_515++)
                { /* block id: 273 */
                    int32_t l_625 = 8L;
                    int32_t l_629 = 0x3563BF48L;
                    int32_t l_630[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_630[i] = (-1L);
                    for (p_43 = 1; (p_43 <= 4); p_43 += 1)
                    { /* block id: 276 */
                        int32_t *l_626 = &l_509;
                        int32_t *l_627 = &p_2019->g_517;
                        int32_t *l_628[10][10][2] = {{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}},{{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509},{&p_2019->g_517,&l_509}}};
                        int i, j, k;
                        l_633--;
                        --l_636;
                    }
                }
                for (p_2019->g_158 = 0; (p_2019->g_158 > 4); p_2019->g_158 = safe_add_func_int8_t_s_s(p_2019->g_158, 1))
                { /* block id: 283 */
                    int32_t l_652 = 0x79BC2C7BL;
                    int32_t l_656 = 0L;
                    int32_t l_691 = (-6L);
                    int32_t l_692 = 0x37D2E5C3L;
                    for (p_2019->g_124 = 7; (p_2019->g_124 <= 6); p_2019->g_124--)
                    { /* block id: 286 */
                        int8_t l_643[4];
                        int32_t *l_647 = &p_2019->g_62;
                        int32_t *l_649 = &p_2019->g_567;
                        int32_t *l_650[2][1];
                        uint8_t l_661 = 0xD2L;
                        int32_t *l_674[3][3] = {{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20}};
                        uint32_t *l_685[8][7][4] = {{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}},{{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474},{(void*)0,(void*)0,&l_545,&p_2019->g_474}}};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_643[i] = (-3L);
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_650[i][j] = &l_514;
                        }
                        --p_2019->g_658;
                        --l_661;
                        (*l_649) ^= (safe_lshift_func_int16_t_s_u((1UL ^ (l_668 != (void*)0)), (((((~p_2019->g_295[2][4][3]) == p_2019->g_418) < ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_673 != l_674[2][0]), (safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((0x8965218EC8FD7BDBL || ((l_685[1][4][3] = &p_2019->g_71[3]) == l_686)), p_2019->g_653)), (*l_647))) , 0x163822965BFE961EL), l_514)), 1)))), p_2019->g_517)) ^ p_43)) , 0x3DC1259D07F159CCL) , l_644)));
                        --p_2019->g_693;
                    }
                }
            }
        }
        for (p_2019->g_567 = 0; (p_2019->g_567 > (-17)); p_2019->g_567 = safe_sub_func_int32_t_s_s(p_2019->g_567, 5))
        { /* block id: 298 */
            int32_t l_718 = 0x2B655A24L;
            for (l_540 = 0; (l_540 <= 7); l_540 = safe_add_func_int8_t_s_s(l_540, 1))
            { /* block id: 301 */
                uint64_t l_710 = 0x579BE016CAF76D68L;
                int32_t l_711 = 0x0F2A3899L;
                int32_t *l_712 = &l_688;
                int32_t **l_719 = &l_673;
                uint32_t *l_720 = &p_2019->g_721[4];
                (*l_712) &= (l_711 &= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((((void*)0 != &p_2019->g_276) , (safe_add_func_uint8_t_u_u((&p_2019->g_292 == (void*)0), p_2019->g_511))) && ((!(+(0x53L && (l_509 || ((((safe_mul_func_uint8_t_u_u(((l_509 | ((safe_sub_func_uint32_t_u_u((p_2019->g_567 ^ 0x39L), l_710)) , (*p_2019->g_255))) == p_43), (*l_516))) ^ p_43) | p_43) , p_43))))) ^ l_710)), l_690[1][1][7])), p_2019->g_618)) , l_710));
                l_711 &= ((safe_sub_func_int64_t_s_s((((*l_532) &= (*p_2019->g_255)) != ((((*l_712) || (((*l_516) >= (safe_div_func_uint32_t_u_u(4294967295UL, l_717))) , l_718)) > ((((*l_720) = (~(((*l_719) = l_516) == (void*)0))) , p_2019->g_294) , l_690[2][0][2])) , 0UL)), (*p_2019->g_255))) != l_509);
            }
        }
        for (p_2019->g_632 = 0; (p_2019->g_632 > 24); p_2019->g_632 = safe_add_func_uint32_t_u_u(p_2019->g_632, 1))
        { /* block id: 312 */
            int32_t ***l_738 = &p_2019->g_595;
            int32_t l_746[4] = {0x32D39F38L,0x32D39F38L,0x32D39F38L,0x32D39F38L};
            int32_t l_766 = (-8L);
            uint64_t ***l_798 = (void*)0;
            int32_t *l_802 = &l_690[2][0][2];
            int32_t *l_814[9] = {&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3],&p_2019->g_687[1][3]};
            int i;
            if ((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(p_43, (safe_rshift_func_int8_t_s_s(((~(p_43 , (((safe_add_func_int8_t_s_s(p_2019->g_422[6][1][3], (safe_div_func_uint64_t_u_u(((&l_673 == ((*l_738) = (void*)0)) ^ 0UL), (-8L))))) ^ ((p_2019->g_71[4] > 0x10L) != 4UL)) , 0x0C37L))) | p_2019->g_632), 5)))), 7)), p_43)))
            { /* block id: 314 */
                uint32_t l_739 = 0xB9722A4EL;
                int32_t *l_740 = &l_688;
                (*l_516) = l_688;
                l_739 = p_43;
                (*l_740) ^= (*l_516);
            }
            else
            { /* block id: 318 */
                int8_t l_745[7][6][6] = {{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}},{{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L},{0x33L,0x70L,(-1L),1L,0L,0L}}};
                int32_t l_762 = 0x53C5832BL;
                int32_t l_763[6] = {(-1L),0L,(-1L),(-1L),0L,(-1L)};
                uint32_t *l_774[8][9] = {{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]},{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[0],&p_2019->g_721[7],&p_2019->g_721[0],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]}};
                int i, j, k;
                for (p_2019->g_292 = 15; (p_2019->g_292 >= 9); p_2019->g_292 = safe_sub_func_uint8_t_u_u(p_2019->g_292, 8))
                { /* block id: 321 */
                    p_2019->g_62 ^= ((*l_516) = (safe_add_func_int8_t_s_s(((l_745[5][3][3] | (l_746[2] & 0UL)) | p_2019->g_687[7][6]), l_688)));
                }
                p_2019->g_62 ^= 0L;
                for (p_2019->g_45 = 0; (p_2019->g_45 != (-24)); p_2019->g_45--)
                { /* block id: 328 */
                    int32_t *l_749 = &l_690[3][2][5];
                    int32_t *l_750 = &l_655;
                    int32_t *l_751 = &l_746[1];
                    int32_t *l_752 = &p_2019->g_517;
                    int32_t *l_753 = (void*)0;
                    int32_t *l_754 = (void*)0;
                    int32_t *l_755 = &l_506[5][3][2];
                    int32_t *l_756 = &l_506[2][3][1];
                    int32_t *l_757 = &l_514;
                    int32_t *l_758 = &l_514;
                    int32_t *l_759 = &l_690[1][2][7];
                    int32_t *l_760 = &l_746[2];
                    int32_t *l_761[1][3];
                    int8_t l_764 = 0x7BL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_761[i][j] = &p_2019->g_687[0][5];
                    }
                    l_767++;
                    if (l_766)
                        break;
                }
                for (l_515 = 0; (l_515 <= 2); l_515 += 1)
                { /* block id: 334 */
                    uint32_t l_796 = 0UL;
                    for (l_688 = 0; (l_688 <= 2); l_688 += 1)
                    { /* block id: 337 */
                        int16_t *l_794 = &p_2019->g_617;
                        int16_t *l_795 = &l_793[4];
                        int16_t *l_797 = &p_2019->g_422[1][2][4];
                        int i, j, k;
                        if (l_690[(l_515 + 2)][l_515][(l_515 + 4)])
                            break;
                        l_509 ^= (((((safe_lshift_func_int16_t_s_s((p_43 , (safe_mod_func_int32_t_s_s((l_774[1][4] != ((safe_add_func_int64_t_s_s((((l_762 = (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((l_746[2] = 0x79CFL) <= p_2019->g_70), (-5L))), (&p_2019->g_226 == (void*)0)))) > ((*l_797) |= ((!(safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s(0xA2C6L, ((*l_795) = ((*l_794) = (((((((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((~(p_43 ^ 0x72D3FD69L)), l_793[4])), 0x1C2DF8D4L)) && p_2019->g_687[7][6]) || 0x7A17L), p_43)) != p_43), l_763[1])) & (*l_516)) ^ p_43) , 0L) >= (*l_516)) ^ 0UL) , 0x1621L))))) <= p_43) , l_763[3]), l_796))) && l_690[2][2][1]))) >= 0x2465L), 0L)) , l_673)), 4294967292UL))), p_43)) != p_43) , l_798) != &p_2019->g_254[0]) & p_43);
                    }
                    for (p_2019->g_693 = 0; (p_2019->g_693 <= 39); p_2019->g_693 = safe_add_func_uint32_t_u_u(p_2019->g_693, 3))
                    { /* block id: 348 */
                        int32_t *l_801 = (void*)0;
                        int64_t **l_809 = (void*)0;
                        int64_t *l_811 = &p_2019->g_293;
                        int64_t **l_810[7][1];
                        int8_t *l_813[1][6];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_810[i][j] = &l_811;
                        }
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_813[i][j] = &p_2019->g_122;
                        }
                        l_802 = l_801;
                        (*l_516) ^= (-8L);
                        l_762 = (0x95L && (((safe_mul_func_uint16_t_u_u(p_43, ((((p_43 , p_2019->g_805) != (void*)0) <= ((safe_mod_func_int16_t_s_s((-7L), 0x182DL)) || (p_2019->g_294 = (l_808 == (p_2019->g_812 = &p_2019->g_616))))) & 0x34F86749F8A2BD15L))) < l_796) < 0x45BD62199F51F973L));
                    }
                }
            }
            l_816++;
        }
    }
    p_2019->g_819 = p_2019->g_819;
    if ((1L != (((l_822 != ((*l_824) = ((*l_823) = l_822))) , (safe_mod_func_uint16_t_u_u(((*l_846) = ((*l_845) = ((((*p_2019->g_812) = (safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((void*)0 == l_808), (safe_rshift_func_int16_t_s_s((*p_2019->g_820), 7)))), ((((~(safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0xF5E1L, (!(safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((((!(p_43 == (((+0x1EFB28A4L) < (-1L)) || p_2019->g_295[3][2][1]))) ^ (*p_2019->g_812)) >= (-1L)), p_2019->g_18)) , (*p_2019->g_820)), 8))))), l_844))) && p_43) , p_43) & 0x281EL))) | 0x83L), p_2019->g_18))) & (*p_2019->g_255)) && p_2019->g_476[4][0]))), 5UL))) , 0x3AAAL)))
    { /* block id: 366 */
        uint32_t l_880 = 0xEDE4E3D0L;
        uint8_t *l_972 = &p_2019->g_426;
        uint8_t **l_971 = &l_972;
        int32_t l_1005 = 0x711CC6C1L;
        int32_t l_1006 = 0x0CC78955L;
        int32_t l_1007 = (-7L);
        int32_t l_1008[10][2] = {{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)},{0x1B61F031L,(-5L)}};
        int64_t l_1026 = 1L;
        int32_t l_1031 = 0x7E9814ECL;
        uint32_t *l_1082[1][9] = {{&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4],&p_2019->g_721[4]}};
        int i, j;
        for (p_2019->g_616 = 0; (p_2019->g_616 >= (-17)); p_2019->g_616 = safe_sub_func_int16_t_s_s(p_2019->g_616, 1))
        { /* block id: 369 */
            uint32_t *l_849 = &p_2019->g_71[8];
            int32_t l_852 = 0x42707A8DL;
            uint32_t *l_853 = &p_2019->g_721[1];
            int8_t *l_859 = &p_2019->g_70;
            uint8_t *l_860 = &p_2019->g_125;
            int32_t l_861 = 8L;
            int32_t ***l_960 = (void*)0;
            int32_t l_1011 = (-1L);
            int32_t l_1012 = 0x2A710576L;
            uint32_t l_1014[1][5][8] = {{{4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL},{4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL},{4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL},{4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL},{4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL,4294967291UL,4294967291UL,4294967287UL}}};
            int32_t l_1023[2];
            int64_t l_1050 = 0x380A5DDF1680A0BFL;
            int64_t *l_1056 = &p_2019->g_332;
            int64_t **l_1055 = &l_1056;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1023[i] = (-10L);
            l_861 ^= (((!p_43) && ((((*l_849)--) | (l_852 = (((*l_860) |= (((!p_2019->g_122) , (&p_2019->g_292 != (void*)0)) || ((*l_859) ^= ((~((*l_853)++)) , (safe_lshift_func_uint16_t_u_u((0x0014L && p_43), l_858)))))) == 9L))) > (&p_2019->g_595 != (void*)0))) > 0x6D3DE0C1L);
            for (p_2019->g_45 = 0; (p_2019->g_45 <= 0); p_2019->g_45 += 1)
            { /* block id: 378 */
                int16_t l_862 = 0x797FL;
                int32_t l_879[8] = {0x0E9F7540L,0x0E9F7540L,0x0E9F7540L,0x0E9F7540L,0x0E9F7540L,0x0E9F7540L,0x0E9F7540L,0x0E9F7540L};
                uint8_t l_889 = 0x67L;
                int32_t ***l_897 = (void*)0;
                uint8_t l_899[5][9] = {{255UL,0xF9L,0xD9L,0xF9L,255UL,255UL,0xF9L,0xD9L,0xF9L},{255UL,0xF9L,0xD9L,0xF9L,255UL,255UL,0xF9L,0xD9L,0xF9L},{255UL,0xF9L,0xD9L,0xF9L,255UL,255UL,0xF9L,0xD9L,0xF9L},{255UL,0xF9L,0xD9L,0xF9L,255UL,255UL,0xF9L,0xD9L,0xF9L},{255UL,0xF9L,0xD9L,0xF9L,255UL,255UL,0xF9L,0xD9L,0xF9L}};
                uint64_t *l_1061 = &p_2019->g_561;
                int32_t l_1069 = (-9L);
                int i, j;
                for (l_815 = 0; (l_815 >= 0); l_815 -= 1)
                { /* block id: 381 */
                    int32_t *l_863 = (void*)0;
                    int32_t *l_864 = &p_2019->g_687[7][6];
                    int32_t *l_865 = &l_688;
                    int32_t *l_866 = &p_2019->g_517;
                    int32_t *l_867 = &p_2019->g_687[7][6];
                    int32_t *l_868 = &l_513;
                    int32_t *l_869 = &l_861;
                    int32_t *l_870 = &p_2019->g_517;
                    int32_t *l_871 = &l_655;
                    int32_t *l_872 = &l_688;
                    int32_t l_873 = 0x05B618C3L;
                    int32_t *l_874 = &l_655;
                    int32_t *l_875 = (void*)0;
                    int32_t l_876 = (-10L);
                    int32_t *l_877 = (void*)0;
                    int32_t *l_878[4][4] = {{&l_876,&l_876,(void*)0,(void*)0},{&l_876,&l_876,(void*)0,(void*)0},{&l_876,&l_876,(void*)0,(void*)0},{&l_876,&l_876,(void*)0,(void*)0}};
                    int32_t ****l_896 = &l_823;
                    int16_t *l_919 = &l_862;
                    uint8_t **l_935 = &l_860;
                    int i, j, k;
                    --l_880;
                }
                l_861 = (-1L);
                (*l_825) = func_49(l_861, (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s(p_43, (p_43 <= ((p_43 , (safe_mod_func_uint64_t_u_u((0UL && (safe_lshift_func_int16_t_s_s((*p_2019->g_820), 8))), (safe_add_func_uint64_t_u_u(1UL, (safe_mul_func_int8_t_s_s((p_43 > ((((((safe_add_func_int8_t_s_s((l_880 >= (-1L)), 0x35L)) >= p_43) > p_43) < 0x185797D7C2F2DC86L) && p_43) >= 0L)), l_959))))))) & 0xF2L)))) , l_960) == l_897) >= p_2019->g_112) > (-1L)), p_43)), p_2019->g_422[7][2][4])), p_2019->g_721[4], p_2019);
                for (p_2019->g_654 = 0; (p_2019->g_654 <= 3); p_2019->g_654 += 1)
                { /* block id: 412 */
                    int64_t l_999 = 0x5DEFCC4BB98C4006L;
                    int32_t l_1002 = (-2L);
                    int32_t l_1003 = 6L;
                    int32_t l_1004[9][8] = {{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L},{1L,0x31901196L,0x4B7579D3L,1L,0x2A9C8551L,0x48A075F9L,(-1L),0x7B0C2C56L}};
                    int32_t *l_1017 = &p_2019->g_20;
                    int8_t *l_1018 = (void*)0;
                    int32_t *l_1032 = &p_2019->g_687[7][6];
                    int32_t *l_1033 = &l_879[3];
                    int32_t *l_1034 = (void*)0;
                    int32_t *l_1035 = (void*)0;
                    int32_t *l_1036 = (void*)0;
                    int32_t *l_1037 = (void*)0;
                    int32_t *l_1038 = &l_1008[5][0];
                    int32_t *l_1039[5];
                    uint8_t l_1040[1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1039[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_1040[i] = 0x0FL;
                    for (p_2019->g_69 = 0; (p_2019->g_69 <= 3); p_2019->g_69 += 1)
                    { /* block id: 415 */
                        uint8_t ***l_973 = &l_971;
                        int32_t *l_984 = (void*)0;
                        int32_t *l_985 = (void*)0;
                        int32_t *l_986 = (void*)0;
                        int32_t *l_987 = &p_2019->g_567;
                        int8_t *l_998 = &p_2019->g_292;
                        int32_t *l_1000 = &p_2019->g_687[5][7];
                        int32_t *l_1001[4] = {&p_2019->g_567,&p_2019->g_567,&p_2019->g_567,&p_2019->g_567};
                        int32_t l_1009 = 0x67AFCA27L;
                        int16_t l_1013 = (-2L);
                        int i, j, k;
                        (*l_987) = ((safe_mul_func_uint16_t_u_u((!(safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_861 ^= (249UL || ((safe_add_func_int16_t_s_s((p_2019->g_969 == ((*l_973) = l_971)), p_2019->g_295[(p_2019->g_45 + 3)][p_2019->g_654][(p_2019->g_45 + 2)])) && ((p_2019->g_295[p_2019->g_69][(p_2019->g_45 + 2)][(p_2019->g_45 + 4)] != (safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((*p_2019->g_812), l_880)), 3))) <= (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(9UL, l_880)), p_43)), p_43)))))), p_43)), p_2019->g_653))), (*p_2019->g_820))) | p_2019->g_295[p_2019->g_69][(p_2019->g_45 + 2)][(p_2019->g_45 + 4)]);
                        (*l_987) = ((safe_add_func_int16_t_s_s(p_43, (safe_div_func_uint32_t_u_u(((p_43 ^ ((p_2019->g_969 != &l_972) >= (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((4294967288UL == (((**l_971) ^= (safe_sub_func_int16_t_s_s((&p_2019->g_70 == l_998), p_2019->g_654))) , ((*p_2019->g_820) && 1L))), p_2019->g_71[8])), l_999)))) ^ 1UL), p_2019->g_293)))) | p_2019->g_418);
                        ++l_1014[0][1][5];
                        (**l_823) = (*p_2019->g_197);
                    }
                    if (p_43)
                    { /* block id: 424 */
                        int8_t **l_1019 = &l_1018;
                        int32_t *l_1021 = &p_2019->g_517;
                        int32_t *l_1022[2][2];
                        int64_t l_1024 = 3L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1022[i][j] = &l_513;
                        }
                        (*l_825) = func_46(l_1017, (l_1020 = ((*l_1019) = (p_43 , l_1018))), p_2019);
                        p_2019->g_1027--;
                    }
                    else
                    { /* block id: 429 */
                        int32_t *l_1030[9] = {&l_1011,(void*)0,&l_1011,&l_1011,(void*)0,&l_1011,&l_1011,(void*)0,&l_1011};
                        int i;
                        p_2019->g_1010 &= (l_1004[1][6] == p_43);
                        l_1031 |= 7L;
                    }
                    ++l_1040[0];
                    (*l_1033) ^= (0xD296L < (+p_2019->g_226));
                }
                for (p_2019->g_58 = 0; (p_2019->g_58 <= 0); p_2019->g_58 += 1)
                { /* block id: 438 */
                    int32_t *l_1043 = &l_1023[0];
                    int64_t **l_1060[8] = {&l_1056,&l_1058[0],&l_1056,&l_1056,&l_1058[0],&l_1056,&l_1056,&l_1058[0]};
                    int32_t l_1066 = 0x542A6915L;
                    int32_t l_1067[10][9] = {{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L},{(-1L),(-1L),(-1L),0x7196CD4FL,(-1L),(-9L),1L,0x4D49D58BL,1L}};
                    int i, j;
                    (**l_824) = &l_1006;
                    (**l_823) = l_1043;
                    for (l_815 = 0; (l_815 >= 0); l_815 -= 1)
                    { /* block id: 443 */
                        int8_t l_1059 = 6L;
                        int32_t l_1062[7] = {0x7216C556L,0x7216C556L,0x7216C556L,0x7216C556L,0x7216C556L,0x7216C556L,0x7216C556L};
                        int32_t *l_1063 = &l_1006;
                        int32_t *l_1064 = &l_861;
                        int32_t *l_1065[9][10] = {{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]},{&l_879[3],&l_655,&l_959,&p_2019->g_687[7][6],&l_655,&p_2019->g_687[7][6],&l_959,&l_655,&l_879[3],&l_879[3]}};
                        int i, j;
                        l_1059 = ((safe_lshift_func_int16_t_s_s((**p_2019->g_819), ((((safe_mod_func_int16_t_s_s(0x046CL, p_43)) , ((*p_2019->g_820) | (*p_2019->g_820))) | ((*l_849) &= ((safe_rshift_func_uint16_t_u_s((l_1050 || (((((safe_rshift_func_uint8_t_u_u((((p_43 != (safe_lshift_func_int8_t_s_u((-4L), (((*p_2019->g_820) <= (*p_2019->g_820)) | 0UL)))) & 0L) , (**l_822)), p_43)) > (***l_823)) , l_1055) != l_1057) , 0xD5B6EE67L)), 9)) < 9L))) != p_2019->g_934))) ^ (*p_2019->g_812));
                        (*l_1043) ^= (((void*)0 != l_1060[2]) > (((void*)0 != l_1061) & 254UL));
                        p_2019->g_1070--;
                    }
                    for (l_1011 = 0; (l_1011 >= 0); l_1011 -= 1)
                    { /* block id: 451 */
                        int32_t *l_1073 = &l_1067[0][5];
                        int32_t *l_1074[1][4];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_1074[i][j] = (void*)0;
                        }
                        l_1075++;
                        (**l_823) = (*p_2019->g_197);
                    }
                }
            }
            for (p_2019->g_121 = (-21); (p_2019->g_121 <= 7); ++p_2019->g_121)
            { /* block id: 459 */
                int16_t **l_1083 = &p_2019->g_820;
                uint64_t *l_1085[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1085[i] = &p_2019->g_1027;
                l_1011 = ((safe_lshift_func_int16_t_s_s(((l_1007 |= ((*p_2019->g_255) = ((((void*)0 == l_1082[0][1]) == (((*l_1083) = &p_2019->g_69) == &p_2019->g_654)) | (safe_unary_minus_func_uint32_t_u(((*l_849) ^= (p_43 && l_1006))))))) | (!((!(0L != 0UL)) || ((safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_43, 9)) > l_1008[0][0]), p_43)), p_43)) , p_2019->g_226)))), 4)) & l_1092);
            }
        }
        for (p_2019->g_898 = 20; (p_2019->g_898 <= (-14)); --p_2019->g_898)
        { /* block id: 469 */
            int64_t *l_1105 = &p_2019->g_332;
            int8_t *l_1115[7][10][3] = {{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}},{{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068},{&p_2019->g_292,&p_2019->g_292,&l_1068}}};
            int i, j, k;
            for (p_2019->g_45 = (-4); (p_2019->g_45 > (-11)); p_2019->g_45 = safe_sub_func_int16_t_s_s(p_2019->g_45, 9))
            { /* block id: 472 */
                for (p_2019->g_654 = (-19); (p_2019->g_654 >= (-13)); p_2019->g_654 = safe_add_func_uint16_t_u_u(p_2019->g_654, 4))
                { /* block id: 475 */
                    uint16_t l_1116 = 0xF335L;
                    for (l_1075 = (-18); (l_1075 >= 51); l_1075 = safe_add_func_int64_t_s_s(l_1075, 3))
                    { /* block id: 478 */
                        int64_t *l_1106 = &p_2019->g_332;
                        int64_t *l_1107 = &p_2019->g_332;
                        int64_t **l_1109 = (void*)0;
                        int64_t **l_1110 = &l_1107;
                        int32_t l_1113 = 5L;
                        int32_t *l_1114 = &l_1113;
                        l_1114 = func_49(p_43, (safe_sub_func_uint32_t_u_u(p_2019->g_511, p_43)), (l_1113 = (safe_add_func_int16_t_s_s(((&l_858 == (void*)0) < (l_1005 <= ((l_1106 = ((*l_1057) = l_1105)) != ((*l_1110) = (l_1108 = l_1107))))), (safe_mod_func_int64_t_s_s((-3L), (*p_2019->g_255)))))), p_2019);
                    }
                    for (l_1031 = 0; (l_1031 <= 0); l_1031 += 1)
                    { /* block id: 488 */
                        int i, j, k;
                        (**l_823) = func_46(l_673, l_1115[2][1][0], p_2019);
                        return l_920[(l_1031 + 4)][(l_1031 + 1)][(l_1031 + 4)];
                    }
                    for (l_1007 = 0; (l_1007 <= 0); l_1007 += 1)
                    { /* block id: 494 */
                        return l_1116;
                    }
                }
                if (p_43)
                    continue;
            }
        }
        p_2019->g_819 = (void*)0;
    }
    else
    { /* block id: 502 */
        int16_t l_1135 = 0x1EBAL;
        int32_t l_1136[8][5] = {{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)},{0x527F6821L,(-1L),0x527F6821L,0x527F6821L,(-1L)}};
        int32_t *l_1137[9] = {&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2],&l_690[3][0][2]};
        int i, j;
        p_2019->g_567 = (l_1136[6][4] &= (0x10D5L && (l_1135 = ((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*p_2019->g_820) = p_43), (safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_2019->g_476[4][0], (safe_div_func_int8_t_s_s(((*l_1020) = p_2019->g_1025), (safe_lshift_func_int8_t_s_u(((((safe_div_func_int32_t_s_s(p_43, p_43)) , (safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_43, (((((p_2019->g_226 && p_2019->g_18) || 0UL) ^ p_43) , p_43) , p_43))), p_43))) == p_2019->g_721[4]) >= p_43), 5)))))), 9L)))), 0xFB83L)) < (*p_2019->g_812)))));
    }
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_112 p_2019->g_288 p_2019->g_71 p_2019->g_208 p_2019->g_295 p_2019->g_18 p_2019->g_69 p_2019->g_226 p_2019->g_254 p_2019->g_70 p_2019->g_62 p_2019->g_124 p_2019->g_332 p_2019->g_255 p_2019->g_158 p_2019->g_122 p_2019->g_121 p_2019->g_20 p_2019->g_68 p_2019->g_196 p_2019->g_58 p_2019->g_293 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_125 p_2019->g_197
 * writes: p_2019->g_112 p_2019->g_276 p_2019->g_208 p_2019->g_288 p_2019->g_295 p_2019->g_196 p_2019->g_255 p_2019->g_254 p_2019->g_69 p_2019->g_62 p_2019->g_332 p_2019->g_226 p_2019->g_58 p_2019->g_71 p_2019->g_158 p_2019->g_418 p_2019->g_420 p_2019->g_426 p_2019->g_294 p_2019->g_474 p_2019->g_476 p_2019->g_68 p_2019->g_125 p_2019->g_487
 */
int32_t * func_46(int32_t * p_47, int8_t * p_48, struct S0 * p_2019)
{ /* block id: 111 */
    int32_t *l_282[1][4] = {{&p_2019->g_62,&p_2019->g_62,&p_2019->g_62,&p_2019->g_62}};
    int32_t **l_283[6];
    int32_t *l_284 = &p_2019->g_62;
    uint8_t *l_298 = &p_2019->g_196[1][2];
    uint8_t l_299 = 0xADL;
    uint16_t *l_300 = &p_2019->g_58;
    uint64_t *l_310 = &p_2019->g_288;
    int8_t l_327 = 0x25L;
    uint32_t l_349 = 2UL;
    int64_t *l_359[4][10] = {{&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332},{&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332},{&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332},{&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_283[i] = &p_2019->g_276;
    l_284 = l_282[0][2];
    for (p_2019->g_112 = 0; (p_2019->g_112 <= 0); p_2019->g_112 += 1)
    { /* block id: 115 */
        int8_t l_286 = (-5L);
        int8_t l_287 = 0x69L;
        int32_t l_291 = 0x736FFD87L;
        p_2019->g_276 = (void*)0;
        for (p_2019->g_208 = 0; (p_2019->g_208 <= 0); p_2019->g_208 += 1)
        { /* block id: 119 */
            int16_t l_285 = 0x400AL;
            int i, j;
            --p_2019->g_288;
            l_291 ^= p_2019->g_71[(p_2019->g_112 + 8)];
            l_282[p_2019->g_208][(p_2019->g_208 + 2)] = p_47;
            ++p_2019->g_295[1][0][4];
        }
    }
    p_2019->g_276 = p_47;
    if ((~(((!((*l_298) = p_2019->g_112)) , &p_2019->g_276) != (((0x380DA34F26F14F79L | ((l_299 , &p_2019->g_58) == l_300)) , ((((safe_sub_func_uint32_t_u_u((p_2019->g_18 & 0x8DB6L), (p_2019->g_69 != p_2019->g_69))) , 1UL) == p_2019->g_226) , 0x30F5127003CCA9ACL)) , &l_282[0][1]))))
    { /* block id: 128 */
        return p_47;
    }
    else
    { /* block id: 130 */
        uint16_t l_307 = 0UL;
        uint64_t *l_308 = &p_2019->g_158;
        uint64_t **l_309 = &p_2019->g_255;
        uint64_t ***l_325 = (void*)0;
        uint64_t ***l_326 = &p_2019->g_254[0];
        int32_t l_328 = 0x1B8D09D4L;
        int64_t *l_331[1][10] = {{&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332,&p_2019->g_332}};
        int32_t *l_350 = &l_328;
        uint16_t l_366 = 0UL;
        uint32_t l_372 = 0x38D1B579L;
        int64_t l_424 = (-8L);
        int i, j;
        l_328 = ((safe_rshift_func_int8_t_s_s(((l_307 | (((*l_309) = l_308) != l_310)) == ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0xF5A9L, l_307)), 9)) != (((p_2019->g_62 ^= ((safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((p_2019->g_196[1][1] = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_2019->g_69 = ((safe_rshift_func_uint16_t_u_s(((((*l_326) = p_2019->g_254[0]) != (void*)0) != 0x436942E82D893DD2L), 3)) < (-1L))), 0x1596L)), l_307)) , p_2019->g_70)), l_307)) || (-1L)), l_307)) & l_327)) >= l_307) > l_307))), p_2019->g_124)) & 0x0FE3F0E0L);
        if ((((p_2019->g_288 != l_307) || (safe_div_func_int32_t_s_s(1L, (l_328 = (p_2019->g_62 ^= (((p_2019->g_332 &= 0x0F71A0FEE5A66E49L) , (safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(l_328, (((((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(l_307, (+((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0x7F00L, (safe_add_func_int32_t_s_s((p_2019->g_69 ^ (safe_add_func_uint64_t_u_u((*p_2019->g_255), l_307))), p_2019->g_122)))), 0x2CA7L)) != 0x3562EA41423176A2L)))) == 0x6816FCF3L), l_328)) & 0x59754787L) || 0x55FFL) | 4UL) == 0x7674D077DB204A98L))) < 0xC4D84C3EL), p_2019->g_121))) && p_2019->g_20)))))) , l_349))
        { /* block id: 140 */
            int8_t l_351 = 1L;
            int64_t *l_354 = &p_2019->g_226;
            int64_t **l_357 = (void*)0;
            int64_t **l_358[6][10][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint16_t *l_371 = &l_307;
            int32_t *l_381 = &p_2019->g_20;
            int32_t **l_380 = &l_381;
            int32_t l_389 = 0x56CC3741L;
            int i, j, k;
            l_350 = (p_2019->g_68 , p_47);
            l_351 = 1L;
            if (((safe_div_func_int16_t_s_s(((*p_2019->g_255) ^ ((*l_354) = l_328)), ((safe_div_func_int64_t_s_s(((((l_359[0][8] = l_354) != &p_2019->g_332) >= ((*l_310) = l_351)) >= ((safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_328, ((l_351 != (((*l_371) &= ((*l_300) = (safe_mod_func_int32_t_s_s(l_366, (safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((p_2019->g_196[1][1] || 1UL), l_351)) , p_2019->g_68), 0x33D3L)))))) & l_351)) | p_2019->g_112))), l_328)) && l_372)), 0xA27CF7A2345CDD01L)) | l_351))) ^ 0x18DE1C76L))
            { /* block id: 148 */
                return &p_2019->g_20;
            }
            else
            { /* block id: 150 */
                int32_t **l_382 = &l_381;
                int32_t l_385 = 0x387AFCBFL;
                int16_t *l_386 = (void*)0;
                int16_t *l_387 = (void*)0;
                int16_t *l_388 = &p_2019->g_69;
                l_385 = (((((safe_unary_minus_func_uint16_t_u((((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((0x7AD67D59L != ((((l_300 == l_371) < (*p_2019->g_255)) <= (-1L)) , p_2019->g_196[0][2])), ((*l_388) = ((+((safe_add_func_int8_t_s_s((l_380 != l_382), (((((*l_310) = ((safe_div_func_int64_t_s_s((-5L), l_351)) < l_351)) & l_385) == 1UL) != 0x20321E013252CBBBL))) & p_2019->g_122)) ^ l_385)))), l_328)) & l_385) >= p_2019->g_71[4]))) && p_2019->g_71[3]) > l_385) ^ 0x3CAE9386F8ACE730L) >= p_2019->g_68);
                l_389 = l_351;
            }
        }
        else
        { /* block id: 156 */
            int32_t l_402 = (-7L);
            uint32_t *l_416 = &p_2019->g_71[6];
            int16_t *l_417 = &p_2019->g_69;
            int16_t *l_419 = &p_2019->g_420;
            int32_t l_423 = 0x64744210L;
            int32_t l_425 = (-1L);
            int8_t l_433 = (-7L);
            uint64_t *l_485[10][10][2] = {{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}},{{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208},{(void*)0,&p_2019->g_208}}};
            int32_t l_486 = 0x53B9E6C4L;
            int i, j, k;
            if ((safe_sub_func_uint16_t_u_u((!p_2019->g_18), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_419) ^= (((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((l_402 > (p_2019->g_418 = ((4294967287UL == (7L != ((safe_rshift_func_uint8_t_u_u(((*p_2019->g_255) || (safe_sub_func_int16_t_s_s(((*l_417) ^= (((((**l_309) = (safe_rshift_func_uint16_t_u_s(((*l_300) |= (safe_unary_minus_func_uint64_t_u((safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(p_2019->g_124, 0)) <= ((*l_416) |= (*l_350))), (*l_350))) || ((void*)0 != (*l_309))), (*l_350)))))), 12))) >= (*l_350)) > p_2019->g_288) & 7UL)), p_2019->g_293))), (*l_350))) || (*l_350)))) > l_402))) , 0x2BL), 1)), 0xBDL)) > p_2019->g_122), 2)) | 0x3DE3613C404A4CC1L) <= 0x1BDB1D715F2161BBL)), 14)), 14)))))
            { /* block id: 163 */
                int8_t l_421[7][5] = {{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL},{0x44L,0x1AL,0x5EL,0x77L,0x2FL}};
                int32_t l_447 = (-4L);
                int i, j;
                ++p_2019->g_426;
                for (p_2019->g_294 = (-22); (p_2019->g_294 != (-6)); p_2019->g_294++)
                { /* block id: 167 */
                    uint32_t l_446[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_446[i][j] = 0UL;
                    }
                    l_402 |= (safe_sub_func_int8_t_s_s(l_433, (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((0x503AL < (l_447 ^= (((l_433 != (safe_rshift_func_int8_t_s_u((((((safe_sub_func_int8_t_s_s(l_421[6][2], (&l_424 == (void*)0))) <= (-6L)) || (l_433 == ((*l_416) ^= p_2019->g_295[1][0][4]))) >= l_446[1][0]) || 0UL), 6))) <= 4294967286UL) < 4294967292UL))), p_2019->g_208)), 1L)), l_423))));
                    if (p_2019->g_158)
                        break;
                    for (l_447 = 0; (l_447 != 26); l_447 = safe_add_func_int8_t_s_s(l_447, 6))
                    { /* block id: 174 */
                        uint32_t l_450 = 0UL;
                        l_450 &= 0L;
                    }
                    (*l_350) = (*l_350);
                }
            }
            else
            { /* block id: 179 */
                uint16_t l_463[1][5] = {{65529UL,65529UL,65529UL,65529UL,65529UL}};
                int8_t *l_470 = (void*)0;
                int8_t *l_471[10][8][1] = {{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}},{{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418},{&p_2019->g_418}}};
                int32_t l_472 = (-1L);
                int32_t l_473[8][8] = {{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL},{5L,1L,1L,0x2C296948L,1L,1L,5L,0x45517E1EL}};
                int64_t *l_475 = &l_424;
                int i, j, k;
                p_2019->g_476[4][0] ^= (((*l_475) = ((safe_sub_func_int32_t_s_s(((((*l_298) = (((p_2019->g_474 ^= ((((*l_300) |= (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((*l_350), 8)) && (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_463[0][3], ((safe_mul_func_uint8_t_u_u(l_425, l_402)) , (l_473[3][4] = (+(l_402 ^ (safe_mod_func_uint64_t_u_u((0x1D1F0378D528E527L && (safe_rshift_func_uint8_t_u_s((*l_350), (l_472 = p_2019->g_62)))), (9UL & l_463[0][4]))))))))), 9L)) <= l_433), 1L))), p_2019->g_71[3]))) , 1UL) <= l_402)) , &p_2019->g_20) != (void*)0)) , &p_2019->g_293) != (void*)0), l_433)) , (-1L))) ^ 0x503220BE2BBF9F63L);
            }
            l_350 = func_49(p_2019->g_476[4][0], l_402, ((+(safe_sub_func_uint32_t_u_u(((p_2019->g_332 || ((safe_rshift_func_uint8_t_u_u((*l_350), (254UL || (0x7629L < (((*l_350) > (*l_350)) || ((l_423 &= (safe_sub_func_int8_t_s_s(((*l_350) & (*l_350)), (*l_350)))) , p_2019->g_121)))))) , p_2019->g_196[1][0])) || (*l_350)), 0x3D436859L))) != p_2019->g_332), p_2019);
            p_2019->g_487 = func_49(l_423, (l_486 &= (((!l_307) ^ (safe_sub_func_int32_t_s_s((l_402 = (!l_433)), (l_485[9][9][0] == (void*)0)))) , (((((p_2019->g_158 ^ ((&l_485[8][2][1] != (void*)0) >= ((*l_417) = ((*l_419) = (((*p_2019->g_255) , l_423) , (-5L)))))) ^ l_425) < l_425) <= 0xBE92EC83L) && 0x31BCF7D7B6C3901BL))), l_366, p_2019);
        }
    }
    return &p_2019->g_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_70 p_2019->g_18 p_2019->g_68 p_2019->g_62 p_2019->g_58 p_2019->g_112 p_2019->g_71 p_2019->g_69 p_2019->g_125 p_2019->g_124 p_2019->g_20 p_2019->g_197 p_2019->g_158 p_2019->g_226 p_2019->g_254 p_2019->g_208 p_2019->g_255
 * writes: p_2019->g_68 p_2019->g_58 p_2019->g_112 p_2019->g_69 p_2019->g_62 p_2019->g_125 p_2019->g_158 p_2019->g_196 p_2019->g_208 p_2019->g_226 p_2019->g_276
 */
int32_t * func_49(uint32_t  p_50, int32_t  p_51, uint16_t  p_52, struct S0 * p_2019)
{ /* block id: 19 */
    int32_t l_88 = (-4L);
    uint64_t *l_97 = (void*)0;
    int32_t l_98[8][1][7] = {{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}},{{0x7D34EA09L,0x5559FE4DL,0x5559FE4DL,0x7D34EA09L,1L,0x236EDAE8L,0x236EDAE8L}}};
    uint32_t l_99 = 0xD9B51ECCL;
    uint32_t l_100[3][5] = {{0xBF48DF11L,0x0AEE99EAL,4294967291UL,0x0AEE99EAL,0xBF48DF11L},{0xBF48DF11L,0x0AEE99EAL,4294967291UL,0x0AEE99EAL,0xBF48DF11L},{0xBF48DF11L,0x0AEE99EAL,4294967291UL,0x0AEE99EAL,0xBF48DF11L}};
    int64_t l_224 = 0L;
    int32_t *l_267[5][8] = {{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20},{&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20,&p_2019->g_20}};
    int i, j, k;
    if ((safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_2019->g_70, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xBEL, 3)), (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_2019->g_18, ((l_88 != l_88) > (safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((p_51 , (-10L)), (safe_mod_func_uint64_t_u_u((((l_98[5][0][3] = (p_51 ^ p_51)) != l_88) , p_52), l_99)))), 0x84D5L)), l_99))))) ^ l_88), l_88)))))), l_100[2][3])) , 4294967293UL), 1L)))
    { /* block id: 21 */
        int64_t l_108[4][4][9] = {{{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L}},{{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L}},{{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L}},{{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L},{(-3L),(-1L),(-1L),(-3L),(-1L),0x08325B119D2B5444L,1L,(-1L),0L}}};
        int32_t l_119 = 0L;
        int32_t l_120 = 1L;
        int32_t l_123 = 3L;
        int32_t *l_154 = &l_123;
        uint64_t *l_212 = &p_2019->g_208;
        uint8_t l_240 = 0x5DL;
        int i, j, k;
lbl_161:
        for (p_2019->g_68 = 0; (p_2019->g_68 >= (-1)); p_2019->g_68 = safe_sub_func_uint64_t_u_u(p_2019->g_68, 6))
        { /* block id: 24 */
            int32_t *l_104 = &l_98[5][0][3];
            int32_t **l_103 = &l_104;
            (*l_103) = (void*)0;
            if (p_2019->g_62)
                continue;
        }
        for (l_88 = 0; (l_88 == (-17)); --l_88)
        { /* block id: 30 */
            int32_t *l_107[4][7][6] = {{{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]}},{{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]}},{{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]}},{{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]},{&p_2019->g_62,&p_2019->g_62,(void*)0,(void*)0,&l_98[1][0][3],&l_98[5][0][3]}}};
            int32_t **l_116 = &l_107[3][0][1];
            int16_t l_152 = 0x7010L;
            uint8_t l_155 = 3UL;
            uint32_t l_209[3][8][8] = {{{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL}},{{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL}},{{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL},{0xFEA6540CL,4294967295UL,1UL,0xCDFA98FEL,4294967293UL,0UL,0UL,4294967293UL}}};
            int i, j, k;
            if ((l_108[2][2][0] ^= p_2019->g_70))
            { /* block id: 32 */
                int32_t l_111 = 4L;
                for (p_2019->g_58 = (-27); (p_2019->g_58 >= 51); p_2019->g_58 = safe_add_func_int32_t_s_s(p_2019->g_58, 4))
                { /* block id: 35 */
                    p_2019->g_112--;
                    if (p_2019->g_71[3])
                        break;
                }
            }
            else
            { /* block id: 39 */
                uint32_t l_115 = 0x76425F51L;
                if (l_115)
                    break;
            }
            (*l_116) = &p_51;
            for (p_2019->g_69 = 0; (p_2019->g_69 > 16); p_2019->g_69 = safe_add_func_uint16_t_u_u(p_2019->g_69, 3))
            { /* block id: 45 */
                int64_t l_153 = 1L;
                int16_t *l_156 = &l_152;
                uint64_t *l_157 = &p_2019->g_158;
                int32_t l_164 = 7L;
                int32_t *l_204 = &l_164;
                p_2019->g_62 |= (p_50 < 0x57L);
                ++p_2019->g_125;
                if ((((*l_157) = (safe_mul_func_uint16_t_u_u(9UL, (safe_mul_func_int16_t_s_s((((*l_156) = ((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_2019->g_70 , 0x38L), (safe_mul_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((&l_98[5][0][3] != ((((((p_2019->g_124 , l_100[1][4]) & (!((safe_lshift_func_int8_t_s_s(p_2019->g_71[3], 5)) != 0x46AC962BC7585655L))) , p_2019->g_125) == p_2019->g_18) & p_2019->g_70) , (void*)0)), p_2019->g_69)), 4)) , l_152) | 1L) | 0UL) < 65529UL), l_153)))), p_2019->g_71[8])) || 0x90F0L) , &p_51) == l_154), l_98[5][0][3])) || 0x1156ABEB0F8655CFL), (*l_154))), l_155)) || p_2019->g_62)) != 0x259BL), l_98[0][0][0]))))) ^ 0UL))
                { /* block id: 50 */
                    for (l_123 = 29; (l_123 != (-23)); --l_123)
                    { /* block id: 53 */
                        return &p_2019->g_20;
                    }
                    if (l_99)
                        goto lbl_161;
                    (*l_116) = &p_51;
                    for (l_123 = 0; (l_123 < (-1)); l_123--)
                    { /* block id: 60 */
                        uint16_t l_165 = 65529UL;
                        uint8_t *l_172 = &l_155;
                        uint8_t *l_175 = &p_2019->g_125;
                        int64_t *l_194 = &l_108[2][2][0];
                        uint8_t *l_195 = &p_2019->g_196[1][1];
                        ++l_165;
                        if (p_51)
                            break;
                        p_2019->g_62 = (safe_mul_func_uint8_t_u_u((l_98[5][0][5] = (safe_sub_func_int16_t_s_s(((p_2019->g_125 , ((l_164 && ((*l_195) = (((*l_194) = (((4294967290UL | (((++(*l_172)) >= ((*l_175)--)) >= ((p_52 == (safe_add_func_uint64_t_u_u(p_2019->g_124, 0x61142FEC1ED602CCL))) , ((((((safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u((~((safe_sub_func_uint32_t_u_u(l_165, (l_164 = (safe_div_func_uint8_t_u_u((p_2019->g_20 , (safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(1L, 8)), p_2019->g_69)) && l_100[2][3]), p_2019->g_68))), p_2019->g_18))))) < 0x40DFC3A39D6D4906L)), 1UL)), p_51)) , p_51) , (void*)0) != &p_2019->g_62) , 8UL) , p_2019->g_71[3])))) > 0xFAL) >= l_88)) <= l_153))) , p_2019->g_197)) == p_2019->g_197), 0x5FF7L))), 0xEFL));
                        (*l_116) = &l_164;
                    }
                }
                else
                { /* block id: 72 */
                    uint64_t *l_207 = &p_2019->g_208;
                    (*l_204) = (p_2019->g_62 || ((((safe_lshift_func_int8_t_s_s((p_50 <= p_50), 3)) || ((safe_rshift_func_uint16_t_u_s(9UL, 12)) ^ ((l_204 != &p_51) < (p_52 & (1UL <= ((*l_207) = ((*l_157) = (safe_sub_func_int32_t_s_s(((((p_50 <= 0x67E1L) | 0x06086E3DL) && p_51) | 1L), (-10L)))))))))) != l_209[1][3][6]) > p_52));
                }
            }
        }
        for (p_2019->g_158 = 0; (p_2019->g_158 != 16); p_2019->g_158++)
        { /* block id: 81 */
            uint64_t **l_213 = &l_212;
            int64_t *l_214 = &l_108[2][2][0];
            int16_t *l_223 = &p_2019->g_69;
            int32_t l_225 = 0x683A89B0L;
            int32_t l_227 = 0x0464180AL;
            if ((((*l_214) = ((((*l_213) = l_212) != l_97) & p_50)) < (safe_div_func_int8_t_s_s((p_51 , (safe_mul_func_uint16_t_u_u((*l_154), ((*l_154) != (18446744073709551613UL == (((p_2019->g_226 ^= (l_225 = (((((*l_223) = (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((*l_154) < (-5L)), p_50)), p_52))) && (-8L)) < l_224) & l_225))) > p_52) <= l_227)))))), p_51))))
            { /* block id: 87 */
                int32_t **l_228 = &l_154;
                int32_t *l_229 = &l_119;
                int32_t *l_230 = &l_123;
                int32_t *l_231 = &l_119;
                int32_t *l_232 = &l_119;
                int32_t *l_233 = (void*)0;
                int32_t *l_234 = &p_2019->g_62;
                int32_t *l_235 = (void*)0;
                int32_t *l_236 = &l_120;
                int32_t *l_237 = &l_225;
                int32_t *l_238 = &l_227;
                int32_t *l_239[6] = {&l_123,&l_123,&l_123,&l_123,&l_123,&l_123};
                uint16_t *l_256 = &p_2019->g_58;
                uint8_t *l_274[8][10][3] = {{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}},{{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125},{&p_2019->g_196[0][0],&p_2019->g_125,&p_2019->g_125}}};
                int i, j, k;
                (*l_228) = &l_98[2][0][5];
                l_240++;
                for (l_227 = 0; (l_227 >= 0); l_227 -= 1)
                { /* block id: 92 */
                    int32_t *l_243 = &p_2019->g_20;
                    (*l_228) = &p_51;
                    return l_243;
                }
                (*l_228) = (((*l_154) = (safe_sub_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((((*l_256) = (((*l_231) , p_2019->g_254[0]) != (void*)0)) , ((safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((*l_234) = (safe_rshift_func_uint8_t_u_s(((l_267[3][5] == &p_2019->g_20) , l_98[5][0][3]), 4))), (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((((p_52 , (((safe_mul_func_int16_t_s_s(((*l_223) = (0x75D6D8AEL & 7L)), 1L)) | (-7L)) > 0x6895L)) , &p_2019->g_58) != (void*)0), 1L)) , l_225), 2)))), 7)), l_99)), 4UL)) , 0x32L)) || (*l_237)), p_2019->g_208)) != 0x2149L), l_225)), 65535UL)), 0x745182DEL)) ^ (*p_2019->g_255)) ^ (-10L)) < 0x7CL), p_50))) , &p_2019->g_62);
            }
            else
            { /* block id: 101 */
                int32_t *l_275 = &l_98[6][0][2];
                uint8_t l_277[5] = {0x88L,0x88L,0x88L,0x88L,0x88L};
                int i;
                p_2019->g_276 = l_275;
                ++l_277[4];
            }
        }
    }
    else
    { /* block id: 106 */
        return l_267[3][5];
    }
    return l_267[3][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_2019->g_62 p_2019->g_71
 * writes: p_2019->g_62 p_2019->g_71
 */
int64_t  func_53(int8_t  p_54, struct S0 * p_2019)
{ /* block id: 9 */
    uint16_t l_64[3][10][1] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
    int8_t *l_67 = &p_2019->g_68;
    int i, j, k;
    for (p_54 = 0; (p_54 >= (-1)); p_54 = safe_sub_func_uint8_t_u_u(p_54, 1))
    { /* block id: 12 */
        int32_t *l_61 = &p_2019->g_62;
        int32_t *l_63[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_63[i][j] = &p_2019->g_62;
        }
        --l_64[1][9][0];
        if ((*l_61))
            break;
        (*l_61) = (l_67 != l_67);
        p_2019->g_71[3]++;
    }
    return p_54;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2020;
    struct S0* p_2019 = &c_2020;
    struct S0 c_2021 = {
        0x500585B7L, // p_2019->g_4
        0x0E5E53494ABC2489L, // p_2019->g_18
        8L, // p_2019->g_20
        1L, // p_2019->g_45
        0UL, // p_2019->g_58
        (-1L), // p_2019->g_62
        0L, // p_2019->g_68
        (-1L), // p_2019->g_69
        0x34L, // p_2019->g_70
        {0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L,0x7D796E99L}, // p_2019->g_71
        0UL, // p_2019->g_112
        0x348C356EL, // p_2019->g_121
        0L, // p_2019->g_122
        (-10L), // p_2019->g_124
        0UL, // p_2019->g_125
        0x32D04EE4DB16BE7CL, // p_2019->g_158
        {{1UL,1UL,1UL},{1UL,1UL,1UL}}, // p_2019->g_196
        (void*)0, // p_2019->g_197
        1UL, // p_2019->g_208
        1L, // p_2019->g_226
        &p_2019->g_158, // p_2019->g_255
        {&p_2019->g_255}, // p_2019->g_254
        &p_2019->g_62, // p_2019->g_276
        4UL, // p_2019->g_288
        0L, // p_2019->g_292
        0x155880D6DFFD78A4L, // p_2019->g_293
        (-1L), // p_2019->g_294
        {{{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L}},{{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L}},{{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L}},{{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L},{0xCB10E319L,0xF209037DL,1UL,0UL,0x9BC23BC0L}}}, // p_2019->g_295
        0L, // p_2019->g_332
        0L, // p_2019->g_418
        0x3E62L, // p_2019->g_420
        {{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}},{{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)},{(-7L),0x2CE3L,(-1L),0x0DC3L,(-1L),(-1L)}}}, // p_2019->g_422
        0xABL, // p_2019->g_426
        0UL, // p_2019->g_474
        {{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L},{1L,0x18B21541L}}, // p_2019->g_476
        &p_2019->g_62, // p_2019->g_487
        0x39L, // p_2019->g_511
        0x3C3AC1C0L, // p_2019->g_517
        0x8317F8EB8B534629L, // p_2019->g_561
        0x1C926699L, // p_2019->g_567
        (void*)0, // p_2019->g_595
        0x287BCFD33150227BL, // p_2019->g_616
        0x60A6L, // p_2019->g_617
        0x9EBCBCAFL, // p_2019->g_618
        0L, // p_2019->g_631
        0x21C05637L, // p_2019->g_632
        (-4L), // p_2019->g_653
        0x725BL, // p_2019->g_654
        0x62L, // p_2019->g_657
        0x37C94E50L, // p_2019->g_658
        {{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L},{0x606DE2F8L,0x2EF8A819L,0x39DC8054L,0x7052CD19L,(-1L),0x6908017AL,0x606DE2F8L,0L,0L}}, // p_2019->g_687
        4294967286UL, // p_2019->g_693
        {0x734FE306L,0x7825CE2DL,0x734FE306L,0x734FE306L,0x7825CE2DL,0x734FE306L,0x734FE306L,0x7825CE2DL}, // p_2019->g_721
        (void*)0, // p_2019->g_805
        &p_2019->g_616, // p_2019->g_812
        &p_2019->g_69, // p_2019->g_820
        &p_2019->g_820, // p_2019->g_819
        0x4A44ADD8L, // p_2019->g_898
        1L, // p_2019->g_934
        &p_2019->g_426, // p_2019->g_970
        &p_2019->g_970, // p_2019->g_969
        0x6925213DL, // p_2019->g_1010
        0L, // p_2019->g_1025
        18446744073709551613UL, // p_2019->g_1027
        0x3A35FF01EF27CF6FL, // p_2019->g_1070
        (-5L), // p_2019->g_1139
        &p_2019->g_254[0], // p_2019->g_1190
        0x4184L, // p_2019->g_1272
        {{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}},{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}},{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}},{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}},{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}},{{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418},{&p_2019->g_657,&p_2019->g_294,&p_2019->g_418,&p_2019->g_418,&p_2019->g_294,&p_2019->g_418}}}, // p_2019->g_1317
        &p_2019->g_1317[4][5][5], // p_2019->g_1316
        &p_2019->g_721[7], // p_2019->g_1342
        0xE9F930B7L, // p_2019->g_1434
        0x255FL, // p_2019->g_1457
        0xFCF937D9B4F67941L, // p_2019->g_1516
        1L, // p_2019->g_1540
        &p_2019->g_1540, // p_2019->g_1539
        &p_2019->g_1539, // p_2019->g_1538
        &p_2019->g_1538, // p_2019->g_1537
        &p_2019->g_1537, // p_2019->g_1536
        &p_2019->g_112, // p_2019->g_1637
        &p_2019->g_812, // p_2019->g_1697
        &p_2019->g_1697, // p_2019->g_1696
        65529UL, // p_2019->g_1699
        &p_2019->g_295[3][1][0], // p_2019->g_1708
        {{&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,(void*)0,(void*)0,(void*)0,(void*)0,&p_2019->g_1708,&p_2019->g_1708},{&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,(void*)0,(void*)0,(void*)0,(void*)0,&p_2019->g_1708,&p_2019->g_1708},{&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,(void*)0,(void*)0,(void*)0,(void*)0,&p_2019->g_1708,&p_2019->g_1708},{&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,&p_2019->g_1708,(void*)0,(void*)0,(void*)0,(void*)0,&p_2019->g_1708,&p_2019->g_1708}}, // p_2019->g_1707
        0xC78BL, // p_2019->g_1774
        0x6F488178L, // p_2019->g_1789
        8L, // p_2019->g_1841
        {{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}},{{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0},{(void*)0,&p_2019->g_595,&p_2019->g_595,(void*)0,&p_2019->g_595,(void*)0}}}, // p_2019->g_1854
        {{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}},{{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL},{0xDFL,0xE4L,0xDFL,0xDFL}}}, // p_2019->g_1868
        255UL, // p_2019->g_2018
    };
    c_2020 = c_2021;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2019);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2019->g_4, "p_2019->g_4", print_hash_value);
    transparent_crc(p_2019->g_18, "p_2019->g_18", print_hash_value);
    transparent_crc(p_2019->g_20, "p_2019->g_20", print_hash_value);
    transparent_crc(p_2019->g_45, "p_2019->g_45", print_hash_value);
    transparent_crc(p_2019->g_58, "p_2019->g_58", print_hash_value);
    transparent_crc(p_2019->g_62, "p_2019->g_62", print_hash_value);
    transparent_crc(p_2019->g_68, "p_2019->g_68", print_hash_value);
    transparent_crc(p_2019->g_69, "p_2019->g_69", print_hash_value);
    transparent_crc(p_2019->g_70, "p_2019->g_70", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2019->g_71[i], "p_2019->g_71[i]", print_hash_value);

    }
    transparent_crc(p_2019->g_112, "p_2019->g_112", print_hash_value);
    transparent_crc(p_2019->g_121, "p_2019->g_121", print_hash_value);
    transparent_crc(p_2019->g_122, "p_2019->g_122", print_hash_value);
    transparent_crc(p_2019->g_124, "p_2019->g_124", print_hash_value);
    transparent_crc(p_2019->g_125, "p_2019->g_125", print_hash_value);
    transparent_crc(p_2019->g_158, "p_2019->g_158", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2019->g_196[i][j], "p_2019->g_196[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2019->g_208, "p_2019->g_208", print_hash_value);
    transparent_crc(p_2019->g_226, "p_2019->g_226", print_hash_value);
    transparent_crc(p_2019->g_288, "p_2019->g_288", print_hash_value);
    transparent_crc(p_2019->g_292, "p_2019->g_292", print_hash_value);
    transparent_crc(p_2019->g_293, "p_2019->g_293", print_hash_value);
    transparent_crc(p_2019->g_294, "p_2019->g_294", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2019->g_295[i][j][k], "p_2019->g_295[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2019->g_332, "p_2019->g_332", print_hash_value);
    transparent_crc(p_2019->g_418, "p_2019->g_418", print_hash_value);
    transparent_crc(p_2019->g_420, "p_2019->g_420", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2019->g_422[i][j][k], "p_2019->g_422[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2019->g_426, "p_2019->g_426", print_hash_value);
    transparent_crc(p_2019->g_474, "p_2019->g_474", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2019->g_476[i][j], "p_2019->g_476[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2019->g_511, "p_2019->g_511", print_hash_value);
    transparent_crc(p_2019->g_517, "p_2019->g_517", print_hash_value);
    transparent_crc(p_2019->g_561, "p_2019->g_561", print_hash_value);
    transparent_crc(p_2019->g_567, "p_2019->g_567", print_hash_value);
    transparent_crc(p_2019->g_616, "p_2019->g_616", print_hash_value);
    transparent_crc(p_2019->g_617, "p_2019->g_617", print_hash_value);
    transparent_crc(p_2019->g_618, "p_2019->g_618", print_hash_value);
    transparent_crc(p_2019->g_631, "p_2019->g_631", print_hash_value);
    transparent_crc(p_2019->g_632, "p_2019->g_632", print_hash_value);
    transparent_crc(p_2019->g_653, "p_2019->g_653", print_hash_value);
    transparent_crc(p_2019->g_654, "p_2019->g_654", print_hash_value);
    transparent_crc(p_2019->g_657, "p_2019->g_657", print_hash_value);
    transparent_crc(p_2019->g_658, "p_2019->g_658", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2019->g_687[i][j], "p_2019->g_687[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2019->g_693, "p_2019->g_693", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2019->g_721[i], "p_2019->g_721[i]", print_hash_value);

    }
    transparent_crc(p_2019->g_898, "p_2019->g_898", print_hash_value);
    transparent_crc(p_2019->g_934, "p_2019->g_934", print_hash_value);
    transparent_crc(p_2019->g_1010, "p_2019->g_1010", print_hash_value);
    transparent_crc(p_2019->g_1025, "p_2019->g_1025", print_hash_value);
    transparent_crc(p_2019->g_1027, "p_2019->g_1027", print_hash_value);
    transparent_crc(p_2019->g_1070, "p_2019->g_1070", print_hash_value);
    transparent_crc(p_2019->g_1139, "p_2019->g_1139", print_hash_value);
    transparent_crc(p_2019->g_1272, "p_2019->g_1272", print_hash_value);
    transparent_crc(p_2019->g_1434, "p_2019->g_1434", print_hash_value);
    transparent_crc(p_2019->g_1457, "p_2019->g_1457", print_hash_value);
    transparent_crc(p_2019->g_1516, "p_2019->g_1516", print_hash_value);
    transparent_crc(p_2019->g_1540, "p_2019->g_1540", print_hash_value);
    transparent_crc(p_2019->g_1699, "p_2019->g_1699", print_hash_value);
    transparent_crc(p_2019->g_1774, "p_2019->g_1774", print_hash_value);
    transparent_crc(p_2019->g_1789, "p_2019->g_1789", print_hash_value);
    transparent_crc(p_2019->g_1841, "p_2019->g_1841", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_2019->g_1868[i][j][k], "p_2019->g_1868[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2019->g_2018, "p_2019->g_2018", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
