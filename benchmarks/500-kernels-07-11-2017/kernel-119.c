// -g 31,17,7 -l 31,1,1
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


// Seed: 614087176

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    int8_t g_43;
    int8_t g_47;
    int8_t g_55;
    int8_t *g_54;
    int16_t g_56[9];
    int32_t g_60[10];
    int32_t g_62;
    uint32_t g_92;
    int32_t g_96;
    int16_t g_97;
    int32_t g_98;
    int64_t g_99[5][1];
    int32_t g_101;
    uint32_t g_103;
    int32_t *g_120;
    int32_t g_121;
    int8_t g_153;
    uint16_t g_179;
    uint32_t g_199[9];
    int32_t * volatile *g_205;
    int32_t * volatile **g_204;
    uint32_t g_207;
    uint32_t g_209;
    uint64_t g_233;
    uint64_t g_238;
    uint64_t g_240;
    uint16_t g_242[10];
    volatile uint32_t g_249;
    volatile uint32_t * volatile g_248;
    volatile uint32_t * volatile *g_247;
    int8_t **g_323;
    int32_t **g_341[2];
    int32_t ***g_340;
    uint8_t g_382;
    int16_t g_414;
    int64_t g_416;
    uint32_t g_455;
    volatile uint32_t g_464;
    volatile uint32_t * volatile g_463[3][3][6];
    volatile uint32_t * volatile *g_462;
    int64_t g_474;
    uint32_t *g_488;
    int64_t g_535;
    int32_t *g_540[6][10];
    uint32_t g_586[7];
    uint32_t g_662;
    int64_t *g_671[8];
    int64_t **g_670;
    int16_t *g_717;
    int16_t **g_716;
    volatile uint64_t g_761[5][2];
    volatile uint64_t g_762;
    volatile uint64_t g_763;
    volatile uint64_t g_764;
    volatile uint64_t g_765;
    volatile uint64_t * volatile g_760[1][5][4];
    volatile uint64_t *g_766;
    volatile uint64_t * volatile *g_759[7];
    volatile int32_t g_769;
    volatile int32_t *g_768;
    int16_t g_831;
    int32_t g_869;
    uint32_t *g_1040;
    uint64_t g_1055;
    uint64_t *g_1197;
    uint64_t **g_1196;
    uint32_t g_1229;
    int32_t g_1258;
    int8_t ***g_1290;
    int32_t g_1383;
    uint64_t g_1394;
    volatile int64_t g_1399;
    volatile int64_t * volatile g_1398[6];
    volatile int64_t * volatile *g_1397;
    uint32_t g_1434[5][7];
    uint32_t g_1436;
    uint16_t g_1460[4][9];
    uint8_t g_1465;
    uint16_t g_1486;
    int64_t **g_1513[1][3];
    int32_t *g_1548;
    int64_t g_1830;
    volatile uint16_t g_1871;
    volatile uint16_t *g_1870;
    volatile uint16_t **g_1869;
    volatile uint16_t ***g_1868;
    uint32_t **g_1998;
    uint32_t ***g_1997;
    int32_t g_2060;
    uint32_t g_2161;
    uint8_t g_2199;
    uint32_t g_2291;
    int64_t g_2339;
    uint8_t *g_2429[8][8][2];
    uint32_t g_2490;
    uint32_t *g_2602;
    uint32_t **g_2601[5][1][2];
    uint32_t ***g_2600;
    int16_t *** volatile g_2712;
    uint32_t g_2799;
    volatile int8_t g_2800;
    volatile uint64_t * volatile ** volatile g_2839[2][10];
    uint32_t ***g_2889;
    volatile int32_t g_2937;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_2940);
int32_t  func_8(int8_t  p_9, uint64_t  p_10, uint32_t  p_11, uint64_t  p_12, struct S0 * p_2940);
int8_t  func_18(uint64_t  p_19, int32_t  p_20, uint64_t  p_21, struct S0 * p_2940);
int8_t  func_22(int32_t  p_23, uint64_t  p_24, int64_t  p_25, struct S0 * p_2940);
uint16_t  func_32(uint32_t  p_33, int64_t  p_34, uint8_t  p_35, struct S0 * p_2940);
int8_t  func_36(int8_t  p_37, uint32_t  p_38, int16_t  p_39, uint8_t  p_40, int64_t  p_41, struct S0 * p_2940);
uint8_t  func_48(int8_t * p_49, int8_t * p_50, int8_t * p_51, uint8_t  p_52, int8_t * p_53, struct S0 * p_2940);
uint16_t  func_63(int32_t * p_64, uint32_t  p_65, struct S0 * p_2940);
uint64_t  func_67(uint32_t  p_68, int8_t * p_69, int32_t  p_70, int32_t * p_71, struct S0 * p_2940);
int16_t  func_76(int64_t  p_77, int32_t * p_78, int16_t  p_79, uint32_t  p_80, int32_t  p_81, struct S0 * p_2940);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2940->g_3 p_2940->g_831 p_2940->g_1196 p_2940->g_1197 p_2940->g_233 p_2940->g_1868 p_2940->g_1869 p_2940->g_1870 p_2940->g_1871 p_2940->g_205 p_2940->g_120 p_2940->g_96 p_2940->g_2937 p_2940->g_1434 p_2940->g_2800
 * writes: p_2940->g_3 p_2940->g_831 p_2940->g_96 p_2940->g_340 p_2940->g_120
 */
int32_t  func_1(struct S0 * p_2940)
{ /* block id: 4 */
    int8_t l_26[8] = {(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)};
    int16_t l_1560 = (-1L);
    uint32_t l_2538 = 0UL;
    uint32_t l_2578 = 0x2B5147D1L;
    int64_t *l_2584 = &p_2940->g_474;
    int64_t **l_2583 = &l_2584;
    int64_t ***l_2582 = &l_2583;
    uint32_t *l_2593 = &p_2940->g_2291;
    uint32_t **l_2592 = &l_2593;
    uint16_t l_2606 = 65528UL;
    int32_t l_2609 = 0x34185419L;
    uint64_t l_2615 = 18446744073709551607UL;
    uint64_t ***l_2625 = &p_2940->g_1196;
    int32_t l_2638 = 0x288F2D55L;
    int32_t l_2640 = (-1L);
    int32_t l_2655 = 0x35960D21L;
    int32_t l_2658 = (-1L);
    int32_t l_2660[6][4][6] = {{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}},{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}},{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}},{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}},{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}},{{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L},{(-1L),0L,1L,0L,0L,0L}}};
    uint64_t l_2663[4][6] = {{0xE2D8CB35601EB904L,0x7485DB08BDC09AC1L,0x556476E0084CC868L,1UL,0x7485DB08BDC09AC1L,1UL},{0xE2D8CB35601EB904L,0x7485DB08BDC09AC1L,0x556476E0084CC868L,1UL,0x7485DB08BDC09AC1L,1UL},{0xE2D8CB35601EB904L,0x7485DB08BDC09AC1L,0x556476E0084CC868L,1UL,0x7485DB08BDC09AC1L,1UL},{0xE2D8CB35601EB904L,0x7485DB08BDC09AC1L,0x556476E0084CC868L,1UL,0x7485DB08BDC09AC1L,1UL}};
    int32_t l_2724[9] = {1L,(-8L),1L,1L,(-8L),1L,1L,(-8L),1L};
    uint32_t *l_2757 = &p_2940->g_2291;
    int16_t l_2797 = 0x3AF1L;
    int32_t l_2929 = 0x1C78B5CBL;
    int32_t ***l_2936[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2936[i] = &p_2940->g_341[1];
    for (p_2940->g_3 = (-12); (p_2940->g_3 > (-5)); ++p_2940->g_3)
    { /* block id: 7 */
        int16_t l_17[5][9][5] = {{{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL}},{{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL}},{{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL}},{{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL}},{{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL},{0x6574L,0x5761L,0x0339L,(-1L),0x333CL}}};
        uint32_t l_27[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int8_t *l_42 = &p_2940->g_43;
        int8_t *l_44 = (void*)0;
        int8_t *l_45 = (void*)0;
        int8_t *l_46 = &p_2940->g_47;
        uint32_t *l_2290 = &p_2940->g_2291;
        int32_t l_2539 = 0x26863623L;
        int32_t l_2540 = 0x1DEEC056L;
        uint32_t **l_2554[4][1] = {{&p_2940->g_488},{&p_2940->g_488},{&p_2940->g_488},{&p_2940->g_488}};
        int16_t l_2581 = 0x6046L;
        int32_t *l_2605 = &l_2540;
        int32_t l_2623 = 1L;
        int64_t l_2639 = (-1L);
        int32_t l_2659 = 0x4A95974FL;
        int32_t l_2662 = 0x61A8B635L;
        int32_t l_2686 = (-7L);
        uint32_t l_2691 = 0x90CCB0ACL;
        uint16_t *l_2713 = &p_2940->g_1460[1][1];
        uint8_t l_2802 = 9UL;
        uint32_t ****l_2837 = (void*)0;
        uint32_t *****l_2836 = &l_2837;
        uint32_t l_2892 = 0x16DD9AA4L;
        int8_t l_2900 = (-1L);
        int i, j, k;
        (1 + 1);
    }
    for (p_2940->g_831 = 0; (p_2940->g_831 > 26); p_2940->g_831++)
    { /* block id: 1401 */
        uint8_t l_2920 = 0x57L;
        (**p_2940->g_205) |= ((safe_mul_func_int64_t_s_s(l_2920, ((**p_2940->g_1196) > (l_26[7] != l_2578)))) || ((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((((void*)0 == (**p_2940->g_1868)) != 0x77D646C6L), l_2660[0][3][4])) | (safe_rshift_func_int16_t_s_u((l_2638 = l_2929), l_2663[2][0]))), l_2920)), (*p_2940->g_1870))) , (**p_2940->g_1869)));
        if (l_2920)
            break;
        (*p_2940->g_205) = ((((safe_mul_func_uint8_t_u_u(l_2640, l_2929)) || ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_2660[0][3][4] , (((p_2940->g_340 = &p_2940->g_341[1]) == l_2936[3]) || (0x0FL > p_2940->g_2937))), ((safe_mod_func_int64_t_s_s(l_2920, (**p_2940->g_1196))) | (-1L)))), p_2940->g_1434[3][4])) , l_2920)) <= l_2920) , (*p_2940->g_205));
    }
    return p_2940->g_2800;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_1258 p_2940->g_768 p_2940->g_242 p_2940->g_1197 p_2940->g_233 p_2940->g_1486 p_2940->g_1869 p_2940->g_1870 p_2940->g_1871 p_2940->g_2161 p_2940->g_54 p_2940->g_55 p_2940->g_416 p_2940->g_1548 p_2940->g_769 p_2940->g_205
 * writes: p_2940->g_1258 p_2940->g_769 p_2940->g_242 p_2940->g_1486 p_2940->g_2161 p_2940->g_2199 p_2940->g_120
 */
int32_t  func_8(int8_t  p_9, uint64_t  p_10, uint32_t  p_11, uint64_t  p_12, struct S0 * p_2940)
{ /* block id: 1184 */
    uint64_t l_2495 = 0x38EBB08DD21E31B4L;
    int32_t l_2502 = 0x4D140C12L;
    uint32_t ***l_2505 = (void*)0;
    int32_t l_2509 = 0x13368BAEL;
    uint64_t l_2524 = 0UL;
    uint32_t l_2536 = 0xED09A8BBL;
    for (p_2940->g_1258 = 0; (p_2940->g_1258 >= (-8)); p_2940->g_1258 = safe_sub_func_uint16_t_u_u(p_2940->g_1258, 4))
    { /* block id: 1187 */
        int8_t l_2496 = 1L;
        int32_t l_2501[9] = {(-1L),0x22E1D2ECL,(-1L),(-1L),0x22E1D2ECL,(-1L),(-1L),0x22E1D2ECL,(-1L)};
        uint32_t **l_2504 = (void*)0;
        uint32_t ***l_2503 = &l_2504;
        uint16_t *l_2508 = &p_2940->g_242[0];
        int i;
        (*p_2940->g_768) = 4L;
        l_2496 = (l_2495 ^= 4L);
        l_2509 |= (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((p_2940->g_1486 |= ((p_11 & ((((*l_2508) |= (((l_2501[6] = 3L) & 0x6385176CL) <= (((l_2502 = 4294967295UL) & (0L != ((l_2503 == l_2505) ^ (safe_div_func_int16_t_s_s(0x0B4FL, p_11))))) , l_2495))) , p_12) != (*p_2940->g_1197))) == l_2495)), 7)) , (**p_2940->g_1869)) ^ 65527UL), 1));
    }
    for (p_2940->g_2161 = 0; (p_2940->g_2161 < 46); p_2940->g_2161++)
    { /* block id: 1199 */
        int32_t l_2535 = 0x4B6FAAA5L;
        uint8_t *l_2537 = &p_2940->g_2199;
        (*p_2940->g_768) ^= ((*p_2940->g_1548) = ((safe_rshift_func_int8_t_s_u(((((p_10 , ((safe_add_func_int64_t_s_s((-8L), ((safe_div_func_int8_t_s_s((*p_2940->g_54), (p_9 = (((safe_sub_func_uint64_t_u_u(18446744073709551611UL, (0x3AA981A23D4C6166L < (safe_rshift_func_int8_t_s_u(l_2524, ((*l_2537) = (((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint8_t_u_s(((+(safe_unary_minus_func_uint8_t_u((l_2509 >= (safe_rshift_func_uint16_t_u_s((p_2940->g_416 , l_2502), p_9)))))) ^ l_2495), 4)) , p_9))) , p_11), l_2535)), l_2509)) ^ l_2536) ^ (*p_2940->g_1197)))))))) ^ 0xA0C52178L) | p_9)))) , 0x6256835DC99D9228L))) | l_2535)) >= 0L) != 0xD168L) >= 0UL), 3)) , (-1L)));
        (*p_2940->g_768) = l_2535;
        (*p_2940->g_205) = &l_2535;
    }
    return (*p_2940->g_1548);
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_340 p_2940->g_341 p_2940->g_1548 p_2940->g_1258 p_2940->g_103 p_2940->g_153 p_2940->g_205 p_2940->g_120 p_2940->g_1196 p_2940->g_1197 p_2940->g_233 p_2940->g_62 p_2940->g_1229 p_2940->g_2339 p_2940->g_96 p_2940->g_2161 p_2940->g_1998 p_2940->g_99 p_2940->g_1868 p_2940->g_1869 p_2940->g_1460 p_2940->g_1394 p_2940->g_209 p_2940->g_54 p_2940->g_869 p_2940->g_199 p_2940->g_455 p_2940->g_56 p_2940->g_2490 p_2940->g_1465 p_2940->g_662 p_2940->g_240
 * writes: p_2940->g_1465 p_2940->g_120 p_2940->g_1258 p_2940->g_62 p_2940->g_96 p_2940->g_662 p_2940->g_240 p_2940->g_869 p_2940->g_97 p_2940->g_233 p_2940->g_382 p_2940->g_1394 p_2940->g_1040 p_2940->g_831 p_2940->g_179 p_2940->g_2429 p_2940->g_55 p_2940->g_455 p_2940->g_56 p_2940->g_99 p_2940->g_2490
 */
int8_t  func_18(uint64_t  p_19, int32_t  p_20, uint64_t  p_21, struct S0 * p_2940)
{ /* block id: 1109 */
    int32_t *l_2308 = &p_2940->g_62;
    int8_t l_2336 = 0L;
    int32_t l_2338 = (-1L);
    int64_t *l_2357[9];
    int64_t **l_2356 = &l_2357[5];
    uint16_t *l_2393 = &p_2940->g_242[0];
    uint16_t **l_2392 = &l_2393;
    uint8_t *l_2427 = (void*)0;
    int64_t **l_2481 = &p_2940->g_671[7];
    int32_t l_2487[7] = {3L,0x3ADABB3FL,3L,3L,0x3ADABB3FL,3L,3L};
    int i;
    for (i = 0; i < 9; i++)
        l_2357[i] = &p_2940->g_474;
lbl_2423:
    for (p_2940->g_1465 = 27; (p_2940->g_1465 == 6); p_2940->g_1465--)
    { /* block id: 1112 */
        uint32_t l_2315 = 4294967295UL;
        int32_t l_2337 = (-1L);
        int32_t *l_2340 = &p_2940->g_96;
        (**p_2940->g_340) = l_2308;
        (*l_2340) &= (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((l_2315 && (((p_19 > ((l_2338 = (((*p_2940->g_1548) &= p_21) >= ((safe_add_func_int64_t_s_s((5L & (0x459FL >= (l_2337 = (((65530UL >= (safe_mul_func_int8_t_s_s((l_2315 >= p_2940->g_103), ((~((safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s(((**p_2940->g_205) = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(p_20, 2L)), p_2940->g_153))), l_2315)) || p_19), 0x387F186A86B27BD0L)), l_2315)) <= 0x0C50EEEEL), p_21)), l_2315)) , (-10L)) || l_2315), 3)) , l_2336)) , 0x53L)))) , (void*)0) == &p_2940->g_1397)))), (**p_2940->g_1196))) , (*l_2308)))) , 0x2EL)) ^ p_2940->g_1229) | l_2315)) && p_2940->g_2339) ^ 0x3143L) == l_2315), l_2336)), 2)) , p_20) != 5L) , 1L), p_21));
        for (l_2336 = (-25); (l_2336 == (-5)); l_2336 = safe_add_func_uint64_t_u_u(l_2336, 4))
        { /* block id: 1121 */
            if (p_21)
                break;
        }
    }
    (*p_2940->g_1548) ^= ((void*)0 == &l_2336);
    for (p_2940->g_662 = 0; (p_2940->g_662 <= 56); p_2940->g_662++)
    { /* block id: 1128 */
        int32_t l_2353 = 0L;
        int32_t l_2370 = 0x2558AB68L;
        int16_t l_2418 = 0x25BDL;
        uint8_t *l_2426 = &p_2940->g_382;
        int8_t ***l_2463 = &p_2940->g_323;
        int16_t l_2472 = (-1L);
        int32_t *l_2474 = &p_2940->g_101;
        int32_t l_2489 = (-10L);
        for (p_2940->g_240 = 0; (p_2940->g_240 > 38); p_2940->g_240 = safe_add_func_uint32_t_u_u(p_2940->g_240, 8))
        { /* block id: 1131 */
            uint32_t l_2372 = 0xA2723438L;
            uint8_t l_2374 = 247UL;
            uint32_t **l_2375 = (void*)0;
            int32_t l_2407 = 0x24AC7B0FL;
            uint64_t ***l_2436 = &p_2940->g_1196;
            uint64_t ***l_2437 = &p_2940->g_1196;
            int16_t *l_2464 = &p_2940->g_56[7];
            int8_t l_2465 = 0x75L;
            int64_t *l_2473 = &p_2940->g_99[2][0];
            int32_t *l_2482 = &l_2353;
            int32_t *l_2483 = &p_2940->g_98;
            int32_t *l_2484 = &p_2940->g_98;
            int32_t *l_2485 = &p_2940->g_1258;
            int32_t *l_2486 = &p_2940->g_62;
            int32_t *l_2488[9] = {&p_2940->g_98,&l_2407,&p_2940->g_98,&p_2940->g_98,&l_2407,&p_2940->g_98,&p_2940->g_98,&l_2407,&p_2940->g_98};
            int i;
            for (p_2940->g_869 = 0; (p_2940->g_869 < 6); p_2940->g_869 = safe_add_func_uint8_t_u_u(p_2940->g_869, 9))
            { /* block id: 1134 */
                int64_t l_2373 = (-2L);
                uint64_t **l_2379 = (void*)0;
                uint32_t *l_2387 = &p_2940->g_1229;
                int32_t l_2394 = 1L;
                uint8_t *l_2428 = &p_2940->g_1465;
                uint64_t ***l_2435 = &p_2940->g_1196;
                uint64_t ****l_2434[4][6][4];
                int16_t *l_2446 = &l_2418;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_2434[i][j][k] = &l_2435;
                    }
                }
                for (p_2940->g_97 = 0; (p_2940->g_97 < 23); p_2940->g_97 = safe_add_func_uint16_t_u_u(p_2940->g_97, 1))
                { /* block id: 1137 */
                    int64_t ***l_2358 = (void*)0;
                    int64_t ***l_2359 = &l_2356;
                    int32_t l_2368[2];
                    uint8_t *l_2369 = &p_2940->g_382;
                    uint64_t *l_2371 = &p_2940->g_1394;
                    int32_t *l_2376 = &p_2940->g_96;
                    int16_t *l_2408 = &p_2940->g_831;
                    uint64_t l_2420 = 0xB823450267AAC250L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2368[i] = 0x2C2647FDL;
                    (*l_2376) &= (((*p_2940->g_1548) ^= (((*l_2308) <= ((((((((safe_lshift_func_uint16_t_u_s(l_2353, (((((safe_div_func_uint8_t_u_u((((*l_2359) = l_2356) == (void*)0), (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((**p_2940->g_1196) = (safe_lshift_func_uint16_t_u_u(0xD21CL, 14))) & ((*l_2371) = ((l_2368[0] ^ (l_2370 |= (0xAD414D13L | (((!p_2940->g_2161) > (((*l_2369) = (~(p_20 <= p_19))) <= l_2368[0])) == 0x4AAAL)))) <= l_2368[0]))) ^ l_2353), 6)), 8)) || (-1L)), 15)))) == (-8L)) , 4294967295UL) && l_2372) & (-2L)))) && l_2373) != l_2374) , 0x403CL) != p_20) , l_2375) == &p_2940->g_488) > 0xA27DL)) , 0x5C01D43BL)) != l_2373);
                    for (p_2940->g_233 = 0; (p_2940->g_233 <= 0); p_2940->g_233 += 1)
                    { /* block id: 1147 */
                        int i, j;
                        (*p_2940->g_1548) |= ((((safe_mul_func_uint16_t_u_u(((l_2379 == ((safe_unary_minus_func_int32_t_s(l_2368[p_2940->g_233])) , l_2379)) == 0UL), (l_2394 &= ((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((((((*p_2940->g_1998) = l_2387) == l_2308) ^ ((safe_mul_func_uint8_t_u_u(p_2940->g_99[p_2940->g_233][p_2940->g_233], (((safe_div_func_uint8_t_u_u(((l_2372 , (*p_2940->g_1868)) != l_2392), p_19)) & l_2373) != 0x5ED0L))) , 1L)) > 0x03EC63F9E7C7BD3FL) , p_21), 0UL)), l_2353)), l_2374)) , (*l_2308))))) > p_19) > 1UL) == 65533UL);
                    }
                    (*p_2940->g_1548) |= (((safe_mod_func_uint64_t_u_u(((p_2940->g_1460[1][1] > ((*l_2408) = (((*l_2371) ^= ((*p_2940->g_1197) = (safe_mul_func_int16_t_s_s((p_20 | (((safe_lshift_func_int8_t_s_s(0x55L, (*l_2308))) != ((l_2407 = ((*p_2940->g_1197) || (safe_add_func_uint32_t_u_u(l_2373, ((*l_2376) && ((safe_rshift_func_uint16_t_u_s((p_19 <= ((*l_2308) ^ 0x098BL)), p_19)) <= l_2373)))))) , (*l_2376))) <= l_2374)), l_2370)))) && l_2370))) , 0xBABA671F50AE7412L), l_2373)) <= (*l_2376)) ^ (*l_2308));
                    for (p_2940->g_179 = 0; (p_2940->g_179 > 39); p_2940->g_179++)
                    { /* block id: 1159 */
                        int16_t l_2419[1][2];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_2419[i][j] = 0L;
                        }
                        if (l_2407)
                            break;
                        (*l_2308) = (!((((safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((((((4294967295UL || p_20) & l_2353) < (((((1L > (*l_2308)) , (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(l_2418)), ((l_2419[0][0] < (((~p_20) ^ (l_2420 && p_20)) ^ p_20)) > p_2940->g_209)))) , (void*)0) != (void*)0) == (*l_2308))) , 0xC533A9D292424469L) >= (**p_2940->g_1196)) == 0x0539L) & l_2419[0][0]), p_19)), l_2373)) != l_2372) >= l_2394) <= (*p_2940->g_1197)));
                        (*p_2940->g_1548) |= (safe_add_func_uint16_t_u_u((p_21 || p_20), p_19));
                        if (p_2940->g_1394)
                            goto lbl_2423;
                    }
                }
                (*l_2308) = ((((*p_2940->g_54) = (safe_add_func_int32_t_s_s(((l_2427 = l_2426) == (p_2940->g_2429[2][0][1] = l_2428)), l_2373))) || p_21) < (safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((l_2353 = ((l_2436 = &p_2940->g_1196) == (l_2373 , l_2437))), (0x639C1A7FL && ((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int8_t_s_s((((*l_2446) &= (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(6L, (*l_2308))), (*l_2308)))) | p_19), p_2940->g_869)) > 0x2DAF40BCFF1FC72AL) <= (*l_2308)) , 0x5D8CL), p_2940->g_199[8])) == p_21)))), 5)));
            }
            (*p_2940->g_1548) &= (safe_rshift_func_uint8_t_u_s((*l_2308), (safe_sub_func_uint64_t_u_u(((p_19 | (safe_sub_func_int8_t_s_s((*l_2308), p_21))) ^ (safe_mod_func_int8_t_s_s((((((--p_2940->g_455) & ((p_21 > l_2407) , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s(((void*)0 == l_2463), ((*l_2464) &= 0x0094L))) != l_2407) & p_20), l_2370)), p_21)) || l_2465))) || 0xF0389D98L) == l_2370) <= (*l_2308)), 0x38L))), p_20))));
            (*p_2940->g_1548) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((safe_mul_func_int64_t_s_s(((*l_2473) = l_2472), (&p_2940->g_474 == ((l_2372 , (+((l_2474 = l_2474) != l_2308))) , &p_2940->g_474)))) , &l_2473) == ((safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551607UL, ((p_19 && l_2374) || (*l_2308)))), 0x3579L)) , l_2472), p_21)) , l_2481)), l_2418)), 0x4348L));
            --p_2940->g_2490;
        }
    }
    return (*l_2308);
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_382 p_2940->g_2060 p_2940->g_662 p_2940->g_414 p_2940->g_340 p_2940->g_341 p_2940->g_54 p_2940->g_55
 * writes: p_2940->g_382 p_2940->g_2060 p_2940->g_662 p_2940->g_414 p_2940->g_120
 */
int8_t  func_22(int32_t  p_23, uint64_t  p_24, int64_t  p_25, struct S0 * p_2940)
{ /* block id: 1082 */
    int32_t *l_2297[9][4][7] = {{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}},{{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96},{&p_2940->g_62,(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_62,&p_2940->g_96}}};
    int32_t l_2305 = 0x186B95FEL;
    int i, j, k;
    for (p_2940->g_382 = 0; (p_2940->g_382 < 40); p_2940->g_382 = safe_add_func_int32_t_s_s(p_2940->g_382, 3))
    { /* block id: 1085 */
        int32_t *l_2296 = &p_2940->g_2060;
        for (p_2940->g_2060 = (-30); (p_2940->g_2060 <= (-30)); p_2940->g_2060 = safe_add_func_int8_t_s_s(p_2940->g_2060, 3))
        { /* block id: 1088 */
            l_2297[3][3][0] = l_2296;
        }
        for (p_24 = 0; (p_24 < 14); ++p_24)
        { /* block id: 1093 */
            for (p_2940->g_662 = 4; (p_2940->g_662 >= 55); p_2940->g_662 = safe_add_func_uint16_t_u_u(p_2940->g_662, 7))
            { /* block id: 1096 */
                int64_t l_2302[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_2302[i] = (-1L);
                if (l_2302[1])
                    break;
            }
            return p_24;
        }
    }
    for (p_2940->g_414 = 21; (p_2940->g_414 < (-30)); p_2940->g_414 = safe_sub_func_uint8_t_u_u(p_2940->g_414, 7))
    { /* block id: 1104 */
        (**p_2940->g_340) = l_2297[3][3][0];
        return (*p_2940->g_54);
    }
    return l_2305;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_323 p_2940->g_54 p_2940->g_55 p_2940->g_1196 p_2940->g_1197 p_2940->g_233 p_2940->g_1486 p_2940->g_340 p_2940->g_341 p_2940->g_1548 p_2940->g_1258 p_2940->g_103 p_2940->g_60 p_2940->g_121 p_2940->g_92 p_2940->g_1055 p_2940->g_662 p_2940->g_586 p_2940->g_242 p_2940->g_47 p_2940->g_99 p_2940->g_209 p_2940->g_62 p_2940->g_204 p_2940->g_205 p_2940->g_120 p_2940->g_455 p_2940->g_98 p_2940->g_1229 p_2940->g_207 p_2940->g_1997 p_2940->g_1998 p_2940->g_1040 p_2940->g_2161 p_2940->g_97 p_2940->g_3 p_2940->g_414 p_2940->g_238 p_2940->g_56 p_2940->g_2199 p_2940->g_199 p_2940->g_153 p_2940->g_1383 p_2940->g_1436
 * writes: p_2940->g_55 p_2940->g_1486 p_2940->g_1460 p_2940->g_242 p_2940->g_1229 p_2940->g_120 p_2940->g_1258 p_2940->g_207 p_2940->g_153 p_2940->g_414 p_2940->g_1383 p_2940->g_103 p_2940->g_1436 p_2940->g_96 p_2940->g_1997 p_2940->g_662 p_2940->g_47 p_2940->g_43 p_2940->g_233 p_2940->g_474 p_2940->g_455 p_2940->g_97 p_2940->g_98 p_2940->g_209 p_2940->g_238 p_2940->g_382 p_2940->g_99
 */
uint16_t  func_32(uint32_t  p_33, int64_t  p_34, uint8_t  p_35, struct S0 * p_2940)
{ /* block id: 730 */
    int8_t l_1565[1][10][8] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
    uint32_t **l_1572 = &p_2940->g_1040;
    uint32_t ***l_1573 = &l_1572;
    uint16_t *l_1574 = (void*)0;
    uint64_t l_1577 = 0x596996E4F9A7E4E7L;
    uint16_t *l_1578 = &p_2940->g_242[0];
    int32_t *l_1581 = (void*)0;
    int32_t l_1661 = 1L;
    int32_t l_1663 = (-7L);
    int32_t l_1664 = 0x38DDC16CL;
    int32_t l_1666 = (-7L);
    int8_t *l_1676 = &p_2940->g_47;
    int8_t **l_1675 = &l_1676;
    int64_t **l_1680 = &p_2940->g_671[7];
    int32_t l_1895 = 0x78567E69L;
    int32_t l_1900 = (-8L);
    uint64_t l_1901 = 0x547163F740AC22A3L;
    uint32_t ***l_1996 = &l_1572;
    uint64_t **l_2027 = &p_2940->g_1197;
    uint16_t l_2062[9][4] = {{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L},{0xECCDL,0x9ABFL,1UL,0x36B7L}};
    uint64_t *l_2070 = &p_2940->g_1055;
    int8_t l_2080 = 0L;
    int32_t l_2100 = 1L;
    int32_t l_2102[7];
    int64_t l_2235 = 1L;
    uint8_t l_2288[10][5] = {{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L},{8UL,0x47L,0x81L,8UL,0x81L}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_2102[i] = 0x4FA3E607L;
lbl_2109:
    if (((((**p_2940->g_323) ^= 3L) && (safe_add_func_uint16_t_u_u(((*l_1578) = (p_2940->g_1460[1][1] = (safe_div_func_uint8_t_u_u(l_1565[0][0][2], (safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((-1L), (((**p_2940->g_1196) & (((*l_1573) = l_1572) != &p_2940->g_1040)) != ((--p_2940->g_1486) == (((&p_2940->g_1197 != (void*)0) | l_1577) >= (-1L)))))) && l_1565[0][4][7]), p_34)))))), l_1565[0][0][0]))) || 0x536EL))
    { /* block id: 736 */
        int8_t l_1598 = (-1L);
        int32_t l_1600 = 0x651FF839L;
        uint64_t *l_1602[1][10] = {{(void*)0,&p_2940->g_1055,&p_2940->g_1055,&p_2940->g_1055,(void*)0,(void*)0,&p_2940->g_1055,&p_2940->g_1055,&p_2940->g_1055,(void*)0}};
        int32_t l_1618 = (-5L);
        int32_t l_1619 = 0x3B97E9C9L;
        uint64_t l_1631 = 18446744073709551610UL;
        int64_t *l_1679[4];
        int64_t **l_1678 = &l_1679[2];
        int64_t ***l_1677 = &l_1678;
        int64_t l_1744 = 0x61D08FB03B0ACF09L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1679[i] = &p_2940->g_474;
        for (p_2940->g_1229 = 0; (p_2940->g_1229 <= 27); p_2940->g_1229++)
        { /* block id: 739 */
            (**p_2940->g_340) = l_1581;
            (**p_2940->g_340) = l_1581;
            (*p_2940->g_1548) = p_35;
            if (p_33)
                continue;
        }
        for (p_2940->g_207 = (-3); (p_2940->g_207 != 21); p_2940->g_207 = safe_add_func_uint16_t_u_u(p_2940->g_207, 4))
        { /* block id: 747 */
            uint32_t *l_1596 = &p_2940->g_1436;
            uint32_t **l_1595 = &l_1596;
            int32_t **l_1597 = &p_2940->g_1548;
            uint8_t *l_1599[7];
            int32_t *l_1601 = &p_2940->g_121;
            uint8_t l_1616 = 255UL;
            int32_t l_1665 = 0x20267A6BL;
            uint32_t l_1667 = 0x26776E20L;
            uint32_t l_1716 = 0xD1D4D619L;
            uint16_t l_1741 = 0x07E8L;
            int32_t l_1761 = 0L;
            int32_t l_1765 = 9L;
            int32_t l_1771 = 5L;
            uint16_t l_1772 = 0x6819L;
            int i;
            for (i = 0; i < 7; i++)
                l_1599[i] = &p_2940->g_1465;
            (1 + 1);
        }
    }
    else
    { /* block id: 843 */
        int32_t l_1821 = 0L;
        int32_t l_1890[7][9][4] = {{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}},{{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)},{0x360816BEL,0x0DA719A9L,0x23B0EA9FL,(-4L)}}};
        int64_t l_1898 = 0x5767FDF9A97FD982L;
        uint64_t *l_1908 = &l_1577;
        int i, j, k;
        for (p_2940->g_153 = 0; (p_2940->g_153 <= 9); p_2940->g_153 += 1)
        { /* block id: 846 */
            uint64_t l_1814 = 18446744073709551615UL;
            uint8_t l_1867 = 0xD5L;
            int32_t **l_1873 = &p_2940->g_540[2][6];
            int32_t l_1891 = 8L;
            int64_t l_1892 = (-2L);
            int32_t l_1893 = 0x3F2D21BCL;
            int32_t l_1897 = 1L;
            int32_t l_1899 = (-1L);
            uint32_t *l_1957 = &p_2940->g_1436;
            uint32_t **l_1956 = &l_1957;
            for (p_2940->g_414 = 0; (p_2940->g_414 <= 8); p_2940->g_414 += 1)
            { /* block id: 849 */
                int8_t *l_1785[5];
                int32_t l_1786 = 0x1802564DL;
                uint16_t **l_1817 = &l_1578;
                int8_t ***l_1826 = &l_1675;
                int32_t l_1894[5] = {0x09F041BCL,0x09F041BCL,0x09F041BCL,0x09F041BCL,0x09F041BCL};
                int32_t l_1896[2];
                int i;
                for (i = 0; i < 5; i++)
                    l_1785[i] = &p_2940->g_153;
                for (i = 0; i < 2; i++)
                    l_1896[i] = (-1L);
                (1 + 1);
            }
        }
    }
    for (p_2940->g_55 = 4; (p_2940->g_55 != 17); p_2940->g_55 = safe_add_func_int64_t_s_s(p_2940->g_55, 2))
    { /* block id: 915 */
        uint32_t l_1966[5][8] = {{0xA1806F97L,0x8BDA59FDL,0UL,0xC0467193L,0x8BDA59FDL,0xC0467193L,0UL,0x8BDA59FDL},{0xA1806F97L,0x8BDA59FDL,0UL,0xC0467193L,0x8BDA59FDL,0xC0467193L,0UL,0x8BDA59FDL},{0xA1806F97L,0x8BDA59FDL,0UL,0xC0467193L,0x8BDA59FDL,0xC0467193L,0UL,0x8BDA59FDL},{0xA1806F97L,0x8BDA59FDL,0UL,0xC0467193L,0x8BDA59FDL,0xC0467193L,0UL,0x8BDA59FDL},{0xA1806F97L,0x8BDA59FDL,0UL,0xC0467193L,0x8BDA59FDL,0xC0467193L,0UL,0x8BDA59FDL}};
        int i, j;
        for (p_2940->g_1383 = 6; (p_2940->g_1383 == (-8)); p_2940->g_1383 = safe_sub_func_int16_t_s_s(p_2940->g_1383, 6))
        { /* block id: 918 */
            int32_t *l_1962 = (void*)0;
            int32_t l_1963 = 0x7B64038FL;
            int32_t *l_1964 = &p_2940->g_62;
            int32_t *l_1965[4][4][4] = {{{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895}},{{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895}},{{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895}},{{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895},{&l_1900,&l_1900,(void*)0,&l_1895}}};
            int i, j, k;
            --l_1966[1][3];
        }
    }
    if (((*p_2940->g_1548) ^= (safe_add_func_uint64_t_u_u(1UL, (0x6B757A9FAA94474BL < 0x2A5B0EB957B11EDAL)))))
    { /* block id: 923 */
        int64_t l_1971[3][5] = {{0x050545679E12020DL,0x585DA77492FB531EL,0x646E8F22BD769F19L,0x585DA77492FB531EL,0x050545679E12020DL},{0x050545679E12020DL,0x585DA77492FB531EL,0x646E8F22BD769F19L,0x585DA77492FB531EL,0x050545679E12020DL},{0x050545679E12020DL,0x585DA77492FB531EL,0x646E8F22BD769F19L,0x585DA77492FB531EL,0x050545679E12020DL}};
        int32_t l_2004 = 0x5805B911L;
        int32_t l_2009[3][9] = {{(-6L),0x75596BB5L,(-1L),0x75596BB5L,(-6L),(-6L),0x75596BB5L,(-1L),0x75596BB5L},{(-6L),0x75596BB5L,(-1L),0x75596BB5L,(-6L),(-6L),0x75596BB5L,(-1L),0x75596BB5L},{(-6L),0x75596BB5L,(-1L),0x75596BB5L,(-6L),(-6L),0x75596BB5L,(-1L),0x75596BB5L}};
        uint64_t *l_2069 = &p_2940->g_1055;
        uint16_t **l_2074 = &l_1578;
        int32_t l_2135 = 7L;
        uint8_t l_2147 = 0xA0L;
        int64_t *l_2230 = &p_2940->g_474;
        int64_t **l_2229 = &l_2230;
        int64_t ***l_2228 = &l_2229;
        int i, j;
        if ((l_1661 = l_1971[2][3]))
        { /* block id: 925 */
            int32_t l_1987 = 0x21AAB948L;
            int32_t l_2016 = 0x4001F1DAL;
            int32_t l_2098 = 0x3A5D66DBL;
            int32_t l_2099 = (-10L);
            int32_t l_2101 = 0x402ED2FAL;
            int32_t l_2103 = 0x0806DF26L;
            int32_t l_2104[4];
            int64_t l_2105 = 0x37591D7B1C259EDFL;
            uint16_t l_2106 = 0x789CL;
            int64_t l_2190 = 9L;
            int i;
            for (i = 0; i < 4; i++)
                l_2104[i] = 0x5FD61B5DL;
            for (p_2940->g_103 = 0; (p_2940->g_103 <= 0); p_2940->g_103 += 1)
            { /* block id: 928 */
                int32_t l_1988 = (-9L);
                int32_t l_2011 = 0x35D3B9C3L;
                int32_t l_2012[1][10] = {{1L,0x1B2934D5L,0x495DE8DBL,0x1B2934D5L,1L,1L,0x1B2934D5L,0x495DE8DBL,0x1B2934D5L,1L}};
                uint32_t l_2018 = 4294967295UL;
                int8_t l_2058 = (-7L);
                uint32_t *l_2128 = &p_2940->g_92;
                uint16_t l_2171 = 0xC86BL;
                int16_t l_2183[7][3][6] = {{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}},{{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL},{0x750CL,3L,(-1L),0x0BE3L,(-6L),0x750CL}}};
                int i, j, k;
                for (p_2940->g_1436 = 0; (p_2940->g_1436 <= 0); p_2940->g_1436 += 1)
                { /* block id: 931 */
                    uint32_t ****l_1994 = (void*)0;
                    uint32_t ****l_1995 = &l_1573;
                    int32_t l_2005 = 1L;
                    int32_t l_2013 = 0x2794B7C3L;
                    int32_t l_2014 = 0x4AFFB293L;
                    int32_t l_2015 = 0x7166D063L;
                    int32_t l_2017[9][6] = {{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L},{(-1L),(-1L),0x14A864E1L,0x5093B3B6L,0x2F895651L,0x733AC301L}};
                    int i, j;
                    for (p_2940->g_96 = 0; (p_2940->g_96 >= 0); p_2940->g_96 -= 1)
                    { /* block id: 934 */
                        int16_t l_1984 = 1L;
                        int32_t l_1989[3][5] = {{9L,0L,9L,9L,0L},{9L,0L,9L,9L,0L},{9L,0L,9L,9L,0L}};
                        int i, j;
                        l_1989[1][3] &= ((-7L) & ((((+0xB4L) < p_2940->g_60[p_2940->g_103]) ^ (safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(p_2940->g_121, (-1L))), (((*l_1578) = l_1971[0][2]) > ((safe_add_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(l_1984, (safe_mod_func_int16_t_s_s(0x20CEL, 0x15A5L)))) <= p_2940->g_1258), p_35)) != 0x36984867L) | p_35) , 0x30A3F30CL), l_1971[2][3])) <= l_1987)))) , 0x4F025300F119D66EL), p_35))) | l_1988));
                    }
                    l_2004 = (safe_mod_func_int16_t_s_s((p_33 == p_2940->g_92), (safe_mod_func_uint16_t_u_u(((p_34 , ((((*l_1995) = &l_1572) == (p_2940->g_1997 = l_1996)) , ((l_1988 , (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(1L)) != ((((safe_div_func_uint16_t_u_u(((((void*)0 == &p_2940->g_869) || 0x61CF60EB3FB62DF3L) , p_2940->g_1055), 0x56F1L)) || p_34) & p_33) > p_35)), 0x06L))) | 0UL))) < p_35), (-5L)))));
                    (**p_2940->g_340) = &l_1987;
                    for (p_2940->g_662 = 0; (p_2940->g_662 <= 0); p_2940->g_662 += 1)
                    { /* block id: 944 */
                        int32_t *l_2006 = &p_2940->g_62;
                        int32_t *l_2007 = &p_2940->g_121;
                        int32_t *l_2008[9][5][5] = {{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}},{{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0},{&p_2940->g_96,&p_2940->g_3,&p_2940->g_1258,&l_1895,(void*)0}}};
                        int64_t l_2010 = 0x6AB2DAF353A9BF1EL;
                        int i, j, k;
                        if (l_2005)
                            break;
                        l_2018--;
                    }
                }
                for (l_1901 = 0; (l_1901 <= 0); l_1901 += 1)
                { /* block id: 951 */
                    int64_t **l_2056 = (void*)0;
                    int32_t l_2057 = 0L;
                    int32_t *l_2061[8][9] = {{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004},{&l_2011,(void*)0,&p_2940->g_98,&p_2940->g_98,(void*)0,&l_2011,&l_2011,&l_2057,&l_2004}};
                    int i, j;
                    for (l_1666 = 0; (l_1666 <= 0); l_1666 += 1)
                    { /* block id: 954 */
                        int64_t *l_2041 = &l_1971[2][3];
                        int8_t *l_2042 = &p_2940->g_43;
                        int i;
                        (*p_2940->g_1548) ^= (p_2940->g_586[(l_1666 + 3)] < (p_2940->g_242[(p_2940->g_103 + 4)] < ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == l_2027), (((((safe_lshift_func_int8_t_s_s(((*l_1676) |= ((**p_2940->g_323) |= p_35)), ((p_2940->g_99[4][0] == (((*l_2042) = ((((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(p_33)), ((((*l_2041) = ((((safe_lshift_func_uint8_t_u_u((0L ^ (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((~(0x25L >= 0x29L)) >= 1UL), 0)), 6UL)) < p_34) == p_34)), 2)) , l_2012[0][6]) & 2L) || 0xE9D3L)) ^ (**p_2940->g_1196)) < (-1L)))) | (**p_2940->g_1196)) , (void*)0) == p_2940->g_341[(p_2940->g_103 + 1)])) > 0L)) , p_34))) & (**p_2940->g_1196)) | 1UL) >= l_1987) > l_1987))), 0x56L)) != p_33)));
                        l_2011 ^= (((**l_1675) ^= (*p_2940->g_54)) | (safe_mod_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((0x8F1953101E83B9A2L && p_34), (safe_div_func_int32_t_s_s((((((((**l_2027)--) > ((((safe_unary_minus_func_int32_t_s((((l_1900 ^= (safe_add_func_int64_t_s_s(((((l_2016 | (safe_mul_func_int8_t_s_s(p_33, ((((((void*)0 != l_2056) , (l_2057 || 0x6FL)) | (-10L)) , p_33) <= 0x9F540ED4AAAB8B5CL)))) & p_34) || p_34) ^ p_35), l_2058))) | l_2057) > 0x2483L))) < p_33) & p_35) != (-8L))) < l_2016) , 254UL) == l_2012[0][6]) , (-1L)), 1UL)))) >= 0x4E482A9BL) || 0x1188L), 1UL)));
                        (**p_2940->g_340) = ((safe_unary_minus_func_uint8_t_u(p_2940->g_209)) , &l_2004);
                        if (p_35)
                            break;
                    }
                    if (p_34)
                        continue;
                    for (l_1987 = 3; (l_1987 <= 9); l_1987 += 1)
                    { /* block id: 970 */
                        return p_33;
                    }
                    l_2062[7][1]--;
                }
                for (p_2940->g_1258 = 0; (p_2940->g_1258 <= 0); p_2940->g_1258 += 1)
                { /* block id: 977 */
                    uint64_t **l_2071 = &l_2070;
                    uint16_t **l_2073[7] = {&l_1578,&l_1574,&l_1578,&l_1578,&l_1574,&l_1578,&l_1578};
                    uint16_t ***l_2072 = &l_2073[4];
                    int32_t l_2079[2][4][4] = {{{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)}},{{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)},{0x234A168EL,0x287D3557L,0L,(-1L)}}};
                    int64_t *l_2081 = (void*)0;
                    int64_t *l_2082 = (void*)0;
                    int64_t *l_2083 = &p_2940->g_474;
                    uint32_t *l_2086 = &p_2940->g_1436;
                    uint32_t **l_2085[2];
                    uint32_t ***l_2084 = &l_2085[0];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_2085[i] = &l_2086;
                    (**p_2940->g_340) = &l_1666;
                    if ((p_34 || (((((*l_2083) = ((safe_sub_func_int16_t_s_s(p_34, (safe_add_func_int64_t_s_s((l_2069 == ((*l_2071) = l_2070)), (((*l_2072) = (void*)0) == l_2074))))) <= ((**p_2940->g_323) = (((safe_mul_func_uint8_t_u_u(p_2940->g_103, ((safe_rshift_func_uint8_t_u_u(p_34, (p_2940->g_62 > l_2079[1][3][0]))) | l_2080))) , &p_2940->g_662) == &p_33)))) , p_35) || p_35) & 0x30L)))
                    { /* block id: 983 */
                        uint32_t *l_2091 = (void*)0;
                        int8_t l_2096 = 0L;
                        int32_t *l_2097[9] = {&l_2009[0][6],&p_2940->g_3,&l_2009[0][6],&l_2009[0][6],&p_2940->g_3,&l_2009[0][6],&l_2009[0][6],&p_2940->g_3,&l_2009[0][6]};
                        int i;
                        (***p_2940->g_204) |= (-9L);
                        (**p_2940->g_205) ^= ((*p_2940->g_1197) == ((l_2009[1][0] , ((void*)0 == l_2084)) , (safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((l_2016 = l_2079[1][2][3]) & (p_2940->g_455--)), ((p_35 > (safe_rshift_func_uint16_t_u_s(l_1988, (0x0205L != ((**l_2074) = 65531UL))))) != l_2096))) ^ p_33), l_1987))));
                        --l_2106;
                        (**p_2940->g_340) = (**p_2940->g_340);
                    }
                    else
                    { /* block id: 991 */
                        if (p_2940->g_1486)
                            goto lbl_2109;
                        (**p_2940->g_340) = &l_2012[0][6];
                        return p_2940->g_98;
                    }
                    if ((l_2103 |= (safe_mod_func_int16_t_s_s(0x388BL, (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_2135 |= (((safe_mul_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_s(p_35, 10)) >= (p_2940->g_242[0] >= 1L)) <= (l_2012[0][6] = ((((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((void*)0 != l_2128), (**p_2940->g_1196))), ((*p_2940->g_120) = 0x0C6B2B10L))) || ((((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(l_2004, p_35)), l_1971[2][3])), p_35)) , p_34) , 7L) > l_2009[0][1])) && 0xD65D3A8CL) || 0x90EDL))) , l_2086) != &p_2940->g_101), 1L)) , p_2940->g_1229) , p_33)), p_34)) != (*p_2940->g_1197)), (*p_2940->g_54))), p_35))))))
                    { /* block id: 1000 */
                        int32_t *l_2136 = &l_2099;
                        int32_t *l_2137 = &p_2940->g_96;
                        int32_t *l_2138 = &l_2103;
                        int32_t *l_2139 = &l_2098;
                        int32_t *l_2140 = &l_2079[1][3][0];
                        int32_t *l_2141 = &l_2009[0][1];
                        int32_t *l_2142 = &l_2101;
                        int32_t *l_2143 = (void*)0;
                        int32_t *l_2144 = &l_2100;
                        int32_t *l_2145 = &l_1664;
                        int32_t *l_2146[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_2146[i] = &l_2102[4];
                        (***p_2940->g_340) &= p_33;
                        l_2147--;
                    }
                    else
                    { /* block id: 1003 */
                        return p_35;
                    }
                }
                for (p_2940->g_207 = 0; (p_2940->g_207 <= 0); p_2940->g_207 += 1)
                { /* block id: 1009 */
                    int32_t l_2158 = 1L;
                    int16_t *l_2162 = &p_2940->g_414;
                    int32_t l_2175 = 8L;
                    if (((((safe_lshift_func_int16_t_s_u(((*l_2162) = ((safe_mod_func_uint32_t_u_u(((*p_2940->g_340) != ((&p_33 != ((((((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((void*)0 == (**p_2940->g_1997)), (1UL ^ l_2158))) , p_34), (safe_lshift_func_uint8_t_u_u(p_2940->g_207, p_2940->g_121)))) , p_33) | p_2940->g_2161) <= p_33) > p_34) , (void*)0)) , (void*)0)), 0x877A1906L)) <= 65534UL)), p_33)) || p_33) >= p_34) >= l_2158))
                    { /* block id: 1011 */
                        int16_t l_2172 = 0x04F8L;
                        uint8_t *l_2173 = &l_2147;
                        int16_t *l_2174[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2174[i] = &p_2940->g_97;
                        l_1666 ^= (safe_mod_func_int16_t_s_s((+(-7L)), (+((safe_mul_func_int16_t_s_s(((l_2175 = (p_2940->g_97 &= ((*l_2162) = (safe_div_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s(0L, l_2171)) ^ (!0x1EFD8408L)) > l_2101) == l_2172), (l_2016 &= (l_2172 , ((((((*l_2173) = (p_34 || p_33)) > l_1971[1][0]) == 0xA2FD3A6AL) , (void*)0) == (void*)0)))))))) | p_33), (-1L))) , p_2940->g_1229))));
                    }
                    else
                    { /* block id: 1018 */
                        int32_t l_2178[6][6] = {{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L},{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L},{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L},{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L},{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L},{(-1L),0x41DAA901L,0x3F132F0AL,0L,0x41DAA901L,0L}};
                        int32_t *l_2188 = &p_2940->g_98;
                        int i, j;
                        l_2011 ^= ((*p_2940->g_1548) ^= (safe_div_func_int32_t_s_s((((*l_2162) &= ((!((void*)0 != &p_2940->g_1290)) | ((l_2178[2][0] = (-5L)) , (((((safe_add_func_uint16_t_u_u(0xD4E1L, (safe_sub_func_uint16_t_u_u(((*l_1578) = l_2183[0][1][1]), (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_2940->g_3, 5)), (&l_2106 != &l_2062[7][1]))))))) , p_34) <= p_34) | p_33) == p_35)))) , l_2178[2][0]), 1L)));
                        (*l_2188) = ((*p_2940->g_1548) = p_34);
                    }
                }
            }
            for (p_2940->g_209 = 2; (p_2940->g_209 <= 6); p_2940->g_209 += 1)
            { /* block id: 1031 */
                uint32_t l_2194 = 5UL;
                for (p_2940->g_238 = 0; (p_2940->g_238 <= 3); p_2940->g_238 += 1)
                { /* block id: 1034 */
                    int8_t l_2189[10][7] = {{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)},{0x60L,(-1L),(-1L),0x60L,0x60L,(-1L),(-1L)}};
                    int32_t *l_2191 = &p_2940->g_98;
                    int32_t *l_2192 = &p_2940->g_1258;
                    int32_t *l_2193[10] = {&p_2940->g_62,&l_2009[0][6],&p_2940->g_62,&p_2940->g_62,&l_2009[0][6],&p_2940->g_62,&p_2940->g_62,&l_2009[0][6],&p_2940->g_62,&p_2940->g_62};
                    int i, j;
                    --l_2194;
                    for (l_2147 = 0; (l_2147 <= 3); l_2147 += 1)
                    { /* block id: 1038 */
                        int i;
                        return p_2940->g_56[p_2940->g_209];
                    }
                }
            }
        }
        else
        { /* block id: 1043 */
            int32_t l_2206 = 0x2B114AF0L;
            int32_t l_2234 = 9L;
            uint32_t **l_2242 = (void*)0;
            uint32_t ***l_2241[1][2];
            int64_t *l_2257 = &l_2235;
            int64_t *l_2258 = &p_2940->g_99[3][0];
            int64_t *l_2259 = &l_1971[2][3];
            int64_t l_2262 = 1L;
            uint32_t **l_2265 = (void*)0;
            int32_t l_2268 = 0x25D0BC5DL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2241[i][j] = &l_2242;
            }
            for (l_1661 = (-24); (l_1661 > 28); l_1661 = safe_add_func_uint16_t_u_u(l_1661, 7))
            { /* block id: 1046 */
                int64_t ***l_2231 = &l_2229;
                int32_t l_2252 = 0x364FEF53L;
                for (p_2940->g_414 = 0; (p_2940->g_414 <= 3); p_2940->g_414 += 1)
                { /* block id: 1049 */
                    uint64_t l_2209 = 0xCC9464E201A34EA8L;
                    int32_t l_2238 = (-8L);
                    if ((p_35 > (p_2940->g_2199 <= ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_1971[0][2], (safe_rshift_func_int8_t_s_s(0x4BL, 1)))), ((l_2206 ^= p_34) >= ((p_33 , ((l_1971[0][4] || (safe_rshift_func_uint16_t_u_s(p_2940->g_2199, l_2209))) | 0x25L)) ^ (**p_2940->g_1196))))) ^ l_2004))))
                    { /* block id: 1051 */
                        int64_t ***l_2232 = &l_2229;
                        int32_t l_2233 = 0x06B85F59L;
                        int16_t *l_2236 = (void*)0;
                        int16_t *l_2237 = &p_2940->g_97;
                        l_2238 = (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((*l_1676) ^= p_33), 4)), 7UL)) < 4294967287UL) | (*p_2940->g_54)), (safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u(((*l_2237) &= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(0x6D7EL, (((l_2234 ^= (((~l_2009[0][6]) && p_2940->g_1229) < (safe_mul_func_int16_t_s_s(((((l_2231 = l_2228) != l_2232) && l_2233) && 6UL), l_2206)))) & p_35) || 18446744073709551613UL))), 0)) > l_2235)), 15)) , 0x75L) ^ l_2233), 1UL)))) != 0x34L), p_2940->g_55));
                    }
                    else
                    { /* block id: 1057 */
                        int64_t *l_2247[9][1] = {{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416},{&p_2940->g_416}};
                        int i, j;
                        l_2238 = ((0x25L != (p_2940->g_382 = 0UL)) != (safe_rshift_func_uint8_t_u_s(((p_34 &= ((1L || ((0x7B5D1CB6L < (p_2940->g_199[1] <= (((p_35 && (l_2241[0][1] == (void*)0)) , (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(0x3BL, 2)) > (**p_2940->g_323)), p_35))) == 0x80L))) || (**p_2940->g_323))) || l_2238)) >= p_35), 4)));
                        if (l_2234)
                            continue;
                    }
                }
                (*p_2940->g_1548) |= ((safe_rshift_func_int16_t_s_s((l_2252 != (l_2252 >= l_1971[2][3])), 5)) & p_35);
            }
            l_2100 |= (safe_rshift_func_int8_t_s_s(((*p_2940->g_54) = (((l_2206 ^ (safe_add_func_int64_t_s_s(((l_2206 != l_2206) , ((*l_2258) = ((*l_2257) = l_2004))), ((*l_2259) |= l_2234)))) == (safe_rshift_func_uint16_t_u_u(l_2262, ((safe_rshift_func_uint8_t_u_s((l_2265 == (*p_2940->g_1997)), (((safe_rshift_func_int16_t_s_s(p_2940->g_60[3], l_2268)) > l_2268) , (*p_2940->g_54)))) && p_35)))) <= l_2234)), 7));
        }
    }
    else
    { /* block id: 1072 */
        int8_t l_2271 = 6L;
        int32_t l_2289 = (-7L);
        l_2289 ^= ((((safe_mul_func_int16_t_s_s(l_2271, l_1661)) == (((p_34 == (safe_div_func_uint32_t_u_u(l_2271, (safe_mod_func_uint16_t_u_u(p_35, (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((-1L), (((*l_1578) &= (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(8L, ((**l_1675) = ((**p_2940->g_323) |= 0x5DL)))), (l_2288[6][1] = (safe_rshift_func_uint8_t_u_s(p_34, l_2271))))) & l_2271) , 0x1C0D400C683D18CDL) , 0x364BFA3CL), p_33))) | 0L))), 0xDC49L))))))) >= p_34) == p_33)) , l_2271) || p_33);
        return l_2271;
    }
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_207 p_2940->g_240 p_2940->g_831 p_2940->g_323 p_2940->g_54 p_2940->g_55 p_2940->g_869 p_2940->g_47 p_2940->g_382 p_2940->g_209 p_2940->g_242 p_2940->g_92 p_2940->g_103 p_2940->g_97 p_2940->g_1196 p_2940->g_1197 p_2940->g_233 p_2940->g_199 p_2940->g_1229 p_2940->g_455 p_2940->g_179 p_2940->g_1055 p_2940->g_60 p_2940->g_340 p_2940->g_341 p_2940->g_414 p_2940->g_96 p_2940->g_586 p_2940->g_153 p_2940->g_62 p_2940->g_98 p_2940->g_120 p_2940->g_1290 p_2940->g_121 p_2940->g_3 p_2940->g_1394 p_2940->g_205 p_2940->g_488 p_2940->g_1397 p_2940->g_238 p_2940->g_1434 p_2940->g_99 p_2940->g_1258 p_2940->g_416 p_2940->g_540 p_2940->g_1460 p_2940->g_1465 p_2940->g_1486 p_2940->g_716 p_2940->g_717 p_2940->g_1548
 * writes: p_2940->g_240 p_2940->g_233 p_2940->g_47 p_2940->g_382 p_2940->g_869 p_2940->g_242 p_2940->g_1196 p_2940->g_97 p_2940->g_55 p_2940->g_1229 p_2940->g_455 p_2940->g_1055 p_2940->g_120 p_2940->g_414 p_2940->g_96 p_2940->g_1258 p_2940->g_121 p_2940->g_153 p_2940->g_1040 p_2940->g_92 p_2940->g_179 p_2940->g_1290 p_2940->g_98 p_2940->g_62 p_2940->g_207 p_2940->g_1383 p_2940->g_1436 p_2940->g_416 p_2940->g_1465 p_2940->g_209 p_2940->g_1486 p_2940->g_670 p_2940->g_1513 p_2940->g_474 p_2940->g_1460 p_2940->g_60
 */
int8_t  func_36(int8_t  p_37, uint32_t  p_38, int16_t  p_39, uint8_t  p_40, int64_t  p_41, struct S0 * p_2940)
{ /* block id: 542 */
    uint64_t *l_1129 = &p_2940->g_240;
    int32_t l_1134 = 0x397BECE6L;
    int32_t ****l_1141 = &p_2940->g_340;
    uint64_t *l_1142 = (void*)0;
    uint64_t *l_1143 = &p_2940->g_233;
    int16_t *l_1208 = &p_2940->g_97;
    int64_t l_1259 = (-7L);
    int8_t ***l_1288 = (void*)0;
    int8_t l_1296 = (-10L);
    int32_t *l_1300 = &p_2940->g_62;
    uint32_t l_1320[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int32_t l_1368 = (-1L);
    int64_t l_1393 = 9L;
    int32_t l_1402 = 1L;
    int32_t l_1475 = 0x18BC8C78L;
    int32_t l_1477 = 0x49AC4016L;
    int32_t l_1479 = (-6L);
    int32_t l_1481 = (-9L);
    int32_t l_1484 = 0x55F9C28DL;
    int32_t l_1485 = 0x0FCDBFC3L;
    int64_t *l_1496 = &p_2940->g_474;
    int64_t **l_1495 = &l_1496;
    int64_t ***l_1512[10][8] = {{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670},{&p_2940->g_670,(void*)0,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,&p_2940->g_670,(void*)0,&p_2940->g_670}};
    uint8_t l_1518[7][7] = {{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL},{0x68L,0xB4L,0xB4L,0x68L,0x5DL,0UL,0UL}};
    uint64_t l_1519 = 1UL;
    int32_t *l_1520 = (void*)0;
    int32_t *l_1521 = &l_1368;
    uint32_t l_1539 = 0xFE26C17CL;
    int32_t *l_1540 = &p_2940->g_60[8];
    uint8_t *l_1541 = &p_2940->g_382;
    uint8_t *l_1542 = &p_2940->g_1465;
    int32_t *l_1543 = &p_2940->g_1258;
    uint16_t *l_1551 = &p_2940->g_1460[1][1];
    int8_t **l_1558[1][1];
    uint32_t l_1559 = 0xCBA97DF9L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1558[i][j] = &p_2940->g_54;
    }
    if (((((((*l_1143) = ((((safe_mod_func_uint64_t_u_u(p_2940->g_207, (--(*l_1129)))) || p_38) != (safe_add_func_int32_t_s_s((l_1134 && ((p_40 && p_37) & (safe_mul_func_uint16_t_u_u((+((p_40 && (p_2940->g_831 , (+(((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((p_40 , l_1141) != l_1141), 255UL)), 2)) , &p_38) != &p_38)))) > p_41)), p_37)))), p_38))) > p_41)) == 1L) && (-4L)) | (**p_2940->g_323)) , p_38))
    { /* block id: 545 */
        uint8_t l_1144[6][7][1] = {{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}}};
        int32_t l_1147 = 0x06CCB0ADL;
        int32_t l_1156 = 1L;
        int32_t *l_1157 = &l_1147;
        int8_t *l_1164 = &p_2940->g_47;
        int32_t l_1165 = 0x109E1226L;
        uint8_t *l_1166[4];
        int64_t l_1181[7][8];
        uint8_t l_1207[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        uint32_t **l_1245 = &p_2940->g_1040;
        int32_t ****l_1265 = (void*)0;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1166[i] = (void*)0;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 8; j++)
                l_1181[i][j] = 0x440CBF7FCB451CACL;
        }
        l_1144[2][5][0]--;
        l_1147 = p_41;
        if ((((*l_1129)++) || ((safe_div_func_uint64_t_u_u((~((p_2940->g_382 &= ((p_37 ^ (((safe_div_func_uint32_t_u_u((((*l_1129) ^= ((safe_mul_func_uint16_t_u_u((((((*l_1157) |= l_1156) ^ (p_2940->g_869 && ((0x6B68654EE65BD792L == ((((safe_add_func_uint32_t_u_u((((p_41 <= 0x2B50D49AA82C1BCBL) <= ((p_41 && ((*p_2940->g_54) < ((*l_1164) |= ((safe_sub_func_int64_t_s_s(p_37, 5L)) < 9L)))) <= p_38)) || p_39), p_41)) > p_38) > 0UL) <= 0x25L)) != 3UL))) >= p_39) | p_41), l_1165)) || p_37)) > p_41), p_38)) && 0x4DL) && p_39)) <= p_41)) > 0x21L)), l_1144[2][5][0])) || p_2940->g_209)))
        { /* block id: 553 */
            return p_37;
        }
        else
        { /* block id: 555 */
            int32_t *l_1167 = &p_2940->g_869;
            uint8_t *l_1176 = &l_1144[2][4][0];
            int32_t l_1185 = 0L;
            uint64_t **l_1199[2][3][8] = {{{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129},{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129},{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129}},{{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129},{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129},{&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129,&l_1129}}};
            uint16_t l_1228 = 0x380BL;
            int8_t l_1246 = 9L;
            uint32_t *l_1276 = &p_2940->g_92;
            int32_t l_1295 = 0x3C36BFD8L;
            uint16_t l_1297 = 0x0F5AL;
            int i, j, k;
            if ((((*l_1167) &= ((void*)0 == &l_1134)) , ((*l_1157) , (&p_2940->g_716 == (void*)0))))
            { /* block id: 557 */
                uint16_t *l_1182[8] = {&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0],&p_2940->g_242[0]};
                int16_t *l_1183[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]},{(void*)0,(void*)0,(void*)0,(void*)0,&p_2940->g_831,(void*)0,&p_2940->g_414,&p_2940->g_56[5]}};
                int32_t l_1184 = 0x757FAF1CL;
                int32_t *l_1186 = (void*)0;
                int32_t *l_1187[8];
                uint64_t ***l_1198 = &p_2940->g_1196;
                uint32_t **l_1204 = (void*)0;
                int64_t l_1209 = 0x42898A85207FA1FFL;
                int i, j;
                for (i = 0; i < 8; i++)
                    l_1187[i] = &l_1156;
                l_1134 = (safe_mul_func_int8_t_s_s(0L, ((*l_1157) = ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0UL ^ (safe_sub_func_int64_t_s_s(((void*)0 != l_1176), 0x4DED6A9B7B20139BL))), 2)), (safe_mul_func_int8_t_s_s(((l_1185 = (p_39 = (l_1184 ^= (((0xF5E5L || ((safe_div_func_int16_t_s_s(0x1F49L, (p_2940->g_242[8] |= l_1181[0][2]))) > (p_39 , 0x97E4L))) == p_2940->g_92) > p_2940->g_103)))) < p_2940->g_97), 6UL)))) > 0x56F64A6826ABC328L))));
                l_1156 ^= ((!(((*l_1157) < (((safe_rshift_func_uint8_t_u_s((((*l_1208) = (~(safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((p_39 >= (((((safe_lshift_func_int16_t_s_u(p_38, (((*l_1198) = p_2940->g_1196) != l_1199[0][2][4]))) | (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((void*)0 == l_1204), ((*p_2940->g_1197) & (safe_lshift_func_int8_t_s_s(l_1207[8], 5))))), p_2940->g_831))) , &p_39) == l_1208) , 18446744073709551608UL)), 13)), l_1185)))) == p_41), 6)) && l_1209) ^ p_37)) <= p_41)) > p_2940->g_240);
                p_2940->g_1229 ^= ((safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_38, ((*p_2940->g_54) = (**p_2940->g_323)))), ((void*)0 != &p_37))), ((safe_add_func_int16_t_s_s(p_40, 0x036DL)) , p_38))) != (safe_sub_func_int32_t_s_s((((safe_div_func_uint16_t_u_u(((((p_38 ^ ((safe_div_func_uint8_t_u_u((--p_2940->g_382), (*l_1157))) == l_1228)) ^ l_1228) || 0L) , l_1185), (*l_1157))) > p_40) || 0x47L), p_40))), p_2940->g_199[7])) <= p_41);
                for (p_2940->g_455 = 1; (p_2940->g_455 <= 7); p_2940->g_455 += 1)
                { /* block id: 572 */
                    int32_t l_1239 = 6L;
                    uint64_t *l_1240 = &p_2940->g_1055;
                    int i;
                    l_1187[5] = &l_1185;
                    (**p_2940->g_340) = ((p_40 & (safe_mul_func_int8_t_s_s((((p_37 , (!(safe_rshift_func_int16_t_s_s(p_2940->g_179, 0)))) != p_38) , ((*l_1164) ^= (safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(((((*l_1240) &= (safe_unary_minus_func_uint16_t_u(l_1239))) , (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(1UL, ((((((((*p_2940->g_54) , (((((void*)0 == l_1245) == (*p_2940->g_54)) || p_37) <= p_39)) != 0x1BL) , 255UL) >= (**p_2940->g_323)) & 0UL) && p_41) , p_2940->g_60[6]))), 0x51L)) >= (*l_1157)) && (-1L))) || p_38), 5)) , 0xFDL) & 0x60L), (*p_2940->g_54))))), l_1246))) , &l_1239);
                }
            }
            else
            { /* block id: 578 */
                int64_t *l_1255 = &p_2940->g_474;
                for (p_2940->g_414 = 1; (p_2940->g_414 >= 0); p_2940->g_414 -= 1)
                { /* block id: 581 */
                    int16_t l_1256 = 0x4698L;
                    for (p_2940->g_96 = 1; (p_2940->g_96 >= 0); p_2940->g_96 -= 1)
                    { /* block id: 584 */
                        int i;
                        if (p_2940->g_586[p_2940->g_414])
                            break;
                        return (**p_2940->g_323);
                    }
                    for (p_38 = 0; (p_38 <= 1); p_38 += 1)
                    { /* block id: 590 */
                        int64_t *l_1248 = (void*)0;
                        int64_t *l_1249[8] = {&l_1181[0][2],&l_1181[0][2],&l_1181[0][2],&l_1181[0][2],&l_1181[0][2],&l_1181[0][2],&l_1181[0][2],&l_1181[0][2]};
                        int8_t l_1250 = 0x48L;
                        int32_t l_1257[1][3][9] = {{{0x53E01D8FL,1L,1L,1L,0x53E01D8FL,0x53E01D8FL,1L,1L,1L},{0x53E01D8FL,1L,1L,1L,0x53E01D8FL,0x53E01D8FL,1L,1L,1L},{0x53E01D8FL,1L,1L,1L,0x53E01D8FL,0x53E01D8FL,1L,1L,1L}}};
                        int32_t *l_1260 = &p_2940->g_121;
                        int i, j, k;
                        (*l_1260) = (((safe_unary_minus_func_int64_t_s(((*l_1157) = (p_41 = 0x3D839DD5842D2B54L)))) , (p_41 = l_1250)) , ((p_2940->g_1258 = (l_1257[0][1][3] = ((l_1250 , (-5L)) , (((*p_2940->g_1197) = (((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((-3L), 4)) || p_37), (((void*)0 != l_1255) | (l_1256 <= p_38)))) >= p_37) || p_37)) || 18446744073709551615UL)))) >= l_1259));
                    }
                    if (p_41)
                        continue;
                    for (p_2940->g_153 = 1; (p_2940->g_153 >= 0); p_2940->g_153 -= 1)
                    { /* block id: 602 */
                        return p_40;
                    }
                }
                for (p_37 = 6; (p_37 >= 1); p_37 -= 1)
                { /* block id: 608 */
                    (***l_1141) = &l_1165;
                }
            }
            l_1185 |= ((p_2940->g_199[7] == p_41) > ((void*)0 != &p_2940->g_341[1]));
            (*l_1157) = ((((void*)0 != l_1167) , (l_1167 != ((*l_1245) = (((((**p_2940->g_1196) = (l_1228 <= ((*l_1157) ^ (((safe_div_func_uint16_t_u_u(p_2940->g_382, (safe_mod_func_uint64_t_u_u((l_1265 != &p_2940->g_340), ((safe_mul_func_uint8_t_u_u((0L != 0xE152L), 0x12L)) & p_2940->g_62))))) ^ l_1246) < 0x435F85BED5715E7BL)))) <= 18446744073709551615UL) == 4294967295UL) , (void*)0)))) < p_37);
            if ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_2940->g_179 ^= (p_2940->g_55 | (safe_sub_func_uint8_t_u_u(247UL, ((((*l_1276) &= (safe_add_func_int32_t_s_s((-1L), (l_1185 = l_1246)))) >= 0xA194B0E0L) , (*l_1157)))))), ((0x7006D2F4CEA00D24L == l_1228) || 0x76E78CFDL))), 0x63L)))
            { /* block id: 619 */
                int32_t *l_1277 = &p_2940->g_98;
                int8_t ****l_1289[3][2];
                uint32_t *l_1291 = &p_2940->g_455;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1289[i][j] = (void*)0;
                }
                (***l_1141) = l_1277;
                (*p_2940->g_120) = ((safe_add_func_int32_t_s_s(((*l_1157) == ((*l_1291) |= (l_1228 != (safe_mod_func_uint64_t_u_u(((*p_2940->g_1197) |= ((*l_1157) | ((*l_1277) , (((****l_1141) > (safe_mod_func_int32_t_s_s((*p_2940->g_120), (safe_lshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((*l_1276) &= (l_1288 == (p_2940->g_1290 = (void*)0))), 0xA580A2BCL)) , p_39) | 1UL), 4))))) , (*l_1157))))), p_38))))), p_40)) , (****l_1141));
                return (****l_1141);
            }
            else
            { /* block id: 627 */
                int32_t l_1292 = (-4L);
                int32_t l_1293 = 0x2C6F4218L;
                int32_t *l_1294[1][9] = {{&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98,&p_2940->g_98}};
                int i, j;
                l_1297++;
            }
        }
        l_1300 = &l_1156;
    }
    else
    { /* block id: 632 */
        int32_t l_1301 = 0x63C9D73BL;
        uint64_t *l_1310 = &p_2940->g_233;
        uint16_t *l_1319 = &p_2940->g_242[3];
        int32_t *l_1321 = &p_2940->g_121;
        int32_t l_1362 = 1L;
        int32_t l_1363 = 0x5F2DB9A0L;
        int32_t l_1365 = 4L;
        int32_t l_1476 = 0x2DB5F999L;
        int32_t l_1478 = 0x4A24E80DL;
        int32_t l_1480 = 8L;
        int32_t l_1482 = 4L;
        int32_t l_1483[10] = {3L,0x7E2F6424L,3L,3L,0x7E2F6424L,3L,3L,0x7E2F6424L,3L,3L};
        uint16_t l_1507 = 65535UL;
        int i;
        (*l_1321) ^= ((*l_1300) = ((((*p_2940->g_54) >= (l_1301 == (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((p_37 , (safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((((((void*)0 != &p_2940->g_382) , (((l_1310 != ((((((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(((void*)0 == l_1300), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((*l_1319) = (((*l_1300) || l_1301) <= 0L)), 0)), 0UL)))) , 4294967293UL) & l_1301), (***p_2940->g_1290))) == p_40) > 0x1CL) & 0x794CCCE3585B473FL) ^ p_37) , l_1310)) != 0x75F1L) <= 0x58L)) & 4294967293UL) || 2L) | 0UL), l_1301)) != p_39), (*l_1300)))), p_39)) ^ 0x633A8625385A8165L), 0L)))) | 0L) , l_1320[0]));
        for (l_1259 = 26; (l_1259 == 17); l_1259 = safe_sub_func_uint32_t_u_u(l_1259, 8))
        { /* block id: 638 */
            int32_t *l_1324[6][1] = {{&p_2940->g_869},{&p_2940->g_869},{&p_2940->g_869},{&p_2940->g_869},{&p_2940->g_869},{&p_2940->g_869}};
            int i, j;
            (*l_1321) = (&p_2940->g_869 == l_1324[4][0]);
        }
        for (p_41 = (-6); (p_41 <= 2); p_41 = safe_add_func_int8_t_s_s(p_41, 1))
        { /* block id: 643 */
            int32_t l_1329 = 1L;
            int32_t l_1338 = 0x52F1D0B8L;
            int32_t l_1339[2];
            int32_t *l_1350 = &l_1338;
            uint32_t l_1372 = 0x3F54E3BFL;
            int8_t l_1437[10][6] = {{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L},{0x50L,0x50L,0x50L,0x50L,0x50L,0x50L}};
            int32_t *l_1469[7][10] = {{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0},{&l_1363,&l_1339[0],(void*)0,&l_1363,&l_1338,(void*)0,(void*)0,&l_1338,&l_1363,(void*)0}};
            uint32_t l_1474 = 0UL;
            int64_t ***l_1497 = &l_1495;
            int8_t ****l_1504[6][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1339[i] = (-1L);
            for (p_2940->g_207 = 26; (p_2940->g_207 > 3); p_2940->g_207 = safe_sub_func_uint64_t_u_u(p_2940->g_207, 3))
            { /* block id: 646 */
                (*l_1321) = l_1329;
            }
            for (p_2940->g_97 = (-11); (p_2940->g_97 <= (-11)); p_2940->g_97 = safe_add_func_uint64_t_u_u(p_2940->g_97, 6))
            { /* block id: 651 */
                int16_t *l_1332[5] = {&p_2940->g_831,&p_2940->g_831,&p_2940->g_831,&p_2940->g_831,&p_2940->g_831};
                int64_t l_1333 = 0x2723C8B46FD2E7FBL;
                uint32_t *l_1340 = &p_2940->g_92;
                uint32_t *l_1343 = &p_2940->g_455;
                uint8_t *l_1348 = &p_2940->g_382;
                int32_t l_1358 = (-7L);
                int32_t l_1359 = 1L;
                int32_t l_1369 = 0L;
                uint32_t *l_1435 = &p_2940->g_1436;
                uint32_t l_1472 = 0xEEE79A2EL;
                int i;
                if ((((((+0x3868L) < (l_1333 = ((void*)0 == &p_2940->g_179))) & (safe_mod_func_int8_t_s_s(((*p_2940->g_54) = ((4294967290UL & l_1329) & ((p_39 > ((*l_1343) &= (--(*l_1340)))) == p_37))), (safe_rshift_func_int8_t_s_u(l_1329, 0))))) || ((*l_1348) |= (((safe_rshift_func_uint8_t_u_u(l_1333, 0)) || (**p_2940->g_1196)) == 0x3AL))) != p_37))
                { /* block id: 657 */
                    int32_t *l_1349 = &p_2940->g_3;
                    int32_t l_1355 = 0x6DF05788L;
                    int32_t l_1356 = 0x6BC023A2L;
                    int32_t l_1357 = 0x60194343L;
                    int32_t l_1360 = 0x0F9487CCL;
                    int32_t l_1361 = 0x0468C108L;
                    int32_t l_1364 = 0x070CD520L;
                    int32_t l_1366 = (-6L);
                    int32_t l_1367 = 0x5E900BAEL;
                    int32_t l_1371[7][2][8] = {{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}},{{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L},{0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L,0x3E3DFE68L,0x134DF18BL,0x134DF18BL,0x3E3DFE68L}}};
                    int i, j, k;
                    if (p_41)
                        break;
                    l_1350 = l_1349;
                    (***l_1141) = l_1321;
                    for (p_40 = 0; (p_40 <= 30); p_40 = safe_add_func_int32_t_s_s(p_40, 1))
                    { /* block id: 663 */
                        int32_t *l_1353 = &p_2940->g_62;
                        int32_t *l_1354[3];
                        int8_t l_1370 = (-6L);
                        int32_t *l_1381 = &p_2940->g_869;
                        int32_t *l_1382 = &p_2940->g_1383;
                        int64_t *l_1396 = &p_2940->g_474;
                        int64_t **l_1395 = &l_1396;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1354[i] = &p_2940->g_62;
                        (*l_1300) |= (p_2940->g_869 || (*p_2940->g_54));
                        ++l_1372;
                        (*l_1300) = (((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((((safe_mul_func_int16_t_s_s((((((((*l_1382) = ((*l_1381) |= (*l_1321))) , (((safe_mod_func_int8_t_s_s(((*p_2940->g_54) &= (*l_1350)), (*l_1321))) || (+(((*l_1343)++) >= ((((****l_1141) &= ((safe_mod_func_uint32_t_u_u(1UL, (safe_unary_minus_func_int32_t_s(((safe_lshift_func_int16_t_s_s((*l_1350), 8)) | (((p_37 || p_40) == (p_38 , l_1358)) >= p_37)))))) , l_1393)) , 0x1A1F9064841ED22EL) ^ (*l_1350))))) , p_2940->g_1394)) , 1UL) >= p_37) ^ p_39) == (*l_1300)), (*l_1349))) , (**p_2940->g_205)) , (*p_2940->g_488)) , p_40), p_41)), (*l_1350))) , l_1395) == p_2940->g_1397);
                        (**p_2940->g_340) = (***l_1141);
                    }
                }
                else
                { /* block id: 674 */
                    return l_1333;
                }
                if ((*l_1300))
                    continue;
                (**p_2940->g_340) = (***l_1141);
                if (((((((****l_1141) < (safe_rshift_func_int16_t_s_u(((((****l_1141) || (+l_1402)) > ((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s((p_2940->g_238 ^ l_1359), (safe_rshift_func_uint8_t_u_s(p_37, (((!(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((*l_1350), ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((((*l_1435) = ((((*l_1319) = (safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((~p_41), 15)), (safe_sub_func_uint64_t_u_u(((p_41 > l_1369) ^ p_2940->g_1434[0][2]), p_38)))))), 0xD9L)), (****l_1141))) >= p_2940->g_99[2][0]), (*l_1300)))) >= p_2940->g_414) >= (*l_1350))) , 18446744073709551615UL) | p_37) , l_1369), 1)), p_2940->g_1258)) , 0xBD85L))), 0L)) == l_1437[0][4]) | 0x24L) & 255UL), p_40)), (*l_1350))) < (*l_1350)) ^ (*l_1350))) != p_40) , (**p_2940->g_323)))))), p_40)) & (*l_1350))) > 65534UL), 15))) < 0x74ECL) , (*l_1300)) > 0UL) == p_41))
                { /* block id: 681 */
                    return (*p_2940->g_54);
                }
                else
                { /* block id: 683 */
                    uint64_t l_1440 = 0x97283A5E7A336B18L;
                    int64_t l_1449 = 8L;
                    uint16_t l_1466 = 0xA99DL;
                    for (p_2940->g_1258 = 4; (p_2940->g_1258 >= 0); p_2940->g_1258 -= 1)
                    { /* block id: 686 */
                        int64_t *l_1461 = (void*)0;
                        int64_t *l_1462 = (void*)0;
                        int64_t *l_1463 = &p_2940->g_416;
                        uint8_t *l_1464[4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_1464[i] = &p_2940->g_1465;
                        (***p_2940->g_340) = p_2940->g_1434[p_2940->g_1258][(p_2940->g_1258 + 1)];
                        (***p_2940->g_340) = ((safe_sub_func_uint8_t_u_u(((((****l_1141) || (((l_1440 < (((p_2940->g_1465 &= (safe_sub_func_uint64_t_u_u(18446744073709551610UL, ((*l_1463) = (!(safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((!(!(p_2940->g_1434[p_2940->g_1258][(p_2940->g_1258 + 1)] <= ((safe_add_func_uint32_t_u_u(l_1440, ((*l_1343) = l_1449))) | ((safe_div_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((0x392BL ^ p_2940->g_416) , (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((*l_1348) |= (p_38 || (****l_1141))) ^ p_41) , p_40), 8)), p_37))), 8UL)), p_38)) , p_2940->g_540[(p_2940->g_1258 + 1)][(p_2940->g_1258 + 3)]) != &p_2940->g_586[4]), p_37)) , 4294967295UL))))), (**p_2940->g_323))), p_2940->g_1460[1][1]))))))) , p_38) < p_38)) , l_1466) , p_40)) || 0x4CDAL) , 0xFFL), 0xF4L)) >= 65528UL);
                    }
                    for (p_2940->g_209 = 22; (p_2940->g_209 != 56); p_2940->g_209 = safe_add_func_uint8_t_u_u(p_2940->g_209, 5))
                    { /* block id: 696 */
                        uint8_t *l_1473 = &p_2940->g_1465;
                        (**p_2940->g_340) = l_1469[0][5];
                        (*l_1300) = (safe_mul_func_uint8_t_u_u(((*l_1348) = l_1472), ((*l_1473) ^= 1UL)));
                        if (l_1449)
                            break;
                        if (p_41)
                            continue;
                    }
                    if (p_37)
                        break;
                    if (l_1474)
                        break;
                }
            }
            p_2940->g_1486--;
            (*l_1300) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((**p_2940->g_1196) ^ (safe_sub_func_uint8_t_u_u((1L && ((((((*l_1319) = (((*l_1497) = l_1495) == ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_39 <= (((safe_mul_func_int8_t_s_s(1L, ((void*)0 == l_1504[3][1]))) , ((p_37 = ((+((((safe_lshift_func_uint8_t_u_s(((0x0CL > (p_37 >= p_38)) | l_1507), (*l_1300))) || (*l_1300)) ^ p_40) < (*l_1300))) && p_38)) & p_39)) , p_37)), 2)), 8)) , p_2940->g_1397))) || p_2940->g_199[7]) != p_38) , 0UL) ^ p_41)), 0UL))), 5)), p_41));
        }
    }
    (*l_1521) |= (safe_rshift_func_int16_t_s_u((((((safe_sub_func_int32_t_s_s(((void*)0 != &l_1496), ((((p_2940->g_670 = (void*)0) == (p_2940->g_1513[0][1] = &p_2940->g_671[2])) && ((((((safe_lshift_func_int8_t_s_u(p_39, 0)) , p_38) , (*p_2940->g_716)) != (*p_2940->g_716)) == (((safe_div_func_uint32_t_u_u(4294967294UL, l_1518[5][4])) && p_40) & p_41)) ^ p_41)) | p_39))) <= (**p_2940->g_323)) , l_1519) <= p_37) , 0x726EL), 9));
    (*l_1543) ^= (((**p_2940->g_323) = 0L) ^ (((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(p_37, (((**l_1495) = p_2940->g_455) , 0x68A6010F95F88DC6L))), 10)) | 0x0DA002DD2BDC1205L))), (~(safe_lshift_func_uint8_t_u_u(((((*l_1542) ^= ((*l_1541) = (safe_mod_func_int64_t_s_s(1L, (safe_add_func_uint16_t_u_u(0UL, (safe_lshift_func_int16_t_s_u((((*l_1540) = (((p_39 && ((safe_div_func_uint16_t_u_u((p_2940->g_1460[2][8] = ((*l_1521) == (*l_1521))), p_40)) == (-1L))) , l_1539) , 0x3D325819L)) , p_39), p_41)))))))) <= p_2940->g_586[4]) && (*p_2940->g_1197)), 6))))) < (*l_1521)) , 0x3CL));
    (*l_1543) = ((safe_add_func_int64_t_s_s(p_39, (safe_mod_func_int64_t_s_s((p_2940->g_1548 == (l_1520 = (((((safe_rshift_func_uint16_t_u_s((((*l_1551) &= ((&l_1496 != (void*)0) | (*l_1521))) || (p_39 >= (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(0x2372L, ((*l_1208) = (&l_1143 != &l_1143)))) , l_1558[0][0]) == l_1558[0][0]), 4)), p_40)))), 2)) , &l_1129) == (void*)0) && l_1559) , &l_1479))), (-1L))))) , 0x1C343C30L);
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_55 p_2940->g_56 p_2940->g_60 p_2940->g_62 p_2940->g_323 p_2940->g_54 p_2940->g_416 p_2940->g_98 p_2940->g_869 p_2940->g_209 p_2940->g_662 p_2940->g_153 p_2940->g_455 p_2940->g_586 p_2940->g_179 p_2940->g_382 p_2940->g_341 p_2940->g_120 p_2940->g_96 p_2940->g_199 p_2940->g_340 p_2940->g_233
 * writes: p_2940->g_55 p_2940->g_60 p_2940->g_62 p_2940->g_869 p_2940->g_662 p_2940->g_414 p_2940->g_153 p_2940->g_238 p_2940->g_98 p_2940->g_382 p_2940->g_535 p_2940->g_96 p_2940->g_179 p_2940->g_120
 */
uint8_t  func_48(int8_t * p_49, int8_t * p_50, int8_t * p_51, uint8_t  p_52, int8_t * p_53, struct S0 * p_2940)
{ /* block id: 10 */
    int32_t *l_66 = &p_2940->g_62;
    int32_t l_827 = 0x7214BE26L;
    int32_t *l_828 = &p_2940->g_98;
    int32_t *l_829[5];
    int8_t l_830 = 0x78L;
    uint32_t l_832 = 4294967292UL;
    int32_t l_837[9];
    int8_t *l_861 = &l_830;
    int8_t **l_860 = &l_861;
    int8_t *l_864 = (void*)0;
    int8_t *l_865 = (void*)0;
    int8_t *l_866 = &l_830;
    uint32_t l_867 = 1UL;
    int32_t *l_868 = &p_2940->g_869;
    uint32_t l_870[6] = {0xC554E479L,0xC554E479L,0xC554E479L,0xC554E479L,0xC554E479L,0xC554E479L};
    int8_t l_880 = 0x1EL;
    uint8_t l_887 = 0x6FL;
    uint64_t l_904 = 18446744073709551615UL;
    int64_t *l_935 = &p_2940->g_416;
    int16_t l_985[9][8][3] = {{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}},{{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL},{0x3EFFL,0x733AL,0x733AL}}};
    uint64_t l_1017 = 0x050F95D34DDDAF12L;
    int64_t l_1018 = 0x31F6E08B4A023F37L;
    int32_t l_1101 = (-10L);
    int8_t l_1108[1][3];
    uint64_t ***l_1125[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_829[i] = &p_2940->g_121;
    for (i = 0; i < 9; i++)
        l_837[i] = (-1L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1108[i][j] = (-1L);
    }
    for (i = 0; i < 3; i++)
        l_1125[i] = (void*)0;
    for (p_2940->g_55 = 0; (p_2940->g_55 <= 8); p_2940->g_55 += 1)
    { /* block id: 13 */
        uint32_t l_57 = 0x559CDE89L;
        uint8_t l_86 = 255UL;
        int32_t l_826 = 0x3D4816EAL;
        int i;
        for (p_52 = 3; (p_52 <= 8); p_52 += 1)
        { /* block id: 16 */
            int i;
            l_57 = p_2940->g_56[p_2940->g_55];
            for (l_57 = 0; (l_57 <= 8); l_57 += 1)
            { /* block id: 20 */
                int32_t *l_58 = (void*)0;
                int32_t *l_59 = (void*)0;
                int32_t *l_61 = &p_2940->g_62;
                int i;
                p_2940->g_60[6] ^= p_2940->g_56[p_2940->g_55];
                (*l_61) &= l_57;
            }
        }
    }
    l_832--;
    if (((safe_add_func_uint32_t_u_u((((l_837[1] || (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((((((*l_868) |= ((((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(((**p_2940->g_323) < ((((*l_866) ^= (((safe_lshift_func_int16_t_s_s(p_52, ((safe_mod_func_int16_t_s_s(p_52, (safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((!((p_50 = ((*l_860) = &l_830)) == (void*)0)), (safe_sub_func_uint16_t_u_u((~p_52), ((*l_66) >= (*l_66)))))), 4294967295UL)) < p_2940->g_416), p_52)))) , (*l_66)))) > 0x995EL) >= p_52)) >= p_52) && 0L)), 2UL)) , 65535UL), (*l_828))), 0x70739DC7L)), 1)) , l_867) || p_52) == p_52)) , p_52) <= (-10L)) ^ l_870[4]) , p_2940->g_209), p_52)) || 0x14B1B05A5AD290E8L), 0x8D2DL))) < (*l_66)) != (-1L)), 0x9917AB4CL)) <= (*p_2940->g_54)))
    { /* block id: 418 */
        int32_t *l_871 = &p_2940->g_96;
        l_871 = &l_837[1];
    }
    else
    { /* block id: 420 */
        int8_t l_875 = 9L;
        int32_t *l_881 = (void*)0;
        int32_t l_903 = 1L;
        uint8_t l_932 = 7UL;
        int32_t ***l_950 = &p_2940->g_341[0];
        int32_t l_983 = 0x4995347EL;
        int32_t l_984 = 0x0C52124AL;
        int32_t l_986 = 0x2D3252A2L;
        int32_t l_987 = 5L;
        int32_t l_988 = 0x42F27A63L;
        int32_t l_991 = 0L;
        int32_t l_993 = 0x77926E67L;
        int32_t l_994 = (-6L);
        int32_t l_996 = 1L;
        int32_t l_997 = 0x76298180L;
        int64_t *l_1014 = &p_2940->g_474;
        int16_t l_1035[3];
        uint16_t *l_1109[5] = {&p_2940->g_242[6],&p_2940->g_242[6],&p_2940->g_242[6],&p_2940->g_242[6],&p_2940->g_242[6]};
        uint32_t l_1113 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1035[i] = 0L;
        for (p_2940->g_662 = 0; (p_2940->g_662 <= 8); p_2940->g_662 += 1)
        { /* block id: 423 */
            int16_t *l_878 = (void*)0;
            int32_t *l_882[2][9] = {{&p_2940->g_869,(void*)0,(void*)0,&p_2940->g_869,&p_2940->g_869,(void*)0,(void*)0,&p_2940->g_869,&p_2940->g_869},{&p_2940->g_869,(void*)0,(void*)0,&p_2940->g_869,&p_2940->g_869,(void*)0,(void*)0,&p_2940->g_869,&p_2940->g_869}};
            int32_t *l_899 = &p_2940->g_121;
            int32_t l_901[6][8] = {{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL},{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL},{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL},{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL},{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL},{(-7L),0x424F66B3L,0x26AEAABAL,0x3F950CBFL,0x4C97655FL,0x4C97655FL,0x3F950CBFL,0x26AEAABAL}};
            int i, j;
            for (p_2940->g_62 = 0; (p_2940->g_62 <= 8); p_2940->g_62 += 1)
            { /* block id: 426 */
                int32_t *l_872[5][5][5] = {{{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]}},{{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]}},{{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]}},{{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]}},{{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]},{(void*)0,(void*)0,&l_827,&l_837[1],&l_837[p_2940->g_662]}}};
                int i, j, k;
                l_872[4][1][4] = &l_837[p_2940->g_662];
                return l_837[p_2940->g_662];
            }
        }
lbl_1126:
        for (p_2940->g_414 = 16; (p_2940->g_414 < 29); p_2940->g_414 = safe_add_func_uint32_t_u_u(p_2940->g_414, 8))
        { /* block id: 471 */
            uint16_t l_978 = 0xBEC3L;
            int32_t l_979 = (-1L);
            int32_t l_981 = 1L;
            int32_t l_990 = (-6L);
            int32_t l_992 = 1L;
            int32_t l_995[6] = {0x01DD1B6AL,(-1L),0x01DD1B6AL,0x01DD1B6AL,(-1L),0x01DD1B6AL};
            uint32_t l_998 = 0x2EE90B9EL;
            uint64_t *l_1013 = &p_2940->g_238;
            int64_t **l_1015 = &l_1014;
            uint8_t *l_1016[5][9] = {{&l_932,(void*)0,&p_2940->g_382,(void*)0,&l_932,&l_932,(void*)0,&p_2940->g_382,(void*)0},{&l_932,(void*)0,&p_2940->g_382,(void*)0,&l_932,&l_932,(void*)0,&p_2940->g_382,(void*)0},{&l_932,(void*)0,&p_2940->g_382,(void*)0,&l_932,&l_932,(void*)0,&p_2940->g_382,(void*)0},{&l_932,(void*)0,&p_2940->g_382,(void*)0,&l_932,&l_932,(void*)0,&p_2940->g_382,(void*)0},{&l_932,(void*)0,&p_2940->g_382,(void*)0,&l_932,&l_932,(void*)0,&p_2940->g_382,(void*)0}};
            int64_t *l_1036 = (void*)0;
            int64_t *l_1037 = &p_2940->g_535;
            int32_t *l_1094 = &p_2940->g_869;
            int i, j;
            for (p_2940->g_153 = 0; (p_2940->g_153 <= 6); p_2940->g_153 += 1)
            { /* block id: 474 */
                uint64_t l_975 = 18446744073709551613UL;
                int32_t l_980 = 0x46D1F278L;
                int32_t l_982 = 1L;
                int32_t l_989 = (-2L);
                l_975++;
                if (l_978)
                    break;
                l_998++;
            }
            l_983 &= (safe_div_func_int16_t_s_s((((*l_66) = ((*l_828) = ((((l_995[3] ^= ((((safe_add_func_uint8_t_u_u((p_52 = (l_978 | (((p_2940->g_153 < (((safe_mul_func_uint8_t_u_u((((l_979 = ((l_992 &= (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(0xF407L, (p_52 | ((*l_1013) = (p_52 > (p_2940->g_455 || p_2940->g_586[6])))))) == (*l_828)), (((((*l_1015) = l_1014) != (void*)0) != (*l_828)) > l_981)))) != p_52)) , (*p_49)) , p_52), (*p_51))) > (*p_50)) != l_981)) ^ 0x1FE9L) > 0UL))), (*p_2940->g_54))) == (-1L)) & p_2940->g_179) < l_1017)) == 0xDCF88CDEA8E71AEEL) == p_2940->g_382) < (***l_950)))) , l_1018), l_978));
            (***l_950) = (((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((void*)0 != &l_904) > (*l_66)), (p_2940->g_416 < (safe_add_func_int64_t_s_s(((&p_2940->g_716 == (void*)0) && (safe_lshift_func_uint16_t_u_u(l_979, 8))), ((*l_1037) = (0x516C053CC9757E6EL > (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((p_2940->g_382 = ((*p_2940->g_54) > (*p_50))), l_1035[0])) , 0L), p_52))))))))), p_52)) & 0L), 4294967295UL)) >= 0x37L) > l_998);
            for (p_2940->g_179 = (-8); (p_2940->g_179 <= 41); p_2940->g_179 = safe_add_func_uint64_t_u_u(p_2940->g_179, 1))
            { /* block id: 493 */
                int64_t **l_1047 = &p_2940->g_671[2];
                int32_t l_1048 = (-3L);
                uint32_t *l_1049[2][7][3] = {{{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92}},{{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92},{&l_998,&p_2940->g_455,&p_2940->g_92}}};
                int32_t **l_1052 = &l_881;
                uint64_t *l_1053 = (void*)0;
                uint64_t *l_1054 = &p_2940->g_1055;
                int i, j, k;
                (1 + 1);
            }
        }
        l_66 = &l_827;
        if (((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((p_2940->g_179 |= ((!p_2940->g_199[5]) > (((***l_950) < ((safe_lshift_func_int8_t_s_u(((**l_860) ^= 0x24L), 6)) ^ ((*l_828) = l_1101))) > ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x771CL, (~((***l_950) && ((p_52 , p_52) > ((safe_mul_func_int8_t_s_s((((*p_2940->g_120) <= p_52) , (**p_2940->g_323)), l_1108[0][0])) <= 1L)))))), p_52)) || (**p_2940->g_323))))), p_52)), p_52)) , (***p_2940->g_340)))
        { /* block id: 531 */
            int8_t l_1110 = 4L;
            int32_t l_1111 = 1L;
            int32_t l_1112[10] = {0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL,0x7F51A2BDL};
            uint64_t l_1124 = 18446744073709551615UL;
            int i;
            l_1113--;
            (**l_950) = (((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((p_52 = (((((p_52 || p_52) >= (6UL <= (safe_sub_func_int8_t_s_s(l_1124, l_1112[2])))) , (((p_52 ^ (((void*)0 != l_1125[2]) <= (p_52 > (***l_950)))) >= 0x0EL) ^ p_2940->g_233)) == (*p_2940->g_120)) && 0xF9510C0CL)), (*p_51))) <= l_1112[2]) >= l_1111), 1)) > (**p_2940->g_323)), l_1110)) , p_52) , (**l_950));
            (**p_2940->g_340) = (void*)0;
            (**l_950) = &l_1112[1];
        }
        else
        { /* block id: 537 */
            if (p_2940->g_455)
                goto lbl_1126;
        }
    }
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_474 p_2940->g_341 p_2940->g_120 p_2940->g_323 p_2940->g_54 p_2940->g_55 p_2940->g_98 p_2940->g_96 p_2940->g_62 p_2940->g_199 p_2940->g_56 p_2940->g_3 p_2940->g_60
 * writes: p_2940->g_474 p_2940->g_97 p_2940->g_382 p_2940->g_98 p_2940->g_96 p_2940->g_62 p_2940->g_414 p_2940->g_120
 */
uint16_t  func_63(int32_t * p_64, uint32_t  p_65, struct S0 * p_2940)
{ /* block id: 298 */
    int32_t ***l_623 = &p_2940->g_341[1];
    int32_t ***l_624 = (void*)0;
    int64_t *l_635 = (void*)0;
    int8_t l_639 = 0x08L;
    int16_t *l_657[6][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int64_t **l_706 = (void*)0;
    int32_t ****l_720 = &l_624;
    int16_t l_728 = 0x7D8FL;
    int32_t l_775 = 0x00DDE575L;
    int32_t l_779 = 0x354A3C2DL;
    int32_t l_782[8] = {0x53857228L,0x53857228L,0x53857228L,0x53857228L,0x53857228L,0x53857228L,0x53857228L,0x53857228L};
    int i, j, k;
    for (p_2940->g_474 = 0; (p_2940->g_474 != 11); ++p_2940->g_474)
    { /* block id: 301 */
        int64_t l_609 = (-8L);
        int32_t ****l_620 = &p_2940->g_340;
        int32_t ***l_621[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ****l_622 = &p_2940->g_340;
        int32_t l_636 = 9L;
        int16_t *l_637[9] = {&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414,&p_2940->g_414};
        uint8_t *l_638 = &p_2940->g_382;
        uint16_t *l_649 = (void*)0;
        int64_t l_680 = 0x4CB349AC2E085B0DL;
        int64_t **l_705 = (void*)0;
        uint32_t *l_737 = &p_2940->g_455;
        uint32_t l_784 = 0x890A4B7BL;
        uint32_t l_792 = 4294967290UL;
        uint64_t *l_815 = &p_2940->g_240;
        int8_t l_818 = (-3L);
        int i;
        if ((~(safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(((1L >= (l_609 ^ (safe_lshift_func_uint16_t_u_u(((&p_2940->g_209 == (void*)0) | ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((&p_2940->g_341[1] == (l_624 = (l_623 = (l_621[3] = &p_2940->g_341[1])))) , (((*l_638) = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((((**l_624) != (void*)0) != (p_2940->g_97 = ((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != l_635), 0x6CF2L)), 0x71L)) != l_636))) != (**p_2940->g_323)), p_65)), (***l_623))), 0x1466E4FAL))) ^ p_65)), 3)), p_2940->g_199[7])), p_65)), p_2940->g_199[7])) <= p_65)), 9)))) | p_2940->g_56[7]))), 6)), p_65)), l_639)) , (***l_624)), 8)), p_65)), p_2940->g_199[7]))))
        { /* block id: 307 */
            return p_65;
        }
        else
        { /* block id: 309 */
            int64_t *l_642[7] = {&p_2940->g_416,&p_2940->g_416,&p_2940->g_416,&p_2940->g_416,&p_2940->g_416,&p_2940->g_416,&p_2940->g_416};
            int32_t l_650[8] = {0x1F7D8D29L,(-4L),0x1F7D8D29L,0x1F7D8D29L,(-4L),0x1F7D8D29L,0x1F7D8D29L,(-4L)};
            int32_t l_682 = 9L;
            int32_t l_683 = 0x19A5FD50L;
            int16_t *l_684 = &p_2940->g_414;
            int64_t *l_725[7][1][10] = {{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}},{{&l_680,&p_2940->g_416,&l_680,&p_2940->g_535,&l_680,&l_680,&p_2940->g_535,&p_2940->g_416,&p_2940->g_535,&l_680}}};
            int i, j, k;
            l_650[4] = (((((void*)0 != l_642[5]) | ((void*)0 != &p_2940->g_474)) , ((***l_623) = (***l_623))) == ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_2940->g_414 = p_65), 12)), 0UL)), (((l_649 = &p_2940->g_179) == &p_2940->g_242[4]) , p_2940->g_3))) != p_2940->g_60[6]));
            (**l_623) = p_64;
            for (p_2940->g_62 = 7; (p_2940->g_62 >= 0); p_2940->g_62 -= 1)
            { /* block id: 317 */
                uint64_t *l_663 = &p_2940->g_233;
                int32_t l_685 = 0x218141C7L;
                int8_t ***l_755 = &p_2940->g_323;
                int32_t l_776 = 0x7BF68259L;
                int32_t l_778 = 0L;
                int32_t l_780[8][2][1] = {{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}},{{2L},{2L}}};
                uint32_t l_802 = 0x2FA37473L;
                uint8_t l_821[6][10] = {{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL},{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL},{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL},{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL},{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL},{0x08L,1UL,255UL,0x08L,247UL,255UL,255UL,247UL,0x08L,255UL}};
                int i, j, k;
                (1 + 1);
            }
        }
    }
    return p_65;
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_179 p_2940->g_97 p_2940->g_54 p_2940->g_55 p_2940->g_98 p_2940->g_62 p_2940->g_199 p_2940->g_153 p_2940->g_204 p_2940->g_205 p_2940->g_120 p_2940->g_3 p_2940->g_101 p_2940->g_242 p_2940->g_240 p_2940->g_323 p_2940->g_56 p_2940->g_92 p_2940->g_96 p_2940->g_209 p_2940->g_121 p_2940->g_414 p_2940->g_233 p_2940->g_455 p_2940->g_586 p_2940->g_207 p_2940->g_60
 * writes: p_2940->g_179 p_2940->g_153 p_2940->g_92 p_2940->g_199 p_2940->g_98 p_2940->g_96 p_2940->g_207 p_2940->g_209 p_2940->g_62 p_2940->g_120 p_2940->g_101 p_2940->g_340 p_2940->g_121 p_2940->g_97
 */
uint64_t  func_67(uint32_t  p_68, int8_t * p_69, int32_t  p_70, int32_t * p_71, struct S0 * p_2940)
{ /* block id: 103 */
    int32_t *l_173 = (void*)0;
    uint16_t *l_178 = &p_2940->g_179;
    uint32_t *l_184 = &p_2940->g_92;
    int32_t l_185[4][3];
    int16_t *l_191[6][6] = {{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0},{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0},{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0},{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0},{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0},{(void*)0,&p_2940->g_97,&p_2940->g_97,(void*)0,&p_2940->g_97,(void*)0}};
    int8_t l_192 = 0x1DL;
    int32_t **l_203[7];
    int32_t ***l_202 = &l_203[6];
    uint32_t *l_206 = &p_2940->g_207;
    uint32_t *l_208[6];
    int32_t l_215 = 0x71478F81L;
    int8_t **l_231 = &p_2940->g_54;
    int64_t **l_375 = (void*)0;
    int32_t **l_376[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_410[7] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
    int64_t l_584 = 0x1CD98344D154AE7CL;
    uint32_t l_585 = 0x240CAA23L;
    uint32_t l_587 = 0x3EB83244L;
    int32_t l_588 = (-1L);
    int32_t l_589[2][8][10] = {{{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L}},{{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L},{0L,0x3F3E684CL,0L,0L,0x3F3E684CL,0L,(-1L),0x0B6E57B4L,0x0BE629D7L,1L}}};
    int32_t l_590[1][5][7];
    uint64_t l_591[10][10][2] = {{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}},{{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL},{18446744073709551612UL,4UL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_185[i][j] = 7L;
    }
    for (i = 0; i < 7; i++)
        l_203[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_208[i] = &p_2940->g_209;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
                l_590[i][j][k] = 8L;
        }
    }
    l_185[0][2] = (((void*)0 != l_173) ^ ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((*l_178) &= ((void*)0 != &p_2940->g_54)) ^ 1UL), ((((safe_mod_func_int64_t_s_s((((((p_2940->g_97 , ((*l_184) = ((safe_mul_func_int8_t_s_s(((*p_69) = (((void*)0 != &p_2940->g_120) , (*p_2940->g_54))), p_2940->g_98)) == 0x7C5CL))) >= 0L) , (void*)0) != &p_2940->g_120) > 0x5802L), p_2940->g_62)) && 0x29L) , 0x3CC97913L) & (-1L)))), p_70)) , 0x1AL));
    if (((*p_71) = (safe_unary_minus_func_int8_t_s(((*p_69) = (safe_mul_func_uint16_t_u_u(0x0B7EL, (p_70 <= (((safe_rshift_func_uint8_t_u_s((((!(((l_192 |= p_2940->g_62) || (l_185[0][2] = p_68)) >= ((p_2940->g_209 = ((*l_206) = (safe_div_func_uint8_t_u_u(p_70, (safe_mod_func_int16_t_s_s((-1L), (((safe_mul_func_uint8_t_u_u((((p_2940->g_199[7]++) , (*p_2940->g_54)) , (((***p_2940->g_204) = (((*p_69) , l_202) != p_2940->g_204)) != 0UL)), (*p_69))) < p_70) , p_2940->g_3))))))) , (*p_69)))) , p_2940->g_97) & p_2940->g_62), 5)) <= p_68) , p_68)))))))))
    { /* block id: 116 */
        int8_t l_236[3][8] = {{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}};
        int8_t l_243[7] = {0x41L,0x41L,0x41L,0x41L,0x41L,0x41L,0x41L};
        uint32_t **l_250[7] = {&l_206,&l_206,&l_206,&l_206,&l_206,&l_206,&l_206};
        int32_t l_280[3];
        uint8_t l_322 = 1UL;
        int8_t ***l_326 = &l_231;
        int32_t ***l_350 = &l_203[6];
        int32_t ****l_351 = &p_2940->g_340;
        uint32_t *l_356 = &p_2940->g_103;
        uint32_t **l_357 = &l_356;
        uint32_t **l_358 = &l_184;
        int8_t l_359 = 0x0DL;
        int8_t *l_360 = &l_243[0];
        int i, j;
        for (i = 0; i < 3; i++)
            l_280[i] = 0x312C1E33L;
lbl_210:
        p_2940->g_120 = (p_71 = p_71);
        for (p_2940->g_101 = 0; (p_2940->g_101 >= 0); p_2940->g_101 -= 1)
        { /* block id: 121 */
            int8_t l_218 = (-8L);
            uint32_t **l_258 = &l_208[2];
            int32_t l_274 = 0x4185503AL;
            int32_t l_278 = 0x615BDB47L;
            uint16_t *l_332 = &p_2940->g_242[0];
            int32_t ***l_345 = &p_2940->g_341[0];
            for (p_68 = 1; (p_68 <= 8); p_68 += 1)
            { /* block id: 124 */
                uint64_t *l_251[10];
                int8_t ***l_259 = (void*)0;
                int8_t ***l_260 = &l_231;
                uint32_t l_271 = 0x846929B3L;
                int32_t l_275 = 3L;
                uint32_t l_282 = 4294967288UL;
                uint8_t l_304 = 247UL;
                uint16_t l_327 = 0x6662L;
                int16_t *l_333 = &p_2940->g_56[4];
                int16_t l_343[1][9] = {{0x19D0L,0x19D0L,0x19D0L,0x19D0L,0x19D0L,0x19D0L,0x19D0L,0x19D0L,0x19D0L}};
                int i, j;
                for (i = 0; i < 10; i++)
                    l_251[i] = (void*)0;
                if (p_2940->g_3)
                    goto lbl_210;
            }
        }
        if (((((**l_326) != ((p_2940->g_242[0] >= (safe_add_func_int8_t_s_s(((*l_360) ^= ((*p_69) = ((l_350 != (p_2940->g_240 , ((*l_351) = (((void*)0 != (*p_2940->g_323)) , &l_203[5])))) <= (safe_lshift_func_int16_t_s_u((((safe_add_func_uint8_t_u_u(((((*l_357) = l_356) != ((*l_358) = &p_2940->g_92)) < 0UL), 0x08L)) != p_2940->g_179) | 0x363CB65DE4F27F65L), l_359))))), (*p_2940->g_54)))) , (void*)0)) , p_2940->g_56[5]) || p_2940->g_92))
        { /* block id: 200 */
            return p_2940->g_96;
        }
        else
        { /* block id: 202 */
            (***p_2940->g_204) &= (safe_sub_func_int64_t_s_s(((((*p_69) = ((p_2940->g_55 == ((p_2940->g_101 && ((safe_lshift_func_uint8_t_u_s((((*p_2940->g_204) != ((p_2940->g_199[1] <= (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(p_2940->g_209, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_178) ^= ((((void*)0 != &l_356) | (safe_mod_func_int8_t_s_s(((((void*)0 == l_375) <= p_70) , 0x75L), 0x56L))) >= p_70)), 7)), (**p_2940->g_323))))) || 0L), p_70))) , l_376[9])) & 0x68L), 7)) | (*p_2940->g_54))) , 18446744073709551608UL)) ^ p_70)) || p_2940->g_209) ^ 65526UL), 0x72320E0FE3026632L));
        }
    }
    else
    { /* block id: 207 */
        uint16_t l_405[10][8] = {{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L},{0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L,0x3447L,0x3447L,0x4EC2L}};
        int32_t l_413 = 0x1C125527L;
        int32_t l_448 = 0x1ABBF9C2L;
        uint32_t *l_498 = (void*)0;
        int i, j;
        for (p_2940->g_121 = 5; (p_2940->g_121 >= 0); p_2940->g_121 -= 1)
        { /* block id: 210 */
            uint8_t *l_381[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_415 = &p_2940->g_416;
            int32_t ***l_461[9] = {&p_2940->g_341[0],&p_2940->g_341[1],&p_2940->g_341[0],&p_2940->g_341[0],&p_2940->g_341[1],&p_2940->g_341[0],&p_2940->g_341[0],&p_2940->g_341[1],&p_2940->g_341[0]};
            uint32_t *l_489 = &p_2940->g_455;
            int8_t **l_518[1];
            int8_t l_552 = 1L;
            uint64_t *l_553[5][5][7] = {{{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0}},{{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0}},{{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0}},{{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0}},{{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0},{(void*)0,&p_2940->g_238,&p_2940->g_240,&p_2940->g_233,&p_2940->g_240,&p_2940->g_233,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_518[i] = (void*)0;
            (1 + 1);
        }
    }
    (**p_2940->g_205) = (((p_68 > (p_2940->g_414 || (safe_mul_func_int16_t_s_s((p_2940->g_97 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((*p_71), 0x0BACAB8DL)) == ((*p_69) == (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((((((!(safe_add_func_uint32_t_u_u((p_70 != (0x55L | ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((p_70 <= ((!(safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((((*l_178) = (((p_68 | p_70) < p_2940->g_62) >= (-1L))) >= l_584) , l_585), p_2940->g_199[7])), p_68)) & 8L), 4)) >= (*p_69)), 5))) && 0x88B5D86FL)), p_2940->g_233)), p_68)), p_70)) == p_2940->g_242[0]))), 0xD87F4DC1L))) || p_68) <= p_2940->g_96) | p_68) , p_70) , p_2940->g_455) , 0xFDFFL), 0x15D1L)), 1UL)))), 4L)), p_70)), p_2940->g_586[6]))), l_587)))) & p_2940->g_207) | l_588);
    --l_591[2][0][0];
    return p_2940->g_60[6];
}


/* ------------------------------------------ */
/* 
 * reads : p_2940->g_60 p_2940->g_62 p_2940->g_92 p_2940->g_103 p_2940->g_96 p_2940->g_98 p_2940->g_101
 * writes: p_2940->g_92 p_2940->g_103 p_2940->g_96 p_2940->g_98 p_2940->g_54 p_2940->g_101 p_2940->g_120
 */
int16_t  func_76(int64_t  p_77, int32_t * p_78, int16_t  p_79, uint32_t  p_80, int32_t  p_81, struct S0 * p_2940)
{ /* block id: 25 */
    int32_t *l_89 = (void*)0;
    int8_t *l_90 = &p_2940->g_55;
    int32_t l_100 = 0x363BBBF1L;
    int32_t l_102 = 1L;
    int32_t l_139 = 0x799C40DFL;
    int32_t **l_171 = &l_89;
    if ((((~p_77) != ((safe_sub_func_uint8_t_u_u((&p_81 != l_89), (l_90 != (void*)0))) != p_77)) >= p_2940->g_60[7]))
    { /* block id: 26 */
        int32_t *l_95[9][10][2] = {{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}},{{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3},{&p_2940->g_3,&p_2940->g_3}}};
        int8_t *l_114 = &p_2940->g_55;
        int i, j, k;
        for (p_79 = 0; (p_79 <= 9); p_79 += 1)
        { /* block id: 29 */
            int32_t **l_91 = &l_89;
            (*l_91) = &p_2940->g_62;
            for (p_80 = 0; (p_80 <= 9); p_80 += 1)
            { /* block id: 33 */
                return (*l_89);
            }
            p_2940->g_92--;
        }
        --p_2940->g_103;
        for (p_2940->g_96 = (-9); (p_2940->g_96 <= (-28)); p_2940->g_96--)
        { /* block id: 41 */
            int32_t l_112[5] = {0x0CD8B2F8L,0x0CD8B2F8L,0x0CD8B2F8L,0x0CD8B2F8L,0x0CD8B2F8L};
            int8_t **l_113[5][3][3] = {{{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90}},{{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90}},{{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90}},{{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90}},{{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90},{&p_2940->g_54,&p_2940->g_54,&l_90}}};
            int32_t l_115 = 0x5A393972L;
            int i, j, k;
            p_78 = (void*)0;
            for (p_80 = 18; (p_80 <= 15); --p_80)
            { /* block id: 45 */
                p_2940->g_98 &= ((void*)0 == &p_2940->g_55);
            }
            l_115 |= ((3UL >= (+(safe_rshift_func_uint16_t_u_u(l_112[3], 10)))) == (((p_2940->g_54 = l_90) != l_114) > (p_2940->g_96 < p_2940->g_101)));
        }
    }
    else
    { /* block id: 51 */
        int32_t *l_119 = (void*)0;
        int32_t **l_146 = &p_2940->g_120;
        int32_t ***l_145 = &l_146;
        for (l_102 = (-22); (l_102 >= 20); l_102 = safe_add_func_int64_t_s_s(l_102, 8))
        { /* block id: 54 */
            int32_t **l_118[7] = {&l_89,&l_89,&l_89,&l_89,&l_89,&l_89,&l_89};
            uint8_t l_140 = 254UL;
            int i;
            l_119 = (void*)0;
            for (p_80 = 3; (p_80 <= 8); p_80 += 1)
            { /* block id: 58 */
                int32_t l_137 = 0x426E64EFL;
                int i;
                (1 + 1);
            }
        }
    }
    for (p_2940->g_101 = (-14); (p_2940->g_101 != 15); p_2940->g_101++)
    { /* block id: 95 */
        uint8_t l_168 = 0xEAL;
        int32_t **l_170 = &l_89;
        int32_t ***l_169 = &l_170;
        int32_t **l_172 = (void*)0;
        if (l_168)
            break;
        l_172 = (l_171 = ((*l_169) = &p_2940->g_120));
    }
    (*l_171) = &p_2940->g_98;
    return p_2940->g_92;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_2941;
    struct S0* p_2940 = &c_2941;
    struct S0 c_2942 = {
        3L, // p_2940->g_2
        0x4A8B108FL, // p_2940->g_3
        0x56L, // p_2940->g_43
        0x2BL, // p_2940->g_47
        1L, // p_2940->g_55
        &p_2940->g_55, // p_2940->g_54
        {0x2447L,0x2447L,0x2447L,0x2447L,0x2447L,0x2447L,0x2447L,0x2447L,0x2447L}, // p_2940->g_56
        {3L,(-1L),3L,3L,(-1L),3L,3L,(-1L),3L,3L}, // p_2940->g_60
        0x32A8F302L, // p_2940->g_62
        4294967286UL, // p_2940->g_92
        0L, // p_2940->g_96
        0x2715L, // p_2940->g_97
        0x3D8B2F93L, // p_2940->g_98
        {{0x4A7E6D0914BD6B41L},{0x4A7E6D0914BD6B41L},{0x4A7E6D0914BD6B41L},{0x4A7E6D0914BD6B41L},{0x4A7E6D0914BD6B41L}}, // p_2940->g_99
        0x0B9A650DL, // p_2940->g_101
        0UL, // p_2940->g_103
        &p_2940->g_96, // p_2940->g_120
        0x4877AA3FL, // p_2940->g_121
        0x44L, // p_2940->g_153
        65530UL, // p_2940->g_179
        {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}, // p_2940->g_199
        &p_2940->g_120, // p_2940->g_205
        &p_2940->g_205, // p_2940->g_204
        0UL, // p_2940->g_207
        4294967295UL, // p_2940->g_209
        0UL, // p_2940->g_233
        0x030FC9DB44EA9E6CL, // p_2940->g_238
        0x556991D4868CC2CDL, // p_2940->g_240
        {65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL}, // p_2940->g_242
        0x1A09870BL, // p_2940->g_249
        &p_2940->g_249, // p_2940->g_248
        &p_2940->g_248, // p_2940->g_247
        &p_2940->g_54, // p_2940->g_323
        {&p_2940->g_120,&p_2940->g_120}, // p_2940->g_341
        &p_2940->g_341[1], // p_2940->g_340
        0x15L, // p_2940->g_382
        (-7L), // p_2940->g_414
        0x5FBE27C3F1183D35L, // p_2940->g_416
        0xC8160CCBL, // p_2940->g_455
        0x59CFA0F7L, // p_2940->g_464
        {{{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464}},{{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464}},{{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464},{&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464,&p_2940->g_464}}}, // p_2940->g_463
        &p_2940->g_463[1][0][5], // p_2940->g_462
        (-4L), // p_2940->g_474
        &p_2940->g_209, // p_2940->g_488
        0L, // p_2940->g_535
        {{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96},{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96},{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96},{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96},{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96},{&p_2940->g_96,&p_2940->g_96,&p_2940->g_96,&p_2940->g_121,&p_2940->g_62,&p_2940->g_62,&p_2940->g_3,&p_2940->g_96,&p_2940->g_3,&p_2940->g_96}}, // p_2940->g_540
        {0xFC881086L,0xFC881086L,0xFC881086L,0xFC881086L,0xFC881086L,0xFC881086L,0xFC881086L}, // p_2940->g_586
        0xD789472DL, // p_2940->g_662
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2940->g_671
        &p_2940->g_671[7], // p_2940->g_670
        (void*)0, // p_2940->g_717
        &p_2940->g_717, // p_2940->g_716
        {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}}, // p_2940->g_761
        0xB66C7044B3D836D2L, // p_2940->g_762
        18446744073709551615UL, // p_2940->g_763
        0x9C807513CA2843EBL, // p_2940->g_764
        1UL, // p_2940->g_765
        {{{&p_2940->g_764,&p_2940->g_761[1][0],&p_2940->g_761[1][0],&p_2940->g_764},{&p_2940->g_764,&p_2940->g_761[1][0],&p_2940->g_761[1][0],&p_2940->g_764},{&p_2940->g_764,&p_2940->g_761[1][0],&p_2940->g_761[1][0],&p_2940->g_764},{&p_2940->g_764,&p_2940->g_761[1][0],&p_2940->g_761[1][0],&p_2940->g_764},{&p_2940->g_764,&p_2940->g_761[1][0],&p_2940->g_761[1][0],&p_2940->g_764}}}, // p_2940->g_760
        (void*)0, // p_2940->g_766
        {&p_2940->g_766,&p_2940->g_766,&p_2940->g_766,&p_2940->g_766,&p_2940->g_766,&p_2940->g_766,&p_2940->g_766}, // p_2940->g_759
        (-1L), // p_2940->g_769
        &p_2940->g_769, // p_2940->g_768
        0x5136L, // p_2940->g_831
        (-1L), // p_2940->g_869
        (void*)0, // p_2940->g_1040
        0x39EB7AE3066CAE50L, // p_2940->g_1055
        &p_2940->g_233, // p_2940->g_1197
        &p_2940->g_1197, // p_2940->g_1196
        4294967290UL, // p_2940->g_1229
        0L, // p_2940->g_1258
        &p_2940->g_323, // p_2940->g_1290
        0x3A060B6DL, // p_2940->g_1383
        0xBA96FFDE56340850L, // p_2940->g_1394
        (-1L), // p_2940->g_1399
        {&p_2940->g_1399,&p_2940->g_1399,&p_2940->g_1399,&p_2940->g_1399,&p_2940->g_1399,&p_2940->g_1399}, // p_2940->g_1398
        &p_2940->g_1398[3], // p_2940->g_1397
        {{0x8A071D64L,0xF77E6BC6L,0x16B216A6L,0xF77E6BC6L,0x8A071D64L,0x8A071D64L,0xF77E6BC6L},{0x8A071D64L,0xF77E6BC6L,0x16B216A6L,0xF77E6BC6L,0x8A071D64L,0x8A071D64L,0xF77E6BC6L},{0x8A071D64L,0xF77E6BC6L,0x16B216A6L,0xF77E6BC6L,0x8A071D64L,0x8A071D64L,0xF77E6BC6L},{0x8A071D64L,0xF77E6BC6L,0x16B216A6L,0xF77E6BC6L,0x8A071D64L,0x8A071D64L,0xF77E6BC6L},{0x8A071D64L,0xF77E6BC6L,0x16B216A6L,0xF77E6BC6L,0x8A071D64L,0x8A071D64L,0xF77E6BC6L}}, // p_2940->g_1434
        0xB5B873CBL, // p_2940->g_1436
        {{0x73D1L,0xC905L,0xC905L,0x73D1L,0xAA91L,0x24BBL,0x24BBL,0xAA91L,0x73D1L},{0x73D1L,0xC905L,0xC905L,0x73D1L,0xAA91L,0x24BBL,0x24BBL,0xAA91L,0x73D1L},{0x73D1L,0xC905L,0xC905L,0x73D1L,0xAA91L,0x24BBL,0x24BBL,0xAA91L,0x73D1L},{0x73D1L,0xC905L,0xC905L,0x73D1L,0xAA91L,0x24BBL,0x24BBL,0xAA91L,0x73D1L}}, // p_2940->g_1460
        0xF8L, // p_2940->g_1465
        0xD3D4L, // p_2940->g_1486
        {{&p_2940->g_671[7],&p_2940->g_671[7],&p_2940->g_671[7]}}, // p_2940->g_1513
        &p_2940->g_1258, // p_2940->g_1548
        (-1L), // p_2940->g_1830
        65535UL, // p_2940->g_1871
        &p_2940->g_1871, // p_2940->g_1870
        &p_2940->g_1870, // p_2940->g_1869
        &p_2940->g_1869, // p_2940->g_1868
        &p_2940->g_1040, // p_2940->g_1998
        &p_2940->g_1998, // p_2940->g_1997
        0x44B99723L, // p_2940->g_2060
        0UL, // p_2940->g_2161
        0xD7L, // p_2940->g_2199
        4294967295UL, // p_2940->g_2291
        (-8L), // p_2940->g_2339
        {{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}},{{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465},{&p_2940->g_2199,&p_2940->g_1465}}}, // p_2940->g_2429
        0xF15F9075L, // p_2940->g_2490
        (void*)0, // p_2940->g_2602
        {{{&p_2940->g_2602,&p_2940->g_2602}},{{&p_2940->g_2602,&p_2940->g_2602}},{{&p_2940->g_2602,&p_2940->g_2602}},{{&p_2940->g_2602,&p_2940->g_2602}},{{&p_2940->g_2602,&p_2940->g_2602}}}, // p_2940->g_2601
        &p_2940->g_2601[4][0][0], // p_2940->g_2600
        &p_2940->g_716, // p_2940->g_2712
        0x29F4F874L, // p_2940->g_2799
        4L, // p_2940->g_2800
        {{&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[6],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[6],&p_2940->g_759[1],&p_2940->g_759[1]},{&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[6],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[1],&p_2940->g_759[6],&p_2940->g_759[1],&p_2940->g_759[1]}}, // p_2940->g_2839
        &p_2940->g_1998, // p_2940->g_2889
        0L, // p_2940->g_2937
    };
    c_2941 = c_2942;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2940);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2940->g_2, "p_2940->g_2", print_hash_value);
    transparent_crc(p_2940->g_3, "p_2940->g_3", print_hash_value);
    transparent_crc(p_2940->g_43, "p_2940->g_43", print_hash_value);
    transparent_crc(p_2940->g_47, "p_2940->g_47", print_hash_value);
    transparent_crc(p_2940->g_55, "p_2940->g_55", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2940->g_56[i], "p_2940->g_56[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2940->g_60[i], "p_2940->g_60[i]", print_hash_value);

    }
    transparent_crc(p_2940->g_62, "p_2940->g_62", print_hash_value);
    transparent_crc(p_2940->g_92, "p_2940->g_92", print_hash_value);
    transparent_crc(p_2940->g_96, "p_2940->g_96", print_hash_value);
    transparent_crc(p_2940->g_97, "p_2940->g_97", print_hash_value);
    transparent_crc(p_2940->g_98, "p_2940->g_98", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_2940->g_99[i][j], "p_2940->g_99[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2940->g_101, "p_2940->g_101", print_hash_value);
    transparent_crc(p_2940->g_103, "p_2940->g_103", print_hash_value);
    transparent_crc(p_2940->g_121, "p_2940->g_121", print_hash_value);
    transparent_crc(p_2940->g_153, "p_2940->g_153", print_hash_value);
    transparent_crc(p_2940->g_179, "p_2940->g_179", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_2940->g_199[i], "p_2940->g_199[i]", print_hash_value);

    }
    transparent_crc(p_2940->g_207, "p_2940->g_207", print_hash_value);
    transparent_crc(p_2940->g_209, "p_2940->g_209", print_hash_value);
    transparent_crc(p_2940->g_233, "p_2940->g_233", print_hash_value);
    transparent_crc(p_2940->g_238, "p_2940->g_238", print_hash_value);
    transparent_crc(p_2940->g_240, "p_2940->g_240", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2940->g_242[i], "p_2940->g_242[i]", print_hash_value);

    }
    transparent_crc(p_2940->g_249, "p_2940->g_249", print_hash_value);
    transparent_crc(p_2940->g_382, "p_2940->g_382", print_hash_value);
    transparent_crc(p_2940->g_414, "p_2940->g_414", print_hash_value);
    transparent_crc(p_2940->g_416, "p_2940->g_416", print_hash_value);
    transparent_crc(p_2940->g_455, "p_2940->g_455", print_hash_value);
    transparent_crc(p_2940->g_464, "p_2940->g_464", print_hash_value);
    transparent_crc(p_2940->g_474, "p_2940->g_474", print_hash_value);
    transparent_crc(p_2940->g_535, "p_2940->g_535", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2940->g_586[i], "p_2940->g_586[i]", print_hash_value);

    }
    transparent_crc(p_2940->g_662, "p_2940->g_662", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_2940->g_761[i][j], "p_2940->g_761[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2940->g_762, "p_2940->g_762", print_hash_value);
    transparent_crc(p_2940->g_763, "p_2940->g_763", print_hash_value);
    transparent_crc(p_2940->g_764, "p_2940->g_764", print_hash_value);
    transparent_crc(p_2940->g_765, "p_2940->g_765", print_hash_value);
    transparent_crc(p_2940->g_769, "p_2940->g_769", print_hash_value);
    transparent_crc(p_2940->g_831, "p_2940->g_831", print_hash_value);
    transparent_crc(p_2940->g_869, "p_2940->g_869", print_hash_value);
    transparent_crc(p_2940->g_1055, "p_2940->g_1055", print_hash_value);
    transparent_crc(p_2940->g_1229, "p_2940->g_1229", print_hash_value);
    transparent_crc(p_2940->g_1258, "p_2940->g_1258", print_hash_value);
    transparent_crc(p_2940->g_1383, "p_2940->g_1383", print_hash_value);
    transparent_crc(p_2940->g_1394, "p_2940->g_1394", print_hash_value);
    transparent_crc(p_2940->g_1399, "p_2940->g_1399", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2940->g_1434[i][j], "p_2940->g_1434[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2940->g_1436, "p_2940->g_1436", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_2940->g_1460[i][j], "p_2940->g_1460[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2940->g_1465, "p_2940->g_1465", print_hash_value);
    transparent_crc(p_2940->g_1486, "p_2940->g_1486", print_hash_value);
    transparent_crc(p_2940->g_1830, "p_2940->g_1830", print_hash_value);
    transparent_crc(p_2940->g_1871, "p_2940->g_1871", print_hash_value);
    transparent_crc(p_2940->g_2060, "p_2940->g_2060", print_hash_value);
    transparent_crc(p_2940->g_2161, "p_2940->g_2161", print_hash_value);
    transparent_crc(p_2940->g_2199, "p_2940->g_2199", print_hash_value);
    transparent_crc(p_2940->g_2291, "p_2940->g_2291", print_hash_value);
    transparent_crc(p_2940->g_2339, "p_2940->g_2339", print_hash_value);
    transparent_crc(p_2940->g_2490, "p_2940->g_2490", print_hash_value);
    transparent_crc(p_2940->g_2799, "p_2940->g_2799", print_hash_value);
    transparent_crc(p_2940->g_2800, "p_2940->g_2800", print_hash_value);
    transparent_crc(p_2940->g_2937, "p_2940->g_2937", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
