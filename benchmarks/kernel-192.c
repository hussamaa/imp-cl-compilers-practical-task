// --atomics 64 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 11,52,7 -l 1,13,7
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

__constant uint32_t permutations[10][91] = {
{86,76,2,8,27,38,53,7,37,47,90,15,56,19,28,63,3,59,23,12,14,61,18,31,84,77,66,82,1,65,0,51,34,24,87,85,35,60,70,32,40,45,58,42,73,21,25,9,46,29,75,83,71,64,11,16,54,44,88,39,20,55,26,13,72,41,48,33,52,43,49,74,62,67,68,36,4,30,10,22,79,81,6,5,69,80,17,78,89,57,50}, // permutation 0
{13,22,70,3,83,71,68,30,36,23,39,81,18,35,42,12,0,60,63,31,45,32,78,66,7,69,28,8,87,47,41,16,90,43,67,58,25,85,64,34,72,88,38,26,65,86,6,75,10,61,56,74,20,76,24,80,2,27,57,53,21,5,55,84,33,50,9,48,46,73,1,54,40,14,89,82,49,59,17,62,15,51,11,29,44,19,79,52,77,37,4}, // permutation 1
{18,8,66,48,72,32,34,89,58,47,9,33,75,85,62,16,30,76,86,44,39,64,17,81,57,65,13,7,77,0,51,23,78,26,19,49,45,87,82,14,61,55,22,38,88,46,10,2,50,69,83,28,68,73,43,54,70,84,74,15,53,1,25,52,56,59,29,63,35,12,67,6,40,5,36,20,80,60,90,24,11,4,27,21,71,3,41,79,31,37,42}, // permutation 2
{49,75,57,7,76,79,44,69,13,36,47,80,22,28,11,12,18,86,4,24,88,74,70,71,8,60,84,68,34,65,81,26,67,16,42,54,25,35,41,50,85,56,59,19,14,33,5,62,2,9,15,40,23,3,38,31,10,53,30,82,48,0,89,58,90,17,51,45,1,27,87,55,52,78,21,46,43,66,64,29,20,39,83,61,72,32,77,73,6,63,37}, // permutation 3
{77,26,41,12,27,73,48,45,16,75,25,81,32,63,69,22,59,20,67,40,86,71,58,61,65,82,54,18,31,62,13,79,11,0,55,47,7,1,10,78,3,76,57,36,2,51,70,50,39,14,37,72,83,66,4,21,53,33,6,29,17,85,49,88,34,74,5,60,84,15,19,28,30,44,68,24,64,87,89,46,38,52,9,80,42,43,90,35,56,8,23}, // permutation 4
{68,65,64,82,52,11,83,31,22,28,0,76,70,58,54,38,13,62,46,16,14,69,41,8,66,32,79,12,30,44,75,27,26,24,72,37,53,61,34,73,59,7,43,67,3,9,89,87,90,55,1,45,39,19,71,20,60,78,88,63,21,74,51,25,50,56,47,42,57,77,36,29,81,85,49,15,48,5,17,6,86,84,33,23,80,10,18,2,40,35,4}, // permutation 5
{75,90,18,23,61,63,50,82,13,16,21,40,65,44,81,45,7,62,64,85,26,28,66,10,29,9,67,0,47,22,86,39,87,58,43,51,6,52,57,80,79,15,72,38,41,17,88,3,12,42,76,36,11,60,32,73,34,25,35,37,49,89,20,46,53,19,14,71,48,1,31,8,33,24,68,55,84,74,83,2,4,69,54,27,30,56,78,5,70,77,59}, // permutation 6
{28,5,30,41,48,87,88,53,45,25,60,18,62,44,64,17,74,12,47,67,89,73,26,43,13,42,49,79,10,68,7,71,81,16,66,20,34,59,22,70,35,19,63,69,78,76,86,33,24,51,32,40,21,65,36,15,61,29,23,90,27,85,4,77,11,14,0,83,38,72,58,9,37,6,46,82,2,56,50,1,80,84,52,55,75,3,57,54,8,31,39}, // permutation 7
{85,21,89,15,81,82,87,14,68,60,35,58,50,20,38,52,28,26,31,41,83,79,23,29,78,73,42,3,63,25,7,19,69,5,77,36,33,86,8,30,34,12,39,22,80,70,13,71,53,56,48,84,9,6,76,66,55,46,45,16,54,2,64,59,18,67,88,32,75,65,1,43,57,72,44,51,47,37,74,62,17,40,49,4,61,90,11,10,0,27,24}, // permutation 8
{74,68,67,15,33,58,10,34,39,37,71,69,44,26,9,84,56,42,36,60,40,8,65,22,85,12,55,19,38,23,4,76,35,30,18,87,62,1,61,88,73,83,0,75,53,57,17,89,81,5,63,11,59,45,7,13,54,86,3,21,41,20,77,70,78,79,27,46,28,25,16,64,52,66,14,48,2,29,31,51,47,6,72,90,82,80,49,24,43,32,50} // permutation 9
};

// Seed: 3076913781

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   volatile uint32_t  f2;
   uint64_t  f3;
   uint64_t  f4;
   volatile int16_t  f5;
   int32_t  f6;
   int32_t  f7;
   uint32_t  f8;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   int32_t  f0;
   volatile int64_t  f1;
   int32_t  f2;
   volatile int64_t  f3;
};

union U3 {
   volatile struct S0  f0;
};

struct S4 {
    volatile VECTOR(int16_t, 16) g_20;
    uint8_t g_39;
    union U3 g_44[1];
    int32_t g_51;
    int32_t *g_56;
    uint16_t g_58;
    volatile VECTOR(uint64_t, 16) g_65;
    volatile VECTOR(int32_t, 8) g_77;
    VECTOR(int32_t, 8) g_78;
    VECTOR(int32_t, 4) g_79;
    volatile VECTOR(int32_t, 16) g_81;
    int16_t g_89;
    int16_t g_106;
    int32_t * volatile g_110;
    union U1 g_126;
    volatile VECTOR(int16_t, 2) g_128;
    int32_t g_157;
    uint16_t g_219;
    uint32_t g_242;
    uint16_t g_243;
    int32_t * volatile g_276;
    volatile int32_t g_287;
    int32_t * volatile g_291[6][2][9];
    volatile union U2 g_311;
    int8_t g_323;
    int32_t g_344[1];
    union U1 **g_352;
    union U1 *** volatile g_351[4][5][10];
    int32_t ** volatile g_370[3];
    uint32_t g_378;
    uint32_t g_382;
    int32_t * volatile ** volatile g_401;
    VECTOR(int64_t, 8) g_416;
    uint32_t g_417[5][1];
    union U3 g_419;
    volatile int32_t g_420;
    int16_t g_425;
    int16_t *g_424;
    int16_t **g_423;
    int16_t *** volatile g_422[3][8][5];
    int32_t g_442;
    volatile VECTOR(int32_t, 4) g_443;
    VECTOR(uint64_t, 4) g_449;
    int32_t g_450;
    uint8_t g_465;
    volatile VECTOR(uint16_t, 16) g_468;
    int16_t g_485[1];
    VECTOR(int64_t, 8) g_494;
    VECTOR(int8_t, 4) g_497;
    struct S0 g_501;
    int32_t * volatile g_504;
    uint32_t g_514;
    volatile struct S0 g_517;
    int32_t * volatile g_533;
    int32_t * volatile g_534;
    uint8_t *g_549[5];
    union U2 g_560[10];
    int32_t ** volatile g_562;
    VECTOR(int8_t, 8) g_567;
    volatile VECTOR(int8_t, 8) g_568;
    volatile VECTOR(int8_t, 8) g_571;
    uint32_t *g_572;
    VECTOR(int8_t, 16) g_577;
    volatile VECTOR(int8_t, 8) g_578;
    volatile VECTOR(int32_t, 16) g_581;
    VECTOR(uint16_t, 4) g_590;
    struct S0 g_618[8];
    int32_t * volatile g_633;
    VECTOR(uint16_t, 16) g_643;
    int64_t g_649;
    VECTOR(int8_t, 16) g_674;
    VECTOR(int8_t, 4) g_675;
    VECTOR(int64_t, 4) g_678;
    int32_t ** volatile g_688;
    struct S0 * volatile g_692;
    struct S0 * volatile g_693;
    uint32_t **g_697[2][4];
    VECTOR(int16_t, 2) g_706;
    int32_t ** volatile g_711[8];
    union U1 *g_728[1];
    union U1 ** volatile g_727[10];
    VECTOR(int64_t, 16) g_749;
    VECTOR(int64_t, 8) g_750;
    volatile VECTOR(int16_t, 16) g_757;
    volatile VECTOR(int8_t, 16) g_758;
    uint16_t g_771;
    volatile VECTOR(int16_t, 4) g_783;
    volatile int32_t g_790[3][7];
    VECTOR(uint64_t, 2) g_798;
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
int32_t  func_1(struct S4 * p_809);
int16_t  func_4(uint32_t  p_5, uint64_t  p_6, struct S4 * p_809);
int32_t  func_7(int32_t  p_8, uint64_t  p_9, union U1  p_10, int8_t  p_11, int32_t  p_12, struct S4 * p_809);
struct S0  func_13(uint32_t  p_14, uint32_t  p_15, struct S4 * p_809);
int16_t  func_21(int32_t  p_22, uint64_t  p_23, int32_t  p_24, int16_t  p_25, struct S4 * p_809);
uint16_t  func_34(int32_t  p_35, uint8_t  p_36, int64_t  p_37, struct S4 * p_809);
int32_t * func_47(int32_t * p_48, struct S4 * p_809);
int8_t  func_69(int16_t  p_70, int32_t  p_71, struct S4 * p_809);
uint16_t  func_91(int32_t  p_92, struct S4 * p_809);
union U1  func_115(int64_t  p_116, uint32_t  p_117, struct S4 * p_809);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_809->l_comm_values p_809->g_20 p_809->g_39 p_809->g_44 p_809->g_comm_values p_809->g_44.f0.f7 p_809->g_65 p_809->g_44.f0.f4 p_809->g_58 p_809->g_51 p_809->g_77 p_809->g_78 p_809->g_79 p_809->g_81 p_809->g_89 p_809->g_44.f0.f3 p_809->g_110 p_809->g_128 p_809->g_126 p_809->g_157 p_809->g_44.f0.f8 p_809->g_106 p_809->g_44.f0.f5 p_809->g_378 p_809->g_424 p_809->g_425 p_809->g_276 p_809->g_442 p_809->g_443 p_809->g_449 p_809->g_450 p_809->g_382 p_809->g_344 p_809->g_242 p_809->g_44.f0 p_809->g_419.f0.f0 p_809->g_468 p_809->g_465 p_809->g_419.f0.f3 p_809->g_419.f0 p_809->g_504 p_809->g_514 p_809->g_517 p_809->g_323 p_809->g_534 p_809->g_501.f7 p_809->g_311.f0 p_809->g_562 p_809->g_56 p_809->g_581 p_809->g_287 p_809->g_590 p_809->g_501.f6 p_809->g_501.f0 p_809->g_243 p_809->g_501.f8 p_809->g_633 p_809->g_643 p_809->g_649 p_809->g_560 p_809->g_577 p_809->g_674 p_809->g_675 p_809->g_678 p_809->g_618.f3 p_809->g_416 p_809->g_688 p_809->g_693 p_809->g_485 p_809->g_706 p_809->g_618.f4 p_809->g_618.f2 p_809->g_749 p_809->g_750 p_809->g_757 p_809->g_758 p_809->g_771 p_809->g_618.f5 p_809->g_618.f0 p_809->g_494 p_809->g_618.f1 p_809->g_783 p_809->g_790 p_809->g_798
 * writes: p_809->g_39 p_809->g_56 p_809->g_58 p_809->g_51 p_809->g_89 p_809->g_110 p_809->g_78 p_809->g_106 p_809->g_219 p_809->g_243 p_809->g_423 p_809->g_425 p_809->g_442 p_809->g_450 p_809->g_419.f0 p_809->g_465 p_809->g_382 p_809->g_485 p_809->g_242 p_809->g_514 p_809->g_497 p_809->g_501.f7 p_809->g_549 p_809->g_417 p_809->g_501.f0 p_809->g_618 p_809->g_501.f8 p_809->g_590 p_809->g_697 p_809->g_501 p_809->g_416 p_809->g_560.f2
 */
int32_t  func_1(struct S4 * p_809)
{ /* block id: 4 */
    uint16_t l_16 = 0x46E3L;
    VECTOR(int16_t, 2) l_19 = (VECTOR(int16_t, 2))(0x5257L, 1L);
    uint8_t *l_38 = &p_809->g_39;
    uint16_t *l_57 = &p_809->g_58;
    VECTOR(int8_t, 16) l_61 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x72L), 0x72L), 0x72L, 8L, 0x72L, (VECTOR(int8_t, 2))(8L, 0x72L), (VECTOR(int8_t, 2))(8L, 0x72L), 8L, 0x72L, 8L, 0x72L);
    VECTOR(int8_t, 16) l_62 = (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, (-1L)), (-1L)), (-1L), 0x1AL, (-1L), (VECTOR(int8_t, 2))(0x1AL, (-1L)), (VECTOR(int8_t, 2))(0x1AL, (-1L)), 0x1AL, (-1L), 0x1AL, (-1L));
    VECTOR(int8_t, 4) l_63 = (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x59L), 0x59L);
    int32_t *l_64 = &p_809->g_51;
    VECTOR(uint64_t, 8) l_66 = (VECTOR(uint64_t, 8))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551607UL, 18446744073709551608UL);
    union U1 l_74 = {0UL};
    int8_t *l_447[1][8];
    int16_t l_448[9][1][2] = {{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}},{{0x6A26L,9L}}};
    int16_t l_452 = 1L;
    uint32_t l_684 = 0x196B6F58L;
    VECTOR(int16_t, 2) l_707 = (VECTOR(int16_t, 2))((-5L), 1L);
    union U1 *l_729[10][4] = {{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0},{&l_74,(void*)0,&p_809->g_126,(void*)0}};
    int32_t *l_730 = (void*)0;
    int32_t *l_731 = &p_809->g_501.f7;
    int32_t *l_732 = (void*)0;
    int32_t *l_733 = &p_809->g_501.f6;
    int32_t *l_734 = &p_809->g_618[4].f0;
    int32_t *l_735 = &p_809->g_501.f6;
    int32_t *l_736 = &p_809->g_501.f7;
    int32_t *l_737 = (void*)0;
    int32_t *l_738 = &p_809->g_618[4].f6;
    int32_t *l_739 = &p_809->g_501.f6;
    int32_t *l_740 = &p_809->g_501.f0;
    int32_t *l_741 = &p_809->g_560[9].f2;
    int32_t *l_742 = &p_809->g_560[9].f2;
    int32_t *l_743[7][5][6] = {{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}},{{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0},{(void*)0,&p_809->g_618[4].f6,(void*)0,&p_809->g_442,&p_809->g_51,(void*)0}}};
    uint16_t l_744 = 7UL;
    int8_t l_772[9][6] = {{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL},{0x22L,0x51L,0x7FL,0x22L,(-8L),0x7FL}};
    VECTOR(int64_t, 16) l_796 = (VECTOR(int64_t, 16))(0x143A94EB5FA3DEDAL, (VECTOR(int64_t, 4))(0x143A94EB5FA3DEDAL, (VECTOR(int64_t, 2))(0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L), 0x71C4CCC847A916B7L), 0x71C4CCC847A916B7L, 0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L, (VECTOR(int64_t, 2))(0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L), (VECTOR(int64_t, 2))(0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L), 0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L, 0x143A94EB5FA3DEDAL, 0x71C4CCC847A916B7L);
    uint8_t l_797 = 0xA2L;
    union U2 *l_803 = &p_809->g_560[6];
    union U2 *l_805 = &p_809->g_560[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_447[i][j] = &p_809->g_323;
    }
    if ((safe_lshift_func_uint16_t_u_s((func_4(((func_7((func_13((l_16 &= p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]), (safe_rshift_func_int16_t_s_u((((*l_38) = ((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_19.yxyxxyxy)).even)))), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_809->g_20.sc7eb)))), func_21((safe_add_func_int64_t_s_s((((VECTOR(int64_t, 16))((safe_rshift_func_int16_t_s_u(((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((*l_57) = func_34(l_19.y, (--(*l_38)), (safe_lshift_func_int16_t_s_s((p_809->g_44[0] , (-6L)), 10)), p_809)) , (((*l_64) = (safe_add_func_uint8_t_u_u(p_809->g_44[0].f0.f7, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))((-1L), (-1L))), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(8L, (-6L))).xxyy, ((VECTOR(int8_t, 16))(l_61.s6b06574f207e8793)).seb10))).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_62.s6c011945b4e60d2e)))).s65))).yyyxyxyy, ((VECTOR(int8_t, 16))(l_63.yyyxzyxxxyxwxxyw)).even))).s3))) || ((p_809->g_450 ^= ((*p_809->g_424) = (((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_809->g_65.s23)))).yxxyyxyx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 4))(l_66.s5735)).yxyzzwwywzwwwyyz, ((VECTOR(uint64_t, 4))((safe_lshift_func_uint8_t_u_s(1UL, (l_448[1][0][1] ^= func_69((safe_rshift_func_int8_t_s_u(p_809->g_44[0].f0.f4, (l_74 , p_809->g_58))), (*l_64), p_809)))), (*l_64), 0x322DBA714309F89FL, 0xC86F418C98ADC8EFL)).xxzzwxwyxyywwwxy))))).odd))))).s22, ((VECTOR(uint64_t, 2))(0x02CF01B28245D3F4L)), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).even , p_809->g_449.z))) > 0x3A1AL))), p_809->g_79.w)), p_809->g_79.w)) >= p_809->g_382) , p_809->g_449.y) < 0x01L), 13)), p_809->g_81.sd, ((VECTOR(int64_t, 4))(0x5C7C77783C918CB4L)), ((VECTOR(int64_t, 2))(1L)), 0x57191BC615743BF8L, 1L, p_809->g_20.sb, 0x287D7D18B73472D7L, 0x725FDB4E484D87E8L, (*l_64), 2L, 0x0D002023BBBA7AC0L)).s3 > p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]), p_809->g_344[0])), p_809->g_79.z, p_809->g_242, l_19.y, p_809), 0x1C92L, 0x69B1L, (*l_64), (-1L), (*l_64), (-1L), 0x46C9L, 0L, ((VECTOR(int16_t, 2))((-8L))), 0x6674L)).lo, ((VECTOR(int16_t, 8))(0L))))), ((VECTOR(int16_t, 2))(6L)), 3L, (-1L))).sb0)).lo >= l_452) >= 0x71D3L) || GROUP_DIVERGE(1, 1)) >= p_809->g_79.y)) & p_809->g_157), p_809->g_449.z)), p_809) , 0x6E5348C8L), l_63.y, p_809->g_126, p_809->g_comm_values[p_809->tid], p_809->g_comm_values[p_809->tid], p_809) , 7L) < 0x247BL), p_809->g_449.y, p_809) ^ l_19.x), 2)))
    { /* block id: 245 */
        uint32_t l_646 = 0x81E66FB0L;
        VECTOR(uint16_t, 16) l_660 = (VECTOR(uint16_t, 16))(0xD8EEL, (VECTOR(uint16_t, 4))(0xD8EEL, (VECTOR(uint16_t, 2))(0xD8EEL, 1UL), 1UL), 1UL, 0xD8EEL, 1UL, (VECTOR(uint16_t, 2))(0xD8EEL, 1UL), (VECTOR(uint16_t, 2))(0xD8EEL, 1UL), 0xD8EEL, 1UL, 0xD8EEL, 1UL);
        uint32_t *l_665 = &p_809->g_382;
        int64_t *l_676[2];
        VECTOR(int32_t, 4) l_677 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L);
        uint32_t *l_679 = &p_809->g_501.f8;
        int32_t *l_687 = &p_809->g_501.f0;
        uint32_t l_708 = 4294967295UL;
        union U1 l_713 = {0x5B7EE9D1L};
        int32_t l_726 = 4L;
        int i;
        for (i = 0; i < 2; i++)
            l_676[i] = &p_809->g_649;
        (*l_64) = ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((*l_38) &= ((safe_mod_func_uint16_t_u_u(((*l_57) = ((VECTOR(uint16_t, 4))(p_809->g_643.seef2)).z), (((safe_rshift_func_uint8_t_u_u(l_646, ((safe_sub_func_uint32_t_u_u(p_809->g_649, (l_646 & (((p_809->g_419.f0.f7 , ((*l_64) && (((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int8_t_s_s((0x11L ^ (!((safe_lshift_func_int16_t_s_u(((*p_809->g_424) = ((safe_rshift_func_int16_t_s_u((*l_64), (safe_unary_minus_func_uint64_t_u(0xE7F47D34231EB4E6L)))) > (p_809->g_560[1] , 65528UL))), p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))])) > l_646))), 1)))) & (*l_64)) == (*l_64)))) || (-1L)) == (*l_64))))) <= 7UL))) ^ p_809->g_comm_values[p_809->tid]) & 0xBCL))) <= 1UL)), (*l_64))) == l_646) , l_660.s6), l_660.s5)), p_809->g_577.s7)) <= p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]);
        if ((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((l_665 = func_47((*p_809->g_562), p_809)) != l_64), 2)), (safe_div_func_int64_t_s_s((((--p_809->g_590.z) | ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_809->g_674.s06)), 1L, 0x1EL)), (-1L), 0x10L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_809->g_675.yywzyywyywyxzyzx)).even)).s5, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x19L, ((VECTOR(int8_t, 4))(1L, (p_809->g_79.x & (((l_677.z = 0x219CA33905D3D7E0L) != ((VECTOR(int64_t, 2))(p_809->g_678.ww)).odd) || (p_809->g_577.sc && (((*l_64) == 18446744073709551615UL) | (((*l_679) = ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((l_677.y , p_809->g_618[4].f3), 0x9E56CDC0L, 0xB1B9B458L, 0xD7702CE8L)), (*l_64), 0UL, 4294967289UL, 1UL)).s3) <= p_809->g_416.s4))))), 0x39L, 0x5CL)), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0x4FL)), ((VECTOR(int8_t, 2))(0x52L)), 0x55L, 1L, 0x24L)).sc4)).yxyy, ((VECTOR(int8_t, 4))(1L))))), 0x27L, p_809->g_674.se, (-1L), 7L, 0x51L)).sabe9)).wxzwzwwxwywyzyxx, ((VECTOR(uint8_t, 16))(7UL))))).sf == 0UL), 10)), (*l_64))) || l_646)) != 3L), (*l_64))))))
        { /* block id: 254 */
            int32_t *l_680 = (void*)0;
            int32_t *l_681 = &p_809->g_501.f0;
            int32_t *l_682 = (void*)0;
            int32_t *l_683[8];
            int i;
            for (i = 0; i < 8; i++)
                l_683[i] = (void*)0;
            --l_684;
            (*p_809->g_688) = l_687;
        }
        else
        { /* block id: 257 */
            int16_t l_691 = 0x2CE2L;
            uint32_t ***l_696 = (void*)0;
            struct S0 *l_709 = &p_809->g_501;
            int32_t *l_710 = (void*)0;
            int32_t **l_712 = &l_64;
            (*p_809->g_693) = func_13(((safe_lshift_func_int16_t_s_s((*l_687), 5)) , (+p_809->g_242)), l_691, p_809);
            (*l_709) = func_13(((((VECTOR(int64_t, 16))(1L, (safe_div_func_uint32_t_u_u((((VECTOR(uint8_t, 2))(0x95L, 0xB3L)).even > 0xD8L), ((*l_687) &= l_691))), (((p_809->g_697[1][3] = (void*)0) == &p_809->g_572) || (0L <= ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(65529UL, ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(p_809->g_485[0], 0x3828CAB2E993BCFCL)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_809->g_706.yy)).xyxyxxyyxxyyxyxy)).s3c9c)).yxwwwzyw, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_707.xxyxxxxy)).s23)).xxyyyxyy))).s7)) <= p_809->g_577.s4))), 1)) || 0x2BL) || l_691) != p_809->g_311.f0))), (-1L), ((VECTOR(int64_t, 4))((-5L))), (-10L), ((VECTOR(int64_t, 2))((-1L))), 0x283DD5E98F10BFE6L, (*l_687), l_691, 0x6C3125FA17ADF588L, 9L)).s8 == 0xC174AB4DDCA34514L) || 0x89C5L), l_708, p_809);
            (*l_712) = l_710;
        }
        (*l_687) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_713 , (*p_809->g_276)), 0x2492EA4FL, 6L, (*l_687), (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((65527UL == (safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((-1L), 4)), GROUP_DIVERGE(1, 1))), (((p_809->g_618[4].f4 && (*l_687)) && (p_809->g_77.s5 | (safe_div_func_int8_t_s_s((l_726 = ((*l_687) | 0x10E0L)), (*l_687))))) , p_809->g_618[4].f2)))), 0x7454C9A9L)), (*l_687))), 0x7540A06EL, 0x4447568EL, ((VECTOR(int32_t, 4))(0L)), (-1L), ((VECTOR(int32_t, 2))((-1L))), (-10L), 0x6E865557L)).lo)))).s2;
        return p_809->g_comm_values[p_809->tid];
    }
    else
    { /* block id: 267 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_809->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[(safe_mod_func_uint32_t_u_u(4294967295UL, 10))][(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]));
    }
    l_729[3][2] = &l_74;
    l_744--;
    if (((((((VECTOR(uint16_t, 8))(0x3038L, 65527UL, (safe_add_func_int64_t_s_s((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(p_809->g_749.s5b26ef22)).s3571117457202352))).s87)).yxyxyyxxyxyxxxyx, ((VECTOR(int64_t, 8))(p_809->g_750.s71122277)).s3721264437420425))).seeb2, ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(0x433EA8A6FD14AC9CL, ((VECTOR(int64_t, 2))(0x15E6BEA34383C64FL, 0x2EE616BC42D4BCC3L)), 0x60DD82B1846FF248L)).xxxwxxwzyxywyyww, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(3L, (safe_add_func_uint64_t_u_u(((void*)0 == l_734), (((*p_809->g_424) = (safe_lshift_func_uint16_t_u_u((((((((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_809->g_757.s0f)).yyyxxxyx)), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(8L, 0x4BL, 0x60L, 0L)).ywxyzzzy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x60L, 0x6FL)))).yyyyyyxy)).s44)).xxxxyyyy, ((VECTOR(int8_t, 16))(p_809->g_758.s3e022586d858c8a4)).lo))).s06, ((VECTOR(uint8_t, 16))(0xDBL, 0xC7L, ((VECTOR(uint8_t, 4))(((-1L) ^ ((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), 0x626D1D08B9DB73A3L)) > (safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((p_809->g_501.f0 == (FAKE_DIVERGE(p_809->local_2_offset, get_local_id(2), 10) , ((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_mod_func_int16_t_s_s((*l_735), 5L)))) , ((safe_lshift_func_int8_t_s_u((-1L), (&p_809->g_618[4] == &p_809->g_517))) ^ (*l_736))))), 2)) || p_809->g_44[0].f0.f2), p_809->g_675.w)))), ((VECTOR(uint8_t, 2))(0UL)), 254UL)), 0x98L, ((VECTOR(uint8_t, 4))(1UL)), 0xECL, ((VECTOR(uint8_t, 2))(0xEBL)), 0x60L, 0x7AL)).sdc))).yxyxxyyy))).s3, 4)) , 0L) >= p_809->g_78.s6) > p_809->g_771) , (*l_739)) >= p_809->g_89) && p_809->g_618[4].f5), 8))) == p_809->g_79.w))), (*l_734), 0x59427323339E28F7L, p_809->g_494.s2, (*l_734), (*l_740), ((VECTOR(int64_t, 4))(0x01F086201EB1E7B8L)), ((VECTOR(int64_t, 4))(1L)), 0x4D795FB368C63301L)).sffd4, ((VECTOR(int64_t, 4))(0x2527A059F5B944D7L))))).xzyzyyyywwxyxxzy)))))).s0a7e))), ((VECTOR(int64_t, 4))(3L))))).wywyxzyywxxyxzxx, ((VECTOR(int64_t, 16))(0x0B71DD49C8D0DBC3L))))).hi)), ((VECTOR(int64_t, 8))(1L)))).sb3)).lo || p_809->g_465), p_809->g_618[4].f1)), ((VECTOR(uint16_t, 4))(0x63A6L)), 0xEE29L)).s0 <= (*l_734)) ^ l_772[2][1]) >= (*l_740)) != 0x65EF0B98L))
    { /* block id: 275 */
        VECTOR(int64_t, 4) l_779 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x06AAA1F966AE6408L), 0x06AAA1F966AE6408L);
        int64_t *l_780[5][7][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_809->g_649,(void*)0,(void*)0}}};
        int32_t l_786 = 0x2BCA38A2L;
        uint16_t *l_789 = &p_809->g_501.f1;
        uint8_t **l_793 = (void*)0;
        union U2 **l_804 = &l_803;
        int i, j, k;
        (*l_734) &= (((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((*l_740), ((((p_809->g_416.s6 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_779.wwxxxwxzzwywyyxy)).s04)).yxyy)).even)).hi) & (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_809->g_783.xzzxzxzyzzxwwzwz)).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((-5L), 0x55F7L, (-10L), ((VECTOR(int16_t, 4))(0x080AL, (*l_735), 0L, 2L)), 7L, 0x1879L, (((*l_739) < (safe_lshift_func_uint16_t_u_u(((*l_789) = ((*l_57)++)), p_809->g_790[0][4]))) && p_809->g_442), ((VECTOR(int16_t, 4))((-6L), 0x1EABL, (-2L), 0x54FBL)), 0L, 0x0900L)).sa5)).xxyxyyxy)), ((VECTOR(int16_t, 2))(0L, 0x0A2CL)).xxxxyyyx))).even)).w, (safe_lshift_func_uint16_t_u_s(((void*)0 == l_793), 4))))) >= ((*l_38) = (safe_sub_func_int64_t_s_s((l_797 |= ((VECTOR(int64_t, 2))(l_796.s8d)).hi), ((VECTOR(uint64_t, 2))(p_809->g_798.xx)).even)))) != (safe_add_func_int64_t_s_s(0x72F83CB4051E219CL, (((((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_809->local_2_offset, get_local_id(2), 10), (*l_731))) == p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]) , FAKE_DIVERGE(p_809->group_0_offset, get_group_id(0), 10)) || 0x05510D64L) != (-1L))))))), (*l_733))), p_809->g_501.f0)), ((VECTOR(int64_t, 4))(0L)), 0x49DCAA75B61F85E4L, (-1L), 9L)).s5643161524220277, ((VECTOR(int64_t, 16))((-9L))), ((VECTOR(int64_t, 16))(7L))))).s0 , 0x072DA853L);
        (*l_742) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((+(((*l_804) = l_803) == l_805)), 0x273D06B4L, 4L, 0x34FB92C4L)).even)).hi;
    }
    else
    { /* block id: 284 */
        uint16_t l_806 = 0xC577L;
        l_806++;
    }
    return p_809->g_416.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_243 p_809->g_504 p_809->g_442 p_809->g_44.f0 p_809->g_419.f0.f0 p_809->g_465 p_809->g_419.f0.f3 p_809->g_382 p_809->g_419.f0 p_809->g_501.f8 p_809->g_633
 * writes: p_809->g_219 p_809->g_417 p_809->g_419.f0 p_809->g_39 p_809->g_465 p_809->g_382 p_809->g_56 p_809->g_485 p_809->g_618 p_809->g_501.f8 p_809->g_442
 */
int16_t  func_4(uint32_t  p_5, uint64_t  p_6, struct S4 * p_809)
{ /* block id: 224 */
    uint16_t *l_595 = &p_809->g_219;
    VECTOR(int16_t, 16) l_596 = (VECTOR(int16_t, 16))(0x1383L, (VECTOR(int16_t, 4))(0x1383L, (VECTOR(int16_t, 2))(0x1383L, 1L), 1L), 1L, 0x1383L, 1L, (VECTOR(int16_t, 2))(0x1383L, 1L), (VECTOR(int16_t, 2))(0x1383L, 1L), 0x1383L, 1L, 0x1383L, 1L);
    uint16_t l_601[3][1];
    VECTOR(int32_t, 4) l_602 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x178D8002L), 0x178D8002L);
    int64_t *l_611 = (void*)0;
    int64_t *l_612 = (void*)0;
    int64_t *l_613 = (void*)0;
    int64_t *l_614 = (void*)0;
    int64_t *l_615 = (void*)0;
    int8_t l_616 = 0x47L;
    int8_t l_617[4][8] = {{(-4L),(-4L),2L,0x5FL,0x7BL,0x5FL,2L,(-4L)},{(-4L),(-4L),2L,0x5FL,0x7BL,0x5FL,2L,(-4L)},{(-4L),(-4L),2L,0x5FL,0x7BL,0x5FL,2L,(-4L)},{(-4L),(-4L),2L,0x5FL,0x7BL,0x5FL,2L,(-4L)}};
    int32_t *l_634 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_601[i][j] = 0x0B9EL;
    }
    p_809->g_618[4] = func_13((p_809->g_417[0][0] = (safe_add_func_uint64_t_u_u(p_6, (((*l_595) = 0x02D9L) != ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(l_596.s7613)).yzywzwyxxwxzwwww, (int16_t)(((VECTOR(uint8_t, 8))(((safe_div_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(((l_596.se && ((VECTOR(int32_t, 16))(l_596.s2, (0L >= l_601[2][0]), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_602.zwxyyywx)).hi)).odd)).xyyy, ((VECTOR(int32_t, 4))(((((l_602.x = (safe_sub_func_int16_t_s_s(l_601[1][0], ((safe_mul_func_uint16_t_u_u(l_602.z, (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((&p_809->g_572 != &p_809->g_572), 0xFAL)), l_601[2][0])))) >= l_602.z)))) | l_601[2][0]) , p_809->g_243) < (-1L)), ((VECTOR(int32_t, 2))(0x3450EA0AL)), 0x423BDD67L))))), p_6, p_5, p_6, (*p_809->g_504), ((VECTOR(int32_t, 4))((-6L))), 0L, (-7L))).s6) || 0x79L), l_616)) & 4L), p_5)) < l_617[0][3]), l_617[0][6], ((VECTOR(uint8_t, 2))(0x56L)), 0x09L, FAKE_DIVERGE(p_809->local_1_offset, get_local_id(1), 10), 0x3EL, 0UL)).s7 ^ 6L), (int16_t)l_601[2][0]))).s8)))), p_5, p_809);
    for (p_809->g_501.f8 = 0; (p_809->g_501.f8 == 6); p_809->g_501.f8++)
    { /* block id: 231 */
        if ((atomic_inc(&p_809->g_atomic_input[64 * get_linear_group_id() + 17]) == 7))
        { /* block id: 233 */
            uint8_t l_621 = 0xA3L;
            int32_t l_622[5][3][4] = {{{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L}},{{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L}},{{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L}},{{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L}},{{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L},{0x5392A122L,0L,(-4L),6L}}};
            int32_t l_624[10][5][2] = {{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}},{{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L},{(-1L),0x1E59E112L}}};
            int32_t *l_623 = &l_624[6][1][1];
            int32_t *l_625 = &l_624[6][1][1];
            struct S0 l_627 = {0x3FF1DCD9L,0x261AL,0x679D0C4AL,0xB2277D1E07C51BA1L,0UL,0x356CL,0x0AB2315CL,4L,0UL};/* VOLATILE GLOBAL l_627 */
            struct S0 *l_626[9][6] = {{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627},{&l_627,(void*)0,&l_627,&l_627,(void*)0,&l_627}};
            uint8_t l_628 = 0x8BL;
            int i, j, k;
            l_622[1][2][0] = l_621;
            l_625 = l_623;
            l_626[2][1] = (void*)0;
            l_628--;
            unsigned int result = 0;
            result += l_621;
            int l_622_i0, l_622_i1, l_622_i2;
            for (l_622_i0 = 0; l_622_i0 < 5; l_622_i0++) {
                for (l_622_i1 = 0; l_622_i1 < 3; l_622_i1++) {
                    for (l_622_i2 = 0; l_622_i2 < 4; l_622_i2++) {
                        result += l_622[l_622_i0][l_622_i1][l_622_i2];
                    }
                }
            }
            int l_624_i0, l_624_i1, l_624_i2;
            for (l_624_i0 = 0; l_624_i0 < 10; l_624_i0++) {
                for (l_624_i1 = 0; l_624_i1 < 5; l_624_i1++) {
                    for (l_624_i2 = 0; l_624_i2 < 2; l_624_i2++) {
                        result += l_624[l_624_i0][l_624_i1][l_624_i2];
                    }
                }
            }
            result += l_627.f0;
            result += l_627.f1;
            result += l_627.f2;
            result += l_627.f3;
            result += l_627.f4;
            result += l_627.f5;
            result += l_627.f6;
            result += l_627.f7;
            result += l_627.f8;
            result += l_628;
            atomic_add(&p_809->g_special_values[64 * get_linear_group_id() + 17], result);
        }
        else
        { /* block id: 238 */
            (1 + 1);
        }
    }
    (*p_809->g_633) = (safe_lshift_func_int16_t_s_s(p_6, 8));
    l_602.z &= p_6;
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_504 p_809->g_514 p_809->g_517 p_809->g_323 p_809->g_534 p_809->g_501.f7 p_809->g_311.f0 p_809->g_39 p_809->g_78 p_809->g_562 p_809->g_56 p_809->g_425 p_809->g_581 p_809->g_424 p_809->g_287 p_809->g_590 p_809->g_501.f6 p_809->g_501.f0 p_809->g_419.f0.f5
 * writes: p_809->g_442 p_809->g_242 p_809->g_514 p_809->g_450 p_809->g_497 p_809->g_501.f7 p_809->g_39 p_809->g_549 p_809->g_78 p_809->g_56 p_809->g_425 p_809->g_417 p_809->g_501.f0
 */
int32_t  func_7(int32_t  p_8, uint64_t  p_9, union U1  p_10, int8_t  p_11, int32_t  p_12, struct S4 * p_809)
{ /* block id: 178 */
    VECTOR(int8_t, 2) l_495 = (VECTOR(int8_t, 2))(0x70L, (-7L));
    int32_t l_510 = (-3L);
    int64_t l_554 = (-9L);
    int32_t l_555 = 0x1A632966L;
    uint16_t l_556 = 1UL;
    VECTOR(int8_t, 8) l_569 = (VECTOR(int8_t, 8))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 1L), 1L), 1L, 0x66L, 1L);
    VECTOR(int8_t, 8) l_570 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    int32_t *l_584 = (void*)0;
    int32_t *l_585 = &l_555;
    int32_t *l_586 = &p_809->g_560[9].f2;
    int32_t *l_587 = &l_510;
    int i;
    for (p_11 = 0; (p_11 < (-30)); p_11 = safe_sub_func_int16_t_s_s(p_11, 9))
    { /* block id: 181 */
        int16_t l_488 = 0x56D0L;
        VECTOR(int8_t, 4) l_496 = (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x6EL), 0x6EL);
        struct S0 *l_500 = &p_809->g_501;
        int32_t l_511 = 0x7D2B096BL;
        int32_t l_512 = 0x500F02FEL;
        int32_t l_513 = 0x49D3E53DL;
        uint8_t *l_550[5][4][10] = {{{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465}},{{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465}},{{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465}},{{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465}},{{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465},{(void*)0,(void*)0,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,&p_809->g_465,(void*)0,(void*)0,&p_809->g_465}}};
        int16_t l_551[6][2] = {{0x3BDCL,0x3BDCL},{0x3BDCL,0x3BDCL},{0x3BDCL,0x3BDCL},{0x3BDCL,0x3BDCL},{0x3BDCL,0x3BDCL},{0x3BDCL,0x3BDCL}};
        uint32_t *l_573 = (void*)0;
        VECTOR(int8_t, 2) l_576 = (VECTOR(int8_t, 2))(0x28L, 0x7EL);
        int i, j, k;
        if ((+l_488))
        { /* block id: 182 */
            int64_t l_491 = (-7L);
            struct S0 *l_502 = &p_809->g_501;
            uint8_t *l_503 = &p_809->g_465;
            int32_t *l_518 = &l_513;
            int32_t *l_519 = &l_512;
            (*p_809->g_504) = (safe_mod_func_int16_t_s_s(l_491, ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(((safe_div_func_int8_t_s_s(((((VECTOR(int64_t, 4))(p_809->g_494.s0053)).z ^ 0x0171BFFC29F200F4L) ^ (0x4BC9220AL | p_10.f0)), ((VECTOR(int8_t, 16))(l_495.xxxyyxyyxxyyyxxy)).s1)) | ((VECTOR(uint64_t, 8))(((GROUP_DIVERGE(0, 1) | FAKE_DIVERGE(p_809->group_2_offset, get_group_id(2), 10)) | ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(l_496.zzywzzxyzyxyzxwx)).s151e))))).zxxzzxwx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_809->g_497.wywx)).hi)).yxyxxyyx))).s2), ((VECTOR(uint64_t, 2))(0x0F96A47D927BA1C5L, 18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x2BC373E74D4DD25DL, 1UL)), l_495.x, 0xDBF8DB952EA3A194L, 0xEA3F6A4A6FACB842L)).s0), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x2BA8L, 0x9B62L, p_12, (safe_rshift_func_uint8_t_u_s(((*l_503) = ((l_500 != l_502) >= (~(func_115((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(p_809->g_416.s6, ((VECTOR(int8_t, 4))(0x57L)), 0x30L, 0x21L, 0x31L)).odd, ((VECTOR(int8_t, 4))(0x68L))))).xwzwwyyw)).s2 ^ 0xC7L) | p_809->g_501.f1) <= 0x79L), p_809->g_419.f0.f7, p_809) , (-1L))))), 5)), ((VECTOR(uint16_t, 4))(65528UL)))).s2257565223723732)).sadb2, ((VECTOR(uint16_t, 4))(0x4233L))))), 0x1018L, 0x0D94L, 0xAA3AL)).s67, ((VECTOR(uint16_t, 2))(0x72BCL)), ((VECTOR(uint16_t, 2))(3UL))))).hi));
            for (p_809->g_242 = 18; (p_809->g_242 != 47); p_809->g_242 = safe_add_func_uint32_t_u_u(p_809->g_242, 9))
            { /* block id: 187 */
                int16_t l_507[6] = {0x30D0L,1L,0x30D0L,0x30D0L,1L,0x30D0L};
                int32_t *l_508 = &p_809->g_501.f7;
                int32_t *l_509[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_509[i] = (void*)0;
                p_809->g_514--;
            }
            (*l_519) |= ((l_518 = (p_809->g_517 , &l_510)) == &l_510);
            if ((atomic_inc(&p_809->l_atomic_input[48]) == 2))
            { /* block id: 193 */
                VECTOR(int16_t, 8) l_520 = (VECTOR(int16_t, 8))(0x5AF8L, (VECTOR(int16_t, 4))(0x5AF8L, (VECTOR(int16_t, 2))(0x5AF8L, 0x11EEL), 0x11EEL), 0x11EEL, 0x5AF8L, 0x11EEL);
                int16_t l_521 = 0x7537L;
                int8_t l_522 = (-1L);
                int8_t l_523 = 0x1AL;
                int i;
                l_523 |= (((VECTOR(int16_t, 16))(l_520.s0521266314346652)).s9 , (l_521 , (FAKE_DIVERGE(p_809->global_2_offset, get_global_id(2), 10) , l_522)));
                unsigned int result = 0;
                result += l_520.s7;
                result += l_520.s6;
                result += l_520.s5;
                result += l_520.s4;
                result += l_520.s3;
                result += l_520.s2;
                result += l_520.s1;
                result += l_520.s0;
                result += l_521;
                result += l_522;
                result += l_523;
                atomic_add(&p_809->l_special_values[48], result);
            }
            else
            { /* block id: 195 */
                (1 + 1);
            }
        }
        else
        { /* block id: 198 */
            int32_t l_537[3][4] = {{0x783890E4L,0x783890E4L,0x783890E4L,0x783890E4L},{0x783890E4L,0x783890E4L,0x783890E4L,0x783890E4L},{0x783890E4L,0x783890E4L,0x783890E4L,0x783890E4L}};
            union U2 *l_559[2];
            uint32_t **l_574 = (void*)0;
            uint32_t **l_575[9] = {&l_573,&l_573,&l_573,&l_573,&l_573,&l_573,&l_573,&l_573,&l_573};
            VECTOR(int8_t, 16) l_579 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x48L), 0x48L), 0x48L, (-8L), 0x48L, (VECTOR(int8_t, 2))((-8L), 0x48L), (VECTOR(int8_t, 2))((-8L), 0x48L), (-8L), 0x48L, (-8L), 0x48L);
            int32_t *l_580 = &l_511;
            int i, j;
            for (i = 0; i < 2; i++)
                l_559[i] = &p_809->g_560[9];
            for (p_809->g_450 = 0; (p_809->g_450 <= 29); ++p_809->g_450)
            { /* block id: 201 */
                int8_t *l_530 = (void*)0;
                int8_t *l_531 = (void*)0;
                int8_t *l_532 = (void*)0;
                uint8_t *l_538 = &p_809->g_39;
                uint8_t *l_548 = &p_809->g_465;
                uint8_t **l_547[4];
                int32_t l_552 = (-10L);
                int32_t *l_553[1];
                union U2 **l_561 = &l_559[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_547[i] = &l_548;
                for (i = 0; i < 1; i++)
                    l_553[i] = &l_513;
                (*p_809->g_534) &= ((FAKE_DIVERGE(p_809->local_2_offset, get_local_id(2), 10) , p_809->g_323) == (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_809->group_0_offset, get_group_id(0), 10), 5)), (p_809->g_497.x = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x43L, 0x21L)).yyyyxyyy)).s3250105277117424)).odd)).s4))));
                p_809->g_78.s4 &= (((~(0UL & l_495.x)) < ((((safe_div_func_uint32_t_u_u(((p_809->g_311.f0 | (--(*l_538))) < (l_495.y == (safe_div_func_uint16_t_u_u((p_11 & ((void*)0 == &p_809->g_51)), (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((p_809->g_549[3] = &p_809->g_465) != l_550[1][0][6]), p_9)) <= l_551[1][1]), l_495.y)))))), l_552)) , l_495.y) , 7L) & l_552)) , l_537[2][0]);
                l_556--;
                (*l_561) = l_559[0];
            }
            (*p_809->g_562) = &l_513;
            (*l_580) = ((p_10.f0 & ((safe_div_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((*p_809->g_56) = (0xBFL != ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(p_809->g_567.s07)).xxxxxyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_809->g_568.s2741044207127510)).sc0)).yxyyyxyy))).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(l_569.s50150740)), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(l_570.s2540374172255626)).odd, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_809->g_571.s7354)), (-7L), ((p_809->g_572 = func_47(&l_537[1][3], p_809)) != (l_573 = l_573)), ((VECTOR(int8_t, 2))(l_576.xx)), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(p_809->g_577.seb)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_809->g_578.s5257)), 1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, (-4L))).yxxyxxxx)).s3, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_579.s48)), ((VECTOR(int8_t, 2))(2L, 0x4CL)), ((p_809->g_568.s7 , ((l_573 == (void*)0) || 0x50BBL)) < p_11), ((VECTOR(int8_t, 2))(0L)), 0x4FL)), (-1L), 0x44L)).sb338)).lo))), 1L, 0x7BL, 0x02L, 1L, (-1L), 0x7BL)).hi, ((VECTOR(int8_t, 8))((-1L)))))), ((VECTOR(int8_t, 8))(0x1DL)))))))))).odd))), 0x25L, ((VECTOR(int8_t, 4))(0x00L)), 0x4CL, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))(0x01L)))).s0296)).w)), p_10.f0)), p_809->g_425)) , l_569.s1)) <= (-1L));
        }
    }
    l_555 |= ((VECTOR(int32_t, 2))(p_809->g_581.s24)).even;
    p_809->g_501.f0 |= (safe_div_func_int16_t_s_s(((*p_809->g_424) ^= 0x242FL), ((((*l_585) ^= p_10.f0) != (((0x1624976DL > (p_809->g_417[4][0] = (p_12 , GROUP_DIVERGE(0, 1)))) , ((*l_587) |= p_11)) > (safe_add_func_int32_t_s_s((-1L), ((p_809->g_287 ^ ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_809->g_590.wyzz)).xyywzzyzywxxwwzw)).s9) == (((safe_add_func_int8_t_s_s(p_12, GROUP_DIVERGE(1, 1))) > p_11) ^ p_9)))))) , p_809->g_501.f6)));
    return p_809->g_419.f0.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_44.f0 p_809->g_419.f0.f0 p_809->g_468 p_809->g_442 p_809->g_465 p_809->g_419.f0.f3 p_809->g_382 p_809->g_20 p_809->g_419.f0
 * writes: p_809->g_419.f0 p_809->g_39 p_809->g_465 p_809->g_382 p_809->g_56 p_809->g_485
 */
struct S0  func_13(uint32_t  p_14, uint32_t  p_15, struct S4 * p_809)
{ /* block id: 169 */
    volatile struct S0 *l_453 = &p_809->g_44[0].f0;
    volatile struct S0 *l_454[1];
    uint8_t *l_463 = &p_809->g_39;
    uint8_t *l_464 = &p_809->g_465;
    int32_t l_473 = 0x5597F055L;
    int8_t l_474 = 1L;
    int8_t l_475 = (-1L);
    int32_t **l_476 = &p_809->g_56;
    int32_t *l_478 = (void*)0;
    int32_t **l_477[2][5][3];
    int32_t *l_479 = (void*)0;
    VECTOR(uint8_t, 4) l_482 = (VECTOR(uint8_t, 4))(0x10L, (VECTOR(uint8_t, 2))(0x10L, 255UL), 255UL);
    uint8_t l_484 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_454[i] = &p_809->g_44[0].f0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
                l_477[i][j][k] = &l_478;
        }
    }
    p_809->g_419.f0 = p_809->g_44[0].f0;
    l_479 = ((*l_476) = func_47(((p_15 & (safe_mul_func_int8_t_s_s(((p_809->g_382 |= (7L && ((((void*)0 == l_454[0]) , ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u(((((safe_sub_func_int16_t_s_s((((*l_464) = ((*l_463) = p_809->g_419.f0.f0)) , ((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_809->g_468.sf6035dc1f2dd3dc4)).s0, (((safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(p_809->g_442, p_809->g_465)) , (~l_473)), 0xC7F672862CD7DA8DL)) & l_473) | l_474))) ^ 18446744073709551613UL) , (-8L)) , p_14)), p_15)) != 0xD7B03FD30DD37FE2L) && (-1L)) <= l_473), l_474)), 6)) || p_809->g_419.f0.f3)) < l_473))) , p_14), l_475))) , (void*)0), p_809));
    p_809->g_485[0] = (((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 2))(255UL, 0UL)).xyxyyxyxxxxxxyyy, ((VECTOR(uint8_t, 16))(l_482.zyxwyyywxzxxyyyx))))).odd)), ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(0x02L, (-1L), p_15, p_14, (-1L), (((&l_477[0][4][0] == &l_476) && (safe_unary_minus_func_uint32_t_u(p_15))) , (((-1L) | p_14) > ((p_809->g_20.se & p_15) >= 0x5EL))), 0x76L, (-3L))).s52, ((VECTOR(int8_t, 2))(0L))))).yyxx, ((VECTOR(int8_t, 4))(0x0FL))))).wxzywyxx))).s4, 3)) , 8UL) <= l_484);
    return p_809->g_419.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_21(int32_t  p_22, uint64_t  p_23, int32_t  p_24, int16_t  p_25, struct S4 * p_809)
{ /* block id: 166 */
    uint32_t l_451 = 0x76D648D9L;
    return l_451;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_comm_values
 * writes: p_809->g_56
 */
uint16_t  func_34(int32_t  p_35, uint8_t  p_36, int64_t  p_37, struct S4 * p_809)
{ /* block id: 7 */
    for (p_35 = 0; (p_35 >= (-17)); --p_35)
    { /* block id: 10 */
        int32_t *l_49[1];
        int32_t **l_55[8] = {(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0],(void*)0,(void*)0,&l_49[0]};
        int i;
        for (i = 0; i < 1; i++)
            l_49[i] = (void*)0;
        p_809->g_56 = func_47(l_49[0], p_809);
    }
    return p_809->g_comm_values[p_809->tid];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_47(int32_t * p_48, struct S4 * p_809)
{ /* block id: 11 */
    int32_t *l_50[8] = {&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51};
    VECTOR(uint64_t, 8) l_52 = (VECTOR(uint64_t, 8))(0x17F726845D487C75L, (VECTOR(uint64_t, 4))(0x17F726845D487C75L, (VECTOR(uint64_t, 2))(0x17F726845D487C75L, 0x0C80D6736FA7ABE3L), 0x0C80D6736FA7ABE3L), 0x0C80D6736FA7ABE3L, 0x17F726845D487C75L, 0x0C80D6736FA7ABE3L);
    int i;
    --l_52.s3;
    atomic_add(&p_809->l_atomic_reduction[0], 0x1F00F3BCL + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_809->v_collective += p_809->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_77 p_809->g_78 p_809->g_79 p_809->g_81 p_809->g_39 p_809->g_89 p_809->g_comm_values p_809->g_65 p_809->g_44.f0.f3 p_809->g_110 p_809->g_51 p_809->g_58 p_809->g_128 p_809->g_126 p_809->g_157 p_809->g_44.f0.f8 p_809->g_44 p_809->l_comm_values p_809->g_106 p_809->g_44.f0.f5 p_809->g_378 p_809->g_424 p_809->g_425 p_809->g_276 p_809->g_442 p_809->g_443
 * writes: p_809->g_89 p_809->g_56 p_809->g_51 p_809->g_58 p_809->g_110 p_809->g_78 p_809->g_106 p_809->g_219 p_809->g_243 p_809->g_423 p_809->g_425 p_809->g_442
 */
int8_t  func_69(int16_t  p_70, int32_t  p_71, struct S4 * p_809)
{ /* block id: 20 */
    int8_t l_75 = 0x2BL;
    VECTOR(int32_t, 2) l_76 = (VECTOR(int32_t, 2))(1L, 8L);
    VECTOR(int32_t, 4) l_80 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L);
    VECTOR(int32_t, 2) l_82 = (VECTOR(int32_t, 2))((-7L), 1L);
    int16_t l_83[6][3][3] = {{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}},{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}},{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}},{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}},{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}},{{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L},{0x41EFL,0x65BEL,0L}}};
    int16_t *l_88 = &p_809->g_89;
    VECTOR(uint16_t, 2) l_90 = (VECTOR(uint16_t, 2))(0xDB38L, 0xA53AL);
    int8_t l_95 = (-1L);
    uint16_t *l_437[7] = {&p_809->g_219,&p_809->g_219,&p_809->g_219,&p_809->g_219,&p_809->g_219,&p_809->g_219,&p_809->g_219};
    uint16_t **l_436 = &l_437[1];
    uint16_t *l_438[10][4][3] = {{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}},{{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243},{&p_809->g_243,(void*)0,&p_809->g_243}}};
    int32_t *l_439 = (void*)0;
    int32_t *l_440 = &p_809->g_51;
    int32_t *l_441 = &p_809->g_442;
    uint8_t *l_446 = (void*)0;
    int i, j, k;
    l_75 |= 1L;
    (*l_441) &= ((l_75 && p_70) & ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x3C6DDDD8L, 0x25D72DEFL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_76.yxyyxxyyyyxyxyyy)).s494c)), p_71, 1L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(p_809->g_77.s2537)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(p_809->g_78.s47)).xyxxyxyyxxyyyyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(9L, 0x3D668E7EL))))).xyyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_809->g_79.xyxw)).odd)).xxyy))).yzzzywyzwyxyyyyx, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_80.zwzz)).wzxwyzxz)).s27)), ((VECTOR(int32_t, 2))(p_809->g_81.sa8)), 0x052C2AB4L, 0x06719559L, 1L, 0x13AB5F77L)).s4436301351136117, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(6L, 0x6B75E0BDL)).xxyx, ((VECTOR(int32_t, 2))(l_82.yy)).yyxy))), 1L, (-10L), ((*l_440) = ((l_82.x ^= (l_80.z , ((*p_809->g_424) = (l_83[2][2][2] ^ (l_80.w = (GROUP_DIVERGE(0, 1) , (((*l_436) = ((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*l_88) &= p_809->g_39) | (&p_809->g_56 == (void*)0)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_90.yx)), 0xD139L, 0x748FL)).lo)).yyyyyyxx)), ((VECTOR(uint16_t, 4))(func_91(((safe_div_func_uint32_t_u_u((~(func_34(p_71, l_76.x, l_95, p_809) > p_809->g_65.s1)), (-3L))) & 0x86L), p_809), ((VECTOR(uint16_t, 2))(6UL)), 1UL)), l_80.y, p_71, 0xC27BL, 0UL)).sd)), (*p_809->g_424))) , &p_809->g_219)) == p_809->g_424))))))) ^ 0L)), 0x67683203L, ((VECTOR(int32_t, 8))(0x7AF5D996L)))))))))).even, ((VECTOR(int32_t, 8))(0x1F5976F1L))))).odd, ((VECTOR(int32_t, 4))(0x7E40EDCFL))))).odd, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x4CFDBFE0L))))).yxxxyyyx, ((VECTOR(int32_t, 8))(0x1D97CCB3L))))).s1063532066202316)).s5442)).xwzzwwyz)).hi)).wzzzyxxzxzyxxzzz, ((VECTOR(int32_t, 16))(0x7933F029L))))).se974, ((VECTOR(int32_t, 4))((-1L)))))), (*p_809->g_276), ((VECTOR(int32_t, 2))((-1L))), 9L)).s52, ((VECTOR(int32_t, 2))(0x56F2EB95L))))).xyyxxyyyyxxyyyyy)).even))).hi, ((VECTOR(int32_t, 4))(0L))))).odd)).yxxx, ((VECTOR(int32_t, 4))(0x4FD8FC21L))))).zzyxzyzz, ((VECTOR(int32_t, 8))(0x5F8B7990L)), ((VECTOR(int32_t, 8))(0x22E1B1C2L))))))).s0);
    (*l_440) |= p_70;
    (*l_441) = ((GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_809->g_443.yy)).xxxy)).w) ^ ((safe_div_func_int16_t_s_s(0x31ACL, (*l_441))) < (p_809->g_378 | ((p_70 != p_809->g_51) , ((0x2C5E12D76FD2AECFL & p_70) && (((*p_809->g_424) && (&p_809->g_39 == l_446)) == p_71))))));
    return p_70;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_comm_values p_809->g_44.f0.f3 p_809->g_110 p_809->g_51 p_809->g_65 p_809->g_58 p_809->g_128 p_809->g_78 p_809->g_126 p_809->g_77 p_809->g_39 p_809->g_157 p_809->g_79 p_809->g_44.f0.f8 p_809->g_44 p_809->l_comm_values p_809->g_106 p_809->g_44.f0.f5 p_809->g_378
 * writes: p_809->g_56 p_809->g_51 p_809->g_58 p_809->g_110 p_809->g_78 p_809->g_106 p_809->g_219 p_809->g_243 p_809->g_423
 */
uint16_t  func_91(int32_t  p_92, struct S4 * p_809)
{ /* block id: 23 */
    uint8_t l_96 = 1UL;
    VECTOR(int64_t, 2) l_99 = (VECTOR(int64_t, 2))(0x0A9AF7D07E14A349L, 0L);
    uint8_t *l_100 = &p_809->g_39;
    int64_t *l_101 = (void*)0;
    int64_t *l_102 = (void*)0;
    int64_t *l_103[2];
    int32_t l_104 = 0x27DF4BEBL;
    int16_t *l_105 = &p_809->g_106;
    int16_t *l_107 = &p_809->g_106;
    int32_t l_138 = 0x6CA2D36FL;
    int32_t l_148 = 0x65764612L;
    int32_t l_150 = (-1L);
    int32_t l_151[6];
    uint64_t l_152 = 18446744073709551614UL;
    int16_t l_248 = (-1L);
    VECTOR(int8_t, 16) l_265 = (VECTOR(int8_t, 16))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0L), 0L), 0L, 0x03L, 0L, (VECTOR(int8_t, 2))(0x03L, 0L), (VECTOR(int8_t, 2))(0x03L, 0L), 0x03L, 0L, 0x03L, 0L);
    int8_t l_275 = 0L;
    int64_t l_394 = 9L;
    int32_t l_397 = (-1L);
    int16_t l_428 = (-2L);
    uint64_t l_430 = 1UL;
    int16_t ***l_433 = &p_809->g_423;
    int32_t *l_434 = (void*)0;
    int32_t *l_435 = &l_150;
    int i;
    for (i = 0; i < 2; i++)
        l_103[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_151[i] = 0x5C42FFA0L;
    if (((func_34(l_96, l_96, (safe_sub_func_int8_t_s_s((((VECTOR(int64_t, 4))(l_99.xyxy)).x , (l_96 || ((l_104 = ((void*)0 != l_100)) == (l_96 , p_92)))), GROUP_DIVERGE(1, 1))), p_809) , (((l_105 == l_107) >= p_809->g_44[0].f0.f3) != l_104)) , 0L))
    { /* block id: 25 */
        uint8_t l_108 = 0x5CL;
        int32_t *l_109 = (void*)0;
        uint16_t *l_118[9][2][4] = {{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}},{{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58},{(void*)0,&p_809->g_58,(void*)0,&p_809->g_58}}};
        int32_t l_149[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
        VECTOR(uint32_t, 4) l_180 = (VECTOR(uint32_t, 4))(0xE32BE6F2L, (VECTOR(uint32_t, 2))(0xE32BE6F2L, 0UL), 0UL);
        int i, j, k;
        (*p_809->g_110) ^= l_108;
        l_138 &= (safe_lshift_func_uint16_t_u_u(p_92, (((safe_div_func_uint16_t_u_u((+(func_115((p_809->g_65.s6 , (p_809->g_comm_values[p_809->tid] && ((++p_809->g_58) & (p_92 && (0x695938E4L > (((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967289UL, (1UL ^ (~0x3CB6AF0722DCAAD5L)))), ((l_104 = 8UL) == 0x1A13L))) && (*p_809->g_110)) || 1L)))))), l_108, p_809) , p_92)), p_92)) > p_92) , 0UL)));
        for (l_138 = 0; (l_138 < 3); ++l_138)
        { /* block id: 38 */
            int32_t *l_141 = &p_809->g_51;
            int32_t *l_142 = (void*)0;
            int32_t *l_143 = &p_809->g_51;
            int32_t *l_144 = (void*)0;
            int32_t *l_145 = &p_809->g_51;
            int32_t *l_146 = (void*)0;
            int32_t *l_147[3];
            uint16_t *l_162 = (void*)0;
            uint8_t *l_167[10][8][3] = {{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}},{{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96},{&p_809->g_39,&l_96,&l_96}}};
            VECTOR(int16_t, 2) l_205 = (VECTOR(int16_t, 2))((-1L), 1L);
            uint32_t l_238[9][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_147[i] = &p_809->g_51;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 2; j++)
                    l_238[i][j] = 0x7D0DB72EL;
            }
            --l_152;
            if ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x30L, (-1L))).even, ((p_809->g_77.s4 < ((p_809->g_39 , p_809->g_157) > (((p_809->g_79.w < (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((l_118[8][0][3] != l_162), (p_809->g_78.s3 ^ (+(((l_104 &= (((safe_sub_func_int64_t_s_s((p_809->g_157 , (safe_mod_func_int32_t_s_s(((void*)0 != l_167[0][1][0]), l_96))), p_92)) && l_99.y) ^ p_809->g_51)) >= p_809->g_comm_values[p_809->tid]) && p_92))))) == l_138), 8))) & (-5L)) > l_99.x))) <= p_92))))
            { /* block id: 41 */
                int32_t l_181 = 0x7979C347L;
                int32_t l_190 = 0x27CB5496L;
                l_190 &= ((((VECTOR(uint32_t, 8))((safe_div_func_int16_t_s_s((~(safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((GROUP_DIVERGE(1, 1) != (((l_181 &= ((VECTOR(uint32_t, 8))(l_180.xwzxwzxz)).s4) | p_809->g_44[0].f0.f8) , ((l_151[1] = p_809->g_79.y) <= (p_809->g_44[0] , p_92)))) > (l_141 != (void*)0)), (((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(p_92, 1)) , p_92), 0x1A60L)) < p_809->g_157) >= p_809->l_comm_values[(safe_mod_func_uint32_t_u_u(p_809->tid, 91))]), 13)), p_92)), 0x5FBDFED32D8AEBAFL, 0x5ABC4564BAA4FABCL, 0L, 0L, (-1L), 0x581F06A6278F3BB2L, 0x00037EE5FC7B0A1CL)), ((VECTOR(int64_t, 8))(0x0503BB7981369863L))))), (int64_t)p_809->g_78.s4, (int64_t)p_809->g_58))).s27, ((VECTOR(int64_t, 2))(0x1EC19663B8F4179AL))))).hi & p_92))) || p_92), p_809->g_51)) != 4L), 65535UL))), p_809->g_106)), 0UL, ((VECTOR(uint32_t, 2))(4294967287UL)), 0x595283BCL, 0xC173D8B2L, 0xC62F1771L, 7UL)).s5 , p_92) == p_809->g_51);
                if ((atomic_inc(&p_809->g_atomic_input[64 * get_linear_group_id() + 29]) == 1))
                { /* block id: 46 */
                    int32_t l_191 = (-4L);
                    for (l_191 = (-11); (l_191 == (-26)); l_191 = safe_sub_func_uint64_t_u_u(l_191, 6))
                    { /* block id: 49 */
                        uint16_t l_194 = 65535UL;
                        uint16_t l_195 = 8UL;
                        uint32_t l_196[1];
                        struct S0 l_197 = {0x7408596DL,0xA4D0L,4294967295UL,0x7F0751C69AD0F908L,0xA5C4C7E7C9473C99L,0x5DE4L,0x021662E3L,-1L,0x7C94DDF8L};/* VOLATILE GLOBAL l_197 */
                        struct S0 l_198 = {-1L,0x6644L,0x8F596772L,0xE90F022DD66434FFL,1UL,0x1ED5L,0x65393B03L,1L,0x803A47EDL};/* VOLATILE GLOBAL l_198 */
                        int i;
                        for (i = 0; i < 1; i++)
                            l_196[i] = 1UL;
                        l_196[0] = ((l_194 &= 0UL) , l_195);
                        l_198 = l_197;
                    }
                    unsigned int result = 0;
                    result += l_191;
                    atomic_add(&p_809->g_special_values[64 * get_linear_group_id() + 29], result);
                }
                else
                { /* block id: 54 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 57 */
                uint32_t l_217 = 1UL;
                uint32_t *l_218[5][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_220 = 1L;
                int32_t l_221 = (-6L);
                int32_t l_222 = 3L;
                int32_t l_223 = 0x40834887L;
                int32_t l_224 = 0x25DFF6FBL;
                int32_t l_225 = (-1L);
                int32_t l_226 = 0x08A5E68DL;
                int32_t l_227 = (-3L);
                int32_t l_228 = 0x6DBE9DCEL;
                int32_t l_229 = 0x476A0469L;
                int32_t l_230 = 0x1B738214L;
                int32_t l_231 = 0x34024E05L;
                int32_t l_232 = 0x2095D400L;
                int32_t l_233 = 0x31123547L;
                int32_t l_234 = 2L;
                int32_t l_235 = (-10L);
                int32_t l_236 = (-1L);
                int32_t l_237[7][8][4] = {{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}},{{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L},{0x072CCCB0L,0L,0x3BD247EFL,0x08F958E4L}}};
                int i, j, k;
                (*l_141) ^= ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((0x5496351CL <= (safe_mul_func_uint16_t_u_u(p_92, ((*l_105) = 0x3E39L)))), ((((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(l_205.xyyxxxxy)), (int16_t)l_151[1]))).s0 , (((((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((0x705EL > (safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((p_809->g_219 = (safe_unary_minus_func_uint32_t_u(((safe_div_func_uint16_t_u_u((l_217 , p_92), p_92)) , 1UL)))), l_96)), l_217))), p_809->g_77.s4)), 0xF5013CFEL)) <= l_217) == 6UL) == 0x269774E2E9037DE9L) | p_92)) > 1L) , p_92) || p_92))), FAKE_DIVERGE(p_809->global_2_offset, get_global_id(2), 10))) & p_809->g_78.s6);
                if (l_217)
                    continue;
                l_238[5][1]--;
            }
        }
    }
    else
    { /* block id: 65 */
        uint32_t *l_241[7] = {&p_809->g_242,&p_809->g_242,&p_809->g_242,&p_809->g_242,&p_809->g_242,&p_809->g_242,&p_809->g_242};
        int32_t *l_255[9] = {&p_809->g_51,(void*)0,&p_809->g_51,&p_809->g_51,(void*)0,&p_809->g_51,&p_809->g_51,(void*)0,&p_809->g_51};
        int i;
        l_150 &= (((p_809->g_243 = p_92) == p_809->g_44[0].f0.f8) || (p_92 = (((l_138 == p_809->g_78.s7) != (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(l_248, p_92)) , (safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_96, (+((+(((safe_mul_func_uint16_t_u_u(p_92, p_809->g_44[0].f0.f5)) < p_809->g_58) == p_809->g_78.s7)) >= 0x7985L)))), p_809->g_78.s0))), 2))) & p_92)));
        if ((atomic_inc(&p_809->g_atomic_input[64 * get_linear_group_id() + 23]) == 7))
        { /* block id: 70 */
            union U2 l_257 = {0x0BA9BF63L};/* VOLATILE GLOBAL l_257 */
            union U2 *l_256 = &l_257;
            union U2 *l_258[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_258[2][8] = (l_256 = l_256);
            unsigned int result = 0;
            result += l_257.f0;
            result += l_257.f1;
            result += l_257.f2;
            result += l_257.f3;
            atomic_add(&p_809->g_special_values[64 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 73 */
            (1 + 1);
        }
    }
    for (l_104 = (-30); (l_104 < 11); l_104 = safe_add_func_int32_t_s_s(l_104, 1))
    { /* block id: 79 */
        int64_t *l_266 = (void*)0;
        int32_t l_272 = (-1L);
        int32_t l_281 = 0x209FC49EL;
        int16_t l_282 = 6L;
        uint32_t l_283[1];
        int32_t l_286[1];
        uint8_t l_288 = 0x87L;
        union U1 *l_331 = &p_809->g_126;
        int32_t *l_346 = &l_286[0];
        VECTOR(uint16_t, 4) l_361 = (VECTOR(uint16_t, 4))(0x9011L, (VECTOR(uint16_t, 2))(0x9011L, 0x7EFDL), 0x7EFDL);
        int32_t l_395 = (-1L);
        int64_t l_396 = 0L;
        int16_t **l_421 = &l_105;
        int32_t *l_427[3];
        int32_t l_429 = 0x723C8CFDL;
        int i;
        for (i = 0; i < 1; i++)
            l_283[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_286[i] = 8L;
        for (i = 0; i < 3; i++)
            l_427[i] = &l_138;
        if (p_92)
            break;
    }
    (*l_435) ^= (((*l_433) = (l_104 , &l_105)) != (void*)0);
    return p_809->g_378;
}


/* ------------------------------------------ */
/* 
 * reads : p_809->g_128 p_809->g_78 p_809->g_126
 * writes: p_809->g_110 p_809->g_78
 */
union U1  func_115(int64_t  p_116, uint32_t  p_117, struct S4 * p_809)
{ /* block id: 29 */
    union U1 *l_125[1][4] = {{&p_809->g_126,&p_809->g_126,&p_809->g_126,&p_809->g_126}};
    union U1 **l_127 = &l_125[0][1];
    VECTOR(uint16_t, 8) l_129 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL);
    int32_t *l_130[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_131 = 0x643B7CC5CF0BAFABL;
    int32_t l_132 = 0x09F34BABL;
    int64_t l_133 = 1L;
    int32_t l_134 = 0x5B0B4984L;
    uint8_t l_135 = 0x2BL;
    int i, j;
    (*l_127) = l_125[0][1];
    p_809->g_110 = (void*)0;
    p_809->g_78.s7 |= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_809->g_128.xx)))).xxxyxyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_129.s04)))))).xxxxxxxx))))).s6;
    l_135--;
    return p_809->g_126;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S4 c_810;
    struct S4* p_809 = &c_810;
    struct S4 c_811 = {
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_809->g_20
        1UL, // p_809->g_39
        {{{0L,65527UL,9UL,0xCAE26E16511C25C5L,18446744073709551611UL,0x07B7L,-6L,-9L,0x7B3925B9L}}}, // p_809->g_44
        0x54F618E1L, // p_809->g_51
        &p_809->g_51, // p_809->g_56
        0x5BB5L, // p_809->g_58
        (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL, (VECTOR(uint64_t, 2))(2UL, 1UL), (VECTOR(uint64_t, 2))(2UL, 1UL), 2UL, 1UL, 2UL, 1UL), // p_809->g_65
        (VECTOR(int32_t, 8))(0x7F2E326EL, (VECTOR(int32_t, 4))(0x7F2E326EL, (VECTOR(int32_t, 2))(0x7F2E326EL, 0x613FEA38L), 0x613FEA38L), 0x613FEA38L, 0x7F2E326EL, 0x613FEA38L), // p_809->g_77
        (VECTOR(int32_t, 8))(0x2310476CL, (VECTOR(int32_t, 4))(0x2310476CL, (VECTOR(int32_t, 2))(0x2310476CL, (-2L)), (-2L)), (-2L), 0x2310476CL, (-2L)), // p_809->g_78
        (VECTOR(int32_t, 4))(0x46EB95E9L, (VECTOR(int32_t, 2))(0x46EB95E9L, 0x7D74E5B0L), 0x7D74E5B0L), // p_809->g_79
        (VECTOR(int32_t, 16))(0x7DEC96EAL, (VECTOR(int32_t, 4))(0x7DEC96EAL, (VECTOR(int32_t, 2))(0x7DEC96EAL, 0x1AD49712L), 0x1AD49712L), 0x1AD49712L, 0x7DEC96EAL, 0x1AD49712L, (VECTOR(int32_t, 2))(0x7DEC96EAL, 0x1AD49712L), (VECTOR(int32_t, 2))(0x7DEC96EAL, 0x1AD49712L), 0x7DEC96EAL, 0x1AD49712L, 0x7DEC96EAL, 0x1AD49712L), // p_809->g_81
        0x6061L, // p_809->g_89
        2L, // p_809->g_106
        &p_809->g_51, // p_809->g_110
        {0x69CA31E3L}, // p_809->g_126
        (VECTOR(int16_t, 2))(0L, 1L), // p_809->g_128
        0x734E4EB1L, // p_809->g_157
        65535UL, // p_809->g_219
        0x57C57673L, // p_809->g_242
        0x8780L, // p_809->g_243
        &p_809->g_51, // p_809->g_276
        0x622A38E3L, // p_809->g_287
        {{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}},{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}},{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}},{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}},{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}},{{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51},{&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51,&p_809->g_51}}}, // p_809->g_291
        {0x79492FBCL}, // p_809->g_311
        0x5EL, // p_809->g_323
        {(-9L)}, // p_809->g_344
        (void*)0, // p_809->g_352
        {{{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352}},{{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352}},{{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352}},{{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352},{&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,(void*)0,&p_809->g_352,&p_809->g_352,&p_809->g_352,&p_809->g_352}}}, // p_809->g_351
        {&p_809->g_56,&p_809->g_56,&p_809->g_56}, // p_809->g_370
        0x09B4E048L, // p_809->g_378
        4294967294UL, // p_809->g_382
        (void*)0, // p_809->g_401
        (VECTOR(int64_t, 8))(0x040E3FADC71DDC2DL, (VECTOR(int64_t, 4))(0x040E3FADC71DDC2DL, (VECTOR(int64_t, 2))(0x040E3FADC71DDC2DL, (-1L)), (-1L)), (-1L), 0x040E3FADC71DDC2DL, (-1L)), // p_809->g_416
        {{0x785A3157L},{0x785A3157L},{0x785A3157L},{0x785A3157L},{0x785A3157L}}, // p_809->g_417
        {{0x1477E081L,0xDFEFL,5UL,0xA24787286917365AL,0x191AABB9879C2FA4L,0x466FL,-4L,0x71D662DEL,0x30A0F936L}}, // p_809->g_419
        0x27A4A0AAL, // p_809->g_420
        (-1L), // p_809->g_425
        &p_809->g_425, // p_809->g_424
        &p_809->g_424, // p_809->g_423
        {{{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423}},{{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423}},{{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423},{&p_809->g_423,&p_809->g_423,&p_809->g_423,(void*)0,&p_809->g_423}}}, // p_809->g_422
        0x2F00010FL, // p_809->g_442
        (VECTOR(int32_t, 4))(0x6CBC2003L, (VECTOR(int32_t, 2))(0x6CBC2003L, 0x54AA5599L), 0x54AA5599L), // p_809->g_443
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), // p_809->g_449
        1L, // p_809->g_450
        0x8CL, // p_809->g_465
        (VECTOR(uint16_t, 16))(0xCC5CL, (VECTOR(uint16_t, 4))(0xCC5CL, (VECTOR(uint16_t, 2))(0xCC5CL, 65528UL), 65528UL), 65528UL, 0xCC5CL, 65528UL, (VECTOR(uint16_t, 2))(0xCC5CL, 65528UL), (VECTOR(uint16_t, 2))(0xCC5CL, 65528UL), 0xCC5CL, 65528UL, 0xCC5CL, 65528UL), // p_809->g_468
        {0x4673L}, // p_809->g_485
        (VECTOR(int64_t, 8))(0x5D47D02DF5CF061DL, (VECTOR(int64_t, 4))(0x5D47D02DF5CF061DL, (VECTOR(int64_t, 2))(0x5D47D02DF5CF061DL, 6L), 6L), 6L, 0x5D47D02DF5CF061DL, 6L), // p_809->g_494
        (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x37L), 0x37L), // p_809->g_497
        {4L,65527UL,1UL,18446744073709551609UL,0x46E9CCC789DCFA11L,0x7B01L,0x457A6277L,0x7FC5E1B9L,0xE9A4AAEEL}, // p_809->g_501
        &p_809->g_442, // p_809->g_504
        4294967287UL, // p_809->g_514
        {-4L,0xF733L,0xF3362475L,0x77A06EFA51F17093L,7UL,0x1335L,0L,-1L,0xC4A4ACAFL}, // p_809->g_517
        (void*)0, // p_809->g_533
        &p_809->g_501.f7, // p_809->g_534
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_809->g_549
        {{0x05E61798L},{0x37CB4ECDL},{0x05E61798L},{0x05E61798L},{0x37CB4ECDL},{0x05E61798L},{0x05E61798L},{0x37CB4ECDL},{0x05E61798L},{0x05E61798L}}, // p_809->g_560
        &p_809->g_56, // p_809->g_562
        (VECTOR(int8_t, 8))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x06L), 0x06L), 0x06L, 0x0EL, 0x06L), // p_809->g_567
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x5EL), 0x5EL), 0x5EL, (-1L), 0x5EL), // p_809->g_568
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 8L), 8L), 8L, (-1L), 8L), // p_809->g_571
        &p_809->g_378, // p_809->g_572
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_809->g_577
        (VECTOR(int8_t, 8))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, (-2L)), (-2L)), (-2L), 0x1CL, (-2L)), // p_809->g_578
        (VECTOR(int32_t, 16))(0x459B987EL, (VECTOR(int32_t, 4))(0x459B987EL, (VECTOR(int32_t, 2))(0x459B987EL, 1L), 1L), 1L, 0x459B987EL, 1L, (VECTOR(int32_t, 2))(0x459B987EL, 1L), (VECTOR(int32_t, 2))(0x459B987EL, 1L), 0x459B987EL, 1L, 0x459B987EL, 1L), // p_809->g_581
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), // p_809->g_590
        {{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL},{0x361FEB89L,0UL,0xF5888198L,18446744073709551612UL,18446744073709551612UL,-1L,0x22AD6D47L,0x7D60ECE5L,1UL}}, // p_809->g_618
        &p_809->g_442, // p_809->g_633
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x32AFL), 0x32AFL), 0x32AFL, 1UL, 0x32AFL, (VECTOR(uint16_t, 2))(1UL, 0x32AFL), (VECTOR(uint16_t, 2))(1UL, 0x32AFL), 1UL, 0x32AFL, 1UL, 0x32AFL), // p_809->g_643
        (-4L), // p_809->g_649
        (VECTOR(int8_t, 16))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 0x4FL), 0x4FL), 0x4FL, 0x32L, 0x4FL, (VECTOR(int8_t, 2))(0x32L, 0x4FL), (VECTOR(int8_t, 2))(0x32L, 0x4FL), 0x32L, 0x4FL, 0x32L, 0x4FL), // p_809->g_674
        (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-1L)), (-1L)), // p_809->g_675
        (VECTOR(int64_t, 4))(0x7647FF4D309BBEF1L, (VECTOR(int64_t, 2))(0x7647FF4D309BBEF1L, 1L), 1L), // p_809->g_678
        &p_809->g_56, // p_809->g_688
        (void*)0, // p_809->g_692
        &p_809->g_618[4], // p_809->g_693
        {{&p_809->g_572,&p_809->g_572,&p_809->g_572,&p_809->g_572},{&p_809->g_572,&p_809->g_572,&p_809->g_572,&p_809->g_572}}, // p_809->g_697
        (VECTOR(int16_t, 2))(0x1A28L, 0x7F5FL), // p_809->g_706
        {&p_809->g_56,&p_809->g_56,&p_809->g_56,&p_809->g_56,&p_809->g_56,&p_809->g_56,&p_809->g_56,&p_809->g_56}, // p_809->g_711
        {(void*)0}, // p_809->g_728
        {&p_809->g_728[0],&p_809->g_728[0],(void*)0,&p_809->g_728[0],&p_809->g_728[0],&p_809->g_728[0],&p_809->g_728[0],(void*)0,&p_809->g_728[0],&p_809->g_728[0]}, // p_809->g_727
        (VECTOR(int64_t, 16))(0x4A53B4CAB07AB9B0L, (VECTOR(int64_t, 4))(0x4A53B4CAB07AB9B0L, (VECTOR(int64_t, 2))(0x4A53B4CAB07AB9B0L, 0L), 0L), 0L, 0x4A53B4CAB07AB9B0L, 0L, (VECTOR(int64_t, 2))(0x4A53B4CAB07AB9B0L, 0L), (VECTOR(int64_t, 2))(0x4A53B4CAB07AB9B0L, 0L), 0x4A53B4CAB07AB9B0L, 0L, 0x4A53B4CAB07AB9B0L, 0L), // p_809->g_749
        (VECTOR(int64_t, 8))(0x361DD183B79D6200L, (VECTOR(int64_t, 4))(0x361DD183B79D6200L, (VECTOR(int64_t, 2))(0x361DD183B79D6200L, (-1L)), (-1L)), (-1L), 0x361DD183B79D6200L, (-1L)), // p_809->g_750
        (VECTOR(int16_t, 16))(0x5807L, (VECTOR(int16_t, 4))(0x5807L, (VECTOR(int16_t, 2))(0x5807L, 8L), 8L), 8L, 0x5807L, 8L, (VECTOR(int16_t, 2))(0x5807L, 8L), (VECTOR(int16_t, 2))(0x5807L, 8L), 0x5807L, 8L, 0x5807L, 8L), // p_809->g_757
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4CL), 0x4CL), 0x4CL, (-1L), 0x4CL, (VECTOR(int8_t, 2))((-1L), 0x4CL), (VECTOR(int8_t, 2))((-1L), 0x4CL), (-1L), 0x4CL, (-1L), 0x4CL), // p_809->g_758
        6UL, // p_809->g_771
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0EC5L), 0x0EC5L), // p_809->g_783
        {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}, // p_809->g_790
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), // p_809->g_798
        0, // p_809->v_collective
        sequence_input[get_global_id(0)], // p_809->global_0_offset
        sequence_input[get_global_id(1)], // p_809->global_1_offset
        sequence_input[get_global_id(2)], // p_809->global_2_offset
        sequence_input[get_local_id(0)], // p_809->local_0_offset
        sequence_input[get_local_id(1)], // p_809->local_1_offset
        sequence_input[get_local_id(2)], // p_809->local_2_offset
        sequence_input[get_group_id(0)], // p_809->group_0_offset
        sequence_input[get_group_id(1)], // p_809->group_1_offset
        sequence_input[get_group_id(2)], // p_809->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_809->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_810 = c_811;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_809);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_809->g_20.s0, "p_809->g_20.s0", print_hash_value);
    transparent_crc(p_809->g_20.s1, "p_809->g_20.s1", print_hash_value);
    transparent_crc(p_809->g_20.s2, "p_809->g_20.s2", print_hash_value);
    transparent_crc(p_809->g_20.s3, "p_809->g_20.s3", print_hash_value);
    transparent_crc(p_809->g_20.s4, "p_809->g_20.s4", print_hash_value);
    transparent_crc(p_809->g_20.s5, "p_809->g_20.s5", print_hash_value);
    transparent_crc(p_809->g_20.s6, "p_809->g_20.s6", print_hash_value);
    transparent_crc(p_809->g_20.s7, "p_809->g_20.s7", print_hash_value);
    transparent_crc(p_809->g_20.s8, "p_809->g_20.s8", print_hash_value);
    transparent_crc(p_809->g_20.s9, "p_809->g_20.s9", print_hash_value);
    transparent_crc(p_809->g_20.sa, "p_809->g_20.sa", print_hash_value);
    transparent_crc(p_809->g_20.sb, "p_809->g_20.sb", print_hash_value);
    transparent_crc(p_809->g_20.sc, "p_809->g_20.sc", print_hash_value);
    transparent_crc(p_809->g_20.sd, "p_809->g_20.sd", print_hash_value);
    transparent_crc(p_809->g_20.se, "p_809->g_20.se", print_hash_value);
    transparent_crc(p_809->g_20.sf, "p_809->g_20.sf", print_hash_value);
    transparent_crc(p_809->g_39, "p_809->g_39", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_809->g_44[i].f0.f0, "p_809->g_44[i].f0.f0", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f1, "p_809->g_44[i].f0.f1", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f2, "p_809->g_44[i].f0.f2", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f3, "p_809->g_44[i].f0.f3", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f4, "p_809->g_44[i].f0.f4", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f5, "p_809->g_44[i].f0.f5", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f6, "p_809->g_44[i].f0.f6", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f7, "p_809->g_44[i].f0.f7", print_hash_value);
        transparent_crc(p_809->g_44[i].f0.f8, "p_809->g_44[i].f0.f8", print_hash_value);

    }
    transparent_crc(p_809->g_51, "p_809->g_51", print_hash_value);
    transparent_crc(p_809->g_58, "p_809->g_58", print_hash_value);
    transparent_crc(p_809->g_65.s0, "p_809->g_65.s0", print_hash_value);
    transparent_crc(p_809->g_65.s1, "p_809->g_65.s1", print_hash_value);
    transparent_crc(p_809->g_65.s2, "p_809->g_65.s2", print_hash_value);
    transparent_crc(p_809->g_65.s3, "p_809->g_65.s3", print_hash_value);
    transparent_crc(p_809->g_65.s4, "p_809->g_65.s4", print_hash_value);
    transparent_crc(p_809->g_65.s5, "p_809->g_65.s5", print_hash_value);
    transparent_crc(p_809->g_65.s6, "p_809->g_65.s6", print_hash_value);
    transparent_crc(p_809->g_65.s7, "p_809->g_65.s7", print_hash_value);
    transparent_crc(p_809->g_65.s8, "p_809->g_65.s8", print_hash_value);
    transparent_crc(p_809->g_65.s9, "p_809->g_65.s9", print_hash_value);
    transparent_crc(p_809->g_65.sa, "p_809->g_65.sa", print_hash_value);
    transparent_crc(p_809->g_65.sb, "p_809->g_65.sb", print_hash_value);
    transparent_crc(p_809->g_65.sc, "p_809->g_65.sc", print_hash_value);
    transparent_crc(p_809->g_65.sd, "p_809->g_65.sd", print_hash_value);
    transparent_crc(p_809->g_65.se, "p_809->g_65.se", print_hash_value);
    transparent_crc(p_809->g_65.sf, "p_809->g_65.sf", print_hash_value);
    transparent_crc(p_809->g_77.s0, "p_809->g_77.s0", print_hash_value);
    transparent_crc(p_809->g_77.s1, "p_809->g_77.s1", print_hash_value);
    transparent_crc(p_809->g_77.s2, "p_809->g_77.s2", print_hash_value);
    transparent_crc(p_809->g_77.s3, "p_809->g_77.s3", print_hash_value);
    transparent_crc(p_809->g_77.s4, "p_809->g_77.s4", print_hash_value);
    transparent_crc(p_809->g_77.s5, "p_809->g_77.s5", print_hash_value);
    transparent_crc(p_809->g_77.s6, "p_809->g_77.s6", print_hash_value);
    transparent_crc(p_809->g_77.s7, "p_809->g_77.s7", print_hash_value);
    transparent_crc(p_809->g_78.s0, "p_809->g_78.s0", print_hash_value);
    transparent_crc(p_809->g_78.s1, "p_809->g_78.s1", print_hash_value);
    transparent_crc(p_809->g_78.s2, "p_809->g_78.s2", print_hash_value);
    transparent_crc(p_809->g_78.s3, "p_809->g_78.s3", print_hash_value);
    transparent_crc(p_809->g_78.s4, "p_809->g_78.s4", print_hash_value);
    transparent_crc(p_809->g_78.s5, "p_809->g_78.s5", print_hash_value);
    transparent_crc(p_809->g_78.s6, "p_809->g_78.s6", print_hash_value);
    transparent_crc(p_809->g_78.s7, "p_809->g_78.s7", print_hash_value);
    transparent_crc(p_809->g_79.x, "p_809->g_79.x", print_hash_value);
    transparent_crc(p_809->g_79.y, "p_809->g_79.y", print_hash_value);
    transparent_crc(p_809->g_79.z, "p_809->g_79.z", print_hash_value);
    transparent_crc(p_809->g_79.w, "p_809->g_79.w", print_hash_value);
    transparent_crc(p_809->g_81.s0, "p_809->g_81.s0", print_hash_value);
    transparent_crc(p_809->g_81.s1, "p_809->g_81.s1", print_hash_value);
    transparent_crc(p_809->g_81.s2, "p_809->g_81.s2", print_hash_value);
    transparent_crc(p_809->g_81.s3, "p_809->g_81.s3", print_hash_value);
    transparent_crc(p_809->g_81.s4, "p_809->g_81.s4", print_hash_value);
    transparent_crc(p_809->g_81.s5, "p_809->g_81.s5", print_hash_value);
    transparent_crc(p_809->g_81.s6, "p_809->g_81.s6", print_hash_value);
    transparent_crc(p_809->g_81.s7, "p_809->g_81.s7", print_hash_value);
    transparent_crc(p_809->g_81.s8, "p_809->g_81.s8", print_hash_value);
    transparent_crc(p_809->g_81.s9, "p_809->g_81.s9", print_hash_value);
    transparent_crc(p_809->g_81.sa, "p_809->g_81.sa", print_hash_value);
    transparent_crc(p_809->g_81.sb, "p_809->g_81.sb", print_hash_value);
    transparent_crc(p_809->g_81.sc, "p_809->g_81.sc", print_hash_value);
    transparent_crc(p_809->g_81.sd, "p_809->g_81.sd", print_hash_value);
    transparent_crc(p_809->g_81.se, "p_809->g_81.se", print_hash_value);
    transparent_crc(p_809->g_81.sf, "p_809->g_81.sf", print_hash_value);
    transparent_crc(p_809->g_89, "p_809->g_89", print_hash_value);
    transparent_crc(p_809->g_106, "p_809->g_106", print_hash_value);
    transparent_crc(p_809->g_126.f0, "p_809->g_126.f0", print_hash_value);
    transparent_crc(p_809->g_128.x, "p_809->g_128.x", print_hash_value);
    transparent_crc(p_809->g_128.y, "p_809->g_128.y", print_hash_value);
    transparent_crc(p_809->g_157, "p_809->g_157", print_hash_value);
    transparent_crc(p_809->g_219, "p_809->g_219", print_hash_value);
    transparent_crc(p_809->g_242, "p_809->g_242", print_hash_value);
    transparent_crc(p_809->g_243, "p_809->g_243", print_hash_value);
    transparent_crc(p_809->g_287, "p_809->g_287", print_hash_value);
    transparent_crc(p_809->g_311.f0, "p_809->g_311.f0", print_hash_value);
    transparent_crc(p_809->g_323, "p_809->g_323", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_809->g_344[i], "p_809->g_344[i]", print_hash_value);

    }
    transparent_crc(p_809->g_378, "p_809->g_378", print_hash_value);
    transparent_crc(p_809->g_382, "p_809->g_382", print_hash_value);
    transparent_crc(p_809->g_416.s0, "p_809->g_416.s0", print_hash_value);
    transparent_crc(p_809->g_416.s1, "p_809->g_416.s1", print_hash_value);
    transparent_crc(p_809->g_416.s2, "p_809->g_416.s2", print_hash_value);
    transparent_crc(p_809->g_416.s3, "p_809->g_416.s3", print_hash_value);
    transparent_crc(p_809->g_416.s4, "p_809->g_416.s4", print_hash_value);
    transparent_crc(p_809->g_416.s5, "p_809->g_416.s5", print_hash_value);
    transparent_crc(p_809->g_416.s6, "p_809->g_416.s6", print_hash_value);
    transparent_crc(p_809->g_416.s7, "p_809->g_416.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_809->g_417[i][j], "p_809->g_417[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_809->g_419.f0.f0, "p_809->g_419.f0.f0", print_hash_value);
    transparent_crc(p_809->g_419.f0.f1, "p_809->g_419.f0.f1", print_hash_value);
    transparent_crc(p_809->g_419.f0.f2, "p_809->g_419.f0.f2", print_hash_value);
    transparent_crc(p_809->g_419.f0.f3, "p_809->g_419.f0.f3", print_hash_value);
    transparent_crc(p_809->g_419.f0.f4, "p_809->g_419.f0.f4", print_hash_value);
    transparent_crc(p_809->g_419.f0.f5, "p_809->g_419.f0.f5", print_hash_value);
    transparent_crc(p_809->g_419.f0.f6, "p_809->g_419.f0.f6", print_hash_value);
    transparent_crc(p_809->g_419.f0.f7, "p_809->g_419.f0.f7", print_hash_value);
    transparent_crc(p_809->g_419.f0.f8, "p_809->g_419.f0.f8", print_hash_value);
    transparent_crc(p_809->g_420, "p_809->g_420", print_hash_value);
    transparent_crc(p_809->g_425, "p_809->g_425", print_hash_value);
    transparent_crc(p_809->g_442, "p_809->g_442", print_hash_value);
    transparent_crc(p_809->g_443.x, "p_809->g_443.x", print_hash_value);
    transparent_crc(p_809->g_443.y, "p_809->g_443.y", print_hash_value);
    transparent_crc(p_809->g_443.z, "p_809->g_443.z", print_hash_value);
    transparent_crc(p_809->g_443.w, "p_809->g_443.w", print_hash_value);
    transparent_crc(p_809->g_449.x, "p_809->g_449.x", print_hash_value);
    transparent_crc(p_809->g_449.y, "p_809->g_449.y", print_hash_value);
    transparent_crc(p_809->g_449.z, "p_809->g_449.z", print_hash_value);
    transparent_crc(p_809->g_449.w, "p_809->g_449.w", print_hash_value);
    transparent_crc(p_809->g_450, "p_809->g_450", print_hash_value);
    transparent_crc(p_809->g_465, "p_809->g_465", print_hash_value);
    transparent_crc(p_809->g_468.s0, "p_809->g_468.s0", print_hash_value);
    transparent_crc(p_809->g_468.s1, "p_809->g_468.s1", print_hash_value);
    transparent_crc(p_809->g_468.s2, "p_809->g_468.s2", print_hash_value);
    transparent_crc(p_809->g_468.s3, "p_809->g_468.s3", print_hash_value);
    transparent_crc(p_809->g_468.s4, "p_809->g_468.s4", print_hash_value);
    transparent_crc(p_809->g_468.s5, "p_809->g_468.s5", print_hash_value);
    transparent_crc(p_809->g_468.s6, "p_809->g_468.s6", print_hash_value);
    transparent_crc(p_809->g_468.s7, "p_809->g_468.s7", print_hash_value);
    transparent_crc(p_809->g_468.s8, "p_809->g_468.s8", print_hash_value);
    transparent_crc(p_809->g_468.s9, "p_809->g_468.s9", print_hash_value);
    transparent_crc(p_809->g_468.sa, "p_809->g_468.sa", print_hash_value);
    transparent_crc(p_809->g_468.sb, "p_809->g_468.sb", print_hash_value);
    transparent_crc(p_809->g_468.sc, "p_809->g_468.sc", print_hash_value);
    transparent_crc(p_809->g_468.sd, "p_809->g_468.sd", print_hash_value);
    transparent_crc(p_809->g_468.se, "p_809->g_468.se", print_hash_value);
    transparent_crc(p_809->g_468.sf, "p_809->g_468.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_809->g_485[i], "p_809->g_485[i]", print_hash_value);

    }
    transparent_crc(p_809->g_494.s0, "p_809->g_494.s0", print_hash_value);
    transparent_crc(p_809->g_494.s1, "p_809->g_494.s1", print_hash_value);
    transparent_crc(p_809->g_494.s2, "p_809->g_494.s2", print_hash_value);
    transparent_crc(p_809->g_494.s3, "p_809->g_494.s3", print_hash_value);
    transparent_crc(p_809->g_494.s4, "p_809->g_494.s4", print_hash_value);
    transparent_crc(p_809->g_494.s5, "p_809->g_494.s5", print_hash_value);
    transparent_crc(p_809->g_494.s6, "p_809->g_494.s6", print_hash_value);
    transparent_crc(p_809->g_494.s7, "p_809->g_494.s7", print_hash_value);
    transparent_crc(p_809->g_497.x, "p_809->g_497.x", print_hash_value);
    transparent_crc(p_809->g_497.y, "p_809->g_497.y", print_hash_value);
    transparent_crc(p_809->g_497.z, "p_809->g_497.z", print_hash_value);
    transparent_crc(p_809->g_497.w, "p_809->g_497.w", print_hash_value);
    transparent_crc(p_809->g_501.f0, "p_809->g_501.f0", print_hash_value);
    transparent_crc(p_809->g_501.f1, "p_809->g_501.f1", print_hash_value);
    transparent_crc(p_809->g_501.f2, "p_809->g_501.f2", print_hash_value);
    transparent_crc(p_809->g_501.f3, "p_809->g_501.f3", print_hash_value);
    transparent_crc(p_809->g_501.f4, "p_809->g_501.f4", print_hash_value);
    transparent_crc(p_809->g_501.f5, "p_809->g_501.f5", print_hash_value);
    transparent_crc(p_809->g_501.f6, "p_809->g_501.f6", print_hash_value);
    transparent_crc(p_809->g_501.f7, "p_809->g_501.f7", print_hash_value);
    transparent_crc(p_809->g_501.f8, "p_809->g_501.f8", print_hash_value);
    transparent_crc(p_809->g_514, "p_809->g_514", print_hash_value);
    transparent_crc(p_809->g_517.f0, "p_809->g_517.f0", print_hash_value);
    transparent_crc(p_809->g_517.f1, "p_809->g_517.f1", print_hash_value);
    transparent_crc(p_809->g_517.f2, "p_809->g_517.f2", print_hash_value);
    transparent_crc(p_809->g_517.f3, "p_809->g_517.f3", print_hash_value);
    transparent_crc(p_809->g_517.f4, "p_809->g_517.f4", print_hash_value);
    transparent_crc(p_809->g_517.f5, "p_809->g_517.f5", print_hash_value);
    transparent_crc(p_809->g_517.f6, "p_809->g_517.f6", print_hash_value);
    transparent_crc(p_809->g_517.f7, "p_809->g_517.f7", print_hash_value);
    transparent_crc(p_809->g_517.f8, "p_809->g_517.f8", print_hash_value);
    transparent_crc(p_809->g_567.s0, "p_809->g_567.s0", print_hash_value);
    transparent_crc(p_809->g_567.s1, "p_809->g_567.s1", print_hash_value);
    transparent_crc(p_809->g_567.s2, "p_809->g_567.s2", print_hash_value);
    transparent_crc(p_809->g_567.s3, "p_809->g_567.s3", print_hash_value);
    transparent_crc(p_809->g_567.s4, "p_809->g_567.s4", print_hash_value);
    transparent_crc(p_809->g_567.s5, "p_809->g_567.s5", print_hash_value);
    transparent_crc(p_809->g_567.s6, "p_809->g_567.s6", print_hash_value);
    transparent_crc(p_809->g_567.s7, "p_809->g_567.s7", print_hash_value);
    transparent_crc(p_809->g_568.s0, "p_809->g_568.s0", print_hash_value);
    transparent_crc(p_809->g_568.s1, "p_809->g_568.s1", print_hash_value);
    transparent_crc(p_809->g_568.s2, "p_809->g_568.s2", print_hash_value);
    transparent_crc(p_809->g_568.s3, "p_809->g_568.s3", print_hash_value);
    transparent_crc(p_809->g_568.s4, "p_809->g_568.s4", print_hash_value);
    transparent_crc(p_809->g_568.s5, "p_809->g_568.s5", print_hash_value);
    transparent_crc(p_809->g_568.s6, "p_809->g_568.s6", print_hash_value);
    transparent_crc(p_809->g_568.s7, "p_809->g_568.s7", print_hash_value);
    transparent_crc(p_809->g_571.s0, "p_809->g_571.s0", print_hash_value);
    transparent_crc(p_809->g_571.s1, "p_809->g_571.s1", print_hash_value);
    transparent_crc(p_809->g_571.s2, "p_809->g_571.s2", print_hash_value);
    transparent_crc(p_809->g_571.s3, "p_809->g_571.s3", print_hash_value);
    transparent_crc(p_809->g_571.s4, "p_809->g_571.s4", print_hash_value);
    transparent_crc(p_809->g_571.s5, "p_809->g_571.s5", print_hash_value);
    transparent_crc(p_809->g_571.s6, "p_809->g_571.s6", print_hash_value);
    transparent_crc(p_809->g_571.s7, "p_809->g_571.s7", print_hash_value);
    transparent_crc(p_809->g_577.s0, "p_809->g_577.s0", print_hash_value);
    transparent_crc(p_809->g_577.s1, "p_809->g_577.s1", print_hash_value);
    transparent_crc(p_809->g_577.s2, "p_809->g_577.s2", print_hash_value);
    transparent_crc(p_809->g_577.s3, "p_809->g_577.s3", print_hash_value);
    transparent_crc(p_809->g_577.s4, "p_809->g_577.s4", print_hash_value);
    transparent_crc(p_809->g_577.s5, "p_809->g_577.s5", print_hash_value);
    transparent_crc(p_809->g_577.s6, "p_809->g_577.s6", print_hash_value);
    transparent_crc(p_809->g_577.s7, "p_809->g_577.s7", print_hash_value);
    transparent_crc(p_809->g_577.s8, "p_809->g_577.s8", print_hash_value);
    transparent_crc(p_809->g_577.s9, "p_809->g_577.s9", print_hash_value);
    transparent_crc(p_809->g_577.sa, "p_809->g_577.sa", print_hash_value);
    transparent_crc(p_809->g_577.sb, "p_809->g_577.sb", print_hash_value);
    transparent_crc(p_809->g_577.sc, "p_809->g_577.sc", print_hash_value);
    transparent_crc(p_809->g_577.sd, "p_809->g_577.sd", print_hash_value);
    transparent_crc(p_809->g_577.se, "p_809->g_577.se", print_hash_value);
    transparent_crc(p_809->g_577.sf, "p_809->g_577.sf", print_hash_value);
    transparent_crc(p_809->g_578.s0, "p_809->g_578.s0", print_hash_value);
    transparent_crc(p_809->g_578.s1, "p_809->g_578.s1", print_hash_value);
    transparent_crc(p_809->g_578.s2, "p_809->g_578.s2", print_hash_value);
    transparent_crc(p_809->g_578.s3, "p_809->g_578.s3", print_hash_value);
    transparent_crc(p_809->g_578.s4, "p_809->g_578.s4", print_hash_value);
    transparent_crc(p_809->g_578.s5, "p_809->g_578.s5", print_hash_value);
    transparent_crc(p_809->g_578.s6, "p_809->g_578.s6", print_hash_value);
    transparent_crc(p_809->g_578.s7, "p_809->g_578.s7", print_hash_value);
    transparent_crc(p_809->g_581.s0, "p_809->g_581.s0", print_hash_value);
    transparent_crc(p_809->g_581.s1, "p_809->g_581.s1", print_hash_value);
    transparent_crc(p_809->g_581.s2, "p_809->g_581.s2", print_hash_value);
    transparent_crc(p_809->g_581.s3, "p_809->g_581.s3", print_hash_value);
    transparent_crc(p_809->g_581.s4, "p_809->g_581.s4", print_hash_value);
    transparent_crc(p_809->g_581.s5, "p_809->g_581.s5", print_hash_value);
    transparent_crc(p_809->g_581.s6, "p_809->g_581.s6", print_hash_value);
    transparent_crc(p_809->g_581.s7, "p_809->g_581.s7", print_hash_value);
    transparent_crc(p_809->g_581.s8, "p_809->g_581.s8", print_hash_value);
    transparent_crc(p_809->g_581.s9, "p_809->g_581.s9", print_hash_value);
    transparent_crc(p_809->g_581.sa, "p_809->g_581.sa", print_hash_value);
    transparent_crc(p_809->g_581.sb, "p_809->g_581.sb", print_hash_value);
    transparent_crc(p_809->g_581.sc, "p_809->g_581.sc", print_hash_value);
    transparent_crc(p_809->g_581.sd, "p_809->g_581.sd", print_hash_value);
    transparent_crc(p_809->g_581.se, "p_809->g_581.se", print_hash_value);
    transparent_crc(p_809->g_581.sf, "p_809->g_581.sf", print_hash_value);
    transparent_crc(p_809->g_590.x, "p_809->g_590.x", print_hash_value);
    transparent_crc(p_809->g_590.y, "p_809->g_590.y", print_hash_value);
    transparent_crc(p_809->g_590.z, "p_809->g_590.z", print_hash_value);
    transparent_crc(p_809->g_590.w, "p_809->g_590.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_809->g_618[i].f0, "p_809->g_618[i].f0", print_hash_value);
        transparent_crc(p_809->g_618[i].f1, "p_809->g_618[i].f1", print_hash_value);
        transparent_crc(p_809->g_618[i].f2, "p_809->g_618[i].f2", print_hash_value);
        transparent_crc(p_809->g_618[i].f3, "p_809->g_618[i].f3", print_hash_value);
        transparent_crc(p_809->g_618[i].f4, "p_809->g_618[i].f4", print_hash_value);
        transparent_crc(p_809->g_618[i].f5, "p_809->g_618[i].f5", print_hash_value);
        transparent_crc(p_809->g_618[i].f6, "p_809->g_618[i].f6", print_hash_value);
        transparent_crc(p_809->g_618[i].f7, "p_809->g_618[i].f7", print_hash_value);
        transparent_crc(p_809->g_618[i].f8, "p_809->g_618[i].f8", print_hash_value);

    }
    transparent_crc(p_809->g_643.s0, "p_809->g_643.s0", print_hash_value);
    transparent_crc(p_809->g_643.s1, "p_809->g_643.s1", print_hash_value);
    transparent_crc(p_809->g_643.s2, "p_809->g_643.s2", print_hash_value);
    transparent_crc(p_809->g_643.s3, "p_809->g_643.s3", print_hash_value);
    transparent_crc(p_809->g_643.s4, "p_809->g_643.s4", print_hash_value);
    transparent_crc(p_809->g_643.s5, "p_809->g_643.s5", print_hash_value);
    transparent_crc(p_809->g_643.s6, "p_809->g_643.s6", print_hash_value);
    transparent_crc(p_809->g_643.s7, "p_809->g_643.s7", print_hash_value);
    transparent_crc(p_809->g_643.s8, "p_809->g_643.s8", print_hash_value);
    transparent_crc(p_809->g_643.s9, "p_809->g_643.s9", print_hash_value);
    transparent_crc(p_809->g_643.sa, "p_809->g_643.sa", print_hash_value);
    transparent_crc(p_809->g_643.sb, "p_809->g_643.sb", print_hash_value);
    transparent_crc(p_809->g_643.sc, "p_809->g_643.sc", print_hash_value);
    transparent_crc(p_809->g_643.sd, "p_809->g_643.sd", print_hash_value);
    transparent_crc(p_809->g_643.se, "p_809->g_643.se", print_hash_value);
    transparent_crc(p_809->g_643.sf, "p_809->g_643.sf", print_hash_value);
    transparent_crc(p_809->g_649, "p_809->g_649", print_hash_value);
    transparent_crc(p_809->g_674.s0, "p_809->g_674.s0", print_hash_value);
    transparent_crc(p_809->g_674.s1, "p_809->g_674.s1", print_hash_value);
    transparent_crc(p_809->g_674.s2, "p_809->g_674.s2", print_hash_value);
    transparent_crc(p_809->g_674.s3, "p_809->g_674.s3", print_hash_value);
    transparent_crc(p_809->g_674.s4, "p_809->g_674.s4", print_hash_value);
    transparent_crc(p_809->g_674.s5, "p_809->g_674.s5", print_hash_value);
    transparent_crc(p_809->g_674.s6, "p_809->g_674.s6", print_hash_value);
    transparent_crc(p_809->g_674.s7, "p_809->g_674.s7", print_hash_value);
    transparent_crc(p_809->g_674.s8, "p_809->g_674.s8", print_hash_value);
    transparent_crc(p_809->g_674.s9, "p_809->g_674.s9", print_hash_value);
    transparent_crc(p_809->g_674.sa, "p_809->g_674.sa", print_hash_value);
    transparent_crc(p_809->g_674.sb, "p_809->g_674.sb", print_hash_value);
    transparent_crc(p_809->g_674.sc, "p_809->g_674.sc", print_hash_value);
    transparent_crc(p_809->g_674.sd, "p_809->g_674.sd", print_hash_value);
    transparent_crc(p_809->g_674.se, "p_809->g_674.se", print_hash_value);
    transparent_crc(p_809->g_674.sf, "p_809->g_674.sf", print_hash_value);
    transparent_crc(p_809->g_675.x, "p_809->g_675.x", print_hash_value);
    transparent_crc(p_809->g_675.y, "p_809->g_675.y", print_hash_value);
    transparent_crc(p_809->g_675.z, "p_809->g_675.z", print_hash_value);
    transparent_crc(p_809->g_675.w, "p_809->g_675.w", print_hash_value);
    transparent_crc(p_809->g_678.x, "p_809->g_678.x", print_hash_value);
    transparent_crc(p_809->g_678.y, "p_809->g_678.y", print_hash_value);
    transparent_crc(p_809->g_678.z, "p_809->g_678.z", print_hash_value);
    transparent_crc(p_809->g_678.w, "p_809->g_678.w", print_hash_value);
    transparent_crc(p_809->g_706.x, "p_809->g_706.x", print_hash_value);
    transparent_crc(p_809->g_706.y, "p_809->g_706.y", print_hash_value);
    transparent_crc(p_809->g_749.s0, "p_809->g_749.s0", print_hash_value);
    transparent_crc(p_809->g_749.s1, "p_809->g_749.s1", print_hash_value);
    transparent_crc(p_809->g_749.s2, "p_809->g_749.s2", print_hash_value);
    transparent_crc(p_809->g_749.s3, "p_809->g_749.s3", print_hash_value);
    transparent_crc(p_809->g_749.s4, "p_809->g_749.s4", print_hash_value);
    transparent_crc(p_809->g_749.s5, "p_809->g_749.s5", print_hash_value);
    transparent_crc(p_809->g_749.s6, "p_809->g_749.s6", print_hash_value);
    transparent_crc(p_809->g_749.s7, "p_809->g_749.s7", print_hash_value);
    transparent_crc(p_809->g_749.s8, "p_809->g_749.s8", print_hash_value);
    transparent_crc(p_809->g_749.s9, "p_809->g_749.s9", print_hash_value);
    transparent_crc(p_809->g_749.sa, "p_809->g_749.sa", print_hash_value);
    transparent_crc(p_809->g_749.sb, "p_809->g_749.sb", print_hash_value);
    transparent_crc(p_809->g_749.sc, "p_809->g_749.sc", print_hash_value);
    transparent_crc(p_809->g_749.sd, "p_809->g_749.sd", print_hash_value);
    transparent_crc(p_809->g_749.se, "p_809->g_749.se", print_hash_value);
    transparent_crc(p_809->g_749.sf, "p_809->g_749.sf", print_hash_value);
    transparent_crc(p_809->g_750.s0, "p_809->g_750.s0", print_hash_value);
    transparent_crc(p_809->g_750.s1, "p_809->g_750.s1", print_hash_value);
    transparent_crc(p_809->g_750.s2, "p_809->g_750.s2", print_hash_value);
    transparent_crc(p_809->g_750.s3, "p_809->g_750.s3", print_hash_value);
    transparent_crc(p_809->g_750.s4, "p_809->g_750.s4", print_hash_value);
    transparent_crc(p_809->g_750.s5, "p_809->g_750.s5", print_hash_value);
    transparent_crc(p_809->g_750.s6, "p_809->g_750.s6", print_hash_value);
    transparent_crc(p_809->g_750.s7, "p_809->g_750.s7", print_hash_value);
    transparent_crc(p_809->g_757.s0, "p_809->g_757.s0", print_hash_value);
    transparent_crc(p_809->g_757.s1, "p_809->g_757.s1", print_hash_value);
    transparent_crc(p_809->g_757.s2, "p_809->g_757.s2", print_hash_value);
    transparent_crc(p_809->g_757.s3, "p_809->g_757.s3", print_hash_value);
    transparent_crc(p_809->g_757.s4, "p_809->g_757.s4", print_hash_value);
    transparent_crc(p_809->g_757.s5, "p_809->g_757.s5", print_hash_value);
    transparent_crc(p_809->g_757.s6, "p_809->g_757.s6", print_hash_value);
    transparent_crc(p_809->g_757.s7, "p_809->g_757.s7", print_hash_value);
    transparent_crc(p_809->g_757.s8, "p_809->g_757.s8", print_hash_value);
    transparent_crc(p_809->g_757.s9, "p_809->g_757.s9", print_hash_value);
    transparent_crc(p_809->g_757.sa, "p_809->g_757.sa", print_hash_value);
    transparent_crc(p_809->g_757.sb, "p_809->g_757.sb", print_hash_value);
    transparent_crc(p_809->g_757.sc, "p_809->g_757.sc", print_hash_value);
    transparent_crc(p_809->g_757.sd, "p_809->g_757.sd", print_hash_value);
    transparent_crc(p_809->g_757.se, "p_809->g_757.se", print_hash_value);
    transparent_crc(p_809->g_757.sf, "p_809->g_757.sf", print_hash_value);
    transparent_crc(p_809->g_758.s0, "p_809->g_758.s0", print_hash_value);
    transparent_crc(p_809->g_758.s1, "p_809->g_758.s1", print_hash_value);
    transparent_crc(p_809->g_758.s2, "p_809->g_758.s2", print_hash_value);
    transparent_crc(p_809->g_758.s3, "p_809->g_758.s3", print_hash_value);
    transparent_crc(p_809->g_758.s4, "p_809->g_758.s4", print_hash_value);
    transparent_crc(p_809->g_758.s5, "p_809->g_758.s5", print_hash_value);
    transparent_crc(p_809->g_758.s6, "p_809->g_758.s6", print_hash_value);
    transparent_crc(p_809->g_758.s7, "p_809->g_758.s7", print_hash_value);
    transparent_crc(p_809->g_758.s8, "p_809->g_758.s8", print_hash_value);
    transparent_crc(p_809->g_758.s9, "p_809->g_758.s9", print_hash_value);
    transparent_crc(p_809->g_758.sa, "p_809->g_758.sa", print_hash_value);
    transparent_crc(p_809->g_758.sb, "p_809->g_758.sb", print_hash_value);
    transparent_crc(p_809->g_758.sc, "p_809->g_758.sc", print_hash_value);
    transparent_crc(p_809->g_758.sd, "p_809->g_758.sd", print_hash_value);
    transparent_crc(p_809->g_758.se, "p_809->g_758.se", print_hash_value);
    transparent_crc(p_809->g_758.sf, "p_809->g_758.sf", print_hash_value);
    transparent_crc(p_809->g_771, "p_809->g_771", print_hash_value);
    transparent_crc(p_809->g_783.x, "p_809->g_783.x", print_hash_value);
    transparent_crc(p_809->g_783.y, "p_809->g_783.y", print_hash_value);
    transparent_crc(p_809->g_783.z, "p_809->g_783.z", print_hash_value);
    transparent_crc(p_809->g_783.w, "p_809->g_783.w", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_809->g_790[i][j], "p_809->g_790[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_809->g_798.x, "p_809->g_798.x", print_hash_value);
    transparent_crc(p_809->g_798.y, "p_809->g_798.y", print_hash_value);
    transparent_crc(p_809->v_collective, "p_809->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 64; i++)
            transparent_crc(p_809->g_special_values[i + 64 * get_linear_group_id()], "p_809->g_special_values[i + 64 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 64; i++)
            transparent_crc(p_809->l_special_values[i], "p_809->l_special_values[i]", print_hash_value);
    transparent_crc(p_809->l_comm_values[get_linear_local_id()], "p_809->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_809->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_809->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
