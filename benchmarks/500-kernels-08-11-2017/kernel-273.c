// --atomics 71 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 60,78,2 -l 6,13,2
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

__constant uint32_t permutations[10][156] = {
{66,113,45,7,118,109,73,154,57,75,40,39,85,133,38,55,105,14,99,110,151,92,2,86,23,31,149,11,150,140,87,64,74,24,68,123,29,44,32,36,129,72,114,145,12,155,136,94,15,26,143,56,76,81,43,125,71,135,33,108,22,120,77,53,17,100,112,10,138,9,124,63,46,6,35,101,48,127,97,59,70,142,60,65,107,141,121,122,28,30,49,88,16,4,119,148,126,115,152,18,106,13,3,153,1,58,27,37,0,78,96,69,93,79,47,21,91,83,25,52,20,131,102,147,134,104,139,51,116,132,54,89,50,5,61,34,146,98,117,62,130,103,111,80,84,42,8,90,137,128,82,41,95,19,144,67}, // permutation 0
{77,132,0,63,111,146,90,102,145,122,138,66,117,115,76,113,95,125,14,103,42,153,142,53,127,67,128,54,99,131,32,26,36,89,4,92,80,52,25,75,33,86,8,134,135,100,35,133,3,59,38,48,104,140,81,68,118,37,114,29,44,1,34,78,137,13,148,21,120,107,144,119,87,40,7,16,27,143,151,79,96,62,88,18,126,24,58,155,65,64,106,10,22,83,130,49,152,121,124,12,30,60,39,45,82,57,56,141,11,123,112,69,28,74,136,154,116,73,149,47,91,23,70,19,41,46,43,97,72,61,71,15,51,85,129,55,101,9,110,150,31,20,105,6,147,109,108,94,98,93,84,50,139,2,17,5}, // permutation 1
{135,107,130,139,121,58,60,30,91,26,36,85,17,144,115,63,141,151,87,65,92,56,59,143,70,23,21,29,124,79,150,35,86,142,100,44,153,57,31,41,24,72,77,37,120,137,136,88,38,111,125,134,16,94,62,43,47,12,127,81,95,97,25,39,50,61,80,84,89,99,22,27,104,129,5,93,10,73,19,68,152,133,116,52,96,112,90,11,76,117,82,114,54,55,98,113,51,9,13,4,74,140,118,147,145,101,49,128,53,67,71,2,28,154,66,33,48,119,14,32,131,6,123,69,110,64,15,132,34,40,7,146,122,149,126,155,18,20,148,108,0,109,83,102,3,105,75,42,138,103,46,106,78,45,8,1}, // permutation 2
{64,46,129,40,26,30,81,37,39,59,15,118,1,9,97,36,152,70,124,109,3,110,121,111,80,76,149,85,96,89,68,74,73,34,17,43,28,33,125,49,128,88,123,66,53,0,72,69,143,60,95,13,83,23,101,8,78,106,48,50,131,16,104,44,116,122,2,84,35,91,67,87,105,155,27,112,142,134,151,38,52,51,117,120,113,42,61,29,93,150,86,102,6,20,55,98,133,146,94,138,141,7,137,90,100,148,12,99,31,4,145,56,71,21,130,24,63,14,62,92,77,132,19,41,139,54,82,79,136,57,45,22,144,153,107,127,115,58,11,47,65,114,147,5,108,75,25,154,119,18,126,10,103,135,140,32}, // permutation 3
{9,98,56,8,141,125,117,64,89,93,91,5,144,105,44,94,75,40,121,108,77,67,102,101,11,88,69,10,76,4,70,140,85,116,146,120,43,82,153,33,150,23,110,152,26,18,15,47,112,118,50,30,54,65,133,97,145,53,68,139,13,45,129,143,78,81,31,1,32,36,46,51,71,155,138,87,17,92,0,151,63,49,104,79,22,39,147,142,149,148,113,38,154,20,66,7,109,42,35,14,132,80,41,83,48,55,74,12,59,2,24,37,19,100,131,27,3,6,119,57,111,28,58,90,29,127,128,86,61,52,114,99,136,84,134,115,130,62,21,96,60,95,16,73,25,72,124,137,103,122,106,107,126,123,135,34}, // permutation 4
{9,14,50,58,7,143,23,38,16,152,40,5,87,31,60,39,142,135,104,66,24,0,114,71,90,4,36,83,45,121,44,141,73,128,103,20,8,18,120,154,79,105,122,108,149,70,84,28,22,15,130,98,64,77,56,21,47,3,88,147,65,17,57,10,46,12,26,1,89,107,72,54,111,116,85,78,75,150,48,59,136,74,53,35,138,144,29,62,125,95,110,148,133,11,76,67,106,118,145,61,52,68,43,2,30,99,115,113,33,13,86,94,140,96,134,127,55,101,92,19,37,119,123,109,80,126,32,100,153,129,131,102,6,82,146,69,93,139,112,137,151,155,81,41,42,117,34,63,97,27,51,132,49,91,124,25}, // permutation 5
{22,28,106,16,54,2,75,150,142,31,42,32,131,105,144,153,111,69,4,155,61,133,21,94,57,47,65,135,17,117,50,64,40,18,89,51,44,72,27,101,43,113,139,11,110,23,122,120,80,145,146,20,136,10,74,114,107,49,77,81,138,92,100,93,109,87,59,35,67,34,98,36,70,33,123,52,103,125,3,5,68,73,102,66,95,134,71,124,129,55,86,1,58,137,147,148,38,82,118,62,108,41,39,53,112,90,48,127,37,119,0,154,76,24,115,141,96,149,63,85,152,104,130,78,91,151,121,83,29,56,14,6,126,99,25,30,46,128,13,19,45,88,7,116,8,15,60,143,79,132,84,12,97,9,140,26}, // permutation 6
{59,118,147,155,106,130,144,92,37,110,154,72,87,5,44,7,81,64,60,41,3,42,120,83,91,9,82,138,139,40,102,107,2,67,10,23,74,88,30,51,12,78,153,75,133,79,24,22,116,47,151,124,25,89,34,36,132,127,58,98,56,135,136,111,55,28,43,126,115,145,149,68,150,8,105,128,31,1,86,97,119,77,140,96,39,13,15,85,4,103,16,66,90,146,49,27,71,65,61,108,38,17,21,93,142,125,152,134,100,11,117,26,104,121,29,20,137,19,94,73,53,57,32,50,54,6,113,70,101,123,52,45,143,112,99,80,148,131,0,109,35,46,141,63,62,84,95,76,114,18,122,14,48,69,33,129}, // permutation 7
{52,64,107,137,85,110,70,129,17,132,131,3,101,6,13,43,21,138,91,125,128,139,51,109,1,145,140,30,147,20,37,80,53,15,50,89,86,34,5,154,38,23,59,26,149,83,32,66,126,92,36,73,11,135,62,0,46,35,102,77,61,122,90,16,55,108,2,103,19,29,93,106,45,87,67,69,142,57,121,14,150,48,4,22,133,54,78,60,105,124,127,117,95,148,9,33,8,7,28,68,75,123,130,74,84,49,25,116,115,72,65,58,112,10,152,144,76,44,88,153,40,47,94,96,42,141,99,151,39,18,81,97,41,63,155,31,24,114,119,56,111,79,12,98,143,134,136,120,82,118,113,104,71,146,100,27}, // permutation 8
{6,133,155,100,43,150,20,152,41,69,76,149,63,89,125,5,140,88,8,21,15,141,143,96,32,10,111,142,47,48,7,44,45,74,23,112,65,116,53,114,38,27,144,131,64,81,56,33,146,12,120,58,30,36,73,34,31,18,103,153,87,78,86,128,19,3,102,37,25,132,50,106,94,1,127,68,147,16,49,14,57,75,107,154,118,79,26,108,9,17,90,139,4,91,0,66,77,42,122,13,113,130,117,28,67,11,135,145,24,61,119,95,137,85,51,72,129,97,115,22,104,55,124,134,151,138,2,40,110,60,80,29,59,126,52,98,82,62,46,101,92,84,99,39,70,105,35,54,83,71,136,121,123,148,109,93} // permutation 9
};

// Seed: 614007122

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   volatile int8_t * f0;
};

union U3 {
   int32_t  f0;
   uint64_t  f1;
};

union U4 {
   int16_t  f0;
   volatile uint16_t  f1;
   volatile int32_t  f2;
};

union U5 {
   uint8_t  f0;
   uint32_t  f1;
   uint32_t  f2;
};

union U6 {
   uint8_t  f0;
};

union U7 {
   int8_t * f0;
   volatile int8_t  f1;
   uint8_t  f2;
};

struct S8 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int8_t *g_41;
    int32_t g_50;
    uint32_t g_57;
    uint32_t g_59[8][2][7];
    int32_t g_71;
    uint32_t g_72;
    union U3 g_76;
    union U3 *g_75;
    int32_t *g_79;
    int32_t ** volatile g_78;
    int32_t **g_206[1][1];
    union U7 g_207;
    int8_t g_210;
    uint16_t g_212;
    uint8_t g_214;
    uint32_t g_220;
    uint32_t *g_219;
    VECTOR(int16_t, 8) g_224;
    int32_t * volatile g_229;
    uint32_t g_231;
    VECTOR(int8_t, 8) g_234;
    VECTOR(int8_t, 8) g_236;
    volatile union U6 g_284[9];
    int32_t ** volatile g_288[6];
    int32_t ** volatile g_289;
    volatile union U5 g_306;
    volatile union U5 *g_305;
    union U5 g_310;
    uint64_t g_332;
    VECTOR(int8_t, 8) g_352;
    int32_t * volatile g_356;
    union U0 g_357[6];
    int32_t * volatile g_360;
    union U7 g_387;
    volatile union U1 g_413;
    volatile union U1 *g_412;
    union U3 ** volatile g_415;
    VECTOR(uint32_t, 16) g_422;
    int32_t ***g_432;
    volatile VECTOR(uint16_t, 2) g_436;
    union U2 g_442;
    union U2 * volatile g_441;
    volatile int64_t g_479;
    volatile int64_t *g_478;
    volatile VECTOR(uint8_t, 16) g_480;
    union U1 g_483;
    VECTOR(int32_t, 4) g_487;
    VECTOR(int8_t, 2) g_505;
    VECTOR(uint16_t, 2) g_508;
    union U7 g_510;
    int64_t g_514;
    VECTOR(int32_t, 4) g_523;
    VECTOR(int32_t, 8) g_524;
    volatile VECTOR(int32_t, 8) g_525;
    volatile VECTOR(uint32_t, 4) g_526;
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
uint32_t  func_1(struct S8 * p_550);
union U3 * func_7(int8_t * p_8, union U3 * p_9, union U3 * p_10, int16_t  p_11, union U3 * p_12, struct S8 * p_550);
int8_t * func_13(int8_t  p_14, union U3 * p_15, int8_t * p_16, uint32_t  p_17, int8_t * p_18, struct S8 * p_550);
union U3 * func_20(int8_t * p_21, uint32_t  p_22, int64_t  p_23, uint32_t  p_24, struct S8 * p_550);
int8_t * func_25(union U3  p_26, int8_t * p_27, uint32_t  p_28, struct S8 * p_550);
union U3  func_29(int64_t  p_30, int32_t  p_31, struct S8 * p_550);
uint8_t  func_35(uint16_t  p_36, struct S8 * p_550);
uint8_t  func_39(int8_t * p_40, struct S8 * p_550);
int32_t  func_42(union U3 * p_43, struct S8 * p_550);
union U3 * func_44(int8_t * p_45, int64_t  p_46, struct S8 * p_550);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_550->g_4 p_550->g_41 p_550->g_comm_values p_550->g_72 p_550->g_75 p_550->g_78 p_550->g_71 p_550->g_207 p_550->g_57 p_550->g_76.f0 p_550->g_2 p_550->g_214 p_550->g_219 p_550->g_220 p_550->g_229 p_550->g_231 p_550->g_284 p_550->g_3 p_550->g_236 p_550->l_comm_values p_550->g_356 p_550->g_305 p_550->g_306 p_550->g_357 p_550->g_360 p_550->g_332 p_550->g_50 p_550->g_234 p_550->g_387 p_550->g_76 p_550->g_224 p_550->g_210 p_550->g_412 p_550->g_415 p_550->g_483.f0 p_550->g_487 p_550->g_505 p_550->g_508 p_550->g_510 p_550->g_212 p_550->g_310.f1 p_550->g_523 p_550->g_524 p_550->g_525 p_550->g_526 p_550->g_478 p_550->g_479 p_550->g_422
 * writes: p_550->g_4 p_550->g_41 p_550->g_50 p_550->g_72 p_550->g_79 p_550->g_71 p_550->g_206 p_550->g_212 p_550->g_214 p_550->g_219 p_550->g_231 p_550->g_220 p_550->g_75 p_550->g_310.f1 p_550->g_412 p_550->g_483.f0 p_550->g_332
 */
uint32_t  func_1(struct S8 * p_550)
{ /* block id: 4 */
    int64_t l_19[4][3] = {{0x12F1E5C8A52B4B5AL,1L,0x45EC62BB2C593C86L},{0x12F1E5C8A52B4B5AL,1L,0x45EC62BB2C593C86L},{0x12F1E5C8A52B4B5AL,1L,0x45EC62BB2C593C86L},{0x12F1E5C8A52B4B5AL,1L,0x45EC62BB2C593C86L}};
    uint32_t *l_222 = (void*)0;
    union U3 *l_411 = &p_550->g_76;
    VECTOR(uint32_t, 2) l_423 = (VECTOR(uint32_t, 2))(5UL, 0UL);
    VECTOR(uint16_t, 16) l_437 = (VECTOR(uint16_t, 16))(0x5250L, (VECTOR(uint16_t, 4))(0x5250L, (VECTOR(uint16_t, 2))(0x5250L, 0xBB95L), 0xBB95L), 0xBB95L, 0x5250L, 0xBB95L, (VECTOR(uint16_t, 2))(0x5250L, 0xBB95L), (VECTOR(uint16_t, 2))(0x5250L, 0xBB95L), 0x5250L, 0xBB95L, 0x5250L, 0xBB95L);
    VECTOR(uint16_t, 16) l_438 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0xAC81L), 0xAC81L), 0xAC81L, 6UL, 0xAC81L, (VECTOR(uint16_t, 2))(6UL, 0xAC81L), (VECTOR(uint16_t, 2))(6UL, 0xAC81L), 6UL, 0xAC81L, 6UL, 0xAC81L);
    int64_t l_481 = 0x1AE2065D6BEC4787L;
    int32_t l_491 = (-1L);
    VECTOR(int16_t, 4) l_498 = (VECTOR(int16_t, 4))(0x615FL, (VECTOR(int16_t, 2))(0x615FL, (-6L)), (-6L));
    VECTOR(uint16_t, 2) l_509 = (VECTOR(uint16_t, 2))(65527UL, 0x0A26L);
    int64_t *l_513 = &p_550->g_514;
    int i, j;
    for (p_550->g_4 = 0; (p_550->g_4 <= 3); ++p_550->g_4)
    { /* block id: 7 */
        int8_t l_32 = 0x3BL;
        uint32_t **l_221 = &p_550->g_219;
        uint32_t **l_223 = &l_222;
        int64_t *l_230 = (void*)0;
        uint64_t l_430[6] = {0x2D1446BF8DA13520L,0x2D1446BF8DA13520L,0x2D1446BF8DA13520L,0x2D1446BF8DA13520L,0x2D1446BF8DA13520L,0x2D1446BF8DA13520L};
        int32_t *l_431 = &p_550->g_71;
        int8_t l_454 = 0x48L;
        VECTOR(int8_t, 4) l_490 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x34L), 0x34L);
        int i;
        (*p_550->g_415) = func_7(func_13(l_19[1][1], func_20(func_25(func_29((p_550->g_231 ^= (((l_32 || (~((safe_div_func_uint8_t_u_u(func_35(((((safe_lshift_func_uint8_t_u_s(l_19[1][2], 4)) <= func_39(p_550->g_41, p_550)) != ((((*l_221) = p_550->g_219) == ((*l_223) = l_222)) | (((((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x39D8L, (-8L))).yxyx)).yzzyzxwz)).s30, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_550->g_224.s2251)))).hi))), 0L, (-2L))), (-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((&p_550->g_220 != &p_550->g_220), l_19[1][1], 0x6885L, 0x758CL)), 0x6094L, 0x505EL, 0x1B51L, l_19[1][1], 9L, (-2L), ((VECTOR(int16_t, 2))(0x5C96L)), ((VECTOR(int16_t, 4))(0x15D1L)))).s12d9, ((VECTOR(int16_t, 4))(0x441DL))))))).even, ((VECTOR(int16_t, 2))(0x12E3L)), ((VECTOR(int16_t, 2))(0x77AAL))))).yxyx)), 8L, l_32, 0x7DB5L, p_550->g_4, p_550->l_comm_values[(safe_mod_func_uint32_t_u_u(p_550->tid, 156))], (-9L), 0x11E9L)).s792e, ((VECTOR(int16_t, 4))(0L))))).w <= p_550->g_220) && 0L) & (-1L)))) || (-8L)), p_550), l_32)) & 0x95FEEDADD87B538FL))) | 0x9BL) > 2UL)), l_19[3][1], p_550), &l_32, l_19[1][0], p_550), l_32, p_550->l_comm_values[(safe_mod_func_uint32_t_u_u(p_550->tid, 156))], p_550->g_332, p_550), &p_550->g_210, p_550->g_332, &l_32, p_550), &p_550->g_76, &p_550->g_76, p_550->g_234.s7, l_411, p_550);
    }
    l_491 = 0x2956C41FL;
    for (p_550->g_483.f0 = (-8); (p_550->g_483.f0 > 48); ++p_550->g_483.f0)
    { /* block id: 259 */
        int64_t *l_499 = (void*)0;
        int64_t *l_500[8] = {&l_19[1][1],&l_19[1][1],&l_19[1][1],&l_19[1][1],&l_19[1][1],&l_19[1][1],&l_19[1][1],&l_19[1][1]};
        int8_t l_506 = 3L;
        uint16_t *l_507 = &p_550->g_212;
        int32_t l_519 = 0x6B0D55B9L;
        int32_t *l_549 = &p_550->g_4;
        int i;
        if (((((safe_div_func_uint16_t_u_u(((l_491 = (((((+(p_550->g_284[5] , p_550->g_231)) >= 0xA2D7L) <= (safe_rshift_func_uint16_t_u_u(p_550->g_487.y, 10))) | 0x11C0L) , (l_498.w >= (-1L)))) >= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_550->g_505.xyxxxyxy)).s3, l_506)), 9))), ((*l_507) = ((VECTOR(uint16_t, 2))(65526UL, 0xD019L)).odd))) < (+(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(0x73EDL, 65534UL)).yyyxxyyyxyyyyxxx, ((VECTOR(uint16_t, 2))(p_550->g_508.xy)).xxyyxyxxxxxyyyxy))))).odd, ((VECTOR(uint16_t, 4))(l_509.xxxx)).zzyywyxw, ((VECTOR(uint16_t, 4))(0UL, 65535UL, 65533UL, 0x6B79L)).zwzxzzyx))).even, ((VECTOR(uint16_t, 4))(65535UL))))).z , l_506))) || 0x2E14L) || 0L))
        { /* block id: 262 */
            int64_t *l_516 = &p_550->g_514;
            int32_t l_518 = 0x1CDF9854L;
            if ((p_550->g_510 , (safe_rshift_func_uint8_t_u_s(250UL, 0))))
            { /* block id: 263 */
                if (l_491)
                    break;
                return p_550->g_4;
            }
            else
            { /* block id: 266 */
                int64_t **l_515 = &l_513;
                int64_t **l_517 = &l_516;
                int8_t *l_520 = &l_506;
                (*p_550->g_360) = (FAKE_DIVERGE(p_550->local_0_offset, get_local_id(0), 10) < (((*l_520) = (l_519 = ((((*l_515) = l_513) == ((*l_517) = l_516)) && (l_518 , ((*l_507) &= l_506))))) != 3L));
            }
            if (l_509.y)
                continue;
        }
        else
        { /* block id: 275 */
            uint32_t l_538 = 0x2DD845A1L;
            uint8_t l_547 = 1UL;
            for (p_550->g_310.f1 = 0; (p_550->g_310.f1 <= 25); p_550->g_310.f1 = safe_add_func_int32_t_s_s(p_550->g_310.f1, 9))
            { /* block id: 278 */
                VECTOR(int32_t, 4) l_527 = (VECTOR(int32_t, 4))(0x1D0C57E5L, (VECTOR(int32_t, 2))(0x1D0C57E5L, 1L), 1L);
                uint64_t *l_532 = &p_550->g_332;
                union U5 l_535 = {0UL};
                int64_t l_548 = 0x185ED51EEC98E4C5L;
                int i;
                l_491 &= (((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(p_550->g_523.yzyw)).hi, ((VECTOR(int32_t, 4))(p_550->g_524.s5632)).hi))).xxxxxyyyyxxxxxyx)).sd0, ((VECTOR(int32_t, 4))(p_550->g_525.s0627)).lo))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_550->g_526.yw)).xyxyxxyx)).even)).wzzyzxzywzxxyxwx)).s03))).yyyyxyyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-10L), 0x351E6FFA7BBCC71CL)).yyxyxxyyxxxxyyxy)))).hi))).even, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_527.zwwx)).ywyxyxyw)).s1275505305235714)).s0 && (l_506 , ((*p_550->g_219) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((--(*l_532)), (l_535 , ((safe_div_func_int8_t_s_s((((+l_538) != (((*p_550->g_478) | p_550->g_422.sd) >= (safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((p_550->g_523.w , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_423.x, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x4DDBL, (-1L))).yxxyxyxy)).s3)), 5))) || l_506), l_547)), 255UL)))) , l_527.w), l_527.w)) & l_548)))), p_550->g_224.s4)) || 0xC2B2L)))) ^ p_550->l_comm_values[(safe_mod_func_uint32_t_u_u(p_550->tid, 156))]), (-1L), (-3L), (-1L))).yzyzyzxyxyzyyyxx, ((VECTOR(int32_t, 16))((-1L)))))), ((VECTOR(int32_t, 16))(0x13BC02F8L)), ((VECTOR(int32_t, 16))(0L))))))).lo, ((VECTOR(uint32_t, 8))(0xB768DCEAL))))).odd))).y && l_519);
            }
        }
        (*l_549) &= (&p_550->g_479 != &p_550->g_479);
        if ((*l_549))
            continue;
        if ((*p_550->g_356))
            break;
    }
    return p_550->g_234.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_412
 * writes: p_550->g_412
 */
union U3 * func_7(int8_t * p_8, union U3 * p_9, union U3 * p_10, int16_t  p_11, union U3 * p_12, struct S8 * p_550)
{ /* block id: 214 */
    union U3 *l_414 = &p_550->g_76;
    p_550->g_412 = p_550->g_412;
    return l_414;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_387 p_550->g_76 p_550->g_224 p_550->g_210 p_550->g_360 p_550->g_219 p_550->g_220 p_550->g_284 p_550->g_50 p_550->g_306.f0 p_550->g_2 p_550->g_229
 * writes: p_550->g_50 p_550->g_71 p_550->g_212 p_550->g_220 p_550->g_75
 */
int8_t * func_13(int8_t  p_14, union U3 * p_15, int8_t * p_16, uint32_t  p_17, int8_t * p_18, struct S8 * p_550)
{ /* block id: 207 */
    int64_t l_390[6][4][4] = {{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}},{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}},{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}},{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}},{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}},{{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL},{0x36105BC854643836L,0x759F8796B761A982L,(-6L),0x4957681923A35FBDL}}};
    int32_t l_391 = 0L;
    int32_t *l_394[6] = {&l_391,&l_391,&l_391,&l_391,&l_391,&l_391};
    uint32_t l_395[1][2];
    int32_t l_396[4] = {(-6L),(-6L),(-6L),(-6L)};
    uint8_t *l_397[10] = {&p_550->g_310.f0,&p_550->g_214,&p_550->g_310.f0,&p_550->g_310.f0,&p_550->g_214,&p_550->g_310.f0,&p_550->g_310.f0,&p_550->g_214,&p_550->g_310.f0,&p_550->g_310.f0};
    int8_t l_398 = (-8L);
    union U5 l_399 = {7UL};
    int32_t l_402 = 0x11618946L;
    int8_t l_403 = (-8L);
    int16_t *l_408 = (void*)0;
    VECTOR(uint16_t, 16) l_409 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65528UL), 65528UL), 65528UL, 65530UL, 65528UL, (VECTOR(uint16_t, 2))(65530UL, 65528UL), (VECTOR(uint16_t, 2))(65530UL, 65528UL), 65530UL, 65528UL, 65530UL, 65528UL);
    int8_t l_410 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_395[i][j] = 0xFA5C16FCL;
    }
    (*p_550->g_360) = ((safe_mod_func_int8_t_s_s(((p_550->g_387 , ((safe_rshift_func_uint8_t_u_u(l_390[4][1][3], (l_398 = (((*p_15) , (p_17 , (l_391 , p_17))) <= (p_14 <= ((((0UL == ((l_395[0][0] = 0x22B2A720L) == l_396[1])) || p_550->g_224.s3) > p_17) , p_14)))))) , l_399)) , (*p_16)), (-1L))) || (-7L));
    (*p_550->g_229) = (safe_mod_func_int32_t_s_s(((~(func_29(l_402, l_403, p_550) , (safe_add_func_int16_t_s_s((((0x651C0ADAL ^ p_14) > p_14) > ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0UL, (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((void*)0 != l_408))), 4UL, 65534UL)), ((VECTOR(uint16_t, 4))(l_409.s8c4a)), 0xEA8EL, ((VECTOR(uint16_t, 4))((p_550->g_212 = ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((p_550->g_50 , 0x1BE1L), p_550->g_50, 65535UL, 0UL, ((VECTOR(uint16_t, 2))(0UL)), p_17, ((VECTOR(uint16_t, 4))(6UL)), ((VECTOR(uint16_t, 4))(1UL)), 1UL)))), (uint16_t)p_550->g_306.f0, (uint16_t)0x586FL))).se), 0xDA31L, 0xDD80L, 0x63D6L)), p_550->g_2, 65535UL, 65535UL)).s0), 0x7DF9L)))) < p_17), l_410));
    return &p_550->g_210;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_50 p_550->g_57 p_550->g_219 p_550->g_220 p_550->g_210 p_550->g_234
 * writes: p_550->g_212
 */
union U3 * func_20(int8_t * p_21, uint32_t  p_22, int64_t  p_23, uint32_t  p_24, struct S8 * p_550)
{ /* block id: 201 */
    int16_t *l_368 = (void*)0;
    int16_t *l_369[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_370 = 0L;
    VECTOR(uint16_t, 4) l_375 = (VECTOR(uint16_t, 4))(0xC44AL, (VECTOR(uint16_t, 2))(0xC44AL, 0UL), 0UL);
    uint16_t *l_379 = &p_550->g_212;
    int32_t l_380 = (-6L);
    int32_t *l_381[3][4];
    uint32_t l_382 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_381[i][j] = &l_380;
    }
    l_380 = ((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_370 = p_550->g_50), p_22)) | (safe_mod_func_int64_t_s_s(((0L > p_550->g_57) >= ((safe_div_func_uint16_t_u_u((((VECTOR(uint16_t, 4))(l_375.yyyx)).w > GROUP_DIVERGE(2, 1)), p_22)) , (*p_550->g_219))), (0x277274EFL && (p_23 , ((safe_unary_minus_func_int32_t_s((((*l_379) = ((VECTOR(uint16_t, 8))((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), p_550->g_210)), p_22, ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(0x95D8L)))).s2) > p_23))) & p_23)))))), l_375.w)), p_550->g_234.s7)) & p_24);
    --l_382;
    return &p_550->g_76;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_3 p_550->g_214 p_550->g_219 p_550->g_220 p_550->g_236 p_550->g_310.f1 p_550->l_comm_values p_550->g_352 p_550->g_356 p_550->g_71 p_550->g_305 p_550->g_306 p_550->g_357 p_550->g_360
 * writes: p_550->g_310.f1 p_550->g_71 p_550->g_50
 */
int8_t * func_25(union U3  p_26, int8_t * p_27, uint32_t  p_28, struct S8 * p_550)
{ /* block id: 171 */
    int64_t l_330 = 0x4178B6B4E31191B3L;
    uint64_t *l_331[6];
    int32_t l_333[3][6][7] = {{{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L}},{{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L}},{{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L},{0x65E474B9L,5L,4L,0x78A3A3B2L,0x7789C42EL,0x752D40B2L,0x78A3A3B2L}}};
    int32_t l_334[7] = {2L,2L,2L,2L,2L,2L,2L};
    uint8_t l_355 = 255UL;
    int8_t *l_361[1][4];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_331[i] = &p_550->g_332;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_361[i][j] = &p_550->g_210;
    }
    if ((l_334[4] = (safe_add_func_uint64_t_u_u((p_550->g_3 , (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_550->g_214, 0x3282L)), (safe_unary_minus_func_uint32_t_u((((*p_27) < (p_28 && p_26.f0)) , (*p_550->g_219)))))) != (safe_mod_func_uint64_t_u_u(p_550->g_236.s1, (l_333[2][2][3] = l_330)))), l_330))), GROUP_DIVERGE(1, 1)))))
    { /* block id: 174 */
        if ((atomic_inc(&p_550->l_atomic_input[49]) == 1))
        { /* block id: 176 */
            union U4 l_335 = {0x4EABL};/* VOLATILE GLOBAL l_335 */
            int32_t l_336 = 0x2ECEE631L;
            uint64_t l_337 = 18446744073709551609UL;
            uint32_t l_338 = 4294967295UL;
            l_338 ^= (l_335 , (l_336 , l_337));
            unsigned int result = 0;
            result += l_335.f0;
            result += l_335.f1;
            result += l_335.f2;
            result += l_336;
            result += l_337;
            result += l_338;
            atomic_add(&p_550->l_special_values[49], result);
        }
        else
        { /* block id: 178 */
            (1 + 1);
        }
        return &p_550->g_210;
    }
    else
    { /* block id: 182 */
        if ((atomic_inc(&p_550->g_atomic_input[71 * get_linear_group_id() + 12]) == 0))
        { /* block id: 184 */
            uint32_t l_339 = 0xB0FD8E57L;
            int32_t l_343 = 0x292811CBL;
            int32_t *l_342 = &l_343;
            int64_t l_344 = 0x382A1ADDF37BF064L;
            ++l_339;
            l_342 = (void*)0;
            l_344 |= 0x2660F844L;
            unsigned int result = 0;
            result += l_339;
            result += l_343;
            result += l_344;
            atomic_add(&p_550->g_special_values[71 * get_linear_group_id() + 12], result);
        }
        else
        { /* block id: 188 */
            (1 + 1);
        }
    }
    for (p_550->g_310.f1 = 0; (p_550->g_310.f1 <= 42); ++p_550->g_310.f1)
    { /* block id: 194 */
        uint32_t **l_354[4][1][10] = {{{(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0,(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0}},{{(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0,(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0}},{{(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0,(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0}},{{(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0,(void*)0,&p_550->g_219,&p_550->g_219,&p_550->g_219,(void*)0}}};
        uint32_t ***l_353 = &l_354[1][0][0];
        int i, j, k;
        (*p_550->g_356) &= (~(l_355 = (safe_mul_func_int16_t_s_s(((((+p_550->l_comm_values[(safe_mod_func_uint32_t_u_u(p_550->tid, 156))]) | FAKE_DIVERGE(p_550->group_0_offset, get_group_id(0), 10)) & (p_26.f0 >= (((safe_mul_func_uint16_t_u_u((0x3EEAB777L && 4294967293UL), GROUP_DIVERGE(2, 1))) , (safe_unary_minus_func_uint32_t_u(((((VECTOR(int8_t, 4))((*p_27), (-6L), 0x69L, 0x49L)).w <= 0x23L) == (+((VECTOR(int8_t, 8))(p_550->g_352.s53516745)).s1))))) > ((((*l_353) = &p_550->g_219) != (void*)0) != (-1L))))) || 0xA731D52825E3BEFAL), FAKE_DIVERGE(p_550->group_1_offset, get_group_id(1), 10)))));
    }
    (*p_550->g_360) = (l_355 != ((*p_550->g_305) , (p_550->g_357[2] , (safe_add_func_int16_t_s_s(0x3A13L, (-1L))))));
    return l_361[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_71 p_550->g_219 p_550->g_220 p_550->g_284
 * writes: p_550->g_71 p_550->g_212 p_550->g_220 p_550->g_75
 */
union U3  func_29(int64_t  p_30, int32_t  p_31, struct S8 * p_550)
{ /* block id: 108 */
    uint32_t l_239 = 4294967292UL;
    int32_t l_265 = 0x2EABD2FAL;
    union U3 *l_282 = (void*)0;
    int32_t *l_291 = (void*)0;
    VECTOR(int64_t, 2) l_307 = (VECTOR(int64_t, 2))((-10L), 0x676F72BF05E4498AL);
    union U5 *l_309[6][7] = {{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0},{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0},{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0},{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0},{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0},{&p_550->g_310,(void*)0,&p_550->g_310,(void*)0,&p_550->g_310,&p_550->g_310,(void*)0}};
    int32_t l_316 = 0x1759A175L;
    union U3 l_318[9] = {{8L},{8L},{8L},{8L},{8L},{8L},{8L},{8L},{8L}};
    int i, j;
    for (p_550->g_71 = 20; (p_550->g_71 >= 2); p_550->g_71 = safe_sub_func_uint8_t_u_u(p_550->g_71, 5))
    { /* block id: 111 */
        VECTOR(int8_t, 16) l_235 = (VECTOR(int8_t, 16))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 0x3EL), 0x3EL), 0x3EL, 0x51L, 0x3EL, (VECTOR(int8_t, 2))(0x51L, 0x3EL), (VECTOR(int8_t, 2))(0x51L, 0x3EL), 0x51L, 0x3EL, 0x51L, 0x3EL);
        VECTOR(int8_t, 8) l_237 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x42L), 0x42L), 0x42L, (-5L), 0x42L);
        int32_t l_238 = 0x0735869CL;
        int32_t l_266 = 1L;
        int32_t l_267 = (-1L);
        VECTOR(int64_t, 4) l_277 = (VECTOR(int64_t, 4))(0x0350BCA181672197L, (VECTOR(int64_t, 2))(0x0350BCA181672197L, 0L), 0L);
        int8_t **l_286 = &p_550->g_41;
        int i;
        l_239 |= ((0x2EL | (l_238 = ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_30, 0x3EL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_550->g_234.s7406333524016372)))).hi)), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(l_235.s859488b623e1638d)).saecf, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_550->g_236.s00)).xyyx))))))), ((VECTOR(int8_t, 2))(0L, 0x0AL)), (-1L))).s08)), 7L, ((VECTOR(int8_t, 2))(l_237.s31)), 0L)).s03)).xyyy))).z)) | p_30);
        if ((atomic_inc(&p_550->l_atomic_input[0]) == 3))
        { /* block id: 115 */
            int16_t l_240 = 0x28F6L;
            int16_t l_241 = 0x394EL;
            int32_t l_242 = 0x10C54824L;
            VECTOR(int32_t, 4) l_243 = (VECTOR(int32_t, 4))(0x4256CD0BL, (VECTOR(int32_t, 2))(0x4256CD0BL, (-4L)), (-4L));
            VECTOR(int32_t, 8) l_244 = (VECTOR(int32_t, 8))(0x2085F373L, (VECTOR(int32_t, 4))(0x2085F373L, (VECTOR(int32_t, 2))(0x2085F373L, (-1L)), (-1L)), (-1L), 0x2085F373L, (-1L));
            VECTOR(int32_t, 2) l_245 = (VECTOR(int32_t, 2))(0x165B1FA4L, 0x7E7B2CC8L);
            int32_t l_246 = 0x12D0D010L;
            int i;
            l_242 = (l_240 , l_241);
            l_246 = ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_243.yyyz)).yywyyywz, ((VECTOR(int32_t, 2))(l_244.s76)).xyxxyxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_245.yyyx)).odd)), (-1L), 2L)).odd)).yyyyyyyx))).s7;
            for (l_242 = 29; (l_242 <= 6); l_242--)
            { /* block id: 120 */
                int32_t l_250 = (-1L);
                int32_t *l_249 = &l_250;
                int32_t *l_251 = &l_250;
                int32_t *l_252[9][5] = {{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250,&l_250,&l_250}};
                int i, j;
                l_252[2][1] = (GROUP_DIVERGE(2, 1) , (l_251 = l_249));
            }
            for (l_243.w = 0; (l_243.w <= (-21)); --l_243.w)
            { /* block id: 126 */
                union U3 l_256[3][6] = {{{0x676D836CL},{0x584C7EC1L},{0x584C7EC1L},{0x676D836CL},{0x676D836CL},{0x584C7EC1L}},{{0x676D836CL},{0x584C7EC1L},{0x584C7EC1L},{0x676D836CL},{0x676D836CL},{0x584C7EC1L}},{{0x676D836CL},{0x584C7EC1L},{0x584C7EC1L},{0x676D836CL},{0x676D836CL},{0x584C7EC1L}}};
                union U3 *l_255[10] = {&l_256[1][4],&l_256[0][5],&l_256[1][4],&l_256[1][4],&l_256[0][5],&l_256[1][4],&l_256[1][4],&l_256[0][5],&l_256[1][4],&l_256[1][4]};
                union U3 *l_257 = (void*)0;
                int i, j;
                l_257 = l_255[5];
            }
            unsigned int result = 0;
            result += l_240;
            result += l_241;
            result += l_242;
            result += l_243.w;
            result += l_243.z;
            result += l_243.y;
            result += l_243.x;
            result += l_244.s7;
            result += l_244.s6;
            result += l_244.s5;
            result += l_244.s4;
            result += l_244.s3;
            result += l_244.s2;
            result += l_244.s1;
            result += l_244.s0;
            result += l_245.y;
            result += l_245.x;
            result += l_246;
            atomic_add(&p_550->l_special_values[0], result);
        }
        else
        { /* block id: 129 */
            (1 + 1);
        }
        for (p_550->g_212 = 0; (p_550->g_212 != 19); p_550->g_212++)
        { /* block id: 134 */
            int64_t l_260 = 0x1CE891F90226CD2CL;
            int32_t *l_261 = (void*)0;
            int32_t *l_262 = &l_238;
            int32_t *l_263 = &l_238;
            int32_t *l_264[1][6] = {{&p_550->g_50,&p_550->g_71,&p_550->g_50,&p_550->g_50,&p_550->g_71,&p_550->g_50}};
            uint32_t l_268[8][2] = {{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL},{0x9E462A4FL,0x9E462A4FL}};
            union U3 *l_278 = &p_550->g_76;
            int8_t **l_285 = &p_550->g_41;
            int i, j;
            if (l_239)
                break;
            l_268[0][1]--;
            if ((atomic_inc(&p_550->g_atomic_input[71 * get_linear_group_id() + 5]) == 3))
            { /* block id: 138 */
                uint32_t l_271[4][5] = {{0UL,0xD32AECA1L,0xD32AECA1L,0UL,0UL},{0UL,0xD32AECA1L,0xD32AECA1L,0UL,0UL},{0UL,0xD32AECA1L,0xD32AECA1L,0UL,0UL},{0UL,0xD32AECA1L,0xD32AECA1L,0UL,0UL}};
                int32_t l_272[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_272[i] = 0x5BE3D278L;
                l_272[0] = l_271[3][1];
                unsigned int result = 0;
                int l_271_i0, l_271_i1;
                for (l_271_i0 = 0; l_271_i0 < 4; l_271_i0++) {
                    for (l_271_i1 = 0; l_271_i1 < 5; l_271_i1++) {
                        result += l_271[l_271_i0][l_271_i1];
                    }
                }
                int l_272_i0;
                for (l_272_i0 = 0; l_272_i0 < 1; l_272_i0++) {
                    result += l_272[l_272_i0];
                }
                atomic_add(&p_550->g_special_values[71 * get_linear_group_id() + 5], result);
            }
            else
            { /* block id: 140 */
                (1 + 1);
            }
            for (p_550->g_220 = (-22); (p_550->g_220 >= 28); ++p_550->g_220)
            { /* block id: 145 */
                int32_t *l_287 = &p_550->g_50;
                for (l_260 = 6; (l_260 > 16); l_260 = safe_add_func_int8_t_s_s(l_260, 1))
                { /* block id: 148 */
                    union U3 **l_279 = &p_550->g_75;
                    union U3 *l_281 = &p_550->g_76;
                    union U3 **l_280 = &l_281;
                    int32_t *l_290 = &l_265;
                    l_290 = ((p_30 ^ (*p_550->g_219)) , (((0x45F2CB79E7B17E92L <= (((VECTOR(int64_t, 16))(l_277.xwzwxwzxxzyzzzwz)).s6 > p_31)) != (FAKE_DIVERGE(p_550->group_1_offset, get_group_id(1), 10) != ((((*l_280) = ((*l_279) = (l_278 = l_278))) != l_282) < (safe_unary_minus_func_uint32_t_u(((!(p_550->g_284[5] , ((0x328DC470D1F23B27L <= (l_285 == l_286)) != p_31))) | FAKE_DIVERGE(p_550->local_2_offset, get_local_id(2), 10))))))) , l_287));
                }
                if (l_267)
                    continue;
            }
        }
        l_291 = &l_266;
    }
    for (p_31 = 0; (p_31 != 16); ++p_31)
    { /* block id: 161 */
        VECTOR(int8_t, 4) l_298 = (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x0CL), 0x0CL);
        int32_t l_308[9] = {0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L,0x7D442B12L};
        uint8_t *l_311 = &p_550->g_207.f2;
        int8_t *l_312 = &p_550->g_210;
        uint16_t *l_313 = &p_550->g_212;
        int32_t *l_314 = (void*)0;
        int32_t *l_315 = &l_265;
        int32_t **l_317 = &l_315;
        int i;
        l_316 ^= (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0L, ((safe_add_func_uint8_t_u_u(255UL, ((VECTOR(int8_t, 4))(l_298.zyyy)).w)) | ((*l_315) = ((((*l_313) = (safe_div_func_uint8_t_u_u(((p_550->g_71 >= ((((VECTOR(uint8_t, 4))((p_30 == ((l_265 != ((*l_312) = ((0xD0A0L >= ((safe_lshift_func_uint8_t_u_u(l_298.w, ((*l_311) = (safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (p_550->g_305 != (((((l_308[6] |= (!((VECTOR(int64_t, 16))(l_307.yxyxyxyxxyxyxxxx)).s5)) <= (&l_291 == (void*)0)) , 0x503DA074L) , l_308[6]) , l_309[2][1]))))))) , p_31)) , p_30))) == p_31)), p_31, 0UL, 250UL)).z >= 0x7EL) == l_298.w)) | p_30), p_30))) , &p_550->g_210) != l_312))), 1L, 1L, p_30, ((VECTOR(int8_t, 2))(0x3DL)), 1L)).s6515754210564501)).s0 , p_30);
        (*l_317) = &l_308[3];
    }
    return l_318[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_229 p_550->g_71
 * writes: p_550->g_71
 */
uint8_t  func_35(uint16_t  p_36, struct S8 * p_550)
{ /* block id: 104 */
    VECTOR(uint8_t, 8) l_227 = (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xF6L), 0xF6L), 0xF6L, 254UL, 0xF6L);
    int32_t *l_228 = (void*)0;
    int i;
    (*p_550->g_229) ^= (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_227.s7260411160642733)).sb, 0L));
    return p_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_3 p_550->g_4 p_550->g_57 p_550->l_comm_values p_550->g_comm_values p_550->g_72 p_550->g_75 p_550->g_78 p_550->g_71 p_550->g_207 p_550->g_76.f0 p_550->g_2 p_550->g_214
 * writes: p_550->g_41 p_550->g_50 p_550->g_57 p_550->g_59 p_550->g_72 p_550->g_79 p_550->g_71 p_550->g_206 p_550->g_212 p_550->g_214
 */
uint8_t  func_39(int8_t * p_40, struct S8 * p_550)
{ /* block id: 8 */
    int8_t **l_47[10][3] = {{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0},{&p_550->g_41,&p_550->g_41,(void*)0}};
    int32_t l_48 = 9L;
    int32_t **l_208[9][3] = {{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79},{&p_550->g_79,&p_550->g_79,&p_550->g_79}};
    int32_t l_211 = 0x2E7F329CL;
    uint32_t l_216 = 0x831EBBCEL;
    int i, j;
    if (func_42(func_44((p_550->g_41 = p_40), l_48, p_550), p_550))
    { /* block id: 21 */
        int8_t **l_83 = &p_550->g_41;
        int32_t *l_84 = &p_550->g_71;
        (*l_84) = (safe_mod_func_int8_t_s_s((l_83 == (void*)0), GROUP_DIVERGE(2, 1)));
        (*l_84) = 0x0F170593L;
        return (*l_84);
    }
    else
    { /* block id: 25 */
        union U1 l_189 = {0UL};
        int32_t **l_202 = &p_550->g_79;
        int32_t ***l_203 = &l_202;
        int32_t **l_205 = &p_550->g_79;
        int32_t ***l_204[1][1][10] = {{{&l_205,&l_205,&l_205,&l_205,&l_205,&l_205,&l_205,&l_205,&l_205,&l_205}}};
        int8_t *l_209 = &p_550->g_210;
        uint8_t *l_213[4][6][9] = {{{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214}},{{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214}},{{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214}},{{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214},{&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214,&p_550->g_214}}};
        uint8_t l_215[8][3][4] = {{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}},{{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL},{0x9DL,0x9DL,8UL,0UL}}};
        int i, j, k;
        if ((atomic_inc(&p_550->g_atomic_input[71 * get_linear_group_id() + 62]) == 0))
        { /* block id: 27 */
            int64_t l_85 = (-1L);
            int8_t l_86 = 0x7FL;
            int64_t l_87[1][7][7] = {{{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)},{0x27A50812B24AB748L,(-1L),(-1L),0x27A50812B24AB748L,0x27A50812B24AB748L,(-1L),(-1L)}}};
            int32_t l_88 = 0x64ADD8BEL;
            int8_t l_89 = 1L;
            int8_t l_90 = 0L;
            int32_t l_91 = (-3L);
            int16_t l_92 = (-8L);
            int16_t l_93 = 0L;
            uint32_t l_94 = 0x9B1DFB68L;
            int32_t l_97 = 0x44065A8CL;
            int64_t l_98 = 0x2F9A50DF4C6C2C34L;
            int i, j, k;
            l_94++;
            l_98 = l_97;
            for (l_98 = 0; (l_98 != (-8)); l_98 = safe_sub_func_uint64_t_u_u(l_98, 4))
            { /* block id: 32 */
                uint32_t l_101[4][5] = {{4UL,0xDF57287CL,4294967291UL,0xDF57287CL,4UL},{4UL,0xDF57287CL,4294967291UL,0xDF57287CL,4UL},{4UL,0xDF57287CL,4294967291UL,0xDF57287CL,4UL},{4UL,0xDF57287CL,4294967291UL,0xDF57287CL,4UL}};
                int i, j;
                l_101[3][1]++;
                for (l_101[3][1] = 5; (l_101[3][1] >= 33); ++l_101[3][1])
                { /* block id: 36 */
                    uint64_t l_106 = 1UL;
                    int32_t l_131 = 1L;
                    int32_t *l_130 = &l_131;
                    VECTOR(uint64_t, 2) l_132 = (VECTOR(uint64_t, 2))(18446744073709551611UL, 0xBC84205C74453018L);
                    uint8_t l_133 = 3UL;
                    int32_t l_134 = 0x019CC642L;
                    int32_t l_135 = 0x64978895L;
                    uint32_t l_136 = 0UL;
                    VECTOR(uint8_t, 16) l_137 = (VECTOR(uint8_t, 16))(0x66L, (VECTOR(uint8_t, 4))(0x66L, (VECTOR(uint8_t, 2))(0x66L, 0x6EL), 0x6EL), 0x6EL, 0x66L, 0x6EL, (VECTOR(uint8_t, 2))(0x66L, 0x6EL), (VECTOR(uint8_t, 2))(0x66L, 0x6EL), 0x66L, 0x6EL, 0x66L, 0x6EL);
                    uint32_t l_138 = 0x9036F656L;
                    uint32_t l_139[3];
                    int16_t l_140 = (-5L);
                    union U6 l_155 = {0xC9L};
                    union U6 *l_154 = &l_155;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_139[i] = 0UL;
                    if (l_106)
                    { /* block id: 37 */
                        VECTOR(int32_t, 2) l_107 = (VECTOR(int32_t, 2))(0x13C2DF58L, 0L);
                        VECTOR(int32_t, 2) l_108 = (VECTOR(int32_t, 2))(0x2727D4F9L, (-1L));
                        uint32_t l_109 = 4294967288UL;
                        int32_t *l_110[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_111[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                        union U2 l_113[4] = {{0},{0},{0},{0}};
                        union U2 *l_112 = &l_113[3];
                        union U2 *l_114 = &l_113[3];
                        int i, j;
                        l_109 &= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(l_107.yxxxyxyx)), ((VECTOR(int32_t, 2))(l_108.xy)).xyyyxyxx))).s3;
                        l_111[2][2] = l_110[3];
                        l_114 = l_112;
                    }
                    else
                    { /* block id: 41 */
                        int64_t l_115 = 0x3B5982017E6F66A9L;
                        int64_t l_116[4][8][4] = {{{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L}},{{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L}},{{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L}},{{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L},{0x7E572E8C5F53CA78L,0x7D394C19A244BBC7L,4L,4L}}};
                        int8_t l_117 = (-3L);
                        int8_t l_118 = 0x51L;
                        uint32_t l_119[1];
                        uint32_t l_122 = 0UL;
                        VECTOR(int32_t, 4) l_123 = (VECTOR(int32_t, 4))(0x75FA4EC0L, (VECTOR(int32_t, 2))(0x75FA4EC0L, 0x6C3DBCAAL), 0x6C3DBCAAL);
                        int64_t l_124 = 0x2CD46132A9E99FB6L;
                        union U0 l_126[6][8] = {{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}},{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}},{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}},{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}},{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}},{{-4L},{-6L},{0x6D5B373BL},{0L},{-6L},{0L},{0x6D5B373BL},{-6L}}};
                        union U0 *l_125 = &l_126[0][4];
                        union U0 *l_127 = &l_126[0][4];
                        int64_t l_128 = 0x78201C62F756BAA7L;
                        uint64_t l_129 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_119[i] = 0x83274840L;
                        l_119[0]++;
                        l_124 ^= (l_122 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_123.ww)), 8L, 9L)).yxwxyzwyxxxzxyww)).s4);
                        l_127 = l_125;
                        l_129 = l_128;
                    }
                    l_130 = l_130;
                    if ((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(l_132.xyxyxxyxyyxyyyxx)).s8829, (uint64_t)l_133, (uint64_t)(((l_138 &= ((l_134 , l_135) , (l_136 , l_137.sd))) , l_139[0]) , FAKE_DIVERGE(p_550->global_1_offset, get_global_id(1), 10))))).y , l_140))
                    { /* block id: 49 */
                        uint32_t l_141 = 0x4E8889E1L;
                        uint64_t l_144 = 0xA80779CC8352F659L;
                        int32_t l_147[5][2][6] = {{{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L},{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L}},{{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L},{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L}},{{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L},{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L}},{{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L},{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L}},{{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L},{8L,7L,0L,0x6C2AD83BL,0x28A3908BL,1L}}};
                        uint32_t l_148 = 4294967290UL;
                        uint32_t l_149 = 0xB6824987L;
                        int i, j, k;
                        l_141++;
                        l_149 = ((l_144++) , (l_147[4][0][2] , ((*l_130) = l_148)));
                    }
                    else
                    { /* block id: 54 */
                        uint32_t l_150 = 5UL;
                        union U5 l_152 = {255UL};
                        union U5 *l_151 = &l_152;
                        union U5 *l_153[7] = {(void*)0,&l_152,(void*)0,(void*)0,&l_152,(void*)0,(void*)0};
                        int i;
                        (*l_130) = l_150;
                        l_153[4] = l_151;
                    }
                    l_154 = (void*)0;
                }
            }
            for (l_92 = 0; (l_92 <= (-8)); l_92 = safe_sub_func_int32_t_s_s(l_92, 5))
            { /* block id: 63 */
                union U0 l_159 = {0x4F1EF60FL};/* VOLATILE GLOBAL l_159 */
                union U0 *l_158 = &l_159;
                union U0 *l_160 = &l_159;
                VECTOR(int32_t, 4) l_161 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6E717A6DL), 0x6E717A6DL);
                int i;
                l_160 = l_158;
                if (((VECTOR(int32_t, 8))(l_161.wxwwywyy)).s1)
                { /* block id: 65 */
                    int32_t l_163 = (-5L);
                    int32_t *l_162 = &l_163;
                    union U5 l_164[5][5][8] = {{{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}}},{{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}}},{{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}}},{{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}}},{{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}},{{7UL},{0UL},{249UL},{0x85L},{0x85L},{249UL},{0UL},{7UL}}}};
                    int32_t l_165 = 0x5E7E663BL;
                    VECTOR(int32_t, 16) l_166 = (VECTOR(int32_t, 16))(0x27629048L, (VECTOR(int32_t, 4))(0x27629048L, (VECTOR(int32_t, 2))(0x27629048L, (-8L)), (-8L)), (-8L), 0x27629048L, (-8L), (VECTOR(int32_t, 2))(0x27629048L, (-8L)), (VECTOR(int32_t, 2))(0x27629048L, (-8L)), 0x27629048L, (-8L), 0x27629048L, (-8L));
                    uint64_t l_167 = 1UL;
                    VECTOR(int32_t, 16) l_168 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    uint32_t l_169 = 0UL;
                    VECTOR(int16_t, 4) l_170 = (VECTOR(int16_t, 4))(0x7758L, (VECTOR(int16_t, 2))(0x7758L, 0x656CL), 0x656CL);
                    int64_t l_171 = 0x4A96F2688045252AL;
                    int8_t l_172 = 0x3CL;
                    union U0 l_173[5][2][2] = {{{{0x2EBC2135L},{-1L}},{{0x2EBC2135L},{-1L}}},{{{0x2EBC2135L},{-1L}},{{0x2EBC2135L},{-1L}}},{{{0x2EBC2135L},{-1L}},{{0x2EBC2135L},{-1L}}},{{{0x2EBC2135L},{-1L}},{{0x2EBC2135L},{-1L}}},{{{0x2EBC2135L},{-1L}},{{0x2EBC2135L},{-1L}}}};
                    union U5 l_174 = {246UL};
                    uint64_t l_175 = 0UL;
                    VECTOR(int16_t, 16) l_176 = (VECTOR(int16_t, 16))(0x1FB2L, (VECTOR(int16_t, 4))(0x1FB2L, (VECTOR(int16_t, 2))(0x1FB2L, 0x5D16L), 0x5D16L), 0x5D16L, 0x1FB2L, 0x5D16L, (VECTOR(int16_t, 2))(0x1FB2L, 0x5D16L), (VECTOR(int16_t, 2))(0x1FB2L, 0x5D16L), 0x1FB2L, 0x5D16L, 0x1FB2L, 0x5D16L);
                    int64_t l_177[1];
                    int8_t l_178 = 0x42L;
                    int64_t l_179 = 8L;
                    int32_t l_180 = 0x14E5E5AFL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_177[i] = 1L;
                    l_162 = (void*)0;
                    l_165 = (l_164[2][0][5] , (l_161.x = 0x602C90DCL));
                    l_180 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))((-9L), 8L, (l_179 = (l_161.x = ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_166.s03a9d77def9fa0a2)).s640d)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_167, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_168.sd56c25d7)).s31, (int32_t)l_169))), 1L)).hi)).xxxxxyyx, (int32_t)((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(l_170.xz)).yxxxyxxy, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))((-3L), (-10L), 0x5F70L, (-1L), (l_172 = (l_93 = l_171)), (l_173[1][0][0] , (l_174 , l_175)), (-7L), (-10L))).lo, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_176.sfae3a326)))))))).s27)).xxxxyxxxxxxyyyyy, (int16_t)0x0867L, (int16_t)l_177[0]))).odd)).s1720254235266266, ((VECTOR(int16_t, 16))(0x2389L)), ((VECTOR(int16_t, 16))(0x7B44L))))).s4045, ((VECTOR(int16_t, 4))((-1L)))))).xzxwxxww))), ((VECTOR(uint16_t, 8))(0xB431L))))).s53, (int32_t)l_178))), ((VECTOR(int32_t, 2))((-1L)))))).xyxyxxxy)).lo, ((VECTOR(int32_t, 4))(0x72379749L)), ((VECTOR(int32_t, 4))((-2L)))))).x))).s76, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x6E11B995L))))).yyxx, ((VECTOR(int32_t, 4))(0L))))).y)), ((VECTOR(int32_t, 4))(0L)), 0L)).even, ((VECTOR(int32_t, 4))((-1L)))))).lo)).yyxxxyxx, ((VECTOR(int32_t, 8))(0x46760B6CL))))).s22)).odd;
                }
                else
                { /* block id: 74 */
                    uint32_t l_181 = 1UL;
                    int32_t l_188 = 0x0FDE0F2DL;
                    int32_t *l_187 = &l_188;
                    l_161.w = l_181;
                    for (l_181 = 11; (l_181 == 36); ++l_181)
                    { /* block id: 78 */
                        union U7 l_185 = {0};/* VOLATILE GLOBAL l_185 */
                        union U7 *l_184[7][7] = {{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185},{(void*)0,&l_185,&l_185,(void*)0,(void*)0,&l_185,&l_185}};
                        union U7 *l_186 = (void*)0;
                        int i, j;
                        l_186 = (l_184[0][4] = l_184[0][4]);
                        l_161.x = (-2L);
                    }
                    l_187 = l_187;
                    l_161.w &= 0L;
                }
                l_161.w &= 0x41FB8274L;
            }
            unsigned int result = 0;
            result += l_85;
            result += l_86;
            int l_87_i0, l_87_i1, l_87_i2;
            for (l_87_i0 = 0; l_87_i0 < 1; l_87_i0++) {
                for (l_87_i1 = 0; l_87_i1 < 7; l_87_i1++) {
                    for (l_87_i2 = 0; l_87_i2 < 7; l_87_i2++) {
                        result += l_87[l_87_i0][l_87_i1][l_87_i2];
                    }
                }
            }
            result += l_88;
            result += l_89;
            result += l_90;
            result += l_91;
            result += l_92;
            result += l_93;
            result += l_94;
            result += l_97;
            result += l_98;
            atomic_add(&p_550->g_special_values[71 * get_linear_group_id() + 62], result);
        }
        else
        { /* block id: 88 */
            (1 + 1);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_550->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 156)), permutations[(safe_mod_func_uint32_t_u_u((l_189 , ((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_550->g_214 &= ((p_550->g_71 = ((safe_mul_func_int8_t_s_s(l_48, ((((-5L) >= (l_48 | (safe_mod_func_uint64_t_u_u((p_550->g_212 = (safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int8_t_s_s(l_189.f0, (((p_550->g_206[0][0] = ((*l_203) = l_202)) == (p_550->g_207 , l_208[3][2])) || ((void*)0 == l_209)))) >= l_211) || p_550->g_57) >= 0x0FL), p_550->g_76.f0))), p_550->g_76.f0)))) > 6UL) , 0UL))) && p_550->g_2)) < 0x6CE27E5EL)), p_550->g_4)), p_550->g_72)) > l_215[6][2][0])), 10))][(safe_mod_func_uint32_t_u_u(p_550->tid, 156))]));
    }
    --l_216;
    return p_550->g_214;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_78
 * writes: p_550->g_79
 */
int32_t  func_42(union U3 * p_43, struct S8 * p_550)
{ /* block id: 18 */
    int32_t *l_77 = (void*)0;
    int32_t l_80 = 1L;
    (*p_550->g_78) = l_77;
    return l_80;
}


/* ------------------------------------------ */
/* 
 * reads : p_550->g_3 p_550->g_4 p_550->g_57 p_550->l_comm_values p_550->g_comm_values p_550->g_72 p_550->g_75
 * writes: p_550->g_50 p_550->g_57 p_550->g_59 p_550->g_72
 */
union U3 * func_44(int8_t * p_45, int64_t  p_46, struct S8 * p_550)
{ /* block id: 10 */
    int32_t *l_49[3][2][9] = {{{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0},{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0}},{{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0},{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0}},{{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0},{(void*)0,(void*)0,&p_550->g_50,&p_550->g_50,&p_550->g_4,&p_550->g_4,&p_550->g_50,&p_550->g_50,(void*)0}}};
    VECTOR(uint64_t, 8) l_51 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE9426CEFC6E20B39L), 0xE9426CEFC6E20B39L), 0xE9426CEFC6E20B39L, 18446744073709551615UL, 0xE9426CEFC6E20B39L);
    VECTOR(uint64_t, 2) l_52 = (VECTOR(uint64_t, 2))(0x7F9BD85DD727AB81L, 4UL);
    VECTOR(uint8_t, 2) l_55 = (VECTOR(uint8_t, 2))(250UL, 0xBAL);
    uint32_t *l_56 = &p_550->g_57;
    uint32_t *l_58 = &p_550->g_59[4][1][1];
    VECTOR(uint64_t, 8) l_60 = (VECTOR(uint64_t, 8))(0xCC6C9DB4546B77D8L, (VECTOR(uint64_t, 4))(0xCC6C9DB4546B77D8L, (VECTOR(uint64_t, 2))(0xCC6C9DB4546B77D8L, 1UL), 1UL), 1UL, 0xCC6C9DB4546B77D8L, 1UL);
    VECTOR(uint64_t, 8) l_61 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 9UL), 9UL), 9UL, 18446744073709551615UL, 9UL);
    VECTOR(uint64_t, 16) l_62 = (VECTOR(uint64_t, 16))(0xB25A596DEF04E4CAL, (VECTOR(uint64_t, 4))(0xB25A596DEF04E4CAL, (VECTOR(uint64_t, 2))(0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL), 0xE7F6328DA4CDC86DL), 0xE7F6328DA4CDC86DL, 0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL, (VECTOR(uint64_t, 2))(0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL), (VECTOR(uint64_t, 2))(0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL), 0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL, 0xB25A596DEF04E4CAL, 0xE7F6328DA4CDC86DL);
    union U5 l_65[7][10][3] = {{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}},{{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}},{{0x75L},{0x1DL},{0xCEL}}}};
    VECTOR(uint8_t, 8) l_66 = (VECTOR(uint8_t, 8))(0xD9L, (VECTOR(uint8_t, 4))(0xD9L, (VECTOR(uint8_t, 2))(0xD9L, 0UL), 0UL), 0UL, 0xD9L, 0UL);
    int64_t l_69 = 5L;
    uint8_t l_70 = 0UL;
    int i, j, k;
    p_550->g_50 = 0x46E1D67AL;
    l_70 |= ((~((((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 8))(l_51.s53115774)).s46, ((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))(p_550->g_3, (7L || p_550->g_3), 0UL, ((VECTOR(uint64_t, 2))(l_52.yy)), ((VECTOR(uint64_t, 2))(0xAC86E89BE308DDD7L, 0x251A6545545654A1L)).hi, 0UL, 1UL)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(18446744073709551606UL, ((safe_rshift_func_int16_t_s_s(((p_46 > ((VECTOR(uint8_t, 4))(l_55.xyyy)).w) | 0xC63F78CAL), 10)) < ((*l_58) = ((*l_56) = ((void*)0 == p_45)))), ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(l_60.s7506602431735050)).s55, ((VECTOR(uint64_t, 2))(l_61.s06))))), 18446744073709551611UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(0xD0A58DE384C7D0E7L, ((VECTOR(uint64_t, 8))(l_62.s9e1b0f05)), (safe_lshift_func_int16_t_s_u(((p_550->g_50 = ((FAKE_DIVERGE(p_550->group_2_offset, get_group_id(2), 10) && (((((l_65[3][4][0] , ((((VECTOR(uint8_t, 2))(l_66.s75)).hi <= (safe_lshift_func_uint16_t_u_u(p_550->g_4, p_550->g_57))) & p_46)) , (void*)0) == &p_550->g_41) >= 0xC6L) && 0UL)) < p_550->l_comm_values[(safe_mod_func_uint32_t_u_u(p_550->tid, 156))])) | p_46), 6)), 0x1AF31AB994F54D63L, 0x79D16154EA94EDB4L, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x5FEA07040CCA842DL, 0xD406D4EB3E5EB5CEL)).s3a63)), ((VECTOR(uint64_t, 2))(0x7434CA839EF24C43L)), 0xC553FEA944068BD6L, 0UL)), l_69, 0UL, 0x6C4368EC64C767A1L)))).even))).lo, ((VECTOR(uint64_t, 4))(0x67B2D6F4160CA180L))))).wwxxxwxywzxwwyww)).even, ((VECTOR(uint64_t, 8))(0x265E09581AD2EC94L))))).s64))).hi | p_550->g_4) && p_550->g_comm_values[p_550->tid])) & GROUP_DIVERGE(1, 1));
    ++p_550->g_72;
    return p_550->g_75;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[71];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 71; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[156];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 156; i++)
            l_comm_values[i] = 1;
    struct S8 c_551;
    struct S8* p_550 = &c_551;
    struct S8 c_552 = {
        0x3D4E677BL, // p_550->g_2
        0L, // p_550->g_3
        0x61F6F084L, // p_550->g_4
        (void*)0, // p_550->g_41
        (-1L), // p_550->g_50
        8UL, // p_550->g_57
        {{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}},{{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL},{0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL,0x8A9CBEBAL,0x3649E8EEL,0x3649E8EEL}}}, // p_550->g_59
        0x6AAB991CL, // p_550->g_71
        0x583F0299L, // p_550->g_72
        {0L}, // p_550->g_76
        &p_550->g_76, // p_550->g_75
        &p_550->g_50, // p_550->g_79
        &p_550->g_79, // p_550->g_78
        {{&p_550->g_79}}, // p_550->g_206
        {0}, // p_550->g_207
        0x3BL, // p_550->g_210
        0x8391L, // p_550->g_212
        0x60L, // p_550->g_214
        0x49B13667L, // p_550->g_220
        &p_550->g_220, // p_550->g_219
        (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 5L), 5L), 5L, 8L, 5L), // p_550->g_224
        &p_550->g_71, // p_550->g_229
        4294967295UL, // p_550->g_231
        (VECTOR(int8_t, 8))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 0x74L), 0x74L), 0x74L, 0x69L, 0x74L), // p_550->g_234
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x50L), 0x50L), 0x50L, (-1L), 0x50L), // p_550->g_236
        {{0x5FL},{0x5FL},{0x5FL},{0x5FL},{0x5FL},{0x5FL},{0x5FL},{0x5FL},{0x5FL}}, // p_550->g_284
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_550->g_288
        (void*)0, // p_550->g_289
        {254UL}, // p_550->g_306
        &p_550->g_306, // p_550->g_305
        {4UL}, // p_550->g_310
        0x60BEA343ECA00C95L, // p_550->g_332
        (VECTOR(int8_t, 8))(0x3DL, (VECTOR(int8_t, 4))(0x3DL, (VECTOR(int8_t, 2))(0x3DL, (-1L)), (-1L)), (-1L), 0x3DL, (-1L)), // p_550->g_352
        &p_550->g_71, // p_550->g_356
        {{0x79A72F8EL},{0x79A72F8EL},{0x79A72F8EL},{0x79A72F8EL},{0x79A72F8EL},{0x79A72F8EL}}, // p_550->g_357
        &p_550->g_50, // p_550->g_360
        {0}, // p_550->g_387
        {0xED384501L}, // p_550->g_413
        &p_550->g_413, // p_550->g_412
        &p_550->g_75, // p_550->g_415
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 9UL), 9UL), 9UL, 4294967295UL, 9UL, (VECTOR(uint32_t, 2))(4294967295UL, 9UL), (VECTOR(uint32_t, 2))(4294967295UL, 9UL), 4294967295UL, 9UL, 4294967295UL, 9UL), // p_550->g_422
        &p_550->g_206[0][0], // p_550->g_432
        (VECTOR(uint16_t, 2))(0x38C7L, 0UL), // p_550->g_436
        {0}, // p_550->g_442
        &p_550->g_442, // p_550->g_441
        0x6297CCEA3C16ED9EL, // p_550->g_479
        &p_550->g_479, // p_550->g_478
        (VECTOR(uint8_t, 16))(0x70L, (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 253UL), 253UL), 253UL, 0x70L, 253UL, (VECTOR(uint8_t, 2))(0x70L, 253UL), (VECTOR(uint8_t, 2))(0x70L, 253UL), 0x70L, 253UL, 0x70L, 253UL), // p_550->g_480
        {0xA1CC4643L}, // p_550->g_483
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7059410DL), 0x7059410DL), // p_550->g_487
        (VECTOR(int8_t, 2))(1L, (-3L)), // p_550->g_505
        (VECTOR(uint16_t, 2))(65535UL, 9UL), // p_550->g_508
        {0}, // p_550->g_510
        (-1L), // p_550->g_514
        (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), // p_550->g_523
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x4BEC45E6L), 0x4BEC45E6L), 0x4BEC45E6L, 7L, 0x4BEC45E6L), // p_550->g_524
        (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x1A8FA3ECL), 0x1A8FA3ECL), 0x1A8FA3ECL, 6L, 0x1A8FA3ECL), // p_550->g_525
        (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), 4294967295UL), // p_550->g_526
        0, // p_550->v_collective
        sequence_input[get_global_id(0)], // p_550->global_0_offset
        sequence_input[get_global_id(1)], // p_550->global_1_offset
        sequence_input[get_global_id(2)], // p_550->global_2_offset
        sequence_input[get_local_id(0)], // p_550->local_0_offset
        sequence_input[get_local_id(1)], // p_550->local_1_offset
        sequence_input[get_local_id(2)], // p_550->local_2_offset
        sequence_input[get_group_id(0)], // p_550->group_0_offset
        sequence_input[get_group_id(1)], // p_550->group_1_offset
        sequence_input[get_group_id(2)], // p_550->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 156)), permutations[0][get_linear_local_id()])), // p_550->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_551 = c_552;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_550);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_550->g_2, "p_550->g_2", print_hash_value);
    transparent_crc(p_550->g_3, "p_550->g_3", print_hash_value);
    transparent_crc(p_550->g_4, "p_550->g_4", print_hash_value);
    transparent_crc(p_550->g_50, "p_550->g_50", print_hash_value);
    transparent_crc(p_550->g_57, "p_550->g_57", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_550->g_59[i][j][k], "p_550->g_59[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_550->g_71, "p_550->g_71", print_hash_value);
    transparent_crc(p_550->g_72, "p_550->g_72", print_hash_value);
    transparent_crc(p_550->g_76.f0, "p_550->g_76.f0", print_hash_value);
    transparent_crc(p_550->g_210, "p_550->g_210", print_hash_value);
    transparent_crc(p_550->g_212, "p_550->g_212", print_hash_value);
    transparent_crc(p_550->g_214, "p_550->g_214", print_hash_value);
    transparent_crc(p_550->g_220, "p_550->g_220", print_hash_value);
    transparent_crc(p_550->g_224.s0, "p_550->g_224.s0", print_hash_value);
    transparent_crc(p_550->g_224.s1, "p_550->g_224.s1", print_hash_value);
    transparent_crc(p_550->g_224.s2, "p_550->g_224.s2", print_hash_value);
    transparent_crc(p_550->g_224.s3, "p_550->g_224.s3", print_hash_value);
    transparent_crc(p_550->g_224.s4, "p_550->g_224.s4", print_hash_value);
    transparent_crc(p_550->g_224.s5, "p_550->g_224.s5", print_hash_value);
    transparent_crc(p_550->g_224.s6, "p_550->g_224.s6", print_hash_value);
    transparent_crc(p_550->g_224.s7, "p_550->g_224.s7", print_hash_value);
    transparent_crc(p_550->g_231, "p_550->g_231", print_hash_value);
    transparent_crc(p_550->g_234.s0, "p_550->g_234.s0", print_hash_value);
    transparent_crc(p_550->g_234.s1, "p_550->g_234.s1", print_hash_value);
    transparent_crc(p_550->g_234.s2, "p_550->g_234.s2", print_hash_value);
    transparent_crc(p_550->g_234.s3, "p_550->g_234.s3", print_hash_value);
    transparent_crc(p_550->g_234.s4, "p_550->g_234.s4", print_hash_value);
    transparent_crc(p_550->g_234.s5, "p_550->g_234.s5", print_hash_value);
    transparent_crc(p_550->g_234.s6, "p_550->g_234.s6", print_hash_value);
    transparent_crc(p_550->g_234.s7, "p_550->g_234.s7", print_hash_value);
    transparent_crc(p_550->g_236.s0, "p_550->g_236.s0", print_hash_value);
    transparent_crc(p_550->g_236.s1, "p_550->g_236.s1", print_hash_value);
    transparent_crc(p_550->g_236.s2, "p_550->g_236.s2", print_hash_value);
    transparent_crc(p_550->g_236.s3, "p_550->g_236.s3", print_hash_value);
    transparent_crc(p_550->g_236.s4, "p_550->g_236.s4", print_hash_value);
    transparent_crc(p_550->g_236.s5, "p_550->g_236.s5", print_hash_value);
    transparent_crc(p_550->g_236.s6, "p_550->g_236.s6", print_hash_value);
    transparent_crc(p_550->g_236.s7, "p_550->g_236.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_550->g_284[i].f0, "p_550->g_284[i].f0", print_hash_value);

    }
    transparent_crc(p_550->g_306.f0, "p_550->g_306.f0", print_hash_value);
    transparent_crc(p_550->g_332, "p_550->g_332", print_hash_value);
    transparent_crc(p_550->g_352.s0, "p_550->g_352.s0", print_hash_value);
    transparent_crc(p_550->g_352.s1, "p_550->g_352.s1", print_hash_value);
    transparent_crc(p_550->g_352.s2, "p_550->g_352.s2", print_hash_value);
    transparent_crc(p_550->g_352.s3, "p_550->g_352.s3", print_hash_value);
    transparent_crc(p_550->g_352.s4, "p_550->g_352.s4", print_hash_value);
    transparent_crc(p_550->g_352.s5, "p_550->g_352.s5", print_hash_value);
    transparent_crc(p_550->g_352.s6, "p_550->g_352.s6", print_hash_value);
    transparent_crc(p_550->g_352.s7, "p_550->g_352.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_550->g_357[i].f0, "p_550->g_357[i].f0", print_hash_value);

    }
    transparent_crc(p_550->g_413.f0, "p_550->g_413.f0", print_hash_value);
    transparent_crc(p_550->g_422.s0, "p_550->g_422.s0", print_hash_value);
    transparent_crc(p_550->g_422.s1, "p_550->g_422.s1", print_hash_value);
    transparent_crc(p_550->g_422.s2, "p_550->g_422.s2", print_hash_value);
    transparent_crc(p_550->g_422.s3, "p_550->g_422.s3", print_hash_value);
    transparent_crc(p_550->g_422.s4, "p_550->g_422.s4", print_hash_value);
    transparent_crc(p_550->g_422.s5, "p_550->g_422.s5", print_hash_value);
    transparent_crc(p_550->g_422.s6, "p_550->g_422.s6", print_hash_value);
    transparent_crc(p_550->g_422.s7, "p_550->g_422.s7", print_hash_value);
    transparent_crc(p_550->g_422.s8, "p_550->g_422.s8", print_hash_value);
    transparent_crc(p_550->g_422.s9, "p_550->g_422.s9", print_hash_value);
    transparent_crc(p_550->g_422.sa, "p_550->g_422.sa", print_hash_value);
    transparent_crc(p_550->g_422.sb, "p_550->g_422.sb", print_hash_value);
    transparent_crc(p_550->g_422.sc, "p_550->g_422.sc", print_hash_value);
    transparent_crc(p_550->g_422.sd, "p_550->g_422.sd", print_hash_value);
    transparent_crc(p_550->g_422.se, "p_550->g_422.se", print_hash_value);
    transparent_crc(p_550->g_422.sf, "p_550->g_422.sf", print_hash_value);
    transparent_crc(p_550->g_436.x, "p_550->g_436.x", print_hash_value);
    transparent_crc(p_550->g_436.y, "p_550->g_436.y", print_hash_value);
    transparent_crc(p_550->g_479, "p_550->g_479", print_hash_value);
    transparent_crc(p_550->g_480.s0, "p_550->g_480.s0", print_hash_value);
    transparent_crc(p_550->g_480.s1, "p_550->g_480.s1", print_hash_value);
    transparent_crc(p_550->g_480.s2, "p_550->g_480.s2", print_hash_value);
    transparent_crc(p_550->g_480.s3, "p_550->g_480.s3", print_hash_value);
    transparent_crc(p_550->g_480.s4, "p_550->g_480.s4", print_hash_value);
    transparent_crc(p_550->g_480.s5, "p_550->g_480.s5", print_hash_value);
    transparent_crc(p_550->g_480.s6, "p_550->g_480.s6", print_hash_value);
    transparent_crc(p_550->g_480.s7, "p_550->g_480.s7", print_hash_value);
    transparent_crc(p_550->g_480.s8, "p_550->g_480.s8", print_hash_value);
    transparent_crc(p_550->g_480.s9, "p_550->g_480.s9", print_hash_value);
    transparent_crc(p_550->g_480.sa, "p_550->g_480.sa", print_hash_value);
    transparent_crc(p_550->g_480.sb, "p_550->g_480.sb", print_hash_value);
    transparent_crc(p_550->g_480.sc, "p_550->g_480.sc", print_hash_value);
    transparent_crc(p_550->g_480.sd, "p_550->g_480.sd", print_hash_value);
    transparent_crc(p_550->g_480.se, "p_550->g_480.se", print_hash_value);
    transparent_crc(p_550->g_480.sf, "p_550->g_480.sf", print_hash_value);
    transparent_crc(p_550->g_483.f0, "p_550->g_483.f0", print_hash_value);
    transparent_crc(p_550->g_487.x, "p_550->g_487.x", print_hash_value);
    transparent_crc(p_550->g_487.y, "p_550->g_487.y", print_hash_value);
    transparent_crc(p_550->g_487.z, "p_550->g_487.z", print_hash_value);
    transparent_crc(p_550->g_487.w, "p_550->g_487.w", print_hash_value);
    transparent_crc(p_550->g_505.x, "p_550->g_505.x", print_hash_value);
    transparent_crc(p_550->g_505.y, "p_550->g_505.y", print_hash_value);
    transparent_crc(p_550->g_508.x, "p_550->g_508.x", print_hash_value);
    transparent_crc(p_550->g_508.y, "p_550->g_508.y", print_hash_value);
    transparent_crc(p_550->g_514, "p_550->g_514", print_hash_value);
    transparent_crc(p_550->g_523.x, "p_550->g_523.x", print_hash_value);
    transparent_crc(p_550->g_523.y, "p_550->g_523.y", print_hash_value);
    transparent_crc(p_550->g_523.z, "p_550->g_523.z", print_hash_value);
    transparent_crc(p_550->g_523.w, "p_550->g_523.w", print_hash_value);
    transparent_crc(p_550->g_524.s0, "p_550->g_524.s0", print_hash_value);
    transparent_crc(p_550->g_524.s1, "p_550->g_524.s1", print_hash_value);
    transparent_crc(p_550->g_524.s2, "p_550->g_524.s2", print_hash_value);
    transparent_crc(p_550->g_524.s3, "p_550->g_524.s3", print_hash_value);
    transparent_crc(p_550->g_524.s4, "p_550->g_524.s4", print_hash_value);
    transparent_crc(p_550->g_524.s5, "p_550->g_524.s5", print_hash_value);
    transparent_crc(p_550->g_524.s6, "p_550->g_524.s6", print_hash_value);
    transparent_crc(p_550->g_524.s7, "p_550->g_524.s7", print_hash_value);
    transparent_crc(p_550->g_525.s0, "p_550->g_525.s0", print_hash_value);
    transparent_crc(p_550->g_525.s1, "p_550->g_525.s1", print_hash_value);
    transparent_crc(p_550->g_525.s2, "p_550->g_525.s2", print_hash_value);
    transparent_crc(p_550->g_525.s3, "p_550->g_525.s3", print_hash_value);
    transparent_crc(p_550->g_525.s4, "p_550->g_525.s4", print_hash_value);
    transparent_crc(p_550->g_525.s5, "p_550->g_525.s5", print_hash_value);
    transparent_crc(p_550->g_525.s6, "p_550->g_525.s6", print_hash_value);
    transparent_crc(p_550->g_525.s7, "p_550->g_525.s7", print_hash_value);
    transparent_crc(p_550->g_526.x, "p_550->g_526.x", print_hash_value);
    transparent_crc(p_550->g_526.y, "p_550->g_526.y", print_hash_value);
    transparent_crc(p_550->g_526.z, "p_550->g_526.z", print_hash_value);
    transparent_crc(p_550->g_526.w, "p_550->g_526.w", print_hash_value);
    transparent_crc(p_550->v_collective, "p_550->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 71; i++)
            transparent_crc(p_550->g_special_values[i + 71 * get_linear_group_id()], "p_550->g_special_values[i + 71 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 71; i++)
            transparent_crc(p_550->l_special_values[i], "p_550->l_special_values[i]", print_hash_value);
    transparent_crc(p_550->l_comm_values[get_linear_local_id()], "p_550->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_550->g_comm_values[get_linear_group_id() * 156 + get_linear_local_id()], "p_550->g_comm_values[get_linear_group_id() * 156 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
