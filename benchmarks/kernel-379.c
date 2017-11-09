// --atomics 54 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 57,7,25 -l 19,1,5
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

__constant uint32_t permutations[10][95] = {
{43,41,84,1,63,36,23,33,25,18,46,11,87,12,93,2,67,47,20,48,9,14,55,0,50,60,73,77,61,57,19,28,89,71,7,92,15,49,76,79,85,66,35,82,27,74,31,21,37,83,75,94,8,45,34,38,30,78,32,54,53,39,56,81,4,58,69,3,51,88,62,22,13,10,29,44,52,86,26,90,6,42,16,24,17,40,80,91,72,64,59,5,68,70,65}, // permutation 0
{70,35,88,71,92,34,36,60,11,66,74,78,84,61,16,19,8,65,89,5,54,45,15,42,31,57,75,44,77,52,46,94,10,68,23,90,30,63,3,38,72,55,7,82,43,83,76,1,20,87,32,80,62,59,18,4,93,41,86,9,69,12,79,91,25,24,39,51,53,56,47,28,14,49,33,58,26,37,0,22,67,27,21,73,13,81,40,17,50,85,2,29,48,64,6}, // permutation 1
{93,27,38,34,86,5,1,84,63,15,49,19,10,11,60,4,79,22,43,36,59,72,45,57,54,37,66,87,35,92,82,20,3,46,6,13,12,41,17,67,8,56,47,77,83,73,76,71,74,14,70,29,18,55,33,16,32,85,65,48,39,62,31,21,58,80,88,28,24,64,25,0,78,42,23,51,94,9,50,81,26,61,40,90,53,52,89,91,44,7,30,2,68,69,75}, // permutation 2
{19,89,40,39,22,82,36,43,7,74,13,33,94,91,25,58,28,2,10,57,63,20,75,68,0,86,72,60,46,78,70,64,47,67,15,32,88,56,52,49,90,50,45,30,61,16,42,21,81,65,84,54,26,37,1,23,69,8,38,83,18,53,4,29,35,34,59,93,14,80,77,44,12,9,79,55,76,11,51,24,73,87,85,31,71,17,3,62,5,48,41,66,92,27,6}, // permutation 3
{77,88,17,94,61,63,40,78,83,72,31,45,14,7,0,44,92,3,29,91,33,48,15,1,41,87,19,57,26,49,70,5,27,79,35,81,62,74,4,21,54,75,58,90,46,30,36,71,9,53,65,84,18,55,6,52,50,23,64,80,73,69,60,93,25,89,37,76,24,66,13,22,68,47,2,86,56,32,16,12,28,34,85,82,10,42,8,43,39,11,59,38,67,20,51}, // permutation 4
{7,5,89,34,2,41,11,27,19,54,74,92,3,42,44,26,62,73,70,53,55,30,36,87,64,13,43,14,18,67,40,85,32,8,45,10,25,6,47,4,60,88,51,16,31,1,23,69,79,80,38,22,81,68,12,66,49,0,48,50,72,82,57,59,78,86,71,83,94,91,39,21,35,84,29,76,33,24,90,61,15,52,63,56,93,37,58,77,28,75,9,46,17,65,20}, // permutation 5
{16,59,18,32,23,4,64,93,28,0,66,65,3,31,63,44,12,38,57,27,5,62,80,43,91,26,61,42,11,35,1,73,51,70,87,79,58,7,24,90,52,71,15,13,53,92,68,39,81,21,2,94,34,10,25,74,22,83,30,46,29,78,47,77,75,8,67,9,41,40,54,55,88,36,84,56,17,89,86,48,69,49,85,76,33,82,6,50,45,14,37,60,20,19,72}, // permutation 6
{29,33,49,22,6,3,39,67,31,11,81,69,53,23,20,21,93,26,68,34,85,8,52,65,40,64,73,72,16,41,48,82,46,12,76,55,25,32,43,91,79,0,61,44,35,56,37,84,17,19,86,80,30,59,66,15,36,18,70,10,63,57,2,1,94,9,28,89,13,42,38,78,88,60,92,14,77,71,75,58,50,27,24,87,74,51,54,90,83,4,47,62,45,7,5}, // permutation 7
{63,49,83,52,16,42,6,34,57,86,40,76,28,37,5,25,21,46,15,4,74,22,68,2,90,43,39,87,11,84,92,0,45,60,91,59,65,18,23,62,56,48,44,47,19,94,1,36,80,13,55,61,78,82,3,17,9,29,8,50,32,88,7,70,58,30,72,24,93,66,79,27,31,77,67,71,26,89,85,53,81,41,33,20,38,12,35,69,64,14,73,51,54,75,10}, // permutation 8
{65,23,9,81,57,46,70,5,20,4,25,92,45,77,61,68,3,73,64,59,47,71,19,60,67,55,56,44,24,16,15,1,0,87,94,37,43,40,88,29,82,8,26,39,48,27,36,13,14,50,72,11,75,42,62,79,32,22,51,38,85,63,74,2,91,93,86,69,52,33,28,31,58,78,53,54,7,90,12,49,66,30,34,6,89,80,10,21,17,83,41,76,35,84,18} // permutation 9
};

// Seed: 1657613780

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_4;
    volatile uint16_t g_5;
    volatile VECTOR(int32_t, 2) g_8;
    int32_t *g_25;
    uint64_t g_51[7][6];
    int32_t g_64;
    VECTOR(int64_t, 16) g_86;
    volatile VECTOR(int64_t, 16) g_97;
    int32_t g_109;
    uint32_t g_132;
    int64_t *g_478;
    uint16_t g_479[5];
    VECTOR(int8_t, 4) g_484;
    VECTOR(uint64_t, 2) g_526;
    VECTOR(int64_t, 16) g_527;
    volatile VECTOR(uint8_t, 2) g_549;
    VECTOR(uint8_t, 4) g_551;
    VECTOR(uint8_t, 16) g_552;
    VECTOR(uint8_t, 16) g_554;
    VECTOR(uint8_t, 4) g_555;
    uint8_t g_564;
    int32_t g_567;
    int32_t *g_566;
    uint64_t g_597;
    volatile VECTOR(int64_t, 8) g_601;
    uint64_t *g_613;
    uint64_t *g_617;
    uint64_t ** volatile g_616;
    int16_t g_637;
    volatile VECTOR(uint32_t, 8) g_650;
    volatile VECTOR(int32_t, 16) g_667;
    VECTOR(int32_t, 8) g_670;
    VECTOR(uint64_t, 2) g_692;
    int64_t g_714;
    volatile VECTOR(uint8_t, 2) g_732;
    uint16_t g_739[1];
    uint8_t g_740;
    int32_t g_742;
    int16_t g_771;
    uint32_t g_804;
    int64_t **g_811;
    VECTOR(uint32_t, 2) g_854;
    uint32_t g_909;
    VECTOR(int64_t, 4) g_929;
    uint8_t g_948;
    int32_t ** volatile g_986;
    VECTOR(uint16_t, 4) g_992;
    VECTOR(uint64_t, 2) g_999;
    VECTOR(int32_t, 8) g_1000;
    volatile uint32_t g_1011;
    VECTOR(uint16_t, 2) g_1023;
    VECTOR(int16_t, 16) g_1028;
    VECTOR(int32_t, 2) g_1039;
    int8_t *g_1063[7];
    int8_t ** volatile g_1062[4];
    uint64_t **g_1077;
    volatile VECTOR(int32_t, 8) g_1085;
    VECTOR(uint8_t, 8) g_1090;
    volatile VECTOR(int16_t, 8) g_1122;
    int32_t ** volatile g_1123;
    uint16_t *g_1148;
    uint16_t ** volatile g_1147;
    VECTOR(int16_t, 8) g_1151;
    volatile VECTOR(uint64_t, 2) g_1178;
    VECTOR(uint16_t, 4) g_1216;
    uint32_t *g_1222;
    VECTOR(int16_t, 4) g_1228;
    volatile VECTOR(int16_t, 8) g_1229;
    volatile uint64_t *g_1254;
    volatile uint64_t **g_1253;
    volatile uint64_t ***g_1252;
    int32_t *g_1258;
    uint32_t g_1302;
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
uint32_t  func_1(struct S0 * p_1304);
int16_t  func_11(uint32_t  p_12, int32_t * p_13, int32_t * p_14, uint64_t  p_15, struct S0 * p_1304);
int32_t * func_16(int32_t * p_17, uint32_t  p_18, int32_t  p_19, struct S0 * p_1304);
int32_t * func_20(int32_t * p_21, uint32_t  p_22, uint32_t  p_23, int32_t * p_24, struct S0 * p_1304);
int64_t  func_26(int32_t * p_27, struct S0 * p_1304);
int8_t  func_30(int32_t * p_31, uint32_t  p_32, int32_t * p_33, int64_t  p_34, int32_t * p_35, struct S0 * p_1304);
int32_t * func_36(int32_t  p_37, uint32_t  p_38, int64_t  p_39, struct S0 * p_1304);
int16_t  func_41(int32_t * p_42, uint32_t  p_43, int32_t  p_44, int32_t * p_45, struct S0 * p_1304);
int32_t * func_46(uint32_t  p_47, uint8_t  p_48, struct S0 * p_1304);
int32_t * func_57(int8_t  p_58, int32_t * p_59, uint64_t * p_60, struct S0 * p_1304);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1304->g_5 p_1304->g_8 p_1304->l_comm_values p_1304->g_25 p_1304->g_4 p_1304->g_51 p_1304->g_64 p_1304->g_97 p_1304->g_478 p_1304->g_479 p_1304->g_564 p_1304->g_526 p_1304->g_552 p_1304->g_601 p_1304->g_554 p_1304->g_567 p_1304->g_566 p_1304->g_613 p_1304->g_597 p_1304->g_637 p_1304->g_484 p_1304->g_109 p_1304->g_132 p_1304->g_739 p_1304->g_551 p_1304->g_670 p_1304->g_comm_values p_1304->g_692 p_1304->g_804 p_1304->g_650 p_1304->g_909 p_1304->g_854 p_1304->g_948 p_1304->g_527 p_1304->g_986 p_1304->g_992 p_1304->g_999 p_1304->g_1000 p_1304->g_714 p_1304->g_1011 p_1304->g_86 p_1304->g_1023 p_1304->g_1028 p_1304->g_929 p_1304->g_555 p_1304->g_1039 p_1304->g_1062 p_1304->g_742 p_1304->g_1085 p_1304->g_1090 p_1304->g_1122 p_1304->g_1147 p_1304->g_740 p_1304->g_667 p_1304->g_1148 p_1304->g_1252 p_1304->g_1253 p_1304->g_1258 p_1304->g_1229 p_1304->g_1302
 * writes: p_1304->g_4 p_1304->g_5 p_1304->g_51 p_1304->g_comm_values p_1304->g_64 p_1304->g_132 p_1304->g_479 p_1304->g_484 p_1304->g_8 p_1304->g_564 p_1304->g_566 p_1304->g_526 p_1304->g_597 p_1304->g_554 p_1304->g_567 p_1304->g_637 p_1304->g_739 p_1304->g_740 p_1304->g_742 p_1304->g_86 p_1304->g_552 p_1304->g_670 p_1304->g_804 p_1304->g_811 p_1304->g_771 p_1304->g_909 p_1304->g_948 p_1304->g_1000 p_1304->g_1011 p_1304->g_25 p_1304->g_1077 p_1304->g_714 p_1304->g_1222 p_1304->g_854
 */
uint32_t  func_1(struct S0 * p_1304)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_2 = (VECTOR(int32_t, 16))(0x34074DD0L, (VECTOR(int32_t, 4))(0x34074DD0L, (VECTOR(int32_t, 2))(0x34074DD0L, 0x48C66F5AL), 0x48C66F5AL), 0x48C66F5AL, 0x34074DD0L, 0x48C66F5AL, (VECTOR(int32_t, 2))(0x34074DD0L, 0x48C66F5AL), (VECTOR(int32_t, 2))(0x34074DD0L, 0x48C66F5AL), 0x34074DD0L, 0x48C66F5AL, 0x34074DD0L, 0x48C66F5AL);
    int32_t *l_3[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_1017 = &p_1304->g_909;
    uint8_t l_1259 = 0x58L;
    int64_t l_1282[2][7][10] = {{{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)}},{{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)},{0x13F07AD7247ED040L,1L,(-3L),0x688A041E2718CF14L,0x4EDBF4F09FF89EE9L,0x688A041E2718CF14L,(-3L),1L,0x13F07AD7247ED040L,(-3L)}}};
    VECTOR(uint16_t, 2) l_1285 = (VECTOR(uint16_t, 2))(0x974EL, 3UL);
    int32_t l_1290 = (-10L);
    uint32_t *l_1296 = (void*)0;
    uint32_t *l_1297 = (void*)0;
    uint32_t *l_1298 = (void*)0;
    uint32_t *l_1299 = (void*)0;
    uint32_t *l_1300 = (void*)0;
    uint32_t *l_1301[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint8_t l_1303 = 4UL;
    int i, j, k;
    p_1304->g_4 = (!((VECTOR(int32_t, 4))(l_2.s9c4c)).x);
    p_1304->g_5--;
    l_1282[0][5][1] = (((VECTOR(int32_t, 2))(p_1304->g_8.xx)).hi , (safe_lshift_func_int16_t_s_s(func_11(p_1304->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1304->tid, 95))], func_16(func_20(p_1304->g_25, ((*l_1017) = (func_26(l_3[6], p_1304) || GROUP_DIVERGE(1, 1))), p_1304->g_527.sc, p_1304->g_25, p_1304), p_1304->g_929.x, ((0x3AL >= p_1304->g_555.z) ^ 4294967292UL), p_1304), p_1304->g_1258, l_1259, p_1304), 10)));
    p_1304->g_670.s6 &= ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1285.xx)).xyyx)).w, (((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-9L), (((p_1304->g_909 || p_1304->g_1122.s2) <= ((l_1290 & (*p_1304->g_566)) , ((safe_unary_minus_func_uint64_t_u((((*p_1304->g_613) = GROUP_DIVERGE(0, 1)) & (((*p_1304->g_1148) , (safe_lshift_func_uint16_t_u_s((((p_1304->g_854.x = ((safe_rshift_func_uint16_t_u_u((*p_1304->g_1148), 4)) | (((p_1304->g_51[4][4] , (p_1304->g_86.s0 ^ 0x080DL)) <= FAKE_DIVERGE(p_1304->global_0_offset, get_global_id(0), 10)) , 0L))) || 0x51ECA8AAL) && (*p_1304->g_566)), p_1304->g_1028.sc))) || 4294967288UL)))) & (*p_1304->g_566)))) , 2UL))), p_1304->g_1302)) == p_1304->g_526.x) | (*p_1304->g_1148)))) && l_1303);
    return p_1304->g_929.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_1229 p_1304->g_854 p_1304->g_109 p_1304->g_566 p_1304->g_132 p_1304->g_51 p_1304->g_999 p_1304->g_1011
 * writes: p_1304->g_132
 */
int16_t  func_11(uint32_t  p_12, int32_t * p_13, int32_t * p_14, uint64_t  p_15, struct S0 * p_1304)
{ /* block id: 595 */
    uint8_t l_1260[4];
    VECTOR(uint16_t, 16) l_1263 = (VECTOR(uint16_t, 16))(0xA213L, (VECTOR(uint16_t, 4))(0xA213L, (VECTOR(uint16_t, 2))(0xA213L, 65527UL), 65527UL), 65527UL, 0xA213L, 65527UL, (VECTOR(uint16_t, 2))(0xA213L, 65527UL), (VECTOR(uint16_t, 2))(0xA213L, 65527UL), 0xA213L, 65527UL, 0xA213L, 65527UL);
    VECTOR(uint32_t, 8) l_1264 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
    VECTOR(uint32_t, 4) l_1265 = (VECTOR(uint32_t, 4))(0xCB914419L, (VECTOR(uint32_t, 2))(0xCB914419L, 1UL), 1UL);
    VECTOR(uint32_t, 8) l_1266 = (VECTOR(uint32_t, 8))(0xCE37BF5CL, (VECTOR(uint32_t, 4))(0xCE37BF5CL, (VECTOR(uint32_t, 2))(0xCE37BF5CL, 6UL), 6UL), 6UL, 0xCE37BF5CL, 6UL);
    VECTOR(uint32_t, 16) l_1267 = (VECTOR(uint32_t, 16))(0xEE3C8B82L, (VECTOR(uint32_t, 4))(0xEE3C8B82L, (VECTOR(uint32_t, 2))(0xEE3C8B82L, 4294967295UL), 4294967295UL), 4294967295UL, 0xEE3C8B82L, 4294967295UL, (VECTOR(uint32_t, 2))(0xEE3C8B82L, 4294967295UL), (VECTOR(uint32_t, 2))(0xEE3C8B82L, 4294967295UL), 0xEE3C8B82L, 4294967295UL, 0xEE3C8B82L, 4294967295UL);
    uint32_t **l_1278[1];
    uint8_t l_1279 = 0x24L;
    int64_t *l_1280 = (void*)0;
    int32_t l_1281 = 0x14BB8B8CL;
    int i;
    for (i = 0; i < 4; i++)
        l_1260[i] = 0x9FL;
    for (i = 0; i < 1; i++)
        l_1278[i] = &p_1304->g_1222;
    (*p_1304->g_566) = ((((p_12 , (l_1260[0] <= (((l_1281 = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((-1L), (0x2B93L == p_1304->g_1229.s5), 0x16D6529CL, (-1L))).xwxxxzxy, ((VECTOR(int32_t, 2))(4L, (-4L))).xyxxxxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1D39051DL, 0x71E78F72L)).xyyy)).ywyyyxxx))).lo)).y, ((l_1260[0] >= ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(l_1263.sb5)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(65533UL, (GROUP_DIVERGE(1, 1) , (((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(l_1264.s2700553763547151)).sad2e, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(1UL, 0xF8B975A6L, 0xEC20CFEEL, 0x571EBCDCL)).lo)).xyxyxxxy, ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(l_1265.yxyz)), ((VECTOR(uint32_t, 4))(0xD54A8C51L, 1UL, 0xFFC6732DL, 0x6EDAAD5CL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1266.s71277147)).s41)).xxxy))).ywwwwzwy))).s2417656415475326)))).odd)).lo))).hi, ((VECTOR(uint32_t, 16))(l_1266.s7, ((VECTOR(uint32_t, 2))(0x373E5F8DL, 0x2CF49A83L)), ((VECTOR(uint32_t, 4))(l_1267.s6438)), (((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1304->local_2_offset, get_local_id(2), 10), ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((safe_sub_func_uint32_t_u_u(((l_1264.s3 & (p_15 < (&p_1304->g_1222 == l_1278[0]))) , l_1260[0]), FAKE_DIVERGE(p_1304->global_1_offset, get_global_id(1), 10))), ((VECTOR(uint16_t, 2))(0x60DBL)), 0xE028L, 0xAF84L, 1UL, 8UL, 65535UL)).s3, l_1265.z)), l_1279)) , p_15), l_1266.s1)) , l_1263.s4))) != 0x739BDBA5FF82DB13L) >= 0xCD76L), 0xC90445BCL, p_1304->g_854.x, 1UL, p_1304->g_109, ((VECTOR(uint32_t, 4))(0x406C068BL)))).s7c, ((VECTOR(uint32_t, 2))(4294967295UL))))).xyyy, ((VECTOR(uint32_t, 4))(0UL))))).z && (*p_1304->g_566))), 1UL, 1UL)).wwyxzzyzzyywzxww)).sec))).even) <= p_15)))) & 0x183698DB665E36F9L) && p_15))) && p_1304->g_51[4][4]) || p_1304->g_999.y) || (*p_1304->g_566));
    return p_1304->g_1011;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_1039 p_1304->g_692 p_1304->g_1062 p_1304->g_637 p_1304->g_25 p_1304->g_132 p_1304->g_986 p_1304->g_566 p_1304->g_601 p_1304->g_929 p_1304->g_742 p_1304->g_64 p_1304->g_4 p_1304->g_567 p_1304->g_86 p_1304->g_1085 p_1304->g_1090 p_1304->g_613 p_1304->g_597 p_1304->g_484 p_1304->g_552 p_1304->g_554 p_1304->g_551 p_1304->g_1000 p_1304->g_1122 p_1304->g_526 p_1304->g_1147 p_1304->g_740 p_1304->g_8 p_1304->g_667 p_1304->g_1148 p_1304->g_739 p_1304->g_479 p_1304->g_1252 p_1304->g_804 p_1304->g_1253
 * writes: p_1304->g_740 p_1304->g_132 p_1304->g_742 p_1304->g_64 p_1304->g_1077 p_1304->g_4 p_1304->g_771 p_1304->g_637 p_1304->g_25 p_1304->g_564 p_1304->g_714 p_1304->g_1222 p_1304->g_739 p_1304->g_804
 */
int32_t * func_16(int32_t * p_17, uint32_t  p_18, int32_t  p_19, struct S0 * p_1304)
{ /* block id: 507 */
    VECTOR(int32_t, 4) l_1036 = (VECTOR(int32_t, 4))(0x3D5D35F5L, (VECTOR(int32_t, 2))(0x3D5D35F5L, 8L), 8L);
    VECTOR(int32_t, 4) l_1037 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
    VECTOR(int32_t, 16) l_1038 = (VECTOR(int32_t, 16))(0x5FDA143EL, (VECTOR(int32_t, 4))(0x5FDA143EL, (VECTOR(int32_t, 2))(0x5FDA143EL, 0x18568DC1L), 0x18568DC1L), 0x18568DC1L, 0x5FDA143EL, 0x18568DC1L, (VECTOR(int32_t, 2))(0x5FDA143EL, 0x18568DC1L), (VECTOR(int32_t, 2))(0x5FDA143EL, 0x18568DC1L), 0x5FDA143EL, 0x18568DC1L, 0x5FDA143EL, 0x18568DC1L);
    uint8_t *l_1044 = (void*)0;
    uint8_t *l_1045 = (void*)0;
    uint8_t *l_1046 = &p_1304->g_740;
    uint32_t *l_1057 = (void*)0;
    uint32_t *l_1059 = (void*)0;
    uint32_t **l_1058 = &l_1059;
    int8_t *l_1061 = (void*)0;
    int8_t **l_1060 = &l_1061;
    uint64_t l_1064 = 0UL;
    int8_t *l_1065 = (void*)0;
    int8_t *l_1066 = (void*)0;
    int8_t *l_1067 = (void*)0;
    int8_t *l_1068[2];
    int32_t l_1069 = 7L;
    VECTOR(int32_t, 4) l_1070 = (VECTOR(int32_t, 4))(0x62F662EAL, (VECTOR(int32_t, 2))(0x62F662EAL, (-1L)), (-1L));
    int32_t *l_1071 = &p_1304->g_742;
    int32_t *l_1072 = (void*)0;
    int32_t *l_1073 = (void*)0;
    int32_t *l_1074 = &p_1304->g_64;
    uint64_t **l_1075[6];
    uint64_t ***l_1076[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_1081 = (void*)0;
    VECTOR(uint8_t, 16) l_1108 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x15L), 0x15L), 0x15L, 255UL, 0x15L, (VECTOR(uint8_t, 2))(255UL, 0x15L), (VECTOR(uint8_t, 2))(255UL, 0x15L), 255UL, 0x15L, 255UL, 0x15L);
    VECTOR(int64_t, 4) l_1118 = (VECTOR(int64_t, 4))(0x79C62ACA54E510CFL, (VECTOR(int64_t, 2))(0x79C62ACA54E510CFL, 0x6C123562558BBDABL), 0x6C123562558BBDABL);
    VECTOR(int8_t, 2) l_1121 = (VECTOR(int8_t, 2))((-1L), (-1L));
    int16_t l_1221 = 0x7658L;
    int32_t l_1238[6] = {0x4CC65716L,0x2389ED04L,0x4CC65716L,0x4CC65716L,0x2389ED04L,0x4CC65716L};
    VECTOR(int8_t, 16) l_1251 = (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 5L), 5L), 5L, 6L, 5L, (VECTOR(int8_t, 2))(6L, 5L), (VECTOR(int8_t, 2))(6L, 5L), 6L, 5L, 6L, 5L);
    uint32_t l_1255 = 0UL;
    int16_t l_1256[7][1][4] = {{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}},{{0x084FL,1L,0x084FL,0x084FL}}};
    uint64_t **l_1257 = &p_1304->g_613;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1068[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_1075[i] = &p_1304->g_617;
    (*l_1074) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_1036.zzwzzxzyzyywxxwx)).lo, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_1037.zy)).yyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1038.s98e4)), ((VECTOR(int32_t, 2))(p_1304->g_1039.xy)).xxxx))).lo)).yyxx))).xwxwxzwx, ((VECTOR(int32_t, 8))((((*l_1071) |= ((safe_div_func_int16_t_s_s(p_18, ((safe_add_func_uint16_t_u_u((((*l_1046) = l_1036.w) <= (l_1069 &= (safe_lshift_func_int8_t_s_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x70L, (safe_lshift_func_uint16_t_u_s((((((VECTOR(int32_t, 8))(0x156E0ED0L, (safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_1057 == ((*l_1058) = l_1057)), p_1304->g_692.y)), ((l_1060 != p_1304->g_1062[1]) < ((l_1038.s6 == (((*p_1304->g_25) = (p_1304->g_637 | (*p_1304->g_25))) & l_1038.s2)) | p_18)))) < l_1037.x) >= GROUP_DIVERGE(1, 1)), l_1064)), p_18, (**p_1304->g_986), l_1038.se, ((VECTOR(int32_t, 2))(0x1B2704B5L)), 2L)).s5 & l_1037.y) != 0x0D1A861AA76E5462L) , p_1304->g_601.s5), 3)), ((VECTOR(int8_t, 2))(1L)), 0x6BL, 0x63L, 6L, 0L)).s35)).hi && p_18), 6)))), p_1304->g_929.y)) && p_18))) & l_1070.y)) , l_1037.w), 4L, l_1070.x, l_1037.z, 0L, ((VECTOR(int32_t, 2))(0x11C0D56CL)), 0x1468647FL))))), ((VECTOR(int32_t, 8))((-4L)))))).s2330627762307455, ((VECTOR(int32_t, 16))(0x62ABEC67L))))).sfe, ((VECTOR(int32_t, 2))(0x2B436EF0L)), ((VECTOR(int32_t, 2))(0x2E74C898L))))).yxxx, ((VECTOR(int32_t, 4))(6L))))).wzzwywzy, ((VECTOR(int32_t, 8))(0x182BCB87L)), ((VECTOR(int32_t, 8))(0x3D4F568CL))))).s7767203707020034)).sf;
    if ((((p_19 >= p_18) , l_1075[1]) == (p_1304->g_1077 = &p_1304->g_617)))
    { /* block id: 515 */
        int32_t l_1080 = 1L;
        VECTOR(int16_t, 16) l_1086 = (VECTOR(int16_t, 16))(0x559DL, (VECTOR(int16_t, 4))(0x559DL, (VECTOR(int16_t, 2))(0x559DL, 1L), 1L), 1L, 0x559DL, 1L, (VECTOR(int16_t, 2))(0x559DL, 1L), (VECTOR(int16_t, 2))(0x559DL, 1L), 0x559DL, 1L, 0x559DL, 1L);
        VECTOR(uint8_t, 8) l_1089 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x09L), 0x09L), 0x09L, 7UL, 0x09L);
        int32_t l_1103[10] = {(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)};
        int32_t l_1106 = 0x0B6547DCL;
        int i;
        (*p_1304->g_566) = ((void*)0 != p_17);
        (*l_1074) = p_19;
        for (p_1304->g_4 = (-9); (p_1304->g_4 >= (-14)); p_1304->g_4 = safe_sub_func_int16_t_s_s(p_1304->g_4, 7))
        { /* block id: 520 */
            uint32_t ***l_1082 = &l_1081;
            int16_t *l_1083 = &p_1304->g_771;
            int16_t *l_1084 = &p_1304->g_637;
            VECTOR(int16_t, 16) l_1093 = (VECTOR(int16_t, 16))(0x2FAAL, (VECTOR(int16_t, 4))(0x2FAAL, (VECTOR(int16_t, 2))(0x2FAAL, 0L), 0L), 0L, 0x2FAAL, 0L, (VECTOR(int16_t, 2))(0x2FAAL, 0L), (VECTOR(int16_t, 2))(0x2FAAL, 0L), 0x2FAAL, 0L, 0x2FAAL, 0L);
            VECTOR(int16_t, 2) l_1094 = (VECTOR(int16_t, 2))(0x7737L, 0L);
            uint16_t *l_1104 = (void*)0;
            uint16_t *l_1105[8][2][3] = {{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}},{{&p_1304->g_479[2],(void*)0,(void*)0},{&p_1304->g_479[2],(void*)0,(void*)0}}};
            int i, j, k;
            l_1036.x |= ((*p_1304->g_25) = ((l_1080 ^ p_1304->g_567) < (l_1106 = (((((*l_1082) = l_1081) != (void*)0) ^ ((*l_1084) = ((*l_1083) = p_1304->g_86.s5))) > ((((VECTOR(int32_t, 16))(p_1304->g_1085.s7130447105420124)).s0 > ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(0L, 0x782CL)).yyyxxyyyxxxyxxyy, ((VECTOR(int16_t, 8))(0x4528L, ((VECTOR(int16_t, 2))((-7L), 0x382FL)), ((VECTOR(int16_t, 4))(l_1086.see6f)), 0x05EAL)).s4677233715005342))).odd)).s7002656413314145, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(0x2521L, 1L, (safe_add_func_int8_t_s_s((FAKE_DIVERGE(p_1304->global_1_offset, get_global_id(1), 10) && ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x57L, ((VECTOR(uint8_t, 2))(250UL, 0UL)), ((VECTOR(uint8_t, 4))(l_1089.s7077)), 0x48L)).s03)).yyxyxyxyyyxyxyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_1304->g_1090.s51313177)))).s4651242477365506))).s0), (safe_mod_func_int64_t_s_s(p_18, (*p_1304->g_613))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1093.sb6da637a)).s66)), 0x3616L, 0L)).wzyxyxwyxwxyyxzy)).even))))), ((VECTOR(int16_t, 2))(0x3BFFL, (-7L))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_1094.yxxy)).lo)).even, 0x7CBEL, (-6L))).s24, (int16_t)((((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((*l_1074) ^= ((safe_sub_func_uint32_t_u_u((l_1103[1] = p_1304->g_484.w), p_19)) >= 7UL)), l_1086.se)), (*p_1304->g_25))) && p_1304->g_552.sd), 8)) > p_1304->g_554.se) , p_17) == p_17)))).xyyyyyyy)).s43, ((VECTOR(int16_t, 2))(3L))))).xxxyxxxyxyyyxxxy)))))).s37ed, ((VECTOR(int16_t, 4))(0x7245L)), ((VECTOR(int16_t, 4))(0x0915L))))), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x0975L))))), 7L, 0x4D29L, 0x3203L, 0x48FBL, 0x1939L, p_1304->g_551.w, 0x79F9L, ((VECTOR(int16_t, 4))((-1L))), 0x4C95L)).s45, ((VECTOR(uint16_t, 2))(65530UL))))).xyxxyyyyyyxyyyyx, ((VECTOR(int32_t, 16))(0x298BAC34L))))).sf47b)).zwyywzxw)).s3) || l_1089.s1)))));
        }
    }
    else
    { /* block id: 530 */
        int32_t *l_1107[5][9][5] = {{{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069}},{{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069}},{{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069}},{{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069}},{{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069},{&l_1069,(void*)0,(void*)0,(void*)0,&l_1069}}};
        uint32_t l_1115 = 0x310B39A1L;
        int32_t **l_1124 = &p_1304->g_25;
        uint32_t *l_1133 = &p_1304->g_804;
        uint64_t **l_1141 = &p_1304->g_617;
        VECTOR(int16_t, 8) l_1150 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x33A9L), 0x33A9L), 0x33A9L, (-4L), 0x33A9L);
        VECTOR(uint32_t, 8) l_1195 = (VECTOR(uint32_t, 8))(0xF3393A18L, (VECTOR(uint32_t, 4))(0xF3393A18L, (VECTOR(uint32_t, 2))(0xF3393A18L, 0xF3A76222L), 0xF3A76222L), 0xF3A76222L, 0xF3393A18L, 0xF3A76222L);
        uint64_t l_1200 = 0xD3E33C7FD19E3169L;
        int i, j, k;
        --l_1108.s8;
        (*p_1304->g_566) = (safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((l_1115 |= p_19), (safe_add_func_int32_t_s_s((*p_1304->g_566), ((((VECTOR(int64_t, 2))(l_1118.xx)).hi != ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0xD2FD8FB5E1AFF4C4L, 0UL, 1UL, 0x97A5990EADCDB3DEL)).wzyzzzwwxyxzzzzw)).se) || (safe_add_func_uint8_t_u_u(p_1304->g_692.y, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_1121.yx)).yyxyxyyx)).s1403155173155747)))).s40, ((VECTOR(int8_t, 4))(0x3AL, ((VECTOR(int8_t, 2))(0x29L, 0x45L)), 0x2AL)).even))).even))))))) || (0UL || 7UL)), p_1304->g_1000.s6));
        (*l_1124) = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_1304->g_1122.s5426263101745255)).saa)).yxyyyxxy)).s0 , l_1107[1][6][3]);
        for (p_1304->g_132 = 0; (p_1304->g_132 >= 15); p_1304->g_132 = safe_add_func_int16_t_s_s(p_1304->g_132, 9))
        { /* block id: 537 */
            uint32_t *l_1134 = &p_1304->g_804;
            int32_t l_1142 = 0x7A86364DL;
            uint32_t **l_1207[6][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
            int32_t l_1220 = (-2L);
            VECTOR(int8_t, 16) l_1249 = (VECTOR(int8_t, 16))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 0x71L), 0x71L), 0x71L, 0x67L, 0x71L, (VECTOR(int8_t, 2))(0x67L, 0x71L), (VECTOR(int8_t, 2))(0x67L, 0x71L), 0x67L, 0x71L, 0x67L, 0x71L);
            VECTOR(int8_t, 16) l_1250 = (VECTOR(int8_t, 16))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, (-1L)), (-1L)), (-1L), 0x06L, (-1L), (VECTOR(int8_t, 2))(0x06L, (-1L)), (VECTOR(int8_t, 2))(0x06L, (-1L)), 0x06L, (-1L), 0x06L, (-1L));
            int i, j, k;
            for (p_19 = 0; (p_19 > (-16)); p_19 = safe_sub_func_uint64_t_u_u(p_19, 1))
            { /* block id: 540 */
                int64_t *l_1135 = &p_1304->g_714;
                VECTOR(uint8_t, 16) l_1138 = (VECTOR(uint8_t, 16))(0x6CL, (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 1UL), 1UL), 1UL, 0x6CL, 1UL, (VECTOR(uint8_t, 2))(0x6CL, 1UL), (VECTOR(uint8_t, 2))(0x6CL, 1UL), 0x6CL, 1UL, 0x6CL, 1UL);
                uint16_t **l_1149 = (void*)0;
                int32_t l_1160 = 0x46F3D67FL;
                uint16_t l_1196 = 65534UL;
                VECTOR(uint16_t, 8) l_1205 = (VECTOR(uint16_t, 8))(0x2E1EL, (VECTOR(uint16_t, 4))(0x2E1EL, (VECTOR(uint16_t, 2))(0x2E1EL, 7UL), 7UL), 7UL, 0x2E1EL, 7UL);
                int8_t l_1219 = 0x7BL;
                uint16_t l_1223 = 65535UL;
                VECTOR(int16_t, 4) l_1230 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L);
                VECTOR(int16_t, 4) l_1231 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-8L)), (-8L));
                int i;
                if (((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_1304->g_597, ((+((*l_1074) = ((l_1133 != l_1134) == ((((VECTOR(int64_t, 16))(4L, ((*l_1135) &= p_18), (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_1138.sf20f)).y, ((((p_1304->g_667.sb ^ ((+(safe_lshift_func_uint16_t_u_s(p_1304->g_comm_values[p_1304->tid], 7))) , p_19)) || (l_1141 == &p_1304->g_617)) != p_1304->g_1023.y) & 0x69AFL))), (*l_1074), 8L, 9L, 0x354A232D8FB09AE9L, (-9L), (-4L), p_1304->g_554.se, ((VECTOR(int64_t, 2))(5L)), p_18, 0x2C1B94BE165CF1D4L, 0x4A0A52A037A0EB72L, 1L)).sb <= l_1142) == (-7L))))) >= 65535UL))), p_1304->g_526.x)) >= p_19))
                { /* block id: 543 */
                    uint32_t *l_1152 = (void*)0;
                    uint32_t *l_1153 = (void*)0;
                    uint32_t *l_1154 = (void*)0;
                    uint32_t *l_1155 = (void*)0;
                    uint32_t *l_1156 = (void*)0;
                    uint32_t *l_1157[5];
                    int16_t *l_1158 = &p_1304->g_771;
                    int16_t *l_1159[8][5] = {{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0},{&p_1304->g_637,(void*)0,&p_1304->g_637,&p_1304->g_637,(void*)0}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1157[i] = (void*)0;
                    (*l_1074) ^= (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((p_1304->g_1147 != (l_1149 = &p_1304->g_1148)), p_19)), (p_18 , p_1304->g_692.x)));
                    (*l_1074) ^= (((-10L) ^ (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1150.s06)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1304->g_1151.s4764)).zxwzwwyz)), 0x3A05L, 0x4491L, 0x3E00L, 1L, 0x349EL, (-6L))).s8 >= (l_1160 = ((*l_1158) = (1UL & (l_1142 = 1UL)))))) & (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((--(*l_1046)), p_19)), FAKE_DIVERGE(p_1304->global_0_offset, get_global_id(0), 10))));
                    if ((atomic_inc(&p_1304->l_atomic_input[37]) == 7))
                    { /* block id: 552 */
                        int16_t *l_1168 = (void*)0;
                        int16_t **l_1167 = &l_1168;
                        int16_t **l_1169 = (void*)0;
                        int16_t **l_1170 = &l_1168;
                        l_1170 = (l_1169 = l_1167);
                        unsigned int result = 0;
                        atomic_add(&p_1304->l_special_values[37], result);
                    }
                    else
                    { /* block id: 555 */
                        (1 + 1);
                    }
                    for (p_1304->g_771 = 0; (p_1304->g_771 != (-28)); --p_1304->g_771)
                    { /* block id: 560 */
                        int32_t *l_1173 = &l_1160;
                        (*l_1124) = l_1173;
                    }
                }
                else
                { /* block id: 563 */
                    int64_t l_1180 = 0x2396E700023C2F58L;
                    int32_t l_1197 = (-6L);
                    uint32_t ***l_1206 = &l_1058;
                    (*l_1074) = (((safe_lshift_func_int8_t_s_s((-1L), 4)) != p_19) > l_1142);
                    for (p_1304->g_564 = 0; (p_1304->g_564 != 19); ++p_1304->g_564)
                    { /* block id: 567 */
                        VECTOR(uint32_t, 2) l_1194 = (VECTOR(uint32_t, 2))(0UL, 0xD0A598A1L);
                        int i;
                        (*l_1074) &= (((VECTOR(uint64_t, 4))(p_1304->g_1178.xxxy)).x | (-1L));
                        l_1197 ^= (safe_unary_minus_func_uint8_t_u((~(p_1304->g_8.x , (255UL < (l_1180 , ((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((p_18 ^ (p_19 && (((safe_unary_minus_func_int32_t_s(((*l_1074) = ((safe_mul_func_int8_t_s_s(l_1180, 0UL)) , (safe_add_func_int32_t_s_s((*p_1304->g_566), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(l_1194.yyyx)).hi, ((VECTOR(uint32_t, 16))(l_1195.s2637107541522156)).sc4))), ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(l_1196, 4294967287UL, 0x21924C23L, 4294967295UL, 1UL, ((VECTOR(uint32_t, 2))(0xD4D24C6AL)), 4294967287UL)), ((VECTOR(uint32_t, 8))(0x12E6C50FL))))).s37))), ((VECTOR(uint32_t, 4))(0xE0ABB884L)), ((VECTOR(uint32_t, 8))(0UL)), 4UL, 1UL)).s3)))))) < 2UL) >= p_1304->g_667.s5))) != GROUP_DIVERGE(1, 1)), (-1L))) <= 0UL), l_1194.y)), l_1194.y)), GROUP_DIVERGE(1, 1))) , l_1196)))))));
                        if (p_19)
                            break;
                    }
                    (*l_1074) = (+((safe_lshift_func_int8_t_s_s(1L, (l_1200 |= (l_1142 &= p_19)))) && ((((((*l_1135) = p_19) , (**p_1304->g_1147)) >= (((((l_1160 = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((l_1142 = (((l_1196 >= (FAKE_DIVERGE(p_1304->group_1_offset, get_group_id(1), 10) > ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(5UL, 0x55D6L)).yxyx, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1205.s56)), 0xE697L, 0xAC48L, 65534UL, (((*l_1206) = (void*)0) != l_1207[1][0][0]), 0UL, 0UL)).odd, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x29FDL, 0xB90BL, 0x7D3BL, ((VECTOR(uint16_t, 2))(0x3965L, 0x4BA2L)), 0x4F83L, 1UL, 0UL)).s4773660574036333)).s05)).xxyx))).even, ((VECTOR(uint16_t, 16))((safe_mod_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_1304->g_1216.wwzwywww)).s0, 4)) >= ((safe_mod_func_int16_t_s_s((+(l_1219 <= (((0x6BD64235L ^ l_1180) & p_1304->g_479[2]) , p_19))), 0x62B9L)) || 4L)), l_1138.s8)), (*p_1304->g_1148))) && l_1196), 0x77528AB79979CE7CL)), 0xE244L, 1UL, 65531UL, (*p_1304->g_1148), ((VECTOR(uint16_t, 8))(0x5A31L)), 0xC791L, 0x3CDBL, 0xA31FL)).sa4))).xxxy, ((VECTOR(uint16_t, 4))(65535UL))))).z)) , p_17) != p_17)) != l_1220), 7)) < 0x23L), 0x5FL))) | 0x9EL) >= FAKE_DIVERGE(p_1304->group_1_offset, get_group_id(1), 10)) && 0L) >= l_1220)) < l_1221) < p_1304->g_551.z)));
                }
                (*l_1074) = (((((p_1304->g_1222 = ((p_1304->g_479[2] , p_18) , p_17)) != l_1134) , (((*p_1304->g_1148) = l_1223) <= ((VECTOR(int16_t, 16))(0x3C03L, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0x2A99L, 1)), 13)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1304->g_1228.zz)).yyyyxyxxyyyyxxxx)).s544d, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1304->g_1229.s53)).yyyxyxxyyxxyyxyx)).s7cb1))).hi, ((VECTOR(int16_t, 2))(l_1230.zz))))))), (-1L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1231.zwxz)).xwzwzzwxzwzxywww)).s9267)).wwxyxxxw)), 0x7DF6L, 0x5693L, 0x70F5L)).s4)) > ((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_1142 , ((*l_1074) && (((-3L) < l_1160) == (*p_1304->g_613)))), p_18)), p_19)), 0x3B09A4ADL)) ^ l_1238[5])) ^ p_18);
                l_1160 = l_1142;
                (*l_1074) &= ((VECTOR(int32_t, 2))(1L, 0x4DBE84DDL)).lo;
            }
            l_1255 |= (~(safe_rshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((*l_1074), (safe_add_func_uint32_t_u_u(((l_1133 == p_17) & 18446744073709551615UL), ((safe_sub_func_int16_t_s_s(0x3BB0L, (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_1249.se463)))).even, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x08L, (-1L))).yyxxxxxxxyyxyyxy)).sca, ((VECTOR(int8_t, 2))((-1L), 0x2FL))))).xxyyxyxxyxyxyxxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(l_1250.sd53392dea6778f3e)).s213e, ((VECTOR(int8_t, 8))(l_1251.sc81df5e9)).hi))).lo)).xxyy)).wwxyxxyyyxxyyyzz))).s63))).hi, 0x77L)))) != (((*l_1133) &= (p_1304->g_1252 == (p_1304->g_64 , &p_1304->g_1253))) , 0x36FEL)))))) && p_18), p_18)));
            if (l_1256[4][0][1])
                continue;
            (*l_1124) = (void*)0;
        }
    }
    atomic_min(&p_1304->l_atomic_reduction[0], (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(5UL, 0UL)).yyyxyyxyxxxxyxxy)).sf350)).w > ((*p_1304->g_1252) != l_1257)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1304->v_collective += p_1304->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_1023 p_1304->g_1028 p_1304->g_132 p_1304->g_986 p_1304->g_566 p_1304->g_564
 * writes: p_1304->g_132 p_1304->g_566 p_1304->g_25 p_1304->g_564
 */
int32_t * func_20(int32_t * p_21, uint32_t  p_22, uint32_t  p_23, int32_t * p_24, struct S0 * p_1304)
{ /* block id: 491 */
    VECTOR(int8_t, 2) l_1020 = (VECTOR(int8_t, 2))(0x49L, (-5L));
    uint64_t **l_1024 = &p_1304->g_613;
    uint64_t ***l_1025 = &l_1024;
    uint32_t *l_1029 = &p_1304->g_132;
    int32_t **l_1032 = &p_1304->g_566;
    int32_t **l_1033 = &p_1304->g_25;
    int i;
    (*p_1304->g_986) = func_36((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(l_1020.yx)).even, (((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1304->g_1023.yy)))).yyyyxxyy)).s2 & (((*l_1025) = l_1024) == (void*)0)) && (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_1304->g_1028.sd1cb)).w, 6))) & p_22))), ((*l_1029)++), p_23, p_1304);
    (*l_1033) = ((*l_1032) = l_1029);
    (*l_1033) = (*p_1304->g_986);
    for (p_1304->g_564 = 28; (p_1304->g_564 != 55); p_1304->g_564++)
    { /* block id: 500 */
        (1 + 1);
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_4 p_1304->g_51 p_1304->g_25 p_1304->g_64 p_1304->g_8 p_1304->l_comm_values p_1304->g_97 p_1304->g_478 p_1304->g_479 p_1304->g_564 p_1304->g_526 p_1304->g_552 p_1304->g_601 p_1304->g_554 p_1304->g_567 p_1304->g_566 p_1304->g_613 p_1304->g_597 p_1304->g_637 p_1304->g_484 p_1304->g_109 p_1304->g_132 p_1304->g_739 p_1304->g_551 p_1304->g_5 p_1304->g_670 p_1304->g_comm_values p_1304->g_692 p_1304->g_804 p_1304->g_650 p_1304->g_909 p_1304->g_854 p_1304->g_948 p_1304->g_527 p_1304->g_986 p_1304->g_992 p_1304->g_999 p_1304->g_1000 p_1304->g_714 p_1304->g_1011 p_1304->g_86
 * writes: p_1304->g_4 p_1304->g_51 p_1304->g_comm_values p_1304->g_64 p_1304->g_132 p_1304->g_479 p_1304->g_484 p_1304->g_8 p_1304->g_564 p_1304->g_566 p_1304->g_526 p_1304->g_597 p_1304->g_554 p_1304->g_567 p_1304->g_637 p_1304->g_739 p_1304->g_740 p_1304->g_742 p_1304->g_86 p_1304->g_552 p_1304->g_670 p_1304->g_804 p_1304->g_811 p_1304->g_771 p_1304->g_909 p_1304->g_948 p_1304->g_1000 p_1304->g_1011
 */
int64_t  func_26(int32_t * p_27, struct S0 * p_1304)
{ /* block id: 7 */
    int8_t l_49 = 1L;
    int32_t l_54 = 1L;
    int16_t *l_964[2];
    int64_t ***l_978[6][7][6] = {{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}},{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}},{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}},{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}},{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}},{{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811},{&p_1304->g_811,&p_1304->g_811,(void*)0,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811}}};
    uint64_t *l_985 = &p_1304->g_51[4][4];
    int8_t l_1006 = (-1L);
    int32_t *l_1008[10][1] = {{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567},{&p_1304->g_567}};
    int8_t l_1009 = 1L;
    int64_t l_1010 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_964[i] = &p_1304->g_771;
    for (p_1304->g_4 = 8; (p_1304->g_4 != 24); p_1304->g_4 = safe_add_func_uint32_t_u_u(p_1304->g_4, 9))
    { /* block id: 10 */
        uint32_t l_40 = 0x747C914AL;
        uint64_t *l_50 = &p_1304->g_51[4][4];
        VECTOR(uint8_t, 16) l_959 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL), 255UL, 248UL, 255UL, (VECTOR(uint8_t, 2))(248UL, 255UL), (VECTOR(uint8_t, 2))(248UL, 255UL), 248UL, 255UL, 248UL, 255UL);
        int64_t *l_962 = (void*)0;
        int64_t *l_963 = (void*)0;
        int16_t **l_965 = &l_964[1];
        int32_t *l_970 = &p_1304->g_567;
        int64_t ***l_977 = (void*)0;
        int64_t ****l_979 = &l_978[2][5][4];
        uint16_t *l_984 = &p_1304->g_739[0];
        VECTOR(uint16_t, 16) l_991 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4D9AL), 0x4D9AL), 0x4D9AL, 1UL, 0x4D9AL, (VECTOR(uint16_t, 2))(1UL, 0x4D9AL), (VECTOR(uint16_t, 2))(1UL, 0x4D9AL), 1UL, 0x4D9AL, 1UL, 0x4D9AL);
        int32_t *l_1001[5];
        uint8_t l_1004 = 0x88L;
        uint32_t l_1005 = 4294967295UL;
        uint16_t l_1007 = 3UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1001[i] = (void*)0;
        p_1304->g_948 |= ((func_30(func_36((l_40 | func_41(func_46((0x0F620A34L && ((((*l_50)++) , ((&p_1304->g_51[1][0] != &p_1304->g_51[0][1]) & l_49)) && l_54)), (safe_mod_func_uint64_t_u_u(p_1304->g_4, 0xFEF6F1AC28C4F412L)), p_1304), p_1304->g_4, l_40, p_1304->g_25, p_1304)), p_1304->g_854.x, l_54, p_1304), l_40, p_1304->g_25, l_40, p_1304->g_25, p_1304) ^ l_49) , 6L);
        (*l_970) &= (safe_div_func_int64_t_s_s(l_54, ((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_959.sd8)))).even, (((safe_sub_func_uint64_t_u_u(l_959.s7, (l_962 == (l_963 = (void*)0)))) , ((*l_965) = l_964[0])) == ((safe_mul_func_uint16_t_u_u(((((+0x1890L) == (safe_div_func_int16_t_s_s(l_959.s2, l_54))) , 0x1D4381F97B8D5A34L) != (-1L)), l_959.s1)) , (void*)0)))) || l_40), l_54)), FAKE_DIVERGE(p_1304->group_0_offset, get_group_id(0), 10))) || l_54), p_1304->g_527.sb)) , l_959.s7)));
        (*p_1304->g_986) = (((*l_970) < (0x1911L ^ ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 6)), l_54)) >= (*l_970)))) , &p_1304->g_64);
        l_1007 &= (l_54 = (safe_add_func_int32_t_s_s(((*p_1304->g_566) = l_49), ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65531UL, 0xE56CL)).yyyxyyyy)).s23, ((VECTOR(uint16_t, 8))(l_991.s59019b31)).s25, ((VECTOR(uint16_t, 4))(p_1304->g_992.zzww)).lo))).odd, ((((*l_970) = (*l_970)) > l_54) , (safe_rshift_func_int16_t_s_u((!((+((((safe_div_func_int16_t_s_s(((((((*l_970) = (((((safe_rshift_func_uint8_t_u_s(0xF6L, 1)) , (*l_970)) | (p_1304->g_552.s1 >= (0x18A9EF4EL && (((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(p_1304->g_999.xxyxxyxy)).s26))), (((GROUP_DIVERGE(1, 1) , (FAKE_DIVERGE(p_1304->group_2_offset, get_group_id(2), 10) || (*l_970))) ^ (p_1304->g_1000.s6 = ((VECTOR(int32_t, 2))(p_1304->g_1000.s52)).hi)) != (safe_mul_func_uint8_t_u_u(0UL, (-1L)))), 18446744073709551615UL, 18446744073709551615UL, 0UL, 0UL, 2UL)).s55))).odd != l_1004)))) > 1UL) , l_54)) & p_1304->g_51[4][4]) ^ p_1304->g_714) , l_1005) | l_54), l_1006)) >= l_1006) <= 0x777BL) , l_1006)) ^ 0xECAA8A84L)), l_1006))))) < l_49) < p_1304->g_854.y) | p_1304->g_804))));
    }
    p_1304->g_1011--;
    if ((atomic_inc(&p_1304->l_atomic_input[32]) == 5))
    { /* block id: 483 */
        int32_t l_1014[8] = {(-10L),1L,(-10L),(-10L),1L,(-10L),(-10L),1L};
        int32_t l_1015 = (-3L);
        int32_t *l_1016 = &l_1014[5];
        int i;
        l_1015 = l_1014[5];
        l_1016 = (void*)0;
        unsigned int result = 0;
        int l_1014_i0;
        for (l_1014_i0 = 0; l_1014_i0 < 8; l_1014_i0++) {
            result += l_1014[l_1014_i0];
        }
        result += l_1015;
        atomic_add(&p_1304->l_special_values[32], result);
    }
    else
    { /* block id: 486 */
        (1 + 1);
    }
    return p_1304->g_86.s5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_30(int32_t * p_31, uint32_t  p_32, int32_t * p_33, int64_t  p_34, int32_t * p_35, struct S0 * p_1304)
{ /* block id: 465 */
    int32_t l_947 = 0L;
    return l_947;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_36(int32_t  p_37, uint32_t  p_38, int64_t  p_39, struct S0 * p_1304)
{ /* block id: 462 */
    int32_t l_946 = 0x617CDF89L;
    l_946 = l_946;
    return &p_1304->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_804 p_1304->g_613 p_1304->g_597 p_1304->g_109 p_1304->g_549 p_1304->g_637 p_1304->g_567 p_1304->g_854 p_1304->g_5 p_1304->g_484 p_1304->g_692 p_1304->g_617 p_1304->g_51 p_1304->g_132 p_1304->g_670 p_1304->g_650 p_1304->g_64 p_1304->g_740 p_1304->g_909 p_1304->g_667 p_1304->g_929 p_1304->g_564 p_1304->g_554 p_1304->g_comm_values p_1304->g_4 p_1304->g_479
 * writes: p_1304->g_484 p_1304->g_771 p_1304->g_597 p_1304->g_64 p_1304->g_637 p_1304->g_comm_values p_1304->g_740 p_1304->g_909 p_1304->g_567
 */
int16_t  func_41(int32_t * p_42, uint32_t  p_43, int32_t  p_44, int32_t * p_45, struct S0 * p_1304)
{ /* block id: 409 */
    VECTOR(int16_t, 2) l_823 = (VECTOR(int16_t, 2))(0x7AE8L, 0L);
    VECTOR(int16_t, 4) l_824 = (VECTOR(int16_t, 4))(0x61A8L, (VECTOR(int16_t, 2))(0x61A8L, 0x5805L), 0x5805L);
    int32_t **l_825 = &p_1304->g_566;
    VECTOR(int16_t, 2) l_828 = (VECTOR(int16_t, 2))(0x4A3FL, 0L);
    int8_t *l_831 = (void*)0;
    int8_t *l_832 = (void*)0;
    int8_t *l_833 = (void*)0;
    int8_t *l_834 = (void*)0;
    uint32_t l_835 = 9UL;
    int16_t *l_836 = &p_1304->g_771;
    int32_t l_846 = 0x7D85E19DL;
    int32_t l_847 = 0x4A93702CL;
    uint32_t l_848 = 0xF6D3E972L;
    VECTOR(uint8_t, 2) l_851 = (VECTOR(uint8_t, 2))(254UL, 0xC2L);
    int64_t ***l_864[9] = {&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811,&p_1304->g_811};
    uint32_t *l_884 = &p_1304->g_804;
    uint32_t **l_883[6] = {&l_884,&l_884,&l_884,&l_884,&l_884,&l_884};
    uint32_t l_887 = 4294967289UL;
    uint32_t l_888[4][1] = {{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}};
    int16_t l_891 = (-8L);
    int32_t l_904 = 0L;
    int32_t l_905 = 1L;
    int32_t l_906 = 0L;
    int32_t l_908 = (-7L);
    VECTOR(int16_t, 16) l_926 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x005FL), 0x005FL), 0x005FL, (-8L), 0x005FL, (VECTOR(int16_t, 2))((-8L), 0x005FL), (VECTOR(int16_t, 2))((-8L), 0x005FL), (-8L), 0x005FL, (-8L), 0x005FL);
    int8_t l_933 = 0x2EL;
    int32_t l_935 = 0L;
    int32_t l_936 = 0x43504FD0L;
    int32_t l_937 = 0x671F9D8AL;
    int32_t l_938 = 0x3B50EB36L;
    int32_t l_939 = 0x5DD29A37L;
    int32_t l_940 = 0x20367DCAL;
    int i, j;
    if ((safe_lshift_func_uint8_t_u_s((p_44 ^ (((*l_836) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_823.xy)), ((VECTOR(int16_t, 2))(l_824.yx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))((0xDAL > ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(0x7AL, p_1304->g_804, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((l_825 == ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(0x22D7L, 0L)).yyyy, ((VECTOR(int16_t, 16))(l_828.xyyxyyxxxxxxxyyy)).s3015))).x, 11)) , &p_45)), 0x79L, (0UL < (safe_div_func_uint64_t_u_u((*p_1304->g_613), p_44))), (l_835 = (p_1304->g_484.y = p_1304->g_109)), p_1304->g_549.x, ((VECTOR(int8_t, 2))((-1L))), 0x64L)).s74)), ((VECTOR(int8_t, 8))(4L)), l_823.y, 0x7DL, 0L, 0x3AL)).sb4, ((VECTOR(int8_t, 2))((-2L)))))).hi), ((VECTOR(int16_t, 2))((-9L))), p_1304->g_637, 0x34A8L, 0x410CL, 0x222EL, 0x3D88L)).s15, ((VECTOR(int16_t, 2))(0x6E1BL))))), 0x526AL, 0x25C9L)).hi))).even, l_824.x))) , 8UL)), 2)))
    { /* block id: 413 */
        uint32_t *l_839 = (void*)0;
        uint32_t **l_838[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t ***l_837 = &l_838[4];
        int32_t *l_845[2][9][6] = {{{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0}},{{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0},{&p_1304->g_567,&p_1304->g_567,&p_1304->g_64,&p_1304->g_567,&p_1304->g_64,(void*)0}}};
        int i, j, k;
        (*l_837) = (void*)0;
        for (p_1304->g_597 = 0; (p_1304->g_597 <= 32); p_1304->g_597 = safe_add_func_int64_t_s_s(p_1304->g_597, 5))
        { /* block id: 417 */
            int32_t *l_844 = &p_1304->g_64;
            (*l_844) = (safe_rshift_func_int8_t_s_s(p_1304->g_567, ((VECTOR(int8_t, 2))(0x24L, 0x6CL)).hi));
            l_845[0][4][1] = p_45;
        }
        --l_848;
        return l_851.x;
    }
    else
    { /* block id: 423 */
        VECTOR(uint32_t, 2) l_855 = (VECTOR(uint32_t, 2))(0UL, 9UL);
        int8_t *l_856[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t **l_863 = &l_831;
        uint8_t *l_865[10][4][6] = {{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&p_1304->g_564,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_866[3][6];
        uint64_t l_941 = 0xBAE8A06BFEC54F05L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_866[i][j] = &p_1304->g_64;
        }
        l_847 &= (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1304->g_854.yxxxxxxxxyxyyyyy)).s579f)).zwxxwxxyxwywwzzx)).s50)).yxxyyyxyxyyyyyyx, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(l_855.yx)).yxxxyxyy, (uint32_t)((((VECTOR(uint8_t, 8))(250UL, (l_846 ^= ((p_1304->g_484.z &= p_1304->g_5) & (safe_rshift_func_uint16_t_u_s(p_1304->g_692.y, ((*l_836) = (safe_rshift_func_int16_t_s_u(((((VECTOR(int32_t, 2))(1L, 0x3A65E01FL)).hi || (safe_lshift_func_uint16_t_u_u((((((((*p_1304->g_617) , l_856[1]) == ((*l_863) = l_834)) , l_864[4]) != l_864[6]) && (GROUP_DIVERGE(0, 1) & p_44)) , p_1304->g_132), 0))) || 0x09L), GROUP_DIVERGE(0, 1)))))))), ((VECTOR(uint8_t, 4))(8UL)), 1UL, 255UL)).s5 || l_855.y) & l_835)))).s7051344051765206))).s008e)).x, 0x6C78E84FL));
        for (p_1304->g_637 = (-2); (p_1304->g_637 != (-4)); p_1304->g_637 = safe_sub_func_uint16_t_u_u(p_1304->g_637, 5))
        { /* block id: 431 */
            uint16_t *l_885 = &p_1304->g_479[0];
            int32_t l_886[7][10][3] = {{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}},{{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L},{0x4BAC99F6L,(-1L),0x35D24EA0L}}};
            uint32_t *l_918[4][3] = {{(void*)0,&l_887,(void*)0},{(void*)0,&l_887,(void*)0},{(void*)0,&l_887,(void*)0},{(void*)0,&l_887,(void*)0}};
            VECTOR(int16_t, 8) l_925 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x15DBL), 0x15DBL), 0x15DBL, 0L, 0x15DBL);
            VECTOR(int64_t, 8) l_930 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x49A0D34BA30628D0L), 0x49A0D34BA30628D0L), 0x49A0D34BA30628D0L, 1L, 0x49A0D34BA30628D0L);
            int8_t l_934 = 0x16L;
            int i, j, k;
            p_1304->g_64 &= ((safe_mod_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(p_44, (safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((*p_1304->g_613) = FAKE_DIVERGE(p_1304->group_0_offset, get_group_id(0), 10)), p_1304->g_670.s0)) <= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((-2L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(p_44, 0x1356C29417CD96AEL, 0x289C52334E5AC6DDL, (~((void*)0 == &p_1304->g_714)), 0x0AC5C9BED9139A9FL, (p_1304->g_comm_values[p_1304->tid] = (safe_sub_func_uint64_t_u_u((((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((((void*)0 != l_883[3]) , (l_885 != &p_1304->g_479[2])) , l_886[3][5][0]) || (-3L)), 7)), 0x580538252B74D3BBL)) > p_44) ^ p_43), l_886[3][5][0]))), 0x0C48B0F1EE771FC1L, 0x49EC4284367C78FFL)), ((VECTOR(int64_t, 8))(1L))))).s24)).xyxyxxyxxyyyyyyx)).s0e)), (-5L), 0x489B46D49B66ACF4L, ((VECTOR(int64_t, 4))(0x40B0401DA06481CFL)), ((VECTOR(int64_t, 2))(0x3A24BAAAC2AA0963L)), l_887, ((VECTOR(int64_t, 2))(1L)), 0L, 0x2B71D0778CCF5FB1L)).s3ab9)))).yzxwzwxw)).s1), p_1304->g_650.s2)))) | 1UL) > l_888[2][0]), GROUP_DIVERGE(0, 1))) ^ p_43);
            for (p_1304->g_740 = (-24); (p_1304->g_740 > 24); p_1304->g_740 = safe_add_func_int64_t_s_s(p_1304->g_740, 8))
            { /* block id: 437 */
                uint32_t l_897 = 8UL;
                int32_t l_898 = 8L;
                int32_t l_899 = 0x63F45D99L;
                int32_t l_900 = 1L;
                int32_t l_901 = 0x2A77E63FL;
                int32_t l_902 = 0x266E304BL;
                int32_t l_903 = 0x2FCCABFDL;
                int32_t l_907 = 1L;
                l_886[3][5][0] = l_891;
                if ((atomic_inc(&p_1304->g_atomic_input[54 * get_linear_group_id() + 45]) == 7))
                { /* block id: 440 */
                    VECTOR(int8_t, 16) l_892 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x30L), 0x30L), 0x30L, 0L, 0x30L, (VECTOR(int8_t, 2))(0L, 0x30L), (VECTOR(int8_t, 2))(0L, 0x30L), 0L, 0x30L, 0L, 0x30L);
                    int8_t l_893 = 0x7DL;
                    VECTOR(int64_t, 2) l_894 = (VECTOR(int64_t, 2))((-1L), 0x501AB366F4B1E272L);
                    uint16_t l_895[7][3] = {{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL},{0xE8ABL,65531UL,65531UL}};
                    int32_t l_896[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_896[i] = 1L;
                    l_892.s0 = 0x7795CA89L;
                    l_896[0] = ((l_893 , ((VECTOR(int64_t, 4))(l_894.xxyx)).z) , l_895[2][2]);
                    unsigned int result = 0;
                    result += l_892.sf;
                    result += l_892.se;
                    result += l_892.sd;
                    result += l_892.sc;
                    result += l_892.sb;
                    result += l_892.sa;
                    result += l_892.s9;
                    result += l_892.s8;
                    result += l_892.s7;
                    result += l_892.s6;
                    result += l_892.s5;
                    result += l_892.s4;
                    result += l_892.s3;
                    result += l_892.s2;
                    result += l_892.s1;
                    result += l_892.s0;
                    result += l_893;
                    result += l_894.y;
                    result += l_894.x;
                    int l_895_i0, l_895_i1;
                    for (l_895_i0 = 0; l_895_i0 < 7; l_895_i0++) {
                        for (l_895_i1 = 0; l_895_i1 < 3; l_895_i1++) {
                            result += l_895[l_895_i0][l_895_i1];
                        }
                    }
                    int l_896_i0;
                    for (l_896_i0 = 0; l_896_i0 < 5; l_896_i0++) {
                        result += l_896[l_896_i0];
                    }
                    atomic_add(&p_1304->g_special_values[54 * get_linear_group_id() + 45], result);
                }
                else
                { /* block id: 443 */
                    (1 + 1);
                }
                l_886[1][7][1] |= (l_897 &= p_1304->g_51[3][2]);
                p_1304->g_909--;
            }
            p_1304->g_567 ^= (safe_div_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((GROUP_DIVERGE(1, 1) <= ((safe_add_func_int8_t_s_s(((+(l_886[3][5][0] = p_43)) < (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))((GROUP_DIVERGE(1, 1) | p_1304->g_909), 0x28DA7A3929DF0161L, ((VECTOR(uint64_t, 4))(((((p_44 > ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(l_925.s7001361527357103)).s52, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))((-4L), 0x1A20L)).yyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_926.s86379d00)).even)), (p_1304->g_132 , (safe_sub_func_int8_t_s_s(p_44, p_1304->g_667.s3))), (((((*p_1304->g_613) = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xF7490B4CE6368AA3L, 0xD7876B7BA1BDD6B2L)))).yxyy)).y) == ((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(p_1304->g_929.wwyyxywx)).s5431762233070345, ((VECTOR(int64_t, 16))(l_930.s6442424714444502))))).sd) , (l_930.s4 | (((~(p_43 >= (safe_lshift_func_int16_t_s_u(p_43, 4)))) | 0x06L) && p_1304->g_564))) < l_930.s3), ((VECTOR(int16_t, 8))(1L)), 0L, (-1L))))).sc013))).wxwzyywx)).s32))).yxyyxxyx, ((VECTOR(int16_t, 8))(0x747FL))))).s5) , p_1304->g_554.sd) | 1L) > l_933), ((VECTOR(uint64_t, 2))(0x698B8FDF37E2E28AL)), 18446744073709551615UL)), 0x93603E0D24A99525L, 0x3F1600C81F808469L)).s7, l_930.s2)), l_930.s7)), (-5L)))), 3L)) | p_1304->g_554.s6)), p_1304->g_comm_values[p_1304->tid])) ^ l_930.s5) && (*p_1304->g_613)) , 0x16E5156EL), p_1304->g_4));
            l_941++;
        }
        for (l_937 = 0; (l_937 != (-2)); --l_937)
        { /* block id: 457 */
            if (p_43)
                break;
        }
    }
    return p_1304->g_479[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_25 p_1304->g_64 p_1304->g_51 p_1304->g_8 p_1304->l_comm_values p_1304->g_86 p_1304->g_97 p_1304->g_comm_values p_1304->g_109 p_1304->g_478 p_1304->g_479 p_1304->g_484 p_1304->g_564 p_1304->g_526 p_1304->g_552 p_1304->g_601 p_1304->g_554 p_1304->g_567 p_1304->g_566 p_1304->g_613 p_1304->g_597 p_1304->g_637 p_1304->g_650 p_1304->g_132 p_1304->g_667 p_1304->g_670 p_1304->g_692 p_1304->g_549 p_1304->g_732 p_1304->g_739 p_1304->g_551 p_1304->g_5 p_1304->g_4 p_1304->g_771 p_1304->g_804
 * writes: p_1304->g_comm_values p_1304->g_64 p_1304->g_86 p_1304->g_132 p_1304->g_479 p_1304->g_484 p_1304->g_8 p_1304->g_564 p_1304->g_566 p_1304->g_526 p_1304->g_597 p_1304->g_554 p_1304->g_567 p_1304->g_637 p_1304->g_692 p_1304->g_551 p_1304->g_714 p_1304->g_739 p_1304->g_740 p_1304->g_742 p_1304->g_552 p_1304->g_670 p_1304->g_804 p_1304->g_811
 */
int32_t * func_46(uint32_t  p_47, uint8_t  p_48, struct S0 * p_1304)
{ /* block id: 12 */
    int32_t *l_63[6] = {&p_1304->g_64,(void*)0,&p_1304->g_64,&p_1304->g_64,(void*)0,&p_1304->g_64};
    VECTOR(int64_t, 16) l_67 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1721CB4F50F898D4L), 0x1721CB4F50F898D4L), 0x1721CB4F50F898D4L, (-1L), 0x1721CB4F50F898D4L, (VECTOR(int64_t, 2))((-1L), 0x1721CB4F50F898D4L), (VECTOR(int64_t, 2))((-1L), 0x1721CB4F50F898D4L), (-1L), 0x1721CB4F50F898D4L, (-1L), 0x1721CB4F50F898D4L);
    uint32_t l_70 = 5UL;
    int64_t *l_71 = (void*)0;
    int64_t *l_72 = (void*)0;
    int64_t *l_73 = (void*)0;
    int64_t *l_74 = (void*)0;
    int64_t *l_75 = (void*)0;
    int64_t *l_76 = (void*)0;
    int64_t *l_77 = (void*)0;
    int64_t *l_78 = (void*)0;
    int64_t *l_79 = (void*)0;
    int64_t *l_80 = (void*)0;
    int64_t *l_81 = (void*)0;
    int64_t *l_82 = (void*)0;
    int32_t **l_464 = &l_63[0];
    int8_t l_468 = 1L;
    uint8_t l_469 = 249UL;
    VECTOR(uint8_t, 16) l_553 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    VECTOR(uint8_t, 2) l_557 = (VECTOR(uint8_t, 2))(246UL, 0x45L);
    uint64_t **l_630 = &p_1304->g_613;
    uint16_t **l_756 = (void*)0;
    uint16_t *l_758 = &p_1304->g_739[0];
    uint16_t **l_757 = &l_758;
    uint16_t *l_759[1][8];
    VECTOR(int16_t, 8) l_760 = (VECTOR(int16_t, 8))(0x5F4DL, (VECTOR(int16_t, 4))(0x5F4DL, (VECTOR(int16_t, 2))(0x5F4DL, 0x4A23L), 0x4A23L), 0x4A23L, 0x5F4DL, 0x4A23L);
    uint8_t *l_772 = &p_1304->g_564;
    uint8_t *l_773[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint16_t, 16) l_779 = (VECTOR(uint16_t, 16))(0x4A4DL, (VECTOR(uint16_t, 4))(0x4A4DL, (VECTOR(uint16_t, 2))(0x4A4DL, 0x5FD8L), 0x5FD8L), 0x5FD8L, 0x4A4DL, 0x5FD8L, (VECTOR(uint16_t, 2))(0x4A4DL, 0x5FD8L), (VECTOR(uint16_t, 2))(0x4A4DL, 0x5FD8L), 0x4A4DL, 0x5FD8L, 0x4A4DL, 0x5FD8L);
    VECTOR(uint64_t, 2) l_788 = (VECTOR(uint64_t, 2))(0x1DB0D11090E35719L, 0x9B916DE902B51CC7L);
    int64_t **l_809 = &l_78;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_759[i][j] = &p_1304->g_479[4];
    }
    if ((0x6D9E8BD6L || (p_1304->g_25 != ((*l_464) = func_57((safe_rshift_func_uint16_t_u_u((((void*)0 != l_63[0]) ^ (p_1304->g_comm_values[p_1304->tid] = (p_1304->g_64 == ((((p_1304->g_51[4][4] , (safe_lshift_func_int16_t_s_u(((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_67.sed1e22517922c1e9)).lo)).s0 > ((((l_63[0] != (void*)0) != (safe_lshift_func_int16_t_s_s(p_48, l_70))) == p_48) && 18446744073709551606UL)) , p_1304->g_8.x), 14))) < 0L) < p_1304->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1304->tid, 95))]) | p_48)))), 5)), &p_1304->g_64, l_71, p_1304)))))
    { /* block id: 249 */
        int8_t l_465[10][7] = {{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L},{1L,(-1L),(-4L),0L,2L,2L,0L}};
        int32_t l_466 = (-1L);
        int32_t l_467[9][1][6] = {{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}},{{0x443B3BECL,0x443B3BECL,(-1L),(-2L),1L,7L}}};
        int i, j, k;
        ++l_469;
    }
    else
    { /* block id: 251 */
        (*l_464) = (*l_464);
    }
    if (p_1304->g_97.s5)
    { /* block id: 254 */
        return &p_1304->g_64;
    }
    else
    { /* block id: 256 */
        int8_t *l_491[6][9][4] = {{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}},{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}},{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}},{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}},{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}},{{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0},{(void*)0,(void*)0,&l_468,(void*)0}}};
        int32_t *l_492 = &p_1304->g_64;
        VECTOR(uint8_t, 4) l_558 = (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 251UL), 251UL);
        uint32_t l_561 = 0UL;
        uint64_t *l_611[1];
        VECTOR(uint32_t, 16) l_623 = (VECTOR(uint32_t, 16))(0xCE1D6919L, (VECTOR(uint32_t, 4))(0xCE1D6919L, (VECTOR(uint32_t, 2))(0xCE1D6919L, 0x21B51C94L), 0x21B51C94L), 0x21B51C94L, 0xCE1D6919L, 0x21B51C94L, (VECTOR(uint32_t, 2))(0xCE1D6919L, 0x21B51C94L), (VECTOR(uint32_t, 2))(0xCE1D6919L, 0x21B51C94L), 0xCE1D6919L, 0x21B51C94L, 0xCE1D6919L, 0x21B51C94L);
        VECTOR(int32_t, 16) l_668 = (VECTOR(int32_t, 16))(0x4684CE8AL, (VECTOR(int32_t, 4))(0x4684CE8AL, (VECTOR(int32_t, 2))(0x4684CE8AL, 0x601B47EDL), 0x601B47EDL), 0x601B47EDL, 0x4684CE8AL, 0x601B47EDL, (VECTOR(int32_t, 2))(0x4684CE8AL, 0x601B47EDL), (VECTOR(int32_t, 2))(0x4684CE8AL, 0x601B47EDL), 0x4684CE8AL, 0x601B47EDL, 0x4684CE8AL, 0x601B47EDL);
        VECTOR(int32_t, 16) l_683 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 8L), 8L), 8L, (-9L), 8L, (VECTOR(int32_t, 2))((-9L), 8L), (VECTOR(int32_t, 2))((-9L), 8L), (-9L), 8L, (-9L), 8L);
        int16_t l_743 = 0x7D81L;
        int32_t l_744 = 0x6596077EL;
        int16_t l_745 = 0x09C0L;
        int32_t l_746 = 0L;
        uint8_t l_747 = 249UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_611[i] = &p_1304->g_597;
        p_1304->g_8.x = (safe_mod_func_uint32_t_u_u((((*l_492) = (GROUP_DIVERGE(1, 1) || ((safe_mod_func_uint64_t_u_u(p_1304->g_51[4][4], (((p_48 ^ (p_48 , ((safe_mul_func_uint8_t_u_u((((p_1304->g_478 != ((p_1304->g_479[2] |= 4294967291UL) , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0x58L, 2)), (p_1304->g_484.w = ((VECTOR(int8_t, 8))(p_1304->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1304->tid, 95))], (-1L), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1304->g_484.wwyy)), ((((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(1UL, (safe_sub_func_int64_t_s_s((p_48 & 0x1AC52782119C3361L), p_47)))), 0x78AA142DL)) < p_48) >= 8L) || p_1304->g_86.sc), ((VECTOR(int8_t, 2))(0x29L)), 0x50L)).s6522335016403056)).odd)).lo)).ywywzyzy, ((VECTOR(int8_t, 8))(0x7AL)), ((VECTOR(int8_t, 8))(0L))))).odd, ((VECTOR(int8_t, 4))(0x30L)), ((VECTOR(int8_t, 4))((-1L)))))), 0x5BL, 0x23L)).s5))) , l_79))) , (void*)0) == l_492), (*l_492))) <= p_1304->g_8.x))) == p_48) && p_47))) & p_47))) != 0x047A4CCAL), 0x7C36A7FCL));
        for (p_1304->g_64 = 24; (p_1304->g_64 <= (-30)); --p_1304->g_64)
        { /* block id: 263 */
            int64_t l_532 = (-8L);
            int32_t l_535 = 0x40F50F79L;
            uint64_t *l_587 = &p_1304->g_51[4][1];
            VECTOR(int64_t, 4) l_602 = (VECTOR(int64_t, 4))(0x203C1808FA6C4C37L, (VECTOR(int64_t, 2))(0x203C1808FA6C4C37L, 0x2E310EDFCE04A021L), 0x2E310EDFCE04A021L);
            VECTOR(int32_t, 4) l_610 = (VECTOR(int32_t, 4))(0x48AB5AB8L, (VECTOR(int32_t, 2))(0x48AB5AB8L, 0x3F0E7862L), 0x3F0E7862L);
            VECTOR(uint32_t, 4) l_614 = (VECTOR(uint32_t, 4))(0x6835E9C3L, (VECTOR(uint32_t, 2))(0x6835E9C3L, 0x0058A3A2L), 0x0058A3A2L);
            int i;
            if ((atomic_inc(&p_1304->g_atomic_input[54 * get_linear_group_id() + 2]) == 8))
            { /* block id: 265 */
                int32_t l_496 = 0x4E56962FL;
                int32_t *l_495 = &l_496;
                int32_t *l_497 = (void*)0;
                int32_t *l_498 = &l_496;
                int32_t l_512 = 0x1CC9F0C3L;
                l_498 = (l_497 = l_495);
                for (l_496 = (-27); (l_496 > 4); l_496 = safe_add_func_uint16_t_u_u(l_496, 2))
                { /* block id: 270 */
                    int32_t l_501 = (-1L);
                    for (l_501 = 0; (l_501 >= (-23)); l_501 = safe_sub_func_uint32_t_u_u(l_501, 1))
                    { /* block id: 273 */
                        int32_t l_504 = 0x184BFC3EL;
                        int32_t l_505 = 0L;
                        int32_t l_506 = (-10L);
                        int32_t l_507 = (-6L);
                        uint32_t l_508 = 0UL;
                        int32_t *l_511 = &l_504;
                        l_508++;
                        l_497 = (void*)0;
                        l_495 = l_511;
                    }
                }
                l_512 = 1L;
                for (l_496 = 1; (l_496 <= 24); ++l_496)
                { /* block id: 282 */
                    uint32_t l_515 = 4294967294UL;
                    int8_t l_516 = 0x01L;
                    int64_t l_517 = 0x09470090F957ED17L;
                    VECTOR(uint8_t, 16) l_518 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 1UL), 1UL), 1UL, 247UL, 1UL, (VECTOR(uint8_t, 2))(247UL, 1UL), (VECTOR(uint8_t, 2))(247UL, 1UL), 247UL, 1UL, 247UL, 1UL);
                    uint16_t l_521 = 1UL;
                    int i;
                    l_516 = l_515;
                    l_518.s4--;
                    l_512 = l_521;
                }
                unsigned int result = 0;
                result += l_496;
                result += l_512;
                atomic_add(&p_1304->g_special_values[54 * get_linear_group_id() + 2], result);
            }
            else
            { /* block id: 287 */
                (1 + 1);
            }
            for (p_1304->g_132 = 12; (p_1304->g_132 >= 3); p_1304->g_132 = safe_sub_func_int16_t_s_s(p_1304->g_132, 5))
            { /* block id: 292 */
                int64_t *l_536 = &l_532;
                int32_t l_563 = 0x6EC44C49L;
                if (((18446744073709551615UL != (p_47 < (*l_492))) || ((((safe_mul_func_uint16_t_u_u(((((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_1304->g_526.yx)), 0x8136E3AC6AC439D6L, (3L != p_47), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551610UL, 0x69F8C20F21BA38A8L)), 18446744073709551615UL)).s47)), 4UL, 0x3DB996CF607EA0D4L)).z > ((*l_536) = ((((VECTOR(int32_t, 8))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(p_1304->g_527.s701c68682778d7e8)).s8f, (int64_t)0L, (int64_t)(l_535 ^= ((p_1304->g_86.sb ^= 0L) >= (safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((p_1304->g_484.x ^= (l_532 && ((safe_lshift_func_int8_t_s_u(p_1304->g_64, p_47)) < p_1304->g_527.sb))), 0x5EL)), p_48))))))), 0x2710649A6E7F0856L, 0L)).yxxwxwzz, ((VECTOR(int64_t, 8))(0L))))).s67))), 0x8AF56D2388C13D27L, 18446744073709551615UL)).y || 0x3CC7D0B3BC558C8EL), ((VECTOR(int32_t, 4))((-3L))), 1L, (-7L), 0x192603BFL)).s4 < p_48) | l_532))) , 0x2724L) > 8L) > p_1304->g_64) , (void*)0) == (void*)0), 0x3C52L)) ^ 0x2369L) && 7UL) ^ 0xB7L)))
                { /* block id: 297 */
                    VECTOR(uint8_t, 2) l_550 = (VECTOR(uint8_t, 2))(0x13L, 0x87L);
                    int i;
                    for (l_468 = 0; (l_468 != (-30)); l_468 = safe_sub_func_int16_t_s_s(l_468, 2))
                    { /* block id: 300 */
                        VECTOR(uint8_t, 16) l_556 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                        uint8_t *l_559 = (void*)0;
                        uint8_t *l_560 = &l_469;
                        uint64_t *l_562 = &p_1304->g_51[4][4];
                        int32_t *l_565 = (void*)0;
                        int i;
                        p_1304->g_564 ^= (safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), p_47)) , ((~(safe_lshift_func_uint16_t_u_u((((*l_560) = ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(p_1304->g_484.w, ((VECTOR(uint8_t, 2))(p_1304->g_549.yy)), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(l_550.xyxy)), (uint8_t)(l_532 , p_47)))), 0x72L)).s43, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1304->g_551.ww)).yyxxyxxyyyyxxyyy)).s0c12, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(p_1304->g_552.s3cf17912)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(l_553.s3773a7327f15a9f3)).se9, ((VECTOR(uint8_t, 4))(p_1304->g_554.s0297)).hi))))), ((VECTOR(uint8_t, 4))(p_1304->g_555.zwzz)), 0UL)).saf7f))))), ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_556.sf7b0eb3a)).s3202752534675347)))).sa8)).yyyxyyyxyyyyyxyy)).s956d)).yywwwxwzwxzyyywz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_557.yyyx)).even)).xxyxyyyxyxxxxyyy))).s59b2))).yxzxwyzw)).s75, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_558.wz))))))).xyyyxxxx)).s55))).even) > l_561), 9))) , 0x4AEE551B63CE6F0FL)) >= ((l_562 == (void*)0) < 0x483A46C5FB1D5A6DL)), p_48)), l_563));
                        p_1304->g_566 = l_565;
                        return l_565;
                    }
                }
                else
                { /* block id: 306 */
                    for (p_1304->g_564 = 0; (p_1304->g_564 <= 51); p_1304->g_564++)
                    { /* block id: 309 */
                        int32_t *l_570 = (void*)0;
                        return l_570;
                    }
                    for (p_47 = 0; (p_47 <= 45); p_47 = safe_add_func_int64_t_s_s(p_47, 6))
                    { /* block id: 314 */
                        int32_t *l_573 = (void*)0;
                        (*l_464) = l_573;
                        p_1304->g_566 = &p_1304->g_64;
                    }
                }
                for (p_47 = 0; (p_47 < 35); p_47 = safe_add_func_uint64_t_u_u(p_47, 1))
                { /* block id: 321 */
                    VECTOR(uint16_t, 2) l_576 = (VECTOR(uint16_t, 2))(1UL, 0x47E1L);
                    int i;
                    ++l_576.x;
                }
                if ((*l_492))
                    continue;
            }
            (*l_464) = &l_535;
            for (l_535 = 15; (l_535 == 14); l_535--)
            { /* block id: 329 */
                uint64_t **l_588 = (void*)0;
                uint64_t *l_589 = &p_1304->g_51[4][4];
                uint64_t *l_596[5][3] = {{&p_1304->g_597,&p_1304->g_597,&p_1304->g_597},{&p_1304->g_597,&p_1304->g_597,&p_1304->g_597},{&p_1304->g_597,&p_1304->g_597,&p_1304->g_597},{&p_1304->g_597,&p_1304->g_597,&p_1304->g_597},{&p_1304->g_597,&p_1304->g_597,&p_1304->g_597}};
                VECTOR(int8_t, 4) l_600 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x13L), 0x13L);
                uint32_t *l_603 = &l_70;
                uint16_t l_604 = 65527UL;
                uint8_t *l_605 = &p_1304->g_564;
                uint8_t *l_606 = (void*)0;
                uint8_t *l_607 = (void*)0;
                uint8_t *l_608 = (void*)0;
                int32_t l_609 = (-1L);
                uint64_t **l_612[7] = {&l_596[4][0],&l_596[4][0],&l_596[4][0],&l_596[4][0],&l_596[4][0],&l_596[4][0],&l_596[4][0]};
                int32_t **l_615 = &p_1304->g_566;
                uint8_t l_618 = 0x7FL;
                int i, j;
                p_1304->g_567 ^= (safe_sub_func_uint64_t_u_u((((((p_1304->g_554.sa ^= (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((l_609 &= ((*l_605) ^= ((l_587 == (l_589 = (void*)0)) , (((void*)0 == &p_1304->g_51[6][4]) | (l_532 | ((safe_mod_func_int16_t_s_s(((p_47 | (((p_48 & (p_1304->g_597 = (++p_1304->g_526.y))) , l_587) == (((*l_603) = ((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1304->group_1_offset, get_group_id(1), 10), ((VECTOR(int8_t, 16))(l_600.wxwzxyzwyyxyxzzy)).sc)) | ((VECTOR(int64_t, 4))((-10L), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(p_1304->g_601.s5546)).odd, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_602.wzyyyyzy)).s34)))).yxyyxxxxxxyyxyxx)).s57))), 1L)).w)) , (((p_1304->g_552.s9 & l_600.x) != p_1304->g_601.s4) , &p_1304->g_51[4][4])))) , l_604), p_1304->g_51[4][4])) , 0x079A8CD5BD7FCAA7L)))))), p_48)) == p_47) && (*l_492)), 3))) != p_47) > 0xEEL) && p_1304->g_51[0][5]) ^ 4294967289UL), p_48));
                if ((*p_1304->g_566))
                    break;
                l_609 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_610.zzyzwxyxxywyxwwx)).sbcff, ((VECTOR(int32_t, 16))(((((+(-9L)) | (((p_1304->g_613 = l_611[0]) != l_611[0]) >= (p_48 && 0xB4L))) , 6UL) < ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 4294967294UL)), 2UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_614.zwwx)))), 7UL, ((VECTOR(uint32_t, 2))(0x35B516C0L, 0x7F285153L)), (((((void*)0 != l_615) , p_1304->g_616) != &l_587) || l_602.z), ((VECTOR(uint32_t, 2))(0xE88D3610L)), ((VECTOR(uint32_t, 2))(0xE8FBFCECL)), 0x8CD10B71L)), ((VECTOR(uint32_t, 16))(0x93DC31C1L)), ((VECTOR(uint32_t, 16))(4294967291UL))))).sb8, ((VECTOR(uint32_t, 2))(0x3513886DL))))).even), 8L, 1L, 0x79B8CF87L, 5L, 0x2B034802L, ((VECTOR(int32_t, 2))((-10L))), l_618, 1L, (*p_1304->g_566), 0L, 0x3C14B045L, 0x6E729910L, 0x61F2A764L, 0x6D8214CAL)).sdea2))).yywzyxwxyyywyzyz)).sf;
            }
        }
        if (((*p_1304->g_613) & ((p_48 != p_1304->g_97.s6) < (safe_mul_func_int8_t_s_s((-1L), (safe_mod_func_int32_t_s_s((l_623.se ^ (p_1304->g_479[2] ^ (safe_add_func_uint16_t_u_u(p_1304->g_479[3], ((*l_492) > (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((l_630 == l_630), p_1304->g_554.s9)), (*l_492)))))))), 4294967295UL)))))))
        { /* block id: 343 */
            uint8_t l_635 = 3UL;
            int32_t l_656 = 0x1BD63E0DL;
            int64_t *l_660 = (void*)0;
            int64_t l_713 = 0x3E6AF8F5EB61A177L;
            for (p_1304->g_567 = 23; (p_1304->g_567 == 6); p_1304->g_567 = safe_sub_func_int8_t_s_s(p_1304->g_567, 3))
            { /* block id: 346 */
                int16_t *l_636 = &p_1304->g_637;
                int64_t *l_655[1][5][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_657 = (-1L);
                int64_t **l_661 = &l_655[0][0][4];
                VECTOR(int32_t, 8) l_669 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1EB3F07EL), 0x1EB3F07EL), 0x1EB3F07EL, 1L, 0x1EB3F07EL);
                int32_t l_707[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                l_657 ^= ((safe_div_func_uint16_t_u_u(0x1910L, 0x011CL)) ^ (((*l_492) || (((*l_636) ^= l_635) ^ (safe_sub_func_int8_t_s_s(p_1304->g_484.y, (safe_sub_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((0x32L & (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1304->g_650.s1266015174205302)).s7f)).even ^ ((0x03D73649E683EF88L <= (l_656 = (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_47, 2UL)) || 0xB1E1F1233A4267C5L), 0x5797L)))) != (*p_1304->g_566))), p_48)), p_1304->g_109))), p_48)), GROUP_DIVERGE(1, 1))), p_1304->g_132)))))) , 0UL));
                l_657 = (l_656 = (((*l_492) ^= ((&p_47 == (void*)0) <= (((safe_sub_func_int16_t_s_s(((*l_636) = 0x0D95L), l_657)) == (-1L)) , (l_611[0] != ((*l_661) = l_660))))) , 0x4C52AD2CL));
                for (p_47 = 18; (p_47 != 20); ++p_47)
                { /* block id: 357 */
                    uint16_t l_664[4][5] = {{65535UL,7UL,7UL,65535UL,65535UL},{65535UL,7UL,7UL,65535UL,65535UL},{65535UL,7UL,7UL,65535UL,65535UL},{65535UL,7UL,7UL,65535UL,65535UL}};
                    uint32_t *l_708 = &l_70;
                    uint32_t *l_709 = (void*)0;
                    uint32_t *l_710[3];
                    int32_t l_711 = 0x06C4A942L;
                    int32_t l_712 = 0x1FD50B9EL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_710[i] = (void*)0;
                    l_664[2][3]++;
                    l_657 = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x197A3783L, 0x36A7599BL)))).yxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))((-1L), 1L)).xxxx, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(p_1304->g_667.sff305981eb3e768a)).even, ((VECTOR(int32_t, 4))(l_668.s2956)).xzxzyyyz))).hi, ((VECTOR(int32_t, 16))(l_669.s6366365733502632)).s59c7))).xzzxwzww))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x7AE9897EL, 1L)))).xxyxyyxx))).s55)).xyyxxyxxxyyxxyxy)).s5f7e))).zyxxyyxy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(p_1304->g_670.s50462436)).s64, (int32_t)(safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((p_1304->g_714 = ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((((VECTOR(int32_t, 2))(l_683.s9d)).lo || ((*l_492) = (safe_mod_func_uint64_t_u_u(((4294967295UL == (GROUP_DIVERGE(0, 1) < (l_656 = (safe_div_func_uint32_t_u_u((((VECTOR(uint16_t, 4))((safe_lshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u((*p_1304->g_613), (p_1304->g_692.x = ((VECTOR(uint64_t, 2))(p_1304->g_692.yx)).odd))) && (safe_rshift_func_int8_t_s_u((p_1304->g_484.x = ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((l_712 = (l_711 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(l_707[5], (((*l_708) = l_707[5]) & (((((p_1304->g_551.x = ((l_669.s3 |= ((*l_492) , (*l_492))) , p_48)) < ((l_664[2][3] > (+(p_1304->g_692.y = ((*p_1304->g_613) = ((((void*)0 == &p_1304->g_567) , (*p_1304->g_613)) , l_664[2][1]))))) == (*p_1304->g_566))) ^ (-9L)) && p_1304->g_64) , p_47)))) , 0xD7C340CBE868DD62L), 0xDD9A21E395059E8CL)) <= p_48), 10)))) && (*l_492)), (*p_1304->g_566))) != l_656) | 1UL), p_47)), l_713)) > 0x238E9D0B83653396L)), 2))), p_1304->g_479[4])), ((VECTOR(uint16_t, 2))(65530UL)), 1UL)).y > p_47), p_47))))) == 1L), 1L)))) >= GROUP_DIVERGE(1, 1)), p_47)), 10)) , (*p_1304->g_566)), l_664[2][3])) >= p_48)) >= p_48), p_1304->g_549.y)), GROUP_DIVERGE(0, 1))), p_1304->g_86.sd))))).yyyyxyyyxxxxyxyy)).hi))))).s5;
                    if (p_48)
                        continue;
                }
            }
        }
        else
        { /* block id: 375 */
            uint32_t l_723 = 0x29FA5238L;
            int16_t *l_735[1];
            int32_t l_736 = 0x32C06137L;
            uint16_t *l_737 = &p_1304->g_479[2];
            uint16_t *l_738 = &p_1304->g_739[0];
            int32_t *l_741 = &p_1304->g_742;
            int i;
            for (i = 0; i < 1; i++)
                l_735[i] = (void*)0;
            (*l_492) = ((((*l_741) = (((((FAKE_DIVERGE(p_1304->local_2_offset, get_local_id(2), 10) < ((safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((*l_492), (safe_lshift_func_uint8_t_u_u(((p_1304->g_740 = (safe_rshift_func_uint16_t_u_u(((*l_738) |= ((*l_737) = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x1B84L, ((((((l_683.s3 = l_723) > (safe_mod_func_uint16_t_u_u(1UL, p_1304->g_484.w))) && (1L | ((l_736 = (safe_mul_func_int16_t_s_s((l_723 | (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1304->g_732.xyxxxyyxxxxxxxyx)).sfc)).even, (safe_rshift_func_int8_t_s_u(p_1304->g_132, 3)))), ((((&p_1304->g_51[4][4] == (void*)0) == (*p_1304->g_566)) , (void*)0) != l_492)))), l_723))) && p_48))) , 0xF33837B4L) , 0UL) < p_47), 0UL, 0x55D2L)).zwwwzyxyyxyywwww)).sa)), p_47))) == p_48), l_723)))) , p_47) == (*p_1304->g_566)), p_48)) > l_723)) , p_1304->g_64) , p_1304->g_551.y) , l_735[0]) == &p_1304->g_637)) , l_736) < p_48);
        }
        ++l_747;
    }
    p_1304->g_670.s4 = ((p_1304->g_552.s7 &= ((*l_772) = (safe_rshift_func_uint16_t_u_u(((p_1304->g_5 < (((p_1304->g_86.s1 = ((safe_add_func_int64_t_s_s((((*l_757) = &p_1304->g_479[0]) == l_759[0][3]), (p_48 != (((*p_1304->g_566) = (((VECTOR(int16_t, 8))(l_760.s71567436)).s4 & ((&l_468 == (void*)0) & (safe_div_func_uint32_t_u_u(((((((FAKE_DIVERGE(p_1304->local_1_offset, get_local_id(1), 10) != (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((p_1304->g_4 , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(252UL, 8UL)))).yxyy, (uint8_t)(((safe_mul_func_int16_t_s_s(p_48, ((safe_mod_func_uint8_t_u_u(0x98L, p_47)) | p_1304->g_771))) , 4294967295UL) > p_48)))).yzxxxyyy)).odd)).wywxwyxxxzzyyxxw)).se1)).odd) , p_1304->g_51[1][4]) > p_1304->g_551.w), p_1304->g_670.s7)), 0xE10EBBD21A43C79CL))) , 0L) & 0x670AL) ^ p_1304->g_739[0]) || p_48) , 0UL), p_1304->g_comm_values[p_1304->tid]))))) >= p_47)))) == GROUP_DIVERGE(0, 1))) < p_1304->g_692.y) <= p_48)) == p_48), p_1304->g_637)))) & p_1304->g_551.z);
    for (l_70 = (-11); (l_70 != 30); l_70 = safe_add_func_int64_t_s_s(l_70, 2))
    { /* block id: 394 */
        uint32_t l_789 = 4UL;
        uint64_t *l_792 = &p_1304->g_51[4][5];
        int16_t *l_793 = &p_1304->g_637;
        VECTOR(int16_t, 8) l_796 = (VECTOR(int16_t, 8))(0x0DB5L, (VECTOR(int16_t, 4))(0x0DB5L, (VECTOR(int16_t, 2))(0x0DB5L, 0x6DF8L), 0x6DF8L), 0x6DF8L, 0x0DB5L, 0x6DF8L);
        VECTOR(int8_t, 4) l_797 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x65L), 0x65L);
        VECTOR(uint8_t, 8) l_798 = (VECTOR(uint8_t, 8))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 0xB5L), 0xB5L), 0xB5L, 0x4DL, 0xB5L);
        uint32_t *l_803[10][3] = {{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804},{&p_1304->g_804,&p_1304->g_804,&p_1304->g_804}};
        int32_t l_805 = (-3L);
        int32_t l_806 = 5L;
        int64_t ***l_810[6][6] = {{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809},{&l_809,&l_809,&l_809,&l_809,&l_809,&l_809}};
        int8_t *l_812 = (void*)0;
        int i, j;
        for (l_468 = 1; (l_468 > 15); ++l_468)
        { /* block id: 397 */
            int64_t l_778 = (-1L);
            (*p_1304->g_566) = (l_778 == ((VECTOR(uint16_t, 2))(l_779.seb)).hi);
        }
        (*p_1304->g_566) |= (safe_div_func_uint64_t_u_u((--(*p_1304->g_613)), (safe_rshift_func_uint16_t_u_s(((*l_758) = (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(l_788.yy)).xxxxyyxy, ((VECTOR(uint64_t, 8))(0x5D4DB284E89C58BAL, 0xA910E3BB9BAADA92L, 0UL, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(18446744073709551615UL, ((VECTOR(uint64_t, 2))(0x4E628547DD7BBEF4L, 0x4FB431B8705927AAL)), (4UL < (~(((p_1304->g_692.x <= l_789) >= p_47) | ((((*l_793) ^= (safe_sub_func_int32_t_s_s((l_792 == l_792), l_789))) | p_1304->g_551.z) , l_789)))), ((VECTOR(uint64_t, 4))(8UL)), ((VECTOR(uint64_t, 4))(1UL)), p_48, 18446744073709551611UL, 0xF85D8729FB320D60L, 0x8D81E324C2C611ACL)).sfd2e, ((VECTOR(uint64_t, 4))(0UL))))).hi, ((VECTOR(uint64_t, 2))(18446744073709551606UL))))), ((VECTOR(uint64_t, 2))(2UL)), 18446744073709551610UL))))).s53)).odd, l_789))), 15))));
        (*l_464) = func_57((safe_mod_func_int16_t_s_s(0x2838L, ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_796.s02630172)))).odd, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))((-1L), p_48, 0L, 0x5C59L, 0x7200L, (-1L), 1L, 0L)), ((VECTOR(int16_t, 2))((-7L), 0x3419L)).yyyyyxxx))).s54)).yxyx, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(l_797.wy)).yxxxxyyyxyxxxyyy, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_798.s16005571)).s63, ((VECTOR(uint8_t, 2))(0x7AL, 255UL))))).yxxxxxyxxxxxxxxx))).s5e71))).x)), ((FAKE_DIVERGE(p_1304->local_0_offset, get_local_id(0), 10) < (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((p_1304->g_804--) , &l_76) == (p_1304->g_811 = l_809)), 12)) , ((void*)0 == l_812)), 15))) , ((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(0x5D47F3FF3A45F3CBL, (-1L))).even, ((-1L) && (p_47 ^ ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_48, p_1304->g_552.sd, p_1304->g_601.s7, 5UL, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 4))(0xCA440C7AL)), ((VECTOR(uint32_t, 2))(0x9B7A9FF8L)), p_1304->g_555.z, l_796.s3, 0xF4E37FC3L, 0x52C680B0L)).s019a)).w)))), p_47)), 9UL)) , &l_806)), l_792, p_1304);
    }
    return &p_1304->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_1304->g_86 p_1304->g_64 p_1304->g_97 p_1304->g_comm_values p_1304->g_109 p_1304->g_8 p_1304->g_51
 * writes: p_1304->g_64 p_1304->g_86 p_1304->g_132
 */
int32_t * func_57(int8_t  p_58, int32_t * p_59, uint64_t * p_60, struct S0 * p_1304)
{ /* block id: 14 */
    uint64_t l_85 = 18446744073709551613UL;
    int8_t l_89[2][8] = {{0x51L,(-1L),0x51L,0x51L,(-1L),0x51L,0x51L,(-1L)},{0x51L,(-1L),0x51L,0x51L,(-1L),0x51L,0x51L,(-1L)}};
    VECTOR(uint32_t, 16) l_90 = (VECTOR(uint32_t, 16))(0x5C5CB2EAL, (VECTOR(uint32_t, 4))(0x5C5CB2EAL, (VECTOR(uint32_t, 2))(0x5C5CB2EAL, 0x7198010EL), 0x7198010EL), 0x7198010EL, 0x5C5CB2EAL, 0x7198010EL, (VECTOR(uint32_t, 2))(0x5C5CB2EAL, 0x7198010EL), (VECTOR(uint32_t, 2))(0x5C5CB2EAL, 0x7198010EL), 0x5C5CB2EAL, 0x7198010EL, 0x5C5CB2EAL, 0x7198010EL);
    int32_t *l_108 = &p_1304->g_64;
    int32_t **l_110 = &l_108;
    uint8_t l_113 = 0UL;
    uint8_t l_118[5][4][2] = {{{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL}},{{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL}},{{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL}},{{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL}},{{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL},{0UL,0xFBL}}};
    int64_t *l_123 = (void*)0;
    uint64_t *l_130 = (void*)0;
    uint64_t *l_131[6][2];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_131[i][j] = &l_85;
    }
    (*p_59) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-10L), ((safe_add_func_uint8_t_u_u((l_85 = ((void*)0 == p_60)), (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1304->g_86.sb6)))).hi && (safe_div_func_uint64_t_u_u((((p_1304->g_86.s9 , (*p_59)) == (l_89[0][7] , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_90.s05d1)))))).z)) ^ (safe_mul_func_int8_t_s_s(((p_58 && (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_89[0][7], ((VECTOR(int64_t, 2))(p_1304->g_97.s76)).odd)), 1))) == (safe_sub_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((p_1304->g_comm_values[p_1304->tid] ^ l_89[0][0]), p_58)) != p_58) , GROUP_DIVERGE(2, 1)), p_1304->g_86.s0)) <= p_58), 1)), l_90.sb)) , l_108) == (void*)0) , p_1304->g_109) , GROUP_DIVERGE(1, 1)), 0L))), p_58))), 0x40C4DA8BF394C470L))))) <= p_58), (*p_59), 0x74060984L, ((VECTOR(int32_t, 4))(0x1C840D7AL)))).s2630171750605664)).lo)).s4416660413347456)).hi)).s5;
    (*l_110) = &p_1304->g_64;
    if ((safe_sub_func_int32_t_s_s(((p_1304->g_132 = (l_113 || ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((void*)0 == &p_1304->g_64), (safe_add_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(l_118[2][1][1], (**l_110))) | ((safe_rshift_func_int16_t_s_u((((((VECTOR(int64_t, 4))((-4L), (p_1304->g_86.sa = ((VECTOR(int64_t, 4))((safe_rshift_func_int8_t_s_u((-1L), 5)), ((VECTOR(int64_t, 2))(0L, 0x0ECEC35015C65D34L)), 0L)).x), 0L, (-8L))).x | (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((-1L) < (safe_sub_func_uint16_t_u_u((+p_58), ((+p_1304->g_8.y) , p_1304->g_51[4][4])))), 0x04L)), (-7L)))) != 0L) | (**l_110)), p_58)) , (**l_110))), GROUP_DIVERGE(1, 1))), 1L, (-8L))), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x152B13B0L))))).x)) <= (*l_108)), p_1304->g_51[4][4])))
    { /* block id: 20 */
        (**l_110) = (p_58 ^ (*l_108));
    }
    else
    { /* block id: 22 */
        for (l_85 = 0; (l_85 == 17); l_85++)
        { /* block id: 25 */
            if ((atomic_inc(&p_1304->l_atomic_input[10]) == 5))
            { /* block id: 27 */
                int32_t l_135 = 0x4FBB67B2L;
                int16_t l_176 = (-7L);
                uint16_t l_177 = 0xF5FFL;
                uint32_t l_178 = 0x6403DF32L;
                int32_t *l_203 = &l_135;
                int32_t *l_204 = &l_135;
                for (l_135 = 0; (l_135 >= 10); ++l_135)
                { /* block id: 30 */
                    int32_t l_138 = 0L;
                    for (l_138 = (-25); (l_138 == (-5)); ++l_138)
                    { /* block id: 33 */
                        int8_t l_141 = 0x62L;
                        int8_t l_142 = 9L;
                        int32_t l_143 = 0x7F7094B0L;
                        int64_t l_144 = 0x4AEA256EE4573DCFL;
                        uint8_t l_145 = 0x64L;
                        int64_t l_148 = 8L;
                        VECTOR(int32_t, 8) l_149 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        VECTOR(int32_t, 8) l_150 = (VECTOR(int32_t, 8))(0x71503024L, (VECTOR(int32_t, 4))(0x71503024L, (VECTOR(int32_t, 2))(0x71503024L, 0x12637514L), 0x12637514L), 0x12637514L, 0x71503024L, 0x12637514L);
                        VECTOR(int32_t, 16) l_151 = (VECTOR(int32_t, 16))(0x24172394L, (VECTOR(int32_t, 4))(0x24172394L, (VECTOR(int32_t, 2))(0x24172394L, 0L), 0L), 0L, 0x24172394L, 0L, (VECTOR(int32_t, 2))(0x24172394L, 0L), (VECTOR(int32_t, 2))(0x24172394L, 0L), 0x24172394L, 0L, 0x24172394L, 0L);
                        VECTOR(uint32_t, 4) l_152 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967288UL), 4294967288UL);
                        VECTOR(uint32_t, 8) l_153 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xC189EFAFL), 0xC189EFAFL), 0xC189EFAFL, 4294967292UL, 0xC189EFAFL);
                        VECTOR(uint32_t, 2) l_154 = (VECTOR(uint32_t, 2))(0x78D04C5EL, 0UL);
                        VECTOR(int32_t, 4) l_155 = (VECTOR(int32_t, 4))(0x028D9300L, (VECTOR(int32_t, 2))(0x028D9300L, 0x10CB638BL), 0x10CB638BL);
                        uint16_t l_156[3][3][4] = {{{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L}},{{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L}},{{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L},{0x2102L,0xFEE9L,0xFEE9L,0x2102L}}};
                        uint32_t l_157 = 0x78477E6EL;
                        uint16_t l_158 = 0x03EBL;
                        int64_t l_159 = (-1L);
                        uint64_t l_160 = 1UL;
                        VECTOR(int32_t, 4) l_161 = (VECTOR(int32_t, 4))(0x3CBDF4B4L, (VECTOR(int32_t, 2))(0x3CBDF4B4L, 0x6AD958E1L), 0x6AD958E1L);
                        uint8_t l_162 = 0xFAL;
                        uint32_t l_163 = 0x64F9C2C9L;
                        uint32_t l_164[8][7][4] = {{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}},{{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL},{0xF5253A83L,5UL,0UL,5UL}}};
                        uint16_t l_165 = 65531UL;
                        int32_t l_166[7][6][1] = {{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}},{{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L},{0x5C891F83L}}};
                        uint32_t l_167 = 4294967295UL;
                        int64_t l_168[4][2][9] = {{{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L},{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L}},{{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L},{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L}},{{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L},{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L}},{{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L},{0x253E1635C7AEBA48L,0x5942F1CC1EF98699L,0x73A9DBB096D4882EL,0x26299ED92AE5AED9L,0x5942F1CC1EF98699L,0x26299ED92AE5AED9L,0x73A9DBB096D4882EL,0x5942F1CC1EF98699L,0x253E1635C7AEBA48L}}};
                        int32_t l_169[5];
                        uint32_t l_170 = 0xDBE89911L;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_169[i] = 0x7EA0E908L;
                        ++l_145;
                        l_169[3] = (l_151.sc = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x370524A1L, ((VECTOR(int32_t, 8))((l_148 ^= 0x7D73F8B2L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_149.s0460505324362161)).sf3cf)), ((VECTOR(int32_t, 2))(0x739FF1EAL, (-1L))), (-1L))), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_150.s0541006737656152)).s86, ((VECTOR(int32_t, 8))(l_151.s3b2c2567)).s71, ((VECTOR(int32_t, 16))((((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_152.yxzzyxxwwywzxxzw)).sff)), ((VECTOR(uint32_t, 8))(FAKE_DIVERGE(p_1304->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_153.s6771)).hi)))), 4294967295UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_154.xyxx)).hi)), 0x7D9D0DECL, 0xE98D5FDBL)).s64))).hi , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_155.zwzz)), l_156[0][1][0], (l_158 = l_157), (l_160 ^= l_159), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(0x08FD3826L, 1L)).xyyyxxxy, ((VECTOR(int32_t, 2))(0x730BC104L, (-1L))).xxyxxxxx))))).s10, ((VECTOR(int32_t, 2))(l_161.xw))))), 0x1B8A4D6DL, l_162, ((VECTOR(int32_t, 2))((-1L), (-8L))), ((VECTOR(int32_t, 2))((-1L), 0x78119176L)), 0x58918311L)).s2 , (l_167 = (l_166[5][4][0] = (l_163 , (l_164[7][5][3] , l_165)))))), 0x21386D8FL, 0x6AA75BC9L, 0L, 1L, 0x4EBC73C5L, 0x14BBEC01L, 0x13031956L, 0L, ((VECTOR(int32_t, 4))(0x0C68C705L)), l_168[3][0][0], 0x2E4CAB56L, 0x16E28CD3L)).s86))), 0L, 0x3383223AL, 0x368BE60AL, 0L, 1L)).sbdea)).lo)).hi);
                        l_170--;
                    }
                    for (l_138 = (-13); (l_138 != (-9)); ++l_138)
                    { /* block id: 46 */
                        int32_t l_175 = 0x190E703EL;
                        l_175 = 0x585397BBL;
                    }
                }
                if ((l_176 , (l_178 = l_177)))
                { /* block id: 51 */
                    int64_t l_179 = 0x41315DE78DB23535L;
                    uint8_t l_180[9];
                    int8_t l_183 = 0x4EL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_180[i] = 246UL;
                    l_180[2]--;
                    l_135 = l_183;
                }
                else
                { /* block id: 54 */
                    int32_t l_184 = 0x2F1ED599L;
                    uint16_t l_185[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_185[i] = 0x0672L;
                    if (((l_185[0] = l_184) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x561C6BE3L, 1L)).xyyyxxyx)).hi)).w))
                    { /* block id: 56 */
                        uint64_t l_186 = 0x92D3BF737D9CE7F4L;
                        int32_t l_188 = (-10L);
                        int32_t *l_187[4][7] = {{&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188},{&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188},{&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188},{&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188}};
                        int32_t *l_189 = &l_188;
                        int32_t *l_190 = &l_188;
                        int i, j;
                        l_135 = ((VECTOR(int32_t, 2))((-5L), 5L)).odd;
                        l_190 = (l_189 = (l_186 , (l_187[2][1] = (void*)0)));
                    }
                    else
                    { /* block id: 61 */
                        int32_t l_191 = 0x4AC2623AL;
                        int8_t l_192 = 0x50L;
                        uint64_t l_193 = 18446744073709551610UL;
                        l_193++;
                    }
                    for (l_184 = 6; (l_184 <= 26); l_184 = safe_add_func_uint16_t_u_u(l_184, 3))
                    { /* block id: 66 */
                        uint16_t l_198 = 0x2433L;
                        int32_t l_199 = 6L;
                        uint32_t l_200 = 0x0EB34223L;
                        l_135 = l_198;
                        l_200--;
                    }
                }
                l_204 = l_203;
                unsigned int result = 0;
                result += l_135;
                result += l_176;
                result += l_177;
                result += l_178;
                atomic_add(&p_1304->l_special_values[10], result);
            }
            else
            { /* block id: 72 */
                (1 + 1);
            }
        }
    }
    if ((atomic_inc(&p_1304->g_atomic_input[54 * get_linear_group_id() + 8]) == 5))
    { /* block id: 78 */
        VECTOR(int32_t, 8) l_205 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-10L)), (-10L)), (-10L), 8L, (-10L));
        uint32_t l_461 = 0x07C7E1EDL;
        int i;
        if ((l_205.s2 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_205.s75)).xxyx)).y))
        { /* block id: 80 */
            VECTOR(uint64_t, 2) l_206 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
            VECTOR(uint64_t, 4) l_207 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL), 18446744073709551609UL);
            VECTOR(uint64_t, 16) l_208 = (VECTOR(uint64_t, 16))(0xEAB73E6FF05A5C68L, (VECTOR(uint64_t, 4))(0xEAB73E6FF05A5C68L, (VECTOR(uint64_t, 2))(0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L), 0xB371797351A84ED8L), 0xB371797351A84ED8L, 0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L, (VECTOR(uint64_t, 2))(0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L), (VECTOR(uint64_t, 2))(0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L), 0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L, 0xEAB73E6FF05A5C68L, 0xB371797351A84ED8L);
            VECTOR(uint64_t, 4) l_209 = (VECTOR(uint64_t, 4))(0x504EC7D9E8CB06A7L, (VECTOR(uint64_t, 2))(0x504EC7D9E8CB06A7L, 0x925E94D96B292E38L), 0x925E94D96B292E38L);
            int32_t l_211 = 1L;
            int32_t *l_210[4][4][8] = {{{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211}},{{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211}},{{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211}},{{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211}}};
            int32_t *l_212 = &l_211;
            int8_t l_213 = 0L;
            int i, j, k;
            l_212 = ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_206.xyxyyxyx)).s7272707367621723)).sde92, ((VECTOR(uint64_t, 2))(l_207.zy)).yxxx))))).lo)).yxyxyxyxxyxyyxxx)))).s4 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(l_208.s31)), (uint64_t)((VECTOR(uint64_t, 8))(l_209.wwwxxzxz)).s5))).xyyx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x4A8AAFD5ADA9CF79L, 0xBFBA9A8C75DFA5EDL)).xyxxxxxyxyyxyyyx)).sfffd))))).x) , l_210[3][3][7]);
            if (l_213)
            { /* block id: 82 */
                uint32_t l_214 = 4294967289UL;
                int8_t l_215 = (-1L);
                int16_t l_218 = 0x21FCL;
                VECTOR(int32_t, 8) l_219 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L));
                VECTOR(int32_t, 2) l_220 = (VECTOR(int32_t, 2))(1L, 0x4F057894L);
                VECTOR(int64_t, 16) l_221 = (VECTOR(int64_t, 16))(0x56A1C156C5B6A20DL, (VECTOR(int64_t, 4))(0x56A1C156C5B6A20DL, (VECTOR(int64_t, 2))(0x56A1C156C5B6A20DL, (-1L)), (-1L)), (-1L), 0x56A1C156C5B6A20DL, (-1L), (VECTOR(int64_t, 2))(0x56A1C156C5B6A20DL, (-1L)), (VECTOR(int64_t, 2))(0x56A1C156C5B6A20DL, (-1L)), 0x56A1C156C5B6A20DL, (-1L), 0x56A1C156C5B6A20DL, (-1L));
                uint32_t l_222 = 4294967295UL;
                VECTOR(int64_t, 16) l_223 = (VECTOR(int64_t, 16))(0x016619B43A37B5F1L, (VECTOR(int64_t, 4))(0x016619B43A37B5F1L, (VECTOR(int64_t, 2))(0x016619B43A37B5F1L, (-1L)), (-1L)), (-1L), 0x016619B43A37B5F1L, (-1L), (VECTOR(int64_t, 2))(0x016619B43A37B5F1L, (-1L)), (VECTOR(int64_t, 2))(0x016619B43A37B5F1L, (-1L)), 0x016619B43A37B5F1L, (-1L), 0x016619B43A37B5F1L, (-1L));
                uint32_t l_224 = 0x47C77F8FL;
                VECTOR(int16_t, 2) l_225 = (VECTOR(int16_t, 2))(3L, (-7L));
                VECTOR(int16_t, 2) l_226 = (VECTOR(int16_t, 2))(0x5A90L, 0L);
                int64_t l_227 = 0L;
                uint16_t l_228 = 2UL;
                int16_t l_229 = 0x34F7L;
                VECTOR(uint8_t, 2) l_230 = (VECTOR(uint8_t, 2))(1UL, 0x6DL);
                uint8_t l_231 = 255UL;
                VECTOR(int8_t, 2) l_232 = (VECTOR(int8_t, 2))(0x05L, 0x3CL);
                uint32_t l_233 = 0x2D3B0460L;
                int16_t l_234 = 0L;
                uint64_t l_235 = 3UL;
                uint32_t l_236 = 1UL;
                int16_t l_237 = 0x79EEL;
                int32_t l_238[2][8][10] = {{{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L}},{{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L},{(-1L),(-1L),0x276B3610L,(-5L),0x4E5ED388L,0x2C3D8670L,0x3952FBA1L,0x6CB843A2L,0x3952FBA1L,0x2C3D8670L}}};
                int32_t *l_239 = (void*)0;
                int i, j, k;
                l_215 |= l_214;
                for (l_214 = 0; (l_214 == 57); ++l_214)
                { /* block id: 86 */
                    (*l_212) ^= 0x0C0818C2L;
                }
                l_239 = (l_218 , (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_219.s2004)).odd, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x587C03A1L, 0x28C1E0F0L)).yyxyxyyyyyxyyxyx, ((VECTOR(int32_t, 16))(0x023FBB9BL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(l_220.yyxxxyyy)).lo, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), (-1L))).lo, ((VECTOR(int64_t, 2))(l_221.sff)), 0x3DB723FB8AFD391CL, (l_224 = (l_222 , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_223.sb0e2)).lo)).lo)), (-1L), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_225.xyxx)).wzxyxwww)).lo)), ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(l_226.yyxxxyyyyxyyxxyx)).s94, ((VECTOR(int16_t, 8))((-6L), l_227, l_228, l_229, 0x26C6L, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(1L, (-5L))).xxxy, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(0x47L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x4BL, 0UL)), 0xABL, 255UL, 0x18L, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(l_230.xxxxxyyxxxyxxxyy)).s34, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(1L, (l_213 = l_231), 1L, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_232.yyxx)), l_233, ((VECTOR(int8_t, 2))(0x44L)), 0x35L)).lo, ((VECTOR(int8_t, 4))(0x32L))))), 0x00L)).s1701275424120030))).s847e)).even))), ((VECTOR(uint8_t, 4))(0xA7L)), ((VECTOR(uint8_t, 2))(0x3EL)), 0xE6L, 0x95L, 1UL)).s5, 0x48L, 0x4BL, 7UL, ((VECTOR(uint8_t, 2))(9UL)), 0UL, 0xEFL, ((VECTOR(uint8_t, 8))(0x1DL)))).s1b)), ((VECTOR(uint8_t, 4))(9UL)), 0x01L))))).lo))).wwwwywzxxyzzzyzz, ((VECTOR(int16_t, 16))(0x75EDL))))).s42, (int16_t)l_234))), 0x0607L)).s74))).xyxyyyyyxxyyyyyx, ((VECTOR(int16_t, 16))(0x4729L)), ((VECTOR(int16_t, 16))(0x03A5L))))).s2, 0x4662L, 0x5100L, (-1L))).s30, ((VECTOR(uint16_t, 2))(0UL))))).xyxy, ((VECTOR(uint32_t, 4))(0UL))))), 0x42D0F614CB54FB1BL, l_235, 0x4BC64D5B5BBEE72DL, 7L)), 1L, 0x40AC31470323A823L)).sf , l_236), ((VECTOR(int32_t, 2))((-10L))), 0x137B97A5L)).even, ((VECTOR(int32_t, 2))(0x7FA6FDFFL))))).yyxy))).wwyyywzxzxzxyzxw)).hi)), ((VECTOR(int32_t, 2))((-1L))), l_237, l_238[0][1][8], 0x226B199AL, 0L, (-1L)))))).s53))).odd , l_239));
            }
            else
            { /* block id: 92 */
                int32_t l_240 = 1L;
                int8_t l_241 = 0x57L;
                int8_t l_242 = 0x65L;
                uint16_t l_243 = 0x778BL;
                int32_t l_246 = 0L;
                int32_t l_247 = 0x04929BF3L;
                int32_t l_248 = 0x1BC82A2EL;
                int16_t l_249[3][1][3] = {{{1L,1L,1L}},{{1L,1L,1L}},{{1L,1L,1L}}};
                int8_t l_272 = 1L;
                int i, j, k;
                --l_243;
                if ((l_249[0][0][2] = ((*l_212) |= ((l_246 , l_247) , l_248))))
                { /* block id: 96 */
                    int32_t l_251 = 0x5FCB13B1L;
                    int32_t *l_250 = &l_251;
                    l_250 = (((VECTOR(uint32_t, 2))(0x3E0678FFL, 0xB3DE261AL)).lo , l_250);
                }
                else
                { /* block id: 98 */
                    VECTOR(int64_t, 16) l_252 = (VECTOR(int64_t, 16))(0x3760065729E0859BL, (VECTOR(int64_t, 4))(0x3760065729E0859BL, (VECTOR(int64_t, 2))(0x3760065729E0859BL, 1L), 1L), 1L, 0x3760065729E0859BL, 1L, (VECTOR(int64_t, 2))(0x3760065729E0859BL, 1L), (VECTOR(int64_t, 2))(0x3760065729E0859BL, 1L), 0x3760065729E0859BL, 1L, 0x3760065729E0859BL, 1L);
                    uint32_t l_258 = 4294967295UL;
                    int32_t l_266 = 0x47CB3112L;
                    int32_t l_267[7][8][4] = {{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}},{{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L},{0L,1L,(-8L),1L}}};
                    int64_t l_268 = 0x67DDAC24A831C9E5L;
                    uint32_t l_269[3][1][6] = {{{0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L}},{{0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L}},{{0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L,0x089F56B1L}}};
                    int i, j, k;
                    if (l_252.s2)
                    { /* block id: 99 */
                        VECTOR(int32_t, 4) l_253 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x04E9515FL), 0x04E9515FL);
                        int i;
                        (*l_212) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_253.wxwwyzzyzwxwxxwy))))).sb5e6)).lo)).lo;
                        (*l_212) ^= (-1L);
                    }
                    else
                    { /* block id: 102 */
                        int32_t l_255[6][7] = {{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L},{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L},{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L},{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L},{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L},{0x03ED47F7L,0x53B305B9L,(-10L),0x53B305B9L,0x03ED47F7L,0x03ED47F7L,0x53B305B9L}};
                        int32_t *l_254 = &l_255[5][5];
                        uint32_t l_256 = 0xFB1D9C95L;
                        VECTOR(int32_t, 16) l_257 = (VECTOR(int32_t, 16))(0x0AB6EC9FL, (VECTOR(int32_t, 4))(0x0AB6EC9FL, (VECTOR(int32_t, 2))(0x0AB6EC9FL, 0x292D6E2AL), 0x292D6E2AL), 0x292D6E2AL, 0x0AB6EC9FL, 0x292D6E2AL, (VECTOR(int32_t, 2))(0x0AB6EC9FL, 0x292D6E2AL), (VECTOR(int32_t, 2))(0x0AB6EC9FL, 0x292D6E2AL), 0x0AB6EC9FL, 0x292D6E2AL, 0x0AB6EC9FL, 0x292D6E2AL);
                        int i, j;
                        l_210[3][3][7] = l_254;
                        l_210[3][1][4] = (void*)0;
                        l_256 = 0x63E4855EL;
                        (*l_212) |= ((VECTOR(int32_t, 16))(l_257.sb5a91b588c21dece)).sc;
                    }
                    if (l_258)
                    { /* block id: 108 */
                        int32_t l_259 = 0x2D46C6D6L;
                        uint8_t l_260[9] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
                        int i;
                        (*l_212) = l_259;
                        (*l_212) &= l_260[6];
                    }
                    else
                    { /* block id: 111 */
                        int64_t l_261 = 0L;
                        uint64_t l_262 = 0xF5A178EDE343206EL;
                        uint8_t l_263 = 0x19L;
                        int32_t l_264 = 0x0E3D2E3BL;
                        int64_t l_265 = 0x7A130B2A4F0B97A4L;
                        l_210[3][3][7] = (void*)0;
                        l_263 = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))((-8L), (-4L))).yyyyyxyyxxxyyxxy, ((VECTOR(int32_t, 8))(((*l_212) = 0x55CE5177L), l_261, 0L, l_262, 0x75C7D3D4L, ((VECTOR(int32_t, 2))(2L, 0x3F0D8E24L)), (-3L))).s2551471256736022))).s6;
                        l_265 = l_264;
                    }
                    --l_269[2][0][3];
                }
                if (l_272)
                { /* block id: 119 */
                    int32_t l_311 = 1L;
                    int32_t *l_310 = &l_311;
                    if ((FAKE_DIVERGE(p_1304->local_1_offset, get_local_id(1), 10) , 0x67F9DEC0L))
                    { /* block id: 120 */
                        uint32_t l_273 = 4294967295UL;
                        int32_t l_275 = 0x355E04F0L;
                        int32_t *l_274[7][3][8] = {{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275,&l_275}}};
                        VECTOR(uint32_t, 2) l_276 = (VECTOR(uint32_t, 2))(4294967293UL, 0xCFD7B8CEL);
                        VECTOR(uint64_t, 2) l_277 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x7D01A9C0D5D7587FL);
                        VECTOR(int64_t, 16) l_278 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-10L)), (-10L)), (-10L), 1L, (-10L), (VECTOR(int64_t, 2))(1L, (-10L)), (VECTOR(int64_t, 2))(1L, (-10L)), 1L, (-10L), 1L, (-10L));
                        VECTOR(int64_t, 2) l_279 = (VECTOR(int64_t, 2))((-1L), (-6L));
                        VECTOR(int64_t, 8) l_280 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        VECTOR(int64_t, 2) l_281 = (VECTOR(int64_t, 2))(1L, 3L);
                        int32_t l_282[1][8][5] = {{{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L},{3L,0x6FEA2F73L,3L,3L,0x6FEA2F73L}}};
                        uint64_t l_283 = 18446744073709551615UL;
                        VECTOR(uint32_t, 2) l_284 = (VECTOR(uint32_t, 2))(0xAD203FE1L, 0xCFF65F10L);
                        VECTOR(int64_t, 2) l_285 = (VECTOR(int64_t, 2))(0x180479A598D660FCL, 7L);
                        uint64_t l_286 = 0xAD8554B9EBD0323BL;
                        int16_t l_287 = 8L;
                        VECTOR(int64_t, 8) l_288 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                        VECTOR(int64_t, 16) l_289 = (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-4L)), (-4L)), (-4L), 4L, (-4L), (VECTOR(int64_t, 2))(4L, (-4L)), (VECTOR(int64_t, 2))(4L, (-4L)), 4L, (-4L), 4L, (-4L));
                        VECTOR(int64_t, 4) l_290 = (VECTOR(int64_t, 4))(0x6AFE39425CAE0697L, (VECTOR(int64_t, 2))(0x6AFE39425CAE0697L, 0x586B9E0CDC916C79L), 0x586B9E0CDC916C79L);
                        uint64_t l_291 = 18446744073709551608UL;
                        uint16_t l_292 = 65535UL;
                        VECTOR(int64_t, 4) l_293 = (VECTOR(int64_t, 4))(0x49B08B18FB161355L, (VECTOR(int64_t, 2))(0x49B08B18FB161355L, 0x52D02CCC271C5CC8L), 0x52D02CCC271C5CC8L);
                        VECTOR(int64_t, 8) l_294 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
                        VECTOR(int64_t, 16) l_295 = (VECTOR(int64_t, 16))(0x51572223292492C9L, (VECTOR(int64_t, 4))(0x51572223292492C9L, (VECTOR(int64_t, 2))(0x51572223292492C9L, 0x1016F80EC286B1FBL), 0x1016F80EC286B1FBL), 0x1016F80EC286B1FBL, 0x51572223292492C9L, 0x1016F80EC286B1FBL, (VECTOR(int64_t, 2))(0x51572223292492C9L, 0x1016F80EC286B1FBL), (VECTOR(int64_t, 2))(0x51572223292492C9L, 0x1016F80EC286B1FBL), 0x51572223292492C9L, 0x1016F80EC286B1FBL, 0x51572223292492C9L, 0x1016F80EC286B1FBL);
                        VECTOR(int64_t, 8) l_296 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1EA74E1D7CEBA578L), 0x1EA74E1D7CEBA578L), 0x1EA74E1D7CEBA578L, 1L, 0x1EA74E1D7CEBA578L);
                        VECTOR(uint64_t, 4) l_297 = (VECTOR(uint64_t, 4))(0x3478E54A35818E4EL, (VECTOR(uint64_t, 2))(0x3478E54A35818E4EL, 0x9E84C185567A7518L), 0x9E84C185567A7518L);
                        int8_t l_298 = 8L;
                        uint8_t l_299 = 1UL;
                        int8_t l_300 = 0x40L;
                        int64_t l_301 = 0x5F69CD38E1897AE2L;
                        int16_t l_302 = 0x6191L;
                        uint32_t l_303 = 4294967295UL;
                        uint32_t l_304 = 0UL;
                        int32_t *l_305[4] = {&l_282[0][0][4],&l_282[0][0][4],&l_282[0][0][4],&l_282[0][0][4]};
                        int i, j, k;
                        l_210[3][3][7] = ((l_249[1][0][0] = l_273) , l_274[6][0][0]);
                        l_302 = (((VECTOR(int8_t, 2))(9L, 0x49L)).odd , (l_301 = (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_276.yyxxyyxxxxxyyxxx)).s1be1)).y , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(0x02C3C9639DA54A31L, ((VECTOR(uint64_t, 4))(l_277.xxxy)), 18446744073709551612UL, ((VECTOR(uint64_t, 2))(18446744073709551610UL, 0x2C3B548336797F39L)), ((VECTOR(uint64_t, 2))(0xC12719CB5F6773EDL, 5UL)), 18446744073709551609UL, 18446744073709551613UL, 1UL, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 8))(l_278.s8efb1e42)), ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(l_279.xxyy)).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x26907D06C2CBC234L, 1L)).yxyyyxxyyyyyyyyy)).odd, ((VECTOR(int64_t, 2))(l_280.s21)).xxyyyyyx))))).s71)).xxxyyyxyxyyxyyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_281.yyyxyxyy)))).s6014341605207500))).sef, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))((-4L), 0x6AC3AD8F4186D41BL)), ((VECTOR(int64_t, 8))(0L, 0x4613B58B0D0B993EL, 0x30FFB65458731939L, (l_282[0][1][0] , l_283), (l_284.y , 0x1A6C9B00F3D2DFCAL), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(l_285.yx)).yyyx))), (int64_t)l_286, (int64_t)l_287))).wzzwzwwzywyxwwyx)).s8b)), 4L)).s61))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_288.s01)), (((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(l_289.s5feaa6bb1acd26a3)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_290.xwxxwxwyzyxzzyyx))))))))).s0 , (l_291 , l_292)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(l_293.zy)).yxyx, ((VECTOR(int64_t, 4))((-4L), ((VECTOR(int64_t, 2))((-2L), 8L)), 0x6606C33CF6B19C9DL))))).wyxyyyyw, ((VECTOR(int64_t, 16))(l_294.s3265162505040522)).lo))).s60)), (-1L), 0x3730888E49BA4620L, (-9L))).s20)), 0x181537DBF6BC1D3CL, 0L)).even, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_295.s607d92b2e516b0b0)))))).s4b)))))).xxyx)).odd))).yyxyyxyx))).s10, ((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(l_296.s70)).xxyxxxxxxxxxxyxx))).s06))), 0xF8167146D1E40F14L)).s374e, ((VECTOR(uint64_t, 4))(l_297.zxyz))))).xwwwzwxyzzyxwywy))).even)).s2053132776233537)).s9cb4)).x) , ((VECTOR(int16_t, 2))(1L, 0L)).odd) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_300 = (l_299 = ((*l_212) |= l_298))), (-9L), 9L, 0L)).wxyzzxxw)).s0)));
                        l_304 = ((l_277.y &= l_303) , ((VECTOR(int32_t, 2))(0L, 0x125A57E2L)).hi);
                        l_274[0][1][3] = l_305[1];
                    }
                    else
                    { /* block id: 131 */
                        VECTOR(int8_t, 8) l_306 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        uint8_t l_307 = 1UL;
                        int8_t l_308 = 0L;
                        uint32_t l_309[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_309[i] = 0x3C1E563BL;
                        l_212 = (void*)0;
                        l_307 ^= l_306.s7;
                        l_309[3] &= l_308;
                    }
                    l_310 = l_310;
                }
                else
                { /* block id: 137 */
                    int32_t l_312 = 0L;
                    for (l_312 = 22; (l_312 < (-17)); l_312 = safe_sub_func_int64_t_s_s(l_312, 1))
                    { /* block id: 140 */
                        int32_t l_315 = (-5L);
                        int8_t l_316 = 7L;
                        int32_t l_318 = (-1L);
                        int32_t *l_317 = &l_318;
                        int32_t l_319 = 0L;
                        int64_t l_320 = 0x4C4FAD99BF391749L;
                        uint32_t l_321 = 0x5EBCFD35L;
                        VECTOR(int32_t, 2) l_324 = (VECTOR(int32_t, 2))(3L, 0x61768496L);
                        VECTOR(int32_t, 2) l_325 = (VECTOR(int32_t, 2))(0x42E49EBBL, 7L);
                        VECTOR(int32_t, 8) l_326 = (VECTOR(int32_t, 8))(0x1F49C630L, (VECTOR(int32_t, 4))(0x1F49C630L, (VECTOR(int32_t, 2))(0x1F49C630L, (-1L)), (-1L)), (-1L), 0x1F49C630L, (-1L));
                        int64_t l_327 = 0x41FB1205E54A733BL;
                        int i;
                        l_212 = ((((l_316 = l_315) , FAKE_DIVERGE(p_1304->group_2_offset, get_group_id(2), 10)) , 0x57A7CA7F859E7428L) , (l_210[3][2][6] = l_317));
                        --l_321;
                        (*l_212) = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_324.xxxxxyyxyxxyyyyx)).sc7, ((VECTOR(int32_t, 8))(l_325.xxxxyyyy)).s36, ((VECTOR(int32_t, 16))(l_326.s3341606041611061)).s47))).even;
                        (*l_212) = l_327;
                    }
                }
            }
        }
        else
        { /* block id: 150 */
            uint32_t l_328 = 0x14DCAE1BL;
            int32_t l_329 = 0x21DD1189L;
            uint8_t l_330 = 8UL;
            int32_t l_355 = 0x6525C4B5L;
            int32_t l_356 = 0L;
            VECTOR(int64_t, 8) l_357 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1489CD1DF26746A2L), 0x1489CD1DF26746A2L), 0x1489CD1DF26746A2L, 1L, 0x1489CD1DF26746A2L);
            uint32_t l_358 = 0xD1772249L;
            uint32_t l_359 = 0x26D569C1L;
            uint32_t l_360 = 0x5216482FL;
            int16_t l_361 = 0x06E2L;
            int i;
            if (((l_329 = l_328) , l_330))
            { /* block id: 152 */
                int32_t l_332 = 1L;
                int32_t *l_331 = &l_332;
                int32_t *l_333[10] = {&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332,&l_332};
                VECTOR(uint16_t, 16) l_334 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 1UL), 1UL), 1UL, 65531UL, 1UL, (VECTOR(uint16_t, 2))(65531UL, 1UL), (VECTOR(uint16_t, 2))(65531UL, 1UL), 65531UL, 1UL, 65531UL, 1UL);
                int32_t *l_335 = &l_332;
                int i;
                l_333[8] = l_331;
                l_205.s2 = 0x33F505D9L;
                l_335 = (((VECTOR(uint16_t, 2))(l_334.s0e)).lo , (void*)0);
            }
            else
            { /* block id: 156 */
                int32_t l_336[7] = {0L,0L,0L,0L,0L,0L,0L};
                int i;
                for (l_336[2] = 5; (l_336[2] == 22); l_336[2] = safe_add_func_uint8_t_u_u(l_336[2], 1))
                { /* block id: 159 */
                    VECTOR(int32_t, 2) l_339 = (VECTOR(int32_t, 2))(0x23BAE23AL, 0L);
                    VECTOR(int32_t, 8) l_340 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L));
                    VECTOR(int32_t, 8) l_341 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x46D6066FL), 0x46D6066FL), 0x46D6066FL, 6L, 0x46D6066FL);
                    VECTOR(int32_t, 4) l_342 = (VECTOR(int32_t, 4))(0x72002460L, (VECTOR(int32_t, 2))(0x72002460L, (-10L)), (-10L));
                    VECTOR(int32_t, 8) l_343 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x711B2B3DL), 0x711B2B3DL), 0x711B2B3DL, (-9L), 0x711B2B3DL);
                    VECTOR(int32_t, 4) l_344 = (VECTOR(int32_t, 4))(0x2610AD83L, (VECTOR(int32_t, 2))(0x2610AD83L, 0x7437F50EL), 0x7437F50EL);
                    int16_t l_345 = (-10L);
                    VECTOR(int32_t, 4) l_346 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-7L)), (-7L));
                    int8_t l_347 = 0x78L;
                    int64_t l_348 = (-4L);
                    uint32_t l_349 = 1UL;
                    int32_t l_350 = 0x4603CA49L;
                    int32_t *l_351 = &l_350;
                    int32_t *l_352 = (void*)0;
                    int32_t *l_353 = (void*)0;
                    int32_t *l_354 = (void*)0;
                    int i;
                    l_349 = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-4L), 0x58C79FCCL)).yyyxyyyx, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(9L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_339.yxxxxyyx)).s71, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_340.s7157)).hi)).yyyyxyyyxxxyxyxx)).sd5))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_341.s4522742534641731)).s3600)), 0L)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_342.wwxxyxxzzzwzzxww)).s0ed7))))).xxzwwzwx, ((VECTOR(int32_t, 2))(0x7176BC0FL, 1L)).xyxxyyyx))).even, ((VECTOR(int32_t, 2))(l_343.s23)).xyyy, ((VECTOR(int32_t, 16))(l_344.yzyxzwxwxywzxzyw)).s05d7))).ywzwwyxwzxwyzwxw, (int32_t)(l_205.s2 = l_345)))).even, ((VECTOR(int32_t, 8))(l_346.wzzzwxzz))))).s31)), (int32_t)(l_205.s7 = l_347), (int32_t)l_348))).even;
                    l_352 = (l_350 , (l_351 = (void*)0));
                    l_205.s1 = (-4L);
                    l_354 = l_353;
                }
            }
            l_358 = ((l_356 = l_355) , (l_205.s0 = l_357.s1));
            l_205.s1 = (((VECTOR(uint32_t, 2))(0xB8DCA527L, 0x2FBE5F42L)).lo , l_359);
            if ((l_360 , l_361))
            { /* block id: 173 */
                int32_t l_362 = 0x5E38532FL;
                uint64_t l_413 = 1UL;
                for (l_362 = (-3); (l_362 < (-3)); l_362++)
                { /* block id: 176 */
                    int32_t l_365 = (-1L);
                    VECTOR(int32_t, 4) l_371 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L));
                    VECTOR(int32_t, 8) l_372 = (VECTOR(int32_t, 8))(0x35FA9EDEL, (VECTOR(int32_t, 4))(0x35FA9EDEL, (VECTOR(int32_t, 2))(0x35FA9EDEL, 0x2F68D3F1L), 0x2F68D3F1L), 0x2F68D3F1L, 0x35FA9EDEL, 0x2F68D3F1L);
                    VECTOR(int32_t, 8) l_373 = (VECTOR(int32_t, 8))(0x13D790BBL, (VECTOR(int32_t, 4))(0x13D790BBL, (VECTOR(int32_t, 2))(0x13D790BBL, 1L), 1L), 1L, 0x13D790BBL, 1L);
                    VECTOR(int32_t, 2) l_374 = (VECTOR(int32_t, 2))(0x6EC62A99L, 8L);
                    uint16_t l_375 = 65528UL;
                    VECTOR(uint64_t, 16) l_376 = (VECTOR(uint64_t, 16))(0xCA086378EC439382L, (VECTOR(uint64_t, 4))(0xCA086378EC439382L, (VECTOR(uint64_t, 2))(0xCA086378EC439382L, 0x9945AEA661446CE2L), 0x9945AEA661446CE2L), 0x9945AEA661446CE2L, 0xCA086378EC439382L, 0x9945AEA661446CE2L, (VECTOR(uint64_t, 2))(0xCA086378EC439382L, 0x9945AEA661446CE2L), (VECTOR(uint64_t, 2))(0xCA086378EC439382L, 0x9945AEA661446CE2L), 0xCA086378EC439382L, 0x9945AEA661446CE2L, 0xCA086378EC439382L, 0x9945AEA661446CE2L);
                    VECTOR(uint64_t, 8) l_377 = (VECTOR(uint64_t, 8))(0x510125AF454D5774L, (VECTOR(uint64_t, 4))(0x510125AF454D5774L, (VECTOR(uint64_t, 2))(0x510125AF454D5774L, 4UL), 4UL), 4UL, 0x510125AF454D5774L, 4UL);
                    VECTOR(int64_t, 2) l_378 = (VECTOR(int64_t, 2))(0L, (-1L));
                    VECTOR(int64_t, 2) l_379 = (VECTOR(int64_t, 2))(0x6B617320914B85F4L, 6L);
                    VECTOR(int64_t, 16) l_380 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2FEA38CC61894A3FL), 0x2FEA38CC61894A3FL), 0x2FEA38CC61894A3FL, 1L, 0x2FEA38CC61894A3FL, (VECTOR(int64_t, 2))(1L, 0x2FEA38CC61894A3FL), (VECTOR(int64_t, 2))(1L, 0x2FEA38CC61894A3FL), 1L, 0x2FEA38CC61894A3FL, 1L, 0x2FEA38CC61894A3FL);
                    VECTOR(uint16_t, 8) l_381 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
                    VECTOR(uint16_t, 8) l_382 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL);
                    int32_t l_383 = 0x542B23A9L;
                    VECTOR(int64_t, 16) l_384 = (VECTOR(int64_t, 16))(0x60187B0370713F4AL, (VECTOR(int64_t, 4))(0x60187B0370713F4AL, (VECTOR(int64_t, 2))(0x60187B0370713F4AL, 0x165928EBB8F8CFA4L), 0x165928EBB8F8CFA4L), 0x165928EBB8F8CFA4L, 0x60187B0370713F4AL, 0x165928EBB8F8CFA4L, (VECTOR(int64_t, 2))(0x60187B0370713F4AL, 0x165928EBB8F8CFA4L), (VECTOR(int64_t, 2))(0x60187B0370713F4AL, 0x165928EBB8F8CFA4L), 0x60187B0370713F4AL, 0x165928EBB8F8CFA4L, 0x60187B0370713F4AL, 0x165928EBB8F8CFA4L);
                    VECTOR(int64_t, 8) l_385 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1D4D90D3A76F4C44L), 0x1D4D90D3A76F4C44L), 0x1D4D90D3A76F4C44L, 1L, 0x1D4D90D3A76F4C44L);
                    VECTOR(int32_t, 4) l_386 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x769AB098L), 0x769AB098L);
                    VECTOR(uint32_t, 2) l_387 = (VECTOR(uint32_t, 2))(0xAA712A8BL, 0xB5E08B1FL);
                    VECTOR(int64_t, 8) l_388 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5C235667D9D1A168L), 0x5C235667D9D1A168L), 0x5C235667D9D1A168L, 0L, 0x5C235667D9D1A168L);
                    VECTOR(int64_t, 16) l_389 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 9L), 9L), 9L, 8L, 9L, (VECTOR(int64_t, 2))(8L, 9L), (VECTOR(int64_t, 2))(8L, 9L), 8L, 9L, 8L, 9L);
                    VECTOR(int64_t, 4) l_390 = (VECTOR(int64_t, 4))(0x7C62852F216AB252L, (VECTOR(int64_t, 2))(0x7C62852F216AB252L, 0L), 0L);
                    int8_t l_391 = 0L;
                    VECTOR(int64_t, 4) l_392 = (VECTOR(int64_t, 4))(0x19AC100B024130CEL, (VECTOR(int64_t, 2))(0x19AC100B024130CEL, 0x3C342EC7A178049EL), 0x3C342EC7A178049EL);
                    VECTOR(int64_t, 4) l_393 = (VECTOR(int64_t, 4))(0x38D6EC7CFEDC1265L, (VECTOR(int64_t, 2))(0x38D6EC7CFEDC1265L, 0x05D2D8527DD136CBL), 0x05D2D8527DD136CBL);
                    int32_t l_394 = (-3L);
                    uint64_t l_395[9][10][2] = {{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}},{{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L},{1UL,0x056F20E71E966CF9L}}};
                    VECTOR(int64_t, 2) l_396 = (VECTOR(int64_t, 2))(1L, 0x0305BFBA826FCBB5L);
                    VECTOR(int64_t, 2) l_397 = (VECTOR(int64_t, 2))(0L, (-1L));
                    uint32_t l_398 = 0xFA5667CAL;
                    uint64_t l_399 = 1UL;
                    uint32_t l_400 = 3UL;
                    uint32_t l_401 = 0xCE2CAF06L;
                    uint32_t l_402 = 4294967295UL;
                    uint32_t l_403 = 4294967295UL;
                    int i, j, k;
                    l_205.s4 &= 0x2746ACCBL;
                    for (l_365 = (-6); (l_365 <= (-18)); l_365 = safe_sub_func_int8_t_s_s(l_365, 8))
                    { /* block id: 180 */
                        int32_t l_370 = 0L;
                        int32_t *l_369[7] = {&l_370,&l_370,&l_370,&l_370,&l_370,&l_370,&l_370};
                        int32_t **l_368[7] = {&l_369[2],&l_369[2],&l_369[2],&l_369[2],&l_369[2],&l_369[2],&l_369[2]};
                        int i;
                        l_368[5] = (void*)0;
                    }
                    l_365 = (l_205.s3 = 0x7E9815BAL);
                    if ((l_403 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(l_371.wwxxyzwy)), ((VECTOR(int32_t, 4))(l_372.s1415)).x, ((VECTOR(int32_t, 2))(0L, (-5L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x6E5A27F5L, ((VECTOR(int32_t, 2))(0L, (-7L))), 0x714CB2E0L, ((VECTOR(int32_t, 4))(l_373.s0305)), 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_374.yx)), (((l_375 = 0L) , ((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 8))(l_376.s28824994)), ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(l_377.s50)).xxyy, ((VECTOR(uint64_t, 2))(0xBEFF6F1F9C2642B8L, 0UL)).xxyx))).odd, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_378.xx)), 0x03F6BCE999EBE10AL, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(8L, 0x2D200BDC78A02249L, ((VECTOR(int64_t, 2))(l_379.xy)), ((VECTOR(int64_t, 8))(l_380.s96539c22)), 0x18999F5B0F612419L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_381.s3673102435107636)).sf40d)).even)).xyyxxyxy, ((VECTOR(uint16_t, 8))(l_382.s14727235))))).s0 , l_383), (-9L), 0x47D737A0F39FC392L, 0x395DF65F03F7D213L)).odd)), 0x6E2FC318F73722EAL)).sa72f, ((VECTOR(int64_t, 4))(l_384.sab0e)), ((VECTOR(int64_t, 16))(l_385.s1636024707731301)).sfcef))), (-1L))).even, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_386.wwzx)).odd)).yyyxxxyyxyyyyxxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(l_387.yxyx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x4CF04D7CL, 1UL)))).xxyy))).hi)).yyyyxyxx)).s5765715722125331))).s8047, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_388.s54)), ((VECTOR(int64_t, 4))(l_389.s41d7)), 0x4B306A14611E9D9FL, 0x03A31140BBA02064L)).s6114512505307215)).s26e6))).hi, ((VECTOR(int64_t, 16))(l_390.zwzxywwxzwzyzwzy)).s50)))))).yxyyxxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_391, 0UL, 2UL, (l_400 = ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(l_392.yxyyyxzw)).s44, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(l_393.wywxzzwx)).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(6L, 0x1FE43280F156B236L)), 9L, 0x7B7E95BB0361C70CL, 0x71DFFA558B11A5C2L, 0x140AD292A5908A4CL, (-2L), 0x58BA16A382712E59L)).odd, ((VECTOR(int64_t, 16))(((l_394 = (-1L)) , (l_357.s2 &= ((VECTOR(int64_t, 2))(1L, 0x6FA8C9FFB09A0F4AL)).odd)), (-4L), 0x45820DCA055C1D94L, (l_389.sb = l_395[3][4][1]), ((VECTOR(int64_t, 2))(l_396.xy)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-1L), (-4L))))).lo, (l_357.s3 = 0L), ((VECTOR(int64_t, 4))(l_397.xxxy)), (-6L), (l_398 , (l_357.s7 &= l_399)), 0x0C1E4A8EBB5BF995L, 1L)).s0497, ((VECTOR(int64_t, 4))((-1L)))))).xzzyyxyx)).s7323724062522443, ((VECTOR(int64_t, 16))(0x0ECB23F14195862CL))))).s8eae))))))), ((VECTOR(int64_t, 4))(0x526F6467207FD5DAL))))).lo))).xyxxyyyxyxyxxyyx)).sf7c1, ((VECTOR(int64_t, 4))(0x37562A683DF5D265L))))).y), 18446744073709551611UL, 5UL, ((VECTOR(uint64_t, 8))(4UL)), 1UL, 0x7A81F62871F3C838L)).even)).hi)).yxwzwzxw))).s7) , l_401), (-1L), 0L, l_402, (-1L), 0x6DE68AEBL)).s17, ((VECTOR(int32_t, 2))(0x1A082301L))))), (-4L), (-2L))), ((VECTOR(int32_t, 2))(0x5338570FL)), (-1L))).s32aa)))).lo, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x6E88220AL))))).s4227666267501730)).s8))
                    { /* block id: 193 */
                        int32_t l_405 = 3L;
                        int32_t *l_404 = &l_405;
                        int8_t l_406 = (-8L);
                        l_404 = (void*)0;
                        l_372.s6 = l_406;
                    }
                    else
                    { /* block id: 196 */
                        int32_t l_408 = 0x6A49BCB3L;
                        int32_t *l_407 = &l_408;
                        int32_t *l_409 = &l_408;
                        int32_t *l_410 = &l_408;
                        int32_t *l_411 = &l_408;
                        VECTOR(int32_t, 4) l_412 = (VECTOR(int32_t, 4))(0x42CEE7FDL, (VECTOR(int32_t, 2))(0x42CEE7FDL, 0x4E0264B7L), 0x4E0264B7L);
                        int i;
                        l_407 = (void*)0;
                        l_410 = l_409;
                        l_411 = (void*)0;
                        l_205.s6 = ((VECTOR(int32_t, 8))(l_412.ywxwxxzw)).s3;
                    }
                }
                if (l_413)
                { /* block id: 203 */
                    int32_t l_415 = 0L;
                    int32_t *l_414 = &l_415;
                    int32_t *l_416 = (void*)0;
                    int32_t l_417 = 0x2AD415CBL;
                    int8_t l_418 = 0x3DL;
                    int8_t l_419 = (-3L);
                    int16_t l_420 = 0x5B3DL;
                    uint32_t l_421 = 0UL;
                    uint64_t l_424 = 1UL;
                    uint8_t l_425 = 255UL;
                    l_416 = l_414;
                    l_421++;
                    l_424 = 0x4B883F8CL;
                    if ((l_425 |= (l_205.s3 |= 0x45054F20L)))
                    { /* block id: 209 */
                        VECTOR(int32_t, 16) l_426 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x2F0F9DC9L), 0x2F0F9DC9L), 0x2F0F9DC9L, (-5L), 0x2F0F9DC9L, (VECTOR(int32_t, 2))((-5L), 0x2F0F9DC9L), (VECTOR(int32_t, 2))((-5L), 0x2F0F9DC9L), (-5L), 0x2F0F9DC9L, (-5L), 0x2F0F9DC9L);
                        uint64_t l_429[2][8][10] = {{{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL}},{{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL,6UL,18446744073709551610UL,18446744073709551610UL}}};
                        uint64_t *l_428 = &l_429[0][2][5];
                        uint64_t **l_427 = &l_428;
                        uint64_t *l_431 = (void*)0;
                        uint64_t **l_430 = &l_431;
                        uint64_t **l_432 = (void*)0;
                        uint16_t l_433 = 0x2816L;
                        int8_t l_436 = 0x5AL;
                        int i, j, k;
                        l_427 = (((VECTOR(int32_t, 16))(l_426.s414e551544beed0b)).s1 , (void*)0);
                        l_432 = (l_430 = (void*)0);
                        l_433++;
                        (*l_416) ^= l_436;
                    }
                    else
                    { /* block id: 215 */
                        VECTOR(int32_t, 2) l_437 = (VECTOR(int32_t, 2))(0x72A79D60L, 0x436CFF09L);
                        VECTOR(int64_t, 2) l_438 = (VECTOR(int64_t, 2))(0x03327D551FBB7332L, (-1L));
                        uint8_t l_439 = 248UL;
                        uint32_t l_440 = 0x4748CE30L;
                        uint16_t l_441 = 0x58DFL;
                        int16_t l_442 = 0x6A83L;
                        int32_t *l_443 = (void*)0;
                        int32_t *l_444 = (void*)0;
                        int32_t l_445 = 0x401084E3L;
                        int i;
                        l_356 = ((*l_414) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x556603A4L, ((VECTOR(int32_t, 2))(l_437.yx)), 0L)), ((((l_439 |= ((l_361 = 1L) , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_438.xy)), (-3L), 0x53EE8B16206822AFL)).zyyzzyyxxywxyxwz)))).sc477)).x)) , l_440) , l_441) , l_442), (-1L), 0x4FFBF41DL, 0x29490129L)).s7);
                        l_444 = (l_414 = l_443);
                        (*l_416) = 0x2D82CFA0L;
                        (*l_416) = (FAKE_DIVERGE(p_1304->local_2_offset, get_local_id(2), 10) , l_445);
                    }
                }
                else
                { /* block id: 225 */
                    int32_t l_447 = 0L;
                    int32_t *l_446 = &l_447;
                    l_446 = (void*)0;
                    for (l_447 = 0; (l_447 < (-9)); --l_447)
                    { /* block id: 229 */
                        int32_t l_450 = 9L;
                        uint32_t l_451 = 4294967295UL;
                        int32_t l_452 = 1L;
                        int8_t l_453 = (-9L);
                        int32_t l_454 = 0x5AFC43BAL;
                        uint16_t l_455 = 0UL;
                        uint64_t l_456 = 0x819B48E57E910022L;
                        int64_t l_457 = 0x5543B0F5CA092ADAL;
                        uint8_t l_458 = 0x43L;
                        l_451 ^= l_450;
                        l_450 = ((l_329 = l_452) , l_453);
                        l_362 = (l_450 ^= l_454);
                        l_454 |= ((l_457 = (l_455 , l_456)) , l_458);
                    }
                }
            }
            else
            { /* block id: 239 */
                int32_t l_459 = (-1L);
                uint32_t l_460 = 0x3E1CC0FBL;
                l_460 = l_459;
            }
        }
        l_461++;
        unsigned int result = 0;
        result += l_205.s7;
        result += l_205.s6;
        result += l_205.s5;
        result += l_205.s4;
        result += l_205.s3;
        result += l_205.s2;
        result += l_205.s1;
        result += l_205.s0;
        result += l_461;
        atomic_add(&p_1304->g_special_values[54 * get_linear_group_id() + 8], result);
    }
    else
    { /* block id: 244 */
        (1 + 1);
    }
    return p_59;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_comm_values[i] = 1;
    struct S0 c_1305;
    struct S0* p_1304 = &c_1305;
    struct S0 c_1306 = {
        0x5720B963L, // p_1304->g_4
        0xC320L, // p_1304->g_5
        (VECTOR(int32_t, 2))((-2L), 0x49598AAFL), // p_1304->g_8
        (void*)0, // p_1304->g_25
        {{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L},{18446744073709551615UL,0x98564DBB9A2F725DL,0x10079D62BFEED1B4L,0x05C8A2DB6377F0A0L,0x98564DBB9A2F725DL,0x05C8A2DB6377F0A0L}}, // p_1304->g_51
        (-5L), // p_1304->g_64
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int64_t, 2))((-1L), (-5L)), (VECTOR(int64_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L)), // p_1304->g_86
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x40E846833E316ED2L), 0x40E846833E316ED2L), 0x40E846833E316ED2L, 0L, 0x40E846833E316ED2L, (VECTOR(int64_t, 2))(0L, 0x40E846833E316ED2L), (VECTOR(int64_t, 2))(0L, 0x40E846833E316ED2L), 0L, 0x40E846833E316ED2L, 0L, 0x40E846833E316ED2L), // p_1304->g_97
        6L, // p_1304->g_109
        0UL, // p_1304->g_132
        (void*)0, // p_1304->g_478
        {65527UL,65527UL,65527UL,65527UL,65527UL}, // p_1304->g_479
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x64L), 0x64L), // p_1304->g_484
        (VECTOR(uint64_t, 2))(1UL, 0x7413CE96AA4F085EL), // p_1304->g_526
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1B77384C9155DDF4L), 0x1B77384C9155DDF4L), 0x1B77384C9155DDF4L, (-1L), 0x1B77384C9155DDF4L, (VECTOR(int64_t, 2))((-1L), 0x1B77384C9155DDF4L), (VECTOR(int64_t, 2))((-1L), 0x1B77384C9155DDF4L), (-1L), 0x1B77384C9155DDF4L, (-1L), 0x1B77384C9155DDF4L), // p_1304->g_527
        (VECTOR(uint8_t, 2))(0UL, 0xDBL), // p_1304->g_549
        (VECTOR(uint8_t, 4))(0x56L, (VECTOR(uint8_t, 2))(0x56L, 0x9FL), 0x9FL), // p_1304->g_551
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xA2L), 0xA2L), 0xA2L, 1UL, 0xA2L, (VECTOR(uint8_t, 2))(1UL, 0xA2L), (VECTOR(uint8_t, 2))(1UL, 0xA2L), 1UL, 0xA2L, 1UL, 0xA2L), // p_1304->g_552
        (VECTOR(uint8_t, 16))(0x9CL, (VECTOR(uint8_t, 4))(0x9CL, (VECTOR(uint8_t, 2))(0x9CL, 0UL), 0UL), 0UL, 0x9CL, 0UL, (VECTOR(uint8_t, 2))(0x9CL, 0UL), (VECTOR(uint8_t, 2))(0x9CL, 0UL), 0x9CL, 0UL, 0x9CL, 0UL), // p_1304->g_554
        (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 0x09L), 0x09L), // p_1304->g_555
        0x73L, // p_1304->g_564
        0x46A151A4L, // p_1304->g_567
        &p_1304->g_567, // p_1304->g_566
        0x5D5335A500B04E76L, // p_1304->g_597
        (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-3L)), (-3L)), (-3L), 9L, (-3L)), // p_1304->g_601
        &p_1304->g_597, // p_1304->g_613
        &p_1304->g_51[6][1], // p_1304->g_617
        &p_1304->g_617, // p_1304->g_616
        4L, // p_1304->g_637
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x598C59D6L), 0x598C59D6L), 0x598C59D6L, 4294967295UL, 0x598C59D6L), // p_1304->g_650
        (VECTOR(int32_t, 16))(0x797DACD2L, (VECTOR(int32_t, 4))(0x797DACD2L, (VECTOR(int32_t, 2))(0x797DACD2L, 0x5E07F932L), 0x5E07F932L), 0x5E07F932L, 0x797DACD2L, 0x5E07F932L, (VECTOR(int32_t, 2))(0x797DACD2L, 0x5E07F932L), (VECTOR(int32_t, 2))(0x797DACD2L, 0x5E07F932L), 0x797DACD2L, 0x5E07F932L, 0x797DACD2L, 0x5E07F932L), // p_1304->g_667
        (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x211DB311L), 0x211DB311L), 0x211DB311L, 4L, 0x211DB311L), // p_1304->g_670
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x8F1255A628E490A9L), // p_1304->g_692
        6L, // p_1304->g_714
        (VECTOR(uint8_t, 2))(0x21L, 0x8EL), // p_1304->g_732
        {65535UL}, // p_1304->g_739
        0xEAL, // p_1304->g_740
        (-5L), // p_1304->g_742
        0x23EAL, // p_1304->g_771
        0x5E40277DL, // p_1304->g_804
        (void*)0, // p_1304->g_811
        (VECTOR(uint32_t, 2))(0xD3C7DFD1L, 0UL), // p_1304->g_854
        0x7D6F68BBL, // p_1304->g_909
        (VECTOR(int64_t, 4))(0x676D550F6F4194A6L, (VECTOR(int64_t, 2))(0x676D550F6F4194A6L, 0L), 0L), // p_1304->g_929
        255UL, // p_1304->g_948
        &p_1304->g_566, // p_1304->g_986
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE00DL), 0xE00DL), // p_1304->g_992
        (VECTOR(uint64_t, 2))(0UL, 0UL), // p_1304->g_999
        (VECTOR(int32_t, 8))(0x287FA6A6L, (VECTOR(int32_t, 4))(0x287FA6A6L, (VECTOR(int32_t, 2))(0x287FA6A6L, 6L), 6L), 6L, 0x287FA6A6L, 6L), // p_1304->g_1000
        0UL, // p_1304->g_1011
        (VECTOR(uint16_t, 2))(0x8A05L, 0xEE09L), // p_1304->g_1023
        (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x796CL), 0x796CL), 0x796CL, (-3L), 0x796CL, (VECTOR(int16_t, 2))((-3L), 0x796CL), (VECTOR(int16_t, 2))((-3L), 0x796CL), (-3L), 0x796CL, (-3L), 0x796CL), // p_1304->g_1028
        (VECTOR(int32_t, 2))(0L, 0L), // p_1304->g_1039
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1304->g_1063
        {&p_1304->g_1063[0],&p_1304->g_1063[0],&p_1304->g_1063[0],&p_1304->g_1063[0]}, // p_1304->g_1062
        &p_1304->g_617, // p_1304->g_1077
        (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), 1L, 6L, 1L), // p_1304->g_1085
        (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 255UL), 255UL), 255UL, 246UL, 255UL), // p_1304->g_1090
        (VECTOR(int16_t, 8))(0x783DL, (VECTOR(int16_t, 4))(0x783DL, (VECTOR(int16_t, 2))(0x783DL, 0x0342L), 0x0342L), 0x0342L, 0x783DL, 0x0342L), // p_1304->g_1122
        (void*)0, // p_1304->g_1123
        &p_1304->g_739[0], // p_1304->g_1148
        &p_1304->g_1148, // p_1304->g_1147
        (VECTOR(int16_t, 8))(0x5677L, (VECTOR(int16_t, 4))(0x5677L, (VECTOR(int16_t, 2))(0x5677L, 0x06B4L), 0x06B4L), 0x06B4L, 0x5677L, 0x06B4L), // p_1304->g_1151
        (VECTOR(uint64_t, 2))(0xAF05CBCADDD0E171L, 18446744073709551615UL), // p_1304->g_1178
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 2UL), 2UL), // p_1304->g_1216
        &p_1304->g_804, // p_1304->g_1222
        (VECTOR(int16_t, 4))(0x4245L, (VECTOR(int16_t, 2))(0x4245L, 0x526CL), 0x526CL), // p_1304->g_1228
        (VECTOR(int16_t, 8))(0x4A54L, (VECTOR(int16_t, 4))(0x4A54L, (VECTOR(int16_t, 2))(0x4A54L, 0x3C33L), 0x3C33L), 0x3C33L, 0x4A54L, 0x3C33L), // p_1304->g_1229
        (void*)0, // p_1304->g_1254
        &p_1304->g_1254, // p_1304->g_1253
        &p_1304->g_1253, // p_1304->g_1252
        (void*)0, // p_1304->g_1258
        0x0273DCB3L, // p_1304->g_1302
        0, // p_1304->v_collective
        sequence_input[get_global_id(0)], // p_1304->global_0_offset
        sequence_input[get_global_id(1)], // p_1304->global_1_offset
        sequence_input[get_global_id(2)], // p_1304->global_2_offset
        sequence_input[get_local_id(0)], // p_1304->local_0_offset
        sequence_input[get_local_id(1)], // p_1304->local_1_offset
        sequence_input[get_local_id(2)], // p_1304->local_2_offset
        sequence_input[get_group_id(0)], // p_1304->group_0_offset
        sequence_input[get_group_id(1)], // p_1304->group_1_offset
        sequence_input[get_group_id(2)], // p_1304->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[0][get_linear_local_id()])), // p_1304->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1305 = c_1306;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1304);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1304->g_4, "p_1304->g_4", print_hash_value);
    transparent_crc(p_1304->g_5, "p_1304->g_5", print_hash_value);
    transparent_crc(p_1304->g_8.x, "p_1304->g_8.x", print_hash_value);
    transparent_crc(p_1304->g_8.y, "p_1304->g_8.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1304->g_51[i][j], "p_1304->g_51[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1304->g_64, "p_1304->g_64", print_hash_value);
    transparent_crc(p_1304->g_86.s0, "p_1304->g_86.s0", print_hash_value);
    transparent_crc(p_1304->g_86.s1, "p_1304->g_86.s1", print_hash_value);
    transparent_crc(p_1304->g_86.s2, "p_1304->g_86.s2", print_hash_value);
    transparent_crc(p_1304->g_86.s3, "p_1304->g_86.s3", print_hash_value);
    transparent_crc(p_1304->g_86.s4, "p_1304->g_86.s4", print_hash_value);
    transparent_crc(p_1304->g_86.s5, "p_1304->g_86.s5", print_hash_value);
    transparent_crc(p_1304->g_86.s6, "p_1304->g_86.s6", print_hash_value);
    transparent_crc(p_1304->g_86.s7, "p_1304->g_86.s7", print_hash_value);
    transparent_crc(p_1304->g_86.s8, "p_1304->g_86.s8", print_hash_value);
    transparent_crc(p_1304->g_86.s9, "p_1304->g_86.s9", print_hash_value);
    transparent_crc(p_1304->g_86.sa, "p_1304->g_86.sa", print_hash_value);
    transparent_crc(p_1304->g_86.sb, "p_1304->g_86.sb", print_hash_value);
    transparent_crc(p_1304->g_86.sc, "p_1304->g_86.sc", print_hash_value);
    transparent_crc(p_1304->g_86.sd, "p_1304->g_86.sd", print_hash_value);
    transparent_crc(p_1304->g_86.se, "p_1304->g_86.se", print_hash_value);
    transparent_crc(p_1304->g_86.sf, "p_1304->g_86.sf", print_hash_value);
    transparent_crc(p_1304->g_97.s0, "p_1304->g_97.s0", print_hash_value);
    transparent_crc(p_1304->g_97.s1, "p_1304->g_97.s1", print_hash_value);
    transparent_crc(p_1304->g_97.s2, "p_1304->g_97.s2", print_hash_value);
    transparent_crc(p_1304->g_97.s3, "p_1304->g_97.s3", print_hash_value);
    transparent_crc(p_1304->g_97.s4, "p_1304->g_97.s4", print_hash_value);
    transparent_crc(p_1304->g_97.s5, "p_1304->g_97.s5", print_hash_value);
    transparent_crc(p_1304->g_97.s6, "p_1304->g_97.s6", print_hash_value);
    transparent_crc(p_1304->g_97.s7, "p_1304->g_97.s7", print_hash_value);
    transparent_crc(p_1304->g_97.s8, "p_1304->g_97.s8", print_hash_value);
    transparent_crc(p_1304->g_97.s9, "p_1304->g_97.s9", print_hash_value);
    transparent_crc(p_1304->g_97.sa, "p_1304->g_97.sa", print_hash_value);
    transparent_crc(p_1304->g_97.sb, "p_1304->g_97.sb", print_hash_value);
    transparent_crc(p_1304->g_97.sc, "p_1304->g_97.sc", print_hash_value);
    transparent_crc(p_1304->g_97.sd, "p_1304->g_97.sd", print_hash_value);
    transparent_crc(p_1304->g_97.se, "p_1304->g_97.se", print_hash_value);
    transparent_crc(p_1304->g_97.sf, "p_1304->g_97.sf", print_hash_value);
    transparent_crc(p_1304->g_109, "p_1304->g_109", print_hash_value);
    transparent_crc(p_1304->g_132, "p_1304->g_132", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1304->g_479[i], "p_1304->g_479[i]", print_hash_value);

    }
    transparent_crc(p_1304->g_484.x, "p_1304->g_484.x", print_hash_value);
    transparent_crc(p_1304->g_484.y, "p_1304->g_484.y", print_hash_value);
    transparent_crc(p_1304->g_484.z, "p_1304->g_484.z", print_hash_value);
    transparent_crc(p_1304->g_484.w, "p_1304->g_484.w", print_hash_value);
    transparent_crc(p_1304->g_526.x, "p_1304->g_526.x", print_hash_value);
    transparent_crc(p_1304->g_526.y, "p_1304->g_526.y", print_hash_value);
    transparent_crc(p_1304->g_527.s0, "p_1304->g_527.s0", print_hash_value);
    transparent_crc(p_1304->g_527.s1, "p_1304->g_527.s1", print_hash_value);
    transparent_crc(p_1304->g_527.s2, "p_1304->g_527.s2", print_hash_value);
    transparent_crc(p_1304->g_527.s3, "p_1304->g_527.s3", print_hash_value);
    transparent_crc(p_1304->g_527.s4, "p_1304->g_527.s4", print_hash_value);
    transparent_crc(p_1304->g_527.s5, "p_1304->g_527.s5", print_hash_value);
    transparent_crc(p_1304->g_527.s6, "p_1304->g_527.s6", print_hash_value);
    transparent_crc(p_1304->g_527.s7, "p_1304->g_527.s7", print_hash_value);
    transparent_crc(p_1304->g_527.s8, "p_1304->g_527.s8", print_hash_value);
    transparent_crc(p_1304->g_527.s9, "p_1304->g_527.s9", print_hash_value);
    transparent_crc(p_1304->g_527.sa, "p_1304->g_527.sa", print_hash_value);
    transparent_crc(p_1304->g_527.sb, "p_1304->g_527.sb", print_hash_value);
    transparent_crc(p_1304->g_527.sc, "p_1304->g_527.sc", print_hash_value);
    transparent_crc(p_1304->g_527.sd, "p_1304->g_527.sd", print_hash_value);
    transparent_crc(p_1304->g_527.se, "p_1304->g_527.se", print_hash_value);
    transparent_crc(p_1304->g_527.sf, "p_1304->g_527.sf", print_hash_value);
    transparent_crc(p_1304->g_549.x, "p_1304->g_549.x", print_hash_value);
    transparent_crc(p_1304->g_549.y, "p_1304->g_549.y", print_hash_value);
    transparent_crc(p_1304->g_551.x, "p_1304->g_551.x", print_hash_value);
    transparent_crc(p_1304->g_551.y, "p_1304->g_551.y", print_hash_value);
    transparent_crc(p_1304->g_551.z, "p_1304->g_551.z", print_hash_value);
    transparent_crc(p_1304->g_551.w, "p_1304->g_551.w", print_hash_value);
    transparent_crc(p_1304->g_552.s0, "p_1304->g_552.s0", print_hash_value);
    transparent_crc(p_1304->g_552.s1, "p_1304->g_552.s1", print_hash_value);
    transparent_crc(p_1304->g_552.s2, "p_1304->g_552.s2", print_hash_value);
    transparent_crc(p_1304->g_552.s3, "p_1304->g_552.s3", print_hash_value);
    transparent_crc(p_1304->g_552.s4, "p_1304->g_552.s4", print_hash_value);
    transparent_crc(p_1304->g_552.s5, "p_1304->g_552.s5", print_hash_value);
    transparent_crc(p_1304->g_552.s6, "p_1304->g_552.s6", print_hash_value);
    transparent_crc(p_1304->g_552.s7, "p_1304->g_552.s7", print_hash_value);
    transparent_crc(p_1304->g_552.s8, "p_1304->g_552.s8", print_hash_value);
    transparent_crc(p_1304->g_552.s9, "p_1304->g_552.s9", print_hash_value);
    transparent_crc(p_1304->g_552.sa, "p_1304->g_552.sa", print_hash_value);
    transparent_crc(p_1304->g_552.sb, "p_1304->g_552.sb", print_hash_value);
    transparent_crc(p_1304->g_552.sc, "p_1304->g_552.sc", print_hash_value);
    transparent_crc(p_1304->g_552.sd, "p_1304->g_552.sd", print_hash_value);
    transparent_crc(p_1304->g_552.se, "p_1304->g_552.se", print_hash_value);
    transparent_crc(p_1304->g_552.sf, "p_1304->g_552.sf", print_hash_value);
    transparent_crc(p_1304->g_554.s0, "p_1304->g_554.s0", print_hash_value);
    transparent_crc(p_1304->g_554.s1, "p_1304->g_554.s1", print_hash_value);
    transparent_crc(p_1304->g_554.s2, "p_1304->g_554.s2", print_hash_value);
    transparent_crc(p_1304->g_554.s3, "p_1304->g_554.s3", print_hash_value);
    transparent_crc(p_1304->g_554.s4, "p_1304->g_554.s4", print_hash_value);
    transparent_crc(p_1304->g_554.s5, "p_1304->g_554.s5", print_hash_value);
    transparent_crc(p_1304->g_554.s6, "p_1304->g_554.s6", print_hash_value);
    transparent_crc(p_1304->g_554.s7, "p_1304->g_554.s7", print_hash_value);
    transparent_crc(p_1304->g_554.s8, "p_1304->g_554.s8", print_hash_value);
    transparent_crc(p_1304->g_554.s9, "p_1304->g_554.s9", print_hash_value);
    transparent_crc(p_1304->g_554.sa, "p_1304->g_554.sa", print_hash_value);
    transparent_crc(p_1304->g_554.sb, "p_1304->g_554.sb", print_hash_value);
    transparent_crc(p_1304->g_554.sc, "p_1304->g_554.sc", print_hash_value);
    transparent_crc(p_1304->g_554.sd, "p_1304->g_554.sd", print_hash_value);
    transparent_crc(p_1304->g_554.se, "p_1304->g_554.se", print_hash_value);
    transparent_crc(p_1304->g_554.sf, "p_1304->g_554.sf", print_hash_value);
    transparent_crc(p_1304->g_555.x, "p_1304->g_555.x", print_hash_value);
    transparent_crc(p_1304->g_555.y, "p_1304->g_555.y", print_hash_value);
    transparent_crc(p_1304->g_555.z, "p_1304->g_555.z", print_hash_value);
    transparent_crc(p_1304->g_555.w, "p_1304->g_555.w", print_hash_value);
    transparent_crc(p_1304->g_564, "p_1304->g_564", print_hash_value);
    transparent_crc(p_1304->g_567, "p_1304->g_567", print_hash_value);
    transparent_crc(p_1304->g_597, "p_1304->g_597", print_hash_value);
    transparent_crc(p_1304->g_601.s0, "p_1304->g_601.s0", print_hash_value);
    transparent_crc(p_1304->g_601.s1, "p_1304->g_601.s1", print_hash_value);
    transparent_crc(p_1304->g_601.s2, "p_1304->g_601.s2", print_hash_value);
    transparent_crc(p_1304->g_601.s3, "p_1304->g_601.s3", print_hash_value);
    transparent_crc(p_1304->g_601.s4, "p_1304->g_601.s4", print_hash_value);
    transparent_crc(p_1304->g_601.s5, "p_1304->g_601.s5", print_hash_value);
    transparent_crc(p_1304->g_601.s6, "p_1304->g_601.s6", print_hash_value);
    transparent_crc(p_1304->g_601.s7, "p_1304->g_601.s7", print_hash_value);
    transparent_crc(p_1304->g_637, "p_1304->g_637", print_hash_value);
    transparent_crc(p_1304->g_650.s0, "p_1304->g_650.s0", print_hash_value);
    transparent_crc(p_1304->g_650.s1, "p_1304->g_650.s1", print_hash_value);
    transparent_crc(p_1304->g_650.s2, "p_1304->g_650.s2", print_hash_value);
    transparent_crc(p_1304->g_650.s3, "p_1304->g_650.s3", print_hash_value);
    transparent_crc(p_1304->g_650.s4, "p_1304->g_650.s4", print_hash_value);
    transparent_crc(p_1304->g_650.s5, "p_1304->g_650.s5", print_hash_value);
    transparent_crc(p_1304->g_650.s6, "p_1304->g_650.s6", print_hash_value);
    transparent_crc(p_1304->g_650.s7, "p_1304->g_650.s7", print_hash_value);
    transparent_crc(p_1304->g_667.s0, "p_1304->g_667.s0", print_hash_value);
    transparent_crc(p_1304->g_667.s1, "p_1304->g_667.s1", print_hash_value);
    transparent_crc(p_1304->g_667.s2, "p_1304->g_667.s2", print_hash_value);
    transparent_crc(p_1304->g_667.s3, "p_1304->g_667.s3", print_hash_value);
    transparent_crc(p_1304->g_667.s4, "p_1304->g_667.s4", print_hash_value);
    transparent_crc(p_1304->g_667.s5, "p_1304->g_667.s5", print_hash_value);
    transparent_crc(p_1304->g_667.s6, "p_1304->g_667.s6", print_hash_value);
    transparent_crc(p_1304->g_667.s7, "p_1304->g_667.s7", print_hash_value);
    transparent_crc(p_1304->g_667.s8, "p_1304->g_667.s8", print_hash_value);
    transparent_crc(p_1304->g_667.s9, "p_1304->g_667.s9", print_hash_value);
    transparent_crc(p_1304->g_667.sa, "p_1304->g_667.sa", print_hash_value);
    transparent_crc(p_1304->g_667.sb, "p_1304->g_667.sb", print_hash_value);
    transparent_crc(p_1304->g_667.sc, "p_1304->g_667.sc", print_hash_value);
    transparent_crc(p_1304->g_667.sd, "p_1304->g_667.sd", print_hash_value);
    transparent_crc(p_1304->g_667.se, "p_1304->g_667.se", print_hash_value);
    transparent_crc(p_1304->g_667.sf, "p_1304->g_667.sf", print_hash_value);
    transparent_crc(p_1304->g_670.s0, "p_1304->g_670.s0", print_hash_value);
    transparent_crc(p_1304->g_670.s1, "p_1304->g_670.s1", print_hash_value);
    transparent_crc(p_1304->g_670.s2, "p_1304->g_670.s2", print_hash_value);
    transparent_crc(p_1304->g_670.s3, "p_1304->g_670.s3", print_hash_value);
    transparent_crc(p_1304->g_670.s4, "p_1304->g_670.s4", print_hash_value);
    transparent_crc(p_1304->g_670.s5, "p_1304->g_670.s5", print_hash_value);
    transparent_crc(p_1304->g_670.s6, "p_1304->g_670.s6", print_hash_value);
    transparent_crc(p_1304->g_670.s7, "p_1304->g_670.s7", print_hash_value);
    transparent_crc(p_1304->g_692.x, "p_1304->g_692.x", print_hash_value);
    transparent_crc(p_1304->g_692.y, "p_1304->g_692.y", print_hash_value);
    transparent_crc(p_1304->g_714, "p_1304->g_714", print_hash_value);
    transparent_crc(p_1304->g_732.x, "p_1304->g_732.x", print_hash_value);
    transparent_crc(p_1304->g_732.y, "p_1304->g_732.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1304->g_739[i], "p_1304->g_739[i]", print_hash_value);

    }
    transparent_crc(p_1304->g_740, "p_1304->g_740", print_hash_value);
    transparent_crc(p_1304->g_742, "p_1304->g_742", print_hash_value);
    transparent_crc(p_1304->g_771, "p_1304->g_771", print_hash_value);
    transparent_crc(p_1304->g_804, "p_1304->g_804", print_hash_value);
    transparent_crc(p_1304->g_854.x, "p_1304->g_854.x", print_hash_value);
    transparent_crc(p_1304->g_854.y, "p_1304->g_854.y", print_hash_value);
    transparent_crc(p_1304->g_909, "p_1304->g_909", print_hash_value);
    transparent_crc(p_1304->g_929.x, "p_1304->g_929.x", print_hash_value);
    transparent_crc(p_1304->g_929.y, "p_1304->g_929.y", print_hash_value);
    transparent_crc(p_1304->g_929.z, "p_1304->g_929.z", print_hash_value);
    transparent_crc(p_1304->g_929.w, "p_1304->g_929.w", print_hash_value);
    transparent_crc(p_1304->g_948, "p_1304->g_948", print_hash_value);
    transparent_crc(p_1304->g_992.x, "p_1304->g_992.x", print_hash_value);
    transparent_crc(p_1304->g_992.y, "p_1304->g_992.y", print_hash_value);
    transparent_crc(p_1304->g_992.z, "p_1304->g_992.z", print_hash_value);
    transparent_crc(p_1304->g_992.w, "p_1304->g_992.w", print_hash_value);
    transparent_crc(p_1304->g_999.x, "p_1304->g_999.x", print_hash_value);
    transparent_crc(p_1304->g_999.y, "p_1304->g_999.y", print_hash_value);
    transparent_crc(p_1304->g_1000.s0, "p_1304->g_1000.s0", print_hash_value);
    transparent_crc(p_1304->g_1000.s1, "p_1304->g_1000.s1", print_hash_value);
    transparent_crc(p_1304->g_1000.s2, "p_1304->g_1000.s2", print_hash_value);
    transparent_crc(p_1304->g_1000.s3, "p_1304->g_1000.s3", print_hash_value);
    transparent_crc(p_1304->g_1000.s4, "p_1304->g_1000.s4", print_hash_value);
    transparent_crc(p_1304->g_1000.s5, "p_1304->g_1000.s5", print_hash_value);
    transparent_crc(p_1304->g_1000.s6, "p_1304->g_1000.s6", print_hash_value);
    transparent_crc(p_1304->g_1000.s7, "p_1304->g_1000.s7", print_hash_value);
    transparent_crc(p_1304->g_1011, "p_1304->g_1011", print_hash_value);
    transparent_crc(p_1304->g_1023.x, "p_1304->g_1023.x", print_hash_value);
    transparent_crc(p_1304->g_1023.y, "p_1304->g_1023.y", print_hash_value);
    transparent_crc(p_1304->g_1028.s0, "p_1304->g_1028.s0", print_hash_value);
    transparent_crc(p_1304->g_1028.s1, "p_1304->g_1028.s1", print_hash_value);
    transparent_crc(p_1304->g_1028.s2, "p_1304->g_1028.s2", print_hash_value);
    transparent_crc(p_1304->g_1028.s3, "p_1304->g_1028.s3", print_hash_value);
    transparent_crc(p_1304->g_1028.s4, "p_1304->g_1028.s4", print_hash_value);
    transparent_crc(p_1304->g_1028.s5, "p_1304->g_1028.s5", print_hash_value);
    transparent_crc(p_1304->g_1028.s6, "p_1304->g_1028.s6", print_hash_value);
    transparent_crc(p_1304->g_1028.s7, "p_1304->g_1028.s7", print_hash_value);
    transparent_crc(p_1304->g_1028.s8, "p_1304->g_1028.s8", print_hash_value);
    transparent_crc(p_1304->g_1028.s9, "p_1304->g_1028.s9", print_hash_value);
    transparent_crc(p_1304->g_1028.sa, "p_1304->g_1028.sa", print_hash_value);
    transparent_crc(p_1304->g_1028.sb, "p_1304->g_1028.sb", print_hash_value);
    transparent_crc(p_1304->g_1028.sc, "p_1304->g_1028.sc", print_hash_value);
    transparent_crc(p_1304->g_1028.sd, "p_1304->g_1028.sd", print_hash_value);
    transparent_crc(p_1304->g_1028.se, "p_1304->g_1028.se", print_hash_value);
    transparent_crc(p_1304->g_1028.sf, "p_1304->g_1028.sf", print_hash_value);
    transparent_crc(p_1304->g_1039.x, "p_1304->g_1039.x", print_hash_value);
    transparent_crc(p_1304->g_1039.y, "p_1304->g_1039.y", print_hash_value);
    transparent_crc(p_1304->g_1085.s0, "p_1304->g_1085.s0", print_hash_value);
    transparent_crc(p_1304->g_1085.s1, "p_1304->g_1085.s1", print_hash_value);
    transparent_crc(p_1304->g_1085.s2, "p_1304->g_1085.s2", print_hash_value);
    transparent_crc(p_1304->g_1085.s3, "p_1304->g_1085.s3", print_hash_value);
    transparent_crc(p_1304->g_1085.s4, "p_1304->g_1085.s4", print_hash_value);
    transparent_crc(p_1304->g_1085.s5, "p_1304->g_1085.s5", print_hash_value);
    transparent_crc(p_1304->g_1085.s6, "p_1304->g_1085.s6", print_hash_value);
    transparent_crc(p_1304->g_1085.s7, "p_1304->g_1085.s7", print_hash_value);
    transparent_crc(p_1304->g_1090.s0, "p_1304->g_1090.s0", print_hash_value);
    transparent_crc(p_1304->g_1090.s1, "p_1304->g_1090.s1", print_hash_value);
    transparent_crc(p_1304->g_1090.s2, "p_1304->g_1090.s2", print_hash_value);
    transparent_crc(p_1304->g_1090.s3, "p_1304->g_1090.s3", print_hash_value);
    transparent_crc(p_1304->g_1090.s4, "p_1304->g_1090.s4", print_hash_value);
    transparent_crc(p_1304->g_1090.s5, "p_1304->g_1090.s5", print_hash_value);
    transparent_crc(p_1304->g_1090.s6, "p_1304->g_1090.s6", print_hash_value);
    transparent_crc(p_1304->g_1090.s7, "p_1304->g_1090.s7", print_hash_value);
    transparent_crc(p_1304->g_1122.s0, "p_1304->g_1122.s0", print_hash_value);
    transparent_crc(p_1304->g_1122.s1, "p_1304->g_1122.s1", print_hash_value);
    transparent_crc(p_1304->g_1122.s2, "p_1304->g_1122.s2", print_hash_value);
    transparent_crc(p_1304->g_1122.s3, "p_1304->g_1122.s3", print_hash_value);
    transparent_crc(p_1304->g_1122.s4, "p_1304->g_1122.s4", print_hash_value);
    transparent_crc(p_1304->g_1122.s5, "p_1304->g_1122.s5", print_hash_value);
    transparent_crc(p_1304->g_1122.s6, "p_1304->g_1122.s6", print_hash_value);
    transparent_crc(p_1304->g_1122.s7, "p_1304->g_1122.s7", print_hash_value);
    transparent_crc(p_1304->g_1151.s0, "p_1304->g_1151.s0", print_hash_value);
    transparent_crc(p_1304->g_1151.s1, "p_1304->g_1151.s1", print_hash_value);
    transparent_crc(p_1304->g_1151.s2, "p_1304->g_1151.s2", print_hash_value);
    transparent_crc(p_1304->g_1151.s3, "p_1304->g_1151.s3", print_hash_value);
    transparent_crc(p_1304->g_1151.s4, "p_1304->g_1151.s4", print_hash_value);
    transparent_crc(p_1304->g_1151.s5, "p_1304->g_1151.s5", print_hash_value);
    transparent_crc(p_1304->g_1151.s6, "p_1304->g_1151.s6", print_hash_value);
    transparent_crc(p_1304->g_1151.s7, "p_1304->g_1151.s7", print_hash_value);
    transparent_crc(p_1304->g_1178.x, "p_1304->g_1178.x", print_hash_value);
    transparent_crc(p_1304->g_1178.y, "p_1304->g_1178.y", print_hash_value);
    transparent_crc(p_1304->g_1216.x, "p_1304->g_1216.x", print_hash_value);
    transparent_crc(p_1304->g_1216.y, "p_1304->g_1216.y", print_hash_value);
    transparent_crc(p_1304->g_1216.z, "p_1304->g_1216.z", print_hash_value);
    transparent_crc(p_1304->g_1216.w, "p_1304->g_1216.w", print_hash_value);
    transparent_crc(p_1304->g_1228.x, "p_1304->g_1228.x", print_hash_value);
    transparent_crc(p_1304->g_1228.y, "p_1304->g_1228.y", print_hash_value);
    transparent_crc(p_1304->g_1228.z, "p_1304->g_1228.z", print_hash_value);
    transparent_crc(p_1304->g_1228.w, "p_1304->g_1228.w", print_hash_value);
    transparent_crc(p_1304->g_1229.s0, "p_1304->g_1229.s0", print_hash_value);
    transparent_crc(p_1304->g_1229.s1, "p_1304->g_1229.s1", print_hash_value);
    transparent_crc(p_1304->g_1229.s2, "p_1304->g_1229.s2", print_hash_value);
    transparent_crc(p_1304->g_1229.s3, "p_1304->g_1229.s3", print_hash_value);
    transparent_crc(p_1304->g_1229.s4, "p_1304->g_1229.s4", print_hash_value);
    transparent_crc(p_1304->g_1229.s5, "p_1304->g_1229.s5", print_hash_value);
    transparent_crc(p_1304->g_1229.s6, "p_1304->g_1229.s6", print_hash_value);
    transparent_crc(p_1304->g_1229.s7, "p_1304->g_1229.s7", print_hash_value);
    transparent_crc(p_1304->g_1302, "p_1304->g_1302", print_hash_value);
    transparent_crc(p_1304->v_collective, "p_1304->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 54; i++)
            transparent_crc(p_1304->g_special_values[i + 54 * get_linear_group_id()], "p_1304->g_special_values[i + 54 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 54; i++)
            transparent_crc(p_1304->l_special_values[i], "p_1304->l_special_values[i]", print_hash_value);
    transparent_crc(p_1304->l_comm_values[get_linear_local_id()], "p_1304->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1304->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()], "p_1304->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
