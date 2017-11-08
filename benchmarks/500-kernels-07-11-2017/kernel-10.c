// -g 37,99,1 -l 37,3,1
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


// Seed: 3391084868

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

struct S1 {
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_10;
    int32_t g_14;
    int8_t g_39;
    int32_t g_55[6];
    uint16_t g_60;
    volatile uint16_t g_79;
    volatile uint16_t * volatile g_78;
    volatile uint16_t * volatile *g_77;
    int16_t g_104;
    int8_t g_124;
    uint16_t g_125;
    uint32_t g_132;
    struct S0 g_133;
    uint8_t g_153;
    int16_t g_188;
    int8_t g_208;
    uint32_t g_211;
    uint32_t g_215;
    uint32_t g_216;
    uint32_t g_222[2];
    struct S0 * volatile g_242;
    struct S0 * volatile *g_241;
    struct S0 * volatile **g_240;
    uint64_t g_243;
    volatile int16_t g_261[7];
    volatile int16_t *g_260;
    volatile int16_t **g_259;
    uint8_t g_299;
    uint32_t g_334[1][6][5];
    uint64_t g_342;
    uint64_t g_373;
    int32_t g_429;
    uint32_t g_430[5];
    int16_t *g_450[3][6];
    uint64_t g_456;
    int8_t g_486;
    int8_t g_487;
    int64_t g_490;
    int32_t g_495;
    int32_t g_496;
    int64_t g_500;
    int32_t g_501[2][9][6];
    uint8_t g_506;
    struct S0 g_535;
    struct S0 *g_534;
    struct S0 **g_533;
    uint16_t *g_543;
    uint16_t **g_542;
    uint32_t g_549;
    uint16_t *g_607;
    int32_t g_625;
    int32_t g_646;
    uint64_t g_648;
    int64_t g_661;
    uint64_t g_707;
    int32_t g_734;
    int8_t g_736[5][3][5];
    uint16_t g_741[2][1][1];
    int32_t *g_762;
    int64_t g_796;
    volatile int32_t ** volatile *g_837;
    int16_t g_867;
    uint16_t ***g_891;
    int32_t g_913;
    int32_t g_914[8][8];
    uint8_t *g_1069;
    uint8_t * volatile *g_1068;
    int64_t g_1096;
    int32_t g_1106;
    uint32_t g_1120;
    uint64_t g_1236;
    volatile int64_t *g_1238[2];
    volatile int64_t **g_1237;
    int32_t **g_1317;
    uint16_t g_1362;
    int8_t ** volatile *g_1376;
    uint32_t g_1377;
    uint64_t *g_1382;
    uint64_t * volatile *g_1381[7][8][4];
    int64_t g_1463;
    uint32_t * volatile g_1533;
    uint32_t * volatile *g_1532;
    uint32_t g_1631;
    uint32_t g_1700;
    uint64_t g_1978;
    uint32_t g_1999;
    uint8_t g_2000[5];
    int32_t g_2056;
    uint64_t * volatile g_2208;
    uint64_t * volatile *g_2207;
    uint64_t g_2398;
    uint16_t * volatile *g_2434;
    uint16_t * volatile ** volatile g_2433;
    uint16_t * volatile ** volatile *g_2432;
    uint16_t * volatile ** volatile **g_2431;
    int64_t g_2490;
    int64_t *g_2507;
    int64_t **g_2506;
    int64_t ***g_2505;
    uint8_t g_2679;
    volatile uint16_t g_2779;
    int8_t *g_2786;
    int8_t **g_2785;
    int8_t *** volatile g_2784;
    uint16_t g_2791;
    uint8_t g_2818;
    int32_t *g_2875;
    int32_t *g_2941;
    int64_t g_2942;
    volatile uint32_t g_2960;
    uint64_t *g_2961;
    int32_t g_2983[10];
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_2986);
struct S0  func_17(int32_t * p_18, struct S1 * p_2986);
int32_t * func_19(int32_t * p_20, int16_t  p_21, uint32_t  p_22, uint16_t  p_23, struct S1 * p_2986);
uint8_t  func_32(int8_t  p_33, uint32_t  p_34, int32_t * p_35, struct S0  p_36, int32_t * p_37, struct S1 * p_2986);
int32_t * func_40(int32_t * p_41, int8_t * p_42, int32_t * p_43, struct S1 * p_2986);
int32_t * func_44(int8_t * p_45, int32_t * p_46, struct S1 * p_2986);
int32_t * func_47(int8_t  p_48, int32_t * p_49, uint32_t  p_50, struct S1 * p_2986);
int8_t  func_51(struct S0  p_52, int32_t * p_53, struct S1 * p_2986);
uint16_t  func_65(int32_t  p_66, struct S0  p_67, struct S1 * p_2986);
struct S0  func_70(struct S0  p_71, uint16_t * p_72, struct S1 * p_2986);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2986->g_5 p_2986->g_211 p_2986->g_1317 p_2986->g_14
 * writes: p_2986->g_5 p_2986->g_211 p_2986->g_762
 */
int16_t  func_1(struct S1 * p_2986)
{ /* block id: 4 */
    int64_t l_2[4][4];
    int32_t *l_13 = &p_2986->g_14;
    uint16_t l_24 = 0xC72FL;
    int32_t *l_2729 = (void*)0;
    int32_t l_2733 = (-1L);
    int32_t l_2734 = 7L;
    int32_t l_2735[1];
    uint64_t l_2736[1];
    int32_t l_2739 = 0x5E90FD1AL;
    int16_t l_2742 = 0x7EF2L;
    uint64_t **l_2778 = (void*)0;
    uint64_t ***l_2777 = &l_2778;
    uint16_t l_2796 = 0UL;
    uint32_t l_2820 = 0x10F3D805L;
    struct S0 *l_2846 = &p_2986->g_535;
    uint8_t **l_2847 = &p_2986->g_1069;
    int16_t l_2853[8] = {0x7489L,0x528AL,0x7489L,0x7489L,0x528AL,0x7489L,0x7489L,0x528AL};
    uint64_t *l_2880[5][5] = {{&p_2986->g_1978,(void*)0,&l_2736[0],(void*)0,&p_2986->g_1978},{&p_2986->g_1978,(void*)0,&l_2736[0],(void*)0,&p_2986->g_1978},{&p_2986->g_1978,(void*)0,&l_2736[0],(void*)0,&p_2986->g_1978},{&p_2986->g_1978,(void*)0,&l_2736[0],(void*)0,&p_2986->g_1978},{&p_2986->g_1978,(void*)0,&l_2736[0],(void*)0,&p_2986->g_1978}};
    uint64_t **l_2879[1][7] = {{&l_2880[4][4],&l_2880[3][2],&l_2880[4][4],&l_2880[4][4],&l_2880[3][2],&l_2880[4][4],&l_2880[4][4]}};
    uint64_t **l_2882 = &l_2880[0][4];
    int8_t l_2910 = 0x75L;
    uint16_t l_2981 = 0xDB8CL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_2[i][j] = (-3L);
    }
    for (i = 0; i < 1; i++)
        l_2735[i] = 0x5E931309L;
    for (i = 0; i < 1; i++)
        l_2736[i] = 0x43E44C3DA95138D3L;
    for (p_2986->g_5 = 0; (p_2986->g_5 <= 3); p_2986->g_5 += 1)
    { /* block id: 7 */
        int32_t *l_8 = (void*)0;
        int32_t *l_9 = &p_2986->g_10;
        uint32_t *l_2730 = &p_2986->g_215;
        uint32_t *l_2731 = &p_2986->g_430[4];
        int32_t *l_2732[7] = {&p_2986->g_646,&p_2986->g_646,&p_2986->g_646,&p_2986->g_646,&p_2986->g_646,&p_2986->g_646,&p_2986->g_646};
        uint64_t l_2751 = 0x5CFC0185A9DDC0DBL;
        uint32_t *l_2760[1][1][3];
        struct S0 ***l_2761[1][6] = {{&p_2986->g_533,&p_2986->g_533,&p_2986->g_533,&p_2986->g_533,&p_2986->g_533,&p_2986->g_533}};
        uint8_t *l_2764 = (void*)0;
        uint8_t *l_2765 = &p_2986->g_299;
        uint64_t l_2766[5][5] = {{0xEE7F681EE9FA420CL,0xFF48FA7C77454051L,0x57480A9AA52B6305L,0xFF48FA7C77454051L,0xEE7F681EE9FA420CL},{0xEE7F681EE9FA420CL,0xFF48FA7C77454051L,0x57480A9AA52B6305L,0xFF48FA7C77454051L,0xEE7F681EE9FA420CL},{0xEE7F681EE9FA420CL,0xFF48FA7C77454051L,0x57480A9AA52B6305L,0xFF48FA7C77454051L,0xEE7F681EE9FA420CL},{0xEE7F681EE9FA420CL,0xFF48FA7C77454051L,0x57480A9AA52B6305L,0xFF48FA7C77454051L,0xEE7F681EE9FA420CL},{0xEE7F681EE9FA420CL,0xFF48FA7C77454051L,0x57480A9AA52B6305L,0xFF48FA7C77454051L,0xEE7F681EE9FA420CL}};
        int32_t l_2767 = (-8L);
        int32_t ***l_2768 = &p_2986->g_1317;
        int32_t *l_2782 = &p_2986->g_914[1][6];
        int64_t *l_2817 = &p_2986->g_490;
        uint64_t **l_2836[10][2] = {{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382},{&p_2986->g_1382,&p_2986->g_1382}};
        uint16_t **l_2837 = &p_2986->g_607;
        int32_t *l_2850 = &p_2986->g_2056;
        uint16_t l_2868 = 6UL;
        int64_t l_2947 = (-8L);
        int32_t l_2980 = 0x5B58106BL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_2760[i][j][k] = &p_2986->g_211;
            }
        }
        (1 + 1);
    }
    for (p_2986->g_211 = 0; (p_2986->g_211 <= 2); p_2986->g_211 += 1)
    { /* block id: 1557 */
        int32_t l_2985 = 1L;
        return l_2985;
    }
    (*p_2986->g_1317) = &l_2735[0];
    return (*l_13);
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_2679 p_2986->g_506 p_2986->g_215 p_2986->g_1317 p_2986->g_501 p_2986->g_914 p_2986->g_487 p_2986->g_430 p_2986->g_542 p_2986->g_543 p_2986->g_60 p_2986->g_1068 p_2986->g_1069 p_2986->g_5
 * writes: p_2986->g_2679 p_2986->g_506 p_2986->g_215 p_2986->g_762 p_2986->g_430 p_2986->g_60 p_2986->g_124
 */
struct S0  func_17(int32_t * p_18, struct S1 * p_2986)
{ /* block id: 1393 */
    int32_t l_2675 = 5L;
    int32_t *l_2676[2][8][8] = {{{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0}},{{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0},{&p_2986->g_496,&p_2986->g_133.f0,&p_2986->g_734,&p_2986->g_5,&p_2986->g_133.f0,(void*)0,&p_2986->g_646,(void*)0}}};
    int64_t l_2677 = 0x644EBB4BCD877660L;
    int64_t l_2678 = 0x728A8580C4C41A22L;
    int16_t *l_2710 = &p_2986->g_104;
    uint16_t l_2711 = 0UL;
    uint8_t l_2714 = 0x07L;
    uint32_t *l_2722 = &p_2986->g_334[0][5][4];
    uint32_t **l_2721 = &l_2722;
    struct S0 l_2728[8] = {{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L},{0x66A34B4DL,0x010023ABL,1UL,0xF3F60332L}};
    int i, j, k;
    --p_2986->g_2679;
    for (p_2986->g_506 = 0; (p_2986->g_506 < 17); p_2986->g_506++)
    { /* block id: 1397 */
        int32_t l_2701 = 0L;
        uint32_t *l_2712[2];
        int8_t *l_2713[5] = {&p_2986->g_487,&p_2986->g_487,&p_2986->g_487,&p_2986->g_487,&p_2986->g_487};
        uint64_t *l_2715 = (void*)0;
        uint64_t *l_2716 = (void*)0;
        int32_t l_2717 = 0x0538DAAAL;
        int32_t l_2718[7];
        uint32_t *l_2720 = &p_2986->g_334[0][0][4];
        uint32_t **l_2719 = &l_2720;
        int32_t l_2723 = 0x142474FEL;
        int32_t l_2724 = (-9L);
        uint8_t l_2725 = 0UL;
        int i;
        for (i = 0; i < 2; i++)
            l_2712[i] = &p_2986->g_216;
        for (i = 0; i < 7; i++)
            l_2718[i] = 0x3C4EA2F6L;
        for (p_2986->g_215 = (-12); (p_2986->g_215 == 32); p_2986->g_215 = safe_add_func_uint32_t_u_u(p_2986->g_215, 9))
        { /* block id: 1400 */
            (*p_2986->g_1317) = p_18;
        }
        l_2723 &= (((safe_mul_func_int16_t_s_s((p_2986->g_501[1][2][1] >= (safe_sub_func_uint16_t_u_u(0x0856L, (((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(0UL)), (~((((((l_2717 = (safe_sub_func_int8_t_s_s((p_2986->g_124 = (((safe_div_func_uint64_t_u_u(((((safe_mod_func_uint16_t_u_u(((**p_2986->g_542) ^= (((safe_rshift_func_int16_t_s_s(l_2701, 6)) ^ (l_2701 && (l_2714 = ((p_2986->g_914[7][3] > ((((p_2986->g_430[1] ^= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((-2L) >= (((void*)0 == l_2710) <= p_2986->g_487)), l_2711)), 7)), l_2701))) , (void*)0) == &p_2986->g_450[2][5]) >= 1UL)) >= l_2701)))) | l_2701)), 0x8DB3L)) <= (**p_2986->g_1068)) | 0x86252AB5AA76719DL) , l_2701), (-1L))) ^ l_2701) , 0x1FL)), l_2701))) >= l_2701) | 0x9B4FFA06L) == l_2718[5]) >= 0x01CCL) ^ 0L)))) < 1L) , l_2719) == l_2721) & l_2718[5])))), l_2701)) > (*p_18)) < p_2986->g_2679);
        ++l_2725;
    }
    return l_2728[7];
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_39 p_2986->g_55 p_2986->g_14 p_2986->g_1317 p_2986->g_486 p_2986->g_5 p_2986->g_762 p_2986->g_1362 p_2986->g_736 p_2986->g_542 p_2986->g_543 p_2986->g_741 p_2986->g_132 p_2986->g_216 p_2986->g_734 p_2986->g_153 p_2986->g_661 p_2986->g_373 p_2986->g_913 p_2986->g_534 p_2986->g_60 p_2986->g_104 p_2986->g_342 p_2986->g_430 p_2986->g_222 p_2986->g_133.f3 p_2986->g_456 p_2986->g_208 p_2986->g_188 p_2986->g_133.f2 p_2986->g_506 p_2986->g_334 p_2986->g_501 p_2986->g_500 p_2986->g_125 p_2986->g_533 p_2986->g_549 p_2986->g_490 p_2986->g_535 p_2986->g_299 p_2986->g_2000 p_2986->g_914 p_2986->g_607 p_2986->g_215 p_2986->g_1068 p_2986->g_1069 p_2986->g_429 p_2986->g_133.f0 p_2986->g_2056 p_2986->g_1096 p_2986->g_625 p_2986->g_243 p_2986->g_2207 p_2986->g_2507 p_2986->g_1631
 * writes: p_2986->g_39 p_2986->g_14 p_2986->g_762 p_2986->g_486 p_2986->g_1362 p_2986->g_60 p_2986->g_430 p_2986->g_132 p_2986->g_216 p_2986->g_215 p_2986->g_450 p_2986->g_153 p_2986->g_373 p_2986->g_535 p_2986->g_104 p_2986->g_342 p_2986->g_222 p_2986->g_211 p_2986->g_133.f3 p_2986->g_243 p_2986->g_506 p_2986->g_133.f1 p_2986->g_549 p_2986->g_490 p_2986->g_734 p_2986->g_299 p_2986->g_914 p_2986->g_2000 p_2986->g_429 p_2986->g_133.f0 p_2986->g_2056 p_2986->g_2505 p_2986->g_1463
 */
int32_t * func_19(int32_t * p_20, int16_t  p_21, uint32_t  p_22, uint16_t  p_23, struct S1 * p_2986)
{ /* block id: 10 */
    uint16_t l_25 = 65535UL;
    int8_t *l_38 = &p_2986->g_39;
    struct S0 l_54 = {0x32F1036CL,0x418E8DCEL,1UL,0xFA3CE724L};
    int32_t *l_1891 = &p_2986->g_734;
    int32_t *l_2449 = &p_2986->g_2056;
    int32_t *l_2450 = &p_2986->g_133.f0;
    int32_t l_2451 = 0x16D1C884L;
    int64_t ***l_2508 = &p_2986->g_2506;
    uint64_t l_2548 = 0xBB2B6BC303EFDF89L;
    int32_t l_2564 = 0x4FC2A1D0L;
    int32_t l_2567 = 0x467CE312L;
    int32_t l_2568 = (-2L);
    int32_t l_2608 = 0x5D40C7A5L;
    int32_t l_2610 = 0x7FDAC340L;
    int32_t l_2611 = 1L;
    int32_t l_2614[2];
    int64_t l_2655 = 0x0B98515380D7F53EL;
    uint64_t *l_2670[10] = {&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_535.f2};
    uint64_t **l_2669 = &l_2670[1];
    int i;
    for (i = 0; i < 2; i++)
        l_2614[i] = (-10L);
    if ((l_2451 |= ((*l_2450) = (l_25 , ((*l_1891) = ((*l_2449) |= (((safe_div_func_uint16_t_u_u(0xB51FL, ((safe_add_func_int8_t_s_s(((*l_38) = (safe_lshift_func_int8_t_s_s((func_32(((*l_38) &= 0L), p_21, func_40(&p_2986->g_14, l_38, func_44(l_38, func_47(func_51(l_54, p_20, p_2986), l_1891, (*l_1891), p_2986), p_2986), p_2986), l_54, l_1891, p_2986) , p_2986->g_334[0][2][4]), p_2986->g_501[1][2][2]))), p_21)) & 0x96049F21L))) <= 1L) != p_2986->g_500)))))))
    { /* block id: 1291 */
        int32_t l_2468 = 0x1C0819ACL;
        int32_t l_2476[3];
        int64_t ****l_2504 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_2476[i] = 0x0998C8F5L;
        for (l_54.f0 = 1; (l_54.f0 >= 0); l_54.f0 -= 1)
        { /* block id: 1294 */
            uint32_t l_2452 = 4294967287UL;
            uint32_t l_2467 = 0x450EA0A0L;
            int32_t l_2469 = 0x66F2D28FL;
            uint32_t *l_2474 = &p_2986->g_133.f1;
            uint32_t *l_2475[2][10] = {{&p_2986->g_1631,&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_1631,&p_2986->g_1631,&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_1631},{&p_2986->g_1631,&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_1631,&p_2986->g_1631,&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_430[3],&p_2986->g_1631}};
            int64_t l_2477 = 0x5EBFC91E2900F3C5L;
            int64_t l_2478 = (-1L);
            uint64_t *l_2489[7][9][4] = {{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}},{{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236},{(void*)0,(void*)0,&l_54.f2,&p_2986->g_1236}}};
            int32_t l_2491 = 1L;
            int32_t l_2492 = 0L;
            uint8_t *l_2495 = &p_2986->g_153;
            int i, j, k;
            --l_2452;
            (*l_2449) = (l_2469 = (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((((((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_2986->g_55[(l_54.f0 + 1)] , 1L), (((((safe_add_func_int8_t_s_s((((((*l_1891) = p_2986->g_222[l_54.f0]) != (l_2476[1] |= ((*l_2474) = ((((safe_add_func_int64_t_s_s(((l_2467 & ((((*l_2450) ^= l_2467) >= l_2468) | (l_2469 || (~(safe_mod_func_int64_t_s_s(l_2468, (safe_mod_func_uint64_t_u_u((p_2986->g_2000[2] != p_23), (*l_2449))))))))) < p_22), p_22)) & p_22) , p_2986->g_1096) , p_2986->g_625)))) != 0x7AC3L) ^ l_2467), p_21)) != p_21) , 0x09L) && l_2477) >= 0x4DL))), (-9L))) >= p_23) , p_22) > p_2986->g_535.f3) , 0xA3L) == p_23), l_2478)), l_2468)));
            (*l_2449) = ((safe_mul_func_uint8_t_u_u((*p_2986->g_1069), (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_23, ((((safe_sub_func_uint16_t_u_u(((~((--p_2986->g_243) | (((*l_2495)++) , (0x4AF1L < ((*p_20) <= (*p_20)))))) >= 7L), (safe_mod_func_int16_t_s_s(p_22, (safe_lshift_func_int8_t_s_s((p_23 || (safe_mod_func_int16_t_s_s(0x50C4L, l_2476[0]))), p_21)))))) ^ (*p_20)) != (*l_2449)) && l_2476[1]))), l_2467)))) , l_2477);
        }
        (*l_2450) ^= ((p_2986->g_2505 = (void*)0) == l_2508);
    }
    else
    { /* block id: 1308 */
        (*l_2450) = ((void*)0 != &p_22);
    }
    for (p_2986->g_133.f3 = 24; (p_2986->g_133.f3 >= 17); --p_2986->g_133.f3)
    { /* block id: 1313 */
        int8_t l_2517[7][10] = {{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L},{0x73L,0x64L,0x0AL,0x78L,0x40L,1L,0L,0x34L,7L,2L}};
        int8_t l_2523 = 1L;
        int8_t *l_2532 = (void*)0;
        int8_t *l_2533 = (void*)0;
        int32_t l_2534 = 0x1C02F7D4L;
        int8_t l_2547 = 7L;
        int32_t l_2565 = 0x7BD95A79L;
        int32_t l_2597 = 0x2A085232L;
        int32_t l_2605[6];
        uint16_t l_2615 = 0UL;
        uint16_t l_2622 = 1UL;
        uint64_t **l_2653 = &p_2986->g_1382;
        int i, j;
        for (i = 0; i < 6; i++)
            l_2605[i] = 1L;
        (1 + 1);
    }
    (*p_2986->g_1317) = (((((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((((*l_2450) , (safe_mod_func_uint64_t_u_u((((((*l_1891) = (safe_sub_func_int64_t_s_s((((-10L) == (safe_lshift_func_uint16_t_u_s(((*p_2986->g_543) |= (p_2986->g_625 , (l_2669 != p_2986->g_2207))), 11))) == (0x95L || (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((*p_2986->g_2507) = (*l_2449)) == 4L), (p_2986->g_661 < (*l_2450)))) , (-10L)), 1UL)))), (*l_1891)))) == 0x8BDEBA92L) , 255UL) && 0x13L), p_23))) > p_2986->g_1631), p_2986->g_222[1])), (*l_2450))) == (*l_2449)) ^ 0x0BL) | 65535UL) , p_20);
    return (*p_2986->g_1317);
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_215 p_2986->g_14 p_2986->g_429 p_2986->g_734 p_2986->g_125 p_2986->g_542 p_2986->g_543 p_2986->g_60 p_2986->g_914 p_2986->g_607 p_2986->g_133.f0
 * writes: p_2986->g_133.f3 p_2986->g_14 p_2986->g_429 p_2986->g_734 p_2986->g_133.f0
 */
uint8_t  func_32(int8_t  p_33, uint32_t  p_34, int32_t * p_35, struct S0  p_36, int32_t * p_37, struct S1 * p_2986)
{ /* block id: 1118 */
    int64_t l_2080[6];
    uint32_t *l_2081 = &p_2986->g_133.f3;
    int64_t l_2095 = (-8L);
    int8_t *l_2096[8];
    int32_t l_2097 = 0x6C626977L;
    int32_t *l_2098 = &p_2986->g_133.f0;
    uint8_t l_2105 = 255UL;
    int64_t *l_2108 = &p_2986->g_1096;
    uint32_t *l_2117 = &p_2986->g_133.f1;
    int16_t *l_2118 = &p_2986->g_104;
    uint64_t l_2119[3][5][4] = {{{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL}},{{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL}},{{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL},{0xE6EC7DC168F052B4L,0x462C373FF6AF70C5L,0x2A49DD9618E897B7L,1UL}}};
    int16_t *l_2120 = (void*)0;
    int16_t *l_2121[3];
    uint32_t l_2122 = 3UL;
    struct S0 *l_2123 = (void*)0;
    int32_t *l_2124 = &p_2986->g_429;
    uint16_t **l_2173 = &p_2986->g_543;
    int8_t l_2203 = (-1L);
    int32_t l_2223 = (-1L);
    int32_t l_2254[4][9] = {{0L,0L,0L,0x0EA56B20L,0x234490FFL,0x0EA56B20L,0L,0L,0L},{0L,0L,0L,0x0EA56B20L,0x234490FFL,0x0EA56B20L,0L,0L,0L},{0L,0L,0L,0x0EA56B20L,0x234490FFL,0x0EA56B20L,0L,0L,0L},{0L,0L,0L,0x0EA56B20L,0x234490FFL,0x0EA56B20L,0L,0L,0L}};
    int64_t l_2291 = 0x0ACB78E0922B9B50L;
    int32_t l_2308 = (-4L);
    uint32_t l_2314[5];
    int32_t l_2317 = 0L;
    int32_t l_2323 = (-1L);
    uint64_t l_2338 = 1UL;
    uint8_t l_2389 = 0x4DL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2080[i] = 0x2955255962F0E238L;
    for (i = 0; i < 8; i++)
        l_2096[i] = &p_2986->g_208;
    for (i = 0; i < 3; i++)
        l_2121[i] = &p_2986->g_188;
    for (i = 0; i < 5; i++)
        l_2314[i] = 0UL;
    (*l_2098) ^= ((safe_add_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((*l_2081) = (0x7580L | l_2080[2])) , (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_uint16_t_u_u(((l_2097 = (p_33 ^= ((~(l_2095 = (safe_mul_func_int16_t_s_s((p_2986->g_215 , (safe_sub_func_int32_t_s_s(((*p_35) |= l_2080[5]), p_36.f0))), ((l_2080[2] && p_2986->g_125) , (l_2080[2] != ((-1L) < l_2080[2]))))))) >= 0xC092L))) , (**p_2986->g_542)), p_36.f2)))), 0x1EL)) || 0xEBE1E89DBBB0CF77L) <= 0x576BC94AF7A52873L) , (-3L)), 1)), (-9L)))), p_2986->g_914[3][1])) && l_2095), (*p_2986->g_607))) < l_2080[2]);
    return (*l_2124);
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_132 p_2986->g_736 p_2986->g_661 p_2986->g_373 p_2986->g_913 p_2986->g_534 p_2986->g_5 p_2986->g_55 p_2986->g_14 p_2986->g_60 p_2986->g_104 p_2986->g_342 p_2986->g_430 p_2986->g_222 p_2986->g_133.f3 p_2986->g_456 p_2986->g_208 p_2986->g_188 p_2986->g_133.f2 p_2986->g_506 p_2986->g_334 p_2986->g_501 p_2986->g_500 p_2986->g_125 p_2986->g_533 p_2986->g_542 p_2986->g_549 p_2986->g_490 p_2986->g_535 p_2986->g_734 p_2986->g_1317 p_2986->g_299 p_2986->g_2000 p_2986->g_914 p_2986->g_607 p_2986->g_741 p_2986->g_215 p_2986->g_762 p_2986->g_1068 p_2986->g_1069
 * writes: p_2986->g_132 p_2986->g_373 p_2986->g_535 p_2986->g_104 p_2986->g_60 p_2986->g_342 p_2986->g_14 p_2986->g_430 p_2986->g_222 p_2986->g_450 p_2986->g_211 p_2986->g_133.f3 p_2986->g_243 p_2986->g_506 p_2986->g_133.f1 p_2986->g_549 p_2986->g_490 p_2986->g_153 p_2986->g_734 p_2986->g_762 p_2986->g_299 p_2986->g_914 p_2986->g_2000
 */
int32_t * func_40(int32_t * p_41, int8_t * p_42, int32_t * p_43, struct S1 * p_2986)
{ /* block id: 1015 */
    uint32_t l_1905 = 0xEBF31824L;
    uint32_t l_1918 = 0xEC18AAC9L;
    int32_t l_1952 = 0x20C130D0L;
    int32_t l_1955 = (-1L);
    int32_t l_1960 = (-10L);
    int32_t l_1962[9][6][4] = {{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}},{{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL},{0x764F39BAL,1L,1L,0x764F39BAL}}};
    int8_t l_2050[8][7][4] = {{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}},{{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L},{0x2EL,0x06L,0x11L,0x39L}}};
    uint8_t *l_2074 = &p_2986->g_2000[4];
    int8_t *l_2075 = &l_2050[6][4][2];
    int i, j, k;
    for (p_2986->g_132 = (-10); (p_2986->g_132 != 40); ++p_2986->g_132)
    { /* block id: 1018 */
        int8_t **l_1898 = (void*)0;
        int8_t ***l_1897 = &l_1898;
        uint64_t *l_1899[8][4][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_1902 = 0x18DEDF37L;
        struct S0 l_1906 = {-9L,0xFCDCFD27L,0xEEF37C1CEA605892L,0xC6F93000L};
        uint16_t *l_1908 = &p_2986->g_60;
        int32_t l_1964[10][6] = {{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)},{0x026C470EL,0x5E324F7AL,0x5E324F7AL,0x026C470EL,0L,(-9L)}};
        int8_t l_1974 = 1L;
        int8_t l_1975 = 5L;
        int32_t l_1977 = (-10L);
        uint8_t **l_1996[2];
        int64_t *l_2001 = &p_2986->g_796;
        int8_t l_2016 = 0x05L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1996[i] = &p_2986->g_1069;
        if ((((l_1897 == (void*)0) ^ (p_2986->g_736[4][1][4] & ((((p_2986->g_373 |= p_2986->g_661) < ((safe_rshift_func_uint16_t_u_u(l_1902, 1)) >= (l_1902 , (0x3FB648B1L < (safe_add_func_int32_t_s_s(l_1905, p_2986->g_913)))))) || l_1905) >= l_1905))) > 0L))
        { /* block id: 1020 */
            struct S0 l_1907[3][6][8] = {{{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}}},{{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}}},{{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}},{{-3L,1UL,6UL,0xD0BAACFEL},{0x11526160L,0UL,18446744073709551615UL,0x7B0AD357L},{-1L,0UL,18446744073709551615UL,0x26C5ABE8L},{9L,0UL,0x7E75C8D5DD65FF39L,0x6F4699F8L},{0x6367B035L,4294967295UL,0x053384C300BFBF72L,0UL},{0x7556AC77L,4294967291UL,18446744073709551609UL,4294967287UL},{0x620FDDECL,1UL,18446744073709551613UL,0xA6F81D40L},{0x6038F21EL,0xCFAD894DL,0UL,4294967295UL}}}};
            int32_t *l_1932 = &l_1907[0][3][0].f0;
            struct S0 l_1943 = {0L,0xD3140634L,0x837FF409F7490AD1L,0xE15F3DB0L};
            int32_t *l_1944 = &p_2986->g_914[1][6];
            int32_t l_1961 = (-1L);
            int32_t l_1965 = 0x3E065BFDL;
            int32_t l_1967 = 0x538DDC2DL;
            int32_t l_1968[9][10][2] = {{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}},{{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L},{0L,0x24D045A8L}}};
            int64_t *l_2002 = &p_2986->g_1096;
            uint64_t l_2069 = 0UL;
            int i, j, k;
            (*p_2986->g_534) = l_1906;
            (*p_2986->g_534) = func_70(l_1907[0][3][0], l_1908, p_2986);
            for (p_2986->g_535.f3 = 0; (p_2986->g_535.f3 < 38); ++p_2986->g_535.f3)
            { /* block id: 1025 */
                uint8_t l_1941[4] = {0x9BL,0x9BL,0x9BL,0x9BL};
                int32_t l_1953 = 0x7570970EL;
                int32_t l_1956 = 0x7D2D225CL;
                int32_t l_1957 = 1L;
                int32_t l_1958[1][10] = {{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}};
                int64_t l_1959 = (-1L);
                struct S0 l_2005 = {-2L,4294967295UL,0x3A405008DB593B29L,0xC1B99DA1L};
                int i, j;
                (1 + 1);
            }
            for (p_2986->g_734 = 1; (p_2986->g_734 >= 0); p_2986->g_734 -= 1)
            { /* block id: 1084 */
                int32_t l_2051 = 0x67A93248L;
                int32_t l_2052 = 0x2C453E17L;
                int32_t l_2053[10][3] = {{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L},{3L,0x1F9AA6CDL,0x63D19DE9L}};
                int i, j;
                (*p_2986->g_1317) = &l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)];
                for (p_2986->g_299 = 0; (p_2986->g_299 <= 1); p_2986->g_299 += 1)
                { /* block id: 1088 */
                    int64_t l_2017 = (-8L);
                    int32_t l_2048 = 0x694299CBL;
                    int32_t l_2049 = 1L;
                    int32_t l_2054[5][9] = {{1L,0x7CCA2A0EL,(-1L),0x01752C86L,0x2D2BFC73L,0x01752C86L,(-1L),0x7CCA2A0EL,1L},{1L,0x7CCA2A0EL,(-1L),0x01752C86L,0x2D2BFC73L,0x01752C86L,(-1L),0x7CCA2A0EL,1L},{1L,0x7CCA2A0EL,(-1L),0x01752C86L,0x2D2BFC73L,0x01752C86L,(-1L),0x7CCA2A0EL,1L},{1L,0x7CCA2A0EL,(-1L),0x01752C86L,0x2D2BFC73L,0x01752C86L,(-1L),0x7CCA2A0EL,1L},{1L,0x7CCA2A0EL,(-1L),0x01752C86L,0x2D2BFC73L,0x01752C86L,(-1L),0x7CCA2A0EL,1L}};
                    int64_t l_2055 = 0L;
                    int i, j;
                    if (((*l_1944) = ((((((p_2986->g_2000[p_2986->g_299] && (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((p_2986->g_2000[4] , (0x3DL <= (safe_div_func_uint32_t_u_u((*l_1944), 6UL)))), ((safe_unary_minus_func_uint16_t_u(((((*l_1932) , ((*l_1908) = (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((*p_2986->g_607))) ^ l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)]), (l_2016 == l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)]))))) <= 0x30E4L) == 4L))) | 0x54DE32BBL))), l_1952))) != l_1962[4][0][2]) , 1L) > 0x01E4F83CC13FCDF0L) | l_2017) != l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)])))
                    { /* block id: 1091 */
                        uint8_t l_2038[6][5][6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_2038[i][j][k] = 0x2CL;
                            }
                        }
                        (*p_2986->g_762) = (l_1902 > (((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((safe_div_func_int8_t_s_s(p_2986->g_741[0][0][0], l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)])) < (((safe_mul_func_int8_t_s_s((((*l_1944) |= ((*p_41) = (-1L))) , (safe_mod_func_int8_t_s_s(((((((*l_1897) = ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)], (safe_sub_func_uint16_t_u_u(l_2017, ((safe_mod_func_uint64_t_u_u((p_2986->g_430[0] < ((((0x10A065D020E52209L & (safe_add_func_int64_t_s_s((l_1964[0][0] || (-2L)), l_1960))) , 0xE3L) != (*l_1932)) , 0x869F2773CD8268F0L)), 0x4DF416ECE8B49481L)) == p_2986->g_549))))), l_2038[5][4][1])) , (void*)0)) != (void*)0) && l_1964[3][3]) == 18446744073709551606UL) > (-5L)), p_2986->g_2000[p_2986->g_299]))), p_2986->g_2000[p_2986->g_299])) >= l_1906.f0) ^ l_1906.f1)) || l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)]), l_1952)), p_2986->g_215)) < l_1962[4][1][1]) ^ 4294967295UL));
                    }
                    else
                    { /* block id: 1096 */
                        int32_t *l_2039 = (void*)0;
                        int32_t *l_2040 = &l_1955;
                        int32_t *l_2041 = &l_1965;
                        int32_t *l_2042 = (void*)0;
                        int32_t *l_2043 = &l_1964[8][3];
                        int32_t *l_2044 = &l_1955;
                        int32_t *l_2045 = &p_2986->g_914[6][4];
                        int32_t *l_2046 = &p_2986->g_914[1][6];
                        int32_t *l_2047[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t l_2057[7] = {0x9663B8F4179AB5D0L,0x95FB93823506E084L,0x9663B8F4179AB5D0L,0x9663B8F4179AB5D0L,0x95FB93823506E084L,0x9663B8F4179AB5D0L,0x9663B8F4179AB5D0L};
                        int i;
                        l_2057[1]++;
                    }
                    (*p_41) |= (safe_mul_func_int8_t_s_s((l_1964[(p_2986->g_734 + 2)][(p_2986->g_734 + 3)] <= l_2054[3][7]), (safe_div_func_int8_t_s_s(l_2053[2][2], 0x99L))));
                }
                for (l_1977 = 1; (l_1977 >= 0); l_1977 -= 1)
                { /* block id: 1103 */
                    int32_t *l_2064 = &l_1968[(l_1977 + 7)][(l_1977 + 3)][p_2986->g_734];
                    int32_t *l_2065 = &l_1962[2][2][3];
                    int32_t *l_2066[7][2] = {{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646},{&p_2986->g_2056,&p_2986->g_646}};
                    int32_t l_2067 = 5L;
                    int32_t l_2068 = 0x4CA7CAC4L;
                    int i, j, k;
                    l_1968[(l_1977 + 7)][(l_1977 + 3)][p_2986->g_734] = (**p_2986->g_1317);
                    --l_2069;
                }
            }
        }
        else
        { /* block id: 1108 */
            return (*p_2986->g_1317);
        }
        return p_41;
    }
    (*p_2986->g_1317) = &l_1952;
    (*p_2986->g_762) ^= (safe_mod_func_int64_t_s_s(((((*l_2074) &= (**p_2986->g_1068)) == ((*l_2075) = (0x23L <= (-5L)))) , l_1955), p_2986->g_456));
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_1317 p_2986->g_762
 * writes: p_2986->g_762
 */
int32_t * func_44(int8_t * p_45, int32_t * p_46, struct S1 * p_2986)
{ /* block id: 1012 */
    (*p_2986->g_1317) = p_46;
    return (*p_2986->g_1317);
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_153
 * writes: p_2986->g_215 p_2986->g_132 p_2986->g_450 p_2986->g_153
 */
int32_t * func_47(int8_t  p_48, int32_t * p_49, uint32_t  p_50, struct S1 * p_2986)
{ /* block id: 1004 */
    int32_t *l_1894 = &p_2986->g_429;
    for (p_2986->g_215 = 0; p_2986->g_215 < 3; p_2986->g_215 += 1)
    {
        for (p_2986->g_132 = 0; p_2986->g_132 < 6; p_2986->g_132 += 1)
        {
            p_2986->g_450[p_2986->g_215][p_2986->g_132] = &p_2986->g_867;
        }
    }
    for (p_2986->g_153 = 0; (p_2986->g_153 > 31); ++p_2986->g_153)
    { /* block id: 1008 */
        return l_1894;
    }
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_55 p_2986->g_14 p_2986->g_1317 p_2986->g_486 p_2986->g_5 p_2986->g_762 p_2986->g_1362 p_2986->g_736 p_2986->g_542 p_2986->g_543 p_2986->g_741 p_2986->g_132 p_2986->g_216
 * writes: p_2986->g_14 p_2986->g_762 p_2986->g_486 p_2986->g_1362 p_2986->g_60 p_2986->g_430 p_2986->g_132 p_2986->g_216
 */
int8_t  func_51(struct S0  p_52, int32_t * p_53, struct S1 * p_2986)
{ /* block id: 12 */
    uint16_t *l_81 = &p_2986->g_60;
    uint16_t **l_80 = &l_81;
    int8_t l_1811 = 1L;
    uint16_t l_1840 = 0x1174L;
    struct S0 l_1844 = {0x5DFE0405L,0x49E9D7E4L,0x0941CF16021D860FL,0x2C403062L};
    int32_t l_1879 = 0x62BF2C54L;
    int32_t l_1880[5];
    int i;
    for (i = 0; i < 5; i++)
        l_1880[i] = 9L;
    for (p_52.f0 = 5; (p_52.f0 >= 1); p_52.f0 -= 1)
    { /* block id: 15 */
        uint16_t *l_82 = (void*)0;
        int32_t l_1812 = 0x0432AEBCL;
        uint32_t l_1827 = 5UL;
        int32_t l_1835 = (-6L);
        int32_t l_1836[3][9] = {{0x64E21687L,(-1L),0x18D385D6L,(-1L),0x64E21687L,0x64E21687L,(-1L),0x18D385D6L,(-1L)},{0x64E21687L,(-1L),0x18D385D6L,(-1L),0x64E21687L,0x64E21687L,(-1L),0x18D385D6L,(-1L)},{0x64E21687L,(-1L),0x18D385D6L,(-1L),0x64E21687L,0x64E21687L,(-1L),0x18D385D6L,(-1L)}};
        int i, j;
        for (p_52.f2 = 0; (p_52.f2 <= 5); p_52.f2 += 1)
        { /* block id: 18 */
            int32_t *l_56 = &p_2986->g_14;
            int32_t l_1831 = 1L;
            int32_t l_1834 = (-1L);
            int32_t l_1877[3][2][3] = {{{(-1L),0x287DADE1L,(-1L)},{(-1L),0x287DADE1L,(-1L)}},{{(-1L),0x287DADE1L,(-1L)},{(-1L),0x287DADE1L,(-1L)}},{{(-1L),0x287DADE1L,(-1L)},{(-1L),0x287DADE1L,(-1L)}}};
            uint32_t *l_1888 = &p_2986->g_430[0];
            uint32_t *l_1889 = &p_2986->g_132;
            uint32_t *l_1890 = &p_2986->g_216;
            int i, j, k;
            (*l_56) ^= p_2986->g_55[p_52.f0];
            for (p_52.f3 = 1; (p_52.f3 <= 5); p_52.f3 += 1)
            { /* block id: 22 */
                uint16_t *l_76[5];
                int32_t l_1795[3];
                int32_t l_1808 = 0x3D3B06B5L;
                int64_t l_1838 = 0x1C40EB7979E3F933L;
                int32_t *l_1884 = &l_1831;
                int i;
                for (i = 0; i < 5; i++)
                    l_76[i] = &p_2986->g_60;
                for (i = 0; i < 3; i++)
                    l_1795[i] = 1L;
                (*l_56) = p_2986->g_55[p_52.f0];
                for (p_52.f1 = 1; (p_52.f1 <= 5); p_52.f1 += 1)
                { /* block id: 26 */
                    uint16_t *l_59 = &p_2986->g_60;
                    uint16_t **l_75 = &l_59;
                    int16_t *l_1794[4] = {&p_2986->g_867,&p_2986->g_867,&p_2986->g_867,&p_2986->g_867};
                    int64_t l_1806 = 2L;
                    int32_t l_1837 = (-1L);
                    int32_t l_1839 = 0x242DF0E3L;
                    struct S0 l_1845 = {0x76E216E6L,0UL,0x53BF37FCED841D24L,0xAD8A24DAL};
                    int32_t **l_1848[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1848[i] = &l_56;
                    (1 + 1);
                }
                (*p_2986->g_1317) = &l_1812;
                for (p_2986->g_486 = 2; (p_2986->g_486 > 24); ++p_2986->g_486)
                { /* block id: 970 */
                    int64_t l_1851 = 0x1B94285C9F268168L;
                    int32_t l_1876 = 0x30323051L;
                    int32_t l_1878[9][2] = {{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L},{0x64C71B62L,0x64C71B62L}};
                    uint32_t l_1881[5][10][4] = {{{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L}},{{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L}},{{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L}},{{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L}},{{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L},{0xFA05B069L,4294967295UL,0x178DAF0DL,0xFA05B069L}}};
                    int i, j, k;
                    if ((*p_53))
                        break;
                    l_1851 = ((*l_56) = ((*p_2986->g_762) = (*p_53)));
                    for (p_2986->g_1362 = 0; (p_2986->g_1362 <= 2); p_2986->g_1362 += 1)
                    { /* block id: 977 */
                        int i, j, k;
                        return p_2986->g_736[p_2986->g_1362][p_2986->g_1362][p_2986->g_1362];
                    }
                    if ((((safe_sub_func_uint8_t_u_u(((-8L) ^ 0x0A2BFE27L), ((((**p_2986->g_542) = (p_52.f1 , ((*l_56) |= l_1811))) & (safe_rshift_func_int16_t_s_s(0L, (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((void*)0 != p_53) , (((**p_2986->g_1317) && (((safe_div_func_int16_t_s_s(p_2986->g_55[p_52.f0], l_1844.f2)) < p_2986->g_741[0][0][0]) > 0x5E87415BL)) , p_2986->g_132)), p_52.f1)), 0x51F7L))))) , l_1811))) != 0x704393EDL) < p_52.f1))
                    { /* block id: 982 */
                        int32_t *l_1862 = (void*)0;
                        int32_t *l_1863 = &l_1808;
                        int32_t *l_1864 = (void*)0;
                        int32_t *l_1865 = &p_2986->g_535.f0;
                        int32_t *l_1866 = &p_2986->g_496;
                        int32_t *l_1867 = &p_2986->g_496;
                        int32_t *l_1868 = &p_2986->g_914[3][3];
                        int32_t *l_1869 = &l_1836[1][2];
                        int32_t *l_1870 = &l_1831;
                        int32_t *l_1871 = &l_1831;
                        int32_t *l_1872 = &p_2986->g_14;
                        int32_t *l_1873 = &l_1808;
                        int32_t *l_1874 = (void*)0;
                        int32_t *l_1875[6][3][9] = {{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}},{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}},{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}},{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}},{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}},{{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808},{&p_2986->g_914[2][3],&p_2986->g_496,(void*)0,(void*)0,&l_1836[1][0],&l_1812,(void*)0,&p_2986->g_914[1][6],&l_1808}}};
                        int i, j, k;
                        l_1881[3][2][1]++;
                        (*p_2986->g_1317) = l_1884;
                    }
                    else
                    { /* block id: 985 */
                        int64_t l_1885 = 1L;
                        (*l_56) ^= (l_1885 , ((!1UL) , (*p_53)));
                        if ((*l_56))
                            break;
                        if ((*p_53))
                            break;
                    }
                }
            }
            for (l_1879 = 12; (l_1879 > 16); l_1879 = safe_add_func_uint16_t_u_u(l_1879, 3))
            { /* block id: 994 */
                return l_1836[1][7];
            }
            (*l_56) &= (((*l_1889) &= ((*l_1888) = 0xDD69B47DL)) < ((*l_1890) |= (0UL != 0xD1L)));
        }
    }
    return p_52.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_501 p_2986->g_607 p_2986->g_133.f3 p_2986->g_60 p_2986->g_5 p_2986->g_55 p_2986->g_14 p_2986->g_104 p_2986->g_342 p_2986->g_430 p_2986->g_222 p_2986->g_132 p_2986->g_456 p_2986->g_208 p_2986->g_188 p_2986->g_133.f2 p_2986->g_506 p_2986->g_334 p_2986->g_500 p_2986->g_125 p_2986->g_533 p_2986->g_542 p_2986->g_549 p_2986->g_534 p_2986->g_490 p_2986->g_535 p_2986->g_661 p_2986->g_648 p_2986->g_543 p_2986->g_796 p_2986->g_133.f1 p_2986->g_373 p_2986->g_867 p_2986->g_762 p_2986->g_736 p_2986->g_299 p_2986->g_124 p_2986->g_1068 p_2986->g_1069 p_2986->g_646 p_2986->g_1120 p_2986->g_1106 p_2986->g_133.f0 p_2986->g_913 p_2986->g_487 p_2986->g_1236 p_2986->g_1237 p_2986->g_153 p_2986->g_734 p_2986->g_1238 p_2986->g_1096 p_2986->g_1362 p_2986->g_1376 p_2986->g_1377 p_2986->g_1381 p_2986->g_1317 p_2986->g_914 p_2986->g_211 p_2986->g_486 p_2986->g_216 p_2986->g_496 p_2986->g_429 p_2986->g_1532 p_2986->g_495 p_2986->g_1631 p_2986->g_243 p_2986->g_1700 p_2986->g_215 p_2986->g_1463 p_2986->g_625
 * writes: p_2986->g_125 p_2986->g_188 p_2986->g_104 p_2986->g_60 p_2986->g_342 p_2986->g_14 p_2986->g_430 p_2986->g_222 p_2986->g_450 p_2986->g_211 p_2986->g_133.f3 p_2986->g_243 p_2986->g_506 p_2986->g_133.f1 p_2986->g_549 p_2986->g_535 p_2986->g_490 p_2986->g_153 p_2986->g_495 p_2986->g_648 p_2986->g_867 p_2986->g_796 p_2986->g_500 p_2986->g_762 p_2986->g_543 p_2986->g_299 p_2986->g_373 p_2986->g_487 p_2986->g_1120 p_2986->g_646 p_2986->g_707 p_2986->g_736 p_2986->g_534 p_2986->g_133.f0 p_2986->g_216 p_2986->g_124 p_2986->g_132 p_2986->g_1317 p_2986->g_1096 p_2986->g_734 p_2986->g_542 p_2986->g_1362 p_2986->g_891 p_2986->g_914 p_2986->g_486 p_2986->g_1236 p_2986->g_496 p_2986->g_661 p_2986->g_429 p_2986->g_334 p_2986->g_1631 p_2986->g_1069
 */
uint16_t  func_65(int32_t  p_66, struct S0  p_67, struct S1 * p_2986)
{ /* block id: 507 */
    int32_t l_931 = 1L;
    int16_t *l_940 = (void*)0;
    int16_t *l_941 = &p_2986->g_188;
    int16_t *l_942[2];
    int32_t l_943 = 1L;
    int32_t l_978 = (-1L);
    uint8_t l_999 = 0UL;
    uint32_t l_1063 = 2UL;
    uint8_t **l_1070 = &p_2986->g_1069;
    int32_t l_1100 = 0x09986E17L;
    int32_t l_1105 = 0L;
    int32_t l_1109[5];
    int8_t l_1112 = 0x74L;
    int32_t l_1119 = 1L;
    int16_t l_1163 = 0x558DL;
    uint64_t *l_1193[9][1][6] = {{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}},{{&p_2986->g_373,&p_2986->g_535.f2,&p_2986->g_535.f2,&p_2986->g_373,&p_2986->g_648,&p_2986->g_648}}};
    struct S0 *l_1217[1];
    uint16_t ****l_1218 = (void*)0;
    int64_t *l_1240 = &p_2986->g_490;
    int64_t **l_1239 = &l_1240;
    uint32_t l_1247 = 0UL;
    int32_t l_1258 = 0x77F42A80L;
    int32_t **l_1315 = &p_2986->g_762;
    int32_t l_1319 = 0x688924C0L;
    int8_t *l_1349[4] = {&l_1112,&l_1112,&l_1112,&l_1112};
    int8_t **l_1348 = &l_1349[1];
    uint32_t l_1371 = 0x6DA45C6FL;
    uint8_t ***l_1488 = (void*)0;
    uint8_t ****l_1487 = &l_1488;
    int64_t l_1556 = 8L;
    int64_t l_1667[1][3];
    int32_t *l_1668 = (void*)0;
    int16_t l_1682[2][2] = {{1L,1L},{1L,1L}};
    uint8_t l_1770 = 8UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_942[i] = &p_2986->g_867;
    for (i = 0; i < 5; i++)
        l_1109[i] = 4L;
    for (i = 0; i < 1; i++)
        l_1217[i] = &p_2986->g_535;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1667[i][j] = 0x279DBB4399705538L;
    }
    if ((((func_70(func_70(((l_943 = ((*l_941) = (safe_lshift_func_int8_t_s_s(l_931, (p_67.f3 , (9L != (((safe_sub_func_int64_t_s_s(1L, (((((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((0x54L || (safe_mul_func_int16_t_s_s(l_931, ((*p_2986->g_607) = (p_2986->g_501[1][1][4] > (p_67.f0 , ((void*)0 != &p_2986->g_891))))))), p_67.f3)), 0x49L)) , 0xD4311C9FL) , p_2986->g_133.f3) , p_2986->g_60) < p_67.f3))) != 0x56L) > (-4L)))))))) , p_67), l_941, p_2986), l_941, p_2986) , 0x42CC84F2L) > 0x3F217705L) == p_67.f1))
    { /* block id: 511 */
        int64_t l_944 = (-6L);
        int32_t l_979[1];
        uint64_t *l_998[5];
        uint8_t **l_1073 = &p_2986->g_1069;
        uint8_t **l_1080[7] = {&p_2986->g_1069,&p_2986->g_1069,&p_2986->g_1069,&p_2986->g_1069,&p_2986->g_1069,&p_2986->g_1069,&p_2986->g_1069};
        int16_t l_1111 = 1L;
        int16_t l_1113 = 0x7FA4L;
        int32_t l_1114 = 1L;
        uint32_t *l_1168 = &p_2986->g_334[0][5][0];
        int i;
        for (i = 0; i < 1; i++)
            l_979[i] = (-1L);
        for (i = 0; i < 5; i++)
            l_998[i] = (void*)0;
lbl_1065:
        l_944 |= ((&p_2986->g_222[0] != (void*)0) && 0x9FL);
        for (p_2986->g_495 = 0; (p_2986->g_495 != 23); p_2986->g_495 = safe_add_func_uint32_t_u_u(p_2986->g_495, 6))
        { /* block id: 515 */
            uint32_t l_964 = 4294967292UL;
            uint32_t l_1004[8][5][6] = {{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}},{{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L},{4294967290UL,4294967288UL,0xE048A073L,0x9AB5A88AL,0UL,0x573628D8L}}};
            int32_t **l_1007 = &p_2986->g_762;
            int32_t l_1028 = (-1L);
            uint16_t *l_1029[1];
            uint16_t ***l_1044[7] = {&p_2986->g_542,&p_2986->g_542,&p_2986->g_542,&p_2986->g_542,&p_2986->g_542,&p_2986->g_542,&p_2986->g_542};
            int32_t l_1097 = (-1L);
            int32_t l_1103 = (-1L);
            int32_t l_1107 = 0x2C0275BFL;
            int32_t l_1108 = 0x79FCEAFBL;
            int32_t l_1110 = 0x2F7E51AEL;
            int32_t l_1115 = 0x54F44AD4L;
            int32_t l_1116 = 0L;
            int32_t l_1117 = (-3L);
            int32_t l_1118 = 0x2673FD64L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1029[i] = &p_2986->g_741[0][0][0];
            for (p_2986->g_133.f1 = 24; (p_2986->g_133.f1 != 8); p_2986->g_133.f1--)
            { /* block id: 518 */
                uint8_t *l_961 = &p_2986->g_506;
                uint64_t *l_967 = &p_2986->g_648;
                int32_t l_974 = 0L;
                int64_t *l_977 = &p_2986->g_796;
                int32_t *l_981 = &l_943;
                if (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((safe_div_func_int64_t_s_s((l_979[0] = (safe_mul_func_uint8_t_u_u((p_67.f2 & ((((((((l_944 <= (safe_mul_func_int8_t_s_s((((*l_961) = (p_2986->g_661 , p_66)) <= ((safe_lshift_func_uint8_t_u_u(l_964, 3)) , 9L)), (safe_add_func_uint64_t_u_u((--(*l_967)), (l_943 != ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(((*p_2986->g_543) = l_974), 14)) <= (l_978 = (safe_div_func_int64_t_s_s(((*l_977) |= (l_943 || p_66)), 0x579C55C7BECAD026L)))), 2)) > l_944))))))) , p_2986->g_55[3]) , p_67.f2) == p_2986->g_133.f3) || l_943) , p_2986->g_334[0][3][0]) & l_944) & 0x3C6CL)), 0L))), p_2986->g_133.f1)) , l_979[0]) && l_943), (-3L))), 0xE3D6B579L)), p_67.f3)) >= p_66))
                { /* block id: 525 */
                    int32_t **l_980[5][2] = {{&p_2986->g_762,&p_2986->g_762},{&p_2986->g_762,&p_2986->g_762},{&p_2986->g_762,&p_2986->g_762},{&p_2986->g_762,&p_2986->g_762},{&p_2986->g_762,&p_2986->g_762}};
                    int i, j;
                    l_981 = &l_979[0];
                }
                else
                { /* block id: 527 */
                    uint32_t l_986 = 0x12787A66L;
                    for (p_2986->g_500 = 11; (p_2986->g_500 < 18); p_2986->g_500++)
                    { /* block id: 530 */
                        uint8_t l_989[7] = {248UL,0UL,248UL,248UL,0UL,248UL,248UL};
                        int32_t l_1000 = (-1L);
                        int i;
                        (*l_981) |= (((p_2986->g_501[0][1][1] | (((safe_mul_func_int8_t_s_s(l_986, p_2986->g_373)) | l_979[0]) || (safe_lshift_func_uint8_t_u_u(l_989[3], 1)))) , p_67.f2) || ((p_2986->g_506 = (((safe_add_func_uint16_t_u_u((1UL >= ((*l_977) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((((void*)0 == l_998[2]) != l_979[0]) != 0x4004L), 2UL)), 0x0DL)) || p_67.f3), 0x1CL)))), (*p_2986->g_543))) > l_999) & l_1000)) <= 255UL));
                    }
                }
                for (l_978 = (-12); (l_978 == (-28)); l_978 = safe_sub_func_int64_t_s_s(l_978, 2))
                { /* block id: 538 */
                    int32_t *l_1003[1][7][5] = {{{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943},{&l_943,(void*)0,(void*)0,(void*)0,&l_943}}};
                    int i, j, k;
                    ++l_1004[5][3][4];
                    if (p_66)
                        continue;
                    return l_978;
                }
            }
            (*l_1007) = &p_2986->g_14;
            if ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s(0x4FACL, 5)) || (7UL & (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_978 = ((safe_add_func_uint64_t_u_u(p_2986->g_104, l_999)) || (((((l_1028 = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((0x4EC3L > (~((*l_941) = (((safe_div_func_uint64_t_u_u((((1L <= l_978) > ((*p_2986->g_762) = (safe_rshift_func_uint16_t_u_s(l_979[0], p_67.f3)))) & l_943), 1L)) , (*p_2986->g_543)) <= 0xD97CL)))), p_2986->g_535.f2)), 4)), l_931))) <= p_67.f2) , 2L) == p_67.f0) > 0x28L))), p_67.f0)), l_979[0])))), p_67.f2)))
            { /* block id: 549 */
                struct S0 l_1049 = {1L,0xF2A5768FL,18446744073709551613UL,0x7D104C3CL};
                int32_t *l_1064 = (void*)0;
                if ((((*p_2986->g_542) = l_942[1]) != l_1029[0]))
                { /* block id: 551 */
                    uint16_t l_1050[7] = {1UL,3UL,1UL,1UL,3UL,1UL,1UL};
                    int32_t l_1052 = 0x0B278B3FL;
                    int i;
                    for (p_2986->g_211 = 0; (p_2986->g_211 < 31); ++p_2986->g_211)
                    { /* block id: 554 */
                        int64_t *l_1051 = &p_2986->g_500;
                        l_1052 = (0x356757D4L & (safe_mul_func_int16_t_s_s(0x57BBL, (safe_sub_func_int64_t_s_s(((*l_1051) ^= (safe_add_func_uint64_t_u_u((++p_67.f2), (safe_sub_func_uint64_t_u_u((((p_2986->g_506++) == (((void*)0 != l_1044[3]) == (safe_lshift_func_uint16_t_u_s(l_931, 4)))) , (((safe_div_func_uint64_t_u_u((((((0x144AL | (l_1049 , (&p_2986->g_334[0][3][1] == (void*)0))) & l_979[0]) ^ (*p_2986->g_762)) ^ (*p_2986->g_762)) <= p_66), p_66)) , p_66) , 0x69705F4862872EC0L)), l_1050[2]))))), p_2986->g_736[1][2][2])))));
                    }
                }
                else
                { /* block id: 560 */
                    uint8_t *l_1055 = &p_2986->g_299;
                    uint8_t *l_1062 = &p_2986->g_153;
                    (**l_1007) = ((p_2986->g_373 = (safe_add_func_uint8_t_u_u(((0x1BL < (l_931 & l_944)) , (++(*l_1055))), ((p_67.f0 > (p_67.f3 | (((safe_sub_func_uint64_t_u_u(((p_2986->g_124 , ((1UL && ((p_67.f0 == (safe_mod_func_uint8_t_u_u((+((*l_1062) = p_2986->g_133.f3)), p_2986->g_736[1][2][2]))) , l_1063)) , 7L)) == 0x0E68L), 0UL)) , l_1064) == &p_2986->g_914[2][0]))) , 0x11L)))) == 0xC627CC01D8E575F1L);
                    if (l_944)
                        break;
                }
                if (p_2986->g_506)
                    goto lbl_1065;
                (*l_1007) = &l_979[0];
            }
            else
            { /* block id: 569 */
                uint8_t ***l_1071 = (void*)0;
                uint8_t ***l_1072[3];
                int32_t l_1091 = 0x4A22A3F9L;
                int32_t l_1092 = 0L;
                int32_t l_1093 = 0x67BA2D9AL;
                int32_t l_1094 = (-10L);
                int32_t l_1099 = 1L;
                int32_t l_1102 = 0x16859251L;
                int32_t l_1104[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_1072[i] = &l_1070;
                for (i = 0; i < 1; i++)
                    l_1104[i] = 0x4F8E10D6L;
                (*p_2986->g_534) = func_70(func_70((**p_2986->g_533), (*p_2986->g_542), p_2986), (*p_2986->g_542), p_2986);
                if (((safe_mul_func_int8_t_s_s(((p_2986->g_1068 == (l_1073 = l_1070)) ^ 0x48C7L), ((*p_2986->g_762) >= (safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((l_1080[3] != l_1080[1]), (0x1E93L < (p_2986->g_490 == ((*p_2986->g_1069) == 0x07L))))) == (-10L)), p_2986->g_796)) | p_2986->g_646), (**l_1007)))))) != (**l_1007)))
                { /* block id: 572 */
                    int32_t l_1095[7][7][5] = {{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}},{{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L},{0x43AEC34BL,0x39F729B9L,5L,0x07F1D420L,0x39F729B9L}}};
                    int32_t l_1098 = 0L;
                    int32_t l_1101[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int i, j, k;
                    for (p_2986->g_487 = 1; (p_2986->g_487 >= 0); p_2986->g_487 -= 1)
                    { /* block id: 575 */
                        int32_t *l_1083 = &p_2986->g_734;
                        int32_t *l_1084 = &l_978;
                        int32_t *l_1085 = &l_943;
                        int32_t *l_1086 = &l_979[0];
                        int32_t *l_1087 = (void*)0;
                        int32_t *l_1088 = &p_2986->g_429;
                        int32_t *l_1089 = &p_2986->g_429;
                        int32_t *l_1090[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1090[i] = &p_2986->g_133.f0;
                        --p_2986->g_1120;
                    }
                }
                else
                { /* block id: 578 */
                    (*l_1007) = &p_2986->g_914[1][6];
                }
            }
        }
        for (p_2986->g_188 = 0; (p_2986->g_188 <= 1); p_2986->g_188 += 1)
        { /* block id: 585 */
            int32_t *l_1123 = (void*)0;
            int32_t *l_1124[8][4] = {{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14},{(void*)0,&p_2986->g_14,&p_2986->g_914[1][6],&p_2986->g_14}};
            uint32_t l_1145 = 0xCFAFE3BEL;
            uint32_t l_1190[3];
            int64_t *l_1196 = &p_2986->g_796;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1190[i] = 4294967295UL;
            p_2986->g_646 = l_1100;
            for (p_2986->g_707 = 0; (p_2986->g_707 <= 1); p_2986->g_707 += 1)
            { /* block id: 589 */
                uint32_t l_1137 = 0xA171E375L;
                int32_t *l_1142 = &p_2986->g_625;
                int32_t l_1157 = 0x6BA348B8L;
                int64_t l_1191 = 0x50753CA444C8F741L;
                if (((safe_rshift_func_uint16_t_u_u((~p_67.f2), 3)) ^ ((((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(0x61L, ((*p_2986->g_543) | ((safe_rshift_func_uint8_t_u_s((((0xADF53B59L < ((&p_2986->g_533 == &p_2986->g_533) != (((safe_mul_func_uint8_t_u_u((*p_2986->g_1069), ((safe_rshift_func_int16_t_s_s(((p_67.f3 < (&p_2986->g_1069 != &p_2986->g_1069)) , l_931), l_1113)) ^ 0x08409708L))) | 0x6BL) > l_1137))) < p_67.f0) , 0x37L), p_67.f0)) & 252UL)))), 4)) || p_67.f3) , p_67.f0) == 0x1149977499BDDB9AL)))
                { /* block id: 590 */
                    uint16_t l_1146 = 7UL;
                    int32_t l_1149[9][10];
                    int32_t l_1156 = 0x61C348D8L;
                    int8_t *l_1160 = (void*)0;
                    int8_t *l_1161 = (void*)0;
                    int8_t *l_1162 = &p_2986->g_736[1][2][1];
                    uint8_t l_1164 = 4UL;
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_1149[i][j] = 0x00CECF3AL;
                    }
                    if (((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((void*)0 != l_1142), ((safe_mod_func_uint16_t_u_u((*p_2986->g_543), (l_1146 ^= l_1145))) > (!(safe_mod_func_uint32_t_u_u(((l_1149[0][2] != ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(0xAEL, ((safe_mul_func_int16_t_s_s((l_1157 = (l_1156 = 0x13F3L)), l_1114)) , (~((*l_1162) |= ((safe_rshift_func_int16_t_s_s(((((void*)0 == l_1070) == 0xFFAE8451L) & l_1157), 13)) >= 0x21B7L)))))) == p_2986->g_334[0][2][0]), 2UL)) || 0x9642L)) && p_2986->g_1106), p_67.f1)))))), l_979[0])) , 2L) >= l_1163) || 0x7DB7740AL))
                    { /* block id: 595 */
                        l_1157 |= (l_1164 ^ 5UL);
                        if (p_67.f1)
                            break;
                        (*p_2986->g_533) = (*p_2986->g_533);
                    }
                    else
                    { /* block id: 599 */
                        uint32_t **l_1167 = (void*)0;
                        int32_t l_1189 = 0x62527BA7L;
                        p_2986->g_133.f0 ^= ((((safe_sub_func_uint8_t_u_u((((l_1168 = (void*)0) != l_1124[6][3]) ^ (((safe_rshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(p_67.f0, (-4L))) != (safe_mod_func_int64_t_s_s((18446744073709551612UL & p_67.f3), (p_2986->g_796 &= ((((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(((p_2986->g_334[0][2][1] , (safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((l_1156 = p_67.f3), 255UL)) > l_1157) < 0UL), l_1100)), 1L))) != p_2986->g_222[1]), (*p_2986->g_543))), 1UL)), 65535UL)) , (void*)0) != (void*)0) || (**p_2986->g_1068)))))) || l_1189), l_1146)) <= (-1L)) != p_67.f3), 6)) <= (**p_2986->g_542)) <= l_1190[0])), p_67.f1)) > (-6L)) , l_1191) , p_67.f2);
                    }
                }
                else
                { /* block id: 605 */
                    int32_t **l_1192 = &l_1124[6][3];
                    (*l_1192) = l_1124[1][2];
                    if (l_979[0])
                        break;
                    for (p_2986->g_646 = 1; (p_2986->g_646 >= 0); p_2986->g_646 -= 1)
                    { /* block id: 610 */
                        int i, j, k;
                        p_2986->g_535.f0 = p_2986->g_501[p_2986->g_188][(p_2986->g_188 + 1)][(p_2986->g_646 + 4)];
                        p_67.f0 |= (p_2986->g_913 > ((void*)0 == l_1193[5][0][1]));
                    }
                }
                for (p_2986->g_1120 = 12; (p_2986->g_1120 == 48); p_2986->g_1120++)
                { /* block id: 617 */
                    p_67.f0 ^= ((l_1063 , l_1196) == &p_2986->g_500);
                    for (p_2986->g_14 = 0; p_2986->g_14 < 3; p_2986->g_14 += 1)
                    {
                        for (p_2986->g_490 = 0; p_2986->g_490 < 6; p_2986->g_490 += 1)
                        {
                            p_2986->g_450[p_2986->g_14][p_2986->g_490] = &l_1163;
                        }
                    }
                }
            }
        }
        p_67 = (**p_2986->g_533);
    }
    else
    { /* block id: 624 */
        return l_1163;
    }
    for (p_2986->g_125 = 0; (p_2986->g_125 <= 5); p_2986->g_125++)
    { /* block id: 629 */
        uint64_t l_1204 = 0UL;
        struct S0 **l_1205[7];
        uint32_t *l_1206 = (void*)0;
        uint32_t *l_1207[6][10] = {{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216},{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216},{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216},{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216},{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216},{&l_1063,&l_1063,&p_2986->g_549,&p_2986->g_430[2],&l_1063,&p_2986->g_216,&p_2986->g_549,&p_2986->g_132,&p_2986->g_549,&p_2986->g_216}};
        int64_t *l_1216 = &p_2986->g_796;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1205[i] = (void*)0;
        p_67.f0 ^= (safe_add_func_uint8_t_u_u(((((p_2986->g_133.f1 = (safe_unary_minus_func_uint8_t_u(((l_943 = (safe_lshift_func_uint16_t_u_s(0UL, l_1204))) > ((void*)0 != l_1205[3]))))) != ((safe_add_func_uint8_t_u_u(((((0L <= (safe_add_func_int8_t_s_s(6L, ((safe_sub_func_uint64_t_u_u(0x4E17769982C36789L, (safe_sub_func_int64_t_s_s(0L, ((*l_1216) = (+(-1L))))))) & p_66)))) <= 0x41L) || 1UL) , (**p_2986->g_1068)), p_2986->g_487)) && 65527UL)) == (**p_2986->g_1068)) & (*p_2986->g_1069)), 1UL));
        (*p_2986->g_534) = (*p_2986->g_534);
    }
    (*p_2986->g_533) = l_1217[0];
    if (((void*)0 != l_1218))
    { /* block id: 637 */
        uint32_t l_1233[2];
        uint32_t *l_1234 = (void*)0;
        uint32_t *l_1235 = &p_2986->g_216;
        int32_t *l_1262 = &p_2986->g_646;
        int16_t l_1274 = (-1L);
        uint8_t ***l_1345 = &l_1070;
        int32_t l_1353 = 0x16955480L;
        int32_t l_1354 = 0x4BC0AB0AL;
        int32_t l_1361[1][6] = {{(-1L),0x6612C310L,(-1L),(-1L),0x6612C310L,(-1L)}};
        struct S0 l_1379 = {-4L,0x7EA30FC5L,0x26A2364EF76023CBL,4294967289UL};
        uint32_t l_1414 = 8UL;
        uint16_t *l_1423 = &p_2986->g_125;
        uint64_t l_1474[2][10] = {{18446744073709551612UL,0x392E2004A38D5833L,3UL,18446744073709551615UL,0x392E2004A38D5833L,18446744073709551615UL,3UL,0x392E2004A38D5833L,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,0x392E2004A38D5833L,3UL,18446744073709551615UL,0x392E2004A38D5833L,18446744073709551615UL,3UL,0x392E2004A38D5833L,18446744073709551612UL,18446744073709551612UL}};
        int64_t **l_1514 = &l_1240;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1233[i] = 0x9AD67E2CL;
        if (((safe_lshift_func_int16_t_s_s((((p_66 <= ((((safe_lshift_func_int8_t_s_u(p_67.f0, ((safe_add_func_int16_t_s_s(p_67.f0, (((safe_mod_func_uint8_t_u_u(((p_2986->g_5 , ((*p_2986->g_543) = p_67.f3)) , (safe_div_func_int64_t_s_s(1L, p_66))), ((safe_mul_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s(((((*l_1235) = (((l_1233[0] , 0x6303549CL) , 8UL) | p_67.f1)) ^ 0x4F973996L) < p_66), (*p_2986->g_1069))) , (-1L)) , l_1233[1]) ^ p_66), 0L)) , l_1233[0]))) >= 0x0099334BL) , p_2986->g_1236))) && l_978))) != p_67.f0) , p_2986->g_1237) != l_1239)) || p_67.f2) ^ p_67.f2), l_1100)) , p_2986->g_490))
        { /* block id: 640 */
            int32_t *l_1241 = &p_2986->g_646;
            int32_t **l_1242 = &l_1241;
            uint32_t l_1261 = 0x1557529FL;
            int32_t l_1294 = (-6L);
            uint16_t **l_1342[2][6][5] = {{{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0}},{{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0},{(void*)0,&p_2986->g_543,&p_2986->g_543,&p_2986->g_543,(void*)0}}};
            int16_t l_1352 = 0x35D5L;
            int32_t l_1355 = 0L;
            int32_t l_1360 = 1L;
            uint32_t l_1383 = 0UL;
            struct S0 *l_1386 = &l_1379;
            int i, j, k;
            (*l_1242) = l_1241;
            (*l_1242) = (l_1262 = (((p_67.f1 , p_2986->g_153) < (safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s(l_1247, (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint32_t_u((2L || (p_2986->g_124 = (safe_mul_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((*l_1241) ^ ((((*l_941) |= ((safe_lshift_func_int16_t_s_s(0x3B92L, 5)) == 0x0F5F9068856EBF7FL)) && ((*p_2986->g_543) = (((safe_add_func_int16_t_s_s((((((((l_1258 , (p_2986->g_648 = (safe_rshift_func_int8_t_s_s((((p_2986->g_373 ^= (5L != l_1261)) <= p_67.f1) > 0x08D12D0D359A050EL), 0)))) , (void*)0) == &p_2986->g_762) == 0x30L) < 0x19L) || (-8L)) <= (*l_1241)), 0x4B25L)) , (-1L)) || l_943))) > p_67.f0)), l_1233[0])) , 0x42A9EBDEL) || l_1112), (*l_1241))))))))))), p_67.f3))) , &p_2986->g_734));
            if (p_67.f1)
            { /* block id: 649 */
                uint32_t l_1269 = 4UL;
                int32_t *l_1293[1];
                int8_t *l_1305 = (void*)0;
                uint16_t ***l_1343 = &p_2986->g_542;
                int64_t *l_1344 = &p_2986->g_796;
                uint8_t ****l_1346 = (void*)0;
                uint8_t ****l_1347 = &l_1345;
                int8_t ***l_1350 = &l_1348;
                int8_t **l_1351 = &l_1305;
                int i;
                for (i = 0; i < 1; i++)
                    l_1293[i] = &l_1100;
lbl_1341:
                (*l_1242) = (void*)0;
                for (p_2986->g_299 = (-30); (p_2986->g_299 != 8); ++p_2986->g_299)
                { /* block id: 653 */
                    int64_t l_1275 = (-10L);
                    int32_t l_1276 = (-2L);
                    int32_t l_1340 = (-1L);
                    for (p_2986->g_132 = 0; (p_2986->g_132 <= 26); ++p_2986->g_132)
                    { /* block id: 656 */
                        if (p_67.f3)
                            break;
                    }
                    if ((safe_add_func_int16_t_s_s((((l_1275 = (l_1269 < (safe_add_func_uint64_t_u_u(0xD6EF506DD463C8D0L, (safe_div_func_int64_t_s_s(0x518C1D7F9D936973L, l_1274)))))) && (p_2986->g_535.f2++)) > ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((p_2986->g_736[0][2][4] = (((*p_2986->g_607) = p_67.f3) == (!(safe_rshift_func_uint16_t_u_u((p_2986->g_373 < (safe_lshift_func_int16_t_s_u(l_1269, 2))), (*p_2986->g_543)))))) & (safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s((0xA1B944A7AD1CDB44L < (-1L)), p_2986->g_14)), (-7L))), p_67.f2))) ^ p_67.f0), p_66)), 0x0BBAC52A8EAD5EAFL)) > (-1L))), 0UL)))
                    { /* block id: 663 */
                        return p_67.f1;
                    }
                    else
                    { /* block id: 665 */
                        uint16_t l_1295 = 65535UL;
                        int32_t l_1298 = 0x4F12132DL;
                        (*l_1242) = l_1293[0];
                        l_1295--;
                        if (l_1298)
                            break;
                    }
                    for (p_2986->g_549 = 1; (p_2986->g_549 <= 5); p_2986->g_549 += 1)
                    { /* block id: 672 */
                        int8_t *l_1304 = (void*)0;
                        int8_t **l_1303[8] = {&l_1304,&l_1304,&l_1304,&l_1304,&l_1304,&l_1304,&l_1304,&l_1304};
                        int32_t l_1314 = 1L;
                        int32_t ***l_1316[4][7] = {{&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315},{&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315,&l_1315}};
                        int64_t *l_1318 = &p_2986->g_1096;
                        uint32_t *l_1339 = &l_1063;
                        int i, j;
                        (**l_1242) = ((((safe_div_func_uint64_t_u_u(6UL, ((**l_1239) = (p_2986->g_490 && 0x07A19360L)))) <= (safe_add_func_uint16_t_u_u((((((p_67.f0 = ((*l_1262) |= (((l_1305 = &p_2986->g_736[4][1][4]) == ((p_67.f2 < ((((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(p_2986->g_1106, (safe_sub_func_int8_t_s_s((p_2986->g_736[4][1][4] = p_67.f3), (safe_mod_func_int32_t_s_s(((((*l_1318) = ((l_1314 <= ((!(((((p_2986->g_1317 = l_1315) == (void*)0) , p_67.f1) , (*p_2986->g_543)) && p_66)) > (-1L))) ^ 0xBC0DBC332CE4D316L)) || p_2986->g_342) , (-1L)), p_67.f3)))))), l_1275)) == 1UL) ^ p_2986->g_501[1][2][1]) , 0x3831FECDL)) , (void*)0)) | p_67.f3))) & p_67.f1) , 0x2FL) | l_1319) != 0xA2L), p_67.f2))) == p_67.f3) != p_67.f1);
                        p_67.f0 = (safe_mul_func_uint16_t_u_u((*l_1262), ((*l_1239) != (*p_2986->g_1237))));
                        (*l_1241) = (l_1340 &= (safe_mod_func_int8_t_s_s(((*l_1305) = (~p_2986->g_125)), ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(p_67.f1, ((**p_2986->g_542) = (!((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((*l_1339) = (l_1276 > ((p_2986->g_501[1][2][1] >= (safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int8_t_s_s(((*p_2986->g_543) == (*l_1262)), (safe_lshift_func_int16_t_s_u(p_67.f0, 3)))) , p_2986->g_133.f2) == (((*l_1235) = p_2986->g_1096) < p_67.f0)))) != p_67.f3), p_67.f3))) <= p_67.f0))), 0x5C463819L)), (*l_1241))) <= (*l_1262)))))) > p_67.f1), p_2986->g_535.f3)) && p_66))));
                        if (p_67.f2)
                            break;
                    }
                }
                if (l_943)
                    goto lbl_1341;
                if ((p_2986->g_1096 > (((+(((*l_1343) = l_1342[0][4][1]) != (void*)0)) , (l_1352 = (((~(((((*l_1344) = ((*l_1240) &= p_67.f1)) > p_2986->g_60) >= ((*l_1262) == (((((&l_1070 == ((*l_1347) = l_1345)) > (((*l_1350) = l_1348) != l_1351)) ^ (*l_1262)) < (*p_2986->g_543)) , p_67.f1))) ^ 0x26B20E47L)) , 0x526EL) , p_2986->g_208))) , p_2986->g_14)))
                { /* block id: 698 */
                    uint32_t l_1356 = 0x5574B531L;
                    ++l_1356;
                }
                else
                { /* block id: 700 */
                    int32_t *l_1359[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1359[i] = &l_1319;
                    (*l_1242) = l_1359[1];
                    --p_2986->g_1362;
                }
            }
            else
            { /* block id: 704 */
                int32_t l_1378 = 0x6A7EEA62L;
                uint64_t **l_1380 = (void*)0;
                int32_t *l_1403 = &l_1100;
                int32_t l_1413 = 0x73E9E7BDL;
                uint16_t *l_1424[4][9][1] = {{{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]}},{{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]}},{{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]}},{{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]},{&p_2986->g_741[0][0][0]}}};
                int i, j, k;
                (*l_1241) = p_67.f3;
                if ((((safe_rshift_func_uint8_t_u_s((((**p_2986->g_542)++) == p_67.f3), (safe_div_func_int32_t_s_s((&p_2986->g_549 != &p_2986->g_215), l_1371)))) > ((0x10933E2BL && p_67.f0) == ((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((&l_1348 == p_2986->g_1376), p_2986->g_1377)), l_1378)) , 6L) && (*l_1262)) >= (*l_1262)))) ^ p_67.f3))
                { /* block id: 707 */
                    l_1379 = p_67;
                    (**p_2986->g_533) = (p_67 , (((*l_1262) = (p_2986->g_487 &= (l_1380 != p_2986->g_1381[0][5][0]))) , (**p_2986->g_533)));
                    (*l_1241) = ((l_1383 , p_67.f0) || (safe_sub_func_int8_t_s_s((((*p_2986->g_533) = l_1386) == (void*)0), (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((**p_2986->g_542) = (((safe_mod_func_uint64_t_u_u((p_67.f2 & ((safe_lshift_func_int8_t_s_s(p_67.f0, 2)) & (safe_mod_func_uint32_t_u_u(((*l_1235) = ((-1L) < (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((p_67.f0 , (safe_sub_func_int64_t_s_s(p_67.f3, p_2986->g_1120))) , 0x3E28L), p_66)), p_67.f1)))), p_67.f3)))), p_2986->g_913)) < p_67.f0) > 0x46L)), 0)), 1)))));
                }
                else
                { /* block id: 716 */
                    int32_t *l_1404 = &p_2986->g_133.f0;
                    int32_t *l_1405 = &l_1355;
                    int32_t *l_1406 = &l_1100;
                    int32_t *l_1407 = &p_2986->g_429;
                    int32_t *l_1408 = &l_1109[3];
                    int32_t *l_1409 = &p_2986->g_914[1][6];
                    int32_t *l_1410 = &p_2986->g_734;
                    int32_t *l_1411 = &p_2986->g_914[1][3];
                    int32_t *l_1412[8][10] = {{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978},{&l_978,&p_2986->g_429,&p_2986->g_535.f0,&l_978,&p_2986->g_914[1][6],&p_2986->g_914[1][6],&l_978,&p_2986->g_535.f0,&p_2986->g_429,&l_978}};
                    int i, j;
                    (*l_1315) = &l_1361[0][2];
                    (*l_1315) = &l_1353;
                    (*p_2986->g_1317) = l_1403;
                    l_1414++;
                }
                (*l_1262) = ((void*)0 != l_1380);
                for (l_1119 = 0; (l_1119 != 0); ++l_1119)
                { /* block id: 725 */
                    uint16_t ****l_1425 = (void*)0;
                    (*l_1242) = ((*p_2986->g_1317) = (*l_1242));
                    (**l_1315) = (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_66, (((l_1423 != ((*p_2986->g_542) = l_1424[1][5][0])) >= p_67.f0) && (0x9BF6597ACD2819D7L <= ((**l_1315) , (&p_2986->g_77 == (p_2986->g_891 = &p_2986->g_542))))))), (safe_mul_func_int16_t_s_s((((((((p_2986->g_124 , p_67.f1) < 0x51L) && 0x76L) ^ p_66) | p_2986->g_222[1]) , (void*)0) == (void*)0), (**l_1315)))));
                    if ((*l_1241))
                        continue;
                }
            }
        }
        else
        { /* block id: 734 */
            int32_t *l_1428 = &p_2986->g_914[1][6];
            uint16_t **l_1433 = &p_2986->g_543;
            int32_t l_1438 = 0x4DD24AD2L;
            uint32_t l_1453 = 0xD72C2204L;
            (*p_2986->g_1317) = l_1428;
            if ((+(safe_rshift_func_int8_t_s_u(p_66, (p_67 , (safe_add_func_int32_t_s_s((l_1433 != l_1433), ((((safe_rshift_func_int8_t_s_s((*l_1262), (*l_1262))) < ((253UL >= (l_1438 &= ((((((((safe_mul_func_uint16_t_u_u((&p_2986->g_762 != (void*)0), (**l_1315))) & 5UL) , (*l_1428)) == (*p_2986->g_543)) && p_67.f0) | 7UL) < (*l_1428)) != 5UL))) , p_2986->g_501[1][6][1])) < p_2986->g_1120) == (**p_2986->g_1317)))))))))
            { /* block id: 737 */
                return (*p_2986->g_543);
            }
            else
            { /* block id: 739 */
                uint32_t l_1441[5] = {0x11111D5AL,0x11111D5AL,0x11111D5AL,0x11111D5AL,0x11111D5AL};
                int64_t l_1448 = 9L;
                uint64_t l_1449 = 0x86C4FF1FAA494E05L;
                int32_t *l_1450 = &l_1354;
                int32_t *l_1451 = &l_1353;
                int32_t *l_1452[4][7] = {{&l_943,&l_943,&l_943,&l_943,&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943,&l_943,&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943,&l_943,&l_943,&l_943,&l_943},{&l_943,&l_943,&l_943,&l_943,&l_943,&l_943,&l_943}};
                int i, j;
                (**l_1315) = ((p_67.f3 | (safe_mod_func_uint32_t_u_u(l_1441[2], (safe_div_func_uint64_t_u_u(((*p_2986->g_1069) ^ ((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((*l_1262), p_67.f1)) || l_1448) != ((void*)0 == &l_1348)) || (((&l_1361[0][2] != &l_1354) , l_1449) , 18446744073709551615UL)), 1)) >= (*l_1262))), p_2986->g_211))))) & l_1441[2]);
                l_1453++;
            }
        }
        for (p_2986->g_734 = 7; (p_2986->g_734 >= 0); p_2986->g_734 -= 1)
        { /* block id: 746 */
            int64_t l_1456 = 0x4E1DF72867C2CFCAL;
            int32_t l_1473 = 0x2A2C54F5L;
            int32_t l_1495 = (-1L);
            int32_t l_1497 = 0x6806DAE5L;
            int32_t l_1498 = (-1L);
            int32_t l_1499[9][9] = {{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L},{1L,0L,(-1L),0x0059810CL,(-9L),(-9L),0x0059810CL,(-1L),0L}};
            uint16_t l_1500 = 0x1B4BL;
            uint8_t ****l_1505 = &l_1345;
            uint64_t **l_1506 = &p_2986->g_1382;
            uint32_t l_1513 = 0xAC8D0CC7L;
            int i, j;
            (*p_2986->g_534) = l_1379;
            for (p_2986->g_153 = 0; (p_2986->g_153 <= 7); p_2986->g_153 += 1)
            { /* block id: 750 */
                int8_t l_1477[4][2] = {{0x0CL,(-10L)},{0x0CL,(-10L)},{0x0CL,(-10L)},{0x0CL,(-10L)}};
                struct S0 l_1489[4][8] = {{{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL}},{{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL}},{{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL}},{{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x73744E12L,1UL,0x167F1F4C39926989L,0x9EFA001FL},{0x2DA28BF2L,4294967293UL,18446744073709551607UL,4294967294UL}}};
                uint8_t ****l_1490[6][5] = {{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345},{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345},{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345},{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345},{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345},{(void*)0,&l_1345,&l_1345,(void*)0,&l_1345}};
                int32_t l_1494 = (-1L);
                int32_t l_1496[2][2] = {{(-9L),(-9L)},{(-9L),(-9L)}};
                uint8_t l_1522 = 3UL;
                uint64_t *l_1528 = &p_2986->g_707;
                int i, j;
                p_2986->g_914[p_2986->g_734][p_2986->g_153] |= 0x57E44CF1L;
                for (p_2986->g_486 = 5; (p_2986->g_486 >= 0); p_2986->g_486 -= 1)
                { /* block id: 754 */
                    uint32_t l_1464 = 4294967295UL;
                    int32_t **l_1482 = &p_2986->g_762;
                    int32_t *l_1491 = &l_1361[0][1];
                    int32_t l_1493[8][2] = {{0L,(-7L)},{0L,(-7L)},{0L,(-7L)},{0L,(-7L)},{0L,(-7L)},{0L,(-7L)},{0L,(-7L)},{0L,(-7L)}};
                    int i, j;
                    for (p_2986->g_1236 = 0; (p_2986->g_1236 <= 0); p_2986->g_1236 += 1)
                    { /* block id: 757 */
                        int32_t *l_1457 = &p_2986->g_496;
                        int32_t *l_1458 = &l_1354;
                        int32_t *l_1459 = &p_2986->g_535.f0;
                        int32_t *l_1460 = &p_2986->g_535.f0;
                        int32_t *l_1461 = &l_1361[0][2];
                        int32_t *l_1462[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1462[i] = &l_1105;
                        l_1464--;
                        (*l_1457) = (&p_2986->g_241 == (((((*p_2986->g_1069) |= p_2986->g_914[(p_2986->g_486 + 1)][p_2986->g_734]) <= (((p_2986->g_334[p_2986->g_1236][p_2986->g_486][(p_2986->g_1236 + 1)] , 0xBA9EL) != ((((--p_67.f2) && (safe_lshift_func_uint8_t_u_s((&p_2986->g_450[(p_2986->g_1236 + 2)][(p_2986->g_1236 + 5)] != (void*)0), p_2986->g_430[(p_2986->g_1236 + 1)]))) && (0xC378L < (((safe_rshift_func_int8_t_s_s(0x70L, (*l_1262))) , p_2986->g_734) == p_2986->g_1236))) < (*p_2986->g_607))) && p_67.f3)) | p_2986->g_216) , &p_2986->g_533));
                        l_1474[1][5]--;
                        if ((*l_1262))
                            break;
                    }
                    (*l_1491) &= (p_67.f3 || (l_1477[2][1] | (((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((p_67.f2 , (((l_1315 == l_1482) , ((+(~((safe_rshift_func_uint16_t_u_u(((*p_2986->g_607) &= (p_67.f3 >= (--(*p_2986->g_1069)))), 3)) < (l_1477[1][1] | (((l_1487 == (l_1489[0][2] , l_1490[3][0])) < 0x2FE0281328565C3AL) | p_67.f3))))) & l_1456)) | p_67.f1)), p_67.f2)), p_66)) , 0xD595L) && p_67.f0)));
                    for (p_2986->g_133.f3 = 0; (p_2986->g_133.f3 <= 4); p_2986->g_133.f3 += 1)
                    { /* block id: 770 */
                        int32_t *l_1492[5][4] = {{&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3]},{&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3]},{&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3]},{&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3]},{&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3],&p_2986->g_914[2][3]}};
                        int i, j;
                        --l_1500;
                        (*l_1491) = p_66;
                        (*l_1491) ^= ((p_67.f1 >= (safe_add_func_uint16_t_u_u((((((((void*)0 == l_1505) , ((l_1494 ^= (1UL ^ 1UL)) , (((void*)0 == l_1506) , ((&p_2986->g_762 == &p_2986->g_762) | p_67.f0)))) <= p_67.f3) , p_66) != l_1496[0][0]) <= 0x6AL), p_67.f3))) , 3L);
                    }
                }
                for (l_978 = 0; (l_978 >= 0); l_978 -= 1)
                { /* block id: 779 */
                    int64_t **l_1517 = (void*)0;
                    int i, j;
                    (*p_2986->g_1317) = &p_2986->g_914[p_2986->g_734][p_2986->g_153];
                    for (p_2986->g_496 = 0; (p_2986->g_496 <= 0); p_2986->g_496 += 1)
                    { /* block id: 783 */
                        int64_t ***l_1515 = (void*)0;
                        int64_t ***l_1516[9][6][4] = {{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}},{{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239},{&l_1239,&l_1514,&l_1514,&l_1239}}};
                        int32_t l_1518[3];
                        int32_t *l_1519 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1518[i] = 0x3232F887L;
                        (1 + 1);
                    }
                }
                for (p_2986->g_104 = 0; (p_2986->g_104 <= 0); p_2986->g_104 += 1)
                { /* block id: 797 */
                    int32_t *l_1520 = &p_2986->g_646;
                    int32_t *l_1521[2][6] = {{(void*)0,&p_2986->g_133.f0,(void*)0,(void*)0,&p_2986->g_133.f0,(void*)0},{(void*)0,&p_2986->g_133.f0,(void*)0,(void*)0,&p_2986->g_133.f0,(void*)0}};
                    int i, j;
                    (*p_2986->g_533) = &l_1379;
                    l_1522++;
                    for (l_1456 = 3; (l_1456 >= 0); l_1456 -= 1)
                    { /* block id: 802 */
                        int i, j;
                        return p_2986->g_914[(p_2986->g_104 + 2)][p_2986->g_734];
                    }
                    for (p_2986->g_661 = 0; (p_2986->g_661 <= 0); p_2986->g_661 += 1)
                    { /* block id: 807 */
                        uint64_t l_1525 = 0x2CA88D8DB0B568CCL;
                        l_1525++;
                        p_2986->g_429 &= ((l_1528 != (void*)0) && ((void*)0 == l_1514));
                    }
                }
            }
            for (p_2986->g_535.f1 = 2; (p_2986->g_535.f1 <= 7); p_2986->g_535.f1 += 1)
            { /* block id: 815 */
                int32_t *l_1529 = &l_1105;
                int i, j;
                (*l_1529) |= (p_2986->g_914[p_2986->g_535.f1][p_2986->g_535.f1] = 0x74AC14A1L);
            }
        }
    }
    else
    { /* block id: 820 */
        int32_t *l_1530 = (void*)0;
        int8_t l_1531 = 0x59L;
        int32_t *l_1534 = &l_1319;
        uint64_t l_1567 = 0x97A641DBF5ED9D53L;
        int32_t l_1571 = 0x1D5A8EFBL;
        int32_t l_1577 = 0L;
        int32_t l_1579 = 0L;
        int32_t l_1612 = (-5L);
        int16_t l_1613 = 0L;
        int32_t l_1616 = 0L;
        int32_t l_1618[5][1][7] = {{{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L}}};
        uint64_t l_1619 = 0x1E04ED2E32EA8856L;
        uint16_t l_1623[2];
        uint32_t l_1665 = 0xED7E0FBFL;
        struct S0 l_1683 = {3L,4294967295UL,18446744073709551607UL,1UL};
        int32_t l_1745 = 0x01638DFFL;
        int32_t l_1769 = 1L;
        uint32_t l_1781 = 4294967289UL;
        uint64_t l_1792 = 0UL;
        uint32_t *l_1793 = &p_2986->g_430[0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1623[i] = 65531UL;
        (*p_2986->g_1317) = l_1530;
        if (((*l_1534) = ((((**p_2986->g_1068) == l_1531) , p_2986->g_1532) != p_2986->g_1532)))
        { /* block id: 823 */
            int32_t **l_1561 = &l_1534;
            int32_t l_1574[8][2][10] = {{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}},{{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL},{0x105F6DBEL,0x5CAAF8F7L,1L,1L,0x62058047L,2L,0x5C0FF7AFL,0x3589FFFFL,0x5CAAF8F7L,0x7C31BDCAL}}};
            uint32_t l_1581 = 0x228C8278L;
            uint32_t *l_1591 = &p_2986->g_334[0][5][4];
            int64_t l_1614[5][9] = {{0x4F90697A3E8194D4L,3L,1L,0x1DC8C9DB3CCDE441L,(-1L),0x4F90697A3E8194D4L,0x1DC8C9DB3CCDE441L,0x33A742AB1364265DL,0x1DC8C9DB3CCDE441L},{0x4F90697A3E8194D4L,3L,1L,0x1DC8C9DB3CCDE441L,(-1L),0x4F90697A3E8194D4L,0x1DC8C9DB3CCDE441L,0x33A742AB1364265DL,0x1DC8C9DB3CCDE441L},{0x4F90697A3E8194D4L,3L,1L,0x1DC8C9DB3CCDE441L,(-1L),0x4F90697A3E8194D4L,0x1DC8C9DB3CCDE441L,0x33A742AB1364265DL,0x1DC8C9DB3CCDE441L},{0x4F90697A3E8194D4L,3L,1L,0x1DC8C9DB3CCDE441L,(-1L),0x4F90697A3E8194D4L,0x1DC8C9DB3CCDE441L,0x33A742AB1364265DL,0x1DC8C9DB3CCDE441L},{0x4F90697A3E8194D4L,3L,1L,0x1DC8C9DB3CCDE441L,(-1L),0x4F90697A3E8194D4L,0x1DC8C9DB3CCDE441L,0x33A742AB1364265DL,0x1DC8C9DB3CCDE441L}};
            int32_t l_1617 = 0x72D451E1L;
            uint32_t l_1645[3][8] = {{0xAAC4D29FL,2UL,4294967292UL,0xF1B8C067L,4294967292UL,2UL,0xAAC4D29FL,0xA3ECE5AEL},{0xAAC4D29FL,2UL,4294967292UL,0xF1B8C067L,4294967292UL,2UL,0xAAC4D29FL,0xA3ECE5AEL},{0xAAC4D29FL,2UL,4294967292UL,0xF1B8C067L,4294967292UL,2UL,0xAAC4D29FL,0xA3ECE5AEL}};
            int i, j, k;
            for (p_2986->g_549 = 0; (p_2986->g_549 > 6); p_2986->g_549++)
            { /* block id: 826 */
                uint32_t l_1537 = 0UL;
                int32_t l_1578 = 6L;
                int32_t l_1580 = 0x7F1FD453L;
                uint32_t *l_1587 = &p_2986->g_334[0][5][4];
                uint32_t **l_1588 = &l_1587;
                int32_t l_1615 = (-1L);
                l_1537++;
                for (p_67.f0 = (-8); (p_67.f0 <= (-16)); p_67.f0 = safe_sub_func_int16_t_s_s(p_67.f0, 6))
                { /* block id: 830 */
                    int16_t **l_1553[4][7][2] = {{{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]}},{{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]}},{{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]}},{{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]},{&l_942[1],&l_942[0]}}};
                    int16_t ***l_1552 = &l_1553[3][2][0];
                    int32_t ***l_1562 = &p_2986->g_1317;
                    uint32_t *l_1565 = &p_2986->g_133.f1;
                    int16_t l_1566 = 0x4FD2L;
                    int32_t l_1570 = 0L;
                    int32_t l_1576 = (-1L);
                    int i, j, k;
                    (*l_1534) = (((l_1567 |= ((((safe_rshift_func_uint16_t_u_s((!(safe_mod_func_uint16_t_u_u((0x79863876L && ((safe_sub_func_uint64_t_u_u(((p_2986->g_914[5][5] & ((safe_mul_func_uint8_t_u_u(((((*l_1565) |= (safe_mod_func_int16_t_s_s((((*l_1552) = &l_942[1]) != ((safe_mod_func_uint32_t_u_u(((l_1556 , (p_67.f1 <= (((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((*l_1240) ^= (l_1561 != ((*l_1562) = &l_1534))) & ((((safe_sub_func_int8_t_s_s(p_66, (-9L))) && 65530UL) || p_67.f1) , p_2986->g_211)), p_67.f0)), (*p_2986->g_543))) && 249UL) , (*p_2986->g_1069)))) || l_1537), p_67.f3)) , (void*)0)), (*p_2986->g_543)))) <= p_67.f2) | (**p_2986->g_1068)), 1L)) ^ p_2986->g_495)) > p_2986->g_1362), p_2986->g_914[2][3])) >= p_67.f3)), (**p_2986->g_542)))), (**l_1561))) >= p_67.f0) || 0L) > l_1566)) <= p_2986->g_496) >= 0x30DD6FF6796CEBBBL);
                    if ((safe_mul_func_int8_t_s_s(p_67.f0, l_1570)))
                    { /* block id: 837 */
                        return (*p_2986->g_543);
                    }
                    else
                    { /* block id: 839 */
                        int32_t *l_1572 = &l_1109[3];
                        int32_t *l_1573 = (void*)0;
                        int32_t *l_1575[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        struct S0 l_1584 = {-1L,0x7031FD2EL,4UL,0UL};
                        int i;
                        --l_1581;
                        (*l_1572) = p_2986->g_648;
                        (**p_2986->g_533) = l_1584;
                    }
                    (*l_1315) = (*l_1561);
                }
                if ((((safe_add_func_uint64_t_u_u((!(((*l_1588) = l_1587) != &p_2986->g_334[0][5][4])), ((safe_mul_func_uint8_t_u_u((p_2986->g_487 ^ (l_1591 != (void*)0)), 0x30L)) <= (*p_2986->g_543)))) < p_67.f0) & (safe_lshift_func_uint8_t_u_s(p_67.f3, (**l_1561)))))
                { /* block id: 847 */
                    int16_t l_1606 = 7L;
                    (*l_1534) = ((((safe_mod_func_uint8_t_u_u((*l_1534), l_1537)) , ((p_67.f3 && (safe_lshift_func_int8_t_s_u(0x20L, 0))) >= (p_67 , (5L && ((((**l_1561) , (safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(((*l_941) &= (safe_mul_func_uint16_t_u_u(0x77BEL, l_1606))), 5)) | 8UL) <= l_1606), 0x629044C3E7CED16BL)), 0x5770L))) | p_67.f0) , (*p_2986->g_1069)))))) ^ (-1L)) | p_67.f2);
                }
                else
                { /* block id: 850 */
                    struct S0 ***l_1607 = &p_2986->g_533;
                    int32_t *l_1608 = &p_2986->g_646;
                    int32_t *l_1609 = &p_2986->g_133.f0;
                    int32_t *l_1610 = &l_1105;
                    int32_t *l_1611[7] = {&p_2986->g_734,&p_2986->g_734,&p_2986->g_734,&p_2986->g_734,&p_2986->g_734,&p_2986->g_734,&p_2986->g_734};
                    int i;
                    (**l_1561) = (&p_2986->g_241 == (((*l_1587) = (((*l_1240) = 6L) || (-5L))) , l_1607));
                    ++l_1619;
                }
                for (p_2986->g_188 = 5; (p_2986->g_188 >= 0); p_2986->g_188 -= 1)
                { /* block id: 858 */
                    int32_t *l_1622[3][7][5] = {{{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]}},{{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]}},{{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]},{&p_2986->g_914[2][2],&l_1574[5][1][6],&p_2986->g_14,&p_2986->g_535.f0,&p_2986->g_914[2][2]}}};
                    int i, j, k;
                    p_67.f0 &= p_2986->g_55[p_2986->g_188];
                    (*l_1315) = (*l_1315);
                    --l_1623[0];
                }
            }
            for (p_67.f0 = 0; (p_67.f0 == 18); p_67.f0++)
            { /* block id: 866 */
                int32_t *l_1628 = (void*)0;
                int32_t *l_1629 = &p_2986->g_535.f0;
                int32_t *l_1630[1];
                int32_t *l_1648[1][4][2] = {{{(void*)0,&p_2986->g_734},{(void*)0,&p_2986->g_734},{(void*)0,&p_2986->g_734},{(void*)0,&p_2986->g_734}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1630[i] = &l_978;
                p_2986->g_1631--;
                for (p_2986->g_243 = 0; (p_2986->g_243 <= 0); p_2986->g_243 += 1)
                { /* block id: 870 */
                    uint32_t l_1636 = 4294967295UL;
                    int32_t l_1639 = 0x07EB343AL;
                    int32_t l_1641[8][8][4] = {{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}},{{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL},{0x448946E5L,(-2L),(-1L),0x1803B1CEL}}};
                    int64_t **l_1666 = &l_1240;
                    int i, j, k;
                    (1 + 1);
                }
            }
            (*l_1561) = l_1668;
        }
        else
        { /* block id: 900 */
            uint32_t l_1669 = 4294967295UL;
            uint64_t **l_1681 = &p_2986->g_1382;
            uint64_t ***l_1680 = &l_1681;
            struct S0 l_1684[8] = {{0x0EC8B893L,0x3EA22B47L,0x091FDF694C56DFCCL,0xA725867CL},{0L,0xAB74E890L,0xBCAE9360461BDEC3L,5UL},{0x0EC8B893L,0x3EA22B47L,0x091FDF694C56DFCCL,0xA725867CL},{0x0EC8B893L,0x3EA22B47L,0x091FDF694C56DFCCL,0xA725867CL},{0L,0xAB74E890L,0xBCAE9360461BDEC3L,5UL},{0x0EC8B893L,0x3EA22B47L,0x091FDF694C56DFCCL,0xA725867CL},{0x0EC8B893L,0x3EA22B47L,0x091FDF694C56DFCCL,0xA725867CL},{0L,0xAB74E890L,0xBCAE9360461BDEC3L,5UL}};
            uint8_t *l_1696 = &p_2986->g_506;
            uint8_t *l_1697 = &p_2986->g_506;
            uint32_t *l_1701 = &l_1371;
            int32_t *l_1702 = &l_931;
            int32_t *l_1703 = &l_978;
            int32_t l_1709 = 0x716A1D4AL;
            int32_t l_1710[6][9] = {{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL},{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL},{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL},{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL},{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL},{0x1046D11AL,8L,(-1L),0L,0x0199E813L,0L,(-1L),8L,0x1046D11AL}};
            int i, j;
            p_67.f0 = (((**p_2986->g_1068) |= p_67.f1) , (l_1669 & ((l_1682[1][1] ^= (l_978 &= (safe_add_func_int64_t_s_s(l_1669, ((+(!((*l_1534) = p_66))) > (safe_add_func_int16_t_s_s(p_67.f2, (safe_add_func_uint64_t_u_u((l_1669 , (safe_div_func_int32_t_s_s((0xA986EAB7L || (safe_sub_func_uint64_t_u_u(((~(4L ^ ((((*l_1680) = (void*)0) == (void*)0) <= p_67.f2))) >= p_66), p_67.f0))), p_67.f0))), 0x09873D7CF9A1C1B4L))))))))) || (**p_2986->g_1068))));
            if (p_2986->g_342)
                goto lbl_1685;
lbl_1685:
            l_1684[6] = (l_1683 = func_70((*p_2986->g_534), &l_1623[0], p_2986));
            (*l_1703) |= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_1696 == ((*l_1070) = (l_1697 = &p_2986->g_299))), (0xB1DCL && (((*l_1696) = (p_2986->g_1700 | (((*l_1701) &= ((*l_1534) || (*l_1534))) > ((void*)0 != &p_2986->g_1317)))) != ((!((p_2986->g_430[3] &= (((*l_1702) = p_67.f1) , p_67.f3)) , p_66)) >= p_2986->g_215))))), p_2986->g_501[1][2][1])) >= p_67.f0), 0x3FL)), p_66)), p_66));
            for (l_1683.f2 = (-8); (l_1683.f2 < 18); ++l_1683.f2)
            { /* block id: 919 */
                int32_t *l_1706 = &l_1612;
                int32_t *l_1707 = &l_943;
                int32_t *l_1708[2];
                uint32_t l_1711[9] = {0xA4C2753AL,0xE3F34504L,0xA4C2753AL,0xA4C2753AL,0xE3F34504L,0xA4C2753AL,0xA4C2753AL,0xE3F34504L,0xA4C2753AL};
                uint32_t *l_1744[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_1746[10] = {0x438A251CL,0x99AADB07L,0x438A251CL,0x438A251CL,0x99AADB07L,0x438A251CL,0x438A251CL,0x99AADB07L,0x438A251CL,0x438A251CL};
                int i;
                for (i = 0; i < 2; i++)
                    l_1708[i] = &l_1579;
                l_1711[5]++;
                if ((safe_rshift_func_int8_t_s_u((((((*l_1706) = ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_67.f2, 6)), (*l_1706))) , (((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((*l_1702) ^= (safe_mul_func_int8_t_s_s((((**p_2986->g_542) = p_67.f1) < (0x0F309647L & (safe_lshift_func_uint16_t_u_s(((*l_1534) >= (safe_mul_func_int16_t_s_s(((*l_941) |= p_67.f0), (safe_rshift_func_int16_t_s_u(((*l_1703) = ((((*l_1534) > 0x803EL) == (safe_lshift_func_int16_t_s_s(((p_2986->g_334[0][0][2] = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(0x5F83L, p_67.f1)), 7)) > (-4L)) ^ 0x428B583DE696687CL) <= (-8L)) , p_2986->g_1463), p_67.f0)), p_67.f2)) & p_2986->g_1106), 6))) , (*l_1534)), 14))) < 0UL)), l_1745))))), 15)))), p_67.f0))) , l_1746[0]), (-3L))), p_67.f0)) && (*l_1707)) , p_67.f3)) , (void*)0) != &p_2986->g_450[2][5])) , p_2986->g_625) ^ p_67.f3) && p_2986->g_132), (**p_2986->g_1068))))
                { /* block id: 927 */
                    int16_t l_1766 = 1L;
                    for (p_2986->g_707 = 0; (p_2986->g_707 <= 1); p_2986->g_707 += 1)
                    { /* block id: 930 */
                        return (**p_2986->g_542);
                    }
                    (*l_1534) = ((*l_1707) |= (safe_add_func_int32_t_s_s(p_66, (((safe_sub_func_int8_t_s_s(p_66, ((safe_rshift_func_uint8_t_u_s(0xE7L, 2)) | (((((**l_1239) = ((void*)0 == &p_2986->g_891)) >= (--p_2986->g_243)) != ((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u(((*l_1706) = (p_67 , (safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((((0x3C71L < (l_1766 > ((safe_lshift_func_uint8_t_u_s((p_2986->g_913 <= p_2986->g_734), 3)) < (*p_2986->g_607)))) ^ p_67.f3) | p_66), 7)), p_2986->g_133.f1)) ^ p_67.f3), (**p_2986->g_1068))) >= p_2986->g_535.f1), (*l_1703))))))), p_67.f1)) <= 0x2925C2E3FF77476DL)) , l_1766)))) >= l_1769) ^ p_67.f2))));
                }
                else
                { /* block id: 938 */
                    p_67.f0 = 0L;
                }
                (*p_2986->g_1317) = &l_1710[2][6];
                l_1770++;
            }
        }
        p_67.f0 = (!(safe_rshift_func_int8_t_s_s(((!(((*l_1793) |= (((0x7FD4L == (p_66 & (+((((safe_rshift_func_int8_t_s_u((-5L), (++(**p_2986->g_1068)))) || p_67.f0) , (p_2986->g_342 & (safe_rshift_func_int8_t_s_u(((l_1781 , (p_2986->g_1377 && (safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((p_67 , (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_1792, p_67.f1)), p_67.f0)) || (*p_2986->g_1069)), (**p_2986->g_1068)))), p_67.f0)) != (-4L)), 10)))) < p_2986->g_736[4][1][4]), 6)))) & p_2986->g_914[7][3])))) ^ p_67.f1) || p_67.f1)) ^ p_2986->g_216)) == p_2986->g_914[1][6]), p_67.f1)));
    }
    return p_67.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_2986->g_5 p_2986->g_55 p_2986->g_14 p_2986->g_60 p_2986->g_104 p_2986->g_342 p_2986->g_430 p_2986->g_222 p_2986->g_133.f3 p_2986->g_132 p_2986->g_456 p_2986->g_208 p_2986->g_211 p_2986->g_188 p_2986->g_133.f2 p_2986->g_243 p_2986->g_506 p_2986->g_334 p_2986->g_501 p_2986->g_500 p_2986->g_125 p_2986->g_533 p_2986->g_542 p_2986->g_549 p_2986->g_534 p_2986->g_490 p_2986->g_153 p_2986->g_535 l_2170
 * writes: p_2986->g_104 p_2986->g_60 p_2986->g_342 p_2986->g_14 p_2986->g_430 p_2986->g_222 p_2986->g_450 p_2986->g_211 p_2986->g_133.f3 p_2986->g_243 p_2986->g_506 p_2986->g_133.f1 p_2986->g_549 p_2986->g_535 p_2986->g_490 p_2986->g_153 l_2170
 */
struct S0  func_70(struct S0  p_71, uint16_t * p_72, struct S1 * p_2986)
{ /* block id: 29 */
    uint32_t l_102[9];
    int16_t *l_103 = &p_2986->g_104;
    int32_t l_105 = (-1L);
    int32_t l_128 = (-1L);
    int64_t l_169 = 0x33268B7DADB20BFAL;
    uint8_t l_256 = 0x0AL;
    int32_t l_292 = 1L;
    uint32_t *l_328 = &p_2986->g_222[1];
    uint32_t l_412 = 1UL;
    uint32_t *l_459 = &p_2986->g_133.f3;
    uint32_t **l_458 = &l_459;
    struct S0 l_467 = {1L,0x693CCDD7L,0x82D5CA2DADA7264BL,0x2D0E5574L};
    int32_t *l_473 = &p_2986->g_429;
    int32_t l_494 = 0x274B907FL;
    int32_t l_497[10];
    int8_t l_502[9] = {0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L,0x52L};
    uint64_t *l_512 = &p_2986->g_342;
    struct S0 **l_536 = &p_2986->g_534;
    struct S0 ***l_537 = &p_2986->g_533;
    int32_t **l_580 = (void*)0;
    int32_t ***l_579 = &l_580;
    uint16_t *l_608 = &p_2986->g_125;
    uint32_t l_666 = 0x5DFE9704L;
    int64_t *l_690 = &p_2986->g_500;
    int64_t **l_689 = &l_690;
    uint32_t l_815 = 4294967293UL;
    uint32_t l_834[5] = {0x0894D3C2L,0x0894D3C2L,0x0894D3C2L,0x0894D3C2L,0x0894D3C2L};
    uint8_t *l_864 = (void*)0;
    uint8_t **l_863 = &l_864;
    int64_t l_921 = 0x22F29EE64B86D281L;
    int i;
    for (i = 0; i < 9; i++)
        l_102[i] = 0x7F8E4820L;
    for (i = 0; i < 10; i++)
        l_497[i] = 2L;
lbl_468:
    if (((p_2986->g_60 = (safe_div_func_uint64_t_u_u(((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(252UL, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((0x6DL >= (((p_2986->g_5 != (safe_mul_func_int8_t_s_s(p_2986->g_55[1], ((((safe_add_func_int16_t_s_s(2L, (0x206BCA32L != p_2986->g_5))) < ((l_105 = (safe_lshift_func_uint8_t_u_s((((*l_103) = (l_102[6] | (p_71.f3 == p_2986->g_14))) < p_2986->g_5), p_71.f0))) < p_2986->g_60)) || p_2986->g_104) != 0UL)))) , p_2986->g_104) > p_2986->g_55[5])) ^ (-5L)), 0x0662L)), 0x1F87L)))) | 0xD3D1830F2B0E7447L), p_71.f0)))) , p_71.f3), 0xB6L)) & 0xAFEF71A1F957098DL), p_2986->g_55[1]))) && p_2986->g_104))
    { /* block id: 33 */
        int32_t l_108 = 4L;
        int32_t *l_121 = &l_105;
        int8_t *l_163 = &p_2986->g_124;
        int32_t l_221 = 7L;
        int16_t *l_254 = &p_2986->g_188;
        struct S0 l_338 = {0x22674D38L,7UL,0UL,0x18BB6894L};
        int32_t l_369 = 1L;
        uint32_t l_403 = 4294967287UL;
        (1 + 1);
    }
    else
    { /* block id: 212 */
        int16_t l_424 = (-2L);
        int16_t **l_448 = (void*)0;
        int16_t **l_449 = (void*)0;
        int16_t **l_451 = &l_103;
        int32_t *l_457 = &p_2986->g_14;
lbl_433:
        for (p_2986->g_342 = (-6); (p_2986->g_342 <= 2); p_2986->g_342++)
        { /* block id: 215 */
            int32_t *l_425 = &p_2986->g_14;
            int32_t *l_426 = &l_292;
            int32_t *l_427 = &p_2986->g_133.f0;
            int32_t *l_428[3];
            int i;
            for (i = 0; i < 3; i++)
                l_428[i] = (void*)0;
            (*l_425) = (l_424 = (safe_div_func_int32_t_s_s(p_71.f1, (~(-5L)))));
            if (p_2986->g_342)
                goto lbl_433;
            p_2986->g_430[4]--;
        }
        for (p_71.f1 = 0; (p_71.f1 != 21); p_71.f1 = safe_add_func_uint64_t_u_u(p_71.f1, 2))
        { /* block id: 223 */
            return p_71;
        }
        (*l_457) = ((safe_rshift_func_int8_t_s_u(p_71.f2, ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(((((&p_2986->g_243 != (void*)0) || ((((((*l_328)--) > (safe_div_func_uint64_t_u_u((((*l_451) = (p_71 , (p_2986->g_450[2][5] = p_72))) != (((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((void*)0 != &p_2986->g_334[0][0][0]), p_2986->g_133.f3)), ((((((~p_2986->g_132) , p_2986->g_456) || l_424) ^ p_2986->g_208) ^ p_2986->g_55[5]) , l_424))) ^ p_71.f0) , p_72)), 0x72FF2AD20E9BE460L))) > 0UL) <= p_71.f0) > 1UL)) && 0x2C76A57F8FCB661FL) == 6UL), l_102[6])) | 0x39D5B40FL) >= l_424), 1)) ^ l_424))) , 1L);
        return p_71;
    }
    if ((((*l_458) = &p_2986->g_211) != &p_2986->g_211))
    { /* block id: 233 */
        int32_t *l_460 = &p_2986->g_5;
        int32_t **l_461 = &l_460;
        struct S0 l_466 = {3L,4294967294UL,18446744073709551612UL,1UL};
        (*l_461) = l_460;
        if (p_2986->g_456)
            goto lbl_462;
lbl_462:
        p_71.f0 ^= ((**l_461) != ((*l_103) = (+l_412)));
        l_466 = ((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_s(p_71.f1, ((*l_103) = 0L))))) , p_71);
        p_71 = l_467;
    }
    else
    { /* block id: 241 */
        if (p_71.f3)
            goto lbl_468;
    }
    for (p_2986->g_211 = 0; (p_2986->g_211 > 30); p_2986->g_211 = safe_add_func_int16_t_s_s(p_2986->g_211, 1))
    { /* block id: 246 */
        int8_t l_484 = (-1L);
        int32_t l_498 = (-3L);
        int32_t l_499 = 1L;
        int32_t l_503 = (-1L);
        int32_t l_504 = (-1L);
        int32_t l_505 = 0x54AC71C8L;
        uint16_t *l_513 = (void*)0;
        uint32_t *l_525 = &p_2986->g_216;
        struct S0 **l_540[1][6][8] = {{{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534},{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534},{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534},{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534},{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534},{&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534,&p_2986->g_534,(void*)0,&p_2986->g_534,&p_2986->g_534}}};
        int64_t **l_557 = (void*)0;
        int i, j, k;
        for (l_412 = 0; (l_412 != 51); ++l_412)
        { /* block id: 249 */
            uint64_t l_476[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t l_485 = 0x1C0F8573L;
            int32_t l_488 = 0x744265AAL;
            int32_t l_489 = 9L;
            int32_t l_491 = 0L;
            int32_t l_492 = 0x350AFDC8L;
            int32_t l_493[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
            uint16_t *l_514[4][3][4] = {{{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0}},{{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0}},{{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0}},{{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0},{&p_2986->g_125,(void*)0,(void*)0,(void*)0}}};
            struct S0 *l_524[2][5] = {{&p_2986->g_133,&p_2986->g_133,&p_2986->g_133,&p_2986->g_133,&p_2986->g_133},{&p_2986->g_133,&p_2986->g_133,&p_2986->g_133,&p_2986->g_133,&p_2986->g_133}};
            int16_t l_530 = 0x19AFL;
            struct S0 **l_539 = (void*)0;
            struct S0 ***l_538 = &l_539;
            uint32_t *l_541 = &l_467.f1;
            struct S0 l_556[8][2][10] = {{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}},{{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}},{{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{0L,1UL,0xC1D9B3FC4138B69AL,0x1C8CA466L},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL},{9L,4294967293UL,0xDB4F1A7D4CA4C91CL,0x797FA43CL}}}};
            int i, j, k;
            l_473 = &p_2986->g_429;
            for (p_2986->g_133.f3 = 0; (p_2986->g_133.f3 >= 32); p_2986->g_133.f3++)
            { /* block id: 253 */
                l_476[3] = p_2986->g_188;
                if (p_2986->g_133.f2)
                    continue;
            }
            for (p_2986->g_243 = 0; (p_2986->g_243 != 3); p_2986->g_243 = safe_add_func_int32_t_s_s(p_2986->g_243, 5))
            { /* block id: 259 */
                int32_t *l_479 = &l_128;
                int32_t *l_480 = (void*)0;
                int32_t *l_481 = &l_292;
                int32_t *l_482 = &l_292;
                int32_t *l_483[10][2][6] = {{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}},{{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429},{&p_2986->g_429,&l_105,&p_2986->g_429,&p_2986->g_429,&l_105,&p_2986->g_429}}};
                uint64_t *l_509 = &p_2986->g_342;
                uint64_t **l_510 = (void*)0;
                uint64_t **l_511[6][8] = {{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509},{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509},{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509},{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509},{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509},{&l_509,&l_509,&l_509,(void*)0,(void*)0,(void*)0,&l_509,&l_509}};
                uint64_t *l_521[1];
                uint16_t **l_545 = &p_2986->g_543;
                int64_t ***l_558 = &l_557;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_521[i] = &p_2986->g_133.f2;
                --p_2986->g_506;
                if (((((l_512 = l_509) != &p_2986->g_342) <= (l_513 != l_514[1][1][2])) >= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((!p_2986->g_334[0][5][4]), (~(safe_add_func_uint64_t_u_u((p_71.f2 = (p_2986->g_501[1][5][3] , p_2986->g_14)), (safe_mul_func_int8_t_s_s(l_503, p_2986->g_500))))))), 3))))
                { /* block id: 263 */
                    l_524[1][0] = &p_71;
                    if (p_2986->g_222[0])
                        continue;
                }
                else
                { /* block id: 266 */
                    uint16_t ***l_544[10][2][3] = {{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}},{{&p_2986->g_542,&p_2986->g_542,(void*)0},{&p_2986->g_542,&p_2986->g_542,(void*)0}}};
                    int32_t l_546[4] = {0x7320AE74L,0x7320AE74L,0x7320AE74L,0x7320AE74L};
                    int i, j, k;
                    (*l_481) = (l_525 != (((!(0UL == (p_2986->g_133.f1 = p_71.f0))) >= (((((safe_sub_func_int32_t_s_s((((~(safe_sub_func_int32_t_s_s(l_530, (((safe_mul_func_int32_t_s_s(p_2986->g_125, ((l_536 = p_2986->g_533) != ((&p_2986->g_241 == (l_538 = l_537)) , l_540[0][3][1])))) < p_71.f2) == 0x0CD68CDDL)))) && p_71.f1) ^ 246UL), 3UL)) , 0x60C2A718L) > p_2986->g_55[5]) < 0x03L) >= p_2986->g_133.f2)) , l_541));
                    if (((l_545 = p_2986->g_542) == &l_513))
                    { /* block id: 272 */
                        int32_t l_547 = 0x392DA13BL;
                        int32_t l_548 = 1L;
                        ++p_2986->g_549;
                    }
                    else
                    { /* block id: 274 */
                        l_491 ^= l_504;
                        (*l_479) = (+(((***l_537) = p_71) , p_2986->g_490));
                    }
                }
                for (l_530 = 1; (l_530 > (-8)); l_530 = safe_sub_func_uint8_t_u_u(l_530, 1))
                { /* block id: 282 */
                    for (p_2986->g_490 = (-8); (p_2986->g_490 < (-14)); p_2986->g_490--)
                    { /* block id: 285 */
                        return l_556[5][0][9];
                    }
                }
                (*l_558) = l_557;
            }
            if (p_2986->g_334[0][5][4])
                continue;
        }
    }
    for (p_2986->g_153 = 0; (p_2986->g_153 <= 4); p_2986->g_153 += 1)
    { /* block id: 296 */
        struct S0 ***l_583 = (void*)0;
        int8_t *l_584[3];
        int32_t l_585[7];
        uint16_t l_586[9] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
        int8_t l_587[6] = {0x3FL,0x3FL,0x3FL,0x3FL,0x3FL,0x3FL};
        uint16_t *l_609 = &l_586[4];
        uint32_t l_679 = 0x9FE69B33L;
        uint64_t *l_714[5] = {&p_2986->g_342,&p_2986->g_342,&p_2986->g_342,&p_2986->g_342,&p_2986->g_342};
        int64_t l_723 = 0x131D1FB8BB39B4C6L;
        uint8_t *l_728 = &p_2986->g_506;
        int32_t *l_729 = &p_2986->g_133.f0;
        uint32_t l_748 = 6UL;
        uint16_t l_797[8][8][4] = {{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}},{{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL},{0x2ECCL,65527UL,0xEB68L,0x203EL}}};
        struct S0 l_838 = {0x22218B81L,0xA687B4C5L,18446744073709551607UL,0x758D01D2L};
        uint32_t l_926 = 0x8478C6BCL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_584[i] = &l_502[7];
        for (i = 0; i < 7; i++)
            l_585[i] = 6L;
        (1 + 1);
    }
    return (***l_537);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S1 c_2987;
    struct S1* p_2986 = &c_2987;
    struct S1 c_2988 = {
        0x4EE7D214L, // p_2986->g_3
        0x5B40194DL, // p_2986->g_4
        (-1L), // p_2986->g_5
        0x1D5FAC12L, // p_2986->g_10
        (-8L), // p_2986->g_14
        8L, // p_2986->g_39
        {0x7C3FE767L,0x7C3FE767L,0x7C3FE767L,0x7C3FE767L,0x7C3FE767L,0x7C3FE767L}, // p_2986->g_55
        0x3816L, // p_2986->g_60
        5UL, // p_2986->g_79
        &p_2986->g_79, // p_2986->g_78
        &p_2986->g_78, // p_2986->g_77
        0x00CEL, // p_2986->g_104
        0L, // p_2986->g_124
        0xC084L, // p_2986->g_125
        4294967295UL, // p_2986->g_132
        {0x1DA39B38L,0x34325E2FL,18446744073709551612UL,0x514B5F72L}, // p_2986->g_133
        0UL, // p_2986->g_153
        0x3DECL, // p_2986->g_188
        (-6L), // p_2986->g_208
        0x3449171DL, // p_2986->g_211
        1UL, // p_2986->g_215
        4294967295UL, // p_2986->g_216
        {0UL,0UL}, // p_2986->g_222
        &p_2986->g_133, // p_2986->g_242
        &p_2986->g_242, // p_2986->g_241
        &p_2986->g_241, // p_2986->g_240
        18446744073709551607UL, // p_2986->g_243
        {0x3D33L,0x3D33L,0x3D33L,0x3D33L,0x3D33L,0x3D33L,0x3D33L}, // p_2986->g_261
        &p_2986->g_261[0], // p_2986->g_260
        &p_2986->g_260, // p_2986->g_259
        1UL, // p_2986->g_299
        {{{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L},{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L},{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L},{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L},{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L},{7UL,7UL,0x57708722L,3UL,0x80BCEAF3L}}}, // p_2986->g_334
        0xFB8773EDCD0FB91BL, // p_2986->g_342
        0x79D28539BA7F623BL, // p_2986->g_373
        0x5F20487EL, // p_2986->g_429
        {4294967286UL,4294967286UL,4294967286UL,4294967286UL,4294967286UL}, // p_2986->g_430
        {{&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104},{&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104},{&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104,&p_2986->g_104}}, // p_2986->g_450
        18446744073709551613UL, // p_2986->g_456
        0x3DL, // p_2986->g_486
        (-1L), // p_2986->g_487
        0x090F7460AFD0AD57L, // p_2986->g_490
        0x10F38BF8L, // p_2986->g_495
        0x63A165C8L, // p_2986->g_496
        0x07E1238103768739L, // p_2986->g_500
        {{{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L}},{{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L},{(-10L),0x25BB908CL,0x25BB908CL,(-10L),9L,0x4ABDEEF5L}}}, // p_2986->g_501
        0x2CL, // p_2986->g_506
        {-8L,0x4A181349L,1UL,0x302ED027L}, // p_2986->g_535
        &p_2986->g_535, // p_2986->g_534
        &p_2986->g_534, // p_2986->g_533
        &p_2986->g_60, // p_2986->g_543
        &p_2986->g_543, // p_2986->g_542
        4294967295UL, // p_2986->g_549
        &p_2986->g_125, // p_2986->g_607
        (-1L), // p_2986->g_625
        0x11B815B8L, // p_2986->g_646
        0xBA5F34DEC07957D6L, // p_2986->g_648
        1L, // p_2986->g_661
        18446744073709551609UL, // p_2986->g_707
        7L, // p_2986->g_734
        {{{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L}},{{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L}},{{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L}},{{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L}},{{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L},{0x00L,1L,0x00L,0x00L,1L}}}, // p_2986->g_736
        {{{0UL}},{{0UL}}}, // p_2986->g_741
        (void*)0, // p_2986->g_762
        0x698DC915CE02C47FL, // p_2986->g_796
        (void*)0, // p_2986->g_837
        0x4EBBL, // p_2986->g_867
        (void*)0, // p_2986->g_891
        1L, // p_2986->g_913
        {{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L},{7L,0x75B8E6ABL,0x75B8E6ABL,7L,0x44FCC850L,8L,0x08EE7231L,3L}}, // p_2986->g_914
        &p_2986->g_506, // p_2986->g_1069
        &p_2986->g_1069, // p_2986->g_1068
        0x5A66A3D79195ECE2L, // p_2986->g_1096
        (-1L), // p_2986->g_1106
        0UL, // p_2986->g_1120
        0x30AB9B09C95CA1C7L, // p_2986->g_1236
        {(void*)0,(void*)0}, // p_2986->g_1238
        &p_2986->g_1238[0], // p_2986->g_1237
        &p_2986->g_762, // p_2986->g_1317
        0x60BBL, // p_2986->g_1362
        (void*)0, // p_2986->g_1376
        0x282E0581L, // p_2986->g_1377
        (void*)0, // p_2986->g_1382
        {{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}},{{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0},{&p_2986->g_1382,&p_2986->g_1382,&p_2986->g_1382,(void*)0}}}, // p_2986->g_1381
        (-1L), // p_2986->g_1463
        (void*)0, // p_2986->g_1533
        &p_2986->g_1533, // p_2986->g_1532
        0xBC31E55FL, // p_2986->g_1631
        0x28559833L, // p_2986->g_1700
        0x34B6E5E779DA6E5CL, // p_2986->g_1978
        0x7ADD78B0L, // p_2986->g_1999
        {0UL,0UL,0UL,0UL,0UL}, // p_2986->g_2000
        0x440503BBL, // p_2986->g_2056
        &p_2986->g_707, // p_2986->g_2208
        &p_2986->g_2208, // p_2986->g_2207
        6UL, // p_2986->g_2398
        &p_2986->g_543, // p_2986->g_2434
        &p_2986->g_2434, // p_2986->g_2433
        &p_2986->g_2433, // p_2986->g_2432
        &p_2986->g_2432, // p_2986->g_2431
        0x02F6FCA6BCE3E040L, // p_2986->g_2490
        &p_2986->g_1463, // p_2986->g_2507
        &p_2986->g_2507, // p_2986->g_2506
        &p_2986->g_2506, // p_2986->g_2505
        1UL, // p_2986->g_2679
        4UL, // p_2986->g_2779
        &p_2986->g_736[4][1][4], // p_2986->g_2786
        &p_2986->g_2786, // p_2986->g_2785
        &p_2986->g_2785, // p_2986->g_2784
        0xEE3CL, // p_2986->g_2791
        0x72L, // p_2986->g_2818
        (void*)0, // p_2986->g_2875
        &p_2986->g_646, // p_2986->g_2941
        6L, // p_2986->g_2942
        0UL, // p_2986->g_2960
        &p_2986->g_1236, // p_2986->g_2961
        {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_2986->g_2983
    };
    c_2987 = c_2988;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2986);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_2986->g_3, "p_2986->g_3", print_hash_value);
    transparent_crc(p_2986->g_4, "p_2986->g_4", print_hash_value);
    transparent_crc(p_2986->g_5, "p_2986->g_5", print_hash_value);
    transparent_crc(p_2986->g_10, "p_2986->g_10", print_hash_value);
    transparent_crc(p_2986->g_14, "p_2986->g_14", print_hash_value);
    transparent_crc(p_2986->g_39, "p_2986->g_39", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_2986->g_55[i], "p_2986->g_55[i]", print_hash_value);

    }
    transparent_crc(p_2986->g_60, "p_2986->g_60", print_hash_value);
    transparent_crc(p_2986->g_79, "p_2986->g_79", print_hash_value);
    transparent_crc(p_2986->g_104, "p_2986->g_104", print_hash_value);
    transparent_crc(p_2986->g_124, "p_2986->g_124", print_hash_value);
    transparent_crc(p_2986->g_125, "p_2986->g_125", print_hash_value);
    transparent_crc(p_2986->g_132, "p_2986->g_132", print_hash_value);
    transparent_crc(p_2986->g_133.f0, "p_2986->g_133.f0", print_hash_value);
    transparent_crc(p_2986->g_133.f1, "p_2986->g_133.f1", print_hash_value);
    transparent_crc(p_2986->g_133.f2, "p_2986->g_133.f2", print_hash_value);
    transparent_crc(p_2986->g_133.f3, "p_2986->g_133.f3", print_hash_value);
    transparent_crc(p_2986->g_153, "p_2986->g_153", print_hash_value);
    transparent_crc(p_2986->g_188, "p_2986->g_188", print_hash_value);
    transparent_crc(p_2986->g_208, "p_2986->g_208", print_hash_value);
    transparent_crc(p_2986->g_211, "p_2986->g_211", print_hash_value);
    transparent_crc(p_2986->g_215, "p_2986->g_215", print_hash_value);
    transparent_crc(p_2986->g_216, "p_2986->g_216", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2986->g_222[i], "p_2986->g_222[i]", print_hash_value);

    }
    transparent_crc(p_2986->g_243, "p_2986->g_243", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_2986->g_261[i], "p_2986->g_261[i]", print_hash_value);

    }
    transparent_crc(p_2986->g_299, "p_2986->g_299", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2986->g_334[i][j][k], "p_2986->g_334[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2986->g_342, "p_2986->g_342", print_hash_value);
    transparent_crc(p_2986->g_373, "p_2986->g_373", print_hash_value);
    transparent_crc(p_2986->g_429, "p_2986->g_429", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2986->g_430[i], "p_2986->g_430[i]", print_hash_value);

    }
    transparent_crc(p_2986->g_456, "p_2986->g_456", print_hash_value);
    transparent_crc(p_2986->g_486, "p_2986->g_486", print_hash_value);
    transparent_crc(p_2986->g_487, "p_2986->g_487", print_hash_value);
    transparent_crc(p_2986->g_490, "p_2986->g_490", print_hash_value);
    transparent_crc(p_2986->g_495, "p_2986->g_495", print_hash_value);
    transparent_crc(p_2986->g_496, "p_2986->g_496", print_hash_value);
    transparent_crc(p_2986->g_500, "p_2986->g_500", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_2986->g_501[i][j][k], "p_2986->g_501[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2986->g_506, "p_2986->g_506", print_hash_value);
    transparent_crc(p_2986->g_535.f0, "p_2986->g_535.f0", print_hash_value);
    transparent_crc(p_2986->g_535.f1, "p_2986->g_535.f1", print_hash_value);
    transparent_crc(p_2986->g_535.f2, "p_2986->g_535.f2", print_hash_value);
    transparent_crc(p_2986->g_535.f3, "p_2986->g_535.f3", print_hash_value);
    transparent_crc(p_2986->g_549, "p_2986->g_549", print_hash_value);
    transparent_crc(p_2986->g_625, "p_2986->g_625", print_hash_value);
    transparent_crc(p_2986->g_646, "p_2986->g_646", print_hash_value);
    transparent_crc(p_2986->g_648, "p_2986->g_648", print_hash_value);
    transparent_crc(p_2986->g_661, "p_2986->g_661", print_hash_value);
    transparent_crc(p_2986->g_707, "p_2986->g_707", print_hash_value);
    transparent_crc(p_2986->g_734, "p_2986->g_734", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_2986->g_736[i][j][k], "p_2986->g_736[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_2986->g_741[i][j][k], "p_2986->g_741[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2986->g_796, "p_2986->g_796", print_hash_value);
    transparent_crc(p_2986->g_867, "p_2986->g_867", print_hash_value);
    transparent_crc(p_2986->g_913, "p_2986->g_913", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_2986->g_914[i][j], "p_2986->g_914[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2986->g_1096, "p_2986->g_1096", print_hash_value);
    transparent_crc(p_2986->g_1106, "p_2986->g_1106", print_hash_value);
    transparent_crc(p_2986->g_1120, "p_2986->g_1120", print_hash_value);
    transparent_crc(p_2986->g_1236, "p_2986->g_1236", print_hash_value);
    transparent_crc(p_2986->g_1362, "p_2986->g_1362", print_hash_value);
    transparent_crc(p_2986->g_1377, "p_2986->g_1377", print_hash_value);
    transparent_crc(p_2986->g_1463, "p_2986->g_1463", print_hash_value);
    transparent_crc(p_2986->g_1631, "p_2986->g_1631", print_hash_value);
    transparent_crc(p_2986->g_1700, "p_2986->g_1700", print_hash_value);
    transparent_crc(p_2986->g_1978, "p_2986->g_1978", print_hash_value);
    transparent_crc(p_2986->g_1999, "p_2986->g_1999", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2986->g_2000[i], "p_2986->g_2000[i]", print_hash_value);

    }
    transparent_crc(p_2986->g_2056, "p_2986->g_2056", print_hash_value);
    transparent_crc(p_2986->g_2398, "p_2986->g_2398", print_hash_value);
    transparent_crc(p_2986->g_2490, "p_2986->g_2490", print_hash_value);
    transparent_crc(p_2986->g_2679, "p_2986->g_2679", print_hash_value);
    transparent_crc(p_2986->g_2779, "p_2986->g_2779", print_hash_value);
    transparent_crc(p_2986->g_2791, "p_2986->g_2791", print_hash_value);
    transparent_crc(p_2986->g_2818, "p_2986->g_2818", print_hash_value);
    transparent_crc(p_2986->g_2942, "p_2986->g_2942", print_hash_value);
    transparent_crc(p_2986->g_2960, "p_2986->g_2960", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2986->g_2983[i], "p_2986->g_2983[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
