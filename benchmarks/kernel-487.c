// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 30,19,2 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{0,1}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 1204786771

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    volatile int32_t g_13;
    volatile int32_t g_14;
    volatile int32_t g_15;
    volatile int32_t g_16;
    volatile int32_t g_17;
    int32_t g_18;
    VECTOR(int32_t, 8) g_21;
    VECTOR(int8_t, 2) g_58;
    int8_t g_73;
    int32_t g_100;
    int32_t *g_112;
    int32_t ** volatile g_111;
    int16_t g_123;
    int32_t g_125;
    VECTOR(int16_t, 4) g_142;
    volatile VECTOR(uint8_t, 2) g_151;
    VECTOR(uint8_t, 4) g_152;
    int32_t g_167;
    int32_t * volatile g_166[7][2][3];
    uint32_t g_179[4];
    volatile VECTOR(int32_t, 8) g_207;
    VECTOR(int32_t, 2) g_225;
    uint32_t g_227[1][2];
    uint64_t g_229;
    volatile VECTOR(uint32_t, 8) g_275;
    VECTOR(uint32_t, 4) g_287;
    uint8_t g_303;
    VECTOR(uint32_t, 2) g_332;
    int8_t ** volatile *g_338;
    int8_t *g_396[6];
    int8_t **g_395;
    int8_t ***g_394;
    VECTOR(uint8_t, 16) g_400;
    volatile VECTOR(uint16_t, 8) g_406;
    uint32_t g_429;
    VECTOR(uint16_t, 8) g_439;
    int64_t * volatile g_456;
    volatile int64_t g_458;
    volatile int64_t g_459;
    volatile int64_t *g_457[10];
    volatile int32_t g_474;
    int32_t **g_490;
    int32_t *g_492;
    int32_t **g_491[4][1][5];
    uint64_t g_509[6][5][3];
    VECTOR(uint64_t, 8) g_540;
    VECTOR(uint64_t, 8) g_636;
    VECTOR(uint64_t, 4) g_718;
    VECTOR(uint16_t, 16) g_731;
    int16_t g_734;
    uint32_t g_736;
    VECTOR(uint8_t, 8) g_741;
    uint16_t g_774;
    int8_t g_776;
    int32_t * volatile g_781[2];
    int8_t ****g_809;
    VECTOR(int16_t, 2) g_818;
    VECTOR(int32_t, 4) g_848;
    VECTOR(int32_t, 8) g_849;
    VECTOR(int32_t, 8) g_850;
    VECTOR(uint16_t, 4) g_877;
    volatile VECTOR(uint16_t, 16) g_879;
    volatile VECTOR(uint16_t, 2) g_880;
    int32_t ** volatile g_888;
    uint8_t g_892;
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S0 * p_924);
uint8_t  func_24(uint32_t  p_25, struct S0 * p_924);
uint32_t  func_29(int32_t ** p_30, int32_t ** p_31, int8_t  p_32, int32_t * p_33, int64_t  p_34, struct S0 * p_924);
int32_t ** func_35(int32_t ** p_36, int64_t  p_37, uint32_t  p_38, uint8_t  p_39, struct S0 * p_924);
int8_t  func_49(uint32_t  p_50, int32_t ** p_51, int64_t  p_52, int64_t  p_53, int32_t ** p_54, struct S0 * p_924);
int32_t ** func_60(int8_t * p_61, int32_t  p_62, struct S0 * p_924);
int8_t  func_65(int8_t * p_66, int32_t  p_67, struct S0 * p_924);
int8_t * func_75(int8_t * p_76, int32_t * p_77, int32_t ** p_78, struct S0 * p_924);
int32_t * func_81(int8_t  p_82, struct S0 * p_924);
int8_t  func_83(int32_t * p_84, uint32_t  p_85, int16_t  p_86, int32_t * p_87, struct S0 * p_924);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_924->g_2 p_924->g_18 p_924->g_16 p_924->g_14 p_924->g_21 p_924->g_comm_values p_924->g_100 p_924->g_111 p_924->g_13 p_924->g_73 p_924->g_125 p_924->g_123 p_924->g_112 p_924->g_142 p_924->g_151 p_924->g_152 p_924->g_17 p_924->g_179 p_924->g_167 p_924->g_207 p_924->g_225 p_924->g_227 p_924->g_229 p_924->g_275 p_924->g_287 p_924->g_303 p_924->g_332 p_924->g_338 p_924->g_400 p_924->g_406 p_924->g_395 p_924->g_396 p_924->g_456 p_924->g_457 p_924->g_429 p_924->g_491 p_924->g_490 p_924->g_540 p_924->g_58 p_924->g_636 p_924->g_509 permutations p_924->g_492 p_924->g_459 p_924->g_439 p_924->g_718 p_924->g_731 p_924->g_741 p_924->g_774 p_924->g_776 p_924->g_734 p_924->g_850 p_924->g_736 p_924->g_888 p_924->g_892 p_924->g_849
 * writes: p_924->g_2 p_924->g_18 p_924->g_21 p_924->g_58 p_924->g_100 p_924->g_112 p_924->g_123 p_924->g_125 p_924->g_comm_values p_924->g_179 p_924->g_73 p_924->g_167 p_924->g_229 p_924->g_152 p_924->g_225 p_924->g_227 p_924->g_394 p_924->g_142 p_924->g_429 p_924->g_303 p_924->g_439 p_924->g_490 p_924->g_509 permutations p_924->g_492 p_924->g_734 p_924->g_736 p_924->g_774 p_924->g_809 p_924->g_776
 */
uint16_t  func_1(struct S0 * p_924)
{ /* block id: 4 */
    int32_t *l_9 = (void*)0;
    int8_t *l_775 = &p_924->g_776;
    int32_t l_780 = (-4L);
    VECTOR(uint8_t, 16) l_815 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xEBL), 0xEBL), 0xEBL, 5UL, 0xEBL, (VECTOR(uint8_t, 2))(5UL, 0xEBL), (VECTOR(uint8_t, 2))(5UL, 0xEBL), 5UL, 0xEBL, 5UL, 0xEBL);
    int8_t ***l_872 = &p_924->g_395;
    int32_t l_883 = 0x42C9AD60L;
    int64_t l_895 = 0x39EDA622C26DA3FFL;
    uint16_t l_920 = 0xDBCEL;
    uint16_t l_921 = 65535UL;
    int32_t l_922 = 0x193EA265L;
    int i;
    for (p_924->g_2 = (-24); (p_924->g_2 <= (-26)); p_924->g_2--)
    { /* block id: 7 */
        int32_t **l_5 = (void*)0;
        int32_t **l_6 = (void*)0;
        int32_t *l_8[8][8][4] = {{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}},{{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0},{(void*)0,(void*)0,&p_924->g_2,(void*)0}}};
        int32_t **l_7[9][7][4] = {{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}},{{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]},{&l_8[2][0][2],&l_8[7][2][1],&l_8[1][7][3],&l_8[5][0][2]}}};
        uint32_t l_10 = 0xA0A82B5DL;
        int i, j, k;
        l_9 = (void*)0;
        if (l_10)
            break;
    }
    for (p_924->g_2 = 0; (p_924->g_2 <= 26); p_924->g_2++)
    { /* block id: 13 */
        uint32_t l_26 = 0x56995E14L;
        int32_t l_777 = 0x601F9F3FL;
        int8_t l_779[1];
        int32_t l_798 = 0x7AF33F7EL;
        int8_t ****l_810 = &p_924->g_394;
        int32_t *l_834 = &p_924->g_100;
        uint8_t l_862 = 0xB5L;
        VECTOR(uint64_t, 16) l_869 = (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 18446744073709551614UL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551613UL), 18446744073709551614UL, 18446744073709551613UL, 18446744073709551614UL, 18446744073709551613UL);
        int32_t *l_923 = &p_924->g_125;
        int i;
        for (i = 0; i < 1; i++)
            l_779[i] = 0x08L;
        for (p_924->g_18 = 20; (p_924->g_18 != 0); p_924->g_18 = safe_sub_func_uint64_t_u_u(p_924->g_18, 9))
        { /* block id: 16 */
            int8_t l_827 = 0L;
            int32_t l_839 = 0x6025D037L;
            uint32_t *l_844 = &p_924->g_429;
            int32_t l_886 = 0x2A890E62L;
            for (p_924->g_21.s6 = (-17); (p_924->g_21.s6 != (-15)); p_924->g_21.s6 = safe_add_func_int32_t_s_s(p_924->g_21.s6, 2))
            { /* block id: 19 */
                uint16_t *l_773 = &p_924->g_774;
                int32_t l_778 = 0x245DE951L;
                l_780 = ((func_24(l_26, p_924) ^ (((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((+(((safe_mul_func_int8_t_s_s((GROUP_DIVERGE(2, 1) & FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10)), (((((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10), ((p_924->g_21.s6 ^ ((((*l_773) = (0x320EEBF7L ^ p_924->g_718.w)) & ((void*)0 != l_775)) , ((p_924->g_774 > l_777) || p_924->g_400.sc))) , 0L))), p_924->g_400.s6)) < l_778) < l_779[0]) ^ l_778) , 0x08L))) >= p_924->g_776) ^ p_924->g_718.w)), l_778)) & 0x354EL), l_778)), l_780)) == p_924->g_718.x) , 0x62L)) != l_778);
                for (p_924->g_774 = 0; (p_924->g_774 < 21); p_924->g_774 = safe_add_func_uint16_t_u_u(p_924->g_774, 6))
                { /* block id: 320 */
                    return p_924->g_comm_values[p_924->tid];
                }
                for (p_924->g_100 = 0; (p_924->g_100 >= (-28)); p_924->g_100--)
                { /* block id: 325 */
                    return p_924->g_734;
                }
            }
            for (p_924->g_736 = (-18); (p_924->g_736 <= 17); ++p_924->g_736)
            { /* block id: 331 */
                int8_t ****l_808[5][4][7] = {{{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394}},{{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394}},{{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394}},{{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394}},{{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394},{&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394,&p_924->g_394}}};
                int8_t *****l_807[5][10] = {{&l_808[1][1][1],&l_808[2][1][2],&l_808[1][3][5],&l_808[3][1][4],&l_808[2][1][2],&l_808[3][1][4],&l_808[1][3][5],&l_808[2][1][2],&l_808[1][1][1],&l_808[1][1][1]},{&l_808[1][1][1],&l_808[2][1][2],&l_808[1][3][5],&l_808[3][1][4],&l_808[2][1][2],&l_808[3][1][4],&l_808[1][3][5],&l_808[2][1][2],&l_808[1][1][1],&l_808[1][1][1]},{&l_808[1][1][1],&l_808[2][1][2],&l_808[1][3][5],&l_808[3][1][4],&l_808[2][1][2],&l_808[3][1][4],&l_808[1][3][5],&l_808[2][1][2],&l_808[1][1][1],&l_808[1][1][1]},{&l_808[1][1][1],&l_808[2][1][2],&l_808[1][3][5],&l_808[3][1][4],&l_808[2][1][2],&l_808[3][1][4],&l_808[1][3][5],&l_808[2][1][2],&l_808[1][1][1],&l_808[1][1][1]},{&l_808[1][1][1],&l_808[2][1][2],&l_808[1][3][5],&l_808[3][1][4],&l_808[2][1][2],&l_808[3][1][4],&l_808[1][3][5],&l_808[2][1][2],&l_808[1][1][1],&l_808[1][1][1]}};
                int32_t l_828 = 1L;
                uint8_t *l_829 = &p_924->g_303;
                int16_t *l_830 = &p_924->g_734;
                int64_t *l_831 = (void*)0;
                int64_t *l_832[3][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t **l_833 = (void*)0;
                int32_t **l_845 = &p_924->g_112;
                int i, j, k;
                l_834 = func_81((p_924->g_123 || (safe_mod_func_uint16_t_u_u(0xB89BL, ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_777 = ((safe_lshift_func_uint16_t_u_s(p_924->g_2, (((*l_830) = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65535UL, 0xE63AL)).even, (l_798 == ((safe_lshift_func_uint8_t_u_u(254UL, (safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(((*l_829) = (safe_sub_func_uint32_t_u_u(((p_924->g_809 = &p_924->g_394) != l_810), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_815.s4346)).w, ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(4L, ((VECTOR(int16_t, 2))(5L, 0L)), 0x6CF0L, ((VECTOR(int16_t, 2))(p_924->g_818.xx)), ((VECTOR(int16_t, 2))(0x6229L, 0L)), 1L, ((safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_779[0], ((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x37A1L, 1L)).hi, l_779[0])) >= 0x6C6BF328970AB5A7L))), 1L)) | 18446744073709551614UL), l_827)) <= 4294967295UL), l_828, p_924->g_303, ((VECTOR(int16_t, 4))(5L)))).sf, 65535UL)) || l_827), 0xE3L, ((VECTOR(uint8_t, 2))(0UL)), 0xC7L, 0x93L, 252UL)).s1544454755017055, ((VECTOR(uint8_t, 16))(0x32L))))).s3, 10)), p_924->g_13))))), 0xB0L)) && GROUP_DIVERGE(1, 1)) <= l_26) >= l_827), 10)))) && l_828))))) && l_827))) > p_924->g_comm_values[p_924->tid])), 0x2166D76B61D72A5FL)), 7UL)) , p_924->g_152.w)))), p_924);
                (*l_845) = ((l_828 , ((((safe_div_func_uint8_t_u_u(0x54L, p_924->g_179[3])) >= ((*l_775) = ((safe_mod_func_uint32_t_u_u(p_924->g_142.w, l_839)) && (!((((*l_834) <= (0x17C3496297A7671BL <= (safe_lshift_func_uint16_t_u_u(((void*)0 == l_844), 6)))) <= p_924->g_540.s7) > p_924->g_332.x))))) || (*l_834)) == p_924->g_734)) , (void*)0);
            }
            for (p_924->g_73 = 0; (p_924->g_73 >= (-18)); p_924->g_73 = safe_sub_func_uint8_t_u_u(p_924->g_73, 2))
            { /* block id: 342 */
                uint64_t l_851 = 1UL;
                VECTOR(uint16_t, 16) l_878 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), 65527UL), 65527UL, 1UL, 65527UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), (VECTOR(uint16_t, 2))(1UL, 65527UL), 1UL, 65527UL, 1UL, 65527UL);
                int32_t *l_891 = (void*)0;
                int i;
                if (((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_924->g_848.ywzxxwxywwzxwyzw)).odd, ((VECTOR(int32_t, 8))(p_924->g_849.s46227627)), ((VECTOR(int32_t, 8))(p_924->g_850.s75371607))))).s4)
                { /* block id: 343 */
                    if (l_851)
                        break;
                    if ((atomic_inc(&p_924->l_atomic_input[58]) == 1))
                    { /* block id: 346 */
                        int32_t l_852[5];
                        uint16_t l_853 = 65530UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_852[i] = 0x4796D0BAL;
                        --l_853;
                        unsigned int result = 0;
                        int l_852_i0;
                        for (l_852_i0 = 0; l_852_i0 < 5; l_852_i0++) {
                            result += l_852[l_852_i0];
                        }
                        result += l_853;
                        atomic_add(&p_924->l_special_values[58], result);
                    }
                    else
                    { /* block id: 348 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 351 */
                    int32_t *l_887[10] = {&l_780,(void*)0,(void*)0,(void*)0,&l_780,&l_780,(void*)0,(void*)0,(void*)0,&l_780};
                    uint32_t l_890 = 4294967291UL;
                    int i;
                    for (l_839 = 0; (l_839 <= (-8)); l_839 = safe_sub_func_uint16_t_u_u(l_839, 8))
                    { /* block id: 354 */
                        uint32_t **l_884 = &l_844;
                        int32_t l_885 = 1L;
                        int32_t **l_889 = &l_887[4];
                        l_886 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(l_862, (safe_mod_func_int64_t_s_s(((((p_924->g_850.s1 != ((void*)0 != &p_924->g_774)) <= 0x7C846330L) , ((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u((255UL || ((((VECTOR(uint64_t, 16))(l_869.s252e642059468041)).sa , (!(safe_mod_func_int8_t_s_s((((void*)0 == l_872) ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(p_924->g_877.zyzyzzyx)).even, ((VECTOR(uint16_t, 2))(l_878.s58)).yxyy))).odd, ((VECTOR(uint16_t, 4))(p_924->g_879.sf7fd)).odd))), ((VECTOR(uint16_t, 8))(p_924->g_880.xxxyxxyx)).s00))).even, (((((safe_mul_func_int8_t_s_s(((*l_775) = (((*l_884) = func_81(l_883, p_924)) != &p_924->g_429)), 0UL)) || p_924->g_741.s1) & p_924->g_731.sc) < (*l_834)) || p_924->g_509[3][2][1]))), 4))), l_885)))) , 0x9AL)), 7L)), p_924->g_736)) > l_878.s8)) , 0x7EB9BA6619D981AFL), 8L)))), (*l_834)));
                        (*p_924->g_888) = l_887[4];
                        (*l_889) = l_887[6];
                        return l_890;
                    }
                    (*p_924->g_111) = l_891;
                }
                if (p_924->g_892)
                    continue;
            }
        }
        for (l_26 = 0; (l_26 != 2); ++l_26)
        { /* block id: 369 */
            (*l_834) = l_895;
            for (p_924->g_73 = 3; (p_924->g_73 != (-21)); p_924->g_73--)
            { /* block id: 373 */
                return p_924->g_229;
            }
        }
        (*p_924->g_111) = ((1UL == ((!(((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((~((0x43B0L < (safe_sub_func_uint8_t_u_u((((void*)0 == &p_924->g_229) != ((*l_923) = (safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((*p_924->g_492) |= 0L), (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_798 <= ((VECTOR(int64_t, 2))(0x074A38B6CA6A94E1L, 1L)).hi), (0x47C3E447E134BC11L != (safe_rshift_func_uint8_t_u_s(p_924->g_849.s3, 5))))), (safe_div_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((6UL > FAKE_DIVERGE(p_924->local_0_offset, get_local_id(0), 10)) & GROUP_DIVERGE(2, 1)), GROUP_DIVERGE(0, 1))) && l_920) && 4294967295UL), p_924->g_332.y)))), l_921)))), l_922)))), 0x2AL))) , l_921)) <= 7L), 0)), p_924->g_429)) == 0xD820ACFDL) <= p_924->g_287.z) ^ p_924->g_225.x) != FAKE_DIVERGE(p_924->global_1_offset, get_global_id(1), 10))) >= GROUP_DIVERGE(1, 1))) , &l_780);
    }
    return p_924->g_227[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_18 p_924->g_16 p_924->g_14 p_924->g_2 p_924->g_21 p_924->g_comm_values p_924->g_100 p_924->g_111 p_924->g_13 p_924->g_73 p_924->g_125 p_924->g_123 p_924->g_112 p_924->g_142 p_924->g_151 p_924->g_152 p_924->g_17 p_924->g_179 p_924->g_167 p_924->g_207 p_924->g_225 p_924->g_227 p_924->g_229 p_924->g_275 p_924->g_287 p_924->g_303 p_924->g_332 p_924->g_338 p_924->g_400 p_924->g_406 p_924->g_395 p_924->g_396 p_924->g_456 p_924->g_457 p_924->g_429 p_924->g_491 p_924->g_490 p_924->g_540 p_924->g_58 p_924->g_636 p_924->g_509 permutations p_924->g_492 p_924->g_459 p_924->g_439 p_924->g_718 p_924->g_731 p_924->g_741
 * writes: p_924->g_58 p_924->g_100 p_924->g_112 p_924->g_123 p_924->g_125 p_924->g_comm_values p_924->g_179 p_924->g_73 p_924->g_167 p_924->g_229 p_924->g_152 p_924->g_225 p_924->g_227 p_924->g_394 p_924->g_142 p_924->g_429 p_924->g_303 p_924->g_439 p_924->g_490 p_924->g_509 permutations p_924->g_492 p_924->g_734 p_924->g_736
 */
uint8_t  func_24(uint32_t  p_25, struct S0 * p_924)
{ /* block id: 20 */
    int32_t *l_41 = &p_924->g_18;
    int32_t **l_40 = &l_41;
    int8_t *l_57 = (void*)0;
    int8_t *l_59[3];
    int16_t *l_412[1];
    uint64_t l_649 = 18446744073709551614UL;
    int i;
    for (i = 0; i < 3; i++)
        l_59[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_412[i] = &p_924->g_123;
    atomic_add(&p_924->l_atomic_reduction[0], (safe_sub_func_uint32_t_u_u(func_29(func_35(l_40, (safe_add_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s((l_649 ^= (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(func_49((safe_lshift_func_int8_t_s_s((p_924->g_58.x = ((VECTOR(int8_t, 2))(0x18L, 1L)).odd), (p_25 <= (-10L)))), (p_924->g_490 = func_60((((safe_lshift_func_int8_t_s_u(func_65(l_57, (*l_41), p_924), 5)) , (safe_add_func_uint16_t_u_u(((void*)0 != &p_924->g_123), ((+((safe_rshift_func_int16_t_s_s((p_924->g_142.z |= (&p_924->g_123 != (void*)0)), 5)) >= 0L)) || 0L)))) , (*p_924->g_395)), (**l_40), p_924)), p_924->g_18, (*l_41), p_924->g_491[3][0][3], p_924), 255UL)), (**l_40)))))), p_924->g_540.s1)), p_25, p_25, p_924), &l_41, (*l_41), (*l_40), (**l_40), p_924), 1UL)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_924->v_collective += p_924->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_21 p_924->g_303 p_924->g_492 p_924->g_18 p_924->g_167 p_924->g_459 p_924->g_509 p_924->g_439 p_924->g_540 p_924->g_718 p_924->g_275 p_924->g_731 p_924->g_142 p_924->g_227 p_924->g_100 p_924->g_741 p_924->g_636
 * writes: p_924->g_492 p_924->g_100 p_924->g_167 p_924->g_509 p_924->g_439 p_924->g_734 p_924->g_227 p_924->g_736
 */
uint32_t  func_29(int32_t ** p_30, int32_t ** p_31, int8_t  p_32, int32_t * p_33, int64_t  p_34, struct S0 * p_924)
{ /* block id: 255 */
    uint32_t l_669 = 0xE94E7687L;
    uint8_t *l_670[8] = {&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303};
    int16_t l_671 = 0x2241L;
    VECTOR(int16_t, 2) l_672 = (VECTOR(int16_t, 2))((-2L), 0x269BL);
    int32_t **l_673 = (void*)0;
    int32_t **l_674 = &p_924->g_492;
    int8_t l_677 = 8L;
    int8_t l_679 = (-5L);
    int32_t l_680 = 3L;
    uint32_t l_681 = 0UL;
    int64_t *l_696 = (void*)0;
    VECTOR(uint64_t, 2) l_717 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL);
    int32_t l_760 = 0x1784EA83L;
    int i;
    if ((((safe_mod_func_int64_t_s_s((((p_924->g_21.s2 >= (((l_671 &= (safe_mul_func_uint8_t_u_u((0UL < p_34), l_669))) <= p_32) <= (((((VECTOR(int16_t, 2))(l_672.xy)).even , ((*p_30) != ((*l_674) = (*p_31)))) > p_32) | 0xCDA5226492285698L))) , p_32) && p_32), p_32)) > p_924->g_303) ^ p_34))
    { /* block id: 258 */
        int32_t *l_675 = &p_924->g_100;
        VECTOR(int32_t, 2) l_676 = (VECTOR(int32_t, 2))(0x15FFB90FL, (-1L));
        int32_t *l_678[2][7][9] = {{{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0}},{{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0},{&p_924->g_167,&p_924->g_167,(void*)0,(void*)0,&p_924->g_167,&p_924->g_18,(void*)0,&p_924->g_167,(void*)0}}};
        int i, j, k;
        (*l_675) = (-1L);
        l_677 |= ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(1L, 1L, 1L, 0x3BCD14B2L)).xxxwxxzxzzxxyzwy)).lo, ((VECTOR(int32_t, 16))(l_676.xxxyyxxyxxxxxxxy)).even))).s51, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x3002D1C5L)).xxyyxxyx)).s00, ((VECTOR(int32_t, 4))((**l_674), (*p_924->g_492), 1L, 0x782DE5C8L)).even))).odd;
        ++l_681;
    }
    else
    { /* block id: 262 */
        int64_t l_689 = (-1L);
        uint16_t *l_694 = (void*)0;
        int64_t *l_698[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_732[4];
        VECTOR(uint8_t, 2) l_742 = (VECTOR(uint8_t, 2))(8UL, 0x76L);
        VECTOR(uint8_t, 4) l_743 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x16L), 0x16L);
        int i, j;
        for (i = 0; i < 4; i++)
            l_732[i] = 0x526033D6L;
        for (l_681 = 0; (l_681 < 3); l_681++)
        { /* block id: 265 */
            int32_t l_686 = (-1L);
            int32_t *l_687 = &p_924->g_167;
            int32_t *l_688[4] = {&p_924->g_100,&p_924->g_100,&p_924->g_100,&p_924->g_100};
            VECTOR(int32_t, 8) l_701 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4D0FDF9DL), 0x4D0FDF9DL), 0x4D0FDF9DL, (-2L), 0x4D0FDF9DL);
            int i;
            l_689 = (l_680 = ((*l_687) = l_686));
            for (l_677 = 5; (l_677 <= 24); l_677 = safe_add_func_uint32_t_u_u(l_677, 3))
            { /* block id: 271 */
                uint16_t *l_695 = (void*)0;
                int32_t l_720 = 4L;
                int8_t *l_733 = &l_677;
                if ((**p_31))
                    break;
                if ((**p_30))
                    continue;
                for (l_689 = 0; (l_689 < 14); l_689 = safe_add_func_uint8_t_u_u(l_689, 7))
                { /* block id: 276 */
                    int64_t **l_697[7] = {&l_696,&l_696,&l_696,&l_696,&l_696,&l_696,&l_696};
                    uint64_t *l_704[7][10][3] = {{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}},{{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]},{(void*)0,&p_924->g_509[4][2][1],&p_924->g_509[4][2][1]}}};
                    uint16_t *l_709 = (void*)0;
                    uint16_t *l_710[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_719 = 0x4D2EE493L;
                    uint32_t *l_735 = &p_924->g_227[0][0];
                    int i, j, k;
                    (*l_687) |= (((l_694 != l_695) <= GROUP_DIVERGE(0, 1)) ^ ((l_698[2][5] = l_696) != (p_34 , &p_924->g_459)));
                    p_924->g_736 = (safe_sub_func_int64_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_701.s2126224062236516)).hi)).s4 && ((*l_735) = (p_924->g_459 , (safe_mul_func_int8_t_s_s((((p_32 | (--p_924->g_509[2][2][0])) | ((safe_rshift_func_uint16_t_u_s((p_924->g_439.s7 ^= GROUP_DIVERGE(2, 1)), (**l_674))) & (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((~p_924->g_540.s4) >= (((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(0UL, 0xCB0FB92599D1C106L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_717.xyxxxxyyyxxxxyxx)).s0e09)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_924->g_718.xy)))), 0x2EBA78CA26CCF446L, (l_720 |= (+(p_924->g_275.s5 || l_719))), (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_924->g_734 = (safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_732[2] |= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_924->g_731.s25a4)))).xwwxywyxxyyzzzxz)).sd), (~(l_733 != &p_32)))), p_32)), p_32))), 6)), l_689)), ((VECTOR(uint64_t, 4))(0UL)), 18446744073709551615UL)).even, ((VECTOR(uint64_t, 8))(0x0BD4402C99BDA707L))))).s2 <= p_34)), p_924->g_142.z)) < (**p_30)), l_689)) <= p_34), p_924->g_227[0][1])))) , l_720), 0x05L))))), (-1L)));
                }
            }
            for (p_924->g_100 = 0; (p_924->g_100 == 18); p_924->g_100 = safe_add_func_uint32_t_u_u(p_924->g_100, 8))
            { /* block id: 290 */
                if ((*p_33))
                    break;
                (*l_687) = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(252UL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(p_924->g_741.s63)), ((VECTOR(uint8_t, 4))(l_742.xxxx)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(l_743.wxxyyxwy)), ((VECTOR(uint8_t, 8))(0x59L, p_32, 0x1BL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 1UL)).xxyy)), 0UL))))))).s2337325224532557)).s3c))), 255UL)).wxxzzxyxwyxxwzzw, ((VECTOR(uint8_t, 2))(248UL, 247UL)).xyxxyxyxxyyyyxxy))).se, 5));
                (*l_687) = ((VECTOR(int32_t, 2))((-5L), 0x1EB750B8L)).odd;
                if ((atomic_inc(&p_924->l_atomic_input[45]) == 8))
                { /* block id: 295 */
                    int16_t l_744 = 0x1B4AL;
                    if (l_744)
                    { /* block id: 296 */
                        int32_t l_746 = (-10L);
                        int32_t *l_745 = &l_746;
                        int32_t *l_747 = &l_746;
                        int32_t l_748 = 1L;
                        int32_t *l_749 = &l_746;
                        int32_t *l_750[9] = {&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748,&l_748};
                        int32_t *l_751 = (void*)0;
                        int64_t l_752 = 0x42A888C87C115C71L;
                        int32_t l_753 = 0L;
                        int i;
                        l_747 = l_745;
                        l_751 = (l_748 , (l_750[5] = l_749));
                        l_753 |= l_752;
                    }
                    else
                    { /* block id: 301 */
                        uint64_t l_754 = 0xA790D994A3C4DEACL;
                        int32_t l_755 = (-8L);
                        int32_t *l_756 = &l_755;
                        VECTOR(uint16_t, 16) l_757 = (VECTOR(uint16_t, 16))(0xF10DL, (VECTOR(uint16_t, 4))(0xF10DL, (VECTOR(uint16_t, 2))(0xF10DL, 0UL), 0UL), 0UL, 0xF10DL, 0UL, (VECTOR(uint16_t, 2))(0xF10DL, 0UL), (VECTOR(uint16_t, 2))(0xF10DL, 0UL), 0xF10DL, 0UL, 0xF10DL, 0UL);
                        int32_t l_758 = 0x5C3B764AL;
                        uint32_t l_759 = 0x950C3526L;
                        int i;
                        l_755 |= l_754;
                        l_756 = (void*)0;
                        l_759 &= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(0x4747L, 0UL)).xyxx, ((VECTOR(uint16_t, 8))(l_757.sc96fe69b)).even))).even)).xyxxyyyyxyyyyyyx)).sb4)).odd , l_758);
                    }
                    unsigned int result = 0;
                    result += l_744;
                    atomic_add(&p_924->l_special_values[45], result);
                }
                else
                { /* block id: 306 */
                    (1 + 1);
                }
            }
        }
        return l_760;
    }
    return p_924->g_636.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_406
 * writes: p_924->g_439
 */
int32_t ** func_35(int32_t ** p_36, int64_t  p_37, uint32_t  p_38, uint8_t  p_39, struct S0 * p_924)
{ /* block id: 249 */
    int16_t l_652 = 9L;
    int32_t l_657 = 0x605F44A8L;
    uint16_t *l_660 = (void*)0;
    uint16_t *l_661[2];
    int32_t l_662 = (-1L);
    int32_t *l_663[5][9] = {{&p_924->g_125,&p_924->g_125,&p_924->g_100,(void*)0,&p_924->g_18,(void*)0,&p_924->g_100,&p_924->g_125,&p_924->g_125},{&p_924->g_125,&p_924->g_125,&p_924->g_100,(void*)0,&p_924->g_18,(void*)0,&p_924->g_100,&p_924->g_125,&p_924->g_125},{&p_924->g_125,&p_924->g_125,&p_924->g_100,(void*)0,&p_924->g_18,(void*)0,&p_924->g_100,&p_924->g_125,&p_924->g_125},{&p_924->g_125,&p_924->g_125,&p_924->g_100,(void*)0,&p_924->g_18,(void*)0,&p_924->g_100,&p_924->g_125,&p_924->g_125},{&p_924->g_125,&p_924->g_125,&p_924->g_100,(void*)0,&p_924->g_18,(void*)0,&p_924->g_100,&p_924->g_125,&p_924->g_125}};
    uint32_t l_664 = 4294967295UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_661[i] = (void*)0;
    l_664 = ((l_662 |= (p_924->g_439.s6 = ((l_657 ^= (safe_mul_func_int16_t_s_s(((0x56945960F66F3CF2L != l_652) & FAKE_DIVERGE(p_924->global_1_offset, get_global_id(1), 10)), ((safe_add_func_uint8_t_u_u((((-1L) != ((void*)0 == &p_924->g_395)) || (-6L)), 0UL)) > 0L)))) || ((safe_div_func_uint64_t_u_u((((p_39 == p_924->g_406.s6) , &l_652) != &p_924->g_123), l_657)) && l_652)))) < GROUP_DIVERGE(2, 1));
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_229 p_924->g_179 p_924->g_490 p_924->g_429 p_924->g_comm_values p_924->g_112 p_924->g_18 p_924->g_17 p_924->g_167 p_924->g_540 p_924->g_58 p_924->g_111 p_924->g_100 p_924->g_207 p_924->g_227 p_924->g_636 p_924->g_509 p_924->g_125 permutations p_924->g_406
 * writes: p_924->g_229 p_924->g_303 p_924->g_comm_values p_924->g_509 p_924->g_112 p_924->g_429 p_924->g_100 p_924->g_179 permutations
 */
int8_t  func_49(uint32_t  p_50, int32_t ** p_51, int64_t  p_52, int64_t  p_53, int32_t ** p_54, struct S0 * p_924)
{ /* block id: 181 */
    int64_t l_495 = 0x5F9D2DF4F30B1A20L;
    int32_t l_514 = 0x7FA8D2F6L;
    int32_t l_535 = 1L;
    uint16_t *l_554[10];
    int64_t l_559[8];
    int32_t l_560 = (-1L);
    int32_t l_561 = 0x5AC519B2L;
    int32_t l_562 = 0x51B537B4L;
    int32_t l_563 = 0x10F7F142L;
    int32_t l_564 = 0L;
    int32_t l_565[6][10] = {{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL},{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL},{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL},{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL},{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL},{0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL,0x7AB82F4EL}};
    int8_t l_566[6][7][5] = {{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}},{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}},{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}},{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}},{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}},{{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L},{(-3L),(-7L),0x1CL,(-1L),0x56L}}};
    uint32_t l_567 = 4294967295UL;
    int32_t l_578 = 0x7977EBD2L;
    uint32_t *l_605 = &p_924->g_429;
    int32_t l_618 = 0x1B9B46EBL;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_554[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_559[i] = 1L;
    for (p_924->g_229 = (-22); (p_924->g_229 == 39); ++p_924->g_229)
    { /* block id: 184 */
        int16_t *l_504 = &p_924->g_123;
        uint8_t *l_505[10][10] = {{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0},{(void*)0,&p_924->g_303,(void*)0,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,&p_924->g_303,(void*)0}};
        int64_t *l_506[1][7];
        int32_t l_507 = 1L;
        uint64_t *l_508 = &p_924->g_509[4][2][1];
        int32_t *l_510[6];
        int16_t l_511 = (-2L);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_506[i][j] = &l_495;
        }
        for (i = 0; i < 6; i++)
            l_510[i] = (void*)0;
        (*p_51) = func_81((((((*l_508) = (0x4DBBE6C3L & (((((l_495 , ((safe_rshift_func_uint16_t_u_s(((p_924->g_comm_values[p_924->tid] = ((p_924->g_303 = (safe_sub_func_int8_t_s_s((p_53 ^ (safe_lshift_func_uint16_t_u_u(l_495, 10))), ((safe_lshift_func_int8_t_s_u(((void*)0 == l_504), p_53)) == (p_924->g_179[0] || p_53))))) | p_50)) > p_50), l_507)) & p_50)) ^ 0x71734ADEF5A08E11L) <= 18446744073709551609UL) >= p_52) | p_53))) | p_50) ^ l_495) <= 0L), p_924);
        l_511 = l_495;
        (*p_924->g_490) = func_81(l_495, p_924);
        for (p_924->g_429 = 0; (p_924->g_429 >= 25); p_924->g_429++)
        { /* block id: 193 */
            int64_t l_536 = 0L;
            int32_t l_537 = 0x6827AB3BL;
            int32_t l_538 = (-5L);
            int32_t l_539 = 0x3D6EA37DL;
            uint16_t *l_543 = (void*)0;
            uint16_t *l_544 = (void*)0;
            uint16_t *l_545 = (void*)0;
            uint16_t *l_546 = (void*)0;
            uint16_t *l_547 = (void*)0;
            uint16_t *l_548 = (void*)0;
            uint16_t *l_549 = (void*)0;
            uint16_t *l_550 = (void*)0;
            uint16_t *l_551 = (void*)0;
            uint16_t *l_552 = (void*)0;
            uint16_t *l_553[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t l_555 = 18446744073709551615UL;
            int i;
            l_514 |= 0x3D276C8CL;
            l_539 |= ((l_538 |= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_924->g_229, ((safe_add_func_uint16_t_u_u(65534UL, (((l_536 = (l_535 = (l_514 = ((safe_sub_func_int8_t_s_s(0L, ((((VECTOR(int16_t, 2))(0L, 0x5BEFL)).hi , p_924->g_comm_values[p_924->tid]) , ((safe_sub_func_int32_t_s_s((**p_51), (((1L == (p_53 <= (((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_924->g_17, 0x5AEFL)) && 0x6A987338B0924C67L), p_50)), 1UL)) < l_495), p_924->g_167)), 0xD0373ED51EC01239L)) >= p_50) >= 0UL))) , (void*)0) != (void*)0))) >= p_924->g_229)))) , (-1L))))) && l_536) & p_50))) , 1L))), l_537))) || p_50);
            (*p_924->g_111) = func_81((l_555 = ((((VECTOR(uint64_t, 2))(p_924->g_540.s36)).even & ((safe_add_func_uint16_t_u_u((~(l_539 = l_495)), p_924->g_58.x)) | p_924->g_540.s2)) , (l_554[2] != (void*)0))), p_924);
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_924->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_924->tid, 2))]));
    for (p_924->g_100 = 0; (p_924->g_100 <= 28); p_924->g_100 = safe_add_func_int64_t_s_s(p_924->g_100, 5))
    { /* block id: 210 */
        int32_t *l_558[10] = {&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125,&p_924->g_125};
        int32_t l_574 = 0x2B534591L;
        uint8_t *l_614 = (void*)0;
        VECTOR(uint16_t, 16) l_623 = (VECTOR(uint16_t, 16))(0xB624L, (VECTOR(uint16_t, 4))(0xB624L, (VECTOR(uint16_t, 2))(0xB624L, 0xDBB2L), 0xDBB2L), 0xDBB2L, 0xB624L, 0xDBB2L, (VECTOR(uint16_t, 2))(0xB624L, 0xDBB2L), (VECTOR(uint16_t, 2))(0xB624L, 0xDBB2L), 0xB624L, 0xDBB2L, 0xB624L, 0xDBB2L);
        int16_t *l_630[8][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t l_647 = 5UL;
        int i, j, k;
        (*p_51) = func_81(l_535, p_924);
        l_567++;
        for (l_561 = (-9); (l_561 == (-7)); l_561 = safe_add_func_int8_t_s_s(l_561, 8))
        { /* block id: 215 */
            int16_t l_577 = (-3L);
            int32_t l_580 = 0x11D2B2F7L;
            int32_t l_582[9] = {0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L,0x41E2EED9L};
            uint8_t l_594[1];
            int64_t *l_617 = &l_495;
            uint32_t *l_635 = &p_924->g_179[3];
            uint32_t *l_645 = (void*)0;
            uint32_t *l_646 = &permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_924->tid, 2))];
            int8_t *l_648[8][6][5] = {{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}},{{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0},{&l_566[4][1][3],(void*)0,&l_566[5][5][4],(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_594[i] = 0x10L;
            for (l_560 = 0; (l_560 != (-20)); l_560--)
            { /* block id: 218 */
                l_574 &= 0x3F8A8E1CL;
            }
            for (l_574 = 9; (l_574 < 10); l_574 = safe_add_func_uint8_t_u_u(l_574, 2))
            { /* block id: 223 */
                int64_t l_581 = 0L;
                int32_t l_585[8];
                uint32_t *l_606[9][6] = {{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429},{&p_924->g_429,&p_924->g_429,&p_924->g_429,(void*)0,&p_924->g_429,&p_924->g_429}};
                int i, j;
                for (i = 0; i < 8; i++)
                    l_585[i] = 7L;
                if ((&p_924->g_179[0] != &p_50))
                { /* block id: 224 */
                    int64_t l_579 = 0x05822E68F846B535L;
                    int32_t l_583 = 0x669D8949L;
                    int32_t l_584 = 0x09C1F61BL;
                    int32_t l_586 = 0x242B2703L;
                    int32_t l_587 = 1L;
                    int32_t l_588 = 0L;
                    int32_t l_589 = 0x1D6B2EAAL;
                    int32_t l_590 = 1L;
                    int32_t l_591 = 9L;
                    int32_t l_592 = (-1L);
                    int32_t l_593[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    uint8_t *l_607 = (void*)0;
                    uint8_t *l_608 = &l_594[0];
                    int8_t *l_611 = &l_566[5][0][1];
                    int i;
                    l_594[0]++;
                    l_582[6] = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((6L && l_577) < ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((l_605 == l_606[0][0]), 65526UL)), ((*l_611) |= ((++(*l_608)) <= 0x26L)))) < (((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((l_614 == (void*)0) == (safe_lshift_func_int8_t_s_s((l_617 == &p_924->g_459), p_50))), 0xA0A3C092L, 0x26D115CCL, 0x20197E88L, ((VECTOR(uint32_t, 2))(2UL)), 0UL, 1UL)).even, (uint32_t)p_53))).z, l_618)) | (-10L)) > p_52))), 5)), (**p_51)));
                    l_565[2][7] = (&p_924->g_458 == (void*)0);
                }
                else
                { /* block id: 230 */
                    l_580 = (-7L);
                    return p_53;
                }
            }
            (*p_51) = func_81((((l_564 = (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xCAA1L, 0xF65DL)), 0xE4C7L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0x4E33L)).xyyx)).xwzyzwxx)).odd)))), 8UL)).s14, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_623.s92)).xxxxyyxy)).s27))))).yxyy, ((VECTOR(uint16_t, 4))(0xBA34L, ((((l_580 ^= ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(247UL, 0x0EL)).hi, (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_630[0][2][4] == (p_50 , l_554[2])), (l_582[7] = (l_565[1][4] = (((p_924->g_207.s2 < (safe_div_func_int16_t_s_s(p_924->g_227[0][1], (safe_mod_func_int64_t_s_s((+(((*l_635) = 4294967295UL) < (l_562 = l_514))), (l_563 = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(p_924->g_636.s20440411)).s5070727376476136, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))((((*l_646) ^= (l_566[2][0][1] >= (safe_mod_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(0UL, p_53)) || p_924->g_509[1][3][0]), 0xEEL)), 7L)) != l_582[2]) != p_50) < p_924->g_125), p_924->g_429)))) | 1L), 0x41F3075231CD98E2L, 1UL, ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 4))(18446744073709551608UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), l_647, 18446744073709551610UL, 18446744073709551614UL)).s1f, ((VECTOR(uint64_t, 2))(0UL))))).yxxxxyxxyyyyyyxx))).hi, ((VECTOR(uint64_t, 8))(18446744073709551614UL))))), ((VECTOR(uint64_t, 8))(3UL))))).s3641304377042757)).s6)))))) >= p_50) <= p_50))))) ^ p_53), 65529UL)))) , 0x06L)) == GROUP_DIVERGE(1, 1)) , p_924->g_406.s2) || FAKE_DIVERGE(p_924->global_2_offset, get_global_id(2), 10)), 0x650CL, 65529UL)), ((VECTOR(uint16_t, 4))(65535UL))))))).x || 65526UL), 0x0762L)), FAKE_DIVERGE(p_924->global_2_offset, get_global_id(2), 10)))) <= p_53) != 0x537CL), p_924);
        }
    }
    (*p_924->g_490) = &l_561;
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_112 p_924->g_18 p_924->g_100 p_924->g_179 p_924->g_395 p_924->g_396 p_924->g_comm_values p_924->g_303 p_924->g_167 p_924->g_152 p_924->g_456 p_924->g_457 p_924->g_429 p_924->g_287
 * writes: p_924->g_229 p_924->g_429 p_924->g_303 p_924->g_100 p_924->g_439
 */
int32_t ** func_60(int8_t * p_61, int32_t  p_62, struct S0 * p_924)
{ /* block id: 158 */
    uint8_t l_413 = 7UL;
    int32_t l_445[7] = {0x3267C9B8L,0L,0x3267C9B8L,0x3267C9B8L,0L,0x3267C9B8L,0x3267C9B8L};
    int32_t *l_449 = (void*)0;
    int32_t l_479 = 0x774A751BL;
    int32_t l_480 = 8L;
    int32_t l_481 = 1L;
    int32_t l_482 = 0L;
    int32_t l_483 = (-7L);
    int32_t l_484 = 0x15A1CCB6L;
    int32_t l_485 = (-1L);
    int32_t l_486 = 1L;
    uint64_t l_487 = 0x75E5504C8EFE7ABCL;
    int i;
    if ((0L == l_413))
    { /* block id: 159 */
        VECTOR(int8_t, 8) l_426 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        uint64_t *l_427 = &p_924->g_229;
        uint32_t *l_428 = &p_924->g_429;
        uint16_t *l_438 = (void*)0;
        uint16_t *l_440 = (void*)0;
        uint16_t *l_441 = (void*)0;
        uint16_t *l_442 = (void*)0;
        uint16_t *l_443[6][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_444 = (-8L);
        uint8_t *l_446 = &p_924->g_303;
        int32_t l_447 = 8L;
        int32_t **l_448[8][1] = {{&p_924->g_112},{&p_924->g_112},{&p_924->g_112},{&p_924->g_112},{&p_924->g_112},{&p_924->g_112},{&p_924->g_112},{&p_924->g_112}};
        int i, j, k;
        l_449 = func_81(((((l_447 &= (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(l_413, (safe_mod_func_uint8_t_u_u((p_62 & ((*l_446) ^= (safe_div_func_int32_t_s_s((*p_924->g_112), (safe_sub_func_uint16_t_u_u(((((*l_427) = (safe_sub_func_int8_t_s_s((!((VECTOR(int8_t, 4))(l_426.s3031)).z), GROUP_DIVERGE(0, 1)))) , (((((*l_428) = p_924->g_179[0]) , ((*p_924->g_395) != p_61)) | (safe_mod_func_int32_t_s_s((0x3056439EL != (((safe_lshift_func_uint8_t_u_u(p_62, ((((l_444 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((0x1289L == p_924->g_comm_values[p_924->tid]) , l_413) , 0x1C78L), p_62)), 5))) > 0xE268L) ^ 2UL) > 0x78562C36E5ABF83BL))) < l_426.s0) > FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10))), l_445[6]))) != p_62)) < p_62), 0xD1ABL)))))), l_426.s7)))) & l_426.s3), p_924->g_167))) >= (-1L)) && p_62) > 0x8D529DF7L), p_924);
        l_449 = func_81((*l_449), p_924);
    }
    else
    { /* block id: 167 */
        uint16_t l_450 = 0x6A76L;
        int32_t *l_468 = &p_924->g_125;
        int32_t *l_469 = &p_924->g_100;
        int32_t *l_470 = &p_924->g_100;
        int32_t *l_471 = (void*)0;
        int32_t *l_472 = &p_924->g_167;
        int32_t *l_473 = (void*)0;
        int32_t *l_475 = (void*)0;
        int32_t *l_476 = &p_924->g_167;
        int32_t *l_477 = &p_924->g_167;
        int32_t *l_478[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        l_450 &= 0x1023BFFEL;
        for (p_924->g_100 = (-11); (p_924->g_100 > 21); p_924->g_100 = safe_add_func_uint16_t_u_u(p_924->g_100, 1))
        { /* block id: 171 */
            int32_t l_455 = (-1L);
            int16_t *l_466[5][10] = {{(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0,(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0},{(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0,(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0},{(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0,(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0},{(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0,(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0},{(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0,(void*)0,&p_924->g_123,&p_924->g_123,&p_924->g_123,(void*)0}};
            int32_t *l_467 = &p_924->g_167;
            int i, j;
            l_467 = func_81(((safe_mul_func_uint16_t_u_u(p_62, (p_924->g_439.s5 = ((((p_62 ^ (l_455 |= p_924->g_152.y)) || ((((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(1L, 0L)).xyxyyyxy, ((VECTOR(int32_t, 16))((((l_455 , (((p_924->g_456 == p_924->g_457[2]) && (p_62 , (safe_mul_func_uint16_t_u_u(0x99C6L, (safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s(l_450, (*p_924->g_112))), 0x5186L)))))) < 1L)) | (*p_924->g_112)) >= p_924->g_429), 0x41674AD9L, ((VECTOR(int32_t, 2))((-8L))), l_450, 0L, 1L, 7L, ((VECTOR(int32_t, 8))((-9L))))).hi))), ((VECTOR(int32_t, 8))((-5L)))))), ((VECTOR(uint32_t, 8))(0x5816AE13L))))).s1 , 3L) ^ p_62)) , l_466[0][3]) != (void*)0)))) != p_924->g_287.z), p_924);
            if (p_62)
                break;
        }
        ++l_487;
    }
    return &p_924->g_112;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_18 p_924->g_16 p_924->g_14 p_924->g_2 p_924->g_21 p_924->g_comm_values p_924->g_100 p_924->g_111 p_924->g_13 p_924->g_73 p_924->g_125 p_924->g_123 p_924->g_112 p_924->g_142 p_924->g_151 p_924->g_152 p_924->g_17 p_924->g_179 p_924->g_167 p_924->g_207 p_924->g_225 p_924->g_227 p_924->g_229 p_924->g_275 p_924->g_287 p_924->g_303 p_924->g_332 p_924->g_338 p_924->g_400 p_924->g_406
 * writes: p_924->g_100 p_924->g_112 p_924->g_123 p_924->g_125 p_924->g_comm_values p_924->g_179 p_924->g_73 p_924->g_167 p_924->g_229 p_924->g_152 p_924->g_225 p_924->g_227 p_924->g_394 p_924->g_142
 */
int8_t  func_65(int8_t * p_66, int32_t  p_67, struct S0 * p_924)
{ /* block id: 22 */
    uint16_t l_88 = 0UL;
    int32_t *l_108[1][4];
    int32_t **l_107[10][3] = {{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]},{&l_108[0][0],&l_108[0][0],&l_108[0][1]}};
    VECTOR(uint64_t, 8) l_360 = (VECTOR(uint64_t, 8))(0xAF679C97A9D75004L, (VECTOR(uint64_t, 4))(0xAF679C97A9D75004L, (VECTOR(uint64_t, 2))(0xAF679C97A9D75004L, 0x4E450C33DC8E1515L), 0x4E450C33DC8E1515L), 0x4E450C33DC8E1515L, 0xAF679C97A9D75004L, 0x4E450C33DC8E1515L);
    int32_t l_372 = 1L;
    uint64_t l_389 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_108[i][j] = (void*)0;
    }
    if (p_924->g_18)
    { /* block id: 23 */
        int8_t *l_72 = &p_924->g_73;
        VECTOR(uint64_t, 2) l_74 = (VECTOR(uint64_t, 2))(0UL, 0x5D4008F4F80CF873L);
        int8_t *l_80 = &p_924->g_73;
        int8_t **l_79[9][1][10] = {{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}},{{&l_72,&l_80,&l_72,&l_72,&l_72,&l_72,&l_72,&l_80,&l_72,&l_72}}};
        int32_t *l_93 = (void*)0;
        uint8_t *l_301 = (void*)0;
        uint8_t *l_302[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_339 = 0x13F643F4L;
        VECTOR(uint8_t, 16) l_357 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
        int32_t l_386 = 0x2B4C1337L;
        int i, j, k;
        if (((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_924->g_152.w = (l_72 == (((!((VECTOR(uint64_t, 2))(l_74.xx)).even) && p_924->g_16) , func_75((p_66 = &p_924->g_73), func_81(((p_67 != ((func_83(((l_88 <= ((l_74.x || (FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10) , (FAKE_DIVERGE(p_924->group_1_offset, get_group_id(1), 10) , ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((p_924->g_14 > p_924->g_2), (((p_924->g_18 , p_924->g_21.s0) , 0x6747B33BL) & 0xE0D328F3L))), 0x60FEL)) >= 1UL)))) | p_924->g_comm_values[p_924->tid])) , l_93), l_88, p_67, &p_924->g_2, p_924) == p_924->g_2) , 0x3A679AE65B8C0B7BL)) , l_74.y), p_924), l_107[7][0], p_924)))), p_924->g_303)), 0xB020L)) == GROUP_DIVERGE(1, 1)))
        { /* block id: 109 */
            int32_t *l_304 = (void*)0;
            int32_t l_319 = 1L;
            uint32_t *l_333[3][5] = {{&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_227[0][0],&p_924->g_227[0][0]},{&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_227[0][0],&p_924->g_227[0][0]},{&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_227[0][0],&p_924->g_227[0][0]}};
            int i, j;
            l_304 = l_304;
            if (((safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_924->g_152.y, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((((l_319 <= p_67) , (safe_lshift_func_uint8_t_u_u((p_67 | (safe_mul_func_uint8_t_u_u(p_67, p_924->g_303))), 7))) <= (safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(4294967295UL, 0x8E0F1249L, 5UL, 0xC5EC6427L)).x, (safe_sub_func_uint32_t_u_u(p_67, (safe_div_func_uint16_t_u_u((((**p_924->g_111) & (p_924->g_179[1] ^= ((VECTOR(uint32_t, 8))(p_924->g_332.xxxxxyyy)).s7)) || (l_339 = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((((void*)0 == p_924->g_338) != p_67) , p_67), 0x59CAL)) != p_924->g_151.x), (*p_66))))), 1L)))))) , p_67), p_924->g_2))), 11)) == 0xDD77574EFB4D8419L), 4)), 0)))), p_924->g_303)), p_924->g_21.s1)) != p_67) , (-5L)) < p_67), 3)) <= 1L))
            { /* block id: 113 */
                uint8_t l_340 = 0xD9L;
                int32_t l_343 = (-1L);
                uint32_t *l_365[10] = {&p_924->g_179[0],&p_924->g_227[0][0],&p_924->g_179[0],&p_924->g_227[0][0],&p_924->g_179[0],&p_924->g_179[0],&p_924->g_227[0][0],&p_924->g_179[0],&p_924->g_227[0][0],&p_924->g_179[0]};
                int32_t l_366[4][5] = {{0x11D7CBC3L,1L,0x11D7CBC3L,0x11D7CBC3L,1L},{0x11D7CBC3L,1L,0x11D7CBC3L,0x11D7CBC3L,1L},{0x11D7CBC3L,1L,0x11D7CBC3L,0x11D7CBC3L,1L},{0x11D7CBC3L,1L,0x11D7CBC3L,0x11D7CBC3L,1L}};
                VECTOR(int32_t, 4) l_367 = (VECTOR(int32_t, 4))(0x77919F70L, (VECTOR(int32_t, 2))(0x77919F70L, (-3L)), (-3L));
                int i, j;
                l_319 |= (l_340 = p_67);
                l_343 = (safe_add_func_uint16_t_u_u(l_340, p_67));
                for (p_67 = 0; (p_67 >= 22); p_67 = safe_add_func_uint32_t_u_u(p_67, 1))
                { /* block id: 119 */
                    VECTOR(uint8_t, 4) l_356 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x92L), 0x92L);
                    int16_t *l_379 = &p_924->g_123;
                    uint32_t l_390 = 0xFB4C9C37L;
                    int i;
                    for (l_340 = 0; (l_340 >= 1); l_340++)
                    { /* block id: 122 */
                        VECTOR(uint8_t, 2) l_355 = (VECTOR(uint8_t, 2))(0UL, 8UL);
                        VECTOR(int32_t, 8) l_368 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x0129159FL), 0x0129159FL), 0x0129159FL, 3L, 0x0129159FL);
                        int i;
                        l_368.s7 = (safe_unary_minus_func_int64_t_s(((l_343 &= (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_355.yyxxyxyy)).s0, 5)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(255UL, 0xFFL)).yxxx, ((VECTOR(uint8_t, 4))(l_356.xwww)), ((VECTOR(uint8_t, 4))(0x37L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_357.s2c)))), 0UL))))))).y)), 1))) == ((l_356.z , (safe_mod_func_int8_t_s_s((((VECTOR(uint64_t, 8))(l_360.s13436602)).s2 , (safe_sub_func_uint8_t_u_u(((*p_66) , (p_67 > l_356.w)), ((0x407CL | (0x2725597A9B0325AFL > (safe_mul_func_int8_t_s_s((l_367.x = (((l_366[1][1] = ((void*)0 == l_365[3])) | 0x8EL) & p_924->g_275.s5)), 0x1AL)))) != p_924->g_comm_values[p_924->tid])))), (*p_66)))) , p_67))));
                    }
                    for (l_340 = 27; (l_340 != 17); l_340 = safe_sub_func_uint8_t_u_u(l_340, 6))
                    { /* block id: 130 */
                        int16_t l_371 = (-1L);
                        l_372 = l_371;
                    }
                    l_319 = (l_390 = (~(safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s(((*l_379) = (p_924->g_17 | (*p_66))), (p_67 | 9L))) | (l_356.z && ((safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_67, l_386)), (safe_mul_func_int8_t_s_s((*p_66), l_389)))), 0x8C289B29L)) && l_366[0][3]))) < 1L), (*p_66))), 12))));
                }
            }
            else
            { /* block id: 137 */
                return p_924->g_229;
            }
        }
        else
        { /* block id: 140 */
            uint8_t l_391 = 0UL;
            int8_t ***l_392 = &l_79[4][0][8];
            int8_t ****l_393 = (void*)0;
            int32_t l_397[7][3] = {{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL},{0x26BB654EL,0x26BB654EL,0x26BB654EL}};
            int i, j;
            l_391 = p_67;
            l_397[5][1] = ((p_924->g_394 = l_392) != (void*)0);
        }
    }
    else
    { /* block id: 145 */
        uint32_t *l_399 = (void*)0;
        uint32_t **l_398 = &l_399;
        int32_t l_401 = 1L;
        int16_t *l_402 = (void*)0;
        int16_t *l_403 = &p_924->g_123;
        int16_t *l_404 = (void*)0;
        int16_t *l_405[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        (*p_924->g_112) = 0x24374E7CL;
        if ((((*l_398) = &p_924->g_227[0][0]) != ((((VECTOR(uint8_t, 8))(p_924->g_400.s0a1c2a10)).s4 <= l_401) , func_81(((p_924->g_142.z = ((*l_403) = p_924->g_287.x)) < ((VECTOR(uint16_t, 8))(p_924->g_406.s22747433)).s6), p_924))))
        { /* block id: 150 */
            int32_t *l_407 = &l_401;
            l_407 = (*p_924->g_111);
        }
        else
        { /* block id: 152 */
            (*p_924->g_112) ^= p_67;
        }
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_100 p_924->g_111 p_924->g_13 p_924->g_73 p_924->g_125 p_924->g_comm_values p_924->g_123 p_924->g_112 p_924->g_18 p_924->g_142 p_924->g_151 p_924->g_152 p_924->g_17 p_924->g_179 p_924->g_21 p_924->g_167 p_924->g_207 p_924->g_225 p_924->g_227 p_924->g_229 p_924->g_275 p_924->g_287
 * writes: p_924->g_100 p_924->g_112 p_924->g_123 p_924->g_125 p_924->g_comm_values p_924->g_179 p_924->g_73 p_924->g_167 p_924->g_229 p_924->g_152 p_924->g_225 p_924->g_227
 */
int8_t * func_75(int8_t * p_76, int32_t * p_77, int32_t ** p_78, struct S0 * p_924)
{ /* block id: 38 */
    int8_t l_126 = (-1L);
    VECTOR(int32_t, 4) l_127 = (VECTOR(int32_t, 4))(0x14E1185EL, (VECTOR(int32_t, 2))(0x14E1185EL, 7L), 7L);
    int32_t l_133 = 0x0C6BBB48L;
    VECTOR(int16_t, 8) l_143 = (VECTOR(int16_t, 8))(0x5376L, (VECTOR(int16_t, 4))(0x5376L, (VECTOR(int16_t, 2))(0x5376L, 1L), 1L), 1L, 0x5376L, 1L);
    int64_t *l_149[1];
    int8_t *l_189 = &l_126;
    int8_t **l_188 = &l_189;
    int8_t ***l_187[6][8] = {{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0},{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0},{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0},{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0},{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0},{&l_188,&l_188,(void*)0,&l_188,&l_188,&l_188,&l_188,(void*)0}};
    uint16_t l_199[1][1][1];
    int8_t l_249 = 1L;
    uint32_t l_272[10] = {2UL,1UL,2UL,2UL,1UL,2UL,2UL,1UL,2UL,2UL};
    int16_t l_284[10][5][5] = {{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}},{{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L},{(-6L),0x6BD7L,2L,0L,2L}}};
    uint32_t *l_288 = &p_924->g_227[0][0];
    uint32_t *l_289[2][2][10] = {{{&p_924->g_179[2],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[2],&p_924->g_179[2]},{&p_924->g_179[2],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[2],&p_924->g_179[2]}},{{&p_924->g_179[2],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[2],&p_924->g_179[2]},{&p_924->g_179[2],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[0],&p_924->g_179[0],(void*)0,&p_924->g_179[2],&p_924->g_179[2]}}};
    int16_t *l_298 = &p_924->g_123;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_149[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_199[i][j][k] = 0x8ABCL;
        }
    }
    for (p_924->g_100 = (-30); (p_924->g_100 == 24); p_924->g_100++)
    { /* block id: 41 */
        int32_t l_117 = 0x2F87FBE7L;
        int8_t *l_121 = &p_924->g_73;
        int8_t **l_120[9];
        int32_t l_122 = 0x628BE021L;
        int32_t *l_124 = &p_924->g_125;
        int64_t *l_128[10][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t **l_130 = &l_121;
        int8_t ***l_129 = &l_130;
        int8_t **l_131 = &l_121;
        int32_t *l_132 = (void*)0;
        int32_t l_135[9][6] = {{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL},{0x193BC0FFL,(-5L),0x193BC0FFL,0x193BC0FFL,(-5L),0x193BC0FFL}};
        VECTOR(uint8_t, 2) l_136 = (VECTOR(uint8_t, 2))(0x73L, 248UL);
        uint32_t l_139[4] = {0x2C3757FDL,0x2C3757FDL,0x2C3757FDL,0x2C3757FDL};
        uint16_t l_161 = 65535UL;
        uint16_t l_162 = 0x4D30L;
        VECTOR(int32_t, 8) l_204 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L);
        uint32_t l_226 = 0UL;
        int16_t l_232 = 1L;
        VECTOR(uint64_t, 4) l_248 = (VECTOR(uint64_t, 4))(0xCFDC6233CFE3663FL, (VECTOR(uint64_t, 2))(0xCFDC6233CFE3663FL, 18446744073709551615UL), 18446744073709551615UL);
        VECTOR(uint8_t, 4) l_256 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 1UL), 1UL);
        VECTOR(int64_t, 4) l_262 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x153C488983DB02AAL), 0x153C488983DB02AAL);
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_120[i] = &l_121;
        (*p_924->g_111) = ((*p_78) = &p_924->g_18);
        if (((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x08D82644L, (-2L))), (((void*)0 != &p_924->g_112) , (p_924->g_13 , (safe_rshift_func_int16_t_s_u((((((l_127.x = (l_117 > (((*l_124) |= ((*p_76) , (p_924->g_123 = (l_122 |= (safe_div_func_uint16_t_u_u((l_120[5] == &p_76), 65534UL)))))) == (((*l_129) = (((p_924->g_comm_values[p_924->tid] |= (((l_126 &= 0x5CL) != l_127.w) , l_127.y)) >= GROUP_DIVERGE(0, 1)) , (void*)0)) != l_131)))) >= p_924->g_13) || GROUP_DIVERGE(0, 1)) & l_133) , p_924->g_123), 3)))), 0x065C7AE3L, (*p_924->g_112), 0x2ECB7113L, 0x1646DB42L, 0x2F300D2EL)).s1067057635603357, ((VECTOR(int32_t, 16))(8L))))).even, ((VECTOR(int32_t, 8))(4L)), ((VECTOR(int32_t, 8))((-1L)))))).s6)
        { /* block id: 51 */
            return p_76;
        }
        else
        { /* block id: 53 */
            int32_t *l_134[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            --l_136.x;
        }
        if (l_139[0])
        { /* block id: 56 */
            int64_t *l_148 = (void*)0;
            VECTOR(uint16_t, 2) l_150 = (VECTOR(uint16_t, 2))(7UL, 1UL);
            int32_t l_169 = 0x737323DDL;
            int i;
            if ((*p_77))
                break;
            (*p_78) = func_81((((safe_div_func_int32_t_s_s((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x594FL, 2L, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x48A3L, 0x2261L)))), ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_924->g_142.yyyx)))).xzzwwwyx, ((VECTOR(int16_t, 8))(1L, 1L, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_143.s34707360)).s33, ((VECTOR(int16_t, 16))(7L, ((VECTOR(int16_t, 2))((-9L), 6L)), (-6L), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((FAKE_DIVERGE(p_924->group_2_offset, get_group_id(2), 10) ^ (((((VECTOR(uint16_t, 8))((l_148 == l_149[0]), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_150.xyxx)))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(65531UL, 65530UL, ((VECTOR(uint16_t, 4))(0x54C8L, 0x8FD4L, 0x2E1EL, 0x718CL)), ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(65533UL, 0x7239L)).xyyxyxxyyyxyxyyx, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x71L, 0UL)))))), 0UL, 0xF6L)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(7UL, 0x36L)), ((VECTOR(uint8_t, 4))(p_924->g_151.xyyx)).lo))), 255UL, 0x23L)).hi, ((VECTOR(uint8_t, 4))(p_924->g_152.xywz)).odd))).lo, ((safe_rshift_func_int8_t_s_u((l_161 |= ((((l_150.y || ((p_924->g_125 , (safe_lshift_func_int8_t_s_s((*p_76), 4))) >= l_150.y)) || l_150.y) & ((safe_mul_func_uint8_t_u_u(l_150.x, l_127.z)) < p_924->g_17)) || (*l_124))), 7)) ^ p_924->g_142.w), FAKE_DIVERGE(p_924->local_1_offset, get_local_id(1), 10), 255UL, p_924->g_comm_values[p_924->tid], ((VECTOR(uint8_t, 2))(9UL)), 255UL)).s3260641144303313, ((VECTOR(uint8_t, 16))(0x8AL)))))))))))).hi, ((VECTOR(uint16_t, 8))(65535UL))))).lo, ((VECTOR(uint16_t, 4))(65527UL)), ((VECTOR(uint16_t, 4))(0x1545L))))), p_924->g_18, 0x4213L, ((VECTOR(uint16_t, 2))(0UL)), 0x60C2L, 0x3A79L)).s7f, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(65532UL))))).yxyxyxyxyyxxyxyx)))).s33)), 65526UL)).s0 & p_924->g_152.x) <= 0x5FL) , l_162)), 65535UL)), (*l_124))), ((VECTOR(int16_t, 8))(0x0132L)), (-7L), 0L, 0x7615L)).sae))).hi, 0x5EBBL, 0x289AL, ((VECTOR(int16_t, 2))((-1L))), 1L))))).s56))), 0x35FFL)), ((VECTOR(int16_t, 4))(0x33D9L))))), 0x5F1DL, 0x5A78L)).odd)).x <= l_143.s6), 0xDD2C8B66L)) ^ l_150.y) == (*p_76)), p_924);
            for (l_161 = 0; (l_161 == 60); ++l_161)
            { /* block id: 62 */
                VECTOR(int32_t, 8) l_165 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L));
                int32_t *l_168[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_178 = &p_924->g_179[0];
                int i;
                l_169 = ((*l_124) &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_165.s35145657)).lo)).x);
                (*l_124) = (safe_mod_func_int32_t_s_s((**p_924->g_111), ((VECTOR(int32_t, 16))(((safe_add_func_uint8_t_u_u(l_150.y, ((!((safe_sub_func_uint64_t_u_u(((p_924->g_142.x > 0xADL) == p_924->g_123), (safe_add_func_int32_t_s_s((*p_924->g_112), (((++(*l_178)) , ((*l_178)++)) >= (safe_lshift_func_int8_t_s_u(((*l_121) &= p_924->g_21.s5), 5))))))) || (safe_unary_minus_func_uint64_t_u((((void*)0 == l_187[0][5]) == 0x7CB9L))))) == l_150.x))) ^ 0x7FL), (*p_924->g_112), 1L, 0x002B8253L, ((VECTOR(int32_t, 2))(0x6B486784L)), (*p_924->g_112), ((VECTOR(int32_t, 8))((-7L))), (-8L))).s8));
            }
        }
        else
        { /* block id: 70 */
            int16_t l_190[10];
            int32_t *l_191 = (void*)0;
            int32_t *l_192 = &l_133;
            int32_t *l_193 = (void*)0;
            int32_t *l_194 = (void*)0;
            int32_t *l_195 = &l_135[3][5];
            int32_t *l_196[2];
            int32_t l_197 = 2L;
            int16_t l_198 = (-7L);
            VECTOR(int32_t, 4) l_205 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L);
            VECTOR(int32_t, 4) l_212 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x590DFAA9L), 0x590DFAA9L);
            uint64_t l_235 = 18446744073709551615UL;
            VECTOR(uint8_t, 8) l_257 = (VECTOR(uint8_t, 8))(0xE1L, (VECTOR(uint8_t, 4))(0xE1L, (VECTOR(uint8_t, 2))(0xE1L, 7UL), 7UL), 7UL, 0xE1L, 7UL);
            int16_t l_263 = 0x6733L;
            uint32_t l_270 = 0x94801A03L;
            int64_t *l_271 = (void*)0;
            int i;
            for (i = 0; i < 10; i++)
                l_190[i] = 0x4F32L;
            for (i = 0; i < 2; i++)
                l_196[i] = &l_122;
            (*l_124) &= ((*p_76) ^ l_190[9]);
            --l_199[0][0][0];
            for (p_924->g_167 = 10; (p_924->g_167 == (-12)); p_924->g_167 = safe_sub_func_int32_t_s_s(p_924->g_167, 1))
            { /* block id: 75 */
                VECTOR(int32_t, 8) l_206 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 4L), 4L), 4L, (-4L), 4L);
                uint64_t *l_228 = &p_924->g_229;
                uint8_t *l_230 = (void*)0;
                uint8_t *l_231[7][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                l_232 &= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_204.s74457602)).s51)))).xxyxyyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_205.wz)), ((VECTOR(int32_t, 4))(0x689FBD98L, 5L, 0x6782D485L, 0x435CB93DL)).hi))), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(l_206.s17)).xxxyyxyy, ((VECTOR(int32_t, 16))(0x00C49828L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_924->g_207.s0661)).hi)), 0L, (((((p_924->g_152.w = (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_212.yxyxyzwyxxyzywxx)).s1, ((*l_192) = ((safe_sub_func_uint16_t_u_u((((((*l_228) = (safe_mul_func_uint16_t_u_u(((((-3L) ^ (safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(((((l_127.z , p_924->g_17) , 0x6FL) | ((l_206.s4 == (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((*l_124), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x41C926BBL, 0x29FD17ABL)).yyxyyyyy, ((VECTOR(int32_t, 4))(p_924->g_225.yxxy)).wxywyxxy, ((VECTOR(int32_t, 2))(0x4175DB8EL, 0x1A800618L)).xyyxyyyx))).s03)).odd <= ((p_924->g_142.y != p_924->g_179[0]) | (((VECTOR(int16_t, 8))(0L, 9L, 1L, 0x6ACBL, p_924->g_179[0], 0x5070L, 0x147FL, 6L)).s5 | 0xD5F9L))))), l_226))) && l_143.s5)) && 0UL), (*p_924->g_112))) , p_924->g_227[0][0]), 0))) != p_924->g_142.y) , 0xB113L), l_127.y))) , 0x53L) , l_127.y) , 0xD6B6L), p_924->g_142.w)) & 0x3770F6266CFC2903L)))), 7))) < 0x3CL) & 0x3BF8L) | p_924->g_100) ^ l_199[0][0][0]), 0x5D563438L, 0x109C929BL, (*p_924->g_112), 0x5AB276F4L, 0x6C583D23L, 0x1E627244L, 5L, 0x5C73FE96L, 0x766348C4L, (-1L), 0x4D111A3AL)).odd))))), ((VECTOR(int32_t, 8))(0x2BCB8C2FL))))).s50))), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(4L))))).xxyxyxyyxxyyxxxx, ((VECTOR(int32_t, 16))(1L))))).sff03)).yzyxyzzy, ((VECTOR(int32_t, 8))(0L))))), ((VECTOR(int32_t, 8))(0x3EB220B9L))))).s5;
            }
            if (((safe_mul_func_int16_t_s_s((((((*l_124) > (l_235 >= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(7UL, 0x30L)).hi, (!(((((safe_rshift_func_uint8_t_u_u(p_924->g_142.z, 1)) != ((l_133 = (l_127.x = (!(safe_mul_func_uint16_t_u_u((l_149[0] != (l_127.w , &l_235)), (((safe_add_func_uint32_t_u_u(((((18446744073709551613UL != ((p_924->g_207.s7 ^ 0x378CL) != 0xE8986B258F4B73A1L)) >= 0xC167729FL) > l_126) , 0x349BFF04L), (*p_77))) == p_924->g_225.y) > p_924->g_21.s4)))))) & GROUP_DIVERGE(1, 1))) , p_924->g_207.s4) && p_924->g_227[0][0]) | p_924->g_21.s1)))), p_924->g_100)))) <= 0UL) == p_924->g_229) | p_924->g_152.x), 0xF413L)) == p_924->g_225.x))
            { /* block id: 83 */
                int8_t l_254 = 4L;
                int8_t ***l_255 = (void*)0;
                p_924->g_225.x &= (safe_sub_func_int8_t_s_s((((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((VECTOR(uint64_t, 16))(l_248.yxyywyyyxzzwyyyx)).sf , (((*l_124) ^= ((*l_195) = l_249)) < (((*l_192) = (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_254 && ((l_255 != (void*)0) != p_924->g_207.s2)), (((VECTOR(uint8_t, 4))(0xB4L, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(l_256.zwwxzxwzzxywyxzx)).sbc, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_257.s0601024707547575)).sd8)), 0x70L, 250UL)).xwyxwyxzwwzzwyzz, ((VECTOR(uint8_t, 16))(0xCFL, (safe_div_func_uint64_t_u_u(p_924->g_229, p_924->g_100)), 0x78L, l_133, 0x66L, ((VECTOR(uint8_t, 2))(8UL)), 8UL, 0xD5L, 0x07L, 0x04L, ((VECTOR(uint8_t, 2))(7UL)), ((VECTOR(uint8_t, 2))(0x58L)), 0xB2L)), ((VECTOR(uint8_t, 16))(0xFAL))))).s38))), 1UL)).y , l_254))), l_254))) ^ GROUP_DIVERGE(0, 1)))), ((VECTOR(int16_t, 2))(0x695CL)), 0x2DAAL)), 5L, 0x4D89L, (-5L), (-1L))).s26)).yyyy)), (*l_124), (-8L), 0x50F3L, 9L)))).s7417040572715040, ((VECTOR(int16_t, 16))(3L)), ((VECTOR(int16_t, 16))(0x34FFL))))).s4 | l_199[0][0][0]), l_254));
                (*l_195) = (l_127.y ^= ((*l_124) &= (**p_924->g_111)));
            }
            else
            { /* block id: 91 */
                int64_t *l_273 = (void*)0;
                int32_t l_274 = (-7L);
                (*l_124) |= ((*l_195) &= (safe_rshift_func_int8_t_s_s(p_924->g_142.w, 5)));
                (*p_78) = (((void*)0 == l_128[2][1][1]) , func_81((((((((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0L, 0x39972AAAE91A6330L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(l_262.xxwywwwyxyywywwz)).s1c, (int64_t)l_263))))), 0x4CE11EB25D7F5C1EL, ((safe_lshift_func_int16_t_s_s((*l_192), 4)) != (safe_add_func_int64_t_s_s(((((VECTOR(uint8_t, 4))((((*p_77) && (l_199[0][0][0] < (l_270 | (*l_192)))) > (l_128[7][2][1] != l_271)), GROUP_DIVERGE(0, 1), 0x48L, 255UL)).z || (*l_195)) >= FAKE_DIVERGE(p_924->group_0_offset, get_group_id(0), 10)), FAKE_DIVERGE(p_924->local_1_offset, get_local_id(1), 10)))), l_272[6], 0x03098027E449E9A4L, p_924->g_18, ((VECTOR(int64_t, 2))(0x4BB2C23905B0FB90L)), ((VECTOR(int64_t, 4))((-1L))), 0x19C51D2979C5DD50L)).even)).s52)).yyyx, ((VECTOR(int64_t, 4))(0x0B370B47D4AAA910L)), ((VECTOR(int64_t, 4))((-1L)))))).x && 0xAA342D9FF21F37A3L) & (*l_192)) , l_271) != l_273) , l_274), p_924));
            }
        }
        (*l_124) = ((*l_188) == (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_924->g_275.s0011)).xwzwzxzy)).s7 , (*l_188)));
    }
    if (((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*l_189) = l_199[0][0][0]), (((l_143.s2 == (safe_add_func_uint16_t_u_u(1UL, (((safe_mod_func_uint8_t_u_u(l_284[2][2][2], (safe_div_func_int64_t_s_s(((((VECTOR(int32_t, 2))((-1L), 0x747E2122L)).odd != ((l_127.x = ((*l_288) = ((VECTOR(uint32_t, 8))(p_924->g_287.wzywzzzw)).s5)) || (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_924->global_2_offset, get_global_id(2), 10), 1)), ((-8L) < (((safe_mod_func_int32_t_s_s(0x5DB7F7D2L, (l_127.z & 0xC89F45DEL))) ^ (((*l_298) = (p_924->g_152.z & l_199[0][0][0])) <= l_133)) != l_199[0][0][0])))))) , l_133), l_284[5][4][4])))) | l_249) , l_284[2][2][2])))) & l_272[6]) , 0x4BL))), p_924->g_21.s6)) , (**p_924->g_111)))
    { /* block id: 103 */
        int8_t *l_299 = &l_126;
        return p_76;
    }
    else
    { /* block id: 105 */
        int8_t *l_300 = (void*)0;
        return l_300;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_81(int8_t  p_82, struct S0 * p_924)
{ /* block id: 34 */
    int32_t *l_98 = &p_924->g_18;
    int32_t **l_97 = &l_98;
    int32_t *l_99 = &p_924->g_100;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = &p_924->g_100;
    int32_t *l_103 = (void*)0;
    uint32_t l_104 = 4294967287UL;
    (*l_97) = (void*)0;
    l_104--;
    return &p_924->g_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_924->g_16
 * writes:
 */
int8_t  func_83(int32_t * p_84, uint32_t  p_85, int16_t  p_86, int32_t * p_87, struct S0 * p_924)
{ /* block id: 25 */
    if ((atomic_inc(&p_924->g_atomic_input[82 * get_linear_group_id() + 28]) == 9))
    { /* block id: 27 */
        int64_t l_94 = 0x15F2429B40CD912EL;
        uint64_t l_95 = 0x71CA78AC094E546FL;
        int16_t l_96 = 0x0957L;
        l_96 &= (l_95 = l_94);
        unsigned int result = 0;
        result += l_94;
        result += l_95;
        result += l_96;
        atomic_add(&p_924->g_special_values[82 * get_linear_group_id() + 28], result);
    }
    else
    { /* block id: 30 */
        (1 + 1);
    }
    return p_924->g_16;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S0 c_925;
    struct S0* p_924 = &c_925;
    struct S0 c_926 = {
        (-8L), // p_924->g_2
        0x53380D42L, // p_924->g_13
        0x403E1FE0L, // p_924->g_14
        0x02C19944L, // p_924->g_15
        0x0B5C7B12L, // p_924->g_16
        0x5FE8E230L, // p_924->g_17
        (-1L), // p_924->g_18
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x29A16D6AL), 0x29A16D6AL), 0x29A16D6AL, 1L, 0x29A16D6AL), // p_924->g_21
        (VECTOR(int8_t, 2))(0x11L, 0x13L), // p_924->g_58
        0x4EL, // p_924->g_73
        1L, // p_924->g_100
        &p_924->g_100, // p_924->g_112
        &p_924->g_112, // p_924->g_111
        0x36BBL, // p_924->g_123
        (-2L), // p_924->g_125
        (VECTOR(int16_t, 4))(0x5968L, (VECTOR(int16_t, 2))(0x5968L, 8L), 8L), // p_924->g_142
        (VECTOR(uint8_t, 2))(0x8AL, 0x89L), // p_924->g_151
        (VECTOR(uint8_t, 4))(0xD4L, (VECTOR(uint8_t, 2))(0xD4L, 0x2FL), 0x2FL), // p_924->g_152
        0x74E3E46FL, // p_924->g_167
        {{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}},{{(void*)0,&p_924->g_100,&p_924->g_100},{(void*)0,&p_924->g_100,&p_924->g_100}}}, // p_924->g_166
        {4294967292UL,4294967292UL,4294967292UL,4294967292UL}, // p_924->g_179
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x575D5C81L), 0x575D5C81L), 0x575D5C81L, 0L, 0x575D5C81L), // p_924->g_207
        (VECTOR(int32_t, 2))(1L, 1L), // p_924->g_225
        {{0xCBB3BA1BL,0xCBB3BA1BL}}, // p_924->g_227
        4UL, // p_924->g_229
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xB728A34CL), 0xB728A34CL), 0xB728A34CL, 4294967295UL, 0xB728A34CL), // p_924->g_275
        (VECTOR(uint32_t, 4))(0x27CF19DAL, (VECTOR(uint32_t, 2))(0x27CF19DAL, 4294967295UL), 4294967295UL), // p_924->g_287
        0xF3L, // p_924->g_303
        (VECTOR(uint32_t, 2))(0xD4B7B306L, 5UL), // p_924->g_332
        (void*)0, // p_924->g_338
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_924->g_396
        &p_924->g_396[2], // p_924->g_395
        &p_924->g_395, // p_924->g_394
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x6FL), 0x6FL), 0x6FL, 255UL, 0x6FL, (VECTOR(uint8_t, 2))(255UL, 0x6FL), (VECTOR(uint8_t, 2))(255UL, 0x6FL), 255UL, 0x6FL, 255UL, 0x6FL), // p_924->g_400
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x6B70L), 0x6B70L), 0x6B70L, 0UL, 0x6B70L), // p_924->g_406
        0xE2E3E7C1L, // p_924->g_429
        (VECTOR(uint16_t, 8))(0xCA87L, (VECTOR(uint16_t, 4))(0xCA87L, (VECTOR(uint16_t, 2))(0xCA87L, 0x1649L), 0x1649L), 0x1649L, 0xCA87L, 0x1649L), // p_924->g_439
        (void*)0, // p_924->g_456
        0x523138D25DF6681AL, // p_924->g_458
        0x5F3DEA57FB35ECB3L, // p_924->g_459
        {&p_924->g_459,(void*)0,&p_924->g_459,&p_924->g_459,(void*)0,&p_924->g_459,&p_924->g_459,(void*)0,&p_924->g_459,&p_924->g_459}, // p_924->g_457
        0x644DEAF4L, // p_924->g_474
        (void*)0, // p_924->g_490
        &p_924->g_18, // p_924->g_492
        {{{&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492}},{{&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492}},{{&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492}},{{&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492,&p_924->g_492}}}, // p_924->g_491
        {{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}},{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}},{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}},{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}},{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}},{{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL},{0x117560F22255B519L,0x581C0C859E247A07L,0xE4FADA6E9E7F51BDL}}}, // p_924->g_509
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3093F76E509290C9L), 0x3093F76E509290C9L), 0x3093F76E509290C9L, 18446744073709551615UL, 0x3093F76E509290C9L), // p_924->g_540
        (VECTOR(uint64_t, 8))(0xCA78C7D7D4119A12L, (VECTOR(uint64_t, 4))(0xCA78C7D7D4119A12L, (VECTOR(uint64_t, 2))(0xCA78C7D7D4119A12L, 0xBDE20D697AB9D409L), 0xBDE20D697AB9D409L), 0xBDE20D697AB9D409L, 0xCA78C7D7D4119A12L, 0xBDE20D697AB9D409L), // p_924->g_636
        (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 1UL), 1UL), // p_924->g_718
        (VECTOR(uint16_t, 16))(0x0DE0L, (VECTOR(uint16_t, 4))(0x0DE0L, (VECTOR(uint16_t, 2))(0x0DE0L, 0x99B2L), 0x99B2L), 0x99B2L, 0x0DE0L, 0x99B2L, (VECTOR(uint16_t, 2))(0x0DE0L, 0x99B2L), (VECTOR(uint16_t, 2))(0x0DE0L, 0x99B2L), 0x0DE0L, 0x99B2L, 0x0DE0L, 0x99B2L), // p_924->g_731
        0L, // p_924->g_734
        0xFD4813E9L, // p_924->g_736
        (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 254UL), 254UL), 254UL, 8UL, 254UL), // p_924->g_741
        0x948BL, // p_924->g_774
        1L, // p_924->g_776
        {&p_924->g_125,&p_924->g_125}, // p_924->g_781
        &p_924->g_394, // p_924->g_809
        (VECTOR(int16_t, 2))(0x443CL, 0x2D45L), // p_924->g_818
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x1BA88CD3L), 0x1BA88CD3L), // p_924->g_848
        (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L), // p_924->g_849
        (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L), // p_924->g_850
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), 65529UL), // p_924->g_877
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xA922L), 0xA922L), 0xA922L, 65535UL, 0xA922L, (VECTOR(uint16_t, 2))(65535UL, 0xA922L), (VECTOR(uint16_t, 2))(65535UL, 0xA922L), 65535UL, 0xA922L, 65535UL, 0xA922L), // p_924->g_879
        (VECTOR(uint16_t, 2))(1UL, 0x252CL), // p_924->g_880
        &p_924->g_112, // p_924->g_888
        255UL, // p_924->g_892
        0, // p_924->v_collective
        sequence_input[get_global_id(0)], // p_924->global_0_offset
        sequence_input[get_global_id(1)], // p_924->global_1_offset
        sequence_input[get_global_id(2)], // p_924->global_2_offset
        sequence_input[get_local_id(0)], // p_924->local_0_offset
        sequence_input[get_local_id(1)], // p_924->local_1_offset
        sequence_input[get_local_id(2)], // p_924->local_2_offset
        sequence_input[get_group_id(0)], // p_924->group_0_offset
        sequence_input[get_group_id(1)], // p_924->group_1_offset
        sequence_input[get_group_id(2)], // p_924->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_924->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_925 = c_926;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_924);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_924->g_2, "p_924->g_2", print_hash_value);
    transparent_crc(p_924->g_13, "p_924->g_13", print_hash_value);
    transparent_crc(p_924->g_14, "p_924->g_14", print_hash_value);
    transparent_crc(p_924->g_15, "p_924->g_15", print_hash_value);
    transparent_crc(p_924->g_16, "p_924->g_16", print_hash_value);
    transparent_crc(p_924->g_17, "p_924->g_17", print_hash_value);
    transparent_crc(p_924->g_18, "p_924->g_18", print_hash_value);
    transparent_crc(p_924->g_21.s0, "p_924->g_21.s0", print_hash_value);
    transparent_crc(p_924->g_21.s1, "p_924->g_21.s1", print_hash_value);
    transparent_crc(p_924->g_21.s2, "p_924->g_21.s2", print_hash_value);
    transparent_crc(p_924->g_21.s3, "p_924->g_21.s3", print_hash_value);
    transparent_crc(p_924->g_21.s4, "p_924->g_21.s4", print_hash_value);
    transparent_crc(p_924->g_21.s5, "p_924->g_21.s5", print_hash_value);
    transparent_crc(p_924->g_21.s6, "p_924->g_21.s6", print_hash_value);
    transparent_crc(p_924->g_21.s7, "p_924->g_21.s7", print_hash_value);
    transparent_crc(p_924->g_58.x, "p_924->g_58.x", print_hash_value);
    transparent_crc(p_924->g_58.y, "p_924->g_58.y", print_hash_value);
    transparent_crc(p_924->g_73, "p_924->g_73", print_hash_value);
    transparent_crc(p_924->g_100, "p_924->g_100", print_hash_value);
    transparent_crc(p_924->g_123, "p_924->g_123", print_hash_value);
    transparent_crc(p_924->g_125, "p_924->g_125", print_hash_value);
    transparent_crc(p_924->g_142.x, "p_924->g_142.x", print_hash_value);
    transparent_crc(p_924->g_142.y, "p_924->g_142.y", print_hash_value);
    transparent_crc(p_924->g_142.z, "p_924->g_142.z", print_hash_value);
    transparent_crc(p_924->g_142.w, "p_924->g_142.w", print_hash_value);
    transparent_crc(p_924->g_151.x, "p_924->g_151.x", print_hash_value);
    transparent_crc(p_924->g_151.y, "p_924->g_151.y", print_hash_value);
    transparent_crc(p_924->g_152.x, "p_924->g_152.x", print_hash_value);
    transparent_crc(p_924->g_152.y, "p_924->g_152.y", print_hash_value);
    transparent_crc(p_924->g_152.z, "p_924->g_152.z", print_hash_value);
    transparent_crc(p_924->g_152.w, "p_924->g_152.w", print_hash_value);
    transparent_crc(p_924->g_167, "p_924->g_167", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_924->g_179[i], "p_924->g_179[i]", print_hash_value);

    }
    transparent_crc(p_924->g_207.s0, "p_924->g_207.s0", print_hash_value);
    transparent_crc(p_924->g_207.s1, "p_924->g_207.s1", print_hash_value);
    transparent_crc(p_924->g_207.s2, "p_924->g_207.s2", print_hash_value);
    transparent_crc(p_924->g_207.s3, "p_924->g_207.s3", print_hash_value);
    transparent_crc(p_924->g_207.s4, "p_924->g_207.s4", print_hash_value);
    transparent_crc(p_924->g_207.s5, "p_924->g_207.s5", print_hash_value);
    transparent_crc(p_924->g_207.s6, "p_924->g_207.s6", print_hash_value);
    transparent_crc(p_924->g_207.s7, "p_924->g_207.s7", print_hash_value);
    transparent_crc(p_924->g_225.x, "p_924->g_225.x", print_hash_value);
    transparent_crc(p_924->g_225.y, "p_924->g_225.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_924->g_227[i][j], "p_924->g_227[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_924->g_229, "p_924->g_229", print_hash_value);
    transparent_crc(p_924->g_275.s0, "p_924->g_275.s0", print_hash_value);
    transparent_crc(p_924->g_275.s1, "p_924->g_275.s1", print_hash_value);
    transparent_crc(p_924->g_275.s2, "p_924->g_275.s2", print_hash_value);
    transparent_crc(p_924->g_275.s3, "p_924->g_275.s3", print_hash_value);
    transparent_crc(p_924->g_275.s4, "p_924->g_275.s4", print_hash_value);
    transparent_crc(p_924->g_275.s5, "p_924->g_275.s5", print_hash_value);
    transparent_crc(p_924->g_275.s6, "p_924->g_275.s6", print_hash_value);
    transparent_crc(p_924->g_275.s7, "p_924->g_275.s7", print_hash_value);
    transparent_crc(p_924->g_287.x, "p_924->g_287.x", print_hash_value);
    transparent_crc(p_924->g_287.y, "p_924->g_287.y", print_hash_value);
    transparent_crc(p_924->g_287.z, "p_924->g_287.z", print_hash_value);
    transparent_crc(p_924->g_287.w, "p_924->g_287.w", print_hash_value);
    transparent_crc(p_924->g_303, "p_924->g_303", print_hash_value);
    transparent_crc(p_924->g_332.x, "p_924->g_332.x", print_hash_value);
    transparent_crc(p_924->g_332.y, "p_924->g_332.y", print_hash_value);
    transparent_crc(p_924->g_400.s0, "p_924->g_400.s0", print_hash_value);
    transparent_crc(p_924->g_400.s1, "p_924->g_400.s1", print_hash_value);
    transparent_crc(p_924->g_400.s2, "p_924->g_400.s2", print_hash_value);
    transparent_crc(p_924->g_400.s3, "p_924->g_400.s3", print_hash_value);
    transparent_crc(p_924->g_400.s4, "p_924->g_400.s4", print_hash_value);
    transparent_crc(p_924->g_400.s5, "p_924->g_400.s5", print_hash_value);
    transparent_crc(p_924->g_400.s6, "p_924->g_400.s6", print_hash_value);
    transparent_crc(p_924->g_400.s7, "p_924->g_400.s7", print_hash_value);
    transparent_crc(p_924->g_400.s8, "p_924->g_400.s8", print_hash_value);
    transparent_crc(p_924->g_400.s9, "p_924->g_400.s9", print_hash_value);
    transparent_crc(p_924->g_400.sa, "p_924->g_400.sa", print_hash_value);
    transparent_crc(p_924->g_400.sb, "p_924->g_400.sb", print_hash_value);
    transparent_crc(p_924->g_400.sc, "p_924->g_400.sc", print_hash_value);
    transparent_crc(p_924->g_400.sd, "p_924->g_400.sd", print_hash_value);
    transparent_crc(p_924->g_400.se, "p_924->g_400.se", print_hash_value);
    transparent_crc(p_924->g_400.sf, "p_924->g_400.sf", print_hash_value);
    transparent_crc(p_924->g_406.s0, "p_924->g_406.s0", print_hash_value);
    transparent_crc(p_924->g_406.s1, "p_924->g_406.s1", print_hash_value);
    transparent_crc(p_924->g_406.s2, "p_924->g_406.s2", print_hash_value);
    transparent_crc(p_924->g_406.s3, "p_924->g_406.s3", print_hash_value);
    transparent_crc(p_924->g_406.s4, "p_924->g_406.s4", print_hash_value);
    transparent_crc(p_924->g_406.s5, "p_924->g_406.s5", print_hash_value);
    transparent_crc(p_924->g_406.s6, "p_924->g_406.s6", print_hash_value);
    transparent_crc(p_924->g_406.s7, "p_924->g_406.s7", print_hash_value);
    transparent_crc(p_924->g_429, "p_924->g_429", print_hash_value);
    transparent_crc(p_924->g_439.s0, "p_924->g_439.s0", print_hash_value);
    transparent_crc(p_924->g_439.s1, "p_924->g_439.s1", print_hash_value);
    transparent_crc(p_924->g_439.s2, "p_924->g_439.s2", print_hash_value);
    transparent_crc(p_924->g_439.s3, "p_924->g_439.s3", print_hash_value);
    transparent_crc(p_924->g_439.s4, "p_924->g_439.s4", print_hash_value);
    transparent_crc(p_924->g_439.s5, "p_924->g_439.s5", print_hash_value);
    transparent_crc(p_924->g_439.s6, "p_924->g_439.s6", print_hash_value);
    transparent_crc(p_924->g_439.s7, "p_924->g_439.s7", print_hash_value);
    transparent_crc(p_924->g_458, "p_924->g_458", print_hash_value);
    transparent_crc(p_924->g_459, "p_924->g_459", print_hash_value);
    transparent_crc(p_924->g_474, "p_924->g_474", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_924->g_509[i][j][k], "p_924->g_509[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_924->g_540.s0, "p_924->g_540.s0", print_hash_value);
    transparent_crc(p_924->g_540.s1, "p_924->g_540.s1", print_hash_value);
    transparent_crc(p_924->g_540.s2, "p_924->g_540.s2", print_hash_value);
    transparent_crc(p_924->g_540.s3, "p_924->g_540.s3", print_hash_value);
    transparent_crc(p_924->g_540.s4, "p_924->g_540.s4", print_hash_value);
    transparent_crc(p_924->g_540.s5, "p_924->g_540.s5", print_hash_value);
    transparent_crc(p_924->g_540.s6, "p_924->g_540.s6", print_hash_value);
    transparent_crc(p_924->g_540.s7, "p_924->g_540.s7", print_hash_value);
    transparent_crc(p_924->g_636.s0, "p_924->g_636.s0", print_hash_value);
    transparent_crc(p_924->g_636.s1, "p_924->g_636.s1", print_hash_value);
    transparent_crc(p_924->g_636.s2, "p_924->g_636.s2", print_hash_value);
    transparent_crc(p_924->g_636.s3, "p_924->g_636.s3", print_hash_value);
    transparent_crc(p_924->g_636.s4, "p_924->g_636.s4", print_hash_value);
    transparent_crc(p_924->g_636.s5, "p_924->g_636.s5", print_hash_value);
    transparent_crc(p_924->g_636.s6, "p_924->g_636.s6", print_hash_value);
    transparent_crc(p_924->g_636.s7, "p_924->g_636.s7", print_hash_value);
    transparent_crc(p_924->g_718.x, "p_924->g_718.x", print_hash_value);
    transparent_crc(p_924->g_718.y, "p_924->g_718.y", print_hash_value);
    transparent_crc(p_924->g_718.z, "p_924->g_718.z", print_hash_value);
    transparent_crc(p_924->g_718.w, "p_924->g_718.w", print_hash_value);
    transparent_crc(p_924->g_731.s0, "p_924->g_731.s0", print_hash_value);
    transparent_crc(p_924->g_731.s1, "p_924->g_731.s1", print_hash_value);
    transparent_crc(p_924->g_731.s2, "p_924->g_731.s2", print_hash_value);
    transparent_crc(p_924->g_731.s3, "p_924->g_731.s3", print_hash_value);
    transparent_crc(p_924->g_731.s4, "p_924->g_731.s4", print_hash_value);
    transparent_crc(p_924->g_731.s5, "p_924->g_731.s5", print_hash_value);
    transparent_crc(p_924->g_731.s6, "p_924->g_731.s6", print_hash_value);
    transparent_crc(p_924->g_731.s7, "p_924->g_731.s7", print_hash_value);
    transparent_crc(p_924->g_731.s8, "p_924->g_731.s8", print_hash_value);
    transparent_crc(p_924->g_731.s9, "p_924->g_731.s9", print_hash_value);
    transparent_crc(p_924->g_731.sa, "p_924->g_731.sa", print_hash_value);
    transparent_crc(p_924->g_731.sb, "p_924->g_731.sb", print_hash_value);
    transparent_crc(p_924->g_731.sc, "p_924->g_731.sc", print_hash_value);
    transparent_crc(p_924->g_731.sd, "p_924->g_731.sd", print_hash_value);
    transparent_crc(p_924->g_731.se, "p_924->g_731.se", print_hash_value);
    transparent_crc(p_924->g_731.sf, "p_924->g_731.sf", print_hash_value);
    transparent_crc(p_924->g_734, "p_924->g_734", print_hash_value);
    transparent_crc(p_924->g_736, "p_924->g_736", print_hash_value);
    transparent_crc(p_924->g_741.s0, "p_924->g_741.s0", print_hash_value);
    transparent_crc(p_924->g_741.s1, "p_924->g_741.s1", print_hash_value);
    transparent_crc(p_924->g_741.s2, "p_924->g_741.s2", print_hash_value);
    transparent_crc(p_924->g_741.s3, "p_924->g_741.s3", print_hash_value);
    transparent_crc(p_924->g_741.s4, "p_924->g_741.s4", print_hash_value);
    transparent_crc(p_924->g_741.s5, "p_924->g_741.s5", print_hash_value);
    transparent_crc(p_924->g_741.s6, "p_924->g_741.s6", print_hash_value);
    transparent_crc(p_924->g_741.s7, "p_924->g_741.s7", print_hash_value);
    transparent_crc(p_924->g_774, "p_924->g_774", print_hash_value);
    transparent_crc(p_924->g_776, "p_924->g_776", print_hash_value);
    transparent_crc(p_924->g_818.x, "p_924->g_818.x", print_hash_value);
    transparent_crc(p_924->g_818.y, "p_924->g_818.y", print_hash_value);
    transparent_crc(p_924->g_848.x, "p_924->g_848.x", print_hash_value);
    transparent_crc(p_924->g_848.y, "p_924->g_848.y", print_hash_value);
    transparent_crc(p_924->g_848.z, "p_924->g_848.z", print_hash_value);
    transparent_crc(p_924->g_848.w, "p_924->g_848.w", print_hash_value);
    transparent_crc(p_924->g_849.s0, "p_924->g_849.s0", print_hash_value);
    transparent_crc(p_924->g_849.s1, "p_924->g_849.s1", print_hash_value);
    transparent_crc(p_924->g_849.s2, "p_924->g_849.s2", print_hash_value);
    transparent_crc(p_924->g_849.s3, "p_924->g_849.s3", print_hash_value);
    transparent_crc(p_924->g_849.s4, "p_924->g_849.s4", print_hash_value);
    transparent_crc(p_924->g_849.s5, "p_924->g_849.s5", print_hash_value);
    transparent_crc(p_924->g_849.s6, "p_924->g_849.s6", print_hash_value);
    transparent_crc(p_924->g_849.s7, "p_924->g_849.s7", print_hash_value);
    transparent_crc(p_924->g_850.s0, "p_924->g_850.s0", print_hash_value);
    transparent_crc(p_924->g_850.s1, "p_924->g_850.s1", print_hash_value);
    transparent_crc(p_924->g_850.s2, "p_924->g_850.s2", print_hash_value);
    transparent_crc(p_924->g_850.s3, "p_924->g_850.s3", print_hash_value);
    transparent_crc(p_924->g_850.s4, "p_924->g_850.s4", print_hash_value);
    transparent_crc(p_924->g_850.s5, "p_924->g_850.s5", print_hash_value);
    transparent_crc(p_924->g_850.s6, "p_924->g_850.s6", print_hash_value);
    transparent_crc(p_924->g_850.s7, "p_924->g_850.s7", print_hash_value);
    transparent_crc(p_924->g_877.x, "p_924->g_877.x", print_hash_value);
    transparent_crc(p_924->g_877.y, "p_924->g_877.y", print_hash_value);
    transparent_crc(p_924->g_877.z, "p_924->g_877.z", print_hash_value);
    transparent_crc(p_924->g_877.w, "p_924->g_877.w", print_hash_value);
    transparent_crc(p_924->g_879.s0, "p_924->g_879.s0", print_hash_value);
    transparent_crc(p_924->g_879.s1, "p_924->g_879.s1", print_hash_value);
    transparent_crc(p_924->g_879.s2, "p_924->g_879.s2", print_hash_value);
    transparent_crc(p_924->g_879.s3, "p_924->g_879.s3", print_hash_value);
    transparent_crc(p_924->g_879.s4, "p_924->g_879.s4", print_hash_value);
    transparent_crc(p_924->g_879.s5, "p_924->g_879.s5", print_hash_value);
    transparent_crc(p_924->g_879.s6, "p_924->g_879.s6", print_hash_value);
    transparent_crc(p_924->g_879.s7, "p_924->g_879.s7", print_hash_value);
    transparent_crc(p_924->g_879.s8, "p_924->g_879.s8", print_hash_value);
    transparent_crc(p_924->g_879.s9, "p_924->g_879.s9", print_hash_value);
    transparent_crc(p_924->g_879.sa, "p_924->g_879.sa", print_hash_value);
    transparent_crc(p_924->g_879.sb, "p_924->g_879.sb", print_hash_value);
    transparent_crc(p_924->g_879.sc, "p_924->g_879.sc", print_hash_value);
    transparent_crc(p_924->g_879.sd, "p_924->g_879.sd", print_hash_value);
    transparent_crc(p_924->g_879.se, "p_924->g_879.se", print_hash_value);
    transparent_crc(p_924->g_879.sf, "p_924->g_879.sf", print_hash_value);
    transparent_crc(p_924->g_880.x, "p_924->g_880.x", print_hash_value);
    transparent_crc(p_924->g_880.y, "p_924->g_880.y", print_hash_value);
    transparent_crc(p_924->g_892, "p_924->g_892", print_hash_value);
    transparent_crc(p_924->v_collective, "p_924->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 82; i++)
            transparent_crc(p_924->g_special_values[i + 82 * get_linear_group_id()], "p_924->g_special_values[i + 82 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 82; i++)
            transparent_crc(p_924->l_special_values[i], "p_924->l_special_values[i]", print_hash_value);
    transparent_crc(p_924->l_comm_values[get_linear_local_id()], "p_924->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_924->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_924->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
