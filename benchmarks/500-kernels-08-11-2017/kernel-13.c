// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,57,1 -l 55,1,1
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

__constant uint32_t permutations[10][55] = {
{27,31,21,3,12,43,10,17,18,9,24,30,40,20,4,28,11,14,15,29,44,25,13,39,19,38,54,5,2,42,45,34,53,33,52,50,35,16,7,51,49,36,37,6,48,1,26,23,47,0,8,46,32,41,22}, // permutation 0
{28,43,25,12,36,15,32,3,21,7,40,33,9,35,2,42,30,53,13,18,41,22,19,11,37,8,49,44,24,34,17,5,45,38,31,4,6,23,14,46,20,26,16,0,51,27,48,47,39,1,29,50,54,52,10}, // permutation 1
{22,26,40,44,30,47,54,37,32,13,9,31,29,23,10,49,16,24,4,3,34,46,33,17,39,51,36,8,21,14,41,5,28,2,38,18,43,42,48,0,20,15,53,11,35,27,1,52,19,45,6,12,25,7,50}, // permutation 2
{53,39,7,5,0,19,38,12,2,10,37,8,40,49,42,18,1,32,48,33,24,34,35,14,6,3,23,15,11,13,27,25,50,29,20,30,51,28,43,22,16,45,26,44,17,9,47,46,31,21,52,54,36,41,4}, // permutation 3
{1,5,51,24,36,8,20,27,43,12,35,40,45,23,30,32,53,3,19,33,31,4,38,42,49,16,7,11,10,48,25,50,47,29,21,52,28,54,14,0,6,41,18,15,2,44,39,46,17,26,34,22,13,9,37}, // permutation 4
{52,6,28,3,54,30,18,25,5,21,45,20,26,24,11,31,8,44,10,40,22,38,49,36,37,51,33,4,16,39,1,46,19,9,41,34,50,14,13,47,0,42,7,53,2,23,27,29,15,17,48,43,12,32,35}, // permutation 5
{44,8,49,41,22,5,12,11,0,17,36,26,42,14,46,31,43,13,40,23,21,29,18,34,51,28,39,16,45,3,27,50,6,25,54,19,37,1,35,15,32,48,38,53,9,52,24,30,47,4,33,7,2,20,10}, // permutation 6
{52,12,5,23,7,32,16,40,53,17,19,10,26,31,22,18,15,0,38,46,49,36,34,54,25,1,39,8,33,35,2,6,45,50,11,42,47,43,28,9,20,4,29,37,21,51,30,27,3,14,44,41,13,48,24}, // permutation 7
{1,41,53,42,19,7,9,18,23,54,36,35,11,48,2,24,0,34,4,14,6,51,5,3,17,16,12,45,50,52,8,30,25,40,13,22,28,31,29,21,20,26,39,27,32,46,49,47,44,33,15,10,37,38,43}, // permutation 8
{13,47,6,4,3,37,18,20,0,49,14,44,39,25,8,52,54,35,5,23,19,12,53,31,48,33,2,11,28,34,46,10,16,17,24,1,40,15,30,36,26,42,50,29,41,27,9,22,38,32,51,21,45,43,7} // permutation 9
};

// Seed: 3041175448

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int16_t  f1;
   uint8_t  f2;
};

struct S1 {
   int64_t  f0;
   volatile int64_t  f1;
};

struct S2 {
   int64_t  f0;
   uint64_t  f1;
   volatile struct S0  f2;
   int32_t  f3;
   volatile uint16_t  f4;
   int32_t  f5;
   uint64_t  f6;
   int32_t  f7;
   int32_t  f8;
   uint16_t  f9;
};

struct S3 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_7;
    volatile VECTOR(int64_t, 2) g_29;
    VECTOR(uint32_t, 4) g_33;
    VECTOR(uint32_t, 8) g_34;
    uint32_t g_36;
    int8_t g_64;
    int32_t g_66;
    int32_t g_79;
    uint8_t g_80[9][2][8];
    int32_t g_85[2][5];
    uint8_t g_86[7];
    uint32_t g_89;
    uint32_t *g_92;
    uint32_t g_94;
    int16_t g_122;
    volatile VECTOR(uint8_t, 8) g_125;
    int64_t *g_139;
    int16_t g_141;
    uint32_t g_161;
    int16_t *g_165;
    int16_t * volatile * volatile g_164;
    uint16_t g_171;
    VECTOR(int8_t, 4) g_177;
    VECTOR(int8_t, 2) g_180;
    volatile struct S2 g_182;
    volatile struct S2 g_200[10];
    uint64_t g_202;
    struct S1 * volatile g_212;
    struct S1 g_214;
    VECTOR(int32_t, 2) g_219;
    VECTOR(int8_t, 2) g_231;
    VECTOR(int8_t, 2) g_232;
    VECTOR(int8_t, 16) g_233;
    VECTOR(uint16_t, 8) g_245;
    int32_t *g_254;
    int32_t **g_253;
    struct S2 g_256;
    struct S2 * volatile g_257;
    struct S1 g_371;
    volatile uint32_t g_386;
    int64_t **g_428;
    int32_t * volatile g_429;
    struct S1 g_444;
    volatile struct S1 g_454;
    struct S1 g_479;
    uint64_t g_481;
    volatile VECTOR(uint64_t, 8) g_493;
    struct S2 g_498;
    volatile VECTOR(int16_t, 8) g_499;
    struct S1 g_505;
    struct S1 *g_504;
    struct S2 g_533;
    VECTOR(int8_t, 4) g_538;
    struct S2 ** volatile g_581;
    struct S1 ** volatile g_584[4];
    struct S1 ** volatile g_585;
    struct S1 g_588[9];
    struct S2 **g_598;
    VECTOR(int32_t, 8) g_618;
    VECTOR(int16_t, 2) g_631;
    VECTOR(uint64_t, 2) g_640;
    uint32_t g_725;
    VECTOR(int8_t, 8) g_753;
    volatile int32_t g_794[5];
    volatile VECTOR(uint8_t, 2) g_811;
    volatile VECTOR(int8_t, 8) g_817;
    uint16_t g_829;
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
uint32_t  func_1(struct S3 * p_852);
uint32_t  func_43(uint32_t * p_44, int32_t * p_45, uint32_t * p_46, uint64_t  p_47, struct S3 * p_852);
int64_t  func_48(uint32_t  p_49, struct S3 * p_852);
uint16_t  func_52(int32_t * p_53, uint32_t  p_54, uint32_t * p_55, struct S3 * p_852);
int32_t * func_56(int64_t  p_57, uint32_t  p_58, struct S3 * p_852);
int32_t * func_100(int8_t * p_101, uint8_t * p_102, struct S3 * p_852);
int8_t * func_103(int64_t * p_104, int8_t * p_105, uint32_t * p_106, int8_t * p_107, struct S3 * p_852);
uint8_t  func_126(int64_t  p_127, struct S3 * p_852);
struct S2  func_130(int32_t  p_131, int8_t * p_132, struct S3 * p_852);
int8_t * func_133(int8_t * p_134, int64_t * p_135, int16_t * p_136, int32_t  p_137, uint32_t * p_138, struct S3 * p_852);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_852->g_3 p_852->g_comm_values p_852->g_29 p_852->g_7 p_852->g_33 p_852->g_34 p_852->g_36 p_852->l_comm_values p_852->g_80 p_852->g_66 p_852->g_79 p_852->g_86 p_852->g_89 p_852->g_92 p_852->g_479.f0 p_852->g_253 p_852->g_498.f7 p_852->g_538 p_852->g_64 p_852->g_200.f2.f2 p_852->g_180 p_852->g_429 p_852->g_256.f0 p_852->g_171 p_852->g_257 p_852->g_498 p_852->g_256 p_852->g_585 p_852->g_254 p_852->g_588 p_852->g_598 p_852->g_182.f8 p_852->g_165 p_852->g_94 p_852->g_233 p_852->g_618 p_852->g_631 p_852->g_640 p_852->g_141 p_852->g_200.f2.f0 p_852->g_122 p_852->g_214.f0 p_852->g_182.f2 p_852->g_533.f7 p_852->g_245 p_852->g_725 p_852->g_753 p_852->g_533.f2.f1 p_852->g_811 p_852->g_817 p_852->g_371.f0 p_852->g_829 p_852->g_533.f9
 * writes: p_852->g_3 p_852->g_36 p_852->l_comm_values p_852->g_64 p_852->g_80 p_852->g_86 p_852->g_89 p_852->g_79 p_852->g_94 p_852->g_7 p_852->g_66 p_852->g_256.f8 p_852->g_479.f0 p_852->g_254 p_852->g_498.f7 p_852->g_257 p_852->g_256.f0 p_852->g_171 p_852->g_498.f6 p_852->g_533.f1 p_852->g_504 p_852->g_256.f5 p_852->g_33 p_852->g_141 p_852->g_122 p_852->g_214.f0 p_852->g_245 p_852->g_725 p_852->g_533.f9
 */
uint32_t  func_1(struct S3 * p_852)
{ /* block id: 4 */
    uint16_t l_21[3];
    int32_t l_37 = (-1L);
    int32_t l_38[4][9][2] = {{{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L}},{{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L}},{{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L}},{{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L},{0x23C9199EL,0x129EFCF3L}}};
    uint8_t l_96 = 0x06L;
    int64_t *l_108 = (void*)0;
    uint32_t *l_109[4][5][6] = {{{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_852->g_36,(void*)0,(void*)0,(void*)0}}};
    int8_t *l_110 = &p_852->g_64;
    int32_t *l_838 = (void*)0;
    int32_t *l_839 = (void*)0;
    int32_t *l_840 = &l_38[3][1][0];
    int32_t *l_841 = &l_37;
    int32_t *l_842 = &l_37;
    int32_t *l_843 = &p_852->g_7;
    int32_t *l_844 = &l_38[1][4][1];
    int32_t *l_845 = (void*)0;
    int32_t *l_846 = &p_852->g_3;
    int32_t *l_847[3][4] = {{&p_852->g_79,&l_37,&l_38[1][8][1],&l_37},{&p_852->g_79,&l_37,&l_38[1][8][1],&l_37},{&p_852->g_79,&l_37,&l_38[1][8][1],&l_37}};
    int32_t l_848 = 7L;
    uint16_t l_849 = 65527UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_21[i] = 0xC9B9L;
    for (p_852->g_3 = (-18); (p_852->g_3 < (-19)); --p_852->g_3)
    { /* block id: 7 */
        int32_t *l_6 = &p_852->g_7;
        int32_t *l_8 = &p_852->g_7;
        int32_t *l_9 = &p_852->g_7;
        int32_t l_10 = 7L;
        int32_t *l_11 = &p_852->g_7;
        int32_t *l_12 = &p_852->g_7;
        int32_t *l_13 = &p_852->g_7;
        int32_t *l_14 = &p_852->g_7;
        int32_t *l_15 = &p_852->g_7;
        int32_t *l_16 = &p_852->g_7;
        int32_t *l_17 = &p_852->g_7;
        int32_t *l_18 = &p_852->g_7;
        int32_t l_19 = 0x5C99CDF9L;
        int32_t *l_20[9] = {&l_19,&l_19,&l_19,&l_19,&l_19,&l_19,&l_19,&l_19,&l_19};
        VECTOR(uint32_t, 4) l_32 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967295UL);
        uint32_t *l_35[3][1][7] = {{{&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36}},{{&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36}},{{&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36,(void*)0,&p_852->g_36,&p_852->g_36}}};
        int64_t *l_61 = (void*)0;
        int64_t *l_62[2];
        int8_t *l_63[6];
        uint8_t *l_95[2][8][6] = {{{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]}},{{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]},{&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0],&p_852->g_80[0][0][0],&p_852->g_80[5][1][0],&p_852->g_80[0][0][0]}}};
        uint16_t l_97[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_62[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_63[i] = &p_852->g_64;
        for (i = 0; i < 1; i++)
            l_97[i] = 0xCD2BL;
        ++l_21[0];
        (*l_6) = (safe_sub_func_int64_t_s_s(((((safe_lshift_func_int16_t_s_s(p_852->g_comm_values[p_852->tid], (((safe_unary_minus_func_int8_t_s(l_21[2])) != (((VECTOR(int64_t, 2))(p_852->g_29.xy)).odd > (*l_14))) == (l_38[3][1][0] = ((((safe_lshift_func_int8_t_s_u((!(((void*)0 != &p_852->g_3) && (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(l_32.ywxy)).xxzywyyw, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 8))(p_852->g_33.zxyyyyyz)), (uint32_t)((VECTOR(uint32_t, 8))(p_852->g_34.s50550145)).s4)))))).s3, 4294967295UL, 1UL, 0x126315BFL)).z | (++p_852->g_36)))), 7)) == (p_852->g_94 = (safe_sub_func_uint32_t_u_u(func_43((((func_48((((l_38[3][1][0] = (safe_sub_func_int16_t_s_s(((((p_852->g_3 <= func_52(func_56((*l_9), (((p_852->g_64 = (((*l_16) , (l_38[0][2][1] = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x5119E2D4DC4505AFL, 0x7BD26DA6125F8973L, 0x3D88186F270ADFF4L, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))((p_852->l_comm_values[(safe_mod_func_uint32_t_u_u(p_852->tid, 55))] ^= (safe_mod_func_int32_t_s_s(l_21[0], p_852->g_3))), 0x1DAE56B76AF746A6L, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))(7L)), 0x5EE13218558EF108L, 0x6C2A3D91D694BF01L)), ((VECTOR(int64_t, 8))(4L))))).lo, ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(1L))))).even))), ((VECTOR(int64_t, 2))(0x420D6CD47B9DA011L)), 1L)).s3271307245417765)).se <= p_852->g_3))) & (*l_14))) < (*l_8)) <= p_852->g_34.s3), p_852), l_21[2], l_13, p_852)) | p_852->g_7) & p_852->g_66) ^ p_852->g_79), 0UL))) < p_852->g_7) ^ p_852->g_comm_values[p_852->tid]), p_852) , l_21[0]) & p_852->g_3) , l_13), &p_852->g_79, p_852->g_92, p_852->g_comm_values[p_852->tid], p_852), (-1L))))) , &p_852->g_7) == &l_37))))) > 1UL) | (*l_8)) & l_96), GROUP_DIVERGE(1, 1)));
        if (p_852->g_86[2])
            break;
        ++l_97[0];
    }
    (*p_852->g_253) = func_100(func_103(l_108, &p_852->g_64, l_109[2][3][3], l_110, p_852), &l_96, p_852);
    for (p_852->g_533.f9 = (-11); (p_852->g_533.f9 != 10); p_852->g_533.f9++)
    { /* block id: 368 */
        int32_t *l_832 = &l_38[2][8][0];
        int32_t l_833 = 0x571297D2L;
        int32_t *l_834[5][8][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_852->g_7,(void*)0}}};
        uint32_t l_835[1][7] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
        int i, j, k;
        --l_835[0][5];
    }
    --l_849;
    return p_852->g_479.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_79
 * writes: p_852->g_79
 */
uint32_t  func_43(uint32_t * p_44, int32_t * p_45, uint32_t * p_46, uint64_t  p_47, struct S3 * p_852)
{ /* block id: 24 */
    int32_t l_93[2];
    int i;
    for (i = 0; i < 2; i++)
        l_93[i] = 0x66EC67F3L;
    (*p_45) ^= 0x394EFEA9L;
    return l_93[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_86 p_852->g_89 p_852->g_79
 * writes: p_852->g_86 p_852->g_89
 */
int64_t  func_48(uint32_t  p_49, struct S3 * p_852)
{ /* block id: 20 */
    int32_t *l_83 = &p_852->g_79;
    int32_t *l_84[4][9] = {{&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79},{&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79},{&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79},{&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79,&p_852->g_79}};
    int i, j;
    ++p_852->g_86[2];
    p_852->g_89++;
    return p_852->g_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_comm_values
 * writes:
 */
uint16_t  func_52(int32_t * p_53, uint32_t  p_54, uint32_t * p_55, struct S3 * p_852)
{ /* block id: 17 */
    return p_852->g_comm_values[p_852->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_80
 * writes: p_852->g_80
 */
int32_t * func_56(int64_t  p_57, uint32_t  p_58, struct S3 * p_852)
{ /* block id: 13 */
    int32_t *l_65 = &p_852->g_66;
    int32_t *l_67 = &p_852->g_66;
    int32_t l_68 = 9L;
    int32_t *l_69 = (void*)0;
    int32_t l_70 = (-1L);
    int32_t *l_71 = (void*)0;
    int32_t *l_72 = &l_68;
    int32_t *l_73 = &l_68;
    int32_t *l_74 = &p_852->g_66;
    int32_t *l_75[6][7] = {{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66},{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66},{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66},{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66},{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66},{&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66,&p_852->g_66}};
    VECTOR(uint32_t, 16) l_76 = (VECTOR(uint32_t, 16))(0x2BC53350L, (VECTOR(uint32_t, 4))(0x2BC53350L, (VECTOR(uint32_t, 2))(0x2BC53350L, 4294967295UL), 4294967295UL), 4294967295UL, 0x2BC53350L, 4294967295UL, (VECTOR(uint32_t, 2))(0x2BC53350L, 4294967295UL), (VECTOR(uint32_t, 2))(0x2BC53350L, 4294967295UL), 0x2BC53350L, 4294967295UL, 0x2BC53350L, 4294967295UL);
    int i, j;
    l_76.sf++;
    p_852->g_80[0][0][0]++;
    return &p_852->g_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_753 p_852->g_79 p_852->g_533.f2.f1 p_852->g_34 p_852->g_253 p_852->g_811 p_852->g_817 p_852->g_256.f1 p_852->g_429 p_852->g_3 p_852->g_371.f0 p_852->g_498.f7 p_852->g_538 p_852->g_165 p_852->g_141 p_852->g_256.f2.f0 p_852->g_829 p_852->g_245 p_852->g_80 p_852->g_254
 * writes: p_852->l_comm_values p_852->g_254 p_852->g_80
 */
int32_t * func_100(int8_t * p_101, uint8_t * p_102, struct S3 * p_852)
{ /* block id: 342 */
    uint64_t l_739 = 0x58FC442F37E135A1L;
    uint8_t l_747 = 0xFCL;
    int32_t *l_760 = &p_852->g_79;
    int32_t l_786 = 0x3B13F781L;
    int32_t *l_787 = &l_786;
    int32_t *l_788 = &l_786;
    int32_t *l_789 = (void*)0;
    int32_t *l_790[1];
    int8_t l_791 = (-3L);
    int64_t l_792 = (-1L);
    int32_t l_793 = (-2L);
    int32_t l_795 = 2L;
    uint32_t l_796[5][7] = {{4294967295UL,0xE75B321EL,4294967295UL,4294967295UL,0xE75B321EL,4294967295UL,4294967295UL},{4294967295UL,0xE75B321EL,4294967295UL,4294967295UL,0xE75B321EL,4294967295UL,4294967295UL},{4294967295UL,0xE75B321EL,4294967295UL,4294967295UL,0xE75B321EL,4294967295UL,4294967295UL},{4294967295UL,0xE75B321EL,4294967295UL,4294967295UL,0xE75B321EL,4294967295UL,4294967295UL},{4294967295UL,0xE75B321EL,4294967295UL,4294967295UL,0xE75B321EL,4294967295UL,4294967295UL}};
    int64_t ***l_799 = &p_852->g_428;
    VECTOR(uint16_t, 16) l_807 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xD67FL), 0xD67FL), 0xD67FL, 2UL, 0xD67FL, (VECTOR(uint16_t, 2))(2UL, 0xD67FL), (VECTOR(uint16_t, 2))(2UL, 0xD67FL), 2UL, 0xD67FL, 2UL, 0xD67FL);
    VECTOR(uint8_t, 2) l_809 = (VECTOR(uint8_t, 2))(0xA2L, 0x0BL);
    VECTOR(int8_t, 16) l_816 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    struct S1 **l_824 = &p_852->g_504;
    int i, j;
    for (i = 0; i < 1; i++)
        l_790[i] = (void*)0;
    if (l_739)
    { /* block id: 343 */
        int32_t l_750 = 0x5E9F251CL;
        VECTOR(int8_t, 4) l_757 = (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0L), 0L);
        VECTOR(int8_t, 4) l_758 = (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, (-1L)), (-1L));
        int32_t *l_759 = &p_852->g_79;
        int i;
        if ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(0x4B07BBABL, 0L)).even, ((((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint8_t_u_u(255UL, (safe_div_func_int64_t_s_s(l_747, (safe_mul_func_int8_t_s_s(((l_750 > ((safe_rshift_func_uint8_t_u_u((*p_102), 5)) ^ (((((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(p_852->g_753.s6501)).wwywwzwz))).s4, ((VECTOR(int8_t, 2))(2L, 0L)), 7L)).zzzxwxzy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(2L, l_747, 0x58L, (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((-1L))), l_750)), 0x12L, ((VECTOR(int8_t, 2))(l_757.xx)), ((VECTOR(int8_t, 2))(0x72L, (-1L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x4AL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_758.xyyx)).odd)), 3L)))), 0x21L, 0x7CL, (-1L)))))).sce)).xxxy)).zwxzxywy))).s7 == FAKE_DIVERGE(p_852->local_2_offset, get_local_id(2), 10)) , l_759) != l_760))) <= (*l_759)), 0xB0L)))))))) ^ p_852->g_533.f2.f1) , 0x9210858850F1D5F2L) , (*l_760)))))
        { /* block id: 344 */
            return &p_852->g_7;
        }
        else
        { /* block id: 346 */
            return l_760;
        }
    }
    else
    { /* block id: 349 */
        int32_t l_765 = 0x65D86125L;
        VECTOR(int64_t, 4) l_774 = (VECTOR(int64_t, 4))(0x039F6259D84B0E7BL, (VECTOR(int64_t, 2))(0x039F6259D84B0E7BL, 1L), 1L);
        int64_t *l_775 = (void*)0;
        int i;
        atomic_add(&p_852->g_atomic_reduction[get_linear_group_id()], (safe_mul_func_int8_t_s_s((l_765 < (((safe_mul_func_uint16_t_u_u(0UL, 0xF55BL)) || (safe_add_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((p_852->l_comm_values[(safe_mod_func_uint32_t_u_u(p_852->tid, 55))] = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_774.ww)).xyyy)).x), 0x83945CB7B2A15BFDL)) <= (*l_760)), 6)) & (((safe_mod_func_uint8_t_u_u(p_852->g_34.s6, (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((void*)0 != p_102), 0x380958C3L)), (*l_760))), 0x3AL)), (*l_760))))) || l_765) , 0x7DF065ABL)) || 65526UL) | 0UL), (*l_760)))) != FAKE_DIVERGE(p_852->local_1_offset, get_local_id(1), 10))), l_765)) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_852->v_collective += p_852->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    l_796[1][0]--;
    (*l_788) = 0x46530015L;
    if ((l_799 == (void*)0))
    { /* block id: 355 */
        uint32_t l_800 = 4294967295UL;
        int32_t *l_803 = &p_852->g_7;
        l_800++;
        return l_803;
    }
    else
    { /* block id: 358 */
        int32_t *l_804[4];
        VECTOR(uint8_t, 8) l_805 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x79L), 0x79L), 0x79L, 255UL, 0x79L);
        VECTOR(uint8_t, 8) l_806 = (VECTOR(uint8_t, 8))(0xCBL, (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 1UL), 1UL), 1UL, 0xCBL, 1UL);
        VECTOR(uint8_t, 8) l_808 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
        VECTOR(uint8_t, 2) l_810 = (VECTOR(uint8_t, 2))(0x36L, 0x22L);
        uint32_t *l_813 = &p_852->g_94;
        uint32_t **l_812 = &l_813;
        uint32_t *l_814 = &p_852->g_94;
        uint32_t **l_815 = &l_814;
        int32_t l_827 = 0x50711D69L;
        int16_t l_828 = 0x2E50L;
        int i;
        for (i = 0; i < 4; i++)
            l_804[i] = (void*)0;
        (*p_852->g_253) = l_804[0];
        (*p_852->g_253) = func_56((*l_788), ((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(l_805.s20)).xxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(l_806.s0523574613721535))))).s46f5))))).yzzyzzxw)), ((VECTOR(uint16_t, 16))(l_807.s6effe4b40dc87c6e)).odd, ((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 16))(65535UL, 0UL, ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_808.s2143)).zzzxwyyx)).s47, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(l_809.yxxyyyxxxyyxxyyx)).s90ba, ((VECTOR(uint8_t, 8))(l_810.yxxxyxyy)).odd))).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(p_852->g_811.xyyxyxxx)).s57, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x1FL, 255UL)).yxxyyxyy)).s71))).yxyxyxyy)).s0542507513601050)).sf2cf)).hi)), 0x74L, 248UL)).odd))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(5UL, 0x2DL, 0x05L, 1UL)).even)), 248UL, (((*l_812) = l_790[0]) == ((*l_815) = l_814)), 0UL, 255UL)), ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_816.sc7c790f6)).s36, ((VECTOR(int8_t, 2))(p_852->g_817.s15))))).xyyyyyxy, ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(p_852->g_256.f1, ((VECTOR(int8_t, 2))(0x46L, 0x30L)), (((*p_852->g_429) != (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(((p_852->g_371.f0 , (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((void*)0 != l_824) , (((safe_sub_func_uint32_t_u_u((p_852->g_498.f7 | p_852->g_538.z), 0x69B93BD3L)) != 0x041CL) | (*l_760))), 0x3AA8L)) <= l_827), 2))) > (*l_787)), (*p_852->g_165), (-6L), 0x180DL)).odd, ((VECTOR(int16_t, 2))(0x6F2DL))))).odd, (*l_788)))) <= 7UL), ((VECTOR(int8_t, 2))(0x33L)), 0x69L, (-1L))).hi, ((VECTOR(int8_t, 4))(1L))))).wxyxwwzy))).s3720726463611047, ((VECTOR(int8_t, 16))((-1L)))))).hi))).s64))))).yyxxxxxxxyyxyyxy)).s8fb1, (uint8_t)l_828))), 0x30L, ((VECTOR(uint8_t, 4))(246UL)), (*p_102), p_852->g_256.f2.f0, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0x14L)), 0UL)), (uint8_t)250UL))).s4d)).yxxxyyyyxxxxyxxy))), ((VECTOR(uint8_t, 16))(255UL))))).s97, ((VECTOR(uint8_t, 2))(0x36L))))), (*p_102), p_852->g_829, ((VECTOR(uint8_t, 4))(0UL)), 0UL, 0xC6L, (*p_102), p_852->g_245.s4, ((VECTOR(uint8_t, 4))(0x27L)))).sc3)).yyyy, ((VECTOR(uint8_t, 4))(0x57L))))), ((VECTOR(uint16_t, 4))(0xBF11L))))), 1UL, ((VECTOR(uint16_t, 2))(0x115BL)), 65528UL, 0xAE5FL, ((VECTOR(uint16_t, 2))(0xFDADL)), 0x5E23L, 0UL, 65535UL)).sa, 0x998DL, 0x00D2L)).zwyxwyyy))).s5 <= 0x78DFL) >= 7L), p_852);
    }
    return (*p_852->g_253);
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_89 p_852->g_479.f0 p_852->g_253 p_852->g_498.f7 p_852->g_80 p_852->g_538 p_852->g_64 p_852->g_200.f2.f2 p_852->g_180 p_852->g_429 p_852->g_256.f0 p_852->g_171 p_852->g_257 p_852->g_498 p_852->g_256 p_852->g_585 p_852->g_254 p_852->g_588 p_852->g_598 p_852->g_182.f8 p_852->g_165 p_852->g_94 p_852->g_233 p_852->g_618 p_852->g_631 p_852->g_640 p_852->g_141 p_852->g_200.f2.f0 p_852->g_122 p_852->g_79 p_852->g_3 p_852->g_214.f0 p_852->g_182.f2 p_852->g_533.f7 p_852->g_245 p_852->g_725
 * writes: p_852->g_89 p_852->g_66 p_852->g_256.f8 p_852->g_479.f0 p_852->g_254 p_852->g_498.f7 p_852->g_80 p_852->g_257 p_852->g_64 p_852->g_3 p_852->g_256.f0 p_852->g_171 p_852->g_498.f6 p_852->g_533.f1 p_852->g_504 p_852->g_256.f5 p_852->g_33 p_852->g_141 p_852->g_122 p_852->g_94 p_852->g_79 p_852->g_86 p_852->g_214.f0 p_852->g_245 p_852->g_725
 */
int8_t * func_103(int64_t * p_104, int8_t * p_105, uint32_t * p_106, int8_t * p_107, struct S3 * p_852)
{ /* block id: 33 */
    uint16_t l_115 = 0x6692L;
    struct S1 *l_477 = &p_852->g_444;
    uint16_t l_512 = 0x3368L;
    int32_t l_535 = 0L;
    int32_t l_575 = 0x00E8C590L;
    uint64_t *l_595 = &p_852->g_202;
    uint32_t l_617 = 0xB0B30CAAL;
    struct S0 l_621[3] = {{7L,-2L,0xA9L},{7L,-2L,0xA9L},{7L,-2L,0xA9L}};
    VECTOR(int64_t, 4) l_629 = (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x549AC3B310AEBB1AL), 0x549AC3B310AEBB1AL);
    int32_t l_714 = (-5L);
    int32_t l_715 = 4L;
    int i;
    for (p_852->g_89 = 22; (p_852->g_89 == 10); --p_852->g_89)
    { /* block id: 36 */
        int32_t l_123 = (-1L);
        VECTOR(int8_t, 4) l_471 = (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, 1L), 1L);
        VECTOR(int8_t, 2) l_472 = (VECTOR(int8_t, 2))(0x62L, 0L);
        VECTOR(int8_t, 8) l_487 = (VECTOR(int8_t, 8))(0x2FL, (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, 0x04L), 0x04L), 0x04L, 0x2FL, 0x04L);
        uint64_t *l_509 = &p_852->g_256.f1;
        int8_t *l_532 = (void*)0;
        struct S2 *l_536 = &p_852->g_498;
        uint16_t l_537 = 0x92D1L;
        int64_t **l_558[9];
        int16_t **l_613 = &p_852->g_165;
        int16_t ***l_612 = &l_613;
        uint64_t l_623 = 18446744073709551615UL;
        int64_t ***l_675 = &p_852->g_428;
        int32_t l_724 = (-1L);
        int i;
        for (i = 0; i < 9; i++)
            l_558[i] = &p_852->g_139;
        for (p_852->g_66 = (-13); (p_852->g_66 <= (-24)); p_852->g_66--)
        { /* block id: 39 */
            int16_t *l_120 = (void*)0;
            int16_t *l_121 = &p_852->g_122;
            VECTOR(uint8_t, 16) l_124 = (VECTOR(uint8_t, 16))(0xD3L, (VECTOR(uint8_t, 4))(0xD3L, (VECTOR(uint8_t, 2))(0xD3L, 1UL), 1UL), 1UL, 0xD3L, 1UL, (VECTOR(uint8_t, 2))(0xD3L, 1UL), (VECTOR(uint8_t, 2))(0xD3L, 1UL), 0xD3L, 1UL, 0xD3L, 1UL);
            uint32_t *l_475[3];
            int32_t l_476 = 0x4BB2FE15L;
            struct S1 *l_478 = &p_852->g_479;
            uint64_t *l_480 = &p_852->g_481;
            int32_t *l_482[8][5][3] = {{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}},{{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66},{&p_852->g_3,(void*)0,&p_852->g_66}}};
            uint8_t *l_547 = &p_852->g_80[2][1][0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_475[i] = &p_852->g_36;
            l_123 = (((VECTOR(int32_t, 8))(0x77BBE786L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x19CC9C01L, 0x15540926L)), 0x08898D0BL, 0x0DE8A0DBL)), ((((l_115 | (((*l_480) |= (safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_121) = (-1L)), l_123)), ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_124.s805f)).lo)).xyyxyxyyyyyxyxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(p_852->g_125.s66144367)).s7264402506512421, ((VECTOR(uint8_t, 16))(func_126(l_115, p_852), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_471.zzxyyzzy)).s73)).yyyy, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(l_472.xxxy)).wzzyxzyxxxwwzwyw, (int8_t)(((l_115 , (((safe_mod_func_int64_t_s_s((((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))((~l_471.z), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(6UL, 4294967295UL)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xF2236D61L, 0UL)), ((VECTOR(uint32_t, 2))(1UL, 4294967287UL)), 0UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).yyxy, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(9UL, (l_476 = (((-9L) != ((*p_105) &= ((((l_115 && p_852->g_182.f5) || l_472.x) ^ l_472.x) == p_852->g_94))) <= l_472.y)), 0x146A0C74L, 1UL)), ((VECTOR(uint32_t, 4))(1UL)))))))), p_852->g_256.f2.f1, 0x728CE204L, 0UL, 0x8E814A99L)).s77, ((VECTOR(uint32_t, 2))(0x442B08DBL))))), 0x7C9CCF94L)).s11)), 0UL)).ywxxxxzy))), ((VECTOR(uint32_t, 8))(0x1FFC8FB8L)))))))), ((VECTOR(uint32_t, 2))(1UL)), 0UL, 1UL, ((VECTOR(uint32_t, 2))(2UL)), 0x347CB556L, 5UL)).s10))), 0x9B1DE252L)).wwwzyxyxzyyxzwwz, ((VECTOR(uint32_t, 16))(0x15BC5E60L)), ((VECTOR(uint32_t, 16))(4294967295UL))))).s1 || l_124.sc), 0x0F882C8D39A34224L)) , l_477) != l_478)) , l_471.y) && 6L), (int8_t)(*p_107)))).se40d))).xxyyzzxx)), 0x5FL, (-9L), ((VECTOR(int8_t, 4))(0L)), 0x29L)), ((VECTOR(int8_t, 16))(0x18L))))).even))))), ((VECTOR(uint8_t, 4))(0xCDL)), p_852->g_256.f2.f0, 0xEBL, 0xDDL)), ((VECTOR(uint8_t, 16))(4UL))))).lo)).s5250344362646001))))).s9))) != GROUP_DIVERGE(2, 1))) > 0x891CL) != l_124.s0) < FAKE_DIVERGE(p_852->local_0_offset, get_local_id(0), 10)), 0x1766CEE3L, 1L)).s3 <= p_852->g_479.f0);
            for (p_852->g_256.f8 = 14; (p_852->g_256.f8 < 1); p_852->g_256.f8--)
            { /* block id: 224 */
                VECTOR(uint64_t, 8) l_492 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 9UL, 18446744073709551608UL);
                int32_t l_511 = 0x044E59B2L;
                int i;
                for (p_852->g_479.f0 = 20; (p_852->g_479.f0 != 19); p_852->g_479.f0 = safe_sub_func_int64_t_s_s(p_852->g_479.f0, 2))
                { /* block id: 227 */
                    uint64_t l_506 = 18446744073709551615UL;
                    int32_t l_510 = 0x6BAFB630L;
                    VECTOR(uint16_t, 2) l_517 = (VECTOR(uint16_t, 2))(1UL, 0xB62AL);
                    uint32_t **l_526 = &p_852->g_92;
                    uint8_t *l_531 = &p_852->g_86[5];
                    int32_t *l_534 = &p_852->g_498.f7;
                    int i;
                    (*p_852->g_253) = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_487.s5314)).even)).yyxy)).even, ((VECTOR(int8_t, 2))(0x5AL, 0x25L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x35L, 1L)), (safe_mod_func_int8_t_s_s((*p_107), (safe_sub_func_uint64_t_u_u(l_115, ((*l_509) = ((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 2))(l_492.s71)).xxxyyyxyxyxyyyxy, ((VECTOR(uint64_t, 16))(p_852->g_493.s4120640663412653)), ((VECTOR(uint64_t, 8))(0xD098C8D031299FD8L, (l_123 & (safe_add_func_uint32_t_u_u(6UL, (safe_rshift_func_uint8_t_u_s(((p_852->g_498 , ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_852->g_499.s73760676)).s12)).hi ^ ((l_512 = (safe_lshift_func_uint16_t_u_u((l_492.s4 , ((safe_sub_func_int32_t_s_s((l_511 = (((p_852->g_504 == p_852->g_504) < ((l_506--) ^ ((((void*)0 != l_509) , l_115) , 4294967295UL))) ^ l_510)), GROUP_DIVERGE(0, 1))) & l_492.s7)), 0))) | 0x1EF1L)) , p_852->g_200[5].f5)) | 0x19B0AC90L), 4))))), 0x917943931D551D55L, ((VECTOR(uint64_t, 2))(0xE4B603DD00050365L)), 18446744073709551615UL, 2UL, 0x153D7BEC7813E6EDL)).s5766741665543017))).s0))))), 0x46L, 0x76L, 0L, 0x06L, 0x12L)).even)).hi))).xyxy, ((VECTOR(int8_t, 4))(0x70L)), ((VECTOR(int8_t, 4))(0x2BL))))).wyzzxwyxwwzzxxxx)).s9 , (void*)0);
                    (*p_852->g_253) = func_56((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_517.xx)).hi, (l_535 = (((*l_534) &= (safe_sub_func_uint8_t_u_u(l_511, ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((l_123 = ((*p_852->g_165) = (((((void*)0 == &l_511) >= (((*l_526) = p_106) == p_106)) | ((safe_sub_func_uint8_t_u_u((p_852->g_533 , 249UL), l_115)) , 0xBE01L)) && l_517.y))) || 0UL), p_852->g_498.f1)) , p_852->g_200[5].f2.f2), 0x6AL)), ((VECTOR(uint8_t, 2))(0x34L)), 0x43L, 0x79L, ((VECTOR(uint8_t, 8))(246UL)), 0x42L, 1UL, 0x24L)), ((VECTOR(uint8_t, 16))(0xA0L)), ((VECTOR(uint8_t, 16))(247UL))))).sfd)).yxxxxxyxxxyxxyxy, (uint8_t)l_517.x))).s4))) , 6L)))), l_472.x)), l_115, p_852);
                    p_852->g_257 = l_536;
                }
            }
            (*p_852->g_429) = ((0xCB5C66CBL <= 3L) || ((*p_105) = (((l_537 && 0UL) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_852->g_538.xy)))), 1L, (-2L))).y) > (0xF7L && ((*l_547) = (safe_div_func_uint16_t_u_u((&p_852->g_80[0][1][5] != (void*)0), ((safe_lshift_func_int8_t_s_u((*p_107), 0)) && (((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(l_115, p_852->g_200[5].f2.f2)), p_852->g_180.y)) <= l_512) > l_535)))))))));
            if (l_535)
                continue;
        }
        for (p_852->g_256.f0 = 0; (p_852->g_256.f0 == (-30)); p_852->g_256.f0 = safe_sub_func_int16_t_s_s(p_852->g_256.f0, 6))
        { /* block id: 250 */
            struct S0 l_569 = {0L,-10L,0UL};
            int32_t l_574 = (-1L);
            struct S2 **l_599 = &l_536;
            VECTOR(uint32_t, 4) l_600 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL);
            uint32_t *l_601[4][8][8] = {{{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_852->g_36,(void*)0,&p_852->g_36,(void*)0,(void*)0}}};
            struct S2 **l_608[5];
            int16_t *l_609 = (void*)0;
            int16_t *l_610 = &p_852->g_122;
            uint32_t *l_611 = &p_852->g_94;
            int32_t l_667 = 1L;
            int32_t l_717 = (-2L);
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_608[i] = &l_536;
            for (p_852->g_171 = 4; (p_852->g_171 > 10); p_852->g_171 = safe_add_func_int16_t_s_s(p_852->g_171, 1))
            { /* block id: 253 */
                VECTOR(int64_t, 16) l_566 = (VECTOR(int64_t, 16))(0x5FBF31C479956CC8L, (VECTOR(int64_t, 4))(0x5FBF31C479956CC8L, (VECTOR(int64_t, 2))(0x5FBF31C479956CC8L, 0x5990DF813A901887L), 0x5990DF813A901887L), 0x5990DF813A901887L, 0x5FBF31C479956CC8L, 0x5990DF813A901887L, (VECTOR(int64_t, 2))(0x5FBF31C479956CC8L, 0x5990DF813A901887L), (VECTOR(int64_t, 2))(0x5FBF31C479956CC8L, 0x5990DF813A901887L), 0x5FBF31C479956CC8L, 0x5990DF813A901887L, 0x5FBF31C479956CC8L, 0x5990DF813A901887L);
                struct S2 *l_580 = &p_852->g_498;
                struct S1 *l_583 = &p_852->g_214;
                int i;
                for (p_852->g_498.f6 = 0; (p_852->g_498.f6 <= 25); ++p_852->g_498.f6)
                { /* block id: 256 */
                    int32_t l_557 = 0x0E8E7993L;
                    int64_t ***l_559[3][6][10] = {{{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428}},{{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428}},{{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428},{&p_852->g_428,&l_558[2],&p_852->g_428,&l_558[2],&l_558[2],(void*)0,&p_852->g_428,(void*)0,&l_558[2],&p_852->g_428}}};
                    struct S0 *l_570 = &l_569;
                    uint64_t *l_573 = &p_852->g_256.f6;
                    int32_t *l_576 = (void*)0;
                    int32_t *l_577 = &l_123;
                    int i, j, k;
                    (*l_577) ^= (((safe_unary_minus_func_int32_t_s(((void*)0 == p_104))) < (safe_rshift_func_uint8_t_u_u(l_557, (((*p_852->g_257) , (((l_558[4] = l_558[2]) == (void*)0) ^ ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(0x7CBAL, 65534UL, 0xF2B8L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(0x310BL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((l_574 = (((*l_573) = ((*l_509) = (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_566.s28d326f8)).s2, (!(safe_rshift_func_int16_t_s_s((((*l_570) = l_569) , (safe_lshift_func_int8_t_s_s(0x77L, l_557))), 3))))))) == p_852->g_498.f0)), (**p_852->g_164))), l_566.s9)), ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 2))(0UL)), l_566.s0, 0x59B3L, 0x019CL, 65527UL, 0UL)).lo)).even)).lo)), 2UL)).wzwyyywx))).s55)), ((VECTOR(uint16_t, 2))(0xBBA9L)), 0x6402L)).even, ((VECTOR(uint16_t, 4))(0xA56CL))))), ((VECTOR(uint16_t, 4))(7UL)), ((VECTOR(uint16_t, 4))(0x368AL))))), 65526UL, p_852->g_454.f1, l_566.s7, 65535UL, 0UL, 0x9D11L, 0x6165L, ((VECTOR(uint16_t, 4))(0xAD5AL)), 0xAA9DL)).s2a)).xxyyxxyx, ((VECTOR(uint16_t, 8))(1UL))))).s3)) , 0x53L)))) & l_575);
                }
                for (p_852->g_533.f1 = 11; (p_852->g_533.f1 > 21); p_852->g_533.f1 = safe_add_func_uint16_t_u_u(p_852->g_533.f1, 9))
                { /* block id: 266 */
                    struct S2 **l_582 = &l_536;
                    (*l_582) = l_580;
                    (*p_852->g_585) = l_583;
                }
                for (p_852->g_256.f5 = 0; (p_852->g_256.f5 == (-14)); p_852->g_256.f5--)
                { /* block id: 272 */
                    (*p_852->g_253) = &l_574;
                    (*p_852->g_253) = (*p_852->g_253);
                }
            }
            if ((p_852->g_588[0] , (safe_add_func_uint8_t_u_u((((((*l_611) |= (safe_div_func_uint32_t_u_u(0x329BF98FL, (safe_lshift_func_int16_t_s_s(((void*)0 == l_595), (l_574 = (l_123 = ((l_115 && (p_852->g_256.f2 , (safe_lshift_func_int16_t_s_s(((*l_610) = ((*p_852->g_165) = ((l_599 = p_852->g_598) == (l_608[0] = (((p_852->g_33.y = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_600.xzxwzyywyzwwwwyz)).sb8d8)).z) >= ((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(p_852->g_182.f8, 3)) ^ (safe_mul_func_uint8_t_u_u(0x6CL, l_487.s7))), (-1L))) || l_575)) , (void*)0))))), l_569.f1)))) , (-2L))))))))) , (void*)0) != l_612) != p_852->g_233.s5), p_852->g_64))))
            { /* block id: 285 */
                int32_t l_616 = 0x2FA3103DL;
                int32_t **l_622 = &p_852->g_254;
                int32_t l_624 = 0x59420DF5L;
                uint32_t l_665 = 8UL;
                int32_t *l_721 = &l_714;
                int32_t *l_722 = &l_717;
                int32_t *l_723[2][5][2] = {{{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79}},{{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79},{(void*)0,&p_852->g_79}}};
                int i, j, k;
                l_624 |= ((((VECTOR(int32_t, 16))((safe_add_func_uint16_t_u_u(l_616, l_617)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(0x09B40AABL, ((VECTOR(int32_t, 4))(p_852->g_618.s4447)), 0x1766FFF1L, (safe_sub_func_uint64_t_u_u((l_569.f0 == (l_621[2] , (0x1BL | (l_616 , (l_622 != (void*)0))))), p_852->g_618.s6)), l_623, ((VECTOR(int32_t, 8))(0x524D4AD5L)))).s19, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 2))(0x1D033CD5L)), 0x361F1B2CL, (-1L), (-3L))).s4 , 0L) <= l_616);
                for (l_623 = 0; (l_623 != 28); l_623++)
                { /* block id: 289 */
                    VECTOR(int16_t, 8) l_630 = (VECTOR(int16_t, 8))(0x2CDBL, (VECTOR(int16_t, 4))(0x2CDBL, (VECTOR(int16_t, 2))(0x2CDBL, 0L), 0L), 0L, 0x2CDBL, 0L);
                    struct S0 l_663 = {0x4BDBL,0x2640L,0x3FL};
                    VECTOR(uint8_t, 4) l_681 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 3UL), 3UL);
                    int32_t l_708 = 1L;
                    int32_t l_716 = 0x25352E06L;
                    uint8_t l_718[6] = {0x9EL,2UL,0x9EL,0x9EL,2UL,0x9EL};
                    int i;
                    if (l_574)
                    { /* block id: 290 */
                        int8_t l_664 = 0x5FL;
                        int32_t *l_666 = &p_852->g_79;
                        uint8_t *l_668 = (void*)0;
                        uint8_t *l_669 = &p_852->g_86[2];
                        (*p_852->g_429) = (safe_mod_func_int32_t_s_s(7L, (((VECTOR(int64_t, 16))(l_629.xxyzxzzzzwwyyzyx)).s2 ^ ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(l_630.s0637504267760131)).s8b, (int16_t)1L))), 0x0B5BL, (-5L))), 0x5DB5L, 1L, 0x75CDL, 5L)).s3 > ((VECTOR(int16_t, 8))(p_852->g_631.yyyxyxxx)).s1) <= (safe_div_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((((((*l_669) = ((safe_sub_func_uint32_t_u_u(l_535, ((((safe_lshift_func_uint8_t_u_u((((((*l_666) = ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_852->g_640.xyyx)).even)).hi >= ((~0x41C6L) , (((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((*p_852->g_165) == (l_123 = (l_574 = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_630.s0, (safe_sub_func_int16_t_s_s(((0xC826BD69L || (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((((*l_610) ^= ((((safe_lshift_func_uint16_t_u_s(((l_663 , l_621[1]) , 0xBECDL), 15)) , p_852->g_200[5].f2.f0) == l_663.f1) || l_664)) || 65530UL), l_621[2].f1)) , 1L), l_665))) , l_629.z), l_664)))), p_852->g_256.f8)), 3)) != l_664), 7))))), 8)), l_616)), 247UL)) & l_487.s0) , l_574))) || (*p_105))) != l_667) == 6UL) < l_600.z), FAKE_DIVERGE(p_852->local_1_offset, get_local_id(1), 10))) >= (*p_107)) <= l_630.s4) <= l_537))) > 0xBCL)) && GROUP_DIVERGE(2, 1)) < 0x3ACFA19035F30225L) && (-10L)) != l_487.s0), 0x2BL, 1UL, 253UL)), 0x53L, 0x99L, 1UL, 1UL)).s7 , l_569.f1), FAKE_DIVERGE(p_852->group_1_offset, get_group_id(1), 10))) <= l_472.y), p_852->g_89))))));
                        (*p_852->g_429) &= (l_667 &= (*l_666));
                    }
                    else
                    { /* block id: 299 */
                        if ((*p_852->g_429))
                            break;
                        if (l_630.s2)
                            break;
                    }
                    for (p_852->g_214.f0 = 0; (p_852->g_214.f0 == 24); p_852->g_214.f0++)
                    { /* block id: 305 */
                        uint32_t l_672 = 4294967286UL;
                        int32_t *l_676 = &p_852->g_3;
                        uint16_t *l_699 = &l_115;
                        uint16_t *l_700 = (void*)0;
                        int32_t *l_701 = (void*)0;
                        int32_t *l_702 = (void*)0;
                        int32_t *l_703 = &p_852->g_7;
                        int32_t *l_704 = (void*)0;
                        int32_t *l_705 = &l_624;
                        int32_t *l_706 = (void*)0;
                        int32_t *l_707 = &p_852->g_3;
                        int32_t *l_709 = &p_852->g_66;
                        int32_t *l_710 = (void*)0;
                        int32_t *l_711 = &l_123;
                        int32_t *l_712 = &l_535;
                        int32_t *l_713[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_713[i][j] = (void*)0;
                        }
                        ++l_672;
                        l_123 |= ((*l_676) = (l_675 == &p_852->g_428));
                        l_123 = ((VECTOR(int32_t, 4))((safe_sub_func_uint32_t_u_u((p_852->g_233.s2 , (p_852->g_182.f2 , (safe_lshift_func_uint8_t_u_u(l_663.f2, 5)))), ((p_852->g_245.s6 ^= (((VECTOR(uint8_t, 16))(l_681.yzyzyyyxwyyxxxzz)).sc && (safe_lshift_func_int16_t_s_u((*l_676), (safe_add_func_uint8_t_u_u((p_852->g_533.f7 > 0UL), (((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_471.z, (safe_unary_minus_func_int32_t_s((safe_add_func_uint32_t_u_u(((((*l_699) |= (safe_mul_func_int8_t_s_s(((*l_676) , (*p_105)), p_852->g_64))) != GROUP_DIVERGE(0, 1)) & (*p_852->g_165)), 4294967295UL)))))), (*p_852->g_165))) > 0x7E3DL), l_681.x)), (*l_676))) ^ 0xCB345024L) <= l_574))))))) , (-8L)))), ((VECTOR(int32_t, 2))(0x32BFA021L)), 0x60667A6FL)).w;
                        l_718[1]--;
                    }
                }
                --p_852->g_725;
                if ((atomic_inc(&p_852->g_atomic_input[57 * get_linear_group_id() + 39]) == 4))
                { /* block id: 317 */
                    int32_t l_729 = 1L;
                    int32_t *l_728 = &l_729;
                    int32_t *l_730 = (void*)0;
                    int32_t *l_731 = &l_729;
                    int32_t *l_732 = &l_729;
                    int32_t *l_733 = &l_729;
                    struct S2 l_734 = {-5L,0UL,{0x0967L,0x0D3CL,0x85L},3L,0UL,6L,18446744073709551615UL,0x68C9F5C4L,0x02E105F8L,65535UL};/* VOLATILE GLOBAL l_734 */
                    struct S2 l_735 = {0x08556DFDA0F5937DL,0xE40A53262E574F85L,{7L,-1L,0UL},0x3AB19300L,1UL,0x6CE24EBCL,0xFFE89FF3FD912719L,2L,0x4BAB3B3EL,65535UL};/* VOLATILE GLOBAL l_735 */
                    l_733 = (l_732 = (l_731 = (l_730 = l_728)));
                    l_735 = l_734;
                    unsigned int result = 0;
                    result += l_729;
                    result += l_734.f0;
                    result += l_734.f1;
                    result += l_734.f2.f0;
                    result += l_734.f2.f1;
                    result += l_734.f2.f2;
                    result += l_734.f3;
                    result += l_734.f4;
                    result += l_734.f5;
                    result += l_734.f6;
                    result += l_734.f7;
                    result += l_734.f8;
                    result += l_734.f9;
                    result += l_735.f0;
                    result += l_735.f1;
                    result += l_735.f2.f0;
                    result += l_735.f2.f1;
                    result += l_735.f2.f2;
                    result += l_735.f3;
                    result += l_735.f4;
                    result += l_735.f5;
                    result += l_735.f6;
                    result += l_735.f7;
                    result += l_735.f8;
                    result += l_735.f9;
                    atomic_add(&p_852->g_special_values[57 * get_linear_group_id() + 39], result);
                }
                else
                { /* block id: 323 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 326 */
                if ((atomic_inc(&p_852->l_atomic_input[45]) == 5))
                { /* block id: 328 */
                    uint16_t l_736 = 1UL;
                    uint32_t l_737 = 0xCE43AE74L;
                    uint16_t l_738 = 0x6875L;
                    l_738 ^= (l_737 = l_736);
                    unsigned int result = 0;
                    result += l_736;
                    result += l_737;
                    result += l_738;
                    atomic_add(&p_852->l_special_values[45], result);
                }
                else
                { /* block id: 331 */
                    (1 + 1);
                }
            }
            return &p_852->g_64;
        }
    }
    (*p_852->g_253) = &l_714;
    atomic_xor(&p_852->g_atomic_reduction[get_linear_group_id()], (**p_852->g_253));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_852->v_collective += p_852->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    l_714 = l_575;
    return &p_852->g_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_79 p_852->g_125 p_852->g_139 p_852->g_80 p_852->g_161 p_852->g_164 p_852->g_64 p_852->g_165 p_852->g_171 p_852->g_7 p_852->g_182 p_852->g_141 p_852->g_94 p_852->g_comm_values p_852->g_177 p_852->g_200 p_852->g_202 p_852->g_180 p_852->g_3 p_852->g_212 p_852->g_253 p_852->g_256 p_852->g_257 p_852->g_85 p_852->g_231 p_852->g_89 p_852->l_comm_values p_852->g_386 p_852->g_219 p_852->g_429 p_852->g_36 p_852->g_454 p_852->g_444 p_852->g_232
 * writes: p_852->g_79 p_852->l_comm_values p_852->g_80 p_852->g_161 p_852->g_64 p_852->g_141 p_852->g_171 p_852->g_7 p_852->g_182 p_852->g_202 p_852->g_180 p_852->g_3 p_852->g_219 p_852->g_254 p_852->g_256 p_852->g_386 p_852->g_2 p_852->g_428 p_852->g_36 p_852->g_86 p_852->g_444
 */
uint8_t  func_126(int64_t  p_127, struct S3 * p_852)
{ /* block id: 41 */
    int16_t *l_145 = &p_852->g_141;
    int16_t **l_144[2][3] = {{&l_145,&l_145,&l_145},{&l_145,&l_145,&l_145}};
    int32_t l_263 = 1L;
    int32_t l_266 = 9L;
    int32_t l_289 = 0x53F47ECDL;
    uint32_t l_318 = 1UL;
    uint32_t *l_367 = &p_852->g_36;
    VECTOR(int32_t, 8) l_370 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
    int32_t *l_430 = &l_266;
    int32_t *l_431 = &p_852->g_79;
    int32_t *l_432 = &l_289;
    int32_t *l_433[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_434[8] = {0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L,0xD29C3FC8L};
    struct S1 *l_443 = &p_852->g_444;
    int8_t *l_447[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    for (p_852->g_79 = 0; (p_852->g_79 < 19); ++p_852->g_79)
    { /* block id: 44 */
        int16_t *l_140[10] = {&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141,&p_852->g_141};
        int16_t **l_142 = &l_140[9];
        VECTOR(uint8_t, 8) l_143 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xF4L), 0xF4L), 0xF4L, 7UL, 0xF4L);
        int64_t *l_146 = (void*)0;
        int64_t *l_147 = (void*)0;
        int32_t l_260 = (-10L);
        int32_t l_265 = 0x76DA0623L;
        int32_t l_267 = (-8L);
        int32_t l_276[3];
        uint32_t *l_363[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_365 = &p_852->g_36;
        struct S1 *l_376 = (void*)0;
        int64_t l_377 = 0x1DE01AF9A5ECCFE2L;
        VECTOR(uint8_t, 2) l_426 = (VECTOR(uint8_t, 2))(4UL, 255UL);
        int i;
        for (i = 0; i < 3; i++)
            l_276[i] = 0L;
        (*p_852->g_257) = (func_130(p_852->g_125.s5, func_133(&p_852->g_64, p_852->g_139, ((*l_142) = l_140[0]), l_143.s4, func_56((p_852->l_comm_values[(safe_mod_func_uint32_t_u_u(p_852->tid, 55))] = (l_144[0][1] == l_142)), p_127, p_852), p_852), p_852) , p_852->g_256);
        for (p_852->g_256.f8 = 11; (p_852->g_256.f8 <= (-17)); p_852->g_256.f8 = safe_sub_func_int64_t_s_s(p_852->g_256.f8, 1))
        { /* block id: 94 */
            int32_t *l_261 = &l_260;
            int32_t *l_262 = &p_852->g_7;
            int32_t *l_264 = &p_852->g_3;
            int32_t *l_268 = (void*)0;
            int32_t *l_269 = (void*)0;
            int32_t l_270[4][2][5] = {{{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L},{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L}},{{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L},{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L}},{{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L},{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L}},{{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L},{0x381F1477L,8L,8L,0x381F1477L,0x381F1477L}}};
            int32_t *l_271 = &l_260;
            int32_t *l_272 = &p_852->g_7;
            int32_t *l_273 = &l_267;
            int32_t *l_274 = &l_270[1][1][3];
            int32_t *l_275 = &l_263;
            int32_t *l_277 = &l_267;
            int32_t *l_278 = &l_260;
            int32_t *l_279 = &p_852->g_7;
            int32_t *l_280 = &l_270[1][0][3];
            int32_t *l_281 = &p_852->g_3;
            int32_t *l_282 = &p_852->g_7;
            int32_t *l_283 = &l_260;
            int32_t *l_284 = &l_267;
            int32_t *l_285 = (void*)0;
            int32_t *l_286 = &p_852->g_7;
            int32_t *l_287 = &l_276[1];
            int32_t *l_288[7][7][1] = {{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}},{{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267},{&l_267}}};
            uint32_t l_290[9][1] = {{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L},{0x27779FA1L}};
            int8_t *l_300 = (void*)0;
            int8_t *l_301 = (void*)0;
            int8_t *l_302 = (void*)0;
            int8_t *l_303 = &p_852->g_64;
            uint64_t *l_316 = &p_852->g_256.f1;
            uint8_t l_317 = 1UL;
            int i, j, k;
            l_290[4][0]++;
            l_289 &= (p_127 || ((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((p_127 || (~(safe_unary_minus_func_uint64_t_u(p_127)))) & (!(safe_div_func_uint8_t_u_u(p_127, ((*l_303) = ((*l_278) = p_127)))))), p_127)), p_852->g_85[0][0])) , (((l_263 > p_852->g_231.y) == l_143.s2) >= l_263)));
            if (p_127)
                continue;
            l_276[1] = ((4L <= (((((((-9L) == ((((((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((((*l_316) &= (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((FAKE_DIVERGE(p_852->group_0_offset, get_group_id(0), 10) == p_127), ((!(FAKE_DIVERGE(p_852->local_2_offset, get_local_id(2), 10) ^ p_127)) || (safe_mul_func_int32_t_s_s(0x5305FA5CL, (!p_127)))))), p_127))) >= p_127), (((l_263 || l_317) == (*l_271)) , (-1L)))), 6)), 7UL)) > p_127) , p_852->g_89) & p_127) >= 1UL) == FAKE_DIVERGE(p_852->group_1_offset, get_group_id(1), 10))) , (-10L)) > p_127) == l_318) ^ 0UL) && l_263)) != (**p_852->g_164));
        }
        if (l_318)
        { /* block id: 103 */
            uint32_t **l_364 = &l_363[5];
            uint32_t **l_366[5];
            int32_t l_378[6] = {0x10281E53L,0x393FC86EL,0x10281E53L,0x10281E53L,0x393FC86EL,0x10281E53L};
            int32_t *l_379 = &l_289;
            int i;
            for (i = 0; i < 5; i++)
                l_366[i] = &l_365;
            if ((atomic_inc(&p_852->g_atomic_input[57 * get_linear_group_id() + 32]) == 3))
            { /* block id: 105 */
                int32_t l_319 = 0x5A837829L;
                uint32_t l_344 = 0x5BC9DA09L;
                for (l_319 = (-26); (l_319 > (-12)); l_319 = safe_add_func_int64_t_s_s(l_319, 5))
                { /* block id: 108 */
                    int32_t l_322 = 9L;
                    VECTOR(uint64_t, 2) l_330 = (VECTOR(uint64_t, 2))(0xF1FC9B049E0BF1E8L, 0x1A9AA2DC8A2202ACL);
                    uint8_t l_331 = 1UL;
                    uint8_t l_341 = 0x29L;
                    int i;
                    for (l_322 = 9; (l_322 <= 29); l_322 = safe_add_func_int16_t_s_s(l_322, 9))
                    { /* block id: 111 */
                        int32_t l_326 = 0x1B24D9D2L;
                        int32_t *l_325 = &l_326;
                        uint16_t l_327 = 0x6559L;
                        struct S0 l_328 = {1L,0x3C63L,0x6BL};
                        struct S0 l_329 = {7L,0x021FL,0x45L};
                        l_325 = (void*)0;
                        l_325 = (void*)0;
                        l_329 = ((l_327 = (-1L)) , l_328);
                    }
                    if ((l_330.x , l_331))
                    { /* block id: 117 */
                        VECTOR(int32_t, 8) l_332 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        uint32_t l_333 = 0x86876B8AL;
                        int64_t l_334 = (-9L);
                        int i;
                        l_333 |= (l_322 = ((VECTOR(int32_t, 2))(l_332.s76)).odd);
                        l_322 = ((VECTOR(int32_t, 4))(8L, (-1L), (-5L), 2L)).w;
                        l_322 = l_334;
                    }
                    else
                    { /* block id: 122 */
                        VECTOR(int32_t, 2) l_335 = (VECTOR(int32_t, 2))(0x54B49C6FL, 0L);
                        int32_t *l_336 = (void*)0;
                        int32_t *l_337 = (void*)0;
                        int32_t *l_338 = (void*)0;
                        int32_t *l_339 = (void*)0;
                        uint8_t l_340 = 252UL;
                        int i;
                        l_322 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_335.yxyyyyxyxyyxxxxx)).odd)).s1;
                        l_337 = l_336;
                        l_339 = l_338;
                        l_322 = l_340;
                    }
                    l_341++;
                }
                l_344 = 1L;
                for (l_344 = 0; (l_344 == 58); l_344 = safe_add_func_int8_t_s_s(l_344, 1))
                { /* block id: 133 */
                    int32_t l_347 = 1L;
                    for (l_347 = 0; (l_347 >= 14); l_347 = safe_add_func_uint16_t_u_u(l_347, 1))
                    { /* block id: 136 */
                        uint16_t l_350 = 65532UL;
                        --l_350;
                    }
                    for (l_347 = 16; (l_347 >= 2); l_347 = safe_sub_func_int8_t_s_s(l_347, 4))
                    { /* block id: 141 */
                        int32_t l_356 = 1L;
                        int32_t *l_355 = &l_356;
                        int32_t *l_357 = &l_356;
                        int64_t l_358[6][4] = {{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL},{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL},{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL},{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL},{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL},{0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL,0x3CCF0C64A288BBBBL}};
                        struct S1 l_359 = {7L,0x08BC74710C580E44L};/* VOLATILE GLOBAL l_359 */
                        struct S1 l_360 = {7L,0x03F742DBE7A1A031L};/* VOLATILE GLOBAL l_360 */
                        uint8_t l_361 = 0xC0L;
                        uint16_t l_362 = 0x981BL;
                        int i, j;
                        l_357 = l_355;
                        l_319 ^= l_358[4][0];
                        l_360 = l_359;
                        l_362 |= l_361;
                    }
                }
                unsigned int result = 0;
                result += l_319;
                result += l_344;
                atomic_add(&p_852->g_special_values[57 * get_linear_group_id() + 32], result);
            }
            else
            { /* block id: 148 */
                (1 + 1);
            }
            (*l_379) ^= ((((*l_364) = l_363[0]) != (l_266 , (l_367 = l_365))) | (((safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_370.s37110353)).hi)), (((p_852->g_371 , p_127) | (safe_rshift_func_uint16_t_u_u(((p_852->g_214.f0 == l_263) || (safe_add_func_int64_t_s_s(((p_852->g_161 , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(0x4D3AL, 0xB90AL, 0x04C0L, 0x7DA5L)).zzywwwzz))).s1067466406305566)).sf) , (((((void*)0 != l_376) | 0x72254E2F47A90DA0L) == l_143.s0) , l_377)), l_276[1]))), p_852->g_141))) > l_370.s0), p_127, ((VECTOR(int32_t, 2))(0x2D12B6D8L)), ((VECTOR(int32_t, 2))(0x0F2815A3L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))((-4L))))).sff34, (int32_t)l_378[4], (int32_t)p_127))).even)), 0x14A079E0L, 0x025628F3L)).x < FAKE_DIVERGE(p_852->group_1_offset, get_group_id(1), 10)), l_276[1])) <= p_852->l_comm_values[(safe_mod_func_uint32_t_u_u(p_852->tid, 55))]) | p_127));
            if (p_127)
                break;
        }
        else
        { /* block id: 155 */
            if ((atomic_inc(&p_852->l_atomic_input[14]) == 5))
            { /* block id: 157 */
                int32_t l_381 = 8L;
                int32_t *l_380 = &l_381;
                int32_t *l_382 = &l_381;
                l_382 = l_380;
                unsigned int result = 0;
                result += l_381;
                atomic_add(&p_852->l_special_values[14], result);
            }
            else
            { /* block id: 159 */
                (1 + 1);
            }
            return p_852->g_182.f6;
        }
        for (p_852->g_3 = 0; (p_852->g_3 == 10); p_852->g_3 = safe_add_func_int8_t_s_s(p_852->g_3, 9))
        { /* block id: 166 */
            int32_t *l_385[3];
            int64_t **l_427 = &l_146;
            int i;
            for (i = 0; i < 3; i++)
                l_385[i] = &l_260;
            p_852->g_386++;
            for (p_852->g_256.f5 = 4; (p_852->g_256.f5 <= (-20)); p_852->g_256.f5--)
            { /* block id: 170 */
                uint64_t l_391 = 9UL;
                int32_t l_392 = 0x4C09CA09L;
                VECTOR(int32_t, 4) l_401 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x6E54826BL), 0x6E54826BL);
                int i;
                l_392 ^= l_391;
                if (l_267)
                    break;
                for (p_852->g_7 = (-4); (p_852->g_7 != 18); p_852->g_7 = safe_add_func_uint16_t_u_u(p_852->g_7, 3))
                { /* block id: 175 */
                    int32_t l_404 = 0L;
                    if ((atomic_inc(&p_852->l_atomic_input[46]) == 2))
                    { /* block id: 177 */
                        int32_t l_396 = 0x540D96EBL;
                        int32_t *l_395[4] = {&l_396,&l_396,&l_396,&l_396};
                        int i;
                        l_395[0] = (void*)0;
                        unsigned int result = 0;
                        result += l_396;
                        atomic_add(&p_852->l_special_values[46], result);
                    }
                    else
                    { /* block id: 179 */
                        (1 + 1);
                    }
                    for (l_266 = (-13); (l_266 >= (-15)); l_266 = safe_sub_func_uint16_t_u_u(l_266, 7))
                    { /* block id: 184 */
                        l_404 &= ((l_276[0] != 255UL) & (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_401.wzyxwywywzyyxyyy)).s2, (safe_add_func_uint8_t_u_u(p_852->g_231.y, 255UL)))));
                    }
                    p_852->g_2 = ((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((1UL < ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(((safe_unary_minus_func_int64_t_s(((safe_rshift_func_uint16_t_u_s(((void*)0 != &l_145), 7)) == 0x1ED8L))) <= (safe_div_func_uint32_t_u_u((0x09296E40L ^ ((((void*)0 != (*p_852->g_164)) == (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((safe_mod_func_uint64_t_u_u(0x2C4EBE45EE10D031L, (p_127 = (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_426.xx)).yyyx)).even)).yyxxxyxyxyyyyyyx, ((VECTOR(uint8_t, 4))((((p_127 , p_127) > p_127) < FAKE_DIVERGE(p_852->local_2_offset, get_local_id(2), 10)), ((VECTOR(uint8_t, 2))(0x42L)), 4UL)).wzwxxzxxyyxzxxwz, ((VECTOR(uint8_t, 16))(0xC1L))))).hi)).s5 ^ p_852->g_34.s5)))), p_852->g_219.y, 0x69L, 0x59L)), 0L, l_404, (-9L), 0x1AL)).s5, 0x11L))) < l_401.y)), 0x13D1EC19L))), p_127, 255UL, 0xA6L, ((VECTOR(uint8_t, 2))(0x4DL)), 0x54L, 0UL)).s20, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(255UL))))).odd, l_391)) , p_127)), 5)), l_404)), l_426.x)), (-8L))), p_852->g_3)) || 1UL);
                    p_852->g_219.y ^= l_289;
                }
            }
            p_852->g_428 = l_427;
        }
    }
    (*p_852->g_429) = p_127;
    l_434[7]--;
    for (p_852->g_256.f5 = (-6); (p_852->g_256.f5 < (-29)); p_852->g_256.f5 = safe_sub_func_int8_t_s_s(p_852->g_256.f5, 8))
    { /* block id: 199 */
        int32_t l_448 = 2L;
        if (((((*p_852->g_164) == (void*)0) , (safe_mul_func_int16_t_s_s(((p_852->g_256.f4 > (safe_add_func_uint32_t_u_u(((void*)0 == l_443), (safe_mod_func_int64_t_s_s((*l_430), (8UL | (+((*l_431) |= (((*l_367) ^= ((l_447[6] == l_447[0]) != 0x1CF72DB3L)) & (*l_432)))))))))) , l_448), p_127))) <= 65535UL))
        { /* block id: 202 */
            uint64_t l_449 = 0x61CE60648A65998AL;
            int32_t *l_467 = &p_852->g_7;
            l_467 = func_56((p_127 & l_449), ((*l_431) <= (((p_127 | (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((p_852->g_454 , (p_852->g_86[2] = (safe_mod_func_uint32_t_u_u((0x16L != (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x7268L, 0x70ECL)), 1L, 0x0B08L)), (int16_t)(((*l_430) = (safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s(((l_449 > 2L) <= (&l_145 != &l_145)), p_127)) != (*p_852->g_165)), 0x1D7F501FL)) && l_449), 7))) < 0UL)))).z, l_449))), 0x338248ECL)))), l_448)), l_449))) == p_127) & p_852->g_89)), p_852);
        }
        else
        { /* block id: 206 */
            int32_t *l_468 = &p_852->g_66;
            l_433[6] = ((*p_852->g_253) = l_468);
        }
        (*l_443) = (*l_443);
        for (l_448 = 19; (l_448 == 2); l_448--)
        { /* block id: 213 */
            (*l_431) = (p_127 ^ p_127);
        }
    }
    return p_852->g_232.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_164 p_852->g_64 p_852->g_165 p_852->g_171 p_852->g_177 p_852->g_180 p_852->g_33 p_852->g_7 p_852->g_182 p_852->g_141 p_852->g_94 p_852->g_comm_values p_852->g_36 p_852->g_200 p_852->g_202 p_852->g_80 p_852->g_3 p_852->g_212 p_852->g_253
 * writes: p_852->g_64 p_852->g_141 p_852->g_171 p_852->g_7 p_852->g_182 p_852->g_202 p_852->g_180 p_852->g_3 p_852->g_219 p_852->g_254
 */
struct S2  func_130(int32_t  p_131, int8_t * p_132, struct S3 * p_852)
{ /* block id: 50 */
    uint32_t l_166[8] = {0x5E3D3FF8L,0x2F54D7D7L,0x5E3D3FF8L,0x5E3D3FF8L,0x2F54D7D7L,0x5E3D3FF8L,0x5E3D3FF8L,0x2F54D7D7L};
    int16_t **l_168[3][10] = {{&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165},{&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165},{&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165,&p_852->g_165}};
    int16_t ***l_167 = &l_168[0][1];
    int16_t **l_169 = &p_852->g_165;
    uint16_t *l_170 = &p_852->g_171;
    VECTOR(int16_t, 4) l_172 = (VECTOR(int16_t, 4))(0x4D2AL, (VECTOR(int16_t, 2))(0x4D2AL, (-7L)), (-7L));
    VECTOR(int8_t, 2) l_173 = (VECTOR(int8_t, 2))(0x02L, 6L);
    VECTOR(int8_t, 2) l_174 = (VECTOR(int8_t, 2))(0x7BL, 0x5DL);
    VECTOR(int8_t, 4) l_175 = (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 1L), 1L);
    VECTOR(int8_t, 16) l_176 = (VECTOR(int8_t, 16))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x06L), 0x06L), 0x06L, 0x2BL, 0x06L, (VECTOR(int8_t, 2))(0x2BL, 0x06L), (VECTOR(int8_t, 2))(0x2BL, 0x06L), 0x2BL, 0x06L, 0x2BL, 0x06L);
    VECTOR(int8_t, 4) l_178 = (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x6CL), 0x6CL);
    VECTOR(int8_t, 16) l_179 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x66L), 0x66L), 0x66L, 7L, 0x66L, (VECTOR(int8_t, 2))(7L, 0x66L), (VECTOR(int8_t, 2))(7L, 0x66L), 7L, 0x66L, 7L, 0x66L);
    int32_t *l_181[5][2][2] = {{{&p_852->g_79,&p_852->g_7},{&p_852->g_79,&p_852->g_7}},{{&p_852->g_79,&p_852->g_7},{&p_852->g_79,&p_852->g_7}},{{&p_852->g_79,&p_852->g_7},{&p_852->g_79,&p_852->g_7}},{{&p_852->g_79,&p_852->g_7},{&p_852->g_79,&p_852->g_7}},{{&p_852->g_79,&p_852->g_7},{&p_852->g_79,&p_852->g_7}}};
    volatile struct S2 *l_183 = (void*)0;
    volatile struct S2 *l_184 = &p_852->g_182;
    VECTOR(uint64_t, 4) l_196 = (VECTOR(uint64_t, 4))(0xE7C32A7BFF7CC213L, (VECTOR(uint64_t, 2))(0xE7C32A7BFF7CC213L, 0xEBF62B63680A1827L), 0xEBF62B63680A1827L);
    VECTOR(uint8_t, 4) l_197 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0x0EL), 0x0EL);
    VECTOR(uint8_t, 2) l_198 = (VECTOR(uint8_t, 2))(253UL, 0x5AL);
    VECTOR(uint8_t, 2) l_199 = (VECTOR(uint8_t, 2))(0x30L, 0x3EL);
    uint64_t *l_201[4] = {&p_852->g_202,&p_852->g_202,&p_852->g_202,&p_852->g_202};
    int8_t l_203 = 0x4DL;
    int8_t *l_204 = (void*)0;
    int8_t *l_205 = (void*)0;
    int8_t *l_206[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_223 = 0x1881EC26L;
    int i, j, k;
    p_852->g_7 ^= ((p_852->g_164 != (void*)0) <= (((l_166[0] >= ((*p_132) ^= l_166[3])) >= ((*p_852->g_165) = (-7L))) == (((*l_170) &= (((*l_167) = (void*)0) != l_169)) || (((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(l_172.zwww)), ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(l_173.xxyyyxyx)).hi, ((VECTOR(int8_t, 4))(l_174.yyyy))))).hi, ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(5L, 0x61L, 0x71L, 0x32L)).xyzywzzxzywzyzxz, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_175.wz)).xxxxxxyxxyyxxyyx))))).s6d))).yxyyxxxyyxxyxxyx)).s52, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(l_176.s59))))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(0x60L, ((VECTOR(int8_t, 2))(p_852->g_177.zw)), 0x0DL)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(l_178.wwyyyxyz)).s0005460736264447, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(0x2BL, 1L, 1L, l_173.y, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_179.s33137a95)).lo)), ((VECTOR(int8_t, 8))(p_852->g_180.xyyxyxyx)))).s9c, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x31L, 0x70L)).yxxx)))).odd))).yxyxyxxyxyyxxxyy))).s4585, (int8_t)1L, (int8_t)p_852->g_33.y))).even, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(1L))))).xyxx))))).odd, ((VECTOR(int8_t, 2))(0x7BL))))))).xyyxyxxy)).s15))), l_178.w, ((VECTOR(int8_t, 4))((-1L))), 9L, p_131, 0L, 0x21L, 0x79L, ((VECTOR(int8_t, 2))(0x5CL)), (-10L), 1L)).odd)).s2652041753470367, ((VECTOR(uint8_t, 16))(0x0DL))))).scbc0))).yzyyyzzxzxwxywzy, ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))(1L))))).s4 , 0xFC7CL))));
    (*l_184) = p_852->g_182;
    if (((((safe_mul_func_int16_t_s_s(1L, (*p_852->g_165))) ^ ((p_852->g_180.x |= ((safe_unary_minus_func_int16_t_s(((safe_lshift_func_int8_t_s_s((*p_132), ((safe_div_func_int8_t_s_s((-7L), p_852->g_94)) && p_852->g_comm_values[p_852->tid]))) > (safe_lshift_func_int16_t_s_u((((l_203 = (p_852->g_177.z , (!(p_852->g_202 ^= (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_196.yywy)).lo)).odd, (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_197.xxxzxyyxywxyxwzy)).s65))))).xxyy, ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xF0L, 0xDEL)).xyyyxyyxyyxyyxyy)).s51, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_198.yxyxxyxyxxxyyxxy)))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_199.xxyyyxyxyxxyxyyx)).s5c97)), p_852->g_36, 2UL, 0xA6L, 1UL)).s2356510221646413))).s36))).xyyx))).odd))).xyyyxxxxyyyxxyxy)).sf51d)).x ^ ((p_852->g_200[5] , FAKE_DIVERGE(p_852->local_0_offset, get_local_id(0), 10)) , (*p_132))))))))) , 0x19F3F1462849A9B3L) <= p_852->g_80[5][0][5]), p_131))))) > p_131)) > 3L)) ^ p_852->g_3) > p_131))
    { /* block id: 60 */
        uint16_t l_207 = 6UL;
        int32_t l_255 = 0L;
        l_207 &= 0x490DD8B2L;
        for (p_852->g_3 = (-10); (p_852->g_3 >= 25); p_852->g_3 = safe_add_func_uint16_t_u_u(p_852->g_3, 9))
        { /* block id: 64 */
            int16_t l_220 = 0x6753L;
            VECTOR(int32_t, 8) l_221 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x156860F1L), 0x156860F1L), 0x156860F1L, (-1L), 0x156860F1L);
            int i;
            for (l_203 = 0; (l_203 <= (-19)); l_203 = safe_sub_func_uint64_t_u_u(l_203, 2))
            { /* block id: 67 */
                struct S1 * volatile l_213 = &p_852->g_214;/* VOLATILE GLOBAL l_213 */
                int32_t l_222 = 0x180935E2L;
                uint64_t *l_242 = (void*)0;
                l_213 = p_852->g_212;
                for (p_852->g_202 = 16; (p_852->g_202 >= 15); p_852->g_202--)
                { /* block id: 71 */
                    uint16_t l_224[3];
                    int32_t **l_227 = (void*)0;
                    int32_t **l_228 = &l_181[0][0][1];
                    VECTOR(int64_t, 8) l_240 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x7D56CCA4D006B99CL), 0x7D56CCA4D006B99CL), 0x7D56CCA4D006B99CL, (-5L), 0x7D56CCA4D006B99CL);
                    uint8_t *l_241 = &p_852->g_80[6][0][0];
                    int8_t l_252 = 0x69L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_224[i] = 0x2C80L;
                    for (p_131 = 0; (p_131 > (-26)); p_131--)
                    { /* block id: 74 */
                        l_220 = ((VECTOR(int32_t, 16))(p_852->g_219.yyxxyyxyyyyyyyxx)).s7;
                        ++l_224[0];
                    }
                    (*l_228) = (void*)0;
                    p_852->g_219.x = (safe_mul_func_int8_t_s_s(((*p_132) = ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_852->g_231.yxxx)))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_852->g_232.xyxx)), (-7L), l_222, ((VECTOR(int8_t, 2))(p_852->g_233.sc4)), (l_222 & (0x7980L >= (((((safe_lshift_func_int16_t_s_u((**p_852->g_164), ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s((((((VECTOR(int64_t, 8))(l_240.s43470044)).s5 == FAKE_DIVERGE(p_852->local_1_offset, get_local_id(1), 10)) != (((*l_241) &= p_131) != 1UL)) < ((void*)0 != l_242)), ((safe_div_func_int16_t_s_s((l_255 = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((((((((((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(p_852->g_245.s3302577332152776)).s0f31, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((((VECTOR(int64_t, 4))(0x39206231FCB92070L, (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(3L, l_252)), p_852->g_33.x)), p_131)), 0x22E59CB8B082DA73L, 0x3CE6465222BB7B0CL)).z ^ p_131), ((VECTOR(uint16_t, 2))(65533UL)), 0x5F4EL)).wwywyzxxwwxzzxwx)).sbd8f)).even))).xxyx))))), 0x262337F8L, ((VECTOR(uint32_t, 8))(0x04509021L)), 0x920DFC0DL, 0x33CE81CBL)), ((VECTOR(uint32_t, 16))(4294967295UL))))).sc , (void*)0) == p_852->g_253) == l_221.s5) , p_131) > l_222) > 0x62346224L) >= (*p_132)), 7L, (-1L), 0x2B60L, ((VECTOR(int16_t, 8))(3L)), 0x2C26L, 0x693BL, 0x6E43L, 0x53A1L)))).s1), 1L)) || 0x4218CA9857A78FE8L))) < l_222), (-9L))) > 0x56E569AFL))) , FAKE_DIVERGE(p_852->group_2_offset, get_group_id(2), 10)) < 0x3C43BF65L) > 4294967286UL) >= p_131))), p_852->g_202, ((VECTOR(int8_t, 4))(0x13L)), 0x54L, 1L)).sbd58))).w), 0x69L));
                    (*p_852->g_253) = &l_255;
                }
            }
        }
    }
    else
    { /* block id: 87 */
        return p_852->g_200[5];
    }
    return p_852->g_200[9];
}


/* ------------------------------------------ */
/* 
 * reads : p_852->g_161
 * writes: p_852->g_161
 */
int8_t * func_133(int8_t * p_134, int64_t * p_135, int16_t * p_136, int32_t  p_137, uint32_t * p_138, struct S3 * p_852)
{ /* block id: 47 */
    int32_t *l_148 = &p_852->g_7;
    int32_t *l_149 = &p_852->g_3;
    int32_t *l_150 = &p_852->g_3;
    int32_t *l_151 = &p_852->g_3;
    int32_t *l_152 = &p_852->g_7;
    int32_t l_153 = 0x0F313514L;
    int32_t *l_154 = &p_852->g_7;
    int32_t *l_155 = &p_852->g_3;
    int32_t *l_156 = (void*)0;
    int32_t *l_157 = &p_852->g_7;
    VECTOR(int32_t, 2) l_158 = (VECTOR(int32_t, 2))(0x7DB9DDADL, (-10L));
    int32_t *l_159 = &p_852->g_7;
    int32_t *l_160[5][1] = {{&p_852->g_3},{&p_852->g_3},{&p_852->g_3},{&p_852->g_3},{&p_852->g_3}};
    int i, j;
    p_852->g_161--;
    return &p_852->g_64;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S3 c_853;
    struct S3* p_852 = &c_853;
    struct S3 c_854 = {
        0x1A924C00L, // p_852->g_2
        1L, // p_852->g_3
        0x649F6D4AL, // p_852->g_7
        (VECTOR(int64_t, 2))(0x35CFDA6C2E3A4C63L, 0x19FA9EF8169C1477L), // p_852->g_29
        (VECTOR(uint32_t, 4))(0x8CD908FBL, (VECTOR(uint32_t, 2))(0x8CD908FBL, 0UL), 0UL), // p_852->g_33
        (VECTOR(uint32_t, 8))(0xB1D4416DL, (VECTOR(uint32_t, 4))(0xB1D4416DL, (VECTOR(uint32_t, 2))(0xB1D4416DL, 5UL), 5UL), 5UL, 0xB1D4416DL, 5UL), // p_852->g_34
        1UL, // p_852->g_36
        0x06L, // p_852->g_64
        2L, // p_852->g_66
        0x2C61B7CEL, // p_852->g_79
        {{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}},{{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL},{0xF1L,255UL,1UL,9UL,1UL,255UL,0xF1L,0xEEL}}}, // p_852->g_80
        {{5L,0x13E0D8C1L,5L,5L,0x13E0D8C1L},{5L,0x13E0D8C1L,5L,5L,0x13E0D8C1L}}, // p_852->g_85
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_852->g_86
        0xA5E5C784L, // p_852->g_89
        (void*)0, // p_852->g_92
        0x2F114C85L, // p_852->g_94
        (-5L), // p_852->g_122
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x57L), 0x57L), 0x57L, 255UL, 0x57L), // p_852->g_125
        (void*)0, // p_852->g_139
        0x7CADL, // p_852->g_141
        2UL, // p_852->g_161
        &p_852->g_141, // p_852->g_165
        &p_852->g_165, // p_852->g_164
        0x243EL, // p_852->g_171
        (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 0x69L), 0x69L), // p_852->g_177
        (VECTOR(int8_t, 2))(5L, 0x03L), // p_852->g_180
        {-3L,0UL,{0x0F5FL,0x7289L,250UL},-1L,0UL,1L,0x124B1641BD3BCB1EL,1L,-1L,1UL}, // p_852->g_182
        {{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL},{0x52AE98F465C1140DL,18446744073709551609UL,{-8L,-1L,1UL},0L,0UL,2L,3UL,0x793D7C05L,6L,65532UL}}, // p_852->g_200
        0xA71DD7EC65E06775L, // p_852->g_202
        (void*)0, // p_852->g_212
        {-7L,-1L}, // p_852->g_214
        (VECTOR(int32_t, 2))(0L, (-1L)), // p_852->g_219
        (VECTOR(int8_t, 2))(3L, (-3L)), // p_852->g_231
        (VECTOR(int8_t, 2))(0x70L, 0x0DL), // p_852->g_232
        (VECTOR(int8_t, 16))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, (-3L)), (-3L)), (-3L), 0x4EL, (-3L), (VECTOR(int8_t, 2))(0x4EL, (-3L)), (VECTOR(int8_t, 2))(0x4EL, (-3L)), 0x4EL, (-3L), 0x4EL, (-3L)), // p_852->g_233
        (VECTOR(uint16_t, 8))(0xCBF5L, (VECTOR(uint16_t, 4))(0xCBF5L, (VECTOR(uint16_t, 2))(0xCBF5L, 7UL), 7UL), 7UL, 0xCBF5L, 7UL), // p_852->g_245
        (void*)0, // p_852->g_254
        &p_852->g_254, // p_852->g_253
        {0L,0xA71A939F94B34C81L,{2L,-1L,0x02L},0x733E96E9L,1UL,0x2498CEFAL,1UL,0L,0x6A668F69L,65535UL}, // p_852->g_256
        &p_852->g_256, // p_852->g_257
        {1L,0x00039FF32F114DF0L}, // p_852->g_371
        0xE6DCCE72L, // p_852->g_386
        &p_852->g_139, // p_852->g_428
        &p_852->g_3, // p_852->g_429
        {0x26074DED6C069431L,0x2630F6BFB2496E74L}, // p_852->g_444
        {1L,1L}, // p_852->g_454
        {-4L,0L}, // p_852->g_479
        18446744073709551614UL, // p_852->g_481
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL), // p_852->g_493
        {-3L,2UL,{0x55D6L,-1L,0x0BL},0x459DC26FL,7UL,0x66444A98L,4UL,0x10386AC8L,-1L,65527UL}, // p_852->g_498
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L)), // p_852->g_499
        {1L,-1L}, // p_852->g_505
        &p_852->g_505, // p_852->g_504
        {0x08952656E27BA878L,8UL,{-1L,-9L,6UL},2L,7UL,1L,18446744073709551615UL,2L,0x05DC7832L,0xFA87L}, // p_852->g_533
        (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0L), 0L), // p_852->g_538
        (void*)0, // p_852->g_581
        {&p_852->g_504,&p_852->g_504,&p_852->g_504,&p_852->g_504}, // p_852->g_584
        &p_852->g_504, // p_852->g_585
        {{-10L,0x61DA6204510AD20CL},{9L,0x612AF8CD56BCABF9L},{-10L,0x61DA6204510AD20CL},{-10L,0x61DA6204510AD20CL},{9L,0x612AF8CD56BCABF9L},{-10L,0x61DA6204510AD20CL},{-10L,0x61DA6204510AD20CL},{9L,0x612AF8CD56BCABF9L},{-10L,0x61DA6204510AD20CL}}, // p_852->g_588
        (void*)0, // p_852->g_598
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_852->g_618
        (VECTOR(int16_t, 2))(0L, 1L), // p_852->g_631
        (VECTOR(uint64_t, 2))(0x14CF6733EEA2FFA6L, 0xE7A1FE74B56619FFL), // p_852->g_640
        1UL, // p_852->g_725
        (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L), // p_852->g_753
        {6L,6L,6L,6L,6L}, // p_852->g_794
        (VECTOR(uint8_t, 2))(0UL, 0xCFL), // p_852->g_811
        (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x2FL), 0x2FL), 0x2FL, 3L, 0x2FL), // p_852->g_817
        0x603FL, // p_852->g_829
        0, // p_852->v_collective
        sequence_input[get_global_id(0)], // p_852->global_0_offset
        sequence_input[get_global_id(1)], // p_852->global_1_offset
        sequence_input[get_global_id(2)], // p_852->global_2_offset
        sequence_input[get_local_id(0)], // p_852->local_0_offset
        sequence_input[get_local_id(1)], // p_852->local_1_offset
        sequence_input[get_local_id(2)], // p_852->local_2_offset
        sequence_input[get_group_id(0)], // p_852->group_0_offset
        sequence_input[get_group_id(1)], // p_852->group_1_offset
        sequence_input[get_group_id(2)], // p_852->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_852->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_853 = c_854;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_852);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_852->g_2, "p_852->g_2", print_hash_value);
    transparent_crc(p_852->g_3, "p_852->g_3", print_hash_value);
    transparent_crc(p_852->g_7, "p_852->g_7", print_hash_value);
    transparent_crc(p_852->g_29.x, "p_852->g_29.x", print_hash_value);
    transparent_crc(p_852->g_29.y, "p_852->g_29.y", print_hash_value);
    transparent_crc(p_852->g_33.x, "p_852->g_33.x", print_hash_value);
    transparent_crc(p_852->g_33.y, "p_852->g_33.y", print_hash_value);
    transparent_crc(p_852->g_33.z, "p_852->g_33.z", print_hash_value);
    transparent_crc(p_852->g_33.w, "p_852->g_33.w", print_hash_value);
    transparent_crc(p_852->g_34.s0, "p_852->g_34.s0", print_hash_value);
    transparent_crc(p_852->g_34.s1, "p_852->g_34.s1", print_hash_value);
    transparent_crc(p_852->g_34.s2, "p_852->g_34.s2", print_hash_value);
    transparent_crc(p_852->g_34.s3, "p_852->g_34.s3", print_hash_value);
    transparent_crc(p_852->g_34.s4, "p_852->g_34.s4", print_hash_value);
    transparent_crc(p_852->g_34.s5, "p_852->g_34.s5", print_hash_value);
    transparent_crc(p_852->g_34.s6, "p_852->g_34.s6", print_hash_value);
    transparent_crc(p_852->g_34.s7, "p_852->g_34.s7", print_hash_value);
    transparent_crc(p_852->g_36, "p_852->g_36", print_hash_value);
    transparent_crc(p_852->g_64, "p_852->g_64", print_hash_value);
    transparent_crc(p_852->g_66, "p_852->g_66", print_hash_value);
    transparent_crc(p_852->g_79, "p_852->g_79", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_852->g_80[i][j][k], "p_852->g_80[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_852->g_85[i][j], "p_852->g_85[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_852->g_86[i], "p_852->g_86[i]", print_hash_value);

    }
    transparent_crc(p_852->g_89, "p_852->g_89", print_hash_value);
    transparent_crc(p_852->g_94, "p_852->g_94", print_hash_value);
    transparent_crc(p_852->g_122, "p_852->g_122", print_hash_value);
    transparent_crc(p_852->g_125.s0, "p_852->g_125.s0", print_hash_value);
    transparent_crc(p_852->g_125.s1, "p_852->g_125.s1", print_hash_value);
    transparent_crc(p_852->g_125.s2, "p_852->g_125.s2", print_hash_value);
    transparent_crc(p_852->g_125.s3, "p_852->g_125.s3", print_hash_value);
    transparent_crc(p_852->g_125.s4, "p_852->g_125.s4", print_hash_value);
    transparent_crc(p_852->g_125.s5, "p_852->g_125.s5", print_hash_value);
    transparent_crc(p_852->g_125.s6, "p_852->g_125.s6", print_hash_value);
    transparent_crc(p_852->g_125.s7, "p_852->g_125.s7", print_hash_value);
    transparent_crc(p_852->g_141, "p_852->g_141", print_hash_value);
    transparent_crc(p_852->g_161, "p_852->g_161", print_hash_value);
    transparent_crc(p_852->g_171, "p_852->g_171", print_hash_value);
    transparent_crc(p_852->g_177.x, "p_852->g_177.x", print_hash_value);
    transparent_crc(p_852->g_177.y, "p_852->g_177.y", print_hash_value);
    transparent_crc(p_852->g_177.z, "p_852->g_177.z", print_hash_value);
    transparent_crc(p_852->g_177.w, "p_852->g_177.w", print_hash_value);
    transparent_crc(p_852->g_180.x, "p_852->g_180.x", print_hash_value);
    transparent_crc(p_852->g_180.y, "p_852->g_180.y", print_hash_value);
    transparent_crc(p_852->g_182.f0, "p_852->g_182.f0", print_hash_value);
    transparent_crc(p_852->g_182.f1, "p_852->g_182.f1", print_hash_value);
    transparent_crc(p_852->g_182.f2.f0, "p_852->g_182.f2.f0", print_hash_value);
    transparent_crc(p_852->g_182.f2.f1, "p_852->g_182.f2.f1", print_hash_value);
    transparent_crc(p_852->g_182.f2.f2, "p_852->g_182.f2.f2", print_hash_value);
    transparent_crc(p_852->g_182.f3, "p_852->g_182.f3", print_hash_value);
    transparent_crc(p_852->g_182.f4, "p_852->g_182.f4", print_hash_value);
    transparent_crc(p_852->g_182.f5, "p_852->g_182.f5", print_hash_value);
    transparent_crc(p_852->g_182.f6, "p_852->g_182.f6", print_hash_value);
    transparent_crc(p_852->g_182.f7, "p_852->g_182.f7", print_hash_value);
    transparent_crc(p_852->g_182.f8, "p_852->g_182.f8", print_hash_value);
    transparent_crc(p_852->g_182.f9, "p_852->g_182.f9", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_852->g_200[i].f0, "p_852->g_200[i].f0", print_hash_value);
        transparent_crc(p_852->g_200[i].f1, "p_852->g_200[i].f1", print_hash_value);
        transparent_crc(p_852->g_200[i].f2.f0, "p_852->g_200[i].f2.f0", print_hash_value);
        transparent_crc(p_852->g_200[i].f2.f1, "p_852->g_200[i].f2.f1", print_hash_value);
        transparent_crc(p_852->g_200[i].f2.f2, "p_852->g_200[i].f2.f2", print_hash_value);
        transparent_crc(p_852->g_200[i].f3, "p_852->g_200[i].f3", print_hash_value);
        transparent_crc(p_852->g_200[i].f4, "p_852->g_200[i].f4", print_hash_value);
        transparent_crc(p_852->g_200[i].f5, "p_852->g_200[i].f5", print_hash_value);
        transparent_crc(p_852->g_200[i].f6, "p_852->g_200[i].f6", print_hash_value);
        transparent_crc(p_852->g_200[i].f7, "p_852->g_200[i].f7", print_hash_value);
        transparent_crc(p_852->g_200[i].f8, "p_852->g_200[i].f8", print_hash_value);
        transparent_crc(p_852->g_200[i].f9, "p_852->g_200[i].f9", print_hash_value);

    }
    transparent_crc(p_852->g_202, "p_852->g_202", print_hash_value);
    transparent_crc(p_852->g_214.f0, "p_852->g_214.f0", print_hash_value);
    transparent_crc(p_852->g_214.f1, "p_852->g_214.f1", print_hash_value);
    transparent_crc(p_852->g_219.x, "p_852->g_219.x", print_hash_value);
    transparent_crc(p_852->g_219.y, "p_852->g_219.y", print_hash_value);
    transparent_crc(p_852->g_231.x, "p_852->g_231.x", print_hash_value);
    transparent_crc(p_852->g_231.y, "p_852->g_231.y", print_hash_value);
    transparent_crc(p_852->g_232.x, "p_852->g_232.x", print_hash_value);
    transparent_crc(p_852->g_232.y, "p_852->g_232.y", print_hash_value);
    transparent_crc(p_852->g_233.s0, "p_852->g_233.s0", print_hash_value);
    transparent_crc(p_852->g_233.s1, "p_852->g_233.s1", print_hash_value);
    transparent_crc(p_852->g_233.s2, "p_852->g_233.s2", print_hash_value);
    transparent_crc(p_852->g_233.s3, "p_852->g_233.s3", print_hash_value);
    transparent_crc(p_852->g_233.s4, "p_852->g_233.s4", print_hash_value);
    transparent_crc(p_852->g_233.s5, "p_852->g_233.s5", print_hash_value);
    transparent_crc(p_852->g_233.s6, "p_852->g_233.s6", print_hash_value);
    transparent_crc(p_852->g_233.s7, "p_852->g_233.s7", print_hash_value);
    transparent_crc(p_852->g_233.s8, "p_852->g_233.s8", print_hash_value);
    transparent_crc(p_852->g_233.s9, "p_852->g_233.s9", print_hash_value);
    transparent_crc(p_852->g_233.sa, "p_852->g_233.sa", print_hash_value);
    transparent_crc(p_852->g_233.sb, "p_852->g_233.sb", print_hash_value);
    transparent_crc(p_852->g_233.sc, "p_852->g_233.sc", print_hash_value);
    transparent_crc(p_852->g_233.sd, "p_852->g_233.sd", print_hash_value);
    transparent_crc(p_852->g_233.se, "p_852->g_233.se", print_hash_value);
    transparent_crc(p_852->g_233.sf, "p_852->g_233.sf", print_hash_value);
    transparent_crc(p_852->g_245.s0, "p_852->g_245.s0", print_hash_value);
    transparent_crc(p_852->g_245.s1, "p_852->g_245.s1", print_hash_value);
    transparent_crc(p_852->g_245.s2, "p_852->g_245.s2", print_hash_value);
    transparent_crc(p_852->g_245.s3, "p_852->g_245.s3", print_hash_value);
    transparent_crc(p_852->g_245.s4, "p_852->g_245.s4", print_hash_value);
    transparent_crc(p_852->g_245.s5, "p_852->g_245.s5", print_hash_value);
    transparent_crc(p_852->g_245.s6, "p_852->g_245.s6", print_hash_value);
    transparent_crc(p_852->g_245.s7, "p_852->g_245.s7", print_hash_value);
    transparent_crc(p_852->g_256.f0, "p_852->g_256.f0", print_hash_value);
    transparent_crc(p_852->g_256.f1, "p_852->g_256.f1", print_hash_value);
    transparent_crc(p_852->g_256.f2.f0, "p_852->g_256.f2.f0", print_hash_value);
    transparent_crc(p_852->g_256.f2.f1, "p_852->g_256.f2.f1", print_hash_value);
    transparent_crc(p_852->g_256.f2.f2, "p_852->g_256.f2.f2", print_hash_value);
    transparent_crc(p_852->g_256.f3, "p_852->g_256.f3", print_hash_value);
    transparent_crc(p_852->g_256.f4, "p_852->g_256.f4", print_hash_value);
    transparent_crc(p_852->g_256.f5, "p_852->g_256.f5", print_hash_value);
    transparent_crc(p_852->g_256.f6, "p_852->g_256.f6", print_hash_value);
    transparent_crc(p_852->g_256.f7, "p_852->g_256.f7", print_hash_value);
    transparent_crc(p_852->g_256.f8, "p_852->g_256.f8", print_hash_value);
    transparent_crc(p_852->g_256.f9, "p_852->g_256.f9", print_hash_value);
    transparent_crc(p_852->g_371.f0, "p_852->g_371.f0", print_hash_value);
    transparent_crc(p_852->g_371.f1, "p_852->g_371.f1", print_hash_value);
    transparent_crc(p_852->g_386, "p_852->g_386", print_hash_value);
    transparent_crc(p_852->g_444.f0, "p_852->g_444.f0", print_hash_value);
    transparent_crc(p_852->g_444.f1, "p_852->g_444.f1", print_hash_value);
    transparent_crc(p_852->g_454.f0, "p_852->g_454.f0", print_hash_value);
    transparent_crc(p_852->g_454.f1, "p_852->g_454.f1", print_hash_value);
    transparent_crc(p_852->g_479.f0, "p_852->g_479.f0", print_hash_value);
    transparent_crc(p_852->g_479.f1, "p_852->g_479.f1", print_hash_value);
    transparent_crc(p_852->g_481, "p_852->g_481", print_hash_value);
    transparent_crc(p_852->g_493.s0, "p_852->g_493.s0", print_hash_value);
    transparent_crc(p_852->g_493.s1, "p_852->g_493.s1", print_hash_value);
    transparent_crc(p_852->g_493.s2, "p_852->g_493.s2", print_hash_value);
    transparent_crc(p_852->g_493.s3, "p_852->g_493.s3", print_hash_value);
    transparent_crc(p_852->g_493.s4, "p_852->g_493.s4", print_hash_value);
    transparent_crc(p_852->g_493.s5, "p_852->g_493.s5", print_hash_value);
    transparent_crc(p_852->g_493.s6, "p_852->g_493.s6", print_hash_value);
    transparent_crc(p_852->g_493.s7, "p_852->g_493.s7", print_hash_value);
    transparent_crc(p_852->g_498.f0, "p_852->g_498.f0", print_hash_value);
    transparent_crc(p_852->g_498.f1, "p_852->g_498.f1", print_hash_value);
    transparent_crc(p_852->g_498.f2.f0, "p_852->g_498.f2.f0", print_hash_value);
    transparent_crc(p_852->g_498.f2.f1, "p_852->g_498.f2.f1", print_hash_value);
    transparent_crc(p_852->g_498.f2.f2, "p_852->g_498.f2.f2", print_hash_value);
    transparent_crc(p_852->g_498.f3, "p_852->g_498.f3", print_hash_value);
    transparent_crc(p_852->g_498.f4, "p_852->g_498.f4", print_hash_value);
    transparent_crc(p_852->g_498.f5, "p_852->g_498.f5", print_hash_value);
    transparent_crc(p_852->g_498.f6, "p_852->g_498.f6", print_hash_value);
    transparent_crc(p_852->g_498.f7, "p_852->g_498.f7", print_hash_value);
    transparent_crc(p_852->g_498.f8, "p_852->g_498.f8", print_hash_value);
    transparent_crc(p_852->g_498.f9, "p_852->g_498.f9", print_hash_value);
    transparent_crc(p_852->g_499.s0, "p_852->g_499.s0", print_hash_value);
    transparent_crc(p_852->g_499.s1, "p_852->g_499.s1", print_hash_value);
    transparent_crc(p_852->g_499.s2, "p_852->g_499.s2", print_hash_value);
    transparent_crc(p_852->g_499.s3, "p_852->g_499.s3", print_hash_value);
    transparent_crc(p_852->g_499.s4, "p_852->g_499.s4", print_hash_value);
    transparent_crc(p_852->g_499.s5, "p_852->g_499.s5", print_hash_value);
    transparent_crc(p_852->g_499.s6, "p_852->g_499.s6", print_hash_value);
    transparent_crc(p_852->g_499.s7, "p_852->g_499.s7", print_hash_value);
    transparent_crc(p_852->g_505.f0, "p_852->g_505.f0", print_hash_value);
    transparent_crc(p_852->g_505.f1, "p_852->g_505.f1", print_hash_value);
    transparent_crc(p_852->g_533.f0, "p_852->g_533.f0", print_hash_value);
    transparent_crc(p_852->g_533.f1, "p_852->g_533.f1", print_hash_value);
    transparent_crc(p_852->g_533.f2.f0, "p_852->g_533.f2.f0", print_hash_value);
    transparent_crc(p_852->g_533.f2.f1, "p_852->g_533.f2.f1", print_hash_value);
    transparent_crc(p_852->g_533.f2.f2, "p_852->g_533.f2.f2", print_hash_value);
    transparent_crc(p_852->g_533.f3, "p_852->g_533.f3", print_hash_value);
    transparent_crc(p_852->g_533.f4, "p_852->g_533.f4", print_hash_value);
    transparent_crc(p_852->g_533.f5, "p_852->g_533.f5", print_hash_value);
    transparent_crc(p_852->g_533.f6, "p_852->g_533.f6", print_hash_value);
    transparent_crc(p_852->g_533.f7, "p_852->g_533.f7", print_hash_value);
    transparent_crc(p_852->g_533.f8, "p_852->g_533.f8", print_hash_value);
    transparent_crc(p_852->g_533.f9, "p_852->g_533.f9", print_hash_value);
    transparent_crc(p_852->g_538.x, "p_852->g_538.x", print_hash_value);
    transparent_crc(p_852->g_538.y, "p_852->g_538.y", print_hash_value);
    transparent_crc(p_852->g_538.z, "p_852->g_538.z", print_hash_value);
    transparent_crc(p_852->g_538.w, "p_852->g_538.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_852->g_588[i].f0, "p_852->g_588[i].f0", print_hash_value);
        transparent_crc(p_852->g_588[i].f1, "p_852->g_588[i].f1", print_hash_value);

    }
    transparent_crc(p_852->g_618.s0, "p_852->g_618.s0", print_hash_value);
    transparent_crc(p_852->g_618.s1, "p_852->g_618.s1", print_hash_value);
    transparent_crc(p_852->g_618.s2, "p_852->g_618.s2", print_hash_value);
    transparent_crc(p_852->g_618.s3, "p_852->g_618.s3", print_hash_value);
    transparent_crc(p_852->g_618.s4, "p_852->g_618.s4", print_hash_value);
    transparent_crc(p_852->g_618.s5, "p_852->g_618.s5", print_hash_value);
    transparent_crc(p_852->g_618.s6, "p_852->g_618.s6", print_hash_value);
    transparent_crc(p_852->g_618.s7, "p_852->g_618.s7", print_hash_value);
    transparent_crc(p_852->g_631.x, "p_852->g_631.x", print_hash_value);
    transparent_crc(p_852->g_631.y, "p_852->g_631.y", print_hash_value);
    transparent_crc(p_852->g_640.x, "p_852->g_640.x", print_hash_value);
    transparent_crc(p_852->g_640.y, "p_852->g_640.y", print_hash_value);
    transparent_crc(p_852->g_725, "p_852->g_725", print_hash_value);
    transparent_crc(p_852->g_753.s0, "p_852->g_753.s0", print_hash_value);
    transparent_crc(p_852->g_753.s1, "p_852->g_753.s1", print_hash_value);
    transparent_crc(p_852->g_753.s2, "p_852->g_753.s2", print_hash_value);
    transparent_crc(p_852->g_753.s3, "p_852->g_753.s3", print_hash_value);
    transparent_crc(p_852->g_753.s4, "p_852->g_753.s4", print_hash_value);
    transparent_crc(p_852->g_753.s5, "p_852->g_753.s5", print_hash_value);
    transparent_crc(p_852->g_753.s6, "p_852->g_753.s6", print_hash_value);
    transparent_crc(p_852->g_753.s7, "p_852->g_753.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_852->g_794[i], "p_852->g_794[i]", print_hash_value);

    }
    transparent_crc(p_852->g_811.x, "p_852->g_811.x", print_hash_value);
    transparent_crc(p_852->g_811.y, "p_852->g_811.y", print_hash_value);
    transparent_crc(p_852->g_817.s0, "p_852->g_817.s0", print_hash_value);
    transparent_crc(p_852->g_817.s1, "p_852->g_817.s1", print_hash_value);
    transparent_crc(p_852->g_817.s2, "p_852->g_817.s2", print_hash_value);
    transparent_crc(p_852->g_817.s3, "p_852->g_817.s3", print_hash_value);
    transparent_crc(p_852->g_817.s4, "p_852->g_817.s4", print_hash_value);
    transparent_crc(p_852->g_817.s5, "p_852->g_817.s5", print_hash_value);
    transparent_crc(p_852->g_817.s6, "p_852->g_817.s6", print_hash_value);
    transparent_crc(p_852->g_817.s7, "p_852->g_817.s7", print_hash_value);
    transparent_crc(p_852->g_829, "p_852->g_829", print_hash_value);
    transparent_crc(p_852->v_collective, "p_852->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_852->g_special_values[i + 57 * get_linear_group_id()], "p_852->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_852->l_special_values[i], "p_852->l_special_values[i]", print_hash_value);
    transparent_crc(p_852->l_comm_values[get_linear_local_id()], "p_852->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_852->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_852->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
