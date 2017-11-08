// --atomics 11 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 6,16,82 -l 3,4,2
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

__constant uint32_t permutations[10][24] = {
{16,20,18,10,23,6,11,9,17,19,22,12,14,5,21,2,1,0,4,3,7,15,8,13}, // permutation 0
{19,5,3,14,23,9,17,21,4,8,13,22,2,11,6,10,7,1,0,15,12,20,16,18}, // permutation 1
{6,18,16,9,2,1,19,17,14,21,8,23,0,5,13,22,7,3,12,11,20,10,15,4}, // permutation 2
{3,9,13,14,2,22,11,17,6,5,15,18,20,0,12,7,8,1,4,21,23,10,16,19}, // permutation 3
{14,22,20,3,18,23,0,17,11,16,13,21,8,7,5,4,2,6,15,9,12,19,10,1}, // permutation 4
{5,0,6,22,12,14,10,21,9,4,8,20,2,16,13,3,7,18,19,11,17,15,1,23}, // permutation 5
{18,23,19,16,11,1,5,21,13,15,0,3,12,10,7,6,2,9,4,20,17,22,14,8}, // permutation 6
{17,12,13,0,10,18,8,20,11,19,21,22,6,1,14,15,2,4,16,9,23,5,7,3}, // permutation 7
{23,15,2,17,9,1,3,5,20,0,13,14,21,22,10,8,6,11,4,18,19,16,12,7}, // permutation 8
{9,19,18,23,10,17,12,4,2,22,15,14,21,5,6,20,3,8,11,13,16,0,1,7} // permutation 9
};

// Seed: 1421217462

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int16_t g_8;
    int16_t g_18;
    uint64_t g_35;
    uint16_t g_70;
    int32_t g_89;
    int32_t *g_90;
    int32_t *g_93;
    int8_t g_95;
    uint32_t g_108;
    uint32_t g_111;
    uint8_t g_113;
    int16_t g_116;
    volatile int16_t g_124;
    VECTOR(uint64_t, 4) g_125;
    uint32_t *g_134;
    uint32_t **g_133;
    uint32_t *** volatile g_132;
    int32_t ** volatile g_187;
    VECTOR(int64_t, 4) g_190;
    int32_t **g_265;
    uint32_t g_267;
    uint32_t g_292;
    int8_t g_295;
    int64_t g_304;
    int64_t *g_317;
    VECTOR(uint8_t, 2) g_326;
    VECTOR(uint32_t, 8) g_333;
    uint8_t g_385;
    int32_t g_424[7][3][4];
    uint32_t g_427;
    int32_t g_844;
    VECTOR(int32_t, 16) g_845;
    volatile int8_t g_846;
    int8_t g_847;
    uint64_t g_848;
    volatile uint64_t g_863;
    volatile int32_t g_924;
    volatile int32_t g_926;
    int8_t g_927;
    volatile uint64_t g_928;
    VECTOR(uint8_t, 2) g_981;
    VECTOR(uint64_t, 8) g_987;
    int64_t *g_1022;
    int64_t * volatile *g_1021;
    int32_t *g_1024;
    int32_t **g_1023;
    VECTOR(uint64_t, 16) g_1034;
    VECTOR(uint32_t, 8) g_1053;
    VECTOR(uint64_t, 8) g_1056;
    uint64_t g_1058;
    int16_t *g_1064;
    int16_t ** volatile g_1063;
    VECTOR(int32_t, 8) g_1074;
    uint32_t ***g_1079[7][9][4];
    uint32_t ****g_1078[1];
    int64_t **g_1115;
    int32_t ** volatile g_1156;
    volatile VECTOR(uint16_t, 16) g_1165;
    volatile VECTOR(uint32_t, 8) g_1167;
    uint32_t *g_1176[6];
    uint32_t **g_1175;
    VECTOR(int16_t, 8) g_1216;
    VECTOR(int8_t, 4) g_1217;
    volatile VECTOR(uint8_t, 4) g_1218;
    int32_t ** volatile g_1253;
    int32_t * volatile *g_1263[8][4][7];
    int32_t * volatile **g_1262;
    int32_t * volatile ** volatile * volatile g_1261;
    volatile VECTOR(uint64_t, 4) g_1269;
    volatile uint32_t g_1356;
    VECTOR(uint16_t, 2) g_1375;
    volatile VECTOR(uint16_t, 4) g_1395;
    uint64_t g_1416;
    volatile VECTOR(uint32_t, 8) g_1426;
    VECTOR(uint8_t, 2) g_1430;
    volatile VECTOR(uint8_t, 16) g_1431;
    volatile VECTOR(uint8_t, 8) g_1433;
    uint32_t g_1443;
    volatile int32_t g_1452;
    volatile VECTOR(int64_t, 4) g_1494;
    VECTOR(uint32_t, 16) g_1533;
    volatile VECTOR(uint32_t, 8) g_1534;
    volatile VECTOR(uint32_t, 2) g_1539;
    volatile VECTOR(uint32_t, 2) g_1541;
    VECTOR(int32_t, 16) g_1566;
    VECTOR(uint8_t, 16) g_1586;
    int16_t g_1604[6];
    int8_t g_1683;
    VECTOR(uint8_t, 8) g_1698;
    int32_t * volatile g_1723;
    volatile VECTOR(uint16_t, 16) g_1728;
    volatile VECTOR(uint16_t, 16) g_1729;
    volatile VECTOR(int32_t, 2) g_1732;
    VECTOR(int32_t, 4) g_1733;
    volatile VECTOR(uint16_t, 4) g_1793;
    volatile VECTOR(int16_t, 16) g_1799;
    VECTOR(int16_t, 16) g_1805;
    int32_t * volatile g_1817;
    int32_t * volatile g_1823;
    int32_t g_1871;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_1872);
uint8_t  func_11(int16_t * p_12, uint8_t  p_13, int16_t * p_14, int16_t * p_15, uint32_t  p_16, struct S0 * p_1872);
int16_t * func_19(int16_t * p_20, struct S0 * p_1872);
int16_t * func_21(int16_t * p_22, struct S0 * p_1872);
int32_t * func_24(int8_t  p_25, int32_t * p_26, int64_t  p_27, int32_t  p_28, uint32_t  p_29, struct S0 * p_1872);
int32_t * func_31(int16_t  p_32, uint64_t  p_33, struct S0 * p_1872);
int16_t  func_44(uint64_t * p_45, int32_t * p_46, uint64_t * p_47, int32_t  p_48, int32_t * p_49, struct S0 * p_1872);
int32_t * func_50(uint64_t * p_51, int64_t  p_52, struct S0 * p_1872);
uint64_t * func_53(uint64_t  p_54, struct S0 * p_1872);
int32_t * func_55(uint64_t * p_56, int16_t  p_57, uint64_t * p_58, uint64_t * p_59, int64_t  p_60, struct S0 * p_1872);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1872->g_comm_values p_1872->l_comm_values p_1872->g_35 p_1872->g_18 p_1872->g_89 p_1872->g_125 p_1872->g_111 p_1872->g_132 p_1872->g_108 p_1872->g_326 p_1872->g_333 p_1872->g_116 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_385 p_1872->g_93 p_1872->g_70 p_1872->g_292 p_1872->g_427 p_1872->g_124 p_1872->g_267 p_1872->g_848 p_1872->g_95 p_1872->g_863 p_1872->g_928 p_1872->g_845 p_1872->g_1034 p_1872->g_846 p_1872->g_190 p_1872->g_1053 p_1872->g_1056 p_1872->g_1063 p_1872->g_1074 p_1872->g_1078 p_1872->g_844 p_1872->g_924 p_1872->g_1064 p_1872->g_1058 p_1872->g_1165 p_1872->g_1167 p_1872->g_1175 p_1872->g_927 p_1872->g_1021 p_1872->g_1022 p_1872->g_1216 p_1872->g_1217 p_1872->g_1218 p_1872->g_926 p_1872->g_1253 p_1872->g_1261 p_1872->g_1269 p_1872->g_1023 p_1872->g_1024 p_1872->g_1356 p_1872->g_1375 p_1872->g_987 p_1872->g_1395 p_1872->g_1416 p_1872->g_1426 p_1872->g_1430 p_1872->g_1431 p_1872->g_1433 p_1872->g_1443 p_1872->g_1494 p_1872->g_1533 p_1872->g_1534 p_1872->g_1539 p_1872->g_1541 p_1872->g_1566 p_1872->g_1586 p_1872->g_1604 p_1872->g_1723 p_1872->g_1728 p_1872->g_1729 p_1872->g_1732 p_1872->g_1733 p_1872->g_1793 p_1872->g_1799 p_1872->g_1805 p_1872->g_1823 p_1872->g_1871
 * writes: p_1872->g_8 p_1872->g_35 p_1872->g_70 p_1872->g_18 p_1872->g_90 p_1872->g_93 p_1872->g_95 p_1872->g_108 p_1872->g_111 p_1872->g_113 p_1872->g_116 p_1872->g_125 p_1872->g_133 p_1872->g_317 p_1872->g_89 p_1872->g_190 p_1872->g_424 p_1872->g_427 p_1872->g_848 p_1872->g_863 p_1872->g_928 p_1872->g_295 p_1872->g_847 p_1872->g_134 p_1872->g_1058 p_1872->g_1074 p_1872->g_1078 p_1872->g_326 p_1872->g_844 p_1872->g_385 p_1872->g_1175 p_1872->g_304 p_1872->g_292 p_1872->g_981 p_1872->g_1356 p_1872->g_1416 p_1872->g_1443 p_1872->g_927 p_1872->g_1871
 */
uint16_t  func_1(struct S0 * p_1872)
{ /* block id: 4 */
    uint32_t l_6 = 0xC25FCC58L;
    int16_t *l_7 = &p_1872->g_8;
    int16_t *l_17 = &p_1872->g_18;
    int16_t *l_23 = &p_1872->g_18;
    int32_t *l_1870 = &p_1872->g_1871;
    (*l_1870) ^= (p_1872->g_comm_values[p_1872->tid] < (safe_sub_func_int16_t_s_s(0x7467L, (((safe_mul_func_int16_t_s_s(p_1872->g_comm_values[p_1872->tid], l_6)) , ((*l_7) = p_1872->g_comm_values[p_1872->tid])) <= (safe_mul_func_uint8_t_u_u(func_11(l_17, l_6, func_19(func_21(l_23, p_1872), p_1872), l_7, l_6, p_1872), 0x50L))))));
    return (*l_1870);
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_927 p_1872->g_292 p_1872->g_1723 p_1872->g_844 p_1872->g_1823 p_1872->g_111 p_1872->g_1443 p_1872->g_987 p_1872->g_1534 p_1872->g_1604 p_1872->g_1566 p_1872->g_1063 p_1872->g_385 p_1872->g_333 p_1872->g_95 p_1872->g_265 p_1872->g_1793
 * writes: p_1872->g_927 p_1872->g_292 p_1872->g_844 p_1872->g_111 p_1872->g_1443 p_1872->g_1416 p_1872->g_35 p_1872->g_116 p_1872->g_848 p_1872->g_1074 p_1872->g_93
 */
uint8_t  func_11(int16_t * p_12, uint8_t  p_13, int16_t * p_14, int16_t * p_15, uint32_t  p_16, struct S0 * p_1872)
{ /* block id: 798 */
    uint64_t l_1814 = 18446744073709551615UL;
    int32_t l_1832 = 1L;
    int32_t l_1833[9][1] = {{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL},{0x7570C4EBL}};
    int16_t **l_1847 = &p_1872->g_1064;
    VECTOR(int64_t, 8) l_1850 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
    uint32_t l_1855 = 0x06DEEFBDL;
    uint32_t l_1858 = 0x20596E88L;
    int8_t *l_1868 = &p_1872->g_95;
    int i, j;
    for (p_1872->g_927 = 9; (p_1872->g_927 <= (-7)); p_1872->g_927 = safe_sub_func_uint16_t_u_u(p_1872->g_927, 7))
    { /* block id: 801 */
        uint64_t l_1811[6][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
        int32_t l_1818 = 0x028DAF4AL;
        int32_t l_1834 = (-1L);
        int32_t l_1835 = (-1L);
        int32_t l_1836[6] = {1L,1L,1L,1L,1L,1L};
        uint8_t l_1837 = 250UL;
        int i, j;
        l_1811[0][0]--;
        l_1814 = (-6L);
        for (p_1872->g_292 = (-28); (p_1872->g_292 == 23); p_1872->g_292 = safe_add_func_uint32_t_u_u(p_1872->g_292, 9))
        { /* block id: 806 */
            int32_t *l_1821 = (void*)0;
            int32_t *l_1822 = (void*)0;
            int32_t *l_1824 = &p_1872->g_844;
            int32_t *l_1825 = &p_1872->g_89;
            int32_t l_1826[4][2][4] = {{{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L},{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L}},{{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L},{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L}},{{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L},{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L}},{{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L},{0x6C5AA253L,0x6C5AA253L,(-9L),0x02B19304L}}};
            int32_t *l_1827 = &l_1818;
            int32_t *l_1828 = &l_1826[1][0][3];
            int32_t *l_1829 = &p_1872->g_844;
            int32_t *l_1830[1][5][10] = {{{(void*)0,(void*)0,&l_1826[1][0][3],&p_1872->g_844,&l_1826[1][0][3],&l_1818,&l_1818,&p_1872->g_89,&l_1818,&l_1818},{(void*)0,(void*)0,&l_1826[1][0][3],&p_1872->g_844,&l_1826[1][0][3],&l_1818,&l_1818,&p_1872->g_89,&l_1818,&l_1818},{(void*)0,(void*)0,&l_1826[1][0][3],&p_1872->g_844,&l_1826[1][0][3],&l_1818,&l_1818,&p_1872->g_89,&l_1818,&l_1818},{(void*)0,(void*)0,&l_1826[1][0][3],&p_1872->g_844,&l_1826[1][0][3],&l_1818,&l_1818,&p_1872->g_89,&l_1818,&l_1818},{(void*)0,(void*)0,&l_1826[1][0][3],&p_1872->g_844,&l_1826[1][0][3],&l_1818,&l_1818,&p_1872->g_89,&l_1818,&l_1818}}};
            int8_t l_1831 = 1L;
            int i, j, k;
            l_1818 |= p_16;
            if ((*p_1872->g_1723))
                continue;
            (*p_1872->g_1823) ^= (safe_mul_func_int8_t_s_s(((void*)0 != l_1821), p_13));
            l_1837++;
        }
        if (l_1837)
            break;
    }
    for (p_1872->g_111 = 0; (p_1872->g_111 > 40); ++p_1872->g_111)
    { /* block id: 816 */
        uint32_t *l_1844 = &p_1872->g_1443;
        int16_t ***l_1848 = &l_1847;
        VECTOR(uint64_t, 4) l_1849 = (VECTOR(uint64_t, 4))(0xF9493F2EAD4B9DE1L, (VECTOR(uint64_t, 2))(0xF9493F2EAD4B9DE1L, 0x89D2F8FD5D8C8BE8L), 0x89D2F8FD5D8C8BE8L);
        uint32_t *l_1859 = (void*)0;
        uint32_t *l_1860[9][4] = {{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427},{&p_1872->g_427,&p_1872->g_427,&l_1858,&p_1872->g_427}};
        int32_t l_1861 = 0x52FAC2CCL;
        uint64_t *l_1862 = &p_1872->g_1416;
        uint64_t *l_1863 = (void*)0;
        uint64_t *l_1864 = (void*)0;
        uint64_t *l_1865 = &p_1872->g_35;
        uint32_t **l_1866 = (void*)0;
        uint32_t *l_1867 = &p_1872->g_292;
        int32_t *l_1869[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        l_1832 &= (GROUP_DIVERGE(2, 1) | (((safe_lshift_func_int16_t_s_s((((((*l_1844)++) < (((&p_14 != ((*l_1848) = l_1847)) != (0x513CL < ((l_1867 = func_50(&p_1872->g_848, (((VECTOR(uint64_t, 4))(l_1849.xzwz)).z == (!((((VECTOR(int64_t, 2))(l_1850.s06)).hi > ((*l_1865) = ((safe_rshift_func_uint8_t_u_s(p_1872->g_987.s6, 3)) || (((safe_sub_func_uint32_t_u_u(l_1855, (safe_mul_func_int8_t_s_s(((-1L) == l_1858), (((*l_1862) = (((l_1861 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(4294967295UL, ((VECTOR(uint32_t, 2))(1UL, 4294967291UL)), 4294967295UL)).zxyyyyzxyywxzzyz, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(0xBC3DA878L, 4294967294UL)), ((VECTOR(uint32_t, 8))((l_1849.x > 0x05D2A4662EF9F7F2L), l_1833[7][0], 0x7DA44CE6L, ((VECTOR(uint32_t, 4))(0x11BAFBD3L)), 0x8BE23AFDL)).s72, ((VECTOR(uint32_t, 2))(0x4422F709L))))).yyyyxxxyyxyxyyyy))).sfeb0)).x) , p_1872->g_1534.s1) || p_1872->g_987.s7)) | p_13))))) > p_1872->g_1604[4]) >= 4294967294UL)))) & p_1872->g_1566.s7))), p_1872)) == &p_1872->g_267))) != p_1872->g_95)) , l_1858) | 4L), 4)) , &p_1872->g_927) != l_1868));
        (*p_1872->g_265) = &l_1832;
    }
    return p_1872->g_1793.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_427 p_1872->g_1431 p_1872->g_1416 p_1872->g_1793 p_1872->g_1799 p_1872->g_1805 p_1872->g_113 p_1872->g_1063 p_1872->g_1064
 * writes: p_1872->g_427 p_1872->g_385
 */
int16_t * func_19(int16_t * p_20, struct S0 * p_1872)
{ /* block id: 788 */
    int8_t l_1763 = 1L;
    int32_t l_1764 = 0x12AB72F0L;
    int32_t l_1765[1];
    int32_t *l_1766 = (void*)0;
    int32_t *l_1767 = &l_1764;
    int32_t *l_1768 = (void*)0;
    int32_t *l_1769 = &p_1872->g_89;
    int32_t *l_1770 = &l_1765[0];
    int32_t *l_1771 = &l_1764;
    int32_t *l_1772 = (void*)0;
    int32_t *l_1773 = &l_1764;
    int32_t *l_1774 = &p_1872->g_89;
    int32_t *l_1775[1][3][2] = {{{&l_1764,&l_1764},{&l_1764,&l_1764},{&l_1764,&l_1764}}};
    int32_t l_1776[9] = {0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L,0x2B5C3165L};
    uint32_t l_1777 = 1UL;
    VECTOR(uint16_t, 2) l_1794 = (VECTOR(uint16_t, 2))(1UL, 0xEA09L);
    VECTOR(uint16_t, 4) l_1796 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65535UL), 65535UL);
    int16_t l_1802 = 0L;
    uint16_t *l_1804 = (void*)0;
    uint16_t **l_1803 = &l_1804;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1765[i] = 0x326F9E2AL;
    ++l_1777;
    for (p_1872->g_427 = 0; (p_1872->g_427 != 41); ++p_1872->g_427)
    { /* block id: 792 */
        VECTOR(uint64_t, 8) l_1782 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0UL, 18446744073709551610UL);
        VECTOR(uint16_t, 4) l_1795 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8015L), 0x8015L);
        uint8_t *l_1806 = (void*)0;
        uint8_t *l_1807 = &p_1872->g_385;
        int32_t l_1808 = 0x0488194AL;
        int i;
        l_1808 = (((VECTOR(uint64_t, 4))(0xAF577F6AC3B5ACFBL, (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_1782.s71451054)).s5473551072001600)).s9 , p_1872->g_1431.s2), 6UL, 18446744073709551615UL)).y , (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((~(((*l_1807) = (safe_mod_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(l_1782.s5, ((((safe_div_func_int16_t_s_s(1L, p_1872->g_1416)) == ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_1872->g_1793.zywyyzzz)).s37)).xyxxyxyx, ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(l_1794.xx)).xyxyxxyyyxxyyxxx, ((VECTOR(uint16_t, 2))(0xA4CDL, 4UL)).yyxxxxxyxxxxxyyy, ((VECTOR(uint16_t, 16))(l_1795.yyyxzxwxywwyzyyx))))).hi))).s72, ((VECTOR(uint16_t, 16))(l_1796.yywzyxwyxyzxzwyw)).s14))).xxxxxyxyxyxyxxxy)).sf) , (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-3L), 0L)).xyxyyxyx)).s6 , (((0x01L || ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(p_1872->g_1799.s33cc869a)).s3, (safe_lshift_func_uint16_t_u_s(l_1802, 1)))) , ((void*)0 != l_1803))) || ((VECTOR(int16_t, 16))(p_1872->g_1805.sd0e754d6aa6f8f69)).s5) ^ 65535UL))) && l_1782.s1))) && p_1872->g_113), 0x17L))) >= l_1782.s3)), 8)), 1UL)));
    }
    l_1775[0][2][0] = &l_1765[0];
    return (*p_1872->g_1063);
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->l_comm_values p_1872->g_35 p_1872->g_18 p_1872->g_comm_values p_1872->g_89 p_1872->g_125 p_1872->g_111 p_1872->g_132 p_1872->g_108 p_1872->g_326 p_1872->g_333 p_1872->g_116 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_385 p_1872->g_93 p_1872->g_70 p_1872->g_292 p_1872->g_427 p_1872->g_124 p_1872->g_267 p_1872->g_848 p_1872->g_95 p_1872->g_863 p_1872->g_928 p_1872->g_845 p_1872->g_1034 p_1872->g_846 p_1872->g_190 p_1872->g_1053 p_1872->g_1056 p_1872->g_1063 p_1872->g_1074 p_1872->g_1078 p_1872->g_844 p_1872->g_924 p_1872->g_1064 p_1872->g_1058 p_1872->g_1165 p_1872->g_1167 p_1872->g_1175 p_1872->g_927 p_1872->g_1021 p_1872->g_1022 p_1872->g_1216 p_1872->g_1217 p_1872->g_1218 p_1872->g_926 p_1872->g_1253 p_1872->g_1261 p_1872->g_1269 p_1872->g_1023 p_1872->g_1024 p_1872->g_1356 p_1872->g_1375 p_1872->g_987 p_1872->g_1395 p_1872->g_1416 p_1872->g_1426 p_1872->g_1430 p_1872->g_1431 p_1872->g_1433 p_1872->g_1443 p_1872->g_1494 p_1872->g_1533 p_1872->g_1534 p_1872->g_1539 p_1872->g_1541 p_1872->g_1566 p_1872->g_1586 p_1872->g_1604 p_1872->g_1723 p_1872->g_1728 p_1872->g_1729 p_1872->g_1732 p_1872->g_1733
 * writes: p_1872->g_35 p_1872->g_70 p_1872->g_18 p_1872->g_90 p_1872->g_93 p_1872->g_95 p_1872->g_108 p_1872->g_111 p_1872->g_113 p_1872->g_116 p_1872->g_125 p_1872->g_133 p_1872->g_317 p_1872->g_89 p_1872->g_190 p_1872->g_424 p_1872->g_427 p_1872->g_848 p_1872->g_863 p_1872->g_928 p_1872->g_295 p_1872->g_847 p_1872->g_134 p_1872->g_1058 p_1872->g_1074 p_1872->g_1078 p_1872->g_326 p_1872->g_844 p_1872->g_385 p_1872->g_1175 p_1872->g_304 p_1872->g_292 p_1872->g_981 p_1872->g_1356 p_1872->g_1416 p_1872->g_1443
 */
int16_t * func_21(int16_t * p_22, struct S0 * p_1872)
{ /* block id: 6 */
    uint32_t l_30 = 4294967290UL;
    uint64_t *l_34 = &p_1872->g_35;
    uint64_t *l_1057 = &p_1872->g_1058;
    int32_t *l_1077 = &p_1872->g_844;
    int16_t **l_1740 = &p_1872->g_1064;
    int16_t ***l_1739 = &l_1740;
    int16_t ****l_1738 = &l_1739;
    VECTOR(int16_t, 4) l_1741 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-1L)), (-1L));
    uint64_t **l_1746 = &l_1057;
    int32_t l_1747 = 0x2F67A6C7L;
    int32_t l_1748 = 5L;
    int32_t *l_1754 = &l_1748;
    int32_t *l_1755 = &p_1872->g_89;
    int32_t *l_1756[6][2] = {{&l_1748,&l_1748},{&l_1748,&l_1748},{&l_1748,&l_1748},{&l_1748,&l_1748},{&l_1748,&l_1748},{&l_1748,&l_1748}};
    int64_t l_1757 = 0x1BD31FF7597347B2L;
    int64_t l_1758 = 1L;
    int32_t l_1759 = 1L;
    uint64_t l_1760[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
    int i, j;
    (*p_1872->g_265) = func_24(l_30, (l_1077 = func_31((((*l_34) |= p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))]) > (safe_lshift_func_uint8_t_u_u((((p_1872->g_18 , (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((l_30 , (((1UL == func_44(l_34, func_50(func_53(l_30, p_1872), (safe_mod_func_int64_t_s_s(((((VECTOR(uint32_t, 16))(p_1872->g_1053.s7310735346672225)).s7 , (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))((((*l_1057) = ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_1872->g_1056.s22)))).xyyyxyxyxyyyyyxx)).odd, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(1UL, 0xF2C618A45B1F9716L)), 18446744073709551615UL)).yzzxxxyzxwxzyyyx)).sb5ed)).wyyzwzwz))).lo)).wxyyyxxx, ((VECTOR(uint64_t, 2))(0UL, 18446744073709551613UL)).xyxxyyyx))).s1) , 2L), ((VECTOR(int16_t, 2))(0x437FL)), (-3L))).z, l_30))) || p_1872->g_304), l_30)), p_1872), l_1057, l_30, l_1077, p_1872)) && (*p_22)) > l_30)), p_1872->g_1034.sc)), 1)) && (*l_1077)), l_30))) || (*l_1077)) < p_1872->g_987.s0), FAKE_DIVERGE(p_1872->group_2_offset, get_group_id(2), 10)))), p_1872->g_1604[4], p_1872)), l_30, l_30, l_30, p_1872);
    l_1748 ^= (((*l_1738) = (void*)0) != (((((((*p_22) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1741.zy)).yyxyxyxy)).s5) == (safe_div_func_int8_t_s_s((-4L), p_1872->g_1433.s7))) & 0xFD51L) , (safe_rshift_func_int8_t_s_s(1L, 2))) != (l_1747 &= (0x2EL && (l_1741.w , (l_34 == ((*l_1746) = (void*)0)))))) , &p_1872->g_1063));
    for (p_1872->g_116 = 15; (p_1872->g_116 <= (-1)); p_1872->g_116 = safe_sub_func_int8_t_s_s(p_1872->g_116, 6))
    { /* block id: 779 */
        VECTOR(uint32_t, 4) l_1753 = (VECTOR(uint32_t, 4))(0x80B5AD64L, (VECTOR(uint32_t, 2))(0x80B5AD64L, 0x844A5BE0L), 0x844A5BE0L);
        int i;
        for (l_1748 = (-7); (l_1748 < 21); l_1748++)
        { /* block id: 782 */
            if (l_1753.w)
                break;
        }
    }
    ++l_1760[1];
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_1728 p_1872->g_1729 p_1872->g_1253 p_1872->g_125 p_1872->g_132 p_1872->g_108 p_1872->g_111 p_1872->g_116 p_1872->g_comm_values p_1872->g_18 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_89 p_1872->g_385 p_1872->g_292 p_1872->g_93 p_1872->g_427 p_1872->g_124 p_1872->l_comm_values p_1872->g_267 p_1872->g_848 p_1872->g_1732 p_1872->g_1733 p_1872->g_1723
 * writes: p_1872->g_90 p_1872->g_125 p_1872->g_111 p_1872->g_133 p_1872->g_317 p_1872->g_190 p_1872->g_116 p_1872->g_18 p_1872->g_93 p_1872->g_427 p_1872->g_95 p_1872->g_113 p_1872->g_848 p_1872->g_89 p_1872->g_844
 */
int32_t * func_24(int8_t  p_25, int32_t * p_26, int64_t  p_27, int32_t  p_28, uint32_t  p_29, struct S0 * p_1872)
{ /* block id: 765 */
    uint16_t l_1727 = 0x89AAL;
    VECTOR(uint16_t, 2) l_1730 = (VECTOR(uint16_t, 2))(1UL, 0x01C1L);
    VECTOR(int32_t, 16) l_1731 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int32_t, 2))((-10L), 1L), (VECTOR(int32_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L);
    int32_t *l_1734[3];
    uint64_t l_1735 = 0x5B57BD3F66FFE497L;
    uint32_t **l_1736 = &p_1872->g_134;
    uint32_t l_1737 = 4294967292UL;
    int i;
    for (i = 0; i < 3; i++)
        l_1734[i] = (void*)0;
    (*p_1872->g_265) = func_31(((((l_1727 ^ l_1727) <= ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(p_1872->g_1728.s98)).yyyxyyyxyxyyxyxx, ((VECTOR(uint16_t, 16))(p_1872->g_1729.s70f5d9662a5332cf))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1730.yxxy)).wywxwwxz)).s25)).yxxyxyxyyyxxxyxx))).sd) , p_25) == 1L), p_29, p_1872);
    l_1735 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_1731.s126b21ce)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1872->g_1732.xyyyyxxy)).s7406302712377462)).even))), ((VECTOR(int32_t, 8))(p_1872->g_1733.yxywxzzz))))))).s6;
    (*p_1872->g_1723) = 0x4C362A02L;
    l_1737 = ((void*)0 != l_1736);
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_1253 p_1872->g_125 p_1872->g_132 p_1872->g_108 p_1872->g_111 p_1872->g_116 p_1872->g_comm_values p_1872->g_18 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_89 p_1872->g_385 p_1872->g_292 p_1872->g_93 p_1872->g_427 p_1872->g_124 p_1872->l_comm_values p_1872->g_267 p_1872->g_848
 * writes: p_1872->g_90 p_1872->g_125 p_1872->g_111 p_1872->g_133 p_1872->g_317 p_1872->g_190 p_1872->g_116 p_1872->g_18 p_1872->g_93 p_1872->g_427 p_1872->g_95 p_1872->g_113 p_1872->g_848 p_1872->g_89
 */
int32_t * func_31(int16_t  p_32, uint64_t  p_33, struct S0 * p_1872)
{ /* block id: 760 */
    uint64_t *l_1724 = (void*)0;
    int32_t l_1725 = 0x04247EC8L;
    int32_t *l_1726 = (void*)0;
    (*p_1872->g_1253) = &l_1725;
    (*p_1872->g_265) = func_55(&p_1872->g_35, l_1725, &p_1872->g_35, &p_1872->g_848, l_1725, p_1872);
    return l_1726;
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_1078 p_1872->g_89 p_1872->g_427 p_1872->g_844 p_1872->g_326 p_1872->g_924 p_1872->g_1064 p_1872->g_845 p_1872->g_111 p_1872->g_1063 p_1872->g_116 p_1872->g_1058 p_1872->g_comm_values p_1872->g_113 p_1872->g_265 p_1872->g_187 p_1872->g_190 p_1872->g_292 p_1872->g_1165 p_1872->g_1167 p_1872->g_93 p_1872->g_1175 p_1872->g_927 p_1872->g_1021 p_1872->g_1022 p_1872->g_95 p_1872->g_1216 p_1872->g_1217 p_1872->g_1218 p_1872->g_926 p_1872->g_848 p_1872->g_1253 p_1872->g_1261 p_1872->g_1269 p_1872->g_1074 p_1872->g_1056 p_1872->g_1023 p_1872->g_1024 p_1872->g_267 p_1872->g_1356 p_1872->g_304 p_1872->g_333 p_1872->g_1375 p_1872->g_987 p_1872->g_1395 p_1872->g_1416 p_1872->g_1426 p_1872->g_1430 p_1872->g_1431 p_1872->g_1433 p_1872->g_385 p_1872->g_1443 p_1872->g_1494 p_1872->g_1034 p_1872->g_1533 p_1872->g_1534 p_1872->g_1539 p_1872->g_1541 p_1872->g_70 p_1872->g_846 p_1872->g_1566 p_1872->g_1586 p_1872->g_928 p_1872->g_108 p_1872->g_1604 p_1872->g_1723
 * writes: p_1872->g_1078 p_1872->g_70 p_1872->g_326 p_1872->g_116 p_1872->g_427 p_1872->g_844 p_1872->g_113 p_1872->g_385 p_1872->g_93 p_1872->g_90 p_1872->g_89 p_1872->g_190 p_1872->g_1175 p_1872->g_304 p_1872->g_1058 p_1872->g_292 p_1872->g_848 p_1872->g_424 p_1872->g_295 p_1872->g_981 p_1872->g_95 p_1872->g_1356 p_1872->g_1416 p_1872->g_1074 p_1872->g_1443 p_1872->g_108
 */
int16_t  func_44(uint64_t * p_45, int32_t * p_46, uint64_t * p_47, int32_t  p_48, int32_t * p_49, struct S0 * p_1872)
{ /* block id: 496 */
    uint32_t *****l_1080 = &p_1872->g_1078[0];
    uint32_t ****l_1081[2][3][6] = {{{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]},{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]},{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]}},{{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]},{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]},{&p_1872->g_1079[5][3][1],&p_1872->g_1079[1][8][3],&p_1872->g_1079[1][8][3],&p_1872->g_1079[5][3][1],&p_1872->g_1079[2][0][3],&p_1872->g_1079[3][4][3]}}};
    uint32_t *****l_1082 = &l_1081[0][0][4];
    uint64_t *l_1086 = (void*)0;
    uint64_t **l_1085 = &l_1086;
    uint16_t *l_1091 = &p_1872->g_70;
    int32_t l_1092[1][3];
    int32_t l_1093 = 0x75419673L;
    uint64_t *l_1095 = &p_1872->g_848;
    uint64_t **l_1094 = &l_1095;
    uint16_t l_1100 = 0xF49FL;
    int64_t **l_1113 = &p_1872->g_317;
    int64_t **l_1114 = &p_1872->g_317;
    uint32_t *l_1117 = &p_1872->g_427;
    VECTOR(uint32_t, 2) l_1166 = (VECTOR(uint32_t, 2))(0UL, 0x25C6AFF4L);
    int32_t ***l_1179 = &p_1872->g_265;
    VECTOR(uint32_t, 8) l_1211 = (VECTOR(uint32_t, 8))(0x9C80B0AAL, (VECTOR(uint32_t, 4))(0x9C80B0AAL, (VECTOR(uint32_t, 2))(0x9C80B0AAL, 0x0C34FC68L), 0x0C34FC68L), 0x0C34FC68L, 0x9C80B0AAL, 0x0C34FC68L);
    uint32_t ***l_1380[10] = {&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175,&p_1872->g_1175};
    VECTOR(int32_t, 8) l_1385 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x20F178BAL), 0x20F178BAL), 0x20F178BAL, (-1L), 0x20F178BAL);
    VECTOR(int32_t, 4) l_1387 = (VECTOR(int32_t, 4))(0x0D9BCE7BL, (VECTOR(int32_t, 2))(0x0D9BCE7BL, 0x0ED7D57EL), 0x0ED7D57EL);
    VECTOR(int8_t, 8) l_1397 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    int16_t l_1450 = 0L;
    VECTOR(uint32_t, 2) l_1542 = (VECTOR(uint32_t, 2))(2UL, 0x915554A3L);
    uint32_t l_1595 = 0xFAF42761L;
    uint32_t l_1616 = 1UL;
    VECTOR(uint32_t, 16) l_1661 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4899BEE9L), 0x4899BEE9L), 0x4899BEE9L, 4294967295UL, 0x4899BEE9L, (VECTOR(uint32_t, 2))(4294967295UL, 0x4899BEE9L), (VECTOR(uint32_t, 2))(4294967295UL, 0x4899BEE9L), 4294967295UL, 0x4899BEE9L, 4294967295UL, 0x4899BEE9L);
    int16_t **l_1711[10] = {&p_1872->g_1064,&p_1872->g_1064,(void*)0,&p_1872->g_1064,&p_1872->g_1064,&p_1872->g_1064,&p_1872->g_1064,(void*)0,&p_1872->g_1064,&p_1872->g_1064};
    int16_t ***l_1710 = &l_1711[8];
    uint8_t *l_1712 = (void*)0;
    int64_t l_1713 = 0L;
    VECTOR(int64_t, 4) l_1714 = (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-6L)), (-6L));
    int8_t *l_1719 = &p_1872->g_95;
    int64_t *l_1720 = (void*)0;
    uint32_t *l_1722 = (void*)0;
    uint32_t **l_1721[9][2][6] = {{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}},{{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722},{&l_1722,(void*)0,(void*)0,&l_1722,(void*)0,&l_1722}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1092[i][j] = 9L;
    }
    if (((((*l_1080) = p_1872->g_1078[0]) != ((*l_1082) = l_1081[0][1][4])) != ((((*l_1085) = p_45) != ((*l_1094) = ((0x23L != ((safe_lshift_func_int8_t_s_u((l_1092[0][2] = ((safe_mul_func_uint16_t_u_u(((*l_1091) = p_1872->g_89), FAKE_DIVERGE(p_1872->local_2_offset, get_local_id(2), 10))) , p_1872->g_427)), 6)) <= l_1093)) , p_45))) , (((safe_add_func_int32_t_s_s(((((((safe_add_func_int16_t_s_s(((l_1092[0][1] , l_1092[0][2]) || l_1092[0][1]), 1L)) == p_48) <= 0x51EA437BL) != p_48) < 0x41F8DE6CL) ^ l_1092[0][2]), l_1100)) , (*p_49)) <= 0UL))))
    { /* block id: 504 */
        int64_t l_1105 = 0x5BEB1D3A78AB2FF0L;
        int32_t l_1106 = 0x5B64F582L;
        uint8_t *l_1107[2][2][9] = {{{&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,(void*)0,(void*)0,(void*)0,(void*)0,&p_1872->g_113},{&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,(void*)0,(void*)0,(void*)0,(void*)0,&p_1872->g_113}},{{&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,(void*)0,(void*)0,(void*)0,(void*)0,&p_1872->g_113},{&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,&p_1872->g_113,(void*)0,(void*)0,(void*)0,(void*)0,&p_1872->g_113}}};
        int8_t l_1108 = 0L;
        int16_t l_1116 = 1L;
        uint32_t **l_1118 = &l_1117;
        uint32_t *l_1119 = (void*)0;
        uint32_t *l_1120 = (void*)0;
        uint32_t *l_1121 = &p_1872->g_427;
        uint32_t ****l_1146 = &p_1872->g_1079[1][8][3];
        int32_t l_1147 = 0x223531BEL;
        int32_t **l_1157[6][1];
        int64_t **l_1183[3];
        int32_t l_1325 = 0x0D007720L;
        int32_t l_1328 = (-2L);
        int32_t l_1330 = 0x0F84407EL;
        int32_t l_1332 = 0x4340B29FL;
        int32_t l_1337 = 0x60452456L;
        int32_t l_1340 = 1L;
        int32_t l_1341[7][4] = {{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)},{(-6L),0x4A3858C3L,(-6L),(-6L)}};
        uint8_t l_1371 = 255UL;
        VECTOR(uint16_t, 2) l_1394 = (VECTOR(uint16_t, 2))(1UL, 7UL);
        uint32_t **l_1429 = &p_1872->g_134;
        VECTOR(uint8_t, 16) l_1436 = (VECTOR(uint8_t, 16))(0x86L, (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 0x02L), 0x02L), 0x02L, 0x86L, 0x02L, (VECTOR(uint8_t, 2))(0x86L, 0x02L), (VECTOR(uint8_t, 2))(0x86L, 0x02L), 0x86L, 0x02L, 0x86L, 0x02L);
        uint32_t *l_1442 = (void*)0;
        uint32_t l_1444 = 0x9BD233E3L;
        int8_t l_1454 = (-7L);
        int32_t l_1459 = 0x403F44BEL;
        uint32_t l_1503[9];
        VECTOR(uint8_t, 8) l_1580 = (VECTOR(uint8_t, 8))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 0x43L), 0x43L), 0x43L, 0x44L, 0x43L);
        VECTOR(uint8_t, 16) l_1588 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 251UL), 251UL), 251UL, 5UL, 251UL, (VECTOR(uint8_t, 2))(5UL, 251UL), (VECTOR(uint8_t, 2))(5UL, 251UL), 5UL, 251UL, 5UL, 251UL);
        VECTOR(int32_t, 2) l_1591 = (VECTOR(int32_t, 2))(0L, (-9L));
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1157[i][j] = &p_1872->g_1024;
        }
        for (i = 0; i < 3; i++)
            l_1183[i] = &p_1872->g_1022;
        for (i = 0; i < 9; i++)
            l_1503[i] = 4294967295UL;
        (*p_49) &= (safe_mod_func_uint32_t_u_u(((*l_1121) = (safe_div_func_uint8_t_u_u(((0xE6C3L || l_1105) && (+(((++p_1872->g_326.y) && p_1872->g_924) , (65530UL < (5UL > ((*p_1872->g_1064) = (&p_1872->g_427 != ((*l_1118) = l_1117)))))))), FAKE_DIVERGE(p_1872->global_0_offset, get_global_id(0), 10)))), p_1872->g_845.sc));
        l_1147 &= ((safe_mod_func_int8_t_s_s((l_1116 > (safe_mod_func_int16_t_s_s((((((((safe_lshift_func_uint16_t_u_s((p_48 ^ ((-1L) || ((l_1106 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_1093, (((safe_add_func_uint64_t_u_u(p_1872->g_89, p_1872->g_111)) > (((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(((((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((0xE529L > ((*l_1091) = ((((**p_1872->g_1063) || (&p_1872->g_928 == p_45)) || p_48) <= p_48))), 6)) , FAKE_DIVERGE(p_1872->group_1_offset, get_group_id(1), 10)) == 0x0FL), p_48)) , 0xF8D270ABL) , l_1092[0][2]) | 18446744073709551615UL), ((VECTOR(int64_t, 2))(1L)), (-1L))).xzwxwzww, ((VECTOR(int64_t, 8))(0x614E976807726222L))))), p_48, 0x2CB39A0CC386B3F4L, 3L, 0x0737B6CC7DD33471L, ((VECTOR(int64_t, 4))(0x305A3378E9AC6CB7L)))), ((VECTOR(int64_t, 16))((-9L)))))).se <= (*p_47))) ^ 0xB2FB70B0L))), GROUP_DIVERGE(2, 1))), l_1093)) , (**p_1872->g_1063)), (*p_1872->g_1064))), l_1105))) , l_1108))), (*p_1872->g_1064))) & 0x09F7L) != l_1108) < p_48) , p_1872->g_comm_values[p_1872->tid]) , (void*)0) == l_1146), p_48))), p_48)) && (**p_1872->g_1063));
        for (p_1872->g_113 = 0; (p_1872->g_113 != 36); p_1872->g_113 = safe_add_func_uint8_t_u_u(p_1872->g_113, 4))
        { /* block id: 518 */
            int64_t **l_1154 = &p_1872->g_317;
            int32_t l_1158 = 7L;
            int32_t l_1159 = 0x3CECFBDDL;
            VECTOR(int32_t, 16) l_1199 = (VECTOR(int32_t, 16))(0x743D1BF8L, (VECTOR(int32_t, 4))(0x743D1BF8L, (VECTOR(int32_t, 2))(0x743D1BF8L, 0x0C398F2BL), 0x0C398F2BL), 0x0C398F2BL, 0x743D1BF8L, 0x0C398F2BL, (VECTOR(int32_t, 2))(0x743D1BF8L, 0x0C398F2BL), (VECTOR(int32_t, 2))(0x743D1BF8L, 0x0C398F2BL), 0x743D1BF8L, 0x0C398F2BL, 0x743D1BF8L, 0x0C398F2BL);
            uint32_t **l_1219[5][7][5] = {{{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134}},{{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134}},{{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134}},{{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134}},{{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134},{&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134}}};
            uint32_t **l_1252 = &p_1872->g_134;
            int i, j, k;
            for (l_1116 = (-9); (l_1116 <= 24); l_1116 = safe_add_func_int8_t_s_s(l_1116, 2))
            { /* block id: 521 */
                uint32_t l_1164[8][5][6] = {{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}},{{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL}}};
                VECTOR(uint16_t, 16) l_1168 = (VECTOR(uint16_t, 16))(0xF7D5L, (VECTOR(uint16_t, 4))(0xF7D5L, (VECTOR(uint16_t, 2))(0xF7D5L, 1UL), 1UL), 1UL, 0xF7D5L, 1UL, (VECTOR(uint16_t, 2))(0xF7D5L, 1UL), (VECTOR(uint16_t, 2))(0xF7D5L, 1UL), 0xF7D5L, 1UL, 0xF7D5L, 1UL);
                int64_t **l_1182 = &p_1872->g_1022;
                int32_t l_1184 = 0x00C0BF00L;
                int16_t l_1203 = (-1L);
                uint16_t l_1239 = 0xBC1FL;
                uint32_t **l_1251 = &p_1872->g_134;
                int i, j, k;
                for (p_1872->g_385 = 0; (p_1872->g_385 >= 25); p_1872->g_385 = safe_add_func_int64_t_s_s(p_1872->g_385, 1))
                { /* block id: 524 */
                    int64_t ***l_1155 = &l_1113;
                    (*l_1155) = (p_1872->g_427 , l_1154);
                    (*p_1872->g_187) = ((*p_1872->g_265) = (void*)0);
                    l_1157[5][0] = &p_1872->g_1024;
                }
                (*p_1872->g_265) = &p_1872->g_89;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_1159 |= l_1158), (p_48 | ((*l_1118) != &p_1872->g_427)), (p_1872->g_190.w < ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_1164[2][2][0], p_1872->g_326.x)), ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((p_1872->g_292 ^ ((VECTOR(uint16_t, 16))(p_1872->g_1165.s1323a4d0e16223ca)).s7), 0x6969C515L, 0x9BE1BE57L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1166.yxxyxyyxyxyxyyxy)).s3a)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1872->g_1167.s3035763051343320)).s5f)), 0x6CDF6027L, 0xA2FFB155L)), ((VECTOR(uint32_t, 4))(4294967286UL, 6UL, 0x78D4956FL, 0x83FD1ECFL)), 0UL, 0xEE9AAECEL, 7UL)).s05a4)).y , (((VECTOR(uint16_t, 16))(l_1168.sae7a185bc258e3c2)).s7 < p_48)) && (-9L)))) , l_1105)), 0x538436BEL, ((VECTOR(int32_t, 2))((-1L))), 0x0D4F295AL, (-1L))))).s3)
                { /* block id: 532 */
                    int64_t *l_1173 = (void*)0;
                    int64_t *l_1174[9][7][3] = {{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}},{{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0},{(void*)0,&l_1105,(void*)0}}};
                    uint32_t ***l_1177 = (void*)0;
                    uint32_t ***l_1178 = &p_1872->g_1175;
                    int32_t ***l_1181 = &p_1872->g_265;
                    int32_t ****l_1180 = &l_1181;
                    int i, j, k;
                    (*p_1872->g_93) = l_1168.s1;
                    (*p_49) ^= ((((((((***l_1179) &= (safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((p_1872->g_190.x = (&p_1872->g_385 != (void*)0)), (0x25L || ((l_1168.sb , (+(1UL != (((((*l_1178) = p_1872->g_1175) == (void*)0) , l_1179) != ((*l_1180) = (((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(1UL, 4UL)).yyyyyxyx, ((VECTOR(uint32_t, 2))(4294967290UL, 4294967294UL)).yxyxxxxy))).s1 , &p_1872->g_265)))))) & l_1116)))), p_1872->g_927))) , (*p_47)) | p_48) , l_1182) == l_1183[2]) , l_1108) || l_1158);
                    l_1184 ^= (*p_1872->g_93);
                    for (p_1872->g_427 = 0; (p_1872->g_427 == 23); p_1872->g_427 = safe_add_func_int32_t_s_s(p_1872->g_427, 2))
                    { /* block id: 542 */
                        int8_t l_1202 = 5L;
                        l_1203 = ((((~l_1147) == (-4L)) & l_1158) , (((safe_mod_func_uint32_t_u_u((((*l_1091) = p_48) ^ GROUP_DIVERGE(0, 1)), (((safe_add_func_uint64_t_u_u(((*p_47) = (safe_div_func_uint64_t_u_u(((1L | 1L) , p_1872->g_326.y), (safe_div_func_int8_t_s_s(((((((**p_1872->g_1021) = (FAKE_DIVERGE(p_1872->group_2_offset, get_group_id(2), 10) && (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*p_1872->g_1064) = (**p_1872->g_1063)), 4)), (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-9L), 0x5BF91084L)).xxxxyxxxyyxxxxyy, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1199.s3ccb)).wwzxxwzwxxzzxwzy)), ((VECTOR(int32_t, 8))(((safe_mul_func_uint8_t_u_u(p_48, 3L)) != (*p_49)), ((VECTOR(int32_t, 4))(0x58C441F7L)), 0x701CBD78L, 0x17641365L, 0x0FA068D7L)).s2672344105174407, ((VECTOR(int32_t, 16))((-10L))))))))).sd ^ 0x2A754DB8L))))) , l_1202) , l_1116) && l_1202) > p_48), 1UL))))), p_48)) > GROUP_DIVERGE(1, 1)) , (*p_49)))) <= p_48) & l_1106));
                        (*p_1872->g_265) = (void*)0;
                        if (l_1158)
                            continue;
                    }
                }
                else
                { /* block id: 551 */
                    for (p_1872->g_292 = (-17); (p_1872->g_292 <= 22); p_1872->g_292++)
                    { /* block id: 554 */
                        uint32_t **l_1220 = &p_1872->g_134;
                        (*p_49) &= (safe_sub_func_uint64_t_u_u(p_1872->g_95, ((l_1158 = ((p_48 && (((safe_mul_func_uint16_t_u_u(p_48, ((*p_1872->g_1064) = ((safe_unary_minus_func_int8_t_s((((VECTOR(uint32_t, 16))(0x6469FE8CL, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x2ADC840FL, 1UL)).xyyxyxyxxyxxxxyy)))))).s481b, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_1211.s2716)))))))))).yxyzzyzx, ((VECTOR(uint32_t, 16))((&p_1872->g_113 != l_1107[0][1][3]), ((VECTOR(uint32_t, 2))(4294967295UL, 4294967293UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(0x2D9275E8L, ((VECTOR(uint32_t, 2))(5UL, 1UL)).even, ((*l_1117)++), (((((safe_add_func_int8_t_s_s((((((***l_1179) <= 0L) & (((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(((((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(p_1872->g_1216.s1077)).zzxxwzwy, (int16_t)(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-4L), (-10L))), ((VECTOR(int8_t, 2))(0x78L, 0x51L)).even, ((VECTOR(int8_t, 2))((-1L), 0x53L)), p_48, 0x18L, (-9L))).s6100050433412444, ((VECTOR(int8_t, 2))(p_1872->g_1217.wz)).yyyxxyyxyxyxxyyx))).s5 == ((VECTOR(uint8_t, 4))(p_1872->g_1218.yyzz)).w)))).s1 ^ 1L) , l_1219[4][5][1]) != l_1220) || 0x35L), (*p_47), 18446744073709551615UL, 0x21127160B37C71B6L, 0xD31599AA685F0304L, 0x842C3F56D312DA82L, 0x0786831A8C056088L, 0x448A0D574A4DBB62L)).lo, ((VECTOR(uint64_t, 4))(0x3EB1BB17EC67879EL))))).x ^ 6L)) & FAKE_DIVERGE(p_1872->group_0_offset, get_group_id(0), 10)) && (*p_47)), 0x4AL)) ^ 0x3A6EL) == p_48) , p_1872->g_1218.z) , p_48), p_48, 0x08424985L, 0x2751D497L, 4294967295UL)), ((VECTOR(uint32_t, 8))(0x7B0307B9L))))).lo)), 0UL, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(4294967295UL)))).lo))), ((VECTOR(uint32_t, 4))(0x9976EC07L)), 4294967295UL, 0x81B6D775L, 0x839BB7BAL)).sc || 0x60225BA6L))) & 0x30A03FB1L)))) , 1UL) < 2UL)) >= p_1872->g_326.x)) , (*p_47))));
                    }
                    if ((atomic_inc(&p_1872->l_atomic_input[8]) == 4))
                    { /* block id: 561 */
                        int64_t l_1221 = 7L;
                        int32_t l_1222 = 6L;
                        uint64_t l_1223[9] = {0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L,0x638F71F8218D8674L};
                        int i;
                        --l_1223[2];
                        unsigned int result = 0;
                        result += l_1221;
                        result += l_1222;
                        int l_1223_i0;
                        for (l_1223_i0 = 0; l_1223_i0 < 9; l_1223_i0++) {
                            result += l_1223[l_1223_i0];
                        }
                        atomic_add(&p_1872->l_special_values[8], result);
                    }
                    else
                    { /* block id: 563 */
                        (1 + 1);
                    }
                    (***l_1179) = 1L;
                    if ((atomic_inc(&p_1872->g_atomic_input[11 * get_linear_group_id() + 4]) == 2))
                    { /* block id: 568 */
                        int16_t l_1226 = 0x7A48L;
                        int16_t l_1227 = 0x3B07L;
                        int8_t l_1228 = 0x56L;
                        int64_t l_1229[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1229[i] = 0x31B658F438105A53L;
                        l_1227 = l_1226;
                        l_1229[0] = l_1228;
                        unsigned int result = 0;
                        result += l_1226;
                        result += l_1227;
                        result += l_1228;
                        int l_1229_i0;
                        for (l_1229_i0 = 0; l_1229_i0 < 7; l_1229_i0++) {
                            result += l_1229[l_1229_i0];
                        }
                        atomic_add(&p_1872->g_special_values[11 * get_linear_group_id() + 4], result);
                    }
                    else
                    { /* block id: 571 */
                        (1 + 1);
                    }
                }
                for (l_1184 = 0; (l_1184 <= (-27)); l_1184--)
                { /* block id: 577 */
                    int32_t *l_1232 = (void*)0;
                    int32_t *l_1233 = &p_1872->g_89;
                    int32_t *l_1234 = (void*)0;
                    int32_t *l_1235 = &l_1158;
                    int32_t *l_1236 = &l_1092[0][2];
                    int32_t *l_1237 = &l_1159;
                    int32_t *l_1238[5][4][3] = {{{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147}},{{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147}},{{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147}},{{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147}},{{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147},{&p_1872->g_89,(void*)0,&l_1147}}};
                    uint64_t *l_1248[3][10][8] = {{{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0}},{{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0}},{{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0},{&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0,&p_1872->g_848,(void*)0}}};
                    int i, j, k;
                    l_1239--;
                    (*l_1236) &= (((*l_1091) = (&p_1872->g_1022 != ((((l_1159 & (safe_add_func_uint64_t_u_u((((--(*p_47)) , p_49) == ((safe_mod_func_uint64_t_u_u(((p_48 ^ l_1105) == p_1872->g_926), (p_1872->g_848--))) , p_46)), l_1105))) == l_1108) >= l_1105) , l_1183[2]))) && 0x0D4DL);
                    if ((*p_49))
                        break;
                }
            }
            return (*p_1872->g_1064);
        }
        if ((*p_49))
        { /* block id: 591 */
            VECTOR(uint64_t, 16) l_1268 = (VECTOR(uint64_t, 16))(0x9592701291F18CA7L, (VECTOR(uint64_t, 4))(0x9592701291F18CA7L, (VECTOR(uint64_t, 2))(0x9592701291F18CA7L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x9592701291F18CA7L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x9592701291F18CA7L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x9592701291F18CA7L, 18446744073709551615UL), 0x9592701291F18CA7L, 18446744073709551615UL, 0x9592701291F18CA7L, 18446744073709551615UL);
            VECTOR(uint64_t, 16) l_1270 = (VECTOR(uint64_t, 16))(0x5406CA07E60F71C8L, (VECTOR(uint64_t, 4))(0x5406CA07E60F71C8L, (VECTOR(uint64_t, 2))(0x5406CA07E60F71C8L, 6UL), 6UL), 6UL, 0x5406CA07E60F71C8L, 6UL, (VECTOR(uint64_t, 2))(0x5406CA07E60F71C8L, 6UL), (VECTOR(uint64_t, 2))(0x5406CA07E60F71C8L, 6UL), 0x5406CA07E60F71C8L, 6UL, 0x5406CA07E60F71C8L, 6UL);
            int32_t l_1273 = 0x571EEFC7L;
            int i;
            (*p_1872->g_1253) = ((*p_1872->g_265) = (void*)0);
            l_1273 = ((*p_49) = (((((safe_unary_minus_func_int16_t_s(((*p_1872->g_1064) ^= ((safe_add_func_int8_t_s_s(l_1108, p_1872->g_845.sf)) ^ FAKE_DIVERGE(p_1872->local_2_offset, get_local_id(2), 10))))) , 0x44AFC0C7L) , ((**p_1872->g_1023) = (((0x44ED2A89746917FBL & (+(((safe_div_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((&l_1179 != p_1872->g_1261) , (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (safe_lshift_func_int16_t_s_u(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0xEF7F062DE1DA0585L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1268.s4b9f)))).wwxwyxywyzywyywx)).lo)).s62, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(p_1872->g_1269.yw)).yyxx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1270.sf0d7)))).xxyzzyzx)))).even))))).odd))).yxyyxxyy)).even)).even)), (safe_sub_func_int16_t_s_s((((*l_1091) = p_48) <= l_1270.se), p_1872->g_1074.s1)), 0UL, ((VECTOR(uint64_t, 2))(0xA6D5C38E23044028L)), 0x1F5CCF83B73F7806L, 18446744073709551615UL)), 18446744073709551613UL, ((VECTOR(uint64_t, 2))(0x9D33DF6028F5CB00L)), 0x2D1294CA2D2ACFAEL, 2UL, 0xD45C63F3E2759B8AL, 0x3A73CF8825AB9D33L)).s61)).odd <= (-7L)) && 9L), 10))))) != 0x82F3D306A219ADC6L), 5L)), 1L)) || p_48) , p_1872->g_1056.s3))) ^ l_1268.s8) , 1L))) , (void*)0) != (*l_1080)));
        }
        else
        { /* block id: 599 */
            int16_t **l_1284 = &p_1872->g_1064;
            VECTOR(uint8_t, 4) l_1297 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD8L), 0xD8L);
            uint32_t ***l_1303[6][10];
            VECTOR(int32_t, 4) l_1306 = (VECTOR(int32_t, 4))(0x5C7E573DL, (VECTOR(int32_t, 2))(0x5C7E573DL, 0L), 0L);
            VECTOR(int32_t, 2) l_1363 = (VECTOR(int32_t, 2))(0x610BBEAEL, 0x26820BC2L);
            VECTOR(uint64_t, 4) l_1381 = (VECTOR(uint64_t, 4))(0x57FCC3F114113185L, (VECTOR(uint64_t, 2))(0x57FCC3F114113185L, 18446744073709551615UL), 18446744073709551615UL);
            uint16_t l_1384 = 0x40A2L;
            uint32_t ***l_1402 = &p_1872->g_133;
            VECTOR(int8_t, 4) l_1410 = (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x52L), 0x52L);
            VECTOR(uint8_t, 8) l_1432 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 6UL), 6UL), 6UL, 255UL, 6UL);
            int64_t l_1451 = 0x705B8737A982CEF5L;
            VECTOR(int16_t, 16) l_1458 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
            uint32_t l_1521[7][6][4] = {{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}},{{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L},{0x2E66B070L,0x8E1EDB05L,1UL,0xA4458D46L}}};
            VECTOR(int64_t, 2) l_1528 = (VECTOR(int64_t, 2))(2L, 1L);
            VECTOR(uint8_t, 16) l_1579 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 247UL), 247UL), 247UL, 255UL, 247UL, (VECTOR(uint8_t, 2))(255UL, 247UL), (VECTOR(uint8_t, 2))(255UL, 247UL), 255UL, 247UL, 255UL, 247UL);
            VECTOR(uint8_t, 16) l_1589 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), 254UL, 1UL, 254UL, (VECTOR(uint8_t, 2))(1UL, 254UL), (VECTOR(uint8_t, 2))(1UL, 254UL), 1UL, 254UL, 1UL, 254UL);
            VECTOR(uint16_t, 8) l_1605 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x232EL), 0x232EL), 0x232EL, 9UL, 0x232EL);
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1303[i][j] = &p_1872->g_133;
            }
            if (l_1106)
            { /* block id: 600 */
                uint64_t l_1300 = 18446744073709551610UL;
                int32_t l_1304 = (-1L);
                int64_t ***l_1305 = &l_1113;
                int32_t l_1314 = 9L;
                int32_t l_1316 = (-3L);
                int32_t l_1317 = 0x146D94CAL;
                int32_t l_1321 = 0x1240E940L;
                int32_t l_1331 = 0x1ED38F1EL;
                int32_t l_1334 = 0x5C1638A7L;
                int32_t l_1335 = 0x41E5AB2AL;
                int32_t l_1336 = 0x1DC0C5EAL;
                int32_t l_1338 = 5L;
                int32_t l_1342 = 0x6740E825L;
                int32_t l_1343 = 0x7BDD5BC9L;
                int32_t l_1344 = 0x5E33A302L;
                int32_t l_1345 = 4L;
                int32_t l_1346 = 0x47FF2C22L;
                int32_t l_1347 = (-7L);
                int32_t l_1348 = 0x4ADDCA91L;
                int32_t l_1349 = 0x30DE485AL;
                int32_t l_1350 = 0x2FE59060L;
                int32_t l_1351 = 0x760D3DE3L;
                int32_t l_1352 = 1L;
                int32_t l_1353 = 0x525C1D03L;
                int32_t l_1354 = 0x0F795E03L;
                int32_t l_1355 = 1L;
                VECTOR(uint64_t, 16) l_1361 = (VECTOR(uint64_t, 16))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x2D7745EAFCBEC364L), 0x2D7745EAFCBEC364L), 0x2D7745EAFCBEC364L, 7UL, 0x2D7745EAFCBEC364L, (VECTOR(uint64_t, 2))(7UL, 0x2D7745EAFCBEC364L), (VECTOR(uint64_t, 2))(7UL, 0x2D7745EAFCBEC364L), 7UL, 0x2D7745EAFCBEC364L, 7UL, 0x2D7745EAFCBEC364L);
                VECTOR(int32_t, 8) l_1386 = (VECTOR(int32_t, 8))(0x226FC30FL, (VECTOR(int32_t, 4))(0x226FC30FL, (VECTOR(int32_t, 2))(0x226FC30FL, 0x4E4B4913L), 0x4E4B4913L), 0x4E4B4913L, 0x226FC30FL, 0x4E4B4913L);
                VECTOR(int8_t, 8) l_1396 = (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x31L), 0x31L), 0x31L, 0x55L, 0x31L);
                VECTOR(int8_t, 16) l_1398 = (VECTOR(int8_t, 16))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 3L), 3L), 3L, 0x21L, 3L, (VECTOR(int8_t, 2))(0x21L, 3L), (VECTOR(int8_t, 2))(0x21L, 3L), 0x21L, 3L, 0x21L, 3L);
                uint64_t l_1403[1][8] = {{0x888F0EB14C1E595EL,0UL,0x888F0EB14C1E595EL,0x888F0EB14C1E595EL,0UL,0x888F0EB14C1E595EL,0x888F0EB14C1E595EL,0UL}};
                uint64_t *l_1425[4][5][1];
                VECTOR(uint8_t, 8) l_1434 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 255UL), 255UL), 255UL, 9UL, 255UL);
                VECTOR(uint8_t, 8) l_1435 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL);
                VECTOR(int64_t, 4) l_1479 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
                int32_t l_1519 = 0x61DEC3DFL;
                VECTOR(uint32_t, 8) l_1540 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 3UL), 3UL), 3UL, 2UL, 3UL);
                VECTOR(uint32_t, 8) l_1543 = (VECTOR(uint32_t, 8))(0x8CA1CC10L, (VECTOR(uint32_t, 4))(0x8CA1CC10L, (VECTOR(uint32_t, 2))(0x8CA1CC10L, 1UL), 1UL), 1UL, 0x8CA1CC10L, 1UL);
                uint32_t l_1549 = 0x15E82683L;
                VECTOR(int16_t, 4) l_1565 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0L), 0L);
                uint16_t l_1567 = 65535UL;
                uint32_t **l_1571 = &p_1872->g_134;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1425[i][j][k] = &l_1403[0][0];
                    }
                }
                (*p_49) |= l_1108;
                for (p_48 = (-22); (p_48 < (-23)); --p_48)
                { /* block id: 604 */
                    int8_t *l_1281 = &p_1872->g_295;
                    int16_t **l_1286 = &p_1872->g_1064;
                    int16_t ***l_1285 = &l_1286;
                    int32_t l_1301 = 0x47D9ABEFL;
                    uint32_t *l_1302 = &p_1872->g_292;
                    int32_t l_1315 = 0L;
                    int32_t l_1318 = 1L;
                    int32_t l_1319 = 0x586E6035L;
                    int32_t l_1320 = 0x2994A857L;
                    int32_t l_1322 = 0L;
                    int32_t l_1323 = 9L;
                    int32_t l_1324 = 1L;
                    int32_t l_1326 = 0x52B58A90L;
                    int32_t l_1327 = 6L;
                    int32_t l_1329 = (-6L);
                    VECTOR(int32_t, 8) l_1339 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                    VECTOR(uint64_t, 8) l_1362 = (VECTOR(uint64_t, 8))(0xBFCFCC488BD84192L, (VECTOR(uint64_t, 4))(0xBFCFCC488BD84192L, (VECTOR(uint64_t, 2))(0xBFCFCC488BD84192L, 0xAFC413A11B3B26FAL), 0xAFC413A11B3B26FAL), 0xAFC413A11B3B26FAL, 0xBFCFCC488BD84192L, 0xAFC413A11B3B26FAL);
                    int64_t l_1364[9][10] = {{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L},{0x2055B68E90123010L,1L,0x54E51176339E0032L,0x2055B68E90123010L,8L,0x54E51176339E0032L,0x54E51176339E0032L,8L,0x2055B68E90123010L,0x54E51176339E0032L}};
                    int32_t *l_1372 = &l_1314;
                    int i, j;
                    (*p_49) = (FAKE_DIVERGE(p_1872->global_2_offset, get_global_id(2), 10) || (safe_add_func_int8_t_s_s((((l_1304 ^= ((safe_unary_minus_func_int16_t_s(((((safe_lshift_func_uint16_t_u_s((((((*l_1302) = (((*l_1281) = (GROUP_DIVERGE(1, 1) > 0x13D0L)) , ((((p_48 , ((~(p_1872->g_981.y = GROUP_DIVERGE(1, 1))) & (safe_mod_func_uint16_t_u_u(((l_1284 == ((*l_1285) = &p_1872->g_1064)) , ((safe_rshift_func_int8_t_s_u((l_1284 != (*l_1285)), 7)) || (-4L))), (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(0x7FL, 0L)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(1UL, 0x41L, ((VECTOR(uint8_t, 2))(l_1297.wy)), 0x4EL, ((VECTOR(uint8_t, 8))(((*p_47) >= (~(!(safe_mod_func_int32_t_s_s((*p_49), 0x38857451L))))), 0xA6L, ((VECTOR(uint8_t, 4))(0UL)), 7UL, 0UL)), ((VECTOR(uint8_t, 2))(0xA3L)), 0xE4L)).hi)).s44))).xxyx))))).ywzwyzww)).odd)).z >= p_48) , l_1300) , (**p_1872->g_1063)), 0x390DL)), l_1300)), l_1301)), l_1301)) > (*p_1872->g_1064)) ^ p_48))))) , (void*)0) == (void*)0) , p_1872->g_1056.s4))) , l_1303[1][0]) != l_1303[1][0]) >= l_1301), p_48)) , l_1116) >= 4L) & 1UL))) ^ l_1301)) , (void*)0) != l_1305), p_1872->g_267)));
                    l_1301 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1306.wxyyzyww)).hi)).xyxxzzyw)))).s3;
                    for (p_1872->g_95 = 22; (p_1872->g_95 <= (-26)); --p_1872->g_95)
                    { /* block id: 614 */
                        int32_t *l_1309 = &l_1092[0][2];
                        int32_t *l_1310 = &l_1106;
                        int32_t *l_1311 = &l_1093;
                        int32_t *l_1312[7];
                        int16_t l_1313 = 0x4B90L;
                        int16_t l_1333 = (-1L);
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1312[i] = &p_1872->g_844;
                        ++p_1872->g_1356;
                    }
                    (*p_49) = (l_1329 , ((*l_1372) ^= ((safe_div_func_int32_t_s_s((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(l_1361.s10)).yxyyyyxxxyxxxyyy, ((VECTOR(uint64_t, 16))(l_1362.s2530506757046132))))).s85)).hi == FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(l_1363.yyyx)).lo))).yxyyyxxy)).s5)) , (p_48 >= ((~(((p_48 , (((((l_1364[3][3] > (((-1L) < l_1334) | ((safe_rshift_func_int8_t_s_u((p_1872->g_267 | (safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((*p_1872->g_1021) != p_45) , 65535UL), 0x5B1EL)), l_1355))), 1)) , p_1872->g_304))) ^ l_1371) > p_48) ^ l_1361.sd) | 0x44C2BF39L)) <= p_1872->g_333.s6) != p_48)) || (*p_49))))));
                }
                if ((safe_lshift_func_int8_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1872->g_1375.xy)).yxyx)).zyxyxxwx)).s2 && (5UL || (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_1380[4] == (void*)0), FAKE_DIVERGE(p_1872->local_2_offset, get_local_id(2), 10))), l_1300)))), (p_1872->g_987.s4 == (((VECTOR(uint64_t, 2))(l_1381.zw)).odd >= GROUP_DIVERGE(2, 1))))))
                { /* block id: 620 */
                    int32_t *l_1382 = &l_1341[0][2];
                    VECTOR(int32_t, 4) l_1383 = (VECTOR(int32_t, 4))(0x6C115C87L, (VECTOR(int32_t, 2))(0x6C115C87L, 0x448E5286L), 0x448E5286L);
                    uint32_t ***l_1401 = &p_1872->g_133;
                    uint16_t **l_1437 = &l_1091;
                    uint32_t *l_1441 = &p_1872->g_292;
                    uint32_t **l_1440[4][10][5] = {{{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441}},{{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441}},{{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441}},{{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441},{&l_1441,&l_1441,(void*)0,&l_1441,&l_1441}}};
                    int32_t l_1453 = 0x499354A9L;
                    int8_t l_1460 = 0x2CL;
                    VECTOR(int16_t, 4) l_1471 = (VECTOR(int16_t, 4))(0x52CAL, (VECTOR(int16_t, 2))(0x52CAL, 0x14C4L), 0x14C4L);
                    int i, j, k;
                    if (l_1348)
                    { /* block id: 621 */
                        VECTOR(uint32_t, 16) l_1388 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 2UL), 2UL), 2UL, 4294967290UL, 2UL, (VECTOR(uint32_t, 2))(4294967290UL, 2UL), (VECTOR(uint32_t, 2))(4294967290UL, 2UL), 4294967290UL, 2UL, 4294967290UL, 2UL);
                        uint32_t *l_1389[6];
                        int32_t *l_1411 = &l_1353;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1389[i] = &p_1872->g_292;
                        p_49 = l_1382;
                        (*p_49) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1383.zyyxxzyw)).s06)))).xyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_1384, (-1L), 0x67499AE3L, 0x3A08DE08L)).hi))).yyyxxyxy, ((VECTOR(int32_t, 16))(l_1385.s3543757246615003)).odd))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1386.s12)), 0x4E5315B6L, 0x0B6D4A92L)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_1387.zzxxxwyx)).even, (int32_t)((l_1363.x &= ((VECTOR(uint32_t, 2))(l_1388.sda)).even) , ((safe_div_func_uint8_t_u_u(p_48, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))((((p_48 < (l_1354 | (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_1394.xxxxxxxx)).even)).y <= (((*p_1872->g_1064) = l_1332) && ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1872->g_1395.xzxx)).zxyxwywyxxzxwxwy)).s7)))) < p_48) , ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_1396.s04)))), 0L, 0x3BL)), (int8_t)((void*)0 != &p_1872->g_1079[1][8][3])))), ((VECTOR(int8_t, 4))(l_1397.s4055))))))).xxyxyyxzywyzwzwz, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1398.se4c005f172399842)))).s1eff, ((VECTOR(int8_t, 8))((safe_sub_func_int16_t_s_s(((**l_1284) = (l_1401 == l_1402)), l_1363.x)), 4L, 0x4CL, 0x2AL, ((VECTOR(int8_t, 2))(0L)), (-1L), 0L)).even, ((VECTOR(int8_t, 4))(0L))))).hi, ((VECTOR(int8_t, 2))(0L))))), 1L, 1L)).zzwywxwxwyywxxxz))).s47, ((VECTOR(int8_t, 2))(0x1FL))))), (-6L), 0L)))).xxzwxwywzwwzywww)).sfd16, ((VECTOR(int8_t, 4))(0L))))).z), (-9L), ((VECTOR(int8_t, 2))(0x4BL)), ((VECTOR(int8_t, 2))(0L)), 3L, 0x2EL)).s76, ((VECTOR(int8_t, 2))(0x49L))))), 0x66L, 0x65L)).z, GROUP_DIVERGE(1, 1))))) && FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10)))))))).lo)).even))), ((VECTOR(int32_t, 4))(1L)), l_1297.z, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))((-1L))), 1L)).s9;
                        (*l_1382) = l_1403[0][0];
                        (*l_1411) |= (safe_sub_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((l_1388.sc || p_48), (65527UL || p_48))) > ((void*)0 == l_1401)) | ((((l_1341[3][0] ^ ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1410.yzwxzzxzzywxzxww)).s63)))).yyxyyyxy)))).s5) , (*p_49)) , ((l_1388.s0 & 0x552FC1F5L) , l_1108)) > p_48)), l_1100));
                    }
                    else
                    { /* block id: 629 */
                        int32_t *l_1412 = &l_1092[0][2];
                        int32_t *l_1413 = (void*)0;
                        int32_t *l_1414 = (void*)0;
                        int32_t *l_1415[9][3] = {{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350},{&l_1331,(void*)0,&l_1350}};
                        int i, j;
                        p_1872->g_1416--;
                    }
                    (*l_1382) = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((**l_1284) = (safe_unary_minus_func_uint16_t_u((p_48 < (p_1872->g_1443 |= (safe_mul_func_int8_t_s_s((((l_1442 = ((*l_1382) , func_50(l_1425[0][2][0], ((((*l_1382) |= FAKE_DIVERGE(p_1872->local_0_offset, get_local_id(0), 10)) < ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_1872->g_1426.s2257)).yxyyzyxwywzyyxyx)).s9b)))).xyxx)).wzywzzzx)).lo, ((VECTOR(uint32_t, 2))(0xC6418C64L, 0x5FE63641L)).xyxx))).x) , (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), ((((VECTOR(uint8_t, 4))(0xD8L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((void*)0 != l_1429), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(p_1872->g_1430.yxxxxxyx)).hi, ((VECTOR(uint8_t, 4))(p_1872->g_1431.s9301))))).odd, ((VECTOR(uint8_t, 8))(l_1432.s57764311)).s76))), 0UL)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1872->g_1433.s3026)).zywxzzyz)).s4331027760500457)).lo)).even)), ((VECTOR(uint8_t, 2))(l_1434.s01)), 255UL, 7UL)).s50, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(255UL, 0x7AL, 0x91L, ((VECTOR(uint8_t, 4))(l_1435.s7630)), 1UL)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x7FL, 4UL)).yyyx)), 253UL, ((VECTOR(uint8_t, 2))(l_1436.s90)), 0xA3L)).hi)), ((VECTOR(uint8_t, 16))(251UL, ((VECTOR(uint8_t, 4))(0x1FL, ((GROUP_DIVERGE(0, 1) , ((*l_1437) = &p_1872->g_70)) == (void*)0), 0x8CL, 0x42L)), (safe_mod_func_int8_t_s_s(p_1872->g_89, 0x4BL)), 0xD1L, ((VECTOR(uint8_t, 2))(7UL)), (*l_1382), l_1336, ((VECTOR(uint8_t, 4))(2UL)), 249UL)).secb9))).xyxxxxwyzwywwywz)).s7943))).hi)).xxxyyxyy, (uint8_t)(*l_1382)))).lo, ((VECTOR(uint8_t, 4))(0x3CL))))).even))), 1UL, 0UL)), ((VECTOR(uint8_t, 4))(2UL)), ((VECTOR(uint8_t, 2))(0xE4L)), 0UL, 0xC5L, ((VECTOR(uint8_t, 4))(255UL)))).sdc45)), p_48, 247UL, 0x8AL, 0xADL)).s17, ((VECTOR(uint8_t, 2))(1UL))))), 0xE8L)).z & p_1872->g_385) >= p_48)))), p_1872))) != p_46) , p_1872->g_190.z), p_1872->g_1216.s0))))))))), l_1444));
                    for (p_1872->g_113 = 0; (p_1872->g_113 >= 55); p_1872->g_113 = safe_add_func_uint64_t_u_u(p_1872->g_113, 9))
                    { /* block id: 640 */
                        int64_t l_1447[4];
                        int32_t *l_1448 = &l_1316;
                        int32_t *l_1449[6][9][4] = {{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}},{{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314},{&l_1314,&l_1314,&l_1314,&l_1314}}};
                        uint32_t l_1455 = 0UL;
                        int32_t l_1461 = 0x004DB6D5L;
                        VECTOR(uint8_t, 8) l_1462 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_1447[i] = 0L;
                        (*p_49) = l_1447[3];
                        l_1455++;
                        l_1462.s4++;
                    }
                    for (l_1459 = 0; (l_1459 <= (-22)); l_1459 = safe_sub_func_int16_t_s_s(l_1459, 7))
                    { /* block id: 647 */
                        int16_t l_1467 = 4L;
                        VECTOR(uint16_t, 4) l_1470 = (VECTOR(uint16_t, 4))(0x74DAL, (VECTOR(uint16_t, 2))(0x74DAL, 0xE564L), 0xE564L);
                        int32_t l_1474[2][10] = {{0x5832B8C1L,0L,0L,0x38561037L,0L,0x38561037L,0L,0L,0x5832B8C1L,0x5832B8C1L},{0x5832B8C1L,0L,0L,0x38561037L,0L,0x38561037L,0L,0L,0x5832B8C1L,0x5832B8C1L}};
                        int8_t *l_1499 = (void*)0;
                        int8_t *l_1500 = &l_1108;
                        int i, j;
                        l_1341[3][3] = l_1467;
                        l_1385.s2 &= (((VECTOR(uint16_t, 4))(0x1172L, ((VECTOR(uint16_t, 2))(l_1470.yx)), 4UL)).x && (((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1471.zz)), 1L, 0x7EBFL)).lo, ((VECTOR(int16_t, 2))(0x1EFEL, 0x051FL))))).even <= (*l_1382)));
                        l_1503[4] ^= (safe_sub_func_uint32_t_u_u((l_1474[1][8] = (l_1328 = ((**l_1118)--))), ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_1479.xwwwyzyx)).s3, (((l_1340 |= ((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0UL, (&p_1872->g_1078[0] == &p_1872->g_1078[0]))), (((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 8))((safe_lshift_func_uint8_t_u_u(((p_48 > ((**l_1284) = (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))((-7L), ((VECTOR(int64_t, 2))(p_1872->g_1494.zy)), ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x0CL, ((*l_1500) = p_48))), 0x20BDL)) >= ((p_1872->g_1375.y ^ ((++(*p_47)) && l_1341[5][3])) , p_1872->g_1034.s4)), p_48, 0x66A81E3C5D9CCF7FL, 6L, 1L)).odd, ((VECTOR(int64_t, 4))(0L))))).zyyxzzyywwwwzyzy)).s2e, ((VECTOR(int64_t, 2))((-6L)))))).xxyxxxyy, ((VECTOR(int64_t, 8))(0x7C661949178FCC7CL)), ((VECTOR(int64_t, 8))(0x657F57E446682020L))))).s1 , (*l_1382)), 1L)), 0x5C2795873C6848C6L)))) || GROUP_DIVERGE(1, 1)), 1)), l_1355, 0x046377FF4439E9BFL, 0x0F1947C0BD23DED5L, ((VECTOR(int64_t, 4))(1L)))).hi, ((VECTOR(int64_t, 4))(0x525C1B4C9D0A51D0L)), ((VECTOR(int64_t, 4))(0L))))).z, 0x896B6F6E8625B519L)) || (**p_1872->g_1063)) | l_1432.s7))), l_1432.s4)) && (*p_1872->g_1064))) | (-7L)) < (*p_49)))) && FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10))));
                        (*p_1872->g_265) = &l_1474[0][2];
                    }
                }
                else
                { /* block id: 660 */
                    int32_t l_1510 = 0x112B3DABL;
                    int32_t l_1511 = (-7L);
                    int32_t l_1512 = 0x095AA264L;
                    int32_t l_1513 = 0x097D025CL;
                    int32_t l_1514 = 0L;
                    int32_t l_1515 = 5L;
                    int32_t l_1516 = 1L;
                    int32_t l_1517 = 1L;
                    int32_t l_1518 = 4L;
                    int32_t l_1520 = 0x7F408037L;
                    int32_t *l_1547 = &l_1332;
                    int32_t *l_1548[1];
                    uint8_t l_1556 = 0x1BL;
                    uint32_t **l_1576 = (void*)0;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1548[i] = (void*)0;
                    for (p_48 = (-13); (p_48 == (-13)); p_48 = safe_add_func_uint64_t_u_u(p_48, 6))
                    { /* block id: 663 */
                        int32_t *l_1506 = &l_1341[3][3];
                        int32_t *l_1507 = (void*)0;
                        int32_t *l_1508 = &l_1093;
                        int32_t *l_1509[8] = {&l_1342,(void*)0,&l_1342,&l_1342,(void*)0,&l_1342,&l_1342,(void*)0};
                        int32_t l_1546 = 0x7E0C0BE3L;
                        int i;
                        ++l_1521[6][4][0];
                        (*l_1508) = (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(((((VECTOR(int64_t, 4))(l_1528.yxyx)).y > ((safe_sub_func_uint64_t_u_u((l_1147 &= ((((((0x20E9A89378D5F874L != ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 8))(0x4019D095CC448FBDL, (-1L), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(p_1872->g_1533.s21b96710)).hi))).wxxzzxxzwzxxyzzw)).se, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_48, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1872->g_1534.s6735745716702603)).s79)), 0UL)), (p_1872->g_385 ^ (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(249UL, 7)), 5))), p_48, 0x31DA38A8L, 0UL)).s14, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(p_1872->g_1539.xy)), ((VECTOR(uint32_t, 2))(0x79C7159EL, 0x4F8C4809L)), ((VECTOR(uint32_t, 8))(l_1540.s13516677)).s45))).yxyxyyxyxxyyyyxx, ((VECTOR(uint32_t, 8))(p_1872->g_1541.yxxxyxxy)).s1050376102253321, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(l_1542.xxyy)).xywzyxwx, ((VECTOR(uint32_t, 8))(l_1543.s76750767)), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))((safe_mul_func_int8_t_s_s(((*l_1284) != (*l_1284)), l_1515)), 65535UL, 0UL, 0xA636L, 0x6B9CL, ((VECTOR(uint16_t, 2))(0x986BL)), 0xEEF0L)).odd)), ((VECTOR(uint16_t, 4))(7UL)), ((VECTOR(uint16_t, 4))(0UL))))).ywxwyyzw, ((VECTOR(uint16_t, 8))(0x6563L))))).s1053736046520173, ((VECTOR(uint16_t, 16))(0x8191L)), ((VECTOR(uint16_t, 16))(1UL))))).s63, ((VECTOR(uint16_t, 2))(0x3228L))))), ((VECTOR(uint16_t, 2))(0x8940L))))).yxxxxxxy))).hi, ((VECTOR(uint32_t, 4))(0x952C44CEL))))).yzwxwwxzwwxzyzzz))).s05))).odd)), ((VECTOR(int64_t, 4))(0x229E3B87B8AC30D3L)), 0x65189E30714C4827L)).s31, ((VECTOR(int64_t, 2))(1L))))).even) , p_48) == p_48) , p_48) | (*p_49)) ^ (-3L))), p_48)) , 18446744073709551615UL)) ^ 0x640D39BEL), l_1546)) > 0xF7L), p_48));
                    }
                    (*p_1872->g_265) = p_49;
                    ++l_1549;
                    for (p_1872->g_1443 = 0; (p_1872->g_1443 > 44); ++p_1872->g_1443)
                    { /* block id: 672 */
                        (*p_1872->g_93) &= ((VECTOR(int32_t, 2))(0x70DA02FAL, 0L)).even;
                        l_1567 = (safe_add_func_int64_t_s_s((((((l_1556 == (-6L)) & (((safe_lshift_func_int16_t_s_s(0x3052L, 12)) | (p_47 != (p_48 , &l_1451))) | (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((((l_1394.x <= (((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10), ((VECTOR(int16_t, 8))(l_1565.zyzyyzxw)).s7)) , (0x44L ^ p_1872->g_1426.s4)) , p_48)) < p_1872->g_70) && p_1872->g_846), 7)), GROUP_DIVERGE(2, 1))))) & p_1872->g_1566.s3) || p_1872->g_1167.s4) != p_48), p_1872->g_333.s5));
                        (*p_49) = (p_48 || (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(p_48)), ((VECTOR(int8_t, 4))(0x73L, 0x5BL, 0x19L, 0x67L)).x)) || ((((~l_1528.y) , l_1571) == ((safe_mod_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((***l_1179), 3UL)) >= (*l_1547)), 0x5101ED386C6BB81AL)) , l_1576)) != 0UL)) < (*p_49)));
                    }
                }
            }
            else
            { /* block id: 678 */
                uint16_t **l_1585 = &l_1091;
                VECTOR(uint8_t, 4) l_1587 = (VECTOR(uint8_t, 4))(0xC2L, (VECTOR(uint8_t, 2))(0xC2L, 255UL), 255UL);
                int32_t *l_1590 = (void*)0;
                uint64_t *l_1594[7][7][5] = {{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}},{{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058},{&p_1872->g_1058,&p_1872->g_1058,(void*)0,&p_1872->g_1058,&p_1872->g_1058}}};
                VECTOR(uint32_t, 2) l_1600 = (VECTOR(uint32_t, 2))(0UL, 0xF13107D3L);
                int32_t l_1603 = (-1L);
                int i, j, k;
                (*p_49) &= (((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(0x291EL, 7L)).xxxy, ((VECTOR(int16_t, 2))(0x3F51L, 5L)).xyxy))).w == (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_1579.sd031)))), ((VECTOR(uint8_t, 4))(l_1580.s5620)), ((VECTOR(uint8_t, 2))(1UL, 2UL)).xxxx))), ((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(2UL, 247UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(250UL, 255UL)).yxyy)).even))))))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((-3L), (l_1585 == (void*)0))), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(p_1872->g_1586.s7e)).yxyyyxyy, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(l_1587.yxwy)).odd))).xxxyxxxx))).lo, ((VECTOR(uint8_t, 8))(l_1588.s7e0610b7)).hi))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_1589.sa4e355a1d7e26fb1)).sf1)).xxxx))).even)), (((l_1590 != p_49) != l_1591.y) >= ((safe_rshift_func_uint16_t_u_u(p_48, 11)) , ((p_1872->g_1058 = l_1341[3][0]) , p_1872->g_928))), 0x5CL, ((VECTOR(uint8_t, 2))(1UL)), p_48, 0xD7L, 2UL, ((VECTOR(uint8_t, 2))(0x78L)), 255UL, l_1595, 0xA7L, 1UL)).s61, ((VECTOR(uint8_t, 2))(0UL))))).xyyxyyyx, ((VECTOR(uint8_t, 8))(0xF3L))))).s7)) & l_1579.s2), ((VECTOR(uint8_t, 2))(4UL)), 254UL)))), 255UL)), GROUP_DIVERGE(2, 1), 249UL, 0x16L, 0x01L)).s4, 0xF2L)) , p_48) || l_1394.x));
                for (p_1872->g_108 = 0; (p_1872->g_108 >= 26); ++p_1872->g_108)
                { /* block id: 683 */
                    uint64_t l_1601[1][2][5] = {{{4UL,1UL,0xCFCFE0AB23FE12D1L,1UL,4UL},{4UL,1UL,0xCFCFE0AB23FE12D1L,1UL,4UL}}};
                    int32_t *l_1602[8][10][1] = {{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}},{{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]},{&l_1341[4][0]}}};
                    int i, j, k;
                    l_1092[0][0] = (l_1603 |= (l_1459 , (4294967295UL | ((((*p_49) = (safe_add_func_uint16_t_u_u(p_1872->g_326.y, p_1872->g_1165.s3))) > p_48) > ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(0xFC30F491L, 0UL, 0x649E8D75L, 4294967295UL, p_48, ((*l_1121) = p_48), 4294967291UL, l_1337, ((VECTOR(uint32_t, 4))(l_1600.xyyy)), ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x32D9A8E2L, l_1601[0][1][1], 0xB357FA38L, 0x3763A377L)))), ((VECTOR(uint32_t, 4))(0x6AE9AAA2L))))))), ((VECTOR(uint32_t, 16))(1UL))))).even)))).s74)).xyxxxyyy, ((VECTOR(uint32_t, 8))(0x09EE0104L))))).s4))));
                    atomic_sub(&p_1872->g_atomic_reduction[get_linear_group_id()], p_1872->g_1604[4] + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1872->v_collective += p_1872->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    l_1605.s7--;
                }
                (*p_1872->g_265) = &l_1603;
                return p_48;
            }
            l_1306.z ^= (*p_49);
        }
    }
    else
    { /* block id: 696 */
        int16_t l_1612 = 0x5A9EL;
        int32_t l_1667 = 0x730D5783L;
        VECTOR(int64_t, 4) l_1705 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x3504DBF0CF865116L), 0x3504DBF0CF865116L);
        int i;
        for (p_1872->g_304 = 0; (p_1872->g_304 > 2); p_1872->g_304 = safe_add_func_int64_t_s_s(p_1872->g_304, 1))
        { /* block id: 699 */
            int32_t l_1658 = 0x664C4AD9L;
            int8_t l_1665 = (-2L);
            VECTOR(int64_t, 16) l_1690 = (VECTOR(int64_t, 16))(0x58D6D521DF9FFB39L, (VECTOR(int64_t, 4))(0x58D6D521DF9FFB39L, (VECTOR(int64_t, 2))(0x58D6D521DF9FFB39L, (-8L)), (-8L)), (-8L), 0x58D6D521DF9FFB39L, (-8L), (VECTOR(int64_t, 2))(0x58D6D521DF9FFB39L, (-8L)), (VECTOR(int64_t, 2))(0x58D6D521DF9FFB39L, (-8L)), 0x58D6D521DF9FFB39L, (-8L), 0x58D6D521DF9FFB39L, (-8L));
            VECTOR(int64_t, 2) l_1691 = (VECTOR(int64_t, 2))(1L, 0x1832B0EEF7A9B61AL);
            int i;
            atomic_xor(&p_1872->l_atomic_reduction[0], ((p_1872->g_1604[4] || (0x3CL & (safe_sub_func_int8_t_s_s(p_48, p_1872->g_1165.s3)))) ^ l_1612) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1872->v_collective += p_1872->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    l_1092[0][1] ^= ((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((((*l_1710) = &p_1872->g_1064) == &p_1872->g_1064) | (l_1661.se , l_1616)))), (((void*)0 != l_1712) == l_1713))) , (((((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 16))(l_1714.wzzzwxzyxwzxwxyx))))).s2f, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(3UL, (safe_sub_func_int8_t_s_s(((*l_1719) = (safe_mul_func_int16_t_s_s(p_48, (0x529CL || (-4L))))), p_1872->g_1395.z)), 1UL, 18446744073709551608UL, 0x3533B016FEFD5227L, p_1872->g_1533.s1, 0xBB36E903ADFE1DB4L, ((VECTOR(uint64_t, 8))(0xF9020C5ABFEDE048L)), 0xD5269945C66B3191L)).s5e, ((VECTOR(uint64_t, 2))(0x087C3CB87840EF1FL)))))))).lo , 0x40D6L) == (-8L)) <= p_1872->g_190.w));
    (*p_1872->g_265) = p_46;
    (*p_1872->g_1723) = (!(l_1721[5][1][5] == &l_1722));
    return (*p_1872->g_1064);
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_116 p_1872->g_1063 p_1872->g_1074 p_1872->g_385 p_1872->g_333
 * writes: p_1872->g_116 p_1872->g_848 p_1872->g_1074
 */
int32_t * func_50(uint64_t * p_51, int64_t  p_52, struct S0 * p_1872)
{ /* block id: 487 */
    int16_t l_1065 = (-1L);
    int32_t *l_1068[4];
    int8_t *l_1069 = (void*)0;
    int i;
    for (i = 0; i < 4; i++)
        l_1068[i] = &p_1872->g_89;
    for (p_1872->g_116 = 0; (p_1872->g_116 > 29); ++p_1872->g_116)
    { /* block id: 490 */
        int64_t l_1075[5][10][5] = {{{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL}},{{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL}},{{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL}},{{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL}},{{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL},{0x608C8FF109647989L,8L,0x0781B558AD2F26DAL,0x2822DF9DE8FA727DL,0x4B3C0A8EE112A04AL}}};
        int32_t *l_1076[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1076[i] = (void*)0;
        p_1872->g_1074.s0 = (safe_mul_func_int16_t_s_s(((void*)0 == p_1872->g_1063), (((l_1065 , (((safe_lshift_func_uint16_t_u_u(65535UL, 4)) , l_1068[3]) != l_1068[3])) == (l_1069 == (void*)0)) , (safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((*p_51) = (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x434A248BL, 0x1253EFCDL)).yyxxxyxxxyxyxyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1872->g_1074.s1477)).zwxwwxxz)).s7674311624647711, ((VECTOR(int32_t, 4))(0x3401BB8FL, 0x30750B60L, 0x0276A54EL, (-6L))).xwwwwwwwyzwxxyxw))).s6 != p_1872->g_385)), 0x18EB151F2DD17127L)) | l_1075[2][6][2]), p_1872->g_333.s6)))));
        return l_1076[0];
    }
    return l_1068[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_18 p_1872->l_comm_values p_1872->g_comm_values p_1872->g_89 p_1872->g_125 p_1872->g_111 p_1872->g_132 p_1872->g_108 p_1872->g_326 p_1872->g_333 p_1872->g_116 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_385 p_1872->g_93 p_1872->g_70 p_1872->g_292 p_1872->g_427 p_1872->g_124 p_1872->g_267 p_1872->g_848 p_1872->g_95 p_1872->g_863 p_1872->g_928 p_1872->g_845 p_1872->g_1034 p_1872->g_846 p_1872->g_190
 * writes: p_1872->g_70 p_1872->g_18 p_1872->g_90 p_1872->g_93 p_1872->g_95 p_1872->g_108 p_1872->g_111 p_1872->g_113 p_1872->g_116 p_1872->g_125 p_1872->g_133 p_1872->g_317 p_1872->g_89 p_1872->g_190 p_1872->g_424 p_1872->g_427 p_1872->g_848 p_1872->g_863 p_1872->g_928 p_1872->g_295 p_1872->g_847 p_1872->g_134
 */
uint64_t * func_53(uint64_t  p_54, struct S0 * p_1872)
{ /* block id: 8 */
    uint64_t *l_61 = (void*)0;
    uint16_t *l_69 = &p_1872->g_70;
    int16_t *l_73 = (void*)0;
    int16_t *l_74 = &p_1872->g_18;
    VECTOR(uint16_t, 8) l_79 = (VECTOR(uint16_t, 8))(0x48FEL, (VECTOR(uint16_t, 4))(0x48FEL, (VECTOR(uint16_t, 2))(0x48FEL, 0x5841L), 0x5841L), 0x5841L, 0x48FEL, 0x5841L);
    int32_t *l_88 = &p_1872->g_89;
    int32_t *l_92 = &p_1872->g_89;
    int32_t **l_91[5][2] = {{&l_92,&l_92},{&l_92,&l_92},{&l_92,&l_92},{&l_92,&l_92},{&l_92,&l_92}};
    int8_t *l_94[4] = {&p_1872->g_95,&p_1872->g_95,&p_1872->g_95,&p_1872->g_95};
    VECTOR(int16_t, 16) l_100 = (VECTOR(int16_t, 16))(0x5FF9L, (VECTOR(int16_t, 4))(0x5FF9L, (VECTOR(int16_t, 2))(0x5FF9L, 1L), 1L), 1L, 0x5FF9L, 1L, (VECTOR(int16_t, 2))(0x5FF9L, 1L), (VECTOR(int16_t, 2))(0x5FF9L, 1L), 0x5FF9L, 1L, 0x5FF9L, 1L);
    VECTOR(int16_t, 16) l_101 = (VECTOR(int16_t, 16))(0x61A2L, (VECTOR(int16_t, 4))(0x61A2L, (VECTOR(int16_t, 2))(0x61A2L, 0x5D60L), 0x5D60L), 0x5D60L, 0x61A2L, 0x5D60L, (VECTOR(int16_t, 2))(0x61A2L, 0x5D60L), (VECTOR(int16_t, 2))(0x61A2L, 0x5D60L), 0x61A2L, 0x5D60L, 0x61A2L, 0x5D60L);
    VECTOR(int16_t, 8) l_104 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x3FE6L), 0x3FE6L), 0x3FE6L, (-4L), 0x3FE6L);
    uint32_t *l_107 = &p_1872->g_108;
    uint32_t *l_109 = (void*)0;
    uint32_t *l_110 = &p_1872->g_111;
    uint8_t *l_112 = &p_1872->g_113;
    uint32_t l_114[2];
    uint8_t *l_115 = (void*)0;
    uint32_t ***l_938 = (void*)0;
    uint32_t ****l_937 = &l_938;
    VECTOR(uint64_t, 4) l_940 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA4EED18331AB245BL), 0xA4EED18331AB245BL);
    VECTOR(uint8_t, 16) l_946 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x4DL), 0x4DL), 0x4DL, 0UL, 0x4DL, (VECTOR(uint8_t, 2))(0UL, 0x4DL), (VECTOR(uint8_t, 2))(0UL, 0x4DL), 0UL, 0x4DL, 0UL, 0x4DL);
    int32_t l_966 = (-1L);
    int32_t l_967 = (-1L);
    uint64_t l_972 = 0x575F54A9D1529FEEL;
    VECTOR(uint32_t, 16) l_977 = (VECTOR(uint32_t, 16))(0x48FA07CBL, (VECTOR(uint32_t, 4))(0x48FA07CBL, (VECTOR(uint32_t, 2))(0x48FA07CBL, 0x2C32DC58L), 0x2C32DC58L), 0x2C32DC58L, 0x48FA07CBL, 0x2C32DC58L, (VECTOR(uint32_t, 2))(0x48FA07CBL, 0x2C32DC58L), (VECTOR(uint32_t, 2))(0x48FA07CBL, 0x2C32DC58L), 0x48FA07CBL, 0x2C32DC58L, 0x48FA07CBL, 0x2C32DC58L);
    VECTOR(uint16_t, 4) l_990 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x285FL), 0x285FL);
    int32_t **l_1025 = &p_1872->g_1024;
    uint32_t *l_1030 = (void*)0;
    uint32_t **l_1029 = &l_1030;
    uint32_t *l_1044 = &p_1872->g_108;
    uint32_t l_1050 = 0x00259477L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_114[i] = 5UL;
    (*p_1872->g_265) = func_55(l_61, (safe_unary_minus_func_uint16_t_u((p_1872->g_18 , (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_69) = 65535UL), ((p_1872->g_116 = (safe_add_func_uint8_t_u_u((((((*l_74) = p_1872->g_18) , (safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(l_79.s2553)).w, (safe_mod_func_int64_t_s_s((p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))] == (p_1872->g_comm_values[p_1872->tid] , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((safe_mod_func_uint8_t_u_u(((*l_112) = ((safe_mul_func_int16_t_s_s((((*l_110) = ((*l_107) = ((safe_lshift_func_int8_t_s_s((p_1872->g_95 = (l_88 == (p_1872->g_93 = (p_1872->g_90 = (void*)0)))), (safe_lshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(l_100.sbda2)).yyxxwyyyyzxzxyyy, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(l_101.s280e44e3)), (int16_t)(((safe_rshift_func_int8_t_s_u((((VECTOR(int16_t, 4))(l_104.s0637)).y <= (+(~((*l_74) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0L)).xyxyyxxyyyyyyxxx)).sf)))), ((safe_rshift_func_int16_t_s_s((l_69 != (void*)0), p_1872->g_comm_values[p_1872->tid])) <= p_54))) > p_1872->g_comm_values[p_1872->tid]) && 0x0950C43CAE23F119L), (int16_t)(-1L)))).s7146344553015047))).s10)).lo, 0UL)) <= 0UL), p_54)))) ^ p_54))) , p_54), p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))])) ^ (-1L))), p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))])) <= p_54), 251UL, 0x02L, ((VECTOR(uint8_t, 8))(1UL)), ((VECTOR(uint8_t, 4))(1UL)), 0x7CL)).s7e)), ((VECTOR(uint8_t, 2))(0x80L)), ((VECTOR(uint8_t, 2))(1UL))))).xxxxyxyxxxyxyyxy, ((VECTOR(uint8_t, 16))(0x6AL))))).s5050, ((VECTOR(uint8_t, 4))(1UL))))), 0x40L, p_1872->g_18, 255UL, 0x38L)))).s4)), (*l_88))))) < l_114[1]) >= p_1872->g_89), (-1L)))) , &p_1872->g_18) != l_73), p_1872->g_comm_values[p_1872->tid]))) < p_1872->g_comm_values[p_1872->tid]))), (-1L))), p_54))))), l_61, l_61, p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))], p_1872);
    for (p_1872->g_848 = 0; (p_1872->g_848 == 22); p_1872->g_848 = safe_add_func_uint32_t_u_u(p_1872->g_848, 4))
    { /* block id: 391 */
        int8_t l_922 = 0x7DL;
        int32_t l_923[3][3] = {{0x3447276EL,0x3447276EL,0x3447276EL},{0x3447276EL,0x3447276EL,0x3447276EL},{0x3447276EL,0x3447276EL,0x3447276EL}};
        int64_t l_925 = (-6L);
        int i, j;
        if ((atomic_inc(&p_1872->l_atomic_input[1]) == 3))
        { /* block id: 393 */
            uint32_t l_853 = 0x73E71D84L;
            uint64_t l_854 = 8UL;
            int8_t l_855 = 0x28L;
            VECTOR(int32_t, 8) l_857 = (VECTOR(int32_t, 8))(0x711A3DBDL, (VECTOR(int32_t, 4))(0x711A3DBDL, (VECTOR(int32_t, 2))(0x711A3DBDL, 0x42380D0FL), 0x42380D0FL), 0x42380D0FL, 0x711A3DBDL, 0x42380D0FL);
            int32_t *l_856 = (void*)0;
            uint8_t l_858 = 0x60L;
            int i;
            l_855 ^= (l_854 = (l_853 , 0x3AD5D28DL));
            l_856 = (void*)0;
            l_858 &= 0x5E7C3715L;
            unsigned int result = 0;
            result += l_853;
            result += l_854;
            result += l_855;
            result += l_857.s7;
            result += l_857.s6;
            result += l_857.s5;
            result += l_857.s4;
            result += l_857.s3;
            result += l_857.s2;
            result += l_857.s1;
            result += l_857.s0;
            result += l_858;
            atomic_add(&p_1872->l_special_values[1], result);
        }
        else
        { /* block id: 398 */
            (1 + 1);
        }
        for (p_1872->g_95 = 0; (p_1872->g_95 != (-12)); p_1872->g_95 = safe_sub_func_int16_t_s_s(p_1872->g_95, 5))
        { /* block id: 403 */
            int32_t l_861 = 0x0491084BL;
            int32_t l_862 = 0x146308D4L;
            int32_t l_921[6][2][8] = {{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}},{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}},{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}},{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}},{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}},{{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L},{(-1L),(-6L),1L,0x552E9376L,1L,(-6L),(-1L),0x3CF2D696L}}};
            int i, j, k;
            p_1872->g_863--;
            if ((atomic_inc(&p_1872->l_atomic_input[2]) == 1))
            { /* block id: 406 */
                int64_t l_866 = 0x413CDF088356F42BL;
                uint32_t l_867[8];
                uint64_t l_868[2];
                VECTOR(int64_t, 4) l_869 = (VECTOR(int64_t, 4))(0x3431BBA98F894C77L, (VECTOR(int64_t, 2))(0x3431BBA98F894C77L, 0x244BBB05960DDFCCL), 0x244BBB05960DDFCCL);
                VECTOR(int32_t, 8) l_870 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 1L), 1L), 1L, 5L, 1L);
                int8_t l_871 = (-1L);
                int16_t l_872[3];
                int32_t *l_873 = (void*)0;
                int32_t l_874[7][7][2] = {{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}},{{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L},{0x30B6EA97L,1L}}};
                int32_t l_875 = 0L;
                int8_t l_876 = (-1L);
                int16_t l_877 = 0x3F9DL;
                uint32_t l_878 = 0xDEF3A340L;
                VECTOR(int16_t, 2) l_879 = (VECTOR(int16_t, 2))(0L, 2L);
                VECTOR(int16_t, 2) l_880 = (VECTOR(int16_t, 2))(1L, 0L);
                uint64_t l_881 = 0x241F6AA10FED21B3L;
                VECTOR(int16_t, 4) l_882 = (VECTOR(int16_t, 4))(0x7EBEL, (VECTOR(int16_t, 2))(0x7EBEL, (-5L)), (-5L));
                int64_t l_883 = 0x4F955DFE43F42A45L;
                VECTOR(int16_t, 2) l_884 = (VECTOR(int16_t, 2))((-1L), (-1L));
                uint64_t l_885 = 0x201B8232BAFFBFE2L;
                int8_t l_886 = 0x57L;
                uint64_t l_887[5][6] = {{7UL,6UL,0x455E99869123008FL,6UL,7UL,7UL},{7UL,6UL,0x455E99869123008FL,6UL,7UL,7UL},{7UL,6UL,0x455E99869123008FL,6UL,7UL,7UL},{7UL,6UL,0x455E99869123008FL,6UL,7UL,7UL},{7UL,6UL,0x455E99869123008FL,6UL,7UL,7UL}};
                int8_t l_888 = (-6L);
                uint32_t l_889 = 4294967295UL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_867[i] = 0x481CCBB8L;
                for (i = 0; i < 2; i++)
                    l_868[i] = 0x8D19A2C7A35F5157L;
                for (i = 0; i < 3; i++)
                    l_872[i] = (-4L);
                l_868[0] |= (l_867[7] = l_866);
                l_873 = ((((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_869.wxzwzxwzxzxzwxzx)))).lo, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_870.s6304)).hi)).yxxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(1UL, 0x5059403AL)))).yyyx))).yywyzxyy))).s5 , (l_871 , l_872[1])) , (void*)0);
                if ((l_889 = (l_874[1][5][0] , (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0UL, (l_875 , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(l_876, (l_877 = 0xD09AL), 1UL, 0x1B9CL, l_878, 65535UL, FAKE_DIVERGE(p_1872->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(l_879.yy)).yxyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(0x39BAL, 0x11A5L)).xyxxxxxxyxyxyyyy, (int16_t)0x59EBL))).scb43)).xyzxzyyxxywzzzyy)).s6a52))).ywxxzxzy, ((VECTOR(int16_t, 2))(l_880.xy)).xyxxyxxx, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))((-6L), l_881, ((VECTOR(int16_t, 4))(l_882.wxxz)), 0x657DL, 0L)).hi, (int16_t)l_883, (int16_t)((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_884.yxyx)).xzyyxwyzwzxxwzyy)).s6))).wxyxzwxxywwyyzwz)).se, l_885, (-1L), l_886, (-2L), l_887[1][0], 0x23ADL, 0L)), ((VECTOR(int16_t, 8))(5L)))))))).s73)).xxxyyyyy, ((VECTOR(int16_t, 8))((-5L))))))))), 65530UL)).odd, ((VECTOR(uint16_t, 8))(0xFE59L)), ((VECTOR(uint16_t, 8))(1UL))))))).s5612743642162572)).lo)), 1UL, 0xB7ADL, 0UL, 0x580CL, 0x906EL, ((VECTOR(uint16_t, 2))(0UL)), 0x0641L)).s12)).even), ((VECTOR(uint16_t, 4))(1UL)), 65535UL, 0x5AC0L)))).s47)).odd , l_888))))
                { /* block id: 412 */
                    int16_t l_890 = 0L;
                    uint16_t l_898 = 1UL;
                    int32_t l_901 = (-8L);
                    if (l_890)
                    { /* block id: 413 */
                        int16_t l_891 = 0L;
                        uint8_t l_892 = 0x1AL;
                        int16_t l_895[6][3][10] = {{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}},{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}},{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}},{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}},{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}},{{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L},{5L,0x19E5L,5L,5L,0x19E5L,5L,5L,0x19E5L,5L,5L}}};
                        int i, j, k;
                        l_892++;
                        l_873 = (l_895[2][0][5] , (void*)0);
                    }
                    else
                    { /* block id: 416 */
                        int32_t l_897[4];
                        int32_t *l_896 = &l_897[2];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_897[i] = 0x0362A7D1L;
                        l_896 = (void*)0;
                    }
                    --l_898;
                    l_901 ^= (-9L);
                }
                else
                { /* block id: 421 */
                    int32_t l_902 = 0x50BFD0B7L;
                    uint32_t l_910 = 3UL;
                    for (l_902 = 27; (l_902 <= 21); l_902 = safe_sub_func_int16_t_s_s(l_902, 7))
                    { /* block id: 424 */
                        int32_t l_906 = 0L;
                        int32_t *l_905 = &l_906;
                        uint8_t l_907[2];
                        uint32_t l_908 = 0x35500A05L;
                        uint16_t l_909[1][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_907[i] = 0xCDL;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_909[i][j] = 65529UL;
                        }
                        l_905 = (l_873 = l_905);
                        (*l_905) = (((l_886 |= l_907[0]) , l_908) , l_909[0][0]);
                    }
                    if (l_910)
                    { /* block id: 430 */
                        int32_t l_912 = 0x627DEC82L;
                        int32_t *l_911 = &l_912;
                        l_911 = (l_873 = (void*)0);
                    }
                    else
                    { /* block id: 433 */
                        uint32_t l_913[1][7] = {{0x68A533B0L,0x68A533B0L,0x68A533B0L,0x68A533B0L,0x68A533B0L,0x68A533B0L,0x68A533B0L}};
                        int16_t l_916 = 0L;
                        int8_t l_917 = 1L;
                        uint16_t l_918[3];
                        int32_t l_919 = (-1L);
                        int64_t l_920 = (-1L);
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_918[i] = 0UL;
                        --l_913[0][5];
                        l_919 = (l_918[1] = (l_916 , (l_902 = (l_917 , 0x794B0248L))));
                        l_873 = (FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10) , (void*)0);
                        l_902 = l_920;
                    }
                }
                unsigned int result = 0;
                result += l_866;
                int l_867_i0;
                for (l_867_i0 = 0; l_867_i0 < 8; l_867_i0++) {
                    result += l_867[l_867_i0];
                }
                int l_868_i0;
                for (l_868_i0 = 0; l_868_i0 < 2; l_868_i0++) {
                    result += l_868[l_868_i0];
                }
                result += l_869.w;
                result += l_869.z;
                result += l_869.y;
                result += l_869.x;
                result += l_870.s7;
                result += l_870.s6;
                result += l_870.s5;
                result += l_870.s4;
                result += l_870.s3;
                result += l_870.s2;
                result += l_870.s1;
                result += l_870.s0;
                result += l_871;
                int l_872_i0;
                for (l_872_i0 = 0; l_872_i0 < 3; l_872_i0++) {
                    result += l_872[l_872_i0];
                }
                int l_874_i0, l_874_i1, l_874_i2;
                for (l_874_i0 = 0; l_874_i0 < 7; l_874_i0++) {
                    for (l_874_i1 = 0; l_874_i1 < 7; l_874_i1++) {
                        for (l_874_i2 = 0; l_874_i2 < 2; l_874_i2++) {
                            result += l_874[l_874_i0][l_874_i1][l_874_i2];
                        }
                    }
                }
                result += l_875;
                result += l_876;
                result += l_877;
                result += l_878;
                result += l_879.y;
                result += l_879.x;
                result += l_880.y;
                result += l_880.x;
                result += l_881;
                result += l_882.w;
                result += l_882.z;
                result += l_882.y;
                result += l_882.x;
                result += l_883;
                result += l_884.y;
                result += l_884.x;
                result += l_885;
                result += l_886;
                int l_887_i0, l_887_i1;
                for (l_887_i0 = 0; l_887_i0 < 5; l_887_i0++) {
                    for (l_887_i1 = 0; l_887_i1 < 6; l_887_i1++) {
                        result += l_887[l_887_i0][l_887_i1];
                    }
                }
                result += l_888;
                result += l_889;
                atomic_add(&p_1872->l_special_values[2], result);
            }
            else
            { /* block id: 442 */
                (1 + 1);
            }
            p_1872->g_928--;
        }
    }
    for (p_1872->g_113 = (-21); (p_1872->g_113 == 35); p_1872->g_113++)
    { /* block id: 450 */
        int32_t *l_933 = &p_1872->g_89;
        int32_t l_936[7][10] = {{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL},{0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL,1L,0x2CB7CE2EL,0x2CB7CE2EL}};
        int32_t *l_939 = &l_936[6][6];
        int i, j;
        (*p_1872->g_265) = l_933;
        for (p_1872->g_427 = (-15); (p_1872->g_427 > 26); p_1872->g_427 = safe_add_func_int8_t_s_s(p_1872->g_427, 9))
        { /* block id: 454 */
            l_936[6][6] &= (**p_1872->g_265);
            (*p_1872->g_93) |= ((void*)0 != l_937);
        }
        (*p_1872->g_265) = ((*p_1872->g_187) = l_939);
    }
    if (((*l_92) < (p_1872->g_385 | ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_940.ww)).xyxyyyyx)).s5)))
    { /* block id: 461 */
        int8_t l_941[3];
        VECTOR(int32_t, 16) l_952 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-10L)), (-10L)), (-10L), (-5L), (-10L), (VECTOR(int32_t, 2))((-5L), (-10L)), (VECTOR(int32_t, 2))((-5L), (-10L)), (-5L), (-10L), (-5L), (-10L));
        VECTOR(uint64_t, 4) l_953 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x8D8BDC7264ADA42BL), 0x8D8BDC7264ADA42BL);
        uint64_t *l_968 = (void*)0;
        uint64_t *l_969 = (void*)0;
        uint64_t *l_970 = (void*)0;
        uint64_t *l_971[1];
        uint32_t *l_978 = &p_1872->g_427;
        VECTOR(uint8_t, 8) l_984 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 246UL), 246UL), 246UL, 250UL, 246UL);
        uint32_t **l_993[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t **l_1020 = &l_74;
        int32_t l_1026 = 0x29AC8F1FL;
        int32_t *l_1027 = &l_1026;
        int i;
        for (i = 0; i < 3; i++)
            l_941[i] = (-8L);
        for (i = 0; i < 1; i++)
            l_971[i] = (void*)0;
        (*l_88) ^= (l_941[2] && (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((p_54 , ((VECTOR(uint8_t, 2))(l_946.se8)).hi), 3)), (safe_div_func_int32_t_s_s(p_54, (safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(p_54, ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_952.s14)).xyxyxyyyxyxyyxyx)).sb && (p_1872->g_845.sd != (((VECTOR(uint64_t, 2))(l_953.yz)).odd , (safe_rshift_func_uint16_t_u_s(((*l_69) = (safe_mul_func_int8_t_s_s((0x42DCA3FDE135FE2FL | (l_972 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((p_1872->g_847 = (p_1872->g_295 = ((0L && ((0UL & (safe_rshift_func_int8_t_s_u(((l_941[2] , 0x3C62L) >= l_966), 3))) , p_1872->g_385)) , p_1872->g_326.x))), p_54)), p_54)), l_967)))), p_54))), p_54))))) ^ 0x2CL))))))))));
        (*p_1872->g_265) = l_978;
        (**p_1872->g_265) |= (safe_sub_func_int8_t_s_s(p_54, (l_993[8] != (void*)0)));
        l_1027 = &l_1026;
    }
    else
    { /* block id: 476 */
        int32_t ***l_1028 = (void*)0;
        uint32_t ***l_1031 = &l_1029;
        VECTOR(int8_t, 2) l_1035 = (VECTOR(int8_t, 2))(1L, 0x3FL);
        VECTOR(int8_t, 8) l_1036 = (VECTOR(int8_t, 8))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0L), 0L), 0L, 0x0FL, 0L);
        uint32_t **l_1045 = &l_110;
        uint32_t *l_1046[10] = {&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111,&p_1872->g_111};
        uint32_t **l_1047[9] = {&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134,&p_1872->g_134};
        int16_t **l_1048 = &l_74;
        int64_t *l_1049[2][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int i, j, k;
        (*l_1031) = ((l_1028 != &l_91[3][1]) , l_1029);
        l_1050 = ((safe_lshift_func_uint8_t_u_s(((p_1872->g_427 = (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(p_1872->g_1034.s2e)).xyxyxxyyyxyxyxyy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))((((*l_92) = (((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(0x76L, 9UL)).yyxxyxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 4))(l_1035.yxyy)).yyxxzzyzwyzzzxzx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1036.s6452226242656436))))))).se911)), ((VECTOR(uint8_t, 2))(0x0CL, 0x03L)).yxyx))), 0xA5L, 0UL, 9UL, (((safe_rshift_func_int16_t_s_s(((*l_92) > 0L), (safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_1872->global_2_offset, get_global_id(2), 10) < p_1872->g_89), (p_1872->g_70 = ((*l_88) >= (safe_unary_minus_func_uint32_t_u(4UL)))))))) ^ (safe_lshift_func_uint16_t_u_u((((*l_1045) = l_1044) != (p_1872->g_134 = l_1046[4])), (l_1048 != l_1048)))) | p_54), 1UL, ((VECTOR(uint8_t, 2))(0x42L)), ((VECTOR(uint8_t, 2))(0xD1L)), ((VECTOR(uint8_t, 2))(1UL)), 1UL)).hi))).s35, ((VECTOR(uint8_t, 2))(252UL)), ((VECTOR(uint8_t, 2))(254UL))))).odd | (*l_88))) == 1L), p_1872->g_846, 0x190508F6FA677B26L, 9UL)).even, (uint64_t)p_1872->g_845.s2, (uint64_t)FAKE_DIVERGE(p_1872->group_2_offset, get_group_id(2), 10)))), 18446744073709551615UL, 0UL)))).yzwzwxwwyxzyyzzz))).s33, ((VECTOR(uint64_t, 2))(6UL))))).lo ^ FAKE_DIVERGE(p_1872->global_0_offset, get_global_id(0), 10))) & p_54), p_1872->g_190.z)) , (*l_88));
    }
    return &p_1872->g_848;
}


/* ------------------------------------------ */
/* 
 * reads : p_1872->g_125 p_1872->g_111 p_1872->g_132 p_1872->g_108 p_1872->g_326 p_1872->g_333 p_1872->g_116 p_1872->g_comm_values p_1872->g_18 p_1872->g_265 p_1872->g_304 p_1872->g_113 p_1872->g_187 p_1872->g_90 p_1872->g_89 p_1872->g_385 p_1872->g_93 p_1872->g_70 p_1872->g_292 p_1872->g_427 p_1872->g_124 p_1872->l_comm_values p_1872->g_267 p_1872->g_848
 * writes: p_1872->g_125 p_1872->g_111 p_1872->g_133 p_1872->g_317 p_1872->g_89 p_1872->g_190 p_1872->g_116 p_1872->g_18 p_1872->g_93 p_1872->g_424 p_1872->g_427 p_1872->g_95 p_1872->g_113 p_1872->g_848
 */
int32_t * func_55(uint64_t * p_56, int16_t  p_57, uint64_t * p_58, uint64_t * p_59, int64_t  p_60, struct S0 * p_1872)
{ /* block id: 19 */
    int32_t *l_117 = &p_1872->g_89;
    int32_t *l_118 = &p_1872->g_89;
    int32_t l_119 = 0x11B7FB1DL;
    int32_t *l_120 = &l_119;
    int32_t *l_121 = &p_1872->g_89;
    int32_t *l_122 = &p_1872->g_89;
    int32_t *l_123[10][1] = {{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89},{&p_1872->g_89}};
    int8_t l_212 = 1L;
    uint16_t l_228 = 0x262BL;
    int16_t l_235 = (-8L);
    int32_t l_259 = 0x144C72F9L;
    VECTOR(uint16_t, 2) l_277 = (VECTOR(uint16_t, 2))(65527UL, 0x2A99L);
    int32_t l_305 = 0L;
    VECTOR(int32_t, 2) l_306 = (VECTOR(int32_t, 2))(0x4E2EB244L, (-2L));
    VECTOR(int32_t, 2) l_307 = (VECTOR(int32_t, 2))(0x51362EE1L, 0x6CEE0769L);
    int64_t *l_314 = (void*)0;
    VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))(0x7CA0D5BFL, (VECTOR(int32_t, 4))(0x7CA0D5BFL, (VECTOR(int32_t, 2))(0x7CA0D5BFL, (-1L)), (-1L)), (-1L), 0x7CA0D5BFL, (-1L), (VECTOR(int32_t, 2))(0x7CA0D5BFL, (-1L)), (VECTOR(int32_t, 2))(0x7CA0D5BFL, (-1L)), 0x7CA0D5BFL, (-1L), 0x7CA0D5BFL, (-1L));
    uint32_t l_331 = 0UL;
    uint8_t *l_335 = &p_1872->g_113;
    VECTOR(int32_t, 8) l_353 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x15554F50L), 0x15554F50L), 0x15554F50L, (-1L), 0x15554F50L);
    VECTOR(int16_t, 16) l_361 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 4L), 4L), 4L, (-4L), 4L, (VECTOR(int16_t, 2))((-4L), 4L), (VECTOR(int16_t, 2))((-4L), 4L), (-4L), 4L, (-4L), 4L);
    VECTOR(int16_t, 8) l_411 = (VECTOR(int16_t, 8))(0x6669L, (VECTOR(int16_t, 4))(0x6669L, (VECTOR(int16_t, 2))(0x6669L, 0x07B8L), 0x07B8L), 0x07B8L, 0x6669L, 0x07B8L);
    int8_t l_438 = (-1L);
    int i, j;
    p_1872->g_125.w++;
    for (p_1872->g_111 = 0; (p_1872->g_111 < 37); p_1872->g_111 = safe_add_func_uint64_t_u_u(p_1872->g_111, 1))
    { /* block id: 23 */
        uint32_t *l_131 = (void*)0;
        uint32_t **l_130[2];
        VECTOR(int32_t, 8) l_203 = (VECTOR(int32_t, 8))(0x1E25C62FL, (VECTOR(int32_t, 4))(0x1E25C62FL, (VECTOR(int32_t, 2))(0x1E25C62FL, 0x48C62504L), 0x48C62504L), 0x48C62504L, 0x1E25C62FL, 0x48C62504L);
        int32_t **l_209 = &l_123[8][0];
        VECTOR(uint8_t, 16) l_217 = (VECTOR(uint8_t, 16))(0xD3L, (VECTOR(uint8_t, 4))(0xD3L, (VECTOR(uint8_t, 2))(0xD3L, 5UL), 5UL), 5UL, 0xD3L, 5UL, (VECTOR(uint8_t, 2))(0xD3L, 5UL), (VECTOR(uint8_t, 2))(0xD3L, 5UL), 0xD3L, 5UL, 0xD3L, 5UL);
        uint32_t ***l_223 = (void*)0;
        uint8_t *l_287[2];
        int64_t *l_303 = &p_1872->g_304;
        int i;
        for (i = 0; i < 2; i++)
            l_130[i] = &l_131;
        for (i = 0; i < 2; i++)
            l_287[i] = (void*)0;
        (*p_1872->g_132) = l_130[0];
    }
    if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_306.yxxxyxxyyxxxxyxx)).hi)))).s5 , ((VECTOR(int32_t, 8))(l_307.xyxxyxyy)).s4))
    { /* block id: 98 */
        int64_t **l_315 = (void*)0;
        int64_t **l_316[1];
        int64_t *l_319 = (void*)0;
        int32_t l_332[9];
        uint8_t *l_334 = &p_1872->g_113;
        uint16_t *l_336 = &l_228;
        int16_t *l_337 = &p_1872->g_116;
        int16_t *l_338 = &p_1872->g_18;
        int32_t *l_339[10][6] = {{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0},{(void*)0,&l_119,&l_332[4],&l_119,(void*)0,(void*)0}};
        uint32_t *l_368 = &p_1872->g_111;
        int32_t l_426 = 3L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_316[i] = &l_314;
        for (i = 0; i < 9; i++)
            l_332[i] = 5L;
        l_339[9][2] = (l_122 = ((*p_1872->g_265) = ((safe_add_func_int16_t_s_s(((*l_338) ^= (safe_mod_func_uint32_t_u_u(((((*l_337) |= (safe_mod_func_uint64_t_u_u(((p_1872->g_317 = l_314) == ((0x9DC0556BL <= ((VECTOR(int32_t, 2))(l_318.saa)).even) , l_319)), (p_1872->g_108 ^ (0x70L > (safe_mod_func_int64_t_s_s((p_1872->g_190.x = ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(((*l_336) = ((((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(p_1872->g_326.yxyxxyxx)), ((VECTOR(uint8_t, 16))((safe_rshift_func_int8_t_s_u((!(safe_mod_func_uint32_t_u_u((((*l_122) = l_331) <= l_332[6]), ((VECTOR(uint32_t, 4))(p_1872->g_333.s7604)).x))), 2)), ((l_334 != l_335) || l_332[7]), 251UL, 1UL, p_1872->g_333.s4, 0x6EL, ((VECTOR(uint8_t, 2))(0x7AL)), 0x8DL, 0x84L, ((VECTOR(uint8_t, 4))(1UL)), 0xF9L, 253UL)).even))).s6 , 4L) & 0x13L)), p_60)) || p_1872->g_111), l_332[4])) || 0L)), l_332[6]))))))) && 0x4B67L) && p_1872->g_comm_values[p_1872->tid]), p_60))), 65529UL)) , &l_332[5])));
        (*l_120) |= (safe_mod_func_uint8_t_u_u(p_1872->g_304, p_1872->g_113));
        for (l_212 = 21; (l_212 != (-11)); --l_212)
        { /* block id: 111 */
            (*l_122) = ((GROUP_DIVERGE(2, 1) , &p_1872->g_295) != &p_1872->g_95);
        }
        for (l_305 = (-11); (l_305 <= 23); l_305++)
        { /* block id: 116 */
            VECTOR(int16_t, 8) l_354 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x1D59L), 0x1D59L), 0x1D59L, 2L, 0x1D59L);
            uint32_t ***l_371 = &p_1872->g_133;
            uint32_t **l_375 = &p_1872->g_134;
            int32_t l_400 = 0x39386475L;
            int32_t l_401 = 0x53DAC444L;
            VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(0x7F7C6BC4L, (VECTOR(int32_t, 4))(0x7F7C6BC4L, (VECTOR(int32_t, 2))(0x7F7C6BC4L, 0x3E30F3F1L), 0x3E30F3F1L), 0x3E30F3F1L, 0x7F7C6BC4L, 0x3E30F3F1L, (VECTOR(int32_t, 2))(0x7F7C6BC4L, 0x3E30F3F1L), (VECTOR(int32_t, 2))(0x7F7C6BC4L, 0x3E30F3F1L), 0x7F7C6BC4L, 0x3E30F3F1L, 0x7F7C6BC4L, 0x3E30F3F1L);
            int i;
            for (l_235 = 0; (l_235 == 21); l_235++)
            { /* block id: 119 */
                int32_t *l_348 = &l_119;
                l_339[0][1] = l_348;
            }
            for (l_331 = 0; (l_331 > 37); l_331 = safe_add_func_int16_t_s_s(l_331, 7))
            { /* block id: 124 */
                return (*p_1872->g_187);
            }
            if ((safe_lshift_func_uint8_t_u_u(p_57, (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_353.s24)).yxyy)).z , (((VECTOR(int64_t, 2))((-1L), 0x7559F17BF1807C7FL)).even & (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_354.s36)))).even >= ((safe_mod_func_uint32_t_u_u(p_60, (0x4AF55B2A7CC61FBEL || (safe_mul_func_int8_t_s_s(5L, (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_361.sa3583bd034a12725)).s3, 7))))))) , (GROUP_DIVERGE(2, 1) , ((safe_lshift_func_int8_t_s_u(p_57, p_57)) || (safe_mod_func_int64_t_s_s(((~((safe_mul_func_uint8_t_u_u(((l_368 = l_339[5][5]) != (void*)0), (safe_sub_func_uint64_t_u_u(2UL, p_60)))) >= p_60)) , (*l_118)), l_354.s2)))))))))))
            { /* block id: 128 */
                uint32_t ****l_372 = &l_371;
                VECTOR(uint32_t, 4) l_378 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x91E353ABL), 0x91E353ABL);
                int32_t l_399 = 6L;
                uint32_t l_403 = 1UL;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1872->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[(safe_mod_func_uint32_t_u_u((((((*l_372) = l_371) != (void*)0) | (safe_rshift_func_int8_t_s_s((-9L), ((0xB07397FF54A15C8CL | ((&p_1872->g_134 == l_375) | (((safe_div_func_uint32_t_u_u(((((VECTOR(uint32_t, 8))(l_378.zzwwxzxx)).s4 <= (((safe_sub_func_int8_t_s_s((0x5FL & ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*l_121) , (0xE5DAF8DDL & p_1872->g_385)), 2)), GROUP_DIVERGE(0, 1))) , 0x61L)), p_1872->g_385)) <= 0x30E06A7DL) < 255UL)) == p_60), p_60)) < (*l_121)) <= p_57))) && 0xBA4C86FCE4B269A4L)))) , 0x74A82D6BL), 10))][(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))]));
                if ((atomic_inc(&p_1872->l_atomic_input[3]) == 8))
                { /* block id: 134 */
                    int32_t l_386 = 0x19C50412L;
                    for (l_386 = 0; (l_386 <= 9); ++l_386)
                    { /* block id: 137 */
                        int64_t l_389 = 0x590E1CA6B990DF19L;
                        VECTOR(uint32_t, 4) l_390 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
                        uint64_t l_391[4][9][7] = {{{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL}},{{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL}},{{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL}},{{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL},{9UL,0x1480D2A5A22073FCL,1UL,0x8132AFD83F579C8DL,0xA22D6C9223B54076L,18446744073709551611UL,2UL}}};
                        uint8_t l_392 = 0x86L;
                        VECTOR(int32_t, 2) l_393 = (VECTOR(int32_t, 2))(0x518EE104L, 0x63C31E38L);
                        uint64_t l_394 = 9UL;
                        int64_t l_395 = (-6L);
                        uint32_t l_396 = 0x68089AC5L;
                        int i, j, k;
                        l_395 = ((l_389 , ((l_392 &= (l_391[2][6][3] = l_390.y)) , 0L)) , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_393.yyxy)))).x , l_394));
                        --l_396;
                    }
                    unsigned int result = 0;
                    result += l_386;
                    atomic_add(&p_1872->l_special_values[3], result);
                }
                else
                { /* block id: 143 */
                    (1 + 1);
                }
                l_403--;
            }
            else
            { /* block id: 147 */
                int32_t ***l_406 = (void*)0;
                int64_t *l_422 = (void*)0;
                int64_t **l_421 = &l_422;
                int32_t *l_423 = &p_1872->g_424[4][1][1];
                (*l_120) ^= ((((l_406 != l_406) < (safe_rshift_func_uint16_t_u_s((--(*l_336)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_411.s5617)).xwxyxxyz)).odd, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(0x5DECL, (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s(((safe_add_func_int64_t_s_s(p_57, p_1872->g_125.w)) , (p_1872->g_comm_values[p_1872->tid] ^ ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((safe_unary_minus_func_int16_t_s((((((*l_421) = &p_1872->g_304) == (GROUP_DIVERGE(1, 1) , p_58)) < (((*l_423) = ((VECTOR(int32_t, 2))(0x12B66C0BL, 0L)).hi) , ((((safe_unary_minus_func_int8_t_s(6L)) || (**p_1872->g_265)) < p_1872->g_113) , FAKE_DIVERGE(p_1872->group_2_offset, get_group_id(2), 10)))) , p_60))), ((VECTOR(int64_t, 2))(0x0C95A2D97DEE2A0FL)), p_60, p_1872->g_113, 1L, 1L, 0x6AD7E54EA15CFD56L)).even)).zyxwxywwyxywzxwx, ((VECTOR(int64_t, 16))((-8L)))))).s2f)).yxyxxxxxxyxxxxyy, ((VECTOR(int64_t, 16))(0L))))).hi)).even, ((VECTOR(int64_t, 4))(0x048E8005B0D64985L))))).w)), p_60)) | p_1872->g_70), 0xCC1B72A662529F20L)), p_57)), 0L, p_1872->g_108, (-1L), ((VECTOR(int16_t, 2))(0x637BL)), ((VECTOR(int16_t, 8))(1L)), 0x34F7L)).lo, ((VECTOR(int16_t, 8))(0x151AL)), ((VECTOR(int16_t, 8))(6L))))).odd, ((VECTOR(int16_t, 4))(0x3930L)))))))).y))) || p_1872->g_292) , (*p_1872->g_93));
            }
            --p_1872->g_427;
        }
    }
    else
    { /* block id: 155 */
        VECTOR(int32_t, 8) l_439 = (VECTOR(int32_t, 8))(0x105F560CL, (VECTOR(int32_t, 4))(0x105F560CL, (VECTOR(int32_t, 2))(0x105F560CL, 1L), 1L), 1L, 0x105F560CL, 1L);
        VECTOR(int8_t, 16) l_440 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int8_t, 2))((-1L), 6L), (VECTOR(int8_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
        int8_t *l_441 = &p_1872->g_95;
        uint32_t *l_442 = &p_1872->g_108;
        int16_t l_443 = 0x0B30L;
        int i;
        (*l_120) ^= ((((+(safe_mod_func_int32_t_s_s((((((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(1L, l_438)) || ((VECTOR(int32_t, 4))(l_439.s0332)).x), ((*l_441) = ((VECTOR(int8_t, 16))(l_440.s7e80fbd6015e6f56)).s3))) || (0x4DL && ((((l_440.s1 , (((*l_441) = p_1872->g_124) | ((*l_335) = 0xECL))) & p_1872->g_111) , (l_442 != l_442)) , 251UL))), p_1872->g_108)) > p_1872->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1872->tid, 24))]) >= l_443) , l_440.s2) || (*l_118)), l_440.s9))) , l_439.s1) != p_57) | p_1872->g_267);
        if ((atomic_inc(&p_1872->l_atomic_input[7]) == 4))
        { /* block id: 161 */
            uint32_t l_444 = 4294967295UL;
            uint32_t l_712 = 3UL;
            uint8_t l_715 = 0xAAL;
            VECTOR(int32_t, 16) l_716 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x4D6598D0L), 0x4D6598D0L), 0x4D6598D0L, 7L, 0x4D6598D0L, (VECTOR(int32_t, 2))(7L, 0x4D6598D0L), (VECTOR(int32_t, 2))(7L, 0x4D6598D0L), 7L, 0x4D6598D0L, 7L, 0x4D6598D0L);
            int64_t l_746[8][6][5] = {{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}},{{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)},{0x0C682E84E6C51CE1L,0x48E330BBB8DB766EL,0x787124F79EA8C893L,0x359336EC33CD16A2L,(-1L)}}};
            int i, j, k;
            if (l_444)
            { /* block id: 162 */
                VECTOR(int64_t, 8) l_445 = (VECTOR(int64_t, 8))(0x0F65F2EC578D01ADL, (VECTOR(int64_t, 4))(0x0F65F2EC578D01ADL, (VECTOR(int64_t, 2))(0x0F65F2EC578D01ADL, 0x59A7E1DFB3079303L), 0x59A7E1DFB3079303L), 0x59A7E1DFB3079303L, 0x0F65F2EC578D01ADL, 0x59A7E1DFB3079303L);
                VECTOR(int32_t, 2) l_446 = (VECTOR(int32_t, 2))((-1L), 0x2121A2EBL);
                uint8_t l_447 = 252UL;
                int16_t l_448[4] = {0x4347L,0x4347L,0x4347L,0x4347L};
                uint8_t l_449 = 0x15L;
                VECTOR(int32_t, 2) l_450 = (VECTOR(int32_t, 2))(0x097A9AF5L, (-7L));
                VECTOR(int32_t, 4) l_451 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x0EA6DABBL), 0x0EA6DABBL);
                uint32_t l_452 = 1UL;
                uint32_t l_453[1];
                int8_t l_454 = (-5L);
                int8_t l_455 = (-7L);
                VECTOR(int16_t, 16) l_456 = (VECTOR(int16_t, 16))(0x745DL, (VECTOR(int16_t, 4))(0x745DL, (VECTOR(int16_t, 2))(0x745DL, 0x0879L), 0x0879L), 0x0879L, 0x745DL, 0x0879L, (VECTOR(int16_t, 2))(0x745DL, 0x0879L), (VECTOR(int16_t, 2))(0x745DL, 0x0879L), 0x745DL, 0x0879L, 0x745DL, 0x0879L);
                uint32_t l_457 = 7UL;
                int32_t l_458 = 0x488A89E0L;
                uint16_t l_459[7];
                uint32_t l_460 = 0x0BECA207L;
                int32_t l_581 = 0x75CC6BCAL;
                int32_t l_582[3];
                int i;
                for (i = 0; i < 1; i++)
                    l_453[i] = 0x7C98A9FDL;
                for (i = 0; i < 7; i++)
                    l_459[i] = 2UL;
                for (i = 0; i < 3; i++)
                    l_582[i] = (-3L);
                if ((l_460 ^= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(l_445.s25)).xxxyxxxy, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-1L), 1L, (-1L), 0x5BDBDECFL)).wxxyyzwx)).s21, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), (-3L), 0x124CAEDEL, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_446.xyxx)), (-1L), (l_447 , (l_448[3] , l_449)), 5L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_450.xx)))), 8L, (-1L))).odd)).yyyxyxyy))), 0x2BBC545FL, 1L, ((VECTOR(int32_t, 4))(l_451.wwwz)), (-9L), 0L)).s1756)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), l_452, 0x6409F8CBL, (-3L))))).zzyzxyxw)).odd, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_453[0], l_454, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))((l_455 , (-6L)), 0x0BC3AC4FL, 0L, (-9L), 1L, ((VECTOR(int32_t, 2))(0x38995B25L)), 0x6DFBAB61L, 0x68ACD8B2L, ((VECTOR(int32_t, 4))(5L)), 0x6DAD8C53L, 1L, (-8L))), (int32_t)(-1L), (int32_t)l_456.se))).s92ff, ((VECTOR(int32_t, 4))(0x7380F93FL))))), 7L, 0L, (-7L), 0x7CFCFA3AL)).hi)), 0x098A0887L, ((VECTOR(int32_t, 8))(0x68146B0BL)), 0x2ECFA0DCL)).s48ab, ((VECTOR(int32_t, 4))(0L))))).odd, ((VECTOR(int32_t, 2))(0x7BB4D0ADL))))), ((VECTOR(int32_t, 2))(0x4CC3F7FBL))))).xyxx))).x, ((VECTOR(int32_t, 2))(0x39694454L)), (-1L), 0x1B406722L)).s7, ((VECTOR(int32_t, 4))(0x09C1107DL)), l_457, 0x0AAD2AD6L, 5L)), l_458, 0L, 0L, (-1L), ((VECTOR(int32_t, 4))(1L)))).sa7))).yxyyyxyx, ((VECTOR(int32_t, 8))(0x63016100L)), ((VECTOR(int32_t, 8))(0x14CEAFF3L))))).s22, ((VECTOR(int32_t, 2))((-1L)))))).xxyyyyyy)).odd, ((VECTOR(uint32_t, 4))(0xC922509BL))))).wxzwwyxy, ((VECTOR(int64_t, 8))(0L))))).s7510240101115476)).s5 , l_459[5])))
                { /* block id: 164 */
                    int32_t l_461 = 0x79BC03F2L;
                    int32_t l_463[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t *l_462 = &l_463[2];
                    int32_t *l_464 = &l_463[5];
                    uint8_t l_465[5];
                    VECTOR(int32_t, 4) l_466 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L);
                    VECTOR(int32_t, 8) l_467 = (VECTOR(int32_t, 8))(0x4213781DL, (VECTOR(int32_t, 4))(0x4213781DL, (VECTOR(int32_t, 2))(0x4213781DL, 0L), 0L), 0L, 0x4213781DL, 0L);
                    VECTOR(int32_t, 16) l_468 = (VECTOR(int32_t, 16))(0x6E9F8952L, (VECTOR(int32_t, 4))(0x6E9F8952L, (VECTOR(int32_t, 2))(0x6E9F8952L, 7L), 7L), 7L, 0x6E9F8952L, 7L, (VECTOR(int32_t, 2))(0x6E9F8952L, 7L), (VECTOR(int32_t, 2))(0x6E9F8952L, 7L), 0x6E9F8952L, 7L, 0x6E9F8952L, 7L);
                    VECTOR(int32_t, 8) l_469 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                    int i;
                    for (i = 0; i < 5; i++)
                        l_465[i] = 1UL;
                    l_464 = (l_461 , l_462);
                    if ((l_465[1] , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(l_466.zwwwwzxy)).s1, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x2BE8C534L)), ((VECTOR(int32_t, 8))(0x5FCF6F0BL, ((VECTOR(int32_t, 8))(l_467.s20504073)).s6, 0L, 0x388C7505L, 0x6B1A80D3L, ((VECTOR(int32_t, 2))(1L, 0x36A7561DL)), 0x31A81972L)), 2L, 0x7187AC9DL, ((VECTOR(int32_t, 2))(l_468.s6b)), (-1L), (-5L))).s6bf9)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_469.s6765670266435042)).hi)), 0x3053A24BL, 0x4B5690E7L)).sdd)).lo))
                    { /* block id: 166 */
                        int32_t l_471 = (-8L);
                        int32_t *l_470 = &l_471;
                        int32_t *l_472[7][1] = {{&l_471},{&l_471},{&l_471},{&l_471},{&l_471},{&l_471},{&l_471}};
                        int i, j;
                        l_464 = (l_462 = (void*)0);
                        l_462 = l_470;
                        l_462 = l_472[3][0];
                    }
                    else
                    { /* block id: 171 */
                        uint16_t l_473 = 1UL;
                        uint8_t l_474 = 255UL;
                        VECTOR(int64_t, 16) l_475 = (VECTOR(int64_t, 16))(0x5810F51F9B399C48L, (VECTOR(int64_t, 4))(0x5810F51F9B399C48L, (VECTOR(int64_t, 2))(0x5810F51F9B399C48L, (-3L)), (-3L)), (-3L), 0x5810F51F9B399C48L, (-3L), (VECTOR(int64_t, 2))(0x5810F51F9B399C48L, (-3L)), (VECTOR(int64_t, 2))(0x5810F51F9B399C48L, (-3L)), 0x5810F51F9B399C48L, (-3L), 0x5810F51F9B399C48L, (-3L));
                        uint32_t l_476 = 0x8FDAE7A3L;
                        int i;
                        l_474 = ((*l_464) ^= l_473);
                        l_467.s3 = ((*l_464) &= (((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_475.s2b)).yxxyyyyxxyyyyxyy)).s1a, ((VECTOR(int64_t, 2))(0x635013C8B39C4709L, 0x53D61BDEADE6E5E3L))))).even , 0x2B6DA1CAL));
                        (*l_464) = l_476;
                    }
                    for (l_467.s4 = 4; (l_467.s4 == 20); ++l_467.s4)
                    { /* block id: 180 */
                        uint32_t l_479 = 0x39878790L;
                        int32_t *l_482 = (void*)0;
                        ++l_479;
                        l_464 = l_482;
                        l_466.w &= (-1L);
                    }
                    l_458 = 0x20E249E6L;
                }
                else
                { /* block id: 186 */
                    int32_t l_483 = (-7L);
                    int32_t *l_495 = &l_483;
                    for (l_483 = 0; (l_483 < 7); ++l_483)
                    { /* block id: 189 */
                        VECTOR(int32_t, 16) l_486 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                        VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))(0x4D7CB336L, (VECTOR(int32_t, 4))(0x4D7CB336L, (VECTOR(int32_t, 2))(0x4D7CB336L, 0x049BBD31L), 0x049BBD31L), 0x049BBD31L, 0x4D7CB336L, 0x049BBD31L, (VECTOR(int32_t, 2))(0x4D7CB336L, 0x049BBD31L), (VECTOR(int32_t, 2))(0x4D7CB336L, 0x049BBD31L), 0x4D7CB336L, 0x049BBD31L, 0x4D7CB336L, 0x049BBD31L);
                        VECTOR(int32_t, 8) l_488 = (VECTOR(int32_t, 8))(0x20862CB0L, (VECTOR(int32_t, 4))(0x20862CB0L, (VECTOR(int32_t, 2))(0x20862CB0L, 0x6CFCAF57L), 0x6CFCAF57L), 0x6CFCAF57L, 0x20862CB0L, 0x6CFCAF57L);
                        int32_t *l_489[1];
                        int32_t *l_490[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_491 = (void*)0;
                        int32_t *l_492 = (void*)0;
                        int32_t *l_493 = (void*)0;
                        uint32_t l_494 = 4294967295UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_489[i] = (void*)0;
                        l_458 &= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_486.sd45f)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_487.sf6fdc5f9)), 1L, ((VECTOR(int32_t, 4))(l_488.s7615)), 0x6E56FB28L, 1L, 1L)).sc4c8))).y;
                        l_491 = (l_490[7] = l_489[0]);
                        l_493 = l_492;
                        l_458 = ((FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10) , ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 1UL, 0x395B17F5805D818EL, 0x7BCA7401381705B8L)).lo)).even) , l_494);
                    }
                    l_495 = (void*)0;
                    for (l_483 = (-3); (l_483 > 2); l_483 = safe_add_func_int8_t_s_s(l_483, 9))
                    { /* block id: 199 */
                        uint64_t l_498 = 18446744073709551607UL;
                        VECTOR(int32_t, 8) l_499 = (VECTOR(int32_t, 8))(0x6AB1B08BL, (VECTOR(int32_t, 4))(0x6AB1B08BL, (VECTOR(int32_t, 2))(0x6AB1B08BL, 0x5CFB2305L), 0x5CFB2305L), 0x5CFB2305L, 0x6AB1B08BL, 0x5CFB2305L);
                        VECTOR(int64_t, 8) l_500 = (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x340AF6DE9B35411EL), 0x340AF6DE9B35411EL), 0x340AF6DE9B35411EL, 7L, 0x340AF6DE9B35411EL);
                        VECTOR(uint32_t, 4) l_501 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x6C300E29L), 0x6C300E29L);
                        uint32_t l_502[7];
                        int16_t l_503 = 0x64B8L;
                        int16_t l_504[5] = {0x3B93L,0x3B93L,0x3B93L,0x3B93L,0x3B93L};
                        VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 8L), 8L), 8L, 3L, 8L);
                        VECTOR(int32_t, 8) l_506 = (VECTOR(int32_t, 8))(0x05049B3EL, (VECTOR(int32_t, 4))(0x05049B3EL, (VECTOR(int32_t, 2))(0x05049B3EL, 0x6180B08FL), 0x6180B08FL), 0x6180B08FL, 0x05049B3EL, 0x6180B08FL);
                        VECTOR(int32_t, 4) l_507 = (VECTOR(int32_t, 4))(0x7796FF47L, (VECTOR(int32_t, 2))(0x7796FF47L, 0x43D04E26L), 0x43D04E26L);
                        VECTOR(int32_t, 16) l_508 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x08B56258L), 0x08B56258L), 0x08B56258L, (-10L), 0x08B56258L, (VECTOR(int32_t, 2))((-10L), 0x08B56258L), (VECTOR(int32_t, 2))((-10L), 0x08B56258L), (-10L), 0x08B56258L, (-10L), 0x08B56258L);
                        VECTOR(int32_t, 16) l_509 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L), (VECTOR(int32_t, 2))((-4L), (-1L)), (VECTOR(int32_t, 2))((-4L), (-1L)), (-4L), (-1L), (-4L), (-1L));
                        uint8_t l_510 = 0xD9L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_502[i] = 0x993EDD96L;
                        l_458 = (l_498 , (l_499.s2 = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_499.s73215561)).s31, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(0x2F0201BEL, l_500.s0, 0x015DFC92L, ((VECTOR(int32_t, 2))(0x7A1F455BL, (-1L))), ((l_502[5] = l_501.w) , 0x1B44F803L), 0x07811EE6L, 0x22E52195L)).s0012555371710124, (int32_t)0x77C50C23L))).s69))).lo));
                        l_458 = ((l_503 , l_504[3]) , (-1L));
                        l_510 = (l_458 = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_505.s2047)).xzzyyzwywywxxzxx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_506.s55776731)).s50)).yyyyxyxx, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_507.wwyzwwxzxwzwxwwz)).lo)), (int32_t)(l_505.s2 = 0x677223E7L)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x683F8AF6L, 0x0490F9E8L)).yyyxxxxy)))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_508.sc4e30d97)).s75)).yxyy))).yzyxwzyxzwzxzyzw)).odd))).s0276743167236375))), ((VECTOR(int32_t, 16))(l_509.s0963ac752fda74a4)), ((VECTOR(int32_t, 2))(0L, 0x01837315L)).xyxyyyyyyyyyyyxy))).sb);
                    }
                    for (l_483 = 0; (l_483 > 24); l_483 = safe_add_func_int64_t_s_s(l_483, 2))
                    { /* block id: 210 */
                        int16_t l_513 = 0x4C76L;
                        int32_t l_514[4];
                        int8_t l_515 = 6L;
                        int64_t l_516 = 6L;
                        uint64_t l_517 = 0xA5E9553B120D8C35L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_514[i] = 1L;
                        l_517--;
                    }
                }
                if ((l_458 = 0L))
                { /* block id: 215 */
                    VECTOR(int32_t, 2) l_520 = (VECTOR(int32_t, 2))(0x21993973L, 0x6A617533L);
                    int32_t l_521 = 0x526983B4L;
                    VECTOR(uint64_t, 2) l_522 = (VECTOR(uint64_t, 2))(4UL, 0xB1C14E1AA4A55B05L);
                    uint32_t l_523 = 4294967295UL;
                    VECTOR(uint64_t, 2) l_524 = (VECTOR(uint64_t, 2))(0xBEFB3E06F4BE78A0L, 18446744073709551615UL);
                    VECTOR(uint64_t, 16) l_525 = (VECTOR(uint64_t, 16))(0x908DDFDF7DC65B0CL, (VECTOR(uint64_t, 4))(0x908DDFDF7DC65B0CL, (VECTOR(uint64_t, 2))(0x908DDFDF7DC65B0CL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0x908DDFDF7DC65B0CL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(0x908DDFDF7DC65B0CL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(0x908DDFDF7DC65B0CL, 18446744073709551608UL), 0x908DDFDF7DC65B0CL, 18446744073709551608UL, 0x908DDFDF7DC65B0CL, 18446744073709551608UL);
                    int32_t l_526[7] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                    int32_t l_527 = 0x50290DF8L;
                    VECTOR(uint32_t, 16) l_528 = (VECTOR(uint32_t, 16))(0xE0F67733L, (VECTOR(uint32_t, 4))(0xE0F67733L, (VECTOR(uint32_t, 2))(0xE0F67733L, 5UL), 5UL), 5UL, 0xE0F67733L, 5UL, (VECTOR(uint32_t, 2))(0xE0F67733L, 5UL), (VECTOR(uint32_t, 2))(0xE0F67733L, 5UL), 0xE0F67733L, 5UL, 0xE0F67733L, 5UL);
                    uint16_t l_529 = 4UL;
                    uint8_t l_530 = 0xF3L;
                    VECTOR(uint32_t, 2) l_531 = (VECTOR(uint32_t, 2))(0x7B58B6E5L, 0xB2BD5BBBL);
                    VECTOR(uint32_t, 16) l_532 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x640F1EAFL), 0x640F1EAFL), 0x640F1EAFL, 4294967287UL, 0x640F1EAFL, (VECTOR(uint32_t, 2))(4294967287UL, 0x640F1EAFL), (VECTOR(uint32_t, 2))(4294967287UL, 0x640F1EAFL), 4294967287UL, 0x640F1EAFL, 4294967287UL, 0x640F1EAFL);
                    VECTOR(uint32_t, 4) l_533 = (VECTOR(uint32_t, 4))(0x2A5BDAD4L, (VECTOR(uint32_t, 2))(0x2A5BDAD4L, 4294967293UL), 4294967293UL);
                    VECTOR(uint32_t, 2) l_534 = (VECTOR(uint32_t, 2))(0x0CFF06FDL, 4294967295UL);
                    int8_t l_535 = 0x00L;
                    VECTOR(uint32_t, 16) l_536 = (VECTOR(uint32_t, 16))(0x7B8B796FL, (VECTOR(uint32_t, 4))(0x7B8B796FL, (VECTOR(uint32_t, 2))(0x7B8B796FL, 0x5A426898L), 0x5A426898L), 0x5A426898L, 0x7B8B796FL, 0x5A426898L, (VECTOR(uint32_t, 2))(0x7B8B796FL, 0x5A426898L), (VECTOR(uint32_t, 2))(0x7B8B796FL, 0x5A426898L), 0x7B8B796FL, 0x5A426898L, 0x7B8B796FL, 0x5A426898L);
                    int64_t l_537[3][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
                    uint16_t l_538 = 0UL;
                    uint64_t l_539 = 18446744073709551613UL;
                    int16_t l_540 = 0L;
                    uint8_t l_541 = 255UL;
                    VECTOR(int32_t, 16) l_542 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5018BA3EL), 0x5018BA3EL), 0x5018BA3EL, (-7L), 0x5018BA3EL, (VECTOR(int32_t, 2))((-7L), 0x5018BA3EL), (VECTOR(int32_t, 2))((-7L), 0x5018BA3EL), (-7L), 0x5018BA3EL, (-7L), 0x5018BA3EL);
                    VECTOR(int32_t, 16) l_543 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x372EB7F0L), 0x372EB7F0L), 0x372EB7F0L, 1L, 0x372EB7F0L, (VECTOR(int32_t, 2))(1L, 0x372EB7F0L), (VECTOR(int32_t, 2))(1L, 0x372EB7F0L), 1L, 0x372EB7F0L, 1L, 0x372EB7F0L);
                    VECTOR(int32_t, 2) l_544 = (VECTOR(int32_t, 2))(0L, 0x6EE377AAL);
                    VECTOR(int32_t, 16) l_545 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x3844E430L), 0x3844E430L), 0x3844E430L, (-9L), 0x3844E430L, (VECTOR(int32_t, 2))((-9L), 0x3844E430L), (VECTOR(int32_t, 2))((-9L), 0x3844E430L), (-9L), 0x3844E430L, (-9L), 0x3844E430L);
                    int64_t l_546 = (-9L);
                    VECTOR(int32_t, 8) l_547 = (VECTOR(int32_t, 8))(0x3D0FB88AL, (VECTOR(int32_t, 4))(0x3D0FB88AL, (VECTOR(int32_t, 2))(0x3D0FB88AL, 0L), 0L), 0L, 0x3D0FB88AL, 0L);
                    VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x73B72671L), 0x73B72671L);
                    VECTOR(int32_t, 16) l_549 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x71B417F2L), 0x71B417F2L), 0x71B417F2L, 4L, 0x71B417F2L, (VECTOR(int32_t, 2))(4L, 0x71B417F2L), (VECTOR(int32_t, 2))(4L, 0x71B417F2L), 4L, 0x71B417F2L, 4L, 0x71B417F2L);
                    uint32_t l_550[4] = {1UL,1UL,1UL,1UL};
                    VECTOR(int32_t, 8) l_551 = (VECTOR(int32_t, 8))(0x25DAC56BL, (VECTOR(int32_t, 4))(0x25DAC56BL, (VECTOR(int32_t, 2))(0x25DAC56BL, 0x47F29D28L), 0x47F29D28L), 0x47F29D28L, 0x25DAC56BL, 0x47F29D28L);
                    uint64_t l_552[6][4][5] = {{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}},{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}},{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}},{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}},{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}},{{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL},{0UL,0x86367C7F76A6972BL,0UL,0x8D99BE668C6BA496L,1UL}}};
                    int16_t l_553 = 0x7783L;
                    uint8_t l_554 = 0UL;
                    VECTOR(uint64_t, 16) l_555 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                    VECTOR(uint64_t, 4) l_556 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x07058417FBF440C3L), 0x07058417FBF440C3L);
                    VECTOR(uint64_t, 8) l_557 = (VECTOR(uint64_t, 8))(0x971E486BD5E242D2L, (VECTOR(uint64_t, 4))(0x971E486BD5E242D2L, (VECTOR(uint64_t, 2))(0x971E486BD5E242D2L, 0UL), 0UL), 0UL, 0x971E486BD5E242D2L, 0UL);
                    VECTOR(uint64_t, 16) l_558 = (VECTOR(uint64_t, 16))(0xD95A559F228DBDD4L, (VECTOR(uint64_t, 4))(0xD95A559F228DBDD4L, (VECTOR(uint64_t, 2))(0xD95A559F228DBDD4L, 4UL), 4UL), 4UL, 0xD95A559F228DBDD4L, 4UL, (VECTOR(uint64_t, 2))(0xD95A559F228DBDD4L, 4UL), (VECTOR(uint64_t, 2))(0xD95A559F228DBDD4L, 4UL), 0xD95A559F228DBDD4L, 4UL, 0xD95A559F228DBDD4L, 4UL);
                    uint16_t l_559 = 0xA220L;
                    uint16_t l_560[5] = {0x7A33L,0x7A33L,0x7A33L,0x7A33L,0x7A33L};
                    int32_t l_561[10] = {8L,0x651F407CL,(-1L),0x651F407CL,8L,8L,0x651F407CL,(-1L),0x651F407CL,8L};
                    uint16_t l_562 = 0x8DC3L;
                    int32_t l_563 = 0x6203A734L;
                    int32_t *l_564 = (void*)0;
                    int i, j, k;
                    l_458 |= ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_520.yx)))).xxxy)).hi, (int32_t)(l_521 , (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_522.xyxx)).yyyxwxxyzyxwwxyw)).sd4, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0UL, 1UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x39F6E73FE1AAD818L)), l_523, GROUP_DIVERGE(1, 1), 5UL, ((VECTOR(uint64_t, 4))(l_524.xxxx)), ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(0UL, 0x11B2FD699BEDC931L)), ((VECTOR(uint64_t, 16))(l_525.s04563007b898c788)).s52))), 18446744073709551606UL, 0xE54B3024B0C67E73L, 2UL)).s9b8d)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967292UL)))), ((VECTOR(uint32_t, 8))(6UL, 0x65CE95F4L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 8))((l_526[4] , l_527), 4294967289UL, ((VECTOR(uint32_t, 8))(l_528.sfda244d5)).s3, (GROUP_DIVERGE(0, 1) , l_529), ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(0x69A736B2L, l_530, 9UL, 4294967289UL)).hi, ((VECTOR(uint32_t, 2))(l_531.yy))))), 0x0C5E9B8AL, 0x8F95EBD2L)).s3412335275545460))).lo, (uint32_t)((VECTOR(uint32_t, 4))(l_532.sc7eb)).z, (uint32_t)GROUP_DIVERGE(1, 1)))).s7547504244370663, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(l_533.yyxw)), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(l_534.yyyyyxyyyxxyxxyx)).sf8, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x2E679BF9L, l_535, 0x1EADB607L, (l_526[6] = 0x53F34B6AL), 0L, l_536.s1, 1L, 0x123E5B78L, 0x64F05FBDL, 5L, 0x4CAE0061L, 6L, l_537[2][1], 3L, 0x48DF3936L, 0x61AA9ABAL))))))).sd372, (uint32_t)l_538))).even))).yyyxyxyy, ((VECTOR(uint32_t, 8))(0x8F1CF0CEL))))).hi))).zyyyzxwz, ((VECTOR(uint32_t, 8))(0x58F9E6A1L))))).odd)).yxzyyyzyyywxzzzx))).s16ce)).z, 1UL, ((VECTOR(uint32_t, 2))(0x06FD34F6L)), 4294967294UL, 0x87A42440L)).s44))), ((VECTOR(uint32_t, 2))(0x040F7D72L))))).yyxxxyyyxyxyxyyy)).sd4)).xxyy)).odd)).xyxx, ((VECTOR(uint64_t, 4))(18446744073709551613UL))))).odd))).yxxxxxxy)).s3 , l_539)), (int32_t)l_540))).hi;
                    l_458 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_541, 0x04EA5045L, 0x5F16BFE7L, 0x5F7C3C93L)).zyyxzzwxxyzxxwyw, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_542.s21c75ae1)).s60)).xxxy)).wwzwywzw)), ((VECTOR(int32_t, 8))(l_543.sdaff75bc)), ((VECTOR(int32_t, 2))(0x23D8D18DL, 6L)).xxyxyyxx))).s6, 0x7F9B9AA3L, 0x723120A5L, 1L)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_544.xy)), 0x42FCF978L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_545.sfa72a12bd82063c2)).s1458)).zzxxyyyx, (int32_t)l_546))).s03, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4874DD88L, 1L)).yyxxxyxyxxyyyyyx)).s3))), 1L, 2L, 0x1C1D5E69L)).odd)).odd, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_547.s3253)).zwxxwzwz, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_548.xwww)).odd))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_549.sfdaf)).xywywzzxywwxxwxw)).s04))), 0L)).xzwxwwzx))).s7157275745475554, (int32_t)((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((l_553 &= ((l_550[0] = FAKE_DIVERGE(p_1872->local_2_offset, get_local_id(2), 10)) , (l_445.s2 &= (((VECTOR(int32_t, 2))(l_551.s76)).odd , l_552[4][1][3])))) , l_554), ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(0x55AC6B8888C7A976L, 1UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(l_555.s372ca7bb)), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_556.xw)), 18446744073709551612UL, 0x0EEF940EDE54D410L)))))).wyzwzwxwxxyzyzzw, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_557.s53500005)).odd)).lo, ((VECTOR(uint64_t, 4))(l_558.sd71b)).odd))).xxyyyyxxyxxyyyyx))).sa0a9, ((VECTOR(uint64_t, 4))(l_559, 18446744073709551609UL, 18446744073709551611UL, 0x85B1D82C53DD5018L)), ((VECTOR(uint64_t, 4))(0x645BF39E73483F6FL))))).xxzywwyw, ((VECTOR(uint64_t, 8))(0x33DC06628C529AEEL))))).s03)), 0x4D224DA3FAF5A83CL, ((VECTOR(uint64_t, 4))(0x7DF6DC9520BD6704L)), ((VECTOR(uint64_t, 4))(0x423C7140B2885A71L)), 0xAF7AFD2BC9FA6A9CL, 0xE8395BEB7BBD1977L, 18446744073709551615UL)))).s7a93))))).z, ((VECTOR(uint64_t, 2))(0x72167E23FB8B5851L)), ((VECTOR(uint64_t, 2))(18446744073709551612UL)), 0x2345C7C059EE6F25L, ((VECTOR(uint64_t, 2))(0xBEFB8429671189AFL)), 18446744073709551610UL, 0x323A98F1AAB58968L, 0xF685C30EAC612FA4L, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 18446744073709551607UL, 1UL)).s3c5e, ((VECTOR(uint64_t, 4))(0x0063A5CB0105066EL))))).zxwwzxxxywwwzyxx, ((VECTOR(uint64_t, 16))(0x78EB8E9C7C7BED70L))))).odd, ((VECTOR(uint64_t, 8))(0x52F539918ED021D8L))))).s0 , 0x6CL) , l_560[4])))).sfc, ((VECTOR(int32_t, 2))(0x79172F56L))))).xyxxyyyyyxyyyxxy, ((VECTOR(int32_t, 16))((-1L)))))).saadb)).lo, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0L))))), 0x717778BDL, 1L)), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-8L))))))))).xzzwwzzxxzwxxyyy))).sef)).hi, 0L, l_561[2], (-4L), 1L, l_562, ((VECTOR(int32_t, 8))(0x5B34B88DL)), 0x0466BECAL, 1L)).s2;
                    l_564 = (l_563 , l_564);
                }
                else
                { /* block id: 223 */
                    int32_t l_565 = 0x2FAB9604L;
                    l_458 ^= (-1L);
                    l_458 = l_565;
                }
                for (l_448[3] = 25; (l_448[3] < 29); ++l_448[3])
                { /* block id: 229 */
                    int32_t l_568[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_568[i] = 0x1E081DDCL;
                    for (l_568[5] = 0; (l_568[5] != (-17)); l_568[5]--)
                    { /* block id: 232 */
                        int8_t l_571 = 0x5FL;
                        VECTOR(int8_t, 8) l_572 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                        VECTOR(int8_t, 8) l_573 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x14L), 0x14L), 0x14L, (-4L), 0x14L);
                        int64_t l_574 = 5L;
                        int64_t l_575 = 0x4D375C357D8A9F2FL;
                        uint32_t l_576 = 7UL;
                        uint32_t l_579 = 7UL;
                        int16_t l_580 = 0x6619L;
                        int i;
                        l_576--;
                        l_458 = ((l_452 = l_579) , l_580);
                    }
                }
                if ((l_581 , l_582[0]))
                { /* block id: 238 */
                    int32_t l_583 = (-10L);
                    int16_t l_637[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_637[i][j] = 0x26FBL;
                    }
                    if (l_583)
                    { /* block id: 239 */
                        int64_t l_584 = (-2L);
                        VECTOR(int32_t, 8) l_585 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x45623B02L), 0x45623B02L), 0x45623B02L, (-7L), 0x45623B02L);
                        VECTOR(int32_t, 16) l_586 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int32_t, 2))((-10L), 1L), (VECTOR(int32_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L);
                        int32_t l_587[3][5][7] = {{{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L}},{{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L}},{{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L},{0x11981A8DL,0x4F32A44EL,(-8L),0L,(-3L),(-3L),0L}}};
                        VECTOR(int32_t, 8) l_588 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L));
                        int64_t l_589[7] = {1L,1L,1L,1L,1L,1L,1L};
                        int32_t l_590 = 0x387EDCF0L;
                        int8_t l_591 = 0x44L;
                        uint8_t l_592 = 255UL;
                        int32_t l_593 = (-1L);
                        int32_t l_594 = 1L;
                        VECTOR(int32_t, 4) l_595 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L);
                        VECTOR(int32_t, 16) l_596 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-7L)), (-7L)), (-7L), (-2L), (-7L), (VECTOR(int32_t, 2))((-2L), (-7L)), (VECTOR(int32_t, 2))((-2L), (-7L)), (-2L), (-7L), (-2L), (-7L));
                        VECTOR(int64_t, 2) l_597 = (VECTOR(int64_t, 2))(0x577DB481F68FF0A8L, 0x14DC067CFEB5B8CEL);
                        int16_t l_598 = 0x5306L;
                        VECTOR(int64_t, 16) l_599 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        VECTOR(int64_t, 4) l_600 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1A7F38C9D6367BC2L), 0x1A7F38C9D6367BC2L);
                        VECTOR(int64_t, 8) l_601 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x67451120678194D2L), 0x67451120678194D2L), 0x67451120678194D2L, 0L, 0x67451120678194D2L);
                        VECTOR(int64_t, 4) l_602 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L);
                        VECTOR(int64_t, 16) l_603 = (VECTOR(int64_t, 16))(0x204A39A81E1398CDL, (VECTOR(int64_t, 4))(0x204A39A81E1398CDL, (VECTOR(int64_t, 2))(0x204A39A81E1398CDL, 0x0D4D86F9D174262FL), 0x0D4D86F9D174262FL), 0x0D4D86F9D174262FL, 0x204A39A81E1398CDL, 0x0D4D86F9D174262FL, (VECTOR(int64_t, 2))(0x204A39A81E1398CDL, 0x0D4D86F9D174262FL), (VECTOR(int64_t, 2))(0x204A39A81E1398CDL, 0x0D4D86F9D174262FL), 0x204A39A81E1398CDL, 0x0D4D86F9D174262FL, 0x204A39A81E1398CDL, 0x0D4D86F9D174262FL);
                        VECTOR(int64_t, 8) l_604 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
                        int16_t l_605 = (-1L);
                        uint16_t l_606 = 0x4D9EL;
                        uint8_t l_607 = 253UL;
                        uint16_t l_608 = 0UL;
                        uint64_t l_609 = 4UL;
                        uint8_t l_610 = 0x8AL;
                        uint8_t l_611 = 255UL;
                        int32_t l_612 = (-2L);
                        uint32_t l_613 = 0x17460DC3L;
                        VECTOR(uint16_t, 16) l_614 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD3EAL), 0xD3EAL), 0xD3EAL, 65535UL, 0xD3EAL, (VECTOR(uint16_t, 2))(65535UL, 0xD3EAL), (VECTOR(uint16_t, 2))(65535UL, 0xD3EAL), 65535UL, 0xD3EAL, 65535UL, 0xD3EAL);
                        int8_t l_615 = (-8L);
                        int32_t l_616 = 1L;
                        int i, j, k;
                        l_458 = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-3L), 0x6776270DL, 0x3F075AD3L, 0x70182AC9L)).y, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x68DBB652L, 0x59E1C2A8L)), 0x68376484L, l_584, (l_582[1] = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x681970AAL, ((VECTOR(int32_t, 8))(l_585.s06665702)), 0x70949DD7L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_586.sa4503dbe)).lo, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_587[2][3][3], ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(l_588.s41561760)).even, (int32_t)((l_593 |= ((l_590 = l_589[0]) , (l_591 , l_592))) , (l_594 , (FAKE_DIVERGE(p_1872->local_1_offset, get_local_id(1), 10) , ((VECTOR(int32_t, 16))(6L, ((VECTOR(int32_t, 4))(l_595.wzzw)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_596.sc19b)))).z, (((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 4))(l_597.yxyx)).ywyywwxxywzyxywz, (int64_t)l_598, (int64_t)((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(l_599.s6704)).xwwwzyxyxwyywxzy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(l_600.yy)).xyxyyxyy, ((VECTOR(int64_t, 16))(l_601.s0024242141546540)).lo))).hi)).zzyyywzxyzxxzwxw, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_602.yw)).yxyy)).xxxwxzwyxwzyzzxw))).s08, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(l_603.s2ada)), ((VECTOR(int64_t, 8))(l_604.s51513431)).odd))).yxywywwywzwwxyzz)).sda, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(3L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x6F3DD1B87678372DL, l_605, 2L, ((VECTOR(int64_t, 4))(1L)), 0x3E38F06BFB614086L)).s72)), (-8L))), 0x34C81C1A3028A5EDL, l_606, 0x233594D5A2835306L, (-1L))), 0x59B1A19B1C4F373AL, 0x3D3E862A48DCAC87L, ((VECTOR(int64_t, 4))((-1L))), 1L, 0L)).s03b2, ((VECTOR(int64_t, 4))(7L))))), (-9L), 0x58FD0FAD6BA3565DL, l_607, l_608, (-1L), l_609, 0x0D50B8F0FEAFC883L, ((VECTOR(int64_t, 2))(0x0686A73B0DFF2831L)), ((VECTOR(int64_t, 2))(1L)), 0x7184408B4C78CAABL)).s68))))).hi))).sf , l_610), l_611, ((VECTOR(int32_t, 2))(0x43FE0A5BL)), 0x4C2CACCBL, l_612, ((VECTOR(int32_t, 4))(0L)))).sc))), (int32_t)l_613))), ((VECTOR(int32_t, 4))(0x6D80EB22L)), l_614.s6, ((VECTOR(int32_t, 4))(8L)), 0x5B3C57DDL, 0x2684D479L)).even, ((VECTOR(int32_t, 8))(1L))))).odd, ((VECTOR(int32_t, 4))((-7L))))))))), 0L, 0x220369FDL)).s8e7c, ((VECTOR(int32_t, 4))(0x61ED2F8BL)), ((VECTOR(int32_t, 4))(5L))))), ((VECTOR(int32_t, 4))((-1L)))))).z), ((VECTOR(int32_t, 2))(0L)), 0x1E25B0E0L)).s32)), 0x03164EB2L, 0L, 1L, (-1L), 0x6226FB90L)).s7623213372664341, (int32_t)l_615, (int32_t)l_616))).s8;
                    }
                    else
                    { /* block id: 244 */
                        uint16_t l_617[6] = {0x3B84L,0x3B84L,0x3B84L,0x3B84L,0x3B84L,0x3B84L};
                        uint32_t l_620 = 5UL;
                        uint32_t l_621 = 0x39A74CE3L;
                        VECTOR(int16_t, 4) l_622 = (VECTOR(int16_t, 4))(0x6A9DL, (VECTOR(int16_t, 2))(0x6A9DL, 8L), 8L);
                        VECTOR(int16_t, 8) l_623 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L));
                        uint64_t l_624 = 18446744073709551609UL;
                        int16_t l_625 = 1L;
                        int32_t l_626 = 0x05491014L;
                        uint32_t l_627[8] = {0UL,0xA2F7B4EBL,0UL,0UL,0xA2F7B4EBL,0UL,0UL,0xA2F7B4EBL};
                        VECTOR(int16_t, 2) l_628 = (VECTOR(int16_t, 2))(0x2D8CL, 0x67E4L);
                        VECTOR(int16_t, 16) l_629 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int16_t, 2))(1L, 9L), (VECTOR(int16_t, 2))(1L, 9L), 1L, 9L, 1L, 9L);
                        VECTOR(int16_t, 16) l_630 = (VECTOR(int16_t, 16))(0x4880L, (VECTOR(int16_t, 4))(0x4880L, (VECTOR(int16_t, 2))(0x4880L, (-1L)), (-1L)), (-1L), 0x4880L, (-1L), (VECTOR(int16_t, 2))(0x4880L, (-1L)), (VECTOR(int16_t, 2))(0x4880L, (-1L)), 0x4880L, (-1L), 0x4880L, (-1L));
                        uint32_t l_631 = 0UL;
                        uint32_t l_632 = 4294967291UL;
                        uint32_t l_633 = 0UL;
                        int32_t *l_635 = (void*)0;
                        int32_t **l_634 = &l_635;
                        int32_t **l_636 = &l_635;
                        int i;
                        --l_617[4];
                        l_458 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(0x6A48L, (l_621 = l_620), 3L, (-2L))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 2L)))).yyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_622.yywzyzyxzyzwzxyy)))).s40ae, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_623.s43)), 0x6784L, 0x1917L, 1L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(0x5476L, (-8L), 0x1C6FL, 0x1ABBL, 1L, 0x0AD9L, 1L, 0x11AFL)).s2107374610167060, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(0x0154L, 0x1137L, (l_448[3] &= ((((l_583 = (l_446.x |= 0L)) , l_624) , l_625) , l_626)), 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-1L), 0x2EE4L, l_627[0], ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(l_628.xy)).yxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_629.sf199d4b0a54f1d7e)))).se46a))), (-1L))).s32)))), 0x455BL, (-8L)))))).s3654107470431262, ((VECTOR(int16_t, 8))(0x73E3L, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_630.s6e628a88d0bda7c6)).s6d, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-7L), 0L)), 0L, 0x3968L)).z, 0L, 0x7927L, 0x0710L, ((VECTOR(int16_t, 2))((-1L))), 0x359DL, 0x67F7L)).s02, ((VECTOR(int16_t, 2))(0x7209L))))), (-1L), (-2L), 0x4F6FL, ((VECTOR(int16_t, 2))(3L)), 0x4117L)))).s54, (int16_t)l_631))), (-5L), 0L))))).lo, ((VECTOR(int16_t, 2))(0x64B1L))))).xyxx, (int16_t)l_632))), ((VECTOR(int16_t, 2))(9L)), 1L)).s6504764223154747))).odd)), ((VECTOR(int16_t, 2))(0x4D85L)), 0L)).s2fa6))).hi, ((VECTOR(int16_t, 2))((-1L)))))), (-6L), 0x47ECL)))).ywyzwzxzzzxxzyxz, ((VECTOR(int16_t, 16))(3L))))).even, ((VECTOR(int16_t, 8))(0x0E48L))))))))).hi, ((VECTOR(int16_t, 4))((-2L)))))), ((VECTOR(int16_t, 2))((-6L))), 1L, 2L)).s17, ((VECTOR(uint16_t, 2))(0xF67EL))))), 0x68A43E94L, ((VECTOR(int32_t, 2))(0x5B16CA4AL)), l_633, (-1L), 0x2D4C45BEL)).s6;
                        l_636 = l_634;
                    }
                    if (l_637[2][0])
                    { /* block id: 253 */
                        int16_t l_640 = 0L;
                        int16_t *l_639[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int16_t **l_638 = &l_639[3];
                        int16_t **l_641 = (void*)0;
                        int i;
                        l_641 = l_638;
                    }
                    else
                    { /* block id: 255 */
                        uint32_t l_642 = 0UL;
                        int32_t l_645 = 0x77B3674DL;
                        int32_t l_646 = 1L;
                        uint64_t l_647 = 2UL;
                        VECTOR(int32_t, 4) l_648 = (VECTOR(int32_t, 4))(0x6B069D58L, (VECTOR(int32_t, 2))(0x6B069D58L, 1L), 1L);
                        VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))(8L, 6L);
                        VECTOR(int32_t, 4) l_650 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0B1F84EFL), 0x0B1F84EFL);
                        VECTOR(int32_t, 4) l_651 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6DB037FCL), 0x6DB037FCL);
                        VECTOR(int32_t, 2) l_652 = (VECTOR(int32_t, 2))(0x3BFEC5FDL, 0x6F186AADL);
                        uint32_t l_653 = 1UL;
                        uint64_t l_654 = 5UL;
                        VECTOR(int32_t, 8) l_655 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-9L)), (-9L)), (-9L), (-4L), (-9L));
                        VECTOR(int32_t, 16) l_656 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x3010DD1FL), 0x3010DD1FL), 0x3010DD1FL, 2L, 0x3010DD1FL, (VECTOR(int32_t, 2))(2L, 0x3010DD1FL), (VECTOR(int32_t, 2))(2L, 0x3010DD1FL), 2L, 0x3010DD1FL, 2L, 0x3010DD1FL);
                        VECTOR(int32_t, 4) l_657 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-2L)), (-2L));
                        VECTOR(int32_t, 16) l_658 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x3372ECBAL), 0x3372ECBAL), 0x3372ECBAL, 7L, 0x3372ECBAL, (VECTOR(int32_t, 2))(7L, 0x3372ECBAL), (VECTOR(int32_t, 2))(7L, 0x3372ECBAL), 7L, 0x3372ECBAL, 7L, 0x3372ECBAL);
                        VECTOR(int32_t, 8) l_659 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 8L), 8L), 8L, 3L, 8L);
                        VECTOR(int32_t, 2) l_660 = (VECTOR(int32_t, 2))(0x6E326A48L, (-2L));
                        VECTOR(int32_t, 16) l_661 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
                        VECTOR(int32_t, 8) l_662 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x404B32ECL), 0x404B32ECL), 0x404B32ECL, (-1L), 0x404B32ECL);
                        VECTOR(int32_t, 8) l_663 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
                        VECTOR(int32_t, 4) l_664 = (VECTOR(int32_t, 4))(0x261888FBL, (VECTOR(int32_t, 2))(0x261888FBL, 0L), 0L);
                        VECTOR(int32_t, 4) l_665 = (VECTOR(int32_t, 4))(0x66FE4146L, (VECTOR(int32_t, 2))(0x66FE4146L, 0x40AC6F8FL), 0x40AC6F8FL);
                        VECTOR(int32_t, 4) l_666 = (VECTOR(int32_t, 4))(0x0333589CL, (VECTOR(int32_t, 2))(0x0333589CL, 7L), 7L);
                        VECTOR(int32_t, 16) l_667 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-6L)), (-6L)), (-6L), 9L, (-6L), (VECTOR(int32_t, 2))(9L, (-6L)), (VECTOR(int32_t, 2))(9L, (-6L)), 9L, (-6L), 9L, (-6L));
                        VECTOR(int32_t, 16) l_668 = (VECTOR(int32_t, 16))(0x182A27AEL, (VECTOR(int32_t, 4))(0x182A27AEL, (VECTOR(int32_t, 2))(0x182A27AEL, (-1L)), (-1L)), (-1L), 0x182A27AEL, (-1L), (VECTOR(int32_t, 2))(0x182A27AEL, (-1L)), (VECTOR(int32_t, 2))(0x182A27AEL, (-1L)), 0x182A27AEL, (-1L), 0x182A27AEL, (-1L));
                        VECTOR(int32_t, 2) l_669 = (VECTOR(int32_t, 2))((-3L), 0x735EE99EL);
                        uint64_t l_670 = 0UL;
                        int32_t l_671 = 0L;
                        VECTOR(int32_t, 4) l_672 = (VECTOR(int32_t, 4))(0x51E635DCL, (VECTOR(int32_t, 2))(0x51E635DCL, (-1L)), (-1L));
                        VECTOR(int32_t, 8) l_673 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x243FC34FL), 0x243FC34FL), 0x243FC34FL, 9L, 0x243FC34FL);
                        uint64_t l_674 = 18446744073709551615UL;
                        uint32_t l_675 = 0x270F21F7L;
                        VECTOR(uint64_t, 2) l_676 = (VECTOR(uint64_t, 2))(0UL, 1UL);
                        int16_t l_677 = 0L;
                        int32_t *l_678 = (void*)0;
                        int i;
                        l_642++;
                        l_675 &= (l_674 &= ((l_646 = l_645) , ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(0x2907E46EL, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))((-1L), l_647, 0x3CA069D2L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_648.wz)), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_649.xxyyyxyy)))).even)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_650.zyzyxxyyywywyyzz)).s21)))).xxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_651.xyzzzzxz)).s5550606671143407, ((VECTOR(int32_t, 4))(l_652.xxxx)).zyzwzwzzyxwxywxz))).odd)).lo, ((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))((l_654 |= (l_653 ^= (l_458 = (l_582[0] = (-1L))))), 0x665F5800L, 0x15A11EE9L, 0x66E4A582L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_655.s36)))), 0x2BFA8DBBL, (-3L))), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_656.sc1)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_657.wxyx)), ((VECTOR(int32_t, 4))(1L, 0x7F957FC5L, (-1L), 1L)))).even)).yzwxyzxy)).s26, ((VECTOR(int32_t, 2))(0x45522E47L, 5L))))).even, 0x6A5EC760L, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_658.s1c)), 0x2ACE3E70L, 0x433FACC2L)), ((VECTOR(int32_t, 16))(l_659.s0035137641042530)).s2175))), (-1L))).s9030)))))).wywywywy, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(0x4FF36F15L, 0x7E717FB4L, (-8L), 7L)).wzxyzzxwwxyxwxyz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_660.xx)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_661.s7164)).wxxwxzyw)).lo)), ((VECTOR(int32_t, 8))(l_662.s67301767)).odd))), 0x3A49B938L, (-4L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1E992860L, 0x32B6DE4EL, 2L, 0x7E2E2748L)).wxyzzzzz)))).s7e)).xyxyyyxxyyyxyxyx))).lo))), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_663.s2425)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_664.xwzwzxxz)).s25, ((VECTOR(int32_t, 4))(l_665.wxzx)).lo, ((VECTOR(int32_t, 8))(l_666.xwywxwzw)).s56))).xxyx, ((VECTOR(int32_t, 8))(l_667.sd737f92f)).even))).xyzzyzwy, ((VECTOR(int32_t, 2))(l_668.s8c)).yxyxyxxx))).s53, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_669.xxyx)))).hi))).yyyx)), 0x01B5681FL)).s04, (int32_t)((l_671 ^= l_670) , 0x4B8D9FD5L)))), 0x16170E5AL)).xyzwwwxyyxwwwwzz, ((VECTOR(int32_t, 16))(l_672.wzxzwxxwywwxyzyw)), ((VECTOR(int32_t, 2))(l_673.s04)).yyyxxxyyyyyyxyxx))).sf1)).xxyxxxxyyyxyxyxy)).sd6)).yxyy, (int32_t)0x3DF245A0L))).z));
                        l_458 ^= (((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 2))((-1L), 0x31025DDD8EFEBCE4L))))))).xyyyxxxxxyxxxxyy, ((VECTOR(uint64_t, 8))(0x1391756BB6ADB0AEL, ((VECTOR(uint64_t, 2))(l_676.xy)), 18446744073709551608UL, ((VECTOR(uint64_t, 2))(0x08BC4EBF2F3C8FC6L, 0UL)), 0xD5CF663A5436E7CDL, 0x567FB2F866427075L)).s6130165462371314))).s9 , l_677);
                        l_678 = l_678;
                    }
                }
                else
                { /* block id: 268 */
                    int64_t l_679 = 0x19D3683D1A29DD86L;
                    int64_t l_680 = 0x6E9D7613F2209786L;
                    uint8_t l_681 = 0xD3L;
                    int64_t l_684[1];
                    uint8_t l_685 = 1UL;
                    VECTOR(int16_t, 8) l_686 = (VECTOR(int16_t, 8))(0x0242L, (VECTOR(int16_t, 4))(0x0242L, (VECTOR(int16_t, 2))(0x0242L, 2L), 2L), 2L, 0x0242L, 2L);
                    VECTOR(uint16_t, 8) l_687 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x00F3L), 0x00F3L), 0x00F3L, 2UL, 0x00F3L);
                    VECTOR(uint16_t, 2) l_688 = (VECTOR(uint16_t, 2))(1UL, 0xC41FL);
                    VECTOR(int32_t, 2) l_689 = (VECTOR(int32_t, 2))(0x2973BFE4L, 0x3E208F22L);
                    uint64_t l_690 = 1UL;
                    int32_t l_691[7] = {0L,0L,0L,0L,0L,0L,0L};
                    VECTOR(int32_t, 8) l_692 = (VECTOR(int32_t, 8))(0x0F6BD4FAL, (VECTOR(int32_t, 4))(0x0F6BD4FAL, (VECTOR(int32_t, 2))(0x0F6BD4FAL, 1L), 1L), 1L, 0x0F6BD4FAL, 1L);
                    VECTOR(int32_t, 16) l_693 = (VECTOR(int32_t, 16))(0x47B26346L, (VECTOR(int32_t, 4))(0x47B26346L, (VECTOR(int32_t, 2))(0x47B26346L, 9L), 9L), 9L, 0x47B26346L, 9L, (VECTOR(int32_t, 2))(0x47B26346L, 9L), (VECTOR(int32_t, 2))(0x47B26346L, 9L), 0x47B26346L, 9L, 0x47B26346L, 9L);
                    VECTOR(int32_t, 8) l_694 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L));
                    VECTOR(int32_t, 4) l_695 = (VECTOR(int32_t, 4))(0x26E8C62AL, (VECTOR(int32_t, 2))(0x26E8C62AL, 0L), 0L);
                    VECTOR(int32_t, 16) l_696 = (VECTOR(int32_t, 16))(0x79DE9E4CL, (VECTOR(int32_t, 4))(0x79DE9E4CL, (VECTOR(int32_t, 2))(0x79DE9E4CL, (-2L)), (-2L)), (-2L), 0x79DE9E4CL, (-2L), (VECTOR(int32_t, 2))(0x79DE9E4CL, (-2L)), (VECTOR(int32_t, 2))(0x79DE9E4CL, (-2L)), 0x79DE9E4CL, (-2L), 0x79DE9E4CL, (-2L));
                    int32_t l_697 = (-5L);
                    uint16_t l_698 = 5UL;
                    int8_t l_699 = 1L;
                    int32_t l_700 = 0x7A37D90DL;
                    uint64_t l_701 = 0x6A6E9DFD861B78E7L;
                    int16_t l_702 = (-8L);
                    int32_t l_703 = 0x176A0141L;
                    uint32_t l_704 = 0xC8F5497CL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_684[i] = 1L;
                    l_681--;
                    l_582[0] = (l_684[0] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_685, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_686.s56571523)).s76, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(1UL, 65530UL)).xyxx, ((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(l_687.s26)), 65528UL))))), 65530UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x5FC6L, 0xAACEL)).yyxxxxyy)).s35))).xxxy, ((VECTOR(uint16_t, 2))(l_688.yx)).yyyy))).even)), 0xD8FCL)).s2642616530046063)).sc4))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_689.yxxyxxyyyxxyxyyx)).safeb, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_690, l_691[4], 0x2640D5E0L, 0x77407BA2L, 0x569C3D67L, 0x51B13BB0L, 0x7DB4A46FL, 0x3872758CL)).s2034001225234074)).sfd)), 4L, 0L)).yywyyywy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_692.s4147343707200421)).sf7, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(0x252CF375L, ((VECTOR(int32_t, 4))(l_693.s9140)), ((VECTOR(int32_t, 4))(l_694.s2523)).x, 5L, 1L)).s21, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_695.yxwwyxxyywyzywwy)).sf0)))))))), 0x24B5A9E5L, (-1L), ((VECTOR(int32_t, 4))(l_696.se058)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x5D4C433EL)).yyxxxxyy)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x46B4CFA4L, (-1L))), 0x345F760FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(0x09E189E4L, 0x61337906L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x19C91C76L, ((VECTOR(int32_t, 4))(l_697, l_698, (-5L), (-1L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x400481E8L, 0L)).xyxxyyyyxyxxyxxy)).even)).s35, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-1L), 0x308E9870L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, 1L)), 0x65B9A95DL, 4L, l_699, ((VECTOR(int32_t, 2))((-4L))), 0x35BC5F33L, 5L, 0x1355EA60L, ((VECTOR(int32_t, 2))(0x7434E0C3L)), 0L, l_700, 0L, 0L)).lo, ((VECTOR(int32_t, 8))(0x7DDA931EL))))).s53))), ((VECTOR(int32_t, 2))(0x3B87A09EL)), 0x311F9D4DL, ((VECTOR(int32_t, 2))(0x179350DDL)), ((VECTOR(int32_t, 2))(0x13869540L)), 0x7F4F698CL, (-2L), ((VECTOR(int32_t, 2))(0x519C199EL)), 0L)).odd)).s1205213475306454)).s5e))).yxxxyxxyxxyxyxxy)).hi)), l_701, 0x7B69816EL, 0x588D1688L)).sed)), ((VECTOR(int32_t, 2))((-1L))), 1L, 4L)).lo, ((VECTOR(int32_t, 4))((-5L)))))).zzzyxxyz)).even)), (-1L))).hi))), ((VECTOR(int32_t, 4))(0x48362AF8L)))))).sc9, (int32_t)l_702, (int32_t)l_703))).yyxyyyyx, ((VECTOR(int32_t, 8))(5L)), ((VECTOR(int32_t, 8))(0x2F807F48L))))).s4, ((VECTOR(int32_t, 2))(0x6EBFA346L)), 7L, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x7B3F6CF1L)), 0x5BBADB5BL, 0x1A36B4B6L, 0x4A4F5366L, 7L, ((VECTOR(int32_t, 2))((-2L))), 0x77A22C3FL, 0x67D2E243L)).odd, ((VECTOR(int32_t, 8))(0x6E599359L))))).s3657676624245602)).s6d4e)), ((VECTOR(int32_t, 4))(0x1438E62FL))))).zywywzzyxzxzyzyx, ((VECTOR(int32_t, 16))(2L))))).s311c)).zzxwwxyx, ((VECTOR(int32_t, 8))(0x3CA7BF7FL))))).even)), 0x262F8C0DL)), 5L, l_704, ((VECTOR(int32_t, 4))(0x65C5CB60L)), 0L, (-1L))).s2);
                }
            }
            else
            { /* block id: 272 */
                int32_t l_705 = 0x1E3B4E40L;
                int8_t l_706[1];
                uint8_t l_707 = 0x65L;
                VECTOR(int32_t, 8) l_710 = (VECTOR(int32_t, 8))(0x70FCB6ECL, (VECTOR(int32_t, 4))(0x70FCB6ECL, (VECTOR(int32_t, 2))(0x70FCB6ECL, 0x2B670B30L), 0x2B670B30L), 0x2B670B30L, 0x70FCB6ECL, 0x2B670B30L);
                uint16_t l_711 = 0x0727L;
                int i;
                for (i = 0; i < 1; i++)
                    l_706[i] = (-3L);
                ++l_707;
                l_711 = ((VECTOR(int32_t, 2))(l_710.s02)).hi;
            }
            if (((l_715 = (l_712--)) , ((VECTOR(int32_t, 16))(l_716.s0383165d57e1112d)).s0))
            { /* block id: 278 */
                uint64_t l_717 = 0x6FE8E736E8F58ABFL;
                ++l_717;
            }
            else
            { /* block id: 280 */
                uint8_t l_720 = 0x70L;
                uint32_t l_721 = 0x7EB7D0E1L;
                uint8_t l_734[2][10][8] = {{{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL}},{{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL},{0x09L,253UL,0x13L,0x4AL,253UL,0x4AL,0x13L,253UL}}};
                int i, j, k;
                if ((l_721 = (l_716.sf &= l_720)))
                { /* block id: 283 */
                    VECTOR(uint8_t, 16) l_722 = (VECTOR(uint8_t, 16))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 0xB8L), 0xB8L), 0xB8L, 0xA9L, 0xB8L, (VECTOR(uint8_t, 2))(0xA9L, 0xB8L), (VECTOR(uint8_t, 2))(0xA9L, 0xB8L), 0xA9L, 0xB8L, 0xA9L, 0xB8L);
                    VECTOR(uint8_t, 2) l_723 = (VECTOR(uint8_t, 2))(250UL, 0x01L);
                    VECTOR(uint8_t, 4) l_724 = (VECTOR(uint8_t, 4))(0x07L, (VECTOR(uint8_t, 2))(0x07L, 255UL), 255UL);
                    VECTOR(uint8_t, 2) l_725 = (VECTOR(uint8_t, 2))(0x82L, 0UL);
                    VECTOR(uint8_t, 4) l_726 = (VECTOR(uint8_t, 4))(0xB6L, (VECTOR(uint8_t, 2))(0xB6L, 0UL), 0UL);
                    uint32_t l_727 = 0xD0CD9373L;
                    int i;
                    l_716.sc = ((((VECTOR(uint8_t, 4))(0x04L, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(l_722.s859f)).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(l_723.xyyyyxxx)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_724.ww)).xyyxxxxx)), ((VECTOR(uint8_t, 2))(0xC9L, 248UL)).yxxxxyxx))).s1200436546670164)), ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_725.xx)).yyxyyyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_726.zyyz)).even)).yyxyyxyy))).s2315306740051527))).s34)), 0xD4L, 255UL)).hi)), 255UL, 0x4CL))))).lo)).xxxy)))).even))), 0x1EL)).w , ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x68L, 0x2BL)).yyyxyxxx)).s7) , 0x4E720E7BL);
                    l_727 = (l_716.sa = (-1L));
                }
                else
                { /* block id: 287 */
                    VECTOR(int32_t, 16) l_729 = (VECTOR(int32_t, 16))(0x4FE1DA64L, (VECTOR(int32_t, 4))(0x4FE1DA64L, (VECTOR(int32_t, 2))(0x4FE1DA64L, 3L), 3L), 3L, 0x4FE1DA64L, 3L, (VECTOR(int32_t, 2))(0x4FE1DA64L, 3L), (VECTOR(int32_t, 2))(0x4FE1DA64L, 3L), 0x4FE1DA64L, 3L, 0x4FE1DA64L, 3L);
                    int32_t *l_728 = (void*)0;
                    int32_t *l_730 = (void*)0;
                    uint32_t l_733 = 8UL;
                    int i;
                    l_730 = l_728;
                    for (l_729.s5 = 0; (l_729.s5 != 3); ++l_729.s5)
                    { /* block id: 291 */
                        l_728 = (void*)0;
                    }
                    l_716.s1 = (l_733 , 0x3C798F24L);
                }
                l_716.s6 = l_734[1][1][6];
                for (l_721 = (-19); (l_721 > 58); l_721 = safe_add_func_int8_t_s_s(l_721, 3))
                { /* block id: 299 */
                    int64_t l_737 = 1L;
                    VECTOR(int32_t, 4) l_738 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x13F52613L), 0x13F52613L);
                    VECTOR(uint64_t, 8) l_739 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 7UL), 7UL), 7UL, 18446744073709551606UL, 7UL);
                    int i;
                    l_737 = 0x44AA8119L;
                    l_716.s9 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_738.xyzyzxxwxzzxxyxx)))).s9;
                    l_716.s1 = l_739.s0;
                    for (l_738.x = 23; (l_738.x < (-1)); l_738.x--)
                    { /* block id: 305 */
                        int8_t l_742[8][5] = {{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)},{0x7CL,(-10L),0x7CL,0x7CL,(-10L)}};
                        int32_t l_743[7][4] = {{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL},{0x4DA6595CL,0x4DA6595CL,0x4DA6595CL,0x4DA6595CL}};
                        int32_t *l_744 = &l_743[5][2];
                        int64_t l_745 = 0x062827F97224C72EL;
                        int i, j;
                        l_716.sb ^= l_742[7][4];
                        l_716.s0 = l_743[5][3];
                        l_744 = (void*)0;
                        l_745 &= (l_716.s7 ^= 0x08684959L);
                    }
                }
            }
            if ((l_716.sc = l_746[2][4][1]))
            { /* block id: 315 */
                int32_t l_747[8][9] = {{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL},{0x2F481AD8L,0x44AD47B3L,0x397B8745L,(-7L),0x397B8745L,0x44AD47B3L,0x2F481AD8L,0L,0x016EFA3CL}};
                uint16_t l_748 = 1UL;
                VECTOR(int8_t, 16) l_751 = (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x50L), 0x50L), 0x50L, 0x7DL, 0x50L, (VECTOR(int8_t, 2))(0x7DL, 0x50L), (VECTOR(int8_t, 2))(0x7DL, 0x50L), 0x7DL, 0x50L, 0x7DL, 0x50L);
                uint16_t l_752 = 65535UL;
                int32_t l_753 = 1L;
                int32_t l_754[3][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}}};
                int i, j, k;
                l_748++;
                l_752 ^= l_751.sa;
                l_754[0][0][3] = (l_716.s0 = (l_753 , 0L));
                for (l_751.s9 = 0; (l_751.s9 > 4); l_751.s9 = safe_add_func_int8_t_s_s(l_751.s9, 1))
                { /* block id: 322 */
                    uint8_t l_757 = 247UL;
                    int32_t l_759 = 0x16C6898FL;
                    int32_t *l_758 = &l_759;
                    int32_t *l_760 = &l_759;
                    l_760 = (l_757 , l_758);
                    for (l_757 = (-1); (l_757 == 10); l_757 = safe_add_func_int8_t_s_s(l_757, 9))
                    { /* block id: 326 */
                        int32_t *l_764 = (void*)0;
                        int32_t **l_763[1];
                        uint32_t l_765 = 0xDB81302EL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_763[i] = &l_764;
                        l_763[0] = (void*)0;
                        l_760 = (void*)0;
                        (*l_758) = l_765;
                    }
                    for (l_759 = 0; (l_759 <= 27); l_759++)
                    { /* block id: 333 */
                        uint32_t l_768[1][6];
                        int16_t l_769 = 0x5049L;
                        int16_t l_770 = 4L;
                        int32_t l_771 = 1L;
                        uint64_t l_772[9] = {0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L,0x708B4C57A5B73032L};
                        int32_t l_775 = 0x690DB00CL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_768[i][j] = 0x0F0A059EL;
                        }
                        l_754[2][0][1] |= l_768[0][4];
                        l_754[0][0][3] ^= (l_770 = l_769);
                        l_772[3]--;
                        l_754[0][0][3] = (l_775 , (-1L));
                    }
                }
            }
            else
            { /* block id: 341 */
                int16_t l_776 = 0x1A02L;
                int32_t l_778 = 0x1924DF63L;
                int32_t *l_777 = &l_778;
                int32_t *l_779 = &l_778;
                int32_t *l_780[9][6][1] = {{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}},{{&l_778},{&l_778},{&l_778},{&l_778},{&l_778},{&l_778}}};
                int i, j, k;
                l_716.s8 ^= l_776;
                l_780[8][5][0] = (l_779 = (l_777 = (void*)0));
                for (l_778 = (-30); (l_778 > 5); l_778 = safe_add_func_int64_t_s_s(l_778, 8))
                { /* block id: 348 */
                    int64_t l_783 = 1L;
                    int16_t l_784 = 0x0DADL;
                    uint16_t l_809[9][8];
                    VECTOR(uint64_t, 4) l_810 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL), 18446744073709551614UL);
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_809[i][j] = 65535UL;
                    }
                    l_780[3][3][0] = (l_783 , (void*)0);
                    if (l_784)
                    { /* block id: 350 */
                        int32_t l_786 = 0x0E36516DL;
                        int32_t *l_785 = &l_786;
                        int64_t l_787 = (-2L);
                        int8_t l_788 = 0x4DL;
                        uint32_t l_789 = 0x25A0ADB6L;
                        uint32_t l_790 = 0xACB28BC0L;
                        VECTOR(int32_t, 2) l_791 = (VECTOR(int32_t, 2))(0x56B63612L, 1L);
                        int32_t l_792[8][9][3] = {{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}},{{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L},{0x48577989L,0x6DE23F60L,4L}}};
                        VECTOR(int32_t, 4) l_793 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 9L), 9L);
                        VECTOR(uint32_t, 16) l_794 = (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967293UL, 4294967290UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967290UL), (VECTOR(uint32_t, 2))(4294967293UL, 4294967290UL), 4294967293UL, 4294967290UL, 4294967293UL, 4294967290UL);
                        int16_t l_795 = 0x0E5BL;
                        VECTOR(int32_t, 4) l_796 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2E1628A4L), 0x2E1628A4L);
                        VECTOR(int32_t, 4) l_797 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_798 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5BAEFDEBL), 0x5BAEFDEBL);
                        VECTOR(int32_t, 8) l_799 = (VECTOR(int32_t, 8))(0x2D28EDB0L, (VECTOR(int32_t, 4))(0x2D28EDB0L, (VECTOR(int32_t, 2))(0x2D28EDB0L, 0x7C6C4583L), 0x7C6C4583L), 0x7C6C4583L, 0x2D28EDB0L, 0x7C6C4583L);
                        VECTOR(int32_t, 8) l_800 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x05338FB7L), 0x05338FB7L), 0x05338FB7L, 3L, 0x05338FB7L);
                        VECTOR(int32_t, 2) l_801 = (VECTOR(int32_t, 2))((-3L), 0x167F055BL);
                        uint16_t l_802 = 65531UL;
                        int64_t l_803[9][7] = {{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L},{0x3F89F92B4BE29CB6L,0x3F89F92B4BE29CB6L,0x1CF17BFF7E2D3CA4L,9L,1L,0L,0L}};
                        int32_t l_804 = 0x4961AA20L;
                        int64_t l_805 = 0L;
                        int i, j, k;
                        l_785 = l_785;
                        l_789 = (l_788 = l_787);
                        l_805 = ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_790, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_791.yyyyyyyy)).s51, (int32_t)l_792[7][3][0]))).yxxx)).lo, (int32_t)(-1L)))).yxyy, ((VECTOR(int32_t, 16))(l_793.yzxyxzywzywxzzyx)).sba72))).lo)), (-3L))))), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))((l_794.s9 |= (-1L)), l_795, 8L, (-1L), 0x368AC52CL, ((VECTOR(int32_t, 2))((-3L), (-1L))), 1L)).s01, ((VECTOR(int32_t, 8))(l_796.yzzyxwzx)).s40))).yyxyyxxy, ((VECTOR(int32_t, 8))(l_797.zzwyxzww)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(6L, (-1L))).xxyxxxyyxxyxxyyy, ((VECTOR(int32_t, 2))(0L, 9L)).xyxxxyyyxyyyyyxy, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_798.xwyzzyzz)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_799.s40)).xyxxxxxyyyxxyxxx, ((VECTOR(int32_t, 2))(0x0756A138L, (-1L))).xxxxxxxyyyxyxyxy))).hi)).s41)).yyxxxyxyyxxxyxxx)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_800.s04)).xyxyxyxxxxyyyxxx, ((VECTOR(int32_t, 8))(l_801.yyxyyyyy)).s5331274255411705))).s4075)).xxxzyyxx))), (int32_t)((l_804 = (l_802 , l_803[7][4])) , 1L)))))).even, ((VECTOR(int32_t, 4))(0L))))).ywyywwyyyxxwyxzy, ((VECTOR(int32_t, 16))((-8L))))))))).even))).hi))).x;
                    }
                    else
                    { /* block id: 357 */
                        uint32_t l_806 = 8UL;
                        int16_t l_807[3][7][4] = {{{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL}},{{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL}},{{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL},{0x31C5L,0x1939L,(-5L),0x328AL}}};
                        int16_t l_808 = 4L;
                        int i, j, k;
                        l_777 = (void*)0;
                        l_808 = (l_807[2][6][0] = l_806);
                    }
                    l_810.z = l_809[3][4];
                }
            }
            for (l_716.s6 = 27; (l_716.s6 > 1); l_716.s6 = safe_sub_func_int16_t_s_s(l_716.s6, 8))
            { /* block id: 367 */
                int32_t l_813 = (-1L);
                int32_t l_842 = (-7L);
                uint32_t l_843 = 4294967290UL;
                for (l_813 = 0; (l_813 >= 6); l_813 = safe_add_func_uint16_t_u_u(l_813, 3))
                { /* block id: 370 */
                    int16_t l_816 = 0x742CL;
                    VECTOR(uint8_t, 4) l_817 = (VECTOR(uint8_t, 4))(0x5AL, (VECTOR(uint8_t, 2))(0x5AL, 255UL), 255UL);
                    VECTOR(uint8_t, 8) l_818 = (VECTOR(uint8_t, 8))(0xB8L, (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 1UL), 1UL), 1UL, 0xB8L, 1UL);
                    VECTOR(uint8_t, 8) l_819 = (VECTOR(uint8_t, 8))(0xABL, (VECTOR(uint8_t, 4))(0xABL, (VECTOR(uint8_t, 2))(0xABL, 8UL), 8UL), 8UL, 0xABL, 8UL);
                    VECTOR(uint8_t, 2) l_820 = (VECTOR(uint8_t, 2))(0xA4L, 0xB6L);
                    VECTOR(int8_t, 4) l_821 = (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x77L), 0x77L);
                    VECTOR(int8_t, 4) l_822 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-3L)), (-3L));
                    VECTOR(uint8_t, 8) l_823 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xB0L), 0xB0L), 0xB0L, 1UL, 0xB0L);
                    int16_t l_824 = 0x3D71L;
                    VECTOR(uint8_t, 8) l_825 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 249UL), 249UL), 249UL, 7UL, 249UL);
                    int64_t l_826 = 4L;
                    int32_t l_827 = 0x6EA2E09FL;
                    int16_t l_828 = 0x0215L;
                    int32_t l_829 = (-1L);
                    VECTOR(uint64_t, 8) l_830 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA5D5773F76606D9EL), 0xA5D5773F76606D9EL), 0xA5D5773F76606D9EL, 18446744073709551615UL, 0xA5D5773F76606D9EL);
                    uint16_t l_831 = 0UL;
                    int64_t l_832 = 0x251354F06BC20ED3L;
                    uint8_t l_833 = 0x5FL;
                    uint8_t l_834 = 0UL;
                    int32_t l_835 = 0x3339C681L;
                    int32_t *l_836 = (void*)0;
                    int32_t *l_837 = (void*)0;
                    int32_t *l_838 = &l_827;
                    int i;
                    l_838 = (l_837 = (l_816 , (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(l_817.zywyzzxw)).even, ((VECTOR(uint8_t, 8))(l_818.s14700407)).odd))).xwzyzzxz)).s5, ((VECTOR(uint8_t, 2))(l_819.s71)), ((VECTOR(uint8_t, 4))(l_820.xxyy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_821.xzzx)).lo, ((VECTOR(int8_t, 2))((-3L), 6L)), ((VECTOR(int8_t, 4))(l_822.yyyw)).hi))).yxxxxyxxyyxyxxxy))).s94a1, ((VECTOR(uint8_t, 16))(l_823.s6006114124062106)).s0082))), l_824, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(8UL, 253UL)), ((VECTOR(uint8_t, 4))(l_825.s4206)).y, ((VECTOR(uint8_t, 2))(0x32L, 0xF9L)).even, (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_826, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(1L, l_827, 0x49D3A8D8L, (-3L), (-1L), l_828, l_829, l_830.s6, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-1L), (l_831 , l_832), l_833, ((VECTOR(int32_t, 4))(0x3F8C9AD4L)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0L)), 0x0FBB04ECL, ((VECTOR(int32_t, 4))((-1L))))).sb7)), 0x5D57BE68L, 3L)), ((VECTOR(int32_t, 2))((-7L))), 0x65A6ECE2L)).s26, ((VECTOR(int32_t, 2))(0L))))).xyyx)))).odd, ((VECTOR(int32_t, 2))(0x72678E62L)), ((VECTOR(int32_t, 2))((-2L))))))))), ((VECTOR(int32_t, 2))(0x06816706L)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x081B090FL)), ((VECTOR(int32_t, 2))(0L)), (-1L))).s4337014772277310)))).sa , l_834), ((VECTOR(uint8_t, 2))(0x72L)), 0x75L)), ((VECTOR(uint8_t, 8))(0xFDL)), ((VECTOR(uint8_t, 8))(1UL))))).s36)), 0x61L, 0x51L)), l_835, ((VECTOR(uint8_t, 4))(0UL)), 0xFEL, 1UL)).s8bd0)), ((VECTOR(uint8_t, 4))(0xE7L)), 255UL)).sd , l_836)));
                    for (l_822.x = 0; (l_822.x > (-16)); l_822.x--)
                    { /* block id: 375 */
                        uint32_t l_841 = 4UL;
                        l_829 = l_841;
                    }
                }
                l_843 = l_842;
            }
            unsigned int result = 0;
            result += l_444;
            result += l_712;
            result += l_715;
            result += l_716.sf;
            result += l_716.se;
            result += l_716.sd;
            result += l_716.sc;
            result += l_716.sb;
            result += l_716.sa;
            result += l_716.s9;
            result += l_716.s8;
            result += l_716.s7;
            result += l_716.s6;
            result += l_716.s5;
            result += l_716.s4;
            result += l_716.s3;
            result += l_716.s2;
            result += l_716.s1;
            result += l_716.s0;
            int l_746_i0, l_746_i1, l_746_i2;
            for (l_746_i0 = 0; l_746_i0 < 8; l_746_i0++) {
                for (l_746_i1 = 0; l_746_i1 < 6; l_746_i1++) {
                    for (l_746_i2 = 0; l_746_i2 < 5; l_746_i2++) {
                        result += l_746[l_746_i0][l_746_i1][l_746_i2];
                    }
                }
            }
            atomic_add(&p_1872->l_special_values[7], result);
        }
        else
        { /* block id: 381 */
            (1 + 1);
        }
        p_1872->g_848--;
    }
    (*l_121) |= (-6L);
    return (*p_1872->g_187);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S0 c_1873;
    struct S0* p_1872 = &c_1873;
    struct S0 c_1874 = {
        0x5F82L, // p_1872->g_8
        5L, // p_1872->g_18
        0UL, // p_1872->g_35
        1UL, // p_1872->g_70
        0x7AFF79C9L, // p_1872->g_89
        &p_1872->g_89, // p_1872->g_90
        &p_1872->g_89, // p_1872->g_93
        0L, // p_1872->g_95
        0UL, // p_1872->g_108
        7UL, // p_1872->g_111
        0x7CL, // p_1872->g_113
        0x5878L, // p_1872->g_116
        (-1L), // p_1872->g_124
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xCD894E1783C23091L), 0xCD894E1783C23091L), // p_1872->g_125
        &p_1872->g_111, // p_1872->g_134
        &p_1872->g_134, // p_1872->g_133
        &p_1872->g_133, // p_1872->g_132
        &p_1872->g_90, // p_1872->g_187
        (VECTOR(int64_t, 4))(0x554037B03C3254B4L, (VECTOR(int64_t, 2))(0x554037B03C3254B4L, 0x578ABA5384691195L), 0x578ABA5384691195L), // p_1872->g_190
        &p_1872->g_93, // p_1872->g_265
        0x1138FA42L, // p_1872->g_267
        4294967287UL, // p_1872->g_292
        0L, // p_1872->g_295
        (-10L), // p_1872->g_304
        (void*)0, // p_1872->g_317
        (VECTOR(uint8_t, 2))(0x81L, 0x9DL), // p_1872->g_326
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x958F17F7L), 0x958F17F7L), 0x958F17F7L, 1UL, 0x958F17F7L), // p_1872->g_333
        252UL, // p_1872->g_385
        {{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}},{{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L},{1L,0x3B3A273FL,4L,6L}}}, // p_1872->g_424
        0x01CC0293L, // p_1872->g_427
        0x337770D8L, // p_1872->g_844
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x37FEEA40L), 0x37FEEA40L), 0x37FEEA40L, 1L, 0x37FEEA40L, (VECTOR(int32_t, 2))(1L, 0x37FEEA40L), (VECTOR(int32_t, 2))(1L, 0x37FEEA40L), 1L, 0x37FEEA40L, 1L, 0x37FEEA40L), // p_1872->g_845
        (-1L), // p_1872->g_846
        0x28L, // p_1872->g_847
        0UL, // p_1872->g_848
        0xB8CFF4C51214A578L, // p_1872->g_863
        0x462F2BAEL, // p_1872->g_924
        0x5C6C4254L, // p_1872->g_926
        0x12L, // p_1872->g_927
        1UL, // p_1872->g_928
        (VECTOR(uint8_t, 2))(0UL, 255UL), // p_1872->g_981
        (VECTOR(uint64_t, 8))(0x60FB57030C736B34L, (VECTOR(uint64_t, 4))(0x60FB57030C736B34L, (VECTOR(uint64_t, 2))(0x60FB57030C736B34L, 0xFEA20AEB76F36EEBL), 0xFEA20AEB76F36EEBL), 0xFEA20AEB76F36EEBL, 0x60FB57030C736B34L, 0xFEA20AEB76F36EEBL), // p_1872->g_987
        &p_1872->g_304, // p_1872->g_1022
        &p_1872->g_1022, // p_1872->g_1021
        &p_1872->g_424[1][1][3], // p_1872->g_1024
        &p_1872->g_1024, // p_1872->g_1023
        (VECTOR(uint64_t, 16))(0xF8017B9E244B3E46L, (VECTOR(uint64_t, 4))(0xF8017B9E244B3E46L, (VECTOR(uint64_t, 2))(0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL), 0x1058BD8CB5AB777AL), 0x1058BD8CB5AB777AL, 0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL, (VECTOR(uint64_t, 2))(0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL), (VECTOR(uint64_t, 2))(0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL), 0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL, 0xF8017B9E244B3E46L, 0x1058BD8CB5AB777AL), // p_1872->g_1034
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xC2BE0F8DL), 0xC2BE0F8DL), 0xC2BE0F8DL, 4294967295UL, 0xC2BE0F8DL), // p_1872->g_1053
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x44311FD84CA7FDECL), 0x44311FD84CA7FDECL), 0x44311FD84CA7FDECL, 1UL, 0x44311FD84CA7FDECL), // p_1872->g_1056
        1UL, // p_1872->g_1058
        &p_1872->g_116, // p_1872->g_1064
        &p_1872->g_1064, // p_1872->g_1063
        (VECTOR(int32_t, 8))(0x6D686635L, (VECTOR(int32_t, 4))(0x6D686635L, (VECTOR(int32_t, 2))(0x6D686635L, 0L), 0L), 0L, 0x6D686635L, 0L), // p_1872->g_1074
        {{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}},{{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133},{&p_1872->g_133,&p_1872->g_133,(void*)0,&p_1872->g_133}}}, // p_1872->g_1079
        {&p_1872->g_1079[1][8][3]}, // p_1872->g_1078
        &p_1872->g_317, // p_1872->g_1115
        (void*)0, // p_1872->g_1156
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x875FL), 0x875FL), 0x875FL, 1UL, 0x875FL, (VECTOR(uint16_t, 2))(1UL, 0x875FL), (VECTOR(uint16_t, 2))(1UL, 0x875FL), 1UL, 0x875FL, 1UL, 0x875FL), // p_1872->g_1165
        (VECTOR(uint32_t, 8))(0xF66F55B7L, (VECTOR(uint32_t, 4))(0xF66F55B7L, (VECTOR(uint32_t, 2))(0xF66F55B7L, 0UL), 0UL), 0UL, 0xF66F55B7L, 0UL), // p_1872->g_1167
        {(void*)0,&p_1872->g_427,(void*)0,(void*)0,&p_1872->g_427,(void*)0}, // p_1872->g_1176
        &p_1872->g_1176[2], // p_1872->g_1175
        (VECTOR(int16_t, 8))(0x3088L, (VECTOR(int16_t, 4))(0x3088L, (VECTOR(int16_t, 2))(0x3088L, 0x50CFL), 0x50CFL), 0x50CFL, 0x3088L, 0x50CFL), // p_1872->g_1216
        (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 1L), 1L), // p_1872->g_1217
        (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 246UL), 246UL), // p_1872->g_1218
        &p_1872->g_90, // p_1872->g_1253
        {{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}},{{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93},{&p_1872->g_90,&p_1872->g_90,&p_1872->g_93,&p_1872->g_90,&p_1872->g_90,&p_1872->g_90,&p_1872->g_93}}}, // p_1872->g_1263
        &p_1872->g_1263[5][3][2], // p_1872->g_1262
        &p_1872->g_1262, // p_1872->g_1261
        (VECTOR(uint64_t, 4))(0x8D49585F905078B4L, (VECTOR(uint64_t, 2))(0x8D49585F905078B4L, 18446744073709551613UL), 18446744073709551613UL), // p_1872->g_1269
        3UL, // p_1872->g_1356
        (VECTOR(uint16_t, 2))(1UL, 1UL), // p_1872->g_1375
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x8886L), 0x8886L), // p_1872->g_1395
        18446744073709551607UL, // p_1872->g_1416
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL), // p_1872->g_1426
        (VECTOR(uint8_t, 2))(0xFBL, 0x4DL), // p_1872->g_1430
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1872->g_1431
        (VECTOR(uint8_t, 8))(0x7DL, (VECTOR(uint8_t, 4))(0x7DL, (VECTOR(uint8_t, 2))(0x7DL, 250UL), 250UL), 250UL, 0x7DL, 250UL), // p_1872->g_1433
        0x2D3C803BL, // p_1872->g_1443
        0x5C2A91EDL, // p_1872->g_1452
        (VECTOR(int64_t, 4))(0x3488A312F888F840L, (VECTOR(int64_t, 2))(0x3488A312F888F840L, 0x564671435160C564L), 0x564671435160C564L), // p_1872->g_1494
        (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 2UL), 2UL), 2UL, 4UL, 2UL, (VECTOR(uint32_t, 2))(4UL, 2UL), (VECTOR(uint32_t, 2))(4UL, 2UL), 4UL, 2UL, 4UL, 2UL), // p_1872->g_1533
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA29175A6L), 0xA29175A6L), 0xA29175A6L, 4294967295UL, 0xA29175A6L), // p_1872->g_1534
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_1872->g_1539
        (VECTOR(uint32_t, 2))(4UL, 0x16FDC6CCL), // p_1872->g_1541
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L)), // p_1872->g_1566
        (VECTOR(uint8_t, 16))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 250UL), 250UL), 250UL, 0xB5L, 250UL, (VECTOR(uint8_t, 2))(0xB5L, 250UL), (VECTOR(uint8_t, 2))(0xB5L, 250UL), 0xB5L, 250UL, 0xB5L, 250UL), // p_1872->g_1586
        {0x1D79L,(-3L),0x1D79L,0x1D79L,(-3L),0x1D79L}, // p_1872->g_1604
        6L, // p_1872->g_1683
        (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0x07L), 0x07L), 0x07L, 0x5FL, 0x07L), // p_1872->g_1698
        &p_1872->g_844, // p_1872->g_1723
        (VECTOR(uint16_t, 16))(0x6EDAL, (VECTOR(uint16_t, 4))(0x6EDAL, (VECTOR(uint16_t, 2))(0x6EDAL, 0UL), 0UL), 0UL, 0x6EDAL, 0UL, (VECTOR(uint16_t, 2))(0x6EDAL, 0UL), (VECTOR(uint16_t, 2))(0x6EDAL, 0UL), 0x6EDAL, 0UL, 0x6EDAL, 0UL), // p_1872->g_1728
        (VECTOR(uint16_t, 16))(0x7465L, (VECTOR(uint16_t, 4))(0x7465L, (VECTOR(uint16_t, 2))(0x7465L, 0x2A8BL), 0x2A8BL), 0x2A8BL, 0x7465L, 0x2A8BL, (VECTOR(uint16_t, 2))(0x7465L, 0x2A8BL), (VECTOR(uint16_t, 2))(0x7465L, 0x2A8BL), 0x7465L, 0x2A8BL, 0x7465L, 0x2A8BL), // p_1872->g_1729
        (VECTOR(int32_t, 2))((-1L), 0L), // p_1872->g_1732
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1A39BFC1L), 0x1A39BFC1L), // p_1872->g_1733
        (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xDE55L), 0xDE55L), // p_1872->g_1793
        (VECTOR(int16_t, 16))(0x2F16L, (VECTOR(int16_t, 4))(0x2F16L, (VECTOR(int16_t, 2))(0x2F16L, 0x3513L), 0x3513L), 0x3513L, 0x2F16L, 0x3513L, (VECTOR(int16_t, 2))(0x2F16L, 0x3513L), (VECTOR(int16_t, 2))(0x2F16L, 0x3513L), 0x2F16L, 0x3513L, 0x2F16L, 0x3513L), // p_1872->g_1799
        (VECTOR(int16_t, 16))(0x09F9L, (VECTOR(int16_t, 4))(0x09F9L, (VECTOR(int16_t, 2))(0x09F9L, 0x6B01L), 0x6B01L), 0x6B01L, 0x09F9L, 0x6B01L, (VECTOR(int16_t, 2))(0x09F9L, 0x6B01L), (VECTOR(int16_t, 2))(0x09F9L, 0x6B01L), 0x09F9L, 0x6B01L, 0x09F9L, 0x6B01L), // p_1872->g_1805
        (void*)0, // p_1872->g_1817
        &p_1872->g_844, // p_1872->g_1823
        0x14B1D945L, // p_1872->g_1871
        0, // p_1872->v_collective
        sequence_input[get_global_id(0)], // p_1872->global_0_offset
        sequence_input[get_global_id(1)], // p_1872->global_1_offset
        sequence_input[get_global_id(2)], // p_1872->global_2_offset
        sequence_input[get_local_id(0)], // p_1872->local_0_offset
        sequence_input[get_local_id(1)], // p_1872->local_1_offset
        sequence_input[get_local_id(2)], // p_1872->local_2_offset
        sequence_input[get_group_id(0)], // p_1872->group_0_offset
        sequence_input[get_group_id(1)], // p_1872->group_1_offset
        sequence_input[get_group_id(2)], // p_1872->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_1872->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1873 = c_1874;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1872);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1872->g_8, "p_1872->g_8", print_hash_value);
    transparent_crc(p_1872->g_18, "p_1872->g_18", print_hash_value);
    transparent_crc(p_1872->g_35, "p_1872->g_35", print_hash_value);
    transparent_crc(p_1872->g_70, "p_1872->g_70", print_hash_value);
    transparent_crc(p_1872->g_89, "p_1872->g_89", print_hash_value);
    transparent_crc(p_1872->g_95, "p_1872->g_95", print_hash_value);
    transparent_crc(p_1872->g_108, "p_1872->g_108", print_hash_value);
    transparent_crc(p_1872->g_111, "p_1872->g_111", print_hash_value);
    transparent_crc(p_1872->g_113, "p_1872->g_113", print_hash_value);
    transparent_crc(p_1872->g_116, "p_1872->g_116", print_hash_value);
    transparent_crc(p_1872->g_124, "p_1872->g_124", print_hash_value);
    transparent_crc(p_1872->g_125.x, "p_1872->g_125.x", print_hash_value);
    transparent_crc(p_1872->g_125.y, "p_1872->g_125.y", print_hash_value);
    transparent_crc(p_1872->g_125.z, "p_1872->g_125.z", print_hash_value);
    transparent_crc(p_1872->g_125.w, "p_1872->g_125.w", print_hash_value);
    transparent_crc(p_1872->g_190.x, "p_1872->g_190.x", print_hash_value);
    transparent_crc(p_1872->g_190.y, "p_1872->g_190.y", print_hash_value);
    transparent_crc(p_1872->g_190.z, "p_1872->g_190.z", print_hash_value);
    transparent_crc(p_1872->g_190.w, "p_1872->g_190.w", print_hash_value);
    transparent_crc(p_1872->g_267, "p_1872->g_267", print_hash_value);
    transparent_crc(p_1872->g_292, "p_1872->g_292", print_hash_value);
    transparent_crc(p_1872->g_295, "p_1872->g_295", print_hash_value);
    transparent_crc(p_1872->g_304, "p_1872->g_304", print_hash_value);
    transparent_crc(p_1872->g_326.x, "p_1872->g_326.x", print_hash_value);
    transparent_crc(p_1872->g_326.y, "p_1872->g_326.y", print_hash_value);
    transparent_crc(p_1872->g_333.s0, "p_1872->g_333.s0", print_hash_value);
    transparent_crc(p_1872->g_333.s1, "p_1872->g_333.s1", print_hash_value);
    transparent_crc(p_1872->g_333.s2, "p_1872->g_333.s2", print_hash_value);
    transparent_crc(p_1872->g_333.s3, "p_1872->g_333.s3", print_hash_value);
    transparent_crc(p_1872->g_333.s4, "p_1872->g_333.s4", print_hash_value);
    transparent_crc(p_1872->g_333.s5, "p_1872->g_333.s5", print_hash_value);
    transparent_crc(p_1872->g_333.s6, "p_1872->g_333.s6", print_hash_value);
    transparent_crc(p_1872->g_333.s7, "p_1872->g_333.s7", print_hash_value);
    transparent_crc(p_1872->g_385, "p_1872->g_385", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1872->g_424[i][j][k], "p_1872->g_424[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1872->g_427, "p_1872->g_427", print_hash_value);
    transparent_crc(p_1872->g_844, "p_1872->g_844", print_hash_value);
    transparent_crc(p_1872->g_845.s0, "p_1872->g_845.s0", print_hash_value);
    transparent_crc(p_1872->g_845.s1, "p_1872->g_845.s1", print_hash_value);
    transparent_crc(p_1872->g_845.s2, "p_1872->g_845.s2", print_hash_value);
    transparent_crc(p_1872->g_845.s3, "p_1872->g_845.s3", print_hash_value);
    transparent_crc(p_1872->g_845.s4, "p_1872->g_845.s4", print_hash_value);
    transparent_crc(p_1872->g_845.s5, "p_1872->g_845.s5", print_hash_value);
    transparent_crc(p_1872->g_845.s6, "p_1872->g_845.s6", print_hash_value);
    transparent_crc(p_1872->g_845.s7, "p_1872->g_845.s7", print_hash_value);
    transparent_crc(p_1872->g_845.s8, "p_1872->g_845.s8", print_hash_value);
    transparent_crc(p_1872->g_845.s9, "p_1872->g_845.s9", print_hash_value);
    transparent_crc(p_1872->g_845.sa, "p_1872->g_845.sa", print_hash_value);
    transparent_crc(p_1872->g_845.sb, "p_1872->g_845.sb", print_hash_value);
    transparent_crc(p_1872->g_845.sc, "p_1872->g_845.sc", print_hash_value);
    transparent_crc(p_1872->g_845.sd, "p_1872->g_845.sd", print_hash_value);
    transparent_crc(p_1872->g_845.se, "p_1872->g_845.se", print_hash_value);
    transparent_crc(p_1872->g_845.sf, "p_1872->g_845.sf", print_hash_value);
    transparent_crc(p_1872->g_846, "p_1872->g_846", print_hash_value);
    transparent_crc(p_1872->g_847, "p_1872->g_847", print_hash_value);
    transparent_crc(p_1872->g_848, "p_1872->g_848", print_hash_value);
    transparent_crc(p_1872->g_863, "p_1872->g_863", print_hash_value);
    transparent_crc(p_1872->g_924, "p_1872->g_924", print_hash_value);
    transparent_crc(p_1872->g_926, "p_1872->g_926", print_hash_value);
    transparent_crc(p_1872->g_927, "p_1872->g_927", print_hash_value);
    transparent_crc(p_1872->g_928, "p_1872->g_928", print_hash_value);
    transparent_crc(p_1872->g_981.x, "p_1872->g_981.x", print_hash_value);
    transparent_crc(p_1872->g_981.y, "p_1872->g_981.y", print_hash_value);
    transparent_crc(p_1872->g_987.s0, "p_1872->g_987.s0", print_hash_value);
    transparent_crc(p_1872->g_987.s1, "p_1872->g_987.s1", print_hash_value);
    transparent_crc(p_1872->g_987.s2, "p_1872->g_987.s2", print_hash_value);
    transparent_crc(p_1872->g_987.s3, "p_1872->g_987.s3", print_hash_value);
    transparent_crc(p_1872->g_987.s4, "p_1872->g_987.s4", print_hash_value);
    transparent_crc(p_1872->g_987.s5, "p_1872->g_987.s5", print_hash_value);
    transparent_crc(p_1872->g_987.s6, "p_1872->g_987.s6", print_hash_value);
    transparent_crc(p_1872->g_987.s7, "p_1872->g_987.s7", print_hash_value);
    transparent_crc(p_1872->g_1034.s0, "p_1872->g_1034.s0", print_hash_value);
    transparent_crc(p_1872->g_1034.s1, "p_1872->g_1034.s1", print_hash_value);
    transparent_crc(p_1872->g_1034.s2, "p_1872->g_1034.s2", print_hash_value);
    transparent_crc(p_1872->g_1034.s3, "p_1872->g_1034.s3", print_hash_value);
    transparent_crc(p_1872->g_1034.s4, "p_1872->g_1034.s4", print_hash_value);
    transparent_crc(p_1872->g_1034.s5, "p_1872->g_1034.s5", print_hash_value);
    transparent_crc(p_1872->g_1034.s6, "p_1872->g_1034.s6", print_hash_value);
    transparent_crc(p_1872->g_1034.s7, "p_1872->g_1034.s7", print_hash_value);
    transparent_crc(p_1872->g_1034.s8, "p_1872->g_1034.s8", print_hash_value);
    transparent_crc(p_1872->g_1034.s9, "p_1872->g_1034.s9", print_hash_value);
    transparent_crc(p_1872->g_1034.sa, "p_1872->g_1034.sa", print_hash_value);
    transparent_crc(p_1872->g_1034.sb, "p_1872->g_1034.sb", print_hash_value);
    transparent_crc(p_1872->g_1034.sc, "p_1872->g_1034.sc", print_hash_value);
    transparent_crc(p_1872->g_1034.sd, "p_1872->g_1034.sd", print_hash_value);
    transparent_crc(p_1872->g_1034.se, "p_1872->g_1034.se", print_hash_value);
    transparent_crc(p_1872->g_1034.sf, "p_1872->g_1034.sf", print_hash_value);
    transparent_crc(p_1872->g_1053.s0, "p_1872->g_1053.s0", print_hash_value);
    transparent_crc(p_1872->g_1053.s1, "p_1872->g_1053.s1", print_hash_value);
    transparent_crc(p_1872->g_1053.s2, "p_1872->g_1053.s2", print_hash_value);
    transparent_crc(p_1872->g_1053.s3, "p_1872->g_1053.s3", print_hash_value);
    transparent_crc(p_1872->g_1053.s4, "p_1872->g_1053.s4", print_hash_value);
    transparent_crc(p_1872->g_1053.s5, "p_1872->g_1053.s5", print_hash_value);
    transparent_crc(p_1872->g_1053.s6, "p_1872->g_1053.s6", print_hash_value);
    transparent_crc(p_1872->g_1053.s7, "p_1872->g_1053.s7", print_hash_value);
    transparent_crc(p_1872->g_1056.s0, "p_1872->g_1056.s0", print_hash_value);
    transparent_crc(p_1872->g_1056.s1, "p_1872->g_1056.s1", print_hash_value);
    transparent_crc(p_1872->g_1056.s2, "p_1872->g_1056.s2", print_hash_value);
    transparent_crc(p_1872->g_1056.s3, "p_1872->g_1056.s3", print_hash_value);
    transparent_crc(p_1872->g_1056.s4, "p_1872->g_1056.s4", print_hash_value);
    transparent_crc(p_1872->g_1056.s5, "p_1872->g_1056.s5", print_hash_value);
    transparent_crc(p_1872->g_1056.s6, "p_1872->g_1056.s6", print_hash_value);
    transparent_crc(p_1872->g_1056.s7, "p_1872->g_1056.s7", print_hash_value);
    transparent_crc(p_1872->g_1058, "p_1872->g_1058", print_hash_value);
    transparent_crc(p_1872->g_1074.s0, "p_1872->g_1074.s0", print_hash_value);
    transparent_crc(p_1872->g_1074.s1, "p_1872->g_1074.s1", print_hash_value);
    transparent_crc(p_1872->g_1074.s2, "p_1872->g_1074.s2", print_hash_value);
    transparent_crc(p_1872->g_1074.s3, "p_1872->g_1074.s3", print_hash_value);
    transparent_crc(p_1872->g_1074.s4, "p_1872->g_1074.s4", print_hash_value);
    transparent_crc(p_1872->g_1074.s5, "p_1872->g_1074.s5", print_hash_value);
    transparent_crc(p_1872->g_1074.s6, "p_1872->g_1074.s6", print_hash_value);
    transparent_crc(p_1872->g_1074.s7, "p_1872->g_1074.s7", print_hash_value);
    transparent_crc(p_1872->g_1165.s0, "p_1872->g_1165.s0", print_hash_value);
    transparent_crc(p_1872->g_1165.s1, "p_1872->g_1165.s1", print_hash_value);
    transparent_crc(p_1872->g_1165.s2, "p_1872->g_1165.s2", print_hash_value);
    transparent_crc(p_1872->g_1165.s3, "p_1872->g_1165.s3", print_hash_value);
    transparent_crc(p_1872->g_1165.s4, "p_1872->g_1165.s4", print_hash_value);
    transparent_crc(p_1872->g_1165.s5, "p_1872->g_1165.s5", print_hash_value);
    transparent_crc(p_1872->g_1165.s6, "p_1872->g_1165.s6", print_hash_value);
    transparent_crc(p_1872->g_1165.s7, "p_1872->g_1165.s7", print_hash_value);
    transparent_crc(p_1872->g_1165.s8, "p_1872->g_1165.s8", print_hash_value);
    transparent_crc(p_1872->g_1165.s9, "p_1872->g_1165.s9", print_hash_value);
    transparent_crc(p_1872->g_1165.sa, "p_1872->g_1165.sa", print_hash_value);
    transparent_crc(p_1872->g_1165.sb, "p_1872->g_1165.sb", print_hash_value);
    transparent_crc(p_1872->g_1165.sc, "p_1872->g_1165.sc", print_hash_value);
    transparent_crc(p_1872->g_1165.sd, "p_1872->g_1165.sd", print_hash_value);
    transparent_crc(p_1872->g_1165.se, "p_1872->g_1165.se", print_hash_value);
    transparent_crc(p_1872->g_1165.sf, "p_1872->g_1165.sf", print_hash_value);
    transparent_crc(p_1872->g_1167.s0, "p_1872->g_1167.s0", print_hash_value);
    transparent_crc(p_1872->g_1167.s1, "p_1872->g_1167.s1", print_hash_value);
    transparent_crc(p_1872->g_1167.s2, "p_1872->g_1167.s2", print_hash_value);
    transparent_crc(p_1872->g_1167.s3, "p_1872->g_1167.s3", print_hash_value);
    transparent_crc(p_1872->g_1167.s4, "p_1872->g_1167.s4", print_hash_value);
    transparent_crc(p_1872->g_1167.s5, "p_1872->g_1167.s5", print_hash_value);
    transparent_crc(p_1872->g_1167.s6, "p_1872->g_1167.s6", print_hash_value);
    transparent_crc(p_1872->g_1167.s7, "p_1872->g_1167.s7", print_hash_value);
    transparent_crc(p_1872->g_1216.s0, "p_1872->g_1216.s0", print_hash_value);
    transparent_crc(p_1872->g_1216.s1, "p_1872->g_1216.s1", print_hash_value);
    transparent_crc(p_1872->g_1216.s2, "p_1872->g_1216.s2", print_hash_value);
    transparent_crc(p_1872->g_1216.s3, "p_1872->g_1216.s3", print_hash_value);
    transparent_crc(p_1872->g_1216.s4, "p_1872->g_1216.s4", print_hash_value);
    transparent_crc(p_1872->g_1216.s5, "p_1872->g_1216.s5", print_hash_value);
    transparent_crc(p_1872->g_1216.s6, "p_1872->g_1216.s6", print_hash_value);
    transparent_crc(p_1872->g_1216.s7, "p_1872->g_1216.s7", print_hash_value);
    transparent_crc(p_1872->g_1217.x, "p_1872->g_1217.x", print_hash_value);
    transparent_crc(p_1872->g_1217.y, "p_1872->g_1217.y", print_hash_value);
    transparent_crc(p_1872->g_1217.z, "p_1872->g_1217.z", print_hash_value);
    transparent_crc(p_1872->g_1217.w, "p_1872->g_1217.w", print_hash_value);
    transparent_crc(p_1872->g_1218.x, "p_1872->g_1218.x", print_hash_value);
    transparent_crc(p_1872->g_1218.y, "p_1872->g_1218.y", print_hash_value);
    transparent_crc(p_1872->g_1218.z, "p_1872->g_1218.z", print_hash_value);
    transparent_crc(p_1872->g_1218.w, "p_1872->g_1218.w", print_hash_value);
    transparent_crc(p_1872->g_1269.x, "p_1872->g_1269.x", print_hash_value);
    transparent_crc(p_1872->g_1269.y, "p_1872->g_1269.y", print_hash_value);
    transparent_crc(p_1872->g_1269.z, "p_1872->g_1269.z", print_hash_value);
    transparent_crc(p_1872->g_1269.w, "p_1872->g_1269.w", print_hash_value);
    transparent_crc(p_1872->g_1356, "p_1872->g_1356", print_hash_value);
    transparent_crc(p_1872->g_1375.x, "p_1872->g_1375.x", print_hash_value);
    transparent_crc(p_1872->g_1375.y, "p_1872->g_1375.y", print_hash_value);
    transparent_crc(p_1872->g_1395.x, "p_1872->g_1395.x", print_hash_value);
    transparent_crc(p_1872->g_1395.y, "p_1872->g_1395.y", print_hash_value);
    transparent_crc(p_1872->g_1395.z, "p_1872->g_1395.z", print_hash_value);
    transparent_crc(p_1872->g_1395.w, "p_1872->g_1395.w", print_hash_value);
    transparent_crc(p_1872->g_1416, "p_1872->g_1416", print_hash_value);
    transparent_crc(p_1872->g_1426.s0, "p_1872->g_1426.s0", print_hash_value);
    transparent_crc(p_1872->g_1426.s1, "p_1872->g_1426.s1", print_hash_value);
    transparent_crc(p_1872->g_1426.s2, "p_1872->g_1426.s2", print_hash_value);
    transparent_crc(p_1872->g_1426.s3, "p_1872->g_1426.s3", print_hash_value);
    transparent_crc(p_1872->g_1426.s4, "p_1872->g_1426.s4", print_hash_value);
    transparent_crc(p_1872->g_1426.s5, "p_1872->g_1426.s5", print_hash_value);
    transparent_crc(p_1872->g_1426.s6, "p_1872->g_1426.s6", print_hash_value);
    transparent_crc(p_1872->g_1426.s7, "p_1872->g_1426.s7", print_hash_value);
    transparent_crc(p_1872->g_1430.x, "p_1872->g_1430.x", print_hash_value);
    transparent_crc(p_1872->g_1430.y, "p_1872->g_1430.y", print_hash_value);
    transparent_crc(p_1872->g_1431.s0, "p_1872->g_1431.s0", print_hash_value);
    transparent_crc(p_1872->g_1431.s1, "p_1872->g_1431.s1", print_hash_value);
    transparent_crc(p_1872->g_1431.s2, "p_1872->g_1431.s2", print_hash_value);
    transparent_crc(p_1872->g_1431.s3, "p_1872->g_1431.s3", print_hash_value);
    transparent_crc(p_1872->g_1431.s4, "p_1872->g_1431.s4", print_hash_value);
    transparent_crc(p_1872->g_1431.s5, "p_1872->g_1431.s5", print_hash_value);
    transparent_crc(p_1872->g_1431.s6, "p_1872->g_1431.s6", print_hash_value);
    transparent_crc(p_1872->g_1431.s7, "p_1872->g_1431.s7", print_hash_value);
    transparent_crc(p_1872->g_1431.s8, "p_1872->g_1431.s8", print_hash_value);
    transparent_crc(p_1872->g_1431.s9, "p_1872->g_1431.s9", print_hash_value);
    transparent_crc(p_1872->g_1431.sa, "p_1872->g_1431.sa", print_hash_value);
    transparent_crc(p_1872->g_1431.sb, "p_1872->g_1431.sb", print_hash_value);
    transparent_crc(p_1872->g_1431.sc, "p_1872->g_1431.sc", print_hash_value);
    transparent_crc(p_1872->g_1431.sd, "p_1872->g_1431.sd", print_hash_value);
    transparent_crc(p_1872->g_1431.se, "p_1872->g_1431.se", print_hash_value);
    transparent_crc(p_1872->g_1431.sf, "p_1872->g_1431.sf", print_hash_value);
    transparent_crc(p_1872->g_1433.s0, "p_1872->g_1433.s0", print_hash_value);
    transparent_crc(p_1872->g_1433.s1, "p_1872->g_1433.s1", print_hash_value);
    transparent_crc(p_1872->g_1433.s2, "p_1872->g_1433.s2", print_hash_value);
    transparent_crc(p_1872->g_1433.s3, "p_1872->g_1433.s3", print_hash_value);
    transparent_crc(p_1872->g_1433.s4, "p_1872->g_1433.s4", print_hash_value);
    transparent_crc(p_1872->g_1433.s5, "p_1872->g_1433.s5", print_hash_value);
    transparent_crc(p_1872->g_1433.s6, "p_1872->g_1433.s6", print_hash_value);
    transparent_crc(p_1872->g_1433.s7, "p_1872->g_1433.s7", print_hash_value);
    transparent_crc(p_1872->g_1443, "p_1872->g_1443", print_hash_value);
    transparent_crc(p_1872->g_1452, "p_1872->g_1452", print_hash_value);
    transparent_crc(p_1872->g_1494.x, "p_1872->g_1494.x", print_hash_value);
    transparent_crc(p_1872->g_1494.y, "p_1872->g_1494.y", print_hash_value);
    transparent_crc(p_1872->g_1494.z, "p_1872->g_1494.z", print_hash_value);
    transparent_crc(p_1872->g_1494.w, "p_1872->g_1494.w", print_hash_value);
    transparent_crc(p_1872->g_1533.s0, "p_1872->g_1533.s0", print_hash_value);
    transparent_crc(p_1872->g_1533.s1, "p_1872->g_1533.s1", print_hash_value);
    transparent_crc(p_1872->g_1533.s2, "p_1872->g_1533.s2", print_hash_value);
    transparent_crc(p_1872->g_1533.s3, "p_1872->g_1533.s3", print_hash_value);
    transparent_crc(p_1872->g_1533.s4, "p_1872->g_1533.s4", print_hash_value);
    transparent_crc(p_1872->g_1533.s5, "p_1872->g_1533.s5", print_hash_value);
    transparent_crc(p_1872->g_1533.s6, "p_1872->g_1533.s6", print_hash_value);
    transparent_crc(p_1872->g_1533.s7, "p_1872->g_1533.s7", print_hash_value);
    transparent_crc(p_1872->g_1533.s8, "p_1872->g_1533.s8", print_hash_value);
    transparent_crc(p_1872->g_1533.s9, "p_1872->g_1533.s9", print_hash_value);
    transparent_crc(p_1872->g_1533.sa, "p_1872->g_1533.sa", print_hash_value);
    transparent_crc(p_1872->g_1533.sb, "p_1872->g_1533.sb", print_hash_value);
    transparent_crc(p_1872->g_1533.sc, "p_1872->g_1533.sc", print_hash_value);
    transparent_crc(p_1872->g_1533.sd, "p_1872->g_1533.sd", print_hash_value);
    transparent_crc(p_1872->g_1533.se, "p_1872->g_1533.se", print_hash_value);
    transparent_crc(p_1872->g_1533.sf, "p_1872->g_1533.sf", print_hash_value);
    transparent_crc(p_1872->g_1534.s0, "p_1872->g_1534.s0", print_hash_value);
    transparent_crc(p_1872->g_1534.s1, "p_1872->g_1534.s1", print_hash_value);
    transparent_crc(p_1872->g_1534.s2, "p_1872->g_1534.s2", print_hash_value);
    transparent_crc(p_1872->g_1534.s3, "p_1872->g_1534.s3", print_hash_value);
    transparent_crc(p_1872->g_1534.s4, "p_1872->g_1534.s4", print_hash_value);
    transparent_crc(p_1872->g_1534.s5, "p_1872->g_1534.s5", print_hash_value);
    transparent_crc(p_1872->g_1534.s6, "p_1872->g_1534.s6", print_hash_value);
    transparent_crc(p_1872->g_1534.s7, "p_1872->g_1534.s7", print_hash_value);
    transparent_crc(p_1872->g_1539.x, "p_1872->g_1539.x", print_hash_value);
    transparent_crc(p_1872->g_1539.y, "p_1872->g_1539.y", print_hash_value);
    transparent_crc(p_1872->g_1541.x, "p_1872->g_1541.x", print_hash_value);
    transparent_crc(p_1872->g_1541.y, "p_1872->g_1541.y", print_hash_value);
    transparent_crc(p_1872->g_1566.s0, "p_1872->g_1566.s0", print_hash_value);
    transparent_crc(p_1872->g_1566.s1, "p_1872->g_1566.s1", print_hash_value);
    transparent_crc(p_1872->g_1566.s2, "p_1872->g_1566.s2", print_hash_value);
    transparent_crc(p_1872->g_1566.s3, "p_1872->g_1566.s3", print_hash_value);
    transparent_crc(p_1872->g_1566.s4, "p_1872->g_1566.s4", print_hash_value);
    transparent_crc(p_1872->g_1566.s5, "p_1872->g_1566.s5", print_hash_value);
    transparent_crc(p_1872->g_1566.s6, "p_1872->g_1566.s6", print_hash_value);
    transparent_crc(p_1872->g_1566.s7, "p_1872->g_1566.s7", print_hash_value);
    transparent_crc(p_1872->g_1566.s8, "p_1872->g_1566.s8", print_hash_value);
    transparent_crc(p_1872->g_1566.s9, "p_1872->g_1566.s9", print_hash_value);
    transparent_crc(p_1872->g_1566.sa, "p_1872->g_1566.sa", print_hash_value);
    transparent_crc(p_1872->g_1566.sb, "p_1872->g_1566.sb", print_hash_value);
    transparent_crc(p_1872->g_1566.sc, "p_1872->g_1566.sc", print_hash_value);
    transparent_crc(p_1872->g_1566.sd, "p_1872->g_1566.sd", print_hash_value);
    transparent_crc(p_1872->g_1566.se, "p_1872->g_1566.se", print_hash_value);
    transparent_crc(p_1872->g_1566.sf, "p_1872->g_1566.sf", print_hash_value);
    transparent_crc(p_1872->g_1586.s0, "p_1872->g_1586.s0", print_hash_value);
    transparent_crc(p_1872->g_1586.s1, "p_1872->g_1586.s1", print_hash_value);
    transparent_crc(p_1872->g_1586.s2, "p_1872->g_1586.s2", print_hash_value);
    transparent_crc(p_1872->g_1586.s3, "p_1872->g_1586.s3", print_hash_value);
    transparent_crc(p_1872->g_1586.s4, "p_1872->g_1586.s4", print_hash_value);
    transparent_crc(p_1872->g_1586.s5, "p_1872->g_1586.s5", print_hash_value);
    transparent_crc(p_1872->g_1586.s6, "p_1872->g_1586.s6", print_hash_value);
    transparent_crc(p_1872->g_1586.s7, "p_1872->g_1586.s7", print_hash_value);
    transparent_crc(p_1872->g_1586.s8, "p_1872->g_1586.s8", print_hash_value);
    transparent_crc(p_1872->g_1586.s9, "p_1872->g_1586.s9", print_hash_value);
    transparent_crc(p_1872->g_1586.sa, "p_1872->g_1586.sa", print_hash_value);
    transparent_crc(p_1872->g_1586.sb, "p_1872->g_1586.sb", print_hash_value);
    transparent_crc(p_1872->g_1586.sc, "p_1872->g_1586.sc", print_hash_value);
    transparent_crc(p_1872->g_1586.sd, "p_1872->g_1586.sd", print_hash_value);
    transparent_crc(p_1872->g_1586.se, "p_1872->g_1586.se", print_hash_value);
    transparent_crc(p_1872->g_1586.sf, "p_1872->g_1586.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1872->g_1604[i], "p_1872->g_1604[i]", print_hash_value);

    }
    transparent_crc(p_1872->g_1683, "p_1872->g_1683", print_hash_value);
    transparent_crc(p_1872->g_1698.s0, "p_1872->g_1698.s0", print_hash_value);
    transparent_crc(p_1872->g_1698.s1, "p_1872->g_1698.s1", print_hash_value);
    transparent_crc(p_1872->g_1698.s2, "p_1872->g_1698.s2", print_hash_value);
    transparent_crc(p_1872->g_1698.s3, "p_1872->g_1698.s3", print_hash_value);
    transparent_crc(p_1872->g_1698.s4, "p_1872->g_1698.s4", print_hash_value);
    transparent_crc(p_1872->g_1698.s5, "p_1872->g_1698.s5", print_hash_value);
    transparent_crc(p_1872->g_1698.s6, "p_1872->g_1698.s6", print_hash_value);
    transparent_crc(p_1872->g_1698.s7, "p_1872->g_1698.s7", print_hash_value);
    transparent_crc(p_1872->g_1728.s0, "p_1872->g_1728.s0", print_hash_value);
    transparent_crc(p_1872->g_1728.s1, "p_1872->g_1728.s1", print_hash_value);
    transparent_crc(p_1872->g_1728.s2, "p_1872->g_1728.s2", print_hash_value);
    transparent_crc(p_1872->g_1728.s3, "p_1872->g_1728.s3", print_hash_value);
    transparent_crc(p_1872->g_1728.s4, "p_1872->g_1728.s4", print_hash_value);
    transparent_crc(p_1872->g_1728.s5, "p_1872->g_1728.s5", print_hash_value);
    transparent_crc(p_1872->g_1728.s6, "p_1872->g_1728.s6", print_hash_value);
    transparent_crc(p_1872->g_1728.s7, "p_1872->g_1728.s7", print_hash_value);
    transparent_crc(p_1872->g_1728.s8, "p_1872->g_1728.s8", print_hash_value);
    transparent_crc(p_1872->g_1728.s9, "p_1872->g_1728.s9", print_hash_value);
    transparent_crc(p_1872->g_1728.sa, "p_1872->g_1728.sa", print_hash_value);
    transparent_crc(p_1872->g_1728.sb, "p_1872->g_1728.sb", print_hash_value);
    transparent_crc(p_1872->g_1728.sc, "p_1872->g_1728.sc", print_hash_value);
    transparent_crc(p_1872->g_1728.sd, "p_1872->g_1728.sd", print_hash_value);
    transparent_crc(p_1872->g_1728.se, "p_1872->g_1728.se", print_hash_value);
    transparent_crc(p_1872->g_1728.sf, "p_1872->g_1728.sf", print_hash_value);
    transparent_crc(p_1872->g_1729.s0, "p_1872->g_1729.s0", print_hash_value);
    transparent_crc(p_1872->g_1729.s1, "p_1872->g_1729.s1", print_hash_value);
    transparent_crc(p_1872->g_1729.s2, "p_1872->g_1729.s2", print_hash_value);
    transparent_crc(p_1872->g_1729.s3, "p_1872->g_1729.s3", print_hash_value);
    transparent_crc(p_1872->g_1729.s4, "p_1872->g_1729.s4", print_hash_value);
    transparent_crc(p_1872->g_1729.s5, "p_1872->g_1729.s5", print_hash_value);
    transparent_crc(p_1872->g_1729.s6, "p_1872->g_1729.s6", print_hash_value);
    transparent_crc(p_1872->g_1729.s7, "p_1872->g_1729.s7", print_hash_value);
    transparent_crc(p_1872->g_1729.s8, "p_1872->g_1729.s8", print_hash_value);
    transparent_crc(p_1872->g_1729.s9, "p_1872->g_1729.s9", print_hash_value);
    transparent_crc(p_1872->g_1729.sa, "p_1872->g_1729.sa", print_hash_value);
    transparent_crc(p_1872->g_1729.sb, "p_1872->g_1729.sb", print_hash_value);
    transparent_crc(p_1872->g_1729.sc, "p_1872->g_1729.sc", print_hash_value);
    transparent_crc(p_1872->g_1729.sd, "p_1872->g_1729.sd", print_hash_value);
    transparent_crc(p_1872->g_1729.se, "p_1872->g_1729.se", print_hash_value);
    transparent_crc(p_1872->g_1729.sf, "p_1872->g_1729.sf", print_hash_value);
    transparent_crc(p_1872->g_1732.x, "p_1872->g_1732.x", print_hash_value);
    transparent_crc(p_1872->g_1732.y, "p_1872->g_1732.y", print_hash_value);
    transparent_crc(p_1872->g_1733.x, "p_1872->g_1733.x", print_hash_value);
    transparent_crc(p_1872->g_1733.y, "p_1872->g_1733.y", print_hash_value);
    transparent_crc(p_1872->g_1733.z, "p_1872->g_1733.z", print_hash_value);
    transparent_crc(p_1872->g_1733.w, "p_1872->g_1733.w", print_hash_value);
    transparent_crc(p_1872->g_1793.x, "p_1872->g_1793.x", print_hash_value);
    transparent_crc(p_1872->g_1793.y, "p_1872->g_1793.y", print_hash_value);
    transparent_crc(p_1872->g_1793.z, "p_1872->g_1793.z", print_hash_value);
    transparent_crc(p_1872->g_1793.w, "p_1872->g_1793.w", print_hash_value);
    transparent_crc(p_1872->g_1799.s0, "p_1872->g_1799.s0", print_hash_value);
    transparent_crc(p_1872->g_1799.s1, "p_1872->g_1799.s1", print_hash_value);
    transparent_crc(p_1872->g_1799.s2, "p_1872->g_1799.s2", print_hash_value);
    transparent_crc(p_1872->g_1799.s3, "p_1872->g_1799.s3", print_hash_value);
    transparent_crc(p_1872->g_1799.s4, "p_1872->g_1799.s4", print_hash_value);
    transparent_crc(p_1872->g_1799.s5, "p_1872->g_1799.s5", print_hash_value);
    transparent_crc(p_1872->g_1799.s6, "p_1872->g_1799.s6", print_hash_value);
    transparent_crc(p_1872->g_1799.s7, "p_1872->g_1799.s7", print_hash_value);
    transparent_crc(p_1872->g_1799.s8, "p_1872->g_1799.s8", print_hash_value);
    transparent_crc(p_1872->g_1799.s9, "p_1872->g_1799.s9", print_hash_value);
    transparent_crc(p_1872->g_1799.sa, "p_1872->g_1799.sa", print_hash_value);
    transparent_crc(p_1872->g_1799.sb, "p_1872->g_1799.sb", print_hash_value);
    transparent_crc(p_1872->g_1799.sc, "p_1872->g_1799.sc", print_hash_value);
    transparent_crc(p_1872->g_1799.sd, "p_1872->g_1799.sd", print_hash_value);
    transparent_crc(p_1872->g_1799.se, "p_1872->g_1799.se", print_hash_value);
    transparent_crc(p_1872->g_1799.sf, "p_1872->g_1799.sf", print_hash_value);
    transparent_crc(p_1872->g_1805.s0, "p_1872->g_1805.s0", print_hash_value);
    transparent_crc(p_1872->g_1805.s1, "p_1872->g_1805.s1", print_hash_value);
    transparent_crc(p_1872->g_1805.s2, "p_1872->g_1805.s2", print_hash_value);
    transparent_crc(p_1872->g_1805.s3, "p_1872->g_1805.s3", print_hash_value);
    transparent_crc(p_1872->g_1805.s4, "p_1872->g_1805.s4", print_hash_value);
    transparent_crc(p_1872->g_1805.s5, "p_1872->g_1805.s5", print_hash_value);
    transparent_crc(p_1872->g_1805.s6, "p_1872->g_1805.s6", print_hash_value);
    transparent_crc(p_1872->g_1805.s7, "p_1872->g_1805.s7", print_hash_value);
    transparent_crc(p_1872->g_1805.s8, "p_1872->g_1805.s8", print_hash_value);
    transparent_crc(p_1872->g_1805.s9, "p_1872->g_1805.s9", print_hash_value);
    transparent_crc(p_1872->g_1805.sa, "p_1872->g_1805.sa", print_hash_value);
    transparent_crc(p_1872->g_1805.sb, "p_1872->g_1805.sb", print_hash_value);
    transparent_crc(p_1872->g_1805.sc, "p_1872->g_1805.sc", print_hash_value);
    transparent_crc(p_1872->g_1805.sd, "p_1872->g_1805.sd", print_hash_value);
    transparent_crc(p_1872->g_1805.se, "p_1872->g_1805.se", print_hash_value);
    transparent_crc(p_1872->g_1805.sf, "p_1872->g_1805.sf", print_hash_value);
    transparent_crc(p_1872->g_1871, "p_1872->g_1871", print_hash_value);
    transparent_crc(p_1872->v_collective, "p_1872->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 11; i++)
            transparent_crc(p_1872->g_special_values[i + 11 * get_linear_group_id()], "p_1872->g_special_values[i + 11 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 11; i++)
            transparent_crc(p_1872->l_special_values[i], "p_1872->l_special_values[i]", print_hash_value);
    transparent_crc(p_1872->l_comm_values[get_linear_local_id()], "p_1872->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1872->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_1872->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
