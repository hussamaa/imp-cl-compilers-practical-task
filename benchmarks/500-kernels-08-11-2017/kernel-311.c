// --atomics 16 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 47,20,2 -l 1,20,2
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

__constant uint32_t permutations[10][40] = {
{28,24,16,10,19,33,12,2,0,3,23,18,4,35,26,17,20,11,31,1,34,9,5,37,39,38,21,15,7,30,29,25,36,8,13,6,32,14,27,22}, // permutation 0
{24,36,11,13,27,10,17,9,37,1,34,4,2,29,25,18,39,32,38,26,31,22,5,16,8,23,33,20,3,14,35,0,15,6,12,21,19,7,30,28}, // permutation 1
{24,11,27,15,6,34,14,1,13,30,2,12,20,33,3,35,9,18,4,36,25,29,28,37,19,32,31,10,39,5,26,21,17,7,0,16,23,8,22,38}, // permutation 2
{39,4,9,7,18,19,22,17,33,25,30,0,37,28,10,2,20,11,31,36,34,12,14,3,24,1,6,5,26,32,13,35,23,21,8,16,27,29,15,38}, // permutation 3
{31,10,3,32,29,7,8,17,13,9,0,35,2,22,21,16,27,19,26,6,14,37,1,33,34,11,25,23,20,30,4,5,36,38,28,24,12,39,18,15}, // permutation 4
{7,12,38,20,17,11,4,1,33,24,39,16,36,0,35,37,34,9,26,32,15,5,10,25,18,3,27,14,28,19,31,22,21,8,23,30,13,2,6,29}, // permutation 5
{32,26,17,38,16,29,3,1,21,5,18,2,11,37,35,27,22,20,24,28,33,4,39,6,34,31,19,13,0,36,9,10,14,23,12,25,8,7,15,30}, // permutation 6
{36,4,22,26,35,37,32,24,25,19,9,38,15,13,31,39,1,20,30,34,29,5,17,3,10,14,33,21,12,27,2,18,28,0,7,23,11,16,8,6}, // permutation 7
{2,30,1,17,13,22,37,35,34,7,33,19,28,38,6,9,21,11,8,12,25,36,15,26,3,14,39,23,5,4,29,20,0,18,10,27,32,31,24,16}, // permutation 8
{29,26,4,9,25,14,33,12,32,34,20,30,35,8,28,3,23,31,37,24,11,19,0,10,15,16,27,22,5,2,6,17,39,7,36,21,38,13,18,1} // permutation 9
};

// Seed: 3094720301

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
    volatile VECTOR(int32_t, 2) g_6;
    volatile VECTOR(int16_t, 2) g_7;
    int32_t g_23;
    int32_t g_25;
    volatile int64_t g_34;
    int32_t g_35[6][1];
    int32_t g_36;
    volatile uint8_t g_37;
    int32_t *g_42;
    int32_t ** volatile g_41;
    VECTOR(int16_t, 16) g_48;
    VECTOR(uint32_t, 16) g_56;
    uint32_t g_58;
    uint32_t g_66;
    int32_t *g_89;
    VECTOR(int64_t, 2) g_110;
    uint32_t *g_116;
    uint32_t **g_115[10];
    int16_t g_120[10];
    int8_t g_121;
    uint8_t g_122;
    VECTOR(int16_t, 16) g_134;
    volatile int16_t g_140;
    volatile int16_t * volatile g_139[4];
    volatile int16_t * volatile *g_138;
    VECTOR(uint8_t, 8) g_144;
    int16_t g_163;
    int32_t g_180;
    struct S0 g_201;
    uint16_t g_212;
    VECTOR(uint8_t, 2) g_221;
    uint16_t g_232;
    uint64_t g_236;
    int16_t g_242;
    int32_t g_243;
    uint32_t g_274;
    int32_t g_275;
    VECTOR(int32_t, 2) g_277;
    VECTOR(int32_t, 2) g_278;
    VECTOR(int32_t, 16) g_280;
    uint16_t g_341;
    uint64_t *g_388;
    uint64_t **g_387;
    volatile VECTOR(uint64_t, 16) g_394;
    VECTOR(int32_t, 4) g_400;
    int16_t *g_410;
    int16_t **g_409;
    VECTOR(uint8_t, 16) g_427;
    uint64_t g_435[2];
    volatile VECTOR(int8_t, 4) g_444;
    int8_t g_448;
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
uint8_t  func_1(struct S1 * p_453);
int64_t  func_11(uint32_t  p_12, struct S0  p_13, int64_t  p_14, uint32_t  p_15, struct S1 * p_453);
uint32_t  func_16(struct S0  p_17, struct S1 * p_453);
int32_t * func_20(int64_t  p_21, struct S1 * p_453);
int16_t  func_49(int32_t * p_50, int16_t  p_51, int32_t  p_52, int32_t  p_53, int32_t  p_54, struct S1 * p_453);
int64_t  func_61(uint32_t  p_62, uint64_t  p_63, uint32_t  p_64, struct S1 * p_453);
struct S0  func_69(uint64_t  p_70, uint64_t  p_71, uint32_t * p_72, int32_t * p_73, struct S1 * p_453);
uint32_t * func_74(uint32_t * p_75, struct S1 * p_453);
int32_t  func_77(int64_t  p_78, uint16_t  p_79, uint8_t  p_80, uint64_t  p_81, struct S1 * p_453);
int64_t  func_82(uint16_t  p_83, uint32_t  p_84, uint32_t  p_85, int16_t  p_86, struct S1 * p_453);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_453->g_6 p_453->g_7 p_453->l_comm_values p_453->g_37 p_453->g_41 p_453->g_48 p_453->g_36 p_453->g_56 p_453->g_58 p_453->g_66 p_453->g_25 p_453->g_89 p_453->g_35 p_453->g_comm_values p_453->g_110 p_453->g_122 p_453->g_121 p_453->g_138 p_453->g_144 p_453->g_116 p_453->g_120 p_453->g_163 p_453->g_180 p_453->g_201 p_453->g_212 p_453->g_221 p_453->g_232 p_453->g_242 p_453->g_275 p_453->g_23 p_453->g_277 p_453->g_278 p_453->g_280 p_453->g_274 p_453->g_42 p_453->g_387 p_453->g_236 p_453->g_341 p_453->g_139 p_453->g_140 p_453->g_427 p_453->g_388 p_453->g_435 p_453->g_444 p_453->g_400
 * writes: p_453->g_37 p_453->g_42 p_453->g_58 p_453->g_66 p_453->g_25 p_453->g_89 p_453->g_115 p_453->g_122 p_453->g_121 p_453->g_120 p_453->g_138 p_453->g_163 p_453->g_180 p_453->g_201 p_453->g_212 p_453->g_232 p_453->g_236 p_453->g_242 p_453->g_243 p_453->g_274 p_453->g_36 p_453->g_341 p_453->g_275 p_453->g_388 p_453->g_448 p_453->g_400
 */
uint8_t  func_1(struct S1 * p_453)
{ /* block id: 4 */
    VECTOR(uint16_t, 16) l_8 = (VECTOR(uint16_t, 16))(0x8ECBL, (VECTOR(uint16_t, 4))(0x8ECBL, (VECTOR(uint16_t, 2))(0x8ECBL, 0x2AFFL), 0x2AFFL), 0x2AFFL, 0x8ECBL, 0x2AFFL, (VECTOR(uint16_t, 2))(0x8ECBL, 0x2AFFL), (VECTOR(uint16_t, 2))(0x8ECBL, 0x2AFFL), 0x8ECBL, 0x2AFFL, 0x8ECBL, 0x2AFFL);
    struct S0 l_18 = {1L};
    VECTOR(int16_t, 16) l_47 = (VECTOR(int16_t, 16))(0x21F9L, (VECTOR(int16_t, 4))(0x21F9L, (VECTOR(int16_t, 2))(0x21F9L, 0x565DL), 0x565DL), 0x565DL, 0x21F9L, 0x565DL, (VECTOR(int16_t, 2))(0x21F9L, 0x565DL), (VECTOR(int16_t, 2))(0x21F9L, 0x565DL), 0x21F9L, 0x565DL, 0x21F9L, 0x565DL);
    int32_t *l_55[6][1][10] = {{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,&p_453->g_36,(void*)0,&p_453->g_25,&p_453->g_25}}};
    uint32_t *l_57 = &p_453->g_58;
    int32_t l_344 = 5L;
    int16_t *l_408 = &p_453->g_242;
    int16_t **l_407[6][3][5] = {{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}},{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}},{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}},{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}},{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}},{{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0},{&l_408,&l_408,&l_408,&l_408,(void*)0}}};
    VECTOR(int32_t, 16) l_429 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    int32_t **l_436 = &l_55[0][0][5];
    int32_t *l_438 = (void*)0;
    VECTOR(uint16_t, 4) l_446 = (VECTOR(uint16_t, 4))(0x0BCDL, (VECTOR(uint16_t, 2))(0x0BCDL, 0UL), 0UL);
    int8_t *l_449 = (void*)0;
    int i, j, k;
    if ((((safe_sub_func_uint16_t_u_u(((p_453->g_341 = (safe_sub_func_uint32_t_u_u((((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 1L)).yyxx)).wzwyzwxw)).s15)), 0x147597A6L, ((VECTOR(int32_t, 2))(0x6F65E790L, 0x64896E6AL)), ((VECTOR(int32_t, 2))(p_453->g_6.yy)), (-1L))).lo)).xyzwwxyyzwwwwzwz, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(p_453->g_7.yy)).yxxxyxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_8.s63)).yxxxyyxy)), (uint16_t)((safe_add_func_uint8_t_u_u((p_453->l_comm_values[(safe_mod_func_uint32_t_u_u(p_453->tid, 40))] == func_11(func_16(l_18, p_453), l_18, l_18.f0, ((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(l_47.sbdcdb7a8)).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_453->g_48.s3370)).xyzxyyxxywyywyxz)).s02d2))).z, func_49(l_55[5][0][7], (p_453->g_36 | ((((VECTOR(uint32_t, 16))(p_453->g_56.sffdb42e276980504)).sc == (p_453->g_48.s9 , ((*l_57)--))) , func_61(p_453->g_58, p_453->g_48.s4, p_453->g_56.s2, p_453))), p_453->g_48.sd, p_453->g_144.s3, p_453->g_23, p_453))) , 0x1D4F5D2FF86269F6L) < p_453->g_48.s2), p_453->g_277.y)) , p_453->g_274), p_453)), p_453->g_277.x)) <= p_453->g_110.y), (uint16_t)p_453->g_110.y))).s05)), 0UL, 65534UL)))).zwzxywxy))).s3573311466352044))).s3 , 4294967295UL), 0x4E7E8D0DL))) , 0UL), 0x5026L)) , (*p_453->g_116)) | 0x0DB75DD5L))
    { /* block id: 160 */
        int32_t l_345 = 0x766876D6L;
        VECTOR(int32_t, 4) l_346 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x41C0669FL), 0x41C0669FL);
        uint32_t l_413 = 0x745A0C8EL;
        int32_t *l_416[7][8][4] = {{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}},{{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0},{&p_453->g_243,&p_453->g_36,&p_453->g_25,(void*)0}}};
        int16_t ***l_419 = &p_453->g_409;
        VECTOR(int8_t, 4) l_425 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x75L), 0x75L);
        int8_t *l_426[1][3];
        int64_t l_428 = 0L;
        uint16_t *l_434 = &p_453->g_212;
        int32_t **l_437[9];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_426[i][j] = &p_453->g_121;
        }
        for (i = 0; i < 9; i++)
            l_437[i] = &l_55[4][0][3];
        l_345 &= (safe_div_func_uint8_t_u_u(l_344, FAKE_DIVERGE(p_453->global_1_offset, get_global_id(1), 10)));
        (**p_453->g_41) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_346.xy)), 0x25A4B6F3L, (-1L))).x;
        for (p_453->g_275 = 0; (p_453->g_275 != (-18)); --p_453->g_275)
        { /* block id: 165 */
            uint64_t **l_389[6] = {&p_453->g_388,&p_453->g_388,&p_453->g_388,&p_453->g_388,&p_453->g_388,&p_453->g_388};
            int8_t *l_392 = &p_453->g_121;
            int32_t l_393 = 1L;
            VECTOR(uint64_t, 2) l_395 = (VECTOR(uint64_t, 2))(6UL, 0x3883698E118DF4F6L);
            uint16_t *l_405 = (void*)0;
            uint16_t *l_406 = &p_453->g_341;
            int64_t l_411 = 0x22A10F93DBCC2FE7L;
            int64_t *l_412 = &l_411;
            int16_t ***l_420 = &p_453->g_409;
            int i, j;
            if ((atomic_inc(&p_453->g_atomic_input[16 * get_linear_group_id() + 3]) == 0))
            { /* block id: 167 */
                uint32_t l_349 = 4294967295UL;
                int8_t l_350 = 0x2EL;
                VECTOR(uint8_t, 8) l_351 = (VECTOR(uint8_t, 8))(0xBBL, (VECTOR(uint8_t, 4))(0xBBL, (VECTOR(uint8_t, 2))(0xBBL, 0x3CL), 0x3CL), 0x3CL, 0xBBL, 0x3CL);
                uint8_t l_375 = 0UL;
                int32_t l_378 = 0x25BDE2D0L;
                int8_t l_379[5][7][4] = {{{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L}},{{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L}},{{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L}},{{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L}},{{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L},{0x32L,0x3CL,0x43L,0x28L}}};
                int64_t l_380 = 1L;
                int32_t l_381 = (-1L);
                int64_t l_382[6];
                int64_t l_383 = 0L;
                uint32_t l_384 = 1UL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_382[i] = 0x150B1E4EFC23AF04L;
                l_351.s0 ^= (l_350 ^= l_349);
                for (l_350 = 0; (l_350 != (-29)); l_350 = safe_sub_func_int8_t_s_s(l_350, 3))
                { /* block id: 172 */
                    int32_t l_355 = (-10L);
                    int32_t *l_354 = &l_355;
                    int32_t *l_356 = &l_355;
                    int32_t *l_357 = &l_355;
                    int32_t *l_358[10][2][9] = {{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355},{&l_355,&l_355,&l_355,&l_355,(void*)0,&l_355,&l_355,&l_355,&l_355}}};
                    uint32_t l_359 = 4294967295UL;
                    uint64_t l_360 = 6UL;
                    int i, j, k;
                    l_356 = l_354;
                    l_358[6][1][2] = l_357;
                    l_360 = (((VECTOR(int64_t, 2))(0x54BA2A8398D24BC1L, 0x0CE0AC1F914459BAL)).odd , (l_359 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0CC3448BL, (-1L))))).hi));
                    for (l_359 = 0; (l_359 > 39); l_359++)
                    { /* block id: 179 */
                        uint32_t l_363[8] = {0xB5372B35L,0xB5372B35L,0xB5372B35L,0xB5372B35L,0xB5372B35L,0xB5372B35L,0xB5372B35L,0xB5372B35L};
                        uint16_t l_364 = 0xC465L;
                        VECTOR(uint8_t, 4) l_367 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD6L), 0xD6L);
                        VECTOR(uint16_t, 16) l_368 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL, (VECTOR(uint16_t, 2))(2UL, 1UL), (VECTOR(uint16_t, 2))(2UL, 1UL), 2UL, 1UL, 2UL, 1UL);
                        int16_t l_369 = 0L;
                        uint16_t l_370 = 0x7469L;
                        uint64_t l_371 = 0xAD72819096216E67L;
                        int16_t l_372[2][10][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
                        int32_t l_374 = 0x6157B59AL;
                        int32_t *l_373 = &l_374;
                        int i, j, k;
                        (*l_354) &= (-6L);
                        l_371 |= ((l_363[2] , (--l_364)) , (FAKE_DIVERGE(p_453->local_0_offset, get_local_id(0), 10) , ((l_367.w , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_368.s493e8527)).hi)).w) , (l_370 = (l_369 , 1L)))));
                        l_358[2][1][6] = (((VECTOR(int64_t, 2))(0x488D498ADFB72610L, 0x18717FDFB0D7E684L)).lo , (l_372[1][2][2] , l_373));
                    }
                }
                l_375++;
                --l_384;
                unsigned int result = 0;
                result += l_349;
                result += l_350;
                result += l_351.s7;
                result += l_351.s6;
                result += l_351.s5;
                result += l_351.s4;
                result += l_351.s3;
                result += l_351.s2;
                result += l_351.s1;
                result += l_351.s0;
                result += l_375;
                result += l_378;
                int l_379_i0, l_379_i1, l_379_i2;
                for (l_379_i0 = 0; l_379_i0 < 5; l_379_i0++) {
                    for (l_379_i1 = 0; l_379_i1 < 7; l_379_i1++) {
                        for (l_379_i2 = 0; l_379_i2 < 4; l_379_i2++) {
                            result += l_379[l_379_i0][l_379_i1][l_379_i2];
                        }
                    }
                }
                result += l_380;
                result += l_381;
                int l_382_i0;
                for (l_382_i0 = 0; l_382_i0 < 6; l_382_i0++) {
                    result += l_382[l_382_i0];
                }
                result += l_383;
                result += l_384;
                atomic_add(&p_453->g_special_values[16 * get_linear_group_id() + 3], result);
            }
            else
            { /* block id: 189 */
                (1 + 1);
            }
            l_389[3] = p_453->g_387;
            l_413 ^= (0x5903L == (safe_sub_func_uint64_t_u_u(((((((*l_392) = p_453->g_236) , l_393) < (((VECTOR(int64_t, 16))(0x79A4B633B7F010E2L, 0x2C214BE47F3CA4CCL, ((VECTOR(int64_t, 8))(((*l_412) = (((((VECTOR(uint64_t, 4))(p_453->g_394.sc39a)).z & ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_395.xyyyxxyx)).s7170736426004023)).sa) || ((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((p_453->g_232 = (0x0938L >= (((*p_453->g_42) |= 0x4E90041EL) > ((((VECTOR(int32_t, 8))(p_453->g_400.xwzzzwyz)).s1 || (p_453->g_278.y < (safe_mul_func_int8_t_s_s(p_453->g_243, (safe_lshift_func_int16_t_s_u(l_395.y, ((p_453->g_409 = (((*l_406) &= l_346.x) , l_407[2][1][0])) != &l_408))))))) , 0xE100CF8CL)))), FAKE_DIVERGE(p_453->global_1_offset, get_global_id(1), 10))), 0x4DF7L)) != l_411)) , p_453->g_120[0])), 0x2389F4B7CE09D906L, (-1L), 4L, (-2L), 0x404ED11083BA983BL, 0x3BCAA90B541A9235L, 0L)), p_453->g_36, 2L, l_395.x, (-1L), (-9L), 0x4EEE5AF9BEAD8993L)).s6 < l_346.w)) , 5UL) <= 0xB5L), l_345)));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_453->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((*p_453->g_41) == l_416[2][1][2]) <= ((*l_392) = p_453->g_341)), (safe_rshift_func_uint8_t_u_s((l_419 != l_420), 6)))), 10))][(safe_mod_func_uint32_t_u_u(p_453->tid, 40))]));
        }
        (*p_453->g_41) = (((((l_436 = ((safe_sub_func_int32_t_s_s((*p_453->g_42), (((safe_mul_func_int16_t_s_s((**p_453->g_138), ((((p_453->g_121 = (((VECTOR(int8_t, 2))(l_425.xw)).lo || (-7L))) == ((VECTOR(uint8_t, 4))(p_453->g_427.s882f)).x) , l_428) && ((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_429.s83)))).even , &l_18) == &p_453->g_201) ^ ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL)), 5UL, 18446744073709551615UL)).y) >= (((((*l_434) = ((((*p_453->g_387) = (*p_453->g_387)) == &p_453->g_236) >= (safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u(6UL, (*p_453->g_116))), p_453->g_427.s5)))) > p_453->g_435[1]) , &p_453->g_42) == (void*)0))))) & 0x49L) > (*p_453->g_116)))) , (void*)0)) != (void*)0) == p_453->g_35[2][0]) , p_453->g_280.s6) , (void*)0);
    }
    else
    { /* block id: 210 */
        int8_t *l_441 = &p_453->g_121;
        int32_t l_445[4];
        int8_t *l_447 = &p_453->g_448;
        int64_t *l_452[7];
        int i;
        for (i = 0; i < 4; i++)
            l_445[i] = 0x020B55ECL;
        for (i = 0; i < 7; i++)
            l_452[i] = (void*)0;
        l_438 = ((*l_436) = (void*)0);
        p_453->g_400.y ^= (safe_lshift_func_uint8_t_u_u(p_453->g_56.sf, (((*l_441) |= 0x6EL) > (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(p_453->g_444.yxzyyxzw)).odd, (int8_t)(1UL & 5UL), (int8_t)(((((((*l_447) = (l_445[1] | ((VECTOR(uint16_t, 2))(l_446.yy)).lo)) > (l_449 != l_449)) != 0x3B31209D42BEFAA9L) || (((safe_div_func_uint32_t_u_u(0UL, (**p_453->g_41))) <= p_453->g_278.y) != p_453->g_120[0])) , l_452[5]) != (void*)0)))).odd, ((VECTOR(int8_t, 2))(0x6BL)), ((VECTOR(int8_t, 2))((-8L)))))), 1L, 0x29L)))).x, 5)))));
        return l_445[1];
    }
    return p_453->g_180;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_11(uint32_t  p_12, struct S0  p_13, int64_t  p_14, uint32_t  p_15, struct S1 * p_453)
{ /* block id: 109 */
    uint16_t l_340 = 1UL;
    if ((atomic_inc(&p_453->g_atomic_input[16 * get_linear_group_id() + 6]) == 6))
    { /* block id: 111 */
        int64_t l_298 = (-10L);
        uint16_t l_337 = 3UL;
        if (l_298)
        { /* block id: 112 */
            int32_t l_300 = 0x254B1154L;
            int32_t *l_299 = &l_300;
            int32_t *l_301 = &l_300;
            int32_t *l_302 = (void*)0;
            int32_t *l_303 = &l_300;
            int32_t *l_304[4][6] = {{&l_300,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,&l_300,&l_300,&l_300},{&l_300,&l_300,&l_300,&l_300,&l_300,&l_300}};
            int i, j;
            l_301 = l_299;
            l_304[3][4] = (l_303 = l_302);
        }
        else
        { /* block id: 116 */
            struct S0 l_305 = {1L};
            struct S0 l_306 = {-5L};
            l_306 = l_305;
            for (l_306.f0 = 0; (l_306.f0 < (-14)); l_306.f0 = safe_sub_func_int32_t_s_s(l_306.f0, 9))
            { /* block id: 120 */
                int32_t l_310 = 0x6BCAEF4BL;
                int32_t *l_309[5];
                int64_t l_311 = (-1L);
                int16_t l_329 = 0x6039L;
                int32_t l_330 = 0x1F38E30CL;
                int32_t l_331 = 5L;
                uint32_t l_332 = 0x007313F5L;
                int16_t l_333 = 0x619BL;
                int i;
                for (i = 0; i < 5; i++)
                    l_309[i] = &l_310;
                l_309[4] = (GROUP_DIVERGE(0, 1) , (void*)0);
                if (l_311)
                { /* block id: 122 */
                    int32_t l_312 = 6L;
                    int16_t l_321[6][7] = {{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L},{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L},{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L},{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L},{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L},{7L,0L,0x088BL,0x58C5L,0x088BL,0L,7L}};
                    int i, j;
                    for (l_312 = 0; (l_312 >= 19); l_312 = safe_add_func_uint32_t_u_u(l_312, 6))
                    { /* block id: 125 */
                        int32_t l_316 = 0x3933A354L;
                        int32_t *l_315 = &l_316;
                        l_309[4] = (l_315 = l_315);
                    }
                    for (l_312 = 0; (l_312 <= (-1)); l_312 = safe_sub_func_uint16_t_u_u(l_312, 1))
                    { /* block id: 131 */
                        int64_t l_319 = (-7L);
                        uint16_t l_320 = 6UL;
                        l_320 &= l_319;
                    }
                    l_312 &= l_321[0][0];
                }
                else
                { /* block id: 135 */
                    int32_t l_322[2][5][9] = {{{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL}},{{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL},{0L,(-1L),(-1L),(-1L),(-1L),0L,1L,0x6616D0CBL,0x5A924A7AL}}};
                    int i, j, k;
                    for (l_322[1][1][1] = 0; (l_322[1][1][1] == (-28)); l_322[1][1][1] = safe_sub_func_int64_t_s_s(l_322[1][1][1], 4))
                    { /* block id: 138 */
                        uint16_t l_325 = 4UL;
                        int16_t l_326 = 0x3AE1L;
                        uint32_t l_327 = 1UL;
                        uint8_t l_328 = 248UL;
                        l_328 = (l_327 = (l_326 = l_325));
                    }
                }
                l_331 = (l_330 |= l_329);
                l_333 |= l_332;
            }
            for (l_306.f0 = 22; (l_306.f0 == (-18)); l_306.f0 = safe_sub_func_uint8_t_u_u(l_306.f0, 7))
            { /* block id: 150 */
                uint32_t l_336 = 0xD88AE048L;
                l_336 |= ((VECTOR(int32_t, 2))(0L, 0x12C8465EL)).hi;
            }
        }
        --l_337;
        unsigned int result = 0;
        result += l_298;
        result += l_337;
        atomic_add(&p_453->g_special_values[16 * get_linear_group_id() + 6], result);
    }
    else
    { /* block id: 155 */
        (1 + 1);
    }
    return l_340;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_37 p_453->g_41 p_453->g_7
 * writes: p_453->g_37 p_453->g_42
 */
uint32_t  func_16(struct S0  p_17, struct S1 * p_453)
{ /* block id: 5 */
    uint8_t l_19 = 255UL;
    int32_t l_22[10];
    int32_t **l_40 = (void*)0;
    int i;
    for (i = 0; i < 10; i++)
        l_22[i] = 0x5BA1DD79L;
    (*p_453->g_41) = (l_19 , func_20((l_22[0] = 0x5514FAF14186E145L), p_453));
    return p_453->g_7.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_37
 * writes: p_453->g_37
 */
int32_t * func_20(int64_t  p_21, struct S1 * p_453)
{ /* block id: 7 */
    int32_t *l_24 = &p_453->g_25;
    int32_t *l_26 = &p_453->g_25;
    int32_t l_27 = 0x1D073D4CL;
    int32_t *l_28 = &l_27;
    int32_t *l_29 = &p_453->g_25;
    int32_t l_30 = (-1L);
    int32_t *l_31 = &l_30;
    int32_t *l_32 = &l_30;
    int32_t *l_33[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_453->g_37++;
    return &p_453->g_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_277 p_453->g_278 p_453->g_280 p_453->g_25 p_453->g_36
 * writes: p_453->g_25 p_453->g_212 p_453->g_89 p_453->g_36
 */
int16_t  func_49(int32_t * p_50, int16_t  p_51, int32_t  p_52, int32_t  p_53, int32_t  p_54, struct S1 * p_453)
{ /* block id: 100 */
    VECTOR(int32_t, 4) l_279 = (VECTOR(int32_t, 4))(0x38914F16L, (VECTOR(int32_t, 2))(0x38914F16L, 0x230C4152L), 0x230C4152L);
    int32_t *l_281 = &p_453->g_25;
    uint16_t *l_284 = &p_453->g_212;
    int32_t **l_285 = &p_453->g_89;
    int32_t *l_286 = &p_453->g_36;
    int32_t *l_287 = (void*)0;
    int32_t *l_288 = (void*)0;
    int32_t *l_289 = (void*)0;
    int32_t *l_290 = (void*)0;
    int32_t *l_291 = &p_453->g_275;
    uint8_t l_292[4][1][1] = {{{0UL}},{{0UL}},{{0UL}},{{0UL}}};
    int8_t l_297 = 0x75L;
    int i, j, k;
    (*l_281) |= ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_453->g_277.xyyyyxxy)).s01)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(p_453->g_278.yyyxxxyxyxyxxyyx)).s5fec, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_279.yx)).xxyxyyxyyyxyyyxx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x18083A38L, (-3L))).xyyy, (int32_t)(~((VECTOR(int32_t, 4))(p_453->g_280.s8509)).y)))).wxzyxyxwzwwwxwxw))).s80d1))).even))).hi;
    (*l_286) |= ((~((*l_284) = (!(*l_281)))) && (&p_453->g_243 == ((*l_285) = &p_54)));
    --l_292[0][0][0];
    p_52 |= ((*l_281) = ((safe_rshift_func_uint16_t_u_u(0x3E89L, FAKE_DIVERGE(p_453->global_0_offset, get_global_id(0), 10))) <= l_297));
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_66 p_453->g_48 p_453->g_25 p_453->g_89 p_453->g_35 p_453->g_comm_values p_453->g_56 p_453->g_110 p_453->g_122 p_453->g_36 p_453->g_121 p_453->g_58 p_453->g_138 p_453->g_144 p_453->g_116 p_453->g_120 p_453->l_comm_values p_453->g_163 p_453->g_180 p_453->g_201 p_453->g_212 p_453->g_221 p_453->g_232 p_453->g_242 p_453->g_275
 * writes: p_453->g_66 p_453->g_25 p_453->g_89 p_453->g_115 p_453->g_122 p_453->g_121 p_453->g_58 p_453->g_120 p_453->g_138 p_453->g_163 p_453->g_180 p_453->g_201 p_453->g_212 p_453->g_232 p_453->g_236 p_453->g_242 p_453->g_243 p_453->g_274
 */
int64_t  func_61(uint32_t  p_62, uint64_t  p_63, uint32_t  p_64, struct S1 * p_453)
{ /* block id: 13 */
    int32_t *l_65[5][4][3] = {{{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36}},{{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36},{&p_453->g_36,&p_453->g_36,&p_453->g_36}}};
    struct S0 *l_202[3];
    uint16_t *l_211[4][3] = {{&p_453->g_212,(void*)0,&p_453->g_212},{&p_453->g_212,(void*)0,&p_453->g_212},{&p_453->g_212,(void*)0,&p_453->g_212},{&p_453->g_212,(void*)0,&p_453->g_212}};
    VECTOR(uint16_t, 4) l_213 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
    VECTOR(uint16_t, 8) l_214 = (VECTOR(uint16_t, 8))(0x92C2L, (VECTOR(uint16_t, 4))(0x92C2L, (VECTOR(uint16_t, 2))(0x92C2L, 0xD5B6L), 0xD5B6L), 0xD5B6L, 0x92C2L, 0xD5B6L);
    VECTOR(uint8_t, 2) l_215 = (VECTOR(uint8_t, 2))(0x59L, 255UL);
    VECTOR(uint8_t, 2) l_216 = (VECTOR(uint8_t, 2))(0x66L, 253UL);
    VECTOR(int16_t, 2) l_222 = (VECTOR(int16_t, 2))(1L, 0x4E24L);
    VECTOR(int16_t, 8) l_223 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2470L), 0x2470L), 0x2470L, 0L, 0x2470L);
    VECTOR(uint16_t, 16) l_230 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65528UL), 65528UL), 65528UL, 65528UL, 65528UL, (VECTOR(uint16_t, 2))(65528UL, 65528UL), (VECTOR(uint16_t, 2))(65528UL, 65528UL), 65528UL, 65528UL, 65528UL, 65528UL);
    int32_t l_231 = 5L;
    uint64_t *l_235 = &p_453->g_236;
    int32_t l_241 = 0x4F810623L;
    struct S0 l_262 = {0x3CF075EFL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_202[i] = (void*)0;
    ++p_453->g_66;
    p_453->g_25 &= p_453->g_48.sd;
    p_453->g_201 = func_69((FAKE_DIVERGE(p_453->group_1_offset, get_group_id(1), 10) , (0x21L && 0x2AL)), p_62, func_74(&p_453->g_58, p_453), l_65[1][3][2], p_453);
    if (((~(p_453->g_180 = (safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((p_453->g_212 &= ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(1UL, 0x43AFL, 65527UL, 0x3202L)).lo)))).lo) > p_63) || (0x35L < ((VECTOR(int8_t, 2))(1L, 3L)).odd)), (~((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_213.wxzywxwx)), ((VECTOR(uint16_t, 2))(l_214.s20)), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(l_215.xyyx)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(l_216.xy)).yyxyyyxx, (uint8_t)(safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_453->local_1_offset, get_local_id(1), 10), 3)), (uint8_t)(safe_lshift_func_int8_t_s_u(0L, p_63))))).s4566426303634674)).s358f))), ((VECTOR(uint8_t, 16))(p_453->g_221.xyyxxxyyxxxxxxxx)).s7d6e))), 0x3A3AL, 0x4A4CL)).s6b, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(l_222.yx)).yxyy, ((VECTOR(int16_t, 8))(l_223.s50450604)).odd))).even))).odd))), (p_453->g_121 ^ (((!(safe_add_func_int64_t_s_s((((safe_div_func_int16_t_s_s((((*l_235) = (safe_mod_func_uint16_t_u_u((p_453->g_201 , ((VECTOR(uint16_t, 2))(l_230.scd)).even), (--p_453->g_232)))) , p_453->g_221.x), (safe_rshift_func_uint16_t_u_s((p_453->g_243 = (p_453->g_242 &= (((VECTOR(int16_t, 4))(0x5D88L, (-1L), 0x22ABL, 1L)).z < ((safe_add_func_uint64_t_u_u(l_241, 0L)) <= p_64)))), p_453->g_110.x)))) <= p_453->g_comm_values[p_453->tid]) ^ p_64), 1L))) && 0x1AL) > p_64)))), p_63)))) == p_62))
    { /* block id: 88 */
        VECTOR(int8_t, 4) l_251 = (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, (-7L)), (-7L));
        VECTOR(uint8_t, 8) l_252 = (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0UL), 0UL), 0UL, 0xE7L, 0UL);
        int i;
        for (p_453->g_121 = (-1); (p_453->g_121 != 16); p_453->g_121++)
        { /* block id: 91 */
            uint8_t l_248 = 1UL;
            VECTOR(uint64_t, 4) l_253 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF03E51691744EEF8L), 0xF03E51691744EEF8L);
            uint32_t *l_273 = &p_453->g_274;
            uint16_t l_276 = 0x5655L;
            int i;
            l_276 |= ((((VECTOR(uint64_t, 4))(((safe_add_func_int16_t_s_s(l_248, ((safe_lshift_func_uint16_t_u_u(p_453->g_242, p_64)) , ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(l_251.zyyxxwxz)), ((VECTOR(uint8_t, 8))(l_252.s54174764))))).s3))) ^ p_453->g_35[2][0]), ((VECTOR(uint64_t, 2))(l_253.wx)), 0UL)).x >= ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((*l_273) = (l_262 , ((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(p_63, (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((((p_64 , (((*p_453->g_116) = (safe_sub_func_uint16_t_u_u(l_251.x, ((void*)0 != &p_453->g_116)))) > l_248)) || p_62) <= p_63), p_63)), l_252.s7)))) < 6UL), 0x18L)) < 0UL))) , 0xF7L) && 0x19L), p_63)), l_248)), l_248)), FAKE_DIVERGE(p_453->local_1_offset, get_local_id(1), 10))) , p_453->g_275)) | p_64);
        }
    }
    else
    { /* block id: 96 */
        p_453->g_201 = p_453->g_201;
    }
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_89 p_453->g_25 p_453->g_58 p_453->g_36 p_453->g_163 p_453->g_180 p_453->g_201
 * writes: p_453->g_89 p_453->g_163 p_453->g_180
 */
struct S0  func_69(uint64_t  p_70, uint64_t  p_71, uint32_t * p_72, int32_t * p_73, struct S1 * p_453)
{ /* block id: 60 */
    VECTOR(int32_t, 2) l_166 = (VECTOR(int32_t, 2))((-9L), 0x190030C7L);
    struct S0 l_187 = {0x7F3A24CFL};
    int32_t *l_196 = &p_453->g_36;
    int i;
    if (((VECTOR(int32_t, 8))(l_166.xxxyyyyx)).s7)
    { /* block id: 61 */
        int32_t **l_167 = &p_453->g_89;
        int32_t *l_168 = &p_453->g_25;
        int32_t *l_169 = &p_453->g_25;
        int32_t *l_170 = (void*)0;
        int32_t l_171 = (-1L);
        int32_t *l_172 = (void*)0;
        int32_t *l_173 = (void*)0;
        int32_t *l_174 = &p_453->g_25;
        int32_t *l_175 = &p_453->g_25;
        int32_t *l_176 = &l_171;
        int32_t *l_177 = &l_171;
        int32_t *l_178 = &l_171;
        int32_t *l_179[8][10][3] = {{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}},{{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25},{&l_171,&l_171,&p_453->g_25}}};
        uint8_t l_181[1][8];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_181[i][j] = 251UL;
        }
        (*l_167) = p_73;
        --l_181[0][1];
    }
    else
    { /* block id: 64 */
        int32_t *l_184 = (void*)0;
        int32_t *l_185 = (void*)0;
        int32_t l_186 = 0x647970EFL;
        struct S0 *l_188 = (void*)0;
        struct S0 *l_189 = &l_187;
        atomic_sub(&p_453->l_atomic_reduction[0], l_166.x);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_453->v_collective += p_453->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_186 |= (*p_453->g_89);
        (*l_189) = l_187;
    }
    for (p_453->g_163 = 26; (p_453->g_163 == (-6)); p_453->g_163 = safe_sub_func_uint16_t_u_u(p_453->g_163, 9))
    { /* block id: 71 */
        struct S0 l_194[9][3] = {{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}},{{0x6BE72892L},{0x6BE72892L},{6L}}};
        int32_t **l_197[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_198 = 7UL;
        int i, j;
        for (p_453->g_180 = 0; (p_453->g_180 > (-4)); p_453->g_180--)
        { /* block id: 74 */
            struct S0 *l_195 = (void*)0;
            l_187 = l_194[4][1];
        }
        p_453->g_89 = l_196;
        l_198++;
    }
    return p_453->g_201;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_89 p_453->g_35 p_453->g_comm_values p_453->g_48 p_453->g_56 p_453->g_110 p_453->g_122 p_453->g_36 p_453->g_121 p_453->g_58 p_453->g_138 p_453->g_144 p_453->g_25 p_453->g_116 p_453->g_66 p_453->g_120 p_453->l_comm_values p_453->g_163
 * writes: p_453->g_89 p_453->g_115 p_453->g_122 p_453->g_121 p_453->g_58 p_453->g_120 p_453->g_138 p_453->g_66 p_453->g_163
 */
uint32_t * func_74(uint32_t * p_75, struct S1 * p_453)
{ /* block id: 16 */
    int8_t l_87 = 4L;
    struct S0 l_88 = {0L};
    VECTOR(int32_t, 8) l_125 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x30EBA2CBL), 0x30EBA2CBL), 0x30EBA2CBL, 5L, 0x30EBA2CBL);
    VECTOR(uint8_t, 2) l_151 = (VECTOR(uint8_t, 2))(0UL, 0UL);
    VECTOR(uint8_t, 2) l_152 = (VECTOR(uint8_t, 2))(0x69L, 255UL);
    uint32_t ***l_157 = &p_453->g_115[8];
    uint64_t l_162[5] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
    int32_t l_164 = 0x25E883FBL;
    uint32_t *l_165 = &p_453->g_66;
    int i;
    l_125.s0 ^= (safe_unary_minus_func_int32_t_s(func_77(func_82(l_87, (l_88 , (&p_453->g_25 != ((l_87 == l_88.f0) , p_75))), l_88.f0, l_88.f0, p_453), p_453->g_35[1][0], p_453->g_comm_values[p_453->tid], l_88.f0, p_453)));
    for (p_453->g_121 = 0; (p_453->g_121 > (-10)); p_453->g_121 = safe_sub_func_uint32_t_u_u(p_453->g_121, 6))
    { /* block id: 37 */
        int16_t *l_135 = &p_453->g_120[0];
        int32_t l_136 = 1L;
        volatile int16_t * volatile **l_141 = &p_453->g_138;
        int32_t *l_160 = (void*)0;
        int32_t *l_161[6][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (p_453->g_58 = 0; (p_453->g_58 != 6); ++p_453->g_58)
        { /* block id: 40 */
            int32_t **l_130 = &p_453->g_89;
            int32_t *l_131 = (void*)0;
            (*l_130) = p_75;
            if ((*p_453->g_89))
                continue;
            l_125.s7 &= ((VECTOR(int32_t, 2))(0x6F2926A7L, 0L)).hi;
        }
        if ((safe_mul_func_int16_t_s_s(0x5A64L, ((*l_135) = (p_453->g_48.s8 , ((VECTOR(int16_t, 2))(p_453->g_134.s5e)).hi)))))
        { /* block id: 46 */
            if (l_136)
                break;
        }
        else
        { /* block id: 48 */
            int32_t **l_137 = &p_453->g_89;
            (*l_137) = &p_453->g_25;
            if (l_136)
                break;
            if (l_88.f0)
                break;
        }
        (*l_141) = p_453->g_138;
        l_164 &= (p_453->g_163 &= (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(p_453->g_144.s1503572621545043)).even, ((VECTOR(uint8_t, 4))((safe_add_func_uint16_t_u_u(l_136, (safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_151.yxyx)).lo, ((VECTOR(uint8_t, 16))(l_152.xyyyxyyyyyyxxxxx)).s2e, ((VECTOR(uint8_t, 8))((safe_div_func_int64_t_s_s(((4294967295UL || l_136) <= GROUP_DIVERGE(0, 1)), ((p_453->g_25 , (((1L >= 255UL) >= (safe_sub_func_uint64_t_u_u((l_157 == (void*)0), ((((l_162[3] = ((((*p_453->g_116) ^= ((safe_rshift_func_uint8_t_u_s(p_453->g_36, l_151.y)) >= 0x50L)) && l_136) > 0x558E2862L)) | l_152.y) || p_453->g_120[5]) < 0x6C5CL)))) != l_152.x)) , l_162[3]))), ((VECTOR(uint8_t, 4))(246UL)), ((VECTOR(uint8_t, 2))(0UL)), 0x9AL)).s47))).yxxx, ((VECTOR(uint8_t, 4))(0UL)), ((VECTOR(uint8_t, 4))(1UL))))).z, 0x46L)) > (*p_75)) , 0x4DL), 3)))), ((VECTOR(uint8_t, 2))(252UL)), 0x1DL)).xxzxzxww, ((VECTOR(uint8_t, 8))(0xD9L))))).s32)), 9UL, 255UL)).x, p_453->l_comm_values[(safe_mod_func_uint32_t_u_u(p_453->tid, 40))])) == l_125.s5) , (*p_453->g_89)));
    }
    return l_165;
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_48 p_453->g_56 p_453->g_110 p_453->g_35 p_453->g_122 p_453->g_89 p_453->g_36
 * writes: p_453->g_115 p_453->g_89 p_453->g_122
 */
int32_t  func_77(int64_t  p_78, uint16_t  p_79, uint8_t  p_80, uint64_t  p_81, struct S1 * p_453)
{ /* block id: 26 */
    VECTOR(int16_t, 16) l_99 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 8L), 8L), 8L, 2L, 8L, (VECTOR(int16_t, 2))(2L, 8L), (VECTOR(int16_t, 2))(2L, 8L), 2L, 8L, 2L, 8L);
    VECTOR(uint16_t, 16) l_100 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    uint32_t *l_113[7] = {&p_453->g_66,&p_453->g_66,&p_453->g_66,&p_453->g_66,&p_453->g_66,&p_453->g_66,&p_453->g_66};
    uint32_t ***l_114 = (void*)0;
    int32_t *l_117 = &p_453->g_25;
    int32_t *l_118 = &p_453->g_25;
    int32_t *l_119[7][9] = {{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25},{&p_453->g_25,&p_453->g_25,&p_453->g_25,(void*)0,&p_453->g_25,&p_453->g_25,&p_453->g_36,&p_453->g_25,&p_453->g_25}};
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_453->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((p_81 < (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(0L, p_78, (-8L), ((VECTOR(int16_t, 2))(l_99.s49)), (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(l_100.s16ec0ba0)).s5371012136771566, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0xFCA7L, 65534UL, 1UL, 0xAB31L, p_79, 0xE654L, 0xFF18L, 0xA296L)).s64)).xxxxxxxyyxxyyxxx))).sfd8b, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(((0x055C5D77L > (safe_lshift_func_uint8_t_u_u((p_453->g_48.sd , (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((safe_lshift_func_int16_t_s_u((0x6EL <= p_453->g_56.s9), 6)), ((VECTOR(int64_t, 2))((-10L), 0L)), (-3L))).wxxyyzyx)).s74)), 1L, 0x7B9873F28D20E956L)).ywwyyxyxyywzxzwy, ((VECTOR(int64_t, 16))(p_453->g_110.xxyyxyyxyyxyyxyx)), ((VECTOR(int64_t, 2))(0x7DF764E3E385C008L, 8L)).yxyyyxyxyxxyxyxx))).sc, ((safe_mod_func_uint32_t_u_u((1UL | 0L), 4294967287UL)) && l_100.s6)))), 2))) ^ p_80))) >= p_78), p_81)) | l_100.s7), ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0xC0784580L)), ((VECTOR(uint32_t, 4))(4294967295UL)), l_99.s3, 4294967288UL, 4294967291UL)))).s5fa1))).even)).odd ^ 0x504AE8C7L), (-8L), 0x001EL)).s7, p_453->g_35[2][0]))) , (void*)0) == l_113[4]), l_100.sd)), 10))][(safe_mod_func_uint32_t_u_u(p_453->tid, 40))]));
    p_453->g_115[8] = &l_113[4];
    p_453->g_89 = &p_453->g_36;
    p_453->g_122--;
    return (*p_453->g_89);
}


/* ------------------------------------------ */
/* 
 * reads : p_453->g_89
 * writes: p_453->g_89
 */
int64_t  func_82(uint16_t  p_83, uint32_t  p_84, uint32_t  p_85, int16_t  p_86, struct S1 * p_453)
{ /* block id: 17 */
    int32_t **l_90 = (void*)0;
    int32_t **l_91 = &p_453->g_89;
    (*l_91) = p_453->g_89;
    if ((atomic_inc(&p_453->l_atomic_input[12]) == 0))
    { /* block id: 20 */
        uint32_t l_92 = 4294967289UL;
        l_92--;
        unsigned int result = 0;
        result += l_92;
        atomic_add(&p_453->l_special_values[12], result);
    }
    else
    { /* block id: 22 */
        (1 + 1);
    }
    return p_84;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
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
    __local int64_t l_comm_values[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_comm_values[i] = 1;
    struct S1 c_454;
    struct S1* p_453 = &c_454;
    struct S1 c_455 = {
        (VECTOR(int32_t, 2))((-9L), (-1L)), // p_453->g_6
        (VECTOR(int16_t, 2))(0x7535L, (-8L)), // p_453->g_7
        0x21EFE0C2L, // p_453->g_23
        0x0C63B882L, // p_453->g_25
        0x6AE2AD21DD8E181FL, // p_453->g_34
        {{0x7DE2E510L},{0x7DE2E510L},{0x7DE2E510L},{0x7DE2E510L},{0x7DE2E510L},{0x7DE2E510L}}, // p_453->g_35
        0x1949389DL, // p_453->g_36
        0x0CL, // p_453->g_37
        &p_453->g_36, // p_453->g_42
        &p_453->g_42, // p_453->g_41
        (VECTOR(int16_t, 16))(0x4094L, (VECTOR(int16_t, 4))(0x4094L, (VECTOR(int16_t, 2))(0x4094L, (-1L)), (-1L)), (-1L), 0x4094L, (-1L), (VECTOR(int16_t, 2))(0x4094L, (-1L)), (VECTOR(int16_t, 2))(0x4094L, (-1L)), 0x4094L, (-1L), 0x4094L, (-1L)), // p_453->g_48
        (VECTOR(uint32_t, 16))(0xF8C21E6DL, (VECTOR(uint32_t, 4))(0xF8C21E6DL, (VECTOR(uint32_t, 2))(0xF8C21E6DL, 1UL), 1UL), 1UL, 0xF8C21E6DL, 1UL, (VECTOR(uint32_t, 2))(0xF8C21E6DL, 1UL), (VECTOR(uint32_t, 2))(0xF8C21E6DL, 1UL), 0xF8C21E6DL, 1UL, 0xF8C21E6DL, 1UL), // p_453->g_56
        0UL, // p_453->g_58
        5UL, // p_453->g_66
        &p_453->g_25, // p_453->g_89
        (VECTOR(int64_t, 2))(1L, 0x6AAE9426A84ADD17L), // p_453->g_110
        &p_453->g_66, // p_453->g_116
        {&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116,&p_453->g_116}, // p_453->g_115
        {0x3459L,(-7L),0x3459L,0x3459L,(-7L),0x3459L,0x3459L,(-7L),0x3459L,0x3459L}, // p_453->g_120
        0x78L, // p_453->g_121
        0xC4L, // p_453->g_122
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_453->g_134
        0x7500L, // p_453->g_140
        {&p_453->g_140,&p_453->g_140,&p_453->g_140,&p_453->g_140}, // p_453->g_139
        &p_453->g_139[3], // p_453->g_138
        (VECTOR(uint8_t, 8))(0xB1L, (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 4UL), 4UL), 4UL, 0xB1L, 4UL), // p_453->g_144
        (-1L), // p_453->g_163
        0x78F648F5L, // p_453->g_180
        {0x02D07CDAL}, // p_453->g_201
        5UL, // p_453->g_212
        (VECTOR(uint8_t, 2))(0x00L, 1UL), // p_453->g_221
        0xFAFCL, // p_453->g_232
        0x107555DCA3CA688EL, // p_453->g_236
        0x09B3L, // p_453->g_242
        0x225EC3FAL, // p_453->g_243
        4294967295UL, // p_453->g_274
        1L, // p_453->g_275
        (VECTOR(int32_t, 2))(1L, 0L), // p_453->g_277
        (VECTOR(int32_t, 2))((-5L), 0x6EC54CD7L), // p_453->g_278
        (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int32_t, 2))(2L, 1L), (VECTOR(int32_t, 2))(2L, 1L), 2L, 1L, 2L, 1L), // p_453->g_280
        5UL, // p_453->g_341
        &p_453->g_236, // p_453->g_388
        &p_453->g_388, // p_453->g_387
        (VECTOR(uint64_t, 16))(0x748EF549C92E23F0L, (VECTOR(uint64_t, 4))(0x748EF549C92E23F0L, (VECTOR(uint64_t, 2))(0x748EF549C92E23F0L, 5UL), 5UL), 5UL, 0x748EF549C92E23F0L, 5UL, (VECTOR(uint64_t, 2))(0x748EF549C92E23F0L, 5UL), (VECTOR(uint64_t, 2))(0x748EF549C92E23F0L, 5UL), 0x748EF549C92E23F0L, 5UL, 0x748EF549C92E23F0L, 5UL), // p_453->g_394
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), // p_453->g_400
        &p_453->g_120[0], // p_453->g_410
        &p_453->g_410, // p_453->g_409
        (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x53L), 0x53L), 0x53L, 253UL, 0x53L, (VECTOR(uint8_t, 2))(253UL, 0x53L), (VECTOR(uint8_t, 2))(253UL, 0x53L), 253UL, 0x53L, 253UL, 0x53L), // p_453->g_427
        {18446744073709551615UL,18446744073709551615UL}, // p_453->g_435
        (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x1BL), 0x1BL), // p_453->g_444
        1L, // p_453->g_448
        0, // p_453->v_collective
        sequence_input[get_global_id(0)], // p_453->global_0_offset
        sequence_input[get_global_id(1)], // p_453->global_1_offset
        sequence_input[get_global_id(2)], // p_453->global_2_offset
        sequence_input[get_local_id(0)], // p_453->local_0_offset
        sequence_input[get_local_id(1)], // p_453->local_1_offset
        sequence_input[get_local_id(2)], // p_453->local_2_offset
        sequence_input[get_group_id(0)], // p_453->group_0_offset
        sequence_input[get_group_id(1)], // p_453->group_1_offset
        sequence_input[get_group_id(2)], // p_453->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[0][get_linear_local_id()])), // p_453->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_454 = c_455;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_453);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_453->g_6.x, "p_453->g_6.x", print_hash_value);
    transparent_crc(p_453->g_6.y, "p_453->g_6.y", print_hash_value);
    transparent_crc(p_453->g_7.x, "p_453->g_7.x", print_hash_value);
    transparent_crc(p_453->g_7.y, "p_453->g_7.y", print_hash_value);
    transparent_crc(p_453->g_23, "p_453->g_23", print_hash_value);
    transparent_crc(p_453->g_25, "p_453->g_25", print_hash_value);
    transparent_crc(p_453->g_34, "p_453->g_34", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_453->g_35[i][j], "p_453->g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_453->g_36, "p_453->g_36", print_hash_value);
    transparent_crc(p_453->g_37, "p_453->g_37", print_hash_value);
    transparent_crc(p_453->g_48.s0, "p_453->g_48.s0", print_hash_value);
    transparent_crc(p_453->g_48.s1, "p_453->g_48.s1", print_hash_value);
    transparent_crc(p_453->g_48.s2, "p_453->g_48.s2", print_hash_value);
    transparent_crc(p_453->g_48.s3, "p_453->g_48.s3", print_hash_value);
    transparent_crc(p_453->g_48.s4, "p_453->g_48.s4", print_hash_value);
    transparent_crc(p_453->g_48.s5, "p_453->g_48.s5", print_hash_value);
    transparent_crc(p_453->g_48.s6, "p_453->g_48.s6", print_hash_value);
    transparent_crc(p_453->g_48.s7, "p_453->g_48.s7", print_hash_value);
    transparent_crc(p_453->g_48.s8, "p_453->g_48.s8", print_hash_value);
    transparent_crc(p_453->g_48.s9, "p_453->g_48.s9", print_hash_value);
    transparent_crc(p_453->g_48.sa, "p_453->g_48.sa", print_hash_value);
    transparent_crc(p_453->g_48.sb, "p_453->g_48.sb", print_hash_value);
    transparent_crc(p_453->g_48.sc, "p_453->g_48.sc", print_hash_value);
    transparent_crc(p_453->g_48.sd, "p_453->g_48.sd", print_hash_value);
    transparent_crc(p_453->g_48.se, "p_453->g_48.se", print_hash_value);
    transparent_crc(p_453->g_48.sf, "p_453->g_48.sf", print_hash_value);
    transparent_crc(p_453->g_56.s0, "p_453->g_56.s0", print_hash_value);
    transparent_crc(p_453->g_56.s1, "p_453->g_56.s1", print_hash_value);
    transparent_crc(p_453->g_56.s2, "p_453->g_56.s2", print_hash_value);
    transparent_crc(p_453->g_56.s3, "p_453->g_56.s3", print_hash_value);
    transparent_crc(p_453->g_56.s4, "p_453->g_56.s4", print_hash_value);
    transparent_crc(p_453->g_56.s5, "p_453->g_56.s5", print_hash_value);
    transparent_crc(p_453->g_56.s6, "p_453->g_56.s6", print_hash_value);
    transparent_crc(p_453->g_56.s7, "p_453->g_56.s7", print_hash_value);
    transparent_crc(p_453->g_56.s8, "p_453->g_56.s8", print_hash_value);
    transparent_crc(p_453->g_56.s9, "p_453->g_56.s9", print_hash_value);
    transparent_crc(p_453->g_56.sa, "p_453->g_56.sa", print_hash_value);
    transparent_crc(p_453->g_56.sb, "p_453->g_56.sb", print_hash_value);
    transparent_crc(p_453->g_56.sc, "p_453->g_56.sc", print_hash_value);
    transparent_crc(p_453->g_56.sd, "p_453->g_56.sd", print_hash_value);
    transparent_crc(p_453->g_56.se, "p_453->g_56.se", print_hash_value);
    transparent_crc(p_453->g_56.sf, "p_453->g_56.sf", print_hash_value);
    transparent_crc(p_453->g_58, "p_453->g_58", print_hash_value);
    transparent_crc(p_453->g_66, "p_453->g_66", print_hash_value);
    transparent_crc(p_453->g_110.x, "p_453->g_110.x", print_hash_value);
    transparent_crc(p_453->g_110.y, "p_453->g_110.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_453->g_120[i], "p_453->g_120[i]", print_hash_value);

    }
    transparent_crc(p_453->g_121, "p_453->g_121", print_hash_value);
    transparent_crc(p_453->g_122, "p_453->g_122", print_hash_value);
    transparent_crc(p_453->g_134.s0, "p_453->g_134.s0", print_hash_value);
    transparent_crc(p_453->g_134.s1, "p_453->g_134.s1", print_hash_value);
    transparent_crc(p_453->g_134.s2, "p_453->g_134.s2", print_hash_value);
    transparent_crc(p_453->g_134.s3, "p_453->g_134.s3", print_hash_value);
    transparent_crc(p_453->g_134.s4, "p_453->g_134.s4", print_hash_value);
    transparent_crc(p_453->g_134.s5, "p_453->g_134.s5", print_hash_value);
    transparent_crc(p_453->g_134.s6, "p_453->g_134.s6", print_hash_value);
    transparent_crc(p_453->g_134.s7, "p_453->g_134.s7", print_hash_value);
    transparent_crc(p_453->g_134.s8, "p_453->g_134.s8", print_hash_value);
    transparent_crc(p_453->g_134.s9, "p_453->g_134.s9", print_hash_value);
    transparent_crc(p_453->g_134.sa, "p_453->g_134.sa", print_hash_value);
    transparent_crc(p_453->g_134.sb, "p_453->g_134.sb", print_hash_value);
    transparent_crc(p_453->g_134.sc, "p_453->g_134.sc", print_hash_value);
    transparent_crc(p_453->g_134.sd, "p_453->g_134.sd", print_hash_value);
    transparent_crc(p_453->g_134.se, "p_453->g_134.se", print_hash_value);
    transparent_crc(p_453->g_134.sf, "p_453->g_134.sf", print_hash_value);
    transparent_crc(p_453->g_140, "p_453->g_140", print_hash_value);
    transparent_crc(p_453->g_144.s0, "p_453->g_144.s0", print_hash_value);
    transparent_crc(p_453->g_144.s1, "p_453->g_144.s1", print_hash_value);
    transparent_crc(p_453->g_144.s2, "p_453->g_144.s2", print_hash_value);
    transparent_crc(p_453->g_144.s3, "p_453->g_144.s3", print_hash_value);
    transparent_crc(p_453->g_144.s4, "p_453->g_144.s4", print_hash_value);
    transparent_crc(p_453->g_144.s5, "p_453->g_144.s5", print_hash_value);
    transparent_crc(p_453->g_144.s6, "p_453->g_144.s6", print_hash_value);
    transparent_crc(p_453->g_144.s7, "p_453->g_144.s7", print_hash_value);
    transparent_crc(p_453->g_163, "p_453->g_163", print_hash_value);
    transparent_crc(p_453->g_180, "p_453->g_180", print_hash_value);
    transparent_crc(p_453->g_201.f0, "p_453->g_201.f0", print_hash_value);
    transparent_crc(p_453->g_212, "p_453->g_212", print_hash_value);
    transparent_crc(p_453->g_221.x, "p_453->g_221.x", print_hash_value);
    transparent_crc(p_453->g_221.y, "p_453->g_221.y", print_hash_value);
    transparent_crc(p_453->g_232, "p_453->g_232", print_hash_value);
    transparent_crc(p_453->g_236, "p_453->g_236", print_hash_value);
    transparent_crc(p_453->g_242, "p_453->g_242", print_hash_value);
    transparent_crc(p_453->g_243, "p_453->g_243", print_hash_value);
    transparent_crc(p_453->g_274, "p_453->g_274", print_hash_value);
    transparent_crc(p_453->g_275, "p_453->g_275", print_hash_value);
    transparent_crc(p_453->g_277.x, "p_453->g_277.x", print_hash_value);
    transparent_crc(p_453->g_277.y, "p_453->g_277.y", print_hash_value);
    transparent_crc(p_453->g_278.x, "p_453->g_278.x", print_hash_value);
    transparent_crc(p_453->g_278.y, "p_453->g_278.y", print_hash_value);
    transparent_crc(p_453->g_280.s0, "p_453->g_280.s0", print_hash_value);
    transparent_crc(p_453->g_280.s1, "p_453->g_280.s1", print_hash_value);
    transparent_crc(p_453->g_280.s2, "p_453->g_280.s2", print_hash_value);
    transparent_crc(p_453->g_280.s3, "p_453->g_280.s3", print_hash_value);
    transparent_crc(p_453->g_280.s4, "p_453->g_280.s4", print_hash_value);
    transparent_crc(p_453->g_280.s5, "p_453->g_280.s5", print_hash_value);
    transparent_crc(p_453->g_280.s6, "p_453->g_280.s6", print_hash_value);
    transparent_crc(p_453->g_280.s7, "p_453->g_280.s7", print_hash_value);
    transparent_crc(p_453->g_280.s8, "p_453->g_280.s8", print_hash_value);
    transparent_crc(p_453->g_280.s9, "p_453->g_280.s9", print_hash_value);
    transparent_crc(p_453->g_280.sa, "p_453->g_280.sa", print_hash_value);
    transparent_crc(p_453->g_280.sb, "p_453->g_280.sb", print_hash_value);
    transparent_crc(p_453->g_280.sc, "p_453->g_280.sc", print_hash_value);
    transparent_crc(p_453->g_280.sd, "p_453->g_280.sd", print_hash_value);
    transparent_crc(p_453->g_280.se, "p_453->g_280.se", print_hash_value);
    transparent_crc(p_453->g_280.sf, "p_453->g_280.sf", print_hash_value);
    transparent_crc(p_453->g_341, "p_453->g_341", print_hash_value);
    transparent_crc(p_453->g_394.s0, "p_453->g_394.s0", print_hash_value);
    transparent_crc(p_453->g_394.s1, "p_453->g_394.s1", print_hash_value);
    transparent_crc(p_453->g_394.s2, "p_453->g_394.s2", print_hash_value);
    transparent_crc(p_453->g_394.s3, "p_453->g_394.s3", print_hash_value);
    transparent_crc(p_453->g_394.s4, "p_453->g_394.s4", print_hash_value);
    transparent_crc(p_453->g_394.s5, "p_453->g_394.s5", print_hash_value);
    transparent_crc(p_453->g_394.s6, "p_453->g_394.s6", print_hash_value);
    transparent_crc(p_453->g_394.s7, "p_453->g_394.s7", print_hash_value);
    transparent_crc(p_453->g_394.s8, "p_453->g_394.s8", print_hash_value);
    transparent_crc(p_453->g_394.s9, "p_453->g_394.s9", print_hash_value);
    transparent_crc(p_453->g_394.sa, "p_453->g_394.sa", print_hash_value);
    transparent_crc(p_453->g_394.sb, "p_453->g_394.sb", print_hash_value);
    transparent_crc(p_453->g_394.sc, "p_453->g_394.sc", print_hash_value);
    transparent_crc(p_453->g_394.sd, "p_453->g_394.sd", print_hash_value);
    transparent_crc(p_453->g_394.se, "p_453->g_394.se", print_hash_value);
    transparent_crc(p_453->g_394.sf, "p_453->g_394.sf", print_hash_value);
    transparent_crc(p_453->g_400.x, "p_453->g_400.x", print_hash_value);
    transparent_crc(p_453->g_400.y, "p_453->g_400.y", print_hash_value);
    transparent_crc(p_453->g_400.z, "p_453->g_400.z", print_hash_value);
    transparent_crc(p_453->g_400.w, "p_453->g_400.w", print_hash_value);
    transparent_crc(p_453->g_427.s0, "p_453->g_427.s0", print_hash_value);
    transparent_crc(p_453->g_427.s1, "p_453->g_427.s1", print_hash_value);
    transparent_crc(p_453->g_427.s2, "p_453->g_427.s2", print_hash_value);
    transparent_crc(p_453->g_427.s3, "p_453->g_427.s3", print_hash_value);
    transparent_crc(p_453->g_427.s4, "p_453->g_427.s4", print_hash_value);
    transparent_crc(p_453->g_427.s5, "p_453->g_427.s5", print_hash_value);
    transparent_crc(p_453->g_427.s6, "p_453->g_427.s6", print_hash_value);
    transparent_crc(p_453->g_427.s7, "p_453->g_427.s7", print_hash_value);
    transparent_crc(p_453->g_427.s8, "p_453->g_427.s8", print_hash_value);
    transparent_crc(p_453->g_427.s9, "p_453->g_427.s9", print_hash_value);
    transparent_crc(p_453->g_427.sa, "p_453->g_427.sa", print_hash_value);
    transparent_crc(p_453->g_427.sb, "p_453->g_427.sb", print_hash_value);
    transparent_crc(p_453->g_427.sc, "p_453->g_427.sc", print_hash_value);
    transparent_crc(p_453->g_427.sd, "p_453->g_427.sd", print_hash_value);
    transparent_crc(p_453->g_427.se, "p_453->g_427.se", print_hash_value);
    transparent_crc(p_453->g_427.sf, "p_453->g_427.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_453->g_435[i], "p_453->g_435[i]", print_hash_value);

    }
    transparent_crc(p_453->g_444.x, "p_453->g_444.x", print_hash_value);
    transparent_crc(p_453->g_444.y, "p_453->g_444.y", print_hash_value);
    transparent_crc(p_453->g_444.z, "p_453->g_444.z", print_hash_value);
    transparent_crc(p_453->g_444.w, "p_453->g_444.w", print_hash_value);
    transparent_crc(p_453->g_448, "p_453->g_448", print_hash_value);
    transparent_crc(p_453->v_collective, "p_453->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 16; i++)
            transparent_crc(p_453->g_special_values[i + 16 * get_linear_group_id()], "p_453->g_special_values[i + 16 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 16; i++)
            transparent_crc(p_453->l_special_values[i], "p_453->l_special_values[i]", print_hash_value);
    transparent_crc(p_453->l_comm_values[get_linear_local_id()], "p_453->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_453->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()], "p_453->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
