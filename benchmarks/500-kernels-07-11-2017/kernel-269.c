// -g 44,49,1 -l 4,1,1
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


// Seed: 2597848655

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int8_t  f0;
};

struct S1 {
   uint64_t  f0;
   volatile int32_t  f1;
   uint32_t  f2;
   int64_t  f3;
   volatile uint32_t  f4;
   uint16_t  f5;
};

union U2 {
   uint16_t  f0;
   volatile int64_t  f1;
   int16_t  f2;
};

struct S3 {
    int32_t g_15;
    int32_t *g_14;
    int16_t g_43;
    int16_t g_53;
    int16_t *g_52;
    int16_t *g_55;
    int32_t g_61;
    volatile int32_t g_64[10][2][10];
    volatile int32_t g_65;
    volatile int32_t g_66[6][9];
    int32_t g_67;
    uint64_t g_76;
    int32_t g_88;
    struct S0 g_93;
    struct S0 g_96;
    volatile struct S0 g_97[8];
    int8_t g_121[8][1][1];
    int8_t g_123[8][2];
    uint16_t g_125;
    uint32_t g_127;
    volatile int32_t *g_133;
    volatile int32_t ** volatile g_132[2];
    volatile int32_t ** volatile g_134;
    int32_t *g_167;
    volatile union U2 g_173;
    struct S0 g_184;
    struct S0 * volatile g_185;
    int8_t *g_193;
    struct S1 g_210;
    int32_t g_243;
    uint64_t g_247[10];
    int32_t ** volatile g_250;
    struct S0 g_272;
    struct S0 g_273;
    volatile struct S0 *g_275;
    uint8_t g_279[2];
    volatile struct S1 g_297;
    union U2 g_328;
    int32_t **g_348;
    struct S1 g_458;
    int16_t **g_463;
    volatile struct S1 g_464[10];
    struct S1 g_491;
    uint32_t g_495;
    struct S1 g_496[3];
    int16_t g_500;
    int16_t *g_499;
    int32_t g_505[2][10][1];
    struct S1 *g_531;
    struct S1 **g_530;
    volatile int64_t * volatile g_537;
    int64_t *g_539;
    uint8_t * volatile g_585;
    uint8_t * volatile *g_584[3];
    uint8_t * volatile * volatile *g_583;
    union U2 g_604;
    uint16_t g_608;
    uint64_t g_650;
    uint64_t *g_654;
    uint64_t **g_653;
    struct S0 g_663;
    volatile struct S1 g_703;
    volatile int32_t ** volatile g_729;
    int32_t *g_745;
    int32_t **g_744;
    int32_t *** volatile g_743;
    uint8_t *g_786;
    uint8_t **g_785[4];
    uint8_t **g_791[5];
    int32_t g_795;
    uint32_t g_814;
    union U2 *g_841;
    volatile struct S1 g_894[3][3];
    int16_t g_919;
    uint16_t *** volatile g_931;
    uint16_t **g_932;
    volatile union U2 g_964[10];
    struct S1 g_969;
    union U2 g_989[1][4];
    uint64_t *g_1017;
    struct S0 g_1024;
    struct S0 g_1025;
    union U2 ** volatile g_1037;
    struct S1 g_1040[3];
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S3 * p_1051);
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, uint32_t  p_5, int16_t  p_6, int32_t * p_7, struct S3 * p_1051);
uint32_t  func_8(int32_t * p_9, int32_t * p_10, int32_t * p_11, uint8_t  p_12, int32_t * p_13, struct S3 * p_1051);
int32_t * func_16(int32_t * p_17, int32_t * p_18, struct S3 * p_1051);
struct S0  func_19(int8_t  p_20, uint64_t  p_21, int32_t * p_22, int32_t * p_23, int32_t  p_24, struct S3 * p_1051);
uint8_t  func_29(uint8_t  p_30, int64_t  p_31, int32_t * p_32, uint64_t  p_33, int32_t * p_34, struct S3 * p_1051);
uint64_t  func_35(int32_t * p_36, int32_t  p_37, int32_t * p_38, struct S3 * p_1051);
int64_t  func_44(int16_t * p_45, uint32_t  p_46, int16_t * p_47, struct S3 * p_1051);
uint16_t  func_48(int16_t  p_49, struct S3 * p_1051);
int16_t  func_50(int64_t  p_51, struct S3 * p_1051);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1051->g_14 p_1051->g_15 p_1051->g_52 p_1051->g_53 p_1051->g_76 p_1051->g_88 p_1051->g_93 p_1051->g_96 p_1051->g_97 p_1051->g_55 p_1051->g_123 p_1051->g_134 p_1051->g_67 p_1051->g_64 p_1051->g_121 p_1051->g_61 p_1051->g_133 p_1051->g_173 p_1051->g_125 p_1051->g_210.f2 p_1051->g_185 p_1051->g_184 p_1051->g_167 p_1051->g_247 p_1051->g_348 p_1051->g_463 p_1051->g_272.f0 p_1051->g_210.f3 p_1051->g_491 p_1051->g_495 p_1051->g_458 p_1051->g_499 p_1051->g_210.f0 p_1051->g_279 p_1051->g_66 p_1051->g_328.f0 p_1051->g_505 p_1051->g_530 p_1051->g_537 p_1051->g_539 p_1051->g_531 p_1051->g_464.f3 p_1051->g_500 p_1051->g_127 p_1051->g_496.f0 p_1051->g_583 p_1051->g_604 p_1051->g_608 p_1051->g_210.f5 p_1051->g_585 p_1051->g_653 p_1051->g_663 p_1051->g_464.f2 p_1051->g_496.f2 p_1051->g_604.f2 p_1051->g_584 p_1051->g_703 p_1051->g_729 p_1051->g_743 p_1051->g_744 p_1051->g_785 p_1051->g_795 p_1051->g_814 p_1051->g_496.f5 p_1051->g_969.f2 p_1051->g_496.f3 p_1051->g_1024 p_1051->g_250 p_1051->g_654 p_1051->g_297.f5 p_1051->g_1037 p_1051->g_1040
 * writes: p_1051->g_15 p_1051->g_43 p_1051->g_52 p_1051->g_55 p_1051->g_53 p_1051->g_61 p_1051->g_67 p_1051->g_76 p_1051->g_88 p_1051->g_121 p_1051->g_123 p_1051->g_125 p_1051->g_127 p_1051->g_133 p_1051->g_64 p_1051->g_167 p_1051->g_210.f2 p_1051->g_97 p_1051->g_210.f5 p_1051->g_210.f3 p_1051->g_243 p_1051->g_458.f3 p_1051->g_491 p_1051->g_495 p_1051->g_496 p_1051->g_505 p_1051->g_530 p_1051->g_328.f0 p_1051->g_247 p_1051->g_653 p_1051->g_184 p_1051->g_604.f2 p_1051->g_279 p_1051->g_604.f0 p_1051->g_650 p_1051->g_744 p_1051->g_791 p_1051->g_795 p_1051->g_814 p_1051->g_841 p_1051->g_531 p_1051->g_1017 p_1051->g_500 p_1051->g_1025
 */
int16_t  func_1(struct S3 * p_1051)
{ /* block id: 4 */
    int32_t *l_39[9][9] = {{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15},{&p_1051->g_15,&p_1051->g_15,(void*)0,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15,&p_1051->g_15}};
    int8_t l_40 = 0x50L;
    int16_t *l_42 = &p_1051->g_43;
    int16_t **l_54[10] = {&l_42,&p_1051->g_52,&l_42,&l_42,&p_1051->g_52,&l_42,&l_42,&p_1051->g_52,&l_42,&l_42};
    int16_t *l_56[9];
    int8_t l_498[8][6][5] = {{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}},{{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L},{(-2L),7L,(-2L),0x6AL,0x28L}}};
    int32_t *l_504 = &p_1051->g_505[1][4][0];
    int32_t *l_557 = &p_1051->g_15;
    int32_t l_732 = 6L;
    uint64_t *l_1028 = &p_1051->g_969.f0;
    uint32_t l_1035 = 0x64A5F77EL;
    union U2 *l_1036 = &p_1051->g_604;
    uint32_t *l_1041[7] = {&p_1051->g_127,&p_1051->g_127,&p_1051->g_127,&p_1051->g_127,&p_1051->g_127,&p_1051->g_127,&p_1051->g_127};
    uint16_t l_1048[9] = {0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL,0x9E1FL};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_56[i] = &p_1051->g_53;
    (*p_1051->g_348) = func_2((func_8(p_1051->g_14, func_16((func_19((safe_lshift_func_int16_t_s_u(((-1L) | ((safe_add_func_uint8_t_u_u(func_29((func_35(l_39[4][0], l_40, l_39[8][1], p_1051) , (((*l_42) = p_1051->g_15) != (func_44(((func_48((p_1051->g_495 ^= func_50((((p_1051->g_55 = (p_1051->g_52 = p_1051->g_52)) == l_56[7]) > p_1051->g_15), p_1051)), p_1051) && l_498[7][1][3]) , (void*)0), p_1051->g_458.f2, p_1051->g_499, p_1051) > p_1051->g_279[1]))), p_1051->g_279[0], l_504, p_1051->g_247[7], l_39[1][8], p_1051), p_1051->g_328.f0)) >= 1L)), 12)), p_1051->g_247[5], &p_1051->g_505[1][4][0], &p_1051->g_505[0][0][0], p_1051->g_279[1], p_1051) , l_557), p_1051->g_14, p_1051), p_1051->g_14, l_732, &l_732, p_1051) , 18446744073709551615UL), p_1051->g_458.f5, p_1051->g_969.f2, (*p_1051->g_499), l_39[4][0], p_1051);
    (*p_1051->g_1037) = ((safe_lshift_func_int8_t_s_u((((*l_504) , p_1051->g_654) != l_1028), ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((*l_504) != (p_1051->g_297.f5 >= (0x3A8EC38F55414E52L | (*l_557)))), (*l_557))), l_1035)), (*l_557))) <= (*l_557)))) , l_1036);
    (*p_1051->g_133) = (safe_mul_func_int16_t_s_s((((*l_557) != 0x7EE07B1E995CF3A8L) , (p_1051->g_1040[1] , ((*l_42) = (((*l_557) = ((*p_1051->g_463) != (void*)0)) <= ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((*p_1051->g_530) == ((p_1051->g_491.f5 , ((l_1048[8] & ((((***p_1051->g_583) &= ((safe_lshift_func_uint16_t_u_u(((void*)0 != &p_1051->g_744), p_1051->g_608)) > p_1051->g_496[1].f3)) && 0xC5L) , (*l_504))) & (*l_504))) , (*p_1051->g_530))), (*l_504))), (**p_1051->g_463))) , (**p_1051->g_463)), (*l_504))) & 0x6B28209E17A4F197L))))), 0xCEC5L));
    return (*l_557);
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_530 p_1051->g_348 p_1051->g_133 p_1051->g_64 p_1051->g_458.f2 p_1051->g_121 p_1051->g_499 p_1051->g_500 p_1051->g_496.f3 p_1051->g_76 p_1051->g_491.f2 p_1051->g_491.f3 p_1051->g_55 p_1051->g_53 p_1051->g_1024 p_1051->g_250 p_1051->g_167
 * writes: p_1051->g_531 p_1051->g_167 p_1051->g_1017 p_1051->g_121 p_1051->g_795 p_1051->g_123 p_1051->g_500 p_1051->g_53 p_1051->g_814 p_1051->g_1025
 */
int32_t * func_2(uint64_t  p_3, uint32_t  p_4, uint32_t  p_5, int16_t  p_6, int32_t * p_7, struct S3 * p_1051)
{ /* block id: 512 */
    struct S1 *l_998 = &p_1051->g_491;
    struct S1 **l_999 = &l_998;
    int32_t *l_1000 = (void*)0;
    int32_t *l_1001[4][1][10] = {{{&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][9][0],(void*)0,&p_1051->g_505[1][9][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0]}},{{&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][9][0],(void*)0,&p_1051->g_505[1][9][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0]}},{{&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][9][0],(void*)0,&p_1051->g_505[1][9][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0]}},{{&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][9][0],(void*)0,&p_1051->g_505[1][9][0],&p_1051->g_505[1][6][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][4][0],&p_1051->g_505[1][6][0]}}};
    int64_t l_1002 = 0x2B86ACF45DA7E84AL;
    int32_t l_1003[9][1] = {{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L},{0x740E4D58L}};
    uint16_t l_1004[1][2];
    uint64_t *l_1016 = &p_1051->g_491.f0;
    uint64_t **l_1015[7] = {&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016,&l_1016};
    int8_t *l_1018[6][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
    int32_t *l_1019[9];
    int32_t l_1020 = 0x5AD8699EL;
    int32_t l_1021 = 0x61965A8BL;
    uint32_t *l_1022 = &p_1051->g_814;
    int16_t *l_1023[9];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1004[i][j] = 7UL;
    }
    for (i = 0; i < 9; i++)
        l_1019[i] = &p_1051->g_795;
    for (i = 0; i < 9; i++)
        l_1023[i] = &p_1051->g_989[0][0].f2;
    (*l_999) = ((*p_1051->g_530) = l_998);
    (*p_1051->g_348) = l_1000;
    l_1004[0][1]--;
    p_1051->g_1025 = ((~(!((p_6 = ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_1022) = (p_6 & (((*p_1051->g_55) |= ((*p_1051->g_499) = (safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((p_1051->g_123[5][0] = ((1L != (((!(*p_1051->g_133)) && ((p_1051->g_1017 = &p_3) == (void*)0)) < (p_1051->g_121[1][0][0] &= p_1051->g_458.f2))) != (((((*p_1051->g_499) >= ((((p_1051->g_795 = (p_6 || ((p_5 >= p_6) & p_4))) , p_1051->g_496[1].f3) , p_1051->g_76) >= 0x0F78BB043240ABCCL)) | p_1051->g_491.f2) && l_1020) != p_3))) ^ 0L) ^ l_1021), p_4)), p_1051->g_491.f3)))) && (-1L)))) < p_6), 1L)), p_1051->g_491.f2)) & p_3)) ^ 0x064BL))) , p_1051->g_1024);
    return (*p_1051->g_250);
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_743 p_1051->g_463 p_1051->g_55 p_1051->g_53 p_1051->g_583 p_1051->g_584 p_1051->g_585 p_1051->g_279 p_1051->g_247 p_1051->g_15 p_1051->g_744 p_1051->g_785 p_1051->g_795 p_1051->g_134 p_1051->g_133 p_1051->g_64 p_1051->g_814 p_1051->g_496.f5 p_1051->g_348
 * writes: p_1051->g_650 p_1051->g_458.f3 p_1051->g_61 p_1051->g_744 p_1051->g_123 p_1051->g_53 p_1051->g_791 p_1051->g_795 p_1051->g_814 p_1051->g_15 p_1051->g_491.f2 p_1051->g_167 p_1051->g_279 p_1051->g_491.f0 p_1051->g_841
 */
uint32_t  func_8(int32_t * p_9, int32_t * p_10, int32_t * p_11, uint8_t  p_12, int32_t * p_13, struct S3 * p_1051)
{ /* block id: 371 */
    uint32_t l_752[9][2] = {{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL},{0UL,0x5D69FC4DL}};
    int32_t l_766 = (-9L);
    int32_t l_798 = 0x2096E233L;
    int64_t l_801 = 0x1BC36F4D143CB483L;
    int32_t l_802 = 0x14964CCEL;
    int32_t l_803[5] = {0x6881A415L,0x6881A415L,0x6881A415L,0x6881A415L,0x6881A415L};
    int8_t *l_836 = &p_1051->g_121[7][0][0];
    int64_t l_881[9] = {0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L,0x05AC55DBBBD812A8L};
    uint32_t l_882[6][9] = {{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL},{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL},{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL},{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL},{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL},{8UL,4294967295UL,2UL,4294967295UL,8UL,8UL,4294967295UL,2UL,4294967295UL}};
    struct S1 *l_904[2];
    int64_t l_921 = 0x32EB51EB0BAB6F9AL;
    int8_t l_923[10];
    int32_t l_925 = 0x6DAC545BL;
    uint16_t l_936 = 0xE9D2L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_904[i] = &p_1051->g_210;
    for (i = 0; i < 10; i++)
        l_923[i] = 0x75L;
    for (p_12 = 0; (p_12 < 43); p_12 = safe_add_func_uint8_t_u_u(p_12, 2))
    { /* block id: 374 */
        int16_t l_764 = 0x2DFBL;
        int32_t l_768 = 0x2D746F10L;
        int32_t **l_778 = &p_1051->g_745;
        uint8_t ***l_789 = &p_1051->g_785[0];
        uint64_t *l_792 = &p_1051->g_76;
        int32_t l_804 = 0x0E08F7ABL;
        int32_t l_806 = 0x7B3F48ECL;
        int32_t l_807 = (-1L);
        int32_t l_813 = 0x5A676A39L;
        struct S0 *l_817 = &p_1051->g_663;
        uint64_t l_828 = 0x7616E53376C6B6F3L;
        union U2 *l_840 = &p_1051->g_328;
        uint32_t *l_852 = &l_752[4][0];
        uint32_t *l_863 = (void*)0;
        int32_t l_890[4][4] = {{0x199B25DAL,0x199B25DAL,0x199B25DAL,0x199B25DAL},{0x199B25DAL,0x199B25DAL,0x199B25DAL,0x199B25DAL},{0x199B25DAL,0x199B25DAL,0x199B25DAL,0x199B25DAL},{0x199B25DAL,0x199B25DAL,0x199B25DAL,0x199B25DAL}};
        uint64_t l_891[2][6][2] = {{{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL}},{{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL},{0UL,0x583E7177442A01BCL}}};
        struct S1 *l_906 = &p_1051->g_496[0];
        int32_t l_918 = 0x40E6D0B6L;
        uint16_t *l_930 = (void*)0;
        uint16_t **l_929[3];
        int16_t l_933[2][4] = {{0x407AL,0x407AL,0x407AL,0x407AL},{0x407AL,0x407AL,0x407AL,0x407AL}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_929[i] = &l_930;
        for (p_1051->g_650 = 19; (p_1051->g_650 >= 44); p_1051->g_650 = safe_add_func_int64_t_s_s(p_1051->g_650, 9))
        { /* block id: 377 */
            int32_t *l_742[3];
            int32_t **l_741 = &l_742[2];
            int32_t l_765 = 0x0224B972L;
            uint8_t **l_788 = &p_1051->g_786;
            uint64_t *l_793 = (void*)0;
            int32_t l_800 = 0L;
            int32_t l_808 = 0x3C6207CEL;
            int32_t l_809 = 0x5557DE2DL;
            int32_t l_810 = 0x787E0485L;
            int32_t l_811 = 0L;
            int32_t l_812[3];
            struct S0 **l_833 = &l_817;
            uint64_t l_837 = 2UL;
            int i;
            for (i = 0; i < 3; i++)
                l_742[i] = &p_1051->g_243;
            for (i = 0; i < 3; i++)
                l_812[i] = 0x2894CFB1L;
            for (p_1051->g_458.f3 = 0; (p_1051->g_458.f3 != (-13)); p_1051->g_458.f3 = safe_sub_func_uint64_t_u_u(p_1051->g_458.f3, 2))
            { /* block id: 380 */
                (*p_13) = (*p_13);
            }
            for (p_1051->g_61 = 0; (p_1051->g_61 >= 4); p_1051->g_61++)
            { /* block id: 385 */
                int8_t *l_763 = &p_1051->g_123[4][1];
                int8_t *l_767[1];
                struct S0 *l_777 = &p_1051->g_273;
                int32_t l_796[10][5] = {{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L},{1L,0x052FC7D4L,0L,0x678C0A68L,0x4F3C3E67L}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_767[i] = &p_1051->g_121[3][0][0];
                (*p_1051->g_743) = l_741;
                (*p_13) ^= (safe_div_func_int32_t_s_s(((l_768 &= (252UL < (l_766 = (((safe_lshift_func_uint16_t_u_s(((p_12 , ((((safe_mod_func_int8_t_s_s(((void*)0 != &p_1051->g_530), l_752[6][1])) >= (safe_div_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_763) = (6UL >= (((**p_1051->g_463) && (safe_add_func_uint32_t_u_u(4294967295UL, (safe_sub_func_uint16_t_u_u(l_752[6][1], 9L))))) || p_12))), l_764)), l_765)) >= p_12) , (***p_1051->g_583)), p_12))) && p_12) > p_12)) & p_1051->g_247[3]), 4)) | 1UL) <= 0xB5053E06DE54C164L)))) ^ p_12), (*p_10)));
                for (p_1051->g_53 = (-26); (p_1051->g_53 == 15); ++p_1051->g_53)
                { /* block id: 393 */
                    uint8_t ***l_787[2];
                    uint16_t *l_790[8] = {(void*)0,&p_1051->g_491.f5,(void*)0,(void*)0,&p_1051->g_491.f5,(void*)0,(void*)0,&p_1051->g_491.f5};
                    int32_t *l_794 = &p_1051->g_795;
                    int32_t l_799 = 0L;
                    int32_t l_805[10][3] = {{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)},{9L,0x7F268A59L,(-1L)}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_787[i] = &p_1051->g_785[0];
                    if (((safe_add_func_uint8_t_u_u(l_766, ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_12, 7)), (l_777 == ((l_778 == (*p_1051->g_743)) , l_777)))) && (!((safe_lshift_func_int8_t_s_s((((((*l_794) |= (safe_mul_func_int8_t_s_s(((*p_1051->g_585) & ((((l_788 = p_1051->g_785[0]) == (p_1051->g_791[1] = ((l_768 = (l_789 != (void*)0)) , (void*)0))) , l_792) == l_793)), 0x66L))) , l_796[6][1]) || p_12) , 0L), 5)) ^ l_752[6][1]))))) , (**p_1051->g_134)))
                    { /* block id: 398 */
                        int32_t *l_797[8] = {&p_1051->g_67,&p_1051->g_67,&p_1051->g_67,&p_1051->g_67,&p_1051->g_67,&p_1051->g_67,&p_1051->g_67,&p_1051->g_67};
                        int i;
                        p_1051->g_814++;
                    }
                    else
                    { /* block id: 400 */
                        struct S0 **l_818 = &l_817;
                        int32_t l_819 = (-1L);
                        int32_t *l_820 = (void*)0;
                        int32_t l_821 = (-1L);
                        int32_t *l_822 = &l_805[3][2];
                        int32_t *l_823 = (void*)0;
                        int32_t *l_824 = &l_802;
                        int32_t *l_825 = &l_799;
                        int32_t *l_826 = &p_1051->g_505[1][4][0];
                        int32_t *l_827[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_827[i][j] = (void*)0;
                        }
                        (*l_818) = l_817;
                        l_828--;
                    }
                }
                (*p_9) &= (p_1051->g_496[1].f5 || 0x56E574FB0338B07CL);
            }
            if (l_752[6][1])
                break;
            if ((0L >= ((((p_12 == ((p_12 < (safe_mul_func_int8_t_s_s(p_12, ((void*)0 == l_833)))) >= (((~l_803[3]) <= l_807) > ((void*)0 == p_10)))) | 7L) & p_12) >= 1L)))
            { /* block id: 408 */
                for (p_1051->g_491.f2 = 3; (p_1051->g_491.f2 <= 9); p_1051->g_491.f2 += 1)
                { /* block id: 411 */
                    if ((**p_1051->g_134))
                        break;
                    for (p_1051->g_814 = 0; (p_1051->g_814 <= 9); p_1051->g_814 += 1)
                    { /* block id: 415 */
                        (*p_1051->g_348) = p_11;
                        (*p_11) &= (((safe_lshift_func_int8_t_s_s(p_12, 2)) < ((***p_1051->g_583) = 0xBAL)) || p_12);
                        (*p_10) = 0x2AE277B6L;
                    }
                }
            }
            else
            { /* block id: 422 */
                for (p_1051->g_491.f0 = 0; (p_1051->g_491.f0 <= 1); p_1051->g_491.f0 += 1)
                { /* block id: 425 */
                    union U2 *l_839 = (void*)0;
                    union U2 **l_838[9] = {&l_839,&l_839,&l_839,&l_839,&l_839,&l_839,&l_839,&l_839,&l_839};
                    int i;
                    l_837 ^= ((-2L) ^ (l_836 != l_836));
                    p_1051->g_841 = (l_840 = &p_1051->g_328);
                }
            }
        }
    }
    (*p_1051->g_348) = p_10;
    return l_882[5][8];
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_348 p_1051->g_247 p_1051->g_500 p_1051->g_88 p_1051->g_134 p_1051->g_133 p_1051->g_127 p_1051->g_499 p_1051->g_496.f0 p_1051->g_583 p_1051->g_123 p_1051->g_458.f4 p_1051->g_15 p_1051->g_539 p_1051->g_604 p_1051->g_608 p_1051->g_458.f0 p_1051->g_210.f0 p_1051->g_530 p_1051->g_537 p_1051->g_14 p_1051->g_531 p_1051->g_491 p_1051->g_464.f3 p_1051->g_185 p_1051->g_184 p_1051->g_55 p_1051->g_53 p_1051->g_210.f5 p_1051->g_585 p_1051->g_279 p_1051->g_76 p_1051->g_495 p_1051->g_505 p_1051->g_653 p_1051->g_458.f5 p_1051->g_167 p_1051->g_663 p_1051->g_464.f2 p_1051->g_272.f0 p_1051->g_496.f2 p_1051->g_64 p_1051->g_210.f3 p_1051->g_584 p_1051->g_703 p_1051->g_458.f1 p_1051->g_729 p_1051->g_61 p_1051->g_604.f2
 * writes: p_1051->g_167 p_1051->g_127 p_1051->g_15 p_1051->g_530 p_1051->g_491 p_1051->g_328.f0 p_1051->g_247 p_1051->g_76 p_1051->g_243 p_1051->g_653 p_1051->g_123 p_1051->g_184 p_1051->g_61 p_1051->g_604.f2 p_1051->g_64 p_1051->g_53 p_1051->g_279 p_1051->g_458.f3 p_1051->g_604.f0 p_1051->g_133
 */
int32_t * func_16(int32_t * p_17, int32_t * p_18, struct S3 * p_1051)
{ /* block id: 279 */
    int32_t *l_558 = (void*)0;
    int32_t l_563 = (-6L);
    uint32_t *l_570 = &p_1051->g_127;
    uint8_t ***l_579[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t *l_624 = &p_1051->g_247[3];
    uint64_t **l_623 = &l_624;
    uint16_t l_674 = 0xAFC8L;
    uint32_t l_695 = 1UL;
    int i, j;
lbl_679:
    (*p_1051->g_348) = l_558;
    if ((~(safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_s((l_563 ^ p_1051->g_247[5]), p_1051->g_500)) & l_563) || l_563) >= (safe_lshift_func_int8_t_s_s((p_1051->g_88 || (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*p_17) = (0x6C7B957AL && ((*l_570) |= (p_18 == (*p_1051->g_134))))), l_563)), (*p_1051->g_499)))), 1))), 0UL))))
    { /* block id: 283 */
        int8_t l_575 = (-1L);
        uint8_t *l_578 = (void*)0;
        uint8_t **l_577[1][10][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578},{(void*)0,(void*)0,(void*)0,(void*)0,&l_578,&l_578,&l_578,&l_578,&l_578,&l_578}}};
        uint8_t ***l_576 = &l_577[0][1][8];
        uint32_t l_607 = 4294967295UL;
        int64_t *l_609 = &p_1051->g_458.f3;
        int32_t l_610 = 0x2340669DL;
        int16_t l_619 = 0L;
        uint32_t l_694 = 0x84DE8D94L;
        int32_t l_696 = 0x75586951L;
        int8_t *l_697[3];
        int16_t l_727 = 0x7360L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_697[i] = &p_1051->g_121[3][0][0];
        (*p_1051->g_348) = &l_563;
        if ((l_563 > ((safe_mul_func_int8_t_s_s(0x2CL, ((((((safe_sub_func_int8_t_s_s(((((l_575 | ((l_575 ^ ((l_579[7][3] = l_576) == ((safe_unary_minus_func_int64_t_s((safe_div_func_int32_t_s_s((p_1051->g_496[1].f0 ^ (l_575 , ((0x5C26513FL || 0xE5F10C52L) != (-1L)))), l_575)))) , p_1051->g_583))) & 0x4E81C3F5A2B8BA06L)) , p_1051->g_123[3][0]) < 0x1074L) == p_1051->g_458.f4), l_575)) & l_575) <= 0x7B55AF0DE5BA8E7EL) > l_563) < l_575) < p_1051->g_15))) | 0x3FAA64741DDFF609L)))
        { /* block id: 286 */
            int64_t l_594 = 0L;
            uint64_t *l_649[4];
            int32_t l_651 = 0x487F7E68L;
            int i;
            for (i = 0; i < 4; i++)
                l_649[i] = &p_1051->g_650;
            if ((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((l_610 ^= ((safe_mul_func_int8_t_s_s(((l_594 != (safe_unary_minus_func_uint64_t_u(0UL))) || 1L), l_563)) || (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((p_1051->g_539 != (func_19(((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((p_1051->g_604 , l_594), (safe_add_func_int32_t_s_s(l_607, ((((*l_570) = (0x296BL ^ p_1051->g_608)) > (*p_18)) < 4294967289UL))))) ^ l_594), l_563)) | 0xAC06C03BL), p_1051->g_458.f0, &l_563, p_17, p_1051->g_210.f0, p_1051) , l_609)) && l_594) <= l_607), l_594)), (*p_1051->g_55))))), l_607)), p_1051->g_210.f5)))
            { /* block id: 289 */
                int32_t *l_611[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_611[i][j] = &l_610;
                }
                return p_17;
            }
            else
            { /* block id: 291 */
                int64_t l_616 = 4L;
                uint16_t *l_620 = &p_1051->g_328.f0;
                uint64_t *l_644 = &p_1051->g_76;
                int32_t *l_652 = &p_1051->g_243;
                uint64_t ***l_655 = &p_1051->g_653;
                (*p_18) = (safe_mul_func_uint8_t_u_u(((~(safe_mul_func_uint16_t_u_u(((*p_17) , l_616), ((void*)0 != &p_1051->g_76)))) & (p_1051->g_88 , (l_575 || (safe_div_func_uint32_t_u_u((((l_594 && (((0xDCD7L && ((*l_620) = (l_619 ^ p_1051->g_491.f3))) != 0x4272436EL) || l_594)) , (void*)0) == &p_1051->g_133), (-9L)))))), 0x61L));
                (*p_1051->g_167) |= (0x3646L | ((safe_mul_func_int8_t_s_s((-10L), ((l_623 == ((*l_655) = ((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((!(safe_mul_func_int16_t_s_s(((*p_1051->g_585) | (((*l_570) ^= ((safe_add_func_int64_t_s_s(((((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((1UL != ((0x6E318724CF460E0AL <= ((*l_644) ^= (--(**l_623)))) > (((*l_652) = (((safe_lshift_func_uint8_t_u_u((p_1051->g_496[1].f0 , (l_616 , ((l_651 = (safe_div_func_uint32_t_u_u((((*l_623) != l_649[3]) , l_594), (*p_18)))) & l_594))), 2)) || l_616) | 253UL)) , l_651))) == l_594) , l_610))), l_610)) >= l_616), l_607)) == (*p_18)) > p_1051->g_495) == 0xBC13B213A67B0364L), p_1051->g_505[1][4][0])), p_1051->g_505[1][4][0])) , (*p_17)) & l_616) == 4294967289UL), l_575)) != 0L)) != (*p_18))), l_616))), 0x12L)), p_1051->g_496[1].f0)) , p_1051->g_653))) | p_1051->g_458.f5))) >= p_1051->g_505[1][4][0]));
            }
            (*p_1051->g_348) = &l_563;
        }
        else
        { /* block id: 303 */
            int16_t l_656 = 0x1949L;
            int8_t *l_664 = &p_1051->g_123[5][0];
            struct S0 *l_665[6] = {&p_1051->g_273,&p_1051->g_273,&p_1051->g_273,&p_1051->g_273,&p_1051->g_273,&p_1051->g_273};
            int32_t l_673 = 9L;
            int i;
            (*p_1051->g_185) = func_19((((void*)0 == &p_1051->g_121[3][0][0]) >= ((*l_664) = (((*l_624) = (((l_656 == (safe_mod_func_int32_t_s_s((!(4L | (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((-3L) || ((!(p_1051->g_663 , (&l_656 != (((**p_1051->g_348) = ((p_1051->g_464[0].f2 && 0x37L) < 18446744073709551615UL)) , &l_656)))) , p_1051->g_272.f0)), 0UL)) && p_1051->g_496[1].f2), 5)))), 4294967289UL))) & 0UL) != l_619)) >= l_656))), l_656, (*p_1051->g_348), &l_610, l_656, p_1051);
            for (p_1051->g_15 = 0; (p_1051->g_15 != 23); p_1051->g_15 = safe_add_func_uint32_t_u_u(p_1051->g_15, 8))
            { /* block id: 310 */
                int32_t *l_670 = &l_610;
                int32_t l_671 = (-2L);
                int32_t *l_672[7] = {&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671};
                int i;
                for (p_1051->g_61 = 0; (p_1051->g_61 <= 21); p_1051->g_61 = safe_add_func_uint16_t_u_u(p_1051->g_61, 4))
                { /* block id: 313 */
                    (*p_1051->g_348) = (void*)0;
                }
                ++l_674;
                for (p_1051->g_604.f2 = 0; (p_1051->g_604.f2 <= 6); p_1051->g_604.f2 += 1)
                { /* block id: 319 */
                    uint64_t l_677 = 0xFC544BF9AE47CD12L;
                    int32_t *l_681 = &p_1051->g_67;
                    uint8_t l_686 = 0x63L;
                    for (p_1051->g_491.f2 = 0; (p_1051->g_491.f2 <= 4); p_1051->g_491.f2 += 1)
                    { /* block id: 322 */
                        int32_t l_678 = 0x4FCBD0D0L;
                        int i;
                        (*p_1051->g_133) = (+l_677);
                        l_678 &= 0x357F5247L;
                        if (l_677)
                            goto lbl_679;
                        (*p_1051->g_133) |= (*l_670);
                    }
                    for (p_1051->g_53 = 0; (p_1051->g_53 <= 1); p_1051->g_53 += 1)
                    { /* block id: 330 */
                        int32_t **l_680[10];
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_680[i] = &l_672[2];
                        l_681 = ((*p_1051->g_348) = (void*)0);
                        if (p_1051->g_247[(p_1051->g_53 + 5)])
                            break;
                        l_696 ^= (safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*p_17), l_686)), (safe_unary_minus_func_uint8_t_u(((((&p_1051->g_653 != &p_1051->g_653) | (safe_div_func_uint8_t_u_u(((***p_1051->g_583) = ((p_1051->g_210.f3 ^ (0x68CC5C84L >= (((((0x42CBF926D4A4CA70L == ((safe_add_func_int64_t_s_s((l_607 <= ((safe_rshift_func_uint8_t_u_u(0x07L, 5)) | 0x8AL)), (*l_670))) == 0UL)) < l_694) , (-1L)) <= (*p_17)) , l_607))) , l_656)), l_695))) > 0xB7CC8C15A8C0C845L) ^ l_610)))));
                    }
                }
            }
        }
        if ((((!0xA1L) != (l_610 |= p_1051->g_272.f0)) && 4L))
        { /* block id: 341 */
            uint8_t l_698 = 246UL;
            uint64_t l_716 = 18446744073709551615UL;
            int32_t l_717[1][7] = {{1L,0x444E11C6L,1L,1L,0x444E11C6L,1L,1L}};
            uint16_t *l_718[10];
            int32_t l_719 = (-7L);
            struct S1 **l_725 = &p_1051->g_531;
            int i, j;
            for (i = 0; i < 10; i++)
                l_718[i] = &p_1051->g_328.f0;
            l_610 = (l_719 = ((*p_18) = (l_698 >= (p_1051->g_604.f0 = (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(((p_1051->g_703 , 0xEF155CCBL) , (p_1051->g_458.f1 || (safe_sub_func_uint32_t_u_u(0x3BDE1D98L, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((((+l_698) < ((((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_619, (safe_add_func_uint32_t_u_u((((+l_607) && (l_717[0][1] = (((*l_609) = l_716) >= l_610))) != l_607), l_619)))), 8UL)) <= 0x21354BEEL) || (*p_1051->g_133)) && p_1051->g_608)) & 0x5883A7D59A113D85L) == (-3L)) == 0x22L) , p_1051->g_123[4][1]), 4)), 5)))))), l_619)) , &l_558) != &p_18), l_698))))));
            for (p_1051->g_76 = 0; (p_1051->g_76 <= 4); p_1051->g_76 += 1)
            { /* block id: 350 */
                uint16_t *l_722 = (void*)0;
                int32_t l_726 = 0x24481217L;
                struct S1 **l_728 = &p_1051->g_531;
                (*p_17) = (((safe_lshift_func_uint8_t_u_u(((&p_1051->g_608 != l_722) | 0x3CB3L), 7)) > (safe_lshift_func_uint16_t_u_u(((l_725 != (((65527UL >= (l_726 < (*p_18))) && (((p_1051->g_653 = &l_624) != &p_1051->g_654) < l_727)) , l_728)) <= 1UL), 3))) != 1L);
                (*p_1051->g_729) = (*p_1051->g_134);
                for (l_674 = 0; (l_674 <= 0); l_674 += 1)
                { /* block id: 356 */
                    int i, j;
                    l_717[l_674][l_674] = (*p_18);
                }
            }
        }
        else
        { /* block id: 360 */
            for (p_1051->g_458.f3 = 0; (p_1051->g_458.f3 < 4); p_1051->g_458.f3 = safe_add_func_uint16_t_u_u(p_1051->g_458.f3, 8))
            { /* block id: 363 */
                (*p_1051->g_348) = p_18;
            }
        }
    }
    else
    { /* block id: 367 */
        (*p_1051->g_348) = &l_563;
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_505 p_1051->g_530 p_1051->g_537 p_1051->g_539 p_1051->g_14 p_1051->g_15 p_1051->g_531 p_1051->g_491 p_1051->g_464.f3 p_1051->g_185 p_1051->g_184
 * writes: p_1051->g_505 p_1051->g_530 p_1051->g_15 p_1051->g_491
 */
struct S0  func_19(int8_t  p_20, uint64_t  p_21, int32_t * p_22, int32_t * p_23, int32_t  p_24, struct S3 * p_1051)
{ /* block id: 265 */
    int64_t l_521[6][1];
    uint32_t l_522 = 0UL;
    struct S1 **l_529 = (void*)0;
    int32_t l_552 = 0x01CBDBB2L;
    uint64_t *l_556 = (void*)0;
    uint64_t **l_555[6][9][4] = {{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}},{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}},{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}},{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}},{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}},{{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0},{&l_556,(void*)0,&l_556,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_521[i][j] = (-9L);
    }
    l_522--;
    if (((*p_23) = (*p_22)))
    { /* block id: 268 */
        struct S1 ***l_532 = &p_1051->g_530;
        int32_t l_538 = 2L;
        int8_t *l_540 = (void*)0;
        int32_t **l_551[8];
        int i;
        for (i = 0; i < 8; i++)
            l_551[i] = &p_1051->g_167;
        (*p_1051->g_14) &= (safe_lshift_func_int8_t_s_s((p_20 = (safe_rshift_func_int16_t_s_s(((l_529 == ((*l_532) = p_1051->g_530)) , ((safe_lshift_func_int8_t_s_s(p_20, 0)) & (safe_lshift_func_int8_t_s_u((p_20 && p_24), ((&p_1051->g_530 != &p_1051->g_530) ^ ((p_1051->g_537 != (l_538 , p_1051->g_539)) == l_538)))))), l_538))), l_522));
        (***l_532) = (***l_532);
        l_552 ^= (safe_mul_func_int8_t_s_s((l_538 && (((0x27L | (safe_lshift_func_uint8_t_u_u((l_521[5][0] > (p_1051->g_464[0].f3 , (safe_add_func_uint64_t_u_u((((l_521[3][0] & l_538) , l_538) <= (safe_div_func_uint16_t_u_u(((p_21 , ((safe_div_func_uint8_t_u_u((((p_22 = &l_538) != (void*)0) == p_21), (-1L))) == 65535UL)) >= l_521[0][0]), 1L))), p_21)))), 6))) && p_24) && 0x8B13L)), l_521[5][0]));
    }
    else
    { /* block id: 275 */
        uint64_t **l_553[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t ***l_554[2];
        int i;
        for (i = 0; i < 2; i++)
            l_554[i] = &l_553[0];
        l_555[3][2][2] = l_553[0];
    }
    return (*p_1051->g_185);
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_66
 * writes:
 */
uint8_t  func_29(uint8_t  p_30, int64_t  p_31, int32_t * p_32, uint64_t  p_33, int32_t * p_34, struct S3 * p_1051)
{ /* block id: 262 */
    int16_t l_506 = 4L;
    int32_t l_507 = 0L;
    int32_t *l_508 = &p_1051->g_88;
    int32_t l_509 = 0x0A711987L;
    int32_t *l_510 = &p_1051->g_88;
    int32_t *l_511 = &p_1051->g_15;
    int32_t *l_512 = &p_1051->g_61;
    int32_t *l_513 = &p_1051->g_88;
    int32_t *l_514 = &p_1051->g_88;
    int32_t *l_515 = &p_1051->g_61;
    int32_t *l_516 = (void*)0;
    int32_t *l_517[3];
    uint16_t l_518[4][8] = {{0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL},{0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL},{0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL},{0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL,0x7C7DL,0x7C7DL,0x158CL}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_517[i] = &p_1051->g_88;
    l_518[2][1]--;
    return p_1051->g_66[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_15 p_1051->g_14
 * writes: p_1051->g_15
 */
uint64_t  func_35(int32_t * p_36, int32_t  p_37, int32_t * p_38, struct S3 * p_1051)
{ /* block id: 5 */
    int8_t l_41 = 0L;
    (*p_1051->g_14) = (l_41 & p_1051->g_15);
    return p_1051->g_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_210.f0
 * writes:
 */
int64_t  func_44(int16_t * p_45, uint32_t  p_46, int16_t * p_47, struct S3 * p_1051)
{ /* block id: 259 */
    uint32_t l_501[6][2][3] = {{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}},{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}},{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}},{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}},{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}},{{0UL,0xE1B75028L,4294967291UL},{0UL,0xE1B75028L,4294967291UL}}};
    int i, j, k;
    l_501[4][0][2]++;
    return p_1051->g_210.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_458
 * writes: p_1051->g_496
 */
uint16_t  func_48(int16_t  p_49, struct S3 * p_1051)
{ /* block id: 256 */
    uint16_t l_497[3][8][6] = {{{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L}},{{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L}},{{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L},{0x8B26L,0xEE56L,8UL,1UL,65535UL,0x7017L}}};
    int i, j, k;
    p_1051->g_496[1] = p_1051->g_458;
    return l_497[2][3][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1051->g_53 p_1051->g_14 p_1051->g_15 p_1051->g_76 p_1051->g_88 p_1051->g_93 p_1051->g_96 p_1051->g_97 p_1051->g_55 p_1051->g_123 p_1051->g_134 p_1051->g_67 p_1051->g_64 p_1051->g_121 p_1051->g_61 p_1051->g_133 p_1051->g_173 p_1051->g_125 p_1051->g_210.f2 p_1051->g_185 p_1051->g_184 p_1051->g_167 p_1051->g_247 p_1051->g_348 p_1051->g_463 p_1051->g_272.f0 p_1051->g_210.f3 p_1051->g_491
 * writes: p_1051->g_53 p_1051->g_61 p_1051->g_67 p_1051->g_76 p_1051->g_52 p_1051->g_88 p_1051->g_121 p_1051->g_123 p_1051->g_125 p_1051->g_127 p_1051->g_133 p_1051->g_64 p_1051->g_167 p_1051->g_210.f2 p_1051->g_97 p_1051->g_210.f5 p_1051->g_210.f3 p_1051->g_243 p_1051->g_458.f3 p_1051->g_491
 */
int16_t  func_50(int64_t  p_51, struct S3 * p_1051)
{ /* block id: 11 */
    uint32_t l_79[10][4][6] = {{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}},{{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL},{7UL,1UL,0xC507BD82L,4294967288UL,0UL,0UL}}};
    int32_t l_128 = 0L;
    int32_t l_148[6][2] = {{0x570BF509L,0x570BF509L},{0x570BF509L,0x570BF509L},{0x570BF509L,0x570BF509L},{0x570BF509L,0x570BF509L},{0x570BF509L,0x570BF509L},{0x570BF509L,0x570BF509L}};
    int8_t *l_242 = (void*)0;
    struct S0 *l_271[8] = {&p_1051->g_272,&p_1051->g_272,&p_1051->g_272,&p_1051->g_272,&p_1051->g_272,&p_1051->g_272,&p_1051->g_272,&p_1051->g_272};
    uint8_t *l_332[6][7][6] = {{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}},{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}},{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}},{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}},{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}},{{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0},{&p_1051->g_279[0],&p_1051->g_279[1],(void*)0,&p_1051->g_279[1],&p_1051->g_279[1],(void*)0}}};
    uint8_t **l_331[2];
    uint64_t l_414[7] = {0xD6F7D28365250192L,0xD6F7D28365250192L,0xD6F7D28365250192L,0xD6F7D28365250192L,0xD6F7D28365250192L,0xD6F7D28365250192L,0xD6F7D28365250192L};
    uint32_t l_417 = 3UL;
    int32_t l_442 = 1L;
    int16_t **l_460 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_331[i] = &l_332[0][0][4];
    for (p_51 = 1; (p_51 == (-21)); p_51 = safe_sub_func_uint16_t_u_u(p_51, 8))
    { /* block id: 14 */
        int8_t l_72 = 0L;
        int16_t *l_81 = (void*)0;
        int32_t l_150 = 0x54997D19L;
        uint64_t *l_161 = &p_1051->g_76;
        int16_t l_164 = (-1L);
        int32_t l_178[10] = {0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L,0x3895B9E8L};
        int i;
        for (p_1051->g_53 = (-12); (p_1051->g_53 == 21); p_1051->g_53 = safe_add_func_uint16_t_u_u(p_1051->g_53, 9))
        { /* block id: 17 */
            int16_t *l_85 = (void*)0;
            int32_t l_131 = 0x37C96335L;
            int32_t l_149 = 0x1523B59FL;
            for (p_1051->g_61 = 10; (p_1051->g_61 >= 20); p_1051->g_61 = safe_add_func_uint32_t_u_u(p_1051->g_61, 7))
            { /* block id: 20 */
                int32_t l_80[9][1] = {{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L},{0x6E3FDE74L}};
                int i, j;
                for (p_1051->g_67 = 0; (p_1051->g_67 <= (-21)); --p_1051->g_67)
                { /* block id: 23 */
                    uint64_t *l_75 = &p_1051->g_76;
                    int16_t **l_82 = &p_1051->g_52;
                    int32_t *l_86 = (void*)0;
                    int32_t *l_87 = &p_1051->g_88;
                    (*l_87) |= (safe_lshift_func_uint16_t_u_u(l_72, ((*p_1051->g_14) != ((safe_add_func_int64_t_s_s((((*l_75)--) , p_1051->g_53), (p_51 > (~(0UL || l_79[2][3][5]))))) || (l_80[4][0] > ((((*l_82) = l_81) == ((safe_lshift_func_uint8_t_u_s((&p_1051->g_53 != l_85), 1)) , &p_1051->g_53)) && l_80[4][0]))))));
                    for (p_1051->g_76 = 0; (p_1051->g_76 > 45); ++p_1051->g_76)
                    { /* block id: 29 */
                        int32_t *l_98 = &p_1051->g_88;
                        int32_t **l_99 = (void*)0;
                        int32_t **l_100 = &l_86;
                        int8_t *l_120 = &p_1051->g_121[3][0][0];
                        int8_t *l_122 = &p_1051->g_123[5][0];
                        uint16_t *l_124[4][4][3] = {{{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0}},{{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0}},{{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0}},{{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0},{(void*)0,&p_1051->g_125,(void*)0}}};
                        uint32_t l_126[4] = {0xB259310AL,0xB259310AL,0xB259310AL,0xB259310AL};
                        int i, j, k;
                        (*l_87) = (safe_add_func_uint32_t_u_u(4294967295UL, (*p_1051->g_14)));
                        l_128 |= (p_1051->g_93 , (+(((p_1051->g_127 = ((safe_lshift_func_int8_t_s_s((((p_1051->g_96 , p_1051->g_97[6]) , ((*l_100) = l_98)) == &p_1051->g_61), 6)) <= (l_126[0] = (((safe_unary_minus_func_int8_t_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((p_51 < (p_51 <= ((safe_rshift_func_uint16_t_u_s(l_72, (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((p_1051->g_125 = (((*l_122) |= ((*l_120) = (safe_mul_func_int16_t_s_s((*l_87), (*p_1051->g_55))))) == p_51)) , 0x76BCL), 7)), 11)))) < p_51))), p_1051->g_88)), p_1051->g_88)), 1)), 9)), p_51)))) == p_51) & l_80[7][0])))) == p_51) && l_80[4][0])));
                        if (l_72)
                            break;
                    }
                }
                for (p_1051->g_67 = 0; (p_1051->g_67 <= (-2)); p_1051->g_67 = safe_sub_func_uint64_t_u_u(p_1051->g_67, 7))
                { /* block id: 43 */
                    uint8_t l_151 = 249UL;
                    (*p_1051->g_134) = (l_131 , &p_1051->g_64[9][0][4]);
                    for (p_1051->g_127 = 0; (p_1051->g_127 > 43); ++p_1051->g_127)
                    { /* block id: 47 */
                        int32_t *l_137 = (void*)0;
                        int32_t l_138 = 0x71348BD3L;
                        int32_t *l_139 = &l_80[1][0];
                        int32_t *l_140 = &l_80[4][0];
                        int32_t *l_141 = &l_80[3][0];
                        int32_t *l_142 = &l_80[4][0];
                        int32_t *l_143 = &l_131;
                        int32_t l_144 = 0x621F576CL;
                        int32_t *l_145 = &l_131;
                        int32_t *l_146 = &l_80[1][0];
                        int32_t *l_147[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_147[i] = &l_144;
                        l_151++;
                    }
                }
                for (p_1051->g_67 = 0; (p_1051->g_67 >= 0); p_1051->g_67 -= 1)
                { /* block id: 53 */
                    int i, j, k;
                    (*p_1051->g_133) = (((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_1051->g_64[(p_1051->g_67 + 2)][p_1051->g_67][(p_1051->g_67 + 7)] < p_1051->g_121[(p_1051->g_67 + 6)][p_1051->g_67][p_1051->g_67]), 0L)), (safe_unary_minus_func_int64_t_s(p_1051->g_123[2][1])))) & (-4L)) <= ((((safe_sub_func_uint16_t_u_u((((*l_161) = ((void*)0 == l_161)) <= (p_51 & (((((p_1051->g_61 , 0x8DL) < p_1051->g_88) == p_1051->g_123[5][0]) < l_150) >= l_149))), p_51)) , l_150) , 0x7F66EBC83D463209L) , p_51));
                    if (l_80[8][0])
                        break;
                    if ((*p_1051->g_133))
                        break;
                }
            }
            l_164 |= (safe_lshift_func_int16_t_s_u(l_149, (&p_1051->g_133 == &p_1051->g_133)));
            if ((**p_1051->g_134))
                continue;
            for (p_1051->g_125 = 0; (p_1051->g_125 <= 0); p_1051->g_125 += 1)
            { /* block id: 64 */
                int32_t *l_166 = &l_131;
                int32_t **l_165 = &l_166;
                p_1051->g_167 = ((*l_165) = &l_149);
                for (l_72 = 0; (l_72 <= 1); l_72 += 1)
                { /* block id: 69 */
                    uint16_t l_168 = 1UL;
                    for (l_150 = 1; (l_150 <= 7); l_150 += 1)
                    { /* block id: 72 */
                        uint16_t *l_179 = &l_168;
                        int i, j, k;
                        l_168--;
                        l_148[3][0] = ((safe_mul_func_int16_t_s_s((((p_1051->g_173 , (safe_lshift_func_int8_t_s_u((l_178[2] &= (((((p_1051->g_121[(p_1051->g_125 + 5)][p_1051->g_125][p_1051->g_125] , l_168) , (p_51 & p_51)) < (safe_mul_func_int16_t_s_s(l_79[3][0][2], (1UL & (((((*l_166) |= 0L) <= (-1L)) & p_51) , l_168))))) >= p_1051->g_125) >= p_1051->g_61)), p_51))) , &l_168) == l_179), p_1051->g_121[3][0][0])) < p_51);
                    }
                }
            }
        }
        return (*p_1051->g_55);
    }
    for (p_51 = 0; (p_51 < (-29)); p_51 = safe_sub_func_uint64_t_u_u(p_51, 5))
    { /* block id: 85 */
        int8_t *l_195 = &p_1051->g_123[5][0];
        int32_t l_224 = 0x4730C7DFL;
        volatile int32_t l_225 = 0x5499BF41L;/* VOLATILE GLOBAL l_225 */
        int32_t *l_293 = (void*)0;
        volatile int32_t *l_376[6] = {&p_1051->g_64[9][0][4],(void*)0,&p_1051->g_64[9][0][4],&p_1051->g_64[9][0][4],(void*)0,&p_1051->g_64[9][0][4]};
        int i;
        (1 + 1);
    }
    for (p_1051->g_210.f2 = 0; (p_1051->g_210.f2 <= 1); p_1051->g_210.f2 += 1)
    { /* block id: 202 */
        uint16_t *l_424 = &p_1051->g_210.f5;
        uint16_t *l_425 = (void*)0;
        uint16_t *l_426[1][4][8] = {{{&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125},{&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125},{&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125},{&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_125,&p_1051->g_328.f0,&p_1051->g_328.f0,&p_1051->g_125}}};
        int32_t l_427 = 1L;
        int64_t *l_428 = (void*)0;
        int64_t *l_429 = &p_1051->g_210.f3;
        int32_t l_432 = 0L;
        int64_t l_433 = 0L;
        uint64_t *l_434[7][10] = {{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0},{&l_414[5],&p_1051->g_247[3],&p_1051->g_76,(void*)0,&p_1051->g_76,&p_1051->g_247[3],&l_414[5],&p_1051->g_76,(void*)0,(void*)0}};
        int32_t l_443 = 0x2C5639CBL;
        struct S1 *l_456 = &p_1051->g_210;
        int i, j, k;
        p_1051->g_97[(p_1051->g_210.f2 + 3)] = (*p_1051->g_185);
        (*p_1051->g_167) |= l_417;
        for (p_1051->g_127 = 0; (p_1051->g_127 <= 1); p_1051->g_127 += 1)
        { /* block id: 207 */
            struct S1 *l_419 = &p_1051->g_210;
            struct S1 **l_418 = &l_419;
            (*l_418) = &p_1051->g_210;
        }
        (*p_1051->g_167) = (((((l_414[5] & (p_51 == (safe_div_func_int16_t_s_s(p_51, (l_427 = ((*l_424) = p_1051->g_97[(p_1051->g_210.f2 + 3)].f0)))))) != ((*l_429) = p_51)) == l_148[3][0]) || (((p_1051->g_61 , (((l_128 = ((((((safe_mod_func_int8_t_s_s(((l_432 == 0x2C4B39B5A0BC34A1L) > p_51), 7L)) >= p_1051->g_247[4]) == l_433) , 8L) == 18446744073709551613UL) >= l_433)) == 0x9B8112128D7BF2D8L) && 0x7838L)) >= l_414[5]) >= p_51)) && 0x89L);
        for (l_128 = 7; (l_128 >= 0); l_128 -= 1)
        { /* block id: 217 */
            struct S1 *l_457 = &p_1051->g_458;
            int32_t *l_465[7] = {&l_443,&l_443,&l_443,&l_443,&l_443,&l_443,&l_443};
            int i;
            (**p_1051->g_348) = ((safe_lshift_func_uint16_t_u_s(p_51, 14)) >= p_51);
            for (p_1051->g_243 = 0; (p_1051->g_243 <= 1); p_1051->g_243 += 1)
            { /* block id: 221 */
                uint64_t l_444 = 0xABC24A0D2B40A934L;
                uint8_t **l_453 = (void*)0;
                uint8_t **l_455 = &l_332[0][4][2];
                (1 + 1);
            }
            if ((~((void*)0 != &l_460)))
            { /* block id: 238 */
                int16_t l_470 = 0x31E5L;
                int8_t **l_471 = &l_242;
                int32_t l_474 = (-3L);
                int32_t l_475 = (-1L);
                l_475 |= ((l_474 = (safe_lshift_func_int8_t_s_u(p_51, (safe_rshift_func_int8_t_s_u(p_1051->g_97[(p_1051->g_210.f2 + 3)].f0, (l_470 == ((p_1051->g_247[4] >= p_51) , (((((*l_471) = &p_1051->g_121[6][0][0]) != &p_1051->g_121[3][0][0]) != (safe_div_func_int32_t_s_s(((&p_1051->g_121[3][0][0] != ((((*p_1051->g_55) && (**p_1051->g_463)) ^ p_1051->g_76) , (void*)0)) < p_51), p_1051->g_15))) , p_51)))))))) >= (**p_1051->g_348));
            }
            else
            { /* block id: 242 */
                int32_t l_485 = 0x01A6F64AL;
                int8_t l_490 = 7L;
                struct S1 *l_492 = (void*)0;
                struct S1 *l_493 = &p_1051->g_491;
                int i, j;
                (*l_493) = (((p_1051->g_53 <= (safe_unary_minus_func_int8_t_s(0x64L))) && (safe_mul_func_uint8_t_u_u(p_1051->g_272.f0, (((safe_mod_func_uint8_t_u_u(((p_1051->g_123[l_128][p_1051->g_210.f2] = 0x21L) & 1UL), (((safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(l_485, (p_1051->g_458.f3 = (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((l_490 >= l_485), (+p_51))), l_414[1]))))) < p_51), p_51)) , 0x10L) , p_1051->g_210.f3))) , (**p_1051->g_348)) || p_1051->g_210.f2)))) , p_1051->g_491);
                if ((0xB7L | 246UL))
                { /* block id: 246 */
                    int32_t l_494 = 0L;
                    (**p_1051->g_348) ^= l_494;
                }
                else
                { /* block id: 248 */
                    l_442 ^= l_432;
                }
            }
        }
    }
    return p_51;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_1052;
    struct S3* p_1051 = &c_1052;
    struct S3 c_1053 = {
        5L, // p_1051->g_15
        &p_1051->g_15, // p_1051->g_14
        0x6628L, // p_1051->g_43
        0x650BL, // p_1051->g_53
        &p_1051->g_53, // p_1051->g_52
        &p_1051->g_53, // p_1051->g_55
        (-1L), // p_1051->g_61
        {{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}},{{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)},{(-9L),0x40774242L,0x6799626DL,0x0C4096A6L,1L,0x48C33196L,0x0C4096A6L,2L,0x070FCBC8L,(-9L)}}}, // p_1051->g_64
        0x72FDD045L, // p_1051->g_65
        {{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L},{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L},{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L},{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L},{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L},{0x1B334FE9L,0L,0x000BCFD7L,0x37C1F666L,0L,0x37C1F666L,0x000BCFD7L,0L,0x1B334FE9L}}, // p_1051->g_66
        0x1DEE1550L, // p_1051->g_67
        0x2566A56D104A7430L, // p_1051->g_76
        0L, // p_1051->g_88
        {5L}, // p_1051->g_93
        {0x7EL}, // p_1051->g_96
        {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}}, // p_1051->g_97
        {{{0x79L}},{{0x79L}},{{0x79L}},{{0x79L}},{{0x79L}},{{0x79L}},{{0x79L}},{{0x79L}}}, // p_1051->g_121
        {{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L},{0x30L,0x79L}}, // p_1051->g_123
        0x5206L, // p_1051->g_125
        0x637B4EECL, // p_1051->g_127
        &p_1051->g_64[9][0][4], // p_1051->g_133
        {&p_1051->g_133,&p_1051->g_133}, // p_1051->g_132
        &p_1051->g_133, // p_1051->g_134
        &p_1051->g_67, // p_1051->g_167
        {65529UL}, // p_1051->g_173
        {0x50L}, // p_1051->g_184
        &p_1051->g_184, // p_1051->g_185
        (void*)0, // p_1051->g_193
        {0x7E367672F530DC46L,0x263D4097L,1UL,-1L,0UL,2UL}, // p_1051->g_210
        0L, // p_1051->g_243
        {0xC571BFB598AF31ACL,0x478757D178ACB9F9L,0xC571BFB598AF31ACL,0xC571BFB598AF31ACL,0x478757D178ACB9F9L,0xC571BFB598AF31ACL,0xC571BFB598AF31ACL,0x478757D178ACB9F9L,0xC571BFB598AF31ACL,0xC571BFB598AF31ACL}, // p_1051->g_247
        &p_1051->g_167, // p_1051->g_250
        {7L}, // p_1051->g_272
        {-8L}, // p_1051->g_273
        (void*)0, // p_1051->g_275
        {0UL,0UL}, // p_1051->g_279
        {0xB09E236CD4D35EB0L,-6L,0xA18C3357L,1L,0x3E7410D0L,0xFCFCL}, // p_1051->g_297
        {0xD6F9L}, // p_1051->g_328
        &p_1051->g_167, // p_1051->g_348
        {18446744073709551608UL,0x19625F17L,4294967295UL,0x420FB14A0B1B0B2CL,0UL,65535UL}, // p_1051->g_458
        &p_1051->g_55, // p_1051->g_463
        {{1UL,0x4F5B647AL,4294967292UL,-1L,0xD5FD00DFL,0x44A1L},{18446744073709551614UL,-1L,6UL,2L,0x69D26691L,1UL},{0xB05631D7939AF177L,-9L,1UL,0x775CA79990798ED2L,0x47BEC53CL,0x7EE4L},{18446744073709551614UL,-1L,6UL,2L,0x69D26691L,1UL},{1UL,0x4F5B647AL,4294967292UL,-1L,0xD5FD00DFL,0x44A1L},{1UL,0x4F5B647AL,4294967292UL,-1L,0xD5FD00DFL,0x44A1L},{18446744073709551614UL,-1L,6UL,2L,0x69D26691L,1UL},{0xB05631D7939AF177L,-9L,1UL,0x775CA79990798ED2L,0x47BEC53CL,0x7EE4L},{18446744073709551614UL,-1L,6UL,2L,0x69D26691L,1UL},{1UL,0x4F5B647AL,4294967292UL,-1L,0xD5FD00DFL,0x44A1L}}, // p_1051->g_464
        {1UL,0x4B1FB2FBL,4294967295UL,9L,4294967295UL,4UL}, // p_1051->g_491
        0x99ABB8A9L, // p_1051->g_495
        {{0x38E65F4A6BBF3638L,0x67E2F770L,0xD84ED195L,1L,1UL,0x885DL},{0x38E65F4A6BBF3638L,0x67E2F770L,0xD84ED195L,1L,1UL,0x885DL},{0x38E65F4A6BBF3638L,0x67E2F770L,0xD84ED195L,1L,1UL,0x885DL}}, // p_1051->g_496
        0x7407L, // p_1051->g_500
        &p_1051->g_500, // p_1051->g_499
        {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}}, // p_1051->g_505
        &p_1051->g_491, // p_1051->g_531
        &p_1051->g_531, // p_1051->g_530
        (void*)0, // p_1051->g_537
        (void*)0, // p_1051->g_539
        &p_1051->g_279[1], // p_1051->g_585
        {&p_1051->g_585,&p_1051->g_585,&p_1051->g_585}, // p_1051->g_584
        &p_1051->g_584[2], // p_1051->g_583
        {1UL}, // p_1051->g_604
        0x71EBL, // p_1051->g_608
        0x5759A9922DFE6C2CL, // p_1051->g_650
        (void*)0, // p_1051->g_654
        &p_1051->g_654, // p_1051->g_653
        {-1L}, // p_1051->g_663
        {0x68509993B1590B15L,9L,4294967286UL,0x3E4CB927D1A792E9L,0x20B967C7L,0xD068L}, // p_1051->g_703
        &p_1051->g_133, // p_1051->g_729
        &p_1051->g_243, // p_1051->g_745
        &p_1051->g_745, // p_1051->g_744
        &p_1051->g_744, // p_1051->g_743
        (void*)0, // p_1051->g_786
        {&p_1051->g_786,&p_1051->g_786,&p_1051->g_786,&p_1051->g_786}, // p_1051->g_785
        {&p_1051->g_786,&p_1051->g_786,&p_1051->g_786,&p_1051->g_786,&p_1051->g_786}, // p_1051->g_791
        0x6A9CF867L, // p_1051->g_795
        0xC6E7F7CFL, // p_1051->g_814
        (void*)0, // p_1051->g_841
        {{{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL}},{{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL}},{{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL},{0x96E25A536F036628L,-1L,9UL,2L,0xB8678A8DL,0xF3FCL}}}, // p_1051->g_894
        0x3176L, // p_1051->g_919
        (void*)0, // p_1051->g_931
        (void*)0, // p_1051->g_932
        {{0x951CL},{0UL},{0x1306L},{0UL},{0x951CL},{0x951CL},{0UL},{0x1306L},{0UL},{0x951CL}}, // p_1051->g_964
        {1UL,-1L,0UL,0L,6UL,0xCCB5L}, // p_1051->g_969
        {{{65530UL},{65530UL},{65530UL},{65530UL}}}, // p_1051->g_989
        &p_1051->g_969.f0, // p_1051->g_1017
        {-8L}, // p_1051->g_1024
        {0L}, // p_1051->g_1025
        &p_1051->g_841, // p_1051->g_1037
        {{0x8DF2180B6A3EB964L,0x298C4266L,0xE14021D9L,6L,1UL,1UL},{0x8DF2180B6A3EB964L,0x298C4266L,0xE14021D9L,6L,1UL,1UL},{0x8DF2180B6A3EB964L,0x298C4266L,0xE14021D9L,6L,1UL,1UL}}, // p_1051->g_1040
    };
    c_1052 = c_1053;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1051);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1051->g_15, "p_1051->g_15", print_hash_value);
    transparent_crc(p_1051->g_43, "p_1051->g_43", print_hash_value);
    transparent_crc(p_1051->g_53, "p_1051->g_53", print_hash_value);
    transparent_crc(p_1051->g_61, "p_1051->g_61", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1051->g_64[i][j][k], "p_1051->g_64[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1051->g_65, "p_1051->g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1051->g_66[i][j], "p_1051->g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1051->g_67, "p_1051->g_67", print_hash_value);
    transparent_crc(p_1051->g_76, "p_1051->g_76", print_hash_value);
    transparent_crc(p_1051->g_88, "p_1051->g_88", print_hash_value);
    transparent_crc(p_1051->g_93.f0, "p_1051->g_93.f0", print_hash_value);
    transparent_crc(p_1051->g_96.f0, "p_1051->g_96.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1051->g_97[i].f0, "p_1051->g_97[i].f0", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1051->g_121[i][j][k], "p_1051->g_121[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1051->g_123[i][j], "p_1051->g_123[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1051->g_125, "p_1051->g_125", print_hash_value);
    transparent_crc(p_1051->g_127, "p_1051->g_127", print_hash_value);
    transparent_crc(p_1051->g_173.f0, "p_1051->g_173.f0", print_hash_value);
    transparent_crc(p_1051->g_184.f0, "p_1051->g_184.f0", print_hash_value);
    transparent_crc(p_1051->g_210.f0, "p_1051->g_210.f0", print_hash_value);
    transparent_crc(p_1051->g_210.f1, "p_1051->g_210.f1", print_hash_value);
    transparent_crc(p_1051->g_210.f2, "p_1051->g_210.f2", print_hash_value);
    transparent_crc(p_1051->g_210.f3, "p_1051->g_210.f3", print_hash_value);
    transparent_crc(p_1051->g_210.f4, "p_1051->g_210.f4", print_hash_value);
    transparent_crc(p_1051->g_210.f5, "p_1051->g_210.f5", print_hash_value);
    transparent_crc(p_1051->g_243, "p_1051->g_243", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1051->g_247[i], "p_1051->g_247[i]", print_hash_value);

    }
    transparent_crc(p_1051->g_272.f0, "p_1051->g_272.f0", print_hash_value);
    transparent_crc(p_1051->g_273.f0, "p_1051->g_273.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1051->g_279[i], "p_1051->g_279[i]", print_hash_value);

    }
    transparent_crc(p_1051->g_297.f0, "p_1051->g_297.f0", print_hash_value);
    transparent_crc(p_1051->g_297.f1, "p_1051->g_297.f1", print_hash_value);
    transparent_crc(p_1051->g_297.f2, "p_1051->g_297.f2", print_hash_value);
    transparent_crc(p_1051->g_297.f3, "p_1051->g_297.f3", print_hash_value);
    transparent_crc(p_1051->g_297.f4, "p_1051->g_297.f4", print_hash_value);
    transparent_crc(p_1051->g_297.f5, "p_1051->g_297.f5", print_hash_value);
    transparent_crc(p_1051->g_328.f0, "p_1051->g_328.f0", print_hash_value);
    transparent_crc(p_1051->g_458.f0, "p_1051->g_458.f0", print_hash_value);
    transparent_crc(p_1051->g_458.f1, "p_1051->g_458.f1", print_hash_value);
    transparent_crc(p_1051->g_458.f2, "p_1051->g_458.f2", print_hash_value);
    transparent_crc(p_1051->g_458.f3, "p_1051->g_458.f3", print_hash_value);
    transparent_crc(p_1051->g_458.f4, "p_1051->g_458.f4", print_hash_value);
    transparent_crc(p_1051->g_458.f5, "p_1051->g_458.f5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1051->g_464[i].f0, "p_1051->g_464[i].f0", print_hash_value);
        transparent_crc(p_1051->g_464[i].f1, "p_1051->g_464[i].f1", print_hash_value);
        transparent_crc(p_1051->g_464[i].f2, "p_1051->g_464[i].f2", print_hash_value);
        transparent_crc(p_1051->g_464[i].f3, "p_1051->g_464[i].f3", print_hash_value);
        transparent_crc(p_1051->g_464[i].f4, "p_1051->g_464[i].f4", print_hash_value);
        transparent_crc(p_1051->g_464[i].f5, "p_1051->g_464[i].f5", print_hash_value);

    }
    transparent_crc(p_1051->g_491.f0, "p_1051->g_491.f0", print_hash_value);
    transparent_crc(p_1051->g_491.f1, "p_1051->g_491.f1", print_hash_value);
    transparent_crc(p_1051->g_491.f2, "p_1051->g_491.f2", print_hash_value);
    transparent_crc(p_1051->g_491.f3, "p_1051->g_491.f3", print_hash_value);
    transparent_crc(p_1051->g_491.f4, "p_1051->g_491.f4", print_hash_value);
    transparent_crc(p_1051->g_491.f5, "p_1051->g_491.f5", print_hash_value);
    transparent_crc(p_1051->g_495, "p_1051->g_495", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1051->g_496[i].f0, "p_1051->g_496[i].f0", print_hash_value);
        transparent_crc(p_1051->g_496[i].f1, "p_1051->g_496[i].f1", print_hash_value);
        transparent_crc(p_1051->g_496[i].f2, "p_1051->g_496[i].f2", print_hash_value);
        transparent_crc(p_1051->g_496[i].f3, "p_1051->g_496[i].f3", print_hash_value);
        transparent_crc(p_1051->g_496[i].f4, "p_1051->g_496[i].f4", print_hash_value);
        transparent_crc(p_1051->g_496[i].f5, "p_1051->g_496[i].f5", print_hash_value);

    }
    transparent_crc(p_1051->g_500, "p_1051->g_500", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1051->g_505[i][j][k], "p_1051->g_505[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1051->g_608, "p_1051->g_608", print_hash_value);
    transparent_crc(p_1051->g_650, "p_1051->g_650", print_hash_value);
    transparent_crc(p_1051->g_663.f0, "p_1051->g_663.f0", print_hash_value);
    transparent_crc(p_1051->g_703.f0, "p_1051->g_703.f0", print_hash_value);
    transparent_crc(p_1051->g_703.f1, "p_1051->g_703.f1", print_hash_value);
    transparent_crc(p_1051->g_703.f2, "p_1051->g_703.f2", print_hash_value);
    transparent_crc(p_1051->g_703.f3, "p_1051->g_703.f3", print_hash_value);
    transparent_crc(p_1051->g_703.f4, "p_1051->g_703.f4", print_hash_value);
    transparent_crc(p_1051->g_703.f5, "p_1051->g_703.f5", print_hash_value);
    transparent_crc(p_1051->g_795, "p_1051->g_795", print_hash_value);
    transparent_crc(p_1051->g_814, "p_1051->g_814", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1051->g_894[i][j].f0, "p_1051->g_894[i][j].f0", print_hash_value);
            transparent_crc(p_1051->g_894[i][j].f1, "p_1051->g_894[i][j].f1", print_hash_value);
            transparent_crc(p_1051->g_894[i][j].f2, "p_1051->g_894[i][j].f2", print_hash_value);
            transparent_crc(p_1051->g_894[i][j].f3, "p_1051->g_894[i][j].f3", print_hash_value);
            transparent_crc(p_1051->g_894[i][j].f4, "p_1051->g_894[i][j].f4", print_hash_value);
            transparent_crc(p_1051->g_894[i][j].f5, "p_1051->g_894[i][j].f5", print_hash_value);

        }
    }
    transparent_crc(p_1051->g_919, "p_1051->g_919", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1051->g_964[i].f0, "p_1051->g_964[i].f0", print_hash_value);

    }
    transparent_crc(p_1051->g_969.f0, "p_1051->g_969.f0", print_hash_value);
    transparent_crc(p_1051->g_969.f1, "p_1051->g_969.f1", print_hash_value);
    transparent_crc(p_1051->g_969.f2, "p_1051->g_969.f2", print_hash_value);
    transparent_crc(p_1051->g_969.f3, "p_1051->g_969.f3", print_hash_value);
    transparent_crc(p_1051->g_969.f4, "p_1051->g_969.f4", print_hash_value);
    transparent_crc(p_1051->g_969.f5, "p_1051->g_969.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1051->g_989[i][j].f0, "p_1051->g_989[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1051->g_1024.f0, "p_1051->g_1024.f0", print_hash_value);
    transparent_crc(p_1051->g_1025.f0, "p_1051->g_1025.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1051->g_1040[i].f0, "p_1051->g_1040[i].f0", print_hash_value);
        transparent_crc(p_1051->g_1040[i].f1, "p_1051->g_1040[i].f1", print_hash_value);
        transparent_crc(p_1051->g_1040[i].f2, "p_1051->g_1040[i].f2", print_hash_value);
        transparent_crc(p_1051->g_1040[i].f3, "p_1051->g_1040[i].f3", print_hash_value);
        transparent_crc(p_1051->g_1040[i].f4, "p_1051->g_1040[i].f4", print_hash_value);
        transparent_crc(p_1051->g_1040[i].f5, "p_1051->g_1040[i].f5", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
