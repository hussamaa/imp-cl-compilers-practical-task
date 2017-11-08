// -g 45,86,2 -l 1,2,1
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


// Seed: 1328013865

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int64_t g_7;
    uint32_t g_30;
    uint16_t g_35;
    int32_t g_40[7][3];
    int64_t g_73;
    int64_t g_81[5][2];
    int32_t g_82;
    uint32_t g_112[4];
    int8_t g_122[5][2][8];
    uint64_t g_124;
    int8_t g_126;
    int32_t *g_128;
    int32_t **g_127;
    int32_t g_169;
    int32_t g_178;
    int32_t g_180[2];
    uint32_t *g_215;
    uint32_t **g_214;
    uint16_t g_259;
    int16_t g_262;
    int64_t *g_274;
    int16_t g_298;
    uint8_t g_316;
    volatile uint64_t g_463;
    volatile uint64_t *g_462;
    volatile uint64_t **g_461;
    uint32_t g_546[1][1][2];
    volatile uint32_t ***** volatile *g_598;
    int32_t g_735;
    volatile uint16_t * volatile *g_737;
    volatile uint32_t * volatile * volatile * volatile g_746;
    volatile uint32_t * volatile * volatile * volatile *g_745;
    uint16_t g_771;
    int32_t g_792;
    uint8_t g_797;
    uint32_t ***g_802;
    uint32_t ****g_801[7][9];
    int32_t ***g_874;
    int16_t g_876;
    uint32_t g_963;
    int32_t g_1135;
    int8_t *g_1192[6][5][7];
    int32_t g_1195;
    uint32_t g_1250;
    uint32_t *****g_1312;
    uint32_t ******g_1311;
    int8_t g_1361;
    uint32_t g_1382;
    uint32_t g_1483[5];
    int64_t **g_1511;
    int8_t g_1586[1];
    int64_t g_1648[8][6][3];
    uint16_t g_1699;
    volatile uint64_t **g_1702;
    volatile uint64_t g_1706[2];
    int16_t *g_1719;
    int16_t **g_1718;
    int16_t ***g_1717;
    int32_t g_1851;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1859);
int8_t  func_20(int8_t  p_21, int32_t  p_22, struct S0 * p_1859);
int8_t  func_23(uint32_t  p_24, uint32_t  p_25, struct S0 * p_1859);
int32_t * func_42(uint16_t  p_43, int32_t ** p_44, uint64_t  p_45, uint16_t * p_46, struct S0 * p_1859);
int64_t  func_57(int32_t * p_58, int32_t  p_59, uint32_t  p_60, struct S0 * p_1859);
int32_t * func_61(uint32_t  p_62, int32_t * p_63, uint32_t  p_64, int32_t ** p_65, struct S0 * p_1859);
int32_t * func_66(int64_t  p_67, uint32_t  p_68, uint32_t  p_69, int64_t  p_70, int32_t ** p_71, struct S0 * p_1859);
uint8_t  func_77(int64_t * p_78, int64_t * p_79, struct S0 * p_1859);
int8_t  func_100(int32_t  p_101, int32_t  p_102, struct S0 * p_1859);
uint16_t  func_103(int32_t * p_104, int32_t ** p_105, int8_t  p_106, int32_t * p_107, uint8_t  p_108, struct S0 * p_1859);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1859->g_7 p_1859->g_30 p_1859->g_316 p_1859->g_127 p_1859->g_128 p_1859->g_874 p_1859->g_262 p_1859->g_802 p_1859->g_214 p_1859->g_112 p_1859->g_180 p_1859->g_797 p_1859->g_1361 p_1859->g_215 p_1859->g_546 p_1859->g_1135 p_1859->g_40 p_1859->g_735 p_1859->g_1250 p_1859->g_771 p_1859->g_122 p_1859->g_126 p_1859->g_81 p_1859->g_35 p_1859->g_1483 p_1859->g_169 p_1859->g_259 p_1859->g_1195 p_1859->g_1586 p_1859->g_82 p_1859->g_792 p_1859->g_1648 p_1859->g_298 p_1859->g_1699 p_1859->g_1702 p_1859->g_1717 p_1859->g_1718 p_1859->g_1719 p_1859->g_124 p_1859->g_963 p_1859->g_1311 p_1859->g_1312 p_1859->g_73 p_1859->g_1851 p_1859->g_876 p_1859->g_178
 * writes: p_1859->g_35 p_1859->g_30 p_1859->g_316 p_1859->g_735 p_1859->g_1250 p_1859->g_1135 p_1859->g_128 p_1859->g_124 p_1859->g_298 p_1859->g_215 p_1859->g_797 p_1859->g_1382 p_1859->g_180 p_1859->g_771 p_1859->g_259 p_1859->g_963 p_1859->g_1511 p_1859->g_112 p_1859->g_82 p_1859->g_792 p_1859->g_1192 p_1859->g_40 p_1859->g_126 p_1859->g_1648 p_1859->g_81 p_1859->g_1586 p_1859->g_1699 p_1859->g_73 p_1859->g_214 p_1859->g_1851 p_1859->g_876 p_1859->g_178
 */
uint32_t  func_1(struct S0 * p_1859)
{ /* block id: 4 */
    int32_t l_4 = (-1L);
    int64_t l_33 = 1L;
    uint16_t *l_34 = &p_1859->g_35;
    int32_t l_1848 = 0x0317CEC0L;
    int64_t l_1849 = 9L;
    int32_t *l_1850 = &p_1859->g_1851;
    (*l_1850) |= (safe_add_func_uint8_t_u_u(l_4, (safe_rshift_func_uint8_t_u_u(((p_1859->g_7 ^ (safe_mod_func_uint16_t_u_u(((l_4 == (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_1848 |= (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((((func_20(func_23((safe_mul_func_int16_t_s_s(((((*l_34) = ((l_4 == ((l_4 > (safe_mul_func_int16_t_s_s((p_1859->g_30 <= (l_4 | 65529UL)), ((safe_mul_func_uint16_t_u_u(l_4, p_1859->g_30)) , p_1859->g_30)))) , 1UL)) && l_33)) != p_1859->g_30) >= 0x2499E68FC786C7A8L), l_33)), p_1859->g_30, p_1859), l_33, p_1859) <= 7UL) > l_4) , l_33), 0x6099L)), 18446744073709551615UL))), p_1859->g_169)), 2L)), l_4))) , 65528UL), l_1849))) & l_1849), 2))));
    for (p_1859->g_876 = (-19); (p_1859->g_876 >= (-22)); p_1859->g_876 = safe_sub_func_uint32_t_u_u(p_1859->g_876, 5))
    { /* block id: 896 */
        int32_t *l_1854 = (void*)0;
        (*p_1859->g_127) = l_1854;
        for (p_1859->g_178 = (-11); (p_1859->g_178 > 7); p_1859->g_178 = safe_add_func_uint16_t_u_u(p_1859->g_178, 7))
        { /* block id: 900 */
            (*p_1859->g_127) = l_1854;
        }
        for (p_1859->g_124 = 10; (p_1859->g_124 > 27); p_1859->g_124 = safe_add_func_int16_t_s_s(p_1859->g_124, 1))
        { /* block id: 905 */
            return p_1859->g_1483[3];
        }
    }
    return (*l_1850);
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_874 p_1859->g_127 p_1859->g_73 p_1859->g_963 p_1859->g_802 p_1859->g_214
 * writes: p_1859->g_128 p_1859->g_73 p_1859->g_963 p_1859->g_214
 */
int8_t  func_20(int8_t  p_21, int32_t  p_22, struct S0 * p_1859)
{ /* block id: 877 */
    int32_t *l_1842 = (void*)0;
    (**p_1859->g_874) = l_1842;
    (**p_1859->g_874) = l_1842;
    for (p_1859->g_73 = (-1); (p_1859->g_73 >= 24); ++p_1859->g_73)
    { /* block id: 882 */
        (**p_1859->g_874) = l_1842;
        for (p_1859->g_963 = 0; (p_1859->g_963 == 34); p_1859->g_963++)
        { /* block id: 886 */
            int32_t *l_1847 = (void*)0;
            (*p_1859->g_127) = l_1847;
        }
        (*p_1859->g_802) = (*p_1859->g_802);
    }
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_127 p_1859->g_128 p_1859->g_316 p_1859->g_874 p_1859->g_262 p_1859->g_802 p_1859->g_214 p_1859->g_112 p_1859->g_180 p_1859->g_1361 p_1859->g_215 p_1859->g_546 p_1859->g_1135 p_1859->g_40 p_1859->g_1250 p_1859->g_771 p_1859->g_735 p_1859->g_122 p_1859->g_126 p_1859->g_81 p_1859->g_35 p_1859->g_1483 p_1859->g_169 p_1859->g_259 p_1859->g_1195 p_1859->g_1586 p_1859->g_82 p_1859->g_792 p_1859->g_1648 p_1859->g_298 p_1859->g_1699 p_1859->g_1702 p_1859->g_1717 p_1859->g_1718 p_1859->g_1719 p_1859->g_124 p_1859->g_963 p_1859->g_1311 p_1859->g_1312 p_1859->g_30 p_1859->g_797
 * writes: p_1859->g_30 p_1859->g_35 p_1859->g_316 p_1859->g_735 p_1859->g_1250 p_1859->g_1135 p_1859->g_128 p_1859->g_124 p_1859->g_298 p_1859->g_215 p_1859->g_797 p_1859->g_1382 p_1859->g_180 p_1859->g_771 p_1859->g_259 p_1859->g_963 p_1859->g_1511 p_1859->g_112 p_1859->g_82 p_1859->g_792 p_1859->g_1192 p_1859->g_40 p_1859->g_126 p_1859->g_1648 p_1859->g_81 p_1859->g_1586 p_1859->g_1699
 */
int8_t  func_23(uint32_t  p_24, uint32_t  p_25, struct S0 * p_1859)
{ /* block id: 6 */
    uint64_t l_38[8] = {0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL,0x27EED050B7F45B6DL};
    int32_t l_74 = 0x3D053A65L;
    int64_t *l_80 = &p_1859->g_81[3][0];
    int32_t **l_1168 = (void*)0;
    uint32_t *****l_1205 = (void*)0;
    uint32_t ******l_1204[5];
    int32_t l_1221 = 0x24CBE03CL;
    int32_t l_1228 = 0x21399DA9L;
    int32_t l_1229 = (-1L);
    int32_t l_1233 = 0x2CE8F784L;
    int32_t l_1235 = 0x75C4F481L;
    int32_t l_1238[3][2][6] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
    uint64_t l_1249 = 0xAF8F9D60EFCBF28DL;
    uint64_t *l_1310 = &l_1249;
    uint64_t **l_1309 = &l_1310;
    int16_t **l_1366 = (void*)0;
    int16_t ***l_1365[7] = {&l_1366,&l_1366,&l_1366,&l_1366,&l_1366,&l_1366,&l_1366};
    int32_t l_1397 = 0x4D2CF77EL;
    uint8_t l_1447 = 255UL;
    uint64_t l_1459 = 7UL;
    int64_t l_1520[1];
    int8_t *l_1598[1];
    int8_t l_1685 = (-9L);
    volatile uint64_t *l_1705 = &p_1859->g_1706[0];
    volatile uint64_t **l_1704 = &l_1705;
    int32_t ****l_1739 = &p_1859->g_874;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1204[i] = &l_1205;
    for (i = 0; i < 1; i++)
        l_1520[i] = 0x09C8DCD963CCD678L;
    for (i = 0; i < 1; i++)
        l_1598[i] = &p_1859->g_1586[0];
lbl_1493:
    for (p_1859->g_30 = 12; (p_1859->g_30 > 38); p_1859->g_30 = safe_add_func_uint8_t_u_u(p_1859->g_30, 5))
    { /* block id: 9 */
        int32_t *l_734 = &p_1859->g_735;
        int32_t **l_733 = &l_734;
        uint32_t ******l_1207 = &l_1205;
        int32_t l_1220 = 6L;
        int32_t l_1223 = 0x4995D554L;
        int32_t l_1224 = 0x4364989FL;
        int32_t l_1225 = 0x3AE96462L;
        int32_t l_1226 = 0x435D1F39L;
        int32_t l_1227 = 0x642BB610L;
        int32_t l_1230 = (-1L);
        int32_t l_1231 = 0x4E85AC8FL;
        int32_t l_1232 = 0x0F48777DL;
        int32_t l_1234 = 0x46905450L;
        int32_t l_1236 = 1L;
        int32_t l_1237[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1237[i] = (-1L);
        for (p_1859->g_35 = 0; (p_1859->g_35 <= 7); p_1859->g_35 += 1)
        { /* block id: 12 */
            int64_t *l_72 = &p_1859->g_73;
            uint8_t *l_731[2];
            int32_t l_732[10] = {0x547C1904L,1L,0x27936A0DL,1L,0x547C1904L,0x547C1904L,1L,0x27936A0DL,1L,0x547C1904L};
            uint16_t *l_1169 = (void*)0;
            int32_t *l_1194 = &p_1859->g_1195;
            uint32_t *******l_1206[10];
            uint8_t l_1208 = 255UL;
            int64_t **l_1260 = (void*)0;
            int64_t ***l_1259[6][6][7] = {{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}},{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}},{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}},{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}},{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}},{{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0},{&l_1260,&l_1260,(void*)0,(void*)0,&l_1260,&l_1260,(void*)0}}};
            uint64_t **l_1308[3];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_731[i] = &p_1859->g_316;
            for (i = 0; i < 10; i++)
                l_1206[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_1308[i] = (void*)0;
            for (p_24 = 0; (p_24 <= 7); p_24 += 1)
            { /* block id: 15 */
                int32_t *l_39 = &p_1859->g_40[5][0];
                int32_t **l_41 = &l_39;
                (*l_41) = l_39;
            }
        }
    }
lbl_1401:
    for (p_1859->g_316 = 0; (p_1859->g_316 != 26); p_1859->g_316 = safe_add_func_int32_t_s_s(p_1859->g_316, 6))
    { /* block id: 618 */
        uint32_t l_1331 = 0UL;
        int32_t *l_1339 = &l_1235;
        int32_t l_1347[7] = {0x32D13C64L,0x041197EAL,0x32D13C64L,0x32D13C64L,0x041197EAL,0x32D13C64L,0x32D13C64L};
        uint64_t l_1362 = 18446744073709551615UL;
        uint8_t *l_1386 = &p_1859->g_797;
        int32_t *l_1398 = &p_1859->g_180[1];
        int i;
        for (p_1859->g_735 = (-18); (p_1859->g_735 != (-8)); p_1859->g_735 = safe_add_func_int16_t_s_s(p_1859->g_735, 2))
        { /* block id: 621 */
            int32_t l_1329 = 0x1F1153C9L;
            int32_t *l_1338 = (void*)0;
            int32_t l_1348 = (-10L);
            uint8_t l_1380 = 9UL;
            uint32_t *l_1381 = &p_1859->g_1382;
            int32_t *l_1383 = &l_1228;
            for (p_1859->g_1250 = 25; (p_1859->g_1250 < 18); p_1859->g_1250 = safe_sub_func_uint64_t_u_u(p_1859->g_1250, 9))
            { /* block id: 624 */
                int32_t l_1323 = 0x172C78A0L;
                int32_t *l_1324 = (void*)0;
                int32_t *l_1325 = &p_1859->g_1195;
                int32_t *l_1326 = (void*)0;
                int32_t *l_1327 = &l_1238[0][0][4];
                int32_t *l_1328 = (void*)0;
                int32_t *l_1330[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1330[i] = &p_1859->g_1195;
                l_1331++;
                for (l_1331 = (-8); (l_1331 == 5); ++l_1331)
                { /* block id: 628 */
                    uint16_t l_1349 = 0xBD5CL;
                    for (p_1859->g_1135 = (-26); (p_1859->g_1135 <= 1); ++p_1859->g_1135)
                    { /* block id: 631 */
                        l_1338 = (*p_1859->g_127);
                        if (p_1859->g_316)
                            goto lbl_1401;
                        if (p_25)
                            continue;
                        (*p_1859->g_127) = l_1339;
                    }
                    for (p_1859->g_124 = (-27); (p_1859->g_124 <= 53); ++p_1859->g_124)
                    { /* block id: 638 */
                        uint64_t l_1342 = 1UL;
                        ++l_1342;
                    }
                    (**p_1859->g_874) = (l_1339 = (((!p_25) && p_25) , (void*)0));
                    for (p_1859->g_298 = 0; (p_1859->g_298 >= 13); p_1859->g_298++)
                    { /* block id: 645 */
                        int8_t l_1352[5][2][5] = {{{0x58L,0L,9L,0x58L,0x72L},{0x58L,0L,9L,0x58L,0x72L}},{{0x58L,0L,9L,0x58L,0x72L},{0x58L,0L,9L,0x58L,0x72L}},{{0x58L,0L,9L,0x58L,0x72L},{0x58L,0L,9L,0x58L,0x72L}},{{0x58L,0L,9L,0x58L,0x72L},{0x58L,0L,9L,0x58L,0x72L}},{{0x58L,0L,9L,0x58L,0x72L},{0x58L,0L,9L,0x58L,0x72L}}};
                        uint64_t *l_1353 = &l_38[6];
                        int i, j, k;
                        ++l_1349;
                        (**p_1859->g_874) = (p_25 , func_66(p_1859->g_262, l_1349, ((p_25 , ((*l_1353) = ((l_1347[0] & ((&l_1331 == ((**p_1859->g_802) = &p_24)) , 6UL)) ^ (p_1859->g_112[3] , l_1352[2][1][2])))) , 0x0F2D17ECL), p_25, l_1168, p_1859));
                        if ((*p_1859->g_128))
                            continue;
                    }
                }
            }
            for (p_1859->g_797 = 0; (p_1859->g_797 < 55); p_1859->g_797 = safe_add_func_int32_t_s_s(p_1859->g_797, 2))
            { /* block id: 656 */
                uint32_t l_1356 = 4294967295UL;
                (**p_1859->g_874) = (**p_1859->g_874);
                l_1356 = (-6L);
            }
            l_1235 = ((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_1859->g_1361 ^ (p_1859->g_298 = p_1859->g_180[1])), ((l_1362 <= (safe_mul_func_uint8_t_u_u(p_25, (l_1365[3] != (((*l_1381) = ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((((++(*l_1310)) >= ((p_24 ^ (((safe_rshift_func_uint8_t_u_s(((((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((((safe_rshift_func_int8_t_s_u((l_1329 && p_25), 7)) ^ (l_1228 = (***p_1859->g_802))) > p_24))) & p_24), p_1859->g_546[0][0][1])) <= 3UL) & 0x46B0CFBFB3E966FCL) >= p_25), 1)) || p_25) , p_25)) , p_25)) && 0L), p_25)), l_1380)) , 0xD3D9D9B1L)) , &l_1366))))) != 18446744073709551615UL))), (-3L))) , p_1859->g_1135);
            (*l_1383) = p_24;
        }
        (*l_1398) = (safe_mod_func_uint16_t_u_u((((((*l_1386) = p_24) == ((p_24 >= 0x340CE26BL) && ((safe_rshift_func_uint8_t_u_u(p_25, p_24)) < (((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(p_1859->g_546[0][0][1], 0x27L)) | l_1235), (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(8UL, p_24)), 7)))) ^ 9L) && 0x68CEL)))) <= l_1397) | p_25), p_1859->g_40[1][1]));
        for (l_1228 = 0; (l_1228 != 21); l_1228 = safe_add_func_int8_t_s_s(l_1228, 1))
        { /* block id: 671 */
            (**p_1859->g_874) = (*p_1859->g_127);
        }
    }
    for (p_1859->g_1135 = (-13); (p_1859->g_1135 > (-30)); p_1859->g_1135 = safe_sub_func_int64_t_s_s(p_1859->g_1135, 8))
    { /* block id: 678 */
        uint32_t ****l_1419 = &p_1859->g_802;
        int32_t l_1420 = 0x4049218BL;
        int32_t l_1517 = 0x68CA3477L;
        int32_t l_1519 = 0x0CE07B9EL;
        int32_t l_1523 = 1L;
        int32_t l_1524 = 0x4A6159A1L;
        int32_t l_1525[10];
        int32_t l_1583 = 0x76F8AB0EL;
        int32_t *l_1611 = &p_1859->g_40[5][0];
        int32_t *l_1612 = (void*)0;
        int32_t *l_1613 = &l_1233;
        int32_t *l_1614 = &l_1524;
        int32_t *l_1615 = &p_1859->g_180[1];
        int32_t *l_1616 = &p_1859->g_40[5][0];
        int32_t *l_1617 = &p_1859->g_40[5][0];
        int32_t *l_1618 = &l_1517;
        int32_t *l_1619 = &p_1859->g_180[0];
        int32_t *l_1620 = (void*)0;
        int32_t *l_1621[7][7][5] = {{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}},{{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0},{(void*)0,(void*)0,&l_1238[2][1][1],&p_1859->g_1135,(void*)0}}};
        uint32_t l_1622[5][5][5] = {{{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL}},{{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL}},{{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL}},{{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL}},{{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL},{3UL,0x47E03D35L,0x45D673C5L,4294967295UL,0x9CB0D9CBL}}};
        int8_t **l_1667 = &l_1598[0];
        uint8_t l_1669 = 254UL;
        uint16_t *l_1725[2];
        uint16_t l_1735 = 65535UL;
        int32_t *l_1738 = &p_1859->g_40[3][1];
        int16_t l_1747 = 0x0C07L;
        int8_t l_1751 = 0x23L;
        int32_t l_1820[2];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1525[i] = (-8L);
        for (i = 0; i < 2; i++)
            l_1725[i] = &p_1859->g_771;
        for (i = 0; i < 2; i++)
            l_1820[i] = (-4L);
        if (p_25)
        { /* block id: 679 */
            int8_t l_1410 = 8L;
            uint8_t *l_1411 = (void*)0;
            uint16_t *l_1412 = &p_1859->g_771;
            uint8_t *l_1421 = &p_1859->g_797;
            int32_t *l_1422 = &p_1859->g_735;
            (*l_1422) &= ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0x06BCL, 12)), (((*l_1421) = (((p_1859->g_316 = (safe_mod_func_uint8_t_u_u((l_1410 ^ (p_1859->g_1250 <= 0x14L)), 0x5BL))) , (--(*l_1412))) && ((((safe_div_func_uint8_t_u_u(0x4FL, p_24)) || (safe_add_func_uint16_t_u_u(4UL, (((l_1420 = ((void*)0 == l_1419)) ^ p_24) , p_25)))) , 3L) ^ 18446744073709551615UL))) && 1UL))) > l_1410);
            for (l_74 = 6; (l_74 > 10); l_74 = safe_add_func_int16_t_s_s(l_74, 1))
            { /* block id: 687 */
                int32_t l_1425 = 0x6A08597DL;
                if (l_1425)
                    break;
            }
        }
        else
        { /* block id: 690 */
            int32_t *l_1428 = (void*)0;
            int32_t l_1452 = 0x76F2FEEEL;
            int32_t l_1521 = 0x748237BEL;
            int32_t l_1522[4][8][8] = {{{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)}},{{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)}},{{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)}},{{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)},{(-1L),0x1C912894L,0x0D46305DL,(-1L),0x47DDC5C4L,0x5A26A6B4L,0x705966E1L,(-1L)}}};
            int i, j, k;
            for (p_1859->g_30 = (-11); (p_1859->g_30 >= 42); p_1859->g_30 = safe_add_func_int64_t_s_s(p_1859->g_30, 5))
            { /* block id: 693 */
                (*p_1859->g_127) = (*p_1859->g_127);
                (**p_1859->g_874) = l_1428;
            }
            for (l_1233 = 0; (l_1233 >= (-12)); l_1233 = safe_sub_func_int64_t_s_s(l_1233, 4))
            { /* block id: 699 */
                uint16_t *l_1453 = &p_1859->g_259;
                uint32_t ***l_1478 = (void*)0;
                int32_t l_1479[1];
                uint64_t l_1526 = 1UL;
                int32_t l_1589 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1479[i] = 0x51CB825BL;
                if ((((!0x64L) , ((**p_1859->g_214) > ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((0x5D62L < ((*l_1453) = (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x0F4CL, 10)), ((((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_1447, 4)), (((p_1859->g_122[0][1][0] || p_24) == ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0L, l_1420)), p_25)) && l_1452)) , l_1420))) >= 9UL) || (**p_1859->g_214)) && p_1859->g_112[0]) , (-5L)) || 0x63A1L))))) , (void*)0) != (void*)0) && 0UL), p_25)), p_25)), 0x36A37D82L)) <= p_24))) >= 0x5210L))
                { /* block id: 701 */
                    int32_t l_1456 = 0x3534EABFL;
                    int32_t l_1480 = (-1L);
                    int16_t l_1481 = 0L;
                    uint8_t l_1482[2][1];
                    uint8_t l_1490 = 0x93L;
                    uint32_t *l_1514 = &p_1859->g_1483[3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1482[i][j] = 0xC5L;
                    }
                    l_1428 = func_66((safe_mul_func_uint16_t_u_u((((((l_1456 ^ ((~(safe_sub_func_uint32_t_u_u(l_1459, (safe_div_func_uint16_t_u_u(p_24, (safe_mul_func_int8_t_s_s((0xB2DD98BDL ^ 0xA617DF81L), (l_1420 >= (safe_sub_func_int64_t_s_s(((((safe_mod_func_uint32_t_u_u((l_1481 = (l_1480 ^= ((++(*l_1310)) , ((safe_mod_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_25, ((void*)0 != l_1478))), l_1479[0])) , (void*)0) != (void*)0) > p_1859->g_126) , p_25), 0x9033L)) , 0xFE29E97EL) < l_1420), l_1479[0])) > 0x5BEDL)))), 0x2078A2A7L)) != 1UL) & (-8L)) || l_1480), p_24)))))))))) , l_1479[0])) , p_24) , l_1420) < l_1482[0][0]) | p_1859->g_81[0][1]), p_1859->g_35)), p_1859->g_1483[3], p_25, p_1859->g_169, (*p_1859->g_874), p_1859);
                    l_1420 ^= 0x106F8970L;
                    for (l_1452 = 28; (l_1452 == (-5)); l_1452 = safe_sub_func_uint32_t_u_u(l_1452, 3))
                    { /* block id: 709 */
                        int32_t *l_1486 = &l_1479[0];
                        int32_t *l_1487 = &l_1479[0];
                        int32_t *l_1488 = &p_1859->g_40[0][0];
                        int32_t *l_1489 = &p_1859->g_735;
                        l_1490++;
                        if (p_1859->g_169)
                            goto lbl_1493;
                        if (l_1482[0][0])
                            break;
                        (**p_1859->g_874) = (*p_1859->g_127);
                    }
                    for (p_1859->g_963 = 27; (p_1859->g_963 <= 55); ++p_1859->g_963)
                    { /* block id: 717 */
                        int32_t *l_1496[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int64_t **l_1510 = &p_1859->g_274;
                        int64_t ***l_1509 = &l_1510;
                        int i;
                        (**p_1859->g_874) = l_1496[4];
                        p_1859->g_735 ^= ((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((((**p_1859->g_214) || l_1480) == (((safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_1456 , ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((p_1859->g_1511 = ((*l_1509) = (void*)0)) == (void*)0), (-1L))), (safe_mod_func_int64_t_s_s((((void*)0 == l_1514) <= 6L), p_1859->g_546[0][0][0])))) <= p_1859->g_259)), p_24)), p_24)) >= p_24) , (-1L))) , p_1859->g_122[2][1][3]), 11)), 1)) != p_1859->g_1195) ^ p_24) & p_1859->g_1483[3]);
                        if (p_25)
                            continue;
                    }
                }
                else
                { /* block id: 724 */
                    int32_t *l_1515[10] = {&l_1229,&l_1229,&l_1229,&l_1229,&l_1229,&l_1229,&l_1229,&l_1229,&l_1229,&l_1229};
                    int32_t l_1516 = 1L;
                    int32_t l_1518 = 0x35B20C52L;
                    int i;
                    l_1526++;
                }
                for (p_1859->g_35 = 0; (p_1859->g_35 > 45); p_1859->g_35 = safe_add_func_uint16_t_u_u(p_1859->g_35, 9))
                { /* block id: 729 */
                    uint64_t *l_1549 = (void*)0;
                    int32_t l_1554 = 0x7B20B5A1L;
                    for (l_1517 = (-6); (l_1517 > (-4)); l_1517++)
                    { /* block id: 732 */
                        uint64_t l_1555 = 18446744073709551615UL;
                        (*p_1859->g_127) = ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((void*)0 != &p_1859->g_127), (((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((0x6C5AE0AAL > (((*l_1309) = (*l_1309)) != l_1549)), (safe_sub_func_uint32_t_u_u((p_25 , (safe_rshift_func_uint8_t_u_s(0xE4L, l_1554))), (~p_24))))) <= l_1555), 0x09L)) > l_1524) | 65535UL) == l_1525[3]), 0x5E6BL)), p_24)), 0L)) , p_25) <= l_1525[6]))), 6)), p_24)) , (void*)0);
                    }
                }
                p_1859->g_735 ^= l_1420;
                for (p_1859->g_316 = 0; (p_1859->g_316 == 49); p_1859->g_316 = safe_add_func_int32_t_s_s(p_1859->g_316, 7))
                { /* block id: 740 */
                    uint32_t l_1576 = 0xD930FCABL;
                    for (l_1519 = 0; (l_1519 <= 0); l_1519 += 1)
                    { /* block id: 743 */
                        int32_t *l_1558 = &l_1235;
                        int32_t *l_1559 = (void*)0;
                        int32_t *l_1560 = (void*)0;
                        int32_t *l_1561 = &l_1235;
                        int32_t *l_1562 = &l_1228;
                        int32_t *l_1563 = &l_1521;
                        int32_t *l_1564 = (void*)0;
                        int32_t *l_1565 = &p_1859->g_82;
                        int32_t l_1566[6] = {2L,0x700239F1L,2L,2L,0x700239F1L,2L};
                        int32_t *l_1567 = &l_1228;
                        int32_t *l_1568 = (void*)0;
                        int32_t *l_1569 = (void*)0;
                        int32_t *l_1570 = &p_1859->g_180[1];
                        int32_t *l_1571 = &p_1859->g_735;
                        int32_t *l_1572 = (void*)0;
                        int32_t *l_1573 = &p_1859->g_40[5][0];
                        int32_t *l_1574 = &l_1524;
                        int32_t *l_1575[6][1] = {{&l_1524},{&l_1524},{&l_1524},{&l_1524},{&l_1524},{&l_1524}};
                        int8_t l_1590 = 1L;
                        int i, j, k;
                        --l_1576;
                        (*l_1565) |= (((**p_1859->g_214) = ((+(p_1859->g_546[l_1519][l_1519][l_1519] < ((p_25 , ((**l_1309) = (safe_mul_func_uint8_t_u_u((0xF7L == (((safe_div_func_int32_t_s_s(l_1583, ((((((*l_1453) = (safe_rshift_func_int8_t_s_s(p_1859->g_1586[0], l_1479[0]))) | 4UL) != ((((((((safe_lshift_func_int16_t_s_s(p_1859->g_1483[0], p_1859->g_1361)) >= (***p_1859->g_802)) > 65533UL) < l_1589) == l_1590) , l_1420) == 0x0E883BD9L) | p_25)) <= p_1859->g_1195) ^ 0x6557ECE8487C1907L))) < 1L) >= p_1859->g_1361)), p_1859->g_180[0])))) | 0x132E79803083DEA5L))) && l_1526)) <= l_1479[0]);
                    }
                    return p_24;
                }
            }
            for (p_1859->g_792 = 0; (p_1859->g_792 != (-6)); p_1859->g_792--)
            { /* block id: 755 */
                uint32_t l_1595 = 4294967295UL;
                int8_t **l_1599[8] = {&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2],&p_1859->g_1192[5][3][2]};
                int32_t *l_1602 = (void*)0;
                int32_t *l_1603 = &l_1522[2][6][2];
                int i;
                for (p_1859->g_35 = 12; (p_1859->g_35 == 32); p_1859->g_35 = safe_add_func_int16_t_s_s(p_1859->g_35, 7))
                { /* block id: 758 */
                    return l_1595;
                }
                l_1523 = (~(((safe_sub_func_uint8_t_u_u((l_1598[0] != (p_1859->g_1192[1][0][0] = &p_1859->g_126)), (((safe_rshift_func_uint8_t_u_s((((*l_1603) = (-1L)) , p_25), 5)) || (p_24 & (safe_sub_func_int16_t_s_s(p_1859->g_735, (((safe_lshift_func_uint16_t_u_s((*l_1603), (l_1452 |= (p_25 > (p_24 < p_1859->g_40[5][0]))))) , (void*)0) == &l_1204[3]))))) < 0x4CL))) & p_25) == p_1859->g_112[3]));
                for (l_1524 = 0; (l_1524 == 13); l_1524++)
                { /* block id: 767 */
                    uint32_t l_1610 = 0x507571D5L;
                    return l_1610;
                }
            }
        }
        l_1622[3][1][4]++;
        for (l_1583 = (-26); (l_1583 != (-19)); ++l_1583)
        { /* block id: 775 */
            int32_t l_1649 = 0x696A3B22L;
            int32_t l_1657 = 0x055E56D1L;
            int8_t *l_1663[1][9];
            int64_t ***l_1676 = (void*)0;
            uint16_t *l_1688 = &p_1859->g_35;
            int32_t l_1695[5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_1663[i][j] = &p_1859->g_1586[0];
            }
            for (i = 0; i < 5; i++)
                l_1695[i] = 0x24C3B649L;
            (*l_1617) = 0x324506BFL;
            for (p_1859->g_126 = 0; (p_1859->g_126 <= 7); p_1859->g_126 = safe_add_func_int32_t_s_s(p_1859->g_126, 6))
            { /* block id: 779 */
                int64_t l_1656 = 0x78FC2F3042B5A54DL;
                int16_t l_1682 = 3L;
                int32_t l_1689 = 0x3130E85CL;
                int32_t l_1690 = 0x530DD4DAL;
                int32_t l_1692 = 1L;
                int32_t l_1693 = 5L;
                int32_t l_1694 = 0x0807162EL;
                int32_t l_1697 = (-10L);
                int32_t l_1698 = 0x2EDD34B3L;
                for (l_1397 = 0; (l_1397 >= (-18)); l_1397 = safe_sub_func_int16_t_s_s(l_1397, 6))
                { /* block id: 782 */
                    uint64_t l_1633 = 0xF61307040A5F6B1CL;
                    int32_t l_1653 = 3L;
                    int32_t l_1654 = 3L;
                    for (l_1447 = (-11); (l_1447 > 32); l_1447++)
                    { /* block id: 785 */
                        int64_t *l_1647 = &p_1859->g_1648[0][2][2];
                        int32_t l_1652 = 0L;
                        uint8_t *l_1655 = &p_1859->g_316;
                        int8_t **l_1662 = &p_1859->g_1192[5][3][2];
                        int32_t l_1664 = (-1L);
                        int32_t l_1668 = 1L;
                        (*l_1611) ^= l_1633;
                        l_1657 = (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(p_1859->g_126)), (safe_lshift_func_uint16_t_u_s(0x8606L, (((void*)0 != &p_1859->g_462) , ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_1655) = (safe_rshift_func_uint8_t_u_s((p_1859->g_792 , p_25), (l_1654 = (l_1653 = (((((*l_1647) |= 0x7FC70E80E44ABAD4L) , l_1649) < (safe_div_func_int8_t_s_s((l_1652 = 0x36L), p_24))) || p_1859->g_122[0][1][0])))))), p_25)), p_24)), p_25)) < l_1656))))));
                        (*l_1615) = (((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((~((((*l_1662) = &p_1859->g_122[0][1][0]) == l_1663[0][4]) < p_24)) , ((l_1664 ^= (l_1652 |= 0x72L)) != (!((((0xFC30BAF3L == ((safe_sub_func_uint8_t_u_u((l_1667 == &l_1598[0]), ((((((*l_1618) = (~((0x19L < (l_1656 & 1L)) > p_25))) > p_25) & p_1859->g_82) | p_24) && p_1859->g_1586[0]))) , p_24)) <= l_1656) , p_25) && l_1656)))), l_1668)) && (*l_1611)), l_1669)) && l_1656) < p_25);
                    }
                }
                if ((l_1689 &= ((safe_lshift_func_uint16_t_u_u((((**l_1667) = (safe_sub_func_uint32_t_u_u((((((((safe_mul_func_int8_t_s_s(((void*)0 == l_1676), (safe_unary_minus_func_uint8_t_u(p_1859->g_81[3][0])))) && p_24) , ((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(l_1682, ((*l_80) = ((safe_rshift_func_int16_t_s_s(0x2C24L, (l_1685 , (((safe_div_func_uint64_t_u_u((((0L && (l_1688 != &p_1859->g_259)) || p_24) , p_1859->g_112[1]), (*l_1615))) , (void*)0) != (void*)0)))) ^ 0x8DF0374DL)))), 0xCC1B2241L)) <= 18446744073709551615UL)) < p_25) , (*l_1619)) == (***p_1859->g_802)) < p_25), p_25))) != p_1859->g_298), 10)) == 0xEBL)))
                { /* block id: 803 */
                    int16_t l_1691[9] = {0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL,0x3F9AL};
                    int32_t l_1696 = (-1L);
                    volatile uint64_t ***l_1703[7] = {&p_1859->g_1702,&p_1859->g_1702,&p_1859->g_1702,&p_1859->g_1702,&p_1859->g_1702,&p_1859->g_1702,&p_1859->g_1702};
                    int i;
                    p_1859->g_1699--;
                    l_1704 = p_1859->g_1702;
                }
                else
                { /* block id: 806 */
                    uint64_t l_1722 = 8UL;
                    (**p_1859->g_874) = func_42((safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint64_t_u((((p_1859->g_180[1] | (safe_rshift_func_int16_t_s_u((-1L), ((*l_1688) = (safe_lshift_func_uint16_t_u_u(0UL, 11)))))) && (safe_div_func_uint64_t_u_u(((**l_1309) &= ((void*)0 == p_1859->g_1717)), (safe_lshift_func_int16_t_s_s(((***p_1859->g_1717) = (l_1692 |= l_1722)), (0x451E6CAA82D92BD2L == (l_1695[1] != ((p_24 = ((7L == 0xBFBFL) & p_24)) , p_1859->g_262)))))))) <= l_1722))), 1)))), (*p_1859->g_874), p_25, l_1725[1], p_1859);
                }
                for (l_1249 = 19; (l_1249 != 7); l_1249--)
                { /* block id: 816 */
                    int32_t *l_1730 = (void*)0;
                    for (l_1524 = 0; (l_1524 >= 6); l_1524 = safe_add_func_int64_t_s_s(l_1524, 9))
                    { /* block id: 819 */
                        int8_t l_1733 = 0x10L;
                        int32_t l_1734[9] = {0x53AA5DEBL,0x5CD2B635L,0x53AA5DEBL,0x53AA5DEBL,0x5CD2B635L,0x53AA5DEBL,0x53AA5DEBL,0x5CD2B635L,0x53AA5DEBL};
                        int i;
                        (**p_1859->g_874) = (void*)0;
                        l_1730 = &l_1695[1];
                        (*l_1616) ^= (((***p_1859->g_802)++) > (l_1735--));
                        (*l_1613) ^= p_24;
                    }
                }
            }
        }
        if ((&l_1419 == (*p_1859->g_1311)))
        { /* block id: 830 */
            (**p_1859->g_874) = l_1738;
            return p_25;
        }
        else
        { /* block id: 833 */
            int32_t *****l_1740 = &l_1739;
            int32_t l_1750 = 0x3C4E33E2L;
            int32_t l_1752 = (-7L);
            uint8_t *l_1767 = (void*)0;
            uint8_t *l_1768[6][4][9] = {{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}},{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}},{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}},{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}},{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}},{{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316},{&p_1859->g_316,&p_1859->g_316,(void*)0,(void*)0,&p_1859->g_797,(void*)0,(void*)0,&p_1859->g_316,&p_1859->g_316}}};
            uint32_t **l_1775 = (void*)0;
            int32_t ***l_1817 = &p_1859->g_127;
            int8_t l_1819 = (-1L);
            uint64_t *l_1834 = &l_38[6];
            uint64_t **l_1833 = &l_1834;
            int i, j, k;
            (*l_1613) |= (((*l_1617) , (&p_1859->g_874 != ((*l_1740) = l_1739))) , ((((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(p_24, ((*l_80) = ((l_1750 ^= (safe_add_func_int32_t_s_s(l_1747, (safe_lshift_func_int16_t_s_u(((((void*)0 == &l_80) | p_25) ^ p_25), 9))))) && p_24)))) != p_1859->g_35) || 0x68E46EA2AB083E6AL), l_1751)) != (**p_1859->g_1718)) | p_24) == l_1752));
            (*l_1615) = p_25;
            (*l_1619) = ((safe_sub_func_int64_t_s_s(((0L != (*l_1613)) && (p_1859->g_35 > (safe_rshift_func_uint8_t_u_u(((*l_1611) = ((safe_add_func_uint16_t_u_u(((p_1859->g_259 = 0UL) || (((safe_rshift_func_int16_t_s_s(0x4101L, ((**p_1859->g_1718) = (safe_mod_func_int64_t_s_s(((*l_1618) == ((safe_lshift_func_uint16_t_u_s((p_1859->g_180[0] || ((**l_1309) = ((((safe_lshift_func_uint16_t_u_s(((((void*)0 == &l_1747) , p_1859->g_1250) >= p_24), p_25)) >= (*l_1615)) , p_24) | 0L))), (*p_1859->g_1719))) & p_25)), 0xB75159D4288AAB08L))))) , 1L) | 0x43L)), p_24)) < p_24)), p_24)))), p_1859->g_1586[0])) >= p_24);
            if (((((**l_1667) |= (p_25 || (((***p_1859->g_1717) = (safe_sub_func_int8_t_s_s((*l_1618), (((p_25 | p_24) , 2UL) >= ((p_1859->g_771 = 0xCB33L) >= ((**l_1419) == (l_1775 = (*p_1859->g_802)))))))) && ((safe_add_func_int64_t_s_s(0x5893B8D9C2562F3EL, p_24)) != p_24)))) ^ 0L) || (*l_1619)))
            { /* block id: 848 */
                uint32_t l_1795[4][10] = {{4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL,4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL},{4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL,4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL},{4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL,4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL},{4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL,4294967291UL,4294967295UL,0x10CBEE56L,4294967295UL,4294967291UL}};
                int32_t l_1796 = 0x7D4E88C0L;
                int16_t ***l_1818 = (void*)0;
                int i, j;
                for (p_1859->g_30 = 0; (p_1859->g_30 <= 3); p_1859->g_30 += 1)
                { /* block id: 851 */
                    uint32_t l_1778 = 0UL;
                    int i;
                    if (p_1859->g_112[p_1859->g_30])
                    { /* block id: 852 */
                        return (*l_1738);
                    }
                    else
                    { /* block id: 854 */
                        --l_1778;
                        if (p_25)
                            continue;
                    }
                    (*l_1611) = (p_25 && ((safe_sub_func_uint16_t_u_u(((p_1859->g_112[p_1859->g_30] = (safe_lshift_func_uint16_t_u_s((p_1859->g_122[0][1][0] < (18446744073709551615UL ^ (safe_mul_func_int16_t_s_s(0x26A6L, ((*p_1859->g_1719) = 0x5F14L))))), 6))) & (!p_24)), (safe_mul_func_int16_t_s_s((l_1796 = (safe_mul_func_uint8_t_u_u(((0xC4082446BA2752CAL && ((safe_lshift_func_uint8_t_u_s(l_1795[0][6], (p_24 <= p_24))) <= p_25)) , p_24), p_25))), l_1795[0][6])))) , p_24));
                }
                l_1238[1][1][5] ^= (((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((-4L), ((((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s(0x65EDL, (((p_25 , (safe_rshift_func_uint8_t_u_s(p_24, (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((*l_1619) != ((safe_mod_func_int64_t_s_s((((~((*l_1618) = ((p_24 , (**l_1740)) != (l_1817 = (*l_1739))))) , ((((*l_1614) = (0x4EL != p_24)) , p_1859->g_81[4][1]) , l_1818)) != (void*)0), l_1819)) | 0x6F2CF0FFA2786E16L)) , 18446744073709551615UL), 0x1E06F1D89E7FE33AL)), 0x08L)), 12))))) | (**p_1859->g_214)) | p_1859->g_122[0][1][0]))) > l_1820[0]) != 2UL) | p_24), p_1859->g_180[1])), (*l_1613))) && l_1795[1][5]) & 0x041BL) , p_24))) & l_1795[0][6]), 6L)) == 65528UL) || (*l_1611));
                if (p_25)
                    break;
            }
            else
            { /* block id: 868 */
                uint64_t **l_1831 = (void*)0;
                uint64_t ***l_1832 = &l_1831;
                int32_t l_1841 = 0x2212E19AL;
                (*l_1618) = (((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(p_1859->g_1648[6][5][1], p_25)) > (safe_rshift_func_uint16_t_u_s(65535UL, ((((safe_sub_func_uint32_t_u_u((**p_1859->g_214), (((*l_1832) = l_1831) != l_1833))) || ((safe_mod_func_int32_t_s_s(((*l_1615) &= (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0xA4L, p_24)) , (~(p_24 == p_24))), p_1859->g_30))), 0x25E26301L)) > (*p_1859->g_1719))) ^ p_25) | 8L)))), (*p_1859->g_215))), p_24)) != (-1L)) > p_24);
                if (l_1841)
                    continue;
            }
        }
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_316 p_1859->g_81 p_1859->g_124 p_1859->g_963 p_1859->g_127 p_1859->g_128
 * writes: p_1859->g_316 p_1859->g_797 p_1859->g_1192 p_1859->g_128
 */
int32_t * func_42(uint16_t  p_43, int32_t ** p_44, uint64_t  p_45, uint16_t * p_46, struct S0 * p_1859)
{ /* block id: 566 */
    int8_t l_1170 = (-1L);
    uint8_t *l_1175 = &p_1859->g_316;
    uint8_t *l_1178 = &p_1859->g_797;
    int32_t l_1185 = 0L;
    int32_t l_1193 = 1L;
    l_1170 &= (0x7CL & p_1859->g_316);
    l_1193 &= (safe_div_func_int32_t_s_s(((l_1170 , (7L | (safe_add_func_uint8_t_u_u(((*l_1178) = (++(*l_1175))), p_45)))) || (l_1170 , (p_45 | (((((((safe_mod_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((l_1185 <= ((safe_sub_func_int8_t_s_s(((~(((void*)0 != p_44) < (((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((+(((p_1859->g_1192[5][3][2] = &l_1170) == &p_1859->g_126) , p_1859->g_81[3][0])), p_1859->g_124)) >= 5L), l_1185)) && l_1185) <= p_43))) > p_1859->g_963), 0x38L)) >= l_1170)) | l_1185), l_1170)), l_1170)) > l_1185), p_1859->g_81[3][1])) , 0x23AE4196L) , p_43) , p_44) == (void*)0) <= 0x72L) == (-1L))))), l_1185));
    (*p_1859->g_127) = &p_1859->g_82;
    return (*p_1859->g_127);
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_215 p_1859->g_112 p_1859->g_180 p_1859->g_771 p_1859->g_262 p_1859->g_214 p_1859->g_122
 * writes: p_1859->g_797 p_1859->g_180 p_1859->g_963 p_1859->g_771
 */
int64_t  func_57(int32_t * p_58, int32_t  p_59, uint32_t  p_60, struct S0 * p_1859)
{ /* block id: 551 */
    int32_t *l_1139 = &p_1859->g_180[0];
    int32_t *l_1140[4][2] = {{&p_1859->g_735,&p_1859->g_40[5][0]},{&p_1859->g_735,&p_1859->g_40[5][0]},{&p_1859->g_735,&p_1859->g_40[5][0]},{&p_1859->g_735,&p_1859->g_40[5][0]}};
    uint64_t l_1141 = 1UL;
    int32_t l_1144 = (-1L);
    int64_t l_1145 = 0x101F5EAACAA61840L;
    int32_t l_1146[8][10] = {{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)},{(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L),7L,(-10L),(-10L)}};
    uint32_t l_1147 = 4UL;
    int16_t *l_1156[4];
    uint32_t *l_1163 = &p_1859->g_963;
    uint32_t l_1166[4][2][1] = {{{0x358EAD80L},{0x358EAD80L}},{{0x358EAD80L},{0x358EAD80L}},{{0x358EAD80L},{0x358EAD80L}},{{0x358EAD80L},{0x358EAD80L}}};
    uint16_t *l_1167 = &p_1859->g_771;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1156[i] = &p_1859->g_876;
    l_1141++;
    ++l_1147;
    if (p_60)
    { /* block id: 554 */
        uint8_t *l_1150 = &p_1859->g_797;
        int32_t l_1153 = 0x338A8CBBL;
        int16_t *l_1155 = &p_1859->g_262;
        int16_t **l_1154[9] = {&l_1155,&l_1155,&l_1155,&l_1155,&l_1155,&l_1155,&l_1155,&l_1155,&l_1155};
        int i;
        (*l_1139) = ((((((p_59 , (-1L)) != (((*l_1150) = p_59) ^ (safe_mul_func_int16_t_s_s(l_1153, (((*p_1859->g_215) && ((l_1153 , ((l_1156[1] = (void*)0) != (void*)0)) , l_1153)) >= (-1L)))))) > p_60) & l_1153) && p_1859->g_771) <= p_1859->g_262);
        return l_1153;
    }
    else
    { /* block id: 559 */
        int16_t **l_1158 = &l_1156[3];
        int16_t ***l_1157 = &l_1158;
        (*l_1157) = (void*)0;
    }
    (*l_1139) = ((-9L) > (safe_sub_func_uint16_t_u_u(((*l_1167) = ((((*l_1139) > (**p_1859->g_214)) > (~1UL)) > (((safe_lshift_func_int16_t_s_s(p_59, (((*l_1163) = 3UL) && (safe_lshift_func_int16_t_s_u(l_1166[3][1][0], 15))))) | p_1859->g_122[0][1][0]) < 0x65E27988002D981FL))), (*l_1139))));
    return (*l_1139);
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_737 p_1859->g_214 p_1859->g_215 p_1859->g_112 p_1859->g_745 p_1859->g_122 p_1859->g_180 p_1859->g_124 p_1859->g_771 p_1859->g_298 p_1859->g_792 p_1859->g_797 p_1859->g_262 p_1859->g_81 p_1859->g_735 p_1859->g_802 p_1859->g_127 p_1859->g_169 p_1859->g_40 p_1859->g_73 p_1859->g_259 p_1859->g_128 p_1859->g_876 p_1859->g_82 p_1859->g_316 p_1859->g_546 p_1859->g_874 p_1859->g_963 p_1859->g_126 p_1859->g_598 p_1859->g_178 p_1859->g_30 p_1859->g_1135
 * writes: p_1859->g_737 p_1859->g_112 p_1859->g_298 p_1859->g_259 p_1859->g_126 p_1859->g_180 p_1859->g_124 p_1859->g_771 p_1859->g_316 p_1859->g_214 p_1859->g_801 p_1859->g_262 p_1859->g_128 p_1859->g_874 p_1859->g_40 p_1859->g_215 p_1859->g_963 p_1859->g_82 p_1859->g_122 p_1859->g_735 p_1859->g_178 p_1859->g_1135
 */
int32_t * func_61(uint32_t  p_62, int32_t * p_63, uint32_t  p_64, int32_t ** p_65, struct S0 * p_1859)
{ /* block id: 350 */
    uint16_t *l_741 = &p_1859->g_259;
    uint16_t **l_740 = &l_741;
    uint16_t **l_744 = &l_741;
    uint32_t ****l_747 = (void*)0;
    int16_t *l_748 = (void*)0;
    int16_t *l_749 = &p_1859->g_298;
    int32_t l_750 = 0x64626068L;
    int32_t **l_751[3][5] = {{&p_1859->g_128,(void*)0,&p_1859->g_128,&p_1859->g_128,(void*)0},{&p_1859->g_128,(void*)0,&p_1859->g_128,&p_1859->g_128,(void*)0},{&p_1859->g_128,(void*)0,&p_1859->g_128,&p_1859->g_128,(void*)0}};
    int64_t l_781 = 0x7614E6E069AB6CE7L;
    int16_t l_814 = 0x550AL;
    uint32_t l_871 = 4UL;
    int64_t **l_913[7] = {&p_1859->g_274,&p_1859->g_274,&p_1859->g_274,&p_1859->g_274,&p_1859->g_274,&p_1859->g_274,&p_1859->g_274};
    uint8_t l_995 = 1UL;
    uint32_t *****l_1023 = &p_1859->g_801[0][4];
    uint32_t ******l_1022 = &l_1023;
    int8_t l_1056 = 0x13L;
    int64_t **l_1097 = &p_1859->g_274;
    int32_t *l_1138 = &p_1859->g_735;
    int i, j;
    p_1859->g_737 = p_1859->g_737;
lbl_1123:
    (*p_65) = func_66(((((~0x0973L) == (safe_sub_func_uint16_t_u_u(((p_62 , l_740) != ((--(**p_1859->g_214)) , l_744)), 0xC842L))) == (p_1859->g_745 != l_747)) , ((((*l_749) = (0x11L > (p_62 && p_1859->g_122[2][0][0]))) ^ l_750) , l_750)), l_750, p_1859->g_180[0], l_750, l_751[1][1], p_1859);
    for (p_1859->g_298 = 0; (p_1859->g_298 == (-11)); p_1859->g_298 = safe_sub_func_uint32_t_u_u(p_1859->g_298, 1))
    { /* block id: 357 */
        uint32_t l_767 = 1UL;
        int32_t l_769 = 0x5549C4AAL;
        uint32_t ***l_777 = (void*)0;
        uint32_t ****l_776 = &l_777;
        uint16_t *l_813 = &p_1859->g_771;
        int32_t **l_846[9][1][5] = {{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}},{{(void*)0,(void*)0,&p_1859->g_128,(void*)0,&p_1859->g_128}}};
        uint64_t l_878 = 4UL;
        int64_t **l_915 = (void*)0;
        uint64_t l_918 = 18446744073709551611UL;
        int8_t l_952 = 0L;
        int32_t l_992 = 0x7101F184L;
        uint32_t l_1012 = 4294967289UL;
        uint8_t *l_1017 = &l_995;
        uint32_t l_1030 = 0x8200A2F2L;
        int64_t ***l_1079 = &l_913[2];
        int16_t *l_1098 = (void*)0;
        int32_t l_1134 = 0L;
        int i, j, k;
        for (p_1859->g_259 = 0; (p_1859->g_259 != 8); ++p_1859->g_259)
        { /* block id: 360 */
            int8_t *l_756 = &p_1859->g_126;
            uint16_t **l_821 = &l_813;
            int32_t l_822 = 0x77B09517L;
            int32_t l_850 = 8L;
            int32_t l_851[5] = {0x2789695CL,0x2789695CL,0x2789695CL,0x2789695CL,0x2789695CL};
            uint64_t l_951 = 7UL;
            uint16_t l_989 = 8UL;
            uint16_t l_993[9][1] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
            uint8_t l_994 = 7UL;
            int i, j;
            if (((**p_65) = (((*l_756) = (p_1859->g_122[0][1][0] && 0x0EL)) >= p_1859->g_124)))
            { /* block id: 363 */
                int16_t l_768 = 0x41F3L;
                uint32_t ****l_800 = &l_777;
                uint32_t *l_812 = &p_1859->g_112[3];
                int32_t l_847 = 0x49976C8BL;
                int32_t l_853[5][1];
                uint32_t l_856[3][6] = {{0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L},{0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L},{0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L,0xE8A22609L}};
                uint32_t l_877[9];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_853[i][j] = 0L;
                }
                for (i = 0; i < 9; i++)
                    l_877[i] = 0x97F72E3FL;
                for (p_1859->g_124 = 5; (p_1859->g_124 >= 45); ++p_1859->g_124)
                { /* block id: 366 */
                    uint16_t *l_770 = &p_1859->g_771;
                    uint8_t *l_780 = &p_1859->g_316;
                    int32_t l_782 = 0L;
                    uint32_t **l_787 = (void*)0;
                    uint32_t *****l_806 = (void*)0;
                    uint32_t ******l_805 = &l_806;
                    int64_t l_807[9][10][2] = {{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}},{{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L},{0L,0x0ACB5B0FBE2AEBF3L}}};
                    int i, j, k;
                    if (((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((-10L) || (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_767, (--(*l_770)))), ((*p_63) &= (safe_lshift_func_uint16_t_u_u((p_1859->g_737 != (void*)0), (0x7040L >= ((void*)0 != l_776)))))))) < l_768), (safe_mul_func_uint8_t_u_u(((*l_780) = (+(0x112FB83C1FFEB950L != p_64))), l_767)))), p_1859->g_298)) , l_781))
                    { /* block id: 370 */
                        uint16_t l_783[7][8][4] = {{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}},{{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL},{7UL,7UL,0xF36FL,65535UL}}};
                        uint32_t ***l_786 = &p_1859->g_214;
                        int i, j, k;
                        l_783[3][2][3]--;
                        (*p_65) = ((((((*l_770) = (((*l_786) = &p_1859->g_215) == l_787)) ^ ((((!(safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((0x277FL != ((p_64 && p_64) , 0L)), l_768)), p_1859->g_792))) < ((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(p_1859->g_797, l_768)) ^ p_1859->g_262) == 0x130F0019L), p_1859->g_112[0])) | 0L)) != p_1859->g_81[3][0]) , p_1859->g_124)) , p_1859->g_735) , p_1859->g_298) , (void*)0);
                        (*p_65) = (void*)0;
                    }
                    else
                    { /* block id: 376 */
                        (*p_65) = func_66(l_782, (safe_div_func_uint8_t_u_u(((p_1859->g_801[0][4] = l_800) != (void*)0), (safe_lshift_func_int16_t_s_u((p_1859->g_262 ^= p_1859->g_771), l_769)))), ((void*)0 == l_805), p_1859->g_771, &p_1859->g_128, p_1859);
                        (**p_65) |= l_807[0][9][0];
                    }
                    (*p_63) &= (((**p_1859->g_802) == (void*)0) != l_807[0][9][0]);
                    (*p_63) = (safe_sub_func_int64_t_s_s((((-1L) <= ((safe_sub_func_int32_t_s_s((((l_812 = &p_62) != (**p_1859->g_802)) == p_1859->g_771), (0x1B14E944L < (p_64 , (l_813 == l_813))))) == ((void*)0 != (*l_776)))) , (-1L)), p_62));
                    (*p_1859->g_127) = (*p_65);
                }
                if ((l_814 || ((**p_1859->g_214) = 6UL)))
                { /* block id: 388 */
                    int32_t ***l_820 = (void*)0;
                    int32_t l_848 = 0L;
                    int32_t l_849 = 1L;
                    int32_t l_852 = (-1L);
                    int32_t l_854 = 0x1C9DDD18L;
                    (*p_63) = (safe_unary_minus_func_int16_t_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int64_t_s_s((&p_1859->g_128 != (p_65 = &p_1859->g_128)), ((void*)0 == l_821))), l_822))));
                    for (l_750 = 1; (l_750 <= 6); l_750 += 1)
                    { /* block id: 393 */
                        int64_t l_823[8][8] = {{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L},{(-1L),5L,0x2F34051F0BEAF112L,5L,(-1L),(-1L),5L,0x2F34051F0BEAF112L}};
                        int i, j;
                        if (p_1859->g_169)
                            break;
                        if (l_823[3][5])
                            continue;
                        if (l_823[3][5])
                            continue;
                        return &p_1859->g_180[0];
                    }
                    if ((*p_63))
                    { /* block id: 399 */
                        int64_t *l_844 = &l_781;
                        int32_t l_845 = 9L;
                        int32_t l_855 = (-6L);
                        int32_t ***l_872 = &p_1859->g_127;
                        int32_t ****l_873 = &l_820;
                        uint8_t *l_875 = &p_1859->g_316;
                        (*p_1859->g_127) = func_66(p_64, (((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(65535UL, (safe_mul_func_uint16_t_u_u(p_1859->g_81[0][1], ((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(p_62, (((*p_63) = 0x3881D971L) ^ ((((*l_844) = ((((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((0x02ECEA1AA55FC6FAL | ((safe_add_func_int8_t_s_s((~(p_62 , (p_64 && 0UL))), 0x74L)) >= p_64)), l_769)), 0x6C6B619BL)) , 8L), l_769)) , (void*)0) != (void*)0) , l_768)) & (-3L)) , l_768)))), 5)), p_1859->g_40[6][0])) < 0x4EL))))) < p_1859->g_73), p_64)) & p_64) != 0x786CL), l_845, p_62, l_846[8][0][2], p_1859);
                        ++l_856[0][4];
                        p_1859->g_40[5][0] |= (safe_sub_func_int8_t_s_s(p_1859->g_112[3], ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((((***p_1859->g_802) == ((l_845 = 0x39L) , (safe_add_func_int8_t_s_s((0x023CL >= (safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((65526UL < (&p_1859->g_797 == (((*l_875) = ((***l_872) &= ((p_1859->g_874 = ((*l_873) = (((l_871 , ((*l_844) = p_1859->g_259)) , (~0x28C0DF94L)) , l_872))) != &p_65))) , (void*)0))), p_1859->g_876)) , l_877[4]), p_1859->g_82))), p_64)))) <= 0UL), 0xE7L)) < l_853[2][0]), l_853[2][0])) && p_1859->g_316)));
                    }
                    else
                    { /* block id: 411 */
                        (**p_1859->g_874) = (p_1859->g_546[0][0][1] , p_63);
                        return (*p_65);
                    }
                }
                else
                { /* block id: 415 */
                    int32_t l_911 = 0x7820299CL;
                    if (((void*)0 == (*p_65)))
                    { /* block id: 416 */
                        uint32_t **l_909 = &l_812;
                        uint32_t *l_910 = &l_871;
                        int32_t l_912 = 0x54895D1EL;
                        l_912 &= (((l_878 , (-1L)) && 1UL) , (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_1859->g_112[3], (safe_unary_minus_func_uint32_t_u(((*l_910) &= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(p_64, ((~(!(safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((((((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((((((safe_unary_minus_func_uint32_t_u((safe_div_func_int32_t_s_s(l_851[1], (safe_add_func_uint32_t_u_u(p_62, (safe_div_func_int64_t_s_s(((((*l_909) = ((**p_1859->g_802) = func_66(p_64, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_1859->g_82, l_877[1])) , 3UL), 7)), p_62, p_1859->g_40[5][0], (*p_1859->g_874), p_1859))) == (void*)0) || l_856[0][4]), 18446744073709551610UL)))))))) || 0x3DE6L) , (void*)0) != (void*)0) & 0x9CD18A7EL), 0x117FD7FA9098C63AL)), 0xDD59L)) , p_1859->g_169) < l_856[0][4]) == 1UL) >= 0xFD6D5234L), p_1859->g_112[3])), 0)))) | p_62))), p_64))))))), l_911)) || 0x7716E0E8F121AF50L) && p_64), 0x7AECL)));
                    }
                    else
                    { /* block id: 421 */
                        int64_t ***l_914 = &l_913[2];
                        l_915 = ((*l_914) = l_913[2]);
                    }
                }
                return p_63;
            }
            else
            { /* block id: 427 */
                if ((*p_63))
                    break;
            }
            for (l_750 = 0; (l_750 >= 1); ++l_750)
            { /* block id: 432 */
                int8_t l_947 = 0x31L;
                int32_t l_956[4][10][6] = {{{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L}},{{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L}},{{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L}},{{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L},{0x1CB90248L,0x5726811EL,0x5D10DBD3L,0x2CE11028L,0x2CE11028L,0x5D10DBD3L}}};
                uint64_t l_958 = 0xF30548C980CB2E91L;
                int64_t *l_962 = (void*)0;
                int i, j, k;
                if (l_918)
                    break;
                if ((p_1859->g_40[5][0] = ((safe_lshift_func_int16_t_s_u(p_62, ((safe_rshift_func_int16_t_s_s((((p_1859->g_797 , (safe_mul_func_int16_t_s_s(((void*)0 != l_913[2]), (safe_mul_func_int8_t_s_s((p_1859->g_81[3][0] , ((*l_756) = ((++(*p_1859->g_215)) , (p_1859->g_81[4][0] & (((p_64 || ((**p_65) = (safe_div_func_int16_t_s_s(p_62, l_851[4])))) ^ 0xA859L) >= 1L))))), 0x03L))))) >= p_1859->g_316) , p_62), 0)) | p_62))) | l_851[4])))
                { /* block id: 438 */
                    uint32_t l_953 = 4294967291UL;
                    int32_t l_955 = 1L;
                    for (l_850 = (-16); (l_850 < 29); l_850++)
                    { /* block id: 441 */
                        int32_t l_945 = (-7L);
                        uint64_t *l_946 = &l_918;
                        (*p_63) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(0x6B9CL, ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((0UL < (safe_lshift_func_int16_t_s_s(0x1BDFL, 0))), (((*l_946) = l_945) ^ ((0x4BAFL & ((l_947 = 0x7E5A75D5AD4250C4L) <= p_1859->g_180[1])) || (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(p_62)), (l_951 ^ l_952))))))) , p_64) , 0xCAL), 1)) ^ (*p_63)), l_953)) < p_1859->g_180[1]))), p_1859->g_259));
                        (*p_65) = (*p_65);
                    }
                    for (l_878 = 0; (l_878 <= 2); l_878 += 1)
                    { /* block id: 449 */
                        int8_t l_954[1];
                        int32_t l_957 = 0x6A7286AEL;
                        int64_t *l_961 = &p_1859->g_81[4][0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_954[i] = 0x4BL;
                        ++l_958;
                        (**p_65) ^= ((l_962 = l_961) != l_961);
                    }
                    p_1859->g_963++;
                }
                else
                { /* block id: 455 */
                    uint64_t l_976 = 0xC9FA9A65530FEFC4L;
                    int16_t **l_983 = (void*)0;
                    uint64_t *l_984 = &l_878;
                    int32_t l_1006[9][4][7] = {{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}},{{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL},{0x6E3D7120L,(-3L),(-3L),0x6E3D7120L,0x22599DF6L,0x6C8BAF7BL,0x19874CFAL}}};
                    int i, j, k;
                    (**p_1859->g_874) = (void*)0;
                    l_822 = (((**p_1859->g_214)++) >= (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_976, ((+p_1859->g_316) && (safe_lshift_func_uint16_t_u_u(p_64, 14))))), (safe_add_func_uint8_t_u_u((((safe_mod_func_uint64_t_u_u(((*l_984) = ((l_983 != l_983) < p_64)), (((safe_lshift_func_int8_t_s_s(((*l_756) = ((safe_sub_func_uint8_t_u_u((((**p_65) = (((((l_956[1][6][3] &= (*p_63)) >= l_989) < (~((safe_sub_func_uint8_t_u_u(0x30L, p_64)) < p_62))) > 1L) <= l_992)) < 0x2EB53895L), p_1859->g_81[3][0])) & p_1859->g_797)), 1)) != p_62) | p_1859->g_797))) , l_993[0][0]) , p_62), p_62)))) , l_994) & l_994), p_1859->g_797)) & l_989) | l_976) & l_995), p_64)));
                    for (l_958 = 0; (l_958 <= 3); l_958 += 1)
                    { /* block id: 465 */
                        int32_t l_1007 = 0x07EDEFFFL;
                        int32_t l_1008 = 0x7D61A425L;
                        int32_t l_1009 = 3L;
                        int32_t l_1010 = (-4L);
                        int32_t l_1011 = (-9L);
                        int i;
                        p_1859->g_40[5][0] ^= ((p_1859->g_112[l_958] == ((safe_sub_func_uint32_t_u_u((l_850 = (+(safe_mul_func_int8_t_s_s(((((++(*l_984)) & (p_62 || (((*l_756) |= p_62) > 0x25L))) > ((p_64 >= (safe_mul_func_int16_t_s_s(((void*)0 == p_1859->g_737), ((**l_821) = ((safe_add_func_uint64_t_u_u(0x2B5BEB7224464CA4L, (p_1859->g_963 , (-5L)))) || (**p_65)))))) ^ p_1859->g_735)) , p_1859->g_122[0][1][0]), p_62)))), p_1859->g_180[0])) < 3L)) ^ (**p_1859->g_214));
                        l_1012--;
                    }
                }
            }
        }
        if ((((safe_mod_func_int32_t_s_s((**p_65), (p_1859->g_40[2][1] &= (l_1017 != l_1017)))) ^ p_1859->g_126) <= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((***p_1859->g_802) | (l_1022 == p_1859->g_598)), (((p_63 = (*p_65)) != (*p_65)) ^ 0xBA60E3167D9288DAL))), 4)) >= p_1859->g_316)))
        { /* block id: 478 */
            uint32_t ****l_1024 = &l_777;
            int32_t ***l_1025 = &l_751[1][2];
            int32_t l_1057 = 3L;
            uint64_t l_1060[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1060[i] = 18446744073709551611UL;
            if (((*p_63) |= ((l_1024 != (void*)0) <= (l_1025 == ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_1030 = 0x39E612861D38813BL), 9UL)), 0x1EL)) , (void*)0)))))
            { /* block id: 481 */
                int32_t *l_1031 = (void*)0;
                if ((**p_65))
                    break;
                return l_1031;
            }
            else
            { /* block id: 484 */
                int16_t l_1036 = 0x5108L;
                int32_t l_1049 = (-4L);
                uint64_t *l_1050 = (void*)0;
                uint64_t *l_1051 = (void*)0;
                uint64_t *l_1052 = (void*)0;
                uint64_t *l_1053 = &l_878;
                int16_t *l_1054 = &l_814;
                uint8_t *l_1055 = &p_1859->g_797;
                p_1859->g_40[5][0] |= (((((((~((((p_1859->g_598 != &l_1023) > p_62) , (safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(p_1859->g_178, (((((l_1036 && (((!(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((p_1859->g_124 > (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(l_1036, (((*l_1054) ^= (((**p_65) |= (((*l_1053) = (l_1049 ^= (safe_lshift_func_int16_t_s_s((((((*l_1017) &= (+p_1859->g_876)) <= p_1859->g_81[3][0]) >= p_1859->g_546[0][0][0]) && p_64), p_62)))) & 18446744073709551606UL)) | p_1859->g_792)) , p_1859->g_735))) && p_62), (-1L))), l_1036))) , (void*)0) == l_1055), 0x1741L)), 0x18L)) >= p_62) >= p_1859->g_122[3][1][2])) , p_64) != p_1859->g_112[3])) , l_1056) , (*p_63)) | l_1057) | p_1859->g_771))) >= 0x36710140E55DE7D8L), p_64))) , 2UL)) > p_1859->g_126) != p_62) > (***p_1859->g_802)) < 0L) <= p_62) , (*p_63));
                (**p_65) = (-10L);
            }
            (*p_63) &= ((safe_rshift_func_int16_t_s_u(l_1060[1], (--p_1859->g_259))) && ((*p_65) == (void*)0));
        }
        else
        { /* block id: 495 */
            int64_t **l_1092[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            int32_t l_1094 = 0x3E92759CL;
            uint16_t *l_1109 = (void*)0;
            int32_t l_1122[1][10][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
            uint32_t **l_1136 = &p_1859->g_215;
            int i, j, k;
            for (p_1859->g_262 = 0; (p_1859->g_262 == 10); p_1859->g_262 = safe_add_func_uint64_t_u_u(p_1859->g_262, 8))
            { /* block id: 498 */
                int64_t ***l_1065 = &l_915;
                int32_t l_1081[1][8][9] = {{{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L},{1L,0L,1L,1L,0x7DD94382L,1L,1L,0x7DD94382L,1L}}};
                int64_t ***l_1093 = &l_1092[5][0];
                int8_t *l_1095 = (void*)0;
                int8_t *l_1096 = &p_1859->g_126;
                int i, j, k;
                if ((((*l_1065) = l_915) != (l_1097 = (((safe_sub_func_uint64_t_u_u(((((*l_1096) &= (safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(0UL, 4)) ^ ((p_62 && (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u((l_1079 != ((safe_unary_minus_func_int8_t_s((((**p_1859->g_214) = ((l_1081[0][7][5] >= ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_1859->g_735, (safe_lshift_func_uint16_t_u_s(p_64, ((&p_1859->g_274 == ((*l_1093) = ((*l_1079) = l_1092[5][0]))) , 0x5ADDL))))), p_1859->g_546[0][0][0])) || 0x5DL), 0L)), 0x5B814C7EL)) < l_1094)) >= p_1859->g_876)) , p_1859->g_262))) , l_1093)))) | l_1081[0][7][5]) , p_62), 253UL))) < p_62)), l_1081[0][4][5])) & (-9L)), p_1859->g_316)), p_64))) == p_62) || p_1859->g_82), 3L)) >= p_64) , (*l_1079)))))
                { /* block id: 505 */
                    uint64_t l_1118 = 0x4330A1F4B81C4116L;
                    for (p_1859->g_82 = 2; (p_1859->g_82 >= 0); p_1859->g_82 -= 1)
                    { /* block id: 508 */
                        int16_t **l_1099 = &l_748;
                        int16_t *l_1100[1];
                        int32_t l_1121 = (-4L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_1100[i] = &l_814;
                        (*p_63) = (((*l_1099) = l_1098) == (l_1100[0] = &p_1859->g_298));
                        (**p_1859->g_874) = func_66((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((void*)0 == l_1109), (safe_rshift_func_int16_t_s_u(p_1859->g_81[3][0], 15)))), ((l_1081[0][7][5] = ((safe_add_func_int32_t_s_s((!(((((((p_62 <= ((safe_mod_func_int64_t_s_s(0x0BC0786F9BF981CCL, p_64)) , (((safe_mod_func_uint16_t_u_u(p_1859->g_178, l_1118)) && (p_1859->g_122[4][0][2] = ((*l_1096) = ((safe_lshift_func_int8_t_s_s(p_62, p_64)) ^ p_1859->g_735)))) , l_1121))) <= (-1L)) && l_1121) < l_1094) , &p_1859->g_462) != (void*)0) && l_1094)), 4294967288UL)) , p_62)) >= 0x09E9L))) | 0x6F7401CBL), p_1859->g_30)), p_64)), l_1121, (**p_1859->g_214), l_1094, l_751[p_1859->g_82][(p_1859->g_82 + 2)], p_1859);
                        p_1859->g_735 = ((***p_1859->g_874) = l_1122[0][7][0]);
                    }
                }
                else
                { /* block id: 519 */
                    if (l_952)
                        goto lbl_1123;
                }
                for (p_1859->g_178 = 0; (p_1859->g_178 <= 0); p_1859->g_178 += 1)
                { /* block id: 524 */
                    uint32_t l_1124 = 0x6F6A7BCFL;
                    for (l_1030 = 0; (l_1030 <= 0); l_1030 += 1)
                    { /* block id: 527 */
                        int i, j, k;
                        l_1122[l_1030][(l_1030 + 8)][l_1030] = 1L;
                        if (l_1081[p_1859->g_178][(l_1030 + 2)][(p_1859->g_178 + 4)])
                            break;
                        (*p_63) = (l_1122[l_1030][(l_1030 + 2)][p_1859->g_178] = l_1122[l_1030][(l_1030 + 8)][l_1030]);
                        if ((*p_63))
                            continue;
                    }
                    if (l_1124)
                    { /* block id: 534 */
                        return (*p_65);
                    }
                    else
                    { /* block id: 536 */
                        uint32_t *l_1133 = &p_1859->g_963;
                        uint32_t **l_1137[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1137[i] = (void*)0;
                        (*p_1859->g_127) = func_66(((((*l_1017) |= p_1859->g_30) && (safe_mul_func_int16_t_s_s(p_62, p_1859->g_546[0][0][1]))) & (p_62 == p_1859->g_40[0][1])), p_64, p_62, (p_1859->g_1135 |= (safe_mod_func_uint64_t_u_u((p_62 <= (safe_add_func_int8_t_s_s(((*l_1096) = (((*l_1133) = ((*p_1859->g_215)++)) != (l_1134 | 0x1E3EF045L))), l_1094))), l_1124))), (*p_1859->g_874), p_1859);
                        (**p_1859->g_127) = ((l_1137[1] = l_1136) != &l_1133);
                    }
                }
            }
        }
    }
    return l_1138;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_66(int64_t  p_67, uint32_t  p_68, uint32_t  p_69, int64_t  p_70, int32_t ** p_71, struct S0 * p_1859)
{ /* block id: 348 */
    int32_t *l_736 = &p_1859->g_180[0];
    return l_736;
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_82 p_1859->g_40 p_1859->g_178 p_1859->g_127 p_1859->g_128 p_1859->g_316 p_1859->g_461 p_1859->g_298 p_1859->g_259 p_1859->g_112 p_1859->g_122 p_1859->g_262 p_1859->g_81 p_1859->g_546 p_1859->g_215 p_1859->g_462 p_1859->g_169 p_1859->g_598 p_1859->g_126 p_1859->g_214 p_1859->g_180 p_1859->g_124 p_1859->g_30
 * writes: p_1859->g_82 p_1859->g_40 p_1859->g_178 p_1859->g_128 p_1859->g_124 p_1859->g_127 p_1859->g_298 p_1859->g_259 p_1859->g_262 p_1859->g_546 p_1859->g_81 p_1859->g_316 p_1859->g_126 p_1859->g_180 p_1859->g_169
 */
uint8_t  func_77(int64_t * p_78, int64_t * p_79, struct S0 * p_1859)
{ /* block id: 20 */
    int32_t l_85 = 4L;
    int32_t l_90 = (-7L);
    int32_t l_91 = 0x42E901CCL;
    int32_t l_92 = 0x1796DE0DL;
    int32_t l_93 = 1L;
    int32_t l_94[1][10][5] = {{{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L},{0x1281337FL,0L,0x1281337FL,0x1281337FL,0L}}};
    int8_t l_226[5][2][7] = {{{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)},{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)}},{{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)},{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)}},{{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)},{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)}},{{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)},{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)}},{{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)},{0x65L,1L,1L,(-1L),0L,0x65L,(-1L)}}};
    uint64_t *l_236 = &p_1859->g_124;
    int64_t **l_299[4];
    uint8_t l_391 = 1UL;
    uint32_t l_488 = 4294967295UL;
    int16_t l_504 = (-9L);
    uint32_t l_646 = 8UL;
    uint32_t l_706 = 0x211AA30BL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_299[i] = &p_1859->g_274;
    for (p_1859->g_82 = (-2); (p_1859->g_82 > (-20)); --p_1859->g_82)
    { /* block id: 23 */
        return l_85;
    }
    for (l_85 = 1; (l_85 >= 0); l_85 -= 1)
    { /* block id: 28 */
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = &p_1859->g_82;
        int32_t *l_88 = (void*)0;
        int32_t *l_89[6][2] = {{(void*)0,&p_1859->g_40[4][1]},{(void*)0,&p_1859->g_40[4][1]},{(void*)0,&p_1859->g_40[4][1]},{(void*)0,&p_1859->g_40[4][1]},{(void*)0,&p_1859->g_40[4][1]},{(void*)0,&p_1859->g_40[4][1]}};
        uint16_t l_95 = 0xFDBCL;
        int i, j;
        ++l_95;
        for (l_90 = 0; (l_90 <= 1); l_90 += 1)
        { /* block id: 32 */
            uint32_t *l_119[3];
            int32_t *l_129 = &p_1859->g_40[1][1];
            int i;
            for (i = 0; i < 3; i++)
                l_119[i] = &p_1859->g_112[3];
            for (p_1859->g_82 = 1; (p_1859->g_82 >= 0); p_1859->g_82 -= 1)
            { /* block id: 35 */
                int32_t l_255 = (-4L);
                int i, j;
                p_1859->g_40[l_90][(p_1859->g_82 + 1)] = (~p_1859->g_40[l_90][(p_1859->g_82 + 1)]);
                for (l_93 = 1; (l_93 >= 0); l_93 -= 1)
                { /* block id: 39 */
                    uint32_t *l_111[2][3] = {{&p_1859->g_112[3],&p_1859->g_112[3],&p_1859->g_112[3]},{&p_1859->g_112[3],&p_1859->g_112[3],&p_1859->g_112[3]}};
                    uint32_t **l_118[6];
                    uint64_t *l_123[7] = {&p_1859->g_124,&p_1859->g_124,&p_1859->g_124,&p_1859->g_124,&p_1859->g_124,&p_1859->g_124,&p_1859->g_124};
                    int8_t *l_125 = &p_1859->g_126;
                    int32_t l_240[9];
                    uint32_t l_256[5] = {0UL,0UL,0UL,0UL,0UL};
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_118[i] = &l_111[0][2];
                    for (i = 0; i < 9; i++)
                        l_240[i] = (-2L);
                    (1 + 1);
                }
            }
        }
    }
    for (l_93 = 0; (l_93 <= 1); l_93 += 1)
    { /* block id: 117 */
        uint16_t l_263 = 65535UL;
        int16_t *l_281 = &p_1859->g_262;
        uint32_t ***l_295 = &p_1859->g_214;
        uint32_t ****l_294 = &l_295;
        int32_t *l_296 = &l_91;
        int32_t l_344 = 0x36866283L;
        int32_t l_346 = 0L;
        int32_t l_347[7][1][10] = {{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}},{{0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL,0x1F049ECDL,0x53B4D7E9L,0x09782121L,0x53B4D7E9L,0x1F049ECDL}}};
        int32_t *l_362 = (void*)0;
        int32_t l_388 = 0x7DAA674DL;
        int i, j, k;
        (1 + 1);
    }
    if (l_391)
    { /* block id: 189 */
        uint32_t l_402[1][7][2] = {{{4294967288UL,4294967288UL},{4294967288UL,4294967288UL},{4294967288UL,4294967288UL},{4294967288UL,4294967288UL},{4294967288UL,4294967288UL},{4294967288UL,4294967288UL},{4294967288UL,4294967288UL}}};
        int32_t l_434 = 0L;
        int32_t l_435 = 0x17BA57F6L;
        int32_t l_436 = 0x5338EAC8L;
        int32_t l_437 = 1L;
        int32_t l_439 = 0x0414EF2CL;
        int32_t l_454 = (-8L);
        int32_t l_455[6] = {0x1964DF14L,0L,0x1964DF14L,0x1964DF14L,0L,0x1964DF14L};
        uint32_t l_456 = 4294967289UL;
        int32_t l_468 = 0x6EF19F80L;
        uint32_t *****l_469 = (void*)0;
        uint32_t ****l_472[7][2];
        uint32_t *****l_471 = &l_472[4][1];
        int32_t **l_475 = &p_1859->g_128;
        int32_t *l_499 = &p_1859->g_180[1];
        int32_t *l_500 = &l_436;
        int32_t *l_501[7][9][4] = {{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}},{{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0},{&p_1859->g_180[0],&l_93,&l_94[0][1][4],(void*)0}}};
        int64_t l_502 = 0x04B44D90D084EB7BL;
        int32_t l_503[8] = {0x203AE8E8L,0x203AE8E8L,0x203AE8E8L,0x203AE8E8L,0x203AE8E8L,0x203AE8E8L,0x203AE8E8L,0x203AE8E8L};
        uint32_t l_505 = 0xE1A4C531L;
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_472[i][j] = (void*)0;
        }
        for (p_1859->g_178 = 0; (p_1859->g_178 <= 1); p_1859->g_178 += 1)
        { /* block id: 192 */
            return l_402[0][1][0];
        }
        if ((**p_1859->g_127))
        { /* block id: 195 */
            int32_t l_422 = 1L;
            int32_t l_451 = 6L;
            int32_t l_452 = 0x542FE3C1L;
            int32_t l_453[9][5][2] = {{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}},{{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)},{0x39480B29L,(-1L)}}};
            int i, j, k;
            for (l_391 = (-5); (l_391 >= 51); ++l_391)
            { /* block id: 198 */
                uint32_t ***l_408[10] = {&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214};
                uint32_t ****l_407[10] = {&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7],&l_408[7]};
                int32_t l_412 = (-7L);
                int32_t l_433 = (-7L);
                int32_t l_438 = (-1L);
                int32_t l_440 = 0x4F76C4E5L;
                uint64_t l_441[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                int32_t *l_446 = &l_94[0][1][4];
                int32_t *l_447 = &l_90;
                int32_t *l_448 = &p_1859->g_82;
                int32_t *l_449 = &l_433;
                int32_t *l_450[8][10] = {{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0},{(void*)0,&l_433,&l_438,&l_433,(void*)0,(void*)0,&l_433,&l_438,&l_433,(void*)0}};
                int i, j;
                for (l_90 = 0; (l_90 == (-29)); l_90--)
                { /* block id: 201 */
                    uint32_t *****l_409 = &l_407[9];
                    uint16_t l_421 = 65535UL;
                    int32_t l_430[6][10] = {{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L},{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L},{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L},{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L},{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L},{0L,0x587CBCE0L,2L,0x56D7837FL,2L,0x587CBCE0L,0L,0x475951E8L,8L,8L}};
                    int i, j;
                    (1 + 1);
                }
                (*p_1859->g_127) = (*p_1859->g_127);
                for (l_438 = 0; (l_438 >= 14); l_438 = safe_add_func_uint64_t_u_u(l_438, 3))
                { /* block id: 217 */
                    return p_1859->g_316;
                }
                ++l_456;
            }
            for (l_85 = (-2); (l_85 == 0); ++l_85)
            { /* block id: 224 */
                return l_453[5][3][0];
            }
        }
        else
        { /* block id: 227 */
            uint64_t **l_464 = &l_236;
            int32_t l_467 = 0x35DD45D0L;
            uint32_t ******l_470 = &l_469;
            uint32_t ******l_473 = &l_471;
            uint64_t l_474 = 18446744073709551615UL;
            int32_t l_482 = 1L;
            int32_t l_483 = 0x6582A0A3L;
            int32_t l_484 = 0x6FEEFA69L;
            int32_t l_485 = 0x15F36CA5L;
            int32_t l_486 = 2L;
            int32_t l_487 = 0x194AB73FL;
            uint16_t *l_497 = &p_1859->g_259;
            int32_t *l_498[2];
            int i;
            for (i = 0; i < 2; i++)
                l_498[i] = &p_1859->g_82;
            if ((((*l_236) = (!(p_1859->g_461 != l_464))) || (safe_mul_func_uint8_t_u_u(l_467, ((l_456 & l_468) , (((*l_470) = l_469) == ((*l_473) = l_471)))))))
            { /* block id: 231 */
                l_474 = ((void*)0 != &p_1859->g_274);
                return p_1859->g_178;
            }
            else
            { /* block id: 234 */
                int32_t *l_476 = &p_1859->g_40[5][0];
                p_1859->g_127 = l_475;
                (*l_475) = &l_467;
                (*l_475) = l_476;
            }
            for (p_1859->g_298 = 10; (p_1859->g_298 > 27); p_1859->g_298 = safe_add_func_uint64_t_u_u(p_1859->g_298, 4))
            { /* block id: 241 */
                int32_t *l_479 = &p_1859->g_40[6][0];
                int32_t *l_480 = &l_91;
                int32_t *l_481[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_481[i] = &l_436;
                l_488++;
            }
            l_90 = ((safe_lshift_func_int8_t_s_s((!4L), 2)) <= ((((safe_div_func_uint64_t_u_u((**l_475), (l_467 , (0x9AL || (-2L))))) | l_226[4][1][1]) , (safe_mul_func_int16_t_s_s(l_94[0][1][4], ((*l_497) ^= (((**l_475) = (0x0CE29AC4L ^ (**l_475))) , 0x3BDCL))))) , (**l_475)));
        }
        (*l_475) = (void*)0;
        --l_505;
    }
    else
    { /* block id: 250 */
        uint32_t l_511 = 4294967295UL;
        uint32_t ***l_554[3][7][10] = {{{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214}},{{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214}},{{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214},{&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,(void*)0,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214,&p_1859->g_214}}};
        int32_t **l_587 = &p_1859->g_128;
        uint16_t l_607 = 0x1365L;
        uint32_t l_648 = 0x2FFE972CL;
        int16_t l_700 = 0L;
        uint32_t ****l_724 = &l_554[0][2][7];
        uint32_t *****l_723 = &l_724;
        uint32_t ******l_722 = &l_723;
        int i, j, k;
lbl_707:
        for (p_1859->g_259 = 20; (p_1859->g_259 >= 51); p_1859->g_259 = safe_add_func_int16_t_s_s(p_1859->g_259, 6))
        { /* block id: 253 */
            int32_t *l_510[6][2][4] = {{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}},{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}},{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}},{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}},{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}},{{&l_90,&l_92,&l_91,&p_1859->g_180[1]},{&l_90,&l_92,&l_91,&p_1859->g_180[1]}}};
            int i, j, k;
            (*p_1859->g_127) = l_510[0][0][2];
            if (l_511)
                continue;
        }
        for (p_1859->g_298 = (-16); (p_1859->g_298 > 12); p_1859->g_298 = safe_add_func_uint32_t_u_u(p_1859->g_298, 5))
        { /* block id: 259 */
            int32_t *l_516 = &l_92;
            uint32_t l_521 = 0xF4BC9070L;
            uint32_t ***l_553[1];
            int i;
            for (i = 0; i < 1; i++)
                l_553[i] = &p_1859->g_214;
            for (p_1859->g_82 = 0; (p_1859->g_82 < (-7)); p_1859->g_82 = safe_sub_func_int8_t_s_s(p_1859->g_82, 4))
            { /* block id: 262 */
                int32_t **l_517 = (void*)0;
                int32_t **l_518 = &l_516;
                int16_t *l_535 = (void*)0;
                int16_t *l_536 = &p_1859->g_262;
                uint32_t ***l_583 = (void*)0;
                int32_t l_647 = 0x358D4267L;
                uint16_t l_664 = 0UL;
                (*l_518) = ((*p_1859->g_127) = (l_90 , l_516));
                if (((safe_sub_func_int16_t_s_s((l_521 & ((((&l_236 == &p_1859->g_462) || (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s((p_1859->g_112[3] & (safe_rshift_func_int8_t_s_u(p_1859->g_122[3][1][1], (l_93 <= (safe_sub_func_int32_t_s_s((**l_518), (((((safe_unary_minus_func_int16_t_s((**l_518))) >= (safe_sub_func_int16_t_s_s((!((*l_536) &= (((**l_518) & (-1L)) | 0x7B3FC007C92A2B29L))), l_511))) != 1UL) & 0x6EBEL) || p_1859->g_298))))))), l_504)) | 0x4FD4EDA81BAD447BL) | 1L) || 0x6EF08C11B090D551L), 0x42EDL)) && (**l_518)), l_94[0][1][4]))) , p_1859->g_40[3][2]) & p_1859->g_40[5][0])), l_511)) >= 4L))
                { /* block id: 266 */
                    uint32_t l_539 = 4294967295UL;
                    uint16_t l_555 = 0x26C2L;
                    int16_t *l_556[4][6][6] = {{{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0}},{{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0}},{{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0}},{{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0},{&p_1859->g_262,&l_504,(void*)0,&l_504,(void*)0,(void*)0}}};
                    int16_t **l_557 = &l_536;
                    int32_t l_586 = (-9L);
                    uint16_t *l_599 = &p_1859->g_259;
                    uint8_t *l_608 = &l_391;
                    int8_t *l_609[1];
                    uint32_t ****l_626 = &l_553[0];
                    uint32_t *****l_625 = &l_626;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_609[i] = &p_1859->g_122[3][1][2];
                    for (l_391 = 0; (l_391 > 17); l_391 = safe_add_func_int16_t_s_s(l_391, 6))
                    { /* block id: 269 */
                        (*l_518) = (*p_1859->g_127);
                        --l_539;
                    }
                    if ((safe_rshift_func_uint8_t_u_u((l_94[0][1][4] != ((((p_1859->g_546[0][0][1] ^= (*p_79)) >= ((safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(l_511, ((*p_1859->g_128) = l_511))) , l_511), ((l_553[0] != l_554[1][2][1]) > ((*p_1859->g_215) > (((*l_557) = (((!(~l_555)) >= l_511) , l_556[0][3][3])) != (void*)0))))), p_1859->g_259)) >= l_94[0][1][4])) != 255UL) != p_1859->g_40[6][0])), l_555)))
                    { /* block id: 276 */
                        return l_504;
                    }
                    else
                    { /* block id: 278 */
                        uint16_t *l_568 = &p_1859->g_259;
                        int32_t l_582 = 0x789C7462L;
                        uint8_t *l_588 = &p_1859->g_316;
                        uint16_t *l_589 = &l_555;
                        (**l_518) = (safe_sub_func_int64_t_s_s((-5L), (safe_sub_func_uint16_t_u_u((**l_518), (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((((safe_mod_func_uint16_t_u_u(((*l_568)--), ((0x1A35BF74L != (safe_rshift_func_uint16_t_u_s(((*l_589) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((p_1859->g_112[1] <= ((((*l_588) = ((((((safe_unary_minus_func_int16_t_s((l_586 ^= (((*p_79) = (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_582, l_511)), (l_554[1][2][1] != l_583)))) > ((*l_236) = (((safe_rshift_func_int16_t_s_u(((*p_1859->g_461) == (void*)0), p_1859->g_169)) != (**l_518)) , (**l_518))))))) < 0x1BE310FBL) , l_587) != (void*)0) < l_93) != (*l_516))) && (*l_516)) && (*l_516))) , l_555), 1)), l_582))), l_539))) && p_1859->g_546[0][0][1]))) && (*l_516)) < l_582) != l_539) <= 0x7DF03A9D267338A3L), l_582)), 1L))))));
                        (*l_518) = ((*p_1859->g_127) = (*p_1859->g_127));
                    }
                    (*l_516) = ((**l_587) > (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_608) = ((((safe_rshift_func_int8_t_s_u((((((+((*l_599) &= (((void*)0 == p_1859->g_598) != 0xB1L))) <= ((p_1859->g_126 | (((0x033693D2L | (safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((l_586 > (safe_unary_minus_func_uint64_t_u((((safe_mul_func_int16_t_s_s((p_1859->g_546[0][0][1] < (*l_516)), (-7L))) , (**l_587)) < (-5L))))), 0x73C00A58L)), 7))) == (*p_1859->g_128)) && (*l_516))) <= l_504)) < 65535UL) & l_607) | p_1859->g_546[0][0][1]), l_504)) , 0x6188L) != p_1859->g_82) <= (-8L))), 3)), (**l_587))));
                    if (((p_1859->g_126 = l_586) || 7UL))
                    { /* block id: 293 */
                        uint32_t l_616 = 1UL;
                        uint32_t ******l_627 = &l_625;
                        int32_t *l_649 = &p_1859->g_180[1];
                        (*l_516) = ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(((((((((l_539 , ((l_616 ^ (**l_518)) > ((((safe_mul_func_int16_t_s_s(l_616, 0UL)) , (((safe_div_func_uint8_t_u_u(l_555, (safe_add_func_int64_t_s_s((p_1859->g_546[0][0][0] ^ 0x7BL), (safe_add_func_int64_t_s_s(((((*l_627) = l_625) == (void*)0) > (**l_518)), 2UL)))))) ^ 9L) | 0UL)) <= (**p_1859->g_127)) <= l_555))) < 4294967295UL) | p_1859->g_40[5][2]) && (*l_516)) || (*l_516)) || (**l_587)) , 0x152B4B70L) || l_504), (*l_516))) != l_539), 1)), l_616)) > p_1859->g_122[2][1][1]);
                        (*l_649) = (safe_sub_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u(((((**l_587) = ((p_1859->g_40[5][0] != p_1859->g_112[3]) | (((0L > (safe_add_func_int64_t_s_s((l_616 > l_555), (safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((!(65535UL && (((*p_79) = (safe_rshift_func_uint8_t_u_u(p_1859->g_316, 2))) != 1UL))), (safe_mul_func_uint8_t_u_u((++(*l_608)), l_586)))), 0L)) ^ l_94[0][7][3]), 1L))))) < l_616) != (**l_587)))) & l_616) > l_646), l_647)) < l_648) , (*p_1859->g_215)) , 1L) && (**l_518)), (-1L)));
                        if ((*l_516))
                            break;
                    }
                    else
                    { /* block id: 301 */
                        uint8_t l_662 = 0UL;
                        int32_t l_663 = 4L;
                        l_663 ^= (((((((safe_div_func_uint64_t_u_u(((p_1859->g_81[4][0] , &p_1859->g_81[3][0]) == p_79), l_646)) ^ (safe_rshift_func_int8_t_s_s(l_555, 3))) , (((**l_587) != ((safe_mod_func_int8_t_s_s((((*l_516) ^ (safe_mod_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(0x27D9L, ((safe_rshift_func_int8_t_s_u(l_488, (*l_516))) == 0x3DL))) && 0x237666FEFCA54E0FL) && l_539), 18446744073709551615UL))) || (-10L)), l_539)) && (**l_587))) & 0xA3L)) , l_662) , (*l_516)) & 65535UL) , l_555);
                    }
                }
                else
                { /* block id: 304 */
                    int16_t l_665[1][3];
                    int32_t l_672 = 9L;
                    int32_t l_699 = 0x0BC0C1C1L;
                    uint64_t l_703 = 0x80CFD1805BC1F4F9L;
                    uint32_t ****l_708 = &l_553[0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_665[i][j] = (-5L);
                    }
                    if (((p_1859->g_546[0][0][1] == l_664) || l_665[0][1]))
                    { /* block id: 305 */
                        uint32_t l_668 = 0x3C3EDD36L;
                        int32_t l_671 = 0x7A3204C9L;
                        int32_t *l_673 = &l_90;
                        uint32_t l_674 = 9UL;
                        (*l_673) &= ((safe_sub_func_uint8_t_u_u(((l_668 &= 253UL) , p_1859->g_259), ((safe_add_func_int8_t_s_s(9L, l_671)) > (l_672 = (*l_516))))) , ((void*)0 != (*p_1859->g_214)));
                        if (l_674)
                            break;
                        (*l_673) &= ((*l_516) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_516) == 0xD757L), (safe_rshift_func_int16_t_s_u(((((safe_unary_minus_func_uint8_t_u((((**p_1859->g_127) != (((((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*l_516) == ((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((0x4B27L < l_665[0][1]), ((*p_79) <= ((*p_1859->g_128) && ((safe_sub_func_int16_t_s_s(l_672, (*l_516))) || l_672))))), (**l_587))) != (-2L))), 7)), p_1859->g_316)))) != (*p_79)), 0x18L)), (*l_516))) | l_699) , l_700) > (*p_1859->g_215)) >= 18446744073709551615UL)) && l_665[0][1]))) != 0x6A18923635062B2BL) && p_1859->g_180[1]) < l_665[0][1]), (**l_587))))), 0x23L)));
                    }
                    else
                    { /* block id: 312 */
                        (*l_516) = ((l_672 && (((l_703 <= ((*l_236)++)) < l_706) & (**l_518))) & ((p_1859->g_30 == (**l_587)) > p_1859->g_81[3][0]));
                        if (p_1859->g_169)
                            goto lbl_707;
                        (**p_1859->g_127) = (l_708 != (void*)0);
                    }
                    for (p_1859->g_169 = 0; (p_1859->g_169 < 22); p_1859->g_169 = safe_add_func_uint32_t_u_u(p_1859->g_169, 3))
                    { /* block id: 320 */
                        uint16_t l_711 = 0x7F18L;
                        int32_t *l_717 = &p_1859->g_180[1];
                        uint32_t *****l_721[3][1];
                        uint32_t ******l_720 = &l_721[2][0];
                        int32_t *l_725 = &l_90;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_721[i][j] = (void*)0;
                        }
                        ++l_711;
                        (**p_1859->g_127) |= (safe_lshift_func_uint8_t_u_s((l_711 > (((*p_1859->g_215) && (0x15C7L && l_90)) || (safe_unary_minus_func_int8_t_s(5L)))), l_665[0][0]));
                        (*l_717) ^= (*l_516);
                        (*l_725) &= ((*p_1859->g_128) & (safe_add_func_uint32_t_u_u(((*l_516) , ((void*)0 == (*l_708))), (p_1859->g_180[1] = (l_720 == l_722)))));
                    }
                    (*p_1859->g_128) = (~0L);
                    for (l_90 = (-26); (l_90 >= 29); ++l_90)
                    { /* block id: 330 */
                        uint8_t l_728 = 247UL;
                        (*l_587) = (*p_1859->g_127);
                        return l_728;
                    }
                }
                for (p_1859->g_259 = (-24); (p_1859->g_259 >= 11); p_1859->g_259 = safe_add_func_int8_t_s_s(p_1859->g_259, 1))
                { /* block id: 337 */
                    if ((**l_518))
                        break;
                }
                return l_504;
            }
            (*p_1859->g_128) = 0x412B0646L;
        }
        (*l_587) = (*p_1859->g_127);
    }
    return l_85;
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_124 p_1859->g_122 p_1859->g_127 p_1859->g_169 p_1859->g_112 p_1859->g_40 p_1859->g_81 p_1859->g_180 p_1859->g_30 p_1859->g_126 p_1859->g_214 p_1859->g_178 p_1859->g_35
 * writes: p_1859->g_124 p_1859->g_126 p_1859->g_128 p_1859->g_40 p_1859->g_169 p_1859->g_178 p_1859->g_180 p_1859->g_214 p_1859->g_81
 */
int8_t  func_100(int32_t  p_101, int32_t  p_102, struct S0 * p_1859)
{ /* block id: 50 */
    uint32_t l_188 = 7UL;
    uint64_t *l_203 = &p_1859->g_124;
    uint32_t l_221 = 1UL;
    uint32_t l_223[6][4][5] = {{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}},{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}},{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}},{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}},{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}},{{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL},{0xD8F24E66L,0UL,0x351EFD96L,0xFFCC7CFDL,0xFFCC7CFDL}}};
    int i, j, k;
    for (p_1859->g_124 = 0; (p_1859->g_124 <= 13); p_1859->g_124 = safe_add_func_uint64_t_u_u(p_1859->g_124, 8))
    { /* block id: 53 */
        int32_t *l_145 = (void*)0;
        uint64_t l_146 = 18446744073709551613UL;
        int16_t l_186 = 0x445BL;
        int32_t l_191[10][4][4] = {{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}},{{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L},{0x2C706118L,0x26E68338L,(-9L),0x2C706118L}}};
        int64_t *l_202 = &p_1859->g_81[2][1];
        uint32_t ***l_216 = &p_1859->g_214;
        int32_t *l_222 = &l_191[0][0][3];
        int i, j, k;
        if (p_101)
        { /* block id: 54 */
            return p_1859->g_122[0][1][0];
        }
        else
        { /* block id: 56 */
            uint8_t l_139 = 0xA6L;
            int32_t l_148 = 0L;
            int32_t l_150 = (-7L);
            int32_t *l_204 = (void*)0;
            int32_t *l_205 = &p_1859->g_40[2][1];
            for (p_1859->g_126 = 17; (p_1859->g_126 < 4); p_1859->g_126 = safe_sub_func_int64_t_s_s(p_1859->g_126, 7))
            { /* block id: 59 */
                uint64_t l_142 = 0xA0F7998293F6A8FEL;
                int32_t l_156 = 3L;
                uint16_t *l_162 = &p_1859->g_35;
                int32_t *l_181 = &l_156;
                int32_t *l_182 = &l_156;
                int32_t *l_183 = (void*)0;
                int32_t *l_184 = (void*)0;
                int32_t *l_185 = &l_150;
                int32_t *l_187[10][6][4] = {{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}},{{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148},{&p_1859->g_180[1],&l_148,&p_1859->g_180[1],&l_148}}};
                int i, j, k;
                if ((safe_rshift_func_int8_t_s_s(l_139, (safe_lshift_func_uint16_t_u_u(l_142, 3)))))
                { /* block id: 60 */
                    uint64_t l_157 = 18446744073709551614UL;
                    for (l_139 = 0; (l_139 >= 34); l_139 = safe_add_func_uint8_t_u_u(l_139, 4))
                    { /* block id: 63 */
                        int32_t *l_147 = &p_1859->g_40[4][1];
                        int32_t *l_149 = &l_148;
                        int32_t *l_151 = &p_1859->g_40[6][1];
                        int32_t *l_152 = (void*)0;
                        int32_t *l_153 = &p_1859->g_40[5][0];
                        int32_t *l_154 = &l_150;
                        int32_t *l_155[7][10][3] = {{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}},{{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82},{(void*)0,&l_150,&p_1859->g_82}}};
                        int i, j, k;
                        (*p_1859->g_127) = l_145;
                        if (p_102)
                            continue;
                        (*l_147) = l_146;
                        --l_157;
                    }
                    if (p_102)
                        break;
                }
                else
                { /* block id: 70 */
                    uint64_t *l_170[2];
                    int32_t l_177[1];
                    int32_t *l_179 = &p_1859->g_180[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_170[i] = &l_142;
                    for (i = 0; i < 1; i++)
                        l_177[i] = 0x2493EC21L;
                    (*l_179) ^= (safe_add_func_uint64_t_u_u((l_162 == ((((((p_1859->g_178 = (safe_lshift_func_uint16_t_u_s(65535UL, ((safe_add_func_uint8_t_u_u((((((~l_150) == (l_148 |= (safe_add_func_int16_t_s_s((p_1859->g_169 &= 0L), p_1859->g_112[0])))) || 0L) | p_101) != ((+(safe_lshift_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((p_101 , ((safe_lshift_func_int8_t_s_u((((l_142 > p_102) < 0L) >= 0xB5AA5C670BDA24A5L), l_139)) && (-1L))), p_1859->g_40[0][1])) , p_1859->g_81[3][0]) || p_102), 3))) <= 0x3BDE5FC0L)), l_177[0])) < p_102)))) >= (-8L)) , l_177[0]) <= l_156) != p_101) , (void*)0)), p_1859->g_40[5][0]));
                }
                ++l_188;
                return l_139;
            }
            (*l_205) &= ((l_191[0][0][3] = p_1859->g_180[1]) != ((((safe_mul_func_int16_t_s_s((p_1859->g_112[3] , p_1859->g_81[0][1]), (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(0x37L, p_1859->g_122[1][1][7])), 10)) <= (((~(l_202 != &p_1859->g_81[3][0])) , l_203) == &p_1859->g_124)), (-1L))), 3)) | l_188) | p_101))) , p_1859->g_30) & p_102) , 1UL));
        }
        (*l_222) &= (((l_188 && ((safe_mul_func_int16_t_s_s(p_1859->g_126, (((*l_202) = (safe_mod_func_uint16_t_u_u(((65535UL >= (safe_div_func_uint32_t_u_u((((~p_1859->g_180[1]) , (safe_div_func_int32_t_s_s(((((-1L) && ((((+(p_1859->g_169 || (((((*l_216) = p_1859->g_214) == (void*)0) <= ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_1859->g_169 != l_188), 0x52DF08DBL)), p_1859->g_178)) != l_188)) >= p_1859->g_122[0][0][4]))) & p_101) != p_1859->g_122[1][0][3]) >= 6UL)) && p_1859->g_81[3][0]) , l_221), p_102))) || 255UL), 0x993FBD6BL))) , p_1859->g_35), p_101))) && p_101))) , l_146)) == 0xE1EE0A34L) == p_1859->g_122[0][1][0]);
    }
    return l_223[0][3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1859->g_124 p_1859->g_128 p_1859->g_40
 * writes: p_1859->g_40
 */
uint16_t  func_103(int32_t * p_104, int32_t ** p_105, int8_t  p_106, int32_t * p_107, uint8_t  p_108, struct S0 * p_1859)
{ /* block id: 46 */
    int64_t l_132[4][3] = {{0x6A709CE989DC580BL,0x6A709CE989DC580BL,0x6A709CE989DC580BL},{0x6A709CE989DC580BL,0x6A709CE989DC580BL,0x6A709CE989DC580BL},{0x6A709CE989DC580BL,0x6A709CE989DC580BL,0x6A709CE989DC580BL},{0x6A709CE989DC580BL,0x6A709CE989DC580BL,0x6A709CE989DC580BL}};
    int i, j;
    (**p_105) |= ((safe_rshift_func_uint8_t_u_s(l_132[2][2], l_132[0][1])) > p_1859->g_124);
    return l_132[2][2];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1860;
    struct S0* p_1859 = &c_1860;
    struct S0 c_1861 = {
        0x0D72276B87D0FA51L, // p_1859->g_7
        0x8ABF8B24L, // p_1859->g_30
        4UL, // p_1859->g_35
        {{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL},{0x712959AFL,0x712959AFL,0x712959AFL}}, // p_1859->g_40
        (-10L), // p_1859->g_73
        {{0x3643E267A5E2B195L,0x3643E267A5E2B195L},{0x3643E267A5E2B195L,0x3643E267A5E2B195L},{0x3643E267A5E2B195L,0x3643E267A5E2B195L},{0x3643E267A5E2B195L,0x3643E267A5E2B195L},{0x3643E267A5E2B195L,0x3643E267A5E2B195L}}, // p_1859->g_81
        9L, // p_1859->g_82
        {4294967289UL,4294967289UL,4294967289UL,4294967289UL}, // p_1859->g_112
        {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}}, // p_1859->g_122
        18446744073709551615UL, // p_1859->g_124
        0x15L, // p_1859->g_126
        &p_1859->g_40[4][0], // p_1859->g_128
        &p_1859->g_128, // p_1859->g_127
        0x6312B95EL, // p_1859->g_169
        0x2A6F8ADBL, // p_1859->g_178
        {0x10615127L,0x10615127L}, // p_1859->g_180
        &p_1859->g_112[3], // p_1859->g_215
        &p_1859->g_215, // p_1859->g_214
        0xAFA6L, // p_1859->g_259
        (-1L), // p_1859->g_262
        (void*)0, // p_1859->g_274
        0x4F70L, // p_1859->g_298
        0xC8L, // p_1859->g_316
        18446744073709551615UL, // p_1859->g_463
        &p_1859->g_463, // p_1859->g_462
        &p_1859->g_462, // p_1859->g_461
        {{{1UL,1UL}}}, // p_1859->g_546
        (void*)0, // p_1859->g_598
        3L, // p_1859->g_735
        (void*)0, // p_1859->g_737
        (void*)0, // p_1859->g_746
        &p_1859->g_746, // p_1859->g_745
        0xBE36L, // p_1859->g_771
        0x5C3674A8L, // p_1859->g_792
        0xACL, // p_1859->g_797
        &p_1859->g_214, // p_1859->g_802
        {{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802},{&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802,&p_1859->g_802}}, // p_1859->g_801
        &p_1859->g_127, // p_1859->g_874
        0x12AEL, // p_1859->g_876
        1UL, // p_1859->g_963
        0x4E281436L, // p_1859->g_1135
        {{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}},{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}},{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}},{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}},{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}},{{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126},{&p_1859->g_126,&p_1859->g_122[3][1][4],&p_1859->g_122[3][0][6],&p_1859->g_126,&p_1859->g_122[3][0][6],&p_1859->g_122[3][1][4],&p_1859->g_126}}}, // p_1859->g_1192
        0x14A2E1D0L, // p_1859->g_1195
        4294967295UL, // p_1859->g_1250
        (void*)0, // p_1859->g_1312
        &p_1859->g_1312, // p_1859->g_1311
        5L, // p_1859->g_1361
        0x2057C8D8L, // p_1859->g_1382
        {0x1B84955EL,0x1B84955EL,0x1B84955EL,0x1B84955EL,0x1B84955EL}, // p_1859->g_1483
        (void*)0, // p_1859->g_1511
        {0x2CL}, // p_1859->g_1586
        {{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}},{{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)},{0x227E54AD2355D0D7L,0L,(-1L)}}}, // p_1859->g_1648
        0xC703L, // p_1859->g_1699
        (void*)0, // p_1859->g_1702
        {7UL,7UL}, // p_1859->g_1706
        &p_1859->g_298, // p_1859->g_1719
        &p_1859->g_1719, // p_1859->g_1718
        &p_1859->g_1718, // p_1859->g_1717
        (-7L), // p_1859->g_1851
    };
    c_1860 = c_1861;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1859);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1859->g_7, "p_1859->g_7", print_hash_value);
    transparent_crc(p_1859->g_30, "p_1859->g_30", print_hash_value);
    transparent_crc(p_1859->g_35, "p_1859->g_35", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1859->g_40[i][j], "p_1859->g_40[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1859->g_73, "p_1859->g_73", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1859->g_81[i][j], "p_1859->g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1859->g_82, "p_1859->g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1859->g_112[i], "p_1859->g_112[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1859->g_122[i][j][k], "p_1859->g_122[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1859->g_124, "p_1859->g_124", print_hash_value);
    transparent_crc(p_1859->g_126, "p_1859->g_126", print_hash_value);
    transparent_crc(p_1859->g_169, "p_1859->g_169", print_hash_value);
    transparent_crc(p_1859->g_178, "p_1859->g_178", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1859->g_180[i], "p_1859->g_180[i]", print_hash_value);

    }
    transparent_crc(p_1859->g_259, "p_1859->g_259", print_hash_value);
    transparent_crc(p_1859->g_262, "p_1859->g_262", print_hash_value);
    transparent_crc(p_1859->g_298, "p_1859->g_298", print_hash_value);
    transparent_crc(p_1859->g_316, "p_1859->g_316", print_hash_value);
    transparent_crc(p_1859->g_463, "p_1859->g_463", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1859->g_546[i][j][k], "p_1859->g_546[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1859->g_735, "p_1859->g_735", print_hash_value);
    transparent_crc(p_1859->g_771, "p_1859->g_771", print_hash_value);
    transparent_crc(p_1859->g_792, "p_1859->g_792", print_hash_value);
    transparent_crc(p_1859->g_797, "p_1859->g_797", print_hash_value);
    transparent_crc(p_1859->g_876, "p_1859->g_876", print_hash_value);
    transparent_crc(p_1859->g_963, "p_1859->g_963", print_hash_value);
    transparent_crc(p_1859->g_1135, "p_1859->g_1135", print_hash_value);
    transparent_crc(p_1859->g_1195, "p_1859->g_1195", print_hash_value);
    transparent_crc(p_1859->g_1250, "p_1859->g_1250", print_hash_value);
    transparent_crc(p_1859->g_1361, "p_1859->g_1361", print_hash_value);
    transparent_crc(p_1859->g_1382, "p_1859->g_1382", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1859->g_1483[i], "p_1859->g_1483[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1859->g_1586[i], "p_1859->g_1586[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1859->g_1648[i][j][k], "p_1859->g_1648[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1859->g_1699, "p_1859->g_1699", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1859->g_1706[i], "p_1859->g_1706[i]", print_hash_value);

    }
    transparent_crc(p_1859->g_1851, "p_1859->g_1851", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
