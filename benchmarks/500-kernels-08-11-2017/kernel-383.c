// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,13,11 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{6,0,1,3,5,2,4}, // permutation 0
{6,5,3,4,2,0,1}, // permutation 1
{6,2,5,0,1,3,4}, // permutation 2
{5,0,3,2,4,1,6}, // permutation 3
{1,0,4,6,5,2,3}, // permutation 4
{1,0,6,5,4,2,3}, // permutation 5
{1,2,0,4,6,5,3}, // permutation 6
{1,5,0,3,2,4,6}, // permutation 7
{2,0,4,3,5,6,1}, // permutation 8
{5,4,1,2,0,6,3} // permutation 9
};

// Seed: 3027983616

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    volatile int32_t g_22;
    volatile int32_t * volatile g_21;
    uint8_t g_78[2][1][9];
    VECTOR(uint8_t, 16) g_92;
    int32_t g_102;
    int32_t g_115;
    VECTOR(int16_t, 2) g_117;
    uint8_t *g_121[2][4][9];
    int64_t g_123;
    VECTOR(uint16_t, 2) g_176;
    uint64_t g_204;
    int8_t g_211;
    int8_t g_212;
    VECTOR(int32_t, 4) g_233;
    VECTOR(int32_t, 4) g_235;
    int32_t *g_270;
    int32_t **g_269;
    int32_t ***g_268;
    VECTOR(int8_t, 16) g_274;
    int16_t *g_277;
    VECTOR(int8_t, 2) g_289;
    int16_t **g_302;
    VECTOR(int32_t, 2) g_361;
    VECTOR(int32_t, 16) g_362;
    VECTOR(int32_t, 4) g_363;
    int16_t **g_370;
    uint32_t g_390;
    VECTOR(int32_t, 4) g_394;
    VECTOR(int32_t, 2) g_398;
    VECTOR(int32_t, 16) g_399;
    VECTOR(int32_t, 4) g_401;
    VECTOR(int32_t, 8) g_402;
    VECTOR(int16_t, 2) g_411;
    uint64_t g_423;
    VECTOR(int32_t, 2) g_444;
    VECTOR(int32_t, 2) g_445;
    VECTOR(uint8_t, 2) g_449;
    VECTOR(int32_t, 2) g_450;
    VECTOR(uint8_t, 2) g_469;
    VECTOR(uint64_t, 4) g_472;
    VECTOR(int8_t, 16) g_478;
    VECTOR(int8_t, 4) g_481;
    VECTOR(uint8_t, 4) g_496;
    VECTOR(int32_t, 4) g_515;
    uint8_t g_530;
    int32_t *g_535[7];
    VECTOR(int8_t, 4) g_542;
    volatile uint64_t g_554;
    volatile uint64_t *g_553;
    volatile uint64_t **g_552[4];
    VECTOR(uint64_t, 8) g_562;
    VECTOR(uint16_t, 4) g_589;
    VECTOR(int16_t, 8) g_616;
    VECTOR(uint8_t, 2) g_622;
    int32_t g_628;
    int32_t g_630;
    volatile int8_t *g_661;
    volatile int8_t **g_660;
    VECTOR(int8_t, 8) g_677;
    VECTOR(int8_t, 2) g_695;
    int16_t ***g_716;
    int16_t g_786;
    uint8_t *g_804;
    uint64_t g_807;
    uint64_t g_811[3][2];
    VECTOR(int32_t, 8) g_814;
    uint32_t g_860;
    int32_t *g_868;
    VECTOR(int16_t, 2) g_880;
    VECTOR(int16_t, 4) g_882;
    VECTOR(int32_t, 4) g_886;
    uint8_t g_948;
    VECTOR(int16_t, 4) g_1003;
    VECTOR(int64_t, 8) g_1016;
    VECTOR(int8_t, 2) g_1051;
    int8_t *g_1062;
    int8_t **g_1061[7];
    VECTOR(int8_t, 2) g_1075;
    VECTOR(uint16_t, 4) g_1108;
    VECTOR(int32_t, 2) g_1128;
    volatile int64_t * volatile g_1137;
    volatile int64_t * volatile *g_1136;
    int32_t g_1154;
    VECTOR(int32_t, 2) g_1160;
    int64_t g_1182;
    VECTOR(int32_t, 4) g_1185;
    VECTOR(uint16_t, 8) g_1220;
    VECTOR(uint64_t, 16) g_1221;
    VECTOR(int32_t, 4) g_1251;
    VECTOR(uint64_t, 2) g_1274;
    volatile int32_t g_1293;
    volatile int32_t *g_1292;
    volatile int32_t **g_1291;
    volatile int32_t ** volatile *g_1290;
    VECTOR(int32_t, 2) g_1299;
    VECTOR(uint32_t, 8) g_1301;
    VECTOR(int32_t, 16) g_1310;
    int32_t g_1358;
    int32_t g_1365;
    volatile int32_t ** volatile * volatile * volatile *g_1420;
    int8_t ***g_1431[2];
    int64_t g_1456;
    VECTOR(int64_t, 4) g_1553;
    VECTOR(uint16_t, 16) g_1572;
    VECTOR(uint8_t, 16) g_1574;
    VECTOR(uint8_t, 4) g_1575;
    int32_t *g_1586;
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
uint64_t  func_1(struct S0 * p_1605);
int32_t  func_4(int32_t  p_5, int32_t * p_6, uint16_t  p_7, uint32_t  p_8, uint64_t  p_9, struct S0 * p_1605);
uint64_t  func_12(int32_t  p_13, int32_t * p_14, uint16_t  p_15, struct S0 * p_1605);
uint16_t  func_16(int32_t  p_17, uint32_t  p_18, int32_t * p_19, int32_t * p_20, struct S0 * p_1605);
int64_t  func_23(uint32_t  p_24, uint32_t  p_25, int32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_1605);
uint32_t  func_29(uint32_t  p_30, struct S0 * p_1605);
int32_t * func_71(uint8_t  p_72, int32_t ** p_73, uint64_t  p_74, int8_t  p_75, int32_t ** p_76, struct S0 * p_1605);
int32_t ** func_81(uint16_t  p_82, struct S0 * p_1605);
uint8_t  func_105(int32_t  p_106, struct S0 * p_1605);
int32_t * func_109(int32_t  p_110, int32_t * p_111, struct S0 * p_1605);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1605->g_comm_values p_1605->g_3 p_1605->l_comm_values p_1605->g_21 p_1605->g_78 p_1605->g_92 p_1605->g_115 p_1605->g_102 p_1605->g_117 p_1605->g_176 p_1605->g_212 p_1605->g_269 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_268 p_1605->g_398 p_1605->g_394 p_1605->g_361 p_1605->g_469 p_1605->g_481 p_1605->g_211 p_1605->g_444 p_1605->g_399 p_1605->g_695 p_1605->g_472 p_1605->g_786 p_1605->g_530 p_1605->g_628 p_1605->g_811 p_1605->g_716 p_1605->g_302 p_1605->g_562 p_1605->g_860 p_1605->g_616 p_1605->g_948 p_1605->g_814 p_1605->g_401 p_1605->g_450 p_1605->g_1154 p_1605->g_1160 p_1605->g_1185 p_1605->g_289 p_1605->g_1221 p_1605->g_630 p_1605->g_123 p_1605->g_1290 p_1605->g_515 p_1605->g_1456 p_1605->g_1136 p_1605->g_1137 p_1605->g_1553 p_1605->g_553 p_1605->g_554 p_1605->g_1301 p_1605->g_622 p_1605->g_22
 * writes: p_1605->g_3 p_1605->g_78 p_1605->g_102 p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_270 p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_211 p_1605->g_212 p_1605->g_204 p_1605->g_589 p_1605->g_535 p_1605->g_423 p_1605->g_530 p_1605->g_868 p_1605->g_948 p_1605->g_811 p_1605->g_1182 p_1605->g_630 p_1605->g_121 p_1605->g_1456 p_1605->g_1154 p_1605->g_786
 */
uint64_t  func_1(struct S0 * p_1605)
{ /* block id: 4 */
    int32_t *l_2 = &p_1605->g_3;
    int32_t l_1591 = 1L;
    uint64_t l_1592 = 0x15872E617CA75137L;
    int64_t l_1604 = 0x16F5FAD29D17F3B8L;
    (*l_2) &= p_1605->g_comm_values[p_1605->tid];
    l_1604 = func_4((safe_lshift_func_uint16_t_u_u((func_12((*l_2), l_2, func_16(p_1605->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))], ((void*)0 == p_1605->g_21), l_2, (func_23(func_29(p_1605->g_3, p_1605), (5UL > p_1605->g_3), p_1605->g_comm_values[p_1605->tid], l_2, p_1605->g_3, p_1605) , l_2), p_1605), p_1605) , p_1605->g_117.y), l_1591)), &l_1591, p_1605->g_1301.s6, l_1592, p_1605->g_622.y, p_1605);
    return (*l_2);
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_21 p_1605->g_22 p_1605->g_269 p_1605->g_117 p_1605->g_102 p_1605->l_comm_values p_1605->g_3 p_1605->g_comm_values p_1605->g_176 p_1605->g_115 p_1605->g_92 p_1605->g_212 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_268 p_1605->g_398 p_1605->g_394 p_1605->g_361
 * writes: p_1605->g_270 p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_121
 */
int32_t  func_4(int32_t  p_5, int32_t * p_6, uint16_t  p_7, uint32_t  p_8, uint64_t  p_9, struct S0 * p_1605)
{ /* block id: 724 */
    uint16_t l_1595 = 65528UL;
    uint8_t *l_1602 = (void*)0;
    uint8_t **l_1603 = (void*)0;
    (*p_1605->g_269) = func_109(((*p_6) = (safe_mod_func_int32_t_s_s(l_1595, (*p_1605->g_21)))), ((*p_1605->g_269) = &p_5), p_1605);
    (*p_6) = (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_1595, 6)), (--p_8))) , l_1602) == (p_1605->g_121[1][3][2] = l_1602));
    return l_1595;
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_102 p_1605->g_268 p_1605->g_269 p_1605->g_123 p_1605->g_3 p_1605->g_948 p_1605->g_390 p_1605->g_1456 p_1605->g_1136 p_1605->g_1137 p_1605->g_115 p_1605->g_117 p_1605->l_comm_values p_1605->g_comm_values p_1605->g_176 p_1605->g_92 p_1605->g_212 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_398 p_1605->g_394 p_1605->g_361 p_1605->g_469 p_1605->g_481 p_1605->g_211 p_1605->g_444 p_1605->g_399 p_1605->g_811 p_1605->g_1553 p_1605->g_786 p_1605->g_530 p_1605->g_628 p_1605->g_716 p_1605->g_302 p_1605->g_562 p_1605->g_860 p_1605->g_616 p_1605->g_814 p_1605->g_553 p_1605->g_554
 * writes: p_1605->g_102 p_1605->g_270 p_1605->g_123 p_1605->g_121 p_1605->g_1456 p_1605->g_530 p_1605->g_3 p_1605->g_948 p_1605->g_390 p_1605->g_1154 p_1605->g_115 p_1605->g_comm_values p_1605->g_363 p_1605->g_394 p_1605->g_211 p_1605->g_212 p_1605->g_204 p_1605->g_589 p_1605->g_811 p_1605->g_535 p_1605->g_423 p_1605->g_868 p_1605->g_786
 */
uint64_t  func_12(int32_t  p_13, int32_t * p_14, uint16_t  p_15, struct S0 * p_1605)
{ /* block id: 679 */
    uint32_t l_1498[6][9][4] = {{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}},{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}},{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}},{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}},{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}},{{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL},{0UL,4294967294UL,0UL,0xA1E8837AL}}};
    uint8_t *l_1513[8][6][5] = {{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}},{{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530},{&p_1605->g_948,(void*)0,&p_1605->g_78[1][0][2],&p_1605->g_78[1][0][1],&p_1605->g_530}}};
    int32_t l_1546 = (-1L);
    VECTOR(int32_t, 4) l_1556 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-1L)), (-1L));
    int32_t ****l_1561 = &p_1605->g_268;
    uint32_t l_1562 = 0xDBCA5224L;
    int64_t *l_1563 = &p_1605->g_1182;
    int16_t *l_1564 = (void*)0;
    int16_t *l_1565 = &p_1605->g_786;
    VECTOR(uint16_t, 4) l_1573 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
    int32_t *l_1587 = &p_1605->g_1358;
    uint64_t *l_1588 = (void*)0;
    uint64_t *l_1589 = &p_1605->g_204;
    int8_t *l_1590 = &p_1605->g_211;
    int i, j, k;
    p_14 = &p_13;
    if ((*p_14))
    { /* block id: 681 */
        int32_t l_1503 = 0x48534C15L;
        int32_t *l_1506 = &p_1605->g_3;
        uint64_t *l_1515 = &p_1605->g_807;
        if ((*p_14))
        { /* block id: 682 */
            return p_15;
        }
        else
        { /* block id: 684 */
            int32_t *l_1489 = &p_1605->g_102;
            int32_t *l_1490 = (void*)0;
            int32_t *l_1491 = &p_1605->g_102;
            int32_t *l_1492 = &p_1605->g_1154;
            int32_t *l_1493 = (void*)0;
            int32_t *l_1494 = (void*)0;
            int32_t *l_1495 = (void*)0;
            int32_t *l_1496 = (void*)0;
            int32_t *l_1497[3];
            VECTOR(uint16_t, 4) l_1512 = (VECTOR(uint16_t, 4))(0xFB65L, (VECTOR(uint16_t, 2))(0xFB65L, 0x4E8BL), 0x4E8BL);
            int8_t **l_1525 = &p_1605->g_1062;
            uint32_t *l_1527 = &p_1605->g_390;
            uint32_t l_1539 = 7UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1497[i] = &p_1605->g_1365;
            l_1498[1][1][3]++;
            for (p_1605->g_102 = 0; (p_1605->g_102 == (-11)); p_1605->g_102--)
            { /* block id: 688 */
                int64_t *l_1507 = (void*)0;
                int64_t *l_1508 = (void*)0;
                int64_t *l_1509 = &p_1605->g_123;
                uint8_t **l_1514[3][6] = {{&l_1513[3][2][0],(void*)0,&p_1605->g_121[0][3][5],(void*)0,&l_1513[3][2][0],&l_1513[3][2][0]},{&l_1513[3][2][0],(void*)0,&p_1605->g_121[0][3][5],(void*)0,&l_1513[3][2][0],&l_1513[3][2][0]},{&l_1513[3][2][0],(void*)0,&p_1605->g_121[0][3][5],(void*)0,&l_1513[3][2][0],&l_1513[3][2][0]}};
                int64_t *l_1516 = &p_1605->g_1456;
                int32_t l_1526[2][3][1] = {{{0x58235131L},{0x58235131L},{0x58235131L}},{{0x58235131L},{0x58235131L},{0x58235131L}}};
                uint16_t *l_1528 = (void*)0;
                uint16_t *l_1529[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j, k;
                (*l_1506) = ((p_1605->g_530 = ((+4294967295UL) != (((((l_1503 <= ((safe_rshift_func_int8_t_s_u((((*l_1509) &= (l_1506 == ((**p_1605->g_268) = l_1494))) | (((*l_1516) = (((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(l_1512.zyxwzywy)).lo))).x, (((((l_1513[3][2][0] == ((p_13 , 0xDFB7L) , (p_1605->g_121[0][3][5] = &p_1605->g_530))) , &p_1605->g_807) != l_1515) >= p_15) < p_13))) | (*p_14)) , p_15)) != p_15)), 7)) >= 0x795FL)) != p_13) > p_15) || 0x62L) < (-9L)))) && 0x7EL);
                (*l_1506) &= (safe_div_func_uint16_t_u_u((p_15 = (((l_1527 = p_14) == (void*)0) | l_1526[1][2][0])), l_1526[0][1][0]));
            }
            for (p_1605->g_948 = (-19); (p_1605->g_948 >= 3); p_1605->g_948++)
            { /* block id: 702 */
                uint32_t l_1538 = 0xB55F46E8L;
                atomic_sub(&p_1605->l_atomic_reduction[0], (safe_mul_func_uint8_t_u_u((((*l_1527)--) || 4294967294UL), ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))((l_1546 = (0x8C10A4D9L | (((l_1538 | l_1539) , 0x7CL) < ((safe_sub_func_int32_t_s_s(((*l_1492) = l_1498[3][0][2]), (0x27C1EABEE50DA618L && (*l_1506)))) , (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(18446744073709551615UL, p_15)) < (*l_1489)), (*l_1506))))))), ((VECTOR(uint8_t, 2))(4UL)), ((VECTOR(uint8_t, 4))(0x79L)), 0UL)).s76, ((VECTOR(uint8_t, 2))(0x9AL))))).even, p_15)) || p_15))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1605->v_collective += p_1605->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                return l_1498[1][1][3];
            }
        }
    }
    else
    { /* block id: 710 */
        int16_t ***l_1547 = &p_1605->g_370;
        int64_t *l_1548 = (void*)0;
        int64_t *l_1549 = &p_1605->g_1456;
        uint64_t *l_1550 = &p_1605->g_811[1][0];
        (*p_1605->g_269) = func_71((p_15 & ((*l_1549) ^= ((void*)0 != l_1547))), func_81((l_1549 != (*p_1605->g_1136)), p_1605), (((*l_1550)--) == ((VECTOR(int64_t, 16))(p_1605->g_1553.yzxyzyxxwyzxxyxx)).s7), (p_15 , p_15), (*p_1605->g_268), p_1605);
    }
    (*p_14) = (safe_sub_func_uint64_t_u_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1556.zyxywxyw)).odd)).hi)).xxxy)).z <= (*p_14)), (((void*)0 == l_1513[3][0][3]) | (((l_1498[1][1][3] && (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_1565) = ((l_1562 = (l_1561 != &p_1605->g_268)) != (((void*)0 == l_1563) & (l_1563 != (void*)0)))), 0x6060L)), 7))) && p_13) && 0x5AB6L))));
    (**p_1605->g_268) = &p_13;
    return (*p_1605->g_553);
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_268 p_1605->g_269
 * writes: p_1605->g_270
 */
uint16_t  func_16(int32_t  p_17, uint32_t  p_18, int32_t * p_19, int32_t * p_20, struct S0 * p_1605)
{ /* block id: 676 */
    int32_t l_1488 = 0L;
    (**p_1605->g_268) = (void*)0;
    return l_1488;
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_comm_values p_1605->g_78 p_1605->l_comm_values p_1605->g_92 p_1605->g_3 p_1605->g_115 p_1605->g_102 p_1605->g_117 p_1605->g_176 p_1605->g_212 p_1605->g_269 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_268 p_1605->g_398 p_1605->g_394 p_1605->g_361 p_1605->g_469 p_1605->g_481 p_1605->g_211 p_1605->g_444 p_1605->g_399 p_1605->g_695 p_1605->g_472 p_1605->g_786 p_1605->g_530 p_1605->g_628 p_1605->g_811 p_1605->g_716 p_1605->g_302 p_1605->g_562 p_1605->g_860 p_1605->g_616 p_1605->g_948 p_1605->g_814 p_1605->g_401 p_1605->g_450 p_1605->g_1154 p_1605->g_1160 p_1605->g_1185 p_1605->g_289 p_1605->g_1221 p_1605->g_630 p_1605->g_123 p_1605->g_1290 p_1605->g_515
 * writes: p_1605->g_78 p_1605->g_102 p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_270 p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_211 p_1605->g_212 p_1605->g_204 p_1605->g_589 p_1605->g_535 p_1605->g_423 p_1605->g_530 p_1605->g_868 p_1605->g_948 p_1605->g_811 p_1605->g_1182 p_1605->g_630
 */
int64_t  func_23(uint32_t  p_24, uint32_t  p_25, int32_t  p_26, int32_t * p_27, int32_t  p_28, struct S0 * p_1605)
{ /* block id: 8 */
    uint32_t l_98 = 0x94FBAEB3L;
    int32_t *l_977 = (void*)0;
    VECTOR(int16_t, 4) l_1012 = (VECTOR(int16_t, 4))(0x551AL, (VECTOR(int16_t, 2))(0x551AL, 0L), 0L);
    VECTOR(int32_t, 16) l_1032 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0E6F7082L), 0x0E6F7082L), 0x0E6F7082L, 0L, 0x0E6F7082L, (VECTOR(int32_t, 2))(0L, 0x0E6F7082L), (VECTOR(int32_t, 2))(0L, 0x0E6F7082L), 0L, 0x0E6F7082L, 0L, 0x0E6F7082L);
    int8_t **l_1065[8];
    int32_t **l_1085 = &p_1605->g_868;
    int16_t l_1109 = (-10L);
    int32_t l_1150 = 4L;
    uint8_t l_1282 = 0xF9L;
    int64_t *l_1288 = (void*)0;
    int64_t l_1336[2][7][4] = {{{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)}},{{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)},{0x56DB2BA02903E6D9L,0x27B019DFBB8EC598L,0x532743A3689E3BCDL,(-2L)}}};
    int32_t l_1405 = 0x53FE90CBL;
    int8_t l_1408 = (-1L);
    int32_t ****l_1422 = (void*)0;
    int32_t *****l_1421 = &l_1422;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1065[i] = &p_1605->g_1062;
    for (p_25 = 19; (p_25 > 56); p_25 = safe_add_func_uint8_t_u_u(p_25, 7))
    { /* block id: 11 */
        for (p_24 = 0; (p_24 < 30); p_24++)
        { /* block id: 14 */
            if ((atomic_inc(&p_1605->l_atomic_input[0]) == 3))
            { /* block id: 16 */
                int64_t l_35 = 1L;
                int32_t l_36 = 1L;
                l_36 &= l_35;
                for (l_36 = (-8); (l_36 != 17); l_36++)
                { /* block id: 20 */
                    uint16_t l_39[2];
                    uint64_t l_42 = 0xB8CFF26AF9031EA0L;
                    int64_t l_64[2][1][3] = {{{0x1779538E5EFB48CAL,0x1779538E5EFB48CAL,0x1779538E5EFB48CAL}},{{0x1779538E5EFB48CAL,0x1779538E5EFB48CAL,0x1779538E5EFB48CAL}}};
                    int32_t *l_66 = (void*)0;
                    int32_t **l_65[5] = {&l_66,&l_66,&l_66,&l_66,&l_66};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_39[i] = 0xFF15L;
                    --l_39[0];
                    if ((l_42 = 1L))
                    { /* block id: 23 */
                        int8_t l_43 = (-2L);
                        int32_t l_44 = 0L;
                        uint8_t l_45 = 0xD0L;
                        VECTOR(uint32_t, 16) l_48 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD71B36C9L), 0xD71B36C9L), 0xD71B36C9L, 0UL, 0xD71B36C9L, (VECTOR(uint32_t, 2))(0UL, 0xD71B36C9L), (VECTOR(uint32_t, 2))(0UL, 0xD71B36C9L), 0UL, 0xD71B36C9L, 0UL, 0xD71B36C9L);
                        uint32_t l_49 = 0x633933B8L;
                        uint32_t l_50[10][10] = {{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL},{1UL,4294967294UL,3UL,7UL,1UL,0x060A3B7DL,4294967294UL,0x88DD0BB2L,7UL,0x060A3B7DL}};
                        int16_t l_51 = 0x231DL;
                        int32_t *l_52 = &l_44;
                        int32_t *l_53 = (void*)0;
                        int i, j;
                        l_45--;
                        l_51 = ((VECTOR(int32_t, 4))((l_49 = l_48.s3), (l_44 = (l_50[3][7] = 2L)), 0x2458230BL, 1L)).w;
                        l_53 = l_52;
                    }
                    else
                    { /* block id: 30 */
                        int32_t l_55 = 0x6AADAF8DL;
                        int32_t *l_54 = &l_55;
                        int16_t l_56 = 0L;
                        int8_t l_57 = (-3L);
                        uint32_t l_58 = 0UL;
                        uint8_t l_61 = 0x6DL;
                        l_54 = (void*)0;
                        ++l_58;
                        l_61++;
                    }
                    l_64[1][0][2] |= 0L;
                    l_65[2] = (void*)0;
                }
                unsigned int result = 0;
                result += l_35;
                result += l_36;
                atomic_add(&p_1605->l_special_values[0], result);
            }
            else
            { /* block id: 38 */
                (1 + 1);
            }
        }
    }
    for (p_24 = 0; (p_24 < 26); p_24++)
    { /* block id: 45 */
        if (p_1605->g_comm_values[p_1605->tid])
            break;
    }
    for (p_26 = 0; (p_26 > 26); ++p_26)
    { /* block id: 50 */
        uint8_t *l_77 = &p_1605->g_78[1][0][2];
        int32_t *l_88 = &p_1605->g_3;
        uint8_t *l_91 = (void*)0;
        uint8_t *l_93 = (void*)0;
        uint8_t *l_94[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_95 = 0L;
        uint64_t *l_986[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int8_t, 16) l_1007 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x42L), 0x42L), 0x42L, (-1L), 0x42L, (VECTOR(int8_t, 2))((-1L), 0x42L), (VECTOR(int8_t, 2))((-1L), 0x42L), (-1L), 0x42L, (-1L), 0x42L);
        VECTOR(int16_t, 16) l_1011 = (VECTOR(int16_t, 16))(0x4675L, (VECTOR(int16_t, 4))(0x4675L, (VECTOR(int16_t, 2))(0x4675L, 1L), 1L), 1L, 0x4675L, 1L, (VECTOR(int16_t, 2))(0x4675L, 1L), (VECTOR(int16_t, 2))(0x4675L, 1L), 0x4675L, 1L, 0x4675L, 1L);
        VECTOR(int16_t, 16) l_1024 = (VECTOR(int16_t, 16))(0x1E91L, (VECTOR(int16_t, 4))(0x1E91L, (VECTOR(int16_t, 2))(0x1E91L, 1L), 1L), 1L, 0x1E91L, 1L, (VECTOR(int16_t, 2))(0x1E91L, 1L), (VECTOR(int16_t, 2))(0x1E91L, 1L), 0x1E91L, 1L, 0x1E91L, 1L);
        int32_t l_1044 = 0x2950F5B2L;
        int32_t l_1045 = 1L;
        VECTOR(uint8_t, 2) l_1056 = (VECTOR(uint8_t, 2))(8UL, 0UL);
        int64_t *l_1104 = &p_1605->g_123;
        VECTOR(int16_t, 16) l_1107 = (VECTOR(int16_t, 16))(0x4C5DL, (VECTOR(int16_t, 4))(0x4C5DL, (VECTOR(int16_t, 2))(0x4C5DL, (-1L)), (-1L)), (-1L), 0x4C5DL, (-1L), (VECTOR(int16_t, 2))(0x4C5DL, (-1L)), (VECTOR(int16_t, 2))(0x4C5DL, (-1L)), 0x4C5DL, (-1L), 0x4C5DL, (-1L));
        int16_t l_1140 = 6L;
        uint32_t l_1165 = 0xF75736F4L;
        int8_t **l_1235 = &p_1605->g_1062;
        uint64_t l_1237 = 0x9FCAC4C794153C2DL;
        uint16_t *l_1241[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_1249 = 1UL;
        VECTOR(int16_t, 4) l_1269 = (VECTOR(int16_t, 4))(0x152CL, (VECTOR(int16_t, 2))(0x152CL, 0x0EB6L), 0x0EB6L);
        int8_t l_1281 = 1L;
        VECTOR(int16_t, 2) l_1295 = (VECTOR(int16_t, 2))((-10L), 0x198FL);
        VECTOR(int64_t, 16) l_1297 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        VECTOR(int32_t, 4) l_1298 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L));
        int32_t ****l_1309[3];
        int8_t ***l_1396 = &p_1605->g_1061[3];
        int16_t ***l_1401 = &p_1605->g_370;
        int8_t l_1410[6][1][6] = {{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}},{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}},{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}},{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}},{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}},{{3L,0x3CL,1L,(-1L),0x3CL,(-1L)}}};
        int8_t l_1416[8] = {0x72L,0x5BL,0x72L,0x72L,0x5BL,0x72L,0x72L,0x5BL};
        uint64_t l_1417[7][5] = {{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL},{0UL,0x6CA7FF2B5FCD29D1L,18446744073709551608UL,0xD348DA56B65CC408L,18446744073709551608UL}};
        uint32_t l_1483 = 5UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1309[i] = &p_1605->g_268;
        l_977 = func_71(((*l_77)++), func_81((((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((((safe_unary_minus_func_uint64_t_u(p_24)) , &p_26) != l_88), (l_95 = (safe_lshift_func_int16_t_s_u(p_26, 5))))) < (0UL && (safe_add_func_int32_t_s_s(l_98, (func_29((0x45L ^ ((~(p_26 <= (l_98 < FAKE_DIVERGE(p_1605->global_1_offset, get_global_id(1), 10)))) == p_24)), p_1605) | l_98))))) <= p_1605->g_comm_values[p_1605->tid]) == p_28), p_1605->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))])) >= p_1605->g_92.s2) & p_26), p_1605), p_1605->g_695.y, p_1605->g_472.w, (*p_1605->g_268), p_1605);
        if ((*p_27))
        { /* block id: 441 */
            int16_t l_987 = 0x733DL;
            uint16_t *l_989 = (void*)0;
            VECTOR(int8_t, 8) l_1006 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x15L), 0x15L), 0x15L, 8L, 0x15L);
            VECTOR(int16_t, 16) l_1008 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int16_t, 2))((-1L), (-3L)), (VECTOR(int16_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
            VECTOR(int8_t, 2) l_1027 = (VECTOR(int8_t, 2))(0x26L, 0x3FL);
            int32_t l_1042[8] = {0x0E454641L,0L,0x0E454641L,0x0E454641L,0L,0x0E454641L,0x0E454641L,0L};
            VECTOR(uint64_t, 8) l_1057 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xEE9A10F1252B5CC5L), 0xEE9A10F1252B5CC5L), 0xEE9A10F1252B5CC5L, 1UL, 0xEE9A10F1252B5CC5L);
            uint16_t l_1060 = 0UL;
            int8_t **l_1064[6] = {(void*)0,&p_1605->g_1062,(void*)0,(void*)0,&p_1605->g_1062,(void*)0};
            VECTOR(int32_t, 2) l_1070 = (VECTOR(int32_t, 2))(0x107FACF9L, 0x0C70281DL);
            uint16_t l_1106 = 0xF9E3L;
            VECTOR(int64_t, 8) l_1114 = (VECTOR(int64_t, 8))(0x3D08186D507CACB4L, (VECTOR(int64_t, 4))(0x3D08186D507CACB4L, (VECTOR(int64_t, 2))(0x3D08186D507CACB4L, 0x03C97470C9364148L), 0x03C97470C9364148L), 0x03C97470C9364148L, 0x3D08186D507CACB4L, 0x03C97470C9364148L);
            int64_t **l_1135 = &l_1104;
            int32_t **l_1145 = &l_977;
            uint64_t *l_1176 = &p_1605->g_811[1][0];
            uint64_t *l_1179[5] = {&p_1605->g_423,&p_1605->g_423,&p_1605->g_423,&p_1605->g_423,&p_1605->g_423};
            int64_t *l_1180 = (void*)0;
            int64_t *l_1181 = &p_1605->g_1182;
            uint16_t *l_1183 = &l_1060;
            int32_t *l_1184[5][10] = {{&p_1605->g_115,&p_1605->g_115,&l_1044,(void*)0,(void*)0,(void*)0,&l_1044,&p_1605->g_115,&p_1605->g_115,&l_1044},{&p_1605->g_115,&p_1605->g_115,&l_1044,(void*)0,(void*)0,(void*)0,&l_1044,&p_1605->g_115,&p_1605->g_115,&l_1044},{&p_1605->g_115,&p_1605->g_115,&l_1044,(void*)0,(void*)0,(void*)0,&l_1044,&p_1605->g_115,&p_1605->g_115,&l_1044},{&p_1605->g_115,&p_1605->g_115,&l_1044,(void*)0,(void*)0,(void*)0,&l_1044,&p_1605->g_115,&p_1605->g_115,&l_1044},{&p_1605->g_115,&p_1605->g_115,&l_1044,(void*)0,(void*)0,(void*)0,&l_1044,&p_1605->g_115,&p_1605->g_115,&l_1044}};
            int i, j;
            for (p_1605->g_530 = 9; (p_1605->g_530 == 53); p_1605->g_530 = safe_add_func_int8_t_s_s(p_1605->g_530, 9))
            { /* block id: 444 */
                VECTOR(int8_t, 8) l_988 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4EL), 0x4EL), 0x4EL, 0L, 0x4EL);
                int32_t *l_992 = (void*)0;
                int32_t *l_993 = &l_95;
                VECTOR(int16_t, 16) l_1002 = (VECTOR(int16_t, 16))(0x5DB6L, (VECTOR(int16_t, 4))(0x5DB6L, (VECTOR(int16_t, 2))(0x5DB6L, (-3L)), (-3L)), (-3L), 0x5DB6L, (-3L), (VECTOR(int16_t, 2))(0x5DB6L, (-3L)), (VECTOR(int16_t, 2))(0x5DB6L, (-3L)), 0x5DB6L, (-3L), 0x5DB6L, (-3L));
                VECTOR(int16_t, 2) l_1009 = (VECTOR(int16_t, 2))(0x7877L, 0x4E7CL);
                VECTOR(int16_t, 2) l_1010 = (VECTOR(int16_t, 2))(0x70B1L, 0x2B32L);
                VECTOR(int16_t, 2) l_1013 = (VECTOR(int16_t, 2))(0x2BFFL, 0x5C5AL);
                VECTOR(uint64_t, 2) l_1015 = (VECTOR(uint64_t, 2))(0xC2E3A521504A2681L, 0xA7FAE179365B128AL);
                int32_t l_1033 = 0L;
                VECTOR(int32_t, 8) l_1043 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 5L), 5L), 5L, (-2L), 5L);
                int16_t l_1090 = 0x4DF5L;
                uint64_t *l_1121 = &p_1605->g_204;
                int32_t **l_1133 = &p_1605->g_868;
                uint32_t l_1156 = 2UL;
                int i;
                (*l_993) ^= ((p_1605->g_390 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((void*)0 != l_986[1][4]), ((l_987 == ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_988.s4346247212636043)))).s0) , p_24))), (p_1605->g_401.z , (((void*)0 == l_989) | (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, 2L)).yyyxyyyx)).s3333307471162550)).sc || ((safe_add_func_uint64_t_u_u(p_24, p_1605->g_450.y)) >= (-1L))))))), GROUP_DIVERGE(2, 1)))) & 0x4A447C32L);
            }
            l_1044 = (safe_add_func_uint32_t_u_u((l_1012.x , (1L < (safe_sub_func_uint32_t_u_u((p_1605->g_1154 > l_1165), (safe_mod_func_uint8_t_u_u(p_26, (l_1070.x = 0x6CL))))))), (safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_1183) = ((*p_27) , (safe_sub_func_uint64_t_u_u((((((*l_1181) = (safe_sub_func_uint32_t_u_u((((0x7F97FA76567D629EL >= (l_1042[2] &= ((*l_1176)--))) & p_25) , 4294967290UL), 1UL))) , l_1114.s2) || p_24) <= (*l_88)), p_1605->g_1160.x)))), 2)), p_26))));
            l_1044 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1605->g_1185.yyxx)).even)).hi;
            if ((*l_88))
                continue;
        }
        else
        { /* block id: 515 */
            int32_t *l_1186 = &p_1605->g_115;
            int16_t l_1189 = 0x2132L;
            VECTOR(uint64_t, 16) l_1213 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 4UL), 4UL), 4UL, 3UL, 4UL, (VECTOR(uint64_t, 2))(3UL, 4UL), (VECTOR(uint64_t, 2))(3UL, 4UL), 3UL, 4UL, 3UL, 4UL);
            VECTOR(int32_t, 16) l_1215 = (VECTOR(int32_t, 16))(0x20DC6379L, (VECTOR(int32_t, 4))(0x20DC6379L, (VECTOR(int32_t, 2))(0x20DC6379L, 7L), 7L), 7L, 0x20DC6379L, 7L, (VECTOR(int32_t, 2))(0x20DC6379L, 7L), (VECTOR(int32_t, 2))(0x20DC6379L, 7L), 0x20DC6379L, 7L, 0x20DC6379L, 7L);
            int64_t *l_1216 = &p_1605->g_1182;
            int i;
            (*l_1186) &= (*p_27);
            for (p_1605->g_630 = 0; (p_1605->g_630 < (-11)); --p_1605->g_630)
            { /* block id: 519 */
                (*l_1186) ^= (l_1189 <= p_1605->g_1154);
            }
            for (l_1109 = 0; (l_1109 != (-9)); l_1109 = safe_sub_func_uint16_t_u_u(l_1109, 8))
            { /* block id: 524 */
                uint8_t l_1196[10] = {0xCEL,0xCEL,0xCEL,0xCEL,0xCEL,0xCEL,0xCEL,0xCEL,0xCEL,0xCEL};
                int16_t *l_1209 = (void*)0;
                int16_t *l_1210 = (void*)0;
                int16_t *l_1211 = (void*)0;
                int16_t *l_1212 = &l_1189;
                uint64_t l_1214[9];
                int32_t l_1219 = 0x56C3B8FCL;
                VECTOR(int64_t, 2) l_1222 = (VECTOR(int64_t, 2))(0x12F85E95D3933296L, 6L);
                int32_t l_1225 = 0x32ED1C7FL;
                VECTOR(uint16_t, 4) l_1230 = (VECTOR(uint16_t, 4))(0x821AL, (VECTOR(uint16_t, 2))(0x821AL, 3UL), 3UL);
                int8_t **l_1233 = &p_1605->g_1062;
                int i;
                for (i = 0; i < 9; i++)
                    l_1214[i] = 0x49136825288D6DB5L;
                if ((*p_27))
                    break;
                (*l_1186) = (p_1605->g_401.z , ((safe_add_func_int16_t_s_s((*l_1186), (safe_sub_func_uint32_t_u_u((*l_88), ((~((~((((((p_1605->g_1185.y , ((l_1196[5] < 0UL) , FAKE_DIVERGE(p_1605->local_1_offset, get_local_id(1), 10))) || (safe_div_func_int8_t_s_s(((((((GROUP_DIVERGE(1, 1) <= (safe_sub_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u(p_1605->g_289.x, ((*l_1212) = (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((*l_1186), (safe_sub_func_uint8_t_u_u((~p_28), (*l_88))))) <= (*l_1186)), p_28))))) , (*l_1186)) < 0x0399L), 7L))) && (*l_1186)) >= 0x7687FBD8L) , FAKE_DIVERGE(p_1605->global_0_offset, get_global_id(0), 10)) & 1L) && 1UL), p_26))) <= l_1213.sd) & p_28) || (*l_1186)) , l_1214[4])) | 0x259C83C7L)) ^ (*p_27)))))) && (*p_27)));
                if (((VECTOR(int32_t, 4))(l_1215.sd243)).w)
                { /* block id: 528 */
                    int64_t *l_1217 = &p_1605->g_1182;
                    VECTOR(uint32_t, 4) l_1218 = (VECTOR(uint32_t, 4))(0xB3830965L, (VECTOR(uint32_t, 2))(0xB3830965L, 0x5E8CAD2CL), 0x5E8CAD2CL);
                    int16_t *l_1223 = (void*)0;
                    int16_t *l_1224 = (void*)0;
                    int8_t ***l_1234 = &l_1233;
                    uint32_t l_1236 = 4294967290UL;
                    int i;
                    (*l_1186) = (((((((l_1216 = &p_1605->g_1182) == l_1217) || ((((((VECTOR(uint32_t, 2))(l_1218.wx)).lo , ((*l_1212) = (l_1219 |= p_24))) <= (p_28 ^ (!(l_1225 = (((0x1104L & ((VECTOR(uint16_t, 16))(p_1605->g_1220.s2451230545644574)).s3) ^ p_25) ^ ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 4))(p_1605->g_1221.s81a0)).xzyzxyzwzwzwwyzw, ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_1222.xy))))))).xxxyxyyyxxxyyyxy))).sf5)).even))))) > p_28) != ((((l_1196[5] && ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_1230.xy)).lo, (safe_lshift_func_uint8_t_u_u(((((*l_1234) = (((*l_1104) = (*l_1186)) , l_1233)) != l_1235) <= l_1218.y), p_25)))), p_1605->g_1221.s3)) , 0x44L)) , p_26) || GROUP_DIVERGE(0, 1)) , GROUP_DIVERGE(1, 1)))) && l_1236) , (-1L)) < p_1605->g_630) | (*p_27));
                }
                else
                { /* block id: 536 */
                    int32_t l_1240 = 4L;
                    (**p_1605->g_268) = l_1186;
                }
            }
        }
        if (((void*)0 != l_1241[1]))
        { /* block id: 541 */
            int32_t *l_1248[9];
            VECTOR(int16_t, 4) l_1250 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0C20L), 0x0C20L);
            VECTOR(int32_t, 4) l_1258 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L);
            int64_t *l_1287 = (void*)0;
            uint16_t *l_1289 = (void*)0;
            int i;
            for (i = 0; i < 9; i++)
                l_1248[i] = (void*)0;
            for (l_98 = 0; (l_98 < 58); ++l_98)
            { /* block id: 544 */
                uint32_t *l_1256 = &l_1249;
                VECTOR(uint32_t, 4) l_1257 = (VECTOR(uint32_t, 4))(0xF067D488L, (VECTOR(uint32_t, 2))(0xF067D488L, 4294967290UL), 4294967290UL);
                VECTOR(int16_t, 4) l_1267 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 1L), 1L);
                VECTOR(int16_t, 8) l_1268 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x062BL), 0x062BL), 0x062BL, 2L, 0x062BL);
                uint64_t *l_1275 = &p_1605->g_811[1][1];
                int16_t *l_1278 = (void*)0;
                int16_t *l_1279 = (void*)0;
                int16_t *l_1280[5][7][5] = {{{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1140,(void*)0,(void*)0}}};
                int32_t l_1294 = 0x7D907DE1L;
                VECTOR(int64_t, 8) l_1296 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
                VECTOR(int32_t, 4) l_1300 = (VECTOR(int32_t, 4))(0x055DFFC4L, (VECTOR(int32_t, 2))(0x055DFFC4L, 0x4CF5D6CDL), 0x4CF5D6CDL);
                int32_t ***l_1304[10][8] = {{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269},{&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269,&p_1605->g_269}};
                int64_t *l_1305 = (void*)0;
                int64_t *l_1306[5][8][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (l_1140 = (-22); (l_1140 > 7); l_1140 = safe_add_func_int8_t_s_s(l_1140, 5))
                { /* block id: 547 */
                    for (l_1150 = (-21); (l_1150 > 23); l_1150 = safe_add_func_int16_t_s_s(l_1150, 3))
                    { /* block id: 550 */
                        if ((*p_27))
                            break;
                        (*p_1605->g_269) = l_1248[2];
                    }
                    if (l_1249)
                        continue;
                    (**p_1605->g_268) = &p_26;
                }
                l_1044 = ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1250.wzzy)), 0x7D22L, ((VECTOR(int16_t, 2))(0x47F6L, 0x1EA3L)), (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1605->g_1251.wwxzyzwz)).lo)).zyyzwzxyyyxyxzzw, (int32_t)(((*l_1256) |= (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1605->global_1_offset, get_global_id(1), 10), (safe_lshift_func_uint16_t_u_u(p_25, 14))))) == ((VECTOR(uint32_t, 8))(p_28, 0x5DB82A04L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1257.wy)))), 0UL, 4294967293UL)), 8UL, 4294967295UL)).s1)))), ((VECTOR(int32_t, 8))(l_1258.xzwzxzwz)).s3531150575463555))).s6 != (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_24, (+(safe_mod_func_uint8_t_u_u(7UL, (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_1267.zyxy)).ywzwzyzzxxzzywzy, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(l_1268.s55)), ((VECTOR(int16_t, 8))(l_1269.yzwwzyxy)).s52))).xxxyxyyyxxyxyxyy))).even)), ((VECTOR(int16_t, 8))((l_1281 |= (!((VECTOR(int16_t, 16))(1L, (safe_mod_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((((*l_1275) = ((VECTOR(uint64_t, 2))(p_1605->g_1274.xx)).odd) != (0xFE567385C1E14D35L <= p_25)), (safe_rshift_func_int16_t_s_s((*l_88), 6)))) != p_24) > (-7L)), p_25)), p_28, ((VECTOR(int16_t, 4))(0x5FD5L)), 0x623DL, p_24, 0L, 0x6217L, p_25, ((VECTOR(int16_t, 4))(0x6C5CL)))).s5)), ((VECTOR(int16_t, 2))(0x680CL)), p_26, ((VECTOR(int16_t, 2))(0x4C9BL)), (-1L), 1L)))).s7, p_26))))))), 0x224FL))), 0x126FL, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))(0x7784L)), (-4L))).sf , (-5L)) , l_1282);
                l_1258.w ^= ((*p_1605->g_269) == (l_1248[7] = (((safe_mod_func_int32_t_s_s(((p_1605->g_390 = ((safe_mul_func_int8_t_s_s((((l_1287 == l_1288) == ((p_1605->g_123 |= (l_1289 != l_1278)) <= (((l_1294 = ((void*)0 == p_1605->g_1290)) || ((VECTOR(int16_t, 4))(l_1295.xxyx)).z) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-2L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(l_1296.s53)).yyyyxxyxxyxxyxxy, ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(0x577A054718FC5D57L, 0x53B6FD18C890E7F9L, 4L, 0x14B0844637F1CA8DL)).xxxxywwzzzxwyzyw, ((VECTOR(int64_t, 4))(0L, p_26, (-9L), 0x2268857076DA1017L)).yxyxxyyxxxzxzyzz))), ((VECTOR(int64_t, 8))(9L, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 2))(1L, 0x4E530752EF0D4DA6L)), ((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1297.sda1c)).wxxwyyzy)).s7521102373575203, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x6E4263DD564E3859L, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1298.wzwx)).hi)).yxyyxyxxxxyxxyyy)), ((VECTOR(int32_t, 2))(0L, 0L)).yyxxyyxxxxxyxyyy))).odd, ((VECTOR(int32_t, 2))(p_1605->g_1299.yx)).xxyyyxyx, ((VECTOR(int32_t, 2))(l_1300.xw)).xyyxxyxy))).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1605->g_1301.s76)))), (((p_1605->g_1016.s3 = ((safe_div_func_uint32_t_u_u(((void*)0 != l_1304[3][4]), p_25)) < 0x70D6329283B3E4FDL)) < p_1605->g_1108.x) == p_1605->g_1251.w), ((VECTOR(uint32_t, 4))(0xFFABD1F1L)), 0x048053B7L)).odd)), FAKE_DIVERGE(p_1605->group_0_offset, get_group_id(0), 10), p_1605->g_622.x, 0x6F917D8CL, 0xE346F648L)).even))).yxwzwxyzwywwxxxw, ((VECTOR(int64_t, 16))((-3L))))))))).s5d)).yyyx, ((VECTOR(int64_t, 4))((-1L)))))), 0L, (-10L), 0x095EC52AC934A093L)), 0L, 0L, ((VECTOR(int64_t, 2))(0x1282344281A3CDBCL)), 0L, 0x3923640D5B0E815FL, 0x72CDA3340A2F8DF5L, 0x3CF3998A2FCB89F0L))))).hi, (int64_t)p_28))).s01))), ((VECTOR(int64_t, 4))(0x2E26F3EA44354555L)), (-1L))).s2606522765035130))), ((VECTOR(int64_t, 16))(0L))))))).s61, ((VECTOR(int64_t, 2))(0x37749A8076886C0CL)), ((VECTOR(int64_t, 2))((-1L)))))))).xxxxxxyxyxyxxyxy)).even)).s6505266020663631)).s69, ((VECTOR(int64_t, 2))(1L))))))), (-1L))).hi)))).yxxxxyxy)).s35, ((VECTOR(int64_t, 2))(0x5A5604C4717047B0L))))).yyxxyxyyxyxxyxyy)).hi, ((VECTOR(int64_t, 8))(0x076539B5FBEABBC7L))))).hi)).y))) || (*l_88)), (-1L))) , p_1605->g_515.z)) | p_1605->g_481.w), (*p_27))) && p_25) , (*p_1605->g_269))));
            }
        }
        else
        { /* block id: 568 */
            uint8_t l_1323 = 0UL;
            int32_t l_1345[8] = {7L,7L,7L,7L,7L,7L,7L,7L};
            int32_t l_1356 = 0L;
            int32_t l_1359 = 0x3780EAE0L;
            uint32_t l_1373 = 0x063EC4A6L;
            int64_t *l_1382 = &l_1336[0][0][2];
            uint32_t l_1400 = 0xC830EB5FL;
            uint32_t l_1427[2];
            int32_t *l_1457 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1427[i] = 0UL;
            for (l_1237 = 0; (l_1237 < 12); l_1237 = safe_add_func_int64_t_s_s(l_1237, 2))
            { /* block id: 571 */
                uint32_t l_1318[8] = {0x6DB29340L,0x6DB29340L,0x6DB29340L,0x6DB29340L,0x6DB29340L,0x6DB29340L,0x6DB29340L,0x6DB29340L};
                int8_t *l_1320 = (void*)0;
                int16_t l_1355 = (-1L);
                int16_t l_1357 = 0x6939L;
                int32_t l_1360[3][8][8] = {{{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L}},{{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L}},{{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L},{(-1L),7L,(-1L),(-4L),0L,(-1L),0x302F5C34L,0x2B238321L}}};
                int16_t l_1415 = 0L;
                int32_t *l_1446 = (void*)0;
                uint64_t *l_1472 = &l_1237;
                int32_t l_1478 = 0x0EFD5201L;
                int i, j, k;
                (1 + 1);
            }
        }
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->l_comm_values
 * writes:
 */
uint32_t  func_29(uint32_t  p_30, struct S0 * p_1605)
{ /* block id: 6 */
    return p_1605->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))];
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_270 p_1605->g_269 p_1605->g_268 p_1605->g_423 p_1605->g_530 p_1605->g_211 p_1605->g_786 p_1605->g_628 p_1605->g_811 p_1605->g_814 p_1605->g_716 p_1605->g_302 p_1605->g_562 p_1605->g_123 p_1605->g_860 p_1605->g_444 p_1605->g_398 p_1605->g_880 p_1605->g_882 p_1605->g_886 p_1605->g_78 p_1605->g_616 p_1605->g_117 p_1605->g_102 p_1605->l_comm_values p_1605->g_3 p_1605->g_comm_values p_1605->g_176 p_1605->g_115 p_1605->g_92 p_1605->g_212 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_394 p_1605->g_361 p_1605->g_481 p_1605->g_363 p_1605->g_948
 * writes: p_1605->g_270 p_1605->g_535 p_1605->g_423 p_1605->g_530 p_1605->g_211 p_1605->g_123 p_1605->g_868 p_1605->g_115 p_1605->g_comm_values p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_948 p_1605->g_102 p_1605->g_212
 */
int32_t * func_71(uint8_t  p_72, int32_t ** p_73, uint64_t  p_74, int8_t  p_75, int32_t ** p_76, struct S0 * p_1605)
{ /* block id: 309 */
    uint16_t l_764 = 65528UL;
    int32_t l_769[2][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
    VECTOR(uint64_t, 16) l_799 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0853211BCB6EF2C2L), 0x0853211BCB6EF2C2L), 0x0853211BCB6EF2C2L, 18446744073709551611UL, 0x0853211BCB6EF2C2L, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0853211BCB6EF2C2L), (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x0853211BCB6EF2C2L), 18446744073709551611UL, 0x0853211BCB6EF2C2L, 18446744073709551611UL, 0x0853211BCB6EF2C2L);
    int16_t **l_839[1][4][8] = {{{(void*)0,(void*)0,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,(void*)0},{(void*)0,(void*)0,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,(void*)0},{(void*)0,(void*)0,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,(void*)0},{(void*)0,(void*)0,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,&p_1605->g_277,(void*)0}}};
    uint32_t *l_895 = &p_1605->g_390;
    uint64_t l_939 = 0x85A818C9D563DFD4L;
    uint8_t **l_960 = &p_1605->g_121[0][1][3];
    int i, j, k;
    p_1605->g_535[2] = ((*p_1605->g_269) = (*p_76));
    for (p_74 = 22; (p_74 <= 33); ++p_74)
    { /* block id: 314 */
        (*p_1605->g_269) = (**p_1605->g_268);
        (**p_1605->g_268) = (*p_1605->g_269);
    }
    for (p_1605->g_423 = (-25); (p_1605->g_423 <= 60); ++p_1605->g_423)
    { /* block id: 320 */
        int8_t l_724 = 1L;
        VECTOR(int32_t, 16) l_725 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
        int i;
        l_725.sc = (p_72 == l_724);
        if (l_724)
            break;
    }
    for (p_1605->g_530 = 0; (p_1605->g_530 == 1); p_1605->g_530++)
    { /* block id: 326 */
        VECTOR(uint64_t, 2) l_739 = (VECTOR(uint64_t, 2))(0x9224F7BA2D7392FCL, 0x341833E57BECB628L);
        int32_t l_740 = 8L;
        VECTOR(uint32_t, 4) l_800 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 8UL), 8UL);
        int32_t ****l_810 = &p_1605->g_268;
        uint16_t l_812 = 0x6367L;
        int32_t *l_869 = &p_1605->g_630;
        VECTOR(int32_t, 8) l_883 = (VECTOR(int32_t, 8))(0x4A3A22D6L, (VECTOR(int32_t, 4))(0x4A3A22D6L, (VECTOR(int32_t, 2))(0x4A3A22D6L, 0x60AA4A9AL), 0x60AA4A9AL), 0x60AA4A9AL, 0x4A3A22D6L, 0x60AA4A9AL);
        uint64_t *l_917 = &p_1605->g_807;
        int8_t l_947[2][3][3] = {{{0x27L,0x27L,0x27L},{0x27L,0x27L,0x27L},{0x27L,0x27L,0x27L}},{{0x27L,0x27L,0x27L},{0x27L,0x27L,0x27L},{0x27L,0x27L,0x27L}}};
        uint64_t l_959 = 0UL;
        int16_t **l_963 = (void*)0;
        uint8_t **l_966 = &p_1605->g_804;
        int32_t *l_968 = (void*)0;
        int32_t *l_969 = &p_1605->g_115;
        int32_t *l_970 = &p_1605->g_102;
        int32_t *l_971 = (void*)0;
        int32_t *l_972 = &l_769[1][2];
        int32_t *l_973 = (void*)0;
        uint16_t l_974 = 0x2A29L;
        int i, j, k;
        for (p_1605->g_211 = 16; (p_1605->g_211 > (-30)); --p_1605->g_211)
        { /* block id: 329 */
            int8_t l_753 = (-1L);
            int32_t l_770 = 0x29924E0CL;
            VECTOR(uint64_t, 2) l_795 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE2F0E47D64FCDADBL);
            VECTOR(uint64_t, 4) l_796 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL), 18446744073709551614UL);
            int32_t l_843[9][8] = {{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL},{0x02444EA0L,0x2337979BL,0x03E84AFEL,0x02444EA0L,0x7357D53FL,0x03E84AFEL,0x03E84AFEL,0x7357D53FL}};
            int32_t *l_844 = &l_843[6][2];
            int16_t l_845 = 0x1812L;
            uint64_t l_855 = 18446744073709551612UL;
            uint32_t l_877 = 0x64E721D7L;
            VECTOR(int32_t, 16) l_885 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
            int i, j;
            if ((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0xC4L, 3)), 2)), ((safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_739.xyxyyxxyxyyxxxyy)).s84)).hi)) && p_75))), (l_740 = (l_739.y | (((&p_1605->g_661 == &p_1605->g_661) & p_74) & GROUP_DIVERGE(2, 1)))))))
            { /* block id: 331 */
                VECTOR(int16_t, 4) l_751 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 7L), 7L);
                VECTOR(uint16_t, 2) l_752 = (VECTOR(uint16_t, 2))(4UL, 0xC36BL);
                uint16_t *l_760 = (void*)0;
                uint16_t *l_761[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int16_t *l_765 = (void*)0;
                int16_t *l_766 = (void*)0;
                int16_t *l_767 = (void*)0;
                int16_t *l_768[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_770 &= (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x51L, (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((((l_769[1][2] = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_751.zy)))), (0x46B0L != ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(255UL, (((VECTOR(uint16_t, 4))(l_752.xxxy)).w , (((l_753 | (safe_mul_func_uint16_t_u_u((l_740 = (safe_div_func_int64_t_s_s(l_753, (safe_add_func_int8_t_s_s(l_752.x, 0xF2L))))), (p_1605->g_102 , (((safe_add_func_uint16_t_u_u((l_739.x != (l_764 != 0x599B29CBL)), 65535UL)) != p_75) && l_764))))) && l_752.y) <= p_72)), 246UL, ((VECTOR(uint8_t, 4))(249UL)), 0xF5L, 255UL, p_75, 0xA3L, l_739.x, ((VECTOR(uint8_t, 4))(0UL)))))).se40f, ((VECTOR(uint8_t, 4))(0xD0L))))).x), 5L, 0x1296L, 0x5686L, l_753, 0x0784L, l_764, 0x39F7L, l_739.x, (-1L), 0x672EL, 0x7359L, (-1L), 1L)), (int16_t)p_75, (int16_t)(-9L)))))))).sf) || l_740) , p_74) != p_72), l_739.y)) >= 0x2BD51B02404C0F00L), GROUP_DIVERGE(1, 1))))), l_739.x)), 0x68B1L));
                if ((atomic_inc(&p_1605->g_atomic_input[4 * get_linear_group_id() + 2]) == 4))
                { /* block id: 336 */
                    uint32_t l_771 = 0xA2B3E9E5L;
                    uint16_t l_772 = 8UL;
                    int32_t *l_773 = (void*)0;
                    uint32_t l_774 = 0x8B523C12L;
                    l_772 &= l_771;
                    l_773 = (void*)0;
                    l_774 = 0x5C27E747L;
                    unsigned int result = 0;
                    result += l_771;
                    result += l_772;
                    result += l_774;
                    atomic_add(&p_1605->g_special_values[4 * get_linear_group_id() + 2], result);
                }
                else
                { /* block id: 340 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 343 */
                VECTOR(uint32_t, 4) l_801 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
                VECTOR(uint64_t, 8) l_802 = (VECTOR(uint64_t, 8))(0xD5B72F2DCD76F126L, (VECTOR(uint64_t, 4))(0xD5B72F2DCD76F126L, (VECTOR(uint64_t, 2))(0xD5B72F2DCD76F126L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xD5B72F2DCD76F126L, 18446744073709551615UL);
                VECTOR(uint64_t, 4) l_803 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x84CA0C2666CDBD4EL), 0x84CA0C2666CDBD4EL);
                int32_t ***l_809 = &p_1605->g_269;
                VECTOR(int32_t, 16) l_832 = (VECTOR(int32_t, 16))(0x17F275FBL, (VECTOR(int32_t, 4))(0x17F275FBL, (VECTOR(int32_t, 2))(0x17F275FBL, 0x30F41797L), 0x30F41797L), 0x30F41797L, 0x17F275FBL, 0x30F41797L, (VECTOR(int32_t, 2))(0x17F275FBL, 0x30F41797L), (VECTOR(int32_t, 2))(0x17F275FBL, 0x30F41797L), 0x17F275FBL, 0x30F41797L, 0x17F275FBL, 0x30F41797L);
                int i;
                for (l_764 = 2; (l_764 > 26); l_764++)
                { /* block id: 346 */
                    uint32_t l_777[10] = {4294967292UL,1UL,4294967292UL,4294967292UL,1UL,4294967292UL,4294967292UL,1UL,4294967292UL,4294967292UL};
                    int32_t ***l_782 = (void*)0;
                    uint8_t l_813 = 0x78L;
                    VECTOR(int32_t, 16) l_834 = (VECTOR(int32_t, 16))(0x65A5AB55L, (VECTOR(int32_t, 4))(0x65A5AB55L, (VECTOR(int32_t, 2))(0x65A5AB55L, 0x2E96B19AL), 0x2E96B19AL), 0x2E96B19AL, 0x65A5AB55L, 0x2E96B19AL, (VECTOR(int32_t, 2))(0x65A5AB55L, 0x2E96B19AL), (VECTOR(int32_t, 2))(0x65A5AB55L, 0x2E96B19AL), 0x65A5AB55L, 0x2E96B19AL, 0x65A5AB55L, 0x2E96B19AL);
                    int32_t l_835 = 0L;
                    uint64_t *l_837 = (void*)0;
                    uint64_t **l_836 = &l_837;
                    int16_t **l_838 = &p_1605->g_277;
                    int32_t **l_840 = &p_1605->g_535[2];
                    int32_t *l_842 = (void*)0;
                    int32_t **l_841 = &l_842;
                    int i;
                    l_777[4]++;
                    for (p_75 = 0; (p_75 >= 24); p_75 = safe_add_func_int16_t_s_s(p_75, 9))
                    { /* block id: 350 */
                        int32_t ****l_783 = &l_782;
                        VECTOR(uint64_t, 8) l_798 = (VECTOR(uint64_t, 8))(0x2CCD80222E1CB4B5L, (VECTOR(uint64_t, 4))(0x2CCD80222E1CB4B5L, (VECTOR(uint64_t, 2))(0x2CCD80222E1CB4B5L, 0x9BC83D97F2454912L), 0x9BC83D97F2454912L), 0x9BC83D97F2454912L, 0x2CCD80222E1CB4B5L, 0x9BC83D97F2454912L);
                        uint8_t **l_805 = &p_1605->g_121[0][2][1];
                        uint64_t *l_806 = &p_1605->g_807;
                        int8_t l_808 = (-1L);
                        int64_t *l_817 = &p_1605->g_123;
                        int32_t *l_818[6];
                        VECTOR(uint8_t, 4) l_829 = (VECTOR(uint8_t, 4))(0x3CL, (VECTOR(uint8_t, 2))(0x3CL, 0xE4L), 0xE4L);
                        VECTOR(int32_t, 4) l_833 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x235129B6L), 0x235129B6L);
                        int i;
                        for (i = 0; i < 6; i++)
                            l_818[i] = (void*)0;
                        l_813 = ((~(((((((*l_783) = l_782) == (((((safe_lshift_func_int16_t_s_u(p_1605->g_786, (safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((safe_mul_func_uint16_t_u_u((~(~(safe_lshift_func_uint8_t_u_u((((((*l_806) = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(4UL, 1UL)), 1UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_795.xxyxxyyy)).even)))), 3UL)).hi)), ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_796.ywxy)).even)), 0x37CAAA797ED19044L, ((0x0836684FL <= (safe_unary_minus_func_uint32_t_u(p_74))) && 0x54L), ((VECTOR(uint64_t, 2))(l_798.s22)), 0x1CE7A0CE5AF68FE8L, 0UL)).lo)), 0x8B5967F12856FE30L, ((VECTOR(uint64_t, 2))(l_799.s09)), 2UL)).odd, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0xADD95B282B106AD3L, ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(l_800.wzzzwwwyyxxwwyzz)).s6a66, ((VECTOR(uint32_t, 16))(l_801.yyzyzwwzzyzzzwww)).s1d5a))), ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(l_802.s0776)).odd, ((VECTOR(uint64_t, 2))(l_803.ww))))), 0x2B10A7C55B63308BL)).s15)).xxxx)))))).wywzxxwyxwxwyxyw, (uint64_t)(p_1605->g_804 == ((*l_805) = &p_1605->g_530))))).odd)).s5 == ((GROUP_DIVERGE(1, 1) , ((*p_73) = (*p_76))) == &l_769[1][4]))) , 0L) , p_75) , p_75), l_796.z)))), l_808)) , l_777[4]), ((VECTOR(int32_t, 4))(0x077E4119L)), ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 2))(0L)), 0x55CCDEA3L)), ((VECTOR(int32_t, 16))(0x0BDB1F5FL))))).saf))).xxyx))).xxxzwzyw)).s3, 0xC522CAD1L)), p_1605->g_530)))) ^ 0x0A9AC4F4L) == l_769[1][2]) & p_74) , l_809)) , p_1605->g_628) , l_810) != (void*)0) , p_1605->g_811[0][1])) != l_812);
                        l_740 = ((VECTOR(int32_t, 16))(l_764, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x05D4B910L, 0x0F63D780L)), 0x6E284F24L, (-10L))).lo))), l_753, 0x0A709463L, 9L, ((VECTOR(int32_t, 16))(p_1605->g_814.s6750061053076713)).s6, (-1L), ((safe_div_func_int16_t_s_s((2L | ((*l_817) = ((p_1605->g_211 , &p_1605->g_269) != &p_1605->g_269))), 7L)) < p_74), ((-4L) || 1UL), ((VECTOR(int32_t, 4))(0x54323C79L)), 0x4663B574L, (-6L))).s0;
                        l_769[1][2] = ((((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_72, (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((0x68L | FAKE_DIVERGE(p_1605->local_2_offset, get_local_id(2), 10)) == (safe_div_func_int8_t_s_s(((*p_1605->g_716) != (*p_1605->g_716)), ((VECTOR(uint8_t, 16))(l_829.yxxzyxzxxxxxwwzx)).s5))), p_74)), (l_783 == &p_1605->g_268))))), (safe_lshift_func_uint16_t_u_u(((l_799.s5 & ((VECTOR(int32_t, 8))(7L, 0x2D08C2BBL, 0x2B4BFA79L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_832.sbe)).yxyx)).even, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_833.zxwxyywxwxxwywww)).s7adf, ((VECTOR(int32_t, 2))(l_834.s27)).yyyy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-9L), (((p_75 || l_835) , l_836) != &p_1605->g_553), 0x2AE241B7L, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))((-2L))), 0x348DFA65L)).even))))).odd))), 0x433ACBADL, 1L, 0L)).s6) , l_795.x), p_1605->g_562.s6)))) , l_838) != l_839[0][2][3]) & p_75);
                    }
                    if (l_795.y)
                        break;
                    (*l_841) = ((*l_840) = ((*p_76) = (**p_1605->g_268)));
                }
            }
            if (((*l_844) = l_843[2][2]))
            { /* block id: 367 */
                int32_t *l_846 = (void*)0;
                int32_t *l_847 = &l_769[1][2];
                int32_t *l_848 = (void*)0;
                int32_t *l_849 = (void*)0;
                int32_t l_850 = 0L;
                int32_t *l_851 = (void*)0;
                int32_t *l_852 = (void*)0;
                int32_t *l_853 = &l_769[1][1];
                int32_t *l_854[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_854[i] = &l_843[0][6];
                l_855++;
            }
            else
            { /* block id: 369 */
                int32_t l_896 = (-1L);
                VECTOR(int32_t, 16) l_901 = (VECTOR(int32_t, 16))(0x3771F8FDL, (VECTOR(int32_t, 4))(0x3771F8FDL, (VECTOR(int32_t, 2))(0x3771F8FDL, (-1L)), (-1L)), (-1L), 0x3771F8FDL, (-1L), (VECTOR(int32_t, 2))(0x3771F8FDL, (-1L)), (VECTOR(int32_t, 2))(0x3771F8FDL, (-1L)), 0x3771F8FDL, (-1L), 0x3771F8FDL, (-1L));
                uint8_t l_942 = 0xD3L;
                int8_t *l_964 = &p_1605->g_212;
                int8_t *l_965 = &l_753;
                uint8_t **l_967 = &p_1605->g_121[1][2][2];
                int i;
                for (p_1605->g_123 = 0; (p_1605->g_123 < 22); p_1605->g_123 = safe_add_func_uint64_t_u_u(p_1605->g_123, 1))
                { /* block id: 372 */
                    int16_t l_863 = 0x5706L;
                    int32_t *l_866 = &p_1605->g_630;
                    int32_t *l_870 = (void*)0;
                    int32_t l_876 = 0x37751822L;
                    VECTOR(int16_t, 8) l_881 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L));
                    VECTOR(int32_t, 4) l_884 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                    int i;
                    if (((p_1605->g_860 < (((void*)0 != &p_1605->g_553) < 8L)) & p_74))
                    { /* block id: 373 */
                        if (l_764)
                            break;
                    }
                    else
                    { /* block id: 375 */
                        int64_t l_861 = 0x4251DD3BCB861F04L;
                        uint16_t *l_862 = (void*)0;
                        int32_t **l_867 = &l_866;
                        uint64_t *l_875 = (void*)0;
                        (*l_844) ^= l_861;
                        l_877 &= ((*l_844) = ((((((l_863 = 4UL) ^ ((safe_add_func_uint8_t_u_u((((((p_1605->g_868 = ((*l_867) = l_866)) != (((p_1605->g_444.x && (~((l_799.sa >= (((((l_869 != l_870) , ((((GROUP_DIVERGE(2, 1) <= (safe_sub_func_uint64_t_u_u((p_74 = (safe_div_func_int64_t_s_s((p_74 < (&p_1605->g_628 != l_844)), p_1605->g_398.x))), 1UL))) , l_799.s1) == l_876) , p_74)) != p_72) <= 3UL) >= 0x80L)) != GROUP_DIVERGE(0, 1)))) >= 0x26L) , (void*)0)) > p_72) , FAKE_DIVERGE(p_1605->global_2_offset, get_global_id(2), 10)) , FAKE_DIVERGE(p_1605->local_1_offset, get_local_id(1), 10)), l_876)) | l_876)) , p_74) > p_72) >= p_1605->g_562.s2) >= p_75));
                    }
                    (*l_844) ^= ((((VECTOR(uint32_t, 8))((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1605->g_880.yxxx)).yyzwxwxzxwzzzwyz)).odd, ((VECTOR(int16_t, 8))(l_881.s75444537)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_75, ((VECTOR(int16_t, 2))(p_1605->g_882.zx)), ((VECTOR(int16_t, 2))(0x3956L, 0x144AL)), (((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-8L), 0x48A4738EL)).xxxxxxxyxxyyxyyx, ((VECTOR(int32_t, 2))(l_883.s61)).yyyyyxyyxyxxyyyx, ((VECTOR(int32_t, 16))(0x5CFF39C7L, ((VECTOR(int32_t, 4))(l_884.xywy)), ((VECTOR(int32_t, 4))(l_885.sf9f4)), ((VECTOR(int32_t, 4))(p_1605->g_886.ywzy)), 2L, 0x7D006D56L, 3L))))).s4 && 7L), 0x0820L, 0L)).s2437525744061650)).sbef1)))).yzywxzzz))).s5, 4)), ((VECTOR(uint32_t, 4))(p_1605->g_78[0][0][1], (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((((void*)0 == l_895) , 3L), l_764)), l_896)), 5)), 11)), 0UL, 0x7D4386CEL)), (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((GROUP_DIVERGE(1, 1) <= ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(0x496D1846831D0C89L, 7UL)).xxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x71393C5B532775DBL, 0UL)).xyxy))))))).y) & ((p_74 & 1UL) == l_799.s1)), l_881.s5)), 0L)), 0x8A013CB2L, 0xFF0A07FDL)).s3 && p_1605->g_616.s6) & l_769[1][1]);
                }
                if ((!l_799.s9))
                { /* block id: 386 */
                    uint64_t l_906[5][6][8] = {{{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L}},{{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L}},{{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L}},{{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L}},{{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L},{0UL,0xEE3CC09224C8F152L,0x34B6704AEEB64E94L,1UL,18446744073709551609UL,1UL,0x34B6704AEEB64E94L,0xEE3CC09224C8F152L}}};
                    int32_t *l_909 = (void*)0;
                    uint8_t l_923 = 255UL;
                    int16_t l_924 = 0x59E7L;
                    int32_t *l_925 = (void*)0;
                    int32_t *l_926 = &p_1605->g_102;
                    int32_t *l_927 = (void*)0;
                    int32_t *l_928 = (void*)0;
                    int32_t *l_929 = &l_896;
                    int32_t l_930 = 1L;
                    int32_t *l_931 = (void*)0;
                    int32_t *l_932 = (void*)0;
                    uint8_t l_933 = 0x5BL;
                    int16_t l_945 = (-1L);
                    int i, j, k;
                    if (((*l_844) = 0L))
                    { /* block id: 388 */
                        int32_t *l_902 = &l_843[2][7];
                        int32_t *l_903 = (void*)0;
                        int32_t *l_904 = (void*)0;
                        int32_t *l_905[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_905[i] = &p_1605->g_102;
                        (*p_73) = func_109((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xF2L, 1UL)).xyxyxyyy)).s6 , ((VECTOR(int32_t, 16))(l_901.s6aa73b275295ed55)).s0), l_902, p_1605);
                        --l_906[4][2][5];
                        if ((*l_844))
                            break;
                        (*p_1605->g_269) = l_909;
                    }
                    else
                    { /* block id: 393 */
                        int32_t *l_910 = &l_769[0][1];
                        (*l_844) ^= l_901.s3;
                        l_910 = (*p_76);
                        if (p_75)
                            continue;
                    }
                    for (l_764 = 3; (l_764 < 3); ++l_764)
                    { /* block id: 400 */
                        int16_t l_918 = (-7L);
                        int8_t *l_921[8][5][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int64_t *l_922[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        (*l_844) |= (safe_rshift_func_int16_t_s_s((l_923 &= ((safe_div_func_uint16_t_u_u(0x2D76L, (p_1605->g_481.z , ((((l_901.sf = (((((void*)0 == l_917) < (((+l_918) , (safe_sub_func_uint16_t_u_u(p_74, l_918))) & ((p_75 = p_72) < ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((l_918 != (-1L)) == (-4L)) , p_72), p_1605->g_363.x, 0x36L, (-9L))).odd)).xyyxxyxy, ((VECTOR(int8_t, 8))(0x4EL)), ((VECTOR(int8_t, 8))(0x70L))))).s37, ((VECTOR(int8_t, 2))(0x7DL))))).xxyyxxyyyyxxyyxx, ((VECTOR(int8_t, 16))(1L)), ((VECTOR(int8_t, 16))(0x24L))))), ((VECTOR(int8_t, 16))((-1L)))))).s1740, ((VECTOR(int8_t, 4))(0x60L)), ((VECTOR(int8_t, 4))(0x4CL))))).even)).lo))) <= p_72) && l_769[1][2])) == p_1605->g_860) , p_74) ^ 1UL)))) != l_918)), 4));
                        (*p_1605->g_269) = (*p_76);
                    }
                    ++l_933;
                    if ((*l_844))
                    { /* block id: 408 */
                        int32_t *l_936 = &l_769[0][3];
                        int32_t *l_937 = &l_769[0][4];
                        int32_t *l_938[5][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        ++l_939;
                        l_942--;
                        if (p_75)
                            continue;
                    }
                    else
                    { /* block id: 412 */
                        int32_t *l_946[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_946[i] = &l_930;
                        ++p_1605->g_948;
                        if (p_72)
                            continue;
                    }
                }
                else
                { /* block id: 416 */
                    if (l_901.s8)
                        break;
                    for (l_812 = 0; (l_812 < 10); l_812 = safe_add_func_uint32_t_u_u(l_812, 8))
                    { /* block id: 420 */
                        (*l_844) = l_901.se;
                    }
                    for (p_1605->g_102 = (-23); (p_1605->g_102 != (-25)); --p_1605->g_102)
                    { /* block id: 425 */
                        (*l_844) = (safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((GROUP_DIVERGE(2, 1) & 0UL), l_959)), 1));
                        return (**p_1605->g_268);
                    }
                }
                l_896 |= (((!(((VECTOR(uint8_t, 8))(((l_960 == l_960) > (((VECTOR(uint16_t, 4))(p_74, ((VECTOR(uint16_t, 2))(0xBE4EL, 0x183DL)), 0x13F1L)).w <= l_769[1][2])), ((*l_844) != (safe_mod_func_int16_t_s_s(l_769[0][1], ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((void*)0 == l_963) | ((*l_965) = ((*l_964) ^= (4294967295UL > 0x50C7B14FL)))), ((VECTOR(int8_t, 2))(1L)), 9L)).odd)).xyyyxxxx)).s6756662475510550, ((VECTOR(int8_t, 16))((-2L))), ((VECTOR(int8_t, 16))(0x55L))))).s7a, ((VECTOR(uint8_t, 2))(0xE4L))))).hi))), ((VECTOR(uint8_t, 4))(246UL)), 0UL, 255UL)).s5 , p_1605->g_814.s4)) , l_966) == l_967);
            }
        }
        --l_974;
        (*l_972) = ((-4L) >= 1UL);
        return (*p_76);
    }
    return (*p_76);
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_3 p_1605->g_102 p_1605->g_115 p_1605->g_117 p_1605->l_comm_values p_1605->g_comm_values p_1605->g_176 p_1605->g_92 p_1605->g_212 p_1605->g_269 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_268 p_1605->g_398 p_1605->g_394 p_1605->g_361 p_1605->g_123 p_1605->g_469 p_1605->g_589 p_1605->g_481 p_1605->g_211 p_1605->g_444 p_1605->g_616 p_1605->g_622 p_1605->g_630 p_1605->g_478 p_1605->g_450 p_1605->g_660 p_1605->g_399 p_1605->g_677 p_1605->g_695 p_1605->g_496
 * writes: p_1605->g_102 p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_270 p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_211 p_1605->g_212 p_1605->g_204 p_1605->g_628 p_1605->g_630 p_1605->g_589 p_1605->g_716
 */
int32_t ** func_81(uint16_t  p_82, struct S0 * p_1605)
{ /* block id: 53 */
    int32_t *l_99 = &p_1605->g_3;
    int32_t **l_100[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_101 = &p_1605->g_102;
    VECTOR(int8_t, 2) l_673 = (VECTOR(int8_t, 2))((-5L), (-10L));
    VECTOR(int8_t, 4) l_674 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x35L), 0x35L);
    VECTOR(int8_t, 2) l_675 = (VECTOR(int8_t, 2))(0x67L, 8L);
    VECTOR(int8_t, 2) l_676 = (VECTOR(int8_t, 2))(0x0AL, 0x73L);
    uint32_t *l_682 = &p_1605->g_390;
    uint16_t *l_685 = (void*)0;
    uint16_t *l_686 = (void*)0;
    int8_t *l_687 = (void*)0;
    int8_t *l_688 = (void*)0;
    int8_t *l_689 = (void*)0;
    int8_t *l_690 = &p_1605->g_211;
    int32_t l_691 = (-4L);
    int16_t l_692 = 0x3E50L;
    uint16_t *l_696 = (void*)0;
    int64_t *l_697 = &p_1605->g_123;
    VECTOR(uint16_t, 2) l_698 = (VECTOR(uint16_t, 2))(0xB6AEL, 65532UL);
    VECTOR(uint16_t, 4) l_699 = (VECTOR(uint16_t, 4))(0x7C68L, (VECTOR(uint16_t, 2))(0x7C68L, 0xB0CBL), 0xB0CBL);
    uint16_t *l_700 = (void*)0;
    uint16_t *l_701[1];
    uint64_t l_702 = 0x11D03DDECBEAB6CCL;
    VECTOR(int8_t, 8) l_705 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x20L), 0x20L), 0x20L, 7L, 0x20L);
    VECTOR(uint8_t, 8) l_712 = (VECTOR(uint8_t, 8))(0x33L, (VECTOR(uint8_t, 4))(0x33L, (VECTOR(uint8_t, 2))(0x33L, 255UL), 255UL), 255UL, 0x33L, 255UL);
    int16_t ***l_715 = &p_1605->g_302;
    uint64_t *l_717 = (void*)0;
    uint64_t *l_718 = &l_702;
    int8_t l_719 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_701[i] = (void*)0;
    l_101 = l_99;
    l_691 ^= (safe_div_func_int16_t_s_s((p_1605->g_3 , (((func_105(p_82, p_1605) , (safe_add_func_int16_t_s_s(((((*l_690) ^= ((p_82 <= (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1605->global_0_offset, get_global_id(0), 10), (p_1605->g_589.y = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((safe_rshift_func_uint8_t_u_u((*l_99), 7)), 0L, 1L, 0x0AL, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_673.yy)), ((VECTOR(int8_t, 4))(l_674.yywz)).hi))), ((VECTOR(int8_t, 2))(0x2DL, 0x0EL)), 1L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_675.yyxxyyxyyxxyxxxy)).s1c)).xyxyyyyx)).s47, ((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(l_676.yyyyyxxxxxyxxxyy)).se2, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1605->g_677.s63)))).yxyxyxxy)).s74, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))((safe_sub_func_uint32_t_u_u((0x7DL && ((safe_sub_func_int32_t_s_s(((((*l_682) = 0x07ABB052L) , (safe_div_func_int32_t_s_s((8L == p_1605->g_394.x), (*l_99)))) >= (*l_99)), p_82)) ^ p_82)), 1UL)), ((VECTOR(int8_t, 4))(8L)), ((VECTOR(int8_t, 2))(1L)), 1L)), ((VECTOR(int8_t, 8))(7L))))).s67)))))), 7L, (-1L))), ((VECTOR(int8_t, 2))(4L)), 0x2DL)).s66))), ((VECTOR(int8_t, 2))(0x12L)), 1L, 0x42L, 0x07L)).lo)).s2, (*l_99))))))) , (-7L))) > p_82) && (*l_101)), (-6L)))) < p_82) , 0x2C5FL)), p_82));
    l_692 = p_82;
    l_719 &= (safe_div_func_int8_t_s_s(((((*l_690) = ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(p_1605->g_695.xyxy)).wxyxwxwyyyxzyzxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(0x7CL, 1L)).yyxy, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(0x2BL, (((p_82 = p_82) & (((VECTOR(uint64_t, 2))(0UL, 0xDC258F0FC392D1EBL)).odd == (l_697 != ((((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(l_698.xyxy)).ywxyzyyz, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(l_699.wxzzxzwxwywxxwwy)), ((VECTOR(uint16_t, 2))(65535UL, 0x32EAL)).xxyyyxxyxxyyxyyx))).odd))).s5 & (l_702++)) , l_697)))) >= p_1605->g_478.s1), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_705.s0477542641222073)))).s4fee)).lo)), (safe_sub_func_uint32_t_u_u(((*l_682) = (safe_sub_func_uint8_t_u_u((((247UL | (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0xADL, 3UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x1EL, 0xAEL)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_712.s4104)).wxzzxywxyyyzzzwx)).s41, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))((((safe_mul_func_int16_t_s_s((p_1605->g_496.x == ((*l_718) = (&p_1605->g_370 == (p_1605->g_716 = l_715)))), 65530UL)) ^ p_82) >= p_82), 5UL, 0x04L, (*l_101), 0UL, ((VECTOR(uint8_t, 2))(0xA7L)), 0xA8L)).s60, ((VECTOR(uint8_t, 2))(0xEFL))))), ((VECTOR(uint8_t, 2))(0x3AL))))), 0x03L, 0xD6L, ((VECTOR(uint8_t, 2))(255UL)), 0UL, 0x29L)).even)).y, 255UL, (*l_101), 0x7FL, 0x53L, ((VECTOR(uint8_t, 4))(0xFAL)), FAKE_DIVERGE(p_1605->local_2_offset, get_local_id(2), 10), 1UL, 2UL)).s5, p_1605->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))]))) >= FAKE_DIVERGE(p_1605->global_2_offset, get_global_id(2), 10)) >= (*l_99)), p_82))), p_82)), 0x20L, 0x74L, 0x50L)), (int8_t)1L))).hi))).zwyzwxzyyzxyzyww))).even)).s4560260273157352, ((VECTOR(int8_t, 16))(0x2BL))))).s8) != GROUP_DIVERGE(2, 1)) , p_82), (*l_99)));
    return (*p_1605->g_268);
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_102 p_1605->g_115 p_1605->g_117 p_1605->l_comm_values p_1605->g_3 p_1605->g_comm_values p_1605->g_176 p_1605->g_92 p_1605->g_212 p_1605->g_269 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_390 p_1605->g_268 p_1605->g_398 p_1605->g_394 p_1605->g_361 p_1605->g_123 p_1605->g_469 p_1605->g_589 p_1605->g_481 p_1605->g_211 p_1605->g_444 p_1605->g_616 p_1605->g_622 p_1605->g_630 p_1605->g_478 p_1605->g_450 p_1605->g_660 p_1605->g_399
 * writes: p_1605->g_102 p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_270 p_1605->g_363 p_1605->g_394 p_1605->g_390 p_1605->g_211 p_1605->g_212 p_1605->g_204 p_1605->g_628 p_1605->g_630
 */
uint8_t  func_105(int32_t  p_106, struct S0 * p_1605)
{ /* block id: 55 */
    int32_t *l_114 = &p_1605->g_115;
    VECTOR(int16_t, 16) l_116 = (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x4F69L), 0x4F69L), 0x4F69L, 7L, 0x4F69L, (VECTOR(int16_t, 2))(7L, 0x4F69L), (VECTOR(int16_t, 2))(7L, 0x4F69L), 7L, 0x4F69L, 7L, 0x4F69L);
    VECTOR(int16_t, 4) l_118 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0L), 0L);
    int32_t l_124 = (-3L);
    int64_t l_631 = 0x5EE7A8D9A5C03EB1L;
    int16_t **l_635 = (void*)0;
    int16_t *l_641[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint16_t, 4) l_646 = (VECTOR(uint16_t, 4))(0xEF37L, (VECTOR(uint16_t, 2))(0xEF37L, 0x4B05L), 0x4B05L);
    int32_t ***l_650 = &p_1605->g_269;
    VECTOR(int64_t, 2) l_651 = (VECTOR(int64_t, 2))((-10L), 0x6145AB958E2AF8A4L);
    int8_t *l_653 = (void*)0;
    int8_t **l_652 = &l_653;
    uint16_t l_654 = 0x6951L;
    int8_t *l_655 = (void*)0;
    int8_t *l_656[2][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int64_t *l_657 = (void*)0;
    int64_t *l_658 = &p_1605->g_123;
    uint32_t l_659 = 0x1EF1BC0BL;
    uint32_t *l_662 = &l_659;
    int32_t *l_663[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_664 = 0L;
    int i, j, k;
    for (p_1605->g_102 = 23; (p_1605->g_102 >= (-27)); p_1605->g_102 = safe_sub_func_int8_t_s_s(p_1605->g_102, 1))
    { /* block id: 58 */
        int32_t *l_112 = &p_1605->g_102;
        int32_t **l_113[4] = {&l_112,&l_112,&l_112,&l_112};
        VECTOR(int16_t, 8) l_119 = (VECTOR(int16_t, 8))(0x1727L, (VECTOR(int16_t, 4))(0x1727L, (VECTOR(int16_t, 2))(0x1727L, 1L), 1L), 1L, 0x1727L, 1L);
        uint64_t *l_122 = (void*)0;
        int i;
        (*p_1605->g_269) = func_109((((l_114 = l_112) != ((((p_1605->g_115 ^ ((VECTOR(int16_t, 16))(l_116.s1d68c9157731b4bd)).s6) >= p_106) & ((VECTOR(int16_t, 16))(9L, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))((-3L), 0x61DEL)).yxxyyxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(p_1605->g_117.yyxxyyxx)), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_118.ww)).xyyyyxxy)).s43, ((VECTOR(int16_t, 2))(l_119.s47))))).yyyyxyyx))).s0766645527356453)).lo)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((0x3AC3L <= (((safe_unary_minus_func_int32_t_s((l_124 = ((p_1605->g_123 |= ((p_1605->g_121[0][3][5] = p_1605->g_121[0][3][5]) == (void*)0)) , (p_1605->g_115 > (p_106 >= (l_118.y >= 0x14L))))))) ^ p_106) | p_1605->g_117.y)), p_106, 1L, (-3L))).hi)), ((VECTOR(int16_t, 2))(0x6939L)), ((VECTOR(int16_t, 4))(0x716DL)))).sab, ((VECTOR(int16_t, 2))(0L))))), (-1L), ((VECTOR(int16_t, 4))(0x6257L)), 0x05BBL)), 0x0534L, ((VECTOR(int16_t, 2))(0x7D82L)), 0x6DDAL, p_106, ((VECTOR(int16_t, 2))((-4L))), (-8L))).lo))), 0x3DE1L, 0x52ECL, ((VECTOR(int16_t, 4))(0x7C61L)), 0L)).s1) , &p_1605->g_115)) && (*l_114)), &p_1605->g_102, p_1605);
        for (p_1605->g_123 = (-6); (p_1605->g_123 < 3); ++p_1605->g_123)
        { /* block id: 249 */
            int64_t l_576[10] = {0x18E195D10590DD73L,0x751477019FCFA535L,0x18E195D10590DD73L,0x18E195D10590DD73L,0x751477019FCFA535L,0x18E195D10590DD73L,0x18E195D10590DD73L,0x751477019FCFA535L,0x18E195D10590DD73L,0x18E195D10590DD73L};
            int i;
            if (p_106)
                break;
            if (p_106)
                continue;
            l_576[5] &= p_106;
            (**p_1605->g_268) = (void*)0;
        }
    }
    for (p_1605->g_115 = (-12); (p_1605->g_115 != (-7)); p_1605->g_115 = safe_add_func_uint16_t_u_u(p_1605->g_115, 8))
    { /* block id: 258 */
        int16_t *l_579 = (void*)0;
        int32_t l_580 = 0L;
        int8_t *l_600 = &p_1605->g_211;
        int64_t *l_601 = &p_1605->g_123;
        int64_t *l_602 = (void*)0;
        int64_t *l_603 = (void*)0;
        int64_t *l_604 = (void*)0;
        int32_t l_605 = 7L;
        int8_t *l_606 = (void*)0;
        int8_t *l_607 = (void*)0;
        int8_t *l_608 = &p_1605->g_212;
        VECTOR(int16_t, 8) l_615 = (VECTOR(int16_t, 8))(0x333BL, (VECTOR(int16_t, 4))(0x333BL, (VECTOR(int16_t, 2))(0x333BL, 2L), 2L), 2L, 0x333BL, 2L);
        int i;
        if (((p_106 , p_106) == (((l_580 = 0x38B1L) <= 0x73CBL) != ((safe_div_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((((*l_608) = (((l_605 = ((((p_1605->g_469.x && ((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((*l_114), ((VECTOR(uint16_t, 2))(p_1605->g_589.wx)).hi)), ((*l_601) = (((safe_mul_func_uint8_t_u_u((*l_114), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, (-1L))).yyxx)).x)) > ((*l_600) &= (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((((-2L) & 5UL) <= 0x086FL), 253UL)), 11)) | 0x40FBF02CL) | p_106), p_1605->g_481.w)), (*l_114))))) != 0xF2L)))) & (*l_114))) > p_1605->g_444.y) ^ 0x26L) >= 0L)) && 0xF7E09CE8AF9EE915L) , p_106)) <= 1L), p_1605->g_394.x)) >= 1UL), p_106)) == p_106))))
        { /* block id: 264 */
            VECTOR(int64_t, 8) l_617 = (VECTOR(int64_t, 8))(0x7A3E00B2B2B6C44EL, (VECTOR(int64_t, 4))(0x7A3E00B2B2B6C44EL, (VECTOR(int64_t, 2))(0x7A3E00B2B2B6C44EL, (-1L)), (-1L)), (-1L), 0x7A3E00B2B2B6C44EL, (-1L));
            uint64_t *l_618 = (void*)0;
            uint64_t *l_619 = &p_1605->g_204;
            int32_t *l_627 = &p_1605->g_628;
            int32_t *l_629 = &p_1605->g_630;
            int32_t *l_632 = (void*)0;
            int32_t *l_633 = (void*)0;
            int32_t *l_634 = &l_124;
            int i;
            for (p_1605->g_204 = 0; (p_1605->g_204 == 58); p_1605->g_204 = safe_add_func_int16_t_s_s(p_1605->g_204, 7))
            { /* block id: 267 */
                for (l_605 = 0; (l_605 != 7); l_605 = safe_add_func_int16_t_s_s(l_605, 2))
                { /* block id: 270 */
                    return p_106;
                }
                if (p_106)
                    continue;
            }
            l_605 &= ((*l_634) = (((+(((l_631 ^= ((VECTOR(uint64_t, 16))(18446744073709551612UL, ((((VECTOR(int8_t, 2))(1L, 0x2EL)).even , (((safe_sub_func_int64_t_s_s(((+((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(l_615.s43)).xxxx, ((VECTOR(int16_t, 8))(p_1605->g_616.s21535256)).odd))).w) < (*l_114)), 2UL)) , p_106) > (0L > ((VECTOR(int64_t, 2))(l_617.s75)).even))) , p_106), 0UL, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(((*l_619) = p_106), 0x1D7C0417E4B5A4EAL, 0x071C77B7831A10FDL, 18446744073709551608UL)).lo, (uint64_t)((safe_lshift_func_uint8_t_u_u(0UL, 0)) && ((!(!((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1605->g_622.yxxxyxyxyyxxyxyx)).s11)), ((VECTOR(uint8_t, 8))((((*l_600) = ((safe_sub_func_uint16_t_u_u((((((*l_629) ^= ((*l_627) = (safe_rshift_func_uint8_t_u_s((((*l_114) > (l_617.s0 >= 1L)) , 0UL), 6)))) , p_1605->g_398.x) >= 0xDFL) == p_106), (-6L))) == 6L)) < p_106), 2UL, ((VECTOR(uint8_t, 4))(0x1EL)), 0x2FL, 0xA9L)), FAKE_DIVERGE(p_1605->global_2_offset, get_global_id(2), 10), 0x12L, 7UL, 0x33L, 0x3DL, 0x09L)).lo)), (uint8_t)0x7DL))).odd)).yzxyzxxxxwxyzwzz, ((VECTOR(uint8_t, 16))(0x1FL))))).sa9))).yxyxyyyx, ((VECTOR(uint8_t, 8))(0x19L))))))).s4)) ^ p_106)), (uint64_t)0xB084C35E79842693L))), 0UL, p_1605->g_390, ((VECTOR(uint64_t, 8))(0x1701322652D8BCB7L)), 0xB05A492B7BB6D930L)).sf) || (*l_114)) <= (*l_114))) && p_106) , p_106));
            if (p_106)
                break;
        }
        else
        { /* block id: 283 */
            int16_t ***l_636 = &l_635;
            (*l_636) = l_635;
            return p_106;
        }
        return p_106;
    }
    l_664 = (((((void*)0 != &l_631) == (((*l_662) = ((((safe_lshift_func_uint16_t_u_u(((((((((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 2))((-7L), 0x77L)), (((safe_add_func_int16_t_s_s(((*l_114) = p_106), (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((-3L), ((VECTOR(uint16_t, 16))(0x3C00L, ((VECTOR(uint16_t, 4))(l_646.wzyx)), (safe_unary_minus_func_uint8_t_u(((((safe_mod_func_uint64_t_u_u((((void*)0 == l_650) < p_106), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(l_651.yy)).xyyy, (int64_t)(((*l_658) &= ((p_1605->g_211 ^= (l_124 = ((((p_106 >= (((p_1605->g_176.y , (**l_650)) != (void*)0) , p_1605->g_478.s5)) , l_652) != &l_653) ^ l_654))) > p_106)) > 0xD68D8F90186C594DL)))), 0x3D1C2FCC69C56E0AL, p_106, 0x312340C9EA14C047L, 0L)).s5)) ^ p_106) || p_1605->g_450.x) > p_1605->g_204))), p_1605->g_616.s5, p_1605->g_616.s0, 1UL, p_1605->g_361.y, 0x552FL, 0x5020L, 0xB052L, l_659, 0UL, 0x3349L)).s4)), p_106)))) , (void*)0) != p_1605->g_660), ((VECTOR(int8_t, 4))(1L)))).s4 && p_106) || p_106) , p_106) & p_1605->g_399.sb) > GROUP_DIVERGE(0, 1)) == 0x59859F88L), p_106)) & p_106) ^ 0x74803C1BL) , (*l_114))) != 0L)) > p_106) ^ p_1605->g_212);
    return p_106;
}


/* ------------------------------------------ */
/* 
 * reads : p_1605->g_102 p_1605->g_123 p_1605->g_117 p_1605->l_comm_values p_1605->g_176 p_1605->g_3 p_1605->g_comm_values p_1605->g_115 p_1605->g_92 p_1605->g_212 p_1605->g_269 p_1605->g_270 p_1605->g_274 p_1605->g_204 p_1605->g_233 p_1605->g_361 p_1605->g_362 p_1605->g_363 p_1605->g_390 p_1605->g_268 p_1605->g_394 p_1605->g_398 p_1605->g_399 p_1605->g_401 p_1605->g_402 p_1605->g_411 p_1605->g_423 p_1605->g_444 p_1605->g_445 p_1605->g_449 p_1605->g_450 p_1605->g_469 p_1605->g_472 p_1605->g_478 p_1605->g_481
 * writes: p_1605->g_123 p_1605->g_115 p_1605->g_comm_values p_1605->g_270 p_1605->g_302 p_1605->g_370 p_1605->g_363 p_1605->g_394 p_1605->g_390
 */
int32_t * func_109(int32_t  p_110, int32_t * p_111, struct S0 * p_1605)
{ /* block id: 63 */
    int32_t **l_152 = (void*)0;
    int16_t l_175[6][1];
    VECTOR(uint16_t, 4) l_177 = (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 1UL), 1UL);
    VECTOR(uint16_t, 2) l_178 = (VECTOR(uint16_t, 2))(0xB3E2L, 7UL);
    VECTOR(uint16_t, 16) l_179 = (VECTOR(uint16_t, 16))(0x3C76L, (VECTOR(uint16_t, 4))(0x3C76L, (VECTOR(uint16_t, 2))(0x3C76L, 0UL), 0UL), 0UL, 0x3C76L, 0UL, (VECTOR(uint16_t, 2))(0x3C76L, 0UL), (VECTOR(uint16_t, 2))(0x3C76L, 0UL), 0x3C76L, 0UL, 0x3C76L, 0UL);
    VECTOR(uint64_t, 16) l_186 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 18446744073709551608UL, 18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551606UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551606UL), 18446744073709551608UL, 18446744073709551606UL, 18446744073709551608UL, 18446744073709551606UL);
    uint32_t l_197 = 0x04350C7BL;
    int32_t *l_316[1][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_317 = (-1L);
    uint64_t l_318 = 5UL;
    int16_t l_331[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    uint64_t l_332 = 0x71EE976597471B37L;
    int32_t l_333 = (-1L);
    VECTOR(int8_t, 16) l_334 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x69L), 0x69L), 0x69L, (-1L), 0x69L, (VECTOR(int8_t, 2))((-1L), 0x69L), (VECTOR(int8_t, 2))((-1L), 0x69L), (-1L), 0x69L, (-1L), 0x69L);
    int16_t **l_368 = &p_1605->g_277;
    VECTOR(int16_t, 2) l_417 = (VECTOR(int16_t, 2))(0x703AL, 0x098FL);
    VECTOR(uint16_t, 16) l_420 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65530UL), 65530UL, 65535UL, 65530UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65535UL, 65530UL, 65535UL, 65530UL);
    VECTOR(uint8_t, 2) l_446 = (VECTOR(uint8_t, 2))(0x82L, 0xD9L);
    VECTOR(uint8_t, 16) l_451 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x94L), 0x94L), 0x94L, 248UL, 0x94L, (VECTOR(uint8_t, 2))(248UL, 0x94L), (VECTOR(uint8_t, 2))(248UL, 0x94L), 248UL, 0x94L, 248UL, 0x94L);
    VECTOR(uint8_t, 2) l_452 = (VECTOR(uint8_t, 2))(0xA3L, 9UL);
    VECTOR(uint8_t, 4) l_470 = (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 255UL), 255UL);
    VECTOR(uint32_t, 8) l_471 = (VECTOR(uint32_t, 8))(0x32560386L, (VECTOR(uint32_t, 4))(0x32560386L, (VECTOR(uint32_t, 2))(0x32560386L, 4294967295UL), 4294967295UL), 4294967295UL, 0x32560386L, 4294967295UL);
    VECTOR(int8_t, 2) l_476 = (VECTOR(int8_t, 2))(0x26L, 1L);
    int8_t *l_484[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t *l_505[7] = {&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332};
    VECTOR(int32_t, 2) l_511 = (VECTOR(int32_t, 2))(0x03123226L, 3L);
    VECTOR(int64_t, 16) l_519 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-10L)), (-10L)), (-10L), 0L, (-10L), (VECTOR(int64_t, 2))(0L, (-10L)), (VECTOR(int64_t, 2))(0L, (-10L)), 0L, (-10L), 0L, (-10L));
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_175[i][j] = 5L;
    }
    for (p_110 = 0; (p_110 < (-20)); p_110 = safe_sub_func_uint16_t_u_u(p_110, 6))
    { /* block id: 66 */
        uint32_t l_180 = 0xA09B46BFL;
        int32_t l_215 = 0x607A8E80L;
        uint64_t l_236 = 6UL;
        int16_t *l_279 = (void*)0;
        VECTOR(uint8_t, 8) l_292 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 2UL), 2UL), 2UL, 255UL, 2UL);
        VECTOR(int8_t, 16) l_294 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x5BL), 0x5BL), 0x5BL, 0x15L, 0x5BL, (VECTOR(int8_t, 2))(0x15L, 0x5BL), (VECTOR(int8_t, 2))(0x15L, 0x5BL), 0x15L, 0x5BL, 0x15L, 0x5BL);
        VECTOR(int64_t, 8) l_297 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 3L), 3L), 3L, (-6L), 3L);
        uint8_t l_298[2][6][8] = {{{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L}},{{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L},{255UL,255UL,0xE8L,6UL,0UL,0x02L,255UL,0xE8L}}};
        int32_t **l_303 = (void*)0;
        int i, j, k;
        if ((atomic_inc(&p_1605->l_atomic_input[1]) == 5))
        { /* block id: 68 */
            int32_t l_127 = 0x64C9D428L;
            uint64_t l_143 = 18446744073709551615UL;
            for (l_127 = 6; (l_127 <= 2); l_127--)
            { /* block id: 71 */
                uint32_t l_130 = 0x11F742CEL;
                int32_t l_133[10][7] = {{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)},{(-1L),(-2L),(-2L),(-1L),(-1L),(-2L),(-2L)}};
                int16_t l_134 = 0x10A9L;
                int i, j;
                ++l_130;
                l_134 = l_133[4][0];
            }
            for (l_127 = 5; (l_127 <= (-22)); l_127 = safe_sub_func_uint64_t_u_u(l_127, 5))
            { /* block id: 77 */
                VECTOR(int32_t, 2) l_137 = (VECTOR(int32_t, 2))(2L, 0x17D859D8L);
                uint32_t l_138[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                int32_t l_139 = 0x06C016F7L;
                uint32_t l_140 = 7UL;
                int i;
                l_138[0] ^= ((VECTOR(int32_t, 2))(l_137.yx)).hi;
                ++l_140;
            }
            l_143--;
            unsigned int result = 0;
            result += l_127;
            result += l_143;
            atomic_add(&p_1605->l_special_values[1], result);
        }
        else
        { /* block id: 82 */
            (1 + 1);
        }
        if ((*p_111))
            continue;
        if ((0x350F6E7EL > (safe_lshift_func_uint8_t_u_s(p_110, 1))))
        { /* block id: 86 */
            int32_t *l_149 = &p_1605->g_102;
            int32_t **l_148 = &l_149;
            int32_t ***l_150 = (void*)0;
            int32_t ***l_151[1];
            VECTOR(uint16_t, 16) l_166 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL);
            int16_t *l_169 = (void*)0;
            int16_t *l_170 = (void*)0;
            int16_t *l_171 = (void*)0;
            int16_t *l_172 = (void*)0;
            int16_t *l_173 = (void*)0;
            int16_t *l_174[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 1; i++)
                l_151[i] = &l_148;
            l_152 = l_148;
            for (p_1605->g_123 = 24; (p_1605->g_123 >= 10); p_1605->g_123 = safe_sub_func_uint64_t_u_u(p_1605->g_123, 2))
            { /* block id: 90 */
                int32_t *l_155 = (void*)0;
                (*l_152) = l_155;
                return &p_1605->g_3;
            }
            if (p_1605->g_117.x)
                continue;
            p_1605->g_115 ^= ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((254UL < (safe_add_func_int32_t_s_s(0x72BCAE1EL, ((((safe_rshift_func_int16_t_s_s(p_110, p_110)) , (**l_152)) ^ (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_166.sd8d72e10)))).s6, (((safe_rshift_func_int16_t_s_s((p_1605->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))] >= 0x4DC420A7L), (l_175[1][0] = (-9L)))) & ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(0x0889L, 65533UL)).yyxyyxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1605->g_176.xy)).yxxxxxxx)))).s05)), 1UL, GROUP_DIVERGE(0, 1), 5UL, 0x8D31L, 65531UL, 0x6036L))))).s26, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(l_177.ywwx)).wywzyyxzzwwwwyzy, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(l_178.xy)).yyyxxxyyxxyxxxxy, ((VECTOR(uint16_t, 16))(l_179.s3839c7493250c18a))))), ((VECTOR(uint16_t, 8))((**l_148), 1UL, 0x967CL, 65535UL, 9UL, 0x05F2L, 0xC57EL, 65526UL)).s7354130165230240))))).s00))).lo) , p_1605->g_117.y)))) , l_180)))) || p_1605->g_3) >= p_1605->g_comm_values[p_1605->tid]), p_110)), (**l_152))) == p_1605->g_176.y);
        }
        else
        { /* block id: 97 */
            VECTOR(uint64_t, 4) l_185 = (VECTOR(uint64_t, 4))(0xBFFE45614CE61BCCL, (VECTOR(uint64_t, 2))(0xBFFE45614CE61BCCL, 1UL), 1UL);
            VECTOR(uint16_t, 16) l_200 = (VECTOR(uint16_t, 16))(0xB0C7L, (VECTOR(uint16_t, 4))(0xB0C7L, (VECTOR(uint16_t, 2))(0xB0C7L, 0x276FL), 0x276FL), 0x276FL, 0xB0C7L, 0x276FL, (VECTOR(uint16_t, 2))(0xB0C7L, 0x276FL), (VECTOR(uint16_t, 2))(0xB0C7L, 0x276FL), 0xB0C7L, 0x276FL, 0xB0C7L, 0x276FL);
            int32_t l_243 = 0x43B98C0DL;
            VECTOR(uint8_t, 8) l_252 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
            int32_t l_257 = 0x7DDB6465L;
            int32_t ***l_272 = (void*)0;
            int32_t ***l_273[2][6][1] = {{{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269}},{{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269},{&p_1605->g_269}}};
            int i, j, k;
            for (p_1605->g_115 = 0; (p_1605->g_115 > 4); p_1605->g_115 = safe_add_func_uint64_t_u_u(p_1605->g_115, 6))
            { /* block id: 100 */
                uint8_t *l_195 = (void*)0;
                uint8_t *l_196[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t *l_203 = &p_1605->g_204;
                uint8_t *l_209 = (void*)0;
                int8_t *l_210 = &p_1605->g_211;
                int16_t *l_213 = &l_175[2][0];
                VECTOR(int32_t, 16) l_214 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int32_t, 2))((-8L), (-1L)), (VECTOR(int32_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L));
                int32_t l_216 = 0x2511DFB0L;
                int64_t *l_217[2];
                int32_t *l_218 = (void*)0;
                int32_t *l_219 = (void*)0;
                int32_t *l_220 = (void*)0;
                int32_t *l_221 = (void*)0;
                int32_t *l_222 = (void*)0;
                int32_t *l_223 = (void*)0;
                int32_t *l_224 = (void*)0;
                int32_t *l_225 = (void*)0;
                VECTOR(int32_t, 16) l_234 = (VECTOR(int32_t, 16))(0x3B00657DL, (VECTOR(int32_t, 4))(0x3B00657DL, (VECTOR(int32_t, 2))(0x3B00657DL, 0x73A6FA7AL), 0x73A6FA7AL), 0x73A6FA7AL, 0x3B00657DL, 0x73A6FA7AL, (VECTOR(int32_t, 2))(0x3B00657DL, 0x73A6FA7AL), (VECTOR(int32_t, 2))(0x3B00657DL, 0x73A6FA7AL), 0x3B00657DL, 0x73A6FA7AL, 0x3B00657DL, 0x73A6FA7AL);
                int16_t *l_258[8][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                VECTOR(int8_t, 8) l_293 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                uint64_t l_304 = 5UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_217[i] = (void*)0;
                l_214.s5 = ((p_1605->g_comm_values[p_1605->tid] &= ((safe_sub_func_uint64_t_u_u((!((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_185.zxwwzxyz)), 18446744073709551615UL, 18446744073709551610UL, p_1605->g_102, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_186.s85)), 18446744073709551615UL, 0UL)), 0x13D90FEA2692C927L)).s1), (l_216 = ((((((l_215 |= (p_110 < (safe_mod_func_int32_t_s_s((-5L), ((((*l_213) = ((safe_div_func_int16_t_s_s((((VECTOR(uint16_t, 16))(0x9BDCL, 0x8721L, (((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((p_1605->g_117.x = (&p_111 == &p_111)), ((l_197 = FAKE_DIVERGE(p_1605->group_1_offset, get_group_id(1), 10)) , (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_200.sf74a9da0880a19a2)).even)).s65)).hi, p_110))))), 13)) | ((safe_sub_func_uint8_t_u_u((((*l_203) = p_110) || (safe_div_func_uint8_t_u_u(((*p_111) < (safe_mod_func_int8_t_s_s(((*l_210) &= ((void*)0 != l_209)), p_110))), l_200.s1))), l_180)) <= l_180)) <= p_110) != p_110) != p_110), p_1605->g_92.se, 1UL, p_110, ((VECTOR(uint16_t, 2))(4UL)), ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 2))(0UL)), 0x327CL, 0xD144L)).s5 , (-1L)), p_1605->g_92.s5)) | p_1605->g_212)) <= l_214.sf) , l_180))))) , 0xAA1D18F8L) , l_180) < 0x94L) == l_214.sd) | p_110)))) ^ l_185.x)) , 0x7EA89C39L);
                for (l_216 = 0; (l_216 > (-4)); l_216--)
                { /* block id: 112 */
                    int32_t **l_228 = &l_220;
                    int32_t ***l_229 = &l_228;
                    int32_t ***l_230 = &l_152;
                    (*l_230) = ((*l_229) = l_228);
                    return &p_1605->g_3;
                }
            }
            (*p_1605->g_269) = (*p_1605->g_269);
        }
        for (l_236 = 0; (l_236 < 20); l_236 = safe_add_func_uint8_t_u_u(l_236, 1))
        { /* block id: 145 */
            int16_t ***l_307 = (void*)0;
            int16_t ***l_308[4];
            int16_t **l_309 = (void*)0;
            int32_t *l_315 = &l_215;
            int i;
            for (i = 0; i < 4; i++)
                l_308[i] = &p_1605->g_302;
            l_309 = &l_279;
        }
    }
    (*p_1605->g_269) = &p_110;
    l_318++;
    if ((p_1605->g_176.y || ((safe_rshift_func_uint8_t_u_u(p_110, 4)) | (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((&p_1605->g_302 != &p_1605->g_302) != (l_331[0] , l_332)), p_110)), ((((p_1605->g_3 >= 2UL) != 0x1772731BEFFFF99BL) && l_333) , p_1605->g_274.s4))), GROUP_DIVERGE(2, 1))), p_1605->g_176.y)))))
    { /* block id: 162 */
        int16_t l_343[8][6] = {{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L},{(-1L),0L,0L,0L,0L,0L}};
        int16_t *l_353 = (void*)0;
        int16_t *l_354 = &l_175[4][0];
        uint8_t l_355 = 0x17L;
        int64_t l_356 = 0x1F0A3863662FD138L;
        uint8_t l_381 = 1UL;
        int64_t l_382 = 0x6B79A99503C98C8EL;
        int32_t l_385 = 0x6559CDA6L;
        int32_t l_386 = (-3L);
        VECTOR(int32_t, 8) l_396 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0FBF538BL), 0x0FBF538BL), 0x0FBF538BL, (-1L), 0x0FBF538BL);
        VECTOR(int32_t, 16) l_397 = (VECTOR(int32_t, 16))(0x2F49FA05L, (VECTOR(int32_t, 4))(0x2F49FA05L, (VECTOR(int32_t, 2))(0x2F49FA05L, 0x7CE9BD07L), 0x7CE9BD07L), 0x7CE9BD07L, 0x2F49FA05L, 0x7CE9BD07L, (VECTOR(int32_t, 2))(0x2F49FA05L, 0x7CE9BD07L), (VECTOR(int32_t, 2))(0x2F49FA05L, 0x7CE9BD07L), 0x2F49FA05L, 0x7CE9BD07L, 0x2F49FA05L, 0x7CE9BD07L);
        VECTOR(int16_t, 2) l_412 = (VECTOR(int16_t, 2))(0x1EA2L, 0x6F20L);
        int16_t l_459 = 0x2841L;
        int32_t ****l_462[6] = {&p_1605->g_268,(void*)0,&p_1605->g_268,&p_1605->g_268,(void*)0,&p_1605->g_268};
        int32_t *****l_463 = &l_462[5];
        int i, j;
        if (((((((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-10L), p_110, 0x65L, 0x09L)).xxwwxyzyzzyzzwxy)).sbf8b, ((VECTOR(int8_t, 4))(l_334.se735))))).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((p_1605->g_204 == (safe_sub_func_int32_t_s_s(((~p_110) || p_110), (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(p_110, p_110)) >= l_343[5][4]), (safe_sub_func_uint16_t_u_u(p_1605->g_204, (((safe_add_func_int16_t_s_s(((*l_354) |= (safe_unary_minus_func_int64_t_s((((((safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(p_1605->g_274.sc, 0x61B4E32C60489F0DL)), p_110)) > (*p_111)) >= 255UL) & p_1605->g_102) < p_1605->g_233.w)))), l_355)) & l_343[0][2]) ^ l_343[1][2]))))), l_356))))), ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 4))(3L)), ((VECTOR(int8_t, 4))(0x45L)), ((VECTOR(int8_t, 4))(0x11L)), 0x46L)).lo)).s2127560404263545))).sf1))))).lo && p_110) > 0xBCC50A40404426EDL) == l_343[3][4]) >= p_110))
        { /* block id: 164 */
            VECTOR(int32_t, 2) l_359 = (VECTOR(int32_t, 2))(5L, 0x7D1CAE22L);
            VECTOR(int32_t, 2) l_360 = (VECTOR(int32_t, 2))(9L, 7L);
            int16_t ***l_369[5][10] = {{(void*)0,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,(void*)0,&l_368},{(void*)0,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,(void*)0,&l_368},{(void*)0,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,(void*)0,&l_368},{(void*)0,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,(void*)0,&l_368},{(void*)0,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,(void*)0,&l_368}};
            uint32_t *l_383 = (void*)0;
            uint32_t *l_384 = &l_197;
            uint32_t l_387 = 0x71A649FFL;
            int32_t **l_391 = &p_1605->g_270;
            VECTOR(int32_t, 16) l_395 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x32A804D0L), 0x32A804D0L), 0x32A804D0L, (-8L), 0x32A804D0L, (VECTOR(int32_t, 2))((-8L), 0x32A804D0L), (VECTOR(int32_t, 2))((-8L), 0x32A804D0L), (-8L), 0x32A804D0L, (-8L), 0x32A804D0L);
            int i, j;
            if ((!(safe_div_func_int16_t_s_s(0x066CL, ((~(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x53D67096L, 0x385F0BA0L, 1L, 0x75C49D32L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_359.yyxy)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x151B7AE3L, (*p_111), 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_360.xyyxyxxxxyyxxxxx)).s58)).xxxx)), (-1L))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1605->g_361.xxxy)).zywzyywx)).odd, ((VECTOR(int32_t, 16))(0x1C417655L, 0x73245BCAL, ((VECTOR(int32_t, 4))(0x12AAD0BFL, ((VECTOR(int32_t, 2))(p_1605->g_362.sa6)), 0x6E4FF2E1L)), 1L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1605->g_363.xwyxzzwx)).odd)), (int32_t)(l_360.y > (safe_mul_func_uint8_t_u_u((((*l_384) = ((safe_mul_func_uint8_t_u_u(((p_1605->g_370 = (p_1605->g_302 = l_368)) == &p_1605->g_277), ((p_110 , (safe_mul_func_uint8_t_u_u((((VECTOR(int16_t, 8))(((safe_mul_func_uint16_t_u_u(l_343[3][1], 0x4B2DL)) >= (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(0x0391536337888637L, p_110)), 2L)), 12))), 0x17BFL, 0x30CAL, l_381, ((VECTOR(int16_t, 4))((-4L))))).s2 , 0xF0L), p_110))) <= l_382))) | l_343[1][1])) | (**p_1605->g_269)), l_343[5][4])))))).y, ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 2))(1L)), 1L, 1L)).s8e83))).xzxyzxwxzxxyzwxx)).s5a0b, ((VECTOR(int32_t, 4))(6L))))).z, ((VECTOR(int32_t, 2))(0x71CE6CB9L)), (-1L))), 0x77B58E60L, ((VECTOR(int32_t, 2))(0x78CE95AAL)), 0L)).s8cd0)).x , p_1605->g_204)) && p_1605->g_115)))))
            { /* block id: 168 */
                l_387--;
            }
            else
            { /* block id: 170 */
                uint64_t l_400 = 2UL;
                int32_t l_421 = (-3L);
                int32_t l_422 = 0x2C94EF5DL;
                p_1605->g_363.x = ((l_359.x ^= ((**p_1605->g_269) = ((p_1605->g_390 , l_391) == (*p_1605->g_268)))) , ((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x7C2E0533L, 0x02DA2644L)).xyyxxyxy)), ((VECTOR(int32_t, 8))(p_1605->g_394.yyyzzxzx))))).s4530524022100236, ((VECTOR(int32_t, 2))((-1L), 0x0C5DAC79L)).xxyyyyxxyyxxxyxy))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_395.se4dc)).hi, ((VECTOR(int32_t, 8))(l_396.s65530223)).s62))).xxxyxyyxxxyyxyyy, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_397.s4b48)).yxyxzwyy, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1605->g_398.yyyyyxyxxyxxyyyx)))), ((VECTOR(int32_t, 16))(p_1605->g_399.s8c6afb6d8f9bd769))))).even, ((VECTOR(int32_t, 2))(0x61EB2E0EL, 0x3141089CL)).xxyyxxxx))), (int32_t)l_400))).s0562357234201777, ((VECTOR(int32_t, 4))((l_422 ^= ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1605->g_401.zz)))).yyyxxyyyyxyxxxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(0x656B59CEL, (-9L), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1605->g_402.s1455)).xywywzxxzxyzzzzx)).s4 && (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0x1541A47FL, (((safe_mul_func_int16_t_s_s(((*l_354) = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_1605->g_411.yy)), 0x7721L, ((VECTOR(int16_t, 4))((-6L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_412.yyyx)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))((-3L), 0x1E54L)).yxxyyxyyyxyxyyxx, ((VECTOR(int16_t, 8))((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(248UL, 0x94L)).yxxyxxyyxxyxyxxx)).s8, p_110)), 6)), (-4L), (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_417.xyyyxyxy)).s3515065175217010)).s1f)).yyyx)), (-5L))).s5530713524405217))))).s6559))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(7L, 0x5F84L)), 0x651EL, 0x6571L))))).yzxyywxwwxzxyyzy)).sea)), 0x281EL)), 0x074BL)).s2), ((l_421 = ((**l_391) & (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_420.sc247)).x, 9)))) > ((VECTOR(uint16_t, 4))(65529UL, 65530UL, 1UL, 0UL)).z))) && 1UL) && (-4L)))) , p_1605->g_115), (**l_391))), p_1605->g_274.sf))), 0x5EABDA34L, ((VECTOR(int32_t, 2))(0x2D939F5BL)), 0x04BD43D7L, 0x08F8B917L)).s66, ((VECTOR(int32_t, 2))(0x55F0B7E1L))))), 1L, (***p_1605->g_268), ((VECTOR(int32_t, 2))(9L)), 0x7874E325L, 1L)).s0005445273530211)), ((VECTOR(int32_t, 16))(0x40FA47F4L))))).s73)).yyyyxyxy)))).s77, ((VECTOR(int32_t, 2))(0x69186064L)), ((VECTOR(int32_t, 2))(0x47F2B78BL))))).xyyx, ((VECTOR(int32_t, 4))((-3L)))))).w), ((VECTOR(int32_t, 2))((-1L))), 0x4336B4B5L)).xzzywzxxyzzwyzww))).odd, ((VECTOR(int32_t, 8))(0x119443B9L))))).s01)))).xyxyyyxxyxyyyxxy, ((VECTOR(int32_t, 16))(1L))))).s83, (int32_t)p_1605->g_423))).lo, (**p_1605->g_269))) || l_421) > l_400) ^ (**l_391)));
                (**p_1605->g_268) = &l_385;
                for (l_385 = 0; (l_385 > (-4)); l_385 = safe_sub_func_uint8_t_u_u(l_385, 5))
                { /* block id: 180 */
                    uint64_t l_426 = 0xF4CF4EAA83682022L;
                    int32_t l_431 = 0L;
                    ++l_426;
                    if ((**p_1605->g_269))
                        continue;
                    p_1605->g_115 ^= (((safe_mul_func_int16_t_s_s((l_431 = p_110), (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((-1L) == ((p_110 < (l_412.y ^ ((FAKE_DIVERGE(p_1605->group_1_offset, get_group_id(1), 10) & (&p_1605->g_123 != (((safe_rshift_func_uint16_t_u_s((p_1605->g_398.x | ((((VECTOR(int16_t, 8))(1L, (safe_mod_func_int16_t_s_s(9L, l_396.s7)), 0x48C1L, 0x7539L, ((VECTOR(int16_t, 2))(0x78E0L)), 3L, 0x2613L)).s7 , p_1605->g_394.w) < 0x08220E7CL)), p_110)) , (*p_111)) , (void*)0))) != p_1605->g_394.z))) | GROUP_DIVERGE(2, 1))), 2UL)), 2)))) ^ 18446744073709551613UL) | (*p_111));
                    if (l_426)
                        continue;
                }
            }
        }
        else
        { /* block id: 188 */
            uint32_t l_440 = 4UL;
            int32_t *l_443 = (void*)0;
            l_440++;
            (**p_1605->g_269) = 0x64BE8962L;
            return l_443;
        }
        (***p_1605->g_268) = (p_1605->g_394.x &= ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1605->g_444.yy)), 7L, (-8L))).odd)).yyyy, ((VECTOR(int32_t, 16))(0x36A29DA7L, 0x60860E16L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(p_1605->g_445.yxyyxyyyyyxxyyxx)).hi, ((VECTOR(int32_t, 16))((((VECTOR(uint8_t, 4))(l_446.xyxx)).y == (safe_rshift_func_int8_t_s_u((p_110 && p_110), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1605->g_449.xyyy)).yywwwyzwyzzwyzyy)).s6))), 0x63259015L, ((VECTOR(int32_t, 8))(0x388A2146L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(0x0CDC2C58L, 0x5333886FL)).xxyyyxyx, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(0x5A7A95B4L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x27B8D68DL, (-1L))), ((VECTOR(int32_t, 16))(0x5C4978B0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1605->g_450.yyxxyxyy)).hi)), ((!((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_451.s3a)).yyxyyyxy)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_452.xxxxxyyyxyxxxxyx)).sf8)).yyxx))).w) & p_110), ((VECTOR(int32_t, 2))(9L, 0L)), 0x080AA3E3L, (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_s((l_459 == (((GROUP_DIVERGE(0, 1) , (safe_sub_func_int32_t_s_s((*p_111), (((*l_463) = l_462[5]) == (void*)0)))) >= (-10L)) <= p_110)), p_110)) , p_1605->g_3) && p_1605->g_445.x) || p_1605->g_92.sa), p_1605->g_212)), 7)), (*p_111), ((VECTOR(int32_t, 4))(0x2A650DD6L)), 1L)).s09))).xxxyxxxxxxyyxxyx)))).s8350, ((VECTOR(int32_t, 4))(0x24558568L))))), ((VECTOR(int32_t, 8))(0x38083273L)), (-1L), 7L, 4L)).s8674, ((VECTOR(int32_t, 4))(0x467A710CL))))).yzzwxwxw))).s00)).xyyyxyxyxyyyyxxx, ((VECTOR(int32_t, 16))(0x7B113511L))))).sfaca, ((VECTOR(int32_t, 4))(2L))))).lo)).lo, ((VECTOR(int32_t, 4))((-1L))), 1L, 2L)), 1L, ((VECTOR(int32_t, 4))(0x20A8CE9FL)), 0x5502BF55L)).hi))).s70, ((VECTOR(int32_t, 2))(0x50096118L)), ((VECTOR(int32_t, 2))(0x1A363AD8L))))), ((VECTOR(int32_t, 2))(0L))))), 0x01FD019FL, (-2L), ((VECTOR(int32_t, 2))(0x1EC56952L)), ((VECTOR(int32_t, 4))((-1L))), 0x79C85E57L, 0x727243BFL, (-1L), 0L)).s1f6e))).x);
    }
    else
    { /* block id: 196 */
        uint32_t *l_464 = &p_1605->g_390;
        int32_t ****l_473 = &p_1605->g_268;
        VECTOR(int8_t, 2) l_477 = (VECTOR(int8_t, 2))((-1L), 1L);
        VECTOR(int8_t, 16) l_479 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x3AL), 0x3AL), 0x3AL, (-7L), 0x3AL, (VECTOR(int8_t, 2))((-7L), 0x3AL), (VECTOR(int8_t, 2))((-7L), 0x3AL), (-7L), 0x3AL, (-7L), 0x3AL);
        VECTOR(int8_t, 4) l_480 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x40L), 0x40L);
        int8_t *l_486 = (void*)0;
        int8_t **l_485 = &l_486;
        uint8_t *l_487 = (void*)0;
        uint8_t *l_488 = (void*)0;
        uint8_t *l_489 = (void*)0;
        uint8_t *l_490 = (void*)0;
        uint8_t *l_491[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_492 = 0x3969868CL;
        int32_t l_493 = 0x1C4D9732L;
        VECTOR(uint8_t, 2) l_497 = (VECTOR(uint8_t, 2))(0xE0L, 4UL);
        uint32_t *l_508 = (void*)0;
        VECTOR(int32_t, 16) l_514 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int32_t, 2))(1L, (-6L)), (VECTOR(int32_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L));
        VECTOR(uint32_t, 2) l_520 = (VECTOR(uint32_t, 2))(0x00CFA1DDL, 0x3C57ED45L);
        int32_t l_531 = 0x776C7A3FL;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1605->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((!(--(*l_464))), 10))][(safe_mod_func_uint32_t_u_u(p_1605->tid, 7))]));
        l_493 &= (safe_lshift_func_uint8_t_u_s(((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1605->g_469.yy)).yxyx)).xywxxyxzzwxzwxyz, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_470.zw)).xyxxyyxxxyyyxxyy))))).s4d47)).x != FAKE_DIVERGE(p_1605->global_1_offset, get_global_id(1), 10)) & (0x588DL ^ ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_471.s3010543754110413)))).s8 , p_110) != ((((VECTOR(uint64_t, 4))(p_1605->g_472.xzxx)).z , l_473) != (void*)0)))), ((((****l_473) , (~(l_492 |= ((safe_mod_func_uint32_t_u_u(p_1605->g_361.x, (GROUP_DIVERGE(0, 1) , (((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x3DL, 0x28L)).xxxxxxxx)).s15)).yyyyyxyy)).odd, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(l_476.xyyyyxxxxxyxxyxy)).odd))).s2747600740021576, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_477.yyyxyxxx)).s35)), ((VECTOR(int8_t, 2))(p_1605->g_478.sce))))), 0x62L, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_479.s1cd3e25e155df4e0)).sd470)).wwyywyxw)).even, ((VECTOR(int8_t, 16))(l_480.zxwzxwyyxxxyxwzy)).se646))), 0x5EL)).s6456571107051713))))).sf20b, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 2))(p_1605->g_481.xy)), 0x11L, ((VECTOR(int8_t, 8))(p_1605->g_102, (safe_sub_func_int8_t_s_s((l_484[1][3] == ((*l_485) = &p_1605->g_212)), 5UL)), 1L, ((VECTOR(int8_t, 4))(0x64L)), 0x42L)), ((VECTOR(int8_t, 4))(0L)))).s7b)).yxxx, ((VECTOR(int8_t, 4))(0x08L))))), (int8_t)p_110, (int8_t)p_110))))))))).y , p_110)))) , p_110)))) != p_110) , p_110)));
        for (p_1605->g_390 = 0; (p_1605->g_390 == 60); ++p_1605->g_390)
        { /* block id: 206 */
            uint64_t *l_503[5][3] = {{&p_1605->g_423,&p_1605->g_423,&p_1605->g_204},{&p_1605->g_423,&p_1605->g_423,&p_1605->g_204},{&p_1605->g_423,&p_1605->g_423,&p_1605->g_204},{&p_1605->g_423,&p_1605->g_423,&p_1605->g_204},{&p_1605->g_423,&p_1605->g_423,&p_1605->g_204}};
            uint64_t **l_502 = &l_503[1][2];
            int64_t l_509 = 0x78B5FB882C1216FBL;
            VECTOR(int32_t, 4) l_510 = (VECTOR(int32_t, 4))(0x3D4CCE0BL, (VECTOR(int32_t, 2))(0x3D4CCE0BL, 0L), 0L);
            VECTOR(int32_t, 16) l_512 = (VECTOR(int32_t, 16))(0x51592E6EL, (VECTOR(int32_t, 4))(0x51592E6EL, (VECTOR(int32_t, 2))(0x51592E6EL, 0x5EA2AB2EL), 0x5EA2AB2EL), 0x5EA2AB2EL, 0x51592E6EL, 0x5EA2AB2EL, (VECTOR(int32_t, 2))(0x51592E6EL, 0x5EA2AB2EL), (VECTOR(int32_t, 2))(0x51592E6EL, 0x5EA2AB2EL), 0x51592E6EL, 0x5EA2AB2EL, 0x51592E6EL, 0x5EA2AB2EL);
            int32_t l_533 = 4L;
            int8_t *l_561 = (void*)0;
            uint32_t l_572 = 0xB899F896L;
            int i, j;
            (1 + 1);
        }
        if ((atomic_inc(&p_1605->l_atomic_input[3]) == 9))
        { /* block id: 239 */
            uint16_t l_573[8][7] = {{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL},{1UL,1UL,0x4BAFL,1UL,0UL,1UL,0x4BAFL}};
            int i, j;
            l_573[1][0] &= 4L;
            unsigned int result = 0;
            int l_573_i0, l_573_i1;
            for (l_573_i0 = 0; l_573_i0 < 8; l_573_i0++) {
                for (l_573_i1 = 0; l_573_i1 < 7; l_573_i1++) {
                    result += l_573[l_573_i0][l_573_i1];
                }
            }
            atomic_add(&p_1605->l_special_values[3], result);
        }
        else
        { /* block id: 241 */
            (1 + 1);
        }
    }
    return l_316[0][6][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S0 c_1606;
    struct S0* p_1605 = &c_1606;
    struct S0 c_1607 = {
        (-2L), // p_1605->g_3
        (-6L), // p_1605->g_22
        &p_1605->g_22, // p_1605->g_21
        {{{9UL,0xDFL,9UL,9UL,0xDFL,9UL,9UL,0xDFL,9UL}},{{9UL,0xDFL,9UL,9UL,0xDFL,9UL,9UL,0xDFL,9UL}}}, // p_1605->g_78
        (VECTOR(uint8_t, 16))(0x7CL, (VECTOR(uint8_t, 4))(0x7CL, (VECTOR(uint8_t, 2))(0x7CL, 254UL), 254UL), 254UL, 0x7CL, 254UL, (VECTOR(uint8_t, 2))(0x7CL, 254UL), (VECTOR(uint8_t, 2))(0x7CL, 254UL), 0x7CL, 254UL, 0x7CL, 254UL), // p_1605->g_92
        0x73D13389L, // p_1605->g_102
        0x3631664AL, // p_1605->g_115
        (VECTOR(int16_t, 2))(0x024AL, 0L), // p_1605->g_117
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1605->g_121
        0x013F23DC045D86B4L, // p_1605->g_123
        (VECTOR(uint16_t, 2))(65529UL, 0UL), // p_1605->g_176
        18446744073709551615UL, // p_1605->g_204
        (-2L), // p_1605->g_211
        0x2DL, // p_1605->g_212
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), // p_1605->g_233
        (VECTOR(int32_t, 4))(0x17761125L, (VECTOR(int32_t, 2))(0x17761125L, (-10L)), (-10L)), // p_1605->g_235
        &p_1605->g_102, // p_1605->g_270
        &p_1605->g_270, // p_1605->g_269
        &p_1605->g_269, // p_1605->g_268
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x18L), 0x18L), 0x18L, 0L, 0x18L, (VECTOR(int8_t, 2))(0L, 0x18L), (VECTOR(int8_t, 2))(0L, 0x18L), 0L, 0x18L, 0L, 0x18L), // p_1605->g_274
        (void*)0, // p_1605->g_277
        (VECTOR(int8_t, 2))(0x1BL, 0x5AL), // p_1605->g_289
        (void*)0, // p_1605->g_302
        (VECTOR(int32_t, 2))((-1L), 3L), // p_1605->g_361
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int32_t, 2))(8L, 1L), (VECTOR(int32_t, 2))(8L, 1L), 8L, 1L, 8L, 1L), // p_1605->g_362
        (VECTOR(int32_t, 4))(0x62D11878L, (VECTOR(int32_t, 2))(0x62D11878L, (-10L)), (-10L)), // p_1605->g_363
        (void*)0, // p_1605->g_370
        0xB0AB75D0L, // p_1605->g_390
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x47810A82L), 0x47810A82L), // p_1605->g_394
        (VECTOR(int32_t, 2))(0L, 0L), // p_1605->g_398
        (VECTOR(int32_t, 16))(0x09E39E35L, (VECTOR(int32_t, 4))(0x09E39E35L, (VECTOR(int32_t, 2))(0x09E39E35L, 1L), 1L), 1L, 0x09E39E35L, 1L, (VECTOR(int32_t, 2))(0x09E39E35L, 1L), (VECTOR(int32_t, 2))(0x09E39E35L, 1L), 0x09E39E35L, 1L, 0x09E39E35L, 1L), // p_1605->g_399
        (VECTOR(int32_t, 4))(0x069FC85AL, (VECTOR(int32_t, 2))(0x069FC85AL, 0x066C1D64L), 0x066C1D64L), // p_1605->g_401
        (VECTOR(int32_t, 8))(0x14364CBFL, (VECTOR(int32_t, 4))(0x14364CBFL, (VECTOR(int32_t, 2))(0x14364CBFL, 0L), 0L), 0L, 0x14364CBFL, 0L), // p_1605->g_402
        (VECTOR(int16_t, 2))(0x1225L, (-1L)), // p_1605->g_411
        0x2F6E1E82716A4B81L, // p_1605->g_423
        (VECTOR(int32_t, 2))(0x26E7BFB8L, 0x22FA0518L), // p_1605->g_444
        (VECTOR(int32_t, 2))(0x67ABEF21L, (-1L)), // p_1605->g_445
        (VECTOR(uint8_t, 2))(0x2FL, 0x06L), // p_1605->g_449
        (VECTOR(int32_t, 2))(2L, 1L), // p_1605->g_450
        (VECTOR(uint8_t, 2))(0x0CL, 1UL), // p_1605->g_469
        (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 9UL), 9UL), // p_1605->g_472
        (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x7AL), 0x7AL), 0x7AL, (-4L), 0x7AL, (VECTOR(int8_t, 2))((-4L), 0x7AL), (VECTOR(int8_t, 2))((-4L), 0x7AL), (-4L), 0x7AL, (-4L), 0x7AL), // p_1605->g_478
        (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, (-1L)), (-1L)), // p_1605->g_481
        (VECTOR(uint8_t, 4))(0xC2L, (VECTOR(uint8_t, 2))(0xC2L, 0UL), 0UL), // p_1605->g_496
        (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x021B8D4AL), 0x021B8D4AL), // p_1605->g_515
        9UL, // p_1605->g_530
        {&p_1605->g_115,&p_1605->g_115,&p_1605->g_115,&p_1605->g_115,&p_1605->g_115,&p_1605->g_115,&p_1605->g_115}, // p_1605->g_535
        (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0L), 0L), // p_1605->g_542
        3UL, // p_1605->g_554
        &p_1605->g_554, // p_1605->g_553
        {&p_1605->g_553,&p_1605->g_553,&p_1605->g_553,&p_1605->g_553}, // p_1605->g_552
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x56588FEE458260DBL), 0x56588FEE458260DBL), 0x56588FEE458260DBL, 1UL, 0x56588FEE458260DBL), // p_1605->g_562
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), 65533UL), // p_1605->g_589
        (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L), // p_1605->g_616
        (VECTOR(uint8_t, 2))(0x5DL, 0x93L), // p_1605->g_622
        (-1L), // p_1605->g_628
        1L, // p_1605->g_630
        (void*)0, // p_1605->g_661
        &p_1605->g_661, // p_1605->g_660
        (VECTOR(int8_t, 8))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x23L), 0x23L), 0x23L, 0x50L, 0x23L), // p_1605->g_677
        (VECTOR(int8_t, 2))(0x34L, 1L), // p_1605->g_695
        &p_1605->g_302, // p_1605->g_716
        (-3L), // p_1605->g_786
        (void*)0, // p_1605->g_804
        1UL, // p_1605->g_807
        {{0UL,0UL},{0UL,0UL},{0UL,0UL}}, // p_1605->g_811
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L)), // p_1605->g_814
        1UL, // p_1605->g_860
        &p_1605->g_630, // p_1605->g_868
        (VECTOR(int16_t, 2))(0x7272L, 1L), // p_1605->g_880
        (VECTOR(int16_t, 4))(0x01B8L, (VECTOR(int16_t, 2))(0x01B8L, 0x6509L), 0x6509L), // p_1605->g_882
        (VECTOR(int32_t, 4))(0x782D0B7AL, (VECTOR(int32_t, 2))(0x782D0B7AL, 0x514C274AL), 0x514C274AL), // p_1605->g_886
        0UL, // p_1605->g_948
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x297CL), 0x297CL), // p_1605->g_1003
        (VECTOR(int64_t, 8))(0x76ACC0871A8114E2L, (VECTOR(int64_t, 4))(0x76ACC0871A8114E2L, (VECTOR(int64_t, 2))(0x76ACC0871A8114E2L, 0L), 0L), 0L, 0x76ACC0871A8114E2L, 0L), // p_1605->g_1016
        (VECTOR(int8_t, 2))((-1L), 0L), // p_1605->g_1051
        (void*)0, // p_1605->g_1062
        {&p_1605->g_1062,&p_1605->g_1062,&p_1605->g_1062,&p_1605->g_1062,&p_1605->g_1062,&p_1605->g_1062,&p_1605->g_1062}, // p_1605->g_1061
        (VECTOR(int8_t, 2))(0x44L, 6L), // p_1605->g_1075
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x0563L), 0x0563L), // p_1605->g_1108
        (VECTOR(int32_t, 2))(0L, 0x6232BFADL), // p_1605->g_1128
        (void*)0, // p_1605->g_1137
        &p_1605->g_1137, // p_1605->g_1136
        5L, // p_1605->g_1154
        (VECTOR(int32_t, 2))((-8L), 0L), // p_1605->g_1160
        (-4L), // p_1605->g_1182
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), // p_1605->g_1185
        (VECTOR(uint16_t, 8))(0xD940L, (VECTOR(uint16_t, 4))(0xD940L, (VECTOR(uint16_t, 2))(0xD940L, 3UL), 3UL), 3UL, 0xD940L, 3UL), // p_1605->g_1220
        (VECTOR(uint64_t, 16))(0x9D2FC2ABB130F6F0L, (VECTOR(uint64_t, 4))(0x9D2FC2ABB130F6F0L, (VECTOR(uint64_t, 2))(0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL), 0x60341C342B99ED8AL), 0x60341C342B99ED8AL, 0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL, (VECTOR(uint64_t, 2))(0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL), (VECTOR(uint64_t, 2))(0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL), 0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL, 0x9D2FC2ABB130F6F0L, 0x60341C342B99ED8AL), // p_1605->g_1221
        (VECTOR(int32_t, 4))(0x0F5B2095L, (VECTOR(int32_t, 2))(0x0F5B2095L, 3L), 3L), // p_1605->g_1251
        (VECTOR(uint64_t, 2))(0x9DD3AAE62C7B5586L, 0x202D28F284EC45CEL), // p_1605->g_1274
        4L, // p_1605->g_1293
        &p_1605->g_1293, // p_1605->g_1292
        &p_1605->g_1292, // p_1605->g_1291
        &p_1605->g_1291, // p_1605->g_1290
        (VECTOR(int32_t, 2))(6L, (-1L)), // p_1605->g_1299
        (VECTOR(uint32_t, 8))(0xFD4FA013L, (VECTOR(uint32_t, 4))(0xFD4FA013L, (VECTOR(uint32_t, 2))(0xFD4FA013L, 4UL), 4UL), 4UL, 0xFD4FA013L, 4UL), // p_1605->g_1301
        (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x7BFB48F8L), 0x7BFB48F8L), 0x7BFB48F8L, 7L, 0x7BFB48F8L, (VECTOR(int32_t, 2))(7L, 0x7BFB48F8L), (VECTOR(int32_t, 2))(7L, 0x7BFB48F8L), 7L, 0x7BFB48F8L, 7L, 0x7BFB48F8L), // p_1605->g_1310
        0L, // p_1605->g_1358
        (-1L), // p_1605->g_1365
        (void*)0, // p_1605->g_1420
        {&p_1605->g_1061[3],&p_1605->g_1061[3]}, // p_1605->g_1431
        (-6L), // p_1605->g_1456
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 3L), 3L), // p_1605->g_1553
        (VECTOR(uint16_t, 16))(0xA4E5L, (VECTOR(uint16_t, 4))(0xA4E5L, (VECTOR(uint16_t, 2))(0xA4E5L, 0UL), 0UL), 0UL, 0xA4E5L, 0UL, (VECTOR(uint16_t, 2))(0xA4E5L, 0UL), (VECTOR(uint16_t, 2))(0xA4E5L, 0UL), 0xA4E5L, 0UL, 0xA4E5L, 0UL), // p_1605->g_1572
        (VECTOR(uint8_t, 16))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 251UL), 251UL), 251UL, 0x46L, 251UL, (VECTOR(uint8_t, 2))(0x46L, 251UL), (VECTOR(uint8_t, 2))(0x46L, 251UL), 0x46L, 251UL, 0x46L, 251UL), // p_1605->g_1574
        (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xC2L), 0xC2L), // p_1605->g_1575
        &p_1605->g_628, // p_1605->g_1586
        0, // p_1605->v_collective
        sequence_input[get_global_id(0)], // p_1605->global_0_offset
        sequence_input[get_global_id(1)], // p_1605->global_1_offset
        sequence_input[get_global_id(2)], // p_1605->global_2_offset
        sequence_input[get_local_id(0)], // p_1605->local_0_offset
        sequence_input[get_local_id(1)], // p_1605->local_1_offset
        sequence_input[get_local_id(2)], // p_1605->local_2_offset
        sequence_input[get_group_id(0)], // p_1605->group_0_offset
        sequence_input[get_group_id(1)], // p_1605->group_1_offset
        sequence_input[get_group_id(2)], // p_1605->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_1605->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1606 = c_1607;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1605);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1605->g_3, "p_1605->g_3", print_hash_value);
    transparent_crc(p_1605->g_22, "p_1605->g_22", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1605->g_78[i][j][k], "p_1605->g_78[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1605->g_92.s0, "p_1605->g_92.s0", print_hash_value);
    transparent_crc(p_1605->g_92.s1, "p_1605->g_92.s1", print_hash_value);
    transparent_crc(p_1605->g_92.s2, "p_1605->g_92.s2", print_hash_value);
    transparent_crc(p_1605->g_92.s3, "p_1605->g_92.s3", print_hash_value);
    transparent_crc(p_1605->g_92.s4, "p_1605->g_92.s4", print_hash_value);
    transparent_crc(p_1605->g_92.s5, "p_1605->g_92.s5", print_hash_value);
    transparent_crc(p_1605->g_92.s6, "p_1605->g_92.s6", print_hash_value);
    transparent_crc(p_1605->g_92.s7, "p_1605->g_92.s7", print_hash_value);
    transparent_crc(p_1605->g_92.s8, "p_1605->g_92.s8", print_hash_value);
    transparent_crc(p_1605->g_92.s9, "p_1605->g_92.s9", print_hash_value);
    transparent_crc(p_1605->g_92.sa, "p_1605->g_92.sa", print_hash_value);
    transparent_crc(p_1605->g_92.sb, "p_1605->g_92.sb", print_hash_value);
    transparent_crc(p_1605->g_92.sc, "p_1605->g_92.sc", print_hash_value);
    transparent_crc(p_1605->g_92.sd, "p_1605->g_92.sd", print_hash_value);
    transparent_crc(p_1605->g_92.se, "p_1605->g_92.se", print_hash_value);
    transparent_crc(p_1605->g_92.sf, "p_1605->g_92.sf", print_hash_value);
    transparent_crc(p_1605->g_102, "p_1605->g_102", print_hash_value);
    transparent_crc(p_1605->g_115, "p_1605->g_115", print_hash_value);
    transparent_crc(p_1605->g_117.x, "p_1605->g_117.x", print_hash_value);
    transparent_crc(p_1605->g_117.y, "p_1605->g_117.y", print_hash_value);
    transparent_crc(p_1605->g_123, "p_1605->g_123", print_hash_value);
    transparent_crc(p_1605->g_176.x, "p_1605->g_176.x", print_hash_value);
    transparent_crc(p_1605->g_176.y, "p_1605->g_176.y", print_hash_value);
    transparent_crc(p_1605->g_204, "p_1605->g_204", print_hash_value);
    transparent_crc(p_1605->g_211, "p_1605->g_211", print_hash_value);
    transparent_crc(p_1605->g_212, "p_1605->g_212", print_hash_value);
    transparent_crc(p_1605->g_233.x, "p_1605->g_233.x", print_hash_value);
    transparent_crc(p_1605->g_233.y, "p_1605->g_233.y", print_hash_value);
    transparent_crc(p_1605->g_233.z, "p_1605->g_233.z", print_hash_value);
    transparent_crc(p_1605->g_233.w, "p_1605->g_233.w", print_hash_value);
    transparent_crc(p_1605->g_235.x, "p_1605->g_235.x", print_hash_value);
    transparent_crc(p_1605->g_235.y, "p_1605->g_235.y", print_hash_value);
    transparent_crc(p_1605->g_235.z, "p_1605->g_235.z", print_hash_value);
    transparent_crc(p_1605->g_235.w, "p_1605->g_235.w", print_hash_value);
    transparent_crc(p_1605->g_274.s0, "p_1605->g_274.s0", print_hash_value);
    transparent_crc(p_1605->g_274.s1, "p_1605->g_274.s1", print_hash_value);
    transparent_crc(p_1605->g_274.s2, "p_1605->g_274.s2", print_hash_value);
    transparent_crc(p_1605->g_274.s3, "p_1605->g_274.s3", print_hash_value);
    transparent_crc(p_1605->g_274.s4, "p_1605->g_274.s4", print_hash_value);
    transparent_crc(p_1605->g_274.s5, "p_1605->g_274.s5", print_hash_value);
    transparent_crc(p_1605->g_274.s6, "p_1605->g_274.s6", print_hash_value);
    transparent_crc(p_1605->g_274.s7, "p_1605->g_274.s7", print_hash_value);
    transparent_crc(p_1605->g_274.s8, "p_1605->g_274.s8", print_hash_value);
    transparent_crc(p_1605->g_274.s9, "p_1605->g_274.s9", print_hash_value);
    transparent_crc(p_1605->g_274.sa, "p_1605->g_274.sa", print_hash_value);
    transparent_crc(p_1605->g_274.sb, "p_1605->g_274.sb", print_hash_value);
    transparent_crc(p_1605->g_274.sc, "p_1605->g_274.sc", print_hash_value);
    transparent_crc(p_1605->g_274.sd, "p_1605->g_274.sd", print_hash_value);
    transparent_crc(p_1605->g_274.se, "p_1605->g_274.se", print_hash_value);
    transparent_crc(p_1605->g_274.sf, "p_1605->g_274.sf", print_hash_value);
    transparent_crc(p_1605->g_289.x, "p_1605->g_289.x", print_hash_value);
    transparent_crc(p_1605->g_289.y, "p_1605->g_289.y", print_hash_value);
    transparent_crc(p_1605->g_361.x, "p_1605->g_361.x", print_hash_value);
    transparent_crc(p_1605->g_361.y, "p_1605->g_361.y", print_hash_value);
    transparent_crc(p_1605->g_362.s0, "p_1605->g_362.s0", print_hash_value);
    transparent_crc(p_1605->g_362.s1, "p_1605->g_362.s1", print_hash_value);
    transparent_crc(p_1605->g_362.s2, "p_1605->g_362.s2", print_hash_value);
    transparent_crc(p_1605->g_362.s3, "p_1605->g_362.s3", print_hash_value);
    transparent_crc(p_1605->g_362.s4, "p_1605->g_362.s4", print_hash_value);
    transparent_crc(p_1605->g_362.s5, "p_1605->g_362.s5", print_hash_value);
    transparent_crc(p_1605->g_362.s6, "p_1605->g_362.s6", print_hash_value);
    transparent_crc(p_1605->g_362.s7, "p_1605->g_362.s7", print_hash_value);
    transparent_crc(p_1605->g_362.s8, "p_1605->g_362.s8", print_hash_value);
    transparent_crc(p_1605->g_362.s9, "p_1605->g_362.s9", print_hash_value);
    transparent_crc(p_1605->g_362.sa, "p_1605->g_362.sa", print_hash_value);
    transparent_crc(p_1605->g_362.sb, "p_1605->g_362.sb", print_hash_value);
    transparent_crc(p_1605->g_362.sc, "p_1605->g_362.sc", print_hash_value);
    transparent_crc(p_1605->g_362.sd, "p_1605->g_362.sd", print_hash_value);
    transparent_crc(p_1605->g_362.se, "p_1605->g_362.se", print_hash_value);
    transparent_crc(p_1605->g_362.sf, "p_1605->g_362.sf", print_hash_value);
    transparent_crc(p_1605->g_363.x, "p_1605->g_363.x", print_hash_value);
    transparent_crc(p_1605->g_363.y, "p_1605->g_363.y", print_hash_value);
    transparent_crc(p_1605->g_363.z, "p_1605->g_363.z", print_hash_value);
    transparent_crc(p_1605->g_363.w, "p_1605->g_363.w", print_hash_value);
    transparent_crc(p_1605->g_390, "p_1605->g_390", print_hash_value);
    transparent_crc(p_1605->g_394.x, "p_1605->g_394.x", print_hash_value);
    transparent_crc(p_1605->g_394.y, "p_1605->g_394.y", print_hash_value);
    transparent_crc(p_1605->g_394.z, "p_1605->g_394.z", print_hash_value);
    transparent_crc(p_1605->g_394.w, "p_1605->g_394.w", print_hash_value);
    transparent_crc(p_1605->g_398.x, "p_1605->g_398.x", print_hash_value);
    transparent_crc(p_1605->g_398.y, "p_1605->g_398.y", print_hash_value);
    transparent_crc(p_1605->g_399.s0, "p_1605->g_399.s0", print_hash_value);
    transparent_crc(p_1605->g_399.s1, "p_1605->g_399.s1", print_hash_value);
    transparent_crc(p_1605->g_399.s2, "p_1605->g_399.s2", print_hash_value);
    transparent_crc(p_1605->g_399.s3, "p_1605->g_399.s3", print_hash_value);
    transparent_crc(p_1605->g_399.s4, "p_1605->g_399.s4", print_hash_value);
    transparent_crc(p_1605->g_399.s5, "p_1605->g_399.s5", print_hash_value);
    transparent_crc(p_1605->g_399.s6, "p_1605->g_399.s6", print_hash_value);
    transparent_crc(p_1605->g_399.s7, "p_1605->g_399.s7", print_hash_value);
    transparent_crc(p_1605->g_399.s8, "p_1605->g_399.s8", print_hash_value);
    transparent_crc(p_1605->g_399.s9, "p_1605->g_399.s9", print_hash_value);
    transparent_crc(p_1605->g_399.sa, "p_1605->g_399.sa", print_hash_value);
    transparent_crc(p_1605->g_399.sb, "p_1605->g_399.sb", print_hash_value);
    transparent_crc(p_1605->g_399.sc, "p_1605->g_399.sc", print_hash_value);
    transparent_crc(p_1605->g_399.sd, "p_1605->g_399.sd", print_hash_value);
    transparent_crc(p_1605->g_399.se, "p_1605->g_399.se", print_hash_value);
    transparent_crc(p_1605->g_399.sf, "p_1605->g_399.sf", print_hash_value);
    transparent_crc(p_1605->g_401.x, "p_1605->g_401.x", print_hash_value);
    transparent_crc(p_1605->g_401.y, "p_1605->g_401.y", print_hash_value);
    transparent_crc(p_1605->g_401.z, "p_1605->g_401.z", print_hash_value);
    transparent_crc(p_1605->g_401.w, "p_1605->g_401.w", print_hash_value);
    transparent_crc(p_1605->g_402.s0, "p_1605->g_402.s0", print_hash_value);
    transparent_crc(p_1605->g_402.s1, "p_1605->g_402.s1", print_hash_value);
    transparent_crc(p_1605->g_402.s2, "p_1605->g_402.s2", print_hash_value);
    transparent_crc(p_1605->g_402.s3, "p_1605->g_402.s3", print_hash_value);
    transparent_crc(p_1605->g_402.s4, "p_1605->g_402.s4", print_hash_value);
    transparent_crc(p_1605->g_402.s5, "p_1605->g_402.s5", print_hash_value);
    transparent_crc(p_1605->g_402.s6, "p_1605->g_402.s6", print_hash_value);
    transparent_crc(p_1605->g_402.s7, "p_1605->g_402.s7", print_hash_value);
    transparent_crc(p_1605->g_411.x, "p_1605->g_411.x", print_hash_value);
    transparent_crc(p_1605->g_411.y, "p_1605->g_411.y", print_hash_value);
    transparent_crc(p_1605->g_423, "p_1605->g_423", print_hash_value);
    transparent_crc(p_1605->g_444.x, "p_1605->g_444.x", print_hash_value);
    transparent_crc(p_1605->g_444.y, "p_1605->g_444.y", print_hash_value);
    transparent_crc(p_1605->g_445.x, "p_1605->g_445.x", print_hash_value);
    transparent_crc(p_1605->g_445.y, "p_1605->g_445.y", print_hash_value);
    transparent_crc(p_1605->g_449.x, "p_1605->g_449.x", print_hash_value);
    transparent_crc(p_1605->g_449.y, "p_1605->g_449.y", print_hash_value);
    transparent_crc(p_1605->g_450.x, "p_1605->g_450.x", print_hash_value);
    transparent_crc(p_1605->g_450.y, "p_1605->g_450.y", print_hash_value);
    transparent_crc(p_1605->g_469.x, "p_1605->g_469.x", print_hash_value);
    transparent_crc(p_1605->g_469.y, "p_1605->g_469.y", print_hash_value);
    transparent_crc(p_1605->g_472.x, "p_1605->g_472.x", print_hash_value);
    transparent_crc(p_1605->g_472.y, "p_1605->g_472.y", print_hash_value);
    transparent_crc(p_1605->g_472.z, "p_1605->g_472.z", print_hash_value);
    transparent_crc(p_1605->g_472.w, "p_1605->g_472.w", print_hash_value);
    transparent_crc(p_1605->g_478.s0, "p_1605->g_478.s0", print_hash_value);
    transparent_crc(p_1605->g_478.s1, "p_1605->g_478.s1", print_hash_value);
    transparent_crc(p_1605->g_478.s2, "p_1605->g_478.s2", print_hash_value);
    transparent_crc(p_1605->g_478.s3, "p_1605->g_478.s3", print_hash_value);
    transparent_crc(p_1605->g_478.s4, "p_1605->g_478.s4", print_hash_value);
    transparent_crc(p_1605->g_478.s5, "p_1605->g_478.s5", print_hash_value);
    transparent_crc(p_1605->g_478.s6, "p_1605->g_478.s6", print_hash_value);
    transparent_crc(p_1605->g_478.s7, "p_1605->g_478.s7", print_hash_value);
    transparent_crc(p_1605->g_478.s8, "p_1605->g_478.s8", print_hash_value);
    transparent_crc(p_1605->g_478.s9, "p_1605->g_478.s9", print_hash_value);
    transparent_crc(p_1605->g_478.sa, "p_1605->g_478.sa", print_hash_value);
    transparent_crc(p_1605->g_478.sb, "p_1605->g_478.sb", print_hash_value);
    transparent_crc(p_1605->g_478.sc, "p_1605->g_478.sc", print_hash_value);
    transparent_crc(p_1605->g_478.sd, "p_1605->g_478.sd", print_hash_value);
    transparent_crc(p_1605->g_478.se, "p_1605->g_478.se", print_hash_value);
    transparent_crc(p_1605->g_478.sf, "p_1605->g_478.sf", print_hash_value);
    transparent_crc(p_1605->g_481.x, "p_1605->g_481.x", print_hash_value);
    transparent_crc(p_1605->g_481.y, "p_1605->g_481.y", print_hash_value);
    transparent_crc(p_1605->g_481.z, "p_1605->g_481.z", print_hash_value);
    transparent_crc(p_1605->g_481.w, "p_1605->g_481.w", print_hash_value);
    transparent_crc(p_1605->g_496.x, "p_1605->g_496.x", print_hash_value);
    transparent_crc(p_1605->g_496.y, "p_1605->g_496.y", print_hash_value);
    transparent_crc(p_1605->g_496.z, "p_1605->g_496.z", print_hash_value);
    transparent_crc(p_1605->g_496.w, "p_1605->g_496.w", print_hash_value);
    transparent_crc(p_1605->g_515.x, "p_1605->g_515.x", print_hash_value);
    transparent_crc(p_1605->g_515.y, "p_1605->g_515.y", print_hash_value);
    transparent_crc(p_1605->g_515.z, "p_1605->g_515.z", print_hash_value);
    transparent_crc(p_1605->g_515.w, "p_1605->g_515.w", print_hash_value);
    transparent_crc(p_1605->g_530, "p_1605->g_530", print_hash_value);
    transparent_crc(p_1605->g_542.x, "p_1605->g_542.x", print_hash_value);
    transparent_crc(p_1605->g_542.y, "p_1605->g_542.y", print_hash_value);
    transparent_crc(p_1605->g_542.z, "p_1605->g_542.z", print_hash_value);
    transparent_crc(p_1605->g_542.w, "p_1605->g_542.w", print_hash_value);
    transparent_crc(p_1605->g_554, "p_1605->g_554", print_hash_value);
    transparent_crc(p_1605->g_562.s0, "p_1605->g_562.s0", print_hash_value);
    transparent_crc(p_1605->g_562.s1, "p_1605->g_562.s1", print_hash_value);
    transparent_crc(p_1605->g_562.s2, "p_1605->g_562.s2", print_hash_value);
    transparent_crc(p_1605->g_562.s3, "p_1605->g_562.s3", print_hash_value);
    transparent_crc(p_1605->g_562.s4, "p_1605->g_562.s4", print_hash_value);
    transparent_crc(p_1605->g_562.s5, "p_1605->g_562.s5", print_hash_value);
    transparent_crc(p_1605->g_562.s6, "p_1605->g_562.s6", print_hash_value);
    transparent_crc(p_1605->g_562.s7, "p_1605->g_562.s7", print_hash_value);
    transparent_crc(p_1605->g_589.x, "p_1605->g_589.x", print_hash_value);
    transparent_crc(p_1605->g_589.y, "p_1605->g_589.y", print_hash_value);
    transparent_crc(p_1605->g_589.z, "p_1605->g_589.z", print_hash_value);
    transparent_crc(p_1605->g_589.w, "p_1605->g_589.w", print_hash_value);
    transparent_crc(p_1605->g_616.s0, "p_1605->g_616.s0", print_hash_value);
    transparent_crc(p_1605->g_616.s1, "p_1605->g_616.s1", print_hash_value);
    transparent_crc(p_1605->g_616.s2, "p_1605->g_616.s2", print_hash_value);
    transparent_crc(p_1605->g_616.s3, "p_1605->g_616.s3", print_hash_value);
    transparent_crc(p_1605->g_616.s4, "p_1605->g_616.s4", print_hash_value);
    transparent_crc(p_1605->g_616.s5, "p_1605->g_616.s5", print_hash_value);
    transparent_crc(p_1605->g_616.s6, "p_1605->g_616.s6", print_hash_value);
    transparent_crc(p_1605->g_616.s7, "p_1605->g_616.s7", print_hash_value);
    transparent_crc(p_1605->g_622.x, "p_1605->g_622.x", print_hash_value);
    transparent_crc(p_1605->g_622.y, "p_1605->g_622.y", print_hash_value);
    transparent_crc(p_1605->g_628, "p_1605->g_628", print_hash_value);
    transparent_crc(p_1605->g_630, "p_1605->g_630", print_hash_value);
    transparent_crc(p_1605->g_677.s0, "p_1605->g_677.s0", print_hash_value);
    transparent_crc(p_1605->g_677.s1, "p_1605->g_677.s1", print_hash_value);
    transparent_crc(p_1605->g_677.s2, "p_1605->g_677.s2", print_hash_value);
    transparent_crc(p_1605->g_677.s3, "p_1605->g_677.s3", print_hash_value);
    transparent_crc(p_1605->g_677.s4, "p_1605->g_677.s4", print_hash_value);
    transparent_crc(p_1605->g_677.s5, "p_1605->g_677.s5", print_hash_value);
    transparent_crc(p_1605->g_677.s6, "p_1605->g_677.s6", print_hash_value);
    transparent_crc(p_1605->g_677.s7, "p_1605->g_677.s7", print_hash_value);
    transparent_crc(p_1605->g_695.x, "p_1605->g_695.x", print_hash_value);
    transparent_crc(p_1605->g_695.y, "p_1605->g_695.y", print_hash_value);
    transparent_crc(p_1605->g_786, "p_1605->g_786", print_hash_value);
    transparent_crc(p_1605->g_807, "p_1605->g_807", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1605->g_811[i][j], "p_1605->g_811[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1605->g_814.s0, "p_1605->g_814.s0", print_hash_value);
    transparent_crc(p_1605->g_814.s1, "p_1605->g_814.s1", print_hash_value);
    transparent_crc(p_1605->g_814.s2, "p_1605->g_814.s2", print_hash_value);
    transparent_crc(p_1605->g_814.s3, "p_1605->g_814.s3", print_hash_value);
    transparent_crc(p_1605->g_814.s4, "p_1605->g_814.s4", print_hash_value);
    transparent_crc(p_1605->g_814.s5, "p_1605->g_814.s5", print_hash_value);
    transparent_crc(p_1605->g_814.s6, "p_1605->g_814.s6", print_hash_value);
    transparent_crc(p_1605->g_814.s7, "p_1605->g_814.s7", print_hash_value);
    transparent_crc(p_1605->g_860, "p_1605->g_860", print_hash_value);
    transparent_crc(p_1605->g_880.x, "p_1605->g_880.x", print_hash_value);
    transparent_crc(p_1605->g_880.y, "p_1605->g_880.y", print_hash_value);
    transparent_crc(p_1605->g_882.x, "p_1605->g_882.x", print_hash_value);
    transparent_crc(p_1605->g_882.y, "p_1605->g_882.y", print_hash_value);
    transparent_crc(p_1605->g_882.z, "p_1605->g_882.z", print_hash_value);
    transparent_crc(p_1605->g_882.w, "p_1605->g_882.w", print_hash_value);
    transparent_crc(p_1605->g_886.x, "p_1605->g_886.x", print_hash_value);
    transparent_crc(p_1605->g_886.y, "p_1605->g_886.y", print_hash_value);
    transparent_crc(p_1605->g_886.z, "p_1605->g_886.z", print_hash_value);
    transparent_crc(p_1605->g_886.w, "p_1605->g_886.w", print_hash_value);
    transparent_crc(p_1605->g_948, "p_1605->g_948", print_hash_value);
    transparent_crc(p_1605->g_1003.x, "p_1605->g_1003.x", print_hash_value);
    transparent_crc(p_1605->g_1003.y, "p_1605->g_1003.y", print_hash_value);
    transparent_crc(p_1605->g_1003.z, "p_1605->g_1003.z", print_hash_value);
    transparent_crc(p_1605->g_1003.w, "p_1605->g_1003.w", print_hash_value);
    transparent_crc(p_1605->g_1016.s0, "p_1605->g_1016.s0", print_hash_value);
    transparent_crc(p_1605->g_1016.s1, "p_1605->g_1016.s1", print_hash_value);
    transparent_crc(p_1605->g_1016.s2, "p_1605->g_1016.s2", print_hash_value);
    transparent_crc(p_1605->g_1016.s3, "p_1605->g_1016.s3", print_hash_value);
    transparent_crc(p_1605->g_1016.s4, "p_1605->g_1016.s4", print_hash_value);
    transparent_crc(p_1605->g_1016.s5, "p_1605->g_1016.s5", print_hash_value);
    transparent_crc(p_1605->g_1016.s6, "p_1605->g_1016.s6", print_hash_value);
    transparent_crc(p_1605->g_1016.s7, "p_1605->g_1016.s7", print_hash_value);
    transparent_crc(p_1605->g_1051.x, "p_1605->g_1051.x", print_hash_value);
    transparent_crc(p_1605->g_1051.y, "p_1605->g_1051.y", print_hash_value);
    transparent_crc(p_1605->g_1075.x, "p_1605->g_1075.x", print_hash_value);
    transparent_crc(p_1605->g_1075.y, "p_1605->g_1075.y", print_hash_value);
    transparent_crc(p_1605->g_1108.x, "p_1605->g_1108.x", print_hash_value);
    transparent_crc(p_1605->g_1108.y, "p_1605->g_1108.y", print_hash_value);
    transparent_crc(p_1605->g_1108.z, "p_1605->g_1108.z", print_hash_value);
    transparent_crc(p_1605->g_1108.w, "p_1605->g_1108.w", print_hash_value);
    transparent_crc(p_1605->g_1128.x, "p_1605->g_1128.x", print_hash_value);
    transparent_crc(p_1605->g_1128.y, "p_1605->g_1128.y", print_hash_value);
    transparent_crc(p_1605->g_1154, "p_1605->g_1154", print_hash_value);
    transparent_crc(p_1605->g_1160.x, "p_1605->g_1160.x", print_hash_value);
    transparent_crc(p_1605->g_1160.y, "p_1605->g_1160.y", print_hash_value);
    transparent_crc(p_1605->g_1182, "p_1605->g_1182", print_hash_value);
    transparent_crc(p_1605->g_1185.x, "p_1605->g_1185.x", print_hash_value);
    transparent_crc(p_1605->g_1185.y, "p_1605->g_1185.y", print_hash_value);
    transparent_crc(p_1605->g_1185.z, "p_1605->g_1185.z", print_hash_value);
    transparent_crc(p_1605->g_1185.w, "p_1605->g_1185.w", print_hash_value);
    transparent_crc(p_1605->g_1220.s0, "p_1605->g_1220.s0", print_hash_value);
    transparent_crc(p_1605->g_1220.s1, "p_1605->g_1220.s1", print_hash_value);
    transparent_crc(p_1605->g_1220.s2, "p_1605->g_1220.s2", print_hash_value);
    transparent_crc(p_1605->g_1220.s3, "p_1605->g_1220.s3", print_hash_value);
    transparent_crc(p_1605->g_1220.s4, "p_1605->g_1220.s4", print_hash_value);
    transparent_crc(p_1605->g_1220.s5, "p_1605->g_1220.s5", print_hash_value);
    transparent_crc(p_1605->g_1220.s6, "p_1605->g_1220.s6", print_hash_value);
    transparent_crc(p_1605->g_1220.s7, "p_1605->g_1220.s7", print_hash_value);
    transparent_crc(p_1605->g_1221.s0, "p_1605->g_1221.s0", print_hash_value);
    transparent_crc(p_1605->g_1221.s1, "p_1605->g_1221.s1", print_hash_value);
    transparent_crc(p_1605->g_1221.s2, "p_1605->g_1221.s2", print_hash_value);
    transparent_crc(p_1605->g_1221.s3, "p_1605->g_1221.s3", print_hash_value);
    transparent_crc(p_1605->g_1221.s4, "p_1605->g_1221.s4", print_hash_value);
    transparent_crc(p_1605->g_1221.s5, "p_1605->g_1221.s5", print_hash_value);
    transparent_crc(p_1605->g_1221.s6, "p_1605->g_1221.s6", print_hash_value);
    transparent_crc(p_1605->g_1221.s7, "p_1605->g_1221.s7", print_hash_value);
    transparent_crc(p_1605->g_1221.s8, "p_1605->g_1221.s8", print_hash_value);
    transparent_crc(p_1605->g_1221.s9, "p_1605->g_1221.s9", print_hash_value);
    transparent_crc(p_1605->g_1221.sa, "p_1605->g_1221.sa", print_hash_value);
    transparent_crc(p_1605->g_1221.sb, "p_1605->g_1221.sb", print_hash_value);
    transparent_crc(p_1605->g_1221.sc, "p_1605->g_1221.sc", print_hash_value);
    transparent_crc(p_1605->g_1221.sd, "p_1605->g_1221.sd", print_hash_value);
    transparent_crc(p_1605->g_1221.se, "p_1605->g_1221.se", print_hash_value);
    transparent_crc(p_1605->g_1221.sf, "p_1605->g_1221.sf", print_hash_value);
    transparent_crc(p_1605->g_1251.x, "p_1605->g_1251.x", print_hash_value);
    transparent_crc(p_1605->g_1251.y, "p_1605->g_1251.y", print_hash_value);
    transparent_crc(p_1605->g_1251.z, "p_1605->g_1251.z", print_hash_value);
    transparent_crc(p_1605->g_1251.w, "p_1605->g_1251.w", print_hash_value);
    transparent_crc(p_1605->g_1274.x, "p_1605->g_1274.x", print_hash_value);
    transparent_crc(p_1605->g_1274.y, "p_1605->g_1274.y", print_hash_value);
    transparent_crc(p_1605->g_1293, "p_1605->g_1293", print_hash_value);
    transparent_crc(p_1605->g_1299.x, "p_1605->g_1299.x", print_hash_value);
    transparent_crc(p_1605->g_1299.y, "p_1605->g_1299.y", print_hash_value);
    transparent_crc(p_1605->g_1301.s0, "p_1605->g_1301.s0", print_hash_value);
    transparent_crc(p_1605->g_1301.s1, "p_1605->g_1301.s1", print_hash_value);
    transparent_crc(p_1605->g_1301.s2, "p_1605->g_1301.s2", print_hash_value);
    transparent_crc(p_1605->g_1301.s3, "p_1605->g_1301.s3", print_hash_value);
    transparent_crc(p_1605->g_1301.s4, "p_1605->g_1301.s4", print_hash_value);
    transparent_crc(p_1605->g_1301.s5, "p_1605->g_1301.s5", print_hash_value);
    transparent_crc(p_1605->g_1301.s6, "p_1605->g_1301.s6", print_hash_value);
    transparent_crc(p_1605->g_1301.s7, "p_1605->g_1301.s7", print_hash_value);
    transparent_crc(p_1605->g_1310.s0, "p_1605->g_1310.s0", print_hash_value);
    transparent_crc(p_1605->g_1310.s1, "p_1605->g_1310.s1", print_hash_value);
    transparent_crc(p_1605->g_1310.s2, "p_1605->g_1310.s2", print_hash_value);
    transparent_crc(p_1605->g_1310.s3, "p_1605->g_1310.s3", print_hash_value);
    transparent_crc(p_1605->g_1310.s4, "p_1605->g_1310.s4", print_hash_value);
    transparent_crc(p_1605->g_1310.s5, "p_1605->g_1310.s5", print_hash_value);
    transparent_crc(p_1605->g_1310.s6, "p_1605->g_1310.s6", print_hash_value);
    transparent_crc(p_1605->g_1310.s7, "p_1605->g_1310.s7", print_hash_value);
    transparent_crc(p_1605->g_1310.s8, "p_1605->g_1310.s8", print_hash_value);
    transparent_crc(p_1605->g_1310.s9, "p_1605->g_1310.s9", print_hash_value);
    transparent_crc(p_1605->g_1310.sa, "p_1605->g_1310.sa", print_hash_value);
    transparent_crc(p_1605->g_1310.sb, "p_1605->g_1310.sb", print_hash_value);
    transparent_crc(p_1605->g_1310.sc, "p_1605->g_1310.sc", print_hash_value);
    transparent_crc(p_1605->g_1310.sd, "p_1605->g_1310.sd", print_hash_value);
    transparent_crc(p_1605->g_1310.se, "p_1605->g_1310.se", print_hash_value);
    transparent_crc(p_1605->g_1310.sf, "p_1605->g_1310.sf", print_hash_value);
    transparent_crc(p_1605->g_1358, "p_1605->g_1358", print_hash_value);
    transparent_crc(p_1605->g_1365, "p_1605->g_1365", print_hash_value);
    transparent_crc(p_1605->g_1456, "p_1605->g_1456", print_hash_value);
    transparent_crc(p_1605->g_1553.x, "p_1605->g_1553.x", print_hash_value);
    transparent_crc(p_1605->g_1553.y, "p_1605->g_1553.y", print_hash_value);
    transparent_crc(p_1605->g_1553.z, "p_1605->g_1553.z", print_hash_value);
    transparent_crc(p_1605->g_1553.w, "p_1605->g_1553.w", print_hash_value);
    transparent_crc(p_1605->g_1572.s0, "p_1605->g_1572.s0", print_hash_value);
    transparent_crc(p_1605->g_1572.s1, "p_1605->g_1572.s1", print_hash_value);
    transparent_crc(p_1605->g_1572.s2, "p_1605->g_1572.s2", print_hash_value);
    transparent_crc(p_1605->g_1572.s3, "p_1605->g_1572.s3", print_hash_value);
    transparent_crc(p_1605->g_1572.s4, "p_1605->g_1572.s4", print_hash_value);
    transparent_crc(p_1605->g_1572.s5, "p_1605->g_1572.s5", print_hash_value);
    transparent_crc(p_1605->g_1572.s6, "p_1605->g_1572.s6", print_hash_value);
    transparent_crc(p_1605->g_1572.s7, "p_1605->g_1572.s7", print_hash_value);
    transparent_crc(p_1605->g_1572.s8, "p_1605->g_1572.s8", print_hash_value);
    transparent_crc(p_1605->g_1572.s9, "p_1605->g_1572.s9", print_hash_value);
    transparent_crc(p_1605->g_1572.sa, "p_1605->g_1572.sa", print_hash_value);
    transparent_crc(p_1605->g_1572.sb, "p_1605->g_1572.sb", print_hash_value);
    transparent_crc(p_1605->g_1572.sc, "p_1605->g_1572.sc", print_hash_value);
    transparent_crc(p_1605->g_1572.sd, "p_1605->g_1572.sd", print_hash_value);
    transparent_crc(p_1605->g_1572.se, "p_1605->g_1572.se", print_hash_value);
    transparent_crc(p_1605->g_1572.sf, "p_1605->g_1572.sf", print_hash_value);
    transparent_crc(p_1605->g_1574.s0, "p_1605->g_1574.s0", print_hash_value);
    transparent_crc(p_1605->g_1574.s1, "p_1605->g_1574.s1", print_hash_value);
    transparent_crc(p_1605->g_1574.s2, "p_1605->g_1574.s2", print_hash_value);
    transparent_crc(p_1605->g_1574.s3, "p_1605->g_1574.s3", print_hash_value);
    transparent_crc(p_1605->g_1574.s4, "p_1605->g_1574.s4", print_hash_value);
    transparent_crc(p_1605->g_1574.s5, "p_1605->g_1574.s5", print_hash_value);
    transparent_crc(p_1605->g_1574.s6, "p_1605->g_1574.s6", print_hash_value);
    transparent_crc(p_1605->g_1574.s7, "p_1605->g_1574.s7", print_hash_value);
    transparent_crc(p_1605->g_1574.s8, "p_1605->g_1574.s8", print_hash_value);
    transparent_crc(p_1605->g_1574.s9, "p_1605->g_1574.s9", print_hash_value);
    transparent_crc(p_1605->g_1574.sa, "p_1605->g_1574.sa", print_hash_value);
    transparent_crc(p_1605->g_1574.sb, "p_1605->g_1574.sb", print_hash_value);
    transparent_crc(p_1605->g_1574.sc, "p_1605->g_1574.sc", print_hash_value);
    transparent_crc(p_1605->g_1574.sd, "p_1605->g_1574.sd", print_hash_value);
    transparent_crc(p_1605->g_1574.se, "p_1605->g_1574.se", print_hash_value);
    transparent_crc(p_1605->g_1574.sf, "p_1605->g_1574.sf", print_hash_value);
    transparent_crc(p_1605->g_1575.x, "p_1605->g_1575.x", print_hash_value);
    transparent_crc(p_1605->g_1575.y, "p_1605->g_1575.y", print_hash_value);
    transparent_crc(p_1605->g_1575.z, "p_1605->g_1575.z", print_hash_value);
    transparent_crc(p_1605->g_1575.w, "p_1605->g_1575.w", print_hash_value);
    transparent_crc(p_1605->v_collective, "p_1605->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 4; i++)
            transparent_crc(p_1605->g_special_values[i + 4 * get_linear_group_id()], "p_1605->g_special_values[i + 4 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 4; i++)
            transparent_crc(p_1605->l_special_values[i], "p_1605->l_special_values[i]", print_hash_value);
    transparent_crc(p_1605->l_comm_values[get_linear_local_id()], "p_1605->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1605->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_1605->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
