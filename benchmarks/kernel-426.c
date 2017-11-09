// --atomics 2 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,73,1 -l 33,1,1
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
{2,30,15,7,10,32,29,26,18,20,19,25,14,31,27,3,9,6,17,13,8,4,22,21,11,12,5,28,24,0,16,1,23}, // permutation 0
{1,8,17,31,27,10,14,9,25,6,30,23,2,29,16,4,24,13,32,18,0,21,11,5,19,28,12,7,20,26,15,3,22}, // permutation 1
{23,16,24,31,10,3,17,11,27,7,15,21,20,6,5,22,12,18,30,26,9,4,0,14,8,2,1,28,19,32,29,13,25}, // permutation 2
{22,12,14,26,0,13,4,3,1,6,19,10,9,2,18,21,32,31,5,17,30,11,29,24,20,23,25,8,16,7,28,15,27}, // permutation 3
{9,7,25,15,14,19,20,4,22,5,32,31,2,10,6,26,27,29,0,16,12,1,3,24,11,17,18,13,8,28,21,23,30}, // permutation 4
{25,16,18,4,13,28,27,22,12,1,2,21,8,7,31,32,20,15,26,10,14,3,0,30,6,17,29,24,23,19,5,11,9}, // permutation 5
{9,18,11,5,13,14,29,28,19,1,26,31,32,2,17,20,16,3,12,24,0,30,21,4,6,22,7,23,27,10,8,15,25}, // permutation 6
{27,26,15,20,1,31,17,18,24,11,19,12,9,10,29,14,8,4,30,16,22,3,2,21,23,0,7,5,13,25,28,32,6}, // permutation 7
{24,4,10,32,9,19,27,22,13,15,26,12,3,1,29,30,23,25,31,14,11,6,28,17,18,2,7,8,16,21,0,5,20}, // permutation 8
{5,3,19,11,9,12,28,21,26,31,29,27,22,10,17,24,23,13,8,1,6,15,7,18,25,4,30,32,0,2,14,16,20} // permutation 9
};

// Seed: 1155819152

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   volatile uint32_t  f2;
   volatile uint32_t  f3;
   uint64_t  f4;
};

union U1 {
   volatile int8_t  f0;
   volatile uint32_t  f1;
};

struct S2 {
    volatile int8_t g_9[3];
    VECTOR(int8_t, 2) g_23;
    VECTOR(int8_t, 8) g_24;
    volatile VECTOR(int8_t, 4) g_26;
    VECTOR(int8_t, 8) g_27;
    volatile VECTOR(int8_t, 8) g_28;
    volatile VECTOR(int8_t, 16) g_29;
    uint32_t g_42;
    uint32_t *g_41;
    int32_t g_44[7][1][2];
    int32_t *g_43[10][3];
    int8_t *g_51[9][10];
    int8_t g_74[5];
    VECTOR(int8_t, 8) g_98;
    int32_t g_113;
    union U1 g_116;
    uint32_t g_141;
    uint16_t g_143[9][9][3];
    VECTOR(uint32_t, 16) g_146;
    VECTOR(int16_t, 16) g_147;
    int16_t g_150;
    int16_t g_158;
    volatile union U1 g_159;
    int32_t *g_168;
    volatile VECTOR(uint8_t, 4) g_177;
    VECTOR(uint16_t, 16) g_210;
    volatile struct S0 g_224;
    volatile struct S0 * volatile g_225;
    int32_t ** volatile g_236;
    uint16_t *g_257;
    uint16_t **g_256[5];
    struct S0 g_264;
    int32_t g_297;
    struct S0 g_299;
    struct S0 g_300;
    volatile struct S0 * volatile g_302[4];
    volatile struct S0 * volatile g_303[9];
    int32_t ** volatile g_319[3][3];
    int32_t ** volatile g_320;
    int32_t ** volatile g_321[5];
    volatile VECTOR(uint8_t, 2) g_327;
    volatile VECTOR(uint8_t, 16) g_331;
    VECTOR(uint8_t, 4) g_334;
    VECTOR(uint8_t, 4) g_335;
    VECTOR(uint32_t, 16) g_336;
    VECTOR(uint32_t, 8) g_356;
    VECTOR(uint64_t, 16) g_370;
    VECTOR(uint64_t, 16) g_371;
    volatile VECTOR(uint64_t, 2) g_372;
    int32_t ** volatile g_391;
    int32_t ** volatile g_393;
    struct S0 g_414;
    struct S0 g_415;
    VECTOR(uint8_t, 4) g_422;
    volatile VECTOR(int8_t, 4) g_423;
    VECTOR(int8_t, 16) g_424;
    volatile VECTOR(int8_t, 2) g_427;
    volatile VECTOR(uint8_t, 4) g_439;
    uint32_t g_456;
    volatile uint64_t g_468[8][5];
    uint16_t *** volatile g_472;
    uint16_t *** volatile g_473[10][5];
    volatile union U1 *g_524;
    volatile struct S0 g_528;
    volatile struct S0 * volatile g_529;
    uint8_t g_564;
    volatile struct S0 g_574;
    volatile struct S0 * volatile g_575;
    volatile struct S0 * volatile g_576;
    volatile struct S0 g_598;
    volatile struct S0 * volatile g_599[6][3];
    struct S0 g_601;
    int32_t * volatile g_605;
    uint32_t *g_613[5];
    uint32_t *g_615;
    volatile struct S0 *g_629;
    volatile struct S0 ** volatile g_628;
    volatile uint32_t * volatile g_636;
    int32_t **g_640;
    VECTOR(int16_t, 4) g_653;
    VECTOR(int32_t, 16) g_675;
    uint32_t **g_693;
    int32_t g_704;
    volatile struct S0 * volatile *g_708;
    int32_t ** volatile g_722;
    uint64_t g_725[6];
    volatile VECTOR(int8_t, 8) g_742;
    volatile VECTOR(int8_t, 8) g_743;
    VECTOR(int16_t, 16) g_791;
    struct S0 g_792;
    volatile struct S0 g_796;
    int32_t g_825[1][1][3];
    VECTOR(int32_t, 2) g_848;
    VECTOR(int32_t, 8) g_849;
    VECTOR(int32_t, 8) g_850;
    struct S0 g_853;
    struct S0 *g_852;
    struct S0 **g_851;
    union U1 **g_866;
    union U1 ***g_865;
    VECTOR(int32_t, 2) g_871;
    struct S0 g_899;
    volatile VECTOR(int8_t, 4) g_906;
    volatile uint8_t g_953;
    int32_t * volatile g_959;
    int32_t * volatile g_1018;
    int32_t * volatile g_1019[1][7][6];
    VECTOR(int32_t, 16) g_1023;
    volatile uint16_t * volatile * volatile *g_1033;
    volatile uint16_t * volatile * volatile **g_1032;
    int32_t g_1073;
    volatile VECTOR(int8_t, 2) g_1101;
    volatile VECTOR(int8_t, 2) g_1107;
    union U1 g_1114;
    VECTOR(int8_t, 4) g_1122;
    int32_t g_1149;
    union U1 g_1154[7][1][3];
    VECTOR(uint64_t, 8) g_1160;
    volatile union U1 g_1169;
    VECTOR(int32_t, 8) g_1173;
    int32_t * volatile g_1186;
    VECTOR(int32_t, 4) g_1226;
    int32_t * volatile g_1248;
    VECTOR(uint8_t, 8) g_1259;
    VECTOR(uint8_t, 16) g_1260;
    volatile VECTOR(int64_t, 2) g_1269;
    volatile uint64_t g_1272;
    volatile uint64_t *g_1271;
    volatile uint64_t **g_1270[1][10];
    VECTOR(int32_t, 16) g_1289;
    VECTOR(int32_t, 8) g_1290;
    VECTOR(int32_t, 2) g_1362;
    volatile VECTOR(uint64_t, 2) g_1417;
    volatile int32_t g_1432;
    VECTOR(int64_t, 4) g_1449;
    uint8_t g_1457;
    VECTOR(uint16_t, 2) g_1464;
    VECTOR(uint16_t, 8) g_1465;
    uint8_t *g_1500;
    uint8_t **g_1499;
    VECTOR(int32_t, 4) g_1525;
    volatile union U1 g_1541;
    int16_t g_1569;
    union U1 g_1613[4][7];
    union U1 * volatile g_1612;
    union U1 g_1615[9];
    union U1 *g_1614;
    union U1 * volatile * volatile g_1611[9];
    union U1 * volatile * volatile *g_1610;
    union U1 * volatile * volatile **g_1609;
    union U1 * volatile * volatile ***g_1608;
    int32_t ** volatile g_1619;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int64_t  func_1(struct S2 * p_1620);
int32_t * func_5(int32_t * p_6, struct S2 * p_1620);
int32_t * func_13(uint16_t  p_14, struct S2 * p_1620);
uint64_t  func_33(int32_t  p_34, int8_t  p_35, uint32_t * p_36, int32_t * p_37, uint64_t  p_38, struct S2 * p_1620);
int32_t * func_46(int8_t * p_47, int32_t * p_48, uint32_t  p_49, int32_t * p_50, struct S2 * p_1620);
int32_t * func_52(int64_t  p_53, int8_t * p_54, struct S2 * p_1620);
int16_t  func_57(int64_t  p_58, int32_t  p_59, uint32_t  p_60, int8_t * p_61, uint16_t  p_62, struct S2 * p_1620);
int16_t  func_75(int32_t  p_76, int16_t  p_77, uint64_t  p_78, struct S2 * p_1620);
uint8_t  func_81(int8_t * p_82, uint8_t  p_83, struct S2 * p_1620);
union U1 * func_85(uint32_t  p_86, int32_t  p_87, int8_t  p_88, struct S2 * p_1620);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : permutations p_1620->g_9 p_1620->g_comm_values p_1620->g_23 p_1620->g_24 p_1620->g_26 p_1620->g_27 p_1620->g_28 p_1620->g_29 p_1620->g_41 p_1620->g_43 p_1620->g_51 p_1620->g_44 p_1620->g_74 p_1620->g_116 p_1620->g_147 p_1620->g_159 p_1620->g_150 p_1620->g_177 p_1620->g_210 p_1620->g_146 p_1620->g_143 p_1620->g_42 p_1620->g_224 p_1620->g_225 p_1620->g_236 p_1620->g_264 p_1620->g_299 p_1620->g_391 p_1620->g_297 p_1620->g_414 p_1620->g_113 p_1620->g_468 p_1620->g_528 p_1620->g_529 p_1620->g_300.f0 p_1620->g_331 p_1620->l_comm_values p_1620->g_564 p_1620->g_336 p_1620->g_574 p_1620->g_576 p_1620->g_422 p_1620->g_415.f4 p_1620->g_598 p_1620->g_601 p_1620->g_424 p_1620->g_605 p_1620->g_628 p_1620->g_636 p_1620->g_640 p_1620->g_653 p_1620->g_615 p_1620->g_141 p_1620->g_675 p_1620->g_693 p_1620->g_704 p_1620->g_722 p_1620->g_725 p_1620->g_742 p_1620->g_743 p_1620->g_796 p_1620->g_371 p_1620->g_899 p_1620->g_415.f0 p_1620->g_629 p_1620->g_613 p_1620->g_825 p_1620->g_953 p_1620->g_959 p_1620->g_1023 p_1620->g_1032 p_1620->g_1073 p_1620->g_1101 p_1620->g_1107 p_1620->g_1114 p_1620->g_792.f0 p_1620->g_853.f3 p_1620->g_1122 p_1620->g_1154 p_1620->g_456 p_1620->g_1160 p_1620->g_1169 p_1620->g_1173 p_1620->g_370 p_1620->g_356 p_1620->g_852 p_1620->g_1226 p_1620->g_158 p_1620->g_1248 p_1620->g_1259 p_1620->g_1260 p_1620->g_1269 p_1620->g_1270 p_1620->g_871 p_1620->g_850 p_1620->g_335 p_1620->g_1289 p_1620->g_1290 p_1620->g_1362 p_1620->g_334 p_1620->g_791 p_1620->g_851 p_1620->g_1417 p_1620->g_1432 p_1620->g_1449 p_1620->g_1457 p_1620->g_1464 p_1620->g_1465 p_1620->g_1149 p_1620->g_1499 p_1620->g_853.f0 p_1620->g_1525 p_1620->g_865 p_1620->g_866 p_1620->g_1541 p_1620->g_1569 p_1620->g_168 p_1620->g_853.f1 p_1620->g_848 p_1620->g_1608 p_1620->g_98 p_1620->g_1619
 * writes: p_1620->g_42 p_1620->g_43 p_1620->g_168 p_1620->g_150 p_1620->g_143 p_1620->g_210 p_1620->g_224 p_1620->g_141 p_1620->g_44 p_1620->g_297 p_1620->g_300 p_1620->g_299.f1 p_1620->g_415 p_1620->g_113 p_1620->g_264.f0 p_1620->g_468 p_1620->g_256 p_1620->g_528 p_1620->g_158 p_1620->g_564 p_1620->g_613 p_1620->g_615 p_1620->g_629 p_1620->g_640 p_1620->g_comm_values p_1620->g_693 p_1620->g_601.f4 p_1620->g_704 p_1620->g_414.f4 p_1620->g_708 p_1620->g_147 p_1620->g_371 p_1620->g_414 p_1620->g_953 p_1620->g_725 p_1620->g_899.f0 p_1620->g_853 p_1620->g_74 p_1620->g_899.f4 p_1620->g_598 p_1620->g_791 p_1620->g_852 p_1620->g_1149 p_1620->g_601.f1 p_1620->g_866 p_1620->g_1569
 */
int64_t  func_1(struct S2 * p_1620)
{ /* block id: 4 */
    int8_t l_4 = 5L;
    VECTOR(uint32_t, 16) l_10 = (VECTOR(uint32_t, 16))(0xD409884CL, (VECTOR(uint32_t, 4))(0xD409884CL, (VECTOR(uint32_t, 2))(0xD409884CL, 0xF6C218E9L), 0xF6C218E9L), 0xF6C218E9L, 0xD409884CL, 0xF6C218E9L, (VECTOR(uint32_t, 2))(0xD409884CL, 0xF6C218E9L), (VECTOR(uint32_t, 2))(0xD409884CL, 0xF6C218E9L), 0xD409884CL, 0xF6C218E9L, 0xD409884CL, 0xF6C218E9L);
    uint32_t *l_11[10][4][5] = {{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}},{{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]}}};
    int32_t l_12 = 0x3C239170L;
    VECTOR(int8_t, 2) l_25 = (VECTOR(int8_t, 2))(9L, 1L);
    VECTOR(int8_t, 16) l_30 = (VECTOR(int8_t, 16))(0x68L, (VECTOR(int8_t, 4))(0x68L, (VECTOR(int8_t, 2))(0x68L, 9L), 9L), 9L, 0x68L, 9L, (VECTOR(int8_t, 2))(0x68L, 9L), (VECTOR(int8_t, 2))(0x68L, 9L), 0x68L, 9L, 0x68L, 9L);
    int8_t *l_39 = (void*)0;
    int8_t *l_40 = (void*)0;
    uint64_t l_45[5][9] = {{0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL},{0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL},{0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL},{0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL},{0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL,0x62A889E4E2CD5B9AL,0UL,0x62A889E4E2CD5B9AL}};
    int i, j, k;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1620->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]));
    (*p_1620->g_1619) = func_5(((l_12 = ((safe_add_func_uint8_t_u_u(1UL, (permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_4, (-1L))), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))] && p_1620->g_9[0]))) , ((VECTOR(uint32_t, 16))(l_10.s934b0b4ef66b17b7)).s2)) , func_13((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_10.sf, 1)), ((VECTOR(int8_t, 16))((p_1620->g_comm_values[p_1620->tid] <= (safe_div_func_int16_t_s_s(3L, l_10.s9))), ((VECTOR(int8_t, 2))(p_1620->g_23.yy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x5FL, ((VECTOR(int8_t, 2))(0L, 1L)), 0x4EL)))), ((VECTOR(int8_t, 2))(p_1620->g_24.s43)).yxxy))).hi, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(l_25.yx)).xyyxyxxx, ((VECTOR(int8_t, 4))(p_1620->g_26.xxxz)).yxyxxyyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1620->g_27.s35)).xxyxyxyxyyyxxyyy)).hi))).s13, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x5EL, 0x1BL)).xyyx)).xxwzxxzxxzxxxzxz)).lo, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1620->g_28.s56)), 1L, 1L)).wzwwxxzz)).s7535135170115540)).lo, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(p_1620->g_29.sa125)).wzyzwzwzxwwxxxww, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(l_30.s9fa4ee4b)).s4340730222041150, (int8_t)(safe_add_func_uint64_t_u_u(func_33(l_10.s0, (l_12 = l_12), p_1620->g_41, p_1620->g_43[4][1], l_45[1][4], p_1620), p_1620->g_725[0]))))).s94, ((VECTOR(int8_t, 2))(0x68L)), ((VECTOR(int8_t, 2))((-1L)))))), 0x30L, 5L)).zxyyywyzwxywzzyx, ((VECTOR(int8_t, 16))((-9L)))))).hi)).s64, ((VECTOR(int8_t, 2))((-5L)))))).xxxyyyyx))).odd, ((VECTOR(int8_t, 4))(6L))))).even, ((VECTOR(int8_t, 2))(0x16L)))))))).even, ((VECTOR(int8_t, 2))((-1L))), 0x25L)), ((VECTOR(int8_t, 8))(0x14L)), 0x10L)).s1)), p_1620->g_147.sf)), p_1620)), p_1620);
    return p_1620->g_98.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_742 p_1620->g_743 p_1620->g_224.f3 p_1620->g_24 p_1620->g_147 p_1620->g_564 p_1620->g_675 p_1620->g_41 p_1620->g_615 p_1620->g_640 p_1620->g_44 p_1620->g_796 p_1620->g_297 p_1620->g_23 p_1620->g_628 p_1620->g_629 p_1620->g_74 p_1620->g_613 p_1620->g_113 p_1620->g_42 p_1620->g_825 p_1620->g_143 p_1620->g_414 p_1620->g_264.f4 p_1620->g_693 p_1620->g_371 p_1620->g_299.f0 p_1620->g_899 p_1620->g_415.f0 p_1620->g_27 p_1620->g_953 p_1620->g_150 p_1620->g_959 p_1620->g_1023 p_1620->g_331 p_1620->g_528.f3 p_1620->g_601.f2 p_1620->g_1032 p_1620->g_1073 p_1620->g_1101 p_1620->g_1107 p_1620->g_1114 p_1620->g_792.f0 p_1620->g_299.f4 p_1620->g_853.f3 p_1620->g_1122 p_1620->g_415.f4 p_1620->g_605 p_1620->g_1154 p_1620->g_456 p_1620->g_1160 p_1620->g_1169 p_1620->g_722 p_1620->g_1173 p_1620->g_370 p_1620->g_299.f1 p_1620->g_141 p_1620->g_356 p_1620->g_852 p_1620->g_1226 p_1620->g_158 p_1620->g_1248 p_1620->g_224 p_1620->g_598 p_1620->g_1259 p_1620->g_1260 p_1620->g_1269 p_1620->g_1270 p_1620->g_871 p_1620->g_850 p_1620->g_335 p_1620->g_529 p_1620->g_528 p_1620->g_1289 p_1620->g_1290 p_1620->g_1362 p_1620->g_653 p_1620->g_601.f1 p_1620->g_334 p_1620->g_791 p_1620->g_851 p_1620->g_1417 p_1620->g_1432 p_1620->g_1449 p_1620->g_1457 p_1620->g_1464 p_1620->g_1465 p_1620->g_422 p_1620->g_424 p_1620->g_1149 p_1620->g_1499 p_1620->g_853.f0 p_1620->g_576 p_1620->g_1525 p_1620->g_865 p_1620->g_866 p_1620->g_704 p_1620->g_1541 p_1620->g_1569 p_1620->g_168 p_1620->g_853.f1 p_1620->g_848 p_1620->g_1608 p_1620->g_98
 * writes: p_1620->g_147 p_1620->g_564 p_1620->g_42 p_1620->g_299.f1 p_1620->g_141 p_1620->g_43 p_1620->g_44 p_1620->g_693 p_1620->g_300.f4 p_1620->g_371 p_1620->g_414 p_1620->g_158 p_1620->g_953 p_1620->g_297 p_1620->g_415.f4 p_1620->g_143 p_1620->g_725 p_1620->g_150 p_1620->g_168 p_1620->g_899.f0 p_1620->g_853 p_1620->g_74 p_1620->g_comm_values p_1620->g_899.f4 p_1620->g_224 p_1620->g_598 p_1620->g_601.f4 p_1620->g_791 p_1620->g_852 p_1620->g_1149 p_1620->g_415 p_1620->g_601.f1 p_1620->g_866 p_1620->g_1569
 */
int32_t * func_5(int32_t * p_6, struct S2 * p_1620)
{ /* block id: 296 */
    uint16_t l_736[7][7][3] = {{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}},{{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL},{0x7ADBL,65527UL,65535UL}}};
    VECTOR(int64_t, 8) l_739 = (VECTOR(int64_t, 8))(0x6D189104BC6F513EL, (VECTOR(int64_t, 4))(0x6D189104BC6F513EL, (VECTOR(int64_t, 2))(0x6D189104BC6F513EL, 0x5A257856BA5B9F0DL), 0x5A257856BA5B9F0DL), 0x5A257856BA5B9F0DL, 0x6D189104BC6F513EL, 0x5A257856BA5B9F0DL);
    VECTOR(int8_t, 4) l_744 = (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x0EL), 0x0EL);
    VECTOR(int8_t, 4) l_745 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-8L)), (-8L));
    VECTOR(uint8_t, 16) l_746 = (VECTOR(uint8_t, 16))(0x9CL, (VECTOR(uint8_t, 4))(0x9CL, (VECTOR(uint8_t, 2))(0x9CL, 0x4BL), 0x4BL), 0x4BL, 0x9CL, 0x4BL, (VECTOR(uint8_t, 2))(0x9CL, 0x4BL), (VECTOR(uint8_t, 2))(0x9CL, 0x4BL), 0x9CL, 0x4BL, 0x9CL, 0x4BL);
    VECTOR(int64_t, 16) l_747 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x499E80A88A682CBFL), 0x499E80A88A682CBFL), 0x499E80A88A682CBFL, (-1L), 0x499E80A88A682CBFL, (VECTOR(int64_t, 2))((-1L), 0x499E80A88A682CBFL), (VECTOR(int64_t, 2))((-1L), 0x499E80A88A682CBFL), (-1L), 0x499E80A88A682CBFL, (-1L), 0x499E80A88A682CBFL);
    int64_t *l_748 = (void*)0;
    int64_t *l_749 = (void*)0;
    int64_t *l_750 = (void*)0;
    VECTOR(int32_t, 8) l_751 = (VECTOR(int32_t, 8))(0x474DDC89L, (VECTOR(int32_t, 4))(0x474DDC89L, (VECTOR(int32_t, 2))(0x474DDC89L, 0x7213A859L), 0x7213A859L), 0x7213A859L, 0x474DDC89L, 0x7213A859L);
    union U1 *l_769[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    union U1 **l_768 = &l_769[3];
    union U1 ***l_770 = &l_768;
    int64_t *l_771 = (void*)0;
    int64_t *l_772[3][2];
    int32_t l_773 = 0x323EF9BDL;
    uint8_t *l_774 = &p_1620->g_564;
    uint8_t *l_775 = (void*)0;
    uint8_t *l_776 = (void*)0;
    int32_t l_777[7][8] = {{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L},{0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L,0x7B03825EL,0x7B03825EL,0x2E20BD80L}};
    int32_t l_778 = (-3L);
    int32_t **l_801 = &p_1620->g_43[2][0];
    struct S0 *l_814 = &p_1620->g_414;
    uint32_t ***l_827 = &p_1620->g_693;
    uint16_t l_836[5][3][6] = {{{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL}},{{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL}},{{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL}},{{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL}},{{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL},{0xA1C6L,0x5447L,0xC4A8L,0xD33CL,1UL,3UL}}};
    VECTOR(int32_t, 4) l_870 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x43624CE9L), 0x43624CE9L);
    int8_t l_894 = (-7L);
    int64_t l_908 = 0x1D87D3ADB1E02C2CL;
    int16_t l_944 = 0x08E8L;
    uint16_t ***l_1025 = &p_1620->g_256[4];
    uint16_t ****l_1024 = &l_1025;
    uint32_t *l_1036 = (void*)0;
    uint64_t l_1060 = 18446744073709551615UL;
    VECTOR(int32_t, 2) l_1086 = (VECTOR(int32_t, 2))(0x6810BF5CL, (-9L));
    int8_t *l_1144 = (void*)0;
    VECTOR(int32_t, 2) l_1145 = (VECTOR(int32_t, 2))(0L, 0x4E94066DL);
    uint16_t l_1150[9][3][1] = {{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}};
    int32_t *l_1188 = (void*)0;
    int32_t *l_1189 = (void*)0;
    int32_t *l_1190 = &l_778;
    uint64_t *l_1199 = &l_1060;
    uint64_t **l_1198[1][9][6] = {{{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199},{&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199}}};
    uint64_t **l_1200 = (void*)0;
    VECTOR(uint16_t, 2) l_1203 = (VECTOR(uint16_t, 2))(0UL, 0UL);
    VECTOR(uint8_t, 2) l_1261 = (VECTOR(uint8_t, 2))(255UL, 0x03L);
    int32_t ***l_1264 = &l_801;
    VECTOR(int32_t, 8) l_1291 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x171EB6C7L), 0x171EB6C7L), 0x171EB6C7L, 0L, 0x171EB6C7L);
    VECTOR(uint16_t, 2) l_1332 = (VECTOR(uint16_t, 2))(65526UL, 1UL);
    int32_t *l_1333 = &p_1620->g_1149;
    int16_t l_1334 = (-1L);
    VECTOR(uint64_t, 16) l_1346 = (VECTOR(uint64_t, 16))(0x2E28CB9236D62861L, (VECTOR(uint64_t, 4))(0x2E28CB9236D62861L, (VECTOR(uint64_t, 2))(0x2E28CB9236D62861L, 0UL), 0UL), 0UL, 0x2E28CB9236D62861L, 0UL, (VECTOR(uint64_t, 2))(0x2E28CB9236D62861L, 0UL), (VECTOR(uint64_t, 2))(0x2E28CB9236D62861L, 0UL), 0x2E28CB9236D62861L, 0UL, 0x2E28CB9236D62861L, 0UL);
    int64_t l_1356 = (-4L);
    VECTOR(int8_t, 8) l_1357 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-3L)), (-3L)), (-3L), 8L, (-3L));
    VECTOR(int32_t, 16) l_1363 = (VECTOR(int32_t, 16))(0x43A4A2EBL, (VECTOR(int32_t, 4))(0x43A4A2EBL, (VECTOR(int32_t, 2))(0x43A4A2EBL, 0x7AF11EABL), 0x7AF11EABL), 0x7AF11EABL, 0x43A4A2EBL, 0x7AF11EABL, (VECTOR(int32_t, 2))(0x43A4A2EBL, 0x7AF11EABL), (VECTOR(int32_t, 2))(0x43A4A2EBL, 0x7AF11EABL), 0x43A4A2EBL, 0x7AF11EABL, 0x43A4A2EBL, 0x7AF11EABL);
    VECTOR(int32_t, 16) l_1364 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x0CD00DF5L), 0x0CD00DF5L), 0x0CD00DF5L, (-2L), 0x0CD00DF5L, (VECTOR(int32_t, 2))((-2L), 0x0CD00DF5L), (VECTOR(int32_t, 2))((-2L), 0x0CD00DF5L), (-2L), 0x0CD00DF5L, (-2L), 0x0CD00DF5L);
    uint64_t l_1365 = 0x0C47BAD39B80CCEDL;
    int32_t l_1380 = 0x6D11C603L;
    VECTOR(uint32_t, 16) l_1419 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x04937234L), 0x04937234L), 0x04937234L, 4UL, 0x04937234L, (VECTOR(uint32_t, 2))(4UL, 0x04937234L), (VECTOR(uint32_t, 2))(4UL, 0x04937234L), 4UL, 0x04937234L, 4UL, 0x04937234L);
    VECTOR(uint64_t, 2) l_1440 = (VECTOR(uint64_t, 2))(0x9F2C9507F84A0DEAL, 3UL);
    VECTOR(uint32_t, 4) l_1467 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL);
    VECTOR(uint32_t, 2) l_1468 = (VECTOR(uint32_t, 2))(0x776DD2A8L, 0xADF14846L);
    int32_t l_1479 = 0x77444F58L;
    VECTOR(int32_t, 16) l_1531 = (VECTOR(int32_t, 16))(0x7DE608D6L, (VECTOR(int32_t, 4))(0x7DE608D6L, (VECTOR(int32_t, 2))(0x7DE608D6L, 0x217BA3D8L), 0x217BA3D8L), 0x217BA3D8L, 0x7DE608D6L, 0x217BA3D8L, (VECTOR(int32_t, 2))(0x7DE608D6L, 0x217BA3D8L), (VECTOR(int32_t, 2))(0x7DE608D6L, 0x217BA3D8L), 0x7DE608D6L, 0x217BA3D8L, 0x7DE608D6L, 0x217BA3D8L);
    int16_t l_1538 = (-1L);
    uint16_t l_1583 = 0x97C1L;
    union U1 *****l_1616 = (void*)0;
    VECTOR(uint32_t, 4) l_1617 = (VECTOR(uint32_t, 4))(0x22C1A8ACL, (VECTOR(uint32_t, 2))(0x22C1A8ACL, 0xD0B152A7L), 0xD0B152A7L);
    int16_t l_1618 = 0x69EBL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_772[i][j] = (void*)0;
    }
    if ((safe_mod_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u(l_736[4][6][0], (safe_mod_func_uint64_t_u_u(((l_736[2][2][1] , (((VECTOR(int64_t, 8))(0x5AB998B5750347D7L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(0x0C73B19904AEBC9FL, 0x7D193BD6A2ABA334L))))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_739.s4511572671116044)).even)).s71, ((VECTOR(int64_t, 4))((l_778 = (safe_add_func_uint8_t_u_u((l_777[4][1] = ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x6FL, 0UL)), 252UL, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(p_1620->g_742.s0506)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((-10L), ((VECTOR(int8_t, 8))(l_736[2][6][1], ((VECTOR(int8_t, 4))(p_1620->g_743.s3250)), 0L, (-1L), 0x3FL)), ((VECTOR(int8_t, 4))(l_744.zwxz)), (-7L), 0x30L, 0x6DL)))).s81)).xxxx, ((VECTOR(int8_t, 16))(l_745.zyyxwywyyzzywxwz)).s24c1))), ((VECTOR(int8_t, 2))(0x40L, 0L)), (-8L), (-1L))), ((VECTOR(int8_t, 2))(1L, 8L)).xyyyxyxx))).s3222562360224212)).s69)).yyyy)))), ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(l_746.sd477)).wyxwwwzywxyzzyww, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 249UL)).xyyyxyyy)).s02, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((*l_774) |= ((~(l_751.s4 = ((VECTOR(int64_t, 8))(l_747.s52574c86)).s1)) | (!(l_773 |= (safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_739.s3, ((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_739.s6 , (((safe_lshift_func_uint16_t_u_s(l_746.sb, (p_1620->g_147.s9 &= (((((VECTOR(int8_t, 8))(3L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0L, 0x4DL, 0x17L, 1L)).wywywxywywzwwyyw)).s2d, (int8_t)(safe_add_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((((((*l_770) = l_768) == &l_769[3]) || l_736[4][6][0]) , &p_1620->g_468[2][0]) == &p_1620->g_468[5][2]), l_736[5][4][1])) <= 0x94BFL), 0xAFDA1D65L)) >= GROUP_DIVERGE(1, 1)) ^ 0xD53F622127105DFEL), p_1620->g_224.f3)), (int8_t)8L))), 0x32L, 1L, ((VECTOR(int8_t, 2))(0x15L)), (-9L))).s5 > l_736[4][6][0]) , 255UL) > p_1620->g_24.s5)))) & l_739.s6) , 1L)), l_736[4][2][2])), l_747.s1)) , l_745.x))), l_744.z)))))), 247UL, 0x69L, 0x4FL)), 8UL, 0x1BL, 0x2DL, 255UL)).odd, ((VECTOR(uint8_t, 4))(248UL)), ((VECTOR(uint8_t, 4))(0x65L))))).even))).yxyy, (uint8_t)l_747.s2))).wwxzxwyyxzxyzyww))))).s73e1, ((VECTOR(uint8_t, 4))(255UL))))), 0xDFL)).odd, ((VECTOR(uint8_t, 4))(0xD2L))))).z), l_747.s2))), ((VECTOR(int64_t, 2))((-1L))), 0x30BC800BB3AD1DABL)).hi))))), 0x4FB971EDA401EE43L, l_744.y, ((VECTOR(int64_t, 2))(0x2E91D1CA150E27C2L)), 0x3FD06290AF754315L)).s1 ^ p_1620->g_675.s5)) <= l_744.x), l_746.s7)))) | 0x0248610E65318383L) , l_746.sd) || l_747.sc), GROUP_DIVERGE(0, 1))))
    { /* block id: 304 */
        uint16_t l_788 = 65535UL;
        int32_t *l_794 = &p_1620->g_44[3][0][0];
        int32_t l_811 = 0x2E05FA6DL;
        int32_t l_826 = 0L;
        int16_t l_842 = (-1L);
        uint16_t l_867 = 0xFDEFL;
        int32_t l_911 = 1L;
        int32_t l_913 = 1L;
        int32_t l_914 = (-1L);
        VECTOR(int8_t, 2) l_939 = (VECTOR(int8_t, 2))(3L, (-3L));
        int32_t l_948 = 0x6517667BL;
        int32_t l_949 = 0x41071D56L;
        int32_t l_950 = 0L;
        int32_t l_951 = (-1L);
        int32_t l_952[4][4][8] = {{{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L}},{{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L}},{{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L}},{{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L},{0x4F28376AL,0x11B998B7L,1L,0x72A2E99FL,0x0AC88A41L,0x4F28376AL,0x72A2E99FL,7L}}};
        int i, j, k;
        for (l_778 = 12; (l_778 >= (-13)); l_778--)
        { /* block id: 307 */
            uint64_t l_781 = 0UL;
            int16_t *l_786 = (void*)0;
            int16_t *l_787 = &p_1620->g_158;
            int32_t l_793 = 0x5964D900L;
            int32_t **l_799 = &p_1620->g_43[6][1];
            struct S0 *l_802 = (void*)0;
            uint32_t **l_822 = &p_1620->g_613[4];
            uint32_t *l_830 = &p_1620->g_456;
            union U1 *l_833 = (void*)0;
            struct S0 **l_855 = &p_1620->g_852;
            VECTOR(uint8_t, 2) l_895 = (VECTOR(uint8_t, 2))(0x8EL, 247UL);
            int32_t l_909 = 0x124A9BE8L;
            int32_t l_912 = 0x66E727EAL;
            int32_t l_917 = 0x242333EFL;
            int32_t l_918 = 0x74D04993L;
            int32_t l_945 = 0x32E0B0D9L;
            int32_t *l_946 = (void*)0;
            int32_t *l_947[5][9] = {{&l_912,(void*)0,&l_917,&l_945,(void*)0,&l_945,&l_917,(void*)0,&l_912},{&l_912,(void*)0,&l_917,&l_945,(void*)0,&l_945,&l_917,(void*)0,&l_912},{&l_912,(void*)0,&l_917,&l_945,(void*)0,&l_945,&l_917,(void*)0,&l_912},{&l_912,(void*)0,&l_917,&l_945,(void*)0,&l_945,&l_917,(void*)0,&l_912},{&l_912,(void*)0,&l_917,&l_945,(void*)0,&l_945,&l_917,(void*)0,&l_912}};
            int i, j;
            if ((l_781 ^ (((*p_1620->g_41) = (safe_div_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((*l_774)++)))) >= ((*p_1620->g_615) = (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((*l_787) ^= 1L), l_788, (safe_sub_func_uint64_t_u_u(l_745.z, l_746.s5)), ((VECTOR(int16_t, 8))(((*l_787) ^= ((VECTOR(int16_t, 8))(2L, 1L, ((VECTOR(int16_t, 4))((p_1620->g_264.f4 == 1UL), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1620->g_791.scd)))), (-1L))), 3L, 0x32F9L)).s4), ((l_781 <= (((p_1620->g_792 , l_788) >= l_736[1][0][2]) , l_788)) <= l_788), l_793, 0L, ((VECTOR(int16_t, 4))(1L)))), p_1620->g_415.f4, ((VECTOR(int16_t, 4))(0x2C8CL)))).sdb2b, ((VECTOR(uint16_t, 4))(65535UL))))).w && l_788)))))
            { /* block id: 313 */
                int32_t l_795 = 0x2EA62984L;
                (*p_1620->g_640) = l_794;
                (*l_794) = l_795;
            }
            else
            { /* block id: 316 */
                int32_t ***l_800[5] = {&p_1620->g_640,&p_1620->g_640,&p_1620->g_640,&p_1620->g_640,&p_1620->g_640};
                struct S0 **l_803 = &l_802;
                uint16_t *l_804[8][1][5] = {{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}},{{&p_1620->g_143[0][5][1],&l_736[0][4][2],&l_736[4][6][0],&l_788,&p_1620->g_143[0][5][1]}}};
                int8_t *l_821[7] = {&p_1620->g_74[4],&p_1620->g_74[4],&p_1620->g_74[4],&p_1620->g_74[4],&p_1620->g_74[4],&p_1620->g_74[4],&p_1620->g_74[4]};
                union U1 **l_834 = (void*)0;
                union U1 **l_835 = &l_833;
                uint64_t *l_837 = &p_1620->g_300.f4;
                uint64_t *l_838 = (void*)0;
                uint64_t *l_839[4] = {&p_1620->g_792.f4,&p_1620->g_792.f4,&p_1620->g_792.f4,&p_1620->g_792.f4};
                int32_t l_869[4][6];
                int8_t l_898 = 1L;
                VECTOR(int64_t, 4) l_903 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_869[i][j] = 0x54D2566AL;
                }
                l_811 &= (((((VECTOR(uint32_t, 2))(0x7BA06FE7L, 4294967295UL)).even , (*l_794)) > (l_773 = (((*l_774) = (p_1620->g_796 , (safe_mul_func_uint16_t_u_u((*l_794), (l_799 != (l_801 = (void*)0)))))) ^ (((*l_803) = l_802) == (void*)0)))) ^ (safe_add_func_uint32_t_u_u(((p_1620->g_297 ^ ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((p_1620->g_23.x || (*l_794)), GROUP_DIVERGE(2, 1))), p_1620->g_675.s9)) && GROUP_DIVERGE(2, 1))) && (*l_794)), l_751.s3)));
                atomic_max(&p_1620->g_atomic_reduction[get_linear_group_id()], (((((safe_mod_func_int64_t_s_s((l_814 != (*p_1620->g_628)), ((VECTOR(uint64_t, 16))(p_1620->g_74[2], (((((+((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((((l_811 &= (*l_794)) & GROUP_DIVERGE(1, 1)) != 0x2CC8L) , (((void*)0 != l_822) < ((safe_sub_func_int64_t_s_s(p_1620->g_24.s4, (((((void*)0 != (*l_822)) , p_1620->g_113) || (*l_794)) > l_747.se))) && 18446744073709551615UL))), 11)), 12)), l_793)) == (*l_794))) | (*l_794)) == (*p_1620->g_41)) <= p_1620->g_825[0][0][1]) > (*l_794)), 0x6F1CFB8D13DF61B0L, 0xFECA0BB4CCE70065L, 18446744073709551615UL, l_826, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), (*l_794), 0x0EDA65F3B40E7F91L, 0xEEB5190745A8BA98L, 1UL, 0UL, 0x1D5092AF05B3AC23L)).sb)) || p_1620->g_143[5][0][2]) ^ 1L) , (*l_794)) == (*l_794)));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1620->v_collective += p_1620->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (((&p_1620->g_693 != l_827) >= (safe_mul_func_uint8_t_u_u(((l_794 == l_830) < (p_1620->g_371.sb ^= ((*l_837) = ((*l_814) , (((*l_827) = (((l_836[3][0][4] ^= ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(((*l_794) , ((safe_add_func_int32_t_s_s((*p_1620->g_605), (((*l_768) = (void*)0) == ((*l_835) = l_833)))) ^ 0x6D3D9540L)), ((VECTOR(int64_t, 2))(0x09B34D5F1CE9C6B8L)), 1L)), ((VECTOR(int64_t, 4))(5L))))).wxyywxzz, ((VECTOR(int64_t, 8))(0x67DEEE2C75590550L))))).s7) ^ p_1620->g_264.f4) , (*l_827))) == l_822))))), 0x7CL))))
                { /* block id: 330 */
                    VECTOR(int32_t, 4) l_847 = (VECTOR(int32_t, 4))(0x0A30EDE8L, (VECTOR(int32_t, 2))(0x0A30EDE8L, 0L), 0L);
                    struct S0 ***l_854 = &l_803;
                    union U1 ****l_862 = &l_770;
                    union U1 ***l_864 = &l_834;
                    union U1 ****l_863 = &l_864;
                    int32_t l_868 = 1L;
                    int i;
                    l_869[0][3] = ((safe_mod_func_uint8_t_u_u(l_842, p_1620->g_796.f4)) | (safe_mul_func_int8_t_s_s((l_868 ^= (((VECTOR(uint64_t, 4))((((*l_837)++) && (*l_794)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))((!(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_847.zzxzwyywyxxzwwwx)).sa418, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1620->g_848.xyyxxyyy)).odd))))).yxywxxzwywwwzzxw)).s09, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1620->g_849.s4333330747116255)).s84)), ((VECTOR(int32_t, 8))(p_1620->g_850.s76250715)).s75))).hi , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((*l_794), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(18446744073709551606UL, 5UL)))))), ((VECTOR(uint64_t, 2))(0x52DED6617F4A00F4L, 0UL))))), 0x2CD6F24D70FF1DB2L, 18446744073709551614UL)), 0xABF09E276E24BFBFL, 0UL, 0xBD643B638C6DB15DL)).s2604416421114140)).sd)), ((((*l_854) = p_1620->g_851) == (l_855 = &l_814)) & ((!(safe_add_func_int64_t_s_s(((*l_794) = (~(safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*l_863) = ((*l_862) = (void*)0)) == p_1620->g_865), (*l_794))), p_1620->g_456)))), 7L))) && l_867)), 0UL, 18446744073709551606UL, 18446744073709551615UL, 0xD46F4D3FA17083EAL, 0x78390023BAE7DED2L, l_847.w, p_1620->g_299.f1, ((VECTOR(uint64_t, 2))(8UL)), ((VECTOR(uint64_t, 4))(0x93AB5A3B5FA111F1L)), 0x2E1C489E62D03E3BL)), ((VECTOR(uint64_t, 16))(0x8FE3C4E245D92558L))))).s7c)), 8UL)).y < (-3L))), 0xD7L)));
                }
                else
                { /* block id: 339 */
                    if ((*l_794))
                        break;
                }
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_870.yxxyxyzzyzzwxyzx)))).s0)
                { /* block id: 342 */
                    uint8_t l_874 = 0x6AL;
                    int32_t l_893 = (-8L);
                    VECTOR(int64_t, 16) l_904 = (VECTOR(int64_t, 16))(0x78D6386CDCEC964BL, (VECTOR(int64_t, 4))(0x78D6386CDCEC964BL, (VECTOR(int64_t, 2))(0x78D6386CDCEC964BL, 0L), 0L), 0L, 0x78D6386CDCEC964BL, 0L, (VECTOR(int64_t, 2))(0x78D6386CDCEC964BL, 0L), (VECTOR(int64_t, 2))(0x78D6386CDCEC964BL, 0L), 0x78D6386CDCEC964BL, 0L, 0x78D6386CDCEC964BL, 0L);
                    uint32_t l_919 = 1UL;
                    int i;
                    if (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))((-7L), ((VECTOR(int32_t, 2))(p_1620->g_871.yx)), (l_893 |= (((safe_lshift_func_int16_t_s_s((l_874 >= (safe_lshift_func_uint16_t_u_u((((*p_1620->g_41) &= (((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((**l_855) , (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((((p_1620->g_141 , (safe_add_func_uint64_t_u_u(((l_793 > (safe_mod_func_uint8_t_u_u((l_874 | ((safe_lshift_func_int8_t_s_u(((*l_794) &= (((safe_sub_func_uint32_t_u_u((+FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10)), 0x5503DD36L)) ^ p_1620->g_300.f4) ^ (p_1620->g_158 < ((VECTOR(int16_t, 16))(p_1620->g_574.f1, ((VECTOR(int16_t, 8))(0x5EDCL)), 1L, l_874, ((VECTOR(int16_t, 4))(0L)), 0L)).se))), p_1620->g_74[2])) == p_1620->g_848.x)), p_1620->g_853.f4))) & FAKE_DIVERGE(p_1620->local_1_offset, get_local_id(1), 10)), p_1620->g_564))) == 0x52CE0889L) && 0xF67C27F7L), p_1620->g_422.x)) ^ p_1620->g_422.w), l_842))), p_1620->g_74[4])), p_1620->g_414.f0)) != (*p_1620->g_615)) ^ l_781)) , 0xFD24L), 13))), 12)) , &p_1620->g_74[4]) == (void*)0)), l_894, 1L, (-6L), 8L)).s0557035105434413, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0L))))).sf2, (int32_t)3L))).odd)
                    { /* block id: 346 */
                        VECTOR(int8_t, 4) l_900 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 7L), 7L);
                        VECTOR(int8_t, 2) l_905 = (VECTOR(int8_t, 2))(0x5EL, 0x48L);
                        VECTOR(int8_t, 16) l_907 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x1BL), 0x1BL), 0x1BL, 7L, 0x1BL, (VECTOR(int8_t, 2))(7L, 0x1BL), (VECTOR(int8_t, 2))(7L, 0x1BL), 7L, 0x1BL, 7L, 0x1BL);
                        int i;
                        l_898 |= ((p_1620->g_299.f0 & (GROUP_DIVERGE(1, 1) != GROUP_DIVERGE(2, 1))) < ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(l_895.yxyy)).even, (uint8_t)FAKE_DIVERGE(p_1620->global_0_offset, get_global_id(0), 10), (uint8_t)(--(*l_774))))), 0x18L, 255UL)).lo))).hi);
                        (*l_814) = p_1620->g_899;
                        (*l_794) ^= ((!((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(l_900.wzwzzyzyyxwxwwxx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((safe_lshift_func_uint16_t_u_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(l_903.wwwxxyzy)).lo, ((VECTOR(int64_t, 8))(l_904.s31cf368f)).odd))).xxxzwyyzyxxzywyy)).sf < 0x7FF7402B5D692A52L), 6)), ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(l_905.xxyxxxyxyxyxyxxx)).even, ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(0x01L, 0x7FL, 1L, 0x51L)).odd, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1620->g_906.wyzw)), (-1L), 0x2DL, (-1L), 0L)).s54))).xxyyyyxxxxyxxyxy, ((VECTOR(int8_t, 2))((-1L), 0x27L)).xxxyxyyxyyxyxxxx))).hi))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_907.sed62b258936d5823)).sf3)))), 0x2AL, 0L, 0x5BL, 0x52L, 0L)).s15)).yxxxxxyyyyxxxyyy))).s75))).lo) || 0x05L);
                    }
                    else
                    { /* block id: 351 */
                        int64_t l_910 = (-1L);
                        int32_t l_915 = 0L;
                        int32_t l_916 = 0x33D3875DL;
                        l_919++;
                        l_916 = l_904.s4;
                        (*l_794) = 1L;
                        return p_6;
                    }
                }
                else
                { /* block id: 357 */
                    uint8_t **l_929 = &l_776;
                    int32_t l_936[8][2][1] = {{{9L},{9L}},{{9L},{9L}},{{9L},{9L}},{{9L},{9L}},{{9L},{9L}},{{9L},{9L}},{{9L},{9L}},{{9L},{9L}}};
                    int i, j, k;
                    (*l_794) = (safe_mul_func_uint8_t_u_u((*l_794), (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((*l_794))), ((*l_787) = (safe_add_func_uint32_t_u_u(((*l_814) , (p_1620->g_796.f3 | ((((*l_929) = l_774) != (void*)0) & (((safe_add_func_int32_t_s_s((0x49L >= (((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_774) = (l_936[0][1][0] && (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_939.xyyyyyxx)).s22, (int8_t)(l_777[6][6] = (safe_add_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u((((l_944 > 252UL) >= p_1620->g_23.x) ^ 0x6D00E718L), 4294967295UL)) & l_945) && l_918), (*l_794))))))), (*l_794), ((VECTOR(int8_t, 8))(0x61L)), (-1L), (*l_794), (-1L), 1L, 0x48L)).sd, p_1620->g_415.f0)))), p_1620->g_27.s3)), l_936[0][1][0])) ^ 0x5BL) , (*l_794))), 0x1B512D84L)) == 0xEA5F8F90L) == (-1L))))), l_778)))))));
                }
            }
            p_1620->g_953++;
        }
    }
    else
    { /* block id: 367 */
        int16_t l_1020 = 0x6918L;
        VECTOR(uint16_t, 8) l_1034 = (VECTOR(uint16_t, 8))(0x273EL, (VECTOR(uint16_t, 4))(0x273EL, (VECTOR(uint16_t, 2))(0x273EL, 0xAD6DL), 0xAD6DL), 0xAD6DL, 0x273EL, 0xAD6DL);
        int32_t l_1047 = (-7L);
        int32_t l_1048 = 0L;
        int32_t l_1052 = 0x26701441L;
        int32_t l_1053 = 5L;
        int32_t l_1054 = 0x32DB28EFL;
        int32_t l_1057 = 0x11BABBCEL;
        int32_t l_1058 = 0x6A1CDAEBL;
        int32_t l_1059[2];
        uint16_t ***l_1071 = &p_1620->g_256[3];
        VECTOR(int8_t, 8) l_1099 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
        uint16_t l_1139 = 0UL;
        int8_t *l_1143 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1059[i] = 7L;
        (*l_801) = (void*)0;
        for (p_1620->g_297 = 2; (p_1620->g_297 >= (-14)); --p_1620->g_297)
        { /* block id: 371 */
            int8_t l_958[4][8];
            uint16_t *****l_1026 = &l_1024;
            int64_t *l_1027 = (void*)0;
            VECTOR(uint16_t, 16) l_1035 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL);
            int32_t l_1049[4][1][8] = {{{0x55B1BBA1L,0x55B1BBA1L,(-8L),0x4C0B6647L,(-1L),0x4C0B6647L,(-8L),0x55B1BBA1L}},{{0x55B1BBA1L,0x55B1BBA1L,(-8L),0x4C0B6647L,(-1L),0x4C0B6647L,(-8L),0x55B1BBA1L}},{{0x55B1BBA1L,0x55B1BBA1L,(-8L),0x4C0B6647L,(-1L),0x4C0B6647L,(-8L),0x55B1BBA1L}},{{0x55B1BBA1L,0x55B1BBA1L,(-8L),0x4C0B6647L,(-1L),0x4C0B6647L,(-8L),0x55B1BBA1L}}};
            int32_t l_1128[8];
            int16_t l_1137 = 0x134EL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 8; j++)
                    l_958[i][j] = 0x35L;
            }
            for (i = 0; i < 8; i++)
                l_1128[i] = (-6L);
            (*p_1620->g_959) &= (p_1620->g_150 | l_958[3][2]);
            if ((atomic_inc(&p_1620->g_atomic_input[2 * get_linear_group_id() + 0]) == 5))
            { /* block id: 374 */
                int32_t l_960 = 0x02244D1FL;
                uint16_t l_1012 = 9UL;
                VECTOR(int32_t, 4) l_1015 = (VECTOR(int32_t, 4))(0x3AD4D0ABL, (VECTOR(int32_t, 2))(0x3AD4D0ABL, 0x49679322L), 0x49679322L);
                int16_t l_1016 = 0L;
                int32_t l_1017 = 0x1648D548L;
                int i;
                for (l_960 = 0; (l_960 > 10); l_960 = safe_add_func_int64_t_s_s(l_960, 9))
                { /* block id: 377 */
                    uint32_t l_963 = 0x3AE140CEL;
                    struct S0 l_967 = {0xFDF9060EL,0xA9C4EF3DL,0xFDD20D90L,0x12E26C37L,5UL};/* VOLATILE GLOBAL l_967 */
                    struct S0 *l_966 = &l_967;
                    struct S0 *l_968[2][8] = {{&l_967,&l_967,&l_967,&l_967,&l_967,&l_967,&l_967,&l_967},{&l_967,&l_967,&l_967,&l_967,&l_967,&l_967,&l_967,&l_967}};
                    VECTOR(int32_t, 4) l_970 = (VECTOR(int32_t, 4))(0x678D30DEL, (VECTOR(int32_t, 2))(0x678D30DEL, 0L), 0L);
                    int32_t *l_969 = (void*)0;
                    int32_t *l_971[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_972 = (void*)0;
                    int i, j;
                    l_963++;
                    l_968[0][7] = (l_966 = (void*)0);
                    l_972 = (l_971[2] = l_969);
                }
                for (l_960 = 0; (l_960 < 29); l_960 = safe_add_func_int16_t_s_s(l_960, 4))
                { /* block id: 386 */
                    VECTOR(int32_t, 4) l_975 = (VECTOR(int32_t, 4))(0x4413A75BL, (VECTOR(int32_t, 2))(0x4413A75BL, (-10L)), (-10L));
                    VECTOR(int32_t, 16) l_976 = (VECTOR(int32_t, 16))(0x7C0E35B0L, (VECTOR(int32_t, 4))(0x7C0E35B0L, (VECTOR(int32_t, 2))(0x7C0E35B0L, 0L), 0L), 0L, 0x7C0E35B0L, 0L, (VECTOR(int32_t, 2))(0x7C0E35B0L, 0L), (VECTOR(int32_t, 2))(0x7C0E35B0L, 0L), 0x7C0E35B0L, 0L, 0x7C0E35B0L, 0L);
                    int64_t l_977[7] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                    VECTOR(int32_t, 4) l_978 = (VECTOR(int32_t, 4))(0x560F762EL, (VECTOR(int32_t, 2))(0x560F762EL, 0x6F02A054L), 0x6F02A054L);
                    uint32_t l_979 = 0xCAFA8DD0L;
                    VECTOR(int32_t, 2) l_994 = (VECTOR(int32_t, 2))(0x24C4A6D6L, 0x38150A0EL);
                    int32_t l_995 = 0x489AF547L;
                    int8_t l_996[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int16_t l_997[7] = {8L,8L,8L,8L,8L,8L,8L};
                    VECTOR(int32_t, 8) l_998 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                    uint32_t l_999 = 0x562132B7L;
                    int i;
                    l_976.s8 = (l_977[6] |= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_975.xz)).yyxyyxyy)).s34, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x03C4C189L, 7L)), ((VECTOR(int32_t, 4))(0x3BB93533L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))((-6L), 0x33126D6CL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x2AE5A450L, 0x7C87C7B3L))))))), 1L)).odd))), ((VECTOR(int32_t, 8))(l_976.s907e3c63)).s27))).odd);
                    l_979 = ((VECTOR(int32_t, 4))(l_978.wwyz)).y;
                    for (l_976.sa = 0; (l_976.sa == 14); l_976.sa = safe_add_func_uint32_t_u_u(l_976.sa, 7))
                    { /* block id: 392 */
                        int32_t l_983[5];
                        int32_t *l_982 = &l_983[4];
                        int32_t *l_984 = &l_983[1];
                        int32_t *l_985[6];
                        int16_t l_986 = 0x043DL;
                        int16_t l_987 = 2L;
                        int32_t l_988 = 0x7C2EDED9L;
                        int64_t l_989 = 0x3C6B670CF8A3162BL;
                        uint64_t l_990 = 18446744073709551615UL;
                        int16_t l_993 = (-6L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_983[i] = (-7L);
                        for (i = 0; i < 6; i++)
                            l_985[i] = &l_983[4];
                        l_985[0] = (l_984 = l_982);
                        --l_990;
                        l_978.y = 0x0D165996L;
                        l_975.x &= (l_978.w = l_993);
                    }
                    if ((l_999 = ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_994.xyxyyxyy)).s23)).yyxyyxxxyxyxyxxx)).s4420, (int32_t)(l_996[8] = (l_995 , 5L)), (int32_t)(l_997[3] ^= 0L)))).even)).xyyxxxyyyxxyyyxx, ((VECTOR(int32_t, 8))(l_998.s03461104)).s1074125663000544))).s6))
                    { /* block id: 403 */
                        uint32_t l_1000 = 0xF08D443AL;
                        uint16_t l_1003 = 0x2134L;
                        struct S0 l_1006 = {8UL,0xE2F0467EL,1UL,0UL,1UL};/* VOLATILE GLOBAL l_1006 */
                        l_1000--;
                        l_1003++;
                        l_1006 = l_1006;
                    }
                    else
                    { /* block id: 407 */
                        int64_t l_1007 = (-1L);
                        int32_t l_1009 = 0L;
                        int32_t *l_1008[7][1];
                        uint32_t l_1010 = 0x63EF5FB2L;
                        VECTOR(int32_t, 4) l_1011 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x40483399L), 0x40483399L);
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1008[i][j] = &l_1009;
                        }
                        l_978.w ^= (l_975.w &= l_1007);
                        l_1008[3][0] = (void*)0;
                        l_994.x = (l_1010 , ((VECTOR(int32_t, 4))(l_1011.ywyy)).z);
                    }
                }
                --l_1012;
                l_1017 |= (l_1016 |= ((VECTOR(int32_t, 16))(l_1015.xxzxwwzzwwxzxxwz)).sc);
                unsigned int result = 0;
                result += l_960;
                result += l_1012;
                result += l_1015.w;
                result += l_1015.z;
                result += l_1015.y;
                result += l_1015.x;
                result += l_1016;
                result += l_1017;
                atomic_add(&p_1620->g_special_values[2 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 417 */
                (1 + 1);
            }
            l_1020 ^= l_958[0][0];
            if ((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(p_1620->g_1023.s8b)).hi, (&p_1620->g_473[8][3] == ((*l_1026) = l_1024)))) , l_1027) == (((safe_mul_func_uint8_t_u_u((((VECTOR(int32_t, 16))((l_1020 , (p_1620->g_331.sb , ((void*)0 != &l_894))), 0x3DD320C8L, 0x2DC7922FL, 0x3E2026DCL, (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))((-1L), ((l_1020 || (0UL <= p_1620->g_528.f3)) | 0x71A8L), l_1020, 0L, (-9L), ((VECTOR(int8_t, 2))(0x2BL)), 8L)).s4, 0x69L)), l_1020, 0x7A1DF96AL, ((VECTOR(int32_t, 8))((-7L))), (-7L))).s8 == 1UL), l_1020)) > 0UL) , (void*)0)))
            { /* block id: 422 */
                (*p_1620->g_640) = p_6;
            }
            else
            { /* block id: 424 */
                struct S0 ***l_1039[4];
                uint32_t *l_1040 = &p_1620->g_456;
                int32_t l_1044 = 0x5A4D12B0L;
                int32_t l_1045[5] = {0x345156D4L,0x345156D4L,0x345156D4L,0x345156D4L,0x345156D4L};
                VECTOR(int32_t, 4) l_1063 = (VECTOR(int32_t, 4))(0x77AF5CA5L, (VECTOR(int32_t, 2))(0x77AF5CA5L, (-7L)), (-7L));
                uint32_t l_1083[8][10][3] = {{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}},{{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL},{4294967293UL,1UL,4294967293UL}}};
                VECTOR(int8_t, 4) l_1098 = (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x4EL), 0x4EL);
                VECTOR(int16_t, 2) l_1104 = (VECTOR(int16_t, 2))(0L, 0L);
                VECTOR(int8_t, 16) l_1120 = (VECTOR(int8_t, 16))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-3L)), (-3L)), (-3L), 0x05L, (-3L), (VECTOR(int8_t, 2))(0x05L, (-3L)), (VECTOR(int8_t, 2))(0x05L, (-3L)), 0x05L, (-3L), 0x05L, (-3L));
                VECTOR(int8_t, 2) l_1121 = (VECTOR(int8_t, 2))(0x2EL, 0x1FL);
                uint64_t *l_1127[4][5][9] = {{{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4}},{{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4}},{{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4}},{{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4},{&p_1620->g_414.f4,&p_1620->g_601.f4,&p_1620->g_725[0],&p_1620->g_414.f4,&p_1620->g_725[0],&p_1620->g_601.f4,&p_1620->g_414.f4,&p_1620->g_264.f4,&p_1620->g_299.f4}}};
                uint16_t *l_1133 = &p_1620->g_143[0][5][1];
                int16_t *l_1136[3];
                int32_t *l_1138[6][10] = {{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]},{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]},{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]},{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]},{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]},{(void*)0,(void*)0,(void*)0,&l_777[5][0],(void*)0,(void*)0,(void*)0,&p_1620->g_704,(void*)0,&l_1128[6]}};
                uint32_t l_1140 = 0x3C7D8C27L;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1039[i] = &p_1620->g_851;
                for (i = 0; i < 3; i++)
                    l_1136[i] = (void*)0;
                if ((4294967288UL < (((((-7L) && p_1620->g_601.f2) > (((p_1620->g_1032 == (*l_1026)) <= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_1034.s4163353041136025)).sa005)).hi))), 1UL, 0UL)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 0xFEF5L)).lo, 0x9C2EL, ((VECTOR(uint16_t, 4))(l_1035.s9a78)), 0x9493L, 0xF228L)).s54)), 0xF171L, 65535UL)).s4) , (l_1036 == (((VECTOR(int16_t, 4))(0x179DL, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))((l_958[0][5] , (safe_mod_func_int8_t_s_s(((l_1039[3] == &p_1620->g_708) , 0L), 1UL))), 1L, 4L, 0x25A4L)).lo, ((VECTOR(int16_t, 2))(0x3305L))))), 8L)).x , l_1040)))) , 0x3074L) | 0x511CL)))
                { /* block id: 425 */
                    int64_t l_1041 = (-3L);
                    uint16_t *l_1046[4] = {&l_836[1][2][0],&l_836[1][2][0],&l_836[1][2][0],&l_836[1][2][0]};
                    int32_t l_1050 = 0x54F5E7D3L;
                    int32_t l_1051 = 1L;
                    int32_t l_1055 = 1L;
                    int8_t l_1056[9][10][2] = {{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}},{{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L},{0x34L,0x29L}}};
                    uint64_t *l_1069 = &p_1620->g_899.f4;
                    uint64_t **l_1068 = &l_1069;
                    uint16_t ***l_1070[7] = {&p_1620->g_256[1],&p_1620->g_256[1],&p_1620->g_256[1],&p_1620->g_256[1],&p_1620->g_256[1],&p_1620->g_256[1],&p_1620->g_256[1]};
                    uint16_t ****l_1072 = &l_1071;
                    int64_t l_1081[1][3];
                    int32_t l_1082 = (-6L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1081[i][j] = 0L;
                    }
                    l_1053 &= (l_1041 < ((safe_mul_func_int8_t_s_s(((--l_1060) == (GROUP_DIVERGE(2, 1) >= (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-3L), 9L, 1L, (-8L))).wxzyxwywzxyyyyxy)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-8L), 1L)), 0x1DD0DC2AL, 0x347FCD68L, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_958[1][3], ((VECTOR(int32_t, 2))(l_1063.zx)), (0x2F8ED530A28CA3EAL || (safe_add_func_int32_t_s_s((l_1035.s2 ^ ((-4L) && (((((*l_1068) = l_1027) == (void*)0) , l_1070[6]) != ((*l_1072) = ((*l_1024) = l_1071))))), l_1035.sd))), 0x7E1EACCEL, (-4L), 0L, 9L)), ((VECTOR(int32_t, 8))(7L))))), 0L, 7L, 0x011689DAL, 2L)).even, ((VECTOR(int32_t, 8))(0x6D673250L))))).odd)).yzzzxwxw, ((VECTOR(int32_t, 8))(0x724163C1L))))).s54, ((VECTOR(int32_t, 2))((-1L)))))))).xxxx)).y != p_1620->g_1073))), FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10))) > (-1L)));
                    if (l_1049[0][0][7])
                        break;
                    for (l_908 = 0; (l_908 > 12); l_908++)
                    { /* block id: 434 */
                        int32_t *l_1076 = (void*)0;
                        int32_t *l_1077 = &l_1053;
                        int32_t *l_1078 = &l_1053;
                        int32_t *l_1079 = &l_1055;
                        int32_t *l_1080[8][10][3] = {{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}},{{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]},{(void*)0,&p_1620->g_704,&l_1059[1]}}};
                        int i, j, k;
                        l_1053 &= l_1056[3][7][0];
                        l_1083[5][6][0]++;
                        p_6 = (void*)0;
                    }
                    l_778 |= l_1045[3];
                }
                else
                { /* block id: 440 */
                    uint64_t l_1093 = 0xAB0B810393681D93L;
                    VECTOR(int8_t, 2) l_1100 = (VECTOR(int8_t, 2))(0x1AL, 0x36L);
                    int16_t *l_1105 = &p_1620->g_158;
                    VECTOR(int8_t, 4) l_1106 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x19L), 0x19L);
                    int32_t l_1115 = (-6L);
                    int i;
                    l_1045[4] = ((VECTOR(int32_t, 2))(l_1086.yx)).lo;
                    (*l_801) = (void*)0;
                    l_1115 = (safe_div_func_uint8_t_u_u(((~(safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_1093 & (((VECTOR(int8_t, 16))(5L, 0L, (safe_unary_minus_func_int16_t_s(l_1048)), (safe_add_func_uint32_t_u_u((((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1093, l_1083[2][6][1], ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1098.zwyx)).zyyzzwyw)).s3224671145567404, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(l_1099.s13453017)), ((VECTOR(int8_t, 2))(l_1100.xx)).yxyxyxxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(8L, 0L)))).xxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1620->g_1101.yy)), (-8L), 0x4AL)), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x7AL, (-2L))).xxyxyxyx)), (int8_t)(((VECTOR(uint32_t, 2))(1UL, 1UL)).lo , (safe_mul_func_int16_t_s_s(l_1093, ((*l_1105) = (l_1063.w = ((VECTOR(int16_t, 8))(l_1104.xxyyxyyx)).s6)))))))).s60)).yyxx, ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(l_1106.wyxwzxzyyxyxxxxx)), ((VECTOR(int8_t, 2))(0x65L, 1L)).xxyyxxxxxxxyyyyx))).s2501, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1620->g_1107.xyyy)).wzyzywxxxwwxzzxy)).s7704, (int8_t)((safe_rshift_func_int16_t_s_u(l_958[0][2], (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))((-2L), 0x64L, ((safe_lshift_func_int16_t_s_u((p_1620->g_1114 , ((void*)0 == l_1071)), 8)) || l_1106.w), l_1034.s1, 0L, l_1100.x, 0x2BL, 0L)).even, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))(0x31L))))).z, p_1620->g_792.f0)))) & p_1620->g_299.f4), (int8_t)l_1100.y))))))))))), ((VECTOR(int8_t, 4))(0L))))).yywyyyyx))))).lo, ((VECTOR(int8_t, 4))(0x25L))))).zwxywyxyyzyywwwx))).s9f)), (-3L), ((VECTOR(int8_t, 2))((-1L))), 4L)).s66)).yyxxyyyy, ((VECTOR(int8_t, 8))(0x2FL))))).s5)) && p_1620->g_853.f3) , GROUP_DIVERGE(1, 1)), l_1100.y)), 0x10L, l_1063.y, l_958[2][3], l_1063.y, 1L, 1L, l_1049[1][0][3], ((VECTOR(int8_t, 4))(0x51L)), 0x21L)).sd >= p_1620->g_899.f4)), 0)) , 65535UL), l_1034.s3))) < l_1054), l_1034.s6));
                }
                l_1139 = (((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_1120.s88)), ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(l_1121.xy)).xyxy, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(0x55L, 0x46L)).yyxxyxyyyxyxxyxy, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(p_1620->g_1122.xx)).yyxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((l_1035.s7 , ((safe_lshift_func_int8_t_s_u(l_1121.y, (0UL > l_1049[0][0][7]))) | (l_1044 = (safe_lshift_func_int8_t_s_s(l_958[3][2], (l_736[4][6][0] & (l_1054 ^= (((--p_1620->g_415.f4) || l_1057) == (safe_mod_func_uint16_t_u_u(((*l_1133)++), l_1121.x)))))))))), l_1035.s3, 0x62L, 0x3CL, l_958[1][7], 0x5EL, 0x55L, 0L)).odd)), l_958[2][1], 0L, 0x07L, 0x44L)).s77, ((VECTOR(int8_t, 2))(0x32L)), ((VECTOR(int8_t, 2))(0x17L))))).yxxxyyxy)).lo))).wzxxzzyzyxyzzwzx))).s8, 0x61L, ((VECTOR(int8_t, 4))((-6L))), 0x35L, 0x3DL)).s56, ((VECTOR(int8_t, 2))(0x37L))))).xyyx))).wxywwyxzwyzxyywz, ((VECTOR(int8_t, 16))((-1L)))))).sc3))), (int8_t)0L, (int8_t)l_744.y))).yxxx, ((VECTOR(int8_t, 4))(3L))))).zywyyywyxzzzxyxx)).odd)).s1 ^ l_1047), FAKE_DIVERGE(p_1620->group_1_offset, get_group_id(1), 10))), 0x20L)) == l_1137) , (*p_1620->g_605));
                l_1140++;
            }
        }
        (*p_1620->g_640) = func_52(l_1058, (l_1144 = l_1143), p_1620);
    }
    if (((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_1145.xy)).yyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x3A328A18L)))).yxxy))).y)
    { /* block id: 458 */
        int32_t *l_1146 = &l_777[2][3];
        int32_t *l_1147 = (void*)0;
        int32_t *l_1148[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1148[i] = (void*)0;
        l_1150[3][0][0]--;
    }
    else
    { /* block id: 460 */
        uint32_t l_1153 = 0x373B6F83L;
        union U1 ****l_1155 = (void*)0;
        uint64_t *l_1161 = &p_1620->g_725[4];
        int32_t l_1162 = (-1L);
        int32_t *l_1170 = (void*)0;
        int32_t l_1171 = 0x5F065842L;
        VECTOR(int32_t, 4) l_1172 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L));
        int64_t l_1176 = (-7L);
        uint64_t *l_1183 = (void*)0;
        uint64_t *l_1184[2];
        int32_t *l_1185 = (void*)0;
        int32_t *l_1187 = &p_1620->g_44[2][0][0];
        int i;
        for (i = 0; i < 2; i++)
            l_1184[i] = &p_1620->g_899.f4;
        l_1171 = (((l_1153 > ((p_1620->g_1154[6][0][1] , l_1155) != (void*)0)) , (+(((safe_mod_func_uint8_t_u_u((l_1162 |= ((safe_mod_func_uint64_t_u_u(1UL, p_1620->g_456)) || ((*l_1161) = ((VECTOR(uint64_t, 2))(p_1620->g_1160.s42)).lo))), 0x92L)) < ((safe_sub_func_int32_t_s_s(0x33E11C34L, (safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (p_1620->g_1169 , (-1L)))) > l_751.s3), l_1153)))) < l_1153)) != 0x2EL))) ^ l_1153);
        (*p_1620->g_640) = func_46(&p_1620->g_74[1], (p_1620->g_528.f3 , func_46(&p_1620->g_74[1], &l_778, l_1171, p_6, p_1620)), ((*p_1620->g_615) ^= ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1172.xzzzyzwx)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1620->g_1173.s4052502110142173)).se, ((VECTOR(int32_t, 4))((((safe_add_func_int8_t_s_s((l_1176 , ((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_870.z = ((*l_1161) = l_1171)) & p_1620->g_370.s6), 0x0ADFL)), l_777[2][1])), 15)) , l_1171)), 255UL)) >= 0x7C1105A00971C284L) , p_1620->g_1073), l_1162, (-1L), 1L)), l_836[3][0][4], 0x352AFE59L, (-1L))).s00)).xyyxyxxy))).s0151602611450073)).s0e, ((VECTOR(int32_t, 2))(0x6F6ABBA2L))))).xxxyxyxyyxxxxyyx, ((VECTOR(int32_t, 16))(0L))))).se0))).hi), &l_1162, p_1620);
        (*l_1187) = l_1171;
    }
    if (((*l_1190) = (-9L)))
    { /* block id: 471 */
        uint32_t l_1209 = 0xF10505ABL;
        VECTOR(uint8_t, 4) l_1231 = (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 0x0FL), 0x0FL);
        VECTOR(uint8_t, 8) l_1238 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x06L), 0x06L), 0x06L, 255UL, 0x06L);
        int32_t *l_1288 = (void*)0;
        VECTOR(int8_t, 2) l_1304 = (VECTOR(int8_t, 2))(0x27L, (-1L));
        uint32_t l_1313 = 4294967295UL;
        uint16_t *l_1328 = (void*)0;
        uint16_t *l_1329 = &l_1150[6][1][0];
        int8_t **l_1335 = &l_1144;
        int32_t l_1336 = 0x0205976AL;
        int64_t l_1341[6] = {2L,0x1EAB4BEEBB6A98EEL,2L,2L,0x1EAB4BEEBB6A98EEL,2L};
        uint16_t *l_1353 = &l_836[2][0][3];
        uint32_t l_1381 = 1UL;
        int16_t *l_1382 = (void*)0;
        int16_t *l_1383 = &l_944;
        int16_t *l_1384 = (void*)0;
        int16_t *l_1385 = &p_1620->g_158;
        int16_t *l_1386 = &p_1620->g_150;
        int32_t *l_1387 = (void*)0;
        int i;
        for (l_908 = 4; (l_908 == 8); l_908 = safe_add_func_int32_t_s_s(l_908, 2))
        { /* block id: 474 */
            uint16_t l_1206[8];
            int32_t l_1210[10];
            VECTOR(uint8_t, 8) l_1211 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 255UL), 255UL), 255UL, 247UL, 255UL);
            int32_t l_1217 = 0L;
            int8_t *l_1245 = &p_1620->g_74[0];
            int32_t l_1246 = (-9L);
            int16_t *l_1247 = &l_944;
            VECTOR(int8_t, 8) l_1255 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
            VECTOR(int8_t, 4) l_1303 = (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0L), 0L);
            int i;
            for (i = 0; i < 8; i++)
                l_1206[i] = 0xFEB5L;
            for (i = 0; i < 10; i++)
                l_1210[i] = 2L;
            for (p_1620->g_899.f0 = 6; (p_1620->g_899.f0 < 22); p_1620->g_899.f0 = safe_add_func_int16_t_s_s(p_1620->g_899.f0, 5))
            { /* block id: 477 */
                uint16_t l_1195 = 9UL;
                int16_t l_1216 = 0x0109L;
                l_1195--;
                (*l_1190) &= (((((l_1200 = l_1198[0][0][3]) == ((l_1217 = (safe_div_func_uint64_t_u_u((((VECTOR(uint16_t, 8))(l_1203.xyyxxxyx)).s2 , (safe_mod_func_uint8_t_u_u(l_1206[5], ((safe_sub_func_uint64_t_u_u((l_1210[4] |= (p_1620->g_150 , ((*l_1199) = l_1209))), p_1620->g_24.s7)) || ((VECTOR(uint8_t, 16))(l_1211.s0134005260134746)).sd)))), (safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u(4294967294UL, (65526UL >= p_1620->g_356.s4))) , l_1211.s6) <= l_1209) || l_1209), l_1216))))) , (void*)0)) || l_1195) , l_1209) | l_1209);
            }
            (*p_1620->g_852) = (*l_814);
            (*p_1620->g_1248) = ((l_1209 == (safe_rshift_func_int16_t_s_u(((*l_1247) = (safe_rshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((p_1620->g_comm_values[p_1620->tid] = (((*p_1620->g_605) = ((safe_mul_func_int8_t_s_s(0x77L, ((((*l_1190) = (*p_1620->g_959)) ^ (l_1210[4] |= ((VECTOR(int32_t, 4))(p_1620->g_1226.xwzz)).y)) & (-4L)))) > ((*p_1620->g_41) ^= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0C9BL, 0x5227L)), 0x51EFL, 0x7892L)).zyzzwzwy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((l_1209 < (safe_lshift_func_int16_t_s_u(((p_1620->g_113 || 65531UL) < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x54L, 0UL)).yyyyyxyyxxyyyxxx)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((p_1620->g_564 = 0UL), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 8))(l_1231.zxzzzywx)).s5412410531624504))).s0a)), 0x0EL)).wzyyzyxyyzyxwzww)).even, ((VECTOR(uint8_t, 16))(((((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(l_1238.s3446147621173331)).s23, ((VECTOR(uint8_t, 8))((safe_sub_func_int64_t_s_s((((*l_1199) = (safe_mul_func_int8_t_s_s(((*l_1245) |= (safe_rshift_func_uint16_t_u_u((l_1217 ^= l_1211.s1), l_1206[5]))), l_1206[2]))) == 0x06A931FCC13E2AF0L), l_1231.z)), ((VECTOR(uint8_t, 2))(0x95L)), FAKE_DIVERGE(p_1620->group_0_offset, get_group_id(0), 10), p_1620->g_158, ((VECTOR(uint8_t, 2))(8UL)), 1UL)).s73, ((VECTOR(uint8_t, 2))(0x5FL))))).odd , FAKE_DIVERGE(p_1620->local_1_offset, get_local_id(1), 10)), l_1238.s4)), 10)) <= l_1209) >= l_1246), l_1206[0])) ^ l_1238.s7) <= GROUP_DIVERGE(0, 1)) == 0x65EA825EL), p_1620->g_299.f1, l_1238.s1, ((VECTOR(uint8_t, 8))(0x12L)), 0xFBL, 250UL, ((VECTOR(uint8_t, 2))(0x34L)), 252UL)).odd))).s3423236525535213)).se), l_1231.w))) , 0x2070L), ((VECTOR(int16_t, 2))(3L)), (-1L), ((VECTOR(int16_t, 4))((-7L))))).s56, ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 2))(0x0111L))))))), ((VECTOR(int16_t, 4))(0x30FEL)), 0L, 0x2EBBL))))).s43)).odd, 65532UL))))) == l_1238.s3)), 0L)), 4))), 6))) | l_1209);
            for (p_1620->g_899.f4 = 0; (p_1620->g_899.f4 == 50); p_1620->g_899.f4++)
            { /* block id: 499 */
                uint32_t l_1258[8][7][2] = {{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}},{{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL},{0x8F60A0E9L,0x7951B97DL}}};
                int64_t l_1279 = 0x64F1000049AAD122L;
                VECTOR(int8_t, 16) l_1283 = (VECTOR(int8_t, 16))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, (-9L)), (-9L)), (-9L), 0x70L, (-9L), (VECTOR(int8_t, 2))(0x70L, (-9L)), (VECTOR(int8_t, 2))(0x70L, (-9L)), 0x70L, (-9L), 0x70L, (-9L));
                int8_t l_1297 = (-1L);
                VECTOR(int8_t, 2) l_1302 = (VECTOR(int8_t, 2))(0L, 0x64L);
                int32_t l_1314[6];
                uint64_t l_1315 = 18446744073709551608UL;
                uint16_t l_1323 = 0x77E8L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1314[i] = 8L;
                (*p_1620->g_629) = (*p_1620->g_629);
                if (((*p_1620->g_959) = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))((safe_mul_func_uint8_t_u_u(0x71L, ((VECTOR(int8_t, 2))(l_1255.s56)).even)), (safe_lshift_func_uint8_t_u_s(0xC6L, 6)), 0xDBL, 0x37L, 252UL, (l_1258[4][2][0] = l_1231.x), 0xC9L, 0x06L)).s33, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(247UL, 1UL, 0x74L, 0xD5L)).wzwxxwxy)).hi, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0x25L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(p_1620->g_1259.s13676241)).even, ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(0x5EL, 253UL)).yxxy, ((VECTOR(uint8_t, 2))(p_1620->g_1260.sa8)).yxyy))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(l_1261.xyyy)).zxxxzyzxwwzwxzzz, ((VECTOR(uint8_t, 16))((((safe_rshift_func_int8_t_s_s(0x11L, 0)) > (((&l_801 != l_1264) || (safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((((VECTOR(int64_t, 2))(p_1620->g_1269.yy)).even & ((VECTOR(int64_t, 8))(1L, ((VECTOR(int64_t, 4))(l_1206[7], ((VECTOR(int64_t, 2))(1L, 1L)), (-1L))), ((VECTOR(int64_t, 2))(0x6CCF373B1EC20020L, 0x7A4867374BC95141L)), 0L)).s1), (((((void*)0 != p_1620->g_1270[0][4]) <= GROUP_DIVERGE(1, 1)) == 4294967295UL) <= 0xB353BF36L))), 0x445B2112D8DF688DL))) == p_1620->g_871.x)) | p_1620->g_1160.s1), 2UL, 0x2CL, ((VECTOR(uint8_t, 8))(0UL)), p_1620->g_850.s1, p_1620->g_335.y, ((VECTOR(uint8_t, 2))(2UL)), 252UL))))).s58f0))))).w, 4UL, 2UL)).even)), 246UL)).y, ((VECTOR(uint8_t, 4))(1UL)), 0xF9L, 0xD8L, 1UL)).s06, (uint8_t)l_1258[4][2][0]))).xyxx, ((VECTOR(uint8_t, 4))(255UL))))).hi))).yxxxyxyyxxyxyxyx, ((VECTOR(uint8_t, 16))(250UL)), ((VECTOR(uint8_t, 16))(0x80L))))).s5d))).xyyyxyyx)).s6, 4))))
                { /* block id: 503 */
                    int32_t l_1282[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1282[i] = 1L;
                    (*p_1620->g_1248) = (0x03L != (safe_add_func_int8_t_s_s((l_1258[6][5][1] || (((0x201FA5B6L < (+(248UL != (((((*p_1620->g_529) , (safe_mul_func_uint8_t_u_u((l_1209 >= FAKE_DIVERGE(p_1620->group_0_offset, get_group_id(0), 10)), (safe_sub_func_uint8_t_u_u((l_1279 & (safe_rshift_func_uint16_t_u_u((l_1282[2] <= (GROUP_DIVERGE(2, 1) || ((VECTOR(int8_t, 2))(l_1283.s38)).even)), 7))), ((*l_774) |= ((safe_rshift_func_int16_t_s_u(((*l_1247) = (safe_sub_func_uint64_t_u_u((65530UL && 0x6CC0L), l_1209))), 14)) || l_1209))))))) | l_1283.s8) <= 0xB099L) ^ l_1282[2])))) , &p_1620->g_1271) != &p_1620->g_1271)), 0x40L)));
                    (*p_1620->g_640) = l_1288;
                }
                else
                { /* block id: 508 */
                    uint16_t l_1296[6];
                    int32_t *l_1316 = &p_1620->g_297;
                    int32_t *l_1317 = &p_1620->g_704;
                    int32_t *l_1318 = &l_1210[4];
                    int32_t *l_1319 = (void*)0;
                    int32_t *l_1320 = &p_1620->g_44[3][0][0];
                    int32_t *l_1321 = (void*)0;
                    int32_t *l_1322[4][9][4] = {{{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0}},{{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0}},{{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0}},{{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0},{&p_1620->g_44[0][0][0],&p_1620->g_44[0][0][0],&l_1217,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1296[i] = 65532UL;
                    (*p_1620->g_959) ^= ((*l_1190) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1620->g_1289.s49)))).xxyyyxyyyyyyyyxx, ((VECTOR(int32_t, 2))(1L, 0x23D71853L)).yxxyyxyyyyxxyyyy))).sc02f, ((VECTOR(int32_t, 16))(p_1620->g_1290.s7214603625656434)).s5307))), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_1291.s3435)).odd, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_1296[0] ^ 1UL), ((*l_1245) &= l_1297))), ((safe_mul_func_uint16_t_u_u(l_1258[4][5][0], (safe_mod_func_int64_t_s_s(((l_1279 > (255UL <= ((VECTOR(int8_t, 8))(1L, 0x46L, ((VECTOR(int8_t, 2))(0x04L, (-1L))), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_1302.xxxy)), l_1210[4], (-10L), 0x72L, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_1303.wwxwwzwy)).s43, ((VECTOR(int8_t, 16))(l_1304.yxxxyxxxyxxyyxxy)).sff))), 0x6AL, ((safe_add_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(l_1211.s1, (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(l_1297, l_1296[0])) == l_1313) >= l_1255.s4), (-1L))))) , GROUP_DIVERGE(0, 1)), l_1314[2])) <= 1L), ((VECTOR(int8_t, 2))(0x2BL)), 0L, 0L, 0x57L)).sf3, ((VECTOR(int8_t, 2))((-10L)))))), ((VECTOR(int8_t, 2))(1L))))), 0x2EL, 0x2EL)).s0)) < l_1283.s2), l_1296[1])))) , l_1315))), 0x4EFA1061L, (-5L), (-1L))), ((VECTOR(int32_t, 4))((-1L)))))).hi))), 0x29EA0BDFL, (-1L))).s2);
                    l_1323--;
                }
            }
        }
        l_1336 ^= ((((safe_mul_func_int16_t_s_s(p_1620->g_224.f1, ((*l_1329) = 65528UL))) < (*p_1620->g_615)) , (((VECTOR(uint16_t, 2))(l_1332.yy)).even != 0UL)) , (((l_1333 = &p_1620->g_1149) == (void*)0) != (((l_1334 , l_1231.z) & (((*l_1335) = &l_894) != (void*)0)) , GROUP_DIVERGE(2, 1))));
        atomic_and(&p_1620->l_atomic_reduction[0], (l_870.x ^= ((*l_1190) = (((safe_lshift_func_uint16_t_u_u((l_1341[3] = (++(*l_1329))), 1)) > (p_1620->g_796.f0 != (safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((((VECTOR(uint64_t, 4))(l_1346.scc7c)).x , ((((*l_1190) || FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10)) , (p_1620->g_791.se &= ((safe_mul_func_int16_t_s_s(((*l_1386) = ((*l_1385) = (&l_894 != (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_1353)--), (l_1356 = 0UL))), ((VECTOR(int8_t, 8))(l_1357.s00241065)).s5)) ^ (((*l_1383) = ((((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(0xD2L, 0UL)).xyxyxyxxyxyxyyxy, (uint8_t)((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(5L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(0x11EBEA56L, (((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1620->g_1362.xyyx)).hi)).yxxy)).wwwxwywz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_1363.sa26d506b)).s04))).yxxxyyxxxxyyxxyy))).sa4)).xyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(9L, 1L)).xyxyyxxx)).lo))).xzyyxwwzxxxxwzyy, (int32_t)0x0D1D33B8L))).s5222, ((VECTOR(int32_t, 2))(9L, 0x7A8D4595L)).yyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1364.sb09e)), ((VECTOR(int32_t, 8))(l_1365, ((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((((safe_mod_func_uint64_t_u_u((p_1620->g_601.f4 = p_1620->g_456), (-10L))) < (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((((safe_div_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) > l_1209), l_1380)) | p_1620->g_44[1][0][1]) & l_1381) >= 0x0D14EBCD611FC524L) && p_1620->g_653.y), p_1620->g_601.f1)), 0x8FC478E5L)), 4))) < p_1620->g_1260.sd) == p_1620->g_147.s0), 3)), 2UL)) , l_1313), 0x78247750L, 0x3A8C9D55L, ((VECTOR(int32_t, 2))(0x43A6B74DL)), 8L, 1L)).lo, ((VECTOR(int32_t, 4))((-1L)))))).zyxxxzyy)).hi))).even)).yxyxxyxy))), (-1L), l_1238.s7, 8L, ((VECTOR(int32_t, 2))((-1L))), (-4L), 3L, 0x2EA6F82AL)).s7, ((VECTOR(int32_t, 4))(0x7D1C8B36L)), (-1L), (*l_1190), 0x5594C3E5L, ((VECTOR(int32_t, 2))(0x00E30A07L)), 0x17E549F8L, ((VECTOR(int32_t, 4))(7L)), (-1L))).s80ce, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0L))))).x <= 0x24D7CFDCL), 0x4B62F43CL, ((VECTOR(int32_t, 2))(0x2CEA5C51L)), 1L, 0L, 0x71D74293L)).s5745767126036505, ((VECTOR(int32_t, 16))(1L))))).sb4, ((VECTOR(int32_t, 2))(0x28EEA3B7L))))), 0x5F079B73L)).z, (*l_1190))), l_1313)) == p_1620->g_334.x)))).s7 == l_1238.s1) , p_1620->g_653.y)) >= (*l_1190))) , (void*)0)))), l_1238.s4)) , p_1620->g_675.s9))) > 1UL)), (*p_1620->g_41))) != FAKE_DIVERGE(p_1620->group_2_offset, get_group_id(2), 10)), (*l_1190))))) | p_1620->g_1160.s2))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1620->v_collective += p_1620->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*p_1620->g_640) = &l_1336;
    }
    else
    { /* block id: 533 */
        int8_t l_1404 = 0x37L;
        struct S0 *l_1408 = &p_1620->g_415;
        VECTOR(uint32_t, 8) l_1420 = (VECTOR(uint32_t, 8))(0xDF19C668L, (VECTOR(uint32_t, 4))(0xDF19C668L, (VECTOR(uint32_t, 2))(0xDF19C668L, 4294967295UL), 4294967295UL), 4294967295UL, 0xDF19C668L, 4294967295UL);
        uint64_t **l_1427 = &l_1199;
        int32_t ***l_1429[10];
        uint8_t *l_1466[9];
        union U1 ***l_1471 = &l_768;
        int16_t l_1473 = 0x353AL;
        uint16_t **l_1474 = &p_1620->g_257;
        uint32_t l_1476 = 1UL;
        VECTOR(int8_t, 8) l_1523 = (VECTOR(int8_t, 8))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 0x03L), 0x03L), 0x03L, 0x0DL, 0x03L);
        int16_t l_1532 = 0x4D68L;
        VECTOR(uint8_t, 16) l_1581 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x68L), 0x68L), 0x68L, 253UL, 0x68L, (VECTOR(uint8_t, 2))(253UL, 0x68L), (VECTOR(uint8_t, 2))(253UL, 0x68L), 253UL, 0x68L, 253UL, 0x68L);
        int i;
        for (i = 0; i < 10; i++)
            l_1429[i] = &p_1620->g_640;
        for (i = 0; i < 9; i++)
            l_1466[i] = (void*)0;
        for (p_1620->g_899.f0 = 0; (p_1620->g_899.f0 != 52); p_1620->g_899.f0++)
        { /* block id: 536 */
            int32_t *l_1390 = &l_777[4][1];
            int32_t *l_1391 = &l_777[4][1];
            int32_t *l_1392 = &p_1620->g_297;
            int32_t *l_1393 = (void*)0;
            int32_t *l_1394 = (void*)0;
            int32_t *l_1395 = &p_1620->g_44[3][0][0];
            int32_t *l_1396 = &p_1620->g_44[1][0][0];
            int32_t *l_1397 = (void*)0;
            int32_t *l_1398 = (void*)0;
            int32_t l_1399 = 0L;
            int32_t *l_1400 = (void*)0;
            int32_t *l_1401 = &l_777[0][4];
            int32_t *l_1402 = (void*)0;
            int32_t *l_1403[8][2][10] = {{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}},{{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]},{(void*)0,(void*)0,&l_777[3][6],&l_1380,(void*)0,&l_1380,&l_778,(void*)0,&l_1380,&l_777[4][1]}}};
            uint16_t l_1405 = 1UL;
            int i, j, k;
            l_1405--;
            (*p_1620->g_640) = p_6;
        }
        (*p_1620->g_851) = l_1408;
        if ((safe_lshift_func_int16_t_s_u(0x04FFL, 3)))
        { /* block id: 541 */
            VECTOR(int8_t, 8) l_1416 = (VECTOR(int8_t, 8))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 1L), 1L), 1L, 0x71L, 1L);
            uint64_t **l_1428 = &l_1199;
            uint8_t *l_1472 = (void*)0;
            int32_t l_1503 = 0L;
            union U1 ****l_1513 = &p_1620->g_865;
            int32_t l_1526 = (-10L);
            int32_t l_1528 = 0x52CECA06L;
            int32_t l_1529 = 0L;
            VECTOR(int32_t, 2) l_1530 = (VECTOR(int32_t, 2))(1L, 3L);
            uint8_t l_1533 = 0xEAL;
            int32_t *l_1542 = &p_1620->g_1073;
            int i;
            for (p_1620->g_414.f1 = 26; (p_1620->g_414.f1 != 2); p_1620->g_414.f1 = safe_sub_func_int64_t_s_s(p_1620->g_414.f1, 4))
            { /* block id: 544 */
                uint32_t l_1418 = 1UL;
                uint16_t **l_1475 = &p_1620->g_257;
                VECTOR(uint64_t, 8) l_1484 = (VECTOR(uint64_t, 8))(0xB97DA4B4D2CEE8E7L, (VECTOR(uint64_t, 4))(0xB97DA4B4D2CEE8E7L, (VECTOR(uint64_t, 2))(0xB97DA4B4D2CEE8E7L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xB97DA4B4D2CEE8E7L, 18446744073709551611UL);
                int32_t l_1519 = 8L;
                int8_t *l_1524 = &p_1620->g_74[4];
                int32_t *l_1527 = &l_1479;
                int i;
                if ((safe_add_func_int64_t_s_s(((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(l_1416.s42)).xyxyyyxyxyxyyyyy))).s2)) > FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(p_1620->g_1417.yxyyxxxx)).lo))).zxwyzyyy, ((VECTOR(uint64_t, 4))(l_1418, 0x4993DED48A3FB1BEL, 0x4A0622E2B849B832L, 0x31E334CCAC8FC6DAL)).xyzzzzwx))), ((VECTOR(uint64_t, 8))(1UL, 4UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 16))(8UL, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_1404, 4294967295UL, 4294967287UL, 0x68A5C486L, 4294967295UL, 0x848809D8L, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(l_1419.s12b84f97d217ec17)).s226c, ((VECTOR(uint32_t, 4))(l_1420.s2035))))), (safe_div_func_int32_t_s_s(l_1418, ((*p_1620->g_615) = (+((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((1UL && l_1416.s6), (l_1427 == l_1428))), l_1418)) , (((void*)0 == l_1429[0]) < 0xA553B03C18F148DAL)))))), ((VECTOR(uint32_t, 2))(0xCC8FCCC9L)), ((VECTOR(uint32_t, 2))(0x39951DD2L)), 0x6AF30AB0L)).sbe88)).odd, ((VECTOR(uint32_t, 2))(4294967295UL))))), FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10), 0xCCC49766B831A5B8L, ((VECTOR(uint64_t, 8))(18446744073709551608UL)), 0x420606F7B9A939AFL, 18446744073709551611UL, 1UL)).odd, ((VECTOR(uint64_t, 8))(0x268F209C9375A6F2L))))).s13, (uint64_t)3UL, (uint64_t)1UL))))), ((VECTOR(uint64_t, 4))(1UL)))))).even, ((VECTOR(uint64_t, 8))(0x4F2470D67F4C23EAL))))))).s5253723626240477, ((VECTOR(uint64_t, 16))(0xA2EF1DE0263353CAL)), ((VECTOR(uint64_t, 16))(0x142614AD05E1144FL))))).hi)).s7)))
                { /* block id: 546 */
                    int16_t l_1435 = 0x55E8L;
                    int32_t l_1454 = 1L;
                    int16_t *l_1506[5][9] = {{&p_1620->g_158,(void*)0,&p_1620->g_158,&l_944,&l_944,&l_944,&l_944,&p_1620->g_158,(void*)0},{&p_1620->g_158,(void*)0,&p_1620->g_158,&l_944,&l_944,&l_944,&l_944,&p_1620->g_158,(void*)0},{&p_1620->g_158,(void*)0,&p_1620->g_158,&l_944,&l_944,&l_944,&l_944,&p_1620->g_158,(void*)0},{&p_1620->g_158,(void*)0,&p_1620->g_158,&l_944,&l_944,&l_944,&l_944,&p_1620->g_158,(void*)0},{&p_1620->g_158,(void*)0,&p_1620->g_158,&l_944,&l_944,&l_944,&l_944,&p_1620->g_158,(void*)0}};
                    union U1 ****l_1512 = &l_770;
                    union U1 *****l_1511[7] = {(void*)0,&l_1512,(void*)0,(void*)0,&l_1512,(void*)0,(void*)0};
                    int8_t *l_1514[4][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                    int32_t l_1515 = 0x4108F2CFL;
                    int32_t l_1516 = 0x4E1F4237L;
                    int32_t l_1520 = 0x1D14A61FL;
                    int i, j, k;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1620->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((p_1620->g_1432 < ((safe_lshift_func_int8_t_s_s(l_1418, l_1435)) ^ (safe_add_func_int8_t_s_s((((((*l_774) = (safe_rshift_func_int16_t_s_s(((((**l_1428) = ((VECTOR(uint64_t, 2))(l_1440.yx)).lo) && (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(4294967290UL, 0xCF1E9D31L)).yxyy, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(1UL, 0x5D7FAC63L, ((VECTOR(uint32_t, 2))(2UL, 4294967295UL)), 0x4880043DL, (((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(p_1620->g_1449.yzzyzyxy)).s1633056371752220, (int64_t)(safe_rshift_func_uint16_t_u_s((((l_1435 , ((VECTOR(int16_t, 4))(8L, (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x6AL, 255UL)))).xxxxyxxy)).s10)))).odd, ((*p_1620->g_851) == l_1408))), 0x7AAEL, 0L)).z) <= (((((((((++(*p_1620->g_41)) , p_1620->g_1457) & ((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(65535UL, 65530UL)), ((VECTOR(uint16_t, 4))(p_1620->g_1464.xyxy)).hi))), ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(65534UL, 0UL)), ((VECTOR(uint16_t, 4))(p_1620->g_1465.s2314)).odd))), 0x8EFAL, (((l_1466[4] != (((((((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_1467.xzwxwxzywxxwyyyy)).lo)).s22, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1468.yx)), 1UL, 0x68AE8706L)).wzxwxzyzyxxwzwwy)).s9e))).lo , ((*l_1199) = ((safe_div_func_uint16_t_u_u((l_1416.s0 , l_1435), l_1435)) >= l_1435))) < l_1416.s1) , l_1471) != (void*)0) , l_1472)) , 0xC95B63B2L) , FAKE_DIVERGE(p_1620->global_0_offset, get_global_id(0), 10)), 0UL, 0x0F87L)).s13)).yyyy)), ((VECTOR(uint16_t, 4))(0x2A26L)))).s5, l_1416.s6)), l_1416.s6)) < p_1620->g_422.w), 1L)) > l_1473)) != 0x6A126858L) ^ p_1620->g_424.s7) > p_1620->g_1160.s4) , 0x3DB52581L) == l_1418) , l_1416.s3)) , l_1454), 4)), (int64_t)0x00B57DC250E29899L))).s0, p_1620->g_356.s2)), (*l_1190))), l_1418)) <= (-1L)) & 1L), 0UL, 1UL)), ((VECTOR(uint32_t, 8))(0xF35101A0L))))).odd, ((VECTOR(uint32_t, 4))(0x94F749BEL))))))).x, 0x91C6772FL))) < 5L), l_1416.s2))) , l_1474) == l_1475) | 0x77B60D02L), l_1476)))) >= 2UL), 1L)) & l_1435), 10))][(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))]));
                    for (p_1620->g_1149 = (-9); (p_1620->g_1149 <= (-28)); p_1620->g_1149--)
                    { /* block id: 556 */
                        int32_t l_1491 = (-8L);
                        uint8_t **l_1498[7] = {&l_1472,&l_1466[4],&l_1472,&l_1472,&l_1466[4],&l_1472,&l_1472};
                        VECTOR(uint64_t, 4) l_1501 = (VECTOR(uint64_t, 4))(0x85F30AE13FAE0A3EL, (VECTOR(uint64_t, 2))(0x85F30AE13FAE0A3EL, 0x933DF6D781928D91L), 0x933DF6D781928D91L);
                        int16_t *l_1502 = &l_944;
                        int i;
                        l_1479 &= ((VECTOR(int32_t, 2))(0x3A998A62L, 0x62691ABFL)).hi;
                        (*l_1190) ^= (FAKE_DIVERGE(p_1620->global_0_offset, get_global_id(0), 10) == ((l_1435 & (l_1503 = (((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((l_1435 < ((((((VECTOR(uint64_t, 8))(l_1484.s71773645)).s6 ^ l_1435) , FAKE_DIVERGE(p_1620->group_2_offset, get_group_id(2), 10)) , (!((safe_rshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_1491 < 1UL) && (l_1484.s5 >= ((*l_1502) ^= (safe_sub_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((l_1498[2] == p_1620->g_1499) && (-2L)), 0x016C43EBL)), (-8L))) , l_1491) & l_1501.z), 0x3A73DED5L))))), l_1484.s0)), l_1484.s2)) , 0x02L) <= 0x00L), 4)) ^ l_1501.w))) != l_1454)) == l_1491), p_1620->g_1465.s7)), l_1491)) ^ l_1435) == l_1416.s4))) & l_1484.s3));
                    }
                    (*l_1190) |= ((p_1620->g_371.sb = (--(**l_1428))) >= ((l_1503 &= ((void*)0 == &p_1620->g_1033)) & ((+(p_1620->g_853.f0 >= (l_1516 = ((safe_div_func_int8_t_s_s((l_1515 = (l_1454 ^= (&p_1620->g_865 != (l_1513 = &p_1620->g_865)))), 0x4EL)) < l_1416.s4)))) || ((VECTOR(int16_t, 16))((l_1520 &= (((0L == ((safe_div_func_int32_t_s_s(((l_1519 = l_1484.s0) || l_1519), l_1484.s2)) && l_1454)) >= 1L) , p_1620->g_415.f0)), (-2L), ((VECTOR(int16_t, 8))(0x056BL)), l_1454, 0x6B29L, (-1L), ((VECTOR(int16_t, 2))((-1L))), 0x47F9L)).s6)));
                }
                else
                { /* block id: 572 */
                    (*p_1620->g_852) = (*p_1620->g_576);
                }
                l_1526 |= ((((VECTOR(int8_t, 2))(l_1523.s02)).odd >= ((*l_1524) = (l_1503 == 0x56FCBF5C68ACE5EBL))) >= (((-1L) >= (((*p_1620->g_1248) |= (*l_1190)) | ((l_1484.s3 || 0xCA395212L) == ((VECTOR(int32_t, 16))(p_1620->g_1525.xzzxxyyyyxzywwwx)).s7))) || (((void*)0 != (*p_1620->g_865)) & p_1620->g_335.z)));
                l_1527 = (p_1620->g_704 , (void*)0);
            }
            ++l_1533;
            (*l_1190) = l_1530.y;
            for (p_1620->g_601.f1 = 0; (p_1620->g_601.f1 >= 47); p_1620->g_601.f1 = safe_add_func_uint16_t_u_u(p_1620->g_601.f1, 4))
            { /* block id: 584 */
                int16_t *l_1549 = &l_1538;
                int32_t l_1550 = 8L;
                if (l_1538)
                    break;
                if (((safe_sub_func_uint32_t_u_u(((p_1620->g_1541 , l_1542) == p_6), l_1530.y)) , (l_1542 != p_6)))
                { /* block id: 586 */
                    int32_t l_1555 = 0x439ECBA0L;
                    union U1 **l_1560[1][5] = {{&l_769[0],&l_769[0],&l_769[0],&l_769[0],&l_769[0]}};
                    int i, j;
                    for (l_1533 = 0; (l_1533 < 18); ++l_1533)
                    { /* block id: 589 */
                        union U1 **l_1561 = &l_769[0];
                        int32_t l_1564 = 1L;
                        uint16_t *l_1565 = &p_1620->g_143[2][5][2];
                        int8_t *l_1566 = &l_1404;
                        (*l_1190) = ((VECTOR(int32_t, 4))((safe_sub_func_int32_t_s_s(l_1530.x, (safe_add_func_int16_t_s_s(p_1620->g_742.s4, ((&p_1620->g_150 != l_1549) , (l_1550 == ((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 0UL)), 2UL, 4294967295UL)).z, (((safe_add_func_int32_t_s_s((l_1555 > ((*l_1566) = (safe_div_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((((l_1561 = l_1560[0][1]) != ((**l_1513) = (**l_1513))) != ((((*l_1565) = (safe_mul_func_int8_t_s_s(l_1564, 8L))) , l_1408) == l_814)), FAKE_DIVERGE(p_1620->group_0_offset, get_group_id(0), 10))), 0x096DAA5C3377750BL)))), (*l_1190))) , l_1555) == l_1555))) == l_1550) < l_1564) || l_1555))))))), (-1L), 0L, (-1L))).w;
                    }
                }
                else
                { /* block id: 596 */
                    uint8_t l_1572 = 1UL;
                    VECTOR(int32_t, 16) l_1573 = (VECTOR(int32_t, 16))(0x31FFDAF4L, (VECTOR(int32_t, 4))(0x31FFDAF4L, (VECTOR(int32_t, 2))(0x31FFDAF4L, (-6L)), (-6L)), (-6L), 0x31FFDAF4L, (-6L), (VECTOR(int32_t, 2))(0x31FFDAF4L, (-6L)), (VECTOR(int32_t, 2))(0x31FFDAF4L, (-6L)), 0x31FFDAF4L, (-6L), 0x31FFDAF4L, (-6L));
                    int i;
                    if (l_1528)
                        break;
                    for (p_1620->g_150 = (-16); (p_1620->g_150 <= (-13)); p_1620->g_150 = safe_add_func_uint16_t_u_u(p_1620->g_150, 2))
                    { /* block id: 600 */
                        p_1620->g_1569 |= (l_1530.x = ((*l_1190) ^= l_1416.s4));
                        return p_6;
                    }
                    (*p_1620->g_959) = (safe_mul_func_uint8_t_u_u(l_1572, (1L | (l_1573.s2 = 65527UL))));
                }
            }
        }
        else
        { /* block id: 610 */
            uint64_t l_1574 = 0xD4C29BCC0B54798CL;
            int64_t l_1600 = 0x1FFCCF7417E5267FL;
            int32_t l_1601 = 3L;
            l_1574++;
            for (l_1574 = (-14); (l_1574 == 27); ++l_1574)
            { /* block id: 614 */
                return (*p_1620->g_722);
            }
            l_1601 |= ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_1581.s8178)).y, ((*p_1620->g_959) | l_1574))) <= ((safe_unary_minus_func_uint64_t_u(((((l_1574 ^ l_1583) != ((((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((((VECTOR(int32_t, 16))((-6L), ((safe_mod_func_uint16_t_u_u(l_1574, (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((**l_1471) == (*l_768)), (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((-1L), (safe_mod_func_int64_t_s_s(l_1574, p_1620->g_853.f1)))), l_1600)))), 12)))) < 0x1B64FF7EL), l_1574, 0L, ((VECTOR(int32_t, 2))(0L)), l_1600, ((VECTOR(int32_t, 4))(0x64BF8FE9L)), 0x72CFAEA1L, l_1574, (-1L), 0x4A82D024L, 8L)).s1 >= 0x79BB5B35L) >= 6L) , p_1620->g_848.x) >= l_1600), 7)), l_1574)) & l_1574) | l_1600) && p_1620->g_1449.z)) || l_1574) >= 0x49C7L))) , p_1620->g_371.s9));
        }
        (*l_1190) &= 0x4D421172L;
    }
    l_1618 ^= ((safe_mod_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((*l_1190), (((p_1620->g_601.f1 , (((p_1620->g_1154[4][0][1] , (((*l_1190) <= p_1620->g_796.f0) > ((*l_1190) || (*l_1190)))) | (p_1620->g_1608 == l_1616)) || 0x7BBB4FF2L)) != (*l_1190)) | (*l_1190)))), (*l_1190))) || l_1617.y) < (*l_1190)), (*l_1190))) & p_1620->g_98.s5);
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_640 p_1620->g_44
 * writes: p_1620->g_43 p_1620->g_44
 */
int32_t * func_13(uint16_t  p_14, struct S2 * p_1620)
{ /* block id: 291 */
    int32_t *l_726 = &p_1620->g_44[1][0][0];
    VECTOR(int32_t, 16) l_727 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 2L), 2L), 2L, 7L, 2L, (VECTOR(int32_t, 2))(7L, 2L), (VECTOR(int32_t, 2))(7L, 2L), 7L, 2L, 7L, 2L);
    int32_t *l_728[1][1][1];
    uint32_t l_729[7];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_728[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 7; i++)
        l_729[i] = 0x180B8236L;
    (*p_1620->g_640) = l_726;
    (*l_726) |= ((VECTOR(int32_t, 2))(l_727.s43)).lo;
    l_729[5]++;
    return l_728[0][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_51 p_1620->g_44 p_1620->g_74 p_1620->g_29 p_1620->g_23 p_1620->g_116 p_1620->g_27 p_1620->g_147 p_1620->g_159 p_1620->g_comm_values p_1620->g_150 p_1620->g_177 p_1620->g_210 p_1620->g_146 p_1620->g_143 p_1620->g_41 p_1620->g_42 p_1620->g_224 p_1620->g_225 p_1620->g_236 p_1620->g_264 p_1620->g_299 p_1620->g_391 p_1620->g_43 p_1620->g_297 p_1620->g_414 p_1620->g_113 p_1620->g_468 p_1620->g_528 p_1620->g_529 p_1620->g_24 p_1620->g_9 p_1620->g_300.f0 p_1620->g_331 p_1620->l_comm_values p_1620->g_564 p_1620->g_336 p_1620->g_574 p_1620->g_576 p_1620->g_422 p_1620->g_415.f4 p_1620->g_598 p_1620->g_601 p_1620->g_424 p_1620->g_605 p_1620->g_628 p_1620->g_636 p_1620->g_640 p_1620->g_653 p_1620->g_615 p_1620->g_141 p_1620->g_675 p_1620->g_693 p_1620->g_704 p_1620->g_722
 * writes: p_1620->g_42 p_1620->g_43 p_1620->g_168 p_1620->g_150 p_1620->g_143 p_1620->g_210 p_1620->g_224 p_1620->g_141 p_1620->g_44 p_1620->g_297 p_1620->g_300 p_1620->g_299.f1 p_1620->g_415 p_1620->g_113 p_1620->g_264.f0 p_1620->g_468 p_1620->g_256 p_1620->g_528 p_1620->g_158 p_1620->g_564 p_1620->g_613 p_1620->g_615 p_1620->g_629 p_1620->g_640 p_1620->g_comm_values p_1620->g_693 p_1620->g_601.f4 p_1620->g_704 p_1620->g_414.f4 p_1620->g_708
 */
uint64_t  func_33(int32_t  p_34, int8_t  p_35, uint32_t * p_36, int32_t * p_37, uint64_t  p_38, struct S2 * p_1620)
{ /* block id: 10 */
    uint8_t l_63 = 255UL;
    int8_t *l_84 = &p_1620->g_74[2];
    uint8_t *l_602 = &p_1620->g_564;
    int16_t *l_645[2][9][8] = {{{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1620->g_150,&p_1620->g_158,&p_1620->g_158,&p_1620->g_158,(void*)0}}};
    int32_t l_646 = 0x0DE65D77L;
    int8_t *l_647 = &p_1620->g_74[2];
    int8_t *l_709 = (void*)0;
    int32_t l_717[6][8] = {{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L},{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L},{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L},{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L},{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L},{0x50A196ADL,3L,0x5C0909ACL,0L,0L,0L,0x5C0909ACL,3L}};
    int32_t *l_718 = (void*)0;
    int32_t **l_724 = &l_718;
    int i, j, k;
    (*p_1620->g_236) = ((*l_724) = func_46(p_1620->g_51[6][7], func_52((safe_lshift_func_int16_t_s_s(func_57(l_63, l_63, (((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))((safe_add_func_int16_t_s_s((l_646 = (safe_add_func_int16_t_s_s(((p_1620->g_44[3][0][0] , (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_lshift_func_uint8_t_u_u((p_1620->g_74[2] || (func_75((((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((*l_602) = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(func_81(l_84, l_63, p_1620), 0xF2L, p_35, l_63, ((VECTOR(uint8_t, 4))(0x25L)), 0xF7L, 250UL, ((VECTOR(uint8_t, 2))(7UL)), 0x7FL, ((VECTOR(uint8_t, 2))(0x0DL)), 0xEAL)), ((VECTOR(uint8_t, 16))(0UL))))))).s3) | 0x24L))) | p_35) != 8L), p_1620->g_424.se, p_35, p_1620) , p_35)), p_1620->g_27.s6)))) , p_1620->g_29.s1), l_63))) || (*p_1620->g_605)), 1L))), l_63)), ((VECTOR(uint64_t, 4))(0x69F66A40B7665C76L)), 0UL, 0x49D20F680810B6A7L, 0xCF5EC74525324F6CL)).lo, ((VECTOR(uint64_t, 4))(1UL))))).w <= p_1620->g_24.s7), l_647, l_63, p_1620), 7)), l_709, p_1620), l_717[1][0], l_718, p_1620));
    return p_1620->g_675.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_150 p_1620->g_640 p_1620->g_722 p_1620->g_297 p_1620->g_44
 * writes: p_1620->g_150 p_1620->g_43 p_1620->g_168 p_1620->g_297 p_1620->g_44
 */
int32_t * func_46(int8_t * p_47, int32_t * p_48, uint32_t  p_49, int32_t * p_50, struct S2 * p_1620)
{ /* block id: 279 */
    int32_t *l_723 = &p_1620->g_44[3][0][0];
    for (p_1620->g_150 = 0; (p_1620->g_150 < 22); ++p_1620->g_150)
    { /* block id: 282 */
        int32_t *l_721 = &p_1620->g_44[3][0][0];
        (*p_1620->g_722) = ((*p_1620->g_640) = l_721);
    }
    (*p_48) = (*p_48);
    return l_723;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_44 p_1620->g_640
 * writes: p_1620->g_44 p_1620->g_43
 */
int32_t * func_52(int64_t  p_53, int8_t * p_54, struct S2 * p_1620)
{ /* block id: 274 */
    int32_t *l_710 = &p_1620->g_297;
    int32_t *l_711 = &p_1620->g_44[5][0][0];
    int32_t *l_712 = &p_1620->g_704;
    int32_t *l_713 = &p_1620->g_297;
    uint8_t l_714 = 7UL;
    --l_714;
    (*l_711) ^= 0L;
    (*p_1620->g_640) = l_710;
    return l_710;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_297 p_1620->g_44 p_1620->g_653 p_1620->g_74 p_1620->g_615 p_1620->g_299.f1 p_1620->g_141 p_1620->g_574.f1 p_1620->g_675 p_1620->g_415.f4 p_1620->g_693 p_1620->g_414.f4 p_1620->g_41 p_1620->g_605 p_1620->g_704 p_1620->g_640 p_1620->g_574.f2
 * writes: p_1620->g_297 p_1620->g_44 p_1620->g_comm_values p_1620->g_415.f4 p_1620->g_693 p_1620->g_42 p_1620->g_601.f4 p_1620->g_113 p_1620->g_704 p_1620->g_43 p_1620->g_414.f4 p_1620->g_708
 */
int16_t  func_57(int64_t  p_58, int32_t  p_59, uint32_t  p_60, int8_t * p_61, uint16_t  p_62, struct S2 * p_1620)
{ /* block id: 239 */
    int32_t l_648 = 0x0E99B5ACL;
    int32_t *l_649 = &p_1620->g_297;
    int32_t *l_650 = &p_1620->g_44[6][0][0];
    union U1 *l_666 = (void*)0;
    union U1 **l_665 = &l_666;
    VECTOR(uint32_t, 8) l_681 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x0412E0CEL), 0x0412E0CEL), 0x0412E0CEL, 2UL, 0x0412E0CEL);
    uint16_t l_688[10][7] = {{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL},{8UL,0xCAE8L,8UL,8UL,0xCAE8L,8UL,8UL}};
    VECTOR(uint64_t, 2) l_689 = (VECTOR(uint64_t, 2))(0UL, 0x516553004AFD3473L);
    uint64_t *l_690 = (void*)0;
    int i, j;
    (*l_650) |= ((*l_649) &= l_648);
    for (p_59 = 19; (p_59 < 15); --p_59)
    { /* block id: 244 */
        int32_t l_654[3];
        uint16_t **l_655 = &p_1620->g_257;
        union U1 ***l_667 = &l_665;
        int32_t *l_668 = &l_648;
        int64_t *l_669 = (void*)0;
        int64_t *l_670[2];
        int32_t l_671 = 0x6ACE723EL;
        int i;
        for (i = 0; i < 3; i++)
            l_654[i] = (-5L);
        for (i = 0; i < 2; i++)
            l_670[i] = (void*)0;
        (*l_649) = ((((VECTOR(int16_t, 16))(p_1620->g_653.zxxzyzwzxwzxxzyw)).sf < l_654[2]) || (l_655 != ((((*p_61) >= ((*p_1620->g_615) > l_654[2])) | ((((((*l_650) = (((void*)0 == &p_1620->g_43[4][1]) < 0x7A545FE79AE26B30L)) | (safe_add_func_int64_t_s_s((l_671 = (p_1620->g_comm_values[p_1620->tid] = (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(5L, 2L)).yyyxyxyxyxyyxyyy)).sa, (((*l_668) = (((*l_667) = l_665) != &p_1620->g_524)) , p_1620->g_574.f1))), 0)), p_62)))))), p_62))) == 0x078ABE55L) || p_62) , GROUP_DIVERGE(2, 1))) , l_655)));
    }
    if ((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(1UL, 0x4A9EL)).xyxxyxyyyxyxyyxx, (uint16_t)p_58))).s7 | 0xA4ECL))
    { /* block id: 252 */
        VECTOR(int32_t, 4) l_674 = (VECTOR(int32_t, 4))(0x73F3F520L, (VECTOR(int32_t, 2))(0x73F3F520L, 0x7ECF7C6AL), 0x7ECF7C6AL);
        uint64_t *l_691 = &p_1620->g_415.f4;
        uint32_t **l_692 = &p_1620->g_41;
        uint32_t **l_694 = &p_1620->g_613[4];
        uint32_t ***l_695 = &p_1620->g_693;
        uint64_t *l_696 = (void*)0;
        uint64_t *l_697 = (void*)0;
        uint64_t *l_698 = (void*)0;
        uint64_t *l_699 = &p_1620->g_601.f4;
        int64_t *l_700[9][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_701 = &p_1620->g_113;
        int32_t *l_702 = (void*)0;
        int32_t *l_703 = &p_1620->g_704;
        int i, j, k;
        (*l_649) ^= p_59;
        (*l_649) = 0x707C3D5CL;
        (*l_703) &= (((*l_701) = (safe_lshift_func_uint16_t_u_u(((((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x7AC33DF9L, 0x783F6C40L)).yyyy, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_674.ywwz)).wwywyzww))).even))).hi, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(0x3CEFDEBEL, 0x18220247L, 0x25B8C0B2L, 0L)).lo, ((VECTOR(int32_t, 4))(p_1620->g_675.s85d2)).even))), ((VECTOR(int32_t, 4))(0x55C31981L, ((VECTOR(int32_t, 2))(0x5F08E166L, 0x47ACD1ACL)), 0x3B3EE980L)).odd))).yxxyyxxy, ((VECTOR(int32_t, 2))(0x33AF76B1L, 2L)).yyxxxxyx))).s7 < (((l_674.z , (((*l_650) = ((((*l_699) = ((((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(((**l_692) = ((safe_div_func_uint32_t_u_u(p_59, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_681.s1246046046345762)))).s5e, (uint32_t)(safe_div_func_int32_t_s_s(((*l_649) ^= (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_688[5][5] ^ (((VECTOR(uint64_t, 16))(l_689.yyxxyyyxyxxxyxxx)).sf || (((*l_691) |= ((l_690 == (void*)0) || ((*l_650) == p_62))) && (l_692 != ((*l_695) = (l_694 = p_1620->g_693)))))), 7)), p_1620->g_414.f4))), p_60))))).even)) || l_674.z)))) > l_674.w), 5UL)) == (*l_650)) < p_60) | p_60)) == p_59) || p_59)) == 0xE917D9A58E0674D7L)) >= l_674.x) >= p_60)) <= p_60), l_674.y))) , (*p_1620->g_605));
    }
    else
    { /* block id: 264 */
        int32_t *l_705 = &p_1620->g_44[2][0][1];
        (*p_1620->g_640) = l_705;
        return p_1620->g_574.f2;
    }
    for (p_1620->g_414.f4 = (-18); (p_1620->g_414.f4 != 9); p_1620->g_414.f4++)
    { /* block id: 270 */
        p_1620->g_708 = &p_1620->g_529;
    }
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_564 p_1620->g_605 p_1620->g_44 p_1620->g_236 p_1620->g_41 p_1620->g_42 p_1620->g_113 p_1620->g_528.f0 p_1620->g_264.f0 p_1620->g_628 p_1620->g_636 p_1620->g_640
 * writes: p_1620->g_564 p_1620->g_44 p_1620->g_43 p_1620->g_613 p_1620->g_615 p_1620->g_113 p_1620->g_629 p_1620->g_640
 */
int16_t  func_75(int32_t  p_76, int16_t  p_77, uint64_t  p_78, struct S2 * p_1620)
{ /* block id: 214 */
    uint32_t *l_611[3][10][8] = {{{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1}},{{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1}},{{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1},{&p_1620->g_601.f1,&p_1620->g_601.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_299.f1,(void*)0,&p_1620->g_299.f1,&p_1620->g_415.f1}}};
    uint32_t **l_612[3];
    uint32_t *l_614 = &p_1620->g_141;
    int32_t l_622 = 0L;
    int8_t *l_625 = &p_1620->g_74[2];
    int32_t *l_626 = (void*)0;
    int32_t *l_627 = &p_1620->g_113;
    uint16_t **l_641 = &p_1620->g_257;
    int32_t l_642 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_612[i] = (void*)0;
    for (p_1620->g_564 = (-10); (p_1620->g_564 == 37); p_1620->g_564 = safe_add_func_int64_t_s_s(p_1620->g_564, 7))
    { /* block id: 217 */
        int32_t *l_606 = &p_1620->g_44[3][0][0];
        (*p_1620->g_605) &= p_78;
        (*p_1620->g_236) = l_606;
        if (p_77)
            continue;
    }
    if ((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*p_1620->g_41) & ((((*l_627) ^= (((p_1620->g_613[0] = l_611[2][1][7]) != (p_1620->g_615 = l_614)) , (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_78 || (safe_mod_func_int64_t_s_s((l_622 > (((void*)0 != &l_614) || 1L)), (safe_div_func_int64_t_s_s((!((void*)0 == l_625)), 0x1066C87B58496677L))))), 9UL)), 2L)))) , (void*)0) != (void*)0)), p_1620->g_528.f0)), p_1620->g_264.f0)))
    { /* block id: 225 */
        int32_t **l_637 = &p_1620->g_43[8][0];
        int32_t **l_639 = (void*)0;
        int32_t ***l_638[9];
        int i;
        for (i = 0; i < 9; i++)
            l_638[i] = &l_639;
        (*p_1620->g_628) = &p_1620->g_598;
        l_642 |= ((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((0x18L < ((((((void*)0 == p_1620->g_636) > ((-8L) < (((&p_1620->g_629 != (void*)0) , ((+p_76) , (l_637 != (p_1620->g_640 = l_637)))) == p_78))) , l_641) == (void*)0) , (-1L))), p_76)), 6)), l_622)) >= p_1620->g_113);
    }
    else
    { /* block id: 229 */
        (*p_1620->g_640) = &l_622;
        for (p_1620->g_564 = 0; (p_1620->g_564 >= 36); p_1620->g_564 = safe_add_func_uint64_t_u_u(p_1620->g_564, 9))
        { /* block id: 233 */
            (*p_1620->g_640) = &p_76;
        }
    }
    return l_622;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_29 p_1620->g_23 p_1620->g_116 p_1620->g_27 p_1620->g_147 p_1620->g_159 p_1620->g_comm_values p_1620->g_150 p_1620->g_177 p_1620->g_210 p_1620->g_146 p_1620->g_143 p_1620->g_41 p_1620->g_42 p_1620->g_224 p_1620->g_225 p_1620->g_236 p_1620->g_44 p_1620->g_264 p_1620->g_299 p_1620->g_391 p_1620->g_43 p_1620->g_297 p_1620->g_414 p_1620->g_113 p_1620->g_468 p_1620->g_528 p_1620->g_529 p_1620->g_24 p_1620->g_9 p_1620->g_300.f0 p_1620->g_331 p_1620->l_comm_values p_1620->g_564 p_1620->g_336 p_1620->g_574 p_1620->g_576 p_1620->g_422 p_1620->g_415.f4 p_1620->g_598 p_1620->g_601
 * writes: p_1620->g_42 p_1620->g_43 p_1620->g_168 p_1620->g_150 p_1620->g_143 p_1620->g_210 p_1620->g_224 p_1620->g_141 p_1620->g_44 p_1620->g_297 p_1620->g_300 p_1620->g_299.f1 p_1620->g_415 p_1620->g_113 p_1620->g_264.f0 p_1620->g_468 p_1620->g_256 p_1620->g_528 p_1620->g_158
 */
uint8_t  func_81(int8_t * p_82, uint8_t  p_83, struct S2 * p_1620)
{ /* block id: 11 */
    uint16_t l_89 = 65535UL;
    union U1 *l_411 = &p_1620->g_116;
    union U1 **l_410 = &l_411;
    int32_t l_430[6][6];
    uint32_t **l_457[8][10] = {{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41},{&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41,&p_1620->g_41}};
    int32_t l_466[1];
    uint32_t l_571 = 0x6B9CE3DBL;
    uint16_t ***l_588 = &p_1620->g_256[0];
    uint16_t ****l_587 = &l_588;
    uint16_t ***l_589 = (void*)0;
    VECTOR(int16_t, 4) l_592 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2F6BL), 0x2F6BL);
    int16_t *l_593 = (void*)0;
    int16_t *l_594 = &p_1620->g_158;
    int32_t l_595[5];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
            l_430[i][j] = 0x499A47A1L;
    }
    for (i = 0; i < 1; i++)
        l_466[i] = 0x165FA7B3L;
    for (i = 0; i < 5; i++)
        l_595[i] = 0x0AF31573L;
    (*l_410) = func_85(p_1620->g_29.s3, p_1620->g_23.y, l_89, p_1620);
    for (p_1620->g_297 = (-22); (p_1620->g_297 > 5); ++p_1620->g_297)
    { /* block id: 145 */
        VECTOR(int8_t, 4) l_426 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-3L)), (-3L));
        int32_t l_467 = 0L;
        int32_t l_480 = 9L;
        int32_t l_481 = 0x5CA3CD3FL;
        int32_t l_482 = 0x3F0B9298L;
        int32_t l_484 = (-9L);
        int32_t l_487 = 0x4BDF9BB8L;
        int32_t l_489 = 0x29F89BAAL;
        int32_t l_490 = 0x66DCE8D5L;
        int32_t l_491 = 4L;
        VECTOR(int32_t, 16) l_496 = (VECTOR(int32_t, 16))(0x34368FAAL, (VECTOR(int32_t, 4))(0x34368FAAL, (VECTOR(int32_t, 2))(0x34368FAAL, 0x08F71C7AL), 0x08F71C7AL), 0x08F71C7AL, 0x34368FAAL, 0x08F71C7AL, (VECTOR(int32_t, 2))(0x34368FAAL, 0x08F71C7AL), (VECTOR(int32_t, 2))(0x34368FAAL, 0x08F71C7AL), 0x34368FAAL, 0x08F71C7AL, 0x34368FAAL, 0x08F71C7AL);
        int i;
        if ((0L != l_89))
        { /* block id: 146 */
            p_1620->g_415 = p_1620->g_414;
        }
        else
        { /* block id: 148 */
            VECTOR(int8_t, 8) l_425 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
            int32_t *l_451 = &p_1620->g_297;
            int32_t l_460 = 0x1D32B670L;
            int32_t l_463 = (-1L);
            int32_t l_465 = 0x222FF55AL;
            int32_t l_485 = 0x5336E6C6L;
            int32_t l_486 = 0x57A9E28BL;
            int32_t l_488 = 7L;
            int32_t l_493 = (-3L);
            int32_t l_495 = 0x1E6CB7CBL;
            uint8_t l_498 = 246UL;
            uint32_t l_522 = 4294967288UL;
            int16_t *l_548 = (void*)0;
            int32_t *l_567[8] = {&l_482,&l_482,&l_482,&l_482,&l_482,&l_482,&l_482,&l_482};
            int8_t l_568 = (-10L);
            int32_t l_569 = (-3L);
            int32_t l_570[8][5][6] = {{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}},{{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L},{0x6F4F57C4L,0L,0x6F4F57C4L,0x6F4F57C4L,0L,0x6F4F57C4L}}};
            int i, j, k;
            for (p_1620->g_113 = (-22); (p_1620->g_113 > 15); p_1620->g_113 = safe_add_func_int64_t_s_s(p_1620->g_113, 1))
            { /* block id: 151 */
                VECTOR(uint8_t, 4) l_437 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 1UL), 1UL);
                VECTOR(uint8_t, 16) l_438 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                int32_t *l_450 = &p_1620->g_44[3][0][0];
                int8_t l_459 = 0x68L;
                int32_t l_479 = 0x6245C5F8L;
                int32_t l_483[2][4] = {{(-2L),(-8L),(-2L),(-2L)},{(-2L),(-8L),(-2L),(-2L)}};
                int8_t l_494 = (-7L);
                VECTOR(int64_t, 4) l_509 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x7A1675769F637647L), 0x7A1675769F637647L);
                int i, j;
                for (p_1620->g_264.f0 = 0; (p_1620->g_264.f0 <= 59); p_1620->g_264.f0 = safe_add_func_int32_t_s_s(p_1620->g_264.f0, 9))
                { /* block id: 154 */
                    uint64_t *l_431 = &p_1620->g_414.f4;
                    VECTOR(uint8_t, 4) l_436 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 4UL), 4UL);
                    int32_t **l_452 = &p_1620->g_43[4][1];
                    int32_t **l_453 = (void*)0;
                    int32_t **l_454 = &p_1620->g_168;
                    uint32_t *l_455[1][8][2] = {{{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456},{&p_1620->g_456,&p_1620->g_456}}};
                    int8_t *l_458[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_462 = 0x577CC1C5L;
                    int32_t l_464 = 0x2E102CABL;
                    uint16_t **l_471 = &p_1620->g_257;
                    int16_t l_475 = 1L;
                    int16_t l_492 = (-1L);
                    int32_t l_497[5];
                    uint8_t l_523 = 0xE1L;
                    int32_t *l_525[1][9][7] = {{{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485},{&l_485,&l_485,&l_485,&l_485,&l_485,&l_485,&l_485}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_497[i] = 9L;
                    if (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1620->g_422.wxzyxzyx)).s0, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1620->g_423.zwyx)))).zyxxxyww, ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(p_1620->g_424.sde)).xyyyyxyxyyxyyxyy, ((VECTOR(int8_t, 4))(l_425.s3335)).zyzwzxzxzxyyzwyx))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(l_426.yy)), 6L)).wwyzwzxxwwxzzxwx)).hi, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(p_1620->g_427.xyxyyxyxyxyyyxyy)).s0de4, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-7L), 0x0DL)))).yyyx, ((VECTOR(int8_t, 8))(l_89, (safe_mod_func_uint64_t_u_u(((*l_431)++), (p_1620->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))] = ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_436.zxywzxzw)).s04)).xyyxxyxy)), ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(6UL, 0xAEL)).xyyxyxyx, ((VECTOR(uint8_t, 8))(l_437.ywywywzy))))).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 8))(l_438.s661b5f78)).even, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(p_1620->g_439.xzyxwzww))))).even))).xyyxwzyyzwxxzwyy, (uint8_t)((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(p_1620->g_300.f0, (safe_add_func_uint8_t_u_u((~(l_450 != ((*l_454) = l_451))), ((l_430[5][2] = p_1620->g_335.y) , (l_457[2][3] == &p_1620->g_41)))))) & (1L == ((void*)0 == l_458[1][1]))), p_83)), l_426.y)) == 0x0A0229E090691D59L) ^ 0xFB8FD9CFL), 65531UL)) && 0UL)))).odd)).lo))), ((VECTOR(uint8_t, 2))(255UL)), 0x85L, 0x9BL)).s1, p_1620->g_27.s1)) || (*l_451))))), (-5L), ((VECTOR(int8_t, 2))(5L)), l_426.z, 0L, (-1L))).odd))).wxwwwywz))).s33))), (int8_t)l_459))).yyyyxxxy))))).s7)) <= 4UL))
                    { /* block id: 159 */
                        int32_t *l_461[6][6] = {{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460},{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460},{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460},{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460},{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460},{&p_1620->g_44[3][0][0],&l_460,&l_460,&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_460}};
                        uint16_t ***l_474 = &p_1620->g_256[0];
                        int i, j;
                        p_1620->g_468[7][3]++;
                        (*l_474) = l_471;
                        (*l_450) |= p_83;
                        (*l_450) |= p_83;
                    }
                    else
                    { /* block id: 164 */
                        int8_t l_476 = 0x16L;
                        int32_t *l_477 = &l_464;
                        int32_t *l_478[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_498++;
                        (*l_477) = 0x64B527F9L;
                    }
                    (*l_452) = &l_487;
                    for (l_492 = 0; (l_492 <= 14); l_492++)
                    { /* block id: 171 */
                        return p_1620->g_147.s1;
                    }
                }
                for (l_459 = 0; (l_459 < (-15)); l_459 = safe_sub_func_int64_t_s_s(l_459, 7))
                { /* block id: 179 */
                    (*p_1620->g_529) = p_1620->g_528;
                    for (p_1620->g_299.f1 = (-20); (p_1620->g_299.f1 <= 58); p_1620->g_299.f1 = safe_add_func_uint32_t_u_u(p_1620->g_299.f1, 1))
                    { /* block id: 183 */
                        uint8_t *l_532 = (void*)0;
                        uint32_t *l_537 = &p_1620->g_299.f1;
                        int32_t l_549 = 0x1BE0410BL;
                        int32_t l_550 = (-2L);
                        uint8_t *l_551 = &l_498;
                        (*l_450) = ((p_83 &= 1UL) || (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((p_1620->g_24.s4 != (((*l_451) && ((l_537 != l_450) , 0x473081BDC23E9D8FL)) > ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((+(safe_rshift_func_uint8_t_u_s(((*l_551) = (safe_div_func_uint8_t_u_u(((*l_450) , (safe_lshift_func_int8_t_s_s((((l_549 = ((*p_1620->g_41) = (l_548 == &p_1620->g_158))) == p_83) <= l_550), l_482))), p_83))), 5))) & 0x2DE1L), 5)) || (*l_451)), l_467)) , 0L))) , (*p_1620->g_41)), p_83)), l_481)));
                        l_496.s1 |= (6L > ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(18446744073709551609UL, ((p_83 && (*l_450)) | (safe_rshift_func_uint8_t_u_s(p_1620->g_9[2], 3))), 4UL, 0UL)).xyxwwwzzyywwyxxy)).sa);
                    }
                }
            }
            for (p_1620->g_264.f0 = 0; (p_1620->g_264.f0 > 57); ++p_1620->g_264.f0)
            { /* block id: 195 */
                int8_t l_565 = (-9L);
                int32_t *l_566 = &l_486;
                (*l_566) = (p_83 , (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((*l_451), (safe_lshift_func_int16_t_s_u((0xDD99L != (0x9A806365L & (safe_rshift_func_uint8_t_u_u((&p_1620->g_158 != ((p_1620->g_300.f0 || (((VECTOR(uint8_t, 8))((((p_83 != p_1620->g_331.s0) , 0xFCC9C58D42416CC8L) & 0x00A038B8A8627F7DL), 0x14L, ((VECTOR(uint8_t, 2))(0xE3L)), l_484, p_1620->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1620->tid, 33))], 0x25L, 7UL)).s7 , p_1620->g_564)) , (void*)0)), (*l_451))))), 14)))) ^ p_1620->g_336.s2), l_565)));
            }
            ++l_571;
        }
        (*p_1620->g_576) = p_1620->g_574;
    }
    l_595[3] ^= (safe_div_func_int8_t_s_s((((((((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((*l_594) = (safe_sub_func_int8_t_s_s(l_430[5][2], ((safe_mod_func_uint16_t_u_u(((p_1620->g_422.z == p_83) & ((void*)0 != &l_89)), ((-4L) & (((*l_587) = &p_1620->g_256[1]) == (l_589 = &p_1620->g_256[0]))))) | (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10), ((VECTOR(int16_t, 8))(l_592.wzzwwzyy)).s3)))))), GROUP_DIVERGE(2, 1))) || p_83), l_592.z)) , l_457[4][0]) == &p_1620->g_41) < GROUP_DIVERGE(0, 1)) > 0x7CEAD863L) & p_83) , l_466[0]), 5L));
    for (p_1620->g_415.f4 = 0; (p_1620->g_415.f4 == 33); p_1620->g_415.f4 = safe_add_func_int64_t_s_s(p_1620->g_415.f4, 1))
    { /* block id: 208 */
        volatile struct S0 *l_600 = &p_1620->g_224;
        (*l_600) = p_1620->g_598;
        (*l_600) = p_1620->g_601;
    }
    return p_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_1620->g_116 p_1620->g_27 p_1620->g_147 p_1620->g_159 p_1620->g_comm_values p_1620->g_150 p_1620->g_177 p_1620->g_210 p_1620->g_146 p_1620->g_143 p_1620->g_41 p_1620->g_42 p_1620->g_224 p_1620->g_225 p_1620->g_236 p_1620->g_44 p_1620->g_264 p_1620->g_299 p_1620->g_391 p_1620->g_43
 * writes: p_1620->g_42 p_1620->g_43 p_1620->g_168 p_1620->g_150 p_1620->g_143 p_1620->g_210 p_1620->g_224 p_1620->g_141 p_1620->g_44 p_1620->g_297 p_1620->g_300 p_1620->g_299.f1
 */
union U1 * func_85(uint32_t  p_86, int32_t  p_87, int8_t  p_88, struct S2 * p_1620)
{ /* block id: 12 */
    uint32_t l_115 = 0x7040F244L;
    int32_t l_121 = (-1L);
    int32_t l_122[1];
    int32_t *l_130 = &l_122[0];
    uint32_t l_133 = 0xDD2AB83DL;
    uint16_t *l_145 = &p_1620->g_143[0][2][0];
    VECTOR(uint16_t, 4) l_151 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL);
    uint32_t l_161 = 0x66E181E8L;
    VECTOR(uint64_t, 4) l_166 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x6AC0404CD1A385CBL), 0x6AC0404CD1A385CBL);
    VECTOR(uint64_t, 4) l_202 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE0959EE6ECA718A4L), 0xE0959EE6ECA718A4L);
    union U1 *l_221 = &p_1620->g_116;
    uint8_t l_261[6][10] = {{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL},{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL},{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL},{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL},{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL},{8UL,8UL,0x8EL,0x63L,251UL,0x63L,0x8EL,8UL,8UL,0x8EL}};
    VECTOR(int64_t, 2) l_349 = (VECTOR(int64_t, 2))(0x00A157EF4E04CF28L, 0x30BE02D0E5419767L);
    uint64_t l_351 = 0x32E001951E72DBE2L;
    VECTOR(uint64_t, 2) l_373 = (VECTOR(uint64_t, 2))(0x639A2CFEE170399DL, 18446744073709551615UL);
    VECTOR(uint64_t, 2) l_376 = (VECTOR(uint64_t, 2))(3UL, 0x4F88F5F884ADC43AL);
    uint16_t **l_383 = &p_1620->g_257;
    uint16_t **l_385[10] = {&l_145,(void*)0,&l_145,&l_145,(void*)0,&l_145,&l_145,(void*)0,&l_145,&l_145};
    uint32_t l_386 = 4294967293UL;
    int32_t *l_395 = &p_1620->g_44[3][0][0];
    int32_t *l_396 = &l_121;
    int32_t *l_397 = &p_1620->g_44[3][0][0];
    int32_t *l_398 = &l_122[0];
    int32_t *l_399 = &p_1620->g_297;
    int32_t *l_400 = &l_122[0];
    int32_t *l_401 = &p_1620->g_297;
    int32_t *l_402 = &l_122[0];
    int32_t *l_403 = &p_1620->g_297;
    int32_t *l_404 = &l_122[0];
    int32_t *l_405 = &l_122[0];
    int32_t *l_406[8] = {&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121};
    uint8_t l_407 = 0xB5L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_122[i] = 0x4225E665L;
    for (p_88 = 0; (p_88 >= 10); p_88++)
    { /* block id: 15 */
        uint64_t l_101 = 18446744073709551610UL;
        int32_t l_120 = 9L;
        int32_t l_123 = 0x287A3C92L;
        int32_t l_124[10][5][5] = {{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}},{{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L},{1L,0x4BB7FEADL,0x77A056DCL,0x5BC5006FL,0x1794BD29L}}};
        int64_t l_125 = 0x01BE9AE68F206085L;
        int32_t *l_160[6][5][1] = {{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}},{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}},{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}},{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}},{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}},{{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]},{&l_122[0]}}};
        int32_t **l_167[1];
        int64_t l_178 = 0L;
        VECTOR(uint32_t, 16) l_211 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint32_t, 2))(8UL, 1UL), (VECTOR(uint32_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL);
        union U1 *l_223 = &p_1620->g_116;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_167[i] = (void*)0;
        for (p_86 = 0; (p_86 < 12); p_86 = safe_add_func_uint32_t_u_u(p_86, 9))
        { /* block id: 18 */
            uint32_t *l_108 = (void*)0;
            int32_t l_114 = 0x63820F02L;
            int32_t *l_118 = &l_114;
            int32_t *l_119[8] = {&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0]};
            uint8_t l_126 = 0x2EL;
            int32_t **l_129 = (void*)0;
            int8_t *l_134[6][4] = {{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]},{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]},{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]},{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]},{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]},{&p_1620->g_74[4],(void*)0,&p_1620->g_74[4],&p_1620->g_74[4]}};
            int32_t l_135 = 0x663D993AL;
            uint64_t *l_140[4][7] = {{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101}};
            uint16_t *l_142 = &p_1620->g_143[0][5][1];
            uint16_t **l_144 = &l_142;
            int16_t *l_148 = (void*)0;
            int16_t *l_149 = &p_1620->g_150;
            int16_t *l_156 = (void*)0;
            int16_t *l_157 = &p_1620->g_158;
            int i, j;
            for (p_1620->g_42 = 18; (p_1620->g_42 == 55); p_1620->g_42 = safe_add_func_uint32_t_u_u(p_1620->g_42, 7))
            { /* block id: 21 */
                uint32_t **l_109 = &l_108;
                int8_t *l_110 = &p_1620->g_74[1];
                int32_t l_111 = 0x40673FC9L;
                uint16_t *l_112 = (void*)0;
                int32_t *l_117 = &l_114;
                (*l_117) = ((!(FAKE_DIVERGE(p_1620->local_0_offset, get_local_id(0), 10) , ((((0L <= ((((VECTOR(int32_t, 4))((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1620->g_98.s75)).hi, 0x0DL, (safe_sub_func_int8_t_s_s(l_101, p_88)), p_87, (-1L), 0x30L, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(0x03L, ((VECTOR(int8_t, 4))(0L, ((safe_div_func_uint32_t_u_u(l_101, (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((p_86 || (p_1620->g_113 = (((*l_110) = (((*l_109) = l_108) != (void*)0)) <= l_111))) >= 0x4A3D13A51B20E94AL), l_114)) || 0x3D15L), l_111)))) <= p_87), 1L, (-10L))).z, (-1L), p_88, 0x1FL, 1L, (-3L), 0x68L)).lo, ((VECTOR(int8_t, 4))(0x37L)), ((VECTOR(int8_t, 4))(0x41L))))), ((VECTOR(int8_t, 4))(0L)), 8L, (-1L))).s5, 0x8EL)), (-8L), 0x0AFD097AL, 1L)).y , GROUP_DIVERGE(1, 1)) <= l_115)) , p_1620->g_116) , 1UL) > FAKE_DIVERGE(p_1620->global_1_offset, get_global_id(1), 10)))) ^ l_111);
                if ((*l_117))
                    break;
                if (l_115)
                    continue;
            }
            l_126++;
            l_130 = &l_114;
            l_123 ^= (((((safe_mul_func_uint8_t_u_u((254UL > (l_135 = l_133)), (p_1620->g_27.s4 <= (0x0162682172DE9098L | FAKE_DIVERGE(p_1620->local_0_offset, get_local_id(0), 10))))) || (safe_sub_func_int16_t_s_s((((VECTOR(uint8_t, 8))(((safe_rshift_func_int16_t_s_s(((p_1620->g_141 = p_87) ^ ((((*l_118) >= (((*l_144) = l_142) != l_145)) | FAKE_DIVERGE(p_1620->group_0_offset, get_group_id(0), 10)) <= ((*p_1620->g_41) |= ((VECTOR(uint32_t, 8))(p_1620->g_146.se152159d)).s1))), 8)) && (((((*l_149) |= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1620->g_147.se253)))).y) <= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xB4E6L, ((VECTOR(uint16_t, 2))(l_151.yw)), 0xA556L)).zwxwyyyz)).s7) ^ ((VECTOR(uint64_t, 2))(0x1AE00048D73544DAL, 18446744073709551615UL)).lo) == (safe_sub_func_int16_t_s_s(((*l_157) = (safe_rshift_func_int16_t_s_s((-1L), (*l_118)))), p_1620->g_comm_values[p_1620->tid])))), 0x16L, 0xA1L, 0x97L, l_124[3][0][0], 1UL, 0xFCL, 0xB7L)).s1 & p_1620->g_147.s3), FAKE_DIVERGE(p_1620->global_2_offset, get_global_id(2), 10)))) , p_1620->g_159) , p_87) >= 0x346CF623B8A31F78L);
        }
        ++l_161;
        if (((safe_lshift_func_int16_t_s_u((((void*)0 == &p_1620->g_43[6][1]) ^ p_1620->g_comm_values[p_1620->tid]), 6)) || (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_166.wx)), 0x4865413634BA4E07L, 0xED354C98D323A33DL)).z < (&p_1620->g_44[3][0][0] == (p_1620->g_168 = (p_1620->g_43[4][1] = &p_1620->g_44[1][0][0]))))))
        { /* block id: 42 */
            int32_t l_184 = 0x2C7C98F0L;
            int32_t l_187[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            VECTOR(uint16_t, 16) l_209 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL, (VECTOR(uint16_t, 2))(0UL, 9UL), (VECTOR(uint16_t, 2))(0UL, 9UL), 0UL, 9UL, 0UL, 9UL);
            int32_t *l_222 = (void*)0;
            int i;
            for (p_1620->g_150 = 0; (p_1620->g_150 <= (-9)); p_1620->g_150 = safe_sub_func_int64_t_s_s(p_1620->g_150, 5))
            { /* block id: 45 */
                int32_t l_190 = 0x610D8614L;
                int32_t l_192 = (-9L);
                int32_t l_195 = 0x2912836BL;
                uint16_t l_197[2][9] = {{2UL,0xBFC3L,2UL,2UL,0xBFC3L,2UL,2UL,0xBFC3L,2UL},{2UL,0xBFC3L,2UL,2UL,0xBFC3L,2UL,2UL,0xBFC3L,2UL}};
                uint32_t **l_220 = (void*)0;
                int i, j;
                for (l_101 = 0; (l_101 < 22); ++l_101)
                { /* block id: 48 */
                    int32_t l_185 = 0x2BFCD6ECL;
                    int32_t l_186 = 1L;
                    int32_t l_188 = 0L;
                    int32_t l_189 = 0x6A515971L;
                    int32_t l_191 = (-10L);
                    int32_t l_193 = 1L;
                    int32_t l_194 = (-8L);
                    VECTOR(int32_t, 4) l_196 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x52A0C19DL), 0x52A0C19DL);
                    int i;
                    for (p_87 = 0; (p_87 != (-19)); --p_87)
                    { /* block id: 51 */
                        l_178 ^= (safe_rshift_func_int8_t_s_u(7L, ((VECTOR(uint8_t, 2))(p_1620->g_177.ww)).lo));
                    }
                    if ((atomic_inc(&p_1620->g_atomic_input[2 * get_linear_group_id() + 1]) == 8))
                    { /* block id: 55 */
                        int64_t l_179 = 0x7AAD557342A22D07L;
                        int32_t l_180[10] = {0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L,0x3D65F5B5L};
                        int32_t l_182 = 0x7A52A537L;
                        int32_t *l_181 = &l_182;
                        int32_t *l_183 = &l_182;
                        int i;
                        l_183 = ((l_180[7] = l_179) , l_181);
                        unsigned int result = 0;
                        result += l_179;
                        int l_180_i0;
                        for (l_180_i0 = 0; l_180_i0 < 10; l_180_i0++) {
                            result += l_180[l_180_i0];
                        }
                        result += l_182;
                        atomic_add(&p_1620->g_special_values[2 * get_linear_group_id() + 1], result);
                    }
                    else
                    { /* block id: 58 */
                        (1 + 1);
                    }
                    ++l_197[0][4];
                }
                l_121 |= (0xF3L > ((safe_sub_func_uint16_t_u_u(l_195, (p_1620->g_210.sc = ((-2L) ^ (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_202.xzxwywxz)), ((((safe_sub_func_int64_t_s_s(((((l_122[0] |= 0x566C20E4L) , (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((((0x5674DFA4L | ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(65534UL, 7UL, 65526UL, 0x01B6L)), ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(l_209.sc505bfe8)).s6702515452304321, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(p_1620->g_210.sa12a)).wywzzyww, (uint16_t)0x0705L))).s0234526321737234)))))))).s9dee))).hi, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_211.sa543)))), ((VECTOR(uint32_t, 8))((safe_mod_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(((*l_145) |= ((p_88 ^ ((safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s((p_87 ^ 2L), 1)) | 65535UL) == 1L), p_87)) , p_1620->g_146.s1)) == GROUP_DIVERGE(1, 1))), 0x69EFL)) , 0x8788BC8206E44777L), 18446744073709551607UL)), l_209.s0, 0xF6CD7C1FL, p_87, 0x1295B1A4L, (*p_1620->g_41), 0x08E1B90CL, 0xEDB4FB30L)).s6, ((VECTOR(uint32_t, 8))(4294967295UL)), 1UL, 0xD4A11782L)).sb0, ((VECTOR(uint32_t, 2))(0xBEEA759BL))))).xyyy))))).lo))))))).even) , l_220) == (void*)0), 9)) , 9L) ^ 18446744073709551615UL), 14))) || (*p_1620->g_41)) , 0x12F43C11021AD2A6L), 0L)) != p_88) < p_88) > 18446744073709551615UL), 0x5EF81E7EB0D78328L, 18446744073709551609UL, ((VECTOR(uint64_t, 2))(0xD4C15BA14C7D3818L)), ((VECTOR(uint64_t, 2))(0xC3759426AAB50528L)), 0xE3FCD2866269D93FL)))).s2 <= p_87))))) & l_197[0][7]));
                return l_221;
            }
            l_222 = &p_1620->g_44[3][0][0];
            return l_223;
        }
        else
        { /* block id: 71 */
            int32_t l_226 = 5L;
            int32_t l_231[5];
            int i;
            for (i = 0; i < 5; i++)
                l_231[i] = 0x55AAE28EL;
            (*p_1620->g_225) = p_1620->g_224;
            l_226 ^= (&p_1620->g_41 == (void*)0);
            l_122[0] |= (safe_lshift_func_int16_t_s_s(l_226, p_1620->g_147.s9));
            l_231[4] = (safe_mul_func_int8_t_s_s(1L, (l_226 , (p_86 != p_86))));
        }
    }
    for (p_87 = 0; (p_87 <= 16); p_87++)
    { /* block id: 80 */
        int16_t l_250 = 0x4FA8L;
        int32_t l_269 = (-2L);
        int32_t l_270 = 5L;
        int32_t l_271 = 1L;
        int32_t l_275 = 0x259DCF31L;
        uint16_t l_277 = 1UL;
        VECTOR(uint8_t, 4) l_330 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL);
        union U1 *l_365 = &p_1620->g_116;
        VECTOR(int32_t, 2) l_366 = (VECTOR(int32_t, 2))((-1L), 0L);
        union U1 *l_369 = &p_1620->g_116;
        uint16_t ***l_384[3][5][3] = {{{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]}},{{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]}},{{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]},{&p_1620->g_256[0],&l_383,&p_1620->g_256[0]}}};
        int32_t *l_387 = &l_121;
        int32_t *l_388 = &l_269;
        int i, j, k;
        for (p_1620->g_141 = 17; (p_1620->g_141 == 56); ++p_1620->g_141)
        { /* block id: 83 */
            int32_t *l_237 = &p_1620->g_44[3][0][0];
            VECTOR(int64_t, 16) l_251 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 8L), 8L), 8L, 0L, 8L, (VECTOR(int64_t, 2))(0L, 8L), (VECTOR(int64_t, 2))(0L, 8L), 0L, 8L, 0L, 8L);
            int32_t l_273 = 0x7BFDBF61L;
            int32_t l_314 = 0x756F0EE0L;
            VECTOR(uint32_t, 4) l_337 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x740678AEL), 0x740678AEL);
            VECTOR(int64_t, 16) l_338 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            VECTOR(int64_t, 2) l_348 = (VECTOR(int64_t, 2))(0x687A76F87DB6F22EL, 0x0F2F1556446CB0A7L);
            VECTOR(uint32_t, 8) l_355 = (VECTOR(uint32_t, 8))(0x7A464451L, (VECTOR(uint32_t, 4))(0x7A464451L, (VECTOR(uint32_t, 2))(0x7A464451L, 4UL), 4UL), 4UL, 0x7A464451L, 4UL);
            uint32_t l_367 = 4294967289UL;
            int i;
            l_121 &= p_87;
            (*p_1620->g_236) = &p_1620->g_44[4][0][0];
            (*l_237) &= p_87;
            for (p_86 = (-17); (p_86 != 19); p_86 = safe_add_func_int8_t_s_s(p_86, 5))
            { /* block id: 89 */
                uint16_t ***l_258 = (void*)0;
                uint16_t ***l_259 = &p_1620->g_256[1];
                uint32_t *l_260[2][1];
                int32_t l_276[8][2];
                uint64_t l_315 = 18446744073709551615UL;
                int32_t *l_322 = &l_314;
                VECTOR(uint8_t, 4) l_328 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x29L), 0x29L);
                VECTOR(uint8_t, 4) l_329 = (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 1UL), 1UL);
                VECTOR(uint8_t, 4) l_332 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL);
                VECTOR(int64_t, 4) l_339 = (VECTOR(int64_t, 4))(0x105CBFDC910C9B0AL, (VECTOR(int64_t, 2))(0x105CBFDC910C9B0AL, 0x28C2080DE68BBE33L), 0x28C2080DE68BBE33L);
                VECTOR(int64_t, 8) l_350 = (VECTOR(int64_t, 8))(0x072CF99CCC1CF216L, (VECTOR(int64_t, 4))(0x072CF99CCC1CF216L, (VECTOR(int64_t, 2))(0x072CF99CCC1CF216L, (-1L)), (-1L)), (-1L), 0x072CF99CCC1CF216L, (-1L));
                union U1 *l_368 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_260[i][j] = &p_1620->g_141;
                }
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_276[i][j] = 0x1A85CF26L;
                }
                if ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((++(*l_145)), p_86)) & (((~(safe_rshift_func_uint8_t_u_u((l_250 || p_88), GROUP_DIVERGE(0, 1)))) || ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(((((VECTOR(int64_t, 8))(l_251.s0ac41da8)).s4 ^ ((p_1620->g_42 && p_88) | p_87)) > ((VECTOR(uint16_t, 16))(((((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), p_1620->g_147.se)) , (((((safe_lshift_func_uint16_t_u_s(((((((((*l_259) = p_1620->g_256[0]) == (void*)0) , &p_1620->g_150) == (void*)0) <= 0x3823FD58L) >= (*p_1620->g_41)) <= p_86), 2)) == 0x385E88D1L) | (-3L)) < p_86) ^ 0x3FBE83BFA716B42BL)) , &l_115) == l_260[0][0]), 0x4F09L, 65535UL, 0UL, ((VECTOR(uint16_t, 4))(1UL)), 1UL, 65530UL, p_86, 0x88B0L, 0UL, 0UL, 8UL, 4UL)).s2), 0x86C547EFB90BF166L, ((VECTOR(uint64_t, 4))(18446744073709551611UL)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0UL)), p_87, ((VECTOR(uint64_t, 4))(18446744073709551613UL)))).lo, ((VECTOR(uint64_t, 8))(0x6DBE931AE1242CA7L))))).s1) || p_1620->g_224.f3)), 7)) >= l_261[1][0]), (*p_1620->g_41))))
                { /* block id: 92 */
                    int32_t l_268 = 0x0107CF97L;
                    int32_t l_272 = 1L;
                    int32_t l_274 = 0x7F12191CL;
                    struct S0 *l_298 = &p_1620->g_264;
                    for (p_1620->g_42 = 0; (p_1620->g_42 > 39); p_1620->g_42 = safe_add_func_int16_t_s_s(p_1620->g_42, 1))
                    { /* block id: 95 */
                        struct S0 *l_265[3];
                        int32_t *l_266 = &p_1620->g_44[0][0][0];
                        int32_t *l_267[7][7][5] = {{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}},{{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_121,&p_1620->g_44[3][0][0]}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_265[i] = &p_1620->g_264;
                        (*p_1620->g_225) = p_1620->g_264;
                        --l_277;
                        if (l_276[2][0])
                            continue;
                        l_298 = ((0x56L != (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_87 , (((safe_unary_minus_func_int32_t_s((*l_237))) > p_87) > 4294967286UL)), ((l_271 && ((safe_sub_func_int32_t_s_s(0x4B30B121L, (p_1620->g_297 = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0xCDL, 4)), (*p_1620->g_41))) == p_1620->g_224.f3)))) , 0UL)) && p_1620->g_210.s2))), 1)), p_1620->g_143[0][5][1]))))) , &p_1620->g_264);
                    }
                    p_1620->g_300 = p_1620->g_299;
                }
                else
                { /* block id: 103 */
                    int8_t l_306 = 0x33L;
                    int32_t l_312 = 0x0655BBB0L;
                    int16_t l_313 = (-1L);
                    VECTOR(int8_t, 4) l_333 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x0DL), 0x0DL);
                    VECTOR(int64_t, 2) l_347 = (VECTOR(int64_t, 2))(0L, 1L);
                    int32_t l_354 = (-7L);
                    int i;
                    if ((safe_unary_minus_func_uint16_t_u(p_86)))
                    { /* block id: 104 */
                        volatile struct S0 *l_304 = (void*)0;
                        volatile struct S0 *l_305 = &p_1620->g_224;
                        int32_t *l_307 = &l_269;
                        int32_t *l_308 = &p_1620->g_44[4][0][1];
                        int32_t *l_309 = (void*)0;
                        int32_t *l_310 = &l_122[0];
                        int32_t *l_311[7][9] = {{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&l_275,&l_276[6][0],&l_122[0],&l_122[0],&p_1620->g_297,&l_276[0][1],&p_1620->g_297}};
                        int i, j;
                        (*l_237) |= 0x4F2F6486L;
                        if ((*l_237))
                            break;
                        (*l_305) = (*p_1620->g_225);
                        ++l_315;
                    }
                    else
                    { /* block id: 109 */
                        int32_t *l_318 = &l_276[1][0];
                        l_322 = (l_130 = l_318);
                        if ((*l_237))
                            break;
                    }
                    (*l_322) ^= (p_1620->g_224.f0 && ((-1L) | ((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(p_1620->g_327.yxyy)).zywxywzz))).lo, ((VECTOR(uint8_t, 8))(l_328.zywzwwyw)).odd, ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x2EL, 0x55L)).xyxyxxyx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(254UL, 0xD6L, 254UL, 6UL)).odd)).xyyxyxxx))).odd))).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(l_329.zxzwxyxzwzwyxxyz)).s63, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_330.yw)))), ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(p_1620->g_331.sdd82e470afea872d)).s6c))).xxxx, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(l_332.wyyzwxyy)), ((VECTOR(uint8_t, 2))(0x99L, 0x92L)).yxyxyxxy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(247UL, 1UL)).xxyxxyxx, ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(l_333.zywwzwzw)).lo))).xwwwwzzy)))))).even)), ((VECTOR(uint8_t, 2))(p_1620->g_334.zz)).xyyx)))))).hi))).xyyxyyyyyxxxxyyx)).s82, ((VECTOR(uint8_t, 4))(p_1620->g_335.ywwy)).odd))).lo && ((VECTOR(uint8_t, 2))(0xA0L, 0xC2L)).hi), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(p_1620->g_336.s60)), ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(4UL, 0xD8208BC9L, ((VECTOR(uint32_t, 4))(p_87, ((VECTOR(uint32_t, 2))(0x9578FEB4L, 0xCF081192L)), 3UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 0x06D62200L)).xxyxyyxy)), 2UL, 0x840EE671L)), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_337.yz)))).yyyxxyxyxxyyxxxy)).odd, ((VECTOR(uint32_t, 4))((((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(l_338.sb242bade)).s03, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_339.zwxyzxwz)).s06))))).yyxy))), (int64_t)(safe_sub_func_uint8_t_u_u(p_87, ((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u(((void*)0 == &p_1620->g_297), (l_275 ^ ((p_1620->g_300.f4 | GROUP_DIVERGE(1, 1)) <= ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_347.yyyyyyxy)), ((VECTOR(int64_t, 2))(l_348.xy)), ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(l_349.xxxyyxyxxyxxyyyx)).s46, ((VECTOR(int64_t, 4))(0x67EE241F77DABDBBL, 0x132945B6AD69DD57L, 0x05CF83B5D350F5FDL, 0L)).odd, ((VECTOR(int64_t, 4))(l_350.s3566)).even))), 0x5F99078D1F937A83L, 0x7A2A91BA2B85AA11L, (-1L), 0x19C81CFE6182E7B2L)).s14, (int64_t)l_275))).lo)))))) > 0UL), 5UL)) > 3L)))))).wwzyyzyw, ((VECTOR(int64_t, 8))(0x0EF00B0F128CD05EL))))).s47, ((VECTOR(uint64_t, 2))(7UL))))).yyxyyxyy, (uint64_t)p_1620->g_27.s6))).s2 || p_87), 1UL, 0x4F4BB6D4L, 4294967292UL)).wyyyyzxx))).even, ((VECTOR(uint32_t, 4))(2UL))))).wxwxwwwzzxxxxwwx))).s04))).yxyxxxxxyyxyyyxx)).s9aad)), ((VECTOR(uint32_t, 4))(0x5CDD73C7L)), ((VECTOR(uint32_t, 4))(0xC59BA08CL))))).lo, (uint32_t)p_86, (uint32_t)l_351))))))), 0x03D689D7L, 0UL)).xwwyxyxz)))).s0 < p_86))), 5L)) > l_133)));
                    (*l_322) = ((l_312 & (safe_mul_func_int16_t_s_s(((~(((l_354 = p_87) != ((((VECTOR(uint32_t, 4))(l_355.s2637)).z , (*p_1620->g_41)) || ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_1620->g_356.s5173262476034110)).odd)).s4)) >= 0x36L)) , (((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((++(*p_1620->g_41)), (-7L))) | (&l_354 == (((safe_sub_func_int8_t_s_s(((((void*)0 != l_365) & ((VECTOR(int32_t, 2))(l_366.xy)).lo) != p_88), GROUP_DIVERGE(0, 1))) , 2UL) , &l_121))), 5L)) , l_367) <= p_88)), p_87))) & l_330.x);
                    return l_368;
                }
                return l_369;
            }
        }
        if ((p_1620->g_27.s1 , (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, (FAKE_DIVERGE(p_1620->group_2_offset, get_group_id(2), 10) & ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 2))(p_1620->g_370.s28)).yxyx, ((VECTOR(uint64_t, 16))(p_1620->g_371.s27bb8b33da5e9d14)).s39ac))).even, ((VECTOR(uint64_t, 4))(p_1620->g_372.xyxy)).lo))).xyxyxxxy)))).lo)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_373.yyyxyxxxyyyyxxyx)).hi)).s71, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551608UL, 0x058504F94FDA8D4CL)).yxxy)), (safe_rshift_func_uint8_t_u_u(0x07L, p_87)), ((l_366.y ^ p_1620->g_264.f3) && (FAKE_DIVERGE(p_1620->group_2_offset, get_group_id(2), 10) , p_1620->g_113)), 0x2DCB239EE5644549L, 0xE416EAB9F0951DD4L)).s36))), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_376.xxxxxyxx)).s0, ((safe_add_func_int8_t_s_s(p_86, ((~(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(0x41C5D2B6L, ((((*l_388) = (((*l_387) ^= ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))((((safe_div_func_int16_t_s_s((!((((l_383 == (p_1620->g_256[3] = (l_385[4] = &l_145))) | p_1620->g_371.s2) ^ FAKE_DIVERGE(p_1620->local_2_offset, get_local_id(2), 10)) , p_1620->g_143[6][2][0])), p_88)) , (void*)0) != l_221), (-6L), ((VECTOR(int16_t, 2))(0x49FEL)), ((VECTOR(int16_t, 4))(0x602EL)), 0x721FL, 0x15F0L, 0x7AA7L, 6L, (-1L), 0x491AL, (-4L), 0x4518L)).lo))), ((VECTOR(int16_t, 8))(0x43CEL))))).s3, 2)) > l_386)) , p_87)) & (*p_1620->g_41)) <= 0x4D30L), ((VECTOR(int32_t, 4))(0x157FA2CDL)), 0L, 0x1173FEBBL)).even, (int32_t)6L))).y == p_86)) || GROUP_DIVERGE(2, 1)))) < l_250), 0xAFFE4F2B79D30D86L, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(0x83B5470859DDC02DL)), ((VECTOR(uint64_t, 4))(1UL))))), 0x6916736659E662BBL, 6UL)), ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).odd, ((VECTOR(uint64_t, 4))(1UL))))).xyzyyxxxywxywxwx, ((VECTOR(uint64_t, 16))(0x39973BEFACAC039FL)), ((VECTOR(uint64_t, 16))(0xACCA4815CE4E759EL))))).odd)).s25)).odd), (-10L), 5L)).wyzyxxyyzwwwxyyy)))).s9 && 4294967295UL) | p_87) , (-1L))))
        { /* block id: 127 */
            uint16_t l_392 = 0x27ACL;
            for (p_1620->g_299.f1 = (-1); (p_1620->g_299.f1 == 29); ++p_1620->g_299.f1)
            { /* block id: 130 */
                (*p_1620->g_391) = &l_122[0];
                if (l_392)
                    break;
            }
            if (p_86)
                break;
        }
        else
        { /* block id: 135 */
            int32_t *l_394 = &l_121;
            l_394 = (*p_1620->g_236);
        }
        l_387 = &l_122[0];
    }
    ++l_407;
    return l_221;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S2 c_1621;
    struct S2* p_1620 = &c_1621;
    struct S2 c_1622 = {
        {(-1L),(-1L),(-1L)}, // p_1620->g_9
        (VECTOR(int8_t, 2))((-1L), (-7L)), // p_1620->g_23
        (VECTOR(int8_t, 8))(0x20L, (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, 0x6EL), 0x6EL), 0x6EL, 0x20L, 0x6EL), // p_1620->g_24
        (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-7L)), (-7L)), // p_1620->g_26
        (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x28L), 0x28L), 0x28L, (-2L), 0x28L), // p_1620->g_27
        (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-3L)), (-3L)), (-3L), (-8L), (-3L)), // p_1620->g_28
        (VECTOR(int8_t, 16))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0L), 0L), 0L, 0x5BL, 0L, (VECTOR(int8_t, 2))(0x5BL, 0L), (VECTOR(int8_t, 2))(0x5BL, 0L), 0x5BL, 0L, 0x5BL, 0L), // p_1620->g_29
        0xE5D1C1BBL, // p_1620->g_42
        &p_1620->g_42, // p_1620->g_41
        {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}}, // p_1620->g_44
        {{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]},{&p_1620->g_44[3][0][0],&p_1620->g_44[3][0][0],&p_1620->g_44[1][0][1]}}, // p_1620->g_43
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1620->g_51
        {6L,6L,6L,6L,6L}, // p_1620->g_74
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1620->g_98
        0x6F21EC41L, // p_1620->g_113
        {-1L}, // p_1620->g_116
        1UL, // p_1620->g_141
        {{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}},{{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L},{0x1EBFL,65535UL,0x0258L}}}, // p_1620->g_143
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x60527778L), 0x60527778L), 0x60527778L, 4294967295UL, 0x60527778L, (VECTOR(uint32_t, 2))(4294967295UL, 0x60527778L), (VECTOR(uint32_t, 2))(4294967295UL, 0x60527778L), 4294967295UL, 0x60527778L, 4294967295UL, 0x60527778L), // p_1620->g_146
        (VECTOR(int16_t, 16))(0x498CL, (VECTOR(int16_t, 4))(0x498CL, (VECTOR(int16_t, 2))(0x498CL, 0x1976L), 0x1976L), 0x1976L, 0x498CL, 0x1976L, (VECTOR(int16_t, 2))(0x498CL, 0x1976L), (VECTOR(int16_t, 2))(0x498CL, 0x1976L), 0x498CL, 0x1976L, 0x498CL, 0x1976L), // p_1620->g_147
        0x3DC2L, // p_1620->g_150
        1L, // p_1620->g_158
        {0L}, // p_1620->g_159
        (void*)0, // p_1620->g_168
        (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 0xE9L), 0xE9L), // p_1620->g_177
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL, (VECTOR(uint16_t, 2))(1UL, 9UL), (VECTOR(uint16_t, 2))(1UL, 9UL), 1UL, 9UL, 1UL, 9UL), // p_1620->g_210
        {4294967292UL,0x837F951FL,0xD2F6792EL,0UL,0xC77A69A3492D31B6L}, // p_1620->g_224
        &p_1620->g_224, // p_1620->g_225
        &p_1620->g_43[4][1], // p_1620->g_236
        (void*)0, // p_1620->g_257
        {&p_1620->g_257,&p_1620->g_257,&p_1620->g_257,&p_1620->g_257,&p_1620->g_257}, // p_1620->g_256
        {0x8F39C980L,1UL,5UL,0xC4AC007FL,0xAA4100DE2BDF2BCAL}, // p_1620->g_264
        0x3E853B37L, // p_1620->g_297
        {0xD29D54ADL,0x8446E024L,0xA9DE29E1L,4294967288UL,0x0D7091ECD249AC53L}, // p_1620->g_299
        {4294967286UL,0x5CD436BAL,0UL,0xE2005762L,0UL}, // p_1620->g_300
        {&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224}, // p_1620->g_302
        {&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224,&p_1620->g_224}, // p_1620->g_303
        {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}, // p_1620->g_319
        (void*)0, // p_1620->g_320
        {&p_1620->g_43[4][1],&p_1620->g_43[4][1],&p_1620->g_43[4][1],&p_1620->g_43[4][1],&p_1620->g_43[4][1]}, // p_1620->g_321
        (VECTOR(uint8_t, 2))(255UL, 1UL), // p_1620->g_327
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL, (VECTOR(uint8_t, 2))(1UL, 8UL), (VECTOR(uint8_t, 2))(1UL, 8UL), 1UL, 8UL, 1UL, 8UL), // p_1620->g_331
        (VECTOR(uint8_t, 4))(0x6CL, (VECTOR(uint8_t, 2))(0x6CL, 1UL), 1UL), // p_1620->g_334
        (VECTOR(uint8_t, 4))(0x54L, (VECTOR(uint8_t, 2))(0x54L, 0x3AL), 0x3AL), // p_1620->g_335
        (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 4294967288UL), 4294967288UL), 4294967288UL, 5UL, 4294967288UL, (VECTOR(uint32_t, 2))(5UL, 4294967288UL), (VECTOR(uint32_t, 2))(5UL, 4294967288UL), 5UL, 4294967288UL, 5UL, 4294967288UL), // p_1620->g_336
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL), // p_1620->g_356
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_1620->g_370
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3D7300A49A9E73D1L), 0x3D7300A49A9E73D1L), 0x3D7300A49A9E73D1L, 18446744073709551615UL, 0x3D7300A49A9E73D1L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3D7300A49A9E73D1L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3D7300A49A9E73D1L), 18446744073709551615UL, 0x3D7300A49A9E73D1L, 18446744073709551615UL, 0x3D7300A49A9E73D1L), // p_1620->g_371
        (VECTOR(uint64_t, 2))(0xDC293719B8C05A2AL, 18446744073709551615UL), // p_1620->g_372
        &p_1620->g_43[4][1], // p_1620->g_391
        (void*)0, // p_1620->g_393
        {0x9EB30453L,0x7BF20D3BL,0xC16DEEA0L,0UL,0x1B524519082EF529L}, // p_1620->g_414
        {0xFF927494L,1UL,4294967295UL,0UL,9UL}, // p_1620->g_415
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x9FL), 0x9FL), // p_1620->g_422
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x0EL), 0x0EL), // p_1620->g_423
        (VECTOR(int8_t, 16))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 2L), 2L), 2L, 0x58L, 2L, (VECTOR(int8_t, 2))(0x58L, 2L), (VECTOR(int8_t, 2))(0x58L, 2L), 0x58L, 2L, 0x58L, 2L), // p_1620->g_424
        (VECTOR(int8_t, 2))(0x24L, (-1L)), // p_1620->g_427
        (VECTOR(uint8_t, 4))(0x1DL, (VECTOR(uint8_t, 2))(0x1DL, 0x9BL), 0x9BL), // p_1620->g_439
        0xC3A915FCL, // p_1620->g_456
        {{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x23FFAA6EBB6243A3L,0x23FFAA6EBB6243A3L,18446744073709551615UL,18446744073709551615UL}}, // p_1620->g_468
        (void*)0, // p_1620->g_472
        {{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]},{&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3],&p_1620->g_256[3]}}, // p_1620->g_473
        (void*)0, // p_1620->g_524
        {0xA43C81EAL,0xA3C9797CL,4294967295UL,0xC13B5D2DL,0x1A5BE1D883B15E7DL}, // p_1620->g_528
        &p_1620->g_528, // p_1620->g_529
        0x81L, // p_1620->g_564
        {4294967295UL,0UL,0xAF95587AL,0UL,1UL}, // p_1620->g_574
        (void*)0, // p_1620->g_575
        &p_1620->g_528, // p_1620->g_576
        {0x02BB2056L,9UL,0x181375D6L,0x525A6A93L,0xF12360EF825FFC42L}, // p_1620->g_598
        {{(void*)0,&p_1620->g_528,(void*)0},{(void*)0,&p_1620->g_528,(void*)0},{(void*)0,&p_1620->g_528,(void*)0},{(void*)0,&p_1620->g_528,(void*)0},{(void*)0,&p_1620->g_528,(void*)0},{(void*)0,&p_1620->g_528,(void*)0}}, // p_1620->g_599
        {4294967295UL,4294967295UL,0UL,4294967288UL,0x3EE693552E402A65L}, // p_1620->g_601
        &p_1620->g_44[3][0][0], // p_1620->g_605
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1620->g_613
        &p_1620->g_299.f1, // p_1620->g_615
        &p_1620->g_224, // p_1620->g_629
        &p_1620->g_629, // p_1620->g_628
        &p_1620->g_574.f3, // p_1620->g_636
        &p_1620->g_43[0][1], // p_1620->g_640
        (VECTOR(int16_t, 4))(0x1A22L, (VECTOR(int16_t, 2))(0x1A22L, 0x146FL), 0x146FL), // p_1620->g_653
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_1620->g_675
        (void*)0, // p_1620->g_693
        (-1L), // p_1620->g_704
        &p_1620->g_302[3], // p_1620->g_708
        &p_1620->g_168, // p_1620->g_722
        {0xB9EEBA8AC342C723L,0xB9EEBA8AC342C723L,0xB9EEBA8AC342C723L,0xB9EEBA8AC342C723L,0xB9EEBA8AC342C723L,0xB9EEBA8AC342C723L}, // p_1620->g_725
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x3BL), 0x3BL), 0x3BL, (-6L), 0x3BL), // p_1620->g_742
        (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0L), 0L), 0L, 9L, 0L), // p_1620->g_743
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6E53L), 0x6E53L), 0x6E53L, 1L, 0x6E53L, (VECTOR(int16_t, 2))(1L, 0x6E53L), (VECTOR(int16_t, 2))(1L, 0x6E53L), 1L, 0x6E53L, 1L, 0x6E53L), // p_1620->g_791
        {3UL,0x77111AC1L,0xFC428800L,1UL,18446744073709551611UL}, // p_1620->g_792
        {4294967287UL,1UL,4294967295UL,0x0B9C733FL,0xB3E7811C4521F40DL}, // p_1620->g_796
        {{{(-4L),(-4L),(-4L)}}}, // p_1620->g_825
        (VECTOR(int32_t, 2))(0x2874841AL, 0x1E26F9A9L), // p_1620->g_848
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1620->g_849
        (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x3934C65BL), 0x3934C65BL), 0x3934C65BL, (-3L), 0x3934C65BL), // p_1620->g_850
        {3UL,4294967291UL,0xAB05E01DL,8UL,18446744073709551609UL}, // p_1620->g_853
        &p_1620->g_853, // p_1620->g_852
        &p_1620->g_852, // p_1620->g_851
        (void*)0, // p_1620->g_866
        &p_1620->g_866, // p_1620->g_865
        (VECTOR(int32_t, 2))(0x6B2DA9D8L, 0x2E090B2FL), // p_1620->g_871
        {0xBAE3751AL,0xDE6E9E01L,0x7F71A1E3L,9UL,0x73BC8982839A7540L}, // p_1620->g_899
        (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, (-5L)), (-5L)), // p_1620->g_906
        246UL, // p_1620->g_953
        &p_1620->g_44[1][0][1], // p_1620->g_959
        (void*)0, // p_1620->g_1018
        {{{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0},{(void*)0,&p_1620->g_44[1][0][1],(void*)0,(void*)0,&p_1620->g_44[1][0][1],(void*)0}}}, // p_1620->g_1019
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_1620->g_1023
        (void*)0, // p_1620->g_1033
        &p_1620->g_1033, // p_1620->g_1032
        (-2L), // p_1620->g_1073
        (VECTOR(int8_t, 2))(0x3DL, (-6L)), // p_1620->g_1101
        (VECTOR(int8_t, 2))((-9L), 0x31L), // p_1620->g_1107
        {-4L}, // p_1620->g_1114
        (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, (-1L)), (-1L)), // p_1620->g_1122
        (-1L), // p_1620->g_1149
        {{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}},{{{-1L},{0x1AL},{0L}}}}, // p_1620->g_1154
        (VECTOR(uint64_t, 8))(0x650BD0A54B626DF0L, (VECTOR(uint64_t, 4))(0x650BD0A54B626DF0L, (VECTOR(uint64_t, 2))(0x650BD0A54B626DF0L, 1UL), 1UL), 1UL, 0x650BD0A54B626DF0L, 1UL), // p_1620->g_1160
        {0x7AL}, // p_1620->g_1169
        (VECTOR(int32_t, 8))(0x090C09C0L, (VECTOR(int32_t, 4))(0x090C09C0L, (VECTOR(int32_t, 2))(0x090C09C0L, 6L), 6L), 6L, 0x090C09C0L, 6L), // p_1620->g_1173
        (void*)0, // p_1620->g_1186
        (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 3L), 3L), // p_1620->g_1226
        &p_1620->g_297, // p_1620->g_1248
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD1L), 0xD1L), 0xD1L, 0UL, 0xD1L), // p_1620->g_1259
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL), // p_1620->g_1260
        (VECTOR(int64_t, 2))((-8L), 0x201276AC37119959L), // p_1620->g_1269
        18446744073709551615UL, // p_1620->g_1272
        &p_1620->g_1272, // p_1620->g_1271
        {{&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271,&p_1620->g_1271}}, // p_1620->g_1270
        (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x150E96D6L), 0x150E96D6L), 0x150E96D6L, (-5L), 0x150E96D6L, (VECTOR(int32_t, 2))((-5L), 0x150E96D6L), (VECTOR(int32_t, 2))((-5L), 0x150E96D6L), (-5L), 0x150E96D6L, (-5L), 0x150E96D6L), // p_1620->g_1289
        (VECTOR(int32_t, 8))(0x3E5E7B20L, (VECTOR(int32_t, 4))(0x3E5E7B20L, (VECTOR(int32_t, 2))(0x3E5E7B20L, 1L), 1L), 1L, 0x3E5E7B20L, 1L), // p_1620->g_1290
        (VECTOR(int32_t, 2))(0x1C344E02L, (-1L)), // p_1620->g_1362
        (VECTOR(uint64_t, 2))(0x25DD04D165B3C852L, 0xE2B891794138F444L), // p_1620->g_1417
        1L, // p_1620->g_1432
        (VECTOR(int64_t, 4))(0x11AF8E0E6C9F4DEAL, (VECTOR(int64_t, 2))(0x11AF8E0E6C9F4DEAL, 0x14BFAB09C80A3706L), 0x14BFAB09C80A3706L), // p_1620->g_1449
        0xFDL, // p_1620->g_1457
        (VECTOR(uint16_t, 2))(0x1D8CL, 0x69BFL), // p_1620->g_1464
        (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x4668L), 0x4668L), 0x4668L, 6UL, 0x4668L), // p_1620->g_1465
        (void*)0, // p_1620->g_1500
        &p_1620->g_1500, // p_1620->g_1499
        (VECTOR(int32_t, 4))(0x10313807L, (VECTOR(int32_t, 2))(0x10313807L, 1L), 1L), // p_1620->g_1525
        {3L}, // p_1620->g_1541
        0x7D68L, // p_1620->g_1569
        {{{0x52L},{0x3EL},{0x52L},{0x52L},{0x3EL},{0x52L},{0x52L}},{{0x52L},{0x3EL},{0x52L},{0x52L},{0x3EL},{0x52L},{0x52L}},{{0x52L},{0x3EL},{0x52L},{0x52L},{0x3EL},{0x52L},{0x52L}},{{0x52L},{0x3EL},{0x52L},{0x52L},{0x3EL},{0x52L},{0x52L}}}, // p_1620->g_1613
        &p_1620->g_1613[0][1], // p_1620->g_1612
        {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}, // p_1620->g_1615
        &p_1620->g_1615[5], // p_1620->g_1614
        {&p_1620->g_1614,(void*)0,&p_1620->g_1614,&p_1620->g_1614,(void*)0,&p_1620->g_1614,&p_1620->g_1614,(void*)0,&p_1620->g_1614}, // p_1620->g_1611
        &p_1620->g_1611[5], // p_1620->g_1610
        &p_1620->g_1610, // p_1620->g_1609
        &p_1620->g_1609, // p_1620->g_1608
        &p_1620->g_43[9][1], // p_1620->g_1619
        0, // p_1620->v_collective
        sequence_input[get_global_id(0)], // p_1620->global_0_offset
        sequence_input[get_global_id(1)], // p_1620->global_1_offset
        sequence_input[get_global_id(2)], // p_1620->global_2_offset
        sequence_input[get_local_id(0)], // p_1620->local_0_offset
        sequence_input[get_local_id(1)], // p_1620->local_1_offset
        sequence_input[get_local_id(2)], // p_1620->local_2_offset
        sequence_input[get_group_id(0)], // p_1620->group_0_offset
        sequence_input[get_group_id(1)], // p_1620->group_1_offset
        sequence_input[get_group_id(2)], // p_1620->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_1620->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1621 = c_1622;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1620);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1620->g_9[i], "p_1620->g_9[i]", print_hash_value);

    }
    transparent_crc(p_1620->g_23.x, "p_1620->g_23.x", print_hash_value);
    transparent_crc(p_1620->g_23.y, "p_1620->g_23.y", print_hash_value);
    transparent_crc(p_1620->g_24.s0, "p_1620->g_24.s0", print_hash_value);
    transparent_crc(p_1620->g_24.s1, "p_1620->g_24.s1", print_hash_value);
    transparent_crc(p_1620->g_24.s2, "p_1620->g_24.s2", print_hash_value);
    transparent_crc(p_1620->g_24.s3, "p_1620->g_24.s3", print_hash_value);
    transparent_crc(p_1620->g_24.s4, "p_1620->g_24.s4", print_hash_value);
    transparent_crc(p_1620->g_24.s5, "p_1620->g_24.s5", print_hash_value);
    transparent_crc(p_1620->g_24.s6, "p_1620->g_24.s6", print_hash_value);
    transparent_crc(p_1620->g_24.s7, "p_1620->g_24.s7", print_hash_value);
    transparent_crc(p_1620->g_26.x, "p_1620->g_26.x", print_hash_value);
    transparent_crc(p_1620->g_26.y, "p_1620->g_26.y", print_hash_value);
    transparent_crc(p_1620->g_26.z, "p_1620->g_26.z", print_hash_value);
    transparent_crc(p_1620->g_26.w, "p_1620->g_26.w", print_hash_value);
    transparent_crc(p_1620->g_27.s0, "p_1620->g_27.s0", print_hash_value);
    transparent_crc(p_1620->g_27.s1, "p_1620->g_27.s1", print_hash_value);
    transparent_crc(p_1620->g_27.s2, "p_1620->g_27.s2", print_hash_value);
    transparent_crc(p_1620->g_27.s3, "p_1620->g_27.s3", print_hash_value);
    transparent_crc(p_1620->g_27.s4, "p_1620->g_27.s4", print_hash_value);
    transparent_crc(p_1620->g_27.s5, "p_1620->g_27.s5", print_hash_value);
    transparent_crc(p_1620->g_27.s6, "p_1620->g_27.s6", print_hash_value);
    transparent_crc(p_1620->g_27.s7, "p_1620->g_27.s7", print_hash_value);
    transparent_crc(p_1620->g_28.s0, "p_1620->g_28.s0", print_hash_value);
    transparent_crc(p_1620->g_28.s1, "p_1620->g_28.s1", print_hash_value);
    transparent_crc(p_1620->g_28.s2, "p_1620->g_28.s2", print_hash_value);
    transparent_crc(p_1620->g_28.s3, "p_1620->g_28.s3", print_hash_value);
    transparent_crc(p_1620->g_28.s4, "p_1620->g_28.s4", print_hash_value);
    transparent_crc(p_1620->g_28.s5, "p_1620->g_28.s5", print_hash_value);
    transparent_crc(p_1620->g_28.s6, "p_1620->g_28.s6", print_hash_value);
    transparent_crc(p_1620->g_28.s7, "p_1620->g_28.s7", print_hash_value);
    transparent_crc(p_1620->g_29.s0, "p_1620->g_29.s0", print_hash_value);
    transparent_crc(p_1620->g_29.s1, "p_1620->g_29.s1", print_hash_value);
    transparent_crc(p_1620->g_29.s2, "p_1620->g_29.s2", print_hash_value);
    transparent_crc(p_1620->g_29.s3, "p_1620->g_29.s3", print_hash_value);
    transparent_crc(p_1620->g_29.s4, "p_1620->g_29.s4", print_hash_value);
    transparent_crc(p_1620->g_29.s5, "p_1620->g_29.s5", print_hash_value);
    transparent_crc(p_1620->g_29.s6, "p_1620->g_29.s6", print_hash_value);
    transparent_crc(p_1620->g_29.s7, "p_1620->g_29.s7", print_hash_value);
    transparent_crc(p_1620->g_29.s8, "p_1620->g_29.s8", print_hash_value);
    transparent_crc(p_1620->g_29.s9, "p_1620->g_29.s9", print_hash_value);
    transparent_crc(p_1620->g_29.sa, "p_1620->g_29.sa", print_hash_value);
    transparent_crc(p_1620->g_29.sb, "p_1620->g_29.sb", print_hash_value);
    transparent_crc(p_1620->g_29.sc, "p_1620->g_29.sc", print_hash_value);
    transparent_crc(p_1620->g_29.sd, "p_1620->g_29.sd", print_hash_value);
    transparent_crc(p_1620->g_29.se, "p_1620->g_29.se", print_hash_value);
    transparent_crc(p_1620->g_29.sf, "p_1620->g_29.sf", print_hash_value);
    transparent_crc(p_1620->g_42, "p_1620->g_42", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1620->g_44[i][j][k], "p_1620->g_44[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1620->g_74[i], "p_1620->g_74[i]", print_hash_value);

    }
    transparent_crc(p_1620->g_98.s0, "p_1620->g_98.s0", print_hash_value);
    transparent_crc(p_1620->g_98.s1, "p_1620->g_98.s1", print_hash_value);
    transparent_crc(p_1620->g_98.s2, "p_1620->g_98.s2", print_hash_value);
    transparent_crc(p_1620->g_98.s3, "p_1620->g_98.s3", print_hash_value);
    transparent_crc(p_1620->g_98.s4, "p_1620->g_98.s4", print_hash_value);
    transparent_crc(p_1620->g_98.s5, "p_1620->g_98.s5", print_hash_value);
    transparent_crc(p_1620->g_98.s6, "p_1620->g_98.s6", print_hash_value);
    transparent_crc(p_1620->g_98.s7, "p_1620->g_98.s7", print_hash_value);
    transparent_crc(p_1620->g_113, "p_1620->g_113", print_hash_value);
    transparent_crc(p_1620->g_116.f0, "p_1620->g_116.f0", print_hash_value);
    transparent_crc(p_1620->g_141, "p_1620->g_141", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1620->g_143[i][j][k], "p_1620->g_143[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1620->g_146.s0, "p_1620->g_146.s0", print_hash_value);
    transparent_crc(p_1620->g_146.s1, "p_1620->g_146.s1", print_hash_value);
    transparent_crc(p_1620->g_146.s2, "p_1620->g_146.s2", print_hash_value);
    transparent_crc(p_1620->g_146.s3, "p_1620->g_146.s3", print_hash_value);
    transparent_crc(p_1620->g_146.s4, "p_1620->g_146.s4", print_hash_value);
    transparent_crc(p_1620->g_146.s5, "p_1620->g_146.s5", print_hash_value);
    transparent_crc(p_1620->g_146.s6, "p_1620->g_146.s6", print_hash_value);
    transparent_crc(p_1620->g_146.s7, "p_1620->g_146.s7", print_hash_value);
    transparent_crc(p_1620->g_146.s8, "p_1620->g_146.s8", print_hash_value);
    transparent_crc(p_1620->g_146.s9, "p_1620->g_146.s9", print_hash_value);
    transparent_crc(p_1620->g_146.sa, "p_1620->g_146.sa", print_hash_value);
    transparent_crc(p_1620->g_146.sb, "p_1620->g_146.sb", print_hash_value);
    transparent_crc(p_1620->g_146.sc, "p_1620->g_146.sc", print_hash_value);
    transparent_crc(p_1620->g_146.sd, "p_1620->g_146.sd", print_hash_value);
    transparent_crc(p_1620->g_146.se, "p_1620->g_146.se", print_hash_value);
    transparent_crc(p_1620->g_146.sf, "p_1620->g_146.sf", print_hash_value);
    transparent_crc(p_1620->g_147.s0, "p_1620->g_147.s0", print_hash_value);
    transparent_crc(p_1620->g_147.s1, "p_1620->g_147.s1", print_hash_value);
    transparent_crc(p_1620->g_147.s2, "p_1620->g_147.s2", print_hash_value);
    transparent_crc(p_1620->g_147.s3, "p_1620->g_147.s3", print_hash_value);
    transparent_crc(p_1620->g_147.s4, "p_1620->g_147.s4", print_hash_value);
    transparent_crc(p_1620->g_147.s5, "p_1620->g_147.s5", print_hash_value);
    transparent_crc(p_1620->g_147.s6, "p_1620->g_147.s6", print_hash_value);
    transparent_crc(p_1620->g_147.s7, "p_1620->g_147.s7", print_hash_value);
    transparent_crc(p_1620->g_147.s8, "p_1620->g_147.s8", print_hash_value);
    transparent_crc(p_1620->g_147.s9, "p_1620->g_147.s9", print_hash_value);
    transparent_crc(p_1620->g_147.sa, "p_1620->g_147.sa", print_hash_value);
    transparent_crc(p_1620->g_147.sb, "p_1620->g_147.sb", print_hash_value);
    transparent_crc(p_1620->g_147.sc, "p_1620->g_147.sc", print_hash_value);
    transparent_crc(p_1620->g_147.sd, "p_1620->g_147.sd", print_hash_value);
    transparent_crc(p_1620->g_147.se, "p_1620->g_147.se", print_hash_value);
    transparent_crc(p_1620->g_147.sf, "p_1620->g_147.sf", print_hash_value);
    transparent_crc(p_1620->g_150, "p_1620->g_150", print_hash_value);
    transparent_crc(p_1620->g_158, "p_1620->g_158", print_hash_value);
    transparent_crc(p_1620->g_159.f0, "p_1620->g_159.f0", print_hash_value);
    transparent_crc(p_1620->g_177.x, "p_1620->g_177.x", print_hash_value);
    transparent_crc(p_1620->g_177.y, "p_1620->g_177.y", print_hash_value);
    transparent_crc(p_1620->g_177.z, "p_1620->g_177.z", print_hash_value);
    transparent_crc(p_1620->g_177.w, "p_1620->g_177.w", print_hash_value);
    transparent_crc(p_1620->g_210.s0, "p_1620->g_210.s0", print_hash_value);
    transparent_crc(p_1620->g_210.s1, "p_1620->g_210.s1", print_hash_value);
    transparent_crc(p_1620->g_210.s2, "p_1620->g_210.s2", print_hash_value);
    transparent_crc(p_1620->g_210.s3, "p_1620->g_210.s3", print_hash_value);
    transparent_crc(p_1620->g_210.s4, "p_1620->g_210.s4", print_hash_value);
    transparent_crc(p_1620->g_210.s5, "p_1620->g_210.s5", print_hash_value);
    transparent_crc(p_1620->g_210.s6, "p_1620->g_210.s6", print_hash_value);
    transparent_crc(p_1620->g_210.s7, "p_1620->g_210.s7", print_hash_value);
    transparent_crc(p_1620->g_210.s8, "p_1620->g_210.s8", print_hash_value);
    transparent_crc(p_1620->g_210.s9, "p_1620->g_210.s9", print_hash_value);
    transparent_crc(p_1620->g_210.sa, "p_1620->g_210.sa", print_hash_value);
    transparent_crc(p_1620->g_210.sb, "p_1620->g_210.sb", print_hash_value);
    transparent_crc(p_1620->g_210.sc, "p_1620->g_210.sc", print_hash_value);
    transparent_crc(p_1620->g_210.sd, "p_1620->g_210.sd", print_hash_value);
    transparent_crc(p_1620->g_210.se, "p_1620->g_210.se", print_hash_value);
    transparent_crc(p_1620->g_210.sf, "p_1620->g_210.sf", print_hash_value);
    transparent_crc(p_1620->g_224.f0, "p_1620->g_224.f0", print_hash_value);
    transparent_crc(p_1620->g_224.f1, "p_1620->g_224.f1", print_hash_value);
    transparent_crc(p_1620->g_224.f2, "p_1620->g_224.f2", print_hash_value);
    transparent_crc(p_1620->g_224.f3, "p_1620->g_224.f3", print_hash_value);
    transparent_crc(p_1620->g_224.f4, "p_1620->g_224.f4", print_hash_value);
    transparent_crc(p_1620->g_264.f0, "p_1620->g_264.f0", print_hash_value);
    transparent_crc(p_1620->g_264.f1, "p_1620->g_264.f1", print_hash_value);
    transparent_crc(p_1620->g_264.f2, "p_1620->g_264.f2", print_hash_value);
    transparent_crc(p_1620->g_264.f3, "p_1620->g_264.f3", print_hash_value);
    transparent_crc(p_1620->g_264.f4, "p_1620->g_264.f4", print_hash_value);
    transparent_crc(p_1620->g_297, "p_1620->g_297", print_hash_value);
    transparent_crc(p_1620->g_299.f0, "p_1620->g_299.f0", print_hash_value);
    transparent_crc(p_1620->g_299.f1, "p_1620->g_299.f1", print_hash_value);
    transparent_crc(p_1620->g_299.f2, "p_1620->g_299.f2", print_hash_value);
    transparent_crc(p_1620->g_299.f3, "p_1620->g_299.f3", print_hash_value);
    transparent_crc(p_1620->g_299.f4, "p_1620->g_299.f4", print_hash_value);
    transparent_crc(p_1620->g_300.f0, "p_1620->g_300.f0", print_hash_value);
    transparent_crc(p_1620->g_300.f1, "p_1620->g_300.f1", print_hash_value);
    transparent_crc(p_1620->g_300.f2, "p_1620->g_300.f2", print_hash_value);
    transparent_crc(p_1620->g_300.f3, "p_1620->g_300.f3", print_hash_value);
    transparent_crc(p_1620->g_300.f4, "p_1620->g_300.f4", print_hash_value);
    transparent_crc(p_1620->g_327.x, "p_1620->g_327.x", print_hash_value);
    transparent_crc(p_1620->g_327.y, "p_1620->g_327.y", print_hash_value);
    transparent_crc(p_1620->g_331.s0, "p_1620->g_331.s0", print_hash_value);
    transparent_crc(p_1620->g_331.s1, "p_1620->g_331.s1", print_hash_value);
    transparent_crc(p_1620->g_331.s2, "p_1620->g_331.s2", print_hash_value);
    transparent_crc(p_1620->g_331.s3, "p_1620->g_331.s3", print_hash_value);
    transparent_crc(p_1620->g_331.s4, "p_1620->g_331.s4", print_hash_value);
    transparent_crc(p_1620->g_331.s5, "p_1620->g_331.s5", print_hash_value);
    transparent_crc(p_1620->g_331.s6, "p_1620->g_331.s6", print_hash_value);
    transparent_crc(p_1620->g_331.s7, "p_1620->g_331.s7", print_hash_value);
    transparent_crc(p_1620->g_331.s8, "p_1620->g_331.s8", print_hash_value);
    transparent_crc(p_1620->g_331.s9, "p_1620->g_331.s9", print_hash_value);
    transparent_crc(p_1620->g_331.sa, "p_1620->g_331.sa", print_hash_value);
    transparent_crc(p_1620->g_331.sb, "p_1620->g_331.sb", print_hash_value);
    transparent_crc(p_1620->g_331.sc, "p_1620->g_331.sc", print_hash_value);
    transparent_crc(p_1620->g_331.sd, "p_1620->g_331.sd", print_hash_value);
    transparent_crc(p_1620->g_331.se, "p_1620->g_331.se", print_hash_value);
    transparent_crc(p_1620->g_331.sf, "p_1620->g_331.sf", print_hash_value);
    transparent_crc(p_1620->g_334.x, "p_1620->g_334.x", print_hash_value);
    transparent_crc(p_1620->g_334.y, "p_1620->g_334.y", print_hash_value);
    transparent_crc(p_1620->g_334.z, "p_1620->g_334.z", print_hash_value);
    transparent_crc(p_1620->g_334.w, "p_1620->g_334.w", print_hash_value);
    transparent_crc(p_1620->g_335.x, "p_1620->g_335.x", print_hash_value);
    transparent_crc(p_1620->g_335.y, "p_1620->g_335.y", print_hash_value);
    transparent_crc(p_1620->g_335.z, "p_1620->g_335.z", print_hash_value);
    transparent_crc(p_1620->g_335.w, "p_1620->g_335.w", print_hash_value);
    transparent_crc(p_1620->g_336.s0, "p_1620->g_336.s0", print_hash_value);
    transparent_crc(p_1620->g_336.s1, "p_1620->g_336.s1", print_hash_value);
    transparent_crc(p_1620->g_336.s2, "p_1620->g_336.s2", print_hash_value);
    transparent_crc(p_1620->g_336.s3, "p_1620->g_336.s3", print_hash_value);
    transparent_crc(p_1620->g_336.s4, "p_1620->g_336.s4", print_hash_value);
    transparent_crc(p_1620->g_336.s5, "p_1620->g_336.s5", print_hash_value);
    transparent_crc(p_1620->g_336.s6, "p_1620->g_336.s6", print_hash_value);
    transparent_crc(p_1620->g_336.s7, "p_1620->g_336.s7", print_hash_value);
    transparent_crc(p_1620->g_336.s8, "p_1620->g_336.s8", print_hash_value);
    transparent_crc(p_1620->g_336.s9, "p_1620->g_336.s9", print_hash_value);
    transparent_crc(p_1620->g_336.sa, "p_1620->g_336.sa", print_hash_value);
    transparent_crc(p_1620->g_336.sb, "p_1620->g_336.sb", print_hash_value);
    transparent_crc(p_1620->g_336.sc, "p_1620->g_336.sc", print_hash_value);
    transparent_crc(p_1620->g_336.sd, "p_1620->g_336.sd", print_hash_value);
    transparent_crc(p_1620->g_336.se, "p_1620->g_336.se", print_hash_value);
    transparent_crc(p_1620->g_336.sf, "p_1620->g_336.sf", print_hash_value);
    transparent_crc(p_1620->g_356.s0, "p_1620->g_356.s0", print_hash_value);
    transparent_crc(p_1620->g_356.s1, "p_1620->g_356.s1", print_hash_value);
    transparent_crc(p_1620->g_356.s2, "p_1620->g_356.s2", print_hash_value);
    transparent_crc(p_1620->g_356.s3, "p_1620->g_356.s3", print_hash_value);
    transparent_crc(p_1620->g_356.s4, "p_1620->g_356.s4", print_hash_value);
    transparent_crc(p_1620->g_356.s5, "p_1620->g_356.s5", print_hash_value);
    transparent_crc(p_1620->g_356.s6, "p_1620->g_356.s6", print_hash_value);
    transparent_crc(p_1620->g_356.s7, "p_1620->g_356.s7", print_hash_value);
    transparent_crc(p_1620->g_370.s0, "p_1620->g_370.s0", print_hash_value);
    transparent_crc(p_1620->g_370.s1, "p_1620->g_370.s1", print_hash_value);
    transparent_crc(p_1620->g_370.s2, "p_1620->g_370.s2", print_hash_value);
    transparent_crc(p_1620->g_370.s3, "p_1620->g_370.s3", print_hash_value);
    transparent_crc(p_1620->g_370.s4, "p_1620->g_370.s4", print_hash_value);
    transparent_crc(p_1620->g_370.s5, "p_1620->g_370.s5", print_hash_value);
    transparent_crc(p_1620->g_370.s6, "p_1620->g_370.s6", print_hash_value);
    transparent_crc(p_1620->g_370.s7, "p_1620->g_370.s7", print_hash_value);
    transparent_crc(p_1620->g_370.s8, "p_1620->g_370.s8", print_hash_value);
    transparent_crc(p_1620->g_370.s9, "p_1620->g_370.s9", print_hash_value);
    transparent_crc(p_1620->g_370.sa, "p_1620->g_370.sa", print_hash_value);
    transparent_crc(p_1620->g_370.sb, "p_1620->g_370.sb", print_hash_value);
    transparent_crc(p_1620->g_370.sc, "p_1620->g_370.sc", print_hash_value);
    transparent_crc(p_1620->g_370.sd, "p_1620->g_370.sd", print_hash_value);
    transparent_crc(p_1620->g_370.se, "p_1620->g_370.se", print_hash_value);
    transparent_crc(p_1620->g_370.sf, "p_1620->g_370.sf", print_hash_value);
    transparent_crc(p_1620->g_371.s0, "p_1620->g_371.s0", print_hash_value);
    transparent_crc(p_1620->g_371.s1, "p_1620->g_371.s1", print_hash_value);
    transparent_crc(p_1620->g_371.s2, "p_1620->g_371.s2", print_hash_value);
    transparent_crc(p_1620->g_371.s3, "p_1620->g_371.s3", print_hash_value);
    transparent_crc(p_1620->g_371.s4, "p_1620->g_371.s4", print_hash_value);
    transparent_crc(p_1620->g_371.s5, "p_1620->g_371.s5", print_hash_value);
    transparent_crc(p_1620->g_371.s6, "p_1620->g_371.s6", print_hash_value);
    transparent_crc(p_1620->g_371.s7, "p_1620->g_371.s7", print_hash_value);
    transparent_crc(p_1620->g_371.s8, "p_1620->g_371.s8", print_hash_value);
    transparent_crc(p_1620->g_371.s9, "p_1620->g_371.s9", print_hash_value);
    transparent_crc(p_1620->g_371.sa, "p_1620->g_371.sa", print_hash_value);
    transparent_crc(p_1620->g_371.sb, "p_1620->g_371.sb", print_hash_value);
    transparent_crc(p_1620->g_371.sc, "p_1620->g_371.sc", print_hash_value);
    transparent_crc(p_1620->g_371.sd, "p_1620->g_371.sd", print_hash_value);
    transparent_crc(p_1620->g_371.se, "p_1620->g_371.se", print_hash_value);
    transparent_crc(p_1620->g_371.sf, "p_1620->g_371.sf", print_hash_value);
    transparent_crc(p_1620->g_372.x, "p_1620->g_372.x", print_hash_value);
    transparent_crc(p_1620->g_372.y, "p_1620->g_372.y", print_hash_value);
    transparent_crc(p_1620->g_414.f0, "p_1620->g_414.f0", print_hash_value);
    transparent_crc(p_1620->g_414.f1, "p_1620->g_414.f1", print_hash_value);
    transparent_crc(p_1620->g_414.f2, "p_1620->g_414.f2", print_hash_value);
    transparent_crc(p_1620->g_414.f3, "p_1620->g_414.f3", print_hash_value);
    transparent_crc(p_1620->g_414.f4, "p_1620->g_414.f4", print_hash_value);
    transparent_crc(p_1620->g_415.f0, "p_1620->g_415.f0", print_hash_value);
    transparent_crc(p_1620->g_415.f1, "p_1620->g_415.f1", print_hash_value);
    transparent_crc(p_1620->g_415.f2, "p_1620->g_415.f2", print_hash_value);
    transparent_crc(p_1620->g_415.f3, "p_1620->g_415.f3", print_hash_value);
    transparent_crc(p_1620->g_415.f4, "p_1620->g_415.f4", print_hash_value);
    transparent_crc(p_1620->g_422.x, "p_1620->g_422.x", print_hash_value);
    transparent_crc(p_1620->g_422.y, "p_1620->g_422.y", print_hash_value);
    transparent_crc(p_1620->g_422.z, "p_1620->g_422.z", print_hash_value);
    transparent_crc(p_1620->g_422.w, "p_1620->g_422.w", print_hash_value);
    transparent_crc(p_1620->g_423.x, "p_1620->g_423.x", print_hash_value);
    transparent_crc(p_1620->g_423.y, "p_1620->g_423.y", print_hash_value);
    transparent_crc(p_1620->g_423.z, "p_1620->g_423.z", print_hash_value);
    transparent_crc(p_1620->g_423.w, "p_1620->g_423.w", print_hash_value);
    transparent_crc(p_1620->g_424.s0, "p_1620->g_424.s0", print_hash_value);
    transparent_crc(p_1620->g_424.s1, "p_1620->g_424.s1", print_hash_value);
    transparent_crc(p_1620->g_424.s2, "p_1620->g_424.s2", print_hash_value);
    transparent_crc(p_1620->g_424.s3, "p_1620->g_424.s3", print_hash_value);
    transparent_crc(p_1620->g_424.s4, "p_1620->g_424.s4", print_hash_value);
    transparent_crc(p_1620->g_424.s5, "p_1620->g_424.s5", print_hash_value);
    transparent_crc(p_1620->g_424.s6, "p_1620->g_424.s6", print_hash_value);
    transparent_crc(p_1620->g_424.s7, "p_1620->g_424.s7", print_hash_value);
    transparent_crc(p_1620->g_424.s8, "p_1620->g_424.s8", print_hash_value);
    transparent_crc(p_1620->g_424.s9, "p_1620->g_424.s9", print_hash_value);
    transparent_crc(p_1620->g_424.sa, "p_1620->g_424.sa", print_hash_value);
    transparent_crc(p_1620->g_424.sb, "p_1620->g_424.sb", print_hash_value);
    transparent_crc(p_1620->g_424.sc, "p_1620->g_424.sc", print_hash_value);
    transparent_crc(p_1620->g_424.sd, "p_1620->g_424.sd", print_hash_value);
    transparent_crc(p_1620->g_424.se, "p_1620->g_424.se", print_hash_value);
    transparent_crc(p_1620->g_424.sf, "p_1620->g_424.sf", print_hash_value);
    transparent_crc(p_1620->g_427.x, "p_1620->g_427.x", print_hash_value);
    transparent_crc(p_1620->g_427.y, "p_1620->g_427.y", print_hash_value);
    transparent_crc(p_1620->g_439.x, "p_1620->g_439.x", print_hash_value);
    transparent_crc(p_1620->g_439.y, "p_1620->g_439.y", print_hash_value);
    transparent_crc(p_1620->g_439.z, "p_1620->g_439.z", print_hash_value);
    transparent_crc(p_1620->g_439.w, "p_1620->g_439.w", print_hash_value);
    transparent_crc(p_1620->g_456, "p_1620->g_456", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1620->g_468[i][j], "p_1620->g_468[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1620->g_528.f0, "p_1620->g_528.f0", print_hash_value);
    transparent_crc(p_1620->g_528.f1, "p_1620->g_528.f1", print_hash_value);
    transparent_crc(p_1620->g_528.f2, "p_1620->g_528.f2", print_hash_value);
    transparent_crc(p_1620->g_528.f3, "p_1620->g_528.f3", print_hash_value);
    transparent_crc(p_1620->g_528.f4, "p_1620->g_528.f4", print_hash_value);
    transparent_crc(p_1620->g_564, "p_1620->g_564", print_hash_value);
    transparent_crc(p_1620->g_574.f0, "p_1620->g_574.f0", print_hash_value);
    transparent_crc(p_1620->g_574.f1, "p_1620->g_574.f1", print_hash_value);
    transparent_crc(p_1620->g_574.f2, "p_1620->g_574.f2", print_hash_value);
    transparent_crc(p_1620->g_574.f3, "p_1620->g_574.f3", print_hash_value);
    transparent_crc(p_1620->g_574.f4, "p_1620->g_574.f4", print_hash_value);
    transparent_crc(p_1620->g_598.f0, "p_1620->g_598.f0", print_hash_value);
    transparent_crc(p_1620->g_598.f1, "p_1620->g_598.f1", print_hash_value);
    transparent_crc(p_1620->g_598.f2, "p_1620->g_598.f2", print_hash_value);
    transparent_crc(p_1620->g_598.f3, "p_1620->g_598.f3", print_hash_value);
    transparent_crc(p_1620->g_598.f4, "p_1620->g_598.f4", print_hash_value);
    transparent_crc(p_1620->g_601.f0, "p_1620->g_601.f0", print_hash_value);
    transparent_crc(p_1620->g_601.f1, "p_1620->g_601.f1", print_hash_value);
    transparent_crc(p_1620->g_601.f2, "p_1620->g_601.f2", print_hash_value);
    transparent_crc(p_1620->g_601.f3, "p_1620->g_601.f3", print_hash_value);
    transparent_crc(p_1620->g_601.f4, "p_1620->g_601.f4", print_hash_value);
    transparent_crc(p_1620->g_653.x, "p_1620->g_653.x", print_hash_value);
    transparent_crc(p_1620->g_653.y, "p_1620->g_653.y", print_hash_value);
    transparent_crc(p_1620->g_653.z, "p_1620->g_653.z", print_hash_value);
    transparent_crc(p_1620->g_653.w, "p_1620->g_653.w", print_hash_value);
    transparent_crc(p_1620->g_675.s0, "p_1620->g_675.s0", print_hash_value);
    transparent_crc(p_1620->g_675.s1, "p_1620->g_675.s1", print_hash_value);
    transparent_crc(p_1620->g_675.s2, "p_1620->g_675.s2", print_hash_value);
    transparent_crc(p_1620->g_675.s3, "p_1620->g_675.s3", print_hash_value);
    transparent_crc(p_1620->g_675.s4, "p_1620->g_675.s4", print_hash_value);
    transparent_crc(p_1620->g_675.s5, "p_1620->g_675.s5", print_hash_value);
    transparent_crc(p_1620->g_675.s6, "p_1620->g_675.s6", print_hash_value);
    transparent_crc(p_1620->g_675.s7, "p_1620->g_675.s7", print_hash_value);
    transparent_crc(p_1620->g_675.s8, "p_1620->g_675.s8", print_hash_value);
    transparent_crc(p_1620->g_675.s9, "p_1620->g_675.s9", print_hash_value);
    transparent_crc(p_1620->g_675.sa, "p_1620->g_675.sa", print_hash_value);
    transparent_crc(p_1620->g_675.sb, "p_1620->g_675.sb", print_hash_value);
    transparent_crc(p_1620->g_675.sc, "p_1620->g_675.sc", print_hash_value);
    transparent_crc(p_1620->g_675.sd, "p_1620->g_675.sd", print_hash_value);
    transparent_crc(p_1620->g_675.se, "p_1620->g_675.se", print_hash_value);
    transparent_crc(p_1620->g_675.sf, "p_1620->g_675.sf", print_hash_value);
    transparent_crc(p_1620->g_704, "p_1620->g_704", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1620->g_725[i], "p_1620->g_725[i]", print_hash_value);

    }
    transparent_crc(p_1620->g_742.s0, "p_1620->g_742.s0", print_hash_value);
    transparent_crc(p_1620->g_742.s1, "p_1620->g_742.s1", print_hash_value);
    transparent_crc(p_1620->g_742.s2, "p_1620->g_742.s2", print_hash_value);
    transparent_crc(p_1620->g_742.s3, "p_1620->g_742.s3", print_hash_value);
    transparent_crc(p_1620->g_742.s4, "p_1620->g_742.s4", print_hash_value);
    transparent_crc(p_1620->g_742.s5, "p_1620->g_742.s5", print_hash_value);
    transparent_crc(p_1620->g_742.s6, "p_1620->g_742.s6", print_hash_value);
    transparent_crc(p_1620->g_742.s7, "p_1620->g_742.s7", print_hash_value);
    transparent_crc(p_1620->g_743.s0, "p_1620->g_743.s0", print_hash_value);
    transparent_crc(p_1620->g_743.s1, "p_1620->g_743.s1", print_hash_value);
    transparent_crc(p_1620->g_743.s2, "p_1620->g_743.s2", print_hash_value);
    transparent_crc(p_1620->g_743.s3, "p_1620->g_743.s3", print_hash_value);
    transparent_crc(p_1620->g_743.s4, "p_1620->g_743.s4", print_hash_value);
    transparent_crc(p_1620->g_743.s5, "p_1620->g_743.s5", print_hash_value);
    transparent_crc(p_1620->g_743.s6, "p_1620->g_743.s6", print_hash_value);
    transparent_crc(p_1620->g_743.s7, "p_1620->g_743.s7", print_hash_value);
    transparent_crc(p_1620->g_791.s0, "p_1620->g_791.s0", print_hash_value);
    transparent_crc(p_1620->g_791.s1, "p_1620->g_791.s1", print_hash_value);
    transparent_crc(p_1620->g_791.s2, "p_1620->g_791.s2", print_hash_value);
    transparent_crc(p_1620->g_791.s3, "p_1620->g_791.s3", print_hash_value);
    transparent_crc(p_1620->g_791.s4, "p_1620->g_791.s4", print_hash_value);
    transparent_crc(p_1620->g_791.s5, "p_1620->g_791.s5", print_hash_value);
    transparent_crc(p_1620->g_791.s6, "p_1620->g_791.s6", print_hash_value);
    transparent_crc(p_1620->g_791.s7, "p_1620->g_791.s7", print_hash_value);
    transparent_crc(p_1620->g_791.s8, "p_1620->g_791.s8", print_hash_value);
    transparent_crc(p_1620->g_791.s9, "p_1620->g_791.s9", print_hash_value);
    transparent_crc(p_1620->g_791.sa, "p_1620->g_791.sa", print_hash_value);
    transparent_crc(p_1620->g_791.sb, "p_1620->g_791.sb", print_hash_value);
    transparent_crc(p_1620->g_791.sc, "p_1620->g_791.sc", print_hash_value);
    transparent_crc(p_1620->g_791.sd, "p_1620->g_791.sd", print_hash_value);
    transparent_crc(p_1620->g_791.se, "p_1620->g_791.se", print_hash_value);
    transparent_crc(p_1620->g_791.sf, "p_1620->g_791.sf", print_hash_value);
    transparent_crc(p_1620->g_792.f0, "p_1620->g_792.f0", print_hash_value);
    transparent_crc(p_1620->g_792.f1, "p_1620->g_792.f1", print_hash_value);
    transparent_crc(p_1620->g_792.f2, "p_1620->g_792.f2", print_hash_value);
    transparent_crc(p_1620->g_792.f3, "p_1620->g_792.f3", print_hash_value);
    transparent_crc(p_1620->g_792.f4, "p_1620->g_792.f4", print_hash_value);
    transparent_crc(p_1620->g_796.f0, "p_1620->g_796.f0", print_hash_value);
    transparent_crc(p_1620->g_796.f1, "p_1620->g_796.f1", print_hash_value);
    transparent_crc(p_1620->g_796.f2, "p_1620->g_796.f2", print_hash_value);
    transparent_crc(p_1620->g_796.f3, "p_1620->g_796.f3", print_hash_value);
    transparent_crc(p_1620->g_796.f4, "p_1620->g_796.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1620->g_825[i][j][k], "p_1620->g_825[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1620->g_848.x, "p_1620->g_848.x", print_hash_value);
    transparent_crc(p_1620->g_848.y, "p_1620->g_848.y", print_hash_value);
    transparent_crc(p_1620->g_849.s0, "p_1620->g_849.s0", print_hash_value);
    transparent_crc(p_1620->g_849.s1, "p_1620->g_849.s1", print_hash_value);
    transparent_crc(p_1620->g_849.s2, "p_1620->g_849.s2", print_hash_value);
    transparent_crc(p_1620->g_849.s3, "p_1620->g_849.s3", print_hash_value);
    transparent_crc(p_1620->g_849.s4, "p_1620->g_849.s4", print_hash_value);
    transparent_crc(p_1620->g_849.s5, "p_1620->g_849.s5", print_hash_value);
    transparent_crc(p_1620->g_849.s6, "p_1620->g_849.s6", print_hash_value);
    transparent_crc(p_1620->g_849.s7, "p_1620->g_849.s7", print_hash_value);
    transparent_crc(p_1620->g_850.s0, "p_1620->g_850.s0", print_hash_value);
    transparent_crc(p_1620->g_850.s1, "p_1620->g_850.s1", print_hash_value);
    transparent_crc(p_1620->g_850.s2, "p_1620->g_850.s2", print_hash_value);
    transparent_crc(p_1620->g_850.s3, "p_1620->g_850.s3", print_hash_value);
    transparent_crc(p_1620->g_850.s4, "p_1620->g_850.s4", print_hash_value);
    transparent_crc(p_1620->g_850.s5, "p_1620->g_850.s5", print_hash_value);
    transparent_crc(p_1620->g_850.s6, "p_1620->g_850.s6", print_hash_value);
    transparent_crc(p_1620->g_850.s7, "p_1620->g_850.s7", print_hash_value);
    transparent_crc(p_1620->g_853.f0, "p_1620->g_853.f0", print_hash_value);
    transparent_crc(p_1620->g_853.f1, "p_1620->g_853.f1", print_hash_value);
    transparent_crc(p_1620->g_853.f2, "p_1620->g_853.f2", print_hash_value);
    transparent_crc(p_1620->g_853.f3, "p_1620->g_853.f3", print_hash_value);
    transparent_crc(p_1620->g_853.f4, "p_1620->g_853.f4", print_hash_value);
    transparent_crc(p_1620->g_871.x, "p_1620->g_871.x", print_hash_value);
    transparent_crc(p_1620->g_871.y, "p_1620->g_871.y", print_hash_value);
    transparent_crc(p_1620->g_899.f0, "p_1620->g_899.f0", print_hash_value);
    transparent_crc(p_1620->g_899.f1, "p_1620->g_899.f1", print_hash_value);
    transparent_crc(p_1620->g_899.f2, "p_1620->g_899.f2", print_hash_value);
    transparent_crc(p_1620->g_899.f3, "p_1620->g_899.f3", print_hash_value);
    transparent_crc(p_1620->g_899.f4, "p_1620->g_899.f4", print_hash_value);
    transparent_crc(p_1620->g_906.x, "p_1620->g_906.x", print_hash_value);
    transparent_crc(p_1620->g_906.y, "p_1620->g_906.y", print_hash_value);
    transparent_crc(p_1620->g_906.z, "p_1620->g_906.z", print_hash_value);
    transparent_crc(p_1620->g_906.w, "p_1620->g_906.w", print_hash_value);
    transparent_crc(p_1620->g_953, "p_1620->g_953", print_hash_value);
    transparent_crc(p_1620->g_1023.s0, "p_1620->g_1023.s0", print_hash_value);
    transparent_crc(p_1620->g_1023.s1, "p_1620->g_1023.s1", print_hash_value);
    transparent_crc(p_1620->g_1023.s2, "p_1620->g_1023.s2", print_hash_value);
    transparent_crc(p_1620->g_1023.s3, "p_1620->g_1023.s3", print_hash_value);
    transparent_crc(p_1620->g_1023.s4, "p_1620->g_1023.s4", print_hash_value);
    transparent_crc(p_1620->g_1023.s5, "p_1620->g_1023.s5", print_hash_value);
    transparent_crc(p_1620->g_1023.s6, "p_1620->g_1023.s6", print_hash_value);
    transparent_crc(p_1620->g_1023.s7, "p_1620->g_1023.s7", print_hash_value);
    transparent_crc(p_1620->g_1023.s8, "p_1620->g_1023.s8", print_hash_value);
    transparent_crc(p_1620->g_1023.s9, "p_1620->g_1023.s9", print_hash_value);
    transparent_crc(p_1620->g_1023.sa, "p_1620->g_1023.sa", print_hash_value);
    transparent_crc(p_1620->g_1023.sb, "p_1620->g_1023.sb", print_hash_value);
    transparent_crc(p_1620->g_1023.sc, "p_1620->g_1023.sc", print_hash_value);
    transparent_crc(p_1620->g_1023.sd, "p_1620->g_1023.sd", print_hash_value);
    transparent_crc(p_1620->g_1023.se, "p_1620->g_1023.se", print_hash_value);
    transparent_crc(p_1620->g_1023.sf, "p_1620->g_1023.sf", print_hash_value);
    transparent_crc(p_1620->g_1073, "p_1620->g_1073", print_hash_value);
    transparent_crc(p_1620->g_1101.x, "p_1620->g_1101.x", print_hash_value);
    transparent_crc(p_1620->g_1101.y, "p_1620->g_1101.y", print_hash_value);
    transparent_crc(p_1620->g_1107.x, "p_1620->g_1107.x", print_hash_value);
    transparent_crc(p_1620->g_1107.y, "p_1620->g_1107.y", print_hash_value);
    transparent_crc(p_1620->g_1114.f0, "p_1620->g_1114.f0", print_hash_value);
    transparent_crc(p_1620->g_1122.x, "p_1620->g_1122.x", print_hash_value);
    transparent_crc(p_1620->g_1122.y, "p_1620->g_1122.y", print_hash_value);
    transparent_crc(p_1620->g_1122.z, "p_1620->g_1122.z", print_hash_value);
    transparent_crc(p_1620->g_1122.w, "p_1620->g_1122.w", print_hash_value);
    transparent_crc(p_1620->g_1149, "p_1620->g_1149", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1620->g_1154[i][j][k].f0, "p_1620->g_1154[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1620->g_1160.s0, "p_1620->g_1160.s0", print_hash_value);
    transparent_crc(p_1620->g_1160.s1, "p_1620->g_1160.s1", print_hash_value);
    transparent_crc(p_1620->g_1160.s2, "p_1620->g_1160.s2", print_hash_value);
    transparent_crc(p_1620->g_1160.s3, "p_1620->g_1160.s3", print_hash_value);
    transparent_crc(p_1620->g_1160.s4, "p_1620->g_1160.s4", print_hash_value);
    transparent_crc(p_1620->g_1160.s5, "p_1620->g_1160.s5", print_hash_value);
    transparent_crc(p_1620->g_1160.s6, "p_1620->g_1160.s6", print_hash_value);
    transparent_crc(p_1620->g_1160.s7, "p_1620->g_1160.s7", print_hash_value);
    transparent_crc(p_1620->g_1169.f0, "p_1620->g_1169.f0", print_hash_value);
    transparent_crc(p_1620->g_1173.s0, "p_1620->g_1173.s0", print_hash_value);
    transparent_crc(p_1620->g_1173.s1, "p_1620->g_1173.s1", print_hash_value);
    transparent_crc(p_1620->g_1173.s2, "p_1620->g_1173.s2", print_hash_value);
    transparent_crc(p_1620->g_1173.s3, "p_1620->g_1173.s3", print_hash_value);
    transparent_crc(p_1620->g_1173.s4, "p_1620->g_1173.s4", print_hash_value);
    transparent_crc(p_1620->g_1173.s5, "p_1620->g_1173.s5", print_hash_value);
    transparent_crc(p_1620->g_1173.s6, "p_1620->g_1173.s6", print_hash_value);
    transparent_crc(p_1620->g_1173.s7, "p_1620->g_1173.s7", print_hash_value);
    transparent_crc(p_1620->g_1226.x, "p_1620->g_1226.x", print_hash_value);
    transparent_crc(p_1620->g_1226.y, "p_1620->g_1226.y", print_hash_value);
    transparent_crc(p_1620->g_1226.z, "p_1620->g_1226.z", print_hash_value);
    transparent_crc(p_1620->g_1226.w, "p_1620->g_1226.w", print_hash_value);
    transparent_crc(p_1620->g_1259.s0, "p_1620->g_1259.s0", print_hash_value);
    transparent_crc(p_1620->g_1259.s1, "p_1620->g_1259.s1", print_hash_value);
    transparent_crc(p_1620->g_1259.s2, "p_1620->g_1259.s2", print_hash_value);
    transparent_crc(p_1620->g_1259.s3, "p_1620->g_1259.s3", print_hash_value);
    transparent_crc(p_1620->g_1259.s4, "p_1620->g_1259.s4", print_hash_value);
    transparent_crc(p_1620->g_1259.s5, "p_1620->g_1259.s5", print_hash_value);
    transparent_crc(p_1620->g_1259.s6, "p_1620->g_1259.s6", print_hash_value);
    transparent_crc(p_1620->g_1259.s7, "p_1620->g_1259.s7", print_hash_value);
    transparent_crc(p_1620->g_1260.s0, "p_1620->g_1260.s0", print_hash_value);
    transparent_crc(p_1620->g_1260.s1, "p_1620->g_1260.s1", print_hash_value);
    transparent_crc(p_1620->g_1260.s2, "p_1620->g_1260.s2", print_hash_value);
    transparent_crc(p_1620->g_1260.s3, "p_1620->g_1260.s3", print_hash_value);
    transparent_crc(p_1620->g_1260.s4, "p_1620->g_1260.s4", print_hash_value);
    transparent_crc(p_1620->g_1260.s5, "p_1620->g_1260.s5", print_hash_value);
    transparent_crc(p_1620->g_1260.s6, "p_1620->g_1260.s6", print_hash_value);
    transparent_crc(p_1620->g_1260.s7, "p_1620->g_1260.s7", print_hash_value);
    transparent_crc(p_1620->g_1260.s8, "p_1620->g_1260.s8", print_hash_value);
    transparent_crc(p_1620->g_1260.s9, "p_1620->g_1260.s9", print_hash_value);
    transparent_crc(p_1620->g_1260.sa, "p_1620->g_1260.sa", print_hash_value);
    transparent_crc(p_1620->g_1260.sb, "p_1620->g_1260.sb", print_hash_value);
    transparent_crc(p_1620->g_1260.sc, "p_1620->g_1260.sc", print_hash_value);
    transparent_crc(p_1620->g_1260.sd, "p_1620->g_1260.sd", print_hash_value);
    transparent_crc(p_1620->g_1260.se, "p_1620->g_1260.se", print_hash_value);
    transparent_crc(p_1620->g_1260.sf, "p_1620->g_1260.sf", print_hash_value);
    transparent_crc(p_1620->g_1269.x, "p_1620->g_1269.x", print_hash_value);
    transparent_crc(p_1620->g_1269.y, "p_1620->g_1269.y", print_hash_value);
    transparent_crc(p_1620->g_1272, "p_1620->g_1272", print_hash_value);
    transparent_crc(p_1620->g_1289.s0, "p_1620->g_1289.s0", print_hash_value);
    transparent_crc(p_1620->g_1289.s1, "p_1620->g_1289.s1", print_hash_value);
    transparent_crc(p_1620->g_1289.s2, "p_1620->g_1289.s2", print_hash_value);
    transparent_crc(p_1620->g_1289.s3, "p_1620->g_1289.s3", print_hash_value);
    transparent_crc(p_1620->g_1289.s4, "p_1620->g_1289.s4", print_hash_value);
    transparent_crc(p_1620->g_1289.s5, "p_1620->g_1289.s5", print_hash_value);
    transparent_crc(p_1620->g_1289.s6, "p_1620->g_1289.s6", print_hash_value);
    transparent_crc(p_1620->g_1289.s7, "p_1620->g_1289.s7", print_hash_value);
    transparent_crc(p_1620->g_1289.s8, "p_1620->g_1289.s8", print_hash_value);
    transparent_crc(p_1620->g_1289.s9, "p_1620->g_1289.s9", print_hash_value);
    transparent_crc(p_1620->g_1289.sa, "p_1620->g_1289.sa", print_hash_value);
    transparent_crc(p_1620->g_1289.sb, "p_1620->g_1289.sb", print_hash_value);
    transparent_crc(p_1620->g_1289.sc, "p_1620->g_1289.sc", print_hash_value);
    transparent_crc(p_1620->g_1289.sd, "p_1620->g_1289.sd", print_hash_value);
    transparent_crc(p_1620->g_1289.se, "p_1620->g_1289.se", print_hash_value);
    transparent_crc(p_1620->g_1289.sf, "p_1620->g_1289.sf", print_hash_value);
    transparent_crc(p_1620->g_1290.s0, "p_1620->g_1290.s0", print_hash_value);
    transparent_crc(p_1620->g_1290.s1, "p_1620->g_1290.s1", print_hash_value);
    transparent_crc(p_1620->g_1290.s2, "p_1620->g_1290.s2", print_hash_value);
    transparent_crc(p_1620->g_1290.s3, "p_1620->g_1290.s3", print_hash_value);
    transparent_crc(p_1620->g_1290.s4, "p_1620->g_1290.s4", print_hash_value);
    transparent_crc(p_1620->g_1290.s5, "p_1620->g_1290.s5", print_hash_value);
    transparent_crc(p_1620->g_1290.s6, "p_1620->g_1290.s6", print_hash_value);
    transparent_crc(p_1620->g_1290.s7, "p_1620->g_1290.s7", print_hash_value);
    transparent_crc(p_1620->g_1362.x, "p_1620->g_1362.x", print_hash_value);
    transparent_crc(p_1620->g_1362.y, "p_1620->g_1362.y", print_hash_value);
    transparent_crc(p_1620->g_1417.x, "p_1620->g_1417.x", print_hash_value);
    transparent_crc(p_1620->g_1417.y, "p_1620->g_1417.y", print_hash_value);
    transparent_crc(p_1620->g_1432, "p_1620->g_1432", print_hash_value);
    transparent_crc(p_1620->g_1449.x, "p_1620->g_1449.x", print_hash_value);
    transparent_crc(p_1620->g_1449.y, "p_1620->g_1449.y", print_hash_value);
    transparent_crc(p_1620->g_1449.z, "p_1620->g_1449.z", print_hash_value);
    transparent_crc(p_1620->g_1449.w, "p_1620->g_1449.w", print_hash_value);
    transparent_crc(p_1620->g_1457, "p_1620->g_1457", print_hash_value);
    transparent_crc(p_1620->g_1464.x, "p_1620->g_1464.x", print_hash_value);
    transparent_crc(p_1620->g_1464.y, "p_1620->g_1464.y", print_hash_value);
    transparent_crc(p_1620->g_1465.s0, "p_1620->g_1465.s0", print_hash_value);
    transparent_crc(p_1620->g_1465.s1, "p_1620->g_1465.s1", print_hash_value);
    transparent_crc(p_1620->g_1465.s2, "p_1620->g_1465.s2", print_hash_value);
    transparent_crc(p_1620->g_1465.s3, "p_1620->g_1465.s3", print_hash_value);
    transparent_crc(p_1620->g_1465.s4, "p_1620->g_1465.s4", print_hash_value);
    transparent_crc(p_1620->g_1465.s5, "p_1620->g_1465.s5", print_hash_value);
    transparent_crc(p_1620->g_1465.s6, "p_1620->g_1465.s6", print_hash_value);
    transparent_crc(p_1620->g_1465.s7, "p_1620->g_1465.s7", print_hash_value);
    transparent_crc(p_1620->g_1525.x, "p_1620->g_1525.x", print_hash_value);
    transparent_crc(p_1620->g_1525.y, "p_1620->g_1525.y", print_hash_value);
    transparent_crc(p_1620->g_1525.z, "p_1620->g_1525.z", print_hash_value);
    transparent_crc(p_1620->g_1525.w, "p_1620->g_1525.w", print_hash_value);
    transparent_crc(p_1620->g_1541.f0, "p_1620->g_1541.f0", print_hash_value);
    transparent_crc(p_1620->g_1569, "p_1620->g_1569", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1620->g_1613[i][j].f0, "p_1620->g_1613[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1620->g_1615[i].f0, "p_1620->g_1615[i].f0", print_hash_value);

    }
    transparent_crc(p_1620->v_collective, "p_1620->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 2; i++)
            transparent_crc(p_1620->g_special_values[i + 2 * get_linear_group_id()], "p_1620->g_special_values[i + 2 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1620->l_comm_values[get_linear_local_id()], "p_1620->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1620->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_1620->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
