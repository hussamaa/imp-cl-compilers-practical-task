// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,62,1 -l 1,62,1
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

__constant uint32_t permutations[10][62] = {
{61,8,58,19,29,35,54,31,11,38,25,46,40,24,42,41,27,23,51,43,32,59,33,14,3,22,34,16,20,30,47,17,9,4,13,45,48,50,18,57,52,21,15,49,5,60,55,44,53,12,36,28,26,39,10,2,56,0,7,37,6,1}, // permutation 0
{49,18,31,60,32,6,61,46,24,56,33,22,37,57,0,30,35,26,58,29,42,15,36,21,55,40,25,34,13,59,53,23,2,3,45,5,43,11,10,41,17,8,28,51,52,9,44,54,27,1,50,47,20,39,38,16,14,19,4,48,7,12}, // permutation 1
{1,40,32,35,45,19,23,2,30,22,38,7,54,61,57,16,31,44,60,51,47,41,18,42,33,58,43,36,10,56,4,53,39,37,50,20,34,13,55,8,24,15,27,59,3,12,0,21,49,17,9,5,14,46,11,48,26,29,28,6,25,52}, // permutation 2
{34,7,52,15,6,24,29,46,49,38,27,0,8,56,30,61,54,23,35,60,37,4,18,12,50,43,5,57,40,22,11,36,28,44,25,32,48,51,58,2,45,41,33,17,26,10,14,47,16,13,21,1,39,42,31,53,55,3,20,19,59,9}, // permutation 3
{16,10,7,61,31,58,22,9,52,4,54,51,37,38,35,15,1,19,56,8,25,0,57,29,45,53,40,18,14,27,55,5,46,43,3,34,17,26,6,21,24,2,60,49,28,33,48,39,30,13,42,41,59,11,32,44,50,20,36,12,47,23}, // permutation 4
{1,60,11,32,33,43,6,22,25,26,40,48,12,34,61,36,51,15,57,21,28,5,39,29,37,16,45,59,35,46,44,49,38,4,24,18,14,0,19,20,54,50,3,42,2,9,52,53,7,27,8,31,58,55,23,10,13,56,17,47,30,41}, // permutation 5
{43,41,16,18,51,44,3,5,6,7,22,50,29,30,28,53,45,2,42,27,8,15,47,19,4,9,48,58,52,21,0,49,10,38,17,32,54,23,57,40,37,20,35,60,14,13,1,12,61,26,25,46,11,33,56,34,39,55,36,24,59,31}, // permutation 6
{60,18,5,32,14,23,4,49,40,2,9,61,24,53,59,43,37,8,22,56,52,28,41,30,20,26,42,50,38,19,15,16,47,29,6,11,10,34,3,33,36,51,45,55,39,44,31,13,54,58,0,25,1,48,7,27,17,12,21,46,35,57}, // permutation 7
{20,9,59,3,41,32,54,35,52,60,25,48,21,10,19,26,7,2,16,12,45,27,18,28,53,13,39,50,23,8,14,31,1,49,51,47,24,58,11,4,22,37,5,0,36,34,6,15,38,46,33,61,29,55,42,57,43,44,40,56,17,30}, // permutation 8
{20,55,56,51,59,37,16,25,48,44,27,2,32,15,45,52,1,29,7,28,47,14,54,6,13,42,36,18,5,11,21,8,26,9,41,0,60,23,3,34,46,35,24,39,12,19,30,53,43,57,49,38,22,40,31,33,58,50,17,10,4,61} // permutation 9
};

// Seed: 4070993930

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile int32_t  f1;
   volatile int64_t  f2;
   volatile int64_t  f3;
   uint64_t  f4;
   uint64_t  f5;
   int8_t  f6;
   uint32_t  f7;
};

struct S1 {
   int16_t  f0;
   uint32_t  f1;
   struct S0  f2;
   int16_t  f3;
   volatile int32_t  f4;
   int8_t  f5;
   uint16_t  f6;
   uint8_t  f7;
   volatile uint32_t  f8;
   uint16_t  f9;
};

struct S2 {
   struct S0  f0;
   struct S0  f1;
};

struct S4 {
   uint32_t  f0;
   struct S1  f1;
   int32_t  f2;
   int64_t  f3;
};

struct S5 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile VECTOR(uint32_t, 4) g_31;
    int32_t g_34;
    VECTOR(uint8_t, 8) g_51;
    VECTOR(uint8_t, 16) g_52;
    int16_t g_90;
    int16_t *g_101;
    uint32_t g_109;
    struct S4 g_114;
    VECTOR(int32_t, 8) g_120;
    uint64_t g_128;
    VECTOR(int16_t, 16) g_134;
    VECTOR(uint8_t, 4) g_135;
    VECTOR(uint32_t, 4) g_138;
    VECTOR(int32_t, 4) g_143;
    VECTOR(int32_t, 2) g_144;
    VECTOR(int32_t, 16) g_145;
    int32_t *g_149;
    VECTOR(int16_t, 16) g_157;
    VECTOR(int64_t, 4) g_160;
    VECTOR(int32_t, 4) g_180;
    uint64_t g_192;
    VECTOR(uint32_t, 4) g_212;
    VECTOR(int16_t, 8) g_224;
    VECTOR(int32_t, 2) g_235;
    struct S4 g_237;
    VECTOR(int8_t, 8) g_238;
    VECTOR(int32_t, 2) g_250;
    uint16_t g_254;
    struct S0 g_258;
    struct S0 g_259[8];
    struct S0 g_260;
    VECTOR(int64_t, 2) g_272;
    struct S4 g_355;
    VECTOR(int32_t, 2) g_357;
    uint16_t **g_379;
    uint16_t *g_382;
    uint16_t ** volatile g_381;
    volatile VECTOR(int8_t, 8) g_396;
    volatile struct S2 g_403;
    volatile struct S4 g_411[7][10];
    volatile struct S4 *g_410;
    volatile struct S4 **g_409[10];
    volatile struct S4 ***g_408;
    volatile VECTOR(int16_t, 4) g_416;
    volatile uint64_t g_421;
    volatile uint64_t * volatile g_420;
    volatile uint64_t * volatile *g_419;
    int32_t * volatile g_425;
    int32_t * volatile g_426[4];
    int32_t * volatile g_428[10];
    VECTOR(int64_t, 4) g_436;
    struct S1 *g_450[10];
    struct S1 ** volatile g_449[10];
    struct S1 ** volatile g_451;
    volatile struct S4 g_463;
    volatile struct S4 g_464;
    uint32_t g_465[5];
    VECTOR(int16_t, 8) g_490;
    uint8_t g_503;
    volatile VECTOR(uint32_t, 16) g_504;
    VECTOR(int64_t, 4) g_509;
    volatile int64_t g_515;
    volatile int64_t *g_514;
    VECTOR(int16_t, 4) g_516;
    int32_t ** volatile g_535;
    int32_t *g_537;
    int32_t ** volatile g_536;
    volatile VECTOR(uint16_t, 2) g_542;
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
uint64_t  func_1(struct S5 * p_547);
uint64_t  func_20(uint64_t  p_21, struct S5 * p_547);
int8_t  func_26(uint16_t  p_27, uint32_t  p_28, int32_t  p_29, struct S5 * p_547);
uint8_t  func_38(int64_t  p_39, uint8_t  p_40, uint32_t  p_41, int32_t  p_42, int16_t  p_43, struct S5 * p_547);
int64_t  func_44(int32_t * p_45, int32_t * p_46, struct S5 * p_547);
uint8_t  func_54(int32_t * p_55, int16_t  p_56, int16_t  p_57, int32_t * p_58, struct S5 * p_547);
int32_t * func_59(int32_t * p_60, uint32_t  p_61, int32_t * p_62, uint32_t  p_63, struct S5 * p_547);
int8_t  func_64(int64_t  p_65, int32_t  p_66, uint64_t  p_67, int32_t  p_68, uint8_t  p_69, struct S5 * p_547);
int64_t  func_70(int32_t * p_71, uint32_t  p_72, int16_t  p_73, uint32_t  p_74, struct S5 * p_547);
int32_t * func_75(uint16_t  p_76, struct S5 * p_547);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_547->g_3 p_547->l_comm_values p_547->g_comm_values p_547->g_192 p_547->g_379 p_547->g_381 p_547->g_34 p_547->g_144 p_547->g_237.f3 p_547->g_260.f7 p_547->g_403.f1.f3 p_547->g_382 p_547->g_114.f1.f6 p_547->g_436 p_547->g_250 p_547->g_212 p_547->g_463 p_547->g_465 p_547->g_114.f1.f2.f7 p_547->g_403.f0.f5 p_547->g_101 p_547->g_90 p_547->g_259.f0 p_547->g_490 p_547->g_260.f5 p_547->g_258.f6 p_547->g_114.f1.f2.f0 p_547->g_503 p_547->g_355.f1.f6 p_547->g_143 p_547->g_504 p_547->g_138 p_547->g_509 p_547->g_514 p_547->g_516 p_547->g_224 p_547->g_419 p_547->g_420 p_547->g_421 p_547->g_536 p_547->g_403 p_547->g_542 p_547->g_149 p_547->g_357
 * writes: p_547->g_3 p_547->g_114.f1.f2.f5 p_547->g_379 p_547->g_34 p_547->g_114.f1.f2.f6 p_547->g_272 p_547->g_250 p_547->g_192 p_547->g_114.f1.f6 p_547->g_355.f1.f7 p_547->g_464 p_547->g_465 p_547->g_114.f1.f2.f7 p_547->g_114.f1.f2.f0 p_547->g_138 p_547->g_149 p_547->g_537 p_547->g_357
 */
uint64_t  func_1(struct S5 * p_547)
{ /* block id: 4 */
    uint32_t l_8[7];
    int32_t l_444 = 0x2BEC0736L;
    struct S1 *l_454 = &p_547->g_114.f1;
    int32_t l_529 = 0x6114EDB4L;
    int32_t l_530[10][2][7] = {{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}},{{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L},{8L,0x7DAC05C9L,(-5L),0x198028CEL,(-1L),0L,0L}}};
    int32_t **l_534 = &p_547->g_149;
    uint32_t *l_540 = &l_8[0];
    uint16_t **l_541 = &p_547->g_382;
    uint32_t l_545 = 0UL;
    int32_t *l_546[2][4][3] = {{{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444}},{{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444},{&l_444,(void*)0,&l_444}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_8[i] = 0x3A6C9CD4L;
    for (p_547->g_3 = 0; (p_547->g_3 >= 20); ++p_547->g_3)
    { /* block id: 7 */
        uint32_t l_9 = 4294967287UL;
        int8_t *l_429 = (void*)0;
        int8_t *l_430 = &p_547->g_114.f1.f2.f6;
        int64_t *l_431 = (void*)0;
        int64_t *l_432 = (void*)0;
        int64_t *l_433 = (void*)0;
        int32_t *l_439 = (void*)0;
        int32_t *l_440 = (void*)0;
        int32_t *l_441 = (void*)0;
        int32_t *l_442 = (void*)0;
        int32_t *l_443[6][2][9] = {{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}},{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}},{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}},{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}},{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}},{{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3},{&p_547->g_3,(void*)0,(void*)0,&p_547->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_547->g_3}}};
        struct S1 *l_447 = &p_547->g_114.f1;
        VECTOR(int64_t, 8) l_485 = (VECTOR(int64_t, 8))(0x064400EAE0FC15CAL, (VECTOR(int64_t, 4))(0x064400EAE0FC15CAL, (VECTOR(int64_t, 2))(0x064400EAE0FC15CAL, 0x082FBD59CBC7B94CL), 0x082FBD59CBC7B94CL), 0x082FBD59CBC7B94CL, 0x064400EAE0FC15CAL, 0x082FBD59CBC7B94CL);
        VECTOR(int8_t, 8) l_493 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 3L), 3L), 3L, (-6L), 3L);
        int i, j, k;
        l_444 |= (safe_lshift_func_uint16_t_u_u(l_8[0], (l_9 && (safe_add_func_uint8_t_u_u(p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))], ((safe_mod_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((func_20(p_547->g_comm_values[p_547->tid], p_547) , (p_547->g_272.y = (p_547->g_403.f1.f3 & ((*l_430) = ((VECTOR(int8_t, 2))(9L, 0x1FL)).lo)))) ^ ((p_547->g_250.y |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-1L), (((VECTOR(uint16_t, 16))(0x1B6DL, 2UL, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(4UL, 0x5405L)).xxyyxyyy, (uint16_t)(*p_547->g_382)))), (safe_lshift_func_int8_t_s_s((((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(p_547->g_436.zzxxxwwyywzyywzz)).hi, (int64_t)((safe_add_func_uint64_t_u_u(l_8[2], ((VECTOR(uint64_t, 2))(1UL, 1UL)).odd)) | (l_8[0] < p_547->g_comm_values[p_547->tid]))))).s3 & 0x5E856614619CB845L), 7)), l_8[0], 0xE00AL, 0xAB83L, 0x8692L, 0xD51BL)).sa && l_8[0]), 0L, ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 2))(0x31EE94DFL)), 0x1FC412B7L, l_8[0], l_8[1], 0L, ((VECTOR(int32_t, 4))(0x73874EB5L)), 0L)).odd)).s4) , l_8[0])), l_9)) , 0L), 0x3B99L)) & (*p_547->g_382)), l_8[0])) >= p_547->g_212.w), (-3L))) ^ GROUP_DIVERGE(1, 1)))))));
        for (p_547->g_192 = 0; (p_547->g_192 == 17); p_547->g_192 = safe_add_func_uint16_t_u_u(p_547->g_192, 2))
        { /* block id: 178 */
            struct S1 **l_448 = (void*)0;
            struct S1 **l_452[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_453[7] = {1L,0x2EB0AC0BL,1L,1L,0x2EB0AC0BL,1L,1L};
            int8_t l_458 = 0x7DL;
            VECTOR(int32_t, 2) l_461 = (VECTOR(int32_t, 2))(1L, 0x3D174768L);
            uint32_t l_531 = 1UL;
            int i;
            l_447 = l_447;
            if ((l_453[6] , (FAKE_DIVERGE(p_547->local_2_offset, get_local_id(2), 10) >= (0x1500L > ((void*)0 != l_454)))))
            { /* block id: 180 */
                uint16_t l_457 = 0UL;
                uint8_t *l_462 = &p_547->g_355.f1.f7;
                p_547->g_464 = (((*l_462) = (safe_sub_func_uint8_t_u_u((((l_453[6] ^ (l_457 ^ l_458)) , p_547->g_3) <= (safe_add_func_uint16_t_u_u(l_457, ((*p_547->g_382) = (((void*)0 != &p_547->g_409[7]) | ((VECTOR(int32_t, 16))(l_461.xxyxxyxxxxyxyxxx)).s9))))), (-7L)))) , p_547->g_463);
                p_547->g_465[4]--;
            }
            else
            { /* block id: 185 */
                uint8_t l_497 = 0UL;
                for (p_547->g_114.f1.f2.f7 = 4; (p_547->g_114.f1.f2.f7 != 54); p_547->g_114.f1.f2.f7 = safe_add_func_int16_t_s_s(p_547->g_114.f1.f2.f7, 8))
                { /* block id: 188 */
                    struct S1 *l_494 = (void*)0;
                    int32_t l_517 = 0x68F506FDL;
                    l_494 = ((safe_lshift_func_uint8_t_u_u((9L >= (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((!p_547->g_403.f0.f5))), (safe_lshift_func_uint8_t_u_u(((l_461.x = 0x6DL) >= (safe_rshift_func_uint8_t_u_s(((0xCAL >= (((*p_547->g_101) | (safe_div_func_uint64_t_u_u(7UL, ((VECTOR(int64_t, 4))(l_485.s5362)).y))) && p_547->g_259[6].f0)) && (((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_547->g_490.s0404660734124311)).sd, (safe_mod_func_int8_t_s_s(0x32L, ((VECTOR(int8_t, 8))(l_493.s52555275)).s1)))), p_547->g_260.f5)) ^ 0x33678264L) , 0UL)), 4))), p_547->g_258.f6)))), 8))), 7)) , l_447);
                    for (p_547->g_114.f1.f2.f0 = 0; (p_547->g_114.f1.f2.f0 > 46); p_547->g_114.f1.f2.f0 = safe_add_func_int64_t_s_s(p_547->g_114.f1.f2.f0, 1))
                    { /* block id: 193 */
                        int32_t **l_498 = &l_443[3][1][7];
                        if (l_497)
                            break;
                        (*l_498) = &p_547->g_3;
                        (*l_498) = (((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_547->g_503, (l_517 &= (!(((VECTOR(uint32_t, 16))(p_547->g_355.f1.f6, 0UL, p_547->g_143.z, ((VECTOR(uint32_t, 8))(p_547->g_504.sfbf65d9b)), 0UL, 0x3551F598L, (--p_547->g_138.z), 0xB137CA6AL, 4294967294UL)).s1 >= (safe_mod_func_int8_t_s_s(((((VECTOR(int64_t, 4))(p_547->g_509.wwwz)).x & 0xB19C1E0B520B04DEL) <= (((l_461.x >= (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0L, (((VECTOR(int16_t, 16))(((void*)0 != p_547->g_514), ((VECTOR(int16_t, 2))(p_547->g_516.zz)), 0x7C6EL, (-7L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x546FL, 0x0766L, (-3L), (-1L))).zwzxyyww)).s27)).yyxxxxxy)).lo)), (*p_547->g_101), ((VECTOR(int16_t, 4))((-1L))), 0x2A0EL, 1L)).s6 <= 3UL))), 1UL))) , 0xBDC2L) != (-1L))), 0x72L))))))), p_547->g_490.s4)) | p_547->g_224.s7) , (void*)0);
                    }
                    if ((atomic_inc(&p_547->l_atomic_input[25]) == 0))
                    { /* block id: 201 */
                        struct S0 l_518 = {0x50C1630DL,-1L,-1L,0x3C596A4BAE02745AL,18446744073709551611UL,7UL,0x40L,0x1D8774B3L};/* VOLATILE GLOBAL l_518 */
                        uint32_t l_519 = 0x9DA9E0F6L;
                        struct S2 l_520 = {{4294967289UL,9L,0x3435641E9EC85D8FL,1L,0xD160A3563726C81BL,18446744073709551606UL,7L,0UL},{2UL,0L,-2L,-1L,0x90B7C2122DEEF947L,3UL,0x54L,0xB41BDCE3L}};/* VOLATILE GLOBAL l_520 */
                        struct S2 l_521 = {{4294967292UL,-9L,0x0ABBBB3FC7424F58L,0x60A2E3634037A3F3L,0x486E237F0C6DCA5EL,0xE08F87E96C7CA777L,0x0CL,2UL},{0x0D0503CAL,-4L,0x15F19BB7352CAD3CL,0x2838A5B45A68F84DL,0x02257FD46CFDD065L,0x5C692C65654BE70EL,-2L,0x3DB8ACCAL}};/* VOLATILE GLOBAL l_521 */
                        VECTOR(int64_t, 8) l_522 = (VECTOR(int64_t, 8))(0x6636867A7085E59DL, (VECTOR(int64_t, 4))(0x6636867A7085E59DL, (VECTOR(int64_t, 2))(0x6636867A7085E59DL, (-9L)), (-9L)), (-9L), 0x6636867A7085E59DL, (-9L));
                        int32_t l_523 = 0x01B8F4E4L;
                        uint8_t l_524 = 0x9FL;
                        struct S4 l_527 = {6UL,{0L,0x5A087ED4L,{4294967291UL,0x6ADC7B65L,0L,0x7C6A08E19820ED83L,0x9AEFAB19D793463AL,0xDC620558820FD0C2L,0x6FL,3UL},0x479DL,1L,0x67L,0xEAC9L,0xF6L,0x08008A3DL,0x38B5L},0x09FF240BL,0x4A46340F21C66257L};/* VOLATILE GLOBAL l_527 */
                        struct S4 l_528 = {0x9276A9FEL,{0L,0xB6AE5F55L,{0x49AEA960L,0x109FFB74L,0x3AC9FF34368A6E96L,4L,0xDE41BB1AE8F4390AL,1UL,0L,0x3EC710CEL},2L,-4L,0x5AL,1UL,0x4DL,1UL,0x6854L},0x4253C0C7L,0x57547154BB438BDCL};/* VOLATILE GLOBAL l_528 */
                        int i;
                        l_521 = ((l_518 , (l_519 = (-1L))) , l_520);
                        l_524++;
                        l_528 = l_527;
                        unsigned int result = 0;
                        result += l_518.f0;
                        result += l_518.f1;
                        result += l_518.f2;
                        result += l_518.f3;
                        result += l_518.f4;
                        result += l_518.f5;
                        result += l_518.f6;
                        result += l_518.f7;
                        result += l_519;
                        result += l_520.f0.f0;
                        result += l_520.f0.f1;
                        result += l_520.f0.f2;
                        result += l_520.f0.f3;
                        result += l_520.f0.f4;
                        result += l_520.f0.f5;
                        result += l_520.f0.f6;
                        result += l_520.f0.f7;
                        result += l_520.f1.f0;
                        result += l_520.f1.f1;
                        result += l_520.f1.f2;
                        result += l_520.f1.f3;
                        result += l_520.f1.f4;
                        result += l_520.f1.f5;
                        result += l_520.f1.f6;
                        result += l_520.f1.f7;
                        result += l_521.f0.f0;
                        result += l_521.f0.f1;
                        result += l_521.f0.f2;
                        result += l_521.f0.f3;
                        result += l_521.f0.f4;
                        result += l_521.f0.f5;
                        result += l_521.f0.f6;
                        result += l_521.f0.f7;
                        result += l_521.f1.f0;
                        result += l_521.f1.f1;
                        result += l_521.f1.f2;
                        result += l_521.f1.f3;
                        result += l_521.f1.f4;
                        result += l_521.f1.f5;
                        result += l_521.f1.f6;
                        result += l_521.f1.f7;
                        result += l_522.s7;
                        result += l_522.s6;
                        result += l_522.s5;
                        result += l_522.s4;
                        result += l_522.s3;
                        result += l_522.s2;
                        result += l_522.s1;
                        result += l_522.s0;
                        result += l_523;
                        result += l_524;
                        result += l_527.f0;
                        result += l_527.f1.f0;
                        result += l_527.f1.f1;
                        result += l_527.f1.f2.f0;
                        result += l_527.f1.f2.f1;
                        result += l_527.f1.f2.f2;
                        result += l_527.f1.f2.f3;
                        result += l_527.f1.f2.f4;
                        result += l_527.f1.f2.f5;
                        result += l_527.f1.f2.f6;
                        result += l_527.f1.f2.f7;
                        result += l_527.f1.f3;
                        result += l_527.f1.f4;
                        result += l_527.f1.f5;
                        result += l_527.f1.f6;
                        result += l_527.f1.f7;
                        result += l_527.f1.f8;
                        result += l_527.f1.f9;
                        result += l_527.f2;
                        result += l_527.f3;
                        result += l_528.f0;
                        result += l_528.f1.f0;
                        result += l_528.f1.f1;
                        result += l_528.f1.f2.f0;
                        result += l_528.f1.f2.f1;
                        result += l_528.f1.f2.f2;
                        result += l_528.f1.f2.f3;
                        result += l_528.f1.f2.f4;
                        result += l_528.f1.f2.f5;
                        result += l_528.f1.f2.f6;
                        result += l_528.f1.f2.f7;
                        result += l_528.f1.f3;
                        result += l_528.f1.f4;
                        result += l_528.f1.f5;
                        result += l_528.f1.f6;
                        result += l_528.f1.f7;
                        result += l_528.f1.f8;
                        result += l_528.f1.f9;
                        result += l_528.f2;
                        result += l_528.f3;
                        atomic_add(&p_547->l_special_values[25], result);
                    }
                    else
                    { /* block id: 206 */
                        (1 + 1);
                    }
                }
            }
            l_531++;
        }
        return (**p_547->g_419);
    }
    (*p_547->g_536) = ((*l_534) = &l_444);
    p_547->g_357.x ^= (p_547->g_34 |= (((safe_rshift_func_int8_t_s_u((((*l_540) = ((p_547->g_403 , l_534) != &p_547->g_537)) <= (&p_547->g_382 == (p_547->g_144.x , l_541))), 0)) || ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(p_547->g_542.xxxy)).xwwwwwzw, (uint16_t)((((((((safe_mul_func_uint16_t_u_u(l_545, (**p_547->g_381))) != ((*p_547->g_149) != 0x57270991L)) || (*p_547->g_420)) || GROUP_DIVERGE(0, 1)) && 0UL) || 0x4A9B2564L) > (**l_534)) | 6L)))).hi, ((VECTOR(uint16_t, 4))(65533UL))))).z) || p_547->g_463.f1.f3));
    (**l_534) = (((*p_547->g_419) == (void*)0) == p_547->g_250.x);
    return (*p_547->g_420);
}


/* ------------------------------------------ */
/* 
 * reads : p_547->l_comm_values p_547->g_192 p_547->g_379 p_547->g_381 p_547->g_34 p_547->g_144 p_547->g_237.f3 p_547->g_260.f7 p_547->g_3
 * writes: p_547->g_114.f1.f2.f5 p_547->g_379 p_547->g_34
 */
uint64_t  func_20(uint64_t  p_21, struct S5 * p_547)
{ /* block id: 8 */
    VECTOR(int32_t, 4) l_37 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L);
    int32_t *l_47 = &p_547->g_3;
    int32_t l_364 = 0x0DFD2E87L;
    int i;
    for (p_21 = 0; (p_21 == 41); ++p_21)
    { /* block id: 11 */
        int8_t l_30 = 1L;
        VECTOR(int8_t, 16) l_32 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7FL), 0x7FL), 0x7FL, 0L, 0x7FL, (VECTOR(int8_t, 2))(0L, 0x7FL), (VECTOR(int8_t, 2))(0L, 0x7FL), 0L, 0x7FL, 0L, 0x7FL);
        int32_t *l_33 = &p_547->g_34;
        VECTOR(int32_t, 4) l_35 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x19FA4A60L), 0x19FA4A60L);
        VECTOR(int32_t, 16) l_36 = (VECTOR(int32_t, 16))(0x32A5B4D6L, (VECTOR(int32_t, 4))(0x32A5B4D6L, (VECTOR(int32_t, 2))(0x32A5B4D6L, 0x466883CEL), 0x466883CEL), 0x466883CEL, 0x32A5B4D6L, 0x466883CEL, (VECTOR(int32_t, 2))(0x32A5B4D6L, 0x466883CEL), (VECTOR(int32_t, 2))(0x32A5B4D6L, 0x466883CEL), 0x32A5B4D6L, 0x466883CEL, 0x32A5B4D6L, 0x466883CEL);
        int i;
        l_364 = ((safe_mul_func_int8_t_s_s(func_26(p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))], l_30, (((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(0x13ED423CL, 4294967295UL)).xxyy, ((VECTOR(uint32_t, 8))(p_547->g_31.xzxwwxwx)).hi))).w == (((VECTOR(int8_t, 2))(l_32.s84)).lo , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x1131E34FL, ((*l_33) &= p_21), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_35.wy)).xxyy)), 7L, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), 1L)).xxyx)).xwzwxxxz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_36.s71799991)))).s1, ((VECTOR(int32_t, 4))(l_37.yzxw)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_37.x, 0x726B4FF5L, (func_38(func_44(l_47, l_47, p_547), p_547->g_160.x, p_21, p_21, l_364, p_547) , (-1L)), (-6L), (*l_33), p_21, 7L, 0L)).s47, ((VECTOR(int32_t, 2))(1L))))), 0x7D758A04L)).lo, ((VECTOR(int32_t, 4))(0x2F6C6A12L))))), (int32_t)(*l_47)))).wzwxzyyx)), ((VECTOR(int32_t, 8))(0x333E375DL))))), 0x1729C785L)).scd70)).w || p_547->g_192))), p_547), 0x27L)) < p_547->g_260.f7);
        if ((*l_47))
            continue;
    }
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_114.f1.f2.f5 p_547->g_379 p_547->g_381 p_547->g_34 p_547->g_396 p_547->g_403 p_547->g_408 p_547->g_416 p_547->g_419 p_547->g_101 p_547->g_90 p_547->g_260.f5 p_547->g_144 p_547->g_237.f3
 * writes: p_547->g_114.f1.f2.f5 p_547->g_379 p_547->g_34 p_547->g_114.f1.f7
 */
int8_t  func_26(uint16_t  p_27, uint32_t  p_28, int32_t  p_29, struct S5 * p_547)
{ /* block id: 157 */
    uint16_t **l_385 = &p_547->g_382;
    uint16_t ***l_386 = &p_547->g_379;
    VECTOR(int8_t, 8) l_391 = (VECTOR(int8_t, 8))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0L), 0L), 0L, 0x06L, 0L);
    VECTOR(int8_t, 8) l_392 = (VECTOR(int8_t, 8))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L), 1L, 0x30L, 1L);
    VECTOR(int8_t, 8) l_393 = (VECTOR(int8_t, 8))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 1L), 1L), 1L, 0x7CL, 1L);
    VECTOR(int8_t, 4) l_394 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x40L), 0x40L);
    VECTOR(int8_t, 4) l_395 = (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, (-1L)), (-1L));
    VECTOR(int64_t, 8) l_399 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7ABBC84C0F65129FL), 0x7ABBC84C0F65129FL), 0x7ABBC84C0F65129FL, 1L, 0x7ABBC84C0F65129FL);
    VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-6L)), (-6L)), (-6L), 2L, (-6L), (VECTOR(int32_t, 2))(2L, (-6L)), (VECTOR(int32_t, 2))(2L, (-6L)), 2L, (-6L), 2L, (-6L));
    VECTOR(int32_t, 2) l_406 = (VECTOR(int32_t, 2))(0x5B46FC71L, 0x53C980FDL);
    VECTOR(int32_t, 8) l_407 = (VECTOR(int32_t, 8))(0x08396F27L, (VECTOR(int32_t, 4))(0x08396F27L, (VECTOR(int32_t, 2))(0x08396F27L, (-1L)), (-1L)), (-1L), 0x08396F27L, (-1L));
    uint8_t *l_422 = &p_547->g_114.f1.f7;
    uint16_t l_423 = 65535UL;
    int32_t *l_424 = (void*)0;
    int32_t *l_427 = (void*)0;
    int i;
    for (p_547->g_114.f1.f2.f5 = (-16); (p_547->g_114.f1.f2.f5 > 59); p_547->g_114.f1.f2.f5 = safe_add_func_int8_t_s_s(p_547->g_114.f1.f2.f5, 1))
    { /* block id: 160 */
        uint16_t ***l_380 = &p_547->g_379;
        int32_t *l_383 = (void*)0;
        int32_t *l_384 = &p_547->g_34;
        (*l_384) ^= (((*l_380) = p_547->g_379) == p_547->g_381);
    }
    l_402.s3 = ((((*l_386) = l_385) != ((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(4L, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x16L, 4L)), 0x62L, 0L)).xyxxxzxw, ((VECTOR(int8_t, 2))(l_391.s12)).yyxxxxyy))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x56L, 1L)).yyxxxxyxyyxyxxxy)).even))), 0x33L, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x03L, 0x41L)).xyyyyxxyxxxyyxxx)).s193b, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_392.s24446676)).s26, ((VECTOR(int8_t, 2))(l_393.s04))))).xxyy, ((VECTOR(int8_t, 16))(l_394.xzyzwyyzwzxwzxwy)).s0ae9))).even)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x6DL, 0x1BL)).xxxyyyxxxxyyyyyy)).even)).s17, ((VECTOR(int8_t, 4))(l_395.zxyy)).lo))), 0x5BL, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(p_547->g_396.s7416115737370462)).s35, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(0L, (-9L))).yxxxyyyxyxxxyyyy))).sb0))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, (-7L))), ((VECTOR(int8_t, 4))((((safe_div_func_int32_t_s_s((p_28 & (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_399.s60132530)).even)).zzwzwwwyzzyxxzwy)).lo)).s5 > FAKE_DIVERGE(p_547->local_2_offset, get_local_id(2), 10))), (((((safe_lshift_func_uint8_t_u_s(((*l_422) = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_402.sfd)), (-5L), 5L)))).w , (p_547->g_403 , ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))((-6L), 4L, ((VECTOR(int32_t, 4))(l_406.xxyx)), 0x7F4A4DD0L, 0x0F26986CL)).odd, ((VECTOR(int32_t, 4))(l_407.s4140)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((((void*)0 != p_547->g_408) , p_27) < ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u(255UL, 1)) || ((VECTOR(int16_t, 16))(p_547->g_416.xwywzzxwzyyyyyyz)).sd), ((safe_lshift_func_int16_t_s_u(((p_547->g_419 == p_547->g_419) && 0x5D5AC2DF49B214D1L), 7)) ^ p_29))) , (*p_547->g_101))), ((VECTOR(int16_t, 2))(0x3829L)), 0L)).yzyxyzxx)).s5603240326000061, ((VECTOR(uint16_t, 16))(0xF309L))))).sd405))).z, p_547->g_260.f5)) || p_28)))), 3)) , GROUP_DIVERGE(0, 1)) , l_423) != 0xF4L) || p_27))) >= l_399.s6) == 0xE888L), 0x5FL, 1L, 0x1AL)), (-1L), (-7L))))).s13, ((VECTOR(int8_t, 2))(9L))))), 0x51L)).sc7a9)).even, ((VECTOR(int8_t, 2))((-1L)))))).lo, 0x26L)), l_402.sd)) , l_385)) != p_547->g_144.x);
    return p_547->g_237.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_254
 * writes:
 */
uint8_t  func_38(int64_t  p_39, uint8_t  p_40, uint32_t  p_41, int32_t  p_42, int16_t  p_43, struct S5 * p_547)
{ /* block id: 154 */
    int32_t l_365 = (-1L);
    int32_t *l_366 = (void*)0;
    int32_t *l_367 = (void*)0;
    int32_t *l_368 = (void*)0;
    int32_t *l_369 = &l_365;
    int32_t *l_370 = (void*)0;
    int32_t *l_371 = &p_547->g_34;
    int32_t *l_372 = &l_365;
    int32_t *l_373[3][3];
    uint8_t l_374 = 251UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_373[i][j] = &l_365;
    }
    ++l_374;
    return p_547->g_254;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_comm_values p_547->g_51 p_547->g_52 p_547->l_comm_values p_547->g_3 p_547->g_90 p_547->g_34 p_547->g_109 p_547->g_120 p_547->g_101 p_547->g_134 p_547->g_135 p_547->g_138 p_547->g_143 p_547->g_144 p_547->g_145 p_547->g_114.f1.f1 p_547->g_114.f1.f5 p_547->g_114.f1.f6 p_547->g_157 p_547->g_160 p_547->g_180 p_547->g_128 p_547->g_114.f1.f0 p_547->g_114.f1.f2.f4 p_547->g_192 p_547->g_212 p_547->g_224 p_547->g_235 p_547->g_238 p_547->g_114.f1.f7 p_547->g_114.f3 p_547->g_254 p_547->g_260.f7 p_547->g_114.f2 p_547->g_114.f1.f2.f5 p_547->g_272 p_547->g_237.f1.f3 p_547->g_114.f1.f9 p_547->g_258.f0 p_547->g_114.f1.f2.f0 p_547->g_114.f1.f3 p_547->g_259.f0 p_547->g_357 p_547->g_259.f4 p_547->g_355.f1.f2.f6
 * writes: p_547->g_101 p_547->g_90 p_547->g_34 p_547->g_128 p_547->g_120 p_547->g_114.f1.f6 p_547->g_149 p_547->g_144 p_547->g_192 p_547->g_109 p_547->g_114.f1.f2.f6 p_547->g_114.f1.f7 p_547->g_180 p_547->g_254 p_547->g_114.f1.f2.f5 p_547->g_114.f1.f9 p_547->g_258.f0 p_547->g_114.f1.f3 p_547->g_357
 */
int64_t  func_44(int32_t * p_45, int32_t * p_46, struct S5 * p_547)
{ /* block id: 13 */
    int32_t *l_50[7][9][2] = {{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}},{{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3},{&p_547->g_3,&p_547->g_3}}};
    VECTOR(uint8_t, 2) l_53 = (VECTOR(uint8_t, 2))(0x34L, 0xB6L);
    uint64_t l_363[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    int i, j, k;
    p_547->g_357.x = ((((safe_mul_func_int16_t_s_s(((0x075FL | (p_45 == l_50[5][8][1])) > p_547->g_comm_values[p_547->tid]), (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(p_547->g_51.s43554751)).s71, ((VECTOR(uint8_t, 4))(p_547->g_52.s76e5)).hi))), ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(l_53.xx)).xxyyyxyxxyyyyxxx, ((VECTOR(uint8_t, 8))(func_54(&p_547->g_3, p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))], p_547->g_comm_values[p_547->tid], func_59(l_50[5][8][1], (func_64(func_70(func_75(((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(7UL, 7)) >= 0L), p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))])) <= 0x33B75CABL), p_547), p_547->g_comm_values[p_547->tid], p_547->g_51.s5, p_547->g_comm_values[p_547->tid], p_547), p_547->g_260.f7, p_547->g_114.f2, p_547->g_138.x, p_547->g_3, p_547) , p_547->g_114.f1.f3), p_45, p_547->g_259[6].f0, p_547), p_547), ((VECTOR(uint8_t, 2))(255UL)), p_547->g_114.f1.f9, l_363[6], 5UL, 247UL, 0UL)).s1076127106003016))).s27, ((VECTOR(uint8_t, 2))(255UL))))).xxxyxxxx)).s6 <= p_547->g_238.s0))) <= 1L) ^ p_547->g_355.f1.f2.f6) < 0x3514C97BL);
    l_50[5][8][1] = l_50[5][8][1];
    return p_547->g_145.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_259.f4
 * writes:
 */
uint8_t  func_54(int32_t * p_55, int16_t  p_56, int16_t  p_57, int32_t * p_58, struct S5 * p_547)
{ /* block id: 147 */
    uint16_t **l_361 = (void*)0;
    uint16_t ***l_362 = &l_361;
    (*l_362) = l_361;
    p_58 = (void*)0;
    return p_547->g_259[6].f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_357 p_547->g_114.f1.f3
 * writes: p_547->g_114.f1.f3
 */
int32_t * func_59(int32_t * p_60, uint32_t  p_61, int32_t * p_62, uint32_t  p_63, struct S5 * p_547)
{ /* block id: 139 */
    uint8_t l_358 = 1UL;
    l_358 = ((VECTOR(int32_t, 2))(p_547->g_357.yx)).lo;
    for (p_547->g_114.f1.f3 = 26; (p_547->g_114.f1.f3 != (-25)); p_547->g_114.f1.f3--)
    { /* block id: 143 */
        return &p_547->g_3;
    }
    return &p_547->g_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_34 p_547->g_114.f1.f2.f5 p_547->g_272 p_547->g_144 p_547->g_237.f1.f3 p_547->l_comm_values p_547->g_101 p_547->g_90 p_547->g_114.f1.f9 p_547->g_3 p_547->g_258.f0 p_547->g_114.f1.f2.f0 p_547->g_143 p_547->g_138
 * writes: p_547->g_34 p_547->g_114.f1.f2.f5 p_547->g_114.f1.f9 p_547->g_258.f0
 */
int8_t  func_64(int64_t  p_65, int32_t  p_66, uint64_t  p_67, int32_t  p_68, uint8_t  p_69, struct S5 * p_547)
{ /* block id: 99 */
    int32_t *l_267 = &p_547->g_34;
    VECTOR(uint64_t, 16) l_277 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x800E44C0F4BBF22BL), 0x800E44C0F4BBF22BL), 0x800E44C0F4BBF22BL, 18446744073709551608UL, 0x800E44C0F4BBF22BL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x800E44C0F4BBF22BL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x800E44C0F4BBF22BL), 18446744073709551608UL, 0x800E44C0F4BBF22BL, 18446744073709551608UL, 0x800E44C0F4BBF22BL);
    int32_t l_299 = (-4L);
    int32_t l_300 = 0x4F2CCB98L;
    int32_t l_304 = 0x7310CBC8L;
    VECTOR(int32_t, 2) l_305 = (VECTOR(int32_t, 2))((-7L), 4L);
    uint32_t l_307 = 0xE0DE219EL;
    VECTOR(int32_t, 16) l_314 = (VECTOR(int32_t, 16))(0x10C0B145L, (VECTOR(int32_t, 4))(0x10C0B145L, (VECTOR(int32_t, 2))(0x10C0B145L, 0x0CEB4637L), 0x0CEB4637L), 0x0CEB4637L, 0x10C0B145L, 0x0CEB4637L, (VECTOR(int32_t, 2))(0x10C0B145L, 0x0CEB4637L), (VECTOR(int32_t, 2))(0x10C0B145L, 0x0CEB4637L), 0x10C0B145L, 0x0CEB4637L, 0x10C0B145L, 0x0CEB4637L);
    int16_t **l_334 = &p_547->g_101;
    int16_t ***l_333 = &l_334;
    int16_t **l_336 = (void*)0;
    int16_t ***l_335 = &l_336;
    VECTOR(int16_t, 16) l_341 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int16_t, 2))((-1L), 6L), (VECTOR(int16_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
    uint32_t *l_342 = &p_547->g_258.f0;
    int64_t *l_345 = (void*)0;
    int64_t *l_346[5];
    struct S4 *l_354[6];
    struct S4 **l_353 = &l_354[4];
    struct S4 ***l_356 = &l_353;
    int i;
    for (i = 0; i < 5; i++)
        l_346[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_354[i] = &p_547->g_355;
    (*l_267) ^= 0x49FF417FL;
    for (p_547->g_114.f1.f2.f5 = 22; (p_547->g_114.f1.f2.f5 > 47); p_547->g_114.f1.f2.f5 = safe_add_func_uint16_t_u_u(p_547->g_114.f1.f2.f5, 4))
    { /* block id: 103 */
        struct S4 *l_279 = (void*)0;
        struct S4 **l_278[2];
        uint32_t l_284 = 1UL;
        int32_t l_301 = 0x22DFF457L;
        int32_t l_302 = 9L;
        int32_t l_303[7][10] = {{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L},{5L,0x38C9E105L,1L,5L,0x1893BE50L,1L,1L,0x1893BE50L,5L,1L}};
        VECTOR(int32_t, 2) l_313 = (VECTOR(int32_t, 2))(0x189D2DF2L, (-4L));
        int i, j;
        for (i = 0; i < 2; i++)
            l_278[i] = &l_279;
        if (p_67)
        { /* block id: 104 */
            uint16_t l_287 = 0x101CL;
            uint16_t *l_288 = &p_547->g_114.f1.f9;
            int64_t *l_289 = (void*)0;
            int64_t *l_290 = (void*)0;
            int64_t *l_291 = (void*)0;
            int64_t *l_292 = (void*)0;
            int64_t *l_293 = (void*)0;
            int64_t *l_294[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(int32_t, 16) l_295 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x317BEF32L), 0x317BEF32L), 0x317BEF32L, 9L, 0x317BEF32L, (VECTOR(int32_t, 2))(9L, 0x317BEF32L), (VECTOR(int32_t, 2))(9L, 0x317BEF32L), 9L, 0x317BEF32L, 9L, 0x317BEF32L);
            int32_t *l_296 = (void*)0;
            int32_t *l_297 = (void*)0;
            int32_t *l_298[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_306 = 0x0431FE83L;
            uint8_t l_310 = 247UL;
            int i;
            (*l_267) = (((l_295.s2 ^= (p_69 , ((safe_lshift_func_int16_t_s_u(((*l_267) || ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(p_547->g_272.yy)).yxyyxxyyxyyyyxyx)).s8), (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(5L, 7L)))).even > ((VECTOR(uint64_t, 8))(l_277.s47ffd1b1)).s3) > (l_278[1] == (void*)0)) , ((((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((p_547->g_144.x , ((((*l_288) ^= ((p_68 || (((((((l_284 != p_67) || (((safe_sub_func_uint32_t_u_u(((((&p_547->g_3 == (void*)0) >= l_287) , FAKE_DIVERGE(p_547->group_0_offset, get_group_id(0), 10)) && 0UL), 0x1EDBA2DFL)) < 0x60L) , 0x271BL)) | p_547->g_237.f1.f3) || p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))]) != (*p_547->g_101)) ^ p_67) < 0xDC69F49FL)) != 0x2BL)) , (*p_547->g_101)) || p_65)) & p_547->g_3), p_67)), 0x66F3L)) != l_287) == GROUP_DIVERGE(2, 1)) <= 18446744073709551615UL)), l_284)), p_68)) > 8UL) | 0x3C27A65FFEF23A56L))) | FAKE_DIVERGE(p_547->local_0_offset, get_local_id(0), 10)))) >= 0xF68FDAE5388A6F8DL) , l_287);
            (*l_267) = 0x2C652681L;
            l_307++;
            l_310--;
        }
        else
        { /* block id: 111 */
            if (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_313.xyyyxyyy)).hi)).zyzyzyzx, ((VECTOR(int32_t, 4))(l_314.sdc73)).zxyxzzzy, ((VECTOR(int32_t, 2))(4L, 0x5DD88601L)).yxyxxxyx))).s0)
            { /* block id: 112 */
                if ((atomic_inc(&p_547->g_atomic_input[89 * get_linear_group_id() + 55]) == 3))
                { /* block id: 114 */
                    uint64_t l_315 = 0UL;
                    int8_t l_316[5];
                    int32_t l_317 = 0x19BE1D50L;
                    VECTOR(int32_t, 4) l_318 = (VECTOR(int32_t, 4))(0x718D9CE4L, (VECTOR(int32_t, 2))(0x718D9CE4L, 1L), 1L);
                    VECTOR(int32_t, 2) l_319 = (VECTOR(int32_t, 2))(0x7676B21FL, (-5L));
                    uint16_t l_320 = 0x0456L;
                    int32_t l_321 = 0x2AF7BF4AL;
                    int32_t l_322 = 0x7CF731C4L;
                    int32_t l_323 = 4L;
                    uint8_t l_324 = 4UL;
                    VECTOR(int32_t, 2) l_325 = (VECTOR(int32_t, 2))(7L, (-3L));
                    VECTOR(int32_t, 8) l_326 = (VECTOR(int32_t, 8))(0x3D5333F8L, (VECTOR(int32_t, 4))(0x3D5333F8L, (VECTOR(int32_t, 2))(0x3D5333F8L, 0x537ACEF5L), 0x537ACEF5L), 0x537ACEF5L, 0x3D5333F8L, 0x537ACEF5L);
                    VECTOR(int32_t, 8) l_327 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x189EA039L), 0x189EA039L), 0x189EA039L, 1L, 0x189EA039L);
                    int8_t l_328 = 0x48L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_316[i] = 0x23L;
                    l_323 = (l_322 = (l_321 = ((VECTOR(int32_t, 16))(0x129141D1L, l_315, 0L, 0x4A638543L, ((VECTOR(int32_t, 4))(((l_316[0] = 0x72F952DEL) , l_317), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_318.zyyxwwwwywzwwyzz)).s15)).xyxx)).odd)), 0x26B99D96L)), 0x6521F5C0L, (l_320 = ((VECTOR(int32_t, 2))(l_319.xy)).odd), ((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 2))(2L, (-1L))), (-1L))), 0L, 0L)).sf));
                    l_319.x &= ((l_324 = 1UL) , (l_328 = ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_325.xy)).xyyxxyyy, ((VECTOR(int32_t, 4))(l_326.s7772)).wzxxzwyy, ((VECTOR(int32_t, 4))(l_327.s5314)).yywzzxxx))).s2));
                    unsigned int result = 0;
                    result += l_315;
                    int l_316_i0;
                    for (l_316_i0 = 0; l_316_i0 < 5; l_316_i0++) {
                        result += l_316[l_316_i0];
                    }
                    result += l_317;
                    result += l_318.w;
                    result += l_318.z;
                    result += l_318.y;
                    result += l_318.x;
                    result += l_319.y;
                    result += l_319.x;
                    result += l_320;
                    result += l_321;
                    result += l_322;
                    result += l_323;
                    result += l_324;
                    result += l_325.y;
                    result += l_325.x;
                    result += l_326.s7;
                    result += l_326.s6;
                    result += l_326.s5;
                    result += l_326.s4;
                    result += l_326.s3;
                    result += l_326.s2;
                    result += l_326.s1;
                    result += l_326.s0;
                    result += l_327.s7;
                    result += l_327.s6;
                    result += l_327.s5;
                    result += l_327.s4;
                    result += l_327.s3;
                    result += l_327.s2;
                    result += l_327.s1;
                    result += l_327.s0;
                    result += l_328;
                    atomic_add(&p_547->g_special_values[89 * get_linear_group_id() + 55], result);
                }
                else
                { /* block id: 123 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 126 */
                return p_66;
            }
        }
    }
    l_314.s5 ^= (safe_div_func_int32_t_s_s(((&p_547->g_34 != &p_547->g_3) >= (&p_547->g_101 == ((*l_335) = ((*l_333) = &p_547->g_101)))), (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_341.sa6c5)))).z, ((*l_267) , (((*l_342) ^= 0UL) , ((FAKE_DIVERGE(p_547->local_0_offset, get_local_id(0), 10) , ((*l_267) , GROUP_DIVERGE(0, 1))) <= (safe_mod_func_int8_t_s_s((((l_305.y = p_69) != (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((*l_356) = l_353) != &l_354[4]), (*l_267))) == (*l_267)), p_547->g_272.x)) >= 0xF0D7L), p_547->g_114.f1.f2.f0))) | 1L), (*l_267)))))))) , 0x012BL), 0x6B30L))));
    l_304 &= ((0x18L < (((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(0xA3L, p_547->g_143.x, 0UL, 0xEBL)).ywyyzyxz)).s3312445325516544))).s6 < ((*l_267) > (GROUP_DIVERGE(1, 1) ^ p_69)))) != p_66);
    return p_547->g_138.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_547->g_52 p_547->g_3 p_547->l_comm_values p_547->g_90 p_547->g_34 p_547->g_109 p_547->g_120 p_547->g_101 p_547->g_134 p_547->g_135 p_547->g_138 p_547->g_143 p_547->g_144 p_547->g_145 p_547->g_114.f1.f1 p_547->g_114.f1.f5 p_547->g_114.f1.f6 p_547->g_157 p_547->g_160 p_547->g_180 p_547->g_128 p_547->g_114.f1.f0 p_547->g_114.f1.f2.f4 p_547->g_192 p_547->g_212 p_547->g_224 p_547->g_235 p_547->g_238 p_547->g_114.f1.f7 p_547->g_114.f3 p_547->g_254
 * writes: p_547->g_101 p_547->g_90 p_547->g_34 p_547->g_128 p_547->g_120 p_547->g_114.f1.f6 p_547->g_149 p_547->g_144 p_547->g_192 p_547->g_109 p_547->g_114.f1.f2.f6 p_547->g_114.f1.f7 p_547->g_180 p_547->g_254
 */
int64_t  func_70(int32_t * p_71, uint32_t  p_72, int16_t  p_73, uint32_t  p_74, struct S5 * p_547)
{ /* block id: 17 */
    int32_t *l_92[6][3][4] = {{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}},{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}},{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}},{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}},{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}},{{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34},{&p_547->g_3,&p_547->g_3,&p_547->g_3,&p_547->g_34}}};
    int16_t *l_99 = &p_547->g_90;
    VECTOR(uint32_t, 4) l_139 = (VECTOR(uint32_t, 4))(0x2AEEF225L, (VECTOR(uint32_t, 2))(0x2AEEF225L, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 16) l_213 = (VECTOR(uint32_t, 16))(0x6CF9FAFDL, (VECTOR(uint32_t, 4))(0x6CF9FAFDL, (VECTOR(uint32_t, 2))(0x6CF9FAFDL, 0UL), 0UL), 0UL, 0x6CF9FAFDL, 0UL, (VECTOR(uint32_t, 2))(0x6CF9FAFDL, 0UL), (VECTOR(uint32_t, 2))(0x6CF9FAFDL, 0UL), 0x6CF9FAFDL, 0UL, 0x6CF9FAFDL, 0UL);
    int16_t l_246 = 0x2118L;
    int16_t l_248 = (-8L);
    int32_t l_249[2][9] = {{0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL},{0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL,0x3ED5398EL}};
    struct S0 *l_257[8] = {&p_547->g_259[6],&p_547->g_260,&p_547->g_259[6],&p_547->g_259[6],&p_547->g_260,&p_547->g_259[6],&p_547->g_259[6],&p_547->g_260};
    int8_t l_261 = (-1L);
    VECTOR(uint32_t, 8) l_262 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL);
    int i, j, k;
    for (p_72 = 13; (p_72 != 60); p_72++)
    { /* block id: 20 */
        int16_t *l_89[9][5] = {{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90},{&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90,&p_547->g_90}};
        uint32_t l_91 = 4294967293UL;
        int16_t **l_100[2][3][5] = {{{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0},{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0},{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0}},{{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0},{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0},{&l_89[7][0],&l_89[7][0],&l_89[8][0],(void*)0,(void*)0}}};
        struct S4 *l_113 = &p_547->g_114;
        uint32_t l_121 = 4294967286UL;
        VECTOR(uint16_t, 8) l_126 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF7CCL), 0xF7CCL), 0xF7CCL, 65535UL, 0xF7CCL);
        VECTOR(uint32_t, 2) l_140 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
        VECTOR(int32_t, 2) l_156 = (VECTOR(int32_t, 2))(0x161AB1BAL, (-3L));
        uint32_t l_158 = 4294967295UL;
        int32_t l_185[5] = {0L,0L,0L,0L,0L};
        int64_t l_186[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
        VECTOR(uint32_t, 16) l_214 = (VECTOR(uint32_t, 16))(0x775B68F6L, (VECTOR(uint32_t, 4))(0x775B68F6L, (VECTOR(uint32_t, 2))(0x775B68F6L, 4294967292UL), 4294967292UL), 4294967292UL, 0x775B68F6L, 4294967292UL, (VECTOR(uint32_t, 2))(0x775B68F6L, 4294967292UL), (VECTOR(uint32_t, 2))(0x775B68F6L, 4294967292UL), 0x775B68F6L, 4294967292UL, 0x775B68F6L, 4294967292UL);
        VECTOR(int16_t, 2) l_222 = (VECTOR(int16_t, 2))(0x694AL, 0x6EF7L);
        VECTOR(int16_t, 8) l_225 = (VECTOR(int16_t, 8))(0x72B0L, (VECTOR(int16_t, 4))(0x72B0L, (VECTOR(int16_t, 2))(0x72B0L, 1L), 1L), 1L, 0x72B0L, 1L);
        VECTOR(uint8_t, 4) l_232 = (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 0xEEL), 0xEEL);
        uint64_t *l_233 = (void*)0;
        int32_t l_247 = 7L;
        int i, j, k;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_547->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 62)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((l_91 = ((VECTOR(int16_t, 4))((-2L), 0x6CD8L, 0L, 0x4F2FL)).z) ^ (l_92[4][1][0] == ((safe_rshift_func_int8_t_s_s(p_547->g_52.sf, 2)) , p_71))) > ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_547->g_3 >= 255UL), (((p_547->g_101 = l_99) != &p_73) != ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x63L, 0xC5L)))).xyyxyyyy)).s4))), 7)) ^ 5UL)), GROUP_DIVERGE(2, 1))), 10))][(safe_mod_func_uint32_t_u_u(p_547->tid, 62))]));
        if ((p_547->l_comm_values[(safe_mod_func_uint32_t_u_u(p_547->tid, 62))] | GROUP_DIVERGE(1, 1)))
        { /* block id: 26 */
            uint16_t l_122 = 2UL;
            int32_t l_125 = 0L;
            int32_t l_152 = 1L;
            VECTOR(uint32_t, 16) l_165 = (VECTOR(uint32_t, 16))(0xEDC9C167L, (VECTOR(uint32_t, 4))(0xEDC9C167L, (VECTOR(uint32_t, 2))(0xEDC9C167L, 1UL), 1UL), 1UL, 0xEDC9C167L, 1UL, (VECTOR(uint32_t, 2))(0xEDC9C167L, 1UL), (VECTOR(uint32_t, 2))(0xEDC9C167L, 1UL), 0xEDC9C167L, 1UL, 0xEDC9C167L, 1UL);
            VECTOR(int32_t, 16) l_171 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x64248502L), 0x64248502L), 0x64248502L, 1L, 0x64248502L, (VECTOR(int32_t, 2))(1L, 0x64248502L), (VECTOR(int32_t, 2))(1L, 0x64248502L), 1L, 0x64248502L, 1L, 0x64248502L);
            int16_t l_187 = 1L;
            int i;
            for (p_547->g_90 = 20; (p_547->g_90 < (-2)); p_547->g_90 = safe_sub_func_uint64_t_u_u(p_547->g_90, 9))
            { /* block id: 29 */
                int8_t l_108 = 3L;
                if ((p_547->g_34 = ((void*)0 == l_99)))
                { /* block id: 31 */
                    p_547->g_34 |= (*p_71);
                    for (p_547->g_34 = 17; (p_547->g_34 >= (-27)); --p_547->g_34)
                    { /* block id: 35 */
                        if ((*p_71))
                            break;
                    }
                    for (l_91 = (-16); (l_91 > 22); ++l_91)
                    { /* block id: 40 */
                        if (l_108)
                            break;
                    }
                    return p_547->g_109;
                }
                else
                { /* block id: 44 */
                    int32_t l_110 = (-9L);
                    int32_t **l_111 = (void*)0;
                    int32_t **l_112 = &l_92[4][1][0];
                    struct S4 **l_115 = &l_113;
                    uint64_t *l_127 = &p_547->g_128;
                    VECTOR(int32_t, 8) l_133 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x07783C7BL), 0x07783C7BL), 0x07783C7BL, 8L, 0x07783C7BL);
                    int i;
                    l_110 = p_547->g_90;
                    (*l_112) = (void*)0;
                    (*l_115) = l_113;
                    p_547->g_120.s4 = (safe_rshift_func_int16_t_s_u((+(safe_sub_func_int64_t_s_s(((((VECTOR(int32_t, 2))(p_547->g_120.s65)).hi , ((l_121 ^ (*p_547->g_101)) , l_122)) & ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(4294967291UL, (safe_rshift_func_uint8_t_u_u(p_73, FAKE_DIVERGE(p_547->group_2_offset, get_group_id(2), 10))), 0xEA93CC3EL, 0x65C328A7L, ((VECTOR(uint32_t, 4))(((l_125 = (l_91 ^ FAKE_DIVERGE(p_547->local_1_offset, get_local_id(1), 10))) || ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(l_126.s24053313)).s42, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(8UL, 0x8AC6L)).xyyy)), 4UL, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(0x20DBL, 0x2EB8L)), (uint16_t)0x5922L))), 0UL)).s15, ((VECTOR(uint16_t, 2))(0xB066L, 0xE6CFL))))))), ((VECTOR(uint16_t, 4))(GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x4AF8L, ((((*l_127) = l_122) & l_110) > ((safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_133.s5222)).yxyxxywyyzwxxywx, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(p_547->g_134.s42947b03)).hi, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_547->g_135.zz)).xyxx)).hi)).xyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(6UL, 0x13L)), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(4UL, 5UL)).yxyyxyyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_547->g_138.wwzy)), ((VECTOR(uint32_t, 8))(0x4B2775F8L, ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(4294967295UL, 0UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_139.wy)), 0x97F025D1L, 4294967295UL)).lo, ((VECTOR(uint32_t, 4))(l_140.yyxy)).hi))), (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(p_547->g_143.wyzxyxwy)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(p_547->g_144.xxyyxyyyxxxyyyyy)).hi, ((VECTOR(int32_t, 8))(p_547->g_145.sfa6efe3c)))))))).s7, ((FAKE_DIVERGE(p_547->local_2_offset, get_local_id(2), 10) & p_547->g_114.f1.f1) != p_72))), l_122, 0x24CAB1FCL, 4294967295UL, 0x8C699ED9L)).s5, 0x3680C6D9L, 0x4CBC4FE3L, 2UL))))).s6, (*p_71))), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 4))(0xECL)), 0x21L)))).s50, ((VECTOR(uint8_t, 2))(0xC0L)))))))).yyyyyyxy)).lo)))))).zzwywzxz, ((VECTOR(int32_t, 8))(0x49BA8F97L))))).s06)).xyyyxxxyxyyyxyxy)))).lo, (int32_t)p_547->g_114.f1.f5))).s2413302611766010, ((VECTOR(int32_t, 16))(0x5FE65A55L))))).sb7)))), 0x5158D1DAL, 0x3846322FL)).yxwzzwzw, ((VECTOR(int32_t, 8))(1L))))).s5 , (*p_547->g_101)), l_122)) < p_547->g_114.f1.f6) || p_547->g_143.x), 0x1276L)) | 0xCE8C50E43E29B384L)), 0xAB24L, 0x5893L)).zyxxwwywwzwxzxzw)).s93)).even, 65535UL, 1UL)).x, 0x840EL, 1UL, ((VECTOR(uint16_t, 2))(0x65C5L)), 0UL, 0x697FL, ((VECTOR(uint16_t, 2))(65528UL)), GROUP_DIVERGE(0, 1), 0x6A30L, 1UL, 0x1488L, 0xA0F3L)), ((VECTOR(uint16_t, 16))(0xD203L))))).hi)))).s4050061201672301, ((VECTOR(uint16_t, 16))(0x551DL))))).sdd, ((VECTOR(uint16_t, 2))(0xC588L)), ((VECTOR(uint16_t, 2))(0x194DL))))), 4UL, 0x6599L, l_108, ((VECTOR(uint16_t, 2))(0UL)), 0xCD51L)), 0xC662L, ((VECTOR(uint16_t, 2))(65528UL)), GROUP_DIVERGE(2, 1), ((VECTOR(uint16_t, 2))(1UL)), 65528UL, 0x128AL)).s0557)).zxzzwxwy, ((VECTOR(uint16_t, 8))(0x6993L))))), p_72, ((VECTOR(uint16_t, 4))(0x5D8BL)), 3UL, 1UL, 65534UL)).sc), ((VECTOR(uint32_t, 2))(0x30A4445AL)), 0x8AFE7F47L)), 0x05C2F4BCL, ((VECTOR(uint32_t, 2))(8UL)), 0x335884F1L, 0x21537E41L, p_547->g_145.s1, 0x2D702745L, 0xCBA2C953L)).s8896, ((VECTOR(uint32_t, 4))(0xE382851AL)), ((VECTOR(uint32_t, 4))(0x26486C13L))))).odd, ((VECTOR(uint32_t, 2))(0x8E694F7BL))))).yxyyxyxxxxxyxyxx)).sd2, ((VECTOR(uint32_t, 2))(0xA0D4A109L)), ((VECTOR(uint32_t, 2))(4294967295UL))))).odd), 0x57FEED6841EEF570L))), 6));
                }
                for (p_547->g_114.f1.f6 = 14; (p_547->g_114.f1.f6 >= 20); p_547->g_114.f1.f6 = safe_add_func_uint64_t_u_u(p_547->g_114.f1.f6, 8))
                { /* block id: 54 */
                    uint32_t l_148 = 0x68622381L;
                    return l_148;
                }
                p_547->g_149 = (void*)0;
                p_547->g_120.s2 ^= (*p_71);
            }
            for (p_547->g_90 = (-10); (p_547->g_90 >= (-20)); --p_547->g_90)
            { /* block id: 62 */
                uint32_t l_153 = 4294967292UL;
                uint16_t *l_159[4];
                VECTOR(uint8_t, 8) l_168 = (VECTOR(uint8_t, 8))(0x6EL, (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 0xC9L), 0xC9L), 0xC9L, 0x6EL, 0xC9L);
                uint64_t *l_172 = &p_547->g_128;
                uint64_t **l_173 = &l_172;
                uint64_t *l_188 = (void*)0;
                uint64_t *l_189 = (void*)0;
                uint64_t *l_190 = (void*)0;
                uint64_t *l_191[1];
                int32_t *l_193 = &p_547->g_34;
                int i;
                for (i = 0; i < 4; i++)
                    l_159[i] = &p_547->g_114.f1.f6;
                for (i = 0; i < 1; i++)
                    l_191[i] = &p_547->g_192;
                l_153++;
                l_193 = func_75((+((p_547->g_192 &= ((((VECTOR(int32_t, 4))(l_156.xxxx)).x , (((FAKE_DIVERGE(p_547->local_1_offset, get_local_id(1), 10) != ((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 2))(0x10L, 1UL)), l_91, 0x17L, ((VECTOR(uint8_t, 2))(0x27L, 2UL)), 247UL)).s5) > ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(0x20BCL, (-4L))).xyyx, ((VECTOR(int16_t, 8))(p_547->g_157.se64e466c)).hi))).hi)), (((l_156.y = l_158) != (+(((VECTOR(int64_t, 8))(p_547->g_160.zwwwyxwy)).s3 | (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_165.s632e)))).y, (safe_add_func_int8_t_s_s(0L, ((VECTOR(uint8_t, 8))(l_168.s47322664)).s4)))), (safe_add_func_uint8_t_u_u(((!(((VECTOR(uint16_t, 4))(65526UL, 0x28E1L, 0x75ECL, 0x469BL)).w , (((((((VECTOR(int32_t, 2))(l_171.sb3)).hi , (((*l_173) = l_172) != &p_547->g_128)) , ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(p_547->g_3, (p_547->g_144.y = ((VECTOR(int32_t, 2))(p_547->g_180.yw)).hi))), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x3B9092B1L, (-1L))), (int32_t)(safe_lshift_func_int16_t_s_s((l_185[3] = (safe_lshift_func_uint8_t_u_s(((p_73 , p_547->g_128) <= l_171.s7), 6))), p_74))))).hi)), p_547->g_135.z)) | l_186[2])) & p_547->g_114.f1.f0) > (-4L)) != p_73))) || p_547->g_114.f1.f2.f4), GROUP_DIVERGE(1, 1)))))))) < l_121), (-1L), ((VECTOR(int16_t, 4))(0x0700L)), 0x070FL, l_187, ((VECTOR(int16_t, 2))(0x254DL)), 0x2A49L, p_72, 0x483AL, 0x2E2AL)).sd, ((VECTOR(int16_t, 4))(0x5139L)), ((VECTOR(int16_t, 2))(0x6816L)), 1L)).s3) , &l_185[0])) == &l_152)) > p_74)), p_547);
                l_171.s6 = 0x4B995FCCL;
            }
            for (p_547->g_109 = 15; (p_547->g_109 != 26); p_547->g_109++)
            { /* block id: 74 */
                int32_t **l_196[6][5] = {{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]},{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]},{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]},{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]},{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]},{&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0],&l_92[4][1][0]}};
                int i, j;
                p_71 = &l_185[3];
                return p_73;
            }
        }
        else
        { /* block id: 78 */
            uint32_t l_210 = 0UL;
            VECTOR(int16_t, 2) l_223 = (VECTOR(int16_t, 2))((-7L), 0x00EFL);
            uint64_t *l_234 = &p_547->g_192;
            struct S4 *l_236 = &p_547->g_237;
            uint8_t *l_241 = &p_547->g_114.f1.f7;
            int32_t l_242 = 0L;
            int32_t l_243 = (-5L);
            int32_t l_244 = 0x255FA5ECL;
            int32_t l_245[4][8][3] = {{{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L}},{{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L}},{{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L}},{{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L},{0x776D1B61L,(-1L),0x776D1B61L}}};
            int64_t l_251[9][6][3] = {{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}},{{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L},{0x5BF3D6430BFF102DL,0x46653E8852DD881AL,1L}}};
            int8_t l_252 = 1L;
            int64_t l_253[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_253[i] = 0x1B41CF9AAEA8AA2FL;
            for (p_547->g_128 = 0; (p_547->g_128 > 50); p_547->g_128 = safe_add_func_uint64_t_u_u(p_547->g_128, 2))
            { /* block id: 81 */
                int8_t *l_201 = &p_547->g_114.f1.f2.f6;
                VECTOR(uint32_t, 8) l_211 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 9UL), 9UL), 9UL, 4294967295UL, 9UL);
                int i;
                atomic_add(&p_547->g_atomic_reduction[get_linear_group_id()], (safe_lshift_func_int8_t_s_u(((*l_201) = 8L), ((p_74 || ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(6UL, (l_210 == 0L), 4294967295UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x62C3DB62L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(l_211.s21403254)).s51, ((VECTOR(uint32_t, 4))(p_547->g_212.zyzw)).odd))), 4294967295UL, 0x849FEBDCL)), 0x10736476L, 0xEA5D8568L, ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 4))(l_213.s0ae5)).yzyxxywx, ((VECTOR(uint32_t, 4))(l_214.sdfd2)).zxxyzxzy))), 4294967294UL)).s0e)).hi, 0x5DEB6486L, 0UL)).even)))), 4UL, 0x968E2C01L, 0x64882939L)).s3, l_186[2])), p_73)) >= (8UL == (safe_sub_func_int32_t_s_s(l_211.s7, (*p_71)))))) , 3UL))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_547->v_collective += p_547->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            p_547->g_180.x &= (safe_div_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(0L)), 3)) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x23CC0CA2B1C9C6F3L, ((VECTOR(int64_t, 8))(0x7D20CEAFF0F1770DL, 1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_222.yyxy)).hi)), ((VECTOR(int16_t, 4))(l_223.xxxy)).y, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(p_547->g_224.s21)).xxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_225.s72)).yyyxxxxy)).lo))).even)), 0x0821L, 0L)), 0x581FL)).s6 > ((p_73 , ((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((((VECTOR(uint8_t, 8))(l_232.wzzzzzxx)).s1 , l_233) == l_234) > (((l_223.x > ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_547->g_235.yxyyyyxy)).s7563240204220337)).se) , l_236) == l_236)), 0)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_547->g_238.s57001604)).even)).xwxzwywx)))).s05)).odd)) , ((safe_rshift_func_uint8_t_u_u(((*l_241) ^= l_222.x), p_547->g_52.s3)) == (-1L))) | l_242) ^ 0UL)) , 1L)) , l_210) | 7UL), p_547->g_134.s7, ((VECTOR(int64_t, 2))(7L)), l_223.y, ((VECTOR(int64_t, 2))(0x580D957DEAFFB366L)), 0x189D3A3C46B0DBF9L)).s72)), ((VECTOR(int64_t, 4))(1L)))), ((VECTOR(int64_t, 2))(0x539717E3722A43CCL)), p_547->g_114.f3, (-9L), ((VECTOR(int64_t, 2))((-2L))), 0x34F9B2877FC88C12L)).s5099)).z , p_74)) , p_547->g_143.y) || FAKE_DIVERGE(p_547->global_1_offset, get_global_id(1), 10)), p_547->g_160.z));
            --p_547->g_254;
        }
    }
    l_257[1] = (void*)0;
    l_262.s3++;
    for (p_74 = 15; (p_74 > 34); p_74 = safe_add_func_uint8_t_u_u(p_74, 6))
    { /* block id: 94 */
        atomic_xor(&p_547->l_atomic_reduction[0], (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x0C1112C315CE8A77L, 0x5750732753B200ADL)).xyyx)).lo)).even > (&l_248 == (void*)0)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_547->v_collective += p_547->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        return p_547->g_120.s3;
    }
    return p_72;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_75(uint16_t  p_76, struct S5 * p_547)
{ /* block id: 14 */
    uint32_t l_81[10] = {0xC4895D34L,8UL,0xC4895D34L,0xC4895D34L,8UL,0xC4895D34L,0xC4895D34L,8UL,0xC4895D34L,0xC4895D34L};
    int32_t *l_84[5][1] = {{&p_547->g_3},{&p_547->g_3},{&p_547->g_3},{&p_547->g_3},{&p_547->g_3}};
    int i, j;
    --l_81[2];
    return l_84[4][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[62];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 62; i++)
            l_comm_values[i] = 1;
    struct S5 c_548;
    struct S5* p_547 = &c_548;
    struct S5 c_549 = {
        0x5F1ADB2BL, // p_547->g_2
        0x6D3C15D0L, // p_547->g_3
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967287UL), 4294967287UL), // p_547->g_31
        0x0F3BBA68L, // p_547->g_34
        (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 1UL), 1UL), 1UL, 0x5FL, 1UL), // p_547->g_51
        (VECTOR(uint8_t, 16))(0xBDL, (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 9UL), 9UL), 9UL, 0xBDL, 9UL, (VECTOR(uint8_t, 2))(0xBDL, 9UL), (VECTOR(uint8_t, 2))(0xBDL, 9UL), 0xBDL, 9UL, 0xBDL, 9UL), // p_547->g_52
        0L, // p_547->g_90
        &p_547->g_90, // p_547->g_101
        0x4FBCE554L, // p_547->g_109
        {0x831ADEC5L,{0x3B53L,0x338E40FFL,{0xF0E5992BL,0x28A4BD3CL,1L,1L,0xD153B42EBA385945L,18446744073709551615UL,0x40L,0xBB7B1AC9L},1L,0L,-1L,65534UL,0x6CL,4294967294UL,65535UL},-1L,0x71361DE361C4DE7EL}, // p_547->g_114
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x0FC2DDDAL), 0x0FC2DDDAL), 0x0FC2DDDAL, 7L, 0x0FC2DDDAL), // p_547->g_120
        3UL, // p_547->g_128
        (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x7F2BL), 0x7F2BL), 0x7F2BL, 8L, 0x7F2BL, (VECTOR(int16_t, 2))(8L, 0x7F2BL), (VECTOR(int16_t, 2))(8L, 0x7F2BL), 8L, 0x7F2BL, 8L, 0x7F2BL), // p_547->g_134
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x79L), 0x79L), // p_547->g_135
        (VECTOR(uint32_t, 4))(0x4C349BFDL, (VECTOR(uint32_t, 2))(0x4C349BFDL, 0xB40E0213L), 0xB40E0213L), // p_547->g_138
        (VECTOR(int32_t, 4))(0x7F6A51DAL, (VECTOR(int32_t, 2))(0x7F6A51DAL, 0x5C7EDEB1L), 0x5C7EDEB1L), // p_547->g_143
        (VECTOR(int32_t, 2))(0x0E7FB409L, 0L), // p_547->g_144
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_547->g_145
        (void*)0, // p_547->g_149
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-8L)), (-8L)), (-8L), 7L, (-8L), (VECTOR(int16_t, 2))(7L, (-8L)), (VECTOR(int16_t, 2))(7L, (-8L)), 7L, (-8L), 7L, (-8L)), // p_547->g_157
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-7L)), (-7L)), // p_547->g_160
        (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), // p_547->g_180
        18446744073709551615UL, // p_547->g_192
        (VECTOR(uint32_t, 4))(0x39558DB1L, (VECTOR(uint32_t, 2))(0x39558DB1L, 0x60447B2EL), 0x60447B2EL), // p_547->g_212
        (VECTOR(int16_t, 8))(0x6A2DL, (VECTOR(int16_t, 4))(0x6A2DL, (VECTOR(int16_t, 2))(0x6A2DL, 8L), 8L), 8L, 0x6A2DL, 8L), // p_547->g_224
        (VECTOR(int32_t, 2))(0x50E9BAB3L, (-1L)), // p_547->g_235
        {3UL,{0x4277L,0x1DDDE4CAL,{4UL,0x1BB1D7BBL,0x051E2B1555576E56L,0x6A1B5D2C1E1AD130L,18446744073709551609UL,0xA9A9F9E3E255A649L,-6L,4294967287UL},0x17D5L,0x227EF067L,0x4AL,0x07F5L,0x30L,0xD5EA4EE1L,0x3D06L},0x09FBC4ABL,9L}, // p_547->g_237
        (VECTOR(int8_t, 8))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0L), 0L), 0L, 0x7BL, 0L), // p_547->g_238
        (VECTOR(int32_t, 2))(6L, 4L), // p_547->g_250
        0x5766L, // p_547->g_254
        {0xEFD1B7BAL,-1L,-10L,0x25C60533C7EF740CL,0x729B185F9EB941F9L,18446744073709551613UL,0x15L,7UL}, // p_547->g_258
        {{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL},{0x3FD91E4EL,0x2F7AB69DL,0x677C2C50F563A9C1L,0x6C0E96209E920866L,18446744073709551615UL,0xDCFD43249A36EA43L,-9L,0xB563EB4AL}}, // p_547->g_259
        {1UL,0x74DCA163L,0x41802B604514AF70L,0x23419B1AD99CC62DL,18446744073709551615UL,0UL,-1L,0xB64406B3L}, // p_547->g_260
        (VECTOR(int64_t, 2))(0x4C09D1BB1C3D6AC9L, (-3L)), // p_547->g_272
        {0xAE3C1DB9L,{0x1E69L,0x3149704FL,{0x0FFBBD87L,1L,-1L,0x34C7D44414B9A09BL,0x192D791E0D07604EL,0x811846E456EF7709L,1L,4294967286UL},0x48D7L,1L,0x45L,0xC5DCL,1UL,0x8F396A96L,65535UL},0x2C4C70C9L,0x1874E2A4D26B6040L}, // p_547->g_355
        (VECTOR(int32_t, 2))((-3L), 0x48E34DE5L), // p_547->g_357
        (void*)0, // p_547->g_379
        &p_547->g_114.f1.f6, // p_547->g_382
        &p_547->g_382, // p_547->g_381
        (VECTOR(int8_t, 8))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, (-1L)), (-1L)), (-1L), 0x54L, (-1L)), // p_547->g_396
        {{4294967295UL,8L,0x542F9B00F1CF9177L,0x6BAC08165D1BEF97L,2UL,0x1FB66F4B0764AED3L,0x1BL,0x7BC5D0B2L},{4294967295UL,0L,0x276E2F633A3E4B6AL,-10L,0xEE9CA4D33D540861L,0x2719BC136A5297B9L,1L,0xF5CFD49CL}}, // p_547->g_403
        {{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}},{{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{0x4363D06FL,{-1L,0x92F65230L,{7UL,0L,0x5B1885C84626D0ECL,1L,4UL,4UL,0x6FL,1UL},1L,-3L,9L,1UL,0xA1L,0xCB1CCDE5L,65535UL},0x6E2EDD48L,0x095AB109A75EAF45L},{1UL,{0x5FEBL,0x51098FA8L,{1UL,1L,0x4217DB86CECB4056L,0x52D8BEFCB230E7A4L,0x64FEEE750804B5F0L,1UL,-7L,3UL},-1L,1L,0x05L,65526UL,255UL,0UL,65532UL},0x1C01581EL,-1L}}}, // p_547->g_411
        &p_547->g_411[4][1], // p_547->g_410
        {&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410,&p_547->g_410}, // p_547->g_409
        &p_547->g_409[7], // p_547->g_408
        (VECTOR(int16_t, 4))(0x770AL, (VECTOR(int16_t, 2))(0x770AL, 2L), 2L), // p_547->g_416
        1UL, // p_547->g_421
        &p_547->g_421, // p_547->g_420
        &p_547->g_420, // p_547->g_419
        (void*)0, // p_547->g_425
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_547->g_426
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_547->g_428
        (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L), // p_547->g_436
        {&p_547->g_114.f1,&p_547->g_355.f1,&p_547->g_114.f1,&p_547->g_114.f1,&p_547->g_355.f1,&p_547->g_114.f1,&p_547->g_114.f1,&p_547->g_355.f1,&p_547->g_114.f1,&p_547->g_114.f1}, // p_547->g_450
        {&p_547->g_450[5],(void*)0,&p_547->g_450[1],(void*)0,&p_547->g_450[5],&p_547->g_450[5],(void*)0,&p_547->g_450[1],(void*)0,&p_547->g_450[5]}, // p_547->g_449
        (void*)0, // p_547->g_451
        {4294967287UL,{0x7274L,0xBFC8358DL,{4294967295UL,-1L,-1L,0x01E22FB7C15EDEFEL,18446744073709551615UL,0x814A312EE5800D2CL,6L,0x21A305E4L},-2L,4L,0x5BL,0x30D6L,0x69L,0xEF3B8601L,0UL},6L,0x6B8721433354E299L}, // p_547->g_463
        {0xDEBAB821L,{0x5CD4L,6UL,{1UL,0x1F403DEBL,0x34A25A8826BA2BABL,-1L,0UL,0x30F5FC176C815F25L,0x35L,0xA20F3496L},6L,0L,0L,0x4D7EL,252UL,4UL,1UL},0x1AE029BAL,0x3E1E88A2CA387836L}, // p_547->g_464
        {2UL,2UL,2UL,2UL,2UL}, // p_547->g_465
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_547->g_490
        0xC0L, // p_547->g_503
        (VECTOR(uint32_t, 16))(0xB122B465L, (VECTOR(uint32_t, 4))(0xB122B465L, (VECTOR(uint32_t, 2))(0xB122B465L, 0x38EF0024L), 0x38EF0024L), 0x38EF0024L, 0xB122B465L, 0x38EF0024L, (VECTOR(uint32_t, 2))(0xB122B465L, 0x38EF0024L), (VECTOR(uint32_t, 2))(0xB122B465L, 0x38EF0024L), 0xB122B465L, 0x38EF0024L, 0xB122B465L, 0x38EF0024L), // p_547->g_504
        (VECTOR(int64_t, 4))(0x79BECD2BAC0D0743L, (VECTOR(int64_t, 2))(0x79BECD2BAC0D0743L, 7L), 7L), // p_547->g_509
        (-1L), // p_547->g_515
        &p_547->g_515, // p_547->g_514
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 1L), 1L), // p_547->g_516
        (void*)0, // p_547->g_535
        &p_547->g_34, // p_547->g_537
        &p_547->g_537, // p_547->g_536
        (VECTOR(uint16_t, 2))(65528UL, 1UL), // p_547->g_542
        0, // p_547->v_collective
        sequence_input[get_global_id(0)], // p_547->global_0_offset
        sequence_input[get_global_id(1)], // p_547->global_1_offset
        sequence_input[get_global_id(2)], // p_547->global_2_offset
        sequence_input[get_local_id(0)], // p_547->local_0_offset
        sequence_input[get_local_id(1)], // p_547->local_1_offset
        sequence_input[get_local_id(2)], // p_547->local_2_offset
        sequence_input[get_group_id(0)], // p_547->group_0_offset
        sequence_input[get_group_id(1)], // p_547->group_1_offset
        sequence_input[get_group_id(2)], // p_547->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 62)), permutations[0][get_linear_local_id()])), // p_547->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_548 = c_549;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_547);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_547->g_2, "p_547->g_2", print_hash_value);
    transparent_crc(p_547->g_3, "p_547->g_3", print_hash_value);
    transparent_crc(p_547->g_31.x, "p_547->g_31.x", print_hash_value);
    transparent_crc(p_547->g_31.y, "p_547->g_31.y", print_hash_value);
    transparent_crc(p_547->g_31.z, "p_547->g_31.z", print_hash_value);
    transparent_crc(p_547->g_31.w, "p_547->g_31.w", print_hash_value);
    transparent_crc(p_547->g_34, "p_547->g_34", print_hash_value);
    transparent_crc(p_547->g_51.s0, "p_547->g_51.s0", print_hash_value);
    transparent_crc(p_547->g_51.s1, "p_547->g_51.s1", print_hash_value);
    transparent_crc(p_547->g_51.s2, "p_547->g_51.s2", print_hash_value);
    transparent_crc(p_547->g_51.s3, "p_547->g_51.s3", print_hash_value);
    transparent_crc(p_547->g_51.s4, "p_547->g_51.s4", print_hash_value);
    transparent_crc(p_547->g_51.s5, "p_547->g_51.s5", print_hash_value);
    transparent_crc(p_547->g_51.s6, "p_547->g_51.s6", print_hash_value);
    transparent_crc(p_547->g_51.s7, "p_547->g_51.s7", print_hash_value);
    transparent_crc(p_547->g_52.s0, "p_547->g_52.s0", print_hash_value);
    transparent_crc(p_547->g_52.s1, "p_547->g_52.s1", print_hash_value);
    transparent_crc(p_547->g_52.s2, "p_547->g_52.s2", print_hash_value);
    transparent_crc(p_547->g_52.s3, "p_547->g_52.s3", print_hash_value);
    transparent_crc(p_547->g_52.s4, "p_547->g_52.s4", print_hash_value);
    transparent_crc(p_547->g_52.s5, "p_547->g_52.s5", print_hash_value);
    transparent_crc(p_547->g_52.s6, "p_547->g_52.s6", print_hash_value);
    transparent_crc(p_547->g_52.s7, "p_547->g_52.s7", print_hash_value);
    transparent_crc(p_547->g_52.s8, "p_547->g_52.s8", print_hash_value);
    transparent_crc(p_547->g_52.s9, "p_547->g_52.s9", print_hash_value);
    transparent_crc(p_547->g_52.sa, "p_547->g_52.sa", print_hash_value);
    transparent_crc(p_547->g_52.sb, "p_547->g_52.sb", print_hash_value);
    transparent_crc(p_547->g_52.sc, "p_547->g_52.sc", print_hash_value);
    transparent_crc(p_547->g_52.sd, "p_547->g_52.sd", print_hash_value);
    transparent_crc(p_547->g_52.se, "p_547->g_52.se", print_hash_value);
    transparent_crc(p_547->g_52.sf, "p_547->g_52.sf", print_hash_value);
    transparent_crc(p_547->g_90, "p_547->g_90", print_hash_value);
    transparent_crc(p_547->g_109, "p_547->g_109", print_hash_value);
    transparent_crc(p_547->g_114.f0, "p_547->g_114.f0", print_hash_value);
    transparent_crc(p_547->g_114.f1.f0, "p_547->g_114.f1.f0", print_hash_value);
    transparent_crc(p_547->g_114.f1.f1, "p_547->g_114.f1.f1", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f0, "p_547->g_114.f1.f2.f0", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f1, "p_547->g_114.f1.f2.f1", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f2, "p_547->g_114.f1.f2.f2", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f3, "p_547->g_114.f1.f2.f3", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f4, "p_547->g_114.f1.f2.f4", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f5, "p_547->g_114.f1.f2.f5", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f6, "p_547->g_114.f1.f2.f6", print_hash_value);
    transparent_crc(p_547->g_114.f1.f2.f7, "p_547->g_114.f1.f2.f7", print_hash_value);
    transparent_crc(p_547->g_114.f1.f3, "p_547->g_114.f1.f3", print_hash_value);
    transparent_crc(p_547->g_114.f1.f4, "p_547->g_114.f1.f4", print_hash_value);
    transparent_crc(p_547->g_114.f1.f5, "p_547->g_114.f1.f5", print_hash_value);
    transparent_crc(p_547->g_114.f1.f6, "p_547->g_114.f1.f6", print_hash_value);
    transparent_crc(p_547->g_114.f1.f7, "p_547->g_114.f1.f7", print_hash_value);
    transparent_crc(p_547->g_114.f1.f8, "p_547->g_114.f1.f8", print_hash_value);
    transparent_crc(p_547->g_114.f1.f9, "p_547->g_114.f1.f9", print_hash_value);
    transparent_crc(p_547->g_114.f2, "p_547->g_114.f2", print_hash_value);
    transparent_crc(p_547->g_114.f3, "p_547->g_114.f3", print_hash_value);
    transparent_crc(p_547->g_120.s0, "p_547->g_120.s0", print_hash_value);
    transparent_crc(p_547->g_120.s1, "p_547->g_120.s1", print_hash_value);
    transparent_crc(p_547->g_120.s2, "p_547->g_120.s2", print_hash_value);
    transparent_crc(p_547->g_120.s3, "p_547->g_120.s3", print_hash_value);
    transparent_crc(p_547->g_120.s4, "p_547->g_120.s4", print_hash_value);
    transparent_crc(p_547->g_120.s5, "p_547->g_120.s5", print_hash_value);
    transparent_crc(p_547->g_120.s6, "p_547->g_120.s6", print_hash_value);
    transparent_crc(p_547->g_120.s7, "p_547->g_120.s7", print_hash_value);
    transparent_crc(p_547->g_128, "p_547->g_128", print_hash_value);
    transparent_crc(p_547->g_134.s0, "p_547->g_134.s0", print_hash_value);
    transparent_crc(p_547->g_134.s1, "p_547->g_134.s1", print_hash_value);
    transparent_crc(p_547->g_134.s2, "p_547->g_134.s2", print_hash_value);
    transparent_crc(p_547->g_134.s3, "p_547->g_134.s3", print_hash_value);
    transparent_crc(p_547->g_134.s4, "p_547->g_134.s4", print_hash_value);
    transparent_crc(p_547->g_134.s5, "p_547->g_134.s5", print_hash_value);
    transparent_crc(p_547->g_134.s6, "p_547->g_134.s6", print_hash_value);
    transparent_crc(p_547->g_134.s7, "p_547->g_134.s7", print_hash_value);
    transparent_crc(p_547->g_134.s8, "p_547->g_134.s8", print_hash_value);
    transparent_crc(p_547->g_134.s9, "p_547->g_134.s9", print_hash_value);
    transparent_crc(p_547->g_134.sa, "p_547->g_134.sa", print_hash_value);
    transparent_crc(p_547->g_134.sb, "p_547->g_134.sb", print_hash_value);
    transparent_crc(p_547->g_134.sc, "p_547->g_134.sc", print_hash_value);
    transparent_crc(p_547->g_134.sd, "p_547->g_134.sd", print_hash_value);
    transparent_crc(p_547->g_134.se, "p_547->g_134.se", print_hash_value);
    transparent_crc(p_547->g_134.sf, "p_547->g_134.sf", print_hash_value);
    transparent_crc(p_547->g_135.x, "p_547->g_135.x", print_hash_value);
    transparent_crc(p_547->g_135.y, "p_547->g_135.y", print_hash_value);
    transparent_crc(p_547->g_135.z, "p_547->g_135.z", print_hash_value);
    transparent_crc(p_547->g_135.w, "p_547->g_135.w", print_hash_value);
    transparent_crc(p_547->g_138.x, "p_547->g_138.x", print_hash_value);
    transparent_crc(p_547->g_138.y, "p_547->g_138.y", print_hash_value);
    transparent_crc(p_547->g_138.z, "p_547->g_138.z", print_hash_value);
    transparent_crc(p_547->g_138.w, "p_547->g_138.w", print_hash_value);
    transparent_crc(p_547->g_143.x, "p_547->g_143.x", print_hash_value);
    transparent_crc(p_547->g_143.y, "p_547->g_143.y", print_hash_value);
    transparent_crc(p_547->g_143.z, "p_547->g_143.z", print_hash_value);
    transparent_crc(p_547->g_143.w, "p_547->g_143.w", print_hash_value);
    transparent_crc(p_547->g_144.x, "p_547->g_144.x", print_hash_value);
    transparent_crc(p_547->g_144.y, "p_547->g_144.y", print_hash_value);
    transparent_crc(p_547->g_145.s0, "p_547->g_145.s0", print_hash_value);
    transparent_crc(p_547->g_145.s1, "p_547->g_145.s1", print_hash_value);
    transparent_crc(p_547->g_145.s2, "p_547->g_145.s2", print_hash_value);
    transparent_crc(p_547->g_145.s3, "p_547->g_145.s3", print_hash_value);
    transparent_crc(p_547->g_145.s4, "p_547->g_145.s4", print_hash_value);
    transparent_crc(p_547->g_145.s5, "p_547->g_145.s5", print_hash_value);
    transparent_crc(p_547->g_145.s6, "p_547->g_145.s6", print_hash_value);
    transparent_crc(p_547->g_145.s7, "p_547->g_145.s7", print_hash_value);
    transparent_crc(p_547->g_145.s8, "p_547->g_145.s8", print_hash_value);
    transparent_crc(p_547->g_145.s9, "p_547->g_145.s9", print_hash_value);
    transparent_crc(p_547->g_145.sa, "p_547->g_145.sa", print_hash_value);
    transparent_crc(p_547->g_145.sb, "p_547->g_145.sb", print_hash_value);
    transparent_crc(p_547->g_145.sc, "p_547->g_145.sc", print_hash_value);
    transparent_crc(p_547->g_145.sd, "p_547->g_145.sd", print_hash_value);
    transparent_crc(p_547->g_145.se, "p_547->g_145.se", print_hash_value);
    transparent_crc(p_547->g_145.sf, "p_547->g_145.sf", print_hash_value);
    transparent_crc(p_547->g_157.s0, "p_547->g_157.s0", print_hash_value);
    transparent_crc(p_547->g_157.s1, "p_547->g_157.s1", print_hash_value);
    transparent_crc(p_547->g_157.s2, "p_547->g_157.s2", print_hash_value);
    transparent_crc(p_547->g_157.s3, "p_547->g_157.s3", print_hash_value);
    transparent_crc(p_547->g_157.s4, "p_547->g_157.s4", print_hash_value);
    transparent_crc(p_547->g_157.s5, "p_547->g_157.s5", print_hash_value);
    transparent_crc(p_547->g_157.s6, "p_547->g_157.s6", print_hash_value);
    transparent_crc(p_547->g_157.s7, "p_547->g_157.s7", print_hash_value);
    transparent_crc(p_547->g_157.s8, "p_547->g_157.s8", print_hash_value);
    transparent_crc(p_547->g_157.s9, "p_547->g_157.s9", print_hash_value);
    transparent_crc(p_547->g_157.sa, "p_547->g_157.sa", print_hash_value);
    transparent_crc(p_547->g_157.sb, "p_547->g_157.sb", print_hash_value);
    transparent_crc(p_547->g_157.sc, "p_547->g_157.sc", print_hash_value);
    transparent_crc(p_547->g_157.sd, "p_547->g_157.sd", print_hash_value);
    transparent_crc(p_547->g_157.se, "p_547->g_157.se", print_hash_value);
    transparent_crc(p_547->g_157.sf, "p_547->g_157.sf", print_hash_value);
    transparent_crc(p_547->g_160.x, "p_547->g_160.x", print_hash_value);
    transparent_crc(p_547->g_160.y, "p_547->g_160.y", print_hash_value);
    transparent_crc(p_547->g_160.z, "p_547->g_160.z", print_hash_value);
    transparent_crc(p_547->g_160.w, "p_547->g_160.w", print_hash_value);
    transparent_crc(p_547->g_180.x, "p_547->g_180.x", print_hash_value);
    transparent_crc(p_547->g_180.y, "p_547->g_180.y", print_hash_value);
    transparent_crc(p_547->g_180.z, "p_547->g_180.z", print_hash_value);
    transparent_crc(p_547->g_180.w, "p_547->g_180.w", print_hash_value);
    transparent_crc(p_547->g_192, "p_547->g_192", print_hash_value);
    transparent_crc(p_547->g_212.x, "p_547->g_212.x", print_hash_value);
    transparent_crc(p_547->g_212.y, "p_547->g_212.y", print_hash_value);
    transparent_crc(p_547->g_212.z, "p_547->g_212.z", print_hash_value);
    transparent_crc(p_547->g_212.w, "p_547->g_212.w", print_hash_value);
    transparent_crc(p_547->g_224.s0, "p_547->g_224.s0", print_hash_value);
    transparent_crc(p_547->g_224.s1, "p_547->g_224.s1", print_hash_value);
    transparent_crc(p_547->g_224.s2, "p_547->g_224.s2", print_hash_value);
    transparent_crc(p_547->g_224.s3, "p_547->g_224.s3", print_hash_value);
    transparent_crc(p_547->g_224.s4, "p_547->g_224.s4", print_hash_value);
    transparent_crc(p_547->g_224.s5, "p_547->g_224.s5", print_hash_value);
    transparent_crc(p_547->g_224.s6, "p_547->g_224.s6", print_hash_value);
    transparent_crc(p_547->g_224.s7, "p_547->g_224.s7", print_hash_value);
    transparent_crc(p_547->g_235.x, "p_547->g_235.x", print_hash_value);
    transparent_crc(p_547->g_235.y, "p_547->g_235.y", print_hash_value);
    transparent_crc(p_547->g_237.f0, "p_547->g_237.f0", print_hash_value);
    transparent_crc(p_547->g_237.f1.f0, "p_547->g_237.f1.f0", print_hash_value);
    transparent_crc(p_547->g_237.f1.f1, "p_547->g_237.f1.f1", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f0, "p_547->g_237.f1.f2.f0", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f1, "p_547->g_237.f1.f2.f1", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f2, "p_547->g_237.f1.f2.f2", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f3, "p_547->g_237.f1.f2.f3", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f4, "p_547->g_237.f1.f2.f4", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f5, "p_547->g_237.f1.f2.f5", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f6, "p_547->g_237.f1.f2.f6", print_hash_value);
    transparent_crc(p_547->g_237.f1.f2.f7, "p_547->g_237.f1.f2.f7", print_hash_value);
    transparent_crc(p_547->g_237.f1.f3, "p_547->g_237.f1.f3", print_hash_value);
    transparent_crc(p_547->g_237.f1.f4, "p_547->g_237.f1.f4", print_hash_value);
    transparent_crc(p_547->g_237.f1.f5, "p_547->g_237.f1.f5", print_hash_value);
    transparent_crc(p_547->g_237.f1.f6, "p_547->g_237.f1.f6", print_hash_value);
    transparent_crc(p_547->g_237.f1.f7, "p_547->g_237.f1.f7", print_hash_value);
    transparent_crc(p_547->g_237.f1.f8, "p_547->g_237.f1.f8", print_hash_value);
    transparent_crc(p_547->g_237.f1.f9, "p_547->g_237.f1.f9", print_hash_value);
    transparent_crc(p_547->g_237.f2, "p_547->g_237.f2", print_hash_value);
    transparent_crc(p_547->g_237.f3, "p_547->g_237.f3", print_hash_value);
    transparent_crc(p_547->g_238.s0, "p_547->g_238.s0", print_hash_value);
    transparent_crc(p_547->g_238.s1, "p_547->g_238.s1", print_hash_value);
    transparent_crc(p_547->g_238.s2, "p_547->g_238.s2", print_hash_value);
    transparent_crc(p_547->g_238.s3, "p_547->g_238.s3", print_hash_value);
    transparent_crc(p_547->g_238.s4, "p_547->g_238.s4", print_hash_value);
    transparent_crc(p_547->g_238.s5, "p_547->g_238.s5", print_hash_value);
    transparent_crc(p_547->g_238.s6, "p_547->g_238.s6", print_hash_value);
    transparent_crc(p_547->g_238.s7, "p_547->g_238.s7", print_hash_value);
    transparent_crc(p_547->g_250.x, "p_547->g_250.x", print_hash_value);
    transparent_crc(p_547->g_250.y, "p_547->g_250.y", print_hash_value);
    transparent_crc(p_547->g_254, "p_547->g_254", print_hash_value);
    transparent_crc(p_547->g_258.f0, "p_547->g_258.f0", print_hash_value);
    transparent_crc(p_547->g_258.f1, "p_547->g_258.f1", print_hash_value);
    transparent_crc(p_547->g_258.f2, "p_547->g_258.f2", print_hash_value);
    transparent_crc(p_547->g_258.f3, "p_547->g_258.f3", print_hash_value);
    transparent_crc(p_547->g_258.f4, "p_547->g_258.f4", print_hash_value);
    transparent_crc(p_547->g_258.f5, "p_547->g_258.f5", print_hash_value);
    transparent_crc(p_547->g_258.f6, "p_547->g_258.f6", print_hash_value);
    transparent_crc(p_547->g_258.f7, "p_547->g_258.f7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_547->g_259[i].f0, "p_547->g_259[i].f0", print_hash_value);
        transparent_crc(p_547->g_259[i].f1, "p_547->g_259[i].f1", print_hash_value);
        transparent_crc(p_547->g_259[i].f2, "p_547->g_259[i].f2", print_hash_value);
        transparent_crc(p_547->g_259[i].f3, "p_547->g_259[i].f3", print_hash_value);
        transparent_crc(p_547->g_259[i].f4, "p_547->g_259[i].f4", print_hash_value);
        transparent_crc(p_547->g_259[i].f5, "p_547->g_259[i].f5", print_hash_value);
        transparent_crc(p_547->g_259[i].f6, "p_547->g_259[i].f6", print_hash_value);
        transparent_crc(p_547->g_259[i].f7, "p_547->g_259[i].f7", print_hash_value);

    }
    transparent_crc(p_547->g_260.f0, "p_547->g_260.f0", print_hash_value);
    transparent_crc(p_547->g_260.f1, "p_547->g_260.f1", print_hash_value);
    transparent_crc(p_547->g_260.f2, "p_547->g_260.f2", print_hash_value);
    transparent_crc(p_547->g_260.f3, "p_547->g_260.f3", print_hash_value);
    transparent_crc(p_547->g_260.f4, "p_547->g_260.f4", print_hash_value);
    transparent_crc(p_547->g_260.f5, "p_547->g_260.f5", print_hash_value);
    transparent_crc(p_547->g_260.f6, "p_547->g_260.f6", print_hash_value);
    transparent_crc(p_547->g_260.f7, "p_547->g_260.f7", print_hash_value);
    transparent_crc(p_547->g_272.x, "p_547->g_272.x", print_hash_value);
    transparent_crc(p_547->g_272.y, "p_547->g_272.y", print_hash_value);
    transparent_crc(p_547->g_355.f0, "p_547->g_355.f0", print_hash_value);
    transparent_crc(p_547->g_355.f1.f0, "p_547->g_355.f1.f0", print_hash_value);
    transparent_crc(p_547->g_355.f1.f1, "p_547->g_355.f1.f1", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f0, "p_547->g_355.f1.f2.f0", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f1, "p_547->g_355.f1.f2.f1", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f2, "p_547->g_355.f1.f2.f2", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f3, "p_547->g_355.f1.f2.f3", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f4, "p_547->g_355.f1.f2.f4", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f5, "p_547->g_355.f1.f2.f5", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f6, "p_547->g_355.f1.f2.f6", print_hash_value);
    transparent_crc(p_547->g_355.f1.f2.f7, "p_547->g_355.f1.f2.f7", print_hash_value);
    transparent_crc(p_547->g_355.f1.f3, "p_547->g_355.f1.f3", print_hash_value);
    transparent_crc(p_547->g_355.f1.f4, "p_547->g_355.f1.f4", print_hash_value);
    transparent_crc(p_547->g_355.f1.f5, "p_547->g_355.f1.f5", print_hash_value);
    transparent_crc(p_547->g_355.f1.f6, "p_547->g_355.f1.f6", print_hash_value);
    transparent_crc(p_547->g_355.f1.f7, "p_547->g_355.f1.f7", print_hash_value);
    transparent_crc(p_547->g_355.f1.f8, "p_547->g_355.f1.f8", print_hash_value);
    transparent_crc(p_547->g_355.f1.f9, "p_547->g_355.f1.f9", print_hash_value);
    transparent_crc(p_547->g_355.f2, "p_547->g_355.f2", print_hash_value);
    transparent_crc(p_547->g_355.f3, "p_547->g_355.f3", print_hash_value);
    transparent_crc(p_547->g_357.x, "p_547->g_357.x", print_hash_value);
    transparent_crc(p_547->g_357.y, "p_547->g_357.y", print_hash_value);
    transparent_crc(p_547->g_396.s0, "p_547->g_396.s0", print_hash_value);
    transparent_crc(p_547->g_396.s1, "p_547->g_396.s1", print_hash_value);
    transparent_crc(p_547->g_396.s2, "p_547->g_396.s2", print_hash_value);
    transparent_crc(p_547->g_396.s3, "p_547->g_396.s3", print_hash_value);
    transparent_crc(p_547->g_396.s4, "p_547->g_396.s4", print_hash_value);
    transparent_crc(p_547->g_396.s5, "p_547->g_396.s5", print_hash_value);
    transparent_crc(p_547->g_396.s6, "p_547->g_396.s6", print_hash_value);
    transparent_crc(p_547->g_396.s7, "p_547->g_396.s7", print_hash_value);
    transparent_crc(p_547->g_403.f0.f0, "p_547->g_403.f0.f0", print_hash_value);
    transparent_crc(p_547->g_403.f0.f1, "p_547->g_403.f0.f1", print_hash_value);
    transparent_crc(p_547->g_403.f0.f2, "p_547->g_403.f0.f2", print_hash_value);
    transparent_crc(p_547->g_403.f0.f3, "p_547->g_403.f0.f3", print_hash_value);
    transparent_crc(p_547->g_403.f0.f4, "p_547->g_403.f0.f4", print_hash_value);
    transparent_crc(p_547->g_403.f0.f5, "p_547->g_403.f0.f5", print_hash_value);
    transparent_crc(p_547->g_403.f0.f6, "p_547->g_403.f0.f6", print_hash_value);
    transparent_crc(p_547->g_403.f0.f7, "p_547->g_403.f0.f7", print_hash_value);
    transparent_crc(p_547->g_403.f1.f0, "p_547->g_403.f1.f0", print_hash_value);
    transparent_crc(p_547->g_403.f1.f1, "p_547->g_403.f1.f1", print_hash_value);
    transparent_crc(p_547->g_403.f1.f2, "p_547->g_403.f1.f2", print_hash_value);
    transparent_crc(p_547->g_403.f1.f3, "p_547->g_403.f1.f3", print_hash_value);
    transparent_crc(p_547->g_403.f1.f4, "p_547->g_403.f1.f4", print_hash_value);
    transparent_crc(p_547->g_403.f1.f5, "p_547->g_403.f1.f5", print_hash_value);
    transparent_crc(p_547->g_403.f1.f6, "p_547->g_403.f1.f6", print_hash_value);
    transparent_crc(p_547->g_403.f1.f7, "p_547->g_403.f1.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_547->g_411[i][j].f0, "p_547->g_411[i][j].f0", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f0, "p_547->g_411[i][j].f1.f0", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f1, "p_547->g_411[i][j].f1.f1", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f0, "p_547->g_411[i][j].f1.f2.f0", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f1, "p_547->g_411[i][j].f1.f2.f1", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f2, "p_547->g_411[i][j].f1.f2.f2", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f3, "p_547->g_411[i][j].f1.f2.f3", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f4, "p_547->g_411[i][j].f1.f2.f4", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f5, "p_547->g_411[i][j].f1.f2.f5", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f6, "p_547->g_411[i][j].f1.f2.f6", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f2.f7, "p_547->g_411[i][j].f1.f2.f7", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f3, "p_547->g_411[i][j].f1.f3", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f4, "p_547->g_411[i][j].f1.f4", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f5, "p_547->g_411[i][j].f1.f5", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f6, "p_547->g_411[i][j].f1.f6", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f7, "p_547->g_411[i][j].f1.f7", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f8, "p_547->g_411[i][j].f1.f8", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f1.f9, "p_547->g_411[i][j].f1.f9", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f2, "p_547->g_411[i][j].f2", print_hash_value);
            transparent_crc(p_547->g_411[i][j].f3, "p_547->g_411[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_547->g_416.x, "p_547->g_416.x", print_hash_value);
    transparent_crc(p_547->g_416.y, "p_547->g_416.y", print_hash_value);
    transparent_crc(p_547->g_416.z, "p_547->g_416.z", print_hash_value);
    transparent_crc(p_547->g_416.w, "p_547->g_416.w", print_hash_value);
    transparent_crc(p_547->g_421, "p_547->g_421", print_hash_value);
    transparent_crc(p_547->g_436.x, "p_547->g_436.x", print_hash_value);
    transparent_crc(p_547->g_436.y, "p_547->g_436.y", print_hash_value);
    transparent_crc(p_547->g_436.z, "p_547->g_436.z", print_hash_value);
    transparent_crc(p_547->g_436.w, "p_547->g_436.w", print_hash_value);
    transparent_crc(p_547->g_463.f0, "p_547->g_463.f0", print_hash_value);
    transparent_crc(p_547->g_463.f1.f0, "p_547->g_463.f1.f0", print_hash_value);
    transparent_crc(p_547->g_463.f1.f1, "p_547->g_463.f1.f1", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f0, "p_547->g_463.f1.f2.f0", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f1, "p_547->g_463.f1.f2.f1", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f2, "p_547->g_463.f1.f2.f2", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f3, "p_547->g_463.f1.f2.f3", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f4, "p_547->g_463.f1.f2.f4", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f5, "p_547->g_463.f1.f2.f5", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f6, "p_547->g_463.f1.f2.f6", print_hash_value);
    transparent_crc(p_547->g_463.f1.f2.f7, "p_547->g_463.f1.f2.f7", print_hash_value);
    transparent_crc(p_547->g_463.f1.f3, "p_547->g_463.f1.f3", print_hash_value);
    transparent_crc(p_547->g_463.f1.f4, "p_547->g_463.f1.f4", print_hash_value);
    transparent_crc(p_547->g_463.f1.f5, "p_547->g_463.f1.f5", print_hash_value);
    transparent_crc(p_547->g_463.f1.f6, "p_547->g_463.f1.f6", print_hash_value);
    transparent_crc(p_547->g_463.f1.f7, "p_547->g_463.f1.f7", print_hash_value);
    transparent_crc(p_547->g_463.f1.f8, "p_547->g_463.f1.f8", print_hash_value);
    transparent_crc(p_547->g_463.f1.f9, "p_547->g_463.f1.f9", print_hash_value);
    transparent_crc(p_547->g_463.f2, "p_547->g_463.f2", print_hash_value);
    transparent_crc(p_547->g_463.f3, "p_547->g_463.f3", print_hash_value);
    transparent_crc(p_547->g_464.f0, "p_547->g_464.f0", print_hash_value);
    transparent_crc(p_547->g_464.f1.f0, "p_547->g_464.f1.f0", print_hash_value);
    transparent_crc(p_547->g_464.f1.f1, "p_547->g_464.f1.f1", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f0, "p_547->g_464.f1.f2.f0", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f1, "p_547->g_464.f1.f2.f1", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f2, "p_547->g_464.f1.f2.f2", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f3, "p_547->g_464.f1.f2.f3", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f4, "p_547->g_464.f1.f2.f4", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f5, "p_547->g_464.f1.f2.f5", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f6, "p_547->g_464.f1.f2.f6", print_hash_value);
    transparent_crc(p_547->g_464.f1.f2.f7, "p_547->g_464.f1.f2.f7", print_hash_value);
    transparent_crc(p_547->g_464.f1.f3, "p_547->g_464.f1.f3", print_hash_value);
    transparent_crc(p_547->g_464.f1.f4, "p_547->g_464.f1.f4", print_hash_value);
    transparent_crc(p_547->g_464.f1.f5, "p_547->g_464.f1.f5", print_hash_value);
    transparent_crc(p_547->g_464.f1.f6, "p_547->g_464.f1.f6", print_hash_value);
    transparent_crc(p_547->g_464.f1.f7, "p_547->g_464.f1.f7", print_hash_value);
    transparent_crc(p_547->g_464.f1.f8, "p_547->g_464.f1.f8", print_hash_value);
    transparent_crc(p_547->g_464.f1.f9, "p_547->g_464.f1.f9", print_hash_value);
    transparent_crc(p_547->g_464.f2, "p_547->g_464.f2", print_hash_value);
    transparent_crc(p_547->g_464.f3, "p_547->g_464.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_547->g_465[i], "p_547->g_465[i]", print_hash_value);

    }
    transparent_crc(p_547->g_490.s0, "p_547->g_490.s0", print_hash_value);
    transparent_crc(p_547->g_490.s1, "p_547->g_490.s1", print_hash_value);
    transparent_crc(p_547->g_490.s2, "p_547->g_490.s2", print_hash_value);
    transparent_crc(p_547->g_490.s3, "p_547->g_490.s3", print_hash_value);
    transparent_crc(p_547->g_490.s4, "p_547->g_490.s4", print_hash_value);
    transparent_crc(p_547->g_490.s5, "p_547->g_490.s5", print_hash_value);
    transparent_crc(p_547->g_490.s6, "p_547->g_490.s6", print_hash_value);
    transparent_crc(p_547->g_490.s7, "p_547->g_490.s7", print_hash_value);
    transparent_crc(p_547->g_503, "p_547->g_503", print_hash_value);
    transparent_crc(p_547->g_504.s0, "p_547->g_504.s0", print_hash_value);
    transparent_crc(p_547->g_504.s1, "p_547->g_504.s1", print_hash_value);
    transparent_crc(p_547->g_504.s2, "p_547->g_504.s2", print_hash_value);
    transparent_crc(p_547->g_504.s3, "p_547->g_504.s3", print_hash_value);
    transparent_crc(p_547->g_504.s4, "p_547->g_504.s4", print_hash_value);
    transparent_crc(p_547->g_504.s5, "p_547->g_504.s5", print_hash_value);
    transparent_crc(p_547->g_504.s6, "p_547->g_504.s6", print_hash_value);
    transparent_crc(p_547->g_504.s7, "p_547->g_504.s7", print_hash_value);
    transparent_crc(p_547->g_504.s8, "p_547->g_504.s8", print_hash_value);
    transparent_crc(p_547->g_504.s9, "p_547->g_504.s9", print_hash_value);
    transparent_crc(p_547->g_504.sa, "p_547->g_504.sa", print_hash_value);
    transparent_crc(p_547->g_504.sb, "p_547->g_504.sb", print_hash_value);
    transparent_crc(p_547->g_504.sc, "p_547->g_504.sc", print_hash_value);
    transparent_crc(p_547->g_504.sd, "p_547->g_504.sd", print_hash_value);
    transparent_crc(p_547->g_504.se, "p_547->g_504.se", print_hash_value);
    transparent_crc(p_547->g_504.sf, "p_547->g_504.sf", print_hash_value);
    transparent_crc(p_547->g_509.x, "p_547->g_509.x", print_hash_value);
    transparent_crc(p_547->g_509.y, "p_547->g_509.y", print_hash_value);
    transparent_crc(p_547->g_509.z, "p_547->g_509.z", print_hash_value);
    transparent_crc(p_547->g_509.w, "p_547->g_509.w", print_hash_value);
    transparent_crc(p_547->g_515, "p_547->g_515", print_hash_value);
    transparent_crc(p_547->g_516.x, "p_547->g_516.x", print_hash_value);
    transparent_crc(p_547->g_516.y, "p_547->g_516.y", print_hash_value);
    transparent_crc(p_547->g_516.z, "p_547->g_516.z", print_hash_value);
    transparent_crc(p_547->g_516.w, "p_547->g_516.w", print_hash_value);
    transparent_crc(p_547->g_542.x, "p_547->g_542.x", print_hash_value);
    transparent_crc(p_547->g_542.y, "p_547->g_542.y", print_hash_value);
    transparent_crc(p_547->v_collective, "p_547->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 89; i++)
            transparent_crc(p_547->g_special_values[i + 89 * get_linear_group_id()], "p_547->g_special_values[i + 89 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_547->l_special_values[i], "p_547->l_special_values[i]", print_hash_value);
    transparent_crc(p_547->l_comm_values[get_linear_local_id()], "p_547->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_547->g_comm_values[get_linear_group_id() * 62 + get_linear_local_id()], "p_547->g_comm_values[get_linear_group_id() * 62 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
