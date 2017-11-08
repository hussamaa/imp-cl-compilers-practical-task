// --atomics 99 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 95,17,1 -l 95,1,1
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
{35,50,90,74,34,46,53,83,11,70,4,94,71,87,5,14,79,52,82,68,81,24,69,72,54,30,64,45,32,92,28,3,47,7,17,21,60,80,15,59,2,16,40,89,39,19,36,0,51,78,62,66,76,18,37,9,44,41,57,58,86,84,6,63,23,56,42,1,77,31,91,27,22,55,13,8,93,88,48,12,73,61,29,67,33,75,85,38,65,20,26,10,25,49,43}, // permutation 0
{17,35,50,64,52,59,45,73,19,86,80,71,3,90,13,31,33,65,20,41,37,25,91,47,16,54,92,5,27,18,82,89,46,83,7,0,8,24,49,34,10,30,87,76,63,88,94,69,56,79,68,4,36,40,1,75,93,38,57,78,6,53,58,42,26,48,70,84,67,81,55,61,29,21,9,51,60,77,43,12,74,32,11,44,62,28,23,66,14,22,85,2,39,15,72}, // permutation 1
{48,4,76,13,49,38,69,46,27,81,52,67,53,70,28,33,80,5,58,71,19,35,15,79,17,54,40,87,2,25,72,3,6,61,57,16,21,9,66,42,8,31,1,85,89,47,86,88,84,20,64,78,59,83,45,94,55,74,44,73,10,51,92,93,41,11,63,77,12,91,34,18,65,39,29,30,43,14,82,90,23,22,62,0,60,26,50,36,56,24,68,37,32,7,75}, // permutation 2
{92,75,23,84,41,32,62,69,55,16,54,64,79,7,30,25,71,26,51,33,36,60,76,37,19,48,29,49,91,44,4,70,43,10,61,22,40,68,5,15,17,89,0,63,31,34,24,21,45,78,81,73,88,12,35,9,72,2,57,86,82,67,39,18,27,38,59,56,52,3,87,42,6,77,94,11,50,65,8,93,47,46,66,20,1,74,53,28,80,13,90,83,85,58,14}, // permutation 3
{90,45,6,46,80,35,29,82,57,75,72,58,54,52,67,38,39,11,61,83,18,9,32,62,16,70,43,48,28,44,55,8,50,21,86,42,25,2,34,10,74,89,24,12,36,31,73,60,87,92,5,37,66,78,56,69,77,71,33,68,13,22,79,4,15,76,20,53,14,91,51,65,64,30,17,3,88,41,59,0,7,81,23,63,40,26,27,84,85,94,93,47,49,1,19}, // permutation 4
{89,19,32,81,12,91,44,29,6,73,10,74,39,78,26,0,31,86,15,58,34,62,79,16,28,64,49,11,71,23,9,77,85,53,45,35,46,63,88,20,14,27,40,38,50,25,69,54,66,33,3,75,84,70,52,13,2,30,36,1,37,56,83,24,48,60,61,72,93,18,8,87,43,59,90,7,5,17,55,47,21,51,41,94,67,82,42,76,65,68,80,92,57,4,22}, // permutation 5
{6,57,54,91,94,20,73,89,4,65,8,72,63,88,70,76,79,55,48,67,12,30,9,71,35,41,46,13,3,40,84,66,86,42,37,5,7,49,78,11,44,33,39,22,27,17,75,64,36,74,52,10,85,24,58,69,45,18,15,68,81,61,51,53,25,43,77,21,80,28,92,26,87,32,29,93,16,47,2,23,1,62,31,83,0,19,56,14,60,82,59,34,50,90,38}, // permutation 6
{8,83,92,5,20,73,38,6,40,82,31,50,71,66,55,25,70,54,32,37,56,1,22,74,10,47,65,27,17,72,87,57,12,42,58,26,60,0,39,29,84,34,75,53,36,76,63,30,2,93,13,59,3,89,68,23,45,77,67,80,86,16,52,24,94,85,69,28,90,33,48,44,62,79,14,46,51,41,9,21,4,18,11,43,61,81,88,19,7,15,64,49,91,35,78}, // permutation 7
{88,66,93,63,26,58,81,22,40,69,68,42,19,28,61,2,53,20,51,76,43,74,90,31,21,47,36,41,34,50,65,71,23,83,1,25,64,46,11,60,14,80,3,49,39,77,89,54,9,70,87,24,30,6,62,48,85,10,7,79,73,67,8,15,57,75,18,27,37,86,32,52,91,92,0,38,94,78,84,45,59,35,33,55,72,29,13,12,5,17,56,82,16,4,44}, // permutation 8
{61,50,79,47,39,26,30,14,82,73,57,13,76,63,21,89,55,23,94,24,9,32,28,59,67,88,52,43,5,91,34,11,17,74,15,64,93,85,33,92,80,90,87,37,31,77,8,72,29,65,16,58,60,75,51,36,18,27,10,12,68,62,53,86,20,71,84,78,1,49,42,3,2,83,40,6,44,35,45,69,19,4,66,7,70,48,22,25,46,81,38,41,54,0,56} // permutation 9
};

// Seed: 1089150376

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int8_t, 8) g_19;
    volatile VECTOR(int8_t, 16) g_20;
    uint32_t g_43;
    int64_t g_46;
    int32_t g_180;
    int32_t * volatile g_179[1];
    int32_t * volatile g_181;
    uint32_t g_210[3];
    int64_t *g_218;
    int64_t **g_217;
    int32_t *g_228;
    int32_t **g_227;
    volatile int32_t g_229;
    volatile int32_t g_230;
    int32_t g_231[9][4];
    volatile int32_t g_234;
    int32_t g_235;
    int32_t g_238;
    int64_t g_277;
    VECTOR(uint32_t, 2) g_281;
    uint8_t g_295;
    int16_t g_297[6];
    VECTOR(uint64_t, 4) g_302;
    VECTOR(int32_t, 4) g_319;
    VECTOR(int32_t, 8) g_335;
    VECTOR(uint16_t, 8) g_372;
    VECTOR(int8_t, 2) g_382;
    uint32_t *g_388[10];
    VECTOR(int16_t, 8) g_480;
    uint64_t *g_541;
    uint8_t *g_546;
    uint8_t **g_545;
    VECTOR(int16_t, 16) g_558;
    volatile VECTOR(int32_t, 2) g_580;
    VECTOR(int32_t, 2) g_583;
    volatile VECTOR(int32_t, 2) g_585;
    volatile VECTOR(int32_t, 4) g_587;
    volatile VECTOR(int32_t, 2) g_588;
    volatile int32_t * volatile g_654;
    volatile int32_t * volatile * volatile g_655;
    volatile int32_t * volatile * volatile g_656;
    int32_t * volatile g_663;
    uint32_t g_670;
    volatile VECTOR(uint16_t, 16) g_736;
    int16_t *g_740;
    int16_t g_747[5][3];
    uint64_t g_759;
    VECTOR(int64_t, 8) g_772;
    VECTOR(int8_t, 4) g_803;
    VECTOR(int8_t, 2) g_809;
    VECTOR(uint8_t, 2) g_826;
    VECTOR(uint8_t, 8) g_829;
    volatile VECTOR(uint8_t, 2) g_830;
    VECTOR(uint8_t, 8) g_831;
    volatile VECTOR(uint8_t, 4) g_833;
    VECTOR(uint8_t, 16) g_834;
    VECTOR(uint64_t, 16) g_840;
    volatile VECTOR(int16_t, 8) g_845;
    volatile VECTOR(int16_t, 16) g_846;
    VECTOR(int8_t, 4) g_867;
    VECTOR(int8_t, 16) g_868;
    volatile VECTOR(int8_t, 4) g_869;
    volatile VECTOR(int32_t, 2) g_884;
    VECTOR(int32_t, 8) g_897;
    VECTOR(int32_t, 16) g_925;
    VECTOR(int64_t, 2) g_934;
    VECTOR(uint8_t, 16) g_936;
    volatile int8_t g_947;
    volatile int8_t *g_946;
    volatile int8_t **g_945;
    VECTOR(uint32_t, 2) g_969;
    VECTOR(int32_t, 4) g_990;
    int64_t g_1000;
    volatile VECTOR(uint16_t, 16) g_1008;
    int64_t *g_1020;
    uint32_t g_1050;
    int16_t g_1055;
    volatile VECTOR(uint32_t, 16) g_1058;
    volatile VECTOR(uint32_t, 16) g_1059;
    volatile VECTOR(int16_t, 16) g_1066;
    volatile VECTOR(int64_t, 8) g_1071;
    volatile VECTOR(int64_t, 16) g_1073;
    VECTOR(uint16_t, 4) g_1090;
    int32_t g_1103;
    volatile VECTOR(uint16_t, 16) g_1123;
    VECTOR(int64_t, 16) g_1124;
    volatile VECTOR(int32_t, 2) g_1145;
    volatile VECTOR(int32_t, 2) g_1169;
    volatile int32_t g_1180;
    VECTOR(int8_t, 2) g_1214;
    VECTOR(uint8_t, 8) g_1240;
    VECTOR(int8_t, 4) g_1241;
    uint64_t g_1244;
    VECTOR(uint8_t, 16) g_1248;
    VECTOR(int32_t, 4) g_1270;
    VECTOR(uint64_t, 16) g_1344;
    VECTOR(int64_t, 16) g_1347;
    volatile VECTOR(uint64_t, 16) g_1377;
    uint16_t **g_1387;
    volatile VECTOR(uint16_t, 16) g_1395;
    VECTOR(uint32_t, 16) g_1397;
    volatile VECTOR(uint32_t, 16) g_1401;
    volatile VECTOR(int32_t, 16) g_1404;
    VECTOR(uint32_t, 2) g_1442;
    VECTOR(int32_t, 2) g_1452;
    VECTOR(uint16_t, 8) g_1475;
    VECTOR(uint8_t, 8) g_1489;
    volatile VECTOR(uint64_t, 8) g_1502;
    uint32_t g_1510;
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
int16_t  func_1(struct S0 * p_1621);
uint16_t  func_7(int32_t  p_8, int8_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, struct S0 * p_1621);
uint32_t  func_13(int64_t  p_14, uint64_t  p_15, int32_t  p_16, uint8_t  p_17, int8_t  p_18, struct S0 * p_1621);
int8_t  func_26(uint32_t  p_27, int64_t  p_28, int64_t  p_29, int64_t  p_30, uint32_t  p_31, struct S0 * p_1621);
int64_t  func_36(uint32_t  p_37, int64_t  p_38, uint64_t  p_39, int32_t  p_40, struct S0 * p_1621);
uint32_t * func_51(uint32_t * p_52, struct S0 * p_1621);
int32_t  func_184(int64_t ** p_185, uint32_t  p_186, int64_t ** p_187, struct S0 * p_1621);
int64_t ** func_188(int16_t  p_189, uint8_t  p_190, uint64_t  p_191, struct S0 * p_1621);
int16_t  func_192(int32_t ** p_193, struct S0 * p_1621);
int32_t ** func_194(int32_t * p_195, int64_t * p_196, uint16_t  p_197, int64_t ** p_198, int32_t  p_199, struct S0 * p_1621);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1621->g_comm_values p_1621->l_comm_values p_1621->g_19 p_1621->g_20 p_1621->g_46 p_1621->g_181 p_1621->g_180 p_1621->g_210 p_1621->g_217 p_1621->g_227 p_1621->g_231 p_1621->g_238 p_1621->g_228 p_1621->g_277 p_1621->g_235 p_1621->g_382 p_1621->g_281 p_1621->g_218 p_1621->g_480 p_1621->g_372 p_1621->g_302 p_1621->g_295 p_1621->g_545 p_1621->g_297 p_1621->g_580 p_1621->g_583 p_1621->g_585 p_1621->g_587 p_1621->g_588 p_1621->g_546 p_1621->g_558 p_1621->g_43 p_1621->g_654 p_1621->g_656 p_1621->g_663 p_1621->g_670 p_1621->g_736 p_1621->g_740 p_1621->g_230 p_1621->g_759 p_1621->g_772 p_1621->g_803 p_1621->g_809 p_1621->g_826 p_1621->g_829 p_1621->g_830 p_1621->g_831 p_1621->g_833 p_1621->g_834 p_1621->g_840 p_1621->g_845 p_1621->g_846 p_1621->g_319 p_1621->g_747 p_1621->g_867 p_1621->g_868 p_1621->g_869 p_1621->g_897 p_1621->g_541 p_1621->g_946 p_1621->g_947 p_1621->g_1008 p_1621->g_945 p_1621->g_1055 p_1621->g_1058 p_1621->g_1059 p_1621->g_1066 p_1621->g_1071 p_1621->g_1073 p_1621->g_990 p_1621->g_1090 p_1621->g_1123 p_1621->g_1124 p_1621->g_1145 p_1621->g_936 p_1621->g_1169 p_1621->g_1180 p_1621->g_1240 p_1621->g_1241 p_1621->g_1248 p_1621->g_1270 p_1621->g_1344 p_1621->g_1347 p_1621->g_1377 p_1621->g_1387 p_1621->g_1395 p_1621->g_1397 p_1621->g_1401 p_1621->g_1404 p_1621->g_1244 p_1621->g_335 p_1621->g_1442 p_1621->g_1452 p_1621->g_1000 p_1621->g_1475 p_1621->g_1214 p_1621->g_1489 p_1621->g_1502 p_1621->g_1510
 * writes: p_1621->g_43 p_1621->g_46 p_1621->g_180 p_1621->g_217 p_1621->g_231 p_1621->g_235 p_1621->g_238 p_1621->g_228 p_1621->g_277 p_1621->g_388 p_1621->g_382 p_1621->g_210 p_1621->g_297 p_1621->g_541 p_1621->g_281 p_1621->g_545 p_1621->g_480 p_1621->g_558 p_1621->g_654 p_1621->g_295 p_1621->g_670 p_1621->g_740 p_1621->g_747 p_1621->g_302 p_1621->g_759 p_1621->g_840 p_1621->l_comm_values p_1621->g_867 p_1621->g_335 p_1621->g_1020 p_1621->g_1050 p_1621->g_372 p_1621->g_772 p_1621->g_1055 p_1621->g_934 p_1621->g_19 p_1621->g_1244 p_1621->g_936 p_1621->g_546 p_1621->g_1240 p_1621->g_1000 p_1621->g_803 p_1621->g_1270
 */
int16_t  func_1(struct S0 * p_1621)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_2 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), 0L, 7L, 0L, (VECTOR(int32_t, 2))(7L, 0L), (VECTOR(int32_t, 2))(7L, 0L), 7L, 0L, 7L, 0L);
    VECTOR(int8_t, 2) l_21 = (VECTOR(int8_t, 2))(0x04L, 0x37L);
    VECTOR(int8_t, 16) l_22 = (VECTOR(int8_t, 16))(0x46L, (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, 0x1FL), 0x1FL), 0x1FL, 0x46L, 0x1FL, (VECTOR(int8_t, 2))(0x46L, 0x1FL), (VECTOR(int8_t, 2))(0x46L, 0x1FL), 0x46L, 0x1FL, 0x46L, 0x1FL);
    VECTOR(int8_t, 4) l_25 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-3L)), (-3L));
    uint32_t *l_41 = (void*)0;
    uint32_t *l_42 = &p_1621->g_43;
    int64_t *l_44 = (void*)0;
    int64_t *l_45 = &p_1621->g_46;
    uint16_t l_389 = 1UL;
    int64_t l_657 = 0x63E2FDCC7BF68259L;
    int64_t l_658 = 0x11999B58546CB26FL;
    int8_t l_664 = 0x3AL;
    uint32_t l_756 = 0x75FE2661L;
    int32_t l_757 = 0x6DA031ACL;
    VECTOR(uint8_t, 2) l_825 = (VECTOR(uint8_t, 2))(0x55L, 0x49L);
    VECTOR(uint8_t, 16) l_828 = (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 1UL), 1UL), 1UL, 252UL, 1UL, (VECTOR(uint8_t, 2))(252UL, 1UL), (VECTOR(uint8_t, 2))(252UL, 1UL), 252UL, 1UL, 252UL, 1UL);
    int8_t l_849 = 0L;
    uint8_t **l_850 = &p_1621->g_546;
    int8_t l_881[9][7][2] = {{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}},{{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)},{0L,(-10L)}}};
    uint8_t l_917 = 252UL;
    VECTOR(uint8_t, 8) l_935 = (VECTOR(uint8_t, 8))(0x33L, (VECTOR(uint8_t, 4))(0x33L, (VECTOR(uint8_t, 2))(0x33L, 0x88L), 0x88L), 0x88L, 0x33L, 0x88L);
    VECTOR(uint32_t, 2) l_991 = (VECTOR(uint32_t, 2))(0xBA86C770L, 0UL);
    int8_t *l_1048[2][4];
    int8_t **l_1047 = &l_1048[1][1];
    VECTOR(int16_t, 16) l_1065 = (VECTOR(int16_t, 16))(0x2C5CL, (VECTOR(int16_t, 4))(0x2C5CL, (VECTOR(int16_t, 2))(0x2C5CL, 0x33E2L), 0x33E2L), 0x33E2L, 0x2C5CL, 0x33E2L, (VECTOR(int16_t, 2))(0x2C5CL, 0x33E2L), (VECTOR(int16_t, 2))(0x2C5CL, 0x33E2L), 0x2C5CL, 0x33E2L, 0x2C5CL, 0x33E2L);
    VECTOR(int16_t, 16) l_1067 = (VECTOR(int16_t, 16))(0x26E7L, (VECTOR(int16_t, 4))(0x26E7L, (VECTOR(int16_t, 2))(0x26E7L, 0x226BL), 0x226BL), 0x226BL, 0x26E7L, 0x226BL, (VECTOR(int16_t, 2))(0x26E7L, 0x226BL), (VECTOR(int16_t, 2))(0x26E7L, 0x226BL), 0x26E7L, 0x226BL, 0x26E7L, 0x226BL);
    VECTOR(int64_t, 8) l_1070 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 5L), 5L), 5L, (-2L), 5L);
    int32_t *l_1086 = &p_1621->g_180;
    VECTOR(int8_t, 8) l_1146 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    uint32_t l_1188 = 0x7157E7F4L;
    VECTOR(int8_t, 16) l_1215 = (VECTOR(int8_t, 16))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 0x59L), 0x59L), 0x59L, 0x60L, 0x59L, (VECTOR(int8_t, 2))(0x60L, 0x59L), (VECTOR(int8_t, 2))(0x60L, 0x59L), 0x60L, 0x59L, 0x60L, 0x59L);
    uint8_t l_1220 = 0x78L;
    int32_t l_1251 = 1L;
    VECTOR(int32_t, 8) l_1256 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x40499783L), 0x40499783L), 0x40499783L, 1L, 0x40499783L);
    VECTOR(uint8_t, 2) l_1279 = (VECTOR(uint8_t, 2))(0xA3L, 249UL);
    uint32_t l_1288 = 0xA7B350ECL;
    uint32_t **l_1313 = (void*)0;
    uint32_t *l_1324 = &l_756;
    VECTOR(int32_t, 4) l_1354 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5002F9E2L), 0x5002F9E2L);
    uint16_t *l_1389 = (void*)0;
    uint16_t **l_1388 = &l_1389;
    VECTOR(uint32_t, 2) l_1407 = (VECTOR(uint32_t, 2))(6UL, 1UL);
    VECTOR(uint8_t, 2) l_1449 = (VECTOR(uint8_t, 2))(254UL, 0xB6L);
    int32_t l_1457[5] = {0x53D8E407L,0x53D8E407L,0x53D8E407L,0x53D8E407L,0x53D8E407L};
    int8_t l_1497 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_1048[i][j] = (void*)0;
    }
    if ((l_2.s1 = ((((VECTOR(int32_t, 8))(l_2.see2fde2b)).s3 < p_1621->g_comm_values[p_1621->tid]) != (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(func_7(p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))], p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))], func_13((((0x22L > ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(p_1621->g_19.s41145714)).s7750143036745711, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(p_1621->g_20.s2db80ebb)).s5405645033101636, ((VECTOR(int8_t, 2))(1L, 0x45L)).yyyyxxxxxyxxxxyy, ((VECTOR(int8_t, 2))(l_21.xy)).yyxxxxyyyyxxyxxx))).s1d, ((VECTOR(int8_t, 4))(l_22.s0ef2)).hi))).yyyx)).xwwzzzwy, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))((safe_mod_func_int8_t_s_s(0x21L, ((VECTOR(int8_t, 2))((-1L), 0L)).hi)), ((VECTOR(int8_t, 2))(l_25.xz)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(0x26L, (-1L))), (int8_t)func_26((safe_lshift_func_int8_t_s_u((((safe_div_func_uint32_t_u_u((func_36(((*l_42) = GROUP_DIVERGE(1, 1)), (((((l_22.s9 || (((*l_45) ^= 0x0C84A4E7FB108F98L) && (safe_lshift_func_int16_t_s_s((-1L), 4)))) && ((safe_rshift_func_int16_t_s_s(((p_1621->g_388[9] = func_51(l_41, p_1621)) != l_41), p_1621->g_281.x)) ^ 4UL)) && p_1621->g_210[1]) | 1UL) , 0x36660DCC9AE79BE7L), l_389, l_2.s8, p_1621) == p_1621->g_302.x), l_2.s5)) && l_389) <= 0L), l_657)), l_22.s8, l_658, l_2.se, p_1621->g_19.s2, p_1621), (int8_t)p_1621->g_372.s6))), (-7L), (-10L))))), 1L)).s00, ((VECTOR(int8_t, 2))((-10L))), ((VECTOR(int8_t, 2))(1L))))).yyyyxyyx))).s7206674474672460)), (int8_t)l_658, (int8_t)l_2.s7))), ((VECTOR(int8_t, 16))(0L))))).s9) != l_25.y) , l_25.y), p_1621->g_19.s6, l_664, l_25.x, l_22.s8, p_1621), l_21.x, p_1621->g_372.s1, p_1621), l_2.sb)) == p_1621->g_302.z), l_2.sa)))))
    { /* block id: 384 */
        uint32_t *l_725 = (void*)0;
        uint32_t *l_726[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_729 = &p_1621->g_228;
        int32_t l_735 = 0x0571838BL;
        int32_t *l_737 = &p_1621->g_235;
        uint32_t *l_773 = &l_756;
        VECTOR(int32_t, 8) l_808 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
        VECTOR(uint8_t, 4) l_827 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 254UL), 254UL);
        VECTOR(uint8_t, 4) l_832 = (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 0UL), 0UL);
        uint32_t l_859[4];
        int64_t ***l_879[2];
        int64_t l_880 = 0x276175BC981DD1B6L;
        uint32_t l_916 = 0UL;
        VECTOR(int32_t, 16) l_937 = (VECTOR(int32_t, 16))(0x113D62F8L, (VECTOR(int32_t, 4))(0x113D62F8L, (VECTOR(int32_t, 2))(0x113D62F8L, 0x2F524F45L), 0x2F524F45L), 0x2F524F45L, 0x113D62F8L, 0x2F524F45L, (VECTOR(int32_t, 2))(0x113D62F8L, 0x2F524F45L), (VECTOR(int32_t, 2))(0x113D62F8L, 0x2F524F45L), 0x113D62F8L, 0x2F524F45L, 0x113D62F8L, 0x2F524F45L);
        uint8_t l_949 = 3UL;
        VECTOR(uint32_t, 8) l_967 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x3149E29DL), 0x3149E29DL), 0x3149E29DL, 4294967293UL, 0x3149E29DL);
        int8_t *l_1046 = &l_881[8][3][1];
        int8_t **l_1045 = &l_1046;
        int16_t l_1084 = (-9L);
        uint16_t l_1085 = 0x3D92L;
        int64_t l_1099 = (-8L);
        uint32_t *l_1100[6] = {&l_916,&p_1621->g_670,&l_916,&l_916,&p_1621->g_670,&l_916};
        VECTOR(int16_t, 2) l_1128 = (VECTOR(int16_t, 2))(9L, 0L);
        uint64_t l_1129 = 0x41BFFEA54F06C3D2L;
        int32_t **l_1164[4] = {&l_737,&l_737,&l_737,&l_737};
        int16_t l_1165 = 0x4089L;
        VECTOR(int32_t, 8) l_1173 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
        int32_t l_1184 = 0x0DBDA8B1L;
        uint32_t l_1201 = 4294967295UL;
        uint64_t l_1253 = 0x39537F9E16AF3D7DL;
        uint8_t ***l_1366 = &l_850;
        VECTOR(uint32_t, 16) l_1398 = (VECTOR(uint32_t, 16))(0xD4B5F9F3L, (VECTOR(uint32_t, 4))(0xD4B5F9F3L, (VECTOR(uint32_t, 2))(0xD4B5F9F3L, 4294967288UL), 4294967288UL), 4294967288UL, 0xD4B5F9F3L, 4294967288UL, (VECTOR(uint32_t, 2))(0xD4B5F9F3L, 4294967288UL), (VECTOR(uint32_t, 2))(0xD4B5F9F3L, 4294967288UL), 0xD4B5F9F3L, 4294967288UL, 0xD4B5F9F3L, 4294967288UL);
        VECTOR(int32_t, 16) l_1406 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int32_t, 2))(0L, (-4L)), (VECTOR(int32_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L));
        VECTOR(uint32_t, 8) l_1408 = (VECTOR(uint32_t, 8))(0x4DEDBEBBL, (VECTOR(uint32_t, 4))(0x4DEDBEBBL, (VECTOR(uint32_t, 2))(0x4DEDBEBBL, 0x409FC551L), 0x409FC551L), 0x409FC551L, 0x4DEDBEBBL, 0x409FC551L);
        VECTOR(uint32_t, 8) l_1409 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
        uint64_t l_1418 = 18446744073709551609UL;
        int i;
        for (i = 0; i < 4; i++)
            l_859[i] = 0x6FDCD376L;
        for (i = 0; i < 2; i++)
            l_879[i] = &p_1621->g_217;
        (*p_1621->g_181) = ((*l_737) = ((--p_1621->g_281.y) | ((l_729 != (void*)0) , (0x63ACL == (safe_unary_minus_func_int64_t_s((((!(safe_sub_func_uint64_t_u_u((+l_658), (((VECTOR(uint64_t, 2))(0x220A22DA9E0DF582L, 0x07058F995E13219BL)).hi , (**p_1621->g_217))))) ^ (safe_add_func_uint16_t_u_u(65535UL, l_735))) != p_1621->g_736.s1)))))));
        if (l_22.s0)
        { /* block id: 388 */
            int16_t *l_738[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t *l_739 = &p_1621->g_297[0];
            uint64_t *l_750 = (void*)0;
            uint64_t *l_751 = (void*)0;
            uint64_t *l_752 = (void*)0;
            int32_t l_755 = 0x5320F21DL;
            uint64_t *l_758 = &p_1621->g_759;
            VECTOR(int64_t, 4) l_771 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3ADF727E6F72D295L), 0x3ADF727E6F72D295L);
            int32_t l_918[2][6] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}};
            VECTOR(uint32_t, 16) l_942 = (VECTOR(uint32_t, 16))(0x93ECE010L, (VECTOR(uint32_t, 4))(0x93ECE010L, (VECTOR(uint32_t, 2))(0x93ECE010L, 0x818A9B5DL), 0x818A9B5DL), 0x818A9B5DL, 0x93ECE010L, 0x818A9B5DL, (VECTOR(uint32_t, 2))(0x93ECE010L, 0x818A9B5DL), (VECTOR(uint32_t, 2))(0x93ECE010L, 0x818A9B5DL), 0x93ECE010L, 0x818A9B5DL, 0x93ECE010L, 0x818A9B5DL);
            int64_t **l_977 = &l_45;
            uint32_t l_1001 = 4294967286UL;
            int i, j;
            (*l_737) = ((l_738[0][4] = &p_1621->g_297[4]) == (p_1621->g_740 = l_739));
            if ((safe_div_func_uint16_t_u_u((l_22.sa >= (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((((p_1621->g_747[1][1] = ((((*p_1621->g_740) = (*p_1621->g_740)) ^ FAKE_DIVERGE(p_1621->global_1_offset, get_global_id(1), 10)) <= 0UL)) , (safe_rshift_func_uint8_t_u_s(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x6BDCL, 0x51D5L)).yyyyyyyxxyxyyxxx)).sc <= (((*l_758) = (((p_1621->g_302.y ^= ((VECTOR(uint64_t, 2))(0UL, 9UL)).even) != (((((((VECTOR(uint32_t, 4))(((-5L) & ((void*)0 == &p_1621->g_217)), 0x7141D007L, 0xE186E918L, 4294967295UL)).x >= (p_1621->g_281.x = FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10))) != l_755) , p_1621->g_480.s4) || (l_756 | p_1621->g_587.z)) ^ (**p_1621->g_545))) , l_757)) && 0x304C98F9749C19FDL)) , 0x35L), l_658))) & p_1621->g_583.x) & p_1621->g_210[1]), p_1621->g_19.s6)), p_1621->g_480.s4))), (-1L))))
            { /* block id: 397 */
                int32_t ***l_760 = &l_729;
                int32_t ****l_761 = &l_760;
                int32_t l_774 = (-1L);
                l_755 = (0x2BDDL == ((((((*l_761) = l_760) == ((safe_unary_minus_func_uint8_t_u(((*p_1621->g_218) || p_1621->g_230))) , &p_1621->g_656)) < (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) <= ((++(*l_758)) , (safe_add_func_uint32_t_u_u(p_1621->g_372.s0, ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(0x746848043446B051L, (**p_1621->g_217), ((VECTOR(int64_t, 2))(1L, 0L)), 0x0E0ACF52ED7AD16DL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(l_771.wy)).xxxx, ((VECTOR(int64_t, 4))(p_1621->g_772.s2303))))))).even)), 0L, 0x16705644D93F8965L)), 0x63CC69FA43DAC36AL, 0x360F587A6EF1752DL, ((void*)0 != l_773), ((VECTOR(int64_t, 2))(0x479E5F0FF9A5BB4FL)), 1L, (-10L))).s2b)).lo && l_774) , p_1621->g_772.s4))))), 7L)), p_1621->g_231[4][1]))) >= (**p_1621->g_217)) == 0xEEFA21A741CB4EC8L));
                if ((atomic_inc(&p_1621->l_atomic_input[37]) == 8))
                { /* block id: 402 */
                    VECTOR(int32_t, 8) l_775 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x69E6AF28L), 0x69E6AF28L), 0x69E6AF28L, (-1L), 0x69E6AF28L);
                    VECTOR(int32_t, 8) l_776 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 6L), 6L), 6L, (-3L), 6L);
                    uint8_t l_777 = 0x2BL;
                    int16_t l_778 = (-1L);
                    int16_t l_779 = 2L;
                    int16_t l_780 = 0x301EL;
                    uint32_t l_781[8][1][8] = {{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}},{{0xD6AFD203L,0xD6AFD203L,0xE02A4A4CL,1UL,0x1180CDA7L,4294967295UL,3UL,0x71686B3EL}}};
                    int8_t l_782 = 0x09L;
                    int i, j, k;
                    l_780 |= ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_775.s57)).xyxy)), ((VECTOR(int32_t, 16))(l_776.s4531641221133062)).s6333))), (l_779 = (l_778 = l_777)), 0L, (-2L))).s2;
                    l_781[6][0][6] = 0x22B325E8L;
                    if ((l_782 &= 0x2EDF0C71L))
                    { /* block id: 408 */
                        uint32_t l_783 = 0x2CCE53BDL;
                        --l_783;
                    }
                    else
                    { /* block id: 410 */
                        int32_t l_787 = 0x413D4C97L;
                        int32_t *l_786[6];
                        int32_t *l_788 = &l_787;
                        int32_t *l_789 = &l_787;
                        int32_t *l_790 = &l_787;
                        int32_t l_791[3];
                        uint32_t l_792[6][8] = {{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL},{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL},{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL},{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL},{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL},{0xB3519E62L,4294967287UL,0x01BA356AL,4294967287UL,0xB3519E62L,0xB3519E62L,4294967287UL,0x01BA356AL}};
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_786[i] = &l_787;
                        for (i = 0; i < 3; i++)
                            l_791[i] = 7L;
                        l_789 = (l_788 = l_786[5]);
                        l_790 = (l_788 = (void*)0);
                        (*l_789) &= (l_776.s2 = (l_791[0] , l_792[1][4]));
                        l_775.s7 = ((VECTOR(int32_t, 4))(6L, ((VECTOR(int32_t, 2))(0L, 0x02F7D76FL)), 9L)).x;
                    }
                    unsigned int result = 0;
                    result += l_775.s7;
                    result += l_775.s6;
                    result += l_775.s5;
                    result += l_775.s4;
                    result += l_775.s3;
                    result += l_775.s2;
                    result += l_775.s1;
                    result += l_775.s0;
                    result += l_776.s7;
                    result += l_776.s6;
                    result += l_776.s5;
                    result += l_776.s4;
                    result += l_776.s3;
                    result += l_776.s2;
                    result += l_776.s1;
                    result += l_776.s0;
                    result += l_777;
                    result += l_778;
                    result += l_779;
                    result += l_780;
                    int l_781_i0, l_781_i1, l_781_i2;
                    for (l_781_i0 = 0; l_781_i0 < 8; l_781_i0++) {
                        for (l_781_i1 = 0; l_781_i1 < 1; l_781_i1++) {
                            for (l_781_i2 = 0; l_781_i2 < 8; l_781_i2++) {
                                result += l_781[l_781_i0][l_781_i1][l_781_i2];
                            }
                        }
                    }
                    result += l_782;
                    atomic_add(&p_1621->l_special_values[37], result);
                }
                else
                { /* block id: 419 */
                    (1 + 1);
                }
                (*p_1621->g_227) = (**l_760);
            }
            else
            { /* block id: 423 */
                uint64_t l_852 = 0x468E4A240EBF7466L;
                VECTOR(int8_t, 2) l_866 = (VECTOR(int8_t, 2))(0x7EL, (-1L));
                int8_t *l_874 = &l_849;
                int32_t *l_887[7] = {&p_1621->g_231[4][2],&p_1621->g_231[4][2],&p_1621->g_231[4][2],&p_1621->g_231[4][2],&p_1621->g_231[4][2],&p_1621->g_231[4][2],&p_1621->g_231[4][2]};
                int32_t **l_888 = &l_737;
                int i;
                for (p_1621->g_277 = 0; (p_1621->g_277 >= 18); ++p_1621->g_277)
                { /* block id: 426 */
                    uint32_t l_818 = 0x31FD2B11L;
                    int32_t l_856 = 0L;
                    int32_t **l_857 = &l_737;
                    (*l_729) = (*p_1621->g_227);
                    (*l_737) &= (safe_rshift_func_int8_t_s_s((0x4CL <= (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(p_1621->g_588.x, 0)), l_21.x))), (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(p_1621->g_803.zx)).lo, GROUP_DIVERGE(2, 1)))));
                    for (l_658 = 0; (l_658 > 13); ++l_658)
                    { /* block id: 431 */
                        uint64_t *l_839[4][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
                        int8_t *l_851 = &l_664;
                        int32_t l_853 = 0x693E9F01L;
                        int32_t *l_854 = &l_757;
                        int32_t l_855 = (-1L);
                        uint8_t l_858 = 255UL;
                        int i, j, k;
                        l_858 ^= (&p_1621->g_663 != (l_857 = ((safe_add_func_uint8_t_u_u(((**p_1621->g_545) = (l_856 = (((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_808.s4717531363227600)))).s42)).yxyyyyyyxyxxxxyy)).s6d35))).z , (((VECTOR(int8_t, 2))(p_1621->g_809.yy)).odd && (safe_lshift_func_int16_t_s_u((~(((safe_sub_func_int32_t_s_s(((l_855 ^= (safe_div_func_uint64_t_u_u((((*l_854) |= ((*p_1621->g_740) , (safe_add_func_uint8_t_u_u((**p_1621->g_545), (+((l_818 | (safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x61L, 246UL)))).lo == ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_825.yxyyyxyxxyxyyyxx)))).hi, ((VECTOR(uint8_t, 4))(p_1621->g_826.xxxy)).wwzzyxxz))).s5, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(254UL, 4UL)), ((VECTOR(uint8_t, 16))(l_827.xyzwyxxzyxywxwzw)).sdf))), 0x57L, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(l_828.sd38d6bbd5157460f)), ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1621->g_829.s5770)).wywyzxxzyyyzwzxz)).even, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1621->g_830.xy)).yyyxxxyy)).odd)).wxyzzxxy, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1621->g_831.s40270132)).s61)), ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x8BL, 248UL)))), 0x3EL)), ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(l_832.zywxywxz)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_1621->g_833.zywzxwwyzxwzyyxx)).s1d21, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1621->g_834.s46)).yyyx))))).odd)).xxxy)))))), (uint8_t)(safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((((~(p_1621->g_840.s7 ^= GROUP_DIVERGE(1, 1))) , ((*l_737) = FAKE_DIVERGE(p_1621->local_2_offset, get_local_id(2), 10))) , ((*l_851) ^= ((safe_div_func_uint64_t_u_u(l_755, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0xDFD997AF9D9D3812L, ((safe_rshift_func_int8_t_s_s(0x69L, (1L ^ ((((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))((-1L), 0x2DA2L, 0x4DB5L, 0x2318L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_1621->g_845.s6134)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1621->g_846.s6977c9da)).s6060505362433235)), (int16_t)(safe_lshift_func_uint8_t_u_u(((l_849 , l_850) == l_850), (**p_1621->g_545)))))).lo, ((VECTOR(int16_t, 8))((-6L)))))).s65, ((VECTOR(int16_t, 2))(0x15DDL))))), ((VECTOR(int16_t, 2))(0x09C7L))))), ((VECTOR(int16_t, 2))(0x1B65L)), ((VECTOR(int16_t, 8))(0L)))))).sfcbb))).z ^ GROUP_DIVERGE(1, 1)) <= (*p_1621->g_740))))) & (**p_1621->g_545)), 6UL, 0xB19DD98986CD168AL)).wxwyzyyxzzzxxxyw)), (uint64_t)GROUP_DIVERGE(0, 1))))))).s5873)))).odd, ((VECTOR(uint64_t, 2))(0xA1368DFC296BC893L))))).hi)) > (-1L)))) < l_852) == 9UL), (-1L))), 0UL))))).wywzwwzy)), ((VECTOR(uint8_t, 8))(4UL))))).s47, ((VECTOR(uint8_t, 2))(255UL))))).xyxyyxxy))).s4346017703437131))).even)).hi, ((VECTOR(uint8_t, 4))(9UL)), ((VECTOR(uint8_t, 4))(255UL))))).xzyyzzyz, (uint8_t)l_852))).even, ((VECTOR(uint8_t, 4))(1UL))))))).zxzwwxwwwwwyzxxx, ((VECTOR(uint8_t, 16))(252UL))))).s0, ((VECTOR(uint8_t, 2))(255UL)), 0x92L)).s1045456062032277)).sd) ^ l_853) >= (*p_1621->g_740)) | 0x483FL), (*p_1621->g_740))), 0x6740C3F4L)), p_1621->g_231[5][2]))) <= l_818)))))) , 0xA20E90DF0DF93E05L), 6UL))) > 65527UL), l_852)) <= p_1621->g_319.x) & l_657)), 6)))))), p_1621->g_747[2][2])) , l_857)));
                        return (*p_1621->g_740);
                    }
                }
                (*l_737) = (l_859[2] == (((((*l_758)++) && (((safe_mod_func_int64_t_s_s((p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))] |= ((p_1621->g_302.x |= (((safe_sub_func_uint8_t_u_u(l_852, (((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_866.yyyy)).xwxzywxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1621->g_867.xzwzxyxw)))).odd)).wxxyyywx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-9L), 0x3DL)).xxyyxxxxyyxxyyyx)).hi, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x02L, p_1621->g_759, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(p_1621->g_868.saa)), (int8_t)(-1L)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(p_1621->g_869.zxywwxzy)).s6304063750040073, ((VECTOR(int8_t, 4))((((l_880 = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((GROUP_DIVERGE(2, 1) >= FAKE_DIVERGE(p_1621->local_1_offset, get_local_id(1), 10)), (((((((((*l_874) = l_866.y) | ((safe_mul_func_int8_t_s_s((p_1621->g_867.x >= ((safe_lshift_func_int8_t_s_s((l_879[1] != (l_771.w , &p_1621->g_217)), 6)) | 0x588FL)), p_1621->g_46)) <= l_866.x)) & l_2.sc) , (-1L)) > 4L) || 0x12L) < l_389) == (*l_737)))), 0x1DL))) < 0x24088351L) , 0x2CL), p_1621->g_231[1][0], 0x7AL, 4L)).yywzzyzxwzzyxyxx))))).s2f1a)))).lo))), ((VECTOR(int8_t, 8))(0x6EL)), ((VECTOR(int8_t, 2))(0x1EL)), 0x55L, ((VECTOR(int8_t, 2))(0x27L)), 0x1CL)).s2, 0L, ((VECTOR(int8_t, 2))(1L)), 0x4AL, 0x1AL)).s34)).yxxxyxxxyyxyxyxx)).odd))))))).s61)).xxyyyyyx, ((VECTOR(int8_t, 8))((-1L)))))))))), 0x4AL, ((VECTOR(int8_t, 4))(1L)), 0x7CL, (-1L), 6L)).odd))).s2 , l_881[6][4][1]))) == p_1621->g_809.x) & 0x61308425L)) < 7L)), (*p_1621->g_218))) > 0x03L) != 0x44L)) != 4294967295UL) < 0x74L));
                (*l_888) = ((*l_729) = l_887[3]);
                l_918[0][2] = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((*l_45) &= (l_825.x & (l_917 = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1621->g_897.s16)), (-1L), 0x482447E5L)).hi, ((VECTOR(int32_t, 8))(l_771.z, (safe_sub_func_uint16_t_u_u((p_1621->g_831.s7 == ((safe_unary_minus_func_int16_t_s(l_828.s1)) , ((**p_1621->g_545) = ((((l_755 = (*p_1621->g_546)) == (l_916 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((void*)0 == &p_1621->g_179[0]), (safe_unary_minus_func_int8_t_s((p_1621->g_867.y ^= ((*l_874) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((**p_1621->g_545), (+0x06L))), l_25.y)) ^ 0x5C50L), 2)), 0x41L)), 14)))))))), (*p_1621->g_740))))) == p_1621->g_580.x) == l_771.w)))), 0x020BL)), ((VECTOR(int32_t, 4))(0x27EFAB57L)), (-6L), 6L)).s06))).odd))) , 9L), 0x18L)), p_1621->g_747[1][1])) <= p_1621->g_897.s6) , (-1L)) | p_1621->g_235), l_881[6][4][1])), 3)) >= p_1621->g_382.x);
            }
            for (l_916 = 0; (l_916 < 10); ++l_916)
            { /* block id: 463 */
                int32_t *l_948[2][8] = {{(void*)0,(void*)0,&l_735,(void*)0,(void*)0,(void*)0,(void*)0,&l_735},{(void*)0,(void*)0,&l_735,(void*)0,(void*)0,(void*)0,(void*)0,&l_735}};
                VECTOR(uint32_t, 8) l_965 = (VECTOR(uint32_t, 8))(0x8D1E77B3L, (VECTOR(uint32_t, 4))(0x8D1E77B3L, (VECTOR(uint32_t, 2))(0x8D1E77B3L, 0UL), 0UL), 0UL, 0x8D1E77B3L, 0UL);
                VECTOR(uint32_t, 2) l_966 = (VECTOR(uint32_t, 2))(0xF7D6428DL, 1UL);
                int64_t *l_1019 = &l_657;
                int i, j;
                if ((((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_1621->g_587.y, ((VECTOR(int32_t, 2))(p_1621->g_925.s78)).even)), (safe_div_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(((((VECTOR(int64_t, 2))(p_1621->g_934.yy)).even < (((*l_739) = l_881[6][4][1]) , GROUP_DIVERGE(2, 1))) <= ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(l_935.s5774604254221754)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_1621->g_936.s94b572bb207cb046))))))).s1), (p_1621->g_747[4][0] ^= ((p_1621->g_335.s4 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_937.s9efdd5421c91dda1)).even)).lo, ((VECTOR(int32_t, 4))(0x0C8EDE02L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((safe_mul_func_uint8_t_u_u((((l_726[2] != (void*)0) != (l_755 , (safe_lshift_func_int8_t_s_u(((void*)0 != p_1621->g_546), ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_942.sbd0a)))).xzyxwwwx)))).s2 , (safe_lshift_func_uint8_t_u_s(((void*)0 != p_1621->g_945), l_21.y))) ^ (*p_1621->g_218)))))) | (-9L)), l_757)), (-8L), 0x2E61F153L, ((VECTOR(int32_t, 4))((-3L))), p_1621->g_558.sa, (-1L), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0L)), 0x7E3BA5F0L)).s04)), (-1L)))))).wzzwwyxy)).s6) , p_1621->g_382.y)))) , (-1L)) && l_949), p_1621->g_231[5][2])), l_771.z)) & (**p_1621->g_545)) == (**p_1621->g_217)) & p_1621->g_277), 0x7583L)))) , (*p_1621->g_740)) > p_1621->g_319.w))
                { /* block id: 467 */
                    int16_t l_954 = (-5L);
                    uint64_t *l_956 = (void*)0;
                    uint64_t **l_955 = &l_956;
                    l_937.s9 &= (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(1L, ((l_954 != ((void*)0 != &p_1621->g_759)) , (((*l_955) = p_1621->g_541) != l_758)))) != ((0UL == ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(1L, 0xA6A3L)), p_1621->g_180)), (*p_1621->g_740))) >= p_1621->g_826.y)) > 0UL)), l_771.x));
                }
                else
                { /* block id: 470 */
                    VECTOR(uint32_t, 8) l_968 = (VECTOR(uint32_t, 8))(0xED62E324L, (VECTOR(uint32_t, 4))(0xED62E324L, (VECTOR(uint32_t, 2))(0xED62E324L, 0UL), 0UL), 0UL, 0xED62E324L, 0UL);
                    VECTOR(uint32_t, 16) l_970 = (VECTOR(uint32_t, 16))(0x80CC2F8AL, (VECTOR(uint32_t, 4))(0x80CC2F8AL, (VECTOR(uint32_t, 2))(0x80CC2F8AL, 1UL), 1UL), 1UL, 0x80CC2F8AL, 1UL, (VECTOR(uint32_t, 2))(0x80CC2F8AL, 1UL), (VECTOR(uint32_t, 2))(0x80CC2F8AL, 1UL), 0x80CC2F8AL, 1UL, 0x80CC2F8AL, 1UL);
                    int64_t ***l_996[7][8] = {{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217},{&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217,&p_1621->g_217}};
                    int64_t *l_999[2][5] = {{&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000},{&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000,&p_1621->g_1000}};
                    uint32_t *l_1021 = &l_756;
                    int32_t l_1022 = 0x51A47809L;
                    int i, j;
                    (*p_1621->g_656) = (((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_965.s0274)).xzzxywyyywzxzywy)).lo, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(4294967290UL, ((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_966.yyyyxyyx)).s45))).yxyy)), ((VECTOR(uint32_t, 2))(l_967.s23)), 0x521F6F99L, 0UL))))))).s07))), 0x79ADF689L)).even, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(l_968.s0371317707477574)).s924d, ((VECTOR(uint32_t, 2))(0xA144F871L, 0x185C4FC1L)).xxxy, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(p_1621->g_969.xyyy)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x69F15FE9L, 0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(l_970.s7d66eac1b6297da5)).s36, (uint32_t)l_658, (uint32_t)(((safe_add_func_int8_t_s_s((((void*)0 != &p_1621->g_227) || ((**p_1621->g_545) & (safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((p_1621->g_382.y , l_918[0][2]), (0x877B8CA5E51B94CDL == ((&p_1621->g_218 != l_977) == GROUP_DIVERGE(1, 1))))) , l_825.x), (*p_1621->g_740))))), 0L)) >= 0x6EC76E94L) ^ l_389)))).xxyxyxxx, ((VECTOR(uint32_t, 8))(0UL))))).s44)), 1UL, 4294967290UL)), 0UL, 0UL)))).even)))))).hi))).xyyxyxyy))).s4230502517352600)), ((VECTOR(uint32_t, 16))(4294967291UL))))).s9 , (*p_1621->g_656));
                    (*l_729) = &l_918[1][4];
                    l_1022 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((+(safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1621->g_1008.s1611)).w, ((safe_lshift_func_uint8_t_u_s((**p_1621->g_545), 0)) > p_1621->g_180)))) , 0x3589L) & (l_918[0][2] && (((safe_div_func_uint64_t_u_u(l_755, (*p_1621->g_218))) | (((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_991.x, (safe_lshift_func_uint16_t_u_u(((p_1621->g_1020 = l_1019) == ((*l_977) = (*p_1621->g_217))), 1)))), p_1621->g_897.s3)) , (void*)0) != l_1021)) == l_991.y))), 7)), p_1621->g_772.s4));
                }
            }
        }
        else
        { /* block id: 481 */
            VECTOR(int8_t, 4) l_1023 = (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x5EL), 0x5EL);
            uint32_t *l_1049[4][3][3] = {{{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050}},{{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050}},{{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050}},{{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050},{&p_1621->g_1050,&p_1621->g_1050,&p_1621->g_1050}}};
            VECTOR(int64_t, 16) l_1072 = (VECTOR(int64_t, 16))(0x1B7A456A03732B0BL, (VECTOR(int64_t, 4))(0x1B7A456A03732B0BL, (VECTOR(int64_t, 2))(0x1B7A456A03732B0BL, (-8L)), (-8L)), (-8L), 0x1B7A456A03732B0BL, (-8L), (VECTOR(int64_t, 2))(0x1B7A456A03732B0BL, (-8L)), (VECTOR(int64_t, 2))(0x1B7A456A03732B0BL, (-8L)), 0x1B7A456A03732B0BL, (-8L), 0x1B7A456A03732B0BL, (-8L));
            VECTOR(int64_t, 16) l_1074 = (VECTOR(int64_t, 16))(0x26D49DACC6775148L, (VECTOR(int64_t, 4))(0x26D49DACC6775148L, (VECTOR(int64_t, 2))(0x26D49DACC6775148L, 1L), 1L), 1L, 0x26D49DACC6775148L, 1L, (VECTOR(int64_t, 2))(0x26D49DACC6775148L, 1L), (VECTOR(int64_t, 2))(0x26D49DACC6775148L, 1L), 0x26D49DACC6775148L, 1L, 0x26D49DACC6775148L, 1L);
            VECTOR(int8_t, 16) l_1081 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x23L), 0x23L), 0x23L, 1L, 0x23L, (VECTOR(int8_t, 2))(1L, 0x23L), (VECTOR(int8_t, 2))(1L, 0x23L), 1L, 0x23L, 1L, 0x23L);
            VECTOR(uint16_t, 8) l_1091 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x9D46L), 0x9D46L), 0x9D46L, 65535UL, 0x9D46L);
            VECTOR(uint16_t, 2) l_1093 = (VECTOR(uint16_t, 2))(3UL, 2UL);
            VECTOR(int8_t, 2) l_1097 = (VECTOR(int8_t, 2))((-1L), 4L);
            volatile int32_t * volatile l_1101 = &p_1621->g_230;/* VOLATILE GLOBAL l_1101 */
            int32_t **l_1163 = &l_737;
            VECTOR(int32_t, 2) l_1172 = (VECTOR(int32_t, 2))((-10L), 0x41B0E25EL);
            VECTOR(int32_t, 8) l_1178 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0A05060AL), 0x0A05060AL), 0x0A05060AL, (-1L), 0x0A05060AL);
            uint16_t *l_1198 = &l_389;
            uint16_t **l_1197 = &l_1198;
            uint16_t *l_1200 = &l_1085;
            uint16_t **l_1199 = &l_1200;
            int8_t ***l_1204 = &l_1045;
            int8_t ***l_1205 = &l_1047;
            int16_t **l_1213 = &p_1621->g_740;
            VECTOR(uint32_t, 4) l_1340 = (VECTOR(uint32_t, 4))(0xDBB81D16L, (VECTOR(uint32_t, 2))(0xDBB81D16L, 1UL), 1UL);
            VECTOR(int32_t, 4) l_1353 = (VECTOR(int32_t, 4))(0x17C3B443L, (VECTOR(int32_t, 2))(0x17C3B443L, 0x53D32581L), 0x53D32581L);
            uint8_t l_1359[10][3] = {{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL},{246UL,0xFFL,0UL}};
            VECTOR(int8_t, 4) l_1360 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 1L), 1L);
            int i, j, k;
            if (((((l_1023.w | 0L) && (((safe_unary_minus_func_int16_t_s(((*l_737) = ((*p_1621->g_946) || ((p_1621->g_1050 = ((0x218AL != (((VECTOR(int32_t, 16))((((l_935.s0 && 65527UL) , (safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((++(*p_1621->g_546)) <= (safe_rshift_func_uint8_t_u_u(l_657, 2))) < 255UL), (safe_add_func_int32_t_s_s((l_2.s9 = (safe_div_func_uint64_t_u_u((~(((((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((l_1047 = l_1045) == (void*)0), (*p_1621->g_740))), 1L)) != l_1023.y) , (*l_737)) ^ (*p_1621->g_946)) , l_825.y)), (*l_737)))), l_21.x)))), 0)) || p_1621->g_1008.s5) | (*l_737)) , 0x6279L), (*p_1621->g_740))) , 0xC3950FAFL) != l_22.s1), (*p_1621->g_740)))) <= l_1023.y), 0x07B570B5L, ((VECTOR(int32_t, 2))(0x70A44658L)), 0x263F3FBFL, ((VECTOR(int32_t, 2))(0x368654EEL)), ((VECTOR(int32_t, 8))((-3L))), 0x4C729EFFL)).s4 || p_1621->g_558.sa)) != 0UL)) , (**p_1621->g_945)))))) == 0x0729L) , 3L)) , GROUP_DIVERGE(2, 1)) & 1UL))
            { /* block id: 487 */
                int32_t l_1062 = 0x6AF57034L;
                int32_t l_1109 = 3L;
                uint16_t l_1111[4][10] = {{65533UL,6UL,0UL,0x056AL,0x7CF0L,0x7CF0L,0x056AL,0UL,6UL,65533UL},{65533UL,6UL,0UL,0x056AL,0x7CF0L,0x7CF0L,0x056AL,0UL,6UL,65533UL},{65533UL,6UL,0UL,0x056AL,0x7CF0L,0x7CF0L,0x056AL,0UL,6UL,65533UL},{65533UL,6UL,0UL,0x056AL,0x7CF0L,0x7CF0L,0x056AL,0UL,6UL,65533UL}};
                int i, j;
                if (((safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s(p_1621->g_1055, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(0x9B3D5CB1L, 0xF400289FL)).yyxyyxyy, ((VECTOR(uint32_t, 4))(0xDDBD1FEAL, (safe_add_func_uint16_t_u_u((((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(p_1621->g_1058.s5ffc8351)).s61, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_1621->g_1059.s06f33881)), ((safe_mul_func_int8_t_s_s(l_1062, (*p_1621->g_946))) , (safe_mul_func_int8_t_s_s(((0xC67DL != (5L == ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(l_1065.s5bd7a9f5)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_1621->g_1066.s810fb75f))))))).s1, 1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1067.s26)))), ((VECTOR(int16_t, 4))((safe_mod_func_int64_t_s_s((p_1621->g_772.s3 &= ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(l_1070.s5362621432016204)).s63, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(p_1621->g_1071.s4517600102041674)).s52d5, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))((-9L), 0x7EC3F2F4E6DD404DL)), (int64_t)((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_1072.sadfd)), ((VECTOR(int64_t, 8))(p_1621->g_1073.s5091cf99)).s7, ((VECTOR(int64_t, 2))(l_1074.s9e)), (-1L))).s6))), ((*l_45) = 0x3F7FCB451CACFA98L), (~(safe_add_func_uint32_t_u_u(p_1621->g_19.s4, ((+(l_25.z && (safe_rshift_func_uint16_t_u_u(((+((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_1081.s8e)).yyyyyyxxxyxxxyxy)).s4, (safe_lshift_func_uint16_t_u_u((p_1621->g_372.s6 = p_1621->g_585.x), 1)))) , GROUP_DIVERGE(0, 1))) | l_1084), l_849)))) && l_1085)))), ((VECTOR(int64_t, 4))(0x09CEEB42D09EA1EFL)))), ((VECTOR(int64_t, 8))(0L))))).s5326440316712316)).s0b91, ((VECTOR(int64_t, 4))(0x3B2465092BEAA9B9L))))).wyxyzxxx)).s1507212513110423)).s27))).lo), (-4L))), (*p_1621->g_740), 9L, 0x19BCL)))).s71)).odd)) <= p_1621->g_210[1]), l_1072.se))), l_1074.s1, 0xBB8DF67BL, l_1067.s8, FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10), l_1023.y, 0xC76B99BEL, 4294967295UL)).lo)), 4294967294UL, 1UL, ((VECTOR(uint32_t, 2))(0x95E249B5L)), 5UL, 4294967295UL, 4294967291UL, 4294967289UL)).s6a))))).even == (*l_737)), FAKE_DIVERGE(p_1621->global_0_offset, get_global_id(0), 10))), 0x61343F78L, 8UL)).xwyzwyxx))).s5415734650021060, ((VECTOR(uint32_t, 16))(0x0973BF7CL))))).s9662, (uint32_t)5UL))).z)) > p_1621->g_990.z), l_658)) , (-1L)))
                { /* block id: 491 */
                    (*p_1621->g_227) = l_1086;
                    return (*p_1621->g_740);
                }
                else
                { /* block id: 494 */
                    VECTOR(int16_t, 2) l_1087 = (VECTOR(int16_t, 2))(0x23C7L, 1L);
                    int16_t *l_1092 = &p_1621->g_1055;
                    int8_t *l_1094 = &l_881[6][4][1];
                    int8_t **l_1098 = &l_1048[1][1];
                    int32_t l_1110 = (-9L);
                    int i;
                    if (((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1087.xyyx)).zwwwxxyz)).s5 <= (p_1621->g_235 || p_1621->g_302.z)) & (safe_div_func_int16_t_s_s((*p_1621->g_740), ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1621->g_1090.xz)))).yyyyxxxyyyxyxxyx)), ((VECTOR(uint16_t, 8))(0x2EF6L, 65535UL, 0xA498L, 1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1091.s6757)).lo)).yyxyxyxxyyyxyxyy)).se436, ((VECTOR(uint16_t, 4))((((((*l_1092) &= 1L) <= ((VECTOR(uint16_t, 2))(l_1093.xx)).hi) != ((((*p_1621->g_945) == l_1094) & ((**p_1621->g_217) |= (safe_div_func_uint8_t_u_u(((*l_737) | (((VECTOR(int8_t, 16))(l_1097.xyxyyyxxyyxxyyxy)).s9 < ((void*)0 != l_1098))), l_1099)))) > (*l_737))) , 0xDE06L), ((VECTOR(uint16_t, 2))(0x444FL)), 0x768CL))))).even, ((VECTOR(uint16_t, 2))(9UL)), ((VECTOR(uint16_t, 2))(0UL))))).yyxyxxxyxxxyxxxy, (uint16_t)GROUP_DIVERGE(2, 1)))).s93)))), ((VECTOR(uint16_t, 2))(0x97FFL))))), 0UL, 0x9DC9L)).even)), 5UL, 65535UL)).s2335534774512171))).s3))))
                    { /* block id: 497 */
                        int64_t l_1102 = 0x2BC95A22A3E3A67EL;
                        int32_t *l_1104 = (void*)0;
                        int32_t *l_1105 = (void*)0;
                        int32_t *l_1106 = (void*)0;
                        int32_t *l_1107 = (void*)0;
                        int32_t *l_1108[6] = {&l_735,(void*)0,&l_735,&l_735,(void*)0,&l_735};
                        int i;
                        l_1101 = (*p_1621->g_656);
                        (*l_737) = l_1102;
                        --l_1111[2][7];
                    }
                    else
                    { /* block id: 501 */
                        int32_t **l_1114 = &l_1086;
                        (*l_1114) = ((*l_729) = &l_1109);
                        (*l_737) = (((VECTOR(int32_t, 2))(0x485EAAD9L, 5L)).hi != (0x0D33E9F9FB206639L != (l_1062 & (safe_rshift_func_uint8_t_u_u((((VECTOR(int64_t, 8))(((safe_sub_func_uint16_t_u_u((((*p_1621->g_946) || ((*l_1046) = 0x66L)) && ((*p_1621->g_740) ^ (((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0UL, ((*p_1621->g_545) == (*p_1621->g_545)), 0x8781L, ((VECTOR(uint16_t, 2))(p_1621->g_1123.s47)), (((VECTOR(int64_t, 4))(p_1621->g_1124.s5938)).y >= 0x2439C239CF35AF60L), 8UL, 65533UL)))).s0, 7)) < (*p_1621->g_546)) != (**l_729)))), 0xD20AL)) == (**p_1621->g_227)), ((VECTOR(int64_t, 4))((-3L))), 0x58494FCBA7A4424DL, (-3L), 0x7DAB5002D288A111L)).s0 >= (**l_729)), 4)))));
                    }
                    (*l_737) |= 0x27532F5DL;
                    for (l_657 = 0; (l_657 > 7); l_657 = safe_add_func_uint16_t_u_u(l_657, 5))
                    { /* block id: 510 */
                        int8_t l_1127 = 0L;
                        (*l_1086) ^= (l_1127 && ((VECTOR(int16_t, 8))(l_1128.yxxxyxxy)).s2);
                        return (*p_1621->g_740);
                    }
                    (*l_1086) &= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, (-2L))).xxxyyxxyyyyxyyxy)).sa , l_1111[3][8]);
                }
            }
            else
            { /* block id: 516 */
                int16_t **l_1144 = &p_1621->g_740;
                int8_t *l_1151[5][3][10] = {{{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0}},{{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0}},{{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0}},{{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0}},{{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0},{&l_881[6][4][1],&l_881[6][4][0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_881[6][4][0],&l_881[6][4][1],(void*)0}}};
                uint8_t **l_1154 = &p_1621->g_546;
                uint64_t l_1155 = 0xFD591A64B2ED663CL;
                uint32_t l_1177 = 0UL;
                int32_t l_1181 = (-1L);
                int64_t l_1187 = 0x77AA06CDE9AEBC02L;
                int i, j, k;
                l_1129--;
                if ((((safe_lshift_func_int16_t_s_s(((+(safe_mul_func_uint8_t_u_u((~((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((1UL == (safe_add_func_int64_t_s_s(((void*)0 == &p_1621->g_759), ((safe_sub_func_uint16_t_u_u((((*l_1144) = &p_1621->g_297[3]) == (((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(3L, ((VECTOR(int32_t, 2))(7L, 0x1A7BD4C4L)), 0x5762D04DL)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(p_1621->g_1145.yx)).yxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), (-7L), ((p_1621->g_934.y = (((VECTOR(int8_t, 4))(l_1146.s1445)).x , (((**p_1621->g_545) = ((((*l_1086) , ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0x78CFL, (((l_1151[1][1][7] = p_1621->g_546) == (*p_1621->g_945)) , (((safe_sub_func_uint16_t_u_u((((**p_1621->g_217) = ((l_1154 != &p_1621->g_546) , 0x143A7439461D21DEL)) , 8UL), p_1621->g_936.sf)) || 0UL) , (*l_1101))))), p_1621->g_319.y)) ^ 0x71EE86A4L)) > 0x44259037AED833D5L) > (*p_1621->g_546))) == 0x46L))) == p_1621->g_826.y), 1L, l_1155, 0x4017C272L, 0x7378AF40L, 7L)).s70)).xyyx)), ((VECTOR(int32_t, 4))(1L))))).wyzxxxyz, ((VECTOR(int32_t, 8))(0L))))).s57, ((VECTOR(int32_t, 2))(0x43E991FBL))))), 0L)).s2 , &p_1621->g_747[1][1])), p_1621->g_897.s0)) <= p_1621->g_235)))) | p_1621->g_302.z), 7L)), (*l_1086))) , 0xA3L)), p_1621->g_210[1]))) != (-1L)), 7)) <= p_1621->g_840.s0) == 0x5C1DEAE2L))
                { /* block id: 523 */
                    if ((atomic_inc(&p_1621->g_atomic_input[99 * get_linear_group_id() + 20]) == 2))
                    { /* block id: 525 */
                        uint64_t l_1156 = 0x3697CB21C1217DF1L;
                        l_1156++;
                        unsigned int result = 0;
                        result += l_1156;
                        atomic_add(&p_1621->g_special_values[99 * get_linear_group_id() + 20], result);
                    }
                    else
                    { /* block id: 527 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 530 */
                    uint16_t l_1174 = 65535UL;
                    VECTOR(int32_t, 4) l_1179 = (VECTOR(int32_t, 4))(0x7FEFC9D2L, (VECTOR(int32_t, 2))(0x7FEFC9D2L, (-4L)), (-4L));
                    int i;
                    for (l_1084 = 28; (l_1084 != (-10)); l_1084--)
                    { /* block id: 533 */
                        uint32_t **l_1166 = &p_1621->g_388[9];
                        uint32_t **l_1167 = (void*)0;
                        uint32_t **l_1168 = &l_1100[4];
                        (*l_737) &= (safe_lshift_func_int16_t_s_s(((*p_1621->g_218) ^ (*l_1086)), ((**l_1144) ^= ((&p_1621->g_179[0] == (l_1164[2] = l_1163)) >= l_1165))));
                        (*l_1086) &= ((**l_1163) = (((*l_1168) = ((*l_1166) = &p_1621->g_43)) == (void*)0));
                    }
                    l_1181 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))((-2L), 0L)), ((VECTOR(int32_t, 8))(p_1621->g_1169.yyyxxyxy)).s77, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((*p_1621->g_181) |= (safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), 2))), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1172.yxxyxxyy)).s26)).xyyxyxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1173.s1147561466347237)).sae)))).yxxyxxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_1174 < (*l_1086)), (safe_div_func_uint64_t_u_u(p_1621->g_238, (**p_1621->g_217))), (l_1177 , 0x7D1994B4L), 0x02887486L, ((VECTOR(int32_t, 2))(0x3700A072L, 0L)), 0x09CCCF7BL, 0x5E31B8BBL)).hi)).xzzwxwyw))), 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(4L, 0x15C3F038L)), (-1L), (-1L))).hi)).yyyx, ((VECTOR(int32_t, 2))(2L, 0x10862A6BL)).yxxx))), ((VECTOR(int32_t, 16))(0L, (*p_1621->g_181), 1L, (-1L), 1L, (-6L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1178.s66)))), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1179.yzyyxxzw)).s43)), 2L, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1155, 0x0B763B9BL, ((VECTOR(int32_t, 2))(0x0892F636L)), ((VECTOR(int32_t, 4))(4L)))).s31)), (-2L))).s6292))).even)), p_1621->g_1180, (-7L), 0x66600ECBL, 4L)).lo)).s7460641046005176)).lo, ((VECTOR(int32_t, 8))((-6L)))))).s45))).xyyx, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-1L)))))).z;
                }
                for (l_756 = 0; (l_756 != 24); ++l_756)
                { /* block id: 548 */
                    int64_t l_1185 = 0x05430DE12A7CCC90L;
                    int32_t l_1186 = (-1L);
                    l_1188++;
                }
            }
            if (((((*l_1205) = ((*l_1204) = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((((*l_1197) = &l_389) != (((VECTOR(int32_t, 2))(0x26EFE476L, 0x1C671B05L)).odd , ((*l_1199) = p_1621->g_740))) <= ((+l_1201) != 0x0CC5L)), 6)) && (**l_1163)), (safe_mod_func_uint8_t_u_u((((void*)0 != &p_1621->g_217) == ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(((void*)0 == l_1197), (*p_1621->g_946), (*p_1621->g_946), (**l_1163), ((VECTOR(int8_t, 2))(0x1EL)), (-1L), 1L)).odd, ((VECTOR(int8_t, 4))(0x1DL))))).wywzxyzz, ((VECTOR(int8_t, 8))(0x03L))))))).s40)).lo), (-1L))))), (**l_1163))) , (void*)0))) != &p_1621->g_946) , 0x4E55DEEFL))
            { /* block id: 556 */
                int16_t l_1206[4];
                int32_t l_1221 = 0x46BBCCA6L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1206[i] = (-10L);
                (*p_1621->g_656) = (*p_1621->g_656);
                if ((atomic_inc(&p_1621->l_atomic_input[36]) == 8))
                { /* block id: 562 */
                    VECTOR(int32_t, 4) l_1222 = (VECTOR(int32_t, 4))(0x455D7376L, (VECTOR(int32_t, 2))(0x455D7376L, (-9L)), (-9L));
                    VECTOR(int32_t, 16) l_1223 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    int32_t l_1224 = 0x70E9D6FCL;
                    uint16_t l_1225 = 0xB108L;
                    VECTOR(int32_t, 8) l_1226 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
                    VECTOR(int32_t, 8) l_1227 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    VECTOR(int32_t, 4) l_1228 = (VECTOR(int32_t, 4))(0x530E080BL, (VECTOR(int32_t, 2))(0x530E080BL, 0x597061E8L), 0x597061E8L);
                    int i;
                    l_1222.x = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_1222.xz)).xyxyxxyx, ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_1223.s9141817534a329e7)).sb6f1, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1224, l_1225, 0x03247BBFL, (-1L))).hi)).xyxx))).wyzwzyzzzxxzxwyy)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1226.s00246253)).s0342556332314550)).sa5e8)).wwxywxyx, ((VECTOR(int32_t, 8))(l_1227.s61764235))))).s3073435177242600))).lo)))).s12)), 0x324097E7L)).zzywwwwy, ((VECTOR(int32_t, 8))(l_1228.wwxxxzzy))))).s4;
                    unsigned int result = 0;
                    result += l_1222.w;
                    result += l_1222.z;
                    result += l_1222.y;
                    result += l_1222.x;
                    result += l_1223.sf;
                    result += l_1223.se;
                    result += l_1223.sd;
                    result += l_1223.sc;
                    result += l_1223.sb;
                    result += l_1223.sa;
                    result += l_1223.s9;
                    result += l_1223.s8;
                    result += l_1223.s7;
                    result += l_1223.s6;
                    result += l_1223.s5;
                    result += l_1223.s4;
                    result += l_1223.s3;
                    result += l_1223.s2;
                    result += l_1223.s1;
                    result += l_1223.s0;
                    result += l_1224;
                    result += l_1225;
                    result += l_1226.s7;
                    result += l_1226.s6;
                    result += l_1226.s5;
                    result += l_1226.s4;
                    result += l_1226.s3;
                    result += l_1226.s2;
                    result += l_1226.s1;
                    result += l_1226.s0;
                    result += l_1227.s7;
                    result += l_1227.s6;
                    result += l_1227.s5;
                    result += l_1227.s4;
                    result += l_1227.s3;
                    result += l_1227.s2;
                    result += l_1227.s1;
                    result += l_1227.s0;
                    result += l_1228.w;
                    result += l_1228.z;
                    result += l_1228.y;
                    result += l_1228.x;
                    atomic_add(&p_1621->l_special_values[36], result);
                }
                else
                { /* block id: 564 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 567 */
                uint32_t l_1245 = 0x10B92BB5L;
                int32_t l_1252 = 0x0D490C36L;
                if ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) <= (((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))), 0x2A6D896AL, 0x0C3040B9L)).z != ((p_1621->g_19.s6 = (**p_1621->g_945)) ^ ((**l_1163) <= (((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(0x7EL, 0x72L)), ((VECTOR(uint8_t, 16))(0x71L, 0UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_1621->g_1240.s3377456572302543)))).s9f, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1621->g_1241.zxyyyxyx)).s6671703301244651)).s6d16))))).zxwzywzx, ((VECTOR(uint8_t, 16))(0x7AL, 0x6BL, (safe_sub_func_int32_t_s_s((p_1621->g_1244 = (l_1065.s6 == 2L)), FAKE_DIVERGE(p_1621->local_2_offset, get_local_id(2), 10))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x6FL, ((VECTOR(uint8_t, 4))(((((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 1L)).xxyxxxxx)).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1245, (safe_mod_func_int64_t_s_s((((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(p_1621->g_1248.sec)).xxxy, ((VECTOR(uint8_t, 4))(1UL, (p_1621->g_829.s2 < (safe_rshift_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))((FAKE_DIVERGE(p_1621->global_2_offset, get_global_id(2), 10) | (p_1621->g_231[2][3] || (*p_1621->g_740))), 5UL, 65532UL, 1UL)).wxzxxxyx, ((VECTOR(uint16_t, 8))(0x00A7L))))), ((VECTOR(uint16_t, 4))(65529UL)), p_1621->g_302.z, ((VECTOR(uint16_t, 2))(0xF99CL)), 65528UL)).s46, ((VECTOR(uint16_t, 2))(0x6C36L))))).odd , (**p_1621->g_545)), (*p_1621->g_546)))), 3UL, 1UL)), ((VECTOR(uint8_t, 4))(255UL))))).z & 2UL), (-1L))), 1L, 1L)).xxwyxzyz)).lo, ((VECTOR(int32_t, 4))(0x36FC9B0FL))))), ((VECTOR(int32_t, 4))(1L)), (-8L), l_1245, (**l_1163), ((VECTOR(int32_t, 4))((-10L))), (-1L))).s3aaf))).x ^ p_1621->g_1055) ^ 6L), l_1245, 3UL, 0x09L)), 8UL, 0x1AL, 5UL)))).s30)), (**p_1621->g_545), ((VECTOR(uint8_t, 8))(1UL)), 250UL, 1UL)).odd, ((VECTOR(uint8_t, 8))(0xD3L))))).s35, ((VECTOR(uint8_t, 2))(0UL))))), 1UL, 0x53L)), 1UL, ((VECTOR(uint8_t, 4))(6UL)), 255UL, (**p_1621->g_545), 1UL, 0UL, 0xC0L)).s45))).yyxxxxxx)))).odd)).zxwwzzyw, ((VECTOR(uint8_t, 8))(0x0EL))))).s3 | GROUP_DIVERGE(0, 1))))), (*p_1621->g_740))) != p_1621->g_826.y), 0x91EEE79AL)) >= (**l_1163)) , FAKE_DIVERGE(p_1621->global_0_offset, get_global_id(0), 10))), 5)), l_22.sc)))
                { /* block id: 570 */
                    --l_1253;
                    (*l_737) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1256.s65)).yxyxxyyxxxxyxyxy)))))).se;
                }
                else
                { /* block id: 573 */
                    uint8_t *l_1282 = (void*)0;
                    uint8_t *l_1283[1];
                    int32_t l_1286 = 0x0D8EF484L;
                    uint64_t *l_1287 = &l_1253;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1283[i] = (void*)0;
                    for (l_1084 = 0; (l_1084 >= (-11)); l_1084 = safe_sub_func_int8_t_s_s(l_1084, 3))
                    { /* block id: 576 */
                        int32_t *l_1259 = (void*)0;
                        (*l_729) = l_1259;
                    }
                    for (l_1253 = 13; (l_1253 == 9); --l_1253)
                    { /* block id: 581 */
                        if (l_1245)
                            break;
                    }
                    l_1172.y |= (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((safe_mod_func_uint8_t_u_u(((0x0391L != p_1621->g_585.y) , 248UL), ((safe_sub_func_int64_t_s_s(((((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4E15B099L, 0x62651636L)))), ((VECTOR(int32_t, 16))(p_1621->g_1270.wwwzxxzwwxxzxxyx)).sff, ((VECTOR(int32_t, 2))(0x48C7804EL, 0L))))).odd != ((safe_add_func_uint8_t_u_u(((**p_1621->g_545) = ((**p_1621->g_217) > ((**p_1621->g_545) != 0x51L))), (+FAKE_DIVERGE(p_1621->local_2_offset, get_local_id(2), 10)))) == (((*l_1287) = (FAKE_DIVERGE(p_1621->global_2_offset, get_global_id(2), 10) , (+(safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_1621->g_297[3], ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(0x5EL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1279.yx)), 255UL, 0x3AL)).wzwxyxzz, ((VECTOR(uint8_t, 16))(6UL, 0x36L, 0xC6L, 0xA3L, ((safe_sub_func_uint16_t_u_u((**l_1163), ((((VECTOR(int32_t, 2))(0x0FFBF81EL, 1L)).odd & ((p_1621->g_936.s4--) <= (((*p_1621->g_740) | l_1286) == 0x54L))) , l_1286))) >= l_1286), ((VECTOR(uint8_t, 8))(0xD5L)), 0x5AL, 0xBDL, 0x27L)).even))))), ((VECTOR(uint8_t, 2))(0xC2L)), ((VECTOR(uint8_t, 2))(0x45L)), 0x13L, 0x0BL, 0UL)).s68, ((VECTOR(uint8_t, 2))(0x10L))))), ((VECTOR(uint8_t, 8))(0x0FL)), l_1252, 1UL, (**l_1163), l_1286, 0x17L, 6UL)).s3)) , p_1621->g_319.y), 1L))))) != l_1245))) | p_1621->g_319.w), GROUP_DIVERGE(0, 1))) || (**p_1621->g_545)))), ((VECTOR(int8_t, 2))((-1L))), (-1L))).odd)).xxyx)).zwwwzzwwwxyxzzww, ((VECTOR(int8_t, 16))((-7L)))))).s4, p_1621->g_382.x)) ^ (*l_737)) >= 1UL), 0x5814C91BBE498B5CL, 0x119BDA17FA315C0CL, l_1288, l_1245, 1L, (-1L), (-8L))).s2, p_1621->g_831.s1));
                }
                if ((atomic_inc(&p_1621->g_atomic_input[99 * get_linear_group_id() + 23]) == 6))
                { /* block id: 590 */
                    int16_t l_1289 = 1L;
                    uint64_t l_1307 = 0x87756B852D99C7CEL;
                    uint64_t *l_1306 = &l_1307;
                    uint64_t **l_1305[4][6][7] = {{{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306}},{{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306}},{{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306}},{{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306},{&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306,&l_1306}}};
                    uint64_t **l_1308 = &l_1306;
                    int i, j, k;
                    if (l_1289)
                    { /* block id: 591 */
                        VECTOR(int8_t, 16) l_1290 = (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, 0x62L), 0x62L), 0x62L, 0x17L, 0x62L, (VECTOR(int8_t, 2))(0x17L, 0x62L), (VECTOR(int8_t, 2))(0x17L, 0x62L), 0x17L, 0x62L, 0x17L, 0x62L);
                        int16_t l_1291[6][10] = {{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L},{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L},{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L},{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L},{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L},{0L,1L,0x131EL,1L,0L,0L,1L,0x131EL,1L,0L}};
                        uint32_t l_1292 = 0x87C87908L;
                        int i, j;
                        ++l_1292;
                    }
                    else
                    { /* block id: 593 */
                        int64_t l_1295[1][8][4] = {{{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L},{2L,0x480D055BA4DC7B18L,6L,0x480D055BA4DC7B18L}}};
                        int16_t l_1296 = (-1L);
                        uint64_t l_1297 = 18446744073709551615UL;
                        int i, j, k;
                        l_1297--;
                    }
                    for (l_1289 = (-9); (l_1289 < (-27)); l_1289 = safe_sub_func_uint32_t_u_u(l_1289, 3))
                    { /* block id: 598 */
                        uint16_t l_1302 = 9UL;
                        int32_t l_1304 = 1L;
                        int32_t *l_1303 = &l_1304;
                        l_1303 = (l_1302 , (GROUP_DIVERGE(1, 1) , l_1303));
                    }
                    l_1308 = (l_1305[2][4][3] = (void*)0);
                    unsigned int result = 0;
                    result += l_1289;
                    result += l_1307;
                    atomic_add(&p_1621->g_special_values[99 * get_linear_group_id() + 23], result);
                }
                else
                { /* block id: 603 */
                    (1 + 1);
                }
            }
            for (l_1084 = 0; (l_1084 < 10); l_1084 = safe_add_func_int32_t_s_s(l_1084, 1))
            { /* block id: 609 */
                uint32_t *l_1325 = (void*)0;
                int32_t l_1331 = 1L;
                int32_t l_1343 = 1L;
                int32_t l_1361[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1361[i] = 0x12E7678DL;
                for (l_849 = 5; (l_849 < 12); ++l_849)
                { /* block id: 612 */
                    uint32_t **l_1314 = &l_725;
                    int32_t l_1323 = (-6L);
                    int64_t l_1328 = 1L;
                    l_1314 = l_1313;
                    (**l_1163) = (+((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))((&p_1621->g_218 != ((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((*p_1621->g_740) < p_1621->g_840.s0) , (~(((--p_1621->g_840.s5) , (safe_mod_func_int16_t_s_s(l_1323, (((VECTOR(uint16_t, 2))(0x48E5L, 0xB090L)).even ^ (((l_1325 = l_1324) == p_1621->g_181) || (*p_1621->g_181)))))) , (safe_lshift_func_uint8_t_u_s(l_1328, 5))))), (safe_lshift_func_uint16_t_u_u(2UL, p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))])))) || 0x7663L), 5)) , l_1331) & 0x4EEC533CL) , (void*)0)), (*p_1621->g_181), 2L, 0x7A159251L, (**l_1163), ((VECTOR(int32_t, 2))(0x20A78FD0L)), 0x00681337L)).s2632534320233374, (int32_t)1L, (int32_t)(*l_737)))).s0);
                    l_1361[0] |= (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((*p_1621->g_740), p_1621->g_583.y)), (safe_mul_func_int8_t_s_s((l_1360.z = ((*l_1046) = (((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(l_1340.yxyx)).lo, (uint32_t)GROUP_DIVERGE(1, 1)))).odd , (((safe_add_func_uint32_t_u_u((l_1343 | ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1621->g_1344.seb16fc41)).s1201602601071570)).s8), (safe_mod_func_uint64_t_u_u(0x02DD2BDC12051825L, ((VECTOR(int64_t, 8))(p_1621->g_1347.s2c79a481)).s6)))) & ((0x35L || (((*p_1621->g_740) == (safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(0, 1)))) , ((((((((safe_lshift_func_int16_t_s_s(0x0D26L, 15)) & ((p_1621->g_867.x ^= ((*l_737) == ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1353.yw)).yyxxxxxy)), 0x7C5ED44FL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1354.yxyyyzwzxwzyyzxx)).even)).s77)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(7L, ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((l_1343 != 18446744073709551613UL) || (-1L)), 0UL)), l_1359[0][2])) != GROUP_DIVERGE(0, 1)), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))((-3L))))).even)).lo)), (**l_1163), 0x41B6B56CL, 0x086C5E70L)).s1f02, ((VECTOR(int32_t, 4))(0L))))).wwzzwzyx)))).hi))))).z)) , l_1331)) , 0x13957703L) > 6L) && 0UL) < (**p_1621->g_545)) >= (*l_737)) > (*l_737)))) == (*p_1621->g_740))) > 0x3A9CL)))), (*l_737))))), l_1331));
                    return (*p_1621->g_740);
                }
            }
        }
        if ((atomic_inc(&p_1621->l_atomic_input[88]) == 5))
        { /* block id: 626 */
            uint32_t l_1362 = 0x09EF6C2DL;
            uint32_t l_1363 = 0x343C3003L;
            int32_t l_1364 = 2L;
            uint8_t l_1365 = 252UL;
            l_1363 ^= l_1362;
            l_1365 ^= l_1364;
            unsigned int result = 0;
            result += l_1362;
            result += l_1363;
            result += l_1364;
            result += l_1365;
            atomic_add(&p_1621->l_special_values[88], result);
        }
        else
        { /* block id: 629 */
            (1 + 1);
        }
        if ((&p_1621->g_546 != ((*l_1366) = (void*)0)))
        { /* block id: 633 */
            int16_t l_1374 = 0x6A5FL;
            int32_t l_1380 = 0x76EF5829L;
            (*p_1621->g_181) = (*p_1621->g_663);
            (*p_1621->g_663) = (&p_1621->g_388[0] != &l_1100[0]);
            for (l_658 = 0; (l_658 > (-10)); l_658 = safe_sub_func_int32_t_s_s(l_658, 9))
            { /* block id: 638 */
                int8_t ***l_1369 = &l_1047;
                (*l_1369) = &l_1048[0][1];
            }
            for (p_1621->g_180 = 0; (p_1621->g_180 < 16); p_1621->g_180++)
            { /* block id: 643 */
                l_2.sd &= (l_1380 &= (safe_sub_func_uint8_t_u_u((l_1374 > 7UL), (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1621->g_1377.sc2)).yxyyyxyyxyyxxxyy)).sa, (safe_lshift_func_uint8_t_u_s((*p_1621->g_546), 5)))))));
            }
        }
        else
        { /* block id: 647 */
            VECTOR(uint32_t, 2) l_1402 = (VECTOR(uint32_t, 2))(0UL, 4294967294UL);
            VECTOR(uint32_t, 4) l_1403 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x3FFC209DL), 0x3FFC209DL);
            VECTOR(uint32_t, 16) l_1410 = (VECTOR(uint32_t, 16))(0xA4336904L, (VECTOR(uint32_t, 4))(0xA4336904L, (VECTOR(uint32_t, 2))(0xA4336904L, 1UL), 1UL), 1UL, 0xA4336904L, 1UL, (VECTOR(uint32_t, 2))(0xA4336904L, 1UL), (VECTOR(uint32_t, 2))(0xA4336904L, 1UL), 0xA4336904L, 1UL, 0xA4336904L, 1UL);
            VECTOR(uint32_t, 4) l_1411 = (VECTOR(uint32_t, 4))(0xAFC2F632L, (VECTOR(uint32_t, 2))(0xAFC2F632L, 1UL), 1UL);
            int32_t l_1420[10][6][2] = {{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}},{{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L},{0x5BE0CE82L,0x5BE0CE82L}}};
            int16_t l_1421 = 0x2C2FL;
            VECTOR(uint8_t, 16) l_1448 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 255UL), 255UL), 255UL, 248UL, 255UL, (VECTOR(uint8_t, 2))(248UL, 255UL), (VECTOR(uint8_t, 2))(248UL, 255UL), 248UL, 255UL, 248UL, 255UL);
            VECTOR(int32_t, 8) l_1453 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x06DE2725L), 0x06DE2725L), 0x06DE2725L, 3L, 0x06DE2725L);
            int32_t l_1459[6][9][4] = {{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}},{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}},{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}},{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}},{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}},{{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL},{(-1L),9L,0x4DDEB7EFL,0x496C5F6FL}}};
            uint32_t l_1460 = 4294967295UL;
            int8_t l_1461 = 0x2DL;
            VECTOR(uint8_t, 4) l_1482 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x6EL), 0x6EL);
            int i, j, k;
            l_1086 = ((*p_1621->g_227) = &p_1621->g_180);
            for (l_949 = 0; (l_949 < 5); ++l_949)
            { /* block id: 652 */
                uint16_t ***l_1390 = &l_1388;
                VECTOR(uint16_t, 16) l_1396 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xFA6DL), 0xFA6DL), 0xFA6DL, 8UL, 0xFA6DL, (VECTOR(uint16_t, 2))(8UL, 0xFA6DL), (VECTOR(uint16_t, 2))(8UL, 0xFA6DL), 8UL, 0xFA6DL, 8UL, 0xFA6DL);
                VECTOR(int32_t, 16) l_1405 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                uint64_t *l_1419 = (void*)0;
                int i;
                (**l_729) = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((p_1621->g_1387 == ((*l_1390) = l_1388)) <= (((((!(safe_add_func_uint64_t_u_u((l_1420[4][2][0] = (0x5E5BC899L || (((safe_add_func_uint32_t_u_u(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_1621->g_1395.s5a66)))), ((VECTOR(uint16_t, 8))(l_1396.sf920e2f2)).hi))).zxzwyywyyxxzyzwx)).odd)).s3523070050566752)).even)).s0 || ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(0x1080B84EL, ((VECTOR(uint32_t, 2))(0xB2120D42L, 0x33C634AEL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(p_1621->g_1397.sfbce7521)).s2406473323246311, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1398.sed)).xxyxyyxy)), (~(--(*l_1324))), (**l_729), ((VECTOR(uint32_t, 4))(p_1621->g_588.x, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(p_1621->g_1401.s81b0e8d5d1e966c9)).s0a, (uint32_t)((VECTOR(uint32_t, 2))(l_1402.xx)).lo))), 0UL)), 0xE46D472AL, 0xC9803D6BL))))).scc))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(l_1403.xz)).yyyyyxyxxxyyxyyx, ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1621->g_1404.s8b)).yyxxyyyy)).s63, ((VECTOR(int32_t, 8))(l_1405.s55fa3191)).s13, ((VECTOR(int32_t, 8))(l_1406.s3faeebf2)).s24)))))).xxxxxxxyyyxyyxxx, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_1407.xxyxyxxy)).lo, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(p_1621->g_585.y, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x65BD7E48L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1408.s61)))), 0xC24E31F4L)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1409.s72)))), 0x14559E08L, 4294967295UL)), FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(0xCA26981FL, 4294967288UL))))).xyxx, ((VECTOR(uint32_t, 16))(l_1410.s95301b610ed5c762)).s911c, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_1411.xxxz)).yzzxwyxx)).odd)).lo)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_1411.w && (((safe_mod_func_uint64_t_u_u(((9UL & (*p_1621->g_228)) == p_1621->g_1248.s2), l_1405.sf)) >= p_1621->g_1244) != GROUP_DIVERGE(2, 1))), (*l_1086))), (-7L))), 0x4DB72530L, ((VECTOR(uint32_t, 2))(4294967289UL)), ((VECTOR(uint32_t, 4))(0x726DE62CL)), 6UL, 4294967295UL, 4294967295UL, 0x24443753L, 0xCE997713L, ((VECTOR(uint32_t, 2))(0UL)), 0x2EEFC449L)).sdb)), ((VECTOR(uint32_t, 2))(0UL))))), 0xD1BB97E9L, 4294967288UL)))))))), ((VECTOR(uint32_t, 4))(4294967294UL))))).yxyyxxwyyzxwywyz, ((VECTOR(uint32_t, 16))(0UL)), ((VECTOR(uint32_t, 16))(0x7DCB5361L))))).s22ee)), 0xA23FB091L, 0x76F57295L)).hi, ((VECTOR(uint32_t, 8))(4294967295UL))))).odd, ((VECTOR(uint32_t, 4))(0xC42E241AL))))), ((VECTOR(uint32_t, 4))(5UL))))).yyxywzywwwxwxxxx))))).s1c))).yxxy)), ((VECTOR(uint32_t, 2))(0xBBF7D9C8L)), 0xD39FC064L, 0x4AE908BDL)), ((VECTOR(uint32_t, 8))(1UL)), ((VECTOR(uint32_t, 8))(0xD6F67C76L))))))), 0x42F70CBBL, p_1621->g_335.s7, (*l_1086), 0x2919E09DL, 0x9988F4C7L)), ((VECTOR(uint32_t, 16))(0x62F0CF4DL))))).sb) || (*p_1621->g_181)), (*l_1086))) , l_1418) & (**p_1621->g_227)))), p_1621->g_826.x))) < (*p_1621->g_740)) & l_1421) & 0x58099953C1A2BE0DL) && 0x15EF36B8L)), 0L)), p_1621->g_747[1][1]));
                (**p_1621->g_227) = (0x3137A3DEL > ((p_1621->g_846.s4 , 0x0F57L) || GROUP_DIVERGE(2, 1)));
                (*p_1621->g_663) ^= ((*l_1086) = l_1396.s8);
                if ((*p_1621->g_663))
                    break;
            }
            for (p_1621->g_238 = (-25); (p_1621->g_238 > 24); ++p_1621->g_238)
            { /* block id: 664 */
                uint8_t *l_1456 = (void*)0;
                int32_t l_1458 = (-1L);
                int64_t *l_1462 = &p_1621->g_1000;
                for (l_757 = (-30); (l_757 != 25); ++l_757)
                { /* block id: 667 */
                    return (*p_1621->g_740);
                }
                l_1420[4][2][0] ^= ((safe_mod_func_int64_t_s_s(((**p_1621->g_945) & 1UL), p_1621->g_831.s4)) , (((*l_1462) &= ((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((*p_1621->g_740), (l_1403.x || (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((((safe_add_func_uint32_t_u_u(((p_1621->g_1240.s4 = ((0x1295CAFDL != p_1621->g_588.x) | (((VECTOR(uint32_t, 4))(p_1621->g_1442.xxyy)).y ^ ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((((((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(l_1448.s67)), ((VECTOR(uint8_t, 2))(255UL, 0x45L))))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(253UL, 0x23L)))).xyyy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_1449.yyyy)).xzxywzxwwzzyzwwz)))))), ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((safe_add_func_int64_t_s_s((((((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 16))(p_1621->g_1452.xyyyyyyyyyyyxxyy)).sc2, ((VECTOR(int32_t, 4))(l_1453.s4164)).hi))), ((VECTOR(uint32_t, 2))(0x208EA5C0L, 4UL))))).odd && (*l_1086)) < (safe_lshift_func_uint8_t_u_u(((((*p_1621->g_545) = (*p_1621->g_545)) == l_1456) || (*p_1621->g_740)), (**l_729)))) < (*p_1621->g_228)), 0xCD0E5B7AF1B1F61EL)), 0x3BL, 0x35L, 0xDEL)).xxxywxxxxxwyzwyw)).s29)).yyxyyyyxxxxyxyyy, ((VECTOR(uint8_t, 16))(0x2EL))))).se133))).yzwwzzxyyywyxzxw, (uint8_t)FAKE_DIVERGE(p_1621->local_0_offset, get_local_id(0), 10), (uint8_t)255UL))), ((VECTOR(uint8_t, 16))(1UL))))).s32, ((VECTOR(uint8_t, 2))(0x22L))))), 0x90L, 255UL))))), 0x64L, 0x21L, 0x8EL, 0x29L)).hi, ((VECTOR(uint8_t, 4))(0xD0L))))).zzwxwzxx)).s26, ((VECTOR(uint8_t, 2))(0x69L)))))))), (**p_1621->g_545), 0xDEL, 0UL, l_1410.s7, 0UL, 0x6FL)))))).lo, (uint8_t)5UL))), l_1457[0], 0x1AL, 255UL, 0xB6L, 0UL, ((VECTOR(uint8_t, 4))(252UL)), (*p_1621->g_546), 0UL, 0xC6L)).s06))).lo , 0x58L) & 0x5AL) | (*l_1086)))), 7L)), l_1458)) && (*l_1086))))) & 247UL), 0x38E4A4CCL)) , 0x8C61CFE7L) | l_1459[1][7][0]) > (*p_1621->g_740)), 0x8CA27548279077CAL, l_1402.y, 18446744073709551609UL, 7UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0xCA19CE4F619DBD61L)), 18446744073709551606UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 18446744073709551615UL)))).sc >= l_1453.s1) & (*p_1621->g_740)) > l_1460) == 0x3133BCE0CA412690L) ^ 0x1EACL) || l_1461), (*p_1621->g_228))), l_1411.z))))) < p_1621->g_210[1]), 9)) || l_1403.z), l_1448.sf)), (*l_1086))) < p_1621->g_867.x) <= 18446744073709551606UL) & l_1410.sd)) , (*p_1621->g_181)));
                l_1458 = (safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((*l_1046) = ((VECTOR(int8_t, 2))((-9L), 1L)).odd), ((((safe_rshift_func_int8_t_s_u((((((safe_div_func_uint32_t_u_u(p_1621->g_1124.sb, (((((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_1621->g_1475.s76163016)).s1, 13)), 7)) != (((*l_729) = (*p_1621->g_227)) == (void*)0)) & (safe_lshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s(0x667A8E18L, 0x676C9DCFL)) == (((VECTOR(uint64_t, 16))(1UL, 18446744073709551614UL, (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(l_1482.zywxyxyxwzzxwxzx)).s2, ((void*)0 != l_1456))), 0x2629F4185E05C1F5L, 7UL, 0xC6EDCA3619A98DD6L, (l_1458 >= (-9L)), ((VECTOR(uint64_t, 4))(1UL)), 18446744073709551612UL, 1UL, 0x4C002DEFE780FE23L, 18446744073709551613UL, 0x07EB797B5E124487L)).s5 ^ (*l_1086))) || (*p_1621->g_740)), (*p_1621->g_946)))) && (*l_1086)) != FAKE_DIVERGE(p_1621->global_2_offset, get_global_id(2), 10)) && 65535UL) , l_1410.s1))) <= p_1621->g_1214.x) > p_1621->g_868.s8) && (-1L)) >= p_1621->g_747[1][1]), (**p_1621->g_545))) , (**p_1621->g_217)) , (*l_1086)) || l_1460))) , l_1461) < (*l_1086)), (*l_1086)));
                p_1621->g_1270.y &= (safe_div_func_int64_t_s_s(((((*p_1621->g_740) , (p_1621->g_1404.s9 , 0UL)) , (((*p_1621->g_546) | (*p_1621->g_546)) ^ (((((((**l_729) > ((4294967295UL & (((0x08L == (p_1621->g_803.x = ((*l_1046) = ((safe_mod_func_uint16_t_u_u(((p_1621->g_772.s2 = ((*l_45) = ((*p_1621->g_740) <= 6UL))) , 0x3AA5L), (*p_1621->g_740))) > (*l_1086))))) || 65529UL) && 0xCBF4DEA77879CF15L)) && 7UL)) == (*p_1621->g_740)) <= 1L) , p_1621->g_319.z) | p_1621->g_281.x) | (**l_729)))) || l_1459[2][6][3]), l_1460));
            }
        }
    }
    else
    { /* block id: 684 */
        int64_t l_1490 = 0x1DC48FC21CC9FBA7L;
        int32_t l_1509 = 0L;
        int64_t l_1511[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1511[i] = (-3L);
        l_1511[1] ^= (((*p_1621->g_740) <= (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1621->g_1489.s5340)), (((((((~l_1490) & p_1621->g_1395.s9) || ((safe_div_func_int32_t_s_s((FAKE_DIVERGE(p_1621->local_0_offset, get_local_id(0), 10) <= (safe_mod_func_int32_t_s_s((((*l_1086) |= l_1490) == (((safe_sub_func_uint32_t_u_u(l_1497, (safe_sub_func_int8_t_s_s(l_1490, (safe_add_func_int64_t_s_s((l_1067.s3 <= (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1621->g_1502.s12035410)), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((*l_1324) = (l_1490 ^ ((++(*p_1621->g_546)) || (l_1509 = ((*p_1621->g_545) != (*p_1621->g_545)))))) >= l_1490) , FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10)), 15)), l_1490)) , l_1490), p_1621->g_1055, 1UL, ((VECTOR(uint64_t, 4))(18446744073709551611UL)), 2UL)).s2 , 0x6C9EEE234D4615F1L) == (**p_1621->g_217)) >= (-10L))), 0xDA8ECCEC6C360423L)))))) < p_1621->g_670) != l_1490)), p_1621->g_868.sb))), p_1621->g_558.s9)) | p_1621->g_1510)) && 0x6B6F60E1L) != p_1621->g_1442.y) | 0xF7BF25D8L) & 0x8017EDDEL), ((VECTOR(uint8_t, 8))(0xB2L)), 0x9AL, 0x27L, 0x99L)).s1, l_1490))) == (*p_1621->g_218));
    }
    if ((atomic_inc(&p_1621->g_atomic_input[99 * get_linear_group_id() + 62]) == 4))
    { /* block id: 692 */
        int32_t l_1512 = 0L;
        int16_t l_1519 = 0L;
        int32_t l_1520 = 0x144E1346L;
        uint32_t l_1548 = 0xDCEBBB92L;
        uint32_t l_1549 = 4294967294UL;
        int64_t l_1550 = 0x4DB840CC6E0DE879L;
        int8_t l_1551 = 1L;
        for (l_1512 = (-18); (l_1512 <= 8); l_1512 = safe_add_func_uint32_t_u_u(l_1512, 1))
        { /* block id: 695 */
            int32_t l_1516 = 0L;
            int32_t *l_1515 = &l_1516;
            int8_t l_1517 = 0x7AL;
            int8_t l_1518 = (-6L);
            l_1515 = (void*)0;
            l_1518 = l_1517;
        }
        if ((l_1519 , l_1520))
        { /* block id: 699 */
            int32_t l_1521 = 0x449A5CF4L;
            VECTOR(int16_t, 8) l_1541 = (VECTOR(int16_t, 8))(0x711AL, (VECTOR(int16_t, 4))(0x711AL, (VECTOR(int16_t, 2))(0x711AL, 0x09A7L), 0x09A7L), 0x09A7L, 0x711AL, 0x09A7L);
            VECTOR(uint32_t, 4) l_1542 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), 4294967295UL);
            int32_t l_1543[10][6][4] = {{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}},{{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)},{(-1L),0x252EB6D0L,0L,(-1L)}}};
            int32_t *l_1544 = &l_1521;
            int32_t *l_1545 = (void*)0;
            int i, j, k;
            for (l_1521 = (-24); (l_1521 == 1); ++l_1521)
            { /* block id: 702 */
                int32_t l_1524 = 0x04C1929FL;
                int32_t l_1533 = (-1L);
                int16_t l_1534 = 0L;
                int64_t l_1535[7] = {(-7L),0x04959FA34E9BADCBL,(-7L),(-7L),0x04959FA34E9BADCBL,(-7L),(-7L)};
                VECTOR(uint8_t, 16) l_1536 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x1DL), 0x1DL), 0x1DL, 2UL, 0x1DL, (VECTOR(uint8_t, 2))(2UL, 0x1DL), (VECTOR(uint8_t, 2))(2UL, 0x1DL), 2UL, 0x1DL, 2UL, 0x1DL);
                uint64_t l_1537 = 0x0BDCCCC05669DEE7L;
                uint8_t l_1538 = 0UL;
                int32_t l_1539 = 1L;
                uint64_t l_1540 = 0x2564D4AEF49C4734L;
                int i;
                for (l_1524 = (-6); (l_1524 != (-13)); l_1524 = safe_sub_func_uint16_t_u_u(l_1524, 2))
                { /* block id: 705 */
                    uint8_t l_1527 = 1UL;
                    --l_1527;
                    for (l_1527 = 0; (l_1527 == 43); ++l_1527)
                    { /* block id: 709 */
                        uint32_t l_1532 = 1UL;
                        l_1512 = l_1532;
                    }
                }
                l_1512 &= 0x334700F7L;
                l_1540 ^= (l_1539 = (l_1538 = (l_1537 = ((l_1535[2] = (l_1533 , l_1534)) , (l_1512 |= l_1536.s7)))));
            }
            l_1512 = 0x446EC18BL;
            l_1545 = (((VECTOR(int16_t, 16))(l_1541.s3136621061157416)).sd , ((((VECTOR(uint32_t, 4))(l_1542.xxwx)).z , (l_1541.s5 |= l_1543[8][2][2])) , l_1544));
        }
        else
        { /* block id: 724 */
            VECTOR(int32_t, 8) l_1546 = (VECTOR(int32_t, 8))(0x56C920C0L, (VECTOR(int32_t, 4))(0x56C920C0L, (VECTOR(int32_t, 2))(0x56C920C0L, 0x76D4D3BFL), 0x76D4D3BFL), 0x76D4D3BFL, 0x56C920C0L, 0x76D4D3BFL);
            int32_t *l_1547[1][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int i, j, k;
            l_1512 = ((VECTOR(int32_t, 16))(l_1546.s2053367504617047)).sd;
            l_1547[0][2][0] = (void*)0;
        }
        l_1549 = l_1548;
        if (((l_1550 ^= 5L) , l_1551))
        { /* block id: 730 */
            VECTOR(int32_t, 4) l_1552 = (VECTOR(int32_t, 4))(0x5F5A0807L, (VECTOR(int32_t, 2))(0x5F5A0807L, 0x58B86E9EL), 0x58B86E9EL);
            uint32_t l_1553 = 0xD915C693L;
            int64_t l_1554 = 0x4ED6DD51CABC600AL;
            int16_t l_1555 = 0x58C9L;
            uint8_t l_1556[9];
            int32_t *l_1584 = (void*)0;
            int32_t *l_1585[1];
            int i;
            for (i = 0; i < 9; i++)
                l_1556[i] = 250UL;
            for (i = 0; i < 1; i++)
                l_1585[i] = (void*)0;
            l_1556[4] ^= ((l_1555 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0L, (-1L))).yxxyyxxxyxyyxyyy)).sa7, ((VECTOR(int32_t, 2))(0x2D114642L, 0L))))), 0x52B93F6CL, 1L))))).odd, (int32_t)((VECTOR(int32_t, 2))(l_1552.wy)).lo, (int32_t)l_1553))), 0L, 0x24036A56L)).z , l_1554)) , (l_1512 = 0L));
            for (l_1554 = 0; (l_1554 > 16); l_1554++)
            { /* block id: 736 */
                uint32_t l_1559 = 0x3C4B6DF2L;
                int64_t l_1583 = 0x206FB5DF3433A484L;
                if (l_1559)
                { /* block id: 737 */
                    int32_t l_1561 = 0x358111B0L;
                    int32_t *l_1560 = &l_1561;
                    int32_t *l_1562 = &l_1561;
                    int32_t l_1574 = 7L;
                    uint16_t l_1575 = 4UL;
                    l_1562 = l_1560;
                    for (l_1561 = 19; (l_1561 == (-29)); --l_1561)
                    { /* block id: 741 */
                        int64_t l_1565 = 0x799794929359B46CL;
                        int64_t l_1566 = (-9L);
                        uint8_t l_1567 = 255UL;
                        int32_t l_1571 = 0x38550205L;
                        int32_t *l_1570[7][9] = {{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571},{&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571,&l_1571}};
                        uint16_t l_1572 = 0x06A0L;
                        uint8_t l_1573 = 1UL;
                        int i, j;
                        --l_1567;
                        l_1570[3][8] = (l_1560 = l_1570[3][8]);
                        (*l_1560) = l_1572;
                        (*l_1560) = l_1573;
                    }
                    l_1575--;
                }
                else
                { /* block id: 749 */
                    int32_t l_1579 = 0L;
                    int32_t *l_1578 = &l_1579;
                    int32_t *l_1580 = &l_1579;
                    int32_t *l_1581 = (void*)0;
                    int32_t *l_1582 = &l_1579;
                    l_1582 = (l_1581 = (l_1580 = l_1578));
                }
                l_1512 |= l_1583;
                l_1552.w ^= 1L;
            }
            l_1585[0] = l_1584;
        }
        else
        { /* block id: 758 */
            int32_t l_1586 = 0L;
            int32_t *l_1617[1];
            int32_t *l_1618 = &l_1586;
            VECTOR(int32_t, 2) l_1619 = (VECTOR(int32_t, 2))(0L, 0x3E7B0533L);
            int32_t l_1620 = 7L;
            int i;
            for (i = 0; i < 1; i++)
                l_1617[i] = (void*)0;
            for (l_1586 = 0; (l_1586 <= 12); l_1586++)
            { /* block id: 761 */
                int32_t l_1589 = 0x072D3974L;
                for (l_1589 = (-3); (l_1589 > (-27)); l_1589--)
                { /* block id: 764 */
                    int8_t l_1592 = 0x39L;
                    uint8_t l_1593 = 253UL;
                    VECTOR(int32_t, 16) l_1596 = (VECTOR(int32_t, 16))(0x009E295AL, (VECTOR(int32_t, 4))(0x009E295AL, (VECTOR(int32_t, 2))(0x009E295AL, 0x612A3BF5L), 0x612A3BF5L), 0x612A3BF5L, 0x009E295AL, 0x612A3BF5L, (VECTOR(int32_t, 2))(0x009E295AL, 0x612A3BF5L), (VECTOR(int32_t, 2))(0x009E295AL, 0x612A3BF5L), 0x009E295AL, 0x612A3BF5L, 0x009E295AL, 0x612A3BF5L);
                    VECTOR(int32_t, 2) l_1597 = (VECTOR(int32_t, 2))(0x3181274EL, 0x53261FB2L);
                    VECTOR(int32_t, 2) l_1598 = (VECTOR(int32_t, 2))(9L, 0x07577D32L);
                    int i;
                    l_1593--;
                    l_1512 = 4L;
                    if ((l_1512 &= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0L, 0L)).yyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1596.s93b531f8)).s05)).yyyyyyyyxxyxxyyx)).s7f01, ((VECTOR(int32_t, 2))(l_1597.xx)).yxxx))).zxwywwxx, ((VECTOR(int32_t, 4))(l_1598.xyxy)).zwxxwwyw))).s3))
                    { /* block id: 768 */
                        int16_t l_1599 = 0x4F85L;
                        int16_t l_1600 = 0x3758L;
                        int32_t l_1601 = 9L;
                        int32_t l_1602 = (-1L);
                        uint8_t l_1603 = 0x30L;
                        int32_t *l_1606[5];
                        int32_t *l_1607 = &l_1601;
                        int32_t *l_1608 = &l_1601;
                        int32_t *l_1609 = &l_1601;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1606[i] = &l_1601;
                        l_1603--;
                        l_1607 = l_1606[1];
                        l_1606[2] = (l_1609 = l_1608);
                    }
                    else
                    { /* block id: 773 */
                        uint32_t l_1610 = 0x531DC255L;
                        uint8_t l_1611 = 0xCBL;
                        int16_t l_1612 = 0x6B97L;
                        uint32_t l_1613 = 0x188E3C0FL;
                        int32_t l_1615 = 2L;
                        int32_t *l_1614 = &l_1615;
                        int32_t *l_1616 = &l_1615;
                        l_1611 ^= l_1610;
                        l_1616 = (((l_1612 , 0x0AL) , l_1613) , l_1614);
                    }
                }
            }
            l_1618 = l_1617[0];
            l_1512 = l_1619.x;
            l_1512 = (((VECTOR(uint8_t, 2))(248UL, 1UL)).even , l_1620);
        }
        unsigned int result = 0;
        result += l_1512;
        result += l_1519;
        result += l_1520;
        result += l_1548;
        result += l_1549;
        result += l_1550;
        result += l_1551;
        atomic_add(&p_1621->g_special_values[99 * get_linear_group_id() + 62], result);
    }
    else
    { /* block id: 783 */
        (1 + 1);
    }
    return (*p_1621->g_740);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_7(int32_t  p_8, int8_t  p_9, uint32_t  p_10, int32_t  p_11, int32_t  p_12, struct S0 * p_1621)
{ /* block id: 381 */
    uint16_t l_724[10] = {0x2CABL,0xE1BBL,0x2CABL,0x2CABL,0xE1BBL,0x2CABL,0x2CABL,0xE1BBL,0x2CABL,0x2CABL};
    int i;
    return l_724[8];
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_295 p_1621->g_670 p_1621->g_46
 * writes: p_1621->g_295 p_1621->g_670 p_1621->g_382 p_1621->g_46
 */
uint32_t  func_13(int64_t  p_14, uint64_t  p_15, int32_t  p_16, uint8_t  p_17, int8_t  p_18, struct S0 * p_1621)
{ /* block id: 346 */
    uint32_t l_680 = 0xD50E9AD7L;
    int32_t l_685 = 0x53754016L;
    int32_t l_688[1][9][5] = {{{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L}}};
    uint64_t l_691 = 0xF7BAD9636EDC7E1AL;
    int i, j, k;
    for (p_1621->g_295 = 0; (p_1621->g_295 > 38); p_1621->g_295 = safe_add_func_int32_t_s_s(p_1621->g_295, 3))
    { /* block id: 349 */
        int32_t l_679[5][1][7] = {{{0x6DCA9403L,1L,1L,0x6DCA9403L,1L,0x795D7AC0L,0x795D7AC0L}},{{0x6DCA9403L,1L,1L,0x6DCA9403L,1L,0x795D7AC0L,0x795D7AC0L}},{{0x6DCA9403L,1L,1L,0x6DCA9403L,1L,0x795D7AC0L,0x795D7AC0L}},{{0x6DCA9403L,1L,1L,0x6DCA9403L,1L,0x795D7AC0L,0x795D7AC0L}},{{0x6DCA9403L,1L,1L,0x6DCA9403L,1L,0x795D7AC0L,0x795D7AC0L}}};
        int32_t l_684 = 0x50C386F3L;
        int32_t l_686 = 0L;
        int32_t l_687 = 6L;
        int32_t l_689 = 0L;
        int32_t l_690 = 0x2054E093L;
        int i, j, k;
        for (p_14 = 0; (p_14 != 2); ++p_14)
        { /* block id: 352 */
            uint8_t *l_669[10] = {&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295,&p_1621->g_295};
            int8_t *l_675 = (void*)0;
            int8_t *l_676 = (void*)0;
            int8_t *l_677[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t *l_678 = (void*)0;
            int32_t *l_681 = &p_1621->g_235;
            int32_t *l_682 = (void*)0;
            int32_t *l_683[5][7] = {{(void*)0,&p_1621->g_235,(void*)0,(void*)0,(void*)0,&p_1621->g_235,(void*)0},{(void*)0,&p_1621->g_235,(void*)0,(void*)0,(void*)0,&p_1621->g_235,(void*)0},{(void*)0,&p_1621->g_235,(void*)0,(void*)0,(void*)0,&p_1621->g_235,(void*)0},{(void*)0,&p_1621->g_235,(void*)0,(void*)0,(void*)0,&p_1621->g_235,(void*)0},{(void*)0,&p_1621->g_235,(void*)0,(void*)0,(void*)0,&p_1621->g_235,(void*)0}};
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1621->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[(safe_mod_func_uint32_t_u_u(((l_679[2][0][3] = ((p_1621->g_670++) & ((p_1621->g_382.y = (safe_rshift_func_uint8_t_u_u(p_15, 4))) < (-1L)))) , l_680), 10))][(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))]));
            --l_691;
        }
        if (p_16)
            break;
        for (p_1621->g_46 = 16; (p_1621->g_46 >= (-26)); p_1621->g_46--)
        { /* block id: 364 */
            return p_14;
        }
    }
    if ((atomic_inc(&p_1621->g_atomic_input[99 * get_linear_group_id() + 0]) == 0))
    { /* block id: 369 */
        VECTOR(uint64_t, 16) l_696 = (VECTOR(uint64_t, 16))(0x78C7BC158CDDD75FL, (VECTOR(uint64_t, 4))(0x78C7BC158CDDD75FL, (VECTOR(uint64_t, 2))(0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L), 0x44B0DBF2FB8A64E8L), 0x44B0DBF2FB8A64E8L, 0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L, (VECTOR(uint64_t, 2))(0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L), (VECTOR(uint64_t, 2))(0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L), 0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L, 0x78C7BC158CDDD75FL, 0x44B0DBF2FB8A64E8L);
        VECTOR(int32_t, 4) l_697 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
        VECTOR(int32_t, 2) l_698 = (VECTOR(int32_t, 2))(0L, 0x4FB31B9EL);
        VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L);
        VECTOR(int32_t, 4) l_700 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
        VECTOR(int32_t, 16) l_701 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x11427957L), 0x11427957L), 0x11427957L, (-9L), 0x11427957L, (VECTOR(int32_t, 2))((-9L), 0x11427957L), (VECTOR(int32_t, 2))((-9L), 0x11427957L), (-9L), 0x11427957L, (-9L), 0x11427957L);
        VECTOR(int32_t, 8) l_702 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6E5BF39DL), 0x6E5BF39DL), 0x6E5BF39DL, (-8L), 0x6E5BF39DL);
        uint8_t l_703 = 255UL;
        int64_t l_704 = 0x20D68816B66121DCL;
        VECTOR(int32_t, 4) l_705 = (VECTOR(int32_t, 4))(0x2032EA7EL, (VECTOR(int32_t, 2))(0x2032EA7EL, 0x389ED56FL), 0x389ED56FL);
        VECTOR(int32_t, 8) l_706 = (VECTOR(int32_t, 8))(0x3D849FACL, (VECTOR(int32_t, 4))(0x3D849FACL, (VECTOR(int32_t, 2))(0x3D849FACL, 7L), 7L), 7L, 0x3D849FACL, 7L);
        VECTOR(int32_t, 16) l_707 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
        VECTOR(int16_t, 2) l_708 = (VECTOR(int16_t, 2))((-10L), 0x5EE0L);
        VECTOR(uint16_t, 16) l_709 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 65534UL), 65534UL), 65534UL, 2UL, 65534UL, (VECTOR(uint16_t, 2))(2UL, 65534UL), (VECTOR(uint16_t, 2))(2UL, 65534UL), 2UL, 65534UL, 2UL, 65534UL);
        VECTOR(int32_t, 16) l_710 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L), (VECTOR(int32_t, 2))(0L, (-9L)), (VECTOR(int32_t, 2))(0L, (-9L)), 0L, (-9L), 0L, (-9L));
        int16_t l_711[8][2][2] = {{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}},{{0x07F9L,0x07F9L},{0x07F9L,0x07F9L}}};
        VECTOR(int32_t, 4) l_712 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3CD0DAB4L), 0x3CD0DAB4L);
        uint32_t l_713 = 4294967289UL;
        int8_t l_714[4];
        int64_t *l_716 = &l_704;
        int64_t **l_715 = &l_716;
        int64_t **l_717 = &l_716;
        VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x587A47C7L), 0x587A47C7L);
        uint32_t l_719[3][9][3] = {{{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL}},{{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL}},{{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL},{4294967291UL,0x62C6BFD1L,4294967289UL}}};
        int32_t l_720 = (-8L);
        int32_t l_721 = 1L;
        uint32_t l_722 = 4294967291UL;
        uint32_t l_723 = 6UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_714[i] = (-8L);
        l_714[3] = (((VECTOR(uint64_t, 2))(l_696.se6)).even , ((GROUP_DIVERGE(0, 1) , ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_697.zxwwxyxzyyxxyyzx)).even, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_698.yyyyxyyx)))).s6501377076464376)).s5f, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_699.xywxxxxx)).s30, ((VECTOR(int32_t, 2))(l_700.xx)), ((VECTOR(int32_t, 4))(0L, 0x31914612L, 0x28B725ADL, 7L)).lo))).xyyyyyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_701.s8a79)).hi, ((VECTOR(int32_t, 4))(l_702.s5322)).even))), 0L, 0x1B930749L, 0x51FA9F10L, 0x434307D6L, 5L, (l_700.x = l_703), l_704, ((VECTOR(int32_t, 2))(l_705.yw)), 0x16E7B0ACL, 0x740F7866L, (-5L), 0x5B889D76L, (-6L))).odd))).even, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_706.s64)).yxxx)))))).odd))).yxxxxxxyyyyyyxxx)).odd, ((VECTOR(int32_t, 8))(l_707.s2e551471)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_708.yxxxxyyxxyyyxyyx)).s8d5a, ((VECTOR(uint16_t, 4))(l_709.se205))))).zzzxwwxw))).s22, ((VECTOR(int32_t, 8))(l_710.s2758af97)).s00))).yxxy, (int32_t)l_711[4][0][1]))).xwzyzwwzzwwzxwxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6893019DL, 1L)).xxyx)).yzyzxzwwxwyzxyyy, ((VECTOR(int32_t, 2))(l_712.yw)).xxyyyyyxxxxyxyyy))).even))).s0) , l_713));
        l_702.s5 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x73A335AEL, 0x2A008398L)).xyyy)).zzxyyxzwyxyxwzzw)).sb;
        l_717 = (l_715 = (void*)0);
        l_723 |= ((l_721 |= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-4L))), (-1L), 0x6B27FAEBL)).wzyywyyzwzyxywxy)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_718.ww)).xyxxxxxx))))), (int32_t)l_719[2][5][2], (int32_t)l_720))).s7) , l_722);
        unsigned int result = 0;
        result += l_696.sf;
        result += l_696.se;
        result += l_696.sd;
        result += l_696.sc;
        result += l_696.sb;
        result += l_696.sa;
        result += l_696.s9;
        result += l_696.s8;
        result += l_696.s7;
        result += l_696.s6;
        result += l_696.s5;
        result += l_696.s4;
        result += l_696.s3;
        result += l_696.s2;
        result += l_696.s1;
        result += l_696.s0;
        result += l_697.w;
        result += l_697.z;
        result += l_697.y;
        result += l_697.x;
        result += l_698.y;
        result += l_698.x;
        result += l_699.w;
        result += l_699.z;
        result += l_699.y;
        result += l_699.x;
        result += l_700.w;
        result += l_700.z;
        result += l_700.y;
        result += l_700.x;
        result += l_701.sf;
        result += l_701.se;
        result += l_701.sd;
        result += l_701.sc;
        result += l_701.sb;
        result += l_701.sa;
        result += l_701.s9;
        result += l_701.s8;
        result += l_701.s7;
        result += l_701.s6;
        result += l_701.s5;
        result += l_701.s4;
        result += l_701.s3;
        result += l_701.s2;
        result += l_701.s1;
        result += l_701.s0;
        result += l_702.s7;
        result += l_702.s6;
        result += l_702.s5;
        result += l_702.s4;
        result += l_702.s3;
        result += l_702.s2;
        result += l_702.s1;
        result += l_702.s0;
        result += l_703;
        result += l_704;
        result += l_705.w;
        result += l_705.z;
        result += l_705.y;
        result += l_705.x;
        result += l_706.s7;
        result += l_706.s6;
        result += l_706.s5;
        result += l_706.s4;
        result += l_706.s3;
        result += l_706.s2;
        result += l_706.s1;
        result += l_706.s0;
        result += l_707.sf;
        result += l_707.se;
        result += l_707.sd;
        result += l_707.sc;
        result += l_707.sb;
        result += l_707.sa;
        result += l_707.s9;
        result += l_707.s8;
        result += l_707.s7;
        result += l_707.s6;
        result += l_707.s5;
        result += l_707.s4;
        result += l_707.s3;
        result += l_707.s2;
        result += l_707.s1;
        result += l_707.s0;
        result += l_708.y;
        result += l_708.x;
        result += l_709.sf;
        result += l_709.se;
        result += l_709.sd;
        result += l_709.sc;
        result += l_709.sb;
        result += l_709.sa;
        result += l_709.s9;
        result += l_709.s8;
        result += l_709.s7;
        result += l_709.s6;
        result += l_709.s5;
        result += l_709.s4;
        result += l_709.s3;
        result += l_709.s2;
        result += l_709.s1;
        result += l_709.s0;
        result += l_710.sf;
        result += l_710.se;
        result += l_710.sd;
        result += l_710.sc;
        result += l_710.sb;
        result += l_710.sa;
        result += l_710.s9;
        result += l_710.s8;
        result += l_710.s7;
        result += l_710.s6;
        result += l_710.s5;
        result += l_710.s4;
        result += l_710.s3;
        result += l_710.s2;
        result += l_710.s1;
        result += l_710.s0;
        int l_711_i0, l_711_i1, l_711_i2;
        for (l_711_i0 = 0; l_711_i0 < 8; l_711_i0++) {
            for (l_711_i1 = 0; l_711_i1 < 2; l_711_i1++) {
                for (l_711_i2 = 0; l_711_i2 < 2; l_711_i2++) {
                    result += l_711[l_711_i0][l_711_i1][l_711_i2];
                }
            }
        }
        result += l_712.w;
        result += l_712.z;
        result += l_712.y;
        result += l_712.x;
        result += l_713;
        int l_714_i0;
        for (l_714_i0 = 0; l_714_i0 < 4; l_714_i0++) {
            result += l_714[l_714_i0];
        }
        result += l_718.w;
        result += l_718.z;
        result += l_718.y;
        result += l_718.x;
        int l_719_i0, l_719_i1, l_719_i2;
        for (l_719_i0 = 0; l_719_i0 < 3; l_719_i0++) {
            for (l_719_i1 = 0; l_719_i1 < 9; l_719_i1++) {
                for (l_719_i2 = 0; l_719_i2 < 3; l_719_i2++) {
                    result += l_719[l_719_i0][l_719_i1][l_719_i2];
                }
            }
        }
        result += l_720;
        result += l_721;
        result += l_722;
        result += l_723;
        atomic_add(&p_1621->g_special_values[99 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 377 */
        (1 + 1);
    }
    return l_685;
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_227 p_1621->g_663
 * writes: p_1621->g_228 p_1621->g_297 p_1621->g_235
 */
int8_t  func_26(uint32_t  p_27, int64_t  p_28, int64_t  p_29, int64_t  p_30, uint32_t  p_31, struct S0 * p_1621)
{ /* block id: 341 */
    int32_t *l_659 = (void*)0;
    VECTOR(int16_t, 2) l_660 = (VECTOR(int16_t, 2))((-6L), 0x27BFL);
    int16_t *l_661 = &p_1621->g_297[3];
    int32_t *l_662 = (void*)0;
    int i;
    (*p_1621->g_227) = l_659;
    (*p_1621->g_663) = (((VECTOR(int16_t, 2))(l_660.xy)).odd != ((*l_661) = 0x4797L));
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_227 p_1621->g_20 p_1621->g_19 p_1621->g_217 p_1621->g_218 p_1621->g_46 p_1621->g_281 p_1621->g_277 p_1621->g_180 p_1621->g_235 p_1621->g_480 p_1621->g_382 p_1621->g_228 p_1621->g_231 p_1621->g_372 p_1621->g_302 p_1621->g_295 p_1621->g_545 p_1621->g_297 p_1621->g_580 p_1621->g_583 p_1621->g_585 p_1621->g_587 p_1621->g_588 p_1621->g_210 p_1621->g_546 p_1621->g_558 p_1621->g_181 p_1621->g_43 p_1621->g_654 p_1621->g_656
 * writes: p_1621->g_228 p_1621->g_382 p_1621->g_210 p_1621->g_180 p_1621->g_231 p_1621->g_235 p_1621->g_297 p_1621->g_541 p_1621->g_281 p_1621->g_545 p_1621->g_480 p_1621->g_558 p_1621->g_46 p_1621->g_43 p_1621->g_654
 */
int64_t  func_36(uint32_t  p_37, int64_t  p_38, uint64_t  p_39, int32_t  p_40, struct S0 * p_1621)
{ /* block id: 190 */
    uint32_t l_390 = 0x9E96CAA0L;
    uint8_t *l_391 = &p_1621->g_295;
    int32_t l_393 = 0x050474A2L;
    VECTOR(int16_t, 16) l_394 = (VECTOR(int16_t, 16))(0x1858L, (VECTOR(int16_t, 4))(0x1858L, (VECTOR(int16_t, 2))(0x1858L, 0x54ABL), 0x54ABL), 0x54ABL, 0x1858L, 0x54ABL, (VECTOR(int16_t, 2))(0x1858L, 0x54ABL), (VECTOR(int16_t, 2))(0x1858L, 0x54ABL), 0x1858L, 0x54ABL, 0x1858L, 0x54ABL);
    int32_t l_436 = (-1L);
    int32_t l_437 = 0x5A61598BL;
    int32_t l_438 = 0x111BF914L;
    VECTOR(int32_t, 2) l_440 = (VECTOR(int32_t, 2))((-5L), 1L);
    VECTOR(int32_t, 4) l_459 = (VECTOR(int32_t, 4))(0x3FC4E3D8L, (VECTOR(int32_t, 2))(0x3FC4E3D8L, 0x147081E4L), 0x147081E4L);
    int16_t *l_468 = (void*)0;
    VECTOR(uint16_t, 16) l_489 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x36B6L), 0x36B6L), 0x36B6L, 0UL, 0x36B6L, (VECTOR(uint16_t, 2))(0UL, 0x36B6L), (VECTOR(uint16_t, 2))(0UL, 0x36B6L), 0UL, 0x36B6L, 0UL, 0x36B6L);
    uint64_t l_522 = 1UL;
    uint8_t ***l_572 = &p_1621->g_545;
    int32_t l_578 = 2L;
    int i;
    (*p_1621->g_227) = (void*)0;
    if ((~l_390))
    { /* block id: 192 */
        uint8_t **l_392 = &l_391;
        VECTOR(int8_t, 8) l_397 = (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x3AL), 0x3AL), 0x3AL, (-8L), 0x3AL);
        int8_t *l_406 = (void*)0;
        uint32_t *l_407 = (void*)0;
        int32_t l_408 = 0x7F40068BL;
        uint32_t *l_409 = &p_1621->g_210[2];
        int32_t l_413[4][6] = {{(-7L),(-1L),0x03EE92EFL,(-1L),(-7L),(-7L)},{(-7L),(-1L),0x03EE92EFL,(-1L),(-7L),(-7L)},{(-7L),(-1L),0x03EE92EFL,(-1L),(-7L),(-7L)},{(-7L),(-1L),0x03EE92EFL,(-1L),(-7L),(-7L)}};
        int32_t l_444 = 0L;
        int32_t l_445 = (-1L);
        int32_t l_447 = 0x7A41F7F3L;
        int32_t l_448 = 0x20BC243EL;
        int32_t l_449 = (-10L);
        int32_t l_450 = 0x4564CF22L;
        VECTOR(int32_t, 8) l_478 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L));
        int32_t *l_573 = (void*)0;
        int i, j;
        if ((0x3EL >= (((*l_409) = ((l_408 = ((((((VECTOR(uint16_t, 2))(0UL, 0xF367L)).lo <= (l_390 == ((((*l_392) = l_391) != &p_1621->g_295) < ((l_393 = GROUP_DIVERGE(2, 1)) > ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(l_394.sb65af1ee)), (int16_t)(safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_397.s3645)).odd)).lo, p_1621->g_20.s6))))))).s4)))) , (safe_mod_func_uint64_t_u_u(((p_37 ^ FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10)) ^ 0x10L), ((((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(((p_1621->g_382.y = (safe_div_func_int32_t_s_s(4L, l_397.s4))) , 0xDB9EDBCDL), p_1621->g_19.s5)) , 0x9600C165BA99D9C4L) > (**p_1621->g_217)), p_38)) != p_1621->g_281.x) , 0x2E9CEC52L) ^ (-7L))))) >= p_1621->g_277) >= 8L)) || p_40)) , l_390)))
        { /* block id: 198 */
            uint16_t l_410 = 0UL;
            l_410--;
        }
        else
        { /* block id: 200 */
            int32_t *l_414 = (void*)0;
            int32_t *l_415 = (void*)0;
            int32_t *l_416 = &p_1621->g_180;
            int32_t l_432 = 0x4E3D1AC7L;
            int32_t l_435 = (-4L);
            int32_t l_439 = (-1L);
            int32_t l_441 = 2L;
            int32_t l_442 = 1L;
            int32_t l_443 = (-1L);
            int32_t l_446 = 0L;
            int32_t l_451 = (-1L);
            VECTOR(uint32_t, 4) l_452 = (VECTOR(uint32_t, 4))(0xF23654E6L, (VECTOR(uint32_t, 2))(0xF23654E6L, 4294967287UL), 4294967287UL);
            VECTOR(uint32_t, 4) l_555 = (VECTOR(uint32_t, 4))(0x2B9EBC3FL, (VECTOR(uint32_t, 2))(0x2B9EBC3FL, 0xCBEEF1CFL), 0xCBEEF1CFL);
            uint16_t l_569[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_569[i] = 1UL;
            (*l_416) = l_413[0][3];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1621->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_394.s5, 0x1980L)), 10))][(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))]));
            if (l_408)
            { /* block id: 205 */
                int32_t *l_419 = &p_1621->g_231[5][2];
                int32_t *l_420 = (void*)0;
                int32_t *l_421 = &p_1621->g_231[1][1];
                int32_t *l_422 = &p_1621->g_231[1][2];
                int32_t *l_423 = (void*)0;
                int32_t *l_424 = &p_1621->g_238;
                int32_t *l_425 = &p_1621->g_231[5][2];
                int32_t *l_426 = (void*)0;
                int32_t *l_427 = &p_1621->g_180;
                int32_t *l_428 = &p_1621->g_238;
                int32_t *l_429 = &l_408;
                int32_t *l_430 = &p_1621->g_231[6][1];
                int32_t *l_431 = &l_408;
                int32_t *l_433 = &p_1621->g_235;
                int32_t *l_434[3][2];
                uint64_t *l_466 = (void*)0;
                uint64_t *l_467[1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_434[i][j] = &p_1621->g_235;
                }
                for (i = 0; i < 1; i++)
                    l_467[i] = (void*)0;
                ++l_452.z;
                for (l_408 = (-13); (l_408 > 18); l_408 = safe_add_func_int16_t_s_s(l_408, 3))
                { /* block id: 209 */
                    for (l_449 = 14; (l_449 < 11); l_449--)
                    { /* block id: 212 */
                        (*l_430) = ((VECTOR(int32_t, 16))(l_459.ywzxywxyzwwywwyy)).sc;
                        (*l_427) &= p_38;
                    }
                    if ((*l_416))
                        break;
                }
                l_448 |= (safe_div_func_uint64_t_u_u((p_37 , (((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(0x01L, 6)), (l_444 |= ((l_407 = (void*)0) != (void*)0)))) , l_468) == &p_1621->g_297[3])), (**p_1621->g_217)));
                if ((atomic_inc(&p_1621->l_atomic_input[13]) == 9))
                { /* block id: 222 */
                    int32_t l_469 = 0x120E7ED8L;
                    int32_t l_470 = 0x039F2344L;
                    int32_t l_472[10][7] = {{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)},{(-9L),8L,1L,(-2L),0x4590B853L,(-9L),(-2L)}};
                    int32_t *l_471[10][7] = {{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]},{&l_472[0][1],&l_472[0][1],&l_472[4][0],&l_472[0][1],(void*)0,&l_472[4][5],&l_472[0][1]}};
                    int32_t *l_473[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_473[i] = (void*)0;
                    l_470 &= l_469;
                    l_473[0] = l_471[1][6];
                    unsigned int result = 0;
                    result += l_469;
                    result += l_470;
                    int l_472_i0, l_472_i1;
                    for (l_472_i0 = 0; l_472_i0 < 10; l_472_i0++) {
                        for (l_472_i1 = 0; l_472_i1 < 7; l_472_i1++) {
                            result += l_472[l_472_i0][l_472_i1];
                        }
                    }
                    atomic_add(&p_1621->l_special_values[13], result);
                }
                else
                { /* block id: 225 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 228 */
                uint16_t l_506 = 9UL;
                int8_t *l_507 = (void*)0;
                int8_t *l_508[9][1];
                int16_t *l_509 = (void*)0;
                int16_t *l_510 = (void*)0;
                int16_t *l_511 = (void*)0;
                int16_t *l_512 = (void*)0;
                int16_t *l_513 = &p_1621->g_297[3];
                int32_t l_514 = (-3L);
                int32_t l_515 = (-9L);
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_508[i][j] = (void*)0;
                }
                for (l_449 = (-14); (l_449 > 0); l_449++)
                { /* block id: 231 */
                    int8_t l_479 = 0x1AL;
                    for (p_1621->g_235 = (-13); (p_1621->g_235 != (-12)); p_1621->g_235 = safe_add_func_int32_t_s_s(p_1621->g_235, 4))
                    { /* block id: 234 */
                        l_479 &= ((VECTOR(int32_t, 8))(l_478.s73132601)).s2;
                    }
                }
                (*p_1621->g_227) = (((((*l_513) = ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(p_37, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(p_1621->g_480.s0236)).odd, ((VECTOR(int16_t, 4))(0L, ((*l_416) |= (safe_lshift_func_uint16_t_u_s(l_447, (safe_lshift_func_int16_t_s_s((((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(0xBAL, 248UL)).yxxx, (uint8_t)0x5AL, (uint8_t)((safe_mul_func_int16_t_s_s((p_37 >= (safe_lshift_func_uint16_t_u_u(((((l_397.s4 || ((VECTOR(uint16_t, 4))(l_489.s87f3)).w) == ((FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10) , ((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_40, (~p_1621->g_281.x))), (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((p_1621->g_382.x = (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((void*)0 == &p_1621->g_295), GROUP_DIVERGE(0, 1))), (**p_1621->g_217))), l_506))) || 0x25L), l_437)), 5)))), p_37)) && 0x02L)) & FAKE_DIVERGE(p_1621->local_2_offset, get_local_id(2), 10))) >= 3L) == 0x60E769A47CA6D87FL), p_37))), p_37)) || p_39)))).w == 0xDDL), 11))))), 5L, 0x315DL)).lo))), 0x4A3BL, p_1621->g_382.x, ((VECTOR(int16_t, 2))(0x02DBL)), 0x20ACL)).s44, ((VECTOR(int16_t, 2))(0x4BB0L))))).hi) < 0x4BE0L) < 0x1856L) , &l_448);
                l_515 ^= (l_514 = p_39);
            }
            for (p_1621->g_235 = 0; (p_1621->g_235 > (-10)); p_1621->g_235--)
            { /* block id: 247 */
                uint64_t *l_532 = (void*)0;
                uint8_t *l_534 = &p_1621->g_295;
                int32_t l_536 = 4L;
                int32_t *l_567 = &p_1621->g_231[5][2];
                int32_t *l_568 = &l_447;
                for (p_1621->g_180 = 0; (p_1621->g_180 == 26); ++p_1621->g_180)
                { /* block id: 250 */
                    VECTOR(uint64_t, 16) l_566 = (VECTOR(uint64_t, 16))(0x02B030D819E723B0L, (VECTOR(uint64_t, 4))(0x02B030D819E723B0L, (VECTOR(uint64_t, 2))(0x02B030D819E723B0L, 1UL), 1UL), 1UL, 0x02B030D819E723B0L, 1UL, (VECTOR(uint64_t, 2))(0x02B030D819E723B0L, 1UL), (VECTOR(uint64_t, 2))(0x02B030D819E723B0L, 1UL), 0x02B030D819E723B0L, 1UL, 0x02B030D819E723B0L, 1UL);
                    int i, j;
                    if (p_37)
                        break;
                    for (p_37 = 0; (p_37 > 57); ++p_37)
                    { /* block id: 254 */
                        (*p_1621->g_227) = &l_438;
                        if (l_522)
                            break;
                        (**p_1621->g_227) = ((void*)0 != &l_406);
                    }
                    if ((safe_add_func_int16_t_s_s(l_459.y, (0x1B95DD95DD5046C3L >= p_1621->g_231[1][0]))))
                    { /* block id: 259 */
                        uint64_t **l_533 = &l_532;
                        int32_t *l_535 = &l_444;
                        uint32_t *l_542 = (void*)0;
                        l_459.x = (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_div_func_uint64_t_u_u(((p_1621->g_281.y |= (((safe_div_func_int8_t_s_s(((((*l_533) = l_532) != (p_1621->g_541 = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1621->g_20.s2, (0xE489C1A0B6E57B45L >= ((VECTOR(uint64_t, 16))((0x0EFBD0BEL == (l_536 ^= (l_436 = ((*l_535) = (((*l_392) = l_534) != &p_1621->g_295))))), ((safe_add_func_uint16_t_u_u(p_37, (-1L))) < ((((*l_535) < 1UL) | p_37) == FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10))), ((VECTOR(uint64_t, 4))(0UL)), l_459.y, ((VECTOR(uint64_t, 8))(0UL)), 0x51C925C797D7E8A4L)).s5), 0xF1C50707L, 1UL)).odd)), p_1621->g_19.s2, 1UL, 4294967288UL, 0x79387DADL, 4294967295UL, 0UL)).s5 , (void*)0))) != p_37), p_39)) | (-1L)) , p_1621->g_372.s6)) && p_37), (*p_1621->g_218))) , p_1621->g_302.x))), p_1621->g_295));
                    }
                    else
                    { /* block id: 268 */
                        uint8_t ***l_547 = &l_392;
                        uint8_t ***l_548 = &p_1621->g_545;
                        int16_t *l_564 = (void*)0;
                        int32_t l_565 = (-1L);
                        l_566.s1 = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x26L, 0x24L)))).hi, (((FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10) == p_38) && ((((*l_548) = ((*l_547) = p_1621->g_545)) == ((l_536 < (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((p_1621->g_558.s8 = (p_1621->g_480.s4 = ((safe_mul_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_555.wzxyxxzx)), p_37, ((VECTOR(uint32_t, 8))(1UL, 0x0E44E128L, 0x2A7898CCL, p_1621->g_480.s7, ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(p_1621->g_231[7][2], (-3L), l_440.y, ((VECTOR(int16_t, 4))(p_1621->g_558.s89a9)).w, ((VECTOR(int16_t, 4))(0x2DDAL, 0x0BF9L, 0x1604L, 0x1516L)))).s4, p_37)) , (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((safe_sub_func_int32_t_s_s((((((VECTOR(int32_t, 8))((-10L), (0x0C16E6C5818DCD70L <= p_1621->g_20.s8), ((VECTOR(int32_t, 2))(0x63B12F56L)), 0x3AAD3CF5L, ((VECTOR(int32_t, 2))(5L)), (-5L))).s6 , 65526UL) & l_393) > p_38), 0x50B96490L)) > p_40))) , 1L), p_1621->g_319.y))), FAKE_DIVERGE(p_1621->global_0_offset, get_global_id(0), 10), 4294967294UL, 0x9A347A0EL)).s3, ((VECTOR(uint32_t, 2))(4294967295UL)), 4294967290UL, ((VECTOR(uint32_t, 2))(0x766A40F9L)), 6UL)).s7ef5, ((VECTOR(uint32_t, 4))(0xA1200105L))))).z , GROUP_DIVERGE(2, 1)), 250UL)) < l_489.sc))), l_565)), 0x652AL))) , &p_1621->g_546)) && l_413[2][0])) != 0xB3L)));
                        if (l_565)
                            continue;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1621->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[(safe_mod_func_uint32_t_u_u(p_1621->g_297[5], 10))][(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))]));
                }
                if (p_40)
                    continue;
                if (l_459.x)
                    continue;
                l_569[0]--;
            }
        }
        l_459.x = (~(l_447 = (((l_572 == l_572) , &p_1621->g_218) == (((p_39 & p_37) == p_1621->g_19.s7) , &p_1621->g_218))));
    }
    else
    { /* block id: 287 */
        int32_t *l_576 = (void*)0;
        int32_t *l_577 = &l_393;
        VECTOR(int32_t, 16) l_579 = (VECTOR(int32_t, 16))(0x7F40781AL, (VECTOR(int32_t, 4))(0x7F40781AL, (VECTOR(int32_t, 2))(0x7F40781AL, (-8L)), (-8L)), (-8L), 0x7F40781AL, (-8L), (VECTOR(int32_t, 2))(0x7F40781AL, (-8L)), (VECTOR(int32_t, 2))(0x7F40781AL, (-8L)), 0x7F40781AL, (-8L), 0x7F40781AL, (-8L));
        VECTOR(int32_t, 16) l_581 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0336632FL), 0x0336632FL), 0x0336632FL, (-1L), 0x0336632FL, (VECTOR(int32_t, 2))((-1L), 0x0336632FL), (VECTOR(int32_t, 2))((-1L), 0x0336632FL), (-1L), 0x0336632FL, (-1L), 0x0336632FL);
        VECTOR(int32_t, 4) l_582 = (VECTOR(int32_t, 4))(0x6287AAA1L, (VECTOR(int32_t, 2))(0x6287AAA1L, 0L), 0L);
        int64_t l_593 = 0x213710731883DD57L;
        uint32_t l_651 = 0UL;
        int i;
        for (l_436 = 14; (l_436 == (-5)); --l_436)
        { /* block id: 290 */
            if (p_38)
                break;
            if (p_37)
                break;
        }
        if (((*l_577) &= ((((*p_1621->g_218) = 0x67C924B33ED50390L) , (void*)0) == l_576)))
        { /* block id: 296 */
            VECTOR(int32_t, 8) l_584 = (VECTOR(int32_t, 8))(0x5E412D0BL, (VECTOR(int32_t, 4))(0x5E412D0BL, (VECTOR(int32_t, 2))(0x5E412D0BL, 0L), 0L), 0L, 0x5E412D0BL, 0L);
            VECTOR(int32_t, 4) l_586 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-4L)), (-4L));
            int32_t l_594 = 0x2CA6F14AL;
            int i;
            (*p_1621->g_227) = (((l_578 != ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(0xF1B98303L, ((VECTOR(uint32_t, 8))((*l_577), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(l_579.sc16b9513cf69452d)).se573, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1621->g_580.xy)).hi, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_581.s9c2f)).hi, ((VECTOR(int32_t, 2))(0x1E945587L, 0x05D63CCEL))))), 7L)).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_582.zwwz)), (l_594 |= ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x331B304FL, 0x1B051626L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1621->g_583.xx)), ((VECTOR(int32_t, 4))(0x36E89145L, 0x1DD3FBA7L, 1L, 0x75D974D5L)), 5L, (-5L), ((VECTOR(int32_t, 2))(l_584.s05)), 0x5EDB553FL, (+((((void*)0 == (*p_1621->g_227)) , l_391) != l_391)), 1L, 0x6D93A25DL, 0L, 0x5A22E776L)).s0b))).xxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1621->g_585.yyyy)), ((VECTOR(int32_t, 8))(l_586.xxzxxyyx)), (-7L), ((VECTOR(int32_t, 2))(0x1466E4FAL, (-1L))), 0x0499E377L)).sc519))).odd)).xxxxyyyx)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1621->g_587.xw)), (((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x2A76A489L, 0x1E91BA2EL)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), (-7L))))).xyyyyxyyxxyxxxyy)).sf3))).xyxx, ((VECTOR(int32_t, 8))(p_1621->g_588.xyyxxyyx)).odd, ((VECTOR(int32_t, 16))((((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_1621->g_281.y & ((p_39 && 0x07C83BC1A68CC9C6L) != 0x0525L)), l_593)), GROUP_DIVERGE(0, 1))) & 0x51L) && 1L), (*l_577), (-1L), p_40, ((VECTOR(int32_t, 2))((-1L))), 0x4B6B8D71L, 0x1D5C4EABL, ((VECTOR(int32_t, 2))(0x4A432665L)), ((VECTOR(int32_t, 4))(0L)), 1L, 0x43547BADL)).s13f5))).x < p_39), ((VECTOR(int32_t, 8))(0x5637BB5EL)), 0L, p_40, 0x788854E5L, (-9L), 4L)).s0384, (int32_t)0x4A23D885L))))), ((VECTOR(int32_t, 4))((-1L)))))).xzzywwxx)).odd, ((VECTOR(int32_t, 4))((-10L)))))), ((VECTOR(int32_t, 2))(0x724B5F1CL)), (-10L), 0x1A2FE0B9L, ((VECTOR(int32_t, 4))(0L)), p_37, 0L, (-1L), 0x33861021L)).s0427))).z), p_40, 7L, ((VECTOR(int32_t, 2))((-3L))), ((VECTOR(int32_t, 2))(0x45D69905L)), l_584.s7, ((VECTOR(int32_t, 2))(5L)), (-2L), 0x11A798A2L)).hi)).s01)), ((VECTOR(int32_t, 2))(0x3833F63EL))))).yxyx)).xyxxzzxxxyzxwxyx)).s5f95))))).zxwxwwyzwzxxwwxz, ((VECTOR(uint32_t, 16))(0x0706D207L))))).s5d)), 4UL, 8UL)), 0x70732FADL, 4294967295UL, 1UL)), ((VECTOR(uint32_t, 2))(0UL)), 0xCFD0C9F9L, l_394.s4, 0xE0997A38L, 0xCE688556L, 4294967291UL)).odd, (uint32_t)p_39))).s6066013171217002)).seac9, ((VECTOR(uint32_t, 4))(4294967289UL))))).w) , p_38) , (void*)0);
        }
        else
        { /* block id: 299 */
            VECTOR(uint16_t, 8) l_618 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x8FE3L), 0x8FE3L), 0x8FE3L, 65534UL, 0x8FE3L);
            int32_t l_648 = 0x4EE9948CL;
            int32_t *l_649[1];
            int i;
            for (i = 0; i < 1; i++)
                l_649[i] = (void*)0;
            if ((atomic_inc(&p_1621->l_atomic_input[79]) == 4))
            { /* block id: 301 */
                uint8_t l_595 = 0UL;
                int32_t l_612 = (-6L);
                int32_t *l_611 = &l_612;
                int32_t *l_613 = &l_612;
                if (l_595)
                { /* block id: 302 */
                    int32_t l_597 = 0x172555EFL;
                    int32_t *l_596 = &l_597;
                    int32_t *l_598 = &l_597;
                    l_596 = (((VECTOR(int8_t, 4))(0x74L, 0x2EL, 0x74L, 7L)).z , (void*)0);
                    l_598 = (void*)0;
                }
                else
                { /* block id: 305 */
                    int32_t l_599 = 0x571B3402L;
                    int32_t *l_609[8];
                    int32_t **l_608[7] = {&l_609[4],&l_609[3],&l_609[4],&l_609[4],&l_609[3],&l_609[4],&l_609[4]};
                    int32_t **l_610[8][9] = {{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]},{&l_609[7],&l_609[5],&l_609[4],&l_609[4],&l_609[4],&l_609[7],&l_609[4],(void*)0,&l_609[4]}};
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_609[i] = &l_599;
                    for (l_599 = (-9); (l_599 == (-9)); l_599++)
                    { /* block id: 308 */
                        uint32_t l_602 = 0xFF5CD14FL;
                        VECTOR(uint64_t, 16) l_605 = (VECTOR(uint64_t, 16))(0xD77F87BA3B3EB47BL, (VECTOR(uint64_t, 4))(0xD77F87BA3B3EB47BL, (VECTOR(uint64_t, 2))(0xD77F87BA3B3EB47BL, 0UL), 0UL), 0UL, 0xD77F87BA3B3EB47BL, 0UL, (VECTOR(uint64_t, 2))(0xD77F87BA3B3EB47BL, 0UL), (VECTOR(uint64_t, 2))(0xD77F87BA3B3EB47BL, 0UL), 0xD77F87BA3B3EB47BL, 0UL, 0xD77F87BA3B3EB47BL, 0UL);
                        int32_t l_606 = 4L;
                        uint32_t l_607 = 4294967294UL;
                        int i;
                        --l_602;
                        l_607 = (l_606 = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_605.see)).xxxy)).x , 0x64EC4E83L));
                    }
                    l_610[5][8] = (l_608[4] = l_608[4]);
                }
                l_613 = (l_611 = (void*)0);
                unsigned int result = 0;
                result += l_595;
                result += l_612;
                atomic_add(&p_1621->l_special_values[79], result);
            }
            else
            { /* block id: 318 */
                (1 + 1);
            }
            if ((safe_rshift_func_uint16_t_u_u(0x4CFFL, p_39)))
            { /* block id: 321 */
                int16_t *l_631 = (void*)0;
                uint8_t l_632[2][2][8] = {{{0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L}},{{0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L},{0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L}}};
                VECTOR(uint16_t, 4) l_635 = (VECTOR(uint16_t, 4))(0x39D2L, (VECTOR(uint16_t, 2))(0x39D2L, 65535UL), 65535UL);
                uint16_t *l_640[7][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int16_t *l_641 = &p_1621->g_297[3];
                uint32_t *l_642 = &p_1621->g_43;
                int8_t *l_646 = (void*)0;
                int8_t *l_647 = (void*)0;
                int32_t l_650[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_650[i] = 0x1C3D45CAL;
                l_581.s4 &= ((p_1621->g_372.s5 ^ ((*l_641) = ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(l_618.s47427263)).s7025027615470703, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((safe_rshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s(((+(safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(8UL, (((*l_577) = (((p_1621->g_297[3] & ((18446744073709551609UL <= (safe_sub_func_int16_t_s_s((l_632[0][1][2] = (p_1621->g_480.s7 = (-6L))), (0x2C05A8A6L && FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10))))) , (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), 0)))) <= ((((0x0224536FL && ((VECTOR(int32_t, 2))((-6L), 0x67768931L)).hi) , p_38) , ((VECTOR(uint16_t, 16))(l_635.yzzxxxzwyxyywwww)).s0) && (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(p_38, 10)) != ((l_440.y |= (p_1621->g_587.z != l_618.s6)) < p_39)) , p_39), p_1621->g_210[1])))) & 0xEE689ACF4AC08D32L)) , 255UL), 0x3BL, 1UL)).zyxyzwyyxzzzwxzx, ((VECTOR(uint8_t, 16))(254UL))))), (uint8_t)FAKE_DIVERGE(p_1621->global_0_offset, get_global_id(0), 10), (uint8_t)0x36L))).s85))).hi, p_39)), p_39)), 6UL))) , l_632[0][1][2]), 0xFCC5L)) , p_38) > (**p_1621->g_545)), 6)) , 65528UL), FAKE_DIVERGE(p_1621->global_1_offset, get_global_id(1), 10), 0xD37DL, 65535UL, 65533UL, 65535UL, p_40, ((VECTOR(uint16_t, 8))(65535UL)), 0x626FL)).sba4a)).wxwxwzzz)).even, ((VECTOR(uint16_t, 4))(0xA69FL)))))))).zyzwzyzwywzywzww))).s2, 3)) , p_1621->g_558.s8))) , (*p_1621->g_181));
                (*p_1621->g_227) = ((--(*l_642)) , &l_578);
                (*p_1621->g_227) = ((+(safe_unary_minus_func_int32_t_s((((l_648 = p_1621->g_585.x) , 0x4AL) < l_635.w)))) , l_649[0]);
                l_651--;
            }
            else
            { /* block id: 333 */
                return p_38;
            }
            (*l_577) = (*l_577);
        }
        (*p_1621->g_656) = p_1621->g_654;
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_46 p_1621->g_181 p_1621->g_180 p_1621->l_comm_values p_1621->g_210 p_1621->g_217 p_1621->g_19 p_1621->g_227 p_1621->g_20 p_1621->g_231 p_1621->g_238 p_1621->g_228 p_1621->g_277 p_1621->g_235 p_1621->g_382
 * writes: p_1621->g_46 p_1621->g_180 p_1621->g_217 p_1621->g_231 p_1621->g_235 p_1621->g_238 p_1621->g_228 p_1621->g_277
 */
uint32_t * func_51(uint32_t * p_52, struct S0 * p_1621)
{ /* block id: 7 */
    int64_t *l_202 = &p_1621->g_46;
    int64_t **l_201 = &l_202;
    int32_t l_324 = 0x58BC7904L;
    int32_t *l_383 = &l_324;
    int32_t *l_384[8];
    uint8_t l_385 = 0xFCL;
    int i;
    for (i = 0; i < 8; i++)
        l_384[i] = &p_1621->g_231[5][2];
    if ((atomic_inc(&p_1621->g_atomic_input[99 * get_linear_group_id() + 25]) == 1))
    { /* block id: 9 */
        int16_t l_53[3][8] = {{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}};
        int64_t l_54 = 0x42EE1E3C1DC0AC77L;
        uint32_t l_55 = 0x8F302D78L;
        VECTOR(int32_t, 16) l_56 = (VECTOR(int32_t, 16))(0x21A16747L, (VECTOR(int32_t, 4))(0x21A16747L, (VECTOR(int32_t, 2))(0x21A16747L, 0L), 0L), 0L, 0x21A16747L, 0L, (VECTOR(int32_t, 2))(0x21A16747L, 0L), (VECTOR(int32_t, 2))(0x21A16747L, 0L), 0x21A16747L, 0L, 0x21A16747L, 0L);
        uint32_t l_57 = 4294967288UL;
        uint32_t l_58 = 4294967294UL;
        VECTOR(int32_t, 4) l_59 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x667B33DFL), 0x667B33DFL);
        VECTOR(int32_t, 2) l_60 = (VECTOR(int32_t, 2))(0L, 0x1A0E57C1L);
        int8_t l_174 = 0x4AL;
        uint16_t l_175 = 65535UL;
        int i, j;
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_54 = l_53[2][0]), l_55, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_56.s05)))).hi, l_57, (-1L), l_58, 0x58B506EEL, 8L)), ((VECTOR(int32_t, 4))(l_59.yzwz)), ((VECTOR(int32_t, 4))(l_60.yxxx)))).sf)
        { /* block id: 11 */
            int32_t l_61 = 2L;
            int16_t l_83 = 1L;
            int32_t l_84 = 0x13872454L;
            uint16_t l_85 = 65527UL;
            for (l_61 = (-14); (l_61 > (-26)); l_61 = safe_sub_func_uint16_t_u_u(l_61, 8))
            { /* block id: 14 */
                uint8_t l_64 = 0x88L;
                VECTOR(int32_t, 4) l_65 = (VECTOR(int32_t, 4))(0x715F1D34L, (VECTOR(int32_t, 2))(0x715F1D34L, (-9L)), (-9L));
                int i;
                if ((l_59.y = (l_64 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_65.xxyxwyzz)).s47)).hi)))
                { /* block id: 16 */
                    int32_t l_66 = 0x51739C36L;
                    int32_t *l_77 = (void*)0;
                    VECTOR(int32_t, 16) l_78 = (VECTOR(int32_t, 16))(0x1F474372L, (VECTOR(int32_t, 4))(0x1F474372L, (VECTOR(int32_t, 2))(0x1F474372L, 0x1342F278L), 0x1342F278L), 0x1342F278L, 0x1F474372L, 0x1342F278L, (VECTOR(int32_t, 2))(0x1F474372L, 0x1342F278L), (VECTOR(int32_t, 2))(0x1F474372L, 0x1342F278L), 0x1F474372L, 0x1342F278L, 0x1F474372L, 0x1342F278L);
                    int i;
                    for (l_66 = (-28); (l_66 <= (-29)); l_66 = safe_sub_func_int64_t_s_s(l_66, 7))
                    { /* block id: 19 */
                        uint16_t l_69 = 0xB1AAL;
                        int8_t l_70[6] = {0x3FL,0x6EL,0x3FL,0x3FL,0x6EL,0x3FL};
                        uint64_t l_71 = 0UL;
                        int32_t l_75 = (-7L);
                        int32_t *l_74 = &l_75;
                        int32_t *l_76[4][6][9] = {{{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75}},{{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75}},{{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75}},{{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75},{(void*)0,(void*)0,&l_75,&l_75,(void*)0,(void*)0,&l_75,&l_75,&l_75}}};
                        int i, j, k;
                        l_56.s7 &= l_69;
                        ++l_71;
                        l_76[1][1][4] = l_74;
                        l_56.sf &= ((VECTOR(int32_t, 2))(0L, 0L)).even;
                    }
                    l_77 = (void*)0;
                    l_60.y = ((VECTOR(int32_t, 16))(l_78.s4030276420880f5c)).s6;
                    l_60.x = (l_65.z = 5L);
                }
                else
                { /* block id: 29 */
                    int32_t l_81 = 0x004E64A2L;
                    int32_t *l_80 = &l_81;
                    int32_t **l_79 = &l_80;
                    int32_t **l_82 = &l_80;
                    l_82 = l_79;
                }
            }
            l_60.y = 0x271534BBL;
            ++l_85;
        }
        else
        { /* block id: 35 */
            int32_t l_88 = 0x1A8624A7L;
            int32_t l_89[9][4] = {{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)},{3L,0x15C78ED0L,(-2L),(-1L)}};
            int8_t l_90 = 0x68L;
            uint32_t l_91 = 4294967294UL;
            int32_t *l_94 = (void*)0;
            int32_t *l_95[6] = {&l_88,&l_88,&l_88,&l_88,&l_88,&l_88};
            int i, j;
            --l_91;
            l_95[5] = l_94;
            for (l_89[8][1] = 0; (l_89[8][1] != 7); l_89[8][1] = safe_add_func_int32_t_s_s(l_89[8][1], 5))
            { /* block id: 40 */
                int32_t l_98 = 0x0A6A08C4L;
                VECTOR(uint32_t, 8) l_112 = (VECTOR(uint32_t, 8))(0x02EBDDE1L, (VECTOR(uint32_t, 4))(0x02EBDDE1L, (VECTOR(uint32_t, 2))(0x02EBDDE1L, 0x80F4AA1FL), 0x80F4AA1FL), 0x80F4AA1FL, 0x02EBDDE1L, 0x80F4AA1FL);
                int8_t l_113 = (-9L);
                int32_t l_114 = (-4L);
                uint32_t l_115 = 1UL;
                uint8_t l_134[6] = {0x26L,0x6EL,0x26L,0x26L,0x6EL,0x26L};
                int i;
                for (l_98 = 0; (l_98 >= 28); ++l_98)
                { /* block id: 43 */
                    int64_t l_101 = 0x1E610DA34DBBD83FL;
                    uint16_t l_102[7][7][1] = {{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}},{{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL},{65527UL}}};
                    VECTOR(uint16_t, 16) l_103 = (VECTOR(uint16_t, 16))(0x9C8AL, (VECTOR(uint16_t, 4))(0x9C8AL, (VECTOR(uint16_t, 2))(0x9C8AL, 1UL), 1UL), 1UL, 0x9C8AL, 1UL, (VECTOR(uint16_t, 2))(0x9C8AL, 1UL), (VECTOR(uint16_t, 2))(0x9C8AL, 1UL), 0x9C8AL, 1UL, 0x9C8AL, 1UL);
                    uint8_t l_104 = 6UL;
                    int32_t l_106 = 1L;
                    int32_t *l_105 = &l_106;
                    int16_t l_107 = 0x2AF5L;
                    int32_t l_108 = 0x15366612L;
                    uint64_t l_109 = 0xE0D49B816A8AB26FL;
                    int i, j, k;
                    l_102[1][0][0] ^= l_101;
                    l_104 ^= (l_103.s2 = (-1L));
                    l_95[5] = l_105;
                    ++l_109;
                }
                l_98 ^= ((l_53[0][7] |= (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_112.s77526660)).s53))).even , l_113)) , l_114);
                if ((l_115 , 0x5F8F1AF8L))
                { /* block id: 52 */
                    int64_t l_116[3][7][8] = {{{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L}},{{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L}},{{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L},{1L,0x2A42F98E8FF6226FL,1L,(-1L),(-3L),1L,0x33CEA4A799C40DF3L,0x43755EC10F06FB93L}}};
                    int8_t l_117 = 0x51L;
                    uint32_t l_118 = 0x873C8D9FL;
                    uint64_t l_121[9][1];
                    VECTOR(int32_t, 2) l_122 = (VECTOR(int32_t, 2))(0x61ACFDDCL, 0x099BD49CL);
                    uint64_t l_123[5][6] = {{0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L},{0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L},{0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L},{0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L},{0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L,0x7943A2B23C0CBE00L}};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_121[i][j] = 18446744073709551615UL;
                    }
                    l_118--;
                    l_123[3][2] &= (l_122.x = l_121[5][0]);
                    for (l_118 = (-17); (l_118 <= 5); l_118 = safe_add_func_int64_t_s_s(l_118, 5))
                    { /* block id: 58 */
                        uint64_t l_126 = 0xFA6678658A4148A9L;
                        VECTOR(uint32_t, 4) l_129 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x3C472D6AL), 0x3C472D6AL);
                        uint8_t l_130 = 255UL;
                        int32_t l_132 = 1L;
                        int32_t *l_131 = &l_132;
                        int i;
                        l_126--;
                        l_94 = ((((VECTOR(uint32_t, 8))(l_129.xzwwyzzw)).s1 , l_130) , (l_95[2] = (l_131 = l_131)));
                        (*l_131) &= 1L;
                    }
                }
                else
                { /* block id: 65 */
                    int32_t l_133 = 0x4414898BL;
                    l_133 = l_133;
                }
                --l_134[1];
            }
            for (l_90 = 5; (l_90 <= (-14)); l_90--)
            { /* block id: 72 */
                int32_t l_139 = 0x400A8503L;
                for (l_139 = 0; (l_139 < (-27)); l_139 = safe_sub_func_uint16_t_u_u(l_139, 4))
                { /* block id: 75 */
                    uint32_t l_142 = 0UL;
                    l_142++;
                    for (l_142 = 0; (l_142 > 51); l_142 = safe_add_func_int16_t_s_s(l_142, 4))
                    { /* block id: 79 */
                        uint16_t l_147 = 1UL;
                        int8_t l_148 = 0x77L;
                        uint32_t l_149 = 0UL;
                        int64_t l_150 = 0x757F069B646BD1A6L;
                        uint8_t l_151 = 0UL;
                        l_148 = (FAKE_DIVERGE(p_1621->group_0_offset, get_group_id(0), 10) , l_147);
                        l_149 = 0L;
                        l_151 ^= l_150;
                    }
                    for (l_142 = 0; (l_142 == 56); l_142 = safe_add_func_int16_t_s_s(l_142, 8))
                    { /* block id: 86 */
                        uint32_t l_154 = 0x9A4FA59AL;
                        int64_t l_159 = (-1L);
                        int64_t *l_158 = &l_159;
                        int64_t **l_157[10][2] = {{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158},{(void*)0,&l_158}};
                        int64_t **l_160 = &l_158;
                        int16_t l_161 = 0x7AEAL;
                        int64_t l_162[2];
                        int8_t l_163 = (-1L);
                        int8_t l_164 = 0L;
                        uint16_t l_165 = 1UL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_162[i] = (-10L);
                        l_154--;
                        l_160 = l_157[4][1];
                        l_162[1] = l_161;
                        --l_165;
                    }
                }
                for (l_139 = 0; (l_139 != (-19)); l_139--)
                { /* block id: 95 */
                    int8_t l_170 = 5L;
                    uint8_t l_171[10][10] = {{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL},{0xAEL,5UL,0x7DL,252UL,0xE0L,0xE0L,252UL,0x7DL,5UL,0xAEL}};
                    int i, j;
                    l_171[7][0]--;
                }
            }
        }
        l_175 ^= l_174;
        unsigned int result = 0;
        int l_53_i0, l_53_i1;
        for (l_53_i0 = 0; l_53_i0 < 3; l_53_i0++) {
            for (l_53_i1 = 0; l_53_i1 < 8; l_53_i1++) {
                result += l_53[l_53_i0][l_53_i1];
            }
        }
        result += l_54;
        result += l_55;
        result += l_56.sf;
        result += l_56.se;
        result += l_56.sd;
        result += l_56.sc;
        result += l_56.sb;
        result += l_56.sa;
        result += l_56.s9;
        result += l_56.s8;
        result += l_56.s7;
        result += l_56.s6;
        result += l_56.s5;
        result += l_56.s4;
        result += l_56.s3;
        result += l_56.s2;
        result += l_56.s1;
        result += l_56.s0;
        result += l_57;
        result += l_58;
        result += l_59.w;
        result += l_59.z;
        result += l_59.y;
        result += l_59.x;
        result += l_60.y;
        result += l_60.x;
        result += l_174;
        result += l_175;
        atomic_add(&p_1621->g_special_values[99 * get_linear_group_id() + 25], result);
    }
    else
    { /* block id: 101 */
        (1 + 1);
    }
    for (p_1621->g_46 = 20; (p_1621->g_46 > 4); p_1621->g_46--)
    { /* block id: 106 */
        VECTOR(int32_t, 4) l_178 = (VECTOR(int32_t, 4))(0x75E1EA3AL, (VECTOR(int32_t, 2))(0x75E1EA3AL, 9L), 9L);
        int i;
        (*p_1621->g_181) = l_178.y;
    }
    for (p_1621->g_180 = 0; (p_1621->g_180 == (-21)); p_1621->g_180--)
    { /* block id: 111 */
        VECTOR(int8_t, 2) l_200 = (VECTOR(int8_t, 2))(0x31L, 1L);
        uint32_t *l_209 = &p_1621->g_210[1];
        int32_t *l_379[8] = {&p_1621->g_180,(void*)0,&p_1621->g_180,&p_1621->g_180,(void*)0,&p_1621->g_180,&p_1621->g_180,(void*)0};
        int i;
        l_324 = func_184(func_188((p_1621->g_46 ^ func_192(func_194(&p_1621->g_180, &p_1621->g_46, (~(l_200.x ^ l_200.y)), l_201, ((0L <= (safe_sub_func_int64_t_s_s(l_200.x, (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((l_209 != (void*)0) == 0x1151F3E89965A7D2L), p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))])), p_1621->g_210[2]))))) & (*p_1621->g_181)), p_1621), p_1621)), p_1621->g_19.s0, l_324, p_1621), p_1621->g_46, &p_1621->g_218, p_1621);
        l_324 = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1621->g_382.xxxy)).wxwzwzyw)).s2340173724773635)).s270e)).hi, ((VECTOR(int8_t, 2))(0x24L, 1L))))).lo, 6));
    }
    --l_385;
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_227 p_1621->g_228 p_1621->g_238 p_1621->g_231 p_1621->g_335 p_1621->g_302 p_1621->g_218 p_1621->g_46 p_1621->g_181 p_1621->g_180 p_1621->g_210 p_1621->g_319 p_1621->g_217 p_1621->l_comm_values p_1621->g_281
 * writes: p_1621->g_228 p_1621->g_238 p_1621->g_231
 */
int32_t  func_184(int64_t ** p_185, uint32_t  p_186, int64_t ** p_187, struct S0 * p_1621)
{ /* block id: 159 */
    uint8_t l_326 = 249UL;
    int32_t *l_331 = &p_1621->g_231[5][2];
    VECTOR(int32_t, 8) l_336 = (VECTOR(int32_t, 8))(0x262F4CE8L, (VECTOR(int32_t, 4))(0x262F4CE8L, (VECTOR(int32_t, 2))(0x262F4CE8L, 0x393AC515L), 0x393AC515L), 0x393AC515L, 0x262F4CE8L, 0x393AC515L);
    int8_t *l_351[6][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t l_374 = 0x0AED1166AE4A5FECL;
    int i, j, k;
    ++l_326;
    for (p_186 = 0; (p_186 == 3); ++p_186)
    { /* block id: 163 */
        int32_t *l_332[4];
        int8_t *l_349 = (void*)0;
        int8_t **l_350 = &l_349;
        uint16_t *l_369 = (void*)0;
        uint16_t *l_370 = (void*)0;
        uint16_t *l_371 = (void*)0;
        uint16_t *l_373[7][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_332[i] = &p_1621->g_231[0][2];
        (*p_1621->g_227) = (l_326 , (*p_1621->g_227));
        l_332[2] = l_331;
        for (p_1621->g_238 = (-23); (p_1621->g_238 <= 10); p_1621->g_238 = safe_add_func_int32_t_s_s(p_1621->g_238, 7))
        { /* block id: 168 */
            (*l_331) ^= (-4L);
        }
        (*l_331) = ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(p_1621->g_335.s33637572)).s3333557153504527, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_336.s2222063546042471)).s3cac, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((((((((l_336.s4 ^= (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_374 &= ((p_186 >= (((*l_350) = l_349) == l_351[3][2][0])) <= (safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int16_t_s(((((safe_rshift_func_int8_t_s_s(p_186, ((GROUP_DIVERGE(2, 1) != (safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s(((p_1621->g_335.s0 >= p_186) && (0L > (safe_lshift_func_int16_t_s_u(p_186, 6)))), (((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint64_t_u_u((p_186 , p_1621->g_335.s0), 0UL)) ^ p_1621->g_302.w) <= 0x0D582A12572D1F8BL), 4)) >= 0x6E2D9756EE14F3B5L) , (**p_187)))) >= p_186) >= 0x56F05E9FL), (*p_1621->g_181)))) <= (*l_331)))) , GROUP_DIVERGE(0, 1)) < p_186) & (*l_331)))) >= p_1621->g_210[2]), p_1621->g_210[1])) & p_1621->g_46), 1L)))), p_1621->g_335.s6)), p_1621->g_319.z))) || 0x167CL) >= p_186) ^ p_186) > (**p_1621->g_217)) && p_186) , p_186) & p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))]) , (*l_331)), p_1621->g_281.x)) > (-4L)), 4L)), 5)), ((VECTOR(int32_t, 2))(6L)), 0L)).y, (-1L), 0L, (*l_331), 0x0F8B649AL, (*p_1621->g_228), (-7L), (*p_1621->g_181), 0x534D6D19L, ((VECTOR(int32_t, 4))(0x16796435L)), ((VECTOR(int32_t, 2))(0x636C680DL)), 0x4076DD90L)).even, ((VECTOR(int32_t, 8))(1L))))).even))).xywyyyzzzyywxyyz))).s1;
    }
    for (p_186 = (-24); (p_186 > 57); p_186 = safe_add_func_uint16_t_u_u(p_186, 4))
    { /* block id: 178 */
        uint64_t l_377 = 0xC690CF99A9E58039L;
        int8_t l_378[2];
        int i;
        for (i = 0; i < 2; i++)
            l_378[i] = 0x18L;
        l_377 = ((void*)0 != &p_1621->g_297[3]);
        return l_378[0];
    }
    (*p_1621->g_227) = l_331;
    return (*l_331);
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_227 p_1621->g_228
 * writes: p_1621->g_228
 */
int64_t ** func_188(int16_t  p_189, uint8_t  p_190, uint64_t  p_191, struct S0 * p_1621)
{ /* block id: 156 */
    int64_t **l_325[10][8][3] = {{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}},{{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218},{&p_1621->g_218,&p_1621->g_218,&p_1621->g_218}}};
    int i, j, k;
    (*p_1621->g_227) = (*p_1621->g_227);
    return l_325[0][4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_231 p_1621->g_235 p_1621->g_238 p_1621->g_20 p_1621->g_228 p_1621->g_180 p_1621->l_comm_values p_1621->g_277 p_1621->g_281 p_1621->g_181 p_1621->g_46 p_1621->g_19 p_1621->g_210 p_1621->g_302 p_1621->g_319
 * writes: p_1621->g_231 p_1621->g_235 p_1621->g_238 p_1621->g_228 p_1621->g_277 p_1621->g_295 p_1621->g_297
 */
int16_t  func_192(int32_t ** p_193, struct S0 * p_1621)
{ /* block id: 125 */
    uint64_t l_259 = 0x556991D4868CC2CDL;
    int32_t l_266 = 1L;
    uint8_t l_288 = 0xF3L;
    uint16_t l_291 = 65528UL;
    int8_t l_298 = 0x34L;
    int32_t l_299 = 0x7F001630L;
    VECTOR(uint64_t, 2) l_300 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
    int64_t ***l_314 = &p_1621->g_217;
    int32_t *l_320[8];
    int16_t l_321 = 0L;
    int32_t l_322 = 0x5D281216L;
    uint32_t l_323 = 9UL;
    int i;
    for (i = 0; i < 8; i++)
        l_320[i] = &p_1621->g_235;
    for (p_1621->g_231[5][2] = 24; (p_1621->g_231[5][2] > (-1)); p_1621->g_231[5][2] = safe_sub_func_uint32_t_u_u(p_1621->g_231[5][2], 1))
    { /* block id: 128 */
        int32_t *l_241 = &p_1621->g_180;
        VECTOR(uint8_t, 8) l_269 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        int64_t *l_276 = &p_1621->g_277;
        int32_t *l_278 = &p_1621->g_238;
        uint8_t *l_294[7][2][8] = {{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}},{{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0},{(void*)0,(void*)0,&l_288,(void*)0,(void*)0,(void*)0,&p_1621->g_295,(void*)0}}};
        int16_t *l_296[6][6][6] = {{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}},{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}},{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}},{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}},{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}},{{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]},{&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[1],&p_1621->g_297[3],&p_1621->g_297[3],&p_1621->g_297[3]}}};
        VECTOR(uint64_t, 4) l_301 = (VECTOR(uint64_t, 4))(0xA2EC370606D169B0L, (VECTOR(uint64_t, 2))(0xA2EC370606D169B0L, 0UL), 0UL);
        uint16_t *l_306 = &l_291;
        int64_t ***l_313 = &p_1621->g_217;
        int8_t *l_317 = &l_298;
        int32_t l_318 = 0x18FFB8DDL;
        int i, j, k;
        for (p_1621->g_235 = 0; (p_1621->g_235 < 4); ++p_1621->g_235)
        { /* block id: 131 */
            int64_t l_264 = 0x6A534EDE82F0F248L;
            int32_t l_265 = 0x27235E59L;
            for (p_1621->g_238 = 0; (p_1621->g_238 != (-17)); p_1621->g_238 = safe_sub_func_int64_t_s_s(p_1621->g_238, 4))
            { /* block id: 134 */
                int64_t **l_244 = &p_1621->g_218;
                VECTOR(int32_t, 8) l_247 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                VECTOR(int16_t, 2) l_250 = (VECTOR(int16_t, 2))((-1L), 2L);
                int i;
                (*p_193) = l_241;
                l_266 ^= (l_265 = (safe_mod_func_int64_t_s_s(((void*)0 != l_244), (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_247.s4001)).z, (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_250.xyyyxxxyyyxyyyxy)).sa, (safe_rshift_func_int16_t_s_s(p_1621->g_20.sd, ((safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1621->group_1_offset, get_group_id(1), 10), ((safe_lshift_func_uint8_t_u_s((p_1621->g_231[5][2] , (((safe_rshift_func_uint8_t_u_s(l_259, (l_259 & (safe_lshift_func_uint8_t_u_u(p_1621->g_238, (safe_mul_func_uint16_t_u_u(l_259, ((**p_193) , 0x265BL)))))))) ^ 0x41C5L) && l_264)), p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))])) > l_247.s0))) <= l_259))))))))));
            }
            if (l_264)
                break;
            if ((**p_193))
                continue;
        }
        l_299 |= ((((VECTOR(uint8_t, 8))(l_269.s42252261)).s0 >= ((((((((safe_sub_func_int16_t_s_s((~((safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((GROUP_DIVERGE(0, 1) >= ((l_259 , 4L) < ((*l_276) ^= (-1L)))), 5)) && ((*l_278) = (0x08L & p_1621->g_277))), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 4))(p_1621->g_281.yyxy)).hi, ((VECTOR(uint32_t, 2))(3UL, 4294967290UL)), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(0x5089CFB0L, 9UL, 0UL, ((((safe_mul_func_int16_t_s_s((*l_241), ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((((l_288 >= (((safe_add_func_int8_t_s_s((((l_291 , (safe_mul_func_uint16_t_u_u(((p_1621->g_295 = GROUP_DIVERGE(1, 1)) && ((VECTOR(uint8_t, 2))(0x7AL, 5UL)).hi), (p_1621->g_297[0] = l_288)))) | (*p_1621->g_181)) < l_266), p_1621->g_46)) , (*l_241)) != p_1621->g_19.s0)) || l_288) != 0x92D2716DL), 5)), 3)) == 0L))) ^ 4294967295UL) , (void*)0) != (void*)0), 0x293EE432L, ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 2))(0xF9DBF970L)), 1UL, ((VECTOR(uint32_t, 4))(2UL)))).sbf, ((VECTOR(uint32_t, 2))(3UL))))).yxyyyxxy, ((VECTOR(uint32_t, 8))(4294967295UL))))).s12))).even, l_298)))) , (*l_241))), l_298)) , 0UL) , p_1621->g_231[5][2]) < (*l_241)) & p_1621->g_235) | GROUP_DIVERGE(1, 1)) , p_1621->g_210[1]) != l_266)) ^ p_1621->g_210[1]);
        l_299 = (((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_300.yyyxxxxxyxxxyyyx)).s4bcf)), ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(l_301.zz))))).xyxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1621->g_302.xywxxyzz)), 0x5B03ECC52C173402L, 0xB0C6D8FC74D14176L, ((VECTOR(uint64_t, 2))(3UL, 18446744073709551607UL)), 7UL, 18446744073709551615UL, 0UL, 0x453BB7679242BF8CL)))).sb437))).y <= (((*l_278) = (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((*l_306) = l_299))), 0x9F341124L))) && ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xE5C20012L, 4294967295UL)).yyyx)), 0xDFEFE262L, 0x21D1AF20L, ((safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((0L == (((l_300.y > (&p_1621->g_227 != (void*)0)) <= (safe_mul_func_int16_t_s_s((((((VECTOR(uint16_t, 2))(65530UL, 4UL)).odd != ((l_313 != l_314) | (safe_rshift_func_uint8_t_u_s((((*l_317) = (-5L)) > p_1621->g_231[5][3]), (*l_278))))) & (-1L)) != GROUP_DIVERGE(1, 1)), p_1621->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1621->tid, 95))]))) , (*l_278))), 0x3CL)), FAKE_DIVERGE(p_1621->global_1_offset, get_global_id(1), 10))) && GROUP_DIVERGE(0, 1)), l_318, ((VECTOR(uint32_t, 8))(4294967290UL)))).s0));
    }
    l_322 = (l_321 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1621->g_319.zx)))).yyyxyxxyxyxyyyxy)).s6);
    l_323 = 0x121926EBL;
    return p_1621->g_19.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1621->g_180 p_1621->g_217 p_1621->g_19 p_1621->g_227
 * writes: p_1621->g_217
 */
int32_t ** func_194(int32_t * p_195, int64_t * p_196, uint16_t  p_197, int64_t ** p_198, int32_t  p_199, struct S0 * p_1621)
{ /* block id: 112 */
    int32_t *l_212[2][8] = {{&p_1621->g_180,(void*)0,&p_1621->g_180,(void*)0,&p_1621->g_180,&p_1621->g_180,(void*)0,&p_1621->g_180},{&p_1621->g_180,(void*)0,&p_1621->g_180,(void*)0,&p_1621->g_180,&p_1621->g_180,(void*)0,&p_1621->g_180}};
    int32_t **l_211 = &l_212[0][1];
    int i, j;
    (*l_211) = &p_1621->g_180;
    for (p_197 = 0; (p_197 == 32); ++p_197)
    { /* block id: 116 */
        int64_t ***l_219 = &p_1621->g_217;
        int32_t *l_222 = &p_1621->g_180;
        int32_t l_223 = 0x78BEF385L;
        int32_t ***l_224 = &l_211;
        int32_t l_225 = 0x15513F45L;
        int32_t l_226 = (-1L);
        l_226 &= (l_225 = ((safe_add_func_int32_t_s_s(((void*)0 != &p_199), (!(*p_195)))) , (((*l_219) = p_1621->g_217) == (((safe_mod_func_int8_t_s_s((!(l_222 == (void*)0)), 0x0DL)) , ((l_223 |= (p_199 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(9L, 0L)), 0x1C149A9DL, 0L)).wyxywxwx)).s2)) >= ((((*l_224) = &p_195) == (void*)0) && p_1621->g_19.s4))) , (void*)0))));
    }
    return p_1621->g_227;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[99];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 99; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[99];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 99; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_comm_values[i] = 1;
    struct S0 c_1622;
    struct S0* p_1621 = &c_1622;
    struct S0 c_1623 = {
        (VECTOR(int8_t, 8))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 3L), 3L), 3L, 0x49L, 3L), // p_1621->g_19
        (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 8L), 8L), 8L, 0x41L, 8L, (VECTOR(int8_t, 2))(0x41L, 8L), (VECTOR(int8_t, 2))(0x41L, 8L), 0x41L, 8L, 0x41L, 8L), // p_1621->g_20
        4294967288UL, // p_1621->g_43
        (-3L), // p_1621->g_46
        (-7L), // p_1621->g_180
        {&p_1621->g_180}, // p_1621->g_179
        &p_1621->g_180, // p_1621->g_181
        {0UL,0UL,0UL}, // p_1621->g_210
        &p_1621->g_46, // p_1621->g_218
        &p_1621->g_218, // p_1621->g_217
        &p_1621->g_180, // p_1621->g_228
        &p_1621->g_228, // p_1621->g_227
        0x2ECD07D7L, // p_1621->g_229
        0x01DA8FA5L, // p_1621->g_230
        {{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L},{0x0A1AFBE9L,(-1L),(-1L),0x5BFB3890L}}, // p_1621->g_231
        0L, // p_1621->g_234
        (-1L), // p_1621->g_235
        0x2EAC8DC0L, // p_1621->g_238
        (-1L), // p_1621->g_277
        (VECTOR(uint32_t, 2))(0x7E153554L, 0UL), // p_1621->g_281
        252UL, // p_1621->g_295
        {0x15C3L,4L,0x15C3L,0x15C3L,4L,0x15C3L}, // p_1621->g_297
        (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x75E4760E0F07E736L), 0x75E4760E0F07E736L), // p_1621->g_302
        (VECTOR(int32_t, 4))(0x29F10854L, (VECTOR(int32_t, 2))(0x29F10854L, 0x6F6FF9AEL), 0x6F6FF9AEL), // p_1621->g_319
        (VECTOR(int32_t, 8))(0x18020ED5L, (VECTOR(int32_t, 4))(0x18020ED5L, (VECTOR(int32_t, 2))(0x18020ED5L, 0L), 0L), 0L, 0x18020ED5L, 0L), // p_1621->g_335
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8332L), 0x8332L), 0x8332L, 0UL, 0x8332L), // p_1621->g_372
        (VECTOR(int8_t, 2))((-10L), 2L), // p_1621->g_382
        {&p_1621->g_210[0],&p_1621->g_210[1],&p_1621->g_210[0],&p_1621->g_210[0],&p_1621->g_210[1],&p_1621->g_210[0],&p_1621->g_210[0],&p_1621->g_210[1],&p_1621->g_210[0],&p_1621->g_210[0]}, // p_1621->g_388
        (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x2B8DL), 0x2B8DL), 0x2B8DL, (-7L), 0x2B8DL), // p_1621->g_480
        (void*)0, // p_1621->g_541
        &p_1621->g_295, // p_1621->g_546
        &p_1621->g_546, // p_1621->g_545
        (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x04AAL), 0x04AAL), 0x04AAL, 8L, 0x04AAL, (VECTOR(int16_t, 2))(8L, 0x04AAL), (VECTOR(int16_t, 2))(8L, 0x04AAL), 8L, 0x04AAL, 8L, 0x04AAL), // p_1621->g_558
        (VECTOR(int32_t, 2))(0x05709B21L, 0x00FA05BAL), // p_1621->g_580
        (VECTOR(int32_t, 2))(5L, 0x05A1309FL), // p_1621->g_583
        (VECTOR(int32_t, 2))((-10L), 0x30578FC6L), // p_1621->g_585
        (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), // p_1621->g_587
        (VECTOR(int32_t, 2))(0x7B265165L, 0x6C8AD474L), // p_1621->g_588
        (void*)0, // p_1621->g_654
        (void*)0, // p_1621->g_655
        &p_1621->g_654, // p_1621->g_656
        &p_1621->g_235, // p_1621->g_663
        4294967295UL, // p_1621->g_670
        (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL, (VECTOR(uint16_t, 2))(2UL, 1UL), (VECTOR(uint16_t, 2))(2UL, 1UL), 2UL, 1UL, 2UL, 1UL), // p_1621->g_736
        &p_1621->g_297[3], // p_1621->g_740
        {{2L,(-9L),2L},{2L,(-9L),2L},{2L,(-9L),2L},{2L,(-9L),2L},{2L,(-9L),2L}}, // p_1621->g_747
        18446744073709551615UL, // p_1621->g_759
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x59E68534FFB4906BL), 0x59E68534FFB4906BL), 0x59E68534FFB4906BL, 0L, 0x59E68534FFB4906BL), // p_1621->g_772
        (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x52L), 0x52L), // p_1621->g_803
        (VECTOR(int8_t, 2))(0x0FL, 0x36L), // p_1621->g_809
        (VECTOR(uint8_t, 2))(4UL, 0UL), // p_1621->g_826
        (VECTOR(uint8_t, 8))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 0xAEL), 0xAEL), 0xAEL, 0xDFL, 0xAEL), // p_1621->g_829
        (VECTOR(uint8_t, 2))(0x11L, 1UL), // p_1621->g_830
        (VECTOR(uint8_t, 8))(0x60L, (VECTOR(uint8_t, 4))(0x60L, (VECTOR(uint8_t, 2))(0x60L, 0UL), 0UL), 0UL, 0x60L, 0UL), // p_1621->g_831
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), // p_1621->g_833
        (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xBDL), 0xBDL), 0xBDL, 254UL, 0xBDL, (VECTOR(uint8_t, 2))(254UL, 0xBDL), (VECTOR(uint8_t, 2))(254UL, 0xBDL), 254UL, 0xBDL, 254UL, 0xBDL), // p_1621->g_834
        (VECTOR(uint64_t, 16))(0x4B39F35A81E92B27L, (VECTOR(uint64_t, 4))(0x4B39F35A81E92B27L, (VECTOR(uint64_t, 2))(0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL), 0x9B2482D56A4EE4CAL), 0x9B2482D56A4EE4CAL, 0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL, (VECTOR(uint64_t, 2))(0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL), (VECTOR(uint64_t, 2))(0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL), 0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL, 0x4B39F35A81E92B27L, 0x9B2482D56A4EE4CAL), // p_1621->g_840
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L), 1L, 6L, 1L), // p_1621->g_845
        (VECTOR(int16_t, 16))(0x5FFBL, (VECTOR(int16_t, 4))(0x5FFBL, (VECTOR(int16_t, 2))(0x5FFBL, 0x226AL), 0x226AL), 0x226AL, 0x5FFBL, 0x226AL, (VECTOR(int16_t, 2))(0x5FFBL, 0x226AL), (VECTOR(int16_t, 2))(0x5FFBL, 0x226AL), 0x5FFBL, 0x226AL, 0x5FFBL, 0x226AL), // p_1621->g_846
        (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0x47L), 0x47L), // p_1621->g_867
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int8_t, 2))(1L, 9L), (VECTOR(int8_t, 2))(1L, 9L), 1L, 9L, 1L, 9L), // p_1621->g_868
        (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x77L), 0x77L), // p_1621->g_869
        (VECTOR(int32_t, 2))(0x1170BD25L, (-8L)), // p_1621->g_884
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7C687F71L), 0x7C687F71L), 0x7C687F71L, (-1L), 0x7C687F71L), // p_1621->g_897
        (VECTOR(int32_t, 16))(0x32FB86FFL, (VECTOR(int32_t, 4))(0x32FB86FFL, (VECTOR(int32_t, 2))(0x32FB86FFL, 0x5A09FC7CL), 0x5A09FC7CL), 0x5A09FC7CL, 0x32FB86FFL, 0x5A09FC7CL, (VECTOR(int32_t, 2))(0x32FB86FFL, 0x5A09FC7CL), (VECTOR(int32_t, 2))(0x32FB86FFL, 0x5A09FC7CL), 0x32FB86FFL, 0x5A09FC7CL, 0x32FB86FFL, 0x5A09FC7CL), // p_1621->g_925
        (VECTOR(int64_t, 2))(0L, 7L), // p_1621->g_934
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 250UL), 250UL), 250UL, 255UL, 250UL, (VECTOR(uint8_t, 2))(255UL, 250UL), (VECTOR(uint8_t, 2))(255UL, 250UL), 255UL, 250UL, 255UL, 250UL), // p_1621->g_936
        0x06L, // p_1621->g_947
        &p_1621->g_947, // p_1621->g_946
        &p_1621->g_946, // p_1621->g_945
        (VECTOR(uint32_t, 2))(0x84E75AA2L, 0xD6753C6AL), // p_1621->g_969
        (VECTOR(int32_t, 4))(0x46EDFD21L, (VECTOR(int32_t, 2))(0x46EDFD21L, (-1L)), (-1L)), // p_1621->g_990
        (-7L), // p_1621->g_1000
        (VECTOR(uint16_t, 16))(0xC7E9L, (VECTOR(uint16_t, 4))(0xC7E9L, (VECTOR(uint16_t, 2))(0xC7E9L, 0x2367L), 0x2367L), 0x2367L, 0xC7E9L, 0x2367L, (VECTOR(uint16_t, 2))(0xC7E9L, 0x2367L), (VECTOR(uint16_t, 2))(0xC7E9L, 0x2367L), 0xC7E9L, 0x2367L, 0xC7E9L, 0x2367L), // p_1621->g_1008
        (void*)0, // p_1621->g_1020
        2UL, // p_1621->g_1050
        1L, // p_1621->g_1055
        (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0xDCA65232L), 0xDCA65232L), 0xDCA65232L, 4294967290UL, 0xDCA65232L, (VECTOR(uint32_t, 2))(4294967290UL, 0xDCA65232L), (VECTOR(uint32_t, 2))(4294967290UL, 0xDCA65232L), 4294967290UL, 0xDCA65232L, 4294967290UL, 0xDCA65232L), // p_1621->g_1058
        (VECTOR(uint32_t, 16))(0x06A3525CL, (VECTOR(uint32_t, 4))(0x06A3525CL, (VECTOR(uint32_t, 2))(0x06A3525CL, 1UL), 1UL), 1UL, 0x06A3525CL, 1UL, (VECTOR(uint32_t, 2))(0x06A3525CL, 1UL), (VECTOR(uint32_t, 2))(0x06A3525CL, 1UL), 0x06A3525CL, 1UL, 0x06A3525CL, 1UL), // p_1621->g_1059
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6A74L), 0x6A74L), 0x6A74L, 1L, 0x6A74L, (VECTOR(int16_t, 2))(1L, 0x6A74L), (VECTOR(int16_t, 2))(1L, 0x6A74L), 1L, 0x6A74L, 1L, 0x6A74L), // p_1621->g_1066
        (VECTOR(int64_t, 8))(0x3E149DC2C5AFF117L, (VECTOR(int64_t, 4))(0x3E149DC2C5AFF117L, (VECTOR(int64_t, 2))(0x3E149DC2C5AFF117L, 1L), 1L), 1L, 0x3E149DC2C5AFF117L, 1L), // p_1621->g_1071
        (VECTOR(int64_t, 16))(0x0D2FA6F3DEF5C4D5L, (VECTOR(int64_t, 4))(0x0D2FA6F3DEF5C4D5L, (VECTOR(int64_t, 2))(0x0D2FA6F3DEF5C4D5L, 1L), 1L), 1L, 0x0D2FA6F3DEF5C4D5L, 1L, (VECTOR(int64_t, 2))(0x0D2FA6F3DEF5C4D5L, 1L), (VECTOR(int64_t, 2))(0x0D2FA6F3DEF5C4D5L, 1L), 0x0D2FA6F3DEF5C4D5L, 1L, 0x0D2FA6F3DEF5C4D5L, 1L), // p_1621->g_1073
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x9DB3L), 0x9DB3L), // p_1621->g_1090
        0L, // p_1621->g_1103
        (VECTOR(uint16_t, 16))(0x75B1L, (VECTOR(uint16_t, 4))(0x75B1L, (VECTOR(uint16_t, 2))(0x75B1L, 65534UL), 65534UL), 65534UL, 0x75B1L, 65534UL, (VECTOR(uint16_t, 2))(0x75B1L, 65534UL), (VECTOR(uint16_t, 2))(0x75B1L, 65534UL), 0x75B1L, 65534UL, 0x75B1L, 65534UL), // p_1621->g_1123
        (VECTOR(int64_t, 16))(0x4736F56EECF3B6BCL, (VECTOR(int64_t, 4))(0x4736F56EECF3B6BCL, (VECTOR(int64_t, 2))(0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L), 0x17753E01D8F2AFA0L), 0x17753E01D8F2AFA0L, 0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L, (VECTOR(int64_t, 2))(0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L), (VECTOR(int64_t, 2))(0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L), 0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L, 0x4736F56EECF3B6BCL, 0x17753E01D8F2AFA0L), // p_1621->g_1124
        (VECTOR(int32_t, 2))(0x45406D63L, (-1L)), // p_1621->g_1145
        (VECTOR(int32_t, 2))((-7L), 0x66A1601CL), // p_1621->g_1169
        0x7FB8D706L, // p_1621->g_1180
        (VECTOR(int8_t, 2))(0x76L, (-1L)), // p_1621->g_1214
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1621->g_1240
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 5L), 5L), // p_1621->g_1241
        0xA73B92854DD6D9A0L, // p_1621->g_1244
        (VECTOR(uint8_t, 16))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0UL), 0UL), 0UL, 0x3BL, 0UL, (VECTOR(uint8_t, 2))(0x3BL, 0UL), (VECTOR(uint8_t, 2))(0x3BL, 0UL), 0x3BL, 0UL, 0x3BL, 0UL), // p_1621->g_1248
        (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), // p_1621->g_1270
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL, (VECTOR(uint64_t, 2))(1UL, 8UL), (VECTOR(uint64_t, 2))(1UL, 8UL), 1UL, 8UL, 1UL, 8UL), // p_1621->g_1344
        (VECTOR(int64_t, 16))(0x72CC04C99E3C10B0L, (VECTOR(int64_t, 4))(0x72CC04C99E3C10B0L, (VECTOR(int64_t, 2))(0x72CC04C99E3C10B0L, 5L), 5L), 5L, 0x72CC04C99E3C10B0L, 5L, (VECTOR(int64_t, 2))(0x72CC04C99E3C10B0L, 5L), (VECTOR(int64_t, 2))(0x72CC04C99E3C10B0L, 5L), 0x72CC04C99E3C10B0L, 5L, 0x72CC04C99E3C10B0L, 5L), // p_1621->g_1347
        (VECTOR(uint64_t, 16))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 7UL), 7UL), 7UL, 18446744073709551613UL, 7UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 7UL), (VECTOR(uint64_t, 2))(18446744073709551613UL, 7UL), 18446744073709551613UL, 7UL, 18446744073709551613UL, 7UL), // p_1621->g_1377
        (void*)0, // p_1621->g_1387
        (VECTOR(uint16_t, 16))(0x9B68L, (VECTOR(uint16_t, 4))(0x9B68L, (VECTOR(uint16_t, 2))(0x9B68L, 65531UL), 65531UL), 65531UL, 0x9B68L, 65531UL, (VECTOR(uint16_t, 2))(0x9B68L, 65531UL), (VECTOR(uint16_t, 2))(0x9B68L, 65531UL), 0x9B68L, 65531UL, 0x9B68L, 65531UL), // p_1621->g_1395
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x5B3B4FFAL), 0x5B3B4FFAL), 0x5B3B4FFAL, 4294967295UL, 0x5B3B4FFAL, (VECTOR(uint32_t, 2))(4294967295UL, 0x5B3B4FFAL), (VECTOR(uint32_t, 2))(4294967295UL, 0x5B3B4FFAL), 4294967295UL, 0x5B3B4FFAL, 4294967295UL, 0x5B3B4FFAL), // p_1621->g_1397
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL, (VECTOR(uint32_t, 2))(1UL, 7UL), (VECTOR(uint32_t, 2))(1UL, 7UL), 1UL, 7UL, 1UL, 7UL), // p_1621->g_1401
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int32_t, 2))(0L, (-3L)), (VECTOR(int32_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L)), // p_1621->g_1404
        (VECTOR(uint32_t, 2))(0x2751C0E6L, 1UL), // p_1621->g_1442
        (VECTOR(int32_t, 2))(0x1E0EED74L, (-1L)), // p_1621->g_1452
        (VECTOR(uint16_t, 8))(0x2712L, (VECTOR(uint16_t, 4))(0x2712L, (VECTOR(uint16_t, 2))(0x2712L, 7UL), 7UL), 7UL, 0x2712L, 7UL), // p_1621->g_1475
        (VECTOR(uint8_t, 8))(0xC8L, (VECTOR(uint8_t, 4))(0xC8L, (VECTOR(uint8_t, 2))(0xC8L, 247UL), 247UL), 247UL, 0xC8L, 247UL), // p_1621->g_1489
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x91B6FC8F41EC3A02L), 0x91B6FC8F41EC3A02L), 0x91B6FC8F41EC3A02L, 18446744073709551615UL, 0x91B6FC8F41EC3A02L), // p_1621->g_1502
        0x924F5661L, // p_1621->g_1510
        0, // p_1621->v_collective
        sequence_input[get_global_id(0)], // p_1621->global_0_offset
        sequence_input[get_global_id(1)], // p_1621->global_1_offset
        sequence_input[get_global_id(2)], // p_1621->global_2_offset
        sequence_input[get_local_id(0)], // p_1621->local_0_offset
        sequence_input[get_local_id(1)], // p_1621->local_1_offset
        sequence_input[get_local_id(2)], // p_1621->local_2_offset
        sequence_input[get_group_id(0)], // p_1621->group_0_offset
        sequence_input[get_group_id(1)], // p_1621->group_1_offset
        sequence_input[get_group_id(2)], // p_1621->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 95)), permutations[0][get_linear_local_id()])), // p_1621->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1622 = c_1623;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1621);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1621->g_19.s0, "p_1621->g_19.s0", print_hash_value);
    transparent_crc(p_1621->g_19.s1, "p_1621->g_19.s1", print_hash_value);
    transparent_crc(p_1621->g_19.s2, "p_1621->g_19.s2", print_hash_value);
    transparent_crc(p_1621->g_19.s3, "p_1621->g_19.s3", print_hash_value);
    transparent_crc(p_1621->g_19.s4, "p_1621->g_19.s4", print_hash_value);
    transparent_crc(p_1621->g_19.s5, "p_1621->g_19.s5", print_hash_value);
    transparent_crc(p_1621->g_19.s6, "p_1621->g_19.s6", print_hash_value);
    transparent_crc(p_1621->g_19.s7, "p_1621->g_19.s7", print_hash_value);
    transparent_crc(p_1621->g_20.s0, "p_1621->g_20.s0", print_hash_value);
    transparent_crc(p_1621->g_20.s1, "p_1621->g_20.s1", print_hash_value);
    transparent_crc(p_1621->g_20.s2, "p_1621->g_20.s2", print_hash_value);
    transparent_crc(p_1621->g_20.s3, "p_1621->g_20.s3", print_hash_value);
    transparent_crc(p_1621->g_20.s4, "p_1621->g_20.s4", print_hash_value);
    transparent_crc(p_1621->g_20.s5, "p_1621->g_20.s5", print_hash_value);
    transparent_crc(p_1621->g_20.s6, "p_1621->g_20.s6", print_hash_value);
    transparent_crc(p_1621->g_20.s7, "p_1621->g_20.s7", print_hash_value);
    transparent_crc(p_1621->g_20.s8, "p_1621->g_20.s8", print_hash_value);
    transparent_crc(p_1621->g_20.s9, "p_1621->g_20.s9", print_hash_value);
    transparent_crc(p_1621->g_20.sa, "p_1621->g_20.sa", print_hash_value);
    transparent_crc(p_1621->g_20.sb, "p_1621->g_20.sb", print_hash_value);
    transparent_crc(p_1621->g_20.sc, "p_1621->g_20.sc", print_hash_value);
    transparent_crc(p_1621->g_20.sd, "p_1621->g_20.sd", print_hash_value);
    transparent_crc(p_1621->g_20.se, "p_1621->g_20.se", print_hash_value);
    transparent_crc(p_1621->g_20.sf, "p_1621->g_20.sf", print_hash_value);
    transparent_crc(p_1621->g_43, "p_1621->g_43", print_hash_value);
    transparent_crc(p_1621->g_46, "p_1621->g_46", print_hash_value);
    transparent_crc(p_1621->g_180, "p_1621->g_180", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1621->g_210[i], "p_1621->g_210[i]", print_hash_value);

    }
    transparent_crc(p_1621->g_229, "p_1621->g_229", print_hash_value);
    transparent_crc(p_1621->g_230, "p_1621->g_230", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1621->g_231[i][j], "p_1621->g_231[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1621->g_234, "p_1621->g_234", print_hash_value);
    transparent_crc(p_1621->g_235, "p_1621->g_235", print_hash_value);
    transparent_crc(p_1621->g_238, "p_1621->g_238", print_hash_value);
    transparent_crc(p_1621->g_277, "p_1621->g_277", print_hash_value);
    transparent_crc(p_1621->g_281.x, "p_1621->g_281.x", print_hash_value);
    transparent_crc(p_1621->g_281.y, "p_1621->g_281.y", print_hash_value);
    transparent_crc(p_1621->g_295, "p_1621->g_295", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1621->g_297[i], "p_1621->g_297[i]", print_hash_value);

    }
    transparent_crc(p_1621->g_302.x, "p_1621->g_302.x", print_hash_value);
    transparent_crc(p_1621->g_302.y, "p_1621->g_302.y", print_hash_value);
    transparent_crc(p_1621->g_302.z, "p_1621->g_302.z", print_hash_value);
    transparent_crc(p_1621->g_302.w, "p_1621->g_302.w", print_hash_value);
    transparent_crc(p_1621->g_319.x, "p_1621->g_319.x", print_hash_value);
    transparent_crc(p_1621->g_319.y, "p_1621->g_319.y", print_hash_value);
    transparent_crc(p_1621->g_319.z, "p_1621->g_319.z", print_hash_value);
    transparent_crc(p_1621->g_319.w, "p_1621->g_319.w", print_hash_value);
    transparent_crc(p_1621->g_335.s0, "p_1621->g_335.s0", print_hash_value);
    transparent_crc(p_1621->g_335.s1, "p_1621->g_335.s1", print_hash_value);
    transparent_crc(p_1621->g_335.s2, "p_1621->g_335.s2", print_hash_value);
    transparent_crc(p_1621->g_335.s3, "p_1621->g_335.s3", print_hash_value);
    transparent_crc(p_1621->g_335.s4, "p_1621->g_335.s4", print_hash_value);
    transparent_crc(p_1621->g_335.s5, "p_1621->g_335.s5", print_hash_value);
    transparent_crc(p_1621->g_335.s6, "p_1621->g_335.s6", print_hash_value);
    transparent_crc(p_1621->g_335.s7, "p_1621->g_335.s7", print_hash_value);
    transparent_crc(p_1621->g_372.s0, "p_1621->g_372.s0", print_hash_value);
    transparent_crc(p_1621->g_372.s1, "p_1621->g_372.s1", print_hash_value);
    transparent_crc(p_1621->g_372.s2, "p_1621->g_372.s2", print_hash_value);
    transparent_crc(p_1621->g_372.s3, "p_1621->g_372.s3", print_hash_value);
    transparent_crc(p_1621->g_372.s4, "p_1621->g_372.s4", print_hash_value);
    transparent_crc(p_1621->g_372.s5, "p_1621->g_372.s5", print_hash_value);
    transparent_crc(p_1621->g_372.s6, "p_1621->g_372.s6", print_hash_value);
    transparent_crc(p_1621->g_372.s7, "p_1621->g_372.s7", print_hash_value);
    transparent_crc(p_1621->g_382.x, "p_1621->g_382.x", print_hash_value);
    transparent_crc(p_1621->g_382.y, "p_1621->g_382.y", print_hash_value);
    transparent_crc(p_1621->g_480.s0, "p_1621->g_480.s0", print_hash_value);
    transparent_crc(p_1621->g_480.s1, "p_1621->g_480.s1", print_hash_value);
    transparent_crc(p_1621->g_480.s2, "p_1621->g_480.s2", print_hash_value);
    transparent_crc(p_1621->g_480.s3, "p_1621->g_480.s3", print_hash_value);
    transparent_crc(p_1621->g_480.s4, "p_1621->g_480.s4", print_hash_value);
    transparent_crc(p_1621->g_480.s5, "p_1621->g_480.s5", print_hash_value);
    transparent_crc(p_1621->g_480.s6, "p_1621->g_480.s6", print_hash_value);
    transparent_crc(p_1621->g_480.s7, "p_1621->g_480.s7", print_hash_value);
    transparent_crc(p_1621->g_558.s0, "p_1621->g_558.s0", print_hash_value);
    transparent_crc(p_1621->g_558.s1, "p_1621->g_558.s1", print_hash_value);
    transparent_crc(p_1621->g_558.s2, "p_1621->g_558.s2", print_hash_value);
    transparent_crc(p_1621->g_558.s3, "p_1621->g_558.s3", print_hash_value);
    transparent_crc(p_1621->g_558.s4, "p_1621->g_558.s4", print_hash_value);
    transparent_crc(p_1621->g_558.s5, "p_1621->g_558.s5", print_hash_value);
    transparent_crc(p_1621->g_558.s6, "p_1621->g_558.s6", print_hash_value);
    transparent_crc(p_1621->g_558.s7, "p_1621->g_558.s7", print_hash_value);
    transparent_crc(p_1621->g_558.s8, "p_1621->g_558.s8", print_hash_value);
    transparent_crc(p_1621->g_558.s9, "p_1621->g_558.s9", print_hash_value);
    transparent_crc(p_1621->g_558.sa, "p_1621->g_558.sa", print_hash_value);
    transparent_crc(p_1621->g_558.sb, "p_1621->g_558.sb", print_hash_value);
    transparent_crc(p_1621->g_558.sc, "p_1621->g_558.sc", print_hash_value);
    transparent_crc(p_1621->g_558.sd, "p_1621->g_558.sd", print_hash_value);
    transparent_crc(p_1621->g_558.se, "p_1621->g_558.se", print_hash_value);
    transparent_crc(p_1621->g_558.sf, "p_1621->g_558.sf", print_hash_value);
    transparent_crc(p_1621->g_580.x, "p_1621->g_580.x", print_hash_value);
    transparent_crc(p_1621->g_580.y, "p_1621->g_580.y", print_hash_value);
    transparent_crc(p_1621->g_583.x, "p_1621->g_583.x", print_hash_value);
    transparent_crc(p_1621->g_583.y, "p_1621->g_583.y", print_hash_value);
    transparent_crc(p_1621->g_585.x, "p_1621->g_585.x", print_hash_value);
    transparent_crc(p_1621->g_585.y, "p_1621->g_585.y", print_hash_value);
    transparent_crc(p_1621->g_587.x, "p_1621->g_587.x", print_hash_value);
    transparent_crc(p_1621->g_587.y, "p_1621->g_587.y", print_hash_value);
    transparent_crc(p_1621->g_587.z, "p_1621->g_587.z", print_hash_value);
    transparent_crc(p_1621->g_587.w, "p_1621->g_587.w", print_hash_value);
    transparent_crc(p_1621->g_588.x, "p_1621->g_588.x", print_hash_value);
    transparent_crc(p_1621->g_588.y, "p_1621->g_588.y", print_hash_value);
    transparent_crc(p_1621->g_670, "p_1621->g_670", print_hash_value);
    transparent_crc(p_1621->g_736.s0, "p_1621->g_736.s0", print_hash_value);
    transparent_crc(p_1621->g_736.s1, "p_1621->g_736.s1", print_hash_value);
    transparent_crc(p_1621->g_736.s2, "p_1621->g_736.s2", print_hash_value);
    transparent_crc(p_1621->g_736.s3, "p_1621->g_736.s3", print_hash_value);
    transparent_crc(p_1621->g_736.s4, "p_1621->g_736.s4", print_hash_value);
    transparent_crc(p_1621->g_736.s5, "p_1621->g_736.s5", print_hash_value);
    transparent_crc(p_1621->g_736.s6, "p_1621->g_736.s6", print_hash_value);
    transparent_crc(p_1621->g_736.s7, "p_1621->g_736.s7", print_hash_value);
    transparent_crc(p_1621->g_736.s8, "p_1621->g_736.s8", print_hash_value);
    transparent_crc(p_1621->g_736.s9, "p_1621->g_736.s9", print_hash_value);
    transparent_crc(p_1621->g_736.sa, "p_1621->g_736.sa", print_hash_value);
    transparent_crc(p_1621->g_736.sb, "p_1621->g_736.sb", print_hash_value);
    transparent_crc(p_1621->g_736.sc, "p_1621->g_736.sc", print_hash_value);
    transparent_crc(p_1621->g_736.sd, "p_1621->g_736.sd", print_hash_value);
    transparent_crc(p_1621->g_736.se, "p_1621->g_736.se", print_hash_value);
    transparent_crc(p_1621->g_736.sf, "p_1621->g_736.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1621->g_747[i][j], "p_1621->g_747[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1621->g_759, "p_1621->g_759", print_hash_value);
    transparent_crc(p_1621->g_772.s0, "p_1621->g_772.s0", print_hash_value);
    transparent_crc(p_1621->g_772.s1, "p_1621->g_772.s1", print_hash_value);
    transparent_crc(p_1621->g_772.s2, "p_1621->g_772.s2", print_hash_value);
    transparent_crc(p_1621->g_772.s3, "p_1621->g_772.s3", print_hash_value);
    transparent_crc(p_1621->g_772.s4, "p_1621->g_772.s4", print_hash_value);
    transparent_crc(p_1621->g_772.s5, "p_1621->g_772.s5", print_hash_value);
    transparent_crc(p_1621->g_772.s6, "p_1621->g_772.s6", print_hash_value);
    transparent_crc(p_1621->g_772.s7, "p_1621->g_772.s7", print_hash_value);
    transparent_crc(p_1621->g_803.x, "p_1621->g_803.x", print_hash_value);
    transparent_crc(p_1621->g_803.y, "p_1621->g_803.y", print_hash_value);
    transparent_crc(p_1621->g_803.z, "p_1621->g_803.z", print_hash_value);
    transparent_crc(p_1621->g_803.w, "p_1621->g_803.w", print_hash_value);
    transparent_crc(p_1621->g_809.x, "p_1621->g_809.x", print_hash_value);
    transparent_crc(p_1621->g_809.y, "p_1621->g_809.y", print_hash_value);
    transparent_crc(p_1621->g_826.x, "p_1621->g_826.x", print_hash_value);
    transparent_crc(p_1621->g_826.y, "p_1621->g_826.y", print_hash_value);
    transparent_crc(p_1621->g_829.s0, "p_1621->g_829.s0", print_hash_value);
    transparent_crc(p_1621->g_829.s1, "p_1621->g_829.s1", print_hash_value);
    transparent_crc(p_1621->g_829.s2, "p_1621->g_829.s2", print_hash_value);
    transparent_crc(p_1621->g_829.s3, "p_1621->g_829.s3", print_hash_value);
    transparent_crc(p_1621->g_829.s4, "p_1621->g_829.s4", print_hash_value);
    transparent_crc(p_1621->g_829.s5, "p_1621->g_829.s5", print_hash_value);
    transparent_crc(p_1621->g_829.s6, "p_1621->g_829.s6", print_hash_value);
    transparent_crc(p_1621->g_829.s7, "p_1621->g_829.s7", print_hash_value);
    transparent_crc(p_1621->g_830.x, "p_1621->g_830.x", print_hash_value);
    transparent_crc(p_1621->g_830.y, "p_1621->g_830.y", print_hash_value);
    transparent_crc(p_1621->g_831.s0, "p_1621->g_831.s0", print_hash_value);
    transparent_crc(p_1621->g_831.s1, "p_1621->g_831.s1", print_hash_value);
    transparent_crc(p_1621->g_831.s2, "p_1621->g_831.s2", print_hash_value);
    transparent_crc(p_1621->g_831.s3, "p_1621->g_831.s3", print_hash_value);
    transparent_crc(p_1621->g_831.s4, "p_1621->g_831.s4", print_hash_value);
    transparent_crc(p_1621->g_831.s5, "p_1621->g_831.s5", print_hash_value);
    transparent_crc(p_1621->g_831.s6, "p_1621->g_831.s6", print_hash_value);
    transparent_crc(p_1621->g_831.s7, "p_1621->g_831.s7", print_hash_value);
    transparent_crc(p_1621->g_833.x, "p_1621->g_833.x", print_hash_value);
    transparent_crc(p_1621->g_833.y, "p_1621->g_833.y", print_hash_value);
    transparent_crc(p_1621->g_833.z, "p_1621->g_833.z", print_hash_value);
    transparent_crc(p_1621->g_833.w, "p_1621->g_833.w", print_hash_value);
    transparent_crc(p_1621->g_834.s0, "p_1621->g_834.s0", print_hash_value);
    transparent_crc(p_1621->g_834.s1, "p_1621->g_834.s1", print_hash_value);
    transparent_crc(p_1621->g_834.s2, "p_1621->g_834.s2", print_hash_value);
    transparent_crc(p_1621->g_834.s3, "p_1621->g_834.s3", print_hash_value);
    transparent_crc(p_1621->g_834.s4, "p_1621->g_834.s4", print_hash_value);
    transparent_crc(p_1621->g_834.s5, "p_1621->g_834.s5", print_hash_value);
    transparent_crc(p_1621->g_834.s6, "p_1621->g_834.s6", print_hash_value);
    transparent_crc(p_1621->g_834.s7, "p_1621->g_834.s7", print_hash_value);
    transparent_crc(p_1621->g_834.s8, "p_1621->g_834.s8", print_hash_value);
    transparent_crc(p_1621->g_834.s9, "p_1621->g_834.s9", print_hash_value);
    transparent_crc(p_1621->g_834.sa, "p_1621->g_834.sa", print_hash_value);
    transparent_crc(p_1621->g_834.sb, "p_1621->g_834.sb", print_hash_value);
    transparent_crc(p_1621->g_834.sc, "p_1621->g_834.sc", print_hash_value);
    transparent_crc(p_1621->g_834.sd, "p_1621->g_834.sd", print_hash_value);
    transparent_crc(p_1621->g_834.se, "p_1621->g_834.se", print_hash_value);
    transparent_crc(p_1621->g_834.sf, "p_1621->g_834.sf", print_hash_value);
    transparent_crc(p_1621->g_840.s0, "p_1621->g_840.s0", print_hash_value);
    transparent_crc(p_1621->g_840.s1, "p_1621->g_840.s1", print_hash_value);
    transparent_crc(p_1621->g_840.s2, "p_1621->g_840.s2", print_hash_value);
    transparent_crc(p_1621->g_840.s3, "p_1621->g_840.s3", print_hash_value);
    transparent_crc(p_1621->g_840.s4, "p_1621->g_840.s4", print_hash_value);
    transparent_crc(p_1621->g_840.s5, "p_1621->g_840.s5", print_hash_value);
    transparent_crc(p_1621->g_840.s6, "p_1621->g_840.s6", print_hash_value);
    transparent_crc(p_1621->g_840.s7, "p_1621->g_840.s7", print_hash_value);
    transparent_crc(p_1621->g_840.s8, "p_1621->g_840.s8", print_hash_value);
    transparent_crc(p_1621->g_840.s9, "p_1621->g_840.s9", print_hash_value);
    transparent_crc(p_1621->g_840.sa, "p_1621->g_840.sa", print_hash_value);
    transparent_crc(p_1621->g_840.sb, "p_1621->g_840.sb", print_hash_value);
    transparent_crc(p_1621->g_840.sc, "p_1621->g_840.sc", print_hash_value);
    transparent_crc(p_1621->g_840.sd, "p_1621->g_840.sd", print_hash_value);
    transparent_crc(p_1621->g_840.se, "p_1621->g_840.se", print_hash_value);
    transparent_crc(p_1621->g_840.sf, "p_1621->g_840.sf", print_hash_value);
    transparent_crc(p_1621->g_845.s0, "p_1621->g_845.s0", print_hash_value);
    transparent_crc(p_1621->g_845.s1, "p_1621->g_845.s1", print_hash_value);
    transparent_crc(p_1621->g_845.s2, "p_1621->g_845.s2", print_hash_value);
    transparent_crc(p_1621->g_845.s3, "p_1621->g_845.s3", print_hash_value);
    transparent_crc(p_1621->g_845.s4, "p_1621->g_845.s4", print_hash_value);
    transparent_crc(p_1621->g_845.s5, "p_1621->g_845.s5", print_hash_value);
    transparent_crc(p_1621->g_845.s6, "p_1621->g_845.s6", print_hash_value);
    transparent_crc(p_1621->g_845.s7, "p_1621->g_845.s7", print_hash_value);
    transparent_crc(p_1621->g_846.s0, "p_1621->g_846.s0", print_hash_value);
    transparent_crc(p_1621->g_846.s1, "p_1621->g_846.s1", print_hash_value);
    transparent_crc(p_1621->g_846.s2, "p_1621->g_846.s2", print_hash_value);
    transparent_crc(p_1621->g_846.s3, "p_1621->g_846.s3", print_hash_value);
    transparent_crc(p_1621->g_846.s4, "p_1621->g_846.s4", print_hash_value);
    transparent_crc(p_1621->g_846.s5, "p_1621->g_846.s5", print_hash_value);
    transparent_crc(p_1621->g_846.s6, "p_1621->g_846.s6", print_hash_value);
    transparent_crc(p_1621->g_846.s7, "p_1621->g_846.s7", print_hash_value);
    transparent_crc(p_1621->g_846.s8, "p_1621->g_846.s8", print_hash_value);
    transparent_crc(p_1621->g_846.s9, "p_1621->g_846.s9", print_hash_value);
    transparent_crc(p_1621->g_846.sa, "p_1621->g_846.sa", print_hash_value);
    transparent_crc(p_1621->g_846.sb, "p_1621->g_846.sb", print_hash_value);
    transparent_crc(p_1621->g_846.sc, "p_1621->g_846.sc", print_hash_value);
    transparent_crc(p_1621->g_846.sd, "p_1621->g_846.sd", print_hash_value);
    transparent_crc(p_1621->g_846.se, "p_1621->g_846.se", print_hash_value);
    transparent_crc(p_1621->g_846.sf, "p_1621->g_846.sf", print_hash_value);
    transparent_crc(p_1621->g_867.x, "p_1621->g_867.x", print_hash_value);
    transparent_crc(p_1621->g_867.y, "p_1621->g_867.y", print_hash_value);
    transparent_crc(p_1621->g_867.z, "p_1621->g_867.z", print_hash_value);
    transparent_crc(p_1621->g_867.w, "p_1621->g_867.w", print_hash_value);
    transparent_crc(p_1621->g_868.s0, "p_1621->g_868.s0", print_hash_value);
    transparent_crc(p_1621->g_868.s1, "p_1621->g_868.s1", print_hash_value);
    transparent_crc(p_1621->g_868.s2, "p_1621->g_868.s2", print_hash_value);
    transparent_crc(p_1621->g_868.s3, "p_1621->g_868.s3", print_hash_value);
    transparent_crc(p_1621->g_868.s4, "p_1621->g_868.s4", print_hash_value);
    transparent_crc(p_1621->g_868.s5, "p_1621->g_868.s5", print_hash_value);
    transparent_crc(p_1621->g_868.s6, "p_1621->g_868.s6", print_hash_value);
    transparent_crc(p_1621->g_868.s7, "p_1621->g_868.s7", print_hash_value);
    transparent_crc(p_1621->g_868.s8, "p_1621->g_868.s8", print_hash_value);
    transparent_crc(p_1621->g_868.s9, "p_1621->g_868.s9", print_hash_value);
    transparent_crc(p_1621->g_868.sa, "p_1621->g_868.sa", print_hash_value);
    transparent_crc(p_1621->g_868.sb, "p_1621->g_868.sb", print_hash_value);
    transparent_crc(p_1621->g_868.sc, "p_1621->g_868.sc", print_hash_value);
    transparent_crc(p_1621->g_868.sd, "p_1621->g_868.sd", print_hash_value);
    transparent_crc(p_1621->g_868.se, "p_1621->g_868.se", print_hash_value);
    transparent_crc(p_1621->g_868.sf, "p_1621->g_868.sf", print_hash_value);
    transparent_crc(p_1621->g_869.x, "p_1621->g_869.x", print_hash_value);
    transparent_crc(p_1621->g_869.y, "p_1621->g_869.y", print_hash_value);
    transparent_crc(p_1621->g_869.z, "p_1621->g_869.z", print_hash_value);
    transparent_crc(p_1621->g_869.w, "p_1621->g_869.w", print_hash_value);
    transparent_crc(p_1621->g_884.x, "p_1621->g_884.x", print_hash_value);
    transparent_crc(p_1621->g_884.y, "p_1621->g_884.y", print_hash_value);
    transparent_crc(p_1621->g_897.s0, "p_1621->g_897.s0", print_hash_value);
    transparent_crc(p_1621->g_897.s1, "p_1621->g_897.s1", print_hash_value);
    transparent_crc(p_1621->g_897.s2, "p_1621->g_897.s2", print_hash_value);
    transparent_crc(p_1621->g_897.s3, "p_1621->g_897.s3", print_hash_value);
    transparent_crc(p_1621->g_897.s4, "p_1621->g_897.s4", print_hash_value);
    transparent_crc(p_1621->g_897.s5, "p_1621->g_897.s5", print_hash_value);
    transparent_crc(p_1621->g_897.s6, "p_1621->g_897.s6", print_hash_value);
    transparent_crc(p_1621->g_897.s7, "p_1621->g_897.s7", print_hash_value);
    transparent_crc(p_1621->g_925.s0, "p_1621->g_925.s0", print_hash_value);
    transparent_crc(p_1621->g_925.s1, "p_1621->g_925.s1", print_hash_value);
    transparent_crc(p_1621->g_925.s2, "p_1621->g_925.s2", print_hash_value);
    transparent_crc(p_1621->g_925.s3, "p_1621->g_925.s3", print_hash_value);
    transparent_crc(p_1621->g_925.s4, "p_1621->g_925.s4", print_hash_value);
    transparent_crc(p_1621->g_925.s5, "p_1621->g_925.s5", print_hash_value);
    transparent_crc(p_1621->g_925.s6, "p_1621->g_925.s6", print_hash_value);
    transparent_crc(p_1621->g_925.s7, "p_1621->g_925.s7", print_hash_value);
    transparent_crc(p_1621->g_925.s8, "p_1621->g_925.s8", print_hash_value);
    transparent_crc(p_1621->g_925.s9, "p_1621->g_925.s9", print_hash_value);
    transparent_crc(p_1621->g_925.sa, "p_1621->g_925.sa", print_hash_value);
    transparent_crc(p_1621->g_925.sb, "p_1621->g_925.sb", print_hash_value);
    transparent_crc(p_1621->g_925.sc, "p_1621->g_925.sc", print_hash_value);
    transparent_crc(p_1621->g_925.sd, "p_1621->g_925.sd", print_hash_value);
    transparent_crc(p_1621->g_925.se, "p_1621->g_925.se", print_hash_value);
    transparent_crc(p_1621->g_925.sf, "p_1621->g_925.sf", print_hash_value);
    transparent_crc(p_1621->g_934.x, "p_1621->g_934.x", print_hash_value);
    transparent_crc(p_1621->g_934.y, "p_1621->g_934.y", print_hash_value);
    transparent_crc(p_1621->g_936.s0, "p_1621->g_936.s0", print_hash_value);
    transparent_crc(p_1621->g_936.s1, "p_1621->g_936.s1", print_hash_value);
    transparent_crc(p_1621->g_936.s2, "p_1621->g_936.s2", print_hash_value);
    transparent_crc(p_1621->g_936.s3, "p_1621->g_936.s3", print_hash_value);
    transparent_crc(p_1621->g_936.s4, "p_1621->g_936.s4", print_hash_value);
    transparent_crc(p_1621->g_936.s5, "p_1621->g_936.s5", print_hash_value);
    transparent_crc(p_1621->g_936.s6, "p_1621->g_936.s6", print_hash_value);
    transparent_crc(p_1621->g_936.s7, "p_1621->g_936.s7", print_hash_value);
    transparent_crc(p_1621->g_936.s8, "p_1621->g_936.s8", print_hash_value);
    transparent_crc(p_1621->g_936.s9, "p_1621->g_936.s9", print_hash_value);
    transparent_crc(p_1621->g_936.sa, "p_1621->g_936.sa", print_hash_value);
    transparent_crc(p_1621->g_936.sb, "p_1621->g_936.sb", print_hash_value);
    transparent_crc(p_1621->g_936.sc, "p_1621->g_936.sc", print_hash_value);
    transparent_crc(p_1621->g_936.sd, "p_1621->g_936.sd", print_hash_value);
    transparent_crc(p_1621->g_936.se, "p_1621->g_936.se", print_hash_value);
    transparent_crc(p_1621->g_936.sf, "p_1621->g_936.sf", print_hash_value);
    transparent_crc(p_1621->g_947, "p_1621->g_947", print_hash_value);
    transparent_crc(p_1621->g_969.x, "p_1621->g_969.x", print_hash_value);
    transparent_crc(p_1621->g_969.y, "p_1621->g_969.y", print_hash_value);
    transparent_crc(p_1621->g_990.x, "p_1621->g_990.x", print_hash_value);
    transparent_crc(p_1621->g_990.y, "p_1621->g_990.y", print_hash_value);
    transparent_crc(p_1621->g_990.z, "p_1621->g_990.z", print_hash_value);
    transparent_crc(p_1621->g_990.w, "p_1621->g_990.w", print_hash_value);
    transparent_crc(p_1621->g_1000, "p_1621->g_1000", print_hash_value);
    transparent_crc(p_1621->g_1008.s0, "p_1621->g_1008.s0", print_hash_value);
    transparent_crc(p_1621->g_1008.s1, "p_1621->g_1008.s1", print_hash_value);
    transparent_crc(p_1621->g_1008.s2, "p_1621->g_1008.s2", print_hash_value);
    transparent_crc(p_1621->g_1008.s3, "p_1621->g_1008.s3", print_hash_value);
    transparent_crc(p_1621->g_1008.s4, "p_1621->g_1008.s4", print_hash_value);
    transparent_crc(p_1621->g_1008.s5, "p_1621->g_1008.s5", print_hash_value);
    transparent_crc(p_1621->g_1008.s6, "p_1621->g_1008.s6", print_hash_value);
    transparent_crc(p_1621->g_1008.s7, "p_1621->g_1008.s7", print_hash_value);
    transparent_crc(p_1621->g_1008.s8, "p_1621->g_1008.s8", print_hash_value);
    transparent_crc(p_1621->g_1008.s9, "p_1621->g_1008.s9", print_hash_value);
    transparent_crc(p_1621->g_1008.sa, "p_1621->g_1008.sa", print_hash_value);
    transparent_crc(p_1621->g_1008.sb, "p_1621->g_1008.sb", print_hash_value);
    transparent_crc(p_1621->g_1008.sc, "p_1621->g_1008.sc", print_hash_value);
    transparent_crc(p_1621->g_1008.sd, "p_1621->g_1008.sd", print_hash_value);
    transparent_crc(p_1621->g_1008.se, "p_1621->g_1008.se", print_hash_value);
    transparent_crc(p_1621->g_1008.sf, "p_1621->g_1008.sf", print_hash_value);
    transparent_crc(p_1621->g_1050, "p_1621->g_1050", print_hash_value);
    transparent_crc(p_1621->g_1055, "p_1621->g_1055", print_hash_value);
    transparent_crc(p_1621->g_1058.s0, "p_1621->g_1058.s0", print_hash_value);
    transparent_crc(p_1621->g_1058.s1, "p_1621->g_1058.s1", print_hash_value);
    transparent_crc(p_1621->g_1058.s2, "p_1621->g_1058.s2", print_hash_value);
    transparent_crc(p_1621->g_1058.s3, "p_1621->g_1058.s3", print_hash_value);
    transparent_crc(p_1621->g_1058.s4, "p_1621->g_1058.s4", print_hash_value);
    transparent_crc(p_1621->g_1058.s5, "p_1621->g_1058.s5", print_hash_value);
    transparent_crc(p_1621->g_1058.s6, "p_1621->g_1058.s6", print_hash_value);
    transparent_crc(p_1621->g_1058.s7, "p_1621->g_1058.s7", print_hash_value);
    transparent_crc(p_1621->g_1058.s8, "p_1621->g_1058.s8", print_hash_value);
    transparent_crc(p_1621->g_1058.s9, "p_1621->g_1058.s9", print_hash_value);
    transparent_crc(p_1621->g_1058.sa, "p_1621->g_1058.sa", print_hash_value);
    transparent_crc(p_1621->g_1058.sb, "p_1621->g_1058.sb", print_hash_value);
    transparent_crc(p_1621->g_1058.sc, "p_1621->g_1058.sc", print_hash_value);
    transparent_crc(p_1621->g_1058.sd, "p_1621->g_1058.sd", print_hash_value);
    transparent_crc(p_1621->g_1058.se, "p_1621->g_1058.se", print_hash_value);
    transparent_crc(p_1621->g_1058.sf, "p_1621->g_1058.sf", print_hash_value);
    transparent_crc(p_1621->g_1059.s0, "p_1621->g_1059.s0", print_hash_value);
    transparent_crc(p_1621->g_1059.s1, "p_1621->g_1059.s1", print_hash_value);
    transparent_crc(p_1621->g_1059.s2, "p_1621->g_1059.s2", print_hash_value);
    transparent_crc(p_1621->g_1059.s3, "p_1621->g_1059.s3", print_hash_value);
    transparent_crc(p_1621->g_1059.s4, "p_1621->g_1059.s4", print_hash_value);
    transparent_crc(p_1621->g_1059.s5, "p_1621->g_1059.s5", print_hash_value);
    transparent_crc(p_1621->g_1059.s6, "p_1621->g_1059.s6", print_hash_value);
    transparent_crc(p_1621->g_1059.s7, "p_1621->g_1059.s7", print_hash_value);
    transparent_crc(p_1621->g_1059.s8, "p_1621->g_1059.s8", print_hash_value);
    transparent_crc(p_1621->g_1059.s9, "p_1621->g_1059.s9", print_hash_value);
    transparent_crc(p_1621->g_1059.sa, "p_1621->g_1059.sa", print_hash_value);
    transparent_crc(p_1621->g_1059.sb, "p_1621->g_1059.sb", print_hash_value);
    transparent_crc(p_1621->g_1059.sc, "p_1621->g_1059.sc", print_hash_value);
    transparent_crc(p_1621->g_1059.sd, "p_1621->g_1059.sd", print_hash_value);
    transparent_crc(p_1621->g_1059.se, "p_1621->g_1059.se", print_hash_value);
    transparent_crc(p_1621->g_1059.sf, "p_1621->g_1059.sf", print_hash_value);
    transparent_crc(p_1621->g_1066.s0, "p_1621->g_1066.s0", print_hash_value);
    transparent_crc(p_1621->g_1066.s1, "p_1621->g_1066.s1", print_hash_value);
    transparent_crc(p_1621->g_1066.s2, "p_1621->g_1066.s2", print_hash_value);
    transparent_crc(p_1621->g_1066.s3, "p_1621->g_1066.s3", print_hash_value);
    transparent_crc(p_1621->g_1066.s4, "p_1621->g_1066.s4", print_hash_value);
    transparent_crc(p_1621->g_1066.s5, "p_1621->g_1066.s5", print_hash_value);
    transparent_crc(p_1621->g_1066.s6, "p_1621->g_1066.s6", print_hash_value);
    transparent_crc(p_1621->g_1066.s7, "p_1621->g_1066.s7", print_hash_value);
    transparent_crc(p_1621->g_1066.s8, "p_1621->g_1066.s8", print_hash_value);
    transparent_crc(p_1621->g_1066.s9, "p_1621->g_1066.s9", print_hash_value);
    transparent_crc(p_1621->g_1066.sa, "p_1621->g_1066.sa", print_hash_value);
    transparent_crc(p_1621->g_1066.sb, "p_1621->g_1066.sb", print_hash_value);
    transparent_crc(p_1621->g_1066.sc, "p_1621->g_1066.sc", print_hash_value);
    transparent_crc(p_1621->g_1066.sd, "p_1621->g_1066.sd", print_hash_value);
    transparent_crc(p_1621->g_1066.se, "p_1621->g_1066.se", print_hash_value);
    transparent_crc(p_1621->g_1066.sf, "p_1621->g_1066.sf", print_hash_value);
    transparent_crc(p_1621->g_1071.s0, "p_1621->g_1071.s0", print_hash_value);
    transparent_crc(p_1621->g_1071.s1, "p_1621->g_1071.s1", print_hash_value);
    transparent_crc(p_1621->g_1071.s2, "p_1621->g_1071.s2", print_hash_value);
    transparent_crc(p_1621->g_1071.s3, "p_1621->g_1071.s3", print_hash_value);
    transparent_crc(p_1621->g_1071.s4, "p_1621->g_1071.s4", print_hash_value);
    transparent_crc(p_1621->g_1071.s5, "p_1621->g_1071.s5", print_hash_value);
    transparent_crc(p_1621->g_1071.s6, "p_1621->g_1071.s6", print_hash_value);
    transparent_crc(p_1621->g_1071.s7, "p_1621->g_1071.s7", print_hash_value);
    transparent_crc(p_1621->g_1073.s0, "p_1621->g_1073.s0", print_hash_value);
    transparent_crc(p_1621->g_1073.s1, "p_1621->g_1073.s1", print_hash_value);
    transparent_crc(p_1621->g_1073.s2, "p_1621->g_1073.s2", print_hash_value);
    transparent_crc(p_1621->g_1073.s3, "p_1621->g_1073.s3", print_hash_value);
    transparent_crc(p_1621->g_1073.s4, "p_1621->g_1073.s4", print_hash_value);
    transparent_crc(p_1621->g_1073.s5, "p_1621->g_1073.s5", print_hash_value);
    transparent_crc(p_1621->g_1073.s6, "p_1621->g_1073.s6", print_hash_value);
    transparent_crc(p_1621->g_1073.s7, "p_1621->g_1073.s7", print_hash_value);
    transparent_crc(p_1621->g_1073.s8, "p_1621->g_1073.s8", print_hash_value);
    transparent_crc(p_1621->g_1073.s9, "p_1621->g_1073.s9", print_hash_value);
    transparent_crc(p_1621->g_1073.sa, "p_1621->g_1073.sa", print_hash_value);
    transparent_crc(p_1621->g_1073.sb, "p_1621->g_1073.sb", print_hash_value);
    transparent_crc(p_1621->g_1073.sc, "p_1621->g_1073.sc", print_hash_value);
    transparent_crc(p_1621->g_1073.sd, "p_1621->g_1073.sd", print_hash_value);
    transparent_crc(p_1621->g_1073.se, "p_1621->g_1073.se", print_hash_value);
    transparent_crc(p_1621->g_1073.sf, "p_1621->g_1073.sf", print_hash_value);
    transparent_crc(p_1621->g_1090.x, "p_1621->g_1090.x", print_hash_value);
    transparent_crc(p_1621->g_1090.y, "p_1621->g_1090.y", print_hash_value);
    transparent_crc(p_1621->g_1090.z, "p_1621->g_1090.z", print_hash_value);
    transparent_crc(p_1621->g_1090.w, "p_1621->g_1090.w", print_hash_value);
    transparent_crc(p_1621->g_1103, "p_1621->g_1103", print_hash_value);
    transparent_crc(p_1621->g_1123.s0, "p_1621->g_1123.s0", print_hash_value);
    transparent_crc(p_1621->g_1123.s1, "p_1621->g_1123.s1", print_hash_value);
    transparent_crc(p_1621->g_1123.s2, "p_1621->g_1123.s2", print_hash_value);
    transparent_crc(p_1621->g_1123.s3, "p_1621->g_1123.s3", print_hash_value);
    transparent_crc(p_1621->g_1123.s4, "p_1621->g_1123.s4", print_hash_value);
    transparent_crc(p_1621->g_1123.s5, "p_1621->g_1123.s5", print_hash_value);
    transparent_crc(p_1621->g_1123.s6, "p_1621->g_1123.s6", print_hash_value);
    transparent_crc(p_1621->g_1123.s7, "p_1621->g_1123.s7", print_hash_value);
    transparent_crc(p_1621->g_1123.s8, "p_1621->g_1123.s8", print_hash_value);
    transparent_crc(p_1621->g_1123.s9, "p_1621->g_1123.s9", print_hash_value);
    transparent_crc(p_1621->g_1123.sa, "p_1621->g_1123.sa", print_hash_value);
    transparent_crc(p_1621->g_1123.sb, "p_1621->g_1123.sb", print_hash_value);
    transparent_crc(p_1621->g_1123.sc, "p_1621->g_1123.sc", print_hash_value);
    transparent_crc(p_1621->g_1123.sd, "p_1621->g_1123.sd", print_hash_value);
    transparent_crc(p_1621->g_1123.se, "p_1621->g_1123.se", print_hash_value);
    transparent_crc(p_1621->g_1123.sf, "p_1621->g_1123.sf", print_hash_value);
    transparent_crc(p_1621->g_1124.s0, "p_1621->g_1124.s0", print_hash_value);
    transparent_crc(p_1621->g_1124.s1, "p_1621->g_1124.s1", print_hash_value);
    transparent_crc(p_1621->g_1124.s2, "p_1621->g_1124.s2", print_hash_value);
    transparent_crc(p_1621->g_1124.s3, "p_1621->g_1124.s3", print_hash_value);
    transparent_crc(p_1621->g_1124.s4, "p_1621->g_1124.s4", print_hash_value);
    transparent_crc(p_1621->g_1124.s5, "p_1621->g_1124.s5", print_hash_value);
    transparent_crc(p_1621->g_1124.s6, "p_1621->g_1124.s6", print_hash_value);
    transparent_crc(p_1621->g_1124.s7, "p_1621->g_1124.s7", print_hash_value);
    transparent_crc(p_1621->g_1124.s8, "p_1621->g_1124.s8", print_hash_value);
    transparent_crc(p_1621->g_1124.s9, "p_1621->g_1124.s9", print_hash_value);
    transparent_crc(p_1621->g_1124.sa, "p_1621->g_1124.sa", print_hash_value);
    transparent_crc(p_1621->g_1124.sb, "p_1621->g_1124.sb", print_hash_value);
    transparent_crc(p_1621->g_1124.sc, "p_1621->g_1124.sc", print_hash_value);
    transparent_crc(p_1621->g_1124.sd, "p_1621->g_1124.sd", print_hash_value);
    transparent_crc(p_1621->g_1124.se, "p_1621->g_1124.se", print_hash_value);
    transparent_crc(p_1621->g_1124.sf, "p_1621->g_1124.sf", print_hash_value);
    transparent_crc(p_1621->g_1145.x, "p_1621->g_1145.x", print_hash_value);
    transparent_crc(p_1621->g_1145.y, "p_1621->g_1145.y", print_hash_value);
    transparent_crc(p_1621->g_1169.x, "p_1621->g_1169.x", print_hash_value);
    transparent_crc(p_1621->g_1169.y, "p_1621->g_1169.y", print_hash_value);
    transparent_crc(p_1621->g_1180, "p_1621->g_1180", print_hash_value);
    transparent_crc(p_1621->g_1214.x, "p_1621->g_1214.x", print_hash_value);
    transparent_crc(p_1621->g_1214.y, "p_1621->g_1214.y", print_hash_value);
    transparent_crc(p_1621->g_1240.s0, "p_1621->g_1240.s0", print_hash_value);
    transparent_crc(p_1621->g_1240.s1, "p_1621->g_1240.s1", print_hash_value);
    transparent_crc(p_1621->g_1240.s2, "p_1621->g_1240.s2", print_hash_value);
    transparent_crc(p_1621->g_1240.s3, "p_1621->g_1240.s3", print_hash_value);
    transparent_crc(p_1621->g_1240.s4, "p_1621->g_1240.s4", print_hash_value);
    transparent_crc(p_1621->g_1240.s5, "p_1621->g_1240.s5", print_hash_value);
    transparent_crc(p_1621->g_1240.s6, "p_1621->g_1240.s6", print_hash_value);
    transparent_crc(p_1621->g_1240.s7, "p_1621->g_1240.s7", print_hash_value);
    transparent_crc(p_1621->g_1241.x, "p_1621->g_1241.x", print_hash_value);
    transparent_crc(p_1621->g_1241.y, "p_1621->g_1241.y", print_hash_value);
    transparent_crc(p_1621->g_1241.z, "p_1621->g_1241.z", print_hash_value);
    transparent_crc(p_1621->g_1241.w, "p_1621->g_1241.w", print_hash_value);
    transparent_crc(p_1621->g_1244, "p_1621->g_1244", print_hash_value);
    transparent_crc(p_1621->g_1248.s0, "p_1621->g_1248.s0", print_hash_value);
    transparent_crc(p_1621->g_1248.s1, "p_1621->g_1248.s1", print_hash_value);
    transparent_crc(p_1621->g_1248.s2, "p_1621->g_1248.s2", print_hash_value);
    transparent_crc(p_1621->g_1248.s3, "p_1621->g_1248.s3", print_hash_value);
    transparent_crc(p_1621->g_1248.s4, "p_1621->g_1248.s4", print_hash_value);
    transparent_crc(p_1621->g_1248.s5, "p_1621->g_1248.s5", print_hash_value);
    transparent_crc(p_1621->g_1248.s6, "p_1621->g_1248.s6", print_hash_value);
    transparent_crc(p_1621->g_1248.s7, "p_1621->g_1248.s7", print_hash_value);
    transparent_crc(p_1621->g_1248.s8, "p_1621->g_1248.s8", print_hash_value);
    transparent_crc(p_1621->g_1248.s9, "p_1621->g_1248.s9", print_hash_value);
    transparent_crc(p_1621->g_1248.sa, "p_1621->g_1248.sa", print_hash_value);
    transparent_crc(p_1621->g_1248.sb, "p_1621->g_1248.sb", print_hash_value);
    transparent_crc(p_1621->g_1248.sc, "p_1621->g_1248.sc", print_hash_value);
    transparent_crc(p_1621->g_1248.sd, "p_1621->g_1248.sd", print_hash_value);
    transparent_crc(p_1621->g_1248.se, "p_1621->g_1248.se", print_hash_value);
    transparent_crc(p_1621->g_1248.sf, "p_1621->g_1248.sf", print_hash_value);
    transparent_crc(p_1621->g_1270.x, "p_1621->g_1270.x", print_hash_value);
    transparent_crc(p_1621->g_1270.y, "p_1621->g_1270.y", print_hash_value);
    transparent_crc(p_1621->g_1270.z, "p_1621->g_1270.z", print_hash_value);
    transparent_crc(p_1621->g_1270.w, "p_1621->g_1270.w", print_hash_value);
    transparent_crc(p_1621->g_1344.s0, "p_1621->g_1344.s0", print_hash_value);
    transparent_crc(p_1621->g_1344.s1, "p_1621->g_1344.s1", print_hash_value);
    transparent_crc(p_1621->g_1344.s2, "p_1621->g_1344.s2", print_hash_value);
    transparent_crc(p_1621->g_1344.s3, "p_1621->g_1344.s3", print_hash_value);
    transparent_crc(p_1621->g_1344.s4, "p_1621->g_1344.s4", print_hash_value);
    transparent_crc(p_1621->g_1344.s5, "p_1621->g_1344.s5", print_hash_value);
    transparent_crc(p_1621->g_1344.s6, "p_1621->g_1344.s6", print_hash_value);
    transparent_crc(p_1621->g_1344.s7, "p_1621->g_1344.s7", print_hash_value);
    transparent_crc(p_1621->g_1344.s8, "p_1621->g_1344.s8", print_hash_value);
    transparent_crc(p_1621->g_1344.s9, "p_1621->g_1344.s9", print_hash_value);
    transparent_crc(p_1621->g_1344.sa, "p_1621->g_1344.sa", print_hash_value);
    transparent_crc(p_1621->g_1344.sb, "p_1621->g_1344.sb", print_hash_value);
    transparent_crc(p_1621->g_1344.sc, "p_1621->g_1344.sc", print_hash_value);
    transparent_crc(p_1621->g_1344.sd, "p_1621->g_1344.sd", print_hash_value);
    transparent_crc(p_1621->g_1344.se, "p_1621->g_1344.se", print_hash_value);
    transparent_crc(p_1621->g_1344.sf, "p_1621->g_1344.sf", print_hash_value);
    transparent_crc(p_1621->g_1347.s0, "p_1621->g_1347.s0", print_hash_value);
    transparent_crc(p_1621->g_1347.s1, "p_1621->g_1347.s1", print_hash_value);
    transparent_crc(p_1621->g_1347.s2, "p_1621->g_1347.s2", print_hash_value);
    transparent_crc(p_1621->g_1347.s3, "p_1621->g_1347.s3", print_hash_value);
    transparent_crc(p_1621->g_1347.s4, "p_1621->g_1347.s4", print_hash_value);
    transparent_crc(p_1621->g_1347.s5, "p_1621->g_1347.s5", print_hash_value);
    transparent_crc(p_1621->g_1347.s6, "p_1621->g_1347.s6", print_hash_value);
    transparent_crc(p_1621->g_1347.s7, "p_1621->g_1347.s7", print_hash_value);
    transparent_crc(p_1621->g_1347.s8, "p_1621->g_1347.s8", print_hash_value);
    transparent_crc(p_1621->g_1347.s9, "p_1621->g_1347.s9", print_hash_value);
    transparent_crc(p_1621->g_1347.sa, "p_1621->g_1347.sa", print_hash_value);
    transparent_crc(p_1621->g_1347.sb, "p_1621->g_1347.sb", print_hash_value);
    transparent_crc(p_1621->g_1347.sc, "p_1621->g_1347.sc", print_hash_value);
    transparent_crc(p_1621->g_1347.sd, "p_1621->g_1347.sd", print_hash_value);
    transparent_crc(p_1621->g_1347.se, "p_1621->g_1347.se", print_hash_value);
    transparent_crc(p_1621->g_1347.sf, "p_1621->g_1347.sf", print_hash_value);
    transparent_crc(p_1621->g_1377.s0, "p_1621->g_1377.s0", print_hash_value);
    transparent_crc(p_1621->g_1377.s1, "p_1621->g_1377.s1", print_hash_value);
    transparent_crc(p_1621->g_1377.s2, "p_1621->g_1377.s2", print_hash_value);
    transparent_crc(p_1621->g_1377.s3, "p_1621->g_1377.s3", print_hash_value);
    transparent_crc(p_1621->g_1377.s4, "p_1621->g_1377.s4", print_hash_value);
    transparent_crc(p_1621->g_1377.s5, "p_1621->g_1377.s5", print_hash_value);
    transparent_crc(p_1621->g_1377.s6, "p_1621->g_1377.s6", print_hash_value);
    transparent_crc(p_1621->g_1377.s7, "p_1621->g_1377.s7", print_hash_value);
    transparent_crc(p_1621->g_1377.s8, "p_1621->g_1377.s8", print_hash_value);
    transparent_crc(p_1621->g_1377.s9, "p_1621->g_1377.s9", print_hash_value);
    transparent_crc(p_1621->g_1377.sa, "p_1621->g_1377.sa", print_hash_value);
    transparent_crc(p_1621->g_1377.sb, "p_1621->g_1377.sb", print_hash_value);
    transparent_crc(p_1621->g_1377.sc, "p_1621->g_1377.sc", print_hash_value);
    transparent_crc(p_1621->g_1377.sd, "p_1621->g_1377.sd", print_hash_value);
    transparent_crc(p_1621->g_1377.se, "p_1621->g_1377.se", print_hash_value);
    transparent_crc(p_1621->g_1377.sf, "p_1621->g_1377.sf", print_hash_value);
    transparent_crc(p_1621->g_1395.s0, "p_1621->g_1395.s0", print_hash_value);
    transparent_crc(p_1621->g_1395.s1, "p_1621->g_1395.s1", print_hash_value);
    transparent_crc(p_1621->g_1395.s2, "p_1621->g_1395.s2", print_hash_value);
    transparent_crc(p_1621->g_1395.s3, "p_1621->g_1395.s3", print_hash_value);
    transparent_crc(p_1621->g_1395.s4, "p_1621->g_1395.s4", print_hash_value);
    transparent_crc(p_1621->g_1395.s5, "p_1621->g_1395.s5", print_hash_value);
    transparent_crc(p_1621->g_1395.s6, "p_1621->g_1395.s6", print_hash_value);
    transparent_crc(p_1621->g_1395.s7, "p_1621->g_1395.s7", print_hash_value);
    transparent_crc(p_1621->g_1395.s8, "p_1621->g_1395.s8", print_hash_value);
    transparent_crc(p_1621->g_1395.s9, "p_1621->g_1395.s9", print_hash_value);
    transparent_crc(p_1621->g_1395.sa, "p_1621->g_1395.sa", print_hash_value);
    transparent_crc(p_1621->g_1395.sb, "p_1621->g_1395.sb", print_hash_value);
    transparent_crc(p_1621->g_1395.sc, "p_1621->g_1395.sc", print_hash_value);
    transparent_crc(p_1621->g_1395.sd, "p_1621->g_1395.sd", print_hash_value);
    transparent_crc(p_1621->g_1395.se, "p_1621->g_1395.se", print_hash_value);
    transparent_crc(p_1621->g_1395.sf, "p_1621->g_1395.sf", print_hash_value);
    transparent_crc(p_1621->g_1397.s0, "p_1621->g_1397.s0", print_hash_value);
    transparent_crc(p_1621->g_1397.s1, "p_1621->g_1397.s1", print_hash_value);
    transparent_crc(p_1621->g_1397.s2, "p_1621->g_1397.s2", print_hash_value);
    transparent_crc(p_1621->g_1397.s3, "p_1621->g_1397.s3", print_hash_value);
    transparent_crc(p_1621->g_1397.s4, "p_1621->g_1397.s4", print_hash_value);
    transparent_crc(p_1621->g_1397.s5, "p_1621->g_1397.s5", print_hash_value);
    transparent_crc(p_1621->g_1397.s6, "p_1621->g_1397.s6", print_hash_value);
    transparent_crc(p_1621->g_1397.s7, "p_1621->g_1397.s7", print_hash_value);
    transparent_crc(p_1621->g_1397.s8, "p_1621->g_1397.s8", print_hash_value);
    transparent_crc(p_1621->g_1397.s9, "p_1621->g_1397.s9", print_hash_value);
    transparent_crc(p_1621->g_1397.sa, "p_1621->g_1397.sa", print_hash_value);
    transparent_crc(p_1621->g_1397.sb, "p_1621->g_1397.sb", print_hash_value);
    transparent_crc(p_1621->g_1397.sc, "p_1621->g_1397.sc", print_hash_value);
    transparent_crc(p_1621->g_1397.sd, "p_1621->g_1397.sd", print_hash_value);
    transparent_crc(p_1621->g_1397.se, "p_1621->g_1397.se", print_hash_value);
    transparent_crc(p_1621->g_1397.sf, "p_1621->g_1397.sf", print_hash_value);
    transparent_crc(p_1621->g_1401.s0, "p_1621->g_1401.s0", print_hash_value);
    transparent_crc(p_1621->g_1401.s1, "p_1621->g_1401.s1", print_hash_value);
    transparent_crc(p_1621->g_1401.s2, "p_1621->g_1401.s2", print_hash_value);
    transparent_crc(p_1621->g_1401.s3, "p_1621->g_1401.s3", print_hash_value);
    transparent_crc(p_1621->g_1401.s4, "p_1621->g_1401.s4", print_hash_value);
    transparent_crc(p_1621->g_1401.s5, "p_1621->g_1401.s5", print_hash_value);
    transparent_crc(p_1621->g_1401.s6, "p_1621->g_1401.s6", print_hash_value);
    transparent_crc(p_1621->g_1401.s7, "p_1621->g_1401.s7", print_hash_value);
    transparent_crc(p_1621->g_1401.s8, "p_1621->g_1401.s8", print_hash_value);
    transparent_crc(p_1621->g_1401.s9, "p_1621->g_1401.s9", print_hash_value);
    transparent_crc(p_1621->g_1401.sa, "p_1621->g_1401.sa", print_hash_value);
    transparent_crc(p_1621->g_1401.sb, "p_1621->g_1401.sb", print_hash_value);
    transparent_crc(p_1621->g_1401.sc, "p_1621->g_1401.sc", print_hash_value);
    transparent_crc(p_1621->g_1401.sd, "p_1621->g_1401.sd", print_hash_value);
    transparent_crc(p_1621->g_1401.se, "p_1621->g_1401.se", print_hash_value);
    transparent_crc(p_1621->g_1401.sf, "p_1621->g_1401.sf", print_hash_value);
    transparent_crc(p_1621->g_1404.s0, "p_1621->g_1404.s0", print_hash_value);
    transparent_crc(p_1621->g_1404.s1, "p_1621->g_1404.s1", print_hash_value);
    transparent_crc(p_1621->g_1404.s2, "p_1621->g_1404.s2", print_hash_value);
    transparent_crc(p_1621->g_1404.s3, "p_1621->g_1404.s3", print_hash_value);
    transparent_crc(p_1621->g_1404.s4, "p_1621->g_1404.s4", print_hash_value);
    transparent_crc(p_1621->g_1404.s5, "p_1621->g_1404.s5", print_hash_value);
    transparent_crc(p_1621->g_1404.s6, "p_1621->g_1404.s6", print_hash_value);
    transparent_crc(p_1621->g_1404.s7, "p_1621->g_1404.s7", print_hash_value);
    transparent_crc(p_1621->g_1404.s8, "p_1621->g_1404.s8", print_hash_value);
    transparent_crc(p_1621->g_1404.s9, "p_1621->g_1404.s9", print_hash_value);
    transparent_crc(p_1621->g_1404.sa, "p_1621->g_1404.sa", print_hash_value);
    transparent_crc(p_1621->g_1404.sb, "p_1621->g_1404.sb", print_hash_value);
    transparent_crc(p_1621->g_1404.sc, "p_1621->g_1404.sc", print_hash_value);
    transparent_crc(p_1621->g_1404.sd, "p_1621->g_1404.sd", print_hash_value);
    transparent_crc(p_1621->g_1404.se, "p_1621->g_1404.se", print_hash_value);
    transparent_crc(p_1621->g_1404.sf, "p_1621->g_1404.sf", print_hash_value);
    transparent_crc(p_1621->g_1442.x, "p_1621->g_1442.x", print_hash_value);
    transparent_crc(p_1621->g_1442.y, "p_1621->g_1442.y", print_hash_value);
    transparent_crc(p_1621->g_1452.x, "p_1621->g_1452.x", print_hash_value);
    transparent_crc(p_1621->g_1452.y, "p_1621->g_1452.y", print_hash_value);
    transparent_crc(p_1621->g_1475.s0, "p_1621->g_1475.s0", print_hash_value);
    transparent_crc(p_1621->g_1475.s1, "p_1621->g_1475.s1", print_hash_value);
    transparent_crc(p_1621->g_1475.s2, "p_1621->g_1475.s2", print_hash_value);
    transparent_crc(p_1621->g_1475.s3, "p_1621->g_1475.s3", print_hash_value);
    transparent_crc(p_1621->g_1475.s4, "p_1621->g_1475.s4", print_hash_value);
    transparent_crc(p_1621->g_1475.s5, "p_1621->g_1475.s5", print_hash_value);
    transparent_crc(p_1621->g_1475.s6, "p_1621->g_1475.s6", print_hash_value);
    transparent_crc(p_1621->g_1475.s7, "p_1621->g_1475.s7", print_hash_value);
    transparent_crc(p_1621->g_1489.s0, "p_1621->g_1489.s0", print_hash_value);
    transparent_crc(p_1621->g_1489.s1, "p_1621->g_1489.s1", print_hash_value);
    transparent_crc(p_1621->g_1489.s2, "p_1621->g_1489.s2", print_hash_value);
    transparent_crc(p_1621->g_1489.s3, "p_1621->g_1489.s3", print_hash_value);
    transparent_crc(p_1621->g_1489.s4, "p_1621->g_1489.s4", print_hash_value);
    transparent_crc(p_1621->g_1489.s5, "p_1621->g_1489.s5", print_hash_value);
    transparent_crc(p_1621->g_1489.s6, "p_1621->g_1489.s6", print_hash_value);
    transparent_crc(p_1621->g_1489.s7, "p_1621->g_1489.s7", print_hash_value);
    transparent_crc(p_1621->g_1502.s0, "p_1621->g_1502.s0", print_hash_value);
    transparent_crc(p_1621->g_1502.s1, "p_1621->g_1502.s1", print_hash_value);
    transparent_crc(p_1621->g_1502.s2, "p_1621->g_1502.s2", print_hash_value);
    transparent_crc(p_1621->g_1502.s3, "p_1621->g_1502.s3", print_hash_value);
    transparent_crc(p_1621->g_1502.s4, "p_1621->g_1502.s4", print_hash_value);
    transparent_crc(p_1621->g_1502.s5, "p_1621->g_1502.s5", print_hash_value);
    transparent_crc(p_1621->g_1502.s6, "p_1621->g_1502.s6", print_hash_value);
    transparent_crc(p_1621->g_1502.s7, "p_1621->g_1502.s7", print_hash_value);
    transparent_crc(p_1621->g_1510, "p_1621->g_1510", print_hash_value);
    transparent_crc(p_1621->v_collective, "p_1621->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 99; i++)
            transparent_crc(p_1621->g_special_values[i + 99 * get_linear_group_id()], "p_1621->g_special_values[i + 99 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 99; i++)
            transparent_crc(p_1621->l_special_values[i], "p_1621->l_special_values[i]", print_hash_value);
    transparent_crc(p_1621->l_comm_values[get_linear_local_id()], "p_1621->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1621->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()], "p_1621->g_comm_values[get_linear_group_id() * 95 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
