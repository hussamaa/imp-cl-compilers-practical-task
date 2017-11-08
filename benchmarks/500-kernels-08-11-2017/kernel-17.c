// --atomics 72 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,33,1 -l 33,1,1
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

__constant uint32_t permutations[10][33] = {
{8,21,30,20,22,17,27,9,31,29,11,2,18,13,28,5,25,10,4,23,15,0,14,12,26,3,6,32,19,24,1,7,16}, // permutation 0
{1,14,25,5,24,11,20,10,9,18,30,15,16,29,27,22,19,6,3,8,26,0,17,13,7,4,21,2,28,31,12,23,32}, // permutation 1
{30,2,10,1,13,23,11,27,16,18,28,32,5,24,31,21,20,29,25,19,6,22,7,8,26,15,14,4,12,9,3,17,0}, // permutation 2
{7,5,26,6,0,13,3,1,17,16,9,25,32,22,21,31,4,19,10,14,11,20,2,29,23,30,28,8,18,24,15,27,12}, // permutation 3
{14,21,30,24,20,3,25,8,5,23,13,4,31,11,22,19,18,32,15,1,26,0,2,29,17,6,7,10,12,28,9,16,27}, // permutation 4
{17,10,6,31,23,24,1,9,2,20,21,25,16,30,3,26,7,4,19,11,15,29,32,18,22,8,27,5,28,0,14,13,12}, // permutation 5
{27,0,7,24,21,10,6,14,15,1,30,8,12,28,4,20,5,23,22,31,26,9,13,2,3,19,29,11,16,32,17,18,25}, // permutation 6
{12,28,25,6,22,15,10,1,23,13,18,24,19,26,9,16,3,4,17,29,8,32,31,21,14,7,11,30,20,5,0,2,27}, // permutation 7
{16,15,23,22,32,27,8,10,30,31,14,3,12,13,1,6,28,24,21,5,20,25,26,0,4,11,9,7,19,29,2,18,17}, // permutation 8
{17,14,2,4,15,19,21,6,32,31,23,20,13,10,29,28,7,1,11,26,8,12,18,24,30,0,27,5,3,9,16,25,22} // permutation 9
};

// Seed: 3617430432

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
};

struct S1 {
   int32_t  f0;
   volatile uint32_t  f1;
   int16_t  f2;
   int32_t  f3;
   int64_t  f4;
   volatile int32_t  f5;
   volatile int32_t  f6;
   int16_t  f7;
};

struct S2 {
   volatile struct S0  f0;
   uint16_t  f1;
   volatile int8_t  f2;
   uint32_t  f3;
   volatile uint16_t  f4;
   struct S0  f5;
   uint16_t  f6;
   int32_t  f7;
   volatile int64_t  f8;
   uint32_t  f9;
};

struct S3 {
    volatile VECTOR(uint8_t, 2) g_11;
    int32_t g_22;
    int32_t *g_21[8];
    struct S0 g_66[4];
    uint64_t g_85;
    uint8_t g_96[1];
    int8_t g_106;
    VECTOR(int32_t, 8) g_188;
    VECTOR(int32_t, 2) g_189;
    VECTOR(uint16_t, 8) g_219;
    volatile int64_t g_227;
    volatile int64_t *g_226[5][1];
    VECTOR(int64_t, 4) g_320;
    VECTOR(int64_t, 8) g_351;
    VECTOR(int64_t, 4) g_352;
    uint32_t g_363;
    uint8_t *g_365;
    uint8_t **g_364;
    VECTOR(uint8_t, 8) g_394;
    VECTOR(int64_t, 2) g_397;
    uint16_t g_402;
    int16_t *g_453;
    uint64_t *g_489;
    uint64_t **g_488;
    VECTOR(uint64_t, 2) g_510;
    int32_t *g_522;
    VECTOR(int32_t, 16) g_525;
    int32_t g_531[8];
    struct S0 g_535;
    struct S1 g_561[10][5];
    int8_t *g_565;
    uint32_t g_569;
    VECTOR(uint32_t, 2) g_590;
    VECTOR(int16_t, 8) g_596;
    VECTOR(uint32_t, 2) g_604;
    uint16_t g_610;
    uint32_t g_620;
    VECTOR(uint16_t, 4) g_633;
    VECTOR(uint32_t, 8) g_644;
    VECTOR(uint64_t, 8) g_692;
    VECTOR(uint64_t, 4) g_739;
    struct S1 ** volatile *g_742;
    struct S2 g_771;
    struct S0 *g_854;
    struct S0 **g_853;
    VECTOR(uint16_t, 8) g_869;
    VECTOR(int16_t, 4) g_910;
    VECTOR(uint8_t, 8) g_911;
    VECTOR(int16_t, 2) g_913;
    struct S2 g_1015;
    struct S1 g_1039;
    struct S1 g_1247[3][5];
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
struct S1  func_1(struct S3 * p_1248);
int32_t * func_2(int8_t  p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, uint16_t  p_7, struct S3 * p_1248);
uint64_t  func_15(int32_t * p_16, int32_t * p_17, int32_t * p_18, int32_t * p_19, uint8_t  p_20, struct S3 * p_1248);
int32_t * func_23(uint16_t  p_24, struct S3 * p_1248);
int32_t * func_36(int32_t  p_37, uint64_t  p_38, struct S3 * p_1248);
int32_t  func_41(int32_t * p_42, struct S0  p_43, uint64_t  p_44, uint32_t  p_45, int32_t * p_46, struct S3 * p_1248);
int8_t  func_52(struct S0  p_53, int32_t  p_54, int32_t * p_55, struct S3 * p_1248);
struct S0  func_56(int64_t  p_57, int32_t * p_58, struct S3 * p_1248);
int32_t * func_60(uint32_t  p_61, int32_t  p_62, struct S3 * p_1248);
int32_t  func_63(int32_t  p_64, struct S0  p_65, struct S3 * p_1248);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1248->g_11 p_1248->g_21 p_1248->l_comm_values p_1248->g_22 p_1248->g_comm_values p_1248->g_66 p_1248->g_85 p_1248->g_96 p_1248->g_188 p_1248->g_189 p_1248->g_219 p_1248->g_106 p_1248->g_226 p_1248->g_320 p_1248->g_351 p_1248->g_352 p_1248->g_363 p_1248->g_364 p_1248->g_394 p_1248->g_397 p_1248->g_365 p_1248->g_453 p_1248->g_402 p_1248->g_535 p_1248->g_561.f3 p_1248->g_569 p_1248->g_590 p_1248->g_596 p_1248->g_604 p_1248->g_531 p_1248->g_561.f0 p_1248->g_620 p_1248->g_633 p_1248->g_644 p_1248->g_488 p_1248->g_489 p_1248->g_561.f4 p_1248->g_692 p_1248->g_739 p_1248->g_510 p_1248->g_742 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->g_525 p_1248->g_869 p_1248->g_522 p_1248->g_771.f6 p_1248->g_610 p_1248->g_1039.f4 p_1248->g_913 p_1248->g_561.f5 p_1248->g_910 p_1248->g_1247
 * writes: p_1248->g_85 p_1248->g_96 p_1248->g_comm_values p_1248->g_106 p_1248->g_66 p_1248->g_363 p_1248->g_402 p_1248->g_219 p_1248->g_522 p_1248->g_565 p_1248->g_561.f3 p_1248->g_569 p_1248->g_610 p_1248->g_620 p_1248->g_489 p_1248->g_365 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->g_853 p_1248->g_771.f6 p_1248->g_22
 */
struct S1  func_1(struct S3 * p_1248)
{ /* block id: 4 */
    int32_t l_8[3][4][1] = {{{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L}},{{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L}},{{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L},{0x50BB94D0L}}};
    VECTOR(uint8_t, 4) l_9 = (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xFFL), 0xFFL);
    VECTOR(uint8_t, 16) l_10 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL), 255UL, 249UL, 255UL, (VECTOR(uint8_t, 2))(249UL, 255UL), (VECTOR(uint8_t, 2))(249UL, 255UL), 249UL, 255UL, 249UL, 255UL);
    int8_t l_14 = 3L;
    int32_t *l_39[9] = {&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0],&l_8[2][2][0]};
    int32_t l_40 = 0x6068C90CL;
    int32_t **l_1049 = &l_39[2];
    int i, j, k;
    (*l_1049) = func_2((((l_8[2][3][0] , (((VECTOR(int32_t, 2))(0x05132D7AL, 1L)).lo , ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(l_9.yxyzwzxy)), ((VECTOR(uint8_t, 2))(l_10.saa)).xxyxxxxy))).odd, ((VECTOR(uint8_t, 2))(p_1248->g_11.yy)).xyyy))).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x5CL, 0UL)).xyyyxxyy)).s44))).hi)) <= (safe_mul_func_uint8_t_u_u(l_14, ((func_15(p_1248->g_21[2], func_23(p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))], p_1248), func_23(p_1248->g_22, p_1248), ((*l_1049) = func_36(p_1248->g_comm_values[p_1248->tid], ((((l_8[1][1][0] && p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))]) , l_39[2]) == &p_1248->g_22) , l_40), p_1248)), p_1248->g_913.x, p_1248) , (*l_1049)) != &p_1248->g_22)))) , p_1248->g_561[4][2].f5), &p_1248->g_22, &p_1248->g_22, &p_1248->g_22, p_1248->g_910.x, p_1248);
    if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 54]) == 7))
    { /* block id: 497 */
        struct S2 l_1052 = {{0x4E0FL},0xBB9AL,0x5EL,1UL,0x743AL,{0x6D2CL},0x89F7L,0x0F4F3B2EL,0x77A03E47486BD387L,0x9C18F6B4L};/* VOLATILE GLOBAL l_1052 */
        int32_t l_1053[5];
        uint64_t l_1054 = 18446744073709551607UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1053[i] = (-1L);
        l_1052 = l_1052;
        if ((l_1053[0] , l_1054))
        { /* block id: 499 */
            VECTOR(int32_t, 8) l_1055 = (VECTOR(int32_t, 8))(0x42D77A08L, (VECTOR(int32_t, 4))(0x42D77A08L, (VECTOR(int32_t, 2))(0x42D77A08L, 9L), 9L), 9L, 0x42D77A08L, 9L);
            int32_t l_1056 = 0x64128CB5L;
            int64_t l_1057 = (-1L);
            uint32_t l_1058[5] = {0x3CE44304L,0x3CE44304L,0x3CE44304L,0x3CE44304L,0x3CE44304L};
            int32_t l_1059 = 0x0B37769AL;
            int32_t l_1060 = 0x77546A7CL;
            int i;
            l_1055.s3 = l_1055.s7;
            l_1058[3] ^= (l_1057 = l_1056);
            l_1060 |= l_1059;
            for (l_1057 = (-25); (l_1057 == (-24)); l_1057 = safe_add_func_int8_t_s_s(l_1057, 9))
            { /* block id: 506 */
                uint16_t l_1063 = 0x4245L;
                int32_t l_1064 = 6L;
                if ((l_1063 , l_1064))
                { /* block id: 507 */
                    uint32_t l_1065 = 0x83B00F8EL;
                    uint32_t l_1066 = 4294967294UL;
                    l_1060 ^= l_1065;
                    l_1064 = l_1066;
                }
                else
                { /* block id: 510 */
                    if ((l_1060 ^= 0x0449D593L))
                    { /* block id: 512 */
                        VECTOR(int32_t, 4) l_1067 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L));
                        uint32_t l_1068 = 0x27DCF60DL;
                        int i;
                        l_1060 = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x61924CEBL, (-6L))).yyxy)).yyzyzyyx)).s46, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1067.zwzxwwzw)).odd)).ywwzwxxyzwzwzxwz))))).s2e))).odd;
                        l_1068--;
                        l_1055.s6 &= ((VECTOR(int32_t, 2))((-1L), 0x085C9920L)).odd;
                    }
                    else
                    { /* block id: 516 */
                        int16_t l_1071 = 0L;
                        int8_t l_1072 = 0x35L;
                        uint32_t l_1073 = 4294967288UL;
                        uint32_t l_1076 = 0x0DEA9BA3L;
                        int64_t l_1077[8] = {0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL,0x0E47805CCB2C026CL};
                        int32_t l_1078[3][2] = {{0x3ACD50F0L,0x798C5AA9L},{0x3ACD50F0L,0x798C5AA9L},{0x3ACD50F0L,0x798C5AA9L}};
                        uint8_t l_1079 = 247UL;
                        int i, j;
                        l_1073--;
                        l_1077[6] ^= (l_1076 , 1L);
                        ++l_1079;
                    }
                }
                for (l_1063 = (-11); (l_1063 == 18); l_1063 = safe_add_func_uint64_t_u_u(l_1063, 3))
                { /* block id: 524 */
                    VECTOR(int32_t, 8) l_1084 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x573A86DDL), 0x573A86DDL), 0x573A86DDL, 5L, 0x573A86DDL);
                    int8_t l_1085 = 0L;
                    uint32_t l_1086 = 4294967293UL;
                    int32_t l_1087 = 0x0FE01A16L;
                    uint32_t l_1088[4][7][5] = {{{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL}},{{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL}},{{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL}},{{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL},{1UL,0x2F5BD9BEL,0x0DB21327L,4294967287UL,0xF254F1AAL}}};
                    VECTOR(uint64_t, 8) l_1089 = (VECTOR(uint64_t, 8))(0x32EEDF0BDEDCBFB1L, (VECTOR(uint64_t, 4))(0x32EEDF0BDEDCBFB1L, (VECTOR(uint64_t, 2))(0x32EEDF0BDEDCBFB1L, 0x7B92B1FE9F83FCE7L), 0x7B92B1FE9F83FCE7L), 0x7B92B1FE9F83FCE7L, 0x32EEDF0BDEDCBFB1L, 0x7B92B1FE9F83FCE7L);
                    int64_t l_1090 = 0x5FB7DE6668E7C78BL;
                    int16_t l_1106 = 0x65A3L;
                    int i, j, k;
                    if ((l_1064 = ((l_1085 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1084.s4024054404033111)))).sf91e, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5B5F1E47L, 0x1BE9756CL)).xxyxxxyxxyxyxyxx)).s3d7c))).yzwywzzxxzxwwzzw)).sb) , ((((l_1086 , (l_1052.f5.f0 &= l_1087)) , (l_1088[3][3][0] = 0x25L)) , l_1089.s3) , l_1090))))
                    { /* block id: 529 */
                        int32_t l_1092 = 0x286F0261L;
                        int32_t *l_1091[7][1][1] = {{{&l_1092}},{{&l_1092}},{{&l_1092}},{{&l_1092}},{{&l_1092}},{{&l_1092}},{{&l_1092}}};
                        int8_t l_1093 = 6L;
                        struct S2 l_1094 = {{0x4A38L},65532UL,0x7FL,0xD899E053L,1UL,{0x46B3L},0xB189L,0x4CCDB6E3L,0L,4294967295UL};/* VOLATILE GLOBAL l_1094 */
                        struct S2 l_1095 = {{0x3AFBL},0x2125L,1L,0UL,0xD304L,{9L},0x8252L,3L,0x5B5C2040DA9EEA19L,0x259C83C7L};/* VOLATILE GLOBAL l_1095 */
                        struct S1 l_1096 = {-6L,0xA7DF5A80L,-8L,-6L,-2L,-10L,0x1CB04950L,1L};/* VOLATILE GLOBAL l_1096 */
                        struct S1 l_1097 = {1L,0UL,0x2D2CL,0L,0x0DA1CA0D682C71A8L,0x2971C357L,0x6C3B8FC9L,-1L};/* VOLATILE GLOBAL l_1097 */
                        struct S2 l_1098 = {{0x3130L},1UL,0x33L,0x0341C342L,65535UL,{2L},0x81A0L,0x29A41ABAL,0x6FB16B46B1C483EEL,0xF12F85E9L};/* VOLATILE GLOBAL l_1098 */
                        int64_t l_1099 = 0L;
                        int64_t l_1100 = 0x39ECADD407750D75L;
                        int i, j, k;
                        l_1091[4][0][0] = (((VECTOR(int64_t, 2))(0x2568E3288EDB3D23L, 0x5ECE44FA500E1CE9L)).lo , (void*)0);
                        l_1095 = ((l_1052.f9 = l_1093) , l_1094);
                        l_1097 = l_1096;
                        l_1064 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((((((VECTOR(int16_t, 2))(7L, 0L)).odd , (l_1098 , (-1L))) , (l_1085 = l_1099)) , 1L), l_1100, 0x7E0B1122L, (-1L))).even)).xxxy)).x;
                    }
                    else
                    { /* block id: 536 */
                        int32_t l_1102 = 8L;
                        int32_t *l_1101 = &l_1102;
                        uint16_t l_1103 = 0x116CL;
                        l_1101 = (void*)0;
                        --l_1103;
                    }
                    l_1106 &= (l_1055.s3 |= 0x7BF45D0DL);
                }
            }
        }
        else
        { /* block id: 544 */
            int32_t l_1107 = 0x2592B859L;
            uint32_t l_1151 = 4294967295UL;
            uint16_t l_1245 = 65526UL;
            uint64_t l_1246 = 0x8D1C7D8B5426FEE6L;
            if ((l_1107 = 0L))
            { /* block id: 546 */
                int32_t *l_1108 = (void*)0;
                int32_t l_1110 = (-8L);
                int32_t *l_1109 = &l_1110;
                int32_t *l_1111 = &l_1110;
                l_1111 = (l_1109 = l_1108);
            }
            else
            { /* block id: 549 */
                int64_t l_1112 = (-2L);
                if (l_1112)
                { /* block id: 550 */
                    int32_t l_1114 = 0x29554460L;
                    int32_t *l_1113 = &l_1114;
                    struct S0 l_1115 = {0x6E7BL};
                    struct S1 l_1116[3] = {{-4L,0x6FE7E0C5L,0L,0x613BB7DAL,0x3A59FCAC4C794153L,0x2DA43B8CL,0x6A588CA8L,3L},{-4L,0x6FE7E0C5L,0L,0x613BB7DAL,0x3A59FCAC4C794153L,0x2DA43B8CL,0x6A588CA8L,3L},{-4L,0x6FE7E0C5L,0L,0x613BB7DAL,0x3A59FCAC4C794153L,0x2DA43B8CL,0x6A588CA8L,3L}};
                    int16_t l_1117 = (-1L);
                    VECTOR(int16_t, 2) l_1118 = (VECTOR(int16_t, 2))(1L, 0L);
                    int32_t *l_1119[1][6] = {{&l_1116[1].f3,&l_1116[1].f3,&l_1116[1].f3,&l_1116[1].f3,&l_1116[1].f3,&l_1116[1].f3}};
                    int32_t *l_1120 = &l_1114;
                    int32_t *l_1121 = (void*)0;
                    int32_t *l_1122 = &l_1114;
                    int32_t *l_1123 = &l_1116[1].f3;
                    struct S0 l_1124 = {1L};
                    int i, j;
                    l_1113 = (void*)0;
                    l_1052.f0 = (l_1052.f5 = l_1115);
                    l_1123 = (l_1116[1] , (l_1122 = (l_1121 = (((VECTOR(int16_t, 16))(l_1117, (-6L), 1L, 3L, 0x26A1L, ((VECTOR(int16_t, 8))(l_1118.yxxxyyyx)), 0x78E9L, 3L, 0x5AA8L)).s5 , (l_1120 = l_1119[0][1])))));
                    l_1052.f0 = (l_1124 = (l_1052.f5 = l_1124));
                }
                else
                { /* block id: 561 */
                    int8_t l_1125 = 0x55L;
                    int32_t l_1127[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int32_t *l_1126[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_1128 = (void*)0;
                    int32_t l_1129 = 0x1950F273L;
                    int32_t *l_1130 = (void*)0;
                    int32_t *l_1131 = &l_1127[4];
                    uint16_t l_1132 = 0UL;
                    VECTOR(int32_t, 2) l_1133 = (VECTOR(int32_t, 2))(0x6CAAD5F5L, 0x2F24EB2BL);
                    int i;
                    l_1128 = (l_1125 , l_1126[9]);
                    l_1131 = (l_1129 , l_1130);
                    l_1132 &= (l_1107 = 0x5488906CL);
                    if (((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1133.yyyy)))).yxywyxzw)).s5556315121155356))).s2)
                    { /* block id: 566 */
                        int32_t l_1134 = 0x3850EF19L;
                        int32_t l_1135 = 0x5DF8F4B3L;
                        uint32_t l_1136 = 0UL;
                        l_1134 = ((l_1135 |= l_1134) , l_1136);
                    }
                    else
                    { /* block id: 569 */
                        int32_t l_1137[2];
                        int32_t l_1138[2][3] = {{4L,0x6FBAD815L,4L},{4L,0x6FBAD815L,4L}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1137[i] = 0x694FC4CFL;
                        l_1138[0][2] &= l_1137[0];
                        l_1131 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x61984A50L, 0x3542AA5FL)).yxyyyyyy)).s2 , (void*)0);
                        l_1128 = (void*)0;
                        l_1126[3] = (void*)0;
                    }
                }
                for (l_1112 = 0; (l_1112 > (-11)); l_1112--)
                { /* block id: 578 */
                    VECTOR(int8_t, 2) l_1141 = (VECTOR(int8_t, 2))(0x0FL, (-1L));
                    int i;
                    if (l_1141.x)
                    { /* block id: 579 */
                        uint8_t l_1142 = 0UL;
                        uint64_t l_1143[3];
                        VECTOR(int32_t, 2) l_1144 = (VECTOR(int32_t, 2))(0L, 0x5E0772B8L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1143[i] = 18446744073709551615UL;
                        l_1107 &= l_1142;
                        l_1107 = ((VECTOR(int32_t, 16))((-1L), l_1143[1], ((VECTOR(int32_t, 8))(l_1144.yyxyyxxy)), 1L, 0x3D213B6EL, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, (-3L), (-8L), 0x3F66B463L)).odd)), ((VECTOR(int32_t, 2))((-4L), 0x2170148EL)), ((VECTOR(int32_t, 2))(8L, (-1L)))))), 0L, 0x4562E2D6L)).s5;
                    }
                    else
                    { /* block id: 582 */
                        int32_t l_1145 = 0x3089F718L;
                        int32_t *l_1146 = &l_1145;
                        int32_t *l_1147 = &l_1145;
                        uint8_t l_1148 = 0UL;
                        l_1147 = (l_1145 , l_1146);
                        --l_1148;
                    }
                }
                l_1107 = 0L;
            }
            if (l_1151)
            { /* block id: 589 */
                struct S2 l_1154 = {{3L},65530UL,0L,0x1B09621DL,0xDA71L,{5L},65529UL,-5L,0x4785DAAA356EAD71L,0x77D8B7FEL};/* VOLATILE GLOBAL l_1154 */
                struct S2 *l_1153 = &l_1154;
                struct S2 **l_1152 = &l_1153;
                struct S2 **l_1155 = (void*)0;
                struct S2 **l_1156 = &l_1153;
                l_1156 = (l_1155 = l_1152);
                if ((l_1107 |= 0L))
                { /* block id: 593 */
                    int32_t l_1157 = 0x2D26BF93L;
                    VECTOR(int32_t, 8) l_1163 = (VECTOR(int32_t, 8))(0x6DE81AD3L, (VECTOR(int32_t, 4))(0x6DE81AD3L, (VECTOR(int32_t, 2))(0x6DE81AD3L, 0x2D33107FL), 0x2D33107FL), 0x2D33107FL, 0x6DE81AD3L, 0x2D33107FL);
                    VECTOR(int32_t, 8) l_1164 = (VECTOR(int32_t, 8))(0x71F0406EL, (VECTOR(int32_t, 4))(0x71F0406EL, (VECTOR(int32_t, 2))(0x71F0406EL, 0x1633E194L), 0x1633E194L), 0x1633E194L, 0x71F0406EL, 0x1633E194L);
                    struct S0 l_1165 = {0x10DEL};
                    uint64_t l_1166 = 0xB2CF8E3939BD1949L;
                    VECTOR(int64_t, 4) l_1167 = (VECTOR(int64_t, 4))(0x55A7AE21D2F2F690L, (VECTOR(int64_t, 2))(0x55A7AE21D2F2F690L, 1L), 1L);
                    int i;
                    for (l_1157 = (-26); (l_1157 != (-23)); l_1157 = safe_add_func_uint64_t_u_u(l_1157, 1))
                    { /* block id: 596 */
                        uint32_t l_1160 = 0xFA176B8AL;
                        ++l_1160;
                    }
                    l_1107 = 0x6ACA3302L;
                    l_1157 = ((l_1052.f5 = ((l_1163.s6 = (l_1054 &= GROUP_DIVERGE(1, 1))) , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1164.s11055477)).s6500651731632551)).sa , (l_1154.f5 = l_1165)))) , l_1166);
                    l_1167.w &= 0x3BC28499L;
                }
                else
                { /* block id: 606 */
                    int32_t l_1168 = 0x4CABF806L;
                    for (l_1168 = 0; (l_1168 <= (-26)); --l_1168)
                    { /* block id: 609 */
                        int32_t l_1171 = (-4L);
                        uint32_t l_1172 = 4294967295UL;
                        l_1107 &= (l_1171 , l_1172);
                    }
                }
                for (l_1154.f1 = (-26); (l_1154.f1 != 42); l_1154.f1 = safe_add_func_int32_t_s_s(l_1154.f1, 3))
                { /* block id: 615 */
                    int32_t l_1175 = 3L;
                    for (l_1175 = 0; (l_1175 <= (-27)); l_1175 = safe_sub_func_int16_t_s_s(l_1175, 8))
                    { /* block id: 618 */
                        int32_t l_1179 = 0x0CD24A6FL;
                        int32_t *l_1178[2];
                        int32_t *l_1180 = &l_1179;
                        VECTOR(int32_t, 16) l_1181 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4BD2678BL), 0x4BD2678BL), 0x4BD2678BL, 0L, 0x4BD2678BL, (VECTOR(int32_t, 2))(0L, 0x4BD2678BL), (VECTOR(int32_t, 2))(0L, 0x4BD2678BL), 0L, 0x4BD2678BL, 0L, 0x4BD2678BL);
                        int32_t l_1182 = 1L;
                        VECTOR(int32_t, 8) l_1183 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1178[i] = &l_1179;
                        l_1180 = (l_1178[0] = (void*)0);
                        l_1107 |= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1181.sc1ae992d6595a24f)).s8592)).zwxyywyz, ((VECTOR(int32_t, 8))(0x04F6FAFCL, l_1182, ((VECTOR(int32_t, 2))(0x24C6F93AL, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1183.s61)).yxxx))))))).s1;
                    }
                    for (l_1175 = 27; (l_1175 > 15); --l_1175)
                    { /* block id: 625 */
                        int32_t l_1187 = 1L;
                        int32_t *l_1186 = &l_1187;
                        int32_t *l_1188 = &l_1187;
                        uint8_t l_1189 = 0xB0L;
                        int8_t l_1190[3];
                        struct S1 l_1191 = {1L,0x91571625L,2L,0x63DCC08EL,0x2E016DDFE6C7E498L,0x4EDC027CL,0x097B8FAEL,-10L};/* VOLATILE GLOBAL l_1191 */
                        int8_t l_1192 = 0x09L;
                        int8_t l_1193 = 0x7DL;
                        int32_t *l_1194[4][8][1] = {{{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187}},{{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187}},{{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187}},{{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187},{&l_1187}}};
                        int32_t l_1195 = (-1L);
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1190[i] = 1L;
                        l_1188 = (l_1186 = (void*)0);
                        l_1193 &= ((l_1190[2] |= (l_1189 = 0x5E9CCD5C5C91B58EL)) , (l_1191 , l_1192));
                        l_1194[1][0][0] = l_1194[1][0][0];
                        l_1107 ^= l_1195;
                    }
                }
            }
            else
            { /* block id: 635 */
                int32_t l_1196[9] = {9L,9L,9L,9L,9L,9L,9L,9L,9L};
                int32_t *l_1197 = &l_1196[1];
                int32_t *l_1198 = &l_1196[0];
                int16_t l_1199 = 0x79C7L;
                int32_t *l_1230 = &l_1196[1];
                int32_t *l_1231 = &l_1196[6];
                int i;
                l_1198 = (l_1197 = (l_1196[1] , (void*)0));
                if (l_1199)
                { /* block id: 638 */
                    int32_t l_1200 = (-1L);
                    for (l_1200 = 0; (l_1200 < (-26)); l_1200--)
                    { /* block id: 641 */
                        struct S1 l_1204[9] = {{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L},{1L,0x146661A3L,-1L,0x5A268857L,0x76DA101714540D94L,-1L,0x252AACA3L,-8L}};
                        struct S1 *l_1203 = &l_1204[2];
                        int32_t *l_1205 = &l_1204[2].f3;
                        int i;
                        l_1203 = l_1203;
                        l_1205 = (void*)0;
                    }
                }
                else
                { /* block id: 645 */
                    int32_t l_1206 = 0x5A4DBAE0L;
                    uint8_t l_1207[5];
                    VECTOR(int32_t, 16) l_1208 = (VECTOR(int32_t, 16))(0x7FC4DFCCL, (VECTOR(int32_t, 4))(0x7FC4DFCCL, (VECTOR(int32_t, 2))(0x7FC4DFCCL, 0L), 0L), 0L, 0x7FC4DFCCL, 0L, (VECTOR(int32_t, 2))(0x7FC4DFCCL, 0L), (VECTOR(int32_t, 2))(0x7FC4DFCCL, 0L), 0x7FC4DFCCL, 0L, 0x7FC4DFCCL, 0L);
                    int32_t l_1228 = 0x7044236DL;
                    int32_t *l_1229 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1207[i] = 0xD6L;
                    l_1196[1] = l_1206;
                    if ((l_1207[1] , ((VECTOR(int32_t, 16))(l_1208.scd43add64d47b613)).s7))
                    { /* block id: 647 */
                        int8_t l_1209 = 1L;
                        int32_t l_1210 = 0x5FB89A57L;
                        int64_t l_1211 = 7L;
                        uint8_t l_1212 = 0x12L;
                        int8_t l_1215 = 1L;
                        uint32_t l_1216 = 1UL;
                        int16_t l_1217[1];
                        VECTOR(int32_t, 16) l_1218 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x0DBC6A35L), 0x0DBC6A35L), 0x0DBC6A35L, 4L, 0x0DBC6A35L, (VECTOR(int32_t, 2))(4L, 0x0DBC6A35L), (VECTOR(int32_t, 2))(4L, 0x0DBC6A35L), 4L, 0x0DBC6A35L, 4L, 0x0DBC6A35L);
                        uint8_t l_1219 = 0x04L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1217[i] = 0L;
                        l_1212++;
                        l_1216 |= l_1215;
                        l_1219++;
                        l_1197 = (void*)0;
                    }
                    else
                    { /* block id: 652 */
                        uint32_t l_1222 = 7UL;
                        int32_t l_1225[4][6][9] = {{{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL}},{{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL}},{{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL}},{{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL},{0L,0L,0x0BD0A7B6L,4L,6L,0x6C256D0DL,0x278D032DL,1L,0x278D032DL}}};
                        uint64_t l_1226 = 18446744073709551615UL;
                        uint64_t l_1227 = 18446744073709551607UL;
                        int i, j, k;
                        ++l_1222;
                        l_1227 &= (l_1225[3][1][2] , l_1226);
                    }
                    l_1196[1] = (l_1107 = l_1228);
                    l_1197 = l_1229;
                }
                l_1231 = l_1230;
                for (l_1199 = (-15); (l_1199 < 13); l_1199 = safe_add_func_int32_t_s_s(l_1199, 5))
                { /* block id: 663 */
                    VECTOR(int32_t, 8) l_1234 = (VECTOR(int32_t, 8))(0x22B445C2L, (VECTOR(int32_t, 4))(0x22B445C2L, (VECTOR(int32_t, 2))(0x22B445C2L, 0x5A63193BL), 0x5A63193BL), 0x5A63193BL, 0x22B445C2L, 0x5A63193BL);
                    int16_t l_1235[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1235[i] = 2L;
                    if ((l_1235[0] = ((VECTOR(int32_t, 16))(l_1234.s6751415611212535)).sc))
                    { /* block id: 665 */
                        int32_t l_1236[6][2] = {{0x60901008L,0x60901008L},{0x60901008L,0x60901008L},{0x60901008L,0x60901008L},{0x60901008L,0x60901008L},{0x60901008L,0x60901008L},{0x60901008L,0x60901008L}};
                        uint8_t l_1237 = 7UL;
                        uint64_t l_1238 = 0xC91255B774174F04L;
                        int16_t l_1239 = 0x38D1L;
                        int i, j;
                        l_1197 = (void*)0;
                        l_1237 = (GROUP_DIVERGE(0, 1) , l_1236[1][1]);
                        l_1239 |= l_1238;
                    }
                    else
                    { /* block id: 669 */
                        int16_t l_1240 = 0x55E4L;
                        l_1240 = 0x4C777F2AL;
                    }
                }
            }
            for (l_1107 = (-28); (l_1107 > 4); l_1107 = safe_add_func_uint16_t_u_u(l_1107, 4))
            { /* block id: 676 */
                VECTOR(int32_t, 8) l_1243 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x0FEE5E98L), 0x0FEE5E98L), 0x0FEE5E98L, (-10L), 0x0FEE5E98L);
                int8_t l_1244[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                int i;
                l_1244[1] ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1243.s23)).xxxxxxyyxyxyxyxy)).s4c7e)).x;
            }
            l_1246 ^= l_1245;
        }
        unsigned int result = 0;
        result += l_1052.f0.f0;
        result += l_1052.f1;
        result += l_1052.f2;
        result += l_1052.f3;
        result += l_1052.f4;
        result += l_1052.f5.f0;
        result += l_1052.f6;
        result += l_1052.f7;
        result += l_1052.f8;
        result += l_1052.f9;
        int l_1053_i0;
        for (l_1053_i0 = 0; l_1053_i0 < 5; l_1053_i0++) {
            result += l_1053[l_1053_i0];
        }
        result += l_1054;
        atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 54], result);
    }
    else
    { /* block id: 681 */
        (1 + 1);
    }
    (**l_1049) |= 0x15B3343EL;
    return p_1248->g_1247[2][1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1248->g_22
 */
int32_t * func_2(int8_t  p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, uint16_t  p_7, struct S3 * p_1248)
{ /* block id: 492 */
    int32_t l_1051 = 0x6D89478BL;
    (*p_4) = l_1051;
    return &p_1248->g_22;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_15(int32_t * p_16, int32_t * p_17, int32_t * p_18, int32_t * p_19, uint8_t  p_20, struct S3 * p_1248)
{ /* block id: 490 */
    uint32_t l_1050 = 0x504635D9L;
    return l_1050;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_23(uint16_t  p_24, struct S3 * p_1248)
{ /* block id: 5 */
    int32_t *l_25 = &p_1248->g_22;
    int32_t l_26[5][4][5] = {{{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL}},{{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL}},{{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL}},{{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL}},{{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL},{0x105F4D0CL,(-7L),0x10B2811FL,0L,0x10B2811FL}}};
    int32_t *l_27 = &p_1248->g_22;
    int32_t *l_28 = (void*)0;
    int32_t *l_29 = &p_1248->g_22;
    int32_t *l_30[8][9] = {{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]},{&l_26[2][1][3],&l_26[2][1][3],&p_1248->g_22,&p_1248->g_22,&l_26[0][0][3],&p_1248->g_22,&p_1248->g_22,&l_26[2][1][3],&l_26[2][1][3]}};
    int8_t l_31 = 0x7BL;
    int16_t l_32 = 0L;
    uint16_t l_33 = 65535UL;
    int i, j, k;
    ++l_33;
    return &p_1248->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_22 p_1248->l_comm_values p_1248->g_66 p_1248->g_85 p_1248->g_96 p_1248->g_comm_values p_1248->g_188 p_1248->g_189 p_1248->g_219 p_1248->g_106 p_1248->g_226 p_1248->g_320 p_1248->g_351 p_1248->g_352 p_1248->g_363 p_1248->g_364 p_1248->g_394 p_1248->g_397 p_1248->g_365 p_1248->g_453 p_1248->g_402 p_1248->g_535 p_1248->g_561.f3 p_1248->g_569 p_1248->g_590 p_1248->g_596 p_1248->g_604 p_1248->g_531 p_1248->g_561.f0 p_1248->g_620 p_1248->g_633 p_1248->g_644 p_1248->g_488 p_1248->g_489 p_1248->g_561.f4 p_1248->g_692 p_1248->g_739 p_1248->g_510 p_1248->g_742 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->g_525 p_1248->g_869 p_1248->g_522 p_1248->g_771.f6 p_1248->g_610 p_1248->g_1039.f4
 * writes: p_1248->g_85 p_1248->g_96 p_1248->g_comm_values p_1248->g_106 p_1248->g_66 p_1248->g_363 p_1248->g_402 p_1248->g_219 p_1248->g_522 p_1248->g_565 p_1248->g_561.f3 p_1248->g_569 p_1248->g_610 p_1248->g_620 p_1248->g_489 p_1248->g_365 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->g_853 p_1248->g_771.f6
 */
int32_t * func_36(int32_t  p_37, uint64_t  p_38, struct S3 * p_1248)
{ /* block id: 8 */
    int32_t *l_47 = &p_1248->g_22;
    VECTOR(int32_t, 8) l_59 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x72CB3382L), 0x72CB3382L), 0x72CB3382L, 1L, 0x72CB3382L);
    int8_t *l_619 = &p_1248->g_106;
    struct S0 l_621 = {0x0184L};
    int32_t l_857[5];
    uint32_t l_858 = 1UL;
    uint16_t l_924 = 0x7745L;
    int64_t *l_944 = (void*)0;
    int64_t **l_943 = &l_944;
    int64_t ***l_945 = &l_943;
    int32_t l_954 = (-8L);
    VECTOR(int64_t, 4) l_956 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 8L), 8L);
    uint8_t **l_967 = &p_1248->g_365;
    VECTOR(int32_t, 4) l_1010 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2EBAF350L), 0x2EBAF350L);
    struct S2 *l_1014 = &p_1248->g_1015;
    struct S2 **l_1013[5][1];
    struct S1 *l_1038 = &p_1248->g_1039;
    struct S1 **l_1037[9][10] = {{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038},{&l_1038,&l_1038,&l_1038,&l_1038,(void*)0,&l_1038,&l_1038,&l_1038,&l_1038,&l_1038}};
    struct S1 **l_1041 = &l_1038;
    struct S1 ***l_1040 = &l_1041;
    int32_t *l_1048 = &l_857[0];
    int i, j;
    for (i = 0; i < 5; i++)
        l_857[i] = 0x162E2453L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1013[i][j] = &l_1014;
    }
    if (func_41(&p_1248->g_22, ((l_47 == ((((safe_sub_func_uint64_t_u_u(0x4C97AD9788A37CDCL, (safe_add_func_uint64_t_u_u(18446744073709551611UL, ((p_1248->g_620 ^= ((*l_619) = func_52(func_56(l_59.s1, func_60(p_1248->g_22, func_63(p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))], p_1248->g_66[0], p_1248), p_1248), p_1248), p_38, &p_1248->g_22, p_1248))) == 0x16L))))) , p_1248->g_397.y) >= (*l_47)) , (void*)0)) , l_621), p_38, (*l_47), l_47, p_1248))
    { /* block id: 417 */
        int32_t **l_855 = &l_47;
        int32_t *l_856[5][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        (*l_855) = (void*)0;
        l_858++;
        return &p_1248->g_22;
    }
    else
    { /* block id: 421 */
        int64_t l_876 = 7L;
        struct S0 l_880[9][4][5] = {{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}},{{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}},{{1L},{0x2901L},{0x2901L},{1L},{0x4A20L}}}};
        uint64_t l_922 = 3UL;
        int32_t l_930 = 0x61BB84F1L;
        int32_t l_939[7] = {5L,0x3C1530B5L,5L,5L,0x3C1530B5L,5L,5L};
        uint32_t l_940 = 1UL;
        int i, j, k;
        if (((-6L) != (p_38 <= 4L)))
        { /* block id: 422 */
            uint32_t l_870[3];
            int i;
            for (i = 0; i < 3; i++)
                l_870[i] = 0x715A4571L;
            if (p_38)
            { /* block id: 423 */
                VECTOR(int32_t, 8) l_871 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 4L), 4L), 4L, (-4L), 4L);
                int32_t **l_877 = &p_1248->g_522;
                int i;
                (*l_877) = func_23((safe_mod_func_int16_t_s_s((-3L), (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((*l_619) = (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_38, ((VECTOR(uint16_t, 2))(p_1248->g_869.s76)), 0x0078L, ((l_870[1] || p_37) | (((VECTOR(int32_t, 8))(l_871.s13165144)).s4 , 0x3B1D6E79473059B5L)), 65529UL, 9UL, 0x2833L)).s44)).xxyxxxyyyxyxyyxx))).s1c)).even <= (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_37, 8)), l_876)))) >= ((GROUP_DIVERGE(1, 1) , p_37) ^ (**p_1248->g_364))) > p_38), (*p_1248->g_365))), 2)) & l_870[1]), l_870[1])))), p_1248);
            }
            else
            { /* block id: 426 */
                return &p_1248->g_22;
            }
            return &p_1248->g_22;
        }
        else
        { /* block id: 430 */
            int32_t **l_883[6];
            int8_t l_920 = 0x10L;
            int i;
            for (i = 0; i < 6; i++)
                l_883[i] = &l_47;
            p_1248->g_522 = ((safe_sub_func_int64_t_s_s((l_880[1][2][4] , p_38), (safe_div_func_uint64_t_u_u(p_1248->g_66[0].f0, (*l_47))))) , &p_1248->g_22);
            for (p_1248->g_363 = 0; (p_1248->g_363 != 16); p_1248->g_363 = safe_add_func_int16_t_s_s(p_1248->g_363, 7))
            { /* block id: 434 */
                VECTOR(int16_t, 8) l_912 = (VECTOR(int16_t, 8))(0x0956L, (VECTOR(int16_t, 4))(0x0956L, (VECTOR(int16_t, 2))(0x0956L, 0x35DFL), 0x35DFL), 0x35DFL, 0x0956L, 0x35DFL);
                uint8_t l_921[4];
                int64_t *l_923 = &p_1248->g_561[4][2].f4;
                int32_t *l_925 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_921[i] = 248UL;
                l_924 = ((p_1248->g_531[5] , (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x4E30L, ((VECTOR(int16_t, 2))((-1L), 0x15FCL)), 8L)))).odd)).odd != ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((!((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 0x518EL)), (safe_sub_func_int64_t_s_s(((*l_923) = (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_47 = &l_857[3]) == &p_1248->g_22), ((safe_mul_func_int16_t_s_s((p_38 , ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((!(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(l_858, 15)), 6)) == p_1248->g_771.f5.f0) , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x155AL, ((VECTOR(int16_t, 2))(6L, 0x32A5L)), 0x00E1L, ((VECTOR(int16_t, 2))(p_1248->g_910.yz)), 0x020BL, 0x32EDL)), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(0x6BL, 0x09L)), ((VECTOR(uint8_t, 16))(p_1248->g_911.s3351425131171706)).s7c))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(l_912.s33)).yxxyyyxy, ((VECTOR(int16_t, 16))(p_1248->g_913.xxxxyxyxxyxxxyxx)).odd, ((VECTOR(int16_t, 16))((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((*p_1248->g_488) != (void*)0), (safe_mod_func_int64_t_s_s((((l_920 != l_912.s1) | 5L) , l_858), l_921[2])))), 0)), 0x5758L, ((VECTOR(int16_t, 2))(1L)), (*p_1248->g_453), (*p_1248->g_453), (*p_1248->g_453), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x6E9FL)), 6L, l_921[0], (-3L), (-1L), (-1L))).even))))).s70, ((VECTOR(int16_t, 2))((-1L)))))), ((VECTOR(int16_t, 2))(0x66ACL)), ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 2))(0x6A85L)), ((VECTOR(int16_t, 4))((-3L))))).s36, ((VECTOR(int16_t, 2))(1L))))), l_922, (*p_1248->g_453), ((VECTOR(int16_t, 4))(0L)))).s3921))))).y)), p_38)) <= 4294967292UL), (-1L))), l_876)) ^ (*p_1248->g_522))), 0UL)) || 0xAE7014CCL))), p_37)), l_922))), 0x10AA217935E883E5L)), l_921[2], 0x0935L, ((VECTOR(int16_t, 2))(0x3D52L)), 0L)).s7) | p_1248->g_692.s1) > 0UL) | p_38), l_858)), 0L)) & 0L))) >= 0x0C544F1C22075672L);
                l_47 = l_925;
            }
        }
        for (p_1248->g_771.f5.f0 = 0; (p_1248->g_771.f5.f0 != (-27)); p_1248->g_771.f5.f0--)
        { /* block id: 443 */
            uint16_t l_928 = 4UL;
            int32_t **l_929 = &p_1248->g_522;
            int32_t *l_931 = &l_857[3];
            int32_t *l_932 = (void*)0;
            int32_t *l_933 = (void*)0;
            int32_t *l_934 = &l_857[0];
            int32_t *l_935 = &l_857[0];
            int32_t *l_936 = (void*)0;
            int32_t *l_937 = (void*)0;
            int32_t *l_938[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_928 ^= p_38;
            (*l_929) = func_23(l_928, p_1248);
            l_940--;
        }
        l_857[1] |= (*p_1248->g_522);
    }
    (*l_945) = l_943;
    for (p_38 = 0; (p_38 <= 10); p_38 = safe_add_func_uint16_t_u_u(p_38, 1))
    { /* block id: 453 */
        uint64_t l_957 = 0x90596882331D04BDL;
        int32_t l_971 = 0x7749B237L;
        int32_t *l_1011 = (void*)0;
        int32_t *l_1012[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S2 ***l_1016 = &l_1013[3][0];
        int i;
        for (p_1248->g_85 = 0; (p_1248->g_85 > 36); ++p_1248->g_85)
        { /* block id: 456 */
            uint32_t l_968 = 0UL;
            int32_t l_970 = (-5L);
            for (p_1248->g_771.f6 = 0; (p_1248->g_771.f6 > 4); p_1248->g_771.f6 = safe_add_func_uint16_t_u_u(p_1248->g_771.f6, 8))
            { /* block id: 459 */
                uint16_t *l_955 = &p_1248->g_771.f1;
                uint64_t *l_969 = &l_957;
                l_971 &= ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_37, (safe_mul_func_int8_t_s_s((((*l_955) &= l_954) > 3L), ((l_956.x <= l_957) && (((*p_1248->g_365) = ((l_970 = ((*l_969) ^= ((p_1248->g_510.y <= (((1UL && (((p_1248->g_320.x & (safe_unary_minus_func_int16_t_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 != l_967), 0UL)), 0x6864L)), 1UL)), (*p_1248->g_453))) < p_1248->g_739.x)))) >= 0xEC37A977F06F95E6L) <= FAKE_DIVERGE(p_1248->global_1_offset, get_global_id(1), 10))) | l_968) <= 0x5AC75D4F7E021C5EL)) | p_37))) & p_1248->g_633.y)) && p_38)))), 0UL, 0x15AF21EBL, l_968, 0x9E585CCEL, ((VECTOR(uint32_t, 8))(1UL)), 0x09728BFFL, 0x5578BD18L)))).sd >= p_1248->g_610) && p_1248->g_96[0]);
                if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 58]) == 6))
                { /* block id: 466 */
                    VECTOR(uint32_t, 16) l_972 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 5UL), 5UL), 5UL, 4294967292UL, 5UL, (VECTOR(uint32_t, 2))(4294967292UL, 5UL), (VECTOR(uint32_t, 2))(4294967292UL, 5UL), 4294967292UL, 5UL, 4294967292UL, 5UL);
                    VECTOR(uint32_t, 16) l_973 = (VECTOR(uint32_t, 16))(0x2BC0ED62L, (VECTOR(uint32_t, 4))(0x2BC0ED62L, (VECTOR(uint32_t, 2))(0x2BC0ED62L, 0x17315ADFL), 0x17315ADFL), 0x17315ADFL, 0x2BC0ED62L, 0x17315ADFL, (VECTOR(uint32_t, 2))(0x2BC0ED62L, 0x17315ADFL), (VECTOR(uint32_t, 2))(0x2BC0ED62L, 0x17315ADFL), 0x2BC0ED62L, 0x17315ADFL, 0x2BC0ED62L, 0x17315ADFL);
                    uint64_t l_974[10][5][1] = {{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}};
                    uint32_t l_975 = 0x12B3B6D4L;
                    VECTOR(uint32_t, 2) l_978 = (VECTOR(uint32_t, 2))(0xAE129D03L, 6UL);
                    VECTOR(uint32_t, 4) l_979 = (VECTOR(uint32_t, 4))(0x1026F834L, (VECTOR(uint32_t, 2))(0x1026F834L, 0x8A97AE37L), 0x8A97AE37L);
                    uint32_t l_980 = 0UL;
                    VECTOR(int32_t, 2) l_981 = (VECTOR(int32_t, 2))(0x788AB09BL, 0x58DECCE9L);
                    VECTOR(int32_t, 8) l_982 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L));
                    VECTOR(int32_t, 16) l_983 = (VECTOR(int32_t, 16))(0x150F5B25L, (VECTOR(int32_t, 4))(0x150F5B25L, (VECTOR(int32_t, 2))(0x150F5B25L, 0x68A4A4ABL), 0x68A4A4ABL), 0x68A4A4ABL, 0x150F5B25L, 0x68A4A4ABL, (VECTOR(int32_t, 2))(0x150F5B25L, 0x68A4A4ABL), (VECTOR(int32_t, 2))(0x150F5B25L, 0x68A4A4ABL), 0x150F5B25L, 0x68A4A4ABL, 0x150F5B25L, 0x68A4A4ABL);
                    VECTOR(int32_t, 4) l_984 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x2A5159ACL), 0x2A5159ACL);
                    VECTOR(int32_t, 2) l_985 = (VECTOR(int32_t, 2))(0x00479A43L, 0x55F653BBL);
                    int8_t l_986[6][4][8] = {{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}},{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}},{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}},{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}},{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}},{{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL},{0x7EL,0x3FL,0x3FL,0x7EL,0x7EL,0x3FL,0x3FL,0x7EL}}};
                    VECTOR(int32_t, 2) l_987 = (VECTOR(int32_t, 2))(0x69C82432L, 0L);
                    VECTOR(int8_t, 8) l_988 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x0CL), 0x0CL), 0x0CL, 0x15L, 0x0CL);
                    int8_t l_989 = 0L;
                    VECTOR(uint32_t, 16) l_990 = (VECTOR(uint32_t, 16))(0xF31108BAL, (VECTOR(uint32_t, 4))(0xF31108BAL, (VECTOR(uint32_t, 2))(0xF31108BAL, 4294967295UL), 4294967295UL), 4294967295UL, 0xF31108BAL, 4294967295UL, (VECTOR(uint32_t, 2))(0xF31108BAL, 4294967295UL), (VECTOR(uint32_t, 2))(0xF31108BAL, 4294967295UL), 0xF31108BAL, 4294967295UL, 0xF31108BAL, 4294967295UL);
                    VECTOR(uint32_t, 2) l_991 = (VECTOR(uint32_t, 2))(0x7C58C11BL, 0x4D0AE775L);
                    uint8_t l_992[4][4][8] = {{{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL}},{{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL}},{{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL}},{{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL},{9UL,0x61L,0x8CL,0xFCL,8UL,0UL,250UL,255UL}}};
                    int16_t l_993 = 6L;
                    VECTOR(uint64_t, 2) l_994 = (VECTOR(uint64_t, 2))(0x997C3E4F521E8803L, 0xA669507BBFB5047AL);
                    int64_t l_995 = 0x6D6755D9F856F22BL;
                    int32_t l_996 = 0x388EC0BBL;
                    int64_t l_997 = 0x2E8D6D3D2F7BC4FFL;
                    uint8_t l_998[2];
                    uint16_t l_999 = 0xB884L;
                    struct S1 l_1001 = {0x5FED8779L,0UL,0x52AFL,0x0D7BBA61L,2L,0x0F9E3A02L,0x6A308386L,0x5494L};/* VOLATILE GLOBAL l_1001 */
                    struct S1 l_1002 = {0x421D5A5EL,0x81AB71E0L,0L,-4L,1L,9L,7L,0x7591L};/* VOLATILE GLOBAL l_1002 */
                    struct S1 *l_1000[3][3] = {{&l_1001,&l_1002,&l_1001},{&l_1001,&l_1002,&l_1001},{&l_1001,&l_1002,&l_1001}};
                    int32_t *l_1003 = &l_996;
                    int32_t *l_1004 = &l_1002.f3;
                    uint32_t l_1005 = 0UL;
                    int32_t l_1006 = (-1L);
                    int32_t l_1007 = 0x11F49A51L;
                    int8_t l_1008 = 0x6DL;
                    int32_t *l_1009[6][10] = {{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006},{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006},{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006},{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006},{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006},{&l_1001.f3,&l_996,&l_1002.f3,&l_1002.f3,&l_1001.f3,&l_1001.f3,&l_996,&l_1001.f3,(void*)0,&l_1006}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_998[i] = 1UL;
                    l_1000[2][1] = ((((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_972.sa5c5d519)), GROUP_DIVERGE(2, 1), 0x8751AE05L, 1UL, ((VECTOR(uint32_t, 4))(l_973.s326b)), 0x92C56E61L)).s68))).yyyy, (uint32_t)((l_974[1][1][0] , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(4294967295UL, (l_975++), 0UL, 0x767BA1EFL)), ((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(l_978.xxyy)).lo, ((VECTOR(uint32_t, 16))(0x4ED511E3L, 4294967295UL, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(l_979.wxxy)).odd, (uint32_t)0xFA418970L))), 4294967286UL, 0x54641EC3L, 0xDBB947BEL, 6UL, 0xE7DDA140L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(0x2A525456L, 0x404C5E62L)).yxyxyxyx, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(1UL, l_980, 4294967288UL, 0x902AB1B4L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(9UL, ((VECTOR(uint32_t, 2))(0x588F51FEL, 0x4009539AL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_981.xxxxyyyxyyyxxyyy)).hi, (int32_t)0L))).s5013655023734722, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0L, 0x70EF9D94L)).xxxx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(l_982.s2302)).xzzyyyzxxzzzwxww, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_983.sdc2267fd552750d3)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_984.zy)), ((VECTOR(int32_t, 16))(0x0B633248L, 0x34693672L, ((VECTOR(int32_t, 2))(l_985.xy)).lo, l_986[1][0][7], ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_987.xxxyxxxx)).s5, 1L, 4L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_988.s5770)).yxxxzxyw, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(252UL, 0xA4L)).yxxx, ((VECTOR(uint8_t, 8))(9UL, l_989, 0x0FL, 0x52L, 0xCCL, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(9UL, (((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_990.s4dacabbb6751cb6f)).scbc3)))).xzzwwxwzwywwxzwz, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_991.yyxxxxxy)).s46)).xyyxxxyxyxxyxxyx))).s3 , 0x77L), 0xFDL, 3UL, 0x8CL, ((VECTOR(uint8_t, 2))(1UL)), 8UL)).odd))).odd, ((VECTOR(uint8_t, 2))(251UL))))), 0xB2L)).lo))).xzywyzzz))))), ((VECTOR(uint16_t, 8))(0xADF8L))))).s22)), l_992[3][1][4], ((VECTOR(int32_t, 2))(0x3BE969D6L)), 0x63E12C75L, ((VECTOR(int32_t, 2))(0x1F9B762FL)), ((VECTOR(int32_t, 4))(5L)), 0x4F599140L)).odd, (int32_t)l_993, (int32_t)l_994.x))).s7, ((VECTOR(int32_t, 8))(0x6149FFA5L)), 0x37EC22F5L, 0x0F02A407L, (-7L))).sf8))), 0x07A8A82AL, l_995, (-1L), ((VECTOR(int32_t, 2))(1L)), (-8L))).even)), 0x06AC7A22L, ((VECTOR(int32_t, 2))(0x0F859E6DL)), 0x73F10E58L)).s0671027445754264)))))).sf719, ((VECTOR(int32_t, 4))(1L))))), ((VECTOR(int32_t, 4))(0x65E757CCL))))).wxwyywwyyxyyxyzz))).sba)), ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(4294967292UL)), 4294967294UL, 0xE9B1E231L)), 1UL, ((VECTOR(uint32_t, 2))(0x3D16A25FL)), 0UL, 8UL)).even, ((VECTOR(uint32_t, 8))(0x83F2B12AL))))), ((VECTOR(uint32_t, 4))(0xF727870DL)), ((VECTOR(uint32_t, 4))(4294967295UL)))).scd)), ((VECTOR(uint32_t, 2))(0UL)), ((VECTOR(uint32_t, 4))(0x15F49174L)), 4294967295UL, 0xF58BF16BL, 1UL, 1UL)).s8b, (uint32_t)l_996, (uint32_t)GROUP_DIVERGE(2, 1)))).xyyxxyyy))), ((VECTOR(uint32_t, 8))(4294967287UL))))).odd, ((VECTOR(uint32_t, 4))(4294967292UL))))), ((VECTOR(uint32_t, 2))(0x14050B87L)), 0x600E095AL, 0xBB39671CL)).s46)).yxxxxyyyxyyxxyxy)))), ((VECTOR(uint32_t, 16))(0xD8299766L))))).s9, l_997, 4294967295UL, 0x676D33F1L)), ((VECTOR(uint32_t, 2))(4294967295UL)), 2UL)).s3b, ((VECTOR(uint32_t, 2))(8UL))))), 4294967289UL)))).s0) , l_998[1]), (uint32_t)l_999))).z , 0UL) , (void*)0);
                    l_1004 = l_1003;
                    l_1008 = ((*l_1004) = ((l_1006 = l_1005) , l_1007));
                    l_1009[3][1] = (void*)0;
                    unsigned int result = 0;
                    result += l_972.sf;
                    result += l_972.se;
                    result += l_972.sd;
                    result += l_972.sc;
                    result += l_972.sb;
                    result += l_972.sa;
                    result += l_972.s9;
                    result += l_972.s8;
                    result += l_972.s7;
                    result += l_972.s6;
                    result += l_972.s5;
                    result += l_972.s4;
                    result += l_972.s3;
                    result += l_972.s2;
                    result += l_972.s1;
                    result += l_972.s0;
                    result += l_973.sf;
                    result += l_973.se;
                    result += l_973.sd;
                    result += l_973.sc;
                    result += l_973.sb;
                    result += l_973.sa;
                    result += l_973.s9;
                    result += l_973.s8;
                    result += l_973.s7;
                    result += l_973.s6;
                    result += l_973.s5;
                    result += l_973.s4;
                    result += l_973.s3;
                    result += l_973.s2;
                    result += l_973.s1;
                    result += l_973.s0;
                    int l_974_i0, l_974_i1, l_974_i2;
                    for (l_974_i0 = 0; l_974_i0 < 10; l_974_i0++) {
                        for (l_974_i1 = 0; l_974_i1 < 5; l_974_i1++) {
                            for (l_974_i2 = 0; l_974_i2 < 1; l_974_i2++) {
                                result += l_974[l_974_i0][l_974_i1][l_974_i2];
                            }
                        }
                    }
                    result += l_975;
                    result += l_978.y;
                    result += l_978.x;
                    result += l_979.w;
                    result += l_979.z;
                    result += l_979.y;
                    result += l_979.x;
                    result += l_980;
                    result += l_981.y;
                    result += l_981.x;
                    result += l_982.s7;
                    result += l_982.s6;
                    result += l_982.s5;
                    result += l_982.s4;
                    result += l_982.s3;
                    result += l_982.s2;
                    result += l_982.s1;
                    result += l_982.s0;
                    result += l_983.sf;
                    result += l_983.se;
                    result += l_983.sd;
                    result += l_983.sc;
                    result += l_983.sb;
                    result += l_983.sa;
                    result += l_983.s9;
                    result += l_983.s8;
                    result += l_983.s7;
                    result += l_983.s6;
                    result += l_983.s5;
                    result += l_983.s4;
                    result += l_983.s3;
                    result += l_983.s2;
                    result += l_983.s1;
                    result += l_983.s0;
                    result += l_984.w;
                    result += l_984.z;
                    result += l_984.y;
                    result += l_984.x;
                    result += l_985.y;
                    result += l_985.x;
                    int l_986_i0, l_986_i1, l_986_i2;
                    for (l_986_i0 = 0; l_986_i0 < 6; l_986_i0++) {
                        for (l_986_i1 = 0; l_986_i1 < 4; l_986_i1++) {
                            for (l_986_i2 = 0; l_986_i2 < 8; l_986_i2++) {
                                result += l_986[l_986_i0][l_986_i1][l_986_i2];
                            }
                        }
                    }
                    result += l_987.y;
                    result += l_987.x;
                    result += l_988.s7;
                    result += l_988.s6;
                    result += l_988.s5;
                    result += l_988.s4;
                    result += l_988.s3;
                    result += l_988.s2;
                    result += l_988.s1;
                    result += l_988.s0;
                    result += l_989;
                    result += l_990.sf;
                    result += l_990.se;
                    result += l_990.sd;
                    result += l_990.sc;
                    result += l_990.sb;
                    result += l_990.sa;
                    result += l_990.s9;
                    result += l_990.s8;
                    result += l_990.s7;
                    result += l_990.s6;
                    result += l_990.s5;
                    result += l_990.s4;
                    result += l_990.s3;
                    result += l_990.s2;
                    result += l_990.s1;
                    result += l_990.s0;
                    result += l_991.y;
                    result += l_991.x;
                    int l_992_i0, l_992_i1, l_992_i2;
                    for (l_992_i0 = 0; l_992_i0 < 4; l_992_i0++) {
                        for (l_992_i1 = 0; l_992_i1 < 4; l_992_i1++) {
                            for (l_992_i2 = 0; l_992_i2 < 8; l_992_i2++) {
                                result += l_992[l_992_i0][l_992_i1][l_992_i2];
                            }
                        }
                    }
                    result += l_993;
                    result += l_994.y;
                    result += l_994.x;
                    result += l_995;
                    result += l_996;
                    result += l_997;
                    int l_998_i0;
                    for (l_998_i0 = 0; l_998_i0 < 2; l_998_i0++) {
                        result += l_998[l_998_i0];
                    }
                    result += l_999;
                    result += l_1001.f0;
                    result += l_1001.f1;
                    result += l_1001.f2;
                    result += l_1001.f3;
                    result += l_1001.f4;
                    result += l_1001.f5;
                    result += l_1001.f6;
                    result += l_1001.f7;
                    result += l_1002.f0;
                    result += l_1002.f1;
                    result += l_1002.f2;
                    result += l_1002.f3;
                    result += l_1002.f4;
                    result += l_1002.f5;
                    result += l_1002.f6;
                    result += l_1002.f7;
                    result += l_1005;
                    result += l_1006;
                    result += l_1007;
                    result += l_1008;
                    atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 58], result);
                }
                else
                { /* block id: 474 */
                    (1 + 1);
                }
                l_971 = 0x0A6CC9E0L;
            }
        }
        l_857[0] &= ((VECTOR(int32_t, 4))(l_1010.xwzy)).z;
        (*l_1016) = l_1013[1][0];
        if ((*p_1248->g_522))
            continue;
    }
    (*l_1048) |= ((((p_38 , ((*l_619) = ((safe_rshift_func_uint16_t_u_u(((~(func_56(l_956.z, ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((p_37 < (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_38, (((((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((p_38 || 0UL) && ((*p_1248->g_453) = (safe_lshift_func_int16_t_s_s((l_1037[1][6] != ((*l_1040) = &l_1038)), (safe_rshift_func_uint16_t_u_s((((((safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((FAKE_DIVERGE(p_1248->global_2_offset, get_global_id(2), 10) || p_38), p_1248->g_1039.f4)), (*p_1248->g_522))) , 7L) >= p_38) < p_38) , p_1248->g_363), 7)))))), 6)), p_37)) > p_38) >= p_38) ^ l_59.s0) | (-1L)))), p_1248->g_531[7])), (*p_1248->g_522))), p_1248->g_633.z))), 11)), p_37)) , (void*)0), p_1248) , 0x87EDL)) | 65535UL), FAKE_DIVERGE(p_1248->group_0_offset, get_group_id(0), 10))) | l_954))) > 0xF9L) , l_956.y) & 0xDEF05B85699C41C3L);
    return &p_1248->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_85 p_1248->g_22 p_1248->g_633 p_1248->g_561.f3 p_1248->g_644 p_1248->g_620 p_1248->g_604 p_1248->g_402 p_1248->g_488 p_1248->g_489 p_1248->g_561.f4 p_1248->g_692 p_1248->g_364 p_1248->g_365 p_1248->g_96 p_1248->g_189 p_1248->g_453 p_1248->g_596 p_1248->g_739 p_1248->g_510 p_1248->g_742 p_1248->g_66.f0 p_1248->g_66 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->l_comm_values p_1248->g_525 p_1248->g_531
 * writes: p_1248->g_85 p_1248->g_522 p_1248->g_66 p_1248->g_561.f3 p_1248->g_620 p_1248->g_402 p_1248->g_489 p_1248->g_610 p_1248->g_365 p_1248->g_771.f1 p_1248->g_771.f5.f0 p_1248->g_853
 */
int32_t  func_41(int32_t * p_42, struct S0  p_43, uint64_t  p_44, uint32_t  p_45, int32_t * p_46, struct S3 * p_1248)
{ /* block id: 253 */
    int64_t l_635[5][5][8] = {{{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L}},{{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L}},{{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L}},{{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L}},{{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L},{0L,3L,0x2C3B0E2E9BDA65A4L,(-1L),0x4E24A907B4BCBE04L,9L,0x455CD33D2075FC08L,0x1AAB6ED630D870A8L}}};
    struct S1 *l_640 = (void*)0;
    struct S1 **l_639 = &l_640;
    uint64_t **l_645 = &p_1248->g_489;
    int32_t l_651 = (-9L);
    int32_t l_657 = 0x760137A2L;
    uint32_t l_662[1];
    int16_t l_707 = 1L;
    struct S0 l_758 = {0x1A6AL};
    int32_t l_823 = (-1L);
    struct S0 *l_851 = (void*)0;
    struct S0 **l_850 = &l_851;
    struct S0 ***l_852[9] = {&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_662[i] = 0xC19ED2C8L;
    for (p_1248->g_85 = 0; (p_1248->g_85 == 30); p_1248->g_85++)
    { /* block id: 256 */
        struct S0 l_629 = {0x13ABL};
        struct S1 **l_641 = &l_640;
        int32_t l_653 = 8L;
        int32_t l_654 = 2L;
        int32_t l_655 = 0x4C8AFE85L;
        int32_t l_658 = 0x6246FAB6L;
        int32_t l_660 = 0x36C764D7L;
        int32_t l_661 = 0x5D476ED0L;
        uint64_t *l_666 = &p_1248->g_85;
        VECTOR(int8_t, 16) l_831 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int8_t, 2))((-1L), (-5L)), (VECTOR(int8_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L));
        int i, j;
        for (p_45 = (-17); (p_45 <= 20); p_45 = safe_add_func_uint64_t_u_u(p_45, 8))
        { /* block id: 259 */
            int32_t **l_626 = &p_1248->g_522;
            VECTOR(int16_t, 16) l_632 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6941L), 0x6941L), 0x6941L, 1L, 0x6941L, (VECTOR(int16_t, 2))(1L, 0x6941L), (VECTOR(int16_t, 2))(1L, 0x6941L), 1L, 0x6941L, 1L, 0x6941L);
            VECTOR(int32_t, 2) l_636 = (VECTOR(int32_t, 2))(0L, 0x6080983EL);
            struct S1 **l_643 = &l_640;
            int32_t l_665 = 0x24BB571EL;
            VECTOR(uint32_t, 2) l_694 = (VECTOR(uint32_t, 2))(0x4FD13B51L, 4294967295UL);
            struct S2 *l_770 = &p_1248->g_771;
            int i;
            (*l_626) = func_23(p_43.f0, p_1248);
            for (p_43.f0 = 7; (p_43.f0 <= 8); p_43.f0++)
            { /* block id: 263 */
                struct S0 *l_630 = &p_1248->g_66[1];
                int32_t *l_631 = &p_1248->g_561[4][2].f3;
                int32_t *l_634[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_634[i] = (void*)0;
                (*l_630) = l_629;
                (*l_631) = (*p_46);
                l_635[4][2][6] |= ((*l_631) &= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_632.sbd)), ((VECTOR(uint16_t, 8))(p_1248->g_633.zzzwxywx)).s53))).hi);
            }
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_636.xyxx)).xwyzxwxy)).s2)
            { /* block id: 269 */
                struct S1 ***l_642[9] = {&l_641,&l_641,&l_641,&l_641,&l_641,&l_641,&l_641,&l_641,&l_641};
                uint32_t *l_646 = &p_1248->g_620;
                int32_t *l_647 = (void*)0;
                int32_t *l_648[3];
                VECTOR(uint16_t, 8) l_708 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x05C3L), 0x05C3L), 0x05C3L, 0UL, 0x05C3L);
                uint8_t *l_756 = &p_1248->g_96[0];
                int i;
                for (i = 0; i < 3; i++)
                    l_648[i] = &p_1248->g_561[4][2].f3;
                if ((safe_div_func_int8_t_s_s(1L, (((l_639 == (l_643 = l_641)) , ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1248->g_644.s4500)).zzzzyxwx)).lo)).yzzywxxwyywwzxyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xCE7A0CE5L, (l_645 != (void*)0), 1UL, ((*l_646) &= p_1248->g_644.s0), 0x53211BCBL, 1UL, 0x091BC0E0L, 5UL)))).odd)).zyyyywzxzwyxzzyw))).sd) , ((p_1248->g_604.y != (l_636.x &= l_629.f0)) , 0x71L)))))
                { /* block id: 273 */
                    int32_t l_659 = 0x0808D874L;
                    int32_t *l_680 = (void*)0;
                    VECTOR(uint64_t, 4) l_693 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x50E8C33C199CDB74L), 0x50E8C33C199CDB74L);
                    uint16_t *l_709 = (void*)0;
                    uint16_t *l_710 = (void*)0;
                    uint16_t *l_711 = &p_1248->g_610;
                    int32_t l_712 = 0x30E3A2E6L;
                    int32_t **l_713 = &l_648[0];
                    int64_t *l_714 = (void*)0;
                    int64_t *l_715 = &l_635[2][4][3];
                    int32_t *l_716 = &p_1248->g_561[4][2].f3;
                    int i;
                    for (p_1248->g_402 = (-3); (p_1248->g_402 > 32); p_1248->g_402 = safe_add_func_uint32_t_u_u(p_1248->g_402, 1))
                    { /* block id: 276 */
                        int32_t l_652 = (-4L);
                        int32_t l_656 = 0L;
                        uint64_t **l_667 = &l_666;
                        --l_662[0];
                        if (l_665)
                            break;
                        l_636.x &= (((*l_645) = (*p_1248->g_488)) == ((*l_667) = l_666));
                        return (*p_46);
                    }
                    (*l_716) &= ((((safe_div_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((*l_715) = (((*l_626) = l_680) != ((*l_713) = func_23((safe_unary_minus_func_int32_t_s((((0x771D480DL >= (~((safe_sub_func_uint32_t_u_u(p_1248->g_561[4][2].f4, ((safe_div_func_uint16_t_u_u(((*l_711) = (safe_rshift_func_uint16_t_u_u((l_657 &= ((safe_add_func_uint16_t_u_u(((((*p_1248->g_453) = (safe_div_func_uint64_t_u_u(4UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1248->g_692.s76)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 2))(l_693.wx)).xxxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(l_694.yxxy)).odd, ((VECTOR(uint32_t, 4))(((safe_mul_func_uint16_t_u_u(l_661, l_635[4][2][6])) || 0UL), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(p_44, (safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_1248->local_2_offset, get_local_id(2), 10), (l_655 = l_707))))), (**p_1248->g_364))), 1)) || 0xB3C30F41L), (-8L))), 0xC571ED12L, 0xA5515D98L)).lo))), 1UL, 1UL)).xwxyywxwxxwywwww)).hi)).s57, ((VECTOR(uint32_t, 2))(4294967293UL))))).xxxx)).yzyzwyyw, ((VECTOR(uint64_t, 8))(1UL))))), ((VECTOR(uint64_t, 8))(18446744073709551613UL))))), (uint64_t)p_1248->g_189.y, (uint64_t)p_44))), 7UL, p_1248->g_22, 0UL, l_708.s7, ((VECTOR(uint64_t, 4))(0xFD5632C236CC7A9AL)))).s0e10, ((VECTOR(uint64_t, 4))(0xBFDAC955A96938ACL))))), 0x96E770971B3EFD4FL)).s7))) < l_661) | p_43.f0), FAKE_DIVERGE(p_1248->global_0_offset, get_global_id(0), 10))) > (-8L))), 5))), l_629.f0)) | p_1248->g_633.w))) || p_1248->g_596.s5))) && 0x199C4583L) != l_712))), p_1248)))) || (-3L)), 5)) != 0UL), 2UL)), 18446744073709551612UL)) >= 1UL), (*p_46))) && 0x17L) | 0L) < 0x4A06L);
                    (*l_716) ^= ((void*)0 == l_647);
                }
                else
                { /* block id: 293 */
                    uint32_t l_749 = 4294967286UL;
                    for (l_629.f0 = 11; (l_629.f0 != 25); l_629.f0 = safe_add_func_uint8_t_u_u(l_629.f0, 5))
                    { /* block id: 296 */
                        return (*p_42);
                    }
                    if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 3]) == 2))
                    { /* block id: 300 */
                        int8_t l_719 = 1L;
                        uint32_t l_720 = 4294967290UL;
                        uint64_t l_723 = 1UL;
                        int32_t l_727[3];
                        int32_t *l_726[7] = {&l_727[1],&l_727[1],&l_727[1],&l_727[1],&l_727[1],&l_727[1],&l_727[1]};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_727[i] = 1L;
                        l_719 ^= 0x12D4AFBAL;
                        l_720--;
                        --l_723;
                        l_726[4] = l_726[3];
                        unsigned int result = 0;
                        result += l_719;
                        result += l_720;
                        result += l_723;
                        int l_727_i0;
                        for (l_727_i0 = 0; l_727_i0 < 3; l_727_i0++) {
                            result += l_727[l_727_i0];
                        }
                        atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 3], result);
                    }
                    else
                    { /* block id: 305 */
                        (1 + 1);
                    }
                    for (l_660 = 4; (l_660 == (-29)); l_660 = safe_sub_func_uint32_t_u_u(l_660, 2))
                    { /* block id: 310 */
                        int64_t l_730[7];
                        int32_t l_731 = 0x4A9CF6ECL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_730[i] = 0x31CC79E230C8FB03L;
                        l_731 ^= l_730[1];
                    }
                    for (l_653 = (-3); (l_653 <= (-10)); l_653 = safe_sub_func_uint64_t_u_u(l_653, 5))
                    { /* block id: 315 */
                        VECTOR(int16_t, 2) l_736 = (VECTOR(int16_t, 2))(0x3BC1L, 0x6011L);
                        uint64_t *l_743 = (void*)0;
                        uint64_t *l_744 = (void*)0;
                        uint64_t *l_745 = (void*)0;
                        uint64_t *l_746 = (void*)0;
                        uint64_t *l_747 = (void*)0;
                        uint32_t l_748 = 0UL;
                        int i;
                        l_748 &= (safe_mul_func_uint16_t_u_u(((((void*)0 != &p_46) >= (0x6A6CL != ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x6632L, 0L)), (-1L), ((VECTOR(int16_t, 4))(l_736.xxyy)), (-7L))).s32, ((VECTOR(int16_t, 2))(1L, 3L))))).hi)) != l_657), ((VECTOR(int16_t, 4))((safe_add_func_uint16_t_u_u(0xD6D8L, (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1248->g_739.xwzzwzxw)).s22)).even == (p_44 = (safe_sub_func_uint32_t_u_u(p_1248->g_510.x, ((void*)0 != p_1248->g_742))))))), ((VECTOR(int16_t, 2))(0x03A6L, 0x612DL)), 0x481EL)).y));
                        (*l_639) = (void*)0;
                        (*l_626) = &p_1248->g_22;
                        ++l_749;
                    }
                }
                if ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(0x8A8EL, 0xBE43L)).even, (*p_1248->g_453))), ((l_636.y &= (l_756 == ((*p_1248->g_364) = l_756))) > 0x1288F4E7L))))
                { /* block id: 325 */
                    int32_t *l_757 = (void*)0;
                    struct S0 *l_759 = &l_629;
                    (*l_626) = l_757;
                    (*l_759) = l_758;
                    for (p_43.f0 = 4; (p_43.f0 <= 28); p_43.f0 = safe_add_func_int64_t_s_s(p_43.f0, 7))
                    { /* block id: 330 */
                        (*l_759) = p_1248->g_66[0];
                    }
                    (*l_626) = p_46;
                }
                else
                { /* block id: 334 */
                    struct S0 *l_762 = &p_1248->g_66[0];
                    (*l_626) = &l_657;
                    (*l_762) = p_1248->g_66[0];
                }
            }
            else
            { /* block id: 338 */
                return l_635[4][4][3];
            }
            for (p_43.f0 = 6; (p_43.f0 <= 12); p_43.f0 = safe_add_func_int64_t_s_s(p_43.f0, 2))
            { /* block id: 343 */
                struct S2 **l_772 = &l_770;
                for (l_758.f0 = 9; (l_758.f0 >= (-17)); l_758.f0 = safe_sub_func_int8_t_s_s(l_758.f0, 4))
                { /* block id: 346 */
                    if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 21]) == 6))
                    { /* block id: 348 */
                        int32_t l_768 = 5L;
                        int32_t *l_767[2][4] = {{&l_768,&l_768,&l_768,&l_768},{&l_768,&l_768,&l_768,&l_768}};
                        int32_t *l_769 = &l_768;
                        int i, j;
                        l_769 = l_767[0][2];
                        unsigned int result = 0;
                        result += l_768;
                        atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 21], result);
                    }
                    else
                    { /* block id: 350 */
                        (1 + 1);
                    }
                }
                (*l_772) = l_770;
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1248->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u(0xD670F4E0L, 10))][(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))]));
        for (l_661 = (-22); (l_661 >= 16); l_661 = safe_add_func_uint16_t_u_u(l_661, 5))
        { /* block id: 362 */
            int32_t l_813 = 0x0EA1827FL;
            VECTOR(int32_t, 8) l_820 = (VECTOR(int32_t, 8))(0x5A736AFCL, (VECTOR(int32_t, 4))(0x5A736AFCL, (VECTOR(int32_t, 2))(0x5A736AFCL, 0L), 0L), 0L, 0x5A736AFCL, 0L);
            int i;
            for (p_1248->g_771.f1 = (-9); (p_1248->g_771.f1 >= 54); p_1248->g_771.f1++)
            { /* block id: 365 */
                uint32_t l_815 = 0xDFF68441L;
                int32_t l_821 = (-4L);
                int32_t l_822 = 0x12C64CE1L;
                if (l_658)
                    break;
                if ((atomic_inc(&p_1248->l_atomic_input[46]) == 1))
                { /* block id: 368 */
                    VECTOR(int32_t, 2) l_777 = (VECTOR(int32_t, 2))(0x2CB956B0L, 0x2A918BD3L);
                    int32_t l_795[2][7] = {{0L,(-1L),0x2AB41C1CL,(-1L),0L,0L,(-1L)},{0L,(-1L),0x2AB41C1CL,(-1L),0L,0L,(-1L)}};
                    int16_t l_796[6][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int32_t l_797 = (-8L);
                    int32_t l_798[7][5] = {{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L},{1L,1L,0x3F2D83EFL,1L,7L}};
                    int32_t l_799 = 0x73ECEF4DL;
                    int32_t l_800 = 0x5765041DL;
                    int32_t l_801 = 2L;
                    int32_t l_802 = 0x7DAAE44EL;
                    int16_t l_803 = 0x0AD6L;
                    uint32_t l_804 = 5UL;
                    int8_t l_807 = 0x55L;
                    int8_t l_808 = 0x45L;
                    int32_t l_809 = (-1L);
                    struct S0 l_810[10][3] = {{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}},{{8L},{8L},{8L}}};
                    int i, j;
                    for (l_777.y = 0; (l_777.y <= 20); l_777.y = safe_add_func_int32_t_s_s(l_777.y, 6))
                    { /* block id: 371 */
                        int32_t l_781[5][4][10] = {{{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L}},{{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L}},{{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L}},{{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L}},{{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L},{0x7D006D56L,(-5L),0x122637D4L,(-5L),0x7D006D56L,(-1L),0x0B7A1CD1L,0x2D646AD3L,(-7L),0x10EB01B0L}}};
                        int32_t *l_780 = &l_781[2][3][1];
                        int64_t l_782 = (-1L);
                        uint32_t l_783 = 0xAFDA37C8L;
                        uint32_t l_784 = 0UL;
                        int64_t l_785 = 0L;
                        struct S0 l_786 = {0x4377L};
                        VECTOR(int64_t, 8) l_787 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                        int32_t *l_788[4][7][9] = {{{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]}},{{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]}},{{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]}},{{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]},{&l_781[2][3][1],(void*)0,&l_781[2][3][1],&l_781[2][3][1],&l_781[2][3][1],&l_781[2][0][4],&l_781[2][0][4],&l_781[2][3][1],&l_781[2][3][1]}}};
                        int32_t *l_789 = &l_781[2][2][1];
                        int32_t *l_790 = (void*)0;
                        VECTOR(int32_t, 4) l_791 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L));
                        int32_t l_792 = 0L;
                        int64_t l_793 = 0x55252494D2A9CEE3L;
                        int32_t l_794 = (-1L);
                        int i, j, k;
                        l_780 = (void*)0;
                        l_790 = ((l_782 , (l_783 , (l_785 ^= (l_784 = 0x38243B3D52D0DC76L)))) , ((l_786 , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_787.s15655500)))).s3) , (l_789 = l_788[0][5][5])));
                        l_794 = (l_793 = (l_792 |= ((VECTOR(int32_t, 8))(l_791.yzyyywzy)).s7));
                    }
                    l_808 ^= ((++l_804) , l_807);
                    l_810[0][1] = ((GROUP_DIVERGE(2, 1) , l_809) , l_810[9][0]);
                    unsigned int result = 0;
                    result += l_777.y;
                    result += l_777.x;
                    int l_795_i0, l_795_i1;
                    for (l_795_i0 = 0; l_795_i0 < 2; l_795_i0++) {
                        for (l_795_i1 = 0; l_795_i1 < 7; l_795_i1++) {
                            result += l_795[l_795_i0][l_795_i1];
                        }
                    }
                    int l_796_i0, l_796_i1;
                    for (l_796_i0 = 0; l_796_i0 < 6; l_796_i0++) {
                        for (l_796_i1 = 0; l_796_i1 < 7; l_796_i1++) {
                            result += l_796[l_796_i0][l_796_i1];
                        }
                    }
                    result += l_797;
                    int l_798_i0, l_798_i1;
                    for (l_798_i0 = 0; l_798_i0 < 7; l_798_i0++) {
                        for (l_798_i1 = 0; l_798_i1 < 5; l_798_i1++) {
                            result += l_798[l_798_i0][l_798_i1];
                        }
                    }
                    result += l_799;
                    result += l_800;
                    result += l_801;
                    result += l_802;
                    result += l_803;
                    result += l_804;
                    result += l_807;
                    result += l_808;
                    result += l_809;
                    int l_810_i0, l_810_i1;
                    for (l_810_i0 = 0; l_810_i0 < 10; l_810_i0++) {
                        for (l_810_i1 = 0; l_810_i1 < 3; l_810_i1++) {
                            result += l_810[l_810_i0][l_810_i1].f0;
                        }
                    }
                    atomic_add(&p_1248->l_special_values[46], result);
                }
                else
                { /* block id: 384 */
                    (1 + 1);
                }
                if (l_655)
                { /* block id: 387 */
                    int32_t *l_818[10] = {&l_813,&l_813,&p_1248->g_22,&l_813,&l_813,&l_813,&l_813,&p_1248->g_22,&l_813,&l_813};
                    VECTOR(int64_t, 8) l_819 = (VECTOR(int64_t, 8))(0x74F47905769F4DC4L, (VECTOR(int64_t, 4))(0x74F47905769F4DC4L, (VECTOR(int64_t, 2))(0x74F47905769F4DC4L, 0L), 0L), 0L, 0x74F47905769F4DC4L, 0L);
                    uint16_t l_824 = 0x6889L;
                    int i;
                    for (p_1248->g_771.f5.f0 = 14; (p_1248->g_771.f5.f0 <= (-8)); p_1248->g_771.f5.f0 = safe_sub_func_uint16_t_u_u(p_1248->g_771.f5.f0, 1))
                    { /* block id: 390 */
                        int32_t *l_814 = &l_651;
                        (*l_814) |= l_813;
                        l_815++;
                    }
                    --l_824;
                    l_821 = (0x262EL == (safe_mod_func_int16_t_s_s(l_815, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))((*p_1248->g_453), ((*p_1248->g_453) = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_831.s41)).xxxyxyyxyxyxyxyx)).s776b)).z, ((p_1248->g_561[4][2].f4 == ((((l_831.s0 != ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))], p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))])), 15)), l_821)) && ((GROUP_DIVERGE(2, 1) , (((safe_mod_func_uint16_t_u_u((1L != p_1248->g_525.sf), 0x2017L)) & p_45) || 0L)) && l_655))) | p_1248->g_531[5]) & p_43.f0) && (*p_46))) , 5L)))), 0x56C1L, 0x2D77L)).wzzywzzy, ((VECTOR(int16_t, 8))(0x7124L)), ((VECTOR(int16_t, 8))(0x7017L))))).s4)));
                }
                else
                { /* block id: 397 */
                    if (l_820.s4)
                        break;
                }
            }
        }
    }
    if ((atomic_inc(&p_1248->l_atomic_input[9]) == 3))
    { /* block id: 404 */
        int32_t l_840 = 2L;
        struct S0 l_847 = {0x531DL};
        struct S0 *l_846 = &l_847;
        uint8_t l_848[6] = {0xBEL,0x61L,0xBEL,0xBEL,0x61L,0xBEL};
        int64_t l_849 = 0x36F23141B3920E49L;
        int i;
        for (l_840 = 0; (l_840 < 5); l_840 = safe_add_func_int64_t_s_s(l_840, 1))
        { /* block id: 407 */
            int32_t l_844 = (-1L);
            int32_t *l_843 = &l_844;
            int32_t *l_845 = &l_844;
            l_845 = l_843;
        }
        l_846 = (void*)0;
        l_849 = l_848[2];
        unsigned int result = 0;
        result += l_840;
        result += l_847.f0;
        int l_848_i0;
        for (l_848_i0 = 0; l_848_i0 < 6; l_848_i0++) {
            result += l_848[l_848_i0];
        }
        result += l_849;
        atomic_add(&p_1248->l_special_values[9], result);
    }
    else
    { /* block id: 412 */
        (1 + 1);
    }
    p_1248->g_853 = l_850;
    return (*p_42);
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_569 p_1248->g_22 p_1248->g_219 p_1248->g_363 p_1248->g_188 p_1248->g_364 p_1248->g_352 p_1248->g_351 p_1248->g_66 p_1248->g_453 p_1248->g_365 p_1248->g_96 p_1248->g_320 p_1248->g_402 p_1248->g_535 p_1248->g_561.f3 p_1248->g_189 p_1248->g_226 p_1248->g_106 p_1248->l_comm_values p_1248->g_590 p_1248->g_596 p_1248->g_604 p_1248->g_531 p_1248->g_561.f0
 * writes: p_1248->g_569 p_1248->g_363 p_1248->g_66 p_1248->g_85 p_1248->g_96 p_1248->g_522 p_1248->g_106 p_1248->g_565 p_1248->g_561.f3 p_1248->g_402 p_1248->g_610 p_1248->g_219
 */
int8_t  func_52(struct S0  p_53, int32_t  p_54, int32_t * p_55, struct S3 * p_1248)
{ /* block id: 236 */
    uint32_t *l_567 = (void*)0;
    uint32_t *l_568 = &p_1248->g_569;
    struct S0 *l_580[1];
    struct S0 **l_579 = &l_580[0];
    struct S0 ***l_578 = &l_579;
    struct S0 ****l_577 = &l_578;
    int32_t l_583 = (-8L);
    int32_t l_584 = 0x37318061L;
    int32_t **l_585[2];
    VECTOR(int16_t, 2) l_595 = (VECTOR(int16_t, 2))(1L, 0x1696L);
    VECTOR(uint16_t, 16) l_597 = (VECTOR(uint16_t, 16))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 9UL), 9UL), 9UL, 9UL, 9UL, (VECTOR(uint16_t, 2))(9UL, 9UL), (VECTOR(uint16_t, 2))(9UL, 9UL), 9UL, 9UL, 9UL, 9UL);
    int64_t l_607[4];
    uint16_t *l_608 = &p_1248->g_402;
    uint64_t *l_609[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t *l_611 = &p_1248->g_106;
    uint32_t *l_612 = (void*)0;
    uint32_t *l_613 = (void*)0;
    uint32_t *l_614 = (void*)0;
    uint32_t *l_615 = &p_1248->g_363;
    uint16_t *l_616[1];
    uint32_t l_617 = 4UL;
    uint64_t l_618[7];
    int i;
    for (i = 0; i < 1; i++)
        l_580[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_585[i] = &p_1248->g_522;
    for (i = 0; i < 4; i++)
        l_607[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_616[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_618[i] = 0xE5CA473F93535F84L;
    p_55 = func_60((--(*l_568)), (safe_rshift_func_int8_t_s_u((l_584 = ((safe_unary_minus_func_uint8_t_u((((0xC4L < ((void*)0 != l_577)) <= (*p_55)) , (safe_mul_func_uint16_t_u_u(p_53.f0, l_583))))) && (((p_53 = func_56((l_583 ^= 0x1B3EE5AA17BF5997L), l_567, p_1248)) , GROUP_DIVERGE(2, 1)) ^ 0x4B25L))), GROUP_DIVERGE(1, 1))), p_1248);
    l_618[1] |= (((-5L) | ((safe_rshift_func_uint16_t_u_s((p_1248->g_219.s6 = ((safe_add_func_int64_t_s_s(0L, (((VECTOR(uint32_t, 16))(p_1248->g_590.xxxxyyxxyxxxyyxx)).s6 ^ (safe_lshift_func_int16_t_s_u(((p_1248->g_66[0] , (safe_mod_func_int16_t_s_s(((((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_595.yx)), 0x4F7DL, (-2L))), ((VECTOR(int16_t, 2))(p_1248->g_596.s63)), (-5L), (-6L))).s63, ((VECTOR(uint16_t, 4))(l_597.s1e1b)).even))).odd , (1L != (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((((*l_615) = (safe_div_func_int8_t_s_s((((VECTOR(uint32_t, 8))(p_1248->g_604.yyxyyyxx)).s2 | p_53.f0), ((*l_611) = (p_53.f0 , (((safe_lshift_func_uint16_t_u_u(l_607[1], 7)) || p_53.f0) ^ (p_1248->g_610 = ((((((*l_608) |= ((VECTOR(uint16_t, 2))(4UL, 2UL)).even) || (((*p_1248->g_453) = p_54) > p_54)) , p_54) != (-1L)) & p_1248->g_219.s6)))))))) && 0xD231450BL), 11)) < 0x08A33A8DE763D909L), p_1248->g_531[2])))) & p_54), p_53.f0))) <= 0x18A6471DF2AF895AL), 4))))) & p_1248->g_561[4][2].f0)), 3)) | l_617)) , p_53.f0);
    p_1248->g_522 = (void*)0;
    return p_53.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_351 p_1248->g_352 p_1248->g_219 p_1248->g_363 p_1248->g_188 p_1248->g_364 p_1248->g_comm_values p_1248->g_394 p_1248->g_397 p_1248->g_22 p_1248->g_96 p_1248->g_365 p_1248->g_189 p_1248->g_106 p_1248->g_66 p_1248->g_85 p_1248->g_453 p_1248->g_320 p_1248->g_402 p_1248->g_535 p_1248->g_561.f3
 * writes: p_1248->g_96 p_1248->g_363 p_1248->g_66.f0 p_1248->g_402 p_1248->g_219 p_1248->g_66 p_1248->g_85 p_1248->g_522 p_1248->g_106 p_1248->g_565 p_1248->g_561.f3
 */
struct S0  func_56(int64_t  p_57, int32_t * p_58, struct S3 * p_1248)
{ /* block id: 154 */
    int8_t l_335 = (-10L);
    int32_t l_336 = (-10L);
    int32_t *l_342 = &p_1248->g_22;
    int32_t **l_341 = &l_342;
    uint64_t *l_347[3][3][10] = {{{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85}},{{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85}},{{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85},{&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,&p_1248->g_85,(void*)0,&p_1248->g_85,(void*)0,&p_1248->g_85}}};
    VECTOR(uint8_t, 4) l_348 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xB5L), 0xB5L);
    VECTOR(int64_t, 2) l_353 = (VECTOR(int64_t, 2))(0x7487429C6FF438C0L, 0x2197375E5447EE93L);
    struct S0 *l_357 = &p_1248->g_66[0];
    struct S0 **l_356 = &l_357;
    uint8_t *l_358 = &p_1248->g_96[0];
    uint16_t *l_359 = (void*)0;
    uint16_t *l_360 = (void*)0;
    uint16_t *l_361[6][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int64_t l_362 = 0L;
    uint8_t **l_366[4] = {&l_358,&l_358,&l_358,&l_358};
    int32_t l_367 = (-9L);
    VECTOR(uint64_t, 8) l_368 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    VECTOR(uint64_t, 8) l_369 = (VECTOR(uint64_t, 8))(0x67ABEF210A2558F5L, (VECTOR(uint64_t, 4))(0x67ABEF210A2558F5L, (VECTOR(uint64_t, 2))(0x67ABEF210A2558F5L, 0x113FE2F5068F9C57L), 0x113FE2F5068F9C57L), 0x113FE2F5068F9C57L, 0x67ABEF210A2558F5L, 0x113FE2F5068F9C57L);
    VECTOR(uint64_t, 16) l_370 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL);
    int16_t *l_377[1][10][6] = {{{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0},{&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0,&p_1248->g_66[0].f0}}};
    uint32_t *l_403[9][7] = {{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363},{&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363,&p_1248->g_363}};
    int32_t l_404[2][7] = {{(-1L),0x16E15620L,(-1L),(-1L),0x16E15620L,(-1L),(-1L)},{(-1L),0x16E15620L,(-1L),(-1L),0x16E15620L,(-1L),(-1L)}};
    uint64_t l_406 = 18446744073709551615UL;
    VECTOR(int16_t, 2) l_432 = (VECTOR(int16_t, 2))(0x33E5L, (-1L));
    int32_t l_435[1];
    VECTOR(int32_t, 16) l_441 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5A0C1395L), 0x5A0C1395L), 0x5A0C1395L, 0L, 0x5A0C1395L, (VECTOR(int32_t, 2))(0L, 0x5A0C1395L), (VECTOR(int32_t, 2))(0L, 0x5A0C1395L), 0L, 0x5A0C1395L, 0L, 0x5A0C1395L);
    VECTOR(int32_t, 4) l_501 = (VECTOR(int32_t, 4))(0x54E1640AL, (VECTOR(int32_t, 2))(0x54E1640AL, 0L), 0L);
    VECTOR(uint32_t, 4) l_532 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
    struct S1 *l_560 = &p_1248->g_561[4][2];
    int8_t *l_564 = &l_335;
    int8_t **l_563 = &l_564;
    int32_t *l_566 = &p_1248->g_561[4][2].f3;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_435[i] = (-9L);
    l_336 = l_335;
    l_336 &= (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((0UL <= ((((*l_341) = p_58) != (void*)0) | ((((safe_sub_func_uint16_t_u_u((p_1248->g_363 |= (l_362 = (p_57 ^ (((((l_347[0][2][2] != l_347[0][2][2]) != ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(0UL, 0x96L)).xyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_348.yxwwzyww)))).s03)))), (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1248->g_351.s6753301533076525)).s02)), 1L, 0x29DDCE70388B12E8L)), 0x1C80C58EAFD59670L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1248->g_352.wxyz)).odd)))), 0x7CB0138F2BE5FB28L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_353.yxxyxxyx)).s5215164614142540)).sfdc9)), 1L, ((VECTOR(int64_t, 2))(5L, 1L)), 0x3DD4F4CF4EAA8368L)).s20)).hi, p_1248->g_351.s3)), ((*l_358) = ((safe_add_func_uint32_t_u_u((((l_356 == (void*)0) , (void*)0) != (void*)0), l_348.y)) == p_57)), 0x39L, ((VECTOR(uint8_t, 8))(253UL)), ((VECTOR(uint8_t, 2))(1UL)), 0x8BL)).s2a)).xyyy))).even))), 9UL, 0x7BL)).w) , 0xEDACL) <= p_57) <= p_1248->g_219.s3)))), p_1248->g_188.s3)) , p_1248->g_364) == l_366[1]) ^ l_335))), p_1248->g_352.y)), p_1248->g_351.s1));
    if ((((VECTOR(int32_t, 8))((l_367 , (((+(0x6AL <= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x453D6AC72CEACCE7L, 0x667A1A56E3F14D93L)).yxxxxyyyyxxxyxxx)).s7 >= (0x518D10BDL != FAKE_DIVERGE(p_1248->global_1_offset, get_global_id(1), 10))))) ^ (((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(l_368.s10604521)), ((VECTOR(uint64_t, 4))(l_369.s5011)).zxxxyxxz))).even)).xxzxxyyx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 16))(p_1248->g_352.y, p_1248->g_comm_values[p_1248->tid], ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(l_370.s7998d77e2f420649)).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(p_57, 6)) < ((VECTOR(uint8_t, 4))((((VECTOR(uint64_t, 16))(4UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))((((safe_mul_func_int16_t_s_s((p_1248->g_66[0].f0 = p_57), ((safe_sub_func_int32_t_s_s(((0x559F092AL && ((p_1248->g_363 = ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_1248->g_219.s5 = ((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((p_1248->g_402 = (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_1248->g_394.s66)).hi, (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(p_1248->g_397.yyxyyxxx)).s1, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(0x4AE1L, p_57)) ^ p_57), p_1248->g_22)))))), p_57))), p_1248->g_96[0])) , p_1248->g_96[0]), (**p_1248->g_364))) || p_57)), p_57)), p_57)) != p_1248->g_397.x), GROUP_DIVERGE(1, 1))) , GROUP_DIVERGE(0, 1))) , l_404[0][4])) && p_1248->g_comm_values[p_1248->tid]), p_57)) < 0x63ADL))) , (void*)0) == l_347[1][2][7]), 3UL, 0UL, 0xF27243BFB2A94C3EL, ((VECTOR(uint64_t, 4))(0xE45B62A287B434D9L)))).s43)), 18446744073709551615UL, 0xEEBD60AD73292DC9L, 18446744073709551611UL, 18446744073709551613UL, p_1248->g_189.x, ((VECTOR(uint64_t, 8))(0xAA78DE21F25EC14DL)))).sc , (**p_1248->g_364)), p_57, 0xE7L, 252UL)).z), p_1248->g_96[0])) , p_1248->g_106), ((VECTOR(uint64_t, 4))(1UL)), 0x1DF0763C43478099L, ((VECTOR(uint64_t, 4))(0x8954F009D106A38EL)), ((VECTOR(uint64_t, 2))(18446744073709551610UL)), 0xEDC37A5547CAE0C8L, 0UL, 0UL, 0x97C09C2AF86749AFL)).sc8ef)), 1UL, p_1248->g_96[0], ((VECTOR(uint64_t, 4))(0xD64471942B34D470L)), 8UL, ((VECTOR(uint64_t, 4))(18446744073709551612UL)), 0xA9931588D73462F2L)).lo))), ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 4))(18446744073709551613UL)))).even, ((VECTOR(uint64_t, 8))(0xCA325603862943B0L)), ((VECTOR(uint64_t, 8))(18446744073709551607UL))))).s43)).yyxy, ((VECTOR(uint64_t, 4))(18446744073709551606UL))))), ((VECTOR(uint64_t, 4))(0x294204A80856E033L)))).s6336705203606110)).lo))).s4 == 0x519D1906F7607D01L)) || 0x4CE9748EL)), ((VECTOR(int32_t, 2))(0x00D077C8L)), l_368.s4, 0x442B038FL, p_57, 0x307AC41BL, 0x541280E2L)).s6 > 3UL))
    { /* block id: 165 */
        struct S0 l_405 = {0x70F5L};
        (*l_357) = l_405;
        (*l_357) = (*l_357);
        return p_1248->g_66[0];
    }
    else
    { /* block id: 169 */
        int8_t *l_416 = &p_1248->g_106;
        int32_t l_436 = 0x35393A46L;
        uint16_t *l_439[7][3][9] = {{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}},{{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402},{&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402,&p_1248->g_402,(void*)0,&p_1248->g_402}}};
        int32_t l_452 = (-1L);
        uint32_t l_519 = 0x255C1596L;
        int32_t l_536 = 0x71206F36L;
        int32_t l_537 = 3L;
        int32_t l_539 = 0L;
        int32_t l_540 = 0x241644FAL;
        int32_t l_541 = 0x0312D229L;
        int32_t l_542 = 0x33053D26L;
        int32_t l_543 = (-1L);
        int32_t l_545 = 0x6E40FA7BL;
        int32_t l_548 = 1L;
        int32_t l_549 = 0L;
        int32_t l_550 = (-9L);
        int32_t l_552 = 0x2DC26CFBL;
        int32_t l_553 = 1L;
        int32_t l_554 = 0x4FB97681L;
        int32_t l_555[2][3][5] = {{{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L},{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L},{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L}},{{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L},{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L},{0x42AAC432L,0x45779B32L,0x42AAC432L,0x42AAC432L,0x45779B32L}}};
        int32_t **l_559[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S1 **l_562 = &l_560;
        int i, j, k;
        l_406 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(4L, (-1L))).yxxxxxyx)).s0;
        for (p_1248->g_85 = 0; (p_1248->g_85 != 37); p_1248->g_85 = safe_add_func_uint16_t_u_u(p_1248->g_85, 3))
        { /* block id: 173 */
            int8_t *l_414 = &l_335;
            int32_t l_433 = 0x7B0978FCL;
            int16_t *l_454 = (void*)0;
            int32_t **l_472[2][9] = {{(void*)0,&p_1248->g_21[7],&p_1248->g_21[7],(void*)0,(void*)0,&p_1248->g_21[7],&p_1248->g_21[7],(void*)0,(void*)0},{(void*)0,&p_1248->g_21[7],&p_1248->g_21[7],(void*)0,(void*)0,&p_1248->g_21[7],&p_1248->g_21[7],(void*)0,(void*)0}};
            int32_t l_480 = 0L;
            uint8_t **l_520 = &p_1248->g_365;
            int8_t l_521 = 1L;
            int64_t l_538 = (-5L);
            int16_t l_546 = 1L;
            int32_t l_547 = 2L;
            int i, j;
            for (l_367 = 0; (l_367 == 7); l_367 = safe_add_func_int64_t_s_s(l_367, 9))
            { /* block id: 176 */
                int32_t *l_411 = &p_1248->g_22;
                int8_t **l_415 = &l_414;
                int32_t *l_434 = &l_404[0][4];
                uint16_t *l_444 = &p_1248->g_402;
                struct S0 ***l_481[3];
                VECTOR(int32_t, 2) l_527 = (VECTOR(int32_t, 2))(0x7DE0AA22L, 0x02EE520AL);
                int64_t l_544 = (-1L);
                int32_t l_551 = 0x063160DDL;
                uint8_t l_556 = 0x9FL;
                int i;
                for (i = 0; i < 3; i++)
                    l_481[i] = &l_356;
                (*l_341) = l_411;
                if (((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))((safe_mul_func_int8_t_s_s(((((((*l_415) = l_414) == l_416) , (&l_414 != ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_414 != (*p_1248->g_364)), (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(0xCFF6E808L)) != ((p_1248->g_comm_values[p_1248->tid] , func_23((safe_add_func_int32_t_s_s(((*l_434) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(8L, (safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((VECTOR(int16_t, 4))(l_432.xyyy)).y , (FAKE_DIVERGE(p_1248->global_1_offset, get_global_id(1), 10) == (*p_1248->g_365))) , (*l_411)), (**l_341))), FAKE_DIVERGE(p_1248->local_2_offset, get_local_id(2), 10))), 0L, 0x5455FB4FL)), l_433, ((VECTOR(int32_t, 2))(0x3A7DFD22L)), 0x5E3BA688L)).lo)).y), l_435[0])), p_1248)) != &p_1248->g_22)), l_436)))), p_1248->g_397.y)) , &l_414))) ^ p_1248->g_219.s1) && 0x0CL), l_436)), (**l_341), 7L, ((VECTOR(int32_t, 4))(0x7EA3F2CEL)), 0x596A9A26L)), ((VECTOR(int32_t, 8))((-8L)))))).s4)
                { /* block id: 180 */
                    uint16_t *l_440 = (void*)0;
                    VECTOR(int8_t, 16) l_451 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int8_t, 2))(1L, 2L), (VECTOR(int8_t, 2))(1L, 2L), 1L, 2L, 1L, 2L);
                    int32_t l_473 = (-2L);
                    struct S0 **l_474 = (void*)0;
                    struct S0 ***l_475 = &l_474;
                    struct S0 ****l_482 = (void*)0;
                    struct S0 ****l_483 = &l_475;
                    uint64_t **l_490 = (void*)0;
                    int i;
                    if ((safe_mod_func_int16_t_s_s((l_439[2][1][6] != l_440), (((((((VECTOR(int32_t, 2))(l_441.s98)).lo , (safe_mul_func_uint8_t_u_u((&p_1248->g_402 == l_444), ((**l_415) = ((safe_rshift_func_int8_t_s_s(p_57, (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(l_451.s8a15)).wyxyyzyx, (int8_t)p_1248->g_352.x))).s4, (((l_452 , l_444) == l_444) < (*l_411)))), 1UL)))) <= 0x4001578BL))))) , 0x16L) , p_1248->g_453) == l_454) , (*p_1248->g_453)))))
                    { /* block id: 182 */
                        int32_t *l_455 = &l_452;
                        (*l_341) = func_23(l_451.s8, p_1248);
                        (*l_341) = p_58;
                        (*l_455) |= ((*l_434) = l_451.s1);
                        l_436 |= (248UL <= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((p_57 | (*p_1248->g_365)) > (safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(p_57, (*p_1248->g_453))), ((safe_mul_func_uint8_t_u_u(((~((VECTOR(int8_t, 2))(1L, 8L)).odd) && ((l_473 = (&p_58 != (((GROUP_DIVERGE(0, 1) | (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(0x042CL, 1UL)) & (0x5068E515L ^ 0x71DEA2ABL)), 6))) == p_1248->g_352.x) , l_472[1][1]))) < 5UL)), p_1248->g_352.y)) || p_57))) >= p_57) & 0x79L), p_1248->g_96[0]))), GROUP_DIVERGE(0, 1))) | 4L), (*l_455))));
                    }
                    else
                    { /* block id: 189 */
                        (*l_434) ^= (0xFA91CF5CL | p_57);
                        return p_1248->g_66[1];
                    }
                    (*l_475) = l_474;
                    (*l_341) = func_23((safe_sub_func_uint32_t_u_u((p_1248->g_363 |= (l_480 = (p_1248->g_66[0].f0 >= (safe_rshift_func_int16_t_s_u(0x1258L, 11))))), (p_57 & (l_481[2] != ((*l_483) = l_481[1]))))), p_1248);
                    for (l_433 = 0; (l_433 > 26); l_433++)
                    { /* block id: 200 */
                        struct S0 *l_495 = &p_1248->g_66[2];
                        uint32_t l_498 = 0x5C0097C1L;
                        l_436 = ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((*l_434) = (1L & (((safe_add_func_int32_t_s_s(((l_490 = p_1248->g_488) == (((*l_358) ^= 0UL) , &p_1248->g_489)), ((safe_mod_func_int64_t_s_s(((**l_341) >= (safe_div_func_uint32_t_u_u((+l_473), ((&p_1248->g_66[0] == l_495) , ((safe_mod_func_uint16_t_u_u((l_452 = p_1248->g_363), (*p_1248->g_453))) & l_498))))), FAKE_DIVERGE(p_1248->local_2_offset, get_local_id(2), 10))) , l_452))) >= 0x46L) , 0xEAL))), (**l_341), 0x01D518E4L, 0x73CDF083L)), ((VECTOR(int32_t, 4))(0x2618ED9DL)), ((VECTOR(int32_t, 2))(1L)), 0x5FD84FA9L, ((VECTOR(int32_t, 2))(0x0FBD244EL)), ((VECTOR(int32_t, 2))(1L)), (-2L))).s3c)).yxxyyxxyxxxxyxxy, ((VECTOR(int32_t, 16))(0x5D76EAF2L)), ((VECTOR(int32_t, 16))(0x2807238DL))))).s4e32, (int32_t)(-1L), (int32_t)l_498))).wzzyyzyx, ((VECTOR(int32_t, 8))(0L))))).s4;
                        l_336 |= (safe_div_func_int32_t_s_s((((VECTOR(int32_t, 8))(l_501.yzzwxxyy)).s2 , ((safe_mul_func_int16_t_s_s(p_57, p_57)) == ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((p_57 | p_57), p_57)) && ((((++(**p_1248->g_364)) > GROUP_DIVERGE(0, 1)) && ((((((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_1248->g_510.yxyy)))).xzxwzyyw)).s1273771274142550)).sf <= (0UL == (safe_rshift_func_uint16_t_u_u((l_519 &= ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(0x0AC8L, ((((safe_div_func_uint32_t_u_u(9UL, ((*l_434) = (-1L)))) == 0UL) , p_58) == &l_436))), p_1248->g_320.w)) , p_1248->g_402)), 9)))) ^ p_1248->g_188.s5) >= 0UL) , l_520) != (void*)0) == FAKE_DIVERGE(p_1248->global_0_offset, get_global_id(0), 10)) <= (*l_342)) || l_498)) && l_521)), 1UL)) != (*l_342)))), FAKE_DIVERGE(p_1248->global_1_offset, get_global_id(1), 10)));
                        p_1248->g_522 = (*l_341);
                        p_1248->g_522 = func_23((safe_mul_func_uint16_t_u_u((p_58 != p_58), (4294967294UL | p_57))), p_1248);
                    }
                }
                else
                { /* block id: 213 */
                    VECTOR(int32_t, 2) l_526 = (VECTOR(int32_t, 2))((-1L), 0x65563CC6L);
                    int i;
                    (*l_434) = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1248->g_525.sd2)), 0x23D1FD75L, 0x1A253E11L, ((VECTOR(int32_t, 2))(0x2EC3927DL, 0x4DCEE93DL)), 0x0CE9952CL, 0x6A959813L)))).even, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_526.yyyyxxyyxyxxxyyx)).hi, ((VECTOR(int32_t, 2))(1L, (-4L))).xxyyyyxy))).even, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_527.xxxxyxxyxyyxyxxx)).odd, ((VECTOR(int32_t, 16))(l_452, (((p_1248->g_66[0] , l_439[1][0][1]) == l_361[4][0][2]) < ((**l_341) && p_57)), 0x19D743E1L, 1L, ((p_1248->g_219.s5 = (((p_57 == l_526.x) != p_57) && l_526.x)) < (*l_411)), ((VECTOR(int32_t, 2))(0x40ED0A94L)), 0L, 0x6B6AFBCEL, 0x25903C3CL, 0x15F52C56L, 5L, ((VECTOR(int32_t, 2))(3L)), 0x2F83B139L, 0x54D0D83BL)).even, ((VECTOR(int32_t, 8))((-9L)))))).odd))), ((VECTOR(int32_t, 4))(0x1A5FD770L))))), ((VECTOR(int32_t, 2))(0x640F1828L)), 0L, 0x0E195D10L)).even, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0L))))).xwyyxwwxyywxwzyw, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x7591D6D7L))))).s8;
                    (*l_434) &= (0x5DD13931D8641390L >= 0x1C3DB4DE0D551E49L);
                    for (p_1248->g_106 = 0; (p_1248->g_106 >= 26); ++p_1248->g_106)
                    { /* block id: 219 */
                        int32_t l_530 = 0x5698DE07L;
                        (*l_341) = &l_436;
                        l_532.w--;
                        return p_1248->g_535;
                    }
                }
                --l_556;
            }
        }
        p_58 = ((*l_341) = (void*)0);
        (*l_562) = l_560;
    }
    (*l_566) ^= (p_57 || ((p_1248->g_565 = ((*l_563) = &p_1248->g_106)) == &l_335));
    return (**l_356);
}


/* ------------------------------------------ */
/* 
 * reads : p_1248->g_85 p_1248->g_22 p_1248->g_96 p_1248->g_66.f0 p_1248->g_comm_values p_1248->g_66 p_1248->g_188 p_1248->g_189 p_1248->g_219 p_1248->g_106 p_1248->g_226 p_1248->g_320 p_1248->l_comm_values
 * writes: p_1248->g_85 p_1248->g_96 p_1248->g_comm_values p_1248->g_106 p_1248->g_66
 */
int32_t * func_60(uint32_t  p_61, int32_t  p_62, struct S3 * p_1248)
{ /* block id: 11 */
    int8_t l_68 = (-1L);
    VECTOR(uint16_t, 8) l_69 = (VECTOR(uint16_t, 8))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x3C31L), 0x3C31L), 0x3C31L, 65527UL, 0x3C31L);
    VECTOR(int16_t, 4) l_70 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x45C5L), 0x45C5L);
    uint64_t *l_83 = (void*)0;
    uint64_t *l_84 = &p_1248->g_85;
    VECTOR(uint32_t, 2) l_88 = (VECTOR(uint32_t, 2))(0x27C09D14L, 0xD630324EL);
    VECTOR(int32_t, 8) l_89 = (VECTOR(int32_t, 8))(0x24ADBFCEL, (VECTOR(int32_t, 4))(0x24ADBFCEL, (VECTOR(int32_t, 2))(0x24ADBFCEL, 0x6C8D3978L), 0x6C8D3978L), 0x6C8D3978L, 0x24ADBFCEL, 0x6C8D3978L);
    int32_t *l_90 = (void*)0;
    int32_t *l_91[8][8] = {{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1248->g_22,(void*)0,&p_1248->g_22,(void*)0,(void*)0}};
    int32_t **l_92 = (void*)0;
    int32_t **l_93 = (void*)0;
    int32_t **l_94 = &l_91[2][1];
    uint8_t *l_95 = &p_1248->g_96[0];
    int64_t *l_97 = (void*)0;
    int64_t *l_98 = (void*)0;
    int64_t *l_99 = (void*)0;
    int64_t *l_100 = (void*)0;
    int64_t *l_101 = (void*)0;
    int64_t *l_102 = (void*)0;
    int64_t *l_103 = (void*)0;
    int64_t *l_104 = (void*)0;
    int64_t *l_105 = (void*)0;
    uint32_t l_117 = 3UL;
    struct S0 l_175 = {0x6040L};
    VECTOR(int16_t, 2) l_198 = (VECTOR(int16_t, 2))(0x0A1DL, 0L);
    VECTOR(int32_t, 8) l_295 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x466547D1L), 0x466547D1L), 0x466547D1L, 1L, 0x466547D1L);
    VECTOR(int32_t, 16) l_308 = (VECTOR(int32_t, 16))(0x2C887AEEL, (VECTOR(int32_t, 4))(0x2C887AEEL, (VECTOR(int32_t, 2))(0x2C887AEEL, 8L), 8L), 8L, 0x2C887AEEL, 8L, (VECTOR(int32_t, 2))(0x2C887AEEL, 8L), (VECTOR(int32_t, 2))(0x2C887AEEL, 8L), 0x2C887AEEL, 8L, 0x2C887AEEL, 8L);
    int32_t l_325 = 3L;
    uint16_t *l_333 = (void*)0;
    int32_t *l_334 = (void*)0;
    int i, j;
    atomic_xor(&p_1248->l_atomic_reduction[0], (l_68 && (((VECTOR(uint16_t, 2))(l_69.s46)).hi <= ((VECTOR(int16_t, 2))(0x3BC7L, (-2L))).lo)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1248->v_collective += p_1248->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x639EL, 0x0035L, 8UL, 65535UL)).wzzxzywz)).s5 && ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x0104L, 1L)), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(2L, p_62, (-6L), 0x0C7BL, 0x76FFL, (-9L), 0x0880L, 0L)).odd)), ((VECTOR(int16_t, 4))(l_70.yzzy))))).zwzzxyyz))), (safe_sub_func_uint16_t_u_u(p_62, l_70.z)), (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_61, (&p_62 != (void*)0))), (p_1248->g_106 = (p_1248->g_comm_values[p_1248->tid] ^= (safe_mod_func_uint8_t_u_u((((*l_95) ^= (((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((*l_94) = func_23((((((--(*l_84)) , ((VECTOR(uint32_t, 16))(l_88.yyyyyyyyyyyyxxxx)).sb) ^ (+((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(l_89.s34)).yxyyxyxyxxyxyyyx, (int32_t)(p_62 = l_88.y), (int32_t)(p_62 = (l_84 == (void*)0))))).hi, ((VECTOR(int32_t, 8))((-1L)))))).s1)) <= 0x5F4AL) == (-5L)), p_1248)) == &p_1248->g_22), p_61)), p_1248->g_22)) < p_61) && p_62)) <= p_1248->g_66[0].f0), p_61)))))), ((VECTOR(int16_t, 4))(0x2BCEL)))).s9e38, ((VECTOR(int16_t, 4))(4L))))), ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x261FL))))))).xzyzxzwx, ((VECTOR(int16_t, 8))((-10L)))))))).s4))
    { /* block id: 20 */
        struct S0 *l_107 = &p_1248->g_66[0];
        (*l_107) = p_1248->g_66[0];
    }
    else
    { /* block id: 22 */
        int32_t l_110 = 0L;
        int32_t l_111 = 0x2DC38A90L;
        int32_t l_112 = 0x638CA9B3L;
        int32_t l_115[1];
        VECTOR(uint8_t, 4) l_184 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x6FL), 0x6FL);
        VECTOR(uint16_t, 16) l_199 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xB201L), 0xB201L), 0xB201L, 1UL, 0xB201L, (VECTOR(uint16_t, 2))(1UL, 0xB201L), (VECTOR(uint16_t, 2))(1UL, 0xB201L), 1UL, 0xB201L, 1UL, 0xB201L);
        uint8_t l_216 = 0x59L;
        struct S0 l_277[1] = {{-4L}};
        int16_t *l_324 = (void*)0;
        uint8_t **l_328 = &l_95;
        uint8_t *l_330 = &p_1248->g_96[0];
        uint8_t **l_329 = &l_330;
        int16_t *l_331 = (void*)0;
        int16_t *l_332[10][6] = {{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0},{(void*)0,&l_277[0].f0,&l_277[0].f0,(void*)0,&p_1248->g_66[0].f0,&l_175.f0}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_115[i] = 0x5AD0F761L;
        for (p_61 = 0; (p_61 >= 32); ++p_61)
        { /* block id: 25 */
            atomic_max(&p_1248->g_atomic_reduction[get_linear_group_id()], p_62);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1248->v_collective += p_1248->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        if (p_61)
        { /* block id: 28 */
            int32_t l_113 = 5L;
            int32_t l_114 = 0x2230B5BDL;
            int32_t l_116 = 1L;
            struct S0 l_174 = {-10L};
            p_62 |= l_110;
            l_117++;
            if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 18]) == 2))
            { /* block id: 32 */
                int32_t l_121 = (-1L);
                int32_t *l_120 = &l_121;
                int32_t *l_122 = &l_121;
                int32_t *l_123 = (void*)0;
                int32_t *l_124 = &l_121;
                uint16_t l_159 = 0xD43BL;
                uint32_t l_160 = 4294967293UL;
                uint32_t l_161[10] = {0x65C0EDC9L,1UL,0x65C0EDC9L,0x65C0EDC9L,1UL,0x65C0EDC9L,0x65C0EDC9L,1UL,0x65C0EDC9L,0x65C0EDC9L};
                int i;
                l_124 = (l_123 = (l_122 = l_120));
                for (l_121 = 27; (l_121 >= (-6)); l_121 = safe_sub_func_int64_t_s_s(l_121, 9))
                { /* block id: 38 */
                    uint8_t l_127[3][2][5] = {{{0x73L,1UL,5UL,6UL,0xD1L},{0x73L,1UL,5UL,6UL,0xD1L}},{{0x73L,1UL,5UL,6UL,0xD1L},{0x73L,1UL,5UL,6UL,0xD1L}},{{0x73L,1UL,5UL,6UL,0xD1L},{0x73L,1UL,5UL,6UL,0xD1L}}};
                    int16_t l_130 = 0L;
                    struct S0 l_131 = {1L};
                    struct S0 l_132 = {0x57D5L};
                    struct S0 l_133 = {5L};
                    int64_t l_134 = (-6L);
                    int64_t l_135 = 0L;
                    uint16_t l_136 = 0UL;
                    uint64_t l_137 = 0UL;
                    int i, j, k;
                    ++l_127[0][1][3];
                    l_124 = (void*)0;
                    if (((l_136 &= (l_135 ^= (((l_130 = (-2L)) , (l_133 = (l_132 = l_131))) , l_134))) , l_137))
                    { /* block id: 46 */
                        struct S0 l_138 = {0x1D96L};
                        int64_t l_139[10][10][2] = {{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}},{{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L},{0L,0x54142E3BCCD2FC28L}}};
                        int32_t l_142 = (-8L);
                        int32_t *l_141 = &l_142;
                        int32_t **l_140[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t **l_143 = &l_141;
                        int32_t **l_144 = (void*)0;
                        int32_t **l_145 = (void*)0;
                        int i, j, k;
                        l_122 = (void*)0;
                        l_133 = l_138;
                        l_145 = (l_144 = (l_139[5][5][1] , (l_143 = l_140[0])));
                    }
                    else
                    { /* block id: 52 */
                        uint64_t l_148 = 0x4A49926629D0FCF4L;
                        uint64_t *l_147 = &l_148;
                        uint64_t **l_146 = &l_147;
                        uint64_t **l_149 = &l_147;
                        uint8_t l_150 = 0x99L;
                        VECTOR(int32_t, 2) l_151 = (VECTOR(int32_t, 2))(0x4264F0F1L, 0x5C898A0DL);
                        uint8_t l_152 = 1UL;
                        int32_t l_153 = 0x0D641304L;
                        int64_t l_154 = 0x610025E17D8A5F0AL;
                        int32_t l_155[1][3];
                        int32_t *l_156 = &l_153;
                        uint32_t l_157 = 0x9606A0C2L;
                        int16_t l_158 = 0x2872L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_155[i][j] = 0x0C89F135L;
                        }
                        l_149 = l_146;
                        l_155[0][1] ^= (FAKE_DIVERGE(p_1248->global_2_offset, get_global_id(2), 10) , (l_154 ^= (l_153 &= (l_150 , (l_152 ^= ((VECTOR(int32_t, 2))(l_151.yy)).odd)))));
                        l_156 = (void*)0;
                        l_158 ^= (l_157 |= 0x0869D018L);
                    }
                    l_123 = (l_124 = (l_120 = (void*)0));
                }
                l_160 = l_159;
                if (l_161[2])
                { /* block id: 67 */
                    VECTOR(uint32_t, 8) l_162 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0xADE397EFL), 0xADE397EFL), 0xADE397EFL, 3UL, 0xADE397EFL);
                    int32_t *l_163 = (void*)0;
                    int32_t l_165 = 0x47C13D93L;
                    int32_t *l_164[6] = {&l_165,&l_165,&l_165,&l_165,&l_165,&l_165};
                    int8_t l_166 = 1L;
                    uint32_t l_167 = 0xD7E304C9L;
                    uint8_t l_168 = 0xB9L;
                    int i;
                    l_162.s2 = 0x05BAB2BBL;
                    l_124 = l_163;
                    l_120 = l_164[1];
                    l_168 = (l_167 |= ((*l_120) ^= l_166));
                }
                else
                { /* block id: 74 */
                    int32_t l_169 = 0x6B7BD85AL;
                    for (l_169 = 0; (l_169 > (-25)); l_169 = safe_sub_func_int8_t_s_s(l_169, 6))
                    { /* block id: 77 */
                        int32_t l_173 = 0x3F0E8330L;
                        int32_t *l_172 = &l_173;
                        l_124 = l_172;
                        l_122 = (void*)0;
                    }
                }
                unsigned int result = 0;
                result += l_121;
                result += l_159;
                result += l_160;
                int l_161_i0;
                for (l_161_i0 = 0; l_161_i0 < 10; l_161_i0++) {
                    result += l_161[l_161_i0];
                }
                atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 18], result);
            }
            else
            { /* block id: 82 */
                (1 + 1);
            }
            l_175 = l_174;
        }
        else
        { /* block id: 86 */
            VECTOR(int32_t, 4) l_187 = (VECTOR(int32_t, 4))(0x197E4C72L, (VECTOR(int32_t, 2))(0x197E4C72L, 9L), 9L);
            VECTOR(int32_t, 16) l_190 = (VECTOR(int32_t, 16))(0x5E70FEE4L, (VECTOR(int32_t, 4))(0x5E70FEE4L, (VECTOR(int32_t, 2))(0x5E70FEE4L, 0x74020B15L), 0x74020B15L), 0x74020B15L, 0x5E70FEE4L, 0x74020B15L, (VECTOR(int32_t, 2))(0x5E70FEE4L, 0x74020B15L), (VECTOR(int32_t, 2))(0x5E70FEE4L, 0x74020B15L), 0x5E70FEE4L, 0x74020B15L, 0x5E70FEE4L, 0x74020B15L);
            int64_t *l_193 = (void*)0;
            int64_t *l_194 = (void*)0;
            int64_t *l_195 = (void*)0;
            int64_t *l_196 = (void*)0;
            int64_t *l_197[3];
            uint16_t *l_200 = (void*)0;
            uint16_t *l_201 = (void*)0;
            uint16_t *l_202 = (void*)0;
            uint16_t *l_203 = (void*)0;
            uint16_t *l_204 = (void*)0;
            uint16_t *l_205 = (void*)0;
            uint16_t *l_206 = (void*)0;
            uint16_t *l_207 = (void*)0;
            uint16_t *l_208 = (void*)0;
            uint16_t *l_209 = (void*)0;
            uint16_t *l_210 = (void*)0;
            uint16_t *l_211 = (void*)0;
            uint16_t *l_212 = (void*)0;
            uint16_t *l_213 = (void*)0;
            uint16_t *l_214 = (void*)0;
            uint16_t *l_215[1];
            struct S0 l_222 = {-2L};
            int8_t *l_225[7][2] = {{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68},{&l_68,&l_68}};
            int32_t *l_274[10][6];
            int i, j;
            for (i = 0; i < 3; i++)
                l_197[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_215[i] = (void*)0;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 6; j++)
                    l_274[i][j] = (void*)0;
            }
            if (((safe_sub_func_int16_t_s_s(p_62, ((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_184.xzxw)).x, 7)) || (((safe_div_func_int64_t_s_s((((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_187.ywxywwxzxwzyxyzw)).s00dd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(1L, 0x1B47BCCFL)), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(p_1248->g_188.s21642671)), ((VECTOR(int32_t, 2))(p_1248->g_189.yy)).yxyyyxxx))).s11))).yyyxxxxx, ((VECTOR(int32_t, 4))(l_190.sd7c5)).wyxwwzwy))).s4030135327036044)))).sddfb))).xzzyzyyzwyxxyzyz)).s64b3))))).x <= ((safe_rshift_func_uint8_t_u_u(((((l_115[0] = p_61) , (((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(l_198.yxyyxyyy)).s71))).lo , p_62)) | ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(l_199.s7b)).xyxyxxyx, (uint16_t)(--l_216)))).s17, ((VECTOR(uint16_t, 16))(0xC410L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1248->g_219.s35)).xyxx)), (safe_div_func_uint64_t_u_u((((((l_112 = (l_222 , (l_195 == ((safe_lshift_func_int16_t_s_s(l_199.se, p_62)) , l_195)))) & FAKE_DIVERGE(p_1248->global_1_offset, get_global_id(1), 10)) < (((p_62 | p_62) , p_1248->g_106) != 4294967286UL)) == p_62) || 0xD3D90BD9C6B66814L), p_1248->g_219.s4)), ((VECTOR(uint16_t, 2))(0x3531L)), 0xD5C8L, p_61, 1UL, 65535UL, l_199.s7, 0UL, 0xD38FL, 0x8F36L)).s60))).odd) != 0x6C817FD844EA4F0AL), p_62)) == FAKE_DIVERGE(p_1248->local_2_offset, get_local_id(2), 10))), p_61)) , p_1248->g_189.y) == FAKE_DIVERGE(p_1248->group_2_offset, get_group_id(2), 10))) != 0x22A857ABL), 0x3E307548L)) && p_1248->g_66[0].f0) , (void*)0) == p_1248->g_226[2][0]))) >= p_1248->g_189.y))
            { /* block id: 90 */
                (*l_94) = (void*)0;
                if ((atomic_inc(&p_1248->g_atomic_input[72 * get_linear_group_id() + 2]) == 4))
                { /* block id: 93 */
                    VECTOR(int32_t, 4) l_228 = (VECTOR(int32_t, 4))(0x37E01DA9L, (VECTOR(int32_t, 2))(0x37E01DA9L, 0L), 0L);
                    uint32_t l_229[2];
                    uint32_t l_230[10] = {1UL,0x48D24F35L,1UL,1UL,0x48D24F35L,1UL,1UL,0x48D24F35L,1UL,1UL};
                    int16_t l_231 = 4L;
                    uint32_t l_232 = 4294967287UL;
                    int8_t l_233 = (-1L);
                    int8_t l_234 = 0x09L;
                    int8_t l_235 = 0x34L;
                    uint32_t l_236 = 0x0678A595L;
                    VECTOR(int32_t, 16) l_237 = (VECTOR(int32_t, 16))(0x2F1BEE13L, (VECTOR(int32_t, 4))(0x2F1BEE13L, (VECTOR(int32_t, 2))(0x2F1BEE13L, 0x1918F8D0L), 0x1918F8D0L), 0x1918F8D0L, 0x2F1BEE13L, 0x1918F8D0L, (VECTOR(int32_t, 2))(0x2F1BEE13L, 0x1918F8D0L), (VECTOR(int32_t, 2))(0x2F1BEE13L, 0x1918F8D0L), 0x2F1BEE13L, 0x1918F8D0L, 0x2F1BEE13L, 0x1918F8D0L);
                    VECTOR(int32_t, 2) l_238 = (VECTOR(int32_t, 2))(0x6664ACD5L, 0x14507BB3L);
                    VECTOR(int32_t, 16) l_239 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                    uint32_t l_240 = 0x9F0D1E4DL;
                    int32_t l_241[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    VECTOR(int32_t, 8) l_270 = (VECTOR(int32_t, 8))(0x205AC422L, (VECTOR(int32_t, 4))(0x205AC422L, (VECTOR(int32_t, 2))(0x205AC422L, (-3L)), (-3L)), (-3L), 0x205AC422L, (-3L));
                    int8_t l_271 = 0x7EL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_229[i] = 0xCDEE4A86L;
                    l_229[1] = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_228.wzwwwyxxxyxwxzwx)).saf))).odd;
                    l_241[6] |= (l_240 = ((l_231 ^= l_230[0]) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((l_233 = l_232) , l_234), (-4L), l_235, l_236, 0x35FB86B1L, 0x0554811BL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_237.sa345a6b2)).hi)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_238.yyyxxyyyxxyyyyyx)).s75a7, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_239.s16de8297)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), 0x0B17C0A0L, 0x54EBC97AL, 0x3FBE1006L)))).xxwzxzywwzxwyzzz)).lo))).odd))), (-1L), 0x476DE3CCL)).sa6)).yxyyxxyx)))).s4));
                    for (l_229[1] = 29; (l_229[1] <= 43); ++l_229[1])
                    { /* block id: 101 */
                        VECTOR(int32_t, 16) l_245 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x79B07E79L), 0x79B07E79L), 0x79B07E79L, 0L, 0x79B07E79L, (VECTOR(int32_t, 2))(0L, 0x79B07E79L), (VECTOR(int32_t, 2))(0L, 0x79B07E79L), 0L, 0x79B07E79L, 0L, 0x79B07E79L);
                        int32_t *l_244 = (void*)0;
                        int32_t *l_246 = (void*)0;
                        uint64_t l_247 = 0UL;
                        uint32_t l_248 = 0x88069318L;
                        uint8_t l_249 = 253UL;
                        uint8_t l_250 = 0UL;
                        int16_t l_251 = (-3L);
                        int32_t l_252 = 0x37635144L;
                        VECTOR(int8_t, 16) l_253 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int8_t, 2))(8L, 1L), (VECTOR(int8_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
                        VECTOR(int8_t, 2) l_254 = (VECTOR(int8_t, 2))(0x0BL, 0L);
                        VECTOR(int8_t, 2) l_255 = (VECTOR(int8_t, 2))(1L, 0x5BL);
                        VECTOR(int8_t, 4) l_256 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x53L), 0x53L);
                        VECTOR(int8_t, 16) l_257 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        VECTOR(int8_t, 8) l_258 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1AL), 0x1AL), 0x1AL, (-1L), 0x1AL);
                        VECTOR(int8_t, 4) l_259 = (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, (-6L)), (-6L));
                        VECTOR(int8_t, 2) l_260 = (VECTOR(int8_t, 2))((-1L), 0L);
                        VECTOR(int8_t, 8) l_261 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2FL), 0x2FL), 0x2FL, 0L, 0x2FL);
                        int32_t l_262 = (-1L);
                        uint32_t l_263 = 1UL;
                        VECTOR(uint32_t, 4) l_264 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967287UL), 4294967287UL);
                        int16_t l_265 = (-3L);
                        uint32_t l_266 = 0x9E75CB03L;
                        int8_t l_267 = 0x1DL;
                        int8_t l_268 = (-10L);
                        int32_t l_269 = 3L;
                        int i;
                        l_244 = (void*)0;
                        l_246 = (void*)0;
                        l_228.w |= (GROUP_DIVERGE(1, 1) , ((l_241[1] |= l_247) , (l_238.x = ((((l_248 , l_249) , ((l_251 = l_250) , ((VECTOR(int64_t, 16))(l_252, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0L, 0L)), (-1L), (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_253.sd7bb)))), 0x50L, ((VECTOR(int8_t, 4))(0x44L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(0L, 0x1AL))))), (-10L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(1L, 0x10L, 0x3EL, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(l_254.yyxyxyxy)).s6305703201547347, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_255.xyxx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(0x23L, 1L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))((l_235 = (-7L)), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(l_256.zzwxywyxywzwzxxx)).sf3, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x37L)).xyyyxyyx)).s50))))))), 0L, 0L, ((VECTOR(int8_t, 2))(0x34L, (-1L))), 0x44L)).hi, ((VECTOR(int8_t, 16))(l_257.s5bcaae95312aad0b)).sf71d, ((VECTOR(int8_t, 4))(l_258.s6316))))).hi))))).xyyx))))).zyzwxyzywywzzxyy, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(l_259.ywzxxwyx)), ((VECTOR(int8_t, 8))(l_260.yxyxxyyy))))).s3225423022042741))).s1a, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_261.s5272416017311274)))).odd, (int8_t)l_262, (int8_t)l_263))), ((VECTOR(int8_t, 8))(0x3EL))))).s54, ((VECTOR(int8_t, 2))(0x64L))))), l_264.y, (-9L), ((VECTOR(int8_t, 4))(0x34L)), 0x0DL, 1L, ((VECTOR(int8_t, 2))(0x24L)), (-5L))).se920, ((VECTOR(int8_t, 4))(0x32L))))).z, ((VECTOR(int8_t, 2))(0x24L)), 4L)).lo)).xyxyxxxy, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(0x00L))))).hi)), 1L, l_265, 0x7FL, 0x2DL)).hi)), ((VECTOR(int8_t, 2))(0x0EL)), 5L)).sa , l_266), 0x536337888637AB95L, ((VECTOR(int64_t, 2))((-1L))), 1L)).s3, 0x17D46C5297BFD730L, 0x12BE98BD8E4BD243L, 0x69A6C37CB852216DL, l_267, ((VECTOR(int64_t, 4))(1L)), (-1L), 1L, ((VECTOR(int64_t, 4))(0x3C98C8E735146A9DL)))).sd)) , l_268) , l_269))));
                    }
                    l_271 |= ((VECTOR(int32_t, 8))(l_270.s56371547)).s5;
                    unsigned int result = 0;
                    result += l_228.w;
                    result += l_228.z;
                    result += l_228.y;
                    result += l_228.x;
                    int l_229_i0;
                    for (l_229_i0 = 0; l_229_i0 < 2; l_229_i0++) {
                        result += l_229[l_229_i0];
                    }
                    int l_230_i0;
                    for (l_230_i0 = 0; l_230_i0 < 10; l_230_i0++) {
                        result += l_230[l_230_i0];
                    }
                    result += l_231;
                    result += l_232;
                    result += l_233;
                    result += l_234;
                    result += l_235;
                    result += l_236;
                    result += l_237.sf;
                    result += l_237.se;
                    result += l_237.sd;
                    result += l_237.sc;
                    result += l_237.sb;
                    result += l_237.sa;
                    result += l_237.s9;
                    result += l_237.s8;
                    result += l_237.s7;
                    result += l_237.s6;
                    result += l_237.s5;
                    result += l_237.s4;
                    result += l_237.s3;
                    result += l_237.s2;
                    result += l_237.s1;
                    result += l_237.s0;
                    result += l_238.y;
                    result += l_238.x;
                    result += l_239.sf;
                    result += l_239.se;
                    result += l_239.sd;
                    result += l_239.sc;
                    result += l_239.sb;
                    result += l_239.sa;
                    result += l_239.s9;
                    result += l_239.s8;
                    result += l_239.s7;
                    result += l_239.s6;
                    result += l_239.s5;
                    result += l_239.s4;
                    result += l_239.s3;
                    result += l_239.s2;
                    result += l_239.s1;
                    result += l_239.s0;
                    result += l_240;
                    int l_241_i0;
                    for (l_241_i0 = 0; l_241_i0 < 9; l_241_i0++) {
                        result += l_241[l_241_i0];
                    }
                    result += l_270.s7;
                    result += l_270.s6;
                    result += l_270.s5;
                    result += l_270.s4;
                    result += l_270.s3;
                    result += l_270.s2;
                    result += l_270.s1;
                    result += l_270.s0;
                    result += l_271;
                    atomic_add(&p_1248->g_special_values[72 * get_linear_group_id() + 2], result);
                }
                else
                { /* block id: 111 */
                    (1 + 1);
                }
                (*l_94) = &l_111;
            }
            else
            { /* block id: 115 */
                int32_t **l_286 = (void*)0;
                int32_t l_309 = 0x0F9BD769L;
                for (l_222.f0 = 0; (l_222.f0 < (-5)); l_222.f0 = safe_sub_func_int64_t_s_s(l_222.f0, 9))
                { /* block id: 118 */
                    return l_274[8][2];
                }
                for (l_216 = 0; (l_216 < 56); ++l_216)
                { /* block id: 123 */
                    struct S0 *l_285 = &p_1248->g_66[0];
                    p_1248->g_66[2] = l_277[0];
                    for (l_111 = (-2); (l_111 != (-18)); --l_111)
                    { /* block id: 127 */
                        struct S0 *l_281 = (void*)0;
                        struct S0 **l_280 = &l_281;
                        struct S0 *l_282 = &l_175;
                        struct S0 *l_284[3];
                        struct S0 **l_283 = &l_284[1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_284[i] = &l_175;
                        (*l_283) = (l_282 = ((*l_280) = (void*)0));
                    }
                    (*l_285) = p_1248->g_66[0];
                }
                l_90 = ((*l_94) = (*l_94));
                l_309 &= ((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_1248->g_106, 1)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((&l_175 != (void*)0), (safe_mul_func_int16_t_s_s((((4294967286UL > ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_295.s44)), 0x5AAF38A7L, 0L)).y) || (safe_add_func_uint16_t_u_u(p_62, p_62))) ^ (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_1248->g_188.s5, ((safe_mod_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(p_62, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_308.sb75d082f1a0e5e52)).sd, (p_1248->g_96[0] == p_61))))) & 0UL), p_1248->g_22)) , p_62))), p_62)) , l_111) && p_61)), 0x1516L)), l_115[0], p_1248->g_96[0], 0L, 1L, 3L, 0x47L)))).hi)).z)) & (-1L)), 0x2158B6CBL)) , 0x6DAFEBBAL);
            }
            for (p_1248->g_85 = (-21); (p_1248->g_85 < 50); p_1248->g_85 = safe_add_func_uint64_t_u_u(p_1248->g_85, 2))
            { /* block id: 140 */
                if (p_61)
                    break;
                return l_274[2][0];
            }
        }
        l_112 &= ((safe_lshift_func_uint16_t_u_u(p_62, ((p_1248->g_66[0].f0 &= p_61) || (((safe_mod_func_int64_t_s_s(((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((((VECTOR(int64_t, 2))(p_1248->g_320.zx)).odd > (safe_rshift_func_uint8_t_u_u(((p_1248->g_66[0].f0 = ((safe_unary_minus_func_uint8_t_u(((l_325 |= 0x7401L) | p_1248->g_188.s6))) & ((safe_rshift_func_int8_t_s_s(((l_115[0] = p_61) | p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))]), p_61)) , ((VECTOR(int32_t, 4))((((*l_329) = ((*l_328) = (void*)0)) != (((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 4))(0x307649451FE829BFL, 0x494DAE386950EF6BL, 0x2889D8E4C7AD0581L, 0x05B260B9869703A0L)).yxyxwxwy, (int64_t)l_199.s9))).s7 , &l_216)), 0x1B52CC8DL, (-4L), 0x15804805L)).x))) != (-5L)), p_1248->g_320.x))) > p_61) >= 1UL), p_62)), l_111)) || l_184.y) , (void*)0) != l_333), p_1248->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1248->tid, 33))])) & 0xDBL) ^ 0x53L)))) > 4294967295UL);
    }
    return l_334;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_63(int32_t  p_64, struct S0  p_65, struct S3 * p_1248)
{ /* block id: 9 */
    int32_t l_67 = 3L;
    return l_67;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S3 c_1249;
    struct S3* p_1248 = &c_1249;
    struct S3 c_1250 = {
        (VECTOR(uint8_t, 2))(0x90L, 9UL), // p_1248->g_11
        0x098CBDB6L, // p_1248->g_22
        {(void*)0,&p_1248->g_22,(void*)0,(void*)0,&p_1248->g_22,(void*)0,(void*)0,&p_1248->g_22}, // p_1248->g_21
        {{-4L},{-4L},{-4L},{-4L}}, // p_1248->g_66
        4UL, // p_1248->g_85
        {0xB0L}, // p_1248->g_96
        0x0DL, // p_1248->g_106
        (VECTOR(int32_t, 8))(0x664348B5L, (VECTOR(int32_t, 4))(0x664348B5L, (VECTOR(int32_t, 2))(0x664348B5L, 0x0FE5F7D3L), 0x0FE5F7D3L), 0x0FE5F7D3L, 0x664348B5L, 0x0FE5F7D3L), // p_1248->g_188
        (VECTOR(int32_t, 2))(9L, 0x3133CE66L), // p_1248->g_189
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x08D9L), 0x08D9L), 0x08D9L, 65535UL, 0x08D9L), // p_1248->g_219
        0x10CB7C8B6362EB08L, // p_1248->g_227
        {{&p_1248->g_227},{&p_1248->g_227},{&p_1248->g_227},{&p_1248->g_227},{&p_1248->g_227}}, // p_1248->g_226
        (VECTOR(int64_t, 4))(0x521C5DCD7DFA84A0L, (VECTOR(int64_t, 2))(0x521C5DCD7DFA84A0L, 8L), 8L), // p_1248->g_320
        (VECTOR(int64_t, 8))(0x3E90FC896857043FL, (VECTOR(int64_t, 4))(0x3E90FC896857043FL, (VECTOR(int64_t, 2))(0x3E90FC896857043FL, 0x120D47AE477902ADL), 0x120D47AE477902ADL), 0x120D47AE477902ADL, 0x3E90FC896857043FL, 0x120D47AE477902ADL), // p_1248->g_351
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2B68E3A0EB32F37AL), 0x2B68E3A0EB32F37AL), // p_1248->g_352
        0x645AC124L, // p_1248->g_363
        &p_1248->g_96[0], // p_1248->g_365
        &p_1248->g_365, // p_1248->g_364
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD9L), 0xD9L), 0xD9L, 0UL, 0xD9L), // p_1248->g_394
        (VECTOR(int64_t, 2))(0x7423FFE4015C741FL, (-1L)), // p_1248->g_397
        0xA2F1L, // p_1248->g_402
        &p_1248->g_66[0].f0, // p_1248->g_453
        &p_1248->g_85, // p_1248->g_489
        &p_1248->g_489, // p_1248->g_488
        (VECTOR(uint64_t, 2))(0x7DA1060FE221F971L, 0xAC67B0F103769DFBL), // p_1248->g_510
        (void*)0, // p_1248->g_522
        (VECTOR(int32_t, 16))(0x58260DB4L, (VECTOR(int32_t, 4))(0x58260DB4L, (VECTOR(int32_t, 2))(0x58260DB4L, 0x16EA7130L), 0x16EA7130L), 0x16EA7130L, 0x58260DB4L, 0x16EA7130L, (VECTOR(int32_t, 2))(0x58260DB4L, 0x16EA7130L), (VECTOR(int32_t, 2))(0x58260DB4L, 0x16EA7130L), 0x58260DB4L, 0x16EA7130L, 0x58260DB4L, 0x16EA7130L), // p_1248->g_525
        {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}, // p_1248->g_531
        {1L}, // p_1248->g_535
        {{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}},{{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{6L,0xC2DB7FBCL,-1L,0x1EE7CF3EL,0x1E553178A991E7C4L,-10L,1L,0x1116L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L},{0x6FAC174CL,4294967295UL,0x5AB1L,0x459A21C6L,0x4225A72E60E4292EL,0x52A01BA2L,2L,1L}}}, // p_1248->g_561
        (void*)0, // p_1248->g_565
        1UL, // p_1248->g_569
        (VECTOR(uint32_t, 2))(0xD4E974F9L, 0UL), // p_1248->g_590
        (VECTOR(int16_t, 8))(0x34FEL, (VECTOR(int16_t, 4))(0x34FEL, (VECTOR(int16_t, 2))(0x34FEL, 0x41F2L), 0x41F2L), 0x41F2L, 0x34FEL, 0x41F2L), // p_1248->g_596
        (VECTOR(uint32_t, 2))(0x8F8410CBL, 2UL), // p_1248->g_604
        1UL, // p_1248->g_610
        0xCCB31E16L, // p_1248->g_620
        (VECTOR(uint16_t, 4))(0xECBEL, (VECTOR(uint16_t, 2))(0xECBEL, 1UL), 1UL), // p_1248->g_633
        (VECTOR(uint32_t, 8))(0xDD4C8963L, (VECTOR(uint32_t, 4))(0xDD4C8963L, (VECTOR(uint32_t, 2))(0xDD4C8963L, 4294967286UL), 4294967286UL), 4294967286UL, 0xDD4C8963L, 4294967286UL), // p_1248->g_644
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL), // p_1248->g_692
        (VECTOR(uint64_t, 4))(0x1C2B989F32541AAAL, (VECTOR(uint64_t, 2))(0x1C2B989F32541AAAL, 0x7A8F4BAA4E30A68CL), 0x7A8F4BAA4E30A68CL), // p_1248->g_739
        (void*)0, // p_1248->g_742
        {{0x198CL},0x4E7DL,0x36L,4294967287UL,65527UL,{0x0DE3L},65535UL,0x7854D99DL,0x26F99160C44F1DA4L,0x2F81306EL}, // p_1248->g_771
        (void*)0, // p_1248->g_854
        &p_1248->g_854, // p_1248->g_853
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL), // p_1248->g_869
        (VECTOR(int16_t, 4))(0x1534L, (VECTOR(int16_t, 2))(0x1534L, 0x484BL), 0x484BL), // p_1248->g_910
        (VECTOR(uint8_t, 8))(0xA0L, (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 0x6EL), 0x6EL), 0x6EL, 0xA0L, 0x6EL), // p_1248->g_911
        (VECTOR(int16_t, 2))(0L, 1L), // p_1248->g_913
        {{0x617DL},9UL,-10L,0x411563DCL,0x5888L,{0x7E89L},0UL,0L,9L,0UL}, // p_1248->g_1015
        {0x3501604AL,1UL,0x6BACL,0x580B0F20L,0x5A46FFFFFDB7D53DL,7L,0x3940F253L,0x2400L}, // p_1248->g_1039
        {{{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{1L,0x51CDBD91L,0x0AF2L,0x06F917D8L,0x0CE346F648A1CBEBL,0x1AF1BF80L,0L,0x75DFL},{0x74841FBCL,4294967286UL,0x7D20L,0x22E41AE9L,0x69DA3AC9E2FB88BCL,0x436DCA4FL,0x12109056L,0x5BE1L},{0L,1UL,-8L,1L,1L,8L,0x3923640DL,-6L}},{{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{1L,0x51CDBD91L,0x0AF2L,0x06F917D8L,0x0CE346F648A1CBEBL,0x1AF1BF80L,0L,0x75DFL},{0x74841FBCL,4294967286UL,0x7D20L,0x22E41AE9L,0x69DA3AC9E2FB88BCL,0x436DCA4FL,0x12109056L,0x5BE1L},{0L,1UL,-8L,1L,1L,8L,0x3923640DL,-6L}},{{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{0x177772C0L,3UL,-10L,0x6B5AE141L,0x163A8BE15E4463BDL,-5L,0x2ED0C178L,0L},{1L,0x51CDBD91L,0x0AF2L,0x06F917D8L,0x0CE346F648A1CBEBL,0x1AF1BF80L,0L,0x75DFL},{0x74841FBCL,4294967286UL,0x7D20L,0x22E41AE9L,0x69DA3AC9E2FB88BCL,0x436DCA4FL,0x12109056L,0x5BE1L},{0L,1UL,-8L,1L,1L,8L,0x3923640DL,-6L}}}, // p_1248->g_1247
        0, // p_1248->v_collective
        sequence_input[get_global_id(0)], // p_1248->global_0_offset
        sequence_input[get_global_id(1)], // p_1248->global_1_offset
        sequence_input[get_global_id(2)], // p_1248->global_2_offset
        sequence_input[get_local_id(0)], // p_1248->local_0_offset
        sequence_input[get_local_id(1)], // p_1248->local_1_offset
        sequence_input[get_local_id(2)], // p_1248->local_2_offset
        sequence_input[get_group_id(0)], // p_1248->group_0_offset
        sequence_input[get_group_id(1)], // p_1248->group_1_offset
        sequence_input[get_group_id(2)], // p_1248->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_1248->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1249 = c_1250;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1248);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1248->g_11.x, "p_1248->g_11.x", print_hash_value);
    transparent_crc(p_1248->g_11.y, "p_1248->g_11.y", print_hash_value);
    transparent_crc(p_1248->g_22, "p_1248->g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1248->g_66[i].f0, "p_1248->g_66[i].f0", print_hash_value);

    }
    transparent_crc(p_1248->g_85, "p_1248->g_85", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1248->g_96[i], "p_1248->g_96[i]", print_hash_value);

    }
    transparent_crc(p_1248->g_106, "p_1248->g_106", print_hash_value);
    transparent_crc(p_1248->g_188.s0, "p_1248->g_188.s0", print_hash_value);
    transparent_crc(p_1248->g_188.s1, "p_1248->g_188.s1", print_hash_value);
    transparent_crc(p_1248->g_188.s2, "p_1248->g_188.s2", print_hash_value);
    transparent_crc(p_1248->g_188.s3, "p_1248->g_188.s3", print_hash_value);
    transparent_crc(p_1248->g_188.s4, "p_1248->g_188.s4", print_hash_value);
    transparent_crc(p_1248->g_188.s5, "p_1248->g_188.s5", print_hash_value);
    transparent_crc(p_1248->g_188.s6, "p_1248->g_188.s6", print_hash_value);
    transparent_crc(p_1248->g_188.s7, "p_1248->g_188.s7", print_hash_value);
    transparent_crc(p_1248->g_189.x, "p_1248->g_189.x", print_hash_value);
    transparent_crc(p_1248->g_189.y, "p_1248->g_189.y", print_hash_value);
    transparent_crc(p_1248->g_219.s0, "p_1248->g_219.s0", print_hash_value);
    transparent_crc(p_1248->g_219.s1, "p_1248->g_219.s1", print_hash_value);
    transparent_crc(p_1248->g_219.s2, "p_1248->g_219.s2", print_hash_value);
    transparent_crc(p_1248->g_219.s3, "p_1248->g_219.s3", print_hash_value);
    transparent_crc(p_1248->g_219.s4, "p_1248->g_219.s4", print_hash_value);
    transparent_crc(p_1248->g_219.s5, "p_1248->g_219.s5", print_hash_value);
    transparent_crc(p_1248->g_219.s6, "p_1248->g_219.s6", print_hash_value);
    transparent_crc(p_1248->g_219.s7, "p_1248->g_219.s7", print_hash_value);
    transparent_crc(p_1248->g_227, "p_1248->g_227", print_hash_value);
    transparent_crc(p_1248->g_320.x, "p_1248->g_320.x", print_hash_value);
    transparent_crc(p_1248->g_320.y, "p_1248->g_320.y", print_hash_value);
    transparent_crc(p_1248->g_320.z, "p_1248->g_320.z", print_hash_value);
    transparent_crc(p_1248->g_320.w, "p_1248->g_320.w", print_hash_value);
    transparent_crc(p_1248->g_351.s0, "p_1248->g_351.s0", print_hash_value);
    transparent_crc(p_1248->g_351.s1, "p_1248->g_351.s1", print_hash_value);
    transparent_crc(p_1248->g_351.s2, "p_1248->g_351.s2", print_hash_value);
    transparent_crc(p_1248->g_351.s3, "p_1248->g_351.s3", print_hash_value);
    transparent_crc(p_1248->g_351.s4, "p_1248->g_351.s4", print_hash_value);
    transparent_crc(p_1248->g_351.s5, "p_1248->g_351.s5", print_hash_value);
    transparent_crc(p_1248->g_351.s6, "p_1248->g_351.s6", print_hash_value);
    transparent_crc(p_1248->g_351.s7, "p_1248->g_351.s7", print_hash_value);
    transparent_crc(p_1248->g_352.x, "p_1248->g_352.x", print_hash_value);
    transparent_crc(p_1248->g_352.y, "p_1248->g_352.y", print_hash_value);
    transparent_crc(p_1248->g_352.z, "p_1248->g_352.z", print_hash_value);
    transparent_crc(p_1248->g_352.w, "p_1248->g_352.w", print_hash_value);
    transparent_crc(p_1248->g_363, "p_1248->g_363", print_hash_value);
    transparent_crc(p_1248->g_394.s0, "p_1248->g_394.s0", print_hash_value);
    transparent_crc(p_1248->g_394.s1, "p_1248->g_394.s1", print_hash_value);
    transparent_crc(p_1248->g_394.s2, "p_1248->g_394.s2", print_hash_value);
    transparent_crc(p_1248->g_394.s3, "p_1248->g_394.s3", print_hash_value);
    transparent_crc(p_1248->g_394.s4, "p_1248->g_394.s4", print_hash_value);
    transparent_crc(p_1248->g_394.s5, "p_1248->g_394.s5", print_hash_value);
    transparent_crc(p_1248->g_394.s6, "p_1248->g_394.s6", print_hash_value);
    transparent_crc(p_1248->g_394.s7, "p_1248->g_394.s7", print_hash_value);
    transparent_crc(p_1248->g_397.x, "p_1248->g_397.x", print_hash_value);
    transparent_crc(p_1248->g_397.y, "p_1248->g_397.y", print_hash_value);
    transparent_crc(p_1248->g_402, "p_1248->g_402", print_hash_value);
    transparent_crc(p_1248->g_510.x, "p_1248->g_510.x", print_hash_value);
    transparent_crc(p_1248->g_510.y, "p_1248->g_510.y", print_hash_value);
    transparent_crc(p_1248->g_525.s0, "p_1248->g_525.s0", print_hash_value);
    transparent_crc(p_1248->g_525.s1, "p_1248->g_525.s1", print_hash_value);
    transparent_crc(p_1248->g_525.s2, "p_1248->g_525.s2", print_hash_value);
    transparent_crc(p_1248->g_525.s3, "p_1248->g_525.s3", print_hash_value);
    transparent_crc(p_1248->g_525.s4, "p_1248->g_525.s4", print_hash_value);
    transparent_crc(p_1248->g_525.s5, "p_1248->g_525.s5", print_hash_value);
    transparent_crc(p_1248->g_525.s6, "p_1248->g_525.s6", print_hash_value);
    transparent_crc(p_1248->g_525.s7, "p_1248->g_525.s7", print_hash_value);
    transparent_crc(p_1248->g_525.s8, "p_1248->g_525.s8", print_hash_value);
    transparent_crc(p_1248->g_525.s9, "p_1248->g_525.s9", print_hash_value);
    transparent_crc(p_1248->g_525.sa, "p_1248->g_525.sa", print_hash_value);
    transparent_crc(p_1248->g_525.sb, "p_1248->g_525.sb", print_hash_value);
    transparent_crc(p_1248->g_525.sc, "p_1248->g_525.sc", print_hash_value);
    transparent_crc(p_1248->g_525.sd, "p_1248->g_525.sd", print_hash_value);
    transparent_crc(p_1248->g_525.se, "p_1248->g_525.se", print_hash_value);
    transparent_crc(p_1248->g_525.sf, "p_1248->g_525.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1248->g_531[i], "p_1248->g_531[i]", print_hash_value);

    }
    transparent_crc(p_1248->g_535.f0, "p_1248->g_535.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1248->g_561[i][j].f0, "p_1248->g_561[i][j].f0", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f1, "p_1248->g_561[i][j].f1", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f2, "p_1248->g_561[i][j].f2", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f3, "p_1248->g_561[i][j].f3", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f4, "p_1248->g_561[i][j].f4", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f5, "p_1248->g_561[i][j].f5", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f6, "p_1248->g_561[i][j].f6", print_hash_value);
            transparent_crc(p_1248->g_561[i][j].f7, "p_1248->g_561[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1248->g_569, "p_1248->g_569", print_hash_value);
    transparent_crc(p_1248->g_590.x, "p_1248->g_590.x", print_hash_value);
    transparent_crc(p_1248->g_590.y, "p_1248->g_590.y", print_hash_value);
    transparent_crc(p_1248->g_596.s0, "p_1248->g_596.s0", print_hash_value);
    transparent_crc(p_1248->g_596.s1, "p_1248->g_596.s1", print_hash_value);
    transparent_crc(p_1248->g_596.s2, "p_1248->g_596.s2", print_hash_value);
    transparent_crc(p_1248->g_596.s3, "p_1248->g_596.s3", print_hash_value);
    transparent_crc(p_1248->g_596.s4, "p_1248->g_596.s4", print_hash_value);
    transparent_crc(p_1248->g_596.s5, "p_1248->g_596.s5", print_hash_value);
    transparent_crc(p_1248->g_596.s6, "p_1248->g_596.s6", print_hash_value);
    transparent_crc(p_1248->g_596.s7, "p_1248->g_596.s7", print_hash_value);
    transparent_crc(p_1248->g_604.x, "p_1248->g_604.x", print_hash_value);
    transparent_crc(p_1248->g_604.y, "p_1248->g_604.y", print_hash_value);
    transparent_crc(p_1248->g_610, "p_1248->g_610", print_hash_value);
    transparent_crc(p_1248->g_620, "p_1248->g_620", print_hash_value);
    transparent_crc(p_1248->g_633.x, "p_1248->g_633.x", print_hash_value);
    transparent_crc(p_1248->g_633.y, "p_1248->g_633.y", print_hash_value);
    transparent_crc(p_1248->g_633.z, "p_1248->g_633.z", print_hash_value);
    transparent_crc(p_1248->g_633.w, "p_1248->g_633.w", print_hash_value);
    transparent_crc(p_1248->g_644.s0, "p_1248->g_644.s0", print_hash_value);
    transparent_crc(p_1248->g_644.s1, "p_1248->g_644.s1", print_hash_value);
    transparent_crc(p_1248->g_644.s2, "p_1248->g_644.s2", print_hash_value);
    transparent_crc(p_1248->g_644.s3, "p_1248->g_644.s3", print_hash_value);
    transparent_crc(p_1248->g_644.s4, "p_1248->g_644.s4", print_hash_value);
    transparent_crc(p_1248->g_644.s5, "p_1248->g_644.s5", print_hash_value);
    transparent_crc(p_1248->g_644.s6, "p_1248->g_644.s6", print_hash_value);
    transparent_crc(p_1248->g_644.s7, "p_1248->g_644.s7", print_hash_value);
    transparent_crc(p_1248->g_692.s0, "p_1248->g_692.s0", print_hash_value);
    transparent_crc(p_1248->g_692.s1, "p_1248->g_692.s1", print_hash_value);
    transparent_crc(p_1248->g_692.s2, "p_1248->g_692.s2", print_hash_value);
    transparent_crc(p_1248->g_692.s3, "p_1248->g_692.s3", print_hash_value);
    transparent_crc(p_1248->g_692.s4, "p_1248->g_692.s4", print_hash_value);
    transparent_crc(p_1248->g_692.s5, "p_1248->g_692.s5", print_hash_value);
    transparent_crc(p_1248->g_692.s6, "p_1248->g_692.s6", print_hash_value);
    transparent_crc(p_1248->g_692.s7, "p_1248->g_692.s7", print_hash_value);
    transparent_crc(p_1248->g_739.x, "p_1248->g_739.x", print_hash_value);
    transparent_crc(p_1248->g_739.y, "p_1248->g_739.y", print_hash_value);
    transparent_crc(p_1248->g_739.z, "p_1248->g_739.z", print_hash_value);
    transparent_crc(p_1248->g_739.w, "p_1248->g_739.w", print_hash_value);
    transparent_crc(p_1248->g_771.f0.f0, "p_1248->g_771.f0.f0", print_hash_value);
    transparent_crc(p_1248->g_771.f1, "p_1248->g_771.f1", print_hash_value);
    transparent_crc(p_1248->g_771.f2, "p_1248->g_771.f2", print_hash_value);
    transparent_crc(p_1248->g_771.f3, "p_1248->g_771.f3", print_hash_value);
    transparent_crc(p_1248->g_771.f4, "p_1248->g_771.f4", print_hash_value);
    transparent_crc(p_1248->g_771.f5.f0, "p_1248->g_771.f5.f0", print_hash_value);
    transparent_crc(p_1248->g_771.f6, "p_1248->g_771.f6", print_hash_value);
    transparent_crc(p_1248->g_771.f7, "p_1248->g_771.f7", print_hash_value);
    transparent_crc(p_1248->g_771.f8, "p_1248->g_771.f8", print_hash_value);
    transparent_crc(p_1248->g_771.f9, "p_1248->g_771.f9", print_hash_value);
    transparent_crc(p_1248->g_869.s0, "p_1248->g_869.s0", print_hash_value);
    transparent_crc(p_1248->g_869.s1, "p_1248->g_869.s1", print_hash_value);
    transparent_crc(p_1248->g_869.s2, "p_1248->g_869.s2", print_hash_value);
    transparent_crc(p_1248->g_869.s3, "p_1248->g_869.s3", print_hash_value);
    transparent_crc(p_1248->g_869.s4, "p_1248->g_869.s4", print_hash_value);
    transparent_crc(p_1248->g_869.s5, "p_1248->g_869.s5", print_hash_value);
    transparent_crc(p_1248->g_869.s6, "p_1248->g_869.s6", print_hash_value);
    transparent_crc(p_1248->g_869.s7, "p_1248->g_869.s7", print_hash_value);
    transparent_crc(p_1248->g_910.x, "p_1248->g_910.x", print_hash_value);
    transparent_crc(p_1248->g_910.y, "p_1248->g_910.y", print_hash_value);
    transparent_crc(p_1248->g_910.z, "p_1248->g_910.z", print_hash_value);
    transparent_crc(p_1248->g_910.w, "p_1248->g_910.w", print_hash_value);
    transparent_crc(p_1248->g_911.s0, "p_1248->g_911.s0", print_hash_value);
    transparent_crc(p_1248->g_911.s1, "p_1248->g_911.s1", print_hash_value);
    transparent_crc(p_1248->g_911.s2, "p_1248->g_911.s2", print_hash_value);
    transparent_crc(p_1248->g_911.s3, "p_1248->g_911.s3", print_hash_value);
    transparent_crc(p_1248->g_911.s4, "p_1248->g_911.s4", print_hash_value);
    transparent_crc(p_1248->g_911.s5, "p_1248->g_911.s5", print_hash_value);
    transparent_crc(p_1248->g_911.s6, "p_1248->g_911.s6", print_hash_value);
    transparent_crc(p_1248->g_911.s7, "p_1248->g_911.s7", print_hash_value);
    transparent_crc(p_1248->g_913.x, "p_1248->g_913.x", print_hash_value);
    transparent_crc(p_1248->g_913.y, "p_1248->g_913.y", print_hash_value);
    transparent_crc(p_1248->g_1015.f0.f0, "p_1248->g_1015.f0.f0", print_hash_value);
    transparent_crc(p_1248->g_1015.f1, "p_1248->g_1015.f1", print_hash_value);
    transparent_crc(p_1248->g_1015.f2, "p_1248->g_1015.f2", print_hash_value);
    transparent_crc(p_1248->g_1015.f3, "p_1248->g_1015.f3", print_hash_value);
    transparent_crc(p_1248->g_1015.f4, "p_1248->g_1015.f4", print_hash_value);
    transparent_crc(p_1248->g_1015.f5.f0, "p_1248->g_1015.f5.f0", print_hash_value);
    transparent_crc(p_1248->g_1015.f6, "p_1248->g_1015.f6", print_hash_value);
    transparent_crc(p_1248->g_1015.f7, "p_1248->g_1015.f7", print_hash_value);
    transparent_crc(p_1248->g_1015.f8, "p_1248->g_1015.f8", print_hash_value);
    transparent_crc(p_1248->g_1015.f9, "p_1248->g_1015.f9", print_hash_value);
    transparent_crc(p_1248->g_1039.f0, "p_1248->g_1039.f0", print_hash_value);
    transparent_crc(p_1248->g_1039.f1, "p_1248->g_1039.f1", print_hash_value);
    transparent_crc(p_1248->g_1039.f2, "p_1248->g_1039.f2", print_hash_value);
    transparent_crc(p_1248->g_1039.f3, "p_1248->g_1039.f3", print_hash_value);
    transparent_crc(p_1248->g_1039.f4, "p_1248->g_1039.f4", print_hash_value);
    transparent_crc(p_1248->g_1039.f5, "p_1248->g_1039.f5", print_hash_value);
    transparent_crc(p_1248->g_1039.f6, "p_1248->g_1039.f6", print_hash_value);
    transparent_crc(p_1248->g_1039.f7, "p_1248->g_1039.f7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1248->g_1247[i][j].f0, "p_1248->g_1247[i][j].f0", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f1, "p_1248->g_1247[i][j].f1", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f2, "p_1248->g_1247[i][j].f2", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f3, "p_1248->g_1247[i][j].f3", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f4, "p_1248->g_1247[i][j].f4", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f5, "p_1248->g_1247[i][j].f5", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f6, "p_1248->g_1247[i][j].f6", print_hash_value);
            transparent_crc(p_1248->g_1247[i][j].f7, "p_1248->g_1247[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(p_1248->v_collective, "p_1248->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 72; i++)
            transparent_crc(p_1248->g_special_values[i + 72 * get_linear_group_id()], "p_1248->g_special_values[i + 72 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 72; i++)
            transparent_crc(p_1248->l_special_values[i], "p_1248->l_special_values[i]", print_hash_value);
    transparent_crc(p_1248->l_comm_values[get_linear_local_id()], "p_1248->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1248->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_1248->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
