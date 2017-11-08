// --atomics 28 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,28,2 -l 1,28,2
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

__constant uint32_t permutations[10][56] = {
{4,0,54,10,25,39,24,15,41,37,23,44,29,26,43,17,27,21,46,40,20,55,11,5,48,19,6,47,18,28,22,52,1,45,38,31,8,35,32,13,16,3,14,2,12,7,36,30,42,50,33,49,34,51,9,53}, // permutation 0
{24,47,27,1,40,29,7,54,19,4,37,6,13,55,48,18,8,0,3,42,43,39,5,34,14,21,12,36,53,30,31,41,22,46,35,2,11,17,38,51,16,9,33,26,45,20,49,28,23,25,50,44,32,10,52,15}, // permutation 1
{40,5,36,32,6,17,15,23,11,19,7,47,53,3,55,44,16,24,25,51,27,50,33,0,18,31,20,43,9,8,12,41,35,22,13,42,39,52,49,30,2,46,21,1,28,45,38,54,10,14,26,37,4,29,34,48}, // permutation 2
{14,9,21,36,49,47,52,28,42,55,6,41,43,38,3,13,54,45,22,20,44,15,31,34,30,7,26,11,37,19,48,2,39,29,17,35,18,16,51,24,5,23,53,40,27,33,50,8,32,4,0,1,46,25,12,10}, // permutation 3
{24,30,49,20,53,52,47,7,54,34,0,2,17,39,26,36,27,10,32,44,38,11,50,19,55,41,4,51,33,23,5,43,42,21,18,15,35,37,31,22,13,12,9,8,46,3,48,28,1,6,25,16,40,14,29,45}, // permutation 4
{5,39,46,17,41,30,27,4,26,48,54,33,34,38,32,28,22,37,35,14,47,23,11,52,51,29,7,10,18,42,44,50,53,45,15,31,40,43,3,16,9,6,0,21,8,55,19,20,13,24,12,49,2,1,36,25}, // permutation 5
{38,5,10,24,4,40,30,37,22,35,21,15,34,2,49,11,23,50,13,32,43,44,33,27,3,36,26,12,39,18,7,41,14,45,48,31,47,0,16,19,46,51,20,1,52,42,6,8,54,9,55,29,28,53,17,25}, // permutation 6
{7,31,28,8,51,52,43,53,26,49,32,17,3,36,23,4,5,27,2,12,40,35,21,18,1,24,10,13,44,19,22,41,9,16,30,29,11,38,47,46,50,45,48,20,37,34,54,15,42,33,55,6,0,25,14,39}, // permutation 7
{44,52,12,25,41,17,42,49,54,11,47,10,14,53,7,18,46,30,19,29,38,55,37,2,22,20,6,32,0,16,31,5,51,24,15,9,34,26,3,8,48,4,39,35,45,43,23,33,50,1,36,27,21,13,40,28}, // permutation 8
{34,25,15,12,4,41,37,24,9,8,32,29,48,18,31,2,54,19,53,44,3,40,23,26,38,27,33,22,47,55,14,0,50,46,45,28,7,30,42,13,6,1,20,21,51,52,36,39,35,49,11,17,5,16,10,43} // permutation 9
};

// Seed: 624261309

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
   volatile int8_t * volatile  f1;
   int8_t * f2;
   int32_t  f3;
   volatile uint64_t  f4;
};

struct S1 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_104;
    volatile int32_t g_105;
    volatile int32_t g_106;
    int32_t g_107;
    volatile int32_t g_110;
    int32_t g_111;
    VECTOR(int8_t, 8) g_128;
    volatile VECTOR(uint32_t, 2) g_156;
    VECTOR(uint32_t, 16) g_157;
    uint32_t g_170;
    uint32_t g_175[9];
    uint8_t g_178;
    uint64_t g_180;
    int8_t *g_187;
    int8_t **g_186[10];
    int32_t g_192;
    int32_t *g_191[8];
    int32_t ** volatile g_193;
    VECTOR(int32_t, 4) g_222;
    volatile VECTOR(int32_t, 8) g_223;
    int32_t * volatile g_232;
    int32_t * volatile g_233;
    VECTOR(int8_t, 8) g_246;
    int32_t g_272;
    int32_t g_285;
    uint8_t *g_315[6][9];
    uint8_t **g_314;
    uint8_t *** volatile g_313;
    volatile VECTOR(int8_t, 8) g_320;
    VECTOR(int8_t, 8) g_351;
    uint64_t g_364;
    uint32_t g_370;
    int64_t g_380;
    volatile VECTOR(uint16_t, 16) g_387;
    VECTOR(uint16_t, 2) g_390;
    VECTOR(uint16_t, 4) g_391;
    volatile VECTOR(int16_t, 2) g_406;
    volatile union U0 g_454[5];
    int64_t g_455;
    int32_t ** volatile g_460;
    uint64_t g_475;
    VECTOR(int64_t, 16) g_481;
    int16_t g_483;
    volatile VECTOR(int8_t, 4) g_486;
    int16_t g_490;
    int16_t g_492;
    int16_t g_499;
    uint16_t *g_521;
    volatile int8_t g_527;
    volatile VECTOR(uint64_t, 2) g_540;
    union U0 g_572;
    union U0 *g_571[4];
    int32_t g_574[2][8];
    union U0 g_576;
    volatile uint16_t g_591[7];
    VECTOR(uint32_t, 4) g_606;
    VECTOR(uint64_t, 8) g_609;
    volatile VECTOR(int16_t, 8) g_614;
    union U0 g_636;
    volatile VECTOR(int8_t, 2) g_639;
    volatile VECTOR(int8_t, 4) g_640;
    volatile VECTOR(uint8_t, 16) g_643;
    union U0 g_651[1][1][6];
    uint16_t g_655;
    int32_t g_659;
    volatile union U0 g_662;
    VECTOR(uint8_t, 8) g_695;
    VECTOR(uint8_t, 8) g_696;
    VECTOR(uint8_t, 8) g_702;
    int32_t ** volatile g_703;
    volatile VECTOR(int16_t, 16) g_707;
    VECTOR(int16_t, 2) g_709;
    VECTOR(int16_t, 8) g_715;
    volatile VECTOR(uint8_t, 8) g_717;
    volatile union U0 g_720;
    VECTOR(int64_t, 4) g_721;
    int64_t g_723;
    VECTOR(uint64_t, 2) g_724;
    uint8_t g_727[7];
    volatile VECTOR(int64_t, 16) g_740;
    VECTOR(int64_t, 8) g_741;
    VECTOR(int64_t, 16) g_743;
    volatile VECTOR(int64_t, 16) g_746;
    volatile VECTOR(uint8_t, 8) g_765;
    volatile union U0 g_850;
    int32_t g_851;
    volatile union U0 g_881;
    VECTOR(int64_t, 8) g_888;
    int32_t * volatile g_911;
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
uint32_t  func_1(struct S1 * p_919);
int32_t * func_115(int32_t * p_116, struct S1 * p_919);
int32_t * func_117(uint32_t  p_118, uint32_t  p_119, uint32_t  p_120, struct S1 * p_919);
int8_t  func_129(int32_t * p_130, uint16_t  p_131, struct S1 * p_919);
int32_t * func_132(int8_t * p_133, int32_t * p_134, struct S1 * p_919);
int8_t * func_135(int8_t * p_136, int32_t * p_137, int8_t * p_138, int32_t * p_139, struct S1 * p_919);
int8_t * func_140(uint64_t  p_141, int64_t  p_142, int32_t * p_143, struct S1 * p_919);
uint32_t  func_144(int8_t ** p_145, struct S1 * p_919);
int8_t ** func_146(int8_t * p_147, int32_t  p_148, int64_t  p_149, int32_t * p_150, int8_t * p_151, struct S1 * p_919);
int8_t * func_152(uint64_t  p_153, uint64_t  p_154, struct S1 * p_919);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_919->g_3 p_919->l_comm_values p_919->g_111 p_919->g_662 p_919->g_285 p_919->g_187 p_919->g_107 p_919->g_193 p_919->g_191 p_919->g_460 p_919->g_499 p_919->g_521 p_919->g_527 p_919->g_157 p_919->g_175 p_919->g_483 p_919->g_178 p_919->g_406 p_919->g_571 p_919->g_574 p_919->g_391 p_919->g_591 p_919->g_651 p_919->g_703 p_919->g_727 p_919->g_481 p_919->g_740 p_919->g_741 p_919->g_743 p_919->g_746 p_919->g_695 p_919->g_655 p_919->g_390 p_919->g_765 p_919->g_180 p_919->g_455 p_919->g_659 p_919->g_721 p_919->g_850 p_919->g_156 p_919->g_851 p_919->g_881 p_919->g_696 p_919->g_888 p_919->g_192 p_919->g_223 p_919->g_702 p_919->g_715 p_919->g_351 p_919->g_170 p_919->g_606 p_919->g_911 p_919->g_717
 * writes: p_919->g_3 p_919->g_107 p_919->g_111 p_919->g_655 p_919->g_285 p_919->g_191 p_919->g_192 p_919->g_178 p_919->g_364 p_919->g_499 p_919->g_370 p_919->g_521 p_919->g_483 p_919->g_574 p_919->g_576.f0 p_919->g_455 p_919->g_391 p_919->g_727 p_919->g_187 p_919->g_390 p_919->g_180 p_919->g_659 p_919->g_170 p_919->g_606
 */
uint32_t  func_1(struct S1 * p_919)
{ /* block id: 4 */
    int8_t l_121 = (-2L);
    VECTOR(int8_t, 16) l_126 = (VECTOR(int8_t, 16))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0L), 0L), 0L, 0x50L, 0L, (VECTOR(int8_t, 2))(0x50L, 0L), (VECTOR(int8_t, 2))(0x50L, 0L), 0x50L, 0L, 0x50L, 0L);
    int32_t *l_431 = &p_919->g_3;
    int8_t *l_432 = &l_121;
    uint32_t *l_906 = (void*)0;
    VECTOR(int32_t, 16) l_909 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
    int32_t l_910 = 0L;
    int32_t *l_912[5][10][3] = {{{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]}},{{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]}},{{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]}},{{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]}},{{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]},{&p_919->g_107,&p_919->g_574[0][1],&p_919->g_574[0][3]}}};
    int16_t l_913 = 8L;
    int8_t l_914 = 1L;
    int32_t l_915 = 0x47BAA704L;
    uint32_t l_916[7] = {0UL,4294967290UL,0UL,0UL,4294967290UL,0UL,0UL};
    int i, j, k;
    for (p_919->g_3 = (-3); (p_919->g_3 < (-6)); --p_919->g_3)
    { /* block id: 7 */
        VECTOR(int8_t, 2) l_127 = (VECTOR(int8_t, 2))(0x02L, (-7L));
        int32_t **l_896 = &l_431;
        int i;
        if ((atomic_inc(&p_919->l_atomic_input[18]) == 4))
        { /* block id: 9 */
            int32_t l_6 = 0x147B80BEL;
            if (l_6)
            { /* block id: 10 */
                uint64_t l_7 = 1UL;
                int64_t l_8[9] = {0x59008CF5A8B060D2L,0x38D927F7B6FE6D39L,0x59008CF5A8B060D2L,0x59008CF5A8B060D2L,0x38D927F7B6FE6D39L,0x59008CF5A8B060D2L,0x59008CF5A8B060D2L,0x38D927F7B6FE6D39L,0x59008CF5A8B060D2L};
                uint32_t l_9 = 0xFDBD0176L;
                VECTOR(int32_t, 2) l_12 = (VECTOR(int32_t, 2))(0x0A277EBDL, 0L);
                uint32_t l_13 = 4294967295UL;
                VECTOR(int32_t, 2) l_14 = (VECTOR(int32_t, 2))(0x785734CBL, (-1L));
                VECTOR(int32_t, 8) l_15 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L);
                uint16_t l_16[6] = {0x9CD1L,0x9CD1L,0x9CD1L,0x9CD1L,0x9CD1L,0x9CD1L};
                VECTOR(int32_t, 8) l_17 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L), 2L, 0L, 2L);
                VECTOR(int32_t, 2) l_18 = (VECTOR(int32_t, 2))(0x5C4CE10BL, 0L);
                VECTOR(int32_t, 4) l_19 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x63F0E26AL), 0x63F0E26AL);
                VECTOR(int32_t, 4) l_20 = (VECTOR(int32_t, 4))(0x4E094BF7L, (VECTOR(int32_t, 2))(0x4E094BF7L, 0x1FDB81FDL), 0x1FDB81FDL);
                VECTOR(int32_t, 8) l_21 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L);
                int32_t l_22 = (-5L);
                int16_t l_23 = (-10L);
                VECTOR(int32_t, 4) l_24 = (VECTOR(int32_t, 4))(0x79E46ED4L, (VECTOR(int32_t, 2))(0x79E46ED4L, 0x4437F0D3L), 0x4437F0D3L);
                VECTOR(int32_t, 8) l_25 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x52F109D4L), 0x52F109D4L), 0x52F109D4L, 1L, 0x52F109D4L);
                int64_t l_26 = 9L;
                uint64_t l_27 = 2UL;
                int32_t l_28 = 0x4BD72F54L;
                int16_t l_29 = 0x55AEL;
                int64_t l_30 = 0x7B22F105EEFFBB89L;
                uint32_t l_31 = 1UL;
                int16_t l_32 = 9L;
                uint32_t l_33 = 0x53FD1775L;
                union U0 l_34 = {0UL};/* VOLATILE GLOBAL l_34 */
                int32_t *l_35 = &l_22;
                int i;
                l_7 &= (l_6 &= 0x6673E7EDL);
                ++l_9;
                l_35 = ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_12.yx)).yxyyxxyx, ((VECTOR(int32_t, 16))((-5L), l_13, (-1L), ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_14.yyxxxxxx)).lo, ((VECTOR(int32_t, 2))(l_15.s25)).xxyx, ((VECTOR(int32_t, 16))(((l_13 = ((l_6 = (l_16[3] ^= (-1L))) , 0x00CA3C47L)) , 0x684ABF0AL), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_17.s61422111)).hi, ((VECTOR(int32_t, 4))(l_18.yyxx))))))), 5L, 0x58D34108L, 0x7AD11E75L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_19.zy)).xyyy)), (-10L), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_20.wzxwzxzyzywywywx)).s26, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(l_21.s01)), ((VECTOR(int32_t, 8))(l_22, 0x6831E341L, l_23, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2C8918CBL, (-1L))), 0x40C41AB7L, 1L)), ((VECTOR(int32_t, 8))(l_24.xzzwwxwz)).odd, ((VECTOR(int32_t, 16))(l_25.s0761771064736326)).se321))), (int32_t)(l_15.s1 = l_26), (int32_t)(l_27 = (-4L))))).w, 0x6235BD63L, l_28, 0x1F0AC772L, ((VECTOR(int32_t, 8))(6L)), ((VECTOR(int32_t, 2))(1L)), 0x09F82A41L, 0x29717E5EL)).sd5)).yyxy)), (-10L))).s17)))))), 0x19D06D0CL)).s0147045337041645))).s9c4d)).wyywyxzx)), l_29, l_30, 0x773439D6L, l_31, ((VECTOR(int32_t, 4))((-5L))))).s5, l_32, ((VECTOR(int32_t, 4))(2L)), (-1L), 1L)).sc7bd))), (-3L), ((VECTOR(int32_t, 2))(0L)), l_33, 1L, ((VECTOR(int32_t, 4))(0x17E9BB10L)))).even))).s2136032667025157)).s7 , l_34) , (void*)0);
                for (l_24.y = 0; (l_24.y <= 23); l_24.y++)
                { /* block id: 22 */
                    uint16_t l_38[1];
                    int32_t l_40 = 0x1E6FA5B3L;
                    int32_t *l_39 = &l_40;
                    int16_t l_41 = 0x2029L;
                    VECTOR(int32_t, 4) l_42 = (VECTOR(int32_t, 4))(0x665A1B20L, (VECTOR(int32_t, 2))(0x665A1B20L, (-1L)), (-1L));
                    uint32_t l_43 = 0UL;
                    VECTOR(int32_t, 4) l_44 = (VECTOR(int32_t, 4))(0x10E515E6L, (VECTOR(int32_t, 2))(0x10E515E6L, 1L), 1L);
                    int32_t l_45 = 0x5C2B600AL;
                    VECTOR(int32_t, 16) l_46 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x67287D28L), 0x67287D28L), 0x67287D28L, (-1L), 0x67287D28L, (VECTOR(int32_t, 2))((-1L), 0x67287D28L), (VECTOR(int32_t, 2))((-1L), 0x67287D28L), (-1L), 0x67287D28L, (-1L), 0x67287D28L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_38[i] = 0x018DL;
                    l_38[0] = 0x4E62B0DDL;
                    l_35 = l_39;
                    l_28 |= (l_22 = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(0x3C750651L, l_41, ((VECTOR(int32_t, 2))(l_42.zw)), 4L, 0x68445995L, 3L, 5L)), (int32_t)((*l_35) = ((l_43 , (l_44.w , l_45)) , ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_46.s2e35a6ff)).s1231205226755610)).even))).s3))))).s6);
                }
            }
            else
            { /* block id: 29 */
                uint8_t l_47 = 0xD9L;
                int32_t l_103[10] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                int32_t *l_102 = &l_103[3];
                int i;
                if (l_47)
                { /* block id: 30 */
                    uint64_t l_48 = 0UL;
                    --l_48;
                    l_6 &= 0x71D57AD5L;
                }
                else
                { /* block id: 33 */
                    int16_t l_51 = 0x76E8L;
                    int64_t l_66[10][3] = {{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L},{0L,0x73CB375AFA80DD4DL,0x0E7310FB7A05A861L}};
                    uint32_t l_72 = 0UL;
                    int i, j;
                    if (l_51)
                    { /* block id: 34 */
                        int32_t *l_52 = (void*)0;
                        int32_t l_54 = 1L;
                        int32_t *l_53 = &l_54;
                        int32_t *l_55 = &l_54;
                        l_53 = l_52;
                        l_55 = (void*)0;
                    }
                    else
                    { /* block id: 37 */
                        int8_t l_56 = (-2L);
                        VECTOR(int8_t, 8) l_57 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x6BL), 0x6BL), 0x6BL, (-4L), 0x6BL);
                        uint64_t l_58[2][8] = {{0xEE0523CF742FF3E0L,0x6483285BF18921B6L,18446744073709551615UL,0x6483285BF18921B6L,0xEE0523CF742FF3E0L,0xEE0523CF742FF3E0L,0x6483285BF18921B6L,18446744073709551615UL},{0xEE0523CF742FF3E0L,0x6483285BF18921B6L,18446744073709551615UL,0x6483285BF18921B6L,0xEE0523CF742FF3E0L,0xEE0523CF742FF3E0L,0x6483285BF18921B6L,18446744073709551615UL}};
                        int32_t l_60 = 4L;
                        int32_t *l_59 = &l_60;
                        int32_t *l_61 = &l_60;
                        int32_t *l_62 = (void*)0;
                        int32_t *l_63 = &l_60;
                        int32_t *l_64 = &l_60;
                        int32_t *l_65 = &l_60;
                        int i, j;
                        l_61 = (l_56 , ((l_58[1][1] &= ((VECTOR(int8_t, 4))(l_57.s4374)).w) , l_59));
                        l_63 = (l_62 = (l_59 = (void*)0));
                        l_65 = l_64;
                    }
                    l_6 &= l_66[9][2];
                    for (l_66[3][1] = 0; (l_66[3][1] == (-10)); l_66[3][1]--)
                    { /* block id: 48 */
                        int32_t *l_69 = (void*)0;
                        int32_t l_71 = (-10L);
                        int32_t *l_70 = &l_71;
                        l_70 = l_69;
                    }
                    if (l_72)
                    { /* block id: 51 */
                        int32_t l_73 = 0x366BBB0BL;
                        int16_t l_74 = 1L;
                        VECTOR(uint32_t, 16) l_75 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL);
                        int32_t l_76 = (-1L);
                        int64_t l_77 = 0x207B948F0CD08EF1L;
                        int8_t l_78 = 2L;
                        int8_t *l_80 = &l_78;
                        int8_t **l_79 = &l_80;
                        int8_t **l_81 = &l_80;
                        int i;
                        l_81 = (((l_73 = (-7L)) , l_74) , ((l_77 = (((VECTOR(uint32_t, 4))(l_75.sb138)).w , l_76)) , ((l_78 , GROUP_DIVERGE(2, 1)) , l_79)));
                    }
                    else
                    { /* block id: 55 */
                        uint64_t l_82[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int32_t l_83 = 8L;
                        uint32_t l_84[4];
                        uint32_t l_85 = 0x3070A516L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_84[i] = 4294967295UL;
                        l_83 &= (l_6 |= l_82[0]);
                        l_85 &= l_84[2];
                    }
                }
                for (l_47 = 0; (l_47 == 14); l_47++)
                { /* block id: 63 */
                    int32_t l_89[6];
                    int32_t *l_88[1][2];
                    int8_t l_90[4][10][6] = {{{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L}},{{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L}},{{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L}},{{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L},{3L,(-6L),6L,5L,9L,5L}}};
                    uint32_t l_91 = 8UL;
                    uint32_t l_94 = 0x2E68823EL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_89[i] = 0x498979BAL;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_88[i][j] = &l_89[1];
                    }
                    l_88[0][1] = (void*)0;
                    l_91++;
                    --l_94;
                    for (l_89[1] = (-28); (l_89[1] < 21); ++l_89[1])
                    { /* block id: 69 */
                        int32_t l_99 = 0x1B159BD2L;
                        int32_t l_101 = 0L;
                        int32_t *l_100 = &l_101;
                        l_99 |= 0x1B6261DBL;
                        l_100 = l_100;
                    }
                }
                l_102 = (void*)0;
            }
            unsigned int result = 0;
            result += l_6;
            atomic_add(&p_919->l_special_values[18], result);
        }
        else
        { /* block id: 76 */
            (1 + 1);
        }
        for (p_919->g_107 = 0; (p_919->g_107 != (-27)); p_919->g_107--)
        { /* block id: 81 */
            uint8_t l_114[3][5][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_114[i][j][k] = 255UL;
                }
            }
            for (p_919->g_111 = 0; (p_919->g_111 == 16); p_919->g_111++)
            { /* block id: 84 */
                return l_114[1][0][0];
            }
        }
        (*l_896) = func_115(func_117(p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))], l_121, (p_919->g_655 = (safe_lshift_func_int8_t_s_s(p_919->g_111, (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(l_126.sea954584b11e5ec6)), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(l_127.xxyx)).even, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(p_919->g_128.s0713)).zyxwwxzx, ((VECTOR(int8_t, 8))(0x4BL, func_129(func_132(func_135(func_140(l_127.x, p_919->g_110, &p_919->g_111, p_919), (p_919->g_351.s0 , l_431), l_432, l_431, p_919), &p_919->g_285, p_919), p_919->g_128.s4, p_919), l_127.x, 1L, ((VECTOR(int8_t, 2))(0x58L)), 0x28L, 0x1CL))))).even)))).wwwwwzzyyzxzzwxy)).sdf, ((VECTOR(int8_t, 2))(0x6EL)))))))).xxyxxyyxyyxyxyyx))).sd, l_127.x))))), p_919), p_919);
    }
    (*p_919->g_911) = (((p_919->g_351.s2 , (safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_126.s6 & ((safe_unary_minus_func_uint32_t_u((p_919->g_170 |= (p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))] && (((VECTOR(int16_t, 2))(0x580CL, (-3L))).even , 0x84FC6B19594D7182L))))) & 0UL)), ((VECTOR(int64_t, 2))(0x62E783FD60804084L, (-5L))).hi)), (safe_sub_func_uint32_t_u_u((--p_919->g_606.z), l_121))))) | ((VECTOR(int16_t, 2))(5L, 0x0A63L)).odd) >= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_909.sc3)), 2L, (-2L))))).wzwxxzwx, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x60CF12FEL, 0x3298F819L, 0x2E884171L, (-3L), ((VECTOR(int32_t, 2))(0x13DC86CAL, 0x6901F270L)), 0x72CA230BL, 0x0DF4A5A4L)).s11, ((VECTOR(int32_t, 8))((((l_432 != (void*)0) >= p_919->g_390.x) != l_909.s2), ((VECTOR(int32_t, 4))(0x1E12850CL)), l_910, 0L, 0L)).s55, ((VECTOR(int32_t, 2))(0x2384561FL))))).yyxxxxxy, ((VECTOR(int32_t, 8))((-6L)))))), ((VECTOR(int32_t, 8))((-9L)))))), ((VECTOR(int32_t, 8))(1L))))), ((VECTOR(int32_t, 8))((-1L)))))).s1774135117050753)).s0956)).w);
    ++l_916[2];
    return p_919->g_717.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_285 p_919->g_481 p_919->g_107 p_919->g_740 p_919->g_741 p_919->g_743 p_919->g_746 p_919->g_695 p_919->g_655 p_919->g_390 p_919->g_765 p_919->g_180 p_919->g_574 p_919->g_455 p_919->g_483 p_919->g_659 p_919->g_178 p_919->g_721 p_919->g_111 p_919->g_850 p_919->g_156 p_919->g_851 p_919->g_703 p_919->g_881 p_919->g_696 p_919->g_888 p_919->g_192 p_919->g_591 p_919->g_223 p_919->g_702 p_919->g_715 p_919->g_662 p_919->g_187 p_919->g_193 p_919->g_191 p_919->g_460 p_919->g_499 p_919->g_521 p_919->g_527 p_919->g_157 p_919->g_175 p_919->g_406 p_919->g_571 p_919->l_comm_values p_919->g_391 p_919->g_651 p_919->g_727
 * writes: p_919->g_285 p_919->g_187 p_919->g_107 p_919->g_390 p_919->g_180 p_919->g_574 p_919->g_455 p_919->g_483 p_919->g_659 p_919->g_178 p_919->g_111 p_919->g_191 p_919->g_192 p_919->g_364 p_919->g_499 p_919->g_370 p_919->g_521 p_919->g_576.f0 p_919->g_391 p_919->g_727
 */
int32_t * func_115(int32_t * p_116, struct S1 * p_919)
{ /* block id: 328 */
    int32_t l_732 = 1L;
    int8_t *l_738 = (void*)0;
    VECTOR(int64_t, 4) l_742 = (VECTOR(int64_t, 4))(0x47E2C869F856DC79L, (VECTOR(int64_t, 2))(0x47E2C869F856DC79L, 6L), 6L);
    VECTOR(int64_t, 2) l_744 = (VECTOR(int64_t, 2))(1L, 0x7AA22C8E84E2B94AL);
    VECTOR(int64_t, 16) l_747 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2A75EB1E131E04E3L), 0x2A75EB1E131E04E3L), 0x2A75EB1E131E04E3L, 1L, 0x2A75EB1E131E04E3L, (VECTOR(int64_t, 2))(1L, 0x2A75EB1E131E04E3L), (VECTOR(int64_t, 2))(1L, 0x2A75EB1E131E04E3L), 1L, 0x2A75EB1E131E04E3L, 1L, 0x2A75EB1E131E04E3L);
    VECTOR(int64_t, 16) l_748 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x14111F7723E9E3C6L), 0x14111F7723E9E3C6L), 0x14111F7723E9E3C6L, (-1L), 0x14111F7723E9E3C6L, (VECTOR(int64_t, 2))((-1L), 0x14111F7723E9E3C6L), (VECTOR(int64_t, 2))((-1L), 0x14111F7723E9E3C6L), (-1L), 0x14111F7723E9E3C6L, (-1L), 0x14111F7723E9E3C6L);
    uint8_t *l_751[8][3][6];
    uint8_t l_766 = 6UL;
    int16_t l_767[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int32_t *l_768 = (void*)0;
    int32_t *l_769 = &p_919->g_574[0][1];
    int32_t *l_770 = &p_919->g_574[0][1];
    int32_t *l_771 = &p_919->g_574[0][1];
    int32_t *l_772 = (void*)0;
    VECTOR(int32_t, 4) l_773 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 5L), 5L);
    int32_t *l_774 = &p_919->g_285;
    int32_t *l_775[7];
    uint8_t l_776 = 8UL;
    int32_t **l_802[2][3][10] = {{{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]},{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]},{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]}},{{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]},{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]},{&p_919->g_191[5],&p_919->g_191[4],&l_775[4],(void*)0,(void*)0,(void*)0,(void*)0,&l_775[4],&p_919->g_191[4],&p_919->g_191[5]}}};
    uint8_t **l_875 = &p_919->g_315[2][8];
    uint8_t **l_876 = (void*)0;
    VECTOR(uint32_t, 4) l_877 = (VECTOR(uint32_t, 4))(0xC66F345CL, (VECTOR(uint32_t, 2))(0xC66F345CL, 8UL), 8UL);
    VECTOR(uint32_t, 4) l_878 = (VECTOR(uint32_t, 4))(0x93B4BDCEL, (VECTOR(uint32_t, 2))(0x93B4BDCEL, 4294967295UL), 4294967295UL);
    VECTOR(int64_t, 16) l_889 = (VECTOR(int64_t, 16))(0x0F0A73FAB803B239L, (VECTOR(int64_t, 4))(0x0F0A73FAB803B239L, (VECTOR(int64_t, 2))(0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL), 0x64FE7F974F27EE4EL), 0x64FE7F974F27EE4EL, 0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL, (VECTOR(int64_t, 2))(0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL), (VECTOR(int64_t, 2))(0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL), 0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL, 0x0F0A73FAB803B239L, 0x64FE7F974F27EE4EL);
    VECTOR(int64_t, 16) l_890 = (VECTOR(int64_t, 16))(0x32C264136A1E0353L, (VECTOR(int64_t, 4))(0x32C264136A1E0353L, (VECTOR(int64_t, 2))(0x32C264136A1E0353L, 0x662F3EF6CD51A920L), 0x662F3EF6CD51A920L), 0x662F3EF6CD51A920L, 0x32C264136A1E0353L, 0x662F3EF6CD51A920L, (VECTOR(int64_t, 2))(0x32C264136A1E0353L, 0x662F3EF6CD51A920L), (VECTOR(int64_t, 2))(0x32C264136A1E0353L, 0x662F3EF6CD51A920L), 0x32C264136A1E0353L, 0x662F3EF6CD51A920L, 0x32C264136A1E0353L, 0x662F3EF6CD51A920L);
    VECTOR(int64_t, 8) l_891 = (VECTOR(int64_t, 8))(0x7CC4ED126BCA4F13L, (VECTOR(int64_t, 4))(0x7CC4ED126BCA4F13L, (VECTOR(int64_t, 2))(0x7CC4ED126BCA4F13L, 0L), 0L), 0L, 0x7CC4ED126BCA4F13L, 0L);
    uint16_t l_894 = 65535UL;
    int16_t l_895[2][6] = {{0x2741L,0x2F46L,0x2741L,0x2741L,0x2F46L,0x2741L},{0x2741L,0x2F46L,0x2741L,0x2741L,0x2F46L,0x2741L}};
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
                l_751[i][j][k] = &p_919->g_727[1];
        }
    }
    for (i = 0; i < 7; i++)
        l_775[i] = &p_919->g_285;
    for (p_919->g_285 = 12; (p_919->g_285 < (-26)); p_919->g_285 = safe_sub_func_int64_t_s_s(p_919->g_285, 1))
    { /* block id: 331 */
        uint16_t l_735 = 0UL;
        int32_t l_736 = 8L;
        int8_t **l_737 = &p_919->g_187;
        int32_t *l_739 = &p_919->g_107;
        VECTOR(int64_t, 16) l_745 = (VECTOR(int64_t, 16))(0x495C5BA4B734B081L, (VECTOR(int64_t, 4))(0x495C5BA4B734B081L, (VECTOR(int64_t, 2))(0x495C5BA4B734B081L, 1L), 1L), 1L, 0x495C5BA4B734B081L, 1L, (VECTOR(int64_t, 2))(0x495C5BA4B734B081L, 1L), (VECTOR(int64_t, 2))(0x495C5BA4B734B081L, 1L), 0x495C5BA4B734B081L, 1L, 0x495C5BA4B734B081L, 1L);
        int16_t *l_752 = (void*)0;
        VECTOR(int8_t, 8) l_753 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
        VECTOR(uint8_t, 8) l_756 = (VECTOR(uint8_t, 8))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 6UL), 6UL), 6UL, 0x14L, 6UL);
        VECTOR(uint16_t, 8) l_757 = (VECTOR(uint16_t, 8))(0xE808L, (VECTOR(uint16_t, 4))(0xE808L, (VECTOR(uint16_t, 2))(0xE808L, 65532UL), 65532UL), 65532UL, 0xE808L, 65532UL);
        uint16_t *l_758 = (void*)0;
        uint16_t *l_759[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint8_t, 8) l_764 = (VECTOR(uint8_t, 8))(0xAAL, (VECTOR(uint8_t, 4))(0xAAL, (VECTOR(uint8_t, 2))(0xAAL, 0xCDL), 0xCDL), 0xCDL, 0xAAL, 0xCDL);
        int i, j;
        (*l_739) |= (((safe_sub_func_uint16_t_u_u(l_732, (safe_sub_func_uint32_t_u_u((l_735 = p_919->g_481.sb), (l_732 >= l_736))))) , 0xB2B6F05CL) & (((*l_737) = (void*)0) != l_738));
        (*l_739) ^= l_732;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_919->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_919->g_740.s82)), 0x5128414A5843053EL, 0x1496F3929AD804ABL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_919->g_741.s2640)).xwxzwwxyzwywxzxz)))).sb9, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(l_742.xywyzwzwyzwxyzwx)).s03, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_919->g_743.s8a25)), ((VECTOR(int64_t, 2))(l_744.xy)), (-9L), 0x11443463251DD518L)).even, ((VECTOR(int64_t, 4))(l_745.sd93c))))).lo))), ((VECTOR(int64_t, 4))(3L, 0x6363B00EBB5E32CBL, 0x25D2F11D5D6A21C9L, 0L)).hi))).yyxyxxyy)), 0L, ((VECTOR(int64_t, 2))(6L, 0x6D1B0CBA34D8D7A8L)), 0x4D7C1136212F586AL)).s86)).xyxxyyyyyyyyxxxy)).s9fbb)).zxzzwzyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_919->g_746.sbe6a)).zyxyyzwxyzzwxyyx)).s1a91, ((VECTOR(int64_t, 2))(l_747.sa5)).yyyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 2))(l_748.s6d)).yxxxyxyxxxyyxyxx, (int64_t)((safe_lshift_func_uint8_t_u_s((p_919->g_695.s0 ^ p_919->g_655), (l_742.x != ((l_751[3][1][1] != l_751[3][1][1]) <= (((0x78L >= ((l_752 != (void*)0) < (((VECTOR(int8_t, 4))(l_753.s5054)).w || ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_756.s6060)).x, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xC12C5FEAL, 0x03049B48L)), 0xC4BB5BB8L, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_757.s4043)).zxzywxwx)).even, ((VECTOR(uint16_t, 2))(0UL, 0x078FL)).yyxy))))), ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((++p_919->g_390.x), ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_764.s2060)))).yzxywwzw))).s0160603044260613, ((VECTOR(uint8_t, 2))(p_919->g_765.s36)).yxxxxyyyyxyxyyxy))).s7, l_766, ((VECTOR(uint8_t, 8))(0xC7L)), 0UL, ((VECTOR(uint8_t, 4))(0x10L)), 0UL)).s3, l_748.sf)) < 0x532CL), 0x350BL, ((VECTOR(uint16_t, 8))(0x6D8CL)), (*l_739), 0x7F4FL, 1UL, 1UL, 0x91D8L)).sdf)), 1UL, 0xEF8FL)).yzwyzxxzyxzzxxyy, ((VECTOR(uint16_t, 16))(0x0F99L))))).s6f89))).lo, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(3UL))))), 0x01505170L, 0UL, 0x38651308L, p_919->g_765.s4, 4294967295UL, 9UL, 4294967292UL, ((VECTOR(uint32_t, 2))(0x999852B1L)), 0x3ABE33A5L, 4294967293UL)).s4 | FAKE_DIVERGE(p_919->global_0_offset, get_global_id(0), 10)))) & p_919->g_743.s6)))) || (*l_739)) , l_747.s8))))) == l_767[5]), (int64_t)0x6BDF6E2EC432B688L))).odd)).hi))))).yxzwxzxxwzzwyywx, (int64_t)l_747.sb))))).odd, ((VECTOR(int64_t, 8))(5L))))).s3 , l_747.s1), 10))][(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]));
    }
    --l_776;
    for (p_919->g_180 = (-24); (p_919->g_180 <= 21); p_919->g_180++)
    { /* block id: 344 */
        int32_t l_783 = 0x2A232B04L;
        uint64_t l_784 = 18446744073709551609UL;
        int64_t *l_789[5][3][7] = {{{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723}},{{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723}},{{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723}},{{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723}},{{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723},{&p_919->g_723,(void*)0,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723,&p_919->g_723}}};
        int32_t l_790[3];
        uint8_t **l_796 = (void*)0;
        uint8_t **l_797[2][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int16_t *l_801 = &p_919->g_483;
        int64_t l_855 = 0x3423CDF4ABB920CBL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_790[i] = 0x53901A79L;
        if ((safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_919->global_1_offset, get_global_id(1), 10), ((((l_784++) , (safe_div_func_int16_t_s_s(p_919->g_481.s2, FAKE_DIVERGE(p_919->global_0_offset, get_global_id(0), 10)))) , (void*)0) != l_789[2][1][3]))))
        { /* block id: 346 */
            uint32_t l_791 = 0UL;
            uint8_t **l_794 = &p_919->g_315[2][8];
            uint8_t ***l_795[5] = {&p_919->g_314,&p_919->g_314,&p_919->g_314,&p_919->g_314,&p_919->g_314};
            int i;
            --l_791;
            (*l_769) &= (~((l_796 = l_794) == l_797[0][0][0]));
            for (p_919->g_455 = (-29); (p_919->g_455 >= (-28)); p_919->g_455 = safe_add_func_uint64_t_u_u(p_919->g_455, 5))
            { /* block id: 352 */
                (*l_769) = (-9L);
            }
        }
        else
        { /* block id: 355 */
            int8_t l_800[3][2][1];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_800[i][j][k] = 0x2CL;
                }
            }
            (*l_770) ^= l_800[2][0][0];
            return p_116;
        }
        (*l_769) = ((((*l_801) &= 0x0103L) , &p_919->g_191[4]) == l_802[0][1][5]);
        (*l_771) ^= (safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_919->group_1_offset, get_group_id(1), 10), l_783));
        for (p_919->g_659 = 6; (p_919->g_659 != 3); p_919->g_659--)
        { /* block id: 364 */
            int8_t l_809 = 0x72L;
            int32_t l_816 = 0L;
            int32_t l_821 = 0x0AD31A80L;
            int32_t l_822 = 0x3AB19009L;
            int32_t l_823 = 0x33984AF5L;
            int32_t l_824 = 0L;
            int32_t l_825 = 0L;
            int32_t l_826 = (-1L);
            int32_t l_827 = 0x186B31B8L;
            int32_t l_828 = (-1L);
            int32_t l_829 = 0x2903F051L;
            int32_t l_830 = 0x2F52C244L;
            int32_t l_831[10][9][2] = {{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}},{{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L},{1L,0L}}};
            int32_t l_859[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_859[i] = 0x59E0653AL;
            for (p_919->g_178 = 0; (p_919->g_178 > 54); p_919->g_178 = safe_add_func_uint16_t_u_u(p_919->g_178, 1))
            { /* block id: 367 */
                int64_t l_814[8][9][3] = {{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}},{{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)},{0x249CDAC327A7DDA6L,1L,(-2L)}}};
                int32_t l_815 = 0x456DCE7FL;
                int32_t l_817 = (-8L);
                int32_t l_818 = 0x11B0BF93L;
                int32_t l_819 = 0x08EEC63AL;
                int32_t l_820[10] = {1L,0x2ABE5813L,0L,0x2ABE5813L,1L,1L,0x2ABE5813L,0L,0x2ABE5813L,1L};
                uint32_t l_832 = 4294967294UL;
                int64_t l_860[7] = {0x555BB9D123D623AAL,0x555BB9D123D623AAL,0x555BB9D123D623AAL,0x555BB9D123D623AAL,0x555BB9D123D623AAL,0x555BB9D123D623AAL,0x555BB9D123D623AAL};
                int i, j, k;
                (*l_771) = ((((FAKE_DIVERGE(p_919->local_2_offset, get_local_id(2), 10) > l_809) ^ (0x23L ^ (l_809 & (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(7L, (-9L), 0x079DFF068BF186A1L, 0x3D6510849DBDCF5DL)).lo)).yxyy)).even)).even && 0x3DFFCF2BD58469DCL)))) != ((~((VECTOR(int64_t, 2))(0x361757C731F1BA57L, (-3L))).even) > 0xB467F7BAA7E34706L)) || (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((0x002EL || (&p_919->g_380 == (void*)0)) <= 1UL), l_809)), p_919->g_721.x)));
                ++l_832;
                for (p_919->g_111 = (-25); (p_919->g_111 < 14); p_919->g_111 = safe_add_func_uint8_t_u_u(p_919->g_111, 8))
                { /* block id: 372 */
                    int32_t *l_837 = &l_790[2];
                    int32_t l_852 = 0x07B282CDL;
                    int32_t l_853 = 0x2B7BEB98L;
                    int64_t l_856[3][1][5] = {{{0x4CFD8F4DC7BD7C99L,0L,0x4CFD8F4DC7BD7C99L,0x4CFD8F4DC7BD7C99L,0L}},{{0x4CFD8F4DC7BD7C99L,0L,0x4CFD8F4DC7BD7C99L,0x4CFD8F4DC7BD7C99L,0L}},{{0x4CFD8F4DC7BD7C99L,0L,0x4CFD8F4DC7BD7C99L,0x4CFD8F4DC7BD7C99L,0L}}};
                    int32_t l_858 = 0x563068EBL;
                    int32_t l_861[3];
                    int64_t l_862 = 0x31528721147A98CBL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_861[i] = (-9L);
                    l_837 = p_116;
                    if ((safe_lshift_func_int8_t_s_s(l_816, (safe_rshift_func_uint8_t_u_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 0x70D0L)).yxyy)).lo)).xyyxyxxy)).s0 == (((+(safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_int64_t_s_s((l_783 , (((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0L, ((VECTOR(int8_t, 2))(0x47L, 9L)), 0x7CL)).wzxwzwww)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))((-5L), 0x32L, 0x2AL, 0x35L)).even, ((VECTOR(int8_t, 8))((l_814[0][2][0] || (((0x11L || ((void*)0 != &l_814[5][3][1])) | 8UL) > (safe_mod_func_uint16_t_u_u((p_919->g_850 , p_919->g_156.x), l_783)))), ((VECTOR(int8_t, 4))(1L)), 0x23L, 1L, 0x3EL)).s43, ((VECTOR(int8_t, 2))(7L))))), 0L, (-1L), ((VECTOR(int8_t, 2))(0x69L)), 0L, 1L)).sd4, ((VECTOR(uint8_t, 2))(0xA1L))))).xxyxxxxy, ((VECTOR(uint16_t, 8))(0x6F07L))))).s0 , 0x1AA67D02F707016DL)), p_919->g_851)), 0x2CL)), 0xF881L))) , l_823) && 0x6732L)), 1)))))
                    { /* block id: 374 */
                        (*l_774) &= l_817;
                    }
                    else
                    { /* block id: 376 */
                        int64_t l_854[6] = {(-9L),0x22CA999B66E933A1L,(-9L),(-9L),0x22CA999B66E933A1L,(-9L)};
                        VECTOR(int32_t, 16) l_857 = (VECTOR(int32_t, 16))(0x40BC2D57L, (VECTOR(int32_t, 4))(0x40BC2D57L, (VECTOR(int32_t, 2))(0x40BC2D57L, 0x7285910CL), 0x7285910CL), 0x7285910CL, 0x40BC2D57L, 0x7285910CL, (VECTOR(int32_t, 2))(0x40BC2D57L, 0x7285910CL), (VECTOR(int32_t, 2))(0x40BC2D57L, 0x7285910CL), 0x40BC2D57L, 0x7285910CL, 0x40BC2D57L, 0x7285910CL);
                        uint8_t l_863 = 0UL;
                        int i;
                        l_863--;
                    }
                }
                for (l_821 = (-23); (l_821 < (-20)); ++l_821)
                { /* block id: 382 */
                    if ((atomic_inc(&p_919->g_atomic_input[28 * get_linear_group_id() + 9]) == 4))
                    { /* block id: 384 */
                        int32_t *l_868 = (void*)0;
                        uint64_t l_869 = 0x8DC5518A5EC8348FL;
                        int32_t l_871 = 0x62A84CBFL;
                        int32_t *l_870 = &l_871;
                        int32_t *l_872 = &l_871;
                        int64_t l_873 = 0x1C3C07F5A18166B5L;
                        uint32_t l_874 = 1UL;
                        l_868 = (void*)0;
                        l_872 = (l_869 , l_870);
                        l_874 |= (((VECTOR(int64_t, 2))(0x5856AC5E4541169CL, (-4L))).hi , l_873);
                        unsigned int result = 0;
                        result += l_869;
                        result += l_871;
                        result += l_873;
                        result += l_874;
                        atomic_add(&p_919->g_special_values[28 * get_linear_group_id() + 9], result);
                    }
                    else
                    { /* block id: 388 */
                        (1 + 1);
                    }
                    if (l_855)
                        continue;
                }
            }
            (*p_919->g_703) = (void*)0;
        }
    }
    p_116 = func_117((*l_771), (((l_875 != (l_876 = &l_751[2][0][3])) && ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xD708B645L, 0x9524D2A3L)))).xxxyxyyy)).s56, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(l_877.zyzzyzzz)).s7436371753647565, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_878.zwyxxwzw)).s20)), (uint32_t)(safe_rshift_func_int16_t_s_s((*l_769), (p_919->g_881 , ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_919->g_696.s4, ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))((safe_div_func_uint8_t_u_u(((((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(1L, 0x09B06DFC195C3085L, 9L, ((VECTOR(int64_t, 8))(p_919->g_888.s24243620)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_889.sc3)))).yxxx)), 1L)))).sd47a, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((*l_774), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_890.s09)), (-10L), 0x12FD1EF5F3D61CA1L)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(0x0A966C3F6B2A2448L, (*l_769), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(l_891.s4101055435540325)).sb96c, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(8L, (safe_rshift_func_int16_t_s_u(p_919->g_192, GROUP_DIVERGE(2, 1))), ((VECTOR(int64_t, 4))(0L)), 8L, ((VECTOR(int64_t, 8))(4L)), (-1L))).s66)).yyxy))).odd)), ((VECTOR(int64_t, 2))((-1L))), 0x44FABC99C5AE0EB3L, 0L)).s71, (int64_t)p_919->g_591[3]))).yxxyxyyx)), ((VECTOR(int64_t, 2))(5L)), 0L)).hi)).s4045446140741543, ((VECTOR(int64_t, 16))(1L))))).s5059, ((VECTOR(int64_t, 4))(0x4E6066CEDB181797L))))).y != 5L) , (*l_769)), (*l_774))), ((VECTOR(uint64_t, 2))(1UL)), 1UL)).odd)), 9UL, 0x1EF33508000C8BEDL)).yzwwxyzwxxyxxxzw, (uint64_t)p_919->g_223.s2, (uint64_t)p_919->g_746.s3))).even)).s3 >= 0x13360CD6E6AB4F44L) , (*l_774)))), 2)) , (*l_774)))))))), l_894, 0x6F0770D7L, 7UL, l_895[1][4], 0x3B71087FL, 0x6A5C9954L)).s1205040207657110))).sfd))).lo) & p_919->g_702.s3), p_919->g_715.s1, p_919);
    return (*p_919->g_193);
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_662 p_919->g_128 p_919->g_111 p_919->g_380 p_919->g_351 p_919->g_285 p_919->g_695 p_919->g_696 p_919->g_540 p_919->g_702 p_919->g_104 p_919->g_481 p_919->g_187 p_919->g_107 p_919->g_193 p_919->g_191 p_919->g_460 p_919->g_499 p_919->g_521 p_919->g_527 p_919->g_157 p_919->g_175 p_919->g_483 p_919->g_178 p_919->g_406 p_919->g_571 p_919->g_574 p_919->l_comm_values p_919->g_391 p_919->g_591 p_919->g_651 p_919->g_703 p_919->g_707 p_919->g_709 p_919->g_715 p_919->g_717 p_919->g_609 p_919->g_720 p_919->g_721 p_919->g_724 p_919->g_727
 * writes: p_919->g_187 p_919->g_475 p_919->g_285 p_919->g_490 p_919->g_107 p_919->g_191 p_919->g_192 p_919->g_178 p_919->g_364 p_919->g_499 p_919->g_370 p_919->g_521 p_919->g_483 p_919->g_574 p_919->g_576.f0 p_919->g_455 p_919->g_723 p_919->g_391 p_919->g_727
 */
int32_t * func_117(uint32_t  p_118, uint32_t  p_119, uint32_t  p_120, struct S1 * p_919)
{ /* block id: 316 */
    int32_t *l_658 = &p_919->g_659;
    int32_t l_663[9] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
    uint8_t **l_686 = (void*)0;
    int8_t *l_687[2];
    int8_t **l_688 = &p_919->g_187;
    uint64_t *l_689 = &p_919->g_475;
    int32_t *l_690 = &p_919->g_285;
    VECTOR(uint8_t, 8) l_691 = (VECTOR(uint8_t, 8))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 1UL), 1UL), 1UL, 0x40L, 1UL);
    VECTOR(uint8_t, 2) l_692 = (VECTOR(uint8_t, 2))(0x3FL, 255UL);
    VECTOR(uint8_t, 8) l_693 = (VECTOR(uint8_t, 8))(0x70L, (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 1UL), 1UL), 1UL, 0x70L, 1UL);
    VECTOR(int8_t, 8) l_694 = (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x26L), 0x26L), 0x26L, 2L, 0x26L);
    VECTOR(int16_t, 2) l_699 = (VECTOR(int16_t, 2))((-9L), (-1L));
    int16_t *l_700 = &p_919->g_490;
    VECTOR(uint8_t, 16) l_701 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x0CL), 0x0CL), 0x0CL, 254UL, 0x0CL, (VECTOR(uint8_t, 2))(254UL, 0x0CL), (VECTOR(uint8_t, 2))(254UL, 0x0CL), 254UL, 0x0CL, 254UL, 0x0CL);
    VECTOR(uint16_t, 4) l_704 = (VECTOR(uint16_t, 4))(0xFA00L, (VECTOR(uint16_t, 2))(0xFA00L, 2UL), 2UL);
    VECTOR(uint16_t, 8) l_705 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0xE07AL), 0xE07AL), 0xE07AL, 65528UL, 0xE07AL);
    VECTOR(int16_t, 2) l_706 = (VECTOR(int16_t, 2))(0x70F3L, 1L);
    VECTOR(int16_t, 16) l_708 = (VECTOR(int16_t, 16))(0x2717L, (VECTOR(int16_t, 4))(0x2717L, (VECTOR(int16_t, 2))(0x2717L, 0x216FL), 0x216FL), 0x216FL, 0x2717L, 0x216FL, (VECTOR(int16_t, 2))(0x2717L, 0x216FL), (VECTOR(int16_t, 2))(0x2717L, 0x216FL), 0x2717L, 0x216FL, 0x2717L, 0x216FL);
    VECTOR(int16_t, 2) l_710 = (VECTOR(int16_t, 2))(0x3B69L, 0x60CFL);
    uint64_t l_711 = 1UL;
    VECTOR(int16_t, 16) l_712 = (VECTOR(int16_t, 16))(0x7264L, (VECTOR(int16_t, 4))(0x7264L, (VECTOR(int16_t, 2))(0x7264L, 0x74C7L), 0x74C7L), 0x74C7L, 0x7264L, 0x74C7L, (VECTOR(int16_t, 2))(0x7264L, 0x74C7L), (VECTOR(int16_t, 2))(0x7264L, 0x74C7L), 0x7264L, 0x74C7L, 0x7264L, 0x74C7L);
    VECTOR(int16_t, 16) l_716 = (VECTOR(int16_t, 16))(0x3164L, (VECTOR(int16_t, 4))(0x3164L, (VECTOR(int16_t, 2))(0x3164L, 0x1D4DL), 0x1D4DL), 0x1D4DL, 0x3164L, 0x1D4DL, (VECTOR(int16_t, 2))(0x3164L, 0x1D4DL), (VECTOR(int16_t, 2))(0x3164L, 0x1D4DL), 0x3164L, 0x1D4DL, 0x3164L, 0x1D4DL);
    int64_t *l_722[5][8][6] = {{{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0}},{{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0}},{{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0}},{{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0}},{{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0},{&p_919->g_723,&p_919->g_723,(void*)0,(void*)0,&p_919->g_723,(void*)0}}};
    uint16_t *l_725 = (void*)0;
    int32_t *l_726[4][8][6] = {{{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]}},{{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]}},{{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]}},{{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]},{&p_919->g_574[1][6],&p_919->g_107,&p_919->g_285,&p_919->g_111,(void*)0,&p_919->g_574[1][6]}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_687[i] = (void*)0;
    (*l_690) ^= (safe_div_func_uint8_t_u_u((((void*)0 == l_658) , (safe_lshift_func_int16_t_s_s(((p_919->g_662 , l_663[8]) >= (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))((~(safe_div_func_uint64_t_u_u(((*l_689) = (((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((*l_688) = (((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))((0x315CFB78L >= (safe_rshift_func_int16_t_s_u(l_663[1], 1))), ((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_919->group_1_offset, get_group_id(1), 10), ((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-1L), 1UL)), (((((safe_add_func_int64_t_s_s((((l_686 != l_686) >= l_663[8]) || 0x03569AA385B39333L), 0x05FB5171BB8F64F3L)) != 0x4EFBL) <= l_663[8]) || 0L) || l_663[8]))) , 0x0172DE3826135729L), p_120)) , l_663[8]))) < 0x17L), p_919->g_128.s0, 8UL, 0x321063E2L, ((VECTOR(uint32_t, 2))(0UL)), 0xC6D75F32L, p_919->g_111, p_919->g_380, 0x99A20D56L, ((VECTOR(uint32_t, 2))(0xCD75167DL)), 0x2465A8E1L, 0xBB5B3E00L, 4294967289UL)).s28, ((VECTOR(uint32_t, 2))(0xA8A3AE2FL))))).hi , l_687[0])) == (void*)0) > l_663[8]), p_919->g_351.s0)), l_663[8])), FAKE_DIVERGE(p_919->local_2_offset, get_local_id(2), 10))) || l_663[8]) , 0xFF20B000903FD23AL)), 0x1084D5F4385E1429L))), 7L, ((VECTOR(int64_t, 4))(0x3366F0D186EE7E01L)), 2L, (-1L))).s7700450411533411, ((VECTOR(int64_t, 16))(0x620B3AB6CA601B1EL)), ((VECTOR(int64_t, 16))(1L))))).sd8, ((VECTOR(int64_t, 2))(0L))))).yyxyxxyyyyxxyxyy)).s2b)), 0L, 0x5B576D1C6B10A306L)), (int64_t)l_663[3]))).x, l_663[7]))), p_118))), p_119));
    (*p_919->g_703) = func_132(((((((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(l_691.s3173)).lo, ((VECTOR(uint8_t, 8))(l_692.yxxyxyxx)).s23))).yxyxxxyyxyxxyyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_693.s03)).xyyy)).xyxwwzzzywwwxwyx, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_694.s02)))).xxyyxyyy))).s73, ((VECTOR(uint8_t, 4))(p_919->g_695.s4553)).even, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(2UL, (0UL && (0x2DFE5D97A15899C3L < (-1L))), ((VECTOR(uint8_t, 16))(p_919->g_696.s7753121007012324)).sf, (safe_sub_func_uint64_t_u_u((((VECTOR(int16_t, 4))(l_699.xyyx)).x && (((*l_700) = p_919->g_540.x) == ((*l_690) = (*l_690)))), 0xABEC357E63ED9EDEL)), ((VECTOR(uint8_t, 4))(l_701.s6c53)))).even, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))((-4L), 0x36L)).yxxxxxxyyxyyyyxy))).s59))).xxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_120, 0x93L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_919->g_702.s7241)).odd)), ((*l_690) = (p_919->g_104 & (18446744073709551615UL | p_919->g_481.s0))), 0xFEL, 0x9FL, 0UL)), ((VECTOR(uint8_t, 4))(0xBCL)), p_120, ((VECTOR(uint8_t, 2))(255UL)), 0UL)).s0246)))))).even))).yyyxyxxyyxyxyyyx))).s2 ^ l_701.s0) < p_118) || (*l_690)) , (*l_688)), &p_919->g_107, p_919);
    p_919->g_727[6] &= ((p_919->g_391.z = ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(l_704.wzyyzyxy)).s20, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_705.s7041)).zwxxyyxzwzyzwxxw)).s6363)).wzwxyzwyxzywxyxw, ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(l_706.yx)), ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(p_919->g_707.s3a9efe2b)).s2234451266726632, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_708.se54d0cc6)).s5031557064055141))))).s92))), ((VECTOR(int16_t, 4))(p_919->g_709.xyxx)), 0x618EL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_710.yxxxxyyy)).s54)), 1L, 0L)), 1L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(0x62D3L, (-1L), 9L, 0L)).even, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_711, ((VECTOR(int16_t, 16))(l_712.sf3d2d12633a06431)).s6, (safe_rshift_func_uint8_t_u_u(p_119, 0)), ((VECTOR(int16_t, 4))(p_919->g_715.s7612)), 0x25EAL)).s3750162327557231)).hi, ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(l_716.s02)).xxxyyyxyxxxyxxxy, ((VECTOR(int16_t, 2))(0x3F30L, 5L)).yyxyxxyxyyyyxyyy))).lo))).s52))), 0x24FDL, 0x4C76L)).sea))).xxxyyxyxxyyyxxxy))).lo, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 1UL)), 0xE8D5L, 65535UL)).even)), ((VECTOR(uint16_t, 4))(0x172EL, 3UL, 65535UL, 65535UL)).hi))), 1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(1UL, 0xBAL)).yxxxxyxxxxxxxxxy, ((VECTOR(uint8_t, 4))(p_919->g_717.s5255)).yyywyzzwxwzyzzyz))).sc4, ((VECTOR(uint8_t, 2))(0xEEL, 0x97L))))), 0x0CL, 0xC6L, ((VECTOR(uint8_t, 16))(((safe_add_func_int16_t_s_s(p_919->g_609.s2, (((p_919->g_720 , (p_120 || 65533UL)) , ((((VECTOR(int64_t, 4))(p_919->g_721.xwwx)).y , (p_919->g_723 = 0L)) , ((VECTOR(uint64_t, 2))(p_919->g_724.xy)).even)) >= ((*l_690) == 4294967295UL)))) & p_118), ((VECTOR(uint8_t, 4))(0xDDL)), ((VECTOR(uint8_t, 8))(0x2BL)), 0xEAL, 0x92L, 255UL)).se, 255UL, 0x57L, 1UL, p_119, (*l_690), (*l_690), 0x8BL, 0xE7L, 0xE8L, 255UL, 255UL)).s6447, ((VECTOR(uint8_t, 4))(0UL))))).wzzyyyzwzxxzywzz)), ((VECTOR(uint8_t, 16))(1UL))))))).scd90, ((VECTOR(uint8_t, 4))(0x01L)), ((VECTOR(uint8_t, 4))(248UL))))))).xwzxzyzz, ((VECTOR(uint8_t, 8))(0xFCL))))).s3036574034220332, ((VECTOR(uint8_t, 16))(255UL))))).s7113, ((VECTOR(uint16_t, 4))(0x2B9DL))))).hi)).xyxx, ((VECTOR(uint16_t, 4))(65535UL))))), (uint16_t)p_919->g_574[0][1]))).odd)), (*l_690), 0x3F45L, 65533UL)).lo)).zzwwxwwx))).s12))).yyyyxyxxxxxxxxyx, ((VECTOR(uint16_t, 16))(0x749EL))))).s6) == 0xD018L);
    return (*p_919->g_193);
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_460 p_919->g_191 p_919->g_193
 * writes: p_919->g_191
 */
int8_t  func_129(int32_t * p_130, uint16_t  p_131, struct S1 * p_919)
{ /* block id: 311 */
    int8_t *l_653 = (void*)0;
    int32_t l_654 = 0L;
    (*p_919->g_193) = (*p_919->g_460);
    l_654 = 0x071A01EAL;
    return l_654;
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_285 p_919->g_193 p_919->g_191 p_919->g_460 p_919->g_192 p_919->g_178 p_919->g_364 p_919->g_499 p_919->g_521 p_919->g_527 p_919->g_157 p_919->g_175 p_919->g_483 p_919->g_406 p_919->g_571 p_919->g_574 p_919->l_comm_values p_919->g_391 p_919->g_591 p_919->g_606 p_919->g_572.f0 p_919->g_609 p_919->g_614 p_919->g_475 p_919->g_636 p_919->g_639 p_919->g_640 p_919->g_643 p_919->g_180 p_919->g_390 p_919->g_455 p_919->g_651 p_919->g_107
 * writes: p_919->g_285 p_919->g_191 p_919->g_192 p_919->g_178 p_919->g_364 p_919->g_499 p_919->g_370 p_919->g_521 p_919->g_483 p_919->g_574 p_919->g_576.f0 p_919->g_455 p_919->g_572.f0 p_919->g_390 p_919->g_107
 */
int32_t * func_132(int8_t * p_133, int32_t * p_134, struct S1 * p_919)
{ /* block id: 238 */
    uint64_t l_488 = 18446744073709551608UL;
    uint32_t *l_619 = (void*)0;
    int32_t l_623 = (-1L);
    VECTOR(uint8_t, 4) l_627 = (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0x6AL), 0x6AL);
    int i;
    if (((*p_134) = 0x2A8280FFL))
    { /* block id: 240 */
        VECTOR(uint32_t, 2) l_459 = (VECTOR(uint32_t, 2))(4294967295UL, 0x3878C1EBL);
        int i;
        (*p_134) &= l_459.x;
        (*p_919->g_460) = (*p_919->g_193);
    }
    else
    { /* block id: 243 */
        VECTOR(uint64_t, 16) l_478 = (VECTOR(uint64_t, 16))(0x0F5FFE68420A7B3CL, (VECTOR(uint64_t, 4))(0x0F5FFE68420A7B3CL, (VECTOR(uint64_t, 2))(0x0F5FFE68420A7B3CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x0F5FFE68420A7B3CL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x0F5FFE68420A7B3CL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x0F5FFE68420A7B3CL, 18446744073709551615UL), 0x0F5FFE68420A7B3CL, 18446744073709551615UL, 0x0F5FFE68420A7B3CL, 18446744073709551615UL);
        uint8_t **l_487 = &p_919->g_315[2][8];
        int32_t l_525 = 1L;
        int32_t l_533 = 1L;
        int64_t l_549 = 0x4832B4AE2E490FA8L;
        VECTOR(int32_t, 4) l_607 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2612774EL), 0x2612774EL);
        int i;
        for (p_919->g_192 = 13; (p_919->g_192 >= (-29)); p_919->g_192--)
        { /* block id: 246 */
            VECTOR(int16_t, 4) l_472 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-1L)), (-1L));
            int32_t l_580 = 0L;
            int i;
            for (p_919->g_178 = (-7); (p_919->g_178 != 30); ++p_919->g_178)
            { /* block id: 249 */
                (*p_134) ^= 0x54EF2374L;
            }
            for (p_919->g_364 = 0; (p_919->g_364 != 31); p_919->g_364 = safe_add_func_uint8_t_u_u(p_919->g_364, 5))
            { /* block id: 254 */
                uint16_t l_473 = 0x2823L;
                uint64_t *l_474[4];
                int16_t *l_482 = &p_919->g_483;
                int16_t *l_489 = &p_919->g_490;
                int16_t *l_491 = &p_919->g_492;
                int64_t *l_493 = (void*)0;
                int64_t *l_494 = &p_919->g_455;
                int64_t *l_495 = (void*)0;
                int64_t *l_496 = (void*)0;
                int64_t *l_497 = (void*)0;
                int16_t *l_498 = &p_919->g_499;
                int16_t l_524 = 6L;
                int32_t *l_538 = &p_919->g_285;
                int32_t l_560 = 1L;
                uint16_t l_620[5] = {0xA2F3L,0xA2F3L,0xA2F3L,0xA2F3L,0xA2F3L};
                int32_t l_648 = 1L;
                int32_t l_649 = 0x4ABD4FE6L;
                int32_t *l_652[8] = {&p_919->g_3,&p_919->g_574[0][1],&p_919->g_3,&p_919->g_3,&p_919->g_574[0][1],&p_919->g_3,&p_919->g_3,&p_919->g_574[0][1]};
                int i;
                for (i = 0; i < 4; i++)
                    l_474[i] = &p_919->g_475;
                if ((!((((*l_498) |= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((safe_unary_minus_func_int16_t_s((((p_919->g_475 = ((safe_add_func_uint64_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_472.yzyzxyxywyzxzzzy)))).sa >= ((*p_134) | l_472.w)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(6UL, 18446744073709551615UL)), 0x1150FF37BDC370ABL, 18446744073709551608UL)).y)) && (0L && l_473))) | ((safe_mul_func_uint16_t_u_u((((VECTOR(uint64_t, 16))(l_478.s7a7fc50532295215)).s5 > ((p_919->g_481.s4 = ((*l_494) = (p_919->g_128.s2 == (((*l_491) = ((*l_489) = ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(p_919->g_481.s31)).even, (((*l_482) = l_472.w) , ((safe_lshift_func_uint8_t_u_s((GROUP_DIVERGE(2, 1) && ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_919->g_486.wzww)).xwxxwwyz)).s0), ((void*)0 == l_487))) != ((l_472.x >= 65535UL) > l_488))))) != p_919->g_380))) , 0x4C17L)))) >= l_473)), 4L)) < (*p_134))) >= l_488))) && p_919->g_481.sb), 0x511BL, ((VECTOR(int16_t, 4))(0x0B31L)), 0x6FCAL, (-1L), 0x7AF9L, (-8L), 0x4ABFL, ((VECTOR(int16_t, 2))(0x414FL)), 0x0FEEL, 0x6691L, (-1L))).sfda5)), 8L, (-1L), (-1L), 0L)))).s65)), ((VECTOR(int16_t, 4))(8L)), 0x2251L, 0x5A0DL)).s7) > GROUP_DIVERGE(1, 1)) > 0x24B225E5L)))
                { /* block id: 262 */
                    return p_134;
                }
                else
                { /* block id: 264 */
                    int64_t l_528 = 1L;
                    int32_t l_535 = 0x2DCC72CFL;
                    int32_t **l_539 = &p_919->g_191[3];
                    int16_t l_547 = 0x1C66L;
                    uint32_t *l_548[6] = {&p_919->g_175[6],&p_919->g_175[6],&p_919->g_175[6],&p_919->g_175[6],&p_919->g_175[6],&p_919->g_175[6]};
                    int8_t *l_550 = (void*)0;
                    int8_t *l_551 = (void*)0;
                    int8_t *l_552 = (void*)0;
                    int8_t *l_553 = (void*)0;
                    int8_t *l_554 = (void*)0;
                    int8_t *l_555 = (void*)0;
                    int8_t *l_556 = (void*)0;
                    int8_t *l_557 = (void*)0;
                    int8_t *l_558 = (void*)0;
                    int8_t *l_559[8][7][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                    VECTOR(uint64_t, 2) l_588 = (VECTOR(uint64_t, 2))(2UL, 0xAF2CB969A160DE29L);
                    uint16_t l_595[10] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
                    uint8_t *l_608 = &p_919->g_572.f0;
                    uint16_t *l_621 = (void*)0;
                    uint16_t *l_622 = &l_473;
                    int32_t *l_624 = &l_535;
                    int32_t *l_650 = &p_919->g_574[0][0];
                    int i, j, k;
                    for (p_919->g_370 = 0; (p_919->g_370 >= 2); ++p_919->g_370)
                    { /* block id: 267 */
                        uint16_t **l_522 = (void*)0;
                        uint16_t **l_523 = &p_919->g_521;
                        int32_t l_526 = 0L;
                        int8_t *l_529 = (void*)0;
                        int8_t *l_530 = (void*)0;
                        int8_t *l_531 = (void*)0;
                        int8_t *l_532 = (void*)0;
                        int8_t *l_534[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*p_134) = l_488;
                        (*p_134) = (l_472.y || (safe_rshift_func_int16_t_s_u(((l_478.s9 | (l_535 = (l_533 = (((safe_mul_func_int16_t_s_s((-9L), (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((l_525 = (safe_unary_minus_func_uint64_t_u((safe_mod_func_uint8_t_u_u(l_478.sa, (safe_rshift_func_int8_t_s_u((((*l_523) = p_919->g_521) != (l_524 , (void*)0)), 5))))))), 3)) <= ((((void*)0 == &p_919->g_180) <= l_526) || p_919->g_285)), p_919->g_527)), 1)) , l_528), l_526)))) != 9UL) == p_919->g_157.sf)))) < l_526), FAKE_DIVERGE(p_919->local_0_offset, get_local_id(0), 10))));
                    }
                    if ((safe_rshift_func_int16_t_s_u(((*l_482) |= (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))((((*l_539) = l_538) != (void*)0), ((VECTOR(uint64_t, 2))(p_919->g_540.yy)).odd, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))((l_478.sa > ((safe_add_func_uint64_t_u_u(p_919->g_486.w, (safe_mul_func_int8_t_s_s(0x5BL, (1L & (l_533 |= ((safe_lshift_func_int8_t_s_s((*l_538), ((l_547 || ((p_919->g_170 &= 0UL) , 0x17E670C9437B06C5L)) <= l_549))) != l_525))))))) || (*l_538))), l_472.z, (*l_538), 0x87A1FB1AF2AD729EL, 0xF30B77BE44929C96L, 0x1AB8132AABC3BA4CL, 0xECFCD2A52B24F0E5L, 0xF9D4C1A3E9B58E7DL)))).s56)), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), ((VECTOR(uint64_t, 2))(0xBBBA82EDE67BAFAAL))))).xxyy)).even, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0UL))))), ((VECTOR(uint64_t, 8))(1UL)), 0x8A5D37C0EED169CEL, p_919->g_387.s7, 18446744073709551607UL, 18446744073709551615UL)).sb5)).lo | p_919->g_175[6])), 13)))
                    { /* block id: 279 */
                        uint8_t l_565 = 0UL;
                        uint8_t *l_566 = &p_919->g_178;
                        int32_t *l_573 = (void*)0;
                        union U0 *l_575 = &p_919->g_576;
                        uint8_t *l_577 = &p_919->g_576.f0;
                        int32_t *l_581[4][8] = {{&l_525,&p_919->g_272,(void*)0,&p_919->g_111,&p_919->g_272,&p_919->g_111,(void*)0,&p_919->g_272},{&l_525,&p_919->g_272,(void*)0,&p_919->g_111,&p_919->g_272,&p_919->g_111,(void*)0,&p_919->g_272},{&l_525,&p_919->g_272,(void*)0,&p_919->g_111,&p_919->g_272,&p_919->g_111,(void*)0,&p_919->g_272},{&l_525,&p_919->g_272,(void*)0,&p_919->g_111,&p_919->g_272,&p_919->g_111,(void*)0,&p_919->g_272}};
                        int i, j;
                        (*l_538) ^= l_560;
                        l_560 |= ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_538) ^= (~((*l_566) ^= l_565))), ((p_919->g_406.x != ((l_580 = (safe_add_func_uint16_t_u_u((l_533 = (safe_sub_func_uint8_t_u_u((p_919->g_571[0] != ((p_919->g_574[0][1] |= 0x0447DC45L) , l_575)), (((*l_577) = ((void*)0 == p_919->g_191[3])) <= (safe_mod_func_int64_t_s_s(0L, (+p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]))))))), 4UL))) != 1UL)) <= l_565))), l_488)) | p_919->g_391.y);
                        atomic_and(&p_919->g_atomic_reduction[get_linear_group_id()], ((0xCD8E67A1D8F2943EL <= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((*l_538) < (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x2C482453L, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))((-1L), (l_488 == l_580), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x03EEAE3FL, (l_472.y <= l_478.se), (l_478.s5 , (l_535 = (l_560 = ((p_919->g_455 = 0x6D365ABA12F5BA3CL) | (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3AE873365C93BEA6L)).yyyxyxxx)).s2450537111562752, ((VECTOR(uint64_t, 4))(l_588.xyyy)).xxyzxwzyxxwxyyxy))))).s7 & (safe_lshift_func_int8_t_s_u(l_488, l_533))))))), 2L, (*p_134), ((VECTOR(int32_t, 4))(0x1BFCE242L)), 0x02FA5955L, 0x3D88554BL, (*l_538), ((VECTOR(int32_t, 2))((-1L))), 0x7703838FL, 0L)).s695d)), 0x52466FFAL, 0x77D1E9F5L)), ((VECTOR(int32_t, 8))(0x4E5B418EL)), ((VECTOR(int32_t, 8))(5L))))), ((VECTOR(int32_t, 4))(1L)), 0x332C3C7DL, 4L, 0x31BF2252L)).s8ee5, ((VECTOR(int32_t, 4))((-9L)))))).wzxyxxyz))))).s0, l_472.z))), (*l_538))), p_919->g_591[6]))) >= l_488) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_919->v_collective += p_919->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    else
                    { /* block id: 292 */
                        int32_t *l_592 = &p_919->g_107;
                        int32_t *l_593 = (void*)0;
                        int32_t *l_594[3][8][10] = {{{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192}},{{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192}},{{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192},{(void*)0,&p_919->g_574[1][1],&p_919->g_192,(void*)0,&p_919->g_107,&p_919->g_192,&p_919->g_192,&p_919->g_107,(void*)0,&p_919->g_192}}};
                        int i, j, k;
                        l_595[3]++;
                    }
                    (*l_624) |= (4294967295UL || (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_525 = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(9UL, 0UL)), 0x2DL, 0x2BL)).w), (l_623 = ((*l_538) >= (safe_sub_func_int8_t_s_s(((l_549 < (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(p_919->g_606.zxzyywwz)).s16, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 8))(l_607.xwywzwyz))))).s77, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((~(((((*l_608) &= (*l_538)) , ((*l_538) , ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(p_919->g_609.s75)).yyyxyxyyyxxyxxxx))).s2)) , (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_919->g_614.s0343)).odd)).lo, l_607.x)), 2))) ^ ((safe_lshift_func_int8_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x24234F199711B9A3L, (safe_div_func_uint16_t_u_u(((*l_622) = (((void*)0 == l_619) == l_620[2])), 0xC9CEL)), 0x4F7882145439960AL, 1L)).wwwxxwyy)).s6 == p_919->g_475), 1)) ^ (*l_538)))), ((VECTOR(uint32_t, 2))(4UL)), ((VECTOR(uint32_t, 4))(0x6FFDCCBAL)), 0x670E3DBEL)).s64)), ((VECTOR(uint32_t, 2))(4294967295UL))))), 0x735630D5L, 0x5CBEF243L, 0xA47795FAL, 0x1A00123FL, 0xCF183CB6L, 0xC03157A5L)).lo, ((VECTOR(uint32_t, 4))(4294967290UL)), ((VECTOR(uint32_t, 4))(1UL))))).zyxwxzzy)).s0630131605276402)).hi, (uint32_t)(*l_538)))), ((VECTOR(uint32_t, 8))(0x0FAC2277L))))).s16, ((VECTOR(uint32_t, 2))(4294967287UL))))), ((VECTOR(uint32_t, 2))(2UL)), ((VECTOR(uint32_t, 2))(0x0FE77497L))))).xxyxxxyyyxyxxxyx)).lo, ((VECTOR(uint32_t, 8))(0x315B89B7L)), ((VECTOR(uint32_t, 8))(0xECC7FC3EL))))).odd)))).lo))).yxyy, ((VECTOR(uint32_t, 4))(0xF91809DFL))))), 0xEDB64B8AL, ((VECTOR(uint32_t, 2))(0x4C3E2A3DL)), 4294967294UL)).s6520356102223777, ((VECTOR(uint32_t, 16))(0x813B3333L)), ((VECTOR(uint32_t, 16))(0x3BB65ADBL))))), ((VECTOR(uint32_t, 16))(6UL))))).sf1)).even, l_580))) , (*l_538)), (*l_538))))))), 0x48L)));
                    (*l_650) |= (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(l_627.zw)).yxyxyyyxxxyxxxxx, (uint8_t)254UL, (uint8_t)((((*l_494) &= (safe_add_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((safe_div_func_uint64_t_u_u(0xDA4834667D343048L, ((safe_lshift_func_int16_t_s_u(((((p_919->g_636 , l_580) , (safe_div_func_int8_t_s_s(0x37L, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((*l_538), (*l_624), 0L, 7L)).even)).xyxyyxyxxyxxxxyy, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(p_919->g_639.xxxyyxxxyyyyxxxy)).lo, ((VECTOR(int8_t, 2))(p_919->g_640.wy)).xxxyxxxy))).s0725116563212667))).s5))) , (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_919->g_643.sc764)).lo)), 0xABL, 7UL)).y, ((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((p_919->g_390.x &= (p_919->g_178 <= p_919->g_180)), p_919->g_483)) && l_533) | GROUP_DIVERGE(0, 1)), 3)) , 0x6DL)))) , l_488), (*l_624))) || 1UL))), 0x1BC1759330228831L)) ^ 0x6DAE393CL) , l_472.y), l_648))) == l_472.z) , (*l_538))))).s8c)).odd, l_649));
                }
                l_580 |= (p_919->g_651[0][0][4] , (*l_538));
                (*p_134) &= l_623;
            }
            return (*p_919->g_193);
        }
    }
    return (*p_919->g_460);
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_170 p_919->g_364 p_919->g_454 p_919->l_comm_values p_919->g_455 p_919->g_3
 * writes: p_919->g_170 p_919->g_364 p_919->g_455
 */
int8_t * func_135(int8_t * p_136, int32_t * p_137, int8_t * p_138, int32_t * p_139, struct S1 * p_919)
{ /* block id: 225 */
    int32_t l_433 = 0L;
    int32_t *l_434 = &l_433;
    int32_t l_435 = 0x5670EF0CL;
    int32_t l_436 = 0L;
    int32_t *l_437 = &l_436;
    int32_t *l_438[3][6] = {{&p_919->g_3,(void*)0,(void*)0,&p_919->g_3,&p_919->g_3,(void*)0},{&p_919->g_3,(void*)0,(void*)0,&p_919->g_3,&p_919->g_3,(void*)0},{&p_919->g_3,(void*)0,(void*)0,&p_919->g_3,&p_919->g_3,(void*)0}};
    int64_t l_439 = 1L;
    uint32_t l_440 = 5UL;
    uint8_t ***l_450[3];
    uint64_t l_457[5][2];
    int8_t *l_458 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_450[i] = &p_919->g_314;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_457[i][j] = 0xF38A615054DA6279L;
    }
    --l_440;
    for (p_919->g_170 = 0; (p_919->g_170 >= 47); p_919->g_170 = safe_add_func_int16_t_s_s(p_919->g_170, 5))
    { /* block id: 229 */
        int32_t **l_449 = &l_438[2][2];
        uint64_t *l_451 = (void*)0;
        int32_t l_456 = 0x21E5E827L;
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_919->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u((*l_434), (((l_449 == &p_919->g_191[6]) ^ ((((&p_919->g_314 == l_450[2]) < (((VECTOR(int32_t, 4))(0x745EAAAFL, (*l_437), 0x6B9FD483L, 2L)).y <= 4L)) && ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(8UL, 0x96L)).yxxx)).zxxyyyzyxxyzzwyx)).s3d)))).yyyxxyxxyxyyyyxy, ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(((--p_919->g_364) <= (p_919->g_455 ^= (p_919->g_454[3] , p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]))), l_456, 0UL, 255UL, l_457[4][1], (*l_437), 248UL, 0x8BL)).hi, ((VECTOR(uint8_t, 4))(3UL))))).yzwyywxyyzxxxyyw))), ((VECTOR(uint8_t, 16))(251UL))))).s5) , l_456)) && l_456))))), 10))][(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]));
    }
    atomic_min(&p_919->g_atomic_reduction[get_linear_group_id()], (*p_139));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_919->v_collective += p_919->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_458;
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_156 p_919->g_157 p_919->g_128 p_919->l_comm_values p_919->g_170 p_919->g_111 p_919->g_186 p_919->g_107 p_919->g_193 p_919->g_104 p_919->g_192 p_919->g_180 p_919->g_178 p_919->g_313
 * writes: p_919->g_170 p_919->g_178 p_919->g_107 p_919->g_191 p_919->g_192 p_919->g_180 p_919->g_314
 */
int8_t * func_140(uint64_t  p_141, int64_t  p_142, int32_t * p_143, struct S1 * p_919)
{ /* block id: 88 */
    VECTOR(uint32_t, 4) l_155 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x0356080FL), 0x0356080FL);
    VECTOR(uint32_t, 4) l_158 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 4294967295UL), 4294967295UL);
    VECTOR(uint64_t, 2) l_163 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
    VECTOR(uint16_t, 8) l_166 = (VECTOR(uint16_t, 8))(0x879EL, (VECTOR(uint16_t, 4))(0x879EL, (VECTOR(uint16_t, 2))(0x879EL, 3UL), 3UL), 3UL, 0x879EL, 3UL);
    uint32_t *l_169 = &p_919->g_170;
    uint32_t *l_173 = (void*)0;
    uint32_t *l_174[4];
    int32_t l_176 = 0L;
    uint8_t *l_177 = &p_919->g_178;
    uint64_t *l_179[9][8][3] = {{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}},{{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180},{&p_919->g_180,&p_919->g_180,&p_919->g_180}}};
    int32_t l_181 = 0L;
    int32_t *l_183 = &p_919->g_107;
    uint32_t l_263[4] = {0x947417E1L,0x947417E1L,0x947417E1L,0x947417E1L};
    uint16_t *l_297 = (void*)0;
    VECTOR(int16_t, 4) l_300 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7D6AL), 0x7D6AL);
    VECTOR(uint16_t, 4) l_302 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x04DFL), 0x04DFL);
    VECTOR(uint32_t, 4) l_303 = (VECTOR(uint32_t, 4))(0xAC34EDC8L, (VECTOR(uint32_t, 2))(0xAC34EDC8L, 0x440DD2EEL), 0x440DD2EEL);
    VECTOR(int16_t, 4) l_325 = (VECTOR(int16_t, 4))(0x270EL, (VECTOR(int16_t, 2))(0x270EL, 0x20A6L), 0x20A6L);
    VECTOR(int8_t, 16) l_350 = (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 0x04L), 0x04L), 0x04L, 0x26L, 0x04L, (VECTOR(int8_t, 2))(0x26L, 0x04L), (VECTOR(int8_t, 2))(0x26L, 0x04L), 0x26L, 0x04L, 0x26L, 0x04L);
    VECTOR(int8_t, 2) l_352 = (VECTOR(int8_t, 2))(0x19L, (-5L));
    VECTOR(uint32_t, 2) l_376 = (VECTOR(uint32_t, 2))(0x7385F6E0L, 0x6000F448L);
    VECTOR(uint16_t, 16) l_388 = (VECTOR(uint16_t, 16))(0xC3EBL, (VECTOR(uint16_t, 4))(0xC3EBL, (VECTOR(uint16_t, 2))(0xC3EBL, 0xF789L), 0xF789L), 0xF789L, 0xC3EBL, 0xF789L, (VECTOR(uint16_t, 2))(0xC3EBL, 0xF789L), (VECTOR(uint16_t, 2))(0xC3EBL, 0xF789L), 0xC3EBL, 0xF789L, 0xC3EBL, 0xF789L);
    uint8_t l_407 = 254UL;
    VECTOR(int32_t, 16) l_412 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5AB6E7A9L), 0x5AB6E7A9L), 0x5AB6E7A9L, 0L, 0x5AB6E7A9L, (VECTOR(int32_t, 2))(0L, 0x5AB6E7A9L), (VECTOR(int32_t, 2))(0L, 0x5AB6E7A9L), 0L, 0x5AB6E7A9L, 0L, 0x5AB6E7A9L);
    uint32_t l_427 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_174[i] = &p_919->g_175[6];
    if ((func_144(((!p_142) , func_146(func_152((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_155.zxwywzzx)).s30))).xyyyxyxx, ((VECTOR(uint32_t, 2))(p_919->g_156.xx)).yyxxyyxy))), 8UL, ((VECTOR(uint32_t, 2))(p_919->g_157.s2f)), p_919->g_128.s6, 4UL, 0xBC813BEDL, 4294967286UL)).sdc)).xxyx, ((VECTOR(uint32_t, 16))(l_158.ywzzxxwzxzzyzyzz)).sfa3a))).even)).hi , (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(l_158.w, 251UL)) < 0x06L), (l_158.z | ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_163.xyyx)).ywxxwzxyzywxxzxw)).se)))), ((safe_sub_func_uint64_t_u_u(l_155.z, ((l_181 = (p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))] != ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(l_166.s01630364)).lo, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))((((*l_169) &= FAKE_DIVERGE(p_919->local_2_offset, get_local_id(2), 10)) <= (((*l_177) = (((l_176 |= (safe_mod_func_uint16_t_u_u(l_158.x, p_141))) || (*p_143)) || 1UL)) <= p_142)), ((VECTOR(uint16_t, 2))(65535UL)), 0x4307L)).lo, ((VECTOR(uint16_t, 2))(9UL)), ((VECTOR(uint16_t, 2))(1UL))))).xxyy))).w)) , 0x54BB3A84E4E45EC4L))) , 0xD1C8F596266F9EC2L), p_919), p_141, p_141, l_183, l_177, p_919)), p_919) & p_142))
    { /* block id: 120 */
        l_176 ^= ((*l_183) &= 0x29BA8A56L);
    }
    else
    { /* block id: 123 */
        uint8_t l_218[3];
        int8_t *l_219[3][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_218[i] = 0x38L;
        for (p_919->g_192 = 0; (p_919->g_192 > 28); p_919->g_192 = safe_add_func_uint32_t_u_u(p_919->g_192, 9))
        { /* block id: 126 */
            VECTOR(int32_t, 8) l_216 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 5L), 5L), 5L, 9L, 5L);
            int i;
            for (l_181 = 0; (l_181 <= (-4)); l_181 = safe_sub_func_uint64_t_u_u(l_181, 4))
            { /* block id: 129 */
                int32_t *l_217[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_176 = ((*l_183) = ((VECTOR(int32_t, 16))(l_216.s7321345053713257)).s4);
            }
            if ((*p_143))
                continue;
            if (l_218[2])
                continue;
            return l_219[1][3][0];
        }
    }
    (*l_183) = 0x44E39F24L;
    for (p_919->g_180 = (-3); (p_919->g_180 == 36); p_919->g_180 = safe_add_func_int8_t_s_s(p_919->g_180, 8))
    { /* block id: 141 */
        int32_t l_224[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        VECTOR(int32_t, 8) l_262 = (VECTOR(int32_t, 8))(0x59803E45L, (VECTOR(int32_t, 4))(0x59803E45L, (VECTOR(int32_t, 2))(0x59803E45L, 0x7E5032B2L), 0x7E5032B2L), 0x7E5032B2L, 0x59803E45L, 0x7E5032B2L);
        int32_t l_271 = 0x309D902BL;
        uint32_t l_308 = 4294967289UL;
        int64_t *l_330 = (void*)0;
        uint8_t ***l_331 = &p_919->g_314;
        uint32_t l_332[2][10] = {{4294967288UL,4294967288UL,7UL,4294967292UL,4294967287UL,4294967292UL,7UL,4294967288UL,4294967288UL,7UL},{4294967288UL,4294967288UL,7UL,4294967292UL,4294967287UL,4294967292UL,7UL,4294967288UL,4294967288UL,7UL}};
        VECTOR(int32_t, 8) l_337 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L);
        uint8_t l_381 = 0x1CL;
        int32_t *l_383[3];
        uint8_t *l_405 = &p_919->g_178;
        uint16_t *l_418[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 3; i++)
            l_383[i] = &p_919->g_192;
        if (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_919->g_222.zy)), 0x5381760DL, (-6L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_919->g_223.s17)), 0x6DB7C819L, 0x4FF15DA5L))))).y)
        { /* block id: 142 */
            if (l_224[7])
                break;
            return l_177;
        }
        else
        { /* block id: 145 */
            uint32_t l_237 = 0xFA7C6809L;
            int16_t l_282 = 0L;
            int32_t l_284 = 0L;
            int32_t l_287[3][5][10] = {{{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)}},{{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)}},{{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)},{(-9L),(-1L),0x13C50D65L,0x4DC45FFFL,0x27CF50B0L,0x102A2020L,0x13C50D65L,0x27CF50B0L,(-9L),(-1L)}}};
            uint16_t *l_295 = (void*)0;
            uint8_t **l_311 = &l_177;
            uint8_t ***l_312 = (void*)0;
            int i, j, k;
            for (p_919->g_170 = 12; (p_919->g_170 > 54); p_919->g_170++)
            { /* block id: 148 */
                int8_t *l_251 = (void*)0;
                int32_t l_273 = 0x4D734A93L;
                uint16_t **l_296 = &l_295;
                VECTOR(uint16_t, 2) l_301 = (VECTOR(uint16_t, 2))(1UL, 0x2015L);
                int32_t *l_304 = (void*)0;
                int32_t *l_305 = &l_176;
                int32_t *l_306 = &l_287[0][0][7];
                int32_t *l_307[7];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_307[i] = (void*)0;
                for (p_919->g_107 = 0; (p_919->g_107 >= (-18)); p_919->g_107--)
                { /* block id: 151 */
                    VECTOR(int8_t, 4) l_231 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x25L), 0x25L);
                    int32_t *l_234 = (void*)0;
                    uint16_t *l_264 = (void*)0;
                    uint16_t *l_265 = (void*)0;
                    uint16_t *l_266 = (void*)0;
                    uint16_t *l_267 = (void*)0;
                    uint16_t *l_268 = (void*)0;
                    uint16_t *l_269 = (void*)0;
                    uint16_t *l_270[1];
                    int8_t *l_274 = (void*)0;
                    int8_t *l_275 = (void*)0;
                    int8_t *l_276 = (void*)0;
                    int8_t *l_277 = (void*)0;
                    int8_t *l_278 = (void*)0;
                    int8_t *l_279 = (void*)0;
                    int8_t *l_280 = (void*)0;
                    int8_t *l_281 = (void*)0;
                    int8_t *l_283 = (void*)0;
                    int32_t *l_286 = &l_181;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_270[i] = (void*)0;
                    l_176 = (safe_rshift_func_int8_t_s_s(p_141, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_231.zy)).yyyx)).yxxwxwwywwxzxxxx)).s0));
                    p_143 = p_143;
                    l_287[0][0][7] ^= (safe_mod_func_uint16_t_u_u((l_237 && ((safe_lshift_func_uint8_t_u_s(((*l_177)--), 1)) , (safe_mod_func_uint8_t_u_u((((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((FAKE_DIVERGE(p_919->group_2_offset, get_group_id(2), 10) == (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(p_919->g_246.s4377)).odd, (int8_t)(safe_mul_func_uint8_t_u_u((((*l_286) = ((safe_add_func_uint32_t_u_u(((((void*)0 != l_251) <= (p_919->g_285 = (l_237 == (((~p_141) >= ((l_284 = ((p_919->g_175[6] = (*l_183)) || (safe_lshift_func_int16_t_s_s((~(safe_lshift_func_int8_t_s_u((l_282 &= (safe_add_func_uint64_t_u_u(((p_919->g_272 = (((l_271 |= (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((l_262.s0 = 0x75L), 5)), l_263[3]))) || p_141) & 6UL)) , l_273), (*l_183)))), 0))), 5)))) ^ p_919->g_3)) != l_273)))) != 0x59E19FCCL), 0x0BDBB942L)) <= p_919->g_104)) ^ p_141), p_919->l_comm_values[(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]))))).xyxxyxyx)).hi, ((VECTOR(int8_t, 4))(0L))))).x, (-8L)))) < (*l_183)), 0x38290221L, (*p_143), 1L, ((VECTOR(int32_t, 8))(0x62196DACL)), (-4L), ((VECTOR(int32_t, 2))(3L)), (-8L))).sda2e, ((VECTOR(int32_t, 4))(0L))))).y & (*p_143)), p_141)))), p_919->g_180));
                    if ((atomic_inc(&p_919->l_atomic_input[23]) == 4))
                    { /* block id: 165 */
                        union U0 l_289 = {255UL};/* VOLATILE GLOBAL l_289 */
                        union U0 *l_288[5][2] = {{&l_289,(void*)0},{&l_289,(void*)0},{&l_289,(void*)0},{&l_289,(void*)0},{&l_289,(void*)0}};
                        int16_t l_290 = 0x4661L;
                        uint32_t l_291 = 0xD2197297L;
                        int16_t l_292 = 0x2F36L;
                        uint32_t l_293 = 4294967295UL;
                        int64_t l_294 = 0x7D63D2776EE0DA89L;
                        int i, j;
                        l_288[3][0] = (void*)0;
                        l_290 |= 0x439DABB6L;
                        l_292 = l_291;
                        l_294 = l_293;
                        unsigned int result = 0;
                        result += l_289.f0;
                        result += l_289.f1;
                        result += l_289.f2;
                        result += l_289.f3;
                        result += l_289.f4;
                        result += l_290;
                        result += l_291;
                        result += l_292;
                        result += l_293;
                        result += l_294;
                        atomic_add(&p_919->l_special_values[23], result);
                    }
                    else
                    { /* block id: 170 */
                        (1 + 1);
                    }
                }
                (*l_183) &= ((p_141 | (((*l_296) = l_295) == l_297)) >= (safe_lshift_func_int8_t_s_u(1L, 4)));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_919->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(l_300.ww)).xxxxyxyxyyyxyyxx, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_301.xxxx)).zzxzwyyy)).s25)).xyyyyxyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_302.xywzwwyz))))))).s1347650144472666))).hi)).lo)))).wxxwzxxw)).s6 < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_303.xwzwxzyy)))).s4), 10))][(safe_mod_func_uint32_t_u_u(p_919->tid, 56))]));
                --l_308;
            }
            (*p_919->g_313) = l_311;
            if ((*p_143))
                break;
        }
    }
    return l_177;
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_107 p_919->g_193 p_919->g_104
 * writes: p_919->g_107 p_919->g_191
 */
uint32_t  func_144(int8_t ** p_145, struct S1 * p_919)
{ /* block id: 97 */
    int32_t *l_190[5];
    int i;
    for (i = 0; i < 5; i++)
        l_190[i] = &p_919->g_3;
    for (p_919->g_107 = (-21); (p_919->g_107 >= (-6)); p_919->g_107++)
    { /* block id: 100 */
        p_919->g_191[4] = l_190[1];
        (*p_919->g_193) = l_190[1];
    }
    if ((atomic_inc(&p_919->g_atomic_input[28 * get_linear_group_id() + 22]) == 7))
    { /* block id: 105 */
        int32_t l_194[2][6] = {{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}};
        int16_t l_195 = 0x3B2AL;
        int64_t l_196[9][8] = {{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L},{0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L,0x5564FFCE4AA4CFADL,0x5C6CDFC5EED3F469L,0x5C6CDFC5EED3F469L,0x5564FFCE4AA4CFADL,0x63CC8D63AE929E16L}};
        int32_t *l_210[2];
        int32_t *l_211 = &l_194[0][2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_210[i] = &l_194[0][0];
        l_196[1][4] ^= (l_194[0][0] , l_195);
        for (l_196[1][4] = 0; (l_196[1][4] > (-11)); l_196[1][4] = safe_sub_func_int32_t_s_s(l_196[1][4], 1))
        { /* block id: 109 */
            uint64_t l_199 = 18446744073709551615UL;
            VECTOR(int32_t, 8) l_200 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6AF4D012L), 0x6AF4D012L), 0x6AF4D012L, 0L, 0x6AF4D012L);
            VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0x1D81846CL, (VECTOR(int32_t, 4))(0x1D81846CL, (VECTOR(int32_t, 2))(0x1D81846CL, 0x7867E220L), 0x7867E220L), 0x7867E220L, 0x1D81846CL, 0x7867E220L, (VECTOR(int32_t, 2))(0x1D81846CL, 0x7867E220L), (VECTOR(int32_t, 2))(0x1D81846CL, 0x7867E220L), 0x1D81846CL, 0x7867E220L, 0x1D81846CL, 0x7867E220L);
            int16_t l_202 = 0x4A48L;
            int16_t l_203 = (-5L);
            VECTOR(int16_t, 2) l_204 = (VECTOR(int16_t, 2))(0x5C10L, 1L);
            uint16_t l_205 = 5UL;
            uint64_t l_206 = 0UL;
            VECTOR(int32_t, 4) l_207 = (VECTOR(int32_t, 4))(0x5E6D0335L, (VECTOR(int32_t, 2))(0x5E6D0335L, 0x4AA67D54L), 0x4AA67D54L);
            uint32_t l_208 = 4294967294UL;
            uint32_t l_209 = 4294967288UL;
            int i;
            l_207.y = (l_209 = (l_199 , ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x539769A4L, 5L)).xyxxxxyxxyyyxyxy, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_200.s3210)).odd, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_201.s23ee)).yzwyzwww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_202, l_203, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_204.yyxxxxxy)).hi, ((VECTOR(uint16_t, 4))(65526UL, 65534UL, 0x5084L, 0xD8AAL))))), 3L, 1L)).s72, ((VECTOR(int32_t, 2))((-4L), 1L))))), 0x73B3AB43L, 0x3164FAC5L, (l_206 = (l_194[1][0] = l_205)), 9L, 0L, 0x7A3C9018L)), ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_207.wwxwxzxzzxwzzzxw)).s3894))).xywzwwwx))).odd, ((VECTOR(int32_t, 4))(9L, l_208, 0x05730134L, 0x1636CA5EL))))).hi))).xxyxxyxyxyyxxyxy, ((VECTOR(int32_t, 2))(0x2D85E001L, 0x71F42B0BL)).yyxxxyyxxxyyyxxx))).s5));
        }
        l_211 = l_210[1];
        unsigned int result = 0;
        int l_194_i0, l_194_i1;
        for (l_194_i0 = 0; l_194_i0 < 2; l_194_i0++) {
            for (l_194_i1 = 0; l_194_i1 < 6; l_194_i1++) {
                result += l_194[l_194_i0][l_194_i1];
            }
        }
        result += l_195;
        int l_196_i0, l_196_i1;
        for (l_196_i0 = 0; l_196_i0 < 9; l_196_i0++) {
            for (l_196_i1 = 0; l_196_i1 < 8; l_196_i1++) {
                result += l_196[l_196_i0][l_196_i1];
            }
        }
        atomic_add(&p_919->g_special_values[28 * get_linear_group_id() + 22], result);
    }
    else
    { /* block id: 116 */
        (1 + 1);
    }
    return p_919->g_104;
}


/* ------------------------------------------ */
/* 
 * reads : p_919->g_186
 * writes:
 */
int8_t ** func_146(int8_t * p_147, int32_t  p_148, int64_t  p_149, int32_t * p_150, int8_t * p_151, struct S1 * p_919)
{ /* block id: 95 */
    int8_t *l_185 = (void*)0;
    int8_t **l_184 = &l_185;
    return p_919->g_186[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_152(uint64_t  p_153, uint64_t  p_154, struct S1 * p_919)
{ /* block id: 93 */
    int8_t *l_182 = (void*)0;
    return l_182;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[28];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 28; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_comm_values[i] = 1;
    struct S1 c_920;
    struct S1* p_919 = &c_920;
    struct S1 c_921 = {
        (-6L), // p_919->g_2
        0x1CA2961CL, // p_919->g_3
        (-1L), // p_919->g_104
        1L, // p_919->g_105
        0x3996F1E1L, // p_919->g_106
        (-10L), // p_919->g_107
        (-3L), // p_919->g_110
        0x4C82FA94L, // p_919->g_111
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 6L), 6L), 6L, 8L, 6L), // p_919->g_128
        (VECTOR(uint32_t, 2))(0x7D7012D8L, 0xCC97E973L), // p_919->g_156
        (VECTOR(uint32_t, 16))(0x0D3CD378L, (VECTOR(uint32_t, 4))(0x0D3CD378L, (VECTOR(uint32_t, 2))(0x0D3CD378L, 0xF9525C66L), 0xF9525C66L), 0xF9525C66L, 0x0D3CD378L, 0xF9525C66L, (VECTOR(uint32_t, 2))(0x0D3CD378L, 0xF9525C66L), (VECTOR(uint32_t, 2))(0x0D3CD378L, 0xF9525C66L), 0x0D3CD378L, 0xF9525C66L, 0x0D3CD378L, 0xF9525C66L), // p_919->g_157
        6UL, // p_919->g_170
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_919->g_175
        1UL, // p_919->g_178
        18446744073709551612UL, // p_919->g_180
        (void*)0, // p_919->g_187
        {&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187,&p_919->g_187}, // p_919->g_186
        0x660699C9L, // p_919->g_192
        {&p_919->g_192,&p_919->g_192,&p_919->g_192,&p_919->g_192,&p_919->g_192,&p_919->g_192,&p_919->g_192,&p_919->g_192}, // p_919->g_191
        &p_919->g_191[4], // p_919->g_193
        (VECTOR(int32_t, 4))(0x0C506045L, (VECTOR(int32_t, 2))(0x0C506045L, 0x6E1E9FABL), 0x6E1E9FABL), // p_919->g_222
        (VECTOR(int32_t, 8))(0x25108633L, (VECTOR(int32_t, 4))(0x25108633L, (VECTOR(int32_t, 2))(0x25108633L, (-1L)), (-1L)), (-1L), 0x25108633L, (-1L)), // p_919->g_223
        (void*)0, // p_919->g_232
        (void*)0, // p_919->g_233
        (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x73L), 0x73L), 0x73L, 9L, 0x73L), // p_919->g_246
        0x730B7929L, // p_919->g_272
        0L, // p_919->g_285
        {{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178},{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178},{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178},{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178},{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178},{&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178,&p_919->g_178}}, // p_919->g_315
        &p_919->g_315[2][8], // p_919->g_314
        &p_919->g_314, // p_919->g_313
        (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 2L), 2L), 2L, 0x64L, 2L), // p_919->g_320
        (VECTOR(int8_t, 8))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 1L), 1L), 1L, 0x43L, 1L), // p_919->g_351
        0x7381538AE9199FA5L, // p_919->g_364
        0x09181EA9L, // p_919->g_370
        0x7D0187A29230249BL, // p_919->g_380
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 5UL), 5UL), 5UL, 65535UL, 5UL, (VECTOR(uint16_t, 2))(65535UL, 5UL), (VECTOR(uint16_t, 2))(65535UL, 5UL), 65535UL, 5UL, 65535UL, 5UL), // p_919->g_387
        (VECTOR(uint16_t, 2))(0x6AB7L, 0x7C74L), // p_919->g_390
        (VECTOR(uint16_t, 4))(0x5560L, (VECTOR(uint16_t, 2))(0x5560L, 7UL), 7UL), // p_919->g_391
        (VECTOR(int16_t, 2))(0L, 2L), // p_919->g_406
        {{0x13L},{0x13L},{0x13L},{0x13L},{0x13L}}, // p_919->g_454
        0x08321351DA7BA3E6L, // p_919->g_455
        &p_919->g_191[4], // p_919->g_460
        0x234B16F6DAA739D2L, // p_919->g_475
        (VECTOR(int64_t, 16))(0x1768309D5EF3E9B5L, (VECTOR(int64_t, 4))(0x1768309D5EF3E9B5L, (VECTOR(int64_t, 2))(0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L), 0x3D92E97ACBA64E35L), 0x3D92E97ACBA64E35L, 0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L, (VECTOR(int64_t, 2))(0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L), (VECTOR(int64_t, 2))(0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L), 0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L, 0x1768309D5EF3E9B5L, 0x3D92E97ACBA64E35L), // p_919->g_481
        4L, // p_919->g_483
        (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x7DL), 0x7DL), // p_919->g_486
        0L, // p_919->g_490
        0x6FE4L, // p_919->g_492
        0x2D16L, // p_919->g_499
        (void*)0, // p_919->g_521
        0x0AL, // p_919->g_527
        (VECTOR(uint64_t, 2))(0x5040EEC1F7E90F04L, 5UL), // p_919->g_540
        {6UL}, // p_919->g_572
        {&p_919->g_572,&p_919->g_572,&p_919->g_572,&p_919->g_572}, // p_919->g_571
        {{2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L}}, // p_919->g_574
        {248UL}, // p_919->g_576
        {65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL}, // p_919->g_591
        (VECTOR(uint32_t, 4))(0x4C5C1323L, (VECTOR(uint32_t, 2))(0x4C5C1323L, 0x7FE68BCBL), 0x7FE68BCBL), // p_919->g_606
        (VECTOR(uint64_t, 8))(0x4723ACC63EBEA7EFL, (VECTOR(uint64_t, 4))(0x4723ACC63EBEA7EFL, (VECTOR(uint64_t, 2))(0x4723ACC63EBEA7EFL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x4723ACC63EBEA7EFL, 18446744073709551615UL), // p_919->g_609
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 2L), 2L), 2L, 0L, 2L), // p_919->g_614
        {0x8FL}, // p_919->g_636
        (VECTOR(int8_t, 2))(0x39L, 0x19L), // p_919->g_639
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x30L), 0x30L), // p_919->g_640
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 248UL), 248UL), 248UL, 255UL, 248UL, (VECTOR(uint8_t, 2))(255UL, 248UL), (VECTOR(uint8_t, 2))(255UL, 248UL), 255UL, 248UL, 255UL, 248UL), // p_919->g_643
        {{{{0xC0L},{0xC0L},{0xC0L},{0xC0L},{0xC0L},{0xC0L}}}}, // p_919->g_651
        0x4026L, // p_919->g_655
        0x1390B91FL, // p_919->g_659
        {4UL}, // p_919->g_662
        (VECTOR(uint8_t, 8))(0xE8L, (VECTOR(uint8_t, 4))(0xE8L, (VECTOR(uint8_t, 2))(0xE8L, 0xADL), 0xADL), 0xADL, 0xE8L, 0xADL), // p_919->g_695
        (VECTOR(uint8_t, 8))(0xF0L, (VECTOR(uint8_t, 4))(0xF0L, (VECTOR(uint8_t, 2))(0xF0L, 246UL), 246UL), 246UL, 0xF0L, 246UL), // p_919->g_696
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xACL), 0xACL), 0xACL, 0UL, 0xACL), // p_919->g_702
        &p_919->g_191[4], // p_919->g_703
        (VECTOR(int16_t, 16))(0x730DL, (VECTOR(int16_t, 4))(0x730DL, (VECTOR(int16_t, 2))(0x730DL, 9L), 9L), 9L, 0x730DL, 9L, (VECTOR(int16_t, 2))(0x730DL, 9L), (VECTOR(int16_t, 2))(0x730DL, 9L), 0x730DL, 9L, 0x730DL, 9L), // p_919->g_707
        (VECTOR(int16_t, 2))(0x2579L, 0x4877L), // p_919->g_709
        (VECTOR(int16_t, 8))(0x5659L, (VECTOR(int16_t, 4))(0x5659L, (VECTOR(int16_t, 2))(0x5659L, 0x0967L), 0x0967L), 0x0967L, 0x5659L, 0x0967L), // p_919->g_715
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL), // p_919->g_717
        {0x13L}, // p_919->g_720
        (VECTOR(int64_t, 4))(0x5809D63F88162D68L, (VECTOR(int64_t, 2))(0x5809D63F88162D68L, 0L), 0L), // p_919->g_721
        (-3L), // p_919->g_723
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x105CA2A2D32EC9A9L), // p_919->g_724
        {5UL,0x9BL,5UL,5UL,0x9BL,5UL,5UL}, // p_919->g_727
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1D60781C2816BFDFL), 0x1D60781C2816BFDFL), 0x1D60781C2816BFDFL, 1L, 0x1D60781C2816BFDFL, (VECTOR(int64_t, 2))(1L, 0x1D60781C2816BFDFL), (VECTOR(int64_t, 2))(1L, 0x1D60781C2816BFDFL), 1L, 0x1D60781C2816BFDFL, 1L, 0x1D60781C2816BFDFL), // p_919->g_740
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_919->g_741
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int64_t, 2))((-1L), 4L), (VECTOR(int64_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L), // p_919->g_743
        (VECTOR(int64_t, 16))(0x308E8E0E301991EBL, (VECTOR(int64_t, 4))(0x308E8E0E301991EBL, (VECTOR(int64_t, 2))(0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L), 0x1F044CDC8BE5F674L), 0x1F044CDC8BE5F674L, 0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L, (VECTOR(int64_t, 2))(0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L), (VECTOR(int64_t, 2))(0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L), 0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L, 0x308E8E0E301991EBL, 0x1F044CDC8BE5F674L), // p_919->g_746
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x8DL), 0x8DL), 0x8DL, 1UL, 0x8DL), // p_919->g_765
        {255UL}, // p_919->g_850
        0x3C525FA8L, // p_919->g_851
        {254UL}, // p_919->g_881
        (VECTOR(int64_t, 8))(0x648066C838200D5DL, (VECTOR(int64_t, 4))(0x648066C838200D5DL, (VECTOR(int64_t, 2))(0x648066C838200D5DL, 0L), 0L), 0L, 0x648066C838200D5DL, 0L), // p_919->g_888
        &p_919->g_3, // p_919->g_911
        0, // p_919->v_collective
        sequence_input[get_global_id(0)], // p_919->global_0_offset
        sequence_input[get_global_id(1)], // p_919->global_1_offset
        sequence_input[get_global_id(2)], // p_919->global_2_offset
        sequence_input[get_local_id(0)], // p_919->local_0_offset
        sequence_input[get_local_id(1)], // p_919->local_1_offset
        sequence_input[get_local_id(2)], // p_919->local_2_offset
        sequence_input[get_group_id(0)], // p_919->group_0_offset
        sequence_input[get_group_id(1)], // p_919->group_1_offset
        sequence_input[get_group_id(2)], // p_919->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_919->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_920 = c_921;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_919);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_919->g_2, "p_919->g_2", print_hash_value);
    transparent_crc(p_919->g_3, "p_919->g_3", print_hash_value);
    transparent_crc(p_919->g_104, "p_919->g_104", print_hash_value);
    transparent_crc(p_919->g_105, "p_919->g_105", print_hash_value);
    transparent_crc(p_919->g_106, "p_919->g_106", print_hash_value);
    transparent_crc(p_919->g_107, "p_919->g_107", print_hash_value);
    transparent_crc(p_919->g_110, "p_919->g_110", print_hash_value);
    transparent_crc(p_919->g_111, "p_919->g_111", print_hash_value);
    transparent_crc(p_919->g_128.s0, "p_919->g_128.s0", print_hash_value);
    transparent_crc(p_919->g_128.s1, "p_919->g_128.s1", print_hash_value);
    transparent_crc(p_919->g_128.s2, "p_919->g_128.s2", print_hash_value);
    transparent_crc(p_919->g_128.s3, "p_919->g_128.s3", print_hash_value);
    transparent_crc(p_919->g_128.s4, "p_919->g_128.s4", print_hash_value);
    transparent_crc(p_919->g_128.s5, "p_919->g_128.s5", print_hash_value);
    transparent_crc(p_919->g_128.s6, "p_919->g_128.s6", print_hash_value);
    transparent_crc(p_919->g_128.s7, "p_919->g_128.s7", print_hash_value);
    transparent_crc(p_919->g_156.x, "p_919->g_156.x", print_hash_value);
    transparent_crc(p_919->g_156.y, "p_919->g_156.y", print_hash_value);
    transparent_crc(p_919->g_157.s0, "p_919->g_157.s0", print_hash_value);
    transparent_crc(p_919->g_157.s1, "p_919->g_157.s1", print_hash_value);
    transparent_crc(p_919->g_157.s2, "p_919->g_157.s2", print_hash_value);
    transparent_crc(p_919->g_157.s3, "p_919->g_157.s3", print_hash_value);
    transparent_crc(p_919->g_157.s4, "p_919->g_157.s4", print_hash_value);
    transparent_crc(p_919->g_157.s5, "p_919->g_157.s5", print_hash_value);
    transparent_crc(p_919->g_157.s6, "p_919->g_157.s6", print_hash_value);
    transparent_crc(p_919->g_157.s7, "p_919->g_157.s7", print_hash_value);
    transparent_crc(p_919->g_157.s8, "p_919->g_157.s8", print_hash_value);
    transparent_crc(p_919->g_157.s9, "p_919->g_157.s9", print_hash_value);
    transparent_crc(p_919->g_157.sa, "p_919->g_157.sa", print_hash_value);
    transparent_crc(p_919->g_157.sb, "p_919->g_157.sb", print_hash_value);
    transparent_crc(p_919->g_157.sc, "p_919->g_157.sc", print_hash_value);
    transparent_crc(p_919->g_157.sd, "p_919->g_157.sd", print_hash_value);
    transparent_crc(p_919->g_157.se, "p_919->g_157.se", print_hash_value);
    transparent_crc(p_919->g_157.sf, "p_919->g_157.sf", print_hash_value);
    transparent_crc(p_919->g_170, "p_919->g_170", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_919->g_175[i], "p_919->g_175[i]", print_hash_value);

    }
    transparent_crc(p_919->g_178, "p_919->g_178", print_hash_value);
    transparent_crc(p_919->g_180, "p_919->g_180", print_hash_value);
    transparent_crc(p_919->g_192, "p_919->g_192", print_hash_value);
    transparent_crc(p_919->g_222.x, "p_919->g_222.x", print_hash_value);
    transparent_crc(p_919->g_222.y, "p_919->g_222.y", print_hash_value);
    transparent_crc(p_919->g_222.z, "p_919->g_222.z", print_hash_value);
    transparent_crc(p_919->g_222.w, "p_919->g_222.w", print_hash_value);
    transparent_crc(p_919->g_223.s0, "p_919->g_223.s0", print_hash_value);
    transparent_crc(p_919->g_223.s1, "p_919->g_223.s1", print_hash_value);
    transparent_crc(p_919->g_223.s2, "p_919->g_223.s2", print_hash_value);
    transparent_crc(p_919->g_223.s3, "p_919->g_223.s3", print_hash_value);
    transparent_crc(p_919->g_223.s4, "p_919->g_223.s4", print_hash_value);
    transparent_crc(p_919->g_223.s5, "p_919->g_223.s5", print_hash_value);
    transparent_crc(p_919->g_223.s6, "p_919->g_223.s6", print_hash_value);
    transparent_crc(p_919->g_223.s7, "p_919->g_223.s7", print_hash_value);
    transparent_crc(p_919->g_246.s0, "p_919->g_246.s0", print_hash_value);
    transparent_crc(p_919->g_246.s1, "p_919->g_246.s1", print_hash_value);
    transparent_crc(p_919->g_246.s2, "p_919->g_246.s2", print_hash_value);
    transparent_crc(p_919->g_246.s3, "p_919->g_246.s3", print_hash_value);
    transparent_crc(p_919->g_246.s4, "p_919->g_246.s4", print_hash_value);
    transparent_crc(p_919->g_246.s5, "p_919->g_246.s5", print_hash_value);
    transparent_crc(p_919->g_246.s6, "p_919->g_246.s6", print_hash_value);
    transparent_crc(p_919->g_246.s7, "p_919->g_246.s7", print_hash_value);
    transparent_crc(p_919->g_272, "p_919->g_272", print_hash_value);
    transparent_crc(p_919->g_285, "p_919->g_285", print_hash_value);
    transparent_crc(p_919->g_320.s0, "p_919->g_320.s0", print_hash_value);
    transparent_crc(p_919->g_320.s1, "p_919->g_320.s1", print_hash_value);
    transparent_crc(p_919->g_320.s2, "p_919->g_320.s2", print_hash_value);
    transparent_crc(p_919->g_320.s3, "p_919->g_320.s3", print_hash_value);
    transparent_crc(p_919->g_320.s4, "p_919->g_320.s4", print_hash_value);
    transparent_crc(p_919->g_320.s5, "p_919->g_320.s5", print_hash_value);
    transparent_crc(p_919->g_320.s6, "p_919->g_320.s6", print_hash_value);
    transparent_crc(p_919->g_320.s7, "p_919->g_320.s7", print_hash_value);
    transparent_crc(p_919->g_351.s0, "p_919->g_351.s0", print_hash_value);
    transparent_crc(p_919->g_351.s1, "p_919->g_351.s1", print_hash_value);
    transparent_crc(p_919->g_351.s2, "p_919->g_351.s2", print_hash_value);
    transparent_crc(p_919->g_351.s3, "p_919->g_351.s3", print_hash_value);
    transparent_crc(p_919->g_351.s4, "p_919->g_351.s4", print_hash_value);
    transparent_crc(p_919->g_351.s5, "p_919->g_351.s5", print_hash_value);
    transparent_crc(p_919->g_351.s6, "p_919->g_351.s6", print_hash_value);
    transparent_crc(p_919->g_351.s7, "p_919->g_351.s7", print_hash_value);
    transparent_crc(p_919->g_364, "p_919->g_364", print_hash_value);
    transparent_crc(p_919->g_370, "p_919->g_370", print_hash_value);
    transparent_crc(p_919->g_380, "p_919->g_380", print_hash_value);
    transparent_crc(p_919->g_387.s0, "p_919->g_387.s0", print_hash_value);
    transparent_crc(p_919->g_387.s1, "p_919->g_387.s1", print_hash_value);
    transparent_crc(p_919->g_387.s2, "p_919->g_387.s2", print_hash_value);
    transparent_crc(p_919->g_387.s3, "p_919->g_387.s3", print_hash_value);
    transparent_crc(p_919->g_387.s4, "p_919->g_387.s4", print_hash_value);
    transparent_crc(p_919->g_387.s5, "p_919->g_387.s5", print_hash_value);
    transparent_crc(p_919->g_387.s6, "p_919->g_387.s6", print_hash_value);
    transparent_crc(p_919->g_387.s7, "p_919->g_387.s7", print_hash_value);
    transparent_crc(p_919->g_387.s8, "p_919->g_387.s8", print_hash_value);
    transparent_crc(p_919->g_387.s9, "p_919->g_387.s9", print_hash_value);
    transparent_crc(p_919->g_387.sa, "p_919->g_387.sa", print_hash_value);
    transparent_crc(p_919->g_387.sb, "p_919->g_387.sb", print_hash_value);
    transparent_crc(p_919->g_387.sc, "p_919->g_387.sc", print_hash_value);
    transparent_crc(p_919->g_387.sd, "p_919->g_387.sd", print_hash_value);
    transparent_crc(p_919->g_387.se, "p_919->g_387.se", print_hash_value);
    transparent_crc(p_919->g_387.sf, "p_919->g_387.sf", print_hash_value);
    transparent_crc(p_919->g_390.x, "p_919->g_390.x", print_hash_value);
    transparent_crc(p_919->g_390.y, "p_919->g_390.y", print_hash_value);
    transparent_crc(p_919->g_391.x, "p_919->g_391.x", print_hash_value);
    transparent_crc(p_919->g_391.y, "p_919->g_391.y", print_hash_value);
    transparent_crc(p_919->g_391.z, "p_919->g_391.z", print_hash_value);
    transparent_crc(p_919->g_391.w, "p_919->g_391.w", print_hash_value);
    transparent_crc(p_919->g_406.x, "p_919->g_406.x", print_hash_value);
    transparent_crc(p_919->g_406.y, "p_919->g_406.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_919->g_454[i].f0, "p_919->g_454[i].f0", print_hash_value);

    }
    transparent_crc(p_919->g_455, "p_919->g_455", print_hash_value);
    transparent_crc(p_919->g_475, "p_919->g_475", print_hash_value);
    transparent_crc(p_919->g_481.s0, "p_919->g_481.s0", print_hash_value);
    transparent_crc(p_919->g_481.s1, "p_919->g_481.s1", print_hash_value);
    transparent_crc(p_919->g_481.s2, "p_919->g_481.s2", print_hash_value);
    transparent_crc(p_919->g_481.s3, "p_919->g_481.s3", print_hash_value);
    transparent_crc(p_919->g_481.s4, "p_919->g_481.s4", print_hash_value);
    transparent_crc(p_919->g_481.s5, "p_919->g_481.s5", print_hash_value);
    transparent_crc(p_919->g_481.s6, "p_919->g_481.s6", print_hash_value);
    transparent_crc(p_919->g_481.s7, "p_919->g_481.s7", print_hash_value);
    transparent_crc(p_919->g_481.s8, "p_919->g_481.s8", print_hash_value);
    transparent_crc(p_919->g_481.s9, "p_919->g_481.s9", print_hash_value);
    transparent_crc(p_919->g_481.sa, "p_919->g_481.sa", print_hash_value);
    transparent_crc(p_919->g_481.sb, "p_919->g_481.sb", print_hash_value);
    transparent_crc(p_919->g_481.sc, "p_919->g_481.sc", print_hash_value);
    transparent_crc(p_919->g_481.sd, "p_919->g_481.sd", print_hash_value);
    transparent_crc(p_919->g_481.se, "p_919->g_481.se", print_hash_value);
    transparent_crc(p_919->g_481.sf, "p_919->g_481.sf", print_hash_value);
    transparent_crc(p_919->g_483, "p_919->g_483", print_hash_value);
    transparent_crc(p_919->g_486.x, "p_919->g_486.x", print_hash_value);
    transparent_crc(p_919->g_486.y, "p_919->g_486.y", print_hash_value);
    transparent_crc(p_919->g_486.z, "p_919->g_486.z", print_hash_value);
    transparent_crc(p_919->g_486.w, "p_919->g_486.w", print_hash_value);
    transparent_crc(p_919->g_490, "p_919->g_490", print_hash_value);
    transparent_crc(p_919->g_492, "p_919->g_492", print_hash_value);
    transparent_crc(p_919->g_499, "p_919->g_499", print_hash_value);
    transparent_crc(p_919->g_527, "p_919->g_527", print_hash_value);
    transparent_crc(p_919->g_540.x, "p_919->g_540.x", print_hash_value);
    transparent_crc(p_919->g_540.y, "p_919->g_540.y", print_hash_value);
    transparent_crc(p_919->g_572.f0, "p_919->g_572.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_919->g_574[i][j], "p_919->g_574[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_919->g_576.f0, "p_919->g_576.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_919->g_591[i], "p_919->g_591[i]", print_hash_value);

    }
    transparent_crc(p_919->g_606.x, "p_919->g_606.x", print_hash_value);
    transparent_crc(p_919->g_606.y, "p_919->g_606.y", print_hash_value);
    transparent_crc(p_919->g_606.z, "p_919->g_606.z", print_hash_value);
    transparent_crc(p_919->g_606.w, "p_919->g_606.w", print_hash_value);
    transparent_crc(p_919->g_609.s0, "p_919->g_609.s0", print_hash_value);
    transparent_crc(p_919->g_609.s1, "p_919->g_609.s1", print_hash_value);
    transparent_crc(p_919->g_609.s2, "p_919->g_609.s2", print_hash_value);
    transparent_crc(p_919->g_609.s3, "p_919->g_609.s3", print_hash_value);
    transparent_crc(p_919->g_609.s4, "p_919->g_609.s4", print_hash_value);
    transparent_crc(p_919->g_609.s5, "p_919->g_609.s5", print_hash_value);
    transparent_crc(p_919->g_609.s6, "p_919->g_609.s6", print_hash_value);
    transparent_crc(p_919->g_609.s7, "p_919->g_609.s7", print_hash_value);
    transparent_crc(p_919->g_614.s0, "p_919->g_614.s0", print_hash_value);
    transparent_crc(p_919->g_614.s1, "p_919->g_614.s1", print_hash_value);
    transparent_crc(p_919->g_614.s2, "p_919->g_614.s2", print_hash_value);
    transparent_crc(p_919->g_614.s3, "p_919->g_614.s3", print_hash_value);
    transparent_crc(p_919->g_614.s4, "p_919->g_614.s4", print_hash_value);
    transparent_crc(p_919->g_614.s5, "p_919->g_614.s5", print_hash_value);
    transparent_crc(p_919->g_614.s6, "p_919->g_614.s6", print_hash_value);
    transparent_crc(p_919->g_614.s7, "p_919->g_614.s7", print_hash_value);
    transparent_crc(p_919->g_636.f0, "p_919->g_636.f0", print_hash_value);
    transparent_crc(p_919->g_639.x, "p_919->g_639.x", print_hash_value);
    transparent_crc(p_919->g_639.y, "p_919->g_639.y", print_hash_value);
    transparent_crc(p_919->g_640.x, "p_919->g_640.x", print_hash_value);
    transparent_crc(p_919->g_640.y, "p_919->g_640.y", print_hash_value);
    transparent_crc(p_919->g_640.z, "p_919->g_640.z", print_hash_value);
    transparent_crc(p_919->g_640.w, "p_919->g_640.w", print_hash_value);
    transparent_crc(p_919->g_643.s0, "p_919->g_643.s0", print_hash_value);
    transparent_crc(p_919->g_643.s1, "p_919->g_643.s1", print_hash_value);
    transparent_crc(p_919->g_643.s2, "p_919->g_643.s2", print_hash_value);
    transparent_crc(p_919->g_643.s3, "p_919->g_643.s3", print_hash_value);
    transparent_crc(p_919->g_643.s4, "p_919->g_643.s4", print_hash_value);
    transparent_crc(p_919->g_643.s5, "p_919->g_643.s5", print_hash_value);
    transparent_crc(p_919->g_643.s6, "p_919->g_643.s6", print_hash_value);
    transparent_crc(p_919->g_643.s7, "p_919->g_643.s7", print_hash_value);
    transparent_crc(p_919->g_643.s8, "p_919->g_643.s8", print_hash_value);
    transparent_crc(p_919->g_643.s9, "p_919->g_643.s9", print_hash_value);
    transparent_crc(p_919->g_643.sa, "p_919->g_643.sa", print_hash_value);
    transparent_crc(p_919->g_643.sb, "p_919->g_643.sb", print_hash_value);
    transparent_crc(p_919->g_643.sc, "p_919->g_643.sc", print_hash_value);
    transparent_crc(p_919->g_643.sd, "p_919->g_643.sd", print_hash_value);
    transparent_crc(p_919->g_643.se, "p_919->g_643.se", print_hash_value);
    transparent_crc(p_919->g_643.sf, "p_919->g_643.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_919->g_651[i][j][k].f0, "p_919->g_651[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_919->g_655, "p_919->g_655", print_hash_value);
    transparent_crc(p_919->g_659, "p_919->g_659", print_hash_value);
    transparent_crc(p_919->g_662.f0, "p_919->g_662.f0", print_hash_value);
    transparent_crc(p_919->g_695.s0, "p_919->g_695.s0", print_hash_value);
    transparent_crc(p_919->g_695.s1, "p_919->g_695.s1", print_hash_value);
    transparent_crc(p_919->g_695.s2, "p_919->g_695.s2", print_hash_value);
    transparent_crc(p_919->g_695.s3, "p_919->g_695.s3", print_hash_value);
    transparent_crc(p_919->g_695.s4, "p_919->g_695.s4", print_hash_value);
    transparent_crc(p_919->g_695.s5, "p_919->g_695.s5", print_hash_value);
    transparent_crc(p_919->g_695.s6, "p_919->g_695.s6", print_hash_value);
    transparent_crc(p_919->g_695.s7, "p_919->g_695.s7", print_hash_value);
    transparent_crc(p_919->g_696.s0, "p_919->g_696.s0", print_hash_value);
    transparent_crc(p_919->g_696.s1, "p_919->g_696.s1", print_hash_value);
    transparent_crc(p_919->g_696.s2, "p_919->g_696.s2", print_hash_value);
    transparent_crc(p_919->g_696.s3, "p_919->g_696.s3", print_hash_value);
    transparent_crc(p_919->g_696.s4, "p_919->g_696.s4", print_hash_value);
    transparent_crc(p_919->g_696.s5, "p_919->g_696.s5", print_hash_value);
    transparent_crc(p_919->g_696.s6, "p_919->g_696.s6", print_hash_value);
    transparent_crc(p_919->g_696.s7, "p_919->g_696.s7", print_hash_value);
    transparent_crc(p_919->g_702.s0, "p_919->g_702.s0", print_hash_value);
    transparent_crc(p_919->g_702.s1, "p_919->g_702.s1", print_hash_value);
    transparent_crc(p_919->g_702.s2, "p_919->g_702.s2", print_hash_value);
    transparent_crc(p_919->g_702.s3, "p_919->g_702.s3", print_hash_value);
    transparent_crc(p_919->g_702.s4, "p_919->g_702.s4", print_hash_value);
    transparent_crc(p_919->g_702.s5, "p_919->g_702.s5", print_hash_value);
    transparent_crc(p_919->g_702.s6, "p_919->g_702.s6", print_hash_value);
    transparent_crc(p_919->g_702.s7, "p_919->g_702.s7", print_hash_value);
    transparent_crc(p_919->g_707.s0, "p_919->g_707.s0", print_hash_value);
    transparent_crc(p_919->g_707.s1, "p_919->g_707.s1", print_hash_value);
    transparent_crc(p_919->g_707.s2, "p_919->g_707.s2", print_hash_value);
    transparent_crc(p_919->g_707.s3, "p_919->g_707.s3", print_hash_value);
    transparent_crc(p_919->g_707.s4, "p_919->g_707.s4", print_hash_value);
    transparent_crc(p_919->g_707.s5, "p_919->g_707.s5", print_hash_value);
    transparent_crc(p_919->g_707.s6, "p_919->g_707.s6", print_hash_value);
    transparent_crc(p_919->g_707.s7, "p_919->g_707.s7", print_hash_value);
    transparent_crc(p_919->g_707.s8, "p_919->g_707.s8", print_hash_value);
    transparent_crc(p_919->g_707.s9, "p_919->g_707.s9", print_hash_value);
    transparent_crc(p_919->g_707.sa, "p_919->g_707.sa", print_hash_value);
    transparent_crc(p_919->g_707.sb, "p_919->g_707.sb", print_hash_value);
    transparent_crc(p_919->g_707.sc, "p_919->g_707.sc", print_hash_value);
    transparent_crc(p_919->g_707.sd, "p_919->g_707.sd", print_hash_value);
    transparent_crc(p_919->g_707.se, "p_919->g_707.se", print_hash_value);
    transparent_crc(p_919->g_707.sf, "p_919->g_707.sf", print_hash_value);
    transparent_crc(p_919->g_709.x, "p_919->g_709.x", print_hash_value);
    transparent_crc(p_919->g_709.y, "p_919->g_709.y", print_hash_value);
    transparent_crc(p_919->g_715.s0, "p_919->g_715.s0", print_hash_value);
    transparent_crc(p_919->g_715.s1, "p_919->g_715.s1", print_hash_value);
    transparent_crc(p_919->g_715.s2, "p_919->g_715.s2", print_hash_value);
    transparent_crc(p_919->g_715.s3, "p_919->g_715.s3", print_hash_value);
    transparent_crc(p_919->g_715.s4, "p_919->g_715.s4", print_hash_value);
    transparent_crc(p_919->g_715.s5, "p_919->g_715.s5", print_hash_value);
    transparent_crc(p_919->g_715.s6, "p_919->g_715.s6", print_hash_value);
    transparent_crc(p_919->g_715.s7, "p_919->g_715.s7", print_hash_value);
    transparent_crc(p_919->g_717.s0, "p_919->g_717.s0", print_hash_value);
    transparent_crc(p_919->g_717.s1, "p_919->g_717.s1", print_hash_value);
    transparent_crc(p_919->g_717.s2, "p_919->g_717.s2", print_hash_value);
    transparent_crc(p_919->g_717.s3, "p_919->g_717.s3", print_hash_value);
    transparent_crc(p_919->g_717.s4, "p_919->g_717.s4", print_hash_value);
    transparent_crc(p_919->g_717.s5, "p_919->g_717.s5", print_hash_value);
    transparent_crc(p_919->g_717.s6, "p_919->g_717.s6", print_hash_value);
    transparent_crc(p_919->g_717.s7, "p_919->g_717.s7", print_hash_value);
    transparent_crc(p_919->g_720.f0, "p_919->g_720.f0", print_hash_value);
    transparent_crc(p_919->g_721.x, "p_919->g_721.x", print_hash_value);
    transparent_crc(p_919->g_721.y, "p_919->g_721.y", print_hash_value);
    transparent_crc(p_919->g_721.z, "p_919->g_721.z", print_hash_value);
    transparent_crc(p_919->g_721.w, "p_919->g_721.w", print_hash_value);
    transparent_crc(p_919->g_723, "p_919->g_723", print_hash_value);
    transparent_crc(p_919->g_724.x, "p_919->g_724.x", print_hash_value);
    transparent_crc(p_919->g_724.y, "p_919->g_724.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_919->g_727[i], "p_919->g_727[i]", print_hash_value);

    }
    transparent_crc(p_919->g_740.s0, "p_919->g_740.s0", print_hash_value);
    transparent_crc(p_919->g_740.s1, "p_919->g_740.s1", print_hash_value);
    transparent_crc(p_919->g_740.s2, "p_919->g_740.s2", print_hash_value);
    transparent_crc(p_919->g_740.s3, "p_919->g_740.s3", print_hash_value);
    transparent_crc(p_919->g_740.s4, "p_919->g_740.s4", print_hash_value);
    transparent_crc(p_919->g_740.s5, "p_919->g_740.s5", print_hash_value);
    transparent_crc(p_919->g_740.s6, "p_919->g_740.s6", print_hash_value);
    transparent_crc(p_919->g_740.s7, "p_919->g_740.s7", print_hash_value);
    transparent_crc(p_919->g_740.s8, "p_919->g_740.s8", print_hash_value);
    transparent_crc(p_919->g_740.s9, "p_919->g_740.s9", print_hash_value);
    transparent_crc(p_919->g_740.sa, "p_919->g_740.sa", print_hash_value);
    transparent_crc(p_919->g_740.sb, "p_919->g_740.sb", print_hash_value);
    transparent_crc(p_919->g_740.sc, "p_919->g_740.sc", print_hash_value);
    transparent_crc(p_919->g_740.sd, "p_919->g_740.sd", print_hash_value);
    transparent_crc(p_919->g_740.se, "p_919->g_740.se", print_hash_value);
    transparent_crc(p_919->g_740.sf, "p_919->g_740.sf", print_hash_value);
    transparent_crc(p_919->g_741.s0, "p_919->g_741.s0", print_hash_value);
    transparent_crc(p_919->g_741.s1, "p_919->g_741.s1", print_hash_value);
    transparent_crc(p_919->g_741.s2, "p_919->g_741.s2", print_hash_value);
    transparent_crc(p_919->g_741.s3, "p_919->g_741.s3", print_hash_value);
    transparent_crc(p_919->g_741.s4, "p_919->g_741.s4", print_hash_value);
    transparent_crc(p_919->g_741.s5, "p_919->g_741.s5", print_hash_value);
    transparent_crc(p_919->g_741.s6, "p_919->g_741.s6", print_hash_value);
    transparent_crc(p_919->g_741.s7, "p_919->g_741.s7", print_hash_value);
    transparent_crc(p_919->g_743.s0, "p_919->g_743.s0", print_hash_value);
    transparent_crc(p_919->g_743.s1, "p_919->g_743.s1", print_hash_value);
    transparent_crc(p_919->g_743.s2, "p_919->g_743.s2", print_hash_value);
    transparent_crc(p_919->g_743.s3, "p_919->g_743.s3", print_hash_value);
    transparent_crc(p_919->g_743.s4, "p_919->g_743.s4", print_hash_value);
    transparent_crc(p_919->g_743.s5, "p_919->g_743.s5", print_hash_value);
    transparent_crc(p_919->g_743.s6, "p_919->g_743.s6", print_hash_value);
    transparent_crc(p_919->g_743.s7, "p_919->g_743.s7", print_hash_value);
    transparent_crc(p_919->g_743.s8, "p_919->g_743.s8", print_hash_value);
    transparent_crc(p_919->g_743.s9, "p_919->g_743.s9", print_hash_value);
    transparent_crc(p_919->g_743.sa, "p_919->g_743.sa", print_hash_value);
    transparent_crc(p_919->g_743.sb, "p_919->g_743.sb", print_hash_value);
    transparent_crc(p_919->g_743.sc, "p_919->g_743.sc", print_hash_value);
    transparent_crc(p_919->g_743.sd, "p_919->g_743.sd", print_hash_value);
    transparent_crc(p_919->g_743.se, "p_919->g_743.se", print_hash_value);
    transparent_crc(p_919->g_743.sf, "p_919->g_743.sf", print_hash_value);
    transparent_crc(p_919->g_746.s0, "p_919->g_746.s0", print_hash_value);
    transparent_crc(p_919->g_746.s1, "p_919->g_746.s1", print_hash_value);
    transparent_crc(p_919->g_746.s2, "p_919->g_746.s2", print_hash_value);
    transparent_crc(p_919->g_746.s3, "p_919->g_746.s3", print_hash_value);
    transparent_crc(p_919->g_746.s4, "p_919->g_746.s4", print_hash_value);
    transparent_crc(p_919->g_746.s5, "p_919->g_746.s5", print_hash_value);
    transparent_crc(p_919->g_746.s6, "p_919->g_746.s6", print_hash_value);
    transparent_crc(p_919->g_746.s7, "p_919->g_746.s7", print_hash_value);
    transparent_crc(p_919->g_746.s8, "p_919->g_746.s8", print_hash_value);
    transparent_crc(p_919->g_746.s9, "p_919->g_746.s9", print_hash_value);
    transparent_crc(p_919->g_746.sa, "p_919->g_746.sa", print_hash_value);
    transparent_crc(p_919->g_746.sb, "p_919->g_746.sb", print_hash_value);
    transparent_crc(p_919->g_746.sc, "p_919->g_746.sc", print_hash_value);
    transparent_crc(p_919->g_746.sd, "p_919->g_746.sd", print_hash_value);
    transparent_crc(p_919->g_746.se, "p_919->g_746.se", print_hash_value);
    transparent_crc(p_919->g_746.sf, "p_919->g_746.sf", print_hash_value);
    transparent_crc(p_919->g_765.s0, "p_919->g_765.s0", print_hash_value);
    transparent_crc(p_919->g_765.s1, "p_919->g_765.s1", print_hash_value);
    transparent_crc(p_919->g_765.s2, "p_919->g_765.s2", print_hash_value);
    transparent_crc(p_919->g_765.s3, "p_919->g_765.s3", print_hash_value);
    transparent_crc(p_919->g_765.s4, "p_919->g_765.s4", print_hash_value);
    transparent_crc(p_919->g_765.s5, "p_919->g_765.s5", print_hash_value);
    transparent_crc(p_919->g_765.s6, "p_919->g_765.s6", print_hash_value);
    transparent_crc(p_919->g_765.s7, "p_919->g_765.s7", print_hash_value);
    transparent_crc(p_919->g_850.f0, "p_919->g_850.f0", print_hash_value);
    transparent_crc(p_919->g_851, "p_919->g_851", print_hash_value);
    transparent_crc(p_919->g_881.f0, "p_919->g_881.f0", print_hash_value);
    transparent_crc(p_919->g_888.s0, "p_919->g_888.s0", print_hash_value);
    transparent_crc(p_919->g_888.s1, "p_919->g_888.s1", print_hash_value);
    transparent_crc(p_919->g_888.s2, "p_919->g_888.s2", print_hash_value);
    transparent_crc(p_919->g_888.s3, "p_919->g_888.s3", print_hash_value);
    transparent_crc(p_919->g_888.s4, "p_919->g_888.s4", print_hash_value);
    transparent_crc(p_919->g_888.s5, "p_919->g_888.s5", print_hash_value);
    transparent_crc(p_919->g_888.s6, "p_919->g_888.s6", print_hash_value);
    transparent_crc(p_919->g_888.s7, "p_919->g_888.s7", print_hash_value);
    transparent_crc(p_919->v_collective, "p_919->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 28; i++)
            transparent_crc(p_919->g_special_values[i + 28 * get_linear_group_id()], "p_919->g_special_values[i + 28 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 28; i++)
            transparent_crc(p_919->l_special_values[i], "p_919->l_special_values[i]", print_hash_value);
    transparent_crc(p_919->l_comm_values[get_linear_local_id()], "p_919->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_919->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_919->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
