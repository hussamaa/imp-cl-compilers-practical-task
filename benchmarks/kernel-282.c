// --atomics 35 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 16,14,40 -l 16,1,2
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

__constant uint32_t permutations[10][32] = {
{28,15,7,8,22,0,24,1,4,21,3,20,17,13,10,29,5,11,26,23,31,18,19,30,27,2,14,16,9,12,25,6}, // permutation 0
{8,3,11,13,29,14,19,26,10,24,4,16,7,0,30,27,9,25,20,12,22,6,2,23,17,18,31,1,21,28,5,15}, // permutation 1
{8,12,21,19,0,3,30,25,14,29,24,5,23,16,27,15,4,11,28,20,2,31,6,7,18,17,26,1,22,10,13,9}, // permutation 2
{1,25,29,23,31,17,5,28,2,12,24,15,20,27,16,9,14,4,26,22,0,13,3,21,19,30,11,7,10,8,6,18}, // permutation 3
{12,28,5,0,21,26,13,31,22,18,3,2,4,23,10,9,1,6,29,7,16,25,20,15,17,27,30,11,14,19,8,24}, // permutation 4
{20,8,24,11,14,18,0,15,7,12,23,31,4,28,2,30,16,3,5,21,25,13,6,26,17,10,19,29,27,9,22,1}, // permutation 5
{11,8,14,16,26,5,31,0,17,18,4,23,27,6,29,1,10,13,3,21,15,24,20,30,12,28,19,22,9,2,25,7}, // permutation 6
{22,2,23,17,30,8,15,5,1,18,6,31,0,9,3,27,10,25,14,13,19,12,28,29,11,16,26,4,24,21,7,20}, // permutation 7
{15,26,22,6,14,3,9,2,18,16,30,7,29,23,11,5,28,17,0,4,10,19,20,27,1,8,12,25,21,31,24,13}, // permutation 8
{16,26,13,10,14,6,15,9,3,5,31,18,2,4,29,25,11,20,12,7,23,21,1,27,0,28,19,24,30,22,8,17} // permutation 9
};

// Seed: 1612250482

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int16_t  f0;
   volatile uint32_t  f1;
   uint16_t  f2;
   volatile uint16_t  f3;
   int32_t  f4;
};

struct S1 {
   int16_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   uint32_t  f5;
};

struct S2 {
   struct S1  f0;
   uint64_t  f1;
   volatile uint64_t  f2;
};

struct S3 {
   uint8_t  f0;
};

struct S4 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   struct S2  f3;
   int32_t  f4;
   int64_t  f5;
   int16_t  f6;
   volatile uint32_t  f7;
};

struct S5 {
   int16_t  f0;
   uint64_t  f1;
   volatile struct S0  f2;
   int32_t  f3;
};

struct S6 {
   volatile struct S1  f0;
   int16_t  f1;
   struct S1  f2;
   uint32_t  f3;
};

struct S7 {
   uint32_t  f0;
   volatile uint32_t  f1;
   struct S1  f2;
   struct S1  f3;
   struct S6  f4;
};

union U8 {
   struct S1  f0;
};

struct S9 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6;
    int32_t g_7;
    int16_t g_13;
    volatile int32_t g_29;
    int16_t *g_54;
    int16_t g_57;
    int32_t g_59;
    int32_t g_62[7][3][4];
    uint16_t g_64;
    struct S5 g_76;
    struct S5 g_79;
    struct S3 g_80;
    VECTOR(int32_t, 4) g_92;
    VECTOR(int16_t, 2) g_93;
    VECTOR(int16_t, 16) g_95;
    VECTOR(uint16_t, 2) g_96;
    VECTOR(int64_t, 2) g_107;
    int32_t g_116[9];
    int32_t * volatile g_118;
    int32_t * volatile *g_117;
    int32_t g_124;
    struct S1 g_153;
    VECTOR(int32_t, 4) g_159;
    VECTOR(int8_t, 16) g_170;
    VECTOR(int8_t, 4) g_171;
    int32_t *g_179;
    struct S5 g_182;
    struct S5 *g_181[2];
    struct S5 **g_180;
    VECTOR(int32_t, 8) g_196;
    VECTOR(int32_t, 4) g_231;
    volatile int16_t g_239;
    volatile int16_t *g_238;
    VECTOR(int16_t, 16) g_249;
    VECTOR(int16_t, 8) g_250;
    VECTOR(int16_t, 16) g_265;
    union U8 g_275;
    union U8 *g_274;
    VECTOR(uint8_t, 2) g_334;
    VECTOR(int32_t, 4) g_341;
    VECTOR(int32_t, 4) g_343;
    VECTOR(int32_t, 2) g_345;
    struct S3 g_370;
    volatile struct S0 g_374;
    volatile struct S0 *g_373;
    union U8 g_379;
    volatile struct S6 g_396;
    uint32_t *g_407;
    uint32_t ** volatile g_406;
    volatile struct S4 g_411;
    volatile struct S4 g_422;
    volatile int32_t g_433;
    struct S5 g_441;
    volatile struct S0 g_444;
    volatile struct S6 g_445;
    struct S4 g_447;
    struct S4 *g_449;
    struct S2 *g_453;
    volatile uint32_t g_466;
    volatile VECTOR(int32_t, 2) g_471;
    VECTOR(int64_t, 16) g_485;
    uint64_t g_541;
    struct S5 g_542;
    volatile struct S1 * volatile g_546;
    struct S4 g_575;
    struct S0 g_577[8];
    volatile VECTOR(int16_t, 8) g_608;
    volatile VECTOR(int16_t, 2) g_609;
    int32_t g_641;
    VECTOR(int64_t, 2) g_646;
    VECTOR(int32_t, 8) g_672;
    uint32_t g_679;
    union U8 g_688[6][2];
    VECTOR(uint32_t, 8) g_698;
    int8_t g_705;
    VECTOR(uint8_t, 16) g_713;
    int32_t * volatile g_726;
    struct S6 g_729;
    uint8_t g_731;
    volatile VECTOR(uint32_t, 16) g_738;
    struct S4 *** volatile g_752;
    struct S4 **g_753;
    volatile VECTOR(int32_t, 4) g_760;
    int16_t **g_765;
    volatile struct S7 g_769;
    int32_t g_785;
    VECTOR(uint16_t, 2) g_816;
    int8_t *g_831;
    int8_t **g_830;
    volatile int16_t g_847[6];
    volatile struct S0 g_855;
    volatile struct S1 * volatile g_859[1];
    volatile struct S1 * volatile g_860[1][5][1];
    volatile struct S1 * volatile g_861;
    volatile VECTOR(int64_t, 4) g_890;
    struct S0 g_900;
    volatile struct S1 * volatile g_905[4][2];
    volatile struct S2 g_926[2];
    VECTOR(int16_t, 2) g_938;
    volatile VECTOR(int64_t, 4) g_944;
    uint8_t g_945;
    VECTOR(uint32_t, 2) g_959;
    struct S7 g_964;
    struct S5 g_971[4];
    VECTOR(uint64_t, 4) g_1000;
    VECTOR(uint16_t, 8) g_1041;
    volatile VECTOR(int16_t, 2) g_1043;
    volatile struct S0 g_1059;
    VECTOR(uint16_t, 4) g_1076;
    volatile int16_t g_1102[10];
    struct S4 ***g_1131[4];
    struct S4 ****g_1130[5];
    volatile VECTOR(uint32_t, 16) g_1159;
    struct S2 ** volatile g_1166;
    VECTOR(uint16_t, 2) g_1196;
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
int64_t  func_1(struct S9 * p_1208);
struct S6  func_15(int16_t * p_16, int16_t  p_17, int32_t  p_18, struct S9 * p_1208);
int16_t * func_19(uint16_t  p_20, struct S9 * p_1208);
uint32_t  func_23(int32_t  p_24, uint64_t  p_25, int16_t * p_26, int32_t  p_27, union U8  p_28, struct S9 * p_1208);
int16_t * func_30(int16_t * p_31, uint32_t  p_32, int64_t  p_33, struct S3  p_34, struct S9 * p_1208);
int16_t * func_35(int16_t * p_36, int16_t * p_37, uint32_t  p_38, int32_t  p_39, struct S9 * p_1208);
int16_t * func_40(int8_t  p_41, uint64_t  p_42, int16_t * p_43, int64_t  p_44, struct S9 * p_1208);
uint64_t  func_45(uint8_t  p_46, struct S9 * p_1208);
int32_t * func_48(int32_t * p_49, int16_t * p_50, int16_t * p_51, uint32_t  p_52, int64_t  p_53, struct S9 * p_1208);
int16_t * func_55(int32_t * p_56, struct S9 * p_1208);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1208->g_3 p_1208->g_comm_values p_1208->g_2 p_1208->g_13 p_1208->g_95 p_1208->g_688.f0.f3 p_1208->g_738 p_1208->g_182.f0 p_1208->g_447.f3.f0.f4 p_1208->g_729.f3 p_1208->g_80 p_1208->g_57 p_1208->g_116 p_1208->g_117 p_1208->g_153 p_1208->g_179 p_1208->g_180 p_1208->g_769 p_1208->g_447.f3.f1 p_1208->g_411.f1 p_1208->g_370 p_1208->g_407 p_1208->g_688.f0.f0 p_1208->g_575.f0 p_1208->g_672 p_1208->g_441.f3 p_1208->g_275.f0.f1 p_1208->g_785 p_1208->g_577.f4 p_1208->g_641 p_1208->g_830 p_1208->g_445.f2.f2 p_1208->g_79.f2.f2 p_1208->g_411.f3.f0.f0 p_1208->g_379.f0.f3 p_1208->g_118 p_1208->g_753 p_1208->g_575.f3.f1 p_1208->g_855 p_1208->g_546 p_1208->g_445.f2 p_1208->g_861 p_1208->g_379.f0.f4 p_1208->g_890 p_1208->g_238 p_1208->g_239 p_1208->g_7 p_1208->g_729.f2.f4 p_1208->g_575.f3.f0.f1 p_1208->g_447.f3.f0.f2 p_1208->g_379.f0.f0 p_1208->g_900 p_1208->g_411.f3.f0 p_1208->g_679 p_1208->g_92 p_1208->g_816 p_1208->g_926 p_1208->g_453 p_1208->g_575.f3.f0.f3 p_1208->g_449 p_1208->g_938 p_1208->g_944 p_1208->g_485 p_1208->g_731 p_1208->g_945 p_1208->g_343 p_1208->g_79.f1 p_1208->g_406 p_1208->g_249 p_1208->g_373 p_1208->g_760 p_1208->g_445 p_1208->g_471 p_1208->g_688.f0.f1 p_1208->g_971 p_1208->g_170 p_1208->g_959 p_1208->g_250 p_1208->g_729.f2.f3 p_1208->g_964.f3.f2 p_1208->g_411.f7 p_1208->g_231 p_1208->g_964.f3.f5 p_1208->g_964 p_1208->g_1041 p_1208->g_1043 p_1208->g_374 p_1208->g_729.f2.f5 p_1208->g_1059 p_1208->g_96 p_1208->g_379.f0.f5 p_1208->g_341 p_1208->g_182.f2.f0 p_1208->g_1159 p_1208->g_93 p_1208->g_196 p_1208->g_379.f0.f2 p_1208->g_1166 p_1208->g_1196 p_1208->g_447.f3.f0.f0 p_1208->g_447.f2 p_1208->g_422.f3.f0.f1
 * writes: p_1208->g_3 p_1208->g_7 p_1208->g_13 p_1208->g_688.f0.f3 p_1208->g_447.f5 p_1208->g_753 p_1208->g_729.f3 p_1208->g_64 p_1208->g_80 p_1208->g_79.f0 p_1208->g_116 p_1208->g_179 p_1208->g_153 p_1208->g_118 p_1208->g_641 p_1208->g_765 p_1208->g_447.f3.f1 p_1208->g_441.f3 p_1208->g_785 p_1208->g_577.f4 p_1208->g_575.f5 p_1208->g_449 p_1208->g_575.f3.f1 p_1208->g_411.f3.f0 p_1208->g_447.f3 p_1208->g_575.f3.f0.f3 p_1208->g_373 p_1208->g_76.f0 p_1208->g_250 p_1208->g_370.f0 p_1208->g_729.f2.f3 p_1208->g_575.f3.f0.f1 p_1208->g_964.f3.f2 p_1208->g_731 p_1208->g_964.f3.f5 p_1208->g_170 p_1208->g_964.f4.f1 p_1208->g_275.f0.f4 p_1208->g_964.f3.f4 p_1208->g_729.f2.f5 p_1208->g_453 p_1208->g_341
 */
int64_t  func_1(struct S9 * p_1208)
{ /* block id: 4 */
    VECTOR(int32_t, 8) l_14 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x1919C44DL), 0x1919C44DL), 0x1919C44DL, (-2L), 0x1919C44DL);
    int32_t l_744 = 9L;
    struct S5 **l_759 = &p_1208->g_181[0];
    int16_t **l_763 = (void*)0;
    VECTOR(int64_t, 4) l_826 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3B680291F5CFC763L), 0x3B680291F5CFC763L);
    VECTOR(int64_t, 4) l_827 = (VECTOR(int64_t, 4))(0x71F1D4B295FE53AAL, (VECTOR(int64_t, 2))(0x71F1D4B295FE53AAL, 0x5E6E158BDF5C36ECL), 0x5E6E158BDF5C36ECL);
    VECTOR(int64_t, 8) l_829 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x55138930B9480E52L), 0x55138930B9480E52L), 0x55138930B9480E52L, (-1L), 0x55138930B9480E52L);
    int64_t *l_832 = &p_1208->g_575.f5;
    VECTOR(int64_t, 2) l_834 = (VECTOR(int64_t, 2))((-1L), 9L);
    uint16_t l_838 = 0x31CCL;
    VECTOR(int32_t, 4) l_841 = (VECTOR(int32_t, 4))(0x6C6358C5L, (VECTOR(int32_t, 2))(0x6C6358C5L, 0x2F63FDAAL), 0x2F63FDAAL);
    int32_t l_845 = 0L;
    struct S4 *l_852 = &p_1208->g_575;
    int32_t l_868 = (-7L);
    int16_t l_869 = (-1L);
    uint32_t *l_916 = &p_1208->g_379.f0.f5;
    uint8_t l_923 = 0xCEL;
    struct S4 ***l_952[5][9][2] = {{{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753}},{{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753}},{{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753}},{{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753}},{{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753},{&p_1208->g_753,&p_1208->g_753}}};
    int8_t l_965 = 0x6DL;
    uint16_t l_983 = 0x39CAL;
    int32_t *l_1024 = (void*)0;
    uint32_t l_1040 = 0x1E7A74F0L;
    uint32_t *l_1081 = &p_1208->g_964.f3.f5;
    int8_t l_1093 = 0L;
    uint32_t l_1106 = 0UL;
    struct S0 *l_1167 = &p_1208->g_577[5];
    struct S1 *l_1206 = (void*)0;
    int i, j, k;
    for (p_1208->g_3 = (-13); (p_1208->g_3 == (-3)); p_1208->g_3++)
    { /* block id: 7 */
        uint64_t l_703 = 0UL;
        struct S0 *l_750 = &p_1208->g_577[5];
        int16_t *l_754 = (void*)0;
        int16_t *l_755 = (void*)0;
        int16_t l_779 = 0L;
        uint64_t l_782 = 0x78F22800DBCD5261L;
        if (p_1208->g_comm_values[p_1208->tid])
        { /* block id: 8 */
            uint64_t l_706 = 18446744073709551613UL;
            int32_t l_749 = (-1L);
            uint32_t *l_756 = &p_1208->g_729.f3;
            if (p_1208->g_2)
                break;
            for (p_1208->g_7 = 0; (p_1208->g_7 > (-9)); p_1208->g_7 = safe_sub_func_int32_t_s_s(p_1208->g_7, 7))
            { /* block id: 12 */
                int16_t *l_12 = &p_1208->g_13;
                uint32_t *l_689 = &p_1208->g_688[5][0].f0.f3;
                int8_t *l_704 = &p_1208->g_705;
                uint8_t *l_730 = &p_1208->g_731;
                int32_t l_743 = 0x3C35910DL;
                if (((safe_mod_func_uint16_t_u_u((((*l_12) |= p_1208->g_3) > (((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_14.s4623)).wyyxxzzyyxyyyzzz)), (int32_t)(((*l_730) |= (func_15(func_19(p_1208->g_2, p_1208), (p_1208->g_688[5][0] , (p_1208->g_343.x <= ((((*l_689) &= 0xCF9C43CDL) || (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((*l_704) ^= (safe_rshift_func_uint16_t_u_s(p_1208->g_96.x, ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_1208->g_698.s67)).yyyxxxxy)).s1 | (safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x1496L, 0x7DC3L)).odd, ((~(p_1208->g_comm_values[p_1208->tid] ^ p_1208->g_334.x)) > l_703))), p_1208->g_577[5].f2))) | p_1208->g_93.x)))), p_1208->g_485.se)) != l_703), l_14.s2)), l_14.s1))) && l_706))), p_1208->g_447.f3.f0.f3, p_1208) , 0xD6L)) | p_1208->g_646.y)))).sa <= 4294967291UL)), l_14.s6)) & p_1208->g_95.sc))
                { /* block id: 326 */
                    uint64_t l_745 = 2UL;
                    struct S5 **l_746 = &p_1208->g_181[0];
                    struct S5 ***l_747 = &l_746;
                    int64_t *l_748 = &p_1208->g_447.f5;
                    atomic_xor(&p_1208->l_atomic_reduction[0], ((((*l_748) = ((--(*l_689)) <= ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_14.s5, (((VECTOR(uint32_t, 16))(p_1208->g_738.s4041cacbf9a180f4)).s6 || l_14.s4))), ((safe_add_func_int32_t_s_s(p_1208->g_182.f0, (safe_mul_func_uint16_t_u_u((l_743 | l_744), (p_1208->g_447.f3.f0.f4 && l_745))))) , 1UL))) ^ (((*l_747) = l_746) == &p_1208->g_181[1])))) , l_743) != GROUP_DIVERGE(1, 1)) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1208->v_collective += p_1208->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    l_749 = 0x5184FABEL;
                    return p_1208->g_3;
                }
                else
                { /* block id: 333 */
                    struct S0 **l_751 = &l_750;
                    (*l_751) = l_750;
                    if (l_14.s1)
                        break;
                    if (l_703)
                        continue;
                    p_1208->g_753 = &p_1208->g_449;
                }
            }
            (*p_1208->g_117) = func_48(&p_1208->g_59, l_754, l_755, ((*l_756)--), (&p_1208->g_181[1] != l_759), p_1208);
        }
        else
        { /* block id: 342 */
            int32_t *l_761 = (void*)0;
            int32_t *l_762 = &p_1208->g_641;
            int16_t ***l_764[3];
            int i;
            for (i = 0; i < 3; i++)
                l_764[i] = &l_763;
            (*l_762) = ((VECTOR(int32_t, 2))(p_1208->g_760.ww)).hi;
            if (((p_1208->g_765 = l_763) != (void*)0))
            { /* block id: 345 */
                struct S0 **l_766 = &l_750;
                uint64_t *l_774 = &p_1208->g_447.f3.f1;
                uint8_t *l_783 = &p_1208->g_80.f0;
                int32_t *l_784 = &p_1208->g_441.f3;
                int32_t *l_786 = &p_1208->g_577[5].f4;
                (*l_766) = &p_1208->g_577[2];
                (*l_786) ^= ((*l_762) = ((p_1208->g_785 |= (safe_lshift_func_int16_t_s_u(((p_1208->g_769 , (safe_mul_func_int16_t_s_s(l_703, (safe_sub_func_uint16_t_u_u((0x6DAAE355360C1434L == ((*l_774)--)), p_1208->g_411.f1))))) <= ((p_1208->g_370 , ((*l_784) ^= (255UL < (((*l_783) = (((((((((*p_1208->g_407) , ((safe_lshift_func_uint16_t_u_u(((l_779 && (safe_lshift_func_uint16_t_u_s(p_1208->g_688[5][0].f0.f0, 2))) , 0x7B3AL), l_744)) < 253UL)) >= 0x4D8ABBDBL) > 9UL) == 0UL) ^ l_744) ^ l_703) , p_1208->g_575.f0) & l_782)) < p_1208->g_672.s3)))) , l_779)), p_1208->g_275.f0.f1))) < 0xD22CA931L));
                if ((atomic_inc(&p_1208->g_atomic_input[35 * get_linear_group_id() + 34]) == 0))
                { /* block id: 354 */
                    VECTOR(int32_t, 16) l_787 = (VECTOR(int32_t, 16))(0x3D6E12A7L, (VECTOR(int32_t, 4))(0x3D6E12A7L, (VECTOR(int32_t, 2))(0x3D6E12A7L, 0x71443B4BL), 0x71443B4BL), 0x71443B4BL, 0x3D6E12A7L, 0x71443B4BL, (VECTOR(int32_t, 2))(0x3D6E12A7L, 0x71443B4BL), (VECTOR(int32_t, 2))(0x3D6E12A7L, 0x71443B4BL), 0x3D6E12A7L, 0x71443B4BL, 0x3D6E12A7L, 0x71443B4BL);
                    VECTOR(int16_t, 16) l_788 = (VECTOR(int16_t, 16))(0x2CD8L, (VECTOR(int16_t, 4))(0x2CD8L, (VECTOR(int16_t, 2))(0x2CD8L, 1L), 1L), 1L, 0x2CD8L, 1L, (VECTOR(int16_t, 2))(0x2CD8L, 1L), (VECTOR(int16_t, 2))(0x2CD8L, 1L), 0x2CD8L, 1L, 0x2CD8L, 1L);
                    VECTOR(uint16_t, 2) l_789 = (VECTOR(uint16_t, 2))(9UL, 0x2F72L);
                    uint32_t l_790 = 4294967290UL;
                    int64_t l_791 = 0x0118CFACF5C665D0L;
                    int64_t l_792 = 7L;
                    int16_t l_793 = 0x0299L;
                    int8_t l_794 = 0x6CL;
                    int32_t l_795[5];
                    uint32_t l_796 = 4294967293UL;
                    struct S2 l_799 = {{-10L,0x1AC108055F296DC9L,-9L,0UL,0UL,0x6E68640CL},0xCA40EB51DED1FD81L,0x82FF279995C50377L};/* VOLATILE GLOBAL l_799 */
                    struct S7 l_801 = {4294967289UL,4294967295UL,{0x1A50L,1UL,0x46882CD7L,4294967291UL,65535UL,0xE3297BC9L},{0x7CCBL,0x0BD8F992A8FBB71EL,-1L,0x81B17949L,0x2BDFL,0UL},{{0x1D67L,0xC4C673838C7BBDA7L,0x13B4EB05L,7UL,0x3550L,0x690AAEA1L},0x1A49L,{-9L,1UL,0x0DEC588DL,4294967287UL,65526UL,0x77D6D21DL},0x8CC832F0L}};/* VOLATILE GLOBAL l_801 */
                    struct S7 *l_800 = &l_801;
                    struct S7 *l_802 = (void*)0;
                    struct S7 *l_803 = (void*)0;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_795[i] = 6L;
                    l_790 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x70B659FCL, ((VECTOR(int32_t, 2))(l_787.s5f)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_788.sb68a86a4a994f5a6)).odd)).s64, ((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(l_789.yx)), 65535UL)).hi))), (-8L), (-8L), 1L)))).s6215650142237173)).s6;
                    --l_796;
                    l_803 = (l_799 , (l_802 = l_800));
                    for (l_795[2] = (-22); (l_795[2] >= 3); l_795[2] = safe_add_func_uint32_t_u_u(l_795[2], 2))
                    { /* block id: 361 */
                        int64_t l_806 = 0L;
                        uint32_t l_807 = 0UL;
                        int16_t l_810 = 0x5BBDL;
                        int64_t l_811 = (-10L);
                        struct S3 *l_812 = (void*)0;
                        struct S2 l_814 = {{0x1A12L,0xE7EF1C01CDB0B96AL,0x49486116L,0UL,0xAD87L,0x8B86A91EL},18446744073709551613UL,0x865F45FFAE3A1CB0L};/* VOLATILE GLOBAL l_814 */
                        struct S2 *l_813 = &l_814;
                        struct S2 *l_815 = &l_814;
                        ++l_807;
                        l_811 |= l_810;
                        l_812 = (void*)0;
                        l_815 = l_813;
                    }
                    unsigned int result = 0;
                    result += l_787.sf;
                    result += l_787.se;
                    result += l_787.sd;
                    result += l_787.sc;
                    result += l_787.sb;
                    result += l_787.sa;
                    result += l_787.s9;
                    result += l_787.s8;
                    result += l_787.s7;
                    result += l_787.s6;
                    result += l_787.s5;
                    result += l_787.s4;
                    result += l_787.s3;
                    result += l_787.s2;
                    result += l_787.s1;
                    result += l_787.s0;
                    result += l_788.sf;
                    result += l_788.se;
                    result += l_788.sd;
                    result += l_788.sc;
                    result += l_788.sb;
                    result += l_788.sa;
                    result += l_788.s9;
                    result += l_788.s8;
                    result += l_788.s7;
                    result += l_788.s6;
                    result += l_788.s5;
                    result += l_788.s4;
                    result += l_788.s3;
                    result += l_788.s2;
                    result += l_788.s1;
                    result += l_788.s0;
                    result += l_789.y;
                    result += l_789.x;
                    result += l_790;
                    result += l_791;
                    result += l_792;
                    result += l_793;
                    result += l_794;
                    int l_795_i0;
                    for (l_795_i0 = 0; l_795_i0 < 5; l_795_i0++) {
                        result += l_795[l_795_i0];
                    }
                    result += l_796;
                    result += l_799.f0.f0;
                    result += l_799.f0.f1;
                    result += l_799.f0.f2;
                    result += l_799.f0.f3;
                    result += l_799.f0.f4;
                    result += l_799.f0.f5;
                    result += l_799.f1;
                    result += l_799.f2;
                    result += l_801.f0;
                    result += l_801.f1;
                    result += l_801.f2.f0;
                    result += l_801.f2.f1;
                    result += l_801.f2.f2;
                    result += l_801.f2.f3;
                    result += l_801.f2.f4;
                    result += l_801.f2.f5;
                    result += l_801.f3.f0;
                    result += l_801.f3.f1;
                    result += l_801.f3.f2;
                    result += l_801.f3.f3;
                    result += l_801.f3.f4;
                    result += l_801.f3.f5;
                    result += l_801.f4.f0.f0;
                    result += l_801.f4.f0.f1;
                    result += l_801.f4.f0.f2;
                    result += l_801.f4.f0.f3;
                    result += l_801.f4.f0.f4;
                    result += l_801.f4.f0.f5;
                    result += l_801.f4.f1;
                    result += l_801.f4.f2.f0;
                    result += l_801.f4.f2.f1;
                    result += l_801.f4.f2.f2;
                    result += l_801.f4.f2.f3;
                    result += l_801.f4.f2.f4;
                    result += l_801.f4.f2.f5;
                    result += l_801.f4.f3;
                    atomic_add(&p_1208->g_special_values[35 * get_linear_group_id() + 34], result);
                }
                else
                { /* block id: 367 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 370 */
                uint16_t *l_817 = &p_1208->g_447.f3.f0.f4;
                int16_t **l_818 = &l_754;
                (*l_762) &= (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1208->g_816.xyxx)), ((*l_817) |= ((VECTOR(uint16_t, 2))(65534UL, 0x9DCBL)).hi), 65528UL, 0x56A5L, 0x3674L)).s0 || (&p_1208->g_54 != l_818));
            }
            if ((atomic_inc(&p_1208->g_atomic_input[35 * get_linear_group_id() + 18]) == 4))
            { /* block id: 375 */
                uint8_t l_819 = 250UL;
                uint64_t l_820 = 5UL;
                int16_t l_821 = (-5L);
                VECTOR(int32_t, 4) l_822 = (VECTOR(int32_t, 4))(0x42769732L, (VECTOR(int32_t, 2))(0x42769732L, 0x4BFABFA3L), 0x4BFABFA3L);
                struct S1 l_823 = {0x2A8AL,0xF5A3FED499A7238BL,0x0986E789L,0x6201A593L,0xE560L,0UL};
                struct S1 l_824 = {0x0F10L,0UL,-1L,0xC4BC20BFL,1UL,4294967295UL};
                struct S1 l_825 = {9L,18446744073709551615UL,0x73C63CBBL,0UL,0x1424L,4294967295UL};
                int i;
                l_820 ^= l_819;
                l_825 = (l_821 , (l_824 = (l_822.w , l_823)));
                unsigned int result = 0;
                result += l_819;
                result += l_820;
                result += l_821;
                result += l_822.w;
                result += l_822.z;
                result += l_822.y;
                result += l_822.x;
                result += l_823.f0;
                result += l_823.f1;
                result += l_823.f2;
                result += l_823.f3;
                result += l_823.f4;
                result += l_823.f5;
                result += l_824.f0;
                result += l_824.f1;
                result += l_824.f2;
                result += l_824.f3;
                result += l_824.f4;
                result += l_824.f5;
                result += l_825.f0;
                result += l_825.f1;
                result += l_825.f2;
                result += l_825.f3;
                result += l_825.f4;
                result += l_825.f5;
                atomic_add(&p_1208->g_special_values[35 * get_linear_group_id() + 18], result);
            }
            else
            { /* block id: 379 */
                (1 + 1);
            }
            if (l_14.s3)
                continue;
        }
    }
    if (((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(l_826.yw)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_827.zw)), 0x6C7835F41FF619D0L, ((VECTOR(int64_t, 8))((safe_unary_minus_func_uint16_t_u(65532UL)), 0x1D6EEE5BBC498A66L, l_744, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_829.s67)).yxxx)), 1L)).s3, ((*l_832) = ((void*)0 == p_1208->g_830)), ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x4ED567D5987B06BAL, 0x11ED458F6705D2C0L)).yxxyyxyx)).s72, (int64_t)(+(safe_unary_minus_func_uint32_t_u(l_829.s2)))))).even, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(p_1208->g_445.f2.f2, ((VECTOR(int64_t, 2))(l_834.xx)), 8L)).ywwwzzzwxwzwxxzw, (int64_t)(safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_s(l_838, (safe_add_func_uint8_t_u_u((0x2664ED6A4B160EE7L ^ 0x63CECEF9D29B7956L), l_827.y))))))))).sc6)), 0x452A04E5CFC7ECBAL, ((VECTOR(int64_t, 2))(7L)), l_14.s5, ((VECTOR(int64_t, 4))(0L)))).s22af)).even))))), ((VECTOR(int64_t, 2))(0x758904DE7A1BD6B9L)), l_841.z, p_1208->g_79.f2.f2, p_1208->g_411.f3.f0.f0, (-1L), (-9L), 0x62E52AE2DD1BCD89L, p_1208->g_379.f0.f3, (-7L), l_826.x, 0x1E66369E872AA0F9L, 0x781374020947C984L, 0x05E585F4EAB6DB5AL)))))).sf , l_14.s0) | (-7L)))
    { /* block id: 386 */
        int32_t *l_842 = (void*)0;
        int32_t *l_843 = &p_1208->g_116[8];
        int32_t *l_844[3][3][9] = {{{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785}},{{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785}},{{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785},{&p_1208->g_785,(void*)0,(void*)0,&p_1208->g_785,&p_1208->g_3,&p_1208->g_116[2],&p_1208->g_116[2],&p_1208->g_3,&p_1208->g_785}}};
        int32_t l_846 = (-1L);
        int8_t l_848 = 0x61L;
        uint16_t l_849[8][6][5] = {{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}},{{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL},{3UL,0x985DL,65534UL,1UL,65529UL}}};
        int i, j, k;
        l_849[3][4][1]--;
        (*p_1208->g_117) = (*p_1208->g_117);
    }
    else
    { /* block id: 389 */
        struct S0 *l_858 = (void*)0;
        struct S0 **l_857 = &l_858;
        VECTOR(int32_t, 8) l_862 = (VECTOR(int32_t, 8))(0x258792F3L, (VECTOR(int32_t, 4))(0x258792F3L, (VECTOR(int32_t, 2))(0x258792F3L, 7L), 7L), 7L, 0x258792F3L, 7L);
        uint64_t l_870 = 4UL;
        struct S4 ***l_950[2][6][1] = {{{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753}},{{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753},{&p_1208->g_753}}};
        struct S3 l_953 = {4UL};
        int16_t *l_956 = &p_1208->g_76.f0;
        VECTOR(int64_t, 2) l_960 = (VECTOR(int64_t, 2))(0x1C8200F4A7D6C109L, 0x236A291D9A1255D8L);
        int32_t l_981 = 0x4AC77E73L;
        VECTOR(int64_t, 4) l_994 = (VECTOR(int64_t, 4))(0x325EAE9D8F933BE0L, (VECTOR(int64_t, 2))(0x325EAE9D8F933BE0L, 0x56B9ADE8A3B16DD5L), 0x56B9ADE8A3B16DD5L);
        VECTOR(uint32_t, 4) l_1001 = (VECTOR(uint32_t, 4))(0x57388CD7L, (VECTOR(uint32_t, 2))(0x57388CD7L, 0xFA0A4D9AL), 0xFA0A4D9AL);
        uint32_t **l_1035 = (void*)0;
        int32_t **l_1085 = &l_1024;
        int32_t ***l_1084[2][5] = {{&l_1085,&l_1085,(void*)0,&l_1085,&l_1085},{&l_1085,&l_1085,(void*)0,&l_1085,&l_1085}};
        uint32_t l_1141 = 0xCE01B239L;
        uint16_t l_1144 = 0UL;
        uint8_t l_1164[6] = {0x20L,0xC7L,0x20L,0x20L,0xC7L,0x20L};
        VECTOR(int16_t, 8) l_1199 = (VECTOR(int16_t, 8))(0x0F32L, (VECTOR(int16_t, 4))(0x0F32L, (VECTOR(int16_t, 2))(0x0F32L, 7L), 7L), 7L, 0x0F32L, 7L);
        uint8_t l_1205 = 253UL;
        int i, j, k;
        (*p_1208->g_753) = l_852;
        for (p_1208->g_575.f3.f1 = 14; (p_1208->g_575.f3.f1 != 7); p_1208->g_575.f3.f1 = safe_sub_func_uint16_t_u_u(p_1208->g_575.f3.f1, 1))
        { /* block id: 393 */
            int32_t **l_856 = &p_1208->g_179;
            if (((+(!((p_1208->g_855 , (void*)0) != l_856))) > ((void*)0 != l_857)))
            { /* block id: 394 */
                (*p_1208->g_861) = (*p_1208->g_546);
                return p_1208->g_855.f4;
            }
            else
            { /* block id: 397 */
                return p_1208->g_379.f0.f4;
            }
        }
        if (((VECTOR(int32_t, 8))(l_862.s76526415)).s1)
        { /* block id: 401 */
            int32_t *l_863 = (void*)0;
            int32_t *l_864 = &p_1208->g_7;
            int32_t *l_865 = (void*)0;
            int32_t *l_866 = &p_1208->g_116[1];
            int32_t *l_867[5];
            struct S5 **l_903 = (void*)0;
            VECTOR(int16_t, 16) l_921 = (VECTOR(int16_t, 16))(0x1B2EL, (VECTOR(int16_t, 4))(0x1B2EL, (VECTOR(int16_t, 2))(0x1B2EL, (-1L)), (-1L)), (-1L), 0x1B2EL, (-1L), (VECTOR(int16_t, 2))(0x1B2EL, (-1L)), (VECTOR(int16_t, 2))(0x1B2EL, (-1L)), 0x1B2EL, (-1L), 0x1B2EL, (-1L));
            uint64_t l_924 = 0x8F6F2CBF228E706FL;
            int16_t *l_949[6] = {&p_1208->g_729.f1,(void*)0,&p_1208->g_729.f1,&p_1208->g_729.f1,(void*)0,&p_1208->g_729.f1};
            int i;
            for (i = 0; i < 5; i++)
                l_867[i] = (void*)0;
            l_870++;
            if (l_862.s0)
            { /* block id: 403 */
                struct S2 ***l_893 = (void*)0;
                struct S2 **l_895 = &p_1208->g_453;
                struct S2 ***l_894 = &l_895;
                uint8_t *l_896 = (void*)0;
                uint8_t *l_897 = (void*)0;
                int32_t l_898 = (-1L);
                struct S5 **l_899[1][7][9] = {{{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]},{&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0],&p_1208->g_181[0],&p_1208->g_181[1],&p_1208->g_181[0]}}};
                volatile struct S1 l_907 = {1L,18446744073709551610UL,8L,0xDBCBE138L,0x246DL,0xD5341F47L};/* VOLATILE GLOBAL l_907 */
                int32_t l_922 = 0L;
                int32_t l_925 = 0x518623BFL;
                int8_t l_933 = (-6L);
                int i, j, k;
                if ((p_1208->g_80 , (l_827.y & ((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(0x72L, 0)), l_829.s3)), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))((((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_sub_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), ((safe_sub_func_int16_t_s_s((((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(p_1208->g_890.xxyy)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x573CEF70AE487C66L, 1L)).xxyxyxxxyyxxxyyx)).s6e9f))).lo)).xyyy, (int64_t)(~((-1L) ^ (p_1208->g_80.f0 = (l_862.s6 == (((*p_1208->g_238) || 0x2E2EL) || (safe_add_func_int16_t_s_s((((*l_894) = &p_1208->g_453) != (void*)0), (*l_864))))))))))), ((VECTOR(int64_t, 4))(0x161C2A0512D32F4AL))))).x | p_1208->g_153.f2), l_898)) == 3UL))) < p_1208->g_729.f2.f4), p_1208->g_575.f3.f0.f1)))), p_1208->g_447.f3.f0.f2)) , (void*)0) == (void*)0), ((VECTOR(uint32_t, 2))(4UL)), 0xA5FF4FBFL)).z, (*p_1208->g_407))))) , l_899[0][0][3]) != (void*)0) <= p_1208->g_379.f0.f0))))
                { /* block id: 406 */
                    struct S5 ***l_901 = &l_899[0][0][3];
                    struct S5 ***l_902 = &l_759;
                    l_903 = ((*l_902) = (p_1208->g_900 , ((*l_901) = &p_1208->g_181[1])));
                }
                else
                { /* block id: 410 */
                    uint64_t l_904 = 0x76840C39983266D9L;
                    return l_904;
                }
                if (l_845)
                { /* block id: 413 */
                    volatile struct S1 *l_906[10] = {&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0,&p_1208->g_729.f0};
                    int32_t l_920[8][10] = {{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L},{0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L,0x2F84A6F9L,0x78D6F531L,0L,0x78D6F531L,0x2F84A6F9L}};
                    int i, j;
                    l_907 = (*p_1208->g_861);
                    if ((l_898 = l_907.f1))
                    { /* block id: 416 */
                        VECTOR(int64_t, 2) l_917 = (VECTOR(int64_t, 2))((-1L), 2L);
                        int i;
                        l_925 |= ((p_1208->g_679 != (((safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((1L && (safe_mod_func_int8_t_s_s((+((l_922 |= (((((((l_834.y ^ ((((void*)0 != l_916) <= ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((-1L) ^ l_834.x), ((VECTOR(int64_t, 4))(l_917.xyxx)), (safe_rshift_func_uint16_t_u_u(((l_920[7][4] , ((VECTOR(int16_t, 2))(l_921.s0d)).odd) <= (((((l_868 , p_1208->g_785) <= l_826.w) != p_1208->g_445.f2.f3) == l_898) < p_1208->g_92.z)), 10)), ((VECTOR(int64_t, 2))(0x7521982B1E266C41L)), ((VECTOR(int64_t, 8))(1L)))).s7217, ((VECTOR(int64_t, 4))(1L))))).y) & l_920[3][7])) & GROUP_DIVERGE(2, 1)) <= FAKE_DIVERGE(p_1208->local_2_offset, get_local_id(2), 10)) || l_744) == p_1208->g_153.f3) >= l_834.x) < l_920[0][9])) && l_923)), (-1L)))), (*p_1208->g_407))) != 0UL), p_1208->g_816.y)) < l_920[7][4]), 0x1747L)) & l_869) == l_920[6][4])) || l_924);
                    }
                    else
                    { /* block id: 419 */
                        (***l_894) = p_1208->g_926[1];
                    }
                }
                else
                { /* block id: 422 */
                    VECTOR(int64_t, 2) l_932 = (VECTOR(int64_t, 2))(0x217F8B953163D933L, 2L);
                    union U8 l_941 = {{0x6A41L,0x555AE3E65D065162L,-7L,0x9B6076BBL,0x8E85L,0xA2170A66L}};
                    struct S4 *l_943 = (void*)0;
                    int32_t l_946[6][7][2] = {{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}},{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}},{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}},{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}},{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}},{{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L},{0x44D0B4D8L,0x44D0B4D8L}}};
                    struct S4 ****l_951 = &l_950[0][4][0];
                    int i, j, k;
                    for (p_1208->g_575.f3.f0.f3 = 0; (p_1208->g_575.f3.f0.f3 <= 31); p_1208->g_575.f3.f0.f3++)
                    { /* block id: 425 */
                        struct S1 *l_942 = &p_1208->g_153;
                        (*l_866) ^= (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 8))(l_932.xxyxxyxx)).s5)), l_933));
                        if (l_827.w)
                            break;
                        l_946[3][3][1] &= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((void*)0 != (*p_1208->g_753)) <= ((!(GROUP_DIVERGE(0, 1) || ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(0xD289L, 0xAE22L)).yxyy, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(p_1208->g_938.yyxx)), ((VECTOR(int16_t, 16))(((*l_864) | (safe_rshift_func_int16_t_s_s((((l_941 , ((((*l_942) = l_941.f0) , l_943) == (void*)0)) <= ((((*l_866) = ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_1208->g_944.xwwxwyyz)).s3627403672420355)).se | p_1208->g_485.sa) ^ l_941.f0.f5)) & l_826.y) == 0xE15931E7CC967D57L)) <= p_1208->g_731), 13))), l_834.y, ((VECTOR(int16_t, 2))(0x0816L)), ((VECTOR(int16_t, 8))((-4L))), 1L, 0x431EL, 1L, 1L)).sdb1c)))))).xwzyyxxxxzzxyzxw, ((VECTOR(uint16_t, 16))(0x1B6AL))))).sd4f7)).zzzyzzyx, ((VECTOR(uint32_t, 8))(0xD53E17E2L))))).s2)) & p_1208->g_945)), p_1208->g_343.z)), l_898));
                    }
                    (*p_1208->g_117) = ((+((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x621FL, 0x48ECL)).xxyy)).w) , func_48(&p_1208->g_641, func_30(((0x03A92B35L | (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), p_1208->g_79.f1))) , &p_1208->g_57), (**p_1208->g_406), p_1208->g_249.s6, l_953, p_1208), &p_1208->g_13, p_1208->g_116[7], l_933, p_1208));
                    (*l_866) ^= l_826.z;
                    return p_1208->g_760.w;
                }
            }
            else
            { /* block id: 439 */
                int64_t l_957 = (-1L);
                VECTOR(uint32_t, 2) l_958 = (VECTOR(uint32_t, 2))(0xE635D8B2L, 3UL);
                VECTOR(int8_t, 16) l_963 = (VECTOR(int8_t, 16))(0x42L, (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, (-1L)), (-1L)), (-1L), 0x42L, (-1L), (VECTOR(int8_t, 2))(0x42L, (-1L)), (VECTOR(int8_t, 2))(0x42L, (-1L)), 0x42L, (-1L), 0x42L, (-1L));
                int8_t l_970 = 0x5CL;
                int32_t l_980[3][5] = {{9L,2L,9L,9L,2L},{9L,2L,9L,9L,2L},{9L,2L,9L,9L,2L}};
                uint8_t *l_982 = &p_1208->g_370.f0;
                int i, j;
                (*l_864) &= (l_953.f0 < (((safe_mod_func_uint16_t_u_u((p_1208->g_445 , p_1208->g_471.x), p_1208->g_688[5][0].f0.f1)) <= 4294967295UL) > l_868));
                (*l_866) = ((((safe_rshift_func_int8_t_s_s(l_838, 7)) > ((((VECTOR(uint32_t, 8))(((((l_862.s4 ^= ((safe_rshift_func_int16_t_s_u(((*l_956) = l_970), (!(p_1208->g_971[2] , (safe_rshift_func_uint16_t_u_u(l_960.y, 4)))))) == p_1208->g_170.sc)) <= ((*l_864) = l_953.f0)) > ((*l_982) ^= (p_1208->g_959.y >= (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(0L, 0x53E2L, 0x12BDL, (l_981 = (l_980[0][3] ^= (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(9L, 5L)), 0x6117869CL, 1L, ((VECTOR(int32_t, 4))(9L, 0x19181B4AL, 1L, 0x6E009251L)))).even)).y, (safe_div_func_int64_t_s_s(l_829.s7, ((VECTOR(uint64_t, 2))(0x5B12A0DC30E6945CL, 0x6DEFCA5D69C7F6F5L)).hi)))))), 4L, (p_1208->g_250.s7 &= 0x5455L), 0L, 0x6F1AL)).hi, ((VECTOR(int16_t, 4))(0L))))).z, l_870))))) , (*l_866)), 0xF6D29D95L, ((VECTOR(uint32_t, 2))(4294967292UL)), ((VECTOR(uint32_t, 2))(4294967289UL)), 0xA02DCA95L, 0xA22E61BEL)).s2 , l_980[0][3]) > l_841.x)) < l_963.s9) <= l_970);
                l_983--;
            }
            for (p_1208->g_729.f2.f3 = 18; (p_1208->g_729.f2.f3 <= 43); p_1208->g_729.f2.f3 = safe_add_func_uint16_t_u_u(p_1208->g_729.f2.f3, 1))
            { /* block id: 453 */
                for (p_1208->g_575.f3.f0.f1 = (-18); (p_1208->g_575.f3.f0.f1 > 55); p_1208->g_575.f3.f0.f1++)
                { /* block id: 456 */
                    (*l_864) ^= (-6L);
                    return (*l_864);
                }
            }
        }
        else
        { /* block id: 461 */
            uint64_t l_1007 = 0xA7FBAE53822ECB0EL;
            struct S5 **l_1008 = &p_1208->g_181[0];
            uint8_t l_1012 = 0xD9L;
            uint32_t l_1015 = 0x6175F416L;
            VECTOR(uint16_t, 4) l_1039 = (VECTOR(uint16_t, 4))(0xED6CL, (VECTOR(uint16_t, 2))(0xED6CL, 0xAA7CL), 0xAA7CL);
            int32_t l_1098 = 0L;
            int32_t l_1100 = 5L;
            int32_t l_1101[6];
            uint8_t l_1135 = 0x4EL;
            uint32_t l_1139 = 0xEC9E621BL;
            int32_t *l_1140[8] = {&p_1208->g_59,&l_1101[1],&p_1208->g_59,&p_1208->g_59,&l_1101[1],&p_1208->g_59,&p_1208->g_59,&l_1101[1]};
            int32_t l_1150 = 0x1070F59DL;
            int8_t l_1151[7];
            struct S2 *l_1165 = &p_1208->g_447.f3;
            struct S0 *l_1168 = &p_1208->g_577[0];
            struct S1 l_1173 = {1L,0x989CFA89E1192CE9L,0x68534672L,0x6DB179E4L,65535UL,4294967289UL};
            VECTOR(uint8_t, 16) l_1188 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0x57L), 0x57L), 0x57L, 4UL, 0x57L, (VECTOR(uint8_t, 2))(4UL, 0x57L), (VECTOR(uint8_t, 2))(4UL, 0x57L), 4UL, 0x57L, 4UL, 0x57L);
            struct S2 **l_1201[1][4] = {{&l_1165,&l_1165,&l_1165,&l_1165}};
            struct S2 ***l_1200[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            for (i = 0; i < 6; i++)
                l_1101[i] = 8L;
            for (i = 0; i < 7; i++)
                l_1151[i] = 0x3DL;
            for (p_1208->g_964.f3.f2 = (-11); (p_1208->g_964.f3.f2 < (-27)); p_1208->g_964.f3.f2 = safe_sub_func_uint8_t_u_u(p_1208->g_964.f3.f2, 7))
            { /* block id: 464 */
                struct S1 l_999 = {-1L,9UL,0x0E88E32FL,0x994EF65FL,0xE095L,0xE81B97CDL};
                VECTOR(uint64_t, 2) l_1006 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551615UL);
                int8_t *l_1009 = (void*)0;
                int8_t *l_1010 = (void*)0;
                int8_t *l_1011[10][5] = {{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0},{(void*)0,&l_965,&l_965,(void*)0,(void*)0}};
                uint64_t *l_1013 = &p_1208->g_575.f3.f1;
                uint8_t *l_1014 = &p_1208->g_731;
                int32_t *l_1016 = (void*)0;
                int32_t *l_1017 = (void*)0;
                int32_t *l_1018 = (void*)0;
                int32_t *l_1019 = &l_868;
                VECTOR(uint16_t, 2) l_1042 = (VECTOR(uint16_t, 2))(0UL, 0x41B6L);
                int i, j;
                (*l_1019) |= ((p_1208->g_411.f7 == 0x7E2BL) ^ ((safe_sub_func_int64_t_s_s(((((*p_1208->g_407) >= ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xB6L, 0UL)).xxyyyxxyxyxyxyyy)).s4 & 0x51L) > GROUP_DIVERGE(0, 1))) > ((VECTOR(int64_t, 16))(l_994.wwzywxwzzwzyzzwz)).s1) == (p_1208->g_170.s0 |= ((p_1208->g_964.f3.f5 &= ((safe_add_func_uint8_t_u_u(((*l_1014) = (safe_div_func_uint16_t_u_u(((l_999 , ((((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(p_1208->g_1000.ywzyyyxyzzzzxyyy)).sf0cc, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(4294967291UL, p_1208->g_575.f6, 3UL, 0x3752E4F8L)).odd)).yyyy, ((VECTOR(uint32_t, 8))(l_1001.xwwwxyzy)).hi))).wwywxzzw)).s24)).yxyy))).yyxwwwzz, (uint64_t)l_826.z))).s6202653214036766)).hi, (uint64_t)(((*l_1013) ^= ((safe_div_func_uint16_t_u_u(((((((l_1012 &= (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(1UL, 0UL, 0x8531L, 65533UL, ((((0x29D7FAF7176B3B76L < ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(0x66FAE35166E474EBL, 18446744073709551615UL)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_1006.xy)))), l_1007, 0x73A60F5E48BD383DL, 0UL, 18446744073709551612UL, 0UL, 18446744073709551615UL)))).s63))).odd) , &p_1208->g_181[1]) == l_1008) , 0UL), 1UL, 0x9D8CL, 0x58C5L)).s3, (-6L)))) || p_1208->g_171.x) != l_999.f4) == p_1208->g_3) < p_1208->g_3) || l_999.f2), 0xE152L)) , p_1208->g_938.y)) & l_1007), (uint64_t)l_994.x))).s3 , &l_999) != &p_1208->g_153)) >= p_1208->g_231.z), GROUP_DIVERGE(1, 1)))), l_1007)) <= FAKE_DIVERGE(p_1208->local_1_offset, get_local_id(1), 10))) , l_1015))), FAKE_DIVERGE(p_1208->group_0_offset, get_group_id(0), 10))) >= l_14.s2));
                for (p_1208->g_964.f4.f1 = 28; (p_1208->g_964.f4.f1 <= (-14)); p_1208->g_964.f4.f1 = safe_sub_func_uint32_t_u_u(p_1208->g_964.f4.f1, 6))
                { /* block id: 473 */
                    int32_t l_1022 = (-6L);
                    int32_t **l_1023[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    VECTOR(int16_t, 4) l_1031 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1161L), 0x1161L);
                    VECTOR(int16_t, 16) l_1032 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-5L)), (-5L)), (-5L), 2L, (-5L), (VECTOR(int16_t, 2))(2L, (-5L)), (VECTOR(int16_t, 2))(2L, (-5L)), 2L, (-5L), 2L, (-5L));
                    uint32_t ***l_1036 = (void*)0;
                    uint32_t ***l_1037 = &l_1035;
                    uint16_t *l_1038 = &p_1208->g_153.f4;
                    uint16_t *l_1050[8][5] = {{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0},{&p_1208->g_900.f2,(void*)0,&p_1208->g_900.f2,&p_1208->g_900.f2,(void*)0}};
                    int i, j;
                    (*p_1208->g_117) = (l_1024 = ((((*l_956) = l_1007) | l_1022) , &p_1208->g_785));
                    if ((atomic_inc(&p_1208->l_atomic_input[17]) == 7))
                    { /* block id: 478 */
                        int32_t l_1026 = 0L;
                        int32_t *l_1025 = &l_1026;
                        l_1025 = (void*)0;
                        unsigned int result = 0;
                        result += l_1026;
                        atomic_add(&p_1208->l_special_values[17], result);
                    }
                    else
                    { /* block id: 480 */
                        (1 + 1);
                    }
                    if ((*p_1208->g_118))
                        continue;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1208->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_1012 && (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(l_1031.yzwzzxyzywyxyyxw)).odd, ((VECTOR(int16_t, 4))(l_994.z, ((VECTOR(int16_t, 2))(l_1032.s3b)), 0x0CDCL)).wzwyxxxz))).s1, ((VECTOR(int16_t, 2))(0x68EFL, 7L)).lo))), (safe_div_func_int64_t_s_s((((*l_1038) = (((*l_1037) = l_1035) == &p_1208->g_407)) > (p_1208->g_964.f3.f4 = (p_1208->g_964 , ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(l_1039.ww)).yxxy, ((VECTOR(uint16_t, 4))(0UL, 7UL, 65529UL, 0UL))))).hi, ((VECTOR(uint16_t, 16))(l_1040, ((VECTOR(uint16_t, 2))(p_1208->g_1041.s11)), 65535UL, ((VECTOR(uint16_t, 8))(l_1042.yyxyyxyy)).s4, 1UL, 5UL, 0x9DC4L, 0xAD1EL, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 4))(p_1208->g_1043.xxxx))))), (p_1208->g_275.f0.f4 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((*p_1208->g_373) , (safe_add_func_int32_t_s_s((9UL < l_994.y), (**p_1208->g_117)))) > 4UL) | 4L), 248UL)), p_1208->g_153.f5))), 0x71C4L, 0x4F54L)).sab, ((VECTOR(uint16_t, 2))(0x13B7L))))).hi))), (*l_1024))))), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))]));
                }
            }
            for (p_1208->g_729.f2.f5 = 0; (p_1208->g_729.f2.f5 == 55); p_1208->g_729.f2.f5 = safe_add_func_uint8_t_u_u(p_1208->g_729.f2.f5, 5))
            { /* block id: 495 */
                int32_t l_1069 = 0x08BF942EL;
                struct S5 ***l_1079 = &l_1008;
                int32_t *l_1080[1];
                uint32_t l_1094 = 0x82F5950BL;
                int32_t l_1138 = 8L;
                VECTOR(uint8_t, 4) l_1189 = (VECTOR(uint8_t, 4))(0x19L, (VECTOR(uint8_t, 2))(0x19L, 0x88L), 0x88L);
                int i;
                for (i = 0; i < 1; i++)
                    l_1080[i] = &p_1208->g_900.f4;
                p_1208->g_3 ^= (l_845 = ((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((p_1208->g_1059 , p_1208->g_964.f4.f1) == (((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(0x1DL, (safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u(((l_1039.w ^ l_1069) > ((safe_rshift_func_int8_t_s_s((l_1007 , ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((p_1208->g_96.x != ((VECTOR(uint16_t, 2))(p_1208->g_1076.yy)).odd) || (safe_rshift_func_uint16_t_u_s((((&p_1208->g_181[1] == ((*l_1079) = (void*)0)) , (*p_1208->g_407)) , p_1208->g_116[2]), 6))), l_1069)), p_1208->g_964.f3.f0)) == l_1039.y)), l_981)) <= 255UL)), p_1208->g_379.f0.f5)))))) , p_1208->g_341.x), p_1208->g_92.x)) >= 0xEEA4L) < l_1069)), l_1015)), l_841.x)), l_1069)) , 0x2FEAC2B4L));
                if ((((void*)0 == l_1081) && (**p_1208->g_406)))
                { /* block id: 499 */
                    uint32_t l_1089 = 0x970C827BL;
                    uint16_t *l_1092 = &p_1208->g_964.f3.f4;
                    int32_t l_1097 = 5L;
                    VECTOR(int32_t, 4) l_1099 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                    int8_t l_1113 = 0x6BL;
                    int32_t ***l_1133 = &l_1085;
                    uint16_t l_1147 = 65535UL;
                    uint32_t l_1152 = 1UL;
                    struct S1 l_1185 = {0x759FL,1UL,0x6E0A05E4L,0xC3B0EDDDL,0x8E28L,0UL};
                    uint64_t *l_1190[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1190[i] = (void*)0;
                    if ((safe_div_func_int64_t_s_s(p_1208->g_182.f0, ((((l_1084[1][4] != &p_1208->g_117) , ((((safe_unary_minus_func_uint8_t_u(l_1039.x)) , (safe_rshift_func_int8_t_s_u(l_14.s5, 6))) > l_1089) != (safe_sub_func_uint64_t_u_u(((&p_1208->g_64 != l_1092) != p_1208->g_182.f2.f0), FAKE_DIVERGE(p_1208->local_1_offset, get_local_id(1), 10))))) | l_1093) , l_1039.x))))
                    { /* block id: 500 */
                        uint32_t l_1103[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1103[i] = 4294967294UL;
                        l_1094++;
                        ++l_1103[3];
                        if (p_1208->g_769.f0)
                            break;
                        return p_1208->g_1043.y;
                    }
                    else
                    { /* block id: 505 */
                        uint64_t l_1107 = 1UL;
                        if (l_1007)
                            break;
                        if (l_1106)
                            break;
                        ++l_1107;
                        if (l_1007)
                            break;
                    }
                    if ((0x0BL || (((((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x416393B87D37AC6AL)).hi , (void*)0) != (void*)0) > l_1039.x)))
                    { /* block id: 511 */
                        uint32_t l_1110 = 0xA1E7090AL;
                        struct S4 *****l_1132 = &p_1208->g_1130[0];
                        struct S4 ****l_1134 = &l_952[3][0][1];
                        uint8_t *l_1136 = &l_1135;
                        uint8_t *l_1137 = &l_1012;
                        if (l_1110)
                            break;
                        l_1100 |= ((VECTOR(int32_t, 16))((-3L), ((l_1097 && (safe_div_func_uint16_t_u_u(((l_1113 != (((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_1208->g_577[5].f1, ((*l_1137) &= ((l_1098 <= ((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((&p_1208->g_181[0] != (void*)0), ((*l_1136) = (((*l_1092) = ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((*l_1132) = p_1208->g_1130[2]) == ((((p_1208->g_80 , &p_1208->g_117) != l_1133) | p_1208->g_3) , l_1134)), p_1208->g_79.f0)), l_1135)) ^ p_1208->g_938.y)) , l_1098)))) | 0x677DEE1DD500B3C8L), p_1208->g_95.s9)) & 0L)) || p_1208->g_249.s3)))), p_1208->g_713.sd)) >= l_1138), 249UL)) | 0x219DL) && l_1101[0])) || p_1208->g_1059.f0), p_1208->g_816.y))) >= 0UL), 6L, 0L, l_1012, ((VECTOR(int32_t, 4))(7L)), l_1015, (-4L), 0L, l_1110, ((VECTOR(int32_t, 2))(0x23D584DDL)), (-4L))).s0;
                        l_1139 &= (-1L);
                        l_1140[2] = (*l_1085);
                    }
                    else
                    { /* block id: 520 */
                        int16_t l_1142 = 0x0816L;
                        int32_t l_1143 = 0L;
                        l_845 ^= l_1141;
                        if (l_1142)
                            break;
                        l_1144--;
                        l_1147--;
                    }
                    l_1152--;
                    if (((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_1113 <= ((VECTOR(uint32_t, 2))(p_1208->g_1159.s4f)).lo), 0x7841L)), (safe_mod_func_uint32_t_u_u((*p_1208->g_407), ((safe_mod_func_int16_t_s_s((((0x6ABDDC0DL >= (p_1208->g_93.x >= l_827.y)) || l_845) != ((0xFF12L || p_1208->g_196.s0) & p_1208->g_3)), 0xE0ACL)) | l_1164[4]))))) != p_1208->g_379.f0.f2))
                    { /* block id: 527 */
                        int64_t l_1169 = 9L;
                        (*p_1208->g_1166) = l_1165;
                        l_1168 = l_1167;
                        if (l_1169)
                            continue;
                    }
                    else
                    { /* block id: 531 */
                        VECTOR(uint64_t, 8) l_1170 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x77EDFEDE32ED9068L), 0x77EDFEDE32ED9068L), 0x77EDFEDE32ED9068L, 1UL, 0x77EDFEDE32ED9068L);
                        uint64_t **l_1191 = &l_1190[1];
                        uint64_t *l_1193 = (void*)0;
                        uint64_t **l_1192 = &l_1193;
                        struct S2 ****l_1202 = &l_1200[5];
                        int32_t l_1203[7] = {0x507E959FL,0x5DBFAD1AL,0x507E959FL,0x507E959FL,0x5DBFAD1AL,0x507E959FL,0x507E959FL};
                        uint32_t l_1204 = 0x9BE8905CL;
                        int i;
                        --l_1170.s7;
                        p_1208->g_341.w = ((l_1173 , (((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((*l_956) = ((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((l_1185 , ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_1188.s5f35e016)).s33, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_1189.ywzwwzwz)))).s12))).odd, 1L)) == (((*l_1191) = l_1190[1]) != ((*l_1192) = &p_1208->g_541)))))), 0x464305BAL)), (*p_1208->g_238))) == (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_1208->g_1196.xx)))), 0x21DDL)).w, 7)))), (safe_mul_func_int8_t_s_s(l_1170.s4, (((((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1199.s74642643)).s07)).xyxy, ((VECTOR(int16_t, 8))((l_1203[5] = (((*l_1202) = l_1200[2]) != (void*)0)), l_1203[5], (-7L), ((VECTOR(int16_t, 4))((-1L))), 0x339DL)).hi, ((VECTOR(int16_t, 4))(5L))))).w || l_1204) && (-10L)) | 0L))))), (*p_1208->g_407))), p_1208->g_447.f3.f0.f0)) && l_1205) == 0x64211972FD3CEA23L)) < p_1208->g_447.f2);
                        return l_1203[5];
                    }
                }
                else
                { /* block id: 541 */
                    uint8_t l_1207 = 0x33L;
                    l_1207 ^= ((void*)0 != l_1206);
                }
            }
            return p_1208->g_422.f3.f0.f1;
        }
    }
    return p_1208->g_445.f2.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_54 p_1208->g_57 p_1208->g_713 p_1208->g_406 p_1208->g_407 p_1208->g_153.f3 p_1208->g_62 p_1208->g_116 p_1208->g_445 p_1208->g_2 p_1208->g_729
 * writes: p_1208->g_57 p_1208->g_116 p_1208->g_2
 */
struct S6  func_15(int16_t * p_16, int16_t  p_17, int32_t  p_18, struct S9 * p_1208)
{ /* block id: 315 */
    uint64_t l_725[7][4][9] = {{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}},{{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL},{0xE9DC70B14D2B930CL,3UL,0UL,6UL,18446744073709551608UL,3UL,0x2BA52F56199D27B3L,0xAD685C8B24E57A65L,18446744073709551614UL}}};
    int i, j, k;
    if (((*p_1208->g_54) ^ p_18))
    { /* block id: 316 */
        VECTOR(uint8_t, 8) l_714 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x91L), 0x91L), 0x91L, 0UL, 0x91L);
        VECTOR(int8_t, 8) l_717 = (VECTOR(int8_t, 8))(0x10L, (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x12L), 0x12L), 0x12L, 0x10L, 0x12L);
        int8_t *l_718 = &p_1208->g_705;
        int8_t **l_719 = (void*)0;
        int8_t **l_720 = &l_718;
        int i;
        p_1208->g_116[2] &= (p_18 | (((VECTOR(uint64_t, 16))(0x203D00FA404138E6L, ((VECTOR(uint64_t, 8))(p_18, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(p_1208->g_713.s16b0f73ec64eda79)), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(l_714.s30345367)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((safe_lshift_func_uint16_t_u_s(((0xD2L && ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_717.s50)).yyxx)).y) , FAKE_DIVERGE(p_1208->group_1_offset, get_group_id(1), 10)), (((((*l_720) = l_718) == ((p_18 & (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_1208->global_2_offset, get_global_id(2), 10), (safe_mul_func_int16_t_s_s((l_714.s2 | ((*p_16) = ((((p_17 < (**p_1208->g_406)) , (**p_1208->g_406)) && 0xE78B20D8L) >= p_17))), GROUP_DIVERGE(1, 1)))))) , (void*)0)) , l_717.s6) <= p_17))), 0x08L, ((VECTOR(uint8_t, 2))(252UL)), 0x7EL, 0x7CL, 0x75L, 0xD0L)).s04)).xyxx))).xwzyyyzywwzyxwxx))).s36))).odd, 14)), p_18)), p_1208->g_62[5][2][3], p_17, ((VECTOR(uint64_t, 4))(0UL)))), 18446744073709551615UL, 0xBCED4261FF490D2DL, GROUP_DIVERGE(2, 1), 0UL, 0x03C39252C12701BDL, 1UL, 0x9C07A40A100FD0B5L)).sd == l_725[0][2][7]));
        return p_1208->g_445;
    }
    else
    { /* block id: 321 */
        int32_t *l_727 = (void*)0;
        int32_t *l_728[7];
        int i;
        for (i = 0; i < 7; i++)
            l_728[i] = &p_1208->g_116[2];
        p_1208->g_2 &= l_725[6][1][3];
    }
    return p_1208->g_729;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_29 p_1208->g_3 p_1208->g_54 p_1208->g_64 p_1208->g_57 p_1208->g_80 p_1208->g_79.f0 p_1208->g_59 p_1208->g_92 p_1208->g_93 p_1208->g_7 p_1208->g_95 p_1208->g_96 p_1208->g_107 p_1208->g_79.f1 p_1208->g_116 p_1208->g_117 p_1208->g_153 p_1208->g_179 p_1208->g_180 p_1208->g_159 p_1208->g_76.f1 p_1208->g_182.f3 p_1208->g_comm_values p_1208->g_62 p_1208->g_231 p_1208->g_124 p_1208->g_76.f0 p_1208->g_182.f1 p_1208->g_238 p_1208->g_275.f0.f4 p_1208->g_334 p_1208->g_341 p_1208->g_343 p_1208->g_345 p_1208->g_265 p_1208->g_370 p_1208->g_373 p_1208->g_79.f3 p_1208->g_379 p_1208->g_406 p_1208->g_411 p_1208->g_422 p_1208->g_444 p_1208->g_445 p_1208->g_441 permutations p_1208->g_453 p_1208->g_466 p_1208->g_2 p_1208->g_374 p_1208->g_407 p_1208->g_485 p_1208->g_182.f2.f3 p_1208->g_275.f0.f3 p_1208->g_181 p_1208->g_541 p_1208->g_542 p_1208->g_546 p_1208->g_396.f0.f2 p_1208->g_447.f1 p_1208->g_170 p_1208->g_449 p_1208->g_447 p_1208->g_577 p_1208->g_379.f0.f3 p_1208->g_608 p_1208->g_609 p_1208->g_575.f3.f1 p_1208->g_239 p_1208->g_118 p_1208->g_196 p_1208->g_641 p_1208->g_646 p_1208->g_250 p_1208->g_672 p_1208->g_76.f2.f2
 * writes: p_1208->g_64 p_1208->g_80 p_1208->g_79.f0 p_1208->g_57 p_1208->g_116 p_1208->g_179 p_1208->g_153 p_1208->g_76.f0 p_1208->g_159 p_1208->g_76.f1 p_1208->g_59 p_1208->g_54 p_1208->g_274 p_1208->g_275.f0.f4 p_1208->g_373 p_1208->g_79.f3 p_1208->g_124 p_1208->g_275.f0.f3 p_1208->g_379 p_1208->g_449 p_1208->g_453 p_1208->g_466 p_1208->g_92 p_1208->g_447.f3.f0.f1 p_1208->g_170 p_1208->g_181 p_1208->g_541 p_1208->g_445.f2 p_1208->g_447.f1 p_1208->g_575 p_1208->g_370.f0 p_1208->g_441.f1 p_1208->g_118 p_1208->g_231 p_1208->g_641 p_1208->g_171 p_1208->g_679 p_1208->g_577.f4
 */
int16_t * func_19(uint16_t  p_20, struct S9 * p_1208)
{ /* block id: 14 */
    int16_t l_47 = 1L;
    int16_t *l_188 = &p_1208->g_76.f0;
    int32_t *l_189 = (void*)0;
    int32_t *l_190 = (void*)0;
    uint64_t *l_191 = &p_1208->g_76.f1;
    int16_t **l_377 = &p_1208->g_54;
    int32_t *l_378 = &p_1208->g_79.f3;
    int32_t *l_640 = &p_1208->g_641;
    struct S2 **l_645[10] = {&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453,&p_1208->g_453};
    VECTOR(int16_t, 4) l_653 = (VECTOR(int16_t, 4))(0x4120L, (VECTOR(int16_t, 2))(0x4120L, (-1L)), (-1L));
    VECTOR(uint16_t, 8) l_664 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x203AL), 0x203AL), 0x203AL, 0UL, 0x203AL);
    VECTOR(int32_t, 16) l_671 = (VECTOR(int32_t, 16))(0x354FA589L, (VECTOR(int32_t, 4))(0x354FA589L, (VECTOR(int32_t, 2))(0x354FA589L, 0x70E7902AL), 0x70E7902AL), 0x70E7902AL, 0x354FA589L, 0x70E7902AL, (VECTOR(int32_t, 2))(0x354FA589L, 0x70E7902AL), (VECTOR(int32_t, 2))(0x354FA589L, 0x70E7902AL), 0x354FA589L, 0x70E7902AL, 0x354FA589L, 0x70E7902AL);
    int8_t *l_673 = (void*)0;
    int8_t *l_674 = (void*)0;
    int8_t *l_675[8][3][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    union U8 **l_676 = &p_1208->g_274;
    uint16_t *l_677 = &p_1208->g_575.f2;
    uint32_t *l_678[8] = {&p_1208->g_679,&p_1208->g_679,&p_1208->g_679,&p_1208->g_679,&p_1208->g_679,&p_1208->g_679,&p_1208->g_679,&p_1208->g_679};
    int32_t **l_680 = &l_378;
    int32_t *l_682[3];
    int32_t **l_681 = &l_682[2];
    int32_t *l_684 = &p_1208->g_441.f3;
    int32_t **l_683 = &l_684;
    uint16_t l_685[4];
    uint32_t *l_686 = &p_1208->g_275.f0.f3;
    int32_t *l_687 = &p_1208->g_577[5].f4;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_682[i] = &p_1208->g_182.f3;
    for (i = 0; i < 4; i++)
        l_685[i] = 7UL;
    (*l_640) |= (safe_rshift_func_uint8_t_u_u(p_20, (p_20 > func_23(((*l_378) &= (p_1208->g_29 ^ (((*l_377) = func_30(func_35(func_40(p_1208->g_3, ((*l_191) &= (func_45(l_47, p_1208) >= (((safe_rshift_func_int16_t_s_u(((*l_188) = l_47), p_1208->g_93.y)) , (p_1208->g_159.w &= (-7L))) == p_20))), &l_47, p_1208->g_79.f1, p_1208), &l_47, p_1208->g_182.f3, p_1208->g_comm_values[p_1208->tid], p_1208), p_1208->g_343.w, p_1208->g_265.sa, p_1208->g_370, p_1208)) != (void*)0))), p_20, &l_47, p_1208->g_95.sc, p_1208->g_379, p_1208))));
    (*l_640) ^= (safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(0, 1)));
    (*l_687) ^= (safe_rshift_func_uint16_t_u_u((l_645[6] != &p_1208->g_453), (((VECTOR(int64_t, 2))(p_1208->g_646.xy)).lo == (safe_lshift_func_uint16_t_u_u(((~(safe_mod_func_uint32_t_u_u(((*l_686) = ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x4AF5L, 0L)).yyyxyyxy)).s30)).xxxxyyxy))).s1701023155436317, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_653.zywzzxxzwwyyyxzz))))).sa9)).xxxxyyyxxyxyyxxy, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((&p_1208->g_453 != ((safe_mul_func_uint16_t_u_u((*l_640), (FAKE_DIVERGE(p_1208->global_0_offset, get_global_id(0), 10) < p_1208->g_250.s2))) , &p_1208->g_453)) | (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((*l_683) = ((*l_681) = ((*l_680) = ((~((p_1208->g_679 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(l_664.s0153471354051530)).s51))))).lo <= p_1208->g_196.s1), ((*p_1208->g_407) = (+(safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_677) = ((((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_671.se5af3412)).s4031304362347637)).odd))).s12, ((VECTOR(int32_t, 4))(p_1208->g_672.s0412)).odd))).hi , (p_1208->g_171.w = (!(*l_640)))) && ((((*l_676) = &p_1208->g_275) == (void*)0) == 0UL))), p_20)), (-6L))), p_20)))))), p_1208->g_422.f3.f0.f1))) , p_1208->g_76.f2.f2)) , l_190)))) == &p_1208->g_62[2][1][3]) , (*p_1208->g_54)), p_20)), (*l_640)))), 1L, (*p_1208->g_238), 0x50A7L, l_685[1], ((VECTOR(int16_t, 4))(1L)), 0x18F7L, (-1L), (*l_640), 0L, ((VECTOR(int16_t, 2))(0L)), 3L)).s8a1c, ((VECTOR(int16_t, 4))(1L))))).ywyzxzxwxzwxxzxw, ((VECTOR(int16_t, 16))(0x260EL))))).se8, ((VECTOR(int16_t, 2))((-1L)))))), 2L, 0x1D33L, 0x2AFEL, (-1L), ((VECTOR(int16_t, 4))(0L)), 0x6EFEL, ((VECTOR(int16_t, 4))(0x366CL)), 7L)).sfbef)).wywwxzwzyxyzxywx))))).s8, p_20)) != (*l_640))), (*l_640)))) == p_20), 13)))));
    return (*l_377);
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_179 p_1208->g_406 p_1208->g_411 p_1208->g_124 p_1208->g_422 p_1208->g_96 p_1208->g_441 p_1208->g_444 p_1208->g_445 permutations p_1208->g_453 p_1208->g_466 p_1208->g_92 p_1208->g_2 p_1208->g_54 p_1208->g_57 p_1208->g_373 p_1208->g_374 p_1208->g_407 p_1208->g_485 p_1208->g_182.f2.f3 p_1208->g_153.f3 p_1208->g_64 p_1208->g_180 p_1208->g_275.f0.f3 p_1208->g_181 p_1208->g_93 p_1208->g_541 p_1208->g_542 p_1208->g_546 p_1208->g_396.f0.f2 p_1208->g_153.f4 p_1208->g_447.f1 p_1208->g_170 p_1208->g_449 p_1208->g_447 p_1208->g_577 p_1208->g_370.f0 p_1208->g_231 p_1208->g_379.f0.f3 p_1208->g_608 p_1208->g_609 p_1208->g_76.f1 p_1208->g_575.f3.f1 p_1208->g_238 p_1208->g_239 p_1208->g_62 p_1208->g_117 p_1208->g_118 p_1208->g_80 p_1208->g_116 p_1208->g_153 p_1208->g_196
 * writes: p_1208->g_124 p_1208->g_275.f0.f3 p_1208->g_379 p_1208->g_449 p_1208->g_453 p_1208->g_466 p_1208->g_92 p_1208->g_447.f3.f0.f1 p_1208->g_153.f3 p_1208->g_170 p_1208->g_64 p_1208->g_181 p_1208->g_541 p_1208->g_445.f2 p_1208->g_447.f1 p_1208->g_575 p_1208->g_370.f0 p_1208->g_80.f0 p_1208->g_76.f1 p_1208->g_441.f1 p_1208->g_118 p_1208->g_80 p_1208->g_79.f0 p_1208->g_116 p_1208->g_179 p_1208->g_153 p_1208->g_231
 */
uint32_t  func_23(int32_t  p_24, uint64_t  p_25, int16_t * p_26, int32_t  p_27, union U8  p_28, struct S9 * p_1208)
{ /* block id: 180 */
    struct S3 *l_381[7][1] = {{&p_1208->g_80},{&p_1208->g_80},{&p_1208->g_80},{&p_1208->g_80},{&p_1208->g_80},{&p_1208->g_80},{&p_1208->g_80}};
    struct S3 **l_380 = &l_381[1][0];
    VECTOR(uint8_t, 8) l_384 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xB2L), 0xB2L), 0xB2L, 0UL, 0xB2L);
    uint64_t *l_397 = &p_1208->g_76.f1;
    uint8_t *l_398[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_399 = 4294967295UL;
    int8_t *l_400 = (void*)0;
    int8_t *l_401 = (void*)0;
    int8_t *l_402[7];
    uint32_t *l_404[1][8] = {{&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3,&p_1208->g_275.f0.f3}};
    uint32_t **l_403 = &l_404[0][5];
    int32_t l_405 = 0x1B52D85BL;
    uint32_t ** volatile l_408 = (void*)0;/* VOLATILE GLOBAL l_408 */
    int32_t *l_412[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_525[2][6][4] = {{{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L}},{{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L},{0x49808697040B49B9L,0x0A68B4956FDF0121L,(-9L),0x7088E203117E2FF5L}}};
    struct S5 *l_527[4][1][5] = {{{&p_1208->g_182,(void*)0,&p_1208->g_182,&p_1208->g_182,(void*)0}},{{&p_1208->g_182,(void*)0,&p_1208->g_182,&p_1208->g_182,(void*)0}},{{&p_1208->g_182,(void*)0,&p_1208->g_182,&p_1208->g_182,(void*)0}},{{&p_1208->g_182,(void*)0,&p_1208->g_182,&p_1208->g_182,(void*)0}}};
    uint8_t l_543 = 255UL;
    VECTOR(uint32_t, 8) l_587 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL);
    VECTOR(int16_t, 4) l_592 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x2F29L), 0x2F29L);
    uint32_t l_595[2];
    int32_t l_634 = 0L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_402[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_595[i] = 0UL;
    l_408 = ((((((*l_380) = &p_1208->g_80) == &p_1208->g_80) > (((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_384.s5543)).xzwywwzy)).s7, (+(l_405 = (((*l_403) = p_1208->g_179) != &l_399))))) & p_28.f0.f5) != FAKE_DIVERGE(p_1208->global_1_offset, get_global_id(1), 10))) != l_399) , p_1208->g_406);
    if ((p_28.f0.f5 , (p_27 = (safe_lshift_func_uint16_t_u_s((p_1208->g_411 , 3UL), 4)))))
    { /* block id: 190 */
        uint64_t l_415 = 7UL;
        int32_t l_425[10] = {0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L,0x108FEF15L};
        struct S4 *l_446 = &p_1208->g_447;
        uint8_t l_450[8][2] = {{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L},{0x37L,0x37L}};
        int16_t *l_480 = &p_1208->g_76.f0;
        VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        struct S3 *l_526 = &p_1208->g_80;
        int i, j;
        for (p_1208->g_124 = 5; (p_1208->g_124 != 23); p_1208->g_124 = safe_add_func_uint8_t_u_u(p_1208->g_124, 3))
        { /* block id: 193 */
            uint16_t l_423 = 3UL;
            int32_t l_434 = 0L;
            int32_t l_435 = 1L;
            int32_t l_457 = 0x3CFD1846L;
            int32_t l_458 = 0L;
            int32_t l_460 = 0x28EBE8ABL;
            int64_t l_461 = 1L;
            int32_t l_462 = 0x471D9C4AL;
            int32_t l_463 = 8L;
            int32_t l_464 = 0x077E5E42L;
            int32_t l_465[8];
            VECTOR(uint64_t, 4) l_474 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
            uint32_t l_482 = 0x23DC12E1L;
            struct S3 *l_495[3];
            int i;
            for (i = 0; i < 8; i++)
                l_465[i] = 0x7B892C9AL;
            for (i = 0; i < 3; i++)
                l_495[i] = &p_1208->g_80;
            --l_415;
            if ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_1208->g_422 , l_423), 1)) != p_25), 0x3FD3L)))
            { /* block id: 195 */
                uint32_t l_424 = 0x4D88DB9FL;
                struct S2 **l_454 = &p_1208->g_453;
                int32_t l_455[3];
                int32_t l_456 = 0x13697F98L;
                int8_t l_459[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_455[i] = 0x4D3D7D13L;
                for (i = 0; i < 2; i++)
                    l_459[i] = 0x6CL;
                l_425[5] = l_424;
                if (((+((65529UL > (safe_add_func_uint8_t_u_u((((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(9L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(7L, 3L)), ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((1UL | l_415) > (safe_mul_func_int16_t_s_s((*p_26), FAKE_DIVERGE(p_1208->global_1_offset, get_global_id(1), 10)))), ((l_435 = ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(p_24, 0x2C9AL, 1UL, 0UL)).even))).hi)) , ((0xF2L > (l_434 = ((l_425[9] || ((*p_1208->g_54) = (*p_26))) < (safe_sub_func_int16_t_s_s((p_1208->g_433 && p_1208->g_249.s4), p_28.f0.f2))))) , p_28.f0.f0))) != p_1208->g_76.f3), 0x11L, ((VECTOR(int8_t, 4))(0L)), p_28.f0.f5, 0x7EL, p_28.f0.f0, ((VECTOR(int8_t, 2))(0x42L)), p_1208->g_422.f1, 0x00L, (-6L), (-1L))), ((VECTOR(int8_t, 16))(0x0EL)), ((VECTOR(int8_t, 16))((-1L)))))).s71, ((VECTOR(int8_t, 2))(0x4DL))))))), 0x16L, ((VECTOR(int8_t, 2))(0L)), 0x59L, 0L)).s56)).yxxx, (int8_t)l_425[1]))).lo)), ((VECTOR(int8_t, 2))(0x33L))))).even || p_28.f0.f0), p_28.f0.f2))) , p_1208->g_96.y)) , 0x599E50EFL))
                { /* block id: 200 */
                    uint16_t l_438 = 5UL;
                    int8_t *l_442 = (void*)0;
                    for (p_1208->g_275.f0.f3 = 1; (p_1208->g_275.f0.f3 != 44); ++p_1208->g_275.f0.f3)
                    { /* block id: 203 */
                        union U8 *l_443 = &p_1208->g_379;
                        struct S4 **l_448[4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_448[i] = &l_446;
                        l_438--;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1208->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[(safe_mod_func_uint32_t_u_u(((p_1208->g_441 , l_442) != (void*)0), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))]));
                        p_27 = ((((*l_443) = p_28) , p_1208->g_444) , (p_1208->g_445 , permutations[(safe_mod_func_uint32_t_u_u(((p_1208->g_441 , l_442) != (void*)0), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))]));
                        p_1208->g_449 = l_446;
                    }
                }
                else
                { /* block id: 212 */
                    l_450[1][1]--;
                }
                (*l_454) = p_1208->g_453;
                p_1208->g_466--;
            }
            else
            { /* block id: 217 */
                uint64_t l_497 = 0UL;
                int32_t **l_519 = &l_412[1][3];
                struct S5 *l_540 = &p_1208->g_79;
                p_1208->g_92.w |= ((VECTOR(int32_t, 8))((safe_mod_func_int8_t_s_s(0L, l_465[6])), 0x2377879AL, ((VECTOR(int32_t, 4))(p_1208->g_471.xxyy)), (-1L), 0x7B6A0C5FL)).s7;
                for (p_1208->g_447.f3.f0.f1 = 14; (p_1208->g_447.f3.f0.f1 != 29); p_1208->g_447.f3.f0.f1++)
                { /* block id: 221 */
                    uint8_t l_475 = 255UL;
                    int64_t *l_481 = (void*)0;
                    struct S3 *l_496[3][1][5] = {{{&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370}},{{&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370}},{{&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370,&p_1208->g_370}}};
                    int i, j, k;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1208->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[(safe_mod_func_uint32_t_u_u((~((((VECTOR(uint64_t, 16))(l_474.zzxyxywzwzxwwwwx)).sc , l_475) == (l_482 = (safe_rshift_func_int8_t_s_s((p_28.f0.f1 ^ ((void*)0 == l_480)), 4))))), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))]));
                    if ((((p_28.f0 , (safe_add_func_uint8_t_u_u((((VECTOR(int64_t, 8))(p_1208->g_485.sca91066f)).s4 , (safe_add_func_uint64_t_u_u(((((p_1208->g_2 >= (0UL ^ (l_425[5] > ((VECTOR(int32_t, 4))(l_488.s4c2a)).y))) , ((((p_27 & ((safe_rshift_func_uint8_t_u_s(l_475, 0)) || (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((l_495[1] == l_496[2][0][0]), 0xC9L)), p_1208->g_2)))) < l_415) , (void*)0) == (void*)0)) < p_24) || p_24), l_497))), 1L))) && 0xB1A0L) & (*p_1208->g_54)))
                    { /* block id: 226 */
                        p_27 = 0L;
                    }
                    else
                    { /* block id: 228 */
                        int8_t l_510 = 0x54L;
                        int32_t **l_521 = &p_1208->g_179;
                        int32_t ***l_520 = &l_521;
                        int64_t l_522 = 0x0426EEC53947690DL;
                        p_27 &= (permutations[(safe_mod_func_uint32_t_u_u((~((((VECTOR(uint64_t, 16))(l_474.zzxyxywzwzxwwwwx)).sc , l_475) == (l_482 = (safe_rshift_func_int8_t_s_s((p_28.f0.f1 ^ ((void*)0 == l_480)), 4))))), 10))][(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))] ^ ((((*p_1208->g_373) , ((p_1208->g_379.f0.f3 = ((**l_408) = (p_1208->g_422.f4 >= GROUP_DIVERGE(2, 1)))) , (((*p_26) = l_497) != (safe_lshift_func_uint8_t_u_u((7L > ((*p_1208->g_54) >= ((~p_25) >= (-6L)))), 7))))) >= (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (0x1BD78A7EL <= GROUP_DIVERGE(0, 1)))), p_1208->g_485.s4))) || 0x3D19L));
                        if (p_24)
                            break;
                        p_27 ^= (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((*l_380) = (((l_510 >= 1UL) , ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((p_1208->g_182.f2.f3 , func_55(((safe_rshift_func_uint16_t_u_s(((~(safe_add_func_int32_t_s_s(((l_519 != ((*l_520) = &p_1208->g_179)) | l_522), ((p_1208->g_170.s4 = l_462) >= ((safe_lshift_func_int16_t_s_u(1L, 5)) == ((((0x5E2EL || l_488.s3) & 5L) >= 0xC1285FF5E2C387D4L) == (*p_1208->g_407))))))) < l_525[1][5][3]), 10)) , &p_27), p_1208)) == (void*)0), GROUP_DIVERGE(0, 1))), 10)) ^ p_24)) , (void*)0)) != l_526), 4)), p_1208->g_124)), p_24));
                        if (l_465[6])
                            break;
                    }
                    if (l_434)
                        break;
                }
                (*p_1208->g_180) = l_527[0][0][2];
                p_27 |= (safe_lshift_func_uint16_t_u_s(p_25, (((safe_lshift_func_uint16_t_u_u((+(safe_add_func_int8_t_s_s((p_1208->g_170.s3 = p_1208->g_275.f0.f3), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((*p_1208->g_180) == l_540), p_1208->g_93.y)) | ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((p_1208->g_445.f2.f5 | (p_1208->g_541 ^= (p_1208->g_441.f1 > 18446744073709551610UL))) | l_474.y), ((VECTOR(uint64_t, 4))(0x6E52778169254138L)), 0xF4CA55821F81601BL, p_28.f0.f3, ((VECTOR(uint64_t, 2))(0x7806C3E1032D0940L)), 18446744073709551609UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(1UL)), 0x46AFD3849CBBBD1FL)).s8c)).even), 0)), 4))))), GROUP_DIVERGE(1, 1))) , p_1208->g_542) , (*p_1208->g_54))));
            }
            l_543++;
            if (p_28.f0.f0)
                break;
        }
        (*p_1208->g_546) = p_1208->g_445.f0;
        if (p_28.f0.f3)
        { /* block id: 251 */
            l_488.s1 = (l_425[2] |= p_27);
        }
        else
        { /* block id: 254 */
            int32_t l_549 = 0x1B4350EDL;
            int32_t *l_562 = &p_1208->g_447.f1;
            if ((safe_div_func_int16_t_s_s(l_549, (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_1208->g_396.f0.f2, ((safe_sub_func_uint64_t_u_u(0x5D56BEA8864A0A16L, (((GROUP_DIVERGE(0, 1) != ((-3L) | l_425[1])) | (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((((*l_562) &= p_1208->g_153.f4) , ((safe_mod_func_int8_t_s_s(p_1208->g_170.s8, (safe_rshift_func_int16_t_s_u((l_450[0][0] , (l_488.s2 , 0x498AL)), p_28.f0.f4)))) >= l_549)) != 0x26255770D683EC66L), 0x7C8575865D3B393EL)), (*p_26))) || 0xCA37L), 4))) > (*p_1208->g_407)))) <= (-8L)))), l_450[1][1])))))
            { /* block id: 256 */
                uint8_t **l_567 = &l_398[3];
                uint8_t ***l_568 = &l_567;
                (*l_568) = l_567;
                if ((atomic_inc(&p_1208->l_atomic_input[14]) == 7))
                { /* block id: 259 */
                    int16_t l_569 = (-1L);
                    uint32_t l_570 = 0xF73AD4EFL;
                    int8_t l_571 = 0x57L;
                    uint32_t l_572 = 0x130F0790L;
                    l_569 = 4L;
                    l_571 &= l_570;
                    --l_572;
                    unsigned int result = 0;
                    result += l_569;
                    result += l_570;
                    result += l_571;
                    result += l_572;
                    atomic_add(&p_1208->l_special_values[14], result);
                }
                else
                { /* block id: 263 */
                    (1 + 1);
                }
                return (**p_1208->g_406);
            }
            else
            { /* block id: 267 */
                int32_t l_576 = 0L;
                p_1208->g_575 = (*p_1208->g_449);
                l_488.s2 ^= (&p_1208->g_181[1] != (void*)0);
                l_576 |= 0L;
            }
        }
    }
    else
    { /* block id: 273 */
        VECTOR(uint8_t, 4) l_578 = (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 0UL), 0UL);
        int32_t l_593[7] = {0x7567A8CCL,0x7567A8CCL,0x7567A8CCL,0x7567A8CCL,0x7567A8CCL,0x7567A8CCL,0x7567A8CCL};
        int32_t l_594 = 0x193967BEL;
        int16_t *l_624 = &p_1208->g_447.f6;
        int32_t l_635 = 0x605BB7A8L;
        int i;
        if (((p_1208->g_444.f2 || ((l_595[0] |= (p_1208->g_577[5] , ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xFBL, 0x10L)), ((VECTOR(uint8_t, 4))(l_578.wzwz)), 0x39L, (p_1208->g_80.f0 = (p_1208->g_370.f0 &= 255UL)), 1UL, (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_1208->g_411.f3.f2, 4)), (((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))(0UL, 0x9CC07D30L, 0x29CC8E8DL, 0x8F3DFFB4L)).xxwxzwzz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((safe_lshift_func_int8_t_s_s((-1L), 2)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_587.s7754)).hi)))), (p_1208->g_379.f0.f3 &= ((4294967295UL & (l_594 ^= ((*p_1208->g_407) = (((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_28.f0.f0, (((VECTOR(int8_t, 2))(0x11L, 0x5DL)).odd && p_27))) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(0x639DL, ((VECTOR(int16_t, 2))(l_592.yz)), 0x51F3L, 0x101AL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(1L, 0x4FA8L, 0x2C4BL, 0x4A26L, (-9L), (-7L), l_578.y, (*p_26), ((VECTOR(int16_t, 2))((-1L))), 0x1806L, 0L, (*p_26), 0x2C9CL, 0x5577L, 0x3D3AL)), (int16_t)(*p_1208->g_54)))).s12)), ((VECTOR(int16_t, 2))(0x4607L)), 0L, 1L, ((VECTOR(int16_t, 4))(0L)), 1L)).lo, ((VECTOR(int16_t, 8))((-6L)))))).hi)).z), FAKE_DIVERGE(p_1208->group_0_offset, get_group_id(0), 10))) ^ FAKE_DIVERGE(p_1208->local_2_offset, get_local_id(2), 10)) & l_593[0])))) != p_1208->g_231.y)), 2UL, ((VECTOR(uint32_t, 2))(0xBD298182L)), 4294967288UL)).s5341462547741672)).odd))).even, ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0x5FB8144FL))))).xxywxxxxzwyzxyxy, (uint32_t)p_28.f0.f2))).s9 == p_25))), l_578.x)), 0x5FL, 252UL, ((VECTOR(uint8_t, 2))(1UL)), 255UL, 0xDFL)).sda4c)).z)) ^ p_28.f0.f0)) != GROUP_DIVERGE(1, 1)))
        { /* block id: 280 */
            struct S1 *l_606[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(int16_t, 4) l_607 = (VECTOR(int16_t, 4))(0x440CL, (VECTOR(int16_t, 2))(0x440CL, (-9L)), (-9L));
            struct S3 *l_618 = (void*)0;
            int64_t *l_621 = &l_525[1][5][3];
            uint64_t *l_622 = &p_1208->g_441.f1;
            int32_t l_623 = (-1L);
            int i;
            l_623 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((void*)0 == l_606[3]) < (((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 2))(l_607.wz)), 4L, 1L, 0x7BCDL, 0L, (-1L))).odd, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(p_1208->g_608.s7137552511634774)).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x09B7L, 4L)).yxyxyxxx)), ((VECTOR(int16_t, 2))(0x5A50L, 0x6972L)).xxxxxyyy, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 2))(0L, 0L)).yyyyyxxyyxyxxyyy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_1208->g_609.yxyxyyyxyyyxyyyy))))))).hi))).hi)).ywxyzyyx)).s77)), (-1L), 0x355FL, ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint64_t_u_u(((*l_622) = ((l_618 != ((*p_1208->g_449) , &p_1208->g_80)) ^ ((safe_add_func_uint8_t_u_u((p_25 != ((*l_621) ^= (p_1208->g_57 , (((*l_397) ^= (p_28.f0.f1 && p_28.f0.f1)) > GROUP_DIVERGE(0, 1))))), p_28.f0.f0)) >= p_28.f0.f0))), p_1208->g_577[5].f2)) | 4294967295UL) != 6UL) & p_1208->g_577[5].f4) <= l_607.x), l_607.x)), p_25)), l_593[4])) != p_1208->g_575.f3.f1), (*p_1208->g_238), 0x7695L, (*p_26), ((VECTOR(int16_t, 4))(3L)), 9L, ((VECTOR(int16_t, 2))(0x5BF3L)), (-8L))).hi))).even))).zzwywzyzwzyywyxy, ((VECTOR(int16_t, 16))(0L))))).s0 | GROUP_DIVERGE(0, 1))) <= 3UL), 0x8684442FL)), p_1208->g_62[1][0][3])) , (-1L)), l_607.w)) | p_28.f0.f3) && (-10L)), 8)), l_594));
            (*p_1208->g_117) = (*p_1208->g_117);
            return p_28.f0.f4;
        }
        else
        { /* block id: 287 */
            int16_t *l_625 = (void*)0;
            (*p_1208->g_117) = func_48(func_48(&l_405, &p_1208->g_57, l_624, p_24, p_1208->g_411.f3.f0.f0, p_1208), p_26, l_625, (0x7895B392L & 4294967290UL), p_1208->g_196.s6, p_1208);
        }
        for (p_1208->g_153.f5 = (-19); (p_1208->g_153.f5 >= 36); p_1208->g_153.f5++)
        { /* block id: 292 */
            uint64_t l_636 = 0x2737FDE4B3602B2CL;
            int32_t **l_639 = &l_412[2][2];
            p_1208->g_231.z ^= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_1208->g_441.f2.f4, (safe_add_func_uint16_t_u_u(l_634, 0UL)))), p_1208->g_447.f3.f0.f2));
            ++l_636;
            (*p_1208->g_117) = ((*l_639) = &p_1208->g_59);
        }
    }
    return p_28.f0.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_153.f1 p_1208->g_373
 * writes: p_1208->g_153.f1 p_1208->g_373
 */
int16_t * func_30(int16_t * p_31, uint32_t  p_32, int64_t  p_33, struct S3  p_34, struct S9 * p_1208)
{ /* block id: 169 */
    uint8_t l_376 = 0xF7L;
    for (p_1208->g_153.f1 = (-26); (p_1208->g_153.f1 <= 38); p_1208->g_153.f1 = safe_add_func_int32_t_s_s(p_1208->g_153.f1, 7))
    { /* block id: 172 */
        uint32_t l_375 = 0UL;
        p_1208->g_373 = p_1208->g_373;
        if (l_375)
            continue;
        l_376 &= (-9L);
    }
    return &p_1208->g_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_62 p_1208->g_231 p_1208->g_80 p_1208->g_124 p_1208->g_76.f0 p_1208->g_153.f3 p_1208->g_182.f1 p_1208->g_179 p_1208->g_59 p_1208->g_238 p_1208->g_275.f0.f4 p_1208->g_334 p_1208->g_341 p_1208->g_7 p_1208->g_343 p_1208->g_345 p_1208->g_54 p_1208->g_79.f0 p_1208->g_153.f1
 * writes: p_1208->g_80 p_1208->g_57 p_1208->g_179 p_1208->g_116 p_1208->g_59 p_1208->g_54 p_1208->g_153.f5 p_1208->g_274 p_1208->g_275.f0.f4 p_1208->g_153.f1
 */
int16_t * func_35(int16_t * p_36, int16_t * p_37, uint32_t  p_38, int32_t  p_39, struct S9 * p_1208)
{ /* block id: 102 */
    struct S1 *l_222 = &p_1208->g_153;
    int32_t l_225[3];
    uint8_t *l_226 = &p_1208->g_80.f0;
    int64_t *l_227 = (void*)0;
    int64_t *l_228 = (void*)0;
    int64_t *l_229 = (void*)0;
    int64_t *l_230 = (void*)0;
    uint16_t l_232 = 0UL;
    uint32_t *l_233[2][10] = {{&p_1208->g_153.f3,&p_1208->g_153.f3,(void*)0,&p_1208->g_153.f3,&p_1208->g_153.f3,&p_1208->g_153.f3,&p_1208->g_153.f3,(void*)0,&p_1208->g_153.f3,&p_1208->g_153.f3},{&p_1208->g_153.f3,&p_1208->g_153.f3,(void*)0,&p_1208->g_153.f3,&p_1208->g_153.f3,&p_1208->g_153.f3,&p_1208->g_153.f3,(void*)0,&p_1208->g_153.f3,&p_1208->g_153.f3}};
    int32_t l_234[1][10][10] = {{{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L},{0x0AF836D3L,0L,0L,0L,0x0AF836D3L,0x0AF836D3L,0L,0L,0L,0x0AF836D3L}}};
    uint16_t *l_235[2][9] = {{&l_232,&p_1208->g_64,&p_1208->g_153.f4,&p_1208->g_64,&l_232,&l_232,&p_1208->g_64,&p_1208->g_153.f4,&p_1208->g_64},{&l_232,&p_1208->g_64,&p_1208->g_153.f4,&p_1208->g_64,&l_232,&l_232,&p_1208->g_64,&p_1208->g_153.f4,&p_1208->g_64}};
    int32_t l_236 = 5L;
    int16_t **l_237 = &p_1208->g_54;
    VECTOR(int16_t, 2) l_264 = (VECTOR(int16_t, 2))(1L, (-1L));
    int64_t l_290 = 1L;
    VECTOR(int32_t, 8) l_346 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x5C2E2062L), 0x5C2E2062L), 0x5C2E2062L, (-2L), 0x5C2E2062L);
    uint16_t *l_347 = &l_232;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_225[i] = 5L;
    if ((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((&p_1208->g_153 != l_222), (9L >= (((!(((((*l_237) = (GROUP_DIVERGE(0, 1) , func_40(((safe_rshift_func_uint16_t_u_s((l_236 = (((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((l_234[0][1][1] &= ((((((p_1208->g_62[5][2][3] ^ p_39) && (l_225[0] , (l_225[0] ^= ((void*)0 != l_226)))) | (((((VECTOR(int32_t, 4))(p_1208->g_231.wzyy)).w >= (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x564CAAB7L)).yyyxyyxy)).s6 , ((p_1208->g_80 = p_1208->g_80) , p_39)) < (-9L)) , GROUP_DIVERGE(0, 1))) , p_39) || l_232)) >= p_1208->g_124) , p_38) ^ p_1208->g_76.f0)) | 0x7245C095L), ((VECTOR(uint32_t, 2))(0x07C44A19L)), 0x5D9433F0L, ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x170E35F2L)), 0x3A77274EL, 1UL)).lo, ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 8))(0xDEE50E79L))))).s23, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(4294967295UL))))).hi , p_1208->g_153.f3)), (*p_37))) && p_1208->g_62[5][2][3]), l_232, p_36, p_1208->g_182.f1, p_1208))) != p_1208->g_238) < l_232) ^ p_39)) > GROUP_DIVERGE(1, 1)) , 65535UL)))) || 0L), p_38)))
    { /* block id: 108 */
        struct S3 *l_261 = &p_1208->g_80;
        struct S3 **l_260 = &l_261;
        int32_t l_270 = 0L;
        int32_t l_287 = 7L;
        int32_t l_288 = 0x12611FAAL;
        VECTOR(int32_t, 8) l_289 = (VECTOR(int32_t, 8))(0x444341AFL, (VECTOR(int32_t, 4))(0x444341AFL, (VECTOR(int32_t, 2))(0x444341AFL, 3L), 3L), 3L, 0x444341AFL, 3L);
        int32_t *l_295 = &l_270;
        int i;
        for (p_39 = (-22); (p_39 > (-18)); ++p_39)
        { /* block id: 111 */
            int8_t l_259 = 0x11L;
            int32_t l_271 = 2L;
            int32_t *l_272 = &l_225[0];
            union U8 *l_273 = (void*)0;
            for (p_1208->g_153.f5 = 0; (p_1208->g_153.f5 <= 10); p_1208->g_153.f5 = safe_add_func_int32_t_s_s(p_1208->g_153.f5, 8))
            { /* block id: 114 */
                int32_t **l_244 = &p_1208->g_179;
                (*l_244) = (void*)0;
            }
            (*l_272) = ((-1L) || (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(255UL, p_39)) , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(p_1208->g_249.s42)).xyyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(p_1208->g_250.s25)).xxxyxyxyyyyyxxxy))).s2d1e))))), ((VECTOR(int16_t, 4))((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((FAKE_DIVERGE(p_1208->global_2_offset, get_global_id(2), 10) > ((safe_sub_func_uint32_t_u_u(0x743C9B88L, (safe_mod_func_int16_t_s_s(((((VECTOR(uint16_t, 16))((l_259 &= 0x360EL), ((((p_1208->g_95.sa , l_260) != (void*)0) ^ ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(4L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_264.xyxy)).even)), 0x5B76L)).zyzwyxxxyzyxwyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))((-1L), 9L)).xxyx, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(p_1208->g_265.s9822)).ywxxwzwxzwwyywwx))).sc365))).hi)).xyxxxyxyyxyyyyxy))).s0, (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))((((((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(0x2DE5A3345FE6D747L, 9L)), 0L)).y , ((-1L) | l_225[0])) != l_259) || p_39), GROUP_DIVERGE(2, 1), p_1208->g_249.sa, GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 8))(0xABL)), 252UL, p_1208->g_93.x, 255UL, 0x19L)).s7, 7)), (*p_1208->g_54))) <= p_1208->g_231.y) & p_39))) < p_39)) | l_234[0][3][6]), ((VECTOR(uint16_t, 8))(0xE74EL)), 1UL, ((VECTOR(uint16_t, 4))(0UL)), 3UL)).sd , p_38) , 8L), l_270)))) & l_271)), l_270)), p_1208->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1208->tid, 32))])), 0x0E7CL, 0L, 0x6CE0L))))).zxyxyyxz)))).s14)).hi), 8)));
            l_270 = p_38;
            p_1208->g_274 = l_273;
        }
        for (p_1208->g_275.f0.f4 = 0; (p_1208->g_275.f0.f4 > 33); p_1208->g_275.f0.f4 = safe_add_func_uint8_t_u_u(p_1208->g_275.f0.f4, 1))
        { /* block id: 124 */
            int32_t *l_278 = (void*)0;
            int32_t *l_279 = (void*)0;
            int32_t *l_280 = &l_236;
            int32_t *l_281 = &p_1208->g_116[3];
            int32_t *l_282 = &p_1208->g_116[2];
            int32_t *l_283 = &l_234[0][4][0];
            int32_t *l_284 = &l_236;
            int32_t *l_285 = &p_1208->g_116[2];
            int32_t *l_286[1];
            uint64_t l_291 = 0xC7E112AFEF8A76C9L;
            int i;
            for (i = 0; i < 1; i++)
                l_286[i] = &l_225[0];
            --l_291;
        }
        if ((atomic_inc(&p_1208->l_atomic_input[3]) == 8))
        { /* block id: 128 */
            VECTOR(int32_t, 16) l_294 = (VECTOR(int32_t, 16))(0x08A8B31EL, (VECTOR(int32_t, 4))(0x08A8B31EL, (VECTOR(int32_t, 2))(0x08A8B31EL, 0x50437FA1L), 0x50437FA1L), 0x50437FA1L, 0x08A8B31EL, 0x50437FA1L, (VECTOR(int32_t, 2))(0x08A8B31EL, 0x50437FA1L), (VECTOR(int32_t, 2))(0x08A8B31EL, 0x50437FA1L), 0x08A8B31EL, 0x50437FA1L, 0x08A8B31EL, 0x50437FA1L);
            int i;
            l_294.s2 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_294.sa6bc76516f5babd9)))).sf;
            unsigned int result = 0;
            result += l_294.sf;
            result += l_294.se;
            result += l_294.sd;
            result += l_294.sc;
            result += l_294.sb;
            result += l_294.sa;
            result += l_294.s9;
            result += l_294.s8;
            result += l_294.s7;
            result += l_294.s6;
            result += l_294.s5;
            result += l_294.s4;
            result += l_294.s3;
            result += l_294.s2;
            result += l_294.s1;
            result += l_294.s0;
            atomic_add(&p_1208->l_special_values[3], result);
        }
        else
        { /* block id: 130 */
            (1 + 1);
        }
        (*l_295) &= (p_38 <= 18446744073709551614UL);
    }
    else
    { /* block id: 134 */
        int32_t *l_296 = (void*)0;
        int32_t *l_297[6][10][4] = {{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}},{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}},{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}},{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}},{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}},{{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0},{&p_1208->g_59,(void*)0,&p_1208->g_59,(void*)0}}};
        uint32_t l_298 = 4294967291UL;
        VECTOR(int32_t, 4) l_342 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L));
        VECTOR(int32_t, 2) l_344 = (VECTOR(int32_t, 2))(0x1129CD5CL, 5L);
        uint32_t l_348 = 1UL;
        int i, j, k;
        l_298--;
        if ((atomic_inc(&p_1208->l_atomic_input[4]) == 2))
        { /* block id: 137 */
            VECTOR(int32_t, 4) l_301 = (VECTOR(int32_t, 4))(0x6E900A2DL, (VECTOR(int32_t, 2))(0x6E900A2DL, 0x45A1B139L), 0x45A1B139L);
            int32_t l_302 = 0x19D00338L;
            VECTOR(int8_t, 8) l_303 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x44L), 0x44L), 0x44L, 7L, 0x44L);
            VECTOR(uint8_t, 2) l_304 = (VECTOR(uint8_t, 2))(0x62L, 0x8AL);
            VECTOR(int8_t, 8) l_305 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x23L), 0x23L), 0x23L, (-5L), 0x23L);
            int8_t l_306 = 0x75L;
            VECTOR(int8_t, 2) l_307 = (VECTOR(int8_t, 2))(0L, 0x26L);
            VECTOR(int8_t, 4) l_308 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x54L), 0x54L);
            VECTOR(int8_t, 2) l_309 = (VECTOR(int8_t, 2))(3L, 0x2AL);
            VECTOR(int8_t, 4) l_310 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L));
            VECTOR(int8_t, 16) l_311 = (VECTOR(int8_t, 16))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 1L), 1L), 1L, 0x72L, 1L, (VECTOR(int8_t, 2))(0x72L, 1L), (VECTOR(int8_t, 2))(0x72L, 1L), 0x72L, 1L, 0x72L, 1L);
            VECTOR(int8_t, 4) l_312 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-8L)), (-8L));
            VECTOR(int8_t, 4) l_313 = (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-1L)), (-1L));
            int8_t l_314 = (-8L);
            VECTOR(int64_t, 4) l_315 = (VECTOR(int64_t, 4))(0x29B5C1D028D9132DL, (VECTOR(int64_t, 2))(0x29B5C1D028D9132DL, (-1L)), (-1L));
            int16_t l_316 = 0L;
            VECTOR(uint8_t, 4) l_317 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 1UL), 1UL);
            uint32_t l_318 = 4294967295UL;
            uint32_t l_319 = 0x55F57CA6L;
            int16_t l_320 = 0L;
            VECTOR(uint8_t, 16) l_321 = (VECTOR(uint8_t, 16))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 252UL), 252UL), 252UL, 0x3BL, 252UL, (VECTOR(uint8_t, 2))(0x3BL, 252UL), (VECTOR(uint8_t, 2))(0x3BL, 252UL), 0x3BL, 252UL, 0x3BL, 252UL);
            VECTOR(int8_t, 16) l_322 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x6BL), 0x6BL), 0x6BL, (-7L), 0x6BL, (VECTOR(int8_t, 2))((-7L), 0x6BL), (VECTOR(int8_t, 2))((-7L), 0x6BL), (-7L), 0x6BL, (-7L), 0x6BL);
            VECTOR(int8_t, 8) l_323 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-3L)), (-3L)), (-3L), 1L, (-3L));
            VECTOR(int8_t, 2) l_324 = (VECTOR(int8_t, 2))((-6L), 0x61L);
            VECTOR(uint8_t, 4) l_325 = (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x21L), 0x21L);
            uint64_t l_326 = 0x057FA0060DD85B89L;
            VECTOR(uint8_t, 16) l_327 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 249UL), 249UL), 249UL, 1UL, 249UL, (VECTOR(uint8_t, 2))(1UL, 249UL), (VECTOR(uint8_t, 2))(1UL, 249UL), 1UL, 249UL, 1UL, 249UL);
            uint32_t l_328 = 6UL;
            int16_t l_329 = (-1L);
            VECTOR(int16_t, 8) l_330 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 6L), 6L), 6L, 1L, 6L);
            uint8_t l_331 = 0x01L;
            int32_t l_332[7][10] = {{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)},{0x051FD3D2L,1L,0x020C1B5EL,0x209E0910L,0L,(-10L),0L,1L,0x414BA482L,(-1L)}};
            uint64_t l_333 = 0x2A0376AB80FB667BL;
            int i, j;
            l_333 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_301.wwwx)), 2L, l_302, (-1L), 0x2550FB86L)).s5447121135235717, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_303.s44)).xyyyxxxxyxxyxyxy)))))).s39d5, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(l_304.yxxx)).zzwwyxwxzyywwyzw, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_305.s53)), (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x4CL, 0x7DL)).xyxyxxxx)).odd)).xxxyxxxz)).s32)).even , l_306), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_307.xyyy)))).odd)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_308.xxwyxyww)))))))).s4, 2L, 0x31L)), ((VECTOR(int8_t, 2))(l_309.yx)).xxxxxyxy, ((VECTOR(int8_t, 4))(l_310.zxzw)).xxxxyxyz))).s6710121211065467)).odd)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_311.sf0)), 1L, 1L)).yyyzzzxw, (int8_t)((VECTOR(int8_t, 2))(l_312.wx)).odd, (int8_t)((VECTOR(int8_t, 2))(l_313.xz)).even)))))).odd)).wwwyyxzy)).s7614746736351612, ((VECTOR(uint8_t, 16))(l_314, 0x25L, (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_315.ww)))).yyxyyyxxyyxyxxyx)).sb , l_316), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_317.xwxwzwzw)), l_318, 1UL, l_319, l_320, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_321.s63bf303b)).odd)).even, ((VECTOR(uint8_t, 2))(0x93L, 0xD8L)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(253UL, 0x90L)).xyyy)).wzxzxwwwxxxxywzx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(l_322.s97be0239b336fe4c)).s2b95, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(l_323.s51750113)).even, (int8_t)((VECTOR(int8_t, 8))(l_324.xxxyxxxy)).s0)))))).yyxywxzyzyzwywyx)).s3a))), ((VECTOR(uint8_t, 4))(l_325.ywzx)), 255UL, l_326, 0x58L, (l_331 = (l_330.s5 = ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_327.sa8d074dc)).hi)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(0x8BL, 4UL, 0x92L, l_328, ((VECTOR(uint8_t, 8))(0x80L)), 7UL, l_329, 0x8FL, 2UL)).s813e, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(247UL)))))))))).x)), 248UL, ((VECTOR(uint8_t, 2))(0UL)), 0x34L, 0xECL, 0UL)))).s96f6)))), 6UL, 0x6DL, 0xEAL, 1UL)), 0UL, ((VECTOR(uint8_t, 2))(0xECL)), l_332[1][2], 255UL, ((VECTOR(uint8_t, 2))(2UL)), 255UL)), ((VECTOR(uint8_t, 16))(0x82L))))).s6e81)).even))), 254UL, 0xFAL)).s2eb5)), ((VECTOR(uint8_t, 8))(0x87L)), 0xD6L))))).lo)).odd))).yxwywyyzyzzwzxzz)).even, ((VECTOR(int16_t, 8))((-1L)))))).s20)), 1L, 0x2EC3L)), ((VECTOR(uint16_t, 4))(65535UL))))).yxwxxzzxyzywwyxw, ((VECTOR(int32_t, 16))(0x548E98D1L))))).saaa6)).y;
            unsigned int result = 0;
            result += l_301.w;
            result += l_301.z;
            result += l_301.y;
            result += l_301.x;
            result += l_302;
            result += l_303.s7;
            result += l_303.s6;
            result += l_303.s5;
            result += l_303.s4;
            result += l_303.s3;
            result += l_303.s2;
            result += l_303.s1;
            result += l_303.s0;
            result += l_304.y;
            result += l_304.x;
            result += l_305.s7;
            result += l_305.s6;
            result += l_305.s5;
            result += l_305.s4;
            result += l_305.s3;
            result += l_305.s2;
            result += l_305.s1;
            result += l_305.s0;
            result += l_306;
            result += l_307.y;
            result += l_307.x;
            result += l_308.w;
            result += l_308.z;
            result += l_308.y;
            result += l_308.x;
            result += l_309.y;
            result += l_309.x;
            result += l_310.w;
            result += l_310.z;
            result += l_310.y;
            result += l_310.x;
            result += l_311.sf;
            result += l_311.se;
            result += l_311.sd;
            result += l_311.sc;
            result += l_311.sb;
            result += l_311.sa;
            result += l_311.s9;
            result += l_311.s8;
            result += l_311.s7;
            result += l_311.s6;
            result += l_311.s5;
            result += l_311.s4;
            result += l_311.s3;
            result += l_311.s2;
            result += l_311.s1;
            result += l_311.s0;
            result += l_312.w;
            result += l_312.z;
            result += l_312.y;
            result += l_312.x;
            result += l_313.w;
            result += l_313.z;
            result += l_313.y;
            result += l_313.x;
            result += l_314;
            result += l_315.w;
            result += l_315.z;
            result += l_315.y;
            result += l_315.x;
            result += l_316;
            result += l_317.w;
            result += l_317.z;
            result += l_317.y;
            result += l_317.x;
            result += l_318;
            result += l_319;
            result += l_320;
            result += l_321.sf;
            result += l_321.se;
            result += l_321.sd;
            result += l_321.sc;
            result += l_321.sb;
            result += l_321.sa;
            result += l_321.s9;
            result += l_321.s8;
            result += l_321.s7;
            result += l_321.s6;
            result += l_321.s5;
            result += l_321.s4;
            result += l_321.s3;
            result += l_321.s2;
            result += l_321.s1;
            result += l_321.s0;
            result += l_322.sf;
            result += l_322.se;
            result += l_322.sd;
            result += l_322.sc;
            result += l_322.sb;
            result += l_322.sa;
            result += l_322.s9;
            result += l_322.s8;
            result += l_322.s7;
            result += l_322.s6;
            result += l_322.s5;
            result += l_322.s4;
            result += l_322.s3;
            result += l_322.s2;
            result += l_322.s1;
            result += l_322.s0;
            result += l_323.s7;
            result += l_323.s6;
            result += l_323.s5;
            result += l_323.s4;
            result += l_323.s3;
            result += l_323.s2;
            result += l_323.s1;
            result += l_323.s0;
            result += l_324.y;
            result += l_324.x;
            result += l_325.w;
            result += l_325.z;
            result += l_325.y;
            result += l_325.x;
            result += l_326;
            result += l_327.sf;
            result += l_327.se;
            result += l_327.sd;
            result += l_327.sc;
            result += l_327.sb;
            result += l_327.sa;
            result += l_327.s9;
            result += l_327.s8;
            result += l_327.s7;
            result += l_327.s6;
            result += l_327.s5;
            result += l_327.s4;
            result += l_327.s3;
            result += l_327.s2;
            result += l_327.s1;
            result += l_327.s0;
            result += l_328;
            result += l_329;
            result += l_330.s7;
            result += l_330.s6;
            result += l_330.s5;
            result += l_330.s4;
            result += l_330.s3;
            result += l_330.s2;
            result += l_330.s1;
            result += l_330.s0;
            result += l_331;
            int l_332_i0, l_332_i1;
            for (l_332_i0 = 0; l_332_i0 < 7; l_332_i0++) {
                for (l_332_i1 = 0; l_332_i1 < 10; l_332_i1++) {
                    result += l_332[l_332_i0][l_332_i1];
                }
            }
            result += l_333;
            atomic_add(&p_1208->l_special_values[4], result);
        }
        else
        { /* block id: 141 */
            (1 + 1);
        }
        l_225[0] &= ((((VECTOR(uint8_t, 16))(p_1208->g_334.yxyyxxxxxxyxyyyy)).s1 & (((*l_226) ^= (((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((*p_37), 13)) & (safe_sub_func_int16_t_s_s((((VECTOR(int32_t, 8))(p_1208->g_341.xzwyywzy)).s3 > ((VECTOR(int32_t, 8))((+0x0FB4FF55L), 4L, ((VECTOR(int32_t, 2))(l_342.xw)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))((*p_1208->g_179), 0x4412E4CFL, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x5DBADC51L, (-1L), (-5L), 0x241A0FE5L, (-1L), ((VECTOR(int32_t, 2))(1L, 8L)), 1L)).even, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(p_1208->g_343.zy)).yxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_344.yy)).yyxyyxyyyxyxyxxx)).saf74))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(p_1208->g_345.xy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_346.s1507635522147667)))).s84))).yyyxyyyy)).even))), 0x79711694L, (-1L), ((VECTOR(int32_t, 4))(((l_347 != (void*)0) ^ (&p_1208->g_179 != &p_1208->g_179)), p_39, (-1L), 0x69883220L)), (-1L), p_38, 0x4278129BL, 0x58CF2D90L)), ((VECTOR(int32_t, 16))(0x2AC9F851L)), ((VECTOR(int32_t, 16))(7L))))).odd, (int32_t)0x0EB1019DL))).s32)).yyxyxyyyyxxyyxyy, ((VECTOR(int32_t, 16))(0x53F2C41DL)), ((VECTOR(int32_t, 16))(0x12997743L))))).s14a0, ((VECTOR(int32_t, 4))(6L))))))).s4), l_264.y))), 10)) , (*p_1208->g_54)) < (*p_1208->g_54))) , 0UL)) , p_39);
        l_348++;
    }
    for (p_1208->g_153.f1 = 27; (p_1208->g_153.f1 != 27); p_1208->g_153.f1++)
    { /* block id: 150 */
        if ((atomic_inc(&p_1208->l_atomic_input[27]) == 6))
        { /* block id: 152 */
            uint8_t l_353 = 1UL;
            uint64_t l_354 = 0xBC222D0E81771984L;
            int8_t l_355 = (-7L);
            int8_t l_356 = 0x73L;
            uint32_t l_357[9] = {0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L,0x8D005512L};
            uint32_t l_358[1][10][6] = {{{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L},{4294967292UL,0x0C8C7ECDL,0x0C8C7ECDL,4294967292UL,4UL,0x7EB8C8C3L}}};
            uint8_t l_359 = 0xEBL;
            int i, j, k;
            l_353 &= 0x795F5BF0L;
            l_355 = l_354;
            l_358[0][3][2] |= (l_357[1] = l_356);
            if (l_359)
            { /* block id: 157 */
                uint32_t l_360 = 4294967292UL;
                int32_t l_361 = 0x13FB6E45L;
                int32_t l_362 = 7L;
                VECTOR(int16_t, 8) l_363 = (VECTOR(int16_t, 8))(0x5B2AL, (VECTOR(int16_t, 4))(0x5B2AL, (VECTOR(int16_t, 2))(0x5B2AL, 0x4D3CL), 0x4D3CL), 0x4D3CL, 0x5B2AL, 0x4D3CL);
                VECTOR(int16_t, 2) l_364 = (VECTOR(int16_t, 2))(1L, 0x170DL);
                uint32_t l_365 = 1UL;
                int32_t *l_366 = &l_361;
                int32_t *l_367 = &l_362;
                int i;
                l_365 ^= ((l_362 = (l_360 , l_361)) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x5C6BE94EL, 9L)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_363.s02)), 0x29B5L, 0x351FL)), ((VECTOR(int16_t, 2))(l_364.xx)).yyxx))).odd)).xxxyyxxx)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xADCAL, 0UL)), 0UL, 0xC7DAL))))).even))).xyxxyxxyxxyxyxyy)), ((VECTOR(int32_t, 2))(0x2DC2F53CL, 0x2C04628BL)).xxyyyxxxxxxyyyxx))))).se);
                l_367 = l_366;
            }
            else
            { /* block id: 161 */
                int32_t l_368 = 0x0F849A41L;
                uint64_t l_369 = 1UL;
                l_369 |= l_368;
            }
            unsigned int result = 0;
            result += l_353;
            result += l_354;
            result += l_355;
            result += l_356;
            int l_357_i0;
            for (l_357_i0 = 0; l_357_i0 < 9; l_357_i0++) {
                result += l_357[l_357_i0];
            }
            int l_358_i0, l_358_i1, l_358_i2;
            for (l_358_i0 = 0; l_358_i0 < 1; l_358_i0++) {
                for (l_358_i1 = 0; l_358_i1 < 10; l_358_i1++) {
                    for (l_358_i2 = 0; l_358_i2 < 6; l_358_i2++) {
                        result += l_358[l_358_i0][l_358_i1][l_358_i2];
                    }
                }
            }
            result += l_359;
            atomic_add(&p_1208->l_special_values[27], result);
        }
        else
        { /* block id: 164 */
            (1 + 1);
        }
    }
    return (*l_237);
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_179 p_1208->g_59
 * writes: p_1208->g_57 p_1208->g_179 p_1208->g_116 p_1208->g_59
 */
int16_t * func_40(int8_t  p_41, uint64_t  p_42, int16_t * p_43, int64_t  p_44, struct S9 * p_1208)
{ /* block id: 82 */
    uint32_t l_198 = 4294967288UL;
    int32_t l_203 = 0x3F21CDF8L;
    int32_t l_205 = 0x61D5AB82L;
    int32_t l_206 = 0x634F6A9FL;
    int32_t *l_207 = &l_203;
    int32_t *l_208 = &p_1208->g_116[2];
    int32_t l_209 = 0x317E9293L;
    int32_t *l_210[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_211 = 1L;
    int8_t l_212 = 0x3AL;
    uint32_t l_213[6] = {0x31E34A7EL,0x31E34A7EL,0x31E34A7EL,0x31E34A7EL,0x31E34A7EL,0x31E34A7EL};
    int32_t **l_216 = &l_208;
    int16_t *l_217 = &p_1208->g_79.f0;
    int i;
    for (p_44 = (-11); (p_44 != (-10)); ++p_44)
    { /* block id: 85 */
        int32_t *l_202 = &p_1208->g_116[8];
        int32_t *l_204 = &p_1208->g_59;
        for (p_1208->g_57 = (-14); (p_1208->g_57 <= 1); ++p_1208->g_57)
        { /* block id: 88 */
            int32_t *l_197[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t **l_199 = &p_1208->g_179;
            int32_t **l_200 = (void*)0;
            int32_t **l_201 = &l_197[1][2];
            int i, j;
            l_198 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1208->g_196.s2557)).zxywzxwxyyzyxyxz)).sf;
            (*l_201) = ((*l_199) = &p_1208->g_59);
            if ((*p_1208->g_179))
                break;
            if ((*p_1208->g_179))
                break;
        }
        (*l_204) |= (l_203 ^= ((*l_202) = 0x4BB2AAA4L));
    }
    ++l_213[3];
    (*l_216) = &p_1208->g_59;
    return l_217;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_54 p_1208->g_64 p_1208->g_57 p_1208->g_80 p_1208->g_79.f0 p_1208->g_59 p_1208->g_92 p_1208->g_93 p_1208->g_7 p_1208->g_95 p_1208->g_96 p_1208->g_107 p_1208->g_79.f1 p_1208->g_3 p_1208->g_116 p_1208->g_117 p_1208->g_153 p_1208->g_179 p_1208->g_180
 * writes: p_1208->g_64 p_1208->g_80 p_1208->g_79.f0 p_1208->g_57 p_1208->g_116 p_1208->g_179 p_1208->g_153
 */
uint64_t  func_45(uint8_t  p_46, struct S9 * p_1208)
{ /* block id: 15 */
    uint64_t l_69 = 18446744073709551611UL;
    int32_t **l_185 = &p_1208->g_179;
    (*l_185) = func_48(&p_1208->g_3, p_1208->g_54, func_55(&p_1208->g_7, p_1208), p_1208->g_57, (safe_lshift_func_int16_t_s_u((l_69 = 1L), 1)), p_1208);
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_64 p_1208->g_80 p_1208->g_57 p_1208->g_79.f0 p_1208->g_59 p_1208->g_92 p_1208->g_93 p_1208->g_7 p_1208->g_95 p_1208->g_96 p_1208->g_107 p_1208->g_79.f1 p_1208->g_3 p_1208->g_116 p_1208->g_117 p_1208->g_153 p_1208->g_179 p_1208->g_180
 * writes: p_1208->g_64 p_1208->g_80 p_1208->g_79.f0 p_1208->g_57 p_1208->g_116 p_1208->g_179 p_1208->g_153
 */
int32_t * func_48(int32_t * p_49, int16_t * p_50, int16_t * p_51, uint32_t  p_52, int64_t  p_53, struct S9 * p_1208)
{ /* block id: 20 */
    int32_t *l_70 = &p_1208->g_3;
    int32_t *l_72 = &p_1208->g_59;
    int32_t **l_71 = &l_72;
    struct S5 *l_78 = &p_1208->g_79;
    int32_t l_88 = 9L;
    VECTOR(int32_t, 2) l_90 = (VECTOR(int32_t, 2))(0L, 0L);
    VECTOR(int16_t, 16) l_94 = (VECTOR(int16_t, 16))(0x3758L, (VECTOR(int16_t, 4))(0x3758L, (VECTOR(int16_t, 2))(0x3758L, (-4L)), (-4L)), (-4L), 0x3758L, (-4L), (VECTOR(int16_t, 2))(0x3758L, (-4L)), (VECTOR(int16_t, 2))(0x3758L, (-4L)), 0x3758L, (-4L), 0x3758L, (-4L));
    VECTOR(int16_t, 2) l_99 = (VECTOR(int16_t, 2))(0x26E9L, (-1L));
    VECTOR(int64_t, 2) l_104 = (VECTOR(int64_t, 2))((-1L), 0x68FF3A2FA3D26D73L);
    VECTOR(int64_t, 16) l_108 = (VECTOR(int64_t, 16))(0x0AE80B3DF57287C4L, (VECTOR(int64_t, 4))(0x0AE80B3DF57287C4L, (VECTOR(int64_t, 2))(0x0AE80B3DF57287C4L, 6L), 6L), 6L, 0x0AE80B3DF57287C4L, 6L, (VECTOR(int64_t, 2))(0x0AE80B3DF57287C4L, 6L), (VECTOR(int64_t, 2))(0x0AE80B3DF57287C4L, 6L), 0x0AE80B3DF57287C4L, 6L, 0x0AE80B3DF57287C4L, 6L);
    int32_t * volatile *l_121 = &l_70;
    int32_t l_123 = 0x280F0832L;
    int64_t l_126 = (-9L);
    int32_t l_127 = 0x11C9AC6BL;
    struct S1 l_140 = {8L,18446744073709551614UL,0x530A4E55L,4294967295UL,6UL,0x2F6CE27EL};
    VECTOR(int8_t, 8) l_169 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, (-6L)), (-6L)), (-6L), 0x15L, (-6L));
    struct S5 **l_183[7][10][3] = {{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}},{{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]},{&l_78,&p_1208->g_181[1],&p_1208->g_181[1]}}};
    int32_t *l_184 = &p_1208->g_116[5];
    int i, j, k;
    if ((l_70 != ((*l_71) = &p_1208->g_7)))
    { /* block id: 22 */
        struct S3 *l_86[8][5] = {{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80},{&p_1208->g_80,&p_1208->g_80,(void*)0,&p_1208->g_80,&p_1208->g_80}};
        int32_t *l_89 = &l_88;
        VECTOR(int32_t, 4) l_91 = (VECTOR(int32_t, 4))(0x6F4160CAL, (VECTOR(int32_t, 2))(0x6F4160CAL, 1L), 1L);
        int32_t *l_115 = &p_1208->g_116[2];
        int i, j;
        for (p_1208->g_64 = 10; (p_1208->g_64 > 21); p_1208->g_64 = safe_add_func_uint32_t_u_u(p_1208->g_64, 1))
        { /* block id: 25 */
            struct S5 *l_75 = &p_1208->g_76;
            struct S5 **l_77[9][6][1] = {{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}},{{&l_75},{&l_75},{&l_75},{&l_75},{&l_75},{&l_75}}};
            struct S3 l_81 = {0x4EL};
            struct S3 *l_82 = (void*)0;
            struct S3 *l_83 = &p_1208->g_80;
            int i, j, k;
            l_78 = l_75;
            p_1208->g_80 = p_1208->g_80;
            (*l_83) = l_81;
            if (p_1208->g_57)
                continue;
        }
        for (p_1208->g_79.f0 = 0; (p_1208->g_79.f0 > (-22)); --p_1208->g_79.f0)
        { /* block id: 33 */
            struct S3 **l_87 = &l_86[6][3];
            l_88 = (((*l_87) = l_86[6][3]) == (void*)0);
        }
        (*l_115) ^= ((VECTOR(int32_t, 16))(((*l_89) = p_1208->g_59), ((VECTOR(int32_t, 4))(l_90.yxyx)), ((VECTOR(int32_t, 2))(l_91.wx)), 0x309764F7L, 7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1208->g_92.yx)).yyxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6B33E2D4L, (-6L))), 0x0C79EC61L, 0x5EA61E07L))))))).even)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))((~8L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(0x67D4L, (-1L))).yyyx, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_1208->g_93.yyyyyyxxxyyxyxxx)).sab99)).yxxywyzyxxxzzxyx, ((VECTOR(int16_t, 8))((**l_71), ((VECTOR(int16_t, 4))(l_94.s998b)), ((VECTOR(int16_t, 2))(0L, 0x41E9L)), 0x4AA8L)).s4522547533374576))).s6e87, ((VECTOR(int16_t, 16))(p_1208->g_95.s4458f42be7ac75e1)).s209e)))))).hi)), 0x7477L)).lo, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1208->g_96.yyxy)).w, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(0UL, p_53, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_99.yx)).xxyx)).w, ((0UL > ((*p_51) = (((safe_sub_func_uint8_t_u_u(((+(safe_rshift_func_uint16_t_u_s(((((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(l_104.xyyxxyyxxxxxxxxy)).sff, ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0L, (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 8)), 1L, (-1L))))).xxzyzxxx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(p_1208->g_107.yx)).xyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_108.s6bf6)).xywxwxyz)).even))).wyzyyzxwzwxzyzyw, (int64_t)(safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_1208->g_79.f0, 15)), (p_1208->g_79.f1 & (safe_rshift_func_uint8_t_u_s(p_1208->g_80.f0, 7)))))))))).hi)))).s75)), (0x3CF24B42E23460C9L <= p_53), (-1L), 0x73AC029035E4B528L, 0x65F45D9FCA90243FL, 0x1F57036DBD5D31C8L, ((VECTOR(int64_t, 4))(0x062B7E3690D562EDL)), (-8L), 0L, (-4L), (-7L))).s6f, ((VECTOR(int64_t, 2))(0L))))).xyyy)).xxyzzyww, ((VECTOR(int64_t, 8))((-9L)))))).s45))).lo == (*l_89)) < (*l_89)), (*l_70)))) , (*l_72)), p_1208->g_59)) , p_1208->g_96.y) < p_1208->g_64))) >= p_1208->g_92.x))), ((VECTOR(uint16_t, 4))(65535UL)), 65531UL)).hi, ((VECTOR(uint16_t, 4))(65526UL)), ((VECTOR(uint16_t, 4))(0xFEA6L))))))), p_53, p_53, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(0xCA78L)), 0xF48EL, 0xAE63L, 0x3D85L)))).odd, ((VECTOR(uint16_t, 8))(0xB7E9L))))).s67))), (*p_49), 0x5DC992EEL, 0x79545433L)).s1;
    }
    else
    { /* block id: 40 */
        int32_t * volatile **l_119 = (void*)0;
        int32_t * volatile **l_120[4] = {&p_1208->g_117,&p_1208->g_117,&p_1208->g_117,&p_1208->g_117};
        int64_t l_122 = 0x1527A06FA74B5D44L;
        int32_t l_125 = 0x07ACA667L;
        uint8_t l_128 = 0UL;
        uint32_t l_134 = 0xD4659EC0L;
        int32_t l_139 = 2L;
        struct S1 *l_177 = &p_1208->g_153;
        int i;
        l_121 = p_1208->g_117;
        --l_128;
        for (p_52 = 0; (p_52 != 26); p_52 = safe_add_func_uint64_t_u_u(p_52, 4))
        { /* block id: 45 */
            int8_t l_133[4][4][4] = {{{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L}},{{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L}},{{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L}},{{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L},{0L,4L,(-1L),0x68L}}};
            uint16_t *l_143 = (void*)0;
            uint16_t *l_144 = &p_1208->g_64;
            VECTOR(uint32_t, 8) l_149 = (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x4D3F08EFL), 0x4D3F08EFL), 0x4D3F08EFL, 6UL, 0x4D3F08EFL);
            uint8_t *l_150 = (void*)0;
            uint8_t *l_151[1];
            int32_t l_152 = 0x6A24C7B2L;
            struct S1 l_155 = {0x13CCL,0UL,0x4C74275FL,4294967295UL,0x4944L,0xB94E045BL};
            VECTOR(uint16_t, 4) l_165 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x5FEEL), 0x5FEEL);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_151[i] = &l_128;
            ++l_134;
            if ((safe_mod_func_uint32_t_u_u((((FAKE_DIVERGE(p_1208->global_2_offset, get_global_id(2), 10) != ((p_52 , 0x22L) != ((VECTOR(uint8_t, 2))(9UL, 0UL)).lo)) , GROUP_DIVERGE(2, 1)) > ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))((l_139 == ((((l_140 , (1L < (((**l_71) , ((l_152 &= (((((safe_rshift_func_uint16_t_u_s((p_1208->g_96.x ^= ((((++(*l_144)) < ((void*)0 != p_50)) != (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_149.s20)).yyyxyxxy)).s0, (p_1208->g_80 , l_149.s5)))) && 0x44L)), (*p_51))) && 0x0A85100DL) && 2L) , (*l_72)) , FAKE_DIVERGE(p_1208->group_0_offset, get_group_id(0), 10))) | 249UL)) & FAKE_DIVERGE(p_1208->local_2_offset, get_local_id(2), 10)))) & p_1208->g_62[5][2][3]) < 0x4DF1FAADL) || (*p_51))), 0x4AL, ((VECTOR(int8_t, 4))(1L)), 0x58L, 0x6BL, ((VECTOR(int8_t, 8))(0L)))).s1d7d, ((VECTOR(int8_t, 4))((-9L)))))).odd)).hi), 0x1D209C86L)))
            { /* block id: 50 */
                struct S1 *l_154[10] = {&p_1208->g_153,(void*)0,&p_1208->g_153,&p_1208->g_153,(void*)0,&p_1208->g_153,&p_1208->g_153,(void*)0,&p_1208->g_153,&p_1208->g_153};
                int i;
                l_155 = p_1208->g_153;
            }
            else
            { /* block id: 52 */
                uint32_t l_156 = 0x5C6CAAC7L;
                int32_t *l_162 = &p_1208->g_116[3];
                l_156 ^= 1L;
                l_152 |= ((safe_lshift_func_uint8_t_u_s(l_156, 2)) , (0x1665395DL || ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1208->g_159.yywzwxxz)).lo)))).odd))).yyyy)).wzwwwxxx)).s0));
                for (l_155.f2 = 6; (l_155.f2 == (-30)); l_155.f2--)
                { /* block id: 57 */
                    struct S1 *l_168 = &p_1208->g_153;
                    int64_t *l_172 = (void*)0;
                    int64_t *l_173 = (void*)0;
                    int64_t *l_174 = &l_122;
                    int32_t *l_178 = &l_152;
                    l_152 |= ((((*l_144) = ((p_49 = l_162) != (void*)0)) == 0x5D62L) , (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(0x3AL, ((VECTOR(int8_t, 2))(0x6FL, 0x04L)), (((((((VECTOR(uint16_t, 16))(l_165.yzyyxwwywxwyywww)).s6 <= (p_1208->g_96.x |= (0x3FL && (((VECTOR(uint32_t, 2))(0x85A7D7BAL, 4294967295UL)).lo < (((((*l_174) = (safe_rshift_func_uint8_t_u_s((l_168 == &p_1208->g_153), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(l_169.s7474063335240163)), ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 0x51L)))).yxyxxyyxxxyxxyxy, ((VECTOR(int8_t, 8))(p_1208->g_170.sec2a0ec8)).s1275000055472050)))))))).s61e8)).lo, ((VECTOR(int8_t, 8))(p_1208->g_171.xxwwzyyw)).s25))), p_1208->g_79.f1, 1L, (-5L), 1L, 0L, (-2L))).hi)).w))) == (safe_mod_func_uint32_t_u_u((l_177 != &l_140), p_1208->g_116[2]))) < 0x0655CE3AL) , p_1208->g_153.f1))))) != (*l_162)) || 1UL) && (-1L)) , p_52), ((VECTOR(int8_t, 4))(0x41L)))), ((VECTOR(int8_t, 8))(1L))))).s6651653172440767, ((VECTOR(int8_t, 16))(0x2CL))))).sc81f, ((VECTOR(int8_t, 4))((-1L)))))).ywxwwyzx)).s7, 3)));
                    p_1208->g_179 = l_178;
                    (*p_1208->g_179) = ((*p_49) = (((VECTOR(uint8_t, 4))(1UL, 7UL, 0xF2L, 0xC2L)).x > (*l_178)));
                }
                (*l_71) = (void*)0;
            }
            (*l_177) = p_1208->g_153;
        }
    }
    l_123 |= (((*l_184) = (l_90.y &= (&l_78 != (l_183[3][1][1] = p_1208->g_180)))) != 9UL);
    return &p_1208->g_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1208->g_64
 * writes: p_1208->g_64
 */
int16_t * func_55(int32_t * p_56, struct S9 * p_1208)
{ /* block id: 16 */
    int32_t *l_58 = &p_1208->g_59;
    int32_t *l_60 = &p_1208->g_59;
    int32_t *l_61[6];
    int64_t l_63[7][5][1] = {{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}},{{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL},{0x41E226996DCEBFDCL}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_61[i] = &p_1208->g_59;
    p_1208->g_64++;
    return &p_1208->g_57;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[32];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 32; i++)
            l_comm_values[i] = 1;
    struct S9 c_1209;
    struct S9* p_1208 = &c_1209;
    struct S9 c_1210 = {
        0L, // p_1208->g_2
        0x57EA0D01L, // p_1208->g_3
        0x184E5A94L, // p_1208->g_6
        0x01ECA6C8L, // p_1208->g_7
        (-1L), // p_1208->g_13
        0L, // p_1208->g_29
        (void*)0, // p_1208->g_54
        0x4BDFL, // p_1208->g_57
        0x3E308DDDL, // p_1208->g_59
        {{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}},{{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L},{0x00CDE216L,0L,(-9L),0x151F1B00L}}}, // p_1208->g_62
        0x4EFDL, // p_1208->g_64
        {0x05BAL,0x45DB3902D8B6467BL,{0L,0xA0C815F7L,0xFB90L,0xFDF2L,0x1A233967L},8L}, // p_1208->g_76
        {0L,0x0660D0C570B93D6BL,{1L,0xC66F1EAAL,0x298BL,65526UL,-7L},-1L}, // p_1208->g_79
        {1UL}, // p_1208->g_80
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x644A7470L), 0x644A7470L), // p_1208->g_92
        (VECTOR(int16_t, 2))(9L, 0x1440L), // p_1208->g_93
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x15E3L), 0x15E3L), 0x15E3L, 1L, 0x15E3L, (VECTOR(int16_t, 2))(1L, 0x15E3L), (VECTOR(int16_t, 2))(1L, 0x15E3L), 1L, 0x15E3L, 1L, 0x15E3L), // p_1208->g_95
        (VECTOR(uint16_t, 2))(65532UL, 0x1705L), // p_1208->g_96
        (VECTOR(int64_t, 2))((-1L), (-3L)), // p_1208->g_107
        {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}, // p_1208->g_116
        (void*)0, // p_1208->g_118
        &p_1208->g_118, // p_1208->g_117
        1L, // p_1208->g_124
        {0x6456L,0x29B314F7CC056BA9L,1L,4294967292UL,0x4E35L,0xF5FD858BL}, // p_1208->g_153
        (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-2L)), (-2L)), // p_1208->g_159
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4DL), 0x4DL), 0x4DL, (-1L), 0x4DL, (VECTOR(int8_t, 2))((-1L), 0x4DL), (VECTOR(int8_t, 2))((-1L), 0x4DL), (-1L), 0x4DL, (-1L), 0x4DL), // p_1208->g_170
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x55L), 0x55L), // p_1208->g_171
        (void*)0, // p_1208->g_179
        {1L,0xC2DDF097816C6405L,{0L,0x2C1A4AF1L,0xAE8CL,65533UL,0x7F25B7BEL},-1L}, // p_1208->g_182
        {&p_1208->g_182,&p_1208->g_182}, // p_1208->g_181
        &p_1208->g_181[1], // p_1208->g_180
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6AA9C15EL), 0x6AA9C15EL), 0x6AA9C15EL, 1L, 0x6AA9C15EL), // p_1208->g_196
        (VECTOR(int32_t, 4))(0x1EE5A731L, (VECTOR(int32_t, 2))(0x1EE5A731L, 0x2825E3BEL), 0x2825E3BEL), // p_1208->g_231
        (-2L), // p_1208->g_239
        &p_1208->g_239, // p_1208->g_238
        (VECTOR(int16_t, 16))(0x049EL, (VECTOR(int16_t, 4))(0x049EL, (VECTOR(int16_t, 2))(0x049EL, (-1L)), (-1L)), (-1L), 0x049EL, (-1L), (VECTOR(int16_t, 2))(0x049EL, (-1L)), (VECTOR(int16_t, 2))(0x049EL, (-1L)), 0x049EL, (-1L), 0x049EL, (-1L)), // p_1208->g_249
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1208->g_250
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_1208->g_265
        {{-1L,18446744073709551615UL,1L,0x1D1AD1E7L,0x8609L,0xA67194B1L}}, // p_1208->g_275
        &p_1208->g_275, // p_1208->g_274
        (VECTOR(uint8_t, 2))(1UL, 0x20L), // p_1208->g_334
        (VECTOR(int32_t, 4))(0x0087FA0AL, (VECTOR(int32_t, 2))(0x0087FA0AL, 0x0729D914L), 0x0729D914L), // p_1208->g_341
        (VECTOR(int32_t, 4))(0x70552634L, (VECTOR(int32_t, 2))(0x70552634L, 1L), 1L), // p_1208->g_343
        (VECTOR(int32_t, 2))(3L, (-1L)), // p_1208->g_345
        {251UL}, // p_1208->g_370
        {0x5504L,4294967294UL,65526UL,0xDBEDL,0x2392F46FL}, // p_1208->g_374
        &p_1208->g_374, // p_1208->g_373
        {{-1L,4UL,0x16BDD994L,0x23C3F02CL,0xEEBAL,0x6AE10E29L}}, // p_1208->g_379
        {{1L,1UL,1L,4294967291UL,6UL,0xBF1C4509L},0x0EB1L,{0x117DL,18446744073709551615UL,-3L,0xF28296DBL,0x6F6BL,0xF5A7C87EL},0xC1D81E35L}, // p_1208->g_396
        &p_1208->g_153.f3, // p_1208->g_407
        &p_1208->g_407, // p_1208->g_406
        {4294967286UL,-1L,0x59FCL,{{0x4E79L,0UL,1L,4294967295UL,65535UL,0x756D0696L},0UL,0xA16BA866DF81D321L},1L,-7L,-1L,4294967291UL}, // p_1208->g_411
        {4294967295UL,0x435F301DL,0xDB0FL,{{0x31C1L,5UL,1L,4294967295UL,65535UL,0x64B79A8CL},18446744073709551615UL,0xBAF6876E518CEE38L},0x51E533F9L,0x7280689EDDC35ACCL,-6L,9UL}, // p_1208->g_422
        (-2L), // p_1208->g_433
        {0x1107L,5UL,{0x4C8CL,1UL,4UL,65527UL,-1L},-5L}, // p_1208->g_441
        {0x178EL,0x599DCA5FL,0UL,1UL,0x1B94CF89L}, // p_1208->g_444
        {{0x0021L,0x09CDB8C829C5C43FL,0x13F9CBD4L,1UL,6UL,0x34684324L},0L,{0x6448L,0x83DB58836C64FCBEL,0x5E17F208L,0xD5A36E9AL,0x51DDL,4294967287UL},0x8C0562E3L}, // p_1208->g_445
        {0xF63E61E1L,1L,65527UL,{{0x77F8L,0x624523E2F4E04FA3L,0x4CD31268L,0x1C0D739FL,0UL,7UL},0UL,0x53E81DAA0B3B55C2L},0x1DE17E81L,-1L,1L,0UL}, // p_1208->g_447
        &p_1208->g_447, // p_1208->g_449
        &p_1208->g_447.f3, // p_1208->g_453
        0x03C8415FL, // p_1208->g_466
        (VECTOR(int32_t, 2))(3L, 1L), // p_1208->g_471
        (VECTOR(int64_t, 16))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x7197ABCFD0B1DBE8L), 0x7197ABCFD0B1DBE8L), 0x7197ABCFD0B1DBE8L, (-5L), 0x7197ABCFD0B1DBE8L, (VECTOR(int64_t, 2))((-5L), 0x7197ABCFD0B1DBE8L), (VECTOR(int64_t, 2))((-5L), 0x7197ABCFD0B1DBE8L), (-5L), 0x7197ABCFD0B1DBE8L, (-5L), 0x7197ABCFD0B1DBE8L), // p_1208->g_485
        0xB093AE02A7EDFDFCL, // p_1208->g_541
        {0L,0x297B391DACCAB087L,{-5L,1UL,1UL,3UL,0x4DF2BC91L},0x46EC7F27L}, // p_1208->g_542
        &p_1208->g_445.f2, // p_1208->g_546
        {6UL,3L,9UL,{{1L,0UL,0x6959E88EL,0xAE0EF13EL,65535UL,6UL},18446744073709551611UL,0x5CD281EE3E5A3DDDL},0x31C6EBCDL,1L,0x3E25L,4294967294UL}, // p_1208->g_575
        {{0x5531L,8UL,65535UL,0x3F46L,0x3D2A52C9L},{0x2906L,0x6C168E83L,0x0AE8L,65529UL,-8L},{0x5531L,8UL,65535UL,0x3F46L,0x3D2A52C9L},{0x5531L,8UL,65535UL,0x3F46L,0x3D2A52C9L},{0x2906L,0x6C168E83L,0x0AE8L,65529UL,-8L},{0x5531L,8UL,65535UL,0x3F46L,0x3D2A52C9L},{0x5531L,8UL,65535UL,0x3F46L,0x3D2A52C9L},{0x2906L,0x6C168E83L,0x0AE8L,65529UL,-8L}}, // p_1208->g_577
        (VECTOR(int16_t, 8))(0x1C3FL, (VECTOR(int16_t, 4))(0x1C3FL, (VECTOR(int16_t, 2))(0x1C3FL, 0x0E59L), 0x0E59L), 0x0E59L, 0x1C3FL, 0x0E59L), // p_1208->g_608
        (VECTOR(int16_t, 2))(0x2B33L, 0x13DFL), // p_1208->g_609
        (-9L), // p_1208->g_641
        (VECTOR(int64_t, 2))((-1L), 0x55AC2C278DE04117L), // p_1208->g_646
        (VECTOR(int32_t, 8))(0x1CAF25EEL, (VECTOR(int32_t, 4))(0x1CAF25EEL, (VECTOR(int32_t, 2))(0x1CAF25EEL, 4L), 4L), 4L, 0x1CAF25EEL, 4L), // p_1208->g_672
        1UL, // p_1208->g_679
        {{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}},{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}},{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}},{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}},{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}},{{{0x07F7L,0xA947167F99F8883BL,1L,2UL,0xD38DL,0UL}},{{0x7751L,1UL,0x35A65BBFL,4294967293UL,1UL,0UL}}}}, // p_1208->g_688
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xE13FF256L), 0xE13FF256L), 0xE13FF256L, 0UL, 0xE13FF256L), // p_1208->g_698
        (-2L), // p_1208->g_705
        (VECTOR(uint8_t, 16))(0xC0L, (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 248UL), 248UL), 248UL, 0xC0L, 248UL, (VECTOR(uint8_t, 2))(0xC0L, 248UL), (VECTOR(uint8_t, 2))(0xC0L, 248UL), 0xC0L, 248UL, 0xC0L, 248UL), // p_1208->g_713
        (void*)0, // p_1208->g_726
        {{0x140BL,0x819C265EF13B60B8L,0x0438DCBDL,0x4C368690L,0xA3C2L,0xE8985EFBL},-1L,{0x2151L,0xE5938C87E766BF0DL,0x6871C0B1L,0xFF8FEB18L,0UL,0UL},2UL}, // p_1208->g_729
        0xE7L, // p_1208->g_731
        (VECTOR(uint32_t, 16))(0x06E554AAL, (VECTOR(uint32_t, 4))(0x06E554AAL, (VECTOR(uint32_t, 2))(0x06E554AAL, 1UL), 1UL), 1UL, 0x06E554AAL, 1UL, (VECTOR(uint32_t, 2))(0x06E554AAL, 1UL), (VECTOR(uint32_t, 2))(0x06E554AAL, 1UL), 0x06E554AAL, 1UL, 0x06E554AAL, 1UL), // p_1208->g_738
        (void*)0, // p_1208->g_752
        &p_1208->g_449, // p_1208->g_753
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), // p_1208->g_760
        (void*)0, // p_1208->g_765
        {1UL,4294967295UL,{-2L,0x7E2E1C792E89A7E6L,-1L,0UL,0xBEECL,0xCF547677L},{0x6594L,0UL,-10L,0xFF271442L,0x5AD7L,0xE58931C1L},{{0x3105L,0x8105D6CB5EDD0438L,1L,0xD9BEF89DL,1UL,1UL},4L,{0L,0UL,-2L,0xF4110AC3L,0xC788L,0xD58F2722L},0xC362C10DL}}, // p_1208->g_769
        0x3AB36CE3L, // p_1208->g_785
        (VECTOR(uint16_t, 2))(0x5A9FL, 65535UL), // p_1208->g_816
        (void*)0, // p_1208->g_831
        &p_1208->g_831, // p_1208->g_830
        {0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L,0x6DC0L}, // p_1208->g_847
        {0x63B9L,1UL,65533UL,0x5CF1L,0x53172DDBL}, // p_1208->g_855
        {&p_1208->g_422.f3.f0}, // p_1208->g_859
        {{{&p_1208->g_445.f2},{&p_1208->g_445.f2},{&p_1208->g_445.f2},{&p_1208->g_445.f2},{&p_1208->g_445.f2}}}, // p_1208->g_860
        &p_1208->g_411.f3.f0, // p_1208->g_861
        (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x2636D4B1B695D000L), 0x2636D4B1B695D000L), // p_1208->g_890
        {0x63E9L,4294967295UL,0x3687L,0x253DL,-1L}, // p_1208->g_900
        {{&p_1208->g_769.f4.f2,&p_1208->g_769.f4.f2},{&p_1208->g_769.f4.f2,&p_1208->g_769.f4.f2},{&p_1208->g_769.f4.f2,&p_1208->g_769.f4.f2},{&p_1208->g_769.f4.f2,&p_1208->g_769.f4.f2}}, // p_1208->g_905
        {{{0L,0x6561DAB969FCAAECL,-8L,0xA787F7E4L,0x2C2DL,0xF0D42F7AL},0UL,0x285D9442852CA773L},{{0L,0x6561DAB969FCAAECL,-8L,0xA787F7E4L,0x2C2DL,0xF0D42F7AL},0UL,0x285D9442852CA773L}}, // p_1208->g_926
        (VECTOR(int16_t, 2))(6L, 0x1DD1L), // p_1208->g_938
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-8L)), (-8L)), // p_1208->g_944
        1UL, // p_1208->g_945
        (VECTOR(uint32_t, 2))(4294967290UL, 0x7258BE8DL), // p_1208->g_959
        {4294967295UL,5UL,{0L,1UL,4L,0x8715CDD0L,0xE972L,5UL},{0x5699L,0x93834ACA0A7A3596L,0L,0x3CE20726L,1UL,0xF90163D9L},{{0x4FE5L,0xF8A9D0D6DA80B3B5L,9L,4294967290UL,0xB202L,0x38A026BEL},0x6C81L,{-6L,18446744073709551606UL,0x682EF456L,4294967291UL,1UL,0x4748DCC4L},0xF490E16AL}}, // p_1208->g_964
        {{0x53CDL,0UL,{0x177EL,0x96514CD7L,65535UL,0xFC83L,0x71B8D8FCL},-1L},{0x53CDL,0UL,{0x177EL,0x96514CD7L,65535UL,0xFC83L,0x71B8D8FCL},-1L},{0x53CDL,0UL,{0x177EL,0x96514CD7L,65535UL,0xFC83L,0x71B8D8FCL},-1L},{0x53CDL,0UL,{0x177EL,0x96514CD7L,65535UL,0xFC83L,0x71B8D8FCL},-1L}}, // p_1208->g_971
        (VECTOR(uint64_t, 4))(0xB8229FA038AB7EA3L, (VECTOR(uint64_t, 2))(0xB8229FA038AB7EA3L, 18446744073709551615UL), 18446744073709551615UL), // p_1208->g_1000
        (VECTOR(uint16_t, 8))(0x729BL, (VECTOR(uint16_t, 4))(0x729BL, (VECTOR(uint16_t, 2))(0x729BL, 0x55D0L), 0x55D0L), 0x55D0L, 0x729BL, 0x55D0L), // p_1208->g_1041
        (VECTOR(int16_t, 2))(0x30BCL, 0x2E25L), // p_1208->g_1043
        {0L,1UL,0xC074L,7UL,1L}, // p_1208->g_1059
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x52DEL), 0x52DEL), // p_1208->g_1076
        {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}, // p_1208->g_1102
        {&p_1208->g_753,&p_1208->g_753,&p_1208->g_753,&p_1208->g_753}, // p_1208->g_1131
        {&p_1208->g_1131[2],&p_1208->g_1131[2],&p_1208->g_1131[2],&p_1208->g_1131[2],&p_1208->g_1131[2]}, // p_1208->g_1130
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xFF4D564DL), 0xFF4D564DL), 0xFF4D564DL, 4294967293UL, 0xFF4D564DL, (VECTOR(uint32_t, 2))(4294967293UL, 0xFF4D564DL), (VECTOR(uint32_t, 2))(4294967293UL, 0xFF4D564DL), 4294967293UL, 0xFF4D564DL, 4294967293UL, 0xFF4D564DL), // p_1208->g_1159
        &p_1208->g_453, // p_1208->g_1166
        (VECTOR(uint16_t, 2))(0x3543L, 4UL), // p_1208->g_1196
        0, // p_1208->v_collective
        sequence_input[get_global_id(0)], // p_1208->global_0_offset
        sequence_input[get_global_id(1)], // p_1208->global_1_offset
        sequence_input[get_global_id(2)], // p_1208->global_2_offset
        sequence_input[get_local_id(0)], // p_1208->local_0_offset
        sequence_input[get_local_id(1)], // p_1208->local_1_offset
        sequence_input[get_local_id(2)], // p_1208->local_2_offset
        sequence_input[get_group_id(0)], // p_1208->group_0_offset
        sequence_input[get_group_id(1)], // p_1208->group_1_offset
        sequence_input[get_group_id(2)], // p_1208->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[0][get_linear_local_id()])), // p_1208->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1209 = c_1210;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1208);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1208->g_2, "p_1208->g_2", print_hash_value);
    transparent_crc(p_1208->g_3, "p_1208->g_3", print_hash_value);
    transparent_crc(p_1208->g_6, "p_1208->g_6", print_hash_value);
    transparent_crc(p_1208->g_7, "p_1208->g_7", print_hash_value);
    transparent_crc(p_1208->g_13, "p_1208->g_13", print_hash_value);
    transparent_crc(p_1208->g_29, "p_1208->g_29", print_hash_value);
    transparent_crc(p_1208->g_57, "p_1208->g_57", print_hash_value);
    transparent_crc(p_1208->g_59, "p_1208->g_59", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1208->g_62[i][j][k], "p_1208->g_62[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1208->g_64, "p_1208->g_64", print_hash_value);
    transparent_crc(p_1208->g_76.f0, "p_1208->g_76.f0", print_hash_value);
    transparent_crc(p_1208->g_76.f1, "p_1208->g_76.f1", print_hash_value);
    transparent_crc(p_1208->g_76.f2.f0, "p_1208->g_76.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_76.f2.f1, "p_1208->g_76.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_76.f2.f2, "p_1208->g_76.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_76.f2.f3, "p_1208->g_76.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_76.f2.f4, "p_1208->g_76.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_76.f3, "p_1208->g_76.f3", print_hash_value);
    transparent_crc(p_1208->g_79.f0, "p_1208->g_79.f0", print_hash_value);
    transparent_crc(p_1208->g_79.f1, "p_1208->g_79.f1", print_hash_value);
    transparent_crc(p_1208->g_79.f2.f0, "p_1208->g_79.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_79.f2.f1, "p_1208->g_79.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_79.f2.f2, "p_1208->g_79.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_79.f2.f3, "p_1208->g_79.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_79.f2.f4, "p_1208->g_79.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_79.f3, "p_1208->g_79.f3", print_hash_value);
    transparent_crc(p_1208->g_80.f0, "p_1208->g_80.f0", print_hash_value);
    transparent_crc(p_1208->g_92.x, "p_1208->g_92.x", print_hash_value);
    transparent_crc(p_1208->g_92.y, "p_1208->g_92.y", print_hash_value);
    transparent_crc(p_1208->g_92.z, "p_1208->g_92.z", print_hash_value);
    transparent_crc(p_1208->g_92.w, "p_1208->g_92.w", print_hash_value);
    transparent_crc(p_1208->g_93.x, "p_1208->g_93.x", print_hash_value);
    transparent_crc(p_1208->g_93.y, "p_1208->g_93.y", print_hash_value);
    transparent_crc(p_1208->g_95.s0, "p_1208->g_95.s0", print_hash_value);
    transparent_crc(p_1208->g_95.s1, "p_1208->g_95.s1", print_hash_value);
    transparent_crc(p_1208->g_95.s2, "p_1208->g_95.s2", print_hash_value);
    transparent_crc(p_1208->g_95.s3, "p_1208->g_95.s3", print_hash_value);
    transparent_crc(p_1208->g_95.s4, "p_1208->g_95.s4", print_hash_value);
    transparent_crc(p_1208->g_95.s5, "p_1208->g_95.s5", print_hash_value);
    transparent_crc(p_1208->g_95.s6, "p_1208->g_95.s6", print_hash_value);
    transparent_crc(p_1208->g_95.s7, "p_1208->g_95.s7", print_hash_value);
    transparent_crc(p_1208->g_95.s8, "p_1208->g_95.s8", print_hash_value);
    transparent_crc(p_1208->g_95.s9, "p_1208->g_95.s9", print_hash_value);
    transparent_crc(p_1208->g_95.sa, "p_1208->g_95.sa", print_hash_value);
    transparent_crc(p_1208->g_95.sb, "p_1208->g_95.sb", print_hash_value);
    transparent_crc(p_1208->g_95.sc, "p_1208->g_95.sc", print_hash_value);
    transparent_crc(p_1208->g_95.sd, "p_1208->g_95.sd", print_hash_value);
    transparent_crc(p_1208->g_95.se, "p_1208->g_95.se", print_hash_value);
    transparent_crc(p_1208->g_95.sf, "p_1208->g_95.sf", print_hash_value);
    transparent_crc(p_1208->g_96.x, "p_1208->g_96.x", print_hash_value);
    transparent_crc(p_1208->g_96.y, "p_1208->g_96.y", print_hash_value);
    transparent_crc(p_1208->g_107.x, "p_1208->g_107.x", print_hash_value);
    transparent_crc(p_1208->g_107.y, "p_1208->g_107.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1208->g_116[i], "p_1208->g_116[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_124, "p_1208->g_124", print_hash_value);
    transparent_crc(p_1208->g_153.f0, "p_1208->g_153.f0", print_hash_value);
    transparent_crc(p_1208->g_153.f1, "p_1208->g_153.f1", print_hash_value);
    transparent_crc(p_1208->g_153.f2, "p_1208->g_153.f2", print_hash_value);
    transparent_crc(p_1208->g_153.f3, "p_1208->g_153.f3", print_hash_value);
    transparent_crc(p_1208->g_153.f4, "p_1208->g_153.f4", print_hash_value);
    transparent_crc(p_1208->g_153.f5, "p_1208->g_153.f5", print_hash_value);
    transparent_crc(p_1208->g_159.x, "p_1208->g_159.x", print_hash_value);
    transparent_crc(p_1208->g_159.y, "p_1208->g_159.y", print_hash_value);
    transparent_crc(p_1208->g_159.z, "p_1208->g_159.z", print_hash_value);
    transparent_crc(p_1208->g_159.w, "p_1208->g_159.w", print_hash_value);
    transparent_crc(p_1208->g_170.s0, "p_1208->g_170.s0", print_hash_value);
    transparent_crc(p_1208->g_170.s1, "p_1208->g_170.s1", print_hash_value);
    transparent_crc(p_1208->g_170.s2, "p_1208->g_170.s2", print_hash_value);
    transparent_crc(p_1208->g_170.s3, "p_1208->g_170.s3", print_hash_value);
    transparent_crc(p_1208->g_170.s4, "p_1208->g_170.s4", print_hash_value);
    transparent_crc(p_1208->g_170.s5, "p_1208->g_170.s5", print_hash_value);
    transparent_crc(p_1208->g_170.s6, "p_1208->g_170.s6", print_hash_value);
    transparent_crc(p_1208->g_170.s7, "p_1208->g_170.s7", print_hash_value);
    transparent_crc(p_1208->g_170.s8, "p_1208->g_170.s8", print_hash_value);
    transparent_crc(p_1208->g_170.s9, "p_1208->g_170.s9", print_hash_value);
    transparent_crc(p_1208->g_170.sa, "p_1208->g_170.sa", print_hash_value);
    transparent_crc(p_1208->g_170.sb, "p_1208->g_170.sb", print_hash_value);
    transparent_crc(p_1208->g_170.sc, "p_1208->g_170.sc", print_hash_value);
    transparent_crc(p_1208->g_170.sd, "p_1208->g_170.sd", print_hash_value);
    transparent_crc(p_1208->g_170.se, "p_1208->g_170.se", print_hash_value);
    transparent_crc(p_1208->g_170.sf, "p_1208->g_170.sf", print_hash_value);
    transparent_crc(p_1208->g_171.x, "p_1208->g_171.x", print_hash_value);
    transparent_crc(p_1208->g_171.y, "p_1208->g_171.y", print_hash_value);
    transparent_crc(p_1208->g_171.z, "p_1208->g_171.z", print_hash_value);
    transparent_crc(p_1208->g_171.w, "p_1208->g_171.w", print_hash_value);
    transparent_crc(p_1208->g_182.f0, "p_1208->g_182.f0", print_hash_value);
    transparent_crc(p_1208->g_182.f1, "p_1208->g_182.f1", print_hash_value);
    transparent_crc(p_1208->g_182.f2.f0, "p_1208->g_182.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_182.f2.f1, "p_1208->g_182.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_182.f2.f2, "p_1208->g_182.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_182.f2.f3, "p_1208->g_182.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_182.f2.f4, "p_1208->g_182.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_182.f3, "p_1208->g_182.f3", print_hash_value);
    transparent_crc(p_1208->g_196.s0, "p_1208->g_196.s0", print_hash_value);
    transparent_crc(p_1208->g_196.s1, "p_1208->g_196.s1", print_hash_value);
    transparent_crc(p_1208->g_196.s2, "p_1208->g_196.s2", print_hash_value);
    transparent_crc(p_1208->g_196.s3, "p_1208->g_196.s3", print_hash_value);
    transparent_crc(p_1208->g_196.s4, "p_1208->g_196.s4", print_hash_value);
    transparent_crc(p_1208->g_196.s5, "p_1208->g_196.s5", print_hash_value);
    transparent_crc(p_1208->g_196.s6, "p_1208->g_196.s6", print_hash_value);
    transparent_crc(p_1208->g_196.s7, "p_1208->g_196.s7", print_hash_value);
    transparent_crc(p_1208->g_231.x, "p_1208->g_231.x", print_hash_value);
    transparent_crc(p_1208->g_231.y, "p_1208->g_231.y", print_hash_value);
    transparent_crc(p_1208->g_231.z, "p_1208->g_231.z", print_hash_value);
    transparent_crc(p_1208->g_231.w, "p_1208->g_231.w", print_hash_value);
    transparent_crc(p_1208->g_239, "p_1208->g_239", print_hash_value);
    transparent_crc(p_1208->g_249.s0, "p_1208->g_249.s0", print_hash_value);
    transparent_crc(p_1208->g_249.s1, "p_1208->g_249.s1", print_hash_value);
    transparent_crc(p_1208->g_249.s2, "p_1208->g_249.s2", print_hash_value);
    transparent_crc(p_1208->g_249.s3, "p_1208->g_249.s3", print_hash_value);
    transparent_crc(p_1208->g_249.s4, "p_1208->g_249.s4", print_hash_value);
    transparent_crc(p_1208->g_249.s5, "p_1208->g_249.s5", print_hash_value);
    transparent_crc(p_1208->g_249.s6, "p_1208->g_249.s6", print_hash_value);
    transparent_crc(p_1208->g_249.s7, "p_1208->g_249.s7", print_hash_value);
    transparent_crc(p_1208->g_249.s8, "p_1208->g_249.s8", print_hash_value);
    transparent_crc(p_1208->g_249.s9, "p_1208->g_249.s9", print_hash_value);
    transparent_crc(p_1208->g_249.sa, "p_1208->g_249.sa", print_hash_value);
    transparent_crc(p_1208->g_249.sb, "p_1208->g_249.sb", print_hash_value);
    transparent_crc(p_1208->g_249.sc, "p_1208->g_249.sc", print_hash_value);
    transparent_crc(p_1208->g_249.sd, "p_1208->g_249.sd", print_hash_value);
    transparent_crc(p_1208->g_249.se, "p_1208->g_249.se", print_hash_value);
    transparent_crc(p_1208->g_249.sf, "p_1208->g_249.sf", print_hash_value);
    transparent_crc(p_1208->g_250.s0, "p_1208->g_250.s0", print_hash_value);
    transparent_crc(p_1208->g_250.s1, "p_1208->g_250.s1", print_hash_value);
    transparent_crc(p_1208->g_250.s2, "p_1208->g_250.s2", print_hash_value);
    transparent_crc(p_1208->g_250.s3, "p_1208->g_250.s3", print_hash_value);
    transparent_crc(p_1208->g_250.s4, "p_1208->g_250.s4", print_hash_value);
    transparent_crc(p_1208->g_250.s5, "p_1208->g_250.s5", print_hash_value);
    transparent_crc(p_1208->g_250.s6, "p_1208->g_250.s6", print_hash_value);
    transparent_crc(p_1208->g_250.s7, "p_1208->g_250.s7", print_hash_value);
    transparent_crc(p_1208->g_265.s0, "p_1208->g_265.s0", print_hash_value);
    transparent_crc(p_1208->g_265.s1, "p_1208->g_265.s1", print_hash_value);
    transparent_crc(p_1208->g_265.s2, "p_1208->g_265.s2", print_hash_value);
    transparent_crc(p_1208->g_265.s3, "p_1208->g_265.s3", print_hash_value);
    transparent_crc(p_1208->g_265.s4, "p_1208->g_265.s4", print_hash_value);
    transparent_crc(p_1208->g_265.s5, "p_1208->g_265.s5", print_hash_value);
    transparent_crc(p_1208->g_265.s6, "p_1208->g_265.s6", print_hash_value);
    transparent_crc(p_1208->g_265.s7, "p_1208->g_265.s7", print_hash_value);
    transparent_crc(p_1208->g_265.s8, "p_1208->g_265.s8", print_hash_value);
    transparent_crc(p_1208->g_265.s9, "p_1208->g_265.s9", print_hash_value);
    transparent_crc(p_1208->g_265.sa, "p_1208->g_265.sa", print_hash_value);
    transparent_crc(p_1208->g_265.sb, "p_1208->g_265.sb", print_hash_value);
    transparent_crc(p_1208->g_265.sc, "p_1208->g_265.sc", print_hash_value);
    transparent_crc(p_1208->g_265.sd, "p_1208->g_265.sd", print_hash_value);
    transparent_crc(p_1208->g_265.se, "p_1208->g_265.se", print_hash_value);
    transparent_crc(p_1208->g_265.sf, "p_1208->g_265.sf", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f0, "p_1208->g_275.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f1, "p_1208->g_275.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f2, "p_1208->g_275.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f3, "p_1208->g_275.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f4, "p_1208->g_275.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_275.f0.f5, "p_1208->g_275.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_334.x, "p_1208->g_334.x", print_hash_value);
    transparent_crc(p_1208->g_334.y, "p_1208->g_334.y", print_hash_value);
    transparent_crc(p_1208->g_341.x, "p_1208->g_341.x", print_hash_value);
    transparent_crc(p_1208->g_341.y, "p_1208->g_341.y", print_hash_value);
    transparent_crc(p_1208->g_341.z, "p_1208->g_341.z", print_hash_value);
    transparent_crc(p_1208->g_341.w, "p_1208->g_341.w", print_hash_value);
    transparent_crc(p_1208->g_343.x, "p_1208->g_343.x", print_hash_value);
    transparent_crc(p_1208->g_343.y, "p_1208->g_343.y", print_hash_value);
    transparent_crc(p_1208->g_343.z, "p_1208->g_343.z", print_hash_value);
    transparent_crc(p_1208->g_343.w, "p_1208->g_343.w", print_hash_value);
    transparent_crc(p_1208->g_345.x, "p_1208->g_345.x", print_hash_value);
    transparent_crc(p_1208->g_345.y, "p_1208->g_345.y", print_hash_value);
    transparent_crc(p_1208->g_370.f0, "p_1208->g_370.f0", print_hash_value);
    transparent_crc(p_1208->g_374.f0, "p_1208->g_374.f0", print_hash_value);
    transparent_crc(p_1208->g_374.f1, "p_1208->g_374.f1", print_hash_value);
    transparent_crc(p_1208->g_374.f2, "p_1208->g_374.f2", print_hash_value);
    transparent_crc(p_1208->g_374.f3, "p_1208->g_374.f3", print_hash_value);
    transparent_crc(p_1208->g_374.f4, "p_1208->g_374.f4", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f0, "p_1208->g_379.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f1, "p_1208->g_379.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f2, "p_1208->g_379.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f3, "p_1208->g_379.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f4, "p_1208->g_379.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_379.f0.f5, "p_1208->g_379.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f0, "p_1208->g_396.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f1, "p_1208->g_396.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f2, "p_1208->g_396.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f3, "p_1208->g_396.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f4, "p_1208->g_396.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_396.f0.f5, "p_1208->g_396.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_396.f1, "p_1208->g_396.f1", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f0, "p_1208->g_396.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f1, "p_1208->g_396.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f2, "p_1208->g_396.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f3, "p_1208->g_396.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f4, "p_1208->g_396.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_396.f2.f5, "p_1208->g_396.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_396.f3, "p_1208->g_396.f3", print_hash_value);
    transparent_crc(p_1208->g_411.f0, "p_1208->g_411.f0", print_hash_value);
    transparent_crc(p_1208->g_411.f1, "p_1208->g_411.f1", print_hash_value);
    transparent_crc(p_1208->g_411.f2, "p_1208->g_411.f2", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f0, "p_1208->g_411.f3.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f1, "p_1208->g_411.f3.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f2, "p_1208->g_411.f3.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f3, "p_1208->g_411.f3.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f4, "p_1208->g_411.f3.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f0.f5, "p_1208->g_411.f3.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f1, "p_1208->g_411.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_411.f3.f2, "p_1208->g_411.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_411.f4, "p_1208->g_411.f4", print_hash_value);
    transparent_crc(p_1208->g_411.f5, "p_1208->g_411.f5", print_hash_value);
    transparent_crc(p_1208->g_411.f6, "p_1208->g_411.f6", print_hash_value);
    transparent_crc(p_1208->g_411.f7, "p_1208->g_411.f7", print_hash_value);
    transparent_crc(p_1208->g_422.f0, "p_1208->g_422.f0", print_hash_value);
    transparent_crc(p_1208->g_422.f1, "p_1208->g_422.f1", print_hash_value);
    transparent_crc(p_1208->g_422.f2, "p_1208->g_422.f2", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f0, "p_1208->g_422.f3.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f1, "p_1208->g_422.f3.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f2, "p_1208->g_422.f3.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f3, "p_1208->g_422.f3.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f4, "p_1208->g_422.f3.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f0.f5, "p_1208->g_422.f3.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f1, "p_1208->g_422.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_422.f3.f2, "p_1208->g_422.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_422.f4, "p_1208->g_422.f4", print_hash_value);
    transparent_crc(p_1208->g_422.f5, "p_1208->g_422.f5", print_hash_value);
    transparent_crc(p_1208->g_422.f6, "p_1208->g_422.f6", print_hash_value);
    transparent_crc(p_1208->g_422.f7, "p_1208->g_422.f7", print_hash_value);
    transparent_crc(p_1208->g_433, "p_1208->g_433", print_hash_value);
    transparent_crc(p_1208->g_441.f0, "p_1208->g_441.f0", print_hash_value);
    transparent_crc(p_1208->g_441.f1, "p_1208->g_441.f1", print_hash_value);
    transparent_crc(p_1208->g_441.f2.f0, "p_1208->g_441.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_441.f2.f1, "p_1208->g_441.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_441.f2.f2, "p_1208->g_441.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_441.f2.f3, "p_1208->g_441.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_441.f2.f4, "p_1208->g_441.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_441.f3, "p_1208->g_441.f3", print_hash_value);
    transparent_crc(p_1208->g_444.f0, "p_1208->g_444.f0", print_hash_value);
    transparent_crc(p_1208->g_444.f1, "p_1208->g_444.f1", print_hash_value);
    transparent_crc(p_1208->g_444.f2, "p_1208->g_444.f2", print_hash_value);
    transparent_crc(p_1208->g_444.f3, "p_1208->g_444.f3", print_hash_value);
    transparent_crc(p_1208->g_444.f4, "p_1208->g_444.f4", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f0, "p_1208->g_445.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f1, "p_1208->g_445.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f2, "p_1208->g_445.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f3, "p_1208->g_445.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f4, "p_1208->g_445.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_445.f0.f5, "p_1208->g_445.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_445.f1, "p_1208->g_445.f1", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f0, "p_1208->g_445.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f1, "p_1208->g_445.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f2, "p_1208->g_445.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f3, "p_1208->g_445.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f4, "p_1208->g_445.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_445.f2.f5, "p_1208->g_445.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_445.f3, "p_1208->g_445.f3", print_hash_value);
    transparent_crc(p_1208->g_447.f0, "p_1208->g_447.f0", print_hash_value);
    transparent_crc(p_1208->g_447.f1, "p_1208->g_447.f1", print_hash_value);
    transparent_crc(p_1208->g_447.f2, "p_1208->g_447.f2", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f0, "p_1208->g_447.f3.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f1, "p_1208->g_447.f3.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f2, "p_1208->g_447.f3.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f3, "p_1208->g_447.f3.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f4, "p_1208->g_447.f3.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f0.f5, "p_1208->g_447.f3.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f1, "p_1208->g_447.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_447.f3.f2, "p_1208->g_447.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_447.f4, "p_1208->g_447.f4", print_hash_value);
    transparent_crc(p_1208->g_447.f5, "p_1208->g_447.f5", print_hash_value);
    transparent_crc(p_1208->g_447.f6, "p_1208->g_447.f6", print_hash_value);
    transparent_crc(p_1208->g_447.f7, "p_1208->g_447.f7", print_hash_value);
    transparent_crc(p_1208->g_466, "p_1208->g_466", print_hash_value);
    transparent_crc(p_1208->g_471.x, "p_1208->g_471.x", print_hash_value);
    transparent_crc(p_1208->g_471.y, "p_1208->g_471.y", print_hash_value);
    transparent_crc(p_1208->g_485.s0, "p_1208->g_485.s0", print_hash_value);
    transparent_crc(p_1208->g_485.s1, "p_1208->g_485.s1", print_hash_value);
    transparent_crc(p_1208->g_485.s2, "p_1208->g_485.s2", print_hash_value);
    transparent_crc(p_1208->g_485.s3, "p_1208->g_485.s3", print_hash_value);
    transparent_crc(p_1208->g_485.s4, "p_1208->g_485.s4", print_hash_value);
    transparent_crc(p_1208->g_485.s5, "p_1208->g_485.s5", print_hash_value);
    transparent_crc(p_1208->g_485.s6, "p_1208->g_485.s6", print_hash_value);
    transparent_crc(p_1208->g_485.s7, "p_1208->g_485.s7", print_hash_value);
    transparent_crc(p_1208->g_485.s8, "p_1208->g_485.s8", print_hash_value);
    transparent_crc(p_1208->g_485.s9, "p_1208->g_485.s9", print_hash_value);
    transparent_crc(p_1208->g_485.sa, "p_1208->g_485.sa", print_hash_value);
    transparent_crc(p_1208->g_485.sb, "p_1208->g_485.sb", print_hash_value);
    transparent_crc(p_1208->g_485.sc, "p_1208->g_485.sc", print_hash_value);
    transparent_crc(p_1208->g_485.sd, "p_1208->g_485.sd", print_hash_value);
    transparent_crc(p_1208->g_485.se, "p_1208->g_485.se", print_hash_value);
    transparent_crc(p_1208->g_485.sf, "p_1208->g_485.sf", print_hash_value);
    transparent_crc(p_1208->g_541, "p_1208->g_541", print_hash_value);
    transparent_crc(p_1208->g_542.f0, "p_1208->g_542.f0", print_hash_value);
    transparent_crc(p_1208->g_542.f1, "p_1208->g_542.f1", print_hash_value);
    transparent_crc(p_1208->g_542.f2.f0, "p_1208->g_542.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_542.f2.f1, "p_1208->g_542.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_542.f2.f2, "p_1208->g_542.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_542.f2.f3, "p_1208->g_542.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_542.f2.f4, "p_1208->g_542.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_542.f3, "p_1208->g_542.f3", print_hash_value);
    transparent_crc(p_1208->g_575.f0, "p_1208->g_575.f0", print_hash_value);
    transparent_crc(p_1208->g_575.f1, "p_1208->g_575.f1", print_hash_value);
    transparent_crc(p_1208->g_575.f2, "p_1208->g_575.f2", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f0, "p_1208->g_575.f3.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f1, "p_1208->g_575.f3.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f2, "p_1208->g_575.f3.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f3, "p_1208->g_575.f3.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f4, "p_1208->g_575.f3.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f0.f5, "p_1208->g_575.f3.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f1, "p_1208->g_575.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_575.f3.f2, "p_1208->g_575.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_575.f4, "p_1208->g_575.f4", print_hash_value);
    transparent_crc(p_1208->g_575.f5, "p_1208->g_575.f5", print_hash_value);
    transparent_crc(p_1208->g_575.f6, "p_1208->g_575.f6", print_hash_value);
    transparent_crc(p_1208->g_575.f7, "p_1208->g_575.f7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1208->g_577[i].f0, "p_1208->g_577[i].f0", print_hash_value);
        transparent_crc(p_1208->g_577[i].f1, "p_1208->g_577[i].f1", print_hash_value);
        transparent_crc(p_1208->g_577[i].f2, "p_1208->g_577[i].f2", print_hash_value);
        transparent_crc(p_1208->g_577[i].f3, "p_1208->g_577[i].f3", print_hash_value);
        transparent_crc(p_1208->g_577[i].f4, "p_1208->g_577[i].f4", print_hash_value);

    }
    transparent_crc(p_1208->g_608.s0, "p_1208->g_608.s0", print_hash_value);
    transparent_crc(p_1208->g_608.s1, "p_1208->g_608.s1", print_hash_value);
    transparent_crc(p_1208->g_608.s2, "p_1208->g_608.s2", print_hash_value);
    transparent_crc(p_1208->g_608.s3, "p_1208->g_608.s3", print_hash_value);
    transparent_crc(p_1208->g_608.s4, "p_1208->g_608.s4", print_hash_value);
    transparent_crc(p_1208->g_608.s5, "p_1208->g_608.s5", print_hash_value);
    transparent_crc(p_1208->g_608.s6, "p_1208->g_608.s6", print_hash_value);
    transparent_crc(p_1208->g_608.s7, "p_1208->g_608.s7", print_hash_value);
    transparent_crc(p_1208->g_609.x, "p_1208->g_609.x", print_hash_value);
    transparent_crc(p_1208->g_609.y, "p_1208->g_609.y", print_hash_value);
    transparent_crc(p_1208->g_641, "p_1208->g_641", print_hash_value);
    transparent_crc(p_1208->g_646.x, "p_1208->g_646.x", print_hash_value);
    transparent_crc(p_1208->g_646.y, "p_1208->g_646.y", print_hash_value);
    transparent_crc(p_1208->g_672.s0, "p_1208->g_672.s0", print_hash_value);
    transparent_crc(p_1208->g_672.s1, "p_1208->g_672.s1", print_hash_value);
    transparent_crc(p_1208->g_672.s2, "p_1208->g_672.s2", print_hash_value);
    transparent_crc(p_1208->g_672.s3, "p_1208->g_672.s3", print_hash_value);
    transparent_crc(p_1208->g_672.s4, "p_1208->g_672.s4", print_hash_value);
    transparent_crc(p_1208->g_672.s5, "p_1208->g_672.s5", print_hash_value);
    transparent_crc(p_1208->g_672.s6, "p_1208->g_672.s6", print_hash_value);
    transparent_crc(p_1208->g_672.s7, "p_1208->g_672.s7", print_hash_value);
    transparent_crc(p_1208->g_679, "p_1208->g_679", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1208->g_688[i][j].f0.f0, "p_1208->g_688[i][j].f0.f0", print_hash_value);
            transparent_crc(p_1208->g_688[i][j].f0.f1, "p_1208->g_688[i][j].f0.f1", print_hash_value);
            transparent_crc(p_1208->g_688[i][j].f0.f2, "p_1208->g_688[i][j].f0.f2", print_hash_value);
            transparent_crc(p_1208->g_688[i][j].f0.f3, "p_1208->g_688[i][j].f0.f3", print_hash_value);
            transparent_crc(p_1208->g_688[i][j].f0.f4, "p_1208->g_688[i][j].f0.f4", print_hash_value);
            transparent_crc(p_1208->g_688[i][j].f0.f5, "p_1208->g_688[i][j].f0.f5", print_hash_value);

        }
    }
    transparent_crc(p_1208->g_698.s0, "p_1208->g_698.s0", print_hash_value);
    transparent_crc(p_1208->g_698.s1, "p_1208->g_698.s1", print_hash_value);
    transparent_crc(p_1208->g_698.s2, "p_1208->g_698.s2", print_hash_value);
    transparent_crc(p_1208->g_698.s3, "p_1208->g_698.s3", print_hash_value);
    transparent_crc(p_1208->g_698.s4, "p_1208->g_698.s4", print_hash_value);
    transparent_crc(p_1208->g_698.s5, "p_1208->g_698.s5", print_hash_value);
    transparent_crc(p_1208->g_698.s6, "p_1208->g_698.s6", print_hash_value);
    transparent_crc(p_1208->g_698.s7, "p_1208->g_698.s7", print_hash_value);
    transparent_crc(p_1208->g_705, "p_1208->g_705", print_hash_value);
    transparent_crc(p_1208->g_713.s0, "p_1208->g_713.s0", print_hash_value);
    transparent_crc(p_1208->g_713.s1, "p_1208->g_713.s1", print_hash_value);
    transparent_crc(p_1208->g_713.s2, "p_1208->g_713.s2", print_hash_value);
    transparent_crc(p_1208->g_713.s3, "p_1208->g_713.s3", print_hash_value);
    transparent_crc(p_1208->g_713.s4, "p_1208->g_713.s4", print_hash_value);
    transparent_crc(p_1208->g_713.s5, "p_1208->g_713.s5", print_hash_value);
    transparent_crc(p_1208->g_713.s6, "p_1208->g_713.s6", print_hash_value);
    transparent_crc(p_1208->g_713.s7, "p_1208->g_713.s7", print_hash_value);
    transparent_crc(p_1208->g_713.s8, "p_1208->g_713.s8", print_hash_value);
    transparent_crc(p_1208->g_713.s9, "p_1208->g_713.s9", print_hash_value);
    transparent_crc(p_1208->g_713.sa, "p_1208->g_713.sa", print_hash_value);
    transparent_crc(p_1208->g_713.sb, "p_1208->g_713.sb", print_hash_value);
    transparent_crc(p_1208->g_713.sc, "p_1208->g_713.sc", print_hash_value);
    transparent_crc(p_1208->g_713.sd, "p_1208->g_713.sd", print_hash_value);
    transparent_crc(p_1208->g_713.se, "p_1208->g_713.se", print_hash_value);
    transparent_crc(p_1208->g_713.sf, "p_1208->g_713.sf", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f0, "p_1208->g_729.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f1, "p_1208->g_729.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f2, "p_1208->g_729.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f3, "p_1208->g_729.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f4, "p_1208->g_729.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_729.f0.f5, "p_1208->g_729.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_729.f1, "p_1208->g_729.f1", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f0, "p_1208->g_729.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f1, "p_1208->g_729.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f2, "p_1208->g_729.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f3, "p_1208->g_729.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f4, "p_1208->g_729.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_729.f2.f5, "p_1208->g_729.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_729.f3, "p_1208->g_729.f3", print_hash_value);
    transparent_crc(p_1208->g_731, "p_1208->g_731", print_hash_value);
    transparent_crc(p_1208->g_738.s0, "p_1208->g_738.s0", print_hash_value);
    transparent_crc(p_1208->g_738.s1, "p_1208->g_738.s1", print_hash_value);
    transparent_crc(p_1208->g_738.s2, "p_1208->g_738.s2", print_hash_value);
    transparent_crc(p_1208->g_738.s3, "p_1208->g_738.s3", print_hash_value);
    transparent_crc(p_1208->g_738.s4, "p_1208->g_738.s4", print_hash_value);
    transparent_crc(p_1208->g_738.s5, "p_1208->g_738.s5", print_hash_value);
    transparent_crc(p_1208->g_738.s6, "p_1208->g_738.s6", print_hash_value);
    transparent_crc(p_1208->g_738.s7, "p_1208->g_738.s7", print_hash_value);
    transparent_crc(p_1208->g_738.s8, "p_1208->g_738.s8", print_hash_value);
    transparent_crc(p_1208->g_738.s9, "p_1208->g_738.s9", print_hash_value);
    transparent_crc(p_1208->g_738.sa, "p_1208->g_738.sa", print_hash_value);
    transparent_crc(p_1208->g_738.sb, "p_1208->g_738.sb", print_hash_value);
    transparent_crc(p_1208->g_738.sc, "p_1208->g_738.sc", print_hash_value);
    transparent_crc(p_1208->g_738.sd, "p_1208->g_738.sd", print_hash_value);
    transparent_crc(p_1208->g_738.se, "p_1208->g_738.se", print_hash_value);
    transparent_crc(p_1208->g_738.sf, "p_1208->g_738.sf", print_hash_value);
    transparent_crc(p_1208->g_760.x, "p_1208->g_760.x", print_hash_value);
    transparent_crc(p_1208->g_760.y, "p_1208->g_760.y", print_hash_value);
    transparent_crc(p_1208->g_760.z, "p_1208->g_760.z", print_hash_value);
    transparent_crc(p_1208->g_760.w, "p_1208->g_760.w", print_hash_value);
    transparent_crc(p_1208->g_769.f0, "p_1208->g_769.f0", print_hash_value);
    transparent_crc(p_1208->g_769.f1, "p_1208->g_769.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f0, "p_1208->g_769.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f1, "p_1208->g_769.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f2, "p_1208->g_769.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f3, "p_1208->g_769.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f4, "p_1208->g_769.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_769.f2.f5, "p_1208->g_769.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f0, "p_1208->g_769.f3.f0", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f1, "p_1208->g_769.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f2, "p_1208->g_769.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f3, "p_1208->g_769.f3.f3", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f4, "p_1208->g_769.f3.f4", print_hash_value);
    transparent_crc(p_1208->g_769.f3.f5, "p_1208->g_769.f3.f5", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f0, "p_1208->g_769.f4.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f1, "p_1208->g_769.f4.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f2, "p_1208->g_769.f4.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f3, "p_1208->g_769.f4.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f4, "p_1208->g_769.f4.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f0.f5, "p_1208->g_769.f4.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f1, "p_1208->g_769.f4.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f0, "p_1208->g_769.f4.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f1, "p_1208->g_769.f4.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f2, "p_1208->g_769.f4.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f3, "p_1208->g_769.f4.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f4, "p_1208->g_769.f4.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f2.f5, "p_1208->g_769.f4.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_769.f4.f3, "p_1208->g_769.f4.f3", print_hash_value);
    transparent_crc(p_1208->g_785, "p_1208->g_785", print_hash_value);
    transparent_crc(p_1208->g_816.x, "p_1208->g_816.x", print_hash_value);
    transparent_crc(p_1208->g_816.y, "p_1208->g_816.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1208->g_847[i], "p_1208->g_847[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_855.f0, "p_1208->g_855.f0", print_hash_value);
    transparent_crc(p_1208->g_855.f1, "p_1208->g_855.f1", print_hash_value);
    transparent_crc(p_1208->g_855.f2, "p_1208->g_855.f2", print_hash_value);
    transparent_crc(p_1208->g_855.f3, "p_1208->g_855.f3", print_hash_value);
    transparent_crc(p_1208->g_855.f4, "p_1208->g_855.f4", print_hash_value);
    transparent_crc(p_1208->g_890.x, "p_1208->g_890.x", print_hash_value);
    transparent_crc(p_1208->g_890.y, "p_1208->g_890.y", print_hash_value);
    transparent_crc(p_1208->g_890.z, "p_1208->g_890.z", print_hash_value);
    transparent_crc(p_1208->g_890.w, "p_1208->g_890.w", print_hash_value);
    transparent_crc(p_1208->g_900.f0, "p_1208->g_900.f0", print_hash_value);
    transparent_crc(p_1208->g_900.f1, "p_1208->g_900.f1", print_hash_value);
    transparent_crc(p_1208->g_900.f2, "p_1208->g_900.f2", print_hash_value);
    transparent_crc(p_1208->g_900.f3, "p_1208->g_900.f3", print_hash_value);
    transparent_crc(p_1208->g_900.f4, "p_1208->g_900.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1208->g_926[i].f0.f0, "p_1208->g_926[i].f0.f0", print_hash_value);
        transparent_crc(p_1208->g_926[i].f0.f1, "p_1208->g_926[i].f0.f1", print_hash_value);
        transparent_crc(p_1208->g_926[i].f0.f2, "p_1208->g_926[i].f0.f2", print_hash_value);
        transparent_crc(p_1208->g_926[i].f0.f3, "p_1208->g_926[i].f0.f3", print_hash_value);
        transparent_crc(p_1208->g_926[i].f0.f4, "p_1208->g_926[i].f0.f4", print_hash_value);
        transparent_crc(p_1208->g_926[i].f0.f5, "p_1208->g_926[i].f0.f5", print_hash_value);
        transparent_crc(p_1208->g_926[i].f1, "p_1208->g_926[i].f1", print_hash_value);
        transparent_crc(p_1208->g_926[i].f2, "p_1208->g_926[i].f2", print_hash_value);

    }
    transparent_crc(p_1208->g_938.x, "p_1208->g_938.x", print_hash_value);
    transparent_crc(p_1208->g_938.y, "p_1208->g_938.y", print_hash_value);
    transparent_crc(p_1208->g_944.x, "p_1208->g_944.x", print_hash_value);
    transparent_crc(p_1208->g_944.y, "p_1208->g_944.y", print_hash_value);
    transparent_crc(p_1208->g_944.z, "p_1208->g_944.z", print_hash_value);
    transparent_crc(p_1208->g_944.w, "p_1208->g_944.w", print_hash_value);
    transparent_crc(p_1208->g_945, "p_1208->g_945", print_hash_value);
    transparent_crc(p_1208->g_959.x, "p_1208->g_959.x", print_hash_value);
    transparent_crc(p_1208->g_959.y, "p_1208->g_959.y", print_hash_value);
    transparent_crc(p_1208->g_964.f0, "p_1208->g_964.f0", print_hash_value);
    transparent_crc(p_1208->g_964.f1, "p_1208->g_964.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f0, "p_1208->g_964.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f1, "p_1208->g_964.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f2, "p_1208->g_964.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f3, "p_1208->g_964.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f4, "p_1208->g_964.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_964.f2.f5, "p_1208->g_964.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f0, "p_1208->g_964.f3.f0", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f1, "p_1208->g_964.f3.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f2, "p_1208->g_964.f3.f2", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f3, "p_1208->g_964.f3.f3", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f4, "p_1208->g_964.f3.f4", print_hash_value);
    transparent_crc(p_1208->g_964.f3.f5, "p_1208->g_964.f3.f5", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f0, "p_1208->g_964.f4.f0.f0", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f1, "p_1208->g_964.f4.f0.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f2, "p_1208->g_964.f4.f0.f2", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f3, "p_1208->g_964.f4.f0.f3", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f4, "p_1208->g_964.f4.f0.f4", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f0.f5, "p_1208->g_964.f4.f0.f5", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f1, "p_1208->g_964.f4.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f0, "p_1208->g_964.f4.f2.f0", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f1, "p_1208->g_964.f4.f2.f1", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f2, "p_1208->g_964.f4.f2.f2", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f3, "p_1208->g_964.f4.f2.f3", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f4, "p_1208->g_964.f4.f2.f4", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f2.f5, "p_1208->g_964.f4.f2.f5", print_hash_value);
    transparent_crc(p_1208->g_964.f4.f3, "p_1208->g_964.f4.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1208->g_971[i].f0, "p_1208->g_971[i].f0", print_hash_value);
        transparent_crc(p_1208->g_971[i].f1, "p_1208->g_971[i].f1", print_hash_value);
        transparent_crc(p_1208->g_971[i].f2.f0, "p_1208->g_971[i].f2.f0", print_hash_value);
        transparent_crc(p_1208->g_971[i].f2.f1, "p_1208->g_971[i].f2.f1", print_hash_value);
        transparent_crc(p_1208->g_971[i].f2.f2, "p_1208->g_971[i].f2.f2", print_hash_value);
        transparent_crc(p_1208->g_971[i].f2.f3, "p_1208->g_971[i].f2.f3", print_hash_value);
        transparent_crc(p_1208->g_971[i].f2.f4, "p_1208->g_971[i].f2.f4", print_hash_value);
        transparent_crc(p_1208->g_971[i].f3, "p_1208->g_971[i].f3", print_hash_value);

    }
    transparent_crc(p_1208->g_1000.x, "p_1208->g_1000.x", print_hash_value);
    transparent_crc(p_1208->g_1000.y, "p_1208->g_1000.y", print_hash_value);
    transparent_crc(p_1208->g_1000.z, "p_1208->g_1000.z", print_hash_value);
    transparent_crc(p_1208->g_1000.w, "p_1208->g_1000.w", print_hash_value);
    transparent_crc(p_1208->g_1041.s0, "p_1208->g_1041.s0", print_hash_value);
    transparent_crc(p_1208->g_1041.s1, "p_1208->g_1041.s1", print_hash_value);
    transparent_crc(p_1208->g_1041.s2, "p_1208->g_1041.s2", print_hash_value);
    transparent_crc(p_1208->g_1041.s3, "p_1208->g_1041.s3", print_hash_value);
    transparent_crc(p_1208->g_1041.s4, "p_1208->g_1041.s4", print_hash_value);
    transparent_crc(p_1208->g_1041.s5, "p_1208->g_1041.s5", print_hash_value);
    transparent_crc(p_1208->g_1041.s6, "p_1208->g_1041.s6", print_hash_value);
    transparent_crc(p_1208->g_1041.s7, "p_1208->g_1041.s7", print_hash_value);
    transparent_crc(p_1208->g_1043.x, "p_1208->g_1043.x", print_hash_value);
    transparent_crc(p_1208->g_1043.y, "p_1208->g_1043.y", print_hash_value);
    transparent_crc(p_1208->g_1059.f0, "p_1208->g_1059.f0", print_hash_value);
    transparent_crc(p_1208->g_1059.f1, "p_1208->g_1059.f1", print_hash_value);
    transparent_crc(p_1208->g_1059.f2, "p_1208->g_1059.f2", print_hash_value);
    transparent_crc(p_1208->g_1059.f3, "p_1208->g_1059.f3", print_hash_value);
    transparent_crc(p_1208->g_1059.f4, "p_1208->g_1059.f4", print_hash_value);
    transparent_crc(p_1208->g_1076.x, "p_1208->g_1076.x", print_hash_value);
    transparent_crc(p_1208->g_1076.y, "p_1208->g_1076.y", print_hash_value);
    transparent_crc(p_1208->g_1076.z, "p_1208->g_1076.z", print_hash_value);
    transparent_crc(p_1208->g_1076.w, "p_1208->g_1076.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1208->g_1102[i], "p_1208->g_1102[i]", print_hash_value);

    }
    transparent_crc(p_1208->g_1159.s0, "p_1208->g_1159.s0", print_hash_value);
    transparent_crc(p_1208->g_1159.s1, "p_1208->g_1159.s1", print_hash_value);
    transparent_crc(p_1208->g_1159.s2, "p_1208->g_1159.s2", print_hash_value);
    transparent_crc(p_1208->g_1159.s3, "p_1208->g_1159.s3", print_hash_value);
    transparent_crc(p_1208->g_1159.s4, "p_1208->g_1159.s4", print_hash_value);
    transparent_crc(p_1208->g_1159.s5, "p_1208->g_1159.s5", print_hash_value);
    transparent_crc(p_1208->g_1159.s6, "p_1208->g_1159.s6", print_hash_value);
    transparent_crc(p_1208->g_1159.s7, "p_1208->g_1159.s7", print_hash_value);
    transparent_crc(p_1208->g_1159.s8, "p_1208->g_1159.s8", print_hash_value);
    transparent_crc(p_1208->g_1159.s9, "p_1208->g_1159.s9", print_hash_value);
    transparent_crc(p_1208->g_1159.sa, "p_1208->g_1159.sa", print_hash_value);
    transparent_crc(p_1208->g_1159.sb, "p_1208->g_1159.sb", print_hash_value);
    transparent_crc(p_1208->g_1159.sc, "p_1208->g_1159.sc", print_hash_value);
    transparent_crc(p_1208->g_1159.sd, "p_1208->g_1159.sd", print_hash_value);
    transparent_crc(p_1208->g_1159.se, "p_1208->g_1159.se", print_hash_value);
    transparent_crc(p_1208->g_1159.sf, "p_1208->g_1159.sf", print_hash_value);
    transparent_crc(p_1208->g_1196.x, "p_1208->g_1196.x", print_hash_value);
    transparent_crc(p_1208->g_1196.y, "p_1208->g_1196.y", print_hash_value);
    transparent_crc(p_1208->v_collective, "p_1208->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 35; i++)
            transparent_crc(p_1208->g_special_values[i + 35 * get_linear_group_id()], "p_1208->g_special_values[i + 35 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 35; i++)
            transparent_crc(p_1208->l_special_values[i], "p_1208->l_special_values[i]", print_hash_value);
    transparent_crc(p_1208->l_comm_values[get_linear_local_id()], "p_1208->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1208->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()], "p_1208->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
