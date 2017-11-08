// --atomics 33 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 11,40,4 -l 1,40,1
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

__constant uint32_t permutations[10][40] = {
{29,25,21,35,9,26,36,32,38,34,3,23,30,15,27,39,11,7,20,10,6,0,22,37,17,8,31,12,24,16,1,18,5,28,13,19,4,14,33,2}, // permutation 0
{24,33,3,7,2,27,11,20,39,13,28,22,34,25,10,18,4,9,32,1,6,19,36,12,37,23,0,26,5,14,8,38,29,30,35,21,17,31,16,15}, // permutation 1
{22,29,10,6,26,9,28,21,36,24,15,39,35,17,12,31,18,38,1,16,4,2,32,3,23,8,30,7,5,0,33,14,25,20,37,13,27,11,19,34}, // permutation 2
{12,9,33,0,23,1,8,17,21,35,16,30,29,3,39,20,24,27,34,5,19,7,14,18,15,26,38,13,22,11,2,36,4,25,28,31,37,32,10,6}, // permutation 3
{31,15,13,12,9,8,10,23,22,36,14,7,16,19,4,35,5,17,26,39,1,24,37,32,29,34,38,28,21,6,0,11,25,27,18,2,33,3,20,30}, // permutation 4
{23,27,37,31,34,8,13,29,25,18,7,9,6,2,16,15,20,1,5,22,11,26,3,38,32,10,30,12,24,17,4,19,36,14,33,28,39,0,21,35}, // permutation 5
{24,17,30,32,0,38,22,39,13,31,1,26,6,29,18,9,5,15,14,4,36,28,34,12,8,23,27,20,19,10,11,35,21,3,33,2,25,7,37,16}, // permutation 6
{28,21,37,17,13,4,18,15,26,38,32,25,35,1,24,39,19,12,34,8,36,10,3,0,33,9,20,6,2,7,22,29,27,5,31,14,16,30,11,23}, // permutation 7
{29,21,19,2,17,31,22,8,6,16,28,37,0,32,20,15,13,38,14,35,1,27,36,33,18,12,25,23,3,5,26,34,4,10,7,39,24,30,11,9}, // permutation 8
{30,18,12,25,0,26,9,5,38,28,22,32,3,8,14,31,27,36,37,4,13,11,2,21,15,7,6,39,35,17,29,20,23,24,33,1,10,16,19,34} // permutation 9
};

// Seed: 2205889125

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint8_t  f0;
};

struct S1 {
    int32_t g_3;
    uint32_t g_9[8];
    int32_t *g_30;
    int32_t * volatile *g_29;
    int16_t g_32;
    int32_t g_411;
    volatile VECTOR(uint16_t, 2) g_440;
    VECTOR(uint8_t, 8) g_442;
    VECTOR(uint8_t, 8) g_444;
    union U0 g_464[4];
    volatile VECTOR(uint32_t, 4) g_475;
    uint64_t g_487;
    int32_t g_489;
    int32_t * volatile g_488;
    uint32_t g_511;
    volatile VECTOR(int32_t, 8) g_521;
    volatile VECTOR(int32_t, 4) g_524;
    VECTOR(int32_t, 2) g_526;
    VECTOR(uint16_t, 4) g_528;
    volatile VECTOR(int32_t, 4) g_530;
    union U0 g_534;
    union U0 g_537[4][4];
    uint16_t g_547;
    int16_t **g_726;
    VECTOR(int16_t, 16) g_728;
    volatile VECTOR(uint32_t, 16) g_735;
    uint8_t g_745;
    union U0 * volatile *g_746;
    VECTOR(int32_t, 8) g_776;
    uint8_t g_786;
    uint32_t g_823;
    VECTOR(uint16_t, 8) g_851;
    volatile VECTOR(uint16_t, 8) g_852;
    VECTOR(int8_t, 8) g_855;
    VECTOR(int8_t, 8) g_857;
    int32_t * volatile g_864;
    union U0 *g_873;
    union U0 **g_872[10][2][3];
    uint32_t g_884;
    int32_t * volatile g_885;
    VECTOR(int16_t, 4) g_888;
    volatile VECTOR(int16_t, 8) g_890;
    volatile int64_t *g_897;
    volatile int8_t g_903;
    volatile int8_t *g_902;
    volatile union U0 g_935;
    VECTOR(int8_t, 4) g_939;
    VECTOR(int8_t, 8) g_940;
    VECTOR(int16_t, 16) g_942;
    volatile VECTOR(int32_t, 16) g_966;
    volatile VECTOR(int32_t, 2) g_968;
    VECTOR(int32_t, 2) g_969;
    volatile VECTOR(int32_t, 8) g_970;
    VECTOR(uint16_t, 8) g_972;
    union U0 g_981;
    volatile VECTOR(int64_t, 16) g_991;
    VECTOR(uint64_t, 4) g_996;
    uint64_t *g_1006;
    VECTOR(int32_t, 16) g_1011;
    VECTOR(uint32_t, 2) g_1014;
    VECTOR(uint32_t, 4) g_1015;
    volatile VECTOR(int32_t, 2) g_1110;
    VECTOR(int16_t, 2) g_1120;
    union U0 g_1138;
    int16_t *g_1140;
    union U0 g_1363;
    int32_t g_1379;
    int64_t g_1391;
    int32_t * volatile g_1392;
    uint32_t g_1405;
    int32_t * volatile g_1417;
    union U0 g_1428;
    VECTOR(int64_t, 4) g_1443;
    VECTOR(int32_t, 4) g_1452;
    VECTOR(uint32_t, 8) g_1453;
    int32_t *** volatile g_1463;
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
int64_t  func_1(struct S1 * p_1466);
int32_t ** func_12(int64_t  p_13, int32_t * p_14, struct S1 * p_1466);
int32_t * func_15(int32_t  p_16, int64_t  p_17, struct S1 * p_1466);
int64_t  func_18(uint64_t  p_19, int32_t  p_20, uint16_t  p_21, struct S1 * p_1466);
int16_t  func_22(uint32_t  p_23, int16_t  p_24, int64_t  p_25, uint64_t  p_26, struct S1 * p_1466);
int16_t  func_414(uint64_t  p_415, int16_t  p_416, int64_t  p_417, uint8_t  p_418, int16_t * p_419, struct S1 * p_1466);
int16_t  func_424(int32_t * p_425, struct S1 * p_1466);
union U0  func_451(int16_t * p_452, uint64_t  p_453, struct S1 * p_1466);
int16_t * func_454(int32_t * p_455, struct S1 * p_1466);
int32_t * func_456(int32_t ** p_457, int16_t * p_458, union U0 * p_459, struct S1 * p_1466);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1466->g_9 p_1466->g_3 p_1466->g_29 p_1466->l_comm_values p_1466->g_comm_values p_1466->g_30 p_1466->g_411 p_1466->g_440 p_1466->g_442 p_1466->g_444 p_1466->g_32 p_1466->g_475 p_1466->g_488 p_1466->g_487 p_1466->g_521 p_1466->g_524 p_1466->g_526 p_1466->g_528 p_1466->g_530 p_1466->g_489 p_1466->g_547 p_1466->g_464 p_1466->g_726 p_1466->g_728 p_1466->g_735 p_1466->g_745 p_1466->g_746 p_1466->g_511 p_1466->g_776 p_1466->g_786 p_1466->g_851 p_1466->g_852 p_1466->g_855 p_1466->g_857 p_1466->g_885 p_1466->g_888 p_1466->g_890 p_1466->g_897 p_1466->g_902 p_1466->g_935 p_1466->g_939 p_1466->g_940 p_1466->g_942 p_1466->g_966 p_1466->g_968 p_1466->g_969 p_1466->g_970 p_1466->g_972 p_1466->g_981 p_1466->g_991 p_1466->g_996 p_1466->g_884 p_1466->g_1011 p_1466->g_1014 p_1466->g_1015 p_1466->g_823 p_1466->g_1110 p_1466->g_1120 p_1466->g_1138 p_1466->g_1140 p_1466->g_903 p_1466->g_1379 p_1466->g_1392 p_1466->g_1405 p_1466->g_1417 p_1466->g_1428 p_1466->g_1443 p_1466->g_1452 p_1466->g_1453
 * writes: p_1466->g_9 p_1466->g_32 p_1466->g_411 p_1466->g_30 p_1466->g_487 p_1466->g_489 p_1466->g_511 p_1466->g_444 p_1466->g_547 p_1466->g_726 p_1466->g_745 p_1466->g_786 p_1466->g_comm_values p_1466->l_comm_values p_1466->g_823 p_1466->g_872 p_1466->g_884 p_1466->g_526 p_1466->g_857 p_1466->g_1006 p_1466->g_972 p_1466->g_942 p_1466->g_969 p_1466->g_1379 p_1466->g_1391 p_1466->g_1405 p_1466->g_1443
 */
int64_t  func_1(struct S1 * p_1466)
{ /* block id: 4 */
    int32_t *l_2 = &p_1466->g_3;
    int32_t *l_4 = &p_1466->g_3;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = &p_1466->g_3;
    int32_t *l_7 = &p_1466->g_3;
    int32_t *l_8 = &p_1466->g_3;
    int16_t *l_31[10] = {&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32,&p_1466->g_32};
    int64_t *l_1390[4][8][8] = {{{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391}},{{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391}},{{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391}},{{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391},{&p_1466->g_1391,(void*)0,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391,&p_1466->g_1391}}};
    int32_t **l_1465 = &l_7;
    int32_t ***l_1464 = &l_1465;
    int i, j, k;
    p_1466->g_9[5]++;
    (*l_1464) = func_12(p_1466->g_9[5], func_15((*l_8), (p_1466->g_1391 = func_18(p_1466->g_9[5], (((func_22((*l_7), (*l_7), ((safe_rshift_func_uint16_t_u_s((&l_7 == p_1466->g_29), (p_1466->g_32 = (-10L)))) , (-1L)), p_1466->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))], p_1466) >= 0x005CL) , p_1466->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))]) == p_1466->g_comm_values[p_1466->tid]), (*l_2), p_1466)), p_1466), p_1466);
    return (*l_6);
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_1428 p_1466->g_29 p_1466->g_30 p_1466->g_1443 p_1466->g_1014 p_1466->g_1452 p_1466->g_1453 p_1466->g_528 p_1466->g_1417
 * writes: p_1466->g_30 p_1466->g_1443 p_1466->g_487 p_1466->g_1379
 */
int32_t ** func_12(int64_t  p_13, int32_t * p_14, struct S1 * p_1466)
{ /* block id: 697 */
    int16_t *l_1429 = (void*)0;
    union U0 *l_1430 = &p_1466->g_981;
    int64_t *l_1435 = (void*)0;
    int64_t *l_1436 = (void*)0;
    int64_t *l_1437 = (void*)0;
    int64_t *l_1438 = (void*)0;
    int64_t *l_1439 = (void*)0;
    int64_t *l_1440 = (void*)0;
    int64_t *l_1441[4];
    int32_t l_1442 = 8L;
    int32_t l_1446 = 0x3940219AL;
    VECTOR(int32_t, 16) l_1451 = (VECTOR(int32_t, 16))(0x2B715BDBL, (VECTOR(int32_t, 4))(0x2B715BDBL, (VECTOR(int32_t, 2))(0x2B715BDBL, 1L), 1L), 1L, 0x2B715BDBL, 1L, (VECTOR(int32_t, 2))(0x2B715BDBL, 1L), (VECTOR(int32_t, 2))(0x2B715BDBL, 1L), 0x2B715BDBL, 1L, 0x2B715BDBL, 1L);
    uint64_t *l_1458 = (void*)0;
    uint64_t *l_1459 = (void*)0;
    uint64_t *l_1460 = &p_1466->g_487;
    uint32_t l_1461 = 0x74675DE8L;
    int32_t *l_1462[3];
    int i;
    for (i = 0; i < 4; i++)
        l_1441[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1462[i] = (void*)0;
    if ((atomic_inc(&p_1466->g_atomic_input[33 * get_linear_group_id() + 12]) == 0))
    { /* block id: 699 */
        int32_t l_1419 = 0x20FCEE35L;
        int32_t *l_1418[8];
        int32_t *l_1420 = &l_1419;
        int64_t l_1421 = 0x00A18F3C1D84FB68L;
        int32_t l_1422[2];
        int32_t l_1423 = 0x4FB50E14L;
        int32_t l_1424 = 0x44C0410AL;
        uint16_t l_1425 = 65534UL;
        int i;
        for (i = 0; i < 8; i++)
            l_1418[i] = &l_1419;
        for (i = 0; i < 2; i++)
            l_1422[i] = 1L;
        l_1420 = (l_1418[4] = l_1418[2]);
        l_1425--;
        unsigned int result = 0;
        result += l_1419;
        result += l_1421;
        int l_1422_i0;
        for (l_1422_i0 = 0; l_1422_i0 < 2; l_1422_i0++) {
            result += l_1422[l_1422_i0];
        }
        result += l_1423;
        result += l_1424;
        result += l_1425;
        atomic_add(&p_1466->g_special_values[33 * get_linear_group_id() + 12], result);
    }
    else
    { /* block id: 703 */
        (1 + 1);
    }
    (*p_1466->g_29) = (p_1466->g_1428 , (*p_1466->g_29));
    (*p_1466->g_1417) = (safe_rshift_func_int8_t_s_s(((((safe_div_func_int64_t_s_s(((l_1442 = (p_13 = p_13)) <= (p_1466->g_1443.w = ((VECTOR(int64_t, 2))(p_1466->g_1443.zz)).lo)), (safe_rshift_func_int16_t_s_u(l_1446, l_1446)))) > (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1466->group_1_offset, get_group_id(1), 10), l_1446))) & p_1466->g_1014.x) || ((safe_mod_func_int32_t_s_s((((*l_1460) = ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_1451.s3fe81e59c2595864)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(p_13, 5L, 1L, (-1L))).xwwzyxyw))).s7205206162520726))), ((VECTOR(int32_t, 4))(p_1466->g_1452.wzyy)).xwywyxzzyyyzzyww))).s21)).even > ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xA70E718CL, 8UL)))).even, ((VECTOR(uint32_t, 2))(p_1466->g_1453.s35)), (safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(255UL, GROUP_DIVERGE(0, 1))) , ((VECTOR(uint8_t, 4))(((p_13 && p_13) == GROUP_DIVERGE(1, 1)), 0x6AL, 1UL, 1UL)).w), p_1466->g_528.z)), ((VECTOR(uint32_t, 2))(0x25318CD0L)), l_1442, 4294967295UL, 0x9ABA92B5L, l_1446, 0UL, 4294967289UL, ((VECTOR(uint32_t, 4))(1UL)))).sd), ((VECTOR(uint32_t, 8))(0x5CD24444L)), l_1451.s2, ((VECTOR(uint32_t, 2))(0UL)), GROUP_DIVERGE(1, 1), 1UL, 0x87CA3F08L, 4294967295UL)).sc1))), ((VECTOR(uint32_t, 4))(0x245669D2L)), 0x11A18668L, 3UL)).even, ((VECTOR(uint32_t, 4))(0xF23BA5E9L))))).y) & l_1451.se), 4294967295UL)) < p_13)), l_1461));
    return &p_1466->g_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_1392 p_1466->g_1379 p_1466->g_745 p_1466->g_411 p_1466->g_1405 p_1466->g_487 p_1466->g_511 p_1466->g_1417 p_1466->g_29 p_1466->g_30
 * writes: p_1466->g_1379 p_1466->g_745 p_1466->g_411 p_1466->g_1405 p_1466->g_487 p_1466->g_511 p_1466->g_30
 */
int32_t * func_15(int32_t  p_16, int64_t  p_17, struct S1 * p_1466)
{ /* block id: 670 */
    uint8_t l_1393[3][8] = {{250UL,7UL,0xFAL,0UL,0xFAL,7UL,250UL,6UL},{250UL,7UL,0xFAL,0UL,0xFAL,7UL,250UL,6UL},{250UL,7UL,0xFAL,0UL,0xFAL,7UL,250UL,6UL}};
    int32_t l_1404[7][2][10] = {{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}},{{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)},{0x1824CDC5L,1L,0x707BCDB2L,(-1L),0x67458290L,(-1L),0x707BCDB2L,1L,0x1824CDC5L,(-7L)}}};
    int i, j, k;
    (*p_1466->g_1392) &= p_17;
    if (l_1393[0][2])
    { /* block id: 672 */
        uint32_t l_1402 = 0UL;
        int32_t *l_1403[2][7] = {{&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489},{&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489,&p_1466->g_489}};
        int i, j;
        for (p_1466->g_745 = 0; (p_1466->g_745 == 55); p_1466->g_745 = safe_add_func_int32_t_s_s(p_1466->g_745, 8))
        { /* block id: 675 */
            VECTOR(int32_t, 8) l_1396 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 6L), 6L), 6L, 7L, 6L);
            int32_t *l_1397 = &p_1466->g_411;
            int i;
            (*l_1397) &= ((VECTOR(int32_t, 8))(0x0AD98708L, (*p_1466->g_1392), p_17, 7L, ((VECTOR(int32_t, 2))(l_1396.s46)), 0x72D87CA3L, (-1L))).s4;
            (*l_1397) = (0UL || ((*l_1397) > ((safe_add_func_int16_t_s_s((*l_1397), ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(3L, 0x2E37L)).yxyx))).y)) > (l_1402 = p_16))));
        }
        --p_1466->g_1405;
    }
    else
    { /* block id: 681 */
        int32_t *l_1410 = (void*)0;
        uint32_t *l_1412 = (void*)0;
        uint32_t **l_1411 = &l_1412;
        for (p_1466->g_487 = 0; (p_1466->g_487 <= 40); p_1466->g_487 = safe_add_func_int16_t_s_s(p_1466->g_487, 1))
        { /* block id: 684 */
            return l_1410;
        }
        l_1404[1][1][3] = (l_1411 != (void*)0);
    }
    for (p_1466->g_511 = 22; (p_1466->g_511 <= 58); p_1466->g_511 = safe_add_func_int32_t_s_s(p_1466->g_511, 2))
    { /* block id: 691 */
        int64_t *l_1416[9];
        int64_t **l_1415 = &l_1416[7];
        int i;
        for (i = 0; i < 9; i++)
            l_1416[i] = &p_1466->g_1391;
        (*p_1466->g_1417) = (((*l_1415) = &p_17) != &p_17);
        (*p_1466->g_29) = (*p_1466->g_29);
    }
    return &p_1466->g_1379;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_29 p_1466->g_30 p_1466->g_3 p_1466->g_411 p_1466->g_9 p_1466->g_440 p_1466->g_442 p_1466->g_444 p_1466->g_32 p_1466->g_475 p_1466->g_comm_values p_1466->g_488 p_1466->g_487 p_1466->l_comm_values p_1466->g_521 p_1466->g_524 p_1466->g_526 p_1466->g_528 p_1466->g_530 p_1466->g_489 p_1466->g_547 p_1466->g_464 p_1466->g_726 p_1466->g_728 p_1466->g_735 p_1466->g_745 p_1466->g_746 p_1466->g_511 p_1466->g_776 p_1466->g_786 p_1466->g_851 p_1466->g_852 p_1466->g_855 p_1466->g_857 p_1466->g_885 p_1466->g_888 p_1466->g_890 p_1466->g_897 p_1466->g_902 p_1466->g_935 p_1466->g_939 p_1466->g_940 p_1466->g_942 p_1466->g_966 p_1466->g_968 p_1466->g_969 p_1466->g_970 p_1466->g_972 p_1466->g_981 p_1466->g_991 p_1466->g_996 p_1466->g_884 p_1466->g_1011 p_1466->g_1014 p_1466->g_1015 p_1466->g_823 p_1466->g_1110 p_1466->g_1120 p_1466->g_1138 p_1466->g_1140 p_1466->g_903 p_1466->g_1379
 * writes: p_1466->g_411 p_1466->g_30 p_1466->g_487 p_1466->g_489 p_1466->g_511 p_1466->g_444 p_1466->g_547 p_1466->g_726 p_1466->g_32 p_1466->g_745 p_1466->g_786 p_1466->g_comm_values p_1466->l_comm_values p_1466->g_823 p_1466->g_872 p_1466->g_884 p_1466->g_526 p_1466->g_857 p_1466->g_1006 p_1466->g_972 p_1466->g_942 p_1466->g_969 p_1466->g_1379
 */
int64_t  func_18(uint64_t  p_19, int32_t  p_20, uint16_t  p_21, struct S1 * p_1466)
{ /* block id: 210 */
    int32_t *l_410 = &p_1466->g_411;
    VECTOR(uint8_t, 2) l_441 = (VECTOR(uint8_t, 2))(255UL, 0x59L);
    VECTOR(uint8_t, 8) l_443 = (VECTOR(uint8_t, 8))(0xCAL, (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 0xDFL), 0xDFL), 0xDFL, 0xCAL, 0xDFL);
    int32_t **l_460[8][8] = {{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30},{&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30,&p_1466->g_30}};
    int32_t **l_461 = &p_1466->g_30;
    int16_t *l_462 = &p_1466->g_32;
    union U0 *l_463 = &p_1466->g_464[1];
    union U0 **l_465 = (void*)0;
    union U0 **l_466 = &l_463;
    int32_t l_1139 = 0x7153339AL;
    uint32_t l_1389 = 0xA03CD919L;
    int i, j;
    (*l_410) = (**p_1466->g_29);
    p_1466->g_1379 |= (safe_rshift_func_int16_t_s_u(func_414(p_1466->g_411, (*l_410), ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_424(l_410, p_1466), (GROUP_DIVERGE(0, 1) > (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_1466->g_440.yxyyxyxyyyyyyyyx)).even)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_441.yy)))).xyyyxyyxyxyyxyxx, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(p_1466->g_442.s24)).yxyyyyxxyxxyyxyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_443.s41375106)).lo)).lo, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(p_1466->g_444.s2313)).yxxyyxwwxwwxxyzz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((safe_div_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((((((func_451(func_454(func_456((l_460[4][1] = &p_1466->g_30), ((((*l_461) = &p_1466->g_3) == &p_20) , l_462), ((*l_466) = l_463), p_1466), p_1466), p_1466->g_996.y, p_1466) , &p_1466->g_885) != &l_410) != p_1466->g_3) > p_19) != p_20) | l_1139) < p_19), 1L)) >= 0L), 65527UL)), FAKE_DIVERGE(p_1466->local_1_offset, get_local_id(1), 10))), ((VECTOR(uint8_t, 4))(0xD3L)), ((VECTOR(uint8_t, 8))(248UL)), ((VECTOR(uint8_t, 2))(253UL)), 0x1AL)))).s37)).xyyxxxxxxyxxyxxx))).s27)).yyxxyxxy, ((VECTOR(uint8_t, 8))(1UL)), ((VECTOR(uint8_t, 8))(0x81L))))).s67))), 3UL, 0xB4L, 0x2FL, 0xC6L, 0xA2L)).odd)), p_21, 0xCCL, 0x81L, p_1466->g_735.s4, ((VECTOR(uint8_t, 4))(255UL)), 255UL, 0x8CL, 255UL, 0x1AL)))))))).se79d)), ((VECTOR(uint8_t, 2))(6UL)), 255UL, 0xD9L)).s7036474606070566, ((VECTOR(uint8_t, 16))(0x35L))))).hi, ((VECTOR(uint16_t, 8))(7UL)), ((VECTOR(uint16_t, 8))(0UL)))))))).s2, GROUP_DIVERGE(1, 1)))))), p_1466->g_939.x)) != (-1L)), p_21, p_1466->g_1140, p_1466), 0));
    for (p_1466->g_884 = 0; (p_1466->g_884 <= 31); p_1466->g_884 = safe_add_func_int8_t_s_s(p_1466->g_884, 5))
    { /* block id: 661 */
        int16_t *l_1382[6] = {&p_1466->g_32,(void*)0,&p_1466->g_32,&p_1466->g_32,(void*)0,&p_1466->g_32};
        int16_t **l_1383 = (void*)0;
        int16_t **l_1384 = (void*)0;
        int16_t **l_1385 = (void*)0;
        int16_t **l_1386 = &l_1382[1];
        union U0 *l_1387 = &p_1466->g_1363;
        int32_t *l_1388 = &p_1466->g_411;
        int i;
        if (p_20)
            break;
        p_20 = 0x52C7B526L;
        l_1388 = (p_1466->g_30 = &p_1466->g_3);
    }
    return l_1389;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_comm_values
 * writes:
 */
int16_t  func_22(uint32_t  p_23, int16_t  p_24, int64_t  p_25, uint64_t  p_26, struct S1 * p_1466)
{ /* block id: 7 */
    if ((atomic_inc(&p_1466->g_atomic_input[33 * get_linear_group_id() + 32]) == 4))
    { /* block id: 9 */
        uint32_t l_33 = 4294967295UL;
        int8_t l_332 = 1L;
        l_33--;
        for (l_33 = 0; (l_33 <= 21); l_33 = safe_add_func_int16_t_s_s(l_33, 7))
        { /* block id: 13 */
            uint16_t l_38 = 0x6FBCL;
            uint32_t l_39 = 0x7E91C178L;
            VECTOR(int64_t, 4) l_40 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L);
            int64_t l_41 = 3L;
            int64_t l_42[4][7] = {{1L,1L,(-3L),(-5L),(-3L),0x6A83CD0CD8A6CE2EL,(-3L)},{1L,1L,(-3L),(-5L),(-3L),0x6A83CD0CD8A6CE2EL,(-3L)},{1L,1L,(-3L),(-5L),(-3L),0x6A83CD0CD8A6CE2EL,(-3L)},{1L,1L,(-3L),(-5L),(-3L),0x6A83CD0CD8A6CE2EL,(-3L)}};
            int32_t l_43 = 9L;
            uint32_t l_44 = 0x05F459CAL;
            uint16_t l_45 = 0UL;
            VECTOR(int64_t, 2) l_46 = (VECTOR(int64_t, 2))(0x3772679F1A7DFAE3L, (-1L));
            uint32_t l_47 = 0x398C3D34L;
            VECTOR(int64_t, 8) l_48 = (VECTOR(int64_t, 8))(0x233C9E48991CD3C6L, (VECTOR(int64_t, 4))(0x233C9E48991CD3C6L, (VECTOR(int64_t, 2))(0x233C9E48991CD3C6L, 0x5A6EDB5B29219798L), 0x5A6EDB5B29219798L), 0x5A6EDB5B29219798L, 0x233C9E48991CD3C6L, 0x5A6EDB5B29219798L);
            uint16_t l_49 = 65526UL;
            VECTOR(int64_t, 2) l_50 = (VECTOR(int64_t, 2))(0x1663317A7F359A12L, 9L);
            VECTOR(uint16_t, 2) l_51 = (VECTOR(uint16_t, 2))(9UL, 65530UL);
            uint16_t l_52 = 1UL;
            VECTOR(uint32_t, 16) l_53 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967295UL), 4294967295UL), 4294967295UL, 7UL, 4294967295UL, (VECTOR(uint32_t, 2))(7UL, 4294967295UL), (VECTOR(uint32_t, 2))(7UL, 4294967295UL), 7UL, 4294967295UL, 7UL, 4294967295UL);
            int8_t l_54 = 0x04L;
            VECTOR(int64_t, 8) l_55 = (VECTOR(int64_t, 8))(0x55501D2D5FA56760L, (VECTOR(int64_t, 4))(0x55501D2D5FA56760L, (VECTOR(int64_t, 2))(0x55501D2D5FA56760L, 0x2EBC018302A6F411L), 0x2EBC018302A6F411L), 0x2EBC018302A6F411L, 0x55501D2D5FA56760L, 0x2EBC018302A6F411L);
            VECTOR(int64_t, 8) l_56 = (VECTOR(int64_t, 8))(0x79ABEFA6B6B07C15L, (VECTOR(int64_t, 4))(0x79ABEFA6B6B07C15L, (VECTOR(int64_t, 2))(0x79ABEFA6B6B07C15L, 0x3E9F7A6BAE6AC69BL), 0x3E9F7A6BAE6AC69BL), 0x3E9F7A6BAE6AC69BL, 0x79ABEFA6B6B07C15L, 0x3E9F7A6BAE6AC69BL);
            VECTOR(int64_t, 4) l_57 = (VECTOR(int64_t, 4))(0x4FE46DA0476F2A9EL, (VECTOR(int64_t, 2))(0x4FE46DA0476F2A9EL, 0x641D31AB14A3D9B2L), 0x641D31AB14A3D9B2L);
            VECTOR(int64_t, 4) l_58 = (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 1L), 1L);
            uint32_t l_59 = 0x5FC6D38CL;
            uint32_t l_60 = 4294967287UL;
            uint8_t l_61 = 0x76L;
            int32_t l_63 = 0x11DD11AFL;
            int32_t *l_62[1][5][10] = {{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}}};
            int64_t l_142 = 0x4189D4E1C92445BCL;
            int i, j, k;
            l_62[0][3][5] = (((VECTOR(uint32_t, 8))(4294967295UL, ((l_61 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(0x66DABAC8EF34EA88L, (-8L))).yyxxxyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))((l_39 = l_38), ((VECTOR(int64_t, 2))(l_40.yx)), 0x5BEFC7127B1AA435L)).even, ((VECTOR(int64_t, 4))(0L, (l_41 , ((l_42[1][4] = 3L) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x77FAE0CD5C0F4FD1L, 0x04085EFBE72F236BL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x1817887B34174AA7L, (l_47 = (((l_45 = (l_44 = l_43)) , 0xB094C655EF1C8D21L) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_46.xy)).xxyx)).x)), ((VECTOR(int64_t, 2))(l_48.s17)), 1L, l_49, 1L, 5L)).odd)), 0x5209D081799B58ECL, 0x661979B9986219E2L)).hi)).z)), 0x011E3584F79AABF6L, 0x5492233FFCD553B7L)).hi))).yyyxyxxy)))), ((VECTOR(int64_t, 16))(l_50.xxyyyyyxyxyxyyyy)).lo))), ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_51.yxyxxxyx)))))).s2 , l_52) , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_53.seaa3ce9d1bba4ba9)).hi)).s7 , l_54)), 0x44ADEF089E30C926L, ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_55.s26)).yyyyxyxy)).s55, ((VECTOR(int64_t, 2))(l_56.s76))))).xyxxyyyyxyyxxyyx, ((VECTOR(int64_t, 4))(l_57.zwzx)).xxyyyyxzzywzwwyy))).s4, ((VECTOR(int64_t, 2))(l_58.wx)), ((l_59 = 0xE631L) , l_60), 0x2AE175A398955587L, 0x6FA44EC192D0F567L)).sd) , 4294967292UL), 4294967295UL, ((VECTOR(uint32_t, 4))(5UL)), 0x41E62B99L)).s2 , l_62[0][3][5]);
            for (l_58.z = (-1); (l_58.z <= 29); ++l_58.z)
            { /* block id: 24 */
                int32_t l_66 = 0x3588D280L;
                int32_t l_67 = 0x07F6A708L;
                uint8_t l_68 = 0UL;
                int32_t *l_141 = &l_66;
                l_68++;
                for (l_67 = (-25); (l_67 != 7); l_67 = safe_add_func_int64_t_s_s(l_67, 8))
                { /* block id: 28 */
                    int32_t l_73 = 6L;
                    uint16_t l_99 = 0UL;
                    for (l_73 = 0; (l_73 != (-13)); l_73--)
                    { /* block id: 31 */
                        int8_t l_76 = 0L;
                        uint8_t l_77 = 0xF3L;
                        int32_t *l_78 = (void*)0;
                        VECTOR(int8_t, 8) l_79 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
                        VECTOR(int8_t, 8) l_80 = (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-3L)), (-3L)), (-3L), (-9L), (-3L));
                        VECTOR(int8_t, 8) l_81 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x0EL), 0x0EL), 0x0EL, 4L, 0x0EL);
                        VECTOR(int8_t, 16) l_82 = (VECTOR(int8_t, 16))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x77L), 0x77L), 0x77L, 0x03L, 0x77L, (VECTOR(int8_t, 2))(0x03L, 0x77L), (VECTOR(int8_t, 2))(0x03L, 0x77L), 0x03L, 0x77L, 0x03L, 0x77L);
                        int32_t l_84 = 0x7C07259FL;
                        int32_t *l_83[10] = {&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84};
                        int32_t *l_85 = (void*)0;
                        uint32_t l_86 = 0x55FA4026L;
                        int i;
                        l_76 = 0L;
                        l_62[0][3][5] = (l_77 , l_78);
                        l_62[0][3][5] = (l_85 = (((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_79.s1001335442665220)))).s20, ((VECTOR(int8_t, 8))(l_80.s46431477)).s03, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_81.s3456)).xzywxzwzxxyxzyyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_82.sb9)).xyxxxyyx)).s1133243533001253))).s25))).hi , l_83[7]));
                        l_86--;
                    }
                    for (l_73 = 0; (l_73 > (-24)); l_73 = safe_sub_func_int8_t_s_s(l_73, 2))
                    { /* block id: 40 */
                        uint32_t l_91 = 0x8CC4BB82L;
                        uint32_t l_94 = 0xC4F2F584L;
                        int32_t l_95 = 0x1B86E869L;
                        int32_t l_97[3][10] = {{0L,(-1L),2L,0x4014C235L,0x6A4836ABL,0L,0x4014C235L,0L,0x4014C235L,0L},{0L,(-1L),2L,0x4014C235L,0x6A4836ABL,0L,0x4014C235L,0L,0x4014C235L,0L},{0L,(-1L),2L,0x4014C235L,0x6A4836ABL,0L,0x4014C235L,0L,0x4014C235L,0L}};
                        int32_t *l_96[7][3][8] = {{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}},{{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]},{&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[1][8],&l_97[2][9],(void*)0,&l_97[1][8],&l_97[2][1]}}};
                        int32_t *l_98 = &l_97[1][8];
                        int i, j, k;
                        l_91--;
                        l_94 &= 0x1C2BC1C0L;
                        l_98 = (l_62[0][0][4] = (l_95 , l_96[4][0][4]));
                    }
                    l_73 = l_99;
                    for (l_73 = 26; (l_73 == 16); l_73--)
                    { /* block id: 49 */
                        int64_t l_102[8];
                        int64_t l_103 = (-3L);
                        int i;
                        for (i = 0; i < 8; i++)
                            l_102[i] = (-1L);
                        l_103 |= l_102[6];
                    }
                }
                for (l_68 = (-28); (l_68 < 2); ++l_68)
                { /* block id: 55 */
                    VECTOR(int32_t, 4) l_106 = (VECTOR(int32_t, 4))(0x0FAA5422L, (VECTOR(int32_t, 2))(0x0FAA5422L, 0x13BA38B5L), 0x13BA38B5L);
                    VECTOR(uint32_t, 2) l_107 = (VECTOR(uint32_t, 2))(0xF76FE418L, 0xD0CB5F59L);
                    uint16_t l_108[7][7] = {{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL},{0x2FFEL,65535UL,0x2FFEL,0x2FFEL,65535UL,0x2FFEL,0x2FFEL}};
                    VECTOR(uint32_t, 2) l_109 = (VECTOR(uint32_t, 2))(0xFFD37754L, 0xD22BE5E2L);
                    VECTOR(uint32_t, 4) l_110 = (VECTOR(uint32_t, 4))(0xDC5F9BFDL, (VECTOR(uint32_t, 2))(0xDC5F9BFDL, 1UL), 1UL);
                    uint32_t l_111 = 4294967294UL;
                    uint32_t l_112 = 0xE61D7D12L;
                    int64_t l_113 = (-2L);
                    VECTOR(uint32_t, 2) l_114 = (VECTOR(uint32_t, 2))(0xB3F44D47L, 0x2723F935L);
                    VECTOR(uint32_t, 8) l_115 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x3C435FADL), 0x3C435FADL), 0x3C435FADL, 4294967295UL, 0x3C435FADL);
                    int64_t l_116[1][9];
                    VECTOR(uint32_t, 2) l_117 = (VECTOR(uint32_t, 2))(0x4561C010L, 4294967288UL);
                    VECTOR(uint32_t, 2) l_118 = (VECTOR(uint32_t, 2))(0x65C1E2D5L, 4294967286UL);
                    VECTOR(uint32_t, 8) l_119 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
                    VECTOR(int64_t, 8) l_120 = (VECTOR(int64_t, 8))(0x04A121D4F9B34B0AL, (VECTOR(int64_t, 4))(0x04A121D4F9B34B0AL, (VECTOR(int64_t, 2))(0x04A121D4F9B34B0AL, 0x69385D059B001829L), 0x69385D059B001829L), 0x69385D059B001829L, 0x04A121D4F9B34B0AL, 0x69385D059B001829L);
                    VECTOR(int8_t, 16) l_121 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x61L), 0x61L), 0x61L, 0L, 0x61L, (VECTOR(int8_t, 2))(0L, 0x61L), (VECTOR(int8_t, 2))(0L, 0x61L), 0L, 0x61L, 0L, 0x61L);
                    VECTOR(int8_t, 16) l_122 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7CL), 0x7CL), 0x7CL, (-1L), 0x7CL, (VECTOR(int8_t, 2))((-1L), 0x7CL), (VECTOR(int8_t, 2))((-1L), 0x7CL), (-1L), 0x7CL, (-1L), 0x7CL);
                    uint8_t l_123 = 6UL;
                    uint32_t l_124 = 4294967295UL;
                    int8_t l_125 = (-1L);
                    int32_t l_126 = (-5L);
                    uint8_t l_127 = 255UL;
                    VECTOR(int32_t, 4) l_128 = (VECTOR(int32_t, 4))(0x7AA4ADD0L, (VECTOR(int32_t, 2))(0x7AA4ADD0L, 0x5383C10CL), 0x5383C10CL);
                    int32_t l_129 = (-10L);
                    int64_t l_130 = 0L;
                    uint8_t l_131[5] = {0x01L,0x01L,0x01L,0x01L,0x01L};
                    int16_t l_132 = 1L;
                    uint8_t l_133 = 1UL;
                    int16_t l_134[4] = {(-7L),(-7L),(-7L),(-7L)};
                    int32_t l_135 = 7L;
                    VECTOR(int8_t, 16) l_136 = (VECTOR(int8_t, 16))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0x3EL), 0x3EL), 0x3EL, 0x08L, 0x3EL, (VECTOR(int8_t, 2))(0x08L, 0x3EL), (VECTOR(int8_t, 2))(0x08L, 0x3EL), 0x08L, 0x3EL, 0x08L, 0x3EL);
                    uint8_t l_137 = 4UL;
                    uint64_t l_138 = 1UL;
                    int32_t l_139 = 5L;
                    int32_t l_140 = 0x43896C70L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_116[i][j] = (-1L);
                    }
                    l_125 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_106.yx)), ((VECTOR(int32_t, 8))((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_107.yyyx)))).lo, ((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(l_108[5][6], 0x0E55F7E0L, 6UL, ((VECTOR(uint32_t, 2))(l_109.xy)), 0UL, (l_60 &= ((VECTOR(uint32_t, 4))(l_110.zyzy)).w), ((VECTOR(uint32_t, 2))(0x01620824L, 0x807974F8L)), 0x80C63ED8L, 0UL, (l_53.sc ^= l_111), l_112, 0UL, 0xCB9073E8L, 1UL)), ((VECTOR(uint32_t, 2))(0xB8878B81L, 4294967295UL)).yxyyxyyxyyyxyyyx))).s23, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(0xD6ECED94L, l_113, 0x552920A8L, 0x55BADF45L, ((VECTOR(uint32_t, 4))(l_114.xxyy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_115.s43)).yxxx)), 0x258F3143L, ((l_106.y = (l_116[0][0] = 3L)) , (l_53.se &= ((VECTOR(uint32_t, 16))(l_117.yyyxxyyxxyyxyyxx)).se)), 1UL, 0x7017BC32L)).s3d, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_118.yx)), 0x7F21A038L, 0x2A3EB5BAL)).hi)))))), 0x51559326L, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_119.s55301652)).s07)), ((VECTOR(uint32_t, 2))(0x718D19A3L, 4294967295UL))))), (((VECTOR(int64_t, 4))(l_120.s4033)).z , (((((VECTOR(int8_t, 16))(l_121.s964d51499a76e999)).s3 , ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_122.sc681fb4f)).odd)).yxxxxyzx)).s3102266035224160, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x06L, 0x4FL, 0x79L, 0x49L)), 0x42L, 0x2DL, 0x4EL, 0L, (-2L), 0x6DL, 0x71L, 0x1CL, ((VECTOR(int8_t, 2))(0x5FL)), 0L, (-1L)))))).s53)), 1L, (-1L))).xxzxzwww, ((VECTOR(int8_t, 8))((-1L)))))).s2) , 0x880EL) , l_123)), 0x1B62D161L, 4294967295UL)).odd, ((VECTOR(uint32_t, 4))(0x190DC9CCL))))).wyxxxzwzyzxyzxzx)).sa , l_124), 0x7C83ECCDL, ((VECTOR(int32_t, 4))(9L)), (-8L), 0x218FF7ECL)).s02))), ((VECTOR(int32_t, 2))(0x1208D764L)), ((VECTOR(int32_t, 4))(0x439DA6AAL)))).s3;
                    l_106.y ^= (l_127 ^= l_126);
                    l_126 |= (l_129 ^= ((VECTOR(int32_t, 16))(l_128.xxzyyzyzxwxxwxzw)).s6);
                    l_140 = ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_130, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x09221738L)).lo, 0x4F8168FEL, ((VECTOR(int32_t, 4))(l_131[3], (-10L), (-3L), (-1L))), 0x62D6D25AL, 0x4678B7D3L)).s1120330206600361)))).s81)), 0x5E08B522L, (-1L))), 0x729E55A8L, 0L, 0x32C8D880L)).s5351332134131152)).odd, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_132, l_133, l_134[2], ((VECTOR(int32_t, 2))(0x67E062F4L, 0x3161C58AL)), 0L, l_135, 0x651C5C8AL, 0x53CAB266L, ((l_54 = ((VECTOR(int8_t, 16))(l_136.scfd49a66f5dfc347)).s0) , (l_126 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((l_138 = (l_128.x = l_137)), 0x4E5FEA34L, ((VECTOR(int32_t, 4))(0L)), 0L, ((VECTOR(int32_t, 4))(0L)), l_139, ((VECTOR(int32_t, 2))((-3L))), 0x6E78E42AL, 0x670D45C5L)).s6ba3)).w)), 9L, (-1L), 0x198FB878L, ((VECTOR(int32_t, 2))(0x24FE2243L)), 1L)))), ((VECTOR(int32_t, 16))((-1L)))))).odd, ((VECTOR(int32_t, 8))((-3L)))))).s0;
                }
                l_62[0][3][8] = l_141;
            }
            if (l_142)
            { /* block id: 74 */
                uint16_t l_143 = 65534UL;
                VECTOR(int32_t, 8) l_186 = (VECTOR(int32_t, 8))(0x77442A28L, (VECTOR(int32_t, 4))(0x77442A28L, (VECTOR(int32_t, 2))(0x77442A28L, 0x1A8FB665L), 0x1A8FB665L), 0x1A8FB665L, 0x77442A28L, 0x1A8FB665L);
                int32_t l_187 = 0x46F6AF20L;
                int16_t l_228 = 0x25DDL;
                uint8_t l_229 = 0xA0L;
                int i;
                --l_143;
                for (l_143 = (-30); (l_143 > 41); l_143 = safe_add_func_int8_t_s_s(l_143, 8))
                { /* block id: 78 */
                    int32_t l_148 = 0L;
                    int8_t l_185 = (-1L);
                    for (l_148 = 26; (l_148 <= 8); l_148 = safe_sub_func_uint8_t_u_u(l_148, 3))
                    { /* block id: 81 */
                        int16_t l_151 = 0x6B80L;
                        int32_t l_152[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_152[i] = 0x4E9AC76DL;
                        l_152[0] = l_151;
                    }
                    for (l_148 = (-26); (l_148 > 8); l_148 = safe_add_func_int32_t_s_s(l_148, 3))
                    { /* block id: 86 */
                        int32_t l_155 = (-6L);
                        uint32_t l_156 = 0x61B82DB4L;
                        union U0 l_160 = {0x01L};/* VOLATILE GLOBAL l_160 */
                        union U0 *l_159 = &l_160;
                        VECTOR(uint16_t, 16) l_161 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x2844L), 0x2844L), 0x2844L, 6UL, 0x2844L, (VECTOR(uint16_t, 2))(6UL, 0x2844L), (VECTOR(uint16_t, 2))(6UL, 0x2844L), 6UL, 0x2844L, 6UL, 0x2844L);
                        VECTOR(uint16_t, 2) l_162 = (VECTOR(uint16_t, 2))(0xF0B6L, 0UL);
                        int32_t l_163 = 0x027D3682L;
                        VECTOR(uint16_t, 2) l_164 = (VECTOR(uint16_t, 2))(5UL, 0UL);
                        VECTOR(uint16_t, 8) l_165 = (VECTOR(uint16_t, 8))(0x9D5AL, (VECTOR(uint16_t, 4))(0x9D5AL, (VECTOR(uint16_t, 2))(0x9D5AL, 0x2D3EL), 0x2D3EL), 0x2D3EL, 0x9D5AL, 0x2D3EL);
                        VECTOR(uint16_t, 16) l_166 = (VECTOR(uint16_t, 16))(0xBA41L, (VECTOR(uint16_t, 4))(0xBA41L, (VECTOR(uint16_t, 2))(0xBA41L, 65535UL), 65535UL), 65535UL, 0xBA41L, 65535UL, (VECTOR(uint16_t, 2))(0xBA41L, 65535UL), (VECTOR(uint16_t, 2))(0xBA41L, 65535UL), 0xBA41L, 65535UL, 0xBA41L, 65535UL);
                        uint32_t l_167 = 0xE8AEA080L;
                        VECTOR(uint16_t, 2) l_168 = (VECTOR(uint16_t, 2))(0UL, 0x6898L);
                        uint64_t l_169 = 4UL;
                        int64_t l_170 = 1L;
                        VECTOR(uint16_t, 4) l_171 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x34C5L), 0x34C5L);
                        VECTOR(int32_t, 16) l_172 = (VECTOR(int32_t, 16))(0x6A2FED3EL, (VECTOR(int32_t, 4))(0x6A2FED3EL, (VECTOR(int32_t, 2))(0x6A2FED3EL, 6L), 6L), 6L, 0x6A2FED3EL, 6L, (VECTOR(int32_t, 2))(0x6A2FED3EL, 6L), (VECTOR(int32_t, 2))(0x6A2FED3EL, 6L), 0x6A2FED3EL, 6L, 0x6A2FED3EL, 6L);
                        uint16_t l_173 = 6UL;
                        VECTOR(uint16_t, 8) l_174 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8804L), 0x8804L), 0x8804L, 0UL, 0x8804L);
                        VECTOR(uint16_t, 2) l_175 = (VECTOR(uint16_t, 2))(0UL, 0UL);
                        int32_t l_176 = (-1L);
                        uint32_t l_177 = 4294967288UL;
                        VECTOR(uint64_t, 8) l_178 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                        uint64_t l_179 = 0xF00ECB8A3075B599L;
                        int8_t l_180 = 0x02L;
                        int64_t l_181 = 0x0D3324805C14573AL;
                        int16_t l_182 = 0x086EL;
                        int64_t l_183 = 1L;
                        int32_t *l_184 = (void*)0;
                        int i;
                        ++l_156;
                        l_159 = l_159;
                        l_183 = (((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(l_161.sf21bf4d37c6442fd)), ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(l_162.xxxyyxxxxyxxxyxx)).s06, ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 0UL)).yxxxxxyx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))((l_163 , FAKE_DIVERGE(p_1466->global_0_offset, get_global_id(0), 10)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_164.yx)))).yyxy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(l_165.s7656)), ((VECTOR(uint16_t, 4))(l_166.sdd74))))).yywzwzyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(l_167, ((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(l_168.xy)), 0UL)), 65535UL, 0xD44FL, 65534UL, 0x872CL, 1UL, ((l_169 , (-1L)) , (l_51.y = 0x4E20L)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(l_170, ((VECTOR(uint16_t, 16))(l_171.wxxxzyyxwxzxyzxy)).sa, (l_165.s5 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_172.s4d87)), ((VECTOR(int32_t, 2))(0L, 0x190088FAL)), 0x61CA1143L, 0x5EF22C59L)).s6 , l_173)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(l_174.s05)), (uint16_t)((VECTOR(uint16_t, 8))(l_175.xxyxyyyx)).s7))).yyxx)), (l_176 , l_177), l_178.s7, ((VECTOR(uint16_t, 2))(1UL)), 1UL, l_179, ((VECTOR(uint16_t, 2))(1UL)), 65526UL)).odd, ((VECTOR(uint16_t, 8))(65534UL))))).s31)), 0xA994L, 0x5D97L, 8UL)).s7a, ((VECTOR(uint16_t, 2))(0xDC20L))))), 0xBE12L)).wwwwxzxzwywzzzwx, (uint16_t)4UL))).s1bac)), l_180, l_181, 65535UL, 0x5395L))))).s32)).xyyyyxxy))).s61)), 0x37EFL)))).s2445361701520317, ((VECTOR(uint16_t, 16))(0x69D0L))))).s1e)))).xyyx)).yxyxwywx))))).s56, ((VECTOR(uint16_t, 2))(65526UL))))).xyyxxyxxyyxxyxyx))).s7 , l_182);
                        l_62[0][2][9] = l_184;
                    }
                    l_148 = l_185;
                }
                if ((l_187 ^= ((VECTOR(int32_t, 2))(l_186.s61)).hi))
                { /* block id: 97 */
                    int8_t l_188[7][9][2] = {{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}},{{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L},{1L,0x12L}}};
                    int64_t l_189 = (-5L);
                    uint32_t l_190 = 0UL;
                    uint32_t l_191 = 0UL;
                    VECTOR(int16_t, 8) l_192 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x2C6AL), 0x2C6AL), 0x2C6AL, (-2L), 0x2C6AL);
                    VECTOR(int64_t, 8) l_193 = (VECTOR(int64_t, 8))(0x047CAE5D46BA36E7L, (VECTOR(int64_t, 4))(0x047CAE5D46BA36E7L, (VECTOR(int64_t, 2))(0x047CAE5D46BA36E7L, (-5L)), (-5L)), (-5L), 0x047CAE5D46BA36E7L, (-5L));
                    VECTOR(int64_t, 8) l_194 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
                    VECTOR(int64_t, 2) l_195 = (VECTOR(int64_t, 2))(0x48A2C21A14966EDCL, 0x5292B819E5F4FC6CL);
                    uint32_t l_196 = 4294967295UL;
                    VECTOR(uint32_t, 16) l_197 = (VECTOR(uint32_t, 16))(0x8E2EAF07L, (VECTOR(uint32_t, 4))(0x8E2EAF07L, (VECTOR(uint32_t, 2))(0x8E2EAF07L, 0x3A8B888BL), 0x3A8B888BL), 0x3A8B888BL, 0x8E2EAF07L, 0x3A8B888BL, (VECTOR(uint32_t, 2))(0x8E2EAF07L, 0x3A8B888BL), (VECTOR(uint32_t, 2))(0x8E2EAF07L, 0x3A8B888BL), 0x8E2EAF07L, 0x3A8B888BL, 0x8E2EAF07L, 0x3A8B888BL);
                    uint8_t l_198[7][3];
                    int8_t l_199 = 0x5CL;
                    int32_t l_200 = 0x41986C06L;
                    VECTOR(int64_t, 2) l_201 = (VECTOR(int64_t, 2))(1L, 2L);
                    VECTOR(int64_t, 2) l_202 = (VECTOR(int64_t, 2))(0x4512B726A70D89AAL, 0L);
                    VECTOR(uint32_t, 16) l_203 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x80D1E5C2L), 0x80D1E5C2L), 0x80D1E5C2L, 1UL, 0x80D1E5C2L, (VECTOR(uint32_t, 2))(1UL, 0x80D1E5C2L), (VECTOR(uint32_t, 2))(1UL, 0x80D1E5C2L), 1UL, 0x80D1E5C2L, 1UL, 0x80D1E5C2L);
                    VECTOR(int16_t, 16) l_204 = (VECTOR(int16_t, 16))(0x1EEAL, (VECTOR(int16_t, 4))(0x1EEAL, (VECTOR(int16_t, 2))(0x1EEAL, 0L), 0L), 0L, 0x1EEAL, 0L, (VECTOR(int16_t, 2))(0x1EEAL, 0L), (VECTOR(int16_t, 2))(0x1EEAL, 0L), 0x1EEAL, 0L, 0x1EEAL, 0L);
                    uint16_t l_205 = 0x8C37L;
                    uint16_t l_206[10] = {0xB473L,0UL,0xB473L,0xB473L,0UL,0xB473L,0xB473L,0UL,0xB473L,0xB473L};
                    int32_t l_208 = 0x7EF009BAL;
                    int32_t *l_207 = &l_208;
                    int32_t *l_209 = &l_208;
                    int8_t l_210 = 0x41L;
                    int32_t l_211 = 0x521B3147L;
                    int32_t l_212 = 0x406B1899L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_198[i][j] = 0xD8L;
                    }
                    l_190 = (l_189 = (l_188[4][6][0] = 1L));
                    l_209 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((l_192.s4 |= l_191), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 4))(l_193.s3032)).xwzxzxzywwwwwywy))).odd)).s3, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(l_194.s3447)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_195.yxyx)).lo)).yxyxyyxxxxxyxyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))((-3L), 0x5466516C3827196CL, 0x47265DA1E0E5EE3BL, ((VECTOR(int64_t, 2))(1L, 0x7F21E62AD69AD41CL)), (((VECTOR(uint32_t, 2))(0x2E8EBB75L, 0x02EC37B4L)).even , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(l_196, ((VECTOR(uint32_t, 2))(0UL, 4294967292UL)), 0x715A6FE4L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_197.sf6)), 0x74F38294L, 4294967286UL)).wwwwyxyw)).odd))).yxzwxxyxwyxzzzxz)).hi)).s2 , (l_198[4][2] , (l_189 ^= 1L)))), 0x5BE71DB8A99B1767L, 0L)).s63, (int64_t)(l_142 &= l_199), (int64_t)0x14B6D74209ECD1DAL))).xyyxyyxy)).s7350326746271771))).s28, ((VECTOR(int64_t, 8))(1L, l_200, ((VECTOR(int64_t, 4))(l_201.yyxy)), 7L, 6L)).s43))).xxxxyxxx)).even, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(l_202.yyyy)), ((VECTOR(int64_t, 4))(((l_44 ^= ((VECTOR(uint32_t, 8))(0UL, 0UL, ((VECTOR(uint32_t, 4))(l_203.sc58b)), 1UL, 0xFD94E125L)).s0) , 1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((l_42[1][4] = l_204.s4), (-10L), l_205, l_206[2], (-1L), 0x078AA55EECBC77C4L, 0x165DB6DB1B38B637L, (-7L))).s24)), 0x5C6CC01759944B1AL))))).odd, ((VECTOR(int64_t, 2))(0x6BBA2241ECDA24C8L))))).xyyx))), 0x38E97200648590ADL, 4L)))).s4 , l_207);
                    l_211 = l_210;
                    (*l_209) = l_212;
                }
                else
                { /* block id: 109 */
                    int8_t l_213 = (-1L);
                    int16_t l_214 = 0x1E47L;
                    VECTOR(int32_t, 4) l_215 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3ABF24EDL), 0x3ABF24EDL);
                    uint16_t l_216 = 65535UL;
                    VECTOR(int32_t, 4) l_217 = (VECTOR(int32_t, 4))(0x31516107L, (VECTOR(int32_t, 2))(0x31516107L, 1L), 1L);
                    VECTOR(int16_t, 2) l_218 = (VECTOR(int16_t, 2))(0x1AB8L, 0x60C7L);
                    VECTOR(int16_t, 2) l_219 = (VECTOR(int16_t, 2))(0x0BFDL, 0x12C7L);
                    VECTOR(int16_t, 2) l_220 = (VECTOR(int16_t, 2))(0x5E4DL, 1L);
                    VECTOR(int16_t, 2) l_221 = (VECTOR(int16_t, 2))(1L, 0L);
                    int32_t l_222 = (-6L);
                    VECTOR(int16_t, 4) l_223 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-6L)), (-6L));
                    VECTOR(int16_t, 16) l_224 = (VECTOR(int16_t, 16))(0x4447L, (VECTOR(int16_t, 4))(0x4447L, (VECTOR(int16_t, 2))(0x4447L, 0x1CBAL), 0x1CBAL), 0x1CBAL, 0x4447L, 0x1CBAL, (VECTOR(int16_t, 2))(0x4447L, 0x1CBAL), (VECTOR(int16_t, 2))(0x4447L, 0x1CBAL), 0x4447L, 0x1CBAL, 0x4447L, 0x1CBAL);
                    VECTOR(uint16_t, 8) l_225 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65535UL), 65535UL), 65535UL, 2UL, 65535UL);
                    int32_t l_226 = 0x4EAE1FFCL;
                    uint32_t l_227 = 9UL;
                    int i;
                    l_214 |= l_213;
                    l_227 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_215.zxxzyyyy)).s3, l_216, ((VECTOR(int32_t, 2))(l_217.yz)).odd, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-2L), 0x01FAL)))))), ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(l_218.xxyxyxyxxyyyxxyx)).s210c, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_219.xyyxxxyyyxyyyxxy)))).even, ((VECTOR(int16_t, 8))(l_220.yyxyyyyx))))).lo, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(l_221.yxyyyyxxxxxyyyxy)), ((VECTOR(int16_t, 16))(0x091EL, 1L, 0x46ACL, l_222, (-1L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_223.wyzxyyyzwwxxwwzw)).odd)), ((VECTOR(int16_t, 2))(0L, 0L)), 0x3A71L))))).sce9f))).hi)).xyxy, ((VECTOR(int16_t, 2))(0x1DEAL, (-1L))).yyxy)))))))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_224.sa4)).xxxyyxyx)).even))))).zxzyyxyzwyxywxwz, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_225.s01211431)).lo)).zyxyxzywwxxyxwxw))).sb4))), l_226, 0x618BF561L, 1L)).s4;
                }
                l_229--;
            }
            else
            { /* block id: 114 */
                VECTOR(int16_t, 8) l_232 = (VECTOR(int16_t, 8))(0x095AL, (VECTOR(int16_t, 4))(0x095AL, (VECTOR(int16_t, 2))(0x095AL, 0L), 0L), 0L, 0x095AL, 0L);
                int64_t l_233 = (-1L);
                uint32_t l_234 = 0xE5848D3FL;
                int64_t l_235 = 0x21748FBCABF82D76L;
                VECTOR(int32_t, 4) l_236 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x53FFEE43L), 0x53FFEE43L);
                uint32_t l_237 = 6UL;
                VECTOR(int32_t, 16) l_238 = (VECTOR(int32_t, 16))(0x4C3FDFB1L, (VECTOR(int32_t, 4))(0x4C3FDFB1L, (VECTOR(int32_t, 2))(0x4C3FDFB1L, (-8L)), (-8L)), (-8L), 0x4C3FDFB1L, (-8L), (VECTOR(int32_t, 2))(0x4C3FDFB1L, (-8L)), (VECTOR(int32_t, 2))(0x4C3FDFB1L, (-8L)), 0x4C3FDFB1L, (-8L), 0x4C3FDFB1L, (-8L));
                VECTOR(int32_t, 8) l_239 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1446AC04L), 0x1446AC04L), 0x1446AC04L, 1L, 0x1446AC04L);
                VECTOR(int32_t, 2) l_240 = (VECTOR(int32_t, 2))(0x74B08A3AL, (-9L));
                int16_t l_241 = 0x3749L;
                uint64_t l_242 = 9UL;
                uint16_t l_243 = 0x6072L;
                VECTOR(int32_t, 2) l_244 = (VECTOR(int32_t, 2))(0x5F80C493L, 0x231D4DF0L);
                VECTOR(int32_t, 16) l_245 = (VECTOR(int32_t, 16))(0x627F84D9L, (VECTOR(int32_t, 4))(0x627F84D9L, (VECTOR(int32_t, 2))(0x627F84D9L, 0L), 0L), 0L, 0x627F84D9L, 0L, (VECTOR(int32_t, 2))(0x627F84D9L, 0L), (VECTOR(int32_t, 2))(0x627F84D9L, 0L), 0x627F84D9L, 0L, 0x627F84D9L, 0L);
                VECTOR(int32_t, 4) l_246 = (VECTOR(int32_t, 4))(0x20A40B29L, (VECTOR(int32_t, 2))(0x20A40B29L, 0x1AC21637L), 0x1AC21637L);
                VECTOR(int32_t, 8) l_247 = (VECTOR(int32_t, 8))(0x4FE28CE1L, (VECTOR(int32_t, 4))(0x4FE28CE1L, (VECTOR(int32_t, 2))(0x4FE28CE1L, 0x300D93FBL), 0x300D93FBL), 0x300D93FBL, 0x4FE28CE1L, 0x300D93FBL);
                int32_t l_248 = (-3L);
                VECTOR(int32_t, 8) l_249 = (VECTOR(int32_t, 8))(0x74F5EA74L, (VECTOR(int32_t, 4))(0x74F5EA74L, (VECTOR(int32_t, 2))(0x74F5EA74L, 0x1DE906DDL), 0x1DE906DDL), 0x1DE906DDL, 0x74F5EA74L, 0x1DE906DDL);
                VECTOR(int32_t, 8) l_250 = (VECTOR(int32_t, 8))(0x469D5A3EL, (VECTOR(int32_t, 4))(0x469D5A3EL, (VECTOR(int32_t, 2))(0x469D5A3EL, 0x012171F3L), 0x012171F3L), 0x012171F3L, 0x469D5A3EL, 0x012171F3L);
                uint64_t l_251 = 0UL;
                uint16_t l_252 = 1UL;
                int32_t l_253 = 0L;
                int8_t l_254 = (-9L);
                uint32_t l_255 = 0x4388C200L;
                int64_t l_256[5] = {0x686A73992D6179AEL,0x686A73992D6179AEL,0x686A73992D6179AEL,0x686A73992D6179AEL,0x686A73992D6179AEL};
                int32_t l_257 = 0x408F1F41L;
                uint32_t l_258 = 4294967295UL;
                int i;
                if (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(l_232.s1570542365412243)), (int16_t)l_233))).s9e, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(0x8A6EL, GROUP_DIVERGE(0, 1), ((l_234 , l_235) , (l_51.x = (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_236.yxxw)))).zxzzzyyxxwyyxwyz)), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((l_237 , (l_250.s3 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_238.sad)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x096DA540L, 0x44A7FC88L)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_239.s56055564)).s34)).xxyyyxyx)).even, ((VECTOR(int32_t, 2))(0x17C4DEB6L, 0x0F77E53FL)).yxyy))).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), 0x1B4DF1B7L)), (-6L), 0x79E480F2L)).lo, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_240.yyxxyxxxyyyxxxxx)).lo, ((VECTOR(int32_t, 2))((-1L), 0x1C19789FL)).xxyyyyyx))).s51))), 0x49731991L, 0x3E002D6EL)), l_241, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, (-7L), (l_242 , (l_243 , (l_240.x ^= ((VECTOR(int32_t, 4))(l_244.xyyx)).w))), ((VECTOR(int32_t, 4))(l_245.s164e)), 0x5074E60AL)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_246.yy)).xxyxxxxx)).even)), ((VECTOR(int32_t, 4))(l_247.s0214)), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(0x78DA3C8AL, 0x0DB5D001L))))), (((l_248 , ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_249.s1635)).xyzxwyww)).s05, ((VECTOR(int32_t, 4))(l_250.s6771)).odd))).xyyxxyyy, ((VECTOR(int32_t, 2))(0x5E5C95E5L, 0x48A1E380L)).xyyyyxyy))).s5) , l_251) , 0x692BAA9EL), 2L, 0x7305FA41L, 0x361C8AC3L, l_252, ((VECTOR(int32_t, 4))(0x32F5332AL)), 1L, ((VECTOR(int32_t, 4))(0x48B13025L)))), ((VECTOR(int32_t, 16))(1L))))).s4c69))), ((VECTOR(int32_t, 2))((-1L))), 4L, 8L)).lo, (int32_t)l_253, (int32_t)l_254))), ((VECTOR(int32_t, 4))(1L))))), l_255, 0L, 0L, 0x6DB7AEB7L)).s2593)))), ((VECTOR(int32_t, 4))(0L)), l_256[0], 0L, 0x4C3BD628L)).se3))), 0x5CBE6D67L, 0x35ACF67EL, l_257, ((VECTOR(int32_t, 2))(0x62D47C7DL)), ((VECTOR(int32_t, 2))((-10L))), 0x6D4D81FDL, ((VECTOR(int32_t, 4))(0L)))).s63bb)), ((VECTOR(int32_t, 4))(0x583004FEL)), 0x656CE504L, ((VECTOR(int32_t, 4))(0x7CAD7FDCL)), 0L, 0x2C5FE589L)).s0)), l_258, ((VECTOR(int32_t, 2))((-9L))), 1L, 0x4154CD35L, 0x4593456AL, ((VECTOR(int32_t, 8))(1L)), 8L)).lo, ((VECTOR(int32_t, 8))(0x50B42871L)), ((VECTOR(int32_t, 8))(4L))))).s2150735411241121))).s57)).yyyx, ((VECTOR(int32_t, 4))((-1L)))))).y , GROUP_DIVERGE(1, 1)))), 0x69DCL, ((VECTOR(uint16_t, 2))(0xD05DL)), ((VECTOR(uint16_t, 8))(0x17C3L)), 0x3E67L, 0x120EL)).saa, ((VECTOR(uint16_t, 2))(1UL)))))))).yxyyxyyyxyxyyyxy, ((VECTOR(int32_t, 16))(2L)), ((VECTOR(int32_t, 16))(0x356072FFL))))).s7)
                { /* block id: 118 */
                    uint16_t l_259 = 0x4C36L;
                    int32_t l_260 = 0x6A1B7AEEL;
                    VECTOR(int64_t, 2) l_261 = (VECTOR(int64_t, 2))(0x04AB10585EAEFBCFL, 0L);
                    uint32_t l_262 = 0xADD49B0BL;
                    VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x45B0738AL), 0x45B0738AL), 0x45B0738AL, 4L, 0x45B0738AL);
                    int i;
                    l_260 = l_259;
                    l_262 = l_261.y;
                    for (l_259 = 0; (l_259 != 58); l_259++)
                    { /* block id: 123 */
                        int32_t l_265[2];
                        int32_t *l_267 = &l_265[0];
                        int32_t **l_266 = &l_267;
                        int32_t **l_268 = &l_267;
                        uint16_t l_269 = 0x1999L;
                        int64_t l_272 = 0x5EE46925A65C302FL;
                        int8_t l_273 = 1L;
                        uint32_t l_274 = 0x8B763320L;
                        int32_t l_277 = 0x33B06748L;
                        uint16_t l_278 = 65530UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_265[i] = 1L;
                        l_268 = (l_265[0] , l_266);
                        --l_269;
                        l_274++;
                        l_278++;
                    }
                    if (((VECTOR(int32_t, 4))(l_281.s4515)).x)
                    { /* block id: 129 */
                        union U0 *l_283 = (void*)0;
                        union U0 **l_282 = &l_283;
                        union U0 **l_284[10][8][3] = {{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}},{{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0},{&l_283,(void*)0,(void*)0}}};
                        int64_t l_285 = 0L;
                        int16_t l_286[9];
                        int16_t l_287 = 9L;
                        uint8_t l_288[1][6];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_286[i] = 0x6C84L;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_288[i][j] = 0xA7L;
                        }
                        l_284[9][4][1] = l_282;
                        ++l_288[0][5];
                        l_62[0][3][5] = (void*)0;
                    }
                    else
                    { /* block id: 133 */
                        int16_t l_291 = 0x088CL;
                        l_291 = 6L;
                    }
                }
                else
                { /* block id: 136 */
                    int32_t l_292 = 0L;
                    int8_t l_293 = 0x6CL;
                    VECTOR(int32_t, 8) l_294 = (VECTOR(int32_t, 8))(0x1BEE8F93L, (VECTOR(int32_t, 4))(0x1BEE8F93L, (VECTOR(int32_t, 2))(0x1BEE8F93L, 0x232DB572L), 0x232DB572L), 0x232DB572L, 0x1BEE8F93L, 0x232DB572L);
                    VECTOR(int32_t, 8) l_295 = (VECTOR(int32_t, 8))(0x62843406L, (VECTOR(int32_t, 4))(0x62843406L, (VECTOR(int32_t, 2))(0x62843406L, 1L), 1L), 1L, 0x62843406L, 1L);
                    VECTOR(int32_t, 8) l_296 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0ECC281DL), 0x0ECC281DL), 0x0ECC281DL, 1L, 0x0ECC281DL);
                    int32_t l_297 = 0x55108CFCL;
                    uint32_t l_298 = 4294967295UL;
                    VECTOR(int32_t, 4) l_299 = (VECTOR(int32_t, 4))(0x1433418EL, (VECTOR(int32_t, 2))(0x1433418EL, 1L), 1L);
                    VECTOR(int32_t, 4) l_300 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x7802E40AL), 0x7802E40AL);
                    VECTOR(int32_t, 4) l_301 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 2L), 2L);
                    VECTOR(int32_t, 4) l_302 = (VECTOR(int32_t, 4))(0x64CCFBCFL, (VECTOR(int32_t, 2))(0x64CCFBCFL, 0x5CB58361L), 0x5CB58361L);
                    uint64_t l_303[7][10][3] = {{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}},{{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL},{0xA73B1F44EBC241BFL,0x5CEE79E778426AC0L,0UL}}};
                    int8_t l_304 = 0x32L;
                    uint32_t l_305[5][1][1] = {{{0xC16733E5L}},{{0xC16733E5L}},{{0xC16733E5L}},{{0xC16733E5L}},{{0xC16733E5L}}};
                    uint64_t l_306 = 0xA594981EA6BDB9CBL;
                    int32_t l_307 = (-8L);
                    uint32_t l_308[1];
                    uint32_t l_309[4] = {1UL,1UL,1UL,1UL};
                    int32_t l_310 = 6L;
                    uint8_t l_311 = 248UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_308[i] = 4294967286UL;
                    l_311 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(0x03BD8B65L, l_292, 0x19DB32BBL, l_293, (-1L), 0L, 0x1EFE29CFL, 1L, 0L, ((VECTOR(int32_t, 2))(l_294.s70)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_295.s3312625427534366)).sd7a2, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_296.s4540)).even, (int32_t)(l_298 = l_297)))).yyyy, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1006909BL, 0x3063821AL, 1L, 2L)), 0x089B286FL, 1L, 0L, 1L)), ((VECTOR(int32_t, 2))(l_299.xw)).yyxxyxyx, ((VECTOR(int32_t, 8))(l_300.xywxxyzy))))).odd))), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_301.xzyyyxzz)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_302.zzxyxywx)).s4225374603173615)).lo))).s54, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((((l_305[2][0][0] = ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(0L, (-1L))).xyyxxxyy, (int64_t)l_303[1][7][2]))).s1, l_304, 0x56AF7FF2847BBCC7L, 0x7951EBFE72A0BCBDL)), ((VECTOR(int64_t, 4))((-1L)))))).y) , 0x44EAL) , l_306), ((VECTOR(int32_t, 2))((-1L))), 0x18A9D4E2L, ((VECTOR(int32_t, 8))(9L)), l_307, l_308[0], (-1L), 0x485574EFL)).even)).s4557552771565571)).sec)).yxxy, ((VECTOR(int32_t, 4))(1L))))).even))).yyyxxxyxyyxxxxyy)).odd)).s46, ((VECTOR(int32_t, 2))(0x4533ADC3L)), ((VECTOR(int32_t, 2))(0x6C6C433EL))))), 0x51D9E5E4L, (-1L))).s50, ((VECTOR(int32_t, 2))(0x17CBC052L))))), 0L, 0x051076CBL, 0x3ED1CCF4L)).s61, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x5A639FB5L))))).yyyxxxyxxyxyyyxx)).s3, (-1L), (-9L), ((VECTOR(int32_t, 4))(0x10C95C6CL)), 8L, 0x5D255FA5L, (-4L), ((VECTOR(int32_t, 2))(0x2B63FD90L)), l_309[3], l_310, 3L, 1L)))).s4;
                    for (l_293 = 0; (l_293 < (-25)); l_293--)
                    { /* block id: 142 */
                        uint32_t l_314 = 0x1BFC9C5FL;
                        uint32_t l_315 = 0UL;
                        VECTOR(int16_t, 16) l_316 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 4L), 4L), 4L, 4L, 4L, (VECTOR(int16_t, 2))(4L, 4L), (VECTOR(int16_t, 2))(4L, 4L), 4L, 4L, 4L, 4L);
                        uint16_t l_317 = 65528UL;
                        VECTOR(int32_t, 4) l_318 = (VECTOR(int32_t, 4))(0x7B2D6D63L, (VECTOR(int32_t, 2))(0x7B2D6D63L, (-9L)), (-9L));
                        VECTOR(int32_t, 4) l_319 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x171F1D62L), 0x171F1D62L);
                        VECTOR(int32_t, 8) l_320 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x40AC47FAL), 0x40AC47FAL), 0x40AC47FAL, 5L, 0x40AC47FAL);
                        int32_t l_321 = 5L;
                        uint32_t l_322 = 0x2993CE7CL;
                        int32_t l_323 = 0x773ACBE8L;
                        VECTOR(uint16_t, 2) l_324 = (VECTOR(uint16_t, 2))(0x4A5CL, 0UL);
                        VECTOR(int32_t, 2) l_325 = (VECTOR(int32_t, 2))(0x523E813FL, 0x27343193L);
                        int16_t l_326[8][6] = {{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L},{1L,1L,8L,1L,1L,1L}};
                        int32_t l_327 = 0x3298362EL;
                        int16_t l_328 = (-2L);
                        uint32_t l_329 = 4294967293UL;
                        int32_t *l_330 = (void*)0;
                        int32_t *l_331 = (void*)0;
                        int i, j;
                        l_315 &= l_314;
                        l_329 ^= (((l_50.x = (((VECTOR(int16_t, 8))((-8L), 0x0E20L, 0L, 8L, 0x7ADBL, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_316.s33e39ac6)).s2, ((l_326[1][4] = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_317, 0L, (-1L), ((VECTOR(int32_t, 2))((-1L), 2L)), ((VECTOR(int32_t, 2))(l_318.yx)), (-3L))).odd)).xzxxxxwwwyzyxzyw, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(0x67BE0837L, (-4L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_319.ywzx)))), 0L, 0x175FE45AL)).odd, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_320.s1534152543734341)).s2b8c, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_321, 0x7A734FC8L, ((VECTOR(int32_t, 2))(0x5115A926L, (-1L))), (l_320.s0 = (l_322 , (l_323 , (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_324.xx)), 0x4E9DL, 0x3396L)).zywzzwxzwxwwzwzx)).sa , 0x005BF890L)))), (l_325.x = 0x05C9A7E7L), ((VECTOR(int32_t, 8))(0x6E3F9FCAL)), 1L, 0x625E212CL)).s8a)).xyyy, ((VECTOR(int32_t, 4))((-7L))))))))).lo, ((VECTOR(int32_t, 2))(0x20A155F1L)), ((VECTOR(int32_t, 2))(0L))))).yyyyyxyxxyxxyxyy))).se) , 1L), l_327, 0x6695L, ((VECTOR(int16_t, 8))(0x6413L)), ((VECTOR(int16_t, 2))(0x4F15L)), 0L, (-1L))).s2, 0L, (-4L))).s0 , 0x29CF573E7D1366A9L)) , 0x7F2020C8A78B807FL) , l_328);
                        l_331 = (l_330 = (l_62[0][1][5] = (void*)0));
                    }
                }
            }
        }
        if (l_332)
        { /* block id: 156 */
            int32_t l_333 = 0L;
            VECTOR(int32_t, 4) l_334 = (VECTOR(int32_t, 4))(0x1071B454L, (VECTOR(int32_t, 2))(0x1071B454L, (-1L)), (-1L));
            int64_t l_335 = 1L;
            uint8_t l_336[1][8] = {{6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL}};
            int32_t l_337 = 0x4BEC1ACBL;
            int8_t l_338 = (-1L);
            uint32_t l_339 = 0UL;
            int8_t l_340 = (-1L);
            int64_t l_341 = 0x1A9332873FE5B699L;
            int32_t l_342 = 0x7B31274FL;
            int16_t l_343 = 0x72F3L;
            int16_t l_344 = 3L;
            VECTOR(int64_t, 2) l_345 = (VECTOR(int64_t, 2))(0x043FD51B06BEB363L, 0x472CE8FFD9226A75L);
            int i, j;
            l_343 ^= (l_342 = (l_333 , (l_341 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_334.xzwx)), (l_334.w = l_335), ((VECTOR(int32_t, 4))(4L, 0L, 7L, 0L)), (l_338 = (l_336[0][1] , l_337)), 1L, ((VECTOR(int32_t, 4))((-1L), (l_339 , (l_340 = (-1L))), (-3L), (-1L))), 0L)))).s2)));
            l_345.x &= l_344;
        }
        else
        { /* block id: 164 */
            int32_t l_346 = 1L;
            int32_t l_408 = 0x7EC6212AL;
            int8_t l_409 = (-4L);
            for (l_346 = 6; (l_346 < (-1)); l_346 = safe_sub_func_uint64_t_u_u(l_346, 7))
            { /* block id: 167 */
                int32_t l_350 = 0x56A3E920L;
                int32_t *l_349 = &l_350;
                int16_t l_361 = 1L;
                uint32_t l_362 = 0UL;
                VECTOR(int32_t, 16) l_363 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
                VECTOR(int32_t, 8) l_364 = (VECTOR(int32_t, 8))(0x42C4DEBBL, (VECTOR(int32_t, 4))(0x42C4DEBBL, (VECTOR(int32_t, 2))(0x42C4DEBBL, 0x133BA33EL), 0x133BA33EL), 0x133BA33EL, 0x42C4DEBBL, 0x133BA33EL);
                int64_t l_365 = 0x6C453A6D93444D77L;
                int32_t l_366 = 1L;
                VECTOR(int32_t, 4) l_367 = (VECTOR(int32_t, 4))(0x69B76ED0L, (VECTOR(int32_t, 2))(0x69B76ED0L, 1L), 1L);
                VECTOR(int32_t, 16) l_368 = (VECTOR(int32_t, 16))(0x2511D667L, (VECTOR(int32_t, 4))(0x2511D667L, (VECTOR(int32_t, 2))(0x2511D667L, 0x53ABB9C8L), 0x53ABB9C8L), 0x53ABB9C8L, 0x2511D667L, 0x53ABB9C8L, (VECTOR(int32_t, 2))(0x2511D667L, 0x53ABB9C8L), (VECTOR(int32_t, 2))(0x2511D667L, 0x53ABB9C8L), 0x2511D667L, 0x53ABB9C8L, 0x2511D667L, 0x53ABB9C8L);
                uint64_t l_369 = 18446744073709551615UL;
                int64_t l_370 = 0L;
                VECTOR(int32_t, 4) l_371 = (VECTOR(int32_t, 4))(0x30FE98D5L, (VECTOR(int32_t, 2))(0x30FE98D5L, 0x03B77AF9L), 0x03B77AF9L);
                int16_t l_372 = (-1L);
                VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4FEB9623L), 0x4FEB9623L);
                uint16_t l_374 = 1UL;
                VECTOR(int32_t, 4) l_375 = (VECTOR(int32_t, 4))(0x398AAAC9L, (VECTOR(int32_t, 2))(0x398AAAC9L, (-1L)), (-1L));
                VECTOR(int32_t, 8) l_376 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L);
                uint64_t l_377 = 0xEA1D862DE3A813C6L;
                uint32_t l_378 = 0xFC492F7DL;
                int8_t l_379 = 0L;
                uint64_t l_380 = 1UL;
                int i;
                l_349 = (void*)0;
                for (l_350 = (-23); (l_350 > (-29)); l_350--)
                { /* block id: 171 */
                    int32_t l_353[10][7] = {{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L},{0L,0x501EACE1L,0x0BC7B54BL,0x7C357E5DL,(-1L),0x24E67DB3L,0x24E67DB3L}};
                    int32_t l_354 = 1L;
                    union U0 l_357 = {5UL};/* VOLATILE GLOBAL l_357 */
                    union U0 *l_356 = &l_357;
                    union U0 **l_355[6][8][5] = {{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356}}};
                    int32_t l_358 = 0x3D961AD5L;
                    uint32_t l_359 = 4294967288UL;
                    uint32_t l_360 = 4294967295UL;
                    int i, j, k;
                    l_354 = l_353[4][6];
                    l_355[0][3][4] = (void*)0;
                    l_360 = (l_359 |= (FAKE_DIVERGE(p_1466->global_0_offset, get_global_id(0), 10) , l_358));
                }
                l_362 = l_361;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_363.s628d43ec)).odd, ((VECTOR(int32_t, 2))(0x6EFBAF48L, 0x29F1086AL)).xyyy))).wxzwzwzz, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_364.s06)), l_365, l_366, 0x0519C44AL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_367.wxzzzyyyxyxxzwwy)).s98)), 1L)).odd)), ((VECTOR(int32_t, 2))(l_368.s59)).yxxx))).xzyxzwyw, (int32_t)((VECTOR(int32_t, 16))(l_369, l_370, ((VECTOR(int32_t, 8))(l_371.zyzwxyxy)), ((VECTOR(int32_t, 4))(0x12B84B65L, 0x52049CB8L, (-9L), 0L)), 0x6A1B3AB3L, 0x52F68489L)).se, (int32_t)l_372))).s0506372406103342, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(l_373.wzywyzxz)).odd, (int32_t)l_374, (int32_t)0x4813AC81L))).xxwxwzxxzxyxyyyz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_375.xy)), 0x5C7B7F1EL, 5L)), (-10L), ((VECTOR(int32_t, 4))(l_376.s6637)).z, l_377, (-3L), (-6L), 0x07DFAAF6L, 0x3A72BCC1L, l_378, l_379, l_380, 0L, 6L)).sc2)), ((VECTOR(int32_t, 2))(0x7351CA03L))))).yxyxxyyy)).s3104724451104247))).odd))).lo)).x)
                { /* block id: 178 */
                    int16_t l_381 = 0x68E7L;
                    union U0 l_382 = {0x6BL};/* VOLATILE GLOBAL l_382 */
                    int32_t l_384 = 7L;
                    int32_t *l_383 = &l_384;
                    int32_t *l_385 = &l_384;
                    int32_t *l_386 = &l_384;
                    int32_t *l_387 = &l_384;
                    int32_t *l_388 = &l_384;
                    l_376.s7 = l_381;
                    l_385 = (l_382 , (l_349 = l_383));
                    l_388 = (l_387 = (GROUP_DIVERGE(0, 1) , l_386));
                }
                else
                { /* block id: 184 */
                    uint8_t l_389 = 0x25L;
                    l_389 |= (l_363.s9 = 0x7839DE2BL);
                }
            }
            for (l_346 = 0; (l_346 > 3); ++l_346)
            { /* block id: 191 */
                int16_t l_392 = 0x5257L;
                int8_t l_393[9];
                uint8_t l_394 = 0UL;
                uint32_t l_395[10] = {0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L,0x7FF838B5L};
                uint8_t l_398 = 0UL;
                int i;
                for (i = 0; i < 9; i++)
                    l_393[i] = 0L;
                l_393[6] = (l_392 &= 0x55048935L);
                l_394 = (-1L);
                l_395[7]--;
                if ((FAKE_DIVERGE(p_1466->group_2_offset, get_group_id(2), 10) , l_398))
                { /* block id: 196 */
                    VECTOR(uint8_t, 8) l_399 = (VECTOR(uint8_t, 8))(0xD8L, (VECTOR(uint8_t, 4))(0xD8L, (VECTOR(uint8_t, 2))(0xD8L, 0x3CL), 0x3CL), 0x3CL, 0xD8L, 0x3CL);
                    int32_t *l_400 = (void*)0;
                    int32_t l_402 = 0L;
                    int32_t *l_401 = &l_402;
                    int i;
                    l_401 = (((VECTOR(uint8_t, 16))(l_399.s4321433770537624)).s8 , l_400);
                }
                else
                { /* block id: 198 */
                    int32_t l_403 = 0x43D631A7L;
                    int64_t l_404[5][3][8] = {{{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)}},{{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)}},{{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)}},{{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)}},{{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)},{0L,0x764804271C02737AL,(-1L),0x764804271C02737AL,0L,0L,0x764804271C02737AL,(-1L)}}};
                    int32_t l_405 = 8L;
                    int64_t l_406 = 1L;
                    int32_t l_407[6][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
                    int i, j, k;
                    l_404[0][1][5] = l_403;
                    l_406 &= l_405;
                    l_407[4][0] = 0x07FE802BL;
                }
            }
            l_409 ^= l_408;
        }
        unsigned int result = 0;
        result += l_33;
        result += l_332;
        atomic_add(&p_1466->g_special_values[33 * get_linear_group_id() + 32], result);
    }
    else
    { /* block id: 206 */
        (1 + 1);
    }
    return p_1466->g_comm_values[p_1466->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_745 p_1466->g_902 p_1466->g_903 p_1466->g_411
 * writes: p_1466->g_411 p_1466->g_745
 */
int16_t  func_414(uint64_t  p_415, int16_t  p_416, int64_t  p_417, uint8_t  p_418, int16_t * p_419, struct S1 * p_1466)
{ /* block id: 506 */
    int32_t *l_1348 = &p_1466->g_411;
    union U0 *l_1364 = (void*)0;
    VECTOR(uint32_t, 8) l_1373 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x92444803L), 0x92444803L), 0x92444803L, 1UL, 0x92444803L);
    int32_t l_1378 = 0x09551B7FL;
    int i;
    if ((atomic_inc(&p_1466->g_atomic_input[33 * get_linear_group_id() + 11]) == 9))
    { /* block id: 508 */
        uint32_t l_1141 = 4UL;
        VECTOR(int32_t, 16) l_1269 = (VECTOR(int32_t, 16))(0x78AAA371L, (VECTOR(int32_t, 4))(0x78AAA371L, (VECTOR(int32_t, 2))(0x78AAA371L, 1L), 1L), 1L, 0x78AAA371L, 1L, (VECTOR(int32_t, 2))(0x78AAA371L, 1L), (VECTOR(int32_t, 2))(0x78AAA371L, 1L), 0x78AAA371L, 1L, 0x78AAA371L, 1L);
        VECTOR(int32_t, 2) l_1270 = (VECTOR(int32_t, 2))(0x5592BD74L, 0x23A1C3E9L);
        VECTOR(int32_t, 16) l_1271 = (VECTOR(int32_t, 16))(0x38EE1581L, (VECTOR(int32_t, 4))(0x38EE1581L, (VECTOR(int32_t, 2))(0x38EE1581L, 0x7D3AA620L), 0x7D3AA620L), 0x7D3AA620L, 0x38EE1581L, 0x7D3AA620L, (VECTOR(int32_t, 2))(0x38EE1581L, 0x7D3AA620L), (VECTOR(int32_t, 2))(0x38EE1581L, 0x7D3AA620L), 0x38EE1581L, 0x7D3AA620L, 0x38EE1581L, 0x7D3AA620L);
        VECTOR(int32_t, 4) l_1272 = (VECTOR(int32_t, 4))(0x3C34810DL, (VECTOR(int32_t, 2))(0x3C34810DL, (-10L)), (-10L));
        uint8_t l_1273 = 0xE2L;
        int32_t *l_1344 = (void*)0;
        int32_t *l_1345 = (void*)0;
        int i;
        if (l_1141)
        { /* block id: 509 */
            int32_t l_1143[7][8] = {{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L},{8L,0L,0x1D99FAC0L,(-5L),0x340046ABL,(-5L),0x1D99FAC0L,0L}};
            int32_t *l_1142 = &l_1143[2][7];
            uint32_t l_1144 = 0xFA9D4D40L;
            uint64_t l_1145 = 0UL;
            int i, j;
            l_1142 = (void*)0;
            l_1145 = l_1144;
        }
        else
        { /* block id: 512 */
            int64_t l_1146 = 0x011A1E9B488F6A04L;
            if (l_1146)
            { /* block id: 513 */
                int64_t l_1147[9][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
                uint32_t l_1148 = 0x42DC3590L;
                uint32_t l_1189[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1189[i] = 0UL;
                if ((l_1148 = l_1147[8][0]))
                { /* block id: 515 */
                    uint32_t l_1149 = 0x083447ADL;
                    int32_t l_1157 = 0x79288D10L;
                    int32_t *l_1156 = &l_1157;
                    uint8_t l_1158[10][1][10] = {{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}},{{1UL,246UL,0x73L,0x43L,246UL,0x43L,0x73L,246UL,1UL,1UL}}};
                    int i, j, k;
                    l_1149 = 8L;
                    for (l_1149 = (-9); (l_1149 != 24); ++l_1149)
                    { /* block id: 519 */
                        uint16_t l_1152 = 65535UL;
                        uint8_t l_1153 = 0x7FL;
                        int32_t l_1154 = 0x3F6C216DL;
                        uint8_t l_1155 = 0x86L;
                        l_1153 &= l_1152;
                        l_1155 = l_1154;
                    }
                    l_1156 = (void*)0;
                    if ((l_1158[2][0][0] = 0x047C2C06L))
                    { /* block id: 525 */
                        uint16_t l_1159 = 0xA953L;
                        int16_t l_1162 = 0x3D6AL;
                        VECTOR(uint32_t, 16) l_1163 = (VECTOR(uint32_t, 16))(0x4C8F97FBL, (VECTOR(uint32_t, 4))(0x4C8F97FBL, (VECTOR(uint32_t, 2))(0x4C8F97FBL, 0xA2E463DEL), 0xA2E463DEL), 0xA2E463DEL, 0x4C8F97FBL, 0xA2E463DEL, (VECTOR(uint32_t, 2))(0x4C8F97FBL, 0xA2E463DEL), (VECTOR(uint32_t, 2))(0x4C8F97FBL, 0xA2E463DEL), 0x4C8F97FBL, 0xA2E463DEL, 0x4C8F97FBL, 0xA2E463DEL);
                        int64_t l_1168 = (-7L);
                        int64_t *l_1167[3];
                        int64_t **l_1166 = &l_1167[0];
                        int64_t **l_1169 = &l_1167[2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1167[i] = &l_1168;
                        ++l_1159;
                        l_1162 = (l_1157 = 7L);
                        ++l_1163.s9;
                        l_1169 = l_1166;
                    }
                    else
                    { /* block id: 531 */
                        uint64_t l_1170 = 0x4ED88992005D3B81L;
                        l_1157 |= l_1170;
                    }
                }
                else
                { /* block id: 534 */
                    int32_t l_1171[10][2] = {{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L},{(-3L),0x7D1E4B42L}};
                    VECTOR(int64_t, 16) l_1172 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x4CF57E0C33EB12FCL), 0x4CF57E0C33EB12FCL), 0x4CF57E0C33EB12FCL, 1L, 0x4CF57E0C33EB12FCL, (VECTOR(int64_t, 2))(1L, 0x4CF57E0C33EB12FCL), (VECTOR(int64_t, 2))(1L, 0x4CF57E0C33EB12FCL), 1L, 0x4CF57E0C33EB12FCL, 1L, 0x4CF57E0C33EB12FCL);
                    VECTOR(uint64_t, 8) l_1173 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                    VECTOR(uint64_t, 8) l_1174 = (VECTOR(uint64_t, 8))(0x05C43FF270C246B8L, (VECTOR(uint64_t, 4))(0x05C43FF270C246B8L, (VECTOR(uint64_t, 2))(0x05C43FF270C246B8L, 0x594A2B12DC0B1EFEL), 0x594A2B12DC0B1EFEL), 0x594A2B12DC0B1EFEL, 0x05C43FF270C246B8L, 0x594A2B12DC0B1EFEL);
                    uint64_t l_1175[6][2][10] = {{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}},{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}},{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}},{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}},{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}},{{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L},{7UL,18446744073709551613UL,0x111E1116ED00BCD8L,0UL,0x111E1116ED00BCD8L,18446744073709551613UL,7UL,0x6B25772DC98701CBL,18446744073709551615UL,0x8335B98427CE8AC5L}}};
                    uint32_t l_1178 = 0UL;
                    VECTOR(uint64_t, 2) l_1179 = (VECTOR(uint64_t, 2))(0xB04DD0579F2E6820L, 0UL);
                    VECTOR(uint64_t, 4) l_1180 = (VECTOR(uint64_t, 4))(0x53DC344150953F03L, (VECTOR(uint64_t, 2))(0x53DC344150953F03L, 0x1E7FC22D45BAADA6L), 0x1E7FC22D45BAADA6L);
                    uint32_t l_1181[2][9][10] = {{{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL}},{{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL},{0x0C297E27L,0x72C33508L,1UL,1UL,1UL,1UL,1UL,0x72C33508L,0x0C297E27L,1UL}}};
                    int16_t l_1182 = 0x1F01L;
                    int32_t l_1183[2][10][10] = {{{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL}},{{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL},{0x6E9D6051L,0x6E9D6051L,0x30D3888FL,(-7L),0L,(-7L),0x30D3888FL,0x6E9D6051L,0x6E9D6051L,0x30D3888FL}}};
                    int64_t l_1184 = 0x7C1EFB3372F5AA94L;
                    uint8_t l_1185 = 0x62L;
                    int64_t l_1186 = 0x7FDCBE615792117BL;
                    uint8_t l_1187 = 253UL;
                    int8_t l_1188[5][1][4] = {{{6L,0x4EL,6L,6L}},{{6L,0x4EL,6L,6L}},{{6L,0x4EL,6L,6L}},{{6L,0x4EL,6L,6L}},{{6L,0x4EL,6L,6L}}};
                    int i, j, k;
                    l_1171[2][0] = ((VECTOR(int32_t, 2))((-1L), 5L)).lo;
                    l_1188[3][0][1] = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(l_1172.s04f47b5a)).s64))), 0UL, 0xC142AB6EA29D7357L, 18446744073709551613UL, 0UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_1173.s7705)).hi)).yxyx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(7UL, 0xF78E962D556CB7D3L)).xyxy, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(0xD5F32D8BBE4B0C37L, 0x42D0F88FE46492E3L)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL))))))).xyyy, ((VECTOR(uint64_t, 16))(0x159098F8BA21247EL, 8UL, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1174.s37)), 0xB7150B69EF5879E3L, 0x5652E5D531355A6CL)), ((VECTOR(uint64_t, 4))(8UL, 1UL, 0xAAE65F57A56E040AL, 0UL))))), 0x45B372C763A36154L, ((VECTOR(uint64_t, 4))((--l_1175[1][0][0]), 1UL, 0UL, 0UL)).z, GROUP_DIVERGE(0, 1), l_1178, 18446744073709551615UL, 0x96C7547FC347A1B7L, ((VECTOR(uint64_t, 2))(0x92344C2B4452A912L, 0x966A43DF68B9D0E0L)), 0UL, 0xDB19A02443C5B94AL)).s89ca))).even)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(0xFAD1B2D004DF55C4L, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(l_1179.yx)).yxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_1180.wwwxyxxwwyzxwxww)).s9b)).yxxy))))))), 18446744073709551613UL, 0UL)).s71, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0x0F5B60C1C99895ACL, 0x202168AF1353781EL, 1UL, ((VECTOR(uint64_t, 2))(0xD616E584720F142AL, 0xD423E1E7B790C5A9L)), 18446744073709551613UL, 18446744073709551613UL, 18446744073709551615UL)).odd)))), ((VECTOR(uint64_t, 8))((l_1183[0][9][6] = (l_1182 = l_1181[0][3][0])), ((VECTOR(uint64_t, 4))(0x50B9DBA737CFACC2L, 7UL, 18446744073709551607UL, 0xE6B170A5E2EC9E64L)).w, l_1184, l_1185, l_1186, 0x8DC63AD8DDBFC605L, 0x90BA9BB2AF6212F1L, 0xCDB1C79C5B559D10L)).even))))).lo))), 1UL, 18446744073709551615UL)))).sf , l_1187);
                }
                l_1189[1] |= 0x64D2950EL;
            }
            else
            { /* block id: 542 */
                uint64_t l_1190 = 0xD6F47661C4ABF45FL;
                if (l_1190)
                { /* block id: 543 */
                    int32_t l_1191 = 0x1869CD47L;
                    int64_t l_1192 = 0x14BD75412ADE975EL;
                    uint32_t l_1193 = 0x4EDACC41L;
                    int32_t l_1196 = 0x6CA60FAEL;
                    int32_t l_1197 = 6L;
                    int16_t l_1198 = 0L;
                    VECTOR(int32_t, 4) l_1199 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L));
                    int i;
                    --l_1193;
                    l_1198 = ((l_1197 &= l_1196) , 0L);
                    if (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(l_1199.wwxzzxzzxzxyxzwy)), ((VECTOR(int32_t, 2))(0x029A3DCBL, 0x30425E36L)).xxxyxyyxyxxxyxxx, ((VECTOR(int32_t, 2))(0x653C4180L, (-5L))).xxyyxxxyyyyyxxxy))).s2)
                    { /* block id: 547 */
                        int32_t l_1201 = (-6L);
                        int32_t *l_1200 = &l_1201;
                        int32_t *l_1202[2][7][2] = {{{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0}},{{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0},{&l_1201,(void*)0}}};
                        uint64_t l_1205 = 0xAB4416CD5A07270EL;
                        uint64_t *l_1204 = &l_1205;
                        uint64_t **l_1203[7][2] = {{&l_1204,&l_1204},{&l_1204,&l_1204},{&l_1204,&l_1204},{&l_1204,&l_1204},{&l_1204,&l_1204},{&l_1204,&l_1204},{&l_1204,&l_1204}};
                        uint16_t l_1206 = 0x7F78L;
                        int i, j, k;
                        l_1202[1][4][1] = l_1200;
                        l_1203[2][0] = (void*)0;
                        l_1206--;
                        l_1199.y = 0x7EB558F6L;
                    }
                    else
                    { /* block id: 552 */
                        VECTOR(int32_t, 4) l_1209 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5778992AL), 0x5778992AL);
                        int32_t *l_1210[9];
                        VECTOR(uint16_t, 4) l_1211 = (VECTOR(uint16_t, 4))(0xB90AL, (VECTOR(uint16_t, 2))(0xB90AL, 0xC4A3L), 0xC4A3L);
                        VECTOR(uint16_t, 8) l_1212 = (VECTOR(uint16_t, 8))(0x007BL, (VECTOR(uint16_t, 4))(0x007BL, (VECTOR(uint16_t, 2))(0x007BL, 0x5433L), 0x5433L), 0x5433L, 0x007BL, 0x5433L);
                        VECTOR(uint16_t, 2) l_1213 = (VECTOR(uint16_t, 2))(0UL, 1UL);
                        VECTOR(uint16_t, 16) l_1214 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                        int32_t l_1215 = 0x61CC25FDL;
                        uint16_t l_1216 = 65532UL;
                        uint8_t l_1217[2];
                        int32_t l_1218 = (-9L);
                        int64_t l_1219 = 0x25C9F54EE0BEF84DL;
                        VECTOR(uint8_t, 2) l_1220 = (VECTOR(uint8_t, 2))(0x9BL, 0x60L);
                        VECTOR(uint8_t, 4) l_1221 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 251UL), 251UL);
                        VECTOR(uint8_t, 2) l_1222 = (VECTOR(uint8_t, 2))(9UL, 0x54L);
                        VECTOR(uint8_t, 4) l_1223 = (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 0UL), 0UL);
                        VECTOR(uint8_t, 16) l_1224 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
                        VECTOR(uint8_t, 2) l_1225 = (VECTOR(uint8_t, 2))(255UL, 1UL);
                        uint8_t l_1226 = 255UL;
                        int32_t l_1227 = 1L;
                        int32_t l_1228[3];
                        int32_t l_1229 = 1L;
                        int64_t l_1230 = 0x19FF18BB1B458873L;
                        uint64_t l_1231 = 0x2F54CAAEC4FAE6C4L;
                        int8_t l_1234 = 0x31L;
                        VECTOR(uint8_t, 2) l_1235 = (VECTOR(uint8_t, 2))(0x19L, 0xA8L);
                        VECTOR(uint8_t, 8) l_1236 = (VECTOR(uint8_t, 8))(0x69L, (VECTOR(uint8_t, 4))(0x69L, (VECTOR(uint8_t, 2))(0x69L, 0x46L), 0x46L), 0x46L, 0x69L, 0x46L);
                        VECTOR(uint8_t, 2) l_1237 = (VECTOR(uint8_t, 2))(0x27L, 0x02L);
                        int16_t l_1238[8] = {0x4495L,0x02B4L,0x4495L,0x4495L,0x02B4L,0x4495L,0x4495L,0x02B4L};
                        int32_t l_1239 = 0x4859D5EDL;
                        uint32_t l_1240 = 1UL;
                        int32_t *l_1241[8] = {&l_1227,&l_1227,&l_1227,&l_1227,&l_1227,&l_1227,&l_1227,&l_1227};
                        int32_t *l_1242 = (void*)0;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1210[i] = (void*)0;
                        for (i = 0; i < 2; i++)
                            l_1217[i] = 0UL;
                        for (i = 0; i < 3; i++)
                            l_1228[i] = 0x60F42C4BL;
                        l_1209.y = ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 5L)).xxxy)), ((VECTOR(int32_t, 16))(l_1209.ywyxzxxyyxzwxwwy)).sbb2c))).lo))))).hi;
                        l_1210[8] = l_1210[3];
                        l_1197 = 0x5ECDE0CBL;
                        l_1242 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(l_1211.zxzxyyyxyywyyxzz)).odd, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(l_1212.s2457)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_1213.yxyyyyxyyxyyyyyx)))).even)).even))).xxzzxwwy))).s3536517552263137))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1214.sc2)).xxxxyyxx)).s7204331701672067, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))((l_1215 &= 65535UL), ((VECTOR(uint16_t, 16))(65535UL, (l_1216 , ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(8UL, 65527UL)), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0UL, (l_1218 = (l_1217[1] = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 0x4BL)), 0UL, 253UL)).x)), 255UL, 0UL)).xwwyxwxywxzyxyxw)).s26b3)).wxzxzzww))).s77)).xyyyyxxyyxxxxxyx, (uint8_t)l_1219, (uint8_t)((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(2UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1220.yy)), 0x53L, 0x04L)), 1UL, 0x50L, 0xA8L)).s77, ((VECTOR(uint8_t, 16))(l_1221.zywxzywyxxwxxyxz)).s3b))).yyyyxyyyxyxyyyxy, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(0xC6L, 0x63L)), ((VECTOR(uint8_t, 2))(0x71L, 255UL))))).xxyyyyxx, ((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(l_1222.xx)).xyxyyxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_1223.zxxxyzzx)).s55, ((VECTOR(uint8_t, 4))(l_1224.s41a5)).even))), ((VECTOR(uint8_t, 2))(l_1225.yx))))).yyxxyyyxxxyyyxxx)).even))).s0, ((VECTOR(uint8_t, 16))((l_1226 , ((l_1191 = 1L) , l_1227)), l_1228[0], (l_1239 |= ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 0x99L)), 2UL, 0x02L, (l_1231--), l_1234, 0x14L, 250UL)).s53, ((VECTOR(uint8_t, 8))(l_1235.xxyxyxxx)).s71))).yyyxyyyy))).s0625153071556441, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(l_1236.s1723)).yywwxxwzxzyzwzyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(6UL, ((VECTOR(uint8_t, 4))(l_1237.xyxx)), 254UL, ((VECTOR(uint8_t, 2))(255UL)), 0UL, 2UL, 1UL, l_1238[3], ((VECTOR(uint8_t, 4))(5UL)))).s25, ((VECTOR(uint8_t, 2))(0UL))))))).xxxxyyyyxyxyxxyy))), ((VECTOR(uint8_t, 16))(0x62L))))).sdd)).even), ((VECTOR(uint8_t, 2))(0x1FL)), 0x7EL, ((VECTOR(uint8_t, 4))(253UL)), ((VECTOR(uint8_t, 2))(0x15L)), 255UL, 8UL, 255UL, 0xB7L)).sa, ((VECTOR(uint8_t, 4))(1UL)), 1UL))))).s0617754534627741))).sd))), ((VECTOR(uint8_t, 16))(0UL))))).s19))), ((VECTOR(uint16_t, 2))(0xE51AL))))).even), 0UL, ((VECTOR(uint16_t, 4))(0xC5EEL)), 0xFAABL, 65528UL, GROUP_DIVERGE(0, 1), l_1240, 0x9BBEL, ((VECTOR(uint16_t, 4))(0x345DL)))).s5, 0x4EAEL, 0UL, ((VECTOR(uint16_t, 2))(0xB4FAL)), 65535UL, 65528UL)).s34, ((VECTOR(uint16_t, 2))(1UL))))).xxyy)).zxywxzxxzwywywxz))).even)).s30, ((VECTOR(uint16_t, 2))(0x9FF4L))))).xxyyyxyx, ((VECTOR(uint32_t, 8))(0xFE49E5DDL))))), ((VECTOR(uint32_t, 8))(0x58F58AD6L))))).s06)).hi , l_1241[2]);
                    }
                    for (l_1196 = 0; (l_1196 > (-15)); l_1196 = safe_sub_func_uint32_t_u_u(l_1196, 3))
                    { /* block id: 566 */
                        int32_t l_1246 = 9L;
                        int32_t *l_1245 = &l_1246;
                        int32_t *l_1247[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1247[i] = &l_1246;
                        l_1247[0] = l_1245;
                    }
                }
                else
                { /* block id: 569 */
                    int32_t l_1249 = 0L;
                    int32_t *l_1248[3];
                    int32_t *l_1250 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1248[i] = &l_1249;
                    l_1250 = l_1248[0];
                    for (l_1249 = 0; (l_1249 >= (-29)); l_1249--)
                    { /* block id: 573 */
                        uint32_t l_1253 = 0UL;
                        int32_t l_1257 = 1L;
                        int32_t *l_1256 = &l_1257;
                        int8_t l_1258 = 0L;
                        ++l_1253;
                        l_1248[0] = l_1256;
                        (*l_1256) = l_1258;
                        (*l_1256) = 3L;
                    }
                    for (l_1249 = 0; (l_1249 > (-19)); l_1249 = safe_sub_func_uint64_t_u_u(l_1249, 3))
                    { /* block id: 581 */
                        uint8_t l_1261 = 0xB7L;
                        int64_t l_1262 = 0x3BA42B0DA0C736CAL;
                        int32_t l_1263[6][3] = {{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL},{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL},{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL},{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL},{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL},{0x08B24D8FL,0x08B24D8FL,0x08B24D8FL}};
                        uint32_t l_1264 = 0x57EC11F7L;
                        VECTOR(int8_t, 16) l_1267 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x21L), 0x21L), 0x21L, 1L, 0x21L, (VECTOR(int8_t, 2))(1L, 0x21L), (VECTOR(int8_t, 2))(1L, 0x21L), 1L, 0x21L, 1L, 0x21L);
                        int8_t l_1268 = (-7L);
                        int i, j;
                        l_1262 ^= l_1261;
                        l_1264++;
                        l_1263[4][0] = l_1267.s5;
                        l_1263[4][0] = l_1268;
                    }
                }
            }
        }
        l_1273 |= ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1269.sd9b2)).zxwyzxyyxxwyyyxx)).sd440)).zzxwyzyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1270.yy)))).yyyyyyxx))).lo, ((VECTOR(int32_t, 8))(l_1271.s74970e86)).odd, ((VECTOR(int32_t, 4))(l_1272.yzwx))))).z;
        for (l_1271.s8 = 0; (l_1271.s8 < (-25)); l_1271.s8 = safe_sub_func_int8_t_s_s(l_1271.s8, 2))
        { /* block id: 593 */
            int32_t l_1276 = 0x4D3ADF09L;
            VECTOR(int32_t, 8) l_1327 = (VECTOR(int32_t, 8))(0x67452605L, (VECTOR(int32_t, 4))(0x67452605L, (VECTOR(int32_t, 2))(0x67452605L, 1L), 1L), 1L, 0x67452605L, 1L);
            int i;
            for (l_1276 = 0; (l_1276 <= (-18)); l_1276 = safe_sub_func_int64_t_s_s(l_1276, 1))
            { /* block id: 596 */
                union U0 l_1279 = {0x13L};/* VOLATILE GLOBAL l_1279 */
                int32_t l_1280[6];
                int64_t l_1281 = 0x4A0A3CA1A97527C3L;
                int i;
                for (i = 0; i < 6; i++)
                    l_1280[i] = 1L;
                l_1270.y &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(0L, 0x4AD48868L, 0x6503FDC2L, 0x1623F4E7L)), ((l_1279 , l_1280[3]) , l_1281), 0x745646DFL, 1L)).s36)), 0x1D35D7CAL, 0x2B5B2774L)).zzwwxxxy, ((VECTOR(int32_t, 2))(0x48086298L, 1L)).yxxyyyyx))).s44)).hi;
                for (l_1281 = 12; (l_1281 <= 14); l_1281 = safe_add_func_uint16_t_u_u(l_1281, 5))
                { /* block id: 600 */
                    int8_t l_1284 = 9L;
                    VECTOR(uint32_t, 2) l_1285 = (VECTOR(uint32_t, 2))(0xE6B7C0E4L, 0UL);
                    int32_t l_1286 = 0x02A600EFL;
                    int32_t l_1287 = 0L;
                    int32_t l_1288 = 8L;
                    int i;
                    l_1270.x = (l_1285.y = (l_1272.y = l_1284));
                    if ((l_1288 = (l_1287 = l_1286)))
                    { /* block id: 606 */
                        VECTOR(int64_t, 2) l_1289 = (VECTOR(int64_t, 2))(1L, 0x4A6E7FE722FD7746L);
                        int32_t l_1290 = 7L;
                        VECTOR(int64_t, 2) l_1291 = (VECTOR(int64_t, 2))(0x3D30C9C3BA19FCADL, 1L);
                        uint32_t l_1292 = 0x09F61312L;
                        uint64_t l_1293 = 0x2C96A59599CF4CD2L;
                        VECTOR(int16_t, 8) l_1294 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x1724L), 0x1724L), 0x1724L, (-8L), 0x1724L);
                        int64_t l_1295 = 1L;
                        uint64_t l_1296 = 0x8474B0B898ECDFBAL;
                        uint64_t l_1297 = 0x57928EB206B9BFBFL;
                        VECTOR(int64_t, 4) l_1298 = (VECTOR(int64_t, 4))(0x6BD294DBCA1CA935L, (VECTOR(int64_t, 2))(0x6BD294DBCA1CA935L, 1L), 1L);
                        VECTOR(int64_t, 16) l_1299 = (VECTOR(int64_t, 16))(0x225C8E3B3FC2AEF0L, (VECTOR(int64_t, 4))(0x225C8E3B3FC2AEF0L, (VECTOR(int64_t, 2))(0x225C8E3B3FC2AEF0L, (-5L)), (-5L)), (-5L), 0x225C8E3B3FC2AEF0L, (-5L), (VECTOR(int64_t, 2))(0x225C8E3B3FC2AEF0L, (-5L)), (VECTOR(int64_t, 2))(0x225C8E3B3FC2AEF0L, (-5L)), 0x225C8E3B3FC2AEF0L, (-5L), 0x225C8E3B3FC2AEF0L, (-5L));
                        VECTOR(int64_t, 16) l_1300 = (VECTOR(int64_t, 16))(0x3DB4652F03B54264L, (VECTOR(int64_t, 4))(0x3DB4652F03B54264L, (VECTOR(int64_t, 2))(0x3DB4652F03B54264L, 0x7A968724A378793DL), 0x7A968724A378793DL), 0x7A968724A378793DL, 0x3DB4652F03B54264L, 0x7A968724A378793DL, (VECTOR(int64_t, 2))(0x3DB4652F03B54264L, 0x7A968724A378793DL), (VECTOR(int64_t, 2))(0x3DB4652F03B54264L, 0x7A968724A378793DL), 0x3DB4652F03B54264L, 0x7A968724A378793DL, 0x3DB4652F03B54264L, 0x7A968724A378793DL);
                        VECTOR(int64_t, 4) l_1301 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x30F070FFBDD40FA4L), 0x30F070FFBDD40FA4L);
                        VECTOR(int64_t, 2) l_1302 = (VECTOR(int64_t, 2))(0x1DB7B1B9C181B0B5L, 0x7CCF4AE37972F2B9L);
                        VECTOR(int64_t, 4) l_1303 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L));
                        VECTOR(int32_t, 16) l_1304 = (VECTOR(int32_t, 16))(0x0A5CB50BL, (VECTOR(int32_t, 4))(0x0A5CB50BL, (VECTOR(int32_t, 2))(0x0A5CB50BL, (-5L)), (-5L)), (-5L), 0x0A5CB50BL, (-5L), (VECTOR(int32_t, 2))(0x0A5CB50BL, (-5L)), (VECTOR(int32_t, 2))(0x0A5CB50BL, (-5L)), 0x0A5CB50BL, (-5L), 0x0A5CB50BL, (-5L));
                        int64_t l_1305[5][4][9] = {{{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)}},{{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)}},{{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)}},{{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)}},{{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)},{0x6B83CD55B273E111L,0x761175B2B36E8296L,0L,0x4A0ACE45CA3B0056L,(-1L),0x761175B2B36E8296L,(-1L),1L,(-2L)}}};
                        int64_t l_1306 = 7L;
                        int64_t l_1307 = 1L;
                        int64_t l_1308 = 0x003B30C8251DB949L;
                        int32_t l_1309 = 0x76665EB3L;
                        int8_t l_1310[8];
                        int16_t l_1311 = 4L;
                        uint16_t l_1312 = 0UL;
                        uint16_t l_1313 = 2UL;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_1310[i] = 1L;
                        l_1272.z = (l_1270.y = (((VECTOR(int64_t, 8))(0x77FA8EE206601CC7L, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(l_1289.yxxy)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(1L, 0L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x6C9A54923B5DA6F0L, (-5L))))), 6L, 1L)), l_1290, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_1291.yxyxxxyy)).hi)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((l_1293 |= l_1292), (((VECTOR(int16_t, 16))(l_1294.s7176774466537125)).sd , (l_1297 = (l_1296 = l_1295))), 0x6F83B8EB52636812L, 7L)).lo)).yxyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_1298.wywz)).zwwwxzzzywzzzzzy)).s48e4, ((VECTOR(int64_t, 2))(l_1299.s64)).xxyx))).even))))).yxyy, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1300.s3f29131c231589b1)))).s81, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(l_1301.xzwy)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_1302.yyxxyyxy)).lo)).lo)).yxyy, ((VECTOR(int64_t, 2))(l_1303.wy)).yxxy))).odd))).xxyy))).y, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(l_1304.s3d)).xyxxxxxy, ((VECTOR(uint32_t, 4))(l_1305[3][0][1], 1UL, 6UL, 1UL)).zwxxxxwy))))).s91, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x56F2C3004A03E7F4L, 0x77F9401DBE0968BEL, (-1L), 0x25198B07E56FC12AL)).xyyzyxxx)).s27, ((VECTOR(int64_t, 8))(0x7779AC00B9410504L, (l_1306 , ((l_1307 , l_1308) , (l_1310[1] = l_1309))), ((VECTOR(int64_t, 4))((-4L))), 0L, 1L)).s53))), (int64_t)l_1311, (int64_t)l_1312)))))).yyyxyyyxxyxxxxxx, ((VECTOR(int64_t, 16))(0x22EC39712EE20088L))))).se2, ((VECTOR(int64_t, 2))(0x237A01DF23F4F5EEL))))), l_1313, ((VECTOR(int64_t, 4))(0x21EF297B48A273B9L)))).s1 , 0x631D685BL));
                        l_1280[3] = 0x3E0B9F1DL;
                    }
                    else
                    { /* block id: 614 */
                        VECTOR(int32_t, 8) l_1314 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
                        VECTOR(int32_t, 8) l_1315 = (VECTOR(int32_t, 8))(0x0D8B355DL, (VECTOR(int32_t, 4))(0x0D8B355DL, (VECTOR(int32_t, 2))(0x0D8B355DL, 0x4FA7B368L), 0x4FA7B368L), 0x4FA7B368L, 0x0D8B355DL, 0x4FA7B368L);
                        union U0 l_1316 = {1UL};/* VOLATILE GLOBAL l_1316 */
                        uint32_t l_1317[1];
                        VECTOR(int32_t, 16) l_1318 = (VECTOR(int32_t, 16))(0x6D600053L, (VECTOR(int32_t, 4))(0x6D600053L, (VECTOR(int32_t, 2))(0x6D600053L, 0x66D291E8L), 0x66D291E8L), 0x66D291E8L, 0x6D600053L, 0x66D291E8L, (VECTOR(int32_t, 2))(0x6D600053L, 0x66D291E8L), (VECTOR(int32_t, 2))(0x6D600053L, 0x66D291E8L), 0x6D600053L, 0x66D291E8L, 0x6D600053L, 0x66D291E8L);
                        uint32_t l_1319 = 2UL;
                        int32_t l_1320 = (-3L);
                        int16_t l_1321 = 1L;
                        int8_t l_1322 = 1L;
                        VECTOR(int32_t, 16) l_1323 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
                        uint32_t l_1324[9][6][1] = {{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}},{{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L},{0x33570788L}}};
                        int32_t l_1325 = 1L;
                        uint8_t l_1326 = 8UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1317[i] = 8UL;
                        l_1270.y = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_1314.s7053455654372160)).sb9, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(0x2CCCBF99L, ((VECTOR(int32_t, 4))(l_1315.s7246)), 0x190189F3L, 0x540FCF54L, (-1L))), ((VECTOR(int32_t, 4))((l_1316 , l_1317[0]), 1L, (-1L), 4L)).zxxzxyyx))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x774D1E19L, 0x0D0D96FAL, ((VECTOR(int32_t, 4))(l_1318.s3e96)), (-7L), 0x5EE0CD76L, (l_1272.w ^= l_1319), 0x6D8D75C7L, (l_1321 = ((l_1285.y = l_1320) , 0x779E2F3BL)), 0x3D753295L, l_1322, 1L, 1L, 0x3F3CB829L)).s308f)).odd)).yxyxyxyy))).s64, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1323.s6f87aaef0b1510f0)).s7d5e)).xxzyzwyx)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))((l_1269.s5 = l_1324[4][3][0]), ((l_1325 , 1UL) , (-5L)), 1L, 0x673D49A5L, 0x1D3F882EL, ((VECTOR(int32_t, 2))(0x20016DD5L)), 0L)), ((VECTOR(int32_t, 8))(1L))))).even, ((VECTOR(int32_t, 4))(1L))))).zzzzwzwxwxyyyzyw, ((VECTOR(int32_t, 16))(0x35FEFC05L)), ((VECTOR(int32_t, 16))(0x348A9DCCL))))).even))).s40))).yxxyxyxy)).s7;
                        l_1314.s0 = l_1326;
                    }
                }
            }
            if (((VECTOR(int32_t, 2))(l_1327.s76)).hi)
            { /* block id: 624 */
                uint16_t l_1328 = 0x1FB3L;
                int32_t l_1331 = 0x564C60A1L;
                uint32_t l_1332 = 9UL;
                l_1328++;
                l_1327.s1 = 0x6F5140A0L;
                l_1332 = (l_1270.y = l_1331);
            }
            else
            { /* block id: 629 */
                int32_t l_1333 = (-1L);
                for (l_1333 = 0; (l_1333 == (-24)); l_1333--)
                { /* block id: 632 */
                    uint64_t l_1336[8][5][2] = {{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}},{{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L},{0xD3B6953EFA8EE462L,0xEEC4C08A7187A1B9L}}};
                    int64_t l_1337 = 0x4EC00D231D31B03AL;
                    uint16_t l_1338 = 0x8F61L;
                    int i, j, k;
                    l_1269.se = l_1336[3][2][1];
                    --l_1338;
                }
            }
            for (l_1327.s1 = 0; (l_1327.s1 != 8); ++l_1327.s1)
            { /* block id: 639 */
                int64_t l_1343 = 1L;
                l_1276 = l_1343;
            }
        }
        l_1345 = (l_1344 = (void*)0);
        unsigned int result = 0;
        result += l_1141;
        result += l_1269.sf;
        result += l_1269.se;
        result += l_1269.sd;
        result += l_1269.sc;
        result += l_1269.sb;
        result += l_1269.sa;
        result += l_1269.s9;
        result += l_1269.s8;
        result += l_1269.s7;
        result += l_1269.s6;
        result += l_1269.s5;
        result += l_1269.s4;
        result += l_1269.s3;
        result += l_1269.s2;
        result += l_1269.s1;
        result += l_1269.s0;
        result += l_1270.y;
        result += l_1270.x;
        result += l_1271.sf;
        result += l_1271.se;
        result += l_1271.sd;
        result += l_1271.sc;
        result += l_1271.sb;
        result += l_1271.sa;
        result += l_1271.s9;
        result += l_1271.s8;
        result += l_1271.s7;
        result += l_1271.s6;
        result += l_1271.s5;
        result += l_1271.s4;
        result += l_1271.s3;
        result += l_1271.s2;
        result += l_1271.s1;
        result += l_1271.s0;
        result += l_1272.w;
        result += l_1272.z;
        result += l_1272.y;
        result += l_1272.x;
        result += l_1273;
        atomic_add(&p_1466->g_special_values[33 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 645 */
        (1 + 1);
    }
    (*l_1348) = (1L && (safe_rshift_func_int16_t_s_u(p_418, 14)));
    for (p_1466->g_745 = 0; (p_1466->g_745 > 20); p_1466->g_745++)
    { /* block id: 651 */
        uint64_t l_1351 = 7UL;
        union U0 *l_1362 = &p_1466->g_1363;
        int8_t *l_1365 = (void*)0;
        int8_t *l_1366 = (void*)0;
        int8_t *l_1367[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_1368 = 0x3CB5EB7CL;
        uint8_t l_1374 = 0xB9L;
        int32_t *l_1375 = (void*)0;
        int32_t *l_1376 = (void*)0;
        int32_t *l_1377[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        atomic_or(&p_1466->l_atomic_reduction[0], 0x0528AB63L + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1466->v_collective += p_1466->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        --l_1351;
        l_1378 |= (safe_lshift_func_uint8_t_u_s(((l_1368 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((*p_1466->g_902), 4)), (safe_mul_func_uint16_t_u_u((!(l_1351 | ((VECTOR(int8_t, 2))((-3L), 0x06L)).even)), (l_1362 == ((*l_1348) , l_1364))))))) & (safe_mod_func_int64_t_s_s(0x4D543B00C8C9A334L, (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(l_1373.s7064454416043245)).s2, (+l_1374)))))), 4));
    }
    return p_416;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_9
 * writes:
 */
int16_t  func_424(int32_t * p_425, struct S1 * p_1466)
{ /* block id: 212 */
    if ((atomic_inc(&p_1466->l_atomic_input[23]) == 3))
    { /* block id: 214 */
        uint32_t l_426 = 0x71FEE7CAL;
        uint8_t l_427 = 0UL;
        int64_t l_428 = 0x454240CCC0FEF1A9L;
        uint8_t l_429 = 0x19L;
        l_426 = 0x29547BC4L;
        l_427 |= 1L;
        l_429 &= l_428;
        for (l_429 = 10; (l_429 <= 1); l_429 = safe_sub_func_uint8_t_u_u(l_429, 8))
        { /* block id: 220 */
            uint16_t l_432 = 0xC1F4L;
            uint16_t l_435 = 65534UL;
            l_432--;
            l_435++;
        }
        unsigned int result = 0;
        result += l_426;
        result += l_427;
        result += l_428;
        result += l_429;
        atomic_add(&p_1466->l_special_values[23], result);
    }
    else
    { /* block id: 224 */
        (1 + 1);
    }
    return p_1466->g_9[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_32 p_1466->g_511 p_1466->g_1138
 * writes: p_1466->g_32 p_1466->g_511
 */
union U0  func_451(int16_t * p_452, uint64_t  p_453, struct S1 * p_1466)
{ /* block id: 495 */
    int32_t l_1130 = 5L;
    int32_t l_1131 = 1L;
    int32_t l_1132 = 0x47BEA32EL;
    int32_t l_1133 = (-3L);
    int32_t l_1134 = 0x1AA60D93L;
    uint8_t l_1135 = 246UL;
    for (p_1466->g_32 = 0; (p_1466->g_32 <= (-12)); --p_1466->g_32)
    { /* block id: 498 */
        uint32_t *l_1124 = (void*)0;
        uint32_t *l_1125 = &p_1466->g_511;
        int32_t *l_1128 = &p_1466->g_489;
        int32_t *l_1129[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1129[i] = (void*)0;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1466->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u(((*l_1125)--), 10))][(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))]));
        ++l_1135;
    }
    return p_1466->g_1138;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_521 p_1466->g_524 p_1466->g_526 p_1466->g_528 p_1466->g_530 p_1466->g_488 p_1466->g_489 p_1466->g_411 p_1466->g_547 p_1466->g_29 p_1466->g_30 p_1466->g_32 p_1466->g_3 p_1466->g_464 p_1466->g_726 p_1466->g_442 p_1466->g_728 p_1466->g_735 p_1466->g_475 p_1466->g_745 p_1466->g_746 p_1466->g_511 p_1466->g_776 p_1466->g_786 p_1466->l_comm_values p_1466->g_444 p_1466->g_851 p_1466->g_852 p_1466->g_855 p_1466->g_857 p_1466->g_885 p_1466->g_888 p_1466->g_890 p_1466->g_897 p_1466->g_902 p_1466->g_440 p_1466->g_9 p_1466->g_935 p_1466->g_939 p_1466->g_940 p_1466->g_487 p_1466->g_942 p_1466->g_966 p_1466->g_968 p_1466->g_969 p_1466->g_970 p_1466->g_972 p_1466->g_981 p_1466->g_991 p_1466->g_996 p_1466->g_884 p_1466->g_1011 p_1466->g_1014 p_1466->g_1015 p_1466->g_823 p_1466->g_1110 p_1466->g_1120
 * writes: p_1466->g_547 p_1466->g_489 p_1466->g_487 p_1466->g_726 p_1466->g_32 p_1466->g_745 p_1466->g_511 p_1466->g_786 p_1466->g_comm_values p_1466->l_comm_values p_1466->g_823 p_1466->g_30 p_1466->g_872 p_1466->g_884 p_1466->g_526 p_1466->g_857 p_1466->g_1006 p_1466->g_972 p_1466->g_942 p_1466->g_969
 */
int16_t * func_454(int32_t * p_455, struct S1 * p_1466)
{ /* block id: 246 */
    VECTOR(int32_t, 16) l_522 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 2L), 2L), 2L, (-4L), 2L, (VECTOR(int32_t, 2))((-4L), 2L), (VECTOR(int32_t, 2))((-4L), 2L), (-4L), 2L, (-4L), 2L);
    VECTOR(int32_t, 8) l_523 = (VECTOR(int32_t, 8))(0x7F3C70D0L, (VECTOR(int32_t, 4))(0x7F3C70D0L, (VECTOR(int32_t, 2))(0x7F3C70D0L, 6L), 6L), 6L, 0x7F3C70D0L, 6L);
    VECTOR(int32_t, 16) l_525 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x07D2E8BBL), 0x07D2E8BBL), 0x07D2E8BBL, 1L, 0x07D2E8BBL, (VECTOR(int32_t, 2))(1L, 0x07D2E8BBL), (VECTOR(int32_t, 2))(1L, 0x07D2E8BBL), 1L, 0x07D2E8BBL, 1L, 0x07D2E8BBL);
    VECTOR(int16_t, 4) l_527 = (VECTOR(int16_t, 4))(0x55C4L, (VECTOR(int16_t, 2))(0x55C4L, 0x3812L), 0x3812L);
    VECTOR(int32_t, 16) l_529 = (VECTOR(int32_t, 16))(0x77777C7FL, (VECTOR(int32_t, 4))(0x77777C7FL, (VECTOR(int32_t, 2))(0x77777C7FL, 0x1E1F7043L), 0x1E1F7043L), 0x1E1F7043L, 0x77777C7FL, 0x1E1F7043L, (VECTOR(int32_t, 2))(0x77777C7FL, 0x1E1F7043L), (VECTOR(int32_t, 2))(0x77777C7FL, 0x1E1F7043L), 0x77777C7FL, 0x1E1F7043L, 0x77777C7FL, 0x1E1F7043L);
    VECTOR(int32_t, 8) l_531 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2AE89248L), 0x2AE89248L), 0x2AE89248L, (-5L), 0x2AE89248L);
    union U0 *l_533 = &p_1466->g_534;
    union U0 **l_535 = &l_533;
    union U0 *l_536 = &p_1466->g_537[0][0];
    int32_t l_544 = (-1L);
    VECTOR(uint64_t, 16) l_548 = (VECTOR(uint64_t, 16))(0xCCB5E452E2A5C934L, (VECTOR(uint64_t, 4))(0xCCB5E452E2A5C934L, (VECTOR(uint64_t, 2))(0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L), 0xC56362AEB9F8CD92L), 0xC56362AEB9F8CD92L, 0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L, (VECTOR(uint64_t, 2))(0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L), (VECTOR(uint64_t, 2))(0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L), 0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L, 0xCCB5E452E2A5C934L, 0xC56362AEB9F8CD92L);
    VECTOR(uint16_t, 8) l_549 = (VECTOR(uint16_t, 8))(0x7846L, (VECTOR(uint16_t, 4))(0x7846L, (VECTOR(uint16_t, 2))(0x7846L, 1UL), 1UL), 1UL, 0x7846L, 1UL);
    int32_t **l_556 = &p_1466->g_30;
    VECTOR(int32_t, 16) l_712 = (VECTOR(int32_t, 16))(0x4607B806L, (VECTOR(int32_t, 4))(0x4607B806L, (VECTOR(int32_t, 2))(0x4607B806L, 1L), 1L), 1L, 0x4607B806L, 1L, (VECTOR(int32_t, 2))(0x4607B806L, 1L), (VECTOR(int32_t, 2))(0x4607B806L, 1L), 0x4607B806L, 1L, 0x4607B806L, 1L);
    uint16_t *l_718 = &p_1466->g_547;
    VECTOR(int16_t, 16) l_721 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    int16_t *l_725 = &p_1466->g_32;
    int16_t **l_724[5][4][7] = {{{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725}},{{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725}},{{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725}},{{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725}},{{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725},{&l_725,&l_725,&l_725,&l_725,&l_725,&l_725,&l_725}}};
    int16_t **l_744[3][6][1] = {{{&l_725},{&l_725},{&l_725},{&l_725},{&l_725},{&l_725}},{{&l_725},{&l_725},{&l_725},{&l_725},{&l_725},{&l_725}},{{&l_725},{&l_725},{&l_725},{&l_725},{&l_725},{&l_725}}};
    VECTOR(int8_t, 2) l_770 = (VECTOR(int8_t, 2))(6L, 0x40L);
    VECTOR(int32_t, 8) l_777 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(int8_t, 8) l_819 = (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x62L), 0x62L), 0x62L, 0x4CL, 0x62L);
    uint8_t l_840 = 1UL;
    VECTOR(uint16_t, 8) l_853 = (VECTOR(uint16_t, 8))(0x1654L, (VECTOR(uint16_t, 4))(0x1654L, (VECTOR(uint16_t, 2))(0x1654L, 0x925BL), 0x925BL), 0x925BL, 0x1654L, 0x925BL);
    VECTOR(int8_t, 16) l_856 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-3L)), (-3L)), (-3L), 2L, (-3L), (VECTOR(int8_t, 2))(2L, (-3L)), (VECTOR(int8_t, 2))(2L, (-3L)), 2L, (-3L), 2L, (-3L));
    VECTOR(int8_t, 2) l_858 = (VECTOR(int8_t, 2))(0x27L, 0L);
    int64_t l_947 = 2L;
    VECTOR(uint8_t, 8) l_961 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    VECTOR(int32_t, 8) l_973 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L);
    VECTOR(int32_t, 4) l_974 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x331B736BL), 0x331B736BL);
    VECTOR(int64_t, 2) l_989 = (VECTOR(int64_t, 2))(8L, 0x0601AD9F2D33A458L);
    VECTOR(int64_t, 4) l_990 = (VECTOR(int64_t, 4))(0x476EF73B5A3C39EFL, (VECTOR(int64_t, 2))(0x476EF73B5A3C39EFL, (-7L)), (-7L));
    VECTOR(uint16_t, 4) l_1019 = (VECTOR(uint16_t, 4))(0x7138L, (VECTOR(uint16_t, 2))(0x7138L, 1UL), 1UL);
    int16_t l_1043[9];
    int32_t l_1080 = 0x650ACE50L;
    int32_t *l_1117[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t *l_1121 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1043[i] = 0x1B79L;
    l_544 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(p_1466->g_521.s71)).xyxyxxyxxyyxxyyy, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(3L, 5L)).xyxy, ((VECTOR(int32_t, 4))(l_522.s1762)), ((VECTOR(int32_t, 16))(l_523.s3344650107552461)).s5613))).wwxxwyyzwywwwxww, ((VECTOR(int32_t, 16))(p_1466->g_524.wyzwwyxxwzzxzwxz))))).s71f2, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_525.sd9)).yxyyyxxxyxyyxxxy, ((VECTOR(int32_t, 4))(p_1466->g_526.yyxy)).yywxxywzyxwxzzyx))).sa7)), 0x7D249E32L, 0x6CAD6A1EL)).wyxxwzxz)).odd))).wwyzxzyx)).lo, ((VECTOR(int32_t, 2))(1L, 0x5B443682L)).yyyx))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_527.ywzxwxzz)).s10, ((VECTOR(uint16_t, 2))(p_1466->g_528.zx))))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_529.s50c22804b76badb8)).even, ((VECTOR(int32_t, 8))(p_1466->g_530.yzwzwwzz))))))), 6L, ((VECTOR(int32_t, 4))(l_531.s7100)), 0x22DDD3C5L, 0x40F2C372L, 0x0F555C1CL)).se7, ((VECTOR(int32_t, 8))(1L, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((((safe_unary_minus_func_int32_t_s((*p_1466->g_488))) < ((((*l_535) = l_533) == (l_525.sd , l_536)) , ((((l_531.s0 , (safe_sub_func_int8_t_s_s((-9L), ((l_531.s4 &= l_525.s4) , (safe_sub_func_uint64_t_u_u((((l_523.s2 ^ ((safe_rshift_func_int16_t_s_u((((l_525.s4 & l_525.sb) >= l_522.s2) && l_529.s0), l_522.sb)) || l_523.s6)) | p_1466->g_528.x) != l_527.z), (-1L))))))) < 18446744073709551615UL) , 0x75L) < l_523.s4))) >= 0xC1151F443B1863DBL), (*p_1466->g_488), 0x4CA87AE7L, 0x6B7A26DCL, 0L, (*p_455), 4L, 1L, ((VECTOR(int32_t, 4))((-10L))), ((VECTOR(int32_t, 2))((-9L))), 0x52477E07L, 0x26DE7A63L)).odd)).lo)), (-8L), 0x375C0FD1L)).s57))))), (-1L), 1L)).zzxxwyxwxzyzzyxz)).s1e, ((VECTOR(int32_t, 2))(0x7D703F11L)), ((VECTOR(int32_t, 2))((-8L)))))))), (-7L), 0x203E599DL)), ((VECTOR(int32_t, 4))(0x66527888L))))), ((VECTOR(int32_t, 4))(9L))))).hi, ((VECTOR(int32_t, 2))(0x08B983C9L)), ((VECTOR(int32_t, 2))(0x629E9B23L))))), (-9L), (*p_455), (-9L), (-5L), ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 2))(0x0EF1832AL)), (-3L), ((VECTOR(int32_t, 2))(0L)), 0L)).s4;
    if (((safe_rshift_func_uint16_t_u_s(((((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(7UL, ((VECTOR(uint64_t, 2))(0xE75A26474988B46BL, 18446744073709551607UL)), 0xBAC37F5CAC3BE8DEL, (1UL & (p_1466->g_547 |= l_529.s3)), 18446744073709551606UL, 18446744073709551609UL, 1UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_548.s6c)).xyyxyyxyxxxyyyxy)).odd)))))).odd, (uint64_t)0xE6D164E6B4913022L))).s0 , (l_531.s7 > l_522.s4)) | ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 4))(l_549.s1051)).wwwxyxzzxxzxwxyw, (uint16_t)0xCD5BL, (uint16_t)(safe_div_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), 2)), ((*p_1466->g_29) == (l_531.s1 , func_456(l_556, &p_1466->g_32, &p_1466->g_464[1], p_1466))))), (**l_556)))))).s2), (**l_556))) , (*p_1466->g_488)))
    { /* block id: 251 */
        int32_t *l_713 = (void*)0;
        int32_t *l_714 = &p_1466->g_489;
        int16_t *l_715[8];
        int i;
        for (i = 0; i < 8; i++)
            l_715[i] = (void*)0;
        if ((atomic_inc(&p_1466->g_atomic_input[33 * get_linear_group_id() + 27]) == 1))
        { /* block id: 253 */
            VECTOR(uint16_t, 4) l_557 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65535UL), 65535UL);
            union U0 l_558 = {249UL};/* VOLATILE GLOBAL l_558 */
            uint64_t l_559 = 0UL;
            uint32_t l_560 = 1UL;
            int16_t l_561[6][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
            VECTOR(int16_t, 16) l_562 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2F24L), 0x2F24L), 0x2F24L, 1L, 0x2F24L, (VECTOR(int16_t, 2))(1L, 0x2F24L), (VECTOR(int16_t, 2))(1L, 0x2F24L), 1L, 0x2F24L, 1L, 0x2F24L);
            uint32_t l_563[2][8] = {{0x0FE5EC05L,4294967295UL,0x0FE5EC05L,0x0FE5EC05L,4294967295UL,0x0FE5EC05L,0x0FE5EC05L,4294967295UL},{0x0FE5EC05L,4294967295UL,0x0FE5EC05L,0x0FE5EC05L,4294967295UL,0x0FE5EC05L,0x0FE5EC05L,4294967295UL}};
            int32_t l_564 = 0x21B44E14L;
            int8_t l_565 = (-9L);
            VECTOR(uint8_t, 2) l_566 = (VECTOR(uint8_t, 2))(0UL, 248UL);
            VECTOR(uint8_t, 2) l_567 = (VECTOR(uint8_t, 2))(0xAEL, 255UL);
            VECTOR(uint8_t, 8) l_568 = (VECTOR(uint8_t, 8))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 0x95L), 0x95L), 0x95L, 0x77L, 0x95L);
            int32_t l_570 = (-6L);
            int32_t *l_569[1][5][8] = {{{&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570},{&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570,&l_570}}};
            int32_t *l_571 = &l_570;
            VECTOR(uint64_t, 4) l_572 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL), 18446744073709551612UL);
            VECTOR(uint64_t, 4) l_573 = (VECTOR(uint64_t, 4))(0xD9066CC5BA4DDE64L, (VECTOR(uint64_t, 2))(0xD9066CC5BA4DDE64L, 2UL), 2UL);
            VECTOR(int8_t, 4) l_574 = (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0L), 0L);
            uint32_t l_575 = 0x53BFF9F7L;
            VECTOR(int64_t, 2) l_576 = (VECTOR(int64_t, 2))((-1L), 0x7E263CCF641E0FB9L);
            uint64_t l_577[6];
            uint32_t l_578[7][10][3] = {{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}},{{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL},{4294967293UL,4294967288UL,4294967295UL}}};
            VECTOR(int64_t, 2) l_579 = (VECTOR(int64_t, 2))(0x2B0F3FC5173B454DL, 0x430F84A1B8F5B74AL);
            int8_t l_580 = 1L;
            VECTOR(int64_t, 2) l_581 = (VECTOR(int64_t, 2))(1L, (-7L));
            int8_t l_582 = (-1L);
            VECTOR(int16_t, 8) l_583 = (VECTOR(int16_t, 8))(0x2F42L, (VECTOR(int16_t, 4))(0x2F42L, (VECTOR(int16_t, 2))(0x2F42L, 0x4704L), 0x4704L), 0x4704L, 0x2F42L, 0x4704L);
            uint32_t l_584 = 0xEE6E537AL;
            int32_t l_585 = 0x3E082150L;
            int64_t l_586 = 0x32A721D212CF6C58L;
            VECTOR(int64_t, 4) l_587 = (VECTOR(int64_t, 4))(0x40A09781AE244173L, (VECTOR(int64_t, 2))(0x40A09781AE244173L, 6L), 6L);
            uint64_t l_588 = 0xBCD9D28F1AA9FC6DL;
            uint8_t l_589 = 0x3EL;
            int16_t l_590 = 0x6D3DL;
            int16_t l_591 = (-8L);
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_577[i] = 6UL;
            l_565 |= (((FAKE_DIVERGE(p_1466->group_0_offset, get_group_id(0), 10) , l_557.x) , ((((VECTOR(uint64_t, 2))(0x91934E9DFCB3708AL, 3UL)).hi , l_558) , (l_562.s8 = (l_561[0][3] = (l_560 |= l_559))))) , (l_564 = l_563[1][0]));
            l_569[0][3][6] = (((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_566.xyyx)).wxxwwxzy)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_567.xxxyxxyyyxxxyyxx)).hi)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_568.s2413)).wyywywwxwzxwwxzy)).hi)))).lo))).y , l_569[0][3][6]);
            l_571 = l_571;
            if ((((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_572.wxxy)).xwywxywy)).s5525463453553507))).lo)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))((l_578[6][9][0] = (((l_575 = (l_574.x = l_573.z)) , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_576.yyxy)).odd)).hi) , (l_577[3] , ((VECTOR(int64_t, 2))(0x5643CED3D8D8B709L, 0x1D676B04CB96F800L)).lo))), ((VECTOR(int64_t, 2))(l_579.yy)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_580, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_581.yy)).xyxyyxxx)))).s17)).yyxy)).y, (l_582 = (-3L)), 0x6E0B12173BFD05DBL, (l_583.s6 , l_584), 0x13291DBE59CDD07EL, (-6L), 0x47938C7342BA4BB1L)).hi)).lo)))), (-6L), (-4L))), 0L, (-7L))), (int64_t)((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-3L), 0x5D3D03C3E1B4CC1EL)), ((VECTOR(int64_t, 4))((l_585 , l_586), ((VECTOR(int64_t, 2))(l_587.yz)), 0x2A2FA9604CC8FD4DL)), l_588, l_589, 0L, (-6L), ((VECTOR(int64_t, 2))(0x02119589AC03E8F5L)), 0x78DC85CBCF712F44L, l_590, 0L, 0x709CFE6D50216D4DL)).s4834, ((VECTOR(int64_t, 4))((-1L)))))).ywywxyyy, (int64_t)l_591, (int64_t)0x0DD8723BB8623574L))).s3))).s73, ((VECTOR(int64_t, 2))((-9L)))))))).yxyxyyxx))).s0 , 9L))
            { /* block id: 265 */
                int16_t l_592 = 4L;
                uint64_t l_593 = 0x4B2F14226F9CD523L;
                uint64_t l_594 = 0UL;
                uint16_t l_595 = 0xA7A7L;
                (*l_571) |= l_592;
                l_594 = l_593;
                --l_595;
            }
            else
            { /* block id: 269 */
                int32_t l_598 = 0L;
                int16_t l_606 = 0x5D69L;
                uint32_t l_607[7] = {0xB25C2370L,0xAB66F9EAL,0xB25C2370L,0xB25C2370L,0xAB66F9EAL,0xB25C2370L,0xB25C2370L};
                int16_t *l_631[8][2] = {{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606},{&l_606,&l_606}};
                int16_t **l_630 = &l_631[2][0];
                int16_t **l_632 = &l_631[7][0];
                int i, j;
                for (l_598 = 12; (l_598 != (-25)); --l_598)
                { /* block id: 272 */
                    uint32_t l_601 = 0xB437C5D5L;
                    VECTOR(uint16_t, 4) l_604 = (VECTOR(uint16_t, 4))(0xE788L, (VECTOR(uint16_t, 2))(0xE788L, 0xE2ABL), 0xE2ABL);
                    int32_t *l_605 = (void*)0;
                    int i;
                    l_601++;
                    l_569[0][3][6] = (((VECTOR(uint16_t, 16))(l_604.zzzwzwwzyzzzxzzw)).s5 , l_605);
                }
                if ((l_606 , ((*l_571) = l_607[2])))
                { /* block id: 277 */
                    uint8_t l_627[2];
                    uint32_t l_628 = 4294967295UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_627[i] = 254UL;
                    if (((*l_571) |= 0x6D5B108FL))
                    { /* block id: 279 */
                        uint32_t l_608 = 5UL;
                        VECTOR(int32_t, 16) l_609 = (VECTOR(int32_t, 16))(0x72A66F71L, (VECTOR(int32_t, 4))(0x72A66F71L, (VECTOR(int32_t, 2))(0x72A66F71L, 2L), 2L), 2L, 0x72A66F71L, 2L, (VECTOR(int32_t, 2))(0x72A66F71L, 2L), (VECTOR(int32_t, 2))(0x72A66F71L, 2L), 0x72A66F71L, 2L, 0x72A66F71L, 2L);
                        uint16_t l_610 = 0x36E9L;
                        int32_t *l_611 = (void*)0;
                        int32_t l_612[4] = {0x38DF3749L,0x38DF3749L,0x38DF3749L,0x38DF3749L};
                        int32_t l_613 = 0x63F7E96DL;
                        uint16_t l_614 = 0xD5B6L;
                        VECTOR(uint64_t, 8) l_615 = (VECTOR(uint64_t, 8))(0x99DC2932FDA40C8CL, (VECTOR(uint64_t, 4))(0x99DC2932FDA40C8CL, (VECTOR(uint64_t, 2))(0x99DC2932FDA40C8CL, 0x19819685682545B6L), 0x19819685682545B6L), 0x19819685682545B6L, 0x99DC2932FDA40C8CL, 0x19819685682545B6L);
                        VECTOR(uint32_t, 16) l_616 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x43111337L), 0x43111337L), 0x43111337L, 1UL, 0x43111337L, (VECTOR(uint32_t, 2))(1UL, 0x43111337L), (VECTOR(uint32_t, 2))(1UL, 0x43111337L), 1UL, 0x43111337L, 1UL, 0x43111337L);
                        int32_t l_617 = 1L;
                        int16_t l_618[9][4] = {{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L},{0x266DL,0x266DL,0x0580L,2L}};
                        uint64_t l_619 = 18446744073709551614UL;
                        int64_t l_620 = 8L;
                        int i, j;
                        l_610 |= ((*l_571) = (l_608 , ((VECTOR(int32_t, 8))(l_609.s69ce66bc)).s7));
                        l_569[0][3][6] = l_611;
                        l_620 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))((l_612[2] , l_613), 18446744073709551609UL, FAKE_DIVERGE(p_1466->global_1_offset, get_global_id(1), 10), l_614, ((VECTOR(uint64_t, 2))(l_615.s23)), 18446744073709551614UL, 18446744073709551606UL)).s64)).even , ((((VECTOR(int32_t, 2))(0x571E622FL, 6L)).odd , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_616.s4b894c43)).s76)).even) , (l_619 &= ((*l_571) &= (l_618[3][3] = l_617)))));
                    }
                    else
                    { /* block id: 287 */
                        int8_t l_621 = 0x4DL;
                        int16_t l_622[4] = {(-5L),(-5L),(-5L),(-5L)};
                        int16_t l_623 = 1L;
                        uint16_t l_624 = 65535UL;
                        int i;
                        l_622[1] = (l_621 = (-5L));
                        l_624++;
                    }
                    l_628 = ((*l_571) ^= l_627[0]);
                    l_569[0][3][6] = (void*)0;
                }
                else
                { /* block id: 295 */
                    uint32_t l_629[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
                    int i;
                    l_629[0] ^= 0x1745827FL;
                }
                l_632 = l_630;
                if (((*l_571) |= ((VECTOR(int32_t, 2))(0L, 0L)).lo))
                { /* block id: 300 */
                    int64_t l_633[5][4] = {{0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL},{0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL},{0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL},{0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL},{0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL,0x6A34BFB6FC5C55ADL}};
                    int64_t l_634 = 0x370531DA62B291CFL;
                    int32_t l_636 = 1L;
                    int32_t *l_635 = &l_636;
                    int i, j;
                    l_634 &= l_633[4][3];
                    l_569[0][3][6] = l_635;
                    for (l_633[4][3] = 0; (l_633[4][3] == 5); l_633[4][3]++)
                    { /* block id: 305 */
                        uint32_t l_639 = 0xA1B04F0EL;
                        int16_t l_640 = 0x73CEL;
                        int32_t *l_641[2];
                        VECTOR(int16_t, 16) l_642 = (VECTOR(int16_t, 16))(0x2359L, (VECTOR(int16_t, 4))(0x2359L, (VECTOR(int16_t, 2))(0x2359L, 4L), 4L), 4L, 0x2359L, 4L, (VECTOR(int16_t, 2))(0x2359L, 4L), (VECTOR(int16_t, 2))(0x2359L, 4L), 0x2359L, 4L, 0x2359L, 4L);
                        uint32_t l_643 = 0x3492565BL;
                        uint8_t l_646 = 255UL;
                        uint32_t l_647 = 0x492023C9L;
                        int32_t l_648[6][1] = {{0x25FD652AL},{0x25FD652AL},{0x25FD652AL},{0x25FD652AL},{0x25FD652AL},{0x25FD652AL}};
                        VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))(0L, 2L);
                        VECTOR(int32_t, 2) l_650 = (VECTOR(int32_t, 2))(0x496B7901L, 0x38BD3DEBL);
                        int32_t l_651 = 0x709ED264L;
                        VECTOR(int32_t, 4) l_652 = (VECTOR(int32_t, 4))(0x7085A99BL, (VECTOR(int32_t, 2))(0x7085A99BL, 0x1F5806ABL), 0x1F5806ABL);
                        VECTOR(int32_t, 4) l_653 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7313C6E9L), 0x7313C6E9L);
                        VECTOR(int16_t, 16) l_654 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 4L), 4L), 4L, 4L, 4L, (VECTOR(int16_t, 2))(4L, 4L), (VECTOR(int16_t, 2))(4L, 4L), 4L, 4L, 4L, 4L);
                        uint8_t l_655 = 0x17L;
                        VECTOR(int8_t, 8) l_656 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x2FL), 0x2FL), 0x2FL, 0x70L, 0x2FL);
                        VECTOR(int8_t, 2) l_657 = (VECTOR(int8_t, 2))((-9L), 0x26L);
                        VECTOR(int8_t, 4) l_658 = (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x1EL), 0x1EL);
                        VECTOR(uint8_t, 4) l_659 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x6DL), 0x6DL);
                        int8_t l_660 = 0x1AL;
                        VECTOR(uint8_t, 8) l_661 = (VECTOR(uint8_t, 8))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 255UL), 255UL), 255UL, 0x44L, 255UL);
                        int64_t l_662 = 0L;
                        int8_t l_663 = 3L;
                        int32_t l_664 = (-1L);
                        VECTOR(int8_t, 16) l_665 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int8_t, 2))(0L, (-1L)), (VECTOR(int8_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        VECTOR(int8_t, 16) l_666 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3FL), 0x3FL), 0x3FL, 0L, 0x3FL, (VECTOR(int8_t, 2))(0L, 0x3FL), (VECTOR(int8_t, 2))(0L, 0x3FL), 0L, 0x3FL, 0L, 0x3FL);
                        VECTOR(int8_t, 8) l_667 = (VECTOR(int8_t, 8))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 2L), 2L), 2L, 0x3CL, 2L);
                        VECTOR(uint8_t, 2) l_668 = (VECTOR(uint8_t, 2))(5UL, 1UL);
                        VECTOR(uint8_t, 4) l_669 = (VECTOR(uint8_t, 4))(0x57L, (VECTOR(uint8_t, 2))(0x57L, 246UL), 246UL);
                        uint16_t l_670 = 65532UL;
                        uint32_t l_671 = 3UL;
                        int32_t l_672 = 9L;
                        uint8_t l_673 = 255UL;
                        uint32_t l_674 = 0UL;
                        int8_t l_675 = 0x09L;
                        uint32_t l_676 = 8UL;
                        uint16_t l_677 = 1UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_641[i] = (void*)0;
                        l_635 = (l_639 , (l_569[0][3][1] = (l_640 , l_641[1])));
                        ++l_643;
                        (*l_571) ^= (l_647 = l_646);
                        l_677 ^= (((VECTOR(int32_t, 4))((l_648[3][0] , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(l_649.yyxxyxxyxxyxyxyx)).s90, ((VECTOR(int32_t, 4))(l_650.xxxx)).odd))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x4738CA65L, l_651, (-9L), 0x16F5BB28L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_652.wxxx)).even, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_653.yy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_654.sde1c48ef)).hi)).hi, (int16_t)l_655))).xyxyyyxx)).s00, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_656.s50)), (-6L), ((VECTOR(int8_t, 4))(l_657.xxxy)), 1L)).s10, ((VECTOR(int8_t, 16))(l_658.wzwyzwxyzwxxwyzw)).se6))).yxxyyxxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(8UL, 255UL)), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(0x82L, 2UL)).xxyxxxyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(l_659.wyzx)).yyxywzxwwwxwxxyw, ((VECTOR(uint8_t, 16))(l_660, ((VECTOR(uint8_t, 4))(l_661.s2760)), l_662, l_663, 2UL, 250UL, l_664, 255UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 16))(l_665.s7a65639caeca8320)), ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(l_666.sf28e672d979f81b5)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_667.s4242427455552732)).sd3)))).xxxxyxxyxyyxyxyx)))))).sae, ((VECTOR(uint8_t, 8))(l_668.yxyyxyxy)).s50))), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_669.zwzy)).ywwzzxwx)), ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(0x01L, 255UL)).yyyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((l_670 , (l_566.y = l_671)), l_672, 251UL, 0UL)))), ((VECTOR(uint8_t, 4))(1UL))))).xzyzzyww))))).s12, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0x9BL))))), 0x14L)), ((VECTOR(uint8_t, 16))(1UL))))).s9, l_673, 0xC1L, 0x34L)).wxwyywzy))))).s14))).xxxx)).odd, ((VECTOR(uint8_t, 2))(0x9BL))))).hi, 1UL, l_674, 0x2AL, ((VECTOR(uint8_t, 2))(0x8FL)), 0x9BL, 0x59L))))).s37))).xyyyyxyx)).s10)))))), ((VECTOR(int32_t, 2))(0x7197CACAL)), 0L, ((VECTOR(int32_t, 2))(0x702FE3A7L)), 6L)).s1, l_675, ((VECTOR(int32_t, 4))(0x572E158AL)), l_676, ((VECTOR(int32_t, 2))(0x60932ED9L)), 1L, 0L, 0x08FF9FFCL)).s0c50)), (-1L), 0x6B12093EL)).s3), 1L, (-1L), 0x60C8FEC2L)).y , (-2L));
                    }
                }
                else
                { /* block id: 314 */
                    int32_t l_679[9][3][9] = {{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}},{{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L},{0x48CCD870L,3L,(-5L),4L,1L,0x1244294AL,0x3A262087L,0x7ACCA654L,1L}}};
                    int32_t *l_678 = &l_679[7][1][5];
                    uint8_t l_680 = 0x65L;
                    int i, j, k;
                    l_569[0][3][6] = l_678;
                    (*l_571) = l_680;
                    for (l_680 = 0; (l_680 == 50); l_680 = safe_add_func_uint16_t_u_u(l_680, 8))
                    { /* block id: 319 */
                        uint32_t l_683 = 0xF4842BE5L;
                        uint16_t l_684 = 1UL;
                        uint64_t l_685[3][1];
                        VECTOR(int32_t, 8) l_686 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        int8_t l_687 = 0x18L;
                        int8_t l_688 = 0x3BL;
                        int32_t l_689 = (-1L);
                        int8_t l_690 = 0x7FL;
                        uint8_t l_691 = 0xDEL;
                        uint64_t l_692 = 18446744073709551612UL;
                        int32_t l_693 = 0x5B90FB45L;
                        uint32_t l_694[4][6][4] = {{{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL}},{{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL}},{{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL}},{{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL},{0x5E303D7DL,1UL,0x5E303D7DL,0x5E303D7DL}}};
                        int8_t l_695 = 0x70L;
                        VECTOR(uint32_t, 8) l_696 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967286UL), 4294967286UL), 4294967286UL, 1UL, 4294967286UL);
                        int64_t l_697[2][5];
                        uint32_t l_698 = 0x4BD1334AL;
                        VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(0x133036F1L, (VECTOR(int32_t, 2))(0x133036F1L, 4L), 4L);
                        VECTOR(int32_t, 16) l_700 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        VECTOR(uint64_t, 4) l_701 = (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551607UL), 18446744073709551607UL);
                        VECTOR(uint64_t, 8) l_702 = (VECTOR(uint64_t, 8))(0x96C7D9C374AEAF7CL, (VECTOR(uint64_t, 4))(0x96C7D9C374AEAF7CL, (VECTOR(uint64_t, 2))(0x96C7D9C374AEAF7CL, 0xA05158893036079CL), 0xA05158893036079CL), 0xA05158893036079CL, 0x96C7D9C374AEAF7CL, 0xA05158893036079CL);
                        VECTOR(uint64_t, 8) l_703 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x2E4ABDEC89EC81F7L), 0x2E4ABDEC89EC81F7L), 0x2E4ABDEC89EC81F7L, 1UL, 0x2E4ABDEC89EC81F7L);
                        uint16_t l_704 = 65534UL;
                        VECTOR(uint64_t, 8) l_705 = (VECTOR(uint64_t, 8))(0x85E66F4258AD6ED0L, (VECTOR(uint64_t, 4))(0x85E66F4258AD6ED0L, (VECTOR(uint64_t, 2))(0x85E66F4258AD6ED0L, 0x22D918C0C448FE93L), 0x22D918C0C448FE93L), 0x22D918C0C448FE93L, 0x85E66F4258AD6ED0L, 0x22D918C0C448FE93L);
                        uint8_t l_706 = 1UL;
                        uint64_t l_707 = 0UL;
                        int32_t *l_709 = &l_689;
                        int32_t **l_708 = &l_709;
                        int32_t **l_710 = &l_709;
                        int32_t **l_711[2];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_685[i][j] = 0xB29CF64673BE1380L;
                        }
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_697[i][j] = (-1L);
                        }
                        for (i = 0; i < 2; i++)
                            l_711[i] = &l_709;
                        (*l_571) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(3L, 0x2EC6BA7FL)).xxxyyyxyyyxyyxyy)).sd;
                        (*l_571) &= ((VECTOR(int32_t, 4))((l_684 = l_683), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_685[1][0], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), (-8L))), (-1L), 7L)).y, (-1L), 0x35CFACCCL)))).zxwxyxzxyxyzywzx)).s09, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(0x348C2D40L, (-8L), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x697D45EBL, ((VECTOR(int32_t, 2))((-4L), (-1L))), ((VECTOR(int32_t, 4))(l_686.s4127)), (-5L))).odd, ((VECTOR(int32_t, 16))(4L, ((*l_678) = l_687), 0L, (l_688 ^= 0x0F7E2C47L), ((VECTOR(int32_t, 2))(1L, 1L)), l_689, (-3L), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x30AD9458L, (l_690 ^= 1L), 0x6B13C16EL, 3L, (-7L), ((VECTOR(int32_t, 4))(0x582CFC54L, (((l_692 |= l_691) , l_693) , l_694[2][2][0]), 0x65B15855L, 0x037F89E5L)), 0L, ((VECTOR(int32_t, 4))(0x21C5A8ECL)), 0L, 0L)).s45, ((VECTOR(int32_t, 2))(0x2238C966L))))), ((VECTOR(int32_t, 2))(0x1D5C5979L)), 0x11EFCA98L, ((VECTOR(int32_t, 2))((-9L))), 0x6C80AD81L)).scd9d))), (-1L), 0x4B3F7FF9L)).s65, ((VECTOR(int32_t, 2))(0x6FF12DE7L))))), 0x24D97EE5L, l_695, 0x127E9A29L, l_696.s1, 0x3691DC91L, 0x764903E7L)).s24))), 0x29D64D85L)).z;
                        l_698 = l_697[1][4];
                        l_711[0] = ((l_564 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(l_699.yyxz)).xzyyxxwwwxwzzxyz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_700.s9bd21beb54cf8ab3)).hi)))).s7663270342124461))).sdd)), (-7L), 0x62B1AE6AL)).w) , (((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 16))(6UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x9712815B0412BD3AL, 0x2D6F822DDE0FFAEAL)).xxxyyyxy)), 0xD040695793F1E8C1L, 0x9B959380571F0508L, (l_573.y ^= 0xC9C9F39CFB5D61C6L), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 4))(l_701.wyxx)).zzxyyyzxzywyzyyx, ((VECTOR(uint64_t, 2))(l_702.s47)).yyxyyxxxyyxxxxyx))))))))).se, ((VECTOR(uint64_t, 2))(l_703.s35)), 0xB1960A7D23351C32L))))).s185a, (uint64_t)(l_572.x = ((VECTOR(uint64_t, 16))(l_704, ((VECTOR(uint64_t, 4))(0x7BF4BDC5548CBEA4L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_705.s6074521206400761)).s7b)).hi, 18446744073709551615UL, 0x1FDF05A4F3F09E5AL)), FAKE_DIVERGE(p_1466->group_0_offset, get_group_id(0), 10), (l_577[1] = 0xAF23CD86282854ABL), ((VECTOR(uint64_t, 4))(18446744073709551615UL, 1UL, 1UL, 0x318C79BCBE514809L)).y, ((VECTOR(uint64_t, 2))(0xACBEBE6F683F1DEEL, 0x5A07E7E9BE376507L)), 1UL, 0x4F9600E7274BA347L, ((VECTOR(uint64_t, 4))(l_706, ((VECTOR(uint64_t, 2))(1UL, 0x8D7797B5A94EC223L)), 0xBB7D5FF30FAA3214L)))).s1)))).x , (l_710 = (l_707 , l_708))));
                    }
                }
            }
            unsigned int result = 0;
            result += l_557.w;
            result += l_557.z;
            result += l_557.y;
            result += l_557.x;
            result += l_558.f0;
            result += l_559;
            result += l_560;
            int l_561_i0, l_561_i1;
            for (l_561_i0 = 0; l_561_i0 < 6; l_561_i0++) {
                for (l_561_i1 = 0; l_561_i1 < 5; l_561_i1++) {
                    result += l_561[l_561_i0][l_561_i1];
                }
            }
            result += l_562.sf;
            result += l_562.se;
            result += l_562.sd;
            result += l_562.sc;
            result += l_562.sb;
            result += l_562.sa;
            result += l_562.s9;
            result += l_562.s8;
            result += l_562.s7;
            result += l_562.s6;
            result += l_562.s5;
            result += l_562.s4;
            result += l_562.s3;
            result += l_562.s2;
            result += l_562.s1;
            result += l_562.s0;
            int l_563_i0, l_563_i1;
            for (l_563_i0 = 0; l_563_i0 < 2; l_563_i0++) {
                for (l_563_i1 = 0; l_563_i1 < 8; l_563_i1++) {
                    result += l_563[l_563_i0][l_563_i1];
                }
            }
            result += l_564;
            result += l_565;
            result += l_566.y;
            result += l_566.x;
            result += l_567.y;
            result += l_567.x;
            result += l_568.s7;
            result += l_568.s6;
            result += l_568.s5;
            result += l_568.s4;
            result += l_568.s3;
            result += l_568.s2;
            result += l_568.s1;
            result += l_568.s0;
            result += l_570;
            result += l_572.w;
            result += l_572.z;
            result += l_572.y;
            result += l_572.x;
            result += l_573.w;
            result += l_573.z;
            result += l_573.y;
            result += l_573.x;
            result += l_574.w;
            result += l_574.z;
            result += l_574.y;
            result += l_574.x;
            result += l_575;
            result += l_576.y;
            result += l_576.x;
            int l_577_i0;
            for (l_577_i0 = 0; l_577_i0 < 6; l_577_i0++) {
                result += l_577[l_577_i0];
            }
            int l_578_i0, l_578_i1, l_578_i2;
            for (l_578_i0 = 0; l_578_i0 < 7; l_578_i0++) {
                for (l_578_i1 = 0; l_578_i1 < 10; l_578_i1++) {
                    for (l_578_i2 = 0; l_578_i2 < 3; l_578_i2++) {
                        result += l_578[l_578_i0][l_578_i1][l_578_i2];
                    }
                }
            }
            result += l_579.y;
            result += l_579.x;
            result += l_580;
            result += l_581.y;
            result += l_581.x;
            result += l_582;
            result += l_583.s7;
            result += l_583.s6;
            result += l_583.s5;
            result += l_583.s4;
            result += l_583.s3;
            result += l_583.s2;
            result += l_583.s1;
            result += l_583.s0;
            result += l_584;
            result += l_585;
            result += l_586;
            result += l_587.w;
            result += l_587.z;
            result += l_587.y;
            result += l_587.x;
            result += l_588;
            result += l_589;
            result += l_590;
            result += l_591;
            atomic_add(&p_1466->g_special_values[33 * get_linear_group_id() + 27], result);
        }
        else
        { /* block id: 337 */
            (1 + 1);
        }
        (*l_714) = ((VECTOR(int32_t, 4))(l_712.s2dbb)).w;
        return l_715[2];
    }
    else
    { /* block id: 342 */
        int16_t ***l_727 = &p_1466->g_726;
        int32_t l_731[2][2];
        int16_t *l_749 = (void*)0;
        VECTOR(uint16_t, 8) l_756 = (VECTOR(uint16_t, 8))(0x21A6L, (VECTOR(uint16_t, 4))(0x21A6L, (VECTOR(uint16_t, 2))(0x21A6L, 0UL), 0UL), 0UL, 0x21A6L, 0UL);
        VECTOR(int8_t, 16) l_769 = (VECTOR(int8_t, 16))(0x12L, (VECTOR(int8_t, 4))(0x12L, (VECTOR(int8_t, 2))(0x12L, 0L), 0L), 0L, 0x12L, 0L, (VECTOR(int8_t, 2))(0x12L, 0L), (VECTOR(int8_t, 2))(0x12L, 0L), 0x12L, 0L, 0x12L, 0L);
        uint8_t l_778 = 6UL;
        int8_t l_802 = (-9L);
        VECTOR(int16_t, 16) l_842 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-4L)), (-4L)), (-4L), (-9L), (-4L), (VECTOR(int16_t, 2))((-9L), (-4L)), (VECTOR(int16_t, 2))((-9L), (-4L)), (-9L), (-4L), (-9L), (-4L));
        union U0 **l_870 = (void*)0;
        int16_t l_911 = 5L;
        VECTOR(int32_t, 4) l_917 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x047E9FDAL), 0x047E9FDAL);
        int32_t *l_924[2][5][1] = {{{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489}},{{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489},{&p_1466->g_489}}};
        uint8_t *l_927 = &l_778;
        int8_t l_932 = (-3L);
        int8_t *l_933[1];
        uint32_t l_934 = 0xC15422FDL;
        VECTOR(int32_t, 2) l_936 = (VECTOR(int32_t, 2))(5L, (-1L));
        uint64_t *l_941 = &p_1466->g_487;
        VECTOR(int32_t, 2) l_967 = (VECTOR(int32_t, 2))((-10L), 0x2AA4E1B5L);
        VECTOR(int32_t, 8) l_975 = (VECTOR(int32_t, 8))(0x4D8A99CEL, (VECTOR(int32_t, 4))(0x4D8A99CEL, (VECTOR(int32_t, 2))(0x4D8A99CEL, (-5L)), (-5L)), (-5L), 0x4D8A99CEL, (-5L));
        VECTOR(int32_t, 2) l_976 = (VECTOR(int32_t, 2))(0x392D1A1AL, 0x198F2E96L);
        int16_t l_980[10] = {1L,0x2914L,0x12A2L,0x2914L,1L,1L,0x2914L,0x12A2L,0x2914L,1L};
        uint32_t l_1048 = 0x5E100DA5L;
        uint32_t *l_1108[10] = {(void*)0,&p_1466->g_511,(void*)0,&p_1466->g_511,(void*)0,(void*)0,&p_1466->g_511,(void*)0,&p_1466->g_511,(void*)0};
        uint32_t **l_1107[3][4] = {{&l_1108[5],&l_1108[5],&l_1108[5],&l_1108[5]},{&l_1108[5],&l_1108[5],&l_1108[5],&l_1108[5]},{&l_1108[5],&l_1108[5],&l_1108[5],&l_1108[5]}};
        VECTOR(int64_t, 16) l_1109 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, (-3L)), (-3L)), (-3L), 5L, (-3L), (VECTOR(int64_t, 2))(5L, (-3L)), (VECTOR(int64_t, 2))(5L, (-3L)), 5L, (-3L), 5L, (-3L));
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_731[i][j] = 0x2319E280L;
        }
        for (i = 0; i < 1; i++)
            l_933[i] = (void*)0;
        if ((safe_sub_func_uint32_t_u_u(((p_1466->g_464[1] , l_718) == l_718), ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_721.se84b)).yxywyyzyyxwyxyyx)).hi, ((VECTOR(int16_t, 16))((safe_mul_func_int16_t_s_s((l_724[2][0][5] != ((*l_727) = p_1466->g_726)), p_1466->g_442.s1)), 0x401DL, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(p_1466->g_728.sa8071facf2ae5363)).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 4L)), (-1L), (-3L))).xxxyzwxx))).even, ((VECTOR(int16_t, 8))(((*l_725) = ((((*p_455) >= (~(safe_rshift_func_uint16_t_u_s((((1UL || 0x89FDL) , p_1466->g_528.y) , GROUP_DIVERGE(0, 1)), 0)))) ^ l_731[0][1]) != l_731[0][1])), 0x2596L, p_1466->g_442.s2, l_731[0][1], l_731[0][1], ((VECTOR(int16_t, 2))((-1L))), 0x2E8AL)).odd))).odd)), ((VECTOR(int16_t, 2))(0x2EE9L))))), ((VECTOR(int16_t, 8))((-9L))), ((VECTOR(int16_t, 4))(4L)))).lo))).s5, 0x6DD9L)) <= 4294967295UL))))
        { /* block id: 345 */
            VECTOR(uint16_t, 2) l_734 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
            VECTOR(uint32_t, 4) l_736 = (VECTOR(uint32_t, 4))(0x3ED5EB98L, (VECTOR(uint32_t, 2))(0x3ED5EB98L, 4294967295UL), 4294967295UL);
            uint64_t *l_737[3][1][6];
            VECTOR(int8_t, 8) l_771 = (VECTOR(int8_t, 8))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0x4AL), 0x4AL), 0x4AL, 0x49L, 0x4AL);
            int32_t l_800 = 9L;
            int16_t *l_804 = (void*)0;
            VECTOR(int8_t, 16) l_854 = (VECTOR(int8_t, 16))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x2BL), 0x2BL), 0x2BL, 0x2EL, 0x2BL, (VECTOR(int8_t, 2))(0x2EL, 0x2BL), (VECTOR(int8_t, 2))(0x2EL, 0x2BL), 0x2EL, 0x2BL, 0x2EL, 0x2BL);
            VECTOR(int8_t, 4) l_859 = (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 4L), 4L);
            VECTOR(int8_t, 8) l_860 = (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, (-3L)), (-3L)), (-3L), 0x6AL, (-3L));
            union U0 ***l_871[2][4][2] = {{{&l_870,&l_870},{&l_870,&l_870},{&l_870,&l_870},{&l_870,&l_870}},{{&l_870,&l_870},{&l_870,&l_870},{&l_870,&l_870},{&l_870,&l_870}}};
            VECTOR(int16_t, 16) l_876 = (VECTOR(int16_t, 16))(0x177BL, (VECTOR(int16_t, 4))(0x177BL, (VECTOR(int16_t, 2))(0x177BL, 8L), 8L), 8L, 0x177BL, 8L, (VECTOR(int16_t, 2))(0x177BL, 8L), (VECTOR(int16_t, 2))(0x177BL, 8L), 0x177BL, 8L, 0x177BL, 8L);
            uint32_t *l_877 = (void*)0;
            uint32_t *l_878 = (void*)0;
            uint32_t *l_879[6][4] = {{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511},{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511},{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511},{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511},{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511},{&p_1466->g_511,&p_1466->g_511,&p_1466->g_511,&p_1466->g_511}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_737[i][j][k] = &p_1466->g_487;
                }
            }
            if ((((((*l_725) &= (**l_556)) , (safe_mul_func_int32_t_s_s((((void*)0 != &p_1466->g_487) | (l_734.y = (**p_1466->g_29))), (((((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(p_1466->g_735.s329167fb)), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1466->g_475.z, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 0x175EC4B2L)), 0x753BE9C6L, 4294967295UL)), 0x40F77FBEL, 0xF2B607A1L, 0xDAB66D23L)).odd)), ((VECTOR(uint32_t, 16))(l_736.wwzwyyxxyzxzyyzz)).sf37d))).wzwwzxyw))).s0 , (p_1466->g_487 = p_1466->g_528.z)) < (p_1466->g_745 ^= (((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((*l_725) = ((safe_sub_func_int16_t_s_s(0x04A4L, (l_744[0][4][0] != (void*)0))) || p_1466->g_442.s3)) & 1UL) , 0x60L), l_731[0][0])), l_731[0][1])) | l_736.x) , 0xC41C5B6E8D98CB9AL))) >= 7L)))) , &l_533) == p_1466->g_746))
            { /* block id: 351 */
                int8_t *l_785 = (void*)0;
                int64_t *l_794 = (void*)0;
                int64_t *l_795 = (void*)0;
                int64_t *l_796 = (void*)0;
                int64_t *l_797 = (void*)0;
                int64_t *l_798 = (void*)0;
                int64_t *l_799 = (void*)0;
                int32_t l_801 = (-1L);
                int16_t *l_803[3][8][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_805 = &l_801;
                int i, j, k;
                for (p_1466->g_511 = 0; (p_1466->g_511 != 47); p_1466->g_511 = safe_add_func_int64_t_s_s(p_1466->g_511, 1))
                { /* block id: 354 */
                    return l_749;
                }
                (*l_805) = (((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0UL, (((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_756.s36)).xxxyyxyx)).s7, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(2L, 4)), ((((safe_div_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(l_734.y, ((((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_769.s1ec13ff0)))).s6326423160337617)).scce6, ((VECTOR(int8_t, 2))(l_770.xx)).yxyy))).xxzwyywyzwywzwwz)).sd34d, ((VECTOR(int8_t, 16))(l_771.s7757445063721371)).sd991))).xyzzzyxz, ((VECTOR(int8_t, 8))(((safe_div_func_uint64_t_u_u(((p_1466->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))] &= (l_800 ^= (safe_lshift_func_uint8_t_u_s(((((*p_1466->g_488) <= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x6E109861L, 1L, ((VECTOR(int32_t, 4))(0x3D861A05L, 0x5E7C7BA8L, (-2L), 0x66AA540EL)), ((VECTOR(int32_t, 2))(p_1466->g_776.s61)), ((VECTOR(int32_t, 4))(l_777.s2114)), 7L, 0x5B5F685DL, 0x5C2A31CAL, 1L)).s41)).odd) || l_778) | 0x5494D8886D84672EL), (safe_sub_func_uint16_t_u_u(((((p_1466->g_comm_values[p_1466->tid] = (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((p_1466->g_786 &= p_1466->g_511), (safe_unary_minus_func_int8_t_s(0x31L)))), (safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((-1L), l_756.s7)), p_1466->g_32)) > l_756.s5), p_1466->g_547)))) , 1L) != l_771.s4)) & FAKE_DIVERGE(p_1466->local_2_offset, get_local_id(2), 10)) | 0x12C0EE27351D2F17L) && 4UL), l_756.s4)))))) || 18446744073709551615UL), l_801)) && l_800), l_802, (-1L), 6L, 0x1FL, 0x03L, 0x3CL, 0x23L)), ((VECTOR(int8_t, 8))(0x6FL))))).s35)).even, p_1466->g_511)), 1L)) , 18446744073709551615UL) > 0x385DED93BC7D2C60L) | l_801))) >= 0xDEL), (*p_455))) > (**l_556)) , (**l_556)) > l_736.y))) > GROUP_DIVERGE(2, 1)))) < (*p_455)) == l_778))), p_1466->g_489)) , l_803[1][1][0]) != l_804);
                for (p_1466->g_786 = 15; (p_1466->g_786 == 48); p_1466->g_786++)
                { /* block id: 364 */
                    int8_t *l_820 = (void*)0;
                    int8_t *l_821 = (void*)0;
                    int8_t *l_822[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint8_t *l_830 = (void*)0;
                    uint8_t **l_829 = &l_830;
                    int32_t l_837 = 0x62C74A34L;
                    uint16_t *l_838 = (void*)0;
                    int32_t l_839 = 0x275613CCL;
                    int32_t l_841 = (-5L);
                    int16_t *l_843[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_843[i] = (void*)0;
                    if ((((p_1466->g_3 != ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((**l_556), ((safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u((FAKE_DIVERGE(p_1466->local_2_offset, get_local_id(2), 10) , (!(l_841 = (safe_sub_func_uint16_t_u_u((*l_805), (safe_add_func_int16_t_s_s(p_1466->g_524.x, ((((p_1466->g_823 = ((VECTOR(int8_t, 4))(l_819.s0167)).y) < (safe_add_func_int32_t_s_s((safe_unary_minus_func_int64_t_s(((safe_rshift_func_int8_t_s_u(((p_1466->g_728.s3 , ((*l_829) = &p_1466->g_786)) == &p_1466->g_786), ((safe_lshift_func_uint16_t_u_u((l_839 |= (safe_lshift_func_uint16_t_u_u(((*l_718) &= l_734.x), (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(0x1FL, ((VECTOR(int8_t, 4))(0x0DL, 2L, 1L, 0x1FL)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((((l_837 = ((+(p_1466->g_776.s0 || 0x4143D3F4L)) ^ (*l_805))) ^ p_1466->g_444.s3) != (*l_805)) & p_1466->g_444.s7), l_769.sb, 1L, 0x5AL)), ((VECTOR(int8_t, 4))(0x27L)), ((VECTOR(int8_t, 4))(0x4DL))))).hi)))), (-8L))).s1, GROUP_DIVERGE(1, 1)))))), 14)) >= (-1L)))) != (*l_805)))), l_840))) < 0xF6249868BB33FB1BL) & (**p_1466->g_29))))))))))) , l_769.s7) < 5UL), 6)) < l_771.s7))), 65535UL)) , GROUP_DIVERGE(1, 1))) , (*p_455)) , l_842.sf))
                    { /* block id: 371 */
                        int i, j;
                        (*p_1466->g_29) = (*p_1466->g_29);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1466->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_837, p_1466->g_745)), 10))][(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))]));
                    }
                    else
                    { /* block id: 376 */
                        (*l_805) |= (*p_455);
                    }
                }
                (*l_556) = (void*)0;
            }
            else
            { /* block id: 381 */
                int16_t *l_848 = &p_1466->g_32;
                int32_t l_863 = 1L;
                int32_t *l_865 = (void*)0;
                (*p_1466->g_488) = (safe_add_func_uint8_t_u_u(((l_848 != (void*)0) , (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(1UL, ((VECTOR(uint16_t, 2))(0x087EL, 0xCD0DL)).even, ((VECTOR(uint16_t, 2))(p_1466->g_851.s77)).lo, l_736.y, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_1466->g_852.s5662)))), ((VECTOR(uint16_t, 8))(l_853.s24776714)).odd)))))).yxxwxzyy)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((p_1466->g_489 && l_736.y) == FAKE_DIVERGE(p_1466->group_1_offset, get_group_id(1), 10)), (((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(0x4EL, 0x65L, 0x09L, 1L)).hi, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(l_854.sce)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(p_1466->g_855.s7063)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(l_856.sb6)).yxyxxyyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(1L, 0x46L)))), 0x64L, 0x4EL)).xwwxyxxy))).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1466->g_857.s2536)))))), ((VECTOR(int8_t, 16))(l_858.yxyxyxyxyxxyyyxx)).s4f2d))).wywzyywx)).odd)).hi, ((VECTOR(int8_t, 2))(l_859.xx))))), 0L, (-5L))).even, ((VECTOR(int8_t, 2))(l_860.s33)), ((VECTOR(int8_t, 2))(0x03L, 0x73L)))))))).xyxxxxxxyyxxyxyx))).sd7))).even && (**l_556)), (safe_add_func_int32_t_s_s(0L, ((*l_727) == (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x5D548838C2DC7D51L, (-1L))).xyyyyxyxyxyxyxyy)).s5 , (void*)0)))), 0xBE05L, ((VECTOR(uint16_t, 4))(0xD333L)))).s03)), 0UL, 0x99A1L)).odd, ((VECTOR(uint16_t, 2))(0x4EE0L))))).yyxy, ((VECTOR(uint16_t, 4))(65535UL))))).even)).xyxyxxyx, ((VECTOR(uint16_t, 8))(0xEFBAL)), ((VECTOR(uint16_t, 8))(0UL))))))).s24)), ((VECTOR(uint16_t, 2))(0x97E7L))))))).yxyxxxyx)), 65535UL, l_863, 0x8213L, 1UL)).se, l_863))), GROUP_DIVERGE(1, 1)));
                (*p_1466->g_29) = p_455;
                (*p_1466->g_29) = (*l_556);
                (*l_556) = (void*)0;
            }
            p_455 = (p_1466->g_30 = p_455);
            (*p_1466->g_885) = (safe_rshift_func_int16_t_s_s((l_769.s8 , (safe_add_func_uint64_t_u_u((0x590B3F15EA882794L ^ l_734.x), ((l_854.s6 , (l_535 = l_870)) != (p_1466->g_872[0][1][0] = (void*)0))))), ((safe_div_func_int8_t_s_s((((-1L) > (((VECTOR(int16_t, 16))(l_876.s39318e90c59bd983)).s7 <= (((((++p_1466->g_511) & (p_1466->g_884 = ((((safe_rshift_func_uint16_t_u_s(((void*)0 == l_804), (**l_556))) == l_859.z) & (**l_556)) & p_1466->g_32))) , (void*)0) == (void*)0) , l_800))) ^ (**l_556)), GROUP_DIVERGE(0, 1))) , (-8L))));
            return l_804;
        }
        else
        { /* block id: 396 */
            VECTOR(int16_t, 8) l_889 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            int64_t *l_898 = (void*)0;
            int8_t *l_901[4][8][8] = {{{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_802,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_904 = (-1L);
            uint8_t *l_905 = &p_1466->g_786;
            int32_t l_906 = 0x779BA23BL;
            int32_t *l_907 = (void*)0;
            int32_t *l_908 = (void*)0;
            int32_t *l_909 = &l_904;
            int32_t *l_910[8] = {&l_731[0][1],&l_731[0][1],&l_731[0][1],&l_731[0][1],&l_731[0][1],&l_731[0][1],&l_731[0][1],&l_731[0][1]};
            uint64_t l_912[1];
            union U0 *l_915 = &p_1466->g_464[2];
            union U0 **l_916 = &l_536;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_912[i] = 0xAE5247977A2A6372L;
            l_906 &= ((**l_556) > ((*l_905) = ((l_904 |= ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1466->g_888.wxwzxxwzyyxyxwyy)))).scfec)).lo)), 0x264DL, 0x398DL)).wyxywxxz, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(l_889.s6054725412566113)).sb8ca, ((VECTOR(int16_t, 16))(p_1466->g_890.s1566356230316422)).s1660))).wxzwwzyx))).odd, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(0x1A23L, (safe_add_func_int32_t_s_s(((GROUP_DIVERGE(0, 1) >= ((safe_lshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s((l_889.s3 != ((p_1466->g_897 == l_898) || l_889.s7)), (**l_556))) >= (((*l_718) = l_778) , (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((((l_901[1][0][7] == p_1466->g_902) || l_802) == p_1466->g_440.x) , 0L), ((VECTOR(int16_t, 2))(0L)), 0x602DL, 0x6B81L, 0x08BDL, ((VECTOR(int16_t, 4))((-3L))), ((VECTOR(int16_t, 4))(0x195CL)), (-1L), (-1L))).s3, (**l_556))))), (**l_556))) | p_1466->g_888.z)) | 7UL), l_731[0][1])), ((VECTOR(int16_t, 2))((-2L))), ((VECTOR(int16_t, 4))((-1L))))), ((VECTOR(int16_t, 8))(0x5AAFL))))).hi))).w, 0)) != l_889.s1)) && 1UL)));
            ++l_912[0];
            (*l_909) |= (3UL >= (l_915 != ((*l_916) = ((*l_535) = l_915))));
            l_731[1][0] = ((VECTOR(int32_t, 2))(l_917.xx)).even;
        }
        l_531.s6 = (!(l_529.s5 ^= (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((*p_1466->g_488) &= (l_712.sd |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(5L, 0L)).yxyyxyxxxxyyxyxy)).sb)) == ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))((safe_sub_func_int8_t_s_s(((~((p_1466->g_526.x = (GROUP_DIVERGE(1, 1) , ((((p_1466->g_855.s7 < ((*l_927) &= p_1466->g_855.s3)) ^ (**l_556)) & (-3L)) || 0xECL))) | (safe_mul_func_int8_t_s_s(((p_1466->g_857.s0 &= (safe_add_func_uint64_t_u_u(((p_1466->g_728.s4 , 0x34L) , 0UL), ((((**l_556) ^ l_932) , p_1466->g_511) , FAKE_DIVERGE(p_1466->global_2_offset, get_global_id(2), 10))))) > l_934), (**l_556))))) == p_1466->g_444.s4), FAKE_DIVERGE(p_1466->group_2_offset, get_group_id(2), 10))), ((VECTOR(uint32_t, 4))(0xA588C6D8L)), (**l_556), 0x192A297CL, 0x7CEF6B27L, (**l_556), (**l_556), 0xB0F2FB58L, p_1466->g_9[1], ((VECTOR(uint32_t, 2))(0x484C8061L)), 0x226BA92AL, 8UL)).lo, (uint32_t)(**l_556)))).s6), (**l_556))), (*p_1466->g_30))), p_1466->g_855.s3))));
        if ((p_1466->g_935 , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(l_936.xyyxxyyx)).s6307300350356375, (int32_t)((**l_556) == ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1466->local_1_offset, get_local_id(1), 10), ((*l_941) |= (((VECTOR(int8_t, 16))(p_1466->g_939.wyzyzxwyzwwxzxwx)).sa && ((VECTOR(int8_t, 16))(p_1466->g_940.s1253354226476041)).s9)))) <= ((-3L) ^ p_1466->g_547))), (int32_t)(l_947 ^= (((VECTOR(int16_t, 2))(p_1466->g_942.sde)).odd >= (&p_1466->g_487 == (((safe_lshift_func_uint8_t_u_s(((*l_927) = ((void*)0 != &p_1466->g_872[0][1][0])), (p_1466->g_524.y != (safe_mul_func_uint8_t_u_u(p_1466->g_444.s3, (**l_556)))))) > (**l_556)) , l_941))))))).s8))
        { /* block id: 417 */
            l_777.s0 &= (**p_1466->g_29);
        }
        else
        { /* block id: 419 */
            uint64_t l_954 = 1UL;
            VECTOR(int8_t, 8) l_977 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x4FL), 0x4FL), 0x4FL, (-10L), 0x4FL);
            VECTOR(int64_t, 8) l_988 = (VECTOR(int64_t, 8))(0x4B07C398DD6C63CAL, (VECTOR(int64_t, 4))(0x4B07C398DD6C63CAL, (VECTOR(int64_t, 2))(0x4B07C398DD6C63CAL, (-1L)), (-1L)), (-1L), 0x4B07C398DD6C63CAL, (-1L));
            int32_t l_1046 = 0x4A638DFEL;
            int32_t **l_1056 = &l_924[0][0][0];
            int32_t l_1060 = 0x4B10A55FL;
            int i;
            if ((*p_455))
            { /* block id: 420 */
                VECTOR(int16_t, 8) l_971 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                int16_t l_1025 = 0L;
                VECTOR(int32_t, 8) l_1047 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x34CF4AA9L), 0x34CF4AA9L), 0x34CF4AA9L, (-5L), 0x34CF4AA9L);
                int32_t *l_1051 = (void*)0;
                uint32_t *l_1053[1][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                uint32_t **l_1052 = &l_1053[0][0][2];
                int32_t ***l_1057 = &l_556;
                int32_t **l_1059 = &l_1051;
                int32_t ***l_1058 = &l_1059;
                int i, j, k;
                if ((safe_sub_func_uint16_t_u_u((((((VECTOR(uint32_t, 8))((((VECTOR(int16_t, 8))((((safe_lshift_func_int8_t_s_u((((((safe_div_func_int16_t_s_s(0L, (((*p_455) && (0x65L == (((FAKE_DIVERGE(p_1466->group_1_offset, get_group_id(1), 10) == (l_954 | (safe_div_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((((((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(l_961.s4647)).zzwwzxyxxzzwxyyy))))).s9, 1)) , ((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(3L, 0x4EL)).xyyyyyxy)).s26, (int8_t)(safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(p_1466->g_966.sd282929a13b5cb23)).s09, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_967.yx)).yyyxyxxyxxyxyyxy)).sc3bb, ((VECTOR(int32_t, 4))(p_1466->g_968.yxyx))))).lo))), ((VECTOR(int32_t, 4))(p_1466->g_969.yyyy)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0L, 1L)), ((VECTOR(int32_t, 16))(p_1466->g_970.s1216535717523062)).s7b))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_971.s2440172260161067)).s9358)).even, ((VECTOR(uint16_t, 4))(p_1466->g_972.s7470)).hi))).yxxxxyyx, ((VECTOR(int32_t, 4))(l_973.s4645)).xxxwxywx))).lo)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x05A94F5EL, 0L)).xxyx))))).w, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_974.zyzxxyyy)).s4612237046042332, ((VECTOR(int32_t, 2))(l_975.s14)).xxyyxyyxxyxxxyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_976.xxxxxyxxxxxxyxxy)).s2061, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0L)), (-1L), 0x63584E1EL)).wyzzywzy)).s24, (int32_t)(-9L), (int32_t)((VECTOR(int32_t, 8))(((((void*)0 != &p_1466->g_745) , (((-8L) >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_977.s10)))).yyxxyxxy)).s2) , (((safe_div_func_int8_t_s_s((&p_1466->g_547 != (void*)0), p_1466->g_776.s2)) ^ GROUP_DIVERGE(1, 1)) , FAKE_DIVERGE(p_1466->local_0_offset, get_local_id(0), 10)))) ^ 0x3DA901D3L), (*p_1466->g_30), ((VECTOR(int32_t, 2))(0L)), l_971.s3, ((VECTOR(int32_t, 2))(0x796246BFL)), 3L)).s4))).xxyy, ((VECTOR(int32_t, 4))(0x4F6DA9B0L)), ((VECTOR(int32_t, 4))(0x131D330FL)))))))).ywwzxzzxyxxxwxzy, ((VECTOR(int32_t, 16))(0x6891E1E5L))))).hi)).s4231047267172200))).s39, ((VECTOR(int32_t, 2))(1L))))), 0x1313A709L)).ywxxxzyxyzzxwwyw, ((VECTOR(int32_t, 16))(0L))))).sf7ec)), ((VECTOR(int32_t, 2))(0x51259468L)), 0x0D270CCFL, 0x0675CFBBL)).s9, p_1466->g_526.x))))).even || 1L), l_980[8])) ^ 1UL)) , 0xE1941E11D8233B07L) || l_971.s6) >= (**l_556)), (-5L))) , p_1466->g_521.s2) , 1L), (*p_455))))) , p_1466->g_981) , FAKE_DIVERGE(p_1466->group_2_offset, get_group_id(2), 10)))) || (*p_455)))) | p_1466->g_857.s7) <= l_971.s3) , l_954) >= (**l_556)), p_1466->g_776.s2)) , 0x02L) || 255UL), 0x267CL, p_1466->g_530.z, 0x3DC8L, 0x6CB3L, 0x2F6CL, 0L, (-1L))).s5 || 65530UL), p_1466->g_475.x, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0x843DAB73L)), 4294967291UL, 0xD08A3AA1L)).s3 , &p_1466->g_872[0][1][0]) == &l_535) | FAKE_DIVERGE(p_1466->group_0_offset, get_group_id(0), 10)), (**l_556))))
                { /* block id: 421 */
                    VECTOR(uint64_t, 8) l_995 = (VECTOR(uint64_t, 8))(0x0E5BE727A8221847L, (VECTOR(uint64_t, 4))(0x0E5BE727A8221847L, (VECTOR(uint64_t, 2))(0x0E5BE727A8221847L, 0x29196DB4CF542206L), 0x29196DB4CF542206L), 0x29196DB4CF542206L, 0x0E5BE727A8221847L, 0x29196DB4CF542206L);
                    int32_t l_1010[5];
                    int16_t **l_1018[4] = {&l_749,&l_749,&l_749,&l_749};
                    VECTOR(int16_t, 2) l_1020 = (VECTOR(int16_t, 2))((-1L), 0x006CL);
                    uint16_t *l_1034[2];
                    int64_t *l_1044 = (void*)0;
                    int64_t *l_1045[2][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1010[i] = 0x59662C21L;
                    for (i = 0; i < 2; i++)
                        l_1034[i] = (void*)0;
                    for (l_934 = (-6); (l_934 == 57); l_934 = safe_add_func_int64_t_s_s(l_934, 7))
                    { /* block id: 424 */
                        VECTOR(uint64_t, 8) l_994 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x4BB10217738BA04EL), 0x4BB10217738BA04EL), 0x4BB10217738BA04EL, 18446744073709551609UL, 0x4BB10217738BA04EL);
                        uint64_t **l_1005 = (void*)0;
                        uint64_t **l_1007 = &l_941;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1466->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(2L, ((VECTOR(int64_t, 8))(0x5E98FF90D65ACFC6L, (-1L), 0x39F72B8796B4B0CDL, 0x7E4DAB05985DB8AFL, ((VECTOR(int64_t, 2))(l_988.s30)), (-5L), 0x7C2E68C253FFB60BL)), ((VECTOR(int64_t, 2))(l_989.yx)), ((VECTOR(int64_t, 2))(l_990.zz)), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(p_1466->g_991.scd57d40e21b72fe3)).s36, (int64_t)(safe_rshift_func_int16_t_s_u(((*l_725) = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_994.s62115522)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_995.s3772)).hi)), 1UL, 0UL, 0UL, ((VECTOR(uint64_t, 2))(9UL, 0xDF48EF89E3FAEA05L)), 18446744073709551607UL)).s4f, ((VECTOR(uint64_t, 16))(p_1466->g_996.xwwwyyywyxwwyxxx)).sb7))))).lo <= (((safe_add_func_uint64_t_u_u((((l_994.s0 || ((VECTOR(uint64_t, 8))(0x5978AB44FF64A3BBL, 0x88F2E2858F9D3F6FL, FAKE_DIVERGE(p_1466->local_0_offset, get_local_id(0), 10), ((((*p_1466->g_488) = (safe_mod_func_uint64_t_u_u((l_977.s7 < (((l_988.s7 < ((safe_rshift_func_uint8_t_u_s(p_1466->g_528.x, (((safe_sub_func_int64_t_s_s((((((**l_556) , (void*)0) == ((*l_1007) = (p_1466->g_1006 = &l_954))) == (safe_div_func_uint16_t_u_u(((*l_718) = (**l_556)), l_995.s1))) ^ l_994.s1), l_954)) >= l_995.s7) && l_994.s7))) , (**l_556))) < (**l_556)) | 0UL)), l_971.s1))) > l_995.s5) | p_1466->g_939.y), 0xAA33E13FAD9F1588L, 0x8F61EEA48316F7F2L, 1UL, 0x7B3A2A8DAEC147F7L)).s5) > 0x416CD61BL) ^ l_995.s1), (**l_556))) , l_988.s6) ^ p_1466->g_442.s1))), l_971.s0)), (int64_t)l_994.s5))), (-1L))).sa, p_1466->g_884)), l_971.s1)), 10))][(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))]));
                        l_1010[4] = ((l_995.s7 | FAKE_DIVERGE(p_1466->local_0_offset, get_local_id(0), 10)) , (*p_1466->g_30));
                    }
                    atomic_sub(&p_1466->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1466->g_1011.sc771)), (((p_1466->g_526.y , ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(p_1466->g_1014.yyyyxxxyxxyxxyyy)).sd, ((VECTOR(uint32_t, 16))(p_1466->g_1015.wwwywxyzyyxxwwxz)).sa)) || (l_1046 = ((safe_mod_func_int8_t_s_s((+(((((p_1466->g_726 == l_1018[0]) > (((VECTOR(int16_t, 2))((-1L), 0x7D63L)).hi | ((*l_718) = ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(0UL, 0x0467L)).xxyy, ((VECTOR(uint16_t, 8))(l_1019.wwzyxzxw)).hi))).z))) > ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1020.xyyyyxxyyyyyyxyy)).s40)).lo) && (safe_lshift_func_uint8_t_u_u(((~((safe_mod_func_uint32_t_u_u((((l_1025 != ((safe_lshift_func_uint8_t_u_s(l_988.s0, ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((p_1466->g_972.s1 = (++(*l_718))) && 0xED2DL), (safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((**l_556) == (l_1025 ^ (p_1466->g_comm_values[p_1466->tid] = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x7B8BL, l_1043[8])), l_995.s3))))) , p_1466->g_823), p_1466->g_966.s8)), 8L)))), l_971.s6)) && (*p_1466->g_30)))) > (**l_556))) == 0xB8D86E5CL) <= 0x6E3E3B32L), 0x5D5F758DL)) , l_1010[2])) != l_1010[4]), p_1466->g_1015.x))) > (-1L))), 0x73L)) , p_1466->g_528.z)))) & 4294967295UL) || 65535UL), ((VECTOR(int32_t, 2))(0x66426784L)), (-1L))).s5652740211547326)).sb5, ((VECTOR(int32_t, 2))(1L))))).xxxy, ((VECTOR(int32_t, 4))(0x158DC280L))))).w);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1466->v_collective += p_1466->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    ++l_1048;
                }
                else
                { /* block id: 442 */
                    (*l_556) = l_1051;
                }
                l_1060 ^= ((!(((*l_1052) = (l_1046 , &l_934)) == &l_934)) > (safe_mod_func_uint32_t_u_u((((*l_1057) = l_1056) != ((*l_1058) = &p_1466->g_30)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0xEA4778F4L, 0xA019298FL, 0xDBC05000L, 1UL)))).x)));
            }
            else
            { /* block id: 449 */
                int32_t l_1061 = (-1L);
                int32_t l_1070 = (-1L);
                int32_t l_1078 = 1L;
                int32_t l_1079 = 0x0596157BL;
                int32_t l_1082 = 0x6E6A45DAL;
                uint32_t *l_1106[1];
                uint32_t **l_1105 = &l_1106[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_1106[i] = &p_1466->g_511;
                l_1061 ^= ((*p_1466->g_488) = (**l_556));
                for (p_1466->g_32 = 0; (p_1466->g_32 >= 3); ++p_1466->g_32)
                { /* block id: 454 */
                    int8_t l_1071 = (-4L);
                    int32_t l_1073 = 3L;
                    int32_t l_1074 = 0x62487858L;
                    int32_t l_1075[6] = {0x2AF2FF2DL,0x2AF2FF2DL,0x2AF2FF2DL,0x2AF2FF2DL,0x2AF2FF2DL,0x2AF2FF2DL};
                    int8_t l_1081 = 0x3EL;
                    int i;
                    for (p_1466->g_786 = 0; (p_1466->g_786 < 21); p_1466->g_786++)
                    { /* block id: 457 */
                        uint64_t l_1066[4][8] = {{0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL,0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL},{0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL,0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL},{0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL,0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL},{0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL,0x5E7D48BCAA28B40DL,18446744073709551610UL,18446744073709551610UL,0x5E7D48BCAA28B40DL}};
                        int32_t l_1069 = 0L;
                        int32_t l_1072 = 0x4EF67257L;
                        int32_t l_1076 = 0x76030D04L;
                        int32_t l_1077[7][5] = {{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L},{(-1L),(-1L),0x585F5AEBL,0x5CC2C104L,7L}};
                        uint16_t l_1083 = 65531UL;
                        int i, j;
                        --l_1066[1][4];
                        if (l_1066[1][4])
                            break;
                        --l_1083;
                    }
                    if ((*p_455))
                        continue;
                }
                if ((atomic_inc(&p_1466->g_atomic_input[33 * get_linear_group_id() + 18]) == 1))
                { /* block id: 465 */
                    int32_t l_1086 = 1L;
                    int64_t l_1104[10] = {0x02F83EF97C9EAFF7L,(-7L),0x77984D07019B8CEEL,(-7L),0x02F83EF97C9EAFF7L,0x02F83EF97C9EAFF7L,(-7L),0x77984D07019B8CEEL,(-7L),0x02F83EF97C9EAFF7L};
                    int i;
                    for (l_1086 = 0; (l_1086 != 1); l_1086 = safe_add_func_uint16_t_u_u(l_1086, 4))
                    { /* block id: 468 */
                        union U0 l_1090[8][2] = {{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}},{{1UL},{0UL}}};
                        union U0 *l_1089[8][8] = {{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]},{&l_1090[2][0],&l_1090[1][1],&l_1090[2][0],(void*)0,&l_1090[1][1],(void*)0,&l_1090[2][0],&l_1090[1][1]}};
                        union U0 *l_1091 = &l_1090[3][1];
                        int i, j;
                        l_1091 = l_1089[6][1];
                    }
                    for (l_1086 = 0; (l_1086 == (-3)); l_1086 = safe_sub_func_int8_t_s_s(l_1086, 1))
                    { /* block id: 473 */
                        int32_t l_1094 = 0x6BBAFD52L;
                        int16_t l_1095[9];
                        uint32_t l_1096 = 0x88C24B4AL;
                        int32_t *l_1099[10][2] = {{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094},{&l_1094,&l_1094}};
                        int32_t *l_1100 = (void*)0;
                        int32_t *l_1101 = &l_1094;
                        uint64_t l_1102 = 18446744073709551615UL;
                        uint16_t l_1103 = 0UL;
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1095[i] = 0x02A7L;
                        l_1096++;
                        l_1099[3][0] = (void*)0;
                        l_1101 = l_1100;
                        l_1103 ^= l_1102;
                    }
                    l_1104[7] |= 0x37752984L;
                    unsigned int result = 0;
                    result += l_1086;
                    int l_1104_i0;
                    for (l_1104_i0 = 0; l_1104_i0 < 10; l_1104_i0++) {
                        result += l_1104[l_1104_i0];
                    }
                    atomic_add(&p_1466->g_special_values[33 * get_linear_group_id() + 18], result);
                }
                else
                { /* block id: 480 */
                    (1 + 1);
                }
                l_1070 = ((((*l_927) = FAKE_DIVERGE(p_1466->group_1_offset, get_group_id(1), 10)) ^ ((l_1107[2][0] = l_1105) != (void*)0)) , (((VECTOR(int64_t, 16))(l_1109.s3bb5ce839fee4a9e)).s7 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1466->g_1110.yyxxxxxxyyxxxxxy)).s9b9d)).wyxwzywx)).s0));
            }
            return &p_1466->g_32;
        }
    }
    p_1466->g_969.x ^= (&p_1466->g_903 == (((safe_sub_func_int16_t_s_s(0x0F51L, (safe_rshift_func_int16_t_s_s((**l_556), 9)))) || (safe_rshift_func_uint8_t_u_s((((*p_1466->g_885) = (*p_1466->g_30)) != ((safe_rshift_func_int16_t_s_u((p_1466->g_942.sf &= (p_1466->g_32 = ((VECTOR(int16_t, 16))(p_1466->g_1120.xxyyxyxyxyxyyxxy)).sd)), 10)) ^ p_1466->g_745)), 2))) , l_1121));
    return &p_1466->g_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_1466->g_32 p_1466->g_411 p_1466->g_475 p_1466->g_444 p_1466->g_30 p_1466->g_3 p_1466->g_9 p_1466->g_comm_values p_1466->g_488 p_1466->g_487 p_1466->g_442 p_1466->l_comm_values
 * writes: p_1466->g_487 p_1466->g_489 p_1466->g_511 p_1466->g_444
 */
int32_t * func_456(int32_t ** p_457, int16_t * p_458, union U0 * p_459, struct S1 * p_1466)
{ /* block id: 231 */
    VECTOR(int8_t, 8) l_473 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x7DL), 0x7DL), 0x7DL, (-7L), 0x7DL);
    int32_t **l_476 = &p_1466->g_30;
    VECTOR(uint8_t, 2) l_477 = (VECTOR(uint8_t, 2))(4UL, 0x13L);
    uint64_t *l_486[4][6] = {{&p_1466->g_487,(void*)0,&p_1466->g_487,(void*)0,&p_1466->g_487,&p_1466->g_487},{&p_1466->g_487,(void*)0,&p_1466->g_487,(void*)0,&p_1466->g_487,&p_1466->g_487},{&p_1466->g_487,(void*)0,&p_1466->g_487,(void*)0,&p_1466->g_487,&p_1466->g_487},{&p_1466->g_487,(void*)0,&p_1466->g_487,(void*)0,&p_1466->g_487,&p_1466->g_487}};
    uint16_t l_493 = 65535UL;
    VECTOR(int32_t, 4) l_496 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 1L), 1L);
    uint8_t *l_499 = (void*)0;
    uint8_t *l_500 = (void*)0;
    uint32_t *l_509 = (void*)0;
    uint32_t *l_510 = &p_1466->g_511;
    VECTOR(uint8_t, 2) l_516 = (VECTOR(uint8_t, 2))(0xAFL, 0UL);
    uint16_t *l_517 = &l_493;
    uint8_t *l_518 = (void*)0;
    uint8_t *l_519 = (void*)0;
    int32_t *l_520 = &p_1466->g_489;
    int i, j;
    (*p_1466->g_488) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (*p_458))), ((VECTOR(int8_t, 2))(l_473.s25)).even)), ((safe_unary_minus_func_uint8_t_u((((((p_1466->g_411 , ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(248UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(0UL, (((((VECTOR(uint32_t, 2))(p_1466->g_475.wx)).even , l_476) == (void*)0) ^ p_1466->g_444.s3), ((VECTOR(uint8_t, 2))(l_477.xx)), (**l_476), (0x4C998F23L > (((((safe_mul_func_int8_t_s_s((((((p_1466->g_487 = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((void*)0 == &p_1466->g_30), (**l_476))), 4)), (**l_476))) < (-4L))) ^ p_1466->g_9[5]) || (**l_476)) > (**l_476)) , 0x1BL), 2L)) | p_1466->g_comm_values[p_1466->tid]) ^ p_1466->g_411) != (**l_476)) <= GROUP_DIVERGE(1, 1))), 255UL, 0xA2L)).s10, ((VECTOR(uint8_t, 2))(0x0CL))))), 0xB7L)), ((VECTOR(uint8_t, 4))(0x54L)), ((VECTOR(uint8_t, 4))(0x95L))))).y) || (**l_476)) == (**l_476)) , (*p_458)) & (**l_476)))) | (*p_458))));
    for (p_1466->g_487 = (-3); (p_1466->g_487 <= 9); p_1466->g_487 = safe_add_func_uint8_t_u_u(p_1466->g_487, 2))
    { /* block id: 236 */
        uint8_t l_492 = 0xF0L;
        l_492 = (**l_476);
        ++l_493;
    }
    (*l_520) = ((+((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(l_496.wzxy)), (int32_t)(**p_457), (int32_t)(safe_mul_func_uint8_t_u_u(((l_496.z = (p_1466->g_475.w != (**l_476))) != (**l_476)), ((**l_476) > (((safe_mul_func_uint8_t_u_u((p_1466->g_444.s0 = (safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s((((**l_476) , ((*l_510) = (safe_lshift_func_uint16_t_u_u((p_1466->g_442.s4 > 0xE7BFL), 11)))) == ((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) , ((VECTOR(uint8_t, 16))(l_516.xyxyxxyxyyxxxyyy)).se), 4)), ((*l_517) = 65527UL))) == (**l_476)) <= (**l_476)) > p_1466->g_442.s4)), p_1466->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1466->tid, 40))])) || p_1466->g_487), GROUP_DIVERGE(2, 1)))), (**l_476))) & (**l_476)) , p_1466->g_3))))))))).z) , (**l_476));
    return &p_1466->g_411;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_comm_values[i] = 1;
    struct S1 c_1467;
    struct S1* p_1466 = &c_1467;
    struct S1 c_1468 = {
        0x2CB51DBAL, // p_1466->g_3
        {0UL,0x8BFC4F27L,0UL,0UL,0x8BFC4F27L,0UL,0UL,0x8BFC4F27L}, // p_1466->g_9
        &p_1466->g_3, // p_1466->g_30
        &p_1466->g_30, // p_1466->g_29
        8L, // p_1466->g_32
        (-9L), // p_1466->g_411
        (VECTOR(uint16_t, 2))(65533UL, 65535UL), // p_1466->g_440
        (VECTOR(uint8_t, 8))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x5FL), 0x5FL), 0x5FL, 252UL, 0x5FL), // p_1466->g_442
        (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x1AL), 0x1AL), 0x1AL, 2UL, 0x1AL), // p_1466->g_444
        {{255UL},{255UL},{255UL},{255UL}}, // p_1466->g_464
        (VECTOR(uint32_t, 4))(0x7E57B274L, (VECTOR(uint32_t, 2))(0x7E57B274L, 0x983165D0L), 0x983165D0L), // p_1466->g_475
        0x986B2B06783806EBL, // p_1466->g_487
        0x0621FC1AL, // p_1466->g_489
        &p_1466->g_489, // p_1466->g_488
        5UL, // p_1466->g_511
        (VECTOR(int32_t, 8))(0x74CE0EF7L, (VECTOR(int32_t, 4))(0x74CE0EF7L, (VECTOR(int32_t, 2))(0x74CE0EF7L, (-10L)), (-10L)), (-10L), 0x74CE0EF7L, (-10L)), // p_1466->g_521
        (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1D68742BL), 0x1D68742BL), // p_1466->g_524
        (VECTOR(int32_t, 2))(2L, (-5L)), // p_1466->g_526
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB8A9L), 0xB8A9L), // p_1466->g_528
        (VECTOR(int32_t, 4))(0x5CB8B9D0L, (VECTOR(int32_t, 2))(0x5CB8B9D0L, (-1L)), (-1L)), // p_1466->g_530
        {255UL}, // p_1466->g_534
        {{{0x17L},{0xC7L},{0x17L},{0x17L}},{{0x17L},{0xC7L},{0x17L},{0x17L}},{{0x17L},{0xC7L},{0x17L},{0x17L}},{{0x17L},{0xC7L},{0x17L},{0x17L}}}, // p_1466->g_537
        65534UL, // p_1466->g_547
        (void*)0, // p_1466->g_726
        (VECTOR(int16_t, 16))(0x7800L, (VECTOR(int16_t, 4))(0x7800L, (VECTOR(int16_t, 2))(0x7800L, 0x6E49L), 0x6E49L), 0x6E49L, 0x7800L, 0x6E49L, (VECTOR(int16_t, 2))(0x7800L, 0x6E49L), (VECTOR(int16_t, 2))(0x7800L, 0x6E49L), 0x7800L, 0x6E49L, 0x7800L, 0x6E49L), // p_1466->g_728
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967291UL), 4294967291UL), 4294967291UL, 0UL, 4294967291UL, (VECTOR(uint32_t, 2))(0UL, 4294967291UL), (VECTOR(uint32_t, 2))(0UL, 4294967291UL), 0UL, 4294967291UL, 0UL, 4294967291UL), // p_1466->g_735
        0UL, // p_1466->g_745
        (void*)0, // p_1466->g_746
        (VECTOR(int32_t, 8))(0x520423D9L, (VECTOR(int32_t, 4))(0x520423D9L, (VECTOR(int32_t, 2))(0x520423D9L, 0L), 0L), 0L, 0x520423D9L, 0L), // p_1466->g_776
        1UL, // p_1466->g_786
        0UL, // p_1466->g_823
        (VECTOR(uint16_t, 8))(0x873EL, (VECTOR(uint16_t, 4))(0x873EL, (VECTOR(uint16_t, 2))(0x873EL, 1UL), 1UL), 1UL, 0x873EL, 1UL), // p_1466->g_851
        (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 1UL), 1UL), 1UL, 9UL, 1UL), // p_1466->g_852
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-10L)), (-10L)), (-10L), (-6L), (-10L)), // p_1466->g_855
        (VECTOR(int8_t, 8))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0L), 0L), 0L, 0x5BL, 0L), // p_1466->g_857
        (void*)0, // p_1466->g_864
        (void*)0, // p_1466->g_873
        {{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}},{{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873},{&p_1466->g_873,&p_1466->g_873,&p_1466->g_873}}}, // p_1466->g_872
        0UL, // p_1466->g_884
        &p_1466->g_489, // p_1466->g_885
        (VECTOR(int16_t, 4))(0x60A6L, (VECTOR(int16_t, 2))(0x60A6L, 0L), 0L), // p_1466->g_888
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 7L), 7L), 7L, (-3L), 7L), // p_1466->g_890
        (void*)0, // p_1466->g_897
        (-10L), // p_1466->g_903
        &p_1466->g_903, // p_1466->g_902
        {0xB4L}, // p_1466->g_935
        (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, (-1L)), (-1L)), // p_1466->g_939
        (VECTOR(int8_t, 8))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x48L), 0x48L), 0x48L, 0x17L, 0x48L), // p_1466->g_940
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 6L), 6L), 6L, 0L, 6L, (VECTOR(int16_t, 2))(0L, 6L), (VECTOR(int16_t, 2))(0L, 6L), 0L, 6L, 0L, 6L), // p_1466->g_942
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_1466->g_966
        (VECTOR(int32_t, 2))(0x72FAED02L, 1L), // p_1466->g_968
        (VECTOR(int32_t, 2))(0x4E69C665L, 0L), // p_1466->g_969
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x525DAE67L), 0x525DAE67L), 0x525DAE67L, 0L, 0x525DAE67L), // p_1466->g_970
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 2UL), 2UL), 2UL, 65535UL, 2UL), // p_1466->g_972
        {0x45L}, // p_1466->g_981
        (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int64_t, 2))(2L, (-1L)), (VECTOR(int64_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L)), // p_1466->g_991
        (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0UL), 0UL), // p_1466->g_996
        (void*)0, // p_1466->g_1006
        (VECTOR(int32_t, 16))(0x01ACD7FDL, (VECTOR(int32_t, 4))(0x01ACD7FDL, (VECTOR(int32_t, 2))(0x01ACD7FDL, 0x54085905L), 0x54085905L), 0x54085905L, 0x01ACD7FDL, 0x54085905L, (VECTOR(int32_t, 2))(0x01ACD7FDL, 0x54085905L), (VECTOR(int32_t, 2))(0x01ACD7FDL, 0x54085905L), 0x01ACD7FDL, 0x54085905L, 0x01ACD7FDL, 0x54085905L), // p_1466->g_1011
        (VECTOR(uint32_t, 2))(4294967295UL, 0xFB7CC026L), // p_1466->g_1014
        (VECTOR(uint32_t, 4))(0xEB8A4877L, (VECTOR(uint32_t, 2))(0xEB8A4877L, 0x8D67BC02L), 0x8D67BC02L), // p_1466->g_1015
        (VECTOR(int32_t, 2))(0L, 0L), // p_1466->g_1110
        (VECTOR(int16_t, 2))((-5L), 0x3635L), // p_1466->g_1120
        {250UL}, // p_1466->g_1138
        (void*)0, // p_1466->g_1140
        {0xACL}, // p_1466->g_1363
        (-8L), // p_1466->g_1379
        0L, // p_1466->g_1391
        &p_1466->g_1379, // p_1466->g_1392
        0UL, // p_1466->g_1405
        &p_1466->g_1379, // p_1466->g_1417
        {0UL}, // p_1466->g_1428
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), // p_1466->g_1443
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2CE2E52FL), 0x2CE2E52FL), // p_1466->g_1452
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2B102A06L), 0x2B102A06L), 0x2B102A06L, 0UL, 0x2B102A06L), // p_1466->g_1453
        (void*)0, // p_1466->g_1463
        0, // p_1466->v_collective
        sequence_input[get_global_id(0)], // p_1466->global_0_offset
        sequence_input[get_global_id(1)], // p_1466->global_1_offset
        sequence_input[get_global_id(2)], // p_1466->global_2_offset
        sequence_input[get_local_id(0)], // p_1466->local_0_offset
        sequence_input[get_local_id(1)], // p_1466->local_1_offset
        sequence_input[get_local_id(2)], // p_1466->local_2_offset
        sequence_input[get_group_id(0)], // p_1466->group_0_offset
        sequence_input[get_group_id(1)], // p_1466->group_1_offset
        sequence_input[get_group_id(2)], // p_1466->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[0][get_linear_local_id()])), // p_1466->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1467 = c_1468;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1466);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1466->g_3, "p_1466->g_3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1466->g_9[i], "p_1466->g_9[i]", print_hash_value);

    }
    transparent_crc(p_1466->g_32, "p_1466->g_32", print_hash_value);
    transparent_crc(p_1466->g_411, "p_1466->g_411", print_hash_value);
    transparent_crc(p_1466->g_440.x, "p_1466->g_440.x", print_hash_value);
    transparent_crc(p_1466->g_440.y, "p_1466->g_440.y", print_hash_value);
    transparent_crc(p_1466->g_442.s0, "p_1466->g_442.s0", print_hash_value);
    transparent_crc(p_1466->g_442.s1, "p_1466->g_442.s1", print_hash_value);
    transparent_crc(p_1466->g_442.s2, "p_1466->g_442.s2", print_hash_value);
    transparent_crc(p_1466->g_442.s3, "p_1466->g_442.s3", print_hash_value);
    transparent_crc(p_1466->g_442.s4, "p_1466->g_442.s4", print_hash_value);
    transparent_crc(p_1466->g_442.s5, "p_1466->g_442.s5", print_hash_value);
    transparent_crc(p_1466->g_442.s6, "p_1466->g_442.s6", print_hash_value);
    transparent_crc(p_1466->g_442.s7, "p_1466->g_442.s7", print_hash_value);
    transparent_crc(p_1466->g_444.s0, "p_1466->g_444.s0", print_hash_value);
    transparent_crc(p_1466->g_444.s1, "p_1466->g_444.s1", print_hash_value);
    transparent_crc(p_1466->g_444.s2, "p_1466->g_444.s2", print_hash_value);
    transparent_crc(p_1466->g_444.s3, "p_1466->g_444.s3", print_hash_value);
    transparent_crc(p_1466->g_444.s4, "p_1466->g_444.s4", print_hash_value);
    transparent_crc(p_1466->g_444.s5, "p_1466->g_444.s5", print_hash_value);
    transparent_crc(p_1466->g_444.s6, "p_1466->g_444.s6", print_hash_value);
    transparent_crc(p_1466->g_444.s7, "p_1466->g_444.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1466->g_464[i].f0, "p_1466->g_464[i].f0", print_hash_value);

    }
    transparent_crc(p_1466->g_475.x, "p_1466->g_475.x", print_hash_value);
    transparent_crc(p_1466->g_475.y, "p_1466->g_475.y", print_hash_value);
    transparent_crc(p_1466->g_475.z, "p_1466->g_475.z", print_hash_value);
    transparent_crc(p_1466->g_475.w, "p_1466->g_475.w", print_hash_value);
    transparent_crc(p_1466->g_487, "p_1466->g_487", print_hash_value);
    transparent_crc(p_1466->g_489, "p_1466->g_489", print_hash_value);
    transparent_crc(p_1466->g_511, "p_1466->g_511", print_hash_value);
    transparent_crc(p_1466->g_521.s0, "p_1466->g_521.s0", print_hash_value);
    transparent_crc(p_1466->g_521.s1, "p_1466->g_521.s1", print_hash_value);
    transparent_crc(p_1466->g_521.s2, "p_1466->g_521.s2", print_hash_value);
    transparent_crc(p_1466->g_521.s3, "p_1466->g_521.s3", print_hash_value);
    transparent_crc(p_1466->g_521.s4, "p_1466->g_521.s4", print_hash_value);
    transparent_crc(p_1466->g_521.s5, "p_1466->g_521.s5", print_hash_value);
    transparent_crc(p_1466->g_521.s6, "p_1466->g_521.s6", print_hash_value);
    transparent_crc(p_1466->g_521.s7, "p_1466->g_521.s7", print_hash_value);
    transparent_crc(p_1466->g_524.x, "p_1466->g_524.x", print_hash_value);
    transparent_crc(p_1466->g_524.y, "p_1466->g_524.y", print_hash_value);
    transparent_crc(p_1466->g_524.z, "p_1466->g_524.z", print_hash_value);
    transparent_crc(p_1466->g_524.w, "p_1466->g_524.w", print_hash_value);
    transparent_crc(p_1466->g_526.x, "p_1466->g_526.x", print_hash_value);
    transparent_crc(p_1466->g_526.y, "p_1466->g_526.y", print_hash_value);
    transparent_crc(p_1466->g_528.x, "p_1466->g_528.x", print_hash_value);
    transparent_crc(p_1466->g_528.y, "p_1466->g_528.y", print_hash_value);
    transparent_crc(p_1466->g_528.z, "p_1466->g_528.z", print_hash_value);
    transparent_crc(p_1466->g_528.w, "p_1466->g_528.w", print_hash_value);
    transparent_crc(p_1466->g_530.x, "p_1466->g_530.x", print_hash_value);
    transparent_crc(p_1466->g_530.y, "p_1466->g_530.y", print_hash_value);
    transparent_crc(p_1466->g_530.z, "p_1466->g_530.z", print_hash_value);
    transparent_crc(p_1466->g_530.w, "p_1466->g_530.w", print_hash_value);
    transparent_crc(p_1466->g_534.f0, "p_1466->g_534.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1466->g_537[i][j].f0, "p_1466->g_537[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1466->g_547, "p_1466->g_547", print_hash_value);
    transparent_crc(p_1466->g_728.s0, "p_1466->g_728.s0", print_hash_value);
    transparent_crc(p_1466->g_728.s1, "p_1466->g_728.s1", print_hash_value);
    transparent_crc(p_1466->g_728.s2, "p_1466->g_728.s2", print_hash_value);
    transparent_crc(p_1466->g_728.s3, "p_1466->g_728.s3", print_hash_value);
    transparent_crc(p_1466->g_728.s4, "p_1466->g_728.s4", print_hash_value);
    transparent_crc(p_1466->g_728.s5, "p_1466->g_728.s5", print_hash_value);
    transparent_crc(p_1466->g_728.s6, "p_1466->g_728.s6", print_hash_value);
    transparent_crc(p_1466->g_728.s7, "p_1466->g_728.s7", print_hash_value);
    transparent_crc(p_1466->g_728.s8, "p_1466->g_728.s8", print_hash_value);
    transparent_crc(p_1466->g_728.s9, "p_1466->g_728.s9", print_hash_value);
    transparent_crc(p_1466->g_728.sa, "p_1466->g_728.sa", print_hash_value);
    transparent_crc(p_1466->g_728.sb, "p_1466->g_728.sb", print_hash_value);
    transparent_crc(p_1466->g_728.sc, "p_1466->g_728.sc", print_hash_value);
    transparent_crc(p_1466->g_728.sd, "p_1466->g_728.sd", print_hash_value);
    transparent_crc(p_1466->g_728.se, "p_1466->g_728.se", print_hash_value);
    transparent_crc(p_1466->g_728.sf, "p_1466->g_728.sf", print_hash_value);
    transparent_crc(p_1466->g_735.s0, "p_1466->g_735.s0", print_hash_value);
    transparent_crc(p_1466->g_735.s1, "p_1466->g_735.s1", print_hash_value);
    transparent_crc(p_1466->g_735.s2, "p_1466->g_735.s2", print_hash_value);
    transparent_crc(p_1466->g_735.s3, "p_1466->g_735.s3", print_hash_value);
    transparent_crc(p_1466->g_735.s4, "p_1466->g_735.s4", print_hash_value);
    transparent_crc(p_1466->g_735.s5, "p_1466->g_735.s5", print_hash_value);
    transparent_crc(p_1466->g_735.s6, "p_1466->g_735.s6", print_hash_value);
    transparent_crc(p_1466->g_735.s7, "p_1466->g_735.s7", print_hash_value);
    transparent_crc(p_1466->g_735.s8, "p_1466->g_735.s8", print_hash_value);
    transparent_crc(p_1466->g_735.s9, "p_1466->g_735.s9", print_hash_value);
    transparent_crc(p_1466->g_735.sa, "p_1466->g_735.sa", print_hash_value);
    transparent_crc(p_1466->g_735.sb, "p_1466->g_735.sb", print_hash_value);
    transparent_crc(p_1466->g_735.sc, "p_1466->g_735.sc", print_hash_value);
    transparent_crc(p_1466->g_735.sd, "p_1466->g_735.sd", print_hash_value);
    transparent_crc(p_1466->g_735.se, "p_1466->g_735.se", print_hash_value);
    transparent_crc(p_1466->g_735.sf, "p_1466->g_735.sf", print_hash_value);
    transparent_crc(p_1466->g_745, "p_1466->g_745", print_hash_value);
    transparent_crc(p_1466->g_776.s0, "p_1466->g_776.s0", print_hash_value);
    transparent_crc(p_1466->g_776.s1, "p_1466->g_776.s1", print_hash_value);
    transparent_crc(p_1466->g_776.s2, "p_1466->g_776.s2", print_hash_value);
    transparent_crc(p_1466->g_776.s3, "p_1466->g_776.s3", print_hash_value);
    transparent_crc(p_1466->g_776.s4, "p_1466->g_776.s4", print_hash_value);
    transparent_crc(p_1466->g_776.s5, "p_1466->g_776.s5", print_hash_value);
    transparent_crc(p_1466->g_776.s6, "p_1466->g_776.s6", print_hash_value);
    transparent_crc(p_1466->g_776.s7, "p_1466->g_776.s7", print_hash_value);
    transparent_crc(p_1466->g_786, "p_1466->g_786", print_hash_value);
    transparent_crc(p_1466->g_823, "p_1466->g_823", print_hash_value);
    transparent_crc(p_1466->g_851.s0, "p_1466->g_851.s0", print_hash_value);
    transparent_crc(p_1466->g_851.s1, "p_1466->g_851.s1", print_hash_value);
    transparent_crc(p_1466->g_851.s2, "p_1466->g_851.s2", print_hash_value);
    transparent_crc(p_1466->g_851.s3, "p_1466->g_851.s3", print_hash_value);
    transparent_crc(p_1466->g_851.s4, "p_1466->g_851.s4", print_hash_value);
    transparent_crc(p_1466->g_851.s5, "p_1466->g_851.s5", print_hash_value);
    transparent_crc(p_1466->g_851.s6, "p_1466->g_851.s6", print_hash_value);
    transparent_crc(p_1466->g_851.s7, "p_1466->g_851.s7", print_hash_value);
    transparent_crc(p_1466->g_852.s0, "p_1466->g_852.s0", print_hash_value);
    transparent_crc(p_1466->g_852.s1, "p_1466->g_852.s1", print_hash_value);
    transparent_crc(p_1466->g_852.s2, "p_1466->g_852.s2", print_hash_value);
    transparent_crc(p_1466->g_852.s3, "p_1466->g_852.s3", print_hash_value);
    transparent_crc(p_1466->g_852.s4, "p_1466->g_852.s4", print_hash_value);
    transparent_crc(p_1466->g_852.s5, "p_1466->g_852.s5", print_hash_value);
    transparent_crc(p_1466->g_852.s6, "p_1466->g_852.s6", print_hash_value);
    transparent_crc(p_1466->g_852.s7, "p_1466->g_852.s7", print_hash_value);
    transparent_crc(p_1466->g_855.s0, "p_1466->g_855.s0", print_hash_value);
    transparent_crc(p_1466->g_855.s1, "p_1466->g_855.s1", print_hash_value);
    transparent_crc(p_1466->g_855.s2, "p_1466->g_855.s2", print_hash_value);
    transparent_crc(p_1466->g_855.s3, "p_1466->g_855.s3", print_hash_value);
    transparent_crc(p_1466->g_855.s4, "p_1466->g_855.s4", print_hash_value);
    transparent_crc(p_1466->g_855.s5, "p_1466->g_855.s5", print_hash_value);
    transparent_crc(p_1466->g_855.s6, "p_1466->g_855.s6", print_hash_value);
    transparent_crc(p_1466->g_855.s7, "p_1466->g_855.s7", print_hash_value);
    transparent_crc(p_1466->g_857.s0, "p_1466->g_857.s0", print_hash_value);
    transparent_crc(p_1466->g_857.s1, "p_1466->g_857.s1", print_hash_value);
    transparent_crc(p_1466->g_857.s2, "p_1466->g_857.s2", print_hash_value);
    transparent_crc(p_1466->g_857.s3, "p_1466->g_857.s3", print_hash_value);
    transparent_crc(p_1466->g_857.s4, "p_1466->g_857.s4", print_hash_value);
    transparent_crc(p_1466->g_857.s5, "p_1466->g_857.s5", print_hash_value);
    transparent_crc(p_1466->g_857.s6, "p_1466->g_857.s6", print_hash_value);
    transparent_crc(p_1466->g_857.s7, "p_1466->g_857.s7", print_hash_value);
    transparent_crc(p_1466->g_884, "p_1466->g_884", print_hash_value);
    transparent_crc(p_1466->g_888.x, "p_1466->g_888.x", print_hash_value);
    transparent_crc(p_1466->g_888.y, "p_1466->g_888.y", print_hash_value);
    transparent_crc(p_1466->g_888.z, "p_1466->g_888.z", print_hash_value);
    transparent_crc(p_1466->g_888.w, "p_1466->g_888.w", print_hash_value);
    transparent_crc(p_1466->g_890.s0, "p_1466->g_890.s0", print_hash_value);
    transparent_crc(p_1466->g_890.s1, "p_1466->g_890.s1", print_hash_value);
    transparent_crc(p_1466->g_890.s2, "p_1466->g_890.s2", print_hash_value);
    transparent_crc(p_1466->g_890.s3, "p_1466->g_890.s3", print_hash_value);
    transparent_crc(p_1466->g_890.s4, "p_1466->g_890.s4", print_hash_value);
    transparent_crc(p_1466->g_890.s5, "p_1466->g_890.s5", print_hash_value);
    transparent_crc(p_1466->g_890.s6, "p_1466->g_890.s6", print_hash_value);
    transparent_crc(p_1466->g_890.s7, "p_1466->g_890.s7", print_hash_value);
    transparent_crc(p_1466->g_903, "p_1466->g_903", print_hash_value);
    transparent_crc(p_1466->g_935.f0, "p_1466->g_935.f0", print_hash_value);
    transparent_crc(p_1466->g_939.x, "p_1466->g_939.x", print_hash_value);
    transparent_crc(p_1466->g_939.y, "p_1466->g_939.y", print_hash_value);
    transparent_crc(p_1466->g_939.z, "p_1466->g_939.z", print_hash_value);
    transparent_crc(p_1466->g_939.w, "p_1466->g_939.w", print_hash_value);
    transparent_crc(p_1466->g_940.s0, "p_1466->g_940.s0", print_hash_value);
    transparent_crc(p_1466->g_940.s1, "p_1466->g_940.s1", print_hash_value);
    transparent_crc(p_1466->g_940.s2, "p_1466->g_940.s2", print_hash_value);
    transparent_crc(p_1466->g_940.s3, "p_1466->g_940.s3", print_hash_value);
    transparent_crc(p_1466->g_940.s4, "p_1466->g_940.s4", print_hash_value);
    transparent_crc(p_1466->g_940.s5, "p_1466->g_940.s5", print_hash_value);
    transparent_crc(p_1466->g_940.s6, "p_1466->g_940.s6", print_hash_value);
    transparent_crc(p_1466->g_940.s7, "p_1466->g_940.s7", print_hash_value);
    transparent_crc(p_1466->g_942.s0, "p_1466->g_942.s0", print_hash_value);
    transparent_crc(p_1466->g_942.s1, "p_1466->g_942.s1", print_hash_value);
    transparent_crc(p_1466->g_942.s2, "p_1466->g_942.s2", print_hash_value);
    transparent_crc(p_1466->g_942.s3, "p_1466->g_942.s3", print_hash_value);
    transparent_crc(p_1466->g_942.s4, "p_1466->g_942.s4", print_hash_value);
    transparent_crc(p_1466->g_942.s5, "p_1466->g_942.s5", print_hash_value);
    transparent_crc(p_1466->g_942.s6, "p_1466->g_942.s6", print_hash_value);
    transparent_crc(p_1466->g_942.s7, "p_1466->g_942.s7", print_hash_value);
    transparent_crc(p_1466->g_942.s8, "p_1466->g_942.s8", print_hash_value);
    transparent_crc(p_1466->g_942.s9, "p_1466->g_942.s9", print_hash_value);
    transparent_crc(p_1466->g_942.sa, "p_1466->g_942.sa", print_hash_value);
    transparent_crc(p_1466->g_942.sb, "p_1466->g_942.sb", print_hash_value);
    transparent_crc(p_1466->g_942.sc, "p_1466->g_942.sc", print_hash_value);
    transparent_crc(p_1466->g_942.sd, "p_1466->g_942.sd", print_hash_value);
    transparent_crc(p_1466->g_942.se, "p_1466->g_942.se", print_hash_value);
    transparent_crc(p_1466->g_942.sf, "p_1466->g_942.sf", print_hash_value);
    transparent_crc(p_1466->g_966.s0, "p_1466->g_966.s0", print_hash_value);
    transparent_crc(p_1466->g_966.s1, "p_1466->g_966.s1", print_hash_value);
    transparent_crc(p_1466->g_966.s2, "p_1466->g_966.s2", print_hash_value);
    transparent_crc(p_1466->g_966.s3, "p_1466->g_966.s3", print_hash_value);
    transparent_crc(p_1466->g_966.s4, "p_1466->g_966.s4", print_hash_value);
    transparent_crc(p_1466->g_966.s5, "p_1466->g_966.s5", print_hash_value);
    transparent_crc(p_1466->g_966.s6, "p_1466->g_966.s6", print_hash_value);
    transparent_crc(p_1466->g_966.s7, "p_1466->g_966.s7", print_hash_value);
    transparent_crc(p_1466->g_966.s8, "p_1466->g_966.s8", print_hash_value);
    transparent_crc(p_1466->g_966.s9, "p_1466->g_966.s9", print_hash_value);
    transparent_crc(p_1466->g_966.sa, "p_1466->g_966.sa", print_hash_value);
    transparent_crc(p_1466->g_966.sb, "p_1466->g_966.sb", print_hash_value);
    transparent_crc(p_1466->g_966.sc, "p_1466->g_966.sc", print_hash_value);
    transparent_crc(p_1466->g_966.sd, "p_1466->g_966.sd", print_hash_value);
    transparent_crc(p_1466->g_966.se, "p_1466->g_966.se", print_hash_value);
    transparent_crc(p_1466->g_966.sf, "p_1466->g_966.sf", print_hash_value);
    transparent_crc(p_1466->g_968.x, "p_1466->g_968.x", print_hash_value);
    transparent_crc(p_1466->g_968.y, "p_1466->g_968.y", print_hash_value);
    transparent_crc(p_1466->g_969.x, "p_1466->g_969.x", print_hash_value);
    transparent_crc(p_1466->g_969.y, "p_1466->g_969.y", print_hash_value);
    transparent_crc(p_1466->g_970.s0, "p_1466->g_970.s0", print_hash_value);
    transparent_crc(p_1466->g_970.s1, "p_1466->g_970.s1", print_hash_value);
    transparent_crc(p_1466->g_970.s2, "p_1466->g_970.s2", print_hash_value);
    transparent_crc(p_1466->g_970.s3, "p_1466->g_970.s3", print_hash_value);
    transparent_crc(p_1466->g_970.s4, "p_1466->g_970.s4", print_hash_value);
    transparent_crc(p_1466->g_970.s5, "p_1466->g_970.s5", print_hash_value);
    transparent_crc(p_1466->g_970.s6, "p_1466->g_970.s6", print_hash_value);
    transparent_crc(p_1466->g_970.s7, "p_1466->g_970.s7", print_hash_value);
    transparent_crc(p_1466->g_972.s0, "p_1466->g_972.s0", print_hash_value);
    transparent_crc(p_1466->g_972.s1, "p_1466->g_972.s1", print_hash_value);
    transparent_crc(p_1466->g_972.s2, "p_1466->g_972.s2", print_hash_value);
    transparent_crc(p_1466->g_972.s3, "p_1466->g_972.s3", print_hash_value);
    transparent_crc(p_1466->g_972.s4, "p_1466->g_972.s4", print_hash_value);
    transparent_crc(p_1466->g_972.s5, "p_1466->g_972.s5", print_hash_value);
    transparent_crc(p_1466->g_972.s6, "p_1466->g_972.s6", print_hash_value);
    transparent_crc(p_1466->g_972.s7, "p_1466->g_972.s7", print_hash_value);
    transparent_crc(p_1466->g_981.f0, "p_1466->g_981.f0", print_hash_value);
    transparent_crc(p_1466->g_991.s0, "p_1466->g_991.s0", print_hash_value);
    transparent_crc(p_1466->g_991.s1, "p_1466->g_991.s1", print_hash_value);
    transparent_crc(p_1466->g_991.s2, "p_1466->g_991.s2", print_hash_value);
    transparent_crc(p_1466->g_991.s3, "p_1466->g_991.s3", print_hash_value);
    transparent_crc(p_1466->g_991.s4, "p_1466->g_991.s4", print_hash_value);
    transparent_crc(p_1466->g_991.s5, "p_1466->g_991.s5", print_hash_value);
    transparent_crc(p_1466->g_991.s6, "p_1466->g_991.s6", print_hash_value);
    transparent_crc(p_1466->g_991.s7, "p_1466->g_991.s7", print_hash_value);
    transparent_crc(p_1466->g_991.s8, "p_1466->g_991.s8", print_hash_value);
    transparent_crc(p_1466->g_991.s9, "p_1466->g_991.s9", print_hash_value);
    transparent_crc(p_1466->g_991.sa, "p_1466->g_991.sa", print_hash_value);
    transparent_crc(p_1466->g_991.sb, "p_1466->g_991.sb", print_hash_value);
    transparent_crc(p_1466->g_991.sc, "p_1466->g_991.sc", print_hash_value);
    transparent_crc(p_1466->g_991.sd, "p_1466->g_991.sd", print_hash_value);
    transparent_crc(p_1466->g_991.se, "p_1466->g_991.se", print_hash_value);
    transparent_crc(p_1466->g_991.sf, "p_1466->g_991.sf", print_hash_value);
    transparent_crc(p_1466->g_996.x, "p_1466->g_996.x", print_hash_value);
    transparent_crc(p_1466->g_996.y, "p_1466->g_996.y", print_hash_value);
    transparent_crc(p_1466->g_996.z, "p_1466->g_996.z", print_hash_value);
    transparent_crc(p_1466->g_996.w, "p_1466->g_996.w", print_hash_value);
    transparent_crc(p_1466->g_1011.s0, "p_1466->g_1011.s0", print_hash_value);
    transparent_crc(p_1466->g_1011.s1, "p_1466->g_1011.s1", print_hash_value);
    transparent_crc(p_1466->g_1011.s2, "p_1466->g_1011.s2", print_hash_value);
    transparent_crc(p_1466->g_1011.s3, "p_1466->g_1011.s3", print_hash_value);
    transparent_crc(p_1466->g_1011.s4, "p_1466->g_1011.s4", print_hash_value);
    transparent_crc(p_1466->g_1011.s5, "p_1466->g_1011.s5", print_hash_value);
    transparent_crc(p_1466->g_1011.s6, "p_1466->g_1011.s6", print_hash_value);
    transparent_crc(p_1466->g_1011.s7, "p_1466->g_1011.s7", print_hash_value);
    transparent_crc(p_1466->g_1011.s8, "p_1466->g_1011.s8", print_hash_value);
    transparent_crc(p_1466->g_1011.s9, "p_1466->g_1011.s9", print_hash_value);
    transparent_crc(p_1466->g_1011.sa, "p_1466->g_1011.sa", print_hash_value);
    transparent_crc(p_1466->g_1011.sb, "p_1466->g_1011.sb", print_hash_value);
    transparent_crc(p_1466->g_1011.sc, "p_1466->g_1011.sc", print_hash_value);
    transparent_crc(p_1466->g_1011.sd, "p_1466->g_1011.sd", print_hash_value);
    transparent_crc(p_1466->g_1011.se, "p_1466->g_1011.se", print_hash_value);
    transparent_crc(p_1466->g_1011.sf, "p_1466->g_1011.sf", print_hash_value);
    transparent_crc(p_1466->g_1014.x, "p_1466->g_1014.x", print_hash_value);
    transparent_crc(p_1466->g_1014.y, "p_1466->g_1014.y", print_hash_value);
    transparent_crc(p_1466->g_1015.x, "p_1466->g_1015.x", print_hash_value);
    transparent_crc(p_1466->g_1015.y, "p_1466->g_1015.y", print_hash_value);
    transparent_crc(p_1466->g_1015.z, "p_1466->g_1015.z", print_hash_value);
    transparent_crc(p_1466->g_1015.w, "p_1466->g_1015.w", print_hash_value);
    transparent_crc(p_1466->g_1110.x, "p_1466->g_1110.x", print_hash_value);
    transparent_crc(p_1466->g_1110.y, "p_1466->g_1110.y", print_hash_value);
    transparent_crc(p_1466->g_1120.x, "p_1466->g_1120.x", print_hash_value);
    transparent_crc(p_1466->g_1120.y, "p_1466->g_1120.y", print_hash_value);
    transparent_crc(p_1466->g_1138.f0, "p_1466->g_1138.f0", print_hash_value);
    transparent_crc(p_1466->g_1363.f0, "p_1466->g_1363.f0", print_hash_value);
    transparent_crc(p_1466->g_1379, "p_1466->g_1379", print_hash_value);
    transparent_crc(p_1466->g_1391, "p_1466->g_1391", print_hash_value);
    transparent_crc(p_1466->g_1405, "p_1466->g_1405", print_hash_value);
    transparent_crc(p_1466->g_1428.f0, "p_1466->g_1428.f0", print_hash_value);
    transparent_crc(p_1466->g_1443.x, "p_1466->g_1443.x", print_hash_value);
    transparent_crc(p_1466->g_1443.y, "p_1466->g_1443.y", print_hash_value);
    transparent_crc(p_1466->g_1443.z, "p_1466->g_1443.z", print_hash_value);
    transparent_crc(p_1466->g_1443.w, "p_1466->g_1443.w", print_hash_value);
    transparent_crc(p_1466->g_1452.x, "p_1466->g_1452.x", print_hash_value);
    transparent_crc(p_1466->g_1452.y, "p_1466->g_1452.y", print_hash_value);
    transparent_crc(p_1466->g_1452.z, "p_1466->g_1452.z", print_hash_value);
    transparent_crc(p_1466->g_1452.w, "p_1466->g_1452.w", print_hash_value);
    transparent_crc(p_1466->g_1453.s0, "p_1466->g_1453.s0", print_hash_value);
    transparent_crc(p_1466->g_1453.s1, "p_1466->g_1453.s1", print_hash_value);
    transparent_crc(p_1466->g_1453.s2, "p_1466->g_1453.s2", print_hash_value);
    transparent_crc(p_1466->g_1453.s3, "p_1466->g_1453.s3", print_hash_value);
    transparent_crc(p_1466->g_1453.s4, "p_1466->g_1453.s4", print_hash_value);
    transparent_crc(p_1466->g_1453.s5, "p_1466->g_1453.s5", print_hash_value);
    transparent_crc(p_1466->g_1453.s6, "p_1466->g_1453.s6", print_hash_value);
    transparent_crc(p_1466->g_1453.s7, "p_1466->g_1453.s7", print_hash_value);
    transparent_crc(p_1466->v_collective, "p_1466->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 33; i++)
            transparent_crc(p_1466->g_special_values[i + 33 * get_linear_group_id()], "p_1466->g_special_values[i + 33 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 33; i++)
            transparent_crc(p_1466->l_special_values[i], "p_1466->l_special_values[i]", print_hash_value);
    transparent_crc(p_1466->l_comm_values[get_linear_local_id()], "p_1466->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1466->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()], "p_1466->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
