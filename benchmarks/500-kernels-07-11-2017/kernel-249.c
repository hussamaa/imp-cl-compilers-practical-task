// -g 29,31,1 -l 29,1,1
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


// Seed: 2084156420

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint16_t  f0;
   volatile int32_t  f1;
   volatile uint32_t  f2;
   int32_t  f3;
   volatile int64_t  f4;
};

struct S1 {
    int64_t g_24[6][7];
    int64_t g_26[2];
    int32_t g_28;
    volatile uint32_t g_37;
    int32_t g_71;
    int32_t *g_77;
    int16_t g_116;
    int16_t g_118;
    uint64_t g_119;
    int16_t g_127;
    int16_t g_134;
    int32_t g_143[1][4][8];
    uint64_t g_150;
    int32_t **g_172[10];
    int32_t **g_173;
    int32_t **g_174[2][10][3];
    uint8_t g_176;
    uint16_t g_215;
    uint32_t g_262;
    int64_t *g_270;
    int64_t **g_269[6][9];
    int64_t **g_272;
    int64_t **g_273;
    int8_t g_280;
    int64_t g_298;
    uint32_t g_302;
    volatile int32_t g_313;
    volatile int32_t *g_312;
    volatile int32_t * volatile *g_311;
    volatile int32_t * volatile **g_310;
    volatile int32_t * volatile ***g_309;
    volatile int16_t g_368;
    volatile int16_t *g_367;
    volatile int16_t **g_366;
    uint64_t *g_408;
    uint64_t **g_407[8];
    int32_t ***g_422;
    int32_t ****g_421;
    uint16_t g_449;
    uint32_t g_452;
    uint16_t * volatile *g_534;
    uint16_t * volatile **g_533;
    uint32_t *g_542;
    int16_t *g_559;
    int16_t **g_558;
    int16_t **g_563[3][4][8];
    int8_t g_600;
    int64_t g_611[2][2][6];
    int32_t g_614;
    uint32_t g_694;
    int32_t g_722;
    int16_t g_767;
    int16_t ***g_781;
    int64_t *g_785[9];
    uint32_t *g_820;
    int64_t **g_823[7][10];
    int32_t *g_889;
    int32_t * volatile *g_888;
    volatile union U0 g_925;
    volatile union U0 *g_924;
    volatile union U0 ** volatile g_926;
    volatile union U0 g_944;
    uint16_t g_973;
    volatile int64_t g_981[2][8][9];
    union U0 g_1006;
    volatile uint16_t g_1014[4][4];
    union U0 g_1028;
    volatile uint64_t g_1036;
    volatile uint64_t *g_1035;
    int32_t g_1039;
    int8_t g_1122;
    int32_t *g_1175;
    int8_t g_1240;
    int16_t g_1245;
    int64_t g_1275[3];
    int32_t **** volatile * volatile *g_1420;
    volatile uint64_t ** volatile g_1423;
    volatile uint64_t ** volatile *g_1422;
    volatile uint64_t ** volatile **g_1421;
    volatile union U0 g_1445;
    int64_t g_1474;
    uint64_t g_1504;
    uint8_t * volatile * volatile g_1603;
    uint64_t ** volatile * volatile g_1619[2][3];
    int32_t * volatile g_1637;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_1677);
int8_t  func_11(int64_t  p_12, int32_t  p_13, int64_t  p_14, int32_t  p_15, struct S1 * p_1677);
int64_t  func_16(int32_t  p_17, int32_t  p_18, int32_t  p_19, int32_t  p_20, struct S1 * p_1677);
int32_t * func_51(uint8_t  p_52, int32_t * p_53, uint64_t  p_54, struct S1 * p_1677);
uint32_t  func_56(int64_t ** p_57, struct S1 * p_1677);
int64_t ** func_58(int32_t * p_59, int32_t  p_60, struct S1 * p_1677);
int32_t * func_61(int8_t  p_62, uint64_t  p_63, struct S1 * p_1677);
int32_t * func_78(int64_t * p_79, int64_t  p_80, int32_t  p_81, struct S1 * p_1677);
int32_t * func_92(uint64_t  p_93, struct S1 * p_1677);
int32_t * func_97(int64_t  p_98, uint8_t  p_99, int32_t * p_100, struct S1 * p_1677);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1677->g_24 p_1677->g_26 p_1677->g_37 p_1677->g_28 p_1677->g_71 p_1677->g_119 p_1677->g_77 p_1677->g_134 p_1677->g_118 p_1677->g_150 p_1677->g_173 p_1677->g_269 p_1677->g_262 p_1677->g_143 p_1677->g_302 p_1677->g_280 p_1677->g_309 p_1677->g_116 p_1677->g_127 p_1677->g_421 p_1677->g_422 p_1677->g_298 p_1677->g_533 p_1677->g_366 p_1677->g_367 p_1677->g_542 p_1677->g_449 p_1677->g_176 p_1677->g_611 p_1677->g_600 p_1677->g_722 p_1677->g_452 p_1677->g_614 p_1677->g_767 p_1677->g_785 p_1677->g_823 p_1677->g_272 p_1677->g_270 p_1677->g_694 p_1677->g_888 p_1677->g_215 p_1677->g_924 p_1677->g_926 p_1677->g_944 p_1677->g_973 p_1677->g_311 p_1677->g_312 p_1677->g_313 p_1677->g_310 p_1677->g_1014 p_1677->g_1028 p_1677->g_1035 p_1677->g_925 p_1677->g_944.f0 p_1677->g_1175 p_1677->g_368 p_1677->g_1240 p_1677->g_1245 p_1677->g_981 p_1677->g_1122 p_1677->g_1275
 * writes: p_1677->g_24 p_1677->g_37 p_1677->g_28 p_1677->g_71 p_1677->g_77 p_1677->g_116 p_1677->g_118 p_1677->g_119 p_1677->g_134 p_1677->g_143 p_1677->g_150 p_1677->g_262 p_1677->g_269 p_1677->g_272 p_1677->g_273 p_1677->g_280 p_1677->g_127 p_1677->g_542 p_1677->g_298 p_1677->g_600 p_1677->g_611 p_1677->g_452 p_1677->g_449 p_1677->g_302 p_1677->g_26 p_1677->g_694 p_1677->g_722 p_1677->g_407 p_1677->g_781 p_1677->g_558 p_1677->g_820 p_1677->g_176 p_1677->g_924 p_1677->g_973 p_1677->g_313 p_1677->g_1014 p_1677->g_1039 p_1677->g_767 p_1677->g_563 p_1677->g_270 p_1677->g_1122 p_1677->g_1006.f3 p_1677->g_1028.f3 p_1677->g_1245
 */
uint32_t  func_1(struct S1 * p_1677)
{ /* block id: 4 */
    uint64_t l_6 = 0xBC3707822E6E7F73L;
    int64_t *l_23 = &p_1677->g_24[5][5];
    uint16_t l_25[8][3][5] = {{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}},{{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL},{0xAE89L,0UL,0x7DF7L,0x1C57L,65535UL}}};
    int64_t l_1663 = 0x2D418D385D66E4E2L;
    int32_t l_1664 = 0x480DE822L;
    int32_t l_1665 = 0x2216FAD8L;
    int32_t l_1666 = (-1L);
    int32_t *l_1667 = &p_1677->g_722;
    int32_t l_1668 = 1L;
    int32_t *l_1669 = (void*)0;
    int32_t *l_1670 = &p_1677->g_71;
    int32_t l_1671[6];
    int32_t *l_1672[9][6] = {{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71},{&l_1671[4],&p_1677->g_71,&l_1666,&l_1664,&l_1666,&p_1677->g_71}};
    int8_t l_1673 = 0x4EL;
    uint32_t l_1674[2][3];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1671[i] = 0x6B45AE13L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1674[i][j] = 0UL;
    }
    l_1663 = (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_6, (safe_sub_func_uint32_t_u_u((l_6 , (safe_lshift_func_int8_t_s_u(1L, 0))), ((func_11(func_16((((*l_23) &= (0xD1L > ((l_6 || l_6) , (safe_div_func_int16_t_s_s(7L, 0x2134L))))) , p_1677->g_24[5][5]), l_25[2][0][3], p_1677->g_26[1], l_25[2][0][3], p_1677), p_1677->g_26[0], l_6, p_1677->g_26[1], p_1677) == (-6L)) , (*p_1677->g_542)))))), l_6));
    l_1674[1][2]--;
    (*l_1667) = (*l_1667);
    return p_1677->g_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_37 p_1677->g_24 p_1677->g_26 p_1677->g_28 p_1677->g_71 p_1677->g_119 p_1677->g_77 p_1677->g_134 p_1677->g_118 p_1677->g_150 p_1677->g_173 p_1677->g_269 p_1677->g_262 p_1677->g_143 p_1677->g_302 p_1677->g_280 p_1677->g_309 p_1677->g_116 p_1677->g_127 p_1677->g_421 p_1677->g_422 p_1677->g_298 p_1677->g_533 p_1677->g_366 p_1677->g_367 p_1677->g_542 p_1677->g_449 p_1677->g_176 p_1677->g_611 p_1677->g_600 p_1677->g_722 p_1677->g_452 p_1677->g_614 p_1677->g_767 p_1677->g_785 p_1677->g_823 p_1677->g_272 p_1677->g_270 p_1677->g_694 p_1677->g_888 p_1677->g_215 p_1677->g_924 p_1677->g_926 p_1677->g_944 p_1677->g_973 p_1677->g_311 p_1677->g_312 p_1677->g_313 p_1677->g_310 p_1677->g_1014 p_1677->g_1028 p_1677->g_1035 p_1677->g_925 p_1677->g_944.f0 p_1677->g_1175 p_1677->g_368 p_1677->g_1240 p_1677->g_1245 p_1677->g_981 p_1677->g_1122 p_1677->g_1275
 * writes: p_1677->g_28 p_1677->g_71 p_1677->g_77 p_1677->g_116 p_1677->g_118 p_1677->g_119 p_1677->g_134 p_1677->g_143 p_1677->g_150 p_1677->g_262 p_1677->g_269 p_1677->g_272 p_1677->g_273 p_1677->g_280 p_1677->g_127 p_1677->g_542 p_1677->g_298 p_1677->g_600 p_1677->g_611 p_1677->g_452 p_1677->g_449 p_1677->g_302 p_1677->g_26 p_1677->g_694 p_1677->g_722 p_1677->g_407 p_1677->g_781 p_1677->g_558 p_1677->g_820 p_1677->g_24 p_1677->g_176 p_1677->g_924 p_1677->g_973 p_1677->g_313 p_1677->g_1014 p_1677->g_1039 p_1677->g_767 p_1677->g_563 p_1677->g_270 p_1677->g_1122 p_1677->g_1006.f3 p_1677->g_1028.f3 p_1677->g_1245
 */
int8_t  func_11(int64_t  p_12, int32_t  p_13, int64_t  p_14, int32_t  p_15, struct S1 * p_1677)
{ /* block id: 9 */
    int16_t l_42[6][6] = {{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L},{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L},{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L},{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L},{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L},{0x46E0L,0L,0x3FF9L,0L,0x46E0L,0x46E0L}};
    int32_t *l_55 = &p_1677->g_28;
    uint64_t l_612[2];
    union U0 **l_1079 = (void*)0;
    uint8_t l_1082 = 0xE8L;
    int32_t l_1085 = 9L;
    int64_t *l_1118 = (void*)0;
    int64_t l_1137 = 0x2429A5B0ECF19422L;
    int32_t l_1167 = 0x7F292993L;
    uint32_t l_1168 = 0xF7E56A33L;
    uint64_t l_1221 = 0xF39C4BB283E2153BL;
    uint64_t **l_1272 = &p_1677->g_408;
    volatile int8_t l_1282[5] = {0x10L,0x10L,0x10L,0x10L,0x10L};
    int32_t **l_1288 = (void*)0;
    int32_t ***l_1287 = &l_1288;
    int8_t *l_1290 = &p_1677->g_1240;
    uint32_t **l_1347 = &p_1677->g_542;
    int32_t l_1390 = (-4L);
    int32_t l_1392 = (-2L);
    int32_t l_1393[8][10][3] = {{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}},{{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L},{(-1L),0x5E495C7DL,0x2E9DBF46L}}};
    uint32_t l_1395 = 0xACE2798AL;
    uint8_t l_1435 = 0UL;
    uint16_t l_1448 = 1UL;
    int8_t l_1466 = 0x59L;
    uint16_t *l_1521[1];
    uint16_t **l_1520 = &l_1521[0];
    uint16_t l_1531 = 0x3F13L;
    int16_t l_1544 = 0x49E7L;
    int8_t l_1557[3][8];
    uint8_t *l_1602 = &p_1677->g_176;
    uint8_t **l_1601 = &l_1602;
    int32_t *****l_1661 = &p_1677->g_421;
    int32_t ******l_1660 = &l_1661;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_612[i] = 0x6EB88F196EBEF66CL;
    for (i = 0; i < 1; i++)
        l_1521[i] = &p_1677->g_215;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
            l_1557[i][j] = 1L;
    }
lbl_1090:
    for (p_15 = 0; (p_15 <= 18); ++p_15)
    { /* block id: 12 */
        uint8_t l_43 = 248UL;
        if (l_42[4][2])
            break;
        l_43--;
    }
    for (p_13 = 0; (p_13 >= 29); p_13++)
    { /* block id: 18 */
        int64_t *l_49 = &p_1677->g_24[2][3];
        int64_t **l_48 = &l_49;
        int64_t ***l_50 = &l_48;
        int32_t *l_64[1][5][9] = {{{&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28},{&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28},{&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28},{&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28},{&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28}}};
        int16_t *l_607 = &l_42[4][2];
        int64_t *l_610 = &p_1677->g_611[1][1][5];
        int32_t *l_613[4][10][4] = {{{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614}},{{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614}},{{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614}},{{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614},{&p_1677->g_614,&p_1677->g_614,&p_1677->g_614,&p_1677->g_614}}};
        uint16_t l_615 = 65534UL;
        uint32_t l_1065 = 0x1733A6B1L;
        uint64_t l_1171 = 0x43BB4C5F923D761EL;
        int32_t l_1172 = (-5L);
        uint16_t l_1205 = 0x0ADBL;
        int8_t l_1249 = 0x39L;
        uint8_t **l_1258 = (void*)0;
        uint8_t ***l_1257[7][7] = {{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0},{&l_1258,&l_1258,(void*)0,&l_1258,&l_1258,&l_1258,(void*)0}};
        uint64_t l_1277 = 0UL;
        int i, j, k;
        (*l_50) = l_48;
        l_55 = ((*p_1677->g_173) = func_51(p_1677->g_37, l_55, ((~func_56(((*l_50) = func_58(func_61(((void*)0 == l_64[0][1][1]), p_12, p_1677), (l_615 ^= (safe_mod_func_int64_t_s_s((((((((*l_610) &= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_607) = 0L), (((safe_lshift_func_int8_t_s_s(5L, 0)) <= ((0L | p_14) == 0x41978A63L)) & p_15))), p_1677->g_176))) || p_14) , p_13) , p_13) && p_15) >= l_612[0]), p_14))), p_1677)), p_1677)) , p_1677->g_26[0]), p_1677));
        for (p_1677->g_119 = 0; (p_1677->g_119 != 27); p_1677->g_119++)
        { /* block id: 548 */
            uint32_t l_1064 = 0UL;
            int32_t l_1086 = 1L;
            uint8_t l_1093 = 0x19L;
            int16_t **l_1096 = &l_607;
            int64_t *l_1179 = (void*)0;
            int64_t *l_1202[4];
            uint64_t *l_1204 = &p_1677->g_150;
            int i;
            for (i = 0; i < 4; i++)
                l_1202[i] = (void*)0;
            for (p_1677->g_767 = (-12); (p_1677->g_767 > (-26)); p_1677->g_767 = safe_sub_func_int8_t_s_s(p_1677->g_767, 1))
            { /* block id: 551 */
                int32_t l_1078 = 0x0CFBEE5DL;
                uint8_t l_1098 = 0xF2L;
                int32_t l_1115 = (-1L);
                int64_t *l_1116 = &p_1677->g_24[5][5];
                uint8_t l_1139 = 0x91L;
                uint64_t **l_1169 = &p_1677->g_408;
                int8_t l_1170[9];
                int32_t *l_1176[7];
                int i;
                for (i = 0; i < 9; i++)
                    l_1170[i] = (-8L);
                for (i = 0; i < 7; i++)
                    l_1176[i] = (void*)0;
                (**p_1677->g_422) = l_613[2][2][1];
                for (p_1677->g_118 = 2; (p_1677->g_118 >= (-14)); p_1677->g_118--)
                { /* block id: 555 */
                    uint8_t *l_1063 = &p_1677->g_176;
                    int32_t l_1073 = (-1L);
                    int32_t l_1080 = (-1L);
                    int16_t ***l_1097 = &p_1677->g_563[0][3][1];
                    if ((l_1064 ^= ((safe_div_func_uint64_t_u_u(((&l_48 == (void*)0) & (safe_sub_func_int32_t_s_s(((((((((safe_mod_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((1L != ((5L ^ 0x21FA81FA51B8546AL) <= p_14)), (p_15 , (p_14 || (((*l_1063) = ((((*l_610) = (safe_sub_func_int32_t_s_s((p_13 < p_14), (*p_1677->g_542)))) && p_12) | p_12)) != 0L))))) >= 0xD1L), 0x788CF12132D2B90DL)) == (-4L)) == 0x36L) >= p_12) && p_14) <= p_15) | p_14) > 0x60957CC9L), (*l_55)))), 0x45AADA00F6368247L)) | p_13)))
                    { /* block id: 559 */
                        uint16_t l_1072 = 65529UL;
                        int32_t l_1081 = (-3L);
                        l_1081 = ((l_1065 ^ (safe_rshift_func_int8_t_s_s(((0x7B90L ^ 6L) || ((((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((~(l_1072 , (l_1073 > (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-1L), l_1078)), (p_1677->g_280 == (l_1079 != (void*)0))))))), l_1064)), p_14)) ^ 0xEA5B9C8D41D7AED0L) >= l_1080) >= (*p_1677->g_542))), l_1073))) <= p_14);
                        --l_1082;
                        return l_1064;
                    }
                    else
                    { /* block id: 563 */
                        uint32_t l_1087 = 4294967291UL;
                        l_1087--;
                        if (p_1677->g_262)
                            goto lbl_1090;
                    }
                    if (p_13)
                        continue;
                    for (l_1073 = 0; (l_1073 >= (-8)); l_1073--)
                    { /* block id: 570 */
                        (*l_55) = p_14;
                        l_1093++;
                    }
                    (*l_1097) = l_1096;
                }
                if ((***p_1677->g_310))
                    break;
                for (l_1085 = 5; (l_1085 >= 0); l_1085 -= 1)
                { /* block id: 579 */
                    uint8_t *l_1099 = &l_1082;
                    int16_t l_1138 = (-8L);
                    uint16_t *l_1188 = &p_1677->g_449;
                    uint16_t **l_1187[5];
                    uint16_t ***l_1186[5];
                    int32_t l_1201[3][3] = {{0x6BD441C4L,(-1L),0x6BD441C4L},{0x6BD441C4L,(-1L),0x6BD441C4L},{0x6BD441C4L,(-1L),0x6BD441C4L}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1187[i] = &l_1188;
                    for (i = 0; i < 5; i++)
                        l_1186[i] = &l_1187[1];
                    if (((((l_1098 &= l_42[l_1085][l_1085]) != l_42[l_1085][l_1085]) & (~l_42[l_1085][l_1085])) | (--(*l_1099))))
                    { /* block id: 582 */
                        int8_t *l_1106 = (void*)0;
                        int8_t *l_1107 = &p_1677->g_600;
                        int8_t *l_1114 = &p_1677->g_280;
                        int64_t **l_1117[8] = {&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3],&p_1677->g_785[3]};
                        int8_t *l_1121 = &p_1677->g_1122;
                        int i, j;
                        (***p_1677->g_310) = ((((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_1107) = l_42[l_1085][l_1085]) != (safe_mod_func_int64_t_s_s(1L, ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((*l_1114) ^= 0x4BL) , l_1078), ((*l_1121) = (((((l_1115 = 0x0FBD1D60L) > (((*p_1677->g_272) = &p_12) != (l_1118 = l_1116))) < ((((safe_add_func_uint8_t_u_u((*l_55), 0L)) != l_42[l_1085][l_1085]) , p_12) ^ 5L)) | p_13) && l_42[l_1085][l_1085])))) , 9UL), p_12)) & 65535UL)))) < p_15), l_1078)), l_42[l_1085][l_1085])) <= p_14) , 0x9115950AL) , 0x709F2E8DL);
                        (*p_1677->g_312) = ((((safe_mul_func_uint8_t_u_u((((*l_55) |= (safe_add_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u((((l_1086 , (safe_sub_func_uint32_t_u_u(((0L & (safe_lshift_func_int16_t_s_s((((p_1677->g_150 , (**p_1677->g_926)) , p_14) || ((!p_15) != (p_1677->g_280 ^ (safe_mod_func_int8_t_s_s(((*l_1107) = (safe_div_func_int64_t_s_s(p_1677->g_37, ((p_1677->g_24[5][5] && l_1137) | p_13)))), p_15))))), p_15))) && 0x77L), l_1138))) == 1L) < 0x55190B4179E917E8L), (*p_1677->g_542))) , l_1139) ^ p_12) , l_1093), p_13))) <= (-4L)), 0x39L)) <= 0L) , p_1677->g_614) ^ p_14);
                    }
                    else
                    { /* block id: 593 */
                        l_1172 &= (((~(!(p_15 >= (p_1677->g_944.f0 >= (safe_lshift_func_uint16_t_u_s(((((((*p_1677->g_542) != (!(safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((0x6BL < (((l_1064 >= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(((((p_12 || (safe_add_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(p_15, (safe_add_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s(l_1093, l_1167)))) != 1L), l_1093)))) || l_1115) && 0x347A1CD0E00E390CL) >= p_13), 247UL)) & (*p_1677->g_542)) != 0x60848D7BL) >= 0xE0581F15L), p_1677->g_449))) , (*p_1677->g_542)) >= 1UL) | (*p_1677->g_542)), (*p_1677->g_542))) < (*p_1677->g_542)) ^ l_1168), l_1093)) == 0x4EL) , p_14), 0x623DL)), 0x0F8BL))) , l_1169) != l_1169)), 4294967286UL)), p_12)))) , p_1677->g_143[0][1][0]) , l_1170[8]) >= 0UL) >= p_14), 10)))))) ^ l_1078) <= l_1171);
                        l_1176[6] = ((safe_add_func_int8_t_s_s((-7L), (&l_613[0][5][1] == (void*)0))) , ((***p_1677->g_421) = p_1677->g_1175));
                        if (l_42[l_1085][l_1085])
                            break;
                        if (p_12)
                            continue;
                    }
                    for (p_1677->g_28 = 0; (p_1677->g_28 < 18); p_1677->g_28 = safe_add_func_int8_t_s_s(p_1677->g_28, 8))
                    { /* block id: 602 */
                        if (l_1137)
                            goto lbl_1090;
                    }
                    (*p_1677->g_173) = func_78(l_1179, (p_14 = (p_14 , (0x3CL == (*l_55)))), (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((**p_1677->g_311) || ((l_1186[0] != (((*p_1677->g_1175) & (((((*l_1188) = ((safe_rshift_func_uint8_t_u_s(((~(safe_lshift_func_uint16_t_u_u((l_1201[1][2] = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_13, (((~(safe_mod_func_int16_t_s_s((p_12 | p_15), l_42[l_1085][l_1085]))) , p_13) && p_12))), 0x3E4FB6ADL)), 0xC00B3781L))), 11))) != p_13), p_13)) , (*l_55))) & 0xE8E3L) | p_15) <= l_42[l_1085][l_1085])) , &l_1187[1])) , (*p_1677->g_542))), 1UL)), 0x7BL)), p_13)), p_1677);
                }
            }
            for (l_1064 = 1; (l_1064 <= 8); l_1064 += 1)
            { /* block id: 613 */
                uint8_t *l_1203 = &p_1677->g_176;
                int32_t l_1234[10][1][9] = {{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}},{{5L,0x4AE82DFDL,0x090B04E6L,0x71E8BEBFL,4L,4L,0x71E8BEBFL,0x090B04E6L,0x4AE82DFDL}}};
                uint16_t *l_1235 = &p_1677->g_215;
                int i, j, k;
                (***p_1677->g_421) = func_78(l_1202[0], (p_1677->g_26[0] &= ((((*l_55) > 255UL) , l_1202[0]) != (((*l_1203) |= 0xC9L) , l_1204))), p_1677->g_1014[1][2], p_1677);
                for (l_1172 = 0; (l_1172 <= 8); l_1172 += 1)
                { /* block id: 619 */
                    uint32_t l_1224 = 0xF34B36AFL;
                    uint8_t l_1225[1];
                    uint8_t l_1250 = 0x26L;
                    uint8_t **l_1252 = &l_1203;
                    int32_t l_1276[7] = {6L,(-9L),6L,6L,(-9L),6L,6L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1225[i] = 255UL;
                    for (p_15 = 3; (p_15 >= 0); p_15 -= 1)
                    { /* block id: 622 */
                        (***p_1677->g_310) ^= (l_1204 == &p_1677->g_611[1][1][5]);
                        ++l_1205;
                    }
                    for (p_1677->g_1006.f3 = 0; (p_1677->g_1006.f3 <= 8); p_1677->g_1006.f3 += 1)
                    { /* block id: 628 */
                        union U0 **l_1216 = (void*)0;
                        int32_t l_1222 = 0x3D4D5E8BL;
                        int8_t *l_1223 = &p_1677->g_280;
                        (**p_1677->g_311) = ((safe_sub_func_uint8_t_u_u(0xD5L, ((*l_1223) = (safe_mod_func_int16_t_s_s((p_13 ^ ((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((-8L), (((((void*)0 != l_1216) < (safe_rshift_func_int8_t_s_s((p_12 >= 0x7E602C0B161203BCL), 1))) != ((0x79ABE001L != (safe_mul_func_int16_t_s_s(p_13, (*l_55)))) , (*p_1677->g_367))) ^ (-5L)))) || l_1221), p_15)) ^ l_1222)), p_15))))) & l_1224);
                        --l_1225[0];
                    }
                    (****p_1677->g_309) &= p_12;
                    if (((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((0x458C8CADL == ((((5UL & p_14) >= (safe_rshift_func_int16_t_s_s(l_1086, l_1234[5][0][2]))) , ((((((((*l_1203) &= ((l_1235 != (void*)0) <= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((&p_1677->g_889 != &p_1677->g_889), l_1093)), 6)))) && p_1677->g_1014[2][1]) || 65531UL) != p_1677->g_767) <= l_1225[0]) & 0UL) && p_1677->g_1014[2][1])) , l_1234[0][0][0])), 1L)) < 0xFD0B435AB7338676L), p_1677->g_1240)) || l_1086))
                    { /* block id: 635 */
                        uint64_t *l_1246 = &l_1171;
                        int8_t *l_1251 = &p_1677->g_600;
                        (*l_55) ^= ((0x97FBEADEA3E5C172L ^ ((*l_1204) ^= l_1225[0])) >= (safe_sub_func_int8_t_s_s(((*l_1251) = (safe_mod_func_uint32_t_u_u((((((((*p_1677->g_1175) = ((0xF2D118625453B567L & ((*l_1246) = p_1677->g_1245)) && (((0x6BL ^ ((void*)0 != l_1203)) == (0x7C85L ^ (safe_mul_func_int8_t_s_s(p_1677->g_26[0], (-9L))))) && l_1249))) > p_14) <= p_1677->g_981[1][0][6]) && l_1250) || l_1234[3][0][4]) < p_15), p_13))), p_12)));
                        if ((*l_55))
                            break;
                    }
                    else
                    { /* block id: 642 */
                        uint8_t ***l_1253 = &l_1252;
                        int32_t l_1265 = 0x2D9ED740L;
                        uint64_t ***l_1273 = &l_1272;
                        uint32_t *l_1274 = &l_1168;
                        if (p_13)
                            break;
                        (*l_1253) = l_1252;
                        l_1276[5] &= (((safe_unary_minus_func_int16_t_s((safe_add_func_int64_t_s_s((+(((*l_607) ^= ((((void*)0 == l_1257[5][4]) >= (*p_1677->g_542)) >= (safe_add_func_int16_t_s_s((((((p_1677->g_280 = (((((*l_1274) |= (0x31L ^ (safe_div_func_uint8_t_u_u(((p_1677->g_1122 >= (safe_mod_func_int32_t_s_s(l_1265, l_1086))) & ((--(*l_1204)) != (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*l_1273) = l_1272) != (void*)0), l_1265)), 0x6DL)))), p_1677->g_600)))) != (*l_55)) < p_13) | p_13)) != p_1677->g_37) < p_1677->g_1275[0]) | (*p_1677->g_542)) == p_1677->g_28), 0x38C7L)))) == (*l_55))), p_15)))) , 0xD39CL) == p_14);
                        if (p_15)
                            continue;
                    }
                }
                for (p_1677->g_1028.f3 = 3; (p_1677->g_1028.f3 >= 0); p_1677->g_1028.f3 -= 1)
                { /* block id: 656 */
                    return p_1677->g_1245;
                }
                for (p_1677->g_127 = 1; (p_1677->g_127 >= 0); p_1677->g_127 -= 1)
                { /* block id: 661 */
                    int32_t *l_1281 = &l_1085;
                    for (p_1677->g_1245 = 3; (p_1677->g_1245 >= 0); p_1677->g_1245 -= 1)
                    { /* block id: 664 */
                        int32_t **l_1280[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1280[i] = &p_1677->g_1175;
                        --l_1277;
                        (***p_1677->g_421) = &l_1086;
                        l_1281 = ((**p_1677->g_422) = (void*)0);
                    }
                    for (p_1677->g_767 = 0; (p_1677->g_767 <= 3); p_1677->g_767 += 1)
                    { /* block id: 672 */
                        int i, j, k;
                        return p_1677->g_981[p_1677->g_127][p_1677->g_767][(p_1677->g_767 + 2)];
                    }
                    (*p_1677->g_173) = l_64[0][2][8];
                    l_1282[1] = (***p_1677->g_310);
                }
            }
        }
    }
    for (p_1677->g_262 = 0; (p_1677->g_262 < 18); p_1677->g_262 = safe_add_func_uint8_t_u_u(p_1677->g_262, 9))
    { /* block id: 683 */
        int32_t ***l_1289 = &l_1288;
        int32_t l_1291 = 1L;
        int16_t *l_1296 = &l_42[4][2];
        int16_t ***l_1297 = &p_1677->g_558;
        uint16_t *l_1337 = &p_1677->g_449;
        uint16_t **l_1336 = &l_1337;
        int32_t l_1380 = 0x798F57EDL;
        int32_t l_1381 = (-6L);
        int32_t l_1383[2][8];
        uint32_t l_1426 = 4294967289UL;
        int32_t *l_1439 = &l_1393[3][8][1];
        int8_t l_1499 = 6L;
        int64_t l_1501[7];
        int64_t l_1529 = 1L;
        int16_t l_1587 = 0x6B84L;
        uint32_t l_1614 = 1UL;
        uint64_t *l_1645 = (void*)0;
        int64_t *l_1650[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int64_t l_1662[8] = {(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L),0L};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
                l_1383[i][j] = 0x2B01658CL;
        }
        for (i = 0; i < 7; i++)
            l_1501[i] = 1L;
        l_1291 &= (((18446744073709551608UL ^ ((((safe_sub_func_int64_t_s_s(p_1677->g_1014[3][3], 0x0D2DD09163E46E34L)) || (*p_1677->g_542)) , l_1287) == l_1289)) , &p_1677->g_280) != l_1290);
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_37 p_1677->g_26
 * writes: p_1677->g_37
 */
int64_t  func_16(int32_t  p_17, int32_t  p_18, int32_t  p_19, int32_t  p_20, struct S1 * p_1677)
{ /* block id: 6 */
    int32_t *l_27 = &p_1677->g_28;
    int32_t *l_29 = (void*)0;
    int32_t *l_30 = &p_1677->g_28;
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &p_1677->g_28;
    int32_t l_33 = 0L;
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = &l_33;
    int32_t *l_36[2];
    int i;
    for (i = 0; i < 2; i++)
        l_36[i] = &p_1677->g_28;
    --p_1677->g_37;
    return p_1677->g_26[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_421 p_1677->g_422 p_1677->g_173 p_1677->g_280 p_1677->g_116 p_1677->g_127 p_1677->g_924 p_1677->g_926 p_1677->g_452 p_1677->g_118 p_1677->g_77 p_1677->g_143 p_1677->g_28 p_1677->g_944 p_1677->g_600 p_1677->g_119 p_1677->g_973 p_1677->g_311 p_1677->g_312 p_1677->g_722 p_1677->g_313 p_1677->g_310 p_1677->g_309 p_1677->g_1014 p_1677->g_694 p_1677->g_1028 p_1677->g_1035 p_1677->g_542 p_1677->g_262
 * writes: p_1677->g_77 p_1677->g_280 p_1677->g_116 p_1677->g_127 p_1677->g_924 p_1677->g_452 p_1677->g_118 p_1677->g_119 p_1677->g_28 p_1677->g_973 p_1677->g_313 p_1677->g_1014 p_1677->g_694 p_1677->g_1039
 */
int32_t * func_51(uint8_t  p_52, int32_t * p_53, uint64_t  p_54, struct S1 * p_1677)
{ /* block id: 468 */
    uint8_t l_947[4];
    int32_t l_958 = 8L;
    int32_t l_959[2][8][2] = {{{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L}},{{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L},{(-4L),0x1D1D0C79L}}};
    int16_t l_979 = 0L;
    int64_t l_998 = 0x6AA7680329095CB0L;
    union U0 *l_1005 = &p_1677->g_1006;
    int32_t *l_1010 = &p_1677->g_28;
    int32_t *l_1011 = &l_959[0][7][1];
    int32_t *l_1012[10] = {&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0],&l_959[1][7][0]};
    int16_t l_1013[2][4] = {{0L,0x4B64L,0L,0L},{0L,0x4B64L,0L,0L}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_947[i] = 255UL;
lbl_923:
    (***p_1677->g_421) = p_53;
lbl_1009:
    for (p_1677->g_280 = 6; (p_1677->g_280 >= 0); p_1677->g_280 -= 1)
    { /* block id: 472 */
        uint8_t l_950 = 0xB0L;
        int32_t l_968 = (-8L);
        int32_t l_970 = 0x13C3A798L;
        int32_t l_971 = 1L;
        int32_t l_972 = (-1L);
        int8_t l_980 = 3L;
        int32_t l_982 = 0x4F728BEFL;
        int32_t l_983[2];
        uint32_t l_1001[5][8] = {{0x0BCCF4C8L,0x6F8A7E2EL,0x87D5BE95L,0xA9E62BDDL,0x6F8A7E2EL,0xA9E62BDDL,0x87D5BE95L,0x6F8A7E2EL},{0x0BCCF4C8L,0x6F8A7E2EL,0x87D5BE95L,0xA9E62BDDL,0x6F8A7E2EL,0xA9E62BDDL,0x87D5BE95L,0x6F8A7E2EL},{0x0BCCF4C8L,0x6F8A7E2EL,0x87D5BE95L,0xA9E62BDDL,0x6F8A7E2EL,0xA9E62BDDL,0x87D5BE95L,0x6F8A7E2EL},{0x0BCCF4C8L,0x6F8A7E2EL,0x87D5BE95L,0xA9E62BDDL,0x6F8A7E2EL,0xA9E62BDDL,0x87D5BE95L,0x6F8A7E2EL},{0x0BCCF4C8L,0x6F8A7E2EL,0x87D5BE95L,0xA9E62BDDL,0x6F8A7E2EL,0xA9E62BDDL,0x87D5BE95L,0x6F8A7E2EL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_983[i] = 1L;
        if (p_1677->g_280)
            goto lbl_923;
        for (p_1677->g_116 = 0; (p_1677->g_116 <= 6); p_1677->g_116 += 1)
        { /* block id: 476 */
            int16_t l_946 = 8L;
            int32_t l_949[6][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
            int32_t l_951 = (-10L);
            int32_t l_962 = 0x5A49CC71L;
            uint32_t l_984 = 0xA1B87276L;
            int i, j;
            for (p_1677->g_127 = 0; (p_1677->g_127 <= 9); p_1677->g_127 += 1)
            { /* block id: 479 */
                (*p_1677->g_926) = p_1677->g_924;
            }
            for (p_1677->g_452 = 0; (p_1677->g_452 <= 6); p_1677->g_452 += 1)
            { /* block id: 484 */
                int8_t l_945 = 0x72L;
                int32_t l_960 = 0L;
                int32_t l_961 = 0x46EBE022L;
                int32_t l_964 = (-4L);
                int32_t l_965 = 9L;
                int32_t l_967 = 1L;
                int32_t l_969 = 0x3A348B88L;
                int32_t *l_978 = &p_1677->g_722;
                uint64_t ***l_991 = (void*)0;
                int32_t *l_999 = &l_968;
                int32_t *l_1000 = &l_967;
                for (p_54 = 0; (p_54 <= 0); p_54 += 1)
                { /* block id: 487 */
                    uint64_t *l_948 = &p_1677->g_119;
                    int32_t l_956 = (-4L);
                    int32_t l_957[3];
                    int32_t l_963 = (-4L);
                    int8_t l_966 = 0x1BL;
                    int64_t l_976 = 0x5B7740A6E306433BL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_957[i] = 8L;
                    for (p_1677->g_118 = 0; (p_1677->g_118 <= 6); p_1677->g_118 += 1)
                    { /* block id: 490 */
                        return (**p_1677->g_422);
                    }
                    if (((****p_1677->g_421) = (l_951 = (~((l_949[2][2] = (((safe_unary_minus_func_uint16_t_u((p_1677->g_143[p_54][(p_54 + 3)][(p_1677->g_116 + 1)] >= ((safe_add_func_uint32_t_u_u(p_1677->g_143[p_54][(p_54 + 2)][(p_54 + 5)], (*p_1677->g_77))) , ((safe_add_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((*l_948) ^= (safe_sub_func_int64_t_s_s(((!(!(safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_s((p_1677->g_944 , 0x75L), (l_945 | (-3L)))) ^ ((0UL != 0x6ACDL) > l_945)) || l_946), l_947[2])) ^ 0L) , p_54), 3)))) > l_947[0]), p_1677->g_600))), l_947[2])) ^ p_52), 0xBCL)) | l_947[1]))))) < (*p_53)) , 0x54FB73E4L)) < l_950)))))
                    { /* block id: 497 */
                        int32_t *l_952 = &l_949[1][2];
                        int32_t *l_953 = (void*)0;
                        int32_t *l_954 = &l_949[2][2];
                        int32_t *l_955[6] = {&l_949[3][0],&p_1677->g_71,&l_949[3][0],&l_949[3][0],&p_1677->g_71,&l_949[3][0]};
                        int i;
                        if (p_1677->g_280)
                            goto lbl_923;
                        --p_1677->g_973;
                        (**p_1677->g_311) = ((*p_53) = (0x427DL > l_976));
                    }
                    else
                    { /* block id: 502 */
                        int32_t *l_977[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_977[i] = &l_971;
                        l_978 = l_977[5];
                        l_984--;
                        return (*p_1677->g_173);
                    }
                    if (p_1677->g_600)
                        goto lbl_1009;
                    for (l_982 = 0; (l_982 >= 0); l_982 -= 1)
                    { /* block id: 509 */
                        (**p_1677->g_311) ^= ((p_52 || ((safe_div_func_int64_t_s_s(l_956, l_958)) >= ((safe_mul_func_int8_t_s_s((0x5F47L ^ (l_991 != l_991)), ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(p_52, 9)) , ((void*)0 == &p_1677->g_310)), (*p_53))), 0x3660L)) & (*l_978)))) | 18446744073709551608UL))) != l_998);
                        if ((*p_53))
                            break;
                    }
                    return (*p_1677->g_173);
                }
                --l_1001[1][1];
            }
            for (p_1677->g_127 = 4; (p_1677->g_127 >= 0); p_1677->g_127 -= 1)
            { /* block id: 519 */
                (***p_1677->g_310) = l_950;
                if ((*p_53))
                    break;
            }
            for (l_980 = 0; (l_980 >= 0); l_980 -= 1)
            { /* block id: 525 */
                int16_t l_1004 = 0x6F2EL;
                union U0 **l_1007[10] = {(void*)0,&l_1005,(void*)0,(void*)0,&l_1005,(void*)0,(void*)0,&l_1005,(void*)0,(void*)0};
                union U0 *l_1008 = &p_1677->g_1006;
                int i;
                if (l_1004)
                    break;
                (****p_1677->g_309) |= (*p_53);
                if ((*p_53))
                    continue;
                l_1008 = l_1005;
            }
        }
    }
    ++p_1677->g_1014[2][1];
    for (p_1677->g_694 = 0; (p_1677->g_694 != 8); p_1677->g_694 = safe_add_func_int64_t_s_s(p_1677->g_694, 1))
    { /* block id: 537 */
        int8_t l_1025 = (-1L);
        int32_t *l_1037 = (void*)0;
        int32_t *l_1038[9];
        int32_t l_1040 = (-1L);
        int i;
        for (i = 0; i < 9; i++)
            l_1038[i] = &p_1677->g_1039;
        l_1040 |= (safe_lshift_func_int16_t_s_u(((((*p_53) & ((p_1677->g_280 |= 0x24L) <= (((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_52 && (((((!(l_1025 <= l_1025)) == ((((safe_rshift_func_uint16_t_u_u((~p_54), (p_1677->g_1028 , ((p_1677->g_1039 = (safe_div_func_int32_t_s_s(((((*p_53) && (safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((((~p_54) , p_1677->g_1035) != (void*)0) != 4294967292UL), (*p_1677->g_542))), l_1025))) != l_1025) || p_1677->g_116), (*p_1677->g_542)))) , (*l_1010))))) , 65533UL) >= (*l_1011)) ^ 0x59CB9325L)) != l_1025) | l_1025) , p_52)), (*p_1677->g_542))), 0L)) & p_54) <= p_1677->g_694))) , 0xBBL) < l_1025), p_54));
        return p_53;
    }
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_56(int64_t ** p_57, struct S1 * p_1677)
{ /* block id: 466 */
    int32_t l_922 = 0x5FF028F2L;
    return l_922;
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_173 p_1677->g_77 p_1677->g_421 p_1677->g_422 p_1677->g_611 p_1677->g_28 p_1677->g_262 p_1677->g_449 p_1677->g_71 p_1677->g_298 p_1677->g_302 p_1677->g_116 p_1677->g_143 p_1677->g_542 p_1677->g_600 p_1677->g_134 p_1677->g_119 p_1677->g_127 p_1677->g_722 p_1677->g_452 p_1677->g_614 p_1677->g_767 p_1677->g_785 p_1677->g_118 p_1677->g_823 p_1677->g_272 p_1677->g_270 p_1677->g_694 p_1677->g_24 p_1677->g_888 p_1677->g_176 p_1677->g_215 p_1677->g_26
 * writes: p_1677->g_262 p_1677->g_452 p_1677->g_77 p_1677->g_119 p_1677->g_127 p_1677->g_449 p_1677->g_298 p_1677->g_71 p_1677->g_116 p_1677->g_302 p_1677->g_26 p_1677->g_694 p_1677->g_600 p_1677->g_280 p_1677->g_143 p_1677->g_28 p_1677->g_722 p_1677->g_407 p_1677->g_781 p_1677->g_558 p_1677->g_820 p_1677->g_24 p_1677->g_150 p_1677->g_176
 */
int64_t ** func_58(int32_t * p_59, int32_t  p_60, struct S1 * p_1677)
{ /* block id: 315 */
    int32_t *l_616 = &p_1677->g_28;
    int32_t *l_617 = &p_1677->g_71;
    int32_t *l_618 = &p_1677->g_71;
    int32_t *l_619 = &p_1677->g_28;
    int32_t *l_620 = (void*)0;
    int32_t *l_621 = &p_1677->g_71;
    int32_t *l_622[1];
    int16_t l_623 = (-5L);
    uint8_t l_624[2][9][6] = {{{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL}},{{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL},{0x91L,255UL,0xDFL,0x91L,0xECL,1UL}}};
    int32_t *****l_640 = &p_1677->g_421;
    int64_t *l_654 = &p_1677->g_24[1][3];
    uint32_t l_755 = 0x2F45D155L;
    uint16_t l_763 = 65535UL;
    int32_t l_768 = (-9L);
    int16_t ***l_782[8][5][3] = {{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}},{{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]},{(void*)0,&p_1677->g_558,&p_1677->g_563[2][2][1]}}};
    int8_t *l_833 = (void*)0;
    int32_t l_872 = 1L;
    uint32_t l_908 = 4294967295UL;
    uint32_t **l_921[8] = {&p_1677->g_542,&p_1677->g_542,&p_1677->g_542,&p_1677->g_542,&p_1677->g_542,&p_1677->g_542,&p_1677->g_542,&p_1677->g_542};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_622[i] = &p_1677->g_28;
lbl_699:
    --l_624[1][4][2];
    for (p_1677->g_262 = 0; (p_1677->g_262 >= 47); p_1677->g_262++)
    { /* block id: 319 */
        uint16_t l_629 = 0x79ABL;
        int8_t *l_642 = (void*)0;
        int32_t l_651[7] = {0x26AB9B20L,0x26AB9B20L,0x26AB9B20L,0x26AB9B20L,0x26AB9B20L,0x26AB9B20L,0x26AB9B20L};
        int64_t **l_652[6] = {&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270};
        int16_t *l_661 = (void*)0;
        int16_t *l_662 = &p_1677->g_127;
        uint16_t *l_663 = &p_1677->g_449;
        int32_t *l_666[5] = {&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28,&p_1677->g_28};
        uint8_t l_752 = 0UL;
        uint64_t l_838[9] = {18446744073709551612UL,1UL,18446744073709551612UL,18446744073709551612UL,1UL,18446744073709551612UL,18446744073709551612UL,1UL,18446744073709551612UL};
        uint32_t **l_876 = &p_1677->g_542;
        int i;
        l_629--;
        for (p_1677->g_452 = (-27); (p_1677->g_452 >= 9); ++p_1677->g_452)
        { /* block id: 323 */
            uint16_t l_636 = 0xD02EL;
            int32_t ******l_637 = (void*)0;
            int32_t *****l_639 = &p_1677->g_421;
            int32_t ******l_638[4][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int8_t *l_641 = &p_1677->g_280;
            uint64_t *l_643 = (void*)0;
            uint64_t *l_644 = &p_1677->g_119;
            int i, j, k;
            (***p_1677->g_421) = (*p_1677->g_173);
            if (((((0x7C41L >= (((l_636 , (l_640 = (void*)0)) != (void*)0) == p_1677->g_611[0][1][1])) , ((l_651[3] = (((((*l_644) = ((l_641 == l_642) & (-1L))) & ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(p_1677->g_28, 7)) && p_60), 1UL)), 5)) , l_629)) , p_1677->g_262) , 0UL)) < p_60)) | 0x07L) < p_60))
            { /* block id: 328 */
                return l_652[5];
            }
            else
            { /* block id: 330 */
                int64_t **l_653 = &p_1677->g_270;
                return l_653;
            }
        }
        l_666[0] = func_78(l_654, l_629, ((safe_mul_func_int16_t_s_s(((((~0x0BL) && (*l_616)) > (&p_1677->g_449 != ((safe_rshift_func_int16_t_s_u(((*l_662) = 0x2395L), ((*l_663) &= 0x91B5L))) , &p_1677->g_215))) != (safe_lshift_func_int8_t_s_u(((((((9UL == p_60) >= (*l_617)) , l_651[3]) <= 0x5F64D03FL) ^ 0x7D113340L) , (-1L)), 4))), (-4L))) ^ 1L), p_1677);
        for (p_1677->g_119 = 0; (p_1677->g_119 <= 1); p_1677->g_119 += 1)
        { /* block id: 339 */
            int32_t *****l_667 = &p_1677->g_421;
            int32_t l_691[4] = {0x56C79760L,0x56C79760L,0x56C79760L,0x56C79760L};
            int16_t **l_798 = (void*)0;
            int8_t *l_822 = &p_1677->g_280;
            int64_t **l_825 = &p_1677->g_785[3];
            int32_t *l_826 = (void*)0;
            uint64_t ***l_828 = &p_1677->g_407[6];
            uint64_t l_871 = 18446744073709551615UL;
            int32_t l_911 = 1L;
            uint64_t *l_916 = &p_1677->g_150;
            uint8_t *l_919[3][9][7] = {{{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752}},{{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752}},{{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752},{&l_752,&p_1677->g_176,&p_1677->g_176,&p_1677->g_176,(void*)0,(void*)0,&l_752}}};
            uint32_t *l_920[4][3] = {{&p_1677->g_302,(void*)0,&p_1677->g_302},{&p_1677->g_302,(void*)0,&p_1677->g_302},{&p_1677->g_302,(void*)0,&p_1677->g_302},{&p_1677->g_302,(void*)0,&p_1677->g_302}};
            int i, j, k;
            for (p_1677->g_298 = 1; (p_1677->g_298 >= 0); p_1677->g_298 -= 1)
            { /* block id: 342 */
                int i, j, k;
                l_666[(p_1677->g_298 + 1)] = p_59;
                (*l_617) = (l_667 != &p_1677->g_309);
                for (p_1677->g_116 = 0; (p_1677->g_116 <= 1); p_1677->g_116 += 1)
                { /* block id: 347 */
                    uint32_t l_697 = 0UL;
                    int32_t l_698 = 0x367A9579L;
                    uint64_t l_707 = 18446744073709551615UL;
                    uint32_t *l_710 = &p_1677->g_694;
                    for (p_1677->g_302 = 0; (p_1677->g_302 <= 0); p_1677->g_302 += 1)
                    { /* block id: 350 */
                        int64_t ***l_670 = &l_652[5];
                        uint16_t *l_687 = (void*)0;
                        uint16_t *l_688 = &l_629;
                        int64_t *l_689[5][6][8] = {{{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]}},{{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]}},{{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]}},{{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]}},{{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]},{&p_1677->g_26[1],&p_1677->g_26[1],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[0],(void*)0,&p_1677->g_26[1]}}};
                        uint64_t *l_690[2][7][4] = {{{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150}},{{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150},{&p_1677->g_119,&p_1677->g_150,&p_1677->g_150,&p_1677->g_150}}};
                        uint32_t *l_692 = (void*)0;
                        uint32_t *l_693[10][2][8] = {{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}},{{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0},{&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,&p_1677->g_694,(void*)0}}};
                        int8_t *l_695 = &p_1677->g_600;
                        int8_t *l_696 = &p_1677->g_280;
                        int i, j, k;
                        l_622[0] = ((****l_640) = func_78(l_654, (((safe_mod_func_int32_t_s_s((l_698 &= (((!((((*l_670) = &p_1677->g_270) == (void*)0) & ((*l_696) = ((*l_695) |= (safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(l_624[(p_1677->g_302 + 1)][(p_1677->g_298 + 6)][(p_1677->g_302 + 1)], 11)) || ((p_1677->g_694 = (safe_mul_func_int16_t_s_s(((l_691[3] = ((p_1677->g_26[0] = (l_651[(p_1677->g_116 + 5)] >= ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((*l_688) = (p_1677->g_143[p_1677->g_302][p_1677->g_116][(p_1677->g_298 + 4)] | (safe_div_func_uint64_t_u_u((((*p_1677->g_542) , (((((safe_sub_func_int8_t_s_s((p_60 || ((*l_663) |= (safe_rshift_func_int16_t_s_u((-1L), p_60)))), 255UL)) < 0x27L) , 0xBC33992ACA52D2C2L) , p_60) | 0x6146L)) < (-9L)), p_1677->g_143[0][2][0])))), p_60)) && p_60), p_60)) & p_60))) && p_60)) , (-1L)), p_60))) , (*l_617))), 4UL)))))) , (*l_617)) , l_697)), p_60)) | (*l_619)) > (*p_1677->g_542)), p_1677->g_134, p_1677));
                        (*l_617) ^= 0x0C8E9048L;
                        if (p_1677->g_298)
                            goto lbl_699;
                    }
                    for (p_1677->g_127 = 1; (p_1677->g_127 >= 0); p_1677->g_127 -= 1)
                    { /* block id: 367 */
                        int32_t *l_701 = &p_1677->g_143[0][1][0];
                        int32_t **l_700 = &l_701;
                        int32_t ***l_702 = &l_700;
                        int16_t l_721 = 0x113AL;
                        int i, j, k;
                        (*l_702) = l_700;
                        l_651[(p_1677->g_298 + 1)] |= (safe_add_func_uint32_t_u_u(l_624[p_1677->g_298][p_1677->g_119][(p_1677->g_116 + 2)], (-9L)));
                        if (l_624[p_1677->g_127][(p_1677->g_116 + 2)][(p_1677->g_116 + 1)])
                            break;
                        (*l_619) = ((safe_sub_func_int64_t_s_s((l_651[(p_1677->g_127 + 5)] < (l_707 || (safe_rshift_func_uint16_t_u_s(((0x57F9B0BDL && (((l_710 == (((**l_700) = (0xDAL == ((((l_698 = 0x5EE3L) != (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*p_1677->g_542) && (safe_rshift_func_uint16_t_u_s(p_60, (safe_lshift_func_uint16_t_u_u((l_721 ^ p_60), 8))))) , p_60), l_707)), 65527UL)), p_60))) & p_1677->g_722) >= l_707))) , &p_1677->g_694)) >= p_60) , (*p_1677->g_542))) & p_60), 15)))), p_60)) , p_60);
                    }
                }
            }
            for (p_1677->g_722 = 1; (p_1677->g_722 >= 0); p_1677->g_722 -= 1)
            { /* block id: 379 */
                uint64_t **l_727 = &p_1677->g_408;
                uint32_t *l_728 = &p_1677->g_452;
                uint32_t *l_741 = &p_1677->g_302;
                int8_t *l_750 = &p_1677->g_280;
                uint16_t l_751 = 1UL;
                int32_t l_753[3];
                int16_t *l_754 = &l_623;
                int32_t l_758 = 0x6B1A7504L;
                int64_t **l_766 = &l_654;
                uint64_t l_790[10][10] = {{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL},{1UL,0UL,0xE8D6F98478C6BC77L,18446744073709551610UL,0x78210B3E6F307F5AL,18446744073709551613UL,0x67CF010D1DFF982EL,0x1337A88F1E19BFEAL,0x1337A88F1E19BFEAL,0x67CF010D1DFF982EL}};
                int8_t l_808 = 0x5BL;
                int16_t l_809 = 0L;
                int64_t *l_824 = &p_1677->g_24[5][5];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_753[i] = (-6L);
                (*l_617) = l_624[p_1677->g_722][(p_1677->g_119 + 3)][(p_1677->g_722 + 2)];
                (*l_621) |= ((safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((p_1677->g_407[6] = l_727) == (void*)0), (l_624[p_1677->g_722][(p_1677->g_722 + 3)][(p_1677->g_119 + 3)] || ((((*l_728) |= (l_624[p_1677->g_119][(p_1677->g_119 + 6)][(p_1677->g_119 + 2)] <= (l_624[p_1677->g_722][(p_1677->g_119 + 3)][(p_1677->g_722 + 2)] >= (~p_60)))) , p_60) ^ p_1677->g_28)))), (safe_div_func_uint64_t_u_u(p_60, 18446744073709551615UL)))) <= 2UL);
                if ((p_60 || ((safe_rshift_func_int16_t_s_u(((*l_754) = ((((*l_662) = ((((safe_add_func_uint16_t_u_u(((l_753[2] = (safe_add_func_int16_t_s_s(((((!(*p_1677->g_542)) ^ (l_642 == (void*)0)) ^ (safe_div_func_int32_t_s_s((-8L), ((*l_741)++)))) != ((safe_mul_func_int8_t_s_s(((*l_750) = (safe_add_func_int64_t_s_s(((void*)0 != &l_727), (safe_mul_func_uint8_t_u_u(p_1677->g_262, (1L & p_1677->g_614)))))), 4L)) == l_751)), l_752))) ^ p_60), p_60)) & p_60) != p_60) ^ p_60)) | l_751) & p_60)), 0)) & 0L)))
                { /* block id: 389 */
                    int32_t l_759 = 8L;
                    int32_t l_760 = 1L;
                    int32_t l_761 = 0x50EB5E7EL;
                    int32_t l_762[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_762[i] = (-7L);
                    for (p_1677->g_600 = 0; (p_1677->g_600 <= 1); p_1677->g_600 += 1)
                    { /* block id: 392 */
                        int i, j, k;
                        l_755--;
                        if (l_753[p_1677->g_600])
                            break;
                    }
                    ++l_763;
                    return &p_1677->g_270;
                }
                else
                { /* block id: 398 */
                    if (l_758)
                        break;
                    if (p_1677->g_767)
                        continue;
                }
                if (l_768)
                { /* block id: 402 */
                    int64_t l_779[5];
                    int32_t l_780 = (-1L);
                    int16_t **l_797[7][10] = {{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662},{&l_754,&l_754,&l_754,&l_661,&p_1677->g_559,&l_662,&l_754,&l_662,&l_754,&l_662}};
                    int64_t *l_807[6][4] = {{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]},{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]},{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]},{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]},{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]},{(void*)0,&p_1677->g_611[0][1][3],&p_1677->g_298,&p_1677->g_26[1]}};
                    int8_t *l_810 = &l_808;
                    uint32_t **l_819[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_779[i] = 0x4921986B33132252L;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_819[i][j] = (void*)0;
                    }
                    if (((3UL <= (safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((-1L) == ((void*)0 == &l_624[p_1677->g_119][(p_1677->g_119 + 6)][(p_1677->g_119 + 2)])), ((p_1677->g_781 = (((l_691[3] ^ ((*l_621) < (safe_rshift_func_uint8_t_u_s(0xF0L, 2)))) >= ((*l_741) = (safe_mul_func_uint8_t_u_u((((*p_1677->g_542) ^ ((l_780 = (((safe_rshift_func_int16_t_s_s(((*l_754) = (-7L)), l_779[0])) ^ (-1L)) >= 9L)) ^ l_751)) < (*p_1677->g_542)), p_1677->g_143[0][1][1])))) , (void*)0)) != l_782[1][2][0]))) | l_779[0]), 0x138B9259L))) | p_1677->g_614))
                    { /* block id: 407 */
                        uint64_t ***l_783 = &p_1677->g_407[6];
                        (*l_618) |= (&p_1677->g_407[6] != l_783);
                        if (l_758)
                            break;
                    }
                    else
                    { /* block id: 410 */
                        int64_t **l_784 = &l_654;
                        return &p_1677->g_270;
                    }
                    (****l_667) = func_78(p_1677->g_785[3], p_1677->g_600, (safe_add_func_int8_t_s_s(((*l_810) = (p_60 < (safe_sub_func_int16_t_s_s((((l_790[3][1] | (!(safe_sub_func_int8_t_s_s(((*l_750) = (safe_div_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(((p_1677->g_558 = l_797[5][3]) == l_798), p_60)) != (safe_mod_func_int8_t_s_s(((l_780 ^= (safe_mul_func_uint16_t_u_u(0UL, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(3UL, p_60)), p_1677->g_611[1][1][5]))))) ^ l_808), p_60))) == l_809) > p_60), l_624[p_1677->g_722][(p_1677->g_119 + 3)][(p_1677->g_722 + 2)]))), p_60)))) , p_60) < l_779[0]), l_779[0])))), 0xB9L)), p_1677);
                    if ((((~((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((((l_780 |= p_1677->g_118) , ((safe_lshift_func_int16_t_s_u(((*l_662) = 0x12C6L), 5)) && 4L)) , 8UL), ((*l_741) = (safe_div_func_uint64_t_u_u((((((p_1677->g_820 = (void*)0) != &p_1677->g_452) , (safe_unary_minus_func_uint32_t_u(((void*)0 != l_822)))) ^ p_1677->g_262) & 0x15L), 0x0AAE34C613CB752FL))))) <= (-10L)), 1UL)) | p_60)) ^ p_1677->g_134) != 0L))
                    { /* block id: 422 */
                        return p_1677->g_823[2][2];
                    }
                    else
                    { /* block id: 424 */
                        (*l_617) = ((*p_1677->g_272) == l_824);
                        return l_825;
                    }
                }
                else
                { /* block id: 428 */
                    uint64_t ***l_827 = &l_727;
                    uint64_t ****l_829 = &l_828;
                    int32_t l_830 = (-1L);
                    uint32_t **l_875 = (void*)0;
                    int8_t l_907 = 1L;
                    (*p_1677->g_173) = l_826;
                    if (p_60)
                        continue;
                    if ((l_827 != ((*l_829) = l_828)))
                    { /* block id: 432 */
                        if (l_830)
                            break;
                        l_838[3] = ((*l_616) &= (((*p_1677->g_542) < (safe_add_func_uint32_t_u_u(((((((((*p_1677->g_542) >= (!(((void*)0 != l_833) || (~((((((*l_822) = (p_60 & (safe_div_func_int64_t_s_s((((l_830 > l_808) | (((safe_mul_func_int16_t_s_s(p_60, ((void*)0 == p_59))) , l_790[2][0]) ^ l_830)) , p_1677->g_116), p_60)))) || p_1677->g_449) , 0x49C943E1L) && p_60) > (*l_618)))))) < 0x7ABAL) && p_60) , 0L) , (void*)0) != (void*)0) > 1UL), p_60))) | p_1677->g_600));
                    }
                    else
                    { /* block id: 437 */
                        uint64_t l_839 = 0x5519F324CFCF0387L;
                        (*l_619) ^= (p_60 && (l_839 & p_60));
                    }
                    if (((((((safe_lshift_func_uint16_t_u_u((p_60 == p_60), 12)) , (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(l_830)) >= ((1UL == (*p_1677->g_542)) , 0x30266E1BL)), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_758 &= (((*p_1677->g_270) |= (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((+((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_60, ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((*l_663) |= ((safe_sub_func_uint32_t_u_u((*p_1677->g_542), (*p_1677->g_542))) & 4294967292UL)), p_60)), 1)), p_1677->g_767)) >= p_60))), l_871)), p_60)) | 0x1E9B9639L)), p_60)), l_830)), p_1677->g_694)) ^ p_60), (-9L)))) , 0x6D97L)), p_60)), l_830))))) < 65532UL) != (*p_1677->g_542)) <= l_753[2]) | p_1677->g_127))
                    { /* block id: 443 */
                        if (l_872)
                            break;
                    }
                    else
                    { /* block id: 445 */
                        int32_t l_877 = 0x369B5356L;
                        int32_t **l_890[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_890[i] = &l_621;
                        l_877 ^= (safe_sub_func_uint32_t_u_u((((p_59 == (void*)0) , &p_1677->g_422) == &p_1677->g_310), (&p_1677->g_542 == (l_876 = l_875))));
                        l_666[0] = ((****l_640) = func_78((*l_766), (0x876F22BCA3043C43L || (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((p_60 && (((*l_754) = ((safe_add_func_uint8_t_u_u(l_790[7][7], p_1677->g_767)) >= (((*l_617) , ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((void*)0 != p_1677->g_888), 0x44A84C155417CBF0L)), p_60)) , p_60)) | p_1677->g_611[1][0][3]))) && p_60)), p_60)) == 0xA3L), p_1677->g_176))), p_1677->g_215, p_1677));
                        (*l_621) = (((((safe_lshift_func_uint8_t_u_u(p_60, 7)) || ((((*l_619) = (p_60 == 0x1B7C7606L)) != (((*l_754) = ((safe_rshift_func_uint8_t_u_s(p_1677->g_26[1], (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(p_1677->g_767, (p_1677->g_143[0][3][1] | l_790[3][1]))) >= ((((safe_mul_func_uint8_t_u_u((p_1677->g_176 , (p_60 | p_60)), 0xE6L)) || l_830) != p_60) , 253UL)), l_830)) >= p_60), l_809)), l_907)), 1UL)))) <= l_908)) != 1L)) ^ l_830)) , 0x1EF3FAE0L) | 0xD81D4D7CL) , 0x719826E3L);
                    }
                }
            }
            (*l_618) = (safe_rshift_func_int16_t_s_s(l_911, ((((((~(((&l_654 == (void*)0) < ((p_1677->g_302 = ((((safe_lshift_func_uint16_t_u_s(p_60, 9)) & 0x6DL) & p_60) && (p_1677->g_176 = (!(safe_sub_func_uint8_t_u_u(((~((*l_916) = p_60)) <= p_1677->g_452), ((safe_sub_func_int8_t_s_s((p_60 >= 0x762CL), 246UL)) >= (*p_1677->g_542)))))))) || (*l_619))) >= 5UL)) < p_60) && p_60) , &l_920[1][2]) == l_921[6]) , p_60)));
        }
    }
    (****l_640) = p_59;
    return &p_1677->g_785[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_28 p_1677->g_24 p_1677->g_26 p_1677->g_71 p_1677->g_119 p_1677->g_77 p_1677->g_134 p_1677->g_118 p_1677->g_150 p_1677->g_173 p_1677->g_269 p_1677->g_262 p_1677->g_143 p_1677->g_302 p_1677->g_280 p_1677->g_309 p_1677->g_116 p_1677->g_127 p_1677->g_421 p_1677->g_422 p_1677->g_298 p_1677->g_533 p_1677->g_366 p_1677->g_367 p_1677->g_542 p_1677->g_449
 * writes: p_1677->g_28 p_1677->g_71 p_1677->g_77 p_1677->g_116 p_1677->g_118 p_1677->g_119 p_1677->g_134 p_1677->g_143 p_1677->g_150 p_1677->g_262 p_1677->g_269 p_1677->g_272 p_1677->g_273 p_1677->g_280 p_1677->g_127 p_1677->g_542 p_1677->g_298 p_1677->g_600
 */
int32_t * func_61(int8_t  p_62, uint64_t  p_63, struct S1 * p_1677)
{ /* block id: 20 */
    uint16_t l_69 = 0x7B92L;
    uint16_t *l_526 = &l_69;
    uint16_t **l_525 = &l_526;
    uint16_t **l_531 = &l_526;
    uint16_t ***l_530[6] = {&l_531,&l_531,&l_531,&l_531,&l_531,&l_531};
    int32_t *l_551 = &p_1677->g_28;
    int16_t l_595[7][2] = {{9L,(-9L)},{9L,(-9L)},{9L,(-9L)},{9L,(-9L)},{9L,(-9L)},{9L,(-9L)},{9L,(-9L)}};
    int i, j;
    for (p_1677->g_28 = 0; (p_1677->g_28 != 9); p_1677->g_28 = safe_add_func_uint64_t_u_u(p_1677->g_28, 2))
    { /* block id: 23 */
        int64_t *l_82 = &p_1677->g_24[3][4];
        int32_t l_319 = 0x71142FC6L;
        int32_t l_535[3];
        int32_t **l_583 = &l_551;
        int64_t ***l_588[5][6] = {{&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272},{&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272},{&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272},{&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272},{&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272,&p_1677->g_272}};
        uint16_t l_591 = 65527UL;
        int16_t ***l_596 = &p_1677->g_558;
        int i, j;
        for (i = 0; i < 3; i++)
            l_535[i] = 0x40E5080FL;
        for (p_62 = 0; (p_62 >= 19); ++p_62)
        { /* block id: 26 */
            int32_t *l_70 = &p_1677->g_71;
            int32_t l_320[5];
            int i;
            for (i = 0; i < 5; i++)
                l_320[i] = 0x0C5D578FL;
            (*l_70) = l_69;
            for (p_63 = (-11); (p_63 == 50); p_63 = safe_add_func_int16_t_s_s(p_63, 9))
            { /* block id: 30 */
                int32_t *l_76[2];
                int16_t l_565[2][7][6] = {{{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L}},{{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L},{0x49B4L,(-6L),9L,8L,0x315EL,0L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_76[i] = &p_1677->g_28;
                if (p_1677->g_24[1][2])
                { /* block id: 31 */
                    for (l_69 = 0; (l_69 != 39); l_69 = safe_add_func_int32_t_s_s(l_69, 4))
                    { /* block id: 34 */
                        p_1677->g_77 = l_76[1];
                        return l_76[1];
                    }
                    if (p_63)
                        break;
                }
                else
                { /* block id: 39 */
                    int32_t *l_91 = &p_1677->g_71;
                    int32_t *l_317 = &p_1677->g_71;
                    int16_t *l_318 = &p_1677->g_127;
                    uint16_t *l_321 = (void*)0;
                    uint16_t *l_322 = &l_69;
                    int16_t *l_323 = (void*)0;
                    int16_t *l_324 = &p_1677->g_118;
                    uint32_t *l_532 = (void*)0;
                    int64_t *l_594 = &p_1677->g_298;
                    int16_t ***l_597 = &p_1677->g_563[0][3][1];
                    int8_t *l_598 = &p_1677->g_280;
                    int8_t *l_599 = &p_1677->g_600;
                    if ((((((**p_1677->g_422) = func_78(l_82, ((safe_mod_func_int16_t_s_s(0x3E67L, ((*l_324) = ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((p_1677->g_26[0] < p_1677->g_28), ((*l_318) |= (safe_mul_func_uint16_t_u_u((l_91 != (l_317 = func_92((*l_70), p_1677))), 0x2035L))))), ((*l_322) &= ((l_320[0] = l_319) | 0x7C522FCAL)))) && 9L)))) <= (-10L)), p_62, p_1677)) == (void*)0) <= p_1677->g_298) && p_62))
                    { /* block id: 280 */
                        uint16_t ***l_527 = &l_525;
                        int32_t l_536 = 0x635A826AL;
                        uint32_t **l_541[3];
                        int16_t *l_549 = &p_1677->g_116;
                        int32_t l_550 = 0x6C7B048EL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_541[i] = &l_532;
                        if ((*l_70))
                            break;
                        l_320[0] = (((((((!(l_535[0] = ((*l_91) = (safe_mul_func_uint8_t_u_u(p_63, (safe_div_func_uint16_t_u_u((((*l_527) = l_525) == (void*)0), (l_319 &= (p_1677->g_262 & (((8UL ^ (l_530[5] != ((~p_63) , (((p_62 , l_70) == l_532) , p_1677->g_533)))) >= p_63) || p_1677->g_134)))))))))) != l_536) , (void*)0) != (void*)0) != 0x19A06B87L) <= 8UL) , p_62);
                        l_550 |= (((*l_526)++) == (((0x2CF1DF77L >= ((((*l_70) <= (safe_rshift_func_uint8_t_u_s((l_70 == (p_1677->g_542 = &p_1677->g_262)), (((safe_lshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((((l_536 > (safe_mod_func_int16_t_s_s(p_1677->g_150, ((*l_317) , 1L)))) , (p_1677->g_71 > 0x83E4A439L)) | p_62), 1L)) == p_1677->g_134) <= p_63), 5)) , l_549) != (*p_1677->g_366))))) > 255UL) >= 0xD10CL)) >= 0x6CC260BA5A23F08DL) | p_1677->g_262));
                    }
                    else
                    { /* block id: 290 */
                        int16_t ***l_560 = &p_1677->g_558;
                        int16_t **l_562 = &p_1677->g_559;
                        int16_t ***l_561[2][2][6] = {{{&l_562,&l_562,&l_562,&l_562,&l_562,&l_562},{&l_562,&l_562,&l_562,&l_562,&l_562,&l_562}},{{&l_562,&l_562,&l_562,&l_562,&l_562,&l_562},{&l_562,&l_562,&l_562,&l_562,&l_562,&l_562}}};
                        uint64_t *l_564[4][2] = {{&p_1677->g_150,&p_1677->g_150},{&p_1677->g_150,&p_1677->g_150},{&p_1677->g_150,&p_1677->g_150},{&p_1677->g_150,&p_1677->g_150}};
                        int32_t l_568[4] = {0L,0L,0L,0L};
                        int i, j, k;
                        if (l_69)
                            break;
                        l_76[1] = l_551;
                        (**p_1677->g_422) = l_317;
                    }
                    (*l_70) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((*p_1677->g_542) |= p_63), p_63)), (((*l_599) = ((*l_598) = (((((((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((*l_318) = ((void*)0 == l_583)), 8)), (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((l_588[4][0] != &p_1677->g_269[0][1]) ^ ((((*l_594) |= (((safe_mod_func_uint16_t_u_u(l_591, ((safe_rshift_func_uint8_t_u_s((7UL || 0x2E96267DL), 2)) & p_1677->g_302))) != (*l_91)) || (**l_583))) & (-10L)) && p_1677->g_150)) >= p_1677->g_449), l_595[4][0])) < 0x79AE08134C2C9406L), (**l_583))))), (**l_583))) || 0x035BL) != 0x9B8F0FC349F62DDCL) , l_596) != l_597) > (*l_70)) , p_63))) <= (*l_317)))), 0xF1L));
                }
            }
        }
    }
    (*l_551) &= 7L;
    return (*p_1677->g_173);
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_173 p_1677->g_127 p_1677->g_421 p_1677->g_422 p_1677->g_77
 * writes: p_1677->g_77 p_1677->g_127
 */
int32_t * func_78(int64_t * p_79, int64_t  p_80, int32_t  p_81, struct S1 * p_1677)
{ /* block id: 156 */
    uint8_t l_328 = 0xF8L;
    int32_t *l_356 = &p_1677->g_28;
    uint16_t l_360 = 0xFC63L;
    int32_t l_406 = 0x50A85428L;
    int32_t ***l_419[8] = {&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0],&p_1677->g_172[0]};
    int32_t ****l_418 = &l_419[2];
    uint32_t l_474 = 4294967286UL;
    uint8_t l_510 = 0xBFL;
    int32_t l_519 = 0x5CA86E97L;
    int i;
lbl_520:
    for (p_80 = 0; (p_80 <= (-17)); --p_80)
    { /* block id: 159 */
        uint32_t l_327 = 4294967288UL;
        int32_t ***l_332 = &p_1677->g_172[8];
        int16_t l_354 = 2L;
        int16_t *l_365[7] = {&p_1677->g_134,&p_1677->g_134,&p_1677->g_134,&p_1677->g_134,&p_1677->g_134,&p_1677->g_134,&p_1677->g_134};
        int16_t **l_364 = &l_365[2];
        int64_t *l_375 = &p_1677->g_24[5][5];
        int32_t l_400 = (-7L);
        uint64_t **l_410 = (void*)0;
        int32_t l_469 = 0x6039EA8EL;
        int32_t l_470 = 0x17CFC046L;
        uint32_t l_488 = 4294967286UL;
        int32_t *l_496 = (void*)0;
        int i;
        (*p_1677->g_173) = (void*)0;
        if (l_327)
            break;
        for (p_1677->g_127 = 0; (p_1677->g_127 <= 5); p_1677->g_127 += 1)
        { /* block id: 164 */
            int64_t *l_331 = &p_1677->g_26[1];
            int32_t ****l_333[1];
            int64_t *l_334 = &p_1677->g_298;
            uint8_t *l_398 = (void*)0;
            uint8_t *l_399[6];
            int64_t **l_405 = &p_1677->g_270;
            uint32_t l_411[4][3] = {{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL}};
            int32_t *****l_420[4] = {&l_333[0],&l_333[0],&l_333[0],&l_333[0]};
            int8_t *l_427 = &p_1677->g_280;
            uint32_t *l_430 = &l_411[3][1];
            int32_t l_473 = 0x339098C4L;
            int16_t *l_499 = &p_1677->g_134;
            int i, j;
            for (i = 0; i < 1; i++)
                l_333[i] = &l_332;
            for (i = 0; i < 6; i++)
                l_399[i] = &p_1677->g_176;
            (1 + 1);
        }
    }
    l_519 &= 1L;
    if (l_519)
        goto lbl_520;
    (**p_1677->g_422) = (***p_1677->g_421);
    return (*p_1677->g_173);
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_26 p_1677->g_24 p_1677->g_71 p_1677->g_28 p_1677->g_119 p_1677->g_118 p_1677->g_77 p_1677->g_134 p_1677->g_150 p_1677->g_116 p_1677->g_262 p_1677->g_173 p_1677->g_269 p_1677->g_143 p_1677->g_302 p_1677->g_280 p_1677->g_309
 * writes: p_1677->g_77 p_1677->g_116 p_1677->g_118 p_1677->g_119 p_1677->g_71 p_1677->g_134 p_1677->g_143 p_1677->g_150 p_1677->g_262 p_1677->g_269 p_1677->g_272 p_1677->g_273 p_1677->g_280
 */
int32_t * func_92(uint64_t  p_93, struct S1 * p_1677)
{ /* block id: 40 */
    uint8_t l_101[6];
    int32_t **l_102[10] = {&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77};
    int16_t *l_115 = &p_1677->g_116;
    int16_t *l_117 = &p_1677->g_118;
    int32_t *l_120 = &p_1677->g_71;
    int32_t l_316[6][6] = {{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L},{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L},{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L},{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L},{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L},{0x2BFD04F1L,(-1L),(-1L),0x2BFD04F1L,0x720ED74EL,1L}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_101[i] = 7UL;
    for (p_93 = (-30); (p_93 != 15); p_93++)
    { /* block id: 43 */
        int32_t l_96 = 6L;
        if (l_96)
            break;
    }
    (*p_1677->g_173) = func_97(p_1677->g_26[0], ((0x31L & ((l_101[3] > ((p_1677->g_77 = &p_1677->g_71) == &p_1677->g_71)) <= (p_1677->g_24[4][3] , ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((*l_117) = (p_1677->g_26[1] | (p_1677->g_26[1] < ((((((*l_115) = ((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_1677->g_71 , p_1677->g_28), 6)), p_93)), 1)), p_93)) < p_1677->g_24[5][5])) == p_93) <= 0x2902L) == 0x07CCB484BB253DC1L) | (-3L))))), 14)), 9)) , p_1677->g_119)))) | p_1677->g_24[5][5]), l_120, p_1677);
    l_316[5][2] ^= (*l_120);
    return (*p_1677->g_173);
}


/* ------------------------------------------ */
/* 
 * reads : p_1677->g_118 p_1677->g_119 p_1677->g_71 p_1677->g_77 p_1677->g_134 p_1677->g_150 p_1677->g_116 p_1677->g_262 p_1677->g_173 p_1677->g_269 p_1677->g_28 p_1677->g_143 p_1677->g_302 p_1677->g_280 p_1677->g_309
 * writes: p_1677->g_118 p_1677->g_119 p_1677->g_71 p_1677->g_116 p_1677->g_134 p_1677->g_143 p_1677->g_150 p_1677->g_262 p_1677->g_269 p_1677->g_272 p_1677->g_273 p_1677->g_280
 */
int32_t * func_97(int64_t  p_98, uint8_t  p_99, int32_t * p_100, struct S1 * p_1677)
{ /* block id: 49 */
    uint32_t l_128 = 1UL;
    int32_t *l_133[8][4][1] = {{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}},{{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28},{&p_1677->g_28}}};
    int16_t *l_139[1][9][10] = {{{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127},{&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127,&p_1677->g_127}}};
    int32_t l_221 = 5L;
    uint32_t l_223 = 3UL;
    int16_t l_247 = 0x6D64L;
    int32_t ***l_293 = &p_1677->g_174[0][9][2];
    int32_t l_301 = 0L;
    int8_t *l_314[10] = {(void*)0,&p_1677->g_280,(void*)0,(void*)0,&p_1677->g_280,(void*)0,(void*)0,&p_1677->g_280,(void*)0,(void*)0};
    int32_t l_315 = 0x3C9E0E84L;
    int i, j, k;
lbl_276:
    for (p_98 = (-29); (p_98 < (-2)); p_98 = safe_add_func_int32_t_s_s(p_98, 7))
    { /* block id: 52 */
        int32_t *l_123 = (void*)0;
        int32_t *l_124 = (void*)0;
        int32_t *l_125 = &p_1677->g_71;
        int32_t *l_126[5] = {&p_1677->g_71,&p_1677->g_71,&p_1677->g_71,&p_1677->g_71,&p_1677->g_71};
        int8_t l_169[1];
        uint16_t l_218 = 0x2651L;
        int i;
        for (i = 0; i < 1; i++)
            l_169[i] = 0x71L;
        --l_128;
        for (p_1677->g_118 = (-4); (p_1677->g_118 != (-10)); p_1677->g_118 = safe_sub_func_int64_t_s_s(p_1677->g_118, 7))
        { /* block id: 56 */
            uint64_t l_138[1];
            int32_t l_148 = 0x76B8F8F0L;
            int64_t *l_163 = &p_1677->g_24[5][5];
            int64_t **l_162[8] = {&l_163,&l_163,&l_163,&l_163,&l_163,&l_163,&l_163,&l_163};
            int64_t ***l_161 = &l_162[4];
            int32_t **l_170 = &l_133[3][0][0];
            int32_t l_229 = 0x02D23503L;
            int32_t l_232 = 0x3AE3880BL;
            int32_t l_233 = 0x3D589764L;
            int32_t l_236 = 3L;
            int32_t l_239 = 0L;
            int32_t l_240 = 1L;
            int32_t l_244[8] = {0x78DD13CFL,0x78DD13CFL,0x78DD13CFL,0x78DD13CFL,0x78DD13CFL,0x78DD13CFL,0x78DD13CFL,0x78DD13CFL};
            int i;
            for (i = 0; i < 1; i++)
                l_138[i] = 0xC4584B38A77D7D73L;
            l_133[3][0][0] = (void*)0;
            for (p_1677->g_119 = 0; (p_1677->g_119 <= 5); p_1677->g_119 += 1)
            { /* block id: 60 */
                int32_t *l_149 = &l_148;
                int64_t ***l_160 = (void*)0;
                uint8_t l_224 = 0xB0L;
                uint32_t l_227 = 4294967295UL;
                int32_t l_228 = 0x3208BFBEL;
                int32_t l_235 = (-1L);
                int32_t l_238 = 0x30B18F1BL;
                int32_t l_242[1];
                uint64_t *l_255 = &l_138[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_242[i] = 8L;
                for (p_1677->g_71 = 1; (p_1677->g_71 <= 4); p_1677->g_71 += 1)
                { /* block id: 63 */
                    int64_t *l_153 = &p_1677->g_24[5][5];
                    int32_t l_166 = 0L;
                    int16_t l_217 = 0x2C09L;
                    int8_t l_222 = 2L;
                    int32_t l_230[5][4][5] = {{{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL}},{{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL}},{{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL}},{{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL}},{{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL},{0x04FD572DL,(-1L),9L,(-1L),0x04FD572DL}}};
                    int32_t l_241 = (-1L);
                    uint64_t l_248 = 0xDC3B8FEF89A33DC6L;
                    int i, j, k;
                    for (p_1677->g_116 = 5; (p_1677->g_116 >= 1); p_1677->g_116 -= 1)
                    { /* block id: 66 */
                        int16_t **l_135 = (void*)0;
                        int16_t *l_137 = &p_1677->g_118;
                        int16_t **l_136 = &l_137;
                        int i;
                        p_1677->g_134 |= (*p_1677->g_77);
                        l_148 |= (((((*l_136) = &p_1677->g_116) == (l_138[0] , l_139[0][5][4])) ^ ((+(safe_mod_func_uint16_t_u_u(0x5B34L, (p_1677->g_143[0][1][0] = (safe_unary_minus_func_int64_t_s(1L)))))) > (safe_div_func_uint16_t_u_u(7UL, (-3L))))) < ((((safe_add_func_int8_t_s_s(p_1677->g_118, 0x62L)) , 1L) == 0x3380028DL) || (-10L)));
                        return &p_1677->g_71;
                    }
                    ++p_1677->g_150;
                }
                (*p_100) = 0x369D8115L;
            }
            for (l_128 = 0; (l_128 <= 7); l_128 += 1)
            { /* block id: 110 */
                (*l_170) = p_100;
                for (p_1677->g_116 = 0; (p_1677->g_116 <= 7); p_1677->g_116 += 1)
                { /* block id: 114 */
                    uint16_t l_266 = 4UL;
                    for (p_1677->g_262 = 0; (p_1677->g_262 <= 0); p_1677->g_262 += 1)
                    { /* block id: 117 */
                        l_266++;
                        if ((**p_1677->g_173))
                            break;
                        if ((**p_1677->g_173))
                            break;
                    }
                }
            }
        }
    }
    if ((*p_100))
    { /* block id: 126 */
        int64_t ***l_271[5][10] = {{&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1]},{&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1]},{&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1]},{&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1]},{&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1],&p_1677->g_269[0][1]}};
        int i, j;
        (**p_1677->g_173) |= (p_99 >= ((p_1677->g_269[0][1] = p_1677->g_269[0][1]) != (p_1677->g_273 = (p_1677->g_272 = &p_1677->g_270))));
    }
    else
    { /* block id: 131 */
        int8_t *l_279 = &p_1677->g_280;
        int32_t l_290 = 1L;
        int32_t ***l_292 = &p_1677->g_174[0][2][2];
        int32_t ****l_291 = &l_292;
        int32_t l_296 = 0x490FE130L;
        int64_t *l_297[10][3] = {{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298},{&p_1677->g_26[1],&p_1677->g_298,&p_1677->g_298}};
        int i, j;
        for (l_221 = 0; (l_221 >= (-26)); l_221--)
        { /* block id: 134 */
            int64_t l_281[1];
            int i;
            for (i = 0; i < 1; i++)
                l_281[i] = 0x7B68580AB61AD762L;
            if (l_128)
                goto lbl_276;
            (*p_100) = ((safe_sub_func_int32_t_s_s((*p_100), (((void*)0 == &p_1677->g_215) == 0x7890L))) > (l_279 == (((l_281[0] = (*p_100)) > p_1677->g_28) , &p_1677->g_280)));
        }
        (*p_100) = (((p_1677->g_262 ^ (p_99 , (+((p_98 , (~((safe_mod_func_int32_t_s_s((~(safe_add_func_int8_t_s_s(p_1677->g_28, ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((l_290 | (l_290 == (p_98 = ((((*l_279) = (((*l_291) = &p_1677->g_174[0][6][2]) != l_293)) != ((safe_lshift_func_int16_t_s_u(p_98, p_99)) | p_1677->g_150)) , l_296)))) >= 18446744073709551612UL), p_1677->g_143[0][1][0])), 7)) && 0x6DL) > p_99) && p_1677->g_143[0][1][0])))), (*p_1677->g_77))) > (-5L)))) == p_99)))) > 0L) & 1L);
    }
    l_133[3][0][0] = p_100;
    l_315 |= (((void*)0 != &l_139[0][5][4]) , ((safe_rshift_func_uint16_t_u_s((p_98 , l_301), ((p_1677->g_302 && (p_1677->g_280 = (~((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_1677->g_280, (safe_mod_func_int64_t_s_s(((p_1677->g_134 != p_99) < (p_1677->g_309 == &p_1677->g_310)), 1L)))), p_1677->g_71)) & p_98)))) > p_1677->g_71))) < p_1677->g_116));
    return p_100;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_1678;
    struct S1* p_1677 = &c_1678;
    struct S1 c_1679 = {
        {{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}}, // p_1677->g_24
        {(-3L),(-3L)}, // p_1677->g_26
        1L, // p_1677->g_28
        0x402A53EBL, // p_1677->g_37
        0x3E9700A5L, // p_1677->g_71
        &p_1677->g_71, // p_1677->g_77
        3L, // p_1677->g_116
        (-1L), // p_1677->g_118
        18446744073709551615UL, // p_1677->g_119
        1L, // p_1677->g_127
        0x470FL, // p_1677->g_134
        {{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}}}, // p_1677->g_143
        0UL, // p_1677->g_150
        {&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77,&p_1677->g_77}, // p_1677->g_172
        &p_1677->g_77, // p_1677->g_173
        {{{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77}},{{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77},{&p_1677->g_77,&p_1677->g_77,&p_1677->g_77}}}, // p_1677->g_174
        255UL, // p_1677->g_176
        65532UL, // p_1677->g_215
        1UL, // p_1677->g_262
        &p_1677->g_24[3][4], // p_1677->g_270
        {{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270},{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270},{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270},{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270},{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270},{&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270,&p_1677->g_270}}, // p_1677->g_269
        &p_1677->g_270, // p_1677->g_272
        (void*)0, // p_1677->g_273
        8L, // p_1677->g_280
        0L, // p_1677->g_298
        0xFBE90F85L, // p_1677->g_302
        (-2L), // p_1677->g_313
        &p_1677->g_313, // p_1677->g_312
        &p_1677->g_312, // p_1677->g_311
        &p_1677->g_311, // p_1677->g_310
        &p_1677->g_310, // p_1677->g_309
        0x314AL, // p_1677->g_368
        &p_1677->g_368, // p_1677->g_367
        &p_1677->g_367, // p_1677->g_366
        (void*)0, // p_1677->g_408
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1677->g_407
        &p_1677->g_173, // p_1677->g_422
        &p_1677->g_422, // p_1677->g_421
        1UL, // p_1677->g_449
        0x9AA1C8CAL, // p_1677->g_452
        (void*)0, // p_1677->g_534
        &p_1677->g_534, // p_1677->g_533
        &p_1677->g_262, // p_1677->g_542
        (void*)0, // p_1677->g_559
        &p_1677->g_559, // p_1677->g_558
        {{{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559}},{{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559}},{{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559},{&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,&p_1677->g_559,(void*)0,(void*)0,&p_1677->g_559,&p_1677->g_559}}}, // p_1677->g_563
        0x6FL, // p_1677->g_600
        {{{0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L,0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L},{0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L,0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L}},{{0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L,0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L},{0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L,0x5D4E79F6179BAC57L,0x76082B1CD1F6C153L,0x5D4E79F6179BAC57L}}}, // p_1677->g_611
        0x12EFFBE8L, // p_1677->g_614
        0x4C21CAD2L, // p_1677->g_694
        (-7L), // p_1677->g_722
        0x0909L, // p_1677->g_767
        (void*)0, // p_1677->g_781
        {(void*)0,&p_1677->g_24[0][5],(void*)0,(void*)0,&p_1677->g_24[0][5],(void*)0,(void*)0,&p_1677->g_24[0][5],(void*)0}, // p_1677->g_785
        (void*)0, // p_1677->g_820
        {{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0},{&p_1677->g_785[4],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[3],&p_1677->g_270,&p_1677->g_270,&p_1677->g_785[4],&p_1677->g_270,(void*)0,(void*)0}}, // p_1677->g_823
        &p_1677->g_143[0][1][0], // p_1677->g_889
        &p_1677->g_889, // p_1677->g_888
        {65532UL}, // p_1677->g_925
        &p_1677->g_925, // p_1677->g_924
        &p_1677->g_924, // p_1677->g_926
        {0UL}, // p_1677->g_944
        65535UL, // p_1677->g_973
        {{{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L}},{{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L},{0x581160F12BD50751L,8L,3L,0x179C83D39084B3E7L,0x453563F5ADF3CE4DL,0x0C0E1ADBA2C55C89L,0x581160F12BD50751L,1L,0x297A1DAE60E75354L}}}, // p_1677->g_981
        {0x29D1L}, // p_1677->g_1006
        {{0UL,0x13B9L,0UL,0UL},{0UL,0x13B9L,0UL,0UL},{0UL,0x13B9L,0UL,0UL},{0UL,0x13B9L,0UL,0UL}}, // p_1677->g_1014
        {3UL}, // p_1677->g_1028
        7UL, // p_1677->g_1036
        &p_1677->g_1036, // p_1677->g_1035
        1L, // p_1677->g_1039
        0x3EL, // p_1677->g_1122
        &p_1677->g_722, // p_1677->g_1175
        0x20L, // p_1677->g_1240
        4L, // p_1677->g_1245
        {0x35720EBEC52E2207L,0x35720EBEC52E2207L,0x35720EBEC52E2207L}, // p_1677->g_1275
        (void*)0, // p_1677->g_1420
        (void*)0, // p_1677->g_1423
        &p_1677->g_1423, // p_1677->g_1422
        &p_1677->g_1422, // p_1677->g_1421
        {8UL}, // p_1677->g_1445
        0x768E04D4273A508DL, // p_1677->g_1474
        0x91CDF16FCB73794FL, // p_1677->g_1504
        (void*)0, // p_1677->g_1603
        {{&p_1677->g_407[2],&p_1677->g_407[2],&p_1677->g_407[2]},{&p_1677->g_407[2],&p_1677->g_407[2],&p_1677->g_407[2]}}, // p_1677->g_1619
        &p_1677->g_71, // p_1677->g_1637
    };
    c_1678 = c_1679;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1677);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1677->g_24[i][j], "p_1677->g_24[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1677->g_26[i], "p_1677->g_26[i]", print_hash_value);

    }
    transparent_crc(p_1677->g_28, "p_1677->g_28", print_hash_value);
    transparent_crc(p_1677->g_37, "p_1677->g_37", print_hash_value);
    transparent_crc(p_1677->g_71, "p_1677->g_71", print_hash_value);
    transparent_crc(p_1677->g_116, "p_1677->g_116", print_hash_value);
    transparent_crc(p_1677->g_118, "p_1677->g_118", print_hash_value);
    transparent_crc(p_1677->g_119, "p_1677->g_119", print_hash_value);
    transparent_crc(p_1677->g_127, "p_1677->g_127", print_hash_value);
    transparent_crc(p_1677->g_134, "p_1677->g_134", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1677->g_143[i][j][k], "p_1677->g_143[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1677->g_150, "p_1677->g_150", print_hash_value);
    transparent_crc(p_1677->g_176, "p_1677->g_176", print_hash_value);
    transparent_crc(p_1677->g_215, "p_1677->g_215", print_hash_value);
    transparent_crc(p_1677->g_262, "p_1677->g_262", print_hash_value);
    transparent_crc(p_1677->g_280, "p_1677->g_280", print_hash_value);
    transparent_crc(p_1677->g_298, "p_1677->g_298", print_hash_value);
    transparent_crc(p_1677->g_302, "p_1677->g_302", print_hash_value);
    transparent_crc(p_1677->g_313, "p_1677->g_313", print_hash_value);
    transparent_crc(p_1677->g_368, "p_1677->g_368", print_hash_value);
    transparent_crc(p_1677->g_449, "p_1677->g_449", print_hash_value);
    transparent_crc(p_1677->g_452, "p_1677->g_452", print_hash_value);
    transparent_crc(p_1677->g_600, "p_1677->g_600", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1677->g_611[i][j][k], "p_1677->g_611[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1677->g_614, "p_1677->g_614", print_hash_value);
    transparent_crc(p_1677->g_694, "p_1677->g_694", print_hash_value);
    transparent_crc(p_1677->g_722, "p_1677->g_722", print_hash_value);
    transparent_crc(p_1677->g_767, "p_1677->g_767", print_hash_value);
    transparent_crc(p_1677->g_925.f0, "p_1677->g_925.f0", print_hash_value);
    transparent_crc(p_1677->g_944.f0, "p_1677->g_944.f0", print_hash_value);
    transparent_crc(p_1677->g_973, "p_1677->g_973", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1677->g_981[i][j][k], "p_1677->g_981[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1677->g_1014[i][j], "p_1677->g_1014[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1677->g_1036, "p_1677->g_1036", print_hash_value);
    transparent_crc(p_1677->g_1039, "p_1677->g_1039", print_hash_value);
    transparent_crc(p_1677->g_1122, "p_1677->g_1122", print_hash_value);
    transparent_crc(p_1677->g_1240, "p_1677->g_1240", print_hash_value);
    transparent_crc(p_1677->g_1245, "p_1677->g_1245", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1677->g_1275[i], "p_1677->g_1275[i]", print_hash_value);

    }
    transparent_crc(p_1677->g_1445.f0, "p_1677->g_1445.f0", print_hash_value);
    transparent_crc(p_1677->g_1474, "p_1677->g_1474", print_hash_value);
    transparent_crc(p_1677->g_1504, "p_1677->g_1504", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
