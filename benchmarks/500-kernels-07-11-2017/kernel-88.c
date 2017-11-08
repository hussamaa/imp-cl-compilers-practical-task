// -g 65,10,6 -l 1,5,6
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


// Seed: 1433209617

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
};

union U1 {
   uint16_t  f0;
};

struct S2 {
    int32_t g_3;
    int32_t *g_5;
    int32_t ** volatile g_4[8];
    int32_t ** volatile g_6;
    volatile int32_t g_10;
    int32_t g_11;
    volatile int32_t g_14;
    volatile int32_t g_15;
    int32_t g_16;
    volatile int32_t g_19[1][6][5];
    volatile int32_t g_20;
    volatile int32_t g_21;
    int32_t g_22[2];
    int32_t g_28;
    volatile int32_t g_49[6][7];
    uint8_t g_57[3];
    int8_t g_65;
    union U0 g_117[2][4][3];
    union U1 g_120;
    uint64_t g_159;
    int64_t g_160;
    uint16_t g_161;
    int64_t g_163;
    volatile int8_t g_169;
    volatile int8_t *g_168;
    volatile int8_t **g_167;
    int8_t * volatile g_171;
    int8_t * volatile *g_170;
    int16_t g_173[9];
    int16_t *g_172;
    uint32_t g_176[5];
    uint16_t g_186;
    int16_t *g_221;
    uint16_t g_266;
    union U1 g_274;
    union U1 *g_307;
    union U1 **g_306;
    int64_t *g_356[5];
    int32_t *g_363;
    uint8_t g_418;
    int16_t g_438[8];
    int8_t g_445;
    union U1 ** volatile g_507;
    uint32_t g_554;
    uint8_t *g_607;
    volatile int32_t g_624[3][8];
    int32_t * volatile g_650;
    volatile uint16_t g_683;
    int64_t g_701[4];
    volatile union U1 g_760;
    volatile union U1 *g_759;
    volatile union U1 * volatile * volatile g_758;
    volatile union U1 * volatile * volatile *g_757;
    volatile union U1 * volatile * volatile **g_756[7];
    uint64_t g_770;
    volatile int64_t g_773[9][3];
    union U1 ***g_782;
    union U1 ****g_781;
    int64_t *g_790;
    int32_t ** volatile g_842;
    int8_t *g_893;
    int8_t **g_892;
    uint32_t g_918;
    int32_t * volatile g_944;
    int32_t **g_1065;
    int32_t ***g_1064[1][4];
    int32_t ***g_1067[1][3][6];
    int64_t **g_1079;
    int64_t *** volatile g_1078;
    volatile int8_t g_1139;
    uint64_t g_1178;
    int64_t g_1179;
    int32_t **g_1220;
    uint64_t g_1239;
    int16_t g_1286;
    int8_t g_1287;
    int32_t g_1314;
    int64_t g_1444[3][1];
    uint8_t * volatile * volatile g_1453;
    uint8_t * volatile * volatile *g_1452;
    int32_t * volatile g_1454;
    int32_t * volatile g_1455;
    int64_t **g_1501;
    int32_t * volatile g_1503[6];
    volatile int16_t g_1600;
    int64_t g_1625;
    uint16_t g_1629[10][3][2];
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_1630);
uint8_t  func_67(int8_t * p_68, struct S2 * p_1630);
union U0  func_71(union U1  p_72, uint64_t  p_73, int32_t ** p_74, struct S2 * p_1630);
uint32_t  func_76(int64_t  p_77, uint64_t  p_78, int16_t  p_79, int32_t * p_80, int8_t  p_81, struct S2 * p_1630);
int64_t  func_82(int8_t  p_83, int32_t ** p_84, int8_t * p_85, uint32_t  p_86, uint16_t  p_87, struct S2 * p_1630);
uint32_t  func_88(uint64_t  p_89, int16_t  p_90, int32_t ** p_91, struct S2 * p_1630);
uint64_t  func_92(int32_t ** p_93, int32_t  p_94, uint32_t  p_95, uint8_t  p_96, struct S2 * p_1630);
int32_t ** func_97(union U1  p_98, int64_t  p_99, struct S2 * p_1630);
union U1  func_100(int32_t  p_101, uint32_t  p_102, int8_t * p_103, struct S2 * p_1630);
int64_t  func_106(int64_t  p_107, int8_t * p_108, int32_t * p_109, struct S2 * p_1630);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1630->g_6 p_1630->g_3 p_1630->g_172 p_1630->g_20 p_1630->g_173 p_1630->g_1179 p_1630->g_159 p_1630->g_892 p_1630->g_893 p_1630->g_65 p_1630->g_607 p_1630->g_57 p_1630->g_1452 p_1630->g_1453 p_1630->g_1629 p_1630->g_363 p_1630->g_117.f0 p_1630->g_266
 * writes: p_1630->g_5 p_1630->g_3 p_1630->g_173 p_1630->g_438 p_1630->g_1625 p_1630->g_65 p_1630->g_57 p_1630->g_117.f0
 */
uint64_t  func_1(struct S2 * p_1630)
{ /* block id: 4 */
    int32_t *l_2 = &p_1630->g_3;
    int32_t l_48 = 0x2DCFEC76L;
    int32_t l_50 = 0x2F32651EL;
    int32_t l_51 = (-10L);
    int32_t l_52 = (-10L);
    int32_t l_53[3][5][8] = {{{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L}},{{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L}},{{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L},{0x266B3E62L,0x3AF71E1DL,0x36675F71L,(-1L),0x012CFB79L,0x5B78960BL,0x551B70F8L,0x7C8ECEA6L}}};
    int32_t l_55 = 0x1F207B6FL;
    uint64_t *l_1390[7] = {&p_1630->g_1178,&p_1630->g_1178,&p_1630->g_1178,&p_1630->g_1178,&p_1630->g_1178,&p_1630->g_1178,&p_1630->g_1178};
    int8_t *l_1443 = (void*)0;
    union U1 l_1473 = {0x1B22L};
    uint64_t l_1474[2];
    int64_t **l_1509 = &p_1630->g_790;
    int32_t l_1532 = 0x3E1E8DFEL;
    int32_t l_1585 = 6L;
    int64_t l_1588 = 0x780AB7ED72400B58L;
    uint16_t l_1607 = 65535UL;
    int32_t l_1628[5];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1474[i] = 18446744073709551611UL;
    for (i = 0; i < 5; i++)
        l_1628[i] = 0x11D65001L;
    (*p_1630->g_6) = l_2;
    for (p_1630->g_3 = 21; (p_1630->g_3 > 12); p_1630->g_3 = safe_sub_func_uint32_t_u_u(p_1630->g_3, 1))
    { /* block id: 8 */
        uint32_t l_23[2];
        int32_t l_56 = 0x3C4ECDC4L;
        int16_t l_1371[10][9] = {{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L},{0x7E73L,0x7E73L,0x61FBL,(-1L),0x49BEL,(-1L),0x61FBL,0x7E73L,0x7E73L}};
        int32_t l_1378 = 0x77AD220CL;
        uint8_t l_1391 = 0x1AL;
        int64_t **l_1460 = &p_1630->g_790;
        uint32_t l_1476 = 4294967295UL;
        int32_t l_1495 = 0x046751E5L;
        int8_t l_1502 = 0x25L;
        int8_t l_1557 = 0x46L;
        int32_t *l_1569[5] = {&l_52,&l_52,&l_52,&l_52,&l_52};
        int i, j;
        for (i = 0; i < 2; i++)
            l_23[i] = 0x5CF0ADC1L;
        (1 + 1);
    }
    for (l_52 = 6; (l_52 == 25); l_52 = safe_add_func_int8_t_s_s(l_52, 3))
    { /* block id: 866 */
        int16_t *l_1622 = &p_1630->g_438[3];
        int32_t l_1626 = 0x46344B92L;
        uint32_t l_1627[10][4][6] = {{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}},{{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L},{0x0C74787DL,0xC9BF5160L,0x9D7AABCDL,0UL,1UL,0x8CE29479L}}};
        int i, j, k;
        (*l_2) = ((*p_1630->g_363) ^= (8UL >= (safe_mod_func_uint8_t_u_u(((***p_1630->g_1452) = (safe_div_func_uint8_t_u_u(((((*p_1630->g_172) = 0x0FCCL) >= ((*l_1622) = 0L)) && (safe_lshift_func_int16_t_s_s(((p_1630->g_20 < (0x2F87L || ((p_1630->g_173[8] != (*l_2)) , (((**p_1630->g_892) |= (((p_1630->g_1179 || ((p_1630->g_1625 = 0x465783FEL) , l_1626)) == p_1630->g_159) >= (*l_2))) != (*p_1630->g_607))))) <= 0x200573E0L), l_1627[6][0][3]))), l_1628[3]))), p_1630->g_1629[9][1][0]))));
    }
    return p_1630->g_266;
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_28 p_1630->g_14 p_1630->g_5 p_1630->g_117.f0 p_1630->g_3 p_1630->g_57 p_1630->g_117 p_1630->g_120 p_1630->g_16 p_1630->g_11 p_1630->g_22 p_1630->g_65 p_1630->g_120.f0 p_1630->g_160 p_1630->g_163 p_1630->g_167 p_1630->g_170 p_1630->g_172 p_1630->g_186 p_1630->g_173 p_1630->g_176 p_1630->g_221 p_1630->g_161 p_1630->g_363 p_1630->g_1220 p_1630->g_1239 p_1630->g_918 p_1630->g_607
 * writes: p_1630->g_28 p_1630->g_11 p_1630->g_22 p_1630->g_65 p_1630->g_159 p_1630->g_160 p_1630->g_161 p_1630->g_163 p_1630->g_172 p_1630->g_186 p_1630->g_117.f0 p_1630->g_173 p_1630->g_120.f0 p_1630->g_5 p_1630->g_266 p_1630->g_120 p_1630->g_274 p_1630->g_306 p_1630->g_356 p_1630->g_15 p_1630->g_363 p_1630->g_1239 p_1630->g_918
 */
uint8_t  func_67(int8_t * p_68, struct S2 * p_1630)
{ /* block id: 31 */
    union U1 l_75 = {0x5BC6L};
    int32_t **l_443[3];
    int8_t *l_444 = &p_1630->g_445;
    uint16_t l_1219 = 0x7D41L;
    int32_t l_1245[9];
    int16_t l_1249[10] = {2L,2L,2L,2L,2L,2L,2L,2L,2L,2L};
    int64_t l_1343 = 0x14295956F02FC60BL;
    uint32_t l_1348 = 4294967295UL;
    uint8_t **l_1356 = (void*)0;
    int32_t l_1364 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_443[i] = &p_1630->g_363;
    for (i = 0; i < 9; i++)
        l_1245[i] = 2L;
    for (p_1630->g_28 = 0; (p_1630->g_28 <= (-5)); p_1630->g_28--)
    { /* block id: 34 */
        int32_t l_110 = 0L;
        int32_t **l_244 = &p_1630->g_5;
        int32_t ***l_243 = &l_244;
        int32_t **l_385 = (void*)0;
        union U1 l_442 = {0x3641L};
        uint64_t l_446 = 1UL;
        int8_t l_448 = 0x56L;
        p_1630->g_1239 ^= ((func_71(l_75, ((func_76(func_82(p_1630->g_14, ((func_88(func_92(((*l_243) = func_97(func_100(((safe_add_func_int64_t_s_s(func_106(l_110, p_68, &p_1630->g_3, p_1630), (safe_add_func_int64_t_s_s(p_1630->g_57[2], (p_1630->g_117[1][1][0] , l_75.f0))))) & l_110), l_110, &p_1630->g_65, p_1630), l_110, p_1630)), p_1630->g_57[0], p_1630->g_57[2], l_75.f0, p_1630), l_75.f0, l_385, p_1630) , l_442) , l_443[2]), l_444, l_446, p_1630->g_176[4], p_1630), p_1630->g_3, l_446, &p_1630->g_28, l_448, p_1630) & l_1219) >= l_442.f0), p_1630->g_1220, p_1630) , 5L) ^ 0x9335L);
    }
    for (l_1219 = 0; (l_1219 <= 33); ++l_1219)
    { /* block id: 653 */
        int32_t *l_1242 = &p_1630->g_3;
        (*p_1630->g_1220) = l_1242;
        if ((*l_1242))
            break;
    }
    for (p_1630->g_918 = 0; (p_1630->g_918 <= 2); p_1630->g_918 += 1)
    { /* block id: 659 */
        int32_t l_1246 = 0x58946F3BL;
        int16_t **l_1248 = &p_1630->g_172;
        int16_t ***l_1247[2];
        int32_t l_1285 = 0x0EBC43DBL;
        uint8_t l_1327 = 0x3CL;
        int32_t l_1350 = 0x61B2EAEEL;
        int i;
        for (i = 0; i < 2; i++)
            l_1247[i] = &l_1248;
        l_1249[4] = ((!0x1DL) < (((l_1246 = ((safe_lshift_func_int16_t_s_s(p_1630->g_57[p_1630->g_918], 15)) < ((*p_1630->g_607) || (l_1245[8] == 0x0DL)))) , l_1247[1]) != (void*)0));
        if (l_1246)
            break;
        for (p_1630->g_186 = 0; (p_1630->g_186 <= 0); p_1630->g_186 += 1)
        { /* block id: 665 */
            int32_t *l_1250[5];
            uint16_t *l_1259 = &l_1219;
            uint32_t *l_1267[2];
            uint16_t l_1284 = 1UL;
            uint32_t l_1355 = 4294967295UL;
            uint8_t **l_1357 = &p_1630->g_607;
            uint8_t l_1362 = 247UL;
            uint32_t l_1365 = 0x37CFC625L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1250[i] = &p_1630->g_22[1];
            for (i = 0; i < 2; i++)
                l_1267[i] = &p_1630->g_554;
            (*p_1630->g_1220) = l_1250[1];
        }
    }
    return (*p_1630->g_607);
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_120.f0 p_1630->g_1220 p_1630->g_363
 * writes: p_1630->g_120.f0 p_1630->g_363
 */
union U0  func_71(union U1  p_72, uint64_t  p_73, int32_t ** p_74, struct S2 * p_1630)
{ /* block id: 631 */
    int32_t *l_1224 = &p_1630->g_22[0];
    int32_t l_1230 = 0x49BBE1B4L;
    int32_t l_1231 = (-1L);
    int32_t l_1232 = 1L;
    int32_t l_1233 = (-1L);
    int32_t l_1234 = 1L;
    uint32_t l_1235 = 4294967287UL;
    union U0 l_1238 = {0x2372A05FL};
    for (p_1630->g_120.f0 = 0; (p_1630->g_120.f0 >= 56); ++p_1630->g_120.f0)
    { /* block id: 634 */
        uint16_t l_1223 = 0x2BD5L;
        int32_t *l_1228 = &p_1630->g_16;
        int32_t *l_1229[8] = {&p_1630->g_22[0],(void*)0,&p_1630->g_22[0],&p_1630->g_22[0],(void*)0,&p_1630->g_22[0],&p_1630->g_22[0],(void*)0};
        int i;
        if ((p_72.f0 , l_1223))
        { /* block id: 635 */
            union U1 *l_1225 = &p_1630->g_274;
            (*p_1630->g_1220) = l_1224;
            (*p_74) = l_1224;
            (*p_1630->g_1220) = (*p_74);
            l_1225 = (void*)0;
        }
        else
        { /* block id: 640 */
            uint8_t l_1226[7];
            int32_t *l_1227 = &p_1630->g_22[1];
            int i;
            for (i = 0; i < 7; i++)
                l_1226[i] = 0x7AL;
            (*p_74) = l_1224;
            if (l_1226[3])
                continue;
            (*p_74) = l_1227;
            (*p_74) = (*p_74);
        }
        l_1235--;
    }
    return l_1238;
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_11 p_1630->g_274.f0 p_1630->g_5 p_1630->g_117.f0 p_1630->g_186
 * writes: p_1630->g_11 p_1630->g_274.f0
 */
uint32_t  func_76(int64_t  p_77, uint64_t  p_78, int16_t  p_79, int32_t * p_80, int8_t  p_81, struct S2 * p_1630)
{ /* block id: 265 */
    uint16_t l_465 = 4UL;
    int64_t *l_493[9];
    int32_t l_509 = 0L;
    int32_t l_515 = 5L;
    int32_t l_516 = 0x36603639L;
    int32_t l_518 = 3L;
    int32_t l_519[6];
    uint16_t l_563 = 0UL;
    union U0 l_673 = {0x49957FFFL};
    int32_t **l_678 = &p_1630->g_5;
    int16_t l_766 = 0x0764L;
    uint16_t l_807 = 0x552EL;
    int64_t l_826[10] = {0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL,0x16E1F2EA3A1EC5CAL};
    int16_t l_827 = (-1L);
    int8_t l_876 = 0x46L;
    uint32_t l_879[9] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL};
    int8_t **l_888 = (void*)0;
    uint16_t l_910 = 65528UL;
    uint32_t l_1001 = 0xD39F8FA7L;
    union U1 *l_1011 = (void*)0;
    int32_t ***l_1069 = &l_678;
    uint32_t l_1124 = 0xA6C061DFL;
    int32_t l_1215[10];
    int i;
    for (i = 0; i < 9; i++)
        l_493[i] = &p_1630->g_163;
    for (i = 0; i < 6; i++)
        l_519[i] = 0x05F94E32L;
    for (i = 0; i < 10; i++)
        l_1215[i] = 0x7E9A7B24L;
    for (p_1630->g_11 = 0; (p_1630->g_11 > 20); p_1630->g_11 = safe_add_func_int8_t_s_s(p_1630->g_11, 5))
    { /* block id: 268 */
        int32_t l_453 = (-9L);
        uint64_t *l_456 = &p_1630->g_159;
        int32_t l_464 = 0x57CFEC4FL;
        int32_t l_511 = 1L;
        int32_t l_512 = 1L;
        int32_t l_513 = 0x7138FDB8L;
        int32_t l_514[9][2] = {{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}};
        uint32_t l_556 = 4294967295UL;
        int8_t l_568 = (-9L);
        int16_t **l_658 = &p_1630->g_221;
        int64_t *l_747 = &p_1630->g_160;
        uint8_t l_751 = 0x2BL;
        int i, j;
        (1 + 1);
    }
    for (p_1630->g_274.f0 = (-18); (p_1630->g_274.f0 > 51); p_1630->g_274.f0 = safe_add_func_int8_t_s_s(p_1630->g_274.f0, 5))
    { /* block id: 420 */
        uint64_t l_835 = 1UL;
        int32_t l_856 = 9L;
        int64_t *l_873[5][10] = {{&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2]},{&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2]},{&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2]},{&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2]},{&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2],&p_1630->g_701[2]}};
        union U1 ***l_917 = &p_1630->g_306;
        int32_t l_969 = 0x6F9F5292L;
        int32_t l_971 = 0x19F8DD35L;
        int32_t l_973 = (-1L);
        int32_t l_974 = 1L;
        int32_t l_975 = 0x3D7DFAAAL;
        int32_t l_976[5] = {0x1FB18F78L,0x1FB18F78L,0x1FB18F78L,0x1FB18F78L,0x1FB18F78L};
        union U0 l_982 = {0L};
        uint16_t *l_989 = &p_1630->g_120.f0;
        int32_t ***l_1068 = &p_1630->g_1065;
        int32_t l_1072 = (-1L);
        uint64_t l_1076[6][9] = {{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL},{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL},{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL},{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL},{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL},{0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL,0UL,0x05F79966C551EAB3L,0UL}};
        uint32_t l_1104 = 0xD1884FB3L;
        int64_t **l_1109 = &p_1630->g_356[3];
        int32_t l_1135 = 0x646FC76AL;
        int64_t *l_1136 = &p_1630->g_701[1];
        uint32_t l_1150 = 4294967289UL;
        int64_t l_1214 = 0x522C185C0A905CC3L;
        int i, j;
        for (l_515 = (-20); (l_515 >= 15); l_515 = safe_add_func_int32_t_s_s(l_515, 5))
        { /* block id: 423 */
            int64_t l_866[1][4] = {{0x679EE7F3432A9120L,0x679EE7F3432A9120L,0x679EE7F3432A9120L,0x679EE7F3432A9120L}};
            int32_t l_881 = 0x70934575L;
            int32_t l_897 = (-10L);
            int16_t *l_902 = (void*)0;
            int32_t l_903 = 0x11ED43A1L;
            union U1 l_913 = {0xCD9CL};
            uint16_t *l_914 = &p_1630->g_161;
            uint64_t l_960[8];
            int32_t l_970[5][1] = {{1L},{1L},{1L},{1L},{1L}};
            uint32_t l_977 = 0UL;
            int i, j;
            for (i = 0; i < 8; i++)
                l_960[i] = 0x7167687D42607D7EL;
            (1 + 1);
        }
    }
    for (l_910 = 0; (l_910 < 29); l_910 = safe_add_func_uint64_t_u_u(l_910, 4))
    { /* block id: 627 */
        int16_t l_1218 = 0x157CL;
        l_1218 = (**l_678);
    }
    return p_1630->g_186;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1630->g_15 p_1630->g_173
 */
int64_t  func_82(int8_t  p_83, int32_t ** p_84, int8_t * p_85, uint32_t  p_86, uint16_t  p_87, struct S2 * p_1630)
{ /* block id: 262 */
    int32_t l_447[9][6] = {{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)},{0L,0L,0L,0L,(-3L),(-1L)}};
    int i, j;
    for (p_1630->g_15 = 0; p_1630->g_15 < 9; p_1630->g_15 += 1)
    {
        p_1630->g_173[p_1630->g_15] = 0x6710L;
    }
    return l_447[8][5];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1630->g_5
 */
uint32_t  func_88(uint64_t  p_89, int16_t  p_90, int32_t ** p_91, struct S2 * p_1630)
{ /* block id: 230 */
    int32_t *l_386 = &p_1630->g_117[1][1][0].f0;
    int32_t **l_387 = &p_1630->g_5;
    int32_t l_394 = 0L;
    int32_t l_396[6] = {0x7E9B3ADBL,0x31783EBFL,0x7E9B3ADBL,0x7E9B3ADBL,0x31783EBFL,0x7E9B3ADBL};
    uint32_t l_397 = 4294967292UL;
    int32_t l_441[8] = {0x762D697DL,0x762D697DL,0x762D697DL,0x762D697DL,0x762D697DL,0x762D697DL,0x762D697DL,0x762D697DL};
    int i;
    (*l_387) = l_386;
    for (p_89 = 0; (p_89 <= 2); p_89 += 1)
    { /* block id: 234 */
        int32_t *l_388 = &p_1630->g_16;
        int32_t l_389 = 0x4B7A2DA4L;
        int32_t *l_390 = &p_1630->g_16;
        int32_t *l_391 = &p_1630->g_117[1][1][0].f0;
        int32_t l_392 = 0x427AE9E7L;
        int32_t *l_393 = &p_1630->g_11;
        int32_t *l_395[9] = {&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0,&p_1630->g_117[1][1][0].f0};
        uint16_t l_408 = 0UL;
        int i;
        l_397--;
    }
    return p_90;
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_11 p_1630->g_221 p_1630->g_173 p_1630->g_163 p_1630->g_22 p_1630->g_5 p_1630->g_65 p_1630->g_120 p_1630->g_161 p_1630->g_160 p_1630->g_3 p_1630->g_172 p_1630->g_176 p_1630->g_16 p_1630->g_57 p_1630->g_363 p_1630->g_117.f0
 * writes: p_1630->g_11 p_1630->g_5 p_1630->g_266 p_1630->g_65 p_1630->g_120 p_1630->g_274 p_1630->g_22 p_1630->g_306 p_1630->g_160 p_1630->g_117.f0 p_1630->g_356 p_1630->g_163
 */
uint64_t  func_92(int32_t ** p_93, int32_t  p_94, uint32_t  p_95, uint8_t  p_96, struct S2 * p_1630)
{ /* block id: 168 */
    int8_t l_251 = 1L;
    int32_t l_292 = 0x4ABDAED0L;
    int32_t l_293 = 2L;
    int32_t l_294[10][6] = {{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)},{(-1L),(-1L),0x43EE369CL,(-1L),0L,(-1L)}};
    union U1 *l_304 = &p_1630->g_120;
    union U1 **l_303[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_347 = 4294967295UL;
    int64_t *l_357 = (void*)0;
    int64_t **l_374 = &p_1630->g_356[0];
    int8_t **l_384 = (void*)0;
    int8_t ***l_383[10][1] = {{&l_384},{&l_384},{&l_384},{&l_384},{&l_384},{&l_384},{&l_384},{&l_384},{&l_384},{&l_384}};
    int i, j;
    for (p_1630->g_11 = 0; (p_1630->g_11 > (-13)); p_1630->g_11 = safe_sub_func_int8_t_s_s(p_1630->g_11, 4))
    { /* block id: 171 */
        uint64_t l_260 = 0x3C6F224F14233238L;
        int32_t l_285 = 0x0A7CF92BL;
        int8_t l_286 = 1L;
        int32_t l_288 = 6L;
        int32_t l_290 = 2L;
        int32_t l_291 = 2L;
        int32_t l_295[10][4][6] = {{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}},{{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L},{1L,(-1L),0x14D10479L,1L,8L,0x14D10479L}}};
        int i, j, k;
        (*p_93) = &p_1630->g_22[1];
        for (p_96 = 0; (p_96 == 1); ++p_96)
        { /* block id: 175 */
            int16_t *l_265 = (void*)0;
            int32_t *l_269 = (void*)0;
            int32_t l_287 = 0L;
            int32_t l_289 = (-1L);
            int32_t l_296 = 0L;
            int32_t l_297 = 0x585ABBE8L;
            int32_t l_298[8] = {0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L,0x5FBB41E9L};
            int i;
            if ((safe_add_func_uint64_t_u_u((l_251 >= (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*p_1630->g_221), ((safe_lshift_func_int16_t_s_u((18446744073709551607UL > l_260), ((l_251 >= (safe_sub_func_uint32_t_u_u(0x59C8B267L, ((safe_rshift_func_uint8_t_u_s(0UL, ((0x0B79L <= (((p_1630->g_266 = 5L) && (*p_1630->g_221)) , p_1630->g_163)) != 0xBBC287C230230F22L))) ^ (*p_1630->g_221))))) >= 0x4DL))) >= p_94))), p_1630->g_22[0])), 0x5AEEL))), p_96)))
            { /* block id: 177 */
                int8_t l_267[1];
                int32_t l_268[6] = {0x5B7D9204L,0x5B7D9204L,0x5B7D9204L,0x5B7D9204L,0x5B7D9204L,0x5B7D9204L};
                int i;
                for (i = 0; i < 1; i++)
                    l_267[i] = 7L;
                l_268[3] = (l_267[0] , (**p_93));
                (*p_93) = l_269;
                for (p_1630->g_65 = 0; (p_1630->g_65 < (-16)); p_1630->g_65 = safe_sub_func_uint16_t_u_u(p_1630->g_65, 7))
                { /* block id: 182 */
                    union U1 *l_272 = &p_1630->g_120;
                    union U1 *l_273[1][1];
                    int32_t l_275[9][4] = {{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)},{(-4L),0L,(-4L),(-4L)}};
                    int32_t *l_276 = &p_1630->g_22[0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_273[i][j] = &p_1630->g_274;
                    }
                    (*l_276) = ((p_1630->g_274 = ((*l_272) = p_1630->g_120)) , l_275[4][2]);
                    return p_95;
                }
                (*p_93) = &p_1630->g_22[0];
            }
            else
            { /* block id: 189 */
                return p_96;
            }
            if ((*p_1630->g_5))
            { /* block id: 192 */
                int32_t *l_277 = &p_1630->g_22[0];
                int32_t *l_278 = &p_1630->g_22[0];
                int32_t *l_279 = &p_1630->g_22[0];
                int32_t *l_280 = &p_1630->g_22[1];
                int32_t *l_281 = (void*)0;
                int32_t *l_282 = &p_1630->g_22[0];
                int32_t *l_283 = (void*)0;
                int32_t *l_284[6] = {&p_1630->g_22[0],&p_1630->g_22[0],&p_1630->g_22[0],&p_1630->g_22[0],&p_1630->g_22[0],&p_1630->g_22[0]};
                int16_t l_299[2][4][1] = {{{0x6993L},{0x6993L},{0x6993L},{0x6993L}},{{0x6993L},{0x6993L},{0x6993L},{0x6993L}}};
                uint32_t l_300 = 4294967295UL;
                int i, j, k;
                ++l_300;
            }
            else
            { /* block id: 194 */
                union U1 ***l_305[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_305[i] = &l_303[7];
                p_1630->g_306 = l_303[7];
                return p_1630->g_161;
            }
        }
        if ((*p_1630->g_5))
            continue;
        if ((**p_93))
            break;
    }
    for (p_1630->g_160 = 0; (p_1630->g_160 >= (-1)); p_1630->g_160--)
    { /* block id: 204 */
        uint32_t *l_322 = &p_1630->g_176[2];
        int32_t l_325 = (-3L);
        if ((**p_93))
            break;
        if ((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((*p_1630->g_5), (safe_mul_func_int16_t_s_s((*p_1630->g_172), (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(p_96, 3)), (safe_lshift_func_int8_t_s_s(((void*)0 != l_322), (safe_lshift_func_uint16_t_u_s(0UL, (l_294[3][5] > ((*p_1630->g_172) , ((p_94 ^ 0x86EC77456604268EL) , l_325))))))))))))) >= l_294[7][0]), p_95)))
        { /* block id: 206 */
            for (p_94 = 0; (p_94 >= 13); p_94 = safe_add_func_uint32_t_u_u(p_94, 4))
            { /* block id: 209 */
                (*p_93) = (*p_93);
            }
            return p_95;
        }
        else
        { /* block id: 213 */
            uint64_t l_338 = 6UL;
            int32_t l_348 = 0x3ED0E94FL;
            uint32_t l_349 = 0x0B20F8B6L;
            int32_t *l_350 = (void*)0;
            int32_t *l_351 = &p_1630->g_117[1][1][0].f0;
            int64_t *l_355 = &p_1630->g_160;
            int64_t **l_354[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t **l_362 = &l_350;
            int i, j;
            (*l_351) = (safe_mod_func_int32_t_s_s((p_1630->g_22[1] = (+(safe_div_func_int64_t_s_s((~(((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(0x6FFBL, 14)), (safe_div_func_uint8_t_u_u(l_338, p_1630->g_176[4])))) & (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((p_95 || ((-1L) && (((safe_lshift_func_uint8_t_u_u(((((void*)0 == &p_1630->g_266) != ((l_348 ^= (((safe_add_func_int8_t_s_s((p_1630->g_16 && (p_1630->g_57[0] <= l_347)), 0x97L)) >= 0x18C5L) >= l_338)) || p_94)) > l_294[0][1]), p_1630->g_57[2])) ^ (*p_1630->g_172)) & l_338))) | p_1630->g_57[0]), 0xBB2FL)), l_293))) | l_325)), 0xC16B0B2A739FFCCEL)))), l_349));
            l_294[7][0] = (((*l_351) = 0x4BE0BF040474EEFFL) , l_325);
            (*l_351) = (safe_mul_func_int16_t_s_s(((p_1630->g_356[0] = (void*)0) == l_357), ((((!(*p_1630->g_172)) | (safe_mod_func_uint8_t_u_u(0x24L, (safe_lshift_func_int8_t_s_s(l_294[3][0], 1))))) && (p_1630->g_163 = 0L)) && (((*l_362) = ((*p_93) = (*p_93))) != (((6UL > p_1630->g_22[1]) & p_95) , &p_1630->g_3)))));
        }
    }
    (*p_93) = p_1630->g_363;
    l_294[7][0] = (p_94 | (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_293, (((*l_374) = (void*)0) == &p_1630->g_163))), ((void*)0 == &p_1630->g_168))) >= (safe_mul_func_uint16_t_u_u((p_96 != ((safe_mul_func_int8_t_s_s((((((safe_sub_func_uint8_t_u_u(255UL, (safe_lshift_func_int8_t_s_s(((l_383[7][0] == &p_1630->g_170) ^ (*p_1630->g_5)), 6)))) , 0x3119ABA74D19CB0FL) != l_251) >= (*p_1630->g_5)) & 0xAC0B9D952C03F2F6L), 255UL)) , p_1630->g_16)), 0x5198L))), 3)) & l_293) != 0x23756CC6E33EB2F2L), 7UL)), p_96)));
    return l_294[0][5];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_97(union U1  p_98, int64_t  p_99, struct S2 * p_1630)
{ /* block id: 165 */
    return &p_1630->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_120 p_1630->g_16 p_1630->g_117.f0 p_1630->g_11 p_1630->g_22 p_1630->g_57 p_1630->g_65 p_1630->g_28 p_1630->g_120.f0 p_1630->g_160 p_1630->g_163 p_1630->g_167 p_1630->g_170 p_1630->g_172 p_1630->g_5 p_1630->g_3 p_1630->g_186 p_1630->g_117 p_1630->g_173 p_1630->g_176
 * writes: p_1630->g_22 p_1630->g_65 p_1630->g_159 p_1630->g_160 p_1630->g_161 p_1630->g_163 p_1630->g_172 p_1630->g_186 p_1630->g_117.f0 p_1630->g_173 p_1630->g_120.f0
 */
union U1  func_100(int32_t  p_101, uint32_t  p_102, int8_t * p_103, struct S2 * p_1630)
{ /* block id: 43 */
    union U1 l_118 = {0xC76AL};
    union U0 l_119[2] = {{0x16794CA0L},{0x16794CA0L}};
    int32_t *l_135 = &p_1630->g_22[1];
    int8_t *l_151[4] = {&p_1630->g_65,&p_1630->g_65,&p_1630->g_65,&p_1630->g_65};
    int8_t **l_150 = &l_151[1];
    int32_t l_181[9];
    int16_t l_213 = 0x3078L;
    uint32_t l_215 = 0x3901CCEFL;
    int i;
    for (i = 0; i < 9; i++)
        l_181[i] = 0x3AFA29F6L;
    (*l_135) &= ((l_118 , (l_119[0] , p_1630->g_120)) , (p_101 = ((safe_sub_func_uint16_t_u_u(1UL, (safe_rshift_func_uint8_t_u_u(255UL, (safe_sub_func_uint16_t_u_u(p_1630->g_16, l_119[0].f0)))))) > (safe_sub_func_int16_t_s_s(p_1630->g_117[1][1][0].f0, (((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0UL, 6)), p_102)) || p_101) >= l_118.f0), (-10L))) | p_1630->g_11) == l_118.f0))))));
    for (p_102 = 0; (p_102 <= 1); p_102 += 1)
    { /* block id: 48 */
        int16_t l_138 = 8L;
        int16_t *l_139 = &l_138;
        int32_t *l_140[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_147 = 0x81D41956L;
        int32_t l_198 = 0x0DA2AAD2L;
        int32_t l_214 = 1L;
        int i;
        (*l_135) = (safe_mul_func_int8_t_s_s((((*l_139) = l_138) , ((*l_135) <= (p_101 = (0x23L != p_1630->g_57[0])))), ((l_118 , p_102) , p_102)));
        for (l_138 = 1; (l_138 >= 0); l_138 -= 1)
        { /* block id: 54 */
            int32_t l_145 = 0x0A24D0A3L;
            int32_t l_146[10][6] = {{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)},{0L,1L,(-1L),0L,1L,(-1L)}};
            int8_t ***l_152 = (void*)0;
            int8_t ***l_153 = (void*)0;
            int8_t ***l_154 = &l_150;
            int64_t *l_162 = &p_1630->g_163;
            int16_t *l_166 = &l_138;
            uint32_t l_180 = 0x0044E9B0L;
            int8_t l_203 = 0L;
            int i, j;
            for (p_101 = 6; (p_101 >= 2); p_101 -= 1)
            { /* block id: 57 */
                int32_t l_141 = 0x0B4203E2L;
                int32_t l_142 = 8L;
                int32_t l_143 = 0x08AEA66FL;
                int32_t l_144[8] = {0x199BD31AL,0x199BD31AL,0x199BD31AL,0x199BD31AL,0x199BD31AL,0x199BD31AL,0x199BD31AL,0x199BD31AL};
                int i;
                for (p_1630->g_65 = 6; (p_1630->g_65 >= 0); p_1630->g_65 -= 1)
                { /* block id: 60 */
                    int i;
                    l_147++;
                    if (p_1630->g_57[(p_102 + 1)])
                        break;
                    if (p_1630->g_57[(l_138 + 1)])
                        continue;
                }
            }
            (*l_154) = l_150;
            p_101 = (((void*)0 == &p_101) , (safe_mod_func_uint64_t_u_u(p_1630->g_11, ((*l_162) |= (p_1630->g_161 = (p_102 != (((p_1630->g_28 & (*p_103)) == (p_1630->g_57[2] , ((safe_div_func_int16_t_s_s(((p_1630->g_160 |= ((*l_135) |= (p_1630->g_159 = (p_1630->g_120.f0 , 7L)))) != l_146[0][0]), p_1630->g_57[2])) == p_1630->g_57[2]))) > p_101)))))));
            for (p_1630->g_160 = 0; (p_1630->g_160 <= 1); p_1630->g_160 += 1)
            { /* block id: 75 */
                int16_t **l_174 = &p_1630->g_172;
                uint32_t *l_175[6][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int32_t l_177 = (-5L);
                int32_t l_184 = 2L;
                int32_t l_185 = (-4L);
                int32_t *l_189[3][10][4] = {{{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28}},{{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28}},{{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28},{&l_119[0].f0,(void*)0,&l_119[l_138].f0,&p_1630->g_28}}};
                int i, j, k;
                l_180 = ((*l_135) = ((((safe_add_func_uint8_t_u_u((l_166 == (((((p_1630->g_167 != p_1630->g_170) || 0x5507861EL) == p_1630->g_163) | p_102) , ((*l_174) = p_1630->g_172))), ((l_177 = p_1630->g_65) , (safe_rshift_func_int8_t_s_u((l_119[l_138] , 0x2BL), p_101))))) > l_119[l_138].f0) >= 0x05CCF7F129304CBFL) , (*p_1630->g_5)));
                for (l_147 = 0; (l_147 <= 1); l_147 += 1)
                { /* block id: 82 */
                    int32_t l_182 = 0x04089B8EL;
                    int32_t l_183 = (-1L);
                    p_1630->g_186++;
                    for (p_1630->g_186 = 0; (p_1630->g_186 <= 1); p_1630->g_186 += 1)
                    { /* block id: 86 */
                        int32_t **l_190 = (void*)0;
                        int32_t **l_191 = &l_189[0][3][1];
                        if ((*p_1630->g_5))
                            break;
                        l_189[1][6][1] = &p_1630->g_22[0];
                        (*l_191) = &l_184;
                    }
                    p_1630->g_117[1][1][0].f0 = ((*l_135) = 0x78DC8BCBL);
                }
                if ((*p_1630->g_5))
                { /* block id: 94 */
                    union U1 l_192 = {0x24B5L};
                    p_101 = ((-6L) && p_101);
                    return l_192;
                }
                else
                { /* block id: 97 */
                    uint16_t *l_197 = &p_1630->g_161;
                    int32_t l_199 = 0x78F1FB96L;
                    int32_t l_200 = 0L;
                    int32_t l_201 = 0x63BD2775L;
                    int32_t l_202 = 0x3B7CE848L;
                    uint32_t l_204 = 4294967288UL;
                    int32_t l_207 = 0x484FFCF1L;
                    int32_t l_208 = 1L;
                    int32_t l_209 = 6L;
                    int32_t l_210 = 0x009A12A5L;
                    int32_t l_211[5][3] = {{1L,1L,0x43A63B0FL},{1L,1L,0x43A63B0FL},{1L,1L,0x43A63B0FL},{1L,1L,0x43A63B0FL},{1L,1L,0x43A63B0FL}};
                    int64_t l_212 = 0x1F0464915B41E8C2L;
                    int i, j;
                    p_101 = ((((*l_197) = ((safe_mul_func_uint16_t_u_u(0x66F0L, ((((safe_add_func_uint64_t_u_u(p_102, 1UL)) , ((((*l_174) = &p_1630->g_173[8]) == (p_1630->g_3 , &p_1630->g_173[0])) && (*p_1630->g_5))) , ((((((*p_1630->g_172) = (p_1630->g_117[1][1][0] , (((((*l_135) = ((0xEF01L < (*p_1630->g_172)) & l_145)) ^ p_102) > 0UL) != p_101))) || p_1630->g_176[4]) | p_101) && (*p_103)) <= p_1630->g_57[2])) < 0x76C4L))) == p_102)) && l_180) >= p_1630->g_117[1][1][0].f0);
                    l_204--;
                    l_215--;
                }
                if (p_102)
                    break;
            }
        }
    }
    for (p_1630->g_120.f0 = 0; (p_1630->g_120.f0 <= 3); p_1630->g_120.f0 += 1)
    { /* block id: 112 */
        int32_t l_229 = 0x506459D8L;
        int32_t l_230 = (-1L);
        union U1 l_234 = {0xF941L};
        int32_t **l_241 = (void*)0;
        int32_t **l_242 = &l_135;
        (1 + 1);
    }
    return l_118;
}


/* ------------------------------------------ */
/* 
 * reads : p_1630->g_11 p_1630->g_5 p_1630->g_3 p_1630->g_117.f0
 * writes: p_1630->g_11
 */
int64_t  func_106(int64_t  p_107, int8_t * p_108, int32_t * p_109, struct S2 * p_1630)
{ /* block id: 35 */
    int16_t l_114 = (-4L);
    for (p_1630->g_11 = (-16); (p_1630->g_11 == (-14)); p_1630->g_11 = safe_add_func_uint32_t_u_u(p_1630->g_11, 3))
    { /* block id: 38 */
        uint8_t l_113 = 0xBDL;
        if ((*p_1630->g_5))
            break;
        if (l_113)
            break;
    }
    return l_114;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1631;
    struct S2* p_1630 = &c_1631;
    struct S2 c_1632 = {
        0x0A290BE4L, // p_1630->g_3
        &p_1630->g_3, // p_1630->g_5
        {&p_1630->g_5,&p_1630->g_5,&p_1630->g_5,&p_1630->g_5,&p_1630->g_5,&p_1630->g_5,&p_1630->g_5,&p_1630->g_5}, // p_1630->g_4
        &p_1630->g_5, // p_1630->g_6
        0x01BA028EL, // p_1630->g_10
        (-1L), // p_1630->g_11
        0L, // p_1630->g_14
        0x274952F3L, // p_1630->g_15
        1L, // p_1630->g_16
        {{{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L},{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L},{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L},{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L},{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L},{(-5L),0x6DD2CC91L,0L,0x07263B0AL,0L}}}, // p_1630->g_19
        0L, // p_1630->g_20
        1L, // p_1630->g_21
        {0x65B0B56CL,0x65B0B56CL}, // p_1630->g_22
        8L, // p_1630->g_28
        {{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L},{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L},{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L},{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L},{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L},{0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L,0x6BC59458L,0x11930E88L,0x11930E88L}}, // p_1630->g_49
        {0x3EL,0x3EL,0x3EL}, // p_1630->g_57
        (-8L), // p_1630->g_65
        {{{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}}},{{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}},{{0x036713F9L},{0L},{0x036713F9L}}}}, // p_1630->g_117
        {0xA037L}, // p_1630->g_120
        0x4176206665C64D3BL, // p_1630->g_159
        (-9L), // p_1630->g_160
        0x6BF4L, // p_1630->g_161
        0x0F463998E5181CDDL, // p_1630->g_163
        0L, // p_1630->g_169
        &p_1630->g_169, // p_1630->g_168
        &p_1630->g_168, // p_1630->g_167
        (void*)0, // p_1630->g_171
        &p_1630->g_171, // p_1630->g_170
        {9L,6L,9L,9L,6L,9L,9L,6L,9L}, // p_1630->g_173
        &p_1630->g_173[8], // p_1630->g_172
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_1630->g_176
        1UL, // p_1630->g_186
        &p_1630->g_173[6], // p_1630->g_221
        0x597FL, // p_1630->g_266
        {0xEEDFL}, // p_1630->g_274
        &p_1630->g_120, // p_1630->g_307
        &p_1630->g_307, // p_1630->g_306
        {&p_1630->g_163,&p_1630->g_163,&p_1630->g_163,&p_1630->g_163,&p_1630->g_163}, // p_1630->g_356
        &p_1630->g_117[1][1][0].f0, // p_1630->g_363
        0x65L, // p_1630->g_418
        {0x7B53L,0x7B53L,0x7B53L,0x7B53L,0x7B53L,0x7B53L,0x7B53L,0x7B53L}, // p_1630->g_438
        0x5FL, // p_1630->g_445
        &p_1630->g_307, // p_1630->g_507
        4294967291UL, // p_1630->g_554
        &p_1630->g_57[0], // p_1630->g_607
        {{0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L},{0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L},{0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L,0x795D7B2BL,0x795D7B2BL,0x7C652379L}}, // p_1630->g_624
        &p_1630->g_16, // p_1630->g_650
        9UL, // p_1630->g_683
        {0x5D2294A9F8358750L,0x5D2294A9F8358750L,0x5D2294A9F8358750L,0x5D2294A9F8358750L}, // p_1630->g_701
        {0x9AA0L}, // p_1630->g_760
        &p_1630->g_760, // p_1630->g_759
        &p_1630->g_759, // p_1630->g_758
        &p_1630->g_758, // p_1630->g_757
        {&p_1630->g_757,&p_1630->g_757,&p_1630->g_757,&p_1630->g_757,&p_1630->g_757,&p_1630->g_757,&p_1630->g_757}, // p_1630->g_756
        0x92A96E46B368976AL, // p_1630->g_770
        {{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L},{1L,0x1C4021E4C6131D35L,0x3600F2EA6F0D53F5L}}, // p_1630->g_773
        &p_1630->g_306, // p_1630->g_782
        &p_1630->g_782, // p_1630->g_781
        &p_1630->g_701[1], // p_1630->g_790
        &p_1630->g_363, // p_1630->g_842
        &p_1630->g_65, // p_1630->g_893
        &p_1630->g_893, // p_1630->g_892
        1UL, // p_1630->g_918
        &p_1630->g_11, // p_1630->g_944
        (void*)0, // p_1630->g_1065
        {{&p_1630->g_1065,&p_1630->g_1065,&p_1630->g_1065,&p_1630->g_1065}}, // p_1630->g_1064
        {{{(void*)0,&p_1630->g_1065,&p_1630->g_1065,&p_1630->g_1065,(void*)0,(void*)0},{(void*)0,&p_1630->g_1065,&p_1630->g_1065,&p_1630->g_1065,(void*)0,(void*)0},{(void*)0,&p_1630->g_1065,&p_1630->g_1065,&p_1630->g_1065,(void*)0,(void*)0}}}, // p_1630->g_1067
        (void*)0, // p_1630->g_1079
        &p_1630->g_1079, // p_1630->g_1078
        0x10L, // p_1630->g_1139
        0xA93DFE94D69A66A9L, // p_1630->g_1178
        0x42CA1D6D3CAD9022L, // p_1630->g_1179
        &p_1630->g_363, // p_1630->g_1220
        1UL, // p_1630->g_1239
        2L, // p_1630->g_1286
        0L, // p_1630->g_1287
        6L, // p_1630->g_1314
        {{0x69E792D563D3F724L},{0x69E792D563D3F724L},{0x69E792D563D3F724L}}, // p_1630->g_1444
        &p_1630->g_607, // p_1630->g_1453
        &p_1630->g_1453, // p_1630->g_1452
        (void*)0, // p_1630->g_1454
        &p_1630->g_117[1][1][0].f0, // p_1630->g_1455
        &p_1630->g_356[1], // p_1630->g_1501
        {(void*)0,&p_1630->g_28,(void*)0,(void*)0,&p_1630->g_28,(void*)0}, // p_1630->g_1503
        0x4A69L, // p_1630->g_1600
        0x33517EB06DCA9835L, // p_1630->g_1625
        {{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}},{{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L},{0x1B3BL,0x09E1L}}}, // p_1630->g_1629
    };
    c_1631 = c_1632;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1630);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1630->g_3, "p_1630->g_3", print_hash_value);
    transparent_crc(p_1630->g_10, "p_1630->g_10", print_hash_value);
    transparent_crc(p_1630->g_11, "p_1630->g_11", print_hash_value);
    transparent_crc(p_1630->g_14, "p_1630->g_14", print_hash_value);
    transparent_crc(p_1630->g_15, "p_1630->g_15", print_hash_value);
    transparent_crc(p_1630->g_16, "p_1630->g_16", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1630->g_19[i][j][k], "p_1630->g_19[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1630->g_20, "p_1630->g_20", print_hash_value);
    transparent_crc(p_1630->g_21, "p_1630->g_21", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1630->g_22[i], "p_1630->g_22[i]", print_hash_value);

    }
    transparent_crc(p_1630->g_28, "p_1630->g_28", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1630->g_49[i][j], "p_1630->g_49[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1630->g_57[i], "p_1630->g_57[i]", print_hash_value);

    }
    transparent_crc(p_1630->g_65, "p_1630->g_65", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1630->g_117[i][j][k].f0, "p_1630->g_117[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1630->g_120.f0, "p_1630->g_120.f0", print_hash_value);
    transparent_crc(p_1630->g_159, "p_1630->g_159", print_hash_value);
    transparent_crc(p_1630->g_160, "p_1630->g_160", print_hash_value);
    transparent_crc(p_1630->g_161, "p_1630->g_161", print_hash_value);
    transparent_crc(p_1630->g_163, "p_1630->g_163", print_hash_value);
    transparent_crc(p_1630->g_169, "p_1630->g_169", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1630->g_173[i], "p_1630->g_173[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1630->g_176[i], "p_1630->g_176[i]", print_hash_value);

    }
    transparent_crc(p_1630->g_186, "p_1630->g_186", print_hash_value);
    transparent_crc(p_1630->g_266, "p_1630->g_266", print_hash_value);
    transparent_crc(p_1630->g_274.f0, "p_1630->g_274.f0", print_hash_value);
    transparent_crc(p_1630->g_418, "p_1630->g_418", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1630->g_438[i], "p_1630->g_438[i]", print_hash_value);

    }
    transparent_crc(p_1630->g_445, "p_1630->g_445", print_hash_value);
    transparent_crc(p_1630->g_554, "p_1630->g_554", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1630->g_624[i][j], "p_1630->g_624[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1630->g_683, "p_1630->g_683", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1630->g_701[i], "p_1630->g_701[i]", print_hash_value);

    }
    transparent_crc(p_1630->g_760.f0, "p_1630->g_760.f0", print_hash_value);
    transparent_crc(p_1630->g_770, "p_1630->g_770", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1630->g_773[i][j], "p_1630->g_773[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1630->g_918, "p_1630->g_918", print_hash_value);
    transparent_crc(p_1630->g_1139, "p_1630->g_1139", print_hash_value);
    transparent_crc(p_1630->g_1178, "p_1630->g_1178", print_hash_value);
    transparent_crc(p_1630->g_1179, "p_1630->g_1179", print_hash_value);
    transparent_crc(p_1630->g_1239, "p_1630->g_1239", print_hash_value);
    transparent_crc(p_1630->g_1286, "p_1630->g_1286", print_hash_value);
    transparent_crc(p_1630->g_1287, "p_1630->g_1287", print_hash_value);
    transparent_crc(p_1630->g_1314, "p_1630->g_1314", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1630->g_1444[i][j], "p_1630->g_1444[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1630->g_1600, "p_1630->g_1600", print_hash_value);
    transparent_crc(p_1630->g_1625, "p_1630->g_1625", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1630->g_1629[i][j][k], "p_1630->g_1629[i][j][k]", print_hash_value);

            }
        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
