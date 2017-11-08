// -g 52,89,1 -l 4,1,1
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


// Seed: 3804263671

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    volatile int32_t g_7;
    volatile int32_t g_8;
    int32_t g_9[6];
    uint8_t g_44;
    int16_t g_57;
    int8_t g_76;
    uint16_t g_80;
    uint64_t g_84;
    int16_t g_86;
    uint64_t *g_152;
    uint64_t **g_151;
    int16_t g_158[5];
    uint32_t g_170;
    volatile int32_t g_199;
    volatile int32_t * volatile g_198;
    volatile int32_t * volatile *g_197[4][1][9];
    uint32_t g_201;
    uint64_t g_204;
    int32_t *g_208;
    uint16_t g_245[10];
    int16_t *g_257;
    int16_t **g_256;
    int32_t g_302;
    int32_t g_339;
    uint8_t g_376[1];
    uint32_t g_434;
    int16_t g_435;
    int32_t g_438;
    uint32_t g_464;
    int8_t g_469;
    int64_t g_495[4][3][6];
    int32_t g_530;
    uint16_t g_593;
    volatile uint32_t g_621;
    volatile uint32_t *g_620;
    volatile uint32_t **g_619;
    uint16_t g_639;
    uint32_t *g_729;
    uint32_t **g_728;
    uint8_t g_797;
    int64_t g_909;
    int32_t g_1042;
    int32_t *g_1088;
    int32_t **g_1087;
    int16_t ****g_1130;
    int32_t g_1216;
    uint8_t g_1218;
    int32_t g_1228;
    uint32_t g_1276;
    volatile uint32_t g_1298[8];
    volatile uint32_t *g_1297;
    int32_t * volatile *g_1356;
    int32_t * volatile ** volatile g_1355;
    int32_t * volatile ** volatile *g_1354;
    uint8_t *g_1406;
    uint8_t **g_1405;
    int64_t *g_1434;
    int64_t **g_1433;
    uint32_t g_1439;
    int32_t g_1759;
    int32_t g_1844;
    int32_t **g_1863;
    int32_t ***g_1862[2][8][2];
    int32_t ****g_1861[3];
    int16_t ******g_2082;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S0 * p_2115);
int64_t  func_21(uint8_t  p_22, uint16_t * p_23, int32_t  p_24, struct S0 * p_2115);
uint8_t  func_27(uint16_t * p_28, uint32_t  p_29, int32_t  p_30, uint16_t * p_31, struct S0 * p_2115);
uint64_t  func_32(uint32_t  p_33, struct S0 * p_2115);
uint32_t  func_34(uint16_t * p_35, uint32_t  p_36, uint32_t  p_37, int8_t  p_38, struct S0 * p_2115);
uint16_t * func_39(uint16_t  p_40, int64_t  p_41, int32_t  p_42, int64_t  p_43, struct S0 * p_2115);
uint16_t * func_45(uint16_t * p_46, int32_t  p_47, uint16_t * p_48, struct S0 * p_2115);
uint16_t * func_49(int32_t  p_50, uint16_t  p_51, uint16_t * p_52, int64_t  p_53, uint16_t  p_54, struct S0 * p_2115);
int8_t  func_58(uint16_t * p_59, struct S0 * p_2115);
uint16_t * func_60(uint16_t  p_61, struct S0 * p_2115);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2115->g_4 p_2115->g_9 p_2115->g_3 p_2115->g_8 p_2115->g_198 p_2115->g_199 p_2115->g_1405 p_2115->g_1406 p_2115->g_797 p_2115->g_1759 p_2115->g_1276 p_2115->g_1863 p_2115->g_256 p_2115->g_257 p_2115->g_158 p_2115->g_201 p_2115->g_57 p_2115->g_151 p_2115->g_152 p_2115->g_170 p_2115->g_434 p_2115->g_76 p_2115->g_639 p_2115->g_208 p_2115->g_464 p_2115->g_438 p_2115->g_204
 * writes: p_2115->g_4 p_2115->g_9 p_2115->g_208 p_2115->g_86 p_2115->g_639 p_2115->g_1042 p_2115->g_1406 p_2115->g_199 p_2115->g_57 p_2115->g_76 p_2115->g_84 p_2115->g_1759 p_2115->g_1276 p_2115->g_339
 */
int8_t  func_1(struct S0 * p_2115)
{ /* block id: 4 */
    uint16_t *l_19 = (void*)0;
    int32_t l_20 = 0L;
    uint16_t *l_2110[8] = {&p_2115->g_245[9],&p_2115->g_245[6],&p_2115->g_245[9],&p_2115->g_245[9],&p_2115->g_245[6],&p_2115->g_245[9],&p_2115->g_245[9],&p_2115->g_245[6]};
    int32_t l_2111 = 0x7BBE0253L;
    int32_t l_2112[5][1][10] = {{{(-4L),0x0B55888DL,0x36E65D76L,(-2L),0x34F719F1L,0x34F719F1L,(-2L),0x36E65D76L,0x0B55888DL,(-4L)}},{{(-4L),0x0B55888DL,0x36E65D76L,(-2L),0x34F719F1L,0x34F719F1L,(-2L),0x36E65D76L,0x0B55888DL,(-4L)}},{{(-4L),0x0B55888DL,0x36E65D76L,(-2L),0x34F719F1L,0x34F719F1L,(-2L),0x36E65D76L,0x0B55888DL,(-4L)}},{{(-4L),0x0B55888DL,0x36E65D76L,(-2L),0x34F719F1L,0x34F719F1L,(-2L),0x36E65D76L,0x0B55888DL,(-4L)}},{{(-4L),0x0B55888DL,0x36E65D76L,(-2L),0x34F719F1L,0x34F719F1L,(-2L),0x36E65D76L,0x0B55888DL,(-4L)}}};
    int32_t *l_2113[6][5] = {{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302},{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302},{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302},{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302},{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302},{&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302,&p_2115->g_302}};
    uint32_t l_2114[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2114[i] = 0xB1B44069L;
    for (p_2115->g_4 = 0; (p_2115->g_4 <= (-7)); p_2115->g_4 = safe_sub_func_int64_t_s_s(p_2115->g_4, 8))
    { /* block id: 7 */
        int64_t l_12 = 0x69393DDA37BB0086L;
        for (p_2115->g_9[1] = (-9); (p_2115->g_9[1] < 2); p_2115->g_9[1] = safe_add_func_int8_t_s_s(p_2115->g_9[1], 8))
        { /* block id: 10 */
            return p_2115->g_3;
        }
        if (l_12)
            break;
        if (l_12)
            break;
    }
    l_2114[3] ^= (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((-1L), p_2115->g_4)) >= ((safe_mul_func_uint16_t_u_u((l_20 = (p_2115->g_3 == p_2115->g_9[1])), p_2115->g_4)) , (!(l_2111 ^= ((func_21(p_2115->g_4, l_19, (safe_lshift_func_int8_t_s_u(p_2115->g_8, func_27(l_19, p_2115->g_4, p_2115->g_9[0], l_19, p_2115))), p_2115) , l_20) , l_20))))), l_2112[3][0][7]));
    return p_2115->g_204;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_198 p_2115->g_199 p_2115->g_1405 p_2115->g_1406 p_2115->g_797 p_2115->g_1759 p_2115->g_1276 p_2115->g_1863 p_2115->g_256 p_2115->g_257 p_2115->g_158 p_2115->g_201 p_2115->g_57 p_2115->g_151 p_2115->g_152 p_2115->g_170 p_2115->g_434 p_2115->g_76 p_2115->g_639 p_2115->g_208 p_2115->g_9 p_2115->g_464 p_2115->g_438
 * writes: p_2115->g_208 p_2115->g_86 p_2115->g_639 p_2115->g_1042 p_2115->g_1406 p_2115->g_199 p_2115->g_57 p_2115->g_76 p_2115->g_84 p_2115->g_1759 p_2115->g_1276 p_2115->g_9 p_2115->g_339
 */
int64_t  func_21(uint8_t  p_22, uint16_t * p_23, int32_t  p_24, struct S0 * p_2115)
{ /* block id: 927 */
    int16_t l_1899[8] = {0x7E0FL,0x7E0FL,0x7E0FL,0x7E0FL,0x7E0FL,0x7E0FL,0x7E0FL,0x7E0FL};
    uint32_t l_1910 = 0x6C6D53B5L;
    uint64_t l_1958 = 1UL;
    uint8_t *l_1959 = &p_2115->g_797;
    uint32_t l_1963 = 0x55F51B6DL;
    uint32_t l_2000 = 4UL;
    int32_t l_2017 = 0x70208967L;
    int32_t l_2018 = 0x560E39DBL;
    int32_t l_2025 = 0x16796435L;
    int32_t l_2026 = 5L;
    int32_t l_2027 = (-4L);
    int32_t l_2028 = 0L;
    int16_t ***l_2091 = &p_2115->g_256;
    int16_t ****l_2090 = &l_2091;
    int8_t l_2092[2][5] = {{(-2L),0L,(-2L),(-2L),0L},{(-2L),0L,(-2L),(-2L),0L}};
    int32_t l_2098 = 0x21B70DC5L;
    int32_t l_2099 = 0x16491046L;
    int32_t l_2100 = 0x6CEA1F4AL;
    int32_t l_2101 = 0x6D9DA02DL;
    int32_t l_2102 = 9L;
    int32_t l_2103 = 0x4AFC7118L;
    int32_t l_2104[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_2104[i] = 9L;
    if ((~(safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(p_22, 5)) | (l_1899[7] ^ ((p_22 , (safe_mod_func_int16_t_s_s((((((*p_2115->g_198) && (((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((p_22 >= (((safe_lshift_func_int8_t_s_u(((((l_1899[7] ^ (~(**p_2115->g_1405))) && l_1899[2]) < ((safe_mul_func_int16_t_s_s(0x3453L, 65531UL)) == 1UL)) ^ l_1899[6]), p_22)) & l_1899[2]) <= p_22)), 11)), l_1910)) | p_2115->g_1759) ^ p_22)) , p_22) < l_1910) , 0L), p_2115->g_1276))) == (**p_2115->g_1405)))), (*p_2115->g_1406)))))
    { /* block id: 928 */
        (*p_2115->g_1863) = &p_24;
    }
    else
    { /* block id: 930 */
        int16_t l_1933[7][10][3] = {{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}},{{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L},{0x7A86L,5L,0L}}};
        int32_t **l_1988[8][6][2] = {{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}},{{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208},{&p_2115->g_208,&p_2115->g_208}}};
        int i, j, k;
        for (p_2115->g_86 = 0; (p_2115->g_86 == 4); p_2115->g_86++)
        { /* block id: 933 */
            int64_t l_1919[7];
            int32_t ***l_1929 = &p_2115->g_1087;
            int32_t ****l_1928[2];
            int32_t *****l_1927 = &l_1928[1];
            int32_t ******l_1926[3][8][5] = {{{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0}},{{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0}},{{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0},{&l_1927,&l_1927,&l_1927,&l_1927,(void*)0}}};
            int32_t l_1937 = (-1L);
            int8_t *l_1995 = (void*)0;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1919[i] = 4L;
            for (i = 0; i < 2; i++)
                l_1928[i] = &l_1929;
            for (p_2115->g_639 = (-8); (p_2115->g_639 == 54); ++p_2115->g_639)
            { /* block id: 936 */
                int32_t *l_1930 = &p_2115->g_1042;
                int32_t l_1936[4] = {0L,0L,0L,0L};
                uint8_t *l_1946 = &p_2115->g_376[0];
                int32_t *l_1960 = &p_2115->g_302;
                int32_t *l_1961 = &p_2115->g_1228;
                int32_t *l_1962 = &p_2115->g_1844;
                int i;
                if ((safe_mod_func_int16_t_s_s(0x1C78L, (((+(safe_mul_func_uint16_t_u_u(l_1919[4], (safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_22, (((*l_1930) = (l_1926[0][7][3] != &l_1927)) , (safe_mod_func_uint16_t_u_u(((l_1933[0][3][2] <= p_24) < ((safe_mod_func_int64_t_s_s(p_22, 18446744073709551608UL)) && 0x18904499DD3CF3D9L)), l_1936[3]))))), l_1933[0][3][2])) , l_1910), p_24))))) , 0x7743L) ^ l_1919[4]))))
                { /* block id: 938 */
                    (*p_2115->g_1863) = &p_24;
                    l_1937 |= p_24;
                }
                else
                { /* block id: 941 */
                    uint8_t *l_1947 = &p_2115->g_797;
                    (*p_2115->g_198) = (safe_lshift_func_uint16_t_u_s(((~(safe_rshift_func_int16_t_s_u((**p_2115->g_256), (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_1946 == (((l_1910 , l_1947) != ((*p_2115->g_1405) = (((((((((safe_mul_func_int8_t_s_s(p_24, ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(l_1936[3], 7)) , ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, (p_22 < (l_1933[0][3][2] || (-1L))))), (**p_2115->g_1405))) , p_24)), 7)) < p_24))) != 18446744073709551615UL) || l_1958) <= l_1933[1][5][1]) > p_24) == 18446744073709551614UL) , &p_22) != (void*)0) , (void*)0))) , l_1959)) <= 0x52AF85F3CF5ADEBAL), 0x4138L)), l_1933[5][9][0]))))) , l_1936[0]), 11));
                    (*p_2115->g_1863) = &p_24;
                    return p_2115->g_201;
                }
                if (p_24)
                    continue;
                ++l_1963;
            }
            for (p_2115->g_57 = 1; (p_2115->g_57 <= 6); p_2115->g_57 += 1)
            { /* block id: 952 */
                int32_t **l_1989 = &p_2115->g_208;
                int8_t *l_1996 = &p_2115->g_76;
                uint64_t *l_1997 = &p_2115->g_84;
                int32_t *l_1998 = &p_2115->g_1759;
                int i;
                if ((((*l_1998) ^= ((+(((*l_1997) = (!(+(((l_1919[p_2115->g_57] <= (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(((void*)0 == (*p_2115->g_151)), (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((*l_1996) &= (safe_mul_func_uint8_t_u_u(0x18L, (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((l_1988[3][3][1] != l_1989) != (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((p_2115->g_170 == l_1958))), (l_1995 == (void*)0))), p_22))), 0xBFBA7958L)), p_2115->g_434))))), (*p_2115->g_1406))) < p_2115->g_639), (**p_2115->g_1405))) , 0x84L), (*p_2115->g_1406))))) > l_1899[5]) || 0x617FE4AAL), (-4L))), 0UL)), p_24)) || (*p_2115->g_208)), (-6L)))) , l_1988[6][0][0]) != l_1989)))) || 0x3F1183D3548239F1L)) , p_22)) , l_1963))
                { /* block id: 956 */
                    uint32_t l_1999 = 0UL;
                    for (p_2115->g_1276 = 0; (p_2115->g_1276 <= 6); p_2115->g_1276 += 1)
                    { /* block id: 959 */
                        (*p_2115->g_208) ^= (+0L);
                        (*p_2115->g_208) = l_1999;
                    }
                    (**l_1989) = l_1999;
                    (*l_1989) = &l_1937;
                    (**l_1989) &= l_2000;
                }
                else
                { /* block id: 966 */
                    return p_2115->g_464;
                }
                p_24 = (*p_2115->g_198);
                (*l_1989) = &p_24;
                for (p_2115->g_339 = 0; (p_2115->g_339 <= 6); p_2115->g_339 += 1)
                { /* block id: 973 */
                    return p_2115->g_438;
                }
            }
        }
    }
    (*p_2115->g_208) = 0x6A7CF218L;
    return l_1958;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_27(uint16_t * p_28, uint32_t  p_29, int32_t  p_30, uint16_t * p_31, struct S0 * p_2115)
{ /* block id: 17 */
    int32_t l_55 = (-1L);
    int16_t *l_56 = &p_2115->g_57;
    uint8_t l_347 = 0UL;
    uint16_t *l_379 = &p_2115->g_245[9];
    uint16_t **l_378 = &l_379;
    uint64_t l_642 = 18446744073709551615UL;
    int32_t **l_850 = (void*)0;
    int32_t ***l_849 = &l_850;
    uint32_t l_859 = 0x8DAEEAAAL;
    uint32_t *l_860 = (void*)0;
    int32_t l_862 = 1L;
    int32_t l_884 = (-1L);
    int32_t *l_887[5][2];
    uint64_t l_898[3][3][1] = {{{0xC9108D0F82865B08L},{0xC9108D0F82865B08L},{0xC9108D0F82865B08L}},{{0xC9108D0F82865B08L},{0xC9108D0F82865B08L},{0xC9108D0F82865B08L}},{{0xC9108D0F82865B08L},{0xC9108D0F82865B08L},{0xC9108D0F82865B08L}}};
    uint8_t l_935 = 0x23L;
    uint16_t l_939[6][2][1] = {{{0xF830L},{0xF830L}},{{0xF830L},{0xF830L}},{{0xF830L},{0xF830L}},{{0xF830L},{0xF830L}},{{0xF830L},{0xF830L}},{{0xF830L},{0xF830L}}};
    uint32_t l_940 = 0x9A53DC70L;
    int16_t l_980[10] = {(-10L),1L,(-5L),1L,(-10L),(-10L),1L,(-5L),1L,(-10L)};
    int64_t l_982[9] = {0x67ACD5A937EABDDCL,1L,0x67ACD5A937EABDDCL,0x67ACD5A937EABDDCL,1L,0x67ACD5A937EABDDCL,0x67ACD5A937EABDDCL,1L,0x67ACD5A937EABDDCL};
    uint8_t l_991 = 255UL;
    uint16_t l_992 = 4UL;
    uint32_t l_998 = 0x3AEC0E50L;
    int16_t ***l_1001 = &p_2115->g_256;
    int8_t l_1051 = (-3L);
    uint64_t l_1062 = 18446744073709551615UL;
    int32_t l_1107 = 0x21BEE2C5L;
    uint16_t l_1136 = 0x0A02L;
    int8_t *l_1170 = &p_2115->g_76;
    int32_t l_1187 = 1L;
    int32_t ***l_1204 = &p_2115->g_1087;
    uint8_t l_1233 = 0UL;
    uint32_t **l_1301 = (void*)0;
    uint32_t *l_1304 = &l_859;
    uint32_t **l_1303 = &l_1304;
    uint32_t **l_1305 = &l_860;
    uint8_t *l_1397 = &p_2115->g_376[0];
    uint8_t **l_1396[6] = {&l_1397,&l_1397,&l_1397,&l_1397,&l_1397,&l_1397};
    uint8_t *l_1398 = &p_2115->g_376[0];
    uint32_t l_1401 = 4294967295UL;
    uint32_t l_1407 = 1UL;
    int8_t l_1417[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int64_t **l_1435 = (void*)0;
    int64_t l_1610 = 1L;
    int8_t l_1611[10][4] = {{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L},{(-4L),5L,0x52L,8L}};
    uint64_t l_1652[7][9] = {{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL},{18446744073709551613UL,18446744073709551610UL,18446744073709551610UL,18446744073709551613UL,0UL,0x2F7ABC44DC2D7040L,0x25834BAADF16E08EL,0x1CB28C4191071D04L,18446744073709551613UL}};
    uint32_t ****l_1726 = (void*)0;
    int8_t l_1830[7] = {(-8L),(-1L),(-8L),(-8L),(-1L),(-8L),(-8L)};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_887[i][j] = (void*)0;
    }
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_57 p_2115->g_435 p_2115->g_9 p_2115->g_76 p_2115->g_438 p_2115->g_84 p_2115->g_593 p_2115->g_302 p_2115->g_158 p_2115->g_339 p_2115->g_256 p_2115->g_257 p_2115->g_464 p_2115->g_245 p_2115->g_728 p_2115->g_729 p_2115->g_639 p_2115->g_201 p_2115->g_469 p_2115->g_4 p_2115->g_495 p_2115->g_797 p_2115->g_86 p_2115->g_44 p_2115->g_530 p_2115->g_170
 * writes: p_2115->g_530 p_2115->g_170 p_2115->g_593 p_2115->g_438 p_2115->g_9 p_2115->g_339 p_2115->g_376 p_2115->g_201 p_2115->g_76 p_2115->g_208 p_2115->g_639 p_2115->g_302 p_2115->g_434 p_2115->g_797 p_2115->g_469 p_2115->g_44
 */
uint64_t  func_32(uint32_t  p_33, struct S0 * p_2115)
{ /* block id: 301 */
    uint8_t l_689 = 253UL;
    int32_t l_691 = (-8L);
    uint64_t ***l_720 = (void*)0;
    uint16_t *l_749[2];
    uint16_t **l_748 = &l_749[1];
    int32_t l_752 = 1L;
    uint64_t l_766[1];
    int32_t l_775 = (-4L);
    int32_t l_776 = 8L;
    int32_t l_780 = 1L;
    int32_t *l_821 = &l_691;
    int32_t l_838 = (-9L);
    int32_t l_839 = 1L;
    int32_t l_840 = 0x17208DBBL;
    int32_t l_841 = 0x303FB35AL;
    int32_t l_842 = 0x6E7B0A29L;
    int32_t l_843[9][4] = {{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_749[i] = &p_2115->g_639;
    for (i = 0; i < 1; i++)
        l_766[i] = 0xC2E3CC8B07858107L;
lbl_824:
    for (p_2115->g_530 = 25; (p_2115->g_530 <= 9); --p_2115->g_530)
    { /* block id: 304 */
        uint16_t l_666[8][7][4] = {{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}},{{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL},{0xD66BL,65535UL,65535UL,0xD66BL}}};
        uint32_t *l_680[9][1];
        uint32_t **l_679 = &l_680[0][0];
        uint32_t ***l_678[8][3] = {{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679},{&l_679,&l_679,&l_679}};
        uint8_t l_742 = 0x60L;
        int16_t l_751 = 0x4921L;
        int64_t l_756 = 0x6EF8C68E30347633L;
        uint64_t ***l_763 = &p_2115->g_151;
        int32_t l_774[6][10] = {{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L},{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L},{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L},{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L},{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L},{(-2L),1L,1L,(-2L),0x512850DFL,1L,1L,0x512850DFL,(-2L),1L}};
        int32_t l_778 = 2L;
        uint32_t *l_818 = &p_2115->g_201;
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_680[i][j] = (void*)0;
        }
        --l_666[6][4][1];
        for (p_2115->g_170 = 0; (p_2115->g_170 != 29); p_2115->g_170 = safe_add_func_int32_t_s_s(p_2115->g_170, 7))
        { /* block id: 308 */
            int8_t l_675 = 0x49L;
            int32_t **l_686 = &p_2115->g_208;
            int32_t ***l_685 = &l_686;
            uint64_t ***l_719 = (void*)0;
            int32_t *l_731[8] = {&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691,&l_691};
            int16_t l_735 = (-10L);
            uint16_t l_750 = 65535UL;
            uint16_t **l_757 = &l_749[1];
            uint32_t l_769[9];
            uint64_t l_770 = 0x102EFC250FFD158DL;
            int i;
            for (i = 0; i < 9; i++)
                l_769[i] = 0x3A8532D4L;
            for (p_2115->g_593 = 0; (p_2115->g_593 == 23); ++p_2115->g_593)
            { /* block id: 311 */
                uint32_t ***l_681 = &l_679;
                int32_t l_684[1];
                uint16_t *l_690[9][2] = {{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593},{&p_2115->g_593,&p_2115->g_593}};
                int32_t *l_692 = &p_2115->g_438;
                int16_t *l_701 = &p_2115->g_158[0];
                int32_t *l_702[4][6][1] = {{{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]}},{{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]}},{{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]}},{{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]},{&p_2115->g_9[1]}}};
                uint16_t l_703[7] = {65526UL,0xB30BL,65526UL,65526UL,0xB30BL,65526UL,65526UL};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_684[i] = (-9L);
                p_2115->g_9[4] &= ((+p_2115->g_57) == ((*l_692) = ((safe_sub_func_uint16_t_u_u(l_675, ((((l_691 = ((((l_678[6][2] == l_681) > ((((safe_mod_func_uint16_t_u_u(l_684[0], 3L)) , ((l_685 == (void*)0) || (((safe_mod_func_uint16_t_u_u(p_33, 0x6D95L)) < p_33) , 0x75L))) && l_689) != l_684[0])) | 0UL) , p_2115->g_435)) | p_33) & 0x648AL) | 4294967295UL))) , 1L)));
                if (p_33)
                    continue;
                (*l_692) = (0x56BB5DA2L > (safe_div_func_uint8_t_u_u(p_2115->g_76, (((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((l_691 = (safe_mul_func_uint16_t_u_u(l_666[6][4][1], (0x0FCDL < p_33)))) , (l_701 = func_49((l_691 = (*l_692)), p_2115->g_84, &p_2115->g_245[3], p_2115->g_593, p_2115->g_9[3], p_2115))) != (*p_2115->g_256)), 0UL)) , p_33), 7)) , p_33) ^ 0x3D1EL))));
                l_703[6]++;
            }
            for (p_2115->g_593 = 0; (p_2115->g_593 >= 54); ++p_2115->g_593)
            { /* block id: 324 */
                int32_t *l_708 = (void*)0;
                int32_t *l_709 = &l_691;
                (*l_709) = p_33;
                for (p_2115->g_201 = 0; (p_2115->g_201 > 44); p_2115->g_201++)
                { /* block id: 328 */
                    int32_t *l_712[8][5][1];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_712[i][j][k] = &l_691;
                        }
                    }
                    l_709 = l_712[0][3][0];
                    for (l_689 = (-4); (l_689 == 44); ++l_689)
                    { /* block id: 332 */
                        int16_t ***l_721 = (void*)0;
                        int32_t l_722 = 0x37C8A5DFL;
                        int8_t *l_727 = &p_2115->g_76;
                        uint32_t **l_730[2][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_730[i][j] = &l_680[0][0];
                        }
                        (*l_709) &= (safe_lshift_func_uint8_t_u_u((((((void*)0 == &p_2115->g_257) ^ ((safe_rshift_func_uint16_t_u_u(((l_719 != l_720) >= ((void*)0 != l_721)), 14)) != (*p_2115->g_257))) != l_666[0][5][1]) , l_722), p_2115->g_464));
                        (**l_685) = ((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_727) = p_2115->g_245[8]), (-8L))), 0x099DL)) , (void*)0);
                        l_730[0][0] = p_2115->g_728;
                    }
                    (*l_686) = l_731[5];
                }
                for (p_2115->g_76 = 0; (p_2115->g_76 <= (-3)); p_2115->g_76 = safe_sub_func_int64_t_s_s(p_2115->g_76, 2))
                { /* block id: 342 */
                    uint8_t l_734 = 255UL;
                    l_752 |= ((l_734 ^ (l_735 < (p_33 > (safe_lshift_func_int16_t_s_u((p_2115->g_464 && (((0xE8842F32L ^ ((l_689 <= ((*l_709) = (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_742 || ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(((void*)0 != l_748), p_33)))), 6)) || l_691)), (*p_2115->g_729))), l_734)))) <= l_750)) , l_751) == p_33)), p_2115->g_9[2]))))) > 5UL);
                }
                for (p_2115->g_639 = 0; (p_2115->g_639 <= 1); p_2115->g_639 += 1)
                { /* block id: 348 */
                    uint32_t l_753 = 0UL;
                    int i, j, k;
                    (**l_685) = &p_2115->g_4;
                    for (p_33 = 0; (p_33 <= 5); p_33 += 1)
                    { /* block id: 352 */
                        int i;
                        (**l_685) = l_708;
                        l_753++;
                    }
                    (**l_685) = (l_666[p_2115->g_639][(p_2115->g_639 + 4)][(p_2115->g_639 + 1)] , &l_752);
                }
            }
            l_752 = (l_756 | (+((l_757 == ((safe_unary_minus_func_uint32_t_u((p_33 ^ (((((void*)0 != l_680[0][0]) >= (safe_sub_func_uint8_t_u_u(p_33, ((safe_add_func_int64_t_s_s((((l_763 != ((safe_mod_func_uint8_t_u_u(l_766[0], ((safe_div_func_int8_t_s_s((0UL || (*p_2115->g_257)), p_2115->g_201)) ^ p_2115->g_469))) , (void*)0)) || p_2115->g_435) >= p_2115->g_4), l_769[5])) && p_2115->g_495[3][1][2])))) ^ l_770) | l_756)))) , &l_749[1])) >= p_33)));
        }
        for (p_2115->g_302 = 0; (p_2115->g_302 <= 0); p_2115->g_302 += 1)
        { /* block id: 363 */
            int16_t l_771[7] = {0x2CABL,0x2CABL,0x2CABL,0x2CABL,0x2CABL,0x2CABL,0x2CABL};
            int32_t l_773 = 2L;
            int32_t l_777 = 0x30077134L;
            int32_t l_779[5] = {0x29973855L,0x29973855L,0x29973855L,0x29973855L,0x29973855L};
            uint64_t l_781[3][4] = {{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL},{8UL,8UL,8UL,8UL}};
            int32_t *l_784 = &p_2115->g_9[5];
            int32_t *l_785 = &l_777;
            int32_t *l_786 = (void*)0;
            int32_t *l_787 = &l_780;
            int32_t *l_788 = &p_2115->g_438;
            int32_t *l_789 = &l_777;
            int32_t *l_790 = &l_752;
            int32_t *l_791 = &l_752;
            int32_t *l_792 = &l_777;
            int32_t *l_793 = &l_777;
            int32_t *l_794 = &l_777;
            int32_t *l_795 = (void*)0;
            int32_t *l_796[3];
            uint32_t *l_813 = &p_2115->g_434;
            uint32_t **l_812 = &l_813;
            uint32_t *l_817[4];
            uint32_t **l_816[5][4][8] = {{{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0}},{{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0}},{{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0}},{{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0}},{{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0},{&l_817[1],(void*)0,(void*)0,&l_817[0],&l_817[0],&l_817[0],&l_817[0],(void*)0}}};
            int8_t *l_819 = &p_2115->g_469;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_796[i] = &l_775;
            for (i = 0; i < 4; i++)
                l_817[i] = &p_2115->g_201;
            for (p_2115->g_434 = 0; (p_2115->g_434 <= 2); p_2115->g_434 += 1)
            { /* block id: 366 */
                int32_t *l_772[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_772[i] = &l_691;
                l_781[1][1]++;
                if (p_2115->g_302)
                    continue;
                if (p_33)
                    continue;
            }
            p_2115->g_797++;
            if (p_2115->g_464)
                goto lbl_824;
            if (((0x7BDBA384L >= p_33) , ((((safe_mul_func_uint16_t_u_u(p_2115->g_464, (((safe_sub_func_int8_t_s_s(p_33, p_2115->g_639)) & ((((safe_rshift_func_uint8_t_u_s(((((*l_819) = (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*l_790) = ((((*l_812) = (p_33 , l_796[1])) == (l_818 = ((safe_mod_func_uint32_t_u_u(4294967292UL, ((p_33 | p_33) , p_2115->g_339))) , l_680[0][0]))) & p_33)), (**p_2115->g_728))), l_766[0]))) || 0xA5L) == p_33), 7)) , l_666[6][5][0]) | 1UL) > p_33)) , p_2115->g_86))) | p_33) >= 0x72EA8FBF6C8BE5DFL) && 251UL)))
            { /* block id: 376 */
                int32_t **l_820[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_820[i] = &l_785;
                l_821 = &p_2115->g_302;
            }
            else
            { /* block id: 378 */
                int32_t **l_822 = &l_784;
                int32_t **l_823 = &l_821;
                (*l_823) = ((*l_822) = &l_775);
                (*l_791) |= 0x3784364AL;
            }
        }
    }
    for (p_2115->g_44 = (-2); (p_2115->g_44 > 2); p_2115->g_44 = safe_add_func_int16_t_s_s(p_2115->g_44, 5))
    { /* block id: 388 */
        int32_t *l_827 = &l_752;
        int32_t **l_828 = (void*)0;
        int32_t **l_829 = &l_821;
        p_2115->g_208 = l_827;
        (*l_829) = l_827;
        return p_2115->g_438;
    }
    for (p_2115->g_797 = 0; (p_2115->g_797 > 31); p_2115->g_797 = safe_add_func_int32_t_s_s(p_2115->g_797, 8))
    { /* block id: 395 */
        uint8_t l_832 = 255UL;
        int32_t l_833[1];
        int32_t *l_834 = &l_775;
        int32_t *l_835 = &p_2115->g_9[1];
        int32_t *l_836[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_837 = 0x41841087L;
        uint8_t l_844[4][8][8] = {{{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL}},{{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL}},{{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL}},{{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL},{0x5CL,255UL,0x42L,8UL,0UL,255UL,4UL,0x5BL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_833[i] = 0x3984FCA9L;
        (*l_821) = l_832;
        l_844[2][6][3]++;
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_170 p_2115->g_257 p_2115->g_158 p_2115->g_4 p_2115->g_151 p_2115->g_152 p_2115->g_9 p_2115->g_495
 * writes: p_2115->g_170 p_2115->g_152 p_2115->g_495 p_2115->g_208
 */
uint32_t  func_34(uint16_t * p_35, uint32_t  p_36, uint32_t  p_37, int8_t  p_38, struct S0 * p_2115)
{ /* block id: 289 */
    int32_t **l_643[9];
    int32_t *l_644 = &p_2115->g_9[1];
    uint8_t l_647 = 255UL;
    uint64_t *l_657 = &p_2115->g_84;
    uint64_t **l_656 = &l_657;
    uint16_t *l_662[2];
    int64_t *l_663 = &p_2115->g_495[3][2][2];
    int i;
    for (i = 0; i < 9; i++)
        l_643[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_662[i] = (void*)0;
    l_644 = &p_2115->g_4;
    for (p_2115->g_170 = (-28); (p_2115->g_170 > 14); ++p_2115->g_170)
    { /* block id: 293 */
        --l_647;
    }
    p_2115->g_208 = (((*p_2115->g_257) && (safe_div_func_int64_t_s_s(p_36, ((*l_663) &= ((safe_add_func_int32_t_s_s(p_2115->g_170, p_37)) || ((*l_644) ^ (((safe_mul_func_uint16_t_u_u((((((*p_2115->g_151) = (*p_2115->g_151)) == ((*l_656) = &p_2115->g_84)) <= (((safe_sub_func_int32_t_s_s(0x4C5CB3DEL, ((safe_mod_func_int64_t_s_s((((p_2115->g_9[1] , (-10L)) ^ (*l_644)) != (*l_644)), 1L)) < p_38))) , l_662[0]) == &p_2115->g_245[9])) < p_36), 0x290AL)) , p_2115->g_158[4]) >= p_38))))))) , (void*)0);
    return (*l_644);
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_201 p_2115->g_158 p_2115->g_44 p_2115->g_376 p_2115->g_257 p_2115->g_302 p_2115->g_434 p_2115->g_204 p_2115->g_530 p_2115->g_57 p_2115->g_256 p_2115->g_86 p_2115->g_438 p_2115->g_245 p_2115->g_593 p_2115->g_495 p_2115->g_435 p_2115->g_9 p_2115->g_619 p_2115->g_639
 * writes: p_2115->g_438 p_2115->g_495 p_2115->g_464 p_2115->g_170 p_2115->g_302 p_2115->g_530 p_2115->g_84 p_2115->g_158 p_2115->g_9 p_2115->g_593 p_2115->g_76 p_2115->g_80 p_2115->g_619 p_2115->g_204
 */
uint16_t * func_39(uint16_t  p_40, int64_t  p_41, int32_t  p_42, int64_t  p_43, struct S0 * p_2115)
{ /* block id: 217 */
    int32_t *l_489 = (void*)0;
    int32_t *l_490[1][1][1];
    uint32_t l_493[3][7] = {{6UL,0x0F72359BL,4294967291UL,0x0F72359BL,6UL,6UL,0x0F72359BL},{6UL,0x0F72359BL,4294967291UL,0x0F72359BL,6UL,6UL,0x0F72359BL},{6UL,0x0F72359BL,4294967291UL,0x0F72359BL,6UL,6UL,0x0F72359BL}};
    int64_t *l_494[4][2] = {{&p_2115->g_495[3][2][2],&p_2115->g_495[3][2][2]},{&p_2115->g_495[3][2][2],&p_2115->g_495[3][2][2]},{&p_2115->g_495[3][2][2],&p_2115->g_495[3][2][2]},{&p_2115->g_495[3][2][2],&p_2115->g_495[3][2][2]}};
    int16_t l_508 = 0x1677L;
    uint32_t l_509[1];
    int64_t l_510 = 0x0C826E0553728DB5L;
    uint32_t *l_512 = &p_2115->g_434;
    uint32_t **l_511[7] = {&l_512,&l_512,&l_512,&l_512,&l_512,&l_512,&l_512};
    uint32_t ***l_513 = &l_511[0];
    uint32_t *l_514 = (void*)0;
    uint32_t *l_515 = &p_2115->g_464;
    uint32_t *l_516 = &p_2115->g_170;
    int32_t *l_529 = &p_2115->g_530;
    int8_t l_531 = 4L;
    int8_t l_532 = 0x5BL;
    uint64_t **l_537[5] = {&p_2115->g_152,&p_2115->g_152,&p_2115->g_152,&p_2115->g_152,&p_2115->g_152};
    uint32_t l_560 = 0x6E9B2B5DL;
    uint32_t l_562 = 0x412EEBB5L;
    int8_t l_578 = (-6L);
    int32_t l_584 = 3L;
    int64_t l_585 = 6L;
    uint8_t *l_599 = (void*)0;
    int32_t l_604 = (-1L);
    int32_t **l_608 = &l_490[0][0][0];
    int32_t ***l_607[4][9][7] = {{{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608}},{{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608},{&l_608,&l_608,&l_608,&l_608,(void*)0,&l_608,&l_608}}};
    int64_t l_640 = 1L;
    uint16_t *l_641[2][8][8] = {{{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]}},{{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]},{&p_2115->g_593,&p_2115->g_639,&p_2115->g_639,&p_2115->g_593,&p_2115->g_245[9],&p_2115->g_639,&p_2115->g_639,&p_2115->g_245[9]}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_490[i][j][k] = &p_2115->g_302;
        }
    }
    for (i = 0; i < 1; i++)
        l_509[i] = 0UL;
    p_2115->g_302 |= (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((p_43 , (p_2115->g_438 = ((void*)0 == &p_2115->g_152))), ((safe_div_func_uint64_t_u_u(l_493[0][0], p_41)) & (((((*l_516) = ((*l_515) = (((p_2115->g_495[3][2][2] = 0x3C9A92FA40C6E471L) > (((*l_513) = ((safe_lshift_func_int8_t_s_s((p_2115->g_201 == (((!(safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(l_508, l_509[0])), p_43)), p_43)) && 0x999CL) > 0x17L), l_510)), 254UL))) <= 0UL) >= 0xAD4776F9L)), p_2115->g_158[4])) , l_511[1])) == (void*)0)) >= p_2115->g_44))) == p_43) != p_2115->g_376[0]) < (*p_2115->g_257))))), p_2115->g_158[0])), p_41));
    if (((l_532 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_42, 5)), (((((safe_sub_func_uint64_t_u_u((p_2115->g_84 = (((safe_mod_func_int8_t_s_s(p_2115->g_434, (safe_add_func_uint8_t_u_u((p_2115->g_201 , (safe_div_func_uint64_t_u_u(0UL, (((*l_529) = p_43) , ((l_531 != 0x0D1AL) , (p_2115->g_204 && (p_42 | p_2115->g_530))))))), p_40)))) <= p_40) , 0UL)), p_2115->g_57)) | 1UL) > (**p_2115->g_256)) & 18446744073709551613UL) < p_2115->g_86)))) <= p_41))
    { /* block id: 227 */
        return &p_2115->g_80;
    }
    else
    { /* block id: 229 */
        uint32_t l_542 = 4294967295UL;
        int32_t *l_547 = (void*)0;
        int32_t l_549 = 1L;
        int32_t l_553 = 0x02DD75F2L;
        int32_t l_554[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
        int32_t l_561 = (-1L);
        int16_t l_577 = (-1L);
        uint32_t l_586 = 0xE9D358EBL;
        int i;
        for (p_2115->g_438 = 18; (p_2115->g_438 != (-23)); --p_2115->g_438)
        { /* block id: 232 */
            uint64_t l_541 = 18446744073709551615UL;
            int32_t l_543 = (-3L);
            int32_t l_546 = 7L;
            int32_t l_550[4][6] = {{0x6DD3F0F5L,(-2L),(-2L),0x6DD3F0F5L,0x6DD3F0F5L,(-2L)},{0x6DD3F0F5L,(-2L),(-2L),0x6DD3F0F5L,0x6DD3F0F5L,(-2L)},{0x6DD3F0F5L,(-2L),(-2L),0x6DD3F0F5L,0x6DD3F0F5L,(-2L)},{0x6DD3F0F5L,(-2L),(-2L),0x6DD3F0F5L,0x6DD3F0F5L,(-2L)}};
            int16_t l_555 = 0x681EL;
            int16_t l_556 = 8L;
            uint16_t l_557 = 0x83A5L;
            int i, j;
            if ((p_2115->g_376[0] , (-6L)))
            { /* block id: 233 */
                int64_t *l_540 = (void*)0;
                int32_t l_544 = (-1L);
                uint32_t l_545[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_545[i] = 0x180BFA50L;
                p_2115->g_302 = (l_546 = ((safe_add_func_int16_t_s_s((l_544 = ((l_543 &= (l_542 = (p_2115->g_245[9] <= (((l_537[3] == (void*)0) , (((((*l_516) = 0x40B5B3EBL) >= 0x3B9AA26AL) == (p_40 || ((safe_mod_func_uint8_t_u_u(((void*)0 == l_540), (+(((**p_2115->g_256) = l_541) >= p_41)))) ^ l_541))) < p_2115->g_434)) > p_43)))) , p_41)), l_545[0])) == p_41));
            }
            else
            { /* block id: 241 */
                int32_t **l_548 = &l_490[0][0][0];
                int32_t l_551 = 0x29DB29A4L;
                int32_t l_552[10][8][3] = {{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}},{{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L},{0x760583FBL,(-1L),0L}}};
                int i, j, k;
                (*l_548) = l_547;
                (*l_548) = (*l_548);
                --l_557;
                if (p_43)
                    continue;
            }
            l_560 |= (l_546 = (-1L));
            ++l_562;
        }
        if (p_40)
        { /* block id: 251 */
            int8_t l_565[8][1][6] = {{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}},{{0x0EL,0x0EL,0x24L,0x05L,0x25L,0x52L}}};
            int32_t l_566 = 0x2FAC4882L;
            int32_t l_567 = 0L;
            int32_t l_568 = (-3L);
            int32_t l_569 = 0L;
            int32_t l_570 = (-3L);
            int32_t l_571 = 0L;
            int32_t l_572 = 0x43BEF4F2L;
            int32_t l_573 = (-9L);
            int32_t l_574 = 0x554C1733L;
            int32_t l_575 = 1L;
            int32_t l_576 = 0x15C7B399L;
            int8_t l_579 = 7L;
            int32_t l_580 = 0L;
            int32_t l_581 = 0x3F8CA70DL;
            int32_t l_582 = (-1L);
            int32_t l_583[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_583[i] = 0L;
            p_2115->g_9[2] = 0L;
            l_586++;
            p_2115->g_9[1] = (safe_div_func_int8_t_s_s(p_41, (p_2115->g_158[3] & p_42)));
        }
        else
        { /* block id: 255 */
            uint64_t l_594 = 0xB919C713285CDAD7L;
            int32_t *l_605 = &p_2115->g_9[1];
            int32_t **l_606 = &l_547;
            l_553 = ((-3L) != ((((safe_mul_func_uint16_t_u_u(p_2115->g_593, p_2115->g_530)) == (((l_594 | ((*p_2115->g_257) = (safe_mod_func_uint32_t_u_u((((**p_2115->g_256) < (safe_mod_func_int16_t_s_s(((l_599 = l_599) != ((safe_sub_func_uint64_t_u_u(0x31D0BB61F4B41AF1L, (p_2115->g_434 ^ ((safe_add_func_uint32_t_u_u(p_41, p_2115->g_495[0][0][0])) && p_43)))) , &p_2115->g_44)), p_43))) , p_42), l_604)))) || p_2115->g_495[0][1][3]) == p_2115->g_204)) ^ 246UL) | p_2115->g_530));
            l_553 &= p_2115->g_435;
            (*l_606) = l_605;
            (*l_547) &= (&p_2115->g_197[3][0][4] == l_607[2][6][0]);
        }
    }
    (*l_608) = (void*)0;
    for (p_2115->g_593 = 0; (p_2115->g_593 >= 47); ++p_2115->g_593)
    { /* block id: 267 */
        int32_t *l_617 = &l_604;
        uint64_t *l_633[3];
        uint16_t l_638 = 0xCA96L;
        int i;
        for (i = 0; i < 3; i++)
            l_633[i] = &p_2115->g_204;
        for (p_2115->g_530 = 0; (p_2115->g_530 == (-11)); p_2115->g_530--)
        { /* block id: 270 */
            return &p_2115->g_245[8];
        }
        for (p_2115->g_76 = 12; (p_2115->g_76 >= (-20)); p_2115->g_76 = safe_sub_func_int16_t_s_s(p_2115->g_76, 4))
        { /* block id: 275 */
            for (p_2115->g_80 = 2; (p_2115->g_80 >= 42); p_2115->g_80++)
            { /* block id: 278 */
                int32_t *l_618 = &p_2115->g_9[1];
                volatile uint32_t ***l_622 = &p_2115->g_619;
                l_618 = ((*l_608) = l_617);
                (*l_622) = p_2115->g_619;
            }
        }
        l_640 = (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((+((((p_43 , p_41) & (((*l_617) = ((safe_div_func_int64_t_s_s(p_42, (p_2115->g_204 = (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((p_40 , l_633[1]) == l_633[2]), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((*l_617) | (((0x1EF9L || (-1L)) == p_41) || 0x7E3BL)), 5)), l_638)))), p_40))))) >= p_2115->g_158[3])) || (*l_617))) , 0L) <= p_2115->g_639)), 11)), p_2115->g_639));
    }
    return l_641[1][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_4 p_2115->g_170 p_2115->g_57 p_2115->g_302 p_2115->g_84 p_2115->g_9 p_2115->g_86 p_2115->g_76 p_2115->g_257 p_2115->g_158 p_2115->g_80 p_2115->g_201 p_2115->g_434 p_2115->g_204 p_2115->g_339 p_2115->g_376 p_2115->g_438 p_2115->g_435
 * writes: p_2115->g_80 p_2115->g_158 p_2115->g_9 p_2115->g_376 p_2115->g_434 p_2115->g_435 p_2115->g_302 p_2115->g_438 p_2115->g_84 p_2115->g_204 p_2115->g_170 p_2115->g_464 p_2115->g_57 p_2115->g_245 p_2115->g_76 p_2115->g_469 p_2115->g_201
 */
uint16_t * func_45(uint16_t * p_46, int32_t  p_47, uint16_t * p_48, struct S0 * p_2115)
{ /* block id: 185 */
    uint32_t *l_404 = &p_2115->g_201;
    uint32_t *l_406 = &p_2115->g_201;
    uint32_t **l_405 = &l_406;
    int32_t l_411 = 0x3A3CBB73L;
    int32_t *l_414 = (void*)0;
    int32_t *l_415 = (void*)0;
    int32_t *l_416 = &p_2115->g_9[1];
    uint8_t *l_427[1];
    int32_t *l_436 = &p_2115->g_302;
    int32_t *l_437 = &p_2115->g_438;
    uint64_t *l_439[7][8] = {{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0},{(void*)0,(void*)0,&p_2115->g_204,(void*)0,(void*)0,(void*)0,&p_2115->g_204,(void*)0}};
    uint32_t *l_440 = &p_2115->g_170;
    int32_t l_441 = 0x1F380785L;
    uint32_t *l_462 = (void*)0;
    uint32_t *l_463 = &p_2115->g_464;
    int16_t *l_465 = &p_2115->g_57;
    uint16_t *l_466[9] = {&p_2115->g_245[8],&p_2115->g_245[9],&p_2115->g_245[8],&p_2115->g_245[8],&p_2115->g_245[9],&p_2115->g_245[8],&p_2115->g_245[8],&p_2115->g_245[9],&p_2115->g_245[8]};
    int8_t *l_467 = &p_2115->g_76;
    int8_t *l_468 = &p_2115->g_469;
    int32_t *l_470 = &l_441;
    uint32_t *l_473[7] = {&p_2115->g_434,&p_2115->g_434,&p_2115->g_434,&p_2115->g_434,&p_2115->g_434,&p_2115->g_434,&p_2115->g_434};
    uint32_t l_478 = 0x8E78C534L;
    uint32_t l_481 = 4294967292UL;
    uint16_t *l_482 = &p_2115->g_245[9];
    int i, j;
    for (i = 0; i < 1; i++)
        l_427[i] = &p_2115->g_376[0];
    (*l_416) &= ((safe_lshift_func_uint16_t_u_u(((*p_46) = p_2115->g_4), 7)) ^ (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_2115->g_170, (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(((*p_48) = (safe_lshift_func_uint16_t_u_s(((l_404 == ((*l_405) = l_404)) , p_2115->g_57), (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_47, (l_411 <= (safe_rshift_func_uint16_t_u_u((p_47 || (((p_47 && p_47) <= 0L) , p_2115->g_170)), p_2115->g_302))))) , p_47), l_411))))), 0x6E6FL)), p_2115->g_84)))) && 0x169AB80C36F27D34L), l_411)) < 0x26B8L), 248UL)) != p_47), l_411)), p_2115->g_84)), p_47)) & l_411), 0x42AFL)), 249UL)));
    l_441 |= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((((*l_440) = (((*l_416) ^= (p_2115->g_376[0] = (p_47 , p_2115->g_86))) <= ((p_2115->g_204 ^= (p_2115->g_84 = (1UL | (4UL > ((*l_437) = (safe_rshift_func_int16_t_s_u((65535UL || ((safe_add_func_int32_t_s_s(((*l_436) |= (l_411 = (safe_add_func_uint8_t_u_u((p_2115->g_435 = (p_2115->g_434 |= (p_47 && (((p_2115->g_76 ^ (*p_2115->g_257)) , (((p_2115->g_80 || l_411) < 0x040C3BF3L) , 1L)) != p_2115->g_201)))), p_2115->g_170)))), p_47)) , p_2115->g_201)), (*p_46)))))))) >= p_47))) || p_47) , 0x6BL) <= p_2115->g_339), 4294967289UL)), p_2115->g_339)), 5)) ^ (-6L)) & p_2115->g_158[0]), p_2115->g_158[3])) < p_47), (*p_48)));
    (*l_470) |= (((((1L == ((safe_mul_func_int8_t_s_s(p_2115->g_158[0], ((*l_468) = (!((*l_467) = ((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(0x5CL, (p_2115->g_376[0] &= (*l_416)))) > (safe_rshift_func_uint16_t_u_u((p_2115->g_245[9] = (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(0x1DL, p_47)), 1)), ((*l_465) ^= ((safe_add_func_int64_t_s_s((-4L), (safe_lshift_func_uint16_t_u_s(((*p_46) ^= (safe_sub_func_int32_t_s_s((*l_437), ((*l_463) = ((*l_440) = (p_47 , 0xB7727273L)))))), (*l_437))))) & 0x7A51DF6250329CBFL))))), 2))), 0x768C0D647973B608L)) || p_2115->g_84)))))) ^ (*l_436))) , 0x4AL) ^ (*l_436)) <= p_47) > p_2115->g_435);
    (*l_436) &= (safe_mod_func_uint32_t_u_u((*l_416), ((p_47 != 255UL) ^ (((p_2115->g_434 = ((*l_406) = (*l_437))) , ((*l_468) = ((((*p_48)++) == 4L) < (safe_div_func_uint16_t_u_u((p_2115->g_84 , p_2115->g_9[1]), l_478))))) < (safe_mul_func_int16_t_s_s(((0UL > p_2115->g_339) , (-8L)), l_481))))));
    return l_482;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_339 p_2115->g_302 p_2115->g_158 p_2115->g_256 p_2115->g_257
 * writes: p_2115->g_339 p_2115->g_376 p_2115->g_9
 */
uint16_t * func_49(int32_t  p_50, uint16_t  p_51, uint16_t * p_52, int64_t  p_53, uint16_t  p_54, struct S0 * p_2115)
{ /* block id: 173 */
    int8_t l_359[8][6][5] = {{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}},{{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L},{(-2L),(-3L),0x33L,6L,1L}}};
    int32_t l_360 = 0L;
    int32_t l_362 = (-9L);
    int32_t l_363[5][4] = {{0x574B43AAL,0x70D06EE7L,0x26604F40L,0x70D06EE7L},{0x574B43AAL,0x70D06EE7L,0x26604F40L,0x70D06EE7L},{0x574B43AAL,0x70D06EE7L,0x26604F40L,0x70D06EE7L},{0x574B43AAL,0x70D06EE7L,0x26604F40L,0x70D06EE7L},{0x574B43AAL,0x70D06EE7L,0x26604F40L,0x70D06EE7L}};
    uint64_t l_365[10][3] = {{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL},{18446744073709551615UL,1UL,1UL}};
    int32_t *l_375[2];
    uint16_t *l_377 = &p_2115->g_80;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_375[i] = &l_362;
    for (p_2115->g_339 = 0; (p_2115->g_339 != 0); p_2115->g_339++)
    { /* block id: 176 */
        int32_t *l_350 = &p_2115->g_9[5];
        int32_t *l_351 = &p_2115->g_9[0];
        int32_t l_352 = (-10L);
        int32_t l_353 = 0x4BDC005FL;
        int32_t l_354 = 0x37FDE7ECL;
        int32_t l_355 = (-7L);
        int32_t *l_356 = &p_2115->g_9[4];
        int32_t *l_357 = &l_355;
        int32_t *l_358[9][2] = {{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302},{&l_353,&p_2115->g_302}};
        int16_t l_361[8][9][3] = {{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}},{{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L},{(-1L),7L,2L}}};
        int8_t l_364 = 3L;
        int i, j, k;
        l_365[6][2]--;
    }
    p_2115->g_9[1] = (((safe_div_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(l_360, (safe_mul_func_int64_t_s_s(p_50, ((safe_unary_minus_func_int64_t_s(p_53)) > ((p_51 <= (-1L)) , ((p_2115->g_302 < ((p_2115->g_376[0] = (4L == 0xAFL)) ^ p_2115->g_158[1])) != p_2115->g_339))))))) | p_53) || (**p_2115->g_256)), 0x37L)) , p_2115->g_158[3]) | p_51);
    l_375[1] = &l_363[0][0];
    p_2115->g_9[2] = p_51;
    return l_377;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_84 p_2115->g_256 p_2115->g_257 p_2115->g_158 p_2115->g_302 p_2115->g_170 p_2115->g_9 p_2115->g_86 p_2115->g_76
 * writes: p_2115->g_84 p_2115->g_76 p_2115->g_9 p_2115->g_302 p_2115->g_151 p_2115->g_170 p_2115->g_339 p_2115->g_86
 */
int8_t  func_58(uint16_t * p_59, struct S0 * p_2115)
{ /* block id: 140 */
    uint64_t l_287 = 0xEBB66C72AFDCE9CDL;
    int32_t l_292 = 0x0813F295L;
    int8_t l_297 = 0x0AL;
    uint64_t l_299 = 6UL;
    uint64_t **l_322 = &p_2115->g_152;
    int32_t l_336 = 0x264FC539L;
    int32_t l_337 = 0x6F29D042L;
    int64_t l_346 = (-1L);
    for (p_2115->g_84 = 0; (p_2115->g_84 != 40); p_2115->g_84 = safe_add_func_uint32_t_u_u(p_2115->g_84, 8))
    { /* block id: 143 */
        int32_t l_276 = 0L;
        int32_t l_288 = 7L;
        uint64_t ***l_291 = (void*)0;
        int8_t *l_298 = &p_2115->g_76;
        int32_t *l_300 = &p_2115->g_9[4];
        int32_t *l_301 = &p_2115->g_302;
        uint16_t *l_319 = &p_2115->g_245[8];
        uint64_t ***l_323 = &p_2115->g_151;
        uint32_t *l_328 = &p_2115->g_170;
        int8_t *l_335 = &l_297;
        int32_t *l_338 = &p_2115->g_339;
        (*l_301) = ((*l_300) = ((l_276 >= (((*l_298) = ((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_288 &= (safe_mul_func_int8_t_s_s((0x7FL <= l_287), l_276))), ((safe_add_func_uint16_t_u_u((((l_291 == (void*)0) , (l_292 = l_276)) , (safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((&l_292 == (void*)0) || 0x5E92C075L) , (-5L)), l_292)), l_297))), l_276)) != l_297))) | l_297), l_287)), 2)), 65532UL)) >= (**p_2115->g_256)) < 4294967286UL) > 0x6000DC73L)) <= l_299)) , 9L));
        if (((((safe_add_func_int32_t_s_s((((*l_338) = (l_337 ^= (0L && (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s((l_336 = (((((((safe_mul_func_uint8_t_u_u((*l_301), ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_335) = ((*l_298) |= ((l_319 != (((safe_sub_func_uint8_t_u_u((l_322 == ((*l_323) = &p_2115->g_152)), l_299)) < (safe_div_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(((*l_328)++), (safe_mul_func_int16_t_s_s(l_287, ((l_292 ^= (6UL == (safe_mod_func_uint64_t_u_u((l_299 , (*l_300)), (*l_300))))) < p_2115->g_86))))) < 1UL) , 0UL), l_297))) , (void*)0)) < 1UL))), l_299)) , (**p_2115->g_256)), p_2115->g_84)), (**p_2115->g_256))), (*l_300))) & (-10L)))) || (*l_300)) | p_2115->g_158[3]) && l_287) , 0x6CAEL) == l_287) && l_299)), 3)) | l_287), (*l_300)))))) , l_292), p_2115->g_158[3])) , p_2115->g_158[3]) && (-1L)) >= 0x6C795900L))
        { /* block id: 157 */
            uint32_t l_342[1][5][5] = {{{6UL,1UL,1UL,6UL,6UL},{6UL,1UL,1UL,6UL,6UL},{6UL,1UL,1UL,6UL,6UL},{6UL,1UL,1UL,6UL,6UL},{6UL,1UL,1UL,6UL,6UL}}};
            int i, j, k;
            (*l_301) = 0x29E822CCL;
            for (l_297 = 0; l_297 < 6; l_297 += 1)
            {
                p_2115->g_9[l_297] = 0x665C5118L;
            }
            for (p_2115->g_86 = 1; (p_2115->g_86 <= 4); p_2115->g_86 += 1)
            { /* block id: 162 */
                int32_t *l_340 = &p_2115->g_302;
                int32_t *l_341[10] = {&l_336,&l_337,&l_336,&l_336,&l_337,&l_336,&l_336,&l_337,&l_336,&l_336};
                int i;
                l_342[0][2][0]--;
                return p_2115->g_158[p_2115->g_86];
            }
            (*l_301) = 0x782E2386L;
        }
        else
        { /* block id: 167 */
            int32_t **l_345 = &l_300;
            if (l_337)
                break;
            (*l_345) = &p_2115->g_9[2];
        }
    }
    return l_346;
}


/* ------------------------------------------ */
/* 
 * reads : p_2115->g_84 p_2115->g_9 p_2115->g_80 p_2115->g_4 p_2115->g_44 p_2115->g_76 p_2115->g_86 p_2115->g_151 p_2115->g_170 p_2115->g_158 p_2115->g_197 p_2115->g_201 p_2115->g_208 p_2115->g_204 p_2115->g_245 p_2115->g_256
 * writes: p_2115->g_76 p_2115->g_86 p_2115->g_9 p_2115->g_84 p_2115->g_80 p_2115->g_170 p_2115->g_201 p_2115->g_204 p_2115->g_208 p_2115->g_245
 */
uint16_t * func_60(uint16_t  p_61, struct S0 * p_2115)
{ /* block id: 19 */
    uint64_t l_66 = 0x33BE618B2576953CL;
    uint64_t *l_75[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t *l_79 = &p_2115->g_80;
    uint64_t **l_81 = (void*)0;
    uint64_t **l_82 = &l_75[7];
    uint64_t *l_83 = &p_2115->g_84;
    int16_t *l_85 = &p_2115->g_86;
    int32_t l_87 = 0x5ACA64A9L;
    uint8_t l_88 = 1UL;
    int32_t l_94 = 0x66363114L;
    int32_t l_96 = 8L;
    int32_t l_97 = 0x105BEA62L;
    int32_t l_98[4][1][6] = {{{0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L,0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L}},{{0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L,0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L}},{{0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L,0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L}},{{0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L,0x7FE2AA96L,0x2AE9A154L,0x7FE2AA96L}}};
    uint64_t l_100 = 0x1BA941DAE9268793L;
    int16_t l_109 = 1L;
    int32_t *l_129[3][8][9] = {{{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]}},{{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]}},{{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]},{&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1],&p_2115->g_9[1]}}};
    uint16_t *l_209 = &p_2115->g_80;
    int16_t **l_261 = &l_85;
    int i, j, k;
lbl_273:
    if ((p_2115->g_9[2] = (safe_lshift_func_uint16_t_u_u((p_61 , (safe_rshift_func_int8_t_s_u((l_66 & (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(3L, p_61)), (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((p_2115->g_76 = 0x85E09B704DCF746BL) > (((safe_add_func_int32_t_s_s(l_66, 1L)) | l_66) & (l_87 = ((((*l_85) = ((l_83 = ((*l_82) = ((l_79 == (void*)0) , &l_66))) != (void*)0)) <= p_2115->g_84) ^ p_2115->g_9[4])))) , l_88), 5)), p_61))))), 6))), p_2115->g_80))))
    { /* block id: 26 */
        int32_t *l_89 = &p_2115->g_9[1];
        int32_t *l_90 = &p_2115->g_9[0];
        int32_t *l_91 = &p_2115->g_9[3];
        int32_t *l_92 = &p_2115->g_9[5];
        int32_t *l_93 = &p_2115->g_9[1];
        int32_t *l_95[1];
        int64_t l_99 = (-1L);
        uint64_t **l_150 = &l_83;
        int64_t l_157 = 5L;
        uint32_t l_159 = 0x9052CF89L;
        int i;
        for (i = 0; i < 1; i++)
            l_95[i] = (void*)0;
lbl_162:
        l_100--;
lbl_163:
        for (p_2115->g_76 = 0; (p_2115->g_76 != (-8)); p_2115->g_76 = safe_sub_func_uint8_t_u_u(p_2115->g_76, 4))
        { /* block id: 30 */
            uint32_t l_147 = 1UL;
            uint64_t ***l_148 = (void*)0;
            uint64_t ***l_149[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t l_153[2][9][4] = {{{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL}},{{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL},{0x7AFF6306L,0x9F282321L,7UL,0UL}}};
            uint16_t *l_154 = &p_2115->g_80;
            int32_t l_155 = 0x016F2BD8L;
            int32_t l_156[4][4] = {{0x5A3C54BDL,0x5A3C54BDL,0L,0x3A628D86L},{0x5A3C54BDL,0x5A3C54BDL,0L,0x3A628D86L},{0x5A3C54BDL,0x5A3C54BDL,0L,0x3A628D86L},{0x5A3C54BDL,0x5A3C54BDL,0L,0x3A628D86L}};
            int i, j, k;
            for (l_66 = 0; (l_66 == 28); l_66++)
            { /* block id: 33 */
                (*l_93) &= 0x1CC6DD0DL;
                (*l_89) = (((-5L) && ((p_2115->g_84 >= ((+0xABL) , 0x164AFFB0DC27877FL)) || p_2115->g_9[1])) && (+p_2115->g_80));
                if (p_61)
                    continue;
                for (p_2115->g_84 = 0; (p_2115->g_84 < 4); p_2115->g_84 = safe_add_func_uint8_t_u_u(p_2115->g_84, 4))
                { /* block id: 39 */
                    int32_t *l_128 = (void*)0;
                    if (p_61)
                        break;
                    (*l_91) = ((((l_109 | ((*l_79) ^= p_61)) , ((p_61 , (p_2115->g_9[5] & (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((18446744073709551607UL || (safe_add_func_uint64_t_u_u(p_2115->g_4, 0x3268F2713C04A0ACL))), 2)), 0x58D7L)))) || (((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_2115->g_44, p_61)), 1)) | p_61) != p_2115->g_76), p_2115->g_84)) && 0x426539BA07FF6E85L) | p_2115->g_44))) , l_94) < p_61);
                    for (l_99 = 14; (l_99 >= (-18)); --l_99)
                    { /* block id: 45 */
                        int32_t **l_124 = (void*)0;
                        int32_t **l_125 = &l_92;
                        int32_t **l_126 = (void*)0;
                        int32_t **l_127[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_127[i] = (void*)0;
                        l_129[1][0][8] = (l_128 = ((*l_125) = l_90));
                        if (p_2115->g_44)
                            break;
                    }
                }
            }
            l_155 ^= ((*l_93) = ((p_2115->g_9[1] && (((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(((((((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(p_61, (l_93 != &p_2115->g_4))) && (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u(p_2115->g_86)) & 65534UL), 0x0AL))), (((((l_150 = (((safe_lshift_func_int8_t_s_u(l_147, (p_61 != 0x5F9D14FDFC62104BL))) , p_61) , (void*)0)) == p_2115->g_151) , p_61) < p_61) , 7UL))), 5)) == 0x9BL) > l_153[0][2][2]) & p_2115->g_9[1]) | p_61) > p_61), (*l_89))) , (-4L)), 0UL)), p_2115->g_9[1])) , &p_61) != l_154)) < 0x833DL));
            ++l_159;
        }
        if (p_61)
            goto lbl_162;
        if (p_2115->g_80)
            goto lbl_163;
    }
    else
    { /* block id: 60 */
        int64_t l_176 = 0x1AF18FED6AD9D9C3L;
        int32_t l_181 = (-1L);
        uint16_t *l_185 = (void*)0;
        int16_t l_186 = 1L;
        int32_t **l_195 = (void*)0;
        uint64_t *l_227 = &p_2115->g_204;
        int64_t l_255[8] = {0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L,0x2D853F6273D85C89L};
        int16_t **l_260 = &p_2115->g_257;
        int32_t l_266[9][3] = {{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L},{0L,9L,0L}};
        uint8_t l_267 = 0xF6L;
        int32_t **l_271 = &l_129[0][4][6];
        int32_t **l_272 = &p_2115->g_208;
        int i, j;
lbl_270:
        for (l_109 = 0; (l_109 == 25); ++l_109)
        { /* block id: 63 */
            uint32_t *l_168 = (void*)0;
            uint32_t *l_169[3];
            int32_t l_171[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
            int8_t l_182 = 0L;
            uint16_t *l_213[1];
            int32_t l_243[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
            int32_t l_254 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_169[i] = &p_2115->g_170;
            for (i = 0; i < 1; i++)
                l_213[i] = &p_2115->g_80;
            if ((((safe_mul_func_uint8_t_u_u(((&l_98[0][0][5] != &l_98[2][0][3]) < (((0x32EA3695L > (--p_2115->g_170)) != p_61) & 2L)), (safe_add_func_uint8_t_u_u((p_2115->g_76 , p_2115->g_80), (l_176 &= p_2115->g_158[1]))))) > (safe_div_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((1UL & l_181) && 0x6691D693L), p_61)) , l_171[3]) , 0x535FL), l_182))) < p_61))
            { /* block id: 66 */
                int32_t ***l_196 = &l_195;
                uint32_t *l_200 = &p_2115->g_201;
                for (l_96 = 29; (l_96 == 18); l_96 = safe_sub_func_int32_t_s_s(l_96, 1))
                { /* block id: 69 */
                    for (l_66 = 0; (l_66 <= 5); l_66 += 1)
                    { /* block id: 72 */
                        return l_185;
                    }
                    if (l_186)
                        continue;
                }
                if ((((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((p_2115->g_204 = (((8L & ((safe_div_func_uint32_t_u_u(((l_181 & p_2115->g_9[3]) , (l_171[3] ^= p_61)), (safe_div_func_int16_t_s_s(((*l_85) |= (((*l_196) = l_195) != p_2115->g_197[1][0][1])), p_2115->g_44)))) <= (((*l_200) ^= 0x4BC22663L) , (safe_div_func_int8_t_s_s(((p_61 , p_61) > p_61), p_61))))) <= p_61) | p_2115->g_4)), p_2115->g_158[3])), p_61)) > l_182) || p_61))
                { /* block id: 82 */
                    p_2115->g_9[1] = ((void*)0 != l_196);
                    if (l_171[3])
                        continue;
                }
                else
                { /* block id: 85 */
                    int32_t *l_207 = &l_97;
                    for (p_2115->g_201 = 0; (p_2115->g_201 == 28); p_2115->g_201 = safe_add_func_int32_t_s_s(p_2115->g_201, 3))
                    { /* block id: 88 */
                        p_2115->g_208 = l_207;
                    }
                }
                if (p_61)
                { /* block id: 92 */
                    (*p_2115->g_208) |= ((void*)0 != l_209);
                    l_171[3] = (safe_unary_minus_func_int16_t_s((safe_sub_func_uint8_t_u_u(0x9EL, p_2115->g_9[1]))));
                }
                else
                { /* block id: 95 */
                    return l_213[0];
                }
            }
            else
            { /* block id: 98 */
                int16_t *l_214 = &l_186;
                int32_t *l_215 = &p_2115->g_9[1];
                int32_t **l_216 = (void*)0;
                int32_t **l_217 = &p_2115->g_208;
                (*l_217) = ((l_214 != (void*)0) , l_215);
            }
            if (((*p_2115->g_208) = (safe_rshift_func_uint16_t_u_s(((*l_79) = p_2115->g_201), (p_2115->g_204 <= l_171[3])))))
            { /* block id: 103 */
                int32_t ***l_224 = &l_195;
                int64_t *l_228 = &l_176;
                uint8_t l_229 = 0x2CL;
                (*p_2115->g_208) = ((((safe_mod_func_int32_t_s_s((l_185 != l_79), (safe_div_func_uint16_t_u_u(((void*)0 != l_224), ((((safe_div_func_uint8_t_u_u(((l_227 == ((((~((void*)0 != &p_2115->g_152)) ^ ((*l_228) = (p_2115->g_80 && (-1L)))) && 0x3453B588L) , (void*)0)) ^ p_61), p_61)) | p_2115->g_204) , p_61) , l_229))))) , 18446744073709551615UL) , p_61) > p_61);
                for (l_182 = 0; (l_182 != 20); l_182++)
                { /* block id: 108 */
                    uint32_t l_232 = 0x0A3DE2B7L;
                    int32_t **l_244 = &l_129[1][0][8];
                    uint16_t **l_250 = (void*)0;
                    int32_t *l_253 = &l_171[5];
                    ++l_232;
                    l_255[7] ^= (l_254 = ((*l_253) = (safe_add_func_int32_t_s_s(((*p_2115->g_208) = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((*p_2115->g_208), l_243[7])) != (&l_94 != ((*l_244) = &l_96))), ((p_2115->g_245[9] &= 0L) > (safe_div_func_uint16_t_u_u((--(*l_209)), ((((p_2115->g_9[3] , (l_213[0] = &p_61)) != ((((safe_sub_func_int32_t_s_s((-1L), (p_61 , p_2115->g_170))) < 0x2662L) <= p_61) , &p_61)) || p_61) , p_2115->g_201)))))), p_2115->g_9[1]))), p_2115->g_158[3]))));
                }
                if (l_109)
                    goto lbl_273;
            }
            else
            { /* block id: 119 */
                int16_t ***l_258 = (void*)0;
                int16_t ***l_259[8] = {&p_2115->g_256,&p_2115->g_256,&p_2115->g_256,&p_2115->g_256,&p_2115->g_256,&p_2115->g_256,&p_2115->g_256,&p_2115->g_256};
                int32_t l_263 = 1L;
                int32_t l_264 = 0x72AD46ABL;
                int32_t l_265 = 0x397466EFL;
                int i;
                l_261 = (l_260 = p_2115->g_256);
                for (l_181 = 8; (l_181 >= 1); l_181 -= 1)
                { /* block id: 124 */
                    int32_t **l_262 = &l_129[1][0][8];
                    int i;
                    (*l_262) = &l_171[l_181];
                    return &p_2115->g_245[9];
                }
                --l_267;
                if (p_2115->g_204)
                    goto lbl_270;
            }
            return &p_2115->g_245[9];
        }
        (*l_272) = ((*l_271) = (void*)0);
    }
    p_2115->g_9[1] = p_2115->g_9[2];
    p_2115->g_9[1] &= (&l_85 == &l_85);
    return l_209;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2116;
    struct S0* p_2115 = &c_2116;
    struct S0 c_2117 = {
        0x094A1888L, // p_2115->g_2
        3L, // p_2115->g_3
        0x06E60B0CL, // p_2115->g_4
        0x3034D006L, // p_2115->g_7
        0x1323D1BCL, // p_2115->g_8
        {(-4L),0x0815CBCEL,(-4L),(-4L),0x0815CBCEL,(-4L)}, // p_2115->g_9
        0x19L, // p_2115->g_44
        0x7323L, // p_2115->g_57
        0x1CL, // p_2115->g_76
        0xC241L, // p_2115->g_80
        18446744073709551612UL, // p_2115->g_84
        0x6EDFL, // p_2115->g_86
        (void*)0, // p_2115->g_152
        &p_2115->g_152, // p_2115->g_151
        {3L,3L,3L,3L,3L}, // p_2115->g_158
        0x12867139L, // p_2115->g_170
        0x34788FA9L, // p_2115->g_199
        &p_2115->g_199, // p_2115->g_198
        {{{&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198}},{{&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198}},{{&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198}},{{&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198,&p_2115->g_198}}}, // p_2115->g_197
        9UL, // p_2115->g_201
        2UL, // p_2115->g_204
        &p_2115->g_9[5], // p_2115->g_208
        {0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L,0x94A5L}, // p_2115->g_245
        &p_2115->g_158[3], // p_2115->g_257
        &p_2115->g_257, // p_2115->g_256
        (-1L), // p_2115->g_302
        0L, // p_2115->g_339
        {0x47L}, // p_2115->g_376
        4294967286UL, // p_2115->g_434
        0x07D0L, // p_2115->g_435
        0x3DABA20AL, // p_2115->g_438
        4294967295UL, // p_2115->g_464
        0x37L, // p_2115->g_469
        {{{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L}},{{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L}},{{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L}},{{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L},{0x2A2A5F4B9094F612L,0x14FE11B2083721AAL,0x2415C76B67865398L,0x627C89B8E4B74593L,0x558FA28671121C57L,0L}}}, // p_2115->g_495
        (-1L), // p_2115->g_530
        0UL, // p_2115->g_593
        4294967289UL, // p_2115->g_621
        &p_2115->g_621, // p_2115->g_620
        &p_2115->g_620, // p_2115->g_619
        0xC2FCL, // p_2115->g_639
        &p_2115->g_464, // p_2115->g_729
        &p_2115->g_729, // p_2115->g_728
        0x90L, // p_2115->g_797
        1L, // p_2115->g_909
        (-8L), // p_2115->g_1042
        &p_2115->g_339, // p_2115->g_1088
        &p_2115->g_1088, // p_2115->g_1087
        (void*)0, // p_2115->g_1130
        1L, // p_2115->g_1216
        4UL, // p_2115->g_1218
        0x4997BC48L, // p_2115->g_1228
        2UL, // p_2115->g_1276
        {5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}, // p_2115->g_1298
        &p_2115->g_1298[2], // p_2115->g_1297
        &p_2115->g_1088, // p_2115->g_1356
        &p_2115->g_1356, // p_2115->g_1355
        &p_2115->g_1355, // p_2115->g_1354
        &p_2115->g_797, // p_2115->g_1406
        &p_2115->g_1406, // p_2115->g_1405
        &p_2115->g_909, // p_2115->g_1434
        &p_2115->g_1434, // p_2115->g_1433
        0xD975F9DEL, // p_2115->g_1439
        1L, // p_2115->g_1759
        0L, // p_2115->g_1844
        &p_2115->g_208, // p_2115->g_1863
        {{{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863}},{{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863},{&p_2115->g_1863,&p_2115->g_1863}}}, // p_2115->g_1862
        {&p_2115->g_1862[1][0][1],&p_2115->g_1862[1][0][1],&p_2115->g_1862[1][0][1]}, // p_2115->g_1861
        (void*)0, // p_2115->g_2082
    };
    c_2116 = c_2117;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2115);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2115->g_2, "p_2115->g_2", print_hash_value);
    transparent_crc(p_2115->g_3, "p_2115->g_3", print_hash_value);
    transparent_crc(p_2115->g_4, "p_2115->g_4", print_hash_value);
    transparent_crc(p_2115->g_7, "p_2115->g_7", print_hash_value);
    transparent_crc(p_2115->g_8, "p_2115->g_8", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2115->g_9[i], "p_2115->g_9[i]", print_hash_value);

    }
    transparent_crc(p_2115->g_44, "p_2115->g_44", print_hash_value);
    transparent_crc(p_2115->g_57, "p_2115->g_57", print_hash_value);
    transparent_crc(p_2115->g_76, "p_2115->g_76", print_hash_value);
    transparent_crc(p_2115->g_80, "p_2115->g_80", print_hash_value);
    transparent_crc(p_2115->g_84, "p_2115->g_84", print_hash_value);
    transparent_crc(p_2115->g_86, "p_2115->g_86", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2115->g_158[i], "p_2115->g_158[i]", print_hash_value);

    }
    transparent_crc(p_2115->g_170, "p_2115->g_170", print_hash_value);
    transparent_crc(p_2115->g_199, "p_2115->g_199", print_hash_value);
    transparent_crc(p_2115->g_201, "p_2115->g_201", print_hash_value);
    transparent_crc(p_2115->g_204, "p_2115->g_204", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2115->g_245[i], "p_2115->g_245[i]", print_hash_value);

    }
    transparent_crc(p_2115->g_302, "p_2115->g_302", print_hash_value);
    transparent_crc(p_2115->g_339, "p_2115->g_339", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_2115->g_376[i], "p_2115->g_376[i]", print_hash_value);

    }
    transparent_crc(p_2115->g_434, "p_2115->g_434", print_hash_value);
    transparent_crc(p_2115->g_435, "p_2115->g_435", print_hash_value);
    transparent_crc(p_2115->g_438, "p_2115->g_438", print_hash_value);
    transparent_crc(p_2115->g_464, "p_2115->g_464", print_hash_value);
    transparent_crc(p_2115->g_469, "p_2115->g_469", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2115->g_495[i][j][k], "p_2115->g_495[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2115->g_530, "p_2115->g_530", print_hash_value);
    transparent_crc(p_2115->g_593, "p_2115->g_593", print_hash_value);
    transparent_crc(p_2115->g_621, "p_2115->g_621", print_hash_value);
    transparent_crc(p_2115->g_639, "p_2115->g_639", print_hash_value);
    transparent_crc(p_2115->g_797, "p_2115->g_797", print_hash_value);
    transparent_crc(p_2115->g_909, "p_2115->g_909", print_hash_value);
    transparent_crc(p_2115->g_1042, "p_2115->g_1042", print_hash_value);
    transparent_crc(p_2115->g_1216, "p_2115->g_1216", print_hash_value);
    transparent_crc(p_2115->g_1218, "p_2115->g_1218", print_hash_value);
    transparent_crc(p_2115->g_1228, "p_2115->g_1228", print_hash_value);
    transparent_crc(p_2115->g_1276, "p_2115->g_1276", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2115->g_1298[i], "p_2115->g_1298[i]", print_hash_value);

    }
    transparent_crc(p_2115->g_1439, "p_2115->g_1439", print_hash_value);
    transparent_crc(p_2115->g_1759, "p_2115->g_1759", print_hash_value);
    transparent_crc(p_2115->g_1844, "p_2115->g_1844", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
