// --atomics 8 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,33,3 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{34,21,52,65,2,16,63,23,17,74,1,29,36,7,18,32,43,4,13,59,27,73,24,57,12,69,77,5,15,56,9,22,28,51,26,25,76,44,60,42,8,58,78,30,11,14,71,38,3,70,61,20,31,6,19,64,67,47,10,0,66,35,53,45,39,54,50,55,72,68,40,41,37,62,46,48,49,33,75}, // permutation 0
{21,27,17,29,31,30,8,57,9,55,24,42,66,54,28,49,0,6,53,12,61,48,78,23,7,76,46,63,74,69,38,45,47,41,44,72,18,70,26,37,64,22,1,62,15,39,58,13,68,5,3,11,60,35,34,32,10,67,20,65,43,19,56,50,73,40,14,36,77,33,16,2,25,51,59,71,4,75,52}, // permutation 1
{1,70,54,26,75,66,73,45,12,59,34,35,19,27,18,40,63,30,47,44,52,33,65,13,43,46,42,38,4,14,37,11,8,7,56,71,24,60,57,23,28,51,77,0,64,74,3,72,49,61,55,62,68,22,67,17,50,10,5,53,15,20,29,76,39,31,21,25,36,58,69,9,2,6,48,41,78,32,16}, // permutation 2
{25,75,42,49,19,1,60,22,34,56,37,63,74,18,76,69,30,26,62,38,13,77,41,73,44,51,64,50,6,33,29,24,16,40,47,32,70,46,31,28,57,68,15,66,55,9,36,35,14,8,10,20,71,17,3,67,58,39,27,54,48,59,5,12,7,45,0,21,43,61,11,72,52,65,4,2,53,78,23}, // permutation 3
{37,6,10,12,27,1,8,78,15,68,28,14,57,75,4,17,23,61,63,69,56,64,58,0,74,30,39,55,51,16,54,34,2,9,66,77,3,33,71,41,72,76,35,13,26,43,20,29,32,22,46,47,21,31,59,40,45,70,36,53,67,48,38,5,49,11,62,24,44,73,60,7,18,50,65,25,52,19,42}, // permutation 4
{19,57,4,0,33,25,46,78,52,3,34,36,23,22,51,14,10,53,47,11,71,60,59,40,20,30,63,70,66,9,54,12,1,58,67,69,72,21,68,31,55,41,37,28,76,24,6,61,44,7,43,56,50,2,29,32,64,73,26,77,42,35,62,16,18,5,49,74,48,13,15,75,39,17,38,27,8,65,45}, // permutation 5
{63,76,16,34,1,65,17,14,43,52,42,3,47,22,26,18,25,74,45,19,33,46,7,75,54,38,0,13,70,31,23,57,28,10,69,66,51,32,73,61,8,36,49,60,67,24,59,48,39,72,11,40,2,62,71,4,12,29,53,41,5,55,20,50,44,64,27,21,58,56,37,68,30,6,15,77,9,35,78}, // permutation 6
{54,62,29,4,50,26,51,58,66,10,40,20,17,77,1,36,56,11,9,8,2,25,64,14,5,31,73,32,59,52,22,61,3,55,71,41,46,34,72,0,60,12,47,43,44,6,27,37,57,75,38,21,33,67,45,49,28,39,68,78,42,70,18,65,23,19,69,7,74,16,35,24,30,13,15,53,48,63,76}, // permutation 7
{25,10,54,36,67,9,73,6,33,68,31,76,16,56,50,74,70,45,71,37,29,32,4,11,38,51,48,21,26,24,39,40,5,49,44,53,17,66,22,61,19,62,30,60,7,52,12,35,1,75,78,69,18,0,13,27,55,41,77,65,28,2,20,58,59,57,63,47,46,42,23,72,15,43,64,3,14,8,34}, // permutation 8
{49,23,29,20,77,53,19,71,42,7,15,68,52,38,76,13,70,11,2,57,67,33,73,65,63,10,58,66,48,32,78,31,9,44,46,37,26,14,36,34,27,59,75,8,74,0,72,5,61,69,55,45,60,17,3,24,22,39,18,56,28,47,43,51,16,4,1,21,35,30,62,50,12,41,40,6,64,25,54} // permutation 9
};

// Seed: 3120020320

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   volatile int16_t  f1;
   volatile uint32_t  f2;
   int32_t  f3;
   volatile int32_t  f4;
};

union U1 {
   uint64_t  f0;
   volatile struct S0  f1;
   volatile uint8_t  f2;
   struct S0  f3;
   uint32_t  f4;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3[1];
    int32_t g_4;
    uint16_t g_15;
    int16_t g_17;
    int16_t g_19;
    uint32_t g_28;
    struct S0 *g_38;
    struct S0 g_41;
    int32_t ** volatile g_42;
    volatile int32_t g_68;
    struct S0 g_83;
    int32_t *g_88;
    int32_t **g_87;
    VECTOR(uint16_t, 2) g_99;
    VECTOR(uint64_t, 16) g_113;
    uint32_t g_119;
    VECTOR(uint32_t, 16) g_124;
    VECTOR(uint32_t, 16) g_128;
    VECTOR(uint8_t, 8) g_137;
    uint16_t g_138;
    VECTOR(uint32_t, 4) g_149;
    VECTOR(uint32_t, 4) g_150;
    int32_t g_153;
    uint64_t g_159[9];
    VECTOR(uint16_t, 2) g_163;
    VECTOR(uint32_t, 16) g_205;
    int32_t g_208;
    int32_t g_209;
    int32_t g_221[3];
    volatile VECTOR(int8_t, 2) g_279;
    VECTOR(int8_t, 8) g_280;
    VECTOR(int8_t, 4) g_284;
    VECTOR(uint64_t, 16) g_288;
    VECTOR(int16_t, 4) g_298;
    volatile VECTOR(int8_t, 8) g_310;
    union U1 g_360;
    uint32_t g_362;
    int8_t g_364;
    struct S0 g_391;
    uint32_t *g_393;
    int32_t g_436;
    volatile struct S0 g_441;
    volatile VECTOR(int8_t, 8) g_453;
    union U1 g_463[4];
    volatile uint32_t *g_464;
    VECTOR(int32_t, 2) g_536;
    uint32_t g_547;
    VECTOR(int16_t, 4) g_549;
    VECTOR(uint32_t, 16) g_554;
    volatile VECTOR(uint32_t, 2) g_555;
    volatile VECTOR(int8_t, 2) g_567;
    VECTOR(int16_t, 2) g_573;
    uint32_t *g_588;
    struct S0 g_612[2];
    volatile struct S0 g_641;
    volatile struct S0 * volatile g_642;
    volatile VECTOR(uint8_t, 8) g_653;
    int64_t *g_655;
    volatile struct S0 g_682;
    volatile struct S0 g_683;
    uint8_t g_687;
    struct S0 g_693;
    struct S0 g_694;
    struct S0 g_695;
    struct S0 g_697[1][5];
    VECTOR(int8_t, 16) g_713;
    VECTOR(uint64_t, 8) g_720;
    union U1 *g_738;
    union U1 ** volatile g_737;
    volatile union U1 g_739;
    VECTOR(int32_t, 8) g_748;
    volatile VECTOR(uint32_t, 4) g_825;
    volatile VECTOR(int32_t, 8) g_829;
    volatile VECTOR(int16_t, 2) g_831;
    volatile struct S0 g_839;
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
uint16_t  func_1(struct S2 * p_894);
int32_t * func_7(int64_t  p_8, int32_t * p_9, uint32_t  p_10, uint32_t  p_11, int32_t * p_12, struct S2 * p_894);
int16_t  func_23(int32_t * p_24, uint32_t  p_25, uint8_t  p_26, struct S2 * p_894);
int32_t * func_32(uint64_t  p_33, struct S2 * p_894);
uint64_t  func_43(uint64_t  p_44, int32_t * p_45, struct S0 * p_46, uint32_t  p_47, struct S2 * p_894);
struct S0 * func_49(int32_t  p_50, struct S2 * p_894);
int64_t  func_57(int64_t  p_58, struct S2 * p_894);
uint32_t  func_61(int64_t  p_62, int16_t * p_63, int16_t * p_64, int16_t  p_65, struct S2 * p_894);
struct S0  func_74(int16_t * p_75, int32_t  p_76, uint32_t  p_77, int32_t  p_78, uint32_t  p_79, struct S2 * p_894);
int32_t  func_84(int32_t ** p_85, int32_t  p_86, struct S2 * p_894);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_894->g_4 p_894->g_15 p_894->g_17 p_894->g_28 p_894->g_3 p_894->g_38 p_894->g_436 p_894->g_441 p_894->g_463 p_894->g_464 p_894->g_153 p_894->g_288 p_894->g_612.f3 p_894->g_138 p_894->g_536 p_894->g_641 p_894->g_87 p_894->g_554 p_894->g_682 p_894->g_83.f4 p_894->g_687 p_894->g_573 p_894->g_comm_values p_894->g_150 p_894->g_205 p_894->g_737 p_894->g_739 p_894->g_720 p_894->g_41.f3 p_894->g_88 p_894->g_694.f3 p_894->g_364 p_894->g_159
 * writes: p_894->g_4 p_894->g_17 p_894->g_28 p_894->g_436 p_894->g_153 p_894->g_38 p_894->g_536 p_894->g_208 p_894->g_641 p_894->g_88 p_894->g_683 p_894->g_163 p_894->g_738 p_894->g_99 p_894->g_360.f3.f3 p_894->g_694.f3 p_894->g_364
 */
uint16_t  func_1(struct S2 * p_894)
{ /* block id: 4 */
    int16_t *l_18 = &p_894->g_19;
    int32_t l_29[1];
    int32_t l_854 = (-1L);
    int64_t l_856 = 0L;
    uint16_t l_857[3][10] = {{0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL},{0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL},{0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL,0x7E5CL}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_29[i] = 0x44D99649L;
    for (p_894->g_4 = 14; (p_894->g_4 != 23); p_894->g_4++)
    { /* block id: 7 */
        int16_t *l_16[1];
        int32_t l_20 = 8L;
        uint32_t *l_27 = &p_894->g_28;
        int16_t *l_855 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_16[i] = &p_894->g_17;
        (*p_894->g_87) = (FAKE_DIVERGE(p_894->local_2_offset, get_local_id(2), 10) , func_7(((safe_mod_func_uint8_t_u_u(((p_894->g_15 , (p_894->g_17 |= p_894->g_15)) ^ ((l_18 == ((l_20 || (GROUP_DIVERGE(1, 1) >= (safe_lshift_func_int16_t_s_s(func_23(&l_20, ((*l_27) = l_20), l_29[0], p_894), (l_854 = p_894->g_159[6]))))) , l_855)) > 0xEBL)), 9UL)) , l_856), &p_894->g_4, p_894->g_205.sa, l_857[2][9], &p_894->g_4, p_894));
    }
    return p_894->g_288.s0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_7(int64_t  p_8, int32_t * p_9, uint32_t  p_10, uint32_t  p_11, int32_t * p_12, struct S2 * p_894)
{ /* block id: 325 */
    int32_t *l_858 = (void*)0;
    int32_t *l_859 = &p_894->g_208;
    int32_t *l_860 = &p_894->g_436;
    int32_t *l_861 = (void*)0;
    int32_t l_862 = 0x2678655FL;
    int32_t *l_863 = &l_862;
    int32_t *l_864 = (void*)0;
    int32_t l_865 = 0x055ED290L;
    int32_t *l_866 = (void*)0;
    int32_t *l_867 = (void*)0;
    int32_t *l_868 = (void*)0;
    int32_t *l_869 = (void*)0;
    int32_t l_870 = 0L;
    int32_t *l_871 = &l_862;
    int32_t *l_872 = &p_894->g_436;
    int32_t *l_873 = &l_870;
    int32_t *l_874 = (void*)0;
    int32_t *l_875 = &l_865;
    int32_t *l_876 = &p_894->g_436;
    int32_t *l_877 = &l_862;
    int32_t l_878 = 1L;
    int32_t *l_879 = &l_865;
    int32_t *l_880 = &l_862;
    int32_t *l_881 = &l_878;
    int32_t *l_882 = (void*)0;
    int32_t *l_883 = &p_894->g_208;
    int32_t *l_884 = &p_894->g_436;
    int32_t *l_885 = &p_894->g_436;
    int32_t *l_886 = (void*)0;
    int32_t *l_887 = &l_870;
    int32_t l_888 = 0x75C0E1ECL;
    int32_t *l_889[6][7][2] = {{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}},{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}},{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}},{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}},{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}},{{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4},{(void*)0,&p_894->g_4}}};
    uint32_t l_890 = 7UL;
    int32_t *l_893 = &p_894->g_208;
    int i, j, k;
    l_890++;
    return l_893;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_28 p_894->g_3 p_894->g_38 p_894->g_15 p_894->g_4 p_894->g_436 p_894->g_441 p_894->g_463 p_894->g_464 p_894->g_153 p_894->g_288 p_894->g_612.f3 p_894->g_138 p_894->g_536 p_894->g_641 p_894->g_87 p_894->g_554 p_894->g_682 p_894->g_83.f4 p_894->g_687 p_894->g_573 p_894->g_comm_values p_894->g_150 p_894->g_205 p_894->g_737 p_894->g_739 p_894->g_720 p_894->g_41.f3 p_894->g_88 p_894->g_694.f3 p_894->g_364 p_894->g_825 p_894->g_829 p_894->g_831 p_894->g_83.f0 p_894->g_839 p_894->g_693.f3 p_894->g_284 p_894->g_697.f3
 * writes: p_894->g_28 p_894->g_436 p_894->g_153 p_894->g_38 p_894->g_536 p_894->g_208 p_894->g_641 p_894->g_88 p_894->g_683 p_894->g_163 p_894->g_738 p_894->g_99 p_894->g_360.f3.f3 p_894->g_694.f3 p_894->g_364 p_894->g_138 p_894->g_362
 */
int16_t  func_23(int32_t * p_24, uint32_t  p_25, uint8_t  p_26, struct S2 * p_894)
{ /* block id: 10 */
    uint8_t l_619 = 0xE5L;
    int32_t l_626 = 9L;
    int64_t *l_649[2];
    int32_t l_650 = 0x2C44AB90L;
    VECTOR(int32_t, 8) l_665 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L));
    int32_t l_681 = 0x67984269L;
    uint64_t *l_730 = &p_894->g_463[2].f0;
    uint8_t *l_749 = &l_619;
    int8_t l_778 = (-1L);
    int64_t l_789 = 6L;
    int32_t l_790 = 0L;
    VECTOR(int16_t, 2) l_797 = (VECTOR(int16_t, 2))(0L, 0x1924L);
    uint64_t l_798 = 0xB6931D1763702444L;
    VECTOR(uint32_t, 4) l_826 = (VECTOR(uint32_t, 4))(0xEDE06BEBL, (VECTOR(uint32_t, 2))(0xEDE06BEBL, 7UL), 7UL);
    VECTOR(int16_t, 2) l_833 = (VECTOR(int16_t, 2))(0x2386L, 1L);
    VECTOR(int16_t, 8) l_834 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int16_t, 4) l_835 = (VECTOR(int16_t, 4))(0x5F58L, (VECTOR(int16_t, 2))(0x5F58L, 0x6C48L), 0x6C48L);
    VECTOR(int8_t, 8) l_838 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    int32_t *l_849 = &l_650;
    int32_t *l_850[8][1][3] = {{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}},{{&p_894->g_4,&l_626,&l_626}}};
    uint64_t l_851 = 0x05376CB07F642E51L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_649[i] = (void*)0;
    if (p_894->g_28)
    { /* block id: 11 */
        struct S0 *l_611 = &p_894->g_612[1];
        int32_t l_633 = 0x1E56B097L;
        uint8_t l_634 = 1UL;
        struct S0 **l_635 = &l_611;
        int32_t l_638 = (-10L);
        VECTOR(uint8_t, 4) l_647 = (VECTOR(uint8_t, 4))(0x92L, (VECTOR(uint8_t, 2))(0x92L, 3UL), 3UL);
        VECTOR(uint8_t, 4) l_667 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL);
        VECTOR(uint64_t, 2) l_704 = (VECTOR(uint64_t, 2))(0UL, 0x682F0C332CD33731L);
        VECTOR(int32_t, 4) l_729 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x718D5163L), 0x718D5163L);
        int32_t l_756[2][6] = {{0L,(-10L),0L,0L,(-10L),0L},{0L,(-10L),0L,0L,(-10L),0L}};
        int64_t l_779 = 0x54537D9796F276D3L;
        union U1 *l_783 = &p_894->g_360;
        int i, j;
        for (p_26 = 1; (p_26 == 9); p_26++)
        { /* block id: 14 */
            uint8_t l_51 = 0xCEL;
            struct S0 **l_610 = &p_894->g_38;
            int32_t *l_617 = (void*)0;
            int32_t *l_618[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            struct S0 *l_627 = (void*)0;
            uint64_t *l_632[9][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            p_24 = func_32(p_894->g_3[0], p_894);
            p_894->g_536.x ^= ((l_633 |= func_43(((((safe_unary_minus_func_uint16_t_u(p_894->g_15)) , ((*l_610) = ((*p_24) , func_49(l_51, p_894)))) != (p_894->g_288.s3 , l_611)) | ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(p_26, (l_619 |= (*p_24)))) | (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-8L), 0x52L)))).even > ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((FAKE_DIVERGE(p_894->global_0_offset, get_global_id(0), 10) , (((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))((-2L), 1L)).even, 3)) != (*p_24)) || 0x1C04L)) != l_626), 5)) != (-1L)) , p_894->g_612[1].f3), 3)) <= l_626))), 0xACL)) && p_894->g_288.s5)), p_24, l_627, p_894->g_138, p_894)) > l_634);
        }
        (*l_635) = (void*)0;
        for (l_633 = (-4); (l_633 <= 5); l_633++)
        { /* block id: 235 */
            int64_t *l_654 = (void*)0;
            int64_t l_676 = 0x35A9F8DF216A0312L;
            struct S0 *l_692[9] = {&p_894->g_694,&p_894->g_695,&p_894->g_694,&p_894->g_694,&p_894->g_695,&p_894->g_694,&p_894->g_694,&p_894->g_695,&p_894->g_694};
            uint64_t *l_724 = &p_894->g_360.f0;
            uint64_t *l_735 = &p_894->g_159[5];
            union U1 *l_736 = &p_894->g_360;
            uint8_t *l_750 = &l_634;
            int32_t l_755 = 0x4D8F3D75L;
            uint16_t l_757 = 0x1108L;
            int i;
            l_638 = (-8L);
            for (p_894->g_208 = 0; (p_894->g_208 > (-12)); --p_894->g_208)
            { /* block id: 239 */
                volatile struct S0 *l_643 = &p_894->g_641;
                VECTOR(uint8_t, 4) l_646 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x85L), 0x85L);
                union U1 *l_662 = &p_894->g_360;
                int32_t l_702 = 0x110284DAL;
                int32_t l_703 = 0x6C625493L;
                uint64_t l_710 = 18446744073709551615UL;
                VECTOR(uint64_t, 2) l_719 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL);
                VECTOR(uint64_t, 4) l_721 = (VECTOR(uint64_t, 4))(0x8E93DE5149DDAD25L, (VECTOR(uint64_t, 2))(0x8E93DE5149DDAD25L, 0UL), 0UL);
                uint64_t l_734[4] = {0x821C4A95E28EF6C4L,0x821C4A95E28EF6C4L,0x821C4A95E28EF6C4L,0x821C4A95E28EF6C4L};
                int32_t *l_753 = (void*)0;
                int32_t *l_754[2][4][2] = {{{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0}},{{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0},{&p_894->g_4,(void*)0}}};
                int i, j, k;
                (*l_643) = p_894->g_641;
                if ((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_646.zw)), 0x67L, 0x08L)).odd))).hi)))
                { /* block id: 241 */
                    VECTOR(int16_t, 16) l_648 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x3CBFL), 0x3CBFL), 0x3CBFL, (-3L), 0x3CBFL, (VECTOR(int16_t, 2))((-3L), 0x3CBFL), (VECTOR(int16_t, 2))((-3L), 0x3CBFL), (-3L), 0x3CBFL, (-3L), 0x3CBFL);
                    int64_t **l_656 = &l_649[1];
                    uint32_t *l_659 = &p_894->g_119;
                    int32_t *l_660 = (void*)0;
                    int32_t *l_661[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    VECTOR(int16_t, 2) l_666 = (VECTOR(int16_t, 2))((-5L), 0x5E8CL);
                    uint8_t *l_709 = &l_634;
                    uint16_t *l_718[3];
                    int16_t *l_731 = (void*)0;
                    int16_t *l_732 = (void*)0;
                    int16_t *l_733 = &p_894->g_19;
                    VECTOR(int8_t, 16) l_742 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2BL), 0x2BL), 0x2BL, 0L, 0x2BL, (VECTOR(int8_t, 2))(0L, 0x2BL), (VECTOR(int8_t, 2))(0L, 0x2BL), 0L, 0x2BL, 0L, 0x2BL);
                    int32_t ***l_743 = &p_894->g_87;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_718[i] = &p_894->g_138;
                    if ((p_894->g_536.x = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(l_647.yw))))).hi , ((VECTOR(int16_t, 16))(l_648.s79dd698de07f754e)).s2) | (+(l_619 & ((void*)0 == l_649[1])))), 0x4A73L, 4L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x5CFDL, ((VECTOR(int16_t, 4))((l_650 >= ((p_26 > ((*l_659) = (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_894->g_653.s6102)), (p_894->g_641.f3 && ((l_654 != ((*l_656) = p_894->g_655)) ^ ((safe_add_func_int16_t_s_s(p_25, p_25)) >= 0x1364L))), ((VECTOR(uint8_t, 4))(0x46L)), 0xE9L, 0x58L, 5UL, ((VECTOR(uint8_t, 4))(0UL)))).s633e))).z == p_894->g_364) , p_26))))) ^ 0L)), l_633, 0L, (-8L))), p_26, (-1L), 2L)).even)), (-1L))), 0x247DL, (-7L), 0L, ((VECTOR(int16_t, 2))(6L)), 0L, (-10L), (-1L))), ((VECTOR(uint16_t, 16))(0x8F7EL))))).s09, ((VECTOR(int32_t, 2))(0x68AF9EE9L))))), (int32_t)0x046E677CL))))).xyyxxyyxxxyyxxyx, ((VECTOR(int32_t, 16))(0x46AF1AD3L)), ((VECTOR(int32_t, 16))(0x74D0C429L))))).se))
                    { /* block id: 245 */
                        VECTOR(uint8_t, 4) l_668 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x33L), 0x33L);
                        uint32_t *l_675 = &p_894->g_547;
                        uint16_t *l_677[2][5] = {{(void*)0,&p_894->g_138,(void*)0,&p_894->g_138,(void*)0},{(void*)0,&p_894->g_138,(void*)0,&p_894->g_138,(void*)0}};
                        int32_t l_678 = 0x1DE1A5D5L;
                        int i, j;
                        (*p_894->g_87) = p_24;
                        if ((*p_24))
                            continue;
                        l_662 = l_662;
                        p_894->g_683 = ((((((VECTOR(uint8_t, 8))(0xCDL, 0x70L, ((VECTOR(uint8_t, 2))(251UL, 6UL)), l_646.y, 2UL, 0x6AL, 255UL)).s4 | p_25) & (((((safe_mul_func_int8_t_s_s(p_894->g_441.f2, (p_25 < ((l_638 = ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(l_665.s4270)).odd, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x2221L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x64B5L, 0L)).xxxy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_666.xxxyyxyxxyyxxyyy)).sea)), 0x1DDEL)))).lo, ((VECTOR(int16_t, 2))((-9L), (-4L))).xyxx, ((VECTOR(int16_t, 2))(0L, 0x0BD0L)).xyxy))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(1UL, 0x47L)).yyyx, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_667.xw)), 246UL, 0xCBL)).yzwyxwyz, ((VECTOR(uint8_t, 2))(0UL, 0x7DL)).yyxyyxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_668.yzyx)).zyxzyzxxxwxwzywy)).hi))).hi))), 7UL, p_894->g_221[1], 0xB1L, 0x33L)), ((VECTOR(uint8_t, 2))(0x98L, 0x5AL)).yxyxyyxy))).s36, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0x6873L, ((VECTOR(uint16_t, 4))(((safe_div_func_int16_t_s_s((((safe_add_func_int8_t_s_s((((*l_675) = (safe_rshift_func_uint8_t_u_u(0x4FL, FAKE_DIVERGE(p_894->global_1_offset, get_global_id(1), 10)))) , ((l_678 = (+l_676)) || (p_894->g_138 = (safe_add_func_int32_t_s_s(0L, l_681))))), l_667.z)) < 0x1322L) || l_668.x), p_26)) & p_894->g_221[0]), ((VECTOR(uint16_t, 2))(65528UL)), 0UL)), ((VECTOR(uint16_t, 2))(0xC03EL)), 65526UL)).odd)).odd))).yxxxyyyxyxyxyyxx)).s28ac))).odd))).odd) >= l_668.x)))) , (void*)0) != (void*)0) >= GROUP_DIVERGE(1, 1)) <= l_646.w)) >= p_894->g_554.s0) , p_894->g_682);
                    }
                    else
                    { /* block id: 254 */
                        struct S0 *l_696 = &p_894->g_697[0][4];
                        int32_t l_700[7][4];
                        int32_t l_701 = 0x4E8AA550L;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_700[i][j] = (-1L);
                        }
                        l_701 &= (p_894->g_83.f4 != (((((GROUP_DIVERGE(2, 1) , (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(l_646.w)), p_894->g_687))) , (safe_rshift_func_uint16_t_u_s(p_894->g_573.y, (safe_lshift_func_uint16_t_u_s((l_692[8] == l_696), 13))))) != (((1L >= (p_894->g_comm_values[p_894->tid] | (safe_rshift_func_int16_t_s_u((-1L), p_26)))) > p_894->g_150.z) == l_700[5][1])) , l_646.x) , GROUP_DIVERGE(2, 1)));
                        (*p_894->g_87) = p_24;
                        l_704.y--;
                        return p_25;
                    }
                    p_894->g_153 &= (safe_lshift_func_uint8_t_u_s((((*l_709) = 0x9FL) == (((*p_894->g_464) || ((((0x0D2EL != (!p_894->g_288.s9)) && (l_710 && (safe_sub_func_uint16_t_u_u((p_894->g_163.y = (((l_702 = (~(((VECTOR(int8_t, 2))(p_894->g_713.s83)).lo > (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_703 = p_25), 10)), ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(0UL, 1UL)), ((VECTOR(uint64_t, 4))(l_719.yxxx)).odd))), ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_894->g_720.s0331)), ((VECTOR(uint64_t, 2))(1UL, 0x664FA93F9F4D0472L)), 0UL, 18446744073709551607UL)))).s76, ((VECTOR(uint64_t, 2))(l_721.wx))))), ((((GROUP_DIVERGE(2, 1) , func_32((safe_add_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), (p_894->g_536.y = (((void*)0 == l_724) == ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(0xCFB8L, FAKE_DIVERGE(p_894->group_1_offset, get_group_id(1), 10), (l_734[3] = (((*l_733) |= (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((!((((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_729.wz)).yxyyxyxxxyyyyyyx))).sa & (&p_894->g_159[1] == l_730)) || l_676)) | p_26), 6)) , p_26), 3))) , p_26)), ((VECTOR(uint16_t, 8))(0xA7EFL)), 0xD3A6L, ((VECTOR(uint16_t, 4))(0xC8F4L)))), ((VECTOR(uint16_t, 16))(1UL))))).sd5)).xxyyxyyy))).s0)))), p_894)) != (void*)0) , l_735) == l_654), ((VECTOR(uint64_t, 2))(0x52D66F231208EBEDL)), 18446744073709551613UL)).s0 , p_894->g_150.y) == (-1L))))))) & 0x4DAE04D5L) < 1L)), (-6L))))) & l_676) == 0x02L)) >= p_894->g_205.s7)), p_26));
                    (*p_894->g_737) = l_736;
                    p_894->g_536.y |= (p_894->g_739 , (l_734[3] == ((((p_894->g_720.s2 > p_25) & ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_742.s5cd1)).x, l_647.w)) <= ((void*)0 == l_743))) && (safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_894->g_99.x = (((*p_894->g_464) & ((VECTOR(int32_t, 8))(p_894->g_748.s55433705)).s5) > ((l_749 = (void*)0) != l_750))), p_894->g_41.f3)), 0))) , (*p_894->g_88))));
                }
                else
                { /* block id: 272 */
                    (*l_643) = (*l_643);
                    for (p_894->g_360.f3.f3 = 0; (p_894->g_360.f3.f3 >= (-2)); p_894->g_360.f3.f3--)
                    { /* block id: 276 */
                        return p_26;
                    }
                }
                l_757++;
            }
            for (p_894->g_694.f3 = 0; (p_894->g_694.f3 >= 9); p_894->g_694.f3++)
            { /* block id: 284 */
                uint64_t l_780 = 0xDC41BA2361D77495L;
                for (p_894->g_364 = 28; (p_894->g_364 != 7); p_894->g_364--)
                { /* block id: 287 */
                    int32_t *l_764 = &l_650;
                    int32_t *l_765 = &l_650;
                    int32_t *l_766 = &l_755;
                    int32_t *l_767 = &l_755;
                    int32_t *l_768 = &l_626;
                    int32_t *l_769 = (void*)0;
                    int32_t *l_770 = &l_638;
                    int32_t *l_771 = (void*)0;
                    int32_t *l_772 = &p_894->g_436;
                    int32_t *l_773 = &l_755;
                    int32_t *l_774 = &l_638;
                    int32_t *l_775 = (void*)0;
                    int32_t *l_776 = (void*)0;
                    int32_t *l_777[8][10][3] = {{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}},{{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0},{&l_755,&l_633,(void*)0}}};
                    int i, j, k;
                    ++l_780;
                    return p_894->g_720.s7;
                }
                (*p_894->g_737) = l_783;
            }
            p_24 = func_32(p_25, p_894);
        }
        return l_626;
    }
    else
    { /* block id: 296 */
        int32_t *l_784 = &l_626;
        int32_t *l_785 = &l_626;
        int32_t *l_786 = &l_626;
        int32_t *l_787 = &l_650;
        int32_t *l_788[3][3][3] = {{{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436}},{{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436}},{{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436},{&p_894->g_4,&p_894->g_4,&p_894->g_436}}};
        VECTOR(int8_t, 4) l_791 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0L), 0L);
        int16_t l_792 = 0x4D73L;
        uint32_t l_793 = 0x18E34675L;
        int32_t l_796 = 9L;
        VECTOR(uint32_t, 8) l_822 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967288UL, 4294967295UL);
        VECTOR(int32_t, 4) l_830 = (VECTOR(int32_t, 4))(0x58E90577L, (VECTOR(int32_t, 2))(0x58E90577L, 0x286656B3L), 0x286656B3L);
        VECTOR(int16_t, 16) l_832 = (VECTOR(int16_t, 16))(0x4C94L, (VECTOR(int16_t, 4))(0x4C94L, (VECTOR(int16_t, 2))(0x4C94L, 0x51A6L), 0x51A6L), 0x51A6L, 0x4C94L, 0x51A6L, (VECTOR(int16_t, 2))(0x4C94L, 0x51A6L), (VECTOR(int16_t, 2))(0x4C94L, 0x51A6L), 0x4C94L, 0x51A6L, 0x4C94L, 0x51A6L);
        VECTOR(int8_t, 4) l_836 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, (-4L)), (-4L));
        VECTOR(int8_t, 16) l_837 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0L), 0L), 0L, 0x6AL, 0L, (VECTOR(int8_t, 2))(0x6AL, 0L), (VECTOR(int8_t, 2))(0x6AL, 0L), 0x6AL, 0L, 0x6AL, 0L);
        uint16_t *l_846 = &p_894->g_138;
        uint32_t *l_847 = (void*)0;
        uint32_t *l_848 = &p_894->g_362;
        int i, j, k;
        ++l_793;
        l_798--;
        for (p_25 = 0; (p_25 != 8); p_25++)
        { /* block id: 301 */
            if ((atomic_inc(&p_894->l_atomic_input[4]) == 6))
            { /* block id: 303 */
                int32_t l_803 = 0x179B5E47L;
                uint16_t l_810 = 0x53F3L;
                int16_t l_811 = 0x0291L;
                VECTOR(int64_t, 4) l_812 = (VECTOR(int64_t, 4))(0x20E77437F3B9E084L, (VECTOR(int64_t, 2))(0x20E77437F3B9E084L, 0x2CF9A15B05E54818L), 0x2CF9A15B05E54818L);
                VECTOR(int64_t, 16) l_813 = (VECTOR(int64_t, 16))(0x39FAA2730D39E325L, (VECTOR(int64_t, 4))(0x39FAA2730D39E325L, (VECTOR(int64_t, 2))(0x39FAA2730D39E325L, 1L), 1L), 1L, 0x39FAA2730D39E325L, 1L, (VECTOR(int64_t, 2))(0x39FAA2730D39E325L, 1L), (VECTOR(int64_t, 2))(0x39FAA2730D39E325L, 1L), 0x39FAA2730D39E325L, 1L, 0x39FAA2730D39E325L, 1L);
                VECTOR(int64_t, 16) l_814 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x6230C8FB03276BB9L), 0x6230C8FB03276BB9L), 0x6230C8FB03276BB9L, (-2L), 0x6230C8FB03276BB9L, (VECTOR(int64_t, 2))((-2L), 0x6230C8FB03276BB9L), (VECTOR(int64_t, 2))((-2L), 0x6230C8FB03276BB9L), (-2L), 0x6230C8FB03276BB9L, (-2L), 0x6230C8FB03276BB9L);
                int8_t l_815 = (-2L);
                uint16_t l_816 = 0xAC1BL;
                int32_t l_817 = 0x12FE1FEEL;
                int32_t l_818 = 0x1FFBBC1CL;
                union U1 l_819 = {7UL};/* VOLATILE GLOBAL l_819 */
                uint16_t l_820 = 65533UL;
                int32_t l_821 = 0x4E30A68CL;
                int i;
                for (l_803 = 0; (l_803 >= (-8)); l_803 = safe_sub_func_int16_t_s_s(l_803, 5))
                { /* block id: 306 */
                    int32_t l_806 = 0x2B3251C2L;
                    uint32_t l_807 = 0xEF96AF87L;
                    ++l_807;
                }
                l_811 ^= l_810;
                l_821 |= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(l_812.yzxz)).odd, ((VECTOR(int64_t, 2))(l_813.scd)), ((VECTOR(int64_t, 8))(0x6C327E2640804FB1L, ((VECTOR(int64_t, 2))(l_814.sf8)), l_815, (l_817 = (l_816 , ((VECTOR(int64_t, 2))(0x2C1AC9058F54C786L, 2L)).hi)), 1L, (-1L), 0x4C899F96A6C208FBL)).s26))), ((l_818 , l_819) , l_820), 0x03AD9E45AD80215BL, ((VECTOR(int64_t, 2))((-2L), 0x65C0FBC08ADB001CL)), 2L, 1L)).s5 , 0x2A537A8FL);
                unsigned int result = 0;
                result += l_803;
                result += l_810;
                result += l_811;
                result += l_812.w;
                result += l_812.z;
                result += l_812.y;
                result += l_812.x;
                result += l_813.sf;
                result += l_813.se;
                result += l_813.sd;
                result += l_813.sc;
                result += l_813.sb;
                result += l_813.sa;
                result += l_813.s9;
                result += l_813.s8;
                result += l_813.s7;
                result += l_813.s6;
                result += l_813.s5;
                result += l_813.s4;
                result += l_813.s3;
                result += l_813.s2;
                result += l_813.s1;
                result += l_813.s0;
                result += l_814.sf;
                result += l_814.se;
                result += l_814.sd;
                result += l_814.sc;
                result += l_814.sb;
                result += l_814.sa;
                result += l_814.s9;
                result += l_814.s8;
                result += l_814.s7;
                result += l_814.s6;
                result += l_814.s5;
                result += l_814.s4;
                result += l_814.s3;
                result += l_814.s2;
                result += l_814.s1;
                result += l_814.s0;
                result += l_815;
                result += l_816;
                result += l_817;
                result += l_818;
                result += l_819.f0;
                result += l_819.f1.f0;
                result += l_819.f1.f1;
                result += l_819.f1.f2;
                result += l_819.f1.f3;
                result += l_819.f1.f4;
                result += l_819.f2;
                result += l_819.f3.f0;
                result += l_819.f3.f1;
                result += l_819.f3.f2;
                result += l_819.f3.f3;
                result += l_819.f3.f4;
                result += l_819.f4;
                result += l_820;
                result += l_821;
                atomic_add(&p_894->l_special_values[4], result);
            }
            else
            { /* block id: 312 */
                (1 + 1);
            }
        }
        l_665.s4 &= (((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(4294967295UL, ((*l_848) = ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_822.s5446604662210622)).s35)).xxxyxxyxyxyyxyyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((safe_sub_func_uint64_t_u_u(p_894->g_205.sd, 0x3861F0423536CA74L)), ((VECTOR(uint32_t, 4))(p_894->g_825.zzzz)).z, ((VECTOR(uint32_t, 2))(l_826.yx)), 0xEF982152L, 0x6D706D7FL, 0xB089EAEEL, 0xC1458148L)).odd)), ((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_894->global_0_offset, get_global_id(0), 10), (((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_894->g_829.s1033)).odd, ((VECTOR(int32_t, 2))((-1L), (-2L))), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x4371DCB9L, 6L)).yxxxxxyxyxxxxxxx, ((VECTOR(int32_t, 8))(l_830.yywxwxwy)).s2535376176166604))).s40)))))).hi , ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(p_894->g_831.yxxyyyxy)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))((-6L), 1L, 5L, 1L)).xwyyzyxz, ((VECTOR(int16_t, 2))(l_832.sa4)).yxxyxxxx)))))).s23, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_833.xyxy)), p_26, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_834.s33)), (int16_t)p_894->g_83.f0))), (-1L))).s56, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(2L, 0x0E33L)).xyyx, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_835.xx)), 0L, 0L)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(1L, (-1L))).yyyy, ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(l_836.zzxzyyxy)), ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(l_837.sdf0de32d317854d9)).s9d72, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(l_838.s13)).xxxx))), ((VECTOR(int8_t, 4))((p_26 && (FAKE_DIVERGE(p_894->global_1_offset, get_global_id(1), 10) < (p_894->g_839 , (safe_add_func_int32_t_s_s((*p_24), ((p_26 = (safe_lshift_func_uint16_t_u_u(((*l_846) = (p_894->g_3[0] & (safe_add_func_int8_t_s_s(p_894->g_693.f3, p_894->g_284.x)))), GROUP_DIVERGE(2, 1)))) && p_894->g_697[0][4].f3)))))), ((VECTOR(int8_t, 2))(0x48L)), 0L)))).odd))).zxzxxxxx))).s7207327764775654, ((VECTOR(uint8_t, 16))(0x3AL))))).s22d6))))), (int16_t)4L, (int16_t)p_26))).lo))).even))).yxyxxyyyxyxxyyxy)))).sf39c, ((VECTOR(int16_t, 4))(0x3BADL))))).w))) | p_25), 0xAB27CCDFL, 1UL, 0x4979E17FL)).s0250372145144274, ((VECTOR(uint32_t, 16))(0UL))))).even, (uint32_t)p_26))).s5006556251143354)).s11, ((VECTOR(uint32_t, 2))(0x082002E0L)), ((VECTOR(uint32_t, 2))(0x437DADFCL))))).lo), 1UL, 4294967295UL))))).y != 0x429A9A13L);
    }
    l_849 = &l_626;
    l_851++;
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_38
 * writes:
 */
int32_t * func_32(uint64_t  p_33, struct S2 * p_894)
{ /* block id: 15 */
    struct S0 **l_39 = (void*)0;
    struct S0 *l_40 = &p_894->g_41;
    if ((atomic_inc(&p_894->l_atomic_input[0]) == 2))
    { /* block id: 17 */
        uint64_t l_34[5] = {0UL,0UL,0UL,0UL,0UL};
        int8_t l_35 = 5L;
        int32_t l_37 = 0x27649690L;
        int32_t *l_36[3];
        int i;
        for (i = 0; i < 3; i++)
            l_36[i] = &l_37;
        l_35 = (l_34[3] = ((VECTOR(int32_t, 2))((-1L), 0x7A898CBDL)).odd);
        l_36[2] = (void*)0;
        unsigned int result = 0;
        int l_34_i0;
        for (l_34_i0 = 0; l_34_i0 < 5; l_34_i0++) {
            result += l_34[l_34_i0];
        }
        result += l_35;
        result += l_37;
        atomic_add(&p_894->l_special_values[0], result);
    }
    else
    { /* block id: 21 */
        (1 + 1);
    }
    l_40 = p_894->g_38;
    return &p_894->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_436
 * writes: p_894->g_436
 */
uint64_t  func_43(uint64_t  p_44, int32_t * p_45, struct S0 * p_46, uint32_t  p_47, struct S2 * p_894)
{ /* block id: 225 */
    uint8_t l_628 = 0x31L;
    int16_t *l_629 = (void*)0;
    int16_t *l_630[6] = {&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19};
    int32_t *l_631[4] = {&p_894->g_153,&p_894->g_153,&p_894->g_153,&p_894->g_153};
    int i;
    p_894->g_436 ^= ((l_628 , l_629) != (l_630[2] = (void*)0));
    return p_44;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_28 p_894->g_4 p_894->g_436 p_894->g_441 p_894->g_463 p_894->g_464 p_894->g_153
 * writes: p_894->g_28 p_894->g_436 p_894->g_153
 */
struct S0 * func_49(int32_t  p_50, struct S2 * p_894)
{ /* block id: 27 */
    int16_t l_420 = 4L;
    int32_t l_433 = 0x11E947ADL;
    int32_t l_434 = (-1L);
    VECTOR(int8_t, 4) l_448 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-10L)), (-10L));
    uint8_t *l_451 = (void*)0;
    uint16_t *l_502 = (void*)0;
    int32_t ***l_518 = &p_894->g_87;
    VECTOR(int16_t, 16) l_532 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int16_t, 2))(8L, (-1L)), (VECTOR(int16_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
    VECTOR(int32_t, 2) l_537 = (VECTOR(int32_t, 2))((-9L), (-5L));
    VECTOR(uint8_t, 8) l_538 = (VECTOR(uint8_t, 8))(0xF6L, (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 0x56L), 0x56L), 0x56L, 0xF6L, 0x56L);
    VECTOR(uint8_t, 2) l_539 = (VECTOR(uint8_t, 2))(1UL, 0xDCL);
    VECTOR(uint32_t, 16) l_543 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL, (VECTOR(uint32_t, 2))(0UL, 6UL), (VECTOR(uint32_t, 2))(0UL, 6UL), 0UL, 6UL, 0UL, 6UL);
    VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))(0x3C37A7CAL, (VECTOR(int32_t, 2))(0x3C37A7CAL, 0x13C13EDAL), 0x13C13EDAL);
    uint32_t *l_586 = (void*)0;
    int32_t *l_603 = (void*)0;
    int32_t *l_604[6] = {&p_894->g_153,&p_894->g_153,&p_894->g_153,&p_894->g_153,&p_894->g_153,&p_894->g_153};
    int64_t l_605 = 1L;
    uint32_t l_606[10] = {4294967293UL,0x2AFD6A92L,4294967293UL,4294967293UL,0x2AFD6A92L,4294967293UL,4294967293UL,0x2AFD6A92L,4294967293UL,4294967293UL};
    struct S0 *l_609 = &p_894->g_83;
    int i;
    for (p_894->g_28 = (-11); (p_894->g_28 != 6); p_894->g_28 = safe_add_func_uint64_t_u_u(p_894->g_28, 4))
    { /* block id: 30 */
        int64_t l_54 = 0L;
        int16_t *l_66[9] = {&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19,&p_894->g_19};
        int32_t l_419 = 0x6989F726L;
        int8_t *l_421 = &p_894->g_364;
        int32_t *l_435 = &p_894->g_436;
        int i;
        (*l_435) &= (p_894->g_4 , (l_434 = (l_433 = ((l_54 >= ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))((safe_mod_func_int8_t_s_s((func_57(((p_894->g_284.x ^= ((*l_421) = (l_420 = (safe_div_func_uint32_t_u_u(func_61(p_50, l_66[1], &p_894->g_19, (p_894->g_19 = 1L), p_894), (safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0x614A8554CB2093C4L, (safe_lshift_func_int8_t_s_u((p_50 | p_50), 3)))), l_54)), l_419)) | p_894->g_159[7]), 4))))))) != 0x2EL), p_894) != p_50), p_50)), 0UL, ((VECTOR(uint16_t, 4))(0xC565L)), 0x5CA1L, 1UL)))).s7) || 65527UL))));
    }
    l_434 |= p_50;
    for (l_434 = (-4); (l_434 == 12); l_434 = safe_add_func_uint8_t_u_u(l_434, 3))
    { /* block id: 181 */
        VECTOR(int8_t, 16) l_452 = (VECTOR(int8_t, 16))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x03L), 0x03L), 0x03L, 0x2EL, 0x03L, (VECTOR(int8_t, 2))(0x2EL, 0x03L), (VECTOR(int8_t, 2))(0x2EL, 0x03L), 0x2EL, 0x03L, 0x2EL, 0x03L);
        VECTOR(int8_t, 2) l_454 = (VECTOR(int8_t, 2))(0x03L, 0x51L);
        uint32_t *l_465 = (void*)0;
        int32_t *l_466 = &p_894->g_153;
        uint16_t *l_481 = &p_894->g_138;
        uint8_t *l_503 = (void*)0;
        uint8_t *l_504[4][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t *l_505 = &p_894->g_436;
        int64_t *l_523 = (void*)0;
        int64_t *l_524[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int16_t, 16) l_574 = (VECTOR(int16_t, 16))(0x4833L, (VECTOR(int16_t, 4))(0x4833L, (VECTOR(int16_t, 2))(0x4833L, 0x4B0EL), 0x4B0EL), 0x4B0EL, 0x4833L, 0x4B0EL, (VECTOR(int16_t, 2))(0x4833L, 0x4B0EL), (VECTOR(int16_t, 2))(0x4833L, 0x4B0EL), 0x4833L, 0x4B0EL, 0x4833L, 0x4B0EL);
        struct S0 *l_597 = (void*)0;
        int i, j, k;
        (*l_466) |= ((((safe_add_func_int32_t_s_s(1L, (((p_894->g_441 , ((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_448.xw)).xxyyyxxy)), ((safe_mul_func_uint16_t_u_u(((l_451 == l_451) & p_50), 65529UL)) <= ((VECTOR(int16_t, 2))(1L, 0x567BL)).even), 0x7AL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_452.s875e01de)).s61)).xxxy)), 2L, 0x58L)).sad, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_894->g_453.s02)))).xyxx)).yzxzzyyzyxywzxwy, ((VECTOR(int8_t, 4))(p_894->g_124.s6, 0x51L, 0x14L, 1L)).yxywxzxxwzzzywwz))).sb0, ((VECTOR(int8_t, 2))(l_454.yy))))), l_420, ((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_454.y <= 0x8CL), p_50)), 0x33BFL)), p_50)))) ^ l_452.sa), 0x78L, 7L, 2L, 0x47L)).s64, ((VECTOR(int8_t, 2))(0x57L))))).hi , 1L), 8UL)) != p_50), p_50)), l_434)) , p_894->g_463[2]) , p_50) || 8L)) != l_452.s5) >= p_50))) , GROUP_DIVERGE(0, 1)) , p_894->g_464) != l_465);
    }
    l_606[0]--;
    return l_609;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_360.f4 p_894->g_280
 * writes: p_894->g_360.f4
 */
int64_t  func_57(int64_t  p_58, struct S2 * p_894)
{ /* block id: 163 */
    int8_t l_424 = 0x52L;
    int32_t l_430[5];
    int i;
    for (i = 0; i < 5; i++)
        l_430[i] = (-7L);
    for (p_894->g_360.f4 = 24; (p_894->g_360.f4 == 12); p_894->g_360.f4 = safe_sub_func_int8_t_s_s(p_894->g_360.f4, 1))
    { /* block id: 166 */
        VECTOR(uint32_t, 16) l_425 = (VECTOR(uint32_t, 16))(0x79A91944L, (VECTOR(uint32_t, 4))(0x79A91944L, (VECTOR(uint32_t, 2))(0x79A91944L, 4294967290UL), 4294967290UL), 4294967290UL, 0x79A91944L, 4294967290UL, (VECTOR(uint32_t, 2))(0x79A91944L, 4294967290UL), (VECTOR(uint32_t, 2))(0x79A91944L, 4294967290UL), 0x79A91944L, 4294967290UL, 0x79A91944L, 4294967290UL);
        int32_t ***l_431 = (void*)0;
        uint16_t l_432 = 0xC560L;
        int i;
        if (l_424)
            break;
        atomic_and(&p_894->l_atomic_reduction[0], (((((VECTOR(uint32_t, 4))(l_425.s1674)).y <= p_894->g_280.s1) , l_425.sa) , (safe_add_func_uint8_t_u_u(l_424, (safe_lshift_func_int16_t_s_s(((l_430[2] = p_58) , (((void*)0 == l_431) ^ p_58)), 12))))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_894->v_collective += p_894->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (p_58)
            break;
        if (l_432)
            continue;
    }
    return l_430[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_68 p_894->g_38 p_894->g_19 p_894->g_comm_values p_894->g_2 p_894->g_4 p_894->g_87 p_894->g_88 p_894->g_15 p_894->g_99 p_894->g_113 p_894->g_119 p_894->g_124 p_894->g_128 p_894->g_137 p_894->g_138 p_894->l_comm_values p_894->g_149 p_894->g_150 p_894->g_163 p_894->g_153 p_894->g_83.f3 p_894->g_159 p_894->g_205 p_894->g_208 p_894->g_209 p_894->g_298 p_894->g_360 p_894->g_362 p_894->g_364 p_894->g_280 p_894->g_3 p_894->g_391 p_894->g_360.f0 p_894->g_83.f0
 * writes: p_894->g_19 p_894->g_87 p_894->g_119 p_894->g_153 p_894->g_138 p_894->g_163 p_894->g_99 p_894->g_137 p_894->g_205 p_894->g_208 p_894->g_209 p_894->g_88 p_894->g_221 p_894->g_113 p_894->g_362 p_894->g_298 p_894->g_364 p_894->g_83 p_894->g_393 p_894->g_360.f0
 */
uint32_t  func_61(int64_t  p_62, int16_t * p_63, int16_t * p_64, int16_t  p_65, struct S2 * p_894)
{ /* block id: 32 */
    int32_t l_67 = 4L;
    int32_t *l_69 = &l_67;
    uint8_t l_70 = 255UL;
    int32_t *l_71 = &l_67;
    VECTOR(uint32_t, 4) l_222 = (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 6UL), 6UL);
    int32_t l_401 = (-5L);
    int32_t l_402 = 0x0EF6B402L;
    int i;
    l_69 = func_32((l_67 != p_894->g_68), p_894);
    if (((*l_71) = l_70))
    { /* block id: 35 */
        struct S0 *l_82 = &p_894->g_83;
        int32_t ***l_89 = &p_894->g_87;
        int32_t *l_220 = &p_894->g_221[0];
        uint32_t *l_223 = (void*)0;
        uint32_t *l_224 = (void*)0;
        uint32_t **l_392[1];
        int32_t l_394 = 0L;
        int32_t *l_395 = (void*)0;
        int32_t *l_396 = &l_394;
        int32_t l_397 = 0x2C82A100L;
        int32_t *l_398 = &l_397;
        int32_t *l_399 = &p_894->g_208;
        int32_t *l_400[10][6] = {{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_153,&p_894->g_208,&p_894->g_153,&p_894->g_4,&p_894->g_4}};
        uint32_t l_403 = 0x5C6D1F78L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_392[i] = (void*)0;
        for (p_894->g_19 = 0; (p_894->g_19 > 15); p_894->g_19 = safe_add_func_int64_t_s_s(p_894->g_19, 5))
        { /* block id: 38 */
            return p_894->g_comm_values[p_894->tid];
        }
        (*l_82) = func_74(&p_894->g_19, p_894->g_2, (safe_lshift_func_uint16_t_u_s((*l_69), ((*p_64) = ((void*)0 != l_82)))), ((*l_220) = func_84(((*l_89) = p_894->g_87), (*p_894->g_88), p_894)), ((*l_71) = ((VECTOR(uint32_t, 4))(l_222.ywzx)).z), p_894);
        (*l_71) = ((p_894->g_393 = (l_224 = (p_62 , (void*)0))) == l_69);
        --l_403;
    }
    else
    { /* block id: 150 */
        for (p_894->g_360.f0 = 1; (p_894->g_360.f0 >= 10); ++p_894->g_360.f0)
        { /* block id: 153 */
            int64_t l_408 = 0x6E97D52D262ADCFAL;
            (*l_71) &= (*l_69);
            return l_408;
        }
        return p_894->g_15;
    }
    return p_894->g_83.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_153 p_894->g_208 p_894->g_137 p_894->g_99 p_894->g_113 p_894->g_19 p_894->g_128 p_894->g_4 p_894->g_163 p_894->g_205 p_894->g_159 p_894->g_comm_values p_894->g_138 p_894->g_298 p_894->g_360 p_894->g_362 p_894->g_364 p_894->g_280 p_894->g_87 p_894->g_88 p_894->g_3 p_894->g_391
 * writes: p_894->g_153 p_894->g_208 p_894->g_209 p_894->g_99 p_894->g_113 p_894->g_138 p_894->g_19 p_894->g_362 p_894->g_298 p_894->g_364
 */
struct S0  func_74(int16_t * p_75, int32_t  p_76, uint32_t  p_77, int32_t  p_78, uint32_t  p_79, struct S2 * p_894)
{ /* block id: 91 */
    int32_t l_250 = 1L;
    uint64_t *l_313 = &p_894->g_159[2];
    int32_t l_317 = 0x4DA1E64BL;
    int32_t l_327 = (-1L);
    int32_t l_332 = 0x593545C0L;
    uint16_t l_333 = 0xC46DL;
    VECTOR(uint64_t, 16) l_377 = (VECTOR(uint64_t, 16))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 18446744073709551611UL, 18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551609UL), (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551609UL), 18446744073709551611UL, 18446744073709551609UL, 18446744073709551611UL, 18446744073709551609UL);
    VECTOR(uint64_t, 4) l_378 = (VECTOR(uint64_t, 4))(0x6B96E4FF2E12BC1AL, (VECTOR(uint64_t, 2))(0x6B96E4FF2E12BC1AL, 0x93EE8996AB2E62D1L), 0x93EE8996AB2E62D1L);
    VECTOR(uint16_t, 2) l_388 = (VECTOR(uint16_t, 2))(65531UL, 65527UL);
    int i;
    for (p_894->g_153 = (-17); (p_894->g_153 <= (-4)); p_894->g_153++)
    { /* block id: 94 */
        int32_t *l_227 = &p_894->g_208;
        VECTOR(int32_t, 4) l_233 = (VECTOR(int32_t, 4))(0x190960BBL, (VECTOR(int32_t, 2))(0x190960BBL, 5L), 5L);
        VECTOR(int8_t, 16) l_255 = (VECTOR(int8_t, 16))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, (-1L)), (-1L)), (-1L), 0x79L, (-1L), (VECTOR(int8_t, 2))(0x79L, (-1L)), (VECTOR(int8_t, 2))(0x79L, (-1L)), 0x79L, (-1L), 0x79L, (-1L));
        uint8_t *l_260 = (void*)0;
        VECTOR(int8_t, 4) l_283 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x59L), 0x59L);
        VECTOR(int16_t, 2) l_296 = (VECTOR(int16_t, 2))((-8L), (-4L));
        int32_t ***l_375 = &p_894->g_87;
        VECTOR(uint16_t, 8) l_387 = (VECTOR(uint16_t, 8))(0x469AL, (VECTOR(uint16_t, 4))(0x469AL, (VECTOR(uint16_t, 2))(0x469AL, 0x37CBL), 0x37CBL), 0x37CBL, 0x469AL, 0x37CBL);
        VECTOR(uint16_t, 8) l_389 = (VECTOR(uint16_t, 8))(0xC810L, (VECTOR(uint16_t, 4))(0xC810L, (VECTOR(uint16_t, 2))(0xC810L, 0UL), 0UL), 0UL, 0xC810L, 0UL);
        VECTOR(uint16_t, 16) l_390 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), 65530UL), 65530UL, 0UL, 65530UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), (VECTOR(uint16_t, 2))(0UL, 65530UL), 0UL, 65530UL, 0UL, 65530UL);
        int i;
        (*l_227) |= 0x6F04CFCCL;
        for (p_78 = 0; (p_78 <= (-28)); --p_78)
        { /* block id: 98 */
            uint32_t *l_254 = (void*)0;
            int32_t l_265 = (-1L);
            VECTOR(int16_t, 8) l_297 = (VECTOR(int16_t, 8))(0x530DL, (VECTOR(int16_t, 4))(0x530DL, (VECTOR(int16_t, 2))(0x530DL, 1L), 1L), 1L, 0x530DL, 1L);
            int32_t l_329 = 0x51F99BF4L;
            int32_t l_330 = 1L;
            int32_t l_331 = (-9L);
            int i;
            if ((3UL | (*l_227)))
            { /* block id: 99 */
                uint32_t l_251 = 4294967295UL;
                int32_t l_267 = (-10L);
                VECTOR(int8_t, 4) l_282 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x74L), 0x74L);
                VECTOR(int8_t, 8) l_285 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L));
                VECTOR(int16_t, 2) l_299 = (VECTOR(int16_t, 2))(0x6A61L, 0x1754L);
                uint64_t *l_314 = &p_894->g_159[7];
                int32_t l_316[8][2] = {{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L},{0x0B60CCDDL,2L}};
                VECTOR(int16_t, 16) l_370 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1C4FL), 0x1C4FL), 0x1C4FL, (-1L), 0x1C4FL, (VECTOR(int16_t, 2))((-1L), 0x1C4FL), (VECTOR(int16_t, 2))((-1L), 0x1C4FL), (-1L), 0x1C4FL, (-1L), 0x1C4FL);
                int i, j;
                for (p_894->g_209 = 0; (p_894->g_209 >= (-16)); p_894->g_209--)
                { /* block id: 102 */
                    int32_t *l_232 = &p_894->g_208;
                    int32_t *l_234 = (void*)0;
                    int32_t *l_235 = &p_894->g_208;
                    int32_t *l_236 = &p_894->g_208;
                    int32_t *l_237 = &p_894->g_208;
                    int32_t *l_238 = (void*)0;
                    int32_t *l_239 = &p_894->g_208;
                    int32_t *l_240 = &p_894->g_208;
                    int32_t *l_241 = &p_894->g_208;
                    int32_t *l_242 = &p_894->g_208;
                    int32_t *l_243 = &p_894->g_208;
                    int32_t *l_244 = &p_894->g_208;
                    int32_t *l_245 = (void*)0;
                    int32_t *l_246 = &p_894->g_208;
                    int32_t *l_247 = &p_894->g_208;
                    int32_t *l_248 = (void*)0;
                    int32_t *l_249[7][4][2] = {{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}},{{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4},{&p_894->g_4,&p_894->g_4}}};
                    int i, j, k;
                    ++l_251;
                }
                if ((&p_894->g_119 == (l_254 = &p_894->g_119)))
                { /* block id: 106 */
                    uint16_t *l_266[3][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t l_276 = (-1L);
                    int32_t l_328[4] = {0x051CB3ACL,0x051CB3ACL,0x051CB3ACL,0x051CB3ACL};
                    int32_t l_363[4];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_363[i] = 0x1E3C6B21L;
                    if ((((VECTOR(int8_t, 16))(l_255.s2369411491ab50bc)).s0 || ((p_77 >= 0xA70D411CF694FA6BL) == (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((void*)0 == l_260), 0x56L)), (p_894->g_137.s3 | (safe_div_func_int16_t_s_s((p_76 == ((safe_rshift_func_uint16_t_u_u((p_894->g_99.y++), (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x4DL, ((*l_227) <= l_265), (-1L), 7L)))).w <= (*l_227)))) , p_894->g_113.sd)), (*p_75)))))))))
                    { /* block id: 108 */
                        if (p_78)
                            break;
                        if ((*l_227))
                            break;
                        if (p_79)
                            continue;
                    }
                    else
                    { /* block id: 112 */
                        VECTOR(int8_t, 2) l_281 = (VECTOR(int8_t, 2))(0x26L, 0x67L);
                        int32_t **l_291 = &p_894->g_88;
                        uint64_t **l_315 = &l_314;
                        int32_t *l_318 = &l_317;
                        int32_t *l_319 = (void*)0;
                        int32_t *l_320 = (void*)0;
                        int32_t *l_321 = &l_267;
                        int32_t *l_322 = (void*)0;
                        int32_t *l_323 = (void*)0;
                        int32_t *l_324 = &l_265;
                        int32_t *l_325 = &l_316[2][0];
                        int32_t *l_326[10] = {&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1],&l_316[1][1]};
                        uint64_t *l_336 = (void*)0;
                        uint64_t *l_337 = (void*)0;
                        uint64_t *l_338 = (void*)0;
                        uint64_t *l_339 = (void*)0;
                        uint64_t *l_340[1][7][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        uint16_t l_343 = 5UL;
                        int16_t *l_361[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_361[i] = (void*)0;
                        (*l_227) = (safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((l_276 <= ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_250, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_894->g_279.yxxy)))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_894->g_280.s15)))), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_281.yxxy)), ((VECTOR(int8_t, 4))(l_282.zzww))))), (-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_283.wwywxyxywwwzzxww)).sfb)), 0x61L, (-6L))).s34)).hi, 5)) != p_894->g_128.s1)) || ((*l_227) ^ (((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_894->g_284.wyzxyzwy)).s44)), (-1L), (-1L))).xxxwyyyzwywxzzyz, ((VECTOR(int8_t, 4))(l_285.s0071)).zzyywwyzzywzwwxw))).sa | p_894->g_4))), ((p_894->g_163.x , (void*)0) != (((safe_div_func_uint64_t_u_u(p_894->g_205.sb, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_894->g_288.s81)), 0x779B6EA8F3C2C29DL, (0x6F3B4925L | p_79), 0xA3F2C9B0C5A6CC17L, 2UL, 0xE8D3F0CE087C8294L, 0x309D0D329E785CDDL)).s0)) , p_894->g_159[7]) , p_75)))), 0x24317F4EL)), p_894->g_comm_values[p_894->tid]));
                        l_316[2][0] ^= (safe_div_func_uint16_t_u_u((p_77 , (0x3F0DDE07L < ((l_291 != (void*)0) <= (safe_mod_func_uint16_t_u_u(0xEC82L, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x4C07L, 0x44A4L)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x50FCL, 0x461EL)), 8L, (-1L))).odd))), 0L, ((VECTOR(int16_t, 4))(l_296.xyyy)), 0x73D9L, ((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-6L), 0x09EBL, (-1L), 0x2677L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_297.s04)), 0x7770L, 0x50F9L)).zyxxzyzy)), ((VECTOR(int16_t, 4))(p_894->g_298.yzyy)))))).s7f, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_299.yx))))))), 0x5C59L, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x67L, 0x66L)).xxxx)).even, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))((+((VECTOR(uint8_t, 8))(((safe_mul_func_int8_t_s_s(p_79, (safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((~(((*l_291) = ((((VECTOR(int8_t, 8))(p_894->g_310.s65413634)).s3 , ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((((safe_mod_func_int16_t_s_s(((((*l_227) = ((((((((l_313 == ((*l_315) = l_314)) > p_894->g_128.sb) , p_894->g_15) < p_78) , &p_894->g_38) == (void*)0) | p_77) , 0x683303B9L)) < l_297.s4) & l_297.s0), p_894->g_2)) & 0x3D8F780C5D144D0AL) || p_894->g_150.z), FAKE_DIVERGE(p_894->group_0_offset, get_group_id(0), 10), 1UL, 1UL)))).zzxywzzz, ((VECTOR(uint32_t, 8))(0xEAAC3ADBL)), ((VECTOR(uint32_t, 8))(4294967295UL))))).s4) , l_227)) != &l_265)), FAKE_DIVERGE(p_894->local_2_offset, get_local_id(2), 10))) < p_894->g_288.sf) & 0x20L), l_250)), p_894->g_149.z)), p_894->g_28)))) , FAKE_DIVERGE(p_894->group_2_offset, get_group_id(2), 10)), 253UL, ((VECTOR(uint8_t, 4))(0xAEL)), 255UL, 0xD8L)).s1), FAKE_DIVERGE(p_894->local_1_offset, get_local_id(1), 10), 0x47L, 249UL)).zwwzwwxy, ((VECTOR(uint8_t, 8))(246UL))))).s34))).hi, 0x250FL, p_894->g_41.f0, ((VECTOR(int16_t, 8))(0L)), 0x1313L, 0L)).s6f)))), 0L)), l_267, ((VECTOR(int16_t, 2))(0x6290L)), 1L)).sd, p_894->g_128.s1))))))), (*p_75)));
                        --l_333;
                        l_317 ^= ((p_894->g_364 &= ((p_894->g_113.s8 ^= 0x9099EA1FDA284915L) == (safe_div_func_uint16_t_u_u((l_343 = l_299.y), (l_328[0] && ((safe_rshift_func_int8_t_s_s(l_297.s6, 6)) != (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(0x7C0AL, (p_894->g_298.z = (((safe_mul_func_int8_t_s_s((l_250 & (safe_lshift_func_uint16_t_u_s((--p_894->g_138), 7))), (((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*p_75) = (*p_75)), p_894->g_298.z)), (p_894->g_362 &= (p_894->g_360 , 0x08D7L)))) & l_316[5][0]) , FAKE_DIVERGE(p_894->group_1_offset, get_group_id(1), 10)))) == 0x3662FD1387B76351L) , l_363[0])))), 3)))))))) >= p_894->g_280.s4);
                    }
                }
                else
                { /* block id: 128 */
                    uint32_t *l_367 = &p_894->g_28;
                    for (l_265 = (-4); (l_265 != 16); l_265 = safe_add_func_int64_t_s_s(l_265, 3))
                    { /* block id: 131 */
                        l_316[2][0] &= (+((void*)0 == l_367));
                    }
                }
                l_331 = (safe_add_func_int16_t_s_s(l_299.y, GROUP_DIVERGE(1, 1)));
                l_316[4][0] &= (((VECTOR(int16_t, 16))(l_370.s5b0900534bfd1cae)).s2 >= (safe_sub_func_uint16_t_u_u(0x745AL, (safe_mul_func_int16_t_s_s(l_331, ((void*)0 != l_375))))));
            }
            else
            { /* block id: 137 */
                int32_t *l_376 = (void*)0;
                l_376 = &l_265;
            }
            l_327 = ((*l_227) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 2))(l_377.s24)).yyxxxxyyyyxxxyxy, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_378.yxwx)).ywzxxwyxzzwxxxxz)).s6b1e)).yzzywwwzzyxzwxzz, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x602FBBF1L, (&l_327 == (*p_894->g_87)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-5L), 1UL)), (~(safe_sub_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_u(p_894->g_3[0], 3))))))) || 0xECA46E4AA0FAB284L), 7UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65529UL, 0x0E15L)), 0xA1C9L, 0x436CL)).yyzwyxwxwyyywzww, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 1UL)))).yyyxxxyx))).s1737573042242321)).s2b, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(l_387.s05)).xxyx, (uint16_t)l_330))), ((VECTOR(uint16_t, 4))(0x92F0L, 0x867EL, 0x81D3L, 9UL)))).s52, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(l_388.xxxx)).wwyyxzzy, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_389.s5066)), 8UL, ((VECTOR(uint16_t, 2))(0xD7FAL, 65526UL)), 0UL)))).even, ((VECTOR(uint16_t, 16))(l_390.se2fe9eabbb5ed8e8)).s3420, ((VECTOR(uint16_t, 4))(p_894->g_205.s4, 1UL, 0xA0B9L, 0xAF59L))))).wyxzzxwy))).s70))).yyyxyyyyxxxxxxxy))))).s8c)))).xyyx)), 1UL, 0UL, 4294967287UL, 0xC92E5A90L)).s02, ((VECTOR(uint32_t, 2))(0xE2B530F2L))))).xyxyxyxxyyyyxyyy, ((VECTOR(uint32_t, 16))(0x9857359EL))))).se0, ((VECTOR(uint32_t, 2))(4294967295UL))))), 0xBE170529L, 4294967292UL)), 9UL, ((VECTOR(uint32_t, 4))(4294967295UL)), 0xD4E07163L, ((VECTOR(uint32_t, 4))(0UL)))).s1d, ((VECTOR(uint32_t, 2))(0x2D8E9F09L)), ((VECTOR(uint32_t, 2))(0x9D5FF4D2L))))).yyxx)), 4294967295UL, 0xF2824C95L)).even)).xxwzyyyx, ((VECTOR(uint32_t, 8))(1UL))))).s24)).xyyyyyxxxyyyxyyx)))))), ((VECTOR(uint64_t, 16))(18446744073709551615UL)), ((VECTOR(uint64_t, 16))(0x88306CF942CE0C44L))))).scd46)).yyyyzyyyxyzzzxzz)).odd)).s61)), 0UL, 4UL)).x , (**p_894->g_87)));
        }
    }
    return p_894->g_391;
}


/* ------------------------------------------ */
/* 
 * reads : p_894->g_15 p_894->g_99 p_894->g_113 p_894->g_119 p_894->g_124 p_894->g_128 p_894->g_137 p_894->g_138 p_894->l_comm_values p_894->g_149 p_894->g_150 p_894->g_87 p_894->g_88 p_894->g_163 p_894->g_153 p_894->g_4 p_894->g_83.f3 p_894->g_159 p_894->g_205 p_894->g_208 p_894->g_209 p_894->g_38
 * writes: p_894->g_119 p_894->g_153 p_894->g_138 p_894->g_163 p_894->g_99 p_894->g_137 p_894->g_205 p_894->g_208 p_894->g_209 p_894->g_88
 */
int32_t  func_84(int32_t ** p_85, int32_t  p_86, struct S2 * p_894)
{ /* block id: 43 */
    int64_t l_96 = 0x2417F16C3B14A51EL;
    VECTOR(int64_t, 2) l_102 = (VECTOR(int64_t, 2))(4L, (-2L));
    VECTOR(uint64_t, 16) l_107 = (VECTOR(uint64_t, 16))(0x1834A9CADD72F777L, (VECTOR(uint64_t, 4))(0x1834A9CADD72F777L, (VECTOR(uint64_t, 2))(0x1834A9CADD72F777L, 1UL), 1UL), 1UL, 0x1834A9CADD72F777L, 1UL, (VECTOR(uint64_t, 2))(0x1834A9CADD72F777L, 1UL), (VECTOR(uint64_t, 2))(0x1834A9CADD72F777L, 1UL), 0x1834A9CADD72F777L, 1UL, 0x1834A9CADD72F777L, 1UL);
    VECTOR(uint64_t, 8) l_108 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0xD29FB7A8BFC02255L), 0xD29FB7A8BFC02255L), 0xD29FB7A8BFC02255L, 9UL, 0xD29FB7A8BFC02255L);
    struct S0 **l_111 = &p_894->g_38;
    uint64_t l_112 = 0x1744B85C55787DF3L;
    uint64_t *l_114 = (void*)0;
    uint64_t *l_115 = (void*)0;
    uint64_t *l_116 = (void*)0;
    uint64_t *l_117 = &l_112;
    uint32_t *l_118 = &p_894->g_119;
    VECTOR(uint32_t, 8) l_125 = (VECTOR(uint32_t, 8))(0xD4FE02E2L, (VECTOR(uint32_t, 4))(0xD4FE02E2L, (VECTOR(uint32_t, 2))(0xD4FE02E2L, 0x8E951F22L), 0x8E951F22L), 0x8E951F22L, 0xD4FE02E2L, 0x8E951F22L);
    VECTOR(uint32_t, 8) l_126 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 8UL), 8UL), 8UL, 3UL, 8UL);
    VECTOR(uint32_t, 8) l_127 = (VECTOR(uint32_t, 8))(0xDBB316AAL, (VECTOR(uint32_t, 4))(0xDBB316AAL, (VECTOR(uint32_t, 2))(0xDBB316AAL, 0x9F03B65DL), 0x9F03B65DL), 0x9F03B65DL, 0xDBB316AAL, 0x9F03B65DL);
    uint32_t l_147 = 0xCC0B3D1FL;
    int32_t l_148 = 1L;
    int16_t l_160 = 1L;
    int32_t **l_182 = &p_894->g_88;
    int32_t *l_213[9][4][6] = {{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}},{{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148},{(void*)0,&l_148,(void*)0,&p_894->g_153,&p_894->g_4,&l_148}}};
    int i, j, k;
    if ((safe_sub_func_uint8_t_u_u((p_894->g_15 < ((safe_mul_func_int8_t_s_s((l_96 , (-3L)), l_96)) != (GROUP_DIVERGE(1, 1) <= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_894->g_99.xxyy)).y, GROUP_DIVERGE(1, 1)))))), (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_102.yxyyyyxxyyyyyxyx)))).sb, ((safe_add_func_int64_t_s_s((((safe_mod_func_int64_t_s_s(0x74455642E063A29CL, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(8UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_107.s1065c771c75621c9)).sa839)).lo, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(l_108.s07335320)).even, (uint64_t)((((safe_mul_func_int8_t_s_s((l_111 != ((!(((l_112 || ((*l_117) = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_894->g_113.s4bba09b981905554)).lo)).s36)).odd)) == (!((--(*l_118)) || (safe_div_func_int16_t_s_s(((((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(4UL, 0x9816E076L)).xyyx, ((VECTOR(uint32_t, 2))(p_894->g_124.s6b)).xyxx))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_125.s2565)).xxzwxxyzwwxwzwyz)).s1e5b, ((VECTOR(uint32_t, 8))(l_126.s76235772)).odd))).zzwyxxxyzwywywzx, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_127.s56)), 1UL, 0x5FAFB163L)), 0x1664A100L, 0x543FC1E9L)), ((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(p_894->g_128.sd61f34f6)).s1156041157731343, (uint32_t)((safe_div_func_uint64_t_u_u((l_127.s6 , (safe_rshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((((VECTOR(uint8_t, 16))(p_894->g_137.s3501333073112054)).sb | ((p_86 <= l_107.s6) ^ p_86)) , 1L), GROUP_DIVERGE(1, 1))), p_86)) > p_86) & (-3L)), l_126.s4))), l_126.s1)) || 6L)))).sa4bb, ((VECTOR(uint32_t, 4))(0xEE2B33A3L)), ((VECTOR(uint32_t, 4))(4294967293UL))))).even, ((VECTOR(uint32_t, 2))(0x16565E83L))))), ((VECTOR(uint32_t, 4))(0x2B9FEB66L)), ((VECTOR(uint32_t, 8))(0xD3EBDD5AL)), 0x334EEAE8L)).hi))).s3723540455063466))).s1 , 1L) <= FAKE_DIVERGE(p_894->group_2_offset, get_group_id(2), 10)), p_894->g_128.sf))))) && p_894->g_124.se)) , (void*)0)), l_96)) <= p_86) == FAKE_DIVERGE(p_894->global_0_offset, get_global_id(0), 10)) < p_86)))).lo))).yxxy)).odd)), 18446744073709551611UL)).odd)).xyxyyyxy))).even, ((VECTOR(uint64_t, 4))(18446744073709551612UL))))).yzwywyzxzwwxyyxz)).lo)).s57)), ((VECTOR(uint64_t, 2))(2UL))))).yyyy, ((VECTOR(uint64_t, 4))(0UL))))).lo, (uint64_t)p_894->g_138))).odd)) == p_894->l_comm_values[(safe_mod_func_uint32_t_u_u(p_894->tid, 79))]) > p_894->l_comm_values[(safe_mod_func_uint32_t_u_u(p_894->tid, 79))]), 0x57C61DA5914D98EAL)) , 18446744073709551615UL))))))
    { /* block id: 46 */
        uint32_t l_144 = 4UL;
        int32_t l_170 = 1L;
        uint16_t *l_183 = (void*)0;
        uint16_t *l_184[1];
        int32_t l_185 = 1L;
        int32_t l_186 = (-9L);
        int32_t l_187 = 1L;
        int32_t *l_188[8][4] = {{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4},{&l_187,&l_187,&l_187,&p_894->g_4}};
        VECTOR(int32_t, 16) l_193 = (VECTOR(int32_t, 16))(0x0816E1F8L, (VECTOR(int32_t, 4))(0x0816E1F8L, (VECTOR(int32_t, 2))(0x0816E1F8L, 9L), 9L), 9L, 0x0816E1F8L, 9L, (VECTOR(int32_t, 2))(0x0816E1F8L, 9L), (VECTOR(int32_t, 2))(0x0816E1F8L, 9L), 0x0816E1F8L, 9L, 0x0816E1F8L, 9L);
        uint8_t *l_202[10][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        uint32_t l_203 = 0x9D99575FL;
        VECTOR(int8_t, 4) l_204 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L);
        uint64_t *l_206 = (void*)0;
        uint64_t *l_207[3];
        int i, j;
        for (i = 0; i < 1; i++)
            l_184[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_207[i] = (void*)0;
        for (l_96 = 9; (l_96 <= (-13)); --l_96)
        { /* block id: 49 */
            VECTOR(uint32_t, 8) l_151 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x6FC58545L), 0x6FC58545L), 0x6FC58545L, 4294967295UL, 0x6FC58545L);
            int32_t *l_152 = &p_894->g_153;
            uint64_t *l_158[5] = {&p_894->g_159[7],&p_894->g_159[7],&p_894->g_159[7],&p_894->g_159[7],&p_894->g_159[7]};
            uint16_t *l_164 = (void*)0;
            uint16_t *l_165 = &p_894->g_138;
            int i;
            if ((atomic_inc(&p_894->l_atomic_input[5]) == 2))
            { /* block id: 51 */
                int32_t *l_141 = (void*)0;
                l_141 = (void*)0;
                unsigned int result = 0;
                atomic_add(&p_894->l_special_values[5], result);
            }
            else
            { /* block id: 53 */
                (1 + 1);
            }
            (*l_152) = (((((VECTOR(int16_t, 8))((safe_div_func_uint16_t_u_u((l_144 != 4UL), p_86)), ((VECTOR(int16_t, 4))(0x545AL, ((p_894->g_137.s1 && (!(safe_lshift_func_uint8_t_u_u(251UL, 2)))) == l_147), (-1L), 0L)), 1L, 0x059DL, 0L)).s5 , (l_148 = p_894->g_137.s4)) | (((*l_118) &= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_894->g_149.xy)).yyyxyxxx)).s1206216350766767, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(p_894->g_150.yywy)).xwyyywzz, ((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(l_151.s5766225533123305)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))((p_86 || p_894->g_149.x), ((VECTOR(uint32_t, 4))(1UL)), 0x9C2E694CL, 4294967295UL, 0x3E926863L)), ((VECTOR(uint32_t, 8))(0x9E6B5F6AL)), ((VECTOR(uint32_t, 8))(0x4961C1CCL))))))), ((VECTOR(uint32_t, 8))(0x15B1D915L))))), ((VECTOR(uint32_t, 8))(0x15C47ABEL))))).s47)), (uint32_t)l_151.s0))))).xyxxyxxxxyyyyxyx, ((VECTOR(uint32_t, 16))(0xE1E1C95CL))))))).s5) != p_894->g_113.s7)) > l_144);
            (*l_152) = (safe_lshift_func_uint16_t_u_s(0x7743L, (safe_add_func_uint32_t_u_u(((*l_118) &= (6UL || ((l_160 = ((void*)0 != (*p_894->g_87))) , (safe_rshift_func_int8_t_s_s(p_894->g_150.w, 1))))), (((0x0AFF555BL & (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x0461L, 7UL)), ((VECTOR(uint16_t, 8))(p_894->g_163.xyyyxxxy)), 65535UL, 0UL, (++(*l_165)), (safe_div_func_int32_t_s_s(((GROUP_DIVERGE(1, 1) != l_170) > (*l_152)), (**p_894->g_87))), 5UL, 0x73C0L)).s8 == 0x1016L)) | p_894->g_128.s5) && p_86)))));
        }
        l_187 = ((l_185 = (safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((((p_894->g_113.s9 < ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s(0x67CBA6E04B37A05FL)), ((*l_117) = ((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(((p_86 , l_182) == (void*)0), (3UL == (((*l_118) = p_86) == (&p_894->g_88 == p_85))))) , (**l_182)) <= GROUP_DIVERGE(2, 1)), GROUP_DIVERGE(0, 1))) && p_894->g_124.s6)))) ^ p_86)) == p_86) <= p_86), (**p_85))), p_86))) && l_186);
        p_86 |= (**p_85);
        (*l_182) = func_32(((p_894->g_209 |= (p_894->g_208 ^= (safe_add_func_uint16_t_u_u(0xB88DL, ((VECTOR(int16_t, 16))(0x625DL, p_894->g_83.f3, (-1L), (safe_sub_func_int32_t_s_s((FAKE_DIVERGE(p_894->group_1_offset, get_group_id(1), 10) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_193.sb3)), 0x6DFB0B29L, 1L)))).y), ((GROUP_DIVERGE(1, 1) , ((*l_117) = (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((8UL && (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((0xE760C5D1L || 1L), (**l_182))), (p_894->g_99.x = (p_894->g_163.y = p_894->g_124.s1))))) , (((**l_182) & (l_203 = (p_894->g_137.s7 = FAKE_DIVERGE(p_894->local_0_offset, get_local_id(0), 10)))) , (((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_204.ywyw)), (p_894->g_205.sa |= ((**l_182) , p_894->g_159[3])), ((VECTOR(int8_t, 4))(0x18L)), ((VECTOR(int8_t, 2))((-9L))), ((VECTOR(int8_t, 4))(0x03L)), 0x4DL)).s2 ^ p_894->g_113.sf) <= 0x5B2D086AL) & p_86))), p_86)), 0xA191L)))) == p_86))), 0x0E2EL, p_86, 0x5A85L, 9L, p_86, 0x6DFDL, ((VECTOR(int16_t, 4))((-6L))), 0x25DDL, 0x2993L)).se)))) || p_86), p_894);
    }
    else
    { /* block id: 78 */
        for (p_86 = 0; (p_86 == 21); p_86++)
        { /* block id: 81 */
            int8_t l_212 = 0x47L;
            l_212 = 0x05607DF4L;
            return (**l_182);
        }
    }
    p_894->g_153 = (**p_85);
    p_894->g_208 |= (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((!(safe_rshift_func_int16_t_s_u(p_86, 11))), (*p_894->g_88))), 0x6610234A52FFC3B9L));
    return p_86;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S2 c_895;
    struct S2* p_894 = &c_895;
    struct S2 c_896 = {
        0x77AB3921L, // p_894->g_2
        {(-10L)}, // p_894->g_3
        0x150707DFL, // p_894->g_4
        0UL, // p_894->g_15
        3L, // p_894->g_17
        0L, // p_894->g_19
        0UL, // p_894->g_28
        (void*)0, // p_894->g_38
        {0L,0x5B20L,4294967292UL,0x5FBC01D4L,0x3F121F20L}, // p_894->g_41
        (void*)0, // p_894->g_42
        0x13122E3BL, // p_894->g_68
        {-9L,0x5D26L,0UL,0L,0x1E3B93F1L}, // p_894->g_83
        &p_894->g_4, // p_894->g_88
        &p_894->g_88, // p_894->g_87
        (VECTOR(uint16_t, 2))(65530UL, 0UL), // p_894->g_99
        (VECTOR(uint64_t, 16))(0x835E52A12E219839L, (VECTOR(uint64_t, 4))(0x835E52A12E219839L, (VECTOR(uint64_t, 2))(0x835E52A12E219839L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0x835E52A12E219839L, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0x835E52A12E219839L, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0x835E52A12E219839L, 18446744073709551611UL), 0x835E52A12E219839L, 18446744073709551611UL, 0x835E52A12E219839L, 18446744073709551611UL), // p_894->g_113
        0xF334EEA4L, // p_894->g_119
        (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967289UL), 4294967289UL), 4294967289UL, 7UL, 4294967289UL, (VECTOR(uint32_t, 2))(7UL, 4294967289UL), (VECTOR(uint32_t, 2))(7UL, 4294967289UL), 7UL, 4294967289UL, 7UL, 4294967289UL), // p_894->g_124
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL, (VECTOR(uint32_t, 2))(1UL, 5UL), (VECTOR(uint32_t, 2))(1UL, 5UL), 1UL, 5UL, 1UL, 5UL), // p_894->g_128
        (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xFBL), 0xFBL), 0xFBL, 5UL, 0xFBL), // p_894->g_137
        65527UL, // p_894->g_138
        (VECTOR(uint32_t, 4))(0x827581F2L, (VECTOR(uint32_t, 2))(0x827581F2L, 0x8B998A83L), 0x8B998A83L), // p_894->g_149
        (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967286UL), 4294967286UL), // p_894->g_150
        0x69C12CE4L, // p_894->g_153
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_894->g_159
        (VECTOR(uint16_t, 2))(65529UL, 0x5720L), // p_894->g_163
        (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x0B072DD7L), 0x0B072DD7L), 0x0B072DD7L, 6UL, 0x0B072DD7L, (VECTOR(uint32_t, 2))(6UL, 0x0B072DD7L), (VECTOR(uint32_t, 2))(6UL, 0x0B072DD7L), 6UL, 0x0B072DD7L, 6UL, 0x0B072DD7L), // p_894->g_205
        5L, // p_894->g_208
        1L, // p_894->g_209
        {0x11EA467DL,0x11EA467DL,0x11EA467DL}, // p_894->g_221
        (VECTOR(int8_t, 2))(0x4EL, 0x6DL), // p_894->g_279
        (VECTOR(int8_t, 8))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 1L), 1L), 1L, 0x7CL, 1L), // p_894->g_280
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x11L), 0x11L), // p_894->g_284
        (VECTOR(uint64_t, 16))(0xA00E8144AFDD0078L, (VECTOR(uint64_t, 4))(0xA00E8144AFDD0078L, (VECTOR(uint64_t, 2))(0xA00E8144AFDD0078L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0xA00E8144AFDD0078L, 18446744073709551610UL, (VECTOR(uint64_t, 2))(0xA00E8144AFDD0078L, 18446744073709551610UL), (VECTOR(uint64_t, 2))(0xA00E8144AFDD0078L, 18446744073709551610UL), 0xA00E8144AFDD0078L, 18446744073709551610UL, 0xA00E8144AFDD0078L, 18446744073709551610UL), // p_894->g_288
        (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x3902L), 0x3902L), // p_894->g_298
        (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 0x40L), 0x40L), 0x40L, 0x38L, 0x40L), // p_894->g_310
        {18446744073709551615UL}, // p_894->g_360
        4294967289UL, // p_894->g_362
        (-3L), // p_894->g_364
        {0x2F38A70AC51FBB9AL,-5L,0x2116FCF1L,0x565F0B7DL,0x17F44B5EL}, // p_894->g_391
        (void*)0, // p_894->g_393
        0x03B61F78L, // p_894->g_436
        {-2L,0L,4294967295UL,-1L,1L}, // p_894->g_441
        (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0L), 0L), 0L, 0x55L, 0L), // p_894->g_453
        {{0x645AC124DB7E52BFL},{0x645AC124DB7E52BFL},{0x645AC124DB7E52BFL},{0x645AC124DB7E52BFL}}, // p_894->g_463
        &p_894->g_441.f2, // p_894->g_464
        (VECTOR(int32_t, 2))(0x143B098DL, 0L), // p_894->g_536
        4294967295UL, // p_894->g_547
        (VECTOR(int16_t, 4))(0x750EL, (VECTOR(int16_t, 2))(0x750EL, 0x3032L), 0x3032L), // p_894->g_549
        (VECTOR(uint32_t, 16))(0x910BC76EL, (VECTOR(uint32_t, 4))(0x910BC76EL, (VECTOR(uint32_t, 2))(0x910BC76EL, 0xCBAD0B91L), 0xCBAD0B91L), 0xCBAD0B91L, 0x910BC76EL, 0xCBAD0B91L, (VECTOR(uint32_t, 2))(0x910BC76EL, 0xCBAD0B91L), (VECTOR(uint32_t, 2))(0x910BC76EL, 0xCBAD0B91L), 0x910BC76EL, 0xCBAD0B91L, 0x910BC76EL, 0xCBAD0B91L), // p_894->g_554
        (VECTOR(uint32_t, 2))(4294967295UL, 1UL), // p_894->g_555
        (VECTOR(int8_t, 2))(1L, 0x4DL), // p_894->g_567
        (VECTOR(int16_t, 2))(1L, 0x4C54L), // p_894->g_573
        (void*)0, // p_894->g_588
        {{0x6F5C32991B87DE84L,0x6F2DL,0x676DF3DCL,1L,1L},{0x6F5C32991B87DE84L,0x6F2DL,0x676DF3DCL,1L,1L}}, // p_894->g_612
        {0x4E9CE325903C3C75L,-7L,0x2C56CDB3L,0L,0L}, // p_894->g_641
        (void*)0, // p_894->g_642
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 252UL), 252UL), 252UL, 0UL, 252UL), // p_894->g_653
        (void*)0, // p_894->g_655
        {-4L,1L,7UL,0L,0x7191F6F8L}, // p_894->g_682
        {1L,-5L,0x479B2C18L,4L,0x6631CF6FL}, // p_894->g_683
        0x4DL, // p_894->g_687
        {-9L,-1L,4294967295UL,-1L,0x072283C0L}, // p_894->g_693
        {8L,5L,0x01FAC69BL,-4L,3L}, // p_894->g_694
        {0x4856145AB958E2AFL,0x24F3L,0xFFF55D8FL,-3L,1L}, // p_894->g_695
        {{{0x3D911483B5B88160L,-1L,0x855E7C0BL,-2L,0x014E3709L},{0x3D911483B5B88160L,-1L,0x855E7C0BL,-2L,0x014E3709L},{0x3D911483B5B88160L,-1L,0x855E7C0BL,-2L,0x014E3709L},{0x3D911483B5B88160L,-1L,0x855E7C0BL,-2L,0x014E3709L},{0x3D911483B5B88160L,-1L,0x855E7C0BL,-2L,0x014E3709L}}}, // p_894->g_697
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x22L), 0x22L), 0x22L, 1L, 0x22L, (VECTOR(int8_t, 2))(1L, 0x22L), (VECTOR(int8_t, 2))(1L, 0x22L), 1L, 0x22L, 1L, 0x22L), // p_894->g_713
        (VECTOR(uint64_t, 8))(0x3EE49B3D5A5692D3L, (VECTOR(uint64_t, 4))(0x3EE49B3D5A5692D3L, (VECTOR(uint64_t, 2))(0x3EE49B3D5A5692D3L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x3EE49B3D5A5692D3L, 18446744073709551615UL), // p_894->g_720
        &p_894->g_463[2], // p_894->g_738
        &p_894->g_738, // p_894->g_737
        {0x35AB1BC59A21C62CL}, // p_894->g_739
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_894->g_748
        (VECTOR(uint32_t, 4))(0x0ABE8587L, (VECTOR(uint32_t, 2))(0x0ABE8587L, 0x08551F03L), 0x08551F03L), // p_894->g_825
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x29C7F45FL), 0x29C7F45FL), 0x29C7F45FL, 1L, 0x29C7F45FL), // p_894->g_829
        (VECTOR(int16_t, 2))(2L, (-4L)), // p_894->g_831
        {-1L,1L,4294967295UL,-5L,1L}, // p_894->g_839
        0, // p_894->v_collective
        sequence_input[get_global_id(0)], // p_894->global_0_offset
        sequence_input[get_global_id(1)], // p_894->global_1_offset
        sequence_input[get_global_id(2)], // p_894->global_2_offset
        sequence_input[get_local_id(0)], // p_894->local_0_offset
        sequence_input[get_local_id(1)], // p_894->local_1_offset
        sequence_input[get_local_id(2)], // p_894->local_2_offset
        sequence_input[get_group_id(0)], // p_894->group_0_offset
        sequence_input[get_group_id(1)], // p_894->group_1_offset
        sequence_input[get_group_id(2)], // p_894->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_894->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_895 = c_896;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_894);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_894->g_2, "p_894->g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_894->g_3[i], "p_894->g_3[i]", print_hash_value);

    }
    transparent_crc(p_894->g_4, "p_894->g_4", print_hash_value);
    transparent_crc(p_894->g_15, "p_894->g_15", print_hash_value);
    transparent_crc(p_894->g_17, "p_894->g_17", print_hash_value);
    transparent_crc(p_894->g_19, "p_894->g_19", print_hash_value);
    transparent_crc(p_894->g_28, "p_894->g_28", print_hash_value);
    transparent_crc(p_894->g_41.f0, "p_894->g_41.f0", print_hash_value);
    transparent_crc(p_894->g_41.f1, "p_894->g_41.f1", print_hash_value);
    transparent_crc(p_894->g_41.f2, "p_894->g_41.f2", print_hash_value);
    transparent_crc(p_894->g_41.f3, "p_894->g_41.f3", print_hash_value);
    transparent_crc(p_894->g_41.f4, "p_894->g_41.f4", print_hash_value);
    transparent_crc(p_894->g_68, "p_894->g_68", print_hash_value);
    transparent_crc(p_894->g_83.f0, "p_894->g_83.f0", print_hash_value);
    transparent_crc(p_894->g_83.f1, "p_894->g_83.f1", print_hash_value);
    transparent_crc(p_894->g_83.f2, "p_894->g_83.f2", print_hash_value);
    transparent_crc(p_894->g_83.f3, "p_894->g_83.f3", print_hash_value);
    transparent_crc(p_894->g_83.f4, "p_894->g_83.f4", print_hash_value);
    transparent_crc(p_894->g_99.x, "p_894->g_99.x", print_hash_value);
    transparent_crc(p_894->g_99.y, "p_894->g_99.y", print_hash_value);
    transparent_crc(p_894->g_113.s0, "p_894->g_113.s0", print_hash_value);
    transparent_crc(p_894->g_113.s1, "p_894->g_113.s1", print_hash_value);
    transparent_crc(p_894->g_113.s2, "p_894->g_113.s2", print_hash_value);
    transparent_crc(p_894->g_113.s3, "p_894->g_113.s3", print_hash_value);
    transparent_crc(p_894->g_113.s4, "p_894->g_113.s4", print_hash_value);
    transparent_crc(p_894->g_113.s5, "p_894->g_113.s5", print_hash_value);
    transparent_crc(p_894->g_113.s6, "p_894->g_113.s6", print_hash_value);
    transparent_crc(p_894->g_113.s7, "p_894->g_113.s7", print_hash_value);
    transparent_crc(p_894->g_113.s8, "p_894->g_113.s8", print_hash_value);
    transparent_crc(p_894->g_113.s9, "p_894->g_113.s9", print_hash_value);
    transparent_crc(p_894->g_113.sa, "p_894->g_113.sa", print_hash_value);
    transparent_crc(p_894->g_113.sb, "p_894->g_113.sb", print_hash_value);
    transparent_crc(p_894->g_113.sc, "p_894->g_113.sc", print_hash_value);
    transparent_crc(p_894->g_113.sd, "p_894->g_113.sd", print_hash_value);
    transparent_crc(p_894->g_113.se, "p_894->g_113.se", print_hash_value);
    transparent_crc(p_894->g_113.sf, "p_894->g_113.sf", print_hash_value);
    transparent_crc(p_894->g_119, "p_894->g_119", print_hash_value);
    transparent_crc(p_894->g_124.s0, "p_894->g_124.s0", print_hash_value);
    transparent_crc(p_894->g_124.s1, "p_894->g_124.s1", print_hash_value);
    transparent_crc(p_894->g_124.s2, "p_894->g_124.s2", print_hash_value);
    transparent_crc(p_894->g_124.s3, "p_894->g_124.s3", print_hash_value);
    transparent_crc(p_894->g_124.s4, "p_894->g_124.s4", print_hash_value);
    transparent_crc(p_894->g_124.s5, "p_894->g_124.s5", print_hash_value);
    transparent_crc(p_894->g_124.s6, "p_894->g_124.s6", print_hash_value);
    transparent_crc(p_894->g_124.s7, "p_894->g_124.s7", print_hash_value);
    transparent_crc(p_894->g_124.s8, "p_894->g_124.s8", print_hash_value);
    transparent_crc(p_894->g_124.s9, "p_894->g_124.s9", print_hash_value);
    transparent_crc(p_894->g_124.sa, "p_894->g_124.sa", print_hash_value);
    transparent_crc(p_894->g_124.sb, "p_894->g_124.sb", print_hash_value);
    transparent_crc(p_894->g_124.sc, "p_894->g_124.sc", print_hash_value);
    transparent_crc(p_894->g_124.sd, "p_894->g_124.sd", print_hash_value);
    transparent_crc(p_894->g_124.se, "p_894->g_124.se", print_hash_value);
    transparent_crc(p_894->g_124.sf, "p_894->g_124.sf", print_hash_value);
    transparent_crc(p_894->g_128.s0, "p_894->g_128.s0", print_hash_value);
    transparent_crc(p_894->g_128.s1, "p_894->g_128.s1", print_hash_value);
    transparent_crc(p_894->g_128.s2, "p_894->g_128.s2", print_hash_value);
    transparent_crc(p_894->g_128.s3, "p_894->g_128.s3", print_hash_value);
    transparent_crc(p_894->g_128.s4, "p_894->g_128.s4", print_hash_value);
    transparent_crc(p_894->g_128.s5, "p_894->g_128.s5", print_hash_value);
    transparent_crc(p_894->g_128.s6, "p_894->g_128.s6", print_hash_value);
    transparent_crc(p_894->g_128.s7, "p_894->g_128.s7", print_hash_value);
    transparent_crc(p_894->g_128.s8, "p_894->g_128.s8", print_hash_value);
    transparent_crc(p_894->g_128.s9, "p_894->g_128.s9", print_hash_value);
    transparent_crc(p_894->g_128.sa, "p_894->g_128.sa", print_hash_value);
    transparent_crc(p_894->g_128.sb, "p_894->g_128.sb", print_hash_value);
    transparent_crc(p_894->g_128.sc, "p_894->g_128.sc", print_hash_value);
    transparent_crc(p_894->g_128.sd, "p_894->g_128.sd", print_hash_value);
    transparent_crc(p_894->g_128.se, "p_894->g_128.se", print_hash_value);
    transparent_crc(p_894->g_128.sf, "p_894->g_128.sf", print_hash_value);
    transparent_crc(p_894->g_137.s0, "p_894->g_137.s0", print_hash_value);
    transparent_crc(p_894->g_137.s1, "p_894->g_137.s1", print_hash_value);
    transparent_crc(p_894->g_137.s2, "p_894->g_137.s2", print_hash_value);
    transparent_crc(p_894->g_137.s3, "p_894->g_137.s3", print_hash_value);
    transparent_crc(p_894->g_137.s4, "p_894->g_137.s4", print_hash_value);
    transparent_crc(p_894->g_137.s5, "p_894->g_137.s5", print_hash_value);
    transparent_crc(p_894->g_137.s6, "p_894->g_137.s6", print_hash_value);
    transparent_crc(p_894->g_137.s7, "p_894->g_137.s7", print_hash_value);
    transparent_crc(p_894->g_138, "p_894->g_138", print_hash_value);
    transparent_crc(p_894->g_149.x, "p_894->g_149.x", print_hash_value);
    transparent_crc(p_894->g_149.y, "p_894->g_149.y", print_hash_value);
    transparent_crc(p_894->g_149.z, "p_894->g_149.z", print_hash_value);
    transparent_crc(p_894->g_149.w, "p_894->g_149.w", print_hash_value);
    transparent_crc(p_894->g_150.x, "p_894->g_150.x", print_hash_value);
    transparent_crc(p_894->g_150.y, "p_894->g_150.y", print_hash_value);
    transparent_crc(p_894->g_150.z, "p_894->g_150.z", print_hash_value);
    transparent_crc(p_894->g_150.w, "p_894->g_150.w", print_hash_value);
    transparent_crc(p_894->g_153, "p_894->g_153", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_894->g_159[i], "p_894->g_159[i]", print_hash_value);

    }
    transparent_crc(p_894->g_163.x, "p_894->g_163.x", print_hash_value);
    transparent_crc(p_894->g_163.y, "p_894->g_163.y", print_hash_value);
    transparent_crc(p_894->g_205.s0, "p_894->g_205.s0", print_hash_value);
    transparent_crc(p_894->g_205.s1, "p_894->g_205.s1", print_hash_value);
    transparent_crc(p_894->g_205.s2, "p_894->g_205.s2", print_hash_value);
    transparent_crc(p_894->g_205.s3, "p_894->g_205.s3", print_hash_value);
    transparent_crc(p_894->g_205.s4, "p_894->g_205.s4", print_hash_value);
    transparent_crc(p_894->g_205.s5, "p_894->g_205.s5", print_hash_value);
    transparent_crc(p_894->g_205.s6, "p_894->g_205.s6", print_hash_value);
    transparent_crc(p_894->g_205.s7, "p_894->g_205.s7", print_hash_value);
    transparent_crc(p_894->g_205.s8, "p_894->g_205.s8", print_hash_value);
    transparent_crc(p_894->g_205.s9, "p_894->g_205.s9", print_hash_value);
    transparent_crc(p_894->g_205.sa, "p_894->g_205.sa", print_hash_value);
    transparent_crc(p_894->g_205.sb, "p_894->g_205.sb", print_hash_value);
    transparent_crc(p_894->g_205.sc, "p_894->g_205.sc", print_hash_value);
    transparent_crc(p_894->g_205.sd, "p_894->g_205.sd", print_hash_value);
    transparent_crc(p_894->g_205.se, "p_894->g_205.se", print_hash_value);
    transparent_crc(p_894->g_205.sf, "p_894->g_205.sf", print_hash_value);
    transparent_crc(p_894->g_208, "p_894->g_208", print_hash_value);
    transparent_crc(p_894->g_209, "p_894->g_209", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_894->g_221[i], "p_894->g_221[i]", print_hash_value);

    }
    transparent_crc(p_894->g_279.x, "p_894->g_279.x", print_hash_value);
    transparent_crc(p_894->g_279.y, "p_894->g_279.y", print_hash_value);
    transparent_crc(p_894->g_280.s0, "p_894->g_280.s0", print_hash_value);
    transparent_crc(p_894->g_280.s1, "p_894->g_280.s1", print_hash_value);
    transparent_crc(p_894->g_280.s2, "p_894->g_280.s2", print_hash_value);
    transparent_crc(p_894->g_280.s3, "p_894->g_280.s3", print_hash_value);
    transparent_crc(p_894->g_280.s4, "p_894->g_280.s4", print_hash_value);
    transparent_crc(p_894->g_280.s5, "p_894->g_280.s5", print_hash_value);
    transparent_crc(p_894->g_280.s6, "p_894->g_280.s6", print_hash_value);
    transparent_crc(p_894->g_280.s7, "p_894->g_280.s7", print_hash_value);
    transparent_crc(p_894->g_284.x, "p_894->g_284.x", print_hash_value);
    transparent_crc(p_894->g_284.y, "p_894->g_284.y", print_hash_value);
    transparent_crc(p_894->g_284.z, "p_894->g_284.z", print_hash_value);
    transparent_crc(p_894->g_284.w, "p_894->g_284.w", print_hash_value);
    transparent_crc(p_894->g_288.s0, "p_894->g_288.s0", print_hash_value);
    transparent_crc(p_894->g_288.s1, "p_894->g_288.s1", print_hash_value);
    transparent_crc(p_894->g_288.s2, "p_894->g_288.s2", print_hash_value);
    transparent_crc(p_894->g_288.s3, "p_894->g_288.s3", print_hash_value);
    transparent_crc(p_894->g_288.s4, "p_894->g_288.s4", print_hash_value);
    transparent_crc(p_894->g_288.s5, "p_894->g_288.s5", print_hash_value);
    transparent_crc(p_894->g_288.s6, "p_894->g_288.s6", print_hash_value);
    transparent_crc(p_894->g_288.s7, "p_894->g_288.s7", print_hash_value);
    transparent_crc(p_894->g_288.s8, "p_894->g_288.s8", print_hash_value);
    transparent_crc(p_894->g_288.s9, "p_894->g_288.s9", print_hash_value);
    transparent_crc(p_894->g_288.sa, "p_894->g_288.sa", print_hash_value);
    transparent_crc(p_894->g_288.sb, "p_894->g_288.sb", print_hash_value);
    transparent_crc(p_894->g_288.sc, "p_894->g_288.sc", print_hash_value);
    transparent_crc(p_894->g_288.sd, "p_894->g_288.sd", print_hash_value);
    transparent_crc(p_894->g_288.se, "p_894->g_288.se", print_hash_value);
    transparent_crc(p_894->g_288.sf, "p_894->g_288.sf", print_hash_value);
    transparent_crc(p_894->g_298.x, "p_894->g_298.x", print_hash_value);
    transparent_crc(p_894->g_298.y, "p_894->g_298.y", print_hash_value);
    transparent_crc(p_894->g_298.z, "p_894->g_298.z", print_hash_value);
    transparent_crc(p_894->g_298.w, "p_894->g_298.w", print_hash_value);
    transparent_crc(p_894->g_310.s0, "p_894->g_310.s0", print_hash_value);
    transparent_crc(p_894->g_310.s1, "p_894->g_310.s1", print_hash_value);
    transparent_crc(p_894->g_310.s2, "p_894->g_310.s2", print_hash_value);
    transparent_crc(p_894->g_310.s3, "p_894->g_310.s3", print_hash_value);
    transparent_crc(p_894->g_310.s4, "p_894->g_310.s4", print_hash_value);
    transparent_crc(p_894->g_310.s5, "p_894->g_310.s5", print_hash_value);
    transparent_crc(p_894->g_310.s6, "p_894->g_310.s6", print_hash_value);
    transparent_crc(p_894->g_310.s7, "p_894->g_310.s7", print_hash_value);
    transparent_crc(p_894->g_360.f0, "p_894->g_360.f0", print_hash_value);
    transparent_crc(p_894->g_362, "p_894->g_362", print_hash_value);
    transparent_crc(p_894->g_364, "p_894->g_364", print_hash_value);
    transparent_crc(p_894->g_391.f0, "p_894->g_391.f0", print_hash_value);
    transparent_crc(p_894->g_391.f1, "p_894->g_391.f1", print_hash_value);
    transparent_crc(p_894->g_391.f2, "p_894->g_391.f2", print_hash_value);
    transparent_crc(p_894->g_391.f3, "p_894->g_391.f3", print_hash_value);
    transparent_crc(p_894->g_391.f4, "p_894->g_391.f4", print_hash_value);
    transparent_crc(p_894->g_436, "p_894->g_436", print_hash_value);
    transparent_crc(p_894->g_441.f0, "p_894->g_441.f0", print_hash_value);
    transparent_crc(p_894->g_441.f1, "p_894->g_441.f1", print_hash_value);
    transparent_crc(p_894->g_441.f2, "p_894->g_441.f2", print_hash_value);
    transparent_crc(p_894->g_441.f3, "p_894->g_441.f3", print_hash_value);
    transparent_crc(p_894->g_441.f4, "p_894->g_441.f4", print_hash_value);
    transparent_crc(p_894->g_453.s0, "p_894->g_453.s0", print_hash_value);
    transparent_crc(p_894->g_453.s1, "p_894->g_453.s1", print_hash_value);
    transparent_crc(p_894->g_453.s2, "p_894->g_453.s2", print_hash_value);
    transparent_crc(p_894->g_453.s3, "p_894->g_453.s3", print_hash_value);
    transparent_crc(p_894->g_453.s4, "p_894->g_453.s4", print_hash_value);
    transparent_crc(p_894->g_453.s5, "p_894->g_453.s5", print_hash_value);
    transparent_crc(p_894->g_453.s6, "p_894->g_453.s6", print_hash_value);
    transparent_crc(p_894->g_453.s7, "p_894->g_453.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_894->g_463[i].f0, "p_894->g_463[i].f0", print_hash_value);

    }
    transparent_crc(p_894->g_536.x, "p_894->g_536.x", print_hash_value);
    transparent_crc(p_894->g_536.y, "p_894->g_536.y", print_hash_value);
    transparent_crc(p_894->g_547, "p_894->g_547", print_hash_value);
    transparent_crc(p_894->g_549.x, "p_894->g_549.x", print_hash_value);
    transparent_crc(p_894->g_549.y, "p_894->g_549.y", print_hash_value);
    transparent_crc(p_894->g_549.z, "p_894->g_549.z", print_hash_value);
    transparent_crc(p_894->g_549.w, "p_894->g_549.w", print_hash_value);
    transparent_crc(p_894->g_554.s0, "p_894->g_554.s0", print_hash_value);
    transparent_crc(p_894->g_554.s1, "p_894->g_554.s1", print_hash_value);
    transparent_crc(p_894->g_554.s2, "p_894->g_554.s2", print_hash_value);
    transparent_crc(p_894->g_554.s3, "p_894->g_554.s3", print_hash_value);
    transparent_crc(p_894->g_554.s4, "p_894->g_554.s4", print_hash_value);
    transparent_crc(p_894->g_554.s5, "p_894->g_554.s5", print_hash_value);
    transparent_crc(p_894->g_554.s6, "p_894->g_554.s6", print_hash_value);
    transparent_crc(p_894->g_554.s7, "p_894->g_554.s7", print_hash_value);
    transparent_crc(p_894->g_554.s8, "p_894->g_554.s8", print_hash_value);
    transparent_crc(p_894->g_554.s9, "p_894->g_554.s9", print_hash_value);
    transparent_crc(p_894->g_554.sa, "p_894->g_554.sa", print_hash_value);
    transparent_crc(p_894->g_554.sb, "p_894->g_554.sb", print_hash_value);
    transparent_crc(p_894->g_554.sc, "p_894->g_554.sc", print_hash_value);
    transparent_crc(p_894->g_554.sd, "p_894->g_554.sd", print_hash_value);
    transparent_crc(p_894->g_554.se, "p_894->g_554.se", print_hash_value);
    transparent_crc(p_894->g_554.sf, "p_894->g_554.sf", print_hash_value);
    transparent_crc(p_894->g_555.x, "p_894->g_555.x", print_hash_value);
    transparent_crc(p_894->g_555.y, "p_894->g_555.y", print_hash_value);
    transparent_crc(p_894->g_567.x, "p_894->g_567.x", print_hash_value);
    transparent_crc(p_894->g_567.y, "p_894->g_567.y", print_hash_value);
    transparent_crc(p_894->g_573.x, "p_894->g_573.x", print_hash_value);
    transparent_crc(p_894->g_573.y, "p_894->g_573.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_894->g_612[i].f0, "p_894->g_612[i].f0", print_hash_value);
        transparent_crc(p_894->g_612[i].f1, "p_894->g_612[i].f1", print_hash_value);
        transparent_crc(p_894->g_612[i].f2, "p_894->g_612[i].f2", print_hash_value);
        transparent_crc(p_894->g_612[i].f3, "p_894->g_612[i].f3", print_hash_value);
        transparent_crc(p_894->g_612[i].f4, "p_894->g_612[i].f4", print_hash_value);

    }
    transparent_crc(p_894->g_641.f0, "p_894->g_641.f0", print_hash_value);
    transparent_crc(p_894->g_641.f1, "p_894->g_641.f1", print_hash_value);
    transparent_crc(p_894->g_641.f2, "p_894->g_641.f2", print_hash_value);
    transparent_crc(p_894->g_641.f3, "p_894->g_641.f3", print_hash_value);
    transparent_crc(p_894->g_641.f4, "p_894->g_641.f4", print_hash_value);
    transparent_crc(p_894->g_653.s0, "p_894->g_653.s0", print_hash_value);
    transparent_crc(p_894->g_653.s1, "p_894->g_653.s1", print_hash_value);
    transparent_crc(p_894->g_653.s2, "p_894->g_653.s2", print_hash_value);
    transparent_crc(p_894->g_653.s3, "p_894->g_653.s3", print_hash_value);
    transparent_crc(p_894->g_653.s4, "p_894->g_653.s4", print_hash_value);
    transparent_crc(p_894->g_653.s5, "p_894->g_653.s5", print_hash_value);
    transparent_crc(p_894->g_653.s6, "p_894->g_653.s6", print_hash_value);
    transparent_crc(p_894->g_653.s7, "p_894->g_653.s7", print_hash_value);
    transparent_crc(p_894->g_682.f0, "p_894->g_682.f0", print_hash_value);
    transparent_crc(p_894->g_682.f1, "p_894->g_682.f1", print_hash_value);
    transparent_crc(p_894->g_682.f2, "p_894->g_682.f2", print_hash_value);
    transparent_crc(p_894->g_682.f3, "p_894->g_682.f3", print_hash_value);
    transparent_crc(p_894->g_682.f4, "p_894->g_682.f4", print_hash_value);
    transparent_crc(p_894->g_683.f0, "p_894->g_683.f0", print_hash_value);
    transparent_crc(p_894->g_683.f1, "p_894->g_683.f1", print_hash_value);
    transparent_crc(p_894->g_683.f2, "p_894->g_683.f2", print_hash_value);
    transparent_crc(p_894->g_683.f3, "p_894->g_683.f3", print_hash_value);
    transparent_crc(p_894->g_683.f4, "p_894->g_683.f4", print_hash_value);
    transparent_crc(p_894->g_687, "p_894->g_687", print_hash_value);
    transparent_crc(p_894->g_693.f0, "p_894->g_693.f0", print_hash_value);
    transparent_crc(p_894->g_693.f1, "p_894->g_693.f1", print_hash_value);
    transparent_crc(p_894->g_693.f2, "p_894->g_693.f2", print_hash_value);
    transparent_crc(p_894->g_693.f3, "p_894->g_693.f3", print_hash_value);
    transparent_crc(p_894->g_693.f4, "p_894->g_693.f4", print_hash_value);
    transparent_crc(p_894->g_694.f0, "p_894->g_694.f0", print_hash_value);
    transparent_crc(p_894->g_694.f1, "p_894->g_694.f1", print_hash_value);
    transparent_crc(p_894->g_694.f2, "p_894->g_694.f2", print_hash_value);
    transparent_crc(p_894->g_694.f3, "p_894->g_694.f3", print_hash_value);
    transparent_crc(p_894->g_694.f4, "p_894->g_694.f4", print_hash_value);
    transparent_crc(p_894->g_695.f0, "p_894->g_695.f0", print_hash_value);
    transparent_crc(p_894->g_695.f1, "p_894->g_695.f1", print_hash_value);
    transparent_crc(p_894->g_695.f2, "p_894->g_695.f2", print_hash_value);
    transparent_crc(p_894->g_695.f3, "p_894->g_695.f3", print_hash_value);
    transparent_crc(p_894->g_695.f4, "p_894->g_695.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_894->g_697[i][j].f0, "p_894->g_697[i][j].f0", print_hash_value);
            transparent_crc(p_894->g_697[i][j].f1, "p_894->g_697[i][j].f1", print_hash_value);
            transparent_crc(p_894->g_697[i][j].f2, "p_894->g_697[i][j].f2", print_hash_value);
            transparent_crc(p_894->g_697[i][j].f3, "p_894->g_697[i][j].f3", print_hash_value);
            transparent_crc(p_894->g_697[i][j].f4, "p_894->g_697[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_894->g_713.s0, "p_894->g_713.s0", print_hash_value);
    transparent_crc(p_894->g_713.s1, "p_894->g_713.s1", print_hash_value);
    transparent_crc(p_894->g_713.s2, "p_894->g_713.s2", print_hash_value);
    transparent_crc(p_894->g_713.s3, "p_894->g_713.s3", print_hash_value);
    transparent_crc(p_894->g_713.s4, "p_894->g_713.s4", print_hash_value);
    transparent_crc(p_894->g_713.s5, "p_894->g_713.s5", print_hash_value);
    transparent_crc(p_894->g_713.s6, "p_894->g_713.s6", print_hash_value);
    transparent_crc(p_894->g_713.s7, "p_894->g_713.s7", print_hash_value);
    transparent_crc(p_894->g_713.s8, "p_894->g_713.s8", print_hash_value);
    transparent_crc(p_894->g_713.s9, "p_894->g_713.s9", print_hash_value);
    transparent_crc(p_894->g_713.sa, "p_894->g_713.sa", print_hash_value);
    transparent_crc(p_894->g_713.sb, "p_894->g_713.sb", print_hash_value);
    transparent_crc(p_894->g_713.sc, "p_894->g_713.sc", print_hash_value);
    transparent_crc(p_894->g_713.sd, "p_894->g_713.sd", print_hash_value);
    transparent_crc(p_894->g_713.se, "p_894->g_713.se", print_hash_value);
    transparent_crc(p_894->g_713.sf, "p_894->g_713.sf", print_hash_value);
    transparent_crc(p_894->g_720.s0, "p_894->g_720.s0", print_hash_value);
    transparent_crc(p_894->g_720.s1, "p_894->g_720.s1", print_hash_value);
    transparent_crc(p_894->g_720.s2, "p_894->g_720.s2", print_hash_value);
    transparent_crc(p_894->g_720.s3, "p_894->g_720.s3", print_hash_value);
    transparent_crc(p_894->g_720.s4, "p_894->g_720.s4", print_hash_value);
    transparent_crc(p_894->g_720.s5, "p_894->g_720.s5", print_hash_value);
    transparent_crc(p_894->g_720.s6, "p_894->g_720.s6", print_hash_value);
    transparent_crc(p_894->g_720.s7, "p_894->g_720.s7", print_hash_value);
    transparent_crc(p_894->g_739.f0, "p_894->g_739.f0", print_hash_value);
    transparent_crc(p_894->g_748.s0, "p_894->g_748.s0", print_hash_value);
    transparent_crc(p_894->g_748.s1, "p_894->g_748.s1", print_hash_value);
    transparent_crc(p_894->g_748.s2, "p_894->g_748.s2", print_hash_value);
    transparent_crc(p_894->g_748.s3, "p_894->g_748.s3", print_hash_value);
    transparent_crc(p_894->g_748.s4, "p_894->g_748.s4", print_hash_value);
    transparent_crc(p_894->g_748.s5, "p_894->g_748.s5", print_hash_value);
    transparent_crc(p_894->g_748.s6, "p_894->g_748.s6", print_hash_value);
    transparent_crc(p_894->g_748.s7, "p_894->g_748.s7", print_hash_value);
    transparent_crc(p_894->g_825.x, "p_894->g_825.x", print_hash_value);
    transparent_crc(p_894->g_825.y, "p_894->g_825.y", print_hash_value);
    transparent_crc(p_894->g_825.z, "p_894->g_825.z", print_hash_value);
    transparent_crc(p_894->g_825.w, "p_894->g_825.w", print_hash_value);
    transparent_crc(p_894->g_829.s0, "p_894->g_829.s0", print_hash_value);
    transparent_crc(p_894->g_829.s1, "p_894->g_829.s1", print_hash_value);
    transparent_crc(p_894->g_829.s2, "p_894->g_829.s2", print_hash_value);
    transparent_crc(p_894->g_829.s3, "p_894->g_829.s3", print_hash_value);
    transparent_crc(p_894->g_829.s4, "p_894->g_829.s4", print_hash_value);
    transparent_crc(p_894->g_829.s5, "p_894->g_829.s5", print_hash_value);
    transparent_crc(p_894->g_829.s6, "p_894->g_829.s6", print_hash_value);
    transparent_crc(p_894->g_829.s7, "p_894->g_829.s7", print_hash_value);
    transparent_crc(p_894->g_831.x, "p_894->g_831.x", print_hash_value);
    transparent_crc(p_894->g_831.y, "p_894->g_831.y", print_hash_value);
    transparent_crc(p_894->g_839.f0, "p_894->g_839.f0", print_hash_value);
    transparent_crc(p_894->g_839.f1, "p_894->g_839.f1", print_hash_value);
    transparent_crc(p_894->g_839.f2, "p_894->g_839.f2", print_hash_value);
    transparent_crc(p_894->g_839.f3, "p_894->g_839.f3", print_hash_value);
    transparent_crc(p_894->g_839.f4, "p_894->g_839.f4", print_hash_value);
    transparent_crc(p_894->v_collective, "p_894->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 8; i++)
            transparent_crc(p_894->l_special_values[i], "p_894->l_special_values[i]", print_hash_value);
    transparent_crc(p_894->l_comm_values[get_linear_local_id()], "p_894->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_894->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_894->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
