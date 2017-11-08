// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,73,1 -l 55,1,1
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
{18,4,25,19,23,42,9,0,27,41,31,14,7,32,53,46,51,8,38,34,16,49,22,2,44,11,6,43,29,35,50,26,47,1,21,12,3,13,15,48,37,24,30,45,10,39,20,5,52,17,40,33,28,54,36}, // permutation 0
{37,20,10,40,49,51,24,36,18,35,0,27,3,1,44,26,5,16,17,28,12,21,9,7,34,6,46,11,52,47,38,32,23,45,4,30,25,8,19,33,14,31,43,42,48,41,15,29,53,2,54,13,39,50,22}, // permutation 1
{35,37,52,42,15,31,33,14,2,19,1,47,48,26,34,22,51,12,8,16,13,36,9,5,45,11,6,17,38,27,3,25,50,7,46,41,28,53,49,24,30,10,20,23,29,21,40,32,39,0,54,18,4,44,43}, // permutation 2
{35,10,30,50,21,34,19,14,40,1,8,28,27,11,5,25,49,48,42,53,4,54,44,52,3,17,23,45,41,37,36,33,6,16,24,32,9,2,29,7,15,20,0,12,22,51,18,31,46,13,43,39,26,38,47}, // permutation 3
{1,33,46,6,9,21,4,14,36,50,24,41,39,27,22,2,7,26,3,16,19,18,53,11,17,12,40,32,13,37,35,52,43,25,54,15,48,45,0,23,31,28,38,34,8,42,47,30,51,49,5,44,10,29,20}, // permutation 4
{23,28,13,34,45,40,5,30,24,17,9,8,32,37,49,42,18,22,7,53,11,26,20,48,2,1,41,39,50,29,43,21,38,52,0,36,27,4,3,6,33,19,31,12,14,47,54,46,25,10,44,51,15,16,35}, // permutation 5
{49,34,41,15,9,32,7,18,50,16,51,40,28,53,26,5,19,3,48,35,12,13,6,10,39,21,52,20,42,0,33,22,44,23,2,11,37,14,17,45,36,38,8,24,43,54,31,46,1,47,4,30,27,25,29}, // permutation 6
{1,34,19,12,4,20,22,2,11,24,0,43,25,7,26,54,28,47,35,41,51,45,31,3,14,5,46,49,16,9,37,50,8,33,21,39,6,44,29,23,17,27,18,15,38,10,13,42,53,52,32,30,40,48,36}, // permutation 7
{54,15,13,12,28,26,5,0,23,2,18,8,43,16,25,49,30,11,22,35,51,24,47,52,17,44,6,32,39,29,48,40,9,46,36,7,4,50,27,14,20,33,31,19,21,41,45,38,3,10,53,42,1,34,37}, // permutation 8
{28,10,33,13,43,19,52,20,8,29,45,50,16,12,0,42,26,49,46,30,44,24,15,18,31,1,51,23,39,27,17,40,36,4,25,32,35,48,6,37,7,41,5,14,53,21,11,22,34,54,38,47,2,3,9} // permutation 9
};

// Seed: 2485115088

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   volatile uint64_t  f2;
   int16_t  f3;
   int8_t  f4;
   int8_t  f5;
   volatile int16_t  f6;
   volatile uint8_t  f7;
   volatile int32_t  f8;
};

struct S1 {
   uint64_t  f0;
   int32_t  f1;
   int16_t  f2;
   volatile int64_t  f3;
   int64_t  f4;
};

struct S2 {
   volatile int32_t  f0;
   volatile int32_t  f1;
   struct S1  f2;
   uint32_t  f3;
   volatile uint8_t  f4;
   int16_t  f5;
   volatile int64_t  f6;
};

struct S4 {
   volatile int32_t  f0;
   volatile int64_t  f1;
   int64_t  f2;
   int32_t  f3;
   int64_t  f4;
   volatile uint64_t  f5;
   uint8_t  f6;
   struct S0  f7;
   struct S0  f8;
   uint32_t  f9;
};

struct S7 {
    VECTOR(int64_t, 16) g_7;
    VECTOR(int64_t, 16) g_8;
    int64_t * volatile g_18;
    int32_t g_24[8][4][8];
    int32_t *g_35;
    int32_t g_40;
    VECTOR(int16_t, 2) g_45;
    VECTOR(int64_t, 2) g_56;
    VECTOR(int16_t, 4) g_64;
    uint32_t g_97;
    int64_t *g_109[8];
    VECTOR(uint64_t, 16) g_110;
    uint8_t g_114;
    int8_t g_119;
    uint32_t *g_154;
    int8_t g_166;
    VECTOR(uint64_t, 2) g_191;
    int32_t g_199;
    VECTOR(uint16_t, 4) g_202;
    VECTOR(uint64_t, 2) g_203;
    VECTOR(int8_t, 4) g_220;
    struct S0 g_227;
    struct S0 g_228;
    struct S0 g_229;
    struct S0 g_230;
    struct S0 g_231;
    struct S0 g_232;
    struct S0 g_233[10];
    struct S0 g_234;
    struct S0 g_235;
    struct S0 g_236;
    struct S0 g_237[7][1][3];
    struct S0 g_238[5];
    struct S0 g_239;
    struct S0 g_240;
    struct S0 g_241;
    struct S0 g_242;
    struct S0 g_243;
    struct S0 g_244;
    struct S0 g_245;
    struct S0 g_246;
    uint32_t g_250;
    VECTOR(int16_t, 4) g_254;
    VECTOR(uint16_t, 2) g_255;
    VECTOR(int32_t, 8) g_276;
    VECTOR(int8_t, 4) g_282;
    int32_t *g_289;
    int32_t **g_288;
    VECTOR(uint64_t, 16) g_299;
    VECTOR(int16_t, 4) g_346;
    VECTOR(int32_t, 2) g_362;
    VECTOR(int32_t, 16) g_365;
    struct S2 g_388;
    struct S2 g_389;
    struct S2 g_390[10][2];
    struct S2 g_391;
    struct S2 *g_387[10][1];
    struct S2 g_394;
    VECTOR(uint16_t, 8) g_425;
    volatile VECTOR(uint16_t, 8) g_427;
    struct S4 g_435;
    struct S4 * volatile g_436;
    struct S4 * volatile g_437;
    int32_t g_440;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint16_t  func_1(struct S7 * p_441);
int16_t  func_2(int64_t  p_3, uint32_t  p_4, uint32_t  p_5, uint64_t  p_6, struct S7 * p_441);
uint64_t  func_15(int16_t  p_16, int16_t  p_17, struct S7 * p_441);
uint32_t  func_30(int32_t * p_31, int32_t * p_32, int16_t  p_33, int64_t * p_34, struct S7 * p_441);
int32_t * func_36(int64_t  p_37, uint32_t  p_38, struct S7 * p_441);
uint32_t  func_46(int8_t  p_47, struct S7 * p_441);
int32_t  func_59(int8_t  p_60, int8_t  p_61, struct S7 * p_441);
uint32_t  func_74(uint16_t  p_75, uint64_t  p_76, int32_t * p_77, int64_t * p_78, struct S7 * p_441);
uint8_t  func_79(uint32_t * p_80, uint32_t * p_81, int32_t * p_82, int32_t  p_83, struct S7 * p_441);
uint32_t * func_84(uint32_t  p_85, uint32_t * p_86, uint16_t  p_87, struct S7 * p_441);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_441->g_7 p_441->g_8 p_441->g_comm_values p_441->g_18 p_441->g_24 p_441->g_35 p_441->g_40 p_441->g_45 p_441->g_56 p_441->g_64 p_441->g_250 p_441->g_254 p_441->g_255 p_441->g_241.f1 p_441->g_243.f1 p_441->g_220 p_441->g_232.f1 p_441->g_154 p_441->g_97 p_441->g_299 p_441->g_231.f5 p_441->g_240.f5 p_441->g_289 p_441->g_288 p_441->g_235.f5 p_441->g_276 p_441->g_241.f4 p_441->g_230.f4 p_441->g_346 p_441->g_238.f1 p_441->g_245.f0 p_441->g_362 p_441->g_365 p_441->g_245.f3 p_441->g_245.f1 p_441->g_387 p_441->g_245.f5 p_441->g_242.f5 p_441->g_227.f0 p_441->g_425 p_441->g_427 p_441->g_232.f5 p_441->g_199 p_441->g_435 p_441->g_238.f3 p_441->g_440
 * writes: p_441->g_comm_values p_441->g_24 p_441->g_250 p_441->g_40 p_441->g_243.f1 p_441->g_231.f5 p_441->g_244.f5 p_441->g_97 p_441->g_240.f5 p_441->g_276 p_441->g_230.f4 p_441->g_245.f3 p_441->g_245.f1 p_441->g_202 p_441->g_288 p_441->g_228.f4 p_441->g_394.f2.f4 p_441->g_391.f2.f4 p_441->g_255 p_441->g_35 p_441->g_435 p_441->g_440
 */
uint16_t  func_1(struct S7 * p_441)
{ /* block id: 4 */
    int64_t *l_9 = (void*)0;
    int64_t *l_10 = (void*)0;
    int64_t *l_11 = (void*)0;
    int32_t l_12[2][6][6] = {{{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL}},{{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL},{0x7221EBC5L,0x5065835AL,0x5065835AL,0x7221EBC5L,0x7221EBC5L,0x5065835AL}}};
    uint32_t *l_13 = (void*)0;
    int32_t l_14 = 0x6183A099L;
    int64_t l_27 = 6L;
    int32_t *l_39 = &p_441->g_40;
    uint16_t *l_395 = (void*)0;
    uint16_t *l_396 = (void*)0;
    int32_t *l_439 = &p_441->g_440;
    int i, j, k;
    (*l_439) ^= ((*p_441->g_289) = (((+func_2((l_12[1][1][5] &= (p_441->g_comm_values[p_441->tid] ^= ((VECTOR(int64_t, 8))(0x3A5F27A4129B8575L, 0x61FC42FF18C9A01CL, (-10L), ((VECTOR(int64_t, 2))(p_441->g_7.sb0)), ((VECTOR(int64_t, 2))(p_441->g_8.s77)), 0x44F4CC511EC1FCC8L)).s2)), (l_14 = GROUP_DIVERGE(1, 1)), ((p_441->g_202.w = (func_15(((void*)0 == p_441->g_18), p_441->g_8.sd, p_441) == (l_27 >= (safe_mod_func_int16_t_s_s((func_30(p_441->g_35, func_36(((((void*)0 != l_39) && (safe_add_func_uint8_t_u_u(246UL, 0x2CL))) , 0x2ADFED4114ABDC48L), (*l_39), p_441), p_441->g_241.f4, &l_27, p_441) == p_441->g_245.f5), 1L))))) != p_441->g_242.f5), p_441->g_299.sb, p_441)) <= p_441->g_241.f4) == p_441->g_238[4].f3));
    return (*l_439);
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_289 p_441->g_40 p_441->g_243.f1 p_441->g_227.f0 p_441->g_425 p_441->g_427 p_441->g_232.f5 p_441->g_199 p_441->g_35 p_441->g_435
 * writes: p_441->g_288 p_441->g_40 p_441->g_243.f1 p_441->g_228.f4 p_441->g_394.f2.f4 p_441->g_391.f2.f4 p_441->g_255 p_441->g_35 p_441->g_435
 */
int16_t  func_2(int64_t  p_3, uint32_t  p_4, uint32_t  p_5, uint64_t  p_6, struct S7 * p_441)
{ /* block id: 154 */
    VECTOR(uint32_t, 16) l_397 = (VECTOR(uint32_t, 16))(0xC889DF03L, (VECTOR(uint32_t, 4))(0xC889DF03L, (VECTOR(uint32_t, 2))(0xC889DF03L, 0x00A49A9EL), 0x00A49A9EL), 0x00A49A9EL, 0xC889DF03L, 0x00A49A9EL, (VECTOR(uint32_t, 2))(0xC889DF03L, 0x00A49A9EL), (VECTOR(uint32_t, 2))(0xC889DF03L, 0x00A49A9EL), 0xC889DF03L, 0x00A49A9EL, 0xC889DF03L, 0x00A49A9EL);
    int32_t **l_398 = &p_441->g_35;
    int32_t ***l_399 = &p_441->g_288;
    uint8_t l_422 = 0x05L;
    VECTOR(uint16_t, 8) l_426 = (VECTOR(uint16_t, 8))(0x1A6EL, (VECTOR(uint16_t, 4))(0x1A6EL, (VECTOR(uint16_t, 2))(0x1A6EL, 65535UL), 65535UL), 65535UL, 0x1A6EL, 65535UL);
    uint16_t l_429 = 0xB4A6L;
    int i;
    l_397.s7 ^= (p_5 | 0x87182287L);
    (*p_441->g_289) ^= (&p_441->g_289 == ((*l_399) = l_398));
    for (p_441->g_243.f1 = 0; (p_441->g_243.f1 != (-17)); --p_441->g_243.f1)
    { /* block id: 160 */
        uint16_t l_402 = 0x0FB1L;
        int64_t *l_417 = (void*)0;
        int64_t *l_418 = &p_441->g_394.f2.f4;
        int64_t *l_419 = (void*)0;
        int64_t *l_420 = &p_441->g_391.f2.f4;
        uint64_t *l_421 = (void*)0;
        uint16_t *l_428[7];
        uint64_t *l_430 = (void*)0;
        uint64_t *l_431 = (void*)0;
        uint64_t *l_432 = (void*)0;
        uint64_t *l_433[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_434 = 0x5AFD9570L;
        struct S4 *l_438 = &p_441->g_435;
        int i;
        for (i = 0; i < 7; i++)
            l_428[i] = (void*)0;
        (*l_398) = ((l_402 <= (l_434 = ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(p_3, (safe_sub_func_int16_t_s_s(((((*l_420) = ((*l_418) = (safe_add_func_int16_t_s_s(p_4, (safe_mul_func_int8_t_s_s((p_5 , (safe_rshift_func_uint8_t_u_s(0xB9L, 3))), (p_441->g_228.f4 = 0L))))))) <= (++l_422)) | ((p_441->g_227.f0 , ((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(0x5D2BL, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_441->g_425.s70)), 1UL, 0x6733L)).even, ((VECTOR(uint16_t, 2))(l_426.s62))))), 0x3A66L, 65535UL, ((VECTOR(uint16_t, 4))(p_441->g_427.s6627)), 0UL, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 2))(0xFBFBL, 0xF016L)), (p_441->g_255.x = (!0x4B6CL)), 7UL, FAKE_DIVERGE(p_441->global_2_offset, get_global_id(2), 10), 0x4DD7L, 0x8A43L)).hi, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0xFB35L))))).lo, ((VECTOR(uint16_t, 2))(0x3633L))))), ((VECTOR(uint16_t, 4))(65529UL)))))).even, (uint16_t)p_441->g_232.f5, (uint16_t)p_5))).s3 & p_441->g_199) | l_429)) <= p_3)), 0x568FL)))), 1UL)) == 0x0F800CAAE84D5E80L))) , (*l_398));
        (*l_438) = p_441->g_435;
        return p_441->g_435.f4;
    }
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_7 p_441->g_24
 * writes: p_441->g_24
 */
uint64_t  func_15(int16_t  p_16, int16_t  p_17, struct S7 * p_441)
{ /* block id: 8 */
    if ((atomic_inc(&p_441->g_atomic_input[57 * get_linear_group_id() + 38]) == 2))
    { /* block id: 10 */
        uint8_t l_19 = 255UL;
        int32_t l_20 = (-1L);
        l_20 ^= l_19;
        unsigned int result = 0;
        result += l_19;
        result += l_20;
        atomic_add(&p_441->g_special_values[57 * get_linear_group_id() + 38], result);
    }
    else
    { /* block id: 12 */
        (1 + 1);
    }
    for (p_16 = 17; (p_16 >= (-17)); p_16 = safe_sub_func_uint8_t_u_u(p_16, 3))
    { /* block id: 17 */
        int32_t *l_23 = &p_441->g_24[4][3][7];
        (*l_23) ^= p_441->g_7.s8;
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_230.f4 p_441->g_346 p_441->g_238.f1 p_441->g_245.f0 p_441->g_362 p_441->g_365 p_441->g_154 p_441->g_97 p_441->g_289 p_441->g_40 p_441->g_245.f3 p_441->g_245.f1 p_441->g_387
 * writes: p_441->g_230.f4 p_441->g_40 p_441->g_245.f3 p_441->g_245.f1
 */
uint32_t  func_30(int32_t * p_31, int32_t * p_32, int16_t  p_33, int64_t * p_34, struct S7 * p_441)
{ /* block id: 132 */
    uint32_t **l_352 = &p_441->g_154;
    uint32_t ***l_351 = &l_352;
    VECTOR(int32_t, 8) l_357 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L));
    VECTOR(uint8_t, 16) l_360 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 248UL), 248UL), 248UL, 0UL, 248UL, (VECTOR(uint8_t, 2))(0UL, 248UL), (VECTOR(uint8_t, 2))(0UL, 248UL), 0UL, 248UL, 0UL, 248UL);
    VECTOR(int32_t, 16) l_363 = (VECTOR(int32_t, 16))(0x7F4E04A8L, (VECTOR(int32_t, 4))(0x7F4E04A8L, (VECTOR(int32_t, 2))(0x7F4E04A8L, 0x71A74189L), 0x71A74189L), 0x71A74189L, 0x7F4E04A8L, 0x71A74189L, (VECTOR(int32_t, 2))(0x7F4E04A8L, 0x71A74189L), (VECTOR(int32_t, 2))(0x7F4E04A8L, 0x71A74189L), 0x7F4E04A8L, 0x71A74189L, 0x7F4E04A8L, 0x71A74189L);
    VECTOR(int32_t, 8) l_366 = (VECTOR(int32_t, 8))(0x5E29E133L, (VECTOR(int32_t, 4))(0x5E29E133L, (VECTOR(int32_t, 2))(0x5E29E133L, 0x0D7091ECL), 0x0D7091ECL), 0x0D7091ECL, 0x5E29E133L, 0x0D7091ECL);
    VECTOR(int16_t, 16) l_367 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    VECTOR(int16_t, 2) l_368 = (VECTOR(int16_t, 2))(0x4E20L, 0x7629L);
    VECTOR(uint8_t, 4) l_381 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x81L), 0x81L);
    int64_t *l_386[3][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    struct S2 **l_392 = (void*)0;
    struct S2 *l_393 = &p_441->g_394;
    int i, j, k;
    for (p_441->g_230.f4 = 0; (p_441->g_230.f4 >= 4); ++p_441->g_230.f4)
    { /* block id: 135 */
        VECTOR(int32_t, 2) l_345 = (VECTOR(int32_t, 2))((-1L), 0L);
        VECTOR(uint8_t, 2) l_347 = (VECTOR(uint8_t, 2))(1UL, 0x25L);
        VECTOR(uint8_t, 16) l_348 = (VECTOR(uint8_t, 16))(0x85L, (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 0x71L), 0x71L), 0x71L, 0x85L, 0x71L, (VECTOR(uint8_t, 2))(0x85L, 0x71L), (VECTOR(uint8_t, 2))(0x85L, 0x71L), 0x85L, 0x71L, 0x85L, 0x71L);
        uint16_t l_361 = 0x5244L;
        VECTOR(int32_t, 16) l_364 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 6L), 6L), 6L, 2L, 6L, (VECTOR(int32_t, 2))(2L, 6L), (VECTOR(int32_t, 2))(2L, 6L), 2L, 6L, 2L, 6L);
        VECTOR(int16_t, 2) l_369 = (VECTOR(int16_t, 2))(0x309AL, 0x3662L);
        int i;
        if (l_345.y)
            break;
        (*p_441->g_289) = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(p_441->g_346.xwyzzzwx)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_347.xy)))).xyxyxxyy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_348.sca113d644de8bfd0)).saa)).yxxyxyyx))).s62, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 0x34L)).yxyxxyxyxxyyyxyy)).s1961))).xwzyzzxx, (uint8_t)(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(0UL, 1UL)).xxyyxxxxxxyyxyyy, (uint16_t)(p_441->g_238[4].f1 & (safe_add_func_int64_t_s_s((l_351 == (void*)0), ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_357.s5, (p_33 <= (safe_mod_func_int8_t_s_s((((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(6L, (p_441->g_245.f0 ^ FAKE_DIVERGE(p_441->group_1_offset, get_group_id(1), 10)), (-9L), 0x40FCA14EL)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x5A91FBFDL, 0x4CF661B9L)).xxyxxyxyxyyyxxxy, ((VECTOR(int32_t, 2))(0L, 0x5415C5EBL)).xxxxxyxxxxyxyyyx, ((VECTOR(int32_t, 16))(l_357.s0, 0x0A8AAA3BL, 0x1B815935L, 0x5EF3D8D7L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x6750L, 0x7D68L, 0x669CL, 0L)).xzxxwyxzyzxxxzxw)).s3e, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(0x0FL, 255UL)).xxxxxxxyxxyxxxxy, ((VECTOR(uint8_t, 4))(l_360.sdf60)).xzwwyywwyxywwwyx))).s1b))), 0L, ((VECTOR(int32_t, 8))(9L, (-9L), ((VECTOR(int32_t, 4))(l_361, ((VECTOR(int32_t, 2))(p_441->g_362.xx)), 0x5E9E254CL)), 0x56EB4506L, (-6L))).s7, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_363.s9e8c3e85)).s3337334041724475)).sb1)), 0x4F068722L, 1L)), ((VECTOR(int32_t, 8))(l_364.s5f5ea2e8)).odd, ((VECTOR(int32_t, 8))(p_441->g_365.sd54ad484)).hi))).z, ((VECTOR(int32_t, 2))(l_366.s52)), ((VECTOR(int32_t, 4))((((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_367.sd3f6aa859a6d3f55)).sf13a)).odd)), ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(l_368.xxyxxxyy)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_369.yx)).xxxx)).zywwzzwxywyzxwyw, ((VECTOR(int16_t, 2))(0x7C4CL, 5L)).xxyyyxyxyxxxxyxx))))).sfd0c))).yzzzxyzwwwwwzxwz, (int16_t)(0x2462446FL ^ (*p_441->g_154))))).sf2))).yxyxxyyyxyyyyxxx, ((VECTOR(uint16_t, 16))(0UL))))), ((VECTOR(uint16_t, 16))(0UL))))).sa , l_363.s2), 1L, 0x5F3F7A3EL, 1L)), 0x62680E86L))))).s9eb9))).y == (*p_441->g_289)), 0x07L))))), 4)) ^ 255UL))))))).s9, l_357.s6, 0x0A08L, ((VECTOR(uint16_t, 8))(0x7AA1L)), ((VECTOR(uint16_t, 4))(0x1CC6L)), 1UL)).s8 > FAKE_DIVERGE(p_441->global_2_offset, get_global_id(2), 10))))).s45))), ((VECTOR(uint16_t, 4))(0xC528L)), 0x28D7L, 1UL)), p_33, ((VECTOR(uint16_t, 2))(0xEC19L)), 0x57F3L, ((VECTOR(uint16_t, 2))(0x162FL)), 65527UL, 1UL)).odd))).odd))).wzyyxyyxzzxxwxxz, ((VECTOR(int32_t, 16))(0x1CEC2981L))))).s5;
    }
    for (p_441->g_245.f3 = 0; (p_441->g_245.f3 >= 10); ++p_441->g_245.f3)
    { /* block id: 141 */
        int32_t l_380 = 1L;
        for (p_441->g_245.f1 = 0; (p_441->g_245.f1 != 24); ++p_441->g_245.f1)
        { /* block id: 144 */
            int32_t *l_374 = (void*)0;
            int32_t *l_375 = (void*)0;
            int32_t *l_376 = &p_441->g_40;
            int32_t *l_377 = (void*)0;
            int32_t *l_378 = (void*)0;
            int32_t *l_379[8][2][4] = {{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}},{{(void*)0,(void*)0,(void*)0,&p_441->g_40},{(void*)0,(void*)0,(void*)0,&p_441->g_40}}};
            int i, j, k;
            --l_381.z;
        }
        return (*p_441->g_154);
    }
    l_357.s3 = (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((VECTOR(uint64_t, 2))(0xFBA1694FD9A4FE0EL, 0x14EF2F9845E634FCL)).odd != (l_366.s6 = l_381.x))));
    l_393 = p_441->g_387[4][0];
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_45 p_441->g_8 p_441->g_56 p_441->g_64 p_441->g_7 p_441->g_35 p_441->g_250 p_441->g_254 p_441->g_255 p_441->g_241.f1 p_441->g_243.f1 p_441->g_220 p_441->g_232.f1 p_441->g_154 p_441->g_97 p_441->g_299 p_441->g_231.f5 p_441->g_240.f5 p_441->g_289 p_441->g_40 p_441->g_288 p_441->g_235.f5 p_441->g_276
 * writes: p_441->g_250 p_441->g_40 p_441->g_243.f1 p_441->g_231.f5 p_441->g_244.f5 p_441->g_97 p_441->g_240.f5 p_441->g_276
 */
int32_t * func_36(int64_t  p_37, uint32_t  p_38, struct S7 * p_441)
{ /* block id: 21 */
    VECTOR(int64_t, 16) l_50 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x2556116ABE3F132CL), 0x2556116ABE3F132CL), 0x2556116ABE3F132CL, 2L, 0x2556116ABE3F132CL, (VECTOR(int64_t, 2))(2L, 0x2556116ABE3F132CL), (VECTOR(int64_t, 2))(2L, 0x2556116ABE3F132CL), 2L, 0x2556116ABE3F132CL, 2L, 0x2556116ABE3F132CL);
    VECTOR(int64_t, 2) l_51 = (VECTOR(int64_t, 2))(0x059577EE7E4EBB7CL, 0L);
    int32_t l_334 = 0x63C8A001L;
    int32_t *l_337 = (void*)0;
    int32_t *l_338[5];
    uint64_t l_339[10][1];
    VECTOR(int32_t, 2) l_342 = (VECTOR(int32_t, 2))(0x39E58FB8L, 0x435A646DL);
    int i, j;
    for (i = 0; i < 5; i++)
        l_338[i] = &l_334;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_339[i][j] = 0x99EC872CF7CFBFDBL;
    }
    p_441->g_276.s2 ^= (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))((-5L), 0x5D17L, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_441->g_45.xyyyxyyyyxxyyxxx)).s7c)).xyyxxxxxxyxxyxyy, (int16_t)(p_37 < (0x599A0A08L < func_46((safe_add_func_uint32_t_u_u(((l_334 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(l_50.s5a17)).wwzxwwxxzzyyxwww, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_51.xxxxxxyxyyyyxyyy)))).odd, (int64_t)(safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_51.x, p_441->g_8.s7)), 2))))).odd)).wwwzwxzywzzxzzxz, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_441->g_56.yx)), 1L, 0x5A29A6A910B13A75L)).xwwzxywyxyyxyyyx))).sd3, ((VECTOR(int64_t, 8))(0x738A40F947660C92L, (-1L), (safe_mod_func_uint32_t_u_u(l_50.s1, func_59((safe_mul_func_int8_t_s_s(p_37, (((VECTOR(int16_t, 8))(p_441->g_64.wyywxwyx)).s7 ^ (p_441->g_7.s3 , (-8L))))), p_441->g_8.se, p_441))), 0x48962ACFE7A89DF4L, 0x7A80B8F6F7FDB96DL, ((VECTOR(int64_t, 2))(0x2778B136FE55A468L)), 0x6833D4720638FEC1L)).s45))).yyxxxyyyxyxyxyxx)).sb) == GROUP_DIVERGE(1, 1)), p_37)), p_441)))))).s950e))).odd, ((VECTOR(int16_t, 2))(0x7D21L))))), ((VECTOR(int16_t, 2))(0x097BL)), 0x4BD6L, 0x5307L)).s13, (int16_t)l_50.sa, (int16_t)l_334))).xxxyxyyyyyxxxyxy)).s96)).yyxyyyyxxyyyxyyx)).s6, p_441->g_235.f5));
    l_339[1][0]--;
    (*p_441->g_289) = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(l_342.xxxxyxyx)).s74, ((VECTOR(int32_t, 2))((-7L), 0x241C67D5L))))).xxyxyxyx))).s3;
    return (*p_441->g_288);
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_288 p_441->g_35 p_441->g_289 p_441->g_154 p_441->g_97
 * writes:
 */
uint32_t  func_46(int8_t  p_47, struct S7 * p_441)
{ /* block id: 124 */
    int32_t *l_335 = (void*)0;
    int32_t **l_336 = &l_335;
    (*l_336) = l_335;
    (*l_336) = (*p_441->g_288);
    return (*p_441->g_154);
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_35 p_441->g_250 p_441->g_254 p_441->g_255 p_441->g_8 p_441->g_241.f1 p_441->g_243.f1 p_441->g_220 p_441->g_232.f1 p_441->g_154 p_441->g_97 p_441->g_299 p_441->g_231.f5 p_441->g_240.f5 p_441->g_289 p_441->g_40
 * writes: p_441->g_250 p_441->g_40 p_441->g_243.f1 p_441->g_231.f5 p_441->g_244.f5 p_441->g_97 p_441->g_240.f5
 */
int32_t  func_59(int8_t  p_60, int8_t  p_61, struct S7 * p_441)
{ /* block id: 22 */
    VECTOR(uint32_t, 4) l_65 = (VECTOR(uint32_t, 4))(0x8A6AAB06L, (VECTOR(uint32_t, 2))(0x8A6AAB06L, 5UL), 5UL);
    VECTOR(uint32_t, 4) l_66 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x96D32418L), 0x96D32418L);
    VECTOR(uint16_t, 4) l_69 = (VECTOR(uint16_t, 4))(0xC7E1L, (VECTOR(uint16_t, 2))(0xC7E1L, 0xE041L), 0xE041L);
    uint32_t *l_70 = (void*)0;
    uint32_t *l_71 = (void*)0;
    uint32_t *l_72[5];
    int32_t l_73 = 0x33387B99L;
    uint32_t **l_90 = (void*)0;
    uint32_t **l_91 = &l_71;
    int32_t l_256 = (-4L);
    int64_t *l_257[2];
    VECTOR(int32_t, 8) l_273 = (VECTOR(int32_t, 8))(0x305750D7L, (VECTOR(int32_t, 4))(0x305750D7L, (VECTOR(int32_t, 2))(0x305750D7L, 0x2C047BC4L), 0x2C047BC4L), 0x2C047BC4L, 0x305750D7L, 0x2C047BC4L);
    VECTOR(int8_t, 2) l_281 = (VECTOR(int8_t, 2))(4L, (-7L));
    VECTOR(uint64_t, 4) l_302 = (VECTOR(uint64_t, 4))(0xD8B410406FBD9CE2L, (VECTOR(uint64_t, 2))(0xD8B410406FBD9CE2L, 0x5AAE28E932011840L), 0x5AAE28E932011840L);
    uint8_t l_330 = 0x85L;
    uint64_t l_333[8][3][3] = {{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}},{{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L},{0xC3088892DB682529L,1UL,0x1AADC9CFD18EFFA9L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_72[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_257[i] = (void*)0;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_441->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(l_65.zz)).xyxy, ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(l_66.ywxy)).zzxzwzzwywwzzzzw, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x7D7DB6C6L, 0x429AA74CL)).xxxy)).yyzyzwxxwxzzywww, ((VECTOR(uint32_t, 4))(0xA4178B3EL, 0x5ED510FEL, 4294967289UL, 1UL)).zwyzzxzyxxyzyxww))).s49, ((VECTOR(uint32_t, 8))((l_73 = (safe_lshift_func_int16_t_s_u(0x0ED3L, ((VECTOR(uint16_t, 16))(l_69.yywwwywxwyzwxzzx)).s7))), func_74(p_60, ((func_79(func_84((safe_div_func_uint64_t_u_u(p_60, ((((*l_91) = p_441->g_35) != l_72[1]) ^ 0UL))), p_441->g_35, l_65.w, p_441), &p_441->g_97, &l_73, p_61, p_441) | 255UL) < l_256), &p_441->g_40, l_257[0], p_441), 0xC8E805FFL, ((VECTOR(uint32_t, 2))(0UL)), 4294967295UL, 4294967295UL, 0UL)).s71))).xyyy, ((VECTOR(uint32_t, 4))(4294967295UL))))).xwxwxwyxxyxxzxxx)).se1, ((VECTOR(uint32_t, 2))(4294967295UL))))).xyxxyyxyyyxxyyxy, ((VECTOR(uint32_t, 16))(0xD6CFD9D4L))))).sa117)), 0xB0EBEEA7L, p_61, 0xD9CC5EBAL, 1UL, ((VECTOR(uint32_t, 8))(4294967289UL)))))), ((VECTOR(uint32_t, 16))(4294967295UL))))).sa, 10))][(safe_mod_func_uint32_t_u_u(p_441->tid, 55))]));
    for (p_441->g_243.f1 = 0; (p_441->g_243.f1 > 10); p_441->g_243.f1 = safe_add_func_uint64_t_u_u(p_441->g_243.f1, 4))
    { /* block id: 102 */
        VECTOR(int32_t, 16) l_275 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2225837FL), 0x2225837FL), 0x2225837FL, 0L, 0x2225837FL, (VECTOR(int32_t, 2))(0L, 0x2225837FL), (VECTOR(int32_t, 2))(0L, 0x2225837FL), 0L, 0x2225837FL, 0L, 0x2225837FL);
        int32_t l_297 = (-4L);
        uint32_t *l_307 = &p_441->g_232.f0;
        int8_t *l_316 = &p_441->g_244.f5;
        VECTOR(int32_t, 16) l_319 = (VECTOR(int32_t, 16))(0x05652763L, (VECTOR(int32_t, 4))(0x05652763L, (VECTOR(int32_t, 2))(0x05652763L, 0L), 0L), 0L, 0x05652763L, 0L, (VECTOR(int32_t, 2))(0x05652763L, 0L), (VECTOR(int32_t, 2))(0x05652763L, 0L), 0x05652763L, 0L, 0x05652763L, 0L);
        uint64_t l_324 = 0x4100DE2BDF2BCA89L;
        int i;
        for (p_441->g_231.f5 = 0; (p_441->g_231.f5 < 15); p_441->g_231.f5 = safe_add_func_int8_t_s_s(p_441->g_231.f5, 2))
        { /* block id: 105 */
            VECTOR(int32_t, 8) l_274 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x69B6153CL), 0x69B6153CL), 0x69B6153CL, (-8L), 0x69B6153CL);
            int32_t **l_287 = &p_441->g_35;
            int8_t *l_296[5] = {&p_441->g_242.f4,&p_441->g_242.f4,&p_441->g_242.f4,&p_441->g_242.f4,&p_441->g_242.f4};
            int32_t *l_298 = &p_441->g_227.f1;
            uint64_t *l_303 = (void*)0;
            uint64_t *l_304[4];
            int i;
            for (i = 0; i < 4; i++)
                l_304[i] = (void*)0;
            l_274.s2 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, 1L)), 0x60849B00L, 0x010BBA5BL)).lo, (int32_t)(((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((0xD4C15BA14C7D3818L == (safe_sub_func_int8_t_s_s(0x2BL, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(5L, 0x471798C6L, ((VECTOR(int32_t, 4))(l_273.s4665)), 0x4CCF5BBFL, (-1L))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_274.s73)).xyxy))))).xxywzyyw, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_275.s951f))))).wyzwzwyz))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_441->g_276.s25313660)).hi)).yzzwzzzz))))).s51, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x4475C6A7L, 0x0CAE3961L)).xxyy, ((VECTOR(int32_t, 16))((safe_sub_func_int32_t_s_s((~(safe_add_func_uint32_t_u_u((((VECTOR(int8_t, 16))(0x5BL, 0x27L, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(l_281.xyyxxyxyyyxxyxxx)).odd))).hi, (int8_t)((VECTOR(int8_t, 4))(p_441->g_282.yxyy)).w, (int8_t)(safe_lshift_func_int16_t_s_u((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x32059113L, (-1L))).xyxy)).y , (p_60 >= (l_287 != (p_441->g_288 = l_287)))), ((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((*l_298) &= (safe_lshift_func_int16_t_s_s(((l_275.s6 >= (l_297 = p_441->g_227.f4)) == 2L), 12))) , ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_441->g_299.sa9e5)).hi)).odd), ((safe_sub_func_int64_t_s_s(((((VECTOR(uint64_t, 16))(l_302.yxzyyzyxzzxywzyw)).s1 < (p_441->g_203.y = ((0x4FDB46A76162333DL | l_302.x) || (*p_441->g_289)))) | p_61), l_275.se)) < p_60))), p_61)) , p_61)))))), (-1L), ((VECTOR(int8_t, 8))(0x7CL)), 1L)).sa , l_275.sc), 0x11D4C092L))), p_61)), ((VECTOR(int32_t, 2))(0x229D3015L)), 3L, 2L, ((VECTOR(int32_t, 2))(0x45CE519DL)), ((VECTOR(int32_t, 8))(0x1452EECAL)), (-9L))).sa02f, ((VECTOR(int32_t, 4))(0L))))).lo, ((VECTOR(int32_t, 2))((-9L)))))).odd, (*p_441->g_289)))))) && p_60) , p_441->g_234.f3), p_60)), 0x6D78L)) >= p_60) < p_441->g_244.f3)))))), 0x0ACB0BAAL, 0x7F92EC17L)).wzzzxyyy, ((VECTOR(int32_t, 8))((-9L))), ((VECTOR(int32_t, 8))(0x47FCC72EL))))).s72)))).lo;
        }
        l_324 |= (safe_add_func_uint8_t_u_u(p_61, (((((l_307 != ((!(safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((0xCC87L | (((safe_mul_func_int8_t_s_s(((*l_316) = p_441->g_220.z), (((safe_mul_func_uint16_t_u_u(((~(p_441->g_232.f1 ^ (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_319.s8ba208c5)).s06)).even , l_66.w))) || (0x5BL | ((safe_mod_func_int32_t_s_s(l_256, ((!((*p_441->g_154)++)) | p_441->g_299.s1))) , p_61))), p_441->g_231.f5)) != p_60) , p_60))) && p_60) , FAKE_DIVERGE(p_441->local_2_offset, get_local_id(2), 10))), 5)), 0UL)), p_61))) , (void*)0)) , p_61) < l_319.s6) & l_273.s1) && p_60)));
    }
    for (p_441->g_240.f5 = 0; (p_441->g_240.f5 != 14); p_441->g_240.f5++)
    { /* block id: 118 */
        int32_t *l_327 = &p_441->g_40;
        int32_t *l_328 = &p_441->g_40;
        int32_t *l_329[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_329[i][j] = (void*)0;
        }
        l_330--;
        (*p_441->g_289) ^= l_281.y;
    }
    return l_333[7][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_241.f1
 * writes: p_441->g_40
 */
uint32_t  func_74(uint16_t  p_75, uint64_t  p_76, int32_t * p_77, int64_t * p_78, struct S7 * p_441)
{ /* block id: 94 */
    int8_t l_260 = 0x75L;
    (*p_77) = (safe_add_func_int8_t_s_s(p_441->g_241.f1, p_76));
    return l_260;
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_254 p_441->g_255 p_441->g_8
 * writes:
 */
uint8_t  func_79(uint32_t * p_80, uint32_t * p_81, int32_t * p_82, int32_t  p_83, struct S7 * p_441)
{ /* block id: 90 */
    int32_t l_253 = 7L;
    (*p_82) ^= l_253;
    (*p_82) &= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(p_441->g_254.xx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_441->g_255.yyxyxyyxxyxyyxxx)).even)).s54))).lo;
    return p_441->g_8.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_441->g_250
 * writes: p_441->g_250
 */
uint32_t * func_84(uint32_t  p_85, uint32_t * p_86, uint16_t  p_87, struct S7 * p_441)
{ /* block id: 25 */
    VECTOR(uint16_t, 2) l_102 = (VECTOR(uint16_t, 2))(0x4115L, 0x0038L);
    VECTOR(int16_t, 8) l_103 = (VECTOR(int16_t, 8))(0x5097L, (VECTOR(int16_t, 4))(0x5097L, (VECTOR(int16_t, 2))(0x5097L, 0L), 0L), 0L, 0x5097L, 0L);
    int64_t *l_107 = (void*)0;
    VECTOR(uint8_t, 2) l_117 = (VECTOR(uint8_t, 2))(0xC9L, 0x17L);
    int32_t *l_130 = &p_441->g_40;
    int32_t l_249 = 0x5C6341F2L;
    int i;
    for (p_85 = 15; (p_85 != 39); ++p_85)
    { /* block id: 28 */
        uint32_t *l_96 = &p_441->g_97;
        uint32_t **l_95 = &l_96;
        uint32_t ***l_94 = &l_95;
        VECTOR(int32_t, 2) l_98 = (VECTOR(int32_t, 2))(0x3A46063AL, 0x40C6877BL);
        int32_t *l_99 = (void*)0;
        int32_t *l_100 = (void*)0;
        int32_t *l_101[10][4][6] = {{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}},{{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40},{&p_441->g_40,&p_441->g_40,(void*)0,&p_441->g_40,&p_441->g_40,&p_441->g_40}}};
        VECTOR(int16_t, 4) l_104 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
        int64_t *l_105 = (void*)0;
        int64_t **l_106 = &l_105;
        int64_t **l_108[2];
        uint8_t *l_113 = &p_441->g_114;
        int8_t *l_118 = &p_441->g_119;
        uint64_t *l_124 = (void*)0;
        uint64_t *l_125 = (void*)0;
        uint64_t *l_126[2][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
        VECTOR(uint16_t, 2) l_147 = (VECTOR(uint16_t, 2))(65528UL, 65535UL);
        int32_t l_222[3][5][2];
        struct S0 *l_226[7][10] = {{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0},{&p_441->g_245,&p_441->g_245,&p_441->g_243,(void*)0,&p_441->g_236,(void*)0,&p_441->g_241,&p_441->g_232,&p_441->g_241,(void*)0}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_108[i] = (void*)0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 2; k++)
                    l_222[i][j][k] = 1L;
            }
        }
        (1 + 1);
    }
    --p_441->g_250;
    return l_130;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S7 c_442;
    struct S7* p_441 = &c_442;
    struct S7 c_443 = {
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int64_t, 2))(0L, 5L), (VECTOR(int64_t, 2))(0L, 5L), 0L, 5L, 0L, 5L), // p_441->g_7
        (VECTOR(int64_t, 16))(0x02268F62C4DF8E3BL, (VECTOR(int64_t, 4))(0x02268F62C4DF8E3BL, (VECTOR(int64_t, 2))(0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L), 0x18C84B7B831966C4L), 0x18C84B7B831966C4L, 0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L, (VECTOR(int64_t, 2))(0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L), (VECTOR(int64_t, 2))(0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L), 0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L, 0x02268F62C4DF8E3BL, 0x18C84B7B831966C4L), // p_441->g_8
        (void*)0, // p_441->g_18
        {{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}},{{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L},{(-9L),7L,0x1B9AA6B3L,0x705104E0L,(-1L),0x705104E0L,0x1B9AA6B3L,7L}}}, // p_441->g_24
        (void*)0, // p_441->g_35
        0x39C2D96AL, // p_441->g_40
        (VECTOR(int16_t, 2))(0L, 0x03D5L), // p_441->g_45
        (VECTOR(int64_t, 2))((-1L), 0x5F0F57B567EB8760L), // p_441->g_56
        (VECTOR(int16_t, 4))(0x3C64L, (VECTOR(int16_t, 2))(0x3C64L, 0L), 0L), // p_441->g_64
        4294967295UL, // p_441->g_97
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_441->g_109
        (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xA342696941D4D588L), 0xA342696941D4D588L), 0xA342696941D4D588L, 5UL, 0xA342696941D4D588L, (VECTOR(uint64_t, 2))(5UL, 0xA342696941D4D588L), (VECTOR(uint64_t, 2))(5UL, 0xA342696941D4D588L), 5UL, 0xA342696941D4D588L, 5UL, 0xA342696941D4D588L), // p_441->g_110
        0x98L, // p_441->g_114
        4L, // p_441->g_119
        &p_441->g_97, // p_441->g_154
        0x10L, // p_441->g_166
        (VECTOR(uint64_t, 2))(0x926F431218535F4CL, 0UL), // p_441->g_191
        0x686C6B0AL, // p_441->g_199
        (VECTOR(uint16_t, 4))(0x6DA3L, (VECTOR(uint16_t, 2))(0x6DA3L, 65535UL), 65535UL), // p_441->g_202
        (VECTOR(uint64_t, 2))(0xB96B6A83E9DA6D73L, 0xA6BEF0A756052777L), // p_441->g_203
        (VECTOR(int8_t, 4))(0x6FL, (VECTOR(int8_t, 2))(0x6FL, (-1L)), (-1L)), // p_441->g_220
        {0x764ED354L,0L,0x323A33DE2EC5B381L,0x2125L,0x31L,0x67L,0L,0x44L,0x6F29780FL}, // p_441->g_227
        {0x7101F397L,0x143F4B0CL,0x7625086540933524L,0L,0x76L,-6L,0x1C65L,0x76L,-3L}, // p_441->g_228
        {0x3EB98A8CL,0x1DD93E93L,0xA933DB2431B7860BL,0L,0x17L,0x35L,0x47D6L,0x08L,0x3C35C1B0L}, // p_441->g_229
        {4294967295UL,0x75B507F0L,18446744073709551611UL,0x1CC5L,0L,1L,0x7A52L,0x53L,0x7460548AL}, // p_441->g_230
        {0x0A82069FL,0x7435C911L,18446744073709551606UL,1L,7L,1L,9L,0UL,0x36181A78L}, // p_441->g_231
        {4294967293UL,-4L,0xCBC03DAD876D7F5BL,0x16C2L,0x79L,0x42L,0L,0x81L,9L}, // p_441->g_232
        {{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L},{0x97C8A839L,1L,1UL,0x0332L,0x5CL,-10L,0x3D3AL,0x03L,6L}}, // p_441->g_233
        {4294967288UL,0x6E2ABB20L,1UL,0x6108L,0x32L,0x06L,0x0673L,0UL,1L}, // p_441->g_234
        {4294967295UL,-1L,0xC1FB03A89F36769EL,8L,0x5BL,0L,0L,253UL,-4L}, // p_441->g_235
        {0xF551FEE5L,0L,18446744073709551611UL,0x729BL,3L,1L,1L,0x10L,7L}, // p_441->g_236
        {{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}},{{{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L},{0xC36692C0L,0x143B245BL,5UL,0x7C20L,0L,0x66L,1L,0x76L,0L}}}}, // p_441->g_237
        {{0UL,0L,6UL,-6L,1L,0x40L,-1L,0xC8L,2L},{0UL,0L,6UL,-6L,1L,0x40L,-1L,0xC8L,2L},{0UL,0L,6UL,-6L,1L,0x40L,-1L,0xC8L,2L},{0UL,0L,6UL,-6L,1L,0x40L,-1L,0xC8L,2L},{0UL,0L,6UL,-6L,1L,0x40L,-1L,0xC8L,2L}}, // p_441->g_238
        {0x2D54BD7EL,-1L,18446744073709551609UL,0x7042L,0x1EL,0L,0x0B5AL,7UL,-1L}, // p_441->g_239
        {0xA9FC1B61L,0L,18446744073709551615UL,0L,0x0CL,0x1DL,-1L,0x44L,0x09103576L}, // p_441->g_240
        {0x83514E3EL,0x09CF0BD4L,0x0419782B84019BDBL,0L,0x54L,-1L,0x7283L,6UL,0x47DB43E4L}, // p_441->g_241
        {5UL,0x2D7BC309L,0x6FC5E0286AF9661FL,0x51FCL,0x13L,-2L,0L,0x02L,0x20DF232AL}, // p_441->g_242
        {0x31843F40L,0x6BEA6380L,0xCE8FD7E0959EE6ECL,-5L,-10L,0x60L,-1L,0xE0L,0x76739539L}, // p_441->g_243
        {0UL,0x420E41F5L,0UL,-1L,0x10L,0L,0x1E1EL,0x96L,0x3C937039L}, // p_441->g_244
        {0x5674DFA4L,-2L,18446744073709551615UL,0L,0x2CL,0x06L,0x11A5L,1UL,0x01B67642L}, // p_441->g_245
        {0x8DDC0993L,5L,0x12A793669B761190L,0x0582L,0x4DL,0x63L,0x1FBFL,254UL,0x5EEEC245L}, // p_441->g_246
        0x88ECCBE0L, // p_441->g_250
        (VECTOR(int16_t, 4))(0x596CL, (VECTOR(int16_t, 2))(0x596CL, 0x7094L), 0x7094L), // p_441->g_254
        (VECTOR(uint16_t, 2))(0UL, 65535UL), // p_441->g_255
        (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 7L), 7L), 7L, (-9L), 7L), // p_441->g_276
        (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x0BL), 0x0BL), // p_441->g_282
        &p_441->g_40, // p_441->g_289
        &p_441->g_289, // p_441->g_288
        (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL), // p_441->g_299
        (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x0C25L), 0x0C25L), // p_441->g_346
        (VECTOR(int32_t, 2))(0x121FF851L, 9L), // p_441->g_362
        (VECTOR(int32_t, 16))(0x4DE2BB9EL, (VECTOR(int32_t, 4))(0x4DE2BB9EL, (VECTOR(int32_t, 2))(0x4DE2BB9EL, 7L), 7L), 7L, 0x4DE2BB9EL, 7L, (VECTOR(int32_t, 2))(0x4DE2BB9EL, 7L), (VECTOR(int32_t, 2))(0x4DE2BB9EL, 7L), 0x4DE2BB9EL, 7L, 0x4DE2BB9EL, 7L), // p_441->g_365
        {0x3C958F3FL,0x64227069L,{1UL,0x6B4CBCF0L,0x1192L,-1L,-3L},0UL,0UL,0x2B06L,-8L}, // p_441->g_388
        {-7L,-1L,{18446744073709551615UL,-1L,3L,0L,0x1313374200691853L},9UL,3UL,0x118EL,8L}, // p_441->g_389
        {{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}},{{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L},{0x22ECC8F2L,0x1556446CL,{18446744073709551612UL,0x6B72FC76L,0x0F40L,0x2157EF4E04CF2802L,0x0BE02D0E5419767EL},1UL,0xC7L,0x214AL,0x7F246976AE7EE241L}}}, // p_441->g_390
        {0x52133D56L,0x698ED4BDL,{1UL,0x610E040EL,0x2161L,0x45A6D9417D865338L,0x2B3ACC6270C26D6BL},0UL,0xB7L,-1L,0x451E212AE376434EL}, // p_441->g_391
        {{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388},{&p_441->g_388}}, // p_441->g_387
        {0x0354AA87L,-1L,{0x698AE2D0759F329DL,1L,0x26C5L,0x02282767ACDAC53CL,0x57BDBE7A03509C0EL},0x8D2849B1L,246UL,0x7D98L,-1L}, // p_441->g_394
        (VECTOR(uint16_t, 8))(0x8CA4L, (VECTOR(uint16_t, 4))(0x8CA4L, (VECTOR(uint16_t, 2))(0x8CA4L, 0UL), 0UL), 0UL, 0x8CA4L, 0UL), // p_441->g_425
        (VECTOR(uint16_t, 8))(0x4328L, (VECTOR(uint16_t, 4))(0x4328L, (VECTOR(uint16_t, 2))(0x4328L, 0x47D6L), 0x47D6L), 0x47D6L, 0x4328L, 0x47D6L), // p_441->g_427
        {0x34DF65CDL,0x43E49FE2B4602E25L,0x21FA295F0477AA76L,1L,0x3B484452D899CB0CL,0x91A70024EC5186ACL,0UL,{0x325BE226L,0x3EEE5968L,0xAFBA4F378FAC1B8EL,-1L,1L,0L,1L,0x1FL,1L},{0x483395F4L,-1L,0xA74A6561F5770EC9L,0x574DL,0x0CL,0x41L,0L,0UL,0L},0x85D1173FL}, // p_441->g_435
        (void*)0, // p_441->g_436
        (void*)0, // p_441->g_437
        0x3EEBAE8CL, // p_441->g_440
        0, // p_441->v_collective
        sequence_input[get_global_id(0)], // p_441->global_0_offset
        sequence_input[get_global_id(1)], // p_441->global_1_offset
        sequence_input[get_global_id(2)], // p_441->global_2_offset
        sequence_input[get_local_id(0)], // p_441->local_0_offset
        sequence_input[get_local_id(1)], // p_441->local_1_offset
        sequence_input[get_local_id(2)], // p_441->local_2_offset
        sequence_input[get_group_id(0)], // p_441->group_0_offset
        sequence_input[get_group_id(1)], // p_441->group_1_offset
        sequence_input[get_group_id(2)], // p_441->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_441->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_442 = c_443;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_441);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_441->g_7.s0, "p_441->g_7.s0", print_hash_value);
    transparent_crc(p_441->g_7.s1, "p_441->g_7.s1", print_hash_value);
    transparent_crc(p_441->g_7.s2, "p_441->g_7.s2", print_hash_value);
    transparent_crc(p_441->g_7.s3, "p_441->g_7.s3", print_hash_value);
    transparent_crc(p_441->g_7.s4, "p_441->g_7.s4", print_hash_value);
    transparent_crc(p_441->g_7.s5, "p_441->g_7.s5", print_hash_value);
    transparent_crc(p_441->g_7.s6, "p_441->g_7.s6", print_hash_value);
    transparent_crc(p_441->g_7.s7, "p_441->g_7.s7", print_hash_value);
    transparent_crc(p_441->g_7.s8, "p_441->g_7.s8", print_hash_value);
    transparent_crc(p_441->g_7.s9, "p_441->g_7.s9", print_hash_value);
    transparent_crc(p_441->g_7.sa, "p_441->g_7.sa", print_hash_value);
    transparent_crc(p_441->g_7.sb, "p_441->g_7.sb", print_hash_value);
    transparent_crc(p_441->g_7.sc, "p_441->g_7.sc", print_hash_value);
    transparent_crc(p_441->g_7.sd, "p_441->g_7.sd", print_hash_value);
    transparent_crc(p_441->g_7.se, "p_441->g_7.se", print_hash_value);
    transparent_crc(p_441->g_7.sf, "p_441->g_7.sf", print_hash_value);
    transparent_crc(p_441->g_8.s0, "p_441->g_8.s0", print_hash_value);
    transparent_crc(p_441->g_8.s1, "p_441->g_8.s1", print_hash_value);
    transparent_crc(p_441->g_8.s2, "p_441->g_8.s2", print_hash_value);
    transparent_crc(p_441->g_8.s3, "p_441->g_8.s3", print_hash_value);
    transparent_crc(p_441->g_8.s4, "p_441->g_8.s4", print_hash_value);
    transparent_crc(p_441->g_8.s5, "p_441->g_8.s5", print_hash_value);
    transparent_crc(p_441->g_8.s6, "p_441->g_8.s6", print_hash_value);
    transparent_crc(p_441->g_8.s7, "p_441->g_8.s7", print_hash_value);
    transparent_crc(p_441->g_8.s8, "p_441->g_8.s8", print_hash_value);
    transparent_crc(p_441->g_8.s9, "p_441->g_8.s9", print_hash_value);
    transparent_crc(p_441->g_8.sa, "p_441->g_8.sa", print_hash_value);
    transparent_crc(p_441->g_8.sb, "p_441->g_8.sb", print_hash_value);
    transparent_crc(p_441->g_8.sc, "p_441->g_8.sc", print_hash_value);
    transparent_crc(p_441->g_8.sd, "p_441->g_8.sd", print_hash_value);
    transparent_crc(p_441->g_8.se, "p_441->g_8.se", print_hash_value);
    transparent_crc(p_441->g_8.sf, "p_441->g_8.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_441->g_24[i][j][k], "p_441->g_24[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_441->g_40, "p_441->g_40", print_hash_value);
    transparent_crc(p_441->g_45.x, "p_441->g_45.x", print_hash_value);
    transparent_crc(p_441->g_45.y, "p_441->g_45.y", print_hash_value);
    transparent_crc(p_441->g_56.x, "p_441->g_56.x", print_hash_value);
    transparent_crc(p_441->g_56.y, "p_441->g_56.y", print_hash_value);
    transparent_crc(p_441->g_64.x, "p_441->g_64.x", print_hash_value);
    transparent_crc(p_441->g_64.y, "p_441->g_64.y", print_hash_value);
    transparent_crc(p_441->g_64.z, "p_441->g_64.z", print_hash_value);
    transparent_crc(p_441->g_64.w, "p_441->g_64.w", print_hash_value);
    transparent_crc(p_441->g_97, "p_441->g_97", print_hash_value);
    transparent_crc(p_441->g_110.s0, "p_441->g_110.s0", print_hash_value);
    transparent_crc(p_441->g_110.s1, "p_441->g_110.s1", print_hash_value);
    transparent_crc(p_441->g_110.s2, "p_441->g_110.s2", print_hash_value);
    transparent_crc(p_441->g_110.s3, "p_441->g_110.s3", print_hash_value);
    transparent_crc(p_441->g_110.s4, "p_441->g_110.s4", print_hash_value);
    transparent_crc(p_441->g_110.s5, "p_441->g_110.s5", print_hash_value);
    transparent_crc(p_441->g_110.s6, "p_441->g_110.s6", print_hash_value);
    transparent_crc(p_441->g_110.s7, "p_441->g_110.s7", print_hash_value);
    transparent_crc(p_441->g_110.s8, "p_441->g_110.s8", print_hash_value);
    transparent_crc(p_441->g_110.s9, "p_441->g_110.s9", print_hash_value);
    transparent_crc(p_441->g_110.sa, "p_441->g_110.sa", print_hash_value);
    transparent_crc(p_441->g_110.sb, "p_441->g_110.sb", print_hash_value);
    transparent_crc(p_441->g_110.sc, "p_441->g_110.sc", print_hash_value);
    transparent_crc(p_441->g_110.sd, "p_441->g_110.sd", print_hash_value);
    transparent_crc(p_441->g_110.se, "p_441->g_110.se", print_hash_value);
    transparent_crc(p_441->g_110.sf, "p_441->g_110.sf", print_hash_value);
    transparent_crc(p_441->g_114, "p_441->g_114", print_hash_value);
    transparent_crc(p_441->g_119, "p_441->g_119", print_hash_value);
    transparent_crc(p_441->g_166, "p_441->g_166", print_hash_value);
    transparent_crc(p_441->g_191.x, "p_441->g_191.x", print_hash_value);
    transparent_crc(p_441->g_191.y, "p_441->g_191.y", print_hash_value);
    transparent_crc(p_441->g_199, "p_441->g_199", print_hash_value);
    transparent_crc(p_441->g_202.x, "p_441->g_202.x", print_hash_value);
    transparent_crc(p_441->g_202.y, "p_441->g_202.y", print_hash_value);
    transparent_crc(p_441->g_202.z, "p_441->g_202.z", print_hash_value);
    transparent_crc(p_441->g_202.w, "p_441->g_202.w", print_hash_value);
    transparent_crc(p_441->g_203.x, "p_441->g_203.x", print_hash_value);
    transparent_crc(p_441->g_203.y, "p_441->g_203.y", print_hash_value);
    transparent_crc(p_441->g_220.x, "p_441->g_220.x", print_hash_value);
    transparent_crc(p_441->g_220.y, "p_441->g_220.y", print_hash_value);
    transparent_crc(p_441->g_220.z, "p_441->g_220.z", print_hash_value);
    transparent_crc(p_441->g_220.w, "p_441->g_220.w", print_hash_value);
    transparent_crc(p_441->g_227.f0, "p_441->g_227.f0", print_hash_value);
    transparent_crc(p_441->g_227.f1, "p_441->g_227.f1", print_hash_value);
    transparent_crc(p_441->g_227.f2, "p_441->g_227.f2", print_hash_value);
    transparent_crc(p_441->g_227.f3, "p_441->g_227.f3", print_hash_value);
    transparent_crc(p_441->g_227.f4, "p_441->g_227.f4", print_hash_value);
    transparent_crc(p_441->g_227.f5, "p_441->g_227.f5", print_hash_value);
    transparent_crc(p_441->g_227.f6, "p_441->g_227.f6", print_hash_value);
    transparent_crc(p_441->g_227.f7, "p_441->g_227.f7", print_hash_value);
    transparent_crc(p_441->g_227.f8, "p_441->g_227.f8", print_hash_value);
    transparent_crc(p_441->g_228.f0, "p_441->g_228.f0", print_hash_value);
    transparent_crc(p_441->g_228.f1, "p_441->g_228.f1", print_hash_value);
    transparent_crc(p_441->g_228.f2, "p_441->g_228.f2", print_hash_value);
    transparent_crc(p_441->g_228.f3, "p_441->g_228.f3", print_hash_value);
    transparent_crc(p_441->g_228.f4, "p_441->g_228.f4", print_hash_value);
    transparent_crc(p_441->g_228.f5, "p_441->g_228.f5", print_hash_value);
    transparent_crc(p_441->g_228.f6, "p_441->g_228.f6", print_hash_value);
    transparent_crc(p_441->g_228.f7, "p_441->g_228.f7", print_hash_value);
    transparent_crc(p_441->g_228.f8, "p_441->g_228.f8", print_hash_value);
    transparent_crc(p_441->g_229.f0, "p_441->g_229.f0", print_hash_value);
    transparent_crc(p_441->g_229.f1, "p_441->g_229.f1", print_hash_value);
    transparent_crc(p_441->g_229.f2, "p_441->g_229.f2", print_hash_value);
    transparent_crc(p_441->g_229.f3, "p_441->g_229.f3", print_hash_value);
    transparent_crc(p_441->g_229.f4, "p_441->g_229.f4", print_hash_value);
    transparent_crc(p_441->g_229.f5, "p_441->g_229.f5", print_hash_value);
    transparent_crc(p_441->g_229.f6, "p_441->g_229.f6", print_hash_value);
    transparent_crc(p_441->g_229.f7, "p_441->g_229.f7", print_hash_value);
    transparent_crc(p_441->g_229.f8, "p_441->g_229.f8", print_hash_value);
    transparent_crc(p_441->g_230.f0, "p_441->g_230.f0", print_hash_value);
    transparent_crc(p_441->g_230.f1, "p_441->g_230.f1", print_hash_value);
    transparent_crc(p_441->g_230.f2, "p_441->g_230.f2", print_hash_value);
    transparent_crc(p_441->g_230.f3, "p_441->g_230.f3", print_hash_value);
    transparent_crc(p_441->g_230.f4, "p_441->g_230.f4", print_hash_value);
    transparent_crc(p_441->g_230.f5, "p_441->g_230.f5", print_hash_value);
    transparent_crc(p_441->g_230.f6, "p_441->g_230.f6", print_hash_value);
    transparent_crc(p_441->g_230.f7, "p_441->g_230.f7", print_hash_value);
    transparent_crc(p_441->g_230.f8, "p_441->g_230.f8", print_hash_value);
    transparent_crc(p_441->g_231.f0, "p_441->g_231.f0", print_hash_value);
    transparent_crc(p_441->g_231.f1, "p_441->g_231.f1", print_hash_value);
    transparent_crc(p_441->g_231.f2, "p_441->g_231.f2", print_hash_value);
    transparent_crc(p_441->g_231.f3, "p_441->g_231.f3", print_hash_value);
    transparent_crc(p_441->g_231.f4, "p_441->g_231.f4", print_hash_value);
    transparent_crc(p_441->g_231.f5, "p_441->g_231.f5", print_hash_value);
    transparent_crc(p_441->g_231.f6, "p_441->g_231.f6", print_hash_value);
    transparent_crc(p_441->g_231.f7, "p_441->g_231.f7", print_hash_value);
    transparent_crc(p_441->g_231.f8, "p_441->g_231.f8", print_hash_value);
    transparent_crc(p_441->g_232.f0, "p_441->g_232.f0", print_hash_value);
    transparent_crc(p_441->g_232.f1, "p_441->g_232.f1", print_hash_value);
    transparent_crc(p_441->g_232.f2, "p_441->g_232.f2", print_hash_value);
    transparent_crc(p_441->g_232.f3, "p_441->g_232.f3", print_hash_value);
    transparent_crc(p_441->g_232.f4, "p_441->g_232.f4", print_hash_value);
    transparent_crc(p_441->g_232.f5, "p_441->g_232.f5", print_hash_value);
    transparent_crc(p_441->g_232.f6, "p_441->g_232.f6", print_hash_value);
    transparent_crc(p_441->g_232.f7, "p_441->g_232.f7", print_hash_value);
    transparent_crc(p_441->g_232.f8, "p_441->g_232.f8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_441->g_233[i].f0, "p_441->g_233[i].f0", print_hash_value);
        transparent_crc(p_441->g_233[i].f1, "p_441->g_233[i].f1", print_hash_value);
        transparent_crc(p_441->g_233[i].f2, "p_441->g_233[i].f2", print_hash_value);
        transparent_crc(p_441->g_233[i].f3, "p_441->g_233[i].f3", print_hash_value);
        transparent_crc(p_441->g_233[i].f4, "p_441->g_233[i].f4", print_hash_value);
        transparent_crc(p_441->g_233[i].f5, "p_441->g_233[i].f5", print_hash_value);
        transparent_crc(p_441->g_233[i].f6, "p_441->g_233[i].f6", print_hash_value);
        transparent_crc(p_441->g_233[i].f7, "p_441->g_233[i].f7", print_hash_value);
        transparent_crc(p_441->g_233[i].f8, "p_441->g_233[i].f8", print_hash_value);

    }
    transparent_crc(p_441->g_234.f0, "p_441->g_234.f0", print_hash_value);
    transparent_crc(p_441->g_234.f1, "p_441->g_234.f1", print_hash_value);
    transparent_crc(p_441->g_234.f2, "p_441->g_234.f2", print_hash_value);
    transparent_crc(p_441->g_234.f3, "p_441->g_234.f3", print_hash_value);
    transparent_crc(p_441->g_234.f4, "p_441->g_234.f4", print_hash_value);
    transparent_crc(p_441->g_234.f5, "p_441->g_234.f5", print_hash_value);
    transparent_crc(p_441->g_234.f6, "p_441->g_234.f6", print_hash_value);
    transparent_crc(p_441->g_234.f7, "p_441->g_234.f7", print_hash_value);
    transparent_crc(p_441->g_234.f8, "p_441->g_234.f8", print_hash_value);
    transparent_crc(p_441->g_235.f0, "p_441->g_235.f0", print_hash_value);
    transparent_crc(p_441->g_235.f1, "p_441->g_235.f1", print_hash_value);
    transparent_crc(p_441->g_235.f2, "p_441->g_235.f2", print_hash_value);
    transparent_crc(p_441->g_235.f3, "p_441->g_235.f3", print_hash_value);
    transparent_crc(p_441->g_235.f4, "p_441->g_235.f4", print_hash_value);
    transparent_crc(p_441->g_235.f5, "p_441->g_235.f5", print_hash_value);
    transparent_crc(p_441->g_235.f6, "p_441->g_235.f6", print_hash_value);
    transparent_crc(p_441->g_235.f7, "p_441->g_235.f7", print_hash_value);
    transparent_crc(p_441->g_235.f8, "p_441->g_235.f8", print_hash_value);
    transparent_crc(p_441->g_236.f0, "p_441->g_236.f0", print_hash_value);
    transparent_crc(p_441->g_236.f1, "p_441->g_236.f1", print_hash_value);
    transparent_crc(p_441->g_236.f2, "p_441->g_236.f2", print_hash_value);
    transparent_crc(p_441->g_236.f3, "p_441->g_236.f3", print_hash_value);
    transparent_crc(p_441->g_236.f4, "p_441->g_236.f4", print_hash_value);
    transparent_crc(p_441->g_236.f5, "p_441->g_236.f5", print_hash_value);
    transparent_crc(p_441->g_236.f6, "p_441->g_236.f6", print_hash_value);
    transparent_crc(p_441->g_236.f7, "p_441->g_236.f7", print_hash_value);
    transparent_crc(p_441->g_236.f8, "p_441->g_236.f8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_441->g_237[i][j][k].f0, "p_441->g_237[i][j][k].f0", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f1, "p_441->g_237[i][j][k].f1", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f2, "p_441->g_237[i][j][k].f2", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f3, "p_441->g_237[i][j][k].f3", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f4, "p_441->g_237[i][j][k].f4", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f5, "p_441->g_237[i][j][k].f5", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f6, "p_441->g_237[i][j][k].f6", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f7, "p_441->g_237[i][j][k].f7", print_hash_value);
                transparent_crc(p_441->g_237[i][j][k].f8, "p_441->g_237[i][j][k].f8", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_441->g_238[i].f0, "p_441->g_238[i].f0", print_hash_value);
        transparent_crc(p_441->g_238[i].f1, "p_441->g_238[i].f1", print_hash_value);
        transparent_crc(p_441->g_238[i].f2, "p_441->g_238[i].f2", print_hash_value);
        transparent_crc(p_441->g_238[i].f3, "p_441->g_238[i].f3", print_hash_value);
        transparent_crc(p_441->g_238[i].f4, "p_441->g_238[i].f4", print_hash_value);
        transparent_crc(p_441->g_238[i].f5, "p_441->g_238[i].f5", print_hash_value);
        transparent_crc(p_441->g_238[i].f6, "p_441->g_238[i].f6", print_hash_value);
        transparent_crc(p_441->g_238[i].f7, "p_441->g_238[i].f7", print_hash_value);
        transparent_crc(p_441->g_238[i].f8, "p_441->g_238[i].f8", print_hash_value);

    }
    transparent_crc(p_441->g_239.f0, "p_441->g_239.f0", print_hash_value);
    transparent_crc(p_441->g_239.f1, "p_441->g_239.f1", print_hash_value);
    transparent_crc(p_441->g_239.f2, "p_441->g_239.f2", print_hash_value);
    transparent_crc(p_441->g_239.f3, "p_441->g_239.f3", print_hash_value);
    transparent_crc(p_441->g_239.f4, "p_441->g_239.f4", print_hash_value);
    transparent_crc(p_441->g_239.f5, "p_441->g_239.f5", print_hash_value);
    transparent_crc(p_441->g_239.f6, "p_441->g_239.f6", print_hash_value);
    transparent_crc(p_441->g_239.f7, "p_441->g_239.f7", print_hash_value);
    transparent_crc(p_441->g_239.f8, "p_441->g_239.f8", print_hash_value);
    transparent_crc(p_441->g_240.f0, "p_441->g_240.f0", print_hash_value);
    transparent_crc(p_441->g_240.f1, "p_441->g_240.f1", print_hash_value);
    transparent_crc(p_441->g_240.f2, "p_441->g_240.f2", print_hash_value);
    transparent_crc(p_441->g_240.f3, "p_441->g_240.f3", print_hash_value);
    transparent_crc(p_441->g_240.f4, "p_441->g_240.f4", print_hash_value);
    transparent_crc(p_441->g_240.f5, "p_441->g_240.f5", print_hash_value);
    transparent_crc(p_441->g_240.f6, "p_441->g_240.f6", print_hash_value);
    transparent_crc(p_441->g_240.f7, "p_441->g_240.f7", print_hash_value);
    transparent_crc(p_441->g_240.f8, "p_441->g_240.f8", print_hash_value);
    transparent_crc(p_441->g_241.f0, "p_441->g_241.f0", print_hash_value);
    transparent_crc(p_441->g_241.f1, "p_441->g_241.f1", print_hash_value);
    transparent_crc(p_441->g_241.f2, "p_441->g_241.f2", print_hash_value);
    transparent_crc(p_441->g_241.f3, "p_441->g_241.f3", print_hash_value);
    transparent_crc(p_441->g_241.f4, "p_441->g_241.f4", print_hash_value);
    transparent_crc(p_441->g_241.f5, "p_441->g_241.f5", print_hash_value);
    transparent_crc(p_441->g_241.f6, "p_441->g_241.f6", print_hash_value);
    transparent_crc(p_441->g_241.f7, "p_441->g_241.f7", print_hash_value);
    transparent_crc(p_441->g_241.f8, "p_441->g_241.f8", print_hash_value);
    transparent_crc(p_441->g_242.f0, "p_441->g_242.f0", print_hash_value);
    transparent_crc(p_441->g_242.f1, "p_441->g_242.f1", print_hash_value);
    transparent_crc(p_441->g_242.f2, "p_441->g_242.f2", print_hash_value);
    transparent_crc(p_441->g_242.f3, "p_441->g_242.f3", print_hash_value);
    transparent_crc(p_441->g_242.f4, "p_441->g_242.f4", print_hash_value);
    transparent_crc(p_441->g_242.f5, "p_441->g_242.f5", print_hash_value);
    transparent_crc(p_441->g_242.f6, "p_441->g_242.f6", print_hash_value);
    transparent_crc(p_441->g_242.f7, "p_441->g_242.f7", print_hash_value);
    transparent_crc(p_441->g_242.f8, "p_441->g_242.f8", print_hash_value);
    transparent_crc(p_441->g_243.f0, "p_441->g_243.f0", print_hash_value);
    transparent_crc(p_441->g_243.f1, "p_441->g_243.f1", print_hash_value);
    transparent_crc(p_441->g_243.f2, "p_441->g_243.f2", print_hash_value);
    transparent_crc(p_441->g_243.f3, "p_441->g_243.f3", print_hash_value);
    transparent_crc(p_441->g_243.f4, "p_441->g_243.f4", print_hash_value);
    transparent_crc(p_441->g_243.f5, "p_441->g_243.f5", print_hash_value);
    transparent_crc(p_441->g_243.f6, "p_441->g_243.f6", print_hash_value);
    transparent_crc(p_441->g_243.f7, "p_441->g_243.f7", print_hash_value);
    transparent_crc(p_441->g_243.f8, "p_441->g_243.f8", print_hash_value);
    transparent_crc(p_441->g_244.f0, "p_441->g_244.f0", print_hash_value);
    transparent_crc(p_441->g_244.f1, "p_441->g_244.f1", print_hash_value);
    transparent_crc(p_441->g_244.f2, "p_441->g_244.f2", print_hash_value);
    transparent_crc(p_441->g_244.f3, "p_441->g_244.f3", print_hash_value);
    transparent_crc(p_441->g_244.f4, "p_441->g_244.f4", print_hash_value);
    transparent_crc(p_441->g_244.f5, "p_441->g_244.f5", print_hash_value);
    transparent_crc(p_441->g_244.f6, "p_441->g_244.f6", print_hash_value);
    transparent_crc(p_441->g_244.f7, "p_441->g_244.f7", print_hash_value);
    transparent_crc(p_441->g_244.f8, "p_441->g_244.f8", print_hash_value);
    transparent_crc(p_441->g_245.f0, "p_441->g_245.f0", print_hash_value);
    transparent_crc(p_441->g_245.f1, "p_441->g_245.f1", print_hash_value);
    transparent_crc(p_441->g_245.f2, "p_441->g_245.f2", print_hash_value);
    transparent_crc(p_441->g_245.f3, "p_441->g_245.f3", print_hash_value);
    transparent_crc(p_441->g_245.f4, "p_441->g_245.f4", print_hash_value);
    transparent_crc(p_441->g_245.f5, "p_441->g_245.f5", print_hash_value);
    transparent_crc(p_441->g_245.f6, "p_441->g_245.f6", print_hash_value);
    transparent_crc(p_441->g_245.f7, "p_441->g_245.f7", print_hash_value);
    transparent_crc(p_441->g_245.f8, "p_441->g_245.f8", print_hash_value);
    transparent_crc(p_441->g_246.f0, "p_441->g_246.f0", print_hash_value);
    transparent_crc(p_441->g_246.f1, "p_441->g_246.f1", print_hash_value);
    transparent_crc(p_441->g_246.f2, "p_441->g_246.f2", print_hash_value);
    transparent_crc(p_441->g_246.f3, "p_441->g_246.f3", print_hash_value);
    transparent_crc(p_441->g_246.f4, "p_441->g_246.f4", print_hash_value);
    transparent_crc(p_441->g_246.f5, "p_441->g_246.f5", print_hash_value);
    transparent_crc(p_441->g_246.f6, "p_441->g_246.f6", print_hash_value);
    transparent_crc(p_441->g_246.f7, "p_441->g_246.f7", print_hash_value);
    transparent_crc(p_441->g_246.f8, "p_441->g_246.f8", print_hash_value);
    transparent_crc(p_441->g_250, "p_441->g_250", print_hash_value);
    transparent_crc(p_441->g_254.x, "p_441->g_254.x", print_hash_value);
    transparent_crc(p_441->g_254.y, "p_441->g_254.y", print_hash_value);
    transparent_crc(p_441->g_254.z, "p_441->g_254.z", print_hash_value);
    transparent_crc(p_441->g_254.w, "p_441->g_254.w", print_hash_value);
    transparent_crc(p_441->g_255.x, "p_441->g_255.x", print_hash_value);
    transparent_crc(p_441->g_255.y, "p_441->g_255.y", print_hash_value);
    transparent_crc(p_441->g_276.s0, "p_441->g_276.s0", print_hash_value);
    transparent_crc(p_441->g_276.s1, "p_441->g_276.s1", print_hash_value);
    transparent_crc(p_441->g_276.s2, "p_441->g_276.s2", print_hash_value);
    transparent_crc(p_441->g_276.s3, "p_441->g_276.s3", print_hash_value);
    transparent_crc(p_441->g_276.s4, "p_441->g_276.s4", print_hash_value);
    transparent_crc(p_441->g_276.s5, "p_441->g_276.s5", print_hash_value);
    transparent_crc(p_441->g_276.s6, "p_441->g_276.s6", print_hash_value);
    transparent_crc(p_441->g_276.s7, "p_441->g_276.s7", print_hash_value);
    transparent_crc(p_441->g_282.x, "p_441->g_282.x", print_hash_value);
    transparent_crc(p_441->g_282.y, "p_441->g_282.y", print_hash_value);
    transparent_crc(p_441->g_282.z, "p_441->g_282.z", print_hash_value);
    transparent_crc(p_441->g_282.w, "p_441->g_282.w", print_hash_value);
    transparent_crc(p_441->g_299.s0, "p_441->g_299.s0", print_hash_value);
    transparent_crc(p_441->g_299.s1, "p_441->g_299.s1", print_hash_value);
    transparent_crc(p_441->g_299.s2, "p_441->g_299.s2", print_hash_value);
    transparent_crc(p_441->g_299.s3, "p_441->g_299.s3", print_hash_value);
    transparent_crc(p_441->g_299.s4, "p_441->g_299.s4", print_hash_value);
    transparent_crc(p_441->g_299.s5, "p_441->g_299.s5", print_hash_value);
    transparent_crc(p_441->g_299.s6, "p_441->g_299.s6", print_hash_value);
    transparent_crc(p_441->g_299.s7, "p_441->g_299.s7", print_hash_value);
    transparent_crc(p_441->g_299.s8, "p_441->g_299.s8", print_hash_value);
    transparent_crc(p_441->g_299.s9, "p_441->g_299.s9", print_hash_value);
    transparent_crc(p_441->g_299.sa, "p_441->g_299.sa", print_hash_value);
    transparent_crc(p_441->g_299.sb, "p_441->g_299.sb", print_hash_value);
    transparent_crc(p_441->g_299.sc, "p_441->g_299.sc", print_hash_value);
    transparent_crc(p_441->g_299.sd, "p_441->g_299.sd", print_hash_value);
    transparent_crc(p_441->g_299.se, "p_441->g_299.se", print_hash_value);
    transparent_crc(p_441->g_299.sf, "p_441->g_299.sf", print_hash_value);
    transparent_crc(p_441->g_346.x, "p_441->g_346.x", print_hash_value);
    transparent_crc(p_441->g_346.y, "p_441->g_346.y", print_hash_value);
    transparent_crc(p_441->g_346.z, "p_441->g_346.z", print_hash_value);
    transparent_crc(p_441->g_346.w, "p_441->g_346.w", print_hash_value);
    transparent_crc(p_441->g_362.x, "p_441->g_362.x", print_hash_value);
    transparent_crc(p_441->g_362.y, "p_441->g_362.y", print_hash_value);
    transparent_crc(p_441->g_365.s0, "p_441->g_365.s0", print_hash_value);
    transparent_crc(p_441->g_365.s1, "p_441->g_365.s1", print_hash_value);
    transparent_crc(p_441->g_365.s2, "p_441->g_365.s2", print_hash_value);
    transparent_crc(p_441->g_365.s3, "p_441->g_365.s3", print_hash_value);
    transparent_crc(p_441->g_365.s4, "p_441->g_365.s4", print_hash_value);
    transparent_crc(p_441->g_365.s5, "p_441->g_365.s5", print_hash_value);
    transparent_crc(p_441->g_365.s6, "p_441->g_365.s6", print_hash_value);
    transparent_crc(p_441->g_365.s7, "p_441->g_365.s7", print_hash_value);
    transparent_crc(p_441->g_365.s8, "p_441->g_365.s8", print_hash_value);
    transparent_crc(p_441->g_365.s9, "p_441->g_365.s9", print_hash_value);
    transparent_crc(p_441->g_365.sa, "p_441->g_365.sa", print_hash_value);
    transparent_crc(p_441->g_365.sb, "p_441->g_365.sb", print_hash_value);
    transparent_crc(p_441->g_365.sc, "p_441->g_365.sc", print_hash_value);
    transparent_crc(p_441->g_365.sd, "p_441->g_365.sd", print_hash_value);
    transparent_crc(p_441->g_365.se, "p_441->g_365.se", print_hash_value);
    transparent_crc(p_441->g_365.sf, "p_441->g_365.sf", print_hash_value);
    transparent_crc(p_441->g_388.f0, "p_441->g_388.f0", print_hash_value);
    transparent_crc(p_441->g_388.f1, "p_441->g_388.f1", print_hash_value);
    transparent_crc(p_441->g_388.f2.f0, "p_441->g_388.f2.f0", print_hash_value);
    transparent_crc(p_441->g_388.f2.f1, "p_441->g_388.f2.f1", print_hash_value);
    transparent_crc(p_441->g_388.f2.f2, "p_441->g_388.f2.f2", print_hash_value);
    transparent_crc(p_441->g_388.f2.f3, "p_441->g_388.f2.f3", print_hash_value);
    transparent_crc(p_441->g_388.f2.f4, "p_441->g_388.f2.f4", print_hash_value);
    transparent_crc(p_441->g_388.f3, "p_441->g_388.f3", print_hash_value);
    transparent_crc(p_441->g_388.f4, "p_441->g_388.f4", print_hash_value);
    transparent_crc(p_441->g_388.f5, "p_441->g_388.f5", print_hash_value);
    transparent_crc(p_441->g_388.f6, "p_441->g_388.f6", print_hash_value);
    transparent_crc(p_441->g_389.f0, "p_441->g_389.f0", print_hash_value);
    transparent_crc(p_441->g_389.f1, "p_441->g_389.f1", print_hash_value);
    transparent_crc(p_441->g_389.f2.f0, "p_441->g_389.f2.f0", print_hash_value);
    transparent_crc(p_441->g_389.f2.f1, "p_441->g_389.f2.f1", print_hash_value);
    transparent_crc(p_441->g_389.f2.f2, "p_441->g_389.f2.f2", print_hash_value);
    transparent_crc(p_441->g_389.f2.f3, "p_441->g_389.f2.f3", print_hash_value);
    transparent_crc(p_441->g_389.f2.f4, "p_441->g_389.f2.f4", print_hash_value);
    transparent_crc(p_441->g_389.f3, "p_441->g_389.f3", print_hash_value);
    transparent_crc(p_441->g_389.f4, "p_441->g_389.f4", print_hash_value);
    transparent_crc(p_441->g_389.f5, "p_441->g_389.f5", print_hash_value);
    transparent_crc(p_441->g_389.f6, "p_441->g_389.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_441->g_390[i][j].f0, "p_441->g_390[i][j].f0", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f1, "p_441->g_390[i][j].f1", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f2.f0, "p_441->g_390[i][j].f2.f0", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f2.f1, "p_441->g_390[i][j].f2.f1", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f2.f2, "p_441->g_390[i][j].f2.f2", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f2.f3, "p_441->g_390[i][j].f2.f3", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f2.f4, "p_441->g_390[i][j].f2.f4", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f3, "p_441->g_390[i][j].f3", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f4, "p_441->g_390[i][j].f4", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f5, "p_441->g_390[i][j].f5", print_hash_value);
            transparent_crc(p_441->g_390[i][j].f6, "p_441->g_390[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_441->g_391.f0, "p_441->g_391.f0", print_hash_value);
    transparent_crc(p_441->g_391.f1, "p_441->g_391.f1", print_hash_value);
    transparent_crc(p_441->g_391.f2.f0, "p_441->g_391.f2.f0", print_hash_value);
    transparent_crc(p_441->g_391.f2.f1, "p_441->g_391.f2.f1", print_hash_value);
    transparent_crc(p_441->g_391.f2.f2, "p_441->g_391.f2.f2", print_hash_value);
    transparent_crc(p_441->g_391.f2.f3, "p_441->g_391.f2.f3", print_hash_value);
    transparent_crc(p_441->g_391.f2.f4, "p_441->g_391.f2.f4", print_hash_value);
    transparent_crc(p_441->g_391.f3, "p_441->g_391.f3", print_hash_value);
    transparent_crc(p_441->g_391.f4, "p_441->g_391.f4", print_hash_value);
    transparent_crc(p_441->g_391.f5, "p_441->g_391.f5", print_hash_value);
    transparent_crc(p_441->g_391.f6, "p_441->g_391.f6", print_hash_value);
    transparent_crc(p_441->g_394.f0, "p_441->g_394.f0", print_hash_value);
    transparent_crc(p_441->g_394.f1, "p_441->g_394.f1", print_hash_value);
    transparent_crc(p_441->g_394.f2.f0, "p_441->g_394.f2.f0", print_hash_value);
    transparent_crc(p_441->g_394.f2.f1, "p_441->g_394.f2.f1", print_hash_value);
    transparent_crc(p_441->g_394.f2.f2, "p_441->g_394.f2.f2", print_hash_value);
    transparent_crc(p_441->g_394.f2.f3, "p_441->g_394.f2.f3", print_hash_value);
    transparent_crc(p_441->g_394.f2.f4, "p_441->g_394.f2.f4", print_hash_value);
    transparent_crc(p_441->g_394.f3, "p_441->g_394.f3", print_hash_value);
    transparent_crc(p_441->g_394.f4, "p_441->g_394.f4", print_hash_value);
    transparent_crc(p_441->g_394.f5, "p_441->g_394.f5", print_hash_value);
    transparent_crc(p_441->g_394.f6, "p_441->g_394.f6", print_hash_value);
    transparent_crc(p_441->g_425.s0, "p_441->g_425.s0", print_hash_value);
    transparent_crc(p_441->g_425.s1, "p_441->g_425.s1", print_hash_value);
    transparent_crc(p_441->g_425.s2, "p_441->g_425.s2", print_hash_value);
    transparent_crc(p_441->g_425.s3, "p_441->g_425.s3", print_hash_value);
    transparent_crc(p_441->g_425.s4, "p_441->g_425.s4", print_hash_value);
    transparent_crc(p_441->g_425.s5, "p_441->g_425.s5", print_hash_value);
    transparent_crc(p_441->g_425.s6, "p_441->g_425.s6", print_hash_value);
    transparent_crc(p_441->g_425.s7, "p_441->g_425.s7", print_hash_value);
    transparent_crc(p_441->g_427.s0, "p_441->g_427.s0", print_hash_value);
    transparent_crc(p_441->g_427.s1, "p_441->g_427.s1", print_hash_value);
    transparent_crc(p_441->g_427.s2, "p_441->g_427.s2", print_hash_value);
    transparent_crc(p_441->g_427.s3, "p_441->g_427.s3", print_hash_value);
    transparent_crc(p_441->g_427.s4, "p_441->g_427.s4", print_hash_value);
    transparent_crc(p_441->g_427.s5, "p_441->g_427.s5", print_hash_value);
    transparent_crc(p_441->g_427.s6, "p_441->g_427.s6", print_hash_value);
    transparent_crc(p_441->g_427.s7, "p_441->g_427.s7", print_hash_value);
    transparent_crc(p_441->g_435.f0, "p_441->g_435.f0", print_hash_value);
    transparent_crc(p_441->g_435.f1, "p_441->g_435.f1", print_hash_value);
    transparent_crc(p_441->g_435.f2, "p_441->g_435.f2", print_hash_value);
    transparent_crc(p_441->g_435.f3, "p_441->g_435.f3", print_hash_value);
    transparent_crc(p_441->g_435.f4, "p_441->g_435.f4", print_hash_value);
    transparent_crc(p_441->g_435.f5, "p_441->g_435.f5", print_hash_value);
    transparent_crc(p_441->g_435.f6, "p_441->g_435.f6", print_hash_value);
    transparent_crc(p_441->g_435.f7.f0, "p_441->g_435.f7.f0", print_hash_value);
    transparent_crc(p_441->g_435.f7.f1, "p_441->g_435.f7.f1", print_hash_value);
    transparent_crc(p_441->g_435.f7.f2, "p_441->g_435.f7.f2", print_hash_value);
    transparent_crc(p_441->g_435.f7.f3, "p_441->g_435.f7.f3", print_hash_value);
    transparent_crc(p_441->g_435.f7.f4, "p_441->g_435.f7.f4", print_hash_value);
    transparent_crc(p_441->g_435.f7.f5, "p_441->g_435.f7.f5", print_hash_value);
    transparent_crc(p_441->g_435.f7.f6, "p_441->g_435.f7.f6", print_hash_value);
    transparent_crc(p_441->g_435.f7.f7, "p_441->g_435.f7.f7", print_hash_value);
    transparent_crc(p_441->g_435.f7.f8, "p_441->g_435.f7.f8", print_hash_value);
    transparent_crc(p_441->g_435.f8.f0, "p_441->g_435.f8.f0", print_hash_value);
    transparent_crc(p_441->g_435.f8.f1, "p_441->g_435.f8.f1", print_hash_value);
    transparent_crc(p_441->g_435.f8.f2, "p_441->g_435.f8.f2", print_hash_value);
    transparent_crc(p_441->g_435.f8.f3, "p_441->g_435.f8.f3", print_hash_value);
    transparent_crc(p_441->g_435.f8.f4, "p_441->g_435.f8.f4", print_hash_value);
    transparent_crc(p_441->g_435.f8.f5, "p_441->g_435.f8.f5", print_hash_value);
    transparent_crc(p_441->g_435.f8.f6, "p_441->g_435.f8.f6", print_hash_value);
    transparent_crc(p_441->g_435.f8.f7, "p_441->g_435.f8.f7", print_hash_value);
    transparent_crc(p_441->g_435.f8.f8, "p_441->g_435.f8.f8", print_hash_value);
    transparent_crc(p_441->g_435.f9, "p_441->g_435.f9", print_hash_value);
    transparent_crc(p_441->g_440, "p_441->g_440", print_hash_value);
    transparent_crc(p_441->v_collective, "p_441->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_441->g_special_values[i + 57 * get_linear_group_id()], "p_441->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_441->l_comm_values[get_linear_local_id()], "p_441->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_441->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_441->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
