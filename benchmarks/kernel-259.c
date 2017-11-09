// --atomics 37 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 54,43,3 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{1,0,5,4,3,2}, // permutation 0
{1,3,2,0,5,4}, // permutation 1
{4,3,5,0,2,1}, // permutation 2
{1,0,3,5,2,4}, // permutation 3
{3,2,0,5,4,1}, // permutation 4
{5,3,4,0,1,2}, // permutation 5
{5,0,2,4,1,3}, // permutation 6
{3,2,0,5,1,4}, // permutation 7
{1,0,5,4,3,2}, // permutation 8
{2,4,1,0,5,3} // permutation 9
};

// Seed: 3227171851

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   volatile int16_t  f1;
   uint8_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

struct S1 {
   uint16_t  f0;
   volatile uint8_t  f1;
   uint32_t  f2;
   int64_t  f3;
   volatile uint64_t  f4;
   int32_t  f5;
   volatile uint8_t  f6;
   uint32_t  f7;
   int32_t  f8;
};

struct S2 {
   uint64_t  f0;
   uint16_t  f1;
};

struct S3 {
    volatile VECTOR(int8_t, 4) g_13;
    int32_t g_41;
    int32_t ** volatile g_81;
    VECTOR(int32_t, 16) g_82;
    VECTOR(int32_t, 8) g_83;
    VECTOR(int32_t, 8) g_84;
    VECTOR(uint32_t, 4) g_98;
    volatile int32_t g_111;
    volatile int32_t *g_110;
    volatile int32_t * volatile *g_109[8][7];
    uint8_t g_113;
    volatile struct S0 g_135[10];
    volatile struct S0 * volatile g_136;
    struct S1 g_143;
    int32_t *g_157[6];
    int32_t ** volatile g_156;
    struct S0 g_165;
    VECTOR(int32_t, 4) g_166;
    VECTOR(int32_t, 4) g_168;
    volatile VECTOR(int32_t, 2) g_169;
    int64_t *g_173;
    int8_t g_188;
    int8_t g_218;
    uint16_t g_231;
    int32_t ** volatile g_234;
    int32_t *g_236;
    int32_t ** volatile g_235;
    VECTOR(uint64_t, 2) g_242;
    int32_t **g_254;
    uint32_t g_259;
    int64_t g_273[2][9][8];
    volatile VECTOR(int32_t, 2) g_280;
    VECTOR(uint8_t, 4) g_282;
    VECTOR(uint8_t, 8) g_284;
    VECTOR(uint8_t, 4) g_285;
    volatile VECTOR(uint8_t, 16) g_286;
    volatile VECTOR(uint8_t, 2) g_288;
    int32_t **g_306;
    VECTOR(int16_t, 16) g_314;
    int32_t **g_317;
    volatile VECTOR(int16_t, 4) g_347;
    uint32_t g_391[6];
    uint8_t * volatile g_395;
    uint8_t * volatile * volatile g_394[8][3];
    struct S2 g_402;
    struct S2 * volatile g_401;
    VECTOR(int32_t, 8) g_427;
    uint32_t g_433;
    int32_t ***g_441;
    volatile struct S0 g_449;
    volatile struct S0 g_454[6];
    VECTOR(int8_t, 4) g_491;
    uint32_t *g_507[8][5][2];
    uint32_t ** volatile g_506;
    uint64_t g_509;
    struct S2 *g_519[10];
    struct S2 **g_518[4];
    volatile struct S0 g_522[9];
    uint16_t g_622;
    volatile struct S0 g_630[3];
    volatile struct S0 * volatile g_631;
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
uint32_t  func_1(struct S3 * p_641);
struct S1  func_2(uint32_t  p_3, int8_t  p_4, uint8_t  p_5, uint32_t  p_6, struct S3 * p_641);
uint32_t  func_7(int32_t  p_8, uint32_t  p_9, struct S3 * p_641);
uint16_t  func_10(uint32_t  p_11, uint32_t  p_12, struct S3 * p_641);
int32_t  func_14(uint32_t  p_15, uint64_t  p_16, uint8_t  p_17, struct S3 * p_641);
int8_t  func_21(int32_t  p_22, uint16_t  p_23, int16_t  p_24, uint32_t  p_25, struct S3 * p_641);
int8_t  func_32(int32_t  p_33, int16_t  p_34, struct S3 * p_641);
int32_t  func_36(int16_t  p_37, struct S3 * p_641);
int32_t * func_59(int64_t  p_60, int8_t  p_61, struct S3 * p_641);
int16_t  func_74(uint8_t  p_75, int8_t  p_76, struct S2  p_77, int32_t * p_78, uint64_t  p_79, struct S3 * p_641);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_641->g_comm_values p_641->g_13 p_641->g_41 p_641->g_81 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_83 p_641->g_168 p_641->g_165.f3 p_641->g_169 p_641->g_218 p_641->g_98 p_641->g_157 p_641->g_111 p_641->g_231 p_641->g_235 p_641->g_242 p_641->g_254 p_641->g_166 p_641->g_236 p_641->g_273 p_641->g_173 p_641->g_280 p_641->g_282 p_641->g_284 p_641->g_285 p_641->g_286 p_641->g_288 p_641->g_314 p_641->g_165.f4 p_641->g_259 p_641->g_391 p_641->g_394 p_641->g_401 p_641->g_427 p_641->g_433 p_641->l_comm_values p_641->g_449 p_641->g_454 p_641->g_402.f0 p_641->g_165.f2 p_641->g_491 p_641->g_506 p_641->g_113 p_641->g_441 p_641->g_522 p_641->g_395 p_641->g_622 p_641->g_630 p_641->g_631 p_641->g_306 p_641->g_188
 * writes: p_641->g_comm_values p_641->g_41 p_641->g_113 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values p_641->g_231 p_641->g_236 p_641->g_242 p_641->g_254 p_641->g_143.f5 p_641->g_98 p_641->g_259 p_641->g_143.f3 p_641->g_273 p_641->g_306 p_641->g_317 p_641->g_391 p_641->g_402 p_641->g_401 p_641->g_165.f4 p_641->g_441 p_641->g_165.f2 p_641->g_518 p_641->g_622
 */
uint32_t  func_1(struct S3 * p_641)
{ /* block id: 4 */
    uint16_t *l_532 = &p_641->g_402.f1;
    uint32_t *l_533 = (void*)0;
    int32_t l_534 = 9L;
    int32_t ****l_629 = (void*)0;
    (*p_641->g_110) = (func_2((p_641->g_622 ^= func_7((((*l_532) = func_10(p_641->g_comm_values[p_641->tid], (p_641->g_comm_values[p_641->tid] <= ((VECTOR(int8_t, 16))(p_641->g_13.wzzwyyzzyzxwwwxx)).s9), p_641)) > 0x1ECFL), ((l_534 = ((void*)0 == l_533)) , l_534), p_641)), ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 0x66L)).yxyy)).x, (safe_mod_func_uint8_t_u_u((l_629 == (void*)0), p_641->g_314.sf)))), p_641->g_166.w)) , 0x2DL), p_641->g_491.x, p_641->g_168.y, p_641) , 0x7015D638L);
    if ((atomic_inc(&p_641->l_atomic_input[26]) == 9))
    { /* block id: 245 */
        uint32_t l_639 = 0x8A165DDFL;
        uint32_t l_640[8][10][3] = {{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}},{{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL},{1UL,9UL,4294967293UL}}};
        int i, j, k;
        l_640[0][2][2] = l_639;
        unsigned int result = 0;
        result += l_639;
        int l_640_i0, l_640_i1, l_640_i2;
        for (l_640_i0 = 0; l_640_i0 < 8; l_640_i0++) {
            for (l_640_i1 = 0; l_640_i1 < 10; l_640_i1++) {
                for (l_640_i2 = 0; l_640_i2 < 3; l_640_i2++) {
                    result += l_640[l_640_i0][l_640_i1][l_640_i2];
                }
            }
        }
        atomic_add(&p_641->l_special_values[26], result);
    }
    else
    { /* block id: 247 */
        (1 + 1);
    }
    (*p_641->g_306) = (void*)0;
    return p_641->g_188;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_630 p_641->g_631 p_641->g_81 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_83 p_641->g_13 p_641->g_168 p_641->g_165.f3 p_641->g_169 p_641->g_218 p_641->g_98 p_641->g_157
 * writes: p_641->g_135 p_641->g_113 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values
 */
struct S1  func_2(uint32_t  p_3, int8_t  p_4, uint8_t  p_5, uint32_t  p_6, struct S3 * p_641)
{ /* block id: 238 */
    int64_t l_632 = (-3L);
    uint8_t l_633 = 0xB4L;
    int32_t *l_634 = &p_641->g_143.f8;
    int32_t *l_635[7][8][4] = {{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}},{{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5},{(void*)0,(void*)0,(void*)0,&p_641->g_143.f5}}};
    uint32_t l_636 = 0xD1A8499DL;
    int i, j, k;
    (*p_641->g_631) = p_641->g_630[2];
    l_634 = func_59(l_632, l_633, p_641);
    ++l_636;
    return p_641->g_143;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_522.f0 p_641->g_236 p_641->g_143.f5 p_641->g_218 p_641->g_82 p_641->g_395 p_641->g_165.f2
 * writes: p_641->g_143.f5 p_641->g_218
 */
uint32_t  func_7(int32_t  p_8, uint32_t  p_9, struct S3 * p_641)
{ /* block id: 192 */
    int32_t **l_535 = &p_641->g_236;
    uint16_t *l_617 = &p_641->g_231;
    uint16_t *l_619[3][6][1] = {{{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0}},{{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0}},{{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0},{&p_641->g_143.f0}}};
    uint16_t **l_618 = &l_619[2][4][0];
    int32_t *l_620 = (void*)0;
    int32_t l_621[8] = {0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL,0x4CF67F4EL};
    int i, j, k;
    (**l_535) ^= (((void*)0 == l_535) ^ p_641->g_522[0].f0);
    if ((atomic_inc(&p_641->l_atomic_input[20]) == 7))
    { /* block id: 195 */
        uint32_t l_536[2];
        uint64_t l_537 = 18446744073709551612UL;
        int32_t l_539 = 0x4873342DL;
        int32_t *l_538 = &l_539;
        uint16_t l_540 = 1UL;
        struct S0 l_541 = {0xB32A1C5EL,-1L,0UL,0L,0x4DB5405FL};/* VOLATILE GLOBAL l_541 */
        struct S0 l_542 = {4294967295UL,1L,1UL,0x4489C925L,4294967291UL};/* VOLATILE GLOBAL l_542 */
        int i;
        for (i = 0; i < 2; i++)
            l_536[i] = 0x69CAA178L;
        l_537 |= l_536[1];
        l_538 = l_538;
        l_542 = ((l_540 , ((VECTOR(int8_t, 2))(1L, (-1L))).odd) , l_541);
        for (l_542.f2 = 0; (l_542.f2 > 17); l_542.f2++)
        { /* block id: 201 */
            VECTOR(int32_t, 2) l_545 = (VECTOR(int32_t, 2))(0x43BD0C0FL, 0x446F362CL);
            int64_t l_612[4];
            int i;
            for (i = 0; i < 4; i++)
                l_612[i] = 4L;
            (1 + 1);
        }
        unsigned int result = 0;
        int l_536_i0;
        for (l_536_i0 = 0; l_536_i0 < 2; l_536_i0++) {
            result += l_536[l_536_i0];
        }
        result += l_537;
        result += l_539;
        result += l_540;
        result += l_541.f0;
        result += l_541.f1;
        result += l_541.f2;
        result += l_541.f3;
        result += l_541.f4;
        result += l_542.f0;
        result += l_542.f1;
        result += l_542.f2;
        result += l_542.f3;
        result += l_542.f4;
        atomic_add(&p_641->l_special_values[20], result);
    }
    else
    { /* block id: 226 */
        (1 + 1);
    }
    for (p_641->g_218 = 0; (p_641->g_218 >= (-28)); p_641->g_218 = safe_sub_func_uint16_t_u_u(p_641->g_218, 9))
    { /* block id: 231 */
        return p_641->g_82.sd;
    }
    l_621[7] &= (((void*)0 != &p_641->g_395) > (safe_mod_func_int64_t_s_s(((l_617 == ((*l_618) = l_617)) | ((**l_535) , (((&p_641->g_273[0][7][7] != (void*)0) , ((p_9 , (void*)0) != &l_535)) == (*p_641->g_395)))), 18446744073709551615UL)));
    return (**l_535);
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_13 p_641->g_comm_values p_641->g_41 p_641->g_81 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_83 p_641->g_168 p_641->g_165.f3 p_641->g_169 p_641->g_218 p_641->g_98 p_641->g_157 p_641->g_111 p_641->g_231 p_641->g_235 p_641->g_242 p_641->g_254 p_641->g_166 p_641->g_236 p_641->g_273 p_641->g_173 p_641->g_280 p_641->g_282 p_641->g_284 p_641->g_285 p_641->g_286 p_641->g_288 p_641->g_314 p_641->g_165.f4 p_641->g_259 p_641->g_391 p_641->g_394 p_641->g_401 p_641->g_427 p_641->g_433 p_641->l_comm_values p_641->g_449 p_641->g_454 p_641->g_402.f0 p_641->g_165.f2 p_641->g_491 p_641->g_506 p_641->g_113 p_641->g_441 p_641->g_522
 * writes: p_641->g_comm_values p_641->g_41 p_641->g_113 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values p_641->g_231 p_641->g_236 p_641->g_242 p_641->g_254 p_641->g_143.f5 p_641->g_98 p_641->g_259 p_641->g_143.f3 p_641->g_273 p_641->g_306 p_641->g_317 p_641->g_391 p_641->g_402 p_641->g_401 p_641->g_165.f4 p_641->g_441 p_641->g_165.f2 p_641->g_518
 */
uint16_t  func_10(uint32_t  p_11, uint32_t  p_12, struct S3 * p_641)
{ /* block id: 5 */
    uint32_t l_18 = 0UL;
    VECTOR(int32_t, 8) l_428 = (VECTOR(int32_t, 8))(0x54121B45L, (VECTOR(int32_t, 4))(0x54121B45L, (VECTOR(int32_t, 2))(0x54121B45L, 0x2C491E59L), 0x2C491E59L), 0x2C491E59L, 0x54121B45L, 0x2C491E59L);
    int32_t ***l_442 = &p_641->g_254;
    uint16_t *l_482 = &p_641->g_143.f0;
    VECTOR(int8_t, 8) l_490 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(int8_t, 8) l_493 = (VECTOR(int8_t, 8))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0x2CL), 0x2CL), 0x2CL, 0x5BL, 0x2CL);
    struct S2 *l_497 = (void*)0;
    struct S2 **l_496 = &l_497;
    uint32_t *l_505 = (void*)0;
    uint32_t **l_504 = &l_505;
    uint64_t *l_508 = &p_641->g_509;
    uint32_t l_510 = 0x63A0B216L;
    VECTOR(uint64_t, 2) l_530 = (VECTOR(uint64_t, 2))(0x816F0DEDEE959F5BL, 18446744073709551615UL);
    uint8_t l_531 = 1UL;
    int i;
    if (func_14(l_18, l_18, (p_12 , GROUP_DIVERGE(0, 1)), p_641))
    { /* block id: 157 */
        uint32_t l_424 = 0xBB5B26F3L;
        VECTOR(int32_t, 2) l_429 = (VECTOR(int32_t, 2))(0x126DFC4CL, 1L);
        VECTOR(int32_t, 8) l_430 = (VECTOR(int32_t, 8))(0x33652D35L, (VECTOR(int32_t, 4))(0x33652D35L, (VECTOR(int32_t, 2))(0x33652D35L, 0x015804A5L), 0x015804A5L), 0x015804A5L, 0x33652D35L, 0x015804A5L);
        VECTOR(int32_t, 8) l_431 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x632B20BBL), 0x632B20BBL), 0x632B20BBL, (-1L), 0x632B20BBL);
        VECTOR(uint32_t, 16) l_432 = (VECTOR(uint32_t, 16))(0xA9521179L, (VECTOR(uint32_t, 4))(0xA9521179L, (VECTOR(uint32_t, 2))(0xA9521179L, 4294967288UL), 4294967288UL), 4294967288UL, 0xA9521179L, 4294967288UL, (VECTOR(uint32_t, 2))(0xA9521179L, 4294967288UL), (VECTOR(uint32_t, 2))(0xA9521179L, 4294967288UL), 0xA9521179L, 4294967288UL, 0xA9521179L, 4294967288UL);
        int32_t ***l_439 = &p_641->g_254;
        int8_t *l_457 = &p_641->g_188;
        int16_t *l_458 = (void*)0;
        int16_t *l_459 = (void*)0;
        int16_t *l_460 = (void*)0;
        int16_t *l_461 = (void*)0;
        int16_t *l_462 = (void*)0;
        int16_t *l_463 = (void*)0;
        uint8_t l_464 = 0UL;
        int i;
        for (p_641->g_165.f4 = 0; (p_641->g_165.f4 < 48); p_641->g_165.f4++)
        { /* block id: 160 */
            int32_t *l_423[5] = {&p_641->g_41,&p_641->g_41,&p_641->g_41,&p_641->g_41,&p_641->g_41};
            int32_t ****l_440[1][10] = {{&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439,&l_439}};
            int i, j;
            l_424++;
            (*p_641->g_236) |= ((((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))((-1L), (-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_641->g_427.s71)), 0x6F215300L, 0x1864997DL)).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_428.s3305)).zwxwyxzxyxwyyxzx)).sc4, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_429.yxxx)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_430.s2733)))))).odd))), 9L, 1L)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_431.s64)), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_432.sfa)).yxyy)).lo, (uint32_t)((p_11 && p_12) < 0x1581A599L)))).yxxyyxyy)).s12)), 1UL, 0x53641241L)).zywwxywx)).s5 , p_641->g_433), 0x51B92268L, (((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(0x4B462390L, (FAKE_DIVERGE(p_641->global_1_offset, get_global_id(1), 10) , FAKE_DIVERGE(p_641->local_0_offset, get_local_id(0), 10)), (p_11 ^ ((safe_mul_func_int16_t_s_s(((void*)0 != &p_641->g_173), (safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_s(((l_442 = (p_641->g_441 = l_439)) == &p_641->g_254), l_431.s7)) || p_12))))) < p_641->l_comm_values[(safe_mod_func_uint32_t_u_u(p_641->tid, 6))])), ((VECTOR(uint32_t, 2))(0xDB7DA57EL)), ((VECTOR(uint32_t, 2))(4294967290UL)), 0UL)).s6350126447341654, ((VECTOR(uint32_t, 16))(0x071E8C18L))))).s1 || (*p_641->g_110)), ((VECTOR(int32_t, 2))(0x16E1A9D5L)), (-6L))).s04))).xyxy)).xxyywwxw, (int32_t)p_12))).hi, ((VECTOR(int32_t, 4))(0x53A9AA3AL))))).odd, ((VECTOR(int32_t, 2))((-1L)))))))), 0x6D671746L, 0x3096B353L, (-9L), ((VECTOR(int32_t, 2))(0x64E4AE1AL)), 0L)).s1, ((VECTOR(int32_t, 2))(0x65B43DF3L)), 1L)), ((VECTOR(int32_t, 8))(0x35F1A789L))))).s5 > p_11) && 0x03L);
        }
        (*p_641->g_236) ^= ((l_428.s2 , (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_641->g_449 , (safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(((p_641->g_454[5] , (-10L)) || (safe_rshift_func_uint16_t_u_u((p_641->g_286.s5 >= p_641->g_285.w), 15))), ((*l_457) = (-1L)))) , ((l_431.s2 ^= l_18) || p_12)), l_464))), (-7L))), p_11)) ^ l_432.s4), p_12))) >= p_12);
    }
    else
    { /* block id: 169 */
        VECTOR(int32_t, 8) l_470 = (VECTOR(int32_t, 8))(0x0746B2A3L, (VECTOR(int32_t, 4))(0x0746B2A3L, (VECTOR(int32_t, 2))(0x0746B2A3L, 1L), 1L), 1L, 0x0746B2A3L, 1L);
        VECTOR(int8_t, 4) l_477 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L);
        int16_t *l_478 = (void*)0;
        int16_t *l_480 = (void*)0;
        int16_t **l_479 = &l_480;
        uint16_t **l_483 = (void*)0;
        uint16_t **l_484 = (void*)0;
        uint16_t **l_485 = &l_482;
        uint8_t *l_486 = &p_641->g_165.f2;
        uint64_t *l_487 = &p_641->g_402.f0;
        VECTOR(int8_t, 2) l_492 = (VECTOR(int8_t, 2))(1L, (-1L));
        VECTOR(int64_t, 2) l_498 = (VECTOR(int64_t, 2))(0x2F7A74A5625F856BL, 0x401D9857D7A4E6EAL);
        VECTOR(uint32_t, 8) l_499 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x3C38778FL), 0x3C38778FL), 0x3C38778FL, 4294967294UL, 0x3C38778FL);
        struct S2 ***l_515 = &l_496;
        struct S2 **l_517 = &l_497;
        struct S2 ***l_516 = &l_517;
        int32_t *l_524 = (void*)0;
        int32_t **l_523 = &l_524;
        int32_t l_527 = 0x572399CFL;
        int i;
        for (p_641->g_402.f0 = 0; (p_641->g_402.f0 != 45); p_641->g_402.f0++)
        { /* block id: 172 */
            int32_t *l_467 = &p_641->g_143.f5;
            l_467 = l_467;
            return l_18;
        }
        (*p_641->g_110) = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x11922E9DL, ((VECTOR(int32_t, 2))((-10L), (-1L))), (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_470.s50245021)).s45)).xyxy, (int32_t)(safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_477.xz)), 0L, 0x30L)).w, 2)), 0)) < ((l_478 == ((*l_479) = l_478)) , ((safe_unary_minus_func_int32_t_s(1L)) , ((*l_486) |= (&p_641->g_231 == ((*l_485) = l_482)))))) && ((*l_487)++)), (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(l_490.s71)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(p_641->g_491.zyxzwwxzzwzwzwzz)), ((VECTOR(int8_t, 8))(l_492.yxxyyyxx)).s4454601750270351, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(l_493.s23)).yyyxxxxx, (int8_t)((l_508 = ((safe_div_func_uint64_t_u_u((l_496 != (((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_498.xyxxxyyyyyyyyxyy)))).sf , (((((VECTOR(uint32_t, 16))(l_499.s3346310315147677)).s7 >= (safe_mul_func_int8_t_s_s(0x18L, ((safe_add_func_int16_t_s_s((l_504 != p_641->g_506), p_641->g_491.w)) & p_11)))) >= 18446744073709551615UL) > p_11)) || p_11) , &l_497)), 1L)) , (void*)0)) == &p_641->g_509)))).s5451256553400221))).even)).hi)).hi, ((VECTOR(int8_t, 2))(0x14L)), ((VECTOR(int8_t, 2))(1L))))).hi, 0x36L, p_11, p_641->g_165.f4, ((VECTOR(int8_t, 8))((-1L))), 0x4FL, ((VECTOR(int8_t, 2))((-10L))), 1L)).s730b)).xzyzxxzz))))), ((VECTOR(int8_t, 8))(0x53L))))).s27))))), p_11, ((VECTOR(int8_t, 8))(0x0CL)), p_641->g_282.z, 0x03L, p_12, 0x49L, (-1L))).sf2)).xxyxxyxx)))).s57)), 0x13L, 0x2DL)), p_641->g_143.f3, l_499.s4, 4L, 0x71L)), 0x3AL, (-1L), p_11, (-10L), 9L, ((VECTOR(int8_t, 2))(0x5FL)), 0x2DL)).sa > p_12)))))))).w, l_510)), ((VECTOR(int32_t, 8))(0x1A9A112DL)), ((VECTOR(int32_t, 4))(0x63E8C6C3L)))).s49)), ((VECTOR(int32_t, 2))(0x089F41DDL))))).even;
        (*p_641->g_110) = (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(3UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(4UL, 8UL)))), 249UL)).z, ((safe_add_func_int16_t_s_s((((((l_470.s0 , (void*)0) == (p_641->g_518[0] = ((*l_516) = ((*l_515) = &l_497)))) != (safe_add_func_int8_t_s_s(p_641->g_113, ((((*p_641->g_441) == (p_641->g_522[0] , l_523)) >= (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_641->group_2_offset, get_group_id(2), 10), 3))) < l_499.s2)))) ^ ((VECTOR(uint8_t, 8))(p_641->g_166.z, p_12, 0x7CL, 0x08L, ((VECTOR(uint8_t, 4))(0UL)))).s4) && 0x0EL), l_527)) < p_641->g_comm_values[p_641->tid])));
        (*p_641->g_110) = (((safe_mul_func_int8_t_s_s(0x5FL, p_11)) < ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_530.xyyyyxyxyyyyxyyy)))).se4)).yyyyyyxx)).s4630533365366560)).odd)).even)).x) & (l_531 = 18446744073709551614UL));
    }
    return p_641->g_168.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_13 p_641->g_comm_values p_641->g_41 p_641->g_81 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_83 p_641->g_168 p_641->g_165.f3 p_641->g_169 p_641->g_218 p_641->g_98 p_641->g_157 p_641->g_111 p_641->g_231 p_641->g_235 p_641->g_242 p_641->g_254 p_641->g_166 p_641->g_236 p_641->g_273 p_641->g_173 p_641->g_280 p_641->g_282 p_641->g_284 p_641->g_285 p_641->g_286 p_641->g_288 p_641->g_314 p_641->g_165.f4 p_641->g_259 p_641->g_391 p_641->g_394 p_641->g_401
 * writes: p_641->g_comm_values p_641->g_41 p_641->g_113 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values p_641->g_231 p_641->g_236 p_641->g_242 p_641->g_254 p_641->g_143.f5 p_641->g_98 p_641->g_259 p_641->g_143.f3 p_641->g_273 p_641->g_306 p_641->g_317 p_641->g_391 p_641->g_402 p_641->g_401
 */
int32_t  func_14(uint32_t  p_15, uint64_t  p_16, uint8_t  p_17, struct S3 * p_641)
{ /* block id: 6 */
    int32_t l_28 = (-4L);
    uint8_t l_31 = 0x8FL;
    uint16_t *l_230 = &p_641->g_231;
    struct S2 *l_405[5][6][8] = {{{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402}},{{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402}},{{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402}},{{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402}},{{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402},{(void*)0,&p_641->g_402,&p_641->g_402,&p_641->g_402,&p_641->g_402,(void*)0,&p_641->g_402,&p_641->g_402}}};
    struct S2 **l_404[1][2];
    int32_t l_406 = (-1L);
    int32_t *l_407 = (void*)0;
    int32_t *l_408 = (void*)0;
    int32_t *l_409 = (void*)0;
    int32_t *l_410 = &p_641->g_143.f5;
    int32_t *l_411[5][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_412 = (-6L);
    int32_t l_413 = (-1L);
    int16_t l_414 = 0L;
    int64_t l_415 = 1L;
    int32_t l_416 = 9L;
    uint16_t l_417 = 0xE4ABL;
    int16_t l_420 = 0x156AL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_404[i][j] = &l_405[2][4][0];
    }
    (*p_641->g_110) = (safe_mod_func_int8_t_s_s(func_21((safe_add_func_int32_t_s_s(l_28, (((-1L) < (safe_sub_func_int8_t_s_s(l_31, func_32(p_641->g_13.w, p_15, p_641)))) , func_36(p_641->g_13.w, p_641)))), ((*l_230) |= (safe_mod_func_int32_t_s_s(p_15, GROUP_DIVERGE(2, 1)))), p_641->g_84.s7, l_31, p_641), p_641->g_143.f7));
    p_641->g_401 = (void*)0;
    l_417--;
    return l_420;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_235 p_641->g_242 p_641->g_254 p_641->g_83 p_641->g_143.f8 p_641->g_166 p_641->g_236 p_641->g_143.f7 p_641->g_111 p_641->g_218 p_641->g_273 p_641->g_143.f5 p_641->g_173 p_641->g_280 p_641->g_282 p_641->g_284 p_641->g_285 p_641->g_286 p_641->g_288 p_641->g_135.f0 p_641->g_314 p_641->g_231 p_641->g_84 p_641->g_143.f3 p_641->g_110 p_641->g_165.f4 p_641->g_135.f1 p_641->g_259 p_641->g_391 p_641->g_394 p_641->g_401
 * writes: p_641->g_157 p_641->g_236 p_641->g_242 p_641->g_254 p_641->g_143.f5 p_641->g_113 p_641->g_98 p_641->g_259 p_641->g_143.f3 p_641->g_273 p_641->g_306 p_641->g_317 p_641->g_111 p_641->g_391 p_641->g_402
 */
int8_t  func_21(int32_t  p_22, uint16_t  p_23, int16_t  p_24, uint32_t  p_25, struct S3 * p_641)
{ /* block id: 79 */
    int32_t *l_232 = &p_641->g_143.f5;
    int32_t **l_233 = &p_641->g_157[1];
    int32_t *l_253 = &p_641->g_165.f3;
    int32_t **l_252[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_271 = &p_641->g_143.f7;
    VECTOR(uint64_t, 4) l_312 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xD657C292048E4329L), 0xD657C292048E4329L);
    struct S0 *l_348 = (void*)0;
    int32_t l_375[10][1] = {{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL},{0x113F3AAFL}};
    int32_t l_379 = 0x05858740L;
    int16_t l_390 = (-1L);
    uint8_t * volatile * volatile l_398 = &p_641->g_395;/* VOLATILE GLOBAL l_398 */
    struct S2 l_399 = {0x62630B4D226501C9L,0x5E57L};
    int32_t l_403 = 1L;
    int i, j;
    (*p_641->g_235) = ((*l_233) = l_232);
    if (p_25)
    { /* block id: 82 */
        uint64_t *l_241 = (void*)0;
        uint64_t *l_243 = (void*)0;
        uint64_t *l_244 = (void*)0;
        uint64_t *l_245 = (void*)0;
        int32_t l_246 = 0x105C7877L;
        uint64_t *l_247[2];
        int32_t ***l_255 = &p_641->g_254;
        uint32_t *l_258[5][1][1] = {{{&p_641->g_259}},{{&p_641->g_259}},{{&p_641->g_259}},{{&p_641->g_259}},{{&p_641->g_259}}};
        uint8_t *l_266 = &p_641->g_113;
        uint32_t *l_270 = &p_641->g_165.f4;
        uint32_t **l_269[6][3];
        uint8_t l_272 = 1UL;
        int64_t *l_274 = &p_641->g_143.f3;
        int32_t l_275 = 0x0D233E5BL;
        VECTOR(uint8_t, 2) l_281 = (VECTOR(uint8_t, 2))(0xE1L, 2UL);
        VECTOR(uint8_t, 8) l_283 = (VECTOR(uint8_t, 8))(0x0BL, (VECTOR(uint8_t, 4))(0x0BL, (VECTOR(uint8_t, 2))(0x0BL, 255UL), 255UL), 255UL, 0x0BL, 255UL);
        VECTOR(uint8_t, 16) l_287 = (VECTOR(uint8_t, 16))(0x9BL, (VECTOR(uint8_t, 4))(0x9BL, (VECTOR(uint8_t, 2))(0x9BL, 1UL), 1UL), 1UL, 0x9BL, 1UL, (VECTOR(uint8_t, 2))(0x9BL, 1UL), (VECTOR(uint8_t, 2))(0x9BL, 1UL), 0x9BL, 1UL, 0x9BL, 1UL);
        VECTOR(uint8_t, 2) l_289 = (VECTOR(uint8_t, 2))(9UL, 0x99L);
        int64_t *l_298 = &p_641->g_273[0][3][3];
        int64_t *l_299 = (void*)0;
        int64_t *l_300 = (void*)0;
        int64_t *l_301 = (void*)0;
        int64_t *l_302 = (void*)0;
        int32_t ***l_305[3][6][10] = {{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}}};
        VECTOR(uint8_t, 8) l_309 = (VECTOR(uint8_t, 8))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
        VECTOR(int16_t, 4) l_313 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x32D8L), 0x32D8L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_247[i] = (void*)0;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_269[i][j] = &l_270;
        }
        l_275 |= ((((*l_274) = ((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((p_641->g_242.y--) , (((safe_add_func_uint16_t_u_u(0UL, (!(((l_252[2] == ((*l_255) = p_641->g_254)) > ((VECTOR(int32_t, 8))(0x0EFE6FD8L, (safe_add_func_uint32_t_u_u(((*l_232) = p_641->g_83.s2), (p_641->g_259 = (l_272 = (safe_div_func_int32_t_s_s((0xCE520023L < (!(safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_641->g_143.f8, ((*l_266) = p_641->g_166.x))), (safe_rshift_func_int8_t_s_s((((p_641->g_98.z = (((l_271 = p_641->g_236) != &p_25) == p_641->g_143.f7)) , p_641->g_111) , p_23), 7)))))), FAKE_DIVERGE(p_641->global_0_offset, get_global_id(0), 10))))))), 1L, ((VECTOR(int32_t, 4))(0x2F048049L)), (-1L))).s0) , (-3L))))) < p_23) >= 0x729AL)), p_25)), p_641->g_218)) <= p_641->g_273[1][6][3])) , l_246) == 0x27E14B07L);
        (*p_641->g_236) = (safe_div_func_int8_t_s_s((l_247[1] == (void*)0), ((((*l_232) == ((safe_sub_func_int8_t_s_s((*l_232), (!((VECTOR(uint8_t, 2))(8UL, 0UL)).hi))) ^ (((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(0x6F38B845L, ((void*)0 != p_641->g_173), 0x6CF2EFE8L, 0x68BD633CL)).xxwzxywxxxyzzwwz, ((VECTOR(int32_t, 8))(p_641->g_280.xxyyxxyx)).s0754643670744000))).sd , (l_275 && (~((((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_281.xx)))).odd, 0x1BL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 2))(p_641->g_282.yx)).yyyy))).lo, ((VECTOR(uint8_t, 4))(l_283.s0462)).odd, ((VECTOR(uint8_t, 16))(p_641->g_284.s3446300576703600)).se1))), ((VECTOR(uint8_t, 2))(p_641->g_285.zw))))).yxxxxxyxyyyxyxyy)).sc4)))).lo, 1UL, 253UL, ((VECTOR(uint8_t, 8))(p_641->g_286.s2e545f22)), 0UL, 0UL, 252UL)), ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(253UL, 0x05L)).yyyx, ((VECTOR(uint8_t, 8))(l_287.seebce1e5)).lo, ((VECTOR(uint8_t, 16))(p_641->g_288.xyyxyxyxyyyxxxyy)).s8ecf))).lo)), ((VECTOR(uint8_t, 8))(l_289.yyxyxyyy)).s23))).yxyxxyyxxxyxxxyx))).sb | (safe_lshift_func_uint8_t_u_s((*l_232), p_641->g_166.w))) <= 0L)))))) , FAKE_DIVERGE(p_641->global_1_offset, get_global_id(1), 10)) ^ p_641->g_166.x)));
        (*l_232) = (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(l_283.s0, ((VECTOR(uint64_t, 2))(1UL, 0xE8B6F4C6E71ABB76L)).lo)) | ((GROUP_DIVERGE(1, 1) && ((safe_sub_func_int64_t_s_s((l_275 ^= ((*l_298) = 1L)), p_641->g_135[1].f0)) > ((safe_lshift_func_uint8_t_u_s((((p_641->g_306 = &p_641->g_157[1]) != &p_641->g_110) | (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_309.s3510)).lo)).odd, 0))), (((4L || ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_312.zy)), 0xDA19F553E666A5D6L, 18446744073709551606UL)).x) ^ ((0x8044L != ((VECTOR(int16_t, 16))(0x6007L, ((VECTOR(int16_t, 8))(l_313.xyxywyxy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(1L, 0x388AL)))), ((VECTOR(int16_t, 4))(p_641->g_314.sae7b)), 4L)).sa) != (safe_mod_func_int8_t_s_s(((p_641->g_317 = (l_233 = &l_232)) == &p_641->g_157[1]), p_23)))) , (*l_232)))) | p_641->g_231))) != (*p_641->g_236))), p_641->g_84.s5));
    }
    else
    { /* block id: 100 */
        int32_t *l_318[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_233) = l_318[9];
        return p_641->g_166.w;
    }
    if ((atomic_inc(&p_641->g_atomic_input[37 * get_linear_group_id() + 16]) == 0))
    { /* block id: 105 */
        struct S2 l_319 = {18446744073709551612UL,0xA46AL};
        struct S2 l_320 = {18446744073709551615UL,4UL};
        uint32_t l_342 = 8UL;
        l_320 = l_319;
        for (l_320.f0 = 20; (l_320.f0 == 49); l_320.f0 = safe_add_func_int8_t_s_s(l_320.f0, 3))
        { /* block id: 109 */
            VECTOR(int32_t, 8) l_323 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L);
            int i;
            for (l_323.s4 = 0; (l_323.s4 != (-14)); l_323.s4--)
            { /* block id: 112 */
                int32_t l_327 = 0x665DCFFCL;
                int32_t *l_326 = &l_327;
                int32_t *l_328[9] = {&l_327,&l_327,&l_327,&l_327,&l_327,&l_327,&l_327,&l_327,&l_327};
                int i;
                l_328[5] = l_326;
            }
            for (l_323.s6 = 0; (l_323.s6 != (-5)); l_323.s6 = safe_sub_func_uint64_t_u_u(l_323.s6, 1))
            { /* block id: 117 */
                int16_t l_331[9] = {0x4890L,0x4890L,0x4890L,0x4890L,0x4890L,0x4890L,0x4890L,0x4890L,0x4890L};
                struct S2 l_332 = {18446744073709551615UL,0xEF53L};
                int32_t l_334 = 0x5B81CB72L;
                int32_t *l_333 = &l_334;
                int32_t *l_335 = &l_334;
                uint8_t l_336 = 0x85L;
                int i;
                l_319 = (l_331[7] , l_332);
                l_335 = l_333;
                l_336++;
                for (l_331[7] = (-4); (l_331[7] < (-20)); --l_331[7])
                { /* block id: 123 */
                    uint64_t **l_341 = (void*)0;
                    l_333 = (void*)0;
                    l_341 = (void*)0;
                }
            }
        }
        l_342++;
        unsigned int result = 0;
        result += l_319.f0;
        result += l_319.f1;
        result += l_320.f0;
        result += l_320.f1;
        result += l_342;
        atomic_add(&p_641->g_special_values[37 * get_linear_group_id() + 16], result);
    }
    else
    { /* block id: 130 */
        (1 + 1);
    }
    for (p_641->g_143.f3 = (-8); (p_641->g_143.f3 < 24); ++p_641->g_143.f3)
    { /* block id: 135 */
        VECTOR(int16_t, 8) l_349 = (VECTOR(int16_t, 8))(0x7B03L, (VECTOR(int16_t, 4))(0x7B03L, (VECTOR(int16_t, 2))(0x7B03L, 0x5EE2L), 0x5EE2L), 0x5EE2L, 0x7B03L, 0x5EE2L);
        int32_t l_350 = 0x2D0C052AL;
        uint32_t *l_355 = (void*)0;
        uint32_t **l_356 = &l_271;
        int64_t **l_370 = &p_641->g_173;
        uint8_t *l_371 = (void*)0;
        uint8_t *l_372[6];
        int32_t l_376 = 0x6BF95CEEL;
        int32_t l_377 = 0L;
        int16_t l_378 = 0x589CL;
        int32_t l_380 = 9L;
        int32_t l_381 = (-7L);
        int32_t l_382 = 0x066D7080L;
        int32_t l_383 = 0x6AB10658L;
        int32_t l_384 = 1L;
        int32_t l_385 = 0x6A7046F6L;
        int32_t l_386 = 1L;
        int32_t l_387 = (-4L);
        int32_t l_388 = 0x45E0EDEAL;
        int32_t l_389 = (-10L);
        int i;
        for (i = 0; i < 6; i++)
            l_372[i] = &p_641->g_113;
        (*p_641->g_110) = (((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_641->g_347.xyzyzyzz)), 0x2900L, ((*l_232) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x803F4E41BF4CAF49L, 7UL)).yxxx)).x < (l_348 == l_348))), 0x2074L, 0x5EE2L, 3L, (-3L), 0x0473L, 0x2B65L)).lo)).s21)).yxyy, ((VECTOR(int16_t, 2))(l_349.s50)).yxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))((((p_23 , ((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 4))((l_350 = 0L), 7L, 6L, (-1L))), 0x27EEL, ((((*p_641->g_236) = (safe_sub_func_int8_t_s_s(p_24, (0x646BL <= p_641->g_166.y)))) , (l_355 = func_59(((safe_lshift_func_int16_t_s_s((0x03EEL >= 1L), l_350)) , p_641->g_169.y), l_349.s2, p_641))) == p_641->g_110), (-1L), 0x4135L, ((VECTOR(int16_t, 2))(0L)), 0x6BE5L, p_25, 0x6844L, 6L, 1L)).sf) < p_641->g_273[1][6][3]) ^ 0x56ADL), ((VECTOR(int16_t, 4))(0L)), 0x4021L, 0x38E1L, (-1L))).s0770160555367211, ((VECTOR(int16_t, 16))((-1L)))))), (int16_t)p_25))).lo, ((VECTOR(int16_t, 8))(0x55E1L)), ((VECTOR(int16_t, 8))((-9L)))))).s1777175216306332)).s38d6))), ((VECTOR(int16_t, 2))(1L)), 0x7BB2L, ((VECTOR(int16_t, 8))(0x1442L)), 0x42F0L)), (int16_t)2L))).s70)), 7L)).hi)), (-10L), 1L)).wyzyzwwxzzzwyxxx)), ((VECTOR(int16_t, 16))(8L))))).sc && (*l_232));
        if ((((*l_356) = (void*)0) == (((((0xB58AL & (*l_232)) > (safe_sub_func_uint16_t_u_u(p_25, ((((l_350 |= (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(251UL, ((p_641->g_98.w <= ((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s(((safe_mul_func_int16_t_s_s(6L, ((l_370 != l_370) & ((((&p_641->g_254 == &l_252[2]) ^ 0x017724E0L) && p_25) | 1UL)))) | p_25))), 0)) <= 0x1E27L)) || 0x74L), 0xB6L, 0xCAL, 253UL, ((VECTOR(uint8_t, 2))(0x2CL)), 0xD5L)), ((VECTOR(uint8_t, 8))(0x7EL))))))).s4 && p_641->g_165.f4), p_641->g_135[1].f1)), (*l_232))), FAKE_DIVERGE(p_641->local_2_offset, get_local_id(2), 10)))) & l_349.s7) , (-1L)) > p_641->g_259)))) <= p_25) != p_25) , (void*)0)))
        { /* block id: 143 */
            return p_23;
        }
        else
        { /* block id: 145 */
            int32_t *l_373 = (void*)0;
            int32_t *l_374[10] = {(void*)0,&p_641->g_143.f8,&l_350,&p_641->g_143.f8,(void*)0,(void*)0,&p_641->g_143.f8,&l_350,&p_641->g_143.f8,(void*)0};
            uint8_t * volatile * volatile *l_396 = (void*)0;
            uint8_t * volatile * volatile *l_397 = (void*)0;
            struct S2 *l_400 = (void*)0;
            int i;
            ++p_641->g_391[3];
            l_398 = p_641->g_394[6][0];
            (*p_641->g_401) = l_399;
        }
        l_403 = (+p_22);
    }
    return p_641->g_391[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_32(int32_t  p_33, int16_t  p_34, struct S3 * p_641)
{ /* block id: 7 */
    uint16_t l_35 = 0xD33DL;
    return l_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_comm_values p_641->g_41 p_641->g_13 p_641->g_81 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_83 p_641->g_168 p_641->g_165.f3 p_641->g_169 p_641->g_218 p_641->g_98 p_641->g_157 p_641->g_111
 * writes: p_641->g_comm_values p_641->g_41 p_641->g_113 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values
 */
int32_t  func_36(int16_t  p_37, struct S3 * p_641)
{ /* block id: 9 */
    uint32_t l_42 = 0xA1804524L;
    int32_t l_54 = 0x77C83BE7L;
    int32_t l_55 = 0x126A0939L;
    int16_t l_224 = 3L;
    for (p_37 = 0; (p_37 <= (-26)); p_37 = safe_sub_func_uint8_t_u_u(p_37, 5))
    { /* block id: 12 */
        int32_t *l_40[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int64_t *l_49 = (void*)0;
        int64_t *l_50 = (void*)0;
        int64_t *l_51 = (void*)0;
        int64_t *l_52 = (void*)0;
        int64_t *l_53 = (void*)0;
        int i, j;
        l_42++;
        l_55 ^= (safe_add_func_uint32_t_u_u(0x36C745D0L, (safe_mod_func_int16_t_s_s((l_42 != (l_54 = ((p_641->g_comm_values[p_641->tid] |= (&p_641->g_41 == (void*)0)) < 0L))), 0x5D33L))));
        for (p_641->g_41 = (-2); (p_641->g_41 >= 8); ++p_641->g_41)
        { /* block id: 19 */
            uint16_t l_225 = 7UL;
            if (p_641->g_13.z)
            { /* block id: 20 */
                int32_t **l_58 = &l_40[3][0];
                (*l_58) = (void*)0;
            }
            else
            { /* block id: 22 */
                int32_t **l_223 = &l_40[3][0];
                (*l_223) = func_59(p_37, p_37, p_641);
            }
            ++l_225;
        }
        return (*p_641->g_110);
    }
    (*p_641->g_110) = l_42;
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_81 p_641->g_82 p_641->g_83 p_641->g_84 p_641->g_98 p_641->l_comm_values p_641->g_109 p_641->g_113 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_41 p_641->g_156 p_641->g_110 p_641->g_166 p_641->g_168 p_641->g_169 p_641->g_13 p_641->g_165.f3 p_641->g_218 p_641->g_157
 * writes: p_641->g_113 p_641->g_98 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values
 */
int32_t * func_59(int64_t  p_60, int8_t  p_61, struct S3 * p_641)
{ /* block id: 23 */
    uint16_t l_80 = 1UL;
    VECTOR(uint32_t, 8) l_93 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x7B5C16B7L), 0x7B5C16B7L), 0x7B5C16B7L, 0UL, 0x7B5C16B7L);
    VECTOR(int32_t, 2) l_94 = (VECTOR(int32_t, 2))((-6L), (-1L));
    VECTOR(uint32_t, 16) l_97 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x43D007C1L), 0x43D007C1L), 0x43D007C1L, 8UL, 0x43D007C1L, (VECTOR(uint32_t, 2))(8UL, 0x43D007C1L), (VECTOR(uint32_t, 2))(8UL, 0x43D007C1L), 8UL, 0x43D007C1L, 8UL, 0x43D007C1L);
    int64_t *l_101 = (void*)0;
    struct S2 l_106 = {0x81B78F42CBA3753CL,4UL};
    int32_t *l_108 = (void*)0;
    int32_t **l_107[3];
    uint8_t *l_112[8][10] = {{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113},{(void*)0,(void*)0,(void*)0,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113,(void*)0,&p_641->g_113,&p_641->g_113}};
    int16_t l_114 = (-3L);
    uint32_t *l_115 = (void*)0;
    uint32_t *l_116[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_117 = (-1L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_107[i] = &l_108;
    (*p_641->g_110) = (safe_rshift_func_uint8_t_u_s(0UL, (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_74(l_80, (p_641->g_81 == (((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_641->g_82.s6cf859e2267c8cea)).saf2c, ((VECTOR(int32_t, 2))(p_641->g_83.s01)).yxxx, ((VECTOR(int32_t, 8))(p_641->g_84.s12740003)).even))).even)).xyxxxxxxxxyxyyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((((((VECTOR(uint32_t, 4))((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_93.s4567)).even)).xyyxyyyx)).hi)).w || ((VECTOR(int32_t, 8))(l_94.xxyxxxyx)).s5), l_94.y)), (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(18446744073709551614UL, 0xB4C8B43F6205A165L, 1UL, 0x3C451EDC629925D9L)), ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(l_97.s68b3)).odd, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(p_641->g_98.zxwyzxxzyyzywwwx)).s8c, ((VECTOR(uint32_t, 2))(0x4612A8C3L, 1UL))))).xyxy, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(1UL, (p_641->g_98.z = (safe_mul_func_uint8_t_u_u((l_114 = (p_641->g_113 = (((void*)0 != l_101) <= (((safe_mod_func_uint64_t_u_u((((((0x1968L || (((p_641->g_83.s0 && l_97.s2) >= p_641->g_82.sa) < p_641->g_82.s8)) && p_641->g_84.s7) , l_106) , p_641->l_comm_values[(safe_mod_func_uint32_t_u_u(p_641->tid, 6))]) < 0x53C14B3FL), FAKE_DIVERGE(p_641->local_0_offset, get_local_id(0), 10))) , l_107[2]) != p_641->g_109[3][0])))), 0x6EL))), 0x4D0EF1DBL, ((VECTOR(uint32_t, 4))(4294967293UL)), GROUP_DIVERGE(2, 1), 6UL, 4294967295UL, 2UL, 0xE8E729AEL, 0xACEDFCD6L, ((VECTOR(uint32_t, 2))(0x9B6E0F72L)), 4294967293UL)))).odd, ((VECTOR(uint32_t, 8))(0xE4261410L))))).lo))).even))).xxyy, ((VECTOR(uint32_t, 4))(4294967295UL)))))))).x, p_60)))), ((VECTOR(uint32_t, 2))(0xA1F43B5DL)), 0x2916D73FL)).w ^ p_60) | p_641->l_comm_values[(safe_mod_func_uint32_t_u_u(p_641->tid, 6))]) > p_60), p_60)), 7)), l_117, 0x541A25E9L, 6L, 0x44F04045L, ((VECTOR(int32_t, 8))(0L)), p_61, (-2L), 0x0D710777L)).hi)).s3020614164623272, ((VECTOR(int32_t, 16))(0x110B79F6L))))).s81)), 0L)), ((VECTOR(int32_t, 4))(0x744EB2ABL)), ((VECTOR(int32_t, 4))(0x0CAC1D9AL))))).x , &l_108)), l_106, &p_641->g_41, p_60, p_641), p_60)), 1UL)) || 0xA5D6DFA7L), GROUP_DIVERGE(0, 1))), p_641->g_143.f5)) != p_641->g_143.f3), (-7L)))));
    return (*p_641->g_156);
}


/* ------------------------------------------ */
/* 
 * reads : p_641->g_113 p_641->g_135 p_641->g_136 p_641->g_143 p_641->g_41 p_641->g_84 p_641->g_82 p_641->g_156 p_641->g_110 p_641->g_166 p_641->g_168 p_641->g_169 p_641->g_83 p_641->g_13 p_641->g_165.f3 p_641->g_218 p_641->g_98
 * writes: p_641->g_113 p_641->g_135 p_641->g_82 p_641->g_157 p_641->g_111 p_641->g_165.f3 p_641->g_173 p_641->g_188 p_641->g_143.f0 p_641->g_218 p_641->l_comm_values
 */
int16_t  func_74(uint8_t  p_75, int8_t  p_76, struct S2  p_77, int32_t * p_78, uint64_t  p_79, struct S3 * p_641)
{ /* block id: 27 */
    uint64_t l_118 = 0x821C9B562ECAC6B4L;
    int32_t *l_155[2][1][7] = {{{&p_641->g_41,(void*)0,&p_641->g_41,&p_641->g_41,(void*)0,&p_641->g_41,&p_641->g_41}},{{&p_641->g_41,(void*)0,&p_641->g_41,&p_641->g_41,(void*)0,&p_641->g_41,&p_641->g_41}}};
    struct S0 *l_164 = &p_641->g_165;
    VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
    int64_t *l_172 = (void*)0;
    int32_t l_174[8];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_174[i] = 0x75F9DB7EL;
    --l_118;
    for (p_77.f1 = 0; (p_77.f1 != 4); p_77.f1++)
    { /* block id: 31 */
        uint16_t l_149 = 0x39D5L;
        volatile struct S0 *l_159 = &p_641->g_135[1];
        VECTOR(int32_t, 4) l_167 = (VECTOR(int32_t, 4))(0x0B6A6133L, (VECTOR(int32_t, 2))(0x0B6A6133L, (-1L)), (-1L));
        int32_t *l_171 = &p_641->g_165.f3;
        uint64_t l_180 = 0UL;
        uint32_t l_200 = 0UL;
        VECTOR(int32_t, 4) l_205 = (VECTOR(int32_t, 4))(0x02B9B188L, (VECTOR(int32_t, 2))(0x02B9B188L, 1L), 1L);
        int32_t **l_206 = (void*)0;
        int32_t **l_207 = &l_171;
        uint32_t l_216[6][1] = {{0x89467803L},{0x89467803L},{0x89467803L},{0x89467803L},{0x89467803L},{0x89467803L}};
        uint16_t *l_217 = &p_641->g_143.f0;
        int64_t *l_219 = (void*)0;
        int64_t *l_220 = (void*)0;
        int64_t *l_221 = (void*)0;
        uint32_t l_222 = 0xC9B6659CL;
        int i, j;
        for (p_75 = 0; (p_75 >= 38); p_75++)
        { /* block id: 34 */
            uint32_t l_132 = 0xC1911BFEL;
            int32_t *l_144 = &p_641->g_143.f8;
            uint8_t l_150 = 0x7FL;
            struct S2 l_158[9] = {{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL},{0x3C4A37C750F7EA90L,0x73ADL}};
            int i;
            for (p_641->g_113 = (-23); (p_641->g_113 >= 5); ++p_641->g_113)
            { /* block id: 37 */
                int32_t *l_127 = (void*)0;
                int32_t *l_128 = (void*)0;
                int32_t *l_129 = (void*)0;
                int32_t *l_130 = (void*)0;
                int32_t *l_131 = (void*)0;
                int32_t *l_151 = (void*)0;
                int32_t *l_152 = (void*)0;
                int32_t *l_153 = (void*)0;
                int32_t *l_154 = (void*)0;
                ++l_132;
                (*p_641->g_136) = p_641->g_135[1];
                if (l_118)
                    continue;
                p_641->g_82.s0 |= (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((VECTOR(int64_t, 2))(1L, (-2L))).odd & (safe_mod_func_uint8_t_u_u(((((p_641->g_143 , l_144) != (p_641->g_143.f0 , l_130)) , (safe_lshift_func_uint8_t_u_u(p_79, (safe_rshift_func_uint8_t_u_u(0x77L, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(0x59L, 0x0AL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((*p_78) && l_149), 1UL, 0UL, 0x83L)).zwzwzwyxyyxyzxzz)).s345f, ((VECTOR(uint8_t, 8))(0xB7L, 248UL, 1UL, l_150, ((VECTOR(uint8_t, 4))(248UL)))).odd))).odd, ((VECTOR(uint8_t, 2))(0UL))))).xyyx)), 255UL, 255UL)), ((VECTOR(uint8_t, 8))(0xB0L))))).s2))))) , 251UL), p_76))), p_641->g_84.s6)), 0));
            }
            (*p_641->g_156) = l_155[1][0][1];
            l_159 = (l_158[7] , &p_641->g_135[5]);
            return (*l_144);
        }
        (*p_641->g_110) = 0x67B9FCEEL;
        if ((p_75 != (((((safe_div_func_uint16_t_u_u((((((*l_159) , ((*l_171) = (p_641->g_82.s8 , ((l_164 == &p_641->g_135[7]) , ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_641->g_166.yyywxxwxxxwwzwwz)).sdf, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_167.xy)), ((VECTOR(int32_t, 16))(p_641->g_168.zyxyxxwwwywzzwyx)).sfb))).xxyyyxyxyxyxyyxy, ((VECTOR(int32_t, 16))(p_641->g_169.yxxxxyxxyxxxyxyx)), ((VECTOR(int32_t, 2))(l_170.xz)).yyxyyxyxxyxyxxxy))).sa4, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x2DA153D4L, (-1L))).xxyxyxyyyyyxxyxy)).sf2))).lo)))) , ((((p_641->g_173 = l_172) == (void*)0) , (p_77.f1 <= ((void*)0 != l_155[0][0][6]))) < GROUP_DIVERGE(2, 1))) , p_641->g_83.s4) && p_641->g_83.s1), p_76)) >= 0x693F44C74F74A46DL) && p_641->g_13.w) == 4294967286UL) > l_174[6])))
        { /* block id: 50 */
            int16_t l_175 = 0x3578L;
            int32_t l_176 = (-1L);
            int32_t l_177 = 0x6365C24DL;
            int32_t l_178 = (-1L);
            int32_t l_179 = 0x599E8472L;
            l_180++;
        }
        else
        { /* block id: 52 */
            int8_t *l_187[6] = {&p_641->g_188,&p_641->g_188,&p_641->g_188,&p_641->g_188,&p_641->g_188,&p_641->g_188};
            int32_t l_191 = 0x1F4FE024L;
            int64_t **l_196[8] = {&p_641->g_173,&p_641->g_173,&p_641->g_173,&p_641->g_173,&p_641->g_173,&p_641->g_173,&p_641->g_173,&p_641->g_173};
            int64_t *l_197 = (void*)0;
            struct S0 *l_198 = &p_641->g_165;
            int32_t l_199 = (-8L);
            int i;
            l_200 = ((p_76 = (p_641->g_188 = (((safe_mod_func_int8_t_s_s(1L, p_641->g_168.x)) < p_79) < (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_641->group_0_offset, get_group_id(0), 10), (l_164 != l_164)))))) , (safe_sub_func_uint16_t_u_u(l_191, (l_199 = ((p_77.f0 = ((safe_rshift_func_int16_t_s_u((((((safe_sub_func_uint16_t_u_u((((+(0UL && (((((l_197 = l_172) != l_172) | p_641->g_165.f3) , p_641->g_169.y) , l_191))) & l_191) ^ 0x29266387L), p_77.f1)) , l_198) == (void*)0) ^ p_77.f0) | 0x0A9E941CL), FAKE_DIVERGE(p_641->global_0_offset, get_global_id(0), 10))) > FAKE_DIVERGE(p_641->global_2_offset, get_global_id(2), 10))) < (-1L))))));
        }
        l_222 |= (((((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7EL, 0x7BL)), (-8L), 0L)).x, (((l_167.x &= 0L) == (safe_div_func_uint16_t_u_u(((l_200 || ((((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_205.zx)).yyxy))).x , (FAKE_DIVERGE(p_641->global_0_offset, get_global_id(0), 10) , l_155[0][0][4])) != ((*l_207) = p_78))) >= p_75), (((p_641->l_comm_values[(safe_mod_func_uint32_t_u_u(p_641->tid, 6))] = ((p_641->g_218 |= ((((safe_rshift_func_uint16_t_u_u(((*l_217) = (safe_div_func_int64_t_s_s((((void*)0 != &p_75) , ((safe_mul_func_uint8_t_u_u(((((*p_641->g_136) , (0L == p_641->g_143.f1)) >= (-8L)) , l_216[5][0]), 255UL)) | p_76)), GROUP_DIVERGE(1, 1)))), 15)) < 0L) || 0x2D47CF242F41EC3FL) > 1L)) > 65533UL)) > p_641->g_98.x) , p_79)))) & GROUP_DIVERGE(0, 1)))) < p_641->g_168.w) >= p_641->g_143.f3) >= 0x498B0FE1E5F7F78DL) | 0x44E969EF097FE925L);
    }
    return p_77.f1;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[37];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 37; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S3 c_642;
    struct S3* p_641 = &c_642;
    struct S3 c_643 = {
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x3DL), 0x3DL), // p_641->g_13
        0x21EE3199L, // p_641->g_41
        (void*)0, // p_641->g_81
        (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x2059E615L), 0x2059E615L), 0x2059E615L, 9L, 0x2059E615L, (VECTOR(int32_t, 2))(9L, 0x2059E615L), (VECTOR(int32_t, 2))(9L, 0x2059E615L), 9L, 0x2059E615L, 9L, 0x2059E615L), // p_641->g_82
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_641->g_83
        (VECTOR(int32_t, 8))(0x08D8D3B6L, (VECTOR(int32_t, 4))(0x08D8D3B6L, (VECTOR(int32_t, 2))(0x08D8D3B6L, 0x766AA6F6L), 0x766AA6F6L), 0x766AA6F6L, 0x08D8D3B6L, 0x766AA6F6L), // p_641->g_84
        (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xA5788241L), 0xA5788241L), // p_641->g_98
        4L, // p_641->g_111
        &p_641->g_111, // p_641->g_110
        {{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110},{&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110,&p_641->g_110}}, // p_641->g_109
        254UL, // p_641->g_113
        {{1UL,0x4354L,0x00L,0x31119AB3L,0xDB3D75B1L},{7UL,0x030EL,0x2AL,0x01E45C98L,0x270A05F3L},{4294967295UL,0x7D36L,255UL,0x0232F7DBL,0x75658741L},{7UL,0x030EL,0x2AL,0x01E45C98L,0x270A05F3L},{1UL,0x4354L,0x00L,0x31119AB3L,0xDB3D75B1L},{1UL,0x4354L,0x00L,0x31119AB3L,0xDB3D75B1L},{7UL,0x030EL,0x2AL,0x01E45C98L,0x270A05F3L},{4294967295UL,0x7D36L,255UL,0x0232F7DBL,0x75658741L},{7UL,0x030EL,0x2AL,0x01E45C98L,0x270A05F3L},{1UL,0x4354L,0x00L,0x31119AB3L,0xDB3D75B1L}}, // p_641->g_135
        &p_641->g_135[2], // p_641->g_136
        {0xA9EEL,254UL,0UL,0x02777045D9182FBEL,18446744073709551615UL,0x36AFDF52L,1UL,4294967295UL,0x6AC12866L}, // p_641->g_143
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_641->g_157
        &p_641->g_157[1], // p_641->g_156
        {0UL,0x6804L,0xF2L,0x6E2DABF5L,4294967292UL}, // p_641->g_165
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), // p_641->g_166
        (VECTOR(int32_t, 4))(0x08772C45L, (VECTOR(int32_t, 2))(0x08772C45L, 0x1EC57159L), 0x1EC57159L), // p_641->g_168
        (VECTOR(int32_t, 2))(0x34FA6D5EL, 0x49B0C17DL), // p_641->g_169
        (void*)0, // p_641->g_173
        (-1L), // p_641->g_188
        0x37L, // p_641->g_218
        65535UL, // p_641->g_231
        (void*)0, // p_641->g_234
        (void*)0, // p_641->g_236
        &p_641->g_236, // p_641->g_235
        (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xC3CD1D03B48941EFL), // p_641->g_242
        (void*)0, // p_641->g_254
        0x47D957DFL, // p_641->g_259
        {{{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)}},{{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)},{3L,(-7L),9L,1L,(-1L),0x23CEED60ED67F3FFL,0x2C7C001A6F62464DL,(-10L)}}}, // p_641->g_273
        (VECTOR(int32_t, 2))((-9L), (-8L)), // p_641->g_280
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 5UL), 5UL), // p_641->g_282
        (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 255UL), 255UL), 255UL, 253UL, 255UL), // p_641->g_284
        (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 1UL), 1UL), // p_641->g_285
        (VECTOR(uint8_t, 16))(0x1AL, (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), 255UL), 255UL, 0x1AL, 255UL, (VECTOR(uint8_t, 2))(0x1AL, 255UL), (VECTOR(uint8_t, 2))(0x1AL, 255UL), 0x1AL, 255UL, 0x1AL, 255UL), // p_641->g_286
        (VECTOR(uint8_t, 2))(0x07L, 0xE3L), // p_641->g_288
        &p_641->g_236, // p_641->g_306
        (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-9L)), (-9L)), (-9L), 5L, (-9L), (VECTOR(int16_t, 2))(5L, (-9L)), (VECTOR(int16_t, 2))(5L, (-9L)), 5L, (-9L), 5L, (-9L)), // p_641->g_314
        (void*)0, // p_641->g_317
        (VECTOR(int16_t, 4))(0x288FL, (VECTOR(int16_t, 2))(0x288FL, 0x6D60L), 0x6D60L), // p_641->g_347
        {3UL,0x6236AC3FL,3UL,3UL,0x6236AC3FL,3UL}, // p_641->g_391
        &p_641->g_165.f2, // p_641->g_395
        {{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395},{&p_641->g_395,&p_641->g_395,&p_641->g_395}}, // p_641->g_394
        {18446744073709551611UL,65526UL}, // p_641->g_402
        &p_641->g_402, // p_641->g_401
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_641->g_427
        0x67B1F62FL, // p_641->g_433
        &p_641->g_254, // p_641->g_441
        {1UL,-1L,0x4FL,3L,0x77BF7AD2L}, // p_641->g_449
        {{0xC2C9F82DL,0L,7UL,-6L,1UL},{0xC2C9F82DL,0L,7UL,-6L,1UL},{0xC2C9F82DL,0L,7UL,-6L,1UL},{0xC2C9F82DL,0L,7UL,-6L,1UL},{0xC2C9F82DL,0L,7UL,-6L,1UL},{0xC2C9F82DL,0L,7UL,-6L,1UL}}, // p_641->g_454
        (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L)), // p_641->g_491
        {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_641->g_507
        &p_641->g_507[6][0][1], // p_641->g_506
        0xF0DAADC0A17DFEC0L, // p_641->g_509
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_641->g_519
        {&p_641->g_519[4],&p_641->g_519[4],&p_641->g_519[4],&p_641->g_519[4]}, // p_641->g_518
        {{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L},{0xDB26CCA9L,1L,255UL,-1L,0xD5F6C763L},{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L},{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L},{0xDB26CCA9L,1L,255UL,-1L,0xD5F6C763L},{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L},{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L},{0xDB26CCA9L,1L,255UL,-1L,0xD5F6C763L},{1UL,0x70CBL,0UL,0x056784B7L,0xBE5A17A4L}}, // p_641->g_522
        0xD407L, // p_641->g_622
        {{3UL,0L,0xC3L,0x5F132572L,0xE226E299L},{3UL,0L,0xC3L,0x5F132572L,0xE226E299L},{3UL,0L,0xC3L,0x5F132572L,0xE226E299L}}, // p_641->g_630
        &p_641->g_135[1], // p_641->g_631
        0, // p_641->v_collective
        sequence_input[get_global_id(0)], // p_641->global_0_offset
        sequence_input[get_global_id(1)], // p_641->global_1_offset
        sequence_input[get_global_id(2)], // p_641->global_2_offset
        sequence_input[get_local_id(0)], // p_641->local_0_offset
        sequence_input[get_local_id(1)], // p_641->local_1_offset
        sequence_input[get_local_id(2)], // p_641->local_2_offset
        sequence_input[get_group_id(0)], // p_641->group_0_offset
        sequence_input[get_group_id(1)], // p_641->group_1_offset
        sequence_input[get_group_id(2)], // p_641->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_641->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_642 = c_643;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_641);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_641->g_13.x, "p_641->g_13.x", print_hash_value);
    transparent_crc(p_641->g_13.y, "p_641->g_13.y", print_hash_value);
    transparent_crc(p_641->g_13.z, "p_641->g_13.z", print_hash_value);
    transparent_crc(p_641->g_13.w, "p_641->g_13.w", print_hash_value);
    transparent_crc(p_641->g_41, "p_641->g_41", print_hash_value);
    transparent_crc(p_641->g_82.s0, "p_641->g_82.s0", print_hash_value);
    transparent_crc(p_641->g_82.s1, "p_641->g_82.s1", print_hash_value);
    transparent_crc(p_641->g_82.s2, "p_641->g_82.s2", print_hash_value);
    transparent_crc(p_641->g_82.s3, "p_641->g_82.s3", print_hash_value);
    transparent_crc(p_641->g_82.s4, "p_641->g_82.s4", print_hash_value);
    transparent_crc(p_641->g_82.s5, "p_641->g_82.s5", print_hash_value);
    transparent_crc(p_641->g_82.s6, "p_641->g_82.s6", print_hash_value);
    transparent_crc(p_641->g_82.s7, "p_641->g_82.s7", print_hash_value);
    transparent_crc(p_641->g_82.s8, "p_641->g_82.s8", print_hash_value);
    transparent_crc(p_641->g_82.s9, "p_641->g_82.s9", print_hash_value);
    transparent_crc(p_641->g_82.sa, "p_641->g_82.sa", print_hash_value);
    transparent_crc(p_641->g_82.sb, "p_641->g_82.sb", print_hash_value);
    transparent_crc(p_641->g_82.sc, "p_641->g_82.sc", print_hash_value);
    transparent_crc(p_641->g_82.sd, "p_641->g_82.sd", print_hash_value);
    transparent_crc(p_641->g_82.se, "p_641->g_82.se", print_hash_value);
    transparent_crc(p_641->g_82.sf, "p_641->g_82.sf", print_hash_value);
    transparent_crc(p_641->g_83.s0, "p_641->g_83.s0", print_hash_value);
    transparent_crc(p_641->g_83.s1, "p_641->g_83.s1", print_hash_value);
    transparent_crc(p_641->g_83.s2, "p_641->g_83.s2", print_hash_value);
    transparent_crc(p_641->g_83.s3, "p_641->g_83.s3", print_hash_value);
    transparent_crc(p_641->g_83.s4, "p_641->g_83.s4", print_hash_value);
    transparent_crc(p_641->g_83.s5, "p_641->g_83.s5", print_hash_value);
    transparent_crc(p_641->g_83.s6, "p_641->g_83.s6", print_hash_value);
    transparent_crc(p_641->g_83.s7, "p_641->g_83.s7", print_hash_value);
    transparent_crc(p_641->g_84.s0, "p_641->g_84.s0", print_hash_value);
    transparent_crc(p_641->g_84.s1, "p_641->g_84.s1", print_hash_value);
    transparent_crc(p_641->g_84.s2, "p_641->g_84.s2", print_hash_value);
    transparent_crc(p_641->g_84.s3, "p_641->g_84.s3", print_hash_value);
    transparent_crc(p_641->g_84.s4, "p_641->g_84.s4", print_hash_value);
    transparent_crc(p_641->g_84.s5, "p_641->g_84.s5", print_hash_value);
    transparent_crc(p_641->g_84.s6, "p_641->g_84.s6", print_hash_value);
    transparent_crc(p_641->g_84.s7, "p_641->g_84.s7", print_hash_value);
    transparent_crc(p_641->g_98.x, "p_641->g_98.x", print_hash_value);
    transparent_crc(p_641->g_98.y, "p_641->g_98.y", print_hash_value);
    transparent_crc(p_641->g_98.z, "p_641->g_98.z", print_hash_value);
    transparent_crc(p_641->g_98.w, "p_641->g_98.w", print_hash_value);
    transparent_crc(p_641->g_111, "p_641->g_111", print_hash_value);
    transparent_crc(p_641->g_113, "p_641->g_113", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_641->g_135[i].f0, "p_641->g_135[i].f0", print_hash_value);
        transparent_crc(p_641->g_135[i].f1, "p_641->g_135[i].f1", print_hash_value);
        transparent_crc(p_641->g_135[i].f2, "p_641->g_135[i].f2", print_hash_value);
        transparent_crc(p_641->g_135[i].f3, "p_641->g_135[i].f3", print_hash_value);
        transparent_crc(p_641->g_135[i].f4, "p_641->g_135[i].f4", print_hash_value);

    }
    transparent_crc(p_641->g_143.f0, "p_641->g_143.f0", print_hash_value);
    transparent_crc(p_641->g_143.f1, "p_641->g_143.f1", print_hash_value);
    transparent_crc(p_641->g_143.f2, "p_641->g_143.f2", print_hash_value);
    transparent_crc(p_641->g_143.f3, "p_641->g_143.f3", print_hash_value);
    transparent_crc(p_641->g_143.f4, "p_641->g_143.f4", print_hash_value);
    transparent_crc(p_641->g_143.f5, "p_641->g_143.f5", print_hash_value);
    transparent_crc(p_641->g_143.f6, "p_641->g_143.f6", print_hash_value);
    transparent_crc(p_641->g_143.f7, "p_641->g_143.f7", print_hash_value);
    transparent_crc(p_641->g_143.f8, "p_641->g_143.f8", print_hash_value);
    transparent_crc(p_641->g_165.f0, "p_641->g_165.f0", print_hash_value);
    transparent_crc(p_641->g_165.f1, "p_641->g_165.f1", print_hash_value);
    transparent_crc(p_641->g_165.f2, "p_641->g_165.f2", print_hash_value);
    transparent_crc(p_641->g_165.f3, "p_641->g_165.f3", print_hash_value);
    transparent_crc(p_641->g_165.f4, "p_641->g_165.f4", print_hash_value);
    transparent_crc(p_641->g_166.x, "p_641->g_166.x", print_hash_value);
    transparent_crc(p_641->g_166.y, "p_641->g_166.y", print_hash_value);
    transparent_crc(p_641->g_166.z, "p_641->g_166.z", print_hash_value);
    transparent_crc(p_641->g_166.w, "p_641->g_166.w", print_hash_value);
    transparent_crc(p_641->g_168.x, "p_641->g_168.x", print_hash_value);
    transparent_crc(p_641->g_168.y, "p_641->g_168.y", print_hash_value);
    transparent_crc(p_641->g_168.z, "p_641->g_168.z", print_hash_value);
    transparent_crc(p_641->g_168.w, "p_641->g_168.w", print_hash_value);
    transparent_crc(p_641->g_169.x, "p_641->g_169.x", print_hash_value);
    transparent_crc(p_641->g_169.y, "p_641->g_169.y", print_hash_value);
    transparent_crc(p_641->g_188, "p_641->g_188", print_hash_value);
    transparent_crc(p_641->g_218, "p_641->g_218", print_hash_value);
    transparent_crc(p_641->g_231, "p_641->g_231", print_hash_value);
    transparent_crc(p_641->g_242.x, "p_641->g_242.x", print_hash_value);
    transparent_crc(p_641->g_242.y, "p_641->g_242.y", print_hash_value);
    transparent_crc(p_641->g_259, "p_641->g_259", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_641->g_273[i][j][k], "p_641->g_273[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_641->g_280.x, "p_641->g_280.x", print_hash_value);
    transparent_crc(p_641->g_280.y, "p_641->g_280.y", print_hash_value);
    transparent_crc(p_641->g_282.x, "p_641->g_282.x", print_hash_value);
    transparent_crc(p_641->g_282.y, "p_641->g_282.y", print_hash_value);
    transparent_crc(p_641->g_282.z, "p_641->g_282.z", print_hash_value);
    transparent_crc(p_641->g_282.w, "p_641->g_282.w", print_hash_value);
    transparent_crc(p_641->g_284.s0, "p_641->g_284.s0", print_hash_value);
    transparent_crc(p_641->g_284.s1, "p_641->g_284.s1", print_hash_value);
    transparent_crc(p_641->g_284.s2, "p_641->g_284.s2", print_hash_value);
    transparent_crc(p_641->g_284.s3, "p_641->g_284.s3", print_hash_value);
    transparent_crc(p_641->g_284.s4, "p_641->g_284.s4", print_hash_value);
    transparent_crc(p_641->g_284.s5, "p_641->g_284.s5", print_hash_value);
    transparent_crc(p_641->g_284.s6, "p_641->g_284.s6", print_hash_value);
    transparent_crc(p_641->g_284.s7, "p_641->g_284.s7", print_hash_value);
    transparent_crc(p_641->g_285.x, "p_641->g_285.x", print_hash_value);
    transparent_crc(p_641->g_285.y, "p_641->g_285.y", print_hash_value);
    transparent_crc(p_641->g_285.z, "p_641->g_285.z", print_hash_value);
    transparent_crc(p_641->g_285.w, "p_641->g_285.w", print_hash_value);
    transparent_crc(p_641->g_286.s0, "p_641->g_286.s0", print_hash_value);
    transparent_crc(p_641->g_286.s1, "p_641->g_286.s1", print_hash_value);
    transparent_crc(p_641->g_286.s2, "p_641->g_286.s2", print_hash_value);
    transparent_crc(p_641->g_286.s3, "p_641->g_286.s3", print_hash_value);
    transparent_crc(p_641->g_286.s4, "p_641->g_286.s4", print_hash_value);
    transparent_crc(p_641->g_286.s5, "p_641->g_286.s5", print_hash_value);
    transparent_crc(p_641->g_286.s6, "p_641->g_286.s6", print_hash_value);
    transparent_crc(p_641->g_286.s7, "p_641->g_286.s7", print_hash_value);
    transparent_crc(p_641->g_286.s8, "p_641->g_286.s8", print_hash_value);
    transparent_crc(p_641->g_286.s9, "p_641->g_286.s9", print_hash_value);
    transparent_crc(p_641->g_286.sa, "p_641->g_286.sa", print_hash_value);
    transparent_crc(p_641->g_286.sb, "p_641->g_286.sb", print_hash_value);
    transparent_crc(p_641->g_286.sc, "p_641->g_286.sc", print_hash_value);
    transparent_crc(p_641->g_286.sd, "p_641->g_286.sd", print_hash_value);
    transparent_crc(p_641->g_286.se, "p_641->g_286.se", print_hash_value);
    transparent_crc(p_641->g_286.sf, "p_641->g_286.sf", print_hash_value);
    transparent_crc(p_641->g_288.x, "p_641->g_288.x", print_hash_value);
    transparent_crc(p_641->g_288.y, "p_641->g_288.y", print_hash_value);
    transparent_crc(p_641->g_314.s0, "p_641->g_314.s0", print_hash_value);
    transparent_crc(p_641->g_314.s1, "p_641->g_314.s1", print_hash_value);
    transparent_crc(p_641->g_314.s2, "p_641->g_314.s2", print_hash_value);
    transparent_crc(p_641->g_314.s3, "p_641->g_314.s3", print_hash_value);
    transparent_crc(p_641->g_314.s4, "p_641->g_314.s4", print_hash_value);
    transparent_crc(p_641->g_314.s5, "p_641->g_314.s5", print_hash_value);
    transparent_crc(p_641->g_314.s6, "p_641->g_314.s6", print_hash_value);
    transparent_crc(p_641->g_314.s7, "p_641->g_314.s7", print_hash_value);
    transparent_crc(p_641->g_314.s8, "p_641->g_314.s8", print_hash_value);
    transparent_crc(p_641->g_314.s9, "p_641->g_314.s9", print_hash_value);
    transparent_crc(p_641->g_314.sa, "p_641->g_314.sa", print_hash_value);
    transparent_crc(p_641->g_314.sb, "p_641->g_314.sb", print_hash_value);
    transparent_crc(p_641->g_314.sc, "p_641->g_314.sc", print_hash_value);
    transparent_crc(p_641->g_314.sd, "p_641->g_314.sd", print_hash_value);
    transparent_crc(p_641->g_314.se, "p_641->g_314.se", print_hash_value);
    transparent_crc(p_641->g_314.sf, "p_641->g_314.sf", print_hash_value);
    transparent_crc(p_641->g_347.x, "p_641->g_347.x", print_hash_value);
    transparent_crc(p_641->g_347.y, "p_641->g_347.y", print_hash_value);
    transparent_crc(p_641->g_347.z, "p_641->g_347.z", print_hash_value);
    transparent_crc(p_641->g_347.w, "p_641->g_347.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_641->g_391[i], "p_641->g_391[i]", print_hash_value);

    }
    transparent_crc(p_641->g_402.f0, "p_641->g_402.f0", print_hash_value);
    transparent_crc(p_641->g_402.f1, "p_641->g_402.f1", print_hash_value);
    transparent_crc(p_641->g_427.s0, "p_641->g_427.s0", print_hash_value);
    transparent_crc(p_641->g_427.s1, "p_641->g_427.s1", print_hash_value);
    transparent_crc(p_641->g_427.s2, "p_641->g_427.s2", print_hash_value);
    transparent_crc(p_641->g_427.s3, "p_641->g_427.s3", print_hash_value);
    transparent_crc(p_641->g_427.s4, "p_641->g_427.s4", print_hash_value);
    transparent_crc(p_641->g_427.s5, "p_641->g_427.s5", print_hash_value);
    transparent_crc(p_641->g_427.s6, "p_641->g_427.s6", print_hash_value);
    transparent_crc(p_641->g_427.s7, "p_641->g_427.s7", print_hash_value);
    transparent_crc(p_641->g_433, "p_641->g_433", print_hash_value);
    transparent_crc(p_641->g_449.f0, "p_641->g_449.f0", print_hash_value);
    transparent_crc(p_641->g_449.f1, "p_641->g_449.f1", print_hash_value);
    transparent_crc(p_641->g_449.f2, "p_641->g_449.f2", print_hash_value);
    transparent_crc(p_641->g_449.f3, "p_641->g_449.f3", print_hash_value);
    transparent_crc(p_641->g_449.f4, "p_641->g_449.f4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_641->g_454[i].f0, "p_641->g_454[i].f0", print_hash_value);
        transparent_crc(p_641->g_454[i].f1, "p_641->g_454[i].f1", print_hash_value);
        transparent_crc(p_641->g_454[i].f2, "p_641->g_454[i].f2", print_hash_value);
        transparent_crc(p_641->g_454[i].f3, "p_641->g_454[i].f3", print_hash_value);
        transparent_crc(p_641->g_454[i].f4, "p_641->g_454[i].f4", print_hash_value);

    }
    transparent_crc(p_641->g_491.x, "p_641->g_491.x", print_hash_value);
    transparent_crc(p_641->g_491.y, "p_641->g_491.y", print_hash_value);
    transparent_crc(p_641->g_491.z, "p_641->g_491.z", print_hash_value);
    transparent_crc(p_641->g_491.w, "p_641->g_491.w", print_hash_value);
    transparent_crc(p_641->g_509, "p_641->g_509", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_641->g_522[i].f0, "p_641->g_522[i].f0", print_hash_value);
        transparent_crc(p_641->g_522[i].f1, "p_641->g_522[i].f1", print_hash_value);
        transparent_crc(p_641->g_522[i].f2, "p_641->g_522[i].f2", print_hash_value);
        transparent_crc(p_641->g_522[i].f3, "p_641->g_522[i].f3", print_hash_value);
        transparent_crc(p_641->g_522[i].f4, "p_641->g_522[i].f4", print_hash_value);

    }
    transparent_crc(p_641->g_622, "p_641->g_622", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_641->g_630[i].f0, "p_641->g_630[i].f0", print_hash_value);
        transparent_crc(p_641->g_630[i].f1, "p_641->g_630[i].f1", print_hash_value);
        transparent_crc(p_641->g_630[i].f2, "p_641->g_630[i].f2", print_hash_value);
        transparent_crc(p_641->g_630[i].f3, "p_641->g_630[i].f3", print_hash_value);
        transparent_crc(p_641->g_630[i].f4, "p_641->g_630[i].f4", print_hash_value);

    }
    transparent_crc(p_641->v_collective, "p_641->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 37; i++)
            transparent_crc(p_641->g_special_values[i + 37 * get_linear_group_id()], "p_641->g_special_values[i + 37 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 37; i++)
            transparent_crc(p_641->l_special_values[i], "p_641->l_special_values[i]", print_hash_value);
    transparent_crc(p_641->l_comm_values[get_linear_local_id()], "p_641->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_641->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_641->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
