// -g 43,9,22 -l 43,1,2
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


// Seed: 271571416

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile int16_t  f1;
   int64_t  f2;
   uint64_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

union U1 {
   uint64_t  f0;
   volatile int8_t  f1;
   uint32_t  f2;
   volatile int32_t  f3;
   int32_t  f4;
};

struct S2 {
    int32_t *g_15[6][7];
    volatile int32_t g_22[6];
    int64_t g_34[8][9][3];
    int32_t g_48;
    int32_t g_60;
    int32_t g_74;
    int32_t *g_73[4][2][4];
    uint8_t g_100[10];
    uint8_t *g_99;
    uint16_t g_102;
    int8_t g_108[3][5][8];
    uint64_t g_114;
    int16_t g_133;
    int64_t g_135;
    int32_t g_140;
    struct S0 g_146[10][7];
    struct S0 *g_145;
    struct S0 g_205;
    struct S0 g_206;
    struct S0 g_207;
    struct S0 g_209;
    struct S0 *g_208;
    int16_t g_219[5][10][5];
    struct S0 g_264;
    struct S0 g_274[2];
    volatile union U1 *g_275;
    volatile int16_t g_296;
    volatile int16_t * volatile g_295;
    volatile int16_t g_298[9];
    volatile int16_t *g_297;
    volatile int16_t * volatile *g_294[9][7][4];
    volatile int16_t * volatile * volatile *g_293;
    int16_t *g_309;
    int16_t **g_308;
    int16_t g_318[1][7];
    uint64_t g_351;
    union U1 g_365;
    volatile uint32_t *g_368;
    volatile uint32_t * volatile *g_367;
    union U1 g_380[5];
    union U1 *g_379;
    union U1 **g_378;
    int16_t g_387;
    union U1 g_423;
    uint64_t g_511[4][4][9];
    uint8_t g_572;
    union U1 g_618;
    uint32_t g_659;
    struct S0 g_676;
    uint16_t * volatile g_720;
    uint16_t * volatile *g_719;
    uint32_t *g_749[7][5];
    uint64_t g_768;
    union U1 g_777;
    union U1 g_778;
    union U1 g_779;
    union U1 g_780;
    uint32_t g_894;
    int32_t g_956[6][3];
    int32_t *g_955;
    int32_t * volatile *g_954;
    uint32_t **g_997;
    struct S0 g_1005;
    uint16_t g_1069[9][9][3];
    uint16_t *g_1068;
    union U1 g_1072[10];
    union U1 g_1073;
    union U1 g_1074;
    union U1 g_1075;
    uint32_t *g_1168[8][1][5];
    struct S0 ***g_1256;
    volatile uint64_t g_1340[5][8];
    volatile uint64_t *g_1339;
    int32_t g_1370;
    struct S0 g_1375;
    union U1 g_1395;
    uint32_t g_1402;
    struct S0 g_1404[1][1];
    uint32_t g_1431;
    uint64_t *g_1437;
    uint64_t * volatile *g_1436;
    uint64_t * volatile **g_1435;
    volatile struct S0 *g_1540;
    uint32_t g_1619;
    int32_t **g_1760;
    int8_t g_1767;
    int64_t *g_1879;
    int64_t **g_1878;
    int32_t ** volatile g_1932[1];
    int32_t ** volatile g_1933;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S2 * p_1937);
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t * p_6, uint8_t  p_7, struct S2 * p_1937);
uint16_t  func_10(int32_t * p_11, int8_t  p_12, int32_t * p_13, int32_t * p_14, struct S2 * p_1937);
int8_t  func_28(uint32_t  p_29, uint32_t  p_30, int32_t * p_31, int8_t  p_32, int32_t * p_33, struct S2 * p_1937);
uint32_t  func_35(uint64_t  p_36, int8_t  p_37, uint32_t  p_38, int32_t * p_39, int32_t  p_40, struct S2 * p_1937);
uint64_t  func_41(uint32_t  p_42, uint16_t  p_43, int32_t  p_44, struct S2 * p_1937);
uint32_t  func_51(int64_t  p_52, uint32_t  p_53, int32_t * p_54, int64_t  p_55, struct S2 * p_1937);
int32_t * func_56(uint16_t  p_57, struct S2 * p_1937);
int32_t * func_71(int32_t * p_72, struct S2 * p_1937);
int8_t  func_79(int32_t * p_80, uint16_t  p_81, int32_t  p_82, int8_t  p_83, struct S2 * p_1937);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1937->g_15 p_1937->g_22 p_1937->g_34 p_1937->g_48 p_1937->g_60 p_1937->g_74 p_1937->g_99 p_1937->g_102 p_1937->g_100 p_1937->g_133 p_1937->g_145 p_1937->g_511 p_1937->g_274.f2 p_1937->g_351 p_1937->g_206.f4 p_1937->g_264.f3 p_1937->g_205.f0 p_1937->g_205.f5 p_1937->g_264.f4 p_1937->g_207.f3 p_1937->g_73 p_1937->g_219 p_1937->g_572 p_1937->g_205.f2 p_1937->g_209.f5 p_1937->g_378 p_1937->g_379 p_1937->g_135 p_1937->g_659 p_1937->g_209.f3 p_1937->g_205.f3 p_1937->g_207.f4 p_1937->g_274.f3 p_1937->g_146.f0 p_1937->g_207.f5 p_1937->g_676.f5 p_1937->g_318 p_1937->g_719 p_1937->g_206.f0 p_1937->g_264.f5 p_1937->g_108 p_1937->g_140 p_1937->g_206.f3 p_1937->g_274.f0 p_1937->g_146.f2 p_1937->g_264.f0 p_1937->g_387 p_1937->g_206.f5 p_1937->g_209.f4 p_1937->g_209.f2 p_1937->g_676.f0 p_1937->g_146.f4 p_1937->g_894 p_1937->g_780.f4 p_1937->g_777.f0 p_1937->g_205.f4 p_1937->g_778.f0 p_1937->g_954 p_1937->g_779.f0 p_1937->g_208 p_1937->g_618.f0 p_1937->g_956 p_1937->g_676.f3 p_1937->g_209.f0 p_1937->g_749 p_1937->g_1068 p_1937->g_1069 p_1937->g_365.f2 p_1937->g_780.f2 p_1937->g_1005.f4 p_1937->g_146.f5 p_1937->g_997 p_1937->g_676.f4 p_1937->g_676.f2 p_1937->g_1256 p_1937->g_955 p_1937->g_274.f5 p_1937->g_1339 p_1937->g_1073.f0 p_1937->g_274.f4 p_1937->g_1375.f2 p_1937->g_1402 p_1937->g_1431 p_1937->g_1435 p_1937->g_1437 p_1937->g_1436 p_1937->g_207.f0 p_1937->g_206.f2 p_1937->g_207.f2 p_1937->g_1005.f0 p_1937->g_1540 p_1937->g_1375.f4 p_1937->g_1072.f0 p_1937->g_146.f3 p_1937->g_1370 p_1937->g_1395.f0 p_1937->g_1404.f3 p_1937->g_295 p_1937->g_296 p_1937->g_367 p_1937->g_368 p_1937->g_1404.f0 p_1937->g_1933 p_1937->g_720
 * writes: p_1937->g_60 p_1937->g_73 p_1937->g_74 p_1937->g_102 p_1937->g_108 p_1937->g_114 p_1937->g_133 p_1937->g_135 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_100 p_1937->g_572 p_1937->g_205.f3 p_1937->g_209.f5 p_1937->g_264.f3 p_1937->g_209.f4 p_1937->g_659 p_1937->g_146.f0 p_1937->g_219 p_1937->g_264.f5 p_1937->g_749 p_1937->g_511 p_1937->g_209.f3 p_1937->g_768 p_1937->g_274.f0 p_1937->g_146.f4 p_1937->g_207.f4 p_1937->g_780.f2 p_1937->g_205.f0 p_1937->g_206.f5 p_1937->g_274.f5 p_1937->g_209.f2 p_1937->g_207.f3 p_1937->g_780.f4 p_1937->g_618.f0 p_1937->g_205.f4 p_1937->g_365.f2 p_1937->g_779.f0 p_1937->g_140 p_1937->g_777.f0 p_1937->g_48 p_1937->g_997 p_1937->g_676.f5 p_1937->g_1005.f5 p_1937->g_1068 p_1937->g_379 p_1937->g_207.f2 p_1937->g_1069 p_1937->g_99 p_1937->g_1168 p_1937->g_423.f2 p_1937->g_318 p_1937->g_778.f0 p_1937->g_209.f0 p_1937->g_779.f2 p_1937->g_1431 p_1937->g_206.f4 p_1937->g_894 p_1937->g_207.f0 p_1937->g_1402 p_1937->g_206.f2 p_1937->g_1005.f4 p_1937->g_264.f0 p_1937->g_1256 p_1937->g_676.f4 p_1937->g_378 p_1937->g_34 p_1937->g_1540 p_1937->g_206.f0 p_1937->g_1404.f0 p_1937->g_15 p_1937->g_956
 */
uint16_t  func_1(struct S2 * p_1937)
{ /* block id: 4 */
    uint8_t l_23 = 0x85L;
    int32_t *l_47 = &p_1937->g_48;
    uint32_t l_920 = 0UL;
    uint64_t *l_922 = &p_1937->g_618.f0;
    uint16_t l_923 = 1UL;
    int32_t **l_1931 = &l_47;
    int32_t *l_1934 = &p_1937->g_205.f0;
    (*p_1937->g_1933) = ((*l_1931) = func_2(((safe_div_func_uint16_t_u_u(func_10(p_1937->g_15[1][2], (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(p_1937->g_22[0], l_23)) >= (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(func_28(p_1937->g_34[2][0][2], func_35(((*l_922) = func_41((((safe_mul_func_uint8_t_u_u(((void*)0 != l_47), (safe_mod_func_uint32_t_u_u(func_51(p_1937->g_34[5][1][1], (*l_47), func_56((*l_47), p_1937), p_1937->g_777.f0, p_1937), l_920)))) , p_1937->g_206.f0) && (*l_47)), (*l_47), (*l_47), p_1937)), p_1937->g_205.f4, l_923, &p_1937->g_140, p_1937->g_778.f0, p_1937), l_47, p_1937->g_676.f3, l_47, p_1937), 4)), p_1937->g_1072[4].f0))) == (*p_1937->g_1437)), 1)), p_1937->g_146[9][2].f3)), l_47, l_47, p_1937), 65535UL)) != l_923), p_1937->g_1370, p_1937->g_207.f5, p_1937->g_955, p_1937->g_1395.f0, p_1937));
lbl_1936:
    if (p_1937->g_676.f4)
        goto lbl_1935;
lbl_1935:
    (**l_1931) = ((*l_1934) &= (*l_47));
    if (p_1937->g_207.f4)
        goto lbl_1936;
    return (*p_1937->g_720);
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_99 p_1937->g_100 p_1937->g_1404.f3 p_1937->g_511 p_1937->g_34 p_1937->g_295 p_1937->g_296 p_1937->g_1068 p_1937->g_1069 p_1937->g_102 p_1937->g_367 p_1937->g_368 p_1937->g_146.f0 p_1937->g_956 p_1937->g_1404.f0
 * writes: p_1937->g_34 p_1937->g_572 p_1937->g_1404.f0
 */
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t * p_6, uint8_t  p_7, struct S2 * p_1937)
{ /* block id: 903 */
    int64_t *l_1905 = &p_1937->g_34[6][7][2];
    int32_t l_1912[5][2];
    uint32_t l_1913 = 1UL;
    uint32_t *l_1914 = &p_1937->g_676.f4;
    int64_t ***l_1915 = (void*)0;
    uint8_t *l_1916 = &p_1937->g_572;
    int32_t *l_1917 = &p_1937->g_1404[0][0].f0;
    int32_t *l_1918 = &p_1937->g_206.f0;
    int32_t *l_1919 = &p_1937->g_274[1].f0;
    int32_t *l_1920 = &p_1937->g_1005.f0;
    int32_t *l_1921 = &p_1937->g_1005.f0;
    int32_t *l_1922 = &p_1937->g_205.f0;
    int32_t *l_1923 = &p_1937->g_1005.f5;
    int32_t *l_1924[6][9] = {{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0},{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0},{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0},{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0},{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0},{(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,(void*)0,&p_1937->g_146[9][2].f0,(void*)0,&p_1937->g_146[9][2].f0}};
    int32_t l_1925 = 0x3DE0E30DL;
    int16_t l_1926 = 5L;
    int32_t l_1927[3];
    uint32_t l_1928 = 4294967291UL;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1912[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_1927[i] = 0x44DDB84CL;
    (*l_1917) &= (((((p_3 >= (*p_1937->g_99)) > ((*l_1916) = (p_1937->g_1404[0][0].f3 || (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((((((((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((*l_1905) &= p_1937->g_511[1][0][0]), (safe_mul_func_int16_t_s_s((*p_1937->g_295), ((safe_sub_func_uint8_t_u_u((((*p_1937->g_99) == 0xC5L) <= (safe_rshift_func_uint8_t_u_u(l_1912[3][0], 5))), 1UL)) ^ p_5))))), (*p_1937->g_1068))), 1UL)) > l_1912[3][0]) && 3L), 0L)), l_1913)) , (*p_1937->g_367)) != l_1914) < l_1912[4][1]) >= 1UL) , &p_1937->g_34[6][7][1]) == &p_5) , p_5), p_1937->g_146[9][2].f0)) , &p_1937->g_1878) == l_1915), (-1L)))))) > p_3) <= (*p_1937->g_99)) && (*p_6));
    l_1928--;
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_10(int32_t * p_11, int8_t  p_12, int32_t * p_13, int32_t * p_14, struct S2 * p_1937)
{ /* block id: 900 */
    volatile int32_t *l_1890 = &p_1937->g_22[2];
    l_1890 = &p_1937->g_22[3];
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_676.f2 p_1937->g_205.f3 p_1937->g_894 p_1937->g_1068 p_1937->g_1069 p_1937->g_102 p_1937->g_99 p_1937->g_100 p_1937->g_209.f4 p_1937->g_48 p_1937->g_60 p_1937->g_676.f5 p_1937->g_1256 p_1937->g_205.f2 p_1937->g_207.f4 p_1937->g_146.f2 p_1937->g_955 p_1937->g_74 p_1937->g_146.f4 p_1937->g_207.f5 p_1937->g_274.f5 p_1937->g_1339 p_1937->g_209.f0 p_1937->g_1073.f0 p_1937->g_778.f0 p_1937->g_318 p_1937->g_511 p_1937->g_274.f4 p_1937->g_956 p_1937->g_133 p_1937->g_1375.f2 p_1937->g_378 p_1937->g_379 p_1937->g_1402 p_1937->g_1431 p_1937->g_1435 p_1937->g_1437 p_1937->g_274.f3 p_1937->g_1436 p_1937->g_676.f0 p_1937->g_207.f0 p_1937->g_146.f0 p_1937->g_206.f2 p_1937->g_1005.f4 p_1937->g_207.f2 p_1937->g_264.f0 p_1937->g_676.f4 p_1937->g_659 p_1937->g_1005.f0 p_1937->g_274.f0 p_1937->g_108 p_1937->g_264.f5 p_1937->g_387 p_1937->g_997 p_1937->g_749 p_1937->g_1540 p_1937->g_1375.f4 p_1937->g_206.f0
 * writes: p_1937->g_1069 p_1937->g_102 p_1937->g_48 p_1937->g_108 p_1937->g_207.f2 p_1937->g_423.f2 p_1937->g_676.f5 p_1937->g_100 p_1937->g_318 p_1937->g_73 p_1937->g_274.f5 p_1937->g_778.f0 p_1937->g_207.f4 p_1937->g_133 p_1937->g_209.f0 p_1937->g_387 p_1937->g_768 p_1937->g_779.f2 p_1937->g_1431 p_1937->g_206.f4 p_1937->g_894 p_1937->g_207.f0 p_1937->g_1402 p_1937->g_206.f2 p_1937->g_1005.f4 p_1937->g_264.f0 p_1937->g_1256 p_1937->g_676.f4 p_1937->g_378 p_1937->g_34 p_1937->g_1540 p_1937->g_206.f0
 */
int8_t  func_28(uint32_t  p_29, uint32_t  p_30, int32_t * p_31, int8_t  p_32, int32_t * p_33, struct S2 * p_1937)
{ /* block id: 527 */
    uint64_t *l_1192 = &p_1937->g_264.f3;
    uint64_t **l_1191[1][3][8] = {{{(void*)0,&l_1192,(void*)0,(void*)0,&l_1192,(void*)0,(void*)0,&l_1192},{(void*)0,&l_1192,(void*)0,(void*)0,&l_1192,(void*)0,(void*)0,&l_1192},{(void*)0,&l_1192,(void*)0,(void*)0,&l_1192,(void*)0,(void*)0,&l_1192}}};
    uint64_t ***l_1190 = &l_1191[0][2][7];
    uint64_t ***l_1194 = &l_1191[0][1][7];
    uint64_t ****l_1193 = &l_1194;
    uint64_t ****l_1195 = (void*)0;
    uint64_t ***l_1197 = &l_1191[0][2][7];
    uint64_t ****l_1196 = &l_1197;
    int32_t l_1208[7];
    int32_t l_1233 = 0x72FD46EBL;
    uint8_t **l_1253[6];
    uint32_t **l_1283[1];
    uint32_t l_1301 = 1UL;
    int32_t *l_1369 = &p_1937->g_1370;
    int32_t l_1376[1][3];
    int8_t l_1425 = (-10L);
    int64_t l_1430 = 0x2CDD76310E025179L;
    int32_t *l_1434 = &p_1937->g_207.f0;
    int8_t l_1469 = (-1L);
    int16_t l_1496 = 0L;
    int64_t l_1554 = 4L;
    uint64_t l_1558 = 0xB933AF32C7C20E32L;
    uint64_t l_1641 = 0xE88F2FFCE3D7B01CL;
    uint16_t l_1664 = 0xEBB8L;
    union U1 **l_1681 = &p_1937->g_379;
    uint16_t l_1785 = 0x886DL;
    uint8_t l_1815 = 255UL;
    uint32_t *l_1821 = &p_1937->g_146[9][2].f4;
    uint32_t **l_1820 = &l_1821;
    uint16_t l_1871[1];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1208[i] = 0x27D804FAL;
    for (i = 0; i < 6; i++)
        l_1253[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1283[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1376[i][j] = (-6L);
    }
    for (i = 0; i < 1; i++)
        l_1871[i] = 0x6946L;
    if (((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((0xBD1E008A85639B16L <= ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(p_1937->g_676.f2, p_1937->g_205.f3)), ((((l_1190 != ((*l_1196) = ((*l_1193) = &l_1191[0][0][5]))) >= (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s(p_1937->g_894, ((safe_mul_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((*p_1937->g_1068) ^= ((void*)0 == &p_1937->g_351)), p_30)) && 0x58F0E755L) && 0x56L) , l_1208[0]), 0xFEL)) > p_30))) == 18446744073709551613UL), 9)), (*p_1937->g_99)))) , l_1208[0]) >= 0x7EL))) , l_1208[5])), p_32)), 3)) < 0L))
    { /* block id: 531 */
        int8_t l_1215 = 0x3AL;
        int64_t *l_1232 = &p_1937->g_34[5][8][0];
        int8_t *l_1234 = &p_1937->g_108[0][4][5];
        int32_t l_1235 = 0L;
        uint8_t l_1279 = 255UL;
        int32_t l_1289 = (-8L);
        int32_t l_1291 = 0x1CEABE68L;
        int32_t l_1299[2][2][5] = {{{1L,0x0112B8C0L,0x0112B8C0L,1L,1L},{1L,0x0112B8C0L,0x0112B8C0L,1L,1L}},{{1L,0x0112B8C0L,0x0112B8C0L,1L,1L},{1L,0x0112B8C0L,0x0112B8C0L,1L,1L}}};
        uint64_t *l_1307 = &p_1937->g_778.f0;
        int i, j, k;
lbl_1377:
        (*p_33) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((0x2D4EL > p_30) || ((p_1937->g_209.f4 < (safe_lshift_func_uint16_t_u_u((*p_1937->g_1068), 12))) | l_1215)), 6)), 3));
        l_1235 ^= (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((*p_31) = (((safe_div_func_int8_t_s_s(0x3AL, ((*l_1234) = ((*p_33) ^ ((safe_add_func_uint32_t_u_u(((l_1208[0] != l_1215) < ((*p_1937->g_99) & (safe_sub_func_uint32_t_u_u(0x8F61F6C2L, (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1233 = (((p_1937->g_676.f2 , ((safe_div_func_int64_t_s_s(((void*)0 != l_1232), p_1937->g_60)) > l_1208[5])) ^ l_1215) < l_1215)), 0UL)), 0x5EDDL)))))), l_1208[5])) , l_1215))))) , p_29) , 0L)), l_1215)), l_1208[0]));
        for (p_1937->g_207.f2 = 0; (p_1937->g_207.f2 <= 6); p_1937->g_207.f2 += 1)
        { /* block id: 539 */
            int32_t l_1243 = 9L;
            int32_t l_1290 = 7L;
            int32_t l_1293 = (-1L);
            int32_t l_1294 = 0L;
            int32_t l_1295 = (-8L);
            int32_t l_1296[8][7][4] = {{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}},{{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL},{(-1L),(-9L),0x354182CAL,0x64059FABL}}};
            uint32_t l_1373 = 4294967286UL;
            struct S0 *l_1374 = &p_1937->g_1375;
            uint8_t l_1382 = 0x4EL;
            int i, j, k;
            for (p_1937->g_423.f2 = 0; (p_1937->g_423.f2 <= 6); p_1937->g_423.f2 += 1)
            { /* block id: 542 */
                int32_t *l_1236 = &p_1937->g_676.f5;
                uint8_t *l_1241 = (void*)0;
                uint8_t *l_1242 = (void*)0;
                int64_t l_1288 = 7L;
                int32_t l_1292[7] = {5L,0x16088E12L,5L,5L,0x16088E12L,5L,5L};
                uint64_t **l_1316 = (void*)0;
                int32_t *l_1378 = (void*)0;
                int32_t *l_1379 = (void*)0;
                int32_t *l_1380 = &p_1937->g_207.f0;
                int32_t *l_1381[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1381[i] = &l_1376[0][0];
                (*l_1236) |= (l_1208[0] = ((*p_31) = (*p_33)));
                if ((safe_mod_func_int8_t_s_s(1L, (l_1243 = (++(*p_1937->g_99))))))
                { /* block id: 548 */
                    int32_t l_1248 = (-1L);
                    int8_t *l_1259 = (void*)0;
                    uint32_t *l_1263 = (void*)0;
                    uint32_t **l_1262 = &l_1263;
                    if ((*p_33))
                    { /* block id: 549 */
                        int16_t *l_1260 = &p_1937->g_318[0][2];
                        int32_t l_1261 = (-2L);
                        l_1235 ^= ((safe_add_func_uint64_t_u_u(((((((!(safe_add_func_uint16_t_u_u(p_30, l_1248))) ^ (!(((safe_add_func_uint16_t_u_u((7UL | (safe_sub_func_uint32_t_u_u((((((void*)0 == l_1253[0]) != (safe_mul_func_int16_t_s_s(((p_1937->g_1256 == ((safe_div_func_uint32_t_u_u(((((*l_1260) = (((&p_1937->g_108[0][0][3] == l_1259) != l_1233) || 7L)) >= p_29) <= p_30), p_1937->g_205.f2)) , (void*)0)) < p_1937->g_207.f4), l_1261))) <= l_1243) ^ 0x7C599B91L), (*p_31)))), p_30)) < 3UL) , p_1937->g_207.f4))) ^ 65532UL) , l_1262) != (void*)0) >= p_29), 4L)) || 1L);
                        if (l_1248)
                            break;
                    }
                    else
                    { /* block id: 553 */
                        int32_t **l_1264 = &p_1937->g_73[1][0][1];
                        (*l_1264) = &p_1937->g_74;
                        (*l_1264) = &l_1233;
                        l_1235 = ((((safe_div_func_int16_t_s_s(p_29, ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_1241 != (void*)0) ^ (p_30 , (safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((p_1937->g_146[9][2].f2 >= p_29) > ((safe_mul_func_int16_t_s_s((~l_1279), 0x1F26L)) == 0L)), (*p_33))), p_29)), 0xEB9BL)))), p_32)), 3UL)) && (-1L)))) != 0UL) , (*p_1937->g_1068)) , 0x24D69F82L);
                    }
                    l_1208[3] = (safe_sub_func_uint16_t_u_u(p_29, (p_32 & ((void*)0 != p_1937->g_955))));
                    (*p_31) = (*p_33);
                }
                else
                { /* block id: 560 */
                    uint64_t ***l_1282 = &l_1191[0][2][7];
                    int32_t l_1284 = 1L;
                    int32_t l_1286 = 0x71596AC8L;
                    int32_t l_1287 = 0x1C2974AFL;
                    int32_t l_1297 = (-1L);
                    int32_t l_1298 = 0x3191FEDBL;
                    int32_t l_1300 = 0x6F3E3920L;
                    if (((((void*)0 == l_1282) , (void*)0) == l_1283[0]))
                    { /* block id: 561 */
                        int32_t *l_1285[10] = {&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0,&p_1937->g_207.f0};
                        int i;
                        ++l_1301;
                    }
                    else
                    { /* block id: 563 */
                        int32_t l_1304 = 2L;
                        int32_t *l_1331 = &p_1937->g_274[1].f5;
                        int32_t **l_1332 = &p_1937->g_73[3][0][2];
                        l_1304 ^= (*p_33);
                        (*l_1331) |= (safe_add_func_uint16_t_u_u((l_1307 != l_1307), (((safe_div_func_uint32_t_u_u(((l_1233 , (((--(*p_1937->g_1068)) | ((safe_add_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((((void*)0 == l_1316) , p_30), (l_1300 & ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((*p_31) || (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_1299[0][1][4] = ((*l_1236) |= ((safe_mul_func_uint16_t_u_u(p_32, p_30)) , 18446744073709551612UL))) ^ 0xA2BD08333BE639E7L), p_29)), p_29))), p_1937->g_74)), 0xAA1A5467A448C411L)), 11)), p_1937->g_146[9][2].f4)) , (*p_1937->g_99))))) >= l_1304) , p_30), p_30)) == 18446744073709551614UL)) | 0x21AF75D17FF0FA7EL)) & 0xF4L), (*p_33))) ^ p_1937->g_207.f5) , p_30)));
                        (*l_1332) = &p_1937->g_74;
                        (*l_1332) = (((0x6AL > (~(((l_1300 & ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((l_1215 , ((safe_sub_func_int16_t_s_s((p_1937->g_1339 != (void*)0), (safe_sub_func_uint8_t_u_u(((l_1291 || ((safe_sub_func_int8_t_s_s(((*l_1331) , ((p_1937->g_209.f0 != ((l_1233 = (!((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((4L | 0xA7F5EF20C917CA4DL), 3)) <= l_1296[6][4][0]) | p_29), 65535UL)) != (*l_1331)))) & 1UL)) <= 0xB214L)), (*p_1937->g_99))) | 0x51L)) , p_30), (*p_1937->g_99))))) >= (*l_1236))) || p_32) || p_32), p_29)), (*p_1937->g_1068))) , 0x7CL)) <= p_30) <= 0xA6778351A6FEF05EL))) , p_1937->g_1073.f0) , (void*)0);
                    }
                    l_1376[0][0] &= (safe_mul_func_uint8_t_u_u((l_1235 = (((*l_1234) = (l_1279 >= ((p_32 || (((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((l_1208[5] | (safe_add_func_int64_t_s_s(l_1284, (safe_lshift_func_int8_t_s_s((((((((*l_1236) | (p_30 ^ ((((*p_1937->g_1068) = (p_33 == l_1369)) == (safe_rshift_func_int16_t_s_u((((((*l_1307) &= 0UL) , p_1937->g_318[0][3]) >= p_1937->g_511[0][3][2]) , 4L), l_1373))) == 0x1340L))) < l_1233) && (*p_33)) && 0xE224C221L) , l_1374) != (void*)0), p_32))))), p_1937->g_274[1].f4)), 1)) < p_30) <= p_30), 11)), 2)), 0)) ^ p_29), l_1215)) < l_1299[0][1][4]) | l_1300)) <= p_30))) | (*l_1236))), p_29));
                    if (p_1937->g_676.f2)
                        goto lbl_1377;
                }
                --l_1382;
                for (p_1937->g_207.f4 = 0; (p_1937->g_207.f4 <= 2); p_1937->g_207.f4 += 1)
                { /* block id: 583 */
                    int32_t **l_1385 = &l_1236;
                    (*l_1385) = p_33;
                    for (p_1937->g_48 = 2; (p_1937->g_48 >= 0); p_1937->g_48 -= 1)
                    { /* block id: 587 */
                        int i, j;
                        return p_1937->g_956[(p_1937->g_48 + 2)][p_1937->g_207.f4];
                    }
                }
            }
            return p_1937->g_274[1].f4;
        }
    }
    else
    { /* block id: 594 */
        int32_t **l_1386 = (void*)0;
        int32_t **l_1387 = &p_1937->g_73[3][0][2];
        union U1 **l_1391 = &p_1937->g_379;
        int32_t l_1408 = 0x0FBDA195L;
        int32_t l_1410[7];
        int64_t l_1420 = 0x0C148A4157E55E14L;
        int64_t l_1427 = 0x720690A82EFE4154L;
        int32_t *l_1468[8][9][3] = {{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}},{{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74},{&p_1937->g_1404[0][0].f0,(void*)0,&p_1937->g_74}}};
        uint32_t l_1470 = 0x544448DEL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1410[i] = 0x3DBC34D9L;
lbl_1392:
        (*l_1387) = &p_1937->g_74;
        for (p_1937->g_133 = 0; (p_1937->g_133 <= 0); p_1937->g_133 += 1)
        { /* block id: 598 */
            uint32_t l_1388 = 0x24C21360L;
            int32_t *l_1389 = &p_1937->g_209.f0;
            int32_t *l_1390 = &l_1208[1];
            uint16_t l_1400[8][2][8] = {{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}},{{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL},{0xA7BFL,1UL,0x5AA4L,65535UL,0xEE6CL,0xD213L,0xAFF8L,0x0BEAL}}};
            int32_t l_1409 = (-9L);
            int32_t l_1413 = (-1L);
            int32_t l_1416 = 1L;
            int32_t l_1418 = 3L;
            int32_t l_1419 = (-7L);
            int32_t l_1422 = 9L;
            int32_t l_1423 = 0x645A55C1L;
            int32_t l_1424 = 0x1A2288E9L;
            int32_t l_1426[9];
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1426[i] = 0L;
            (*l_1390) ^= ((*l_1389) = (l_1388 = ((*p_33) = 0L)));
            for (p_1937->g_102 = 0; (p_1937->g_102 <= 0); p_1937->g_102 += 1)
            { /* block id: 605 */
                int i, j;
                l_1376[p_1937->g_133][p_1937->g_133] = ((void*)0 != l_1391);
                for (p_1937->g_387 = 0; (p_1937->g_387 <= 0); p_1937->g_387 += 1)
                { /* block id: 609 */
                    int i, j;
                    (*l_1387) = &l_1376[p_1937->g_387][(p_1937->g_133 + 1)];
                }
                if ((*p_33))
                    break;
            }
            for (p_1937->g_768 = 0; (p_1937->g_768 <= 0); p_1937->g_768 += 1)
            { /* block id: 616 */
                if (p_1937->g_133)
                    goto lbl_1392;
                return p_1937->g_1375.f2;
            }
            for (p_1937->g_779.f2 = 0; (p_1937->g_779.f2 <= 0); p_1937->g_779.f2 += 1)
            { /* block id: 622 */
                union U1 *l_1394 = &p_1937->g_1395;
                union U1 **l_1393 = &l_1394;
                int32_t l_1401 = 0x1939FE7DL;
                struct S0 *l_1403 = &p_1937->g_1404[0][0];
                int32_t l_1412[6] = {7L,(-6L),7L,7L,(-6L),7L};
                int16_t l_1428 = 0x339FL;
                int i;
                if ((((*p_1937->g_378) != ((*l_1393) = (*l_1391))) > (safe_sub_func_int64_t_s_s(p_29, ((safe_mod_func_int32_t_s_s(((-8L) != ((*p_33) , ((*p_1937->g_99) &= 0xEFL))), l_1400[3][0][1])) , ((((((0x4B5DL < ((p_29 == l_1401) >= l_1376[0][0])) >= 0UL) < p_30) || 4L) | p_29) <= p_1937->g_1402))))))
                { /* block id: 625 */
                    struct S0 **l_1405 = &l_1403;
                    int32_t l_1406 = 0x2D8E7C80L;
                    int32_t l_1411 = 0L;
                    int32_t l_1414 = 9L;
                    int32_t l_1415[10];
                    int8_t l_1417 = 0L;
                    int16_t l_1429 = 0x19F7L;
                    uint64_t ****l_1449 = &l_1197;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1415[i] = 0x61A1D427L;
                    (*l_1405) = l_1403;
                    if ((*p_31))
                        continue;
                    if ((*l_1390))
                    { /* block id: 628 */
                        int32_t *l_1407[10][8][3] = {{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}},{{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0},{&p_1937->g_48,&p_1937->g_48,(void*)0}}};
                        int8_t l_1421 = (-5L);
                        int i, j, k;
                        --p_1937->g_1431;
                    }
                    else
                    { /* block id: 630 */
                        if (p_1937->g_205.f3)
                            goto lbl_1392;
                        (*l_1387) = l_1434;
                    }
                    for (p_1937->g_206.f4 = 0; (p_1937->g_206.f4 <= 2); p_1937->g_206.f4 += 1)
                    { /* block id: 636 */
                        int8_t *l_1446 = &l_1417;
                        uint32_t *l_1452 = &p_1937->g_894;
                        int32_t l_1467 = (-1L);
                        int i;
                        (*l_1390) = ((void*)0 == p_1937->g_1435);
                        (*p_31) = ((safe_add_func_int64_t_s_s(((*l_1390) , ((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((*l_1446) = p_30), ((safe_sub_func_uint16_t_u_u((l_1449 == &p_1937->g_1435), ((safe_rshift_func_int16_t_s_s(0x66E6L, l_1401)) == (l_1412[0] |= ((((*l_1452) = p_32) < (((*p_1937->g_99) &= (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s(((~((safe_mod_func_int16_t_s_s(l_1406, ((safe_sub_func_int16_t_s_s(((*l_1390) < (*p_1937->g_1437)), 0L)) , 0x4AD2L))) != 0x2A6BL)) >= (**p_1937->g_1436)), p_29)) == p_1937->g_676.f0) >= p_29), 1UL)), 7)), p_29)) == (*l_1390)) || p_29), (*p_31)))) == p_30)) == 0x9DL))))) != 0xBC5CE9D79B445B49L))), (***p_1937->g_1435))), p_29)) , 0L)), p_32)) , l_1467);
                        (*l_1434) |= ((*l_1389) = ((*p_33) &= 0x52F8AFD6L));
                    }
                }
                else
                { /* block id: 647 */
                    return p_30;
                }
            }
        }
        ++l_1470;
    }
    (*l_1434) = ((*l_1434) & 0UL);
    if ((*p_33))
    { /* block id: 655 */
        struct S0 **l_1498 = &p_1937->g_208;
        struct S0 ***l_1497 = &l_1498;
        int32_t l_1500 = 0x15F04C86L;
        int32_t l_1513[3];
        union U1 **l_1524 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_1513[i] = (-1L);
        for (p_1937->g_1402 = 10; (p_1937->g_1402 < 39); p_1937->g_1402 = safe_add_func_uint32_t_u_u(p_1937->g_1402, 4))
        { /* block id: 658 */
            int16_t **l_1479[1];
            int32_t l_1502 = 0x6582CFAEL;
            uint32_t l_1509 = 0x1D2EF7BAL;
            uint64_t ***l_1514 = &l_1191[0][0][0];
            int i;
            for (i = 0; i < 1; i++)
                l_1479[i] = &p_1937->g_309;
            for (l_1430 = (-20); (l_1430 == 27); l_1430++)
            { /* block id: 661 */
                return p_1937->g_146[9][2].f0;
            }
            l_1479[0] = l_1479[0];
            for (p_1937->g_894 = (-10); (p_1937->g_894 > 2); p_1937->g_894 = safe_add_func_uint16_t_u_u(p_1937->g_894, 1))
            { /* block id: 667 */
                union U1 ***l_1515 = (void*)0;
                union U1 ***l_1516 = (void*)0;
                union U1 ***l_1517 = &p_1937->g_378;
                int64_t *l_1520 = &p_1937->g_34[2][8][0];
                int32_t l_1523 = 7L;
                int32_t *l_1525 = &l_1233;
                for (p_1937->g_206.f2 = 0; (p_1937->g_206.f2 == (-23)); p_1937->g_206.f2 = safe_sub_func_int8_t_s_s(p_1937->g_206.f2, 8))
                { /* block id: 670 */
                    uint16_t l_1491[10][3] = {{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL},{0x3708L,65535UL,65535UL}};
                    int i, j;
                    for (p_1937->g_1005.f4 = (-26); (p_1937->g_1005.f4 <= 14); ++p_1937->g_1005.f4)
                    { /* block id: 673 */
                        uint32_t l_1486 = 4294967295UL;
                        l_1486++;
                        (*p_31) = (-1L);
                    }
                    for (p_1937->g_207.f2 = (-22); (p_1937->g_207.f2 == (-21)); p_1937->g_207.f2 = safe_add_func_int64_t_s_s(p_1937->g_207.f2, 6))
                    { /* block id: 679 */
                        if (l_1491[2][1])
                            break;
                    }
                    for (p_1937->g_264.f0 = 21; (p_1937->g_264.f0 == (-27)); p_1937->g_264.f0--)
                    { /* block id: 684 */
                        struct S0 ***l_1499 = (void*)0;
                        int32_t **l_1501[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        p_33 = ((safe_add_func_int32_t_s_s(((l_1496 , l_1497) != (p_1937->g_1256 = l_1499)), l_1500)) , p_33);
                        return l_1502;
                    }
                    for (p_1937->g_676.f4 = 0; (p_1937->g_676.f4 > 23); p_1937->g_676.f4++)
                    { /* block id: 691 */
                        uint32_t l_1512[4][10][6] = {{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}},{{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}}};
                        int i, j, k;
                        l_1513[2] &= (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((-7L), ((*p_33) = ((l_1509 && (((p_32 , ((p_32 != (safe_add_func_uint32_t_u_u((((*p_1937->g_1068) = ((l_1512[1][8][4] >= ((l_1491[4][1] > ((0xA848L <= (p_1937->g_659 == l_1500)) ^ p_32)) >= p_1937->g_1005.f0)) < (*p_33))) < p_30), (*p_31)))) < 1L)) , 0x1A2ED380F86C4AE5L) || 18446744073709551615UL)) | 2UL)))), p_32));
                        return l_1500;
                    }
                }
                (*l_1525) &= (l_1513[1] > ((((void*)0 != l_1514) >= (((*l_1517) = &p_1937->g_379) == ((((safe_mul_func_uint8_t_u_u((((*p_31) & (((*l_1520) = p_32) <= (((safe_rshift_func_int16_t_s_u((p_30 <= ((((*p_1937->g_1068) < p_32) != l_1502) & l_1523)), (*l_1434))) >= 0UL) <= 9UL))) | p_29), 0xF4L)) & 0x71C1A1BDL) & (*l_1434)) , l_1524))) >= l_1509));
                if ((*l_1434))
                    continue;
                if ((*l_1434))
                { /* block id: 702 */
                    uint8_t l_1526 = 0xF8L;
                    return l_1526;
                }
                else
                { /* block id: 704 */
                    uint32_t l_1533 = 4294967294UL;
                    volatile struct S0 **l_1541 = &p_1937->g_1540;
                    (*p_33) = ((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_1937->g_274[1].f0, (l_1533 > (((((0x6FA3886F63C1A1C9L ^ (safe_rshift_func_int16_t_s_u(0x7CF3L, p_32))) < p_1937->g_108[2][3][7]) <= ((p_1937->g_264.f5 , (p_1937->g_387 &= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_30, 8)), (((6UL ^ 0x754AL) >= 0L) < (*l_1525)))))) != 0xE7A6L)) , (*p_1937->g_997)) != (void*)0)))), 0xD74E71B71D8E3796L)), p_32)) , (*p_33));
                    (*l_1541) = p_1937->g_1540;
                }
            }
        }
    }
    else
    { /* block id: 711 */
        int32_t l_1542 = (-1L);
        int16_t l_1547 = 1L;
        int64_t *l_1552 = &l_1430;
        int32_t *l_1553[2];
        uint64_t **l_1555 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1553[i] = (void*)0;
        l_1554 &= ((&p_1937->g_1402 != (((***p_1937->g_1435) != (l_1542 , (**p_1937->g_1436))) , &p_1937->g_1402)) == ((*l_1552) ^= (safe_div_func_uint16_t_u_u(0xDB97L, (((safe_sub_func_uint64_t_u_u(((((l_1547 <= (((safe_mul_func_uint8_t_u_u((1UL | ((*p_31) = (safe_sub_func_int16_t_s_s(0x6948L, p_30)))), p_29)) && p_1937->g_1375.f2) , (*l_1434))) , p_29) == (*l_1434)) == 18446744073709551615UL), 0L)) , 0x6CA5725700B08296L) | p_30)))));
        (**l_1196) = l_1555;
        return p_1937->g_1375.f4;
    }
    for (p_1937->g_206.f0 = 0; (p_1937->g_206.f0 <= (-7)); p_1937->g_206.f0 = safe_sub_func_int64_t_s_s(p_1937->g_206.f0, 1))
    { /* block id: 720 */
        uint32_t l_1563 = 0UL;
        int32_t l_1581 = (-1L);
        int32_t l_1582 = 9L;
        int32_t l_1584 = (-1L);
        int32_t l_1585[9] = {(-7L),(-1L),(-7L),(-7L),(-1L),(-7L),(-7L),(-1L),(-7L)};
        uint16_t l_1589 = 65535UL;
        uint64_t l_1669 = 0x500D41304DFDF332L;
        uint8_t **l_1726 = &p_1937->g_99;
        int32_t l_1752 = (-1L);
        int32_t **l_1759 = &p_1937->g_955;
        int32_t *l_1762 = &p_1937->g_264.f5;
        uint32_t l_1796 = 0x901B980BL;
        uint32_t l_1797 = 1UL;
        int64_t *l_1855 = &p_1937->g_1005.f2;
        int32_t l_1858 = 0x71A10D38L;
        int64_t ***l_1880 = (void*)0;
        int64_t **l_1881 = &l_1855;
        int64_t **l_1882 = &l_1855;
        int32_t l_1889 = (-4L);
        int i;
        (1 + 1);
    }
    return (*l_1434);
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_102 p_1937->g_99 p_1937->g_100 p_1937->g_135 p_1937->g_207.f3 p_1937->g_205.f3 p_1937->g_206.f4 p_1937->g_954 p_1937->g_779.f0 p_1937->g_140 p_1937->g_378 p_1937->g_379 p_1937->g_208 p_1937->g_74 p_1937->g_618.f0 p_1937->g_777.f0 p_1937->g_34 p_1937->g_133 p_1937->g_145 p_1937->g_511 p_1937->g_274.f2 p_1937->g_351 p_1937->g_264.f3 p_1937->g_205.f0 p_1937->g_205.f5 p_1937->g_264.f4 p_1937->g_73 p_1937->g_219 p_1937->g_572 p_1937->g_205.f2 p_1937->g_209.f5 p_1937->g_659 p_1937->g_209.f3 p_1937->g_207.f4 p_1937->g_274.f3 p_1937->g_146.f0 p_1937->g_207.f5 p_1937->g_676.f5 p_1937->g_318 p_1937->g_719 p_1937->g_206.f0 p_1937->g_264.f5 p_1937->g_108 p_1937->g_206.f3 p_1937->g_274.f0 p_1937->g_146.f2 p_1937->g_264.f0 p_1937->g_206.f5 p_1937->g_209.f4 p_1937->g_48 p_1937->g_676.f0 p_1937->g_146.f4 p_1937->g_894 p_1937->g_956 p_1937->g_676.f3 p_1937->g_209.f0 p_1937->g_749 p_1937->g_1068 p_1937->g_1069 p_1937->g_205.f4 p_1937->g_780.f2 p_1937->g_1005.f4 p_1937->g_146.f5 p_1937->g_997 p_1937->g_676.f4 p_1937->g_365.f2
 * writes: p_1937->g_102 p_1937->g_100 p_1937->g_135 p_1937->g_205.f3 p_1937->g_205.f4 p_1937->g_365.f2 p_1937->g_779.f0 p_1937->g_73 p_1937->g_140 p_1937->g_777.f0 p_1937->g_48 p_1937->g_997 p_1937->g_108 p_1937->g_74 p_1937->g_114 p_1937->g_133 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_572 p_1937->g_209.f5 p_1937->g_264.f3 p_1937->g_209.f4 p_1937->g_659 p_1937->g_146.f0 p_1937->g_219 p_1937->g_264.f5 p_1937->g_749 p_1937->g_511 p_1937->g_209.f3 p_1937->g_768 p_1937->g_274.f0 p_1937->g_146.f4 p_1937->g_207.f4 p_1937->g_780.f2 p_1937->g_205.f0 p_1937->g_206.f5 p_1937->g_274.f5 p_1937->g_209.f2 p_1937->g_207.f3 p_1937->g_780.f4 p_1937->g_676.f5 p_1937->g_1005.f5 p_1937->g_1068 p_1937->g_379 p_1937->g_207.f2 p_1937->g_1069 p_1937->g_99 p_1937->g_1168
 */
uint32_t  func_35(uint64_t  p_36, int8_t  p_37, uint32_t  p_38, int32_t * p_39, int32_t  p_40, struct S2 * p_1937)
{ /* block id: 383 */
    uint16_t *l_924 = &p_1937->g_102;
    int32_t l_929 = (-1L);
    uint64_t *l_930[1][8][8] = {{{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]},{&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0],&p_1937->g_511[1][0][0]}}};
    int32_t l_931 = 0x6272102CL;
    union U1 **l_948 = &p_1937->g_379;
    union U1 **l_949[3][6] = {{&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379},{&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379},{&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379,&p_1937->g_379}};
    int64_t *l_950 = &p_1937->g_135;
    int8_t l_951 = 0x1DL;
    int16_t l_968[7][1] = {{0x7A0BL},{0x7A0BL},{0x7A0BL},{0x7A0BL},{0x7A0BL},{0x7A0BL},{0x7A0BL}};
    int32_t l_985 = (-9L);
    int32_t l_986 = 0x22C8E63BL;
    int32_t l_987 = 0x74212CD1L;
    int32_t l_988 = 0x5CD62D2AL;
    uint32_t **l_996 = &p_1937->g_749[4][3];
    struct S0 *l_1004 = &p_1937->g_1005;
    int32_t l_1052 = 0x4A92EFBDL;
    uint16_t *l_1067[8] = {&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,&p_1937->g_102};
    int8_t l_1082 = 0x03L;
    int32_t l_1098 = (-3L);
    int32_t **l_1103 = (void*)0;
    int16_t l_1104[2][3] = {{0x245DL,1L,0x245DL},{0x245DL,1L,0x245DL}};
    uint32_t l_1105 = 0UL;
    int64_t *l_1106 = &p_1937->g_207.f2;
    int32_t l_1127 = 0x0E15332BL;
    int32_t l_1128[7];
    uint32_t l_1130 = 0x8857EB9FL;
    uint8_t l_1161[9];
    uint32_t *l_1167 = &p_1937->g_659;
    uint32_t **l_1166[7][6][2] = {{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}},{{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167},{&l_1167,&l_1167}}};
    uint32_t l_1179[6] = {0x21E7756DL,0UL,0x21E7756DL,0x21E7756DL,0UL,0x21E7756DL};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1128[i] = 0x02371B31L;
    for (i = 0; i < 9; i++)
        l_1161[i] = 246UL;
lbl_1087:
    if ((((--(*l_924)) <= (safe_div_func_int32_t_s_s(l_929, ((((l_931 = 0x896538414A07E854L) | ((void*)0 != &l_924)) , (0UL < ((((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((((safe_div_func_uint64_t_u_u((p_1937->g_205.f3 |= (l_924 != (((safe_add_func_int64_t_s_s(((safe_div_func_int64_t_s_s(((*l_950) ^= (safe_mul_func_uint8_t_u_u(((((*p_1937->g_99) = (*p_1937->g_99)) , p_36) | ((((safe_sub_func_uint32_t_u_u((l_931 = (safe_sub_func_int16_t_s_s(0x278EL, p_36))), 1L)) , p_37) , l_948) != l_949[0][2])), 7UL))), p_1937->g_207.f3)) <= p_37), p_38)) & p_37) , l_924))), 18446744073709551614UL)) && p_37) , 1UL) < l_929), 1L)), 255UL)) > p_1937->g_206.f4) & 0x6FL) || l_929))) && l_951)))) && 0x87F776FFL))
    { /* block id: 390 */
        int32_t * volatile *l_958[2][7][7] = {{{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955}},{{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955},{(void*)0,&p_1937->g_955,&p_1937->g_955,(void*)0,(void*)0,&p_1937->g_955,&p_1937->g_955}}};
        int32_t l_966 = (-4L);
        int32_t l_973 = 0x137F842BL;
        int32_t l_983[4] = {(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        for (p_1937->g_205.f4 = 14; (p_1937->g_205.f4 <= 48); ++p_1937->g_205.f4)
        { /* block id: 393 */
            return l_929;
        }
        for (p_1937->g_365.f2 = 2; (p_1937->g_365.f2 <= 9); p_1937->g_365.f2 += 1)
        { /* block id: 398 */
            int32_t * volatile **l_957 = (void*)0;
            union U1 **l_959 = &p_1937->g_379;
            uint64_t *l_960 = &p_1937->g_779.f0;
            int32_t l_965 = 8L;
            uint32_t *l_967[6] = {&p_1937->g_894,&p_1937->g_894,&p_1937->g_894,&p_1937->g_894,&p_1937->g_894,&p_1937->g_894};
            int32_t l_974 = 0x78890FF7L;
            int32_t l_984[2][10][7] = {{{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L}},{{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L},{(-8L),(-8L),0x68132F19L,9L,0x04CF23B6L,9L,0x68132F19L}}};
            int i, j, k;
            l_958[0][0][3] = p_1937->g_954;
            if ((0x1D1586E4L && (p_38 = ((((((&p_1937->g_379 == l_959) , (((((*l_960)--) , (safe_mul_func_uint16_t_u_u((((void*)0 != &l_958[0][0][3]) , 0xD52BL), ((((void*)0 != &p_1937->g_955) == (-1L)) | l_951)))) , l_965) , l_951)) , p_36) != p_37) < l_966) , l_966))))
            { /* block id: 402 */
                int32_t *l_969 = (void*)0;
                int32_t *l_970 = &l_931;
                int32_t *l_971 = &p_1937->g_205.f0;
                int32_t *l_972[9][1] = {{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5},{&p_1937->g_264.f5}};
                uint32_t l_975[4][3];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_975[i][j] = 3UL;
                }
                --l_975[0][2];
            }
            else
            { /* block id: 404 */
                int16_t l_979 = 0x0E49L;
                int32_t *l_980 = &p_1937->g_206.f0;
                int32_t *l_981 = (void*)0;
                int32_t *l_982[5] = {&p_1937->g_676.f0,&p_1937->g_676.f0,&p_1937->g_676.f0,&p_1937->g_676.f0,&p_1937->g_676.f0};
                uint32_t l_989[7][9] = {{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL},{4294967290UL,0UL,0UL,0UL,4294967290UL,4294967290UL,0UL,0UL,0UL}};
                int i, j;
                for (l_965 = 3; (l_965 <= 9); l_965 += 1)
                { /* block id: 407 */
                    int32_t **l_978 = &p_1937->g_73[2][0][2];
                    (*l_978) = &p_1937->g_140;
                    l_929 ^= ((*p_39) = (*p_39));
                }
                l_989[5][5]--;
            }
        }
        (*p_39) = ((*p_1937->g_378) != (void*)0);
    }
    else
    { /* block id: 416 */
        int32_t *l_995 = &p_1937->g_206.f5;
        int32_t *l_1027 = (void*)0;
        uint64_t **l_1078 = &l_930[0][7][0];
        int8_t l_1085 = 5L;
        int32_t **l_1086 = &p_1937->g_73[1][1][0];
        for (p_36 = (-13); (p_36 == 38); p_36 = safe_add_func_uint64_t_u_u(p_36, 6))
        { /* block id: 419 */
            int32_t **l_994[6];
            uint16_t *l_1070 = &p_1937->g_1069[0][6][2];
            int i;
            for (i = 0; i < 6; i++)
                l_994[i] = &p_1937->g_73[3][0][2];
            l_995 = &p_1937->g_74;
            for (p_1937->g_777.f0 = 2; (p_1937->g_777.f0 <= 9); p_1937->g_777.f0 += 1)
            { /* block id: 423 */
                int32_t l_1002[4];
                uint16_t **l_1006 = (void*)0;
                int64_t l_1021 = 0x5C3D84F41D493073L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1002[i] = 7L;
                for (p_1937->g_48 = 2; (p_1937->g_48 >= 0); p_1937->g_48 -= 1)
                { /* block id: 426 */
                    int8_t *l_1003 = &p_1937->g_108[2][2][6];
                    uint16_t **l_1008 = &l_924;
                    uint16_t ***l_1007 = &l_1008;
                    int32_t *l_1026 = &p_1937->g_146[9][2].f5;
                    int32_t l_1028 = (-1L);
                    p_1937->g_997 = l_996;
                    (*l_995) ^= (((safe_lshift_func_int8_t_s_s(((*l_1003) = (safe_rshift_func_uint16_t_u_u(l_1002[3], 7))), 7)) , l_1004) != ((l_1006 == ((*l_1007) = l_1006)) , p_1937->g_208));
                    l_1028 ^= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((0x0542L > (p_38 ^ ((safe_rshift_func_int8_t_s_u(((*l_995) , (safe_rshift_func_int8_t_s_u(l_1021, ((l_1026 = func_71((((p_1937->g_618.f0 >= (safe_lshift_func_uint16_t_u_s(((*l_924) &= ((~(p_1937->g_777.f0 & ((0L || (safe_sub_func_uint16_t_u_u(l_1021, ((void*)0 != &p_1937->g_378)))) , 0x68L))) , p_37)), 14))) | (*l_995)) , (void*)0), p_1937)) != l_1027)))), 6)) & p_1937->g_205.f2))), p_40)), p_36)), 11)), 13));
                }
                l_1002[3] = (*p_39);
            }
            for (p_1937->g_676.f5 = 0; (p_1937->g_676.f5 <= 2); p_1937->g_676.f5 += 1)
            { /* block id: 439 */
                uint32_t l_1037 = 0xB3B9B54EL;
                union U1 *l_1071[4][4] = {{&p_1937->g_1075,&p_1937->g_1074,(void*)0,&p_1937->g_1074},{&p_1937->g_1075,&p_1937->g_1074,(void*)0,&p_1937->g_1074},{&p_1937->g_1075,&p_1937->g_1074,(void*)0,&p_1937->g_1074},{&p_1937->g_1075,&p_1937->g_1074,(void*)0,&p_1937->g_1074}};
                int i, j;
                (*l_995) = (p_37 <= 1UL);
                for (p_1937->g_1005.f5 = 3; (p_1937->g_1005.f5 >= 0); p_1937->g_1005.f5 -= 1)
                { /* block id: 443 */
                    int i, j, k;
                    return p_1937->g_108[p_1937->g_676.f5][p_1937->g_676.f5][(p_1937->g_676.f5 + 5)];
                }
                if (((*l_995) = ((((safe_sub_func_uint8_t_u_u((*p_1937->g_99), ((*p_39) <= ((safe_div_func_int32_t_s_s(((&p_1937->g_108[2][3][7] == (void*)0) , (safe_lshift_func_int8_t_s_u(p_38, 2))), ((safe_mul_func_uint8_t_u_u(l_1037, ((((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((-1L), (((l_931 = (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_38, ((safe_add_func_uint64_t_u_u((((void*)0 != &p_1937->g_955) == p_37), 1UL)) <= 2UL))), l_1037)), 0x5AL))) , p_1937->g_956[0][1]) | p_40))) <= p_38), p_1937->g_511[1][0][5])) ^ l_968[5][0]), 0x3050D74FL)) , p_36) , p_37) <= 0x40F5L))) , (*l_995)))) , l_1052)))) ^ (*l_995)) < 0x35E527E9L) || p_1937->g_108[2][3][7])))
                { /* block id: 448 */
                    uint32_t l_1059 = 0xA3996D0CL;
                    (*l_995) = ((p_1937->g_1068 = ((safe_div_func_int32_t_s_s((!(((*p_39) , ((((*l_924) = ((((p_1937->g_133 >= (*p_1937->g_99)) == (safe_lshift_func_int16_t_s_s((0x84L != (safe_add_func_int64_t_s_s(((((l_1059 && (-7L)) ^ (((18446744073709551607UL != p_36) <= ((safe_mod_func_int64_t_s_s(((((safe_mul_func_uint16_t_u_u((((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(p_1937->g_676.f3)), p_1937->g_209.f0)) | p_1937->g_205.f5) && p_1937->g_264.f5) , 0x3DF2L) , p_38), l_1059)) != p_1937->g_108[2][3][7]) && 0xF9A163CAL) , l_1059), p_40)) , l_1037)) && p_38)) >= l_1037) >= (*p_39)), 4L))), 6))) == l_1059) < 0x3B911E31C9F6A658L)) == p_36) & (-1L))) && 1UL)), 1L)) , l_1067[0])) == l_1070);
                }
                else
                { /* block id: 452 */
                    l_1071[2][1] = ((*p_1937->g_378) = l_1071[2][1]);
                    if (p_1937->g_140)
                        goto lbl_1087;
                }
                for (p_1937->g_206.f3 = 0; (p_1937->g_206.f3 <= 2); p_1937->g_206.f3 += 1)
                { /* block id: 458 */
                    uint16_t **l_1077 = &l_924;
                    uint16_t ***l_1076 = &l_1077;
                    uint64_t ***l_1079 = &l_1078;
                    int i, j;
                    (*l_1076) = &p_1937->g_1068;
                    p_1937->g_73[0][0][2] = p_1937->g_749[(p_1937->g_676.f5 + 1)][(p_1937->g_676.f5 + 2)];
                    (*l_1079) = l_1078;
                }
            }
        }
        (*l_1086) = func_71((((((((l_985 && p_40) == ((*p_1937->g_1068) == (safe_rshift_func_int16_t_s_s((0x0FA0L <= 65534UL), p_36)))) && (l_1082 == (((*p_39) ^= (safe_add_func_uint16_t_u_u(p_36, (((l_1085 || p_1937->g_100[6]) | l_929) , p_36)))) && l_968[5][0]))) < p_1937->g_205.f4) || l_951) > p_1937->g_274[1].f3) , (void*)0), p_1937);
    }
lbl_1165:
    for (p_1937->g_206.f5 = 28; (p_1937->g_206.f5 <= 8); --p_1937->g_206.f5)
    { /* block id: 471 */
        return p_36;
    }
    if (((safe_rshift_func_int16_t_s_u(((0UL >= p_37) ^ ((*p_39) = (*p_39))), (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((l_1098 ^ (safe_rshift_func_int8_t_s_u(l_988, ((p_37 , l_949[1][2]) == (((*l_1106) = (safe_unary_minus_func_uint32_t_u(((((*l_924) = (safe_unary_minus_func_uint64_t_u((l_1103 != l_1103)))) > l_1104[0][0]) <= l_1105)))) , (void*)0))))), 0x5FB1495E32BE5877L)) ^ p_38) , l_929), p_36)), p_40)))) && p_40))
    { /* block id: 477 */
        int64_t l_1107 = 0x1CA393D3D83EC416L;
        int32_t **l_1108[8][2][8] = {{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}},{{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955},{&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955,&p_1937->g_955}}};
        int32_t l_1115 = 0x53A3B29DL;
        uint8_t *l_1116[10];
        int32_t l_1117 = 0x54291C38L;
        int32_t l_1118 = 0x65B6C89FL;
        int32_t l_1122 = (-1L);
        int32_t l_1123 = (-7L);
        int32_t l_1124 = (-2L);
        int16_t l_1126 = 0x6258L;
        int32_t l_1129[2][6][8] = {{{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L}},{{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L},{0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L,0x1F9C0FE8L}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1116[i] = (void*)0;
        l_1118 |= ((*p_39) = ((l_1107 , (&l_924 != (void*)0)) || ((((void*)0 != l_1108[0][0][5]) ^ (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_38, (*p_39))), (*p_1937->g_99))) ^ (safe_lshift_func_uint8_t_u_u((l_1117 = ((l_1115 |= l_1107) || p_40)), 0))) >= p_38)) & p_40)));
        for (p_1937->g_780.f2 = 0; (p_1937->g_780.f2 != 40); p_1937->g_780.f2 = safe_add_func_uint8_t_u_u(p_1937->g_780.f2, 6))
        { /* block id: 484 */
            int32_t *l_1121[9][1][5] = {{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}},{{&p_1937->g_74,(void*)0,&p_1937->g_140,&l_987,&l_1098}}};
            int32_t l_1125 = 1L;
            int i, j, k;
            --l_1130;
        }
    }
    else
    { /* block id: 487 */
        int32_t l_1148 = (-3L);
        int32_t l_1150[7] = {1L,1L,1L,1L,1L,1L,1L};
        int32_t l_1162 = 0x23AD8602L;
        int i;
        for (p_1937->g_102 = 0; (p_1937->g_102 <= 2); p_1937->g_102 += 1)
        { /* block id: 490 */
            int64_t l_1136 = 0x3A62112346E4987FL;
            int64_t l_1151 = 0x05F8E6BA3216EE88L;
            int32_t l_1152 = 0x0CE88D97L;
            uint8_t *l_1163 = &p_1937->g_100[9];
            (*p_39) = 0x59C0D95BL;
            for (p_1937->g_209.f3 = 0; (p_1937->g_209.f3 <= 1); p_1937->g_209.f3 += 1)
            { /* block id: 494 */
                int32_t *l_1133 = &l_1052;
                int32_t l_1139 = 1L;
                int32_t *l_1149[3][8][4] = {{{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5}},{{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5}},{{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5},{&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5,&p_1937->g_676.f5}}};
                struct S0 **l_1159[2];
                int16_t *l_1160[9] = {(void*)0,&p_1937->g_219[2][5][3],(void*)0,(void*)0,&p_1937->g_219[2][5][3],(void*)0,(void*)0,&p_1937->g_219[2][5][3],(void*)0};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1159[i] = (void*)0;
                l_1152 = ((l_1151 ^= (l_1150[5] |= ((*p_39) = ((0x36CFA030L >= (((*l_1133) = 1L) , ((safe_mul_func_int8_t_s_s(p_1937->g_1005.f4, (*p_1937->g_99))) == (l_1136 > ((safe_add_func_int32_t_s_s(l_1139, (*p_39))) , ((safe_rshift_func_uint8_t_u_u(0UL, 2)) , ((l_1148 = (safe_mul_func_int16_t_s_s((p_1937->g_387 = (safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int16_t_s_u((p_36 ^ 0x70574BF8828FA762L), 0)) | l_1139) < p_1937->g_146[9][2].f2) && l_1139), 3))), p_36))) == 0x0EL))))))) || (-4L))))) > p_1937->g_100[9]);
                l_1162 ^= ((p_1937->g_1069[0][6][2] &= ((l_1148 & (l_985 = p_38)) != ((*p_1937->g_99) = (p_39 == ((((safe_mul_func_uint8_t_u_u(p_36, (safe_add_func_uint16_t_u_u(((-1L) >= (((l_1150[4] = (0x41887E8CL ^ ((void*)0 == l_1159[1]))) <= (((!(((0x20L && (-1L)) == 0x9DF6F7CBL) && l_1136)) <= l_1161[6]) , p_38)) != (*p_39))), 0x4E04L)))) , p_37) == p_1937->g_146[9][2].f5) , (void*)0))))) | p_37);
                for (l_1148 = 0; (l_1148 <= 2); l_1148 += 1)
                { /* block id: 509 */
                    for (l_1139 = 0; (l_1139 <= 1); l_1139 += 1)
                    { /* block id: 512 */
                        uint8_t **l_1164 = &p_1937->g_99;
                        (*p_39) = (((*l_1164) = l_1163) == &p_1937->g_572);
                    }
                    if (p_1937->g_209.f5)
                        goto lbl_1165;
                    return l_985;
                }
            }
        }
    }
    (*p_39) &= ((((p_39 != (p_1937->g_1168[6][0][2] = ((*l_996) = (*p_1937->g_997)))) && (safe_mul_func_uint16_t_u_u(((*p_1937->g_1068) , (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_37 >= ((safe_rshift_func_uint16_t_u_s((0xBFL != ((((p_1937->g_206.f5 | (p_40 ^ p_40)) , ((safe_rshift_func_uint16_t_u_s(((*l_924) = p_38), 5)) != p_38)) != (*p_1937->g_99)) != (-1L))), 8)) < 0xE9L)), 3)), p_1937->g_676.f4))), 0x405DL))) ^ l_968[5][0]) < p_37);
    return l_1179[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_41(uint32_t  p_42, uint16_t  p_43, int32_t  p_44, struct S2 * p_1937)
{ /* block id: 380 */
    uint32_t l_921 = 1UL;
    return l_921;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1937->g_73
 */
uint32_t  func_51(int64_t  p_52, uint32_t  p_53, int32_t * p_54, int64_t  p_55, struct S2 * p_1937)
{ /* block id: 377 */
    int32_t **l_918 = (void*)0;
    int32_t **l_919 = &p_1937->g_73[3][0][2];
    (*l_919) = &p_1937->g_140;
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_60 p_1937->g_74 p_1937->g_99 p_1937->g_102 p_1937->g_100 p_1937->g_34 p_1937->g_133 p_1937->g_145 p_1937->g_511 p_1937->g_274.f2 p_1937->g_351 p_1937->g_206.f4 p_1937->g_264.f3 p_1937->g_205.f0 p_1937->g_205.f5 p_1937->g_264.f4 p_1937->g_207.f3 p_1937->g_73 p_1937->g_219 p_1937->g_572 p_1937->g_205.f2 p_1937->g_209.f5 p_1937->g_378 p_1937->g_379 p_1937->g_135 p_1937->g_659 p_1937->g_209.f3 p_1937->g_205.f3 p_1937->g_207.f4 p_1937->g_274.f3 p_1937->g_146.f0 p_1937->g_207.f5 p_1937->g_676.f5 p_1937->g_318 p_1937->g_719 p_1937->g_206.f0 p_1937->g_264.f5 p_1937->g_108 p_1937->g_140 p_1937->g_206.f3 p_1937->g_274.f0 p_1937->g_146.f2 p_1937->g_264.f0 p_1937->g_387 p_1937->g_206.f5 p_1937->g_209.f4 p_1937->g_209.f2 p_1937->g_48 p_1937->g_676.f0 p_1937->g_146.f4 p_1937->g_894 p_1937->g_780.f4
 * writes: p_1937->g_60 p_1937->g_73 p_1937->g_74 p_1937->g_102 p_1937->g_108 p_1937->g_114 p_1937->g_133 p_1937->g_135 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_100 p_1937->g_572 p_1937->g_205.f3 p_1937->g_209.f5 p_1937->g_264.f3 p_1937->g_209.f4 p_1937->g_659 p_1937->g_146.f0 p_1937->g_219 p_1937->g_264.f5 p_1937->g_749 p_1937->g_511 p_1937->g_209.f3 p_1937->g_768 p_1937->g_274.f0 p_1937->g_146.f4 p_1937->g_207.f4 p_1937->g_780.f2 p_1937->g_205.f0 p_1937->g_206.f5 p_1937->g_274.f5 p_1937->g_209.f2 p_1937->g_207.f3 p_1937->g_780.f4
 */
int32_t * func_56(uint16_t  p_57, struct S2 * p_1937)
{ /* block id: 5 */
    int32_t *l_917[9][9][3] = {{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}},{{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0},{&p_1937->g_274[1].f5,&p_1937->g_74,(void*)0}}};
    int i, j, k;
    for (p_57 = (-18); (p_57 == 38); p_57 = safe_add_func_uint8_t_u_u(p_57, 1))
    { /* block id: 8 */
        uint8_t l_64 = 0xE5L;
        int32_t l_916[2][9] = {{1L,0x6A1D356CL,1L,1L,0x6A1D356CL,1L,1L,0x6A1D356CL,1L},{1L,0x6A1D356CL,1L,1L,0x6A1D356CL,1L,1L,0x6A1D356CL,1L}};
        int i, j;
        for (p_1937->g_60 = 17; (p_1937->g_60 != 27); p_1937->g_60++)
        { /* block id: 11 */
            int32_t *l_63[3];
            int8_t l_67 = 0x18L;
            int i;
            for (i = 0; i < 3; i++)
                l_63[i] = &p_1937->g_48;
            if ((l_63[0] == (void*)0))
            { /* block id: 12 */
                uint64_t l_68 = 0x0257628AE825D0D3L;
                l_64++;
                l_68 = l_67;
                for (l_68 = (-30); (l_68 <= 30); ++l_68)
                { /* block id: 17 */
                    return l_63[0];
                }
                return l_63[2];
            }
            else
            { /* block id: 21 */
                int32_t **l_915 = &p_1937->g_73[3][0][2];
                (*l_915) = func_71((p_1937->g_73[3][0][2] = (void*)0), p_1937);
                l_916[1][1] &= p_57;
            }
            return &p_1937->g_140;
        }
    }
    return l_917[1][7][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_74 p_1937->g_99 p_1937->g_102 p_1937->g_100 p_1937->g_34 p_1937->g_133 p_1937->g_145 p_1937->g_511 p_1937->g_274.f2 p_1937->g_351 p_1937->g_206.f4 p_1937->g_264.f3 p_1937->g_205.f0 p_1937->g_205.f5 p_1937->g_264.f4 p_1937->g_207.f3 p_1937->g_73 p_1937->g_219 p_1937->g_572 p_1937->g_205.f2 p_1937->g_209.f5 p_1937->g_378 p_1937->g_379 p_1937->g_135 p_1937->g_659 p_1937->g_209.f3 p_1937->g_205.f3 p_1937->g_207.f4 p_1937->g_274.f3 p_1937->g_146.f0 p_1937->g_207.f5 p_1937->g_676.f5 p_1937->g_318 p_1937->g_719 p_1937->g_206.f0 p_1937->g_264.f5 p_1937->g_108 p_1937->g_140 p_1937->g_206.f3 p_1937->g_274.f0 p_1937->g_146.f2 p_1937->g_264.f0 p_1937->g_387 p_1937->g_206.f5 p_1937->g_209.f4 p_1937->g_209.f2 p_1937->g_48 p_1937->g_676.f0 p_1937->g_146.f4 p_1937->g_894 p_1937->g_780.f4
 * writes: p_1937->g_74 p_1937->g_102 p_1937->g_108 p_1937->g_114 p_1937->g_133 p_1937->g_135 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_100 p_1937->g_572 p_1937->g_205.f3 p_1937->g_209.f5 p_1937->g_264.f3 p_1937->g_209.f4 p_1937->g_73 p_1937->g_659 p_1937->g_146.f0 p_1937->g_219 p_1937->g_264.f5 p_1937->g_749 p_1937->g_511 p_1937->g_209.f3 p_1937->g_768 p_1937->g_274.f0 p_1937->g_146.f4 p_1937->g_207.f4 p_1937->g_780.f2 p_1937->g_205.f0 p_1937->g_206.f5 p_1937->g_274.f5 p_1937->g_209.f2 p_1937->g_207.f3 p_1937->g_780.f4
 */
int32_t * func_71(int32_t * p_72, struct S2 * p_1937)
{ /* block id: 23 */
    int32_t l_84 = 0x7631B5FDL;
    uint32_t l_90 = 0x309E2023L;
    int32_t l_106 = 0x50335754L;
    int32_t l_630 = 0x0BB417DBL;
    int32_t l_631 = 0x1801CE22L;
    int32_t l_632 = 0x1C03E4D3L;
    int32_t l_635[2][5] = {{(-3L),(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L),(-3L)}};
    uint32_t *l_664 = &p_1937->g_209.f4;
    uint32_t **l_663[5][9][2] = {{{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664}},{{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664}},{{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664}},{{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664}},{{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664},{&l_664,&l_664}}};
    uint32_t ***l_662 = &l_663[3][6][1];
    struct S0 *l_675 = &p_1937->g_676;
    int8_t l_682 = 0x59L;
    uint16_t l_709 = 0xF9A1L;
    int64_t *l_710 = &p_1937->g_34[6][2][0];
    uint16_t *l_718 = &p_1937->g_102;
    uint16_t **l_717 = &l_718;
    uint64_t *l_786 = &p_1937->g_206.f3;
    uint64_t **l_785 = &l_786;
    int32_t l_831 = (-1L);
    int32_t l_896 = 2L;
    uint32_t l_911 = 0xC65C4C64L;
    int i, j, k;
    for (p_1937->g_74 = 21; (p_1937->g_74 >= 22); p_1937->g_74 = safe_add_func_uint32_t_u_u(p_1937->g_74, 2))
    { /* block id: 26 */
        return p_72;
    }
    for (p_1937->g_74 = 0; (p_1937->g_74 <= 28); p_1937->g_74++)
    { /* block id: 31 */
        uint8_t *l_89 = (void*)0;
        uint16_t *l_101 = &p_1937->g_102;
        int32_t l_105 = 0x0F6DB6A2L;
        int8_t *l_107 = &p_1937->g_108[2][3][7];
        int32_t l_633 = 0L;
        int32_t l_634[8][6] = {{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L},{0x0B74C5F1L,0L,0x2F027783L,0x5D00BF11L,0x2F027783L,0L}};
        uint64_t l_636 = 0x86300D09C18685A0L;
        int64_t *l_655[10];
        uint32_t *l_658 = &p_1937->g_659;
        int32_t *l_681 = &p_1937->g_146[9][2].f0;
        int32_t *l_683 = &l_633;
        uint16_t l_698 = 0x50F2L;
        uint64_t l_797 = 18446744073709551615UL;
        struct S0 **l_802 = &p_1937->g_208;
        int i, j;
        for (i = 0; i < 10; i++)
            l_655[i] = &p_1937->g_135;
        if ((func_79(((8UL <= l_84) , &l_84), ((l_105 = (((safe_div_func_uint32_t_u_u(p_1937->g_74, (safe_lshift_func_uint8_t_u_s((l_90--), ((*l_107) = (safe_rshift_func_uint16_t_u_u(((((safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u(((!l_84) , (65531UL < ((*l_101) ^= (p_1937->g_99 != (void*)0)))), 2)) <= ((safe_sub_func_int16_t_s_s((l_105 || p_1937->g_100[9]), l_105)) != l_84)), 0x600665BEC77404BFL)) , 0x7714DF77L) != l_84) > l_106), l_84))))))) <= l_105) & l_106)) , l_84), p_1937->g_100[9], p_1937->g_34[2][0][2], p_1937) | l_106))
        { /* block id: 227 */
            int64_t l_605[4] = {0L,0L,0L,0L};
            int32_t *l_606 = &p_1937->g_209.f5;
            int32_t **l_629[7] = {&p_1937->g_73[3][0][2],&p_1937->g_15[4][6],&p_1937->g_73[3][0][2],&p_1937->g_73[3][0][2],&p_1937->g_15[4][6],&p_1937->g_73[3][0][2],&p_1937->g_73[3][0][2]};
            int i;
            (*l_606) |= (safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((safe_mul_func_int32_t_s_s((l_90 != ((p_1937->g_73[3][0][2] == (void*)0) , l_90)), ((safe_sub_func_int8_t_s_s(p_1937->g_219[0][6][1], (0x99L != ((*l_107) = ((safe_add_func_uint16_t_u_u(l_105, l_105)) , ((safe_mod_func_uint16_t_u_u(p_1937->g_572, p_1937->g_205.f2)) <= l_605[0])))))) <= l_84))), 0x03B4L)) < 8L), 18446744073709551615UL)), l_605[0])) != 0x728D3CE8L), l_605[0]));
            for (p_1937->g_264.f3 = 0; (p_1937->g_264.f3 < 36); p_1937->g_264.f3++)
            { /* block id: 232 */
                union U1 *l_617 = &p_1937->g_618;
                for (p_1937->g_572 = 0; (p_1937->g_572 == 23); p_1937->g_572 = safe_add_func_uint8_t_u_u(p_1937->g_572, 2))
                { /* block id: 235 */
                    uint64_t l_619 = 1UL;
                    uint32_t *l_628 = &p_1937->g_209.f4;
                    (*l_606) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((1L != (safe_lshift_func_int16_t_s_u(l_105, 13))), (p_1937->g_511[3][0][6] ^ (((l_617 == (*p_1937->g_378)) < l_619) , ((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((*p_1937->g_99), 3)) , (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint64_t_u((safe_add_func_int8_t_s_s((251UL > (((*l_628) = ((p_1937->g_135 >= (*l_606)) , (*l_606))) & l_105)), l_105))))))) , 0xEAL), 3)) | (*p_1937->g_99)))))) || 0x64CB7160L), 7));
                }
            }
            p_1937->g_73[3][0][2] = &p_1937->g_140;
            --l_636;
        }
        else
        { /* block id: 242 */
            uint16_t l_648 = 65535UL;
            for (l_630 = 0; (l_630 != 27); l_630++)
            { /* block id: 245 */
                int32_t *l_641 = &l_635[1][2];
                int32_t *l_642 = &l_633;
                int32_t *l_643 = &p_1937->g_146[9][2].f0;
                int32_t *l_644 = (void*)0;
                int32_t *l_645 = (void*)0;
                int32_t *l_646 = &l_633;
                int32_t l_647 = 1L;
                --l_648;
            }
            return p_72;
        }
        l_635[1][2] = (l_635[0][3] , (safe_rshift_func_int16_t_s_u(((l_90 , ((((safe_mod_func_uint32_t_u_u((p_1937->g_511[0][1][5] && (((void*)0 != l_655[7]) < (safe_rshift_func_uint16_t_u_u((((((((*l_658) |= 4294967290UL) , (safe_rshift_func_uint16_t_u_s(l_633, 9))) < (l_662 != (void*)0)) == l_630) <= l_635[1][2]) > l_633), 10)))), l_630)) , l_636) , 0x7C98L) ^ p_1937->g_209.f3)) != l_631), p_1937->g_205.f3)));
        (*l_683) = ((safe_sub_func_int32_t_s_s((-1L), ((*l_681) |= (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((((p_1937->g_207.f4 & ((void*)0 != l_675)) , 0L) != (((0x3FL || ((safe_sub_func_uint16_t_u_u(((((l_634[0][2] ^ l_635[0][2]) | ((safe_div_func_int16_t_s_s(l_630, 0x0C17L)) < p_1937->g_274[1].f3)) == 0xE2486BFFL) && l_635[0][2]), l_634[0][2])) && 0x9605L)) & l_84) || l_636)), 0x20DBL)), 10)) <= l_635[1][2]) , 247UL), 0))))) , l_682);
        if (((((*l_681) = (((p_1937->g_135 ^= (safe_rshift_func_int8_t_s_u(((void*)0 != p_1937->g_73[3][0][2]), (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((((((safe_add_func_int32_t_s_s((0x6D67A9C36AE475D8L < (*l_683)), ((safe_mod_func_uint8_t_u_u(((l_84 ^= ((*l_681) , (0x225CAA7CB9CF4DA6L & (((safe_mul_func_int8_t_s_s((((void*)0 != &p_72) != (safe_mul_func_uint16_t_u_u(0xF63AL, (-5L)))), l_698)) != p_1937->g_207.f5) , l_630)))) , (*l_681)), p_1937->g_209.f3)) >= 0xDF6EL))) , (*l_681)) ^ (*l_683)) , 0x62L) >= (*l_681)) , p_1937->g_676.f5), l_682)), p_1937->g_100[9]))))) | (*l_683)) || l_632)) || (-1L)) && l_632))
        { /* block id: 257 */
            int64_t l_711 = 8L;
            int16_t *l_716 = &p_1937->g_219[1][1][1];
            uint64_t *l_721 = &p_1937->g_351;
            int32_t *l_740 = &p_1937->g_264.f5;
            l_631 ^= ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((((p_1937->g_207.f5 > ((((*l_664) = (((l_106 , (safe_mod_func_uint16_t_u_u(0x846EL, (safe_sub_func_int8_t_s_s(l_635[0][1], ((*p_1937->g_99) &= 1UL)))))) ^ (((((*l_683) > (((((((safe_add_func_int8_t_s_s((l_709 == 0xF9C8L), (p_1937->g_351 , l_90))) , l_710) != &p_1937->g_34[2][0][2]) & (*l_681)) & (*l_681)) == 0x4FC5566C7340408AL) & 18446744073709551615UL)) && (*l_683)) ^ l_84) != 6UL)) == l_682)) , p_1937->g_318[0][1]) ^ l_711)) ^ 0x04L) != l_711), l_711)), (-1L))) >= l_630);
            (*l_740) |= (((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((*l_716) ^= (*l_681)), 5)), ((((~1L) , l_717) != p_1937->g_719) && ((l_721 != l_721) >= (safe_sub_func_uint16_t_u_u((l_90 >= ((((*l_681) == (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((((*l_101) = (safe_div_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s(((((safe_add_func_int32_t_s_s(l_90, p_1937->g_205.f2)) <= (*l_681)) || 0x76DC2BE7L) && 0x116F9E0FL), l_711)) == 1L) > l_84) || l_711), 1L))) && 0x5B39L) | (*l_683)) > p_1937->g_206.f0), 0L)), 0xBE8DL)) | (*p_1937->g_99)) < 0x5BAA2D0CC2544A5DL), 0x5AL)), 8UL))) , (-3L)) != 18446744073709551608UL)), (*l_683))))))) >= l_711) && (*l_681));
        }
        else
        { /* block id: 264 */
            uint32_t *l_750 = &p_1937->g_659;
            uint64_t *l_759 = &p_1937->g_511[1][3][5];
            uint64_t *l_762 = &p_1937->g_209.f3;
            int32_t l_767 = 6L;
            uint64_t *l_769 = (void*)0;
            uint64_t *l_770 = &p_1937->g_206.f3;
            int32_t *l_771 = &p_1937->g_274[1].f0;
            union U1 *l_776[10] = {&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777,&p_1937->g_777};
            uint64_t **l_788 = &l_770;
            struct S0 **l_803 = (void*)0;
            int i;
            (*l_771) |= (((*l_770) |= ((l_767 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_635[1][2] = ((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((((p_1937->g_749[6][3] = &p_1937->g_659) == l_750) , (1L > 0xF259E55EL)), l_630)) != (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((*l_683), 14)), ((**l_717) = (~((safe_sub_func_uint32_t_u_u(((p_1937->g_768 = ((*l_107) &= (((safe_rshift_func_uint16_t_u_u((((*l_762) = (++(*l_759))) < (((((((*p_1937->g_99) | ((~(safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((((l_767 ^ 0x0D356672L) ^ (*p_1937->g_99)) || (*p_1937->g_99)) , (-3L)) | (*p_1937->g_99)), 5)), 6))) <= l_635[1][3])) > 0x205789813340FA76L) && p_1937->g_205.f2) != 65528UL) , l_767) | (*l_683))), l_635[0][0])) < (*l_681)) >= l_767))) , p_1937->g_135), p_1937->g_140)) & l_631)))))), p_1937->g_146[9][2].f0)) , l_84)) ^ 9UL), 1UL)), 5))) > 1L)) || 0x53BE0105DE6614D8L);
            if ((safe_div_func_uint32_t_u_u(((((*l_107) ^= 0x49L) > (0L | 6L)) , (p_1937->g_146[9][2].f2 < (l_84 = (safe_div_func_uint32_t_u_u((l_776[9] != (*p_1937->g_378)), (safe_lshift_func_uint8_t_u_u((*p_1937->g_99), (safe_add_func_uint32_t_u_u((((0xFC47L | 0x6AC7L) && (*l_681)) || p_1937->g_264.f0), 0x788ACB69L))))))))), (*l_681))))
            { /* block id: 277 */
                uint64_t ***l_787[5][8][6] = {{{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785}},{{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785}},{{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785}},{{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785}},{{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785},{&l_785,&l_785,&l_785,&l_785,(void*)0,&l_785}}};
                int32_t l_794 = 0x31B6BA27L;
                int i, j, k;
                l_788 = ((*l_771) , l_785);
                for (l_633 = 19; (l_633 <= 5); --l_633)
                { /* block id: 281 */
                    uint32_t l_793 = 0x991889A6L;
                    struct S0 ***l_804 = &l_802;
                    (*l_681) = ((((safe_sub_func_uint16_t_u_u(l_793, l_794)) < (*l_681)) & (p_1937->g_146[9][2].f4 = (((*l_771) = l_635[0][4]) >= (((l_794 != (0xD0L & (((void*)0 == l_681) , (safe_sub_func_int32_t_s_s(0x29E84CA0L, l_90))))) ^ (*l_681)) ^ 0x7E98B737L)))) , l_709);
                    l_797++;
                    (*l_771) = (0x72FDB6A2B3E7D3CCL & ((*p_1937->g_99) > (l_794 | l_631)));
                    (*l_804) = (l_803 = l_802);
                }
            }
            else
            { /* block id: 290 */
                int16_t *l_809 = &p_1937->g_387;
                for (p_1937->g_207.f4 = (-15); (p_1937->g_207.f4 >= 6); p_1937->g_207.f4 = safe_add_func_uint8_t_u_u(p_1937->g_207.f4, 1))
                { /* block id: 293 */
                    return &p_1937->g_60;
                }
                (*l_771) &= (safe_lshift_func_int16_t_s_u(((*l_809) = (*l_683)), 5));
                l_771 = p_72;
            }
            for (p_1937->g_780.f2 = (-25); (p_1937->g_780.f2 >= 38); p_1937->g_780.f2++)
            { /* block id: 302 */
                p_1937->g_73[3][0][2] = &p_1937->g_74;
            }
        }
    }
    for (l_106 = 13; (l_106 > 27); l_106++)
    { /* block id: 309 */
        for (p_1937->g_205.f0 = 0; p_1937->g_205.f0 < 10; p_1937->g_205.f0 += 1)
        {
            p_1937->g_100[p_1937->g_205.f0] = 1UL;
        }
    }
    for (p_1937->g_264.f3 = 0; (p_1937->g_264.f3 > 30); p_1937->g_264.f3 = safe_add_func_int8_t_s_s(p_1937->g_264.f3, 2))
    { /* block id: 314 */
        uint8_t l_821 = 0x69L;
        int32_t *l_835 = &p_1937->g_48;
        int32_t l_842 = 0L;
        int32_t l_844 = 0L;
        int32_t l_845 = (-4L);
        int32_t l_846 = (-1L);
        int32_t l_847 = 0x557725FDL;
        int32_t l_848 = 0x5DAE1229L;
        uint32_t **l_884 = &p_1937->g_749[6][3];
        int64_t l_891 = 0x1A906F6EE926F2C6L;
        for (p_1937->g_387 = 27; (p_1937->g_387 > 1); p_1937->g_387--)
        { /* block id: 317 */
            int32_t *l_818 = &p_1937->g_206.f0;
            return l_818;
        }
        for (p_1937->g_205.f3 = 0; (p_1937->g_205.f3 == 13); p_1937->g_205.f3 = safe_add_func_int16_t_s_s(p_1937->g_205.f3, 4))
        { /* block id: 322 */
            uint64_t l_826 = 0x17826E36D399545DL;
            union U1 ***l_832[6] = {&p_1937->g_378,&p_1937->g_378,&p_1937->g_378,&p_1937->g_378,&p_1937->g_378,&p_1937->g_378};
            int32_t *l_833 = &p_1937->g_206.f5;
            int32_t *l_834 = &p_1937->g_274[1].f5;
            int32_t **l_836 = (void*)0;
            int32_t **l_837 = &p_1937->g_73[3][0][2];
            int32_t l_843[2][8] = {{0x424AB81BL,0x424AB81BL,(-1L),0x7EE742D5L,(-7L),0x7EE742D5L,(-1L),0x424AB81BL},{0x424AB81BL,0x424AB81BL,(-1L),0x7EE742D5L,(-7L),0x7EE742D5L,(-1L),0x424AB81BL}};
            union U1 ***l_854 = (void*)0;
            uint32_t l_897[10] = {0xD125B06AL,0x9709DE11L,0xD125B06AL,0xD125B06AL,0x9709DE11L,0xD125B06AL,0xD125B06AL,0x9709DE11L,0xD125B06AL,0xD125B06AL};
            int i, j;
            if (l_821)
                break;
            (*l_834) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_826 == (p_1937->g_264.f3 | ((*l_664) |= (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(255UL, 7)) & ((((((**l_785) |= ((+l_632) , l_682)) != p_1937->g_511[1][0][0]) <= l_831) || l_821) >= (((*l_833) |= ((l_630 = ((((l_635[0][1] ^ 0x7775L) , &p_1937->g_378) == l_832[3]) >= 0xD0813DA9DEF7611DL)) >= l_826)) , 255UL))), 9L))))), l_821)), 5));
            (*l_837) = l_835;
            for (p_1937->g_209.f2 = 6; (p_1937->g_209.f2 >= (-28)); --p_1937->g_209.f2)
            { /* block id: 332 */
                int32_t *l_840 = &p_1937->g_676.f0;
                int32_t *l_841[1][2];
                uint64_t l_849 = 0x94805A18CB78C469L;
                uint32_t **l_863 = &p_1937->g_749[6][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_841[i][j] = (void*)0;
                }
                ++l_849;
                if ((((((++(*l_718)) , l_854) != ((safe_sub_func_int8_t_s_s(0x7AL, (safe_lshift_func_int16_t_s_u((-1L), ((safe_mod_func_int16_t_s_s((*l_835), (1L && (((*l_863) = p_72) != p_72)))) != (safe_mod_func_uint64_t_u_u((((safe_unary_minus_func_uint8_t_u(l_682)) == (*l_833)) < 0x194DBAB5L), p_1937->g_209.f3))))))) , &p_1937->g_378)) | 0L) == 1UL))
                { /* block id: 336 */
                    uint16_t l_867[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_867[i] = 0x24CCL;
                    --l_867[1];
                }
                else
                { /* block id: 338 */
                    int16_t l_895 = 0L;
                    int8_t *l_898[4][8][1] = {{{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]}},{{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]}},{{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]}},{{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]},{&p_1937->g_108[2][0][6]}}};
                    int32_t l_899[9];
                    int32_t l_900 = 0x2B7BF3B5L;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_899[i] = 0L;
                    l_900 = (safe_lshift_func_uint16_t_u_s(((~(*l_840)) == (((l_709 , &p_1937->g_34[2][0][2]) == (void*)0) <= ((safe_div_func_int8_t_s_s((((l_899[5] &= (safe_div_func_int64_t_s_s((((((((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((*l_835), (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((((((void*)0 != l_884) ^ (safe_mul_func_int8_t_s_s(((+(safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_891 | (((*l_833) &= (safe_mul_func_uint16_t_u_u((p_1937->g_146[9][2].f4 && 0xBB89B98467E3889BL), p_1937->g_894))) <= 1L)) < l_895), l_896)), l_897[3]))) >= l_895), 4L))) ^ p_1937->g_318[0][5]) >= 0x02L) == (*l_835)), (*p_1937->g_99))), 0)))), 4)) || (*l_835)) || l_896) & 0x28A22025L) ^ 7UL) != 0x2119F835L) , p_1937->g_511[1][0][0]), 0x50529D4024FD9C84L))) , l_895) == (*l_835)), p_1937->g_207.f5)) > 0x691BBC6CL))), 11));
                    (*l_837) = (*l_837);
                    p_1937->g_73[3][0][2] = (*l_837);
                    if (l_896)
                        break;
                }
            }
        }
        for (p_1937->g_207.f3 = 0; (p_1937->g_207.f3 != 25); p_1937->g_207.f3++)
        { /* block id: 350 */
            uint16_t l_905 = 0UL;
            int32_t l_910[9];
            int32_t **l_914 = &p_1937->g_73[3][0][2];
            int i;
            for (i = 0; i < 9; i++)
                l_910[i] = 1L;
            for (p_1937->g_264.f5 = 25; (p_1937->g_264.f5 < 28); p_1937->g_264.f5 = safe_add_func_int64_t_s_s(p_1937->g_264.f5, 5))
            { /* block id: 353 */
                int32_t *l_909[7][10][3] = {{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}},{{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0},{(void*)0,&l_847,&p_1937->g_274[1].f0}}};
                int i, j, k;
                for (l_106 = 3; (l_106 >= 0); l_106 -= 1)
                { /* block id: 356 */
                    for (p_1937->g_780.f4 = 3; (p_1937->g_780.f4 >= 0); p_1937->g_780.f4 -= 1)
                    { /* block id: 359 */
                        int32_t *l_908[4][9][2] = {{{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74}},{{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74}},{{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74}},{{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74},{(void*)0,&p_1937->g_74}}};
                        int i, j, k;
                        l_905--;
                        return p_72;
                    }
                }
                l_911--;
            }
            (*l_914) = p_72;
        }
    }
    return &p_1937->g_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1937->g_34 p_1937->g_133 p_1937->g_102 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_99 p_1937->g_511 p_1937->g_100 p_1937->g_274.f2 p_1937->g_351 p_1937->g_206.f4 p_1937->g_264.f3 p_1937->g_205.f0 p_1937->g_205.f5 p_1937->g_264.f4 p_1937->g_207.f3
 * writes: p_1937->g_114 p_1937->g_133 p_1937->g_135 p_1937->g_108 p_1937->g_145 p_1937->g_206.f3 p_1937->g_423.f4 p_1937->g_387 p_1937->g_100 p_1937->g_572 p_1937->g_205.f3
 */
int8_t  func_79(int32_t * p_80, uint16_t  p_81, int32_t  p_82, int8_t  p_83, struct S2 * p_1937)
{ /* block id: 36 */
    uint64_t *l_113 = &p_1937->g_114;
    int8_t *l_127 = &p_1937->g_108[1][3][2];
    int16_t *l_132 = &p_1937->g_133;
    int64_t *l_134 = &p_1937->g_135;
    int32_t l_136[2];
    int8_t *l_137 = (void*)0;
    int8_t *l_138 = (void*)0;
    int32_t *l_139[8][10] = {{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74},{&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,&p_1937->g_60,&p_1937->g_74,(void*)0,&p_1937->g_48,&p_1937->g_60,&p_1937->g_140,&p_1937->g_74}};
    int16_t l_141 = 0x61ABL;
    int16_t **l_268 = (void*)0;
    int32_t l_300 = (-1L);
    int16_t **l_311 = &l_132;
    uint64_t l_316 = 0x02A066CB67E40BD1L;
    struct S0 *l_317 = (void*)0;
    int8_t l_353[8][8][4] = {{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}},{{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L},{0x0EL,0x2CL,0x5BL,1L}}};
    uint64_t *l_392 = (void*)0;
    int32_t l_418 = 0x4DEC47AAL;
    uint32_t *l_466[10];
    uint32_t **l_465 = &l_466[4];
    uint32_t ***l_464 = &l_465;
    uint32_t l_502 = 0x05F96895L;
    int32_t l_568 = 0x41F84047L;
    uint8_t *l_571 = &p_1937->g_572;
    int32_t l_585 = 0x54A208BDL;
    union U1 **l_586 = (void*)0;
    uint16_t *l_587[3][5] = {{&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,(void*)0,&p_1937->g_102},{&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,(void*)0,&p_1937->g_102},{&p_1937->g_102,&p_1937->g_102,&p_1937->g_102,(void*)0,&p_1937->g_102}};
    uint8_t l_588 = 0x2CL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_136[i] = 1L;
    for (i = 0; i < 10; i++)
        l_466[i] = (void*)0;
    if ((l_141 = ((*p_80) |= (safe_sub_func_int8_t_s_s((l_136[1] = ((*l_127) = (~(safe_mod_func_uint64_t_u_u((~((*l_113) = 18446744073709551615UL)), (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(p_82, 10)), (safe_mul_func_int16_t_s_s(0x5E5CL, (safe_div_func_int32_t_s_s(((safe_add_func_int64_t_s_s((!(safe_mod_func_int64_t_s_s(((l_127 == &p_1937->g_108[2][1][6]) , ((((*l_134) = (p_83 >= ((safe_add_func_int8_t_s_s(p_81, ((safe_sub_func_int16_t_s_s(((*l_132) |= ((p_81 , p_1937->g_34[6][4][0]) | 0x64L)), 0x642DL)) > p_81))) || 1L))) < l_136[0]) , l_136[1])), l_136[0]))), 18446744073709551615UL)) | 254UL), p_1937->g_102))))))))))), 0x17L)))))
    { /* block id: 44 */
        uint16_t l_142 = 0xA332L;
        return l_142;
    }
    else
    { /* block id: 46 */
        uint8_t l_165 = 255UL;
        int64_t *l_177 = &p_1937->g_135;
        int32_t l_180 = 0x33DB0E18L;
        int32_t l_192[2];
        int32_t l_194 = 0L;
        int32_t *l_226 = &l_180;
        struct S0 *l_263 = &p_1937->g_264;
        union U1 *l_364 = &p_1937->g_365;
        union U1 **l_363[3][4][9] = {{{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364}},{{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364}},{{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364},{&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364,&l_364}}};
        uint8_t l_459[9][3][9] = {{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}},{{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL},{255UL,0xF3L,255UL,5UL,0x8FL,0x3FL,255UL,0x90L,255UL}}};
        int16_t ***l_470 = &l_268;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_192[i] = (-1L);
        for (p_1937->g_133 = 29; (p_1937->g_133 >= 17); p_1937->g_133 = safe_sub_func_int32_t_s_s(p_1937->g_133, 9))
        { /* block id: 49 */
            struct S0 **l_147 = &p_1937->g_145;
            int32_t l_164 = 0x044A4590L;
            int32_t l_188 = 0x4C9B7E9DL;
            int32_t l_190[1][8][3] = {{{7L,7L,7L},{7L,7L,7L},{7L,7L,7L},{7L,7L,7L},{7L,7L,7L},{7L,7L,7L},{7L,7L,7L},{7L,7L,7L}}};
            uint8_t *l_256[9][5][5] = {{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}},{{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]},{&l_165,&l_165,&p_1937->g_100[9],&l_165,&p_1937->g_100[9]}}};
            int16_t **l_266 = (void*)0;
            int8_t l_388 = 0x65L;
            int16_t *l_403 = &p_1937->g_133;
            uint32_t ***l_483 = &l_465;
            uint8_t l_499 = 0UL;
            int i, j, k;
            (*l_147) = p_1937->g_145;
        }
        for (p_1937->g_206.f3 = 10; (p_1937->g_206.f3 >= 34); p_1937->g_206.f3 = safe_add_func_uint64_t_u_u(p_1937->g_206.f3, 2))
        { /* block id: 206 */
            int8_t l_561[9][9][3] = {{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}},{{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L},{1L,6L,0x45L}}};
            union U1 **l_562 = &l_364;
            int i, j, k;
            for (p_1937->g_423.f4 = 2; (p_1937->g_423.f4 > (-24)); p_1937->g_423.f4--)
            { /* block id: 209 */
                uint8_t l_548 = 0x9DL;
                int32_t l_563 = 0L;
                for (p_1937->g_387 = 7; (p_1937->g_387 >= 0); p_1937->g_387 -= 1)
                { /* block id: 212 */
                    int32_t l_557[10] = {0x5304BACFL,0x1CEBCFBEL,0x19ABBBE2L,0x1CEBCFBEL,0x5304BACFL,0x5304BACFL,0x1CEBCFBEL,0x19ABBBE2L,0x1CEBCFBEL,0x5304BACFL};
                    int i, j;
                    l_563 = ((*p_80) = (p_82 == ((((*p_1937->g_99) = (~(l_548 && ((safe_mod_func_int32_t_s_s(((*l_226) = (safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(0x6331L, 1)) != l_557[6]) | 0L), ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int64_t_s_s(p_81, ((-4L) & (p_81 > 0x75F1L)))))) <= 18446744073709551615UL))) && l_561[4][3][0]) , l_562) == (void*)0), 1))), (*p_80))) | p_82)))) & l_548) > p_1937->g_511[2][1][0])));
                }
            }
        }
    }
    (*p_80) |= ((((safe_rshift_func_uint8_t_u_u(0xD4L, 6)) == (p_1937->g_205.f3 = (safe_rshift_func_uint8_t_u_u(l_568, ((*l_571) = ((*p_1937->g_99)++)))))) , ((~p_1937->g_274[1].f2) , ((!p_83) || (((safe_sub_func_uint32_t_u_u(((&p_1937->g_294[1][5][1] == &l_268) , (p_1937->g_351 <= ((p_1937->g_206.f4 < (((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((~(p_81 = (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s(0x408FL, l_585)) < p_1937->g_351) , p_83), (*p_1937->g_99))), p_82)) , (void*)0) == l_586))) , p_81), p_1937->g_264.f3)), l_588)) || 1L) || 0x6CL)) , 0x7627L))), 6UL)) ^ p_1937->g_205.f0) | p_1937->g_205.f5)))) > p_1937->g_264.f4);
    return p_1937->g_207.f3;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1938;
    struct S2* p_1937 = &c_1938;
    struct S2 c_1939 = {
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1937->g_15
        {(-1L),0x34F5AC3DL,(-1L),(-1L),0x34F5AC3DL,(-1L)}, // p_1937->g_22
        {{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}},{{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)},{5L,0x04B505D01CD43A1EL,(-1L)}}}, // p_1937->g_34
        0x558758A7L, // p_1937->g_48
        1L, // p_1937->g_60
        0x1110172CL, // p_1937->g_74
        {{{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74},{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74}},{{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74},{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74}},{{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74},{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74}},{{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74},{(void*)0,(void*)0,&p_1937->g_48,&p_1937->g_74}}}, // p_1937->g_73
        {0x21L,0xE1L,0x96L,0xE1L,0x21L,0x21L,0xE1L,0x96L,0xE1L,0x21L}, // p_1937->g_100
        &p_1937->g_100[9], // p_1937->g_99
        65535UL, // p_1937->g_102
        {{{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L}},{{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L}},{{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L},{0x13L,0x3FL,0x35L,0x06L,0x06L,(-9L),(-9L),0x06L}}}, // p_1937->g_108
        6UL, // p_1937->g_114
        0L, // p_1937->g_133
        0x5D9A7C6434686610L, // p_1937->g_135
        0x0BFC28CDL, // p_1937->g_140
        {{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}},{{0x5FFA3906L,0x6A6AL,-8L,0xAABA6458F5FF7289L,4294967286UL,0x2D0B3D72L},{0L,9L,-1L,0xA95C22D9D8ABC683L,0xD5A70149L,0x1215010CL},{0x7CAD87FAL,-4L,0x1A7D35642D32AF4CL,0x8BB6BBBDF83237CEL,0UL,0L},{0x5DAD4C54L,-10L,-2L,18446744073709551607UL,0UL,0x08AC7E52L},{0x044AFDE6L,0x11CDL,1L,0xC59D2C9FDBBE093AL,0UL,-5L},{0x43E87FF4L,0x539AL,1L,0x636D3559E744938FL,0xB32E1920L,0x4F466BE1L},{-6L,0L,-1L,0UL,4294967291UL,0L}}}, // p_1937->g_146
        &p_1937->g_146[9][2], // p_1937->g_145
        {0x4920DFC0L,0x5B33L,0x681CB5ADCCE1AD39L,0x61BC6A5EF5CE96DDL,0xB4845BDFL,0L}, // p_1937->g_205
        {0x5487A202L,0x604AL,0x25C52C26C8E93B2AL,0xE43E5D3A11EBBAB3L,4UL,-8L}, // p_1937->g_206
        {0x60484801L,1L,6L,18446744073709551615UL,1UL,3L}, // p_1937->g_207
        {0x5A909A3CL,0L,0x038DF95F1330DE8FL,0xF3483A134B54537DL,0xD58738F4L,-1L}, // p_1937->g_209
        &p_1937->g_209, // p_1937->g_208
        {{{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)}},{{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)}},{{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)}},{{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)}},{{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)},{0x1B01L,0x33E9L,0x19DEL,(-4L),(-9L)}}}, // p_1937->g_219
        {0x0C24F1B4L,0x42BAL,-1L,0UL,0x85EBFDEFL,0x2CD96559L}, // p_1937->g_264
        {{-1L,0x377FL,-1L,0xE999821315963163L,4294967295UL,0x187AC3E4L},{-1L,0x377FL,-1L,0xE999821315963163L,4294967295UL,0x187AC3E4L}}, // p_1937->g_274
        (void*)0, // p_1937->g_275
        0x65E1L, // p_1937->g_296
        &p_1937->g_296, // p_1937->g_295
        {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}, // p_1937->g_298
        &p_1937->g_298[1], // p_1937->g_297
        {{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}},{{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297},{&p_1937->g_297,&p_1937->g_297,&p_1937->g_297,&p_1937->g_297}}}, // p_1937->g_294
        &p_1937->g_294[1][5][1], // p_1937->g_293
        (void*)0, // p_1937->g_309
        &p_1937->g_309, // p_1937->g_308
        {{1L,(-9L),1L,1L,(-9L),1L,1L}}, // p_1937->g_318
        0x89F3F2C7F3EB5AF8L, // p_1937->g_351
        {1UL}, // p_1937->g_365
        (void*)0, // p_1937->g_368
        &p_1937->g_368, // p_1937->g_367
        {{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL},{18446744073709551607UL}}, // p_1937->g_380
        &p_1937->g_380[3], // p_1937->g_379
        &p_1937->g_379, // p_1937->g_378
        0L, // p_1937->g_387
        {0x6D612AFBD095FF20L}, // p_1937->g_423
        {{{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL}},{{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL}},{{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL}},{{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL},{0UL,1UL,0xF9DB931B656E1FADL,18446744073709551615UL,4UL,6UL,18446744073709551611UL,0xF9DB931B656E1FADL,18446744073709551615UL}}}, // p_1937->g_511
        1UL, // p_1937->g_572
        {1UL}, // p_1937->g_618
        0x3251EBE6L, // p_1937->g_659
        {0x7AD2507DL,0x381BL,0x13B4FAAA6AC5AE78L,1UL,7UL,0x2F1DF02FL}, // p_1937->g_676
        &p_1937->g_102, // p_1937->g_720
        &p_1937->g_720, // p_1937->g_719
        {{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659},{(void*)0,&p_1937->g_659,&p_1937->g_659,(void*)0,&p_1937->g_659}}, // p_1937->g_749
        0x7683A05D74BCE569L, // p_1937->g_768
        {0xE7B71D84375AE262L}, // p_1937->g_777
        {18446744073709551614UL}, // p_1937->g_778
        {0xFD9929AFF6E522A3L}, // p_1937->g_779
        {0x916EAFFD8BDC9917L}, // p_1937->g_780
        0xE9C736D8L, // p_1937->g_894
        {{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}}, // p_1937->g_956
        &p_1937->g_956[0][1], // p_1937->g_955
        &p_1937->g_955, // p_1937->g_954
        &p_1937->g_749[6][3], // p_1937->g_997
        {0x48C2CE5FL,3L,-6L,0x5FA3D85C1220A493L,0x35595008L,0L}, // p_1937->g_1005
        {{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}},{{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L},{65528UL,65535UL,0xFB42L}}}, // p_1937->g_1069
        &p_1937->g_1069[0][6][2], // p_1937->g_1068
        {{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL},{0x88446F4D5654F19CL}}, // p_1937->g_1072
        {18446744073709551613UL}, // p_1937->g_1073
        {0xC2F0D1F27D5F0B2DL}, // p_1937->g_1074
        {0x296CC305F8950AF7L}, // p_1937->g_1075
        {{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}},{{(void*)0,(void*)0,&p_1937->g_659,&p_1937->g_659,&p_1937->g_659}}}, // p_1937->g_1168
        (void*)0, // p_1937->g_1256
        {{0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L},{0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L},{0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L},{0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L},{0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L,0xF316BB679DBDE9C0L}}, // p_1937->g_1340
        &p_1937->g_1340[3][2], // p_1937->g_1339
        3L, // p_1937->g_1370
        {0x310E6219L,-5L,0x0C51D2AE4EEFEE7FL,0x341A1E3C6AC68E4DL,0xD3401173L,0x51CB9AE0L}, // p_1937->g_1375
        {7UL}, // p_1937->g_1395
        1UL, // p_1937->g_1402
        {{{0x04335B07L,5L,0L,0xB3731F23C323077EL,4UL,0x330A2A19L}}}, // p_1937->g_1404
        1UL, // p_1937->g_1431
        &p_1937->g_274[1].f3, // p_1937->g_1437
        &p_1937->g_1437, // p_1937->g_1436
        &p_1937->g_1436, // p_1937->g_1435
        (void*)0, // p_1937->g_1540
        0x1925289EL, // p_1937->g_1619
        &p_1937->g_955, // p_1937->g_1760
        2L, // p_1937->g_1767
        &p_1937->g_206.f2, // p_1937->g_1879
        &p_1937->g_1879, // p_1937->g_1878
        {&p_1937->g_73[3][0][2]}, // p_1937->g_1932
        &p_1937->g_15[1][2], // p_1937->g_1933
    };
    c_1938 = c_1939;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1937);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1937->g_22[i], "p_1937->g_22[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1937->g_34[i][j][k], "p_1937->g_34[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1937->g_48, "p_1937->g_48", print_hash_value);
    transparent_crc(p_1937->g_60, "p_1937->g_60", print_hash_value);
    transparent_crc(p_1937->g_74, "p_1937->g_74", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1937->g_100[i], "p_1937->g_100[i]", print_hash_value);

    }
    transparent_crc(p_1937->g_102, "p_1937->g_102", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1937->g_108[i][j][k], "p_1937->g_108[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1937->g_114, "p_1937->g_114", print_hash_value);
    transparent_crc(p_1937->g_133, "p_1937->g_133", print_hash_value);
    transparent_crc(p_1937->g_135, "p_1937->g_135", print_hash_value);
    transparent_crc(p_1937->g_140, "p_1937->g_140", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1937->g_146[i][j].f0, "p_1937->g_146[i][j].f0", print_hash_value);
            transparent_crc(p_1937->g_146[i][j].f1, "p_1937->g_146[i][j].f1", print_hash_value);
            transparent_crc(p_1937->g_146[i][j].f2, "p_1937->g_146[i][j].f2", print_hash_value);
            transparent_crc(p_1937->g_146[i][j].f3, "p_1937->g_146[i][j].f3", print_hash_value);
            transparent_crc(p_1937->g_146[i][j].f4, "p_1937->g_146[i][j].f4", print_hash_value);
            transparent_crc(p_1937->g_146[i][j].f5, "p_1937->g_146[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(p_1937->g_205.f0, "p_1937->g_205.f0", print_hash_value);
    transparent_crc(p_1937->g_205.f1, "p_1937->g_205.f1", print_hash_value);
    transparent_crc(p_1937->g_205.f2, "p_1937->g_205.f2", print_hash_value);
    transparent_crc(p_1937->g_205.f3, "p_1937->g_205.f3", print_hash_value);
    transparent_crc(p_1937->g_205.f4, "p_1937->g_205.f4", print_hash_value);
    transparent_crc(p_1937->g_205.f5, "p_1937->g_205.f5", print_hash_value);
    transparent_crc(p_1937->g_206.f0, "p_1937->g_206.f0", print_hash_value);
    transparent_crc(p_1937->g_206.f1, "p_1937->g_206.f1", print_hash_value);
    transparent_crc(p_1937->g_206.f2, "p_1937->g_206.f2", print_hash_value);
    transparent_crc(p_1937->g_206.f3, "p_1937->g_206.f3", print_hash_value);
    transparent_crc(p_1937->g_206.f4, "p_1937->g_206.f4", print_hash_value);
    transparent_crc(p_1937->g_206.f5, "p_1937->g_206.f5", print_hash_value);
    transparent_crc(p_1937->g_207.f0, "p_1937->g_207.f0", print_hash_value);
    transparent_crc(p_1937->g_207.f1, "p_1937->g_207.f1", print_hash_value);
    transparent_crc(p_1937->g_207.f2, "p_1937->g_207.f2", print_hash_value);
    transparent_crc(p_1937->g_207.f3, "p_1937->g_207.f3", print_hash_value);
    transparent_crc(p_1937->g_207.f4, "p_1937->g_207.f4", print_hash_value);
    transparent_crc(p_1937->g_207.f5, "p_1937->g_207.f5", print_hash_value);
    transparent_crc(p_1937->g_209.f0, "p_1937->g_209.f0", print_hash_value);
    transparent_crc(p_1937->g_209.f1, "p_1937->g_209.f1", print_hash_value);
    transparent_crc(p_1937->g_209.f2, "p_1937->g_209.f2", print_hash_value);
    transparent_crc(p_1937->g_209.f3, "p_1937->g_209.f3", print_hash_value);
    transparent_crc(p_1937->g_209.f4, "p_1937->g_209.f4", print_hash_value);
    transparent_crc(p_1937->g_209.f5, "p_1937->g_209.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1937->g_219[i][j][k], "p_1937->g_219[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1937->g_264.f0, "p_1937->g_264.f0", print_hash_value);
    transparent_crc(p_1937->g_264.f1, "p_1937->g_264.f1", print_hash_value);
    transparent_crc(p_1937->g_264.f2, "p_1937->g_264.f2", print_hash_value);
    transparent_crc(p_1937->g_264.f3, "p_1937->g_264.f3", print_hash_value);
    transparent_crc(p_1937->g_264.f4, "p_1937->g_264.f4", print_hash_value);
    transparent_crc(p_1937->g_264.f5, "p_1937->g_264.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1937->g_274[i].f0, "p_1937->g_274[i].f0", print_hash_value);
        transparent_crc(p_1937->g_274[i].f1, "p_1937->g_274[i].f1", print_hash_value);
        transparent_crc(p_1937->g_274[i].f2, "p_1937->g_274[i].f2", print_hash_value);
        transparent_crc(p_1937->g_274[i].f3, "p_1937->g_274[i].f3", print_hash_value);
        transparent_crc(p_1937->g_274[i].f4, "p_1937->g_274[i].f4", print_hash_value);
        transparent_crc(p_1937->g_274[i].f5, "p_1937->g_274[i].f5", print_hash_value);

    }
    transparent_crc(p_1937->g_296, "p_1937->g_296", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1937->g_298[i], "p_1937->g_298[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1937->g_318[i][j], "p_1937->g_318[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1937->g_351, "p_1937->g_351", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1937->g_380[i].f0, "p_1937->g_380[i].f0", print_hash_value);

    }
    transparent_crc(p_1937->g_387, "p_1937->g_387", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1937->g_511[i][j][k], "p_1937->g_511[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1937->g_572, "p_1937->g_572", print_hash_value);
    transparent_crc(p_1937->g_618.f0, "p_1937->g_618.f0", print_hash_value);
    transparent_crc(p_1937->g_659, "p_1937->g_659", print_hash_value);
    transparent_crc(p_1937->g_676.f0, "p_1937->g_676.f0", print_hash_value);
    transparent_crc(p_1937->g_676.f1, "p_1937->g_676.f1", print_hash_value);
    transparent_crc(p_1937->g_676.f2, "p_1937->g_676.f2", print_hash_value);
    transparent_crc(p_1937->g_676.f3, "p_1937->g_676.f3", print_hash_value);
    transparent_crc(p_1937->g_676.f4, "p_1937->g_676.f4", print_hash_value);
    transparent_crc(p_1937->g_676.f5, "p_1937->g_676.f5", print_hash_value);
    transparent_crc(p_1937->g_768, "p_1937->g_768", print_hash_value);
    transparent_crc(p_1937->g_777.f0, "p_1937->g_777.f0", print_hash_value);
    transparent_crc(p_1937->g_778.f0, "p_1937->g_778.f0", print_hash_value);
    transparent_crc(p_1937->g_894, "p_1937->g_894", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1937->g_956[i][j], "p_1937->g_956[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1937->g_1005.f0, "p_1937->g_1005.f0", print_hash_value);
    transparent_crc(p_1937->g_1005.f1, "p_1937->g_1005.f1", print_hash_value);
    transparent_crc(p_1937->g_1005.f2, "p_1937->g_1005.f2", print_hash_value);
    transparent_crc(p_1937->g_1005.f3, "p_1937->g_1005.f3", print_hash_value);
    transparent_crc(p_1937->g_1005.f4, "p_1937->g_1005.f4", print_hash_value);
    transparent_crc(p_1937->g_1005.f5, "p_1937->g_1005.f5", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1937->g_1069[i][j][k], "p_1937->g_1069[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1937->g_1072[i].f0, "p_1937->g_1072[i].f0", print_hash_value);

    }
    transparent_crc(p_1937->g_1073.f0, "p_1937->g_1073.f0", print_hash_value);
    transparent_crc(p_1937->g_1074.f0, "p_1937->g_1074.f0", print_hash_value);
    transparent_crc(p_1937->g_1075.f0, "p_1937->g_1075.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1937->g_1340[i][j], "p_1937->g_1340[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1937->g_1370, "p_1937->g_1370", print_hash_value);
    transparent_crc(p_1937->g_1375.f0, "p_1937->g_1375.f0", print_hash_value);
    transparent_crc(p_1937->g_1375.f1, "p_1937->g_1375.f1", print_hash_value);
    transparent_crc(p_1937->g_1375.f2, "p_1937->g_1375.f2", print_hash_value);
    transparent_crc(p_1937->g_1375.f3, "p_1937->g_1375.f3", print_hash_value);
    transparent_crc(p_1937->g_1375.f4, "p_1937->g_1375.f4", print_hash_value);
    transparent_crc(p_1937->g_1375.f5, "p_1937->g_1375.f5", print_hash_value);
    transparent_crc(p_1937->g_1395.f0, "p_1937->g_1395.f0", print_hash_value);
    transparent_crc(p_1937->g_1402, "p_1937->g_1402", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1937->g_1404[i][j].f0, "p_1937->g_1404[i][j].f0", print_hash_value);
            transparent_crc(p_1937->g_1404[i][j].f1, "p_1937->g_1404[i][j].f1", print_hash_value);
            transparent_crc(p_1937->g_1404[i][j].f2, "p_1937->g_1404[i][j].f2", print_hash_value);
            transparent_crc(p_1937->g_1404[i][j].f3, "p_1937->g_1404[i][j].f3", print_hash_value);
            transparent_crc(p_1937->g_1404[i][j].f4, "p_1937->g_1404[i][j].f4", print_hash_value);
            transparent_crc(p_1937->g_1404[i][j].f5, "p_1937->g_1404[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(p_1937->g_1431, "p_1937->g_1431", print_hash_value);
    transparent_crc(p_1937->g_1619, "p_1937->g_1619", print_hash_value);
    transparent_crc(p_1937->g_1767, "p_1937->g_1767", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
