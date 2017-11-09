// --atomics 7 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 5,75,9 -l 5,1,3
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

__constant uint32_t permutations[10][15] = {
{9,6,11,5,10,13,0,2,8,4,1,12,14,7,3}, // permutation 0
{10,12,4,9,3,0,1,2,6,13,11,14,5,8,7}, // permutation 1
{2,12,6,10,4,1,3,0,13,5,9,11,14,8,7}, // permutation 2
{6,8,4,5,7,10,14,12,9,0,2,13,11,3,1}, // permutation 3
{7,12,9,4,0,8,13,1,11,5,14,6,3,2,10}, // permutation 4
{1,11,13,0,10,14,2,8,4,9,12,3,7,5,6}, // permutation 5
{4,5,12,8,10,13,11,0,2,3,9,14,6,7,1}, // permutation 6
{8,5,3,2,9,7,4,14,1,0,10,12,11,13,6}, // permutation 7
{9,0,5,6,14,13,4,8,2,11,10,12,1,3,7}, // permutation 8
{11,4,7,13,3,0,9,2,1,5,10,14,6,12,8} // permutation 9
};

// Seed: 2825920164

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_211;
    int32_t *g_213;
    int32_t **g_212;
    uint64_t g_219;
    VECTOR(int8_t, 16) g_237;
    volatile int8_t * volatile g_258;
    int64_t *g_280[10];
    int8_t g_291;
    int32_t g_307[9][2];
    int32_t g_311;
    int64_t *g_317;
    int8_t *g_330;
    VECTOR(int64_t, 4) g_339;
    VECTOR(int64_t, 4) g_341;
    uint8_t g_357;
    uint8_t g_372;
    int16_t g_406;
    int16_t g_408;
    VECTOR(uint32_t, 8) g_417;
    uint32_t g_419;
    volatile int8_t g_423;
    volatile int8_t g_424;
    volatile int8_t g_425;
    volatile int8_t g_426;
    volatile int8_t g_427;
    volatile int8_t g_428;
    volatile int8_t g_429;
    volatile int8_t g_430;
    volatile int8_t g_431;
    volatile int8_t g_432[6];
    volatile int8_t g_433;
    volatile int8_t g_434;
    volatile int8_t g_435;
    volatile int8_t g_436[6];
    volatile int8_t g_437;
    volatile int8_t g_438;
    volatile VECTOR(int8_t, 2) g_439;
    volatile int8_t *g_422[10][6][2];
    VECTOR(int16_t, 16) g_450;
    VECTOR(int8_t, 2) g_498;
    VECTOR(int8_t, 4) g_499;
    uint32_t g_516;
    VECTOR(int32_t, 2) g_537;
    uint32_t g_550[4];
    VECTOR(uint32_t, 4) g_560;
    int8_t g_580;
    int64_t **g_609;
    volatile int32_t *g_610;
    uint16_t g_612;
    uint16_t *g_611;
    uint64_t *g_618;
    VECTOR(uint32_t, 16) g_623;
    uint16_t g_626;
    int8_t g_627[7];
    VECTOR(int8_t, 8) g_631;
    VECTOR(int32_t, 4) g_634;
    VECTOR(int32_t, 16) g_635;
    int32_t ** volatile g_660;
    int32_t *g_661;
    volatile VECTOR(int32_t, 16) g_695;
    VECTOR(uint32_t, 16) g_716;
    VECTOR(uint32_t, 8) g_717;
    volatile VECTOR(uint32_t, 4) g_721;
    volatile VECTOR(uint32_t, 16) g_723;
    VECTOR(uint32_t, 8) g_724;
    volatile VECTOR(uint32_t, 4) g_726;
    uint8_t g_731[1][7];
    VECTOR(uint32_t, 8) g_818;
    volatile VECTOR(uint64_t, 4) g_820;
    VECTOR(uint16_t, 16) g_872;
    volatile VECTOR(int64_t, 4) g_898;
    VECTOR(int64_t, 16) g_899;
    VECTOR(int64_t, 2) g_900;
    VECTOR(int64_t, 16) g_901;
    VECTOR(uint64_t, 16) g_908;
    int32_t *g_913;
    volatile VECTOR(int16_t, 2) g_926;
    int64_t g_942;
    VECTOR(uint64_t, 4) g_958;
    VECTOR(uint16_t, 8) g_1010;
    VECTOR(int64_t, 4) g_1017;
    int32_t g_1023;
    volatile int16_t g_1028;
    VECTOR(int32_t, 4) g_1029;
    VECTOR(int32_t, 16) g_1030;
    volatile VECTOR(int32_t, 16) g_1032;
    volatile VECTOR(int32_t, 16) g_1038;
    VECTOR(int32_t, 16) g_1039;
    volatile VECTOR(int32_t, 2) g_1040;
    VECTOR(int32_t, 16) g_1044;
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
int64_t  func_1(struct S0 * p_1049);
uint64_t  func_223(int32_t * p_224, uint64_t * p_225, int32_t * p_226, struct S0 * p_1049);
int32_t * func_227(uint32_t  p_228, struct S0 * p_1049);
uint64_t * func_243(int8_t * p_244, struct S0 * p_1049);
int64_t  func_247(int8_t  p_248, int32_t ** p_249, struct S0 * p_1049);
int64_t  func_250(uint64_t  p_251, uint64_t  p_252, int32_t ** p_253, int8_t * p_254, struct S0 * p_1049);
int8_t * func_259(int64_t  p_260, uint64_t * p_261, int8_t * p_262, uint32_t  p_263, int32_t ** p_264, struct S0 * p_1049);
int8_t  func_269(int8_t  p_270, int8_t * p_271, uint16_t  p_272, int32_t  p_273, struct S0 * p_1049);
uint64_t  func_276(uint64_t  p_277, int64_t * p_278, uint32_t  p_279, struct S0 * p_1049);
int32_t * func_283(int32_t  p_284, uint32_t  p_285, struct S0 * p_1049);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1049->g_comm_values p_1049->g_211 p_1049->g_212 p_1049->g_213 p_1049->g_219 p_1049->g_258 p_1049->g_237 p_1049->g_280 p_1049->g_307 p_1049->g_311 p_1049->l_comm_values p_1049->g_330 p_1049->g_339 p_1049->g_341 p_1049->g_408 p_1049->g_372 p_1049->g_417 p_1049->g_419 p_1049->g_422 p_1049->g_406 p_1049->g_450 p_1049->g_357 p_1049->g_291 p_1049->g_498 p_1049->g_499 p_1049->g_516 p_1049->g_537 p_1049->g_550 p_1049->g_611 p_1049->g_623 p_1049->g_626 p_1049->g_627 p_1049->g_631 p_1049->g_634 p_1049->g_635 p_1049->g_612 p_1049->g_913 p_1049->g_926 p_1049->g_428 p_1049->g_731 p_1049->g_901 p_1049->g_942
 * writes: p_1049->l_comm_values p_1049->g_211 p_1049->g_219 p_1049->g_213 p_1049->g_291 p_1049->g_307 p_1049->g_311 p_1049->g_280 p_1049->g_317 p_1049->g_357 p_1049->g_372 p_1049->g_406 p_1049->g_408 p_1049->g_419 p_1049->g_417 p_1049->g_609 p_1049->g_610 p_1049->g_618 p_1049->g_623 p_1049->g_537 p_1049->g_330 p_1049->g_661 p_1049->g_611 p_1049->g_942
 */
int64_t  func_1(struct S0 * p_1049)
{ /* block id: 4 */
    uint16_t l_203 = 0xAB20L;
    int64_t *l_206[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_207 = (-1L);
    int32_t *l_210 = &p_1049->g_211;
    uint64_t *l_218 = &p_1049->g_219;
    VECTOR(int32_t, 4) l_220 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x45B17A6DL), 0x45B17A6DL);
    uint32_t l_257 = 0xCBDD7395L;
    uint64_t l_328[6][9][4] = {{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}},{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}},{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}},{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}},{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}},{{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L},{5UL,0x901F26A2760B0B68L,0x2F24E1A288EE34ADL,0x901F26A2760B0B68L}}};
    int8_t *l_329 = &p_1049->g_291;
    int32_t **l_651 = &l_210;
    int32_t ***l_650 = &l_651;
    int32_t *l_941[1][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 2) l_1016 = (VECTOR(uint64_t, 2))(0xEB89EBE35AD5085FL, 18446744073709551615UL);
    VECTOR(int32_t, 2) l_1031 = (VECTOR(int32_t, 2))(0x7DF7F42AL, 0x2800CE94L);
    VECTOR(int32_t, 16) l_1037 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x4328F170L), 0x4328F170L), 0x4328F170L, (-8L), 0x4328F170L, (VECTOR(int32_t, 2))((-8L), 0x4328F170L), (VECTOR(int32_t, 2))((-8L), 0x4328F170L), (-8L), 0x4328F170L, (-8L), 0x4328F170L);
    VECTOR(int32_t, 16) l_1041 = (VECTOR(int32_t, 16))(0x37AAFACFL, (VECTOR(int32_t, 4))(0x37AAFACFL, (VECTOR(int32_t, 2))(0x37AAFACFL, 0x0A0D15C9L), 0x0A0D15C9L), 0x0A0D15C9L, 0x37AAFACFL, 0x0A0D15C9L, (VECTOR(int32_t, 2))(0x37AAFACFL, 0x0A0D15C9L), (VECTOR(int32_t, 2))(0x37AAFACFL, 0x0A0D15C9L), 0x37AAFACFL, 0x0A0D15C9L, 0x37AAFACFL, 0x0A0D15C9L);
    int16_t *l_1042 = (void*)0;
    int16_t *l_1043[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    if ((atomic_inc(&p_1049->g_atomic_input[7 * get_linear_group_id() + 2]) == 7))
    { /* block id: 6 */
        int32_t *l_2 = (void*)0;
        int32_t l_4 = 4L;
        int32_t *l_3 = &l_4;
        int32_t l_5 = 0x340194DDL;
        int32_t l_6[10] = {0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L,0x7822E6E7L};
        uint8_t l_7 = 0xF3L;
        VECTOR(uint16_t, 4) l_10 = (VECTOR(uint16_t, 4))(0xFA83L, (VECTOR(uint16_t, 2))(0xFA83L, 0xB239L), 0xB239L);
        uint32_t l_11 = 0UL;
        VECTOR(uint32_t, 8) l_12 = (VECTOR(uint32_t, 8))(0x25D36729L, (VECTOR(uint32_t, 4))(0x25D36729L, (VECTOR(uint32_t, 2))(0x25D36729L, 3UL), 3UL), 3UL, 0x25D36729L, 3UL);
        int64_t l_13 = 0x6DB39523DD972C40L;
        uint8_t l_197 = 0x05L;
        int32_t l_198 = 0L;
        int i;
        l_3 = l_2;
        --l_7;
        if (((l_13 = ((((VECTOR(uint16_t, 4))(l_10.yxwx)).z , l_11) , (((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(4294967295UL, 0x45C1D102L)).xyxx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_12.s2357711125302134)).odd)).odd))))).w , ((VECTOR(int32_t, 4))(0x63CB5AF9L, 0x48B166C1L, 0L, 0x23691F6FL)).x))) , 8L))
        { /* block id: 10 */
            int16_t l_14 = 0x6E91L;
            int64_t l_15 = 0x0D955A61940C9BA5L;
            uint8_t l_16 = 0UL;
            --l_16;
            for (l_16 = 25; (l_16 != 56); l_16 = safe_add_func_int32_t_s_s(l_16, 7))
            { /* block id: 14 */
                int8_t l_21 = 0x45L;
                uint32_t l_22 = 0xCF419C2BL;
                VECTOR(int32_t, 16) l_25 = (VECTOR(int32_t, 16))(0x5DBD55ADL, (VECTOR(int32_t, 4))(0x5DBD55ADL, (VECTOR(int32_t, 2))(0x5DBD55ADL, 0x1FD9AB8AL), 0x1FD9AB8AL), 0x1FD9AB8AL, 0x5DBD55ADL, 0x1FD9AB8AL, (VECTOR(int32_t, 2))(0x5DBD55ADL, 0x1FD9AB8AL), (VECTOR(int32_t, 2))(0x5DBD55ADL, 0x1FD9AB8AL), 0x5DBD55ADL, 0x1FD9AB8AL, 0x5DBD55ADL, 0x1FD9AB8AL);
                uint64_t l_26[1][4] = {{0x19D88C83B91359A7L,0x19D88C83B91359A7L,0x19D88C83B91359A7L,0x19D88C83B91359A7L}};
                uint32_t l_27 = 4294967286UL;
                uint32_t l_28 = 0x3C394A73L;
                int i, j;
                l_22--;
                l_27 = ((l_6[5] ^= ((VECTOR(int32_t, 4))(l_25.s87ea)).x) , l_26[0][0]);
                l_25.s8 = l_28;
                for (l_22 = 0; (l_22 < 8); ++l_22)
                { /* block id: 21 */
                    uint8_t l_31 = 8UL;
                    int32_t l_32 = 0x2CDD1F66L;
                    l_25.s8 = 0x232987C8L;
                    l_32 |= l_31;
                    for (l_32 = 0; (l_32 <= 20); l_32++)
                    { /* block id: 26 */
                        uint64_t l_35 = 18446744073709551615UL;
                        uint8_t l_36 = 0xF1L;
                        int8_t l_37 = 1L;
                        VECTOR(uint64_t, 8) l_38 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 18446744073709551609UL, 18446744073709551614UL);
                        int64_t l_41 = 0x27B2E0AD50A0C201L;
                        int64_t l_42 = 5L;
                        uint32_t l_43 = 2UL;
                        int64_t l_46 = 0L;
                        uint32_t l_47 = 0x06983816L;
                        int i;
                        l_42 = (l_6[3] |= (l_5 = (l_4 |= (l_35 , ((((l_36 , l_37) , ((VECTOR(uint64_t, 8))(l_38.s12777743)).s7) , (++l_10.x)) , l_41)))));
                        ++l_43;
                        l_47 = l_46;
                    }
                    for (l_31 = 0; (l_31 != 46); l_31 = safe_add_func_int16_t_s_s(l_31, 1))
                    { /* block id: 37 */
                        int8_t l_50 = 2L;
                        int32_t l_51[5];
                        int8_t l_52 = 0x59L;
                        int32_t l_53 = 1L;
                        uint32_t l_54 = 0xE690D922L;
                        int32_t *l_58 = &l_53;
                        int32_t **l_57[10] = {&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58};
                        int32_t **l_59[10];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_51[i] = (-4L);
                        for (i = 0; i < 10; i++)
                            l_59[i] = (void*)0;
                        ++l_54;
                        l_59[1] = l_57[9];
                    }
                }
            }
            for (l_14 = 0; (l_14 >= (-14)); l_14 = safe_sub_func_int32_t_s_s(l_14, 7))
            { /* block id: 45 */
                int32_t l_63 = 9L;
                int32_t *l_62[1][10][2] = {{{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63},{&l_63,&l_63}}};
                int32_t *l_64[8] = {&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63};
                int32_t l_65[6] = {0x535930CBL,1L,0x535930CBL,0x535930CBL,1L,0x535930CBL};
                uint64_t l_66 = 18446744073709551612UL;
                VECTOR(int32_t, 8) l_67 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L);
                int i, j, k;
                l_64[4] = (l_2 = l_62[0][6][0]);
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((*l_2) = 1L), (l_65[0] , 1L), (l_66 , ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(l_67.s5220)), 0x44E1B820L, 0x6BFC8A30L, 0x76CFD11EL)).s6), 0x1C4BD7DAL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x71A050D6L, 8L, 0L, 0x666DBAC6L)).hi)), (-10L), 0x5B647B0CL)).s3415405524044223)).s8)
                { /* block id: 49 */
                    int32_t l_68 = 0L;
                    for (l_68 = 14; (l_68 <= (-10)); l_68 = safe_sub_func_uint16_t_u_u(l_68, 2))
                    { /* block id: 52 */
                        int32_t l_72 = 0x48DFB1A9L;
                        int32_t *l_71 = &l_72;
                        VECTOR(int16_t, 16) l_73 = (VECTOR(int16_t, 16))(0x575EL, (VECTOR(int16_t, 4))(0x575EL, (VECTOR(int16_t, 2))(0x575EL, (-1L)), (-1L)), (-1L), 0x575EL, (-1L), (VECTOR(int16_t, 2))(0x575EL, (-1L)), (VECTOR(int16_t, 2))(0x575EL, (-1L)), 0x575EL, (-1L), 0x575EL, (-1L));
                        VECTOR(int16_t, 8) l_74 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7B3CL), 0x7B3CL), 0x7B3CL, 0L, 0x7B3CL);
                        VECTOR(int16_t, 4) l_75 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x193AL), 0x193AL);
                        VECTOR(int16_t, 16) l_76 = (VECTOR(int16_t, 16))(0x50D1L, (VECTOR(int16_t, 4))(0x50D1L, (VECTOR(int16_t, 2))(0x50D1L, 0x4EFCL), 0x4EFCL), 0x4EFCL, 0x50D1L, 0x4EFCL, (VECTOR(int16_t, 2))(0x50D1L, 0x4EFCL), (VECTOR(int16_t, 2))(0x50D1L, 0x4EFCL), 0x50D1L, 0x4EFCL, 0x50D1L, 0x4EFCL);
                        VECTOR(int16_t, 8) l_77 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-5L)), (-5L)), (-5L), 3L, (-5L));
                        VECTOR(int16_t, 16) l_78 = (VECTOR(int16_t, 16))(0x4CD0L, (VECTOR(int16_t, 4))(0x4CD0L, (VECTOR(int16_t, 2))(0x4CD0L, 9L), 9L), 9L, 0x4CD0L, 9L, (VECTOR(int16_t, 2))(0x4CD0L, 9L), (VECTOR(int16_t, 2))(0x4CD0L, 9L), 0x4CD0L, 9L, 0x4CD0L, 9L);
                        VECTOR(int16_t, 2) l_79 = (VECTOR(int16_t, 2))((-1L), 0x0F2BL);
                        VECTOR(int16_t, 8) l_80 = (VECTOR(int16_t, 8))(0x5C17L, (VECTOR(int16_t, 4))(0x5C17L, (VECTOR(int16_t, 2))(0x5C17L, 0x5423L), 0x5423L), 0x5423L, 0x5C17L, 0x5423L);
                        VECTOR(int16_t, 4) l_81 = (VECTOR(int16_t, 4))(0x269EL, (VECTOR(int16_t, 2))(0x269EL, 0x730AL), 0x730AL);
                        uint64_t l_82 = 18446744073709551607UL;
                        VECTOR(int16_t, 8) l_83 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1EFCL), 0x1EFCL), 0x1EFCL, 0L, 0x1EFCL);
                        VECTOR(int16_t, 8) l_84 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x566CL), 0x566CL), 0x566CL, 6L, 0x566CL);
                        VECTOR(int16_t, 4) l_85 = (VECTOR(int16_t, 4))(0x2087L, (VECTOR(int16_t, 2))(0x2087L, (-7L)), (-7L));
                        VECTOR(int16_t, 2) l_86 = (VECTOR(int16_t, 2))(0x05B8L, 0x43A2L);
                        uint32_t l_87[9] = {0x7556C5F0L,0x95E10BBFL,0x7556C5F0L,0x7556C5F0L,0x95E10BBFL,0x7556C5F0L,0x7556C5F0L,0x95E10BBFL,0x7556C5F0L};
                        int32_t l_88 = 0x2C8F413EL;
                        int64_t l_89 = 0x21D558A6D5089D57L;
                        VECTOR(uint64_t, 8) l_90 = (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x59E05BB15C06464BL), 0x59E05BB15C06464BL), 0x59E05BB15C06464BL, 18446744073709551614UL, 0x59E05BB15C06464BL);
                        uint16_t l_91 = 2UL;
                        VECTOR(uint64_t, 2) l_92 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL);
                        VECTOR(uint64_t, 8) l_93 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xFD80D4602054360EL), 0xFD80D4602054360EL), 0xFD80D4602054360EL, 18446744073709551609UL, 0xFD80D4602054360EL);
                        int16_t l_94 = (-9L);
                        int32_t l_95 = 0x59D29738L;
                        int16_t l_96 = 0x666CL;
                        int64_t l_97 = 0x5DFB1779622336EAL;
                        int8_t l_98 = 6L;
                        int32_t l_99 = 1L;
                        int32_t **l_100 = &l_71;
                        int32_t **l_101 = (void*)0;
                        VECTOR(int32_t, 2) l_102 = (VECTOR(int32_t, 2))(0x768F058CL, (-10L));
                        uint64_t l_103 = 1UL;
                        uint32_t l_104 = 0x1FE22FAAL;
                        int i;
                        l_71 = (void*)0;
                        l_101 = ((FAKE_DIVERGE(p_1049->group_1_offset, get_group_id(1), 10) , ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_73.s481186c9)))).s6677064020544367)).sfa93, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(l_74.s24222322)).s53, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(l_75.xwzyywzywxxwzwxz)).even, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(l_76.sb9)).yyxxyyxxxxyyxyyy, ((VECTOR(int16_t, 16))(l_77.s4326273711001060)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(l_78.s87)).yyyx, ((VECTOR(int16_t, 16))(l_79.xxyxxyxyxyxyyyyx)).s15c8))))).yyyxyzxwyxxzxxzx))).lo))).s36)).yyxx)).yzwzwwyzywyywxyx)).sd290)).zyxzxzywxwxxwxxx, ((VECTOR(int16_t, 16))(l_80.s5323327776750247)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(1L, 1L)), 0x3B5AL, 1L, ((VECTOR(int16_t, 2))(4L, 6L)), 0L, 5L)).odd)).zxxywwzxyxzyyyzx))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_81.zzyyzxzw)).s25)).yyyyyxyyxyyxxyxy))).s8d))).xyxyxxxyxxyyxxyx, (int16_t)((l_82 = 0x73D52B7690A484C5L) , 0L), (int16_t)0x6E34L))).s1d, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_83.s0601045711404057)).s22e3, ((VECTOR(int16_t, 2))(l_84.s34)).xyxx))).zxxywwxw, ((VECTOR(int16_t, 2))(l_85.xx)).xxxyyxyy))).s07, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_86.yx)), 1L, 5L)), l_87[5], 0x3B71L, 0x3565L, 0x5E8CL)).s21, (int16_t)(l_89 = (((l_88 = 0x2336C4584B38A77DL) , GROUP_DIVERGE(0, 1)) , 1L))))).xyyyyxyyyyxxyxyx)).scd))), ((VECTOR(int16_t, 4))(0x141CL, ((((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(l_90.s5015465534471201)).s89, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0x7413A7E429369BD4L, (l_66 = l_91), 0x465DC08455DCD8B9L, 18446744073709551610UL, 0xF025C2D45B905804L, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_92.xx)).yyxxyxxx)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(18446744073709551607UL, ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_93.s26021152)), l_94, 0x258353C78930F4DFL, 0x46C1DEFFE84F9EDAL, 0xDD027D662417AC5CL, GROUP_DIVERGE(2, 1), GROUP_DIVERGE(0, 1), 0x98C9EDF83F4F48EEL, 0x968BF4733EF3A8CDL)))).odd)).hi, (uint64_t)l_95))), ((VECTOR(uint64_t, 2))(0x772C44E1F5B4EA81L)), ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551615UL, l_96, ((VECTOR(uint64_t, 4))(0x547BDC28BEC3B116L)), 0x8D70DEC899BC1BBFL)).s8d)))), 18446744073709551615UL, 1UL, ((VECTOR(uint64_t, 4))(0x747E018F5FB703A7L)))))), ((VECTOR(uint64_t, 16))(0xA61A6B3F764A2DA5L))))).s0c60)).even, (uint64_t)FAKE_DIVERGE(p_1049->group_1_offset, get_group_id(1), 10), (uint64_t)l_97))), 1UL)).s7372743715030246)).even, (uint64_t)l_98))).s67, ((VECTOR(uint64_t, 2))(0xFE561D20EA3011ACL))))).hi , 9UL) , 0L), 0L, 0x2A34L)).even, ((VECTOR(int16_t, 2))(0x438DL))))).yxyx))).xyxyzzzy, (int16_t)0x0CA3L, (int16_t)l_99))).s1) , l_100);
                        l_103 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_102.yxxxyxxxyxyyyyxy)).s644e)).z;
                        ++l_104;
                    }
                    for (l_68 = (-22); (l_68 == 18); l_68++)
                    { /* block id: 64 */
                        uint32_t l_109 = 4294967295UL;
                        VECTOR(int32_t, 4) l_110 = (VECTOR(int32_t, 4))(0x0CC138C4L, (VECTOR(int32_t, 2))(0x0CC138C4L, 0L), 0L);
                        uint16_t l_111 = 0x4F00L;
                        int i;
                        l_111 |= ((l_109 = 0xF63E18B6L) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_110.zwzwyxxwzxxwywxz)).se6)).odd);
                    }
                    for (l_68 = 26; (l_68 < 1); --l_68)
                    { /* block id: 70 */
                        uint64_t l_114 = 0x7C3C58E251D0698FL;
                        int32_t *l_116 = (void*)0;
                        int32_t **l_115 = &l_116;
                        int32_t **l_117 = &l_116;
                        VECTOR(int32_t, 2) l_118 = (VECTOR(int32_t, 2))((-2L), 1L);
                        VECTOR(int32_t, 8) l_119 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0B7DADB2L), 0x0B7DADB2L), 0x0B7DADB2L, (-1L), 0x0B7DADB2L);
                        VECTOR(int32_t, 2) l_120 = (VECTOR(int32_t, 2))(0x2201F268L, 2L);
                        uint16_t l_121 = 7UL;
                        VECTOR(int32_t, 16) l_122 = (VECTOR(int32_t, 16))(0x634FB4D5L, (VECTOR(int32_t, 4))(0x634FB4D5L, (VECTOR(int32_t, 2))(0x634FB4D5L, 1L), 1L), 1L, 0x634FB4D5L, 1L, (VECTOR(int32_t, 2))(0x634FB4D5L, 1L), (VECTOR(int32_t, 2))(0x634FB4D5L, 1L), 0x634FB4D5L, 1L, 0x634FB4D5L, 1L);
                        int32_t l_123 = 0x01DA4DADL;
                        uint32_t l_124[2][10] = {{0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L},{0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L,0x45AC62A2L,0x5F63DAB8L,0x5F63DAB8L}};
                        int8_t l_125 = 7L;
                        int32_t l_126[3];
                        uint16_t l_127 = 65535UL;
                        int16_t l_128 = 0x4F3EL;
                        int64_t l_129 = (-5L);
                        int64_t l_130[10];
                        uint8_t l_131 = 0x6BL;
                        uint8_t l_132 = 252UL;
                        uint32_t l_133 = 0x6CD1A5B3L;
                        int32_t *l_134 = (void*)0;
                        uint32_t l_135 = 4294967292UL;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_126[i] = 0x423DE851L;
                        for (i = 0; i < 10; i++)
                            l_130[i] = (-1L);
                        l_117 = (l_114 , l_115);
                        l_133 = ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x1FE58D01L, (-9L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))((l_132 = ((*l_2) &= (((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_118.yx)).yxxx, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_119.s03)), 0x32E08F32L, (-8L))).zzwyxxyy)).s7037025037030704)).se7f9, ((VECTOR(int32_t, 16))(l_120.xyyyyxyyxxyxyyyx)).s22fd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_121, ((VECTOR(int32_t, 4))(l_122.s5f1c)), (-1L), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(1L, 0L)).xxxyyxxy, ((VECTOR(uint16_t, 8))(l_123, ((VECTOR(uint16_t, 2))(0xD4F2L, 65535UL)), ((l_125 = (l_13 = (l_15 &= l_124[0][6]))) , (l_126[1] , l_127)), l_128, 0x6E82L, 2UL, 0x3535L))))).s6, (-1L), l_129, (-7L), 0x282E326DL, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(0x2BA5DBC7L, ((VECTOR(int32_t, 2))(0x04BDE13CL)), 1L)), (int32_t)0x5140ED91L))).xzwxwzzx)).s03, ((VECTOR(int32_t, 2))(0L))))), l_130[8], 0x6394F392L, (-9L))).se7e7)).xywyzzwywwyywyzx)).s8b57)))))).w , l_131))), ((VECTOR(int32_t, 2))((-1L))), 0L)).wwxzwzyzxxyxwxwy, ((VECTOR(int32_t, 16))(0x690A14B9L))))).sfd, ((VECTOR(int32_t, 2))(0x14E36BB2L))))).xyxy)).hi))).yxxyxxyyxyxyyyyx, ((VECTOR(int32_t, 16))(0x07152543L))))).s1;
                        l_62[0][6][0] = l_134;
                        --l_135;
                    }
                }
                else
                { /* block id: 81 */
                    (*l_2) |= 0x32E5F269L;
                }
                (*l_2) = 1L;
            }
            for (l_14 = 10; (l_14 <= (-28)); --l_14)
            { /* block id: 88 */
                int32_t l_140 = 0L;
                int64_t l_141 = (-1L);
                int32_t l_142[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_142[i] = (-2L);
                l_5 = ((l_4 = l_140) , l_141);
                l_142[7] = 2L;
            }
        }
        else
        { /* block id: 93 */
            int32_t l_143 = 0x32C65940L;
            uint32_t l_148 = 0x35C9623FL;
            uint64_t l_149 = 0xC650B9E8D0F59D7EL;
            int16_t l_150 = (-2L);
            VECTOR(int64_t, 2) l_151 = (VECTOR(int64_t, 2))((-1L), 0x1E3A1A6B0373C028L);
            VECTOR(int64_t, 16) l_152 = (VECTOR(int64_t, 16))(0x6744AC8F83BE1114L, (VECTOR(int64_t, 4))(0x6744AC8F83BE1114L, (VECTOR(int64_t, 2))(0x6744AC8F83BE1114L, 0x7547228463068F17L), 0x7547228463068F17L), 0x7547228463068F17L, 0x6744AC8F83BE1114L, 0x7547228463068F17L, (VECTOR(int64_t, 2))(0x6744AC8F83BE1114L, 0x7547228463068F17L), (VECTOR(int64_t, 2))(0x6744AC8F83BE1114L, 0x7547228463068F17L), 0x6744AC8F83BE1114L, 0x7547228463068F17L, 0x6744AC8F83BE1114L, 0x7547228463068F17L);
            int32_t *l_153 = &l_143;
            int32_t *l_154[3][8][8] = {{{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143}},{{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143}},{{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143}}};
            int32_t l_155 = 0x4D3E2A85L;
            uint16_t l_156 = 0xF964L;
            int8_t l_159 = 0x2BL;
            int i, j, k;
            for (l_143 = 0; (l_143 == 4); l_143 = safe_add_func_uint16_t_u_u(l_143, 3))
            { /* block id: 96 */
                uint32_t l_146 = 0xF3208BFBL;
                int16_t l_147 = 0x3E34L;
                l_6[5] &= (l_146 , ((FAKE_DIVERGE(p_1049->group_1_offset, get_group_id(1), 10) , 0x3E7E2172L) , (GROUP_DIVERGE(2, 1) , l_147)));
            }
            l_154[2][7][4] = (l_148 , (l_153 = (l_3 = ((l_150 = l_149) , (l_2 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_151.xyxy)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x2275D252147F1C43L, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_152.sbb5d6dc47b37152b)).s1cf9)).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0L, 8L, 9L, 0L)))).lo, ((VECTOR(int64_t, 2))(0x196A79BAE44E3D58L, 0x64C4040728480904L))))), 3L)).hi)).lo, ((VECTOR(int64_t, 2))(0x38ED03E11358170AL, (-8L))), 0x399297C0A964B635L)).s1 , l_153))))));
            ++l_156;
            if (l_159)
            { /* block id: 105 */
                int32_t l_160[4][2][2] = {{{0L,9L},{0L,9L}},{{0L,9L},{0L,9L}},{{0L,9L},{0L,9L}},{{0L,9L},{0L,9L}}};
                int8_t l_166 = 0x68L;
                int16_t l_167 = 8L;
                int32_t l_168 = 0x2365CF4BL;
                int16_t l_169 = 1L;
                uint8_t l_170 = 0UL;
                int i, j, k;
                (*l_153) = 0x6AEEF4BBL;
                for (l_160[1][0][0] = 0; (l_160[1][0][0] >= 27); l_160[1][0][0]++)
                { /* block id: 109 */
                    uint64_t l_163[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int i;
                    l_163[5]++;
                }
                ++l_170;
                for (l_167 = 0; (l_167 > 3); l_167 = safe_add_func_int8_t_s_s(l_167, 9))
                { /* block id: 115 */
                    int32_t l_176 = 0x65B4BAF5L;
                    int32_t *l_175 = &l_176;
                    int32_t *l_183 = &l_176;
                    l_154[2][6][2] = l_175;
                    for (l_176 = 0; (l_176 == (-2)); l_176 = safe_sub_func_uint8_t_u_u(l_176, 1))
                    { /* block id: 119 */
                        int32_t l_181[8] = {0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL,0x7E88F4ACL};
                        int32_t *l_180 = &l_181[3];
                        int32_t **l_179 = &l_180;
                        int32_t **l_182 = &l_180;
                        int i;
                        l_182 = l_179;
                        (*l_179) = (void*)0;
                    }
                    l_154[2][7][4] = (l_3 = l_183);
                }
            }
            else
            { /* block id: 126 */
                int32_t l_184 = 6L;
                int8_t l_185 = 0x52L;
                int64_t l_186 = 0x303987118907BB7DL;
                uint64_t l_187 = 0UL;
                int32_t l_191 = 0x7744D257L;
                int32_t *l_190 = &l_191;
                int16_t l_192 = 0x2AACL;
                uint8_t l_193 = 0xEAL;
                uint64_t l_196 = 0x587E9C43DC7393B2L;
                ++l_187;
                l_154[0][0][4] = l_190;
                l_193--;
                l_196 = 0x0AD5E783L;
            }
        }
        l_198 = l_197;
        unsigned int result = 0;
        result += l_4;
        result += l_5;
        int l_6_i0;
        for (l_6_i0 = 0; l_6_i0 < 10; l_6_i0++) {
            result += l_6[l_6_i0];
        }
        result += l_7;
        result += l_10.w;
        result += l_10.z;
        result += l_10.y;
        result += l_10.x;
        result += l_11;
        result += l_12.s7;
        result += l_12.s6;
        result += l_12.s5;
        result += l_12.s4;
        result += l_12.s3;
        result += l_12.s2;
        result += l_12.s1;
        result += l_12.s0;
        result += l_13;
        result += l_197;
        result += l_198;
        atomic_add(&p_1049->g_special_values[7 * get_linear_group_id() + 2], result);
    }
    else
    { /* block id: 134 */
        (1 + 1);
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1049->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_203, 3)), (safe_sub_func_int64_t_s_s((p_1049->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))] = (l_207 = 0x711BF31F2D73772EL)), ((*l_218) |= (((((l_203 ^ (((*l_210) &= (p_1049->g_comm_values[p_1049->tid] < (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(65535UL, 65526UL)).yxyxxyxyyyxyyyxx, (uint16_t)l_203))).s2, 14)))) || ((**p_1049->g_212) = ((void*)0 != p_1049->g_212)))) | FAKE_DIVERGE(p_1049->group_1_offset, get_group_id(1), 10)) == (safe_div_func_int8_t_s_s((!0x39L), (safe_mod_func_int16_t_s_s(p_1049->g_comm_values[p_1049->tid], p_1049->g_comm_values[p_1049->tid]))))) , 9L) < 1UL)))))), 10))][(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))]));
    p_1049->g_942 &= (((VECTOR(int32_t, 4))(l_220.zwxy)).y || ((safe_sub_func_int8_t_s_s((func_223(func_227(p_1049->g_comm_values[p_1049->tid], p_1049), func_243(((safe_div_func_int64_t_s_s(func_247(((((VECTOR(int64_t, 4))(func_250((safe_mod_func_uint16_t_u_u(l_220.x, l_257)), l_220.w, ((*l_650) = ((p_1049->g_258 != (p_1049->g_330 = func_259((safe_div_func_uint64_t_u_u(p_1049->g_237.sa, (safe_lshift_func_int8_t_s_u(func_269(((*l_329) = (safe_div_func_int8_t_s_s(((+(func_276(p_1049->g_237.s0, p_1049->g_280[6], p_1049->g_237.s9, p_1049) & p_1049->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))])) < 4294967288UL), l_328[1][6][1]))), p_1049->g_330, p_1049->g_219, l_220.y, p_1049), 3)))), &l_328[1][6][1], l_329, p_1049->g_627[6], &l_210, p_1049))) , (void*)0)), &p_1049->g_580, p_1049), ((VECTOR(int64_t, 2))(0x48B88982F1C53C5EL)), 0x38CB662E99A2CFF8L)).x <= GROUP_DIVERGE(1, 1)) && (*p_1049->g_330)), p_1049->g_212, p_1049), 0x0C7EBDE47F49DD7AL)) , &p_1049->g_291), p_1049), p_1049->g_913, p_1049) < l_207), p_1049->g_901.sf)) == (-1L)));
    for (l_257 = 0; (l_257 >= 21); l_257 = safe_add_func_uint64_t_u_u(l_257, 5))
    { /* block id: 426 */
        uint16_t l_945 = 0xB9A8L;
        int8_t l_996 = 0x75L;
        int32_t l_999 = 0x5AAE2955L;
        uint32_t l_1021[1][2][3] = {{{0x1199E2CDL,0x1199E2CDL,0x1199E2CDL},{0x1199E2CDL,0x1199E2CDL,0x1199E2CDL}}};
        int i, j, k;
        if (l_945)
            break;
        (***l_650) |= 1L;
        for (p_1049->g_372 = 0; (p_1049->g_372 >= 4); p_1049->g_372 = safe_add_func_uint16_t_u_u(p_1049->g_372, 9))
        { /* block id: 431 */
            uint32_t l_959 = 0xA28E677FL;
            int32_t **l_998 = &l_210;
            uint32_t l_1000 = 5UL;
            uint16_t l_1020 = 0UL;
            int16_t *l_1034 = &p_1049->g_408;
            int16_t *l_1035 = (void*)0;
            int16_t *l_1036 = &p_1049->g_406;
            int8_t l_1045 = 0L;
            int32_t l_1048 = (-5L);
            (1 + 1);
        }
    }
    return (*l_210);
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_926 p_1049->g_499 p_1049->g_406 p_1049->g_428 p_1049->g_731 p_1049->l_comm_values p_1049->g_307 p_1049->g_311
 * writes: p_1049->g_611 p_1049->g_406 p_1049->g_307 p_1049->g_311
 */
uint64_t  func_223(int32_t * p_224, uint64_t * p_225, int32_t * p_226, struct S0 * p_1049)
{ /* block id: 407 */
    uint16_t l_922 = 0x8E42L;
    uint16_t **l_925 = &p_1049->g_611;
    VECTOR(int32_t, 8) l_929 = (VECTOR(int32_t, 8))(0x491C2EDFL, (VECTOR(int32_t, 4))(0x491C2EDFL, (VECTOR(int32_t, 2))(0x491C2EDFL, 0L), 0L), 0L, 0x491C2EDFL, 0L);
    VECTOR(int32_t, 16) l_930 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x38EA0586L), 0x38EA0586L), 0x38EA0586L, 1L, 0x38EA0586L, (VECTOR(int32_t, 2))(1L, 0x38EA0586L), (VECTOR(int32_t, 2))(1L, 0x38EA0586L), 1L, 0x38EA0586L, 1L, 0x38EA0586L);
    VECTOR(int32_t, 2) l_931 = (VECTOR(int32_t, 2))(1L, 0L);
    int16_t *l_934 = &p_1049->g_406;
    int32_t *l_935 = (void*)0;
    uint64_t l_936 = 0xA02B55EFF1BE8B68L;
    uint32_t *l_938 = (void*)0;
    uint32_t **l_937 = &l_938;
    int32_t l_939 = 0x78A5EEF8L;
    int32_t *l_940 = &p_1049->g_311;
    int i;
    if ((atomic_inc(&p_1049->l_atomic_input[6]) == 7))
    { /* block id: 409 */
        uint64_t l_915[1][6][3] = {{{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L},{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L},{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L},{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L},{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L},{0x247497906C6EAC89L,0x247497906C6EAC89L,0x247497906C6EAC89L}}};
        uint64_t l_916 = 0UL;
        uint8_t l_917 = 0xD0L;
        int16_t l_918[6];
        uint64_t l_919 = 0x913D45352C900244L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_918[i] = (-1L);
        l_916 = l_915[0][1][0];
        l_918[1] &= (l_917 , (-1L));
        ++l_919;
        unsigned int result = 0;
        int l_915_i0, l_915_i1, l_915_i2;
        for (l_915_i0 = 0; l_915_i0 < 1; l_915_i0++) {
            for (l_915_i1 = 0; l_915_i1 < 6; l_915_i1++) {
                for (l_915_i2 = 0; l_915_i2 < 3; l_915_i2++) {
                    result += l_915[l_915_i0][l_915_i1][l_915_i2];
                }
            }
        }
        result += l_916;
        result += l_917;
        int l_918_i0;
        for (l_918_i0 = 0; l_918_i0 < 6; l_918_i0++) {
            result += l_918[l_918_i0];
        }
        result += l_919;
        atomic_add(&p_1049->l_special_values[6], result);
    }
    else
    { /* block id: 413 */
        (1 + 1);
    }
    l_939 = (((l_922 , (void*)0) == ((*l_937) = func_283((safe_div_func_uint64_t_u_u(((((&p_1049->g_612 != ((*l_925) = (void*)0)) ^ ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))((-3L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1049->g_926.yy)), 5L, 8L)), l_922, 0x65F0L, (safe_rshift_func_int16_t_s_u(((l_936 = ((((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(l_929.s5541)).wxyxwywz, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1049->g_499.y, ((VECTOR(int32_t, 4))(l_930.s44ac)), 1L, 0x58259B4CL, 0x16198107L, 0x65A49CC7L, ((VECTOR(int32_t, 4))(l_931.xyyy)), 0x5313FF41L, 0x50E09DBAL, 1L)).odd)), ((safe_rshift_func_int16_t_s_u(((*l_934) &= 0x60E0L), 1)) , 1L), ((VECTOR(int32_t, 2))(6L)), 0x726B0948L, 0x34FE5174L, l_929.s0, 0x5FCF754BL, 0L)).lo)))))).s3 , p_1049->g_428) == l_922)) , p_1049->g_731[0][0]), l_922)), ((VECTOR(int16_t, 2))(0x7217L)), l_930.s3, (-1L), (-7L), 0x171EL, 0x51CBL, 1L)).sa87e, ((VECTOR(int16_t, 4))((-10L)))))).ywwzxwyx, ((VECTOR(int16_t, 8))(1L))))).s22)).yxxyyxyy)), ((VECTOR(int16_t, 8))(0x1962L))))).s1557750661103507, ((VECTOR(int16_t, 16))(4L)), ((VECTOR(int16_t, 16))(0x4A7EL))))))).sf) | FAKE_DIVERGE(p_1049->global_1_offset, get_global_id(1), 10)) < 0x99575DEEL), l_931.x)), p_1049->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))], p_1049))) != 7L);
    (*l_940) |= (-6L);
    return (*l_940);
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_212 p_1049->g_211 p_1049->g_213
 * writes: p_1049->g_213 p_1049->g_211
 */
int32_t * func_227(uint32_t  p_228, struct S0 * p_1049)
{ /* block id: 145 */
    int64_t *l_233 = (void*)0;
    int8_t *l_236 = (void*)0;
    int8_t *l_238 = (void*)0;
    int8_t *l_239 = (void*)0;
    int32_t l_240 = 0x30F14CA1L;
    VECTOR(uint16_t, 8) l_241 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
    int32_t *l_242 = &p_1049->g_211;
    int i;
    (*l_242) |= ((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((void*)0 != l_233), (safe_mul_func_int8_t_s_s((l_240 = (-1L)), 1UL)))), ((VECTOR(uint16_t, 2))(l_241.s51)).even)) , (0UL >= (((*p_1049->g_212) = (void*)0) != (void*)0)));
    return (*p_1049->g_212);
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_291
 * writes: p_1049->g_661 p_1049->g_291
 */
uint64_t * func_243(int8_t * p_244, struct S0 * p_1049)
{ /* block id: 276 */
    int32_t **l_662 = &p_1049->g_661;
    int32_t *l_663 = &p_1049->g_311;
    int32_t *l_664 = &p_1049->g_307[2][1];
    int32_t *l_665 = &p_1049->g_307[7][1];
    int32_t *l_666 = &p_1049->g_311;
    int32_t *l_667[8][5] = {{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]},{&p_1049->g_311,&p_1049->g_311,(void*)0,&p_1049->g_307[5][0],&p_1049->g_307[7][1]}};
    int8_t l_668 = 0x38L;
    int32_t l_669 = 0x054BD94DL;
    uint16_t l_670 = 0UL;
    VECTOR(uint32_t, 4) l_722 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x3649FEA0L), 0x3649FEA0L);
    int16_t *l_765[7][6][6] = {{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}},{{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0},{&p_1049->g_406,&p_1049->g_408,&p_1049->g_408,&p_1049->g_408,&p_1049->g_406,(void*)0}}};
    int64_t ***l_813 = &p_1049->g_609;
    VECTOR(uint64_t, 16) l_822 = (VECTOR(uint64_t, 16))(0x8406AAA69DB5009DL, (VECTOR(uint64_t, 4))(0x8406AAA69DB5009DL, (VECTOR(uint64_t, 2))(0x8406AAA69DB5009DL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x8406AAA69DB5009DL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(0x8406AAA69DB5009DL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(0x8406AAA69DB5009DL, 18446744073709551607UL), 0x8406AAA69DB5009DL, 18446744073709551607UL, 0x8406AAA69DB5009DL, 18446744073709551607UL);
    VECTOR(uint8_t, 16) l_824 = (VECTOR(uint8_t, 16))(0x5AL, (VECTOR(uint8_t, 4))(0x5AL, (VECTOR(uint8_t, 2))(0x5AL, 255UL), 255UL), 255UL, 0x5AL, 255UL, (VECTOR(uint8_t, 2))(0x5AL, 255UL), (VECTOR(uint8_t, 2))(0x5AL, 255UL), 0x5AL, 255UL, 0x5AL, 255UL);
    uint16_t l_883 = 0xAEC3L;
    uint64_t *l_914[10][10][2] = {{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}},{{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0},{&p_1049->g_219,(void*)0}}};
    int i, j, k;
    p_1049->g_661 = &p_1049->g_307[7][1];
    (*l_662) = (void*)0;
    l_670++;
    for (l_669 = (-27); (l_669 > (-23)); l_669 = safe_add_func_int64_t_s_s(l_669, 1))
    { /* block id: 282 */
        uint64_t **l_679[8][6] = {{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618},{&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618,&p_1049->g_618}};
        int32_t l_684[5][7][3] = {{{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)}},{{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)}},{{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)}},{{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)}},{{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)},{0x0E35D817L,(-1L),(-1L)}}};
        int32_t l_698 = 7L;
        int16_t *l_703 = &p_1049->g_406;
        VECTOR(uint32_t, 4) l_720 = (VECTOR(uint32_t, 4))(0xC6995CCFL, (VECTOR(uint32_t, 2))(0xC6995CCFL, 0x349EADD6L), 0x349EADD6L);
        int32_t *l_742 = &p_1049->g_307[1][0];
        int64_t ***l_814 = &p_1049->g_609;
        VECTOR(uint32_t, 8) l_817 = (VECTOR(uint32_t, 8))(0x3D20F41AL, (VECTOR(uint32_t, 4))(0x3D20F41AL, (VECTOR(uint32_t, 2))(0x3D20F41AL, 1UL), 1UL), 1UL, 0x3D20F41AL, 1UL);
        VECTOR(uint64_t, 8) l_819 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xC4927B8C7E8B6458L), 0xC4927B8C7E8B6458L), 0xC4927B8C7E8B6458L, 0UL, 0xC4927B8C7E8B6458L);
        VECTOR(int8_t, 4) l_825 = (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, (-2L)), (-2L));
        int32_t l_886 = 0x656EFE8FL;
        VECTOR(uint64_t, 8) l_910 = (VECTOR(uint64_t, 8))(0x5341DECF8E10D640L, (VECTOR(uint64_t, 4))(0x5341DECF8E10D640L, (VECTOR(uint64_t, 2))(0x5341DECF8E10D640L, 0xA5329AEDB8935035L), 0xA5329AEDB8935035L), 0xA5329AEDB8935035L, 0x5341DECF8E10D640L, 0xA5329AEDB8935035L);
        int i, j, k;
        for (p_1049->g_291 = 0; (p_1049->g_291 <= 15); ++p_1049->g_291)
        { /* block id: 285 */
            int16_t *l_682 = (void*)0;
            int32_t l_683[9][9] = {{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L},{0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L,0x324D0C8EL,0x324D0C8EL,0x39E6FBD4L,1L,0x39E6FBD4L}};
            int32_t l_704[2][10] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
            uint32_t *l_730 = (void*)0;
            int32_t ***l_755 = &p_1049->g_212;
            VECTOR(int32_t, 16) l_805 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L, (VECTOR(int32_t, 2))((-1L), 9L), (VECTOR(int32_t, 2))((-1L), 9L), (-1L), 9L, (-1L), 9L);
            VECTOR(uint64_t, 16) l_821 = (VECTOR(uint64_t, 16))(0xE511DD30AAE34C61L, (VECTOR(uint64_t, 4))(0xE511DD30AAE34C61L, (VECTOR(uint64_t, 2))(0xE511DD30AAE34C61L, 1UL), 1UL), 1UL, 0xE511DD30AAE34C61L, 1UL, (VECTOR(uint64_t, 2))(0xE511DD30AAE34C61L, 1UL), (VECTOR(uint64_t, 2))(0xE511DD30AAE34C61L, 1UL), 0xE511DD30AAE34C61L, 1UL, 0xE511DD30AAE34C61L, 1UL);
            VECTOR(uint8_t, 8) l_823 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 246UL), 246UL), 246UL, 246UL, 246UL);
            uint8_t *l_830 = (void*)0;
            uint8_t *l_831 = (void*)0;
            uint8_t *l_832[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(uint8_t, 8) l_902 = (VECTOR(uint8_t, 8))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0xC8L), 0xC8L), 0xC8L, 0xCFL, 0xC8L);
            uint64_t **l_911 = &p_1049->g_618;
            int i, j;
            (1 + 1);
        }
    }
    return l_914[0][7][1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_247(int8_t  p_248, int32_t ** p_249, struct S0 * p_1049)
{ /* block id: 274 */
    int32_t l_659 = 0x3E32FF46L;
    return l_659;
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_307 p_1049->g_311
 * writes: p_1049->g_307 p_1049->g_311
 */
int64_t  func_250(uint64_t  p_251, uint64_t  p_252, int32_t ** p_253, int8_t * p_254, struct S0 * p_1049)
{ /* block id: 270 */
    int32_t l_654 = 0x5104D15EL;
    int32_t *l_657 = (void*)0;
    int32_t *l_658 = &p_1049->g_311;
    l_658 = (l_657 = func_283((safe_sub_func_uint16_t_u_u((l_654 & l_654), (safe_mod_func_int8_t_s_s(0L, 0x82L)))), p_252, p_1049));
    return (*l_658);
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_631 p_1049->g_550 p_1049->g_634 p_1049->g_635 p_1049->g_498 p_1049->g_307 p_1049->g_611 p_1049->g_612 p_1049->g_408 p_1049->g_357 p_1049->g_537
 * writes: p_1049->g_372 p_1049->g_408 p_1049->g_307 p_1049->g_537
 */
int8_t * func_259(int64_t  p_260, uint64_t * p_261, int8_t * p_262, uint32_t  p_263, int32_t ** p_264, struct S0 * p_1049)
{ /* block id: 261 */
    int32_t *l_628[6] = {&p_1049->g_307[7][1],&p_1049->g_307[7][1],&p_1049->g_307[7][1],&p_1049->g_307[7][1],&p_1049->g_307[7][1],&p_1049->g_307[7][1]};
    VECTOR(int32_t, 16) l_636 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x63493E45L), 0x63493E45L), 0x63493E45L, 0L, 0x63493E45L, (VECTOR(int32_t, 2))(0L, 0x63493E45L), (VECTOR(int32_t, 2))(0L, 0x63493E45L), 0L, 0x63493E45L, 0L, 0x63493E45L);
    VECTOR(int32_t, 16) l_637 = (VECTOR(int32_t, 16))(0x515E66F2L, (VECTOR(int32_t, 4))(0x515E66F2L, (VECTOR(int32_t, 2))(0x515E66F2L, 0x61B54632L), 0x61B54632L), 0x61B54632L, 0x515E66F2L, 0x61B54632L, (VECTOR(int32_t, 2))(0x515E66F2L, 0x61B54632L), (VECTOR(int32_t, 2))(0x515E66F2L, 0x61B54632L), 0x515E66F2L, 0x61B54632L, 0x515E66F2L, 0x61B54632L);
    VECTOR(int32_t, 8) l_638 = (VECTOR(int32_t, 8))(0x4A6746D6L, (VECTOR(int32_t, 4))(0x4A6746D6L, (VECTOR(int32_t, 2))(0x4A6746D6L, 0L), 0L), 0L, 0x4A6746D6L, 0L);
    uint8_t *l_647 = &p_1049->g_372;
    VECTOR(uint8_t, 8) l_648 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    int16_t *l_649 = &p_1049->g_408;
    int i;
    (*p_264) = l_628[1];
    p_1049->g_537.x |= ((**p_264) = (((((((*p_261) == (((((*l_649) &= ((safe_lshift_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 4))(p_1049->g_631.s7370))))), ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(6UL, (safe_lshift_func_uint8_t_u_s(p_1049->g_550[3], 1)), (l_628[1] != (p_263 , (*p_264))), p_260, (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(p_1049->g_634.xxxw)).xwzyzyyzyyzwxzwx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0L, 0x73CFEA58L)).yyxxxxyxxxyyyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x46445514L, 0L)).yyxxyyxyxyyxxxyx)).s2b2a)).zwwxyyyywyxxxwyw, ((VECTOR(int32_t, 4))(p_1049->g_635.sadfc)).zxwxyzxwyyyxywww))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_636.s02)).yyxyxxxy))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_637.s6e06)).xxywzyxy)))).even, ((VECTOR(int32_t, 2))(0x37464C50L, 1L)).yyyy))))).ywyxwyxyywywxzwy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x16D2A9B4L, 0L)).xxxy)).ywxxwxwywzwzxzwx))).hi)).s40, ((VECTOR(int32_t, 2))(7L, 0L))))).xxyx)))).wxzwxwywzwxwyxww, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_638.s7741)).zwxywxyywxyxwxxy))))).s1 , (&p_260 != (((safe_add_func_int16_t_s_s(p_1049->g_550[1], (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(1UL, 1UL, 0x3A88L, 1UL)), 0xF102L, ((VECTOR(uint16_t, 4))((safe_rshift_func_uint8_t_u_u(((*l_647) = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))((p_1049->g_498.y || (**p_264)), ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 2))(5UL)), 254UL)))).s3), GROUP_DIVERGE(1, 1))), ((VECTOR(uint16_t, 2))(0x4695L)), 0UL)), 3UL, ((VECTOR(uint16_t, 2))(0x28B1L)), ((VECTOR(uint16_t, 2))(0xEC83L)), 0UL, 3UL)).odd, ((VECTOR(uint16_t, 8))(9UL)), ((VECTOR(uint16_t, 8))(0x3D8AL))))).s1, (*p_1049->g_611))), (*p_1049->g_611))))) , l_648.s2) , &p_260))), 248UL, 250UL, 0x1FL))))))).odd, ((VECTOR(uint8_t, 4))(1UL))))).x != p_263), 7)) >= p_1049->g_498.x)) , 1UL) >= (-1L)) > (**p_264))) <= p_1049->g_357) != p_263) , 0x10L) , GROUP_DIVERGE(0, 1)) , 0x37B66099L));
    return l_647;
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_339 p_1049->g_341 p_1049->g_307 p_1049->g_219 p_1049->g_311 p_1049->l_comm_values p_1049->g_237 p_1049->g_408 p_1049->g_372 p_1049->g_417 p_1049->g_419 p_1049->g_422 p_1049->g_406 p_1049->g_450 p_1049->g_357 p_1049->g_291 p_1049->g_498 p_1049->g_499 p_1049->g_516 p_1049->g_comm_values p_1049->g_537 p_1049->g_550 p_1049->g_611 p_1049->g_623 p_1049->g_626
 * writes: p_1049->g_357 p_1049->g_372 p_1049->g_307 p_1049->g_406 p_1049->g_408 p_1049->g_419 p_1049->g_311 p_1049->g_291 p_1049->g_417 p_1049->g_317 p_1049->g_609 p_1049->g_610 p_1049->g_618 p_1049->g_623
 */
int8_t  func_269(int8_t  p_270, int8_t * p_271, uint16_t  p_272, int32_t  p_273, struct S0 * p_1049)
{ /* block id: 173 */
    uint64_t l_336 = 1UL;
    VECTOR(int64_t, 4) l_337 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7F41C3D795D6EF24L), 0x7F41C3D795D6EF24L);
    VECTOR(int64_t, 8) l_338 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x26D5045420D13A84L), 0x26D5045420D13A84L), 0x26D5045420D13A84L, (-2L), 0x26D5045420D13A84L);
    VECTOR(int64_t, 8) l_340 = (VECTOR(int64_t, 8))(0x4EE61FD518D7FAB5L, (VECTOR(int64_t, 4))(0x4EE61FD518D7FAB5L, (VECTOR(int64_t, 2))(0x4EE61FD518D7FAB5L, 0x2E33E00F83D03F56L), 0x2E33E00F83D03F56L), 0x2E33E00F83D03F56L, 0x4EE61FD518D7FAB5L, 0x2E33E00F83D03F56L);
    VECTOR(int8_t, 16) l_344 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    int8_t *l_345[3];
    int32_t l_346 = 0x7BB3DB7BL;
    int32_t *l_351 = &p_1049->g_307[7][0];
    uint8_t *l_356 = &p_1049->g_357;
    uint8_t *l_371 = &p_1049->g_372;
    int32_t *l_373 = &p_1049->g_307[6][0];
    int32_t l_375 = 0x1FBFCC43L;
    int32_t l_376 = 0x76A57F8FL;
    int32_t l_377 = 1L;
    int32_t l_378 = 0x39D5B40FL;
    VECTOR(int32_t, 2) l_384 = (VECTOR(int32_t, 2))((-1L), 0L);
    int16_t l_416 = 0x056AL;
    int32_t l_447[10][10] = {{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L},{0L,0x5A3DA945L,0x2C71C825L,(-1L),0x5A3DA945L,(-1L),0x2C71C825L,0x5A3DA945L,0L,0L}};
    int64_t **l_475 = &p_1049->g_317;
    int32_t *l_505 = (void*)0;
    uint16_t l_534 = 9UL;
    VECTOR(uint32_t, 2) l_549 = (VECTOR(uint32_t, 2))(0x9F4BE2F7L, 0xD52377BAL);
    VECTOR(uint64_t, 4) l_587 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), 18446744073709551612UL);
    VECTOR(uint16_t, 8) l_605 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65531UL), 65531UL), 65531UL, 65535UL, 65531UL);
    uint32_t l_620 = 0x6433A360L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_345[i] = &p_1049->g_291;
    atomic_or(&p_1049->g_atomic_reduction[get_linear_group_id()], ((safe_unary_minus_func_uint8_t_u((((3L != p_273) < ((+0x2D2DF6AB66CA220BL) == ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((-1L), (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((p_270 , l_336), p_270)), ((void*)0 != &p_1049->g_291))), 0L, ((VECTOR(int64_t, 2))(l_337.zz)), 1L, 0x07A445A750B496DEL, 1L)).lo)).xwxxxzzzwyzzxxzw, ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(l_338.s33)).xyxyxyyy, ((VECTOR(int64_t, 2))((-5L), 0x2F1AD423761DE976L)).xyyyxyxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(p_1049->g_339.xzwwxyyzwxzxxxxw)).sf3))), 0x40DA9D7FE131B2E0L)))).ywywyxxy))).s2717271014626156, ((VECTOR(int64_t, 8))(l_340.s15212366)).s3107717154675644))).s8b)), 0x344C7251137B19FCL, ((VECTOR(int64_t, 2))(p_1049->g_341.xz)), (safe_add_func_int8_t_s_s((l_346 = ((VECTOR(int8_t, 8))(0x6EL, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(l_344.s4759)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_338.s0, 0x49L, 9L, (-6L))).xxywxyxz)).s30, ((VECTOR(int8_t, 2))(0x39L)), ((VECTOR(int8_t, 2))(0x3BL))))), ((VECTOR(int8_t, 2))(0x1EL))))), 0x04L, 0x11L))))), (-1L), (-6L), 0x24L)).s0), l_337.z)), 0x0E8E4600EC429C54L, 0x13F3CAA9559901C6L)).s5)) | l_344.se))) <= l_344.sf));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1049->v_collective += p_1049->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if ((safe_lshift_func_int16_t_s_u((((VECTOR(int32_t, 4))(0x58D51A2AL, ((VECTOR(int32_t, 2))(0x3F276200L, 0x0DF9B1FEL)), (-2L))).w & FAKE_DIVERGE(p_1049->global_1_offset, get_global_id(1), 10)), (+(safe_lshift_func_int8_t_s_u(((l_351 == ((safe_add_func_uint8_t_u_u(((*l_356) = ((safe_div_func_uint16_t_u_u((*l_351), p_273)) < (*l_351))), ((*l_371) = (safe_mul_func_uint8_t_u_u(0x2BL, ((safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s((0xF95F059BL && (safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((GROUP_DIVERGE(2, 1) , (*l_351)))), p_270)), 0x1BE886D3929B7091L)), p_273))), p_270)), (*l_351))) >= p_270)))))) , l_373)) <= 1L), p_1049->g_341.x))))))
    { /* block id: 178 */
        int32_t *l_374[7] = {&p_1049->g_311,&p_1049->g_311,&p_1049->g_311,&p_1049->g_311,&p_1049->g_311,&p_1049->g_311,&p_1049->g_311};
        uint8_t l_379 = 0x5EL;
        uint64_t *l_389[4][4] = {{&p_1049->g_219,(void*)0,&p_1049->g_219,&p_1049->g_219},{&p_1049->g_219,(void*)0,&p_1049->g_219,&p_1049->g_219},{&p_1049->g_219,(void*)0,&p_1049->g_219,&p_1049->g_219},{&p_1049->g_219,(void*)0,&p_1049->g_219,&p_1049->g_219}};
        int64_t *l_390 = (void*)0;
        int64_t *l_391 = (void*)0;
        int64_t *l_392 = (void*)0;
        int64_t *l_393 = (void*)0;
        int64_t *l_394[2];
        VECTOR(uint16_t, 8) l_459 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0x5ADBL), 0x5ADBL), 0x5ADBL, 65532UL, 0x5ADBL);
        uint32_t l_474 = 1UL;
        VECTOR(int32_t, 16) l_500 = (VECTOR(int32_t, 16))(0x3F278325L, (VECTOR(int32_t, 4))(0x3F278325L, (VECTOR(int32_t, 2))(0x3F278325L, 0x354602BBL), 0x354602BBL), 0x354602BBL, 0x3F278325L, 0x354602BBL, (VECTOR(int32_t, 2))(0x3F278325L, 0x354602BBL), (VECTOR(int32_t, 2))(0x3F278325L, 0x354602BBL), 0x3F278325L, 0x354602BBL, 0x3F278325L, 0x354602BBL);
        uint32_t *l_515 = &p_1049->g_516;
        int i, j;
        for (i = 0; i < 2; i++)
            l_394[i] = (void*)0;
        ++l_379;
        if ((((((p_270 | (l_384.y = ((+(safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_384.yxyxxyxy)).s0227365742740521)).s3 > p_1049->g_341.z), 0L))) && ((*l_351) = (safe_rshift_func_uint16_t_u_s((18446744073709551615UL >= (safe_rshift_func_int16_t_s_s(p_1049->g_219, p_270))), p_272)))))) == p_1049->g_311) ^ (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((p_1049->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))] | p_273), p_272)) | 0xDC0AL), 2)) && p_272) & 3UL)) < 0x029C1A4BL) ^ 0UL))
        { /* block id: 182 */
            int16_t *l_405 = &p_1049->g_406;
            int16_t *l_407 = &p_1049->g_408;
            VECTOR(int64_t, 16) l_415 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1049->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u((p_1049->g_237.sb != ((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((&p_1049->g_219 == l_390), (((*l_405) = 0x5066L) == ((*l_407) &= (-1L))))) == (safe_mul_func_int16_t_s_s(0x2347L, (safe_mod_func_int32_t_s_s(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(6L, 0x4F028AAC1CA34C7EL, 0x3A819C30D7C4660CL, 1L, (-7L), ((safe_add_func_uint32_t_u_u(p_270, l_415.sc)) , p_273), 1L, 1L)).even, ((VECTOR(int64_t, 4))((-1L)))))).even)), 0L, l_416, ((VECTOR(int64_t, 2))(0x3F20EE1C72FAB50AL)), 0x48AD3A0B12DCA3ABL, (-1L))).lo)).yxwxwyww)).s72)))), (-5L), 0x31A32B1D57ED78B7L)).w , 1L) & p_1049->g_372), l_415.s3))))), p_272)) != (*l_351))), 10))][(safe_mod_func_uint32_t_u_u(p_1049->tid, 15))]));
        }
        else
        { /* block id: 188 */
            uint32_t *l_418 = &p_1049->g_419;
            int16_t *l_440[10] = {&p_1049->g_406,&l_416,&p_1049->g_406,&p_1049->g_406,&l_416,&p_1049->g_406,&p_1049->g_406,&l_416,&p_1049->g_406,&p_1049->g_406};
            int32_t l_443 = 0x72912498L;
            int32_t l_446 = 0x168D5A50L;
            uint32_t *l_462 = (void*)0;
            uint32_t *l_463 = (void*)0;
            uint32_t *l_464 = (void*)0;
            uint32_t *l_465 = (void*)0;
            uint32_t *l_466 = (void*)0;
            uint32_t *l_467 = (void*)0;
            uint32_t *l_468 = (void*)0;
            uint32_t *l_469 = (void*)0;
            uint32_t *l_470 = (void*)0;
            uint32_t *l_471 = (void*)0;
            uint32_t *l_472 = (void*)0;
            uint32_t *l_473[9];
            int32_t l_476 = 8L;
            int32_t l_477 = 0L;
            int32_t l_478 = 0x325272A5L;
            int32_t l_479 = 6L;
            int32_t l_482 = 8L;
            int32_t l_484 = 5L;
            int32_t l_485 = 0x4CD0D660L;
            int32_t l_486 = (-1L);
            int32_t l_487 = 0x1186A3FEL;
            VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))(0x411E7942L, (VECTOR(int32_t, 4))(0x411E7942L, (VECTOR(int32_t, 2))(0x411E7942L, (-3L)), (-3L)), (-3L), 0x411E7942L, (-3L), (VECTOR(int32_t, 2))(0x411E7942L, (-3L)), (VECTOR(int32_t, 2))(0x411E7942L, (-3L)), 0x411E7942L, (-3L), 0x411E7942L, (-3L));
            uint64_t l_491 = 0xDDCB387D4281A252L;
            int16_t l_506 = 0x62D7L;
            int8_t l_530[2][9];
            int i, j;
            for (i = 0; i < 9; i++)
                l_473[i] = (void*)0;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 9; j++)
                    l_530[i][j] = (-1L);
            }
            p_1049->g_311 ^= ((VECTOR(int32_t, 4))(0L, (((((!((*l_373) , ((VECTOR(uint32_t, 16))(p_1049->g_417.s0103760731126615)).sc)) >= ((((((++(*l_418)) , p_1049->g_422[6][1][0]) != (void*)0) && (l_440[0] != ((safe_sub_func_int64_t_s_s(((((l_351 = l_418) != (void*)0) , (l_443 >= ((safe_lshift_func_uint8_t_u_s((3UL != 0x18L), l_446)) <= l_443))) >= FAKE_DIVERGE(p_1049->global_0_offset, get_global_id(0), 10)), p_272)) , (void*)0))) < (*l_373)) , p_270)) >= l_447[7][6]) || p_1049->g_408) , p_1049->g_406), 0L, 0x07C37386L)).x;
            l_474 = (((safe_lshift_func_uint16_t_u_u(((p_270 < ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1049->g_450.sa10d)).ywwzwxxywzyzywxz)))).sb) != ((*l_373) = ((((safe_rshift_func_uint8_t_u_u(((p_272 <= l_443) || (safe_add_func_int8_t_s_s(p_1049->g_357, (safe_div_func_int64_t_s_s(((+l_446) <= (safe_sub_func_int16_t_s_s(p_272, ((VECTOR(uint16_t, 16))(l_459.s4343112732755642)).sb))), (safe_mod_func_uint32_t_u_u((l_443 |= (((p_1049->g_339.y , ((p_1049->g_419 , 7L) & 1UL)) ^ p_270) , p_1049->g_339.x)), 4294967288UL))))))), l_446)) != p_1049->g_406) || p_1049->g_419) , l_446))), 15)) , 0x8CL) <= p_1049->g_406);
            if (p_273)
            { /* block id: 195 */
                int16_t l_480 = (-7L);
                int32_t l_481 = (-10L);
                int32_t l_483[7];
                int8_t l_489 = 2L;
                int32_t l_490 = 0x3CD8DC7AL;
                uint8_t *l_522 = &p_1049->g_372;
                int32_t *l_527 = &l_377;
                int i;
                for (i = 0; i < 7; i++)
                    l_483[i] = (-1L);
                (*l_351) = ((void*)0 == l_475);
                (*l_373) |= p_1049->g_291;
                ++l_491;
                if (((VECTOR(int32_t, 8))((-1L), 1L, ((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_272, (p_1049->g_372 | l_488.sd))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1049->g_498.xyyyxxyx)))).s4, (-1L), ((p_271 == p_271) && (((p_270 = ((VECTOR(int8_t, 8))(p_1049->g_499.xxyxzywx)).s2) && ((((VECTOR(int32_t, 4))(l_500.sfd7a)).w > (safe_div_func_int32_t_s_s((((p_1049->g_406 || ((safe_mul_func_int8_t_s_s(((p_272 != (l_505 == ((((!p_1049->g_419) | 0L) | p_272) , (void*)0))) && 4UL), p_272)) || l_489)) && l_506) ^ (*l_351)), l_483[3]))) > 0x0EFD24CAL)) , (*l_351))), (-5L), (-4L), ((VECTOR(int8_t, 2))(0x36L)), (-1L))).s74)).xxyy)).wwwzyyww, ((VECTOR(int8_t, 8))(0x6DL))))))), ((VECTOR(int8_t, 8))(0L))))).s64)), 1L)), 0x5AL, ((VECTOR(int8_t, 2))((-10L))), 0x4DL)).s6)) , p_272), 1L, ((VECTOR(int32_t, 4))(1L)))).s1)
                { /* block id: 200 */
                    uint32_t *l_517 = &p_1049->g_516;
                    int32_t l_523 = (-2L);
                    int32_t *l_524 = &l_477;
                    for (p_1049->g_291 = 12; (p_1049->g_291 <= (-17)); p_1049->g_291--)
                    { /* block id: 203 */
                        l_443 ^= ((((*l_351) = FAKE_DIVERGE(p_1049->global_0_offset, get_global_id(0), 10)) >= (safe_div_func_uint64_t_u_u(((+(FAKE_DIVERGE(p_1049->global_0_offset, get_global_id(0), 10) == (safe_mod_func_uint16_t_u_u(p_272, (0x228BL | (((((l_522 = ((safe_div_func_uint64_t_u_u((l_515 != l_517), (safe_rshift_func_uint16_t_u_s((p_1049->g_498.x < (((p_273 ^ ((void*)0 == &p_1049->g_291)) & (l_481 = 0L)) > p_1049->g_516)), p_1049->g_comm_values[p_1049->tid])))) , (void*)0)) != (void*)0) , l_391) == (void*)0) == l_523)))))) < p_270), p_272))) , (-7L));
                        l_527 = (((&l_481 == l_524) != (safe_mod_func_uint64_t_u_u(((void*)0 == &p_1049->g_219), GROUP_DIVERGE(1, 1)))) , &l_483[3]);
                        if ((*l_527))
                            break;
                    }
                }
                else
                { /* block id: 211 */
                    int64_t l_528[3];
                    int32_t l_529 = 0x157D6292L;
                    int32_t l_531 = 0L;
                    int32_t l_532 = 0x4251F79EL;
                    VECTOR(int32_t, 2) l_533 = (VECTOR(int32_t, 2))((-8L), (-1L));
                    int i;
                    for (i = 0; i < 3; i++)
                        l_528[i] = 0x4023ED0E2C84C178L;
                    l_534--;
                    return p_1049->g_537.x;
                }
            }
            else
            { /* block id: 215 */
                uint64_t l_545 = 1UL;
                for (p_1049->g_357 = 0; (p_1049->g_357 == 19); p_1049->g_357 = safe_add_func_uint16_t_u_u(p_1049->g_357, 3))
                { /* block id: 218 */
                    uint32_t l_540 = 4294967287UL;
                    uint16_t *l_541 = (void*)0;
                    uint16_t *l_542 = &l_534;
                    VECTOR(int64_t, 16) l_548 = (VECTOR(int64_t, 16))(0x7714190E1CD1B75AL, (VECTOR(int64_t, 4))(0x7714190E1CD1B75AL, (VECTOR(int64_t, 2))(0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L), 0x0C2D85ADDF612273L), 0x0C2D85ADDF612273L, 0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L, (VECTOR(int64_t, 2))(0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L), (VECTOR(int64_t, 2))(0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L), 0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L, 0x7714190E1CD1B75AL, 0x0C2D85ADDF612273L);
                    int i;
                    (*l_373) = (((l_540 || ((p_273 ^ (((*l_542)++) | (l_545 , (safe_lshift_func_uint16_t_u_u(((p_1049->g_499.x >= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_548.sf7ea474b)).s71)), 0x3B81508FB88045D4L, 0L)).xyyzxyzw)), 8L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, (-1L), 1L, 0x7C6E4623L)).odd)), 0x689FB88CL, 0L)), ((VECTOR(uint32_t, 2))(l_549.xx)).xyyy))).odd)), 1L, ((((void*)0 != l_389[3][2]) & (p_1049->g_550[2] & (safe_rshift_func_int16_t_s_u(((((safe_div_func_uint8_t_u_u(p_1049->g_219, (safe_div_func_int8_t_s_s((p_270 & l_482), l_545)))) > p_1049->g_516) > p_273) < p_1049->g_339.z), FAKE_DIVERGE(p_1049->local_1_offset, get_local_id(1), 10))))) || p_1049->g_406), ((VECTOR(int64_t, 2))(0x192F04EA2724D4EEL)), 0L)))).sb9)), ((VECTOR(int64_t, 4))(1L)), 0x5CB335A1F8AED01CL, 0x01871DF659FE69B3L)).s3) > l_487), p_273))))) , l_545)) != GROUP_DIVERGE(0, 1)) <= 0x15L);
                }
            }
        }
        (*l_351) = 0x153055A6L;
    }
    else
    { /* block id: 225 */
        int64_t *l_574 = (void*)0;
        int32_t l_589 = 6L;
        uint32_t l_590 = 0x7D32AA11L;
        int8_t l_591 = 0L;
        uint64_t *l_615[2][1];
        uint64_t **l_614 = &l_615[1][0];
        uint64_t *l_617 = &l_336;
        uint64_t **l_616[3];
        int32_t *l_619[2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_615[i][j] = &l_336;
        }
        for (i = 0; i < 3; i++)
            l_616[i] = &l_617;
        for (i = 0; i < 2; i++)
            l_619[i] = (void*)0;
        if (p_270)
        { /* block id: 226 */
            VECTOR(uint32_t, 8) l_559 = (VECTOR(uint32_t, 8))(0x4FFA110FL, (VECTOR(uint32_t, 4))(0x4FFA110FL, (VECTOR(uint32_t, 2))(0x4FFA110FL, 0x1DBFD68DL), 0x1DBFD68DL), 0x1DBFD68DL, 0x4FFA110FL, 0x1DBFD68DL);
            VECTOR(uint32_t, 4) l_561 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x652F2E84L), 0x652F2E84L);
            int64_t l_564[3];
            uint8_t l_579 = 0x82L;
            int64_t *l_606[6] = {&l_564[2],(void*)0,&l_564[2],&l_564[2],(void*)0,&l_564[2]};
            int i;
            for (i = 0; i < 3; i++)
                l_564[i] = 1L;
            (*l_351) &= p_1049->g_408;
            for (l_377 = 0; (l_377 >= 29); ++l_377)
            { /* block id: 230 */
                int16_t l_573 = 0x6D1AL;
                uint16_t *l_575 = &l_534;
                uint32_t *l_578[3];
                int32_t **l_588 = &l_505;
                uint32_t *l_592 = (void*)0;
                uint32_t *l_593 = (void*)0;
                uint32_t *l_594 = (void*)0;
                uint32_t *l_595 = (void*)0;
                uint32_t *l_596 = (void*)0;
                uint32_t *l_597 = (void*)0;
                uint32_t *l_598 = (void*)0;
                uint32_t *l_599 = (void*)0;
                uint32_t *l_600 = (void*)0;
                uint32_t *l_601[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_602 = &l_378;
                int64_t **l_608 = (void*)0;
                int64_t ***l_607[6][4] = {{&l_608,&l_475,&l_608,&l_608},{&l_608,&l_475,&l_608,&l_608},{&l_608,&l_475,&l_608,&l_608},{&l_608,&l_475,&l_608,&l_608},{&l_608,&l_475,&l_608,&l_608},{&l_608,&l_475,&l_608,&l_608}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_578[i] = (void*)0;
                (*l_602) = ((((((p_1049->g_417.s4 &= ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(l_559.s6663)), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(p_1049->g_560.wz)).xxxyyxxy, ((VECTOR(uint32_t, 8))(l_561.yxzywywz))))).odd))).yzxwywyzxwwxxyxz, (uint32_t)p_1049->g_291, (uint32_t)(safe_sub_func_uint64_t_u_u(l_564[2], (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 0x746ABC4FL)).yxxxxyyx)).s0 & (l_589 = ((safe_mod_func_int16_t_s_s((~(safe_div_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s((!((l_573 , (*l_475)) != (l_574 = &l_564[2]))), 1)) && ((*l_575)--)) && (((p_1049->g_580 = (l_579 |= (GROUP_DIVERGE(2, 1) < 0xC67F501E10A44E6BL))) , (safe_sub_func_int8_t_s_s(((l_590 ^= ((((*l_351) &= (0x80E724027DE5AB00L & p_273)) & ((((((VECTOR(uint64_t, 8))(l_587.xwwwxzzw)).s0 ^ (((*l_588) = l_578[1]) != &l_377)) != 0x59L) != l_589) == l_564[2])) <= p_1049->g_550[2])) , l_561.w), l_591))) , 0x21L)) , p_272), 0x3F16D0B3L)) > p_272) >= l_589) ^ l_589), p_270))), p_1049->g_560.y)) && p_273)))))))).sd) < l_564[2]) , &p_1049->g_580) != &p_1049->g_291) , 0x3BL) , 0x51081272L);
                (*l_351) &= (((p_1049->g_339.w != 18446744073709551614UL) , FAKE_DIVERGE(p_1049->group_2_offset, get_group_id(2), 10)) && ((((safe_mod_func_uint16_t_u_u(((*l_575) ^= ((((*l_356) = (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_605.s2526)).odd)).odd , 0xD1L)) | (((l_590 && p_272) > (((*l_475) = l_606[2]) != &l_564[0])) , ((*l_371) = p_1049->g_417.s6))) < ((p_1049->g_609 = &p_1049->g_280[5]) != (void*)0))), (-1L))) ^ l_589) | 1UL) | p_270));
                p_1049->g_610 = (void*)0;
            }
        }
        else
        { /* block id: 249 */
            int32_t l_613[2];
            int i;
            for (i = 0; i < 2; i++)
                l_613[i] = 0x33EFAA54L;
            l_613[0] = (((&l_378 == &p_1049->g_311) , p_1049->g_611) == &p_272);
            return p_272;
        }
        atomic_add(&p_1049->g_atomic_reduction[get_linear_group_id()], (((*l_614) = &l_336) == (p_1049->g_618 = &l_336)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1049->v_collective += p_1049->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        --l_620;
        ++p_1049->g_623.s6;
    }
    (*l_351) = p_273;
    return p_1049->g_626;
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_280 p_1049->g_comm_values p_1049->g_307 p_1049->g_311
 * writes: p_1049->g_291 p_1049->g_307 p_1049->g_311 p_1049->g_280 p_1049->g_317
 */
uint64_t  func_276(uint64_t  p_277, int64_t * p_278, uint32_t  p_279, struct S0 * p_1049)
{ /* block id: 150 */
    int8_t *l_289 = (void*)0;
    int32_t l_292 = 0x5E6ECEB3L;
    int32_t *l_318 = &p_1049->g_311;
    int32_t *l_319[3];
    int64_t l_320 = 0x77ED798B91969292L;
    int32_t l_321[9][9] = {{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL},{6L,0x01919B3DL,0L,0x1D65AB08L,(-1L),(-3L),1L,0x6F0A4284L,0x01919B3DL}};
    uint8_t l_322 = 6UL;
    uint32_t l_325 = 4294967289UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_319[i] = (void*)0;
    for (p_279 = 23; (p_279 > 46); p_279 = safe_add_func_int8_t_s_s(p_279, 7))
    { /* block id: 153 */
        int8_t *l_290 = &p_1049->g_291;
        int64_t *l_301 = (void*)0;
        int64_t *l_302 = (void*)0;
        int64_t *l_303[2][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_304 = (-7L);
        int32_t *l_313 = &p_1049->g_311;
        int32_t **l_312 = &l_313;
        int64_t **l_314 = &p_1049->g_280[5];
        int64_t **l_315 = &l_303[1][1][6];
        int64_t **l_316[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_316[i] = &l_302;
        (*l_312) = func_283((safe_sub_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(((*l_290) = (l_289 == (void*)0)))) | l_292), (p_1049->g_280[6] != ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x7BL, p_279)), ((l_304 &= (0x3ED76A3AL > ((safe_lshift_func_int8_t_s_u(p_279, 6)) > ((l_292 ^ p_279) , p_277)))) != p_279))) , p_1049->g_280[3])))), p_1049->g_comm_values[p_1049->tid], p_1049);
        (*l_313) = (((*l_315) = ((*l_314) = l_303[1][4][1])) != (p_1049->g_317 = p_278));
        if (p_277)
            break;
    }
    ++l_322;
    ++l_325;
    return p_1049->g_comm_values[p_1049->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1049->g_307 p_1049->g_311
 * writes: p_1049->g_307 p_1049->g_311
 */
int32_t * func_283(int32_t  p_284, uint32_t  p_285, struct S0 * p_1049)
{ /* block id: 156 */
    int64_t l_305 = 0x557DC6D35928AD5AL;
    int32_t *l_306 = &p_1049->g_307[7][1];
    int32_t *l_308 = (void*)0;
    int32_t **l_309 = &l_306;
    int32_t *l_310 = &p_1049->g_311;
    (*l_306) = l_305;
    (*l_309) = (l_308 = l_306);
    (*l_310) &= (*l_308);
    return &p_1049->g_311;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S0 c_1050;
    struct S0* p_1049 = &c_1050;
    struct S0 c_1051 = {
        0x5377B2BAL, // p_1049->g_211
        &p_1049->g_211, // p_1049->g_213
        &p_1049->g_213, // p_1049->g_212
        0x249F8A7C91920B7CL, // p_1049->g_219
        (VECTOR(int8_t, 16))(0x76L, (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x56L), 0x56L), 0x56L, 0x76L, 0x56L, (VECTOR(int8_t, 2))(0x76L, 0x56L), (VECTOR(int8_t, 2))(0x76L, 0x56L), 0x76L, 0x56L, 0x76L, 0x56L), // p_1049->g_237
        (void*)0, // p_1049->g_258
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1049->g_280
        0L, // p_1049->g_291
        {{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L},{0x0A6A471CL,0x18622F22L}}, // p_1049->g_307
        9L, // p_1049->g_311
        (void*)0, // p_1049->g_317
        (void*)0, // p_1049->g_330
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L)), // p_1049->g_339
        (VECTOR(int64_t, 4))(0x5B00E19483CD6347L, (VECTOR(int64_t, 2))(0x5B00E19483CD6347L, (-2L)), (-2L)), // p_1049->g_341
        8UL, // p_1049->g_357
        0x79L, // p_1049->g_372
        0x4367L, // p_1049->g_406
        0x40A6L, // p_1049->g_408
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL), // p_1049->g_417
        1UL, // p_1049->g_419
        0x29L, // p_1049->g_423
        0x7EL, // p_1049->g_424
        0x57L, // p_1049->g_425
        0x25L, // p_1049->g_426
        (-10L), // p_1049->g_427
        0x1AL, // p_1049->g_428
        0x36L, // p_1049->g_429
        4L, // p_1049->g_430
        (-1L), // p_1049->g_431
        {0x54L,0x57L,0x54L,0x54L,0x57L,0x54L}, // p_1049->g_432
        0x2FL, // p_1049->g_433
        0x49L, // p_1049->g_434
        0x3BL, // p_1049->g_435
        {0x1CL,0x1CL,0x1CL,0x1CL,0x1CL,0x1CL}, // p_1049->g_436
        0x32L, // p_1049->g_437
        (-1L), // p_1049->g_438
        (VECTOR(int8_t, 2))(0x28L, (-1L)), // p_1049->g_439
        {{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}},{{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430},{&p_1049->g_426,&p_1049->g_430}}}, // p_1049->g_422
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4996L), 0x4996L), 0x4996L, 0L, 0x4996L, (VECTOR(int16_t, 2))(0L, 0x4996L), (VECTOR(int16_t, 2))(0L, 0x4996L), 0L, 0x4996L, 0L, 0x4996L), // p_1049->g_450
        (VECTOR(int8_t, 2))((-8L), 0x7FL), // p_1049->g_498
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, (-1L)), (-1L)), // p_1049->g_499
        1UL, // p_1049->g_516
        (VECTOR(int32_t, 2))(0x20C65605L, 0x50C40E50L), // p_1049->g_537
        {1UL,1UL,1UL,1UL}, // p_1049->g_550
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x22C780D6L), 0x22C780D6L), // p_1049->g_560
        9L, // p_1049->g_580
        &p_1049->g_280[6], // p_1049->g_609
        (void*)0, // p_1049->g_610
        9UL, // p_1049->g_612
        &p_1049->g_612, // p_1049->g_611
        &p_1049->g_219, // p_1049->g_618
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xD5B0BE0BL), 0xD5B0BE0BL), 0xD5B0BE0BL, 1UL, 0xD5B0BE0BL, (VECTOR(uint32_t, 2))(1UL, 0xD5B0BE0BL), (VECTOR(uint32_t, 2))(1UL, 0xD5B0BE0BL), 1UL, 0xD5B0BE0BL, 1UL, 0xD5B0BE0BL), // p_1049->g_623
        0x2460L, // p_1049->g_626
        {2L,2L,2L,2L,2L,2L,2L}, // p_1049->g_627
        (VECTOR(int8_t, 8))(0x3DL, (VECTOR(int8_t, 4))(0x3DL, (VECTOR(int8_t, 2))(0x3DL, 0x09L), 0x09L), 0x09L, 0x3DL, 0x09L), // p_1049->g_631
        (VECTOR(int32_t, 4))(0x6B1311C3L, (VECTOR(int32_t, 2))(0x6B1311C3L, 7L), 7L), // p_1049->g_634
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x20D9DBE2L), 0x20D9DBE2L), 0x20D9DBE2L, 0L, 0x20D9DBE2L, (VECTOR(int32_t, 2))(0L, 0x20D9DBE2L), (VECTOR(int32_t, 2))(0L, 0x20D9DBE2L), 0L, 0x20D9DBE2L, 0L, 0x20D9DBE2L), // p_1049->g_635
        (void*)0, // p_1049->g_660
        (void*)0, // p_1049->g_661
        (VECTOR(int32_t, 16))(0x5244E79EL, (VECTOR(int32_t, 4))(0x5244E79EL, (VECTOR(int32_t, 2))(0x5244E79EL, 2L), 2L), 2L, 0x5244E79EL, 2L, (VECTOR(int32_t, 2))(0x5244E79EL, 2L), (VECTOR(int32_t, 2))(0x5244E79EL, 2L), 0x5244E79EL, 2L, 0x5244E79EL, 2L), // p_1049->g_695
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_1049->g_716
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x63EDF7BCL), 0x63EDF7BCL), 0x63EDF7BCL, 0UL, 0x63EDF7BCL), // p_1049->g_717
        (VECTOR(uint32_t, 4))(0x565973ADL, (VECTOR(uint32_t, 2))(0x565973ADL, 5UL), 5UL), // p_1049->g_721
        (VECTOR(uint32_t, 16))(0x9933584CL, (VECTOR(uint32_t, 4))(0x9933584CL, (VECTOR(uint32_t, 2))(0x9933584CL, 0x721F1EB8L), 0x721F1EB8L), 0x721F1EB8L, 0x9933584CL, 0x721F1EB8L, (VECTOR(uint32_t, 2))(0x9933584CL, 0x721F1EB8L), (VECTOR(uint32_t, 2))(0x9933584CL, 0x721F1EB8L), 0x9933584CL, 0x721F1EB8L, 0x9933584CL, 0x721F1EB8L), // p_1049->g_723
        (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xFF60CBDEL), 0xFF60CBDEL), 0xFF60CBDEL, 4294967291UL, 0xFF60CBDEL), // p_1049->g_724
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), // p_1049->g_726
        {{255UL,255UL,255UL,255UL,255UL,255UL,255UL}}, // p_1049->g_731
        (VECTOR(uint32_t, 8))(0x12C6E68CL, (VECTOR(uint32_t, 4))(0x12C6E68CL, (VECTOR(uint32_t, 2))(0x12C6E68CL, 4294967295UL), 4294967295UL), 4294967295UL, 0x12C6E68CL, 4294967295UL), // p_1049->g_818
        (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x9D71FF59596FF243L), 0x9D71FF59596FF243L), // p_1049->g_820
        (VECTOR(uint16_t, 16))(0x36CBL, (VECTOR(uint16_t, 4))(0x36CBL, (VECTOR(uint16_t, 2))(0x36CBL, 65535UL), 65535UL), 65535UL, 0x36CBL, 65535UL, (VECTOR(uint16_t, 2))(0x36CBL, 65535UL), (VECTOR(uint16_t, 2))(0x36CBL, 65535UL), 0x36CBL, 65535UL, 0x36CBL, 65535UL), // p_1049->g_872
        (VECTOR(int64_t, 4))(0x62E7DCD73D92431CL, (VECTOR(int64_t, 2))(0x62E7DCD73D92431CL, 0L), 0L), // p_1049->g_898
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int64_t, 2))((-1L), 1L), (VECTOR(int64_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1049->g_899
        (VECTOR(int64_t, 2))(2L, 0L), // p_1049->g_900
        (VECTOR(int64_t, 16))(0x729B98873B5C81A0L, (VECTOR(int64_t, 4))(0x729B98873B5C81A0L, (VECTOR(int64_t, 2))(0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL), 0x1D420189F2FDBBFEL), 0x1D420189F2FDBBFEL, 0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL, (VECTOR(int64_t, 2))(0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL), (VECTOR(int64_t, 2))(0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL), 0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL, 0x729B98873B5C81A0L, 0x1D420189F2FDBBFEL), // p_1049->g_901
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1049->g_908
        (void*)0, // p_1049->g_913
        (VECTOR(int16_t, 2))(8L, 2L), // p_1049->g_926
        2L, // p_1049->g_942
        (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x7740A6E306433BE3L), 0x7740A6E306433BE3L), // p_1049->g_958
        (VECTOR(uint16_t, 8))(0x0174L, (VECTOR(uint16_t, 4))(0x0174L, (VECTOR(uint16_t, 2))(0x0174L, 65535UL), 65535UL), 65535UL, 0x0174L, 65535UL), // p_1049->g_1010
        (VECTOR(int64_t, 4))(0x4FEFFF3322226DB2L, (VECTOR(int64_t, 2))(0x4FEFFF3322226DB2L, (-1L)), (-1L)), // p_1049->g_1017
        (-1L), // p_1049->g_1023
        0x404BL, // p_1049->g_1028
        (VECTOR(int32_t, 4))(0x5C512D18L, (VECTOR(int32_t, 2))(0x5C512D18L, (-3L)), (-3L)), // p_1049->g_1029
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2C6D4A25L), 0x2C6D4A25L), 0x2C6D4A25L, 1L, 0x2C6D4A25L, (VECTOR(int32_t, 2))(1L, 0x2C6D4A25L), (VECTOR(int32_t, 2))(1L, 0x2C6D4A25L), 1L, 0x2C6D4A25L, 1L, 0x2C6D4A25L), // p_1049->g_1030
        (VECTOR(int32_t, 16))(0x1557529FL, (VECTOR(int32_t, 4))(0x1557529FL, (VECTOR(int32_t, 2))(0x1557529FL, 1L), 1L), 1L, 0x1557529FL, 1L, (VECTOR(int32_t, 2))(0x1557529FL, 1L), (VECTOR(int32_t, 2))(0x1557529FL, 1L), 0x1557529FL, 1L, 0x1557529FL, 1L), // p_1049->g_1032
        (VECTOR(int32_t, 16))(0x2A9EBDE7L, (VECTOR(int32_t, 4))(0x2A9EBDE7L, (VECTOR(int32_t, 2))(0x2A9EBDE7L, (-5L)), (-5L)), (-5L), 0x2A9EBDE7L, (-5L), (VECTOR(int32_t, 2))(0x2A9EBDE7L, (-5L)), (VECTOR(int32_t, 2))(0x2A9EBDE7L, (-5L)), 0x2A9EBDE7L, (-5L), 0x2A9EBDE7L, (-5L)), // p_1049->g_1038
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_1049->g_1039
        (VECTOR(int32_t, 2))(0L, 0x3201BA99L), // p_1049->g_1040
        (VECTOR(int32_t, 16))(0x09BA496EL, (VECTOR(int32_t, 4))(0x09BA496EL, (VECTOR(int32_t, 2))(0x09BA496EL, 0x7648E99BL), 0x7648E99BL), 0x7648E99BL, 0x09BA496EL, 0x7648E99BL, (VECTOR(int32_t, 2))(0x09BA496EL, 0x7648E99BL), (VECTOR(int32_t, 2))(0x09BA496EL, 0x7648E99BL), 0x09BA496EL, 0x7648E99BL, 0x09BA496EL, 0x7648E99BL), // p_1049->g_1044
        0, // p_1049->v_collective
        sequence_input[get_global_id(0)], // p_1049->global_0_offset
        sequence_input[get_global_id(1)], // p_1049->global_1_offset
        sequence_input[get_global_id(2)], // p_1049->global_2_offset
        sequence_input[get_local_id(0)], // p_1049->local_0_offset
        sequence_input[get_local_id(1)], // p_1049->local_1_offset
        sequence_input[get_local_id(2)], // p_1049->local_2_offset
        sequence_input[get_group_id(0)], // p_1049->group_0_offset
        sequence_input[get_group_id(1)], // p_1049->group_1_offset
        sequence_input[get_group_id(2)], // p_1049->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_1049->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1050 = c_1051;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1049);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1049->g_211, "p_1049->g_211", print_hash_value);
    transparent_crc(p_1049->g_219, "p_1049->g_219", print_hash_value);
    transparent_crc(p_1049->g_237.s0, "p_1049->g_237.s0", print_hash_value);
    transparent_crc(p_1049->g_237.s1, "p_1049->g_237.s1", print_hash_value);
    transparent_crc(p_1049->g_237.s2, "p_1049->g_237.s2", print_hash_value);
    transparent_crc(p_1049->g_237.s3, "p_1049->g_237.s3", print_hash_value);
    transparent_crc(p_1049->g_237.s4, "p_1049->g_237.s4", print_hash_value);
    transparent_crc(p_1049->g_237.s5, "p_1049->g_237.s5", print_hash_value);
    transparent_crc(p_1049->g_237.s6, "p_1049->g_237.s6", print_hash_value);
    transparent_crc(p_1049->g_237.s7, "p_1049->g_237.s7", print_hash_value);
    transparent_crc(p_1049->g_237.s8, "p_1049->g_237.s8", print_hash_value);
    transparent_crc(p_1049->g_237.s9, "p_1049->g_237.s9", print_hash_value);
    transparent_crc(p_1049->g_237.sa, "p_1049->g_237.sa", print_hash_value);
    transparent_crc(p_1049->g_237.sb, "p_1049->g_237.sb", print_hash_value);
    transparent_crc(p_1049->g_237.sc, "p_1049->g_237.sc", print_hash_value);
    transparent_crc(p_1049->g_237.sd, "p_1049->g_237.sd", print_hash_value);
    transparent_crc(p_1049->g_237.se, "p_1049->g_237.se", print_hash_value);
    transparent_crc(p_1049->g_237.sf, "p_1049->g_237.sf", print_hash_value);
    transparent_crc(p_1049->g_291, "p_1049->g_291", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1049->g_307[i][j], "p_1049->g_307[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1049->g_311, "p_1049->g_311", print_hash_value);
    transparent_crc(p_1049->g_339.x, "p_1049->g_339.x", print_hash_value);
    transparent_crc(p_1049->g_339.y, "p_1049->g_339.y", print_hash_value);
    transparent_crc(p_1049->g_339.z, "p_1049->g_339.z", print_hash_value);
    transparent_crc(p_1049->g_339.w, "p_1049->g_339.w", print_hash_value);
    transparent_crc(p_1049->g_341.x, "p_1049->g_341.x", print_hash_value);
    transparent_crc(p_1049->g_341.y, "p_1049->g_341.y", print_hash_value);
    transparent_crc(p_1049->g_341.z, "p_1049->g_341.z", print_hash_value);
    transparent_crc(p_1049->g_341.w, "p_1049->g_341.w", print_hash_value);
    transparent_crc(p_1049->g_357, "p_1049->g_357", print_hash_value);
    transparent_crc(p_1049->g_372, "p_1049->g_372", print_hash_value);
    transparent_crc(p_1049->g_406, "p_1049->g_406", print_hash_value);
    transparent_crc(p_1049->g_408, "p_1049->g_408", print_hash_value);
    transparent_crc(p_1049->g_417.s0, "p_1049->g_417.s0", print_hash_value);
    transparent_crc(p_1049->g_417.s1, "p_1049->g_417.s1", print_hash_value);
    transparent_crc(p_1049->g_417.s2, "p_1049->g_417.s2", print_hash_value);
    transparent_crc(p_1049->g_417.s3, "p_1049->g_417.s3", print_hash_value);
    transparent_crc(p_1049->g_417.s4, "p_1049->g_417.s4", print_hash_value);
    transparent_crc(p_1049->g_417.s5, "p_1049->g_417.s5", print_hash_value);
    transparent_crc(p_1049->g_417.s6, "p_1049->g_417.s6", print_hash_value);
    transparent_crc(p_1049->g_417.s7, "p_1049->g_417.s7", print_hash_value);
    transparent_crc(p_1049->g_419, "p_1049->g_419", print_hash_value);
    transparent_crc(p_1049->g_423, "p_1049->g_423", print_hash_value);
    transparent_crc(p_1049->g_424, "p_1049->g_424", print_hash_value);
    transparent_crc(p_1049->g_425, "p_1049->g_425", print_hash_value);
    transparent_crc(p_1049->g_426, "p_1049->g_426", print_hash_value);
    transparent_crc(p_1049->g_427, "p_1049->g_427", print_hash_value);
    transparent_crc(p_1049->g_428, "p_1049->g_428", print_hash_value);
    transparent_crc(p_1049->g_429, "p_1049->g_429", print_hash_value);
    transparent_crc(p_1049->g_430, "p_1049->g_430", print_hash_value);
    transparent_crc(p_1049->g_431, "p_1049->g_431", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1049->g_432[i], "p_1049->g_432[i]", print_hash_value);

    }
    transparent_crc(p_1049->g_433, "p_1049->g_433", print_hash_value);
    transparent_crc(p_1049->g_434, "p_1049->g_434", print_hash_value);
    transparent_crc(p_1049->g_435, "p_1049->g_435", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1049->g_436[i], "p_1049->g_436[i]", print_hash_value);

    }
    transparent_crc(p_1049->g_437, "p_1049->g_437", print_hash_value);
    transparent_crc(p_1049->g_438, "p_1049->g_438", print_hash_value);
    transparent_crc(p_1049->g_439.x, "p_1049->g_439.x", print_hash_value);
    transparent_crc(p_1049->g_439.y, "p_1049->g_439.y", print_hash_value);
    transparent_crc(p_1049->g_450.s0, "p_1049->g_450.s0", print_hash_value);
    transparent_crc(p_1049->g_450.s1, "p_1049->g_450.s1", print_hash_value);
    transparent_crc(p_1049->g_450.s2, "p_1049->g_450.s2", print_hash_value);
    transparent_crc(p_1049->g_450.s3, "p_1049->g_450.s3", print_hash_value);
    transparent_crc(p_1049->g_450.s4, "p_1049->g_450.s4", print_hash_value);
    transparent_crc(p_1049->g_450.s5, "p_1049->g_450.s5", print_hash_value);
    transparent_crc(p_1049->g_450.s6, "p_1049->g_450.s6", print_hash_value);
    transparent_crc(p_1049->g_450.s7, "p_1049->g_450.s7", print_hash_value);
    transparent_crc(p_1049->g_450.s8, "p_1049->g_450.s8", print_hash_value);
    transparent_crc(p_1049->g_450.s9, "p_1049->g_450.s9", print_hash_value);
    transparent_crc(p_1049->g_450.sa, "p_1049->g_450.sa", print_hash_value);
    transparent_crc(p_1049->g_450.sb, "p_1049->g_450.sb", print_hash_value);
    transparent_crc(p_1049->g_450.sc, "p_1049->g_450.sc", print_hash_value);
    transparent_crc(p_1049->g_450.sd, "p_1049->g_450.sd", print_hash_value);
    transparent_crc(p_1049->g_450.se, "p_1049->g_450.se", print_hash_value);
    transparent_crc(p_1049->g_450.sf, "p_1049->g_450.sf", print_hash_value);
    transparent_crc(p_1049->g_498.x, "p_1049->g_498.x", print_hash_value);
    transparent_crc(p_1049->g_498.y, "p_1049->g_498.y", print_hash_value);
    transparent_crc(p_1049->g_499.x, "p_1049->g_499.x", print_hash_value);
    transparent_crc(p_1049->g_499.y, "p_1049->g_499.y", print_hash_value);
    transparent_crc(p_1049->g_499.z, "p_1049->g_499.z", print_hash_value);
    transparent_crc(p_1049->g_499.w, "p_1049->g_499.w", print_hash_value);
    transparent_crc(p_1049->g_516, "p_1049->g_516", print_hash_value);
    transparent_crc(p_1049->g_537.x, "p_1049->g_537.x", print_hash_value);
    transparent_crc(p_1049->g_537.y, "p_1049->g_537.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1049->g_550[i], "p_1049->g_550[i]", print_hash_value);

    }
    transparent_crc(p_1049->g_560.x, "p_1049->g_560.x", print_hash_value);
    transparent_crc(p_1049->g_560.y, "p_1049->g_560.y", print_hash_value);
    transparent_crc(p_1049->g_560.z, "p_1049->g_560.z", print_hash_value);
    transparent_crc(p_1049->g_560.w, "p_1049->g_560.w", print_hash_value);
    transparent_crc(p_1049->g_580, "p_1049->g_580", print_hash_value);
    transparent_crc(p_1049->g_612, "p_1049->g_612", print_hash_value);
    transparent_crc(p_1049->g_623.s0, "p_1049->g_623.s0", print_hash_value);
    transparent_crc(p_1049->g_623.s1, "p_1049->g_623.s1", print_hash_value);
    transparent_crc(p_1049->g_623.s2, "p_1049->g_623.s2", print_hash_value);
    transparent_crc(p_1049->g_623.s3, "p_1049->g_623.s3", print_hash_value);
    transparent_crc(p_1049->g_623.s4, "p_1049->g_623.s4", print_hash_value);
    transparent_crc(p_1049->g_623.s5, "p_1049->g_623.s5", print_hash_value);
    transparent_crc(p_1049->g_623.s6, "p_1049->g_623.s6", print_hash_value);
    transparent_crc(p_1049->g_623.s7, "p_1049->g_623.s7", print_hash_value);
    transparent_crc(p_1049->g_623.s8, "p_1049->g_623.s8", print_hash_value);
    transparent_crc(p_1049->g_623.s9, "p_1049->g_623.s9", print_hash_value);
    transparent_crc(p_1049->g_623.sa, "p_1049->g_623.sa", print_hash_value);
    transparent_crc(p_1049->g_623.sb, "p_1049->g_623.sb", print_hash_value);
    transparent_crc(p_1049->g_623.sc, "p_1049->g_623.sc", print_hash_value);
    transparent_crc(p_1049->g_623.sd, "p_1049->g_623.sd", print_hash_value);
    transparent_crc(p_1049->g_623.se, "p_1049->g_623.se", print_hash_value);
    transparent_crc(p_1049->g_623.sf, "p_1049->g_623.sf", print_hash_value);
    transparent_crc(p_1049->g_626, "p_1049->g_626", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1049->g_627[i], "p_1049->g_627[i]", print_hash_value);

    }
    transparent_crc(p_1049->g_631.s0, "p_1049->g_631.s0", print_hash_value);
    transparent_crc(p_1049->g_631.s1, "p_1049->g_631.s1", print_hash_value);
    transparent_crc(p_1049->g_631.s2, "p_1049->g_631.s2", print_hash_value);
    transparent_crc(p_1049->g_631.s3, "p_1049->g_631.s3", print_hash_value);
    transparent_crc(p_1049->g_631.s4, "p_1049->g_631.s4", print_hash_value);
    transparent_crc(p_1049->g_631.s5, "p_1049->g_631.s5", print_hash_value);
    transparent_crc(p_1049->g_631.s6, "p_1049->g_631.s6", print_hash_value);
    transparent_crc(p_1049->g_631.s7, "p_1049->g_631.s7", print_hash_value);
    transparent_crc(p_1049->g_634.x, "p_1049->g_634.x", print_hash_value);
    transparent_crc(p_1049->g_634.y, "p_1049->g_634.y", print_hash_value);
    transparent_crc(p_1049->g_634.z, "p_1049->g_634.z", print_hash_value);
    transparent_crc(p_1049->g_634.w, "p_1049->g_634.w", print_hash_value);
    transparent_crc(p_1049->g_635.s0, "p_1049->g_635.s0", print_hash_value);
    transparent_crc(p_1049->g_635.s1, "p_1049->g_635.s1", print_hash_value);
    transparent_crc(p_1049->g_635.s2, "p_1049->g_635.s2", print_hash_value);
    transparent_crc(p_1049->g_635.s3, "p_1049->g_635.s3", print_hash_value);
    transparent_crc(p_1049->g_635.s4, "p_1049->g_635.s4", print_hash_value);
    transparent_crc(p_1049->g_635.s5, "p_1049->g_635.s5", print_hash_value);
    transparent_crc(p_1049->g_635.s6, "p_1049->g_635.s6", print_hash_value);
    transparent_crc(p_1049->g_635.s7, "p_1049->g_635.s7", print_hash_value);
    transparent_crc(p_1049->g_635.s8, "p_1049->g_635.s8", print_hash_value);
    transparent_crc(p_1049->g_635.s9, "p_1049->g_635.s9", print_hash_value);
    transparent_crc(p_1049->g_635.sa, "p_1049->g_635.sa", print_hash_value);
    transparent_crc(p_1049->g_635.sb, "p_1049->g_635.sb", print_hash_value);
    transparent_crc(p_1049->g_635.sc, "p_1049->g_635.sc", print_hash_value);
    transparent_crc(p_1049->g_635.sd, "p_1049->g_635.sd", print_hash_value);
    transparent_crc(p_1049->g_635.se, "p_1049->g_635.se", print_hash_value);
    transparent_crc(p_1049->g_635.sf, "p_1049->g_635.sf", print_hash_value);
    transparent_crc(p_1049->g_695.s0, "p_1049->g_695.s0", print_hash_value);
    transparent_crc(p_1049->g_695.s1, "p_1049->g_695.s1", print_hash_value);
    transparent_crc(p_1049->g_695.s2, "p_1049->g_695.s2", print_hash_value);
    transparent_crc(p_1049->g_695.s3, "p_1049->g_695.s3", print_hash_value);
    transparent_crc(p_1049->g_695.s4, "p_1049->g_695.s4", print_hash_value);
    transparent_crc(p_1049->g_695.s5, "p_1049->g_695.s5", print_hash_value);
    transparent_crc(p_1049->g_695.s6, "p_1049->g_695.s6", print_hash_value);
    transparent_crc(p_1049->g_695.s7, "p_1049->g_695.s7", print_hash_value);
    transparent_crc(p_1049->g_695.s8, "p_1049->g_695.s8", print_hash_value);
    transparent_crc(p_1049->g_695.s9, "p_1049->g_695.s9", print_hash_value);
    transparent_crc(p_1049->g_695.sa, "p_1049->g_695.sa", print_hash_value);
    transparent_crc(p_1049->g_695.sb, "p_1049->g_695.sb", print_hash_value);
    transparent_crc(p_1049->g_695.sc, "p_1049->g_695.sc", print_hash_value);
    transparent_crc(p_1049->g_695.sd, "p_1049->g_695.sd", print_hash_value);
    transparent_crc(p_1049->g_695.se, "p_1049->g_695.se", print_hash_value);
    transparent_crc(p_1049->g_695.sf, "p_1049->g_695.sf", print_hash_value);
    transparent_crc(p_1049->g_716.s0, "p_1049->g_716.s0", print_hash_value);
    transparent_crc(p_1049->g_716.s1, "p_1049->g_716.s1", print_hash_value);
    transparent_crc(p_1049->g_716.s2, "p_1049->g_716.s2", print_hash_value);
    transparent_crc(p_1049->g_716.s3, "p_1049->g_716.s3", print_hash_value);
    transparent_crc(p_1049->g_716.s4, "p_1049->g_716.s4", print_hash_value);
    transparent_crc(p_1049->g_716.s5, "p_1049->g_716.s5", print_hash_value);
    transparent_crc(p_1049->g_716.s6, "p_1049->g_716.s6", print_hash_value);
    transparent_crc(p_1049->g_716.s7, "p_1049->g_716.s7", print_hash_value);
    transparent_crc(p_1049->g_716.s8, "p_1049->g_716.s8", print_hash_value);
    transparent_crc(p_1049->g_716.s9, "p_1049->g_716.s9", print_hash_value);
    transparent_crc(p_1049->g_716.sa, "p_1049->g_716.sa", print_hash_value);
    transparent_crc(p_1049->g_716.sb, "p_1049->g_716.sb", print_hash_value);
    transparent_crc(p_1049->g_716.sc, "p_1049->g_716.sc", print_hash_value);
    transparent_crc(p_1049->g_716.sd, "p_1049->g_716.sd", print_hash_value);
    transparent_crc(p_1049->g_716.se, "p_1049->g_716.se", print_hash_value);
    transparent_crc(p_1049->g_716.sf, "p_1049->g_716.sf", print_hash_value);
    transparent_crc(p_1049->g_717.s0, "p_1049->g_717.s0", print_hash_value);
    transparent_crc(p_1049->g_717.s1, "p_1049->g_717.s1", print_hash_value);
    transparent_crc(p_1049->g_717.s2, "p_1049->g_717.s2", print_hash_value);
    transparent_crc(p_1049->g_717.s3, "p_1049->g_717.s3", print_hash_value);
    transparent_crc(p_1049->g_717.s4, "p_1049->g_717.s4", print_hash_value);
    transparent_crc(p_1049->g_717.s5, "p_1049->g_717.s5", print_hash_value);
    transparent_crc(p_1049->g_717.s6, "p_1049->g_717.s6", print_hash_value);
    transparent_crc(p_1049->g_717.s7, "p_1049->g_717.s7", print_hash_value);
    transparent_crc(p_1049->g_721.x, "p_1049->g_721.x", print_hash_value);
    transparent_crc(p_1049->g_721.y, "p_1049->g_721.y", print_hash_value);
    transparent_crc(p_1049->g_721.z, "p_1049->g_721.z", print_hash_value);
    transparent_crc(p_1049->g_721.w, "p_1049->g_721.w", print_hash_value);
    transparent_crc(p_1049->g_723.s0, "p_1049->g_723.s0", print_hash_value);
    transparent_crc(p_1049->g_723.s1, "p_1049->g_723.s1", print_hash_value);
    transparent_crc(p_1049->g_723.s2, "p_1049->g_723.s2", print_hash_value);
    transparent_crc(p_1049->g_723.s3, "p_1049->g_723.s3", print_hash_value);
    transparent_crc(p_1049->g_723.s4, "p_1049->g_723.s4", print_hash_value);
    transparent_crc(p_1049->g_723.s5, "p_1049->g_723.s5", print_hash_value);
    transparent_crc(p_1049->g_723.s6, "p_1049->g_723.s6", print_hash_value);
    transparent_crc(p_1049->g_723.s7, "p_1049->g_723.s7", print_hash_value);
    transparent_crc(p_1049->g_723.s8, "p_1049->g_723.s8", print_hash_value);
    transparent_crc(p_1049->g_723.s9, "p_1049->g_723.s9", print_hash_value);
    transparent_crc(p_1049->g_723.sa, "p_1049->g_723.sa", print_hash_value);
    transparent_crc(p_1049->g_723.sb, "p_1049->g_723.sb", print_hash_value);
    transparent_crc(p_1049->g_723.sc, "p_1049->g_723.sc", print_hash_value);
    transparent_crc(p_1049->g_723.sd, "p_1049->g_723.sd", print_hash_value);
    transparent_crc(p_1049->g_723.se, "p_1049->g_723.se", print_hash_value);
    transparent_crc(p_1049->g_723.sf, "p_1049->g_723.sf", print_hash_value);
    transparent_crc(p_1049->g_724.s0, "p_1049->g_724.s0", print_hash_value);
    transparent_crc(p_1049->g_724.s1, "p_1049->g_724.s1", print_hash_value);
    transparent_crc(p_1049->g_724.s2, "p_1049->g_724.s2", print_hash_value);
    transparent_crc(p_1049->g_724.s3, "p_1049->g_724.s3", print_hash_value);
    transparent_crc(p_1049->g_724.s4, "p_1049->g_724.s4", print_hash_value);
    transparent_crc(p_1049->g_724.s5, "p_1049->g_724.s5", print_hash_value);
    transparent_crc(p_1049->g_724.s6, "p_1049->g_724.s6", print_hash_value);
    transparent_crc(p_1049->g_724.s7, "p_1049->g_724.s7", print_hash_value);
    transparent_crc(p_1049->g_726.x, "p_1049->g_726.x", print_hash_value);
    transparent_crc(p_1049->g_726.y, "p_1049->g_726.y", print_hash_value);
    transparent_crc(p_1049->g_726.z, "p_1049->g_726.z", print_hash_value);
    transparent_crc(p_1049->g_726.w, "p_1049->g_726.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1049->g_731[i][j], "p_1049->g_731[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1049->g_818.s0, "p_1049->g_818.s0", print_hash_value);
    transparent_crc(p_1049->g_818.s1, "p_1049->g_818.s1", print_hash_value);
    transparent_crc(p_1049->g_818.s2, "p_1049->g_818.s2", print_hash_value);
    transparent_crc(p_1049->g_818.s3, "p_1049->g_818.s3", print_hash_value);
    transparent_crc(p_1049->g_818.s4, "p_1049->g_818.s4", print_hash_value);
    transparent_crc(p_1049->g_818.s5, "p_1049->g_818.s5", print_hash_value);
    transparent_crc(p_1049->g_818.s6, "p_1049->g_818.s6", print_hash_value);
    transparent_crc(p_1049->g_818.s7, "p_1049->g_818.s7", print_hash_value);
    transparent_crc(p_1049->g_820.x, "p_1049->g_820.x", print_hash_value);
    transparent_crc(p_1049->g_820.y, "p_1049->g_820.y", print_hash_value);
    transparent_crc(p_1049->g_820.z, "p_1049->g_820.z", print_hash_value);
    transparent_crc(p_1049->g_820.w, "p_1049->g_820.w", print_hash_value);
    transparent_crc(p_1049->g_872.s0, "p_1049->g_872.s0", print_hash_value);
    transparent_crc(p_1049->g_872.s1, "p_1049->g_872.s1", print_hash_value);
    transparent_crc(p_1049->g_872.s2, "p_1049->g_872.s2", print_hash_value);
    transparent_crc(p_1049->g_872.s3, "p_1049->g_872.s3", print_hash_value);
    transparent_crc(p_1049->g_872.s4, "p_1049->g_872.s4", print_hash_value);
    transparent_crc(p_1049->g_872.s5, "p_1049->g_872.s5", print_hash_value);
    transparent_crc(p_1049->g_872.s6, "p_1049->g_872.s6", print_hash_value);
    transparent_crc(p_1049->g_872.s7, "p_1049->g_872.s7", print_hash_value);
    transparent_crc(p_1049->g_872.s8, "p_1049->g_872.s8", print_hash_value);
    transparent_crc(p_1049->g_872.s9, "p_1049->g_872.s9", print_hash_value);
    transparent_crc(p_1049->g_872.sa, "p_1049->g_872.sa", print_hash_value);
    transparent_crc(p_1049->g_872.sb, "p_1049->g_872.sb", print_hash_value);
    transparent_crc(p_1049->g_872.sc, "p_1049->g_872.sc", print_hash_value);
    transparent_crc(p_1049->g_872.sd, "p_1049->g_872.sd", print_hash_value);
    transparent_crc(p_1049->g_872.se, "p_1049->g_872.se", print_hash_value);
    transparent_crc(p_1049->g_872.sf, "p_1049->g_872.sf", print_hash_value);
    transparent_crc(p_1049->g_898.x, "p_1049->g_898.x", print_hash_value);
    transparent_crc(p_1049->g_898.y, "p_1049->g_898.y", print_hash_value);
    transparent_crc(p_1049->g_898.z, "p_1049->g_898.z", print_hash_value);
    transparent_crc(p_1049->g_898.w, "p_1049->g_898.w", print_hash_value);
    transparent_crc(p_1049->g_899.s0, "p_1049->g_899.s0", print_hash_value);
    transparent_crc(p_1049->g_899.s1, "p_1049->g_899.s1", print_hash_value);
    transparent_crc(p_1049->g_899.s2, "p_1049->g_899.s2", print_hash_value);
    transparent_crc(p_1049->g_899.s3, "p_1049->g_899.s3", print_hash_value);
    transparent_crc(p_1049->g_899.s4, "p_1049->g_899.s4", print_hash_value);
    transparent_crc(p_1049->g_899.s5, "p_1049->g_899.s5", print_hash_value);
    transparent_crc(p_1049->g_899.s6, "p_1049->g_899.s6", print_hash_value);
    transparent_crc(p_1049->g_899.s7, "p_1049->g_899.s7", print_hash_value);
    transparent_crc(p_1049->g_899.s8, "p_1049->g_899.s8", print_hash_value);
    transparent_crc(p_1049->g_899.s9, "p_1049->g_899.s9", print_hash_value);
    transparent_crc(p_1049->g_899.sa, "p_1049->g_899.sa", print_hash_value);
    transparent_crc(p_1049->g_899.sb, "p_1049->g_899.sb", print_hash_value);
    transparent_crc(p_1049->g_899.sc, "p_1049->g_899.sc", print_hash_value);
    transparent_crc(p_1049->g_899.sd, "p_1049->g_899.sd", print_hash_value);
    transparent_crc(p_1049->g_899.se, "p_1049->g_899.se", print_hash_value);
    transparent_crc(p_1049->g_899.sf, "p_1049->g_899.sf", print_hash_value);
    transparent_crc(p_1049->g_900.x, "p_1049->g_900.x", print_hash_value);
    transparent_crc(p_1049->g_900.y, "p_1049->g_900.y", print_hash_value);
    transparent_crc(p_1049->g_901.s0, "p_1049->g_901.s0", print_hash_value);
    transparent_crc(p_1049->g_901.s1, "p_1049->g_901.s1", print_hash_value);
    transparent_crc(p_1049->g_901.s2, "p_1049->g_901.s2", print_hash_value);
    transparent_crc(p_1049->g_901.s3, "p_1049->g_901.s3", print_hash_value);
    transparent_crc(p_1049->g_901.s4, "p_1049->g_901.s4", print_hash_value);
    transparent_crc(p_1049->g_901.s5, "p_1049->g_901.s5", print_hash_value);
    transparent_crc(p_1049->g_901.s6, "p_1049->g_901.s6", print_hash_value);
    transparent_crc(p_1049->g_901.s7, "p_1049->g_901.s7", print_hash_value);
    transparent_crc(p_1049->g_901.s8, "p_1049->g_901.s8", print_hash_value);
    transparent_crc(p_1049->g_901.s9, "p_1049->g_901.s9", print_hash_value);
    transparent_crc(p_1049->g_901.sa, "p_1049->g_901.sa", print_hash_value);
    transparent_crc(p_1049->g_901.sb, "p_1049->g_901.sb", print_hash_value);
    transparent_crc(p_1049->g_901.sc, "p_1049->g_901.sc", print_hash_value);
    transparent_crc(p_1049->g_901.sd, "p_1049->g_901.sd", print_hash_value);
    transparent_crc(p_1049->g_901.se, "p_1049->g_901.se", print_hash_value);
    transparent_crc(p_1049->g_901.sf, "p_1049->g_901.sf", print_hash_value);
    transparent_crc(p_1049->g_908.s0, "p_1049->g_908.s0", print_hash_value);
    transparent_crc(p_1049->g_908.s1, "p_1049->g_908.s1", print_hash_value);
    transparent_crc(p_1049->g_908.s2, "p_1049->g_908.s2", print_hash_value);
    transparent_crc(p_1049->g_908.s3, "p_1049->g_908.s3", print_hash_value);
    transparent_crc(p_1049->g_908.s4, "p_1049->g_908.s4", print_hash_value);
    transparent_crc(p_1049->g_908.s5, "p_1049->g_908.s5", print_hash_value);
    transparent_crc(p_1049->g_908.s6, "p_1049->g_908.s6", print_hash_value);
    transparent_crc(p_1049->g_908.s7, "p_1049->g_908.s7", print_hash_value);
    transparent_crc(p_1049->g_908.s8, "p_1049->g_908.s8", print_hash_value);
    transparent_crc(p_1049->g_908.s9, "p_1049->g_908.s9", print_hash_value);
    transparent_crc(p_1049->g_908.sa, "p_1049->g_908.sa", print_hash_value);
    transparent_crc(p_1049->g_908.sb, "p_1049->g_908.sb", print_hash_value);
    transparent_crc(p_1049->g_908.sc, "p_1049->g_908.sc", print_hash_value);
    transparent_crc(p_1049->g_908.sd, "p_1049->g_908.sd", print_hash_value);
    transparent_crc(p_1049->g_908.se, "p_1049->g_908.se", print_hash_value);
    transparent_crc(p_1049->g_908.sf, "p_1049->g_908.sf", print_hash_value);
    transparent_crc(p_1049->g_926.x, "p_1049->g_926.x", print_hash_value);
    transparent_crc(p_1049->g_926.y, "p_1049->g_926.y", print_hash_value);
    transparent_crc(p_1049->g_942, "p_1049->g_942", print_hash_value);
    transparent_crc(p_1049->g_958.x, "p_1049->g_958.x", print_hash_value);
    transparent_crc(p_1049->g_958.y, "p_1049->g_958.y", print_hash_value);
    transparent_crc(p_1049->g_958.z, "p_1049->g_958.z", print_hash_value);
    transparent_crc(p_1049->g_958.w, "p_1049->g_958.w", print_hash_value);
    transparent_crc(p_1049->g_1010.s0, "p_1049->g_1010.s0", print_hash_value);
    transparent_crc(p_1049->g_1010.s1, "p_1049->g_1010.s1", print_hash_value);
    transparent_crc(p_1049->g_1010.s2, "p_1049->g_1010.s2", print_hash_value);
    transparent_crc(p_1049->g_1010.s3, "p_1049->g_1010.s3", print_hash_value);
    transparent_crc(p_1049->g_1010.s4, "p_1049->g_1010.s4", print_hash_value);
    transparent_crc(p_1049->g_1010.s5, "p_1049->g_1010.s5", print_hash_value);
    transparent_crc(p_1049->g_1010.s6, "p_1049->g_1010.s6", print_hash_value);
    transparent_crc(p_1049->g_1010.s7, "p_1049->g_1010.s7", print_hash_value);
    transparent_crc(p_1049->g_1017.x, "p_1049->g_1017.x", print_hash_value);
    transparent_crc(p_1049->g_1017.y, "p_1049->g_1017.y", print_hash_value);
    transparent_crc(p_1049->g_1017.z, "p_1049->g_1017.z", print_hash_value);
    transparent_crc(p_1049->g_1017.w, "p_1049->g_1017.w", print_hash_value);
    transparent_crc(p_1049->g_1023, "p_1049->g_1023", print_hash_value);
    transparent_crc(p_1049->g_1028, "p_1049->g_1028", print_hash_value);
    transparent_crc(p_1049->g_1029.x, "p_1049->g_1029.x", print_hash_value);
    transparent_crc(p_1049->g_1029.y, "p_1049->g_1029.y", print_hash_value);
    transparent_crc(p_1049->g_1029.z, "p_1049->g_1029.z", print_hash_value);
    transparent_crc(p_1049->g_1029.w, "p_1049->g_1029.w", print_hash_value);
    transparent_crc(p_1049->g_1030.s0, "p_1049->g_1030.s0", print_hash_value);
    transparent_crc(p_1049->g_1030.s1, "p_1049->g_1030.s1", print_hash_value);
    transparent_crc(p_1049->g_1030.s2, "p_1049->g_1030.s2", print_hash_value);
    transparent_crc(p_1049->g_1030.s3, "p_1049->g_1030.s3", print_hash_value);
    transparent_crc(p_1049->g_1030.s4, "p_1049->g_1030.s4", print_hash_value);
    transparent_crc(p_1049->g_1030.s5, "p_1049->g_1030.s5", print_hash_value);
    transparent_crc(p_1049->g_1030.s6, "p_1049->g_1030.s6", print_hash_value);
    transparent_crc(p_1049->g_1030.s7, "p_1049->g_1030.s7", print_hash_value);
    transparent_crc(p_1049->g_1030.s8, "p_1049->g_1030.s8", print_hash_value);
    transparent_crc(p_1049->g_1030.s9, "p_1049->g_1030.s9", print_hash_value);
    transparent_crc(p_1049->g_1030.sa, "p_1049->g_1030.sa", print_hash_value);
    transparent_crc(p_1049->g_1030.sb, "p_1049->g_1030.sb", print_hash_value);
    transparent_crc(p_1049->g_1030.sc, "p_1049->g_1030.sc", print_hash_value);
    transparent_crc(p_1049->g_1030.sd, "p_1049->g_1030.sd", print_hash_value);
    transparent_crc(p_1049->g_1030.se, "p_1049->g_1030.se", print_hash_value);
    transparent_crc(p_1049->g_1030.sf, "p_1049->g_1030.sf", print_hash_value);
    transparent_crc(p_1049->g_1032.s0, "p_1049->g_1032.s0", print_hash_value);
    transparent_crc(p_1049->g_1032.s1, "p_1049->g_1032.s1", print_hash_value);
    transparent_crc(p_1049->g_1032.s2, "p_1049->g_1032.s2", print_hash_value);
    transparent_crc(p_1049->g_1032.s3, "p_1049->g_1032.s3", print_hash_value);
    transparent_crc(p_1049->g_1032.s4, "p_1049->g_1032.s4", print_hash_value);
    transparent_crc(p_1049->g_1032.s5, "p_1049->g_1032.s5", print_hash_value);
    transparent_crc(p_1049->g_1032.s6, "p_1049->g_1032.s6", print_hash_value);
    transparent_crc(p_1049->g_1032.s7, "p_1049->g_1032.s7", print_hash_value);
    transparent_crc(p_1049->g_1032.s8, "p_1049->g_1032.s8", print_hash_value);
    transparent_crc(p_1049->g_1032.s9, "p_1049->g_1032.s9", print_hash_value);
    transparent_crc(p_1049->g_1032.sa, "p_1049->g_1032.sa", print_hash_value);
    transparent_crc(p_1049->g_1032.sb, "p_1049->g_1032.sb", print_hash_value);
    transparent_crc(p_1049->g_1032.sc, "p_1049->g_1032.sc", print_hash_value);
    transparent_crc(p_1049->g_1032.sd, "p_1049->g_1032.sd", print_hash_value);
    transparent_crc(p_1049->g_1032.se, "p_1049->g_1032.se", print_hash_value);
    transparent_crc(p_1049->g_1032.sf, "p_1049->g_1032.sf", print_hash_value);
    transparent_crc(p_1049->g_1038.s0, "p_1049->g_1038.s0", print_hash_value);
    transparent_crc(p_1049->g_1038.s1, "p_1049->g_1038.s1", print_hash_value);
    transparent_crc(p_1049->g_1038.s2, "p_1049->g_1038.s2", print_hash_value);
    transparent_crc(p_1049->g_1038.s3, "p_1049->g_1038.s3", print_hash_value);
    transparent_crc(p_1049->g_1038.s4, "p_1049->g_1038.s4", print_hash_value);
    transparent_crc(p_1049->g_1038.s5, "p_1049->g_1038.s5", print_hash_value);
    transparent_crc(p_1049->g_1038.s6, "p_1049->g_1038.s6", print_hash_value);
    transparent_crc(p_1049->g_1038.s7, "p_1049->g_1038.s7", print_hash_value);
    transparent_crc(p_1049->g_1038.s8, "p_1049->g_1038.s8", print_hash_value);
    transparent_crc(p_1049->g_1038.s9, "p_1049->g_1038.s9", print_hash_value);
    transparent_crc(p_1049->g_1038.sa, "p_1049->g_1038.sa", print_hash_value);
    transparent_crc(p_1049->g_1038.sb, "p_1049->g_1038.sb", print_hash_value);
    transparent_crc(p_1049->g_1038.sc, "p_1049->g_1038.sc", print_hash_value);
    transparent_crc(p_1049->g_1038.sd, "p_1049->g_1038.sd", print_hash_value);
    transparent_crc(p_1049->g_1038.se, "p_1049->g_1038.se", print_hash_value);
    transparent_crc(p_1049->g_1038.sf, "p_1049->g_1038.sf", print_hash_value);
    transparent_crc(p_1049->g_1039.s0, "p_1049->g_1039.s0", print_hash_value);
    transparent_crc(p_1049->g_1039.s1, "p_1049->g_1039.s1", print_hash_value);
    transparent_crc(p_1049->g_1039.s2, "p_1049->g_1039.s2", print_hash_value);
    transparent_crc(p_1049->g_1039.s3, "p_1049->g_1039.s3", print_hash_value);
    transparent_crc(p_1049->g_1039.s4, "p_1049->g_1039.s4", print_hash_value);
    transparent_crc(p_1049->g_1039.s5, "p_1049->g_1039.s5", print_hash_value);
    transparent_crc(p_1049->g_1039.s6, "p_1049->g_1039.s6", print_hash_value);
    transparent_crc(p_1049->g_1039.s7, "p_1049->g_1039.s7", print_hash_value);
    transparent_crc(p_1049->g_1039.s8, "p_1049->g_1039.s8", print_hash_value);
    transparent_crc(p_1049->g_1039.s9, "p_1049->g_1039.s9", print_hash_value);
    transparent_crc(p_1049->g_1039.sa, "p_1049->g_1039.sa", print_hash_value);
    transparent_crc(p_1049->g_1039.sb, "p_1049->g_1039.sb", print_hash_value);
    transparent_crc(p_1049->g_1039.sc, "p_1049->g_1039.sc", print_hash_value);
    transparent_crc(p_1049->g_1039.sd, "p_1049->g_1039.sd", print_hash_value);
    transparent_crc(p_1049->g_1039.se, "p_1049->g_1039.se", print_hash_value);
    transparent_crc(p_1049->g_1039.sf, "p_1049->g_1039.sf", print_hash_value);
    transparent_crc(p_1049->g_1040.x, "p_1049->g_1040.x", print_hash_value);
    transparent_crc(p_1049->g_1040.y, "p_1049->g_1040.y", print_hash_value);
    transparent_crc(p_1049->g_1044.s0, "p_1049->g_1044.s0", print_hash_value);
    transparent_crc(p_1049->g_1044.s1, "p_1049->g_1044.s1", print_hash_value);
    transparent_crc(p_1049->g_1044.s2, "p_1049->g_1044.s2", print_hash_value);
    transparent_crc(p_1049->g_1044.s3, "p_1049->g_1044.s3", print_hash_value);
    transparent_crc(p_1049->g_1044.s4, "p_1049->g_1044.s4", print_hash_value);
    transparent_crc(p_1049->g_1044.s5, "p_1049->g_1044.s5", print_hash_value);
    transparent_crc(p_1049->g_1044.s6, "p_1049->g_1044.s6", print_hash_value);
    transparent_crc(p_1049->g_1044.s7, "p_1049->g_1044.s7", print_hash_value);
    transparent_crc(p_1049->g_1044.s8, "p_1049->g_1044.s8", print_hash_value);
    transparent_crc(p_1049->g_1044.s9, "p_1049->g_1044.s9", print_hash_value);
    transparent_crc(p_1049->g_1044.sa, "p_1049->g_1044.sa", print_hash_value);
    transparent_crc(p_1049->g_1044.sb, "p_1049->g_1044.sb", print_hash_value);
    transparent_crc(p_1049->g_1044.sc, "p_1049->g_1044.sc", print_hash_value);
    transparent_crc(p_1049->g_1044.sd, "p_1049->g_1044.sd", print_hash_value);
    transparent_crc(p_1049->g_1044.se, "p_1049->g_1044.se", print_hash_value);
    transparent_crc(p_1049->g_1044.sf, "p_1049->g_1044.sf", print_hash_value);
    transparent_crc(p_1049->v_collective, "p_1049->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 7; i++)
            transparent_crc(p_1049->g_special_values[i + 7 * get_linear_group_id()], "p_1049->g_special_values[i + 7 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 7; i++)
            transparent_crc(p_1049->l_special_values[i], "p_1049->l_special_values[i]", print_hash_value);
    transparent_crc(p_1049->l_comm_values[get_linear_local_id()], "p_1049->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1049->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_1049->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
