// --atomics 56 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 33,18,10 -l 1,9,10
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

__constant uint32_t permutations[10][90] = {
{56,79,87,73,37,35,27,32,3,18,28,17,15,11,6,46,43,2,19,23,36,82,5,24,12,4,71,33,72,85,88,74,53,84,60,20,75,25,51,67,65,10,48,58,68,34,42,1,57,16,80,64,55,0,76,61,69,9,40,89,54,29,70,44,7,50,62,8,47,66,22,45,78,83,63,77,52,13,39,21,81,14,38,49,31,30,26,86,41,59}, // permutation 0
{40,18,53,67,54,26,73,57,81,50,87,19,16,68,29,85,5,22,88,0,45,10,80,4,79,86,84,9,63,43,46,39,60,2,28,64,36,44,31,56,62,33,42,7,70,89,83,14,13,65,27,3,37,23,52,38,25,17,11,75,30,35,15,21,61,66,12,49,77,76,59,47,74,78,34,8,20,48,69,82,41,58,55,32,24,1,6,71,72,51}, // permutation 1
{43,28,37,78,6,14,32,79,60,54,20,77,25,4,12,81,42,2,70,15,3,44,36,22,33,68,63,50,67,45,10,46,13,69,56,19,86,82,76,40,48,24,8,64,0,72,16,1,35,57,21,31,89,88,65,87,75,41,47,51,58,61,71,53,52,26,7,23,73,30,5,55,9,38,83,39,74,66,85,49,80,11,18,29,84,62,17,59,27,34}, // permutation 2
{75,39,2,89,20,0,55,83,11,61,21,53,28,36,88,64,10,32,42,84,52,85,79,7,69,77,40,50,82,33,56,31,49,71,1,29,15,48,41,14,35,57,67,72,8,68,81,86,60,47,16,34,13,4,19,26,65,54,25,37,80,66,63,45,9,46,58,12,76,38,27,74,51,59,3,43,78,70,24,62,17,44,6,18,22,30,73,5,23,87}, // permutation 3
{23,9,34,61,5,59,35,84,63,24,74,3,72,21,80,52,77,57,83,26,56,76,27,32,75,45,82,86,7,44,41,8,17,2,48,25,20,85,29,31,14,73,55,39,0,64,28,50,51,36,49,11,54,70,22,68,81,47,38,40,69,37,43,4,30,53,60,58,46,6,13,1,19,87,42,79,78,33,18,89,71,15,67,12,16,66,62,65,88,10}, // permutation 4
{79,74,65,27,51,19,45,3,31,87,34,32,11,18,35,17,47,37,62,82,42,30,76,83,26,6,22,81,13,89,53,80,57,5,50,14,20,41,85,43,67,1,8,61,23,75,59,63,66,33,55,7,48,84,29,71,4,60,73,68,16,77,36,2,86,28,10,44,70,54,69,9,46,15,49,64,72,12,58,88,24,40,52,21,25,38,56,0,78,39}, // permutation 5
{41,75,45,58,16,61,20,10,56,18,62,52,9,71,66,11,1,63,28,3,48,6,53,42,60,43,85,22,21,14,31,39,26,54,25,51,29,88,87,44,34,24,57,12,72,40,64,7,89,47,73,49,5,33,82,68,81,37,59,79,23,69,65,32,83,70,76,74,77,38,67,86,78,84,2,35,17,13,0,19,36,27,80,4,50,8,30,15,46,55}, // permutation 6
{10,82,28,18,76,87,71,74,45,83,56,6,77,62,33,88,86,15,23,89,26,41,2,30,13,0,58,72,68,19,25,50,51,73,42,1,38,14,53,46,27,4,81,9,44,31,79,78,55,60,40,69,59,3,80,17,70,36,22,52,57,20,63,75,65,37,8,61,24,35,34,54,11,12,16,84,47,64,29,39,49,7,85,21,67,43,32,66,48,5}, // permutation 7
{6,53,25,86,9,0,30,72,84,65,66,11,54,74,52,4,77,76,34,64,46,3,16,70,61,89,56,71,87,7,17,23,49,12,38,10,63,22,2,45,67,19,5,48,47,37,40,26,21,85,33,8,60,36,39,51,69,44,20,27,41,78,68,80,1,32,43,18,75,62,31,82,50,14,24,88,73,28,79,58,81,59,42,57,13,55,15,83,29,35}, // permutation 8
{2,73,62,20,85,43,44,12,39,63,70,55,80,33,0,40,17,89,87,60,7,79,11,88,49,71,56,34,46,45,64,15,50,37,24,14,84,78,16,74,21,68,42,54,41,67,23,58,26,22,28,52,86,27,81,18,47,10,35,82,53,8,83,77,72,66,75,31,5,1,57,69,29,36,65,3,4,19,48,9,59,51,38,76,13,61,6,32,30,25} // permutation 9
};

// Seed: 3660955817

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
};

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int64_t  f3;
   int32_t  f4;
   volatile uint32_t  f5;
   volatile uint64_t  f6;
   volatile struct S0  f7;
};

struct S2 {
    volatile int32_t g_2[7];
    int32_t g_3;
    VECTOR(int32_t, 4) g_6;
    volatile VECTOR(uint32_t, 4) g_41;
    volatile VECTOR(uint32_t, 16) g_42;
    volatile VECTOR(uint16_t, 2) g_43;
    int8_t g_62;
    uint32_t g_63;
    int32_t g_77[10][7][3];
    int32_t g_79[8];
    VECTOR(int16_t, 8) g_80;
    int16_t g_100;
    uint64_t g_106;
    VECTOR(int8_t, 4) g_115;
    VECTOR(int8_t, 2) g_116;
    VECTOR(uint32_t, 4) g_119;
    VECTOR(int16_t, 8) g_130;
    volatile int32_t **g_131;
    volatile struct S1 g_147;
    uint32_t g_220;
    struct S0 g_260;
    uint32_t *g_275;
    uint8_t g_281;
    VECTOR(uint32_t, 8) g_295;
    struct S0 * volatile g_300;
    struct S1 g_310;
    int32_t * volatile g_323;
    volatile int64_t g_329;
    volatile int64_t *g_328;
    uint64_t *g_334;
    struct S0 g_337;
    volatile VECTOR(int8_t, 8) g_344;
    VECTOR(uint32_t, 16) g_347;
    VECTOR(int64_t, 2) g_348;
    uint8_t g_373;
    int32_t *g_381;
    int32_t ** volatile g_380;
    uint8_t * volatile g_382[5];
    volatile VECTOR(int32_t, 16) g_388;
    struct S0 * volatile g_404[2];
    struct S0 * volatile g_405[3];
    int32_t * volatile g_407;
    struct S0 * volatile g_408[1][8];
    struct S0 * volatile g_409[3][8];
    VECTOR(uint32_t, 4) g_410;
    VECTOR(uint8_t, 4) g_415;
    VECTOR(int64_t, 16) g_443;
    volatile uint64_t g_458;
    struct S0 * volatile g_475;
    volatile VECTOR(int16_t, 4) g_497;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_509);
int8_t  func_13(int32_t * p_14, int32_t  p_15, int32_t * p_16, int32_t  p_17, struct S2 * p_509);
int32_t * func_18(int8_t  p_19, int32_t * p_20, uint32_t  p_21, int32_t * p_22, int32_t  p_23, struct S2 * p_509);
int64_t  func_25(int32_t * p_26, struct S0  p_27, int32_t * p_28, struct S2 * p_509);
int32_t * func_29(int16_t  p_30, int32_t  p_31, int32_t  p_32, struct S2 * p_509);
uint8_t  func_35(int32_t  p_36, int32_t * p_37, int32_t * p_38, uint64_t  p_39, int32_t  p_40, struct S2 * p_509);
uint8_t  func_45(uint32_t  p_46, uint64_t  p_47, int32_t * p_48, int32_t * p_49, struct S2 * p_509);
int32_t * func_50(int32_t * p_51, uint64_t  p_52, struct S2 * p_509);
int8_t  func_57(int64_t  p_58, struct S2 * p_509);
int64_t  func_59(uint32_t  p_60, struct S2 * p_509);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_509->g_3 p_509->g_130 p_509->l_comm_values p_509->g_6 p_509->g_63 p_509->g_77 p_509->g_79 p_509->g_comm_values p_509->g_100 p_509->g_80 p_509->g_106 p_509->g_131 p_509->g_116 p_509->g_147.f5 p_509->g_119 p_509->g_260 p_509->g_115 p_509->g_275 p_509->g_300 p_509->g_310 p_509->g_42 p_509->g_328 p_509->g_334 p_509->g_337 p_509->g_62 p_509->g_380 p_509->g_382 p_509->g_381 p_509->g_347 p_509->g_407 p_509->g_295 p_509->g_220 p_509->g_410 p_509->g_415 p_509->g_443 p_509->g_147.f0 p_509->g_329 p_509->g_147.f3 p_509->g_458 p_509->g_2 p_509->g_41 p_509->g_475 p_509->g_497
 * writes: p_509->g_3 p_509->g_63 p_509->g_62 p_509->g_6 p_509->g_77 p_509->g_79 p_509->g_100 p_509->g_106 p_509->g_119 p_509->g_260 p_509->g_comm_values p_509->g_2 p_509->g_310.f2 p_509->g_281 p_509->g_310.f4 p_509->g_381 p_509->g_410 p_509->g_458 p_509->g_130
 */
uint32_t  func_1(struct S2 * p_509)
{ /* block id: 4 */
    int32_t l_7 = (-3L);
    int32_t l_298 = 0x785BB232L;
    int32_t *l_358[6][1][4] = {{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}},{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}},{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}},{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}},{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}},{{&p_509->g_3,(void*)0,&p_509->g_3,&p_509->g_3}}};
    int64_t *l_426 = (void*)0;
    int32_t l_447 = 0L;
    int16_t l_453 = 0x1CBDL;
    int64_t l_456[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int64_t l_457[4] = {0L,0L,0L,0L};
    int32_t *l_471 = &p_509->g_310.f4;
    int32_t l_505 = 4L;
    uint16_t l_506 = 1UL;
    int i, j, k;
    for (p_509->g_3 = 20; (p_509->g_3 == 24); p_509->g_3 = safe_add_func_uint64_t_u_u(p_509->g_3, 3))
    { /* block id: 7 */
        uint32_t l_8 = 0x393E75CBL;
        int32_t l_221[4][5][2];
        int16_t l_455 = (-1L);
        int16_t *l_493 = &p_509->g_100;
        VECTOR(int16_t, 4) l_494 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x27E1L), 0x27E1L);
        int16_t *l_495 = (void*)0;
        int16_t *l_496[6][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_453}}};
        uint64_t l_501 = 18446744073709551614UL;
        int16_t l_504 = 8L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 2; k++)
                    l_221[i][j][k] = 0x45BFEF92L;
            }
        }
        if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_509->g_6.zxzz)).wxxxxyyywyxxywwz)).seea5))))).wxzyzxzw)).s0)
        { /* block id: 8 */
            int32_t *l_11 = (void*)0;
            int32_t *l_12[2];
            int32_t l_403[4] = {0x1D41EA5FL,0x1D41EA5FL,0x1D41EA5FL,0x1D41EA5FL};
            VECTOR(int32_t, 2) l_467 = (VECTOR(int32_t, 2))((-1L), 1L);
            int i;
            for (i = 0; i < 2; i++)
                l_12[i] = (void*)0;
            l_8++;
            if ((l_7 = 0L))
            { /* block id: 11 */
                int32_t *l_24 = (void*)0;
                VECTOR(uint16_t, 8) l_44 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 1UL), 1UL), 1UL, 65534UL, 1UL);
                uint32_t *l_219[7][8][4] = {{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}},{{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220},{&p_509->g_220,&p_509->g_220,&p_509->g_220,&p_509->g_220}}};
                int32_t *l_222 = &l_221[2][4][0];
                int32_t **l_223 = &l_12[0];
                uint64_t l_297 = 0xB22E9E734D5B6373L;
                int32_t l_451 = (-8L);
                int32_t l_452 = 0x4230E89EL;
                int32_t l_454[7][9] = {{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL},{0x33D2529EL,1L,0x1B196DC1L,0x3189A277L,(-10L),0x3189A277L,0x1B196DC1L,1L,0x33D2529EL}};
                int32_t l_463 = (-4L);
                int i, j, k;
                p_509->g_410.w &= (((func_13(func_18((l_24 != ((func_25(func_29((((safe_add_func_uint32_t_u_u((func_35(l_8, ((*l_223) = ((l_221[1][4][0] = ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_509->g_41.xwzy)), 0xC9D6C840L, 4294967295UL, 0x7DBF1295L, 0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_509->g_42.s5b506946)).hi)), 4294967295UL, ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(0x4896L, 6UL)).xxyyxyyx, ((VECTOR(uint16_t, 2))(0xED46L, 0UL)).xyyyxxxy, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(p_509->g_43.yy)).yyxyxxyxyyyyxxxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xAE22L, 0x1501L, 0UL, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(0x499EL, 0xC534L, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_44.s10)), 0x907FL, 0UL)).zwwzxwywxyxzxxyx)).s6b)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(0x0936L, 0x4B4FL, (func_45(l_8, p_509->g_2[6], &l_7, func_50(l_24, p_509->g_6.y, p_509), p_509) | p_509->g_116.x), 0x770FL, ((VECTOR(uint16_t, 4))(65535UL)))), ((VECTOR(uint16_t, 8))(65535UL))))), ((VECTOR(uint16_t, 8))(65531UL))))).s4604073665336570)).sc3))), 65535UL, 65535UL, 1UL, p_509->g_147.f0, 1UL, 0xFFD6L, p_509->g_6.y, 0xED44L, l_7, ((VECTOR(uint16_t, 2))(0x6A49L)), 0xC116L)).sa2ca, ((VECTOR(uint16_t, 4))(65529UL))))).wwxzzzxw)).s4351644366046267))))).s0a)).yyyx, (uint16_t)4UL, (uint16_t)l_8))).y, ((VECTOR(uint16_t, 4))(0x1B0BL)))))), l_8, p_509->g_42.sa, p_509->g_80.s2, 1UL, ((VECTOR(uint16_t, 4))(65531UL))))))).even))), ((VECTOR(uint16_t, 8))(65528UL)))))))).s45, ((VECTOR(uint32_t, 2))(0xEB6B3D84L)), ((VECTOR(uint32_t, 2))(0x0CE5974AL))))), 0x6EADA6B6L)).s0cb6, ((VECTOR(uint32_t, 4))(1UL))))).z) , l_222)), &p_509->g_3, l_8, p_509->g_130.s7, p_509) ^ p_509->g_80.s3), 1UL)) || 0x2BFE7EAFL) , 0x4224L), l_297, l_298, p_509), p_509->g_337, &l_7, p_509) == (-7L)) , l_358[3][0][1])), &l_7, p_509->g_116.x, &p_509->g_3, p_509->g_310.f1, p_509), p_509->g_347.sc, l_11, l_403[0], p_509) != p_509->g_295.s1) == p_509->g_80.s5) >= p_509->g_220);
                for (l_8 = 0; (l_8 >= 47); l_8 = safe_add_func_int64_t_s_s(l_8, 3))
                { /* block id: 145 */
                    VECTOR(int32_t, 2) l_416 = (VECTOR(int32_t, 2))(0x54DDED7CL, 0L);
                    uint64_t l_420 = 18446744073709551611UL;
                    VECTOR(uint16_t, 16) l_439 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), 65533UL), 65533UL, 0UL, 65533UL, (VECTOR(uint16_t, 2))(0UL, 65533UL), (VECTOR(uint16_t, 2))(0UL, 65533UL), 0UL, 65533UL, 0UL, 65533UL);
                    uint32_t l_450 = 0UL;
                    int i;
                    (*l_223) = (*p_509->g_380);
                    if ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_509->g_415.xwwy)).w, l_416.y)))
                    { /* block id: 147 */
                        if (l_8)
                            break;
                    }
                    else
                    { /* block id: 149 */
                        uint8_t *l_419[1][3];
                        int32_t l_437[5][1] = {{1L},{1L},{1L},{1L},{1L}};
                        int16_t *l_438 = &p_509->g_100;
                        int16_t *l_446[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_419[i][j] = &p_509->g_373;
                        }
                        (*l_222) = (((++l_420) < ((safe_unary_minus_func_uint32_t_u((0x04L == (l_426 != (void*)0)))) < 0UL)) > (((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((*l_438) = l_437[0][0]), ((VECTOR(uint16_t, 4))(l_439.sdbdb)).z)) || (safe_mul_func_int8_t_s_s(l_439.s4, (safe_unary_minus_func_uint64_t_u(8UL))))), 1)), (((VECTOR(int64_t, 16))(p_509->g_443.s98352340340dccb8)).sc , (65534UL != ((safe_add_func_int64_t_s_s((((l_416.y = (&p_509->g_281 == &p_509->g_373)) | p_509->g_147.f0) ^ p_509->g_410.z), 0x4F9F646E29CDC6C5L)) || (*p_509->g_328)))))) && p_509->g_79[3]), 9)) | l_447), FAKE_DIVERGE(p_509->global_0_offset, get_global_id(0), 10))) >= 0UL) <= p_509->g_410.x));
                    }
                    for (p_509->g_310.f4 = 0; (p_509->g_310.f4 != (-18)); --p_509->g_310.f4)
                    { /* block id: 157 */
                        (*l_222) &= l_450;
                        return p_509->g_147.f3;
                    }
                }
                ++p_509->g_458;
                for (l_8 = 18; (l_8 == 43); ++l_8)
                { /* block id: 165 */
                    int8_t l_464 = 0L;
                    if (l_463)
                        break;
                    (*p_509->g_407) = ((*l_222) = ((l_464 <= 4294967289UL) <= ((0L != (-9L)) , (safe_div_func_uint64_t_u_u(l_464, ((((VECTOR(int32_t, 4))(l_467.xxxy)).w , p_509->g_2[1]) & 8UL))))));
                }
            }
            else
            { /* block id: 170 */
                uint64_t **l_470[2];
                int32_t *l_473 = &l_298;
                int32_t **l_472 = &l_473;
                int32_t l_474 = 2L;
                int i;
                for (i = 0; i < 2; i++)
                    l_470[i] = &p_509->g_334;
                l_474 = (p_509->g_41.y <= ((l_470[1] = &p_509->g_334) != ((l_471 == ((*l_472) = p_509->g_381)) , &p_509->g_334)));
                (*p_509->g_475) = (*p_509->g_300);
            }
        }
        else
        { /* block id: 176 */
            int32_t l_476 = 0x19A6D7AEL;
            int32_t l_477 = 0x16BC149DL;
            int32_t l_478 = 0x28C47F75L;
            int32_t l_479 = 0x77FEBE89L;
            int32_t l_480 = 0L;
            int32_t l_481 = 5L;
            int32_t l_482 = 0x0CA76E61L;
            int32_t l_483 = 1L;
            int32_t l_484 = 0x518B4EF0L;
            int32_t l_485 = 0x76648ABCL;
            int32_t l_486 = (-4L);
            int32_t l_487 = 0x365F48F1L;
            int32_t l_488 = 0x24013F1FL;
            int32_t l_489 = 3L;
            uint16_t l_490 = 1UL;
            ++l_490;
            if ((*p_509->g_407))
                continue;
        }
        l_221[1][4][0] = ((l_455 != ((((p_509->g_130.s5 = ((VECTOR(int16_t, 8))(((*l_493) = (-5L)), ((VECTOR(int16_t, 4))(0x7770L, ((VECTOR(int16_t, 2))(l_494.wy)), 0x5BF7L)), 0x6856L, 0L, (-1L))).s5) ^ (p_509->g_310.f2 == ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(p_509->g_497.zzzw)).wyzyzwxw, (int16_t)(safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(((+0xE7F7B2FDL) , l_494.z))) , (*p_509->g_407)), l_501)), (int16_t)((safe_add_func_uint64_t_u_u(0x2F9BE310FB81C839L, l_504)) , p_509->g_2[1])))))).s6)) == l_505) , (*p_509->g_407))) , (*p_509->g_407));
    }
    --l_506;
    p_509->g_77[9][2][1] ^= (*p_509->g_407);
    return p_509->g_41.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_300 p_509->g_260 p_509->g_407
 * writes: p_509->g_79
 */
int8_t  func_13(int32_t * p_14, int32_t  p_15, int32_t * p_16, int32_t  p_17, struct S2 * p_509)
{ /* block id: 137 */
    struct S0 l_406[8] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
    int i;
    l_406[2] = (*p_509->g_300);
    (*p_509->g_407) = l_406[2].f0;
    l_406[0] = l_406[2];
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_6 p_509->g_80 p_509->g_62 p_509->g_310.f4 p_509->g_3 p_509->g_300 p_509->g_310 p_509->g_106 p_509->g_comm_values p_509->g_42 p_509->g_328 p_509->g_79 p_509->g_334 p_509->g_380 p_509->g_382 p_509->g_388 p_509->g_381
 * writes: p_509->g_281 p_509->g_62 p_509->g_310.f4 p_509->g_260 p_509->g_comm_values p_509->g_79 p_509->g_2 p_509->g_381 p_509->g_106
 */
int32_t * func_18(int8_t  p_19, int32_t * p_20, uint32_t  p_21, int32_t * p_22, int32_t  p_23, struct S2 * p_509)
{ /* block id: 118 */
    uint8_t l_361[9][2][8] = {{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}},{{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL},{0x05L,0x39L,0xADL,0x87L,255UL,246UL,0x05L,253UL}}};
    VECTOR(int8_t, 2) l_364 = (VECTOR(int8_t, 2))(0x24L, 0x0BL);
    VECTOR(int8_t, 8) l_365 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 9L), 9L), 9L, 4L, 9L);
    int64_t *l_369 = (void*)0;
    int32_t l_370 = 4L;
    int32_t l_374 = (-3L);
    int32_t **l_386 = &p_509->g_381;
    int32_t ***l_385[1];
    int32_t **l_387 = &p_509->g_381;
    VECTOR(int32_t, 4) l_389 = (VECTOR(int32_t, 4))(0x583BF997L, (VECTOR(int32_t, 2))(0x583BF997L, 0x53C9E120L), 0x53C9E120L);
    VECTOR(uint32_t, 16) l_394 = (VECTOR(uint32_t, 16))(0x4C849F60L, (VECTOR(uint32_t, 4))(0x4C849F60L, (VECTOR(uint32_t, 2))(0x4C849F60L, 0xB135823CL), 0xB135823CL), 0xB135823CL, 0x4C849F60L, 0xB135823CL, (VECTOR(uint32_t, 2))(0x4C849F60L, 0xB135823CL), (VECTOR(uint32_t, 2))(0x4C849F60L, 0xB135823CL), 0x4C849F60L, 0xB135823CL, 0x4C849F60L, 0xB135823CL);
    uint64_t *l_395 = &p_509->g_106;
    uint16_t *l_402 = &p_509->g_260.f0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_385[i] = &l_386;
    for (p_21 = 24; (p_21 > 56); ++p_21)
    { /* block id: 121 */
        int64_t **l_366 = (void*)0;
        int64_t *l_368 = (void*)0;
        int64_t **l_367[8][8] = {{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368},{&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368,&l_368}};
        uint8_t *l_371 = &p_509->g_281;
        uint8_t *l_372[6] = {&p_509->g_373,&p_509->g_373,&p_509->g_373,&p_509->g_373,&p_509->g_373,&p_509->g_373};
        int8_t *l_375 = (void*)0;
        int8_t *l_376 = (void*)0;
        int8_t *l_377 = (void*)0;
        int8_t *l_378 = &p_509->g_62;
        int32_t *l_379 = &p_509->g_310.f4;
        int i, j;
        (*p_509->g_380) = func_29(l_361[3][1][3], ((*l_379) |= (p_19 < ((*l_378) ^= (p_509->g_6.x | ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(l_364.yy)).xyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_365.s4673)).wwxwxxwwwwxywwxw)))).s3838))), (int8_t)p_509->g_115.x, (int8_t)((p_23 , (void*)0) == (l_369 = (void*)0))))).w, 3)) <= (((((VECTOR(uint8_t, 4))(0UL, 5UL, 0UL, 0UL)).z >= l_370) >= (l_374 = ((*l_371) = ((((p_21 > p_509->g_80.s5) | 0xADCBL) == 1UL) & 0x05L)))) > l_365.s3)))))), (*p_22), p_509);
    }
    (*p_20) = (GROUP_DIVERGE(1, 1) & ((l_364.x >= (p_509->g_382[1] != &p_509->g_373)) | (l_370 || (&p_22 != (l_387 = (void*)0)))));
    p_509->g_2[4] = ((VECTOR(int32_t, 8))(1L, ((*p_20) = 1L), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(0x081A318FL, 0x16EFB332L, 0L, 0x7057A4D6L)).odd, ((VECTOR(int32_t, 16))((-4L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x40050979L, 0x223DF25CL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((p_21 != p_21), ((VECTOR(int32_t, 4))(((*p_20) = p_509->g_3), 0x483D996DL, 0x6AB972FCL, 0x78C0F115L)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_509->g_388.s4588)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_389.ywyx)), (safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_509->group_1_offset, get_group_id(1), 10), (safe_mul_func_int16_t_s_s(p_23, (((VECTOR(uint32_t, 8))(l_394.s93c173c4)).s1 | (((*l_395)--) >= p_23)))))), (safe_add_func_uint16_t_u_u(((*l_402) = (safe_add_func_int16_t_s_s(0x7A38L, (p_21 != p_21)))), 1L)), ((VECTOR(int32_t, 8))(0L)), 0L, 0L)).s816b)))).even))), ((VECTOR(int32_t, 4))(0x3E997ED4L)), 0x2ED8C30EL, 0x062D6957L, 1L)).s20)), ((VECTOR(int32_t, 4))(0x5C47B6BBL)), (-3L), (*p_20), 0x301ED710L, 0x4DAE66B0L, ((VECTOR(int32_t, 2))(0x46184438L)), (-6L), (-8L))).odd)).odd)).w, ((VECTOR(int32_t, 2))(0x7354A249L)), ((VECTOR(int32_t, 2))(0L)), (*p_20), 0x7F172123L, 0x3D2942C8L, ((VECTOR(int32_t, 4))(7L)), 0x06A6B922L, 0x78FC93E8L, 0L)).se3, ((VECTOR(int32_t, 2))(0x51DC388DL))))), ((VECTOR(int32_t, 4))((-2L))))).s2;
    return (*p_509->g_380);
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_344 p_509->g_347 p_509->g_348 p_509->g_80 p_509->g_6 p_509->g_63 p_509->l_comm_values p_509->g_77 p_509->g_79 p_509->g_comm_values p_509->g_100 p_509->g_106 p_509->g_131 p_509->g_130 p_509->g_116 p_509->g_295 p_509->g_310.f1 p_509->g_281 p_509->g_115 p_509->g_310.f2
 * writes: p_509->g_63 p_509->g_62 p_509->g_6 p_509->g_77 p_509->g_79 p_509->g_100 p_509->g_106 p_509->g_310.f2
 */
int64_t  func_25(int32_t * p_26, struct S0  p_27, int32_t * p_28, struct S2 * p_509)
{ /* block id: 115 */
    VECTOR(int8_t, 4) l_345 = (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x79L), 0x79L);
    VECTOR(int32_t, 8) l_346 = (VECTOR(int32_t, 8))(0x0E60D8FBL, (VECTOR(int32_t, 4))(0x0E60D8FBL, (VECTOR(int32_t, 2))(0x0E60D8FBL, (-1L)), (-1L)), (-1L), 0x0E60D8FBL, (-1L));
    VECTOR(uint16_t, 8) l_353 = (VECTOR(uint16_t, 8))(0xB8E0L, (VECTOR(uint16_t, 4))(0xB8E0L, (VECTOR(uint16_t, 2))(0xB8E0L, 65535UL), 65535UL), 65535UL, 0xB8E0L, 65535UL);
    int32_t *l_354 = &p_509->g_77[1][2][1];
    int32_t l_355[3];
    int32_t *l_356 = (void*)0;
    int32_t *l_357 = &p_509->g_310.f2;
    int i;
    for (i = 0; i < 3; i++)
        l_355[i] = 0x0B5D9533L;
    (*l_357) &= ((VECTOR(int32_t, 8))((((((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((VECTOR(int8_t, 16))(0x72L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_509->g_344.s1033754573645770)).scc)).xyxyxyxy)), (((void*)0 != &p_509->g_62) , 0x12L), (&p_509->g_329 == &p_509->g_329), ((VECTOR(int8_t, 4))(l_345.wwwx)), (-5L))).sc & (((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(l_346.s77)).xyyy, ((VECTOR(uint32_t, 8))(p_509->g_347.s38c0d7d3)).hi))).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_509->g_348.xyyyxyyx)))).s5775273426677547)).lo)).s36))), 18446744073709551615UL, 18446744073709551608UL)).wwzwzwzzwwyzxywz, (uint64_t)(safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_345.y, p_27.f0)), ((VECTOR(uint16_t, 8))(l_353.s60567554)).s7))))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x8FBFBF30F0EEB78FL, 0xB96D62F4968207F7L, 18446744073709551611UL, ((((~p_27.f0) , func_50(func_50(l_354, p_509->g_80.s0, p_509), p_509->g_295.s2, p_509)) != (void*)0) , p_509->g_310.f1), 18446744073709551615UL, 18446744073709551613UL, 18446744073709551612UL, 18446744073709551609UL)))).s00)).yxxyyyxx)).s5205603774771473, ((VECTOR(uint64_t, 16))(18446744073709551615UL))))).se , (*l_354))), 0x7B23L)), p_509->g_281)), 5)) , (*l_354)) & p_509->g_115.y) && (*l_354)) , (*p_28)), (-7L), (*l_354), ((VECTOR(int32_t, 2))((-1L))), l_355[2], 0L, 0x3516B679L)).s7;
    return p_27.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_300 p_509->g_310 p_509->g_106 p_509->g_80 p_509->g_comm_values p_509->g_42 p_509->g_328 p_509->g_79 p_509->g_334
 * writes: p_509->g_260 p_509->g_comm_values p_509->g_79 p_509->g_2
 */
int32_t * func_29(int16_t  p_30, int32_t  p_31, int32_t  p_32, struct S2 * p_509)
{ /* block id: 106 */
    struct S0 l_299 = {0xA9CAL};
    uint64_t *l_301 = (void*)0;
    uint32_t l_306 = 0x15F514BAL;
    VECTOR(int64_t, 4) l_309 = (VECTOR(int64_t, 4))(0x58613EF298871605L, (VECTOR(int64_t, 2))(0x58613EF298871605L, (-1L)), (-1L));
    int64_t *l_311 = (void*)0;
    int64_t *l_312 = (void*)0;
    int64_t *l_313 = (void*)0;
    int64_t *l_314 = (void*)0;
    int64_t *l_315 = (void*)0;
    int64_t *l_316 = (void*)0;
    int64_t *l_317 = (void*)0;
    int64_t *l_318 = (void*)0;
    int64_t *l_319[10][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
    int32_t *l_320 = (void*)0;
    int32_t *l_321 = (void*)0;
    int32_t *l_322 = &p_509->g_79[7];
    VECTOR(int16_t, 2) l_332 = (VECTOR(int16_t, 2))(0x010CL, 1L);
    VECTOR(uint32_t, 2) l_333 = (VECTOR(uint32_t, 2))(0UL, 0x13F853FAL);
    uint64_t **l_335 = &l_301;
    uint8_t *l_336[6] = {&p_509->g_281,&p_509->g_281,&p_509->g_281,&p_509->g_281,&p_509->g_281,&p_509->g_281};
    int i, j, k;
    (*p_509->g_300) = l_299;
    p_509->g_2[1] = ((*l_322) = ((((((VECTOR(int64_t, 4))(1L, 0x6508942A8330122CL, 0x24AB9EEB877840F4L, 0x6A2B00364C4400A9L)).z , 0x2ECB3F208D0039ACL) | 18446744073709551611UL) && (&p_509->g_106 != (l_301 = &p_509->g_106))) & (p_509->g_comm_values[p_509->tid] ^= (p_31 == (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(l_306, (safe_rshift_func_uint8_t_u_u((((((VECTOR(int64_t, 8))(l_309.yyzxyyxz)).s0 >= (p_509->g_310 , (p_509->g_106 <= (p_509->g_80.s5 == 0x7A9CA50BL)))) > 0x36L) ^ (-1L)), 4)))), l_306))))));
    (*l_322) = (((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_509->g_42.s0 || (FAKE_DIVERGE(p_509->group_1_offset, get_group_id(1), 10) || ((void*)0 != p_509->g_328))), 4)), p_31)) >= (((VECTOR(int16_t, 2))(l_332.yx)).even && (p_509->g_79[7] , (((((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_333.yxxxyxyyxyxyxyyx)).s2ee8))))))).z < (((*l_335) = p_509->g_334) == (p_30 , &p_509->g_106))) , &p_509->g_281) == l_336[3])))) == p_32);
    return &p_509->g_79[7];
}


/* ------------------------------------------ */
/* 
 * reads : p_509->l_comm_values p_509->g_6 p_509->g_63 p_509->g_77 p_509->g_79 p_509->g_comm_values p_509->g_100 p_509->g_80 p_509->g_106 p_509->g_131 p_509->g_130 p_509->g_116 p_509->g_147.f5 p_509->g_119 p_509->g_260 p_509->g_115 p_509->g_275 p_509->g_281 p_509->g_295 p_509->g_3 p_509->g_42
 * writes: p_509->g_63 p_509->g_62 p_509->g_6 p_509->g_77 p_509->g_79 p_509->g_100 p_509->g_106 p_509->g_119 p_509->g_281
 */
uint8_t  func_35(int32_t  p_36, int32_t * p_37, int32_t * p_38, uint64_t  p_39, int32_t  p_40, struct S2 * p_509)
{ /* block id: 93 */
    int8_t l_234 = 0x1FL;
    uint32_t *l_243 = (void*)0;
    uint32_t *l_244 = (void*)0;
    uint32_t *l_245 = (void*)0;
    VECTOR(int32_t, 4) l_246 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
    uint32_t *l_247 = (void*)0;
    uint32_t *l_248 = (void*)0;
    uint32_t *l_249 = (void*)0;
    uint32_t *l_250 = (void*)0;
    int32_t l_251 = 1L;
    uint32_t *l_252 = (void*)0;
    uint32_t *l_253 = (void*)0;
    uint32_t *l_254 = (void*)0;
    uint32_t *l_255[2];
    int64_t *l_263 = (void*)0;
    uint64_t l_264 = 0x10767AB17395EC05L;
    int64_t l_265[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
    int32_t *l_267 = &p_509->g_77[9][0][0];
    int32_t **l_266 = &l_267;
    int32_t *l_268 = &p_509->g_79[0];
    int32_t *l_269 = &p_509->g_77[9][2][1];
    int32_t *l_270 = &p_509->g_79[7];
    int32_t *l_271[6] = {&p_509->g_79[1],&p_509->g_79[1],&p_509->g_79[1],&p_509->g_79[1],&p_509->g_79[1],&p_509->g_79[1]};
    VECTOR(uint32_t, 4) l_272 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967295UL), 4294967295UL);
    int32_t *l_276 = &p_509->g_79[7];
    VECTOR(int32_t, 8) l_277 = (VECTOR(int32_t, 8))(0x4BF19571L, (VECTOR(int32_t, 4))(0x4BF19571L, (VECTOR(int32_t, 2))(0x4BF19571L, 8L), 8L), 8L, 0x4BF19571L, 8L);
    uint8_t *l_280 = &p_509->g_281;
    int16_t *l_286 = &p_509->g_100;
    uint64_t *l_296 = &p_509->g_106;
    int i, j;
    for (i = 0; i < 2; i++)
        l_255[i] = (void*)0;
    (*l_266) = func_50(func_50(p_38, p_509->l_comm_values[(safe_mod_func_uint32_t_u_u(p_509->tid, 90))], p_509), (safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((0x33034EC3L != (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((4294967291UL > (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_509->group_1_offset, get_group_id(1), 10), l_234))), (!((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((((safe_rshift_func_int8_t_s_u(((p_509->g_147.f5 > ((p_509->g_119.x++) & (safe_mod_func_int8_t_s_s(((l_246.x = (+((((p_509->g_260 , ((safe_lshift_func_uint16_t_u_u(p_509->g_115.y, 7)) && p_39)) ^ l_251) & 4294967295UL) == FAKE_DIVERGE(p_509->group_2_offset, get_group_id(2), 10)))) , 1L), 0x7EL)))) >= p_509->g_260.f0), 1)) != p_509->g_80.s7) && l_264) == 0x725A2E185E6C309AL) < p_40), 2)), l_234)), l_265[1][0])) , l_246.x)))), p_509->g_80.s4))) || l_234), p_509->g_80.s6)), 1L)), p_509);
    l_272.y++;
    l_276 = func_50(((*l_266) = func_50((p_37 = &p_509->g_79[0]), p_509->g_63, p_509)), (p_509->g_275 == p_38), p_509);
    (*l_269) = (!((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((*p_37), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_277.s71235530)).s06, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((GROUP_DIVERGE(0, 1) == (((((((safe_mod_func_uint8_t_u_u((--(*l_280)), (3L || (safe_div_func_int16_t_s_s((p_40 < ((*l_286) = (p_40 | 18446744073709551607UL))), ((*l_267) || (+(~p_509->g_115.w)))))))) ^ (((safe_sub_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_296) = (p_36 && (((((VECTOR(uint32_t, 2))(p_509->g_295.s25)).even || (0x75A7021C5D0E3D36L < p_40)) >= p_509->g_80.s6) <= 0L))), 0x09CCD8F38D1ADCE2L)), (*l_268))) > (*l_267)), FAKE_DIVERGE(p_509->global_1_offset, get_global_id(1), 10))) != (*p_38)) & p_509->g_42.sf)) ^ 0x75L) , (*l_270)) <= p_39) | (*l_267)) ^ (*p_38))), ((VECTOR(int32_t, 2))(2L)), (-1L))).ywyxxzywyxzxyxwy)).s71, ((VECTOR(int32_t, 2))(8L))))).xxxxxyyyxxyxyxxx))).sca)), ((VECTOR(int32_t, 4))((-2L))), (-9L))).s55)).hi);
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_147 p_509->g_115 p_509->g_79 p_509->g_3 p_509->g_41
 * writes:
 */
uint8_t  func_45(uint32_t  p_46, uint64_t  p_47, int32_t * p_48, int32_t * p_49, struct S2 * p_509)
{ /* block id: 57 */
    VECTOR(uint64_t, 2) l_143 = (VECTOR(uint64_t, 2))(0x419DE7AC821ADE7DL, 0xE71E300602DEBEABL);
    struct S0 l_146 = {0x6C19L};
    VECTOR(int8_t, 8) l_150 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x3CL), 0x3CL), 0x3CL, 1L, 0x3CL);
    VECTOR(int8_t, 2) l_151 = (VECTOR(int8_t, 2))(0x66L, (-9L));
    int32_t l_152 = 0x29C7A836L;
    VECTOR(int8_t, 2) l_153 = (VECTOR(int8_t, 2))(0x13L, 0L);
    VECTOR(int8_t, 4) l_154 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0L), 0L);
    VECTOR(int8_t, 2) l_155 = (VECTOR(int8_t, 2))(0x1AL, (-1L));
    VECTOR(int8_t, 2) l_156 = (VECTOR(int8_t, 2))(4L, 0x05L);
    int32_t l_215 = 0x6A4DAE90L;
    int i;
    if ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_143.xx)).xxyyyxxyxyyxyxyx)).s7b)).hi , (safe_mul_func_uint8_t_u_u(((l_146 , p_509->g_147) , p_509->g_115.z), ((safe_add_func_uint16_t_u_u(l_146.f0, GROUP_DIVERGE(0, 1))) <= (p_46 | ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_150.s62)))), ((VECTOR(int8_t, 2))(l_151.xy))))))).yxyxxxxy, ((VECTOR(int8_t, 8))((l_152 = p_509->g_79[7]), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(l_153.yyyyxyxyxxxxxyyy)).s0092, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(8L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x24L, 1L)))), ((VECTOR(int8_t, 2))(0x74L, (-1L))), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_154.xywxwwzw)).s65, ((VECTOR(int8_t, 16))(l_155.xyxxxxyxxyxyyyyy)).s36, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x7EL)).yyxyxyyx)).s64))), 0x39L)).lo)).hi)).xxyxxyxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_156.yy)).xxxyxyyxyxyxxxyx)).hi))))), (int8_t)((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((l_151.y < ((-1L) <= p_509->g_79[2])), p_47)), p_509->g_115.w)), 0x3FL)) || p_46)))), ((VECTOR(int8_t, 8))(1L))))).even))))).zyxyxzyw)), ((VECTOR(int8_t, 4))(0x08L)), 0x16L, p_47, 7L, 0x4FL)).s2, (-10L), 0x41L, 0x1CL)).wzwzyywzyywwyxzy, (int8_t)p_509->g_3))).even)).odd)), 0x13L, 0x06L, 0x06L))))).s65)), ((VECTOR(int8_t, 2))(0x04L)), ((VECTOR(int8_t, 2))(1L)), 0x0CL)).odd))).y))))))
    { /* block id: 59 */
        if ((atomic_inc(&p_509->l_atomic_input[55]) == 9))
        { /* block id: 61 */
            uint8_t l_163 = 1UL;
            ++l_163;
            for (l_163 = 0; (l_163 != 35); l_163++)
            { /* block id: 65 */
                VECTOR(int32_t, 4) l_168 = (VECTOR(int32_t, 4))(0x0D4DAC23L, (VECTOR(int32_t, 2))(0x0D4DAC23L, (-4L)), (-4L));
                VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))(0x0A77CAADL, (VECTOR(int32_t, 4))(0x0A77CAADL, (VECTOR(int32_t, 2))(0x0A77CAADL, 0x4EBDF167L), 0x4EBDF167L), 0x4EBDF167L, 0x0A77CAADL, 0x4EBDF167L, (VECTOR(int32_t, 2))(0x0A77CAADL, 0x4EBDF167L), (VECTOR(int32_t, 2))(0x0A77CAADL, 0x4EBDF167L), 0x0A77CAADL, 0x4EBDF167L, 0x0A77CAADL, 0x4EBDF167L);
                int8_t l_170[4][3] = {{6L,0x7FL,6L},{6L,0x7FL,6L},{6L,0x7FL,6L},{6L,0x7FL,6L}};
                VECTOR(int32_t, 4) l_171 = (VECTOR(int32_t, 4))(0x07E61623L, (VECTOR(int32_t, 2))(0x07E61623L, 0x08E17929L), 0x08E17929L);
                VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))(0x25233B76L, 0x0550A6A3L);
                VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x178785D6L), 0x178785D6L), 0x178785D6L, 9L, 0x178785D6L, (VECTOR(int32_t, 2))(9L, 0x178785D6L), (VECTOR(int32_t, 2))(9L, 0x178785D6L), 9L, 0x178785D6L, 9L, 0x178785D6L);
                VECTOR(int32_t, 4) l_174 = (VECTOR(int32_t, 4))(0x04671B80L, (VECTOR(int32_t, 2))(0x04671B80L, 0L), 0L);
                uint32_t l_175 = 0xCF5D119BL;
                VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(0x65BC54D0L, (VECTOR(int32_t, 2))(0x65BC54D0L, (-3L)), (-3L));
                VECTOR(int32_t, 4) l_177 = (VECTOR(int32_t, 4))(0x2D864EF0L, (VECTOR(int32_t, 2))(0x2D864EF0L, 0L), 0L);
                int8_t l_178 = 0x20L;
                VECTOR(int32_t, 8) l_179 = (VECTOR(int32_t, 8))(0x55DC2D2AL, (VECTOR(int32_t, 4))(0x55DC2D2AL, (VECTOR(int32_t, 2))(0x55DC2D2AL, 0L), 0L), 0L, 0x55DC2D2AL, 0L);
                VECTOR(int32_t, 4) l_180 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L));
                VECTOR(int32_t, 4) l_181 = (VECTOR(int32_t, 4))(0x2AEA3A5DL, (VECTOR(int32_t, 2))(0x2AEA3A5DL, (-3L)), (-3L));
                VECTOR(uint16_t, 4) l_182 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x4AB8L), 0x4AB8L);
                VECTOR(uint16_t, 16) l_183 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint16_t, 2))(8UL, 0UL), (VECTOR(uint16_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL);
                VECTOR(uint16_t, 4) l_184 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x641EL), 0x641EL);
                VECTOR(uint16_t, 16) l_185 = (VECTOR(uint16_t, 16))(0x831BL, (VECTOR(uint16_t, 4))(0x831BL, (VECTOR(uint16_t, 2))(0x831BL, 0x4B67L), 0x4B67L), 0x4B67L, 0x831BL, 0x4B67L, (VECTOR(uint16_t, 2))(0x831BL, 0x4B67L), (VECTOR(uint16_t, 2))(0x831BL, 0x4B67L), 0x831BL, 0x4B67L, 0x831BL, 0x4B67L);
                VECTOR(uint16_t, 2) l_186 = (VECTOR(uint16_t, 2))(0x5D5BL, 0x4FC3L);
                VECTOR(uint16_t, 4) l_187 = (VECTOR(uint16_t, 4))(0xC320L, (VECTOR(uint16_t, 2))(0xC320L, 65532UL), 65532UL);
                int32_t l_188[8][2] = {{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L},{0x3B7F8652L,0x3B7F8652L}};
                VECTOR(uint16_t, 16) l_191 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xFF58L), 0xFF58L), 0xFF58L, 65530UL, 0xFF58L, (VECTOR(uint16_t, 2))(65530UL, 0xFF58L), (VECTOR(uint16_t, 2))(65530UL, 0xFF58L), 65530UL, 0xFF58L, 65530UL, 0xFF58L);
                int32_t l_192 = 0L;
                int32_t l_193 = 0x221092ABL;
                uint32_t l_194 = 0UL;
                VECTOR(uint16_t, 8) l_195 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x9D0DL), 0x9D0DL), 0x9D0DL, 1UL, 0x9D0DL);
                VECTOR(uint16_t, 4) l_196 = (VECTOR(uint16_t, 4))(0xC996L, (VECTOR(uint16_t, 2))(0xC996L, 65527UL), 65527UL);
                uint32_t l_199[4];
                int32_t l_200 = 0x321F73ABL;
                int32_t l_201 = 0x44503094L;
                int8_t l_202 = 0x01L;
                uint32_t l_203 = 0x49284DA9L;
                uint32_t l_204[6] = {0x1697D797L,1UL,0x1697D797L,0x1697D797L,1UL,0x1697D797L};
                int64_t l_205 = 0x2BF7BF8C57B8F58DL;
                int8_t l_206 = 0L;
                int32_t *l_207 = (void*)0;
                int32_t *l_208 = (void*)0;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_199[i] = 0x3775B815L;
                l_206 |= ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_168.zxyyzzxxxzxxwxzy)).sd08f, (int32_t)((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_169.s37)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5D1925C7L, 0L)), 0x787DB018L, 0x47B62B50L)).zzwyyzxw, ((VECTOR(int32_t, 4))(l_170[2][2], ((VECTOR(int32_t, 2))(l_171.zy)), (-6L))).yxxzxzzw))).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_172.xy)))).xxxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_173.sa8)), 1L, 0L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-7L), 0L)), ((VECTOR(int32_t, 16))(0x7468774BL, ((VECTOR(int32_t, 8))(l_174.yxwwzzyz)), (l_175 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x24C56DE6L)).yxyxyyyy)))).s7), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 1L)).xxyxxyyx)).s34, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x686B45E0L, 0x3E1140ECL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_176.zxxwwxzyzxywwxzy)))).lo)), 2L, 5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x08CC783CL, ((VECTOR(int32_t, 2))(l_177.wz)), 9L)).xxzxyyywxyzxxzyy)).s56e7)).zxyzwzxxwzxxwyyw)).s18)).yyxy)).hi)), 6L, (-7L))))).s4, (int32_t)((VECTOR(int32_t, 8))(0x54CE14D6L, (l_178 &= (-1L)), ((VECTOR(int32_t, 2))(l_179.s07)), 7L, ((VECTOR(int32_t, 2))(l_180.wz)), 0x03A05EEFL)).s6))))), 0L, ((VECTOR(int32_t, 2))((-1L), 0x06338055L)), 0x6B93C577L)).s2, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_181.xyyz)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x5A4BL, (-1L))).xyyxxyxyyyxyyxyx)).sac, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(l_182.zw)).yyxxyyxy, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_183.sb0)), 65528UL, 0xB286L)).lo, ((VECTOR(uint16_t, 2))(l_184.yw))))).xyxyyyxx)).s12, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_185.sb459c849)))).s27, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(l_186.xyxxyyxy)), (uint16_t)((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(l_187.wwxwzxzwzyyxyyyz)).s9f36, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))((l_185.s0++), 65526UL, 6UL, 0UL, 0x4656L, ((VECTOR(uint16_t, 2))(65528UL, 0xB091L)).even, 1UL, 0xC47FL)).s00, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_191.s7dbdda58)))).s51, ((VECTOR(uint16_t, 2))(0xCE98L, 4UL))))).xxyy))))).wwwzzywx)).s1, (uint16_t)(l_187.x = ((l_192 , 0L) , (l_193 , l_194)))))).s66))).xxxxxyxy)))).s63))).xyyyxyyx)).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_195.s35)).hi, GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_196.wxxxyxyxyzxzxxww)).sad)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(6UL, 65528UL)).yxxy)), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(0x1DA1L, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(0x1400L, (l_196.y--), l_199[2], l_200, 0x3C8CL, 8UL, ((VECTOR(uint16_t, 8))(1UL)), 0x39C9L, 0xCF1AL)).s5c3e, ((VECTOR(uint16_t, 4))(4UL))))), l_201, 0UL, 0x1AC3L)).lo))).z, 0x2AE3L, 0xC465L, 0x2033L)), l_202, l_203, 0xEFE1L, 9UL)).scb39))).wxzyywywxyzzyzxw, ((VECTOR(uint16_t, 16))(65535UL))))).even))), ((VECTOR(uint16_t, 8))(0x51AAL))))).s06))).xyyy))))), ((VECTOR(int32_t, 4))((-1L)))))), 0x323383EBL)).hi)), l_204[2], 0x3B617C27L, 0x499AA9D4L, 5L)).hi)))))).xwwxywyx, ((VECTOR(int32_t, 8))((-1L)))))).s41))).odd, (int32_t)l_205))).w;
                l_208 = (l_207 = (void*)0);
            }
            for (l_163 = (-14); (l_163 != 23); ++l_163)
            { /* block id: 76 */
                struct S0 l_212 = {3UL};
                struct S0 *l_211 = &l_212;
                struct S0 *l_213 = &l_212;
                l_213 = (l_211 = (void*)0);
            }
            unsigned int result = 0;
            result += l_163;
            atomic_add(&p_509->l_special_values[55], result);
        }
        else
        { /* block id: 80 */
            (1 + 1);
        }
    }
    else
    { /* block id: 83 */
        int32_t *l_214[9][5] = {{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]},{&p_509->g_77[3][0][2],&l_152,&p_509->g_77[9][2][1],&p_509->g_79[7],&p_509->g_77[9][2][1]}};
        uint32_t l_216 = 4294967295UL;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_509->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 90)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(0x4743E299L, 4294967295UL, 4294967293UL, 1UL)).z, 10))][(safe_mod_func_uint32_t_u_u(p_509->tid, 90))]));
        --l_216;
        return p_46;
    }
    return p_509->g_41.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_6 p_509->g_63 p_509->g_62 p_509->l_comm_values p_509->g_77 p_509->g_79 p_509->g_80 p_509->g_comm_values p_509->g_100 p_509->g_106 p_509->g_115 p_509->g_116 p_509->g_119 p_509->g_130 p_509->g_131
 * writes: p_509->g_63 p_509->g_62 p_509->g_6 p_509->g_77 p_509->g_79 p_509->g_100 p_509->g_106
 */
int32_t * func_50(int32_t * p_51, uint64_t  p_52, struct S2 * p_509)
{ /* block id: 12 */
    int16_t l_71 = 0x04E0L;
    int8_t *l_72 = (void*)0;
    int32_t l_73 = 1L;
    int32_t *l_74 = (void*)0;
    int32_t *l_75 = (void*)0;
    int32_t *l_76 = (void*)0;
    int32_t *l_78 = &p_509->g_79[7];
    VECTOR(int32_t, 16) l_87 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    int16_t *l_96 = (void*)0;
    int16_t *l_97 = &l_71;
    int32_t l_98 = 0x7C0376B3L;
    int16_t *l_99 = &p_509->g_100;
    int32_t l_102 = 0L;
    int32_t l_103 = (-10L);
    int32_t l_104[9][6] = {{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L},{0L,0L,0x4AECF75CL,0x3D848F3AL,0x165A292DL,1L}};
    struct S0 l_133 = {0UL};
    int i, j;
    (*l_78) |= (p_509->g_77[9][2][1] |= ((~((0x72231B3DFA8E8B88L ^ p_52) != (p_509->g_6.z = (safe_lshift_func_int8_t_s_s((0x3C4D9805L & p_509->g_6.y), (l_73 = (safe_div_func_int8_t_s_s(func_57(func_59(p_52, p_509), p_509), (((p_52 & (l_71 >= FAKE_DIVERGE(p_509->group_0_offset, get_group_id(0), 10))) > p_509->l_comm_values[(safe_mod_func_uint32_t_u_u(p_509->tid, 90))]) ^ 1L))))))))) == p_509->l_comm_values[(safe_mod_func_uint32_t_u_u(p_509->tid, 90))]));
    (*l_78) = p_52;
    if ((((VECTOR(int16_t, 4))(p_509->g_80.s7661)).x == (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((*l_99) ^= (((((VECTOR(int32_t, 16))((-1L), 0x7B4F3EC9L, ((VECTOR(int32_t, 4))(l_87.s9c23)).x, 0x1C8ED9F2L, (p_52 & ((*l_97) = (safe_lshift_func_int8_t_s_s(p_52, ((safe_mul_func_int16_t_s_s(0x6666L, (safe_mul_func_uint16_t_u_u(0x4308L, (safe_sub_func_uint8_t_u_u(p_52, p_509->g_comm_values[p_509->tid])))))) < p_509->g_80.s6))))), (7UL | l_98), (-1L), 3L, (-1L), 0x5B7CC70EL, 0x6F5F90F0L, (*l_78), (-8L), 0x446A622BL, 7L, 9L)).s7 , 0x061EL) < (-4L)) && p_509->g_comm_values[p_509->tid])) < p_52), p_509->g_comm_values[p_509->tid])), p_509->g_80.s5)), p_52))))
    { /* block id: 31 */
        int32_t *l_101[10];
        int8_t l_105[6][1] = {{5L},{5L},{5L},{5L},{5L},{5L}};
        struct S0 l_134 = {65528UL};
        int i, j;
        for (i = 0; i < 10; i++)
            l_101[i] = &p_509->g_77[9][2][1];
        p_509->g_106--;
        (*l_78) ^= 0x681A5975L;
        for (p_509->g_62 = 0; (p_509->g_62 == (-1)); p_509->g_62 = safe_sub_func_int32_t_s_s(p_509->g_62, 1))
        { /* block id: 36 */
            uint32_t *l_120[7][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_121[1];
            int32_t l_125 = 0x5E980918L;
            int32_t l_132[6][5] = {{0L,3L,0x148EFDC4L,3L,0L},{0L,3L,0x148EFDC4L,3L,0L},{0L,3L,0x148EFDC4L,3L,0L},{0L,3L,0x148EFDC4L,3L,0L},{0L,3L,0x148EFDC4L,3L,0L},{0L,3L,0x148EFDC4L,3L,0L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_121[i] = 0x6D30ABCDL;
            l_132[3][2] |= (safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((((0x05E0L | ((GROUP_DIVERGE(0, 1) , ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(p_509->g_115.zy)).xxxy, ((VECTOR(int8_t, 16))(p_509->g_116.xyxyxxxxyxxyyyxy)).sefa4))).w) >= (18446744073709551611UL < ((p_509->g_comm_values[p_509->tid] == ((p_509->g_63 |= (safe_sub_func_int8_t_s_s((FAKE_DIVERGE(p_509->group_2_offset, get_group_id(2), 10) , (p_52 >= (l_121[0] |= ((VECTOR(uint32_t, 8))(p_509->g_119.yxyzwxyx)).s7))), (((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(l_125)), 8)) == p_52) , ((safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((~p_52), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_509->g_130.s12)), 0x4CE1L, 0x46D9L)).z)) , &p_51) != p_509->g_131) == 1L), l_125)) || p_509->g_130.s7))))) != p_509->g_comm_values[p_509->tid])) || l_121[0])))) >= 0xFBL) == p_52) > p_52), p_509->g_116.y)) , (-1L)), p_509->g_130.s2));
            l_134 = l_133;
        }
        return &p_509->g_79[7];
    }
    else
    { /* block id: 43 */
        uint64_t l_135 = 0x9996229258A53ACAL;
        (*l_78) ^= l_135;
        for (l_103 = 0; (l_103 < 0); ++l_103)
        { /* block id: 47 */
            int32_t **l_138 = (void*)0;
            int32_t **l_139 = (void*)0;
            int32_t **l_140 = &l_74;
            (*l_140) = p_51;
        }
    }
    for (p_509->g_63 = (-13); (p_509->g_63 < 7); ++p_509->g_63)
    { /* block id: 53 */
        return p_51;
    }
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_62
 * writes: p_509->g_62
 */
int8_t  func_57(int64_t  p_58, struct S2 * p_509)
{ /* block id: 16 */
    int32_t *l_66[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t **l_67 = &l_66[1][0];
    int i, j;
    (*l_67) = l_66[6][1];
    for (p_509->g_62 = (-28); (p_509->g_62 >= 6); p_509->g_62 = safe_add_func_int64_t_s_s(p_509->g_62, 9))
    { /* block id: 20 */
        uint8_t l_70[6][4] = {{0xF1L,1UL,255UL,1UL},{0xF1L,1UL,255UL,1UL},{0xF1L,1UL,255UL,1UL},{0xF1L,1UL,255UL,1UL},{0xF1L,1UL,255UL,1UL},{0xF1L,1UL,255UL,1UL}};
        int i, j;
        l_70[2][3] = p_58;
    }
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_509->g_63
 * writes: p_509->g_63
 */
int64_t  func_59(uint32_t  p_60, struct S2 * p_509)
{ /* block id: 13 */
    int32_t *l_61[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    --p_509->g_63;
    return p_60;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_comm_values[i] = 1;
    struct S2 c_510;
    struct S2* p_509 = &c_510;
    struct S2 c_511 = {
        {0x00F47A6DL,0x00F47A6DL,0x00F47A6DL,0x00F47A6DL,0x00F47A6DL,0x00F47A6DL,0x00F47A6DL}, // p_509->g_2
        0x1328F6C7L, // p_509->g_3
        (VECTOR(int32_t, 4))(0x75047C4DL, (VECTOR(int32_t, 2))(0x75047C4DL, 0x54BCD76CL), 0x54BCD76CL), // p_509->g_6
        (VECTOR(uint32_t, 4))(0x509E13C9L, (VECTOR(uint32_t, 2))(0x509E13C9L, 0x4CE5FEF4L), 0x4CE5FEF4L), // p_509->g_41
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_509->g_42
        (VECTOR(uint16_t, 2))(0xA49EL, 0UL), // p_509->g_43
        0x64L, // p_509->g_62
        1UL, // p_509->g_63
        {{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}},{{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL},{(-1L),0L,0x66A4CB4AL}}}, // p_509->g_77
        {0L,0L,0L,0L,0L,0L,0L,0L}, // p_509->g_79
        (VECTOR(int16_t, 8))(0x5636L, (VECTOR(int16_t, 4))(0x5636L, (VECTOR(int16_t, 2))(0x5636L, 0x1654L), 0x1654L), 0x1654L, 0x5636L, 0x1654L), // p_509->g_80
        (-9L), // p_509->g_100
        0xD826FC9A26349847L, // p_509->g_106
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), // p_509->g_115
        (VECTOR(int8_t, 2))(1L, 0x2BL), // p_509->g_116
        (VECTOR(uint32_t, 4))(0x01FF9ED6L, (VECTOR(uint32_t, 2))(0x01FF9ED6L, 0x8A66A157L), 0x8A66A157L), // p_509->g_119
        (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L), // p_509->g_130
        (void*)0, // p_509->g_131
        {0xFF7825D7L,6UL,0L,0x38A404222332E962L,0x522EE653L,0UL,0x482B2E1F43CF0B3BL,{65532UL}}, // p_509->g_147
        0x9557A730L, // p_509->g_220
        {65535UL}, // p_509->g_260
        (void*)0, // p_509->g_275
        0x03L, // p_509->g_281
        (VECTOR(uint32_t, 8))(0xE340233AL, (VECTOR(uint32_t, 4))(0xE340233AL, (VECTOR(uint32_t, 2))(0xE340233AL, 0xCCAB275EL), 0xCCAB275EL), 0xCCAB275EL, 0xE340233AL, 0xCCAB275EL), // p_509->g_295
        &p_509->g_260, // p_509->g_300
        {0xC651A835L,1UL,1L,0x71FC6B62847544DCL,0x55396E05L,1UL,0xD980E95B98186256L,{65535UL}}, // p_509->g_310
        (void*)0, // p_509->g_323
        0x3BB0D358DDB506A2L, // p_509->g_329
        &p_509->g_329, // p_509->g_328
        (void*)0, // p_509->g_334
        {0xC62FL}, // p_509->g_337
        (VECTOR(int8_t, 8))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 0x26L), 0x26L), 0x26L, 0x3EL, 0x26L), // p_509->g_344
        (VECTOR(uint32_t, 16))(0x5951E8CFL, (VECTOR(uint32_t, 4))(0x5951E8CFL, (VECTOR(uint32_t, 2))(0x5951E8CFL, 8UL), 8UL), 8UL, 0x5951E8CFL, 8UL, (VECTOR(uint32_t, 2))(0x5951E8CFL, 8UL), (VECTOR(uint32_t, 2))(0x5951E8CFL, 8UL), 0x5951E8CFL, 8UL, 0x5951E8CFL, 8UL), // p_509->g_347
        (VECTOR(int64_t, 2))(0L, (-8L)), // p_509->g_348
        254UL, // p_509->g_373
        (void*)0, // p_509->g_381
        &p_509->g_381, // p_509->g_380
        {&p_509->g_281,&p_509->g_281,&p_509->g_281,&p_509->g_281,&p_509->g_281}, // p_509->g_382
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_509->g_388
        {&p_509->g_260,&p_509->g_260}, // p_509->g_404
        {&p_509->g_337,&p_509->g_337,&p_509->g_337}, // p_509->g_405
        &p_509->g_79[4], // p_509->g_407
        {{&p_509->g_337,&p_509->g_337,&p_509->g_337,&p_509->g_337,&p_509->g_337,&p_509->g_337,&p_509->g_337,&p_509->g_337}}, // p_509->g_408
        {{&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0},{&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0},{&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0,&p_509->g_337,&p_509->g_337,(void*)0}}, // p_509->g_409
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0UL), 0UL), // p_509->g_410
        (VECTOR(uint8_t, 4))(0xBCL, (VECTOR(uint8_t, 2))(0xBCL, 0x65L), 0x65L), // p_509->g_415
        (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 1L), 1L), 1L, 4L, 1L, (VECTOR(int64_t, 2))(4L, 1L), (VECTOR(int64_t, 2))(4L, 1L), 4L, 1L, 4L, 1L), // p_509->g_443
        0x4D865EDB31B6B4DBL, // p_509->g_458
        &p_509->g_260, // p_509->g_475
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7FDFL), 0x7FDFL), // p_509->g_497
        0, // p_509->v_collective
        sequence_input[get_global_id(0)], // p_509->global_0_offset
        sequence_input[get_global_id(1)], // p_509->global_1_offset
        sequence_input[get_global_id(2)], // p_509->global_2_offset
        sequence_input[get_local_id(0)], // p_509->local_0_offset
        sequence_input[get_local_id(1)], // p_509->local_1_offset
        sequence_input[get_local_id(2)], // p_509->local_2_offset
        sequence_input[get_group_id(0)], // p_509->group_0_offset
        sequence_input[get_group_id(1)], // p_509->group_1_offset
        sequence_input[get_group_id(2)], // p_509->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 90)), permutations[0][get_linear_local_id()])), // p_509->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_510 = c_511;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_509);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_509->g_2[i], "p_509->g_2[i]", print_hash_value);

    }
    transparent_crc(p_509->g_3, "p_509->g_3", print_hash_value);
    transparent_crc(p_509->g_6.x, "p_509->g_6.x", print_hash_value);
    transparent_crc(p_509->g_6.y, "p_509->g_6.y", print_hash_value);
    transparent_crc(p_509->g_6.z, "p_509->g_6.z", print_hash_value);
    transparent_crc(p_509->g_6.w, "p_509->g_6.w", print_hash_value);
    transparent_crc(p_509->g_41.x, "p_509->g_41.x", print_hash_value);
    transparent_crc(p_509->g_41.y, "p_509->g_41.y", print_hash_value);
    transparent_crc(p_509->g_41.z, "p_509->g_41.z", print_hash_value);
    transparent_crc(p_509->g_41.w, "p_509->g_41.w", print_hash_value);
    transparent_crc(p_509->g_42.s0, "p_509->g_42.s0", print_hash_value);
    transparent_crc(p_509->g_42.s1, "p_509->g_42.s1", print_hash_value);
    transparent_crc(p_509->g_42.s2, "p_509->g_42.s2", print_hash_value);
    transparent_crc(p_509->g_42.s3, "p_509->g_42.s3", print_hash_value);
    transparent_crc(p_509->g_42.s4, "p_509->g_42.s4", print_hash_value);
    transparent_crc(p_509->g_42.s5, "p_509->g_42.s5", print_hash_value);
    transparent_crc(p_509->g_42.s6, "p_509->g_42.s6", print_hash_value);
    transparent_crc(p_509->g_42.s7, "p_509->g_42.s7", print_hash_value);
    transparent_crc(p_509->g_42.s8, "p_509->g_42.s8", print_hash_value);
    transparent_crc(p_509->g_42.s9, "p_509->g_42.s9", print_hash_value);
    transparent_crc(p_509->g_42.sa, "p_509->g_42.sa", print_hash_value);
    transparent_crc(p_509->g_42.sb, "p_509->g_42.sb", print_hash_value);
    transparent_crc(p_509->g_42.sc, "p_509->g_42.sc", print_hash_value);
    transparent_crc(p_509->g_42.sd, "p_509->g_42.sd", print_hash_value);
    transparent_crc(p_509->g_42.se, "p_509->g_42.se", print_hash_value);
    transparent_crc(p_509->g_42.sf, "p_509->g_42.sf", print_hash_value);
    transparent_crc(p_509->g_43.x, "p_509->g_43.x", print_hash_value);
    transparent_crc(p_509->g_43.y, "p_509->g_43.y", print_hash_value);
    transparent_crc(p_509->g_62, "p_509->g_62", print_hash_value);
    transparent_crc(p_509->g_63, "p_509->g_63", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_509->g_77[i][j][k], "p_509->g_77[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_509->g_79[i], "p_509->g_79[i]", print_hash_value);

    }
    transparent_crc(p_509->g_80.s0, "p_509->g_80.s0", print_hash_value);
    transparent_crc(p_509->g_80.s1, "p_509->g_80.s1", print_hash_value);
    transparent_crc(p_509->g_80.s2, "p_509->g_80.s2", print_hash_value);
    transparent_crc(p_509->g_80.s3, "p_509->g_80.s3", print_hash_value);
    transparent_crc(p_509->g_80.s4, "p_509->g_80.s4", print_hash_value);
    transparent_crc(p_509->g_80.s5, "p_509->g_80.s5", print_hash_value);
    transparent_crc(p_509->g_80.s6, "p_509->g_80.s6", print_hash_value);
    transparent_crc(p_509->g_80.s7, "p_509->g_80.s7", print_hash_value);
    transparent_crc(p_509->g_100, "p_509->g_100", print_hash_value);
    transparent_crc(p_509->g_106, "p_509->g_106", print_hash_value);
    transparent_crc(p_509->g_115.x, "p_509->g_115.x", print_hash_value);
    transparent_crc(p_509->g_115.y, "p_509->g_115.y", print_hash_value);
    transparent_crc(p_509->g_115.z, "p_509->g_115.z", print_hash_value);
    transparent_crc(p_509->g_115.w, "p_509->g_115.w", print_hash_value);
    transparent_crc(p_509->g_116.x, "p_509->g_116.x", print_hash_value);
    transparent_crc(p_509->g_116.y, "p_509->g_116.y", print_hash_value);
    transparent_crc(p_509->g_119.x, "p_509->g_119.x", print_hash_value);
    transparent_crc(p_509->g_119.y, "p_509->g_119.y", print_hash_value);
    transparent_crc(p_509->g_119.z, "p_509->g_119.z", print_hash_value);
    transparent_crc(p_509->g_119.w, "p_509->g_119.w", print_hash_value);
    transparent_crc(p_509->g_130.s0, "p_509->g_130.s0", print_hash_value);
    transparent_crc(p_509->g_130.s1, "p_509->g_130.s1", print_hash_value);
    transparent_crc(p_509->g_130.s2, "p_509->g_130.s2", print_hash_value);
    transparent_crc(p_509->g_130.s3, "p_509->g_130.s3", print_hash_value);
    transparent_crc(p_509->g_130.s4, "p_509->g_130.s4", print_hash_value);
    transparent_crc(p_509->g_130.s5, "p_509->g_130.s5", print_hash_value);
    transparent_crc(p_509->g_130.s6, "p_509->g_130.s6", print_hash_value);
    transparent_crc(p_509->g_130.s7, "p_509->g_130.s7", print_hash_value);
    transparent_crc(p_509->g_147.f0, "p_509->g_147.f0", print_hash_value);
    transparent_crc(p_509->g_147.f1, "p_509->g_147.f1", print_hash_value);
    transparent_crc(p_509->g_147.f2, "p_509->g_147.f2", print_hash_value);
    transparent_crc(p_509->g_147.f3, "p_509->g_147.f3", print_hash_value);
    transparent_crc(p_509->g_147.f4, "p_509->g_147.f4", print_hash_value);
    transparent_crc(p_509->g_147.f5, "p_509->g_147.f5", print_hash_value);
    transparent_crc(p_509->g_147.f6, "p_509->g_147.f6", print_hash_value);
    transparent_crc(p_509->g_147.f7.f0, "p_509->g_147.f7.f0", print_hash_value);
    transparent_crc(p_509->g_220, "p_509->g_220", print_hash_value);
    transparent_crc(p_509->g_260.f0, "p_509->g_260.f0", print_hash_value);
    transparent_crc(p_509->g_281, "p_509->g_281", print_hash_value);
    transparent_crc(p_509->g_295.s0, "p_509->g_295.s0", print_hash_value);
    transparent_crc(p_509->g_295.s1, "p_509->g_295.s1", print_hash_value);
    transparent_crc(p_509->g_295.s2, "p_509->g_295.s2", print_hash_value);
    transparent_crc(p_509->g_295.s3, "p_509->g_295.s3", print_hash_value);
    transparent_crc(p_509->g_295.s4, "p_509->g_295.s4", print_hash_value);
    transparent_crc(p_509->g_295.s5, "p_509->g_295.s5", print_hash_value);
    transparent_crc(p_509->g_295.s6, "p_509->g_295.s6", print_hash_value);
    transparent_crc(p_509->g_295.s7, "p_509->g_295.s7", print_hash_value);
    transparent_crc(p_509->g_310.f0, "p_509->g_310.f0", print_hash_value);
    transparent_crc(p_509->g_310.f1, "p_509->g_310.f1", print_hash_value);
    transparent_crc(p_509->g_310.f2, "p_509->g_310.f2", print_hash_value);
    transparent_crc(p_509->g_310.f3, "p_509->g_310.f3", print_hash_value);
    transparent_crc(p_509->g_310.f4, "p_509->g_310.f4", print_hash_value);
    transparent_crc(p_509->g_310.f5, "p_509->g_310.f5", print_hash_value);
    transparent_crc(p_509->g_310.f6, "p_509->g_310.f6", print_hash_value);
    transparent_crc(p_509->g_310.f7.f0, "p_509->g_310.f7.f0", print_hash_value);
    transparent_crc(p_509->g_329, "p_509->g_329", print_hash_value);
    transparent_crc(p_509->g_337.f0, "p_509->g_337.f0", print_hash_value);
    transparent_crc(p_509->g_344.s0, "p_509->g_344.s0", print_hash_value);
    transparent_crc(p_509->g_344.s1, "p_509->g_344.s1", print_hash_value);
    transparent_crc(p_509->g_344.s2, "p_509->g_344.s2", print_hash_value);
    transparent_crc(p_509->g_344.s3, "p_509->g_344.s3", print_hash_value);
    transparent_crc(p_509->g_344.s4, "p_509->g_344.s4", print_hash_value);
    transparent_crc(p_509->g_344.s5, "p_509->g_344.s5", print_hash_value);
    transparent_crc(p_509->g_344.s6, "p_509->g_344.s6", print_hash_value);
    transparent_crc(p_509->g_344.s7, "p_509->g_344.s7", print_hash_value);
    transparent_crc(p_509->g_347.s0, "p_509->g_347.s0", print_hash_value);
    transparent_crc(p_509->g_347.s1, "p_509->g_347.s1", print_hash_value);
    transparent_crc(p_509->g_347.s2, "p_509->g_347.s2", print_hash_value);
    transparent_crc(p_509->g_347.s3, "p_509->g_347.s3", print_hash_value);
    transparent_crc(p_509->g_347.s4, "p_509->g_347.s4", print_hash_value);
    transparent_crc(p_509->g_347.s5, "p_509->g_347.s5", print_hash_value);
    transparent_crc(p_509->g_347.s6, "p_509->g_347.s6", print_hash_value);
    transparent_crc(p_509->g_347.s7, "p_509->g_347.s7", print_hash_value);
    transparent_crc(p_509->g_347.s8, "p_509->g_347.s8", print_hash_value);
    transparent_crc(p_509->g_347.s9, "p_509->g_347.s9", print_hash_value);
    transparent_crc(p_509->g_347.sa, "p_509->g_347.sa", print_hash_value);
    transparent_crc(p_509->g_347.sb, "p_509->g_347.sb", print_hash_value);
    transparent_crc(p_509->g_347.sc, "p_509->g_347.sc", print_hash_value);
    transparent_crc(p_509->g_347.sd, "p_509->g_347.sd", print_hash_value);
    transparent_crc(p_509->g_347.se, "p_509->g_347.se", print_hash_value);
    transparent_crc(p_509->g_347.sf, "p_509->g_347.sf", print_hash_value);
    transparent_crc(p_509->g_348.x, "p_509->g_348.x", print_hash_value);
    transparent_crc(p_509->g_348.y, "p_509->g_348.y", print_hash_value);
    transparent_crc(p_509->g_373, "p_509->g_373", print_hash_value);
    transparent_crc(p_509->g_388.s0, "p_509->g_388.s0", print_hash_value);
    transparent_crc(p_509->g_388.s1, "p_509->g_388.s1", print_hash_value);
    transparent_crc(p_509->g_388.s2, "p_509->g_388.s2", print_hash_value);
    transparent_crc(p_509->g_388.s3, "p_509->g_388.s3", print_hash_value);
    transparent_crc(p_509->g_388.s4, "p_509->g_388.s4", print_hash_value);
    transparent_crc(p_509->g_388.s5, "p_509->g_388.s5", print_hash_value);
    transparent_crc(p_509->g_388.s6, "p_509->g_388.s6", print_hash_value);
    transparent_crc(p_509->g_388.s7, "p_509->g_388.s7", print_hash_value);
    transparent_crc(p_509->g_388.s8, "p_509->g_388.s8", print_hash_value);
    transparent_crc(p_509->g_388.s9, "p_509->g_388.s9", print_hash_value);
    transparent_crc(p_509->g_388.sa, "p_509->g_388.sa", print_hash_value);
    transparent_crc(p_509->g_388.sb, "p_509->g_388.sb", print_hash_value);
    transparent_crc(p_509->g_388.sc, "p_509->g_388.sc", print_hash_value);
    transparent_crc(p_509->g_388.sd, "p_509->g_388.sd", print_hash_value);
    transparent_crc(p_509->g_388.se, "p_509->g_388.se", print_hash_value);
    transparent_crc(p_509->g_388.sf, "p_509->g_388.sf", print_hash_value);
    transparent_crc(p_509->g_410.x, "p_509->g_410.x", print_hash_value);
    transparent_crc(p_509->g_410.y, "p_509->g_410.y", print_hash_value);
    transparent_crc(p_509->g_410.z, "p_509->g_410.z", print_hash_value);
    transparent_crc(p_509->g_410.w, "p_509->g_410.w", print_hash_value);
    transparent_crc(p_509->g_415.x, "p_509->g_415.x", print_hash_value);
    transparent_crc(p_509->g_415.y, "p_509->g_415.y", print_hash_value);
    transparent_crc(p_509->g_415.z, "p_509->g_415.z", print_hash_value);
    transparent_crc(p_509->g_415.w, "p_509->g_415.w", print_hash_value);
    transparent_crc(p_509->g_443.s0, "p_509->g_443.s0", print_hash_value);
    transparent_crc(p_509->g_443.s1, "p_509->g_443.s1", print_hash_value);
    transparent_crc(p_509->g_443.s2, "p_509->g_443.s2", print_hash_value);
    transparent_crc(p_509->g_443.s3, "p_509->g_443.s3", print_hash_value);
    transparent_crc(p_509->g_443.s4, "p_509->g_443.s4", print_hash_value);
    transparent_crc(p_509->g_443.s5, "p_509->g_443.s5", print_hash_value);
    transparent_crc(p_509->g_443.s6, "p_509->g_443.s6", print_hash_value);
    transparent_crc(p_509->g_443.s7, "p_509->g_443.s7", print_hash_value);
    transparent_crc(p_509->g_443.s8, "p_509->g_443.s8", print_hash_value);
    transparent_crc(p_509->g_443.s9, "p_509->g_443.s9", print_hash_value);
    transparent_crc(p_509->g_443.sa, "p_509->g_443.sa", print_hash_value);
    transparent_crc(p_509->g_443.sb, "p_509->g_443.sb", print_hash_value);
    transparent_crc(p_509->g_443.sc, "p_509->g_443.sc", print_hash_value);
    transparent_crc(p_509->g_443.sd, "p_509->g_443.sd", print_hash_value);
    transparent_crc(p_509->g_443.se, "p_509->g_443.se", print_hash_value);
    transparent_crc(p_509->g_443.sf, "p_509->g_443.sf", print_hash_value);
    transparent_crc(p_509->g_458, "p_509->g_458", print_hash_value);
    transparent_crc(p_509->g_497.x, "p_509->g_497.x", print_hash_value);
    transparent_crc(p_509->g_497.y, "p_509->g_497.y", print_hash_value);
    transparent_crc(p_509->g_497.z, "p_509->g_497.z", print_hash_value);
    transparent_crc(p_509->g_497.w, "p_509->g_497.w", print_hash_value);
    transparent_crc(p_509->v_collective, "p_509->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 56; i++)
            transparent_crc(p_509->l_special_values[i], "p_509->l_special_values[i]", print_hash_value);
    transparent_crc(p_509->l_comm_values[get_linear_local_id()], "p_509->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_509->g_comm_values[get_linear_group_id() * 90 + get_linear_local_id()], "p_509->g_comm_values[get_linear_group_id() * 90 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
