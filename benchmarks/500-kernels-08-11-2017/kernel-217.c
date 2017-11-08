// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 36,50,3 -l 2,10,3
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

__constant uint32_t permutations[10][60] = {
{31,35,12,0,33,18,20,9,36,13,26,34,56,40,53,57,17,38,44,2,48,37,15,19,58,39,1,6,4,10,14,54,52,59,30,51,22,23,32,46,47,45,42,25,55,50,29,21,43,11,3,16,41,27,7,49,28,8,5,24}, // permutation 0
{23,25,40,3,35,5,38,30,49,13,59,2,19,17,42,20,15,18,4,44,31,34,32,54,21,51,8,39,28,58,48,7,41,27,45,56,36,53,10,9,55,47,57,52,43,12,14,29,16,11,37,46,6,24,33,1,50,0,22,26}, // permutation 1
{36,16,39,50,38,42,58,9,4,49,13,15,33,35,34,48,53,11,8,18,29,0,7,24,51,22,56,52,26,54,14,44,41,5,3,55,45,31,1,20,2,30,12,37,6,19,43,59,40,23,57,17,32,28,46,21,25,47,27,10}, // permutation 2
{23,15,44,2,34,22,38,30,3,31,45,54,19,39,43,26,27,35,4,9,47,40,37,12,51,7,16,14,33,6,57,42,29,13,32,49,17,55,36,41,20,28,1,53,5,11,24,25,0,48,50,8,10,56,58,46,21,52,18,59}, // permutation 3
{15,24,14,43,16,21,20,53,52,42,19,58,0,39,13,30,51,50,54,44,28,5,4,46,26,38,9,35,37,2,32,3,17,8,29,1,27,40,57,18,55,23,33,22,25,48,6,49,41,11,10,34,12,59,56,47,31,36,45,7}, // permutation 4
{43,22,26,59,24,30,27,46,1,44,41,29,50,28,40,45,19,2,12,5,56,23,20,58,39,54,42,17,7,38,34,49,16,52,9,15,55,35,37,36,13,4,51,14,11,48,32,33,8,18,0,3,31,25,53,21,47,57,6,10}, // permutation 5
{4,20,35,26,14,48,51,23,55,56,52,7,38,46,28,22,24,18,43,49,5,16,2,11,17,45,54,19,42,44,6,53,21,39,15,57,0,32,12,25,59,30,13,3,33,34,58,50,27,36,9,47,37,8,10,31,29,1,40,41}, // permutation 6
{46,26,33,3,10,22,35,7,45,18,38,6,39,4,9,51,49,53,25,59,40,29,30,54,20,28,56,2,36,19,58,42,11,13,32,17,47,24,34,12,48,1,5,27,55,50,15,41,14,21,44,8,23,31,37,16,0,57,52,43}, // permutation 7
{12,10,16,59,42,49,56,41,45,22,52,1,7,8,37,14,38,35,24,18,4,0,11,9,48,36,3,54,47,39,51,46,5,15,58,6,43,21,40,17,28,25,57,32,19,55,20,31,30,29,33,44,53,27,2,50,23,34,26,13}, // permutation 8
{42,41,29,14,46,13,27,54,26,36,11,51,49,10,52,16,35,59,28,34,40,2,48,1,20,22,0,43,17,53,47,33,58,7,12,21,24,25,8,3,57,39,37,55,44,30,56,9,18,4,45,6,19,31,38,50,32,15,5,23} // permutation 9
};

// Seed: 3128753210

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t *g_2;
    int32_t g_15;
    volatile VECTOR(uint8_t, 4) g_31;
    VECTOR(int32_t, 16) g_57;
    int32_t *g_73;
    int32_t ** volatile g_72[10][8][3];
    int32_t ** volatile *g_71;
    uint64_t g_75;
    uint8_t g_138;
    VECTOR(uint8_t, 16) g_153;
    int8_t g_172;
    int8_t *g_171;
    int16_t g_177;
    VECTOR(uint32_t, 4) g_183;
    VECTOR(int32_t, 16) g_184;
    VECTOR(int32_t, 4) g_185;
    VECTOR(int32_t, 8) g_187;
    VECTOR(int8_t, 2) g_190;
    VECTOR(int8_t, 8) g_197;
    VECTOR(uint64_t, 2) g_213;
    VECTOR(uint64_t, 4) g_214;
    VECTOR(uint64_t, 8) g_215;
    VECTOR(uint64_t, 8) g_216;
    VECTOR(uint64_t, 8) g_217;
    VECTOR(uint64_t, 4) g_218;
    VECTOR(uint16_t, 8) g_228;
    VECTOR(uint16_t, 16) g_230;
    VECTOR(uint16_t, 8) g_232;
    VECTOR(uint16_t, 2) g_233;
    VECTOR(uint16_t, 16) g_234;
    int32_t **g_251;
    int32_t ***g_250;
    VECTOR(uint64_t, 16) g_264;
    VECTOR(uint16_t, 4) g_276;
    VECTOR(int32_t, 4) g_279;
    VECTOR(int8_t, 4) g_299;
    uint16_t *g_312;
    VECTOR(int64_t, 4) g_342;
    VECTOR(int32_t, 16) g_360;
    int8_t g_383;
    VECTOR(int64_t, 4) g_384;
    VECTOR(int64_t, 4) g_388;
    VECTOR(uint16_t, 2) g_416;
    VECTOR(uint16_t, 8) g_417;
    VECTOR(uint64_t, 2) g_469;
    VECTOR(uint8_t, 8) g_489;
    VECTOR(uint8_t, 2) g_490;
    VECTOR(uint8_t, 16) g_491;
    VECTOR(uint8_t, 2) g_492;
    VECTOR(uint8_t, 2) g_493;
    VECTOR(uint8_t, 8) g_498;
    VECTOR(int32_t, 2) g_507;
    VECTOR(int16_t, 2) g_538;
    volatile int64_t g_543[4][4][1];
    volatile int64_t *g_542;
    uint32_t g_546;
    int32_t g_560[1];
    VECTOR(int64_t, 16) g_561;
    VECTOR(int32_t, 16) g_580;
    VECTOR(int32_t, 2) g_582;
    VECTOR(int32_t, 2) g_583;
    VECTOR(uint16_t, 16) g_597;
    uint32_t *g_679;
    uint32_t **g_678;
    uint32_t **g_681;
    VECTOR(int16_t, 2) g_687;
    VECTOR(uint32_t, 4) g_694;
    int64_t g_712;
    int32_t * volatile g_726;
    int32_t * volatile g_727;
    int32_t * volatile g_729;
    int8_t g_743[7];
    int8_t g_744;
    int32_t * volatile g_765;
    VECTOR(uint32_t, 16) g_789;
    volatile VECTOR(uint8_t, 16) g_800;
    uint32_t g_833;
    VECTOR(uint32_t, 2) g_843;
    VECTOR(uint16_t, 4) g_856;
    int64_t g_866;
    VECTOR(uint32_t, 8) g_869;
    uint64_t g_881;
    volatile VECTOR(uint64_t, 2) g_889;
    volatile VECTOR(int8_t, 4) g_891;
    uint8_t * volatile **g_901;
    int16_t g_921;
    volatile VECTOR(uint16_t, 4) g_959;
    VECTOR(int32_t, 16) g_994;
    volatile VECTOR(uint8_t, 8) g_1001;
    VECTOR(uint8_t, 4) g_1002;
    volatile uint32_t g_1043[5][3][7];
    int32_t * volatile g_1049;
    uint32_t g_1075;
    VECTOR(uint64_t, 4) g_1078;
    volatile VECTOR(uint64_t, 2) g_1081;
    VECTOR(int16_t, 4) g_1086;
    VECTOR(uint32_t, 4) g_1095;
    VECTOR(int32_t, 8) g_1110;
    VECTOR(uint32_t, 8) g_1144;
    VECTOR(uint32_t, 2) g_1146;
    uint64_t **g_1152;
    volatile VECTOR(uint16_t, 4) g_1225;
    volatile VECTOR(int16_t, 16) g_1232;
    VECTOR(uint16_t, 2) g_1265;
    int32_t * volatile g_1280;
    int32_t * volatile * volatile g_1281;
    VECTOR(int64_t, 4) g_1290;
    volatile VECTOR(int16_t, 16) g_1293;
    volatile VECTOR(uint32_t, 8) g_1300;
    VECTOR(int16_t, 16) g_1323;
    VECTOR(int32_t, 16) g_1327;
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
uint16_t  func_1(struct S0 * p_1361);
uint16_t  func_3(uint64_t  p_4, int32_t * p_5, uint32_t  p_6, int32_t * p_7, struct S0 * p_1361);
int32_t * func_9(int32_t * p_10, int32_t * p_11, int16_t  p_12, int32_t * p_13, struct S0 * p_1361);
int32_t * func_16(int32_t * p_17, uint32_t  p_18, int32_t * p_19, struct S0 * p_1361);
int32_t * func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, int16_t  p_24, struct S0 * p_1361);
int32_t * func_32(int32_t * p_33, int32_t  p_34, struct S0 * p_1361);
int32_t  func_35(uint64_t  p_36, struct S0 * p_1361);
int64_t  func_46(int32_t  p_47, int32_t ** p_48, int32_t *** p_49, uint32_t  p_50, struct S0 * p_1361);
int32_t  func_51(int32_t  p_52, int8_t  p_53, int32_t * p_54, int32_t * p_55, int32_t ** p_56, struct S0 * p_1361);
int16_t  func_58(int32_t * p_59, int32_t * p_60, int8_t  p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_1361);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1361->g_2 p_1361->l_comm_values p_1361->g_31 p_1361->g_15 p_1361->g_71 p_1361->g_57 p_1361->g_comm_values p_1361->g_75 p_1361->g_73 p_1361->g_138 p_1361->g_153 p_1361->g_250 p_1361->g_171 p_1361->g_172 p_1361->g_276 p_1361->g_215 p_1361->g_279 p_1361->g_312 p_1361->g_177 p_1361->g_230 p_1361->g_218 p_1361->g_383 p_1361->g_183 p_1361->g_360 p_1361->g_416 p_1361->g_417 p_1361->g_233 p_1361->g_342 p_1361->g_264 p_1361->g_228 p_1361->g_197 p_1361->g_538 p_1361->g_542 p_1361->g_469 p_1361->g_187 p_1361->g_678 p_1361->g_712 p_1361->g_687 p_1361->g_694 p_1361->g_491 p_1361->g_498 p_1361->g_546 p_1361->g_489 p_1361->g_729 p_1361->g_560 p_1361->g_543 p_1361->g_507 p_1361->g_743 p_1361->g_384 p_1361->g_493 p_1361->g_765 p_1361->g_583 p_1361->g_744 p_1361->g_800 p_1361->g_833 p_1361->g_843 p_1361->g_214 p_1361->g_856 p_1361->g_866 p_1361->g_869 p_1361->g_889 p_1361->g_891 p_1361->g_901 p_1361->g_580 p_1361->g_959 p_1361->g_216 p_1361->g_994 p_1361->g_1001 p_1361->g_1002 p_1361->g_185 p_1361->g_1043 p_1361->g_1049 p_1361->g_881 p_1361->g_1110 p_1361->g_921 p_1361->g_1095 p_1361->g_232 p_1361->g_1144 p_1361->g_1146 p_1361->g_1075 p_1361->g_1225 p_1361->g_1265 p_1361->g_190 p_1361->g_582 p_1361->g_388 p_1361->g_184 p_1361->g_1280 p_1361->g_1081 p_1361->g_1290 p_1361->g_1293 p_1361->g_1300 p_1361->g_789 p_1361->g_1323 p_1361->g_1327
 * writes: p_1361->g_15 p_1361->g_75 p_1361->g_57 p_1361->g_73 p_1361->g_172 p_1361->g_276 p_1361->g_153 p_1361->g_177 p_1361->g_360 p_1361->g_233 p_1361->g_234 p_1361->g_138 p_1361->g_546 p_1361->g_187 p_1361->g_678 p_1361->g_681 p_1361->g_388 p_1361->g_560 p_1361->g_743 p_1361->g_744 p_1361->g_694 p_1361->l_comm_values p_1361->g_342 p_1361->g_833 p_1361->g_214 p_1361->g_580 p_1361->g_213 p_1361->g_216 p_1361->g_1043 p_1361->g_881 p_1361->g_561 p_1361->g_921 p_1361->g_1152 p_1361->g_1075 p_1361->g_679 p_1361->g_712 p_1361->g_1146 p_1361->g_1086 p_1361->g_1095 p_1361->g_1265 p_1361->g_726 p_1361->g_493 p_1361->g_185
 */
uint16_t  func_1(struct S0 * p_1361)
{ /* block id: 4 */
    int64_t l_8 = 2L;
    int32_t *l_14[10][7] = {{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_15,&p_1361->g_15,&p_1361->g_15,(void*)0}};
    int32_t **l_1253 = &p_1361->g_73;
    uint32_t l_1268 = 0xCA1B1411L;
    uint64_t *l_1269 = (void*)0;
    uint64_t *l_1270 = (void*)0;
    uint64_t *l_1271 = (void*)0;
    uint64_t *l_1272[10][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint32_t *l_1354 = (void*)0;
    uint32_t *l_1355[2][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t l_1356 = 0x06L;
    VECTOR(int32_t, 2) l_1357 = (VECTOR(int32_t, 2))(0x037915DBL, 1L);
    uint16_t **l_1359 = (void*)0;
    uint16_t ***l_1358 = &l_1359;
    int32_t l_1360 = 0x2AD7D987L;
    int i, j, k;
    (*l_1253) = (((FAKE_DIVERGE(p_1361->group_0_offset, get_group_id(0), 10) || ((void*)0 != p_1361->g_2)) | (func_3(l_8, func_9(l_14[6][5], &p_1361->g_15, ((void*)0 == l_14[0][0]), func_16(func_20(p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))], l_14[1][3], l_14[6][5], p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))], p_1361), p_1361->g_507.x, l_14[6][1], p_1361), p_1361), p_1361->g_230.s3, l_14[6][5], p_1361) ^ p_1361->g_489.s7)) , (void*)0);
    if ((safe_unary_minus_func_uint64_t_u((((p_1361->g_276.y , (safe_div_func_uint64_t_u_u((p_1361->g_216.s6 = (safe_mul_func_uint16_t_u_u(p_1361->g_1225.x, (safe_mod_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((p_1361->g_279.y < ((VECTOR(uint16_t, 4))(p_1361->g_1265.yyyy)).x), 0xB2L)), (safe_mod_func_uint32_t_u_u(p_1361->g_190.x, p_1361->g_582.y)))) < (0x58L == (4294967295UL | ((p_1361->g_388.x == p_1361->g_15) , l_1268)))) & p_1361->g_215.s5), 0xDFC7FE19717D7487L))))), p_1361->g_184.sd))) <= p_1361->g_582.x) || p_1361->g_138))))
    { /* block id: 495 */
        int32_t l_1273[2][7][8] = {{{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L}},{{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L},{0L,(-2L),6L,(-1L),0x182C5FDBL,0L,(-1L),9L}}};
        int i, j, k;
        return l_1273[0][0][3];
    }
    else
    { /* block id: 497 */
        int32_t *l_1274 = (void*)0;
        int32_t l_1303 = 0L;
        int32_t *l_1311 = (void*)0;
        uint32_t **l_1326[8] = {&p_1361->g_679,&p_1361->g_679,&p_1361->g_679,&p_1361->g_679,&p_1361->g_679,&p_1361->g_679,&p_1361->g_679,&p_1361->g_679};
        uint64_t l_1330 = 0x781A08AEBE8CEB48L;
        int32_t l_1344[7][8] = {{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L},{0x149A0CE6L,9L,0x199B177DL,(-1L),9L,(-1L),0x199B177DL,9L}};
        int i, j;
        if (((((*l_1253) != (l_1274 = l_1274)) == (p_1361->g_1265.x++)) ^ (*p_1361->g_171)))
        { /* block id: 500 */
            uint64_t *l_1306 = (void*)0;
            int32_t l_1308 = (-2L);
            VECTOR(int16_t, 16) l_1317 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-9L)), (-9L)), (-9L), 9L, (-9L), (VECTOR(int16_t, 2))(9L, (-9L)), (VECTOR(int16_t, 2))(9L, (-9L)), 9L, (-9L), 9L, (-9L));
            VECTOR(int8_t, 4) l_1318 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 4L), 4L);
            int32_t l_1332 = (-7L);
            int32_t l_1333 = 0x49EF2AC9L;
            int32_t l_1334 = 0x51519612L;
            int32_t l_1338 = (-6L);
            int32_t l_1340[9][6][4] = {{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}},{{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L},{0L,(-8L),0x5BA4910AL,0L}}};
            uint16_t l_1347 = 0xDDD6L;
            int i, j, k;
            if ((*p_1361->g_765))
            { /* block id: 501 */
                int32_t l_1277 = 0x4C01B133L;
                int16_t *l_1301 = (void*)0;
                int16_t *l_1302[4][1];
                uint64_t *l_1305 = (void*)0;
                uint64_t **l_1304 = &l_1305;
                int64_t *l_1307 = &p_1361->g_712;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1302[i][j] = &p_1361->g_921;
                }
                l_1277 ^= (-10L);
                for (l_1268 = (-2); (l_1268 >= 54); l_1268 = safe_add_func_uint16_t_u_u(l_1268, 6))
                { /* block id: 505 */
                    p_1361->g_726 = p_1361->g_1280;
                }
                l_1308 = ((p_1361->g_580.sa , (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_1361->g_1081.x, (&p_1361->g_75 == &p_1361->g_75))), (!255UL)))) , ((safe_mod_func_uint64_t_u_u(l_1277, (safe_div_func_uint16_t_u_u((((*l_1307) = ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(0x62808E67116ED1B3L, 0x35BAF7FBA41C3DCAL)), ((VECTOR(int64_t, 4))(0x3E2795AA28B82F05L, ((VECTOR(int64_t, 2))(p_1361->g_1290.wx)), (-6L))).lo, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((((((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(p_1361->g_1293.s25)).hi, 14)) || (safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_1361->g_491.s5, 7)), (((VECTOR(uint32_t, 4))(p_1361->g_1300.s7225)).y , (l_1303 = 5L)))) , ((*l_1304) = &p_1361->g_881)) != l_1306), p_1361->g_580.sd))) , (*p_1361->g_171)) <= p_1361->g_866) , (-1L)), (-1L), ((VECTOR(int64_t, 8))(1L)), 0x000FCF246997D262L, l_1277, 0x3C4D5B5B660D5F0BL, ((VECTOR(int64_t, 2))(1L)), 6L)).sf4)), ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))(0L))))).xyyx, ((VECTOR(int64_t, 4))(7L)), ((VECTOR(int64_t, 4))((-1L)))))), 0x73FC0B1F19A5BAB7L, 0x00244E84B60881F8L, (*p_1361->g_542), ((VECTOR(int64_t, 8))((-1L))), 0x44F81F78E8E0FAB4L)).s2a)))))).odd) & 0xE5896D3AC75469CFL), 0xA5B9L)))) && l_1277));
                (*l_1253) = &l_1308;
            }
            else
            { /* block id: 513 */
                uint8_t l_1314 = 0x93L;
                uint8_t *l_1328 = (void*)0;
                uint8_t *l_1329[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_1331 = 0L;
                int32_t l_1335 = 0x53A34DF1L;
                int32_t l_1336 = 0L;
                int32_t l_1337 = 0x2DEC8A6EL;
                int32_t l_1339 = 0L;
                int32_t l_1341 = 0x73EF790EL;
                int64_t l_1342 = 0x1FF46020CCA9EA6CL;
                int32_t l_1343 = 0x02715F66L;
                int32_t l_1345 = 1L;
                int32_t l_1346 = 1L;
                int i;
                if ((((255UL | (safe_mul_func_uint16_t_u_u(((void*)0 != &p_1361->g_744), p_1361->g_789.s7))) || l_1308) > 0x3FL))
                { /* block id: 514 */
                    (*l_1253) = l_1311;
                }
                else
                { /* block id: 516 */
                    return p_1361->g_230.s9;
                }
                p_1361->g_185.z ^= (safe_mod_func_uint64_t_u_u(((((((l_1314 == ((p_1361->g_1300.s7 , 8UL) > (((+l_1314) >= (safe_sub_func_uint8_t_u_u((0x07L > (((VECTOR(int16_t, 2))(l_1317.s80)).hi <= (((VECTOR(int8_t, 4))(l_1318.zzzz)).z > (p_1361->g_493.y = (safe_mul_func_int8_t_s_s(((*p_1361->g_171) = (safe_sub_func_int16_t_s_s((!((((VECTOR(int16_t, 2))(p_1361->g_1323.s17)).hi < (safe_lshift_func_uint8_t_u_s(0xA2L, 2))) && ((void*)0 == l_1326[2]))), (+((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_1361->g_1327.sd335f48c85fad90d)).s92, ((VECTOR(int32_t, 16))(0x0444326DL, ((VECTOR(int32_t, 8))(0x03E15247L)), ((VECTOR(int32_t, 2))(0x29A8B956L)), 0x4F00A626L, 8L, l_1318.z, 0x05394B13L, 0x71B48438L)).se4, ((VECTOR(int32_t, 2))(0L))))))), 0L, 4L)).wzzzzxzywwxyzwyw)))).s2 & p_1361->g_1265.x) & p_1361->g_560[0]))))), 1L)))))), l_1314))) , 0xBC0DL))) >= p_1361->g_228.s1) , l_1330) ^ l_1314) | p_1361->g_comm_values[p_1361->tid]) , p_1361->g_1095.x), p_1361->g_342.y));
                --l_1347;
            }
            l_1274 = (*l_1253);
        }
        else
        { /* block id: 525 */
            int32_t l_1350 = 0x2DFAEDCBL;
            uint64_t l_1351 = 0x95ECE0167FBE4FF0L;
            l_1344[3][5] &= (l_1350 , l_1350);
            (*l_1253) = func_32(&l_1344[0][4], l_1350, p_1361);
            (*l_1253) = &l_1303;
            l_1351--;
        }
    }
    (*p_1361->g_765) = ((p_1361->g_694.y &= ((void*)0 != &p_1361->g_542)) , ((l_1356 = p_1361->g_869.s2) != (((VECTOR(int32_t, 2))(l_1357.yx)).hi , (&p_1361->g_312 != ((*l_1358) = &p_1361->g_312)))));
    return l_1360;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_1075 p_1361->g_869 p_1361->g_901 p_1361->g_216 p_1361->g_171 p_1361->g_172 p_1361->g_765 p_1361->g_1043 p_1361->g_1049 p_1361->g_560 p_1361->g_800 p_1361->g_1110 p_1361->g_279 p_1361->g_546 p_1361->g_57 p_1361->g_921 p_1361->g_1095 p_1361->g_232 p_1361->g_493 p_1361->g_729 p_1361->g_542 p_1361->g_543 p_1361->g_678 p_1361->g_580 p_1361->g_138 p_1361->g_177 p_1361->g_comm_values p_1361->g_342 p_1361->g_498
 * writes: p_1361->g_1075 p_1361->g_75 p_1361->g_213 p_1361->g_216 p_1361->g_177 p_1361->g_560 p_1361->g_1043 p_1361->g_881 p_1361->g_561 p_1361->g_57 p_1361->g_921 p_1361->g_679 p_1361->g_580 p_1361->g_138 p_1361->g_546 p_1361->g_712 p_1361->g_1146 p_1361->g_1086 p_1361->g_1095
 */
uint16_t  func_3(uint64_t  p_4, int32_t * p_5, uint32_t  p_6, int32_t * p_7, struct S0 * p_1361)
{ /* block id: 463 */
    int32_t *l_1162[3];
    uint8_t *l_1178 = (void*)0;
    VECTOR(int64_t, 16) l_1198 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(int16_t, 16) l_1217 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(int16_t, 2) l_1234 = (VECTOR(int16_t, 2))(0L, 1L);
    uint32_t *l_1247 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_1162[i] = &p_1361->g_560[0];
    for (p_1361->g_1075 = 7; (p_1361->g_1075 >= 40); p_1361->g_1075 = safe_add_func_uint64_t_u_u(p_1361->g_1075, 8))
    { /* block id: 466 */
        uint32_t *l_1164[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t **l_1163 = &l_1164[0];
        int32_t l_1171 = 5L;
        int16_t l_1172 = 5L;
        uint8_t *l_1173 = (void*)0;
        uint8_t *l_1174 = (void*)0;
        uint8_t *l_1175 = &p_1361->g_138;
        uint32_t *l_1176 = &p_1361->g_546;
        uint8_t **l_1177[7] = {&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175,&l_1175};
        int16_t *l_1179 = (void*)0;
        int16_t *l_1180 = &l_1172;
        int32_t l_1181[10];
        int64_t *l_1197 = &p_1361->g_712;
        VECTOR(int8_t, 2) l_1218 = (VECTOR(int8_t, 2))(0x76L, 9L);
        VECTOR(int16_t, 2) l_1233 = (VECTOR(int16_t, 2))(0x4CE1L, (-9L));
        uint32_t *l_1246 = (void*)0;
        int8_t **l_1252 = (void*)0;
        int i;
        for (i = 0; i < 10; i++)
            l_1181[i] = 0L;
        l_1181[1] &= (safe_div_func_int16_t_s_s(p_1361->g_869.s5, (((*l_1180) = ((safe_div_func_int32_t_s_s(((l_1178 = (((*l_1176) = (safe_sub_func_uint64_t_u_u((((*p_1361->g_678) = func_16(l_1162[0], p_4, p_5, p_1361)) != ((*l_1163) = l_1162[2])), ((safe_mul_func_uint16_t_u_u(p_6, (safe_mod_func_uint8_t_u_u(((*l_1175) ^= ((((safe_div_func_uint16_t_u_u(5UL, ((~(~(p_1361->g_580.s7 |= (p_6 , l_1171)))) || l_1171))) , l_1171) || l_1171) | l_1172)), 0x7FL)))) < p_4)))) , (void*)0)) == (void*)0), l_1171)) & 6L)) | 65535UL)));
        for (l_1172 = 0; (l_1172 <= (-8)); l_1172 = safe_sub_func_uint8_t_u_u(l_1172, 1))
        { /* block id: 477 */
            int64_t l_1186 = 0x10E4A89AF4745C72L;
            uint8_t ***l_1201 = (void*)0;
            VECTOR(int8_t, 2) l_1210 = (VECTOR(int8_t, 2))((-1L), 2L);
            int16_t *l_1211 = (void*)0;
            int16_t *l_1212 = (void*)0;
            uint64_t l_1235 = 8UL;
            int32_t l_1240 = (-1L);
            uint32_t **l_1245[4];
            int64_t l_1250 = 0L;
            VECTOR(uint32_t, 4) l_1251 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
            int i;
            for (i = 0; i < 4; i++)
                l_1245[i] = (void*)0;
            (*p_1361->g_729) = (safe_mod_func_int16_t_s_s(l_1186, ((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_1186, (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((l_1197 == (((((p_1361->g_177 &= (l_1181[1] >= (((*l_1197) = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(4L, 0x1BA5FE57CD592FF6L)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x0068388E9F3AA9FCL, ((VECTOR(int64_t, 2))(l_1198.s43)), (-8L))).w, ((safe_rshift_func_uint16_t_u_u(((((((void*)0 != l_1178) == ((void*)0 != l_1201)) >= (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((p_1361->g_216.s5 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_1210.xyxx)).w, l_1172)), (*p_1361->g_171))) & l_1186)) <= (*p_1361->g_542)), GROUP_DIVERGE(2, 1))), 3))) , (*p_1361->g_542)) & p_1361->g_580.se), l_1181[1])) , l_1181[1]), 0x564DC24CB08BCA41L, 0L)).ywwywwyw, ((VECTOR(int64_t, 8))(5L))))).s4501000007560667)).s39))), ((VECTOR(int64_t, 4))((-1L))), (-8L), 3L)).s0) , p_4))) >= 0x3D45L) & (*p_5)) , 7UL) , (void*)0)) | p_1361->g_comm_values[p_1361->tid]) | GROUP_DIVERGE(2, 1)), 0x0C59E074L)), p_6)))), p_4)), (-4L))) , p_1361->g_342.x)));
            (*p_1361->g_1049) = ((p_6 & (safe_rshift_func_int16_t_s_s(p_4, 2))) == (((safe_add_func_int16_t_s_s((p_1361->g_1086.z = ((p_1361->g_1146.y = (&p_1361->g_312 == (void*)0)) <= l_1210.y)), ((VECTOR(int16_t, 16))(l_1217.sb7da4c11b7db6b9f)).s3)) ^ ((VECTOR(int8_t, 16))(l_1218.xxxxyxxyxyyyxyxx)).sa) == (((p_1361->g_comm_values[p_1361->tid] , ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 4))(p_1361->g_1225.wzwx)).z , (safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(1L, (-1L), 0x49B6L, ((VECTOR(int16_t, 16))(p_1361->g_1232.s9a3d419b4b59b3ad)).sd, (((VECTOR(int16_t, 8))(l_1233.xxyyyxyx)).s4 <= 1UL), ((VECTOR(int16_t, 16))(l_1234.xyxyyyyyxyxyyxyy)).s5, 0x4760L, (-5L))))).s5 <= 65535UL) >= l_1235), 7)), p_1361->g_498.s5)) | 1L), p_6))), (*p_1361->g_171))), l_1186)), 0x20ACA68BL)) == p_6)) && FAKE_DIVERGE(p_1361->global_0_offset, get_global_id(0), 10)) != 0x7AL)));
            (*p_5) &= (((((&p_1361->g_546 != p_5) , ((((safe_mod_func_int64_t_s_s((!((safe_sub_func_int8_t_s_s((((p_1361->g_1095.z = l_1240) & (((((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1361->local_2_offset, get_local_id(2), 10), (((l_1247 = (l_1246 = (p_4 , &p_1361->g_1075))) == (void*)0) | 0x372DL))) < ((safe_lshift_func_uint16_t_u_u(p_4, 15)) <= l_1210.y)) && l_1250) , p_1361->g_901) == (void*)0)) , (-1L)), p_6)) == p_4)), l_1251.y)) != 0L) >= (*p_1361->g_171)) != 0x5AL)) | p_6) , l_1252) != (void*)0);
        }
        return p_4;
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_1144 p_1361->g_833 p_1361->g_1146 p_1361->g_138 p_1361->g_31 p_1361->l_comm_values p_1361->g_15 p_1361->g_71 p_1361->g_57 p_1361->g_comm_values p_1361->g_75 p_1361->g_73 p_1361->g_153 p_1361->g_250 p_1361->g_171 p_1361->g_172 p_1361->g_276 p_1361->g_215 p_1361->g_279 p_1361->g_312 p_1361->g_177 p_1361->g_230 p_1361->g_218 p_1361->g_383 p_1361->g_183 p_1361->g_360 p_1361->g_416 p_1361->g_417 p_1361->g_233 p_1361->g_342 p_1361->g_264 p_1361->g_228 p_1361->g_197 p_1361->g_538 p_1361->g_542 p_1361->g_469 p_1361->g_187 p_1361->g_678 p_1361->g_712 p_1361->g_687 p_1361->g_694 p_1361->g_491 p_1361->g_498 p_1361->g_546 p_1361->g_489 p_1361->g_729 p_1361->g_560 p_1361->g_543 p_1361->g_507 p_1361->g_743 p_1361->g_384 p_1361->g_493 p_1361->g_765 p_1361->g_583 p_1361->g_866 p_1361->g_901 p_1361->g_580
 * writes: p_1361->g_833 p_1361->g_15 p_1361->g_75 p_1361->g_57 p_1361->g_73 p_1361->g_172 p_1361->g_276 p_1361->g_153 p_1361->g_177 p_1361->g_360 p_1361->g_233 p_1361->g_234 p_1361->g_138 p_1361->g_546 p_1361->g_187 p_1361->g_678 p_1361->g_681 p_1361->g_388 p_1361->g_560 p_1361->g_743 p_1361->g_744 p_1361->g_694 p_1361->g_580 p_1361->g_1152
 */
int32_t * func_9(int32_t * p_10, int32_t * p_11, int16_t  p_12, int32_t * p_13, struct S0 * p_1361)
{ /* block id: 457 */
    VECTOR(uint32_t, 2) l_1145 = (VECTOR(uint32_t, 2))(4294967290UL, 0x63D6936BL);
    int32_t *l_1147 = (void*)0;
    int32_t **l_1148 = &l_1147;
    uint64_t *l_1150[2];
    uint64_t **l_1149 = &l_1150[0];
    uint64_t ***l_1151[6][7] = {{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149},{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149},{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149},{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149},{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149},{&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149,&l_1149}};
    int32_t *l_1153 = &p_1361->g_560[0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1150[i] = (void*)0;
    (*l_1148) = func_20((p_1361->g_833 ^= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1361->g_1144.s1406745051212730)).s2b)).even), (((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 4))(l_1145.xxyy)), 0x774F6F46L, 0UL, 1UL, 0xB3CFD975L, 4294967295UL, 0xAC0490C3L, 0x97C6FAF5L, 0x108C7475L, (GROUP_DIVERGE(1, 1) , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1361->g_1146.yyxyxxyx)).even)).z), 7UL, 0x113446E8L)).s5 , l_1147), p_11, p_1361->g_138, p_1361);
    (*l_1148) = (*l_1148);
    p_1361->g_1152 = l_1149;
    return l_1153;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_75 p_1361->g_901 p_1361->g_959 p_1361->g_216 p_1361->g_171 p_1361->g_172 p_1361->g_994 p_1361->g_1001 p_1361->g_1002 p_1361->g_312 p_1361->g_542 p_1361->g_543 p_1361->g_185 p_1361->g_276 p_1361->g_177 p_1361->g_765 p_1361->g_1043 p_1361->g_1049 p_1361->g_560 p_1361->g_881 p_1361->g_1110 p_1361->g_800 p_1361->g_279 p_1361->g_546 p_1361->g_57 p_1361->g_921 p_1361->g_1095 p_1361->g_232 p_1361->g_493 p_1361->g_729
 * writes: p_1361->g_75 p_1361->g_213 p_1361->g_216 p_1361->g_177 p_1361->g_560 p_1361->g_1043 p_1361->g_881 p_1361->g_561 p_1361->g_57 p_1361->g_921
 */
int32_t * func_16(int32_t * p_17, uint32_t  p_18, int32_t * p_19, struct S0 * p_1361)
{ /* block id: 361 */
    int64_t l_936[4][5][9] = {{{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL}},{{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL}},{{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL}},{{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL},{0x0B9129D450F9BE7DL,0x3C50297E672A751BL,8L,0x374ACA3F5FF56190L,0L,0L,0x374ACA3F5FF56190L,8L,0x3C50297E672A751BL}}};
    uint64_t *l_953[10][5] = {{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881},{&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881,&p_1361->g_881}};
    VECTOR(int32_t, 2) l_995 = (VECTOR(int32_t, 2))(0x1E367A7EL, 0x605B3AE9L);
    VECTOR(int32_t, 2) l_996 = (VECTOR(int32_t, 2))(1L, 0x6C7877D0L);
    int64_t l_1031 = (-1L);
    int32_t *l_1046 = (void*)0;
    VECTOR(uint16_t, 4) l_1058 = (VECTOR(uint16_t, 4))(0x9A15L, (VECTOR(uint16_t, 2))(0x9A15L, 0xACC3L), 0xACC3L);
    VECTOR(uint32_t, 8) l_1094 = (VECTOR(uint32_t, 8))(0xC0C0FFEDL, (VECTOR(uint32_t, 4))(0xC0C0FFEDL, (VECTOR(uint32_t, 2))(0xC0C0FFEDL, 3UL), 3UL), 3UL, 0xC0C0FFEDL, 3UL);
    VECTOR(int16_t, 8) l_1102 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    VECTOR(int8_t, 16) l_1111 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x01L), 0x01L), 0x01L, 2L, 0x01L, (VECTOR(int8_t, 2))(2L, 0x01L), (VECTOR(int8_t, 2))(2L, 0x01L), 2L, 0x01L, 2L, 0x01L);
    uint8_t *l_1139 = &p_1361->g_138;
    int32_t *l_1143 = (void*)0;
    int i, j, k;
    if ((atomic_inc(&p_1361->l_atomic_input[16]) == 9))
    { /* block id: 363 */
        VECTOR(int32_t, 16) l_930 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L, (VECTOR(int32_t, 2))((-10L), 0L), (VECTOR(int32_t, 2))((-10L), 0L), (-10L), 0L, (-10L), 0L);
        int64_t l_931[2];
        VECTOR(int32_t, 8) l_932 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
        uint32_t l_933[8][6][5] = {{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}},{{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL},{0x614A263BL,4294967287UL,4294967295UL,0xDA93DECEL,0x92C5491AL}}};
        VECTOR(int32_t, 16) l_934 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x0DC59611L), 0x0DC59611L), 0x0DC59611L, 4L, 0x0DC59611L, (VECTOR(int32_t, 2))(4L, 0x0DC59611L), (VECTOR(int32_t, 2))(4L, 0x0DC59611L), 4L, 0x0DC59611L, 4L, 0x0DC59611L);
        uint64_t l_935 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_931[i] = 0x38CE51DC4ECC2C86L;
        l_935 = ((VECTOR(int32_t, 8))(2L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_930.sa6)), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_931[1], 0x700E159FL, 1L, 0x55A548C7L)).zzzxwzyxxyzwyzyy, ((VECTOR(int32_t, 16))(l_932.s3562456322706030))))).scf))), 0L, (l_933[6][3][0] , 0x23D3957AL), ((VECTOR(int32_t, 2))(l_934.seb)), 0L)).s1;
        unsigned int result = 0;
        result += l_930.sf;
        result += l_930.se;
        result += l_930.sd;
        result += l_930.sc;
        result += l_930.sb;
        result += l_930.sa;
        result += l_930.s9;
        result += l_930.s8;
        result += l_930.s7;
        result += l_930.s6;
        result += l_930.s5;
        result += l_930.s4;
        result += l_930.s3;
        result += l_930.s2;
        result += l_930.s1;
        result += l_930.s0;
        int l_931_i0;
        for (l_931_i0 = 0; l_931_i0 < 2; l_931_i0++) {
            result += l_931[l_931_i0];
        }
        result += l_932.s7;
        result += l_932.s6;
        result += l_932.s5;
        result += l_932.s4;
        result += l_932.s3;
        result += l_932.s2;
        result += l_932.s1;
        result += l_932.s0;
        int l_933_i0, l_933_i1, l_933_i2;
        for (l_933_i0 = 0; l_933_i0 < 8; l_933_i0++) {
            for (l_933_i1 = 0; l_933_i1 < 6; l_933_i1++) {
                for (l_933_i2 = 0; l_933_i2 < 5; l_933_i2++) {
                    result += l_933[l_933_i0][l_933_i1][l_933_i2];
                }
            }
        }
        result += l_934.sf;
        result += l_934.se;
        result += l_934.sd;
        result += l_934.sc;
        result += l_934.sb;
        result += l_934.sa;
        result += l_934.s9;
        result += l_934.s8;
        result += l_934.s7;
        result += l_934.s6;
        result += l_934.s5;
        result += l_934.s4;
        result += l_934.s3;
        result += l_934.s2;
        result += l_934.s1;
        result += l_934.s0;
        result += l_935;
        atomic_add(&p_1361->l_special_values[16], result);
    }
    else
    { /* block id: 365 */
        (1 + 1);
    }
    if (l_936[3][2][1])
    { /* block id: 368 */
        int32_t *l_937 = &p_1361->g_15;
        return l_937;
    }
    else
    { /* block id: 370 */
        uint16_t *l_942[5];
        VECTOR(uint8_t, 16) l_946 = (VECTOR(uint8_t, 16))(0xCBL, (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 1UL), 1UL), 1UL, 0xCBL, 1UL, (VECTOR(uint8_t, 2))(0xCBL, 1UL), (VECTOR(uint8_t, 2))(0xCBL, 1UL), 0xCBL, 1UL, 0xCBL, 1UL);
        int32_t l_1017 = 6L;
        int32_t l_1035[4][10][3] = {{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}}};
        int32_t l_1048[9] = {0x1CEBACC2L,5L,0x1CEBACC2L,0x1CEBACC2L,5L,0x1CEBACC2L,0x1CEBACC2L,5L,0x1CEBACC2L};
        uint8_t *l_1073 = (void*)0;
        uint8_t **l_1072 = &l_1073;
        VECTOR(int16_t, 2) l_1103 = (VECTOR(int16_t, 2))(1L, 0x44EFL);
        uint32_t *l_1124 = (void*)0;
        uint32_t *l_1125 = (void*)0;
        uint32_t *l_1126 = (void*)0;
        uint32_t *l_1127 = (void*)0;
        uint32_t *l_1128 = (void*)0;
        uint32_t *l_1129 = (void*)0;
        uint32_t *l_1130 = (void*)0;
        uint32_t *l_1131 = (void*)0;
        uint32_t *l_1132 = (void*)0;
        int16_t *l_1134 = (void*)0;
        int16_t **l_1133 = &l_1134;
        int32_t *l_1140 = (void*)0;
        int32_t *l_1141 = (void*)0;
        int16_t *l_1142 = &p_1361->g_921;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_942[i] = (void*)0;
        for (p_1361->g_75 = 0; (p_1361->g_75 != 5); p_1361->g_75++)
        { /* block id: 373 */
            uint16_t *l_943[1][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint64_t **l_954 = &l_953[5][2];
            int32_t l_955 = (-5L);
            VECTOR(uint16_t, 8) l_958 = (VECTOR(uint16_t, 8))(0x5F6DL, (VECTOR(uint16_t, 4))(0x5F6DL, (VECTOR(uint16_t, 2))(0x5F6DL, 0x45D9L), 0x45D9L), 0x45D9L, 0x5F6DL, 0x45D9L);
            uint64_t *l_960[10][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1361->g_75,(void*)0,(void*)0}};
            int32_t l_961 = 0x358F83BBL;
            int32_t l_1034 = 0x21CBC468L;
            int32_t l_1036 = 0x2A333505L;
            int32_t l_1038 = 0x6DAB2FCFL;
            int32_t l_1039 = 6L;
            int32_t l_1041 = 8L;
            int32_t l_1042 = (-1L);
            VECTOR(uint64_t, 16) l_1080 = (VECTOR(uint64_t, 16))(0x5B826A4FA4A560D3L, (VECTOR(uint64_t, 4))(0x5B826A4FA4A560D3L, (VECTOR(uint64_t, 2))(0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L), 0x65BA2B38A44FB974L), 0x65BA2B38A44FB974L, 0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L, (VECTOR(uint64_t, 2))(0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L), (VECTOR(uint64_t, 2))(0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L), 0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L, 0x5B826A4FA4A560D3L, 0x65BA2B38A44FB974L);
            int32_t *l_1097[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            if (((safe_rshift_func_uint16_t_u_u((l_942[0] != l_943[0][0][2]), 0)) == (safe_rshift_func_int16_t_s_u(((((VECTOR(uint8_t, 8))(l_946.scf82069b)).s1 & (((safe_div_func_int8_t_s_s(0x79L, GROUP_DIVERGE(0, 1))) , p_1361->g_901) == p_1361->g_901)) ^ (((safe_lshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((((*l_954) = l_953[3][3]) == (void*)0) != (((l_955 != (l_961 ^= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(l_958.s2034606515170656)).hi, ((VECTOR(uint16_t, 4))(p_1361->g_959.yyyz)).yzzyyzzz))).even)).z, p_1361->g_216.s0)))) >= 0UL) == p_18)), p_18)) , (*p_1361->g_171)), (*p_1361->g_171))) , p_17) == (void*)0)), p_18))))
            { /* block id: 376 */
                VECTOR(int32_t, 2) l_997 = (VECTOR(int32_t, 2))(0x1CE1EECEL, 1L);
                VECTOR(int8_t, 8) l_1000 = (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x74L), 0x74L), 0x74L, 0x6AL, 0x74L);
                int8_t l_1011 = 0L;
                uint32_t l_1012 = 0UL;
                uint16_t **l_1022[5] = {&l_942[4],&l_942[4],&l_942[4],&l_942[4],&l_942[4]};
                int i;
                if ((atomic_inc(&p_1361->l_atomic_input[3]) == 4))
                { /* block id: 378 */
                    int32_t l_962 = (-8L);
                    for (l_962 = 0; (l_962 < (-13)); --l_962)
                    { /* block id: 381 */
                        uint32_t l_965 = 0xF0749105L;
                        uint32_t l_966 = 0xB04CC224L;
                        uint16_t l_967[2];
                        int8_t l_968 = (-1L);
                        uint32_t l_969 = 0xB3A1D43EL;
                        int32_t l_971 = 0x27AA9D30L;
                        int32_t *l_970 = &l_971;
                        int32_t *l_972 = &l_971;
                        int16_t l_973 = 0x06EDL;
                        uint16_t l_974 = 65531UL;
                        uint32_t l_975 = 0x2B9D13BEL;
                        int32_t *l_976 = &l_971;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_967[i] = 0x1226L;
                        l_969 = (l_968 = (l_967[1] |= (l_966 = l_965)));
                        l_972 = l_970;
                        l_974 = l_973;
                        l_976 = (l_975 , (void*)0);
                    }
                    for (l_962 = (-25); (l_962 != (-26)); l_962 = safe_sub_func_uint8_t_u_u(l_962, 6))
                    { /* block id: 392 */
                        int64_t l_979 = 0x72B541DC1FACFD92L;
                        uint32_t l_980[1];
                        int8_t l_981 = (-4L);
                        VECTOR(uint32_t, 16) l_982 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x49153F71L), 0x49153F71L), 0x49153F71L, 7UL, 0x49153F71L, (VECTOR(uint32_t, 2))(7UL, 0x49153F71L), (VECTOR(uint32_t, 2))(7UL, 0x49153F71L), 7UL, 0x49153F71L, 7UL, 0x49153F71L);
                        int32_t l_983 = 1L;
                        VECTOR(int32_t, 8) l_984 = (VECTOR(int32_t, 8))(0x48E8C3C7L, (VECTOR(int32_t, 4))(0x48E8C3C7L, (VECTOR(int32_t, 2))(0x48E8C3C7L, 0x4E3BEFB4L), 0x4E3BEFB4L), 0x4E3BEFB4L, 0x48E8C3C7L, 0x4E3BEFB4L);
                        uint16_t l_985[1][6][7] = {{{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L},{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L},{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L},{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L},{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L},{0xD8CAL,0x01F4L,0xCFCAL,0x01F4L,0xD8CAL,0xD8CAL,0x01F4L}}};
                        int32_t l_986 = 0x650F4BD3L;
                        int32_t *l_987 = &l_986;
                        int32_t *l_988 = (void*)0;
                        int32_t *l_989[5][9][2];
                        int32_t *l_990[10][9][2] = {{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}},{{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986},{&l_986,&l_986}}};
                        int32_t *l_991 = (void*)0;
                        int32_t *l_992 = &l_986;
                        int32_t *l_993 = &l_986;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_980[i] = 0x9C0E152DL;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_989[i][j][k] = &l_986;
                            }
                        }
                        l_990[7][7][1] = (l_987 = (l_989[2][3][0] = (l_988 = (((l_979 , l_980[0]) , ((l_982.sf |= l_981) , ((VECTOR(int32_t, 16))(l_983, 0x38E92F72L, ((VECTOR(int32_t, 8))(l_984.s41354156)), (l_984.s5 = 0L), 1L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_985[0][1][4], l_986, (-1L), 0x0EECF489L, 3L, ((VECTOR(int32_t, 4))((-7L))), 0x506DD895L, 0x159BD57BL, 0x786E7A05L, 0L, ((VECTOR(int32_t, 2))(1L)), 0x69975561L)), ((VECTOR(int32_t, 16))(0x555C8A6AL)), ((VECTOR(int32_t, 16))(0L))))).sfc)), 0x2052C286L)).sf)) , l_987))));
                        l_993 = (l_992 = l_991);
                    }
                    unsigned int result = 0;
                    result += l_962;
                    atomic_add(&p_1361->l_special_values[3], result);
                }
                else
                { /* block id: 402 */
                    (1 + 1);
                }
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(p_1361->g_994.sba1b)).ywywzyyz, ((VECTOR(int32_t, 2))(l_995.xy)).yxxyxyyy, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_996.xy)).yxxyxyyy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_997.yyxyxyyx)), 0L, (!(safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(l_1000.s2052061011020304)).sb3))).xxxx)).zxwyxxww, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0xF0L, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(p_1361->g_1001.s0714)).lo, ((VECTOR(uint8_t, 4))(p_18, 1UL, 0x36L, 0x0BL)).odd, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(p_1361->g_1002.zyxzwwxz)), ((VECTOR(uint8_t, 16))((safe_rshift_func_uint8_t_u_u(((void*)0 == p_1361->g_312), 7)), l_955, ((VECTOR(uint8_t, 2))(0x4CL, 0x66L)), 0x3BL, (safe_div_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u(l_995.y, ((VECTOR(int32_t, 8))(2L, ((VECTOR(int32_t, 2))(0x3518F6D9L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((*p_1361->g_542) <= (p_1361->g_185.y && (-1L))), (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(0x08DCL, 1UL)), 0x80ABL, 1UL, 1UL, 0x4A99L, 0x7CD7L)))).s4 ^ (safe_rshift_func_int16_t_s_s(l_958.s4, l_958.s1))), ((VECTOR(int32_t, 4))(0x0F341175L)), l_946.s0, ((VECTOR(int32_t, 4))(0L)), (-5L), l_997.y, ((VECTOR(int32_t, 2))(1L)), 0x34916047L)).s807f, ((VECTOR(int32_t, 4))(0x76BE9AB4L))))).lo)), 0L, 0x4B9FE795L)).odd)), ((VECTOR(int32_t, 2))((-9L))), 0x55E723F7L)).s2)) || 0L) || l_1011) == (-1L)), p_1361->g_276.w)), 2UL, ((VECTOR(uint8_t, 4))(1UL)), 0x05L, ((VECTOR(uint8_t, 4))(0x2EL)))).odd, ((VECTOR(uint8_t, 8))(250UL))))).s3537513322622021, (uint8_t)p_18))).s42))), 255UL)).ywyzwxzxzwyyzyww)).lo))))).s1215265321455665)).sd90a)).z, l_946.s3))), ((VECTOR(int32_t, 4))(0x0FE34CFDL)), (-7L), 0L)).lo)), ((VECTOR(int32_t, 8))(0L)))))))).s6520677401016726, ((VECTOR(int32_t, 16))(1L))))).hi))).even, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))((-1L)))))).xxyzwzyw)).s1275310635072421)).s4)
                { /* block id: 405 */
                    int32_t *l_1013 = (void*)0;
                    int32_t *l_1014[9] = {(void*)0,&p_1361->g_15,(void*)0,(void*)0,&p_1361->g_15,(void*)0,(void*)0,&p_1361->g_15,(void*)0};
                    int16_t *l_1025 = &p_1361->g_177;
                    int i;
                    l_996.y |= l_1012;
                    l_1017 |= (safe_mul_func_uint16_t_u_u((0x3C57B8464D8B0DC8L & (p_1361->g_216.s4 ^= (p_1361->g_213.y = 0x2EFA1F9E35DF2F5EL))), p_1361->g_172));
                    for (p_1361->g_177 = 0; (p_1361->g_177 >= (-28)); p_1361->g_177 = safe_sub_func_int16_t_s_s(p_1361->g_177, 6))
                    { /* block id: 412 */
                        int16_t **l_1026 = &l_1025;
                        int32_t l_1032 = 0x04D3D4D6L;
                        int32_t l_1033 = 0L;
                        int32_t l_1037 = 0x3D926CD1L;
                        int32_t l_1040[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1040[i] = 0x38A649E1L;
                        l_995.y |= ((~0x3B66D4842C8EB7CEL) < (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(0x78L, 6UL)).yyyxyyxx, (uint8_t)((&l_943[0][2][0] != l_1022[1]) >= (((l_997.y = (safe_lshift_func_int8_t_s_s(0x2EL, (&p_1361->g_177 == ((*l_1026) = l_1025))))) && FAKE_DIVERGE(p_1361->group_1_offset, get_group_id(1), 10)) , (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s(0x21L, (p_17 != p_17))) == p_18) >= (*p_1361->g_542)), 1)))), (uint8_t)p_18))), ((VECTOR(uint8_t, 8))(0x38L))))).s3, p_18)));
                        (*p_1361->g_765) = l_1031;
                        ++p_1361->g_1043[1][0][2];
                        return p_17;
                    }
                }
                else
                { /* block id: 420 */
                    uint16_t l_1047[1][4][9] = {{{0x4A5EL,65535UL,1UL,65535UL,0x4A5EL,0x4A5EL,65535UL,1UL,65535UL},{0x4A5EL,65535UL,1UL,65535UL,0x4A5EL,0x4A5EL,65535UL,1UL,65535UL},{0x4A5EL,65535UL,1UL,65535UL,0x4A5EL,0x4A5EL,65535UL,1UL,65535UL},{0x4A5EL,65535UL,1UL,65535UL,0x4A5EL,0x4A5EL,65535UL,1UL,65535UL}}};
                    VECTOR(uint16_t, 16) l_1061 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD9AFL), 0xD9AFL), 0xD9AFL, 1UL, 0xD9AFL, (VECTOR(uint16_t, 2))(1UL, 0xD9AFL), (VECTOR(uint16_t, 2))(1UL, 0xD9AFL), 1UL, 0xD9AFL, 1UL, 0xD9AFL);
                    int i, j, k;
                    p_17 = (p_18 , l_1046);
                    (*p_1361->g_1049) &= (l_1048[7] |= l_1047[0][3][6]);
                    l_997.x &= 0x00FB40C9L;
                    for (p_1361->g_881 = 0; (p_1361->g_881 >= 38); ++p_1361->g_881)
                    { /* block id: 427 */
                        (*p_1361->g_765) = (((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_1058.wwyxzwzxzzyxzyww)).sf6b0)))).hi, (uint16_t)(safe_div_func_uint16_t_u_u(0xC7A3L, l_1047[0][2][8]))))).even, 6)), 65535UL)), 6)) | ((VECTOR(uint16_t, 16))(l_1061.sef8bd1f2c582b30d)).s6) && 1L);
                        return p_17;
                    }
                }
            }
            else
            { /* block id: 432 */
                int32_t *l_1074 = (void*)0;
                VECTOR(uint64_t, 16) l_1079 = (VECTOR(uint64_t, 16))(0xF18C0790A877D91FL, (VECTOR(uint64_t, 4))(0xF18C0790A877D91FL, (VECTOR(uint64_t, 2))(0xF18C0790A877D91FL, 0UL), 0UL), 0UL, 0xF18C0790A877D91FL, 0UL, (VECTOR(uint64_t, 2))(0xF18C0790A877D91FL, 0UL), (VECTOR(uint64_t, 2))(0xF18C0790A877D91FL, 0UL), 0xF18C0790A877D91FL, 0UL, 0xF18C0790A877D91FL, 0UL);
                VECTOR(uint32_t, 4) l_1093 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
                int32_t **l_1096[9] = {&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73,&p_1361->g_73};
                int i;
                l_1097[7] = &l_1035[1][9][2];
                l_1048[7] = l_1017;
                for (l_1038 = 0; (l_1038 < (-7)); --l_1038)
                { /* block id: 440 */
                    p_19 = &l_1048[7];
                }
            }
            return l_1046;
        }
        p_17 = ((((+(safe_div_func_int32_t_s_s(((l_995.y | ((!((((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(l_1102.s5560)).ywwwyyww, ((VECTOR(int16_t, 16))(l_1103.xxyxxxxxyxyyyyxx)).hi))).s4 >= (safe_add_func_uint8_t_u_u(((-9L) & ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s((p_1361->g_561.sd = ((l_1102.s7 || ((VECTOR(int32_t, 16))(p_1361->g_1110.s5352777326710244)).s5) == ((VECTOR(int8_t, 2))(l_1111.sf4)).hi)), (~((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s(p_1361->g_216.s1, (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_1017 = p_1361->g_800.s6), (((*l_1142) |= ((safe_mul_func_uint8_t_u_u((((((*l_1133) = ((l_1048[7] = 0x76F86F21L) , l_942[3])) != (((p_1361->g_57.s6 |= ((l_996.y |= ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_1361->g_1110.s1 , (((*l_1072) = l_1139) == (void*)0)), p_1361->g_279.z)), 0x91L)) != GROUP_DIVERGE(0, 1))) != p_1361->g_546)) != 0x0816B3A0L) , &p_1361->g_921)) , GROUP_DIVERGE(0, 1)) && p_18), 9L)) ^ (-1L))) == 0x20A0L))), (*p_1361->g_171))))) ^ l_936[1][4][0]), p_1361->g_1095.y)), p_18)) && p_18)))) , p_1361->g_232.s5), p_1361->g_493.y)) && 0x4960EBB7L)), 0x58L))) , p_1361->g_560[0])) != 8L)) , (*p_1361->g_729)), 0x2C4166D8L))) & 0x775D876EL) , (*p_1361->g_542)) , l_1046);
    }
    return l_1143;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_31 p_1361->l_comm_values p_1361->g_15 p_1361->g_71 p_1361->g_57 p_1361->g_comm_values p_1361->g_75 p_1361->g_73 p_1361->g_138 p_1361->g_153 p_1361->g_250 p_1361->g_171 p_1361->g_172 p_1361->g_276 p_1361->g_215 p_1361->g_279 p_1361->g_312 p_1361->g_177 p_1361->g_230 p_1361->g_218 p_1361->g_383 p_1361->g_183 p_1361->g_360 p_1361->g_416 p_1361->g_417 p_1361->g_233 p_1361->g_342 p_1361->g_264 p_1361->g_228 p_1361->g_197 p_1361->g_538 p_1361->g_542 p_1361->g_469 p_1361->g_187 p_1361->g_678 p_1361->g_712 p_1361->g_687 p_1361->g_694 p_1361->g_491 p_1361->g_498 p_1361->g_546 p_1361->g_489 p_1361->g_729 p_1361->g_560 p_1361->g_543 p_1361->g_507 p_1361->g_743 p_1361->g_384 p_1361->g_493 p_1361->g_765 p_1361->g_583 p_1361->g_744 p_1361->g_800 p_1361->g_833 p_1361->g_843 p_1361->g_214 p_1361->g_856 p_1361->g_866 p_1361->g_869 p_1361->g_889 p_1361->g_891 p_1361->g_901 p_1361->g_580
 * writes: p_1361->g_15 p_1361->g_75 p_1361->g_57 p_1361->g_73 p_1361->g_172 p_1361->g_276 p_1361->g_153 p_1361->g_177 p_1361->g_360 p_1361->g_233 p_1361->g_234 p_1361->g_138 p_1361->g_546 p_1361->g_187 p_1361->g_678 p_1361->g_681 p_1361->g_388 p_1361->g_560 p_1361->g_743 p_1361->g_744 p_1361->g_694 p_1361->l_comm_values p_1361->g_342 p_1361->g_833 p_1361->g_214 p_1361->g_580
 */
int32_t * func_20(uint32_t  p_21, int32_t * p_22, int32_t * p_23, int16_t  p_24, struct S0 * p_1361)
{ /* block id: 5 */
    VECTOR(int8_t, 2) l_29 = (VECTOR(int8_t, 2))(0x50L, (-1L));
    VECTOR(uint8_t, 16) l_30 = (VECTOR(uint8_t, 16))(0x30L, (VECTOR(uint8_t, 4))(0x30L, (VECTOR(uint8_t, 2))(0x30L, 0UL), 0UL), 0UL, 0x30L, 0UL, (VECTOR(uint8_t, 2))(0x30L, 0UL), (VECTOR(uint8_t, 2))(0x30L, 0UL), 0x30L, 0UL, 0x30L, 0UL);
    int32_t l_912 = 0x29468BA4L;
    int32_t l_914 = 0x498D0F5EL;
    int32_t l_915 = 0x7DB2133EL;
    int32_t l_916 = 0x191AAA5EL;
    int32_t l_918 = (-1L);
    int32_t l_919 = 0x4923F04AL;
    int32_t l_920[9] = {1L,(-1L),1L,1L,(-1L),1L,1L,(-1L),1L};
    VECTOR(int32_t, 4) l_925 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x09571184L), 0x09571184L);
    int32_t *l_926 = (void*)0;
    int32_t *l_927 = (void*)0;
    int32_t *l_928[9][10] = {{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0},{(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0,&l_919,(void*)0,(void*)0}};
    int16_t l_929[7] = {1L,(-1L),1L,1L,(-1L),1L,1L};
    int i, j;
    for (p_24 = 11; (p_24 <= 28); p_24++)
    { /* block id: 8 */
        uint32_t l_37 = 0UL;
        int32_t l_913 = 0x13FFC0AEL;
        int32_t l_917[1][9];
        uint32_t l_922 = 0xDE24D31CL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_917[i][j] = (-1L);
        }
        for (p_1361->g_15 = (-18); (p_1361->g_15 < 28); p_1361->g_15 = safe_add_func_uint16_t_u_u(p_1361->g_15, 2))
        { /* block id: 11 */
            int32_t **l_909 = &p_1361->g_73;
            int32_t *l_910 = &p_1361->g_560[0];
            int32_t *l_911[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            int i, j;
            p_1361->g_580.s1 &= (((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_29.xx)).yyyyxxxxyyxyyyxx)).hi, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_30.sc554)).xwwwxzyx, ((VECTOR(uint8_t, 8))(p_1361->g_31.wzzxwzwx))))).s1676565407213654)).lo))).s3 , (((*l_909) = func_32(&p_1361->g_15, (p_1361->g_744 = func_35(l_37, p_1361)), p_1361)) == &p_1361->g_15));
            l_922--;
            if (l_919)
                continue;
            return p_22;
        }
    }
    (*p_1361->g_765) |= (l_929[0] = ((VECTOR(int32_t, 4))(l_925.yyzx)).x);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_546 p_1361->g_171 p_1361->g_384 p_1361->g_493 p_1361->g_542 p_1361->g_543 p_1361->g_57 p_1361->g_765 p_1361->g_172 p_1361->g_583 p_1361->g_729 p_1361->g_560 p_1361->g_15 p_1361->g_744 p_1361->g_138 p_1361->g_800 p_1361->g_342 p_1361->g_833 p_1361->g_843 p_1361->g_214 p_1361->g_856 p_1361->g_153 p_1361->g_743 p_1361->g_866 p_1361->g_869 p_1361->g_889 p_1361->g_891 p_1361->g_417 p_1361->g_197 p_1361->g_901
 * writes: p_1361->g_546 p_1361->g_73 p_1361->g_172 p_1361->g_138 p_1361->g_560 p_1361->g_694 p_1361->g_744 p_1361->l_comm_values p_1361->g_342 p_1361->g_833 p_1361->g_214
 */
int32_t * func_32(int32_t * p_33, int32_t  p_34, struct S0 * p_1361)
{ /* block id: 287 */
    uint8_t l_745 = 0UL;
    int32_t ***l_754 = (void*)0;
    int64_t l_768[5][7];
    int32_t l_770 = (-7L);
    uint32_t **l_776[4][4] = {{(void*)0,&p_1361->g_679,(void*)0,(void*)0},{(void*)0,&p_1361->g_679,(void*)0,(void*)0},{(void*)0,&p_1361->g_679,(void*)0,(void*)0},{(void*)0,&p_1361->g_679,(void*)0,(void*)0}};
    int16_t l_785 = 0x7430L;
    int32_t l_786 = 0x6A59AE95L;
    uint64_t l_855 = 0xF33144CC587F92CAL;
    uint16_t *l_863 = (void*)0;
    int32_t l_867 = 0L;
    uint64_t *l_880[2];
    uint64_t l_882 = 0x5494B9CF925DB1B5L;
    VECTOR(int8_t, 8) l_890 = (VECTOR(int8_t, 8))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, (-1L)), (-1L)), (-1L), 0x18L, (-1L));
    VECTOR(int8_t, 4) l_892 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x28L), 0x28L);
    int32_t *l_899 = &l_786;
    uint32_t l_900 = 0xA30202ABL;
    uint8_t *l_904 = (void*)0;
    uint8_t **l_903 = &l_904;
    uint8_t ***l_902[7][3] = {{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903},{(void*)0,&l_903,&l_903}};
    uint64_t *l_907 = &p_1361->g_881;
    int32_t *l_908[1][3][3] = {{{&p_1361->g_560[0],&p_1361->g_560[0],&p_1361->g_560[0]},{&p_1361->g_560[0],&p_1361->g_560[0],&p_1361->g_560[0]},{&p_1361->g_560[0],&p_1361->g_560[0],&p_1361->g_560[0]}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_768[i][j] = 0L;
    }
    for (i = 0; i < 2; i++)
        l_880[i] = &p_1361->g_881;
    if (l_745)
    { /* block id: 288 */
        uint8_t *l_761 = &p_1361->g_138;
        int64_t *l_764 = (void*)0;
        int32_t *l_769[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(uint32_t, 2) l_771 = (VECTOR(uint32_t, 2))(0x2180C438L, 0x85A6D1E7L);
        int8_t **l_794 = (void*)0;
        uint8_t **l_828 = (void*)0;
        uint8_t ***l_827 = &l_828;
        int i, j;
        for (p_1361->g_546 = 0; (p_1361->g_546 <= 35); ++p_1361->g_546)
        { /* block id: 291 */
            int32_t *l_748 = &p_1361->g_560[0];
            int32_t **l_749 = &p_1361->g_73;
            (*l_749) = l_748;
        }
        (*p_1361->g_765) = ((safe_lshift_func_int16_t_s_s((0x7BL || (((safe_rshift_func_uint16_t_u_u((l_754 != l_754), (((safe_lshift_func_int8_t_s_u(((*p_1361->g_171) = 6L), (safe_rshift_func_uint8_t_u_u(p_1361->g_384.x, ((*l_761) = (safe_rshift_func_uint16_t_u_s((p_1361->g_493.y < (*p_1361->g_542)), 5))))))) > ((safe_mul_func_int8_t_s_s((p_34 && (((l_764 == &p_1361->g_712) <= p_34) < (-1L))), p_34)) , p_34)) <= 0x3DFAL))) , 0x5281F1B38EB1C706L) && p_34)), 6)) | p_1361->g_57.s7);
        if (((!(safe_add_func_uint16_t_u_u(((l_770 |= l_768[3][6]) | (p_1361->g_694.w = (((VECTOR(uint32_t, 2))(l_771.xx)).lo , l_768[3][6]))), ((safe_rshift_func_uint8_t_u_s(((p_33 != p_33) != ((safe_lshift_func_uint8_t_u_s((((&p_1361->g_679 != l_776[1][1]) != (0x0B0713A7L < ((safe_add_func_int8_t_s_s((*p_1361->g_171), (safe_rshift_func_uint8_t_u_u(((((safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(p_34, l_768[3][6])) | p_1361->g_583.y), p_34)) , 4L) ^ 2UL) , p_34), 4)))) >= l_785))) ^ l_786), 6)) == 0L)), (*p_1361->g_171))) > (*p_1361->g_729))))) >= (*p_33)))
        { /* block id: 299 */
            uint64_t l_806 = 1UL;
            int32_t l_808 = 0x47B17B64L;
            for (p_1361->g_744 = 0; (p_1361->g_744 < (-13)); p_1361->g_744 = safe_sub_func_uint8_t_u_u(p_1361->g_744, 6))
            { /* block id: 302 */
                uint32_t l_790 = 1UL;
                int32_t ****l_793 = (void*)0;
                VECTOR(uint8_t, 16) l_799 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 8UL), 8UL), 8UL, 255UL, 8UL, (VECTOR(uint8_t, 2))(255UL, 8UL), (VECTOR(uint8_t, 2))(255UL, 8UL), 255UL, 8UL, 255UL, 8UL);
                int16_t l_805 = (-3L);
                int i;
                l_794 = ((((~0x79BE30A4L) != (l_790 = ((VECTOR(uint32_t, 2))(p_1361->g_789.sea)).even)) == (safe_add_func_uint16_t_u_u(p_34, (l_793 != (void*)0)))) , &p_1361->g_171);
                for (p_1361->g_138 = 16; (p_1361->g_138 < 40); p_1361->g_138 = safe_add_func_int32_t_s_s(p_1361->g_138, 5))
                { /* block id: 307 */
                    int64_t *l_807 = (void*)0;
                    int32_t **l_823 = (void*)0;
                    int32_t **l_824 = &l_769[8][0];
                    l_808 = (safe_div_func_int8_t_s_s((p_34 > ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(l_799.s21f40baa)), ((VECTOR(uint8_t, 8))(p_1361->g_800.s0aa644f1))))).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 0xC6L)), 2UL, 0x4AL))))).hi)), 0UL, (+FAKE_DIVERGE(p_1361->group_0_offset, get_group_id(0), 10)), p_34, (!((p_1361->g_342.w |= (p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))] = (p_34 , (safe_add_func_uint32_t_u_u(p_34, ((*p_1361->g_729) = ((*p_33) & (((safe_div_func_int64_t_s_s(l_785, p_34)) == (l_805 >= l_806)) & 0L)))))))) < p_34)), 251UL, 1UL)).s41, ((VECTOR(uint8_t, 2))(0x3EL))))), 0UL, 0x3DB9L)).x & p_34) & 65535UL)), 0xF4L));
                    if ((atomic_inc(&p_1361->g_atomic_input[55 * get_linear_group_id() + 29]) == 9))
                    { /* block id: 313 */
                        uint32_t l_809 = 0x37CA1081L;
                        uint64_t l_812 = 0x790C151F49572C27L;
                        uint16_t l_813 = 0xD7E5L;
                        ++l_809;
                        l_813 = l_812;
                        unsigned int result = 0;
                        result += l_809;
                        result += l_812;
                        result += l_813;
                        atomic_add(&p_1361->g_special_values[55 * get_linear_group_id() + 29], result);
                    }
                    else
                    { /* block id: 316 */
                        (1 + 1);
                    }
                    if ((atomic_inc(&p_1361->l_atomic_input[48]) == 2))
                    { /* block id: 320 */
                        VECTOR(int32_t, 2) l_814 = (VECTOR(int32_t, 2))(1L, (-1L));
                        VECTOR(uint8_t, 4) l_815 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0UL), 0UL);
                        uint64_t l_816 = 0xB706E2581EF983E9L;
                        VECTOR(uint16_t, 4) l_817 = (VECTOR(uint16_t, 4))(0x0E36L, (VECTOR(uint16_t, 2))(0x0E36L, 65532UL), 65532UL);
                        VECTOR(int32_t, 16) l_818 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4E99DA6FL), 0x4E99DA6FL), 0x4E99DA6FL, 0L, 0x4E99DA6FL, (VECTOR(int32_t, 2))(0L, 0x4E99DA6FL), (VECTOR(int32_t, 2))(0L, 0x4E99DA6FL), 0L, 0x4E99DA6FL, 0L, 0x4E99DA6FL);
                        VECTOR(int32_t, 8) l_819 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        uint64_t l_820 = 0x908EB766810CFCFAL;
                        VECTOR(int32_t, 16) l_821 = (VECTOR(int32_t, 16))(0x78F320E3L, (VECTOR(int32_t, 4))(0x78F320E3L, (VECTOR(int32_t, 2))(0x78F320E3L, 0x356013F5L), 0x356013F5L), 0x356013F5L, 0x78F320E3L, 0x356013F5L, (VECTOR(int32_t, 2))(0x78F320E3L, 0x356013F5L), (VECTOR(int32_t, 2))(0x78F320E3L, 0x356013F5L), 0x78F320E3L, 0x356013F5L, 0x78F320E3L, 0x356013F5L);
                        uint32_t l_822 = 2UL;
                        int i;
                        l_816 = (l_815.x = ((VECTOR(int32_t, 4))(l_814.xxxy)).w);
                        l_822 = ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(0x670BL, 0x3956L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_817.yxzx)))).hi))), ((VECTOR(int32_t, 4))((-10L), ((VECTOR(int32_t, 2))(0x6E497824L, 0x250C0F2DL)), 1L)).odd))).yyxxyyxx, ((VECTOR(int32_t, 2))(l_818.s2f)).xyxxxyxx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_819.s2355)).wxwywwyw, (int32_t)l_820)))))), ((VECTOR(int32_t, 8))(l_821.s79a2296e))))).s1;
                        unsigned int result = 0;
                        result += l_814.y;
                        result += l_814.x;
                        result += l_815.w;
                        result += l_815.z;
                        result += l_815.y;
                        result += l_815.x;
                        result += l_816;
                        result += l_817.w;
                        result += l_817.z;
                        result += l_817.y;
                        result += l_817.x;
                        result += l_818.sf;
                        result += l_818.se;
                        result += l_818.sd;
                        result += l_818.sc;
                        result += l_818.sb;
                        result += l_818.sa;
                        result += l_818.s9;
                        result += l_818.s8;
                        result += l_818.s7;
                        result += l_818.s6;
                        result += l_818.s5;
                        result += l_818.s4;
                        result += l_818.s3;
                        result += l_818.s2;
                        result += l_818.s1;
                        result += l_818.s0;
                        result += l_819.s7;
                        result += l_819.s6;
                        result += l_819.s5;
                        result += l_819.s4;
                        result += l_819.s3;
                        result += l_819.s2;
                        result += l_819.s1;
                        result += l_819.s0;
                        result += l_820;
                        result += l_821.sf;
                        result += l_821.se;
                        result += l_821.sd;
                        result += l_821.sc;
                        result += l_821.sb;
                        result += l_821.sa;
                        result += l_821.s9;
                        result += l_821.s8;
                        result += l_821.s7;
                        result += l_821.s6;
                        result += l_821.s5;
                        result += l_821.s4;
                        result += l_821.s3;
                        result += l_821.s2;
                        result += l_821.s1;
                        result += l_821.s0;
                        result += l_822;
                        atomic_add(&p_1361->l_special_values[48], result);
                    }
                    else
                    { /* block id: 324 */
                        (1 + 1);
                    }
                    (*l_824) = (void*)0;
                }
            }
        }
        else
        { /* block id: 330 */
            int64_t l_825 = 1L;
            int32_t l_826 = 1L;
            l_770 = (l_825 |= (*p_1361->g_765));
            l_826 ^= (*p_33);
        }
        (*l_827) = &l_761;
    }
    else
    { /* block id: 336 */
        VECTOR(int16_t, 2) l_829 = (VECTOR(int16_t, 2))(0L, 0x4026L);
        uint32_t *l_832 = &p_1361->g_833;
        uint64_t *l_842 = (void*)0;
        VECTOR(uint32_t, 2) l_844 = (VECTOR(uint32_t, 2))(0UL, 4294967295UL);
        uint64_t *l_849 = (void*)0;
        uint64_t *l_850[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t *l_854[7];
        int64_t **l_853 = &l_854[5];
        uint8_t *l_864[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_865 = 2L;
        int32_t **l_868 = &p_1361->g_73;
        int i;
        for (i = 0; i < 7; i++)
            l_854[i] = &p_1361->g_712;
        l_867 ^= (((((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_829.yxxx)).xxzxywzyyxwzyzwy)).sa8, ((VECTOR(int16_t, 16))(0x154EL, (safe_div_func_uint32_t_u_u((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x4B53706FEB4BF964L, 0x3C0004603AA67ED6L)))).yxxyxxxy, (int64_t)(((((--(*l_832)) , (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_div_func_uint32_t_u_u((l_842 == &p_1361->g_75), ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(3UL, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(p_1361->g_843.yx)), ((VECTOR(uint32_t, 4))(l_844.xyyy)).hi))), 0UL)).yzzxwwwywxzzxzyy, (uint32_t)(safe_sub_func_uint32_t_u_u(((p_1361->g_214.x &= (safe_rshift_func_uint8_t_u_s(p_34, 2))) ^ (l_770 = (safe_div_func_uint8_t_u_u((l_865 ^= (l_853 == ((l_855 || (((VECTOR(uint16_t, 2))(p_1361->g_856.zz)).lo > ((((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(0x6BL, (-8L), (((safe_unary_minus_func_int64_t_s(((((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s(0x17L, (0xB1F58FCAB3C44C44L >= ((void*)0 != l_863)))))) ^ p_34), 0x21L, ((VECTOR(int8_t, 4))((-3L))), 4L, 1L)).s6, p_1361->g_153.sd)) , (void*)0) == (void*)0) < 18446744073709551615UL))) & p_34) , p_34), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x5AL)), 0x01L)).s6007241543335410, ((VECTOR(int8_t, 16))(0x51L))))).hi))).s4 < 0x02L) , p_34))) , (void*)0))), 255UL)))), (*p_33)))))).s3)))), 14))) || l_865) , 0x0A8DC98DL) , p_34), (int64_t)l_829.x))).s21)).yxyxyyxyyxyxyyyy, ((VECTOR(int64_t, 16))(0x0A05660906EB1B8EL)), ((VECTOR(int64_t, 16))(0x51FBE9B347E72299L))))).hi)))).s7 | p_1361->g_57.s4) && p_34) > l_829.y), l_829.x)), (-1L), 0x779CL, ((VECTOR(int16_t, 2))(0x65E6L)), 0x34B4L, 0x1B1AL, p_1361->g_743[6], 0x69F6L, p_1361->g_866, ((VECTOR(int16_t, 4))(3L)), 0x6784L)).s2e))))).xyyy, ((VECTOR(int16_t, 4))((-4L)))))).lo)), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))((-1L)))))).yyyx)).wxyzwzzx, ((VECTOR(int16_t, 8))(7L)), ((VECTOR(int16_t, 8))(0x3F87L))))).even)).xywzxyzx, ((VECTOR(int16_t, 8))((-1L)))))).s0 && l_844.y) != p_34) <= 0L);
        (*l_868) = (void*)0;
        (*l_868) = (void*)0;
    }
    (*p_1361->g_729) = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1361->g_869.s2657)).even)), 0x91CC04D8L, 0x2931072DL)).z == (safe_lshift_func_uint8_t_u_s(1UL, ((*p_1361->g_171) = (((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((p_1361->g_493.x | (safe_sub_func_uint8_t_u_u(p_34, ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((--l_882) , (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1361->g_889.xxxyyxxxyyxyyxyy)).sb, FAKE_DIVERGE(p_1361->group_2_offset, get_group_id(2), 10))) && p_34), 0))), 0x7EL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_890.s47)), 0L, 9L)))).wwzxzxzy)), 1L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1361->g_891.zxzzwxwz)))).s7033523775067212)).s51, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(l_892.yxzz)), ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_1361->g_417.s0, (safe_div_func_uint64_t_u_u(p_1361->g_197.s6, (*p_1361->g_542))))), 0x5CL)), ((((*l_899) = (-1L)) , (*p_33)) == FAKE_DIVERGE(p_1361->group_2_offset, get_group_id(2), 10)), ((VECTOR(int8_t, 2))(0x14L)), (-7L), 0x0EL, 0L, 0x1FL)).s4113633006002232)).hi)))).s0334466316373231)))).sec, ((VECTOR(int8_t, 2))(0x04L))))).xyxy, ((VECTOR(int8_t, 4))((-8L))), ((VECTOR(int8_t, 4))(0x1CL))))).even)).xyyx, ((VECTOR(int8_t, 4))(0L)))))))).xzwxzyyzyzzxxywz)), ((VECTOR(int8_t, 16))(0x17L))))).s25, ((VECTOR(int8_t, 2))(0x50L))))), ((VECTOR(int8_t, 2))(0x24L)), ((VECTOR(int8_t, 2))(0x00L))))), ((VECTOR(int8_t, 2))(0x73L)), 0x30L)).hi)).s0, p_1361->g_866)) | 5L)))), l_900)), p_34)) , p_1361->g_901) != l_902[4][1]) > (*p_33)) >= (*p_33))))));
    (*p_1361->g_729) = (safe_sub_func_uint32_t_u_u(((void*)0 == &p_1361->g_681), (l_907 == l_880[0])));
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_31 p_1361->l_comm_values p_1361->g_15 p_1361->g_71 p_1361->g_57 p_1361->g_comm_values p_1361->g_75 p_1361->g_73 p_1361->g_138 p_1361->g_153 p_1361->g_250 p_1361->g_171 p_1361->g_172 p_1361->g_276 p_1361->g_215 p_1361->g_279 p_1361->g_312 p_1361->g_177 p_1361->g_230 p_1361->g_218 p_1361->g_383 p_1361->g_183 p_1361->g_360 p_1361->g_416 p_1361->g_417 p_1361->g_233 p_1361->g_342 p_1361->g_264 p_1361->g_228 p_1361->g_197 p_1361->g_538 p_1361->g_542 p_1361->g_469 p_1361->g_187 p_1361->g_678 p_1361->g_712 p_1361->g_687 p_1361->g_694 p_1361->g_491 p_1361->g_498 p_1361->g_546 p_1361->g_489 p_1361->g_729 p_1361->g_560 p_1361->g_507 p_1361->g_543 p_1361->g_743
 * writes: p_1361->g_75 p_1361->g_57 p_1361->g_73 p_1361->g_172 p_1361->g_276 p_1361->g_153 p_1361->g_177 p_1361->g_360 p_1361->g_233 p_1361->g_234 p_1361->g_138 p_1361->g_546 p_1361->g_187 p_1361->g_678 p_1361->g_681 p_1361->g_388 p_1361->g_560 p_1361->g_743
 */
int32_t  func_35(uint64_t  p_36, struct S0 * p_1361)
{ /* block id: 12 */
    int32_t **l_43 = (void*)0;
    int32_t l_77[2];
    int i;
    for (i = 0; i < 2; i++)
        l_77[i] = 0x10CA1D25L;
    for (p_36 = 14; (p_36 < 3); --p_36)
    { /* block id: 15 */
        int32_t *l_41 = &p_1361->g_15;
        int32_t **l_40 = &l_41;
        int32_t ***l_42[5];
        uint64_t *l_74 = &p_1361->g_75;
        uint32_t *l_76[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_42[i] = &l_40;
        l_43 = l_40;
        p_1361->g_743[6] ^= (safe_add_func_int64_t_s_s(func_46(func_51((p_1361->g_31.z ^ p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))]), (p_36 ^ p_1361->g_15), &p_1361->g_15, ((*l_40) = (((0x10CFL != (((VECTOR(int32_t, 16))(p_1361->g_57.s7cec7e9a03a1b4bc)).s7 , func_58((*l_43), ((((safe_div_func_int32_t_s_s(((p_36 , (l_77[1] = (((safe_div_func_uint64_t_u_u((((*l_74) = (safe_unary_minus_func_int16_t_s((((safe_mul_func_int16_t_s_s((+(-1L)), (**l_40))) , p_1361->g_71) != &l_43)))) & p_1361->g_57.sb), 0x23142ACE07D3F149L)) >= 0UL) , p_1361->g_comm_values[p_1361->tid]))) <= p_36), 0x66DE40C5L)) >= p_36) , p_36) , (*l_43)), p_1361->g_15, (*l_43), p_1361->g_57.s0, p_1361))) , (**l_43)) , (void*)0)), l_43, p_1361), l_43, &l_40, p_36, p_1361), FAKE_DIVERGE(p_1361->local_0_offset, get_local_id(0), 10)));
        (*l_40) = (*l_43);
    }
    return p_1361->g_543[3][3][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_416 p_1361->g_507 p_1361->g_542 p_1361->g_543
 * writes:
 */
int64_t  func_46(int32_t  p_47, int32_t ** p_48, int32_t *** p_49, uint32_t  p_50, struct S0 * p_1361)
{ /* block id: 279 */
    VECTOR(uint32_t, 2) l_733 = (VECTOR(uint32_t, 2))(4294967292UL, 0xD60A8BF3L);
    uint64_t l_740 = 0xC4AB3474B8ECAE0DL;
    uint8_t l_742 = 0xE1L;
    int i;
    atomic_max(&p_1361->l_atomic_reduction[0], (((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_733.yyxyxxyxxyyyyyxy)).lo)), p_50, (((safe_mod_func_uint8_t_u_u(p_1361->g_416.y, p_50)) >= (p_47 >= (safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((p_50 , l_733.y), l_740)) < (safe_unary_minus_func_int64_t_s((p_1361->g_507.x ^ p_47)))) & 1UL) , l_742), l_733.x)))) , GROUP_DIVERGE(1, 1)), 0x8FE5B2DAL, ((VECTOR(uint32_t, 2))(0x523B4964L)), l_733.x, 0xBDD7DABFL, 0x8D87EFFDL)).s22)).xyxx, ((VECTOR(uint32_t, 4))(0x9745AF1BL)), ((VECTOR(uint32_t, 4))(0x2283E55EL))))).zywwwwyxzyyzxxzw)), ((VECTOR(uint32_t, 16))(1UL)), ((VECTOR(uint32_t, 16))(6UL))))).s4 , 0x16DC5C6CL) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1361->v_collective += p_1361->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return (*p_1361->g_542);
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_489 p_1361->g_177 p_1361->g_729 p_1361->g_560 p_1361->g_498
 * writes: p_1361->g_177 p_1361->g_560
 */
int32_t  func_51(int32_t  p_52, int8_t  p_53, int32_t * p_54, int32_t * p_55, int32_t ** p_56, struct S0 * p_1361)
{ /* block id: 273 */
    int32_t l_717 = 0x1D634C2FL;
    int32_t *l_718 = (void*)0;
    int32_t *l_719 = &l_717;
    int16_t *l_724 = &p_1361->g_177;
    int32_t *l_725 = (void*)0;
    int32_t *l_728 = (void*)0;
    VECTOR(uint32_t, 2) l_732 = (VECTOR(uint32_t, 2))(0x61264F58L, 0x7D9BE2D8L);
    int i;
    (*p_1361->g_729) |= ((safe_sub_func_int32_t_s_s(((*l_719) = (safe_div_func_uint32_t_u_u((l_717 >= 0x46945F1F3F9761BEL), (~0L)))), (safe_rshift_func_int8_t_s_u(0x54L, p_1361->g_489.s4)))) && ((*l_724) ^= (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(0x0D2EL, 0x42F2L)).even, 9))));
    (*l_719) = (safe_rshift_func_uint16_t_u_u(0x8047L, (0x617257AAL | ((VECTOR(uint32_t, 2))(l_732.yy)).even)));
    return p_1361->g_498.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1361->g_75 p_1361->g_comm_values p_1361->g_57 p_1361->l_comm_values p_1361->g_73 p_1361->g_15 p_1361->g_138 p_1361->g_171 p_1361->g_183 p_1361->g_184 p_1361->g_185 p_1361->g_187 p_1361->g_190 p_1361->g_153 p_1361->g_250 p_1361->g_172 p_1361->g_276 p_1361->g_215 p_1361->g_279 p_1361->g_312 p_1361->g_177 p_1361->g_230 p_1361->g_218 p_1361->g_383 p_1361->g_360 p_1361->g_416 p_1361->g_417 p_1361->g_233 p_1361->g_342 p_1361->g_469 p_1361->g_264 p_1361->g_489 p_1361->g_490 p_1361->g_491 p_1361->g_492 p_1361->g_493 p_1361->g_498 p_1361->g_228 p_1361->g_197 p_1361->g_507 p_1361->g_2 p_1361->g_538 p_1361->g_542 p_1361->g_580 p_1361->g_582 p_1361->g_583 p_1361->g_546 p_1361->g_597 p_1361->g_216 p_1361->g_678 p_1361->g_687 p_1361->g_694 p_1361->g_712
 * writes: p_1361->g_75 p_1361->g_57 p_1361->g_73 p_1361->g_138 p_1361->g_171 p_1361->g_177 p_1361->g_172 p_1361->g_276 p_1361->g_153 p_1361->g_360 p_1361->g_184 p_1361->g_233 p_1361->g_234 p_1361->g_546 p_1361->g_187 p_1361->g_597 p_1361->g_678 p_1361->g_681 p_1361->g_388
 */
int16_t  func_58(int32_t * p_59, int32_t * p_60, int8_t  p_61, int32_t * p_62, int32_t  p_63, struct S0 * p_1361)
{ /* block id: 19 */
    VECTOR(int16_t, 2) l_80 = (VECTOR(int16_t, 2))(0x44FFL, (-1L));
    int32_t l_117 = 5L;
    int32_t l_118[5][6] = {{0x70EA8E11L,0x70EA8E11L,1L,0x414278DBL,0x33EA39AEL,0x414278DBL},{0x70EA8E11L,0x70EA8E11L,1L,0x414278DBL,0x33EA39AEL,0x414278DBL},{0x70EA8E11L,0x70EA8E11L,1L,0x414278DBL,0x33EA39AEL,0x414278DBL},{0x70EA8E11L,0x70EA8E11L,1L,0x414278DBL,0x33EA39AEL,0x414278DBL},{0x70EA8E11L,0x70EA8E11L,1L,0x414278DBL,0x33EA39AEL,0x414278DBL}};
    uint32_t l_119 = 4294967294UL;
    uint64_t *l_130 = &p_1361->g_75;
    VECTOR(int32_t, 16) l_168 = (VECTOR(int32_t, 16))(0x0C483BAEL, (VECTOR(int32_t, 4))(0x0C483BAEL, (VECTOR(int32_t, 2))(0x0C483BAEL, (-1L)), (-1L)), (-1L), 0x0C483BAEL, (-1L), (VECTOR(int32_t, 2))(0x0C483BAEL, (-1L)), (VECTOR(int32_t, 2))(0x0C483BAEL, (-1L)), 0x0C483BAEL, (-1L), 0x0C483BAEL, (-1L));
    VECTOR(int16_t, 4) l_207 = (VECTOR(int16_t, 4))(0x6BEEL, (VECTOR(int16_t, 2))(0x6BEEL, 0x3E71L), 0x3E71L);
    int32_t ***l_249 = (void*)0;
    int8_t l_269 = (-2L);
    VECTOR(int32_t, 4) l_297 = (VECTOR(int32_t, 4))(0x6F349288L, (VECTOR(int32_t, 2))(0x6F349288L, 0x6FEB4F25L), 0x6FEB4F25L);
    int8_t l_308 = 0x6EL;
    int16_t *l_375 = &p_1361->g_177;
    VECTOR(int64_t, 4) l_387 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x2DC87E9DC5A71543L), 0x2DC87E9DC5A71543L);
    VECTOR(int64_t, 16) l_389 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0886CC487C337AA3L), 0x0886CC487C337AA3L), 0x0886CC487C337AA3L, (-1L), 0x0886CC487C337AA3L, (VECTOR(int64_t, 2))((-1L), 0x0886CC487C337AA3L), (VECTOR(int64_t, 2))((-1L), 0x0886CC487C337AA3L), (-1L), 0x0886CC487C337AA3L, (-1L), 0x0886CC487C337AA3L);
    int32_t l_395 = 0x00799771L;
    int32_t *l_410 = (void*)0;
    VECTOR(int8_t, 4) l_429 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-1L)), (-1L));
    uint64_t l_439 = 8UL;
    VECTOR(uint64_t, 4) l_481 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL);
    VECTOR(uint8_t, 4) l_494 = (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 1UL), 1UL);
    VECTOR(uint8_t, 16) l_496 = (VECTOR(uint8_t, 16))(0x0AL, (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 0x9BL), 0x9BL), 0x9BL, 0x0AL, 0x9BL, (VECTOR(uint8_t, 2))(0x0AL, 0x9BL), (VECTOR(uint8_t, 2))(0x0AL, 0x9BL), 0x0AL, 0x9BL, 0x0AL, 0x9BL);
    VECTOR(int8_t, 16) l_515 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4FL), 0x4FL), 0x4FL, 1L, 0x4FL, (VECTOR(int8_t, 2))(1L, 0x4FL), (VECTOR(int8_t, 2))(1L, 0x4FL), 1L, 0x4FL, 1L, 0x4FL);
    int64_t l_551 = (-1L);
    uint32_t l_554 = 0xB815C8D6L;
    int32_t l_562 = 0x761C0C51L;
    VECTOR(uint16_t, 16) l_587 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xCEF1L), 0xCEF1L), 0xCEF1L, 8UL, 0xCEF1L, (VECTOR(uint16_t, 2))(8UL, 0xCEF1L), (VECTOR(uint16_t, 2))(8UL, 0xCEF1L), 8UL, 0xCEF1L, 8UL, 0xCEF1L);
    VECTOR(uint16_t, 2) l_598 = (VECTOR(uint16_t, 2))(5UL, 7UL);
    VECTOR(int16_t, 16) l_686 = (VECTOR(int16_t, 16))(0x0778L, (VECTOR(int16_t, 4))(0x0778L, (VECTOR(int16_t, 2))(0x0778L, 0x07B1L), 0x07B1L), 0x07B1L, 0x0778L, 0x07B1L, (VECTOR(int16_t, 2))(0x0778L, 0x07B1L), (VECTOR(int16_t, 2))(0x0778L, 0x07B1L), 0x0778L, 0x07B1L, 0x0778L, 0x07B1L);
    VECTOR(uint32_t, 4) l_697 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 4294967286UL), 4294967286UL);
    uint32_t *l_698[8];
    VECTOR(int64_t, 4) l_701 = (VECTOR(int64_t, 4))(0x1C627A971CBAC81DL, (VECTOR(int64_t, 2))(0x1C627A971CBAC81DL, (-10L)), (-10L));
    uint32_t l_708 = 1UL;
    uint64_t l_709 = 18446744073709551615UL;
    int64_t *l_710[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t *l_711[2];
    int i, j;
    for (i = 0; i < 8; i++)
        l_698[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_711[i] = (void*)0;
    for (p_1361->g_75 = (-25); (p_1361->g_75 >= 32); ++p_1361->g_75)
    { /* block id: 22 */
        int32_t l_81 = (-4L);
        int32_t **l_115 = &p_1361->g_73;
        uint64_t l_116 = 0x5B49D7A73C59DB3CL;
        VECTOR(int8_t, 8) l_198 = (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 5L), 5L), 5L, 0x2AL, 5L);
        VECTOR(int16_t, 8) l_206 = (VECTOR(int16_t, 8))(0x1DD2L, (VECTOR(int16_t, 4))(0x1DD2L, (VECTOR(int16_t, 2))(0x1DD2L, 1L), 1L), 1L, 0x1DD2L, 1L);
        VECTOR(int8_t, 16) l_208 = (VECTOR(int8_t, 16))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x46L), 0x46L), 0x46L, 0x05L, 0x46L, (VECTOR(int8_t, 2))(0x05L, 0x46L), (VECTOR(int8_t, 2))(0x05L, 0x46L), 0x05L, 0x46L, 0x05L, 0x46L);
        VECTOR(uint16_t, 2) l_223 = (VECTOR(uint16_t, 2))(8UL, 1UL);
        VECTOR(int64_t, 4) l_227 = (VECTOR(int64_t, 4))(0x2680AF3E0FC45833L, (VECTOR(int64_t, 2))(0x2680AF3E0FC45833L, 0x7D536921B34851EFL), 0x7D536921B34851EFL);
        int32_t l_270 = 5L;
        uint8_t l_282 = 249UL;
        VECTOR(int64_t, 8) l_290 = (VECTOR(int64_t, 8))(0x2CD075D00FB13ED2L, (VECTOR(int64_t, 4))(0x2CD075D00FB13ED2L, (VECTOR(int64_t, 2))(0x2CD075D00FB13ED2L, 0x3D5AC0A195B390D3L), 0x3D5AC0A195B390D3L), 0x3D5AC0A195B390D3L, 0x2CD075D00FB13ED2L, 0x3D5AC0A195B390D3L);
        VECTOR(uint64_t, 16) l_293 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xB4597DB14E475A22L), 0xB4597DB14E475A22L), 0xB4597DB14E475A22L, 18446744073709551606UL, 0xB4597DB14E475A22L, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xB4597DB14E475A22L), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xB4597DB14E475A22L), 18446744073709551606UL, 0xB4597DB14E475A22L, 18446744073709551606UL, 0xB4597DB14E475A22L);
        VECTOR(int32_t, 16) l_302 = (VECTOR(int32_t, 16))(0x71E4B83DL, (VECTOR(int32_t, 4))(0x71E4B83DL, (VECTOR(int32_t, 2))(0x71E4B83DL, 0x0BC533F8L), 0x0BC533F8L), 0x0BC533F8L, 0x71E4B83DL, 0x0BC533F8L, (VECTOR(int32_t, 2))(0x71E4B83DL, 0x0BC533F8L), (VECTOR(int32_t, 2))(0x71E4B83DL, 0x0BC533F8L), 0x71E4B83DL, 0x0BC533F8L, 0x71E4B83DL, 0x0BC533F8L);
        uint32_t l_307 = 0x3A08310EL;
        uint16_t *l_317 = (void*)0;
        int64_t l_332 = 0x422FC88EDF39F530L;
        VECTOR(int8_t, 8) l_344 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x78L), 0x78L), 0x78L, 1L, 0x78L);
        VECTOR(int8_t, 16) l_349 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        int8_t *l_378 = (void*)0;
        VECTOR(int32_t, 8) l_412 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
        VECTOR(uint8_t, 16) l_497 = (VECTOR(uint8_t, 16))(0xD7L, (VECTOR(uint8_t, 4))(0xD7L, (VECTOR(uint8_t, 2))(0xD7L, 0x3AL), 0x3AL), 0x3AL, 0xD7L, 0x3AL, (VECTOR(uint8_t, 2))(0xD7L, 0x3AL), (VECTOR(uint8_t, 2))(0xD7L, 0x3AL), 0xD7L, 0x3AL, 0xD7L, 0x3AL);
        VECTOR(int32_t, 4) l_505 = (VECTOR(int32_t, 4))(0x3471D852L, (VECTOR(int32_t, 2))(0x3471D852L, 0x05158B6AL), 0x05158B6AL);
        VECTOR(int32_t, 2) l_506 = (VECTOR(int32_t, 2))(0x55FBEFFCL, 0x57D205D3L);
        VECTOR(int32_t, 2) l_509 = (VECTOR(int32_t, 2))((-10L), 0x6A25163AL);
        int32_t l_559 = 0x00117A2FL;
        VECTOR(uint16_t, 8) l_586 = (VECTOR(uint16_t, 8))(0x88E8L, (VECTOR(uint16_t, 4))(0x88E8L, (VECTOR(uint16_t, 2))(0x88E8L, 8UL), 8UL), 8UL, 0x88E8L, 8UL);
        uint64_t l_602[10];
        uint8_t l_604 = 1UL;
        int8_t l_605 = 0x06L;
        uint8_t l_607 = 1UL;
        int i;
        for (i = 0; i < 10; i++)
            l_602[i] = 9UL;
        if (l_80.y)
        { /* block id: 23 */
            uint32_t l_84 = 4294967293UL;
            int32_t **l_93[10][2][2] = {{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}},{{&p_1361->g_73,&p_1361->g_73},{&p_1361->g_73,&p_1361->g_73}}};
            int8_t l_114 = 0x4FL;
            uint8_t *l_165 = (void*)0;
            VECTOR(int8_t, 8) l_199 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x06L), 0x06L), 0x06L, 0L, 0x06L);
            VECTOR(uint64_t, 16) l_219 = (VECTOR(uint64_t, 16))(0xC9F82F56F0C85766L, (VECTOR(uint64_t, 4))(0xC9F82F56F0C85766L, (VECTOR(uint64_t, 2))(0xC9F82F56F0C85766L, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 0xC9F82F56F0C85766L, 18446744073709551608UL, (VECTOR(uint64_t, 2))(0xC9F82F56F0C85766L, 18446744073709551608UL), (VECTOR(uint64_t, 2))(0xC9F82F56F0C85766L, 18446744073709551608UL), 0xC9F82F56F0C85766L, 18446744073709551608UL, 0xC9F82F56F0C85766L, 18446744073709551608UL);
            VECTOR(uint64_t, 16) l_222 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551607UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), 18446744073709551607UL, 18446744073709551608UL, 18446744073709551607UL, 18446744073709551608UL);
            VECTOR(uint16_t, 8) l_224 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB521L), 0xB521L), 0xB521L, 65535UL, 0xB521L);
            VECTOR(uint8_t, 4) l_225 = (VECTOR(uint8_t, 4))(0xF5L, (VECTOR(uint8_t, 2))(0xF5L, 255UL), 255UL);
            VECTOR(uint16_t, 16) l_235 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
            uint64_t *l_271 = &l_116;
            VECTOR(uint64_t, 2) l_291 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL);
            int32_t ****l_329 = &p_1361->g_250;
            int16_t l_330 = 4L;
            int32_t l_334 = 0x3B71BF53L;
            VECTOR(uint8_t, 8) l_337 = (VECTOR(uint8_t, 8))(0xFAL, (VECTOR(uint8_t, 4))(0xFAL, (VECTOR(uint8_t, 2))(0xFAL, 0xC5L), 0xC5L), 0xC5L, 0xFAL, 0xC5L);
            VECTOR(int8_t, 4) l_347 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L));
            VECTOR(int64_t, 2) l_365 = (VECTOR(int64_t, 2))(1L, (-1L));
            uint8_t l_449 = 0xBFL;
            VECTOR(uint64_t, 16) l_468 = (VECTOR(uint64_t, 16))(0xE3E8C83E62F91FCCL, (VECTOR(uint64_t, 4))(0xE3E8C83E62F91FCCL, (VECTOR(uint64_t, 2))(0xE3E8C83E62F91FCCL, 3UL), 3UL), 3UL, 0xE3E8C83E62F91FCCL, 3UL, (VECTOR(uint64_t, 2))(0xE3E8C83E62F91FCCL, 3UL), (VECTOR(uint64_t, 2))(0xE3E8C83E62F91FCCL, 3UL), 0xE3E8C83E62F91FCCL, 3UL, 0xE3E8C83E62F91FCCL, 3UL);
            VECTOR(int32_t, 2) l_503 = (VECTOR(int32_t, 2))(0x316C8C1CL, 0x404B4988L);
            VECTOR(int32_t, 2) l_504 = (VECTOR(int32_t, 2))(0x407CD911L, 0x19E82515L);
            VECTOR(int32_t, 16) l_508 = (VECTOR(int32_t, 16))(0x4AB6BEFAL, (VECTOR(int32_t, 4))(0x4AB6BEFAL, (VECTOR(int32_t, 2))(0x4AB6BEFAL, 0L), 0L), 0L, 0x4AB6BEFAL, 0L, (VECTOR(int32_t, 2))(0x4AB6BEFAL, 0L), (VECTOR(int32_t, 2))(0x4AB6BEFAL, 0L), 0x4AB6BEFAL, 0L, 0x4AB6BEFAL, 0L);
            uint16_t **l_521 = &p_1361->g_312;
            VECTOR(int32_t, 2) l_581 = (VECTOR(int32_t, 2))(0x432E4E50L, 0x6C33F246L);
            int32_t l_606 = (-9L);
            int i, j, k;
            l_117 &= ((l_81 != (safe_div_func_int64_t_s_s(p_61, l_84))) , (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_1361->g_comm_values[p_1361->tid], ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_1361->g_57.s3, (l_93[9][1][1] != ((((VECTOR(uint32_t, 2))(0x821F8E69L, 1UL)).odd == (safe_sub_func_uint8_t_u_u(p_1361->g_57.s6, (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_114 = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(255UL, ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(((((p_1361->g_57.sb == 0x29L) , l_80.x) || GROUP_DIVERGE(2, 1)) , p_61), p_1361->g_75)) , p_61) <= p_1361->g_57.s8), (-1L))), p_1361->g_comm_values[p_1361->tid])) ^ l_80.y), p_61)), p_63)) <= GROUP_DIVERGE(2, 1)), p_1361->g_57.sc)) > (*p_62)), p_1361->g_75, 0xE8L, p_63, ((VECTOR(uint8_t, 2))(1UL)), 0x0CL)).s0220506544116547)).s05, ((VECTOR(uint8_t, 2))(0x16L))))).odd, 1))), l_81)), p_63))))) , l_115)))), l_80.x)) && p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))]) < l_116) != (-1L)))), p_61)));
            l_119--;
            if (((void*)0 != p_60))
            { /* block id: 27 */
                uint8_t *l_137[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_139 = 1L;
                int32_t l_148 = 0x60A75574L;
                int32_t ***l_151 = (void*)0;
                int32_t ***l_152 = &l_93[8][1][0];
                int32_t *l_154 = &l_118[3][4];
                int32_t ***l_162[4][3][3] = {{{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]}},{{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]}},{{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]}},{{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]},{&l_93[9][1][1],(void*)0,&l_93[9][1][1]}}};
                VECTOR(int32_t, 8) l_167 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                VECTOR(uint16_t, 16) l_180 = (VECTOR(uint16_t, 16))(0x3A43L, (VECTOR(uint16_t, 4))(0x3A43L, (VECTOR(uint16_t, 2))(0x3A43L, 65532UL), 65532UL), 65532UL, 0x3A43L, 65532UL, (VECTOR(uint16_t, 2))(0x3A43L, 65532UL), (VECTOR(uint16_t, 2))(0x3A43L, 65532UL), 0x3A43L, 65532UL, 0x3A43L, 65532UL);
                VECTOR(int8_t, 8) l_196 = (VECTOR(int8_t, 8))(0x23L, (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, (-1L)), (-1L)), (-1L), 0x23L, (-1L));
                VECTOR(uint16_t, 8) l_229 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 3UL), 3UL), 3UL, 2UL, 3UL);
                VECTOR(uint16_t, 16) l_231 = (VECTOR(uint16_t, 16))(0xE010L, (VECTOR(uint16_t, 4))(0xE010L, (VECTOR(uint16_t, 2))(0xE010L, 65535UL), 65535UL), 65535UL, 0xE010L, 65535UL, (VECTOR(uint16_t, 2))(0xE010L, 65535UL), (VECTOR(uint16_t, 2))(0xE010L, 65535UL), 0xE010L, 65535UL, 0xE010L, 65535UL);
                VECTOR(uint16_t, 8) l_259 = (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65528UL), 65528UL), 65528UL, 65530UL, 65528UL);
                VECTOR(uint64_t, 2) l_292 = (VECTOR(uint64_t, 2))(0x417AD1F93E2F61A4L, 0x80A0FC840620EE0EL);
                uint16_t *l_314[5];
                VECTOR(int8_t, 8) l_345 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x70L), 0x70L), 0x70L, (-1L), 0x70L);
                VECTOR(int8_t, 2) l_350 = (VECTOR(int8_t, 2))(0x1AL, 0L);
                VECTOR(int8_t, 2) l_351 = (VECTOR(int8_t, 2))(8L, 0x01L);
                int8_t l_373 = 0x58L;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_314[i] = (void*)0;
                l_148 = ((((p_1361->g_comm_values[p_1361->tid] >= (p_1361->g_57.sc = (safe_mod_func_uint8_t_u_u((~p_1361->g_75), (safe_add_func_uint16_t_u_u(6UL, (safe_div_func_uint64_t_u_u(0x5C283537EA6E2EE9L, (safe_lshift_func_int16_t_s_u(((void*)0 == l_130), (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(((!(((((safe_lshift_func_uint8_t_u_u((+(l_139 = ((*l_115) == &p_1361->g_15))), (safe_mod_func_uint32_t_u_u(((((safe_mod_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((p_61 == p_1361->g_57.s7), p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))])) > GROUP_DIVERGE(0, 1)), 6)) >= p_61) | l_148), p_1361->g_57.s3)) < FAKE_DIVERGE(p_1361->local_1_offset, get_local_id(1), 10)) , (void*)0) != &p_1361->g_15), (*p_62))))) >= GROUP_DIVERGE(2, 1)) | p_63) , l_139) , p_61)) < p_1361->g_75), 0x87753CBC61721145L)) , p_1361->g_138), 0xD26D99E8L)))))))))))) <= l_118[3][4]) < GROUP_DIVERGE(1, 1)) != p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))]);
                if (((*l_154) &= (safe_lshift_func_int8_t_s_u((((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x89L, 8UL)).yxyyyxyy)).s6531211723244434, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(246UL, (((*l_152) = &p_1361->g_73) == (void*)0), 254UL, 0x26L)), ((VECTOR(uint8_t, 8))(p_1361->g_153.s441f78ad)).even))).yzyyxwyzwwywxxxx))).s3 > 0UL), 6))))
                { /* block id: 33 */
                    VECTOR(int64_t, 4) l_159 = (VECTOR(int64_t, 4))(0x611651DD7BE084E5L, (VECTOR(int64_t, 2))(0x611651DD7BE084E5L, (-1L)), (-1L));
                    VECTOR(int32_t, 4) l_191 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x5C5A0F63L), 0x5C5A0F63L);
                    int i;
                    (*l_115) = p_59;
                    if ((*p_60))
                    { /* block id: 35 */
                        int8_t *l_166 = &l_114;
                        int16_t *l_175 = (void*)0;
                        int16_t *l_176 = &p_1361->g_177;
                        VECTOR(int32_t, 2) l_186 = (VECTOR(int32_t, 2))(1L, (-1L));
                        uint64_t l_192 = 0xED77FB83B52146C8L;
                        int i;
                        (*l_154) &= (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))((((((safe_mul_func_uint16_t_u_u(((p_61 > (+(((VECTOR(int64_t, 2))(l_159.xw)).lo < ((~(p_1361->g_138 = (safe_mul_func_int8_t_s_s(((void*)0 == l_162[3][2][2]), p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))])))) < (safe_add_func_int8_t_s_s((((*l_166) = (((p_61 || (0x6A13L != (((l_165 != (void*)0) != (l_81 &= 0x90L)) , l_159.z))) > l_159.y) != p_63)) == (-1L)), 5L)))))) > p_1361->g_75), 0x259EL)) < l_80.y) ^ p_63) < p_1361->g_15) && 18446744073709551614UL), 0x5E11BDC7L, 0L, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 4))(0x146DB040L)), 0x28B82CCCL)).sd, 4294967294UL));
                        l_191.z = ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_167.s1243224153001616)).sb0)).xxyyxxxx, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-2L), 0x1C7F3327L)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x0DAF8A5AL, (-1L))).xxyx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x7D4CFF50L, (-1L))).xyyxxxyyyxyyxyxx)))).seaab, ((VECTOR(int32_t, 2))(l_168.s01)).yyxy))).hi, (int32_t)(safe_add_func_int8_t_s_s(l_80.y, (((p_1361->g_171 = p_1361->g_171) == &p_61) && (p_63 > (safe_add_func_int16_t_s_s(((*l_176) = 0x7C41L), (!(safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_180.sc3e7db0b)).s1, (safe_sub_func_int32_t_s_s(9L, ((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(p_1361->g_183.wwzxyyxw)).s3012310455443347, (uint32_t)(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(0xB6L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 0UL)), 1UL, 0xEAL)), 0x5AL, 255UL, 250UL)).s34, ((VECTOR(uint8_t, 2))(0x77L, 1UL))))), 0xF9L, 0xAAL)).zyzwyyyz)).s5 , GROUP_DIVERGE(2, 1))))).sb)))))))))))))), (-1L), 0x17AC9DC7L)).odd)).xyyy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1361->g_184.s92)).yyyxxxyyxxxxxyxx)).hi)).s73)).xxxy))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1361->g_185.zyyx)))).zyzxyxywyyxwxwxw)).s5294))).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_186.yxxyyyyxyyyyyyxy)))).s8d))).yyxxxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1361->g_187.s2664)), (p_63 , (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1361->g_190.yx)))).odd, l_168.s9))), 0x460D410FL, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_191.wwyx)).wywyyzxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_186.x, l_118[3][4], 0x54149EF3L, 0x3EBA6D48L)))).xwzzzxwz))).s5, (*p_1361->g_73), ((VECTOR(int32_t, 8))(0x1CFB2A6EL)))).odd))).lo, ((VECTOR(int32_t, 4))(0x2CB20AC4L)), ((VECTOR(int32_t, 4))((-5L)))))).odd)), ((VECTOR(int32_t, 4))(0x1D5ECBE2L)), (-8L), l_192, 0x0E4B82FDL, (*p_62), 0x2821EC39L, 0x76A6F7F2L, 0x3E7F61CDL, ((VECTOR(int32_t, 2))(0x345BE34CL)), 0x7C028ED0L)).se527)).zwwzwyzz, ((VECTOR(int32_t, 8))(0x68EDA36AL))))).s4;
                    }
                    else
                    { /* block id: 43 */
                        return p_1361->g_153.s6;
                    }
                    if ((atomic_inc(&p_1361->g_atomic_input[55 * get_linear_group_id() + 46]) == 9))
                    { /* block id: 47 */
                        int64_t l_193 = (-6L);
                        int32_t *l_194 = (void*)0;
                        int32_t *l_195 = (void*)0;
                        l_195 = (l_193 , l_194);
                        unsigned int result = 0;
                        result += l_193;
                        atomic_add(&p_1361->g_special_values[55 * get_linear_group_id() + 46], result);
                    }
                    else
                    { /* block id: 49 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 52 */
                    int32_t ****l_220 = (void*)0;
                    int32_t ****l_221 = &l_162[1][2][1];
                    VECTOR(uint16_t, 2) l_226 = (VECTOR(uint16_t, 2))(1UL, 6UL);
                    uint16_t *l_240 = (void*)0;
                    uint16_t *l_241 = (void*)0;
                    uint16_t *l_242 = (void*)0;
                    uint16_t *l_243 = (void*)0;
                    uint16_t *l_244 = (void*)0;
                    uint16_t *l_245 = (void*)0;
                    uint16_t *l_246 = (void*)0;
                    uint16_t *l_247 = (void*)0;
                    uint16_t *l_248[3];
                    int32_t l_273 = 0x365013C0L;
                    uint32_t l_294 = 4294967295UL;
                    uint16_t **l_313 = &l_248[0];
                    VECTOR(uint64_t, 2) l_333 = (VECTOR(uint64_t, 2))(1UL, 0xD2A07E57E0D27AAEL);
                    VECTOR(int64_t, 2) l_364 = (VECTOR(int64_t, 2))(0x3924B90C254B5701L, 0x1A1E60B17A883612L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_248[i] = (void*)0;
                    if ((p_1361->g_138 || ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x0FL, ((VECTOR(int8_t, 2))(0x10L, 0x64L)), 0x5CL, 0x27L, 0L, 6L, 0x30L)).s1540636166642025)).s3f, ((VECTOR(int8_t, 8))(l_196.s76263640)).s07))), 0L, 1L)).yyyxzxwy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1361->g_197.s63)).yxyy)).xwzzzywz, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_198.s6745)).lo)).yyxxxxxy))).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 1L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_199.s1254)).yxyzzxyywwzwwywx)).sd, 0x40L, ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x83A3E19EL, 4294967295UL)).even, ((VECTOR(uint32_t, 4))(4294967294UL, 4294967295UL, 4294967289UL, 1UL)).z)) || ((VECTOR(int16_t, 2))(0x6648L, 0x60D8L)).odd), 0x1EL, 0x49L, (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))((-1L), (-9L))).yxyyyxxxyxyxyyxy, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(l_206.s61741323)).s40, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_207.wy)))), 9L, 0x4361L)).odd, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(l_208.sb8560b53)).s4137673325017256, ((VECTOR(uint8_t, 8))(0UL, (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((GROUP_DIVERGE(1, 1) >= p_1361->g_190.y), l_207.x)) == ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(0x981DF60D0BD520F1L, 2UL, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 2))(p_1361->g_213.xy)).xyxx, ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1361->g_214.xx)).yxyxxxyyxyyxyxyx)).sfb))).xxyxxxxxyyxyxxxy, ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(0x275740A826D1EDC4L, 0x850C967FFD3E07EBL)), ((VECTOR(uint64_t, 8))(p_1361->g_215.s60652600)).s06))).yyyyyxyx, ((VECTOR(uint64_t, 2))(0xE029866E211E06A4L, 18446744073709551612UL)).xxxxxyyy))).s3534532361647372))).sebff))).xzzxwzxyywzwxwxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1361->g_216.s65)).yyxyxxxx)).s4417207163553272)).hi)).s4674170125723361)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0x44842A39414E7BC7L, ((VECTOR(uint64_t, 16))(p_1361->g_217.s2377432126562742)).s1, 0UL, 0x024B52CCDEE1C282L)).zzwwywxyzyzzyxwz)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x867868B905371D5EL, 0x8DC6E2A525CEA18AL)), 1UL, 0xF8E37A3864E8FA73L)).yxxxxwzyxzxxzyxw))).s43ce)).yxywzyzxxxxyxyyy))))).hi)).s44)).yxxxxxyx)).s52, ((VECTOR(uint64_t, 16))(p_1361->g_218.yxwywywxzwxwwyxw)).saa))), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(l_219.sa20c)).odd, (uint64_t)(((*l_221) = l_151) == p_1361->g_71)))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_222.s1323bcee)))).s1305371457563240))).even)), 0x228B3F62F70D8E6EL, 8UL)).sd1, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(l_223.xyyyyyyyxxyxyxxy)).lo, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(l_224.s2171)), ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_225.wz)).yxxy)).lo)).xxxxyyyx)).hi)).xzyyzzxz, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x17L, 0xC2L)).yxxyyyxyxxyxxyyx)).hi, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x88L, 0xEEL)))).yxxxyyxy))).s23)))).xyyxxxxy, ((VECTOR(uint8_t, 4))(0x03L, 1UL, 0UL, 6UL)).xwyxyzzz))))))))).lo, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_226.xyyxyxxyyxyyyxyy)).s9999))))).xzzzwxzx, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((((VECTOR(int64_t, 4))(l_227.xywy)).w & p_63), ((VECTOR(uint16_t, 2))(p_1361->g_228.s01)), 8UL)), 0x0263L, ((VECTOR(uint16_t, 2))(l_229.s05)), 0UL)).hi, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(65535UL, 0UL, 65535UL, 0x6DF7L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(p_1361->g_230.s82)).yyxyyyyxyxyxxyyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_231.sb124)).lo)).yyyyyxyyyxyxyxyx, ((VECTOR(uint16_t, 8))(p_1361->g_232.s57662267)).s3661557001604003))).s86b9)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0x88AFL, ((VECTOR(uint16_t, 2))(p_1361->g_233.xy)), 7UL)).odd)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1361->g_234.sb6acc92eb9c0af9b)).lo)).s02)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(1UL, 0x0EE0L)), 0x4EC7L, 65533UL, ((VECTOR(uint16_t, 2))(l_235.sd6)), (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(251UL, 255UL)), 255UL, 255UL)).z, (safe_mod_func_uint8_t_u_u(5UL, GROUP_DIVERGE(2, 1))))), 0x8537L, (l_168.sd = 0x445DL), ((VECTOR(uint16_t, 4))(0x9EFFL)), FAKE_DIVERGE(p_1361->group_1_offset, get_group_id(1), 10), 0x3221L, 0x1CBFL)).s97c3)).yywwwzyz, ((VECTOR(uint16_t, 8))(0UL))))).odd)))))).hi)).s57)).xxxyyyyy, ((VECTOR(uint16_t, 8))(65528UL)), ((VECTOR(uint16_t, 8))(0x0362L))))).hi))).xxwxxyzw))).s13))).yxxx, ((VECTOR(uint16_t, 4))(0UL))))))).ywyzxyww, ((VECTOR(uint32_t, 8))(2UL))))))).s16))).xxyyyxxy, ((VECTOR(uint64_t, 8))(18446744073709551614UL))))).s26, ((VECTOR(uint64_t, 2))(0x948D2584C5626FFDL))))).even), GROUP_DIVERGE(2, 1))), 255UL, p_1361->g_230.s1, ((VECTOR(uint8_t, 4))(4UL)))).s4251256030304277))).hi)).s1604527363270247)))).hi, ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(1L))))).s53))).xyxx)).hi))).yxxxyxxyxyxyxyxx))))).s0, 1)), (*p_1361->g_171))), 2L, 0L, 8L, 0x4AL, 0x4CL, 0x7EL, 0L, (-1L))).s86fd))), (*p_1361->g_171), 7L, 7L, (-10L))).s3))
                    { /* block id: 55 */
                        if ((*p_59))
                            break;
                        return p_61;
                    }
                    else
                    { /* block id: 58 */
                        int64_t l_258[5][10] = {{0x7A0468BE79B30611L,9L,0x2C497D43AD270D92L,0x6A0160EDC83CE190L,9L,0x6A0160EDC83CE190L,0x2C497D43AD270D92L,9L,0x7A0468BE79B30611L,0x7A0468BE79B30611L},{0x7A0468BE79B30611L,9L,0x2C497D43AD270D92L,0x6A0160EDC83CE190L,9L,0x6A0160EDC83CE190L,0x2C497D43AD270D92L,9L,0x7A0468BE79B30611L,0x7A0468BE79B30611L},{0x7A0468BE79B30611L,9L,0x2C497D43AD270D92L,0x6A0160EDC83CE190L,9L,0x6A0160EDC83CE190L,0x2C497D43AD270D92L,9L,0x7A0468BE79B30611L,0x7A0468BE79B30611L},{0x7A0468BE79B30611L,9L,0x2C497D43AD270D92L,0x6A0160EDC83CE190L,9L,0x6A0160EDC83CE190L,0x2C497D43AD270D92L,9L,0x7A0468BE79B30611L,0x7A0468BE79B30611L},{0x7A0468BE79B30611L,9L,0x2C497D43AD270D92L,0x6A0160EDC83CE190L,9L,0x6A0160EDC83CE190L,0x2C497D43AD270D92L,9L,0x7A0468BE79B30611L,0x7A0468BE79B30611L}};
                        int32_t l_272 = 0x43C1A84BL;
                        int32_t l_274 = 0x24946745L;
                        VECTOR(int32_t, 8) l_275 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                        int i, j;
                        (*l_154) = (l_272 ^= ((FAKE_DIVERGE(p_1361->local_1_offset, get_local_id(1), 10) || ((l_249 != ((*l_221) = p_1361->g_250)) > (((((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((((FAKE_DIVERGE(p_1361->global_2_offset, get_global_id(2), 10) | l_258[4][8]) && (-3L)) >= FAKE_DIVERGE(p_1361->global_1_offset, get_global_id(1), 10)), ((VECTOR(uint16_t, 4))(l_259.s3673)).y)) >= ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_1361->g_264.sf2bd)).w, (safe_add_func_int64_t_s_s((l_269 < (!((*p_1361->g_171) = l_270))), p_61)))) && ((p_1361->g_75 , (void*)0) == &l_115))), (*l_154))) >= l_258[4][8]), (*l_154))) || (*p_1361->g_171)) && 0UL) && 4294967295UL) , l_271) == &p_1361->g_75) && p_63))) , (*p_59)));
                        if ((*p_59))
                            break;
                        p_1361->g_276.w--;
                        (*l_154) = ((VECTOR(int32_t, 8))(p_1361->g_279.xwzwxwyx)).s7;
                    }
                    for (l_270 = 0; (l_270 >= (-10)); l_270 = safe_sub_func_uint32_t_u_u(l_270, 7))
                    { /* block id: 69 */
                        int8_t l_285 = 0x7DL;
                        int32_t l_309 = 0x6440D9E5L;
                        (*l_154) = l_282;
                        if ((*p_60))
                            break;
                        (*l_154) |= (safe_div_func_uint32_t_u_u((((((l_285 = p_1361->g_57.sb) | p_63) , (~(l_309 = (FAKE_DIVERGE(p_1361->group_1_offset, get_group_id(1), 10) || (safe_lshift_func_int16_t_s_s((((((safe_add_func_uint8_t_u_u(p_1361->g_215.s5, ((p_1361->g_15 == ((VECTOR(int64_t, 16))(l_290.s4576441452374527)).sd) , (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_291.yyyy)), 0xCB837798A507814EL, 1UL, ((VECTOR(uint64_t, 2))(l_292.yy)), 0UL, ((VECTOR(uint64_t, 4))(l_293.s3f37)), 8UL, 0x113186C1B938308AL, 0xE61AF882FCCFDA2BL)).s6 < l_294)))) ^ (safe_sub_func_int32_t_s_s(((GROUP_DIVERGE(0, 1) == (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_297.xzwz)).lo)).even & (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1361->g_299.zwww)).zyywwwyw)).s7)))) , (((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(l_302.s348d29ac)).s4757417666167455, ((VECTOR(int32_t, 2))(0L, 0x3CE8E12EL)).yyxxxxxxyxyyxxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((safe_div_func_uint64_t_u_u(((((((l_308 = (safe_rshift_func_int8_t_s_s((0x1523639F2C876221L || (((VECTOR(int8_t, 4))(p_61, 0x05L, 0x73L, 0x44L)).w ^ l_307)), 7))) < (-7L)) < p_63) , p_61) > 1L) == 0L), p_1361->g_187.s7)) , 0L), ((VECTOR(int32_t, 2))(0x4D03867CL)), ((VECTOR(int32_t, 4))(1L)), 0L)))).s67, ((VECTOR(int32_t, 2))(1L))))).xxxxyyxyyxyyyyyy))))).s51)).even, (-1L))) >= p_63) && 0xE82CD16FL)), (*p_62)))) && 0x51L) >= (*p_1361->g_171)) , 0x7E87L), p_1361->g_279.y)))))) != p_61) , 0x62DB6BABL), p_63));
                    }
                    if ((safe_sub_func_uint32_t_u_u((((*l_313) = p_1361->g_312) != l_314[3]), (safe_mul_func_uint8_t_u_u(p_1361->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))], ((((l_317 == ((safe_mul_func_int16_t_s_s(p_63, GROUP_DIVERGE(0, 1))) , ((p_61 , ((*l_271)--)) , p_1361->g_312))) , ((p_1361->g_153.sb = p_63) ^ (((l_118[3][4] = (safe_lshift_func_int16_t_s_s((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((p_63 || p_1361->g_190.x) <= p_1361->g_183.z), 1UL, 1UL, ((VECTOR(uint32_t, 8))(4294967293UL)), p_63, 4294967295UL, 0x6390AD62L, 4294967291UL, 0xB22A02EFL)).s022c)).y , (*l_154)), 5))) == 0x694546AAL) == 1UL))) != (-2L)) , p_1361->g_177))))))
                    { /* block id: 81 */
                        (*l_115) = (*l_115);
                    }
                    else
                    { /* block id: 83 */
                        int16_t l_328[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_328[i] = (-7L);
                        l_330 &= ((safe_add_func_uint16_t_u_u(((l_328[2] , &p_1361->g_250) == l_329), (p_61 , p_1361->g_230.s5))) , ((*l_154) &= (*p_60)));
                        (*l_154) ^= (safe_unary_minus_func_int8_t_s(l_332));
                        l_334 |= ((((VECTOR(int8_t, 2))(0x66L, 0x3DL)).even != FAKE_DIVERGE(p_1361->group_1_offset, get_group_id(1), 10)) < ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_333.xxyxyxxyyxxxyxyx)).hi)).s1751223550362251)).s9);
                        if ((*p_60))
                            continue;
                    }
                    for (l_84 = 28; (l_84 <= 2); l_84 = safe_sub_func_int16_t_s_s(l_84, 1))
                    { /* block id: 92 */
                        VECTOR(int8_t, 16) l_343 = (VECTOR(int8_t, 16))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x38L), 0x38L), 0x38L, 0x6BL, 0x38L, (VECTOR(int8_t, 2))(0x6BL, 0x38L), (VECTOR(int8_t, 2))(0x6BL, 0x38L), 0x6BL, 0x38L, 0x6BL, 0x38L);
                        VECTOR(int8_t, 8) l_346 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x7FL), 0x7FL), 0x7FL, 0x36L, 0x7FL);
                        VECTOR(int8_t, 16) l_348 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                        int8_t *l_356 = (void*)0;
                        int8_t *l_357 = (void*)0;
                        int8_t *l_370 = (void*)0;
                        int8_t *l_371 = (void*)0;
                        int8_t *l_372[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int16_t *l_374 = &p_1361->g_177;
                        int i, j;
                        (*l_154) = (((((VECTOR(uint8_t, 8))(l_337.s42163641)).s0 | (((~((safe_lshift_func_int8_t_s_u((((VECTOR(int64_t, 4))(p_61, ((VECTOR(int64_t, 2))(p_1361->g_342.ww)), (-5L))).w <= (((VECTOR(int8_t, 4))(l_343.s23cf)).y == ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(l_344.s1425)).yzzywyyx, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))((-1L), 3L, ((VECTOR(int8_t, 2))(0x6FL, (-6L))), 0x13L, 0x24L, (*p_1361->g_171), ((VECTOR(int8_t, 8))(l_345.s56702563)), (-1L))), ((VECTOR(int8_t, 2))(l_346.s13)).yyxxyxyyyyyxyyyx))).s75, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(l_347.yyxyxyzy)).s5722107140671272, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_348.s21)).yyxyxyxxxyxxxyyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_349.sf1)))))).yyxyxxyyyxxyxxxy))), ((VECTOR(int8_t, 16))((*p_1361->g_171), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_350.xyxy)).even, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(0x12L, (-1L))).xxxy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(l_351.xyyx)).yyzzxwxwxxxyzwxz, ((VECTOR(int8_t, 16))((-1L), (p_1361->g_299.y |= (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_u((((p_1361->g_197.s3 = ((*p_1361->g_171) ^= (-1L))) | (safe_div_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (((((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1361->g_360.sf4d5)), ((VECTOR(int32_t, 8))(0x393915F3L, (-10L), (-3L), (-1L), ((VECTOR(int32_t, 2))(0x08B05C5EL, (-2L))), (-3L), (-1L))), (((safe_sub_func_int16_t_s_s(((*l_374) = ((p_1361->g_comm_values[p_1361->tid] = (safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(0x579FBAA5E398C09AL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x5DABB08929981376L, 0x63939D3CBDAFBA5EL, (-8L), 0x04B6786FB1533807L)).even)), 0x69CE892552B3754FL, 0x09CE8F9D4D038C0AL, ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_1361->g_276.x, ((VECTOR(int64_t, 2))(l_364.yx)), 0x0932A1B8BC197952L)))).zywyyxwz, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(p_1361->g_185.w, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_365.xy)).xyxxxxxyxxyxxxxy)).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x5EFAC72EE65999DEL, (!(safe_add_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (safe_lshift_func_int8_t_s_u((p_1361->g_190.x = ((GROUP_DIVERGE(0, 1) , 0x09C7792C4FCC782DL) != (((((*p_60) ^ p_63) < 0x239BC3E9L) , p_1361->g_360.s2) ^ p_61))), p_1361->g_216.s0))))), ((VECTOR(int64_t, 2))((-10L))), ((VECTOR(int64_t, 4))(0x2E41803213D62D1CL))))))))).odd)), ((VECTOR(int64_t, 2))(0x1D2CC4C94D34FE0EL)), 0x515E152BCCA4DBEAL, (-1L))).s75)), (-6L), 0x2447E968C3326939L, l_373, (-1L), 0x23B536FDD789A14DL)).s5254502675653026, ((VECTOR(int64_t, 16))(0x1E9892584349C25FL))))).sbec3, ((VECTOR(int64_t, 4))(0L))))), (int64_t)l_348.se, (int64_t)0x4E1EFC5A2E17A746L))))).xywxzzwy))), 0x1139DCE50C170376L, 0x3C2339C5A72799BAL, 0L)), (int64_t)p_1361->g_comm_values[p_1361->tid], (int64_t)l_346.s7))).s8))) >= p_61)), 0xC271L)) , (void*)0) != l_317), 0L, 0x03163E40L, 0L)).even))).s7 , p_63) == p_61) && 0x7F9DE862E44AEDC0L)))) | p_63), p_1361->g_183.z)) & p_63) || p_1361->g_187.s6), p_63))), 3L, ((VECTOR(int8_t, 8))(0x6AL)), (-1L), (-1L), 1L, 0x69L, 1L))))).s75)).yxyy, ((VECTOR(int8_t, 4))((-2L)))))).wxxxwxyz, ((VECTOR(int8_t, 8))(0L))))).s14, ((VECTOR(int8_t, 2))(3L))))), ((VECTOR(int8_t, 8))(0x0FL)), ((VECTOR(int8_t, 4))(0x44L)), (-1L)))))).odd)).s45, (int8_t)0x4EL)))))).xxyyxyyx))).s1)), p_1361->g_218.x)) | 0xE954L)) , p_61) , p_1361->g_215.s2)) && 65535UL) || (-5L));
                    }
                }
                (*l_154) ^= (l_375 == &p_1361->g_177);
                if ((*p_62))
                    break;
            }
            else
            { /* block id: 104 */
                VECTOR(int32_t, 4) l_385 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x722FF232L), 0x722FF232L);
                VECTOR(int64_t, 16) l_386 = (VECTOR(int64_t, 16))(0x1434FFD99FF9564FL, (VECTOR(int64_t, 4))(0x1434FFD99FF9564FL, (VECTOR(int64_t, 2))(0x1434FFD99FF9564FL, 9L), 9L), 9L, 0x1434FFD99FF9564FL, 9L, (VECTOR(int64_t, 2))(0x1434FFD99FF9564FL, 9L), (VECTOR(int64_t, 2))(0x1434FFD99FF9564FL, 9L), 0x1434FFD99FF9564FL, 9L, 0x1434FFD99FF9564FL, 9L);
                int32_t l_401 = 0x290A2F5CL;
                int32_t *l_404 = (void*)0;
                VECTOR(int32_t, 2) l_411 = (VECTOR(int32_t, 2))(0x15AAA577L, 1L);
                VECTOR(int32_t, 16) l_420 = (VECTOR(int32_t, 16))(0x7559879DL, (VECTOR(int32_t, 4))(0x7559879DL, (VECTOR(int32_t, 2))(0x7559879DL, (-2L)), (-2L)), (-2L), 0x7559879DL, (-2L), (VECTOR(int32_t, 2))(0x7559879DL, (-2L)), (VECTOR(int32_t, 2))(0x7559879DL, (-2L)), 0x7559879DL, (-2L), 0x7559879DL, (-2L));
                int i;
                for (l_334 = 0; (l_334 != 13); l_334 = safe_add_func_uint32_t_u_u(l_334, 1))
                { /* block id: 107 */
                    uint8_t *l_392 = (void*)0;
                    uint8_t *l_393 = (void*)0;
                    uint8_t *l_394 = &l_282;
                    int32_t l_396 = 0x7126A893L;
                    int64_t *l_397 = (void*)0;
                    int64_t *l_398 = (void*)0;
                    int64_t *l_399 = (void*)0;
                    int64_t *l_400 = (void*)0;
                    p_1361->g_360.s5 = (l_401 &= (((*l_375) |= (l_378 != &p_1361->g_172)) ^ (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(9L, 0x6A72L)))).hi | ((l_396 = (safe_mod_func_int16_t_s_s((((0x93L >= (safe_mod_func_uint64_t_u_u(p_1361->g_383, ((VECTOR(uint64_t, 4))(0x4FC2709252EF558FL, 0UL, 1UL, 4UL)).x))) < ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(p_1361->g_384.wwwwyywwywxyzwwx)).s0ab4, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(l_385.xxwy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0x9A75A4CFL)).xyxx))))).wxxwzywy, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(0x77C9F7C0B4E08BB7L, 1L, (-1L), ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(l_386.s61)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_387.ww)), (-1L), 0L)).lo))), 0x741A4A350E4DEC48L, 0x13394B5E2410F8B5L, (-1L))).s3021123771634040, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-4L), 0L)), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1361->g_388.zx)), 3L, 0x7B000819BFB4BDE6L)).even, ((VECTOR(int64_t, 8))(l_389.scf775939)).s32))), (((FAKE_DIVERGE(p_1361->global_1_offset, get_global_id(1), 10) || l_386.s2) < p_61) == (((FAKE_DIVERGE(p_1361->group_0_offset, get_group_id(0), 10) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((((*l_394) = (p_1361->g_15 && ((((void*)0 == &p_1361->g_251) & p_61) < p_63))) > l_395) >= p_61), 0x4895F459A42D45EDL, 0x6562B43E68DD99FEL, 0x017344DE312AAC90L, 0x0CF0AD12C9894A63L, 0x776FCC83216532A5L, l_119, 0x30D92C981E538145L, (-1L), ((VECTOR(int64_t, 4))(0x02F41B75AB054E17L)), ((VECTOR(int64_t, 2))(0x41646A34A7A84232L)), 1L)).s7c34)).y , (*p_59))) <= p_63) , l_396)), p_1361->g_187.s4, (-7L), ((VECTOR(int64_t, 8))(0x28791A95AA77192AL)), (-6L))).s04))).yxyyyyyyxxyxxyyy, ((VECTOR(int64_t, 16))(0L))))).hi, ((VECTOR(int64_t, 8))(0L))))))).odd))).zwyzxwywxyywzxzy)).s4402, ((VECTOR(int64_t, 4))(0x3CCC2EEFBC2B218DL))))).y) == 0x1DA6848B9F5DFAA8L), p_1361->g_183.y))) >= p_1361->g_15))));
                    p_1361->g_360.s0 |= (*p_59);
                    (*l_115) = p_59;
                    for (l_114 = 0; (l_114 != (-13)); l_114 = safe_sub_func_int16_t_s_s(l_114, 1))
                    { /* block id: 117 */
                        uint32_t l_405 = 4294967292UL;
                        l_404 = ((*l_115) = p_59);
                        (*l_115) = p_62;
                        l_405++;
                    }
                }
                for (l_270 = 0; (l_270 >= (-15)); l_270 = safe_sub_func_uint32_t_u_u(l_270, 9))
                { /* block id: 126 */
                    uint64_t l_424 = 0xF59D9AE047A6F2C7L;
                    (*l_115) = p_59;
                    if ((*p_60))
                        break;
                    l_410 = l_410;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((p_1361->g_184.se ^= ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_411.yyyyyyyx)))).even, ((VECTOR(int32_t, 2))((-1L), (-3L))).yyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x03D2CDD2L, (-6L))).yyxyxyxyyyxyyyxy)).s6827))).w), ((VECTOR(int32_t, 2))(l_412.s33)), 0x6D7E2744L)).yxxxwywx)).s7)
                    { /* block id: 131 */
                        int16_t l_413 = (-4L);
                        uint16_t *l_423 = (void*)0;
                        if ((**l_115))
                            break;
                        l_413 = (-1L);
                        atomic_xor(&p_1361->l_atomic_reduction[0], ((((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1361->g_416.yxyy)).w, (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(p_1361->g_417.s07512070)).s61))), ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(0x43L, (safe_rshift_func_int8_t_s_s(p_63, 5)), 1UL, 0x71L)), 0UL, 1UL, 0x3CL)).s54, ((VECTOR(uint8_t, 16))((((VECTOR(int32_t, 8))(l_420.s753a9361)).s2 , ((**l_115) && (p_61 & ((*l_271) = (+(0x72L <= (((p_1361->g_15 , (p_61 , 0L)) ^ (((p_1361->g_233.x ^= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x764AL, 0xDAF2L)), 65527UL, 65535UL)).x) , ((((void*)0 == p_1361->g_312) | 0L) >= l_424)) == p_61)) > 0x0052A782L))))))), ((VECTOR(uint8_t, 2))(0x7BL)), ((VECTOR(uint8_t, 8))(0x93L)), ((VECTOR(uint8_t, 2))(2UL)), ((VECTOR(uint8_t, 2))(1UL)), 252UL)).sbc))).yyyyxyxyxyxxyxyy, ((VECTOR(uint8_t, 16))(255UL))))).s82ea)).even)), 65526UL, 0xDC98L)).yxxxwwyy, ((VECTOR(uint16_t, 8))(65534UL)), ((VECTOR(uint16_t, 8))(65527UL))))).s12, ((VECTOR(uint16_t, 2))(65527UL))))).yyyy))).zzyxzxyw)).s2 & p_63))) > 0x20BD113DL) <= 7UL) || (**l_115)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1361->v_collective += p_1361->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 137 */
                        (*l_115) = p_60;
                    }
                }
                return p_1361->g_276.x;
            }
            if (((safe_add_func_int32_t_s_s(((void*)0 == &p_1361->g_251), (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(l_429.zxyzxwzw)).s2, 4)))) != p_1361->g_153.s3))
            { /* block id: 143 */
                uint64_t *l_436 = (void*)0;
                int32_t l_446[2][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
                uint16_t *l_452 = (void*)0;
                uint16_t *l_453 = (void*)0;
                uint16_t *l_454 = (void*)0;
                uint16_t *l_455 = (void*)0;
                uint16_t *l_456 = (void*)0;
                uint16_t *l_457 = (void*)0;
                uint16_t *l_458 = (void*)0;
                uint16_t *l_459 = (void*)0;
                uint16_t *l_460 = (void*)0;
                uint16_t *l_461 = (void*)0;
                int32_t *l_464[8] = {&l_395,&l_446[0][0],&l_395,&l_395,&l_446[0][0],&l_395,&l_395,&l_446[0][0]};
                int8_t l_501 = 0x2BL;
                VECTOR(int32_t, 4) l_502 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 1L), 1L);
                VECTOR(int8_t, 8) l_518 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-2L)), (-2L)), (-2L), 2L, (-2L));
                VECTOR(int32_t, 8) l_547 = (VECTOR(int32_t, 8))(0x27CA5D77L, (VECTOR(int32_t, 4))(0x27CA5D77L, (VECTOR(int32_t, 2))(0x27CA5D77L, 0x5DE420B7L), 0x5DE420B7L), 0x5DE420B7L, 0x27CA5D77L, 0x5DE420B7L);
                int16_t l_558 = 0x406AL;
                uint32_t *l_592 = (void*)0;
                uint32_t *l_593 = (void*)0;
                uint32_t *l_594 = &p_1361->g_546;
                VECTOR(uint16_t, 8) l_599 = (VECTOR(uint16_t, 8))(0xDE43L, (VECTOR(uint16_t, 4))(0xDE43L, (VECTOR(uint16_t, 2))(0xDE43L, 0x2DFBL), 0x2DFBL), 0x2DFBL, 0xDE43L, 0x2DFBL);
                uint16_t *l_603[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_603[i] = (void*)0;
                for (l_270 = 15; (l_270 == (-22)); l_270 = safe_sub_func_int16_t_s_s(l_270, 5))
                { /* block id: 146 */
                    int8_t l_432 = 1L;
                    uint8_t **l_433 = &l_165;
                    uint32_t *l_440 = (void*)0;
                    uint32_t *l_441 = &l_84;
                    int32_t l_444 = (-1L);
                    int32_t l_445 = 0x5CDED6DDL;
                    int32_t l_448 = (-5L);
                    p_62 = (((*l_441) = ((((*l_433) = (l_432 , &p_1361->g_138)) != &p_1361->g_138) ^ (safe_sub_func_int64_t_s_s(((l_436 != ((0x63F1DD14L | p_61) , l_436)) <= ((p_1361->g_342.y | ((p_61 < l_439) == 1L)) , p_63)), p_61)))) , p_59);
                    for (l_81 = (-30); (l_81 == 7); ++l_81)
                    { /* block id: 152 */
                        int16_t l_447 = 0x1151L;
                        (*l_115) = p_60;
                        --l_449;
                    }
                }
                if ((p_1361->g_73 != (((p_61 <= ((VECTOR(uint8_t, 2))(255UL, 3UL)).hi) >= (-1L)) , (((((p_1361->g_234.s0 = p_61) == p_63) , 4294967292UL) >= 0x18F2A692L) , &l_84))))
                { /* block id: 158 */
                    int32_t l_467 = (-6L);
                    for (l_84 = 0; (l_84 >= 25); l_84 = safe_add_func_uint16_t_u_u(l_84, 2))
                    { /* block id: 161 */
                        uint8_t *l_474 = &p_1361->g_138;
                        int8_t l_486 = 0x01L;
                        VECTOR(uint8_t, 4) l_495 = (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 249UL), 249UL);
                        int i;
                        l_464[7] = p_60;
                        l_467 = (safe_div_func_uint64_t_u_u(1UL, (+p_1361->g_360.s2)));
                        l_302.sd = ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_468.sa7ed431f)).s5565227242600506)).sc <= ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1361->g_469.xy)).xxxyxyyx)).s6) & ((safe_add_func_uint8_t_u_u(((*l_474) = (safe_lshift_func_int16_t_s_u(0x7889L, p_1361->g_264.s9))), (((((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x6EL, 0x5FL)).yyxxxyxx)).odd)).yxxxywwzywzzzywx, ((VECTOR(int8_t, 2))(0x64L, 0L)).yxyyyyxxxyyyyxyy))).s1, (safe_mul_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_481.xx)).xyxyyyxx)).s5 | ((*l_271) &= (safe_add_func_uint16_t_u_u((0xAFL > ((p_61 <= (((safe_sub_func_int64_t_s_s((((VECTOR(uint8_t, 2))(1UL, 0UL)).lo || l_486), (safe_mul_func_int16_t_s_s((0xA324L ^ FAKE_DIVERGE(p_1361->local_1_offset, get_local_id(1), 10)), ((((VECTOR(uint8_t, 16))(p_1361->g_489.s2510626426514327)).s1 >= ((((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1361->g_490.yxxx)), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(8UL, 0x87L)), ((VECTOR(uint8_t, 4))(p_1361->g_491.sf1c3)).hi))).yxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1361->g_492.yyyxyyyx)).s4242537530014254)).sc766))), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1361->g_493.xx)), 250UL, 0xDFL)).odd, ((VECTOR(uint8_t, 8))(0x1DL, ((VECTOR(uint8_t, 2))(l_494.wz)), 0x3AL, l_467, ((VECTOR(uint8_t, 2))(255UL, 1UL)), 0x91L)).s73, ((VECTOR(uint8_t, 8))(l_495.xwyxzxzy)).s00))).yyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(l_496.se58696f5)).even, ((VECTOR(uint8_t, 4))(l_497.s6468))))).xywzywzy)).odd))))).odd, ((VECTOR(uint8_t, 2))(p_1361->g_498.s27)).yxxy))).y != (((safe_add_func_int16_t_s_s(((void*)0 != &l_114), p_1361->g_228.s4)) | GROUP_DIVERGE(0, 1)) , l_467)) , l_501)) <= (*p_1361->g_171)))))) , p_59) == (void*)0)) , 0x24L)), 0x3C32L)))), p_1361->g_233.x)) > (*p_59)) | p_1361->g_197.s4), 0x2EB1L)))) | p_1361->g_215.s3) , (*p_62)) | p_1361->g_416.x) , (*p_1361->g_171)))) > (*p_59)));
                        return p_1361->g_228.s3;
                    }
                    l_464[3] = (*l_115);
                }
                else
                { /* block id: 170 */
                    int8_t l_512 = 0L;
                    VECTOR(uint64_t, 2) l_532 = (VECTOR(uint64_t, 2))(0x23340C487ED9A17EL, 0xB25301AEF2333162L);
                    VECTOR(int8_t, 8) l_540 = (VECTOR(int8_t, 8))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x34L), 0x34L), 0x34L, 0x6BL, 0x34L);
                    int32_t l_548 = 6L;
                    int32_t l_549 = 0L;
                    int32_t l_550 = (-1L);
                    int32_t l_552 = 0x1C3B882DL;
                    int32_t l_553[8];
                    int32_t l_557 = 0x44ACD211L;
                    uint64_t l_563 = 0x45B4A7AC238ED5DBL;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_553[i] = 0x5157D89CL;
                    if (((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_502.wzxz)).xxyywzzzwyyzwwzz, ((VECTOR(int32_t, 8))(0x1FA9CFC8L, 0x2A90F2EBL, 1L, (-1L), 0x0B53A6F1L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_503.xxyyyyyyyxyyyyxy)).sd3, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_504.xx)), 0x7DF75924L, 0L)).even))), 0x7BD29092L)).s5147405424526052, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_505.zx)), (*p_60), 0x236345A4L, (((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_506.yxxy)), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(p_1361->g_507.xx)).xyxx, ((VECTOR(int32_t, 8))(l_508.sdc03bb6b)).hi))).even)), (-1L), (p_1361->g_184.sa ^= (p_1361->g_2 != (void*)0)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_509.xxxxyyyxyyyxxyyy)).sb7)), (safe_sub_func_int32_t_s_s(l_512, ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_515.sb8d6590a)).s47)).odd, p_63)) != (((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(8L, (GROUP_DIVERGE(1, 1) <= 3UL), 0x2FL, 0x76L)).hi, ((VECTOR(int8_t, 2))(l_518.s44))))).even != ((2UL & (&l_317 == l_521)) < p_63))))), ((VECTOR(int32_t, 4))(2L)), ((VECTOR(int32_t, 2))(3L)), ((VECTOR(int32_t, 2))((-1L))), 0x3802D708L)))).sa91b, ((VECTOR(int32_t, 4))(0x0C75282DL)), ((VECTOR(int32_t, 4))((-1L)))))))))).lo, ((VECTOR(int32_t, 4))(0x38E054ACL))))), ((VECTOR(int32_t, 4))(1L))))).z , (*p_62)), (*p_62), ((VECTOR(int32_t, 2))(0x39527ACBL)), (*p_62), 9L, ((VECTOR(int32_t, 2))((-3L))), (*p_62), l_512, (-1L), 0x7BACA19DL)).sce44)).ywxyzyyywwwwwxxz, ((VECTOR(int32_t, 16))(0x3D7FF099L)), ((VECTOR(int32_t, 16))(6L)))))))).hi, ((VECTOR(int32_t, 8))(0x59D4483DL))))).s3)
                    { /* block id: 172 */
                        uint64_t *l_533[9][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t l_539[4][9][2] = {{{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L}},{{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L}},{{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L}},{{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L},{0x2311C290L,0x725F4968L}}};
                        VECTOR(int8_t, 16) l_541 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 0L), 0L), 0L, 0x24L, 0L, (VECTOR(int8_t, 2))(0x24L, 0L), (VECTOR(int8_t, 2))(0x24L, 0L), 0x24L, 0L, 0x24L, 0L);
                        int16_t *l_544[1];
                        uint32_t *l_545 = &p_1361->g_546;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_544[i] = (void*)0;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1361->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[(safe_mod_func_uint32_t_u_u((((*l_545) = (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_532.yx)).xxyyyyxy)).s3 >= (((*p_59) <= (&l_439 != l_533[2][4])) & (65529UL <= (safe_div_func_int16_t_s_s((0x4499568D2972B2A5L | (((safe_add_func_uint64_t_u_u(((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(p_1361->g_538.xx)).yxyyxyyyxyxxyxyx, (int16_t)((l_539[2][7][1] <= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(l_540.s1662132703736557)).lo))).odd, ((VECTOR(int8_t, 8))(l_541.s39f71b14)).odd))).hi)).even) == ((((p_1361->g_228.s6 & (p_1361->g_542 == l_130)) > (*p_59)) , l_544[0]) != &p_1361->g_177)), (int16_t)p_1361->g_417.s2))).s5036, (int16_t)p_61))).lo)).yxxy)).z != p_63) , p_61), (-10L))) , (*p_1361->g_171)) , 8UL)), 65529UL))))), 0x663AA398E2A333B4L)) >= p_61), p_1361->g_469.y)), 0xEC20C560677D209EL)) , 0x6BL) == p_1361->g_197.s5), (-1L))) > 9L), 0x42L))) , p_61), 10))][(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))]));
                    }
                    else
                    { /* block id: 177 */
                        p_1361->g_187.s6 ^= ((VECTOR(int32_t, 2))(l_547.s46)).hi;
                        l_548 &= 0x7D8C96DBL;
                        return p_61;
                    }
                    if ((*p_62))
                        continue;
                    ++l_554;
                    ++l_563;
                }
                p_1361->g_187.s3 |= ((VECTOR(int32_t, 16))(0x6E409A25L, (p_1361->g_492.y == (((safe_add_func_uint8_t_u_u(p_63, (safe_mul_func_uint16_t_u_u(0x2FBDL, p_1361->g_228.s1)))) , (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((VECTOR(int32_t, 16))(p_1361->g_580.se2e3dcf37a52c755)).sa || ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_581.yx)).xxyx, ((VECTOR(int32_t, 16))(p_1361->g_582.xyyxyyyxxyyyyxyy)).s23ab))), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0L, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(p_1361->g_583.xx)).xxxxyyyy))).s14)), ((VECTOR(int32_t, 8))((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(65535UL, 65534UL, 9UL, 0x6120L, 65535UL, 0x861CL, 1UL, 65535UL)).s4660734124311555)).sf8))), 65535UL, 1UL)).zwyzxzyw, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(3UL, ((VECTOR(uint16_t, 4))(l_586.s7023)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_587.sc7e8c5da6e12b0c4)).sc0)), 0x2D99L)).s26, ((VECTOR(uint16_t, 8))(65535UL, ((safe_div_func_int16_t_s_s(p_63, (safe_lshift_func_uint16_t_u_u((((*l_594) &= 0xE2537B35L) , (l_604 = ((safe_sub_func_uint16_t_u_u((l_602[3] &= ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(p_1361->g_597.s943e65f7bfcd60de)).s0f70, ((VECTOR(uint16_t, 8))(l_598.yxxxyyyy)).hi, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(l_599.s5500655673044636)).even, (uint16_t)((p_63 ^ ((p_1361->g_597.s7 = (safe_rshift_func_int8_t_s_s(p_63, 0))) != p_1361->g_492.y)) > GROUP_DIVERGE(1, 1)), (uint16_t)p_61))).hi))).x), p_1361->g_507.y)) , 0x42E2L))), 7)))) < 0x7A8B5632B50C1EABL), 0xAE49L, 0UL, 65535UL, p_61, 65534UL, 9UL)).s42))).xxxyyyyy))).s5, 0x74E6L)), ((VECTOR(int32_t, 2))(0x3B34E501L)), ((VECTOR(int32_t, 4))(0x39FDCE7FL)), (-1L))), (*p_62), ((VECTOR(int32_t, 2))(0x4957B2F7L)), 0x0A44FEC0L)))).s78, ((VECTOR(int32_t, 2))(6L))))).xyxy))).zzxzywwwzxzwzxxw)).odd, ((VECTOR(int32_t, 8))(0x2375E85CL))))), 1L, 0x0563D9E6L, ((VECTOR(int32_t, 2))(0x6FA9BF8DL)), ((VECTOR(int32_t, 4))(5L)))).sd) == p_61), l_605)), p_63)), p_1361->g_216.s3)), 0x36C9L)), p_63))) || p_63)), l_606, ((VECTOR(int32_t, 8))(0x7C3B305DL)), (*p_59), 0x675A86DCL, (-1L), 0L, 9L)).s0;
            }
            else
            { /* block id: 191 */
                if ((*p_60))
                    break;
                ++l_607;
            }
        }
        else
        { /* block id: 195 */
            int8_t l_610 = 0x71L;
            int32_t ****l_676 = &l_249;
            if ((l_270 = 0x72269957L))
            { /* block id: 197 */
                uint16_t l_611 = 0UL;
                volatile int64_t **l_614[2][8] = {{(void*)0,(void*)0,(void*)0,&p_1361->g_542,&p_1361->g_542,&p_1361->g_542,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1361->g_542,&p_1361->g_542,&p_1361->g_542,(void*)0,(void*)0}};
                int i, j;
                l_611 &= l_610;
                for (l_119 = 21; (l_119 < 24); l_119 = safe_add_func_uint64_t_u_u(l_119, 7))
                { /* block id: 201 */
                    l_614[1][1] = &p_1361->g_542;
                    if ((*p_62))
                        continue;
                }
            }
            else
            { /* block id: 205 */
                if ((atomic_inc(&p_1361->g_atomic_input[55 * get_linear_group_id() + 25]) == 6))
                { /* block id: 207 */
                    int32_t l_615 = 2L;
                    int32_t l_648 = 0x5E8FFD8CL;
                    uint64_t l_649 = 0x4AF8603F4D7E246EL;
                    uint8_t l_650 = 0UL;
                    int64_t l_651 = 1L;
                    int16_t l_652 = 0L;
                    if (l_615)
                    { /* block id: 208 */
                        VECTOR(int32_t, 16) l_616 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x75716A0DL), 0x75716A0DL), 0x75716A0DL, 1L, 0x75716A0DL, (VECTOR(int32_t, 2))(1L, 0x75716A0DL), (VECTOR(int32_t, 2))(1L, 0x75716A0DL), 1L, 0x75716A0DL, 1L, 0x75716A0DL);
                        uint16_t l_617[2];
                        int64_t l_620 = 0x4AC7D0A682A6BEBCL;
                        uint16_t l_621[3];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_617[i] = 0x3324L;
                        for (i = 0; i < 3; i++)
                            l_621[i] = 0x7B0CL;
                        l_615 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_616.sd75cfbc0)).s76)).hi;
                        l_617[0]++;
                        l_615 ^= 0x70FF3880L;
                        l_621[2] = (l_615 ^= l_620);
                    }
                    else
                    { /* block id: 214 */
                        uint32_t l_622[6] = {0xE4F42FFFL,0x04D0CF85L,0xE4F42FFFL,0xE4F42FFFL,0x04D0CF85L,0xE4F42FFFL};
                        int32_t l_625[9][10][2] = {{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}},{{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL},{3L,0x70C598AAL}}};
                        int32_t *l_624[9][8][3] = {{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}},{{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]},{&l_625[4][6][1],&l_625[4][6][1],&l_625[6][4][1]}}};
                        int32_t **l_623 = &l_624[0][2][2];
                        VECTOR(int8_t, 16) l_626 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-6L)), (-6L)), (-6L), (-3L), (-6L), (VECTOR(int8_t, 2))((-3L), (-6L)), (VECTOR(int8_t, 2))((-3L), (-6L)), (-3L), (-6L), (-3L), (-6L));
                        uint8_t l_627 = 0UL;
                        VECTOR(int8_t, 8) l_628 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 7L), 7L), 7L, (-5L), 7L);
                        int32_t l_629 = 0x7DA83968L;
                        VECTOR(int8_t, 8) l_630 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x55L), 0x55L), 0x55L, (-1L), 0x55L);
                        VECTOR(int8_t, 4) l_631 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2EL), 0x2EL);
                        VECTOR(int8_t, 8) l_632 = (VECTOR(int8_t, 8))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 7L), 7L), 7L, 0x51L, 7L);
                        VECTOR(int8_t, 16) l_633 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-9L)), (-9L)), (-9L), (-4L), (-9L), (VECTOR(int8_t, 2))((-4L), (-9L)), (VECTOR(int8_t, 2))((-4L), (-9L)), (-4L), (-9L), (-4L), (-9L));
                        uint64_t l_634[10] = {0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L,0xFD53A7DB99FDDB41L};
                        VECTOR(int8_t, 4) l_635 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x43L), 0x43L);
                        uint64_t l_636 = 0x50CB6D046886716FL;
                        int32_t l_637 = 0x5B26339FL;
                        uint64_t l_638 = 0x37EA13E0726CCF65L;
                        VECTOR(int8_t, 4) l_639 = (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, (-1L)), (-1L));
                        int16_t l_640 = 1L;
                        VECTOR(int8_t, 4) l_641 = (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x5EL), 0x5EL);
                        VECTOR(int8_t, 8) l_642 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L));
                        VECTOR(int8_t, 16) l_643 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L), (VECTOR(int8_t, 2))(1L, (-7L)), (VECTOR(int8_t, 2))(1L, (-7L)), 1L, (-7L), 1L, (-7L));
                        int32_t l_644 = 0x34AA2245L;
                        uint32_t l_645 = 0xFBA37C8DL;
                        int32_t *l_646 = &l_625[5][0][1];
                        int32_t *l_647 = &l_625[5][2][1];
                        int i, j, k;
                        l_615 ^= l_622[4];
                        l_623 = (void*)0;
                        l_615 |= (((VECTOR(int8_t, 16))(l_626.s1, l_627, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(0x38L, 0x07L, (-9L), 0x5BL)).hi, ((VECTOR(int8_t, 2))(0x68L, 0x18L))))), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(0x0DL, 0x67L)).xxyyyxxyxxxyxyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_628.s7340437615767540)).s9f8d, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(0x06L, (-1L))), (int8_t)0x5EL, (int8_t)l_629))).xxyxyxxxyxxxxxyy, ((VECTOR(int8_t, 16))(l_630.s1217043524563406))))).lo)).even))).lo)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(0x33L, ((VECTOR(int8_t, 2))(l_631.zw)).lo, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_632.s0305)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_633.se5)), (int8_t)l_634[8]))))), (-8L), 0x2BL)).hi, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7CL, 0x02L)), (-1L), (-1L))).zxwyxxzw)).s14)).yxxy))), 0L, 0x45L)).odd, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x44L, 1L)).xxxy))))), ((VECTOR(int8_t, 2))(l_635.wx)).yxyy))))).xwzxyzywyzyywzyw)).s9519)))), 0x47L, (l_636 , (l_638 = l_637)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_639.xz)))), l_640, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_641.xzxxwzwz)).s51, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_642.s2272073505664145)).sdc)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_643.s67efc2ec477e78ae)).sbf)))), l_644, 0x6CL, 0x1BL, 1L)), ((VECTOR(int8_t, 8))(0x48L))))).s71))), ((VECTOR(int8_t, 2))(0x3FL))))), 9L, (-8L), 0L))))).sc2, ((VECTOR(int8_t, 2))(0x1CL))))), ((VECTOR(int8_t, 2))(0x0BL)), 1L, 0L)).s63)))), ((VECTOR(int8_t, 8))((-1L))), l_645, ((VECTOR(int8_t, 2))(0x0CL)), (-5L))).s4 , 8L);
                        l_647 = l_646;
                    }
                    l_650 = (l_648 = (l_649 = l_648));
                    if ((l_651 , l_652))
                    { /* block id: 224 */
                        uint64_t l_653[7][4] = {{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L},{0UL,0UL,0UL,0xAC02662A52D79667L}};
                        int16_t l_656 = 8L;
                        int16_t l_657[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_657[i] = 0x4F88L;
                        l_648 |= 1L;
                        l_653[6][2]--;
                        l_615 |= l_656;
                        l_648 = l_657[1];
                    }
                    else
                    { /* block id: 229 */
                        uint32_t l_658 = 0x04DB7400L;
                        int32_t l_660 = 5L;
                        int32_t *l_659 = &l_660;
                        int32_t *l_661 = &l_660;
                        int32_t *l_662[8];
                        int32_t *l_663[5][1][7];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_662[i] = &l_660;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_663[i][j][k] = &l_660;
                            }
                        }
                        l_661 = (l_658 , l_659);
                        l_663[2][0][3] = l_662[1];
                    }
                    for (l_651 = 24; (l_651 > 16); l_651--)
                    { /* block id: 235 */
                        uint8_t l_666 = 255UL;
                        int32_t l_670 = (-1L);
                        int32_t *l_669 = &l_670;
                        uint64_t l_671 = 0x2456BE99E1631BBDL;
                        l_666++;
                        l_669 = (void*)0;
                        l_615 = (l_671 , ((VECTOR(int32_t, 2))(0x37BC4D68L, 0x476C3AC9L)).odd);
                    }
                    unsigned int result = 0;
                    result += l_615;
                    result += l_648;
                    result += l_649;
                    result += l_650;
                    result += l_651;
                    result += l_652;
                    atomic_add(&p_1361->g_special_values[55 * get_linear_group_id() + 25], result);
                }
                else
                { /* block id: 240 */
                    (1 + 1);
                }
            }
            for (l_119 = (-9); (l_119 <= 53); l_119 = safe_add_func_int16_t_s_s(l_119, 9))
            { /* block id: 246 */
                for (l_270 = (-15); (l_270 < (-26)); --l_270)
                { /* block id: 249 */
                    uint64_t l_677 = 0x4F009CB431275E12L;
                    int32_t *l_682 = (void*)0;
                    int32_t l_683 = 0L;
                    if ((l_676 == &p_1361->g_250))
                    { /* block id: 250 */
                        uint32_t ***l_680 = &p_1361->g_678;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1361->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[(safe_mod_func_uint32_t_u_u(l_677, 10))][(safe_mod_func_uint32_t_u_u(p_1361->tid, 60))]));
                        p_1361->g_681 = ((*l_680) = p_1361->g_678);
                    }
                    else
                    { /* block id: 256 */
                        (*l_115) = (*l_115);
                        (*l_115) = p_60;
                    }
                    l_683 ^= (*p_59);
                }
            }
            return p_61;
        }
    }
    atomic_min(&p_1361->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int16_t_s_s(((l_410 == (void*)0) ^ ((*l_375) ^= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(l_686.sdaf0)), ((VECTOR(int16_t, 8))(0x2063L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1361->g_687.xxyy)), ((--(*l_130)) , (((safe_mod_func_uint32_t_u_u(p_63, ((safe_rshift_func_int16_t_s_s(p_63, ((((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x69D4D30FL, 1UL, 0x592E60DCL, 0xB332F675L)))), ((VECTOR(uint32_t, 4))(0xA7578702L, 1UL, 0x4FC2D3EEL, 9UL))))).z && ((VECTOR(uint32_t, 16))(p_1361->g_694.wwwywyzyzyzyyyxx)).sc) & ((p_1361->g_491.s6 != ((safe_mod_func_int32_t_s_s((-10L), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_697.yw)), 0UL, 1UL)).x)) || (0x65L && (((l_297.y = p_63) , (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-1L), 0x768AA26BD9CD3808L)))), ((VECTOR(int64_t, 16))(l_701.xzzwwwyxwwxyyyyw)).s87))), (p_1361->g_388.y = ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((((((2UL | l_708) , (*p_59)) | 0L) , &p_1361->g_546) == l_698[2]) & l_709), p_61)), p_1361->g_498.s0)) <= 0x47E0L)), 0x729E71114750A2F0L, (-1L), p_61, 0L, 0L)).s3 > FAKE_DIVERGE(p_1361->global_0_offset, get_global_id(0), 10)), 0xB9L))) , 0xDCL)))) , p_1361->g_546)))) , l_297.y))) , l_711[1]) != &p_1361->g_138)), 0x4F01L, 0x0A89L, (-5L))).even)), ((VECTOR(int16_t, 4))(0x2BACL)), ((VECTOR(int16_t, 4))(0L))))))), l_481.y, 4L, 1L)).lo))).wwzzzyxxzyzzwyyw)).s5)), 0xCE76L)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1361->v_collective += p_1361->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_1361->g_712;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_comm_values[i] = 1;
    struct S0 c_1362;
    struct S0* p_1361 = &c_1362;
    struct S0 c_1363 = {
        (void*)0, // p_1361->g_2
        0x240F2FDAL, // p_1361->g_15
        (VECTOR(uint8_t, 4))(0x39L, (VECTOR(uint8_t, 2))(0x39L, 247UL), 247UL), // p_1361->g_31
        (VECTOR(int32_t, 16))(0x29A26275L, (VECTOR(int32_t, 4))(0x29A26275L, (VECTOR(int32_t, 2))(0x29A26275L, 0x0A97D63FL), 0x0A97D63FL), 0x0A97D63FL, 0x29A26275L, 0x0A97D63FL, (VECTOR(int32_t, 2))(0x29A26275L, 0x0A97D63FL), (VECTOR(int32_t, 2))(0x29A26275L, 0x0A97D63FL), 0x29A26275L, 0x0A97D63FL, 0x29A26275L, 0x0A97D63FL), // p_1361->g_57
        (void*)0, // p_1361->g_73
        {{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}},{{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0},{&p_1361->g_73,&p_1361->g_73,(void*)0}}}, // p_1361->g_72
        &p_1361->g_72[2][2][1], // p_1361->g_71
        0xD0F2FE87A7CF8314L, // p_1361->g_75
        1UL, // p_1361->g_138
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xB5L), 0xB5L), 0xB5L, 255UL, 0xB5L, (VECTOR(uint8_t, 2))(255UL, 0xB5L), (VECTOR(uint8_t, 2))(255UL, 0xB5L), 255UL, 0xB5L, 255UL, 0xB5L), // p_1361->g_153
        (-6L), // p_1361->g_172
        &p_1361->g_172, // p_1361->g_171
        (-5L), // p_1361->g_177
        (VECTOR(uint32_t, 4))(0xD5CC336AL, (VECTOR(uint32_t, 2))(0xD5CC336AL, 9UL), 9UL), // p_1361->g_183
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int32_t, 2))(0L, (-4L)), (VECTOR(int32_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L)), // p_1361->g_184
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5EDEB66DL), 0x5EDEB66DL), // p_1361->g_185
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4DC75B22L), 0x4DC75B22L), 0x4DC75B22L, (-1L), 0x4DC75B22L), // p_1361->g_187
        (VECTOR(int8_t, 2))((-1L), 3L), // p_1361->g_190
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x63L), 0x63L), 0x63L, 0L, 0x63L), // p_1361->g_197
        (VECTOR(uint64_t, 2))(6UL, 18446744073709551607UL), // p_1361->g_213
        (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x9DDE8CCF3A6AD2B1L), 0x9DDE8CCF3A6AD2B1L), // p_1361->g_214
        (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL), 1UL, 18446744073709551608UL, 1UL), // p_1361->g_215
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD7695A7DD32748FFL), 0xD7695A7DD32748FFL), 0xD7695A7DD32748FFL, 18446744073709551615UL, 0xD7695A7DD32748FFL), // p_1361->g_216
        (VECTOR(uint64_t, 8))(0x6277879FF85546EAL, (VECTOR(uint64_t, 4))(0x6277879FF85546EAL, (VECTOR(uint64_t, 2))(0x6277879FF85546EAL, 2UL), 2UL), 2UL, 0x6277879FF85546EAL, 2UL), // p_1361->g_217
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), // p_1361->g_218
        (VECTOR(uint16_t, 8))(0x6C0EL, (VECTOR(uint16_t, 4))(0x6C0EL, (VECTOR(uint16_t, 2))(0x6C0EL, 0x88F0L), 0x88F0L), 0x88F0L, 0x6C0EL, 0x88F0L), // p_1361->g_228
        (VECTOR(uint16_t, 16))(0xD366L, (VECTOR(uint16_t, 4))(0xD366L, (VECTOR(uint16_t, 2))(0xD366L, 65529UL), 65529UL), 65529UL, 0xD366L, 65529UL, (VECTOR(uint16_t, 2))(0xD366L, 65529UL), (VECTOR(uint16_t, 2))(0xD366L, 65529UL), 0xD366L, 65529UL, 0xD366L, 65529UL), // p_1361->g_230
        (VECTOR(uint16_t, 8))(0xEF41L, (VECTOR(uint16_t, 4))(0xEF41L, (VECTOR(uint16_t, 2))(0xEF41L, 0UL), 0UL), 0UL, 0xEF41L, 0UL), // p_1361->g_232
        (VECTOR(uint16_t, 2))(0xF6C0L, 65528UL), // p_1361->g_233
        (VECTOR(uint16_t, 16))(0x4DE4L, (VECTOR(uint16_t, 4))(0x4DE4L, (VECTOR(uint16_t, 2))(0x4DE4L, 1UL), 1UL), 1UL, 0x4DE4L, 1UL, (VECTOR(uint16_t, 2))(0x4DE4L, 1UL), (VECTOR(uint16_t, 2))(0x4DE4L, 1UL), 0x4DE4L, 1UL, 0x4DE4L, 1UL), // p_1361->g_234
        (void*)0, // p_1361->g_251
        &p_1361->g_251, // p_1361->g_250
        (VECTOR(uint64_t, 16))(0x15D58CF7BA0BE485L, (VECTOR(uint64_t, 4))(0x15D58CF7BA0BE485L, (VECTOR(uint64_t, 2))(0x15D58CF7BA0BE485L, 0x271BB696564DB512L), 0x271BB696564DB512L), 0x271BB696564DB512L, 0x15D58CF7BA0BE485L, 0x271BB696564DB512L, (VECTOR(uint64_t, 2))(0x15D58CF7BA0BE485L, 0x271BB696564DB512L), (VECTOR(uint64_t, 2))(0x15D58CF7BA0BE485L, 0x271BB696564DB512L), 0x15D58CF7BA0BE485L, 0x271BB696564DB512L, 0x15D58CF7BA0BE485L, 0x271BB696564DB512L), // p_1361->g_264
        (VECTOR(uint16_t, 4))(0xF09FL, (VECTOR(uint16_t, 2))(0xF09FL, 1UL), 1UL), // p_1361->g_276
        (VECTOR(int32_t, 4))(0x6D5DD3BDL, (VECTOR(int32_t, 2))(0x6D5DD3BDL, (-9L)), (-9L)), // p_1361->g_279
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x63L), 0x63L), // p_1361->g_299
        (void*)0, // p_1361->g_312
        (VECTOR(int64_t, 4))(0x43FF9626EB68904DL, (VECTOR(int64_t, 2))(0x43FF9626EB68904DL, 0x7F4B088E5D2391D8L), 0x7F4B088E5D2391D8L), // p_1361->g_342
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x42B928C0L), 0x42B928C0L), 0x42B928C0L, 0L, 0x42B928C0L, (VECTOR(int32_t, 2))(0L, 0x42B928C0L), (VECTOR(int32_t, 2))(0L, 0x42B928C0L), 0L, 0x42B928C0L, 0L, 0x42B928C0L), // p_1361->g_360
        0x48L, // p_1361->g_383
        (VECTOR(int64_t, 4))(0x2FDB3A8825E790BDL, (VECTOR(int64_t, 2))(0x2FDB3A8825E790BDL, (-1L)), (-1L)), // p_1361->g_384
        (VECTOR(int64_t, 4))(0x07AF63780ED2A0CBL, (VECTOR(int64_t, 2))(0x07AF63780ED2A0CBL, (-1L)), (-1L)), // p_1361->g_388
        (VECTOR(uint16_t, 2))(0x047BL, 2UL), // p_1361->g_416
        (VECTOR(uint16_t, 8))(0xB1ABL, (VECTOR(uint16_t, 4))(0xB1ABL, (VECTOR(uint16_t, 2))(0xB1ABL, 65527UL), 65527UL), 65527UL, 0xB1ABL, 65527UL), // p_1361->g_417
        (VECTOR(uint64_t, 2))(2UL, 0x187C4224D6D7F987L), // p_1361->g_469
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 250UL), 250UL), 250UL, 255UL, 250UL), // p_1361->g_489
        (VECTOR(uint8_t, 2))(255UL, 0x33L), // p_1361->g_490
        (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL), 255UL, 252UL, 255UL, (VECTOR(uint8_t, 2))(252UL, 255UL), (VECTOR(uint8_t, 2))(252UL, 255UL), 252UL, 255UL, 252UL, 255UL), // p_1361->g_491
        (VECTOR(uint8_t, 2))(0x7FL, 0x7AL), // p_1361->g_492
        (VECTOR(uint8_t, 2))(0xE2L, 0xB4L), // p_1361->g_493
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_1361->g_498
        (VECTOR(int32_t, 2))((-2L), 0x75FD028CL), // p_1361->g_507
        (VECTOR(int16_t, 2))((-6L), 0x0402L), // p_1361->g_538
        {{{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL}},{{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL}},{{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL}},{{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL},{0x34108752630C877CL}}}, // p_1361->g_543
        &p_1361->g_543[1][0][0], // p_1361->g_542
        0UL, // p_1361->g_546
        {4L}, // p_1361->g_560
        (VECTOR(int64_t, 16))(0x6495111015C049A6L, (VECTOR(int64_t, 4))(0x6495111015C049A6L, (VECTOR(int64_t, 2))(0x6495111015C049A6L, 0x49965192FA41210DL), 0x49965192FA41210DL), 0x49965192FA41210DL, 0x6495111015C049A6L, 0x49965192FA41210DL, (VECTOR(int64_t, 2))(0x6495111015C049A6L, 0x49965192FA41210DL), (VECTOR(int64_t, 2))(0x6495111015C049A6L, 0x49965192FA41210DL), 0x6495111015C049A6L, 0x49965192FA41210DL, 0x6495111015C049A6L, 0x49965192FA41210DL), // p_1361->g_561
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C26FB53L), 0x1C26FB53L), 0x1C26FB53L, (-1L), 0x1C26FB53L, (VECTOR(int32_t, 2))((-1L), 0x1C26FB53L), (VECTOR(int32_t, 2))((-1L), 0x1C26FB53L), (-1L), 0x1C26FB53L, (-1L), 0x1C26FB53L), // p_1361->g_580
        (VECTOR(int32_t, 2))(0x61B10806L, (-4L)), // p_1361->g_582
        (VECTOR(int32_t, 2))(1L, (-1L)), // p_1361->g_583
        (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0x1A4FL), 0x1A4FL), 0x1A4FL, 8UL, 0x1A4FL, (VECTOR(uint16_t, 2))(8UL, 0x1A4FL), (VECTOR(uint16_t, 2))(8UL, 0x1A4FL), 8UL, 0x1A4FL, 8UL, 0x1A4FL), // p_1361->g_597
        (void*)0, // p_1361->g_679
        &p_1361->g_679, // p_1361->g_678
        (void*)0, // p_1361->g_681
        (VECTOR(int16_t, 2))(0x4341L, (-6L)), // p_1361->g_687
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), // p_1361->g_694
        0x663245773E8D22FEL, // p_1361->g_712
        (void*)0, // p_1361->g_726
        (void*)0, // p_1361->g_727
        &p_1361->g_560[0], // p_1361->g_729
        {6L,0x4AL,6L,6L,0x4AL,6L,6L}, // p_1361->g_743
        6L, // p_1361->g_744
        &p_1361->g_560[0], // p_1361->g_765
        (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x576866C7L), 0x576866C7L), 0x576866C7L, 4294967288UL, 0x576866C7L, (VECTOR(uint32_t, 2))(4294967288UL, 0x576866C7L), (VECTOR(uint32_t, 2))(4294967288UL, 0x576866C7L), 4294967288UL, 0x576866C7L, 4294967288UL, 0x576866C7L), // p_1361->g_789
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xA2L), 0xA2L), 0xA2L, 0UL, 0xA2L, (VECTOR(uint8_t, 2))(0UL, 0xA2L), (VECTOR(uint8_t, 2))(0UL, 0xA2L), 0UL, 0xA2L, 0UL, 0xA2L), // p_1361->g_800
        6UL, // p_1361->g_833
        (VECTOR(uint32_t, 2))(3UL, 0xAA2FF453L), // p_1361->g_843
        (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x7136L), 0x7136L), // p_1361->g_856
        0x7FA0F768F17C100FL, // p_1361->g_866
        (VECTOR(uint32_t, 8))(0x30C6EDD0L, (VECTOR(uint32_t, 4))(0x30C6EDD0L, (VECTOR(uint32_t, 2))(0x30C6EDD0L, 0x9AB2FA5FL), 0x9AB2FA5FL), 0x9AB2FA5FL, 0x30C6EDD0L, 0x9AB2FA5FL), // p_1361->g_869
        0xE74C48C648F0E500L, // p_1361->g_881
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), // p_1361->g_889
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), // p_1361->g_891
        (void*)0, // p_1361->g_901
        (-5L), // p_1361->g_921
        (VECTOR(uint16_t, 4))(0x36DAL, (VECTOR(uint16_t, 2))(0x36DAL, 6UL), 6UL), // p_1361->g_959
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L), (VECTOR(int32_t, 2))(4L, (-1L)), (VECTOR(int32_t, 2))(4L, (-1L)), 4L, (-1L), 4L, (-1L)), // p_1361->g_994
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL), // p_1361->g_1001
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x87L), 0x87L), // p_1361->g_1002
        {{{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L}},{{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L}},{{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L}},{{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L}},{{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L},{9UL,0x243C491AL,0x2A1BDEEDL,0x64AB320EL,0x8D547B50L,0x445F74E6L,0x445F74E6L}}}, // p_1361->g_1043
        &p_1361->g_560[0], // p_1361->g_1049
        0x7523B6C5L, // p_1361->g_1075
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 3UL), 3UL), // p_1361->g_1078
        (VECTOR(uint64_t, 2))(1UL, 0UL), // p_1361->g_1081
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x2317L), 0x2317L), // p_1361->g_1086
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), // p_1361->g_1095
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1361->g_1110
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2E51FEF4L), 0x2E51FEF4L), 0x2E51FEF4L, 0UL, 0x2E51FEF4L), // p_1361->g_1144
        (VECTOR(uint32_t, 2))(4294967295UL, 0xCC8BE33EL), // p_1361->g_1146
        (void*)0, // p_1361->g_1152
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), // p_1361->g_1225
        (VECTOR(int16_t, 16))(0x5F2FL, (VECTOR(int16_t, 4))(0x5F2FL, (VECTOR(int16_t, 2))(0x5F2FL, 1L), 1L), 1L, 0x5F2FL, 1L, (VECTOR(int16_t, 2))(0x5F2FL, 1L), (VECTOR(int16_t, 2))(0x5F2FL, 1L), 0x5F2FL, 1L, 0x5F2FL, 1L), // p_1361->g_1232
        (VECTOR(uint16_t, 2))(0x9649L, 65528UL), // p_1361->g_1265
        (void*)0, // p_1361->g_1280
        (void*)0, // p_1361->g_1281
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), // p_1361->g_1290
        (VECTOR(int16_t, 16))(0x36A9L, (VECTOR(int16_t, 4))(0x36A9L, (VECTOR(int16_t, 2))(0x36A9L, 0x2F12L), 0x2F12L), 0x2F12L, 0x36A9L, 0x2F12L, (VECTOR(int16_t, 2))(0x36A9L, 0x2F12L), (VECTOR(int16_t, 2))(0x36A9L, 0x2F12L), 0x36A9L, 0x2F12L, 0x36A9L, 0x2F12L), // p_1361->g_1293
        (VECTOR(uint32_t, 8))(0xDF6D171CL, (VECTOR(uint32_t, 4))(0xDF6D171CL, (VECTOR(uint32_t, 2))(0xDF6D171CL, 0UL), 0UL), 0UL, 0xDF6D171CL, 0UL), // p_1361->g_1300
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1361->g_1323
        (VECTOR(int32_t, 16))(0x6799145DL, (VECTOR(int32_t, 4))(0x6799145DL, (VECTOR(int32_t, 2))(0x6799145DL, 0x7CF5FED3L), 0x7CF5FED3L), 0x7CF5FED3L, 0x6799145DL, 0x7CF5FED3L, (VECTOR(int32_t, 2))(0x6799145DL, 0x7CF5FED3L), (VECTOR(int32_t, 2))(0x6799145DL, 0x7CF5FED3L), 0x6799145DL, 0x7CF5FED3L, 0x6799145DL, 0x7CF5FED3L), // p_1361->g_1327
        0, // p_1361->v_collective
        sequence_input[get_global_id(0)], // p_1361->global_0_offset
        sequence_input[get_global_id(1)], // p_1361->global_1_offset
        sequence_input[get_global_id(2)], // p_1361->global_2_offset
        sequence_input[get_local_id(0)], // p_1361->local_0_offset
        sequence_input[get_local_id(1)], // p_1361->local_1_offset
        sequence_input[get_local_id(2)], // p_1361->local_2_offset
        sequence_input[get_group_id(0)], // p_1361->group_0_offset
        sequence_input[get_group_id(1)], // p_1361->group_1_offset
        sequence_input[get_group_id(2)], // p_1361->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[0][get_linear_local_id()])), // p_1361->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1362 = c_1363;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1361);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1361->g_15, "p_1361->g_15", print_hash_value);
    transparent_crc(p_1361->g_31.x, "p_1361->g_31.x", print_hash_value);
    transparent_crc(p_1361->g_31.y, "p_1361->g_31.y", print_hash_value);
    transparent_crc(p_1361->g_31.z, "p_1361->g_31.z", print_hash_value);
    transparent_crc(p_1361->g_31.w, "p_1361->g_31.w", print_hash_value);
    transparent_crc(p_1361->g_57.s0, "p_1361->g_57.s0", print_hash_value);
    transparent_crc(p_1361->g_57.s1, "p_1361->g_57.s1", print_hash_value);
    transparent_crc(p_1361->g_57.s2, "p_1361->g_57.s2", print_hash_value);
    transparent_crc(p_1361->g_57.s3, "p_1361->g_57.s3", print_hash_value);
    transparent_crc(p_1361->g_57.s4, "p_1361->g_57.s4", print_hash_value);
    transparent_crc(p_1361->g_57.s5, "p_1361->g_57.s5", print_hash_value);
    transparent_crc(p_1361->g_57.s6, "p_1361->g_57.s6", print_hash_value);
    transparent_crc(p_1361->g_57.s7, "p_1361->g_57.s7", print_hash_value);
    transparent_crc(p_1361->g_57.s8, "p_1361->g_57.s8", print_hash_value);
    transparent_crc(p_1361->g_57.s9, "p_1361->g_57.s9", print_hash_value);
    transparent_crc(p_1361->g_57.sa, "p_1361->g_57.sa", print_hash_value);
    transparent_crc(p_1361->g_57.sb, "p_1361->g_57.sb", print_hash_value);
    transparent_crc(p_1361->g_57.sc, "p_1361->g_57.sc", print_hash_value);
    transparent_crc(p_1361->g_57.sd, "p_1361->g_57.sd", print_hash_value);
    transparent_crc(p_1361->g_57.se, "p_1361->g_57.se", print_hash_value);
    transparent_crc(p_1361->g_57.sf, "p_1361->g_57.sf", print_hash_value);
    transparent_crc(p_1361->g_75, "p_1361->g_75", print_hash_value);
    transparent_crc(p_1361->g_138, "p_1361->g_138", print_hash_value);
    transparent_crc(p_1361->g_153.s0, "p_1361->g_153.s0", print_hash_value);
    transparent_crc(p_1361->g_153.s1, "p_1361->g_153.s1", print_hash_value);
    transparent_crc(p_1361->g_153.s2, "p_1361->g_153.s2", print_hash_value);
    transparent_crc(p_1361->g_153.s3, "p_1361->g_153.s3", print_hash_value);
    transparent_crc(p_1361->g_153.s4, "p_1361->g_153.s4", print_hash_value);
    transparent_crc(p_1361->g_153.s5, "p_1361->g_153.s5", print_hash_value);
    transparent_crc(p_1361->g_153.s6, "p_1361->g_153.s6", print_hash_value);
    transparent_crc(p_1361->g_153.s7, "p_1361->g_153.s7", print_hash_value);
    transparent_crc(p_1361->g_153.s8, "p_1361->g_153.s8", print_hash_value);
    transparent_crc(p_1361->g_153.s9, "p_1361->g_153.s9", print_hash_value);
    transparent_crc(p_1361->g_153.sa, "p_1361->g_153.sa", print_hash_value);
    transparent_crc(p_1361->g_153.sb, "p_1361->g_153.sb", print_hash_value);
    transparent_crc(p_1361->g_153.sc, "p_1361->g_153.sc", print_hash_value);
    transparent_crc(p_1361->g_153.sd, "p_1361->g_153.sd", print_hash_value);
    transparent_crc(p_1361->g_153.se, "p_1361->g_153.se", print_hash_value);
    transparent_crc(p_1361->g_153.sf, "p_1361->g_153.sf", print_hash_value);
    transparent_crc(p_1361->g_172, "p_1361->g_172", print_hash_value);
    transparent_crc(p_1361->g_177, "p_1361->g_177", print_hash_value);
    transparent_crc(p_1361->g_183.x, "p_1361->g_183.x", print_hash_value);
    transparent_crc(p_1361->g_183.y, "p_1361->g_183.y", print_hash_value);
    transparent_crc(p_1361->g_183.z, "p_1361->g_183.z", print_hash_value);
    transparent_crc(p_1361->g_183.w, "p_1361->g_183.w", print_hash_value);
    transparent_crc(p_1361->g_184.s0, "p_1361->g_184.s0", print_hash_value);
    transparent_crc(p_1361->g_184.s1, "p_1361->g_184.s1", print_hash_value);
    transparent_crc(p_1361->g_184.s2, "p_1361->g_184.s2", print_hash_value);
    transparent_crc(p_1361->g_184.s3, "p_1361->g_184.s3", print_hash_value);
    transparent_crc(p_1361->g_184.s4, "p_1361->g_184.s4", print_hash_value);
    transparent_crc(p_1361->g_184.s5, "p_1361->g_184.s5", print_hash_value);
    transparent_crc(p_1361->g_184.s6, "p_1361->g_184.s6", print_hash_value);
    transparent_crc(p_1361->g_184.s7, "p_1361->g_184.s7", print_hash_value);
    transparent_crc(p_1361->g_184.s8, "p_1361->g_184.s8", print_hash_value);
    transparent_crc(p_1361->g_184.s9, "p_1361->g_184.s9", print_hash_value);
    transparent_crc(p_1361->g_184.sa, "p_1361->g_184.sa", print_hash_value);
    transparent_crc(p_1361->g_184.sb, "p_1361->g_184.sb", print_hash_value);
    transparent_crc(p_1361->g_184.sc, "p_1361->g_184.sc", print_hash_value);
    transparent_crc(p_1361->g_184.sd, "p_1361->g_184.sd", print_hash_value);
    transparent_crc(p_1361->g_184.se, "p_1361->g_184.se", print_hash_value);
    transparent_crc(p_1361->g_184.sf, "p_1361->g_184.sf", print_hash_value);
    transparent_crc(p_1361->g_185.x, "p_1361->g_185.x", print_hash_value);
    transparent_crc(p_1361->g_185.y, "p_1361->g_185.y", print_hash_value);
    transparent_crc(p_1361->g_185.z, "p_1361->g_185.z", print_hash_value);
    transparent_crc(p_1361->g_185.w, "p_1361->g_185.w", print_hash_value);
    transparent_crc(p_1361->g_187.s0, "p_1361->g_187.s0", print_hash_value);
    transparent_crc(p_1361->g_187.s1, "p_1361->g_187.s1", print_hash_value);
    transparent_crc(p_1361->g_187.s2, "p_1361->g_187.s2", print_hash_value);
    transparent_crc(p_1361->g_187.s3, "p_1361->g_187.s3", print_hash_value);
    transparent_crc(p_1361->g_187.s4, "p_1361->g_187.s4", print_hash_value);
    transparent_crc(p_1361->g_187.s5, "p_1361->g_187.s5", print_hash_value);
    transparent_crc(p_1361->g_187.s6, "p_1361->g_187.s6", print_hash_value);
    transparent_crc(p_1361->g_187.s7, "p_1361->g_187.s7", print_hash_value);
    transparent_crc(p_1361->g_190.x, "p_1361->g_190.x", print_hash_value);
    transparent_crc(p_1361->g_190.y, "p_1361->g_190.y", print_hash_value);
    transparent_crc(p_1361->g_197.s0, "p_1361->g_197.s0", print_hash_value);
    transparent_crc(p_1361->g_197.s1, "p_1361->g_197.s1", print_hash_value);
    transparent_crc(p_1361->g_197.s2, "p_1361->g_197.s2", print_hash_value);
    transparent_crc(p_1361->g_197.s3, "p_1361->g_197.s3", print_hash_value);
    transparent_crc(p_1361->g_197.s4, "p_1361->g_197.s4", print_hash_value);
    transparent_crc(p_1361->g_197.s5, "p_1361->g_197.s5", print_hash_value);
    transparent_crc(p_1361->g_197.s6, "p_1361->g_197.s6", print_hash_value);
    transparent_crc(p_1361->g_197.s7, "p_1361->g_197.s7", print_hash_value);
    transparent_crc(p_1361->g_213.x, "p_1361->g_213.x", print_hash_value);
    transparent_crc(p_1361->g_213.y, "p_1361->g_213.y", print_hash_value);
    transparent_crc(p_1361->g_214.x, "p_1361->g_214.x", print_hash_value);
    transparent_crc(p_1361->g_214.y, "p_1361->g_214.y", print_hash_value);
    transparent_crc(p_1361->g_214.z, "p_1361->g_214.z", print_hash_value);
    transparent_crc(p_1361->g_214.w, "p_1361->g_214.w", print_hash_value);
    transparent_crc(p_1361->g_215.s0, "p_1361->g_215.s0", print_hash_value);
    transparent_crc(p_1361->g_215.s1, "p_1361->g_215.s1", print_hash_value);
    transparent_crc(p_1361->g_215.s2, "p_1361->g_215.s2", print_hash_value);
    transparent_crc(p_1361->g_215.s3, "p_1361->g_215.s3", print_hash_value);
    transparent_crc(p_1361->g_215.s4, "p_1361->g_215.s4", print_hash_value);
    transparent_crc(p_1361->g_215.s5, "p_1361->g_215.s5", print_hash_value);
    transparent_crc(p_1361->g_215.s6, "p_1361->g_215.s6", print_hash_value);
    transparent_crc(p_1361->g_215.s7, "p_1361->g_215.s7", print_hash_value);
    transparent_crc(p_1361->g_216.s0, "p_1361->g_216.s0", print_hash_value);
    transparent_crc(p_1361->g_216.s1, "p_1361->g_216.s1", print_hash_value);
    transparent_crc(p_1361->g_216.s2, "p_1361->g_216.s2", print_hash_value);
    transparent_crc(p_1361->g_216.s3, "p_1361->g_216.s3", print_hash_value);
    transparent_crc(p_1361->g_216.s4, "p_1361->g_216.s4", print_hash_value);
    transparent_crc(p_1361->g_216.s5, "p_1361->g_216.s5", print_hash_value);
    transparent_crc(p_1361->g_216.s6, "p_1361->g_216.s6", print_hash_value);
    transparent_crc(p_1361->g_216.s7, "p_1361->g_216.s7", print_hash_value);
    transparent_crc(p_1361->g_217.s0, "p_1361->g_217.s0", print_hash_value);
    transparent_crc(p_1361->g_217.s1, "p_1361->g_217.s1", print_hash_value);
    transparent_crc(p_1361->g_217.s2, "p_1361->g_217.s2", print_hash_value);
    transparent_crc(p_1361->g_217.s3, "p_1361->g_217.s3", print_hash_value);
    transparent_crc(p_1361->g_217.s4, "p_1361->g_217.s4", print_hash_value);
    transparent_crc(p_1361->g_217.s5, "p_1361->g_217.s5", print_hash_value);
    transparent_crc(p_1361->g_217.s6, "p_1361->g_217.s6", print_hash_value);
    transparent_crc(p_1361->g_217.s7, "p_1361->g_217.s7", print_hash_value);
    transparent_crc(p_1361->g_218.x, "p_1361->g_218.x", print_hash_value);
    transparent_crc(p_1361->g_218.y, "p_1361->g_218.y", print_hash_value);
    transparent_crc(p_1361->g_218.z, "p_1361->g_218.z", print_hash_value);
    transparent_crc(p_1361->g_218.w, "p_1361->g_218.w", print_hash_value);
    transparent_crc(p_1361->g_228.s0, "p_1361->g_228.s0", print_hash_value);
    transparent_crc(p_1361->g_228.s1, "p_1361->g_228.s1", print_hash_value);
    transparent_crc(p_1361->g_228.s2, "p_1361->g_228.s2", print_hash_value);
    transparent_crc(p_1361->g_228.s3, "p_1361->g_228.s3", print_hash_value);
    transparent_crc(p_1361->g_228.s4, "p_1361->g_228.s4", print_hash_value);
    transparent_crc(p_1361->g_228.s5, "p_1361->g_228.s5", print_hash_value);
    transparent_crc(p_1361->g_228.s6, "p_1361->g_228.s6", print_hash_value);
    transparent_crc(p_1361->g_228.s7, "p_1361->g_228.s7", print_hash_value);
    transparent_crc(p_1361->g_230.s0, "p_1361->g_230.s0", print_hash_value);
    transparent_crc(p_1361->g_230.s1, "p_1361->g_230.s1", print_hash_value);
    transparent_crc(p_1361->g_230.s2, "p_1361->g_230.s2", print_hash_value);
    transparent_crc(p_1361->g_230.s3, "p_1361->g_230.s3", print_hash_value);
    transparent_crc(p_1361->g_230.s4, "p_1361->g_230.s4", print_hash_value);
    transparent_crc(p_1361->g_230.s5, "p_1361->g_230.s5", print_hash_value);
    transparent_crc(p_1361->g_230.s6, "p_1361->g_230.s6", print_hash_value);
    transparent_crc(p_1361->g_230.s7, "p_1361->g_230.s7", print_hash_value);
    transparent_crc(p_1361->g_230.s8, "p_1361->g_230.s8", print_hash_value);
    transparent_crc(p_1361->g_230.s9, "p_1361->g_230.s9", print_hash_value);
    transparent_crc(p_1361->g_230.sa, "p_1361->g_230.sa", print_hash_value);
    transparent_crc(p_1361->g_230.sb, "p_1361->g_230.sb", print_hash_value);
    transparent_crc(p_1361->g_230.sc, "p_1361->g_230.sc", print_hash_value);
    transparent_crc(p_1361->g_230.sd, "p_1361->g_230.sd", print_hash_value);
    transparent_crc(p_1361->g_230.se, "p_1361->g_230.se", print_hash_value);
    transparent_crc(p_1361->g_230.sf, "p_1361->g_230.sf", print_hash_value);
    transparent_crc(p_1361->g_232.s0, "p_1361->g_232.s0", print_hash_value);
    transparent_crc(p_1361->g_232.s1, "p_1361->g_232.s1", print_hash_value);
    transparent_crc(p_1361->g_232.s2, "p_1361->g_232.s2", print_hash_value);
    transparent_crc(p_1361->g_232.s3, "p_1361->g_232.s3", print_hash_value);
    transparent_crc(p_1361->g_232.s4, "p_1361->g_232.s4", print_hash_value);
    transparent_crc(p_1361->g_232.s5, "p_1361->g_232.s5", print_hash_value);
    transparent_crc(p_1361->g_232.s6, "p_1361->g_232.s6", print_hash_value);
    transparent_crc(p_1361->g_232.s7, "p_1361->g_232.s7", print_hash_value);
    transparent_crc(p_1361->g_233.x, "p_1361->g_233.x", print_hash_value);
    transparent_crc(p_1361->g_233.y, "p_1361->g_233.y", print_hash_value);
    transparent_crc(p_1361->g_234.s0, "p_1361->g_234.s0", print_hash_value);
    transparent_crc(p_1361->g_234.s1, "p_1361->g_234.s1", print_hash_value);
    transparent_crc(p_1361->g_234.s2, "p_1361->g_234.s2", print_hash_value);
    transparent_crc(p_1361->g_234.s3, "p_1361->g_234.s3", print_hash_value);
    transparent_crc(p_1361->g_234.s4, "p_1361->g_234.s4", print_hash_value);
    transparent_crc(p_1361->g_234.s5, "p_1361->g_234.s5", print_hash_value);
    transparent_crc(p_1361->g_234.s6, "p_1361->g_234.s6", print_hash_value);
    transparent_crc(p_1361->g_234.s7, "p_1361->g_234.s7", print_hash_value);
    transparent_crc(p_1361->g_234.s8, "p_1361->g_234.s8", print_hash_value);
    transparent_crc(p_1361->g_234.s9, "p_1361->g_234.s9", print_hash_value);
    transparent_crc(p_1361->g_234.sa, "p_1361->g_234.sa", print_hash_value);
    transparent_crc(p_1361->g_234.sb, "p_1361->g_234.sb", print_hash_value);
    transparent_crc(p_1361->g_234.sc, "p_1361->g_234.sc", print_hash_value);
    transparent_crc(p_1361->g_234.sd, "p_1361->g_234.sd", print_hash_value);
    transparent_crc(p_1361->g_234.se, "p_1361->g_234.se", print_hash_value);
    transparent_crc(p_1361->g_234.sf, "p_1361->g_234.sf", print_hash_value);
    transparent_crc(p_1361->g_264.s0, "p_1361->g_264.s0", print_hash_value);
    transparent_crc(p_1361->g_264.s1, "p_1361->g_264.s1", print_hash_value);
    transparent_crc(p_1361->g_264.s2, "p_1361->g_264.s2", print_hash_value);
    transparent_crc(p_1361->g_264.s3, "p_1361->g_264.s3", print_hash_value);
    transparent_crc(p_1361->g_264.s4, "p_1361->g_264.s4", print_hash_value);
    transparent_crc(p_1361->g_264.s5, "p_1361->g_264.s5", print_hash_value);
    transparent_crc(p_1361->g_264.s6, "p_1361->g_264.s6", print_hash_value);
    transparent_crc(p_1361->g_264.s7, "p_1361->g_264.s7", print_hash_value);
    transparent_crc(p_1361->g_264.s8, "p_1361->g_264.s8", print_hash_value);
    transparent_crc(p_1361->g_264.s9, "p_1361->g_264.s9", print_hash_value);
    transparent_crc(p_1361->g_264.sa, "p_1361->g_264.sa", print_hash_value);
    transparent_crc(p_1361->g_264.sb, "p_1361->g_264.sb", print_hash_value);
    transparent_crc(p_1361->g_264.sc, "p_1361->g_264.sc", print_hash_value);
    transparent_crc(p_1361->g_264.sd, "p_1361->g_264.sd", print_hash_value);
    transparent_crc(p_1361->g_264.se, "p_1361->g_264.se", print_hash_value);
    transparent_crc(p_1361->g_264.sf, "p_1361->g_264.sf", print_hash_value);
    transparent_crc(p_1361->g_276.x, "p_1361->g_276.x", print_hash_value);
    transparent_crc(p_1361->g_276.y, "p_1361->g_276.y", print_hash_value);
    transparent_crc(p_1361->g_276.z, "p_1361->g_276.z", print_hash_value);
    transparent_crc(p_1361->g_276.w, "p_1361->g_276.w", print_hash_value);
    transparent_crc(p_1361->g_279.x, "p_1361->g_279.x", print_hash_value);
    transparent_crc(p_1361->g_279.y, "p_1361->g_279.y", print_hash_value);
    transparent_crc(p_1361->g_279.z, "p_1361->g_279.z", print_hash_value);
    transparent_crc(p_1361->g_279.w, "p_1361->g_279.w", print_hash_value);
    transparent_crc(p_1361->g_299.x, "p_1361->g_299.x", print_hash_value);
    transparent_crc(p_1361->g_299.y, "p_1361->g_299.y", print_hash_value);
    transparent_crc(p_1361->g_299.z, "p_1361->g_299.z", print_hash_value);
    transparent_crc(p_1361->g_299.w, "p_1361->g_299.w", print_hash_value);
    transparent_crc(p_1361->g_342.x, "p_1361->g_342.x", print_hash_value);
    transparent_crc(p_1361->g_342.y, "p_1361->g_342.y", print_hash_value);
    transparent_crc(p_1361->g_342.z, "p_1361->g_342.z", print_hash_value);
    transparent_crc(p_1361->g_342.w, "p_1361->g_342.w", print_hash_value);
    transparent_crc(p_1361->g_360.s0, "p_1361->g_360.s0", print_hash_value);
    transparent_crc(p_1361->g_360.s1, "p_1361->g_360.s1", print_hash_value);
    transparent_crc(p_1361->g_360.s2, "p_1361->g_360.s2", print_hash_value);
    transparent_crc(p_1361->g_360.s3, "p_1361->g_360.s3", print_hash_value);
    transparent_crc(p_1361->g_360.s4, "p_1361->g_360.s4", print_hash_value);
    transparent_crc(p_1361->g_360.s5, "p_1361->g_360.s5", print_hash_value);
    transparent_crc(p_1361->g_360.s6, "p_1361->g_360.s6", print_hash_value);
    transparent_crc(p_1361->g_360.s7, "p_1361->g_360.s7", print_hash_value);
    transparent_crc(p_1361->g_360.s8, "p_1361->g_360.s8", print_hash_value);
    transparent_crc(p_1361->g_360.s9, "p_1361->g_360.s9", print_hash_value);
    transparent_crc(p_1361->g_360.sa, "p_1361->g_360.sa", print_hash_value);
    transparent_crc(p_1361->g_360.sb, "p_1361->g_360.sb", print_hash_value);
    transparent_crc(p_1361->g_360.sc, "p_1361->g_360.sc", print_hash_value);
    transparent_crc(p_1361->g_360.sd, "p_1361->g_360.sd", print_hash_value);
    transparent_crc(p_1361->g_360.se, "p_1361->g_360.se", print_hash_value);
    transparent_crc(p_1361->g_360.sf, "p_1361->g_360.sf", print_hash_value);
    transparent_crc(p_1361->g_383, "p_1361->g_383", print_hash_value);
    transparent_crc(p_1361->g_384.x, "p_1361->g_384.x", print_hash_value);
    transparent_crc(p_1361->g_384.y, "p_1361->g_384.y", print_hash_value);
    transparent_crc(p_1361->g_384.z, "p_1361->g_384.z", print_hash_value);
    transparent_crc(p_1361->g_384.w, "p_1361->g_384.w", print_hash_value);
    transparent_crc(p_1361->g_388.x, "p_1361->g_388.x", print_hash_value);
    transparent_crc(p_1361->g_388.y, "p_1361->g_388.y", print_hash_value);
    transparent_crc(p_1361->g_388.z, "p_1361->g_388.z", print_hash_value);
    transparent_crc(p_1361->g_388.w, "p_1361->g_388.w", print_hash_value);
    transparent_crc(p_1361->g_416.x, "p_1361->g_416.x", print_hash_value);
    transparent_crc(p_1361->g_416.y, "p_1361->g_416.y", print_hash_value);
    transparent_crc(p_1361->g_417.s0, "p_1361->g_417.s0", print_hash_value);
    transparent_crc(p_1361->g_417.s1, "p_1361->g_417.s1", print_hash_value);
    transparent_crc(p_1361->g_417.s2, "p_1361->g_417.s2", print_hash_value);
    transparent_crc(p_1361->g_417.s3, "p_1361->g_417.s3", print_hash_value);
    transparent_crc(p_1361->g_417.s4, "p_1361->g_417.s4", print_hash_value);
    transparent_crc(p_1361->g_417.s5, "p_1361->g_417.s5", print_hash_value);
    transparent_crc(p_1361->g_417.s6, "p_1361->g_417.s6", print_hash_value);
    transparent_crc(p_1361->g_417.s7, "p_1361->g_417.s7", print_hash_value);
    transparent_crc(p_1361->g_469.x, "p_1361->g_469.x", print_hash_value);
    transparent_crc(p_1361->g_469.y, "p_1361->g_469.y", print_hash_value);
    transparent_crc(p_1361->g_489.s0, "p_1361->g_489.s0", print_hash_value);
    transparent_crc(p_1361->g_489.s1, "p_1361->g_489.s1", print_hash_value);
    transparent_crc(p_1361->g_489.s2, "p_1361->g_489.s2", print_hash_value);
    transparent_crc(p_1361->g_489.s3, "p_1361->g_489.s3", print_hash_value);
    transparent_crc(p_1361->g_489.s4, "p_1361->g_489.s4", print_hash_value);
    transparent_crc(p_1361->g_489.s5, "p_1361->g_489.s5", print_hash_value);
    transparent_crc(p_1361->g_489.s6, "p_1361->g_489.s6", print_hash_value);
    transparent_crc(p_1361->g_489.s7, "p_1361->g_489.s7", print_hash_value);
    transparent_crc(p_1361->g_490.x, "p_1361->g_490.x", print_hash_value);
    transparent_crc(p_1361->g_490.y, "p_1361->g_490.y", print_hash_value);
    transparent_crc(p_1361->g_491.s0, "p_1361->g_491.s0", print_hash_value);
    transparent_crc(p_1361->g_491.s1, "p_1361->g_491.s1", print_hash_value);
    transparent_crc(p_1361->g_491.s2, "p_1361->g_491.s2", print_hash_value);
    transparent_crc(p_1361->g_491.s3, "p_1361->g_491.s3", print_hash_value);
    transparent_crc(p_1361->g_491.s4, "p_1361->g_491.s4", print_hash_value);
    transparent_crc(p_1361->g_491.s5, "p_1361->g_491.s5", print_hash_value);
    transparent_crc(p_1361->g_491.s6, "p_1361->g_491.s6", print_hash_value);
    transparent_crc(p_1361->g_491.s7, "p_1361->g_491.s7", print_hash_value);
    transparent_crc(p_1361->g_491.s8, "p_1361->g_491.s8", print_hash_value);
    transparent_crc(p_1361->g_491.s9, "p_1361->g_491.s9", print_hash_value);
    transparent_crc(p_1361->g_491.sa, "p_1361->g_491.sa", print_hash_value);
    transparent_crc(p_1361->g_491.sb, "p_1361->g_491.sb", print_hash_value);
    transparent_crc(p_1361->g_491.sc, "p_1361->g_491.sc", print_hash_value);
    transparent_crc(p_1361->g_491.sd, "p_1361->g_491.sd", print_hash_value);
    transparent_crc(p_1361->g_491.se, "p_1361->g_491.se", print_hash_value);
    transparent_crc(p_1361->g_491.sf, "p_1361->g_491.sf", print_hash_value);
    transparent_crc(p_1361->g_492.x, "p_1361->g_492.x", print_hash_value);
    transparent_crc(p_1361->g_492.y, "p_1361->g_492.y", print_hash_value);
    transparent_crc(p_1361->g_493.x, "p_1361->g_493.x", print_hash_value);
    transparent_crc(p_1361->g_493.y, "p_1361->g_493.y", print_hash_value);
    transparent_crc(p_1361->g_498.s0, "p_1361->g_498.s0", print_hash_value);
    transparent_crc(p_1361->g_498.s1, "p_1361->g_498.s1", print_hash_value);
    transparent_crc(p_1361->g_498.s2, "p_1361->g_498.s2", print_hash_value);
    transparent_crc(p_1361->g_498.s3, "p_1361->g_498.s3", print_hash_value);
    transparent_crc(p_1361->g_498.s4, "p_1361->g_498.s4", print_hash_value);
    transparent_crc(p_1361->g_498.s5, "p_1361->g_498.s5", print_hash_value);
    transparent_crc(p_1361->g_498.s6, "p_1361->g_498.s6", print_hash_value);
    transparent_crc(p_1361->g_498.s7, "p_1361->g_498.s7", print_hash_value);
    transparent_crc(p_1361->g_507.x, "p_1361->g_507.x", print_hash_value);
    transparent_crc(p_1361->g_507.y, "p_1361->g_507.y", print_hash_value);
    transparent_crc(p_1361->g_538.x, "p_1361->g_538.x", print_hash_value);
    transparent_crc(p_1361->g_538.y, "p_1361->g_538.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1361->g_543[i][j][k], "p_1361->g_543[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1361->g_546, "p_1361->g_546", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1361->g_560[i], "p_1361->g_560[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_561.s0, "p_1361->g_561.s0", print_hash_value);
    transparent_crc(p_1361->g_561.s1, "p_1361->g_561.s1", print_hash_value);
    transparent_crc(p_1361->g_561.s2, "p_1361->g_561.s2", print_hash_value);
    transparent_crc(p_1361->g_561.s3, "p_1361->g_561.s3", print_hash_value);
    transparent_crc(p_1361->g_561.s4, "p_1361->g_561.s4", print_hash_value);
    transparent_crc(p_1361->g_561.s5, "p_1361->g_561.s5", print_hash_value);
    transparent_crc(p_1361->g_561.s6, "p_1361->g_561.s6", print_hash_value);
    transparent_crc(p_1361->g_561.s7, "p_1361->g_561.s7", print_hash_value);
    transparent_crc(p_1361->g_561.s8, "p_1361->g_561.s8", print_hash_value);
    transparent_crc(p_1361->g_561.s9, "p_1361->g_561.s9", print_hash_value);
    transparent_crc(p_1361->g_561.sa, "p_1361->g_561.sa", print_hash_value);
    transparent_crc(p_1361->g_561.sb, "p_1361->g_561.sb", print_hash_value);
    transparent_crc(p_1361->g_561.sc, "p_1361->g_561.sc", print_hash_value);
    transparent_crc(p_1361->g_561.sd, "p_1361->g_561.sd", print_hash_value);
    transparent_crc(p_1361->g_561.se, "p_1361->g_561.se", print_hash_value);
    transparent_crc(p_1361->g_561.sf, "p_1361->g_561.sf", print_hash_value);
    transparent_crc(p_1361->g_580.s0, "p_1361->g_580.s0", print_hash_value);
    transparent_crc(p_1361->g_580.s1, "p_1361->g_580.s1", print_hash_value);
    transparent_crc(p_1361->g_580.s2, "p_1361->g_580.s2", print_hash_value);
    transparent_crc(p_1361->g_580.s3, "p_1361->g_580.s3", print_hash_value);
    transparent_crc(p_1361->g_580.s4, "p_1361->g_580.s4", print_hash_value);
    transparent_crc(p_1361->g_580.s5, "p_1361->g_580.s5", print_hash_value);
    transparent_crc(p_1361->g_580.s6, "p_1361->g_580.s6", print_hash_value);
    transparent_crc(p_1361->g_580.s7, "p_1361->g_580.s7", print_hash_value);
    transparent_crc(p_1361->g_580.s8, "p_1361->g_580.s8", print_hash_value);
    transparent_crc(p_1361->g_580.s9, "p_1361->g_580.s9", print_hash_value);
    transparent_crc(p_1361->g_580.sa, "p_1361->g_580.sa", print_hash_value);
    transparent_crc(p_1361->g_580.sb, "p_1361->g_580.sb", print_hash_value);
    transparent_crc(p_1361->g_580.sc, "p_1361->g_580.sc", print_hash_value);
    transparent_crc(p_1361->g_580.sd, "p_1361->g_580.sd", print_hash_value);
    transparent_crc(p_1361->g_580.se, "p_1361->g_580.se", print_hash_value);
    transparent_crc(p_1361->g_580.sf, "p_1361->g_580.sf", print_hash_value);
    transparent_crc(p_1361->g_582.x, "p_1361->g_582.x", print_hash_value);
    transparent_crc(p_1361->g_582.y, "p_1361->g_582.y", print_hash_value);
    transparent_crc(p_1361->g_583.x, "p_1361->g_583.x", print_hash_value);
    transparent_crc(p_1361->g_583.y, "p_1361->g_583.y", print_hash_value);
    transparent_crc(p_1361->g_597.s0, "p_1361->g_597.s0", print_hash_value);
    transparent_crc(p_1361->g_597.s1, "p_1361->g_597.s1", print_hash_value);
    transparent_crc(p_1361->g_597.s2, "p_1361->g_597.s2", print_hash_value);
    transparent_crc(p_1361->g_597.s3, "p_1361->g_597.s3", print_hash_value);
    transparent_crc(p_1361->g_597.s4, "p_1361->g_597.s4", print_hash_value);
    transparent_crc(p_1361->g_597.s5, "p_1361->g_597.s5", print_hash_value);
    transparent_crc(p_1361->g_597.s6, "p_1361->g_597.s6", print_hash_value);
    transparent_crc(p_1361->g_597.s7, "p_1361->g_597.s7", print_hash_value);
    transparent_crc(p_1361->g_597.s8, "p_1361->g_597.s8", print_hash_value);
    transparent_crc(p_1361->g_597.s9, "p_1361->g_597.s9", print_hash_value);
    transparent_crc(p_1361->g_597.sa, "p_1361->g_597.sa", print_hash_value);
    transparent_crc(p_1361->g_597.sb, "p_1361->g_597.sb", print_hash_value);
    transparent_crc(p_1361->g_597.sc, "p_1361->g_597.sc", print_hash_value);
    transparent_crc(p_1361->g_597.sd, "p_1361->g_597.sd", print_hash_value);
    transparent_crc(p_1361->g_597.se, "p_1361->g_597.se", print_hash_value);
    transparent_crc(p_1361->g_597.sf, "p_1361->g_597.sf", print_hash_value);
    transparent_crc(p_1361->g_687.x, "p_1361->g_687.x", print_hash_value);
    transparent_crc(p_1361->g_687.y, "p_1361->g_687.y", print_hash_value);
    transparent_crc(p_1361->g_694.x, "p_1361->g_694.x", print_hash_value);
    transparent_crc(p_1361->g_694.y, "p_1361->g_694.y", print_hash_value);
    transparent_crc(p_1361->g_694.z, "p_1361->g_694.z", print_hash_value);
    transparent_crc(p_1361->g_694.w, "p_1361->g_694.w", print_hash_value);
    transparent_crc(p_1361->g_712, "p_1361->g_712", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1361->g_743[i], "p_1361->g_743[i]", print_hash_value);

    }
    transparent_crc(p_1361->g_744, "p_1361->g_744", print_hash_value);
    transparent_crc(p_1361->g_789.s0, "p_1361->g_789.s0", print_hash_value);
    transparent_crc(p_1361->g_789.s1, "p_1361->g_789.s1", print_hash_value);
    transparent_crc(p_1361->g_789.s2, "p_1361->g_789.s2", print_hash_value);
    transparent_crc(p_1361->g_789.s3, "p_1361->g_789.s3", print_hash_value);
    transparent_crc(p_1361->g_789.s4, "p_1361->g_789.s4", print_hash_value);
    transparent_crc(p_1361->g_789.s5, "p_1361->g_789.s5", print_hash_value);
    transparent_crc(p_1361->g_789.s6, "p_1361->g_789.s6", print_hash_value);
    transparent_crc(p_1361->g_789.s7, "p_1361->g_789.s7", print_hash_value);
    transparent_crc(p_1361->g_789.s8, "p_1361->g_789.s8", print_hash_value);
    transparent_crc(p_1361->g_789.s9, "p_1361->g_789.s9", print_hash_value);
    transparent_crc(p_1361->g_789.sa, "p_1361->g_789.sa", print_hash_value);
    transparent_crc(p_1361->g_789.sb, "p_1361->g_789.sb", print_hash_value);
    transparent_crc(p_1361->g_789.sc, "p_1361->g_789.sc", print_hash_value);
    transparent_crc(p_1361->g_789.sd, "p_1361->g_789.sd", print_hash_value);
    transparent_crc(p_1361->g_789.se, "p_1361->g_789.se", print_hash_value);
    transparent_crc(p_1361->g_789.sf, "p_1361->g_789.sf", print_hash_value);
    transparent_crc(p_1361->g_800.s0, "p_1361->g_800.s0", print_hash_value);
    transparent_crc(p_1361->g_800.s1, "p_1361->g_800.s1", print_hash_value);
    transparent_crc(p_1361->g_800.s2, "p_1361->g_800.s2", print_hash_value);
    transparent_crc(p_1361->g_800.s3, "p_1361->g_800.s3", print_hash_value);
    transparent_crc(p_1361->g_800.s4, "p_1361->g_800.s4", print_hash_value);
    transparent_crc(p_1361->g_800.s5, "p_1361->g_800.s5", print_hash_value);
    transparent_crc(p_1361->g_800.s6, "p_1361->g_800.s6", print_hash_value);
    transparent_crc(p_1361->g_800.s7, "p_1361->g_800.s7", print_hash_value);
    transparent_crc(p_1361->g_800.s8, "p_1361->g_800.s8", print_hash_value);
    transparent_crc(p_1361->g_800.s9, "p_1361->g_800.s9", print_hash_value);
    transparent_crc(p_1361->g_800.sa, "p_1361->g_800.sa", print_hash_value);
    transparent_crc(p_1361->g_800.sb, "p_1361->g_800.sb", print_hash_value);
    transparent_crc(p_1361->g_800.sc, "p_1361->g_800.sc", print_hash_value);
    transparent_crc(p_1361->g_800.sd, "p_1361->g_800.sd", print_hash_value);
    transparent_crc(p_1361->g_800.se, "p_1361->g_800.se", print_hash_value);
    transparent_crc(p_1361->g_800.sf, "p_1361->g_800.sf", print_hash_value);
    transparent_crc(p_1361->g_833, "p_1361->g_833", print_hash_value);
    transparent_crc(p_1361->g_843.x, "p_1361->g_843.x", print_hash_value);
    transparent_crc(p_1361->g_843.y, "p_1361->g_843.y", print_hash_value);
    transparent_crc(p_1361->g_856.x, "p_1361->g_856.x", print_hash_value);
    transparent_crc(p_1361->g_856.y, "p_1361->g_856.y", print_hash_value);
    transparent_crc(p_1361->g_856.z, "p_1361->g_856.z", print_hash_value);
    transparent_crc(p_1361->g_856.w, "p_1361->g_856.w", print_hash_value);
    transparent_crc(p_1361->g_866, "p_1361->g_866", print_hash_value);
    transparent_crc(p_1361->g_869.s0, "p_1361->g_869.s0", print_hash_value);
    transparent_crc(p_1361->g_869.s1, "p_1361->g_869.s1", print_hash_value);
    transparent_crc(p_1361->g_869.s2, "p_1361->g_869.s2", print_hash_value);
    transparent_crc(p_1361->g_869.s3, "p_1361->g_869.s3", print_hash_value);
    transparent_crc(p_1361->g_869.s4, "p_1361->g_869.s4", print_hash_value);
    transparent_crc(p_1361->g_869.s5, "p_1361->g_869.s5", print_hash_value);
    transparent_crc(p_1361->g_869.s6, "p_1361->g_869.s6", print_hash_value);
    transparent_crc(p_1361->g_869.s7, "p_1361->g_869.s7", print_hash_value);
    transparent_crc(p_1361->g_881, "p_1361->g_881", print_hash_value);
    transparent_crc(p_1361->g_889.x, "p_1361->g_889.x", print_hash_value);
    transparent_crc(p_1361->g_889.y, "p_1361->g_889.y", print_hash_value);
    transparent_crc(p_1361->g_891.x, "p_1361->g_891.x", print_hash_value);
    transparent_crc(p_1361->g_891.y, "p_1361->g_891.y", print_hash_value);
    transparent_crc(p_1361->g_891.z, "p_1361->g_891.z", print_hash_value);
    transparent_crc(p_1361->g_891.w, "p_1361->g_891.w", print_hash_value);
    transparent_crc(p_1361->g_921, "p_1361->g_921", print_hash_value);
    transparent_crc(p_1361->g_959.x, "p_1361->g_959.x", print_hash_value);
    transparent_crc(p_1361->g_959.y, "p_1361->g_959.y", print_hash_value);
    transparent_crc(p_1361->g_959.z, "p_1361->g_959.z", print_hash_value);
    transparent_crc(p_1361->g_959.w, "p_1361->g_959.w", print_hash_value);
    transparent_crc(p_1361->g_994.s0, "p_1361->g_994.s0", print_hash_value);
    transparent_crc(p_1361->g_994.s1, "p_1361->g_994.s1", print_hash_value);
    transparent_crc(p_1361->g_994.s2, "p_1361->g_994.s2", print_hash_value);
    transparent_crc(p_1361->g_994.s3, "p_1361->g_994.s3", print_hash_value);
    transparent_crc(p_1361->g_994.s4, "p_1361->g_994.s4", print_hash_value);
    transparent_crc(p_1361->g_994.s5, "p_1361->g_994.s5", print_hash_value);
    transparent_crc(p_1361->g_994.s6, "p_1361->g_994.s6", print_hash_value);
    transparent_crc(p_1361->g_994.s7, "p_1361->g_994.s7", print_hash_value);
    transparent_crc(p_1361->g_994.s8, "p_1361->g_994.s8", print_hash_value);
    transparent_crc(p_1361->g_994.s9, "p_1361->g_994.s9", print_hash_value);
    transparent_crc(p_1361->g_994.sa, "p_1361->g_994.sa", print_hash_value);
    transparent_crc(p_1361->g_994.sb, "p_1361->g_994.sb", print_hash_value);
    transparent_crc(p_1361->g_994.sc, "p_1361->g_994.sc", print_hash_value);
    transparent_crc(p_1361->g_994.sd, "p_1361->g_994.sd", print_hash_value);
    transparent_crc(p_1361->g_994.se, "p_1361->g_994.se", print_hash_value);
    transparent_crc(p_1361->g_994.sf, "p_1361->g_994.sf", print_hash_value);
    transparent_crc(p_1361->g_1001.s0, "p_1361->g_1001.s0", print_hash_value);
    transparent_crc(p_1361->g_1001.s1, "p_1361->g_1001.s1", print_hash_value);
    transparent_crc(p_1361->g_1001.s2, "p_1361->g_1001.s2", print_hash_value);
    transparent_crc(p_1361->g_1001.s3, "p_1361->g_1001.s3", print_hash_value);
    transparent_crc(p_1361->g_1001.s4, "p_1361->g_1001.s4", print_hash_value);
    transparent_crc(p_1361->g_1001.s5, "p_1361->g_1001.s5", print_hash_value);
    transparent_crc(p_1361->g_1001.s6, "p_1361->g_1001.s6", print_hash_value);
    transparent_crc(p_1361->g_1001.s7, "p_1361->g_1001.s7", print_hash_value);
    transparent_crc(p_1361->g_1002.x, "p_1361->g_1002.x", print_hash_value);
    transparent_crc(p_1361->g_1002.y, "p_1361->g_1002.y", print_hash_value);
    transparent_crc(p_1361->g_1002.z, "p_1361->g_1002.z", print_hash_value);
    transparent_crc(p_1361->g_1002.w, "p_1361->g_1002.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1361->g_1043[i][j][k], "p_1361->g_1043[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1361->g_1075, "p_1361->g_1075", print_hash_value);
    transparent_crc(p_1361->g_1078.x, "p_1361->g_1078.x", print_hash_value);
    transparent_crc(p_1361->g_1078.y, "p_1361->g_1078.y", print_hash_value);
    transparent_crc(p_1361->g_1078.z, "p_1361->g_1078.z", print_hash_value);
    transparent_crc(p_1361->g_1078.w, "p_1361->g_1078.w", print_hash_value);
    transparent_crc(p_1361->g_1081.x, "p_1361->g_1081.x", print_hash_value);
    transparent_crc(p_1361->g_1081.y, "p_1361->g_1081.y", print_hash_value);
    transparent_crc(p_1361->g_1086.x, "p_1361->g_1086.x", print_hash_value);
    transparent_crc(p_1361->g_1086.y, "p_1361->g_1086.y", print_hash_value);
    transparent_crc(p_1361->g_1086.z, "p_1361->g_1086.z", print_hash_value);
    transparent_crc(p_1361->g_1086.w, "p_1361->g_1086.w", print_hash_value);
    transparent_crc(p_1361->g_1095.x, "p_1361->g_1095.x", print_hash_value);
    transparent_crc(p_1361->g_1095.y, "p_1361->g_1095.y", print_hash_value);
    transparent_crc(p_1361->g_1095.z, "p_1361->g_1095.z", print_hash_value);
    transparent_crc(p_1361->g_1095.w, "p_1361->g_1095.w", print_hash_value);
    transparent_crc(p_1361->g_1110.s0, "p_1361->g_1110.s0", print_hash_value);
    transparent_crc(p_1361->g_1110.s1, "p_1361->g_1110.s1", print_hash_value);
    transparent_crc(p_1361->g_1110.s2, "p_1361->g_1110.s2", print_hash_value);
    transparent_crc(p_1361->g_1110.s3, "p_1361->g_1110.s3", print_hash_value);
    transparent_crc(p_1361->g_1110.s4, "p_1361->g_1110.s4", print_hash_value);
    transparent_crc(p_1361->g_1110.s5, "p_1361->g_1110.s5", print_hash_value);
    transparent_crc(p_1361->g_1110.s6, "p_1361->g_1110.s6", print_hash_value);
    transparent_crc(p_1361->g_1110.s7, "p_1361->g_1110.s7", print_hash_value);
    transparent_crc(p_1361->g_1144.s0, "p_1361->g_1144.s0", print_hash_value);
    transparent_crc(p_1361->g_1144.s1, "p_1361->g_1144.s1", print_hash_value);
    transparent_crc(p_1361->g_1144.s2, "p_1361->g_1144.s2", print_hash_value);
    transparent_crc(p_1361->g_1144.s3, "p_1361->g_1144.s3", print_hash_value);
    transparent_crc(p_1361->g_1144.s4, "p_1361->g_1144.s4", print_hash_value);
    transparent_crc(p_1361->g_1144.s5, "p_1361->g_1144.s5", print_hash_value);
    transparent_crc(p_1361->g_1144.s6, "p_1361->g_1144.s6", print_hash_value);
    transparent_crc(p_1361->g_1144.s7, "p_1361->g_1144.s7", print_hash_value);
    transparent_crc(p_1361->g_1146.x, "p_1361->g_1146.x", print_hash_value);
    transparent_crc(p_1361->g_1146.y, "p_1361->g_1146.y", print_hash_value);
    transparent_crc(p_1361->g_1225.x, "p_1361->g_1225.x", print_hash_value);
    transparent_crc(p_1361->g_1225.y, "p_1361->g_1225.y", print_hash_value);
    transparent_crc(p_1361->g_1225.z, "p_1361->g_1225.z", print_hash_value);
    transparent_crc(p_1361->g_1225.w, "p_1361->g_1225.w", print_hash_value);
    transparent_crc(p_1361->g_1232.s0, "p_1361->g_1232.s0", print_hash_value);
    transparent_crc(p_1361->g_1232.s1, "p_1361->g_1232.s1", print_hash_value);
    transparent_crc(p_1361->g_1232.s2, "p_1361->g_1232.s2", print_hash_value);
    transparent_crc(p_1361->g_1232.s3, "p_1361->g_1232.s3", print_hash_value);
    transparent_crc(p_1361->g_1232.s4, "p_1361->g_1232.s4", print_hash_value);
    transparent_crc(p_1361->g_1232.s5, "p_1361->g_1232.s5", print_hash_value);
    transparent_crc(p_1361->g_1232.s6, "p_1361->g_1232.s6", print_hash_value);
    transparent_crc(p_1361->g_1232.s7, "p_1361->g_1232.s7", print_hash_value);
    transparent_crc(p_1361->g_1232.s8, "p_1361->g_1232.s8", print_hash_value);
    transparent_crc(p_1361->g_1232.s9, "p_1361->g_1232.s9", print_hash_value);
    transparent_crc(p_1361->g_1232.sa, "p_1361->g_1232.sa", print_hash_value);
    transparent_crc(p_1361->g_1232.sb, "p_1361->g_1232.sb", print_hash_value);
    transparent_crc(p_1361->g_1232.sc, "p_1361->g_1232.sc", print_hash_value);
    transparent_crc(p_1361->g_1232.sd, "p_1361->g_1232.sd", print_hash_value);
    transparent_crc(p_1361->g_1232.se, "p_1361->g_1232.se", print_hash_value);
    transparent_crc(p_1361->g_1232.sf, "p_1361->g_1232.sf", print_hash_value);
    transparent_crc(p_1361->g_1265.x, "p_1361->g_1265.x", print_hash_value);
    transparent_crc(p_1361->g_1265.y, "p_1361->g_1265.y", print_hash_value);
    transparent_crc(p_1361->g_1290.x, "p_1361->g_1290.x", print_hash_value);
    transparent_crc(p_1361->g_1290.y, "p_1361->g_1290.y", print_hash_value);
    transparent_crc(p_1361->g_1290.z, "p_1361->g_1290.z", print_hash_value);
    transparent_crc(p_1361->g_1290.w, "p_1361->g_1290.w", print_hash_value);
    transparent_crc(p_1361->g_1293.s0, "p_1361->g_1293.s0", print_hash_value);
    transparent_crc(p_1361->g_1293.s1, "p_1361->g_1293.s1", print_hash_value);
    transparent_crc(p_1361->g_1293.s2, "p_1361->g_1293.s2", print_hash_value);
    transparent_crc(p_1361->g_1293.s3, "p_1361->g_1293.s3", print_hash_value);
    transparent_crc(p_1361->g_1293.s4, "p_1361->g_1293.s4", print_hash_value);
    transparent_crc(p_1361->g_1293.s5, "p_1361->g_1293.s5", print_hash_value);
    transparent_crc(p_1361->g_1293.s6, "p_1361->g_1293.s6", print_hash_value);
    transparent_crc(p_1361->g_1293.s7, "p_1361->g_1293.s7", print_hash_value);
    transparent_crc(p_1361->g_1293.s8, "p_1361->g_1293.s8", print_hash_value);
    transparent_crc(p_1361->g_1293.s9, "p_1361->g_1293.s9", print_hash_value);
    transparent_crc(p_1361->g_1293.sa, "p_1361->g_1293.sa", print_hash_value);
    transparent_crc(p_1361->g_1293.sb, "p_1361->g_1293.sb", print_hash_value);
    transparent_crc(p_1361->g_1293.sc, "p_1361->g_1293.sc", print_hash_value);
    transparent_crc(p_1361->g_1293.sd, "p_1361->g_1293.sd", print_hash_value);
    transparent_crc(p_1361->g_1293.se, "p_1361->g_1293.se", print_hash_value);
    transparent_crc(p_1361->g_1293.sf, "p_1361->g_1293.sf", print_hash_value);
    transparent_crc(p_1361->g_1300.s0, "p_1361->g_1300.s0", print_hash_value);
    transparent_crc(p_1361->g_1300.s1, "p_1361->g_1300.s1", print_hash_value);
    transparent_crc(p_1361->g_1300.s2, "p_1361->g_1300.s2", print_hash_value);
    transparent_crc(p_1361->g_1300.s3, "p_1361->g_1300.s3", print_hash_value);
    transparent_crc(p_1361->g_1300.s4, "p_1361->g_1300.s4", print_hash_value);
    transparent_crc(p_1361->g_1300.s5, "p_1361->g_1300.s5", print_hash_value);
    transparent_crc(p_1361->g_1300.s6, "p_1361->g_1300.s6", print_hash_value);
    transparent_crc(p_1361->g_1300.s7, "p_1361->g_1300.s7", print_hash_value);
    transparent_crc(p_1361->g_1323.s0, "p_1361->g_1323.s0", print_hash_value);
    transparent_crc(p_1361->g_1323.s1, "p_1361->g_1323.s1", print_hash_value);
    transparent_crc(p_1361->g_1323.s2, "p_1361->g_1323.s2", print_hash_value);
    transparent_crc(p_1361->g_1323.s3, "p_1361->g_1323.s3", print_hash_value);
    transparent_crc(p_1361->g_1323.s4, "p_1361->g_1323.s4", print_hash_value);
    transparent_crc(p_1361->g_1323.s5, "p_1361->g_1323.s5", print_hash_value);
    transparent_crc(p_1361->g_1323.s6, "p_1361->g_1323.s6", print_hash_value);
    transparent_crc(p_1361->g_1323.s7, "p_1361->g_1323.s7", print_hash_value);
    transparent_crc(p_1361->g_1323.s8, "p_1361->g_1323.s8", print_hash_value);
    transparent_crc(p_1361->g_1323.s9, "p_1361->g_1323.s9", print_hash_value);
    transparent_crc(p_1361->g_1323.sa, "p_1361->g_1323.sa", print_hash_value);
    transparent_crc(p_1361->g_1323.sb, "p_1361->g_1323.sb", print_hash_value);
    transparent_crc(p_1361->g_1323.sc, "p_1361->g_1323.sc", print_hash_value);
    transparent_crc(p_1361->g_1323.sd, "p_1361->g_1323.sd", print_hash_value);
    transparent_crc(p_1361->g_1323.se, "p_1361->g_1323.se", print_hash_value);
    transparent_crc(p_1361->g_1323.sf, "p_1361->g_1323.sf", print_hash_value);
    transparent_crc(p_1361->g_1327.s0, "p_1361->g_1327.s0", print_hash_value);
    transparent_crc(p_1361->g_1327.s1, "p_1361->g_1327.s1", print_hash_value);
    transparent_crc(p_1361->g_1327.s2, "p_1361->g_1327.s2", print_hash_value);
    transparent_crc(p_1361->g_1327.s3, "p_1361->g_1327.s3", print_hash_value);
    transparent_crc(p_1361->g_1327.s4, "p_1361->g_1327.s4", print_hash_value);
    transparent_crc(p_1361->g_1327.s5, "p_1361->g_1327.s5", print_hash_value);
    transparent_crc(p_1361->g_1327.s6, "p_1361->g_1327.s6", print_hash_value);
    transparent_crc(p_1361->g_1327.s7, "p_1361->g_1327.s7", print_hash_value);
    transparent_crc(p_1361->g_1327.s8, "p_1361->g_1327.s8", print_hash_value);
    transparent_crc(p_1361->g_1327.s9, "p_1361->g_1327.s9", print_hash_value);
    transparent_crc(p_1361->g_1327.sa, "p_1361->g_1327.sa", print_hash_value);
    transparent_crc(p_1361->g_1327.sb, "p_1361->g_1327.sb", print_hash_value);
    transparent_crc(p_1361->g_1327.sc, "p_1361->g_1327.sc", print_hash_value);
    transparent_crc(p_1361->g_1327.sd, "p_1361->g_1327.sd", print_hash_value);
    transparent_crc(p_1361->g_1327.se, "p_1361->g_1327.se", print_hash_value);
    transparent_crc(p_1361->g_1327.sf, "p_1361->g_1327.sf", print_hash_value);
    transparent_crc(p_1361->v_collective, "p_1361->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 55; i++)
            transparent_crc(p_1361->g_special_values[i + 55 * get_linear_group_id()], "p_1361->g_special_values[i + 55 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 55; i++)
            transparent_crc(p_1361->l_special_values[i], "p_1361->l_special_values[i]", print_hash_value);
    transparent_crc(p_1361->l_comm_values[get_linear_local_id()], "p_1361->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1361->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()], "p_1361->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
