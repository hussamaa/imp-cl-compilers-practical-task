// -g 37,95,1 -l 37,5,1
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


// Seed: 1882743668

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    int32_t g_8;
    int32_t *g_7;
    uint32_t g_26;
    volatile int32_t g_43[9][4];
    uint32_t g_51;
    uint32_t g_53;
    uint8_t g_62;
    int32_t g_77;
    uint64_t g_83;
    int64_t g_110;
    int16_t g_144;
    int32_t g_151;
    int8_t g_174[3];
    uint32_t *g_182;
    int32_t * volatile g_224;
    uint32_t **g_227;
    uint8_t g_243;
    int8_t g_245;
    int64_t *g_258;
    int16_t g_312[2];
    int8_t *g_315;
    int16_t g_327;
    int32_t ** volatile g_334;
    int32_t ** volatile g_335;
    int32_t ** volatile g_387;
    int64_t g_405;
    int32_t ** volatile g_428;
    int32_t ** volatile g_429;
    uint32_t g_446;
    int64_t g_459;
    uint64_t ** volatile *g_500;
    int32_t g_502[2][8];
    uint64_t g_520;
    uint16_t g_523;
    uint16_t *g_522[2];
    int32_t *g_536;
    int16_t g_581;
    uint8_t *g_597;
    uint8_t **g_596;
    uint8_t ***g_595;
    uint16_t **g_606;
    volatile uint32_t *g_637[6];
    volatile uint32_t **g_636;
    volatile uint32_t ***g_635[6][9];
    volatile uint32_t ****g_634;
    uint32_t ***g_665[8];
    uint32_t ****g_664;
    uint16_t g_732;
    uint32_t g_753;
    volatile uint16_t g_817;
    int32_t g_882;
    int32_t g_888;
    uint64_t g_890;
    uint64_t *g_919;
    uint64_t **g_918;
    int32_t * volatile g_954;
    int32_t * volatile g_1026;
    volatile int64_t g_1094;
    int16_t g_1098;
    int16_t g_1122;
    int8_t g_1189;
    volatile int8_t g_1273;
    int32_t ** volatile g_1282;
    int32_t ** volatile g_1284;
    uint64_t *g_1391[4][4];
    int32_t *g_1422;
    uint64_t **g_1454;
    volatile int16_t * volatile g_1482;
    volatile int16_t * volatile * volatile g_1481[6][1];
    int32_t * volatile g_1509;
    int32_t * volatile g_1537[1][1][1];
    int32_t ** volatile g_1538;
    int32_t * volatile g_1551;
    int64_t g_1598;
    int32_t * volatile g_1646;
    int16_t *g_1672;
    int16_t **g_1671;
    int32_t ** volatile g_1689;
    int32_t ** volatile g_1720;
    int32_t ** volatile g_1887;
    int32_t ** volatile g_1930[2][9][1];
    uint16_t **g_1989;
    int32_t ** volatile g_2175;
    volatile uint8_t g_2234;
    volatile uint8_t *g_2233;
    volatile uint8_t ** volatile g_2232;
    volatile uint8_t ** volatile *g_2231;
    volatile uint8_t ** volatile * volatile * volatile g_2230[10][7][3];
    volatile uint8_t ** volatile * volatile * volatile *g_2229[6];
    volatile uint8_t ** volatile * volatile * volatile ** volatile g_2228;
    uint32_t g_2245;
    int32_t *g_2283;
    int32_t **g_2282;
    int32_t *** volatile g_2281;
    uint16_t g_2426[2][6];
    uint8_t g_2428;
    int32_t * volatile g_2460;
    volatile int32_t g_2466;
    volatile uint16_t ** volatile * volatile *g_2481;
    volatile uint16_t ** volatile * volatile **g_2480[1];
    uint16_t ***g_2484;
    uint16_t ****g_2483;
    uint16_t *****g_2482;
    int32_t * volatile g_2499;
    volatile int16_t * volatile g_2530;
    volatile int16_t * volatile *g_2529;
    volatile int16_t * volatile ** volatile g_2528;
    volatile int16_t * volatile ** volatile *g_2527;
    int64_t g_2535;
    volatile int32_t g_2581;
    int32_t *g_2587;
    int16_t ***g_2589;
    int16_t ****g_2588[5];
    uint32_t g_2673[2];
    int32_t **g_2709;
    uint32_t g_2816;
    volatile int32_t g_2860;
    volatile int32_t ** volatile g_2922;
    uint8_t g_2954;
    int64_t g_2955;
    volatile int32_t g_2977;
    int8_t g_3008;
    volatile int32_t g_3009;
    uint64_t g_3095;
    uint64_t g_3096;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S0 * p_3104);
int32_t * func_11(int32_t ** p_12, int32_t  p_13, int32_t * p_14, int64_t  p_15, int32_t * p_16, struct S0 * p_3104);
int32_t ** func_17(int32_t  p_18, struct S0 * p_3104);
int16_t  func_21(uint8_t  p_22, uint32_t  p_23, uint64_t  p_24, struct S0 * p_3104);
uint8_t  func_33(uint64_t  p_34, int32_t * p_35, uint32_t  p_36, int32_t * p_37, struct S0 * p_3104);
uint32_t  func_40(uint64_t  p_41, struct S0 * p_3104);
int32_t * func_54(uint8_t  p_55, int16_t  p_56, int32_t  p_57, uint32_t  p_58, struct S0 * p_3104);
uint64_t  func_70(int32_t ** p_71, int64_t  p_72, struct S0 * p_3104);
int32_t * func_91(int64_t  p_92, uint8_t  p_93, int64_t  p_94, int16_t  p_95, struct S0 * p_3104);
int32_t * func_99(int32_t  p_100, int8_t  p_101, int8_t  p_102, int32_t ** p_103, int32_t  p_104, struct S0 * p_3104);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_3104->g_2 p_3104->g_8 p_3104->g_2233 p_3104->g_2234 p_3104->g_26 p_3104->g_315 p_3104->g_174 p_3104->g_1454 p_3104->g_1391 p_3104->g_1422 p_3104->g_1989 p_3104->g_522 p_3104->g_523 p_3104->g_3095 p_3104->g_3096 p_3104->g_83 p_3104->g_2482 p_3104->g_2483 p_3104->g_2484 p_3104->g_606
 * writes: p_3104->g_2 p_3104->g_7 p_3104->g_8 p_3104->g_1098 p_3104->g_327 p_3104->g_83 p_3104->g_1422
 */
uint64_t  func_1(struct S0 * p_3104)
{ /* block id: 4 */
    int8_t l_49 = 0x66L;
    int64_t l_2355 = 0L;
    int32_t l_2959 = 0x793D9578L;
    uint16_t **l_2979 = &p_3104->g_522[0];
    int8_t l_3021 = 0x76L;
    int32_t l_3029 = 2L;
    int32_t *l_3035[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_3074 = 0x6A1FA39CL;
    uint8_t l_3079[9][6] = {{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL},{1UL,0UL,255UL,1UL,0UL,0xABL}};
    int16_t *l_3080 = (void*)0;
    int16_t *l_3081 = &p_3104->g_1098;
    int16_t *l_3082 = &p_3104->g_327;
    int64_t l_3091 = 0x4F55794E7C8D80D1L;
    int32_t l_3092[7] = {0x231778C2L,0x231778C2L,0x231778C2L,0x231778C2L,0x231778C2L,0x231778C2L,0x231778C2L};
    int8_t l_3093 = 0x5BL;
    uint16_t l_3094 = 0x5CB1L;
    uint64_t l_3097 = 0UL;
    int32_t **l_3098 = &p_3104->g_1422;
    uint32_t l_3101 = 0UL;
    int i, j;
    for (p_3104->g_2 = (-25); (p_3104->g_2 == (-11)); p_3104->g_2 = safe_add_func_uint8_t_u_u(p_3104->g_2, 7))
    { /* block id: 7 */
        int32_t *l_5 = (void*)0;
        int32_t **l_6[8] = {&l_5,&l_5,&l_5,&l_5,&l_5,&l_5,&l_5,&l_5};
        int32_t *l_2354[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t l_2958 = 0xB7L;
        int32_t l_3010 = 0x02EDA698L;
        int16_t l_3012[10] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        uint64_t l_3028 = 0x3F7D49F2C4BB1021L;
        uint64_t *l_3060 = &p_3104->g_520;
        uint16_t l_3076 = 1UL;
        int i;
        p_3104->g_7 = l_5;
        for (p_3104->g_8 = 0; (p_3104->g_8 == (-12)); p_3104->g_8 = safe_sub_func_int16_t_s_s(p_3104->g_8, 4))
        { /* block id: 11 */
            uint32_t *l_25 = &p_3104->g_26;
            int32_t l_48 = 0x3A796726L;
            int32_t *l_2925 = &p_3104->g_151;
            uint64_t *l_2998 = (void*)0;
            uint64_t *l_2999 = &p_3104->g_83;
            int32_t *l_3055 = (void*)0;
            uint8_t *l_3063 = &l_2958;
            uint32_t l_3068[6] = {9UL,4294967294UL,9UL,9UL,4294967294UL,9UL};
            uint16_t l_3069 = 0UL;
            uint64_t **l_3070 = &l_3060;
            int i;
            (1 + 1);
        }
    }
    (*l_3098) = func_54((0x93E17CAA9A6E3E3BL > (safe_rshift_func_uint16_t_u_u(((((*l_3082) = ((*l_3081) = (l_3079[5][2] = (-4L)))) != (((safe_lshift_func_uint16_t_u_u(((void*)0 != &l_3029), 6)) , ((((&l_2355 == &p_3104->g_1094) <= (*p_3104->g_2233)) | (safe_add_func_uint16_t_u_u(((p_3104->g_26 >= ((**p_3104->g_1454) = ((safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(l_3091, l_3092[1])) , 255UL) == (*p_3104->g_315)), l_3093)) & l_3094))) , 7UL), (-4L)))) == 1UL)) && 0xEC7CL)) >= (*p_3104->g_1422)), (**p_3104->g_1989)))), p_3104->g_3095, p_3104->g_3096, l_3097, p_3104);
    (*l_3098) = func_54(((**l_3098) >= (*****p_3104->g_2482)), (**l_3098), ((**l_3098) , ((safe_sub_func_int8_t_s_s((0xDDL <= 1UL), (**l_3098))) > 0x34A8341DL)), (**l_3098), p_3104);
    ++l_3101;
    return (**l_3098);
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_62 p_3104->g_1646 p_3104->g_151 p_3104->g_2 p_3104->g_1989 p_3104->g_522 p_3104->g_315 p_3104->g_174 p_3104->g_890 p_3104->g_1422 p_3104->g_1454 p_3104->g_1391 p_3104->g_83 p_3104->g_2228 p_3104->g_2229 p_3104->g_2230 p_3104->g_1671 p_3104->g_1672 p_3104->g_606 p_3104->g_523 p_3104->g_77 p_3104->g_2426 p_3104->g_53 p_3104->g_51 p_3104->g_8 p_3104->g_43 p_3104->g_7 p_3104->g_2281 p_3104->g_2282 p_3104->g_2283 p_3104->g_2428 p_3104->g_243 p_3104->g_144 p_3104->g_2460 p_3104->g_224 p_3104->g_954 p_3104->g_2480 p_3104->g_2482 p_3104->g_2233 p_3104->g_2234 p_3104->g_1098 p_3104->g_2527 p_3104->g_2535 p_3104->g_664 p_3104->g_405 p_3104->g_918 p_3104->g_919 p_3104->g_2232 p_3104->g_581 p_3104->g_2581 p_3104->g_1189 p_3104->g_2587 p_3104->g_2588 p_3104->g_753 p_3104->g_428 p_3104->g_2483 p_3104->g_2484 p_3104->g_1887 p_3104->g_26 p_3104->g_2673 p_3104->g_446 p_3104->g_882 p_3104->g_459 p_3104->g_520 p_3104->g_2709 p_3104->g_245 p_3104->g_110 p_3104->g_335 p_3104->g_502 p_3104->g_888 p_3104->g_595 p_3104->g_596 p_3104->g_2860 p_3104->g_2175 p_3104->g_536 p_3104->g_1122 p_3104->g_637 p_3104->g_1538
 * writes: p_3104->g_26 p_3104->g_523 p_3104->g_890 p_3104->g_459 p_3104->g_522 p_3104->g_243 p_3104->g_1598 p_3104->g_1672 p_3104->g_77 p_3104->g_144 p_3104->g_110 p_3104->g_151 p_3104->g_7 p_3104->g_174 p_3104->g_182 p_3104->g_51 p_3104->g_1422 p_3104->g_882 p_3104->g_1122 p_3104->g_1098 p_3104->g_1671 p_3104->g_327 p_3104->g_2535 p_3104->g_665 p_3104->g_83 p_3104->g_1454 p_3104->g_664 p_3104->g_732 p_3104->g_1189 p_3104->g_2588 p_3104->g_753 p_3104->g_1537 p_3104->g_2673 p_3104->g_446 p_3104->g_62 p_3104->g_520 p_3104->g_2428 p_3104->g_502 p_3104->g_2816 p_3104->g_888 p_3104->g_312
 */
int32_t * func_11(int32_t ** p_12, int32_t  p_13, int32_t * p_14, int64_t  p_15, int32_t * p_16, struct S0 * p_3104)
{ /* block id: 1124 */
    uint8_t l_2358 = 255UL;
    uint32_t *l_2361 = (void*)0;
    uint32_t *l_2362 = &p_3104->g_26;
    uint8_t l_2383 = 255UL;
    uint16_t *l_2395 = &p_3104->g_523;
    int32_t **l_2439 = &p_3104->g_2283;
    int16_t l_2463[10][7][3] = {{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}},{{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L},{0x705AL,1L,4L}}};
    int32_t l_2467 = 0x1E42BA7CL;
    int32_t l_2468 = 0x6FFFEC62L;
    int32_t l_2470 = 0x597F23F9L;
    int32_t l_2475 = 0x716FA684L;
    uint32_t ***l_2536 = &p_3104->g_227;
    uint16_t ***l_2584 = &p_3104->g_606;
    int16_t ****l_2592 = (void*)0;
    uint64_t *l_2600[2];
    int32_t l_2628[8] = {0x0AA0588AL,0x2B3332F2L,0x0AA0588AL,0x0AA0588AL,0x2B3332F2L,0x0AA0588AL,0x0AA0588AL,0x2B3332F2L};
    int32_t l_2656 = 0x6C471A32L;
    int32_t l_2657 = (-10L);
    int32_t l_2658 = 1L;
    int32_t l_2659 = (-1L);
    int32_t l_2660 = 0x437C5D59L;
    int32_t l_2662 = 0L;
    int32_t l_2663 = 0x69BD8A8CL;
    int32_t l_2664 = 0x5B25C237L;
    int32_t l_2788[5] = {0L,0L,0L,0L,0L};
    int16_t l_2848 = (-1L);
    uint64_t **l_2851[8] = {&p_3104->g_919,&p_3104->g_919,&p_3104->g_919,&p_3104->g_919,&p_3104->g_919,&p_3104->g_919,&p_3104->g_919,&p_3104->g_919};
    uint32_t l_2853 = 4UL;
    int32_t l_2882 = 0L;
    int64_t l_2901 = 0x3150D52CB3E31249L;
    int32_t l_2902 = 0x24B84818L;
    int64_t l_2906 = (-7L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2600[i] = (void*)0;
    if ((0x19L & (safe_sub_func_int32_t_s_s(l_2358, (safe_div_func_int8_t_s_s((((*l_2362) = p_3104->g_62) | ((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((((p_15 == 0x1EA6BDB9CB071589L) < ((**p_3104->g_1989) = ((((+l_2358) , (p_13 > (safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((3L ^ (safe_rshift_func_int16_t_s_u((1UL | (*p_3104->g_1646)), p_15))), (*p_16))), 5)), 0x30191823L)) == 0x7E611F49L), l_2358)) , l_2358), l_2358)))) , p_15) != p_15))) | 0xFBL), l_2383)) || l_2358), 0x22C2A40DF2292564L)), 0xE822A5E9BBF391ECL)) && p_15) != p_15), 5)) | 0x94L)), (*p_3104->g_315)))))))
    { /* block id: 1127 */
        uint8_t *l_2398 = &p_3104->g_243;
        uint32_t l_2405 = 0x02EDE02FL;
        uint16_t ***l_2424[5][7][7] = {{{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989}},{{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989}},{{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989}},{{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989}},{{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989},{&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,&p_3104->g_606,(void*)0,&p_3104->g_606,&p_3104->g_1989}}};
        uint16_t ****l_2423 = &l_2424[4][0][2];
        uint64_t l_2441 = 0xADCE9E878519C44AL;
        int32_t l_2442 = 0x6ED0D1A3L;
        int32_t l_2471 = 0x3929547BL;
        int32_t l_2476 = 0x77939585L;
        uint8_t *****l_2493 = (void*)0;
        int32_t *l_2500 = &p_3104->g_151;
        int16_t **l_2520 = &p_3104->g_1672;
        uint32_t ***l_2537 = &p_3104->g_227;
        int64_t *l_2538 = &p_3104->g_2535;
        uint64_t **l_2545 = &p_3104->g_1391[3][0];
        int i, j, k;
        for (p_3104->g_890 = 0; (p_3104->g_890 < 33); p_3104->g_890 = safe_add_func_uint32_t_u_u(p_3104->g_890, 1))
        { /* block id: 1130 */
            uint16_t *l_2397 = &p_3104->g_732;
            uint8_t *l_2399[7][1] = {{&p_3104->g_243},{&p_3104->g_243},{&p_3104->g_243},{&p_3104->g_243},{&p_3104->g_243},{&p_3104->g_243},{&p_3104->g_243}};
            int32_t l_2404 = 0x5A926D55L;
            int32_t l_2412[6] = {1L,1L,1L,1L,1L,1L};
            int32_t l_2469 = 6L;
            int32_t l_2473 = 1L;
            int32_t l_2474 = 1L;
            uint16_t *****l_2485 = &l_2423;
            int i, j;
            for (p_3104->g_459 = 0; (p_3104->g_459 <= 3); p_3104->g_459 += 1)
            { /* block id: 1133 */
                int32_t l_2386 = 1L;
                uint16_t *l_2396 = &p_3104->g_523;
                uint32_t ****l_2406[1];
                uint16_t ***l_2421 = &p_3104->g_1989;
                uint16_t ****l_2420 = &l_2421;
                uint8_t l_2427 = 1UL;
                uint32_t l_2477 = 0UL;
                uint64_t l_2488 = 0x6AC7CC95AACB295EL;
                uint8_t ******l_2494 = (void*)0;
                uint8_t ******l_2495 = &l_2493;
                int32_t *l_2496 = &l_2474;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2406[i] = (void*)0;
                if (((~l_2386) >= (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*p_12) == l_2361), ((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((((*p_3104->g_1989) = l_2395) != (l_2397 = l_2396)) , l_2398) == l_2399[6][0]), (p_13 >= ((+(safe_mul_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((((l_2404 < 0x51L) && 0x3CE7L) == (**p_3104->g_1454)), 0x59773ACBL)) == 0x4539FE3DL) ^ p_15), p_13))) >= (**p_3104->g_1454))))), (**p_3104->g_1454))) , l_2386))), p_13)) , l_2405) == p_13)))
                { /* block id: 1136 */
                    int32_t l_2411 = 0x62C7F202L;
                    int32_t ***l_2440[4][9] = {{&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439},{&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439},{&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439},{&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439,&l_2439,&p_3104->g_2282,&l_2439}};
                    int32_t **l_2443 = &p_3104->g_1422;
                    int i, j;
                    l_2412[4] ^= (((0x7CAC3107L <= ((void*)0 != l_2406[0])) | p_15) | (+(((((*l_2398) = (((void*)0 == (**p_3104->g_2228)) <= (0x1D9EB298362EE366L != (safe_add_func_uint64_t_u_u((l_2405 | (safe_add_func_int64_t_s_s((&p_3104->g_1598 != (void*)0), l_2411))), 1UL))))) >= l_2411) && (-1L)) ^ 18446744073709551615UL)));
                    for (p_3104->g_1598 = 0; (p_3104->g_1598 < (-27)); p_3104->g_1598--)
                    { /* block id: 1141 */
                        uint16_t *****l_2422 = &l_2420;
                        int32_t *l_2425 = &p_3104->g_77;
                        (*l_2425) |= (((**p_3104->g_606) ^= (safe_div_func_int16_t_s_s((((!((safe_add_func_int16_t_s_s(l_2386, (((l_2386 <= (-5L)) ^ ((safe_unary_minus_func_int32_t_s(((p_15 , l_2396) == ((*p_3104->g_1671) = (*p_3104->g_1671))))) & (((*l_2422) = l_2420) != l_2423))) < 0xCC47L))) < 0x0FFD9226A75465E9L)) , p_13) || 0xAF32937BL), l_2404))) > 65535UL);
                    }
                    (*p_12) = func_99(p_3104->g_2426[0][2], (*p_3104->g_315), p_13, &p_3104->g_7, l_2427, p_3104);
                    (*p_12) = func_99((((**p_3104->g_2281) == p_14) != (p_3104->g_2428 & ((+((l_2442 ^= ((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(8UL, (p_15 < (18446744073709551615UL & ((safe_div_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((((l_2439 = l_2439) != (void*)0) , ((*l_2398) |= l_2358)), l_2358)) ^ l_2405) >= 0x06L), p_3104->g_144)) < 0x421A842CL))))), l_2386)) & l_2441)) && 7L)) && (*p_3104->g_315)))), (*p_3104->g_315), (*p_3104->g_315), l_2443, l_2383, p_3104);
                }
                else
                { /* block id: 1152 */
                    uint64_t l_2453 = 0x9833CADF7F26F6ACL;
                    (*p_12) = (void*)0;
                    l_2442 &= (((safe_sub_func_int16_t_s_s((0x0478397BL == l_2412[0]), ((((0L ^ (safe_add_func_int64_t_s_s((l_2404 >= (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s(l_2453, 4294967293UL)) , ((safe_add_func_uint16_t_u_u(((*p_3104->g_315) != (safe_lshift_func_int8_t_s_s(6L, 3))), p_15)) , 0x6DL)), p_13))))), 0xE306BFCAC4E31AD0L))) , l_2453) , p_13) >= 0x0C079B8C63254168L))) , (*p_16)) & l_2427);
                }
                for (p_3104->g_882 = 0; (p_3104->g_882 > 1); p_3104->g_882++)
                { /* block id: 1158 */
                    uint64_t l_2465 = 18446744073709551615UL;
                    int32_t l_2472 = 1L;
                    (*p_3104->g_2460) |= l_2427;
                    for (p_3104->g_1122 = (-1); (p_3104->g_1122 == (-14)); p_3104->g_1122 = safe_sub_func_int8_t_s_s(p_3104->g_1122, 4))
                    { /* block id: 1162 */
                        int32_t *l_2464[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2464[i] = &l_2442;
                        if ((*p_16))
                            break;
                        l_2404 = ((*p_3104->g_224) = l_2463[6][1][1]);
                        l_2465 = (p_15 , (*p_3104->g_954));
                        l_2477--;
                    }
                    l_2467 = (l_2472 |= (p_3104->g_2480[0] != (l_2485 = p_3104->g_2482)));
                }
                (*l_2496) &= (safe_sub_func_int8_t_s_s(((l_2469 ^ ((18446744073709551612UL == (-6L)) , p_13)) && (l_2386 ^= (l_2488 < 0xD3F6L))), ((*p_3104->g_2233) && (safe_mul_func_int8_t_s_s(((~((((l_2404 <= (safe_lshift_func_int16_t_s_u((((*l_2495) = l_2493) != (void*)0), l_2477))) , 0x6700D5C2L) > l_2476) , (-1L))) , (*p_3104->g_315)), l_2488)))));
            }
            l_2475 |= (safe_mod_func_uint32_t_u_u(p_3104->g_151, 4294967295UL));
        }
        (*l_2500) = (*p_16);
        for (l_2470 = 17; (l_2470 >= (-19)); --l_2470)
        { /* block id: 1182 */
            uint8_t ****l_2503 = &p_3104->g_595;
            int16_t **l_2521 = (void*)0;
            int32_t l_2531 = 0x70F0D2B9L;
            for (p_3104->g_1098 = 0; (p_3104->g_1098 <= 3); p_3104->g_1098 += 1)
            { /* block id: 1185 */
                int16_t ***l_2522 = &l_2521;
                int16_t ***l_2523 = &p_3104->g_1671;
                int32_t l_2526 = 3L;
                int16_t *l_2532 = (void*)0;
                int16_t *l_2533 = (void*)0;
                int16_t *l_2534 = &p_3104->g_327;
                int i, j;
                p_3104->g_2535 ^= (((void*)0 != l_2503) && (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((((*l_2534) = ((safe_sub_func_uint8_t_u_u(1UL, ((*p_3104->g_315) |= (safe_sub_func_int8_t_s_s((((*l_2500) = (p_3104->g_43[(p_3104->g_1098 + 5)][p_3104->g_1098] == 0x3BL)) && ((safe_sub_func_uint32_t_u_u(((**p_3104->g_1454) != (safe_lshift_func_int8_t_s_u((((safe_add_func_int64_t_s_s(((l_2520 != ((*l_2523) = ((*l_2522) = l_2521))) , (((safe_sub_func_uint16_t_u_u(((l_2526 |= (&p_3104->g_2483 != &p_3104->g_2483)) , (**p_3104->g_1989)), (**p_3104->g_606))) , p_3104->g_2527) != &l_2522)), 18446744073709551615UL)) ^ p_15) | p_3104->g_77), 2))), 4294967295UL)) < (**p_3104->g_1454))), l_2531))))) != 6L)) , 1L) != p_15), l_2463[3][5][2])), p_13)));
            }
        }
        if ((l_2358 & (((*l_2538) = ((*l_2500) & ((**p_3104->g_1454) ^= (l_2536 == ((*p_3104->g_664) = l_2537))))) , ((++(**p_3104->g_1454)) , (l_2493 == l_2493)))))
        { /* block id: 1199 */
            return (*p_12);
        }
        else
        { /* block id: 1201 */
            uint8_t l_2542 = 0x4DL;
            uint8_t ***l_2551 = &p_3104->g_596;
            int32_t *l_2594[9];
            int i;
            for (i = 0; i < 9; i++)
                l_2594[i] = &p_3104->g_151;
            for (l_2383 = 0; (l_2383 <= 0); l_2383 += 1)
            { /* block id: 1204 */
                uint64_t l_2541 = 0x2204CE9E624EB1CBL;
                uint32_t ***l_2543 = (void*)0;
                uint64_t ***l_2544 = &p_3104->g_1454;
                uint32_t *****l_2548 = &p_3104->g_664;
                uint16_t ***l_2583[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int16_t ****l_2591 = &p_3104->g_2589;
                int i, j;
                l_2541 = 5L;
                (*p_12) = func_99(l_2542, l_2383, (~0L), &p_16, (l_2475 , (l_2543 == (((~((!(((*l_2544) = (void*)0) != l_2545)) && ((safe_add_func_int32_t_s_s((((*l_2548) = &l_2537) == &l_2543), p_3104->g_405)) || 1L))) > p_15) , l_2536))), p_3104);
                for (p_3104->g_732 = 0; (p_3104->g_732 <= 0); p_3104->g_732 += 1)
                { /* block id: 1211 */
                    uint8_t ***l_2552 = &p_3104->g_596;
                    uint64_t *l_2563 = &p_3104->g_520;
                    (*l_2500) = (safe_lshift_func_int16_t_s_u((l_2551 == l_2552), 12));
                    for (l_2468 = 0; (l_2468 <= 0); l_2468 += 1)
                    { /* block id: 1215 */
                        uint32_t l_2557 = 1UL;
                        int32_t l_2562 = (-6L);
                        (*l_2500) = (safe_rshift_func_int16_t_s_u((+(((safe_div_func_int64_t_s_s(p_3104->g_2426[0][2], 0xBF5A33100FEE4AB4L)) , l_2541) == l_2557)), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((((*p_3104->g_315) || ((((l_2562 = 1UL) , 0xAD6A1E75L) , (*p_3104->g_918)) == (l_2563 = (void*)0))) <= l_2542) == (**p_3104->g_2232)) , l_2541), 3)), (*l_2500)))));
                    }
                }
                if (l_2541)
                    break;
                for (p_15 = 0; (p_15 <= 0); p_15 += 1)
                { /* block id: 1224 */
                    uint64_t l_2580 = 18446744073709551615UL;
                    int16_t *****l_2590 = &p_3104->g_2588[4];
                    for (l_2475 = 0; (l_2475 <= 0); l_2475 += 1)
                    { /* block id: 1227 */
                        int32_t *l_2582 = &p_3104->g_882;
                        int8_t *l_2585 = (void*)0;
                        int8_t *l_2586 = &p_3104->g_1189;
                        int i, j, k;
                        (*l_2500) = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((*l_2586) &= ((((0L <= ((*l_2500) & l_2541)) , (void*)0) != ((safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_int16_t_s(l_2383)) > (((((*l_2582) = ((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint64_t_u_u(((*l_2500) != ((p_13 > (safe_mod_func_int32_t_s_s((p_3104->g_581 , (+(safe_mod_func_uint64_t_u_u((((1UL ^ l_2467) || l_2580) , 18446744073709551615UL), l_2580)))), 5L))) > p_3104->g_2581)), (*l_2500))))) > 0L)) , l_2583[5][3]) == l_2584) == (*p_3104->g_315))), 4)) , (void*)0)) , (*l_2500))), p_15)), 1L));
                        return p_3104->g_2587;
                    }
                    (*l_2500) = (((*l_2590) = p_3104->g_2588[4]) == (void*)0);
                    if (l_2580)
                        continue;
                    for (p_3104->g_753 = 0; (p_3104->g_753 <= 0); p_3104->g_753 += 1)
                    { /* block id: 1238 */
                        int32_t *l_2593 = &l_2442;
                        int i, j, k;
                        (*l_2500) &= (l_2591 == l_2592);
                        if (p_13)
                            break;
                        (*l_2500) = (*p_3104->g_1646);
                        p_3104->g_1537[p_3104->g_753][l_2383][p_15] = (p_15 , l_2593);
                    }
                }
            }
            l_2594[5] = (*p_3104->g_428);
        }
    }
    else
    { /* block id: 1248 */
        int32_t l_2599 = 8L;
        int32_t l_2625 = 0x07F30966L;
        int64_t *l_2626 = &p_3104->g_459;
        uint16_t l_2627 = 0xCFA5L;
        int32_t l_2629 = 0L;
        int32_t l_2630 = 1L;
        l_2630 = ((safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(l_2599, (((*l_2362) = (((void*)0 != l_2600[0]) | (l_2470 |= (**p_3104->g_2232)))) , ((l_2629 = (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((0x2A04B76124D69A5FL == (p_13 != (l_2599 , ((l_2467 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((*****p_3104->g_2482) = (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((((*l_2626) = ((((l_2625 = (!(((255UL && ((safe_add_func_uint64_t_u_u(0xB30582208A47893AL, l_2599)) | l_2599)) > p_13) , l_2599))) < l_2599) >= 0xFF4521DC05C22897L) , 0x2A39D5EB42FD0884L)) | 1L) , 0xDAL), (*p_3104->g_315))) < 0x43CE24A4EBBFF8F0L) , l_2625), l_2463[6][1][1])) , 0x6FL), l_2627)), 5UL)) || l_2628[4]), 1UL)), l_2627))), 12)), 2UL))) , p_15)))) | (*p_16)) != p_15) || p_13), l_2599)), (*p_3104->g_315))), l_2599))) || p_15)))), p_13)) && l_2627);
        return (*p_3104->g_1887);
    }
lbl_2734:
    for (p_15 = (-25); (p_15 < (-18)); ++p_15)
    { /* block id: 1261 */
        uint32_t l_2636 = 1UL;
        int16_t ****l_2644 = &p_3104->g_2589;
        int32_t l_2651 = 0x4F7EFA0EL;
        int32_t l_2655[5][8][6] = {{{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L}},{{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L}},{{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L}},{{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L}},{{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L},{0x2079B2A7L,0x2173BFD0L,0x7921B041L,9L,0x2BA4BB1FL,0x33847C39L}}};
        int32_t l_2661 = 0L;
        uint16_t l_2665 = 1UL;
        uint16_t l_2668 = 65528UL;
        int32_t *l_2669 = &l_2658;
        int32_t *l_2670 = &l_2651;
        int32_t *l_2671 = &l_2660;
        int32_t *l_2672[4][2] = {{&l_2664,&l_2658},{&l_2664,&l_2658},{&l_2664,&l_2658},{&l_2664,&l_2658}};
        int i, j, k;
        for (p_3104->g_1098 = 21; (p_3104->g_1098 != (-2)); p_3104->g_1098 = safe_sub_func_int8_t_s_s(p_3104->g_1098, 4))
        { /* block id: 1264 */
            uint64_t l_2635 = 6UL;
            uint8_t *l_2641 = &l_2383;
            int32_t l_2645[10][5][5] = {{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}},{{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L},{0x16F80007L,0x67E8BD54L,0x7444D473L,1L,0x67E8BD54L}}};
            int32_t *l_2646 = &l_2468;
            int32_t *l_2647 = &l_2470;
            int32_t *l_2648 = &l_2475;
            int32_t *l_2649 = (void*)0;
            int32_t *l_2650[6];
            uint32_t l_2652[3];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_2650[i] = &l_2467;
            for (i = 0; i < 3; i++)
                l_2652[i] = 0UL;
            (*p_12) = func_54(l_2635, l_2636, (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*p_3104->g_315) = 0L), (--(*l_2641)))), ((void*)0 == l_2644))), ((((*l_2362) |= (l_2468 >= ((*p_3104->g_2281) == l_2439))) ^ (0x244C1076CDECE7E2L > l_2636)) , l_2635), p_3104);
            l_2652[2]--;
            l_2665--;
        }
        if (l_2668)
            continue;
        l_2656 = (~(p_13 && l_2655[3][0][3]));
        ++p_3104->g_2673[1];
    }
    for (p_3104->g_1189 = 0; (p_3104->g_1189 >= 0); p_3104->g_1189 -= 1)
    { /* block id: 1278 */
        int32_t l_2698[5] = {0x292AA31EL,0x292AA31EL,0x292AA31EL,0x292AA31EL,0x292AA31EL};
        int16_t l_2723 = 0x4246L;
        int32_t l_2725[1][9][2] = {{{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L},{0x4A4F4086L,0x4A4F4086L}}};
        uint32_t l_2728 = 0xE471CBA1L;
        uint16_t l_2731[6][2][8] = {{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}},{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}},{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}},{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}},{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}},{{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL},{0x2C47L,0x073FL,9UL,0x2C47L,0UL,1UL,1UL,0UL}}};
        uint64_t l_2752 = 18446744073709551613UL;
        uint16_t **l_2769 = &p_3104->g_522[1];
        uint64_t l_2789 = 0xE56374196A1887B4L;
        int8_t *l_2817 = (void*)0;
        uint8_t **l_2839[4][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int16_t l_2874[4] = {(-2L),(-2L),(-2L),(-2L)};
        uint32_t l_2889 = 0x0A6DCBC3L;
        int i, j, k;
        for (p_15 = 0; (p_15 >= 0); p_15 -= 1)
        { /* block id: 1281 */
            int64_t l_2694 = 0x4A88B12FFA69D9A3L;
            int32_t l_2696 = (-2L);
            int16_t l_2722[1][9][5] = {{{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L},{(-6L),0L,0x5B47L,0x48FEL,0x5B47L}}};
            int32_t l_2727 = 0x59495B4DL;
            int32_t l_2743 = 0x632674E1L;
            int32_t l_2744 = 0x5E4B3C42L;
            int32_t l_2745 = (-5L);
            int32_t l_2746 = 0x31AAD395L;
            int32_t l_2747 = 0x6733DE3FL;
            int32_t l_2748 = 1L;
            int32_t l_2749 = (-7L);
            int32_t l_2750 = 0x2129D64DL;
            int32_t l_2751 = 0x4BD1334AL;
            int16_t l_2790 = 0x4926L;
            int16_t l_2818 = (-5L);
            int i, j, k;
            for (p_3104->g_446 = 0; (p_3104->g_446 <= 0); p_3104->g_446 += 1)
            { /* block id: 1284 */
                int32_t l_2697 = (-9L);
                int32_t **l_2712 = (void*)0;
                int32_t l_2726 = 3L;
                int32_t *l_2735 = &l_2468;
                int32_t *l_2736 = &l_2657;
                int32_t *l_2737 = &l_2696;
                int32_t *l_2738 = &l_2726;
                int32_t *l_2739 = &l_2658;
                int32_t *l_2740 = (void*)0;
                int32_t *l_2741 = &l_2467;
                int32_t *l_2742[9];
                uint16_t l_2770[8][4] = {{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL},{0x44F7L,0x44F7L,65530UL,65535UL}};
                int i, j;
                for (i = 0; i < 9; i++)
                    l_2742[i] = (void*)0;
                for (l_2467 = 0; (l_2467 <= 0); l_2467 += 1)
                { /* block id: 1287 */
                    uint64_t l_2685[7] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL};
                    int32_t **l_2711 = (void*)0;
                    int32_t l_2720 = 1L;
                    int32_t l_2721 = (-1L);
                    int32_t l_2724[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2724[i] = (-1L);
                    for (p_3104->g_62 = 0; (p_3104->g_62 <= 0); p_3104->g_62 += 1)
                    { /* block id: 1290 */
                        int32_t l_2676 = 1L;
                        int i;
                        if (l_2676)
                            break;
                        (*p_3104->g_1646) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x900AL, 4)), (((safe_add_func_uint8_t_u_u((((l_2698[3] = ((safe_mod_func_int32_t_s_s(l_2685[4], (-6L))) ^ (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(254UL, (safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_3104->g_882 , (((((l_2694 &= p_3104->g_459) ^ ((safe_unary_minus_func_uint8_t_u((*p_3104->g_2233))) > ((*l_2362) = l_2696))) ^ ((l_2463[6][1][1] , (void*)0) != (void*)0)) , (*p_3104->g_224)) >= p_3104->g_243)), l_2470)), l_2697)))) || l_2694), l_2697)))) != p_15) , l_2676), p_15)) , (*p_3104->g_315)) | (*p_3104->g_315))));
                        if (l_2694)
                            break;
                    }
                    for (l_2658 = 0; (l_2658 <= 0); l_2658 += 1)
                    { /* block id: 1300 */
                        int32_t ***l_2710[3][1];
                        int32_t l_2715 = 0x75A381E3L;
                        int64_t *l_2716 = &p_3104->g_110;
                        int32_t *l_2717 = &p_3104->g_151;
                        int32_t *l_2718 = &l_2475;
                        int32_t *l_2719[5][2][3] = {{{&p_3104->g_2,&p_3104->g_8,&l_2467},{&p_3104->g_2,&p_3104->g_8,&l_2467}},{{&p_3104->g_2,&p_3104->g_8,&l_2467},{&p_3104->g_2,&p_3104->g_8,&l_2467}},{{&p_3104->g_2,&p_3104->g_8,&l_2467},{&p_3104->g_2,&p_3104->g_8,&l_2467}},{{&p_3104->g_2,&p_3104->g_8,&l_2467},{&p_3104->g_2,&p_3104->g_8,&l_2467}},{{&p_3104->g_2,&p_3104->g_8,&l_2467},{&p_3104->g_2,&p_3104->g_8,&l_2467}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_2710[i][j] = &p_3104->g_2709;
                        }
                        (*l_2718) ^= ((((((safe_add_func_int32_t_s_s((((*l_2717) = ((((((*p_3104->g_919) |= 0xB9989077851C2322L) , ((*l_2716) |= (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(l_2685[2], l_2697)) < (l_2685[4] , (((((l_2711 = p_3104->g_2709) != l_2712) | (((l_2694 == 0xCCF0L) ^ (safe_sub_func_uint16_t_u_u(0x2FD0L, 0x5BD9L))) <= p_3104->g_245)) && l_2715) , p_15))) > p_13) <= (*p_3104->g_315)), p_13)), l_2698[4])), p_15)))) <= p_15) ^ l_2696) & 0xA7L)) > 0x000B54F6L), (*p_3104->g_2460))) , l_2696) == p_3104->g_144) , (void*)0) == (void*)0) > l_2463[6][1][1]);
                        l_2728++;
                        ++l_2731[0][1][7];
                    }
                }
                for (l_2468 = 0; (l_2468 <= 4); l_2468 += 1)
                { /* block id: 1312 */
                    if (l_2475)
                        goto lbl_2734;
                    return (*p_3104->g_335);
                }
                l_2752--;
                for (p_3104->g_2428 = 0; (p_3104->g_2428 <= 0); p_3104->g_2428 += 1)
                { /* block id: 1319 */
                    int64_t *l_2771 = &p_3104->g_1598;
                    int32_t *l_2772 = &l_2628[5];
                    uint16_t ****l_2773[10];
                    int32_t l_2799 = 0x1F9FAE22L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_2773[i] = &p_3104->g_2484;
                    if ((safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s((((((*p_3104->g_2283) = ((*l_2772) &= (((0UL && (0x17A9L | (((*l_2771) = (p_3104->g_2535 = ((safe_lshift_func_int8_t_s_u((((safe_div_func_uint16_t_u_u((l_2698[(p_3104->g_1189 + 4)] | p_15), (safe_div_func_uint16_t_u_u((**p_3104->g_1989), (safe_sub_func_int8_t_s_s((*p_3104->g_315), (safe_div_func_int16_t_s_s((l_2769 == (*l_2584)), (l_2725[0][5][0] = p_15))))))))) >= p_15) <= 0L), l_2770[6][2])) > (*p_3104->g_315)))) & l_2723))) ^ p_3104->g_51) , (**p_3104->g_2282)))) , (void*)0) == l_2773[1]) || l_2722[0][2][4]), l_2744)), 0x2A4F4EB318C79BCBL)))
                    { /* block id: 1325 */
                        (*l_2735) = (safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((l_2752 , (safe_div_func_uint64_t_u_u((0xE727L ^ (p_15 != p_15)), (safe_lshift_func_uint8_t_u_s(l_2698[3], ((~((safe_mod_func_uint32_t_u_u(((*l_2362) |= ((~(safe_lshift_func_int8_t_s_u(((((*p_3104->g_315) = ((p_15 && ((l_2788[2] <= 1L) , (((l_2725[0][4][1] < l_2731[0][0][3]) , 18446744073709551615UL) , p_13))) & p_13)) , p_13) , (*p_3104->g_315)), p_13))) | l_2789)), (-1L))) >= l_2657)) | l_2722[0][0][1])))))), (*l_2738))) < 0UL), 0x4DE7A6C96F432A25L));
                        if (l_2790)
                            continue;
                        if (l_2723)
                            break;
                    }
                    else
                    { /* block id: 1331 */
                        int16_t l_2814[5];
                        uint32_t *l_2815[2];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2814[i] = 0x797CL;
                        for (i = 0; i < 2; i++)
                            l_2815[i] = &p_3104->g_2816;
                        l_2743 = (safe_mul_func_uint8_t_u_u(p_13, (safe_rshift_func_int16_t_s_u(p_13, ((safe_mul_func_uint16_t_u_u((****p_3104->g_2483), (((safe_lshift_func_int16_t_s_u((l_2799 >= (safe_mul_func_uint16_t_u_u((((((((~(safe_mul_func_uint8_t_u_u((0UL >= (-1L)), (((((p_3104->g_2816 = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_2736) = (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((*l_2771) = l_2814[4]) ^ (p_13 < ((l_2725[0][4][1] = (0x1D1260F5L >= 0UL)) >= l_2790))), 1UL)) & 0x1377L), l_2743)), l_2814[0]))), l_2746)), l_2698[p_3104->g_2428]))) , &p_3104->g_245) != l_2817) <= 1L) == l_2814[2])))) , 0x77DCL) != p_15) , l_2818) == l_2468) || p_3104->g_245) | p_15), p_13))), 8)) | l_2818) == l_2799))) >= l_2698[(p_3104->g_1189 + 4)])))));
                        if (l_2698[0])
                            continue;
                        if (l_2698[3])
                            continue;
                    }
                }
            }
            l_2659 |= (2L > 6L);
        }
        for (l_2470 = 0; (l_2470 >= 0); l_2470 -= 1)
        { /* block id: 1346 */
            int32_t l_2834[8] = {0x7419EAD0L,0x7419EAD0L,0x7419EAD0L,0x7419EAD0L,0x7419EAD0L,0x7419EAD0L,0x7419EAD0L,0x7419EAD0L};
            uint16_t **l_2872 = &p_3104->g_522[1];
            int64_t **l_2873 = &p_3104->g_258;
            int8_t l_2888 = 0x1DL;
            int16_t l_2900[3];
            uint8_t ****l_2921 = &p_3104->g_595;
            uint8_t *****l_2920 = &l_2921;
            int i;
            for (i = 0; i < 3; i++)
                l_2900[i] = 0x4107L;
            for (p_3104->g_888 = 0; (p_3104->g_888 <= 0); p_3104->g_888 += 1)
            { /* block id: 1349 */
                int16_t *l_2846 = &p_3104->g_312[1];
                int16_t *l_2847 = &p_3104->g_144;
                int32_t l_2881 = 0x474A34B4L;
                int32_t l_2883 = 0L;
                int32_t l_2884 = 0x2D1F983EL;
                int32_t l_2885 = 0x27B06ED9L;
                int32_t l_2886[1][9][9] = {{{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L},{5L,(-5L),0L,5L,3L,0L,0L,3L,5L}}};
                int64_t *l_2895[9] = {&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535,&p_3104->g_2535};
                int32_t *l_2907 = &l_2658;
                volatile int32_t *l_2924 = &p_3104->g_2860;
                volatile int32_t **l_2923 = &l_2924;
                int i, j, k;
                if (((l_2834[1] = (p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)] && (safe_unary_minus_func_uint64_t_u(((((safe_mod_func_int64_t_s_s(((((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((((((*l_2847) = ((*l_2846) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((1UL & l_2834[1]), (safe_add_func_int32_t_s_s((*p_3104->g_1646), (((safe_div_func_int64_t_s_s((l_2839[0][0][3] != (*p_3104->g_595)), ((safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u(p_15, (l_2834[1] , (safe_div_func_uint32_t_u_u(l_2834[1], 0x10A2BC50L))))) >= p_13), p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)])) , 0x4A673841408E1619L))) , l_2725[0][3][1]) , p_3104->g_1189))))), 0x75L)) , p_15))) & p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)]) != l_2788[0]) <= l_2834[1]), 249UL)), (-5L))), 0x0558L)), 0x28E9L)) , l_2848) <= l_2834[1]) == 1UL), p_15)) && p_15) && p_13) || p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)]))))) || l_2789))
                { /* block id: 1353 */
                    uint16_t l_2852 = 5UL;
                    int64_t l_2870 = 0x0D50C862E3DF2CA0L;
                    int32_t *l_2871 = &l_2662;
                    int32_t l_2875 = 0x1C6556CDL;
                    int32_t *l_2876 = &l_2468;
                    int32_t *l_2877 = &l_2467;
                    int32_t *l_2878 = &l_2468;
                    int32_t *l_2879 = &l_2660;
                    int32_t *l_2880[4] = {&p_3104->g_77,&p_3104->g_77,&p_3104->g_77,&p_3104->g_77};
                    int64_t l_2887 = 0x714D34CB6B704821L;
                    int i;
                    l_2875 &= ((safe_div_func_int64_t_s_s((((((((void*)0 == l_2851[7]) == ((((l_2852 | ((l_2853 != ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int8_t_s_s((!(*p_3104->g_315)), p_3104->g_2860)) || (p_13 >= (((safe_unary_minus_func_uint8_t_u((&p_3104->g_258 == ((safe_mul_func_uint8_t_u_u((((((*p_3104->g_315) = (((*l_2871) &= ((((((((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((((((((safe_add_func_int8_t_s_s((*p_3104->g_315), l_2834[7])) | 0x5EA0645C385DED93L) != 4UL) || (*p_3104->g_315)) & 0x91E3E7D04C1C2324L) | 0x0EL) , 8UL) , p_13) <= (*p_3104->g_2233)) != l_2870), 0x5129L)), (-1L))) || 0xA6L) < p_13) & 4294967293UL) <= l_2475) ^ 0x3BDDCF500D17DDD0L) >= l_2834[1]) | p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)])) & 0xF6409377L)) , (void*)0) == l_2872) , 0x01L), 1UL)) , l_2873)))) , l_2834[1]) ^ p_3104->g_2426[p_3104->g_888][(p_3104->g_1189 + 1)]))) || l_2656), p_13)), (***p_3104->g_2484))) > p_13)) , (*l_2871))) && 1UL) < l_2834[1]) != l_2874[2])) & p_15) ^ l_2834[1]) < 0x32AAB6FB07E47673L) && p_3104->g_2673[1]), 0x16F9CAA252916E46L)) != 0x9F257D00D79F000BL);
                    l_2889++;
                    for (l_2663 = 4; (l_2663 >= 0); l_2663 -= 1)
                    { /* block id: 1360 */
                        uint64_t l_2894[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_2894[i] = 0x166070E7B6DC76B9L;
                        l_2725[0][4][1] = ((safe_add_func_int16_t_s_s((((*p_3104->g_315) = (l_2888 , 0x50L)) > (l_2894[0] < ((((**l_2872) = (l_2895[0] == (void*)0)) , ((void*)0 == (*p_3104->g_2228))) != (safe_mod_func_int64_t_s_s(0x3D4322F40F1F8915L, l_2885))))), p_15)) || l_2888);
                    }
                }
                else
                { /* block id: 1365 */
                    int32_t *l_2898 = (void*)0;
                    int32_t *l_2899[6][3] = {{&l_2834[1],&l_2834[1],&l_2834[1]},{&l_2834[1],&l_2834[1],&l_2834[1]},{&l_2834[1],&l_2834[1],&l_2834[1]},{&l_2834[1],&l_2834[1],&l_2834[1]},{&l_2834[1],&l_2834[1],&l_2834[1]},{&l_2834[1],&l_2834[1],&l_2834[1]}};
                    uint16_t l_2903 = 65526UL;
                    int i, j;
                    l_2903--;
                }
                if (((*l_2907) |= l_2906))
                { /* block id: 1369 */
                    int32_t *l_2908 = &l_2788[2];
                    if (l_2888)
                        break;
                    return (*p_3104->g_2175);
                }
                else
                { /* block id: 1372 */
                    int8_t l_2909 = 0x00L;
                    for (l_2789 = 1; (l_2789 <= 5); l_2789 += 1)
                    { /* block id: 1375 */
                        if (l_2628[4])
                            break;
                        if (l_2909)
                            break;
                    }
                    for (p_3104->g_1122 = 0; (p_3104->g_1122 <= 1); p_3104->g_1122 += 1)
                    { /* block id: 1381 */
                        int i, j;
                        if (p_3104->g_502[l_2470][p_3104->g_1122])
                            break;
                        (*l_2907) = ((safe_rshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(p_15, (safe_mod_func_uint32_t_u_u(p_3104->g_2581, ((*l_2907) & (0x188EB153L | 0x38A95096L)))))), 0x98BD80B7L)) != (safe_sub_func_int8_t_s_s(((*p_3104->g_315) = (((p_13 < (((0xEE5DF4865C15422FL == (((l_2920 != (void*)0) ^ p_13) >= l_2788[2])) , (-6L)) > 250UL)) || 0xEC5C830AL) || l_2463[2][4][2])), p_13))) || 0x292A2E729FF03C0EL), p_3104->g_243)) < p_13);
                    }
                    l_2475 |= (-1L);
                }
                (*l_2923) = p_3104->g_637[(p_3104->g_1189 + 2)];
            }
        }
    }
    return (*p_3104->g_1538);
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_1284 p_3104->g_7 p_3104->g_1538 p_3104->g_664 p_3104->g_665 p_3104->g_224 p_3104->g_1273 p_3104->g_77
 * writes: p_3104->g_1422 p_3104->g_227 p_3104->g_151 p_3104->g_77
 */
int32_t ** func_17(int32_t  p_18, struct S0 * p_3104)
{ /* block id: 748 */
    uint32_t **l_1539 = &p_3104->g_182;
    uint32_t **l_1540 = &p_3104->g_182;
    int32_t l_1543 = (-1L);
    int32_t *l_1547[7][6][6] = {{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}},{{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]},{&p_3104->g_502[1][5],&p_3104->g_502[1][2],&p_3104->g_502[1][0],&p_3104->g_502[1][0],&p_3104->g_502[1][2],&p_3104->g_502[1][5]}}};
    uint64_t **l_1548 = &p_3104->g_1391[1][2];
    int32_t l_1597 = 0L;
    int64_t **l_1629 = &p_3104->g_258;
    int32_t *l_1653[7][4][3] = {{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}},{{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151},{&p_3104->g_151,&p_3104->g_151,&p_3104->g_151}}};
    int8_t l_1740 = 0x4BL;
    uint8_t ****l_1757[5][8] = {{&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595},{&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595},{&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595},{&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595},{&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595,&p_3104->g_595}};
    uint8_t *****l_1756 = &l_1757[1][7];
    uint8_t ******l_1755 = &l_1756;
    int8_t l_1809[8];
    int32_t l_1810 = (-1L);
    int32_t *l_1861[2];
    uint8_t l_1870[7];
    uint8_t l_1875 = 0UL;
    int32_t *l_1886 = (void*)0;
    uint32_t l_1904 = 0UL;
    uint16_t l_1949 = 0x914EL;
    uint64_t l_2044 = 18446744073709551613UL;
    int8_t l_2111 = 1L;
    int64_t l_2112 = 5L;
    int8_t l_2123 = (-1L);
    int16_t *l_2147 = &p_3104->g_144;
    int32_t l_2204 = 0L;
    uint32_t *****l_2208 = &p_3104->g_664;
    uint32_t l_2227[9][8] = {{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L},{0x1C69828AL,1UL,4294967295UL,0UL,0xF82D76ADL,4294967293UL,0x59C1D78DL,0x0FBC93F1L}};
    uint16_t ***l_2279 = &p_3104->g_1989;
    int32_t l_2336 = (-10L);
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1809[i] = 1L;
    for (i = 0; i < 2; i++)
        l_1861[i] = &l_1543;
    for (i = 0; i < 7; i++)
        l_1870[i] = 0x39L;
    (*p_3104->g_1538) = (*p_3104->g_1284);
    if ((((**p_3104->g_664) = l_1539) == (l_1540 = l_1539)))
    { /* block id: 752 */
        uint64_t **l_1549 = &p_3104->g_1391[0][3];
        int32_t l_1550 = 0L;
        int32_t *l_1552 = &p_3104->g_77;
        int16_t ***l_1602 = (void*)0;
        uint64_t *l_1628 = &p_3104->g_520;
        uint8_t **l_1693 = (void*)0;
        int32_t l_1698 = 1L;
        uint32_t l_1707 = 4294967295UL;
        int8_t l_1721 = 3L;
        uint64_t l_1752 = 0xD5417876D11D8899L;
        uint16_t ***l_1777[10][4] = {{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0},{(void*)0,(void*)0,&p_3104->g_606,(void*)0}};
        int32_t l_1863 = 6L;
        int32_t l_1864 = 5L;
        int32_t l_1865 = 0x33FC172EL;
        int32_t l_1867[6][2][2] = {{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}},{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}},{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}},{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}},{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}},{{0x7949513CL,(-9L)},{0x7949513CL,(-9L)}}};
        int32_t **l_1883 = &l_1653[5][2][2];
        int32_t ***l_1882 = &l_1883;
        int i, j, k;
        (*l_1552) = ((safe_lshift_func_int8_t_s_u((l_1543 > (safe_div_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u(p_18)) , p_18) || (((*p_3104->g_224) = (((((((void*)0 == l_1547[2][0][3]) & p_18) <= (l_1548 != (p_18 , l_1549))) ^ p_18) != l_1550) < p_18)) || p_3104->g_1273)), p_18))), p_18)) <= p_18);
        (*l_1552) |= 0x35D93EF7L;
    }
    else
    { /* block id: 931 */
        p_18 = 1L;
    }
    return &p_3104->g_1422;
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_53 p_3104->g_405 p_3104->g_1098 p_3104->g_732 p_3104->g_954 p_3104->g_151 p_3104->g_315 p_3104->g_174 p_3104->g_919 p_3104->g_312 p_3104->g_606 p_3104->g_522 p_3104->g_144
 * writes: p_3104->g_53 p_3104->g_26 p_3104->g_520 p_3104->g_523 p_3104->g_144
 */
int16_t  func_21(uint8_t  p_22, uint32_t  p_23, uint64_t  p_24, struct S0 * p_3104)
{ /* block id: 729 */
    int32_t l_1499[1][3];
    uint32_t l_1504 = 0UL;
    int16_t *l_1516 = &p_3104->g_312[1];
    int16_t **l_1515 = &l_1516;
    int16_t ***l_1517 = &l_1515;
    uint8_t ****l_1531 = &p_3104->g_595;
    uint8_t *****l_1530[9] = {&l_1531,&l_1531,&l_1531,&l_1531,&l_1531,&l_1531,&l_1531,&l_1531,&l_1531};
    uint8_t *****l_1533 = &l_1531;
    uint8_t ******l_1532 = &l_1533;
    uint32_t *l_1534 = (void*)0;
    uint32_t *l_1535[2];
    int16_t *l_1536 = &p_3104->g_144;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1499[i][j] = 0x2BA4735FL;
    }
    for (i = 0; i < 2; i++)
        l_1535[i] = (void*)0;
    for (p_3104->g_53 = 20; (p_3104->g_53 == 60); p_3104->g_53++)
    { /* block id: 732 */
        uint16_t l_1498 = 65531UL;
        uint32_t *l_1505 = (void*)0;
        uint32_t *l_1506 = &p_3104->g_26;
        uint8_t *l_1507[6];
        int32_t l_1508 = (-6L);
        int32_t *l_1510 = &l_1499[0][0];
        int i;
        for (i = 0; i < 6; i++)
            l_1507[i] = &p_3104->g_243;
        (*l_1510) = ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1508 = ((safe_add_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(0x6ED1D386CE409406L, l_1498)), 3)), 11)) & p_3104->g_405), (l_1499[0][0] == (((*l_1506) = (p_3104->g_1098 != (safe_mod_func_uint16_t_u_u((p_3104->g_732 == (safe_lshift_func_uint8_t_u_s((p_22 = p_23), p_24))), (+(((l_1499[0][0] , 0x240E4555L) >= l_1504) != l_1498)))))) | l_1498)))) , p_23)), 3)), 3)) < 0x58A89086C1194579L);
        if ((*p_3104->g_954))
            break;
        (*l_1510) = (0x6E6EL && 4L);
    }
    l_1499[0][0] = ((safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((*l_1536) &= (((((p_23 = (((*p_3104->g_315) > (((*l_1517) = l_1515) == &p_3104->g_1482)) && ((**p_3104->g_606) = (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_1504, 0)) > (((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(4L, (safe_sub_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(((((((*p_3104->g_919) = (0L == (*p_3104->g_315))) , l_1530[0]) == ((*l_1532) = &l_1531)) , l_1499[0][0]) ^ 1L), l_1499[0][0])) , l_1504) > l_1499[0][0]), p_23)))) , 0x3F33L), 0x71ABL)) & p_3104->g_312[1]) , 4294967295UL)), l_1499[0][0]))))) >= 0UL) , p_23) & p_22) <= p_22)), l_1499[0][0])) , l_1504), 0x3C6FFF63D53BF35EL)) > (-6L));
    return l_1499[0][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_53 p_3104->g_2 p_3104->g_8 p_3104->g_43 p_3104->g_83 p_3104->g_77 p_3104->g_243 p_3104->g_606 p_3104->g_522 p_3104->g_523 p_3104->g_315 p_3104->g_174 p_3104->g_1189 p_3104->g_918 p_3104->g_919 p_3104->g_520 p_3104->g_7 p_3104->g_224 p_3104->g_151 p_3104->g_1422 p_3104->g_1481 p_3104->g_144
 * writes: p_3104->g_53 p_3104->g_43 p_3104->g_83 p_3104->g_7 p_3104->g_62 p_3104->g_77 p_3104->g_243 p_3104->g_1189 p_3104->g_1454 p_3104->g_520 p_3104->g_151 p_3104->g_144 p_3104->g_1481
 */
uint8_t  func_33(uint64_t  p_34, int32_t * p_35, uint32_t  p_36, int32_t * p_37, struct S0 * p_3104)
{ /* block id: 16 */
    uint32_t *l_50 = &p_3104->g_51;
    uint32_t *l_52 = &p_3104->g_53;
    int32_t l_59 = 4L;
    uint8_t *l_60 = (void*)0;
    uint8_t *l_61[10] = {&p_3104->g_62,(void*)0,(void*)0,(void*)0,&p_3104->g_62,&p_3104->g_62,(void*)0,(void*)0,(void*)0,&p_3104->g_62};
    int32_t l_63[8] = {0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L,0x0F0FC5A5L};
    int32_t **l_73 = &p_3104->g_7;
    int32_t *l_86 = &l_63[4];
    int32_t *l_87 = &p_3104->g_77;
    uint8_t l_88 = 2UL;
    uint32_t *l_108[10] = {&p_3104->g_53,(void*)0,&p_3104->g_53,(void*)0,&p_3104->g_53,&p_3104->g_53,(void*)0,&p_3104->g_53,(void*)0,&p_3104->g_53};
    uint8_t l_187 = 6UL;
    uint32_t ****l_1425 = (void*)0;
    uint64_t l_1474 = 18446744073709551607UL;
    int i;
    (*l_73) = (((*l_52) |= (l_50 == &p_36)) , func_54((l_63[6] = l_59), (l_59 || (safe_rshift_func_int8_t_s_u((p_3104->g_2 , (p_3104->g_8 & l_59)), func_40((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(p_3104->g_8, (((((func_40(func_70(l_73, p_36, p_3104), p_3104) < p_3104->g_2) | 6L) != p_36) <= p_3104->g_53) != p_3104->g_8))) , p_3104->g_43[6][1]), p_3104->g_53)), p_3104)))), p_34, p_34, p_3104));
    ++l_88;
    for (p_3104->g_62 = 0; p_3104->g_62 < 10; p_3104->g_62 += 1)
    {
        l_61[p_3104->g_62] = (void*)0;
    }
    for (p_3104->g_77 = 9; (p_3104->g_77 >= 0); p_3104->g_77 -= 1)
    { /* block id: 29 */
        int32_t *l_98 = &p_3104->g_8;
        int32_t **l_1433[10][8][2] = {{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}},{{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536},{&p_3104->g_7,&p_3104->g_536}}};
        int32_t l_1440[10][6][4] = {{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}},{{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L},{0x03C5CD66L,8L,(-2L),0x5CAFB2D8L}}};
        uint64_t l_1457 = 0xB331D290429523C0L;
        uint16_t l_1475[6] = {2UL,0xF8CDL,2UL,2UL,0xF8CDL,2UL};
        uint32_t l_1479[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        uint32_t *****l_1480 = &l_1425;
        int i, j, k;
        for (p_3104->g_62 = 1; (p_3104->g_62 <= 9); p_3104->g_62 += 1)
        { /* block id: 32 */
            uint32_t l_107 = 0x618026BCL;
            uint32_t ****l_1426 = &p_3104->g_665[7];
            int8_t *l_1441[1];
            uint64_t **l_1453[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint64_t ***l_1452 = &l_1453[0][3];
            int16_t *l_1476 = &p_3104->g_144;
            uint64_t **l_1478 = (void*)0;
            uint64_t ***l_1477 = &l_1478;
            volatile int16_t * volatile * volatile *l_1483 = &p_3104->g_1481[1][0];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1441[i] = &p_3104->g_245;
            for (p_3104->g_83 = 0; (p_3104->g_83 <= 9); p_3104->g_83 += 1)
            { /* block id: 35 */
                int64_t *l_109 = &p_3104->g_110;
                (1 + 1);
            }
            (*l_86) = ((safe_rshift_func_uint8_t_u_s((l_1425 == l_1426), (p_3104->g_1189 ^= (safe_mul_func_uint8_t_u_u((p_3104->g_243 ^= p_36), (p_36 > ((!(safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_1433[6][1][0] = &p_3104->g_7) == (p_34 , &l_86)), ((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((+((!(((*l_73) = l_98) != ((!(0x340D1B1AB78E9486L >= (*l_98))) , (void*)0))) & p_36)), (**p_3104->g_606))), (*p_3104->g_315))), (*l_98))) , l_1440[3][4][1]))), (*l_87)))) == 1L))))))) > 0x8318L);
            (*l_1483) = ((safe_lshift_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((((*p_3104->g_606) == ((safe_add_func_int16_t_s_s(((((0UL == (((safe_sub_func_int16_t_s_s((((l_107 <= (safe_mod_func_int8_t_s_s(((p_3104->g_1454 = ((*l_1452) = &p_3104->g_1391[1][2])) != ((*l_1477) = (((**p_3104->g_918) &= 0xD8C9B480BBE89FB3L) , (((safe_add_func_uint32_t_u_u(((**l_73) <= l_1457), p_36)) | ((!((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_1476) = (safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((*p_3104->g_224) &= (((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0xCF9CL, (*l_86))), (**l_73))) || l_107) , l_1474)) | (*p_3104->g_1422)), 1L)), 9)) ^ l_1475[2]), (**l_73)))), 4)), 0x6830L)), (*l_86))) ^ 0x2AFDL)) ^ l_107)) , &p_3104->g_1391[1][2])))), p_36))) | 0UL) , l_1479[2]), 0x27E0L)) , 0L) , 0x3E8B3ACAL)) , l_1480) != &p_3104->g_664) ^ p_36), p_36)) , (*p_3104->g_606))) >= p_3104->g_83) , p_36), (-1L))) | p_36) <= 0x3B15B721B4F441BBL), (*l_86))) , p_3104->g_1481[1][0]);
        }
        if ((*p_37))
            continue;
    }
    return p_3104->g_144;
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_8
 * writes: p_3104->g_43
 */
uint32_t  func_40(uint64_t  p_41, struct S0 * p_3104)
{ /* block id: 13 */
    uint8_t l_42[5][8] = {{0x2DL,0x2DL,1UL,0x56L,0xFDL,0x56L,1UL,0x2DL},{0x2DL,0x2DL,1UL,0x56L,0xFDL,0x56L,1UL,0x2DL},{0x2DL,0x2DL,1UL,0x56L,0xFDL,0x56L,1UL,0x2DL},{0x2DL,0x2DL,1UL,0x56L,0xFDL,0x56L,1UL,0x2DL},{0x2DL,0x2DL,1UL,0x56L,0xFDL,0x56L,1UL,0x2DL}};
    int i, j;
    for (p_41 = 0; p_41 < 5; p_41 += 1)
    {
        for (p_3104->g_43[2][2] = 0; p_3104->g_43[2][2] < 8; p_3104->g_43[2][2] += 1)
        {
            l_42[p_41][p_3104->g_43[2][2]] = 0xC8L;
        }
    }
    return p_3104->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_83
 * writes: p_3104->g_83
 */
int32_t * func_54(uint8_t  p_55, int16_t  p_56, int32_t  p_57, uint32_t  p_58, struct S0 * p_3104)
{ /* block id: 21 */
    int32_t l_75[7] = {0x2B22BEB8L,0x5BD1B843L,0x2B22BEB8L,0x2B22BEB8L,0x5BD1B843L,0x2B22BEB8L,0x2B22BEB8L};
    int32_t *l_76 = &p_3104->g_77;
    int32_t *l_78 = &p_3104->g_77;
    int32_t l_79 = (-9L);
    int32_t *l_80 = &p_3104->g_77;
    int32_t *l_81[1];
    int8_t l_82[5];
    int i;
    for (i = 0; i < 1; i++)
        l_81[i] = &p_3104->g_77;
    for (i = 0; i < 5; i++)
        l_82[i] = 0x49L;
    --p_3104->g_83;
    return &p_3104->g_2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_70(int32_t ** p_71, int64_t  p_72, struct S0 * p_3104)
{ /* block id: 19 */
    int16_t l_74 = 0x50F8L;
    return l_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_51 p_3104->g_53 p_3104->g_174 p_3104->g_110 p_3104->g_83 p_3104->g_224 p_3104->g_43 p_3104->g_151 p_3104->g_2 p_3104->g_732 p_3104->g_523 p_3104->g_606 p_3104->g_522 p_3104->g_429 p_3104->g_581 p_3104->g_817 p_3104->g_405 p_3104->g_446 p_3104->g_890 p_3104->g_753 p_3104->g_335 p_3104->g_7 p_3104->g_428 p_3104->g_918 p_3104->g_520 p_3104->g_315 p_3104->g_8 p_3104->g_954 p_3104->g_595 p_3104->g_459 p_3104->g_243 p_3104->g_1122 p_3104->g_327 p_3104->g_77 p_3104->g_596 p_3104->g_597 p_3104->g_664 p_3104->g_665 p_3104->g_888 p_3104->g_1189 p_3104->g_144 p_3104->g_882 p_3104->g_1282 p_3104->g_1284 p_3104->g_1098 p_3104->g_62 p_3104->g_500 p_3104->g_1391 p_3104->g_536 p_3104->g_1422
 * writes: p_3104->g_151 p_3104->g_227 p_3104->g_732 p_3104->g_523 p_3104->g_7 p_3104->g_446 p_3104->g_882 p_3104->g_890 p_3104->g_243 p_3104->g_110 p_3104->g_581 p_3104->g_753 p_3104->g_596 p_3104->g_51 p_3104->g_405 p_3104->g_520 p_3104->g_144 p_3104->g_312 p_3104->g_606 p_3104->g_327 p_3104->g_174 p_3104->g_182 p_3104->g_919 p_3104->g_1189 p_3104->g_459 p_3104->g_536 p_3104->g_53 p_3104->g_522
 */
int32_t * func_91(int64_t  p_92, uint8_t  p_93, int64_t  p_94, int16_t  p_95, struct S0 * p_3104)
{ /* block id: 61 */
    uint16_t l_220 = 0x6773L;
    uint8_t *l_241 = &p_3104->g_62;
    uint8_t **l_240 = &l_241;
    int32_t l_248 = 0x311A1F48L;
    int64_t *l_256 = &p_3104->g_110;
    int32_t l_282 = 0L;
    int32_t l_283 = (-5L);
    int32_t l_285[4];
    int32_t *l_359 = (void*)0;
    uint64_t *l_375 = &p_3104->g_83;
    uint64_t **l_374[7] = {(void*)0,&l_375,(void*)0,(void*)0,&l_375,(void*)0,(void*)0};
    int32_t l_397 = 7L;
    int32_t l_406 = 1L;
    int64_t l_408 = 0x6DFE4CB58E6B8853L;
    int16_t l_436 = 9L;
    uint32_t l_463 = 4294967286UL;
    int64_t l_491 = (-4L);
    int8_t l_521 = (-3L);
    uint32_t l_609 = 4294967295UL;
    uint32_t ***l_646 = (void*)0;
    uint32_t ****l_645[5][8] = {{&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646},{&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646,&l_646}};
    int64_t l_670 = 0x58716EA4A11DB311L;
    uint32_t l_676 = 1UL;
    int8_t l_713 = 0x7EL;
    uint32_t ****l_725[5][4][5] = {{{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646}},{{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646}},{{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646}},{{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646}},{{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646},{&l_646,&p_3104->g_665[1],&p_3104->g_665[1],&p_3104->g_665[1],&l_646}}};
    uint32_t l_769 = 1UL;
    uint32_t l_1023 = 0x3B454A8CL;
    uint64_t **l_1059 = &p_3104->g_919;
    uint8_t ****l_1066 = &p_3104->g_595;
    uint8_t *****l_1065 = &l_1066;
    uint8_t ******l_1064 = &l_1065;
    int64_t **l_1071[2][5][6] = {{{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258}},{{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258},{&p_3104->g_258,&p_3104->g_258,&p_3104->g_258,&l_256,&p_3104->g_258,&p_3104->g_258}}};
    int32_t l_1149[10] = {6L,0x422CB33CL,6L,6L,0x422CB33CL,6L,6L,0x422CB33CL,6L,6L};
    int64_t l_1184[8][8][4] = {{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}},{{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)},{4L,4L,(-2L),(-1L)}}};
    uint32_t l_1256 = 0xF4777FF6L;
    uint8_t l_1260 = 0x36L;
    int8_t l_1276 = 0x21L;
    uint32_t l_1348 = 0x66488513L;
    int32_t * volatile *l_1415 = &p_3104->g_7;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_285[i] = 0x5DE0B42DL;
    for (p_92 = 0; (p_92 < 7); p_92 = safe_add_func_uint8_t_u_u(p_92, 2))
    { /* block id: 64 */
        uint8_t *l_207[5][1] = {{&p_3104->g_62},{&p_3104->g_62},{&p_3104->g_62},{&p_3104->g_62},{&p_3104->g_62}};
        uint8_t **l_206 = &l_207[1][0];
        int32_t l_223 = 0x6EBA4ED1L;
        int i, j;
        (*p_3104->g_224) = ((safe_lshift_func_uint16_t_u_s((((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((~(safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((*l_206) = &p_3104->g_62) == ((safe_rshift_func_int8_t_s_u((p_3104->g_51 && (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_3104->g_53, (safe_mod_func_int32_t_s_s((p_3104->g_174[0] , p_94), (safe_rshift_func_int16_t_s_s((0x4FL && (safe_mod_func_uint32_t_u_u((l_220 < (((safe_mod_func_uint32_t_u_u(4294967295UL, 0x3B2B5004L)) , 1UL) , 8L)), p_93))), p_94)))))), p_95))), 4)) , &p_93)), (-1L))), 14))) , l_220), p_3104->g_110)), p_92)) , l_223), p_3104->g_83)), l_220)), l_223)) != 4294967295UL) , 0UL), 12)) >= 0x507BL);
    }
    for (p_92 = 2; (p_92 >= 0); p_92 -= 1)
    { /* block id: 70 */
        uint32_t **l_226 = &p_3104->g_182;
        uint32_t ***l_225[9][8] = {{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0},{&l_226,&l_226,&l_226,(void*)0,&l_226,&l_226,&l_226,(void*)0}};
        uint8_t *l_242 = &p_3104->g_243;
        int8_t *l_244 = &p_3104->g_245;
        uint16_t *l_246 = (void*)0;
        uint16_t *l_247 = &l_220;
        uint64_t *l_249[4];
        int32_t l_250[1];
        int32_t l_277 = 0x14887734L;
        int32_t l_306[3][9][4] = {{{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L}},{{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L}},{{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L},{9L,2L,2L,9L}}};
        int16_t l_349 = 0x1229L;
        int32_t *l_361[7][4] = {{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]},{&l_250[0],&l_250[0],&l_285[1],&l_285[1]}};
        uint32_t l_412[9][7] = {{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L},{0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L,0UL,0x084ABC91L,0x084ABC91L}};
        int16_t l_417 = 0x247BL;
        uint16_t l_439 = 0x513BL;
        int32_t l_444 = 0x6778CB22L;
        uint32_t l_454 = 0UL;
        int16_t l_460 = (-3L);
        uint8_t l_501 = 254UL;
        int32_t *l_529 = (void*)0;
        uint8_t ***l_600 = &p_3104->g_596;
        uint32_t l_616 = 0xC2DA52F4L;
        uint32_t *****l_683 = (void*)0;
        int64_t l_686 = 0x6D7D15BAA8B06BC6L;
        int32_t l_755[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_249[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_250[i] = 0x58A08477L;
        for (i = 0; i < 4; i++)
            l_755[i] = 4L;
        p_3104->g_227 = &p_3104->g_182;
    }
    if ((safe_rshift_func_uint16_t_u_s(p_95, 1)))
    { /* block id: 349 */
        int32_t *l_766 = &l_282;
        int32_t *l_767[9][1][6] = {{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}},{{&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0],&l_285[0]}}};
        int32_t l_768 = 0x01CEC233L;
        int i, j, k;
        l_766 = &l_282;
        l_769++;
        for (l_769 = (-16); (l_769 < 21); l_769 = safe_add_func_uint16_t_u_u(l_769, 5))
        { /* block id: 354 */
            int32_t *l_774 = (void*)0;
            return l_774;
        }
    }
    else
    { /* block id: 357 */
        uint64_t l_775 = 0x8FAE51B89FF1576AL;
        int32_t l_780[7] = {0x609F8D81L,(-4L),0x609F8D81L,0x609F8D81L,(-4L),0x609F8D81L,0x609F8D81L};
        int32_t l_786 = (-1L);
        uint8_t ****l_858 = (void*)0;
        uint8_t *****l_857 = &l_858;
        int64_t l_887 = 0x234C66A93F4FE8E1L;
        uint64_t l_947 = 0x63DF020DC7CC25CCL;
        int32_t l_981 = (-1L);
        int32_t l_986 = 0x66BB12EAL;
        uint32_t ***l_1032 = &p_3104->g_227;
        uint32_t l_1040 = 0x2E077B38L;
        uint8_t l_1044 = 0UL;
        uint32_t *l_1047 = &l_463;
        int32_t *l_1050 = &l_248;
        int16_t *l_1053 = &p_3104->g_312[1];
        int8_t *l_1054 = &l_713;
        uint32_t l_1055 = 4294967287UL;
        int8_t l_1056 = 0x75L;
        uint64_t **l_1060 = (void*)0;
        uint64_t l_1102 = 0x689B6C95B48F4DB8L;
        int i;
        if (l_775)
        { /* block id: 358 */
            uint32_t l_781 = 0xC2FFED33L;
            int32_t l_799 = (-3L);
            int32_t l_824 = 0x7D85E19DL;
            int32_t l_825[5][9] = {{0x24B614B0L,1L,0x1A879949L,(-9L),1L,(-9L),0x1A879949L,1L,0x24B614B0L},{0x24B614B0L,1L,0x1A879949L,(-9L),1L,(-9L),0x1A879949L,1L,0x24B614B0L},{0x24B614B0L,1L,0x1A879949L,(-9L),1L,(-9L),0x1A879949L,1L,0x24B614B0L},{0x24B614B0L,1L,0x1A879949L,(-9L),1L,(-9L),0x1A879949L,1L,0x24B614B0L},{0x24B614B0L,1L,0x1A879949L,(-9L),1L,(-9L),0x1A879949L,1L,0x24B614B0L}};
            uint64_t *l_837 = &l_775;
            int32_t *l_850[8][1][8] = {{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}},{{&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283}}};
            int16_t l_895[5];
            uint64_t l_898 = 9UL;
            int32_t **l_906[8][2] = {{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]},{&l_850[3][0][0],&l_850[3][0][0]}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_895[i] = 1L;
            if (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x6517L, p_3104->g_43[3][1])), 0)) & ((((((--l_781) , (-5L)) | p_94) != (safe_mul_func_uint16_t_u_u((l_786 || ((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_3104->g_151, (safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((5UL | 0x0CBD5653174EE8FFL) > l_799), 10)), p_3104->g_2)) > p_94), 4)))) | (-2L)), 4)) >= 0UL), 2UL)) <= 2L)), 9UL))) >= p_92) , l_670)))
            { /* block id: 360 */
                int32_t *l_800 = &l_248;
                int32_t l_815 = 0x48C7D527L;
                int8_t l_821[9][2] = {{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}};
                uint64_t *l_832[2][2][6] = {{{&l_775,&p_3104->g_83,&l_775,&l_775,&p_3104->g_83,&l_775},{&l_775,&p_3104->g_83,&l_775,&l_775,&p_3104->g_83,&l_775}},{{&l_775,&p_3104->g_83,&l_775,&l_775,&p_3104->g_83,&l_775},{&l_775,&p_3104->g_83,&l_775,&l_775,&p_3104->g_83,&l_775}}};
                int i, j, k;
                (*l_800) = 0x075635E4L;
                for (p_3104->g_732 = (-30); (p_3104->g_732 >= 28); ++p_3104->g_732)
                { /* block id: 364 */
                    int32_t l_816 = 0x15F62172L;
                    int32_t l_822 = 1L;
                    int32_t l_823[6][7] = {{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L},{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L},{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L},{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L},{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L},{0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L,0x61A0ECA6L,0x35E3DF14L,0x35E3DF14L}};
                    int16_t l_826 = 0x05CFL;
                    uint32_t l_827 = 0x63D5C647L;
                    int i, j;
                    for (p_3104->g_523 = 0; (p_3104->g_523 <= 6); p_3104->g_523 += 1)
                    { /* block id: 367 */
                        uint32_t **l_813 = &p_3104->g_182;
                        int16_t *l_814 = &p_3104->g_312[1];
                        int32_t **l_818 = &l_359;
                        int32_t *l_819 = &l_285[1];
                        int32_t *l_820[2][5] = {{&l_780[5],&l_780[5],&l_780[5],&l_780[5],&l_780[5]},{&l_780[5],&l_780[5],&l_780[5],&l_780[5],&l_780[5]}};
                        int i, j;
                        (*l_818) = &l_799;
                        l_827--;
                    }
                    (*l_800) = (safe_lshift_func_int16_t_s_s((l_832[0][0][2] != ((safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_786, p_95)), 1)) , l_837)), 0));
                    if (p_95)
                        break;
                    if ((*l_800))
                        continue;
                }
            }
            else
            { /* block id: 377 */
                uint32_t l_844 = 4294967295UL;
                int32_t *l_872[4];
                int32_t l_896 = 0x71831EF6L;
                int32_t *l_904 = &l_799;
                int i;
                for (i = 0; i < 4; i++)
                    l_872[i] = &p_3104->g_2;
                for (p_3104->g_732 = 12; (p_3104->g_732 <= 47); p_3104->g_732++)
                { /* block id: 380 */
                    uint8_t *****l_859 = &l_858;
                    int32_t l_869 = 1L;
                    int32_t **l_873 = &p_3104->g_7;
                    for (l_775 = 0; (l_775 <= 8); l_775 = safe_add_func_int64_t_s_s(l_775, 1))
                    { /* block id: 383 */
                        int32_t *l_842 = &p_3104->g_151;
                        int32_t *l_843 = &l_283;
                        int32_t **l_849[4] = {&l_359,&l_359,&l_359,&l_359};
                        int i;
                        l_844--;
                        l_850[3][0][1] = ((1UL && (++(**p_3104->g_606))) , ((*p_3104->g_429) = &l_780[4]));
                    }
                    for (l_775 = (-20); (l_775 != 58); l_775++)
                    { /* block id: 391 */
                        uint8_t ******l_860 = &l_859;
                        int32_t l_870 = 0x34CDBC06L;
                        int32_t l_871 = (-2L);
                        l_871 |= (safe_add_func_int32_t_s_s(((((l_780[5] &= (safe_mul_func_uint16_t_u_u((l_857 == ((*l_860) = l_859)), (!((safe_add_func_int32_t_s_s((((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u((p_3104->g_581 & l_869), 6)) , l_844) & (p_93 <= 0L)), p_94)), l_870)) > p_3104->g_53) && p_3104->g_817), 0x0D70FE7AL)) < 0x4CBB2DE62B48ECDFL))))) ^ (-1L)) && p_92) , (*p_3104->g_224)), p_3104->g_405));
                        return l_872[3];
                    }
                    (*l_873) = (void*)0;
                }
                for (p_3104->g_446 = 0; (p_3104->g_446 <= 1); p_3104->g_446 += 1)
                { /* block id: 401 */
                    int32_t *l_881 = &p_3104->g_882;
                    int32_t l_889[4] = {0x5DCDCEBBL,0x5DCDCEBBL,0x5DCDCEBBL,0x5DCDCEBBL};
                    int i;
                    if (p_94)
                        break;
                    if ((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_div_func_int64_t_s_s(((*l_256) |= ((((*p_3104->g_606) == ((~((*l_881) = l_775)) , (*p_3104->g_606))) , 18446744073709551615UL) != ((((p_93 <= (**p_3104->g_606)) != (p_92 <= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((p_3104->g_890++), (safe_mul_func_int16_t_s_s((!((l_780[5] = ((p_3104->g_243 = (0x1CA6CE7443E12947L == ((**p_3104->g_606) | l_889[0]))) || p_94)) >= p_92)), p_3104->g_817)))) > p_95), l_889[2])))) , 65535UL) <= p_3104->g_753))), p_94)))), p_94)), 0x2F44L)))
                    { /* block id: 408 */
                        int32_t l_897 = 0L;
                        ++l_898;
                    }
                    else
                    { /* block id: 410 */
                        l_248 = (*p_3104->g_224);
                    }
                    for (p_3104->g_732 = 0; (p_3104->g_732 <= 1); p_3104->g_732 += 1)
                    { /* block id: 415 */
                        uint32_t l_901 = 0x9E390DCAL;
                        int32_t *l_905[6][3] = {{&l_889[3],&l_889[3],&l_889[3]},{&l_889[3],&l_889[3],&l_889[3]},{&l_889[3],&l_889[3],&l_889[3]},{&l_889[3],&l_889[3],&l_889[3]},{&l_889[3],&l_889[3],&l_889[3]},{&l_889[3],&l_889[3],&l_889[3]}};
                        int i, j;
                        l_901--;
                        return (*p_3104->g_335);
                    }
                }
                l_248 = 0x5EB134C0L;
            }
            (*p_3104->g_428) = (void*)0;
        }
        else
        { /* block id: 423 */
            int32_t l_907[4][4][10] = {{{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)}},{{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)}},{{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)}},{{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)},{1L,1L,(-8L),0x2DBA1265L,(-6L),0x778A07A7L,(-8L),(-6L),1L,(-6L)}}};
            uint16_t *l_922 = &p_3104->g_732;
            uint32_t l_951 = 4294967295UL;
            int32_t l_962 = 0x3C76D9FCL;
            uint64_t *l_972 = &p_3104->g_520;
            int32_t l_975 = (-1L);
            uint64_t l_996 = 0xC381835D269374FEL;
            int i, j, k;
            l_907[0][2][1] |= 0x778FCBA9L;
            for (l_887 = (-3); (l_887 == 24); l_887++)
            { /* block id: 427 */
                uint8_t l_948 = 0xE3L;
                int32_t l_949 = 1L;
                int16_t *l_950[2];
                int32_t l_952 = (-7L);
                int i;
                for (i = 0; i < 2; i++)
                    l_950[i] = &p_3104->g_312[1];
                l_952 &= ((safe_mul_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(l_907[3][0][0], 12)) != (l_780[3] = ((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((((void*)0 != p_3104->g_918) >= (((((safe_mul_func_uint16_t_u_u(65535UL, (((l_922 = (*p_3104->g_606)) != (*p_3104->g_606)) == (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u((2UL && (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((p_3104->g_581 = (p_95 = (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((-1L) & (l_948 = ((safe_mul_func_int8_t_s_s(((!p_3104->g_520) & l_947), (*p_3104->g_315))) ^ 0L))), 0UL)), l_949)), 0xFD9B04E6L)) | 5L) >= 0x58L))), 0x75ECL)), 0x50592A4BL)), l_951)), 0)), 0L)), 2))), 13)) && l_786) , 0L), 1))))) <= 5L) >= p_94) , p_93) ^ 0L)) || p_3104->g_8), p_92)) | p_94) || 0x66E89A20L), p_92)) == l_907[0][2][1]))) , (*p_3104->g_315)), p_94)) || 0xBA08DF33216FC2D4L);
                for (p_3104->g_753 = 0; (p_3104->g_753 <= 3); p_3104->g_753 += 1)
                { /* block id: 436 */
                    int32_t l_953[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_953[i] = (-1L);
                    for (l_397 = 0; (l_397 <= 3); l_397 += 1)
                    { /* block id: 439 */
                        return (*p_3104->g_429);
                    }
                    l_953[1] = (l_285[p_3104->g_753] = l_285[p_3104->g_753]);
                    (*p_3104->g_954) = l_780[5];
                    if (p_94)
                        continue;
                }
            }
            for (l_248 = 27; (l_248 > 23); l_248 = safe_sub_func_uint32_t_u_u(l_248, 5))
            { /* block id: 450 */
                uint64_t *l_979 = (void*)0;
                int32_t l_982 = (-1L);
                uint64_t **l_985 = &l_972;
                int32_t *l_997[4][3][9] = {{{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0}},{{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0}},{{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0}},{{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0},{&l_283,&l_780[5],&l_285[1],&p_3104->g_151,&l_285[1],&l_780[5],&l_283,&l_780[2],(void*)0}}};
                int32_t **l_998 = &p_3104->g_7;
                int i, j, k;
                for (l_769 = 0; (l_769 < 8); ++l_769)
                { /* block id: 453 */
                    uint32_t l_963[10] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    int32_t l_977 = (-1L);
                    uint64_t *l_978 = (void*)0;
                    int32_t l_980 = 5L;
                    int i;
                    for (l_406 = (-23); (l_406 <= (-10)); l_406 = safe_add_func_uint8_t_u_u(l_406, 6))
                    { /* block id: 456 */
                        int32_t *l_961[10][6] = {{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2},{&l_285[0],&l_780[5],&p_3104->g_2,&l_285[0],(void*)0,&p_3104->g_2}};
                        uint32_t *l_976[3][1][10] = {{{&l_463,&l_463,&l_769,(void*)0,&l_463,&l_769,&p_3104->g_51,(void*)0,&p_3104->g_51,&l_769}},{{&l_463,&l_463,&l_769,(void*)0,&l_463,&l_769,&p_3104->g_51,(void*)0,&p_3104->g_51,&l_769}},{{&l_463,&l_463,&l_769,(void*)0,&l_463,&l_769,&p_3104->g_51,(void*)0,&p_3104->g_51,&l_769}}};
                        int i, j, k;
                        ++l_963[7];
                        (*p_3104->g_954) = ((safe_rshift_func_int8_t_s_u(((l_982 = (((((safe_lshift_func_int16_t_s_s(((l_981 = ((p_3104->g_51 = (safe_sub_func_int8_t_s_s((0xD5E1L == ((l_780[5] = 0x726AA509L) <= ((((void*)0 == l_972) != ((~0x1CD13FFDL) , l_947)) <= ((((((*p_3104->g_595) = &l_241) != (void*)0) != (safe_mod_func_uint32_t_u_u((l_977 = ((0UL <= p_3104->g_459) | l_975)), 0x771D57A2L))) , l_978) == l_979)))), l_980))) >= 0x5A9E9BB8L)) < 0x535EE075L), p_95)) , p_93) , p_95) , &l_962) == &l_962)) == l_907[2][2][4]), 5)) , 0x6CBB36B6L);
                        (*p_3104->g_954) = (l_986 = (((safe_rshift_func_uint8_t_u_u((l_780[2] = ((((void*)0 != l_985) || (&p_3104->g_596 == &l_240)) >= 0x4568L)), 0)) || 0x51D4449C6C3AC44BL) & l_786));
                    }
                }
                l_282 = (p_94 & ((l_962 = (((+((l_975 , l_951) & (safe_unary_minus_func_int64_t_s((((safe_rshift_func_uint8_t_u_u(p_95, 2)) , ((p_93 = (l_786 && ((7L & (safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_922 == (void*)0), 7)), l_996)), (-2L)))) , p_93))) != l_982)) , l_962))))) || 6L) != 0xE9L)) <= 9L));
                (*l_998) = &l_962;
            }
        }
        for (p_3104->g_405 = 8; (p_3104->g_405 == (-28)); p_3104->g_405--)
        { /* block id: 478 */
            uint8_t ****l_1005[3];
            int32_t l_1020 = 0x71C537A9L;
            uint32_t ***l_1030 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_1005[i] = &p_3104->g_595;
            for (p_3104->g_520 = 0; (p_3104->g_520 > 25); ++p_3104->g_520)
            { /* block id: 481 */
                uint32_t l_1010[5][10] = {{0x52443BAEL,1UL,0UL,0x691F140BL,4294967289UL,0x691F140BL,0UL,1UL,0x52443BAEL,0UL},{0x52443BAEL,1UL,0UL,0x691F140BL,4294967289UL,0x691F140BL,0UL,1UL,0x52443BAEL,0UL},{0x52443BAEL,1UL,0UL,0x691F140BL,4294967289UL,0x691F140BL,0UL,1UL,0x52443BAEL,0UL},{0x52443BAEL,1UL,0UL,0x691F140BL,4294967289UL,0x691F140BL,0UL,1UL,0x52443BAEL,0UL},{0x52443BAEL,1UL,0UL,0x691F140BL,4294967289UL,0x691F140BL,0UL,1UL,0x52443BAEL,0UL}};
                int16_t *l_1017 = &p_3104->g_144;
                int16_t *l_1024 = &l_436;
                int32_t l_1025 = 0x0F8BF977L;
                int32_t *l_1027 = &l_283;
                uint64_t *l_1041[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                (*l_1027) |= (4294967288UL | (safe_add_func_uint64_t_u_u((((void*)0 == l_1005[0]) , (l_1025 &= ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((*l_1024) &= (!((l_1010[1][1] , (safe_sub_func_int16_t_s_s(0L, (safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((((*l_1017) = 0x048EL) || ((**p_3104->g_606) ^= ((safe_rshift_func_int16_t_s_u(l_1020, ((l_1020 < (safe_rshift_func_int8_t_s_u((1L && p_92), 7))) <= 5L))) >= 0L))), l_1023)), 1L))))) && 0UL))), 5)), 12)) != p_3104->g_405))), p_93)));
                if (p_92)
                    continue;
                for (p_3104->g_243 = 0; (p_3104->g_243 > 20); p_3104->g_243 = safe_add_func_uint8_t_u_u(p_3104->g_243, 1))
                { /* block id: 490 */
                    uint32_t ***l_1031 = &p_3104->g_227;
                    int32_t *l_1033[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1033[i] = &l_248;
                    (*l_1027) = (((p_95 = (l_1020 | (0x229F2C03L & 0x163DC518L))) , (l_1031 = l_1030)) != l_1032);
                    return &p_3104->g_77;
                }
                (*l_1027) = (l_981 = (safe_lshift_func_int16_t_s_u(((0x59A4BEE8FE4EDEF5L && 0UL) > ((--p_3104->g_243) && (l_1040 <= (18446744073709551613UL && (l_1041[0] == l_1041[0]))))), (safe_mod_func_uint16_t_u_u((l_1044 <= 3UL), p_93)))));
            }
        }
        if ((((safe_rshift_func_uint8_t_u_s(0UL, (*p_3104->g_315))) != ((p_92 |= l_947) || (p_94 == (p_92 < (((*l_1054) = (((*l_1047)--) <= (0x6CL | ((((*l_1050) = l_780[4]) < (((p_3104->g_581 = ((*l_1053) = ((safe_mul_func_uint8_t_u_u((p_95 & ((p_95 && p_3104->g_83) , p_3104->g_520)), p_94)) && 0x17AFDC8C3EC9C2C4L))) , p_93) && p_92)) < p_94)))) <= l_1055))))) < l_1056))
        { /* block id: 507 */
            uint8_t ******l_1067[8] = {&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065};
            int32_t l_1091 = 0x6F36500DL;
            int32_t l_1092 = 5L;
            int32_t l_1096 = 0x06AAFC80L;
            int32_t l_1097 = 0x7B064BFFL;
            int32_t l_1100[1];
            int16_t l_1101 = 1L;
            uint64_t l_1121 = 18446744073709551613UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1100[i] = 4L;
            for (l_1055 = (-21); (l_1055 > 6); l_1055 = safe_add_func_int32_t_s_s(l_1055, 5))
            { /* block id: 510 */
                uint16_t l_1061 = 0x7912L;
                uint8_t ***l_1087 = &l_240;
                int64_t l_1088 = 0x0F0171E656DF3D5BL;
                int32_t l_1093 = 0x324DA206L;
                int32_t l_1095 = 0x11D66918L;
                int32_t l_1099[3][10] = {{0x1BDE31C3L,0x1BDE31C3L,(-1L),8L,(-1L),8L,(-1L),0x1BDE31C3L,0x1BDE31C3L,(-1L)},{0x1BDE31C3L,0x1BDE31C3L,(-1L),8L,(-1L),8L,(-1L),0x1BDE31C3L,0x1BDE31C3L,(-1L)},{0x1BDE31C3L,0x1BDE31C3L,(-1L),8L,(-1L),8L,(-1L),0x1BDE31C3L,0x1BDE31C3L,(-1L)}};
                uint32_t l_1124 = 0UL;
                int8_t *l_1127 = &p_3104->g_245;
                int32_t *l_1136 = &p_3104->g_502[1][2];
                uint64_t *l_1154 = &p_3104->g_520;
                int i, j;
                if (((1L | (l_1059 == l_1060)) | (((*p_3104->g_315) < ((l_1061 <= (safe_mul_func_uint16_t_u_u((l_1064 == l_1067[7]), 0L))) , 0x7AL)) != 0x3AA5C18A9EF4E4D5L)))
                { /* block id: 511 */
                    int64_t **l_1070 = &p_3104->g_258;
                    int64_t **l_1072 = &l_256;
                    int32_t *l_1089 = &l_780[0];
                    int32_t *l_1090[2][9] = {{&l_981,&p_3104->g_2,&l_981,&l_981,&p_3104->g_2,&l_981,&l_981,&p_3104->g_2,&l_981},{&l_981,&p_3104->g_2,&l_981,&l_981,&p_3104->g_2,&l_981,&l_981,&p_3104->g_2,&l_981}};
                    int i, j;
                    for (l_786 = 29; (l_786 != (-20)); l_786 = safe_sub_func_uint8_t_u_u(l_786, 3))
                    { /* block id: 514 */
                        uint16_t l_1083[9][1][10] = {{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}},{{0x0495L,0x0495L,0x1CA1L,0xB788L,65529UL,0xB788L,0x1CA1L,0x0495L,0x0495L,0x1CA1L}}};
                        uint8_t ***l_1086 = &l_240;
                        int i, j, k;
                        p_3104->g_606 = &p_3104->g_522[0];
                        (*l_1050) = ((l_1070 == (l_1072 = l_1071[0][4][0])) , ((~(safe_add_func_uint32_t_u_u((((p_3104->g_890 |= 0x9128116C310335BFL) & (safe_div_func_int32_t_s_s((~((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((0x5143L & 0UL) , (safe_mod_func_int32_t_s_s(0x0DDF2BEEL, l_1083[2][0][9]))), 0)), (safe_rshift_func_int16_t_s_s((((*l_1066) != (l_1087 = l_1086)) >= 0xCAA8A84EL), 12)))) >= 0x09D1L)), p_94))) < l_1088), p_92))) == p_92));
                    }
                    l_1102--;
                }
                else
                { /* block id: 522 */
                    int64_t *l_1107 = &p_3104->g_459;
                    int32_t *l_1112[2][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    uint16_t ***l_1123 = &p_3104->g_606;
                    int i, j, k;
                    for (p_3104->g_732 = 9; (p_3104->g_732 <= 29); p_3104->g_732++)
                    { /* block id: 525 */
                        (*p_3104->g_335) = &l_780[5];
                        if ((*p_3104->g_224))
                            continue;
                        (*p_3104->g_7) = 0x25A6998FL;
                    }
                    l_1124 = (0x739BL >= ((((*l_1123) = (((((*l_1054) = ((l_1107 = l_1107) == &p_94)) < (!(safe_rshift_func_int16_t_s_s((+(safe_mul_func_uint16_t_u_u((~((*p_3104->g_224) && (l_1093 = ((*l_1050) = (!p_95))))), ((safe_lshift_func_int8_t_s_s(0x45L, 2)) != p_94)))), 15)))) , (safe_rshift_func_int16_t_s_u(p_94, ((**p_3104->g_606) = ((((safe_add_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(((((l_1099[0][0] &= ((*p_3104->g_315) != l_1121)) & 6L) , p_92) && 0UL), p_93)) == p_3104->g_43[3][3]), p_3104->g_1122)) < p_92) || l_1100[0]) , (**p_3104->g_606)))))) , &p_3104->g_522[1])) == (void*)0) < p_95));
                }
                if (l_408)
                    continue;
                for (l_1044 = (-17); (l_1044 == 21); ++l_1044)
                { /* block id: 542 */
                    uint8_t l_1128 = 1UL;
                    l_1128 |= (l_1127 != (void*)0);
                }
                for (p_3104->g_327 = 4; (p_3104->g_327 <= (-1)); --p_3104->g_327)
                { /* block id: 547 */
                    uint32_t l_1177 = 0x0915F697L;
                    int16_t l_1190 = 0x4AA8L;
                    for (l_769 = 12; (l_769 > 18); l_769 = safe_add_func_uint64_t_u_u(l_769, 2))
                    { /* block id: 550 */
                        int32_t **l_1135 = (void*)0;
                        int32_t l_1139 = (-1L);
                        int32_t **l_1140[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1140[i] = &p_3104->g_536;
                        (*p_3104->g_335) = func_99(p_92, ((*p_3104->g_315) != ((0x88DA2AFEL > (*l_1050)) , (p_93 ^ (((safe_mul_func_int16_t_s_s(((l_1136 = &p_3104->g_502[0][3]) != &p_3104->g_888), (safe_lshift_func_uint8_t_u_s((l_1139 = p_92), (((&l_1097 != &l_1096) > p_93) && p_92))))) , 0x5CL) && 0xC6L)))), p_95, &p_3104->g_7, p_95, p_3104);
                    }
                    for (p_3104->g_581 = 0; (p_3104->g_581 > 26); p_3104->g_581++)
                    { /* block id: 557 */
                        uint64_t l_1150 = 7UL;
                        int32_t *l_1151 = (void*)0;
                        int32_t *l_1152[5] = {&p_3104->g_151,&p_3104->g_151,&p_3104->g_151,&p_3104->g_151,&p_3104->g_151};
                        uint64_t *l_1153 = &p_3104->g_520;
                        int i;
                        l_1091 |= (((((*l_1047) = (*l_1050)) & (safe_rshift_func_uint8_t_u_u((0x67FE8AB4L != ((*p_3104->g_596) != &p_93)), 3))) || (((0xCFE690C1L & (safe_lshift_func_int16_t_s_s((-1L), 7))) & ((*p_3104->g_315) != (&p_3104->g_174[2] == ((((l_1149[4] | p_92) < 0L) >= l_1150) , (void*)0)))) <= (*p_3104->g_315))) != 0x0FF0FB57L);
                        l_1093 = ((((*l_1059) = l_1153) != l_1154) != (safe_add_func_uint16_t_u_u((((p_92 != (((((*l_1047) = (((safe_rshift_func_int8_t_s_u(((p_3104->g_110 &= (!0x5EA1D377FE6BFB7AL)) <= ((safe_mul_func_uint16_t_u_u(((((((*l_1153) = ((safe_mod_func_int64_t_s_s(p_95, 1UL)) || ((((safe_sub_func_int32_t_s_s((*p_3104->g_954), ((*l_1050) = l_1099[1][4]))) > ((((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((*p_3104->g_664) == (void*)0) ^ p_95), 0x7FC6L)) | l_1100[0]), p_95)), 0x13F4E6606B4971FCL)) | l_1100[0]) , l_1099[1][4]) ^ 0x2637A6E17B616F35L)) , 0L) | l_1088))) , p_94) ^ 0x5A7CL) | p_95) , (**p_3104->g_606)), 0x9D3CL)) || 4294967286UL)), p_92)) >= l_1097) >= p_95)) < 0x4BB7CEFBL) < p_3104->g_174[1]) >= l_1121)) > p_95) | p_3104->g_51), 0UL)));
                    }
                    (*l_1050) = (p_94 != (safe_add_func_int8_t_s_s((l_1097 = ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_1177, (((l_1190 = (p_3104->g_1189 |= (safe_rshift_func_uint16_t_u_u((0x3C45L <= ((safe_div_func_uint64_t_u_u(p_3104->g_888, (safe_mod_func_int32_t_s_s((l_1091 = (((*p_3104->g_315) || l_1184[4][2][1]) >= (p_3104->g_243 | (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_95, p_3104->g_83)), 1L))))), 0x9FE0DF7FL)))) ^ 0x75F0C23DL)), 8)))) == l_1177) , (*l_1050)))), p_3104->g_520)) && p_92)), (*p_3104->g_315))));
                }
            }
        }
        else
        { /* block id: 574 */
            int32_t l_1202[7] = {0x796DD065L,1L,0x796DD065L,0x796DD065L,1L,0x796DD065L,0x796DD065L};
            uint64_t *l_1208 = (void*)0;
            uint32_t l_1216 = 0x4AE2EB18L;
            int32_t *l_1219 = &l_981;
            int64_t **l_1233 = &p_3104->g_258;
            uint8_t l_1234 = 0x20L;
            int i;
            for (l_220 = 0; (l_220 == 56); l_220 = safe_add_func_uint8_t_u_u(l_220, 1))
            { /* block id: 577 */
                uint16_t l_1203 = 65535UL;
                int32_t *l_1215 = &l_1202[2];
                int32_t *l_1235 = (void*)0;
                int32_t *l_1236 = &l_1149[5];
                for (l_887 = 0; (l_887 <= 1); l_887 += 1)
                { /* block id: 580 */
                    int32_t *l_1193 = &l_780[2];
                    int32_t *l_1194 = (void*)0;
                    int32_t *l_1195 = &l_248;
                    int32_t *l_1196 = &l_285[1];
                    int32_t *l_1197 = &l_285[1];
                    int32_t *l_1198 = (void*)0;
                    int32_t *l_1199 = &l_283;
                    int32_t *l_1200 = &l_1149[4];
                    int32_t *l_1201[4][6][1] = {{{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77}},{{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77}},{{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77}},{{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77},{&p_3104->g_77}}};
                    int i, j, k;
                    ++l_1203;
                    (*l_1193) ^= (*p_3104->g_954);
                    if ((((p_95 , (safe_lshift_func_int16_t_s_u(((((&l_775 == (l_1208 = &l_947)) && ((0x1B91D2FD8FB5E1AFL ^ (safe_sub_func_uint8_t_u_u(1UL, (safe_sub_func_int32_t_s_s((((*l_1199) &= (*p_3104->g_954)) >= (!(safe_mul_func_uint16_t_u_u(((p_92 || ((&l_986 == (l_1215 = &p_3104->g_502[1][2])) , 0x76CA9354L)) < 18446744073709551609UL), 0x2EA7L)))), 0x22801AF6L))))) < (*l_1050))) | p_92) | l_1216), 7))) , l_1184[1][3][3]) ^ 1L))
                    { /* block id: 586 */
                        int32_t *l_1217 = &p_3104->g_8;
                        int32_t **l_1218 = &l_1195;
                        (*l_1218) = l_1217;
                    }
                    else
                    { /* block id: 588 */
                        int32_t *l_1220 = &l_285[1];
                        return &p_3104->g_8;
                    }
                }
                if (p_93)
                    continue;
                (*l_1236) |= ((0x1D6E4C6BL != (&p_3104->g_919 == &p_3104->g_919)) , (safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((*l_1219) = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_92, ((*l_1219) , (*l_1219)))), ((l_1233 != &l_256) != (((void*)0 != l_1215) >= p_94)))) ^ p_95)), l_1234)), (*l_1050))) , p_93), p_94)));
            }
        }
    }
    if (p_93)
    { /* block id: 598 */
        int32_t *l_1242[9][10] = {{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0},{(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0,&l_282,(void*)0,(void*)0}};
        uint32_t ***l_1249 = (void*)0;
        int i, j;
        for (p_3104->g_151 = (-2); (p_3104->g_151 == (-5)); --p_3104->g_151)
        { /* block id: 601 */
            int32_t *l_1243 = &l_282;
            int32_t l_1255[3];
            uint16_t *l_1259[10] = {&l_220,&p_3104->g_523,&p_3104->g_523,&p_3104->g_523,&l_220,&l_220,&p_3104->g_523,&p_3104->g_523,&p_3104->g_523,&l_220};
            int32_t *l_1266 = &p_3104->g_502[0][5];
            int32_t **l_1265 = &l_1266;
            int32_t *l_1268 = (void*)0;
            int32_t **l_1267 = &l_1268;
            int32_t *l_1269 = &p_3104->g_882;
            int32_t l_1270 = 0x24C23912L;
            int i;
            for (i = 0; i < 3; i++)
                l_1255[i] = (-7L);
            for (p_93 = (-22); (p_93 < 1); ++p_93)
            { /* block id: 604 */
                int32_t **l_1241[9] = {&p_3104->g_536,&p_3104->g_7,&p_3104->g_536,&p_3104->g_536,&p_3104->g_7,&p_3104->g_536,&p_3104->g_536,&p_3104->g_7,&p_3104->g_536};
                int i;
                l_359 = (l_1242[0][5] = &l_248);
                l_1243 = l_1243;
                for (p_92 = 0; (p_92 <= 9); p_92 += 1)
                { /* block id: 610 */
                    int16_t l_1244 = (-1L);
                    int32_t l_1252 = 0x365DD7C8L;
                    l_1242[0][5] = &l_285[1];
                    if (l_1244)
                        continue;
                    if (((*l_1243) <= (((p_92 <= ((((*l_359) >= ((p_3104->g_2 != ((65535UL >= (safe_sub_func_uint32_t_u_u(0x1E2A733AL, (((void*)0 == l_1249) || p_92)))) || l_1244)) ^ p_92)) < 0x3A232656C542F9AAL) & p_95)) , (-5L)) <= l_1244)))
                    { /* block id: 613 */
                        int32_t *l_1250 = &l_1149[6];
                        l_1242[0][5] = &l_1149[4];
                        l_1250 = &l_283;
                    }
                    else
                    { /* block id: 616 */
                        int32_t l_1251 = (-6L);
                        int32_t l_1253 = 1L;
                        int32_t l_1254[10] = {0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L,0x23DC0F01L};
                        int i;
                        ++l_1256;
                    }
                }
            }
            l_1270 = ((l_1255[0] = (((((p_95 , l_1259[9]) == (void*)0) > l_1260) , (((*l_1269) |= (p_3104->g_144 <= (p_92 >= (safe_mod_func_uint16_t_u_u(((((*l_1243) = (*l_1243)) > (safe_rshift_func_int8_t_s_s((((*l_1265) = l_1242[7][8]) == ((*l_1267) = &l_397)), (*p_3104->g_315)))) & 0x1F06L), p_3104->g_2))))) , (void*)0)) != (void*)0)) < 0x93A18A4FL);
            (*l_1243) = 0x3FD4D24CL;
        }
        for (p_3104->g_459 = (-7); (p_3104->g_459 < 22); p_3104->g_459++)
        { /* block id: 631 */
            uint32_t ***l_1274 = &p_3104->g_227;
            uint32_t *l_1275 = &l_463;
            int32_t l_1280 = 1L;
            uint32_t l_1281[9] = {0xE0D35A73L,0xCD16C889L,0xE0D35A73L,0xE0D35A73L,0xCD16C889L,0xE0D35A73L,0xE0D35A73L,0xCD16C889L,0xE0D35A73L};
            int32_t **l_1283 = (void*)0;
            int i;
            (*p_3104->g_1282) = &l_1280;
            (*p_3104->g_1284) = &l_1280;
            for (p_3104->g_890 = 29; (p_3104->g_890 == 13); p_3104->g_890 = safe_sub_func_int16_t_s_s(p_3104->g_890, 5))
            { /* block id: 638 */
                int32_t *l_1287 = &p_3104->g_151;
                return l_1287;
            }
        }
        for (p_3104->g_53 = 0; (p_3104->g_53 < 44); p_3104->g_53 = safe_add_func_uint16_t_u_u(p_3104->g_53, 9))
        { /* block id: 644 */
            int32_t *l_1290 = &l_248;
            l_285[1] = (*p_3104->g_224);
            return &p_3104->g_8;
        }
    }
    else
    { /* block id: 648 */
        uint32_t l_1291[6] = {4UL,4UL,4UL,4UL,4UL,4UL};
        int32_t *l_1314[4][6] = {{&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[0][3],&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[1][2]},{&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[0][3],&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[1][2]},{&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[0][3],&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[1][2]},{&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[0][3],&p_3104->g_502[1][2],&p_3104->g_502[1][2],&p_3104->g_502[1][2]}};
        int32_t *l_1315 = &l_248;
        int32_t l_1342 = (-2L);
        int32_t l_1343 = 1L;
        int32_t l_1344 = 0x2707F091L;
        int32_t l_1345 = (-7L);
        int32_t l_1346[5] = {1L,1L,1L,1L,1L};
        uint16_t l_1357[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int i, j;
        (*l_1315) = ((l_1291[5] && (safe_add_func_int16_t_s_s((p_3104->g_1098 , p_3104->g_77), 0x3054L))) , (((1UL <= ((((p_95 = (((((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_94, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((((~(safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_92, (4294967293UL && ((l_1314[3][3] != l_1314[3][3]) < l_1291[4])))), p_93)) , (**p_3104->g_606)) != p_94), p_92)) < p_94), 9L))) > p_3104->g_83) || (-8L)) | (*p_3104->g_954)), l_1291[5])) < p_94), l_1291[5])), p_94)))) || p_92), (**p_3104->g_606))), 0xD6349AF460AB9777L)) > p_92) ^ p_92) & 0UL) != p_3104->g_888)) == p_93) != 1L) , 4294967295UL)) <= 0L) ^ p_93));
        for (p_3104->g_890 = 1; (p_3104->g_890 >= 15); ++p_3104->g_890)
        { /* block id: 653 */
            int16_t l_1320[10][6][2] = {{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}},{{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL},{(-1L),0x44DBL}}};
            int32_t *l_1336 = &l_283;
            int32_t *l_1337 = (void*)0;
            int32_t *l_1338 = &l_282;
            int32_t *l_1339 = &l_285[1];
            int32_t *l_1340 = &l_248;
            int32_t *l_1341[8] = {&l_1149[1],&l_1149[1],&l_1149[1],&l_1149[1],&l_1149[1],&l_1149[1],&l_1149[1],&l_1149[1]};
            int32_t l_1347 = 8L;
            int i, j, k;
            for (l_220 = 0; (l_220 <= 9); l_220 += 1)
            { /* block id: 656 */
                int32_t l_1325 = 0x2C4D4CDDL;
                int i;
                l_282 ^= ((*l_1315) = ((l_1149[l_220] = l_285[3]) | ((p_3104->g_151 != (safe_mul_func_uint8_t_u_u(l_1320[6][0][0], (&l_375 != ((safe_rshift_func_int8_t_s_s((((~(safe_div_func_uint8_t_u_u((((*l_256) = (65535UL >= 0xF539L)) & (p_3104->g_62 >= 0x5F73L)), l_1325))) >= p_94) >= 0x37A170C606D0C6A1L), p_92)) , &l_375))))) , p_95)));
            }
            if (p_93)
                break;
            for (l_713 = 29; (l_713 != 14); l_713--)
            { /* block id: 665 */
                if ((*p_3104->g_954))
                { /* block id: 666 */
                    uint32_t l_1330[8] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                    int i;
                    (*l_1315) = (-4L);
                    (*l_1315) ^= (safe_mul_func_uint8_t_u_u((+(--l_1330[0])), (p_3104->g_500 == p_3104->g_500)));
                    if ((*p_3104->g_954))
                        break;
                }
                else
                { /* block id: 671 */
                    uint32_t l_1333 = 0xD1A45B07L;
                    l_1333--;
                }
            }
            ++l_1348;
        }
        if ((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(0x80FB8249L, (((*l_1315) > p_93) , (((*l_1315) = (+p_94)) <= (safe_sub_func_uint16_t_u_u(p_95, (l_1357[2] &= (p_93 , p_3104->g_53)))))))) <= ((-1L) || (&l_725[2][3][4] == (void*)0))) > 7L), 0x27626DB5L)))
        { /* block id: 679 */
            int32_t l_1374 = (-8L);
            int32_t l_1383[4] = {0L,0L,0L,0L};
            uint64_t *l_1393 = &p_3104->g_890;
            int i;
            for (p_3104->g_405 = 8; (p_3104->g_405 >= (-4)); p_3104->g_405 = safe_sub_func_uint32_t_u_u(p_3104->g_405, 1))
            { /* block id: 682 */
                uint16_t ***l_1377 = &p_3104->g_606;
                uint8_t *l_1382[7] = {&l_1260,&l_1260,&l_1260,&l_1260,&l_1260,&l_1260,&l_1260};
                uint64_t *l_1392 = &p_3104->g_890;
                uint64_t *l_1394[2][2] = {{&p_3104->g_890,&p_3104->g_890},{&p_3104->g_890,&p_3104->g_890}};
                int32_t *l_1410 = &l_285[0];
                int8_t *l_1411 = &l_1276;
                int32_t *l_1412[1][2][6] = {{{&l_1343,&l_1374,&l_1346[3],&l_1374,&l_1343,&l_1343},{&l_1343,&l_1374,&l_1346[3],&l_1374,&l_1343,&l_1343}}};
                int i, j, k;
                (*l_1315) &= ((6UL >= (l_1383[1] |= (((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_3104->g_243 = ((0xABFA406C068B7CDAL && ((l_1374 || ((((safe_mod_func_int16_t_s_s((l_1377 != (void*)0), (-9L))) < ((((**p_3104->g_606) >= (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x6378L, l_1374)), 0x5589L))) & l_1374) || p_94)) == 0x48E8C37FL) , 0x48B9L)) , 0UL)) , l_1374)), 7)), 0xA8L)), (*p_3104->g_315))), 4294967295UL)), p_93)) == 4L) | 255UL))) == l_1374);
                for (l_397 = 0; l_397 < 2; l_397 += 1)
                {
                    p_3104->g_522[l_397] = &p_3104->g_523;
                }
                for (l_408 = (-11); (l_408 < 1); l_408++)
                { /* block id: 689 */
                    int32_t *l_1386 = (void*)0;
                    return l_1386;
                }
                l_283 |= (safe_mul_func_int8_t_s_s((p_94 , ((safe_mod_func_uint8_t_u_u(((l_1392 = p_3104->g_1391[1][2]) != (l_1394[0][0] = l_1393)), (((+(l_1383[1] || (safe_mod_func_uint64_t_u_u(((((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*p_3104->g_315) = (*l_1315)), ((*l_1411) &= (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u((((*l_1410) = (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((251UL | (p_94 && l_1374)), 7L)), p_95))) >= 1L), p_95))))))), 0xF7L)), (*p_3104->g_954))) >= p_3104->g_62) | p_92) != p_3104->g_523), 0x60CDA1862842C718L)))) , (**p_3104->g_606)) , 0xB8L))) , 3L)), p_95));
            }
            for (p_3104->g_151 = (-30); (p_3104->g_151 > (-24)); p_3104->g_151++)
            { /* block id: 701 */
                l_1415 = &p_3104->g_224;
            }
        }
        else
        { /* block id: 704 */
            int32_t *l_1416 = &l_285[1];
            int32_t *l_1417 = &l_1149[4];
            int32_t *l_1418[1][2];
            uint64_t l_1419[5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1418[i][j] = &l_1344;
            }
            for (i = 0; i < 5; i++)
                l_1419[i] = 18446744073709551615UL;
            l_1419[3]++;
        }
        return (*p_3104->g_1282);
    }
    return p_3104->g_1422;
}


/* ------------------------------------------ */
/* 
 * reads : p_3104->g_2 p_3104->g_53 p_3104->g_77 p_3104->g_51 p_3104->g_83 p_3104->g_8 p_3104->g_151 p_3104->g_144 p_3104->g_174 p_3104->g_43 p_3104->g_7 p_3104->g_1422
 * writes: p_3104->g_144 p_3104->g_110 p_3104->g_151 p_3104->g_7 p_3104->g_174 p_3104->g_182 p_3104->g_51 p_3104->g_1422
 */
int32_t * func_99(int32_t  p_100, int8_t  p_101, int8_t  p_102, int32_t ** p_103, int32_t  p_104, struct S0 * p_3104)
{ /* block id: 37 */
    uint8_t *l_111 = (void*)0;
    uint32_t *l_125 = &p_3104->g_51;
    int32_t l_130 = 1L;
    int32_t l_131[7] = {0x607BB088L,0x607BB088L,0x607BB088L,0x607BB088L,0x607BB088L,0x607BB088L,0x607BB088L};
    int32_t l_132 = 0x307078ADL;
    int16_t *l_143 = &p_3104->g_144;
    int64_t *l_149 = &p_3104->g_110;
    int32_t *l_150 = &p_3104->g_151;
    int32_t *l_152 = &l_130;
    uint32_t l_164[2];
    uint32_t l_175 = 0UL;
    int i;
    for (i = 0; i < 2; i++)
        l_164[i] = 0x74962EC1L;
    l_132 &= (((+(l_111 != l_111)) , (l_131[0] ^= (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int16_t_s_s(((((l_125 = &p_3104->g_51) != &p_3104->g_51) && (p_3104->g_2 < p_3104->g_53)) > (safe_sub_func_int8_t_s_s(p_104, p_100))), (safe_add_func_uint16_t_u_u((p_101 | p_3104->g_77), p_3104->g_2)))) || p_101))) | p_3104->g_51) >= p_104), p_3104->g_83)) <= l_130), 2)), l_130)), l_130)) | p_101), 65529UL)))) <= l_130);
    (*l_152) = ((*l_150) ^= (safe_lshift_func_int16_t_s_u((((l_132 , (safe_add_func_int64_t_s_s(((*l_149) = (((((safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((*l_143) = p_101), 3)), (-5L))) || ((safe_lshift_func_uint8_t_u_s(p_101, (l_125 != (void*)0))) < ((p_101 <= ((((safe_sub_func_int64_t_s_s(p_104, p_3104->g_8)) != 18446744073709551615UL) , p_3104->g_51) , l_131[6])) < l_130))), p_3104->g_77)) , p_101) & p_104) , 0xEA25L) != p_101)), 1L))) <= p_102) < p_100), 0)));
    (*p_103) = &p_3104->g_151;
    for (p_3104->g_144 = 16; (p_3104->g_144 < 20); p_3104->g_144++)
    { /* block id: 48 */
        int32_t *l_159 = (void*)0;
        int8_t *l_173[7][7][5] = {{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}},{{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0},{&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],&p_3104->g_174[0],(void*)0}}};
        int i, j, k;
        (*l_150) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((((*p_103) = l_159) == l_159), (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((18446744073709551607UL && ((((l_164[1] , (safe_lshift_func_int8_t_s_u(((void*)0 == &p_3104->g_110), ((((*l_152) = (safe_add_func_uint32_t_u_u(p_3104->g_8, (((safe_rshift_func_uint16_t_u_s(((p_3104->g_174[2] &= ((safe_mod_func_int64_t_s_s(p_104, (*l_152))) < 65530UL)) , p_104), p_100)) , p_102) , (-1L))))) == p_102) & 0x3AL)))) && (*l_152)) && 0x78L) != (*l_150))) , 0x97321386L) && (*l_150)), (*l_150))), l_175)))), 5));
        (*l_150) |= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int64_t_s_s(((p_3104->g_182 = (void*)0) == &p_3104->g_53), p_3104->g_8)) || ((*l_152) = 0x3A48171DL)), (((p_101 | 0xD7EBL) <= (((safe_add_func_uint32_t_u_u((p_101 , ((*l_125) = (safe_mul_func_uint8_t_u_u((((1UL >= ((p_102 < 0x2DCB03EBL) | 0x7FL)) & 1L) , 0x0AL), 0x0AL)))), p_101)) , p_3104->g_43[0][2]) , (-1L))) | p_3104->g_2))), 0x03L));
        (*l_152) = (*l_150);
    }
    return (*p_103);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_3105;
    struct S0* p_3104 = &c_3105;
    struct S0 c_3106 = {
        0x653D8DA8L, // p_3104->g_2
        0x4A754320L, // p_3104->g_8
        &p_3104->g_8, // p_3104->g_7
        0xCF1C946BL, // p_3104->g_26
        {{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L},{0x13550E35L,0x3A6D7D04L,0x49C4B05EL,0x3A6D7D04L}}, // p_3104->g_43
        0xDF6F6D77L, // p_3104->g_51
        0xC0953B22L, // p_3104->g_53
        255UL, // p_3104->g_62
        0x161936EFL, // p_3104->g_77
        18446744073709551606UL, // p_3104->g_83
        0x0563AB882180DBEAL, // p_3104->g_110
        0x28D9L, // p_3104->g_144
        0x7E2E92E3L, // p_3104->g_151
        {0x49L,0x49L,0x49L}, // p_3104->g_174
        (void*)0, // p_3104->g_182
        &p_3104->g_151, // p_3104->g_224
        &p_3104->g_182, // p_3104->g_227
        255UL, // p_3104->g_243
        0x6CL, // p_3104->g_245
        (void*)0, // p_3104->g_258
        {0x63E0L,0x63E0L}, // p_3104->g_312
        &p_3104->g_174[0], // p_3104->g_315
        0L, // p_3104->g_327
        (void*)0, // p_3104->g_334
        &p_3104->g_7, // p_3104->g_335
        (void*)0, // p_3104->g_387
        0L, // p_3104->g_405
        &p_3104->g_7, // p_3104->g_428
        &p_3104->g_7, // p_3104->g_429
        4294967293UL, // p_3104->g_446
        (-7L), // p_3104->g_459
        (void*)0, // p_3104->g_500
        {{1L,1L,0x7C6F3322L,0x571D94AFL,0x44E09529L,0x571D94AFL,0x7C6F3322L,1L},{1L,1L,0x7C6F3322L,0x571D94AFL,0x44E09529L,0x571D94AFL,0x7C6F3322L,1L}}, // p_3104->g_502
        0UL, // p_3104->g_520
        0x6A46L, // p_3104->g_523
        {&p_3104->g_523,&p_3104->g_523}, // p_3104->g_522
        (void*)0, // p_3104->g_536
        (-9L), // p_3104->g_581
        (void*)0, // p_3104->g_597
        &p_3104->g_597, // p_3104->g_596
        &p_3104->g_596, // p_3104->g_595
        &p_3104->g_522[0], // p_3104->g_606
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_3104->g_637
        &p_3104->g_637[4], // p_3104->g_636
        {{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0},{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0},{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0},{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0},{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0},{(void*)0,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,&p_3104->g_636,(void*)0}}, // p_3104->g_635
        &p_3104->g_635[3][2], // p_3104->g_634
        {&p_3104->g_227,&p_3104->g_227,&p_3104->g_227,&p_3104->g_227,&p_3104->g_227,&p_3104->g_227,&p_3104->g_227,&p_3104->g_227}, // p_3104->g_665
        &p_3104->g_665[1], // p_3104->g_664
        0x816EL, // p_3104->g_732
        0x35D9DAB2L, // p_3104->g_753
        0xFAD4L, // p_3104->g_817
        0x73101A71L, // p_3104->g_882
        0L, // p_3104->g_888
        0UL, // p_3104->g_890
        &p_3104->g_520, // p_3104->g_919
        &p_3104->g_919, // p_3104->g_918
        &p_3104->g_151, // p_3104->g_954
        (void*)0, // p_3104->g_1026
        0x695DDB09BE6030E6L, // p_3104->g_1094
        0L, // p_3104->g_1098
        0x766CL, // p_3104->g_1122
        (-5L), // p_3104->g_1189
        0x59L, // p_3104->g_1273
        &p_3104->g_536, // p_3104->g_1282
        &p_3104->g_7, // p_3104->g_1284
        {{&p_3104->g_83,&p_3104->g_83,&p_3104->g_83,&p_3104->g_83},{&p_3104->g_83,&p_3104->g_83,&p_3104->g_83,&p_3104->g_83},{&p_3104->g_83,&p_3104->g_83,&p_3104->g_83,&p_3104->g_83},{&p_3104->g_83,&p_3104->g_83,&p_3104->g_83,&p_3104->g_83}}, // p_3104->g_1391
        &p_3104->g_2, // p_3104->g_1422
        &p_3104->g_1391[1][2], // p_3104->g_1454
        (void*)0, // p_3104->g_1482
        {{&p_3104->g_1482},{&p_3104->g_1482},{&p_3104->g_1482},{&p_3104->g_1482},{&p_3104->g_1482},{&p_3104->g_1482}}, // p_3104->g_1481
        (void*)0, // p_3104->g_1509
        {{{&p_3104->g_151}}}, // p_3104->g_1537
        &p_3104->g_1422, // p_3104->g_1538
        (void*)0, // p_3104->g_1551
        0x5BBF0E5654642BFCL, // p_3104->g_1598
        &p_3104->g_151, // p_3104->g_1646
        (void*)0, // p_3104->g_1672
        &p_3104->g_1672, // p_3104->g_1671
        &p_3104->g_536, // p_3104->g_1689
        &p_3104->g_536, // p_3104->g_1720
        &p_3104->g_7, // p_3104->g_1887
        {{{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422}},{{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422},{&p_3104->g_1422}}}, // p_3104->g_1930
        &p_3104->g_522[0], // p_3104->g_1989
        &p_3104->g_536, // p_3104->g_2175
        0x43L, // p_3104->g_2234
        &p_3104->g_2234, // p_3104->g_2233
        &p_3104->g_2233, // p_3104->g_2232
        &p_3104->g_2232, // p_3104->g_2231
        {{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}},{{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0},{&p_3104->g_2231,&p_3104->g_2231,(void*)0}}}, // p_3104->g_2230
        {&p_3104->g_2230[6][5][2],&p_3104->g_2230[6][5][2],&p_3104->g_2230[6][5][2],&p_3104->g_2230[6][5][2],&p_3104->g_2230[6][5][2],&p_3104->g_2230[6][5][2]}, // p_3104->g_2229
        &p_3104->g_2229[4], // p_3104->g_2228
        1UL, // p_3104->g_2245
        &p_3104->g_502[1][4], // p_3104->g_2283
        &p_3104->g_2283, // p_3104->g_2282
        &p_3104->g_2282, // p_3104->g_2281
        {{0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL},{0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL,0x7C1EL}}, // p_3104->g_2426
        0x20L, // p_3104->g_2428
        &p_3104->g_77, // p_3104->g_2460
        0x4271C027L, // p_3104->g_2466
        (void*)0, // p_3104->g_2481
        {&p_3104->g_2481}, // p_3104->g_2480
        &p_3104->g_606, // p_3104->g_2484
        &p_3104->g_2484, // p_3104->g_2483
        &p_3104->g_2483, // p_3104->g_2482
        (void*)0, // p_3104->g_2499
        (void*)0, // p_3104->g_2530
        &p_3104->g_2530, // p_3104->g_2529
        &p_3104->g_2529, // p_3104->g_2528
        &p_3104->g_2528, // p_3104->g_2527
        0x13D0D146610D6FBAL, // p_3104->g_2535
        0x7B4AF3B0L, // p_3104->g_2581
        (void*)0, // p_3104->g_2587
        &p_3104->g_1671, // p_3104->g_2589
        {&p_3104->g_2589,&p_3104->g_2589,&p_3104->g_2589,&p_3104->g_2589,&p_3104->g_2589}, // p_3104->g_2588
        {0xF79C9377L,0xF79C9377L}, // p_3104->g_2673
        (void*)0, // p_3104->g_2709
        0xE9C69534L, // p_3104->g_2816
        0x3972FF6BL, // p_3104->g_2860
        (void*)0, // p_3104->g_2922
        0UL, // p_3104->g_2954
        0x54594DF4C35E8F37L, // p_3104->g_2955
        0x6717C862L, // p_3104->g_2977
        0x4BL, // p_3104->g_3008
        4L, // p_3104->g_3009
        0x9E6DAD59675F1250L, // p_3104->g_3095
        0x2910F89F1F734C16L, // p_3104->g_3096
    };
    c_3105 = c_3106;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_3104);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_3104->g_2, "p_3104->g_2", print_hash_value);
    transparent_crc(p_3104->g_8, "p_3104->g_8", print_hash_value);
    transparent_crc(p_3104->g_26, "p_3104->g_26", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_3104->g_43[i][j], "p_3104->g_43[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3104->g_51, "p_3104->g_51", print_hash_value);
    transparent_crc(p_3104->g_53, "p_3104->g_53", print_hash_value);
    transparent_crc(p_3104->g_62, "p_3104->g_62", print_hash_value);
    transparent_crc(p_3104->g_77, "p_3104->g_77", print_hash_value);
    transparent_crc(p_3104->g_83, "p_3104->g_83", print_hash_value);
    transparent_crc(p_3104->g_110, "p_3104->g_110", print_hash_value);
    transparent_crc(p_3104->g_144, "p_3104->g_144", print_hash_value);
    transparent_crc(p_3104->g_151, "p_3104->g_151", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_3104->g_174[i], "p_3104->g_174[i]", print_hash_value);

    }
    transparent_crc(p_3104->g_243, "p_3104->g_243", print_hash_value);
    transparent_crc(p_3104->g_245, "p_3104->g_245", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3104->g_312[i], "p_3104->g_312[i]", print_hash_value);

    }
    transparent_crc(p_3104->g_327, "p_3104->g_327", print_hash_value);
    transparent_crc(p_3104->g_405, "p_3104->g_405", print_hash_value);
    transparent_crc(p_3104->g_446, "p_3104->g_446", print_hash_value);
    transparent_crc(p_3104->g_459, "p_3104->g_459", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_3104->g_502[i][j], "p_3104->g_502[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3104->g_520, "p_3104->g_520", print_hash_value);
    transparent_crc(p_3104->g_523, "p_3104->g_523", print_hash_value);
    transparent_crc(p_3104->g_581, "p_3104->g_581", print_hash_value);
    transparent_crc(p_3104->g_732, "p_3104->g_732", print_hash_value);
    transparent_crc(p_3104->g_753, "p_3104->g_753", print_hash_value);
    transparent_crc(p_3104->g_817, "p_3104->g_817", print_hash_value);
    transparent_crc(p_3104->g_882, "p_3104->g_882", print_hash_value);
    transparent_crc(p_3104->g_888, "p_3104->g_888", print_hash_value);
    transparent_crc(p_3104->g_890, "p_3104->g_890", print_hash_value);
    transparent_crc(p_3104->g_1094, "p_3104->g_1094", print_hash_value);
    transparent_crc(p_3104->g_1098, "p_3104->g_1098", print_hash_value);
    transparent_crc(p_3104->g_1122, "p_3104->g_1122", print_hash_value);
    transparent_crc(p_3104->g_1189, "p_3104->g_1189", print_hash_value);
    transparent_crc(p_3104->g_1273, "p_3104->g_1273", print_hash_value);
    transparent_crc(p_3104->g_1598, "p_3104->g_1598", print_hash_value);
    transparent_crc(p_3104->g_2234, "p_3104->g_2234", print_hash_value);
    transparent_crc(p_3104->g_2245, "p_3104->g_2245", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_3104->g_2426[i][j], "p_3104->g_2426[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_3104->g_2428, "p_3104->g_2428", print_hash_value);
    transparent_crc(p_3104->g_2466, "p_3104->g_2466", print_hash_value);
    transparent_crc(p_3104->g_2535, "p_3104->g_2535", print_hash_value);
    transparent_crc(p_3104->g_2581, "p_3104->g_2581", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_3104->g_2673[i], "p_3104->g_2673[i]", print_hash_value);

    }
    transparent_crc(p_3104->g_2816, "p_3104->g_2816", print_hash_value);
    transparent_crc(p_3104->g_2860, "p_3104->g_2860", print_hash_value);
    transparent_crc(p_3104->g_2954, "p_3104->g_2954", print_hash_value);
    transparent_crc(p_3104->g_2955, "p_3104->g_2955", print_hash_value);
    transparent_crc(p_3104->g_2977, "p_3104->g_2977", print_hash_value);
    transparent_crc(p_3104->g_3008, "p_3104->g_3008", print_hash_value);
    transparent_crc(p_3104->g_3009, "p_3104->g_3009", print_hash_value);
    transparent_crc(p_3104->g_3095, "p_3104->g_3095", print_hash_value);
    transparent_crc(p_3104->g_3096, "p_3104->g_3096", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
