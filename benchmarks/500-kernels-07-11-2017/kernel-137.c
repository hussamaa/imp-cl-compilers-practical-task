// -g 52,42,4 -l 1,14,4
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


// Seed: 1226852162

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2[8][7];
    int32_t g_5;
    int32_t * volatile g_4;
    int32_t g_52;
    int32_t * volatile g_51;
    uint8_t g_62[8];
    uint16_t g_79;
    int32_t g_91[10][8];
    uint8_t g_97[9];
    int32_t *g_104;
    int32_t ** volatile g_103[10][1];
    int32_t ** volatile g_105;
    uint8_t *g_135;
    uint8_t * volatile *g_134;
    uint32_t g_165;
    int32_t **g_168;
    uint16_t g_179[7];
    uint32_t g_220;
    int32_t * volatile g_245;
    int8_t g_251;
    uint32_t g_270;
    int16_t g_276;
    volatile uint16_t g_286[9][6];
    uint64_t g_295;
    uint64_t g_306;
    int32_t * volatile g_315;
    int64_t g_403;
    uint64_t g_406;
    int16_t *g_415;
    int16_t **g_414;
    int8_t *g_457;
    int32_t * volatile g_461;
    int32_t g_503;
    uint8_t **g_529[7][4];
    uint8_t ***g_528;
    int32_t g_543;
    int32_t g_549;
    uint32_t g_573[8];
    int8_t g_599[2];
    int32_t * volatile * volatile * volatile *g_663;
    int32_t ***g_665;
    int32_t ****g_664;
    uint8_t g_697[7][6];
    int32_t *****g_700;
    int32_t ******g_883;
    int32_t *******g_882;
    int32_t * volatile g_899;
    uint32_t *g_955;
    uint32_t **g_954;
    uint32_t *** volatile g_953;
    int64_t g_970[10][2];
    int64_t g_981;
    uint16_t *g_989[7][10][3];
    uint16_t **g_988;
    int8_t **g_1021;
    int8_t *** volatile g_1020[10][1][6];
    int8_t *** volatile g_1022[1];
    int8_t *** volatile g_1023;
    uint32_t g_1067;
    uint32_t *** volatile g_1070;
    volatile int32_t g_1137;
    int8_t ***g_1173[6][3];
    volatile uint64_t g_1187;
    volatile uint64_t *g_1186;
    volatile uint64_t * volatile *g_1185[1];
    volatile int32_t g_1282;
    volatile int32_t *g_1281;
    volatile int32_t * volatile * volatile g_1280;
    volatile int32_t * volatile * volatile *g_1279[2][1];
    volatile int32_t * volatile * volatile * volatile *g_1278[7][8][4];
    volatile int32_t * volatile * volatile * volatile * volatile *g_1277;
    int64_t *g_1333;
    int64_t * volatile *g_1332;
    int32_t *g_1345;
    int32_t ** volatile g_1344;
    uint64_t g_1386;
    int8_t ****g_1390[3][1][4];
    int16_t * volatile * volatile g_1400;
    int16_t * volatile * volatile *g_1399[7];
    int16_t * volatile * volatile **g_1398;
    int32_t g_1420;
    uint32_t g_1457;
    int32_t g_1481;
    uint16_t g_1542;
    int32_t ** volatile g_1628;
    uint8_t *g_1731;
    volatile int32_t * volatile * volatile g_1775;
    volatile uint64_t g_1782;
    uint64_t g_1809;
    int16_t g_1848;
    int16_t *g_1847;
    int16_t *g_1854;
    uint8_t g_1872;
    uint8_t *g_1884;
    int16_t g_1907;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1919);
int32_t * func_6(uint8_t  p_7, int32_t * p_8, struct S0 * p_1919);
int32_t  func_22(int64_t  p_23, int32_t  p_24, uint32_t  p_25, uint64_t  p_26, struct S0 * p_1919);
uint8_t  func_27(int32_t * p_28, int32_t  p_29, struct S0 * p_1919);
uint32_t  func_32(int32_t  p_33, struct S0 * p_1919);
int8_t  func_34(int32_t * p_35, int64_t  p_36, int32_t  p_37, int64_t  p_38, struct S0 * p_1919);
uint16_t  func_41(int16_t  p_42, uint64_t  p_43, int32_t  p_44, int32_t * p_45, struct S0 * p_1919);
uint32_t  func_46(int32_t * p_47, int32_t * p_48, uint8_t  p_49, struct S0 * p_1919);
int32_t * func_53(int32_t * p_54, int32_t * p_55, uint32_t  p_56, struct S0 * p_1919);
int32_t * func_66(int64_t  p_67, int32_t  p_68, struct S0 * p_1919);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1919->g_2 p_1919->g_4 p_1919->g_5 p_1919->g_1067 p_1919->g_52 p_1919->g_697 p_1919->g_415 p_1919->g_168 p_1919->g_700 p_1919->g_664 p_1919->g_665 p_1919->g_573 p_1919->g_457 p_1919->g_251 p_1919->g_899 p_1919->g_91 p_1919->g_599 p_1919->g_79 p_1919->g_306 p_1919->g_245 p_1919->g_1185 p_1919->g_414 p_1919->g_988 p_1919->g_220 p_1919->g_406 p_1919->g_51 p_1919->g_105 p_1919->g_97 p_1919->g_104 p_1919->g_134 p_1919->g_165 p_1919->g_135 p_1919->g_179 p_1919->g_461 p_1919->g_1277 p_1919->g_276 p_1919->g_549 p_1919->g_403 p_1919->g_1481 p_1919->g_1345 p_1919->g_503 p_1919->g_1344 p_1919->g_270 p_1919->g_882 p_1919->g_883 p_1919->g_543 p_1919->g_981 p_1919->g_1332 p_1919->g_1333 p_1919->g_1628 p_1919->g_295 p_1919->g_1809 p_1919->g_1398 p_1919->g_1399 p_1919->g_1400 p_1919->g_1872 p_1919->g_1848 p_1919->g_1884 p_1919->g_1281 p_1919->g_1282 p_1919->g_1280 p_1919->g_1457 p_1919->g_1731 p_1919->g_62 p_1919->g_954 p_1919->g_955 p_1919->g_1854
 * writes: p_1919->g_5 p_1919->g_1067 p_1919->g_52 p_1919->g_981 p_1919->g_970 p_1919->g_276 p_1919->g_104 p_1919->g_251 p_1919->g_306 p_1919->g_1173 p_1919->g_989 p_1919->g_79 p_1919->g_91 p_1919->g_168 p_1919->g_179 p_1919->g_97 p_1919->g_220 p_1919->g_549 p_1919->g_403 p_1919->g_1457 p_1919->g_1481 p_1919->g_1386 p_1919->g_1345 p_1919->g_270 p_1919->g_135 p_1919->g_543 p_1919->g_295 p_1919->g_503 p_1919->g_1809 p_1919->g_1872 p_1919->g_1282 p_1919->g_62 p_1919->g_1848
 */
int32_t  func_1(struct S0 * p_1919)
{ /* block id: 4 */
    int32_t *l_3 = (void*)0;
    int32_t *l_1645 = &p_1919->g_503;
    uint8_t l_1675 = 0UL;
    uint32_t l_1692 = 0x503FF3D8L;
    int32_t l_1701[10] = {(-1L),0x052A91FBL,(-1L),(-1L),0x052A91FBL,(-1L),(-1L),0x052A91FBL,(-1L),(-1L)};
    int8_t l_1718 = 0x17L;
    int64_t l_1802 = 0x324548E7ACADE974L;
    int16_t *l_1853 = &p_1919->g_1848;
    int32_t l_1882[4] = {0x3B5179C8L,0x3B5179C8L,0x3B5179C8L,0x3B5179C8L};
    uint64_t l_1918 = 0x887D6A9DC0979328L;
    int i;
    (*p_1919->g_4) &= p_1919->g_2[3][3];
    (*p_1919->g_1628) = func_6(p_1919->g_2[3][2], &p_1919->g_5, p_1919);
    for (p_1919->g_295 = 0; (p_1919->g_295 <= 2); p_1919->g_295 += 1)
    { /* block id: 833 */
        int64_t l_1635 = 0x01A46B593AA8D179L;
        int64_t l_1641 = 0x3E5E5A1237CCC641L;
        int32_t l_1642 = 5L;
        int32_t l_1643[3][8][4] = {{{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL}},{{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL}},{{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL},{(-4L),1L,(-10L),0x316D1D8FL}}};
        int64_t l_1707[2];
        int16_t l_1717 = 6L;
        uint16_t l_1789[3][5] = {{0xE12BL,0xE12BL,0xE12BL,0xE12BL,0xE12BL},{0xE12BL,0xE12BL,0xE12BL,0xE12BL,0xE12BL},{0xE12BL,0xE12BL,0xE12BL,0xE12BL,0xE12BL}};
        int32_t l_1796 = 6L;
        int8_t l_1804 = (-2L);
        uint64_t l_1814 = 18446744073709551615UL;
        uint32_t l_1827 = 1UL;
        int8_t l_1861 = 0x2FL;
        int16_t *l_1865 = &p_1919->g_1848;
        uint8_t ****l_1902[5][10][3] = {{{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528}},{{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528}},{{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528}},{{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528}},{{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528},{&p_1919->g_528,(void*)0,&p_1919->g_528}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1707[i] = 0x7537B91816DDFD00L;
        for (p_1919->g_220 = 0; (p_1919->g_220 <= 2); p_1919->g_220 += 1)
        { /* block id: 836 */
            uint32_t *l_1631 = (void*)0;
            uint32_t *l_1632 = &p_1919->g_270;
            int32_t l_1638 = 0x63720A90L;
            uint64_t l_1665[8];
            uint64_t l_1669 = 6UL;
            int64_t l_1672 = (-1L);
            int32_t l_1709 = 1L;
            int32_t l_1710 = 0x15365D5DL;
            int32_t l_1712 = 0x75819776L;
            int8_t l_1713 = 0L;
            int32_t l_1715 = 0x4F888C2AL;
            int32_t l_1716 = 0x4FAA2C9DL;
            int32_t l_1719 = (-1L);
            int32_t l_1721 = 0L;
            int8_t **l_1726 = (void*)0;
            int64_t **l_1733 = (void*)0;
            uint8_t l_1747 = 0xF6L;
            int16_t **l_1753 = &p_1919->g_415;
            int32_t ********l_1756 = (void*)0;
            uint32_t *l_1759 = &p_1919->g_1067;
            uint64_t *l_1760 = &l_1665[5];
            int i;
            for (i = 0; i < 8; i++)
                l_1665[i] = 18446744073709551609UL;
            (1 + 1);
        }
        l_1796 = ((*p_1919->g_1333) && ((((*l_1645) = (safe_mul_func_int8_t_s_s(3L, (*l_1645)))) & (safe_mod_func_uint8_t_u_u(l_1641, l_1789[1][2]))) , (((safe_sub_func_int8_t_s_s(l_1717, ((safe_mod_func_int8_t_s_s((*l_1645), (safe_add_func_int32_t_s_s(((*l_1645) & 1L), (*l_1645))))) != (-1L)))) | (*l_1645)) ^ 1UL)));
        for (p_1919->g_5 = 0; (p_1919->g_5 >= 0); p_1919->g_5 -= 1)
        { /* block id: 915 */
            int64_t l_1803 = 0x31EBFBD1078EC54EL;
            int32_t l_1805 = 0x2869779BL;
            int32_t l_1806 = 0x4D20DF6BL;
            int32_t l_1807 = 0x27E04CD5L;
            int32_t l_1808 = 1L;
            int16_t *l_1846 = &p_1919->g_276;
            int16_t l_1858 = 0L;
            int8_t l_1859 = 0x65L;
            uint32_t *l_1917 = &p_1919->g_270;
            for (p_1919->g_503 = 0; (p_1919->g_503 <= 0); p_1919->g_503 += 1)
            { /* block id: 918 */
                int32_t *l_1797 = &l_1701[2];
                int32_t *l_1798 = &l_1701[8];
                int32_t *l_1799 = (void*)0;
                int32_t *l_1800 = &l_1643[0][6][3];
                int32_t *l_1801[10][2][4] = {{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}},{{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]},{(void*)0,&p_1919->g_5,&p_1919->g_503,&p_1919->g_91[9][5]}}};
                int i, j, k;
                --p_1919->g_1809;
            }
            if ((safe_mul_func_int16_t_s_s((-1L), ((****p_1919->g_1398) ^= l_1803))))
            { /* block id: 922 */
                int16_t *l_1845 = &l_1717;
                int16_t **l_1849 = (void*)0;
                int16_t *l_1851 = &p_1919->g_1848;
                int16_t **l_1850 = &l_1851;
                int16_t **l_1852[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1857 = 0x1489ADAAL;
                int32_t l_1860 = 0L;
                uint64_t *l_1862 = &p_1919->g_1809;
                int32_t l_1863 = 1L;
                uint32_t l_1864[5][10][2] = {{{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL}},{{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL}},{{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL}},{{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL}},{{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL},{0xD2A4FB0AL,0x3BCD47ADL}}};
                int64_t l_1866[5] = {0x2A38D62BB3EE5128L,0x2A38D62BB3EE5128L,0x2A38D62BB3EE5128L,0x2A38D62BB3EE5128L,0x2A38D62BB3EE5128L};
                int i, j, k;
                (****p_1919->g_700) = &l_1808;
            }
            else
            { /* block id: 933 */
                int32_t l_1867 = 1L;
                int32_t l_1868 = 0x5B724F2BL;
                int32_t l_1869 = 0x0A0E4306L;
                uint64_t l_1883[5][3];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1883[i][j] = 2UL;
                }
                for (l_1859 = 0; (l_1859 <= 2); l_1859 += 1)
                { /* block id: 936 */
                    int32_t *l_1870 = &l_1867;
                    int32_t *l_1871 = (void*)0;
                    if ((**p_1919->g_1344))
                        break;
                    ++p_1919->g_1872;
                    (******p_1919->g_882) = &l_1643[0][3][3];
                }
                if ((((((((****p_1919->g_1398) = (((((3UL > ((safe_unary_minus_func_uint16_t_u(l_1807)) | ((((safe_mul_func_int8_t_s_s(l_1867, (((*p_1919->g_1333) |= (*l_1645)) ^ l_1707[0]))) || 0UL) , ((safe_add_func_uint16_t_u_u(l_1642, (safe_mul_func_uint16_t_u_u(l_1859, (+((~0L) && l_1868)))))) , 6UL)) <= 0x3D59L))) > p_1919->g_1848) | l_1867) , 0x348CFD9E0DAC5608L) == 1L)) ^ l_1882[0]) >= l_1883[1][2]) || l_1858) , (*p_1919->g_134)) != p_1919->g_1884))
                { /* block id: 943 */
                    (*l_1645) &= (l_1642 = 0L);
                    for (l_1859 = 0; (l_1859 <= 0); l_1859 += 1)
                    { /* block id: 948 */
                        (*p_1919->g_1281) ^= (safe_lshift_func_uint8_t_u_u(l_1867, 3));
                        l_1643[0][2][0] |= (**p_1919->g_1280);
                        (*p_1919->g_899) = (-3L);
                        if ((**p_1919->g_1344))
                            break;
                    }
                }
                else
                { /* block id: 954 */
                    int8_t l_1887 = 0x4BL;
                    int32_t *l_1888 = &p_1919->g_1481;
                    for (p_1919->g_1457 = 0; (p_1919->g_1457 <= 2); p_1919->g_1457 += 1)
                    { /* block id: 957 */
                        int i, j, k;
                        return l_1643[p_1919->g_295][(p_1919->g_5 + 6)][(p_1919->g_1457 + 1)];
                    }
                    (*p_1919->g_1628) = func_66(l_1887, ((*l_1888) = 7L), p_1919);
                }
            }
            for (p_1919->g_1067 = 0; (p_1919->g_1067 <= 2); p_1919->g_1067 += 1)
            { /* block id: 966 */
                uint64_t l_1903 = 0x7A048211E66FAAC1L;
                for (p_1919->g_79 = 0; (p_1919->g_79 <= 0); p_1919->g_79 += 1)
                { /* block id: 969 */
                    uint32_t *l_1893 = (void*)0;
                    uint32_t *l_1894 = &p_1919->g_270;
                    int32_t l_1906 = 0x4F99EAA2L;
                    uint64_t *l_1908[10][4] = {{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814},{&p_1919->g_1386,&p_1919->g_1809,(void*)0,&l_1814}};
                    int i, j, k;
                    (****p_1919->g_700) = &l_1906;
                    (*l_1645) |= ((safe_div_func_uint8_t_u_u(((*p_1919->g_1731) |= l_1861), (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((l_1906 , l_1906), 7)) >= (l_1917 == (*p_1919->g_954))), l_1858)))) >= (((((*p_1919->g_1854) = (4294967292UL > ((void*)0 != &p_1919->g_220))) | (****p_1919->g_1398)) , &l_1853) == &l_1853));
                }
            }
        }
    }
    return l_1918;
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_2 p_1919->g_5 p_1919->g_697 p_1919->g_4 p_1919->g_415 p_1919->g_168 p_1919->g_700 p_1919->g_664 p_1919->g_665 p_1919->g_573 p_1919->g_457 p_1919->g_251 p_1919->g_899 p_1919->g_91 p_1919->g_599 p_1919->g_79 p_1919->g_306 p_1919->g_245 p_1919->g_52 p_1919->g_1185 p_1919->g_414 p_1919->g_988 p_1919->g_220 p_1919->g_406 p_1919->g_51 p_1919->g_105 p_1919->g_97 p_1919->g_104 p_1919->g_134 p_1919->g_165 p_1919->g_135 p_1919->g_179 p_1919->g_461 p_1919->g_1277 p_1919->g_276 p_1919->g_549 p_1919->g_403 p_1919->g_1481 p_1919->g_1345 p_1919->g_503 p_1919->g_1344 p_1919->g_270 p_1919->g_882 p_1919->g_883 p_1919->g_543 p_1919->g_981 p_1919->g_1332 p_1919->g_1333 p_1919->g_1067
 * writes: p_1919->g_5 p_1919->g_1067 p_1919->g_52 p_1919->g_981 p_1919->g_970 p_1919->g_276 p_1919->g_104 p_1919->g_251 p_1919->g_306 p_1919->g_1173 p_1919->g_989 p_1919->g_79 p_1919->g_91 p_1919->g_168 p_1919->g_179 p_1919->g_97 p_1919->g_220 p_1919->g_549 p_1919->g_403 p_1919->g_1457 p_1919->g_1481 p_1919->g_1386 p_1919->g_1345 p_1919->g_270 p_1919->g_135 p_1919->g_543
 */
int32_t * func_6(uint8_t  p_7, int32_t * p_8, struct S0 * p_1919)
{ /* block id: 6 */
    uint16_t l_11[1];
    int32_t l_16 = 0x71540EE1L;
    int32_t *l_17 = &l_16;
    uint8_t l_509 = 0x52L;
    int32_t l_964 = 0x62FF66A9L;
    int32_t l_979 = 0L;
    uint32_t l_1000[5] = {0xE4ACF61BL,0xE4ACF61BL,0xE4ACF61BL,0xE4ACF61BL,0xE4ACF61BL};
    int32_t l_1029 = 0x4A3B951CL;
    int32_t l_1033 = (-7L);
    int32_t l_1034 = 1L;
    uint8_t l_1035 = 0x7CL;
    uint32_t **l_1069[4][2] = {{&p_1919->g_955,&p_1919->g_955},{&p_1919->g_955,&p_1919->g_955},{&p_1919->g_955,&p_1919->g_955},{&p_1919->g_955,&p_1919->g_955}};
    int32_t ***l_1071 = &p_1919->g_168;
    uint64_t l_1109 = 0xBAC35B054432122DL;
    int32_t l_1139[7] = {0x10F21BB9L,0x10F21BB9L,0x10F21BB9L,0x10F21BB9L,0x10F21BB9L,0x10F21BB9L,0x10F21BB9L};
    uint64_t l_1142 = 0UL;
    int8_t l_1181 = 0x5CL;
    uint32_t *l_1238 = &p_1919->g_165;
    uint32_t **l_1237 = &l_1238;
    int32_t l_1256 = 0x782D062EL;
    int32_t l_1257 = 8L;
    int16_t l_1260 = 0x3E94L;
    uint8_t l_1261 = 0x8AL;
    int8_t ***l_1276 = &p_1919->g_1021;
    int16_t l_1289 = (-1L);
    uint32_t l_1290 = 0UL;
    int64_t *l_1291 = &p_1919->g_981;
    int32_t l_1315[6][9][1] = {{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}},{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}},{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}},{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}},{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}},{{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL},{0x0EA63CEEL}}};
    int16_t **l_1365 = &p_1919->g_415;
    uint16_t l_1401 = 0xAAB2L;
    uint16_t l_1564 = 0UL;
    uint8_t l_1608 = 0x53L;
    uint32_t l_1619 = 0xE7110112L;
    int32_t *l_1627 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_11[i] = 0xA796L;
    (*l_17) = ((safe_add_func_uint64_t_u_u((--l_11[0]), (safe_div_func_uint32_t_u_u(4294967294UL, p_1919->g_2[3][3])))) <= (~((*p_8) &= (p_7 & l_16))));
lbl_1145:
    for (p_1919->g_5 = 0; (p_1919->g_5 <= 6); p_1919->g_5 += 1)
    { /* block id: 12 */
        uint16_t l_548 = 1UL;
        uint32_t *l_952 = &p_1919->g_270;
        uint32_t **l_951 = &l_952;
        uint16_t *l_987 = &l_11[0];
        uint16_t **l_986 = &l_987;
        int32_t l_1007 = 0L;
        int32_t l_1011 = (-1L);
        int32_t l_1031 = 0x0EB03E02L;
        int32_t l_1032 = 0x46FC41E3L;
        uint64_t *l_1055[9][2] = {{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295},{(void*)0,&p_1919->g_295}};
        uint16_t l_1068 = 1UL;
        int i, j;
        (*l_17) = 6L;
        if ((*p_8))
            continue;
    }
    for (p_1919->g_1067 = 0; (p_1919->g_1067 < 10); p_1919->g_1067 = safe_add_func_uint16_t_u_u(p_1919->g_1067, 9))
    { /* block id: 548 */
        uint64_t l_1112 = 0UL;
        int32_t *l_1113 = &l_16;
        int32_t l_1132 = 0x5CAE977CL;
        int32_t l_1134 = 0x789352DBL;
        int8_t l_1135 = 1L;
        int32_t l_1136 = 0x66045B8CL;
        int64_t l_1164 = 0x2C6DF2EDD5519538L;
        int32_t l_1209 = 0x2F78AFAEL;
        int16_t **l_1218 = (void*)0;
        int32_t *l_1219 = &l_1136;
        uint16_t *l_1236 = &p_1919->g_179[6];
        int32_t l_1249 = 0x353C30D3L;
        for (l_16 = (-18); (l_16 <= (-11)); ++l_16)
        { /* block id: 551 */
            int32_t l_1095 = 0x778B2B66L;
            int32_t *******l_1123 = &p_1919->g_883;
            int32_t l_1138 = 0x146E83F2L;
            int32_t l_1141 = 0x17F5BE22L;
            for (p_1919->g_52 = 0; (p_1919->g_52 <= (-1)); p_1919->g_52 = safe_sub_func_int16_t_s_s(p_1919->g_52, 5))
            { /* block id: 554 */
                int32_t l_1108 = 0x468F7FF2L;
                int16_t l_1127 = 0x082AL;
                int32_t l_1133 = 0L;
                int32_t l_1140 = 0x59312CC5L;
                for (p_1919->g_981 = (-13); (p_1919->g_981 < (-22)); p_1919->g_981--)
                { /* block id: 557 */
                    int64_t *l_1110 = &p_1919->g_970[7][1];
                    int32_t l_1111 = 1L;
                    int32_t *l_1129 = &l_1095;
                    int32_t *l_1130 = (void*)0;
                    int32_t *l_1131[7] = {&l_1108,&l_1034,&l_1108,&l_1108,&l_1034,&l_1108,&l_1108};
                    int i;
                    (**l_1071) = ((!((((((&p_1919->g_883 != (void*)0) | 0x2762L) | (((((~(p_7 || (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_7, ((*p_1919->g_415) = ((((safe_add_func_int64_t_s_s(l_1095, ((*l_1110) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(p_7, 4)), (safe_add_func_int64_t_s_s(p_1919->g_697[1][4], (safe_lshift_func_uint8_t_u_s((0x7EA92AFCF8F8265FL | l_1108), 4)))))), l_1109)), p_7))))) != (*p_1919->g_4)) , 0x79A73CB8C536C1E4L) && l_1108)))), l_1111)), 4)), p_7)), l_1112)))) & 0UL) , (void*)0) == (void*)0) >= p_7)) <= l_1095) ^ 0x629B815DL) >= 7UL)) , (void*)0);
                    for (l_1112 = 0; (l_1112 <= 6); l_1112 += 1)
                    { /* block id: 563 */
                        (****p_1919->g_700) = l_1113;
                        (*p_8) ^= 0x17D20FCEL;
                    }
                    if ((p_1919->g_573[6] > l_1108))
                    { /* block id: 567 */
                        int32_t l_1126 = 9L;
                        (*p_8) |= (*l_1113);
                        (*p_8) = (p_7 , ((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((((*p_1919->g_415) = ((0x7414F1B7773BD30AL | (((*p_1919->g_457) |= p_7) & (-1L))) != (((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(l_1108, (safe_unary_minus_func_int32_t_s((((&p_1919->g_883 != l_1123) , (((4294967286UL || (safe_mod_func_uint8_t_u_u((((1L == l_1111) & p_7) , p_7), l_1126))) ^ 0xAE2DF9B42C3A6B35L) == 0x2AE159D5L)) , (*p_8)))))), p_7)) && l_1127) != p_1919->g_573[7]))) | 0x6F03L) | p_7) ^ l_1111), p_1919->g_5)), p_7)) != (-1L)));
                    }
                    else
                    { /* block id: 572 */
                        int32_t *l_1128 = &l_1034;
                        return p_8;
                    }
                    ++l_1142;
                }
                if (l_1108)
                    goto lbl_1145;
            }
        }
        for (l_1034 = (-23); (l_1034 < 10); l_1034++)
        { /* block id: 582 */
            uint32_t l_1162 = 0xC06894E2L;
            int32_t l_1163 = 1L;
            if ((*p_8))
                break;
            if ((*p_1919->g_899))
                continue;
            if ((*l_1113))
                continue;
            (*p_8) &= ((l_1164 = ((safe_sub_func_uint32_t_u_u((((*l_1113) = p_7) < ((safe_add_func_uint8_t_u_u(4UL, (p_7 & 0UL))) < 0x18B95545L)), (safe_div_func_int8_t_s_s(((l_1134 = (p_1919->g_599[0] , (safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(0L, ((l_1163 = (p_7 ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(255UL, l_1162)), (*p_1919->g_457))))) , p_7))) | p_7), p_7)))) == 0x19L), p_7)))) == p_7)) == p_1919->g_79);
        }
        for (p_1919->g_306 = 0; (p_1919->g_306 > 44); ++p_1919->g_306)
        { /* block id: 594 */
            int8_t ***l_1169 = &p_1919->g_1021;
            int32_t l_1177 = (-1L);
            int32_t *l_1215 = &p_1919->g_91[9][5];
            int32_t l_1245 = 0L;
            int32_t l_1246 = 1L;
            int32_t l_1250[7][9] = {{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L},{0x6BEED174L,0x6BEED174L,3L,0x17C67F48L,0x40B81AABL,0x17C67F48L,3L,0x6BEED174L,0x6BEED174L}};
            int i, j;
            if (p_7)
                goto lbl_1145;
            (*p_8) ^= (*p_1919->g_245);
            if ((*p_1919->g_245))
                continue;
            for (l_1033 = 0; (l_1033 <= (-20)); l_1033--)
            { /* block id: 600 */
                int8_t ****l_1170 = (void*)0;
                int8_t ****l_1171 = &l_1169;
                int8_t ****l_1172[2];
                int32_t l_1174 = 5L;
                uint32_t *l_1176[3][10][6] = {{{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0}},{{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0}},{{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0},{&p_1919->g_573[2],(void*)0,(void*)0,&p_1919->g_165,(void*)0,(void*)0}}};
                uint32_t **l_1175 = &l_1176[1][3][3];
                int64_t *l_1235 = &l_1164;
                int64_t **l_1234 = &l_1235;
                int32_t l_1241 = (-1L);
                int32_t l_1243 = 0x01AB5AB6L;
                int32_t l_1248 = 0x593BF784L;
                int32_t l_1252 = 0x7A19EC25L;
                int32_t l_1253 = (-1L);
                int32_t l_1254 = 0x6DE8E5E4L;
                int32_t l_1255 = (-8L);
                int32_t l_1258 = 0x26BEEC2EL;
                int32_t l_1259 = 0x3433DBBEL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1172[i] = (void*)0;
                if ((((((*l_1171) = l_1169) == (p_1919->g_1173[0][0] = &p_1919->g_1021)) | (((l_1174 = (((((l_1174 & ((p_7 <= ((*l_17) && (p_8 != ((*l_1175) = p_8)))) > (+(((p_7 , (0x4EL > 0x29L)) != 0x01L) , p_7)))) , 4294967295UL) && p_7) , l_1177) | p_7)) >= 0L) <= 0x10C7L)) != 0x4FL))
                { /* block id: 605 */
                    uint16_t *l_1188 = &p_1919->g_79;
                    int32_t l_1212 = (-10L);
                    if ((*p_8))
                    { /* block id: 606 */
                        int64_t l_1178 = 0x5F710C59280212AFL;
                        uint64_t **l_1182 = (void*)0;
                        uint64_t ***l_1183 = (void*)0;
                        uint64_t ***l_1184 = &l_1182;
                        int32_t l_1210[6];
                        int64_t *l_1211[3][6][6] = {{{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0}},{{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0}},{{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0},{&p_1919->g_970[7][1],&p_1919->g_981,(void*)0,&l_1164,(void*)0,(void*)0}}};
                        int32_t l_1213[4][10] = {{0x552F6A76L,0x2072F2C1L,0x4215D571L,1L,0L,0x552F6A76L,1L,0x49CBCC6DL,1L,0x552F6A76L},{0x552F6A76L,0x2072F2C1L,0x4215D571L,1L,0L,0x552F6A76L,1L,0x49CBCC6DL,1L,0x552F6A76L},{0x552F6A76L,0x2072F2C1L,0x4215D571L,1L,0L,0x552F6A76L,1L,0x49CBCC6DL,1L,0x552F6A76L},{0x552F6A76L,0x2072F2C1L,0x4215D571L,1L,0L,0x552F6A76L,1L,0x49CBCC6DL,1L,0x552F6A76L}};
                        uint8_t *l_1214 = &l_509;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_1210[i] = (-4L);
                        l_1178 |= ((*l_1113) = (*p_8));
                        l_1215 = func_66((safe_lshift_func_uint16_t_u_u(((l_1181 <= (((*l_1184) = l_1182) == p_1919->g_1185[0])) != (+((((((l_1188 == ((*p_1919->g_988) = ((((*l_1214) = (safe_mod_func_int32_t_s_s(((+(l_1213[0][4] = (safe_rshift_func_int16_t_s_s(((**p_1919->g_414) = ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((((*l_1113) = (p_7 & (((*l_1113) && ((l_1210[3] = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0x0153L, (safe_sub_func_uint32_t_u_u((0x9824BB4F00E5D07AL | (4294967295UL & (*p_1919->g_899))), (*p_8))))) , l_1209), p_7)), 3)) < 65532UL)) == 1L)) , p_7))) || l_1174), (*p_1919->g_457))) , (*l_17)) == p_7), p_7)) == p_7) > l_1212), 0x53L)), (*p_8))) && p_7)), 12)))) >= 4294967287UL), l_1174))) , p_1919->g_306) , (void*)0))) , l_1212) != p_1919->g_220) > l_1174) | 0x2C53L) > (*p_8)))), 13)), p_1919->g_406, p_1919);
                        (****p_1919->g_700) = p_8;
                    }
                    else
                    { /* block id: 618 */
                        p_8 = p_8;
                        if ((*l_1215))
                            break;
                    }
                    for (l_1209 = 4; (l_1209 <= 10); l_1209 = safe_add_func_int64_t_s_s(l_1209, 7))
                    { /* block id: 624 */
                        if ((*p_1919->g_461))
                            break;
                        if ((*p_8))
                            continue;
                        (*l_1113) &= (l_1218 != (void*)0);
                        if ((*l_1113))
                            continue;
                    }
                    if ((*p_1919->g_461))
                        continue;
                }
                else
                { /* block id: 631 */
                    int32_t *l_1220 = &p_1919->g_52;
                    return l_1220;
                }
                (*p_8) = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(((~(safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(p_7, (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((*l_1113) < ((*l_17) , ((((p_7 , ((*l_1234) = &l_1164)) == (p_7 , &p_1919->g_970[4][0])) , l_1236) == l_1236))))), p_7)))), 0xD2L))) || 254UL), 2)) , (void*)0) == l_1237), p_7)) | 7UL), (*l_17)));
                for (p_1919->g_52 = 0; (p_1919->g_52 <= 0); p_1919->g_52 += 1)
                { /* block id: 638 */
                    int64_t l_1239 = 0L;
                    int32_t l_1244 = (-6L);
                    int32_t l_1247 = (-1L);
                    int32_t l_1251[6][4][7] = {{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}},{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}},{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}},{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}},{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}},{{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL},{0x1990CEAEL,1L,1L,(-1L),1L,1L,0x1990CEAEL}}};
                    int i, j, k;
                    for (l_1174 = 0; (l_1174 >= 0); l_1174 -= 1)
                    { /* block id: 641 */
                        int32_t *l_1240[7];
                        int32_t l_1242[3];
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_1240[i] = &p_1919->g_91[9][5];
                        for (i = 0; i < 3; i++)
                            l_1242[i] = 1L;
                        (*l_1219) &= (-1L);
                        l_1261++;
                    }
                }
                (*p_1919->g_245) = (*p_8);
            }
        }
        if ((*l_17))
            continue;
    }
    if (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(4L, ((((safe_sub_func_uint32_t_u_u((((*l_1291) = (((p_7 | (0xD7L > (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((*p_8) = ((((safe_lshift_func_uint16_t_u_u((p_7 != (l_1276 != &p_1919->g_1021)), ((p_1919->g_1277 != (void*)0) != (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((*p_1919->g_415) = p_7), l_1289)) , (*p_1919->g_415)), 12)), 13))))) ^ (*p_1919->g_4)) || (*l_17)) > l_1290)) != 1L), p_7)), 0x7EB7L)))) | p_7) ^ (*l_17))) != (-1L)), p_7)) & p_1919->g_406) , p_7) | (*l_17)))), p_7)) , (*p_8)))
    { /* block id: 654 */
        uint32_t **l_1306 = &p_1919->g_955;
        int32_t l_1307[7][6][6] = {{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}},{{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)},{0x0E094C1CL,0x03785BCEL,0x43FEC0C4L,0x09FE9CE0L,0x0E73F1F0L,(-1L)}}};
        int32_t l_1308 = (-3L);
        uint32_t *l_1340 = &p_1919->g_165;
        uint32_t l_1349 = 0x2E3FFDFBL;
        int16_t **l_1364 = &p_1919->g_415;
        int8_t ****l_1389[9][6][3] = {{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}},{{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]},{&p_1919->g_1173[4][1],&p_1919->g_1173[4][1],&p_1919->g_1173[5][0]}}};
        uint16_t l_1423[9][4][3] = {{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}},{{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L},{65532UL,7UL,0x2264L}}};
        int64_t **l_1439 = &p_1919->g_1333;
        uint8_t ***l_1441 = &p_1919->g_529[6][0];
        uint64_t l_1451[10] = {0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL,0xBD503A8EF9B99B9BL};
        int32_t **l_1579[1][8] = {{&l_17,&l_17,&l_17,&l_17,&l_17,&l_17,&l_17,&l_17}};
        int32_t ******l_1605 = &p_1919->g_700;
        int i, j, k;
        for (p_1919->g_549 = (-20); (p_1919->g_549 < (-9)); p_1919->g_549 = safe_add_func_int32_t_s_s(p_1919->g_549, 5))
        { /* block id: 657 */
            uint16_t *l_1304 = &l_11[0];
            int32_t l_1305[4];
            int32_t *l_1342 = &l_1305[1];
            uint8_t ***l_1443 = &p_1919->g_529[5][3];
            int8_t l_1479 = 5L;
            int32_t ****l_1489 = &l_1071;
            int32_t *******l_1502 = &p_1919->g_883;
            uint64_t *l_1505 = &p_1919->g_306;
            int i;
            for (i = 0; i < 4; i++)
                l_1305[i] = 0L;
            (1 + 1);
        }
        for (p_1919->g_403 = 0; (p_1919->g_403 < (-1)); p_1919->g_403 = safe_sub_func_uint8_t_u_u(p_1919->g_403, 3))
        { /* block id: 765 */
            uint32_t l_1521 = 5UL;
            int32_t **l_1540 = &p_1919->g_1345;
            for (p_1919->g_1457 = 0; (p_1919->g_1457 == 15); p_1919->g_1457++)
            { /* block id: 768 */
                uint32_t ***l_1512[2];
                int32_t l_1515 = 0x59B03135L;
                int32_t l_1518 = 0x0B67E692L;
                int32_t l_1520 = 0x2AD27E21L;
                int32_t **l_1541 = &p_1919->g_1345;
                int i;
                for (i = 0; i < 2; i++)
                    l_1512[i] = &l_1306;
                for (l_1181 = 0; (l_1181 != 7); l_1181 = safe_add_func_int16_t_s_s(l_1181, 2))
                { /* block id: 771 */
                    int64_t l_1513[4] = {0x62615071BB368925L,0x62615071BB368925L,0x62615071BB368925L,0x62615071BB368925L};
                    int32_t l_1514 = 0x22FC5A95L;
                    int32_t l_1517 = 0x3C929C3BL;
                    int32_t l_1519[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1519[i] = 9L;
                    l_1513[0] &= ((void*)0 == l_1512[1]);
                    for (p_1919->g_1481 = 0; (p_1919->g_1481 <= 2); p_1919->g_1481 += 1)
                    { /* block id: 775 */
                        int32_t *l_1516[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        if (l_1423[(p_1919->g_1481 + 2)][(p_1919->g_1481 + 1)][p_1919->g_1481])
                            break;
                        l_1521++;
                        if (l_1423[(p_1919->g_1481 + 6)][(p_1919->g_1481 + 1)][p_1919->g_1481])
                            continue;
                    }
                }
                (**p_1919->g_665) = p_8;
                for (p_1919->g_1386 = 0; (p_1919->g_1386 == 11); p_1919->g_1386++)
                { /* block id: 787 */
                    uint8_t l_1545 = 1UL;
                    int32_t *l_1548 = &l_1515;
                    (****p_1919->g_664) ^= (-10L);
                    for (l_979 = 6; (l_979 >= 2); l_979 -= 1)
                    { /* block id: 791 */
                        l_1545++;
                        return (**l_1071);
                    }
                    if ((*p_1919->g_1345))
                        continue;
                }
            }
            (*p_8) ^= l_1307[2][1][5];
            for (l_1181 = 0; (l_1181 != 29); ++l_1181)
            { /* block id: 801 */
                int64_t l_1582 = 0x35CA51D99A7322FBL;
                int32_t ******l_1604 = &p_1919->g_700;
                for (p_1919->g_52 = 21; (p_1919->g_52 != (-22)); --p_1919->g_52)
                { /* block id: 804 */
                    int16_t l_1553 = 0x67F7L;
                    int32_t l_1569 = 1L;
                    uint8_t ****l_1576 = (void*)0;
                    (*p_1919->g_1344) = p_8;
                    (**p_1919->g_665) = func_53((****p_1919->g_700), (((l_1553 , (l_1451[0] <= ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((**l_1365) |= (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((**l_1540), 3)), l_1564))), (safe_mul_func_int16_t_s_s(p_7, l_1349)))), 7)), (safe_lshift_func_int16_t_s_s((l_1569 = 0x56E6L), ((((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((((++p_1919->g_270) == (p_7 != 18446744073709551615UL)) & l_1423[8][0][2]), (**l_1540))), 0x1B316A4AL)) <= (**l_1540)) , l_1576) != (void*)0))))) >= l_1423[8][3][2]))) == (-1L)) , p_8), l_1423[3][1][2], p_1919);
                    (*p_1919->g_899) ^= ((*p_1919->g_882) != (void*)0);
                }
            }
        }
        (*p_8) ^= ((safe_div_func_uint64_t_u_u(p_7, 9UL)) != l_1608);
    }
    else
    { /* block id: 818 */
        int32_t *l_1610 = &l_1029;
        uint16_t *l_1626 = &p_1919->g_179[1];
        (*l_17) = (*p_8);
        for (p_1919->g_543 = 0; (p_1919->g_543 <= 0); p_1919->g_543 += 1)
        { /* block id: 822 */
            int32_t *l_1609 = &l_1034;
            return p_8;
        }
        (*p_8) &= ((*l_17) , (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_1626) |= ((safe_mul_func_int8_t_s_s(0x6AL, (p_7 >= (l_1619 && (p_1919->g_981 & (**p_1919->g_1332)))))) & ((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_u(p_7, p_7)) >= ((*l_17) = (((((*l_1610) && 0xE9L) == p_7) | (*l_1610)) < 65535UL))) <= p_7) > (**p_1919->g_1332)) , (-1L)), 0x69FEL)), (*p_1919->g_1345))) , 0x930D395BL))), 0x3A12L)), (*l_1610))), p_7)));
    }
    return l_1627;
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_700 p_1919->g_664 p_1919->g_665 p_1919->g_168 p_1919->g_104 p_1919->g_414 p_1919->g_415 p_1919->g_276 p_1919->g_457 p_1919->g_251 p_1919->g_91 p_1919->g_882 p_1919->g_883 p_1919->g_220 p_1919->g_270
 * writes: p_1919->g_104 p_1919->g_664 p_1919->g_270 p_1919->g_91
 */
int32_t  func_22(int64_t  p_23, int32_t  p_24, uint32_t  p_25, uint64_t  p_26, struct S0 * p_1919)
{ /* block id: 465 */
    int32_t *l_901 = &p_1919->g_91[9][1];
    int32_t l_918[3][10] = {{0x71FD0D7DL,0x5ECC0B52L,0x23962FD0L,0x7C56437AL,0x5ECC0B52L,0x7C56437AL,0x23962FD0L,0x5ECC0B52L,0x71FD0D7DL,0x71FD0D7DL},{0x71FD0D7DL,0x5ECC0B52L,0x23962FD0L,0x7C56437AL,0x5ECC0B52L,0x7C56437AL,0x23962FD0L,0x5ECC0B52L,0x71FD0D7DL,0x71FD0D7DL},{0x71FD0D7DL,0x5ECC0B52L,0x23962FD0L,0x7C56437AL,0x5ECC0B52L,0x7C56437AL,0x23962FD0L,0x5ECC0B52L,0x71FD0D7DL,0x71FD0D7DL}};
    int32_t l_919 = (-5L);
    int32_t l_920 = 0L;
    int16_t *l_934 = (void*)0;
    int32_t ****l_937 = &p_1919->g_665;
    uint32_t *l_938 = &p_1919->g_270;
    uint32_t l_939 = 0x311D5DE3L;
    int32_t l_942[1][10][7] = {{{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)},{3L,0x6E7504D7L,(-10L),0L,0x293D111DL,0L,(-10L)}}};
    uint8_t l_945 = 0xF3L;
    int i, j, k;
    (****p_1919->g_700) = l_901;
    l_920 |= (safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((((*p_1919->g_168) = (*p_1919->g_168)) != (l_901 = l_901)), 0L)) >= (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(p_25, (l_919 ^= (safe_lshift_func_uint16_t_u_s(((0xFFC5D580L >= (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((p_25 | (p_24 | 0xD6E6L)), p_26)) < l_918[1][6]), 9)) < (**p_1919->g_414)) && 0x1567ADD8L), l_918[1][6]))) , 0xF600L), l_918[1][6]))))), l_918[0][3]))), 0xE93E335CDA51FB91L));
    (*l_901) = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((*p_1919->g_457), 3)) ^ (((0x4392L || ((*l_901) , (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((safe_add_func_int8_t_s_s(((l_934 = (*p_1919->g_414)) != (void*)0), (safe_rshift_func_int16_t_s_s((((***p_1919->g_882) = l_937) == l_937), 13)))) > ((*l_938) = p_24)) >= ((**p_1919->g_414) | (**p_1919->g_414))))), 0x12L)) < p_25), p_1919->g_220)))) | l_939) , 0x6C28L)), 0x32L)), 0x93CBCB3CL));
    for (p_1919->g_270 = (-24); (p_1919->g_270 != 19); p_1919->g_270 = safe_add_func_int64_t_s_s(p_1919->g_270, 5))
    { /* block id: 477 */
        int32_t l_943 = 0x0AEADDFFL;
        int32_t *l_944[5] = {&l_942[0][9][0],&l_942[0][9][0],&l_942[0][9][0],&l_942[0][9][0],&l_942[0][9][0]};
        int i;
        ++l_945;
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_165 p_1919->g_403 p_1919->g_62 p_1919->g_97 p_1919->g_457 p_1919->g_573 p_1919->g_414 p_1919->g_415 p_1919->g_276 p_1919->g_220 p_1919->g_528 p_1919->g_529 p_1919->g_286 p_1919->g_251 p_1919->g_503 p_1919->g_306 p_1919->g_245 p_1919->g_52 p_1919->g_168 p_1919->g_179 p_1919->g_51 p_1919->g_663 p_1919->g_664 p_1919->g_406 p_1919->g_2 p_1919->g_697 p_1919->g_599 p_1919->g_665 p_1919->g_5 p_1919->g_315 p_1919->g_4 p_1919->g_79 p_1919->g_700 p_1919->g_91 p_1919->g_134 p_1919->g_135 p_1919->g_882 p_1919->g_549 p_1919->g_899
 * writes: p_1919->g_165 p_1919->g_403 p_1919->g_251 p_1919->g_599 p_1919->g_52 p_1919->g_104 p_1919->g_503 p_1919->g_406 p_1919->g_295 p_1919->g_664 p_1919->g_97 p_1919->g_306 p_1919->g_573 p_1919->g_697 p_1919->g_276 p_1919->g_700 p_1919->g_179 p_1919->g_270 p_1919->g_220 p_1919->g_135 p_1919->g_528 p_1919->g_882 p_1919->g_62 p_1919->g_91
 */
uint8_t  func_27(int32_t * p_28, int32_t  p_29, struct S0 * p_1919)
{ /* block id: 304 */
    uint32_t l_566 = 0x875F158FL;
    int32_t l_570 = 0x5CDE7688L;
    uint32_t *l_571 = &p_1919->g_165;
    uint8_t **l_596 = &p_1919->g_135;
    uint32_t l_619 = 0x3146C002L;
    int64_t l_632[10][9] = {{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L},{0x4ED5F740B96C610AL,0x7D6898AFD2CE3A9BL,0x46ABA5F01E281811L,0x282A1B5ECE1DA0A9L,0x46ABA5F01E281811L,0x7D6898AFD2CE3A9BL,0x4ED5F740B96C610AL,0x008E94FD3645224FL,0x0107E86CF50226E3L}};
    int32_t l_633 = (-5L);
    int16_t l_662 = (-5L);
    uint32_t l_698 = 4294967290UL;
    int32_t l_738[9][5] = {{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L},{0x380DE738L,(-1L),8L,0L,8L}};
    uint64_t l_766 = 0UL;
    int32_t l_789 = 8L;
    int32_t l_816 = 1L;
    int32_t ****l_866 = &p_1919->g_665;
    uint8_t *l_873 = &p_1919->g_97[2];
    int8_t l_900 = 1L;
    int i, j;
    for (p_1919->g_165 = 0; (p_1919->g_165 <= 8); p_1919->g_165 += 1)
    { /* block id: 307 */
        uint16_t *l_569[9] = {&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79,&p_1919->g_79};
        uint32_t *l_572 = &p_1919->g_573[1];
        int32_t l_574 = 0x4773E8E8L;
        int16_t **l_617[10] = {&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415,&p_1919->g_415};
        int32_t *****l_666 = &p_1919->g_664;
        int64_t *l_667 = &l_632[5][6];
        int64_t l_673 = 0x7B4B1E955AA3CC48L;
        int32_t l_730 = (-2L);
        int32_t l_737[1][8][6] = {{{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L},{0x55B6D13EL,0x7679D725L,0x7679D725L,0x55B6D13EL,(-3L),0L}}};
        int8_t l_739 = (-7L);
        int32_t l_742 = (-1L);
        int16_t l_747 = 0x00E8L;
        int32_t l_787 = 0L;
        int8_t l_813 = 0L;
        uint32_t l_832 = 0x744D012EL;
        uint64_t l_835 = 0xE4F461701624B409L;
        uint32_t l_853[5][9] = {{4294967287UL,4294967294UL,4294967294UL,4294967294UL,4294967287UL,4294967287UL,4294967294UL,4294967294UL,4294967294UL},{4294967287UL,4294967294UL,4294967294UL,4294967294UL,4294967287UL,4294967287UL,4294967294UL,4294967294UL,4294967294UL},{4294967287UL,4294967294UL,4294967294UL,4294967294UL,4294967287UL,4294967287UL,4294967294UL,4294967294UL,4294967294UL},{4294967287UL,4294967294UL,4294967294UL,4294967294UL,4294967287UL,4294967287UL,4294967294UL,4294967294UL,4294967294UL},{4294967287UL,4294967294UL,4294967294UL,4294967294UL,4294967287UL,4294967287UL,4294967294UL,4294967294UL,4294967294UL}};
        int i, j, k;
        if (((*p_28) = ((&p_1919->g_165 != (l_572 = l_571)) < l_566)))
        { /* block id: 312 */
            uint32_t l_616 = 4294967290UL;
            int32_t *l_636 = (void*)0;
            int8_t *l_651 = &p_1919->g_599[1];
            for (l_570 = 3; (l_570 <= 8); l_570 += 1)
            { /* block id: 315 */
                int32_t l_595 = 0x414C7076L;
                int32_t *l_652 = &p_1919->g_503;
                l_574 = l_566;
                for (p_1919->g_403 = 5; (p_1919->g_403 >= 0); p_1919->g_403 -= 1)
                { /* block id: 319 */
                    uint64_t l_597 = 1UL;
                    int8_t *l_598 = &p_1919->g_599[0];
                    int16_t **l_618 = (void*)0;
                    int32_t *l_637[10] = {&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570};
                    int i;
                    if ((safe_mul_func_int8_t_s_s(((*l_598) = ((((((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((0xACD3L == ((((safe_sub_func_uint16_t_u_u((((p_1919->g_62[(p_1919->g_403 + 2)] , ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((p_1919->g_97[l_570] & (safe_rshift_func_int8_t_s_s(((((((safe_rshift_func_uint8_t_u_s(((255UL < (safe_add_func_int8_t_s_s(p_1919->g_97[p_1919->g_165], ((*p_1919->g_457) = p_1919->g_97[p_1919->g_165])))) <= p_1919->g_573[(p_1919->g_403 + 2)]), 0)) || (l_595 , p_29)) || 0x5EL) ^ p_29) , 1L) ^ p_29), 4))), (**p_1919->g_414))) || p_29), l_566)) ^ p_29)) == l_574) < (*p_1919->g_415)), p_1919->g_220)) , (*p_1919->g_528)) != l_596) != l_595)), p_29)) > 6UL) , 1UL) ^ l_597), p_1919->g_286[0][3])), 0x1CE346E0961FB28EL)) && l_566) , 0x0CE1L) | l_566) < l_595) == (-4L))), p_1919->g_97[p_1919->g_165])))
                    { /* block id: 322 */
                        uint16_t l_634 = 1UL;
                        (*p_1919->g_245) ^= (safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(p_29, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(0x056313B9L, ((safe_sub_func_int8_t_s_s(((*l_598) = (((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65532UL, (safe_mul_func_int8_t_s_s((l_616 || (((l_617[7] == l_618) & l_619) ^ ((safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(l_595, (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((l_633 &= ((l_632[5][6] |= (-9L)) | (*p_28))), l_570)), (*p_1919->g_457))) <= p_1919->g_503), 10)), 15)) , p_28) == &p_1919->g_165))) & l_616), l_634)) , 0x02EFL))), (*p_1919->g_457))))), l_595)) >= p_1919->g_306) | l_570)), p_29)) || p_29))), 8)))) , (-1L)), p_1919->g_276));
                        if (l_632[5][6])
                            continue;
                    }
                    else
                    { /* block id: 328 */
                        int32_t *l_635 = &p_1919->g_5;
                        (*p_1919->g_168) = l_637[2];
                        return p_29;
                    }
                }
                l_633 |= (0x4FF2B2D4D020A3FAL || (p_29 && ((((safe_mul_func_int8_t_s_s((!((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((*p_28) | (p_29 && (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((*l_652) = (safe_lshift_func_int8_t_s_s(((1L == 65535UL) , p_29), (safe_div_func_uint32_t_u_u(((void*)0 == l_651), p_29))))))), p_29)))), p_29)), p_29)) & p_1919->g_179[1])), 0x14L)) < p_29) <= l_632[5][6]) , 0x1C32L)));
            }
            if (l_632[3][4])
                break;
        }
        else
        { /* block id: 337 */
            int16_t l_654 = 0x34FBL;
            int32_t *l_655 = &l_570;
            for (p_1919->g_406 = 0; (p_1919->g_406 <= 8); p_1919->g_406 += 1)
            { /* block id: 340 */
                int32_t l_653 = 0x0DAC438FL;
                for (p_1919->g_251 = 6; (p_1919->g_251 >= 0); p_1919->g_251 -= 1)
                { /* block id: 343 */
                    for (p_1919->g_295 = 0; (p_1919->g_295 <= 8); p_1919->g_295 += 1)
                    { /* block id: 346 */
                        int i;
                        return p_1919->g_62[p_1919->g_251];
                    }
                    if (l_653)
                        break;
                    (*p_28) = (*p_28);
                }
                for (p_1919->g_52 = 8; (p_1919->g_52 >= 0); p_1919->g_52 -= 1)
                { /* block id: 354 */
                    return p_29;
                }
                l_654 &= 0x43AF2578L;
                l_574 ^= ((*p_1919->g_51) = (*p_28));
            }
            (*p_1919->g_168) = l_655;
        }
        if (((*p_28) = ((safe_sub_func_uint64_t_u_u(0xBC5B40AE2A13DAFBL, ((*l_667) = (safe_sub_func_int16_t_s_s((((l_566 == ((safe_rshift_func_int16_t_s_s((*p_1919->g_415), (((**p_1919->g_414) == (p_29 , ((l_662 , p_1919->g_663) != ((*l_666) = p_1919->g_664)))) , ((l_632[5][6] && p_1919->g_406) ^ 0x76L)))) <= l_633)) || 0L) , p_29), p_29))))) | l_662)))
        { /* block id: 366 */
            uint64_t l_672 = 0x3F43DE63ADDC3CE7L;
            int64_t *l_704 = &l_632[1][4];
            int32_t *l_707 = (void*)0;
            uint16_t l_710 = 0x1ADEL;
            int32_t l_729 = (-1L);
            int32_t l_735 = 0L;
            int32_t l_743 = 5L;
            int32_t l_745[4] = {0x3FFA77FCL,0x3FFA77FCL,0x3FFA77FCL,0x3FFA77FCL};
            int32_t ******l_823 = (void*)0;
            int32_t *l_833 = &p_1919->g_52;
            int32_t *l_834[6][4][3] = {{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}},{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}},{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}},{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}},{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}},{{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633},{&l_735,&l_735,&l_633}}};
            int i, j, k;
            if ((*p_28))
            { /* block id: 367 */
                (*p_28) = (*p_28);
            }
            else
            { /* block id: 369 */
                uint8_t ***l_680[4][5] = {{&p_1919->g_529[0][1],&p_1919->g_529[1][0],&p_1919->g_529[1][0],&p_1919->g_529[0][1],&p_1919->g_529[0][1]},{&p_1919->g_529[0][1],&p_1919->g_529[1][0],&p_1919->g_529[1][0],&p_1919->g_529[0][1],&p_1919->g_529[0][1]},{&p_1919->g_529[0][1],&p_1919->g_529[1][0],&p_1919->g_529[1][0],&p_1919->g_529[0][1],&p_1919->g_529[0][1]},{&p_1919->g_529[0][1],&p_1919->g_529[1][0],&p_1919->g_529[1][0],&p_1919->g_529[0][1],&p_1919->g_529[0][1]}};
                uint64_t l_685 = 0xCA5FAD96504034ADL;
                int32_t *****l_701 = &p_1919->g_664;
                int32_t l_727 = 0x394916F7L;
                int32_t l_728 = 1L;
                int32_t l_732[2][7] = {{0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L}};
                uint16_t l_815 = 7UL;
                int32_t ******l_825[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                int32_t *******l_824 = &l_825[0][0];
                int i, j;
                if ((((safe_div_func_int32_t_s_s((-7L), (p_1919->g_286[3][1] , ((l_633 , p_29) , p_29)))) > ((((((((safe_mul_func_uint8_t_u_u((p_1919->g_97[p_1919->g_165] = p_29), (((l_632[5][6] & p_29) == p_29) & p_29))) , 0x541C4D0CDEF56B08L) && p_1919->g_52) == l_672) < 0x7DE24D83L) == p_1919->g_179[1]) , p_1919->g_62[3]) <= p_1919->g_276)) , l_673))
                { /* block id: 371 */
                    uint32_t *l_694 = &p_1919->g_573[1];
                    int16_t ***l_696 = (void*)0;
                    int16_t ****l_695 = &l_696;
                    int32_t ******l_699[3][6];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_699[i][j] = &l_666;
                    }
                    if (((p_1919->g_700 = ((l_633 = (((safe_add_func_int16_t_s_s(((*p_1919->g_415) = (p_1919->g_697[5][0] ^= ((&p_1919->g_134 == &p_1919->g_529[0][2]) == (&p_1919->g_414 != ((*l_695) = ((safe_sub_func_int32_t_s_s((p_1919->g_97[p_1919->g_165] <= ((((((void*)0 != l_680[2][1]) ^ (p_1919->g_306 |= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((l_685++), 1)), p_1919->g_179[2])))) == (safe_rshift_func_uint16_t_u_s((((*l_694) = (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(p_1919->g_2[3][3], (((*p_1919->g_457) == p_29) , 0xD5531D9AL))) == p_29) , p_29) , (*p_1919->g_415)), 0xC2BCL))) , l_633), p_29))) < 6L) <= p_29)), l_672)) , &p_1919->g_414)))))), p_29)) < (*p_1919->g_457)) || l_698)) , &p_1919->g_664)) == l_701))
                    { /* block id: 380 */
                        (*p_28) ^= (safe_add_func_int32_t_s_s(((void*)0 != l_704), (4294967295UL > ((safe_lshift_func_uint16_t_u_s(((l_707 == &l_633) < (p_29 == l_698)), 3)) , (safe_rshift_func_uint8_t_u_s((((0x1E320EE57095BA9EL && ((p_1919->g_306 == p_1919->g_599[0]) || p_29)) , p_29) , p_29), l_710))))));
                        (***p_1919->g_664) = p_28;
                    }
                    else
                    { /* block id: 383 */
                        uint8_t **l_725[10][9][2] = {{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}},{{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,&p_1919->g_135}}};
                        uint64_t *l_726 = &l_672;
                        int32_t l_731 = (-8L);
                        int32_t l_733 = 0x2DFC3AA1L;
                        int32_t l_734 = (-1L);
                        int32_t l_736 = 0x62272D1AL;
                        int32_t l_740 = 1L;
                        int32_t l_741 = (-1L);
                        int32_t l_744 = 1L;
                        int32_t l_746 = 1L;
                        uint32_t l_748 = 0x069D1154L;
                        int i, j, k;
                        if ((*p_28))
                            break;
                        (*p_1919->g_315) &= (((safe_rshift_func_int16_t_s_s(0x230EL, 1)) < (safe_mod_func_int32_t_s_s(((*p_28) = (safe_mod_func_int64_t_s_s(p_1919->g_97[2], ((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((void*)0 == p_28), (+0UL))), p_29)) && (((*l_726) |= (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((l_570 |= ((p_1919->g_5 , l_725[1][6][1]) != l_725[1][6][1])), p_29)) > p_29) || 0x40ED329CL), 14))) , p_29))))), p_29))) , 0L);
                        if ((*p_1919->g_4))
                            break;
                        --l_748;
                    }
                    if (((*p_28) ^= ((*p_1919->g_457) < (p_1919->g_503 , ((((+((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(p_29)), 5)), ((((safe_sub_func_uint16_t_u_u((++p_1919->g_179[1]), (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((**p_1919->g_414) = (safe_mul_func_int8_t_s_s((*p_1919->g_457), (*p_1919->g_457)))), (p_1919->g_97[8] , 65535UL))), p_29)))) <= (p_1919->g_406 != p_1919->g_5)) <= l_570) && p_29))) , 3L) ^ p_29) != l_633)) || p_1919->g_79) , (void*)0) == (***p_1919->g_700))))))
                    { /* block id: 395 */
                        (*p_28) = 1L;
                        (*p_28) &= l_738[4][0];
                        if ((*p_28))
                            continue;
                    }
                    else
                    { /* block id: 399 */
                        if (l_766)
                            break;
                        l_745[2] &= ((safe_rshift_func_uint16_t_u_u(((-1L) > p_1919->g_2[3][3]), 13)) , 1L);
                    }
                    if ((safe_mod_func_uint8_t_u_u((l_787 = ((((*l_704) = (safe_add_func_int16_t_s_s((**p_1919->g_414), (safe_div_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(p_1919->g_406, ((*p_28) = (&p_1919->g_599[0] == (p_29 , (void*)0))))), (safe_add_func_uint8_t_u_u((((~(safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((*p_1919->g_51) = p_29) ^ ((**p_1919->g_664) == (void*)0)) < (((void*)0 != (**l_701)) < 1L)), 0UL)), 7))) == 0x4233E2BF1D18A536L) <= p_29), p_29)))) & p_29), 1L))))) & 0x47DB1096E3277720L) && 9L)), l_730)))
                    { /* block id: 407 */
                        uint64_t l_788 = 0x9A7C706E1644E276L;
                        (*p_1919->g_168) = (void*)0;
                        return l_788;
                    }
                    else
                    { /* block id: 410 */
                        (*p_28) = (l_789 ^= (*p_28));
                        return p_29;
                    }
                }
                else
                { /* block id: 415 */
                    uint64_t *l_793 = &l_766;
                    int32_t l_812 = 0x19FEC333L;
                    int32_t l_814 = 0x2EA5648DL;
                    l_738[5][4] |= ((((safe_unary_minus_func_uint64_t_u(((safe_mul_func_uint16_t_u_u(0x721CL, (((+(p_1919->g_97[8] , (((*l_793) = ((void*)0 == &l_707)) >= p_29))) ^ ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(p_29, p_29)) | (safe_div_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u(((*p_1919->g_457) = ((safe_sub_func_uint16_t_u_u(((l_812 ^= ((safe_rshift_func_int8_t_s_s(((p_29 ^ (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_int16_t_s_u((65529UL != (*p_1919->g_415)), p_29)) == l_566) , &p_28) != &p_28) , p_29) & (-7L)), 6)), p_29))) ^ p_29), 4)) , p_29)) < p_1919->g_179[1]), p_1919->g_2[3][3])) >= l_813)), 5)) > l_566) == 0x9482BAB2L) & l_814) , 0UL), p_1919->g_179[3]))), (*p_1919->g_245))) && l_815)) > 0x3467L))) , 0x350B2C091EA256F4L))) != (*p_28)) > l_816) >= p_29);
                }
                (*p_1919->g_168) = ((((*p_1919->g_415) = (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((p_1919->g_91[9][5] , 0xFEL) , (((*p_1919->g_457) != ((l_823 != ((*l_824) = &p_1919->g_700)) >= ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((safe_sub_func_uint64_t_u_u((0x70L >= 251UL), (((p_1919->g_179[0] = p_29) , 4294967289UL) , p_1919->g_276))) & l_832) & 0xFB084317L) == p_29), 10)), p_1919->g_306)) > 0xB67DL))) > 0xC09AL)), p_29)), p_29)), p_1919->g_276))) , p_1919->g_97[8]) , p_28);
            }
            l_835++;
            for (p_1919->g_270 = 0; (p_1919->g_270 <= 7); p_1919->g_270 += 1)
            { /* block id: 429 */
                int16_t l_840 = 0x26DEL;
                uint32_t *l_841 = &l_566;
                uint32_t *l_842[7] = {&p_1919->g_220,&p_1919->g_220,&p_1919->g_220,&p_1919->g_220,&p_1919->g_220,&p_1919->g_220,&p_1919->g_220};
                int i;
                (*p_28) |= (safe_rshift_func_int16_t_s_s((&p_1919->g_414 != ((p_1919->g_220 = ((*l_841) &= l_840)) , &l_617[7])), l_619));
            }
        }
        else
        { /* block id: 434 */
            uint8_t *l_845 = &p_1919->g_62[5];
            uint32_t l_846 = 0x38FC3AD3L;
            int32_t *l_854 = &l_737[0][5][0];
            int32_t l_855 = 1L;
            int32_t *l_856[1];
            uint32_t l_857 = 0xAC1D6ABEL;
            int i;
            for (i = 0; i < 1; i++)
                l_856[i] = &l_855;
            (*p_28) = (safe_mul_func_uint8_t_u_u(((l_845 != (l_846 , ((*l_596) = l_845))) < p_1919->g_403), ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((251UL < ((*p_1919->g_457) = (safe_mul_func_uint8_t_u_u(((*p_28) ^ 0x14D74B0AL), (p_29 , (p_1919->g_403 && 0UL)))))), l_853[3][1])), p_29)) >= l_737[0][5][0])));
            l_857--;
            if (l_632[5][6])
                continue;
            return (**p_1919->g_134);
        }
    }
    for (l_570 = (-26); (l_570 > (-20)); l_570 = safe_add_func_int16_t_s_s(l_570, 1))
    { /* block id: 445 */
        return p_29;
    }
    l_738[8][1] = ((*p_28) |= (safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(0x73912B82L, ((((l_866 != l_866) & (safe_mul_func_int8_t_s_s((((*l_873) = (safe_div_func_uint8_t_u_u(((&p_28 != (**l_866)) | (*p_1919->g_457)), ((safe_mul_func_int8_t_s_s((((&l_662 != (void*)0) , ((void*)0 != &p_1919->g_414)) & p_1919->g_165), p_29)) , (*p_1919->g_457))))) , p_29), p_29))) != l_566) > 0x0955L))) >= p_29) , p_29), (**p_1919->g_414))));
    for (p_1919->g_52 = 14; (p_1919->g_52 == 20); p_1919->g_52++)
    { /* block id: 453 */
        int32_t ********l_884 = &p_1919->g_882;
        int32_t *******l_886 = &p_1919->g_883;
        int32_t ********l_885 = &l_886;
        uint8_t *l_897 = (void*)0;
        uint8_t *l_898 = &p_1919->g_62[4];
        l_738[5][4] &= ((safe_rshift_func_uint16_t_u_u(((((*l_898) = (safe_rshift_func_int8_t_s_s((((&p_1919->g_529[0][3] == (p_1919->g_528 = &p_1919->g_529[0][2])) > ((safe_add_func_int8_t_s_s(((*p_1919->g_457) = (((*l_884) = p_1919->g_882) == ((*l_885) = (void*)0))), (((safe_mul_func_uint8_t_u_u((((*l_873)--) >= p_29), ((*p_28) >= (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((*p_1919->g_415) |= ((void*)0 != p_28)), (((p_1919->g_549 , p_29) <= p_1919->g_573[1]) && (-8L)))) , 0x19L), l_632[5][6])) , p_29), l_662))))) | p_29) | 1L))) , 0xC8L)) , p_29), p_1919->g_549))) > 0x18L) <= l_566), 0)) & p_1919->g_599[1]);
        (*p_1919->g_899) &= (*p_28);
    }
    return l_900;
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_79 p_1919->g_295 p_1919->g_168 p_1919->g_104 p_1919->g_52 p_1919->g_251
 * writes: p_1919->g_104 p_1919->g_52
 */
uint32_t  func_32(int32_t  p_33, struct S0 * p_1919)
{ /* block id: 294 */
    int32_t *l_550 = (void*)0;
    int16_t ****l_553 = (void*)0;
    l_550 = (p_1919->g_79 , &p_33);
    (*p_1919->g_168) = ((safe_add_func_int16_t_s_s(((((p_33 <= p_33) >= 0x5A25FFD0L) , ((-1L) | p_1919->g_295)) && ((void*)0 == l_553)), (((*l_550) <= (*l_550)) || p_33))) , (*p_1919->g_168));
    for (p_1919->g_52 = (-19); (p_1919->g_52 != 5); ++p_1919->g_52)
    { /* block id: 299 */
        (*p_1919->g_168) = (void*)0;
    }
    (*p_1919->g_168) = l_550;
    return p_1919->g_251;
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_503 p_1919->g_79 p_1919->g_97 p_1919->g_168 p_1919->g_5 p_1919->g_415 p_1919->g_276 p_1919->g_528 p_1919->g_52 p_1919->g_529 p_1919->g_543 p_1919->g_403 p_1919->g_457 p_1919->g_251
 * writes: p_1919->g_503 p_1919->g_79 p_1919->g_104 p_1919->g_528 p_1919->g_543 p_1919->g_179
 */
int8_t  func_34(int32_t * p_35, int64_t  p_36, int32_t  p_37, int64_t  p_38, struct S0 * p_1919)
{ /* block id: 264 */
    int16_t ***l_521[10] = {&p_1919->g_414,&p_1919->g_414,(void*)0,&p_1919->g_414,&p_1919->g_414,&p_1919->g_414,&p_1919->g_414,(void*)0,&p_1919->g_414,&p_1919->g_414};
    int32_t l_525 = (-4L);
    uint8_t ***l_531 = (void*)0;
    int32_t l_547 = 0x29E48247L;
    int i;
    for (p_1919->g_503 = 9; (p_1919->g_503 > (-28)); p_1919->g_503 = safe_sub_func_uint32_t_u_u(p_1919->g_503, 6))
    { /* block id: 267 */
        uint64_t l_522[5][5] = {{2UL,1UL,2UL,2UL,1UL},{2UL,1UL,2UL,2UL,1UL},{2UL,1UL,2UL,2UL,1UL},{2UL,1UL,2UL,2UL,1UL},{2UL,1UL,2UL,2UL,1UL}};
        uint8_t ****l_530 = &p_1919->g_528;
        int32_t l_532[1][2][8] = {{{(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)},{(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)}}};
        uint16_t *l_544 = &p_1919->g_179[1];
        int16_t l_545 = 0x0720L;
        int32_t *l_546[2][2];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_546[i][j] = &p_1919->g_91[3][3];
        }
        for (p_1919->g_79 = 27; (p_1919->g_79 == 55); p_1919->g_79 = safe_add_func_int32_t_s_s(p_1919->g_79, 9))
        { /* block id: 270 */
            uint16_t **l_514 = (void*)0;
            uint16_t *l_516 = &p_1919->g_79;
            uint16_t **l_515 = &l_516;
            int16_t ***l_519 = (void*)0;
            int16_t ****l_520 = &l_519;
            l_522[0][0] = ((&p_1919->g_286[0][3] != ((*l_515) = &p_1919->g_179[1])) >= (p_1919->g_97[5] > (((*l_520) = l_519) != l_521[1])));
        }
        for (p_38 = 0; (p_38 != 0); p_38 = safe_add_func_int8_t_s_s(p_38, 5))
        { /* block id: 277 */
            (*p_1919->g_168) = p_35;
            if ((*p_35))
                continue;
            (*p_1919->g_168) = p_35;
        }
        if (l_525)
            continue;
        l_547 = ((safe_mul_func_int16_t_s_s((*p_1919->g_415), ((*l_544) = ((((l_532[0][0][3] = (((*l_530) = p_1919->g_528) != (p_1919->g_52 , l_531))) && ((l_525 = (p_1919->g_543 |= (safe_mod_func_int32_t_s_s((-1L), (((*p_1919->g_415) != (((safe_rshift_func_uint8_t_u_s(1UL, 4)) & ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((((((7UL & p_37) == p_36) , (*p_1919->g_528)) != (void*)0) || 0UL), p_37)), 18446744073709551615UL)), 2)) && (-9L))) < 18446744073709551614UL)) ^ l_532[0][0][3]))))) || p_1919->g_403)) > 0x0726L) > p_36)))) , l_545);
    }
    return (*p_1919->g_457);
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_276 p_1919->g_179 p_1919->g_286 p_1919->g_104 p_1919->g_5 p_1919->g_220 p_1919->g_168 p_1919->g_2 p_1919->g_91 p_1919->g_295 p_1919->g_62 p_1919->g_52 p_1919->g_51 p_1919->g_97 p_1919->g_245 p_1919->g_315 p_1919->g_251 p_1919->g_403 p_1919->g_406 p_1919->g_414 p_1919->g_415 p_1919->g_457 p_1919->g_461
 * writes: p_1919->g_276 p_1919->g_295 p_1919->g_52 p_1919->g_306 p_1919->g_179 p_1919->g_91 p_1919->g_104 p_1919->g_220 p_1919->g_79 p_1919->g_403 p_1919->g_406 p_1919->g_414 p_1919->g_251 p_1919->g_503
 */
uint16_t  func_41(int16_t  p_42, uint64_t  p_43, int32_t  p_44, int32_t * p_45, struct S0 * p_1919)
{ /* block id: 19 */
    uint8_t *l_61 = &p_1919->g_62[7];
    int32_t **l_247 = &p_1919->g_104;
    int8_t *l_248 = (void*)0;
    int8_t *l_249 = (void*)0;
    int8_t *l_250[9][10] = {{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251},{&p_1919->g_251,&p_1919->g_251,&p_1919->g_251,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1919->g_251,&p_1919->g_251}};
    int32_t l_252 = 2L;
    int64_t l_253 = (-1L);
    int64_t l_281 = 0L;
    uint64_t *l_305 = &p_1919->g_306;
    uint16_t *l_309 = (void*)0;
    uint16_t *l_310 = &p_1919->g_179[1];
    int32_t l_313 = 0x5FD7C74CL;
    int32_t l_320[5][8] = {{(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L},{(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L},{(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L},{(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L},{(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L,(-1L),(-1L),0x659FE8F6L}};
    uint8_t l_357 = 0UL;
    uint8_t **l_374 = (void*)0;
    uint8_t ***l_373 = &l_374;
    uint8_t l_418 = 0xC4L;
    uint32_t l_437[2][10][5] = {{{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL}},{{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL},{3UL,0UL,3UL,3UL,0UL}}};
    uint32_t l_506[9][8][2] = {{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}},{{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L},{4294967295UL,0x5DECE661L}}};
    int i, j, k;
    l_252 |= l_281;
    for (p_1919->g_276 = 1; (p_1919->g_276 <= 6); p_1919->g_276 += 1)
    { /* block id: 153 */
        int32_t *l_293 = &l_252;
        uint64_t *l_294 = &p_1919->g_295;
        int32_t ***l_296 = &p_1919->g_168;
        int i;
        (*p_1919->g_51) = ((p_1919->g_179[p_1919->g_276] >= ((&l_247 != (((*l_294) |= (safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(p_1919->g_286[0][3], 7)) < (((safe_sub_func_uint32_t_u_u(((((**l_247) && ((((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(0xE7BEL, ((*p_1919->g_104) == 1UL))), ((*l_293) = ((*p_45) == (0x469C46D6A43C1C3EL > p_44))))) == 0UL) >= p_1919->g_220) , (*l_293))) , (**p_1919->g_168)) | (*p_1919->g_104)), p_1919->g_276)) , p_1919->g_2[3][3]) ^ p_42)) && p_1919->g_91[6][5]), 5))) , l_296)) >= p_1919->g_62[3])) <= p_1919->g_52);
    }
    p_1919->g_91[9][5] ^= (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_310) = (safe_sub_func_int64_t_s_s(((+(p_1919->g_97[4] , p_1919->g_2[3][3])) || 6L), (1UL & (safe_mul_func_int16_t_s_s((4L != ((*l_305) = (**l_247))), (safe_mul_func_uint16_t_u_u((**l_247), 7L)))))))) , (((safe_sub_func_int8_t_s_s(l_313, p_42)) , (**l_247)) ^ (*p_1919->g_245))), p_1919->g_220)), p_44));
    for (p_1919->g_295 = 0; (p_1919->g_295 <= 8); p_1919->g_295 += 1)
    { /* block id: 163 */
        int32_t *l_314 = &p_1919->g_91[1][5];
        int32_t l_321 = (-1L);
        int32_t l_323 = (-1L);
        int32_t l_324 = 1L;
        int32_t l_349 = 0x5561B8B1L;
        int32_t l_350 = 4L;
        int32_t l_351 = 0L;
        int32_t l_354 = (-1L);
        int16_t **l_417 = (void*)0;
        int16_t l_422 = 0x3C9FL;
        int32_t l_429 = 1L;
        int32_t l_430 = 0x713DE20AL;
        int32_t l_431 = 0x75A9B624L;
        int32_t l_432 = 0x1DE86189L;
        int32_t l_435 = 0x46EBBA30L;
        uint32_t l_458 = 1UL;
        uint64_t l_482 = 18446744073709551615UL;
        int32_t ***l_488 = &p_1919->g_168;
        (*p_1919->g_168) = l_314;
        (*p_1919->g_315) &= (**l_247);
        if ((*p_45))
            break;
        for (l_253 = 7; (l_253 >= 2); l_253 -= 1)
        { /* block id: 169 */
            uint64_t l_325 = 0xF510D4DC2D5A9D79L;
            int32_t l_346 = 0L;
            int32_t l_347 = 0x4D3533CDL;
            int32_t l_348 = 0x12BDD7A7L;
            int32_t l_352 = (-1L);
            int32_t l_353 = 8L;
            int32_t l_355 = 0x4B12F658L;
            int32_t l_356[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
            uint16_t l_404 = 0xB0BEL;
            int32_t ***l_483 = &p_1919->g_168;
            int32_t ****l_484 = &l_483;
            int32_t ***l_486[4][10] = {{&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168},{&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168},{&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168},{&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168,&p_1919->g_168}};
            int32_t ****l_485 = &l_486[0][6];
            int32_t ****l_487 = (void*)0;
            int16_t *l_491 = &l_422;
            int16_t ****l_500 = (void*)0;
            int16_t ***l_502 = &p_1919->g_414;
            int16_t ****l_501 = &l_502;
            int64_t *l_504 = &l_281;
            int32_t *l_505 = &l_351;
            int i, j;
            for (l_313 = 3; (l_313 <= 8); l_313 += 1)
            { /* block id: 172 */
                int64_t l_316 = (-1L);
                int32_t l_322[2][2];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_322[i][j] = 0x6C17839FL;
                }
                for (p_43 = 1; (p_43 <= 8); p_43 += 1)
                { /* block id: 175 */
                    uint8_t l_328 = 6UL;
                    int32_t l_331 = 1L;
                    int32_t *l_332 = &l_320[3][3];
                    int32_t *l_333 = &p_1919->g_52;
                    int32_t *l_334 = &l_320[4][7];
                    int32_t *l_335 = &l_331;
                    int32_t *l_336 = &p_1919->g_52;
                    int32_t *l_337 = &p_1919->g_52;
                    int32_t *l_338 = (void*)0;
                    int32_t *l_339 = &l_322[0][1];
                    int32_t *l_340 = &l_323;
                    int32_t *l_341 = &l_331;
                    int32_t *l_342 = (void*)0;
                    int32_t *l_343 = &l_320[0][0];
                    int32_t *l_344 = &l_320[0][0];
                    int32_t *l_345[10] = {&l_252,&l_323,&l_323,&l_323,&l_252,&l_252,&l_323,&l_323,&l_323,&l_252};
                    uint8_t l_364 = 0x27L;
                    int i;
                    for (p_1919->g_220 = 1; (p_1919->g_220 <= 8); p_1919->g_220 += 1)
                    { /* block id: 178 */
                        int32_t *l_317 = &p_1919->g_52;
                        int32_t *l_318 = &l_252;
                        int32_t *l_319[10] = {&p_1919->g_52,&p_1919->g_5,&p_1919->g_91[5][7],&p_1919->g_5,&p_1919->g_52,&p_1919->g_52,&p_1919->g_5,&p_1919->g_91[5][7],&p_1919->g_5,&p_1919->g_52};
                        int i;
                        l_325--;
                        (*p_1919->g_168) = (*p_1919->g_168);
                        (*p_1919->g_104) &= p_1919->g_62[l_253];
                        --l_328;
                    }
                    ++l_357;
                    for (l_349 = 4; (l_349 >= 1); l_349 -= 1)
                    { /* block id: 187 */
                        int32_t l_375 = 1L;
                        int16_t *l_378 = &p_1919->g_276;
                        uint64_t *l_399 = (void*)0;
                        uint64_t *l_400 = (void*)0;
                        uint64_t *l_401[7][4] = {{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325},{(void*)0,&l_325,(void*)0,&l_325}};
                        uint16_t *l_402 = &p_1919->g_79;
                        uint64_t *l_405[7][2][7];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_405[i][j][k] = &p_1919->g_406;
                            }
                        }
                        l_375 = (((p_1919->g_286[(l_253 + 1)][(l_349 + 1)] && (safe_div_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((((*l_305) = l_364) , (((safe_lshift_func_int8_t_s_s(p_1919->g_5, ((safe_mul_func_uint8_t_u_u(p_1919->g_286[(l_253 + 1)][(l_349 + 1)], p_44)) <= 0x3DA6A2FAL))) ^ (**p_1919->g_168)) ^ (--(*l_310)))) & ((((p_1919->g_2[3][3] != (((safe_sub_func_int32_t_s_s((p_1919->g_97[6] , (**p_1919->g_168)), (*l_314))) , (void*)0) == l_373)) , p_42) , 1L) & p_1919->g_52)), 0x12FA61D4L)) == 0x33D75D2CL) > (**p_1919->g_168)), p_1919->g_97[8]))) || 0xF4864FDCL) , (**l_247));
                        (*l_334) = (safe_add_func_int16_t_s_s(((*l_378) &= p_1919->g_97[5]), (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((p_1919->g_406 = (((*l_305) = (p_42 && (0L != p_42))) | (((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_375 = (p_1919->g_403 |= (((p_1919->g_251 , p_44) != (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*l_310)++), (((void*)0 != p_45) || (safe_rshift_func_uint16_t_u_u(((*l_402) = ((safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((*l_314) = ((*l_337) = (0x40438199L && l_322[1][1]))), p_42)), p_1919->g_220)) == (*l_339))), p_1919->g_251))))), 6L)) > p_1919->g_251) && p_42)) && 5L))), p_1919->g_2[2][5])), 13)) < l_404) || 0x3DE5L))) , 0x15L), p_1919->g_5)), 0x67E8L))));
                    }
                    if ((**l_247))
                        break;
                }
            }
            for (l_351 = 1; (l_351 <= 8); l_351 += 1)
            { /* block id: 207 */
                uint16_t *l_413 = &p_1919->g_179[6];
                int32_t l_420 = 0x01CEAB1AL;
                int32_t l_424 = 1L;
                int32_t l_425[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_425[i] = 0x1EFA3E66L;
                (*p_1919->g_104) &= p_1919->g_62[l_253];
                for (l_252 = 1; (l_252 <= 8); l_252 += 1)
                { /* block id: 211 */
                    uint8_t l_408 = 1UL;
                    uint16_t *l_411 = &p_1919->g_179[1];
                    int32_t l_423 = (-1L);
                    int32_t l_426 = (-1L);
                    int32_t l_427 = 0L;
                    int32_t l_428 = (-1L);
                    int32_t l_433 = 0x5B788127L;
                    int32_t l_434 = (-7L);
                    int16_t l_436 = 0x3078L;
                    for (p_1919->g_406 = 1; (p_1919->g_406 <= 4); p_1919->g_406 += 1)
                    { /* block id: 214 */
                        uint16_t **l_412 = &l_309;
                        int16_t ***l_416 = &p_1919->g_414;
                        int32_t l_419 = 0x797A311BL;
                        int32_t *l_421[2][10] = {{&l_320[0][0],&l_324,&l_420,&l_355,&l_324,&l_355,&l_420,&l_324,&l_320[0][0],&l_320[0][0]},{&l_320[0][0],&l_324,&l_420,&l_355,&l_324,&l_355,&l_420,&l_324,&l_320[0][0],&l_320[0][0]}};
                        int i, j;
                        l_419 &= (((((safe_unary_minus_func_uint16_t_u(l_320[p_1919->g_406][(p_1919->g_406 + 2)])) < (l_356[p_1919->g_406] , l_408)) & (safe_sub_func_uint64_t_u_u((*l_314), (((((~l_356[1]) | ((((((*l_412) = l_411) == l_413) , ((*l_416) = p_1919->g_414)) == l_417) | p_1919->g_2[3][5])) <= p_42) < l_418) < (**l_247))))) >= p_44) , 0x5CB467A9L);
                        l_437[0][3][1]--;
                        if (l_420)
                            continue;
                        (*l_314) = l_423;
                    }
                    for (l_350 = 0; (l_350 <= 7); l_350 += 1)
                    { /* block id: 224 */
                        int64_t *l_449 = &l_281;
                        int64_t *l_450 = &p_1919->g_403;
                        int32_t *l_459 = &l_420;
                        int32_t *l_460 = (void*)0;
                        int i, j;
                        (*p_1919->g_461) ^= ((*p_1919->g_104) = ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((((**p_1919->g_414) , ((safe_add_func_int32_t_s_s(l_348, ((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((((*l_450) = ((*l_449) = p_43)) ^ ((**l_247) == ((*l_305) = (((0x7A59L ^ (safe_div_func_int32_t_s_s((*l_314), l_420))) , ((((*l_247) == (((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_250[l_351][p_1919->g_295] == p_1919->g_457), p_1919->g_62[3])), (*p_1919->g_415))) , (**l_247)) , (*p_1919->g_168))) | p_44) , (**p_1919->g_414))) | p_43)))), l_458)) >= 0x44CFL) , l_459) != &l_355), (**p_1919->g_414))) > 65535UL))) , p_1919->g_5)) ^ l_425[4]))), p_43)) == 0x624E54D59158455BL));
                        (*p_1919->g_104) = (0L != (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u(l_425[3], 1)))), ((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((l_420 = ((*p_1919->g_457) = 0x38L)) & (safe_mul_func_uint16_t_u_u(p_42, ((safe_unary_minus_func_int8_t_s(((**p_1919->g_168) && 4294967295UL))) >= (*p_1919->g_415))))), (safe_add_func_int8_t_s_s(((~(247UL || ((((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((p_1919->g_403 = (safe_rshift_func_uint16_t_u_s(((*l_411) = p_43), 10))), 0x4652A5FCED1F6099L)), l_424)) > l_353) <= (**p_1919->g_414)) != 0x4DCDL))) <= l_482), p_43)))), 0UL)) >= 0x67D8L))));
                        if ((*l_314))
                            continue;
                    }
                    for (l_433 = 7; (l_433 >= 2); l_433 -= 1)
                    { /* block id: 239 */
                        (**l_247) = (*p_45);
                        if ((*p_45))
                            break;
                    }
                }
                return p_42;
            }
            (*l_505) ^= (l_323 &= (((l_488 = ((*l_485) = ((*l_484) = l_483))) == ((*l_314) , &p_1919->g_105)) | ((((((((*l_504) = ((safe_mod_func_uint64_t_u_u((((*l_491) = ((*p_1919->g_415) = (*p_1919->g_415))) == (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((l_313 = ((*l_310)--)) ^ (((*l_373) = &p_1919->g_135) != (void*)0)) ^ (((safe_rshift_func_int16_t_s_u((p_1919->g_503 = (((*l_501) = &p_1919->g_414) == &p_1919->g_414)), p_1919->g_406)) , p_44) && p_43)) >= 0x6FL), (*p_1919->g_457))), (*p_45)))), 18446744073709551615UL)) <= p_43)) == 0UL) == p_1919->g_286[8][3]) , p_1919->g_62[7]) , (-9L)) , (**l_247)) != 65535UL)));
            l_506[2][4][1]--;
        }
    }
    return (**l_247);
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_5 p_1919->g_51 p_1919->g_52
 * writes: p_1919->g_52
 */
uint32_t  func_46(int32_t * p_47, int32_t * p_48, uint8_t  p_49, struct S0 * p_1919)
{ /* block id: 15 */
    int64_t l_50[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    int i;
    for (p_49 = 0; p_49 < 9; p_49 += 1)
    {
        l_50[p_49] = (-1L);
    }
    (*p_1919->g_51) ^= (*p_48);
    return l_50[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_5 p_1919->g_2 p_1919->g_276 p_1919->g_52 p_1919->g_168 p_1919->g_104 p_1919->g_91 p_1919->g_503
 * writes: p_1919->g_270 p_1919->g_135 p_1919->g_276
 */
int32_t * func_53(int32_t * p_54, int32_t * p_55, uint32_t  p_56, struct S0 * p_1919)
{ /* block id: 138 */
    int32_t *l_254 = &p_1919->g_91[7][0];
    int32_t *l_255 = (void*)0;
    int32_t l_256 = 0x005B6435L;
    int32_t *l_257 = &l_256;
    int32_t *l_258[1];
    int64_t l_259 = 0x33430D3C639A340CL;
    int8_t l_260 = 0L;
    int8_t l_261 = 0x4FL;
    uint16_t l_262 = 65532UL;
    uint8_t **l_269 = &p_1919->g_135;
    int16_t *l_275 = &p_1919->g_276;
    uint16_t l_277 = 0UL;
    int i;
    for (i = 0; i < 1; i++)
        l_258[i] = &p_1919->g_91[3][4];
    l_262++;
    l_277 ^= ((safe_lshift_func_int8_t_s_u(((p_1919->g_270 = ((safe_rshift_func_uint16_t_u_s((l_269 == (((1L == 0xADL) > p_56) , &p_1919->g_135)), 1)) && (*p_55))) , p_1919->g_2[3][3]), (((((((((((safe_mul_func_int16_t_s_s(((*l_275) |= (((*l_269) = &p_1919->g_62[0]) != &p_1919->g_97[8])), 0x343DL)) ^ 0xC868F2EFL) && 0UL) < 0x7972L) ^ p_1919->g_52) ^ 1UL) <= p_56) , 3UL) < p_56) , p_1919->g_52) || 65535UL))) , (*p_55));
    for (l_261 = 0; (l_261 > (-25)); --l_261)
    { /* block id: 146 */
        uint64_t l_280 = 1UL;
        l_280 = (*p_55);
    }
    return (*p_1919->g_168);
}


/* ------------------------------------------ */
/* 
 * reads : p_1919->g_4 p_1919->g_5 p_1919->g_2 p_1919->g_51 p_1919->g_52 p_1919->g_91 p_1919->g_105 p_1919->g_79 p_1919->g_97 p_1919->g_104 p_1919->g_134 p_1919->g_168 p_1919->g_165 p_1919->g_135 p_1919->g_220 p_1919->g_179 p_1919->g_245
 * writes: p_1919->g_79 p_1919->g_52 p_1919->g_91 p_1919->g_104 p_1919->g_168 p_1919->g_179 p_1919->g_97 p_1919->g_220
 */
int32_t * func_66(int64_t  p_67, int32_t  p_68, struct S0 * p_1919)
{ /* block id: 21 */
    uint32_t l_77 = 4294967291UL;
    int16_t l_81 = 0x57ACL;
    uint8_t *l_96 = &p_1919->g_97[8];
    int32_t l_101 = 0x4C85B7F5L;
    int32_t l_102 = (-10L);
    int32_t l_114 = 0x68548FAEL;
    int32_t l_133[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int8_t l_211 = 0x3EL;
    uint16_t l_243 = 0xD3EBL;
    int32_t *l_246 = &p_1919->g_52;
    int i;
    for (p_67 = 0; (p_67 <= 29); p_67 = safe_add_func_uint16_t_u_u(p_67, 1))
    { /* block id: 24 */
        uint8_t l_80 = 0x40L;
        uint8_t **l_126 = &l_96;
        int32_t l_150 = 5L;
        int16_t *l_161[4][6];
        uint16_t *l_232[9][7][1] = {{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}},{{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]},{&p_1919->g_179[2]}}};
        int32_t *l_244 = &p_1919->g_91[9][0];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_161[i][j] = &l_81;
        }
        if ((*p_1919->g_4))
        { /* block id: 25 */
            uint16_t *l_78 = &p_1919->g_79;
            int8_t l_84 = 0L;
            int32_t *l_87[9] = {(void*)0,&p_1919->g_5,(void*)0,(void*)0,&p_1919->g_5,(void*)0,(void*)0,&p_1919->g_5,(void*)0};
            int i;
            (*p_1919->g_51) &= (safe_div_func_uint8_t_u_u((p_68 > (((safe_rshift_func_uint16_t_u_u((l_80 = ((*l_78) = (0x052C4540E5169387L ^ l_77))), l_81)) | (l_84 &= (safe_div_func_int16_t_s_s(l_77, (0x5C5007C8L || 0xF8785D54L))))) || 0x9FD68CABD04657E6L)), (safe_mul_func_uint8_t_u_u(((void*)0 == l_87[2]), p_1919->g_2[3][3]))));
            if (p_67)
                break;
            for (p_1919->g_52 = 0; (p_1919->g_52 > 21); p_1919->g_52++)
            { /* block id: 33 */
                uint32_t *l_90 = (void*)0;
                int32_t l_100 = 4L;
                l_102 = (((&p_1919->g_79 == (((p_68 < ((p_1919->g_91[9][5] &= p_68) , (l_101 |= ((p_67 > ((0UL && (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-4L), ((void*)0 != l_96))), 1))) >= ((((safe_mod_func_int64_t_s_s(l_100, 5L)) ^ p_68) <= 0xF5L) | 0x92L))) > p_1919->g_2[3][3])))) != p_1919->g_2[3][3]) , &p_1919->g_79)) , 0UL) || l_77);
            }
        }
        else
        { /* block id: 38 */
            uint8_t *l_117 = &p_1919->g_97[8];
            int32_t l_122 = (-1L);
            int32_t **l_148[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t *l_177 = &p_1919->g_79;
            uint16_t *l_178 = &p_1919->g_179[1];
            int i;
            (*p_1919->g_105) = &p_1919->g_5;
            for (l_77 = 5; (l_77 > 23); ++l_77)
            { /* block id: 42 */
                uint64_t l_131[2][4][8] = {{{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL}},{{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL},{0x081AEEC9762EA743L,18446744073709551606UL,0x7EE216E9B3886849L,7UL,0x7EE216E9B3886849L,18446744073709551606UL,0x081AEEC9762EA743L,0x34682653F318A4EBL}}};
                int i, j, k;
                for (l_102 = 6; (l_102 >= 0); l_102 -= 1)
                { /* block id: 45 */
                    uint8_t **l_118 = &l_96;
                    uint8_t **l_119 = (void*)0;
                    uint8_t *l_121 = &p_1919->g_97[8];
                    uint8_t **l_120 = &l_121;
                    int i, j;
                    if (p_1919->g_91[(l_102 + 1)][l_102])
                        break;
                    if (((+(p_67 < (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(p_1919->g_79, p_1919->g_91[(l_102 + 1)][l_102])), (l_114 , 0x66L))))) != ((safe_add_func_uint16_t_u_u(((((p_1919->g_97[6] , ((*l_118) = l_117)) != ((*l_120) = &p_1919->g_97[8])) ^ (((l_122 , p_1919->g_79) == p_1919->g_2[3][3]) < 7L)) , 0xC07DL), p_1919->g_79)) != 0x04L)))
                    { /* block id: 49 */
                        uint8_t ***l_125 = &l_119;
                        int16_t *l_127 = &l_81;
                        int32_t l_130 = 0x57CD5174L;
                        int32_t *l_132 = &l_101;
                        uint16_t *l_149 = &p_1919->g_79;
                        int i, j;
                        l_133[7] &= (((*l_127) = (safe_add_func_int8_t_s_s((l_80 , (p_1919->g_2[3][4] < p_68)), (((((*l_125) = &l_121) == l_126) , 0x12L) ^ l_114)))) , ((*l_132) ^= (0x2B7BL != ((((((safe_add_func_int8_t_s_s(((((*l_127) = p_1919->g_91[9][5]) || l_77) , 0L), l_130)) && l_131[0][0][3]) > l_131[0][0][4]) & 246UL) , 0x6BL) > 0x93L))));
                        (*l_132) = ((**p_1919->g_105) < (((void*)0 != p_1919->g_134) || ((((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((*l_149) |= ((p_67 && p_68) || (l_131[0][0][3] , ((*l_127) &= (safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_122, (safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((&p_1919->g_104 == l_148[3]) != p_68), 1L)), p_67)))), p_1919->g_5)))))) != p_1919->g_5) || (-8L)), 0UL)), 0xAABEL)) > p_67) <= p_1919->g_52) != p_1919->g_91[(l_102 + 1)][l_102])));
                    }
                    else
                    { /* block id: 58 */
                        if ((*p_1919->g_51))
                            break;
                        if ((*p_1919->g_104))
                            break;
                    }
                }
                l_150 &= p_68;
            }
            for (l_77 = 29; (l_77 < 58); l_77 = safe_add_func_uint32_t_u_u(l_77, 2))
            { /* block id: 67 */
                uint64_t l_153 = 18446744073709551612UL;
                int32_t *l_156 = &l_150;
                l_153 |= l_80;
                if (p_68)
                    break;
                if ((*p_1919->g_104))
                { /* block id: 70 */
                    for (l_101 = (-8); (l_101 != (-23)); --l_101)
                    { /* block id: 73 */
                        int32_t *l_157 = &p_1919->g_91[9][5];
                        return l_157;
                    }
                }
                else
                { /* block id: 76 */
                    uint16_t l_158 = 1UL;
                    (*l_156) = (l_158 ^= 0x5CCC3D47L);
                    for (p_68 = 0; (p_68 <= 3); p_68 += 1)
                    { /* block id: 81 */
                        int16_t *l_163 = (void*)0;
                        int16_t **l_162 = &l_163;
                        uint32_t *l_164 = &p_1919->g_165;
                        int32_t **l_167 = (void*)0;
                        int32_t ***l_166 = &l_167;
                        int i;
                        (*l_156) = ((safe_mod_func_int8_t_s_s(((((18446744073709551615UL > ((l_148[p_68] = &p_1919->g_104) != (p_1919->g_168 = ((((((l_161[0][2] == ((*l_162) = l_161[3][3])) , (void*)0) != l_164) , (-1L)) < 0x78L) , ((*l_166) = &p_1919->g_104))))) != 1UL) || p_68) <= p_67), 0x63L)) || p_1919->g_97[0]);
                    }
                }
                (*p_1919->g_168) = &l_101;
            }
            if ((safe_sub_func_uint16_t_u_u(1UL, (safe_div_func_int16_t_s_s((((*l_178) = ((*l_177) = ((safe_add_func_uint32_t_u_u(p_67, (safe_mul_func_uint8_t_u_u(254UL, (~(0x441DL == 0x144EL)))))) <= p_68))) != 0xD4E8L), (safe_add_func_int32_t_s_s(((p_68 , &l_117) != &p_1919->g_135), 0L)))))))
            { /* block id: 93 */
                int32_t *l_182[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_182[i] = &p_1919->g_5;
                (*p_1919->g_168) = l_182[0];
            }
            else
            { /* block id: 95 */
                uint8_t *l_208 = &l_80;
                int32_t l_209 = (-1L);
                uint32_t l_223 = 0x666AC21EL;
                (*p_1919->g_168) = (((void*)0 == &p_1919->g_105) , &l_133[6]);
                for (l_122 = 13; (l_122 >= (-11)); l_122 = safe_sub_func_int16_t_s_s(l_122, 4))
                { /* block id: 99 */
                    int32_t *l_187 = &p_1919->g_52;
                    for (l_150 = (-30); (l_150 >= (-13)); l_150 = safe_add_func_int64_t_s_s(l_150, 8))
                    { /* block id: 102 */
                        uint8_t l_210 = 255UL;
                        l_187 = ((*p_1919->g_168) = &l_133[7]);
                        l_211 ^= ((((safe_lshift_func_uint8_t_u_s(p_67, (4L > 0x1803394B1C0CD3E0L))) , ((safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(((safe_unary_minus_func_int16_t_s(((safe_div_func_uint8_t_u_u((--(*l_96)), (p_67 & (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((((+((*l_178) = p_67)) & (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(p_1919->g_5, (p_1919->g_165 && ((((*p_1919->g_104) = p_67) , l_208) != (*p_1919->g_134))))), p_1919->g_2[1][2]))) , 18446744073709551615UL), p_68)), l_209))))) < 4L))) , p_67))) && l_210), 1L)) & p_68), l_209)) < 6L)) & p_67) < p_1919->g_91[5][6]);
                    }
                    for (l_77 = (-7); (l_77 == 23); ++l_77)
                    { /* block id: 112 */
                        (*p_1919->g_51) |= (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(((0x773343C1BBC4476CL > ((((safe_rshift_func_uint8_t_u_s(((l_114 , (((p_1919->g_220 &= l_81) , (-2L)) , p_67)) == 0x50DD6F6EL), 3)) ^ (-1L)) , ((safe_sub_func_uint8_t_u_u(((p_1919->g_179[1] , (**p_1919->g_168)) & l_102), 0xF5L)) ^ l_133[7])) != (-8L))) > p_68), 1)) != p_67) , p_67), 13)) > p_67) , p_68);
                        (*l_187) ^= (-1L);
                        if (l_80)
                            continue;
                    }
                }
                --l_223;
                for (l_80 = 7; (l_80 >= 19); l_80 = safe_add_func_uint64_t_u_u(l_80, 4))
                { /* block id: 122 */
                    (*p_1919->g_104) = 5L;
                }
            }
        }
        if (l_80)
            break;
        (*p_1919->g_245) = ((*l_244) = (0x5285L >= ((p_1919->g_91[9][5] ^ (safe_mul_func_uint16_t_u_u((((((**l_126) &= (0x51L <= 0x72L)) & l_114) , (safe_mod_func_uint16_t_u_u((l_133[7] = (l_101 = p_67)), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(l_80, (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint64_t_u_u((((((p_1919->g_179[1] >= (safe_mul_func_int8_t_s_s((((p_1919->g_179[0] ^ 65529UL) < l_243) && 18446744073709551615UL), 0x0AL))) & p_68) == l_80) <= 0x1A7FL) < p_1919->g_52), p_67)) & p_67) < p_1919->g_97[8]), p_1919->g_79)))) , 0UL), 0x70L))))) < 0L), (-1L)))) || 255UL)));
        (*p_1919->g_168) = &l_150;
    }
    return l_246;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1920;
    struct S0* p_1919 = &c_1920;
    struct S0 c_1921 = {
        {{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL},{0x0FB770A7L,0x6D058A83L,0x19C9214AL,0x0FB770A7L,(-1L),0x19C9214AL,0x19C9214AL}}, // p_1919->g_2
        0x315E314AL, // p_1919->g_5
        &p_1919->g_5, // p_1919->g_4
        (-1L), // p_1919->g_52
        &p_1919->g_52, // p_1919->g_51
        {255UL,0xFAL,255UL,255UL,0xFAL,255UL,255UL,0xFAL}, // p_1919->g_62
        0xECEFL, // p_1919->g_79
        {{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L},{7L,7L,(-7L),(-1L),0L,(-1L),(-7L),7L}}, // p_1919->g_91
        {0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL,0x1FL}, // p_1919->g_97
        &p_1919->g_5, // p_1919->g_104
        {{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104},{&p_1919->g_104}}, // p_1919->g_103
        &p_1919->g_104, // p_1919->g_105
        (void*)0, // p_1919->g_135
        &p_1919->g_135, // p_1919->g_134
        0xD06F1CB6L, // p_1919->g_165
        &p_1919->g_104, // p_1919->g_168
        {0xD5F7L,0x6F1CL,0xD5F7L,0xD5F7L,0x6F1CL,0xD5F7L,0xD5F7L}, // p_1919->g_179
        4294967295UL, // p_1919->g_220
        &p_1919->g_52, // p_1919->g_245
        0x66L, // p_1919->g_251
        0x14A90D1AL, // p_1919->g_270
        0x24CDL, // p_1919->g_276
        {{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL},{0x038FL,65534UL,65534UL,0x038FL,0x038FL,65534UL}}, // p_1919->g_286
        1UL, // p_1919->g_295
        18446744073709551608UL, // p_1919->g_306
        &p_1919->g_52, // p_1919->g_315
        0x3CA3F5977C4BEDB2L, // p_1919->g_403
        18446744073709551608UL, // p_1919->g_406
        &p_1919->g_276, // p_1919->g_415
        &p_1919->g_415, // p_1919->g_414
        &p_1919->g_251, // p_1919->g_457
        &p_1919->g_52, // p_1919->g_461
        (-1L), // p_1919->g_503
        {{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135},{&p_1919->g_135,(void*)0,&p_1919->g_135,&p_1919->g_135}}, // p_1919->g_529
        &p_1919->g_529[6][0], // p_1919->g_528
        0L, // p_1919->g_543
        0x62A795DCL, // p_1919->g_549
        {9UL,9UL,9UL,9UL,9UL,9UL,9UL,9UL}, // p_1919->g_573
        {5L,5L}, // p_1919->g_599
        (void*)0, // p_1919->g_663
        &p_1919->g_168, // p_1919->g_665
        &p_1919->g_665, // p_1919->g_664
        {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}}, // p_1919->g_697
        &p_1919->g_664, // p_1919->g_700
        &p_1919->g_700, // p_1919->g_883
        &p_1919->g_883, // p_1919->g_882
        &p_1919->g_91[7][3], // p_1919->g_899
        (void*)0, // p_1919->g_955
        &p_1919->g_955, // p_1919->g_954
        &p_1919->g_954, // p_1919->g_953
        {{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L},{0L,1L}}, // p_1919->g_970
        (-6L), // p_1919->g_981
        {{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}},{{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79},{(void*)0,&p_1919->g_79,&p_1919->g_79}}}, // p_1919->g_989
        &p_1919->g_989[1][8][2], // p_1919->g_988
        (void*)0, // p_1919->g_1021
        {{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}},{{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021,(void*)0,&p_1919->g_1021}}}, // p_1919->g_1020
        {&p_1919->g_1021}, // p_1919->g_1022
        &p_1919->g_1021, // p_1919->g_1023
        1UL, // p_1919->g_1067
        &p_1919->g_954, // p_1919->g_1070
        0x4511E48AL, // p_1919->g_1137
        {{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021},{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021},{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021},{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021},{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021},{&p_1919->g_1021,&p_1919->g_1021,&p_1919->g_1021}}, // p_1919->g_1173
        18446744073709551615UL, // p_1919->g_1187
        &p_1919->g_1187, // p_1919->g_1186
        {&p_1919->g_1186}, // p_1919->g_1185
        0x1965CD07L, // p_1919->g_1282
        &p_1919->g_1282, // p_1919->g_1281
        &p_1919->g_1281, // p_1919->g_1280
        {{&p_1919->g_1280},{&p_1919->g_1280}}, // p_1919->g_1279
        {{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}},{{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0},{(void*)0,(void*)0,&p_1919->g_1279[1][0],(void*)0}}}, // p_1919->g_1278
        &p_1919->g_1278[1][2][1], // p_1919->g_1277
        &p_1919->g_981, // p_1919->g_1333
        &p_1919->g_1333, // p_1919->g_1332
        &p_1919->g_503, // p_1919->g_1345
        &p_1919->g_1345, // p_1919->g_1344
        0xBB751FB33093D1BCL, // p_1919->g_1386
        {{{(void*)0,&p_1919->g_1173[0][2],(void*)0,(void*)0}},{{(void*)0,&p_1919->g_1173[0][2],(void*)0,(void*)0}},{{(void*)0,&p_1919->g_1173[0][2],(void*)0,(void*)0}}}, // p_1919->g_1390
        &p_1919->g_415, // p_1919->g_1400
        {&p_1919->g_1400,&p_1919->g_1400,&p_1919->g_1400,&p_1919->g_1400,&p_1919->g_1400,&p_1919->g_1400,&p_1919->g_1400}, // p_1919->g_1399
        &p_1919->g_1399[0], // p_1919->g_1398
        0x1FE0051BL, // p_1919->g_1420
        4294967286UL, // p_1919->g_1457
        1L, // p_1919->g_1481
        0UL, // p_1919->g_1542
        &p_1919->g_104, // p_1919->g_1628
        &p_1919->g_62[3], // p_1919->g_1731
        (void*)0, // p_1919->g_1775
        0xE0A61998FC623B1AL, // p_1919->g_1782
        18446744073709551612UL, // p_1919->g_1809
        4L, // p_1919->g_1848
        &p_1919->g_1848, // p_1919->g_1847
        &p_1919->g_1848, // p_1919->g_1854
        0x78L, // p_1919->g_1872
        &p_1919->g_97[8], // p_1919->g_1884
        0x26F7L, // p_1919->g_1907
    };
    c_1920 = c_1921;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1919);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1919->g_2[i][j], "p_1919->g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1919->g_5, "p_1919->g_5", print_hash_value);
    transparent_crc(p_1919->g_52, "p_1919->g_52", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1919->g_62[i], "p_1919->g_62[i]", print_hash_value);

    }
    transparent_crc(p_1919->g_79, "p_1919->g_79", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1919->g_91[i][j], "p_1919->g_91[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1919->g_97[i], "p_1919->g_97[i]", print_hash_value);

    }
    transparent_crc(p_1919->g_165, "p_1919->g_165", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1919->g_179[i], "p_1919->g_179[i]", print_hash_value);

    }
    transparent_crc(p_1919->g_220, "p_1919->g_220", print_hash_value);
    transparent_crc(p_1919->g_251, "p_1919->g_251", print_hash_value);
    transparent_crc(p_1919->g_270, "p_1919->g_270", print_hash_value);
    transparent_crc(p_1919->g_276, "p_1919->g_276", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1919->g_286[i][j], "p_1919->g_286[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1919->g_295, "p_1919->g_295", print_hash_value);
    transparent_crc(p_1919->g_306, "p_1919->g_306", print_hash_value);
    transparent_crc(p_1919->g_403, "p_1919->g_403", print_hash_value);
    transparent_crc(p_1919->g_406, "p_1919->g_406", print_hash_value);
    transparent_crc(p_1919->g_503, "p_1919->g_503", print_hash_value);
    transparent_crc(p_1919->g_543, "p_1919->g_543", print_hash_value);
    transparent_crc(p_1919->g_549, "p_1919->g_549", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1919->g_573[i], "p_1919->g_573[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1919->g_599[i], "p_1919->g_599[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1919->g_697[i][j], "p_1919->g_697[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1919->g_970[i][j], "p_1919->g_970[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1919->g_981, "p_1919->g_981", print_hash_value);
    transparent_crc(p_1919->g_1067, "p_1919->g_1067", print_hash_value);
    transparent_crc(p_1919->g_1137, "p_1919->g_1137", print_hash_value);
    transparent_crc(p_1919->g_1187, "p_1919->g_1187", print_hash_value);
    transparent_crc(p_1919->g_1282, "p_1919->g_1282", print_hash_value);
    transparent_crc(p_1919->g_1386, "p_1919->g_1386", print_hash_value);
    transparent_crc(p_1919->g_1420, "p_1919->g_1420", print_hash_value);
    transparent_crc(p_1919->g_1457, "p_1919->g_1457", print_hash_value);
    transparent_crc(p_1919->g_1481, "p_1919->g_1481", print_hash_value);
    transparent_crc(p_1919->g_1542, "p_1919->g_1542", print_hash_value);
    transparent_crc(p_1919->g_1782, "p_1919->g_1782", print_hash_value);
    transparent_crc(p_1919->g_1809, "p_1919->g_1809", print_hash_value);
    transparent_crc(p_1919->g_1848, "p_1919->g_1848", print_hash_value);
    transparent_crc(p_1919->g_1872, "p_1919->g_1872", print_hash_value);
    transparent_crc(p_1919->g_1907, "p_1919->g_1907", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
