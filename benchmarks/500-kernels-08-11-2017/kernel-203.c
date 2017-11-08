// --atomics 34 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,1,55 -l 23,1,5
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

__constant uint32_t permutations[10][115] = {
{26,78,59,41,42,75,50,11,20,72,48,19,7,64,93,105,10,66,102,43,83,34,89,104,85,24,106,86,18,71,3,94,91,12,100,38,96,29,47,40,25,30,114,2,36,5,60,23,65,109,31,90,107,82,98,35,56,51,112,4,101,113,39,79,67,45,21,76,87,15,54,53,14,74,68,108,103,37,44,70,22,77,46,1,32,57,84,13,16,49,88,58,69,111,8,92,0,33,62,63,73,17,61,95,28,55,97,81,99,52,110,9,80,27,6}, // permutation 0
{94,103,48,72,16,34,35,44,71,39,52,8,18,7,100,58,91,73,79,20,110,49,75,17,43,12,97,65,51,105,114,93,28,111,15,90,21,42,5,64,109,31,33,11,41,96,3,95,1,99,67,76,2,19,92,32,29,82,98,24,38,56,80,83,104,55,106,37,22,36,102,108,4,59,107,84,30,45,10,66,9,23,88,6,26,101,112,62,40,57,13,25,50,113,46,89,68,87,81,69,14,70,86,0,77,27,85,61,53,63,74,78,54,60,47}, // permutation 1
{77,89,25,3,78,26,50,88,46,55,42,10,110,65,24,103,114,39,61,66,27,59,105,40,15,32,84,94,0,109,82,31,111,113,63,4,104,108,2,17,6,57,107,36,70,73,58,49,37,62,30,75,74,8,72,43,52,5,47,60,101,97,96,81,38,33,56,35,23,54,12,53,99,22,83,29,21,45,86,51,48,95,71,87,91,9,44,67,19,13,18,20,85,11,90,1,64,100,112,28,93,98,14,41,16,106,76,102,80,69,34,7,92,79,68}, // permutation 2
{45,11,48,3,87,46,16,96,34,67,70,18,75,106,62,15,83,100,36,68,20,66,102,95,76,65,49,61,60,19,51,12,47,10,104,71,101,39,52,40,25,114,80,58,57,56,27,9,22,5,31,73,55,78,88,2,77,90,113,17,24,37,21,28,0,94,30,26,82,92,72,32,89,44,38,81,1,111,41,110,59,29,108,4,42,63,33,107,112,7,69,105,85,97,64,23,99,6,35,79,86,50,98,109,8,93,91,13,74,54,14,53,84,103,43}, // permutation 3
{21,12,41,67,22,15,95,54,1,87,49,10,27,11,56,109,29,80,77,64,101,110,70,38,7,2,111,17,82,20,96,94,78,97,93,81,9,33,112,72,108,60,113,106,48,58,52,28,42,55,3,5,24,75,51,98,37,76,19,13,4,88,89,23,59,43,36,34,6,100,107,90,40,45,85,69,14,18,62,25,0,74,44,8,66,53,30,16,71,61,79,35,63,99,57,65,50,26,46,102,47,31,86,91,84,73,104,114,39,68,103,92,105,83,32}, // permutation 4
{96,101,14,60,23,5,82,59,31,50,49,52,70,41,74,61,58,64,32,109,100,2,35,112,75,47,40,28,93,18,111,44,20,68,110,92,66,6,113,43,38,91,80,11,33,10,57,107,29,56,88,99,9,90,114,78,108,72,85,55,8,1,48,104,24,81,0,69,42,97,15,67,21,26,63,45,76,73,16,51,22,79,19,103,4,53,65,62,71,95,30,34,102,105,39,89,83,94,84,37,54,46,87,12,7,25,3,77,86,106,27,13,17,36,98}, // permutation 5
{52,37,101,75,4,35,46,110,90,76,106,100,8,6,23,39,93,107,11,74,70,96,61,32,21,59,55,104,7,12,112,51,38,63,89,73,10,87,24,68,9,40,66,113,95,42,114,45,53,80,88,18,69,91,49,15,13,33,62,19,105,17,84,103,72,25,81,109,3,79,36,94,2,14,1,31,44,48,41,58,78,47,82,60,22,111,65,71,85,83,99,20,43,92,54,27,5,29,50,77,26,102,56,28,97,57,16,108,67,30,0,64,86,98,34}, // permutation 6
{40,76,54,32,106,89,52,63,88,19,101,3,47,21,70,49,15,79,86,42,29,82,10,41,83,81,14,114,48,102,30,17,36,68,9,74,104,5,60,66,112,13,78,20,109,23,7,55,0,1,71,44,85,39,58,90,8,100,46,4,45,12,93,80,98,67,38,22,107,108,27,53,62,57,111,51,73,56,97,105,96,65,113,77,75,2,26,61,91,11,37,16,33,103,35,28,25,43,94,18,110,84,64,72,50,99,6,24,87,31,34,95,92,69,59}, // permutation 7
{12,19,82,72,87,26,89,76,61,45,42,114,9,27,52,75,69,79,63,36,20,49,15,88,31,8,18,80,57,81,23,5,111,3,33,78,100,37,103,101,0,54,85,90,41,102,113,97,46,98,74,112,7,55,107,21,60,50,92,30,35,32,34,110,105,58,39,24,109,17,59,51,67,95,28,65,53,16,66,86,96,62,104,68,73,4,94,14,48,106,84,38,11,40,6,47,83,56,93,77,108,71,1,91,99,22,2,29,44,10,70,43,13,25,64}, // permutation 8
{50,62,92,103,15,104,59,0,43,55,49,54,18,21,37,78,19,81,60,22,98,42,90,39,74,46,94,38,31,48,35,10,36,41,47,89,57,65,3,85,111,66,4,82,29,83,2,79,105,7,68,76,75,24,80,14,73,87,101,61,16,12,102,11,84,95,44,93,96,100,28,114,51,45,71,34,64,70,109,32,99,97,25,110,20,27,113,52,72,8,63,106,1,5,112,107,30,108,23,13,86,40,58,88,9,69,33,26,6,91,17,56,53,67,77} // permutation 9
};

// Seed: 468526344

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int16_t  f1;
   int16_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int32_t  f5;
   volatile uint32_t  f6;
};

struct S1 {
   uint32_t  f0;
};

union U2 {
   volatile int8_t * volatile  f0;
   int64_t  f1;
   volatile int8_t * volatile  f2;
   uint64_t  f3;
};

struct S3 {
    int8_t g_3;
    int32_t g_32;
    uint64_t g_34;
    int32_t g_69;
    uint64_t g_84;
    VECTOR(uint64_t, 4) g_96;
    uint32_t g_115;
    uint16_t g_117;
    uint16_t g_121;
    uint16_t g_123;
    uint16_t *g_122;
    VECTOR(int16_t, 16) g_125;
    VECTOR(int16_t, 8) g_127;
    int8_t g_134;
    volatile VECTOR(uint64_t, 2) g_135;
    volatile int8_t g_145;
    volatile int8_t *g_144;
    volatile int8_t ** volatile g_143;
    int32_t * volatile g_151;
    int32_t g_153;
    uint16_t g_183;
    int8_t g_190;
    uint16_t g_192;
    volatile union U2 g_197;
    struct S1 g_200;
    struct S1 * volatile g_199;
    int32_t * volatile g_201[6];
    union U2 g_210;
    VECTOR(int64_t, 4) g_227;
    volatile VECTOR(int64_t, 8) g_229;
    volatile VECTOR(int64_t, 8) g_230;
    uint64_t *g_235;
    struct S0 g_238;
    struct S0 * volatile g_239;
    struct S0 * volatile g_240;
    struct S0 * volatile g_241;
    int32_t g_245;
    int32_t g_260;
    volatile struct S0 g_266;
    volatile VECTOR(int16_t, 2) g_273;
    volatile VECTOR(int16_t, 4) g_278;
    volatile VECTOR(int16_t, 8) g_279;
    VECTOR(int16_t, 4) g_281;
    uint8_t g_285;
    int32_t * volatile g_293;
    volatile struct S0 g_308;
    volatile struct S0 g_345;
    volatile int32_t g_353;
    volatile int32_t *g_352;
    volatile int32_t **g_351;
    int32_t **g_367;
    volatile VECTOR(int64_t, 2) g_397;
    volatile VECTOR(uint32_t, 2) g_406;
    VECTOR(int32_t, 8) g_426;
    VECTOR(int32_t, 2) g_427;
    VECTOR(int32_t, 8) g_429;
    VECTOR(int32_t, 8) g_430;
    int8_t *g_433;
    int8_t **g_432[10];
    VECTOR(uint16_t, 2) g_446;
    volatile uint16_t * volatile * volatile * volatile g_449;
    VECTOR(int8_t, 8) g_466;
    VECTOR(uint8_t, 2) g_469;
    volatile VECTOR(uint16_t, 2) g_505;
    volatile uint64_t g_507;
    VECTOR(uint32_t, 8) g_511;
    volatile int16_t * volatile g_513[1];
    volatile int16_t * volatile *g_512;
    volatile int16_t * volatile ** volatile g_514;
    volatile VECTOR(int32_t, 2) g_669;
    int32_t **g_712;
    int32_t *g_714;
    int32_t **g_713;
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
int64_t  func_1(struct S3 * p_726);
uint64_t  func_8(int8_t * p_9, int8_t * p_10, int8_t * p_11, int64_t  p_12, int8_t * p_13, struct S3 * p_726);
int8_t * func_14(int8_t * p_15, struct S1  p_16, uint32_t  p_17, int8_t * p_18, int64_t  p_19, struct S3 * p_726);
int8_t * func_20(int8_t * p_21, int8_t * p_22, int8_t * p_23, int8_t  p_24, uint64_t  p_25, struct S3 * p_726);
uint32_t  func_45(int32_t  p_46, uint32_t  p_47, int32_t * p_48, int8_t  p_49, int8_t * p_50, struct S3 * p_726);
uint32_t  func_51(int32_t * p_52, uint32_t  p_53, int32_t  p_54, struct S3 * p_726);
int32_t * func_55(uint64_t  p_56, int8_t  p_57, int32_t  p_58, int8_t * p_59, struct S3 * p_726);
uint8_t  func_64(uint64_t  p_65, struct S3 * p_726);
uint32_t  func_93(int32_t  p_94, int64_t  p_95, struct S3 * p_726);
uint16_t  func_107(uint64_t * p_108, uint8_t  p_109, struct S3 * p_726);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_726->l_comm_values p_726->g_34 p_726->g_3 p_726->g_comm_values p_726->g_84 p_726->g_69 p_726->g_143 p_726->g_96 p_726->g_122 p_726->g_117 p_726->g_123 p_726->g_144 p_726->g_145 p_726->g_127 p_726->g_183 p_726->g_192 p_726->g_197 p_726->g_199 p_726->g_153 p_726->g_200.f0 p_726->g_238 p_726->g_241 p_726->g_245 p_726->g_260 p_726->g_266 p_726->g_230 p_726->g_273 p_726->g_278 p_726->g_279 p_726->g_281 p_726->g_285 p_726->g_293 p_726->g_308 p_726->g_200 p_726->g_115 p_726->g_367 p_726->g_235 p_726->g_351 p_726->g_352 p_726->g_397 p_726->g_406 p_726->g_345.f0 p_726->g_426 p_726->g_427 p_726->g_429 p_726->g_430 p_726->g_432 p_726->g_125 p_726->g_433 p_726->g_134 p_726->g_353 p_726->g_446 p_726->g_449 p_726->g_227 p_726->g_512 p_726->g_514 p_726->g_32 p_726->g_513 p_726->g_669 p_726->g_201 p_726->g_511 p_726->g_713 p_726->g_714
 * writes: p_726->g_34 p_726->g_32 p_726->g_84 p_726->g_69 p_726->g_153 p_726->g_125 p_726->g_117 p_726->g_121 p_726->g_183 p_726->g_200 p_726->g_134 p_726->g_238 p_726->g_115 p_726->g_122 p_726->g_245 p_726->g_201 p_726->g_260 p_726->g_266 p_726->g_285 p_726->g_3 p_726->g_367 p_726->g_353 p_726->g_432 p_726->g_293 p_726->g_123 p_726->g_512 p_726->g_430 p_726->g_714
 */
int64_t  func_1(struct S3 * p_726)
{ /* block id: 4 */
    int8_t *l_2[1];
    int32_t l_4 = 0x1C63C407L;
    uint32_t l_5 = 0x90C54408L;
    int8_t *l_26 = (void*)0;
    uint16_t l_27 = 0xDDA8L;
    struct S1 l_299 = {8UL};
    uint8_t l_386 = 0xCEL;
    int64_t *l_387 = (void*)0;
    int64_t *l_388 = &p_726->g_238.f3;
    int64_t *l_389 = (void*)0;
    int64_t *l_390 = &p_726->g_238.f0;
    uint16_t l_391[2][7][3] = {{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL}}};
    VECTOR(int64_t, 2) l_398 = (VECTOR(int64_t, 2))(0x336FBCF2F5A14B74L, 1L);
    VECTOR(uint32_t, 4) l_405 = (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0xB922EB87L), 0xB922EB87L);
    uint32_t l_413 = 8UL;
    VECTOR(int32_t, 8) l_431 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    uint16_t **l_451[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t ***l_450 = &l_451[5];
    VECTOR(int8_t, 8) l_467 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x32L), 0x32L), 0x32L, (-1L), 0x32L);
    int32_t *l_471 = &p_726->g_32;
    VECTOR(uint16_t, 16) l_549 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xDC9AL), 0xDC9AL), 0xDC9AL, 65535UL, 0xDC9AL, (VECTOR(uint16_t, 2))(65535UL, 0xDC9AL), (VECTOR(uint16_t, 2))(65535UL, 0xDC9AL), 65535UL, 0xDC9AL, 65535UL, 0xDC9AL);
    int32_t **l_619 = (void*)0;
    int64_t l_698 = (-2L);
    int32_t *l_719 = &p_726->g_32;
    int32_t *l_720 = &p_726->g_245;
    int32_t *l_721 = (void*)0;
    int32_t *l_722[3][9][6] = {{{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0},{(void*)0,(void*)0,&p_726->g_245,&p_726->g_153,(void*)0,(void*)0}}};
    uint16_t l_723 = 0xF181L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2[i] = &p_726->g_3;
    if ((((l_2[0] != l_2[0]) ^ l_4) , (l_5 != (safe_add_func_uint32_t_u_u(0x07C70AB2L, (((*l_390) = ((*l_388) = ((l_5 ^ (l_386 = func_8(&p_726->g_3, func_14(func_20(&p_726->g_3, l_26, &p_726->g_3, l_27, p_726->l_comm_values[(safe_mod_func_uint32_t_u_u(p_726->tid, 115))], p_726), l_299, l_5, &p_726->g_190, p_726->g_192, p_726), &p_726->g_190, l_5, l_2[0], p_726))) & l_299.f0))) , l_391[0][3][0]))))))
    { /* block id: 160 */
        int32_t l_396[2];
        int16_t *l_401 = (void*)0;
        int16_t *l_402 = &p_726->g_238.f2;
        VECTOR(int32_t, 16) l_409 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2A4664BDL), 0x2A4664BDL), 0x2A4664BDL, 0L, 0x2A4664BDL, (VECTOR(int32_t, 2))(0L, 0x2A4664BDL), (VECTOR(int32_t, 2))(0L, 0x2A4664BDL), 0L, 0x2A4664BDL, 0L, 0x2A4664BDL);
        int16_t **l_410 = &l_402;
        uint32_t *l_414 = &p_726->g_238.f4;
        uint64_t l_415 = 18446744073709551615UL;
        int64_t l_510 = 1L;
        VECTOR(uint64_t, 8) l_556 = (VECTOR(uint64_t, 8))(0x0732FAD8BB3EF5C9L, (VECTOR(uint64_t, 4))(0x0732FAD8BB3EF5C9L, (VECTOR(uint64_t, 2))(0x0732FAD8BB3EF5C9L, 0xCE8DD2CFD0C9F992L), 0xCE8DD2CFD0C9F992L), 0xCE8DD2CFD0C9F992L, 0x0732FAD8BB3EF5C9L, 0xCE8DD2CFD0C9F992L);
        int64_t l_565 = 0L;
        int16_t *l_630 = &p_726->g_238.f1;
        VECTOR(uint32_t, 8) l_638 = (VECTOR(uint32_t, 8))(0xA33DEB65L, (VECTOR(uint32_t, 4))(0xA33DEB65L, (VECTOR(uint32_t, 2))(0xA33DEB65L, 1UL), 1UL), 1UL, 0xA33DEB65L, 1UL);
        int32_t *l_644 = &l_4;
        int i;
        for (i = 0; i < 2; i++)
            l_396[i] = (-7L);
        if ((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((safe_mul_func_uint8_t_u_u(0xB1L, (p_726->g_3 ^= ((l_396[0] || ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(p_726->g_397.yx)).yyyxyxxxyxxyxyyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(l_398.yx)), ((VECTOR(int64_t, 8))((safe_mod_func_int16_t_s_s(((*l_402) = l_27), p_726->g_238.f6)), 0x6E57200D2AF56BBDL, (l_409.s4 = (0UL && ((VECTOR(int8_t, 16))(((((*l_414) = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 16))(l_405.zwwwzxyzzwxzwzwx)).odd, ((VECTOR(uint32_t, 2))(p_726->g_406.xy)).xyxyxxyy))).s0277472741773506)).sd, (((((+(safe_mod_func_uint64_t_u_u(((*p_726->g_235) = (l_27 , (((((*l_410) = (((VECTOR(int32_t, 16))(l_409.sadbf2d430cdac9b4)).s8 , p_726->g_122)) == p_726->g_122) > (!(safe_rshift_func_int8_t_s_s((((l_409.s2 , p_726->g_238.f3) , (void*)0) == (void*)0), 6)))) , 18446744073709551615UL))), (-2L)))) & l_413) | 1L) != GROUP_DIVERGE(0, 1)) || p_726->g_238.f0)))) , l_396[0]) <= (-1L)), ((VECTOR(int8_t, 8))(6L)), (*p_726->g_144), 0x03L, ((VECTOR(int8_t, 2))((-2L))), ((VECTOR(int8_t, 2))((-6L))), 0x6FL)).s7)), l_386, 0x493EB3843AF71901L, 0x31C7CB9245122582L, 0x48A0079CE1E44C20L, 0x235A01C0CB8219A8L)).s42))), 0x0B0A5A06651E1C97L, 1L)).yzywzxxzwwyywwyx, ((VECTOR(int64_t, 16))(0x7F354D78A8CF6E25L))))), ((VECTOR(int64_t, 16))(0x72F4CF1BBF3470E1L)), ((VECTOR(int64_t, 16))((-9L)))))))).odd))).s16, ((VECTOR(int64_t, 2))(1L))))), p_726->g_345.f0, ((VECTOR(int64_t, 4))(6L)), 0x497F86459A5AE108L)).s7312270142013030))))).s0) == l_415)))) <= l_391[1][2][0]))))
        { /* block id: 167 */
            int16_t l_418 = 0x3A0CL;
            uint32_t *l_425 = &p_726->g_115;
            VECTOR(int16_t, 2) l_428 = (VECTOR(int16_t, 2))((-10L), 4L);
            int32_t **l_436 = (void*)0;
            int32_t *l_438[4] = {&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69};
            int32_t **l_437[3][5] = {{&l_438[2],&l_438[3],&l_438[1],&l_438[3],&l_438[2]},{&l_438[2],&l_438[3],&l_438[1],&l_438[3],&l_438[2]},{&l_438[2],&l_438[3],&l_438[1],&l_438[3],&l_438[2]}};
            int i, j;
            (*p_726->g_352) = (safe_mul_func_int16_t_s_s(((l_418 && (safe_mul_func_uint8_t_u_u(((~(((*p_726->g_433) &= (safe_rshift_func_int16_t_s_s(p_726->g_308.f3, ((safe_add_func_int8_t_s_s((((*l_425) &= 0x982C6C15L) && ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(p_726->g_426.s3340101072762440)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_726->g_427.xyyyyxxx)).odd)).even)).xyyxyxxy)).s4564472263202406, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_428.xyxx)).yywxwzwz, ((VECTOR(uint16_t, 2))(0x62B9L, 65535UL)).xxxyxyyy))).s3320724526017126)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_726->g_429.s7720)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(p_726->g_430.s47150526)).even, ((VECTOR(int32_t, 16))(l_431.s6326244242527515)).sc240))).y, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((p_726->g_432[6] = p_726->g_432[3]) == &l_2[0]), l_428.x, (-5L), (-1L), 0L, (safe_sub_func_uint16_t_u_u(l_428.y, p_726->g_115)), (-1L), (-5L), p_726->g_125.se, l_431.s3, p_726->g_238.f4, l_409.sa, 1L, l_431.s4, 0x1777CCA3L, 5L)))).even, ((VECTOR(int32_t, 8))(0x7414471CL))))), (-3L), ((VECTOR(int32_t, 4))(0x78CC0ADFL)), 0x7407307CL, 0L, (-1L))))).s1d17)), 0x39FF6B90L, 0x3CF43DDEL, ((VECTOR(int32_t, 2))(0L)), 0L, (-1L), 0x2BFFE14DL)).lo, ((VECTOR(int32_t, 8))(0x51063BA9L))))).hi, ((VECTOR(int32_t, 4))((-1L)))))).yzzxxzxyzxzwzyxw))), ((VECTOR(int32_t, 16))(1L))))).s0), p_726->g_127.s7)) , 0x4B07L)))) >= l_431.s5)) != 0xD527L), 0x52L))) || (-10L)), p_726->g_426.s4));
            p_726->g_293 = l_425;
            p_726->g_201[3] = l_414;
            for (p_726->g_134 = 0; (p_726->g_134 < (-17)); p_726->g_134 = safe_sub_func_uint16_t_u_u(p_726->g_134, 8))
            { /* block id: 176 */
                return l_396[0];
            }
        }
        else
        { /* block id: 179 */
            uint8_t l_445[10] = {0xACL,251UL,250UL,251UL,0xACL,0xACL,251UL,250UL,251UL,0xACL};
            int32_t l_461 = 8L;
            VECTOR(int32_t, 8) l_487 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x057D9DC7L), 0x057D9DC7L), 0x057D9DC7L, (-1L), 0x057D9DC7L);
            VECTOR(int32_t, 4) l_489 = (VECTOR(int32_t, 4))(0x28AF2A78L, (VECTOR(int32_t, 2))(0x28AF2A78L, 0x4C58BFB7L), 0x4C58BFB7L);
            int32_t ***l_504 = (void*)0;
            int16_t l_508 = 0x3B05L;
            int8_t l_509 = (-1L);
            uint32_t *l_550 = &l_5;
            uint32_t **l_551 = &l_550;
            int32_t *l_566 = &p_726->g_153;
            int i;
            (**p_726->g_351) |= ((void*)0 != &p_726->g_84);
            if (l_415)
            { /* block id: 181 */
                uint32_t l_458 = 6UL;
                uint8_t *l_459[7] = {&l_386,(void*)0,&l_386,&l_386,(void*)0,&l_386,&l_386};
                int32_t l_460 = 9L;
                VECTOR(int32_t, 16) l_490 = (VECTOR(int32_t, 16))(0x0512A643L, (VECTOR(int32_t, 4))(0x0512A643L, (VECTOR(int32_t, 2))(0x0512A643L, 0x117839A3L), 0x117839A3L), 0x117839A3L, 0x0512A643L, 0x117839A3L, (VECTOR(int32_t, 2))(0x0512A643L, 0x117839A3L), (VECTOR(int32_t, 2))(0x0512A643L, 0x117839A3L), 0x0512A643L, 0x117839A3L, 0x0512A643L, 0x117839A3L);
                VECTOR(int32_t, 16) l_491 = (VECTOR(int32_t, 16))(0x42DDA5D0L, (VECTOR(int32_t, 4))(0x42DDA5D0L, (VECTOR(int32_t, 2))(0x42DDA5D0L, 0x17296046L), 0x17296046L), 0x17296046L, 0x42DDA5D0L, 0x17296046L, (VECTOR(int32_t, 2))(0x42DDA5D0L, 0x17296046L), (VECTOR(int32_t, 2))(0x42DDA5D0L, 0x17296046L), 0x42DDA5D0L, 0x17296046L, 0x42DDA5D0L, 0x17296046L);
                int i;
                (*p_726->g_352) |= 0x4E565BAFL;
                (*p_726->g_352) = (safe_add_func_uint16_t_u_u((l_461 = ((65535UL < (l_445[6] < ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_726->g_446.yy)).xyxyxyyyyxxxyyyy)).s57)), 0x53E0L, 0UL)).z)) > (((*p_726->g_199) , (safe_mod_func_uint16_t_u_u((((l_460 |= (((*l_402) = (-7L)) <= (((GROUP_DIVERGE(2, 1) , p_726->g_449) == l_450) , ((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_458, ((l_445[6] ^ (((p_726->g_230.s3 < (*p_726->g_433)) || 0x3FBBA0EE3C25134BL) && l_396[1])) == p_726->g_427.x))), 9UL)), 6)) != l_405.z) ^ l_445[7]) < p_726->g_227.y)))) >= l_458) , 0x8619L), 0xE769L))) <= 0x3985DC85L))), l_458));
                for (l_4 = 29; (l_4 > (-3)); --l_4)
                { /* block id: 189 */
                    VECTOR(int8_t, 8) l_468 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                    int32_t *l_470[6][10] = {{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461},{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461},{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461},{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461},{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461},{(void*)0,&p_726->g_245,&l_461,&l_460,&p_726->g_32,&l_460,&l_461,&p_726->g_245,(void*)0,&l_461}};
                    VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))(0x7E2B9EBCL, (VECTOR(int32_t, 4))(0x7E2B9EBCL, (VECTOR(int32_t, 2))(0x7E2B9EBCL, 0x18CBEEF1L), 0x18CBEEF1L), 0x18CBEEF1L, 0x7E2B9EBCL, 0x18CBEEF1L, (VECTOR(int32_t, 2))(0x7E2B9EBCL, 0x18CBEEF1L), (VECTOR(int32_t, 2))(0x7E2B9EBCL, 0x18CBEEF1L), 0x7E2B9EBCL, 0x18CBEEF1L, 0x7E2B9EBCL, 0x18CBEEF1L);
                    uint32_t l_506 = 1UL;
                    int i, j;
                    (1 + 1);
                }
            }
            else
            { /* block id: 204 */
                int16_t ***l_544[4] = {&l_410,&l_410,&l_410,&l_410};
                int i;
                (*p_726->g_514) = p_726->g_512;
                if ((atomic_inc(&p_726->l_atomic_input[16]) == 2))
                { /* block id: 207 */
                    int32_t l_515 = (-2L);
                    uint64_t l_516[2][7] = {{0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L},{0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L,0x3EDB6E51BC033663L}};
                    int i, j;
                    l_516[0][5] ^= l_515;
                    for (l_515 = 0; (l_515 == (-25)); l_515 = safe_sub_func_int16_t_s_s(l_515, 1))
                    { /* block id: 211 */
                        uint32_t l_519 = 4294967295UL;
                        int8_t l_520 = (-7L);
                        union U2 l_521 = {0};/* VOLATILE GLOBAL l_521 */
                        int8_t l_522[7][10][3] = {{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}},{{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L},{7L,0x73L,1L}}};
                        VECTOR(uint32_t, 4) l_523 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0UL), 0UL);
                        VECTOR(uint32_t, 4) l_524 = (VECTOR(uint32_t, 4))(0x88258646L, (VECTOR(uint32_t, 2))(0x88258646L, 0x6870B049L), 0x6870B049L);
                        VECTOR(uint32_t, 8) l_525 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL);
                        VECTOR(uint32_t, 8) l_526 = (VECTOR(uint32_t, 8))(0x55FB2651L, (VECTOR(uint32_t, 4))(0x55FB2651L, (VECTOR(uint32_t, 2))(0x55FB2651L, 4UL), 4UL), 4UL, 0x55FB2651L, 4UL);
                        int32_t l_527 = 0x006952EAL;
                        uint8_t l_528 = 0x27L;
                        uint8_t l_531 = 253UL;
                        uint32_t l_532 = 4294967295UL;
                        VECTOR(int32_t, 4) l_533 = (VECTOR(int32_t, 4))(0x239076DDL, (VECTOR(int32_t, 2))(0x239076DDL, 0x4B12C8FAL), 0x4B12C8FAL);
                        uint64_t l_534 = 18446744073709551615UL;
                        int16_t l_535[1][1];
                        uint8_t l_536 = 0UL;
                        int32_t l_537 = 0x0D29AA6CL;
                        VECTOR(int32_t, 2) l_538 = (VECTOR(int32_t, 2))(0x44EAB1E5L, 0x4326653DL);
                        int8_t l_539 = 0x29L;
                        uint8_t l_540 = 0xF0L;
                        uint8_t l_541 = 254UL;
                        union U2 *l_542 = (void*)0;
                        union U2 *l_543[5];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_535[i][j] = 0L;
                        }
                        for (i = 0; i < 5; i++)
                            l_543[i] = &l_521;
                        l_537 = (l_519 , (l_520 , ((VECTOR(int32_t, 16))((((l_521 , l_522[2][1][1]) , (l_527 ^= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(4294967289UL, 0UL)).yyxxxxyy, ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_523.yy)).xxyyyxxyyyxxyxyx)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_524.wz)))).xyxxxxyxxyxyyyxx))).even, ((VECTOR(uint32_t, 16))(l_525.s0276177103126700)).odd))), (uint32_t)FAKE_DIVERGE(p_726->group_2_offset, get_group_id(2), 10)))).s36, ((VECTOR(uint32_t, 2))(l_526.s64))))))), 0xD4744D1AL, 0x50BF8AD9L)).wxywzyxw)).s1)) , ((--l_528) , (l_531 = 0L))), (-1L), 9L, l_532, (-8L), (-10L), ((VECTOR(int32_t, 4))(l_533.wzyz)).z, l_534, l_535[0][0], ((VECTOR(int32_t, 2))((-1L))), l_536, ((VECTOR(int32_t, 2))(0x4D0BF5A7L)), 1L, 1L)).sb));
                        l_539 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_538.yy)), 0x60ABF435L, 0x3AD13F58L)).w;
                        l_543[0] = ((l_541 = l_540) , l_542);
                    }
                    unsigned int result = 0;
                    result += l_515;
                    int l_516_i0, l_516_i1;
                    for (l_516_i0 = 0; l_516_i0 < 2; l_516_i0++) {
                        for (l_516_i1 = 0; l_516_i1 < 7; l_516_i1++) {
                            result += l_516[l_516_i0][l_516_i1];
                        }
                    }
                    atomic_add(&p_726->l_special_values[16], result);
                }
                else
                { /* block id: 220 */
                    (1 + 1);
                }
                l_410 = &l_401;
            }
            (*l_566) &= ((*l_471) && ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((((*l_551) = ((!((**p_726->g_512) == ((VECTOR(uint16_t, 16))(l_549.s835bf6745d699059)).sd)) , l_550)) != &p_726->g_115) | (*p_726->g_122)), (((~(safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((!((~l_396[1]) && ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 2))(l_556.s65)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x4F8E0997A383ACE6L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(((safe_lshift_func_uint8_t_u_s((((*p_726->g_235) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((~(safe_rshift_func_int8_t_s_s(((-1L) || (((*p_726->g_433) || (((VECTOR(int16_t, 4))(0x393EL, 0L, 0x555EL, 8L)).z && ((*l_471) | p_726->g_427.x))) < p_726->g_238.f0)), 0))), 0x514F299A700AF99BL)), p_726->g_446.y))) == (*l_471)), 7)) || GROUP_DIVERGE(1, 1)), ((VECTOR(int64_t, 2))(0x33EB47BB124EE664L)), (-4L), ((VECTOR(int64_t, 4))(0x4EC4E83005E772B0L)))).s04, ((VECTOR(int64_t, 2))((-6L)))))).xxyyyxxxyyxyxxxx))).s085b, ((VECTOR(uint64_t, 4))(18446744073709551608UL))))).lo)), 0xA66C50B85CC3A334L)).wywxyywx)).s52))).yxxyxxyyxyyxyxyx)).sccbc)).even)).xyyx)).x)) || 0x9AF4L), l_565)), GROUP_DIVERGE(0, 1)))) , p_726->g_127.s2) | 0L))), FAKE_DIVERGE(p_726->group_1_offset, get_group_id(1), 10))) == 0x779EL));
        }
        (*p_726->g_352) |= (GROUP_DIVERGE(2, 1) , ((*l_471) = (*l_471)));
        if ((3UL != 254UL))
        { /* block id: 231 */
            int32_t **l_618 = &l_471;
            int16_t *l_628[5][5][3] = {{{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1}},{{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1}},{{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1}},{{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1}},{{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1},{&p_726->g_238.f1,&p_726->g_238.f1,&p_726->g_238.f1}}};
            int16_t **l_629[4][5][7] = {{{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]}},{{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]}},{{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]}},{{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]},{&l_628[3][3][2],&l_628[0][2][2],&l_401,&l_628[0][2][2],&l_628[3][3][2],&l_401,&l_628[1][0][2]}}};
            struct S1 l_641 = {4294967292UL};
            uint8_t *l_642 = (void*)0;
            uint8_t *l_643 = &l_386;
            int i, j, k;
            if ((atomic_inc(&p_726->l_atomic_input[18]) == 4))
            { /* block id: 233 */
                uint32_t l_567 = 0xF263C7F5L;
                if (l_567)
                { /* block id: 234 */
                    int32_t l_568 = 0x18141C7FL;
                    struct S1 l_591[7] = {{4294967295UL},{1UL},{4294967295UL},{4294967295UL},{1UL},{4294967295UL},{4294967295UL}};
                    struct S1 l_592 = {0UL};
                    VECTOR(int32_t, 8) l_593 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
                    int16_t l_594 = 0x2581L;
                    int i;
                    for (l_568 = (-17); (l_568 != (-9)); ++l_568)
                    { /* block id: 237 */
                        VECTOR(int32_t, 16) l_571 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int32_t, 2) l_572 = (VECTOR(int32_t, 2))(0x414C75B2L, 3L);
                        VECTOR(int32_t, 8) l_573 = (VECTOR(int32_t, 8))(0x01241995L, (VECTOR(int32_t, 4))(0x01241995L, (VECTOR(int32_t, 2))(0x01241995L, 0x5DCD4A41L), 0x5DCD4A41L), 0x5DCD4A41L, 0x01241995L, 0x5DCD4A41L);
                        VECTOR(int16_t, 16) l_574 = (VECTOR(int16_t, 16))(0x124BL, (VECTOR(int16_t, 4))(0x124BL, (VECTOR(int16_t, 2))(0x124BL, 2L), 2L), 2L, 0x124BL, 2L, (VECTOR(int16_t, 2))(0x124BL, 2L), (VECTOR(int16_t, 2))(0x124BL, 2L), 0x124BL, 2L, 0x124BL, 2L);
                        VECTOR(int16_t, 16) l_575 = (VECTOR(int16_t, 16))(0x5D74L, (VECTOR(int16_t, 4))(0x5D74L, (VECTOR(int16_t, 2))(0x5D74L, 0x0A67L), 0x0A67L), 0x0A67L, 0x5D74L, 0x0A67L, (VECTOR(int16_t, 2))(0x5D74L, 0x0A67L), (VECTOR(int16_t, 2))(0x5D74L, 0x0A67L), 0x5D74L, 0x0A67L, 0x5D74L, 0x0A67L);
                        VECTOR(int16_t, 4) l_576 = (VECTOR(int16_t, 4))(0x36FBL, (VECTOR(int16_t, 2))(0x36FBL, 0L), 0L);
                        VECTOR(uint16_t, 4) l_577 = (VECTOR(uint16_t, 4))(0x39D2L, (VECTOR(uint16_t, 2))(0x39D2L, 1UL), 1UL);
                        int32_t l_578 = 0x303E4087L;
                        VECTOR(int16_t, 8) l_579 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 3L), 3L), 3L, 9L, 3L);
                        VECTOR(int16_t, 16) l_580 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        VECTOR(int16_t, 16) l_581 = (VECTOR(int16_t, 16))(0x4E86L, (VECTOR(int16_t, 4))(0x4E86L, (VECTOR(int16_t, 2))(0x4E86L, 1L), 1L), 1L, 0x4E86L, 1L, (VECTOR(int16_t, 2))(0x4E86L, 1L), (VECTOR(int16_t, 2))(0x4E86L, 1L), 0x4E86L, 1L, 0x4E86L, 1L);
                        VECTOR(int32_t, 2) l_582 = (VECTOR(int32_t, 2))(3L, 0x066EEEBBL);
                        VECTOR(int32_t, 8) l_583 = (VECTOR(int32_t, 8))(0x09DBC24CL, (VECTOR(int32_t, 4))(0x09DBC24CL, (VECTOR(int32_t, 2))(0x09DBC24CL, 0L), 0L), 0L, 0x09DBC24CL, 0L);
                        int64_t l_584[7] = {0x110216AFFFB36144L,0x110216AFFFB36144L,0x110216AFFFB36144L,0x110216AFFFB36144L,0x110216AFFFB36144L,0x110216AFFFB36144L,0x110216AFFFB36144L};
                        int16_t l_585 = 0x07DFL;
                        VECTOR(int32_t, 4) l_586 = (VECTOR(int32_t, 4))(0x502FC871L, (VECTOR(int32_t, 2))(0x502FC871L, (-1L)), (-1L));
                        int16_t l_587 = (-1L);
                        VECTOR(int32_t, 8) l_588 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x596A8848L), 0x596A8848L), 0x596A8848L, 1L, 0x596A8848L);
                        VECTOR(int32_t, 16) l_589 = (VECTOR(int32_t, 16))(0x203564A3L, (VECTOR(int32_t, 4))(0x203564A3L, (VECTOR(int32_t, 2))(0x203564A3L, 0x0F640AE3L), 0x0F640AE3L), 0x0F640AE3L, 0x203564A3L, 0x0F640AE3L, (VECTOR(int32_t, 2))(0x203564A3L, 0x0F640AE3L), (VECTOR(int32_t, 2))(0x203564A3L, 0x0F640AE3L), 0x203564A3L, 0x0F640AE3L, 0x203564A3L, 0x0F640AE3L);
                        int64_t l_590 = 0x630C32DB84842256L;
                        int i;
                        l_590 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(l_571.sd303e9793a439d51)).sa1, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_572.yyyyyyxxxyyyxxyy)), ((VECTOR(int32_t, 4))(l_573.s7475)).zxywyzyxzyywzyyw))).s8b))).yyyy, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(l_574.s2633)).yzxxyzxzzzzwwyyz, ((VECTOR(int16_t, 4))(l_575.sf373)).yxwzxzywxyywzwzw))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_576.wy)))).xxxxyyxxyyyxyyyy))).hi, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 2))(l_577.yz)).xxxxxyyx, ((VECTOR(uint16_t, 4))(l_578, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(l_579.s1005)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_580.s75)))).yyxx, ((VECTOR(int16_t, 2))(l_581.sff)).xxyx))).wywxxyyy)).hi))).z, 65535UL, 0UL)).zywyxxxw)))))).hi, ((VECTOR(int32_t, 16))(l_582.yyxxxxxyxxyyyxyx)).sc4f3))), ((VECTOR(int32_t, 16))(l_583.s1363770604712160)).s43f3, ((VECTOR(int32_t, 2))((-1L), 1L)).xxyx))).zxzyzzyy)).lo)).yxxwzwww)), ((VECTOR(int32_t, 8))(0x772E0F6FL, (l_584[3] , l_585), ((VECTOR(int32_t, 2))(l_586.yw)), 0x7DEBE7A6L, l_587, 0x238D7D7AL, 0L))))).s45, ((VECTOR(int32_t, 2))(l_588.s22)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_589.s5e17fb814086d202)).even)).s37))).xxxxyyxyxyxyyyyx)).se;
                    }
                    l_592 = l_591[6];
                    l_594 |= ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x45021E95L, 0L)).xyyyyyxyyyxxyyyx)).s94, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_593.s3254220371777557)).s47a2)).odd)).xxxy))).lo))).odd;
                    for (l_593.s5 = 0; (l_593.s5 >= (-20)); l_593.s5--)
                    { /* block id: 244 */
                        int32_t l_597 = 9L;
                        l_597 |= 0x0EACA6D1L;
                    }
                }
                else
                { /* block id: 247 */
                    int32_t l_598[3][2] = {{(-1L),0x7BE7244FL},{(-1L),0x7BE7244FL},{(-1L),0x7BE7244FL}};
                    int32_t l_599 = 0x0822C5B3L;
                    struct S1 l_600[1] = {{0x45194A56L}};
                    VECTOR(int32_t, 2) l_601 = (VECTOR(int32_t, 2))((-1L), 1L);
                    int32_t l_602 = (-5L);
                    uint8_t l_607 = 0xC6L;
                    int i, j;
                    l_599 ^= l_598[2][1];
                    if ((l_602 = (l_600[0] , ((VECTOR(int32_t, 4))(l_601.yxyy)).w)))
                    { /* block id: 250 */
                        struct S0 l_604 = {0x1392E0A511274EBBL,0x1950L,0x45EEL,0x46396764F1463473L,0UL,9L,0UL};/* VOLATILE GLOBAL l_604 */
                        struct S0 *l_603 = &l_604;
                        l_603 = l_603;
                    }
                    else
                    { /* block id: 252 */
                        uint32_t l_605[6];
                        uint64_t l_606 = 0x50AD069A4CCFCFA9L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_605[i] = 0x21B4A6FFL;
                        l_606 ^= (l_598[0][1] = l_605[0]);
                    }
                    ++l_607;
                    for (l_598[2][1] = 0; (l_598[2][1] > (-1)); l_598[2][1] = safe_sub_func_int64_t_s_s(l_598[2][1], 4))
                    { /* block id: 259 */
                        uint32_t l_612 = 4294967292UL;
                        uint8_t l_615 = 255UL;
                        ++l_612;
                        l_615--;
                    }
                }
                unsigned int result = 0;
                result += l_567;
                atomic_add(&p_726->l_special_values[18], result);
            }
            else
            { /* block id: 264 */
                (1 + 1);
            }
            l_619 = l_618;
            l_409.s1 = ((**l_618) , 0x51FF2A28L);
            l_644 = ((*l_619) = func_55((((VECTOR(uint8_t, 8))(254UL, (safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((-2L), ((safe_sub_func_int16_t_s_s(((*l_402) &= (**p_726->g_512)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x50L, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((p_726->g_32 ^ (l_409.sf |= ((((*l_410) == (l_630 = l_628[2][0][0])) , ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((((safe_unary_minus_func_uint16_t_u(0x99BBL)) || 0L) ^ (safe_rshift_func_int8_t_s_u((((VECTOR(uint32_t, 8))(l_638.s35421001)).s4 , ((safe_sub_func_uint8_t_u_u(((*l_643) = (((l_641 , 0x78F497E9L) , p_726->g_430.s6) , p_726->g_comm_values[p_726->tid])), (*p_726->g_433))) , 6L)), 4))) || p_726->g_comm_values[p_726->tid]), p_726->g_127.s2)), p_726->g_96.w)) || (*l_471))) && 18446744073709551615UL))) , l_510), 0x75L, 0x64L, 0x6AL, (-7L), ((VECTOR(int8_t, 2))(0x52L)), (-2L))).s3333455416377730)).s3, 0L, 0x7BL, ((VECTOR(int8_t, 4))(2L)), 0x3EL, ((VECTOR(int8_t, 2))(0L)), l_396[1], ((VECTOR(int8_t, 2))(0L)), 0x20L, 8L)).even)).lo))).yxxzwwzy))).hi, ((VECTOR(uint8_t, 4))(0UL))))).odd, (uint8_t)(**l_618)))), ((VECTOR(uint8_t, 2))(250UL))))).yyxyyxyyyyyyxyxx)).even, ((VECTOR(uint8_t, 8))(6UL))))))).s7206554042165606, (uint16_t)(**l_619), (uint16_t)(*l_471)))))).sf)) ^ p_726->g_430.s4))), (*l_471))), 0x782DCA3C2D37BCBBL)), p_726->g_34, ((VECTOR(uint8_t, 4))(5UL)), 255UL)).s4 >= (*p_726->g_433)), (**l_618), (*l_471), l_2[0], p_726));
        }
        else
        { /* block id: 275 */
            if ((atomic_inc(&p_726->g_atomic_input[34 * get_linear_group_id() + 3]) == 0))
            { /* block id: 277 */
                struct S0 l_645 = {0x1A24E2D2A3AC1BEFL,0x6784L,0x52E5L,6L,0xB3CCE912L,0x370E2DAEL,0xB0B1B4D5L};/* VOLATILE GLOBAL l_645 */
                struct S0 l_646 = {2L,0L,-5L,0x0532ECA875235F04L,0x27544577L,0x5872C095L,4294967290UL};/* VOLATILE GLOBAL l_646 */
                int16_t l_647 = 0x3449L;
                uint64_t l_648 = 0x9E066E25473CF61CL;
                int32_t l_649 = 4L;
                int32_t l_650 = 1L;
                int64_t l_651 = 2L;
                uint16_t l_652 = 65535UL;
                l_646 = l_645;
                if ((l_652 = (l_651 = ((l_649 &= (l_648 = l_647)) , l_650))))
                { /* block id: 283 */
                    int32_t l_654 = 0x62FDCC7BL;
                    int32_t *l_653 = &l_654;
                    int32_t *l_655 = &l_654;
                    int8_t l_658 = (-3L);
                    int8_t *l_657 = &l_658;
                    int8_t **l_656 = &l_657;
                    l_655 = l_653;
                    l_656 = (void*)0;
                }
                else
                { /* block id: 286 */
                    int64_t l_659 = (-7L);
                    uint64_t l_660 = 5UL;
                    struct S0 l_664 = {-10L,-8L,-3L,0x443F9E85F4B62375L,1UL,-1L,9UL};/* VOLATILE GLOBAL l_664 */
                    struct S0 *l_663[7][7][2] = {{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}},{{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664},{(void*)0,&l_664}}};
                    struct S0 *l_665 = &l_664;
                    int i, j, k;
                    --l_660;
                    l_665 = l_663[3][5][1];
                }
                unsigned int result = 0;
                result += l_645.f0;
                result += l_645.f1;
                result += l_645.f2;
                result += l_645.f3;
                result += l_645.f4;
                result += l_645.f5;
                result += l_645.f6;
                result += l_646.f0;
                result += l_646.f1;
                result += l_646.f2;
                result += l_646.f3;
                result += l_646.f4;
                result += l_646.f5;
                result += l_646.f6;
                result += l_647;
                result += l_648;
                result += l_649;
                result += l_650;
                result += l_651;
                result += l_652;
                atomic_add(&p_726->g_special_values[34 * get_linear_group_id() + 3], result);
            }
            else
            { /* block id: 290 */
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 294 */
        int8_t l_668 = 0x10L;
        int16_t l_680 = 1L;
        uint8_t *l_681 = (void*)0;
        uint8_t *l_682 = &l_386;
        int8_t *l_683 = (void*)0;
        uint32_t *l_684 = (void*)0;
        uint32_t *l_685 = (void*)0;
        uint32_t *l_686 = (void*)0;
        uint32_t *l_687 = &l_5;
        struct S1 l_699 = {0xBFF4DB78L};
        struct S1 *l_700 = &p_726->g_200;
        int32_t l_708 = 0x4C4BA5ABL;
        p_726->g_430.s0 &= (((((safe_sub_func_int32_t_s_s(l_668, (!((VECTOR(int32_t, 2))(p_726->g_669.xy)).hi))) > (((void*)0 != (*l_450)) == ((safe_sub_func_int8_t_s_s(((*p_726->g_433) = ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(255UL, (safe_mod_func_uint32_t_u_u(((p_726->g_238.f5 != ((0xFF0B46BCL <= ((*l_687) = ((safe_mul_func_uint8_t_u_u(l_680, ((*l_682) |= l_668))) | ((((*l_471) >= l_680) , l_26) == l_683)))) , 0x473EL)) , 0xDCA9403AL), l_668)))), 5)) < (*l_471))), 1L)) & FAKE_DIVERGE(p_726->group_0_offset, get_group_id(0), 10)))) , &p_726->g_34) != (void*)0) != (*l_471));
        for (p_726->g_134 = (-15); (p_726->g_134 == 15); p_726->g_134 = safe_add_func_uint64_t_u_u(p_726->g_134, 7))
        { /* block id: 301 */
            VECTOR(int16_t, 16) l_692 = (VECTOR(int16_t, 16))(0x4148L, (VECTOR(int16_t, 4))(0x4148L, (VECTOR(int16_t, 2))(0x4148L, (-4L)), (-4L)), (-4L), 0x4148L, (-4L), (VECTOR(int16_t, 2))(0x4148L, (-4L)), (VECTOR(int16_t, 2))(0x4148L, (-4L)), 0x4148L, (-4L), 0x4148L, (-4L));
            int16_t *l_695 = &l_680;
            int i;
            (*p_726->g_352) = (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_692.sad15)).xxwxzwwy)).even))).zxwwzyyyxxywxyyx)).s3, (safe_sub_func_uint16_t_u_u(((((*p_726->g_235) ^= ((p_726->g_352 == p_726->g_201[2]) == l_692.s2)) & (p_726->g_227.w || ((*l_695) = (p_726->g_200 , 0x22D2L)))) >= (p_726->g_260 >= (safe_sub_func_int64_t_s_s((l_698 || ((-8L) != FAKE_DIVERGE(p_726->global_0_offset, get_global_id(0), 10))), p_726->g_511.s0)))), (*p_726->g_122)))));
        }
        (*l_700) = l_699;
        (*p_726->g_352) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((0x63L >= FAKE_DIVERGE(p_726->local_2_offset, get_local_id(2), 10)) >= (safe_div_func_int16_t_s_s((**p_726->g_512), 1UL))) , ((*p_726->g_293) = ((VECTOR(int32_t, 16))(((((((safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u(((*p_726->g_122) = (safe_mul_func_uint16_t_u_u(((((*p_726->g_433) = ((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_680 | l_699.f0), (l_708 = (*l_471)), ((void*)0 != &l_708), ((*p_726->g_241) , (*p_726->g_352)), ((VECTOR(int32_t, 2))(0x61A2190FL)), (-1L), 0x03F8C17DL)).s5270437250622372)).s4 || 0x575F7B44L) <= l_680) || (*l_471)) ^ GROUP_DIVERGE(2, 1))) == 0x4CL) , 0UL), 0x6286L))), p_726->g_192)))) | p_726->g_96.z) , &l_451[5]) == (void*)0) > 0L) , (**p_726->g_351)), 1L, ((VECTOR(int32_t, 8))(0x33C111A2L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(7L)), (-1L), (-9L))).s9)), ((VECTOR(int32_t, 2))((-1L))), (*l_471), l_680, 1L, (-5L), 1L)).s22)).odd;
    }
    for (p_726->g_200.f0 = 0; (p_726->g_200.f0 >= 50); p_726->g_200.f0 = safe_add_func_int8_t_s_s(p_726->g_200.f0, 1))
    { /* block id: 315 */
        int32_t ***l_711 = &p_726->g_367;
        int32_t ***l_715 = (void*)0;
        int32_t ***l_716 = &l_619;
        (1 + 1);
    }
    for (p_726->g_84 = 0; (p_726->g_84 == 52); p_726->g_84++)
    { /* block id: 327 */
        (*p_726->g_713) = (*p_726->g_713);
    }
    l_723--;
    return p_726->g_406.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_117 p_726->g_308 p_726->g_199 p_726->g_200 p_726->g_115 p_726->g_69 p_726->g_367 p_726->g_122 p_726->g_123 p_726->g_238.f4 p_726->g_293 p_726->g_153 p_726->g_96 p_726->g_127 p_726->g_235 p_726->g_84 p_726->g_351 p_726->g_352
 * writes: p_726->g_117 p_726->g_238.f3 p_726->g_200 p_726->g_115 p_726->g_367 p_726->g_122 p_726->g_353
 */
uint64_t  func_8(int8_t * p_9, int8_t * p_10, int8_t * p_11, int64_t  p_12, int8_t * p_13, struct S3 * p_726)
{ /* block id: 126 */
    uint32_t l_322 = 0x61D153DDL;
    VECTOR(int64_t, 16) l_337 = (VECTOR(int64_t, 16))(0x53CF3D95743C3873L, (VECTOR(int64_t, 4))(0x53CF3D95743C3873L, (VECTOR(int64_t, 2))(0x53CF3D95743C3873L, (-1L)), (-1L)), (-1L), 0x53CF3D95743C3873L, (-1L), (VECTOR(int64_t, 2))(0x53CF3D95743C3873L, (-1L)), (VECTOR(int64_t, 2))(0x53CF3D95743C3873L, (-1L)), 0x53CF3D95743C3873L, (-1L), 0x53CF3D95743C3873L, (-1L));
    uint64_t *l_342 = (void*)0;
    int32_t *l_350 = &p_726->g_153;
    int32_t **l_349[6][9][4] = {{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}},{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}},{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}},{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}},{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}},{{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350},{&l_350,(void*)0,&l_350,&l_350}}};
    struct S1 *l_354 = &p_726->g_200;
    VECTOR(int64_t, 2) l_355 = (VECTOR(int64_t, 2))(0x3ACF1E2E06FD1D9DL, (-1L));
    VECTOR(uint32_t, 4) l_360 = (VECTOR(uint32_t, 4))(0x25ABAA7DL, (VECTOR(uint32_t, 2))(0x25ABAA7DL, 4294967295UL), 4294967295UL);
    uint32_t *l_361 = &p_726->g_115;
    VECTOR(uint32_t, 4) l_364 = (VECTOR(uint32_t, 4))(0x7CBFBA79L, (VECTOR(uint32_t, 2))(0x7CBFBA79L, 4294967295UL), 4294967295UL);
    int32_t ***l_368[5][6] = {{&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1]},{&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1]},{&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1]},{&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1]},{&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1],&l_349[3][1][1]}};
    int32_t l_371 = 0L;
    uint8_t l_379 = 0xE6L;
    VECTOR(uint16_t, 16) l_382 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
    uint16_t *l_385 = &p_726->g_117;
    int i, j, k;
    for (p_726->g_117 = 0; (p_726->g_117 != 60); p_726->g_117++)
    { /* block id: 129 */
        int64_t l_315 = 0x579819D07085DC86L;
        int32_t l_320 = 0x0EC4F912L;
        int16_t l_321 = 0x6B0DL;
        VECTOR(int64_t, 16) l_338 = (VECTOR(int64_t, 16))(0x5316F0B774321D9AL, (VECTOR(int64_t, 4))(0x5316F0B774321D9AL, (VECTOR(int64_t, 2))(0x5316F0B774321D9AL, 0L), 0L), 0L, 0x5316F0B774321D9AL, 0L, (VECTOR(int64_t, 2))(0x5316F0B774321D9AL, 0L), (VECTOR(int64_t, 2))(0x5316F0B774321D9AL, 0L), 0x5316F0B774321D9AL, 0L, 0x5316F0B774321D9AL, 0L);
        VECTOR(int32_t, 4) l_341 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2D4DD2E5L), 0x2D4DD2E5L);
        uint64_t **l_343 = &p_726->g_235;
        VECTOR(int64_t, 2) l_344 = (VECTOR(int64_t, 2))(0x71D4F1D0AFAAC58BL, 0x104C0D534E740CD5L);
        uint16_t **l_347[4] = {&p_726->g_122,&p_726->g_122,&p_726->g_122,&p_726->g_122};
        uint16_t ***l_346 = &l_347[2];
        uint32_t *l_348 = &p_726->g_115;
        int i;
        if (p_12)
            break;
        atomic_max(&p_726->l_atomic_reduction[0], p_12);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_726->v_collective += p_726->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        for (p_726->g_238.f3 = 0; (p_726->g_238.f3 != 15); p_726->g_238.f3 = safe_add_func_int32_t_s_s(p_726->g_238.f3, 1))
        { /* block id: 134 */
            uint16_t **l_306 = &p_726->g_122;
            uint16_t ***l_307 = &l_306;
            int32_t *l_309 = &p_726->g_32;
            int32_t *l_310 = &p_726->g_153;
            int32_t *l_311 = &p_726->g_32;
            int32_t *l_312 = (void*)0;
            int32_t *l_313 = &p_726->g_245;
            int32_t *l_314 = &p_726->g_153;
            int32_t *l_316 = (void*)0;
            int32_t *l_317 = &p_726->g_153;
            int32_t l_318 = 0x36FB1F02L;
            int32_t *l_319[1];
            int i;
            for (i = 0; i < 1; i++)
                l_319[i] = &p_726->g_32;
            (*l_307) = l_306;
            l_309 = (p_726->g_308 , &p_726->g_69);
            ++l_322;
        }
    }
    (*l_354) = (*p_726->g_199);
    if ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_355.xy)).xxxxyxyy)).hi, ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(0x58341387CF710B6FL, 1L)), (int64_t)(safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_360.wxxwxxzx)).s2200333306175071)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0UL, ((*l_361)++), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xDE517D60L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x4D086CC4L, 4294967295UL)), 0xB4A970B7L, 0xA536F292L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_364.zwzxyxyzyyzwxzwz)).s5e)).yyxxxxxxxyyxyyyy, (uint32_t)(((*l_354) , (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xFC17L, 0xEB0FL, 65530UL, 0x69E6L)).zxxxywxx)).s22))))))).even , p_12)) , ((safe_add_func_uint32_t_u_u((p_726->g_69 != GROUP_DIVERGE(2, 1)), (&l_350 == (p_726->g_367 = p_726->g_367)))) | ((*l_361) = ((safe_rshift_func_int16_t_s_u((&p_726->g_34 == ((*p_726->g_122) , (void*)0)), 2)) <= 0x51L)))), (uint32_t)4294967293UL))).s05, ((VECTOR(uint32_t, 2))(0x9FD722CDL))))).yxxy)).z, 1UL, 4294967293UL)).s45)).yxxxyyxx)), 0x8C486AF5L, l_371, ((VECTOR(uint32_t, 2))(1UL)), 0UL, 0x7B2A463FL)).lo)).s3501762631636052))))).scdb7, ((VECTOR(uint32_t, 4))(0x5E30A026L))))), 0xA7CF2185L, 8UL, ((VECTOR(uint32_t, 2))(4294967295UL)), 0x84FE9D93L, FAKE_DIVERGE(p_726->group_2_offset, get_group_id(2), 10), ((VECTOR(uint32_t, 2))(0x787EC15DL)), p_12, p_726->g_238.f4, 1UL, 4294967295UL)).odd)).s67)).odd == (*p_726->g_293)), p_726->g_96.z)), p_726->g_127.s3))))))).xyxy)), p_12, ((VECTOR(int64_t, 2))(0x07A09D2B90F47D59L)), 0x77BCCCA7BEFD9418L, ((VECTOR(int64_t, 4))((-8L))), p_12, ((VECTOR(int64_t, 2))(1L)), 1L)).s1b)), 0x0E68EF656F2DCF1CL, p_12, 0L, ((VECTOR(int64_t, 2))(1L)), 0x665A1C0EE63E62D6L)), ((VECTOR(int64_t, 8))((-1L))), ((VECTOR(int64_t, 8))(0L))))).lo))).zxyxyywzzywyzzyw, ((VECTOR(int64_t, 16))(0x2FBDEDD9470DC0C2L))))).sb795)).x == (-1L)))
    { /* block id: 148 */
        return (*p_726->g_235);
    }
    else
    { /* block id: 150 */
        VECTOR(int8_t, 8) l_372 = (VECTOR(int8_t, 8))(0x61L, (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, (-1L)), (-1L)), (-1L), 0x61L, (-1L));
        int32_t l_373 = 0x21C2C786L;
        int32_t l_374 = 0x502A0FDBL;
        int32_t l_375 = 1L;
        int32_t l_376 = 0x42D34D6DL;
        int32_t l_377 = 0x635E4292L;
        int32_t l_378[5][7] = {{0x61E6A884L,0x6FD2F6CFL,0x6FD2F6CFL,0x61E6A884L,7L,0x4F7B63D2L,0x4F7B63D2L},{0x61E6A884L,0x6FD2F6CFL,0x6FD2F6CFL,0x61E6A884L,7L,0x4F7B63D2L,0x4F7B63D2L},{0x61E6A884L,0x6FD2F6CFL,0x6FD2F6CFL,0x61E6A884L,7L,0x4F7B63D2L,0x4F7B63D2L},{0x61E6A884L,0x6FD2F6CFL,0x6FD2F6CFL,0x61E6A884L,7L,0x4F7B63D2L,0x4F7B63D2L},{0x61E6A884L,0x6FD2F6CFL,0x6FD2F6CFL,0x61E6A884L,7L,0x4F7B63D2L,0x4F7B63D2L}};
        int i, j;
        ++l_379;
        --l_382.s7;
        (**p_726->g_351) = (&p_726->g_121 != (p_726->g_122 = l_385));
        return p_12;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_14(int8_t * p_15, struct S1  p_16, uint32_t  p_17, int8_t * p_18, int64_t  p_19, struct S3 * p_726)
{ /* block id: 118 */
    if ((atomic_inc(&p_726->g_atomic_input[34 * get_linear_group_id() + 30]) == 1))
    { /* block id: 120 */
        int32_t l_300 = 0x6920E218L;
        int16_t l_301 = 0x0200L;
        l_301 ^= l_300;
        unsigned int result = 0;
        result += l_300;
        result += l_301;
        atomic_add(&p_726->g_special_values[34 * get_linear_group_id() + 30], result);
    }
    else
    { /* block id: 122 */
        (1 + 1);
    }
    return &p_726->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_34 p_726->g_3 p_726->g_comm_values p_726->g_84 p_726->g_69 p_726->g_143 p_726->g_96 p_726->g_122 p_726->g_117 p_726->g_123 p_726->g_144 p_726->g_145 p_726->g_127 p_726->g_183 p_726->l_comm_values p_726->g_192 p_726->g_197 p_726->g_199 p_726->g_153 p_726->g_200.f0 p_726->g_238 p_726->g_241 p_726->g_245 p_726->g_260 p_726->g_266 p_726->g_230 p_726->g_273 p_726->g_278 p_726->g_279 p_726->g_281 p_726->g_285 p_726->g_293
 * writes: p_726->g_34 p_726->g_32 p_726->g_84 p_726->g_69 p_726->g_153 p_726->g_125 p_726->g_117 p_726->g_121 p_726->g_183 p_726->g_200 p_726->g_134 p_726->g_238 p_726->g_115 p_726->g_122 p_726->g_245 p_726->g_201 p_726->g_260 p_726->g_266 p_726->g_285 p_726->g_3
 */
int8_t * func_20(int8_t * p_21, int8_t * p_22, int8_t * p_23, int8_t  p_24, uint64_t  p_25, struct S3 * p_726)
{ /* block id: 5 */
    int64_t l_191 = 8L;
    int32_t *l_244 = &p_726->g_245;
    int8_t *l_246[3];
    VECTOR(int16_t, 4) l_274 = (VECTOR(int16_t, 4))(0x4B4DL, (VECTOR(int16_t, 2))(0x4B4DL, 0x7C2AL), 0x7C2AL);
    VECTOR(int16_t, 4) l_276 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6D36L), 0x6D36L);
    VECTOR(int16_t, 4) l_277 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    VECTOR(int16_t, 8) l_280 = (VECTOR(int16_t, 8))(0x68FEL, (VECTOR(int16_t, 4))(0x68FEL, (VECTOR(int16_t, 2))(0x68FEL, 0x7F8DL), 0x7F8DL), 0x7F8DL, 0x68FEL, 0x7F8DL);
    VECTOR(int8_t, 4) l_286 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L);
    int32_t *l_294 = &p_726->g_32;
    int32_t *l_295[10] = {&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153,&p_726->g_153};
    uint16_t l_296 = 0x8EA9L;
    int i;
    for (i = 0; i < 3; i++)
        l_246[i] = &p_726->g_3;
    for (p_24 = 0; (p_24 != 16); ++p_24)
    { /* block id: 8 */
        uint64_t *l_33[9][3];
        int32_t l_37 = 0x57C8A36AL;
        int32_t *l_44 = &p_726->g_32;
        VECTOR(uint32_t, 16) l_184 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 1UL, 4294967295UL, 1UL, 4294967295UL);
        int8_t *l_189 = &p_726->g_190;
        uint32_t *l_243 = &p_726->g_115;
        int32_t *l_259[7];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 3; j++)
                l_33[i][j] = &p_726->g_34;
        }
        for (i = 0; i < 7; i++)
            l_259[i] = &p_726->g_260;
        p_726->g_260 &= (safe_add_func_uint64_t_u_u((p_726->g_34++), (l_37 <= (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((((safe_sub_func_int8_t_s_s((*p_23), (((*l_44) = (-1L)) == func_45(p_25, ((*l_243) = func_51(func_55((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_726->g_comm_values[p_726->tid] , func_64((safe_unary_minus_func_uint32_t_u(p_25)), p_726)), 6)), (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(l_184.sf76ddf6e144b6f7a)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x0E592CA9L, 0UL)).xxyyxxxy)).s5126631561464367))).s85e4)), ((VECTOR(uint32_t, 2))(0x42E7D5C8L, 4294967295UL)), 4294967295UL, ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(0x1D4C4B4CL, 1UL)).xyyy, (uint32_t)((((*l_189) = ((safe_mul_func_uint8_t_u_u(0x52L, ((safe_sub_func_int8_t_s_s((*p_23), 0x39L)) ^ GROUP_DIVERGE(0, 1)))) | p_726->g_96.w)) == p_726->g_127.s0) != l_191)))), 0UL, 0xC46033E3L, 0x570BABF4L, 0xC7D0B8D7L, 2UL)).s5 , (*p_21)))), p_726->g_192, p_726->g_96.x, &p_726->g_3, p_726), p_24, l_37, p_726)), l_244, (*p_21), l_246[1], p_726)))) , 1L) != p_726->g_3) < 0xD2L) & p_726->l_comm_values[(safe_mod_func_uint32_t_u_u(p_726->tid, 115))]), p_726->g_192)), p_25)))));
        (*l_244) |= (~0L);
        if (p_25)
            break;
    }
    for (l_191 = 0; (l_191 != (-22)); l_191 = safe_sub_func_int16_t_s_s(l_191, 7))
    { /* block id: 102 */
        uint8_t l_263[5][9] = {{0UL,0xF5L,0xF0L,0x58L,0xF0L,0xF5L,0UL,0x13L,0x87L},{0UL,0xF5L,0xF0L,0x58L,0xF0L,0xF5L,0UL,0x13L,0x87L},{0UL,0xF5L,0xF0L,0x58L,0xF0L,0xF5L,0UL,0x13L,0x87L},{0UL,0xF5L,0xF0L,0x58L,0xF0L,0xF5L,0UL,0x13L,0x87L},{0UL,0xF5L,0xF0L,0x58L,0xF0L,0xF5L,0UL,0x13L,0x87L}};
        int i, j;
        if (l_263[4][7])
            break;
        if (l_263[3][5])
            break;
    }
    for (p_726->g_238.f1 = (-13); (p_726->g_238.f1 >= 4); p_726->g_238.f1++)
    { /* block id: 108 */
        volatile struct S0 *l_267 = &p_726->g_266;
        VECTOR(int16_t, 4) l_272 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-1L)), (-1L));
        VECTOR(int16_t, 4) l_275 = (VECTOR(int16_t, 4))(0x404FL, (VECTOR(int16_t, 2))(0x404FL, 0L), 0L);
        uint8_t *l_284[10][2][9] = {{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}},{{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285},{&p_726->g_285,&p_726->g_285,(void*)0,(void*)0,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285,&p_726->g_285}}};
        int64_t *l_292 = (void*)0;
        int i, j, k;
        (*l_267) = p_726->g_266;
        (*p_726->g_293) = (p_726->g_230.s6 , (safe_mod_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((((VECTOR(uint16_t, 2))(1UL, 0xC101L)).hi , (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_272.xx)))).yxxxyxxx, ((VECTOR(int16_t, 2))(0L, 0x16DBL)).yyyxxxyx))), ((VECTOR(int16_t, 16))(0x1975L, (-4L), ((*l_244) |= p_25), (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(7L, l_272.w, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_726->g_273.yy)), (-10L), 0x028BL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(l_274.ywywxwywyywyzxyz)).sf1, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_275.wy)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_276.ww)))).xyxxxyxx, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(l_277.zx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_726->g_278.wx)), 0x456AL, 8L)).xxzxyxxz)).s31))).yxxyxyxx))).even, ((VECTOR(int16_t, 2))(p_726->g_279.s06)).yyxy))), ((VECTOR(int16_t, 16))(l_280.s6146512116756476)).s0e0f))).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_726->g_281.xywxwzxxyzxywwxx)))).s24))).xyxxxyxy)).even)), 0x176DL, 0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x155AL, 0L)).xxxy)), ((safe_lshift_func_uint8_t_u_s((p_726->g_285 |= p_25), 4)) == ((*l_244) = ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_286.zy)))).hi & ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u(((l_272.z == (((*p_23) |= (((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x3BF7L)), (-3L), 0x5818L)).zywxyzxywxxyywww)).s4609)), (int16_t)(p_25 && (0L && 0x33C0CD35L))))).y >= (*l_244))) > l_275.z)) <= p_24), (*l_244))))) < 0x55B2L)) == p_25))), ((VECTOR(int16_t, 4))(0x268BL)), 7L)).sb2, ((VECTOR(int16_t, 2))(0x4312L))))), ((VECTOR(int16_t, 2))(1L))))), (-2L), ((VECTOR(int16_t, 4))(0x0DD5L)), 2L)), ((VECTOR(int16_t, 2))((-1L))), 0x7418L, 8L)))).s90, ((VECTOR(int16_t, 2))(3L))))), 0x72F0L, ((VECTOR(int16_t, 2))(0x2C32L)), 0x1F10L)).lo)).y >= 0x6F6FL), 1L, 1L, 0x5E6DL, p_24, 0x02BEL, 0x4CB3L, p_726->g_266.f3, (-1L), p_726->g_278.z, p_726->g_279.s3, 0x0FB0L, 0x0B32L)).lo, ((VECTOR(int16_t, 8))((-1L)))))).s21)).hi == (-9L))), p_726->g_238.f4)) > 0xFBF1C9E3L), p_726->l_comm_values[(safe_mod_func_uint32_t_u_u(p_726->tid, 115))])));
    }
    l_296--;
    return &p_726->g_134;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_238.f2 p_726->g_245 p_726->g_238.f5
 * writes: p_726->g_238.f2 p_726->g_122 p_726->g_153 p_726->g_245 p_726->g_201
 */
uint32_t  func_45(int32_t  p_46, uint32_t  p_47, int32_t * p_48, int8_t  p_49, int8_t * p_50, struct S3 * p_726)
{ /* block id: 84 */
    uint64_t l_253 = 0UL;
    for (p_726->g_238.f2 = 26; (p_726->g_238.f2 <= 15); p_726->g_238.f2 = safe_sub_func_uint8_t_u_u(p_726->g_238.f2, 1))
    { /* block id: 87 */
        int32_t *l_249 = &p_726->g_153;
        int32_t *l_250 = &p_726->g_153;
        int32_t *l_251 = &p_726->g_153;
        int32_t *l_252[2][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint16_t *l_256[1][3];
        uint16_t **l_257 = (void*)0;
        uint16_t *l_258 = &p_726->g_117;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_256[i][j] = &p_726->g_117;
        }
        l_253++;
        (*p_48) = ((*l_249) = ((p_726->g_122 = l_256[0][0]) != l_258));
        if ((*p_48))
            break;
    }
    p_726->g_201[2] = (void*)0;
    return p_726->g_238.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_134 p_726->g_227 p_726->g_210 p_726->g_229 p_726->g_230 p_726->g_127 p_726->g_200.f0 p_726->g_197 p_726->g_199 p_726->g_153 p_726->g_238 p_726->g_241
 * writes: p_726->g_134 p_726->g_235 p_726->g_227 p_726->g_125 p_726->g_153 p_726->g_84 p_726->g_200 p_726->g_238
 */
uint32_t  func_51(int32_t * p_52, uint32_t  p_53, int32_t  p_54, struct S3 * p_726)
{ /* block id: 69 */
    union U2 *l_211 = &p_726->g_210;
    int32_t l_213 = (-7L);
    int32_t l_215 = 0x2DF10BACL;
    int32_t l_216[9];
    uint32_t l_218 = 1UL;
    uint16_t *l_225 = &p_726->g_183;
    VECTOR(int64_t, 2) l_226 = (VECTOR(int64_t, 2))(0x2C9F556B58E442EAL, (-1L));
    volatile union U2 *l_242 = &p_726->g_197;
    int i;
    for (i = 0; i < 9; i++)
        l_216[i] = (-2L);
    for (p_726->g_134 = 0; (p_726->g_134 == (-15)); p_726->g_134--)
    { /* block id: 72 */
        union U2 *l_209 = &p_726->g_210;
        int32_t *l_212 = (void*)0;
        int32_t *l_214[8][10] = {{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69},{&p_726->g_153,(void*)0,&p_726->g_69,&p_726->g_153,&p_726->g_69,(void*)0,&p_726->g_153,&l_213,&p_726->g_69,&p_726->g_69}};
        int32_t l_217[3];
        int32_t l_221 = 0x30A1AFBEL;
        uint16_t *l_224 = &p_726->g_123;
        VECTOR(int64_t, 2) l_228 = (VECTOR(int64_t, 2))(0x308BB56DCD957931L, (-9L));
        uint64_t *l_234[7];
        uint64_t **l_233[2][1];
        int8_t *l_236 = &p_726->g_190;
        int32_t **l_237 = &l_214[7][6];
        int i, j;
        for (i = 0; i < 3; i++)
            l_217[i] = 0x15207075L;
        for (i = 0; i < 7; i++)
            l_234[i] = &p_726->g_84;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_233[i][j] = &l_234[1];
        }
        l_211 = l_209;
        l_218--;
        (*l_237) = func_55(l_221, (p_54 == (p_726->g_125.sb = (safe_div_func_uint64_t_u_u((l_224 != l_225), ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_226.xx)), ((VECTOR(int64_t, 2))(p_726->g_227.zw)).odd, (p_726->g_210 , p_53), 0x533681B2D838E576L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(l_228.xx)).xxxyxyyxyxyyyxyy, ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 16))(p_726->g_229.s5754716455111521)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_726->g_230.s54)).yxyxyxyy)).s3446216646704533)))))).sa5)), 0x191D4868CC2CD189L, 0L)).w, ((VECTOR(int64_t, 2))(0x09948576C49478B0L, (-1L))), p_54, (safe_sub_func_int64_t_s_s((p_726->g_227.y = ((p_726->g_235 = &p_726->g_84) == (void*)0)), p_726->g_127.s4)), l_213, 0x2DA26107CED499C8L, ((VECTOR(int64_t, 2))(6L)), 0x5BF4506700EAA7C0L, 9L)).even))).s3574056300120107, ((VECTOR(int64_t, 16))((-3L)))))).sb)))), p_726->g_200.f0, l_236, p_726);
    }
    (*p_726->g_241) = (p_726->g_197 , p_726->g_238);
    l_242 = &p_726->g_197;
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_153 p_726->g_84 p_726->g_197 p_726->g_199
 * writes: p_726->g_153 p_726->g_84 p_726->g_200
 */
int32_t * func_55(uint64_t  p_56, int8_t  p_57, int32_t  p_58, int8_t * p_59, struct S3 * p_726)
{ /* block id: 55 */
    int32_t *l_202 = &p_726->g_153;
    uint16_t **l_203[3][7][3] = {{{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0}},{{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0}},{{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0},{&p_726->g_122,&p_726->g_122,(void*)0}}};
    struct S1 l_204 = {4294967291UL};
    struct S1 *l_205 = (void*)0;
    struct S1 *l_206 = &p_726->g_200;
    int i, j, k;
    for (p_726->g_153 = (-17); (p_726->g_153 < (-15)); p_726->g_153 = safe_add_func_uint64_t_u_u(p_726->g_153, 3))
    { /* block id: 58 */
        struct S1 l_198 = {2UL};
        for (p_726->g_84 = (-18); (p_726->g_84 <= 34); ++p_726->g_84)
        { /* block id: 61 */
            (*p_726->g_199) = (p_726->g_197 , l_198);
        }
    }
    (*l_202) |= p_58;
    (*l_202) = (l_203[1][4][1] != (p_58 , &p_726->g_122));
    (*l_206) = l_204;
    return &p_726->g_153;
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_84 p_726->g_96 p_726->g_comm_values p_726->g_117 p_726->g_121 p_726->g_122 p_726->g_125 p_726->g_127 p_726->g_134 p_726->g_135 p_726->g_69 p_726->g_143 p_726->g_123 p_726->g_144 p_726->g_145 p_726->g_183 p_726->l_comm_values
 * writes: p_726->g_84 p_726->g_115 p_726->g_117 p_726->g_121 p_726->g_122 p_726->g_134 p_726->g_69 p_726->g_153 p_726->g_125 p_726->g_183
 */
uint8_t  func_64(uint64_t  p_65, struct S3 * p_726)
{ /* block id: 11 */
    int32_t *l_67 = (void*)0;
    int32_t *l_68 = &p_726->g_69;
    int32_t *l_70 = &p_726->g_69;
    int32_t *l_71 = &p_726->g_69;
    int32_t *l_72 = &p_726->g_69;
    int32_t l_73 = 0x1898791BL;
    int32_t l_74 = 1L;
    int32_t *l_75 = &p_726->g_69;
    int32_t *l_76 = &l_73;
    int32_t *l_77 = &l_74;
    int32_t *l_78 = (void*)0;
    int32_t l_79 = 0x642EE1E3L;
    int32_t l_80 = 0x477ACAECL;
    int32_t *l_81 = &l_74;
    int32_t *l_82 = &l_74;
    int32_t *l_83[5][6] = {{&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69},{&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69},{&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69},{&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69},{&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69}};
    uint64_t *l_110 = (void*)0;
    int8_t *l_114 = &p_726->g_3;
    int8_t **l_113 = &l_114;
    uint16_t *l_116 = &p_726->g_117;
    uint16_t *l_120 = &p_726->g_121;
    uint16_t **l_124[8] = {&l_120,&p_726->g_122,&l_120,&l_120,&p_726->g_122,&l_120,&l_120,&p_726->g_122};
    int16_t *l_179 = (void*)0;
    int16_t *l_180 = (void*)0;
    uint64_t l_181 = 2UL;
    int i, j;
    p_726->g_84++;
    p_726->g_183 &= ((1L < ((+((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((func_93((((VECTOR(uint64_t, 16))(p_726->g_96.zzxwyyzywxywyyww)).s9 ^ (((*l_120) = ((*l_116) = (safe_div_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((0xA07078C3FCEEEC85L && ((p_726->g_125.s9 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_726->g_comm_values[p_726->tid], (safe_rshift_func_uint16_t_u_s(func_107(l_110, ((((VECTOR(int64_t, 16))((p_726->g_96.y , p_65), (safe_sub_func_uint32_t_u_u(((p_726->g_115 = (((*l_113) = &p_726->g_3) != (void*)0)) , ((++(*l_116)) < ((*l_120) ^= GROUP_DIVERGE(0, 1)))), ((p_726->g_122 = p_726->g_122) != &p_726->g_123))), ((VECTOR(int64_t, 2))(0x6A71534BB8EBACA8L)), 0x73152899D3D8B2F9L, 0x72454177E56D7CB4L, 6L, p_726->g_117, ((VECTOR(int64_t, 4))(0x38899A8624A7E6D0L)), p_726->g_comm_values[p_726->tid], ((VECTOR(int64_t, 2))(0x6C6C4C54CFDD0FD0L)), 0x15C78ED0E11B63BBL)).sb < p_726->g_84) , 0x26L), p_726), (*l_76))))), p_65))) , 18446744073709551608UL)), (*l_81))) , (*p_726->g_144)), p_65)))) ^ l_181)), p_65, p_726) , p_726->g_127.s4), p_726->g_96.x)), GROUP_DIVERGE(2, 1))) , (**p_726->g_143))) <= 0L)) && p_65);
    return p_726->l_comm_values[(safe_mod_func_uint32_t_u_u(p_726->tid, 115))];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_93(int32_t  p_94, int64_t  p_95, struct S3 * p_726)
{ /* block id: 50 */
    int32_t l_182[4][9] = {{0x52400A85L,0x67F336F0L,0x67F336F0L,0x52400A85L,(-1L),0x5532626EL,0x5532626EL,(-1L),0x52400A85L},{0x52400A85L,0x67F336F0L,0x67F336F0L,0x52400A85L,(-1L),0x5532626EL,0x5532626EL,(-1L),0x52400A85L},{0x52400A85L,0x67F336F0L,0x67F336F0L,0x52400A85L,(-1L),0x5532626EL,0x5532626EL,(-1L),0x52400A85L},{0x52400A85L,0x67F336F0L,0x67F336F0L,0x52400A85L,(-1L),0x5532626EL,0x5532626EL,(-1L),0x52400A85L}};
    int i, j;
    return l_182[1][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_726->g_125 p_726->g_127 p_726->g_96 p_726->g_134 p_726->g_135 p_726->g_69 p_726->g_143 p_726->g_122 p_726->g_123 p_726->g_117
 * writes: p_726->g_134 p_726->g_69 p_726->g_153
 */
uint16_t  func_107(uint64_t * p_108, uint8_t  p_109, struct S3 * p_726)
{ /* block id: 18 */
    VECTOR(int16_t, 8) l_126 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-6L)), (-6L)), (-6L), (-4L), (-6L));
    int8_t *l_132 = (void*)0;
    int8_t *l_133 = &p_726->g_134;
    int32_t *l_136 = &p_726->g_69;
    uint16_t *l_150 = &p_726->g_121;
    int32_t *l_152 = &p_726->g_153;
    int i;
    (*l_136) &= (((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(p_726->g_125.s230fefe548c15133)), ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(l_126.s44667217)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(p_726->g_127.s6105234533503762)), (int16_t)(l_126.s7 , (FAKE_DIVERGE(p_726->group_1_offset, get_group_id(1), 10) <= (((safe_lshift_func_int8_t_s_s(((*l_133) &= (((l_126.s7 >= l_126.s6) , (((p_726->g_96.x <= l_126.s2) , 3L) < ((VECTOR(int8_t, 2))(2L, 1L)).lo)) , p_726->g_127.s5)), 0)) & (((VECTOR(uint64_t, 16))(p_726->g_135.xxxyxyyyyyyxyyxy)).sf == p_726->g_127.s2)) , 1L)))))), ((VECTOR(int16_t, 16))(0x3AAFL))))).s5047)).zwywywyy)).s3270102371577451)).hi))).s3246266742515366))).s6 || l_126.s6);
    for (p_109 = 0; (p_109 > 48); p_109++)
    { /* block id: 23 */
        (*l_136) = 0x2B26F933L;
        if ((*l_136))
            continue;
    }
    (*l_152) = (safe_sub_func_int32_t_s_s((p_726->g_69 = p_109), (p_109 & ((FAKE_DIVERGE(p_726->local_2_offset, get_local_id(2), 10) | ((p_726->g_143 != &l_133) == (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(247UL, 0x3AL)) , (((&p_726->g_117 != l_150) >= (4294967295UL > p_726->g_96.z)) & p_726->g_96.w)), p_109)))) != (*p_726->g_122)))));
    if ((atomic_inc(&p_726->l_atomic_input[23]) == 3))
    { /* block id: 30 */
        uint16_t l_154 = 65535UL;
        uint32_t l_155[2][10][2] = {{{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L}},{{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L},{0x2FD53FEAL,0x4B2AA811L}}};
        int i, j, k;
        if ((l_155[0][0][1] &= l_154))
        { /* block id: 32 */
            uint32_t l_156 = 0x9B685049L;
            int32_t l_157 = 0x3DC10E43L;
            int64_t l_158[6][7][6] = {{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}},{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}},{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}},{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}},{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}},{{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)},{0x3F8190269B8F49FFL,(-9L),(-1L),0x091CAF8AA5B394F6L,(-1L),(-9L)}}};
            int32_t *l_159 = &l_157;
            uint32_t l_160 = 0x696208B9L;
            int8_t l_163 = 0x67L;
            int32_t l_164 = 0x6A4A799CL;
            int64_t l_165 = 1L;
            int16_t l_166 = (-1L);
            uint8_t l_167 = 0x39L;
            int i, j, k;
            l_157 |= l_156;
            l_159 = (l_158[0][2][2] , (void*)0);
            l_160++;
            ++l_167;
        }
        else
        { /* block id: 37 */
            struct S1 l_170 = {4294967287UL};
            struct S1 l_171 = {2UL};
            uint32_t l_172 = 5UL;
            VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5EBD512FL), 0x5EBD512FL), 0x5EBD512FL, 1L, 0x5EBD512FL, (VECTOR(int32_t, 2))(1L, 0x5EBD512FL), (VECTOR(int32_t, 2))(1L, 0x5EBD512FL), 1L, 0x5EBD512FL, 1L, 0x5EBD512FL);
            uint64_t l_174 = 0x1DE9004F71531938L;
            uint32_t l_175[4];
            uint16_t l_176 = 0x8703L;
            int32_t *l_177 = (void*)0;
            int32_t *l_178 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_175[i] = 0x04DB1C9DL;
            l_171 = l_170;
            l_176 = ((VECTOR(int32_t, 8))(l_172, ((VECTOR(int32_t, 16))(l_173.s4ecbce0ee989e982)).sb, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-6L), (l_175[1] = (((VECTOR(uint32_t, 2))(0UL, 0UL)).even , l_174)), 0L, 8L)))), 0x3C8D9F3EL, (-3L))).s2;
            l_178 = l_177;
        }
        unsigned int result = 0;
        result += l_154;
        int l_155_i0, l_155_i1, l_155_i2;
        for (l_155_i0 = 0; l_155_i0 < 2; l_155_i0++) {
            for (l_155_i1 = 0; l_155_i1 < 10; l_155_i1++) {
                for (l_155_i2 = 0; l_155_i2 < 2; l_155_i2++) {
                    result += l_155[l_155_i0][l_155_i1][l_155_i2];
                }
            }
        }
        atomic_add(&p_726->l_special_values[23], result);
    }
    else
    { /* block id: 43 */
        (1 + 1);
    }
    return p_109;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[34];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 34; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[115];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 115; i++)
            l_comm_values[i] = 1;
    struct S3 c_727;
    struct S3* p_726 = &c_727;
    struct S3 c_728 = {
        0x26L, // p_726->g_3
        0x7216709EL, // p_726->g_32
        0xF29C214F1636717BL, // p_726->g_34
        (-4L), // p_726->g_69
        4UL, // p_726->g_84
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), // p_726->g_96
        0x86173B00L, // p_726->g_115
        0x1342L, // p_726->g_117
        0UL, // p_726->g_121
        0xFCE2L, // p_726->g_123
        &p_726->g_123, // p_726->g_122
        (VECTOR(int16_t, 16))(0x1CBFL, (VECTOR(int16_t, 4))(0x1CBFL, (VECTOR(int16_t, 2))(0x1CBFL, 0x76C9L), 0x76C9L), 0x76C9L, 0x1CBFL, 0x76C9L, (VECTOR(int16_t, 2))(0x1CBFL, 0x76C9L), (VECTOR(int16_t, 2))(0x1CBFL, 0x76C9L), 0x1CBFL, 0x76C9L, 0x1CBFL, 0x76C9L), // p_726->g_125
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L), // p_726->g_127
        0x79L, // p_726->g_134
        (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x1F48307115AC0CBFL), // p_726->g_135
        0x52L, // p_726->g_145
        &p_726->g_145, // p_726->g_144
        &p_726->g_144, // p_726->g_143
        (void*)0, // p_726->g_151
        0x4377FA48L, // p_726->g_153
        0x8D73L, // p_726->g_183
        0x3BL, // p_726->g_190
        0xDC3FL, // p_726->g_192
        {0}, // p_726->g_197
        {1UL}, // p_726->g_200
        &p_726->g_200, // p_726->g_199
        {&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69,&p_726->g_69}, // p_726->g_201
        {0}, // p_726->g_210
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), // p_726->g_227
        (VECTOR(int64_t, 8))(0x0C0B13E44FBD2D9BL, (VECTOR(int64_t, 4))(0x0C0B13E44FBD2D9BL, (VECTOR(int64_t, 2))(0x0C0B13E44FBD2D9BL, 0x21A12858AB291146L), 0x21A12858AB291146L), 0x21A12858AB291146L, 0x0C0B13E44FBD2D9BL, 0x21A12858AB291146L), // p_726->g_229
        (VECTOR(int64_t, 8))(0x77F44A9B1B637EA3L, (VECTOR(int64_t, 4))(0x77F44A9B1B637EA3L, (VECTOR(int64_t, 2))(0x77F44A9B1B637EA3L, 0x608290AFDDB5E15BL), 0x608290AFDDB5E15BL), 0x608290AFDDB5E15BL, 0x77F44A9B1B637EA3L, 0x608290AFDDB5E15BL), // p_726->g_230
        &p_726->g_84, // p_726->g_235
        {3L,-9L,0x7A8AL,0x1E674F9F1FA6DF7BL,4294967295UL,0x143BA547L,0x4C677B60L}, // p_726->g_238
        (void*)0, // p_726->g_239
        (void*)0, // p_726->g_240
        &p_726->g_238, // p_726->g_241
        0x0ABCBBCDL, // p_726->g_245
        0x24EB4185L, // p_726->g_260
        {0x1E3334AD1ED15957L,0x0AF4L,0x1BA9L,0x4358AB34EFDB9487L,0x1A7FB561L,0x192D8548L,0xBD532AE1L}, // p_726->g_266
        (VECTOR(int16_t, 2))(0L, 0x21AAL), // p_726->g_273
        (VECTOR(int16_t, 4))(0x57F1L, (VECTOR(int16_t, 2))(0x57F1L, 0x7B6BL), 0x7B6BL), // p_726->g_278
        (VECTOR(int16_t, 8))(0x5FA2L, (VECTOR(int16_t, 4))(0x5FA2L, (VECTOR(int16_t, 2))(0x5FA2L, 0x3706L), 0x3706L), 0x3706L, 0x5FA2L, 0x3706L), // p_726->g_279
        (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-2L)), (-2L)), // p_726->g_281
        0xD7L, // p_726->g_285
        &p_726->g_153, // p_726->g_293
        {-1L,0x5BCEL,-2L,-10L,0x5148E350L,1L,0x3F356C05L}, // p_726->g_308
        {0x7E6A03987274B98CL,-4L,-1L,-7L,4UL,0x0020ED56L,4294967295UL}, // p_726->g_345
        0x1EAF65B7L, // p_726->g_353
        &p_726->g_353, // p_726->g_352
        &p_726->g_352, // p_726->g_351
        (void*)0, // p_726->g_367
        (VECTOR(int64_t, 2))(0x2A61934FB258EC99L, 0x764D7081F3FBCB82L), // p_726->g_397
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_726->g_406
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x7B11BDF6L), 0x7B11BDF6L), 0x7B11BDF6L, (-4L), 0x7B11BDF6L), // p_726->g_426
        (VECTOR(int32_t, 2))(1L, (-3L)), // p_726->g_427
        (VECTOR(int32_t, 8))(0x3A7AABE5L, (VECTOR(int32_t, 4))(0x3A7AABE5L, (VECTOR(int32_t, 2))(0x3A7AABE5L, 0x2273581DL), 0x2273581DL), 0x2273581DL, 0x3A7AABE5L, 0x2273581DL), // p_726->g_429
        (VECTOR(int32_t, 8))(0x2BF3FC8EL, (VECTOR(int32_t, 4))(0x2BF3FC8EL, (VECTOR(int32_t, 2))(0x2BF3FC8EL, 0x3E495C15L), 0x3E495C15L), 0x3E495C15L, 0x2BF3FC8EL, 0x3E495C15L), // p_726->g_430
        &p_726->g_134, // p_726->g_433
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_726->g_432
        (VECTOR(uint16_t, 2))(5UL, 0x4C07L), // p_726->g_446
        (void*)0, // p_726->g_449
        (VECTOR(int8_t, 8))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x2BL), 0x2BL), 0x2BL, 0x43L, 0x2BL), // p_726->g_466
        (VECTOR(uint8_t, 2))(4UL, 0x10L), // p_726->g_469
        (VECTOR(uint16_t, 2))(0x66A4L, 0x98E9L), // p_726->g_505
        0UL, // p_726->g_507
        (VECTOR(uint32_t, 8))(0xFCFFC4C5L, (VECTOR(uint32_t, 4))(0xFCFFC4C5L, (VECTOR(uint32_t, 2))(0xFCFFC4C5L, 0x2A7EC7B1L), 0x2A7EC7B1L), 0x2A7EC7B1L, 0xFCFFC4C5L, 0x2A7EC7B1L), // p_726->g_511
        {&p_726->g_266.f1}, // p_726->g_513
        &p_726->g_513[0], // p_726->g_512
        &p_726->g_512, // p_726->g_514
        (VECTOR(int32_t, 2))(1L, 0x48B6C5BFL), // p_726->g_669
        (void*)0, // p_726->g_712
        &p_726->g_153, // p_726->g_714
        &p_726->g_714, // p_726->g_713
        0, // p_726->v_collective
        sequence_input[get_global_id(0)], // p_726->global_0_offset
        sequence_input[get_global_id(1)], // p_726->global_1_offset
        sequence_input[get_global_id(2)], // p_726->global_2_offset
        sequence_input[get_local_id(0)], // p_726->local_0_offset
        sequence_input[get_local_id(1)], // p_726->local_1_offset
        sequence_input[get_local_id(2)], // p_726->local_2_offset
        sequence_input[get_group_id(0)], // p_726->group_0_offset
        sequence_input[get_group_id(1)], // p_726->group_1_offset
        sequence_input[get_group_id(2)], // p_726->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 115)), permutations[0][get_linear_local_id()])), // p_726->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_727 = c_728;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_726);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_726->g_3, "p_726->g_3", print_hash_value);
    transparent_crc(p_726->g_32, "p_726->g_32", print_hash_value);
    transparent_crc(p_726->g_34, "p_726->g_34", print_hash_value);
    transparent_crc(p_726->g_69, "p_726->g_69", print_hash_value);
    transparent_crc(p_726->g_84, "p_726->g_84", print_hash_value);
    transparent_crc(p_726->g_96.x, "p_726->g_96.x", print_hash_value);
    transparent_crc(p_726->g_96.y, "p_726->g_96.y", print_hash_value);
    transparent_crc(p_726->g_96.z, "p_726->g_96.z", print_hash_value);
    transparent_crc(p_726->g_96.w, "p_726->g_96.w", print_hash_value);
    transparent_crc(p_726->g_115, "p_726->g_115", print_hash_value);
    transparent_crc(p_726->g_117, "p_726->g_117", print_hash_value);
    transparent_crc(p_726->g_121, "p_726->g_121", print_hash_value);
    transparent_crc(p_726->g_123, "p_726->g_123", print_hash_value);
    transparent_crc(p_726->g_125.s0, "p_726->g_125.s0", print_hash_value);
    transparent_crc(p_726->g_125.s1, "p_726->g_125.s1", print_hash_value);
    transparent_crc(p_726->g_125.s2, "p_726->g_125.s2", print_hash_value);
    transparent_crc(p_726->g_125.s3, "p_726->g_125.s3", print_hash_value);
    transparent_crc(p_726->g_125.s4, "p_726->g_125.s4", print_hash_value);
    transparent_crc(p_726->g_125.s5, "p_726->g_125.s5", print_hash_value);
    transparent_crc(p_726->g_125.s6, "p_726->g_125.s6", print_hash_value);
    transparent_crc(p_726->g_125.s7, "p_726->g_125.s7", print_hash_value);
    transparent_crc(p_726->g_125.s8, "p_726->g_125.s8", print_hash_value);
    transparent_crc(p_726->g_125.s9, "p_726->g_125.s9", print_hash_value);
    transparent_crc(p_726->g_125.sa, "p_726->g_125.sa", print_hash_value);
    transparent_crc(p_726->g_125.sb, "p_726->g_125.sb", print_hash_value);
    transparent_crc(p_726->g_125.sc, "p_726->g_125.sc", print_hash_value);
    transparent_crc(p_726->g_125.sd, "p_726->g_125.sd", print_hash_value);
    transparent_crc(p_726->g_125.se, "p_726->g_125.se", print_hash_value);
    transparent_crc(p_726->g_125.sf, "p_726->g_125.sf", print_hash_value);
    transparent_crc(p_726->g_127.s0, "p_726->g_127.s0", print_hash_value);
    transparent_crc(p_726->g_127.s1, "p_726->g_127.s1", print_hash_value);
    transparent_crc(p_726->g_127.s2, "p_726->g_127.s2", print_hash_value);
    transparent_crc(p_726->g_127.s3, "p_726->g_127.s3", print_hash_value);
    transparent_crc(p_726->g_127.s4, "p_726->g_127.s4", print_hash_value);
    transparent_crc(p_726->g_127.s5, "p_726->g_127.s5", print_hash_value);
    transparent_crc(p_726->g_127.s6, "p_726->g_127.s6", print_hash_value);
    transparent_crc(p_726->g_127.s7, "p_726->g_127.s7", print_hash_value);
    transparent_crc(p_726->g_134, "p_726->g_134", print_hash_value);
    transparent_crc(p_726->g_135.x, "p_726->g_135.x", print_hash_value);
    transparent_crc(p_726->g_135.y, "p_726->g_135.y", print_hash_value);
    transparent_crc(p_726->g_145, "p_726->g_145", print_hash_value);
    transparent_crc(p_726->g_153, "p_726->g_153", print_hash_value);
    transparent_crc(p_726->g_183, "p_726->g_183", print_hash_value);
    transparent_crc(p_726->g_190, "p_726->g_190", print_hash_value);
    transparent_crc(p_726->g_192, "p_726->g_192", print_hash_value);
    transparent_crc(p_726->g_200.f0, "p_726->g_200.f0", print_hash_value);
    transparent_crc(p_726->g_227.x, "p_726->g_227.x", print_hash_value);
    transparent_crc(p_726->g_227.y, "p_726->g_227.y", print_hash_value);
    transparent_crc(p_726->g_227.z, "p_726->g_227.z", print_hash_value);
    transparent_crc(p_726->g_227.w, "p_726->g_227.w", print_hash_value);
    transparent_crc(p_726->g_229.s0, "p_726->g_229.s0", print_hash_value);
    transparent_crc(p_726->g_229.s1, "p_726->g_229.s1", print_hash_value);
    transparent_crc(p_726->g_229.s2, "p_726->g_229.s2", print_hash_value);
    transparent_crc(p_726->g_229.s3, "p_726->g_229.s3", print_hash_value);
    transparent_crc(p_726->g_229.s4, "p_726->g_229.s4", print_hash_value);
    transparent_crc(p_726->g_229.s5, "p_726->g_229.s5", print_hash_value);
    transparent_crc(p_726->g_229.s6, "p_726->g_229.s6", print_hash_value);
    transparent_crc(p_726->g_229.s7, "p_726->g_229.s7", print_hash_value);
    transparent_crc(p_726->g_230.s0, "p_726->g_230.s0", print_hash_value);
    transparent_crc(p_726->g_230.s1, "p_726->g_230.s1", print_hash_value);
    transparent_crc(p_726->g_230.s2, "p_726->g_230.s2", print_hash_value);
    transparent_crc(p_726->g_230.s3, "p_726->g_230.s3", print_hash_value);
    transparent_crc(p_726->g_230.s4, "p_726->g_230.s4", print_hash_value);
    transparent_crc(p_726->g_230.s5, "p_726->g_230.s5", print_hash_value);
    transparent_crc(p_726->g_230.s6, "p_726->g_230.s6", print_hash_value);
    transparent_crc(p_726->g_230.s7, "p_726->g_230.s7", print_hash_value);
    transparent_crc(p_726->g_238.f0, "p_726->g_238.f0", print_hash_value);
    transparent_crc(p_726->g_238.f1, "p_726->g_238.f1", print_hash_value);
    transparent_crc(p_726->g_238.f2, "p_726->g_238.f2", print_hash_value);
    transparent_crc(p_726->g_238.f3, "p_726->g_238.f3", print_hash_value);
    transparent_crc(p_726->g_238.f4, "p_726->g_238.f4", print_hash_value);
    transparent_crc(p_726->g_238.f5, "p_726->g_238.f5", print_hash_value);
    transparent_crc(p_726->g_238.f6, "p_726->g_238.f6", print_hash_value);
    transparent_crc(p_726->g_245, "p_726->g_245", print_hash_value);
    transparent_crc(p_726->g_260, "p_726->g_260", print_hash_value);
    transparent_crc(p_726->g_266.f0, "p_726->g_266.f0", print_hash_value);
    transparent_crc(p_726->g_266.f1, "p_726->g_266.f1", print_hash_value);
    transparent_crc(p_726->g_266.f2, "p_726->g_266.f2", print_hash_value);
    transparent_crc(p_726->g_266.f3, "p_726->g_266.f3", print_hash_value);
    transparent_crc(p_726->g_266.f4, "p_726->g_266.f4", print_hash_value);
    transparent_crc(p_726->g_266.f5, "p_726->g_266.f5", print_hash_value);
    transparent_crc(p_726->g_266.f6, "p_726->g_266.f6", print_hash_value);
    transparent_crc(p_726->g_273.x, "p_726->g_273.x", print_hash_value);
    transparent_crc(p_726->g_273.y, "p_726->g_273.y", print_hash_value);
    transparent_crc(p_726->g_278.x, "p_726->g_278.x", print_hash_value);
    transparent_crc(p_726->g_278.y, "p_726->g_278.y", print_hash_value);
    transparent_crc(p_726->g_278.z, "p_726->g_278.z", print_hash_value);
    transparent_crc(p_726->g_278.w, "p_726->g_278.w", print_hash_value);
    transparent_crc(p_726->g_279.s0, "p_726->g_279.s0", print_hash_value);
    transparent_crc(p_726->g_279.s1, "p_726->g_279.s1", print_hash_value);
    transparent_crc(p_726->g_279.s2, "p_726->g_279.s2", print_hash_value);
    transparent_crc(p_726->g_279.s3, "p_726->g_279.s3", print_hash_value);
    transparent_crc(p_726->g_279.s4, "p_726->g_279.s4", print_hash_value);
    transparent_crc(p_726->g_279.s5, "p_726->g_279.s5", print_hash_value);
    transparent_crc(p_726->g_279.s6, "p_726->g_279.s6", print_hash_value);
    transparent_crc(p_726->g_279.s7, "p_726->g_279.s7", print_hash_value);
    transparent_crc(p_726->g_281.x, "p_726->g_281.x", print_hash_value);
    transparent_crc(p_726->g_281.y, "p_726->g_281.y", print_hash_value);
    transparent_crc(p_726->g_281.z, "p_726->g_281.z", print_hash_value);
    transparent_crc(p_726->g_281.w, "p_726->g_281.w", print_hash_value);
    transparent_crc(p_726->g_285, "p_726->g_285", print_hash_value);
    transparent_crc(p_726->g_308.f0, "p_726->g_308.f0", print_hash_value);
    transparent_crc(p_726->g_308.f1, "p_726->g_308.f1", print_hash_value);
    transparent_crc(p_726->g_308.f2, "p_726->g_308.f2", print_hash_value);
    transparent_crc(p_726->g_308.f3, "p_726->g_308.f3", print_hash_value);
    transparent_crc(p_726->g_308.f4, "p_726->g_308.f4", print_hash_value);
    transparent_crc(p_726->g_308.f5, "p_726->g_308.f5", print_hash_value);
    transparent_crc(p_726->g_308.f6, "p_726->g_308.f6", print_hash_value);
    transparent_crc(p_726->g_345.f0, "p_726->g_345.f0", print_hash_value);
    transparent_crc(p_726->g_345.f1, "p_726->g_345.f1", print_hash_value);
    transparent_crc(p_726->g_345.f2, "p_726->g_345.f2", print_hash_value);
    transparent_crc(p_726->g_345.f3, "p_726->g_345.f3", print_hash_value);
    transparent_crc(p_726->g_345.f4, "p_726->g_345.f4", print_hash_value);
    transparent_crc(p_726->g_345.f5, "p_726->g_345.f5", print_hash_value);
    transparent_crc(p_726->g_345.f6, "p_726->g_345.f6", print_hash_value);
    transparent_crc(p_726->g_353, "p_726->g_353", print_hash_value);
    transparent_crc(p_726->g_397.x, "p_726->g_397.x", print_hash_value);
    transparent_crc(p_726->g_397.y, "p_726->g_397.y", print_hash_value);
    transparent_crc(p_726->g_406.x, "p_726->g_406.x", print_hash_value);
    transparent_crc(p_726->g_406.y, "p_726->g_406.y", print_hash_value);
    transparent_crc(p_726->g_426.s0, "p_726->g_426.s0", print_hash_value);
    transparent_crc(p_726->g_426.s1, "p_726->g_426.s1", print_hash_value);
    transparent_crc(p_726->g_426.s2, "p_726->g_426.s2", print_hash_value);
    transparent_crc(p_726->g_426.s3, "p_726->g_426.s3", print_hash_value);
    transparent_crc(p_726->g_426.s4, "p_726->g_426.s4", print_hash_value);
    transparent_crc(p_726->g_426.s5, "p_726->g_426.s5", print_hash_value);
    transparent_crc(p_726->g_426.s6, "p_726->g_426.s6", print_hash_value);
    transparent_crc(p_726->g_426.s7, "p_726->g_426.s7", print_hash_value);
    transparent_crc(p_726->g_427.x, "p_726->g_427.x", print_hash_value);
    transparent_crc(p_726->g_427.y, "p_726->g_427.y", print_hash_value);
    transparent_crc(p_726->g_429.s0, "p_726->g_429.s0", print_hash_value);
    transparent_crc(p_726->g_429.s1, "p_726->g_429.s1", print_hash_value);
    transparent_crc(p_726->g_429.s2, "p_726->g_429.s2", print_hash_value);
    transparent_crc(p_726->g_429.s3, "p_726->g_429.s3", print_hash_value);
    transparent_crc(p_726->g_429.s4, "p_726->g_429.s4", print_hash_value);
    transparent_crc(p_726->g_429.s5, "p_726->g_429.s5", print_hash_value);
    transparent_crc(p_726->g_429.s6, "p_726->g_429.s6", print_hash_value);
    transparent_crc(p_726->g_429.s7, "p_726->g_429.s7", print_hash_value);
    transparent_crc(p_726->g_430.s0, "p_726->g_430.s0", print_hash_value);
    transparent_crc(p_726->g_430.s1, "p_726->g_430.s1", print_hash_value);
    transparent_crc(p_726->g_430.s2, "p_726->g_430.s2", print_hash_value);
    transparent_crc(p_726->g_430.s3, "p_726->g_430.s3", print_hash_value);
    transparent_crc(p_726->g_430.s4, "p_726->g_430.s4", print_hash_value);
    transparent_crc(p_726->g_430.s5, "p_726->g_430.s5", print_hash_value);
    transparent_crc(p_726->g_430.s6, "p_726->g_430.s6", print_hash_value);
    transparent_crc(p_726->g_430.s7, "p_726->g_430.s7", print_hash_value);
    transparent_crc(p_726->g_446.x, "p_726->g_446.x", print_hash_value);
    transparent_crc(p_726->g_446.y, "p_726->g_446.y", print_hash_value);
    transparent_crc(p_726->g_466.s0, "p_726->g_466.s0", print_hash_value);
    transparent_crc(p_726->g_466.s1, "p_726->g_466.s1", print_hash_value);
    transparent_crc(p_726->g_466.s2, "p_726->g_466.s2", print_hash_value);
    transparent_crc(p_726->g_466.s3, "p_726->g_466.s3", print_hash_value);
    transparent_crc(p_726->g_466.s4, "p_726->g_466.s4", print_hash_value);
    transparent_crc(p_726->g_466.s5, "p_726->g_466.s5", print_hash_value);
    transparent_crc(p_726->g_466.s6, "p_726->g_466.s6", print_hash_value);
    transparent_crc(p_726->g_466.s7, "p_726->g_466.s7", print_hash_value);
    transparent_crc(p_726->g_469.x, "p_726->g_469.x", print_hash_value);
    transparent_crc(p_726->g_469.y, "p_726->g_469.y", print_hash_value);
    transparent_crc(p_726->g_505.x, "p_726->g_505.x", print_hash_value);
    transparent_crc(p_726->g_505.y, "p_726->g_505.y", print_hash_value);
    transparent_crc(p_726->g_507, "p_726->g_507", print_hash_value);
    transparent_crc(p_726->g_511.s0, "p_726->g_511.s0", print_hash_value);
    transparent_crc(p_726->g_511.s1, "p_726->g_511.s1", print_hash_value);
    transparent_crc(p_726->g_511.s2, "p_726->g_511.s2", print_hash_value);
    transparent_crc(p_726->g_511.s3, "p_726->g_511.s3", print_hash_value);
    transparent_crc(p_726->g_511.s4, "p_726->g_511.s4", print_hash_value);
    transparent_crc(p_726->g_511.s5, "p_726->g_511.s5", print_hash_value);
    transparent_crc(p_726->g_511.s6, "p_726->g_511.s6", print_hash_value);
    transparent_crc(p_726->g_511.s7, "p_726->g_511.s7", print_hash_value);
    transparent_crc(p_726->g_669.x, "p_726->g_669.x", print_hash_value);
    transparent_crc(p_726->g_669.y, "p_726->g_669.y", print_hash_value);
    transparent_crc(p_726->v_collective, "p_726->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 34; i++)
            transparent_crc(p_726->g_special_values[i + 34 * get_linear_group_id()], "p_726->g_special_values[i + 34 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 34; i++)
            transparent_crc(p_726->l_special_values[i], "p_726->l_special_values[i]", print_hash_value);
    transparent_crc(p_726->l_comm_values[get_linear_local_id()], "p_726->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_726->g_comm_values[get_linear_group_id() * 115 + get_linear_local_id()], "p_726->g_comm_values[get_linear_group_id() * 115 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
