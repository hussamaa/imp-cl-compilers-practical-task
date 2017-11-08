// --atomics 16 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 27,16,21 -l 3,4,7
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

__constant uint32_t permutations[10][84] = {
{63,9,30,32,4,14,62,80,83,27,12,21,0,40,73,38,25,35,45,34,77,74,44,43,70,49,58,22,53,75,10,42,79,64,37,61,71,46,15,11,26,7,24,51,57,68,52,69,3,76,33,2,66,55,36,28,65,41,54,72,67,59,47,18,82,13,23,31,56,8,60,16,78,5,81,50,48,17,29,1,20,19,39,6}, // permutation 0
{33,68,56,22,5,53,55,51,0,28,30,67,10,60,54,21,74,61,47,39,25,65,35,32,75,15,38,13,26,19,72,20,41,59,62,80,71,6,83,37,76,12,31,50,23,48,70,11,42,2,73,36,17,46,66,57,77,40,1,24,81,63,49,3,64,43,45,9,79,4,29,52,18,27,78,14,58,69,16,44,7,34,8,82}, // permutation 1
{1,17,76,81,14,79,6,7,54,50,8,64,22,58,53,47,4,25,34,75,77,73,36,68,78,67,59,19,83,16,0,66,43,57,35,51,55,52,41,48,18,38,56,24,69,80,71,40,46,33,74,23,2,30,21,10,28,62,70,63,45,44,31,27,13,37,60,29,15,20,5,82,3,12,72,39,65,32,61,9,42,11,49,26}, // permutation 2
{67,53,56,43,52,68,79,82,74,66,1,72,31,3,27,51,59,36,64,71,10,48,22,58,14,77,81,45,33,19,46,5,20,37,16,8,29,57,4,47,34,65,23,83,12,55,30,28,18,17,60,24,73,2,32,76,63,62,40,61,54,38,0,44,11,41,6,69,26,9,78,39,42,75,35,15,13,70,49,80,50,25,7,21}, // permutation 3
{25,39,74,2,24,19,52,0,65,32,11,60,6,59,63,35,28,69,47,54,49,51,10,44,61,16,21,46,26,15,81,42,82,13,72,36,48,5,27,30,37,45,83,23,18,7,41,43,68,78,33,29,20,4,1,14,40,22,53,3,58,71,31,62,70,75,73,38,79,80,77,56,34,9,67,55,64,50,57,17,12,8,66,76}, // permutation 4
{4,73,44,42,19,18,35,67,46,81,22,9,20,31,7,38,49,6,64,45,28,65,48,32,0,14,21,15,26,23,12,52,8,11,40,53,34,29,2,17,83,5,62,41,82,25,78,70,63,30,33,75,10,55,61,57,71,51,68,69,37,27,58,39,24,47,54,1,3,72,59,74,60,43,16,66,79,36,77,50,56,80,76,13}, // permutation 5
{18,19,82,43,27,28,37,22,71,2,78,42,68,58,29,26,40,3,44,9,80,16,69,8,61,1,14,39,59,11,64,32,46,38,34,66,24,56,7,76,30,12,49,17,4,63,77,21,75,73,41,62,55,5,74,15,52,81,6,25,79,35,65,0,13,53,45,57,70,72,83,23,31,50,36,60,51,20,54,10,48,67,33,47}, // permutation 6
{38,25,64,77,15,21,34,29,60,79,62,9,61,65,40,48,52,24,83,19,42,80,16,41,73,70,71,4,1,59,72,7,2,49,31,43,50,46,17,82,81,63,51,58,67,57,39,30,18,44,0,11,10,66,55,6,69,76,75,35,45,27,23,22,54,32,8,37,5,53,74,56,13,47,12,28,26,78,20,33,68,14,36,3}, // permutation 7
{15,2,3,45,23,44,11,56,29,78,13,17,5,68,46,37,69,30,47,71,41,7,9,32,62,31,54,75,65,80,51,22,55,27,53,42,34,73,76,19,60,20,28,21,67,43,25,81,40,82,83,77,26,1,18,33,57,72,52,35,61,70,74,58,50,38,63,79,8,59,66,0,49,4,10,64,12,14,16,6,24,36,39,48}, // permutation 8
{42,81,14,17,82,56,73,60,24,83,2,66,70,36,58,41,57,15,53,34,43,78,16,9,72,76,49,30,6,3,40,63,61,51,37,55,27,80,68,0,35,4,77,11,64,69,13,5,54,52,38,28,39,79,7,21,19,32,10,26,29,23,48,33,65,12,31,50,44,71,47,67,20,59,74,18,62,45,22,8,1,25,75,46} // permutation 9
};

// Seed: 4186847069

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   volatile int32_t  f1;
   int64_t  f2;
};

struct S1 {
   volatile uint64_t  f0;
   volatile int64_t  f1;
   int16_t  f2;
   volatile uint64_t  f3;
   int64_t  f4;
   uint32_t  f5;
   int8_t  f6;
   volatile int16_t  f7;
   int64_t  f8;
};

struct S2 {
   int32_t  f0;
   uint32_t  f1;
   struct S1  f2;
   int32_t  f3;
   int64_t  f4;
};

struct S3 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    VECTOR(int8_t, 4) g_76;
    struct S2 *g_132;
    struct S2 ** volatile g_131;
    struct S2 ** volatile * volatile g_134;
    VECTOR(uint16_t, 4) g_141;
    struct S2 g_143;
    volatile VECTOR(uint16_t, 8) g_144;
    uint8_t g_159;
    uint16_t g_171;
    uint8_t g_189;
    uint8_t *g_188[10];
    int32_t *g_218;
    volatile VECTOR(uint16_t, 2) g_226;
    volatile struct S1 g_228;
    VECTOR(int16_t, 16) g_243;
    VECTOR(int16_t, 2) g_244;
    VECTOR(int16_t, 16) g_247;
    int16_t g_255[3];
    struct S2 g_260;
    struct S0 g_263[3];
    struct S0 * volatile g_264[10][6];
    struct S0 * volatile g_265[6][8][2];
    struct S0 g_266[4];
    VECTOR(uint32_t, 8) g_303;
    int32_t * volatile g_305;
    struct S2 **g_327;
    struct S2 ***g_326;
    volatile struct S1 *g_330;
    volatile VECTOR(int16_t, 8) g_364;
    uint32_t g_373;
    int32_t ** volatile g_411;
    VECTOR(uint32_t, 2) g_414;
    VECTOR(uint16_t, 8) g_430;
    VECTOR(uint16_t, 8) g_432;
    volatile VECTOR(uint16_t, 8) g_433;
    VECTOR(uint16_t, 8) g_434;
    volatile VECTOR(uint16_t, 8) g_437;
    volatile VECTOR(uint16_t, 4) g_439;
    VECTOR(uint16_t, 16) g_440;
    VECTOR(uint16_t, 2) g_442;
    VECTOR(uint16_t, 8) g_447;
    struct S2 g_470;
    volatile VECTOR(int32_t, 8) g_495;
    struct S2 g_499[4];
    struct S2 * volatile g_500;
    VECTOR(uint8_t, 16) g_518;
    volatile int32_t g_549[4];
    uint32_t g_550;
    VECTOR(int8_t, 8) g_557;
    int32_t ** volatile g_584;
    volatile VECTOR(uint8_t, 2) g_589;
    struct S0 g_609;
    volatile VECTOR(int8_t, 4) g_612;
    volatile VECTOR(uint8_t, 2) g_619;
    VECTOR(uint8_t, 2) g_620;
    VECTOR(int32_t, 4) g_648;
    struct S0 g_723;
    volatile VECTOR(int8_t, 2) g_744;
    int64_t g_751;
    struct S1 *g_753;
    struct S1 *g_757;
    struct S1 ** volatile g_774;
    volatile int64_t g_780;
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
uint16_t  func_1(struct S3 * p_856);
int32_t * func_63(int32_t  p_64, int32_t  p_65, int32_t * p_66, uint16_t  p_67, struct S3 * p_856);
int8_t  func_78(int32_t * p_79, int32_t * p_80, uint32_t  p_81, int32_t * p_82, uint64_t  p_83, struct S3 * p_856);
struct S0  func_150(int32_t  p_151, struct S2 *** p_152, struct S2 *** p_153, uint64_t  p_154, int64_t  p_155, struct S3 * p_856);
int32_t * func_167(uint64_t  p_168, struct S3 * p_856);
int32_t * func_174(int8_t  p_175, uint64_t  p_176, struct S2 *** p_177, int32_t  p_178, int32_t * p_179, struct S3 * p_856);
uint8_t * func_182(uint8_t  p_183, uint32_t  p_184, int32_t  p_185, uint8_t * p_186, struct S3 * p_856);
int32_t * func_191(uint64_t  p_192, uint8_t * p_193, int32_t ** p_194, struct S3 * p_856);
int32_t * func_207(struct S2 ** p_208, uint32_t  p_209, int32_t  p_210, uint32_t  p_211, uint32_t  p_212, struct S3 * p_856);
struct S2 ** func_213(uint8_t * p_214, struct S3 * p_856);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_856->g_4 p_856->g_131 p_856->g_134 p_856->g_143.f2.f1 p_856->g_159 p_856->g_171 p_856->g_76 p_856->g_188 p_856->g_132 p_856->g_260.f3 p_856->g_143.f1 p_856->g_143.f4 p_856->g_189 p_856->g_143.f2.f3 p_856->g_255 p_856->g_260.f2.f2 p_856->g_305 p_856->g_143.f0 p_856->g_260.f0 p_856->g_326 p_856->g_260.f2.f0 p_856->g_141 p_856->g_260.f1 p_856->g_260.f2.f6 p_856->g_218 p_856->g_609.f1 p_856->g_432 p_856->g_470.f2.f4 p_856->g_550 p_856->g_499.f2.f8 p_856->g_499.f2.f4 p_856->g_244 p_856->g_470.f0 p_856->g_589 p_856->g_143.f2.f2 p_856->g_499.f1 p_856->g_434 p_856->g_143.f2.f4 p_856->g_143.f2.f8 p_856->g_609.f2 p_856->g_499.f2.f3 p_856->g_411 p_856->g_723 p_856->g_330 p_856->g_228 p_856->g_414 p_856->g_499.f0 p_856->g_753 p_856->g_774
 * writes: p_856->g_4 p_856->g_131 p_856->g_159 p_856->g_171 p_856->g_143.f0 p_856->g_218 p_856->g_260.f0 p_856->g_260.f1 p_856->g_330 p_856->g_260.f3 p_856->g_141 p_856->g_143.f1 p_856->g_143.f4 p_856->g_499.f2.f8 p_856->g_499.f2.f6 p_856->g_470.f0 p_856->g_440 p_856->g_228 p_856->g_143.f2.f4 p_856->g_757
 */
uint16_t  func_1(struct S3 * p_856)
{ /* block id: 4 */
    int32_t l_69 = 0x3355C915L;
    VECTOR(int8_t, 2) l_72 = (VECTOR(int8_t, 2))((-1L), 8L);
    VECTOR(int8_t, 16) l_74 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int8_t, 8) l_75 = (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x05L), 0x05L), 0x05L, (-9L), 0x05L);
    VECTOR(int8_t, 16) l_77 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x51L), 0x51L), 0x51L, 8L, 0x51L, (VECTOR(int8_t, 2))(8L, 0x51L), (VECTOR(int8_t, 2))(8L, 0x51L), 8L, 0x51L, 8L, 0x51L);
    int32_t *l_742 = &p_856->g_143.f0;
    struct S1 *l_758[6][9];
    int32_t **l_761 = (void*)0;
    int32_t l_775 = 0x28D87ED8L;
    VECTOR(int32_t, 8) l_776 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x736CD753L), 0x736CD753L), 0x736CD753L, 0L, 0x736CD753L);
    int32_t l_778 = 6L;
    uint64_t l_781[2];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
            l_758[i][j] = &p_856->g_143.f2;
    }
    for (i = 0; i < 2; i++)
        l_781[i] = 0x4561FF986E283A40L;
    for (p_856->g_4 = 0; (p_856->g_4 <= (-6)); p_856->g_4 = safe_sub_func_int16_t_s_s(p_856->g_4, 5))
    { /* block id: 7 */
        uint8_t l_68 = 0xFFL;
        int32_t *l_71[1][2];
        int32_t **l_70 = &l_71[0][0];
        int16_t l_743 = 0L;
        VECTOR(int8_t, 2) l_745 = (VECTOR(int8_t, 2))(0x63L, 1L);
        uint64_t l_752 = 18446744073709551615UL;
        struct S1 *l_759 = &p_856->g_470.f2;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_71[i][j] = &l_69;
        }
        if ((atomic_inc(&p_856->g_atomic_input[16 * get_linear_group_id() + 9]) == 3))
        { /* block id: 9 */
            int8_t l_7[7][8][2] = {{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}},{{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L},{0x64L,0L}}};
            uint8_t l_8[10][10] = {{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L},{0x34L,255UL,250UL,255UL,0x34L,0x34L,255UL,250UL,255UL,0x34L}};
            uint32_t l_9 = 0x065F4B3FL;
            int i, j, k;
            l_7[3][1][0] ^= 0x060EC01EL;
            l_8[2][1] = 0x49968CB6L;
            l_9 ^= 0L;
            for (l_9 = 26; (l_9 >= 42); ++l_9)
            { /* block id: 15 */
                int32_t l_12 = 0x2812C005L;
                if (l_12)
                { /* block id: 16 */
                    VECTOR(int16_t, 2) l_13 = (VECTOR(int16_t, 2))(0x1BB1L, 0x4A3CL);
                    int64_t l_14 = 0x184EB300A9E1A0E1L;
                    uint8_t l_15 = 0x18L;
                    struct S2 l_17 = {0x0B49F2B7L,0x26243A5DL,{18446744073709551615UL,0x108FA7AD11E75876L,0x7AB8L,18446744073709551615UL,0x7D660F181E214356L,4294967293UL,0x62L,-4L,-1L},0x5069097DL,0x3CBFB41CE094BF7DL};/* VOLATILE GLOBAL l_17 */
                    struct S2 *l_16 = &l_17;
                    struct S2 *l_18 = &l_17;
                    int i;
                    l_18 = ((l_13.x , (l_15 = l_14)) , l_16);
                    for (l_17.f2.f4 = 0; (l_17.f2.f4 >= (-20)); l_17.f2.f4 = safe_sub_func_uint16_t_u_u(l_17.f2.f4, 4))
                    { /* block id: 21 */
                        int32_t l_21 = (-1L);
                        uint32_t l_22 = 0x2B60D90CL;
                        uint16_t l_23 = 0xD639L;
                        struct S0 l_24 = {4294967295UL,0x785A0455L,0L};/* VOLATILE GLOBAL l_24 */
                        struct S0 l_25 = {0x6D0C81CFL,0x4DBBF849L,-1L};/* VOLATILE GLOBAL l_25 */
                        uint8_t l_26 = 0xAFL;
                        struct S1 l_27 = {0x7B22F105EEFFBB89L,0x1F73439D6F469371L,0x4D22L,0UL,-1L,4294967295UL,0x6DL,0x04B3L,0x0B773B032F891D98L};/* VOLATILE GLOBAL l_27 */
                        struct S2 l_28 = {0L,9UL,{0x5A3FF566449D4C0FL,0L,4L,0xC45AFC85E2D206F8L,-1L,0x29C70A11L,0x1CL,0x1E91L,-1L},1L,-3L};/* VOLATILE GLOBAL l_28 */
                        struct S1 l_29 = {0x16F54511143DC2B6L,0x0A8D5E9CB1239EB3L,-1L,0x7287D282E35A6FF1L,-1L,4294967291UL,0x2EL,0x55E1L,-1L};/* VOLATILE GLOBAL l_29 */
                        struct S1 l_30[4][5] = {{{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L}},{{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L}},{{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L}},{{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{0x8CF6E8DA2FB924F1L,0x49E4C9CD7D83882CL,-9L,18446744073709551615UL,-1L,0xFBB8A93DL,0x56L,7L,0L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L},{18446744073709551608UL,-1L,0x612EL,0xF4FAD40830044FF4L,0x55250F4D7AA0E731L,0xFB7A05A8L,0x1DL,-1L,0x510901DBA863D3F5L}}};
                        int8_t l_31[4][10][6] = {{{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)}},{{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)}},{{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)}},{{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)},{0x18L,(-4L),(-1L),(-7L),(-1L),(-7L)}}};
                        VECTOR(int32_t, 2) l_32 = (VECTOR(int32_t, 2))(0x1D7C2881L, 2L);
                        uint64_t l_33 = 9UL;
                        int i, j, k;
                        l_28 = ((l_22 = l_21) , ((((l_23 , 0x8364B2CBL) , l_24) , (l_25 , (l_26 , l_27))) , l_28));
                        l_30[0][2] = l_29;
                        l_33 ^= (l_17.f0 = ((VECTOR(int32_t, 8))((l_12 &= l_31[1][4][2]), ((VECTOR(int32_t, 4))(l_32.yyyy)), 0x524283DBL, 1L, (-1L))).s3);
                    }
                }
                else
                { /* block id: 29 */
                    int16_t l_34 = 0x6688L;
                    int16_t l_42 = 0x7923L;
                    int32_t l_43 = (-9L);
                    uint32_t l_44[2][2] = {{1UL,1UL},{1UL,1UL}};
                    uint64_t l_45 = 0xC4E0F54C3530B48AL;
                    VECTOR(int64_t, 2) l_46 = (VECTOR(int64_t, 2))((-4L), 0L);
                    int32_t l_47 = 3L;
                    int32_t *l_61 = &l_47;
                    int32_t *l_62 = &l_47;
                    int i, j;
                    if (l_34)
                    { /* block id: 30 */
                        int32_t l_36 = 0L;
                        int32_t *l_35 = &l_36;
                        int32_t *l_37 = &l_36;
                        int16_t l_38[1][9][4] = {{{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L},{3L,3L,3L,3L}}};
                        int32_t l_39 = 1L;
                        int i, j, k;
                        l_37 = l_35;
                        l_12 &= l_38[0][0][1];
                        l_12 |= l_39;
                    }
                    else
                    { /* block id: 34 */
                        int64_t l_40 = 0x309C40C0AAE426BEL;
                        int8_t l_41 = 0L;
                        l_41 = l_40;
                    }
                    if ((l_47 &= (l_46.x |= (l_45 = ((l_42 , l_43) , (l_12 = l_44[1][0]))))))
                    { /* block id: 41 */
                        VECTOR(int32_t, 8) l_48 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4CEE3A2DL), 0x4CEE3A2DL), 0x4CEE3A2DL, 1L, 0x4CEE3A2DL);
                        uint32_t l_49 = 0x3474DD33L;
                        int i;
                        l_47 = (l_48.s0 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_48.s13)), 1L, ((VECTOR(int32_t, 2))(0x77B429FFL, 0x0875C3FAL)), l_49, (-1L), (-3L))).s4);
                    }
                    else
                    { /* block id: 44 */
                        uint16_t l_50[3][10][8] = {{{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL}},{{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL}},{{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL},{0xEA31L,0UL,0xC0DDL,65528UL,3UL,0x01DDL,0x4D6DL,65534UL}}};
                        struct S0 l_53 = {0x0F64FDBAL,0x03829316L,8L};/* VOLATILE GLOBAL l_53 */
                        int i, j, k;
                        ++l_50[2][3][0];
                        l_53 = l_53;
                    }
                    for (l_45 = (-25); (l_45 < 29); ++l_45)
                    { /* block id: 50 */
                        uint32_t l_56 = 1UL;
                        int32_t l_60 = 2L;
                        int32_t *l_59 = &l_60;
                        --l_56;
                        l_59 = (void*)0;
                    }
                    l_62 = l_61;
                }
            }
            unsigned int result = 0;
            int l_7_i0, l_7_i1, l_7_i2;
            for (l_7_i0 = 0; l_7_i0 < 7; l_7_i0++) {
                for (l_7_i1 = 0; l_7_i1 < 8; l_7_i1++) {
                    for (l_7_i2 = 0; l_7_i2 < 2; l_7_i2++) {
                        result += l_7[l_7_i0][l_7_i1][l_7_i2];
                    }
                }
            }
            int l_8_i0, l_8_i1;
            for (l_8_i0 = 0; l_8_i0 < 10; l_8_i0++) {
                for (l_8_i1 = 0; l_8_i1 < 10; l_8_i1++) {
                    result += l_8[l_8_i0][l_8_i1];
                }
            }
            result += l_9;
            atomic_add(&p_856->g_special_values[16 * get_linear_group_id() + 9], result);
        }
        else
        { /* block id: 57 */
            (1 + 1);
        }
        l_742 = func_63((+l_68), l_69, ((*l_70) = &l_69), (((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(l_72.xyxyyxxx)).s4765771013227305, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(0x17L, (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))((0x6AA1D096303E4D4EL >= 18446744073709551610UL), ((VECTOR(int8_t, 2))(l_74.sd8)), 1L)).z)), ((VECTOR(int8_t, 4))(l_75.s2475)), l_74.s4, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_856->g_76.zxyywzzywzxzyyxx)).sec)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(l_77.sea2908b59e8c6625)).s8e05, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x5FL, 0L)).xyxy))))).hi, (int8_t)func_78(&l_69, &p_856->g_4, l_77.s3, &p_856->g_4, p_856->g_3, p_856), (int8_t)p_856->g_2))), p_856->g_comm_values[p_856->tid], 4L, 1L, 0x29L)), 0x53L)).s8176, ((VECTOR(int8_t, 4))(9L))))).zwxyywxyywzwzyyx))).s8 != 0xB1L), p_856);
        if (l_743)
        { /* block id: 374 */
            uint32_t l_748 = 0x9AB81231L;
            int64_t *l_750[9][8][3] = {{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}},{{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751},{&p_856->g_751,(void*)0,&p_856->g_751}}};
            struct S1 **l_754 = &p_856->g_753;
            struct S1 *l_756 = (void*)0;
            struct S1 **l_755[1][6][5] = {{{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756},{&l_756,&l_756,&l_756,&l_756,&l_756}}};
            int32_t **l_760 = (void*)0;
            uint8_t *l_762[2][4][9] = {{{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159}},{{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159,&p_856->g_159}}};
            int32_t l_763 = 0x6A9AEEFFL;
            struct S2 ***l_772 = &p_856->g_327;
            int i, j, k;
            (*l_70) = (*p_856->g_411);
            (*l_70) = (*p_856->g_411);
        }
        else
        { /* block id: 382 */
            struct S1 **l_773 = &l_758[4][2];
            int32_t l_777 = 0x13360CD6L;
            int32_t l_779[1];
            int i;
            for (i = 0; i < 1; i++)
                l_779[i] = (-1L);
            (*p_856->g_774) = ((*l_773) = p_856->g_753);
            l_781[1]--;
            (*p_856->g_305) = l_77.s0;
        }
        if ((atomic_inc(&p_856->l_atomic_input[1]) == 4))
        { /* block id: 389 */
            struct S0 l_784 = {0x70792B1EL,0x06EC3B69L,0x790B72277500A335L};/* VOLATILE GLOBAL l_784 */
            struct S0 l_785[5] = {{0x50A3DA6CL,0x0ADB91F2L,-1L},{0x50A3DA6CL,0x0ADB91F2L,-1L},{0x50A3DA6CL,0x0ADB91F2L,-1L},{0x50A3DA6CL,0x0ADB91F2L,-1L},{0x50A3DA6CL,0x0ADB91F2L,-1L}};
            int32_t l_786 = 0L;
            int16_t l_787 = (-4L);
            struct S2 l_788 = {0L,0xAA4D5658L,{1UL,0x1BB3C993566161E7L,6L,1UL,0x25A4F2E51CF7D3B9L,4294967295UL,-1L,0x0F1AL,0L},0x6468B550L,2L};/* VOLATILE GLOBAL l_788 */
            int8_t l_789 = (-2L);
            int i;
            l_785[4] = l_784;
            l_787 = l_786;
            if ((l_788 , l_789))
            { /* block id: 392 */
                int16_t l_790[1][3][1];
                int32_t l_834[1];
                int32_t *l_833[3];
                int32_t *l_835 = &l_834[0];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_790[i][j][k] = (-10L);
                    }
                }
                for (i = 0; i < 1; i++)
                    l_834[i] = 0x0A38494CL;
                for (i = 0; i < 3; i++)
                    l_833[i] = &l_834[0];
                if (l_790[0][1][0])
                { /* block id: 393 */
                    uint32_t l_791 = 0x8EA77C38L;
                    struct S0 l_792 = {0xE56DF718L,0x6FC51A0BL,0x4EC9C408085E660AL};/* VOLATILE GLOBAL l_792 */
                    l_788.f0 = ((VECTOR(int32_t, 4))((-5L), 0x75B6A97DL, 0L, 0x6FAAD712L)).w;
                    l_784.f1 ^= (l_788.f0 = 0x43AAC9A7L);
                    l_785[3] = (l_791 , l_792);
                }
                else
                { /* block id: 398 */
                    int32_t l_794 = 0L;
                    int32_t *l_793[1][1][3];
                    int32_t *l_795 = (void*)0;
                    uint32_t l_796[10][4][1] = {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}};
                    int8_t l_797 = 0x01L;
                    VECTOR(int16_t, 2) l_798 = (VECTOR(int16_t, 2))(3L, 0x03C9L);
                    struct S2 l_799[9][7] = {{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}},{{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L},{-10L,4294967295UL,{0x0F6117D07FD73F27L,-1L,3L,18446744073709551606UL,0L,1UL,0x0AL,0x06F7L,0L},1L,6L}}};
                    uint32_t l_800 = 4294967295UL;
                    int8_t l_801 = (-5L);
                    uint32_t l_802 = 0x13F6D385L;
                    int8_t l_803 = 0x0CL;
                    struct S2 l_804[6][5][8] = {{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}},{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}},{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}},{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}},{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}},{{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}},{{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x316C6457L,1UL,{18446744073709551611UL,0x33905BE8077DCED3L,0x7476L,1UL,0x65D1166C4FDE0E54L,0xCA17A3E3L,-8L,0x5403L,4L},1L,1L},{0x54E6A513L,4294967290UL,{0x32FFB3AAE4FEB767L,1L,-4L,0xB69E6778965342EDL,-1L,0xFF4F78C8L,0x7AL,0x69BAL,0L},0L,0x29CB5AA83AB5C967L}}}};
                    int8_t l_805 = 1L;
                    uint8_t l_806 = 0UL;
                    VECTOR(int32_t, 4) l_807 = (VECTOR(int32_t, 4))(0x27460433L, (VECTOR(int32_t, 2))(0x27460433L, 1L), 1L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_793[i][j][k] = &l_794;
                        }
                    }
                    l_795 = l_793[0][0][0];
                    l_799[1][3] = ((l_788.f2.f8 |= (l_797 ^= (l_788.f2.f4 &= l_796[7][0][0]))) , (((VECTOR(int16_t, 8))(l_798.yxxyxxxx)).s6 , l_799[1][5]));
                    if (((VECTOR(int32_t, 8))((l_788.f0 = ((l_800 , 2L) , (l_801 ^= (-1L)))), 0x5002CAF3L, (-4L), l_802, l_803, (((l_804[0][1][5] , l_805) , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x42A4L, (-1L))).yyxxyyyx, ((VECTOR(uint16_t, 4))(0x5E1FL, l_806, 0x88CEL, 0x15D2L)).xzyzzyzx))).s1) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_807.zwwxxzww)))).lo)).y), 0x16D98077L, 0x6D5ACB1EL)).s5)
                    { /* block id: 406 */
                        struct S0 l_808 = {4294967295UL,0L,0x11041FA5D0EDF4CCL};/* VOLATILE GLOBAL l_808 */
                        uint32_t l_809 = 4UL;
                        struct S2 l_810 = {1L,0x84F0ABC6L,{0x8A4A4C28EB3716ADL,0L,0x1E5BL,0xC586E99E48B2D1A2L,1L,4294967286UL,0x50L,0x5E0CL,0x5899E2BE5A24ED8BL},0x03E2A6DEL,-8L};/* VOLATILE GLOBAL l_810 */
                        struct S2 l_811 = {0L,0xF39BAEB3L,{1UL,0L,1L,0x6981BDD0D3747EE6L,0x1CAFAD81F28B3593L,0x7F965735L,0x06L,0x57A9L,0L},1L,-6L};/* VOLATILE GLOBAL l_811 */
                        VECTOR(int16_t, 16) l_812 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x516EL), 0x516EL), 0x516EL, (-1L), 0x516EL, (VECTOR(int16_t, 2))((-1L), 0x516EL), (VECTOR(int16_t, 2))((-1L), 0x516EL), (-1L), 0x516EL, (-1L), 0x516EL);
                        uint32_t l_813 = 4294967295UL;
                        uint16_t l_814 = 0x6CD5L;
                        uint64_t l_815 = 1UL;
                        int i;
                        l_784 = l_808;
                        l_814 = ((((VECTOR(uint32_t, 2))(0x20F0C1D6L, 0x92F90013L)).hi , ((l_809 , l_810) , (l_811 , l_812.s6))) , l_813);
                        l_815++;
                    }
                    else
                    { /* block id: 410 */
                        uint32_t l_818 = 0xBFB36109L;
                        uint64_t l_819 = 0UL;
                        struct S0 l_822 = {0x402CFF12L,5L,1L};/* VOLATILE GLOBAL l_822 */
                        struct S0 *l_821 = &l_822;
                        struct S0 **l_820[5];
                        struct S0 **l_823 = (void*)0;
                        uint8_t l_824 = 249UL;
                        uint64_t l_825 = 0x1E04C77CA1D01ADCL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_820[i] = &l_821;
                        l_823 = (l_818 , (l_819 , l_820[3]));
                        l_822.f1 |= ((*l_795) ^= l_824);
                        l_795 = (void*)0;
                        l_822.f1 ^= l_825;
                    }
                }
                for (l_790[0][1][0] = (-3); (l_790[0][1][0] >= (-21)); l_790[0][1][0] = safe_sub_func_uint16_t_u_u(l_790[0][1][0], 1))
                { /* block id: 420 */
                    uint32_t l_828 = 4294967295UL;
                    int32_t l_831 = 1L;
                    int16_t l_832 = (-4L);
                    ++l_828;
                    l_831 = l_831;
                    l_784.f1 = l_832;
                }
                l_835 = l_833[1];
                for (l_834[0] = 9; (l_834[0] != (-9)); --l_834[0])
                { /* block id: 428 */
                    uint32_t l_838 = 4294967291UL;
                    VECTOR(int16_t, 8) l_839 = (VECTOR(int16_t, 8))(0x3CA9L, (VECTOR(int16_t, 4))(0x3CA9L, (VECTOR(int16_t, 2))(0x3CA9L, 0x0382L), 0x0382L), 0x0382L, 0x3CA9L, 0x0382L);
                    uint32_t l_840[8] = {0UL,0xB6B0CC7AL,0UL,0UL,0xB6B0CC7AL,0UL,0UL,0xB6B0CC7AL};
                    int32_t l_842 = 2L;
                    int32_t *l_841 = &l_842;
                    uint32_t **l_843 = (void*)0;
                    uint32_t *l_845 = &l_838;
                    uint32_t **l_844 = &l_845;
                    VECTOR(int32_t, 8) l_846 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x6470C94DL), 0x6470C94DL), 0x6470C94DL, (-6L), 0x6470C94DL);
                    VECTOR(int32_t, 4) l_847 = (VECTOR(int32_t, 4))(0x73D4D037L, (VECTOR(int32_t, 2))(0x73D4D037L, 0x0EB5C74CL), 0x0EB5C74CL);
                    int32_t l_848 = 0x688AC7CFL;
                    int i;
                    l_833[0] = ((l_838 , ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(3UL, 65533UL)).yxyyxxyxxxxxyyxx)).s56, ((VECTOR(uint16_t, 2))(0xA7BEL, 0UL))))).xyxyyxxy)).s1374333727655405, ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(l_839.s0321)).ywwzxzxzzzxywxxz, (int16_t)l_840[4]))).even))).s5151125343015221))).s6) , l_841);
                    l_844 = l_843;
                    l_848 = (l_847.z = (l_846.s3 = ((*l_841) = ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(l_846.s74510010)).s4015263376335233, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_847.xwyxwwyx)))).s1114253250167201))).sc)));
                }
            }
            else
            { /* block id: 436 */
                int64_t l_849 = (-1L);
                int64_t l_850 = (-1L);
                int32_t l_851 = 0x0CAE0EDBL;
                uint32_t l_852 = 7UL;
                uint16_t l_855 = 0UL;
                l_785[4].f1 = (l_851 = ((l_849 = (l_786 = 0x2C4DA039L)) , (l_788.f0 = l_850)));
                ++l_852;
                l_785[4].f1 = ((l_788.f3 = l_855) , 0x4D33A3C0L);
            }
            unsigned int result = 0;
            result += l_784.f0;
            result += l_784.f1;
            result += l_784.f2;
            int l_785_i0;
            for (l_785_i0 = 0; l_785_i0 < 5; l_785_i0++) {
                result += l_785[l_785_i0].f0;
                result += l_785[l_785_i0].f1;
                result += l_785[l_785_i0].f2;
            }
            result += l_786;
            result += l_787;
            result += l_788.f0;
            result += l_788.f1;
            result += l_788.f2.f0;
            result += l_788.f2.f1;
            result += l_788.f2.f2;
            result += l_788.f2.f3;
            result += l_788.f2.f4;
            result += l_788.f2.f5;
            result += l_788.f2.f6;
            result += l_788.f2.f7;
            result += l_788.f2.f8;
            result += l_788.f3;
            result += l_788.f4;
            result += l_789;
            atomic_add(&p_856->l_special_values[1], result);
        }
        else
        { /* block id: 446 */
            (1 + 1);
        }
    }
    return p_856->g_499[3].f2.f8;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_131 p_856->g_134 p_856->g_143.f2.f1 p_856->g_159 p_856->g_171 p_856->g_76 p_856->g_188 p_856->g_132 p_856->g_260.f3 p_856->g_143.f1 p_856->g_143.f4 p_856->g_189 p_856->g_143.f2.f3 p_856->g_255 p_856->g_260.f2.f2 p_856->g_305 p_856->g_143.f0 p_856->g_260.f0 p_856->g_326 p_856->g_260.f1 p_856->g_260.f2.f0 p_856->g_4 p_856->g_141 p_856->g_260.f2.f6 p_856->g_247 p_856->g_143.f3 p_856->g_218 p_856->g_609.f1 p_856->g_648 p_856->g_432 p_856->g_470.f2.f4 p_856->g_499.f0 p_856->g_550 p_856->g_499.f2.f8 p_856->g_499.f2.f4 p_856->g_244 p_856->g_470.f0 p_856->g_260.f4 p_856->g_589 p_856->g_143.f2.f2 p_856->g_499.f1 p_856->g_434 p_856->g_143.f2.f4 p_856->g_143.f2.f8 p_856->g_437 p_856->g_414 p_856->g_226 p_856->g_430 p_856->g_260.f2.f8 p_856->g_609.f2 p_856->g_499.f2.f3 p_856->g_411 p_856->g_723 p_856->g_330 p_856->g_228
 * writes: p_856->g_131 p_856->g_159 p_856->g_171 p_856->g_143.f0 p_856->g_218 p_856->g_260.f0 p_856->g_260.f1 p_856->g_330 p_856->g_260.f3 p_856->g_141 p_856->g_143.f4 p_856->g_143.f1 p_856->g_499.f0 p_856->g_499.f2.f8 p_856->g_499.f2.f6 p_856->g_470.f0 p_856->g_440 p_856->g_414 p_856->g_228 p_856->g_143.f2.f4
 */
int32_t * func_63(int32_t  p_64, int32_t  p_65, int32_t * p_66, uint16_t  p_67, struct S3 * p_856)
{ /* block id: 107 */
    struct S2 *l_142 = &p_856->g_143;
    int32_t l_149 = (-1L);
    uint8_t **l_725 = &p_856->g_188[8];
    int32_t **l_734 = (void*)0;
    int32_t **l_735 = (void*)0;
    int32_t **l_736[8];
    VECTOR(uint16_t, 4) l_737 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65533UL), 65533UL);
    int64_t *l_740 = &p_856->g_143.f2.f4;
    int32_t *l_741 = &p_856->g_260.f0;
    int i;
    for (i = 0; i < 8; i++)
        l_736[i] = &p_856->g_218;
    for (p_64 = 15; (p_64 <= (-3)); --p_64)
    { /* block id: 110 */
        int64_t l_161 = 0x74E5084947FFBDC5L;
        for (p_67 = 0; (p_67 != 26); p_67 = safe_add_func_uint8_t_u_u(p_67, 9))
        { /* block id: 113 */
            VECTOR(int32_t, 2) l_129 = (VECTOR(int32_t, 2))(0x2900B308L, 1L);
            VECTOR(int32_t, 2) l_130 = (VECTOR(int32_t, 2))(0x3153B5C7L, 0x6B03F70AL);
            VECTOR(uint16_t, 16) l_139 = (VECTOR(uint16_t, 16))(0xE7CCL, (VECTOR(uint16_t, 4))(0xE7CCL, (VECTOR(uint16_t, 2))(0xE7CCL, 0x2474L), 0x2474L), 0x2474L, 0xE7CCL, 0x2474L, (VECTOR(uint16_t, 2))(0xE7CCL, 0x2474L), (VECTOR(uint16_t, 2))(0xE7CCL, 0x2474L), 0xE7CCL, 0x2474L, 0xE7CCL, 0x2474L);
            VECTOR(uint16_t, 16) l_140 = (VECTOR(uint16_t, 16))(0x274EL, (VECTOR(uint16_t, 4))(0x274EL, (VECTOR(uint16_t, 2))(0x274EL, 0x6D18L), 0x6D18L), 0x6D18L, 0x274EL, 0x6D18L, (VECTOR(uint16_t, 2))(0x274EL, 0x6D18L), (VECTOR(uint16_t, 2))(0x274EL, 0x6D18L), 0x274EL, 0x6D18L, 0x274EL, 0x6D18L);
            uint32_t l_145 = 0xB7221A5AL;
            int i;
            for (p_65 = 0; (p_65 == (-11)); p_65 = safe_sub_func_uint64_t_u_u(p_65, 9))
            { /* block id: 116 */
                int64_t l_162 = 0x0090F102A2020E37L;
                int32_t l_163 = 0L;
                struct S2 ***l_700 = &p_856->g_327;
                int32_t l_724 = (-1L);
                if (((VECTOR(int32_t, 8))(7L, ((VECTOR(int32_t, 4))(l_129.yxxy)), ((VECTOR(int32_t, 2))(l_130.yy)), 0x61FFD44AL)).s6)
                { /* block id: 117 */
                    struct S2 ** volatile *l_133 = (void*)0;
                    (*p_856->g_134) = p_856->g_131;
                }
                else
                { /* block id: 119 */
                    struct S2 *l_146 = &p_856->g_143;
                    int32_t l_325 = 1L;
                    if (((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(0x51E1L, 0xA6EBL)).xyyxyxxxxyxyyxyx, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(65535UL, 0xB694L, 0x86DDL, 0xD29AL)).hi, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(l_139.s19dda72d44c0c1df)).sa234, ((VECTOR(uint16_t, 2))(0UL, 65535UL)).yxyy))).wxwwwxxw, ((VECTOR(uint16_t, 2))(65534UL, 0xF15CL)).yxxxyyxx))).lo)).xyzzxzxz, ((VECTOR(uint16_t, 16))(l_140.s98fddd542b42e006)).odd))).s44))).xxyxxyxyyyyyyxxy, ((VECTOR(uint16_t, 8))(p_856->g_141.xyzyyxxz)).s1153522236010641))).s17ad, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(0x5BE6L, 0UL, 65534UL, 8UL, (((void*)0 != l_142) & p_856->g_4), 0UL, 0x3268L, 65535UL)).s1125450323640405, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_856->g_144.s0327)).zwxzxywy)).s6, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_145, (p_65 >= FAKE_DIVERGE(p_856->global_2_offset, get_global_id(2), 10)), ((void*)0 != l_146), 65535UL, 0x4FE1L, 0x30B7L, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((void*)0 == l_146), ((VECTOR(uint16_t, 2))(0x51CEL)), 0x986EL)), l_149, ((VECTOR(uint16_t, 8))(65535UL)), 0UL, 0xE0A8L, 8UL)).s46, ((VECTOR(uint16_t, 2))(0xBF5CL)), ((VECTOR(uint16_t, 2))(65535UL))))).odd, p_856->g_143.f3)), ((VECTOR(uint16_t, 2))(0xCC37L)), 0xB35DL)), ((VECTOR(uint16_t, 4))(1UL))))), FAKE_DIVERGE(p_856->group_2_offset, get_group_id(2), 10), 65535UL, 0UL, p_67, 65528UL, 0x85B1L)).s50)), 0xEC16L)).xzyyzyxw, ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 8))(0x2609L))))).s3522715132554030))).odd, ((VECTOR(uint16_t, 8))(65535UL))))).lo))).zwzwzzwzyxywxwzx, ((VECTOR(uint16_t, 16))(65534UL))))).hi, ((VECTOR(uint16_t, 8))(0UL))))).s77, ((VECTOR(uint32_t, 2))(0x33DBD078L))))).odd || p_856->g_143.f2.f1), 0xB9L)), 0x68L)) , (-6L)))
                    { /* block id: 120 */
                        uint8_t *l_158[5][3][2] = {{{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159}},{{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159}},{{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159}},{{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159}},{{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159},{&p_856->g_159,&p_856->g_159}}};
                        int32_t l_160 = 9L;
                        int32_t l_164 = 0x67D250C6L;
                        uint8_t **l_323 = (void*)0;
                        uint8_t **l_324 = &l_158[0][2][1];
                        struct S2 ***l_699 = &p_856->g_327;
                        int i, j, k;
                        (*p_66) |= (func_150((p_64 , (((((safe_sub_func_uint8_t_u_u((p_856->g_159--), func_78(func_167(l_164, p_856), &p_856->g_4, l_161, func_174((l_325 = ((safe_rshift_func_uint16_t_u_u((1UL <= (((*l_324) = func_182(l_162, p_856->g_76.x, (safe_unary_minus_func_uint16_t_u(p_64)), p_856->g_188[3], p_856)) != (void*)0)), 6)) <= l_325)), l_160, p_856->g_326, l_139.s2, &p_856->g_4, p_856), p_856->g_434.s2, p_856))) >= 5L) , 0x04EDFB46L) > p_856->g_143.f2.f4) == FAKE_DIVERGE(p_856->local_1_offset, get_local_id(1), 10))), l_699, l_700, p_856->g_143.f2.f8, p_64, p_856) , l_724);
                    }
                    else
                    { /* block id: 356 */
                        return (*p_856->g_411);
                    }
                }
                if ((*p_856->g_305))
                    continue;
            }
        }
        return (*p_856->g_411);
    }
    l_725 = l_725;
    (*p_856->g_330) = (*p_856->g_330);
    p_64 = ((safe_add_func_uint32_t_u_u((l_149 ^= GROUP_DIVERGE(0, 1)), (((*l_740) = (((p_856->g_4 | (safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((!(p_856->g_159 , (((safe_mul_func_uint16_t_u_u((p_67 = (((p_66 = (*p_856->g_411)) == (void*)0) == p_67)), ((VECTOR(uint16_t, 4))(l_737.zxwx)).w)) <= ((safe_sub_func_int8_t_s_s(p_856->g_414.x, (&p_856->g_373 == &p_856->g_373))) , (FAKE_DIVERGE(p_856->global_1_offset, get_global_id(1), 10) == (((p_856->g_499[3].f0 && p_64) < 0x74F67DFAL) && 1L)))) ^ 18446744073709551610UL))) != 0x22D2L), p_64)), 10))) == p_856->g_260.f2.f6) , 3L)) > p_65))) ^ 0xDC55L);
    return l_741;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_76
 * writes:
 */
int8_t  func_78(int32_t * p_79, int32_t * p_80, uint32_t  p_81, int32_t * p_82, uint64_t  p_83, struct S3 * p_856)
{ /* block id: 61 */
    for (p_83 = 0; (p_83 <= 34); p_83 = safe_add_func_int8_t_s_s(p_83, 3))
    { /* block id: 64 */
        if ((atomic_inc(&p_856->l_atomic_input[12]) == 0))
        { /* block id: 66 */
            VECTOR(int32_t, 2) l_86 = (VECTOR(int32_t, 2))((-5L), 0x384FA889L);
            struct S2 *l_121 = (void*)0;
            struct S2 **l_120 = &l_121;
            struct S2 **l_122 = &l_121;
            int i;
            if (((VECTOR(int32_t, 2))(l_86.yy)).hi)
            { /* block id: 67 */
                int32_t l_88 = 0x449320D1L;
                int32_t *l_87 = &l_88;
                int32_t *l_89 = &l_88;
                l_87 = (void*)0;
                l_89 = (void*)0;
                for (l_88 = 0; (l_88 <= 16); l_88 = safe_add_func_uint8_t_u_u(l_88, 4))
                { /* block id: 72 */
                    int64_t l_92 = 0x729605C3BE27DD12L;
                    int32_t l_100 = 4L;
                    int32_t *l_99 = &l_100;
                    uint32_t l_101 = 0xA01AF70EL;
                    if ((l_86.y |= l_92))
                    { /* block id: 74 */
                        int32_t l_94 = 7L;
                        int32_t *l_93 = &l_94;
                        uint8_t l_95[8];
                        int32_t l_96 = 4L;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_95[i] = 0xC9L;
                        l_89 = l_93;
                        l_96 = ((*l_89) ^= l_95[7]);
                    }
                    else
                    { /* block id: 78 */
                        struct S2 l_97[1] = {{0L,4UL,{18446744073709551608UL,-1L,0x01DCL,18446744073709551613UL,0x75A566C474EC6952L,4294967295UL,-4L,0x3436L,0x755697939658010AL},0x46CDFC5EL,0L}};
                        int32_t l_98 = 0x3A09A508L;
                        int i;
                        l_98 &= (l_97[0] , 0x02829559L);
                    }
                    l_89 = l_99;
                    ++l_101;
                }
            }
            else
            { /* block id: 84 */
                VECTOR(int16_t, 16) l_104 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x7F53L), 0x7F53L), 0x7F53L, (-4L), 0x7F53L, (VECTOR(int16_t, 2))((-4L), 0x7F53L), (VECTOR(int16_t, 2))((-4L), 0x7F53L), (-4L), 0x7F53L, (-4L), 0x7F53L);
                uint8_t l_105 = 247UL;
                uint8_t l_106[1];
                uint16_t l_107 = 0xFF47L;
                int64_t l_110 = 0x34E549275E4F8D45L;
                int i;
                for (i = 0; i < 1; i++)
                    l_106[i] = 250UL;
                l_86.x &= ((l_105 |= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_104.s85)))).odd) , l_106[0]);
                l_107--;
                l_86.x &= ((VECTOR(int32_t, 2))(2L, 0L)).hi;
                l_86.x &= (l_110 , ((VECTOR(int32_t, 2))(0L, 0x71F42B0BL)).even);
            }
            for (l_86.y = 2; (l_86.y != (-18)); --l_86.y)
            { /* block id: 93 */
                int32_t l_113 = 0x1F018CA5L;
                for (l_113 = 1; (l_113 != (-17)); l_113 = safe_sub_func_int64_t_s_s(l_113, 8))
                { /* block id: 96 */
                    struct S2 l_118 = {1L,0xA9BA8A56L,{4UL,-8L,0L,5UL,0x6ACD4FDB9B6FBBB4L,0xD64C46BDL,0x38L,0x2CD6L,1L},-6L,0x6E7B68137329BCD8L};/* VOLATILE GLOBAL l_118 */
                    struct S2 *l_117 = &l_118;
                    struct S2 **l_116 = &l_117;
                    struct S2 **l_119 = &l_117;
                    l_119 = l_116;
                }
            }
            l_120 = (l_122 = l_120);
            unsigned int result = 0;
            result += l_86.y;
            result += l_86.x;
            atomic_add(&p_856->l_special_values[12], result);
        }
        else
        { /* block id: 102 */
            (1 + 1);
        }
    }
    return p_856->g_76.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_434 p_856->g_437 p_856->g_414 p_856->g_226 p_856->g_430 p_856->g_260.f2.f8 p_856->g_609.f2 p_856->g_499.f2.f3 p_856->g_411 p_856->g_723
 * writes: p_856->g_414 p_856->g_440 p_856->g_218
 */
struct S0  func_150(int32_t  p_151, struct S2 *** p_152, struct S2 *** p_153, uint64_t  p_154, int64_t  p_155, struct S3 * p_856)
{ /* block id: 348 */
    int32_t l_701 = 0x3F516F5AL;
    VECTOR(uint32_t, 2) l_708 = (VECTOR(uint32_t, 2))(2UL, 0UL);
    uint16_t *l_718 = (void*)0;
    int32_t l_719[2][7] = {{0x7B7E7AECL,0x7A6A1514L,(-5L),0x7A6A1514L,0x7B7E7AECL,0x7B7E7AECL,0x7A6A1514L},{0x7B7E7AECL,0x7A6A1514L,(-5L),0x7A6A1514L,0x7B7E7AECL,0x7B7E7AECL,0x7A6A1514L}};
    struct S1 *l_721 = &p_856->g_260.f2;
    struct S1 **l_720 = &l_721;
    int32_t *l_722[5][6] = {{&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0},{&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0},{&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0},{&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0},{&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0,&p_856->g_499[3].f0}};
    int i, j;
    (*l_720) = ((((p_856->g_434.s0 != (l_701 < ((((VECTOR(int16_t, 8))((safe_mod_func_uint64_t_u_u(p_856->g_437.s3, ((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x97F80EF4BEFDF4F6L)).hi)), (safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((((p_155 , ((((VECTOR(uint32_t, 16))(l_708.xxxxyxxyxyxxxxyy)).se > ((p_154 < (l_701 < (((((safe_mul_func_uint8_t_u_u((p_154 > (((p_856->g_440.sf = (safe_lshift_func_uint8_t_u_s(((p_151 != (safe_unary_minus_func_int16_t_s((safe_sub_func_uint32_t_u_u((p_856->g_414.x--), 1L))))) == p_151), l_708.x))) == p_856->g_226.x) >= p_856->g_430.s7)), 0xF4L)) < p_856->g_260.f2.f8) && 0x8CL) < p_154) ^ l_708.x))) & p_154)) < (-6L))) | (-8L)) < l_719[1][4]) ^ 0xAA63L), 0x0AE65948L)) && 9L), p_151)), ((VECTOR(int16_t, 2))(0x338BL)), ((VECTOR(int16_t, 4))((-7L))))).s4 ^ p_856->g_609.f2) , 0L))) == 0x1B1AL) , p_856->g_499[3].f2.f3) , (void*)0);
    (*l_720) = (*l_720);
    (*p_856->g_411) = l_722[1][3];
    return p_856->g_723;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_171
 * writes: p_856->g_171
 */
int32_t * func_167(uint64_t  p_168, struct S3 * p_856)
{ /* block id: 122 */
    int32_t *l_169 = &p_856->g_143.f0;
    int32_t *l_170[7][10][3] = {{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}},{{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0},{(void*)0,&p_856->g_143.f0,&p_856->g_143.f0}}};
    int i, j, k;
    ++p_856->g_171;
    return l_170[5][5][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_260.f1 p_856->g_305 p_856->g_143.f0 p_856->g_260.f2.f0 p_856->g_4 p_856->g_260.f3 p_856->g_255 p_856->g_141 p_856->g_260.f2.f6 p_856->g_247 p_856->g_143.f3 p_856->g_143.f1 p_856->g_218 p_856->g_609.f1 p_856->g_648 p_856->g_432 p_856->g_470.f2.f4 p_856->g_499.f0 p_856->g_550 p_856->g_143.f4 p_856->g_499.f2.f8 p_856->g_499.f2.f4 p_856->g_244 p_856->g_470.f0 p_856->g_260.f0 p_856->g_260.f4 p_856->g_589 p_856->g_143.f2.f2 p_856->g_499.f1
 * writes: p_856->g_260.f1 p_856->g_330 p_856->g_260.f3 p_856->g_141 p_856->g_143.f4 p_856->g_143.f1 p_856->g_143.f0 p_856->g_499.f0 p_856->g_499.f2.f8 p_856->g_499.f2.f6 p_856->g_470.f0 p_856->g_440
 */
int32_t * func_174(int8_t  p_175, uint64_t  p_176, struct S2 *** p_177, int32_t  p_178, int32_t * p_179, struct S3 * p_856)
{ /* block id: 172 */
    struct S2 ***l_331 = &p_856->g_327;
    int32_t l_332[5];
    VECTOR(uint32_t, 2) l_335 = (VECTOR(uint32_t, 2))(4294967295UL, 0xE952C97EL);
    int32_t *l_336 = &p_856->g_260.f3;
    uint16_t *l_337 = (void*)0;
    uint16_t *l_338[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_339 = 0x5D7CE257L;
    int32_t l_340 = 0x4165C92EL;
    int64_t *l_347 = &p_856->g_143.f4;
    VECTOR(int64_t, 16) l_358 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, (-8L)), (-8L)), (-8L), 8L, (-8L), (VECTOR(int64_t, 2))(8L, (-8L)), (VECTOR(int64_t, 2))(8L, (-8L)), 8L, (-8L), 8L, (-8L));
    VECTOR(int64_t, 4) l_359 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3EF927952D691A33L), 0x3EF927952D691A33L);
    VECTOR(int32_t, 8) l_367 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x259189C0L), 0x259189C0L), 0x259189C0L, 2L, 0x259189C0L);
    int8_t l_371[1];
    VECTOR(uint8_t, 4) l_378 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 1UL), 1UL);
    VECTOR(uint16_t, 8) l_431 = (VECTOR(uint16_t, 8))(0xD740L, (VECTOR(uint16_t, 4))(0xD740L, (VECTOR(uint16_t, 2))(0xD740L, 0x7B1BL), 0x7B1BL), 0x7B1BL, 0xD740L, 0x7B1BL);
    VECTOR(uint16_t, 8) l_436 = (VECTOR(uint16_t, 8))(0x8D62L, (VECTOR(uint16_t, 4))(0x8D62L, (VECTOR(uint16_t, 2))(0x8D62L, 0xF8FEL), 0xF8FEL), 0xF8FEL, 0x8D62L, 0xF8FEL);
    uint64_t l_461 = 18446744073709551615UL;
    uint64_t l_482 = 0xBC70D5C0F8AE060AL;
    uint8_t *l_533 = &p_856->g_189;
    int32_t **l_534 = &p_856->g_218;
    int32_t l_578 = 2L;
    VECTOR(int16_t, 8) l_631 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4E52L), 0x4E52L), 0x4E52L, 0L, 0x4E52L);
    VECTOR(int16_t, 4) l_632 = (VECTOR(int16_t, 4))(0x6222L, (VECTOR(int16_t, 2))(0x6222L, 4L), 4L);
    VECTOR(int16_t, 16) l_633 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int16_t, 2))(1L, 8L), (VECTOR(int16_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
    uint64_t l_655 = 18446744073709551613UL;
    VECTOR(int8_t, 8) l_662 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x32L), 0x32L), 0x32L, 0L, 0x32L);
    VECTOR(uint8_t, 16) l_663 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint8_t, 2))(0UL, 7UL), (VECTOR(uint8_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
    uint64_t l_668[4][1] = {{0x7016D70A69B5783DL},{0x7016D70A69B5783DL},{0x7016D70A69B5783DL},{0x7016D70A69B5783DL}};
    VECTOR(int8_t, 16) l_695 = (VECTOR(int8_t, 16))(0x52L, (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 0x40L), 0x40L), 0x40L, 0x52L, 0x40L, (VECTOR(int8_t, 2))(0x52L, 0x40L), (VECTOR(int8_t, 2))(0x52L, 0x40L), 0x52L, 0x40L, 0x52L, 0x40L);
    int i, j;
    for (i = 0; i < 5; i++)
        l_332[i] = 0x2A40691FL;
    for (i = 0; i < 1; i++)
        l_371[i] = (-8L);
    for (p_856->g_260.f1 = (-30); (p_856->g_260.f1 >= 3); p_856->g_260.f1 = safe_add_func_int32_t_s_s(p_856->g_260.f1, 8))
    { /* block id: 175 */
        p_856->g_330 = &p_856->g_228;
        if ((*p_856->g_305))
            continue;
    }
    if (((p_856->g_260.f2.f0 , l_331) == ((l_332[1] <= ((l_339 = (!(safe_lshift_func_uint16_t_u_s((l_332[1] == (((((*l_336) ^= ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_335.xy)).xxxx)).zxyywzxy)).s3 >= (*p_179)) > p_178)) , p_856->g_255[1]) && (++p_856->g_141.w)) == (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(1L, ((safe_sub_func_int64_t_s_s((((((*l_347) = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_856->g_260.f2.f6, 1L, 0x5724DE35631566BFL, 0x73751F69EAADBE12L)).zwzyzxzzwyxzyzwz)).s2) & p_856->g_255[2]) & p_856->g_247.s8) != l_340), 0x19C1A0F81DC85EA8L)) >= p_856->g_143.f3), p_178, 0x385FL, ((VECTOR(int16_t, 4))(2L)))).s3310761040726520)))), (int16_t)l_332[1]))), ((VECTOR(int16_t, 16))(0x6EFEL))))).even, ((VECTOR(int16_t, 8))((-1L)))))).s5, p_856->g_260.f1)))), p_856->g_260.f2.f6)))) , p_176)) , &p_856->g_327)))
    { /* block id: 183 */
        VECTOR(int32_t, 16) l_365 = (VECTOR(int32_t, 16))(0x40E809A7L, (VECTOR(int32_t, 4))(0x40E809A7L, (VECTOR(int32_t, 2))(0x40E809A7L, 0x4DFF76FFL), 0x4DFF76FFL), 0x4DFF76FFL, 0x40E809A7L, 0x4DFF76FFL, (VECTOR(int32_t, 2))(0x40E809A7L, 0x4DFF76FFL), (VECTOR(int32_t, 2))(0x40E809A7L, 0x4DFF76FFL), 0x40E809A7L, 0x4DFF76FFL, 0x40E809A7L, 0x4DFF76FFL);
        VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x70009331L), 0x70009331L);
        struct S1 *l_368 = &p_856->g_260.f2;
        VECTOR(int16_t, 8) l_376 = (VECTOR(int16_t, 8))(0x4FF8L, (VECTOR(int16_t, 4))(0x4FF8L, (VECTOR(int16_t, 2))(0x4FF8L, 1L), 1L), 1L, 0x4FF8L, 1L);
        int32_t l_381 = 0x5E27E6D2L;
        VECTOR(uint16_t, 16) l_443 = (VECTOR(uint16_t, 16))(0xEC19L, (VECTOR(uint16_t, 4))(0xEC19L, (VECTOR(uint16_t, 2))(0xEC19L, 65526UL), 65526UL), 65526UL, 0xEC19L, 65526UL, (VECTOR(uint16_t, 2))(0xEC19L, 65526UL), (VECTOR(uint16_t, 2))(0xEC19L, 65526UL), 0xEC19L, 65526UL, 0xEC19L, 65526UL);
        struct S2 **l_444 = &p_856->g_132;
        VECTOR(uint16_t, 8) l_446 = (VECTOR(uint16_t, 8))(0x83CBL, (VECTOR(uint16_t, 4))(0x83CBL, (VECTOR(uint16_t, 2))(0x83CBL, 1UL), 1UL), 1UL, 0x83CBL, 1UL);
        uint8_t *l_492 = (void*)0;
        VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))(0x01C2816BL, (VECTOR(int32_t, 2))(0x01C2816BL, 0x02A55128L), 0x02A55128L);
        VECTOR(int8_t, 8) l_570 = (VECTOR(int8_t, 8))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 9L), 9L), 9L, 0x08L, 9L);
        VECTOR(uint8_t, 8) l_624 = (VECTOR(uint8_t, 8))(0xD2L, (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 9UL), 9UL), 9UL, 0xD2L, 9UL);
        uint64_t l_639 = 0UL;
        VECTOR(uint32_t, 16) l_656 = (VECTOR(uint32_t, 16))(0x52DA5449L, (VECTOR(uint32_t, 4))(0x52DA5449L, (VECTOR(uint32_t, 2))(0x52DA5449L, 9UL), 9UL), 9UL, 0x52DA5449L, 9UL, (VECTOR(uint32_t, 2))(0x52DA5449L, 9UL), (VECTOR(uint32_t, 2))(0x52DA5449L, 9UL), 0x52DA5449L, 9UL, 0x52DA5449L, 9UL);
        uint32_t *l_659[2];
        int32_t *l_667 = &p_856->g_499[3].f0;
        int8_t *l_669[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_670 = &l_332[1];
        int i;
        for (i = 0; i < 2; i++)
            l_659[i] = &p_856->g_143.f2.f5;
        for (p_856->g_143.f1 = (-10); (p_856->g_143.f1 <= 13); p_856->g_143.f1 = safe_add_func_int32_t_s_s(p_856->g_143.f1, 4))
        { /* block id: 186 */
            struct S1 **l_369 = &l_368;
            uint8_t *l_370[2][8][6] = {{{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189}},{{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189},{&p_856->g_189,&p_856->g_189,&p_856->g_189,(void*)0,&p_856->g_189,&p_856->g_189}}};
            uint32_t *l_372 = &p_856->g_373;
            int32_t l_377 = 1L;
            VECTOR(uint8_t, 8) l_379 = (VECTOR(uint8_t, 8))(0xB8L, (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 1UL), 1UL), 1UL, 0xB8L, 1UL);
            uint8_t **l_380 = &l_370[0][5][0];
            VECTOR(uint16_t, 2) l_382 = (VECTOR(uint16_t, 2))(0xE349L, 0UL);
            VECTOR(uint16_t, 2) l_435 = (VECTOR(uint16_t, 2))(0xF868L, 0xFEB8L);
            VECTOR(uint16_t, 16) l_438 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint16_t, 2))(3UL, 0UL), (VECTOR(uint16_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL);
            VECTOR(uint16_t, 16) l_441 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL);
            VECTOR(uint16_t, 4) l_445 = (VECTOR(uint16_t, 4))(0x271FL, (VECTOR(uint16_t, 2))(0x271FL, 4UL), 4UL);
            VECTOR(uint16_t, 8) l_448 = (VECTOR(uint16_t, 8))(0x1B08L, (VECTOR(uint16_t, 4))(0x1B08L, (VECTOR(uint16_t, 2))(0x1B08L, 0xAB3EL), 0xAB3EL), 0xAB3EL, 0x1B08L, 0xAB3EL);
            uint32_t *l_451 = (void*)0;
            int32_t **l_510 = &p_856->g_218;
            struct S2 *l_514[9] = {&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143,&p_856->g_143};
            int16_t *l_544 = &p_856->g_260.f2.f2;
            int32_t l_546[10][9][2] = {{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}},{{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)},{0L,(-1L)}}};
            VECTOR(uint16_t, 2) l_558 = (VECTOR(uint16_t, 2))(65535UL, 65535UL);
            VECTOR(int8_t, 2) l_563 = (VECTOR(int8_t, 2))(0x35L, (-1L));
            int16_t l_577 = (-1L);
            VECTOR(uint8_t, 8) l_622 = (VECTOR(uint8_t, 8))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 0x26L), 0x26L), 0x26L, 0xCFL, 0x26L);
            int i, j, k;
            (1 + 1);
        }
        (**l_534) &= ((void*)0 != p_179);
        (*l_670) |= ((safe_add_func_uint16_t_u_u(p_856->g_609.f1, (safe_mul_func_uint16_t_u_u(((**l_534) = 0UL), (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_856->g_648.xz)), 0x3EA30522L, 0x581B4F12L)).y | l_367.s3))))) & (p_856->g_470.f0 &= (p_175 , (p_856->g_432.s6 && ((safe_div_func_uint8_t_u_u((((VECTOR(uint32_t, 2))(4294967294UL, 4294967286UL)).hi > (safe_add_func_int32_t_s_s((((((safe_sub_func_int64_t_s_s((l_655 >= l_359.z), ((p_856->g_499[3].f2.f6 = ((p_856->g_499[3].f2.f8 |= (((VECTOR(uint32_t, 16))(l_656.s3c1c970d0dcfb3ed)).s3 && (((safe_mod_func_uint32_t_u_u((p_856->g_143.f1 = p_856->g_470.f2.f4), (((*l_336) &= (((safe_sub_func_uint16_t_u_u((((VECTOR(int8_t, 8))(l_662.s37705647)).s1 == ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_663.s2b)).yxxxxyxy)).s5), GROUP_DIVERGE(2, 1))) >= ((*l_347) ^= (safe_rshift_func_uint16_t_u_s((((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_unary_minus_func_int32_t_s(((*l_667) |= (((((l_338[4] == (void*)0) > 255UL) , l_656.sf) || (-7L)) , 0x13EC3419L)))), ((VECTOR(int32_t, 2))(0x1FB22D15L)), 0L)).lo)).hi , p_175) > FAKE_DIVERGE(p_856->group_2_offset, get_group_id(2), 10)) , l_668[2][0]) | p_856->g_550) , p_175), 0)))) > p_178)) , 0x56C2AC35L))) ^ p_176) , p_176))) & (-1L))) && 0UL))) , 0x6DL) & 255UL) == p_175) <= p_856->g_499[3].f2.f4), (-10L)))), p_176)) , p_856->g_244.x)))));
    }
    else
    { /* block id: 343 */
        uint32_t *l_674 = &p_856->g_373;
        uint32_t **l_673 = &l_674;
        int32_t l_677 = (-1L);
        VECTOR(int64_t, 16) l_692 = (VECTOR(int64_t, 16))(0x2A1E3C5314FD33F0L, (VECTOR(int64_t, 4))(0x2A1E3C5314FD33F0L, (VECTOR(int64_t, 2))(0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L), 0x4FBE22CEAFE678A4L), 0x4FBE22CEAFE678A4L, 0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L, (VECTOR(int64_t, 2))(0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L), (VECTOR(int64_t, 2))(0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L), 0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L, 0x2A1E3C5314FD33F0L, 0x4FBE22CEAFE678A4L);
        int32_t *l_698 = &l_340;
        int i;
        (*l_698) &= (((void*)0 != l_673) == (GROUP_DIVERGE(0, 1) == (safe_add_func_int16_t_s_s((l_677 > (((safe_div_func_uint16_t_u_u(p_175, (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_677, (p_856->g_440.sf = (safe_mul_func_int8_t_s_s((((((void*)0 != &p_856->g_189) ^ (p_856->g_260.f0 , (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(0x184A1A9B9BA290DAL, 0x4E7BDCBA4B23E6E5L)).xxyy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((-10L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_692.sc231)).hi)))), ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_695.se90e7a90b3ab7258)).odd)).s2, (safe_lshift_func_int8_t_s_u(0x55L, 5)))) >= p_856->g_260.f4), ((VECTOR(int64_t, 2))(0x778D48D518D59E9CL)), 0x176B4BE9F2BF0C9BL, 0x3068EBC923CD6FCEL)))).lo))))), 0x040BE93DB69D3C64L, ((VECTOR(int64_t, 2))(0x28B813DB4AC8D3E4L)), 0x1970C5A73FA66437L)).s7 > 0x33BFE9A66400D3A6L), 2UL)) < p_175) == FAKE_DIVERGE(p_856->local_0_offset, get_local_id(0), 10)) ^ p_175), 9)) || p_856->g_589.y), p_175)))) < l_692.s1) >= p_856->g_143.f2.f2), l_692.sf))))), p_856->g_499[3].f1)))) && 0x4FL) >= 0x3AB7L)), p_856->g_143.f0))));
    }
    return (*l_534);
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_143.f0 p_856->g_131 p_856->g_132 p_856->g_260.f3 p_856->g_76 p_856->g_143.f1 p_856->g_143.f4 p_856->g_189 p_856->g_303 p_856->g_143.f2.f3 p_856->g_255 p_856->g_260.f2.f2 p_856->g_305 p_856->g_260.f0
 * writes: p_856->g_143.f0 p_856->g_218 p_856->g_260.f0
 */
uint8_t * func_182(uint8_t  p_183, uint32_t  p_184, int32_t  p_185, uint8_t * p_186, struct S3 * p_856)
{ /* block id: 125 */
    int32_t l_205[8][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
    VECTOR(int32_t, 4) l_206 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x65531A4BL), 0x65531A4BL);
    uint8_t **l_215[3];
    VECTOR(int32_t, 16) l_285 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x16169CE1L), 0x16169CE1L), 0x16169CE1L, 1L, 0x16169CE1L, (VECTOR(int32_t, 2))(1L, 0x16169CE1L), (VECTOR(int32_t, 2))(1L, 0x16169CE1L), 1L, 0x16169CE1L, 1L, 0x16169CE1L);
    int16_t l_286[8];
    int32_t *l_288 = (void*)0;
    uint8_t *l_289 = &p_856->g_189;
    int32_t **l_307 = &p_856->g_218;
    int32_t **l_308 = &l_288;
    int32_t *l_309 = &p_856->g_143.f0;
    int16_t l_310 = 0x1974L;
    int32_t *l_311 = &p_856->g_143.f0;
    int32_t *l_312 = (void*)0;
    int32_t *l_313[6][4][8] = {{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}},{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}},{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}},{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}},{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}},{{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4},{(void*)0,&p_856->g_143.f0,(void*)0,&p_856->g_260.f0,(void*)0,(void*)0,(void*)0,&p_856->g_4}}};
    int64_t l_314 = 0x3651F8D1690FBF8FL;
    int64_t l_315 = 0x7B45CD04B1D95CC4L;
    uint16_t l_316[6] = {65532UL,0xFDC3L,65532UL,65532UL,0xFDC3L,65532UL};
    uint16_t *l_321 = &l_316[2];
    uint8_t *l_322 = &p_856->g_189;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_215[i] = &p_856->g_188[3];
    for (i = 0; i < 8; i++)
        l_286[i] = 0L;
    l_309 = ((*l_308) = ((*l_307) = ((0x23FBL || (safe_unary_minus_func_uint32_t_u(p_185))) , func_191((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((~func_78(((safe_add_func_uint16_t_u_u((l_205[4][0] < ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(l_206.wywyzwxxwxzywwzw)).lo, (int32_t)(p_856->g_143.f0 != p_183)))).s7572775720446632)).sa , (void*)0) == (*p_856->g_131))), p_184)) , &p_856->g_4), &p_856->g_4, l_206.w, l_288, p_856->g_260.f3, p_856)), p_856->g_143.f1)), 0x359AL)), (-1L))), p_856->g_143.f4)), l_289, &p_856->g_218, p_856))));
    --l_316[2];
    p_856->g_260.f0 |= (safe_mod_func_uint16_t_u_u(((*l_321) = (*l_311)), (FAKE_DIVERGE(p_856->global_1_offset, get_global_id(1), 10) , GROUP_DIVERGE(0, 1))));
    return l_322;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_189 p_856->g_303 p_856->g_143.f2.f3 p_856->g_255 p_856->g_260.f2.f2 p_856->g_305
 * writes: p_856->g_143.f0
 */
int32_t * func_191(uint64_t  p_192, uint8_t * p_193, int32_t ** p_194, struct S3 * p_856)
{ /* block id: 160 */
    struct S2 **l_300 = &p_856->g_132;
    int32_t l_304 = 5L;
    int32_t *l_306 = &p_856->g_143.f0;
    (*p_856->g_305) = ((((safe_div_func_int64_t_s_s(((((p_192 , (safe_sub_func_int16_t_s_s((~(((safe_div_func_int64_t_s_s((GROUP_DIVERGE(2, 1) != 0x2AAFL), (0x6BL ^ (((safe_rshift_func_uint16_t_u_s((p_192 & p_192), (safe_rshift_func_uint8_t_u_u((*p_193), 0)))) , l_300) == l_300)))) != (safe_lshift_func_uint16_t_u_s((((VECTOR(uint32_t, 4))(p_856->g_303.s0441)).y >= (l_304 > l_304)), 4))) && GROUP_DIVERGE(1, 1))), 0x7788L))) >= FAKE_DIVERGE(p_856->local_0_offset, get_local_id(0), 10)) , p_856->g_143.f2.f3) || p_856->g_255[1]), p_856->g_260.f2.f2)) < 2UL) >= l_304) || 1L);
    return l_306;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_260.f0
 * writes: p_856->g_260.f0
 */
int32_t * func_207(struct S2 ** p_208, uint32_t  p_209, int32_t  p_210, uint32_t  p_211, uint32_t  p_212, struct S3 * p_856)
{ /* block id: 157 */
    int32_t *l_287 = &p_856->g_260.f0;
    (*l_287) ^= (-7L);
    return l_287;
}


/* ------------------------------------------ */
/* 
 * reads : p_856->g_143.f2.f8 p_856->g_143.f2.f6 p_856->g_141 p_856->g_226 p_856->g_228 p_856->g_3 p_856->g_189 p_856->g_144 p_856->g_143.f2.f4 p_856->g_143.f2.f0 p_856->g_4 p_856->g_218 p_856->g_76 p_856->g_143.f3 p_856->g_143.f0 p_856->g_243 p_856->g_244 p_856->g_247 p_856->g_255 p_856->g_143.f4 p_856->g_260 p_856->g_263
 * writes: p_856->g_218 p_856->g_143.f2.f8 p_856->g_143.f0 p_856->g_141 p_856->g_189 p_856->g_255 p_856->g_143.f4 p_856->g_260 p_856->g_266
 */
struct S2 ** func_213(uint8_t * p_214, struct S3 * p_856)
{ /* block id: 127 */
    int32_t *l_217 = &p_856->g_143.f0;
    int32_t **l_216[9][4] = {{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217},{(void*)0,(void*)0,&l_217,&l_217}};
    VECTOR(uint8_t, 16) l_227 = (VECTOR(uint8_t, 16))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 0UL), 0UL), 0UL, 0x91L, 0UL, (VECTOR(uint8_t, 2))(0x91L, 0UL), (VECTOR(uint8_t, 2))(0x91L, 0UL), 0x91L, 0UL, 0x91L, 0UL);
    VECTOR(int16_t, 4) l_229 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x15AAL), 0x15AAL);
    uint64_t l_232 = 0x844565C005C10257L;
    int32_t l_240 = 0L;
    VECTOR(int16_t, 8) l_245 = (VECTOR(int16_t, 8))(0x4852L, (VECTOR(int16_t, 4))(0x4852L, (VECTOR(int16_t, 2))(0x4852L, 0x1BA1L), 0x1BA1L), 0x1BA1L, 0x4852L, 0x1BA1L);
    uint8_t *l_246 = &p_856->g_189;
    uint64_t l_254 = 5UL;
    int i, j;
    p_856->g_218 = &p_856->g_4;
    for (p_856->g_143.f2.f8 = (-25); (p_856->g_143.f2.f8 > 22); p_856->g_143.f2.f8++)
    { /* block id: 131 */
        VECTOR(int64_t, 4) l_223 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x74897DE86C93012EL), 0x74897DE86C93012EL);
        uint16_t l_224 = 0x7107L;
        uint16_t *l_225 = (void*)0;
        int32_t l_233 = 0x2B8A4263L;
        int i;
        l_233 = (((VECTOR(int32_t, 8))(0x6269AAF8L, (((safe_mul_func_int8_t_s_s(((((VECTOR(uint32_t, 16))(((((VECTOR(int64_t, 8))(l_223.wwzxxzwz)).s7 ^ ((l_224 &= ((*l_217) = l_223.y)) != ((p_856->g_141.x ^= p_856->g_143.f2.f6) != ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(p_856->g_226.xxxy)).wwxyyxzyxzywxxww, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((l_223.z > l_223.x), l_223.z, (-4L), 0x68L)).wyxwxyywwxzwxxxw)).s8c))), 9UL)).wxwzwxyy, ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_227.sf084)), 0x45L, 0x61L, (p_856->g_228 , (p_856->g_3 && ((((((((((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(2L, 0x0AE5L)), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(l_229.xy)).yyyy, ((VECTOR(int16_t, 4))(0x7ACCL, 0x2AC1L, 1L, (-4L))), ((VECTOR(int16_t, 4))(0x0895L, ((((((*p_214)--) <= 0x52L) | p_856->g_144.s7) > 1L) & 1L), 0x276BL, 1L))))), 1L, 0x5836L)).s76, ((VECTOR(int16_t, 2))(0x06F2L))))).odd > p_856->g_143.f2.f4) <= (-1L)) ^ 18446744073709551612UL) == 0x1DA5C2CDL) , (*p_214)) && p_856->g_143.f2.f0) != p_856->g_4) ^ l_223.w))), 6UL, ((VECTOR(uint8_t, 4))(6UL)), 0x34L, (*p_214), 1UL, 0UL)).se2, ((VECTOR(uint8_t, 2))(0x41L))))).xxxyyyxxxyxxxyyy, ((VECTOR(uint8_t, 16))(251UL))))).lo, ((VECTOR(uint8_t, 8))(0x56L))))).s71, ((VECTOR(uint8_t, 2))(1UL))))), 0x4BL, ((VECTOR(uint8_t, 4))(255UL)))).s3067512542115271)).s05, ((VECTOR(uint8_t, 2))(0xCFL))))).yyyxyyxxxyxxyyyx))).lo)).s2614565353723352, ((VECTOR(uint16_t, 16))(1UL))))).se))) > 0x20L), ((VECTOR(uint32_t, 2))(0x851A1F88L)), l_224, 0x57738153L, l_223.z, l_223.y, 0x77B6B181L, ((VECTOR(uint32_t, 2))(0x3479567EL)), 1UL, l_223.y, 0x7DFCE124L, 4UL, 4294967295UL, 0x81EA9E6EL)).sf , l_232) <= (*p_856->g_218)), p_856->g_76.x)) != (-2L)) < p_856->g_143.f3), ((VECTOR(int32_t, 4))((-1L))), 0x29736A73L, (-1L))).s1 == (*p_856->g_218));
        if (l_224)
            continue;
    }
    p_856->g_255[1] |= (l_254 |= (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((p_856->g_228.f5 <= (safe_rshift_func_uint8_t_u_u(l_240, 3))), ((*l_217) , p_856->g_141.x))), (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(p_856->g_243.sf3a9094db9dbf062)).sf7, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_856->g_244.xx)).yxxxyyyx)).s61, ((VECTOR(int16_t, 16))(l_245.s4543041175724435)).s9c))))), 8L, 8L)).wzwzwwwywzyyxwyz, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(0x5909L, 1L)).xyyyxxxy))).s57, ((VECTOR(int16_t, 2))((-1L), 0x3119L))))).xyyyxyxxxyyxyxxy))).s1c, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))((-5L), (l_246 != (void*)0), (-9L), 4L)).wwzzwxzyzxzzzwxx, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))((-4L), ((VECTOR(int16_t, 8))(((void*)0 != &p_856->g_4), ((VECTOR(int16_t, 2))(p_856->g_247.s42)), 1L, (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((*l_217) >= (*l_217)), 6)), 0x55560927L)), (*l_217))), ((VECTOR(int16_t, 2))((-10L))), (-10L))), 1L, 0x5AEBL, (-2L), ((VECTOR(int16_t, 4))(0x66D6L)))).sa5ff, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(1L))))).wzwywwzzwywzxyxz))).s18))).xxyxxyxx)).s2, p_856->g_4)))));
    for (l_240 = (-7); (l_240 != (-29)); --l_240)
    { /* block id: 143 */
        int32_t l_270 = 0x65550B7CL;
        for (p_856->g_143.f4 = (-7); (p_856->g_143.f4 >= 16); p_856->g_143.f4 = safe_add_func_int64_t_s_s(p_856->g_143.f4, 9))
        { /* block id: 146 */
            struct S2 *l_261 = (void*)0;
            struct S2 *l_262 = &p_856->g_260;
            (*l_262) = p_856->g_260;
            p_856->g_266[2] = p_856->g_263[2];
            for (l_254 = 19; (l_254 >= 39); l_254++)
            { /* block id: 151 */
                int32_t l_269 = 0x27BA593BL;
                l_270 = l_269;
            }
        }
    }
    return &p_856->g_132;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[16];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 16; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[16];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 16; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[84];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 84; i++)
            l_comm_values[i] = 1;
    struct S3 c_857;
    struct S3* p_856 = &c_857;
    struct S3 c_858 = {
        0L, // p_856->g_2
        0x4185A1FAL, // p_856->g_3
        0x380BE39EL, // p_856->g_4
        (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0L), 0L), // p_856->g_76
        (void*)0, // p_856->g_132
        &p_856->g_132, // p_856->g_131
        &p_856->g_131, // p_856->g_134
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), // p_856->g_141
        {0x7FE04C18L,4294967287UL,{18446744073709551615UL,-1L,0x4C1FL,0UL,0x4F9D78492DA3F3ABL,6UL,-4L,0x34D9L,-1L},-8L,0x59CDA8776989875FL}, // p_856->g_143
        (VECTOR(uint16_t, 8))(0x5B2BL, (VECTOR(uint16_t, 4))(0x5B2BL, (VECTOR(uint16_t, 2))(0x5B2BL, 0x85A4L), 0x85A4L), 0x85A4L, 0x5B2BL, 0x85A4L), // p_856->g_144
        0xD4L, // p_856->g_159
        0xA876L, // p_856->g_171
        1UL, // p_856->g_189
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_856->g_188
        (void*)0, // p_856->g_218
        (VECTOR(uint16_t, 2))(65535UL, 0x46A1L), // p_856->g_226
        {18446744073709551615UL,0L,0x0CEDL,0UL,8L,4294967286UL,1L,0x4012L,-9L}, // p_856->g_228
        (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L), 1L, 6L, 1L, (VECTOR(int16_t, 2))(6L, 1L), (VECTOR(int16_t, 2))(6L, 1L), 6L, 1L, 6L, 1L), // p_856->g_243
        (VECTOR(int16_t, 2))(0x3CC1L, 0x2212L), // p_856->g_244
        (VECTOR(int16_t, 16))(0x4A9CL, (VECTOR(int16_t, 4))(0x4A9CL, (VECTOR(int16_t, 2))(0x4A9CL, 0x4F7BL), 0x4F7BL), 0x4F7BL, 0x4A9CL, 0x4F7BL, (VECTOR(int16_t, 2))(0x4A9CL, 0x4F7BL), (VECTOR(int16_t, 2))(0x4A9CL, 0x4F7BL), 0x4A9CL, 0x4F7BL, 0x4A9CL, 0x4F7BL), // p_856->g_247
        {0x025EL,0x025EL,0x025EL}, // p_856->g_255
        {-4L,4294967295UL,{0x29B09BAB7CAD8C16L,-8L,-1L,0xC36A867BEEB56CBCL,1L,4294967293UL,2L,0x6048L,1L},-3L,5L}, // p_856->g_260
        {{0x98BD0B0AL,0x030AC782L,0x796462EE016AD1CEL},{0x98BD0B0AL,0x030AC782L,0x796462EE016AD1CEL},{0x98BD0B0AL,0x030AC782L,0x796462EE016AD1CEL}}, // p_856->g_263
        {{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[1],&p_856->g_263[2],&p_856->g_263[2],&p_856->g_263[0],&p_856->g_263[2],&p_856->g_263[2]}}, // p_856->g_264
        {{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}},{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}},{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}},{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}},{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}},{{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]},{&p_856->g_263[2],&p_856->g_263[2]}}}, // p_856->g_265
        {{4294967295UL,0L,0x317C48167D87B945L},{4294967295UL,0L,0x317C48167D87B945L},{4294967295UL,0L,0x317C48167D87B945L},{4294967295UL,0L,0x317C48167D87B945L}}, // p_856->g_266
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEB30FFD0L), 0xEB30FFD0L), 0xEB30FFD0L, 4294967295UL, 0xEB30FFD0L), // p_856->g_303
        &p_856->g_143.f0, // p_856->g_305
        &p_856->g_132, // p_856->g_327
        &p_856->g_327, // p_856->g_326
        &p_856->g_228, // p_856->g_330
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1C83L), 0x1C83L), 0x1C83L, 1L, 0x1C83L), // p_856->g_364
        2UL, // p_856->g_373
        &p_856->g_218, // p_856->g_411
        (VECTOR(uint32_t, 2))(4UL, 0xB7E1F8C5L), // p_856->g_414
        (VECTOR(uint16_t, 8))(0x6FFAL, (VECTOR(uint16_t, 4))(0x6FFAL, (VECTOR(uint16_t, 2))(0x6FFAL, 0x77D1L), 0x77D1L), 0x77D1L, 0x6FFAL, 0x77D1L), // p_856->g_430
        (VECTOR(uint16_t, 8))(0x184DL, (VECTOR(uint16_t, 4))(0x184DL, (VECTOR(uint16_t, 2))(0x184DL, 0x65CCL), 0x65CCL), 0x65CCL, 0x184DL, 0x65CCL), // p_856->g_432
        (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65527UL), 65527UL), 65527UL, 65529UL, 65527UL), // p_856->g_433
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL), // p_856->g_434
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x4E8FL), 0x4E8FL), 0x4E8FL, 1UL, 0x4E8FL), // p_856->g_437
        (VECTOR(uint16_t, 4))(0x7A4DL, (VECTOR(uint16_t, 2))(0x7A4DL, 0x6D35L), 0x6D35L), // p_856->g_439
        (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x206BL), 0x206BL), 0x206BL, 5UL, 0x206BL, (VECTOR(uint16_t, 2))(5UL, 0x206BL), (VECTOR(uint16_t, 2))(5UL, 0x206BL), 5UL, 0x206BL, 5UL, 0x206BL), // p_856->g_440
        (VECTOR(uint16_t, 2))(0x4EECL, 0xA5A2L), // p_856->g_442
        (VECTOR(uint16_t, 8))(0xDBC0L, (VECTOR(uint16_t, 4))(0xDBC0L, (VECTOR(uint16_t, 2))(0xDBC0L, 1UL), 1UL), 1UL, 0xDBC0L, 1UL), // p_856->g_447
        {0x13CFBDD4L,0x6625F506L,{1UL,-5L,0x6A21L,18446744073709551610UL,0x45434044754F8502L,0x5A57EF8DL,0x18L,0x610FL,1L},-8L,0x2408D8C20F06447DL}, // p_856->g_470
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x385B3933L), 0x385B3933L), 0x385B3933L, 0L, 0x385B3933L), // p_856->g_495
        {{0x103FD23AL,4294967287UL,{0x05361171084D5F43L,0x5E142968FAC71E3FL,4L,0xF0D186EE7E0111DCL,0x7387780CD8C19DB3L,3UL,8L,0x33ABL,0x4A601B1EC13D85B2L},0x5236ADB1L,0x6E76992B44B288DBL},{0x103FD23AL,4294967287UL,{0x05361171084D5F43L,0x5E142968FAC71E3FL,4L,0xF0D186EE7E0111DCL,0x7387780CD8C19DB3L,3UL,8L,0x33ABL,0x4A601B1EC13D85B2L},0x5236ADB1L,0x6E76992B44B288DBL},{0x103FD23AL,4294967287UL,{0x05361171084D5F43L,0x5E142968FAC71E3FL,4L,0xF0D186EE7E0111DCL,0x7387780CD8C19DB3L,3UL,8L,0x33ABL,0x4A601B1EC13D85B2L},0x5236ADB1L,0x6E76992B44B288DBL},{0x103FD23AL,4294967287UL,{0x05361171084D5F43L,0x5E142968FAC71E3FL,4L,0xF0D186EE7E0111DCL,0x7387780CD8C19DB3L,3UL,8L,0x33ABL,0x4A601B1EC13D85B2L},0x5236ADB1L,0x6E76992B44B288DBL}}, // p_856->g_499
        &p_856->g_499[3], // p_856->g_500
        (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0UL), 0UL), 0UL, 249UL, 0UL, (VECTOR(uint8_t, 2))(249UL, 0UL), (VECTOR(uint8_t, 2))(249UL, 0UL), 249UL, 0UL, 249UL, 0UL), // p_856->g_518
        {0x06A864FEL,0x06A864FEL,0x06A864FEL,0x06A864FEL}, // p_856->g_549
        0xED7A664AL, // p_856->g_550
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x2EL), 0x2EL), 0x2EL, (-1L), 0x2EL), // p_856->g_557
        (void*)0, // p_856->g_584
        (VECTOR(uint8_t, 2))(0x1CL, 0UL), // p_856->g_589
        {0xF855F335L,0x01DB6A5EL,-3L}, // p_856->g_609
        (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x12L), 0x12L), // p_856->g_612
        (VECTOR(uint8_t, 2))(0x60L, 255UL), // p_856->g_619
        (VECTOR(uint8_t, 2))(0UL, 0x02L), // p_856->g_620
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C0D1B4EL), 0x1C0D1B4EL), // p_856->g_648
        {5UL,0x549F9C13L,0x06DC5B83A9F2094DL}, // p_856->g_723
        (VECTOR(int8_t, 2))(3L, (-8L)), // p_856->g_744
        0L, // p_856->g_751
        (void*)0, // p_856->g_753
        &p_856->g_260.f2, // p_856->g_757
        &p_856->g_757, // p_856->g_774
        2L, // p_856->g_780
        0, // p_856->v_collective
        sequence_input[get_global_id(0)], // p_856->global_0_offset
        sequence_input[get_global_id(1)], // p_856->global_1_offset
        sequence_input[get_global_id(2)], // p_856->global_2_offset
        sequence_input[get_local_id(0)], // p_856->local_0_offset
        sequence_input[get_local_id(1)], // p_856->local_1_offset
        sequence_input[get_local_id(2)], // p_856->local_2_offset
        sequence_input[get_group_id(0)], // p_856->group_0_offset
        sequence_input[get_group_id(1)], // p_856->group_1_offset
        sequence_input[get_group_id(2)], // p_856->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 84)), permutations[0][get_linear_local_id()])), // p_856->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_857 = c_858;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_856);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_856->g_2, "p_856->g_2", print_hash_value);
    transparent_crc(p_856->g_3, "p_856->g_3", print_hash_value);
    transparent_crc(p_856->g_4, "p_856->g_4", print_hash_value);
    transparent_crc(p_856->g_76.x, "p_856->g_76.x", print_hash_value);
    transparent_crc(p_856->g_76.y, "p_856->g_76.y", print_hash_value);
    transparent_crc(p_856->g_76.z, "p_856->g_76.z", print_hash_value);
    transparent_crc(p_856->g_76.w, "p_856->g_76.w", print_hash_value);
    transparent_crc(p_856->g_141.x, "p_856->g_141.x", print_hash_value);
    transparent_crc(p_856->g_141.y, "p_856->g_141.y", print_hash_value);
    transparent_crc(p_856->g_141.z, "p_856->g_141.z", print_hash_value);
    transparent_crc(p_856->g_141.w, "p_856->g_141.w", print_hash_value);
    transparent_crc(p_856->g_143.f0, "p_856->g_143.f0", print_hash_value);
    transparent_crc(p_856->g_143.f1, "p_856->g_143.f1", print_hash_value);
    transparent_crc(p_856->g_143.f2.f0, "p_856->g_143.f2.f0", print_hash_value);
    transparent_crc(p_856->g_143.f2.f1, "p_856->g_143.f2.f1", print_hash_value);
    transparent_crc(p_856->g_143.f2.f2, "p_856->g_143.f2.f2", print_hash_value);
    transparent_crc(p_856->g_143.f2.f3, "p_856->g_143.f2.f3", print_hash_value);
    transparent_crc(p_856->g_143.f2.f4, "p_856->g_143.f2.f4", print_hash_value);
    transparent_crc(p_856->g_143.f2.f5, "p_856->g_143.f2.f5", print_hash_value);
    transparent_crc(p_856->g_143.f2.f6, "p_856->g_143.f2.f6", print_hash_value);
    transparent_crc(p_856->g_143.f2.f7, "p_856->g_143.f2.f7", print_hash_value);
    transparent_crc(p_856->g_143.f2.f8, "p_856->g_143.f2.f8", print_hash_value);
    transparent_crc(p_856->g_143.f3, "p_856->g_143.f3", print_hash_value);
    transparent_crc(p_856->g_143.f4, "p_856->g_143.f4", print_hash_value);
    transparent_crc(p_856->g_144.s0, "p_856->g_144.s0", print_hash_value);
    transparent_crc(p_856->g_144.s1, "p_856->g_144.s1", print_hash_value);
    transparent_crc(p_856->g_144.s2, "p_856->g_144.s2", print_hash_value);
    transparent_crc(p_856->g_144.s3, "p_856->g_144.s3", print_hash_value);
    transparent_crc(p_856->g_144.s4, "p_856->g_144.s4", print_hash_value);
    transparent_crc(p_856->g_144.s5, "p_856->g_144.s5", print_hash_value);
    transparent_crc(p_856->g_144.s6, "p_856->g_144.s6", print_hash_value);
    transparent_crc(p_856->g_144.s7, "p_856->g_144.s7", print_hash_value);
    transparent_crc(p_856->g_159, "p_856->g_159", print_hash_value);
    transparent_crc(p_856->g_171, "p_856->g_171", print_hash_value);
    transparent_crc(p_856->g_189, "p_856->g_189", print_hash_value);
    transparent_crc(p_856->g_226.x, "p_856->g_226.x", print_hash_value);
    transparent_crc(p_856->g_226.y, "p_856->g_226.y", print_hash_value);
    transparent_crc(p_856->g_228.f0, "p_856->g_228.f0", print_hash_value);
    transparent_crc(p_856->g_228.f1, "p_856->g_228.f1", print_hash_value);
    transparent_crc(p_856->g_228.f2, "p_856->g_228.f2", print_hash_value);
    transparent_crc(p_856->g_228.f3, "p_856->g_228.f3", print_hash_value);
    transparent_crc(p_856->g_228.f4, "p_856->g_228.f4", print_hash_value);
    transparent_crc(p_856->g_228.f5, "p_856->g_228.f5", print_hash_value);
    transparent_crc(p_856->g_228.f6, "p_856->g_228.f6", print_hash_value);
    transparent_crc(p_856->g_228.f7, "p_856->g_228.f7", print_hash_value);
    transparent_crc(p_856->g_228.f8, "p_856->g_228.f8", print_hash_value);
    transparent_crc(p_856->g_243.s0, "p_856->g_243.s0", print_hash_value);
    transparent_crc(p_856->g_243.s1, "p_856->g_243.s1", print_hash_value);
    transparent_crc(p_856->g_243.s2, "p_856->g_243.s2", print_hash_value);
    transparent_crc(p_856->g_243.s3, "p_856->g_243.s3", print_hash_value);
    transparent_crc(p_856->g_243.s4, "p_856->g_243.s4", print_hash_value);
    transparent_crc(p_856->g_243.s5, "p_856->g_243.s5", print_hash_value);
    transparent_crc(p_856->g_243.s6, "p_856->g_243.s6", print_hash_value);
    transparent_crc(p_856->g_243.s7, "p_856->g_243.s7", print_hash_value);
    transparent_crc(p_856->g_243.s8, "p_856->g_243.s8", print_hash_value);
    transparent_crc(p_856->g_243.s9, "p_856->g_243.s9", print_hash_value);
    transparent_crc(p_856->g_243.sa, "p_856->g_243.sa", print_hash_value);
    transparent_crc(p_856->g_243.sb, "p_856->g_243.sb", print_hash_value);
    transparent_crc(p_856->g_243.sc, "p_856->g_243.sc", print_hash_value);
    transparent_crc(p_856->g_243.sd, "p_856->g_243.sd", print_hash_value);
    transparent_crc(p_856->g_243.se, "p_856->g_243.se", print_hash_value);
    transparent_crc(p_856->g_243.sf, "p_856->g_243.sf", print_hash_value);
    transparent_crc(p_856->g_244.x, "p_856->g_244.x", print_hash_value);
    transparent_crc(p_856->g_244.y, "p_856->g_244.y", print_hash_value);
    transparent_crc(p_856->g_247.s0, "p_856->g_247.s0", print_hash_value);
    transparent_crc(p_856->g_247.s1, "p_856->g_247.s1", print_hash_value);
    transparent_crc(p_856->g_247.s2, "p_856->g_247.s2", print_hash_value);
    transparent_crc(p_856->g_247.s3, "p_856->g_247.s3", print_hash_value);
    transparent_crc(p_856->g_247.s4, "p_856->g_247.s4", print_hash_value);
    transparent_crc(p_856->g_247.s5, "p_856->g_247.s5", print_hash_value);
    transparent_crc(p_856->g_247.s6, "p_856->g_247.s6", print_hash_value);
    transparent_crc(p_856->g_247.s7, "p_856->g_247.s7", print_hash_value);
    transparent_crc(p_856->g_247.s8, "p_856->g_247.s8", print_hash_value);
    transparent_crc(p_856->g_247.s9, "p_856->g_247.s9", print_hash_value);
    transparent_crc(p_856->g_247.sa, "p_856->g_247.sa", print_hash_value);
    transparent_crc(p_856->g_247.sb, "p_856->g_247.sb", print_hash_value);
    transparent_crc(p_856->g_247.sc, "p_856->g_247.sc", print_hash_value);
    transparent_crc(p_856->g_247.sd, "p_856->g_247.sd", print_hash_value);
    transparent_crc(p_856->g_247.se, "p_856->g_247.se", print_hash_value);
    transparent_crc(p_856->g_247.sf, "p_856->g_247.sf", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_856->g_255[i], "p_856->g_255[i]", print_hash_value);

    }
    transparent_crc(p_856->g_260.f0, "p_856->g_260.f0", print_hash_value);
    transparent_crc(p_856->g_260.f1, "p_856->g_260.f1", print_hash_value);
    transparent_crc(p_856->g_260.f2.f0, "p_856->g_260.f2.f0", print_hash_value);
    transparent_crc(p_856->g_260.f2.f1, "p_856->g_260.f2.f1", print_hash_value);
    transparent_crc(p_856->g_260.f2.f2, "p_856->g_260.f2.f2", print_hash_value);
    transparent_crc(p_856->g_260.f2.f3, "p_856->g_260.f2.f3", print_hash_value);
    transparent_crc(p_856->g_260.f2.f4, "p_856->g_260.f2.f4", print_hash_value);
    transparent_crc(p_856->g_260.f2.f5, "p_856->g_260.f2.f5", print_hash_value);
    transparent_crc(p_856->g_260.f2.f6, "p_856->g_260.f2.f6", print_hash_value);
    transparent_crc(p_856->g_260.f2.f7, "p_856->g_260.f2.f7", print_hash_value);
    transparent_crc(p_856->g_260.f2.f8, "p_856->g_260.f2.f8", print_hash_value);
    transparent_crc(p_856->g_260.f3, "p_856->g_260.f3", print_hash_value);
    transparent_crc(p_856->g_260.f4, "p_856->g_260.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_856->g_263[i].f0, "p_856->g_263[i].f0", print_hash_value);
        transparent_crc(p_856->g_263[i].f1, "p_856->g_263[i].f1", print_hash_value);
        transparent_crc(p_856->g_263[i].f2, "p_856->g_263[i].f2", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_856->g_266[i].f0, "p_856->g_266[i].f0", print_hash_value);
        transparent_crc(p_856->g_266[i].f1, "p_856->g_266[i].f1", print_hash_value);
        transparent_crc(p_856->g_266[i].f2, "p_856->g_266[i].f2", print_hash_value);

    }
    transparent_crc(p_856->g_303.s0, "p_856->g_303.s0", print_hash_value);
    transparent_crc(p_856->g_303.s1, "p_856->g_303.s1", print_hash_value);
    transparent_crc(p_856->g_303.s2, "p_856->g_303.s2", print_hash_value);
    transparent_crc(p_856->g_303.s3, "p_856->g_303.s3", print_hash_value);
    transparent_crc(p_856->g_303.s4, "p_856->g_303.s4", print_hash_value);
    transparent_crc(p_856->g_303.s5, "p_856->g_303.s5", print_hash_value);
    transparent_crc(p_856->g_303.s6, "p_856->g_303.s6", print_hash_value);
    transparent_crc(p_856->g_303.s7, "p_856->g_303.s7", print_hash_value);
    transparent_crc(p_856->g_364.s0, "p_856->g_364.s0", print_hash_value);
    transparent_crc(p_856->g_364.s1, "p_856->g_364.s1", print_hash_value);
    transparent_crc(p_856->g_364.s2, "p_856->g_364.s2", print_hash_value);
    transparent_crc(p_856->g_364.s3, "p_856->g_364.s3", print_hash_value);
    transparent_crc(p_856->g_364.s4, "p_856->g_364.s4", print_hash_value);
    transparent_crc(p_856->g_364.s5, "p_856->g_364.s5", print_hash_value);
    transparent_crc(p_856->g_364.s6, "p_856->g_364.s6", print_hash_value);
    transparent_crc(p_856->g_364.s7, "p_856->g_364.s7", print_hash_value);
    transparent_crc(p_856->g_373, "p_856->g_373", print_hash_value);
    transparent_crc(p_856->g_414.x, "p_856->g_414.x", print_hash_value);
    transparent_crc(p_856->g_414.y, "p_856->g_414.y", print_hash_value);
    transparent_crc(p_856->g_430.s0, "p_856->g_430.s0", print_hash_value);
    transparent_crc(p_856->g_430.s1, "p_856->g_430.s1", print_hash_value);
    transparent_crc(p_856->g_430.s2, "p_856->g_430.s2", print_hash_value);
    transparent_crc(p_856->g_430.s3, "p_856->g_430.s3", print_hash_value);
    transparent_crc(p_856->g_430.s4, "p_856->g_430.s4", print_hash_value);
    transparent_crc(p_856->g_430.s5, "p_856->g_430.s5", print_hash_value);
    transparent_crc(p_856->g_430.s6, "p_856->g_430.s6", print_hash_value);
    transparent_crc(p_856->g_430.s7, "p_856->g_430.s7", print_hash_value);
    transparent_crc(p_856->g_432.s0, "p_856->g_432.s0", print_hash_value);
    transparent_crc(p_856->g_432.s1, "p_856->g_432.s1", print_hash_value);
    transparent_crc(p_856->g_432.s2, "p_856->g_432.s2", print_hash_value);
    transparent_crc(p_856->g_432.s3, "p_856->g_432.s3", print_hash_value);
    transparent_crc(p_856->g_432.s4, "p_856->g_432.s4", print_hash_value);
    transparent_crc(p_856->g_432.s5, "p_856->g_432.s5", print_hash_value);
    transparent_crc(p_856->g_432.s6, "p_856->g_432.s6", print_hash_value);
    transparent_crc(p_856->g_432.s7, "p_856->g_432.s7", print_hash_value);
    transparent_crc(p_856->g_433.s0, "p_856->g_433.s0", print_hash_value);
    transparent_crc(p_856->g_433.s1, "p_856->g_433.s1", print_hash_value);
    transparent_crc(p_856->g_433.s2, "p_856->g_433.s2", print_hash_value);
    transparent_crc(p_856->g_433.s3, "p_856->g_433.s3", print_hash_value);
    transparent_crc(p_856->g_433.s4, "p_856->g_433.s4", print_hash_value);
    transparent_crc(p_856->g_433.s5, "p_856->g_433.s5", print_hash_value);
    transparent_crc(p_856->g_433.s6, "p_856->g_433.s6", print_hash_value);
    transparent_crc(p_856->g_433.s7, "p_856->g_433.s7", print_hash_value);
    transparent_crc(p_856->g_434.s0, "p_856->g_434.s0", print_hash_value);
    transparent_crc(p_856->g_434.s1, "p_856->g_434.s1", print_hash_value);
    transparent_crc(p_856->g_434.s2, "p_856->g_434.s2", print_hash_value);
    transparent_crc(p_856->g_434.s3, "p_856->g_434.s3", print_hash_value);
    transparent_crc(p_856->g_434.s4, "p_856->g_434.s4", print_hash_value);
    transparent_crc(p_856->g_434.s5, "p_856->g_434.s5", print_hash_value);
    transparent_crc(p_856->g_434.s6, "p_856->g_434.s6", print_hash_value);
    transparent_crc(p_856->g_434.s7, "p_856->g_434.s7", print_hash_value);
    transparent_crc(p_856->g_437.s0, "p_856->g_437.s0", print_hash_value);
    transparent_crc(p_856->g_437.s1, "p_856->g_437.s1", print_hash_value);
    transparent_crc(p_856->g_437.s2, "p_856->g_437.s2", print_hash_value);
    transparent_crc(p_856->g_437.s3, "p_856->g_437.s3", print_hash_value);
    transparent_crc(p_856->g_437.s4, "p_856->g_437.s4", print_hash_value);
    transparent_crc(p_856->g_437.s5, "p_856->g_437.s5", print_hash_value);
    transparent_crc(p_856->g_437.s6, "p_856->g_437.s6", print_hash_value);
    transparent_crc(p_856->g_437.s7, "p_856->g_437.s7", print_hash_value);
    transparent_crc(p_856->g_439.x, "p_856->g_439.x", print_hash_value);
    transparent_crc(p_856->g_439.y, "p_856->g_439.y", print_hash_value);
    transparent_crc(p_856->g_439.z, "p_856->g_439.z", print_hash_value);
    transparent_crc(p_856->g_439.w, "p_856->g_439.w", print_hash_value);
    transparent_crc(p_856->g_440.s0, "p_856->g_440.s0", print_hash_value);
    transparent_crc(p_856->g_440.s1, "p_856->g_440.s1", print_hash_value);
    transparent_crc(p_856->g_440.s2, "p_856->g_440.s2", print_hash_value);
    transparent_crc(p_856->g_440.s3, "p_856->g_440.s3", print_hash_value);
    transparent_crc(p_856->g_440.s4, "p_856->g_440.s4", print_hash_value);
    transparent_crc(p_856->g_440.s5, "p_856->g_440.s5", print_hash_value);
    transparent_crc(p_856->g_440.s6, "p_856->g_440.s6", print_hash_value);
    transparent_crc(p_856->g_440.s7, "p_856->g_440.s7", print_hash_value);
    transparent_crc(p_856->g_440.s8, "p_856->g_440.s8", print_hash_value);
    transparent_crc(p_856->g_440.s9, "p_856->g_440.s9", print_hash_value);
    transparent_crc(p_856->g_440.sa, "p_856->g_440.sa", print_hash_value);
    transparent_crc(p_856->g_440.sb, "p_856->g_440.sb", print_hash_value);
    transparent_crc(p_856->g_440.sc, "p_856->g_440.sc", print_hash_value);
    transparent_crc(p_856->g_440.sd, "p_856->g_440.sd", print_hash_value);
    transparent_crc(p_856->g_440.se, "p_856->g_440.se", print_hash_value);
    transparent_crc(p_856->g_440.sf, "p_856->g_440.sf", print_hash_value);
    transparent_crc(p_856->g_442.x, "p_856->g_442.x", print_hash_value);
    transparent_crc(p_856->g_442.y, "p_856->g_442.y", print_hash_value);
    transparent_crc(p_856->g_447.s0, "p_856->g_447.s0", print_hash_value);
    transparent_crc(p_856->g_447.s1, "p_856->g_447.s1", print_hash_value);
    transparent_crc(p_856->g_447.s2, "p_856->g_447.s2", print_hash_value);
    transparent_crc(p_856->g_447.s3, "p_856->g_447.s3", print_hash_value);
    transparent_crc(p_856->g_447.s4, "p_856->g_447.s4", print_hash_value);
    transparent_crc(p_856->g_447.s5, "p_856->g_447.s5", print_hash_value);
    transparent_crc(p_856->g_447.s6, "p_856->g_447.s6", print_hash_value);
    transparent_crc(p_856->g_447.s7, "p_856->g_447.s7", print_hash_value);
    transparent_crc(p_856->g_470.f0, "p_856->g_470.f0", print_hash_value);
    transparent_crc(p_856->g_470.f1, "p_856->g_470.f1", print_hash_value);
    transparent_crc(p_856->g_470.f2.f0, "p_856->g_470.f2.f0", print_hash_value);
    transparent_crc(p_856->g_470.f2.f1, "p_856->g_470.f2.f1", print_hash_value);
    transparent_crc(p_856->g_470.f2.f2, "p_856->g_470.f2.f2", print_hash_value);
    transparent_crc(p_856->g_470.f2.f3, "p_856->g_470.f2.f3", print_hash_value);
    transparent_crc(p_856->g_470.f2.f4, "p_856->g_470.f2.f4", print_hash_value);
    transparent_crc(p_856->g_470.f2.f5, "p_856->g_470.f2.f5", print_hash_value);
    transparent_crc(p_856->g_470.f2.f6, "p_856->g_470.f2.f6", print_hash_value);
    transparent_crc(p_856->g_470.f2.f7, "p_856->g_470.f2.f7", print_hash_value);
    transparent_crc(p_856->g_470.f2.f8, "p_856->g_470.f2.f8", print_hash_value);
    transparent_crc(p_856->g_470.f3, "p_856->g_470.f3", print_hash_value);
    transparent_crc(p_856->g_470.f4, "p_856->g_470.f4", print_hash_value);
    transparent_crc(p_856->g_495.s0, "p_856->g_495.s0", print_hash_value);
    transparent_crc(p_856->g_495.s1, "p_856->g_495.s1", print_hash_value);
    transparent_crc(p_856->g_495.s2, "p_856->g_495.s2", print_hash_value);
    transparent_crc(p_856->g_495.s3, "p_856->g_495.s3", print_hash_value);
    transparent_crc(p_856->g_495.s4, "p_856->g_495.s4", print_hash_value);
    transparent_crc(p_856->g_495.s5, "p_856->g_495.s5", print_hash_value);
    transparent_crc(p_856->g_495.s6, "p_856->g_495.s6", print_hash_value);
    transparent_crc(p_856->g_495.s7, "p_856->g_495.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_856->g_499[i].f0, "p_856->g_499[i].f0", print_hash_value);
        transparent_crc(p_856->g_499[i].f1, "p_856->g_499[i].f1", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f0, "p_856->g_499[i].f2.f0", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f1, "p_856->g_499[i].f2.f1", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f2, "p_856->g_499[i].f2.f2", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f3, "p_856->g_499[i].f2.f3", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f4, "p_856->g_499[i].f2.f4", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f5, "p_856->g_499[i].f2.f5", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f6, "p_856->g_499[i].f2.f6", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f7, "p_856->g_499[i].f2.f7", print_hash_value);
        transparent_crc(p_856->g_499[i].f2.f8, "p_856->g_499[i].f2.f8", print_hash_value);
        transparent_crc(p_856->g_499[i].f3, "p_856->g_499[i].f3", print_hash_value);
        transparent_crc(p_856->g_499[i].f4, "p_856->g_499[i].f4", print_hash_value);

    }
    transparent_crc(p_856->g_518.s0, "p_856->g_518.s0", print_hash_value);
    transparent_crc(p_856->g_518.s1, "p_856->g_518.s1", print_hash_value);
    transparent_crc(p_856->g_518.s2, "p_856->g_518.s2", print_hash_value);
    transparent_crc(p_856->g_518.s3, "p_856->g_518.s3", print_hash_value);
    transparent_crc(p_856->g_518.s4, "p_856->g_518.s4", print_hash_value);
    transparent_crc(p_856->g_518.s5, "p_856->g_518.s5", print_hash_value);
    transparent_crc(p_856->g_518.s6, "p_856->g_518.s6", print_hash_value);
    transparent_crc(p_856->g_518.s7, "p_856->g_518.s7", print_hash_value);
    transparent_crc(p_856->g_518.s8, "p_856->g_518.s8", print_hash_value);
    transparent_crc(p_856->g_518.s9, "p_856->g_518.s9", print_hash_value);
    transparent_crc(p_856->g_518.sa, "p_856->g_518.sa", print_hash_value);
    transparent_crc(p_856->g_518.sb, "p_856->g_518.sb", print_hash_value);
    transparent_crc(p_856->g_518.sc, "p_856->g_518.sc", print_hash_value);
    transparent_crc(p_856->g_518.sd, "p_856->g_518.sd", print_hash_value);
    transparent_crc(p_856->g_518.se, "p_856->g_518.se", print_hash_value);
    transparent_crc(p_856->g_518.sf, "p_856->g_518.sf", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_856->g_549[i], "p_856->g_549[i]", print_hash_value);

    }
    transparent_crc(p_856->g_550, "p_856->g_550", print_hash_value);
    transparent_crc(p_856->g_557.s0, "p_856->g_557.s0", print_hash_value);
    transparent_crc(p_856->g_557.s1, "p_856->g_557.s1", print_hash_value);
    transparent_crc(p_856->g_557.s2, "p_856->g_557.s2", print_hash_value);
    transparent_crc(p_856->g_557.s3, "p_856->g_557.s3", print_hash_value);
    transparent_crc(p_856->g_557.s4, "p_856->g_557.s4", print_hash_value);
    transparent_crc(p_856->g_557.s5, "p_856->g_557.s5", print_hash_value);
    transparent_crc(p_856->g_557.s6, "p_856->g_557.s6", print_hash_value);
    transparent_crc(p_856->g_557.s7, "p_856->g_557.s7", print_hash_value);
    transparent_crc(p_856->g_589.x, "p_856->g_589.x", print_hash_value);
    transparent_crc(p_856->g_589.y, "p_856->g_589.y", print_hash_value);
    transparent_crc(p_856->g_609.f0, "p_856->g_609.f0", print_hash_value);
    transparent_crc(p_856->g_609.f1, "p_856->g_609.f1", print_hash_value);
    transparent_crc(p_856->g_609.f2, "p_856->g_609.f2", print_hash_value);
    transparent_crc(p_856->g_612.x, "p_856->g_612.x", print_hash_value);
    transparent_crc(p_856->g_612.y, "p_856->g_612.y", print_hash_value);
    transparent_crc(p_856->g_612.z, "p_856->g_612.z", print_hash_value);
    transparent_crc(p_856->g_612.w, "p_856->g_612.w", print_hash_value);
    transparent_crc(p_856->g_619.x, "p_856->g_619.x", print_hash_value);
    transparent_crc(p_856->g_619.y, "p_856->g_619.y", print_hash_value);
    transparent_crc(p_856->g_620.x, "p_856->g_620.x", print_hash_value);
    transparent_crc(p_856->g_620.y, "p_856->g_620.y", print_hash_value);
    transparent_crc(p_856->g_648.x, "p_856->g_648.x", print_hash_value);
    transparent_crc(p_856->g_648.y, "p_856->g_648.y", print_hash_value);
    transparent_crc(p_856->g_648.z, "p_856->g_648.z", print_hash_value);
    transparent_crc(p_856->g_648.w, "p_856->g_648.w", print_hash_value);
    transparent_crc(p_856->g_723.f0, "p_856->g_723.f0", print_hash_value);
    transparent_crc(p_856->g_723.f1, "p_856->g_723.f1", print_hash_value);
    transparent_crc(p_856->g_723.f2, "p_856->g_723.f2", print_hash_value);
    transparent_crc(p_856->g_744.x, "p_856->g_744.x", print_hash_value);
    transparent_crc(p_856->g_744.y, "p_856->g_744.y", print_hash_value);
    transparent_crc(p_856->g_751, "p_856->g_751", print_hash_value);
    transparent_crc(p_856->g_780, "p_856->g_780", print_hash_value);
    transparent_crc(p_856->v_collective, "p_856->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 16; i++)
            transparent_crc(p_856->g_special_values[i + 16 * get_linear_group_id()], "p_856->g_special_values[i + 16 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 16; i++)
            transparent_crc(p_856->l_special_values[i], "p_856->l_special_values[i]", print_hash_value);
    transparent_crc(p_856->l_comm_values[get_linear_local_id()], "p_856->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_856->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()], "p_856->g_comm_values[get_linear_group_id() * 84 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
