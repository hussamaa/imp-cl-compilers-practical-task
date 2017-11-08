// -g 20,9,13 -l 2,9,1
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


// Seed: 2297060719

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile int32_t  f1;
   volatile int32_t  f2;
   int8_t  f3;
   int32_t  f4;
};

union U1 {
   int8_t  f0;
   volatile struct S0  f1;
   struct S0  f2;
   uint32_t  f3;
};

union U2 {
   struct S0  f0;
   int32_t  f1;
   volatile int8_t  f2;
};

union U3 {
   int8_t * volatile  f0;
   int8_t * f1;
};

union U4 {
   int32_t  f0;
   uint8_t  f1;
};

union U5 {
   int8_t  f0;
   int64_t  f1;
   int32_t  f2;
   struct S0  f3;
};

struct S6 {
    int32_t g_2;
    uint16_t g_13[5];
    int16_t g_21[8];
    int32_t g_35;
    int32_t * volatile g_34;
    int32_t g_59;
    volatile int64_t g_65;
    volatile uint16_t g_66;
    int16_t g_75;
    int32_t g_79;
    int32_t *g_83[2];
    int32_t ** volatile g_82[5][1][5];
    int32_t ** volatile g_84;
    volatile uint32_t g_106;
    int32_t g_110;
    int8_t g_112;
    int8_t g_116;
    volatile union U5 g_121;
    uint64_t g_129;
    uint64_t g_134;
    uint8_t g_136;
    volatile uint64_t *g_142;
    volatile uint64_t ** volatile g_141;
    uint8_t g_169;
    uint8_t *g_168;
    int32_t * volatile g_171[2];
    int32_t * volatile g_172[1][5];
    int32_t * volatile g_173;
    struct S0 g_188;
    volatile union U3 g_216;
    uint32_t g_224;
    struct S0 g_228[7];
    int64_t g_263[5];
    union U1 g_264;
    union U3 g_276[8][8];
    volatile union U1 g_300[6];
    volatile struct S0 g_308[6][8][5];
    volatile struct S0 * volatile g_309;
    int32_t g_386;
    int8_t **g_387;
    union U5 g_394;
    uint16_t g_400;
    union U5 g_411;
    int32_t ** volatile g_423;
    int32_t *g_425[8];
    int32_t ** volatile g_424[2];
    int32_t ** volatile g_426;
    int32_t ** volatile g_431;
    int16_t g_438[7];
    int64_t *g_472;
    volatile uint8_t g_473;
    struct S0 g_475;
    struct S0 g_476;
    struct S0 g_477;
    struct S0 g_480;
    volatile int8_t g_506;
    union U3 *g_542;
    struct S0 *g_546[7];
    struct S0 ** volatile g_545[7][1];
    struct S0 ** volatile g_547;
    union U1 g_579;
    volatile union U4 g_580;
    struct S0 g_633;
    volatile union U5 g_634;
    volatile union U1 g_650[10];
    struct S0 g_665;
    struct S0 g_682[10];
    volatile union U4 *g_696;
    int32_t **g_699;
    int32_t ***g_698[8][4];
    union U1 g_710[2][1][9];
    uint8_t g_745;
    volatile struct S0 g_760[1][5][8];
    uint16_t *g_769;
    uint16_t **g_768;
    volatile union U2 g_819[9];
    union U4 g_822;
    volatile uint64_t **g_830;
    volatile uint64_t ***g_829;
    volatile union U1 *g_845;
    volatile uint64_t g_871;
    struct S0 g_872;
    volatile uint16_t g_883;
    union U5 g_890;
    struct S0 g_913;
    struct S0 * volatile g_914[1];
    struct S0 g_916[10];
    volatile struct S0 g_917;
    volatile struct S0 g_918;
    int8_t *g_928;
    int8_t **g_927;
    uint32_t g_955;
    union U1 g_958;
    volatile struct S0 g_959;
    volatile union U2 g_964;
    int32_t * volatile g_968[1][1];
    int32_t * volatile g_969;
    int32_t g_971;
    union U4 *g_989;
    union U2 g_994;
    int64_t ***g_997;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S6 * p_1036);
int8_t ** func_5(uint32_t  p_6, uint32_t  p_7, int64_t  p_8, uint32_t  p_9, struct S6 * p_1036);
union U1  func_10(int64_t  p_11, struct S6 * p_1036);
uint16_t  func_14(int64_t  p_15, uint32_t  p_16, uint64_t  p_17, uint32_t  p_18, struct S6 * p_1036);
uint16_t  func_27(int16_t  p_28, int16_t  p_29, int8_t ** p_30, int32_t  p_31, struct S6 * p_1036);
int16_t  func_32(int16_t  p_33, struct S6 * p_1036);
uint32_t  func_36(uint32_t  p_37, int32_t * p_38, uint32_t  p_39, struct S6 * p_1036);
int32_t * func_40(int32_t  p_41, uint16_t * p_42, int8_t * p_43, struct S6 * p_1036);
int32_t  func_44(int32_t  p_45, uint32_t  p_46, int32_t  p_47, int32_t * p_48, struct S6 * p_1036);
uint16_t  func_52(int32_t  p_53, uint16_t * p_54, int16_t  p_55, struct S6 * p_1036);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1036->g_2 p_1036->g_994 p_1036->g_994.f0.f1 p_1036->g_872.f3 p_1036->g_997 p_1036->g_819.f0.f2 p_1036->g_989 p_1036->g_822 p_1036->g_927 p_1036->g_928 p_1036->g_665.f3 p_1036->g_682.f4 p_1036->g_34 p_1036->g_829 p_1036->g_830 p_1036->g_769 p_1036->g_13 p_1036->g_168 p_1036->g_169 p_1036->g_913.f1 p_1036->g_822.f0 p_1036->g_228 p_1036->g_79 p_1036->g_580.f0
 * writes: p_1036->g_2 p_1036->g_35 p_1036->g_665.f3 p_1036->g_822.f0 p_1036->g_79
 */
int64_t  func_1(struct S6 * p_1036)
{ /* block id: 4 */
    int64_t l_19 = 0x16EB2D3650DFA014L;
    uint32_t l_24 = 4294967295UL;
    int32_t l_393[8][8] = {{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L},{0x3AF4FB67L,1L,1L,0x3AF4FB67L,0x3AF4FB67L,1L,1L,0x3AF4FB67L}};
    uint32_t l_730 = 9UL;
    uint64_t l_776 = 0x4062E47D712698A9L;
    int32_t l_841 = 0L;
    union U4 l_892 = {0x16E8B7ABL};
    int64_t l_900 = 0x1AFF0F6820180A42L;
    struct S0 *l_946 = &p_1036->g_228[4];
    uint16_t *l_952 = (void*)0;
    int16_t l_1008 = 0L;
    int32_t *l_1028 = &p_1036->g_394.f2;
    int32_t *l_1029 = &p_1036->g_79;
    int32_t *l_1030 = &p_1036->g_411.f2;
    int32_t *l_1031[3][4];
    int8_t l_1032 = 0x3FL;
    uint32_t l_1033 = 0x6467D420L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_1031[i][j] = &p_1036->g_386;
    }
    for (p_1036->g_2 = (-9); (p_1036->g_2 < 11); ++p_1036->g_2)
    { /* block id: 7 */
        uint16_t *l_12 = &p_1036->g_13[3];
        int16_t *l_20 = &p_1036->g_21[6];
        int32_t l_391 = (-1L);
        uint8_t *l_392 = &p_1036->g_136;
        int64_t l_437[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
        int64_t l_439 = (-1L);
        int8_t ***l_697 = &p_1036->g_387;
        int32_t ****l_700 = &p_1036->g_698[2][1];
        uint32_t l_748[7][7] = {{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L},{4294967291UL,2UL,0xEDC14BA0L,4294967291UL,0x9FAA1012L,0xEDC14BA0L,0xEDC14BA0L}};
        uint8_t l_783 = 0xD8L;
        uint32_t l_842 = 9UL;
        int32_t l_881 = 0x42F60AD8L;
        uint64_t l_891[8] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        uint32_t l_910 = 0UL;
        uint32_t l_949 = 4294967288UL;
        union U1 *l_966 = &p_1036->g_710[1][0][1];
        int32_t l_982 = 0x3C74C542L;
        int32_t l_983 = (-2L);
        int32_t l_984[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_984[i] = 0x389782FCL;
        (1 + 1);
    }
    if ((p_1036->g_994 , (p_1036->g_994.f0.f1 < l_19)))
    { /* block id: 493 */
        int64_t **l_999 = &p_1036->g_472;
        int64_t ***l_998 = &l_999;
        int32_t l_1007 = 0x3CE43914L;
        int32_t *l_1009 = (void*)0;
        int32_t *l_1010 = &p_1036->g_35;
        int32_t *l_1011[1];
        uint64_t l_1012 = 2UL;
        int i;
        for (i = 0; i < 1; i++)
            l_1011[i] = &p_1036->g_411.f2;
        (*p_1036->g_34) = ((safe_rshift_func_int8_t_s_s((((p_1036->g_872.f3 != ((l_998 = p_1036->g_997) != p_1036->g_997)) , (0x0A7EC1D2L || p_1036->g_819[3].f0.f2)) , ((((*p_1036->g_989) , (**p_1036->g_927)) != (safe_unary_minus_func_uint64_t_u(((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_900, (+(safe_mod_func_int64_t_s_s(p_1036->g_682[5].f4, l_1007))))), l_900)) , l_1008)))) < 18446744073709551615UL)), l_1008)) & 9L);
        l_1012++;
    }
    else
    { /* block id: 497 */
        uint32_t l_1015 = 0x24F540B8L;
        int32_t l_1026 = 9L;
        int32_t *l_1027 = &p_1036->g_822.f0;
        l_1015 |= ((void*)0 == (*p_1036->g_829));
        (*l_1027) ^= (safe_mod_func_uint32_t_u_u(((&p_1036->g_580 != &p_1036->g_822) == ((safe_mod_func_uint8_t_u_u(l_1015, (((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((*p_1036->g_769), ((1UL == 5UL) ^ ((((0x74C321E3L ^ l_1015) ^ (((((**p_1036->g_927) ^= ((l_776 , 0x885D642709B9B41AL) <= 18446744073709551611UL)) && (*p_1036->g_168)) == 1L) , l_841)) < l_900) > l_393[4][2])))), 0x6CL)) , l_1015), l_1015)) & l_1026) || l_730))) & l_1026)), p_1036->g_913.f1));
    }
    l_1033--;
    (*l_1029) = ((*l_946) , (*l_1029));
    return p_1036->g_580.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_411.f3.f4 p_1036->g_387
 * writes: p_1036->g_411.f3.f4
 */
int8_t ** func_5(uint32_t  p_6, uint32_t  p_7, int64_t  p_8, uint32_t  p_9, struct S6 * p_1036)
{ /* block id: 201 */
    int32_t *l_440 = &p_1036->g_411.f2;
    int32_t *l_441 = &p_1036->g_411.f2;
    int32_t *l_442 = (void*)0;
    int32_t *l_443[9] = {&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2,&p_1036->g_394.f2};
    uint16_t l_444 = 65530UL;
    uint64_t l_450 = 0UL;
    uint64_t *l_462 = &l_450;
    uint64_t **l_461[4][8];
    struct S0 *l_474[9] = {&p_1036->g_476,&p_1036->g_477,&p_1036->g_476,&p_1036->g_476,&p_1036->g_477,&p_1036->g_476,&p_1036->g_476,&p_1036->g_477,&p_1036->g_476};
    uint16_t l_514 = 0x2AB4L;
    int32_t **l_523 = &l_443[8];
    uint16_t l_528[7] = {1UL,0xAE45L,1UL,1UL,0xAE45L,1UL,1UL};
    union U4 l_532 = {0x34D49BC2L};
    union U3 *l_541 = &p_1036->g_276[1][5];
    uint16_t l_548 = 0x9171L;
    int32_t ***l_657[3];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
            l_461[i][j] = &l_462;
    }
    for (i = 0; i < 3; i++)
        l_657[i] = &l_523;
    --l_444;
    for (p_1036->g_411.f3.f4 = 7; (p_1036->g_411.f3.f4 >= 0); p_1036->g_411.f3.f4 -= 1)
    { /* block id: 205 */
        int32_t l_447 = 0x76DEA2D1L;
        int32_t l_448 = 0x04EDE662L;
        int32_t l_449[1][4];
        union U3 *l_469[10];
        int64_t *l_520 = (void*)0;
        int64_t *l_521 = &p_1036->g_263[1];
        int32_t **l_522 = &l_443[6];
        uint16_t *l_524[4];
        uint32_t l_565 = 4294967295UL;
        int8_t *l_572[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t **l_571 = &l_572[3];
        int32_t ***l_658 = &l_523;
        uint32_t l_673 = 4294967295UL;
        int32_t *l_689 = &p_1036->g_110;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_449[i][j] = 0L;
        }
        for (i = 0; i < 10; i++)
            l_469[i] = &p_1036->g_276[7][0];
        for (i = 0; i < 4; i++)
            l_524[i] = &p_1036->g_13[3];
        --l_450;
    }
    return p_1036->g_387;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_263 p_1036->g_84 p_1036->g_300
 * writes: p_1036->g_263 p_1036->g_83
 */
union U1  func_10(int64_t  p_11, struct S6 * p_1036)
{ /* block id: 194 */
    int32_t l_432 = 0x126FDA33L;
    int32_t l_433[5];
    int32_t l_434 = 0x4382C0F7L;
    int32_t **l_435 = (void*)0;
    int32_t **l_436[6][6][7] = {{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}},{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}},{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}},{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}},{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}},{{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0},{&p_1036->g_425[3],&p_1036->g_83[1],&p_1036->g_425[3],(void*)0,&p_1036->g_83[1],(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_433[i] = 0x008736BBL;
    l_434 |= (l_433[4] |= ((p_1036->g_263[2] |= 0x08F9339DDDB8344CL) != l_432));
    (*p_1036->g_84) = &l_433[4];
    return p_1036->g_300[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_394 p_1036->g_13 p_1036->g_400 p_1036->g_224 p_1036->g_426 p_1036->g_264.f2.f3 p_1036->g_431
 * writes: p_1036->g_13 p_1036->g_400 p_1036->g_224 p_1036->g_83 p_1036->g_425 p_1036->g_264.f2.f3
 */
uint16_t  func_14(int64_t  p_15, uint32_t  p_16, uint64_t  p_17, uint32_t  p_18, struct S6 * p_1036)
{ /* block id: 173 */
    uint16_t *l_397 = &p_1036->g_13[3];
    int32_t l_402 = 0L;
    int32_t *l_430 = &l_402;
    if ((&p_1036->g_13[3] == ((p_1036->g_394 , (safe_lshift_func_uint16_t_u_s((p_1036->g_400 ^= ((*l_397)--)), 3))) , l_397)))
    { /* block id: 176 */
        uint32_t l_401 = 4294967287UL;
        int8_t *l_412 = &p_1036->g_116;
        int16_t *l_420 = &p_1036->g_21[6];
        int16_t **l_419 = &l_420;
        int32_t *l_421 = &p_1036->g_110;
        int32_t **l_422 = &p_1036->g_83[1];
        l_402 = ((l_401 = ((void*)0 != &p_1036->g_110)) < (p_1036->g_224 &= 4294967286UL));
        (*p_1036->g_426) = ((*l_422) = l_421);
    }
    else
    { /* block id: 184 */
        int8_t l_429[8][6] = {{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L},{0L,0x74L,0x7BL,1L,0x7BL,0x74L}};
        int i, j;
        for (p_1036->g_264.f2.f3 = 6; (p_1036->g_264.f2.f3 < 19); p_1036->g_264.f2.f3 = safe_add_func_uint32_t_u_u(p_1036->g_264.f2.f3, 9))
        { /* block id: 187 */
            if (l_429[6][5])
                break;
            (*p_1036->g_431) = l_430;
        }
        (*l_430) = (*l_430);
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_308.f0
 * writes:
 */
uint16_t  func_27(int16_t  p_28, int16_t  p_29, int8_t ** p_30, int32_t  p_31, struct S6 * p_1036)
{ /* block id: 168 */
    uint16_t *l_390 = &p_1036->g_13[3];
    uint16_t **l_389 = &l_390;
    uint16_t ***l_388 = &l_389;
    (*l_388) = (void*)0;
    return p_1036->g_308[5][5][3].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_13 p_1036->g_34 p_1036->g_35 p_1036->g_21 p_1036->g_2 p_1036->g_66 p_1036->g_59 p_1036->g_79 p_1036->g_84 p_1036->g_106 p_1036->g_110 p_1036->g_112 p_1036->g_121 p_1036->g_129 p_1036->g_134 p_1036->g_136 p_1036->g_141 p_1036->g_83 p_1036->g_168 p_1036->g_169 p_1036->g_116 p_1036->g_173 p_1036->g_228 p_1036->g_264 p_1036->g_224 p_1036->g_300 p_1036->g_75 p_1036->g_188.f0 p_1036->g_308 p_1036->g_309 p_1036->g_263 p_1036->g_386
 * writes: p_1036->g_35 p_1036->g_66 p_1036->g_34 p_1036->g_75 p_1036->g_59 p_1036->g_79 p_1036->g_83 p_1036->g_106 p_1036->g_110 p_1036->g_116 p_1036->g_129 p_1036->g_134 p_1036->g_136 p_1036->g_141 p_1036->g_121.f3.f2 p_1036->g_82 p_1036->g_168 p_1036->g_169 p_1036->g_121.f2 p_1036->g_188.f4 p_1036->g_121.f3 p_1036->g_263 p_1036->g_264.f2.f0 p_1036->g_300.f1 p_1036->g_112 p_1036->g_188.f0 p_1036->g_228.f0 p_1036->g_264.f3 p_1036->g_386
 */
int16_t  func_32(int16_t  p_33, struct S6 * p_1036)
{ /* block id: 10 */
    int32_t l_49 = 4L;
    int32_t *l_109 = &p_1036->g_110;
    int8_t *l_111 = &p_1036->g_112;
    int32_t *l_385 = &p_1036->g_386;
    (*p_1036->g_34) |= p_1036->g_13[3];
    (*l_385) |= ((func_36(p_1036->g_21[3], func_40(((*l_109) &= func_44(l_49, p_1036->g_2, p_1036->g_13[3], &p_1036->g_35, p_1036)), &p_1036->g_13[1], l_111, p_1036), p_33, p_1036) && p_33) & 0xA5716E25D9C95540L);
    return p_1036->g_13[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_263 p_1036->g_75 p_1036->g_2 p_1036->g_112 p_1036->g_228.f3 p_1036->g_168 p_1036->g_84 p_1036->g_83 p_1036->g_35 p_1036->g_59 p_1036->g_228.f0 p_1036->g_308.f1
 * writes: p_1036->g_263 p_1036->g_112 p_1036->g_169 p_1036->g_136 p_1036->g_228.f0 p_1036->g_264.f3
 */
uint32_t  func_36(uint32_t  p_37, int32_t * p_38, uint32_t  p_39, struct S6 * p_1036)
{ /* block id: 158 */
    int64_t *l_357 = &p_1036->g_263[2];
    int32_t l_360 = (-8L);
    int8_t *l_378 = &p_1036->g_112;
    int32_t **l_379[4];
    uint64_t l_380 = 0xD6533656A41E0572L;
    int64_t *l_381 = &p_1036->g_228[4].f0;
    uint32_t *l_382 = &p_1036->g_264.f3;
    uint32_t l_383 = 0x82AD20D3L;
    int32_t l_384 = (-1L);
    int i;
    for (i = 0; i < 4; i++)
        l_379[i] = &p_1036->g_83[1];
    l_384 = ((safe_mod_func_uint32_t_u_u(((*l_382) = (((*l_381) &= (safe_mod_func_int64_t_s_s(((*l_357) ^= (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(0x7D79L, (safe_div_func_int8_t_s_s(p_37, 1UL)))), 3))), (safe_add_func_int32_t_s_s((((l_360 < (((*p_1036->g_168) = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((-9L), (safe_sub_func_uint16_t_u_u((p_37 | (safe_rshift_func_uint8_t_u_u(l_360, (safe_rshift_func_int8_t_s_u(((*l_378) |= ((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((((0x41E9D9C4EC4609C7L != ((safe_add_func_int64_t_s_s(p_1036->g_75, l_360)) < p_37)) == p_1036->g_2) || l_360))) || 0UL), l_360)) <= p_37)), 1))))), p_1036->g_228[4].f3)))) , l_379[0]) == &p_38), p_39)), l_380))) == p_37)) ^ (**p_1036->g_84)) ^ 1L), 0x5649DA2CL))))) , 7UL)), p_39)) && l_383);
    return p_1036->g_308[5][5][3].f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_112 p_1036->g_21 p_1036->g_121 p_1036->g_13 p_1036->g_129 p_1036->g_134 p_1036->g_35 p_1036->g_66 p_1036->g_136 p_1036->g_141 p_1036->g_59 p_1036->g_84 p_1036->g_83 p_1036->g_168 p_1036->g_169 p_1036->g_116 p_1036->g_173 p_1036->g_79 p_1036->g_228 p_1036->g_2 p_1036->g_264 p_1036->g_224 p_1036->g_300 p_1036->g_75 p_1036->g_188.f0 p_1036->g_308 p_1036->g_309
 * writes: p_1036->g_116 p_1036->g_129 p_1036->g_59 p_1036->g_134 p_1036->g_136 p_1036->g_141 p_1036->g_75 p_1036->g_35 p_1036->g_121.f3.f2 p_1036->g_110 p_1036->g_82 p_1036->g_83 p_1036->g_168 p_1036->g_79 p_1036->g_169 p_1036->g_121.f2 p_1036->g_188.f4 p_1036->g_121.f3 p_1036->g_263 p_1036->g_264.f2.f0 p_1036->g_300.f1 p_1036->g_112 p_1036->g_188.f0
 */
int32_t * func_40(int32_t  p_41, uint16_t * p_42, int8_t * p_43, struct S6 * p_1036)
{ /* block id: 35 */
    int8_t *l_115 = &p_1036->g_116;
    int32_t l_126 = 8L;
    int32_t l_127 = 0x5BD8298CL;
    uint64_t *l_128 = &p_1036->g_129;
    int32_t *l_132 = &p_1036->g_59;
    uint64_t *l_133 = &p_1036->g_134;
    uint8_t *l_135 = &p_1036->g_136;
    int16_t l_156 = 0L;
    uint32_t l_345 = 0xFFFEB78DL;
    int32_t *l_346 = (void*)0;
    if ((safe_add_func_int16_t_s_s(((*p_43) > ((*l_115) = (p_1036->g_21[7] | 0x683E0D67L))), ((safe_lshift_func_int16_t_s_u((0UL != (((*l_135) ^= ((((p_1036->g_121 , (((((safe_sub_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((p_1036->g_13[3] | ((l_126 <= ((((*l_128)++) == ((*l_133) |= (p_41 == ((*l_132) = 1L)))) ^ p_1036->g_35)) <= 0x4A64L)), 0x04A327E98E595DB7L)) > p_41), (*p_42))) , (-9L)) != 0xD4L) < p_1036->g_13[0]) | p_1036->g_66)) && p_41) <= 0x2D252A4F93C24CE6L) , p_1036->g_35)) == (*p_43))), 14)) != p_1036->g_13[3]))))
    { /* block id: 41 */
        uint64_t **l_153 = &l_133;
        uint64_t ***l_152 = &l_153;
        int64_t l_163[3];
        uint8_t **l_170 = &p_1036->g_168;
        int i;
        for (i = 0; i < 3; i++)
            l_163[i] = (-4L);
        for (p_1036->g_129 = 0; (p_1036->g_129 < 8); p_1036->g_129 = safe_add_func_int8_t_s_s(p_1036->g_129, 5))
        { /* block id: 44 */
            int64_t l_149 = 1L;
            int32_t *l_158 = &p_1036->g_35;
            int32_t **l_160 = &l_132;
            for (p_1036->g_134 = 18; (p_1036->g_134 > 38); p_1036->g_134++)
            { /* block id: 47 */
                volatile uint64_t ** volatile *l_143 = &p_1036->g_141;
                int64_t l_148 = (-10L);
                int32_t l_154 = 0x6C52D1EAL;
                int32_t l_155 = 1L;
                int32_t l_157[1][1];
                int32_t **l_159 = &p_1036->g_83[1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_157[i][j] = 0x6C3BB2A4L;
                }
                (*l_143) = p_1036->g_141;
                for (p_1036->g_75 = 1; (p_1036->g_75 >= 0); p_1036->g_75 -= 1)
                { /* block id: 51 */
                    for (p_1036->g_35 = 0; p_1036->g_35 < 5; p_1036->g_35 += 1)
                    {
                        for (p_1036->g_121.f3.f2 = 0; p_1036->g_121.f3.f2 < 1; p_1036->g_121.f3.f2 += 1)
                        {
                            for (p_1036->g_110 = 0; p_1036->g_110 < 5; p_1036->g_110 += 1)
                            {
                                p_1036->g_82[p_1036->g_35][p_1036->g_121.f3.f2][p_1036->g_110] = &p_1036->g_83[1];
                            }
                        }
                    }
                }
                l_157[0][0] = ((safe_lshift_func_uint16_t_u_s((*p_42), (((p_1036->g_13[3] > (((((((safe_rshift_func_uint16_t_u_s((~(l_148 >= (l_149 ^= (*p_42)))), 2)) || (((0x4F9E1A8ADBC88E9FL != (((*l_132) ^ (safe_sub_func_uint32_t_u_u((l_154 &= (l_148 != ((((*l_132) , l_152) != (void*)0) ^ p_41))), p_41))) & p_1036->g_134)) <= 0x4CL) , 1L)) <= p_41) > l_155) | p_1036->g_66) ^ (*l_132)) , 0x348BL)) ^ 0L) , l_156))) | p_41);
                (*l_159) = l_158;
            }
            (*l_160) = (*p_1036->g_84);
            (**l_160) |= (&l_127 == &l_126);
            (*l_160) = (*l_160);
        }
        (*l_132) &= (((p_41 != ((safe_mod_func_int32_t_s_s(l_163[2], 0x49ACA795L)) != (safe_sub_func_uint8_t_u_u(((*l_135) = 1UL), (safe_add_func_int16_t_s_s(((void*)0 != &p_1036->g_75), (((*l_170) = p_1036->g_168) != (((&p_1036->g_169 == l_115) >= p_1036->g_169) , (void*)0)))))))) <= 0x01L) == p_41);
        (*p_1036->g_173) &= ((*l_132) &= (0xC764L ^ p_1036->g_116));
    }
    else
    { /* block id: 68 */
        uint16_t l_174[8][7] = {{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL},{1UL,0xB9B8L,0xB59DL,65532UL,0xB9B8L,65532UL,0xB59DL}};
        int32_t *l_179 = &l_126;
        uint32_t l_296 = 1UL;
        uint64_t *l_303 = (void*)0;
        uint16_t l_310[3][6] = {{0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L},{0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L},{0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L,0x1A62L}};
        int i, j;
        if (((0x504EL <= 1L) > (l_174[2][5] > (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((*p_1036->g_168), 1)), (-9L))))))
        { /* block id: 69 */
            return (*p_1036->g_84);
        }
        else
        { /* block id: 71 */
            int32_t *l_209 = &p_1036->g_59;
            union U4 l_297 = {0L};
            uint64_t *l_305 = (void*)0;
            uint16_t *l_316 = (void*)0;
            for (p_1036->g_169 = (-26); (p_1036->g_169 <= 22); ++p_1036->g_169)
            { /* block id: 74 */
                int32_t *l_206 = &p_1036->g_2;
                uint32_t l_272 = 1UL;
                uint64_t l_281[7];
                union U3 *l_321 = (void*)0;
                uint16_t l_330[6][7][3] = {{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}},{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}},{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}},{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}},{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}},{{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL},{5UL,65535UL,0UL}}};
                int64_t l_333 = (-1L);
                int32_t l_344 = 0x60DAAF10L;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_281[i] = 1UL;
                for (p_1036->g_121.f2 = 0; p_1036->g_121.f2 < 5; p_1036->g_121.f2 += 1)
                {
                    for (p_1036->g_136 = 0; p_1036->g_136 < 1; p_1036->g_136 += 1)
                    {
                        for (p_1036->g_129 = 0; p_1036->g_129 < 5; p_1036->g_129 += 1)
                        {
                            p_1036->g_82[p_1036->g_121.f2][p_1036->g_136][p_1036->g_129] = &p_1036->g_83[1];
                        }
                    }
                }
                for (l_127 = 0; (l_127 >= (-9)); l_127 = safe_sub_func_int16_t_s_s(l_127, 9))
                { /* block id: 78 */
                    uint64_t l_191 = 0xFC2A325B7F87256FL;
                    int32_t *l_208 = (void*)0;
                    int32_t **l_218 = &l_206;
                    int32_t ***l_217 = &l_218;
                    uint32_t *l_223 = &p_1036->g_224;
                    (1 + 1);
                }
                for (p_1036->g_188.f4 = 15; (p_1036->g_188.f4 > 17); p_1036->g_188.f4++)
                { /* block id: 104 */
                    (*l_132) = 0x3C1D56B4L;
                    p_1036->g_121.f3 = p_1036->g_228[4];
                }
                if ((*l_206))
                { /* block id: 108 */
                    uint8_t **l_252 = &p_1036->g_168;
                    int64_t *l_262[9][3][8] = {{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}},{{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]},{&p_1036->g_263[2],&p_1036->g_263[2],(void*)0,&p_1036->g_263[4],&p_1036->g_263[1],&p_1036->g_263[2],&p_1036->g_263[2],&p_1036->g_263[1]}}};
                    int16_t *l_270[1][9] = {{&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6],&p_1036->g_21[6]}};
                    int16_t **l_269 = &l_270[0][7];
                    int32_t l_271 = 0L;
                    uint16_t *l_298 = &l_174[5][3];
                    int i, j, k;
                    (*l_209) = 0L;
                    if ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((safe_mod_func_int64_t_s_s(((*l_132) = (((safe_div_func_uint8_t_u_u((((((*l_209) , (safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(254UL, ((~(safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((*l_252) = &p_1036->g_136) == ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u(((((p_1036->g_263[2] = p_41) > ((p_1036->g_264 , p_1036->g_224) , (((safe_div_func_uint16_t_u_u(p_1036->g_228[4].f0, (safe_mod_func_uint8_t_u_u((((*l_269) = p_42) != &p_1036->g_21[6]), 0x3AL)))) , p_41) >= p_41))) >= (*l_209)) > 0xC43DL))) == (*l_179)) != (*l_179)), 0UL)), p_1036->g_228[4].f0)) | 0x2D3572653D7A3F9EL), p_1036->g_228[4].f0)) != (-1L)), 0x959E13DEL)) , (void*)0)), 7UL)), (*l_209))), p_41))) <= p_41))))), p_1036->g_21[6])) | (*l_206)), 1UL))) > p_41) | 0x0C356468L) & l_271), p_41)) , p_1036->g_13[3]) == p_1036->g_13[3])), 0xE8B853B96118A363L)) < p_1036->g_112) >= 0x64L), 0x10BCDC48D36CFC32L)), l_272)), p_1036->g_136)))
                    { /* block id: 114 */
                        int32_t **l_273 = &l_179;
                        union U3 *l_275 = &p_1036->g_276[7][0];
                        union U3 **l_274 = &l_275;
                        union U3 *l_278[1][8][2] = {{{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]},{&p_1036->g_276[7][0],&p_1036->g_276[7][0]}}};
                        union U3 **l_277 = &l_278[0][6][0];
                        union U3 *l_280 = &p_1036->g_276[7][0];
                        union U3 **l_279 = &l_280;
                        int i, j, k;
                        (*l_273) = l_179;
                        (*l_279) = ((*l_277) = ((*l_274) = (void*)0));
                    }
                    else
                    { /* block id: 119 */
                        (*l_179) = p_41;
                        (*l_209) = (*p_1036->g_173);
                    }
                    (*l_209) = (l_281[0] != (0xEAL || ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((p_41 && (safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_271 > (*p_42)), 3)), (((safe_rshift_func_uint16_t_u_u(((*l_298) = (((safe_mod_func_int64_t_s_s(7L, ((l_296 || (l_297 , (*l_209))) , (*l_179)))) && 65535UL) ^ 0x5208L)), 4)) , &p_43) == (void*)0))), (*l_206)))) == (*l_179)), (*l_206))) != p_41), 255UL)) , (*l_132))));
                }
                else
                { /* block id: 125 */
                    int32_t **l_299 = &l_132;
                    int32_t l_339 = 0L;
                    uint32_t l_341 = 0x070ABB45L;
                    (*l_299) = l_179;
                    (*l_299) = (*l_299);
                    for (p_1036->g_264.f2.f0 = 1; (p_1036->g_264.f2.f0 >= 0); p_1036->g_264.f2.f0 -= 1)
                    { /* block id: 130 */
                        int16_t *l_301 = &l_156;
                        int16_t *l_302 = &p_1036->g_75;
                        uint64_t **l_304 = &l_133;
                        int i;
                        (*l_209) &= ((((*l_302) |= ((**l_299) = (p_1036->g_300[1] , ((*l_301) = p_1036->g_136)))) < ((((*p_43) > (((*l_304) = l_303) == l_305)) , (safe_add_func_int16_t_s_s((p_1036->g_129 > (l_304 == (void*)0)), ((4294967295UL == p_41) & p_41)))) < 0x876E539EL)) || p_1036->g_188.f0);
                        (*p_1036->g_309) = p_1036->g_308[5][5][3];
                    }
                    for (p_1036->g_134 = 0; (p_1036->g_134 <= 0); p_1036->g_134 += 1)
                    { /* block id: 140 */
                        int64_t l_313[6][1][6];
                        int32_t *l_338 = &p_1036->g_79;
                        uint16_t *l_340 = &l_174[2][5];
                        int64_t *l_342 = (void*)0;
                        int64_t l_343 = 0x760C5BB3ADCCEB26L;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_313[i][j][k] = (-5L);
                            }
                        }
                        --l_310[1][5];
                        if ((**l_299))
                            continue;
                        if (l_313[4][0][5])
                            break;
                        l_344 ^= (!(safe_rshift_func_uint16_t_u_u((l_316 == ((p_1036->g_188.f0 = (((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((p_41 != ((*l_209) = ((void*)0 != l_321))), (((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_330[0][2][1] ^ (safe_add_func_uint8_t_u_u(l_333, ((safe_mod_func_uint16_t_u_u(0xB3F5L, 9UL)) == ((*l_340) = (safe_rshift_func_int8_t_s_u(((*p_43) = (!((((*l_338) = ((**l_299) = 0x14C68AF4L)) < p_1036->g_169) | l_339))), 0))))))), 0xDCL)), p_1036->g_13[3])), p_1036->g_308[5][5][3].f4)) >= l_341), p_1036->g_21[5])) ^ (*p_42)) && (*p_42)))), 0x3E5FE0C1L)) && p_1036->g_228[4].f4) , (*l_206))) , (void*)0)), l_343)));
                    }
                }
            }
            l_345 ^= p_41;
        }
    }
    return l_346;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_35 p_1036->g_66 p_1036->g_21 p_1036->g_59 p_1036->g_34 p_1036->g_2 p_1036->g_79 p_1036->g_84 p_1036->g_106
 * writes: p_1036->g_35 p_1036->g_66 p_1036->g_34 p_1036->g_75 p_1036->g_59 p_1036->g_79 p_1036->g_83 p_1036->g_106
 */
int32_t  func_44(int32_t  p_45, uint32_t  p_46, int32_t  p_47, int32_t * p_48, struct S6 * p_1036)
{ /* block id: 12 */
    int8_t l_57 = 9L;
    int32_t *l_80 = &p_1036->g_35;
    int32_t **l_81 = &l_80;
    int32_t *l_85 = (void*)0;
    int32_t l_86 = 1L;
    int32_t *l_87 = &l_86;
    int32_t *l_88 = (void*)0;
    int32_t *l_89 = &p_1036->g_79;
    int32_t *l_90 = &l_86;
    int32_t *l_91 = &p_1036->g_79;
    int32_t *l_92 = &l_86;
    int32_t *l_93 = &l_86;
    int32_t *l_94 = &p_1036->g_59;
    int32_t l_95 = 0x6BBAE665L;
    int32_t l_96 = 0L;
    int32_t l_97 = 0x307F0789L;
    int32_t *l_98 = &p_1036->g_59;
    int32_t *l_99 = &l_95;
    int32_t *l_100 = (void*)0;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = &l_96;
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = &l_96;
    int32_t *l_105[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (p_1036->g_35 = 0; (p_1036->g_35 >= (-16)); p_1036->g_35 = safe_sub_func_uint64_t_u_u(p_1036->g_35, 6))
    { /* block id: 15 */
        uint16_t *l_56 = (void*)0;
        int32_t l_76 = (-1L);
        int32_t *l_77 = &p_1036->g_59;
        int32_t *l_78 = &p_1036->g_79;
        (*l_78) ^= ((((p_1036->g_75 = func_52(p_47, l_56, l_57, p_1036)) , (l_76 < (-1L))) & ((((*l_77) |= 0x370C6870L) <= (l_56 != &p_1036->g_21[2])) & p_46)) , (*p_1036->g_34));
    }
    (*p_1036->g_84) = ((*l_81) = l_80);
    p_1036->g_106--;
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1036->g_66 p_1036->g_21
 * writes: p_1036->g_66 p_1036->g_34
 */
uint16_t  func_52(int32_t  p_53, uint16_t * p_54, int16_t  p_55, struct S6 * p_1036)
{ /* block id: 16 */
    int32_t *l_58 = &p_1036->g_59;
    int32_t *l_60 = &p_1036->g_59;
    int32_t *l_61 = &p_1036->g_59;
    int32_t *l_62 = (void*)0;
    int32_t *l_63 = &p_1036->g_59;
    int32_t *l_64[5][7];
    int32_t *l_69 = &p_1036->g_2;
    int32_t **l_70[1];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_64[i][j] = &p_1036->g_59;
    }
    for (i = 0; i < 1; i++)
        l_70[i] = &l_64[4][6];
    --p_1036->g_66;
lbl_73:
    p_1036->g_34 = l_69;
    for (p_55 = 0; (p_55 < 20); p_55++)
    { /* block id: 21 */
        int32_t *l_74 = &p_1036->g_35;
        if (p_55)
            goto lbl_73;
        l_74 = l_74;
    }
    return p_1036->g_21[6];
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S6 c_1037;
    struct S6* p_1036 = &c_1037;
    struct S6 c_1038 = {
        0x7AF425F5L, // p_1036->g_2
        {0xA955L,0xA955L,0xA955L,0xA955L,0xA955L}, // p_1036->g_13
        {0x5EE6L,0x5EE6L,0x5EE6L,0x5EE6L,0x5EE6L,0x5EE6L,0x5EE6L,0x5EE6L}, // p_1036->g_21
        4L, // p_1036->g_35
        &p_1036->g_35, // p_1036->g_34
        0x2DD890AAL, // p_1036->g_59
        (-2L), // p_1036->g_65
        65530UL, // p_1036->g_66
        0x162BL, // p_1036->g_75
        1L, // p_1036->g_79
        {&p_1036->g_59,&p_1036->g_59}, // p_1036->g_83
        {{{&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1]}},{{&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1]}},{{&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1]}},{{&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1]}},{{&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1],&p_1036->g_83[1]}}}, // p_1036->g_82
        &p_1036->g_83[1], // p_1036->g_84
        0xAE622E34L, // p_1036->g_106
        (-1L), // p_1036->g_110
        (-10L), // p_1036->g_112
        (-8L), // p_1036->g_116
        {1L}, // p_1036->g_121
        0x6E463D7759B496B1L, // p_1036->g_129
        0x84758604516B2CFEL, // p_1036->g_134
        0xFFL, // p_1036->g_136
        (void*)0, // p_1036->g_142
        &p_1036->g_142, // p_1036->g_141
        248UL, // p_1036->g_169
        &p_1036->g_169, // p_1036->g_168
        {&p_1036->g_79,&p_1036->g_79}, // p_1036->g_171
        {{&p_1036->g_79,&p_1036->g_79,&p_1036->g_79,&p_1036->g_79,&p_1036->g_79}}, // p_1036->g_172
        &p_1036->g_79, // p_1036->g_173
        {-1L,0x473545BEL,0x6FEDF996L,7L,0x2052F6DDL}, // p_1036->g_188
        {0}, // p_1036->g_216
        0xB1C1D097L, // p_1036->g_224
        {{0x641282EE7A02D44FL,1L,6L,0L,0x15E18F19L},{0x543CE4CF2CA30342L,-2L,0x6058B558L,-6L,5L},{0x641282EE7A02D44FL,1L,6L,0L,0x15E18F19L},{0x641282EE7A02D44FL,1L,6L,0L,0x15E18F19L},{0x543CE4CF2CA30342L,-2L,0x6058B558L,-6L,5L},{0x641282EE7A02D44FL,1L,6L,0L,0x15E18F19L},{0x641282EE7A02D44FL,1L,6L,0L,0x15E18F19L}}, // p_1036->g_228
        {(-5L),(-5L),(-5L),(-5L),(-5L)}, // p_1036->g_263
        {0L}, // p_1036->g_264
        {{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}}, // p_1036->g_276
        {{-8L},{-8L},{-8L},{-8L},{-8L},{-8L}}, // p_1036->g_300
        {{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}},{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}},{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}},{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}},{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}},{{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}},{{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{0x0AFCFC309F253FA2L,0x589F06A3L,0x0F107726L,-7L,0x36B78C0FL},{0x06A98A280A017429L,-1L,0x19610C01L,0x2FL,0x41B1E60FL},{0x0350B1FDF60C484AL,1L,0x107A2326L,0x1DL,-10L},{-10L,-1L,0x69355788L,0x11L,-1L}}}}, // p_1036->g_308
        &p_1036->g_300[1].f1, // p_1036->g_309
        0x630E985FL, // p_1036->g_386
        (void*)0, // p_1036->g_387
        {0L}, // p_1036->g_394
        0xFABBL, // p_1036->g_400
        {1L}, // p_1036->g_411
        (void*)0, // p_1036->g_423
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1036->g_425
        {&p_1036->g_425[6],&p_1036->g_425[6]}, // p_1036->g_424
        &p_1036->g_425[6], // p_1036->g_426
        &p_1036->g_425[6], // p_1036->g_431
        {0x12E7L,0L,0x12E7L,0x12E7L,0L,0x12E7L,0x12E7L}, // p_1036->g_438
        &p_1036->g_394.f3.f0, // p_1036->g_472
        0UL, // p_1036->g_473
        {0x054D727D8FBD36EAL,0x1242BE21L,0x3264FBFBL,-1L,0x44E886D1L}, // p_1036->g_475
        {0x747779AA65204F15L,-9L,0x1B8583B7L,-7L,7L}, // p_1036->g_476
        {-7L,-8L,-6L,0x21L,0x15BC1CEFL}, // p_1036->g_477
        {0L,0x7B07FBAFL,0x50482F9EL,-1L,1L}, // p_1036->g_480
        0x69L, // p_1036->g_506
        &p_1036->g_276[7][0], // p_1036->g_542
        {&p_1036->g_188,&p_1036->g_188,&p_1036->g_188,&p_1036->g_188,&p_1036->g_188,&p_1036->g_188,&p_1036->g_188}, // p_1036->g_546
        {{&p_1036->g_546[5]},{&p_1036->g_546[5]},{&p_1036->g_546[5]},{&p_1036->g_546[5]},{&p_1036->g_546[5]},{&p_1036->g_546[5]},{&p_1036->g_546[5]}}, // p_1036->g_545
        &p_1036->g_546[5], // p_1036->g_547
        {0x21L}, // p_1036->g_579
        {0x534CFDC3L}, // p_1036->g_580
        {1L,0x731050D6L,0L,0x49L,0x1F8D860FL}, // p_1036->g_633
        {-1L}, // p_1036->g_634
        {{-1L},{-9L},{-1L},{-1L},{-9L},{-1L},{-1L},{-9L},{-1L},{-1L}}, // p_1036->g_650
        {0x2F8F803731FD202DL,0x5B9DE3EBL,0x75275586L,0x51L,0x3F62E05AL}, // p_1036->g_665
        {{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L},{1L,7L,0x4AAEE608L,-1L,3L}}, // p_1036->g_682
        &p_1036->g_580, // p_1036->g_696
        &p_1036->g_425[6], // p_1036->g_699
        {{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699},{&p_1036->g_699,(void*)0,(void*)0,&p_1036->g_699}}, // p_1036->g_698
        {{{{5L},{0x21L},{0x4AL},{0x21L},{5L},{5L},{0x21L},{0x4AL},{0x21L}}},{{{5L},{0x21L},{0x4AL},{0x21L},{5L},{5L},{0x21L},{0x4AL},{0x21L}}}}, // p_1036->g_710
        0xB6L, // p_1036->g_745
        {{{{0x64181229F981BF15L,0x2F4FC41CL,-1L,1L,0x3FC7476BL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL}},{{0x64181229F981BF15L,0x2F4FC41CL,-1L,1L,0x3FC7476BL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL}},{{0x64181229F981BF15L,0x2F4FC41CL,-1L,1L,0x3FC7476BL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL}},{{0x64181229F981BF15L,0x2F4FC41CL,-1L,1L,0x3FC7476BL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL}},{{0x64181229F981BF15L,0x2F4FC41CL,-1L,1L,0x3FC7476BL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL},{0x4F4CF6B7B5778E08L,-4L,0x0BE9ED51L,0x21L,0x2A6C135DL},{0x36013E840F34B9CBL,-5L,0x3C59669BL,0x36L,0x4D143CB4L},{0x3C1E7CEDBE4D6949L,0x4CCED3ABL,3L,-1L,0x050016AEL}}}}, // p_1036->g_760
        &p_1036->g_13[3], // p_1036->g_769
        &p_1036->g_769, // p_1036->g_768
        {{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}},{{0x02389E78D102B07BL,0x77ACB14BL,0x560CEBDBL,0L,0x09968B8BL}}}, // p_1036->g_819
        {0x3BA4FE21L}, // p_1036->g_822
        &p_1036->g_142, // p_1036->g_830
        &p_1036->g_830, // p_1036->g_829
        &p_1036->g_300[1], // p_1036->g_845
        0x16CC0AACAC342FF0L, // p_1036->g_871
        {0x68879DD516036547L,1L,0x076459E0L,0x73L,0x436A52E8L}, // p_1036->g_872
        9UL, // p_1036->g_883
        {-1L}, // p_1036->g_890
        {-4L,0x74862746L,0x4E669DFCL,0x03L,0x545B4825L}, // p_1036->g_913
        {&p_1036->g_913}, // p_1036->g_914
        {{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL},{-1L,0x26C881C3L,0x4FA92771L,-8L,0x7E3095CFL}}, // p_1036->g_916
        {0x7BFA8504C7CEB3B7L,0x46B6E900L,0x4C8BB121L,0x75L,1L}, // p_1036->g_917
        {0x10769BCEA53C20E9L,3L,0x4B00949EL,0x0FL,0x12B01C7BL}, // p_1036->g_918
        &p_1036->g_665.f3, // p_1036->g_928
        &p_1036->g_928, // p_1036->g_927
        0x451822F3L, // p_1036->g_955
        {0x27L}, // p_1036->g_958
        {0x72C16F3F4CD0870FL,0x7B1C4C3AL,0x6209F795L,-1L,0L}, // p_1036->g_959
        {{0x435DC7077B5C9AF1L,0x7E5BE74DL,0x2B321B46L,0L,0x27FB7EB0L}}, // p_1036->g_964
        {{&p_1036->g_890.f2}}, // p_1036->g_968
        &p_1036->g_411.f2, // p_1036->g_969
        1L, // p_1036->g_971
        &p_1036->g_822, // p_1036->g_989
        {{-1L,8L,-8L,0x48L,0x565F1B24L}}, // p_1036->g_994
        (void*)0, // p_1036->g_997
    };
    c_1037 = c_1038;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1036);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1036->g_2, "p_1036->g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1036->g_13[i], "p_1036->g_13[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1036->g_21[i], "p_1036->g_21[i]", print_hash_value);

    }
    transparent_crc(p_1036->g_35, "p_1036->g_35", print_hash_value);
    transparent_crc(p_1036->g_59, "p_1036->g_59", print_hash_value);
    transparent_crc(p_1036->g_65, "p_1036->g_65", print_hash_value);
    transparent_crc(p_1036->g_66, "p_1036->g_66", print_hash_value);
    transparent_crc(p_1036->g_75, "p_1036->g_75", print_hash_value);
    transparent_crc(p_1036->g_79, "p_1036->g_79", print_hash_value);
    transparent_crc(p_1036->g_106, "p_1036->g_106", print_hash_value);
    transparent_crc(p_1036->g_110, "p_1036->g_110", print_hash_value);
    transparent_crc(p_1036->g_112, "p_1036->g_112", print_hash_value);
    transparent_crc(p_1036->g_116, "p_1036->g_116", print_hash_value);
    transparent_crc(p_1036->g_121.f0, "p_1036->g_121.f0", print_hash_value);
    transparent_crc(p_1036->g_129, "p_1036->g_129", print_hash_value);
    transparent_crc(p_1036->g_134, "p_1036->g_134", print_hash_value);
    transparent_crc(p_1036->g_136, "p_1036->g_136", print_hash_value);
    transparent_crc(p_1036->g_169, "p_1036->g_169", print_hash_value);
    transparent_crc(p_1036->g_188.f0, "p_1036->g_188.f0", print_hash_value);
    transparent_crc(p_1036->g_188.f1, "p_1036->g_188.f1", print_hash_value);
    transparent_crc(p_1036->g_188.f2, "p_1036->g_188.f2", print_hash_value);
    transparent_crc(p_1036->g_188.f3, "p_1036->g_188.f3", print_hash_value);
    transparent_crc(p_1036->g_188.f4, "p_1036->g_188.f4", print_hash_value);
    transparent_crc(p_1036->g_224, "p_1036->g_224", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1036->g_228[i].f0, "p_1036->g_228[i].f0", print_hash_value);
        transparent_crc(p_1036->g_228[i].f1, "p_1036->g_228[i].f1", print_hash_value);
        transparent_crc(p_1036->g_228[i].f2, "p_1036->g_228[i].f2", print_hash_value);
        transparent_crc(p_1036->g_228[i].f3, "p_1036->g_228[i].f3", print_hash_value);
        transparent_crc(p_1036->g_228[i].f4, "p_1036->g_228[i].f4", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1036->g_263[i], "p_1036->g_263[i]", print_hash_value);

    }
    transparent_crc(p_1036->g_264.f0, "p_1036->g_264.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1036->g_300[i].f0, "p_1036->g_300[i].f0", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1036->g_308[i][j][k].f0, "p_1036->g_308[i][j][k].f0", print_hash_value);
                transparent_crc(p_1036->g_308[i][j][k].f1, "p_1036->g_308[i][j][k].f1", print_hash_value);
                transparent_crc(p_1036->g_308[i][j][k].f2, "p_1036->g_308[i][j][k].f2", print_hash_value);
                transparent_crc(p_1036->g_308[i][j][k].f3, "p_1036->g_308[i][j][k].f3", print_hash_value);
                transparent_crc(p_1036->g_308[i][j][k].f4, "p_1036->g_308[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_1036->g_386, "p_1036->g_386", print_hash_value);
    transparent_crc(p_1036->g_394.f0, "p_1036->g_394.f0", print_hash_value);
    transparent_crc(p_1036->g_400, "p_1036->g_400", print_hash_value);
    transparent_crc(p_1036->g_411.f0, "p_1036->g_411.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1036->g_438[i], "p_1036->g_438[i]", print_hash_value);

    }
    transparent_crc(p_1036->g_473, "p_1036->g_473", print_hash_value);
    transparent_crc(p_1036->g_475.f0, "p_1036->g_475.f0", print_hash_value);
    transparent_crc(p_1036->g_475.f1, "p_1036->g_475.f1", print_hash_value);
    transparent_crc(p_1036->g_475.f2, "p_1036->g_475.f2", print_hash_value);
    transparent_crc(p_1036->g_475.f3, "p_1036->g_475.f3", print_hash_value);
    transparent_crc(p_1036->g_475.f4, "p_1036->g_475.f4", print_hash_value);
    transparent_crc(p_1036->g_476.f0, "p_1036->g_476.f0", print_hash_value);
    transparent_crc(p_1036->g_476.f1, "p_1036->g_476.f1", print_hash_value);
    transparent_crc(p_1036->g_476.f2, "p_1036->g_476.f2", print_hash_value);
    transparent_crc(p_1036->g_476.f3, "p_1036->g_476.f3", print_hash_value);
    transparent_crc(p_1036->g_476.f4, "p_1036->g_476.f4", print_hash_value);
    transparent_crc(p_1036->g_477.f0, "p_1036->g_477.f0", print_hash_value);
    transparent_crc(p_1036->g_477.f1, "p_1036->g_477.f1", print_hash_value);
    transparent_crc(p_1036->g_477.f2, "p_1036->g_477.f2", print_hash_value);
    transparent_crc(p_1036->g_477.f3, "p_1036->g_477.f3", print_hash_value);
    transparent_crc(p_1036->g_477.f4, "p_1036->g_477.f4", print_hash_value);
    transparent_crc(p_1036->g_480.f0, "p_1036->g_480.f0", print_hash_value);
    transparent_crc(p_1036->g_480.f1, "p_1036->g_480.f1", print_hash_value);
    transparent_crc(p_1036->g_480.f2, "p_1036->g_480.f2", print_hash_value);
    transparent_crc(p_1036->g_480.f3, "p_1036->g_480.f3", print_hash_value);
    transparent_crc(p_1036->g_480.f4, "p_1036->g_480.f4", print_hash_value);
    transparent_crc(p_1036->g_506, "p_1036->g_506", print_hash_value);
    transparent_crc(p_1036->g_579.f0, "p_1036->g_579.f0", print_hash_value);
    transparent_crc(p_1036->g_580.f0, "p_1036->g_580.f0", print_hash_value);
    transparent_crc(p_1036->g_633.f0, "p_1036->g_633.f0", print_hash_value);
    transparent_crc(p_1036->g_633.f1, "p_1036->g_633.f1", print_hash_value);
    transparent_crc(p_1036->g_633.f2, "p_1036->g_633.f2", print_hash_value);
    transparent_crc(p_1036->g_633.f3, "p_1036->g_633.f3", print_hash_value);
    transparent_crc(p_1036->g_633.f4, "p_1036->g_633.f4", print_hash_value);
    transparent_crc(p_1036->g_634.f0, "p_1036->g_634.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1036->g_650[i].f0, "p_1036->g_650[i].f0", print_hash_value);

    }
    transparent_crc(p_1036->g_665.f0, "p_1036->g_665.f0", print_hash_value);
    transparent_crc(p_1036->g_665.f1, "p_1036->g_665.f1", print_hash_value);
    transparent_crc(p_1036->g_665.f2, "p_1036->g_665.f2", print_hash_value);
    transparent_crc(p_1036->g_665.f3, "p_1036->g_665.f3", print_hash_value);
    transparent_crc(p_1036->g_665.f4, "p_1036->g_665.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1036->g_682[i].f0, "p_1036->g_682[i].f0", print_hash_value);
        transparent_crc(p_1036->g_682[i].f1, "p_1036->g_682[i].f1", print_hash_value);
        transparent_crc(p_1036->g_682[i].f2, "p_1036->g_682[i].f2", print_hash_value);
        transparent_crc(p_1036->g_682[i].f3, "p_1036->g_682[i].f3", print_hash_value);
        transparent_crc(p_1036->g_682[i].f4, "p_1036->g_682[i].f4", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1036->g_710[i][j][k].f0, "p_1036->g_710[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1036->g_745, "p_1036->g_745", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1036->g_760[i][j][k].f0, "p_1036->g_760[i][j][k].f0", print_hash_value);
                transparent_crc(p_1036->g_760[i][j][k].f1, "p_1036->g_760[i][j][k].f1", print_hash_value);
                transparent_crc(p_1036->g_760[i][j][k].f2, "p_1036->g_760[i][j][k].f2", print_hash_value);
                transparent_crc(p_1036->g_760[i][j][k].f3, "p_1036->g_760[i][j][k].f3", print_hash_value);
                transparent_crc(p_1036->g_760[i][j][k].f4, "p_1036->g_760[i][j][k].f4", print_hash_value);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1036->g_819[i].f0.f0, "p_1036->g_819[i].f0.f0", print_hash_value);
        transparent_crc(p_1036->g_819[i].f0.f1, "p_1036->g_819[i].f0.f1", print_hash_value);
        transparent_crc(p_1036->g_819[i].f0.f2, "p_1036->g_819[i].f0.f2", print_hash_value);
        transparent_crc(p_1036->g_819[i].f0.f3, "p_1036->g_819[i].f0.f3", print_hash_value);
        transparent_crc(p_1036->g_819[i].f0.f4, "p_1036->g_819[i].f0.f4", print_hash_value);

    }
    transparent_crc(p_1036->g_822.f0, "p_1036->g_822.f0", print_hash_value);
    transparent_crc(p_1036->g_871, "p_1036->g_871", print_hash_value);
    transparent_crc(p_1036->g_872.f0, "p_1036->g_872.f0", print_hash_value);
    transparent_crc(p_1036->g_872.f1, "p_1036->g_872.f1", print_hash_value);
    transparent_crc(p_1036->g_872.f2, "p_1036->g_872.f2", print_hash_value);
    transparent_crc(p_1036->g_872.f3, "p_1036->g_872.f3", print_hash_value);
    transparent_crc(p_1036->g_872.f4, "p_1036->g_872.f4", print_hash_value);
    transparent_crc(p_1036->g_883, "p_1036->g_883", print_hash_value);
    transparent_crc(p_1036->g_890.f0, "p_1036->g_890.f0", print_hash_value);
    transparent_crc(p_1036->g_913.f0, "p_1036->g_913.f0", print_hash_value);
    transparent_crc(p_1036->g_913.f1, "p_1036->g_913.f1", print_hash_value);
    transparent_crc(p_1036->g_913.f2, "p_1036->g_913.f2", print_hash_value);
    transparent_crc(p_1036->g_913.f3, "p_1036->g_913.f3", print_hash_value);
    transparent_crc(p_1036->g_913.f4, "p_1036->g_913.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1036->g_916[i].f0, "p_1036->g_916[i].f0", print_hash_value);
        transparent_crc(p_1036->g_916[i].f1, "p_1036->g_916[i].f1", print_hash_value);
        transparent_crc(p_1036->g_916[i].f2, "p_1036->g_916[i].f2", print_hash_value);
        transparent_crc(p_1036->g_916[i].f3, "p_1036->g_916[i].f3", print_hash_value);
        transparent_crc(p_1036->g_916[i].f4, "p_1036->g_916[i].f4", print_hash_value);

    }
    transparent_crc(p_1036->g_917.f0, "p_1036->g_917.f0", print_hash_value);
    transparent_crc(p_1036->g_917.f1, "p_1036->g_917.f1", print_hash_value);
    transparent_crc(p_1036->g_917.f2, "p_1036->g_917.f2", print_hash_value);
    transparent_crc(p_1036->g_917.f3, "p_1036->g_917.f3", print_hash_value);
    transparent_crc(p_1036->g_917.f4, "p_1036->g_917.f4", print_hash_value);
    transparent_crc(p_1036->g_918.f0, "p_1036->g_918.f0", print_hash_value);
    transparent_crc(p_1036->g_918.f1, "p_1036->g_918.f1", print_hash_value);
    transparent_crc(p_1036->g_918.f2, "p_1036->g_918.f2", print_hash_value);
    transparent_crc(p_1036->g_918.f3, "p_1036->g_918.f3", print_hash_value);
    transparent_crc(p_1036->g_918.f4, "p_1036->g_918.f4", print_hash_value);
    transparent_crc(p_1036->g_955, "p_1036->g_955", print_hash_value);
    transparent_crc(p_1036->g_958.f0, "p_1036->g_958.f0", print_hash_value);
    transparent_crc(p_1036->g_959.f0, "p_1036->g_959.f0", print_hash_value);
    transparent_crc(p_1036->g_959.f1, "p_1036->g_959.f1", print_hash_value);
    transparent_crc(p_1036->g_959.f2, "p_1036->g_959.f2", print_hash_value);
    transparent_crc(p_1036->g_959.f3, "p_1036->g_959.f3", print_hash_value);
    transparent_crc(p_1036->g_959.f4, "p_1036->g_959.f4", print_hash_value);
    transparent_crc(p_1036->g_964.f0.f0, "p_1036->g_964.f0.f0", print_hash_value);
    transparent_crc(p_1036->g_964.f0.f1, "p_1036->g_964.f0.f1", print_hash_value);
    transparent_crc(p_1036->g_964.f0.f2, "p_1036->g_964.f0.f2", print_hash_value);
    transparent_crc(p_1036->g_964.f0.f3, "p_1036->g_964.f0.f3", print_hash_value);
    transparent_crc(p_1036->g_964.f0.f4, "p_1036->g_964.f0.f4", print_hash_value);
    transparent_crc(p_1036->g_971, "p_1036->g_971", print_hash_value);
    transparent_crc(p_1036->g_994.f0.f0, "p_1036->g_994.f0.f0", print_hash_value);
    transparent_crc(p_1036->g_994.f0.f1, "p_1036->g_994.f0.f1", print_hash_value);
    transparent_crc(p_1036->g_994.f0.f2, "p_1036->g_994.f0.f2", print_hash_value);
    transparent_crc(p_1036->g_994.f0.f3, "p_1036->g_994.f0.f3", print_hash_value);
    transparent_crc(p_1036->g_994.f0.f4, "p_1036->g_994.f0.f4", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
