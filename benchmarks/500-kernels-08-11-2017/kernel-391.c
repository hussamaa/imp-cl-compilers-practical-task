// --atomics 46 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,66,1 -l 1,33,1
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
{26,21,9,13,0,22,4,32,1,11,3,17,30,31,2,25,23,10,19,27,12,14,28,20,16,18,5,7,15,24,6,29,8}, // permutation 0
{23,30,1,28,0,20,26,21,12,19,8,5,25,22,18,24,14,11,17,29,10,31,32,9,15,7,27,16,2,3,13,6,4}, // permutation 1
{28,30,8,19,31,18,26,5,9,4,10,29,15,1,3,16,21,17,2,13,12,0,23,14,24,7,32,6,22,11,20,25,27}, // permutation 2
{12,31,18,16,21,6,32,9,23,8,30,20,3,24,22,17,5,28,10,25,26,27,7,4,2,29,0,13,1,11,19,14,15}, // permutation 3
{10,25,24,30,18,26,31,27,8,0,7,23,17,9,13,21,4,1,11,22,20,6,3,2,29,19,16,12,5,15,14,32,28}, // permutation 4
{21,4,5,23,8,3,25,22,31,10,0,12,19,13,32,16,17,24,2,20,6,27,9,28,29,26,18,15,7,1,30,14,11}, // permutation 5
{23,26,17,10,4,13,14,31,19,8,28,3,7,1,32,18,29,30,22,0,20,24,6,27,9,15,12,11,2,5,25,21,16}, // permutation 6
{2,25,11,23,15,24,31,18,16,21,22,20,17,27,6,8,0,14,19,7,10,9,1,3,26,4,5,32,29,13,28,30,12}, // permutation 7
{28,11,3,4,30,6,18,14,32,10,7,31,24,19,13,16,8,0,15,20,27,2,17,25,21,29,22,23,1,12,26,5,9}, // permutation 8
{15,2,18,7,23,16,22,11,0,29,28,21,24,4,17,26,6,5,9,20,8,32,14,10,19,27,25,1,3,12,30,13,31} // permutation 9
};

// Seed: 1872582122

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3[2][7];
    volatile int32_t g_4;
    volatile int32_t g_5[2];
    int32_t g_6;
    uint32_t g_9;
    VECTOR(uint64_t, 16) g_23;
    int32_t g_36;
    int32_t g_56;
    int32_t g_70;
    volatile int32_t g_86;
    volatile int32_t *g_85[3];
    int32_t g_88;
    int32_t *g_87;
    int32_t g_93;
    uint32_t g_95[10];
    uint8_t g_97;
    int32_t g_107;
    int32_t *g_106;
    int64_t g_124;
    int32_t g_126[7];
    uint32_t g_152;
    uint16_t g_181;
    VECTOR(int32_t, 4) g_198;
    uint32_t g_210;
    int16_t g_214;
    int32_t *g_258;
    uint16_t g_324[5];
    VECTOR(int16_t, 8) g_341;
    VECTOR(uint16_t, 4) g_344;
    VECTOR(uint16_t, 8) g_348;
    uint32_t g_371;
    VECTOR(uint64_t, 4) g_393;
    VECTOR(int16_t, 8) g_398;
    VECTOR(int16_t, 2) g_399;
    VECTOR(int16_t, 4) g_400;
    int32_t *g_549;
    int32_t **g_548[5][4][6];
    int8_t g_553;
    int8_t *g_566;
    int8_t *g_568;
    int32_t *g_576;
    volatile int32_t * volatile *g_592;
    volatile int32_t * volatile **g_591[2][8];
    volatile int64_t g_611;
    volatile int64_t *g_610;
    volatile int64_t * volatile *g_609;
    volatile int64_t * volatile **g_608[9];
    VECTOR(int64_t, 8) g_615;
    VECTOR(int8_t, 2) g_623;
    VECTOR(int8_t, 2) g_625;
    VECTOR(int32_t, 16) g_631;
    VECTOR(uint16_t, 16) g_665;
    VECTOR(uint8_t, 16) g_667;
    int8_t g_699[9];
    int8_t g_700;
    int64_t ***g_704;
    int32_t **g_784;
    VECTOR(int8_t, 2) g_803;
    VECTOR(uint8_t, 8) g_844;
    uint8_t g_858;
    int32_t g_904;
    int16_t g_926;
    uint32_t g_929;
    int32_t ** volatile g_954;
    volatile VECTOR(int8_t, 4) g_973;
    int32_t * volatile g_989[8];
    int32_t * volatile g_990;
    VECTOR(int8_t, 4) g_1011;
    VECTOR(uint64_t, 4) g_1047;
    volatile uint16_t g_1070;
    int32_t g_1078;
    int32_t * volatile g_1085;
    int8_t g_1147;
    VECTOR(uint32_t, 8) g_1148;
    VECTOR(int8_t, 4) g_1164;
    VECTOR(uint32_t, 4) g_1189;
    int32_t ** volatile g_1193[3][2][8];
    volatile VECTOR(uint32_t, 2) g_1380;
    int64_t ****g_1384[10][6][1];
    volatile uint16_t g_1438[1];
    int32_t ** volatile g_1529;
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
int8_t  func_1(struct S0 * p_1531);
int32_t * func_19(int8_t  p_20, struct S0 * p_1531);
uint32_t  func_28(int32_t * p_29, struct S0 * p_1531);
int32_t * func_30(uint32_t  p_31, int32_t  p_32, int32_t * p_33, int32_t  p_34, struct S0 * p_1531);
int32_t * func_37(uint16_t  p_38, uint32_t  p_39, uint32_t  p_40, int8_t  p_41, uint32_t  p_42, struct S0 * p_1531);
uint32_t  func_46(uint64_t  p_47, int32_t * p_48, int64_t  p_49, struct S0 * p_1531);
int32_t * func_50(int32_t  p_51, struct S0 * p_1531);
int32_t * func_59(uint32_t  p_60, uint32_t * p_61, struct S0 * p_1531);
uint16_t  func_64(int8_t  p_65, int32_t * p_66, int16_t  p_67, int16_t  p_68, struct S0 * p_1531);
int32_t * func_71(uint32_t  p_72, uint64_t  p_73, uint8_t  p_74, int32_t * p_75, struct S0 * p_1531);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1531->g_6 p_1531->g_9 p_1531->g_23 p_1531->g_371 p_1531->g_198 p_1531->g_1380 p_1531->g_699 p_1531->g_126 p_1531->g_858 p_1531->g_5 p_1531->g_566 p_1531->g_926 p_1531->g_1047 p_1531->l_comm_values p_1531->g_553 p_1531->g_568 p_1531->g_1078 p_1531->g_393 p_1531->g_1148 p_1531->g_4 p_1531->g_1085 p_1531->g_1438 p_1531->g_124 p_1531->g_324 p_1531->g_3 p_1531->g_93 p_1531->g_904 p_1531->g_990 p_1531->g_56 p_1531->g_954 p_1531->g_106
 * writes: p_1531->g_6 p_1531->g_371 p_1531->g_1384 p_1531->g_553 p_1531->g_1078 p_1531->g_1438 p_1531->g_124 p_1531->g_126 p_1531->g_93 p_1531->g_929 p_1531->g_181 p_1531->g_904 p_1531->g_56 p_1531->g_576
 */
int8_t  func_1(struct S0 * p_1531)
{ /* block id: 4 */
    int32_t l_10 = 1L;
    uint64_t l_21 = 0xE62B56095DBC2A41L;
    int32_t **l_1530 = &p_1531->g_576;
    for (p_1531->g_6 = 0; (p_1531->g_6 > (-8)); --p_1531->g_6)
    { /* block id: 7 */
        if (p_1531->g_9)
            break;
        return l_10;
    }
    if ((atomic_inc(&p_1531->g_atomic_input[46 * get_linear_group_id() + 12]) == 9))
    { /* block id: 12 */
        uint32_t l_11 = 0xE13A6C9CL;
        uint16_t l_12 = 0xDE64L;
        uint16_t l_13 = 0x81A8L;
        uint32_t l_14 = 1UL;
        int32_t l_16 = (-2L);
        int32_t *l_15 = &l_16;
        int32_t *l_17 = &l_16;
        int32_t *l_18 = &l_16;
        l_14 = (l_11 , (((GROUP_DIVERGE(2, 1) , 0x5A8ED40AL) , (l_12 , l_13)) , 0x015F8425L));
        l_15 = (void*)0;
        l_18 = l_17;
        unsigned int result = 0;
        result += l_11;
        result += l_12;
        result += l_13;
        result += l_14;
        result += l_16;
        atomic_add(&p_1531->g_special_values[46 * get_linear_group_id() + 12], result);
    }
    else
    { /* block id: 16 */
        (1 + 1);
    }
    (*l_1530) = func_19(l_21, p_1531);
    return (*p_1531->g_566);
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_23 p_1531->g_371 p_1531->g_198 p_1531->g_1380 p_1531->g_699 p_1531->g_126 p_1531->g_858 p_1531->g_5 p_1531->g_566 p_1531->g_926 p_1531->g_1047 p_1531->l_comm_values p_1531->g_553 p_1531->g_568 p_1531->g_1078 p_1531->g_6 p_1531->g_393 p_1531->g_1148 p_1531->g_4 p_1531->g_1085 p_1531->g_1438 p_1531->g_124 p_1531->g_324 p_1531->g_3 p_1531->g_93 p_1531->g_904 p_1531->g_990 p_1531->g_56 p_1531->g_954 p_1531->g_106
 * writes: p_1531->g_371 p_1531->g_1384 p_1531->g_553 p_1531->g_1078 p_1531->g_1438 p_1531->g_124 p_1531->g_126 p_1531->g_93 p_1531->g_929 p_1531->g_181 p_1531->g_904 p_1531->g_56
 */
int32_t * func_19(int8_t  p_20, struct S0 * p_1531)
{ /* block id: 19 */
    int32_t l_22 = 5L;
    VECTOR(int32_t, 2) l_982 = (VECTOR(int32_t, 2))(0L, 1L);
    int32_t *l_1158[3][8] = {{&p_1531->g_93,&p_1531->g_1078,&p_1531->g_126[4],&p_1531->g_56,&p_1531->g_126[4],&p_1531->g_1078,&p_1531->g_93,&p_1531->g_1078},{&p_1531->g_93,&p_1531->g_1078,&p_1531->g_126[4],&p_1531->g_56,&p_1531->g_126[4],&p_1531->g_1078,&p_1531->g_93,&p_1531->g_1078},{&p_1531->g_93,&p_1531->g_1078,&p_1531->g_126[4],&p_1531->g_56,&p_1531->g_126[4],&p_1531->g_1078,&p_1531->g_93,&p_1531->g_1078}};
    VECTOR(int32_t, 16) l_1379 = (VECTOR(int32_t, 16))(0x4572C327L, (VECTOR(int32_t, 4))(0x4572C327L, (VECTOR(int32_t, 2))(0x4572C327L, 0L), 0L), 0L, 0x4572C327L, 0L, (VECTOR(int32_t, 2))(0x4572C327L, 0L), (VECTOR(int32_t, 2))(0x4572C327L, 0L), 0x4572C327L, 0L, 0x4572C327L, 0L);
    VECTOR(int64_t, 16) l_1381 = (VECTOR(int64_t, 16))(0x047A3E0E4799A52DL, (VECTOR(int64_t, 4))(0x047A3E0E4799A52DL, (VECTOR(int64_t, 2))(0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L), 0x44F16CCB9EB60F84L), 0x44F16CCB9EB60F84L, 0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L, (VECTOR(int64_t, 2))(0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L), (VECTOR(int64_t, 2))(0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L), 0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L, 0x047A3E0E4799A52DL, 0x44F16CCB9EB60F84L);
    int64_t ****l_1383 = &p_1531->g_704;
    int64_t *****l_1382[7] = {&l_1383,&l_1383,&l_1383,&l_1383,&l_1383,&l_1383,&l_1383};
    VECTOR(int16_t, 8) l_1387 = (VECTOR(int16_t, 8))(0x53AEL, (VECTOR(int16_t, 4))(0x53AEL, (VECTOR(int16_t, 2))(0x53AEL, 0x364AL), 0x364AL), 0x364AL, 0x53AEL, 0x364AL);
    uint16_t *l_1423 = (void*)0;
    int32_t l_1426 = (-1L);
    VECTOR(uint32_t, 8) l_1430 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(uint64_t, 16) l_1431 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, 1UL);
    int16_t *l_1433[9];
    int16_t **l_1432 = &l_1433[4];
    int16_t l_1446[10][7] = {{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L},{0x1101L,0x1101L,0x0FA3L,0x551AL,0x6F62L,0x551AL,0x0FA3L}};
    uint32_t *l_1469 = (void*)0;
    uint32_t **l_1468 = &l_1469;
    VECTOR(uint8_t, 16) l_1480 = (VECTOR(uint8_t, 16))(0x32L, (VECTOR(uint8_t, 4))(0x32L, (VECTOR(uint8_t, 2))(0x32L, 5UL), 5UL), 5UL, 0x32L, 5UL, (VECTOR(uint8_t, 2))(0x32L, 5UL), (VECTOR(uint8_t, 2))(0x32L, 5UL), 0x32L, 5UL, 0x32L, 5UL);
    uint32_t l_1494 = 0xE587C87EL;
    int32_t l_1524 = 0L;
    uint8_t *l_1525 = (void*)0;
    int32_t *l_1528 = &l_1524;
    int i, j;
    for (i = 0; i < 9; i++)
        l_1433[i] = (void*)0;
    if ((l_22 >= ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_1531->g_23.sd423)).xwxzxxxywzzwzwxx)).s7))
    { /* block id: 20 */
        uint8_t l_1156 = 5UL;
        int32_t *l_1157 = (void*)0;
        for (p_20 = (-3); (p_20 > (-23)); p_20--)
        { /* block id: 23 */
            int32_t *l_35 = &p_1531->g_36;
            uint32_t *l_43 = &p_1531->g_9;
            int32_t l_930 = 0L;
            l_1156 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4ECCE005L, 1L)))), (safe_sub_func_uint16_t_u_u(((((VECTOR(uint32_t, 8))(0xEB256CD2L, func_28(func_30((!GROUP_DIVERGE(0, 1)), ((*l_35) = 0x36F914A1L), func_37((l_22 >= GROUP_DIVERGE(0, 1)), ((*l_43)--), func_46(p_1531->g_4, func_50(p_1531->g_23.sf, p_1531), l_930, p_1531), (((VECTOR(int32_t, 16))(l_982.xyyxxyxyxyxyxxxy)).s0 , p_1531->g_344.y), ((-1L) & p_1531->g_631.s9), p_1531), p_1531->g_comm_values[p_1531->tid], p_1531), p_1531), 1UL, l_930, 4294967295UL, ((VECTOR(uint32_t, 2))(4294967295UL)), 1UL)).s1 ^ p_1531->g_926) >= p_1531->g_844.s1), p_1531->g_341.s6)), 3L, ((VECTOR(int32_t, 4))(0x0F508ED8L)), p_20, ((VECTOR(int32_t, 2))(0x038A34EBL)), (-1L), 0x0A8E1393L, (-1L), 1L, 0L)))).se;
        }
        l_1158[0][4] = l_1157;
    }
    else
    { /* block id: 468 */
        uint64_t l_1161 = 18446744073709551615UL;
        int32_t *l_1174 = &l_22;
        VECTOR(int64_t, 2) l_1177 = (VECTOR(int64_t, 2))(0L, 0x4495BD070B33929EL);
        VECTOR(int64_t, 2) l_1178 = (VECTOR(int64_t, 2))(0x4D0E858F2BF124D6L, 0x2D6640B8CDF72FA2L);
        VECTOR(uint8_t, 16) l_1181 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x3BL), 0x3BL), 0x3BL, 0UL, 0x3BL, (VECTOR(uint8_t, 2))(0UL, 0x3BL), (VECTOR(uint8_t, 2))(0UL, 0x3BL), 0UL, 0x3BL, 0UL, 0x3BL);
        int32_t l_1182 = 0x38D00879L;
        VECTOR(uint32_t, 16) l_1187 = (VECTOR(uint32_t, 16))(0x378383EFL, (VECTOR(uint32_t, 4))(0x378383EFL, (VECTOR(uint32_t, 2))(0x378383EFL, 1UL), 1UL), 1UL, 0x378383EFL, 1UL, (VECTOR(uint32_t, 2))(0x378383EFL, 1UL), (VECTOR(uint32_t, 2))(0x378383EFL, 1UL), 0x378383EFL, 1UL, 0x378383EFL, 1UL);
        VECTOR(uint32_t, 2) l_1188 = (VECTOR(uint32_t, 2))(0xF512A4FEL, 0x91EBCE98L);
        VECTOR(uint16_t, 4) l_1190 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 2UL), 2UL);
        int i;
        for (p_1531->g_371 = 0; (p_1531->g_371 < 42); p_1531->g_371++)
        { /* block id: 471 */
            uint64_t l_1171 = 0xCF3367DA1E04D501L;
            int32_t **l_1175 = &p_1531->g_549;
            int32_t *l_1176 = &p_1531->g_70;
            uint32_t *l_1183 = &p_1531->g_929;
            uint32_t *l_1186 = &p_1531->g_95[4];
            int64_t *l_1191 = (void*)0;
            int32_t **l_1192 = (void*)0;
            int32_t **l_1194 = &l_1158[2][2];
            (1 + 1);
        }
        if ((atomic_inc(&p_1531->l_atomic_input[33]) == 4))
        { /* block id: 485 */
            int8_t l_1195[8][8][4] = {{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}},{{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L},{1L,0x6FL,(-10L),0L}}};
            int32_t l_1370 = 0L;
            VECTOR(int32_t, 16) l_1371 = (VECTOR(int32_t, 16))(0x42E4A6D9L, (VECTOR(int32_t, 4))(0x42E4A6D9L, (VECTOR(int32_t, 2))(0x42E4A6D9L, 0x7C148EFCL), 0x7C148EFCL), 0x7C148EFCL, 0x42E4A6D9L, 0x7C148EFCL, (VECTOR(int32_t, 2))(0x42E4A6D9L, 0x7C148EFCL), (VECTOR(int32_t, 2))(0x42E4A6D9L, 0x7C148EFCL), 0x42E4A6D9L, 0x7C148EFCL, 0x42E4A6D9L, 0x7C148EFCL);
            VECTOR(int32_t, 4) l_1372 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
            VECTOR(int32_t, 2) l_1373 = (VECTOR(int32_t, 2))((-1L), 0x70DFFC7EL);
            uint16_t l_1374 = 0UL;
            int i, j, k;
            if (l_1195[3][1][2])
            { /* block id: 486 */
                int32_t l_1196 = (-1L);
                uint8_t l_1216 = 0xDFL;
                uint64_t l_1217[7][6][6] = {{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}},{{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L},{0xD78945B2A197AEE7L,0xAF46817841D7F184L,0UL,1UL,0x445A8D29F388EF8BL,0xB0A6729716BD57A7L}}};
                uint16_t l_1322 = 2UL;
                int i, j, k;
                for (l_1196 = 0; (l_1196 > (-3)); l_1196 = safe_sub_func_int32_t_s_s(l_1196, 1))
                { /* block id: 489 */
                    uint32_t l_1199 = 0x12C29287L;
                    int32_t l_1200 = 0x3C715362L;
                    uint64_t l_1211[7][7] = {{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L},{0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L,0UL,0x9A0802F3FB9B0185L,0x9A0802F3FB9B0185L}};
                    int32_t l_1212 = 0x032FDF0BL;
                    uint32_t l_1213 = 4294967295UL;
                    VECTOR(uint8_t, 16) l_1214 = (VECTOR(uint8_t, 16))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 253UL), 253UL), 253UL, 0x77L, 253UL, (VECTOR(uint8_t, 2))(0x77L, 253UL), (VECTOR(uint8_t, 2))(0x77L, 253UL), 0x77L, 253UL, 0x77L, 253UL);
                    int32_t *l_1215 = &l_1200;
                    int i, j;
                    l_1200 = l_1199;
                    for (l_1200 = (-30); (l_1200 > 24); l_1200 = safe_add_func_int8_t_s_s(l_1200, 8))
                    { /* block id: 493 */
                        int32_t l_1204 = 0x34598078L;
                        int32_t *l_1203 = &l_1204;
                        int32_t *l_1205 = &l_1204;
                        int32_t *l_1206 = &l_1204;
                        int32_t l_1207 = 0x4EBE3A83L;
                        uint16_t l_1208 = 0xAF22L;
                        l_1205 = l_1203;
                        l_1206 = (void*)0;
                        l_1208++;
                    }
                    l_1211[3][2] &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(4L, (-4L))).yxyy)).y;
                    l_1215 = (l_1212 , (l_1213 , (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_1214.s4f1b0dbb2d59caed)).s6bdd)).zyyxyyxxzzzzyyzz))).saa17)).w , (void*)0)));
                }
                if ((l_1216 , l_1217[4][1][3]))
                { /* block id: 501 */
                    int32_t l_1218 = 0x233D4B2CL;
                    int8_t l_1230 = 0x64L;
                    int32_t *l_1231 = &l_1218;
                    for (l_1218 = 0; (l_1218 == (-1)); l_1218 = safe_sub_func_uint8_t_u_u(l_1218, 6))
                    { /* block id: 504 */
                        int16_t l_1221 = 0L;
                        int8_t l_1222 = 0x60L;
                        int8_t l_1223 = 0L;
                        uint64_t l_1224 = 5UL;
                        uint32_t l_1227[9][3] = {{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L},{0xC2EA7022L,0x875B47C2L,0xD04C9D05L}};
                        int32_t l_1229 = 6L;
                        int32_t *l_1228 = &l_1229;
                        int i, j;
                        l_1222 = l_1221;
                        --l_1224;
                        l_1228 = (l_1227[5][0] , l_1228);
                    }
                    l_1196 &= l_1230;
                    l_1231 = (void*)0;
                    for (l_1218 = 0; (l_1218 > (-26)); --l_1218)
                    { /* block id: 513 */
                        VECTOR(int32_t, 4) l_1234 = (VECTOR(int32_t, 4))(0x522BBBD8L, (VECTOR(int32_t, 2))(0x522BBBD8L, (-1L)), (-1L));
                        uint32_t l_1235 = 2UL;
                        int8_t l_1236 = 0L;
                        int16_t l_1237 = 1L;
                        uint16_t l_1238 = 65527UL;
                        int i;
                        l_1235 = ((l_1196 = ((VECTOR(int32_t, 2))(l_1234.wy)).even) , 0L);
                        l_1238--;
                        l_1196 = 0L;
                    }
                }
                else
                { /* block id: 519 */
                    uint32_t l_1241 = 0xA935A3DBL;
                    int32_t l_1245 = 0L;
                    int32_t *l_1244[1];
                    int32_t *l_1246 = &l_1245;
                    uint32_t l_1255 = 5UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1244[i] = &l_1245;
                    l_1241--;
                    l_1246 = l_1244[0];
                    for (l_1245 = 13; (l_1245 < (-10)); l_1245--)
                    { /* block id: 524 */
                        uint8_t l_1249 = 7UL;
                        uint64_t l_1250 = 9UL;
                        int32_t l_1252 = (-1L);
                        int32_t *l_1251 = &l_1252;
                        uint8_t l_1253[5];
                        int64_t l_1254 = (-7L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1253[i] = 6UL;
                        l_1250 ^= l_1249;
                        l_1251 = l_1251;
                        l_1254 |= l_1253[4];
                    }
                    l_1255--;
                }
                for (l_1217[3][1][3] = (-4); (l_1217[3][1][3] >= 33); ++l_1217[3][1][3])
                { /* block id: 533 */
                    int32_t l_1260 = 1L;
                    uint32_t l_1286 = 0xD6F29015L;
                    int32_t *l_1320 = &l_1260;
                    int32_t *l_1321 = (void*)0;
                    for (l_1260 = 0; (l_1260 != (-19)); l_1260 = safe_sub_func_int32_t_s_s(l_1260, 5))
                    { /* block id: 536 */
                        int16_t l_1263 = 0L;
                        VECTOR(int8_t, 8) l_1264 = (VECTOR(int8_t, 8))(0x7EL, (VECTOR(int8_t, 4))(0x7EL, (VECTOR(int8_t, 2))(0x7EL, 0x14L), 0x14L), 0x14L, 0x7EL, 0x14L);
                        VECTOR(int32_t, 4) l_1265 = (VECTOR(int32_t, 4))(0x7DDDAA8FL, (VECTOR(int32_t, 2))(0x7DDDAA8FL, 9L), 9L);
                        VECTOR(int32_t, 2) l_1266 = (VECTOR(int32_t, 2))(0x4118C3AEL, 0x23B6E36FL);
                        VECTOR(int32_t, 8) l_1267 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x4029804FL), 0x4029804FL), 0x4029804FL, 2L, 0x4029804FL);
                        uint16_t l_1268 = 1UL;
                        VECTOR(int32_t, 2) l_1269 = (VECTOR(int32_t, 2))(0x19D97476L, 0x7955562CL);
                        uint16_t l_1270 = 0xF967L;
                        uint16_t l_1271 = 65531UL;
                        int32_t l_1272 = 1L;
                        int32_t *l_1273 = (void*)0;
                        int32_t *l_1274[6][6][6] = {{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1272,(void*)0,(void*)0,(void*)0}}};
                        int32_t *l_1275 = (void*)0;
                        int i, j, k;
                        l_1272 &= (l_1263 , (((VECTOR(int8_t, 4))(l_1264.s6221)).y , (l_1271 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x2C3793F0L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))((l_1196 = ((VECTOR(int32_t, 8))(l_1265.yxwyxxww)).s6), ((VECTOR(int32_t, 2))(l_1266.xx)), 7L, 8L, 2L, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_1267.s11)).xyxxxxyxyxyyyxxy, ((VECTOR(int32_t, 2))(0x1965DA30L, 0x6B2C9883L)).xyyyxyxyyxyxyyxx))).sb, 0x735EA988L, ((VECTOR(int32_t, 8))(l_1268, ((VECTOR(int32_t, 2))((-7L), 0x428ADC06L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1269.yx)).yxxy)), (-1L))))).s49, ((VECTOR(int32_t, 4))(0L, l_1270, 0x004147B6L, 0x482A7641L)).odd))), 0x710B5D55L)).even)).odd)));
                        l_1273 = (void*)0;
                        l_1275 = l_1274[0][2][5];
                    }
                    for (l_1260 = 20; (l_1260 > (-2)); --l_1260)
                    { /* block id: 545 */
                        uint8_t l_1278[3][2][3] = {{{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL}}};
                        int32_t l_1280 = 0x129D1124L;
                        int32_t *l_1279 = &l_1280;
                        VECTOR(int64_t, 4) l_1281 = (VECTOR(int64_t, 4))(0x15EC14F2BE968EDAL, (VECTOR(int64_t, 2))(0x15EC14F2BE968EDAL, 0x65593D7E7B75F458L), 0x65593D7E7B75F458L);
                        uint32_t l_1282 = 0x12767035L;
                        uint16_t l_1283[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_1283[i] = 0xB85EL;
                        l_1278[1][1][2] &= (l_1196 = (-4L));
                        l_1279 = (void*)0;
                        l_1282 = (l_1196 = l_1281.w);
                        ++l_1283[1];
                    }
                    if (l_1286)
                    { /* block id: 553 */
                        int64_t l_1287 = 1L;
                        VECTOR(int32_t, 2) l_1288 = (VECTOR(int32_t, 2))(0x53D5668FL, 0x2B160BB9L);
                        VECTOR(int32_t, 8) l_1289 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 8L), 8L), 8L, (-4L), 8L);
                        VECTOR(int32_t, 8) l_1290 = (VECTOR(int32_t, 8))(0x3BE38B04L, (VECTOR(int32_t, 4))(0x3BE38B04L, (VECTOR(int32_t, 2))(0x3BE38B04L, 0x5AB3E4D8L), 0x5AB3E4D8L), 0x5AB3E4D8L, 0x3BE38B04L, 0x5AB3E4D8L);
                        VECTOR(int32_t, 16) l_1291 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1345BD84L), 0x1345BD84L), 0x1345BD84L, (-1L), 0x1345BD84L, (VECTOR(int32_t, 2))((-1L), 0x1345BD84L), (VECTOR(int32_t, 2))((-1L), 0x1345BD84L), (-1L), 0x1345BD84L, (-1L), 0x1345BD84L);
                        int8_t l_1292 = 0x4AL;
                        uint8_t l_1293 = 0xF4L;
                        uint32_t l_1294 = 0UL;
                        VECTOR(int16_t, 8) l_1295 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 7L), 7L), 7L, (-9L), 7L);
                        VECTOR(int8_t, 8) l_1296 = (VECTOR(int8_t, 8))(0x27L, (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, (-1L)), (-1L)), (-1L), 0x27L, (-1L));
                        uint8_t l_1297 = 0UL;
                        VECTOR(int8_t, 4) l_1298 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
                        uint16_t l_1299 = 0x8776L;
                        uint32_t l_1300 = 0x5A6E2CA5L;
                        int32_t l_1301[9][9] = {{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)},{(-6L),(-1L),(-10L),0L,(-1L),0L,(-10L),(-1L),(-6L)}};
                        VECTOR(int8_t, 2) l_1302 = (VECTOR(int8_t, 2))(0x47L, (-1L));
                        int32_t l_1303 = 0x0C9FB5A4L;
                        uint64_t l_1304 = 0xC5B75D8B608C11D7L;
                        uint32_t l_1305 = 0x3D3C9C65L;
                        uint32_t l_1306[9];
                        int32_t l_1307 = 0x3F8AB3C6L;
                        int32_t l_1308 = 0x3FE29F71L;
                        uint64_t l_1309 = 18446744073709551615UL;
                        uint32_t l_1310 = 4294967295UL;
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1306[i] = 0x04801919L;
                        l_1260 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x00CE0ABBL)).yyyyyxxx)), (l_1287 , 0x069DA396L), 0x1EAE1D4FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1288.yyxy)), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x2A2295FCL, 0x3455D103L)).xyxxxxxy, ((VECTOR(int32_t, 4))(l_1289.s5032)).zwyzyxxw))).s2000760165574002)).hi, ((VECTOR(int32_t, 2))(l_1290.s23)).yxxyxyyx, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))((-5L), 0x20B30FA1L, (-6L), 0x4E64C52FL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1291.sebc5)).zwzzzyxy)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x71820FF5L, 0x7FEF5B76L, 0x1803A875L, 0x0AE2C72CL)).zyzxywwx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1292, (-4L), l_1293, (l_1196 = l_1294), ((l_1305 = ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(l_1295.s3111217231707537)).s5a, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_1296.s7132)), (l_1195[3][1][2] |= 0x7DL), 0x65L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1297, 0x69L, 0x44L, ((VECTOR(int8_t, 2))(l_1298.ww)), 1L, (-1L), 0x58L)))).s67)), ((l_1302.x = (l_1301[4][7] |= (l_1300 = l_1299))) , l_1303), l_1304, 1L, ((VECTOR(int8_t, 4))(0x2DL)), 0x6AL)).sbf, ((VECTOR(uint8_t, 2))(0x2AL)))))))))).lo) , l_1306[8]), 0x2F2907D7L, l_1307, 0x12AF6272L, 1L, l_1308, 0x6E982B10L, l_1309, (-8L), 4L, 0x51567486L, 4L)).hi))))))), ((VECTOR(int32_t, 4))(0x6A568BAFL)), (-1L), l_1310, 0x28122138L, (-1L))).lo))).even)).zyyxxxxw)).lo))).xzwxyyzz))).lo))).yzwywwyzyxzzxyyz)).s9feb, ((VECTOR(int32_t, 4))((-1L)))))).hi))), (-9L), 0x238612F9L)), 0x5BAD0B7AL, 1L)).sc;
                    }
                    else
                    { /* block id: 561 */
                        VECTOR(int16_t, 8) l_1311 = (VECTOR(int16_t, 8))(0x3C0AL, (VECTOR(int16_t, 4))(0x3C0AL, (VECTOR(int16_t, 2))(0x3C0AL, 0x040DL), 0x040DL), 0x040DL, 0x3C0AL, 0x040DL);
                        int8_t l_1312[9][2] = {{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L},{0x7BL,1L}};
                        VECTOR(uint16_t, 8) l_1313 = (VECTOR(uint16_t, 8))(0xF243L, (VECTOR(uint16_t, 4))(0xF243L, (VECTOR(uint16_t, 2))(0xF243L, 65535UL), 65535UL), 65535UL, 0xF243L, 65535UL);
                        uint8_t l_1316 = 9UL;
                        uint32_t l_1317 = 4294967295UL;
                        uint64_t l_1318 = 0UL;
                        VECTOR(int32_t, 4) l_1319 = (VECTOR(int32_t, 4))(0x63B65DE0L, (VECTOR(int32_t, 2))(0x63B65DE0L, 0x7B953F77L), 0x7B953F77L);
                        int i, j;
                        l_1316 ^= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(1L, 3L)).yxyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x20CCL, 0L)).yyxxxxxyyyxyxxxy)).s9aa1, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1311.s07)).xyyxxxxyyxyyxxxx)).s6990, (int16_t)l_1312[2][1]))).lo)).yxyx))).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1313.s1706)), (++l_1313.s7), 0x5689L, 1UL, 1UL)).s42)).xyxyxxxxxyyyyyxx)).s14))).even;
                        l_1196 = (l_1317 , (l_1318 , ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(l_1319.xy)).yyyy, ((VECTOR(int32_t, 2))((-1L), 0x4B8660EBL)).xyyy))).y));
                    }
                    l_1321 = (l_1320 = (void*)0);
                }
                l_1322 &= 0x74AE0299L;
            }
            else
            { /* block id: 570 */
                uint32_t l_1323 = 4294967295UL;
                int32_t l_1324[7][8] = {{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L},{0x5B5A9652L,0x2F773267L,0x716C0C5BL,0x26EC6FCFL,0x2F773267L,0x26EC6FCFL,0x716C0C5BL,0x2F773267L}};
                int32_t l_1325 = 0L;
                int i, j;
                l_1325 ^= (l_1324[3][4] &= l_1323);
                for (l_1324[5][0] = (-1); (l_1324[5][0] <= (-15)); l_1324[5][0] = safe_sub_func_uint8_t_u_u(l_1324[5][0], 5))
                { /* block id: 575 */
                    int32_t l_1328 = 0x38BAD5BAL;
                    for (l_1328 = 0; (l_1328 < 22); l_1328 = safe_add_func_int8_t_s_s(l_1328, 7))
                    { /* block id: 578 */
                        int32_t l_1332 = 0x0A20C100L;
                        int32_t *l_1331 = &l_1332;
                        int32_t *l_1333 = (void*)0;
                        l_1331 = (void*)0;
                        l_1333 = (void*)0;
                    }
                }
                for (l_1324[3][4] = 6; (l_1324[3][4] >= (-4)); l_1324[3][4]--)
                { /* block id: 585 */
                    int32_t l_1336 = 0x751CA52EL;
                    VECTOR(int32_t, 2) l_1344 = (VECTOR(int32_t, 2))((-5L), 1L);
                    int32_t *l_1350[4] = {&l_1336,&l_1336,&l_1336,&l_1336};
                    int i;
                    for (l_1336 = 0; (l_1336 >= (-28)); l_1336 = safe_sub_func_uint64_t_u_u(l_1336, 6))
                    { /* block id: 588 */
                        int64_t l_1339 = 0x1C9C9FE70E7A9A3BL;
                        int8_t l_1340 = 0x73L;
                        l_1340 = ((l_1325 = 0x395F119AL) , l_1339);
                    }
                    for (l_1336 = (-14); (l_1336 != 24); ++l_1336)
                    { /* block id: 594 */
                        int32_t *l_1343 = (void*)0;
                        l_1343 = (GROUP_DIVERGE(2, 1) , (void*)0);
                    }
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1344.xx)).xxxy)).w)
                    { /* block id: 597 */
                        uint32_t l_1345[6][1] = {{0x62B5B4B5L},{0x62B5B4B5L},{0x62B5B4B5L},{0x62B5B4B5L},{0x62B5B4B5L},{0x62B5B4B5L}};
                        int i, j;
                        l_1336 = (l_1344.y &= (l_1345[5][0] = 4L));
                    }
                    else
                    { /* block id: 601 */
                        uint8_t l_1346 = 255UL;
                        uint32_t l_1347 = 0UL;
                        l_1336 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-1L), (l_1344.x = l_1346), 0x47DDAAF6L, 9L)).hi)).yyxx)).x;
                        l_1347++;
                    }
                    l_1350[0] = (void*)0;
                }
                for (l_1323 = 0; (l_1323 != 48); ++l_1323)
                { /* block id: 610 */
                    VECTOR(int32_t, 16) l_1353 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1ED54E7DL), 0x1ED54E7DL), 0x1ED54E7DL, 1L, 0x1ED54E7DL, (VECTOR(int32_t, 2))(1L, 0x1ED54E7DL), (VECTOR(int32_t, 2))(1L, 0x1ED54E7DL), 1L, 0x1ED54E7DL, 1L, 0x1ED54E7DL);
                    VECTOR(int8_t, 2) l_1354 = (VECTOR(int8_t, 2))(0x53L, 0x52L);
                    int32_t l_1355 = (-1L);
                    int i;
                    l_1354.x |= ((VECTOR(int32_t, 8))(l_1353.sae2280da)).s5;
                    if (l_1355)
                    { /* block id: 612 */
                        uint32_t l_1356 = 0UL;
                        VECTOR(int16_t, 8) l_1357 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 7L), 7L), 7L, (-1L), 7L);
                        VECTOR(uint16_t, 2) l_1358 = (VECTOR(uint16_t, 2))(0UL, 0xDD05L);
                        VECTOR(int32_t, 2) l_1359 = (VECTOR(int32_t, 2))(0x063CF17CL, 0x091B19CAL);
                        VECTOR(int32_t, 8) l_1360 = (VECTOR(int32_t, 8))(0x37465BE4L, (VECTOR(int32_t, 4))(0x37465BE4L, (VECTOR(int32_t, 2))(0x37465BE4L, 0x0798BD76L), 0x0798BD76L), 0x0798BD76L, 0x37465BE4L, 0x0798BD76L);
                        VECTOR(int32_t, 2) l_1361 = (VECTOR(int32_t, 2))(0x04F4B2BEL, 4L);
                        int i;
                        l_1353.s0 |= (l_1356 , ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1357.s23)).xyyyyxxxyxyyxxxx)).odd)).s22, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1358.yx)).xxxxxxxy)).s74))).yxxxyxxy, ((VECTOR(int32_t, 8))(l_1359.xxyxyyxx))))).s64, ((VECTOR(int32_t, 4))(l_1360.s3620)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1361.xxxyxxyxxyyyyyxx)).sef))))))))).even);
                        l_1359.y = (-1L);
                    }
                    else
                    { /* block id: 615 */
                        int32_t *l_1362 = (void*)0;
                        int32_t l_1364 = 0x3E8BE419L;
                        int32_t *l_1363 = &l_1364;
                        int8_t l_1365[5][1];
                        uint32_t l_1366 = 0xE7497181L;
                        int32_t *l_1369 = (void*)0;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1365[i][j] = 0x3FL;
                        }
                        l_1363 = (l_1362 = (void*)0);
                        l_1355 |= l_1365[4][0];
                        --l_1366;
                        l_1369 = (void*)0;
                    }
                }
            }
            l_1370 &= 1L;
            l_1374 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1371.s58d9a127b8a3915e)))).even, ((VECTOR(int32_t, 4))(l_1372.yywx)).xyzxxwzw, ((VECTOR(int32_t, 4))(l_1373.yxxy)).wwxxyywz))))).s5;
            unsigned int result = 0;
            int l_1195_i0, l_1195_i1, l_1195_i2;
            for (l_1195_i0 = 0; l_1195_i0 < 8; l_1195_i0++) {
                for (l_1195_i1 = 0; l_1195_i1 < 8; l_1195_i1++) {
                    for (l_1195_i2 = 0; l_1195_i2 < 4; l_1195_i2++) {
                        result += l_1195[l_1195_i0][l_1195_i1][l_1195_i2];
                    }
                }
            }
            result += l_1370;
            result += l_1371.sf;
            result += l_1371.se;
            result += l_1371.sd;
            result += l_1371.sc;
            result += l_1371.sb;
            result += l_1371.sa;
            result += l_1371.s9;
            result += l_1371.s8;
            result += l_1371.s7;
            result += l_1371.s6;
            result += l_1371.s5;
            result += l_1371.s4;
            result += l_1371.s3;
            result += l_1371.s2;
            result += l_1371.s1;
            result += l_1371.s0;
            result += l_1372.w;
            result += l_1372.z;
            result += l_1372.y;
            result += l_1372.x;
            result += l_1373.y;
            result += l_1373.x;
            result += l_1374;
            atomic_add(&p_1531->l_special_values[33], result);
        }
        else
        { /* block id: 626 */
            (1 + 1);
        }
    }
    if (((safe_mul_func_uint8_t_u_u(p_1531->g_198.z, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((safe_sub_func_uint8_t_u_u((((((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(0x0299BCCE60D00846L, 0xA6A34A28C4E7E834L, ((VECTOR(uint64_t, 2))(0xDABC0DAE9E45F56AL, 0x7E735E17E5DFBE7CL)), 18446744073709551607UL, 0x9DFF2E3603835369L, 0x36E92D106BC9589CL, 0x17EC33F001E22084L)).s57, ((VECTOR(uint64_t, 4))(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1379.s41)), 0x6D3C622FL, 0x7CC077C8L)).x < ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(p_1531->g_1380.xxyyyxxy)).s3700731157137166, ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(0x6746FB7EL, p_1531->g_699[0], 0x39A96952L, (((VECTOR(int64_t, 4))(l_1381.sf019)).z || p_20), ((((p_1531->g_1384[2][2][0] = &p_1531->g_704) != &p_1531->g_704) , (safe_mod_func_int16_t_s_s(((((VECTOR(int16_t, 4))(l_1387.s3457)).x != p_1531->g_126[1]) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0x4A3CL)).yxxyxxyxxyxyyxxy)).s6), ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(p_1531->g_858, 0)) , (+p_1531->g_5[0])), (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*p_1531->g_566) = p_20), p_1531->g_926)), (-5L))))) | p_20) > p_20), FAKE_DIVERGE(p_1531->group_1_offset, get_group_id(1), 10))), p_20)), p_20)) || 1L)))) & 0UL), p_1531->g_1047.y, 0xE66C82CFL, 0xE7F1F5ADL)), ((VECTOR(uint32_t, 8))(0x6958E2F1L)), ((VECTOR(uint32_t, 8))(4294967294UL))))).s2705764614243273))).s3ff3, ((VECTOR(uint32_t, 4))(0x308016A0L)), ((VECTOR(uint32_t, 4))(0x4F464BE6L))))).w) <= 0x75E3L), ((VECTOR(uint64_t, 2))(18446744073709551608UL)), 0x83A8885C5599A1E7L)).hi))).xyyxxxxx))).lo, ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 4))(1UL))))).x ^ p_20) == 0x2598L) || 0x1B48L), p_1531->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1531->tid, 33))])), ((VECTOR(int8_t, 2))(1L)), 0x48L, (*p_1531->g_566), (*p_1531->g_568), (-10L), 0x78L)), 0x50L, p_20, 0x68L, 1L, 0x23L, 8L, (-1L), 0x4AL)).se)) | 1UL))
    { /* block id: 632 */
        uint32_t *l_1411 = (void*)0;
        int32_t l_1412 = 0x4B063928L;
        int32_t l_1422 = (-2L);
        int32_t l_1425 = 1L;
        int32_t l_1427[8] = {0L,(-1L),0L,0L,(-1L),0L,0L,(-1L)};
        int16_t ***l_1434 = (void*)0;
        int16_t ***l_1435 = &l_1432;
        int16_t **l_1437[9];
        int16_t ***l_1436 = &l_1437[0];
        int i;
        for (i = 0; i < 9; i++)
            l_1437[i] = (void*)0;
        for (p_1531->g_1078 = (-7); (p_1531->g_1078 >= 10); p_1531->g_1078++)
        { /* block id: 635 */
            uint32_t *l_1410 = (void*)0;
            uint32_t **l_1409 = &l_1410;
            int32_t **l_1417 = &p_1531->g_106;
            int16_t *l_1424 = (void*)0;
            for (p_1531->g_371 = 0; (p_1531->g_371 < 20); p_1531->g_371++)
            { /* block id: 638 */
                int32_t *l_1406 = &p_1531->g_6;
                return l_1406;
            }
            l_1427[1] = (((((safe_sub_func_int64_t_s_s((l_1425 = ((((l_1422 = (((((*l_1409) = l_1158[1][6]) != l_1411) | ((((l_1412 = ((VECTOR(uint8_t, 2))(0UL, 255UL)).hi) > (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_20, (l_1417 != (((&p_1531->g_181 != ((safe_div_func_int32_t_s_s((p_1531->g_553 || (p_1531->g_6 & (safe_sub_func_int64_t_s_s(l_1422, ((p_20 && p_20) & p_1531->g_393.y))))), 0xD68EE7B1L)) , l_1423)) , p_20) , &p_1531->g_576)))), 65528UL))) && GROUP_DIVERGE(0, 1)) == p_1531->g_1148.s2)) || 0x2FL)) == 65535UL) && p_1531->g_4) | l_1425)), p_1531->g_1148.s5)) <= l_1426) , p_20) ^ l_1427[6]) , p_20);
        }
        (*l_1436) = ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_1430.s1532023752441137)).s5, (((VECTOR(uint64_t, 16))(l_1431.sbfe08c32e5851daf)).s8 , (*p_1531->g_1085)))) , ((*l_1435) = l_1432));
        --p_1531->g_1438[0];
    }
    else
    { /* block id: 650 */
        uint64_t l_1441 = 0UL;
        ++l_1441;
    }
    if ((*p_1531->g_1085))
    { /* block id: 653 */
        int16_t l_1444 = 0x35D5L;
        int32_t l_1445 = (-9L);
        int32_t l_1447 = 0x1CF19E78L;
        int32_t l_1448 = 0x6CE98651L;
        int8_t l_1449 = 0x11L;
        int32_t l_1450 = (-8L);
        int32_t l_1451 = 0x05277AB7L;
        int32_t l_1452 = 0x0BAE76E5L;
        int32_t l_1453 = 0x5769F9F7L;
        int32_t l_1454 = 0x5DB82A5CL;
        int32_t l_1455 = 1L;
        int32_t l_1456 = 0x7374EE5BL;
        int32_t l_1457 = 8L;
        uint32_t l_1458[1][3];
        VECTOR(int32_t, 2) l_1467 = (VECTOR(int32_t, 2))(0x7FABD36CL, (-1L));
        uint16_t l_1486 = 0x3B20L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1458[i][j] = 4294967289UL;
        }
        ++l_1458[0][2];
        for (p_1531->g_124 = 28; (p_1531->g_124 != 11); p_1531->g_124 = safe_sub_func_uint32_t_u_u(p_1531->g_124, 1))
        { /* block id: 657 */
            VECTOR(uint32_t, 4) l_1477 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967291UL), 4294967291UL);
            VECTOR(int16_t, 2) l_1481 = (VECTOR(int16_t, 2))(0x03E1L, 0x1725L);
            int32_t l_1487 = 0L;
            int32_t l_1488 = 0x628A565FL;
            int32_t l_1489 = (-1L);
            int32_t l_1490 = 0x7C909CF5L;
            int32_t l_1491 = 0x3ABDC8B4L;
            int32_t l_1492 = 0x1B1C5DCBL;
            int32_t l_1493 = 0x1F720C89L;
            int i;
            p_1531->g_93 ^= ((*p_1531->g_1085) = (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_1467.yyxy)).x, ((((((void*)0 != l_1468) && (safe_unary_minus_func_int32_t_s((p_20 || p_1531->g_324[4])))) & p_1531->g_3[1][0]) <= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))((safe_mul_func_uint8_t_u_u((p_20 <= (~(((VECTOR(int32_t, 2))(1L, 0x6A1F4EEAL)).hi ^ ((((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(6UL, 4294967295UL)), ((VECTOR(uint32_t, 16))(l_1477.yzzzzzxxyxwwyxxy)).seb))).lo != (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_1480.s20d2)).w, 0))) != l_1449)))), p_20)), 6L, ((VECTOR(int16_t, 4))(l_1481.xxxy)), 1L, 0x60EDL)).s6, (safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(9UL, p_20)), l_1486))))) & 0x6E21BEE0L))), l_1481.x)));
            l_1494++;
        }
    }
    else
    { /* block id: 662 */
        VECTOR(int16_t, 8) l_1499 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0BB9L), 0x0BB9L), 0x0BB9L, (-1L), 0x0BB9L);
        int32_t l_1500 = (-1L);
        int32_t l_1507 = (-1L);
        uint32_t *l_1508 = &p_1531->g_929;
        int32_t **l_1516 = (void*)0;
        int32_t ***l_1515 = &l_1516;
        uint16_t *l_1517 = &p_1531->g_181;
        int32_t l_1518 = 0x497ACAD3L;
        int32_t l_1519 = 1L;
        int i;
        l_1500 |= (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_1499.s4426266600557776)).s1, 0));
        l_1158[0][4] = &l_1500;
        l_1519 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_1507, ((*l_1508) = p_20))), 1UL)), (safe_add_func_int16_t_s_s((l_1518 = ((l_1500 = l_1507) == (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((0x651D9059L | p_20) | ((*l_1517) = ((p_20 , l_1499.s6) != (((l_1515 == &p_1531->g_592) | 0UL) , p_20)))), 0x40L)), l_1507)))), p_20))));
    }
    for (p_1531->g_904 = 0; (p_1531->g_904 > (-22)); p_1531->g_904 = safe_sub_func_uint8_t_u_u(p_1531->g_904, 8))
    { /* block id: 673 */
        VECTOR(uint16_t, 16) l_1522 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4DE8L), 0x4DE8L), 0x4DE8L, 1UL, 0x4DE8L, (VECTOR(uint16_t, 2))(1UL, 0x4DE8L), (VECTOR(uint16_t, 2))(1UL, 0x4DE8L), 1UL, 0x4DE8L, 1UL, 0x4DE8L);
        int32_t *l_1523 = (void*)0;
        int32_t **l_1527[10] = {&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87,&p_1531->g_87};
        int32_t ***l_1526 = &l_1527[8];
        int i;
        l_1522.s5 = p_20;
        (*p_1531->g_990) |= (((VECTOR(int32_t, 4))((-3L), (p_20 & ((((l_1523 != (l_1524 , l_1523)) || (0x36E94089L | p_20)) , &p_1531->g_858) != (l_1525 = &p_1531->g_858))), 6L, 8L)).y | (l_1526 != (void*)0));
    }
    return (*p_1531->g_954);
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_198 p_1531->g_258 p_1531->g_36 p_1531->g_97 p_1531->g_610 p_1531->g_611 p_1531->g_398 p_1531->g_399 p_1531->g_990 p_1531->g_56 p_1531->g_93 p_1531->g_1147 p_1531->g_1148 p_1531->g_904 p_1531->g_107
 * writes: p_1531->g_56 p_1531->g_126 p_1531->g_6 p_1531->g_88 p_1531->g_36 p_1531->g_97 p_1531->g_904 p_1531->g_93 p_1531->g_107
 */
uint32_t  func_28(int32_t * p_29, struct S0 * p_1531)
{ /* block id: 448 */
    VECTOR(uint32_t, 2) l_1121 = (VECTOR(uint32_t, 2))(1UL, 0x3BBE683FL);
    int32_t *l_1122 = &p_1531->g_36;
    uint8_t *l_1125 = &p_1531->g_97;
    uint16_t l_1134 = 0x73E7L;
    uint32_t l_1135 = 0UL;
    uint32_t *l_1136 = (void*)0;
    uint32_t *l_1137[7][1][8] = {{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}},{{&p_1531->g_929,&p_1531->g_95[4],(void*)0,&p_1531->g_929,&p_1531->g_929,(void*)0,(void*)0,&p_1531->g_929}}};
    int32_t l_1138[7] = {0x2FC99180L,1L,0x2FC99180L,0x2FC99180L,1L,0x2FC99180L,0x2FC99180L};
    int32_t l_1139 = 9L;
    int32_t *l_1140 = &p_1531->g_904;
    int32_t *l_1141 = &p_1531->g_93;
    VECTOR(int16_t, 2) l_1146 = (VECTOR(int16_t, 2))((-10L), 0x6D41L);
    VECTOR(uint32_t, 16) l_1149 = (VECTOR(uint32_t, 16))(0xE5D87609L, (VECTOR(uint32_t, 4))(0xE5D87609L, (VECTOR(uint32_t, 2))(0xE5D87609L, 0UL), 0UL), 0UL, 0xE5D87609L, 0UL, (VECTOR(uint32_t, 2))(0xE5D87609L, 0UL), (VECTOR(uint32_t, 2))(0xE5D87609L, 0UL), 0xE5D87609L, 0UL, 0xE5D87609L, 0UL);
    VECTOR(uint64_t, 2) l_1150 = (VECTOR(uint64_t, 2))(0x932254433E5C8E28L, 1UL);
    int i, j, k;
    (*l_1141) ^= ((*l_1140) = ((l_1139 = ((safe_mod_func_int64_t_s_s(((l_1138[5] = (safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((p_1531->g_198.z < (safe_lshift_func_uint16_t_u_s((((VECTOR(uint32_t, 8))(0x1A472F41L, 0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1121.xxxxyxyy)).s26)), 0xE57A9FB0L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x4A40EC2FL, 0x12F8869DL)).yyyx)).odd)), 1UL)).s5 & (((*l_1122) &= ((*p_1531->g_258) = l_1121.y)) , (!((safe_add_func_uint8_t_u_u((++(*l_1125)), (safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((((p_29 = p_29) == (void*)0) | ((l_1121.x < (*p_1531->g_610)) || 0x63EEC8F2L)), p_1531->g_398.s1)) , l_1134), l_1121.x)), l_1121.y)))) == (-3L))))), l_1135))), 0x7407C3ED95B6B535L)) & p_1531->g_399.y), l_1121.y))) >= l_1121.y), 0x401459273D1B991DL)) || 5L)) , (*p_1531->g_990)));
    (*l_1140) = ((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551615UL, (+(((*l_1141) == ((VECTOR(int16_t, 4))(l_1146.yyxy)).y) || (*p_1531->g_990))))), p_1531->g_1147)) != (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1531->g_1148.s50713675)))).lo)), 0x0C82C46AL, ((VECTOR(uint32_t, 2))(l_1149.s7d)), 1UL)))).s1 , &p_1531->g_549) == (void*)0) < ((*l_1140) | (((VECTOR(uint64_t, 8))(l_1150.xyyyyxxy)).s4 || (*l_1141)))));
    for (p_1531->g_107 = 0; (p_1531->g_107 != (-1)); p_1531->g_107 = safe_sub_func_int64_t_s_s(p_1531->g_107, 9))
    { /* block id: 460 */
        int64_t l_1153 = 0x22804D89F91E0134L;
        int64_t *l_1154 = &l_1153;
        int32_t l_1155 = (-5L);
        l_1155 = (((VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL)).lo > ((*l_1154) = (l_1153 < 2L)));
    }
    return (*l_1141);
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_592 p_1531->g_85 p_1531->g_124 p_1531->g_990 p_1531->g_56 p_1531->g_566 p_1531->g_553 p_1531->g_926 p_1531->g_568
 * writes: p_1531->g_106 p_1531->g_324
 */
int32_t * func_30(uint32_t  p_31, int32_t  p_32, int32_t * p_33, int32_t  p_34, struct S0 * p_1531)
{ /* block id: 441 */
    int32_t **l_1087 = &p_1531->g_106;
    int64_t *l_1094 = &p_1531->g_124;
    int64_t **l_1093 = &l_1094;
    int64_t ***l_1092 = &l_1093;
    VECTOR(uint8_t, 2) l_1095 = (VECTOR(uint8_t, 2))(0UL, 0UL);
    uint16_t *l_1096 = &p_1531->g_324[1];
    int32_t *l_1097 = &p_1531->g_36;
    VECTOR(uint16_t, 16) l_1106 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 65535UL), 65535UL), 65535UL, 5UL, 65535UL, (VECTOR(uint16_t, 2))(5UL, 65535UL), (VECTOR(uint16_t, 2))(5UL, 65535UL), 5UL, 65535UL, 5UL, 65535UL);
    VECTOR(uint16_t, 16) l_1107 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 7UL), 7UL), 7UL, 65535UL, 7UL, (VECTOR(uint16_t, 2))(65535UL, 7UL), (VECTOR(uint16_t, 2))(65535UL, 7UL), 65535UL, 7UL, 65535UL, 7UL);
    VECTOR(int32_t, 4) l_1110 = (VECTOR(int32_t, 4))(0x65442347L, (VECTOR(int32_t, 2))(0x65442347L, (-1L)), (-1L));
    int i;
    (*l_1087) = p_33;
    (*l_1087) = p_33;
    l_1110.w = (safe_add_func_uint16_t_u_u(((*l_1096) = (safe_sub_func_uint8_t_u_u((l_1092 != (void*)0), ((VECTOR(uint8_t, 16))(l_1095.yxyyyyyyyxyxxxyy)).sf))), (+(0x74736157L == (((*p_1531->g_592) != (l_1097 = l_1097)) ^ ((safe_div_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1106.sc0)), 65534UL, ((VECTOR(uint16_t, 4))(l_1107.s88c3)), 0xC1ACL)))))))))).s0, (safe_mul_func_int8_t_s_s(((((VECTOR(int32_t, 16))(l_1110.wyyyxyzxwzzywxyy)).sf , p_1531->g_124) > l_1107.s8), (((VECTOR(uint16_t, 2))(65531UL, 0xB03DL)).hi | (safe_add_func_int64_t_s_s(((+(GROUP_DIVERGE(1, 1) , ((*p_1531->g_990) , FAKE_DIVERGE(p_1531->local_0_offset, get_local_id(0), 10)))) && ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(0UL, (!((1UL & (*p_1531->g_566)) != 1UL)), 0UL, 4294967293UL, ((VECTOR(uint32_t, 4))(4294967292UL)), p_1531->g_926, ((VECTOR(uint32_t, 4))(0xBDCFDAE6L)), ((VECTOR(uint32_t, 2))(0UL)), 0x5BDF4D91L)).s7c, ((VECTOR(uint32_t, 2))(4294967295UL))))).xxyyyyxx)).s1), GROUP_DIVERGE(1, 1)))))))), 0x3650L)), l_1106.se)) < (*p_1531->g_568)), p_31)) & 7UL))))));
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_929 p_1531->g_990 p_1531->g_56 p_1531->g_70 p_1531->g_400 p_1531->g_1011 p_1531->g_568 p_1531->g_553 p_1531->g_844 p_1531->g_973 p_1531->g_95 p_1531->g_803 p_1531->g_858 p_1531->g_1047 p_1531->g_23 p_1531->g_1070 p_1531->g_214 p_1531->g_1078 p_1531->g_124 p_1531->g_1085
 * writes: p_1531->g_929 p_1531->g_56 p_1531->g_553 p_1531->g_667 p_1531->g_214 p_1531->g_124 p_1531->g_126
 */
int32_t * func_37(uint16_t  p_38, uint32_t  p_39, uint32_t  p_40, int8_t  p_41, uint32_t  p_42, struct S0 * p_1531)
{ /* block id: 420 */
    int32_t l_987[6][10][2] = {{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}},{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}},{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}},{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}},{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}},{{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)},{0x426F907FL,(-1L)}}};
    VECTOR(uint16_t, 2) l_997 = (VECTOR(uint16_t, 2))(65534UL, 0x773EL);
    VECTOR(uint16_t, 2) l_998 = (VECTOR(uint16_t, 2))(0x8C71L, 0x059FL);
    uint32_t l_1002[3];
    VECTOR(uint32_t, 4) l_1005 = (VECTOR(uint32_t, 4))(0x7287FE07L, (VECTOR(uint32_t, 2))(0x7287FE07L, 4294967295UL), 4294967295UL);
    uint8_t l_1006 = 1UL;
    int64_t l_1012 = 0x3E122B95B84E6558L;
    VECTOR(int64_t, 2) l_1035 = (VECTOR(int64_t, 2))(9L, 0x75F1DEF4DE5E4D40L);
    int32_t **l_1037 = &p_1531->g_258;
    int32_t ***l_1036 = &l_1037;
    uint32_t l_1038[7] = {0UL,0x21014819L,0UL,0UL,0x21014819L,0UL,0UL};
    VECTOR(int8_t, 4) l_1048 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x22L), 0x22L);
    int64_t ***l_1059 = (void*)0;
    VECTOR(uint32_t, 4) l_1064 = (VECTOR(uint32_t, 4))(0x2CE7539BL, (VECTOR(uint32_t, 2))(0x2CE7539BL, 0x0E9B7748L), 0x0E9B7748L);
    int32_t *l_1086[9][10] = {{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0,(void*)0,(void*)0,&p_1531->g_1078,(void*)0,(void*)0}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1002[i] = 0UL;
    for (p_1531->g_929 = 0; (p_1531->g_929 == 7); p_1531->g_929 = safe_add_func_uint64_t_u_u(p_1531->g_929, 1))
    { /* block id: 423 */
        int16_t l_988 = (-7L);
        uint16_t *l_999[5][6] = {{(void*)0,(void*)0,&p_1531->g_181,(void*)0,&p_1531->g_181,(void*)0},{(void*)0,(void*)0,&p_1531->g_181,(void*)0,&p_1531->g_181,(void*)0},{(void*)0,(void*)0,&p_1531->g_181,(void*)0,&p_1531->g_181,(void*)0},{(void*)0,(void*)0,&p_1531->g_181,(void*)0,&p_1531->g_181,(void*)0},{(void*)0,(void*)0,&p_1531->g_181,(void*)0,&p_1531->g_181,(void*)0}};
        int32_t *l_1013 = &l_987[4][4][0];
        int32_t *l_1014[8][1] = {{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107},{&p_1531->g_107}};
        int i, j;
        (*p_1531->g_990) |= ((safe_lshift_func_uint8_t_u_u(l_987[5][3][1], 6)) | l_988);
        (*p_1531->g_990) = ((((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s(0x78D4L, (+(p_38 = (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_997.yyyxxxxxxyxxyxxy)).s1d)).yyxx)).zxwxzwxx)).odd)))).xwzzzxzzxwwzyyyz, ((VECTOR(uint16_t, 16))(l_998.yyxxxyxxyxyxyyyx))))).s3, p_40)))))), l_988)) , (((p_1531->g_70 ^ ((((l_988 , ((*l_1013) = (safe_rshift_func_int8_t_s_u((((p_1531->g_400.y & (!l_1002[0])) ^ ((safe_lshift_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(l_1005.xxwz)).yzzywyzw))).s0426031141660315)).sa >= l_1006), (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1531->g_1011.xxwyzwwy)))), (int8_t)(*p_1531->g_568)))).hi, ((VECTOR(int8_t, 4))(6L))))).z && p_38), p_42)), 0xE2L)))) , l_1012)) == p_39), GROUP_DIVERGE(1, 1))))) , 0x18FA5673L) > 0UL) , 0UL)) >= 0x216035A8889075CDL) == p_40)) , FAKE_DIVERGE(p_1531->global_1_offset, get_global_id(1), 10)) || 0UL);
    }
    if ((l_1002[0] > (safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1531->group_0_offset, get_group_id(0), 10), l_1002[0])) != (((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1531->global_1_offset, get_global_id(1), 10), (-1L))) == (safe_div_func_int32_t_s_s((0xEF21AD9777FC5699L | ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x4D87L, (-2L))).lo, (safe_sub_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_1035.yyxxyxyx)).s2, ((l_1012 > ((l_1036 != (void*)0) || p_1531->g_844.s2)) == ((*p_1531->g_568) = 3L)))) , l_987[4][2][0]), 0x4C0D52D35CEB4E91L)) , p_40), p_1531->g_973.w)))) != l_1002[0])), 1UL))) || p_1531->g_95[8])), p_1531->g_803.y)) , l_1038[6]) < l_1005.y), p_40)) < p_1531->g_858), FAKE_DIVERGE(p_1531->group_1_offset, get_group_id(1), 10)))))
    { /* block id: 430 */
        uint8_t *l_1067 = (void*)0;
        uint8_t *l_1068[3];
        int32_t l_1069 = 0x272CA83DL;
        int16_t *l_1071 = &p_1531->g_214;
        int32_t l_1072 = 0x299A6C90L;
        int i;
        for (i = 0; i < 3; i++)
            l_1068[i] = (void*)0;
        l_1072 &= ((safe_add_func_int16_t_s_s(((-10L) & ((l_1002[2] <= (((*l_1071) |= ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1531->g_1047.xzwyzxzwyxyyyzww)).s8, (((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_1048.xzww)), (int8_t)(safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(0x08L, (safe_rshift_func_int16_t_s_u((((void*)0 == l_1059) <= (p_1531->g_1047.x && (safe_sub_func_int8_t_s_s(l_1038[6], (p_1531->g_23.s8 != (((VECTOR(uint32_t, 8))(l_1064.zzzwxzyz)).s0 == ((FAKE_DIVERGE(p_1531->group_2_offset, get_group_id(2), 10) <= ((safe_sub_func_uint8_t_u_u((p_1531->g_667.s3 = p_39), 0x52L)) == l_998.y)) > l_1069))))))), 8)))) , p_40) | 0x5338C7EDL), (-9L))), l_1069)), l_1069))))), p_38, 0L, 0L)).lo, ((VECTOR(int8_t, 4))(0x38L))))).wxwwxwxw)).s66))))).xxyxxxyxyyxxxyxy, ((VECTOR(int8_t, 16))(5L))))).s1ac2)).zzwyywwywwwwyxwy, (int8_t)1L, (int8_t)l_1038[6]))).sa , p_41))), p_1531->g_1070)) > 0UL)) == l_1002[0])) ^ p_42)), 65535UL)) , p_40);
    }
    else
    { /* block id: 434 */
        int32_t *l_1073 = &p_1531->g_126[5];
        int64_t *l_1079 = &p_1531->g_124;
        uint32_t *l_1082 = &l_1002[1];
        l_1073 = (void*)0;
        (*p_1531->g_1085) = ((safe_lshift_func_uint16_t_u_s(p_39, 10)) != ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((p_1531->g_1047.x > (safe_mul_func_uint16_t_u_u((p_1531->g_1078 ^ ((*l_1079) ^= p_42)), (safe_div_func_int64_t_s_s(l_998.x, (((*l_1082) = ((p_39 , 3L) , 0x755C1F16L)) , ((~(safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(4L, 1L)).even, 1L))) , FAKE_DIVERGE(p_1531->group_2_offset, get_group_id(2), 10)))))))), ((VECTOR(uint32_t, 2))(6UL)), 1UL)).zyxxzwxz)).s5);
    }
    return l_1086[3][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_106 p_1531->g_126 p_1531->g_6 p_1531->g_210 p_1531->g_107 p_1531->g_954
 * writes: p_1531->g_126 p_1531->g_6 p_1531->g_210 p_1531->g_107 p_1531->g_106
 */
uint32_t  func_46(uint64_t  p_47, int32_t * p_48, int64_t  p_49, struct S0 * p_1531)
{ /* block id: 402 */
    int64_t *l_932 = &p_1531->g_124;
    int64_t **l_931 = &l_932;
    int64_t *l_934[9];
    int64_t **l_933 = &l_934[1];
    int32_t l_939 = 0x3B9A07F2L;
    int32_t l_940 = (-1L);
    int32_t l_941 = 0x145315B2L;
    int32_t l_942 = (-3L);
    int32_t l_943 = 0L;
    int32_t l_944 = (-8L);
    int32_t l_945 = (-8L);
    int16_t l_946[5][3] = {{0x4311L,0x7DB9L,0x715AL},{0x4311L,0x7DB9L,0x715AL},{0x4311L,0x7DB9L,0x715AL},{0x4311L,0x7DB9L,0x715AL},{0x4311L,0x7DB9L,0x715AL}};
    uint16_t l_947 = 0x7FD9L;
    VECTOR(int8_t, 16) l_957 = (VECTOR(int8_t, 16))(0x14L, (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x22L), 0x22L), 0x22L, 0x14L, 0x22L, (VECTOR(int8_t, 2))(0x14L, 0x22L), (VECTOR(int8_t, 2))(0x14L, 0x22L), 0x14L, 0x22L, 0x14L, 0x22L);
    uint32_t *l_968 = &p_1531->g_152;
    VECTOR(int8_t, 8) l_974 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x2EL), 0x2EL), 0x2EL, (-5L), 0x2EL);
    VECTOR(int8_t, 16) l_977 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x26L), 0x26L), 0x26L, 6L, 0x26L, (VECTOR(int8_t, 2))(6L, 0x26L), (VECTOR(int8_t, 2))(6L, 0x26L), 6L, 0x26L, 6L, 0x26L);
    uint8_t *l_978 = (void*)0;
    uint8_t *l_979[8][3][8] = {{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}},{{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97},{&p_1531->g_97,&p_1531->g_97,&p_1531->g_97,&p_1531->g_858,&p_1531->g_858,&p_1531->g_97,(void*)0,&p_1531->g_97}}};
    int32_t *l_980 = (void*)0;
    int32_t *l_981 = &l_939;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_934[i] = (void*)0;
    if (((*p_1531->g_106) &= (((*l_931) = &p_49) == ((*l_933) = &p_49))))
    { /* block id: 406 */
        int32_t l_935 = 7L;
        int32_t *l_936 = (void*)0;
        int32_t *l_937 = &p_1531->g_6;
        int32_t *l_938[5][5] = {{(void*)0,&p_1531->g_93,(void*)0,(void*)0,&p_1531->g_93},{(void*)0,&p_1531->g_93,(void*)0,(void*)0,&p_1531->g_93},{(void*)0,&p_1531->g_93,(void*)0,(void*)0,&p_1531->g_93},{(void*)0,&p_1531->g_93,(void*)0,(void*)0,&p_1531->g_93},{(void*)0,&p_1531->g_93,(void*)0,(void*)0,&p_1531->g_93}};
        int64_t l_950 = (-7L);
        VECTOR(uint64_t, 2) l_951 = (VECTOR(uint64_t, 2))(0x3F4318063FEE0984L, 18446744073709551612UL);
        int i, j;
        l_947--;
        l_951.x++;
    }
    else
    { /* block id: 409 */
        return p_49;
    }
    (*p_1531->g_954) = p_48;
    l_981 = (*p_1531->g_954);
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_6 p_1531->g_comm_values p_1531->g_70 p_1531->g_56 p_1531->g_85 p_1531->g_87 p_1531->g_93 p_1531->g_95 p_1531->g_88 p_1531->g_23 p_1531->g_106 p_1531->g_107 p_1531->g_97 p_1531->l_comm_values p_1531->g_126 p_1531->g_210 p_1531->g_214 p_1531->g_198 p_1531->g_181 p_1531->g_152 p_1531->g_124 p_1531->g_371 p_1531->g_324 p_1531->g_393 p_1531->g_553 p_1531->g_803 p_1531->g_623 p_1531->g_398 p_1531->g_348 p_1531->g_566 p_1531->g_399 p_1531->g_844 p_1531->g_568 p_1531->g_576 p_1531->g_904 p_1531->g_926
 * writes: p_1531->g_6 p_1531->g_56 p_1531->g_70 p_1531->g_93 p_1531->g_95 p_1531->g_106 p_1531->g_97 p_1531->g_107 p_1531->g_124 p_1531->g_126 p_1531->g_152 p_1531->g_88 p_1531->g_23 p_1531->g_214 p_1531->g_210 p_1531->g_87 p_1531->g_258 p_1531->g_198 p_1531->g_181 p_1531->g_324 p_1531->g_371 p_1531->g_348 p_1531->g_553 p_1531->g_566 p_1531->g_568 p_1531->g_576 p_1531->g_784 p_1531->g_393 p_1531->g_929
 */
int32_t * func_50(int32_t  p_51, struct S0 * p_1531)
{ /* block id: 26 */
    int32_t *l_89 = (void*)0;
    int32_t l_98 = (-1L);
    int32_t l_99 = 3L;
    int32_t *l_201 = &l_98;
    uint32_t *l_243 = &p_1531->g_210;
    int32_t l_600[7][9][4] = {{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}},{{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L},{0x5F7AAC23L,0x0C8AE4DCL,(-1L),0x2378EEE9L}}};
    uint16_t *l_621 = (void*)0;
    VECTOR(int8_t, 4) l_628 = (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0L), 0L);
    uint16_t l_656 = 0xEEE5L;
    int16_t l_698 = 0x1714L;
    int8_t l_714[2][9][3] = {{{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L}},{{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L},{0x4BL,9L,0x60L}}};
    VECTOR(int32_t, 16) l_796 = (VECTOR(int32_t, 16))(0x4356508EL, (VECTOR(int32_t, 4))(0x4356508EL, (VECTOR(int32_t, 2))(0x4356508EL, (-6L)), (-6L)), (-6L), 0x4356508EL, (-6L), (VECTOR(int32_t, 2))(0x4356508EL, (-6L)), (VECTOR(int32_t, 2))(0x4356508EL, (-6L)), 0x4356508EL, (-6L), 0x4356508EL, (-6L));
    VECTOR(uint16_t, 2) l_816 = (VECTOR(uint16_t, 2))(0x69A9L, 0UL);
    uint32_t *l_856[5][9] = {{&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371},{&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371},{&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371},{&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371},{&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371,&p_1531->g_371,(void*)0,&p_1531->g_371,&p_1531->g_371}};
    VECTOR(uint16_t, 4) l_887 = (VECTOR(uint16_t, 4))(0x7807L, (VECTOR(uint16_t, 2))(0x7807L, 7UL), 7UL);
    VECTOR(uint32_t, 2) l_889 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
    VECTOR(int16_t, 2) l_893 = (VECTOR(int16_t, 2))(0x7783L, 1L);
    uint32_t l_925 = 0x1BA3D0BDL;
    int i, j, k;
    for (p_1531->g_6 = 0; (p_1531->g_6 >= 29); p_1531->g_6 = safe_add_func_int32_t_s_s(p_1531->g_6, 3))
    { /* block id: 29 */
        int32_t *l_100 = &p_1531->g_6;
        int32_t l_599 = (-6L);
        int32_t l_635 = 0x32D7C13AL;
        int32_t l_636 = 0x1D7803B8L;
        int32_t l_638 = (-9L);
        int32_t l_640 = 0L;
        int32_t l_642 = (-9L);
        int32_t l_645 = (-1L);
        int32_t l_651 = 0x268A8D66L;
        int32_t l_652[2];
        int8_t l_677 = 0x27L;
        uint32_t l_711[10][7][3] = {{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}},{{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L},{0xF72D5DE2L,0xF72D5DE2L,0xF72D5DE2L}}};
        int64_t *l_723[2];
        int64_t **l_722 = &l_723[0];
        int32_t *l_787 = &l_652[0];
        int32_t *l_788 = &l_599;
        int32_t *l_789[1];
        uint16_t l_790 = 0xB9F4L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_652[i] = 0x22584AA9L;
        for (i = 0; i < 2; i++)
            l_723[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_789[i] = (void*)0;
        for (p_51 = 0; (p_51 < (-15)); p_51 = safe_sub_func_uint8_t_u_u(p_51, 7))
        { /* block id: 32 */
            int32_t l_76 = 0L;
            int64_t *l_587 = (void*)0;
            int64_t **l_586[9][8] = {{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587},{(void*)0,&l_587,&l_587,&l_587,(void*)0,(void*)0,&l_587,&l_587}};
            int64_t ***l_585[4][3][2] = {{{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]}},{{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]}},{{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]}},{{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]},{&l_586[0][5],&l_586[0][5]}}};
            int32_t l_594 = 0x69B1ACDCL;
            int32_t l_595 = (-1L);
            int32_t l_596 = (-1L);
            int32_t l_597 = 0x5D266DB1L;
            int32_t l_598[2];
            VECTOR(int64_t, 8) l_616 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x63527995509EF8FBL), 0x63527995509EF8FBL), 0x63527995509EF8FBL, (-1L), 0x63527995509EF8FBL);
            VECTOR(int8_t, 16) l_622 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-3L)), (-3L)), (-3L), (-8L), (-3L), (VECTOR(int8_t, 2))((-8L), (-3L)), (VECTOR(int8_t, 2))((-8L), (-3L)), (-8L), (-3L), (-8L), (-3L));
            int16_t l_643 = 0x5CF6L;
            VECTOR(uint16_t, 16) l_666 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x74EBL), 0x74EBL), 0x74EBL, 65535UL, 0x74EBL, (VECTOR(uint16_t, 2))(65535UL, 0x74EBL), (VECTOR(uint16_t, 2))(65535UL, 0x74EBL), 65535UL, 0x74EBL, 65535UL, 0x74EBL);
            int32_t **l_783[1];
            int32_t ***l_782[3][3] = {{&l_783[0],&l_783[0],&l_783[0]},{&l_783[0],&l_783[0],&l_783[0]},{&l_783[0],&l_783[0],&l_783[0]}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_598[i] = 0x546CC1F4L;
            for (i = 0; i < 1; i++)
                l_783[i] = (void*)0;
            for (p_1531->g_56 = 0; (p_1531->g_56 > (-29)); p_1531->g_56 = safe_sub_func_uint32_t_u_u(p_1531->g_56, 9))
            { /* block id: 35 */
                int32_t *l_69 = &p_1531->g_70;
                int32_t *l_92 = &p_1531->g_93;
                uint32_t *l_94 = &p_1531->g_95[4];
                uint8_t *l_96[9][4][3] = {{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}},{{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0},{(void*)0,&p_1531->g_97,(void*)0}}};
                int32_t **l_200[6][5] = {{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92},{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92},{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92},{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92},{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92},{&p_1531->g_106,&l_92,&p_1531->g_106,&p_1531->g_106,&l_92}};
                int32_t *l_590 = (void*)0;
                VECTOR(int8_t, 8) l_626 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
                VECTOR(int8_t, 2) l_627 = (VECTOR(int8_t, 2))(0L, 0x79L);
                int8_t l_707 = 3L;
                int i, j, k;
                p_1531->g_576 = func_59((((safe_mul_func_uint16_t_u_u(0x71B3L, FAKE_DIVERGE(p_1531->global_2_offset, get_global_id(2), 10))) , func_64(p_1531->g_comm_values[p_1531->tid], (((*l_69) ^= 0L) , (l_201 = func_71(((((((l_76 <= (safe_mod_func_uint16_t_u_u(p_1531->g_56, ((((p_1531->g_56 & (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_98 = (((((*l_94) |= ((~((p_1531->g_85[2] != (l_89 = p_1531->g_87)) , ((*l_92) |= (safe_sub_func_uint32_t_u_u(p_51, l_76))))) == l_76)) & p_51) || 0x04295AD7L) , 0x76L)), p_1531->g_70)), 6L)) & FAKE_DIVERGE(p_1531->global_1_offset, get_global_id(1), 10)), l_99))) | p_1531->g_comm_values[p_1531->tid]) > p_51) , p_51)))) , p_51) != p_1531->g_88) <= p_1531->g_comm_values[p_1531->tid]) , p_1531->g_23.sd) && l_99), p_1531->g_6, p_1531->g_88, l_100, p_1531))), p_1531->g_56, p_1531->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1531->tid, 33))], p_1531)) == p_1531->g_6), l_243, p_1531);
            }
            if ((atomic_inc(&p_1531->l_atomic_input[21]) == 2))
            { /* block id: 292 */
                int8_t l_724 = 0x1AL;
                VECTOR(int32_t, 16) l_725 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                int32_t l_726 = 0x3C5E505BL;
                int32_t l_727 = 9L;
                int8_t l_728 = 0x51L;
                uint8_t l_729 = 5UL;
                int64_t l_778 = 3L;
                uint32_t l_779 = 0UL;
                int i;
                l_727 ^= (l_724 , (l_726 = ((VECTOR(int32_t, 4))(l_725.s242f)).w));
                --l_729;
                for (l_727 = 29; (l_727 >= (-7)); l_727 = safe_sub_func_int32_t_s_s(l_727, 4))
                { /* block id: 298 */
                    int32_t l_735 = 1L;
                    int32_t *l_734 = &l_735;
                    int32_t *l_736 = &l_735;
                    uint16_t l_737 = 0xBB40L;
                    uint32_t l_738[9] = {0x22DEEF94L,0x59D2D4BBL,0x22DEEF94L,0x22DEEF94L,0x59D2D4BBL,0x22DEEF94L,0x22DEEF94L,0x59D2D4BBL,0x22DEEF94L};
                    uint32_t l_739 = 0x75CF126CL;
                    int32_t l_740 = 0x327DA26EL;
                    VECTOR(int32_t, 16) l_754 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 6L), 6L), 6L, (-3L), 6L, (VECTOR(int32_t, 2))((-3L), 6L), (VECTOR(int32_t, 2))((-3L), 6L), (-3L), 6L, (-3L), 6L);
                    int i;
                    l_736 = l_734;
                    l_737 = (l_725.s6 = 5L);
                    if ((l_738[3] , (l_739 , ((*l_736) = l_740))))
                    { /* block id: 303 */
                        int32_t l_741 = 1L;
                        uint32_t l_742 = 4294967291UL;
                        uint8_t l_745 = 253UL;
                        int32_t l_747 = 1L;
                        int32_t *l_746 = &l_747;
                        --l_742;
                        (*l_736) = l_745;
                        l_736 = l_746;
                        (*l_736) ^= ((*l_734) = 0x32949C27L);
                    }
                    else
                    { /* block id: 309 */
                        int32_t *l_748 = (void*)0;
                        int8_t l_749 = 0x34L;
                        int32_t l_750 = 0x2237098CL;
                        uint32_t l_751[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_751[i] = 4294967295UL;
                        l_736 = l_748;
                        --l_751[1];
                    }
                    if (((VECTOR(int32_t, 2))(l_754.s74)).even)
                    { /* block id: 313 */
                        uint64_t l_755 = 18446744073709551610UL;
                        int8_t l_756 = 0x77L;
                        VECTOR(uint8_t, 4) l_757 = (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0UL), 0UL);
                        VECTOR(uint32_t, 2) l_758 = (VECTOR(uint32_t, 2))(0x5B45A68FL, 0xD102257FL);
                        uint8_t l_759 = 0xC6L;
                        VECTOR(int32_t, 8) l_760 = (VECTOR(int32_t, 8))(0x2CCACB56L, (VECTOR(int32_t, 4))(0x2CCACB56L, (VECTOR(int32_t, 2))(0x2CCACB56L, 0x51FD8FEAL), 0x51FD8FEAL), 0x51FD8FEAL, 0x2CCACB56L, 0x51FD8FEAL);
                        VECTOR(int32_t, 2) l_761 = (VECTOR(int32_t, 2))(0x5C6566F8L, 0L);
                        VECTOR(int32_t, 2) l_762 = (VECTOR(int32_t, 2))(0x15DBC7D6L, (-10L));
                        VECTOR(int32_t, 8) l_763 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 9L), 9L), 9L, 6L, 9L);
                        VECTOR(int32_t, 16) l_764 = (VECTOR(int32_t, 16))(0x47461BB9L, (VECTOR(int32_t, 4))(0x47461BB9L, (VECTOR(int32_t, 2))(0x47461BB9L, 1L), 1L), 1L, 0x47461BB9L, 1L, (VECTOR(int32_t, 2))(0x47461BB9L, 1L), (VECTOR(int32_t, 2))(0x47461BB9L, 1L), 0x47461BB9L, 1L, 0x47461BB9L, 1L);
                        VECTOR(int32_t, 16) l_765 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x636867A7L), 0x636867A7L), 0x636867A7L, 1L, 0x636867A7L, (VECTOR(int32_t, 2))(1L, 0x636867A7L), (VECTOR(int32_t, 2))(1L, 0x636867A7L), 1L, 0x636867A7L, 1L, 0x636867A7L);
                        uint16_t l_766[4] = {65533UL,65533UL,65533UL,65533UL};
                        int64_t l_767[10][5] = {{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL},{0x206F685C479D582CL,0L,0x49DFEFBBD5CB966BL,0x206F685C479D582CL,0x5FE75C81705A1F8CL}};
                        VECTOR(uint64_t, 8) l_768 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL);
                        uint32_t l_769 = 4294967295UL;
                        int i, j;
                        l_725.s7 &= ((*l_734) = (((l_757.y = ((l_756 ^= l_755) , 0x470D0503CA0E6915L)) , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_758.yx)))).even) , (l_759 , ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_760.s1221)), (-8L), ((VECTOR(int32_t, 2))(l_761.xy)), 0x31E27193L)).s2352150251054670, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_762.xyxx)), ((VECTOR(int32_t, 4))(l_763.s0424)))).s0141031644376061))).sf5, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_764.s7e)), (-1L), 0L)).zzzxzyyxyxywxwzz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x6C34F34FL, 0x1347E8CAL, ((VECTOR(int32_t, 2))(l_765.s08)), 0L, l_766[3], 1L, 0x275901B3L)).lo)).odd, (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(1L, l_767[3][2], (((((VECTOR(uint64_t, 16))(l_768.s7256203006221372)).s8 , ((l_726 |= 5L) , 0x81F50325L)) , 0x130EL) , l_769), ((VECTOR(int32_t, 2))(0x46759726L)), 0L, 0x46A7D521L, 0x2EAD8305L)))).s4))), 0x0173C064L, 0x33956DB0L, ((VECTOR(int32_t, 4))(0x775DB2F5L)))).s3117553416477633))).s92))).even)));
                    }
                    else
                    { /* block id: 319 */
                        uint8_t l_770 = 249UL;
                        uint32_t l_773 = 0x6A368DE4L;
                        int32_t l_777 = 1L;
                        int32_t *l_776 = &l_777;
                        l_770++;
                        l_773--;
                        (*l_734) |= (-1L);
                        l_734 = (l_776 = l_776);
                    }
                }
                l_779++;
                unsigned int result = 0;
                result += l_724;
                result += l_725.sf;
                result += l_725.se;
                result += l_725.sd;
                result += l_725.sc;
                result += l_725.sb;
                result += l_725.sa;
                result += l_725.s9;
                result += l_725.s8;
                result += l_725.s7;
                result += l_725.s6;
                result += l_725.s5;
                result += l_725.s4;
                result += l_725.s3;
                result += l_725.s2;
                result += l_725.s1;
                result += l_725.s0;
                result += l_726;
                result += l_727;
                result += l_728;
                result += l_729;
                result += l_778;
                result += l_779;
                atomic_add(&p_1531->l_special_values[21], result);
            }
            else
            { /* block id: 328 */
                (1 + 1);
            }
            if ((*l_201))
                break;
            l_635 = (((p_1531->g_784 = (void*)0) != &l_100) , (safe_add_func_uint64_t_u_u(1UL, 0x1B68FAE447ED1138L)));
        }
        l_790++;
    }
    for (p_51 = 13; (p_51 <= (-9)); --p_51)
    { /* block id: 339 */
        VECTOR(int32_t, 4) l_795 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L));
        VECTOR(int16_t, 4) l_800 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-10L)), (-10L));
        uint32_t l_836 = 4294967295UL;
        int32_t *l_859 = (void*)0;
        uint32_t *l_860 = &l_836;
        VECTOR(int32_t, 2) l_884 = (VECTOR(int32_t, 2))((-9L), 0x7C0C47C8L);
        int i;
        if (p_51)
        { /* block id: 340 */
            uint16_t l_799 = 65534UL;
            uint64_t *l_813 = (void*)0;
            int32_t *l_821 = &p_1531->g_93;
            int32_t l_822 = (-1L);
            int32_t *l_823 = &l_99;
            int32_t *l_824 = &p_1531->g_126[2];
            int32_t *l_825 = &l_98;
            int32_t *l_826 = &p_1531->g_6;
            int32_t *l_827 = &p_1531->g_126[1];
            int32_t *l_828 = &l_600[2][1][2];
            int32_t *l_829 = &p_1531->g_107;
            int32_t *l_830 = &l_600[2][1][2];
            int32_t *l_831 = &p_1531->g_93;
            int32_t *l_832 = (void*)0;
            int32_t *l_833 = &l_98;
            int32_t *l_834 = (void*)0;
            int32_t *l_835[1][6];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_835[i][j] = (void*)0;
            }
            (*l_821) = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(l_795.xzwz)).zywwwyyy, ((VECTOR(int32_t, 8))(l_796.s31209be7))))).s05, ((VECTOR(int32_t, 4))((((safe_mul_func_int16_t_s_s(l_799, ((VECTOR(int16_t, 4))(l_800.xyww)).x)) ^ (safe_mul_func_int16_t_s_s(((((VECTOR(int8_t, 4))(p_1531->g_803.yyyx)).w < (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((((l_800.y , (safe_unary_minus_func_int8_t_s((((((safe_rshift_func_uint8_t_u_s((((*l_201) = p_51) <= p_1531->g_623.x), 2)) == p_1531->g_107) <= 0x3E4D2AD1L) < p_1531->g_398.s7) > ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(1UL, (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_816.xy)).lo, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(18446744073709551615UL, ((void*)0 != &p_1531->g_95[7]))), 11)))), ((VECTOR(uint8_t, 4))(253UL)), 0x95L, 255UL)).s7035314131074006, ((VECTOR(uint8_t, 16))(0UL))))).s0)))) | l_795.z) < p_51), p_1531->g_348.s2)) <= (*p_1531->g_566)), 0)), p_51))) >= 0x6BE559ABE11C4115L), p_1531->g_399.y))) > (*p_1531->g_566)), ((VECTOR(int32_t, 2))(1L)), (-9L))).even))).hi;
            (*l_201) = (~(*l_201));
            l_836++;
        }
        else
        { /* block id: 345 */
            int64_t l_841[8][7][3] = {{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}},{{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L},{3L,0x1E0C57270991BCC6L,6L}}};
            int32_t l_845 = 0x1821DF26L;
            uint16_t *l_846 = &p_1531->g_324[4];
            uint32_t **l_855[9][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint16_t l_857[8] = {65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL};
            int32_t *l_871 = &p_1531->g_6;
            int i, j, k;
            if ((*p_1531->g_106))
                break;
            (*p_1531->g_576) = (~((safe_lshift_func_int8_t_s_u((((~(((l_841[7][5][2] , (7L == 0x079EC214L)) , (((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(p_1531->g_844.s1747015202010601)).sa, 2)) , (((l_845 = ((*l_846)++)) && p_51) | (safe_mul_func_int16_t_s_s(l_841[5][4][1], (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((&p_1531->g_371 != (l_856[1][4] = &p_1531->g_210)) , ((l_860 = (l_857[2] , &p_1531->g_210)) == &l_836)) != 0L) < 0xB06BB7A2DCA22A56L), 7L)), (*p_1531->g_566))))))) , 0L)) | (*l_201))) == p_1531->g_844.s1) , (*p_1531->g_568)), p_51)) > 0L));
            for (p_1531->g_152 = 0; (p_1531->g_152 != 23); p_1531->g_152 = safe_add_func_int64_t_s_s(p_1531->g_152, 5))
            { /* block id: 354 */
                uint32_t l_869 = 1UL;
                int32_t **l_870[9] = {&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201};
                int i;
                for (l_845 = 16; (l_845 >= (-26)); --l_845)
                { /* block id: 357 */
                    for (p_1531->g_93 = (-17); (p_1531->g_93 < (-11)); ++p_1531->g_93)
                    { /* block id: 360 */
                        int32_t **l_867 = (void*)0;
                        int32_t **l_868 = &l_859;
                        (*l_868) = &p_51;
                        (*p_1531->g_106) = (l_869 = ((*p_1531->g_566) != 1L));
                    }
                }
                p_1531->g_576 = (l_871 = (void*)0);
            }
        }
        (*p_1531->g_106) = (FAKE_DIVERGE(p_1531->group_1_offset, get_group_id(1), 10) && p_51);
        for (l_99 = 29; (l_99 <= (-23)); l_99 = safe_sub_func_uint64_t_u_u(l_99, 1))
        { /* block id: 373 */
            int32_t **l_874 = (void*)0;
            uint32_t *l_876 = &p_1531->g_95[4];
            uint32_t **l_875 = &l_876;
            VECTOR(uint16_t, 4) l_888 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xE47FL), 0xE47FL);
            uint64_t *l_890[5];
            int8_t l_902 = (-3L);
            uint16_t *l_903 = &l_656;
            int32_t l_905 = 0x2D639F9DL;
            uint64_t l_918 = 0x084CB04B0D2E596FL;
            uint64_t l_927[10] = {0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L,0x5771CDCE1C19CEF4L};
            int32_t *l_928 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_890[i] = (void*)0;
            l_201 = func_71(p_1531->g_124, p_51, p_1531->g_124, &p_1531->g_126[1], p_1531);
            if ((l_875 == (void*)0))
            { /* block id: 375 */
                if ((atomic_inc(&p_1531->g_atomic_input[46 * get_linear_group_id() + 13]) == 1))
                { /* block id: 377 */
                    uint32_t l_877 = 0x129EF3EDL;
                    l_877++;
                    unsigned int result = 0;
                    result += l_877;
                    atomic_add(&p_1531->g_special_values[46 * get_linear_group_id() + 13], result);
                }
                else
                { /* block id: 379 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 382 */
                for (p_1531->g_97 = 0; (p_1531->g_97 != 12); ++p_1531->g_97)
                { /* block id: 385 */
                    return l_201;
                }
            }
            l_905 |= (safe_add_func_int32_t_s_s(((((((p_1531->g_393.w = ((+(((VECTOR(int32_t, 8))(l_884.yyyxxxyy)).s1 | (&p_1531->g_548[3][0][5] == &p_1531->g_548[3][2][4]))) & (safe_mul_func_int16_t_s_s((((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_887.zwywxzzxwzyyzzyw)))).sf771)).xzyyzxxzwwwyywxx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_888.zywx)))).yxzzyxwwxyzwzxyz))).sa > (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xD2L, 255UL)))).xyyy)).even)).lo | (((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967294UL, 4294967289UL)), ((VECTOR(uint32_t, 4))(l_889.xxxy)), 1UL, 0x229366D7L)).s7 || ((((++p_1531->g_23.s7) , (void*)0) != &p_1531->g_576) || ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_893.xxxy)).even, (int16_t)((safe_lshift_func_uint16_t_u_u(((*l_201) >= (((void*)0 != &p_1531->g_106) , ((safe_div_func_uint16_t_u_u(((*l_903) = (((safe_add_func_uint32_t_u_u(l_902, ((*l_876) &= ((p_1531->g_398.s0 , &p_1531->g_126[1]) == (void*)0)))) == (*l_201)) > p_51)), 1L)) > p_51))), 7)) , 1L), (int16_t)0x6C26L))), ((VECTOR(uint16_t, 2))(0xED35L))))), (-10L), (-3L))).w)) , 0x13B06394F8ED19F6L) == p_51) , p_51) , p_51))), 0x19C3L)))) ^ p_1531->g_324[1]) < 0x71D1DAA88FAE3BF6L) != p_51) | p_51) , p_1531->g_904), 0x5F7A242FL));
            (*p_1531->g_106) = (p_1531->g_929 = (l_796.sb |= (((VECTOR(int32_t, 2))(1L, 0x71C84E04L)).hi , (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(p_1531->g_348.s6, 9)) < (safe_div_func_int16_t_s_s((((safe_add_func_uint64_t_u_u((((VECTOR(int32_t, 2))(1L, 0x652C621CL)).lo | (safe_mul_func_uint8_t_u_u((((((*l_201) && ((l_918 , ((*l_876) = (safe_lshift_func_int16_t_s_s(p_1531->g_124, 8)))) , (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(0xB3L, p_51, (safe_sub_func_int8_t_s_s((0x7317BF31L >= (+(1L ^ 0x9A2C50D2L))), 0x9DL)), 1UL, ((VECTOR(uint8_t, 2))(0x35L)), 0x28L, 1UL)).s6, (*l_201))))) <= l_925) & p_51) & p_1531->g_88), (*p_1531->g_566)))), p_1531->g_926)) ^ p_51) & p_51), p_1531->g_904))) | (*p_1531->g_566)), l_927[4])), 0x0AL)))));
        }
        return &p_1531->g_88;
    }
    return l_856[4][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_106 p_1531->g_210 p_1531->g_95 p_1531->g_152 p_1531->g_6 p_1531->g_107 p_1531->g_23 p_1531->g_93 p_1531->g_97 p_1531->g_126 p_1531->g_198 p_1531->g_56 p_1531->g_comm_values p_1531->g_88 p_1531->g_124 p_1531->g_341 p_1531->g_344 p_1531->g_348 p_1531->g_214 p_1531->g_371 p_1531->g_393 p_1531->g_398 p_1531->g_399 p_1531->g_400 p_1531->g_324 p_1531->g_548 p_1531->g_553
 * writes: p_1531->g_210 p_1531->g_87 p_1531->g_93 p_1531->g_106 p_1531->g_95 p_1531->g_97 p_1531->g_107 p_1531->g_124 p_1531->g_126 p_1531->g_152 p_1531->g_88 p_1531->g_258 p_1531->g_198 p_1531->g_181 p_1531->g_324 p_1531->g_371 p_1531->g_348 p_1531->g_553 p_1531->g_566 p_1531->g_568
 */
int32_t * func_59(uint32_t  p_60, uint32_t * p_61, struct S0 * p_1531)
{ /* block id: 112 */
    VECTOR(int16_t, 2) l_248 = (VECTOR(int16_t, 2))((-1L), 0x2F25L);
    int32_t **l_251 = &p_1531->g_87;
    int16_t *l_254 = &p_1531->g_214;
    int32_t *l_255 = &p_1531->g_6;
    int32_t *l_257 = &p_1531->g_88;
    int32_t **l_256[10][5][4] = {{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}},{{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257},{&l_257,(void*)0,&l_257,&l_257}}};
    int32_t *l_259 = &p_1531->g_126[1];
    uint32_t *l_279[4] = {&p_1531->g_95[4],&p_1531->g_95[4],&p_1531->g_95[4],&p_1531->g_95[4]};
    uint32_t **l_278[7][3][7] = {{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}},{{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]},{&l_279[1],&l_279[1],&l_279[2],(void*)0,&l_279[2],&l_279[1],&l_279[1]}}};
    uint32_t *l_280 = &p_1531->g_152;
    int32_t l_287 = 0x642D2665L;
    int32_t l_291 = (-8L);
    int32_t l_295[5][6] = {{(-1L),0x12D42B9BL,(-9L),(-1L),2L,(-1L)},{(-1L),0x12D42B9BL,(-9L),(-1L),2L,(-1L)},{(-1L),0x12D42B9BL,(-9L),(-1L),2L,(-1L)},{(-1L),0x12D42B9BL,(-9L),(-1L),2L,(-1L)},{(-1L),0x12D42B9BL,(-9L),(-1L),2L,(-1L)}};
    VECTOR(uint16_t, 8) l_342 = (VECTOR(uint16_t, 8))(0x4580L, (VECTOR(uint16_t, 4))(0x4580L, (VECTOR(uint16_t, 2))(0x4580L, 0xD4ACL), 0xD4ACL), 0xD4ACL, 0x4580L, 0xD4ACL);
    int64_t **l_517 = (void*)0;
    VECTOR(int32_t, 8) l_537 = (VECTOR(int32_t, 8))(0x1107A2E1L, (VECTOR(int32_t, 4))(0x1107A2E1L, (VECTOR(int32_t, 2))(0x1107A2E1L, (-1L)), (-1L)), (-1L), 0x1107A2E1L, (-1L));
    int32_t *l_547 = &p_1531->g_70;
    int32_t **l_546[7][3][7] = {{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547}}};
    int8_t *l_567 = &p_1531->g_553;
    int i, j, k;
    (*p_1531->g_106) &= (-1L);
    (*l_259) = ((safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_248.yy)).even, (safe_mod_func_uint32_t_u_u((((((*l_251) = (void*)0) != (p_1531->g_258 = func_71(((((((safe_div_func_int8_t_s_s(p_60, l_248.y)) , ((((void*)0 != l_254) | ((-7L) ^ (p_1531->g_95[4] || (-2L)))) , 18446744073709551615UL)) != p_1531->g_152) < 0x68A1L) & (-9L)) ^ 0xDACAL), l_248.x, p_60, l_255, p_1531))) >= (*l_255)) , (*l_255)), p_60)))) & p_60) >= 0x6389250CD7255FA5L), (-5L))) == (*l_255));
    if (((*l_259) = (safe_lshift_func_int8_t_s_s((((((0x04D639C4L == ((*l_255) != (((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))((-1L), (safe_div_func_uint64_t_u_u(p_1531->g_95[0], (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((*l_259), 2)), ((l_280 = ((safe_rshift_func_uint16_t_u_s(((0x0A085F5CL <= (*l_255)) & ((safe_add_func_int16_t_s_s((((VECTOR(uint32_t, 2))(4UL, 0x52153991L)).odd != (0x76L <= (~(safe_rshift_func_int8_t_s_s(0x1CL, (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((-7L), ((VECTOR(int8_t, 8))(1L)), p_1531->g_198.w, ((VECTOR(int8_t, 4))(0x5CL)), 0x45L, 1L)))), ((VECTOR(int8_t, 16))((-4L)))))).hi)).s7563566674452401))).sf, ((VECTOR(int8_t, 4))(0x3AL)), (-9L), 0x1AL, 9L)).s1543622060524417)).s5 == 0UL), 2)), (-1L)))))))), 0x412FL)) , p_1531->g_56)), p_1531->g_comm_values[p_1531->tid])) , &p_60)) != (void*)0))))), ((VECTOR(int8_t, 2))(0x45L)), (*l_255), 0x63L, 1L, (-2L))).s4711166325134715)).sf713, ((VECTOR(int8_t, 4))(0x0AL)), ((VECTOR(int8_t, 4))(0x27L))))))).wwyzwzwz, ((VECTOR(int8_t, 8))(0x2AL)), ((VECTOR(int8_t, 8))(1L))))).s2 , 1L))) < 0xDDF0E5C4L) | GROUP_DIVERGE(1, 1)) > 8UL) | 0L), 3))))
    { /* block id: 119 */
        int32_t l_288 = 0x579FE6A8L;
        VECTOR(int32_t, 2) l_289 = (VECTOR(int32_t, 2))(0x7AF9E345L, (-10L));
        int32_t l_332 = 0x632E78D3L;
        int32_t **l_333[7] = {&p_1531->g_106,&p_1531->g_106,&p_1531->g_106,&p_1531->g_106,&p_1531->g_106,&p_1531->g_106,&p_1531->g_106};
        VECTOR(uint16_t, 16) l_343 = (VECTOR(uint16_t, 16))(0x7BEDL, (VECTOR(uint16_t, 4))(0x7BEDL, (VECTOR(uint16_t, 2))(0x7BEDL, 0UL), 0UL), 0UL, 0x7BEDL, 0UL, (VECTOR(uint16_t, 2))(0x7BEDL, 0UL), (VECTOR(uint16_t, 2))(0x7BEDL, 0UL), 0x7BEDL, 0UL, 0x7BEDL, 0UL);
        VECTOR(uint32_t, 2) l_361 = (VECTOR(uint32_t, 2))(0x52D2AC3BL, 1UL);
        VECTOR(uint8_t, 8) l_408 = (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0UL), 0UL), 0UL, 252UL, 0UL);
        VECTOR(uint8_t, 8) l_409 = (VECTOR(uint8_t, 8))(0x2FL, (VECTOR(uint8_t, 4))(0x2FL, (VECTOR(uint8_t, 2))(0x2FL, 0x11L), 0x11L), 0x11L, 0x2FL, 0x11L);
        int32_t *l_476[5][8][3] = {{{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0}},{{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0}},{{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0}},{{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0}},{{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0},{(void*)0,&l_288,(void*)0}}};
        int32_t **l_475[2][10] = {{&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1]},{&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1],&l_476[1][4][1]}};
        int8_t l_489 = 0x42L;
        int32_t ***l_490[9][3][2] = {{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}},{{&l_251,&l_251},{&l_251,&l_251},{&l_251,&l_251}}};
        int i, j, k;
        for (p_1531->g_152 = 0; (p_1531->g_152 != 49); p_1531->g_152++)
        { /* block id: 122 */
            int32_t l_290 = 0x2001FA2DL;
            int32_t l_292 = 0x4EFCD2D9L;
            int32_t l_293 = 4L;
            int32_t l_294 = 8L;
            int8_t l_296[7] = {0L,0x36L,0L,0L,0x36L,0L,0L};
            int64_t *l_312 = &p_1531->g_124;
            VECTOR(int32_t, 4) l_327 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-7L)), (-7L));
            int i;
            for (p_1531->g_93 = 0; (p_1531->g_93 >= (-14)); p_1531->g_93 = safe_sub_func_int32_t_s_s(p_1531->g_93, 8))
            { /* block id: 125 */
                int32_t *l_285 = &p_1531->g_107;
                int32_t *l_286[8] = {&p_1531->g_126[1],&p_1531->g_6,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_6,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_6};
                uint8_t l_297 = 0xBDL;
                uint32_t l_309 = 0xD6430BFFL;
                uint8_t *l_318 = &l_297;
                uint16_t *l_323 = &p_1531->g_324[4];
                int i;
                --l_297;
                p_1531->g_198.w &= (safe_unary_minus_func_uint32_t_u((p_60 && ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0x5CE8L, (0x09328FAB7A72458FL || (safe_div_func_int64_t_s_s(((((((~(safe_mul_func_int8_t_s_s((l_309 & (safe_mod_func_int16_t_s_s(((((*l_255) | (((0xE194L || (*l_259)) , (l_312 != &p_1531->g_124)) <= 250UL)) & p_60) & 255UL), 0x6941L))), (*l_255)))) > (*l_285)) >= p_60) , p_60) > p_1531->g_126[1]) < 1L), 0x380E81A899AB900EL))))) & p_1531->g_88), l_290)) && GROUP_DIVERGE(2, 1)))));
                l_332 &= (safe_lshift_func_uint8_t_u_s((0x4DD836C2L && 0UL), (((((*l_318) = (l_292 |= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 3)))))) >= ((p_1531->g_6 != ((((safe_mul_func_uint8_t_u_u((p_1531->g_124 <= l_289.y), (((*l_323) = (safe_rshift_func_uint16_t_u_u((p_1531->g_181 = p_1531->g_comm_values[p_1531->tid]), 11))) == ((((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1CDC0618L, 0x671838A1L)).yyyxyyxy)).lo)), ((VECTOR(int32_t, 4))(l_327.yyzw)))))))).y, 0x458B0EF4L)) | (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_60, p_1531->g_152)), (*l_259)))) && 0x59E7L) && p_60)))) >= p_60) >= p_60) != 0x18DFA490L)) > p_1531->g_comm_values[p_1531->tid])) != 0x2417CD70L) , l_327.x)));
                if (l_327.x)
                    continue;
            }
        }
        l_259 = &p_1531->g_93;
        for (p_1531->g_210 = 0; (p_1531->g_210 != 6); ++p_1531->g_210)
        { /* block id: 139 */
            int32_t *l_338 = (void*)0;
            int32_t l_362 = (-1L);
            int32_t l_363 = 4L;
            int32_t l_365[1];
            int64_t l_370[5] = {0x61320038D4D6F474L,0x61320038D4D6F474L,0x61320038D4D6F474L,0x61320038D4D6F474L,0x61320038D4D6F474L};
            int32_t **l_410 = &p_1531->g_87;
            int32_t l_412 = 0x164587CBL;
            uint8_t l_477[4][8][1] = {{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}},{{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL},{3UL}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_365[i] = 0x229D78A3L;
            for (p_1531->g_107 = 0; (p_1531->g_107 <= 14); p_1531->g_107++)
            { /* block id: 142 */
                VECTOR(int64_t, 8) l_347 = (VECTOR(int64_t, 8))(0x00BFE1B017B55F81L, (VECTOR(int64_t, 4))(0x00BFE1B017B55F81L, (VECTOR(int64_t, 2))(0x00BFE1B017B55F81L, (-7L)), (-7L)), (-7L), 0x00BFE1B017B55F81L, (-7L));
                int32_t *l_350 = &p_1531->g_70;
                int32_t **l_349 = &l_350;
                int32_t *l_358 = (void*)0;
                int32_t **l_357 = &l_358;
                int32_t ***l_356 = &l_357;
                uint8_t *l_359 = &p_1531->g_97;
                int32_t l_360 = 0x0894D6FBL;
                int32_t l_364 = 0x137DB2F1L;
                int32_t l_366 = (-1L);
                int32_t l_367 = 0x16880F5CL;
                int32_t l_368 = 2L;
                VECTOR(int32_t, 8) l_369 = (VECTOR(int32_t, 8))(0x7D7D7061L, (VECTOR(int32_t, 4))(0x7D7D7061L, (VECTOR(int32_t, 2))(0x7D7D7061L, (-1L)), (-1L)), (-1L), 0x7D7D7061L, (-1L));
                int16_t *l_376[9] = {&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214,&p_1531->g_214};
                VECTOR(int16_t, 16) l_401 = (VECTOR(int16_t, 16))(0x2594L, (VECTOR(int16_t, 4))(0x2594L, (VECTOR(int16_t, 2))(0x2594L, (-2L)), (-2L)), (-2L), 0x2594L, (-2L), (VECTOR(int16_t, 2))(0x2594L, (-2L)), (VECTOR(int16_t, 2))(0x2594L, (-2L)), 0x2594L, (-2L), 0x2594L, (-2L));
                uint16_t *l_411 = (void*)0;
                int i;
                l_338 = &p_1531->g_56;
                l_361.x ^= ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(6L, 3L)).xxyx, ((VECTOR(int16_t, 2))(0x59AAL, (-5L))).yxxx, ((VECTOR(int16_t, 4))(p_1531->g_341.s7421))))).zwyzzwxx))).s16))).yyyy, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(l_342.s25530242)).s4730120212030755, ((VECTOR(uint16_t, 4))(l_343.s8ac8)).xwxzzyzxyzyyzzyw))).s7a76))).xwzzxyxx)).s1, (l_360 &= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(1UL, ((VECTOR(uint16_t, 8))(p_1531->g_344.zxxzwxwx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(0xEB0DL, 0xAC6CL)), ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(0xF3B2L, ((VECTOR(uint16_t, 2))(0xE035L, 65535UL)), (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_347.s4473170044216033)).sb, p_60)), ((VECTOR(uint16_t, 2))(p_1531->g_348.s71)), (((*l_349) = &p_1531->g_70) == l_338), 0x825EL, 0UL, (((safe_unary_minus_func_int32_t_s((*p_1531->g_106))) < (safe_sub_func_uint8_t_u_u(((*l_359) = (((((*l_349) = &p_1531->g_70) == (void*)0) == (((*l_356) = l_349) == (void*)0)) && p_60)), p_1531->g_214))) | 0L), 0x74E6L, 0x99BFL, ((VECTOR(uint16_t, 4))(0xC206L)))), ((VECTOR(uint16_t, 16))(0x2535L))))).sa3))), 0x00A0L, 0x9375L)), 0x72F4L, 65530UL, 1UL)), ((VECTOR(uint16_t, 16))(0xEFD8L))))).even)).s1))) == p_60);
                p_1531->g_371--;
                (*l_259) &= (((safe_rshift_func_uint16_t_u_s((l_376[1] != &p_1531->g_214), (safe_lshift_func_uint8_t_u_u((--(*l_359)), 3)))) , ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((VECTOR(int32_t, 2))(0x0BB182D7L, 0x54796161L)).odd == 0L), 11)), ((safe_mod_func_int32_t_s_s(((p_60 , l_347.s5) , (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((0x14C93DE23EB3A971L <= 18446744073709551611UL), (((VECTOR(uint64_t, 4))(p_1531->g_393.zwzz)).z , (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(p_1531->g_398.s41154474)).s4225371772063447, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1531->g_399.xyyyyxyx)).hi)), ((VECTOR(int16_t, 2))(p_1531->g_400.wz)), 1L, 0x1499L)).lo)).zyxzxxzy)).s5054624733264100, ((VECTOR(int16_t, 16))(l_401.s15a44c41c5bc7686))))))).s5 > (safe_mod_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((p_1531->g_348.s5 = ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x19L, 4UL, ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(l_408.s5302)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 0x73L)), 0xB5L, 1UL)), ((VECTOR(uint8_t, 2))(255UL, 0x6AL)).yyxx))).zyzwxyzz)).odd))).ywzwxzxywxzzwyxw)).s19b1)).yxzyxxywxwwzwywx, ((VECTOR(uint8_t, 8))(l_409.s32146377)).s0147000312374574, ((VECTOR(uint8_t, 16))(253UL, 0xB6L, 255UL, 0x3AL, ((l_410 == (void*)0) > 0x70BAL), 0xF7L, (*l_338), p_1531->g_398.s7, GROUP_DIVERGE(2, 1), p_60, p_1531->g_344.w, p_60, 1UL, ((VECTOR(uint8_t, 2))(0UL)), 0xBAL))))).s8, 7UL, ((VECTOR(uint8_t, 4))(0x42L)))))).s32, ((VECTOR(uint8_t, 2))(255UL))))).lo), (*l_255))), l_401.s3)) <= p_60) > FAKE_DIVERGE(p_1531->group_1_offset, get_group_id(1), 10)) != 4294967295UL), p_60))), 3)), p_60))))), p_60)), p_1531->g_324[3]))), l_347.s7)) , p_60))) > l_412)) < 0x71F7A457L);
            }
            if ((atomic_inc(&p_1531->l_atomic_input[43]) == 3))
            { /* block id: 156 */
                int32_t l_413[9][10][2] = {{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}},{{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L},{4L,5L}}};
                int32_t l_453 = (-10L);
                int64_t l_454[7][7][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                int32_t l_455 = (-1L);
                uint16_t l_456 = 0x19D9L;
                int i, j, k;
                if (l_413[5][0][0])
                { /* block id: 157 */
                    int32_t l_414[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_414[i] = 0L;
                    for (l_414[0] = 0; (l_414[0] >= (-13)); l_414[0]--)
                    { /* block id: 160 */
                        uint16_t l_417 = 0x2A73L;
                        int32_t l_420 = (-1L);
                        VECTOR(int8_t, 4) l_421 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x50L), 0x50L);
                        int8_t l_422 = (-1L);
                        uint32_t l_423 = 1UL;
                        int32_t l_427 = 0x2B20399FL;
                        int32_t *l_426 = &l_427;
                        int32_t *l_428 = &l_427;
                        uint16_t l_429 = 0x8616L;
                        int i;
                        ++l_417;
                        --l_423;
                        l_428 = l_426;
                        l_429--;
                    }
                }
                else
                { /* block id: 166 */
                    int32_t *l_432 = (void*)0;
                    VECTOR(int32_t, 8) l_434 = (VECTOR(int32_t, 8))(0x504D463EL, (VECTOR(int32_t, 4))(0x504D463EL, (VECTOR(int32_t, 2))(0x504D463EL, (-1L)), (-1L)), (-1L), 0x504D463EL, (-1L));
                    int32_t *l_433[7][9][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t *l_435 = (void*)0;
                    int8_t l_451 = 5L;
                    uint32_t l_452[5] = {0x38B775E8L,0x38B775E8L,0x38B775E8L,0x38B775E8L,0x38B775E8L};
                    int i, j, k;
                    l_435 = (l_433[0][7][3] = l_432);
                    for (l_434.s6 = 14; (l_434.s6 <= (-6)); l_434.s6--)
                    { /* block id: 171 */
                        int32_t l_439[3][6][3] = {{{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L}},{{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L}},{{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L},{0x0CCEE222L,(-1L),0L}}};
                        int32_t *l_438 = &l_439[1][3][0];
                        int32_t *l_440 = &l_439[1][3][0];
                        uint32_t l_441 = 0xAE7F0F09L;
                        int i, j, k;
                        l_440 = (l_438 = l_438);
                        (*l_438) = l_441;
                        (*l_438) = 0x23234D0FL;
                    }
                    for (l_434.s0 = 3; (l_434.s0 <= 20); l_434.s0 = safe_add_func_int64_t_s_s(l_434.s0, 7))
                    { /* block id: 179 */
                        int32_t l_445[2];
                        int32_t *l_444 = &l_445[1];
                        VECTOR(int64_t, 4) l_446 = (VECTOR(int64_t, 4))(0x0170BC4B4D4FD9CDL, (VECTOR(int64_t, 2))(0x0170BC4B4D4FD9CDL, 0L), 0L);
                        uint32_t l_447 = 4294967287UL;
                        int32_t *l_450 = &l_445[1];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_445[i] = 0x1CB4F494L;
                        l_435 = l_444;
                        l_447++;
                        l_450 = (void*)0;
                    }
                    l_452[4] = l_451;
                }
                l_454[1][6][0] ^= l_453;
                l_455 = (GROUP_DIVERGE(2, 1) , (-1L));
                if (l_456)
                { /* block id: 188 */
                    uint32_t l_457 = 3UL;
                    ++l_457;
                }
                else
                { /* block id: 190 */
                    uint32_t l_460 = 0UL;
                    int16_t l_461 = 0x52C9L;
                    int32_t l_462 = 1L;
                    uint16_t l_463 = 0xC0B3L;
                    uint8_t l_464 = 0xE7L;
                    l_462 &= (l_461 &= (l_453 = l_460));
                    l_464 |= l_463;
                }
                unsigned int result = 0;
                int l_413_i0, l_413_i1, l_413_i2;
                for (l_413_i0 = 0; l_413_i0 < 9; l_413_i0++) {
                    for (l_413_i1 = 0; l_413_i1 < 10; l_413_i1++) {
                        for (l_413_i2 = 0; l_413_i2 < 2; l_413_i2++) {
                            result += l_413[l_413_i0][l_413_i1][l_413_i2];
                        }
                    }
                }
                result += l_453;
                int l_454_i0, l_454_i1, l_454_i2;
                for (l_454_i0 = 0; l_454_i0 < 7; l_454_i0++) {
                    for (l_454_i1 = 0; l_454_i1 < 7; l_454_i1++) {
                        for (l_454_i2 = 0; l_454_i2 < 1; l_454_i2++) {
                            result += l_454[l_454_i0][l_454_i1][l_454_i2];
                        }
                    }
                }
                result += l_455;
                result += l_456;
                atomic_add(&p_1531->l_special_values[43], result);
            }
            else
            { /* block id: 196 */
                (1 + 1);
            }
            p_1531->g_126[1] = (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(p_1531->g_324[4], 9)) & ((0x8A0397DAL >= (!((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(((void*)0 == l_475[0][1]), l_477[0][1][0])), (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((!p_1531->g_324[2]), (((safe_mod_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((-2L) || (p_60 , (((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u(0x24L, 1UL)))) == 0L) >= (*l_255)))), 6UL)) | p_60) && p_1531->g_393.y), 0x7FL)) , l_489) == 0x56DDL))), p_60)))), (-9L))) , 0UL))) <= FAKE_DIVERGE(p_1531->local_0_offset, get_local_id(0), 10))), (*l_255)));
        }
        l_256[6][2][3] = &l_257;
    }
    else
    { /* block id: 202 */
        int32_t **l_491 = &l_255;
        (*l_491) = &p_1531->g_6;
    }
    if ((*l_259))
    { /* block id: 205 */
        if ((atomic_inc(&p_1531->l_atomic_input[44]) == 8))
        { /* block id: 207 */
            int32_t l_492 = 0x29141D1DL;
            int32_t l_494 = 0x151FD4A6L;
            int32_t *l_493 = &l_494;
            int32_t *l_495[8] = {&l_494,&l_494,&l_494,&l_494,&l_494,&l_494,&l_494,&l_494};
            VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(0x77D50613L, (VECTOR(int32_t, 4))(0x77D50613L, (VECTOR(int32_t, 2))(0x77D50613L, (-1L)), (-1L)), (-1L), 0x77D50613L, (-1L));
            int i;
            l_495[0] = (l_492 , l_493);
            if (((VECTOR(int32_t, 8))(l_496.s02372715)).s2)
            { /* block id: 209 */
                int8_t l_497 = 0L;
                (*l_493) |= l_497;
                for (l_497 = 0; (l_497 != 9); l_497 = safe_add_func_int8_t_s_s(l_497, 5))
                { /* block id: 213 */
                    uint32_t l_500 = 9UL;
                    uint32_t l_503 = 4294967289UL;
                    int16_t l_504 = 0x6521L;
                    int32_t l_505 = 8L;
                    uint64_t l_506 = 0UL;
                    uint32_t l_507 = 7UL;
                    uint32_t l_508[3];
                    uint16_t l_511[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    uint16_t *l_510 = &l_511[1];
                    uint16_t **l_509[5][7][2] = {{{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510}},{{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510}},{{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510}},{{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510}},{{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510},{(void*)0,&l_510}}};
                    int32_t *l_512 = (void*)0;
                    uint32_t l_513 = 0x214BD533L;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_508[i] = 9UL;
                    l_505 |= (((l_500++) , l_503) , l_504);
                    l_509[4][0][1] = ((l_506 = GROUP_DIVERGE(0, 1)) , (l_507 , (l_508[1] , (void*)0)));
                    l_512 = l_512;
                    (*l_493) |= l_513;
                }
            }
            else
            { /* block id: 221 */
                uint8_t l_514 = 0x7FL;
                l_514++;
            }
            unsigned int result = 0;
            result += l_492;
            result += l_494;
            result += l_496.s7;
            result += l_496.s6;
            result += l_496.s5;
            result += l_496.s4;
            result += l_496.s3;
            result += l_496.s2;
            result += l_496.s1;
            result += l_496.s0;
            atomic_add(&p_1531->l_special_values[44], result);
        }
        else
        { /* block id: 224 */
            (1 + 1);
        }
    }
    else
    { /* block id: 227 */
        int64_t ***l_518 = &l_517;
        VECTOR(uint64_t, 2) l_529 = (VECTOR(uint64_t, 2))(0x3916AF594BDCB649L, 0x0984D15A5727B471L);
        int32_t l_530 = (-1L);
        VECTOR(int32_t, 4) l_538 = (VECTOR(int32_t, 4))(0x124FF497L, (VECTOR(int32_t, 2))(0x124FF497L, 0x332072C3L), 0x332072C3L);
        VECTOR(int32_t, 8) l_539 = (VECTOR(int32_t, 8))(0x621CD51AL, (VECTOR(int32_t, 4))(0x621CD51AL, (VECTOR(int32_t, 2))(0x621CD51AL, (-1L)), (-1L)), (-1L), 0x621CD51AL, (-1L));
        VECTOR(int32_t, 16) l_540 = (VECTOR(int32_t, 16))(0x49704FE0L, (VECTOR(int32_t, 4))(0x49704FE0L, (VECTOR(int32_t, 2))(0x49704FE0L, 1L), 1L), 1L, 0x49704FE0L, 1L, (VECTOR(int32_t, 2))(0x49704FE0L, 1L), (VECTOR(int32_t, 2))(0x49704FE0L, 1L), 0x49704FE0L, 1L, 0x49704FE0L, 1L);
        VECTOR(int16_t, 2) l_543 = (VECTOR(int16_t, 2))(6L, (-9L));
        int8_t *l_552 = &p_1531->g_553;
        int32_t l_558 = 7L;
        int32_t *l_559 = &p_1531->g_70;
        int32_t *l_569 = (void*)0;
        int32_t **l_573 = &p_1531->g_106;
        int32_t **l_574 = (void*)0;
        int32_t *l_575[2][4][8] = {{{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]}},{{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]},{(void*)0,&p_1531->g_126[1],&p_1531->g_126[1],&p_1531->g_126[1],(void*)0,(void*)0,&p_1531->g_126[1],&p_1531->g_126[1]}}};
        int i, j, k;
        (*l_518) = l_517;
        if ((safe_sub_func_int32_t_s_s(((*l_259) = (((*l_280) ^= (--p_1531->g_95[6])) <= ((((*l_255) , (safe_mod_func_uint8_t_u_u((+((void*)0 != p_61)), (safe_add_func_int64_t_s_s((((VECTOR(uint64_t, 4))(l_529.xxxx)).x & (((~((l_530 = p_1531->g_210) , l_529.x)) , (safe_div_func_int32_t_s_s((((*l_552) ^= ((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_537.s03)), ((VECTOR(int32_t, 4))(l_538.wzzx)), 0L, 0x4F8EDF8CL)).s11, ((VECTOR(int32_t, 4))(l_539.s5317)).lo, ((VECTOR(int32_t, 8))(l_540.sd873f22b)).s11))).yxxyyxxx)), (safe_sub_func_int16_t_s_s(((((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(l_543.xyxxyxxyyxyxxxxy)), ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((l_539.s7 != ((((safe_lshift_func_uint8_t_u_s((l_546[4][2][5] == p_1531->g_548[3][0][5]), (+(safe_lshift_func_uint16_t_u_s((*l_255), 1))))) == (*l_255)) || (*l_255)) < (*p_1531->g_106))), 0x23E5L, 6L, ((VECTOR(int16_t, 2))(0x2859L)), ((VECTOR(int16_t, 2))(0x5FF6L)), 0x6EEDL)))).s3444336465543651, ((VECTOR(int16_t, 16))(2L)))))))).odd)).odd)).even))).even || l_543.y) ^ l_543.x), l_543.y)), (*p_1531->g_106), l_540.s5, (*p_1531->g_106), ((VECTOR(int32_t, 2))(0x1BCC0070L)), 0x300DEA08L)).sbb6e)).w, l_530)), (*l_255))) , 1L)) < 0xD9L), 0x552A5BABL))) >= (*l_259))), p_1531->g_393.y))))) != (*l_259)) > l_529.y))), (*l_255))))
        { /* block id: 234 */
            (*l_259) = (-1L);
        }
        else
        { /* block id: 236 */
            int8_t *l_564 = &p_1531->g_553;
            int8_t **l_565[4] = {&l_564,&l_564,&l_564,&l_564};
            int32_t *l_570 = &l_295[4][1];
            int i;
            (*l_570) ^= ((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_558, ((l_559 = &l_558) == (l_569 = (l_558 , func_71((safe_sub_func_int32_t_s_s(8L, ((&l_547 == &l_547) || (((safe_mul_func_int16_t_s_s((((((p_1531->g_566 = l_564) == (p_1531->g_568 = l_567)) , (void*)0) == &p_1531->g_106) > l_540.sb), p_60)) || 0x75D27322B1B38657L) && p_1531->g_126[3])))), p_1531->g_126[1], p_60, p_61, p_1531)))))), p_60)) < l_540.s2);
        }
        atomic_add(&p_1531->g_atomic_reduction[get_linear_group_id()], (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(65535UL, 0x41E5L)).hi, 1)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1531->v_collective += p_1531->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_575[0][3][6] = ((*l_573) = p_61);
    }
    return &p_1531->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_93 p_1531->g_87 p_1531->g_comm_values p_1531->g_23 p_1531->g_126 p_1531->g_6 p_1531->g_56 p_1531->g_106 p_1531->g_107 p_1531->g_97 p_1531->g_210 p_1531->g_214 p_1531->g_95 p_1531->g_198 p_1531->g_181 p_1531->g_70
 * writes: p_1531->g_23 p_1531->g_97 p_1531->g_93 p_1531->g_106 p_1531->g_95 p_1531->g_107 p_1531->g_124 p_1531->g_126 p_1531->g_152 p_1531->g_88 p_1531->g_214
 */
uint16_t  func_64(int8_t  p_65, int32_t * p_66, int16_t  p_67, int16_t  p_68, struct S0 * p_1531)
{ /* block id: 98 */
    int32_t *l_202 = &p_1531->g_93;
    uint8_t *l_207 = &p_1531->g_97;
    int32_t *l_208 = (void*)0;
    uint32_t *l_209[2];
    int32_t **l_211 = &p_1531->g_106;
    int32_t **l_212 = &l_202;
    int16_t *l_213 = &p_1531->g_214;
    int32_t **l_231 = (void*)0;
    int32_t **l_232 = &l_208;
    int32_t l_233 = (-3L);
    int32_t *l_234 = &p_1531->g_93;
    int32_t *l_235 = &l_233;
    int32_t *l_236 = &p_1531->g_107;
    int32_t *l_237 = &p_1531->g_126[1];
    int32_t *l_238 = (void*)0;
    int32_t *l_239[9][2] = {{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233},{&p_1531->g_6,&l_233}};
    uint16_t l_240 = 65531UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_209[i] = &p_1531->g_210;
    (*l_212) = ((*l_211) = (((*l_202) = (l_202 != (l_208 = func_71(p_1531->g_93, (l_202 == p_1531->g_87), ((*l_207) = (safe_add_func_uint32_t_u_u((((((p_1531->g_23.s9 = ((((safe_sub_func_uint8_t_u_u(p_65, p_68)) > (p_1531->g_comm_values[p_1531->tid] ^ ((-3L) || (((VECTOR(uint8_t, 16))(0x1AL, 255UL, p_1531->g_23.sa, ((VECTOR(uint8_t, 4))(249UL)), 0UL, 0x99L, ((VECTOR(uint8_t, 4))(247UL)), 0xB6L, 252UL, 7UL)).sa != 6UL)))) || (*l_202)) , 0xC30E36697B6F9F12L)) , (*l_202)) , 9UL) ^ (*l_202)) == (*l_202)), (*p_66)))), p_66, p_1531)))) , l_209[0]));
    l_233 &= (((*l_213) ^= (**l_212)) ^ ((safe_div_func_int16_t_s_s((0x5DL == (-1L)), (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((**l_211), p_1531->g_95[4])), ((p_67 |= ((safe_sub_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(((((*l_207) = p_1531->g_23.sd) != 0x26L) | (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((-1L) >= ((((*l_232) = p_66) != &p_1531->g_56) >= 0x293935BCL)) >= (*l_202)), p_1531->g_126[1])), 0))), (-1L))) , p_1531->g_198.y) ^ 0x65BBL) && (*p_66)), p_65)) , p_1531->g_181)) >= p_1531->g_70))), p_1531->g_23.s9)))) , p_1531->g_95[4]));
    l_240--;
    return p_1531->g_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_1531->g_93 p_1531->g_106 p_1531->g_6 p_1531->g_107 p_1531->g_23 p_1531->g_152 p_1531->g_comm_values p_1531->g_56 p_1531->g_97 p_1531->g_88 p_1531->g_198 p_1531->g_126 p_1531->g_210 l_595
 * writes: p_1531->g_93 p_1531->g_106 p_1531->g_95 p_1531->g_97 p_1531->g_107 p_1531->g_152 p_1531->g_124 p_1531->g_126 p_1531->g_181 p_1531->g_88
 */
int32_t * func_71(uint32_t  p_72, uint64_t  p_73, uint8_t  p_74, int32_t * p_75, struct S0 * p_1531)
{ /* block id: 41 */
    int32_t *l_117 = &p_1531->g_88;
    uint32_t l_121 = 0x5391C298L;
    int32_t l_122 = (-1L);
    int32_t l_128 = (-2L);
    int32_t l_129 = 0x0E352C4DL;
    int32_t l_130 = 0x79B13E43L;
    int32_t l_131[4];
    int32_t *l_168 = &l_130;
    int32_t **l_169 = &l_168;
    int32_t *l_199 = &p_1531->g_56;
    int i;
    for (i = 0; i < 4; i++)
        l_131[i] = (-10L);
    for (p_1531->g_93 = 8; (p_1531->g_93 > 23); p_1531->g_93++)
    { /* block id: 44 */
        int32_t **l_103 = (void*)0;
        int32_t *l_105 = (void*)0;
        int32_t **l_104[4] = {&l_105,&l_105,&l_105,&l_105};
        uint16_t l_132 = 65535UL;
        int32_t l_164 = (-1L);
        uint16_t l_165 = 0UL;
        int i;
        p_1531->g_106 = p_75;
        if ((*p_1531->g_106))
        { /* block id: 46 */
            uint32_t *l_116 = &p_1531->g_95[4];
            uint8_t *l_118 = &p_1531->g_97;
            int32_t l_123 = 0x30066401L;
            int32_t l_125 = 0x0E7A3683L;
            int32_t l_127[6];
            VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(0x485B7FF5L, (VECTOR(int32_t, 4))(0x485B7FF5L, (VECTOR(int32_t, 2))(0x485B7FF5L, 1L), 1L), 1L, 0x485B7FF5L, 1L);
            VECTOR(int8_t, 8) l_156 = (VECTOR(int8_t, 8))(0x7EL, (VECTOR(int8_t, 4))(0x7EL, (VECTOR(int8_t, 2))(0x7EL, 0x79L), 0x79L), 0x79L, 0x7EL, 0x79L);
            int64_t *l_157 = &p_1531->g_124;
            int64_t *l_158 = (void*)0;
            int64_t *l_159 = (void*)0;
            int64_t *l_160 = (void*)0;
            int64_t *l_161[4][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_127[i] = (-5L);
            l_122 = (((((safe_mul_func_int16_t_s_s(p_1531->g_107, (safe_mod_func_uint64_t_u_u((+p_74), p_72)))) == (0xA20CL & (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((*l_118) = (((*l_116) = p_72) && (l_105 != (l_117 = p_75)))) <= (safe_mul_func_int8_t_s_s((FAKE_DIVERGE(p_1531->global_2_offset, get_global_id(2), 10) <= p_72), (((void*)0 != &p_1531->g_93) || l_121)))), p_1531->g_23.se)), 5)))) < (-5L)) <= p_72) != p_72);
            p_1531->g_107 = (p_1531->g_93 || (p_72 > ((VECTOR(uint16_t, 2))(65532UL, 0x5D88L)).even));
            ++l_132;
            p_1531->g_126[1] = ((l_131[2] = ((*l_157) = ((-3L) < ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-1L), 6L)), ((VECTOR(int32_t, 8))(l_135.s42555265)).s70, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0L, 0L)).xxxxyyxyxxyxyyxy))).s95b8)).lo))).yxxxyyxyyyyyxyxy, ((VECTOR(int32_t, 16))((safe_add_func_uint32_t_u_u((p_72 ^ GROUP_DIVERGE(1, 1)), ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((~3UL) < (safe_sub_func_uint8_t_u_u((p_1531->g_23.s7 >= (safe_div_func_int8_t_s_s((((255UL >= ((+(p_1531->g_152 |= (p_73 = (safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1531->global_2_offset, get_global_id(2), 10), (safe_rshift_func_uint16_t_u_u(5UL, 13))))))) < (safe_rshift_func_uint8_t_u_u(0x59L, 2)))) | (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(l_156.s3213)).z))) , ((((p_1531->g_106 = (p_74 , &p_1531->g_56)) != p_75) , p_72) > p_72)), l_127[5]))), p_1531->g_comm_values[p_1531->tid]))), p_74)), GROUP_DIVERGE(1, 1))) & (*p_75)))), l_122, (*p_1531->g_106), 0x3DA22505L, 1L, ((VECTOR(int32_t, 4))((-10L))), ((VECTOR(int32_t, 4))((-4L))), (*p_75), 0x41620E12L, 0x1E35FF2BL)), ((VECTOR(int32_t, 16))(0x2947B030L))))).s5))) >= FAKE_DIVERGE(p_1531->global_0_offset, get_global_id(0), 10));
        }
        else
        { /* block id: 59 */
            return p_75;
        }
        for (l_132 = 0; (l_132 > 8); ++l_132)
        { /* block id: 64 */
            return &p_1531->g_126[1];
        }
        ++l_165;
    }
    (*l_169) = l_168;
    for (p_1531->g_107 = 0; (p_1531->g_107 <= 19); p_1531->g_107++)
    { /* block id: 72 */
        int32_t *l_184 = &l_130;
        int32_t *l_185[5] = {&l_131[0],&l_131[0],&l_131[0],&l_131[0],&l_131[0]};
        uint32_t l_186 = 9UL;
        VECTOR(uint64_t, 16) l_195 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xE3876213B6CCC3BFL), 0xE3876213B6CCC3BFL), 0xE3876213B6CCC3BFL, 18446744073709551609UL, 0xE3876213B6CCC3BFL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xE3876213B6CCC3BFL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xE3876213B6CCC3BFL), 18446744073709551609UL, 0xE3876213B6CCC3BFL, 18446744073709551609UL, 0xE3876213B6CCC3BFL);
        int i;
        for (p_1531->g_152 = 0; (p_1531->g_152 == 23); ++p_1531->g_152)
        { /* block id: 75 */
            for (p_72 = (-25); (p_72 != 7); p_72 = safe_add_func_uint64_t_u_u(p_72, 4))
            { /* block id: 78 */
                uint16_t *l_178 = (void*)0;
                uint16_t *l_179 = (void*)0;
                uint16_t *l_180 = &p_1531->g_181;
                VECTOR(uint16_t, 8) l_182 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL);
                int32_t *l_183 = &p_1531->g_93;
                int i;
                (*l_183) &= ((*l_168) = (safe_add_func_uint32_t_u_u(p_72, (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((*l_180) = GROUP_DIVERGE(1, 1)), 0x416DL, 0x0291L, ((VECTOR(uint16_t, 4))(l_182.s3507)), 0x0559L)).even)).x != p_1531->g_97))));
            }
            if ((**l_169))
                continue;
            return p_75;
        }
        ++l_186;
        for (p_1531->g_88 = 0; (p_1531->g_88 <= 9); p_1531->g_88++)
        { /* block id: 89 */
            int32_t l_191 = 8L;
            int32_t l_192 = 0L;
            VECTOR(int32_t, 4) l_193 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x699354FBL), 0x699354FBL);
            int8_t l_194 = 0x4BL;
            int i;
            --l_195.s8;
            return &p_1531->g_126[1];
        }
        (*l_169) = l_184;
    }
    (*l_168) = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(p_1531->g_198.yyyw)).xzwwxzzyzzxzzyzz))).s6;
    return l_199;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S0 c_1532;
    struct S0* p_1531 = &c_1532;
    struct S0 c_1533 = {
        (-3L), // p_1531->g_2
        {{(-3L),(-3L),(-1L),0L,(-10L),0L,(-1L)},{(-3L),(-3L),(-1L),0L,(-10L),0L,(-1L)}}, // p_1531->g_3
        0x663E3155L, // p_1531->g_4
        {0x622A149CL,0x622A149CL}, // p_1531->g_5
        0x4A3C0BF9L, // p_1531->g_6
        0xD3C15D0DL, // p_1531->g_9
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xFC167656540F213EL), 0xFC167656540F213EL), 0xFC167656540F213EL, 1UL, 0xFC167656540F213EL, (VECTOR(uint64_t, 2))(1UL, 0xFC167656540F213EL), (VECTOR(uint64_t, 2))(1UL, 0xFC167656540F213EL), 1UL, 0xFC167656540F213EL, 1UL, 0xFC167656540F213EL), // p_1531->g_23
        (-5L), // p_1531->g_36
        (-1L), // p_1531->g_56
        (-8L), // p_1531->g_70
        1L, // p_1531->g_86
        {&p_1531->g_86,&p_1531->g_86,&p_1531->g_86}, // p_1531->g_85
        (-1L), // p_1531->g_88
        &p_1531->g_88, // p_1531->g_87
        0L, // p_1531->g_93
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1531->g_95
        247UL, // p_1531->g_97
        0x50A9706EL, // p_1531->g_107
        &p_1531->g_107, // p_1531->g_106
        0x243FB2F251B451AFL, // p_1531->g_124
        {1L,(-10L),1L,1L,(-10L),1L,1L}, // p_1531->g_126
        1UL, // p_1531->g_152
        2UL, // p_1531->g_181
        (VECTOR(int32_t, 4))(0x6C91CB4CL, (VECTOR(int32_t, 2))(0x6C91CB4CL, 1L), 1L), // p_1531->g_198
        0x621921C0L, // p_1531->g_210
        0x4F4FL, // p_1531->g_214
        &p_1531->g_88, // p_1531->g_258
        {0UL,0UL,0UL,0UL,0UL}, // p_1531->g_324
        (VECTOR(int16_t, 8))(0x0588L, (VECTOR(int16_t, 4))(0x0588L, (VECTOR(int16_t, 2))(0x0588L, 0x1333L), 0x1333L), 0x1333L, 0x0588L, 0x1333L), // p_1531->g_341
        (VECTOR(uint16_t, 4))(0x7B76L, (VECTOR(uint16_t, 2))(0x7B76L, 0xC06EL), 0xC06EL), // p_1531->g_344
        (VECTOR(uint16_t, 8))(0xA4C6L, (VECTOR(uint16_t, 4))(0xA4C6L, (VECTOR(uint16_t, 2))(0xA4C6L, 7UL), 7UL), 7UL, 0xA4C6L, 7UL), // p_1531->g_348
        0xF0E739DBL, // p_1531->g_371
        (VECTOR(uint64_t, 4))(0x44F0A5696FB7BCD6L, (VECTOR(uint64_t, 2))(0x44F0A5696FB7BCD6L, 18446744073709551609UL), 18446744073709551609UL), // p_1531->g_393
        (VECTOR(int16_t, 8))(0x38B2L, (VECTOR(int16_t, 4))(0x38B2L, (VECTOR(int16_t, 2))(0x38B2L, 0x3660L), 0x3660L), 0x3660L, 0x38B2L, 0x3660L), // p_1531->g_398
        (VECTOR(int16_t, 2))(0x1FB2L, 1L), // p_1531->g_399
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L), // p_1531->g_400
        &p_1531->g_70, // p_1531->g_549
        {{{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0}},{{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0}},{{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0}},{{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0}},{{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0},{&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,&p_1531->g_549,(void*)0}}}, // p_1531->g_548
        0x18L, // p_1531->g_553
        &p_1531->g_553, // p_1531->g_566
        &p_1531->g_553, // p_1531->g_568
        &p_1531->g_126[1], // p_1531->g_576
        &p_1531->g_85[2], // p_1531->g_592
        {{&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592},{&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592,&p_1531->g_592}}, // p_1531->g_591
        (-9L), // p_1531->g_611
        &p_1531->g_611, // p_1531->g_610
        &p_1531->g_610, // p_1531->g_609
        {&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609,&p_1531->g_609}, // p_1531->g_608
        (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L), // p_1531->g_615
        (VECTOR(int8_t, 2))((-8L), 9L), // p_1531->g_623
        (VECTOR(int8_t, 2))(0x6FL, (-1L)), // p_1531->g_625
        (VECTOR(int32_t, 16))(0x691D893FL, (VECTOR(int32_t, 4))(0x691D893FL, (VECTOR(int32_t, 2))(0x691D893FL, 0L), 0L), 0L, 0x691D893FL, 0L, (VECTOR(int32_t, 2))(0x691D893FL, 0L), (VECTOR(int32_t, 2))(0x691D893FL, 0L), 0x691D893FL, 0L, 0x691D893FL, 0L), // p_1531->g_631
        (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x412BL), 0x412BL), 0x412BL, 65527UL, 0x412BL, (VECTOR(uint16_t, 2))(65527UL, 0x412BL), (VECTOR(uint16_t, 2))(65527UL, 0x412BL), 65527UL, 0x412BL, 65527UL, 0x412BL), // p_1531->g_665
        (VECTOR(uint8_t, 16))(0xD6L, (VECTOR(uint8_t, 4))(0xD6L, (VECTOR(uint8_t, 2))(0xD6L, 0x5DL), 0x5DL), 0x5DL, 0xD6L, 0x5DL, (VECTOR(uint8_t, 2))(0xD6L, 0x5DL), (VECTOR(uint8_t, 2))(0xD6L, 0x5DL), 0xD6L, 0x5DL, 0xD6L, 0x5DL), // p_1531->g_667
        {0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_1531->g_699
        1L, // p_1531->g_700
        (void*)0, // p_1531->g_704
        &p_1531->g_106, // p_1531->g_784
        (VECTOR(int8_t, 2))(0x7CL, 8L), // p_1531->g_803
        (VECTOR(uint8_t, 8))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 0x61L), 0x61L), 0x61L, 0x81L, 0x61L), // p_1531->g_844
        0xE6L, // p_1531->g_858
        0x0CDE8835L, // p_1531->g_904
        0x7609L, // p_1531->g_926
        4294967295UL, // p_1531->g_929
        &p_1531->g_106, // p_1531->g_954
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4CL), 0x4CL), // p_1531->g_973
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1531->g_989
        &p_1531->g_56, // p_1531->g_990
        (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 1L), 1L), // p_1531->g_1011
        (VECTOR(uint64_t, 4))(0x1B3037E761EB12D5L, (VECTOR(uint64_t, 2))(0x1B3037E761EB12D5L, 0xE37FA7C5CD095528L), 0xE37FA7C5CD095528L), // p_1531->g_1047
        6UL, // p_1531->g_1070
        0x7FB9B41AL, // p_1531->g_1078
        &p_1531->g_126[2], // p_1531->g_1085
        6L, // p_1531->g_1147
        (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967294UL), 4294967294UL), 4294967294UL, 4294967287UL, 4294967294UL), // p_1531->g_1148
        (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0L), 0L), // p_1531->g_1164
        (VECTOR(uint32_t, 4))(0x710897FDL, (VECTOR(uint32_t, 2))(0x710897FDL, 0x869DA5F1L), 0x869DA5F1L), // p_1531->g_1189
        {{{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576},{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576}},{{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576},{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576}},{{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576},{&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576,&p_1531->g_576}}}, // p_1531->g_1193
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_1531->g_1380
        {{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}},{{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704},{&p_1531->g_704}}}, // p_1531->g_1384
        {0x2555L}, // p_1531->g_1438
        (void*)0, // p_1531->g_1529
        0, // p_1531->v_collective
        sequence_input[get_global_id(0)], // p_1531->global_0_offset
        sequence_input[get_global_id(1)], // p_1531->global_1_offset
        sequence_input[get_global_id(2)], // p_1531->global_2_offset
        sequence_input[get_local_id(0)], // p_1531->local_0_offset
        sequence_input[get_local_id(1)], // p_1531->local_1_offset
        sequence_input[get_local_id(2)], // p_1531->local_2_offset
        sequence_input[get_group_id(0)], // p_1531->group_0_offset
        sequence_input[get_group_id(1)], // p_1531->group_1_offset
        sequence_input[get_group_id(2)], // p_1531->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_1531->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1532 = c_1533;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1531);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1531->g_2, "p_1531->g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1531->g_3[i][j], "p_1531->g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1531->g_4, "p_1531->g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1531->g_5[i], "p_1531->g_5[i]", print_hash_value);

    }
    transparent_crc(p_1531->g_6, "p_1531->g_6", print_hash_value);
    transparent_crc(p_1531->g_9, "p_1531->g_9", print_hash_value);
    transparent_crc(p_1531->g_23.s0, "p_1531->g_23.s0", print_hash_value);
    transparent_crc(p_1531->g_23.s1, "p_1531->g_23.s1", print_hash_value);
    transparent_crc(p_1531->g_23.s2, "p_1531->g_23.s2", print_hash_value);
    transparent_crc(p_1531->g_23.s3, "p_1531->g_23.s3", print_hash_value);
    transparent_crc(p_1531->g_23.s4, "p_1531->g_23.s4", print_hash_value);
    transparent_crc(p_1531->g_23.s5, "p_1531->g_23.s5", print_hash_value);
    transparent_crc(p_1531->g_23.s6, "p_1531->g_23.s6", print_hash_value);
    transparent_crc(p_1531->g_23.s7, "p_1531->g_23.s7", print_hash_value);
    transparent_crc(p_1531->g_23.s8, "p_1531->g_23.s8", print_hash_value);
    transparent_crc(p_1531->g_23.s9, "p_1531->g_23.s9", print_hash_value);
    transparent_crc(p_1531->g_23.sa, "p_1531->g_23.sa", print_hash_value);
    transparent_crc(p_1531->g_23.sb, "p_1531->g_23.sb", print_hash_value);
    transparent_crc(p_1531->g_23.sc, "p_1531->g_23.sc", print_hash_value);
    transparent_crc(p_1531->g_23.sd, "p_1531->g_23.sd", print_hash_value);
    transparent_crc(p_1531->g_23.se, "p_1531->g_23.se", print_hash_value);
    transparent_crc(p_1531->g_23.sf, "p_1531->g_23.sf", print_hash_value);
    transparent_crc(p_1531->g_36, "p_1531->g_36", print_hash_value);
    transparent_crc(p_1531->g_56, "p_1531->g_56", print_hash_value);
    transparent_crc(p_1531->g_70, "p_1531->g_70", print_hash_value);
    transparent_crc(p_1531->g_86, "p_1531->g_86", print_hash_value);
    transparent_crc(p_1531->g_88, "p_1531->g_88", print_hash_value);
    transparent_crc(p_1531->g_93, "p_1531->g_93", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1531->g_95[i], "p_1531->g_95[i]", print_hash_value);

    }
    transparent_crc(p_1531->g_97, "p_1531->g_97", print_hash_value);
    transparent_crc(p_1531->g_107, "p_1531->g_107", print_hash_value);
    transparent_crc(p_1531->g_124, "p_1531->g_124", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1531->g_126[i], "p_1531->g_126[i]", print_hash_value);

    }
    transparent_crc(p_1531->g_152, "p_1531->g_152", print_hash_value);
    transparent_crc(p_1531->g_181, "p_1531->g_181", print_hash_value);
    transparent_crc(p_1531->g_198.x, "p_1531->g_198.x", print_hash_value);
    transparent_crc(p_1531->g_198.y, "p_1531->g_198.y", print_hash_value);
    transparent_crc(p_1531->g_198.z, "p_1531->g_198.z", print_hash_value);
    transparent_crc(p_1531->g_198.w, "p_1531->g_198.w", print_hash_value);
    transparent_crc(p_1531->g_210, "p_1531->g_210", print_hash_value);
    transparent_crc(p_1531->g_214, "p_1531->g_214", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1531->g_324[i], "p_1531->g_324[i]", print_hash_value);

    }
    transparent_crc(p_1531->g_341.s0, "p_1531->g_341.s0", print_hash_value);
    transparent_crc(p_1531->g_341.s1, "p_1531->g_341.s1", print_hash_value);
    transparent_crc(p_1531->g_341.s2, "p_1531->g_341.s2", print_hash_value);
    transparent_crc(p_1531->g_341.s3, "p_1531->g_341.s3", print_hash_value);
    transparent_crc(p_1531->g_341.s4, "p_1531->g_341.s4", print_hash_value);
    transparent_crc(p_1531->g_341.s5, "p_1531->g_341.s5", print_hash_value);
    transparent_crc(p_1531->g_341.s6, "p_1531->g_341.s6", print_hash_value);
    transparent_crc(p_1531->g_341.s7, "p_1531->g_341.s7", print_hash_value);
    transparent_crc(p_1531->g_344.x, "p_1531->g_344.x", print_hash_value);
    transparent_crc(p_1531->g_344.y, "p_1531->g_344.y", print_hash_value);
    transparent_crc(p_1531->g_344.z, "p_1531->g_344.z", print_hash_value);
    transparent_crc(p_1531->g_344.w, "p_1531->g_344.w", print_hash_value);
    transparent_crc(p_1531->g_348.s0, "p_1531->g_348.s0", print_hash_value);
    transparent_crc(p_1531->g_348.s1, "p_1531->g_348.s1", print_hash_value);
    transparent_crc(p_1531->g_348.s2, "p_1531->g_348.s2", print_hash_value);
    transparent_crc(p_1531->g_348.s3, "p_1531->g_348.s3", print_hash_value);
    transparent_crc(p_1531->g_348.s4, "p_1531->g_348.s4", print_hash_value);
    transparent_crc(p_1531->g_348.s5, "p_1531->g_348.s5", print_hash_value);
    transparent_crc(p_1531->g_348.s6, "p_1531->g_348.s6", print_hash_value);
    transparent_crc(p_1531->g_348.s7, "p_1531->g_348.s7", print_hash_value);
    transparent_crc(p_1531->g_371, "p_1531->g_371", print_hash_value);
    transparent_crc(p_1531->g_393.x, "p_1531->g_393.x", print_hash_value);
    transparent_crc(p_1531->g_393.y, "p_1531->g_393.y", print_hash_value);
    transparent_crc(p_1531->g_393.z, "p_1531->g_393.z", print_hash_value);
    transparent_crc(p_1531->g_393.w, "p_1531->g_393.w", print_hash_value);
    transparent_crc(p_1531->g_398.s0, "p_1531->g_398.s0", print_hash_value);
    transparent_crc(p_1531->g_398.s1, "p_1531->g_398.s1", print_hash_value);
    transparent_crc(p_1531->g_398.s2, "p_1531->g_398.s2", print_hash_value);
    transparent_crc(p_1531->g_398.s3, "p_1531->g_398.s3", print_hash_value);
    transparent_crc(p_1531->g_398.s4, "p_1531->g_398.s4", print_hash_value);
    transparent_crc(p_1531->g_398.s5, "p_1531->g_398.s5", print_hash_value);
    transparent_crc(p_1531->g_398.s6, "p_1531->g_398.s6", print_hash_value);
    transparent_crc(p_1531->g_398.s7, "p_1531->g_398.s7", print_hash_value);
    transparent_crc(p_1531->g_399.x, "p_1531->g_399.x", print_hash_value);
    transparent_crc(p_1531->g_399.y, "p_1531->g_399.y", print_hash_value);
    transparent_crc(p_1531->g_400.x, "p_1531->g_400.x", print_hash_value);
    transparent_crc(p_1531->g_400.y, "p_1531->g_400.y", print_hash_value);
    transparent_crc(p_1531->g_400.z, "p_1531->g_400.z", print_hash_value);
    transparent_crc(p_1531->g_400.w, "p_1531->g_400.w", print_hash_value);
    transparent_crc(p_1531->g_553, "p_1531->g_553", print_hash_value);
    transparent_crc(p_1531->g_611, "p_1531->g_611", print_hash_value);
    transparent_crc(p_1531->g_615.s0, "p_1531->g_615.s0", print_hash_value);
    transparent_crc(p_1531->g_615.s1, "p_1531->g_615.s1", print_hash_value);
    transparent_crc(p_1531->g_615.s2, "p_1531->g_615.s2", print_hash_value);
    transparent_crc(p_1531->g_615.s3, "p_1531->g_615.s3", print_hash_value);
    transparent_crc(p_1531->g_615.s4, "p_1531->g_615.s4", print_hash_value);
    transparent_crc(p_1531->g_615.s5, "p_1531->g_615.s5", print_hash_value);
    transparent_crc(p_1531->g_615.s6, "p_1531->g_615.s6", print_hash_value);
    transparent_crc(p_1531->g_615.s7, "p_1531->g_615.s7", print_hash_value);
    transparent_crc(p_1531->g_623.x, "p_1531->g_623.x", print_hash_value);
    transparent_crc(p_1531->g_623.y, "p_1531->g_623.y", print_hash_value);
    transparent_crc(p_1531->g_625.x, "p_1531->g_625.x", print_hash_value);
    transparent_crc(p_1531->g_625.y, "p_1531->g_625.y", print_hash_value);
    transparent_crc(p_1531->g_631.s0, "p_1531->g_631.s0", print_hash_value);
    transparent_crc(p_1531->g_631.s1, "p_1531->g_631.s1", print_hash_value);
    transparent_crc(p_1531->g_631.s2, "p_1531->g_631.s2", print_hash_value);
    transparent_crc(p_1531->g_631.s3, "p_1531->g_631.s3", print_hash_value);
    transparent_crc(p_1531->g_631.s4, "p_1531->g_631.s4", print_hash_value);
    transparent_crc(p_1531->g_631.s5, "p_1531->g_631.s5", print_hash_value);
    transparent_crc(p_1531->g_631.s6, "p_1531->g_631.s6", print_hash_value);
    transparent_crc(p_1531->g_631.s7, "p_1531->g_631.s7", print_hash_value);
    transparent_crc(p_1531->g_631.s8, "p_1531->g_631.s8", print_hash_value);
    transparent_crc(p_1531->g_631.s9, "p_1531->g_631.s9", print_hash_value);
    transparent_crc(p_1531->g_631.sa, "p_1531->g_631.sa", print_hash_value);
    transparent_crc(p_1531->g_631.sb, "p_1531->g_631.sb", print_hash_value);
    transparent_crc(p_1531->g_631.sc, "p_1531->g_631.sc", print_hash_value);
    transparent_crc(p_1531->g_631.sd, "p_1531->g_631.sd", print_hash_value);
    transparent_crc(p_1531->g_631.se, "p_1531->g_631.se", print_hash_value);
    transparent_crc(p_1531->g_631.sf, "p_1531->g_631.sf", print_hash_value);
    transparent_crc(p_1531->g_665.s0, "p_1531->g_665.s0", print_hash_value);
    transparent_crc(p_1531->g_665.s1, "p_1531->g_665.s1", print_hash_value);
    transparent_crc(p_1531->g_665.s2, "p_1531->g_665.s2", print_hash_value);
    transparent_crc(p_1531->g_665.s3, "p_1531->g_665.s3", print_hash_value);
    transparent_crc(p_1531->g_665.s4, "p_1531->g_665.s4", print_hash_value);
    transparent_crc(p_1531->g_665.s5, "p_1531->g_665.s5", print_hash_value);
    transparent_crc(p_1531->g_665.s6, "p_1531->g_665.s6", print_hash_value);
    transparent_crc(p_1531->g_665.s7, "p_1531->g_665.s7", print_hash_value);
    transparent_crc(p_1531->g_665.s8, "p_1531->g_665.s8", print_hash_value);
    transparent_crc(p_1531->g_665.s9, "p_1531->g_665.s9", print_hash_value);
    transparent_crc(p_1531->g_665.sa, "p_1531->g_665.sa", print_hash_value);
    transparent_crc(p_1531->g_665.sb, "p_1531->g_665.sb", print_hash_value);
    transparent_crc(p_1531->g_665.sc, "p_1531->g_665.sc", print_hash_value);
    transparent_crc(p_1531->g_665.sd, "p_1531->g_665.sd", print_hash_value);
    transparent_crc(p_1531->g_665.se, "p_1531->g_665.se", print_hash_value);
    transparent_crc(p_1531->g_665.sf, "p_1531->g_665.sf", print_hash_value);
    transparent_crc(p_1531->g_667.s0, "p_1531->g_667.s0", print_hash_value);
    transparent_crc(p_1531->g_667.s1, "p_1531->g_667.s1", print_hash_value);
    transparent_crc(p_1531->g_667.s2, "p_1531->g_667.s2", print_hash_value);
    transparent_crc(p_1531->g_667.s3, "p_1531->g_667.s3", print_hash_value);
    transparent_crc(p_1531->g_667.s4, "p_1531->g_667.s4", print_hash_value);
    transparent_crc(p_1531->g_667.s5, "p_1531->g_667.s5", print_hash_value);
    transparent_crc(p_1531->g_667.s6, "p_1531->g_667.s6", print_hash_value);
    transparent_crc(p_1531->g_667.s7, "p_1531->g_667.s7", print_hash_value);
    transparent_crc(p_1531->g_667.s8, "p_1531->g_667.s8", print_hash_value);
    transparent_crc(p_1531->g_667.s9, "p_1531->g_667.s9", print_hash_value);
    transparent_crc(p_1531->g_667.sa, "p_1531->g_667.sa", print_hash_value);
    transparent_crc(p_1531->g_667.sb, "p_1531->g_667.sb", print_hash_value);
    transparent_crc(p_1531->g_667.sc, "p_1531->g_667.sc", print_hash_value);
    transparent_crc(p_1531->g_667.sd, "p_1531->g_667.sd", print_hash_value);
    transparent_crc(p_1531->g_667.se, "p_1531->g_667.se", print_hash_value);
    transparent_crc(p_1531->g_667.sf, "p_1531->g_667.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1531->g_699[i], "p_1531->g_699[i]", print_hash_value);

    }
    transparent_crc(p_1531->g_700, "p_1531->g_700", print_hash_value);
    transparent_crc(p_1531->g_803.x, "p_1531->g_803.x", print_hash_value);
    transparent_crc(p_1531->g_803.y, "p_1531->g_803.y", print_hash_value);
    transparent_crc(p_1531->g_844.s0, "p_1531->g_844.s0", print_hash_value);
    transparent_crc(p_1531->g_844.s1, "p_1531->g_844.s1", print_hash_value);
    transparent_crc(p_1531->g_844.s2, "p_1531->g_844.s2", print_hash_value);
    transparent_crc(p_1531->g_844.s3, "p_1531->g_844.s3", print_hash_value);
    transparent_crc(p_1531->g_844.s4, "p_1531->g_844.s4", print_hash_value);
    transparent_crc(p_1531->g_844.s5, "p_1531->g_844.s5", print_hash_value);
    transparent_crc(p_1531->g_844.s6, "p_1531->g_844.s6", print_hash_value);
    transparent_crc(p_1531->g_844.s7, "p_1531->g_844.s7", print_hash_value);
    transparent_crc(p_1531->g_858, "p_1531->g_858", print_hash_value);
    transparent_crc(p_1531->g_904, "p_1531->g_904", print_hash_value);
    transparent_crc(p_1531->g_926, "p_1531->g_926", print_hash_value);
    transparent_crc(p_1531->g_929, "p_1531->g_929", print_hash_value);
    transparent_crc(p_1531->g_973.x, "p_1531->g_973.x", print_hash_value);
    transparent_crc(p_1531->g_973.y, "p_1531->g_973.y", print_hash_value);
    transparent_crc(p_1531->g_973.z, "p_1531->g_973.z", print_hash_value);
    transparent_crc(p_1531->g_973.w, "p_1531->g_973.w", print_hash_value);
    transparent_crc(p_1531->g_1011.x, "p_1531->g_1011.x", print_hash_value);
    transparent_crc(p_1531->g_1011.y, "p_1531->g_1011.y", print_hash_value);
    transparent_crc(p_1531->g_1011.z, "p_1531->g_1011.z", print_hash_value);
    transparent_crc(p_1531->g_1011.w, "p_1531->g_1011.w", print_hash_value);
    transparent_crc(p_1531->g_1047.x, "p_1531->g_1047.x", print_hash_value);
    transparent_crc(p_1531->g_1047.y, "p_1531->g_1047.y", print_hash_value);
    transparent_crc(p_1531->g_1047.z, "p_1531->g_1047.z", print_hash_value);
    transparent_crc(p_1531->g_1047.w, "p_1531->g_1047.w", print_hash_value);
    transparent_crc(p_1531->g_1070, "p_1531->g_1070", print_hash_value);
    transparent_crc(p_1531->g_1078, "p_1531->g_1078", print_hash_value);
    transparent_crc(p_1531->g_1147, "p_1531->g_1147", print_hash_value);
    transparent_crc(p_1531->g_1148.s0, "p_1531->g_1148.s0", print_hash_value);
    transparent_crc(p_1531->g_1148.s1, "p_1531->g_1148.s1", print_hash_value);
    transparent_crc(p_1531->g_1148.s2, "p_1531->g_1148.s2", print_hash_value);
    transparent_crc(p_1531->g_1148.s3, "p_1531->g_1148.s3", print_hash_value);
    transparent_crc(p_1531->g_1148.s4, "p_1531->g_1148.s4", print_hash_value);
    transparent_crc(p_1531->g_1148.s5, "p_1531->g_1148.s5", print_hash_value);
    transparent_crc(p_1531->g_1148.s6, "p_1531->g_1148.s6", print_hash_value);
    transparent_crc(p_1531->g_1148.s7, "p_1531->g_1148.s7", print_hash_value);
    transparent_crc(p_1531->g_1164.x, "p_1531->g_1164.x", print_hash_value);
    transparent_crc(p_1531->g_1164.y, "p_1531->g_1164.y", print_hash_value);
    transparent_crc(p_1531->g_1164.z, "p_1531->g_1164.z", print_hash_value);
    transparent_crc(p_1531->g_1164.w, "p_1531->g_1164.w", print_hash_value);
    transparent_crc(p_1531->g_1189.x, "p_1531->g_1189.x", print_hash_value);
    transparent_crc(p_1531->g_1189.y, "p_1531->g_1189.y", print_hash_value);
    transparent_crc(p_1531->g_1189.z, "p_1531->g_1189.z", print_hash_value);
    transparent_crc(p_1531->g_1189.w, "p_1531->g_1189.w", print_hash_value);
    transparent_crc(p_1531->g_1380.x, "p_1531->g_1380.x", print_hash_value);
    transparent_crc(p_1531->g_1380.y, "p_1531->g_1380.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1531->g_1438[i], "p_1531->g_1438[i]", print_hash_value);

    }
    transparent_crc(p_1531->v_collective, "p_1531->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 46; i++)
            transparent_crc(p_1531->g_special_values[i + 46 * get_linear_group_id()], "p_1531->g_special_values[i + 46 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 46; i++)
            transparent_crc(p_1531->l_special_values[i], "p_1531->l_special_values[i]", print_hash_value);
    transparent_crc(p_1531->l_comm_values[get_linear_local_id()], "p_1531->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1531->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_1531->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
