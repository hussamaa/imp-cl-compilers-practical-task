// -g 13,38,10 -l 1,19,10
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


// Seed: 2885839505

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_8;
    uint8_t g_19;
    int16_t g_22;
    uint8_t g_67;
    uint16_t g_101;
    int32_t g_117;
    uint16_t **g_146[1];
    int8_t g_154[5][5][8];
    int64_t g_156;
    int32_t g_159;
    uint16_t g_179;
    uint64_t g_184;
    volatile uint16_t * volatile * volatile g_196[6];
    volatile uint16_t * volatile * volatile *g_195;
    int8_t g_198;
    int64_t *g_214;
    int32_t *g_246[2][5];
    int32_t **g_245[8][4][8];
    int16_t g_327;
    int16_t g_332;
    int64_t g_344;
    uint32_t g_346;
    int32_t g_358;
    int16_t *g_361;
    int16_t **g_360;
    int32_t g_381;
    int32_t g_441;
    int32_t *g_444[5];
    int32_t *g_478;
    volatile int8_t * volatile g_488;
    volatile int8_t * volatile *g_487;
    int8_t g_581;
    uint8_t *g_616;
    uint8_t * volatile *g_615;
    uint8_t * volatile * volatile *g_614;
    uint32_t g_619;
    uint16_t g_655;
    uint8_t g_656;
    uint64_t g_674;
    uint64_t g_691[10][9][2];
    uint16_t g_712;
    uint32_t g_749;
    uint16_t g_925;
    int64_t g_1005[5];
    int64_t g_1007;
    uint8_t *g_1112[10];
    uint16_t *g_1139;
    int32_t **g_1151[9];
    uint32_t *g_1240;
    uint64_t g_1260[6];
    uint16_t g_1293;
    int16_t *g_1353;
    int32_t g_1460;
    uint32_t *g_1479;
    int32_t g_1484;
    uint32_t g_1530;
    volatile int32_t *g_1538;
    volatile int32_t * volatile *g_1537;
    int64_t *g_1546[6];
    uint64_t *g_1556;
    int16_t **g_1557;
    uint8_t **g_1571;
    uint8_t ***g_1570;
    uint8_t g_1582;
    volatile uint64_t g_1990;
    volatile uint64_t *g_1989;
    volatile uint64_t **g_1988;
    volatile uint64_t ***g_1987[7];
    int32_t g_2048;
    uint8_t g_2049;
    uint32_t g_2053[4];
    uint64_t g_2101;
    int16_t ***g_2133;
    int32_t g_2198[5];
    int64_t **g_2259;
    uint64_t **g_2277;
    uint64_t ***g_2276[5];
    uint64_t g_2331;
    int32_t *g_2350;
    int64_t **g_2419;
    int32_t *g_2487;
    int32_t ** volatile g_2560;
    volatile int16_t g_2616;
    int32_t ** volatile g_2650;
    volatile uint16_t g_2699;
    int64_t *g_2770;
    uint8_t ***g_2785;
    volatile int8_t g_2839;
    uint8_t g_2884;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2885);
int32_t  func_12(int32_t  p_13, int16_t  p_14, uint64_t  p_15, struct S0 * p_2885);
int32_t  func_33(int16_t * p_34, int32_t * p_35, int32_t * p_36, uint64_t  p_37, uint32_t  p_38, struct S0 * p_2885);
int16_t  func_40(int16_t * p_41, int32_t  p_42, int32_t * p_43, struct S0 * p_2885);
int8_t  func_49(int32_t * p_50, uint64_t  p_51, struct S0 * p_2885);
int32_t * func_52(int32_t * p_53, int16_t * p_54, int16_t  p_55, uint32_t  p_56, struct S0 * p_2885);
int32_t * func_57(int32_t * p_58, struct S0 * p_2885);
uint16_t  func_78(int8_t  p_79, uint32_t  p_80, uint32_t  p_81, uint32_t  p_82, int64_t  p_83, struct S0 * p_2885);
int8_t  func_84(int16_t * p_85, int32_t  p_86, uint32_t  p_87, int8_t  p_88, struct S0 * p_2885);
uint16_t  func_93(int16_t * p_94, uint64_t  p_95, uint32_t  p_96, struct S0 * p_2885);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2885->g_3 p_2885->g_8 p_2885->g_2 p_2885->g_19 p_2885->g_2049 p_2885->g_360 p_2885->g_361 p_2885->g_327 p_2885->g_2350 p_2885->g_159 p_2885->g_478 p_2885->g_358 p_2885->g_1537 p_2885->g_1538 p_2885->g_1479 p_2885->g_749 p_2885->g_1571 p_2885->g_1112 p_2885->g_67 p_2885->g_656 p_2885->g_1353 p_2885->g_332 p_2885->g_1139 p_2885->g_1989 p_2885->g_1990 p_2885->g_614 p_2885->g_615 p_2885->g_616 p_2885->g_2331 p_2885->g_184 p_2885->g_2133 p_2885->g_1557 p_2885->g_1988 p_2885->g_179 p_2885->g_2884
 * writes: p_2885->g_3 p_2885->g_8 p_2885->g_22 p_2885->g_19 p_2885->g_2049 p_2885->g_327 p_2885->g_159 p_2885->g_925 p_2885->g_674 p_2885->g_2487 p_2885->g_179 p_2885->g_444 p_2885->g_2331 p_2885->g_184
 */
int32_t  func_1(struct S0 * p_2885)
{ /* block id: 4 */
    int32_t l_9[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t *l_10 = (void*)0;
    int32_t *l_11 = (void*)0;
    int32_t l_24[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    uint32_t l_2449 = 0x9A85817CL;
    int16_t l_2517 = 0x30F3L;
    uint64_t *l_2566 = (void*)0;
    int32_t l_2645[1][9] = {{0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL,0x793AF75EL}};
    uint64_t l_2647 = 9UL;
    int8_t *l_2695 = &p_2885->g_154[0][1][1];
    uint32_t l_2698 = 0x33481403L;
    int64_t l_2740 = (-7L);
    uint32_t l_2751[4] = {0xDFFB4B5BL,0xDFFB4B5BL,0xDFFB4B5BL,0xDFFB4B5BL};
    int i, j;
    for (p_2885->g_3 = 0; (p_2885->g_3 >= 4); p_2885->g_3 = safe_add_func_uint64_t_u_u(p_2885->g_3, 5))
    { /* block id: 7 */
        int32_t l_6 = 0x220985A9L;
        int32_t *l_7 = &p_2885->g_8;
        l_9[2] &= ((*l_7) = l_6);
    }
    if ((p_2885->g_8 = l_9[2]))
    { /* block id: 12 */
        int16_t *l_20 = (void*)0;
        int16_t *l_21 = &p_2885->g_22;
        int32_t l_2397 = (-9L);
        int32_t l_2398 = 0L;
        int32_t l_2458 = 0L;
        int32_t l_2459 = 0x35B926B4L;
        int32_t l_2462 = 1L;
        if (func_12(((p_2885->g_8 , ((p_2885->g_8 , (18446744073709551615UL ^ p_2885->g_2)) | p_2885->g_8)) || ((safe_unary_minus_func_uint8_t_u(0x06L)) != 0xCC9105FAL)), ((*l_21) = (safe_mul_func_uint16_t_u_u(p_2885->g_19, (&p_2885->g_3 != &p_2885->g_8)))), p_2885->g_3, p_2885))
        { /* block id: 16 */
            uint64_t l_23 = 1UL;
            l_24[3] |= l_23;
        }
        else
        { /* block id: 18 */
            int16_t *l_39 = &p_2885->g_22;
            int32_t l_2351 = (-1L);
            int32_t l_2456[10] = {0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L,0x6046DEF2L};
            int i;
            for (p_2885->g_3 = 8; (p_2885->g_3 >= 1); p_2885->g_3 -= 1)
            { /* block id: 21 */
                uint16_t l_2400 = 0xA12BL;
                int32_t l_2455 = 0x5503DBDAL;
                int32_t l_2457 = 0L;
                int32_t l_2460 = 0x46F0F1D0L;
                int32_t l_2461[6] = {1L,(-1L),1L,1L,(-1L),1L};
                int i;
                for (p_2885->g_19 = 3; (p_2885->g_19 <= 8); p_2885->g_19 += 1)
                { /* block id: 24 */
                    int32_t l_2399[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int32_t l_2409[1];
                    int64_t *l_2417 = &p_2885->g_1007;
                    int64_t **l_2416 = &l_2417;
                    uint32_t l_2422 = 0xD891D6AFL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2409[i] = (-1L);
                    (1 + 1);
                }
                for (p_2885->g_2049 = 0; (p_2885->g_2049 <= 7); p_2885->g_2049 += 1)
                { /* block id: 1258 */
                    uint32_t l_2463 = 0x0BE7E9B7L;
                    int i;
                    l_24[p_2885->g_2049] |= (-1L);
                    if (((*p_2885->g_2350) ^= ((safe_sub_func_int16_t_s_s(l_9[p_2885->g_2049], ((**p_2885->g_360) |= 0x6BC9L))) || 0x2C43782772719A14L)))
                    { /* block id: 1262 */
                        int i;
                        return l_24[p_2885->g_2049];
                    }
                    else
                    { /* block id: 1264 */
                        int32_t *l_2452 = &l_24[1];
                        int32_t *l_2453 = (void*)0;
                        int32_t *l_2454[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_2454[i] = &l_2351;
                        --l_2463;
                        return (*p_2885->g_478);
                    }
                }
            }
            return (*p_2885->g_478);
        }
    }
    else
    { /* block id: 1272 */
        uint8_t l_2471[10] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
        int64_t l_2483[3];
        int8_t l_2500 = 7L;
        int32_t l_2510 = 0L;
        uint16_t ***l_2519 = &p_2885->g_146[0];
        uint32_t l_2541 = 1UL;
        int32_t l_2610 = 2L;
        int32_t l_2611 = (-1L);
        int32_t l_2612[10][9][2] = {{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}},{{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)},{0L,(-8L)}}};
        int32_t l_2738 = 0x05B02A8FL;
        int32_t l_2739 = (-1L);
        int8_t l_2741 = 1L;
        int32_t *l_2761 = (void*)0;
        uint64_t l_2764 = 5UL;
        int8_t l_2802 = (-5L);
        int32_t l_2837 = 0x41E34934L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2483[i] = 5L;
        for (p_2885->g_2049 = 0; (p_2885->g_2049 != 32); ++p_2885->g_2049)
        { /* block id: 1275 */
            int8_t l_2470[6][3][4] = {{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}},{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}},{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}},{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}},{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}},{{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)},{(-1L),4L,1L,(-7L)}}};
            uint32_t l_2498 = 1UL;
            int i, j, k;
            for (p_2885->g_925 = 0; (p_2885->g_925 <= 1); p_2885->g_925 = safe_add_func_int16_t_s_s(p_2885->g_925, 1))
            { /* block id: 1278 */
                return l_2470[5][1][0];
            }
            if (l_2471[4])
                continue;
            for (p_2885->g_674 = (-16); (p_2885->g_674 <= 44); p_2885->g_674++)
            { /* block id: 1284 */
                int32_t **l_2486[5][8];
                int32_t l_2496 = 9L;
                int32_t l_2497[2][9] = {{0L,(-1L),0x4FD36452L,0x07C461B4L,(-1L),0x07C461B4L,0x4FD36452L,(-1L),0L},{0L,(-1L),0x4FD36452L,0x07C461B4L,(-1L),0x07C461B4L,0x4FD36452L,(-1L),0L}};
                int32_t **l_2499 = &p_2885->g_444[1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_2486[i][j] = (void*)0;
                }
                (*p_2885->g_2350) |= (safe_mul_func_int8_t_s_s((l_2470[5][1][0] & (safe_rshift_func_uint16_t_u_s(((((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_int64_t_s(((((((safe_rshift_func_uint16_t_u_u(((*p_2885->g_1139) = ((l_2483[2] , ((((*p_2885->g_1537) == (p_2885->g_2487 = &p_2885->g_2198[3])) && (((((safe_mod_func_int64_t_s_s(((l_2496 = (safe_mul_func_int16_t_s_s(0x5485L, ((((safe_mul_func_uint16_t_u_u(l_2470[2][1][0], (safe_lshift_func_uint8_t_u_u((((void*)0 == &p_2885->g_619) != ((-5L) & (-1L))), 0)))) , &p_2885->g_2419) == &p_2885->g_2259) | (*p_2885->g_1479))))) || l_2483[1]), l_2497[1][7])) >= (-9L)) >= l_2498) , l_2470[5][1][0]) == (**p_2885->g_1571))) & (*p_2885->g_1353))) , l_9[2])), l_2471[4])) ^ l_2470[5][1][0]) | (-1L)) && l_2483[2]) == 0xB448L) & l_2483[2]))) | l_2497[1][7]) , 0x7E73L), l_2497[0][2])) <= (*p_2885->g_1989)) & 0xB6L) > (**p_2885->g_360)), 5))), (***p_2885->g_614)));
                (*l_2499) = &l_24[3];
            }
        }
        for (p_2885->g_2331 = 0; (p_2885->g_2331 <= 1); p_2885->g_2331 += 1)
        { /* block id: 1294 */
            int8_t *l_2501 = (void*)0;
            int8_t *l_2502 = (void*)0;
            int8_t *l_2503 = &p_2885->g_198;
            int32_t l_2518[6][4][9] = {{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}},{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}},{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}},{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}},{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}},{{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L},{1L,4L,1L,1L,4L,1L,1L,4L,1L}}};
            int16_t l_2520 = 0x3060L;
            int32_t l_2604[7] = {0x5DC5AF33L,0x097AAFD9L,0x5DC5AF33L,0x5DC5AF33L,0x097AAFD9L,0x5DC5AF33L,0x5DC5AF33L};
            int32_t l_2605 = 0x642DFC3AL;
            int32_t l_2646 = 0x7E238EFDL;
            uint8_t l_2661 = 1UL;
            uint8_t l_2716 = 0x5FL;
            uint16_t l_2734 = 2UL;
            int32_t *l_2760[9] = {&l_2518[1][2][4],&p_2885->g_117,&l_2518[1][2][4],&l_2518[1][2][4],&p_2885->g_117,&l_2518[1][2][4],&l_2518[1][2][4],&p_2885->g_117,&l_2518[1][2][4]};
            int32_t l_2762 = 0x622AD264L;
            uint64_t l_2763 = 0x66B23940474C84DFL;
            int16_t l_2788 = 2L;
            uint64_t ***l_2847[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2847[i] = &p_2885->g_2277;
            (1 + 1);
        }
        for (p_2885->g_184 = (-14); (p_2885->g_184 == 57); ++p_2885->g_184)
        { /* block id: 1439 */
            int32_t l_2871 = 0x1AA4D4A2L;
            uint64_t *l_2876 = &p_2885->g_2331;
            uint64_t l_2879 = 0UL;
            int8_t l_2880 = 1L;
            int64_t *l_2881 = (void*)0;
            int64_t *l_2882 = (void*)0;
            int64_t *l_2883 = &l_2483[1];
            (*p_2885->g_2350) |= ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u((~(*p_2885->g_1353)), 5)) <= (safe_mod_func_int32_t_s_s(0x5E93B6FCL, (*p_2885->g_1479)))), 3)), (((0x4D9EL > (0xD5CD6E12L > (((*l_2883) = (safe_sub_func_uint16_t_u_u((l_2871 | ((((((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((***p_2885->g_2133) = l_2871) <= ((((*l_2876)++) & l_2879) | l_2879)), (**p_2885->g_1988))), 2)) == 0x624F5D0DAACFD169L) > l_2871) , &p_2885->g_1988) == (void*)0) | l_2880) | 5L) < 7UL)), (*p_2885->g_1139)))) || p_2885->g_2884))) ^ l_2880) && l_2880))) | 0x7DB9L);
        }
    }
    return l_9[2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_12(int32_t  p_13, int16_t  p_14, uint64_t  p_15, struct S0 * p_2885)
{ /* block id: 14 */
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_67 p_2885->g_19 p_2885->g_22 p_2885->g_146 p_2885->g_8 p_2885->g_101 p_2885->g_154 p_2885->g_195 p_2885->g_179 p_2885->g_198 p_2885->g_117 p_2885->g_3 p_2885->g_245 p_2885->g_184 p_2885->g_246 p_2885->g_156 p_2885->g_360 p_2885->g_361 p_2885->g_327 p_2885->g_358 p_2885->g_619 p_2885->g_1005 p_2885->g_2133 p_2885->g_1557 p_2885->g_1484 p_2885->g_159 p_2885->g_2350 p_2885->g_1582
 * writes: p_2885->g_1582 p_2885->g_358 p_2885->g_67 p_2885->g_22 p_2885->g_101 p_2885->g_8 p_2885->g_117 p_2885->g_154 p_2885->g_159 p_2885->g_198 p_2885->g_214 p_2885->g_179 p_2885->g_444 p_2885->g_619 p_2885->g_2198 p_2885->g_184 p_2885->g_1484 p_2885->g_344
 */
int32_t  func_33(int16_t * p_34, int32_t * p_35, int32_t * p_36, uint64_t  p_37, uint32_t  p_38, struct S0 * p_2885)
{ /* block id: 1195 */
    int32_t *l_2352 = &p_2885->g_1484;
    int32_t **l_2353[3];
    int i;
    for (i = 0; i < 3; i++)
        l_2353[i] = (void*)0;
    p_35 = l_2352;
lbl_2369:
    p_36 = p_36;
    for (p_2885->g_1582 = 1; (p_2885->g_1582 <= 4); p_2885->g_1582 += 1)
    { /* block id: 1200 */
        int16_t *l_2354 = &p_2885->g_327;
        uint64_t l_2376 = 0x8DB9C105F1275505L;
        int32_t **l_2387 = (void*)0;
        int32_t ***l_2386 = &l_2387;
        int64_t *l_2395 = &p_2885->g_344;
        int i;
        for (p_2885->g_358 = 0; (p_2885->g_358 <= 4); p_2885->g_358 += 1)
        { /* block id: 1203 */
            int8_t l_2357 = 6L;
            int32_t *l_2366 = &p_2885->g_381;
            int i;
            p_2885->g_444[p_2885->g_358] = func_57(func_57(l_2366, p_2885), p_2885);
            for (p_2885->g_619 = 0; (p_2885->g_619 == 32); p_2885->g_619++)
            { /* block id: 1208 */
                int32_t *l_2370 = (void*)0;
                int32_t *l_2371 = &p_2885->g_2198[3];
                uint16_t *l_2377 = (void*)0;
                int32_t l_2388[6][6] = {{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L},{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L},{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L},{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L},{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L},{0x71434691L,0L,0L,0x71434691L,0x71434691L,0L}};
                uint64_t *l_2389 = &p_2885->g_184;
                uint32_t l_2390 = 1UL;
                int i, j;
                if (p_2885->g_619)
                    goto lbl_2369;
                (*p_35) = (((*l_2371) = (-2L)) , (safe_add_func_int64_t_s_s((~(safe_mod_func_int16_t_s_s((~(((l_2376 , l_2377) == (((l_2376 <= (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((1L ^ p_2885->g_358), (((((*l_2389) = ((0xCD2939B1L > (safe_div_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((+((((void*)0 == l_2386) == 0UL) | l_2388[5][0])) <= (*p_34)), p_37)) <= l_2376), p_2885->g_1005[0]))) , l_2388[4][2])) < p_38) & p_37) <= 0x52555C8C7D01B348L))), p_37))) < l_2390) , (void*)0)) != 0L)), (***p_2885->g_2133)))), p_38)));
            }
            for (p_2885->g_67 = (-8); (p_2885->g_67 == 28); ++p_2885->g_67)
            { /* block id: 1216 */
                return l_2376;
            }
        }
        (*p_2885->g_2350) = (*p_36);
        p_36 = (p_2885->g_444[p_2885->g_1582] = p_36);
        if ((safe_add_func_int64_t_s_s(p_38, ((*l_2395) = l_2376))))
        { /* block id: 1224 */
            (*p_35) = (*p_36);
        }
        else
        { /* block id: 1226 */
            int32_t *l_2396 = &p_2885->g_1484;
            p_36 = func_57(func_57(l_2396, p_2885), p_2885);
        }
    }
    return (*p_35);
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_22 p_2885->g_1988 p_2885->g_1989 p_2885->g_3 p_2885->g_616 p_2885->g_67 p_2885->g_19 p_2885->g_146 p_2885->g_8 p_2885->g_101 p_2885->g_154 p_2885->g_195 p_2885->g_179 p_2885->g_198 p_2885->g_117 p_2885->g_245 p_2885->g_184 p_2885->g_246 p_2885->g_156 p_2885->g_360 p_2885->g_361 p_2885->g_327 p_2885->g_619 p_2885->g_1139 p_2885->g_1479 p_2885->g_749 p_2885->g_614 p_2885->g_615 p_2885->g_1353 p_2885->g_332 p_2885->g_2133 p_2885->g_1557 p_2885->g_2259 p_2885->g_2276 p_2885->g_1570 p_2885->g_1571 p_2885->g_1112 p_2885->g_656 p_2885->g_1293 p_2885->g_712 p_2885->g_487 p_2885->g_581 p_2885->g_1460 p_2885->g_1005 p_2885->g_1260 p_2885->g_1484 p_2885->g_2331 p_2885->g_1007 p_2885->g_159 p_2885->g_344 p_2885->g_1582
 * writes: p_2885->g_67 p_2885->g_22 p_2885->g_101 p_2885->g_8 p_2885->g_117 p_2885->g_154 p_2885->g_159 p_2885->g_198 p_2885->g_214 p_2885->g_179 p_2885->g_444 p_2885->g_344 p_2885->g_619 p_2885->g_2276 p_2885->g_327 p_2885->g_1582 p_2885->g_656 p_2885->g_1293 p_2885->g_146 p_2885->g_184 p_2885->g_332 p_2885->g_712 p_2885->g_381 p_2885->g_674 p_2885->g_581 p_2885->g_1260 p_2885->g_1479 p_2885->g_441 p_2885->g_749
 */
int16_t  func_40(int16_t * p_41, int32_t  p_42, int32_t * p_43, struct S0 * p_2885)
{ /* block id: 25 */
    uint16_t l_48[10] = {0x3F04L,0UL,0UL,0UL,0x3F04L,0x3F04L,0UL,0UL,0UL,0x3F04L};
    int16_t *l_1352[2];
    uint64_t **l_1925[4][2][3] = {{{&p_2885->g_1556,&p_2885->g_1556,(void*)0},{&p_2885->g_1556,&p_2885->g_1556,(void*)0}},{{&p_2885->g_1556,&p_2885->g_1556,(void*)0},{&p_2885->g_1556,&p_2885->g_1556,(void*)0}},{{&p_2885->g_1556,&p_2885->g_1556,(void*)0},{&p_2885->g_1556,&p_2885->g_1556,(void*)0}},{{&p_2885->g_1556,&p_2885->g_1556,(void*)0},{&p_2885->g_1556,&p_2885->g_1556,(void*)0}}};
    uint8_t l_1930 = 0x61L;
    int32_t *l_1940 = &p_2885->g_441;
    int32_t **l_1939[4];
    int32_t l_1947[2][10][1] = {{{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L}},{{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L},{3L}}};
    int64_t l_2023 = 1L;
    uint16_t ***l_2028 = &p_2885->g_146[0];
    uint16_t ****l_2027 = &l_2028;
    uint64_t l_2065 = 0xC9332BA1A25AED92L;
    int32_t l_2066 = 6L;
    int8_t *l_2072 = &p_2885->g_154[1][1][6];
    int64_t l_2183[1];
    uint32_t *l_2193 = &p_2885->g_619;
    uint16_t l_2216 = 0x78ABL;
    uint16_t l_2252[1][9];
    int64_t *l_2281 = &p_2885->g_1005[0];
    int64_t **l_2280 = &l_2281;
    int16_t l_2283[5] = {0x74B9L,0x74B9L,0x74B9L,0x74B9L,0x74B9L};
    int64_t l_2305[8][9] = {{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL},{2L,(-1L),0x359873BCF1F55FE0L,5L,1L,(-1L),2L,(-1L),0x2E9BADD51F31FDDBL}};
    uint16_t *l_2343 = &p_2885->g_925;
    int8_t l_2344 = 0x2DL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1352[i] = &p_2885->g_327;
    for (i = 0; i < 4; i++)
        l_1939[i] = &l_1940;
    for (i = 0; i < 1; i++)
        l_2183[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_2252[i][j] = 0x53F6L;
    }
lbl_2285:
    for (p_42 = 0; (p_42 <= 9); p_42 += 1)
    { /* block id: 28 */
        int32_t **l_1351 = &p_2885->g_444[2];
        int8_t *l_1907 = &p_2885->g_154[1][3][0];
        int8_t *l_1908 = &p_2885->g_198;
        int8_t *l_1909[1][2];
        int32_t l_1910 = (-1L);
        uint8_t **l_1986 = &p_2885->g_1112[6];
        int32_t l_1995[5][6] = {{0x7E07C875L,0x2C4FCED3L,0x54CD2CF4L,0x2C4FCED3L,0x7E07C875L,0x7E07C875L},{0x7E07C875L,0x2C4FCED3L,0x54CD2CF4L,0x2C4FCED3L,0x7E07C875L,0x7E07C875L},{0x7E07C875L,0x2C4FCED3L,0x54CD2CF4L,0x2C4FCED3L,0x7E07C875L,0x7E07C875L},{0x7E07C875L,0x2C4FCED3L,0x54CD2CF4L,0x2C4FCED3L,0x7E07C875L,0x7E07C875L},{0x7E07C875L,0x2C4FCED3L,0x54CD2CF4L,0x2C4FCED3L,0x7E07C875L,0x7E07C875L}};
        int64_t l_2022 = 0x37F5D82CDD4D0622L;
        uint16_t ****l_2029 = &l_2028;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1909[i][j] = (void*)0;
        }
        (1 + 1);
    }
    if ((!0x71DCDCBBL))
    { /* block id: 1060 */
        return (*p_41);
    }
    else
    { /* block id: 1062 */
        int16_t l_2062 = 0x4E38L;
        uint64_t *l_2063 = &p_2885->g_1260[3];
        int32_t **l_2067 = &p_2885->g_444[2];
        int16_t l_2073 = 0L;
        int32_t l_2147 = 5L;
        int32_t l_2150 = (-1L);
        int64_t l_2155 = 1L;
        int32_t l_2157 = 0L;
        int32_t l_2159 = 1L;
        int32_t l_2161[3];
        uint64_t l_2203[1];
        int16_t l_2237 = (-8L);
        int64_t **l_2282 = &l_2281;
        uint8_t l_2284 = 252UL;
        int32_t *l_2349 = &l_2157;
        int i;
        for (i = 0; i < 3; i++)
            l_2161[i] = 0x610159FCL;
        for (i = 0; i < 1; i++)
            l_2203[i] = 3UL;
        l_2066 ^= ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(8UL)) != ((safe_add_func_int64_t_s_s((((((l_1947[1][8][0] , (~(((((+((0x64L && ((((+(safe_sub_func_int64_t_s_s(l_1947[1][8][0], l_2062))) , l_2063) == (*p_2885->g_1988)) && ((safe_unary_minus_func_uint64_t_u(p_42)) & 0x68L))) == p_42)) >= l_2023) <= (*p_43)) , p_42) , 0x9885L))) < l_2065) > (*p_2885->g_616)) , 0x183A9A7DBD609039L) , 0x777B4A3B70C50529L), 0xFE9BFAC6FD5171A1L)) , (*p_41))), 4L)) ^ 255UL);
        (*l_2067) = func_57(&l_1947[0][7][0], p_2885);
        if (((safe_div_func_int32_t_s_s(((l_1947[1][8][0] = ((safe_mul_func_uint8_t_u_u((l_2072 == &p_2885->g_581), l_2073)) , (((void*)0 == &p_2885->g_1139) || l_1930))) | (p_42 >= ((void*)0 != l_2063))), (*p_43))) , l_2023))
        { /* block id: 1066 */
            uint8_t l_2098[1][4];
            uint16_t ****l_2126 = &l_2028;
            int16_t ***l_2131 = &p_2885->g_360;
            int32_t l_2154 = 1L;
            int32_t l_2158 = 1L;
            int32_t l_2160 = 2L;
            int32_t l_2163 = 0L;
            int32_t l_2165[10] = {0x506C6AABL,0x6468F960L,1L,0x6468F960L,0x506C6AABL,0x506C6AABL,0x6468F960L,1L,0x6468F960L,0x506C6AABL};
            int32_t l_2167 = 4L;
            int8_t l_2168 = (-7L);
            uint64_t l_2169 = 0x0D1A0A2916B2E848L;
            uint32_t l_2174 = 4294967295UL;
            int32_t *l_2199 = &p_2885->g_8;
            int32_t *l_2200 = &p_2885->g_1460;
            int32_t *l_2201 = &l_2165[9];
            int32_t *l_2202[6] = {&l_2165[9],&l_2147,&l_2165[9],&l_2165[9],&l_2147,&l_2165[9]};
            int8_t l_2251 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_2098[i][j] = 0x20L;
            }
            for (p_2885->g_159 = 0; (p_2885->g_159 <= 1); p_2885->g_159 += 1)
            { /* block id: 1069 */
                uint64_t l_2100 = 0x310CBDEBE93CE301L;
                int32_t l_2102 = (-9L);
                int32_t l_2146 = 0L;
                int32_t l_2148 = (-8L);
                int32_t l_2149 = 0x6B2BAEA7L;
                int32_t l_2151 = 0L;
                int32_t l_2152 = 0x4E78FCAFL;
                int32_t l_2153 = (-1L);
                int32_t l_2156 = 0x100867E8L;
                int32_t l_2162 = 7L;
                int32_t l_2164[9][7] = {{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL},{7L,7L,0x6F7BA14FL,0x73E2F334L,0L,0x73E2F334L,0x6F7BA14FL}};
                int32_t l_2178[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i, j;
                (1 + 1);
            }
            ++l_2203[0];
            for (p_2885->g_344 = 1; (p_2885->g_344 >= 0); p_2885->g_344 -= 1)
            { /* block id: 1122 */
                int32_t l_2214 = 0L;
                (*l_2067) = (void*)0;
                if ((*p_43))
                    break;
                (*l_2067) = p_43;
                if ((*p_43))
                    continue;
                for (p_2885->g_619 = 0; (p_2885->g_619 <= 1); p_2885->g_619 += 1)
                { /* block id: 1129 */
                    uint32_t l_2215 = 0x1C51A607L;
                    int32_t l_2240 = 0x3A0327D7L;
                    (*l_2201) |= (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(8L, (safe_sub_func_int16_t_s_s((p_42 > (*p_2885->g_1139)), ((((l_2216 = (safe_mul_func_uint16_t_u_u(((0x3DL < ((l_1947[1][0][0] = (((*p_2885->g_1479) && (((*l_2199) != (***p_2885->g_614)) , l_2214)) & (*p_41))) > (-8L))) && (*p_2885->g_1479)), l_2215))) | (*p_2885->g_361)) < p_42) < p_42))))), (*p_2885->g_1479)));
                    (*l_2199) |= (((safe_mod_func_int16_t_s_s(((((*p_2885->g_1139) = (((safe_unary_minus_func_uint32_t_u((*p_2885->g_1479))) == (safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s((-6L), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((0L > ((void*)0 == l_2199)), (safe_div_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(l_2237)), (safe_mul_func_uint16_t_u_u((l_2240 &= 0x8091L), (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((**p_2885->g_615)--), ((((((3L != (safe_add_func_int32_t_s_s(((*l_2201) = ((p_2885->g_619 < 0xECC7A56D2BBCD76EL) == 1L)), (*p_43)))) < l_2214) , 0xD2L) ^ p_42) & 0L) , l_2215))), (*p_41))))))) , (*p_2885->g_1479)), (*p_43))))), (**p_2885->g_360))))), (*p_2885->g_1353))), l_2214)), p_42))) | p_42)) & l_2214) <= l_2251), l_2215)) , 1UL) , 1L);
                    for (l_2174 = 0; (l_2174 <= 0); l_2174 += 1)
                    { /* block id: 1140 */
                        if (l_2252[0][1])
                            break;
                        return (***p_2885->g_2133);
                    }
                }
            }
        }
        else
        { /* block id: 1146 */
            int64_t *l_2261 = &p_2885->g_1005[0];
            int64_t **l_2260[4][1][9] = {{{&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261}},{{&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261}},{{&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261}},{{&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261,&l_2261}}};
            int32_t l_2262 = 0L;
            uint16_t *****l_2269 = &l_2027;
            uint64_t ****l_2278 = (void*)0;
            uint64_t ****l_2279 = &p_2885->g_2276[1];
            int64_t l_2325[5][10][4] = {{{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L}},{{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L}},{{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L}},{{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L}},{{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L},{1L,0x4DA945E862B1B688L,0x4A5DAF3C9094D114L,0x26075F629F798D34L}}};
            int i, j, k;
            if (((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((*p_2885->g_1353), (safe_sub_func_uint8_t_u_u((((l_2260[0][0][3] = p_2885->g_2259) == &l_2261) , (((l_2262 , (((**p_2885->g_360) ^= (((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*l_2072) &= ((safe_mul_func_uint8_t_u_u((((((void*)0 != l_2269) , p_2885->g_2259) == (((safe_rshift_func_uint8_t_u_u(l_2183[0], ((safe_div_func_uint16_t_u_u(((*p_2885->g_1139)++), ((((*l_2279) = p_2885->g_2276[4]) != &p_2885->g_1988) , p_42))) | l_2262))) , (-4L)) , l_2280)) ^ 0x04L), l_2262)) & l_2262)), (***p_2885->g_1570))), l_2262)) >= 0UL) <= 0xF722L)) , p_2885->g_2259)) == l_2282) | l_2283[2])), 0x89L)))) , l_2284), p_42)) < 0x0999L))
            { /* block id: 1152 */
                int32_t l_2312 = 0x2DF5A9B6L;
                int32_t l_2313 = 0x21DC29A6L;
                int32_t l_2315 = 0x6993646EL;
                int32_t l_2316[3];
                int64_t *l_2323 = (void*)0;
                int64_t *l_2324 = &l_2305[3][6];
                int i;
                for (i = 0; i < 3; i++)
                    l_2316[i] = 0x57CFA1CFL;
lbl_2322:
                for (p_2885->g_1582 = 0; (p_2885->g_1582 <= 0); p_2885->g_1582 += 1)
                { /* block id: 1155 */
                    int64_t l_2287 = 0x429A07045D8BC06AL;
                    int32_t l_2314[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2314[i] = 0x756EE0D4L;
                    for (p_2885->g_656 = 0; (p_2885->g_656 <= 4); p_2885->g_656 += 1)
                    { /* block id: 1158 */
                        int32_t *l_2286 = &p_2885->g_381;
                        uint32_t *l_2300 = &p_2885->g_619;
                        int32_t *l_2306 = &l_2161[1];
                        int i;
                        if (p_2885->g_67)
                            goto lbl_2285;
                        l_2286 = ((*l_2067) = func_57(p_43, p_2885));
                        (*l_2306) |= (l_2287 < ((((((safe_mod_func_uint16_t_u_u(p_42, ((safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((((((safe_div_func_int64_t_s_s(l_2183[0], 18446744073709551614UL)) < (safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_2300 != &p_2885->g_619), p_42)) | (((safe_rshift_func_uint16_t_u_s((l_1947[1][3][0] = (safe_add_func_uint16_t_u_u((*p_2885->g_1139), (**p_2885->g_360)))), (*p_41))) != l_2305[3][6]) || (-1L))), p_42))) , &p_2885->g_1479) != (void*)0) <= p_42), (*p_43))) < 0x4CA008CBL), (*l_2286))) | (*p_41)))) > 0xF62EC4FF8A1314A9L) | p_42) < l_2287) > (*l_2286)) || (**p_2885->g_615)));
                        if ((*l_2286))
                            continue;
                    }
                    for (p_2885->g_1293 = 0; (p_2885->g_1293 <= 0); p_2885->g_1293 += 1)
                    { /* block id: 1168 */
                        int32_t *l_2307 = &p_2885->g_159;
                        int32_t *l_2308 = &l_2262;
                        int32_t *l_2309 = &l_2150;
                        int32_t *l_2310 = (void*)0;
                        int32_t *l_2311[10] = {&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0],&l_1947[1][0][0]};
                        uint32_t l_2317 = 3UL;
                        int i;
                        --l_2317;
                        if ((*p_43))
                            break;
                        (*l_2308) = (safe_lshift_func_int16_t_s_s((*p_41), l_2316[2]));
                        if (p_2885->g_22)
                            goto lbl_2322;
                        (*l_2308) = (-1L);
                    }
                    if (p_2885->g_656)
                        goto lbl_2322;
                    if (l_1930)
                        break;
                }
                (*l_2067) = func_52(&l_1947[1][8][0], (*p_2885->g_1557), (((*p_2885->g_1139) = (((&p_2885->g_444[2] != &p_2885->g_444[2]) , &p_2885->g_1139) == (((*l_2324) = 9L) , ((*l_2028) = (***l_2269))))) != (0L >= (0x3235L > 0x65D7L))), l_2325[1][3][2], p_2885);
            }
            else
            { /* block id: 1182 */
                int64_t l_2330[2];
                int32_t *l_2332[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_2330[i] = 8L;
                for (i = 0; i < 1; i++)
                    l_2332[i] = &l_2150;
                l_2330[0] = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((0x6516F625L & ((void*)0 != &p_42)), 4)), 9UL));
                l_2262 = p_2885->g_2331;
                l_2262 = (l_2157 = (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((&p_2885->g_1005[3] == (*l_2280)) , l_2325[0][1][1]), ((((*p_2885->g_1479)++) || 4294967295UL) == ((252UL <= p_2885->g_1007) , ((((0x34716011657BC1B8L == (l_2343 == p_41)) || (**p_2885->g_1571)) && l_2283[2]) , p_2885->g_19))))), (*p_2885->g_361))), (***p_2885->g_1570))), (*p_41))) | (*p_2885->g_1139)) < l_2344));
                l_2150 = (safe_rshift_func_int16_t_s_s((l_2262 , ((*p_2885->g_1353) &= (((safe_mul_func_uint16_t_u_u(0xB050L, (***p_2885->g_2133))) & ((*p_43) ^ (*p_2885->g_1479))) | 0x07090B95L))), 4));
            }
        }
        (*l_2349) = l_2305[7][7];
    }
    return (*p_41);
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_1353 p_2885->g_327 p_2885->g_749 p_2885->g_184 p_2885->g_101 p_2885->g_1260 p_2885->g_674 p_2885->g_925 p_2885->g_159 p_2885->g_712 p_2885->g_154 p_2885->g_3 p_2885->g_117 p_2885->g_615 p_2885->g_616 p_2885->g_67 p_2885->g_1484 p_2885->g_1537 p_2885->g_346 p_2885->g_441 p_2885->g_614 p_2885->g_1557 p_2885->g_655 p_2885->g_22 p_2885->g_381 p_2885->g_344 p_2885->g_179 p_2885->g_1582 p_2885->g_361 p_2885->g_1139 p_2885->g_1571 p_2885->g_1112 p_2885->g_19 p_2885->g_656 p_2885->g_1460 p_2885->g_156 p_2885->g_146 p_2885->g_8 p_2885->g_195 p_2885->g_198 p_2885->g_245 p_2885->g_246 p_2885->g_360
 * writes: p_2885->g_344 p_2885->g_179 p_2885->g_346 p_2885->g_1479 p_2885->g_749 p_2885->g_101 p_2885->g_674 p_2885->g_156 p_2885->g_712 p_2885->g_117 p_2885->g_1484 p_2885->g_1530 p_2885->g_214 p_2885->g_1546 p_2885->g_67 p_2885->g_1556 p_2885->g_327 p_2885->g_381 p_2885->g_444 p_2885->g_1570 p_2885->g_245 p_2885->g_1582 p_2885->g_1460 p_2885->g_154 p_2885->g_198 p_2885->g_925 p_2885->g_22 p_2885->g_8 p_2885->g_159
 */
int8_t  func_49(int32_t * p_50, uint64_t  p_51, struct S0 * p_2885)
{ /* block id: 747 */
    int64_t l_1510[6][5] = {{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L},{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L},{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L},{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L},{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L},{0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L,0x50C101DA7001ABC6L}};
    int32_t l_1547 = 0x518F0C4AL;
    int16_t **l_1558 = (void*)0;
    int64_t l_1560[10] = {0L,0x446A0F0F3D8AD0A4L,0L,0L,0x446A0F0F3D8AD0A4L,0L,0L,0x446A0F0F3D8AD0A4L,0L,0L};
    uint32_t l_1562 = 4294967295UL;
    int32_t l_1585 = 3L;
    int32_t l_1586 = 0x1F600EC9L;
    uint32_t l_1631 = 0xECC13596L;
    uint64_t *l_1648 = &p_2885->g_1260[3];
    int32_t l_1659 = 0x3DB6669FL;
    int32_t *l_1713 = (void*)0;
    int32_t **l_1712 = &l_1713;
    int8_t l_1732[9][7][2] = {{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}},{{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL},{0x75L,0x3FL}}};
    int32_t l_1735 = 0x6E3F448BL;
    int32_t l_1738 = 0x56C08CBDL;
    int32_t l_1739 = 1L;
    int32_t l_1743[8][1] = {{0x48BFB183L},{0x48BFB183L},{0x48BFB183L},{0x48BFB183L},{0x48BFB183L},{0x48BFB183L},{0x48BFB183L},{0x48BFB183L}};
    uint32_t l_1746 = 4294967295UL;
    uint64_t l_1768[10];
    int32_t **l_1817 = &p_2885->g_444[2];
    uint32_t l_1826[1][10] = {{4294967295UL,4294967286UL,4294967295UL,4294967295UL,4294967286UL,4294967295UL,4294967295UL,4294967286UL,4294967295UL,4294967295UL}};
    int32_t l_1886[1][10][7] = {{{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)},{(-1L),(-8L),0L,(-8L),(-1L),(-1L),(-8L)}}};
    uint32_t **l_1899 = (void*)0;
    uint16_t l_1902 = 0xD36AL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1768[i] = 1UL;
lbl_1651:
    for (p_2885->g_344 = 0; (p_2885->g_344 >= 0); p_2885->g_344 -= 1)
    { /* block id: 750 */
        int32_t l_1532 = (-1L);
        uint64_t *l_1555 = (void*)0;
        int32_t l_1587[7][5] = {{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L},{0x1762B611L,0x1762B611L,0x285BB4EFL,9L,0x14295956L}};
        uint32_t l_1588 = 4294967288UL;
        int8_t l_1632 = 0x15L;
        uint16_t l_1647 = 1UL;
        int i, j;
        for (p_2885->g_179 = 1; (p_2885->g_179 <= 4); p_2885->g_179 += 1)
        { /* block id: 753 */
            uint32_t *l_1529 = &p_2885->g_1530;
            uint32_t **l_1528 = &l_1529;
            int32_t l_1534 = 0x64EEE053L;
            int32_t *l_1540 = &p_2885->g_441;
            int32_t **l_1539 = &l_1540;
            int32_t **l_1561 = &p_2885->g_478;
            int32_t *l_1567[3][8] = {{&p_2885->g_381,&p_2885->g_3,(void*)0,(void*)0,(void*)0,&p_2885->g_3,&p_2885->g_381,&l_1532},{&p_2885->g_381,&p_2885->g_3,(void*)0,(void*)0,(void*)0,&p_2885->g_3,&p_2885->g_381,&l_1532},{&p_2885->g_381,&p_2885->g_3,(void*)0,(void*)0,(void*)0,&p_2885->g_3,&p_2885->g_381,&l_1532}};
            int i, j;
            if (p_51)
                break;
            for (p_2885->g_346 = 0; (p_2885->g_346 <= 0); p_2885->g_346 += 1)
            { /* block id: 757 */
                uint32_t **l_1497 = (void*)0;
                uint32_t **l_1498 = &p_2885->g_1479;
                uint32_t *l_1503 = &p_2885->g_749;
                int32_t l_1523[4] = {(-1L),(-1L),(-1L),(-1L)};
                uint16_t *l_1524 = &p_2885->g_101;
                uint64_t *l_1527 = &p_2885->g_674;
                uint64_t l_1531 = 18446744073709551615UL;
                uint16_t *l_1533 = &p_2885->g_712;
                int32_t *l_1535 = &p_2885->g_117;
                int64_t **l_1545[2][1];
                uint64_t **l_1554 = &l_1527;
                int16_t **l_1559 = &p_2885->g_361;
                int32_t *l_1563 = &p_2885->g_381;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1545[i][j] = &p_2885->g_214;
                }
                (*l_1535) ^= ((safe_mod_func_int32_t_s_s((l_1534 = (safe_mul_func_int16_t_s_s((((((*l_1498) = &p_2885->g_749) == ((!(*p_2885->g_1353)) , &p_2885->g_749)) == ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(9UL, ((--(*l_1503)) & (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(((*l_1533) |= (l_1510[1][4] <= (safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((0x7CL < ((((p_2885->g_156 = (((safe_rshift_func_int8_t_s_u(p_2885->g_184, 4)) & (((safe_rshift_func_int16_t_s_s(((--(*l_1524)) ^ (l_1531 |= (l_1523[3] & ((((*l_1527) ^= (p_2885->g_1260[5] | 0UL)) , l_1528) == (void*)0)))), l_1510[2][1])) ^ p_2885->g_925) ^ 0x3D74F714L)) , p_51)) < p_2885->g_159) <= 0L) || 0x10B1L)) && l_1532), p_51)), p_51)), p_51)), p_51)))), p_51)) <= (-9L)), p_51))))) , (-1L)), p_51)) || l_1510[1][4])) & p_2885->g_154[1][2][7]), p_51))), p_2885->g_3)) < l_1510[1][4]);
                for (p_2885->g_101 = 0; (p_2885->g_101 <= 1); p_2885->g_101 += 1)
                { /* block id: 769 */
                    int32_t *l_1536 = &p_2885->g_1484;
                    (*l_1536) |= ((*l_1535) &= (p_51 > (**p_2885->g_615)));
                    for (p_2885->g_1530 = 0; (p_2885->g_1530 <= 4); p_2885->g_1530 += 1)
                    { /* block id: 774 */
                        int i;
                        l_1523[(p_2885->g_346 + 3)] |= (p_2885->g_1537 != l_1539);
                    }
                    return p_2885->g_441;
                }
                if (l_1532)
                    continue;
                if (((*l_1563) |= ((safe_mod_func_int8_t_s_s((((0x5360L >= ((((((l_1510[1][1] != (safe_add_func_int32_t_s_s(((l_1547 = (!(&p_2885->g_156 == (p_2885->g_1546[0] = (p_2885->g_214 = (void*)0))))) > ((*p_2885->g_1353) = (&p_2885->g_478 != (((safe_rshift_func_uint8_t_u_u(((***p_2885->g_614) = l_1532), ((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((*l_1554) = &p_2885->g_184) != (p_2885->g_1556 = l_1555)), ((l_1558 = (((-4L) == 0x01B6L) , p_2885->g_1557)) == l_1559))), l_1560[6])) , 255UL))) != 0x10628C3B30374FD4L) , l_1561)))), l_1532))) , p_51) == l_1560[9]) & p_2885->g_655) < 0x434BEE9EL) && (*l_1535))) , l_1532) | l_1562), p_2885->g_22)) & 0x20L)))
                { /* block id: 789 */
                    int i, j, k;
                    p_2885->g_444[(p_2885->g_344 + 1)] = &l_1534;
                    (*l_1563) |= (&p_2885->g_619 != &l_1562);
                    p_50 = p_50;
                    (*l_1563) |= 0x0734D93AL;
                }
                else
                { /* block id: 794 */
                    uint16_t l_1564[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1564[i] = 0xBFB9L;
                    l_1564[0]++;
                }
            }
            l_1532 = (p_51 < (l_1547 = 0x65L));
            for (l_1534 = 4; (l_1534 >= 1); l_1534 -= 1)
            { /* block id: 802 */
                int32_t ***l_1574 = &p_2885->g_245[6][0][7];
                uint32_t l_1577[5];
                int32_t l_1580 = 0L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1577[i] = 0xE4FA9732L;
                p_2885->g_444[p_2885->g_179] = p_50;
                if (p_2885->g_22)
                    goto lbl_1651;
                if ((((safe_mul_func_uint16_t_u_u((l_1532 != (((p_2885->g_1570 = (void*)0) != &p_2885->g_1571) > (((safe_add_func_uint8_t_u_u(p_51, 0x4CL)) , &p_50) == ((*l_1574) = &p_50)))), (safe_div_func_uint32_t_u_u(((void*)0 == p_50), l_1577[2])))) >= p_51) , l_1547))
                { /* block id: 806 */
                    int64_t l_1578[10][5] = {{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L},{1L,0x1FCA348FAB70EA63L,1L,1L,0x1FCA348FAB70EA63L}};
                    int32_t l_1579 = 0L;
                    int32_t l_1581 = 0x1C08EA65L;
                    int i, j;
                    --p_2885->g_1582;
                    for (p_2885->g_101 = 0; (p_2885->g_101 <= 0); p_2885->g_101 += 1)
                    { /* block id: 810 */
                        uint8_t l_1591 = 0x2DL;
                        ++l_1588;
                        if (l_1591)
                            break;
                    }
                    for (l_1547 = 0; (l_1547 >= 0); l_1547 -= 1)
                    { /* block id: 816 */
                        uint32_t l_1592 = 4294967295UL;
                        int64_t *l_1604 = &l_1560[1];
                        int i;
                        ++l_1592;
                        l_1585 ^= (((safe_unary_minus_func_int64_t_s(p_51)) < (((0x80CCL ^ (*p_2885->g_361)) > (l_1581 = (safe_add_func_uint16_t_u_u((*p_2885->g_1139), 0x054DL)))) , l_1510[1][4])) | ((*l_1604) = ((((l_1587[2][4] | (((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, 6)), (safe_mul_func_uint8_t_u_u((0UL || p_51), (**p_2885->g_1571))))) , p_2885->g_1460) || 0x58L)) == 0x6C70L) >= (*p_2885->g_1139)) | 0x6AA5L)));
                        return p_2885->g_156;
                    }
                }
                else
                { /* block id: 823 */
                    int32_t l_1605 = 0x02DC7BBAL;
                    uint8_t l_1633 = 0UL;
                    l_1605 |= p_51;
                    for (p_2885->g_1460 = 0; (p_2885->g_1460 <= 0); p_2885->g_1460 += 1)
                    { /* block id: 827 */
                        int32_t **l_1606[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1606[i] = (void*)0;
                        l_1567[2][3] = &l_1534;
                    }
                    l_1586 &= (l_1605 | (safe_unary_minus_func_int64_t_s((safe_div_func_uint64_t_u_u(7UL, p_51)))));
                    for (l_1588 = 0; (l_1588 <= 0); l_1588 += 1)
                    { /* block id: 833 */
                        int8_t *l_1624 = &p_2885->g_198;
                        uint16_t *l_1629 = (void*)0;
                        uint16_t *l_1630 = &p_2885->g_925;
                        uint64_t *l_1638 = &p_2885->g_674;
                        int64_t *l_1643[6][9] = {{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0},{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0},{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0},{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0},{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0},{(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[1][4],(void*)0,&l_1510[2][4],(void*)0}};
                        int32_t l_1644 = 0x63159DDDL;
                        int32_t l_1649 = 1L;
                        int32_t l_1650 = 0x5DC9E7E7L;
                        int i, j;
                        if (p_51)
                            break;
                        l_1632 = ((safe_rshift_func_uint8_t_u_s(1UL, 7)) , (((1L & ((*l_1529) = (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((((((0x11L >= (**p_2885->g_1571)) > (safe_mul_func_uint8_t_u_u(l_1587[2][4], (((safe_add_func_int64_t_s_s((-5L), (safe_mul_func_int8_t_s_s((p_2885->g_154[1][3][0] ^= p_51), ((*l_1624) = 0x7DL))))) , (((!(safe_sub_func_int8_t_s_s((!((((*l_1630) = ((safe_div_func_int64_t_s_s(l_1588, p_51)) | l_1510[2][3])) ^ l_1631) && p_51)), p_51))) && 1UL) > l_1562)) & l_1605)))) < p_51) <= 0x7BL) , (void*)0) == (void*)0), (-4L))) || p_51), l_1587[0][4])), 0x36A66F96176C4333L)))) > 0x4C8CL) || 3UL));
                        ++l_1633;
                        l_1650 |= (((*l_1624) = p_51) & ((safe_add_func_int32_t_s_s(((-8L) | (l_1638 != (((((((safe_rshift_func_uint8_t_u_u(0UL, ((*p_2885->g_616) = ((safe_sub_func_uint16_t_u_u((p_51 && (~((l_1644 &= p_51) < (-1L)))), (((safe_rshift_func_uint8_t_u_s(0x60L, 5)) , (p_51 == p_51)) , (*p_2885->g_1139)))) ^ p_51)))) && l_1605) , 0xA8L) >= 0xDEL) || 255UL) <= l_1647) , l_1648))), l_1649)) , p_51));
                    }
                }
                l_1567[2][3] = (p_50 = p_50);
            }
        }
    }
    for (p_2885->g_344 = 3; (p_2885->g_344 >= 0); p_2885->g_344 -= 1)
    { /* block id: 855 */
        return l_1547;
    }
    for (p_2885->g_381 = (-24); (p_2885->g_381 > 7); ++p_2885->g_381)
    { /* block id: 860 */
        int16_t l_1655 = 0L;
        int32_t l_1656 = 0x55A99B46L;
        int32_t l_1657 = 6L;
        int32_t l_1658 = 0x31C9F493L;
        int64_t l_1733 = 0x1CB0B474FDE6109BL;
        int32_t l_1736 = 0x7E56A718L;
        int32_t l_1745 = 0L;
        uint32_t l_1762 = 1UL;
        int32_t *l_1785 = &l_1659;
        int32_t *l_1786 = (void*)0;
        int32_t *l_1787[1][9][9] = {{{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738},{(void*)0,&l_1547,&l_1739,&l_1547,(void*)0,&p_2885->g_381,(void*)0,&l_1656,&l_1738}}};
        int16_t l_1862 = 1L;
        uint64_t **l_1869 = &p_2885->g_1556;
        uint32_t **l_1875[1][4] = {{&p_2885->g_1479,&p_2885->g_1479,&p_2885->g_1479,&p_2885->g_1479}};
        int i, j, k;
        (1 + 1);
    }
    for (p_2885->g_674 = 0; (p_2885->g_674 <= 52); p_2885->g_674++)
    { /* block id: 993 */
        p_50 = func_57(p_50, p_2885);
    }
    return p_2885->g_381;
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_184 p_2885->g_156 p_2885->g_22 p_2885->g_327 p_2885->g_8 p_2885->g_344 p_2885->g_67 p_2885->g_19 p_2885->g_146 p_2885->g_101 p_2885->g_154 p_2885->g_195 p_2885->g_179 p_2885->g_198 p_2885->g_117 p_2885->g_3 p_2885->g_245 p_2885->g_246 p_2885->g_360 p_2885->g_361 p_2885->g_332 p_2885->g_619 p_2885->g_712 p_2885->g_487 p_2885->g_1139 p_2885->g_581 p_2885->g_749 p_2885->g_616 p_2885->g_615 p_2885->g_1460 p_2885->g_1005 p_2885->g_1260 p_2885->g_1484
 * writes: p_2885->g_184 p_2885->g_8 p_2885->g_344 p_2885->g_67 p_2885->g_22 p_2885->g_101 p_2885->g_117 p_2885->g_154 p_2885->g_159 p_2885->g_198 p_2885->g_214 p_2885->g_179 p_2885->g_332 p_2885->g_712 p_2885->g_619 p_2885->g_327 p_2885->g_381 p_2885->g_1293 p_2885->g_674 p_2885->g_581 p_2885->g_1260 p_2885->g_1479 p_2885->g_441 p_2885->g_444
 */
int32_t * func_52(int32_t * p_53, int16_t * p_54, int16_t  p_55, uint32_t  p_56, struct S0 * p_2885)
{ /* block id: 637 */
    int32_t *l_1355 = (void*)0;
    int32_t l_1370 = 0x27E2CCE2L;
    uint64_t *l_1421[1][1][4];
    uint8_t *l_1453[3];
    int32_t **l_1467 = &p_2885->g_478;
    int32_t l_1473 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_1421[i][j][k] = &p_2885->g_691[6][4][0];
        }
    }
    for (i = 0; i < 3; i++)
        l_1453[i] = &p_2885->g_19;
    for (p_2885->g_184 = 1; (p_2885->g_184 <= 8); p_2885->g_184 += 1)
    { /* block id: 640 */
        (*p_53) &= ((safe_unary_minus_func_uint8_t_u(1UL)) ^ (((0x536E979BL != (+p_2885->g_156)) <= (p_2885->g_22 < 0x0EL)) || (*p_54)));
        return p_53;
    }
    if ((*p_53))
    { /* block id: 644 */
        for (p_2885->g_344 = 4; (p_2885->g_344 >= 0); p_2885->g_344 -= 1)
        { /* block id: 647 */
            return p_53;
        }
        l_1355 = func_57(p_53, p_2885);
    }
    else
    { /* block id: 651 */
        uint32_t l_1357 = 0x44E2F3A6L;
        int32_t l_1369 = 1L;
        int32_t l_1371 = 1L;
        int8_t l_1408[4][4][7] = {{{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L}},{{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L}},{{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L}},{{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L},{3L,0x19L,0x56L,0L,0x4FL,3L,0L}}};
        uint16_t **l_1413 = (void*)0;
        uint64_t *l_1468 = &p_2885->g_1260[4];
        int i, j, k;
        (*p_53) = 0x66C59134L;
        for (p_2885->g_332 = 0; (p_2885->g_332 <= 1); p_2885->g_332 += 1)
        { /* block id: 655 */
            int64_t l_1405[5] = {0x11B2BFBFB6384FDFL,0x11B2BFBFB6384FDFL,0x11B2BFBFB6384FDFL,0x11B2BFBFB6384FDFL,0x11B2BFBFB6384FDFL};
            uint16_t **l_1419 = &p_2885->g_1139;
            int i;
            for (p_2885->g_712 = 0; (p_2885->g_712 <= 4); p_2885->g_712 += 1)
            { /* block id: 658 */
                int8_t *l_1404 = &p_2885->g_581;
                int8_t **l_1403 = &l_1404;
                int i, j;
                if ((*p_53))
                    break;
                for (p_2885->g_619 = 0; (p_2885->g_619 <= 4); p_2885->g_619 += 1)
                { /* block id: 662 */
                    int32_t l_1356 = 0x799786FDL;
                    int32_t *l_1360 = (void*)0;
                    int32_t *l_1361 = &p_2885->g_8;
                    int32_t *l_1362 = &p_2885->g_159;
                    int32_t *l_1363 = (void*)0;
                    int32_t *l_1364 = (void*)0;
                    int32_t *l_1365 = &p_2885->g_159;
                    int32_t *l_1366 = &p_2885->g_381;
                    int32_t *l_1367 = (void*)0;
                    int32_t *l_1368[2][3][10] = {{{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381},{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381},{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381}},{{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381},{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381},{&p_2885->g_381,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_117,&p_2885->g_117,&p_2885->g_159,&p_2885->g_381,&p_2885->g_381}}};
                    uint32_t l_1372 = 0UL;
                    uint32_t *l_1389 = (void*)0;
                    uint32_t *l_1390 = &l_1357;
                    int i, j, k;
                    --l_1357;
                    l_1372--;
                    (*l_1366) = (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*p_2885->g_361) = (-1L)), (safe_rshift_func_int8_t_s_u((((p_2885->g_154[p_2885->g_619][p_2885->g_712][(p_2885->g_619 + 3)] != ((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(p_55, (safe_add_func_uint32_t_u_u((++(*l_1390)), (safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s(0x1B9DL, (p_56 != (safe_rshift_func_int8_t_s_u(l_1371, p_55))))) | (((safe_mod_func_uint8_t_u_u((((((l_1403 != (((0x047BCA5BL ^ 1L) == 0L) , p_2885->g_487)) != l_1371) | l_1371) && (*p_2885->g_1139)) , p_55), p_55)) , l_1405[1]) >= p_55)), (-1L))))))) , l_1357), 0x7635L)) ^ p_2885->g_581)) | l_1369) >= 0x7C76L), 4)))), l_1405[1])), 0x09B8L));
                }
            }
            for (p_2885->g_1293 = 1; (p_2885->g_1293 <= 4); p_2885->g_1293 += 1)
            { /* block id: 672 */
                int8_t l_1416 = 0x0AL;
                int8_t *l_1420 = &l_1408[0][2][3];
                int16_t *l_1422 = &p_2885->g_22;
                int64_t *l_1423 = &l_1405[3];
                int8_t *l_1424 = &p_2885->g_154[1][0][1];
                (*p_53) = ((((*l_1424) = (l_1369 = (((safe_mod_func_uint8_t_u_u(((18446744073709551615UL != l_1408[3][1][1]) && (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_1413 == (void*)0), (safe_lshift_func_uint16_t_u_u(((((((*l_1423) = (l_1416 | (safe_sub_func_uint64_t_u_u((((*l_1422) &= (((p_55 ^ (((*l_1420) = ((((((((void*)0 != l_1355) || (((-7L) <= 0x95L) ^ (**p_2885->g_360))) , l_1419) != &p_2885->g_1139) <= 2L) , p_2885->g_749) >= 0L)) >= p_55)) , &p_2885->g_691[4][5][0]) == l_1421[0][0][3])) != p_55), 7L)))) || 0x0C32101B12816524L) , &p_2885->g_19) != (void*)0) && p_2885->g_198), 2)))), (*p_2885->g_616)))), 0x2CL)) <= p_56) == l_1416))) != p_2885->g_619) & p_55);
                for (p_2885->g_674 = 0; (p_2885->g_674 <= 4); p_2885->g_674 += 1)
                { /* block id: 681 */
                    uint32_t l_1443[6][9] = {{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL},{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL},{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL},{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL},{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL},{4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL,4294967295UL,0x75F3FDB8L,4294967295UL}};
                    int32_t l_1458 = 0x079EEDD3L;
                    int i, j;
                    for (p_56 = 1; (p_56 <= 4); p_56 += 1)
                    { /* block id: 684 */
                        uint32_t l_1428 = 0x7B8377E9L;
                        (*p_53) = (safe_unary_minus_func_uint64_t_u(((safe_mul_func_uint8_t_u_u((((l_1428 = ((*p_54) | 0x67C6L)) || (safe_mod_func_int64_t_s_s((((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((**p_2885->g_360), l_1405[3])), (0x30BADB4010F47978L || (l_1371 = (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((0x6FB2F611DCF1F78EL | (((safe_lshift_func_uint8_t_u_u((p_56 >= (!(!0x0C21L))), 7)) ^ 0x8EL) , (-9L))) | p_56), 1)) | 0UL) & l_1357), (*p_2885->g_361))))))) != l_1443[4][2]) , 0x5E39A3BC32950FC6L), p_2885->g_712))) ^ l_1408[0][2][6]), (-9L))) < 0x93BB802D0511C658L)));
                    }
                    if ((*p_53))
                        continue;
                    for (p_2885->g_581 = 3; (p_2885->g_581 >= 0); p_2885->g_581 -= 1)
                    { /* block id: 692 */
                        uint64_t l_1446 = 18446744073709551609UL;
                        uint32_t l_1459 = 0xBF6DD624L;
                        l_1355 = p_53;
                        (*l_1355) = (~((safe_mul_func_uint16_t_u_u(((void*)0 != p_54), ((**p_2885->g_360) == l_1446))) ^ ((safe_mul_func_int8_t_s_s((((--(**p_2885->g_615)) ^ (safe_rshift_func_uint16_t_u_u((((l_1446 != (((void*)0 == l_1453[1]) <= (l_1405[1] && ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((l_1459 ^= (l_1458 = 0x09L)), l_1416)), 1UL)) | l_1416)))) <= l_1416) == 0x1CB3BF63L), p_55))) == p_2885->g_1460), 0x19L)) & (*l_1355))));
                    }
                }
            }
        }
        if ((((safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(p_2885->g_1005[0], p_56)) && (((safe_lshift_func_uint16_t_u_u(65535UL, 6)) < (l_1467 == &p_2885->g_478)) , (l_1369 >= ((*l_1468) &= l_1371)))) , ((((safe_mul_func_uint8_t_u_u((*p_2885->g_616), (safe_mul_func_int16_t_s_s(0x78F5L, 65532UL)))) , 0x70A78349D9B91F74L) , (void*)0) == &p_2885->g_19)), l_1473)) >= l_1357) >= 0x31642B6C5372686EL))
        { /* block id: 703 */
            int16_t l_1481 = 0x394DL;
            int32_t *l_1487 = &p_2885->g_159;
            for (p_2885->g_8 = 1; (p_2885->g_8 != (-15)); p_2885->g_8 = safe_sub_func_int32_t_s_s(p_2885->g_8, 3))
            { /* block id: 706 */
                uint32_t *l_1478 = (void*)0;
                int32_t *l_1480[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1480[i] = &l_1369;
                if ((l_1481 = (0L ^ (&p_56 == (p_2885->g_1479 = l_1478)))))
                { /* block id: 709 */
                    return p_53;
                }
                else
                { /* block id: 711 */
                    for (p_2885->g_441 = 0; p_2885->g_441 < 5; p_2885->g_441 += 1)
                    {
                        p_2885->g_444[p_2885->g_441] = &p_2885->g_1460;
                    }
                    if ((*p_53))
                        continue;
                }
                return l_1478;
            }
            for (p_2885->g_327 = 10; (p_2885->g_327 > 12); p_2885->g_327++)
            { /* block id: 719 */
                if (p_2885->g_1484)
                    break;
                for (p_2885->g_101 = 0; (p_2885->g_101 < 6); p_2885->g_101 = safe_add_func_uint8_t_u_u(p_2885->g_101, 9))
                { /* block id: 723 */
                    return p_53;
                }
                if ((*p_53))
                    continue;
            }
            return l_1487;
        }
        else
        { /* block id: 729 */
            int32_t *l_1490[4][6] = {{&l_1473,(void*)0,(void*)0,&l_1473,&l_1473,(void*)0},{&l_1473,(void*)0,(void*)0,&l_1473,&l_1473,(void*)0},{&l_1473,(void*)0,(void*)0,&l_1473,&l_1473,(void*)0},{&l_1473,(void*)0,(void*)0,&l_1473,&l_1473,(void*)0}};
            int i, j;
            for (p_2885->g_184 = (-15); (p_2885->g_184 != 14); p_2885->g_184 = safe_add_func_uint32_t_u_u(p_2885->g_184, 9))
            { /* block id: 732 */
                l_1355 = func_57(l_1490[3][3], p_2885);
                if ((*p_53))
                    break;
                return p_53;
            }
            for (p_2885->g_22 = (-16); (p_2885->g_22 > 6); p_2885->g_22 = safe_add_func_uint16_t_u_u(p_2885->g_22, 8))
            { /* block id: 739 */
                p_53 = (void*)0;
            }
            l_1370 |= 0x3899AF6AL;
        }
        l_1355 = &l_1370;
    }
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_67 p_2885->g_19 p_2885->g_22 p_2885->g_146 p_2885->g_8 p_2885->g_101 p_2885->g_154 p_2885->g_195 p_2885->g_179 p_2885->g_198 p_2885->g_117 p_2885->g_3 p_2885->g_245 p_2885->g_184 p_2885->g_246 p_2885->g_156 p_2885->g_360 p_2885->g_361 p_2885->g_327
 * writes: p_2885->g_67 p_2885->g_22 p_2885->g_101 p_2885->g_8 p_2885->g_117 p_2885->g_154 p_2885->g_159 p_2885->g_198 p_2885->g_214 p_2885->g_179
 */
int32_t * func_57(int32_t * p_58, struct S0 * p_2885)
{ /* block id: 29 */
    int8_t l_59 = 0x7AL;
    int32_t l_60 = 0x73A8A1D5L;
    int32_t *l_61 = &l_60;
    int32_t *l_62 = &p_2885->g_8;
    int32_t *l_63 = &p_2885->g_8;
    int32_t *l_64 = &p_2885->g_8;
    int32_t *l_65 = (void*)0;
    int32_t *l_66[5][4] = {{&p_2885->g_3,(void*)0,&p_2885->g_3,(void*)0},{&p_2885->g_3,(void*)0,&p_2885->g_3,(void*)0},{&p_2885->g_3,(void*)0,&p_2885->g_3,(void*)0},{&p_2885->g_3,(void*)0,&p_2885->g_3,(void*)0},{&p_2885->g_3,(void*)0,&p_2885->g_3,(void*)0}};
    int16_t *l_97 = &p_2885->g_22;
    int32_t l_109 = 0x017EA5CAL;
    uint16_t *l_112[10][2][10] = {{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}},{{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0},{&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,&p_2885->g_101,(void*)0,&p_2885->g_101,&p_2885->g_101,(void*)0}}};
    uint32_t l_926 = 0xD06F18BFL;
    int32_t l_927 = 8L;
    uint16_t ***l_939 = &p_2885->g_146[0];
    uint8_t **l_942[1];
    uint32_t l_1009 = 0x2F7796ADL;
    int8_t *l_1026 = (void*)0;
    int8_t **l_1025 = &l_1026;
    uint32_t l_1083 = 4294967295UL;
    uint32_t l_1103 = 0x5D3A04B1L;
    uint16_t *l_1140 = (void*)0;
    int32_t l_1142[5];
    int64_t *l_1288 = &p_2885->g_1007;
    uint64_t l_1303 = 6UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_942[i] = &p_2885->g_616;
    for (i = 0; i < 5; i++)
        l_1142[i] = 0x438C2B21L;
    --p_2885->g_67;
    for (p_2885->g_22 = 23; (p_2885->g_22 > (-27)); --p_2885->g_22)
    { /* block id: 33 */
        int16_t **l_98 = &l_97;
        int32_t l_99[9] = {0x0474A89AL,0x6B1CB69AL,0x0474A89AL,0x0474A89AL,0x6B1CB69AL,0x0474A89AL,0x0474A89AL,0x6B1CB69AL,0x0474A89AL};
        uint16_t *l_100 = &p_2885->g_101;
        uint16_t **l_113 = &l_112[7][0][3];
        int32_t l_118[10][2];
        int32_t *l_119 = &l_118[5][0];
        int32_t l_928 = 0x3CA33118L;
        int64_t *l_1002 = &p_2885->g_156;
        uint32_t l_1010 = 4294967295UL;
        int32_t l_1062 = 8L;
        uint16_t ***l_1089[6][5] = {{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]},{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]},{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]},{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]},{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]},{(void*)0,&p_2885->g_146[0],&p_2885->g_146[0],&l_113,&p_2885->g_146[0]}};
        int32_t **l_1133 = &l_64;
        int32_t **l_1134 = (void*)0;
        int32_t **l_1135 = &l_65;
        int32_t **l_1136 = &l_66[3][0];
        uint8_t ***l_1141 = &l_942[0];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_118[i][j] = 0x22463939L;
        }
        l_928 ^= func_12(((safe_mod_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(func_78(func_84(&p_2885->g_22, ((*l_119) = func_12((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((~func_93(((*l_98) = l_97), ((((*l_100) = l_99[0]) || ((safe_unary_minus_func_uint8_t_u((safe_add_func_int8_t_s_s(p_2885->g_19, (safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((((void*)0 == &p_2885->g_8) , (l_109 & (safe_rshift_func_int16_t_s_u((l_100 == ((*l_113) = l_112[7][0][3])), 10)))), 0x5489CA1FCAC0D748L)) & l_99[6]), l_99[4])))))) || 65532UL)) , 18446744073709551615UL), p_2885->g_22, p_2885)), 8)) ^ p_2885->g_22), l_118[5][0])), p_2885->g_19, l_99[0], p_2885)), p_2885->g_19, p_2885->g_22, p_2885), p_2885->g_22, p_2885->g_19, l_99[0], p_2885->g_156, p_2885), l_926)) && 0xCD4A2D81B5F858FCL), l_99[2])) > l_99[4]) <= 1UL), l_99[8])) <= l_99[4]), (**p_2885->g_360), l_927, p_2885);
    }
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_78(int8_t  p_79, uint32_t  p_80, uint32_t  p_81, uint32_t  p_82, int64_t  p_83, struct S0 * p_2885)
{ /* block id: 133 */
    int32_t *l_316 = &p_2885->g_3;
    int32_t **l_317[8][3][3] = {{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}},{{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]},{&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[1][3]}}};
    int32_t *l_318[7][4] = {{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159}};
    uint8_t *l_319 = &p_2885->g_67;
    int16_t *l_326 = &p_2885->g_327;
    uint16_t *l_328[7];
    int32_t l_329 = 7L;
    int16_t *l_330 = (void*)0;
    int16_t *l_331 = &p_2885->g_332;
    uint64_t l_363[6] = {0x958532303F5E9370L,0x8DB19007965F1F26L,0x958532303F5E9370L,0x958532303F5E9370L,0x8DB19007965F1F26L,0x958532303F5E9370L};
    uint32_t l_403 = 0UL;
    int64_t *l_417[10][8] = {{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0},{&p_2885->g_344,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_156,&p_2885->g_344,&p_2885->g_344,(void*)0}};
    uint32_t l_432 = 0xBB1A7081L;
    int16_t *l_582[5][6][8] = {{{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0}},{{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0}},{{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0}},{{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0}},{{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0},{&p_2885->g_327,&p_2885->g_327,(void*)0,&p_2885->g_332,&p_2885->g_22,&p_2885->g_327,&p_2885->g_332,(void*)0}}};
    uint16_t l_597 = 0x0327L;
    uint16_t ***l_611 = &p_2885->g_146[0];
    uint32_t l_692 = 0x58A27D53L;
    uint16_t l_694[1][8][2] = {{{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL},{2UL,0xB32CL}}};
    int8_t *l_823 = (void*)0;
    int8_t **l_822 = &l_823;
    int32_t **l_901 = &p_2885->g_478;
    int32_t l_908 = 0x2D9B8CFCL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_328[i] = &p_2885->g_101;
    l_318[3][1] = l_316;
    return p_80;
}


/* ------------------------------------------ */
/* 
 * reads : p_2885->g_117 p_2885->g_101 p_2885->g_146 p_2885->g_8 p_2885->g_22 p_2885->g_67 p_2885->g_154 p_2885->g_195 p_2885->g_179 p_2885->g_198 p_2885->g_3 p_2885->g_245 p_2885->g_19 p_2885->g_184 p_2885->g_246 p_2885->g_156
 * writes: p_2885->g_117 p_2885->g_101 p_2885->g_8 p_2885->g_154 p_2885->g_159 p_2885->g_198 p_2885->g_214 p_2885->g_179 p_2885->g_67
 */
int8_t  func_84(int16_t * p_85, int32_t  p_86, uint32_t  p_87, int8_t  p_88, struct S0 * p_2885)
{ /* block id: 42 */
    int16_t l_145 = (-10L);
    int32_t l_157 = (-2L);
    int32_t *l_164 = &p_2885->g_3;
    int32_t **l_163 = &l_164;
    uint16_t *l_175 = &p_2885->g_101;
    uint16_t *l_178 = &p_2885->g_179;
    uint16_t **l_180 = (void*)0;
    uint16_t *l_182[4][7][8] = {{{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179}},{{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179}},{{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179}},{{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179},{&p_2885->g_179,(void*)0,(void*)0,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179,&p_2885->g_179}}};
    uint16_t **l_181 = &l_182[1][4][2];
    uint64_t *l_183[8];
    int8_t *l_197 = &p_2885->g_198;
    int16_t *l_199 = &l_145;
    int8_t *l_240 = &p_2885->g_154[1][3][0];
    int32_t l_256[5] = {0x60EC33E8L,0x60EC33E8L,0x60EC33E8L,0x60EC33E8L,0x60EC33E8L};
    uint8_t l_268[8] = {253UL,253UL,253UL,253UL,253UL,253UL,253UL,253UL};
    int64_t *l_282 = (void*)0;
    uint8_t *l_300 = &p_2885->g_67;
    uint8_t **l_299 = &l_300;
    uint8_t l_314 = 6UL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_183[i] = &p_2885->g_184;
    for (p_2885->g_117 = 4; (p_2885->g_117 > 12); p_2885->g_117++)
    { /* block id: 45 */
        uint32_t l_142 = 0x4E4257D9L;
        uint16_t *l_148[10][1] = {{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101},{&p_2885->g_101}};
        uint16_t **l_147[5];
        uint16_t ***l_149 = (void*)0;
        uint16_t **l_151 = &l_148[5][0];
        uint16_t ***l_150 = &l_151;
        int32_t *l_152 = &p_2885->g_8;
        int8_t *l_153 = &p_2885->g_154[1][3][0];
        int64_t *l_155[6] = {&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156};
        int32_t *l_158 = &p_2885->g_159;
        int i, j;
        for (i = 0; i < 5; i++)
            l_147[i] = &l_148[5][0];
        for (p_2885->g_101 = 0; (p_2885->g_101 > 22); p_2885->g_101++)
        { /* block id: 48 */
            int64_t l_124[5][10][5] = {{{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)}},{{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)}},{{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)}},{{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)}},{{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)},{1L,0L,(-7L),0x78B48F969C76AAD2L,(-7L)}}};
            int32_t **l_125 = (void*)0;
            int32_t *l_127 = &p_2885->g_8;
            int32_t **l_126 = &l_127;
            int i, j, k;
            for (p_88 = 0; p_88 < 5; p_88 += 1)
            {
                for (p_86 = 0; p_86 < 10; p_86 += 1)
                {
                    for (p_87 = 0; p_87 < 5; p_87 += 1)
                    {
                        l_124[p_88][p_86][p_87] = 1L;
                    }
                }
            }
            (*l_126) = &p_2885->g_117;
            (*l_126) = &p_2885->g_3;
            if (p_88)
                break;
        }
        (*l_158) = (safe_lshift_func_uint16_t_u_u(65535UL, ((safe_mod_func_int64_t_s_s((-1L), (safe_div_func_int8_t_s_s(((l_157 |= (0x7AEB4D02L || (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((*l_153) = ((((*l_152) ^= ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(l_142, (safe_rshift_func_int16_t_s_s((((l_145 , ((l_147[0] = p_2885->g_146[0]) == ((*l_150) = &l_148[5][0]))) , p_87) ^ p_86), 10)))), 0x65AB66AEAC40E40DL)) & 65526UL)) < p_2885->g_22) , 0x5BL)) , p_2885->g_101) | l_145), p_2885->g_67)), l_145)))) , (*l_152)), 0x25L)))) & 8UL)));
    }
    for (p_88 = 0; (p_88 != (-3)); p_88 = safe_sub_func_int32_t_s_s(p_88, 3))
    { /* block id: 63 */
        int32_t *l_162[2];
        int i;
        for (i = 0; i < 2; i++)
            l_162[i] = &p_2885->g_117;
        l_162[0] = &l_157;
    }
    (*l_163) = (void*)0;
    if ((safe_div_func_uint8_t_u_u((p_88 > (safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(((p_2885->g_8 , ((*l_199) = (((*l_197) |= ((l_157 |= (safe_mul_func_uint8_t_u_u((&p_2885->g_154[1][3][0] == &p_88), ((++(*l_175)) >= (p_85 == ((*l_181) = (l_178 = p_85))))))) , ((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((((+(safe_sub_func_int8_t_s_s((~(p_2885->g_154[1][3][0] , ((safe_rshift_func_int16_t_s_u((&p_2885->g_146[0] != p_2885->g_195), p_87)) && 1L))), p_2885->g_179))) >= p_2885->g_179) , p_87) & 0x10AB4F1EL), 65527UL)), 0x70DB40B985C477C2L)), p_87)) , 0x04L))) && p_2885->g_117))) >= 0x7AEEL), p_2885->g_3)), p_2885->g_179))), p_2885->g_154[1][1][4])))
    { /* block id: 73 */
        uint32_t l_200 = 0xB4286F75L;
        int64_t *l_212 = &p_2885->g_156;
        uint16_t l_219 = 0x889FL;
        int8_t **l_239[2][8][2] = {{{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197}},{{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197},{&l_197,&l_197}}};
        uint8_t *l_241 = &p_2885->g_67;
        int32_t **l_244 = (void*)0;
        uint32_t l_247 = 4294967295UL;
        int32_t *l_248[7][1] = {{&p_2885->g_8},{&p_2885->g_8},{&p_2885->g_8},{&p_2885->g_8},{&p_2885->g_8},{&p_2885->g_8},{&p_2885->g_8}};
        int i, j, k;
        if (l_200)
        { /* block id: 74 */
            uint16_t *l_201 = &p_2885->g_179;
            int64_t **l_213[2][2];
            int32_t l_217 = 0x63A31E12L;
            int32_t l_218 = 0x4F80EE9EL;
            uint16_t l_220 = 0x86F9L;
            int32_t *l_221 = &p_2885->g_117;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_213[i][j] = &l_212;
            }
            (*l_221) |= ((0x156BL | (l_201 == p_85)) ^ (((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_199) |= ((0x67C8C73FL | p_88) , ((safe_lshift_func_uint16_t_u_u((p_2885->g_67 , ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((*l_201) = ((p_2885->g_214 = l_212) == (void*)0)), (l_217 = (++(*l_175))))), ((0xC2B0L ^ p_87) != p_87))) || p_86)), l_218)) & l_219))), l_220)), 6UL)) <= 5UL) != 0x6E7BL));
        }
        else
        { /* block id: 81 */
            for (p_2885->g_117 = (-17); (p_2885->g_117 < (-12)); p_2885->g_117 = safe_add_func_uint64_t_u_u(p_2885->g_117, 9))
            { /* block id: 84 */
                for (p_2885->g_179 = 0; (p_2885->g_179 <= 3); p_2885->g_179 += 1)
                { /* block id: 87 */
                    int32_t *l_224 = &l_157;
                    (*l_224) = p_87;
                    for (l_145 = 0; (l_145 <= 0); l_145 += 1)
                    { /* block id: 91 */
                        if (p_86)
                            break;
                    }
                }
            }
        }
        l_157 = ((safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(p_2885->g_117, 6)) == 1L) >= (p_86 >= (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((((safe_sub_func_int16_t_s_s((0x35L && (safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_241) = ((l_197 = &p_88) == l_240)), (-1L))), (safe_mod_func_uint64_t_u_u((l_244 == (p_2885->g_22 , p_2885->g_245[2][3][4])), p_2885->g_19))))), p_2885->g_184)) & p_88) < 0xC80A1DA366398519L) || p_87) && 0x12L), 7)), 0x8D86L)))), l_247)) , (-4L));
    }
    else
    { /* block id: 100 */
        int32_t l_249 = 1L;
        int32_t *l_250 = &l_157;
        int32_t *l_251 = &l_157;
        int32_t *l_252 = &p_2885->g_8;
        int32_t *l_253 = &p_2885->g_8;
        int32_t l_254[4][1][3] = {{{(-10L),0x6F2FD1BDL,(-10L)}},{{(-10L),0x6F2FD1BDL,(-10L)}},{{(-10L),0x6F2FD1BDL,(-10L)}},{{(-10L),0x6F2FD1BDL,(-10L)}}};
        int32_t *l_255[5];
        uint16_t l_257 = 65529UL;
        int64_t **l_281[6][7];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_255[i] = &p_2885->g_117;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 7; j++)
                l_281[i][j] = &p_2885->g_214;
        }
        ++l_257;
        l_256[1] &= ((safe_mod_func_int64_t_s_s((p_2885->g_19 | (++(*l_175))), (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_268[2], ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((p_87 ^ (safe_sub_func_uint16_t_u_u((((*l_240) = (((p_86 < (((safe_mod_func_uint16_t_u_u((((p_2885->g_214 = l_183[6]) == (l_282 = &p_2885->g_156)) == ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((*l_253), (safe_rshift_func_int8_t_s_s(((&p_86 == p_2885->g_246[1][0]) <= 5L), p_88)))), p_2885->g_156)), p_87)), p_2885->g_154[3][0][0])) < 0x04D8F182E8438865L)), (*p_85))) , 0x7EB9182EEBA72B59L) < p_2885->g_154[0][1][1])) , p_86) ^ 0UL)) > p_86), 9UL))), (*l_250))) >= (*l_252)), (*p_85))), 4)), 5)) , (*l_250)))) & (-9L)), p_88)))) && 0x3475L);
        for (l_145 = 0; (l_145 == (-13)); --l_145)
        { /* block id: 109 */
            uint8_t l_298 = 0x3AL;
            uint8_t ***l_301 = &l_299;
            uint16_t l_315 = 0x5ED9L;
            for (p_2885->g_8 = 0; (p_2885->g_8 >= (-16)); p_2885->g_8 = safe_sub_func_int32_t_s_s(p_2885->g_8, 8))
            { /* block id: 112 */
                int32_t l_297 = 0x510BFA6FL;
                l_298 |= (l_297 = ((*l_251) = (*l_250)));
                l_252 = &l_254[2][0][2];
                (*l_250) |= (p_2885->g_154[1][2][5] , p_88);
                (*l_251) ^= 0x769677FBL;
            }
            (*l_301) = l_299;
            for (p_2885->g_67 = 0; (p_2885->g_67 < 37); ++p_2885->g_67)
            { /* block id: 123 */
                int64_t *l_304 = (void*)0;
                int64_t *l_305 = &p_2885->g_156;
                int32_t l_308 = 0x525ACAF8L;
                l_308 = ((l_304 != (l_305 = &p_2885->g_156)) ^ ((((safe_div_func_uint8_t_u_u(p_2885->g_22, p_88)) , ((0x2DCA6002L > ((l_308 > ((((*l_252) = ((*l_250) = 0x29F09814L)) , ((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((&p_2885->g_22 != &l_145) >= 4294967295UL), p_2885->g_117)), l_314)))) > 247UL)) | p_2885->g_184)) < l_315)) != p_87)) & p_86) , 7UL));
            }
            if (l_315)
                break;
        }
    }
    return p_88;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_2885->g_8 p_2885->g_117
 */
uint16_t  func_93(int16_t * p_94, uint64_t  p_95, uint32_t  p_96, struct S0 * p_2885)
{ /* block id: 37 */
    uint8_t l_114 = 7UL;
    int32_t *l_115 = (void*)0;
    int32_t *l_116 = &p_2885->g_117;
    (*l_116) = (p_2885->g_8 = l_114);
    return p_95;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2886;
    struct S0* p_2885 = &c_2886;
    struct S0 c_2887 = {
        0x657AD95EL, // p_2885->g_2
        (-6L), // p_2885->g_3
        0x20B8EE41L, // p_2885->g_8
        0x26L, // p_2885->g_19
        0x1D66L, // p_2885->g_22
        0xB6L, // p_2885->g_67
        65535UL, // p_2885->g_101
        0x5BD23A2EL, // p_2885->g_117
        {(void*)0}, // p_2885->g_146
        {{{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L}},{{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L}},{{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L}},{{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L}},{{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L},{(-7L),0x25L,0x5FL,0x25L,(-7L),(-1L),0x6FL,0x71L}}}, // p_2885->g_154
        0x4EB6A9A75A9E6D61L, // p_2885->g_156
        0L, // p_2885->g_159
        0x84ECL, // p_2885->g_179
        18446744073709551615UL, // p_2885->g_184
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2885->g_196
        &p_2885->g_196[2], // p_2885->g_195
        0x05L, // p_2885->g_198
        (void*)0, // p_2885->g_214
        {{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159},{&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159,&p_2885->g_159}}, // p_2885->g_246
        {{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}},{{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]},{&p_2885->g_246[1][4],&p_2885->g_246[1][3],&p_2885->g_246[1][3],&p_2885->g_246[0][3],&p_2885->g_246[1][3],&p_2885->g_246[1][4],&p_2885->g_246[0][3],&p_2885->g_246[0][3]}}}, // p_2885->g_245
        1L, // p_2885->g_327
        0x79E6L, // p_2885->g_332
        9L, // p_2885->g_344
        0xC6E8BCC6L, // p_2885->g_346
        0x60269877L, // p_2885->g_358
        &p_2885->g_327, // p_2885->g_361
        &p_2885->g_361, // p_2885->g_360
        1L, // p_2885->g_381
        0x1713CEF5L, // p_2885->g_441
        {&p_2885->g_8,&p_2885->g_8,&p_2885->g_8,&p_2885->g_8,&p_2885->g_8}, // p_2885->g_444
        &p_2885->g_358, // p_2885->g_478
        (void*)0, // p_2885->g_488
        &p_2885->g_488, // p_2885->g_487
        0L, // p_2885->g_581
        &p_2885->g_67, // p_2885->g_616
        &p_2885->g_616, // p_2885->g_615
        &p_2885->g_615, // p_2885->g_614
        0xCF852403L, // p_2885->g_619
        65534UL, // p_2885->g_655
        0xC3L, // p_2885->g_656
        0x2326834F253DA49BL, // p_2885->g_674
        {{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}},{{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL},{0xC2652B163000055DL,0x584F81B769804A9AL}}}, // p_2885->g_691
        0UL, // p_2885->g_712
        1UL, // p_2885->g_749
        65535UL, // p_2885->g_925
        {9L,9L,9L,9L,9L}, // p_2885->g_1005
        0x4D17A2D7ADD82393L, // p_2885->g_1007
        {&p_2885->g_19,&p_2885->g_67,&p_2885->g_656,&p_2885->g_67,&p_2885->g_19,&p_2885->g_19,&p_2885->g_67,&p_2885->g_656,&p_2885->g_67,&p_2885->g_19}, // p_2885->g_1112
        &p_2885->g_179, // p_2885->g_1139
        {&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478,&p_2885->g_478}, // p_2885->g_1151
        &p_2885->g_346, // p_2885->g_1240
        {18446744073709551610UL,18446744073709551615UL,18446744073709551610UL,18446744073709551610UL,18446744073709551615UL,18446744073709551610UL}, // p_2885->g_1260
        65535UL, // p_2885->g_1293
        &p_2885->g_332, // p_2885->g_1353
        (-1L), // p_2885->g_1460
        &p_2885->g_749, // p_2885->g_1479
        1L, // p_2885->g_1484
        0UL, // p_2885->g_1530
        (void*)0, // p_2885->g_1538
        &p_2885->g_1538, // p_2885->g_1537
        {&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156,&p_2885->g_156}, // p_2885->g_1546
        (void*)0, // p_2885->g_1556
        &p_2885->g_361, // p_2885->g_1557
        &p_2885->g_1112[6], // p_2885->g_1571
        &p_2885->g_1571, // p_2885->g_1570
        255UL, // p_2885->g_1582
        0x626578018073A813L, // p_2885->g_1990
        &p_2885->g_1990, // p_2885->g_1989
        &p_2885->g_1989, // p_2885->g_1988
        {&p_2885->g_1988,&p_2885->g_1988,&p_2885->g_1988,&p_2885->g_1988,&p_2885->g_1988,&p_2885->g_1988,&p_2885->g_1988}, // p_2885->g_1987
        0x10B0AC70L, // p_2885->g_2048
        0xBCL, // p_2885->g_2049
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_2885->g_2053
        0x80C1E3CE9E46C906L, // p_2885->g_2101
        &p_2885->g_1557, // p_2885->g_2133
        {(-8L),(-8L),(-8L),(-8L),(-8L)}, // p_2885->g_2198
        (void*)0, // p_2885->g_2259
        &p_2885->g_1556, // p_2885->g_2277
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2885->g_2276
        0x4CF0F075044CF3E5L, // p_2885->g_2331
        &p_2885->g_159, // p_2885->g_2350
        (void*)0, // p_2885->g_2419
        &p_2885->g_2048, // p_2885->g_2487
        &p_2885->g_246[1][2], // p_2885->g_2560
        3L, // p_2885->g_2616
        (void*)0, // p_2885->g_2650
        7UL, // p_2885->g_2699
        &p_2885->g_1005[4], // p_2885->g_2770
        &p_2885->g_1571, // p_2885->g_2785
        0x37L, // p_2885->g_2839
        0x1EL, // p_2885->g_2884
    };
    c_2886 = c_2887;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2885);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2885->g_2, "p_2885->g_2", print_hash_value);
    transparent_crc(p_2885->g_3, "p_2885->g_3", print_hash_value);
    transparent_crc(p_2885->g_8, "p_2885->g_8", print_hash_value);
    transparent_crc(p_2885->g_19, "p_2885->g_19", print_hash_value);
    transparent_crc(p_2885->g_22, "p_2885->g_22", print_hash_value);
    transparent_crc(p_2885->g_67, "p_2885->g_67", print_hash_value);
    transparent_crc(p_2885->g_101, "p_2885->g_101", print_hash_value);
    transparent_crc(p_2885->g_117, "p_2885->g_117", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_2885->g_154[i][j][k], "p_2885->g_154[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2885->g_156, "p_2885->g_156", print_hash_value);
    transparent_crc(p_2885->g_159, "p_2885->g_159", print_hash_value);
    transparent_crc(p_2885->g_179, "p_2885->g_179", print_hash_value);
    transparent_crc(p_2885->g_184, "p_2885->g_184", print_hash_value);
    transparent_crc(p_2885->g_198, "p_2885->g_198", print_hash_value);
    transparent_crc(p_2885->g_327, "p_2885->g_327", print_hash_value);
    transparent_crc(p_2885->g_332, "p_2885->g_332", print_hash_value);
    transparent_crc(p_2885->g_344, "p_2885->g_344", print_hash_value);
    transparent_crc(p_2885->g_346, "p_2885->g_346", print_hash_value);
    transparent_crc(p_2885->g_358, "p_2885->g_358", print_hash_value);
    transparent_crc(p_2885->g_381, "p_2885->g_381", print_hash_value);
    transparent_crc(p_2885->g_441, "p_2885->g_441", print_hash_value);
    transparent_crc(p_2885->g_581, "p_2885->g_581", print_hash_value);
    transparent_crc(p_2885->g_619, "p_2885->g_619", print_hash_value);
    transparent_crc(p_2885->g_655, "p_2885->g_655", print_hash_value);
    transparent_crc(p_2885->g_656, "p_2885->g_656", print_hash_value);
    transparent_crc(p_2885->g_674, "p_2885->g_674", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2885->g_691[i][j][k], "p_2885->g_691[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2885->g_712, "p_2885->g_712", print_hash_value);
    transparent_crc(p_2885->g_749, "p_2885->g_749", print_hash_value);
    transparent_crc(p_2885->g_925, "p_2885->g_925", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2885->g_1005[i], "p_2885->g_1005[i]", print_hash_value);

    }
    transparent_crc(p_2885->g_1007, "p_2885->g_1007", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2885->g_1260[i], "p_2885->g_1260[i]", print_hash_value);

    }
    transparent_crc(p_2885->g_1293, "p_2885->g_1293", print_hash_value);
    transparent_crc(p_2885->g_1460, "p_2885->g_1460", print_hash_value);
    transparent_crc(p_2885->g_1484, "p_2885->g_1484", print_hash_value);
    transparent_crc(p_2885->g_1530, "p_2885->g_1530", print_hash_value);
    transparent_crc(p_2885->g_1582, "p_2885->g_1582", print_hash_value);
    transparent_crc(p_2885->g_1990, "p_2885->g_1990", print_hash_value);
    transparent_crc(p_2885->g_2048, "p_2885->g_2048", print_hash_value);
    transparent_crc(p_2885->g_2049, "p_2885->g_2049", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_2885->g_2053[i], "p_2885->g_2053[i]", print_hash_value);

    }
    transparent_crc(p_2885->g_2101, "p_2885->g_2101", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2885->g_2198[i], "p_2885->g_2198[i]", print_hash_value);

    }
    transparent_crc(p_2885->g_2331, "p_2885->g_2331", print_hash_value);
    transparent_crc(p_2885->g_2616, "p_2885->g_2616", print_hash_value);
    transparent_crc(p_2885->g_2699, "p_2885->g_2699", print_hash_value);
    transparent_crc(p_2885->g_2839, "p_2885->g_2839", print_hash_value);
    transparent_crc(p_2885->g_2884, "p_2885->g_2884", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
