// --atomics 80 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,61,1 -l 87,1,1
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

__constant uint32_t permutations[10][87] = {
{30,75,53,1,56,31,63,40,65,26,62,22,36,6,73,8,69,74,77,35,52,41,7,37,51,18,2,5,43,83,68,70,57,55,85,33,12,16,46,78,20,60,84,76,29,21,15,81,28,42,54,67,80,50,0,34,48,44,17,64,23,38,25,66,49,71,13,4,32,86,59,3,11,10,14,47,39,72,27,58,61,9,19,24,79,45,82}, // permutation 0
{27,73,84,53,36,39,12,37,72,63,66,48,46,57,50,7,58,69,86,67,0,21,19,76,61,4,47,33,38,41,2,52,43,80,54,68,51,56,60,1,20,13,45,22,75,6,70,35,55,82,40,78,65,15,5,49,29,10,16,74,14,31,42,77,18,71,9,83,17,64,30,81,3,24,62,59,34,23,28,79,11,25,44,85,26,32,8}, // permutation 1
{71,78,72,66,81,83,19,5,62,47,45,69,23,68,49,59,42,76,85,84,61,21,57,2,75,25,9,52,54,63,60,34,15,8,24,48,30,31,53,73,33,41,37,14,10,64,43,28,11,36,29,74,16,40,58,32,77,35,67,80,51,70,50,38,26,12,46,44,7,3,1,13,65,56,6,18,22,0,55,27,79,4,86,20,39,17,82}, // permutation 2
{28,17,22,53,55,80,7,72,35,16,8,26,78,30,34,19,47,23,51,74,56,75,70,40,0,84,15,85,10,81,2,45,1,59,18,9,71,14,21,54,11,73,61,57,38,5,37,32,27,58,36,43,3,66,62,13,24,44,31,33,50,63,6,39,77,64,52,49,46,20,86,83,41,12,48,29,25,60,65,42,4,76,69,68,82,67,79}, // permutation 3
{6,2,80,85,43,82,20,52,41,69,76,71,63,17,46,5,4,9,8,21,15,84,39,77,32,10,66,13,47,48,7,44,45,74,23,62,65,60,53,51,38,27,70,29,64,81,56,33,35,12,67,58,30,36,73,34,31,18,28,83,24,78,86,22,19,3,42,37,25,59,50,55,0,1,40,68,54,16,49,14,57,75,11,61,72,79,26}, // permutation 4
{79,59,21,13,55,18,63,19,24,16,85,30,0,5,48,4,32,84,41,26,31,11,76,27,1,61,25,62,80,15,50,82,54,51,78,71,42,8,40,14,81,64,65,86,34,60,35,46,66,68,83,6,37,49,73,12,52,58,72,17,74,20,23,56,69,44,33,53,67,47,10,39,38,28,36,9,3,2,43,77,57,75,70,45,29,7,22}, // permutation 5
{27,67,35,9,43,63,41,48,77,47,39,84,19,31,76,25,18,75,55,24,8,68,83,38,78,10,21,17,79,7,0,74,58,1,32,34,73,64,29,50,14,23,72,2,44,40,6,46,80,22,82,36,51,4,49,16,85,30,33,3,56,26,42,62,61,37,28,11,59,81,69,86,53,54,13,60,45,20,71,15,5,70,66,52,57,12,65}, // permutation 6
{23,73,81,64,77,63,7,34,60,44,1,65,29,22,84,10,3,56,86,61,66,27,50,49,57,25,79,15,32,47,35,75,62,21,40,2,9,48,12,28,37,54,11,71,83,46,55,53,51,82,42,5,72,67,41,0,18,69,36,4,74,31,39,17,43,20,68,76,52,70,24,6,33,38,30,16,78,19,80,85,26,13,8,58,45,14,59}, // permutation 7
{10,75,25,13,17,85,34,0,86,24,49,19,54,4,76,58,6,83,9,46,61,11,64,12,39,66,8,16,20,14,30,79,72,33,65,35,31,21,55,41,70,43,32,22,38,62,26,52,78,77,48,74,29,73,23,57,7,42,28,3,59,60,51,71,45,44,47,36,84,56,81,82,69,18,67,40,68,15,5,2,63,50,37,1,27,53,80}, // permutation 8
{82,66,43,14,32,21,76,29,40,30,52,60,16,74,10,63,53,69,26,23,71,48,56,70,80,7,45,61,35,42,5,65,13,49,17,0,85,47,68,83,39,67,24,22,62,12,6,20,33,51,75,11,38,50,46,41,18,44,58,1,28,54,78,19,3,79,2,72,73,59,9,36,77,15,37,81,64,55,31,57,84,27,4,8,34,86,25} // permutation 9
};

// Seed: 2918693816

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int16_t  f1;
   uint8_t  f2;
   volatile uint64_t  f3;
   int32_t  f4;
   int32_t  f5;
   volatile uint32_t  f6;
};

struct S1 {
    volatile VECTOR(int64_t, 4) g_21;
    int32_t g_36;
    int32_t *g_38;
    int16_t g_39;
    struct S0 g_42[5];
    volatile VECTOR(int16_t, 16) g_56;
    volatile int64_t *g_57[2];
    uint32_t g_90;
    int32_t g_94;
    volatile uint64_t g_97;
    struct S0 g_100;
    struct S0 g_188;
    VECTOR(int8_t, 16) g_208;
    uint8_t g_214;
    volatile int8_t *g_223;
    uint64_t g_231;
    uint16_t g_233[2][7][6];
    int32_t g_237;
    int64_t g_252;
    VECTOR(uint64_t, 16) g_253;
    volatile struct S0 g_256;
    volatile int64_t g_294;
    volatile int16_t g_297;
    VECTOR(uint32_t, 16) g_353;
    VECTOR(uint32_t, 2) g_354;
    volatile VECTOR(uint32_t, 16) g_355;
    VECTOR(uint32_t, 2) g_357;
    int32_t **g_365;
    int32_t *** volatile g_364[4];
    int32_t ***g_369[2][1][3];
    int8_t *g_419;
    struct S0 g_448;
    struct S0 g_449;
    volatile VECTOR(int32_t, 2) g_450;
    volatile int8_t g_493;
    struct S0 g_498;
    struct S0 g_500;
    volatile struct S0 g_525;
    volatile struct S0 g_550;
    uint32_t g_562;
    int32_t g_570;
    uint64_t g_592;
    volatile uint32_t g_603;
    struct S0 g_612;
    VECTOR(uint32_t, 2) g_616;
    VECTOR(uint32_t, 8) g_617;
    VECTOR(uint64_t, 16) g_618;
    VECTOR(uint8_t, 8) g_639;
    VECTOR(int32_t, 2) g_656;
    VECTOR(uint16_t, 16) g_726;
    volatile VECTOR(uint16_t, 16) g_727;
    volatile VECTOR(uint16_t, 8) g_728;
    VECTOR(uint32_t, 8) g_737;
    int8_t ** volatile g_747;
    int8_t ** volatile *g_746;
    struct S0 *g_750;
    struct S0 ** volatile g_749;
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
uint64_t  func_1(struct S1 * p_812);
struct S0  func_5(uint8_t  p_6, uint32_t  p_7, struct S1 * p_812);
struct S0  func_8(uint64_t  p_9, uint64_t  p_10, int32_t  p_11, uint16_t  p_12, int32_t  p_13, struct S1 * p_812);
int32_t  func_16(int8_t  p_17, struct S1 * p_812);
int32_t * func_43(int32_t ** p_44, int16_t  p_45, int64_t  p_46, struct S1 * p_812);
uint32_t  func_48(uint8_t  p_49, uint32_t  p_50, int32_t  p_51, struct S1 * p_812);
int32_t * func_65(uint64_t  p_66, uint32_t  p_67, uint64_t  p_68, int32_t ** p_69, uint64_t  p_70, struct S1 * p_812);
struct S0  func_73(uint64_t  p_74, struct S1 * p_812);
uint32_t  func_190(int64_t * p_191, int8_t  p_192, int32_t ** p_193, int8_t  p_194, struct S1 * p_812);
int64_t * func_195(int32_t  p_196, uint32_t  p_197, uint16_t  p_198, int32_t * p_199, uint64_t  p_200, struct S1 * p_812);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_812->l_comm_values p_812->g_21 p_812->g_39 p_812->g_42 p_812->g_56 p_812->g_57 p_812->g_90 p_812->g_97 p_812->g_100 p_812->g_94 p_812->g_188 p_812->g_208 p_812->g_223 p_812->g_comm_values p_812->g_214 p_812->g_253 p_812->g_256 p_812->g_231 p_812->g_237 p_812->g_357 p_812->g_419 p_812->g_38 p_812->g_448 p_812->g_449 p_812->g_450 p_812->g_498 p_812->g_525 p_812->g_500 p_812->g_550 p_812->g_294 p_812->g_353 p_812->g_592 p_812->g_603 p_812->g_612 p_812->g_616 p_812->g_617 p_812->g_618 p_812->g_639 p_812->g_656 p_812->g_233 p_812->g_726 p_812->g_727 p_812->g_728 p_812->g_737 p_812->g_746 p_812->g_749
 * writes: p_812->g_36 p_812->g_38 p_812->g_39 p_812->g_90 p_812->g_97 p_812->g_100.f2 p_812->g_94 p_812->g_42.f2 p_812->g_214 p_812->g_208 p_812->g_231 p_812->g_233 p_812->g_253 p_812->g_256 p_812->g_252 p_812->g_42.f0 p_812->g_188.f1 p_812->g_237 p_812->g_369 p_812->g_419 p_812->g_188.f5 p_812->g_500 p_812->g_498.f0 p_812->g_188.f0 p_812->g_498.f1 p_812->g_562 p_812->g_448 p_812->g_592 p_812->g_603 p_812->g_354 p_812->g_749
 */
uint64_t  func_1(struct S1 * p_812)
{ /* block id: 4 */
    int32_t l_4 = 0L;
    uint32_t l_15 = 0xC9B996A5L;
    int16_t *l_526 = (void*)0;
    int16_t l_532 = (-7L);
    int32_t l_567 = 0L;
    int32_t l_569 = 0x29F8E10FL;
    int32_t l_571[2][7][7] = {{{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L}},{{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L},{0x2A521685L,0x6EF2D933L,5L,0x0463980DL,0x0408AA13L,0x0463980DL,5L}}};
    VECTOR(uint8_t, 16) l_640 = (VECTOR(uint8_t, 16))(0x89L, (VECTOR(uint8_t, 4))(0x89L, (VECTOR(uint8_t, 2))(0x89L, 0x0BL), 0x0BL), 0x0BL, 0x89L, 0x0BL, (VECTOR(uint8_t, 2))(0x89L, 0x0BL), (VECTOR(uint8_t, 2))(0x89L, 0x0BL), 0x89L, 0x0BL, 0x89L, 0x0BL);
    VECTOR(uint8_t, 8) l_641 = (VECTOR(uint8_t, 8))(0x16L, (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 0xE9L), 0xE9L), 0xE9L, 0x16L, 0xE9L);
    uint32_t l_648 = 1UL;
    VECTOR(int64_t, 8) l_655 = (VECTOR(int64_t, 8))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x6CE07860B67F3DBBL), 0x6CE07860B67F3DBBL), 0x6CE07860B67F3DBBL, (-8L), 0x6CE07860B67F3DBBL);
    VECTOR(uint8_t, 8) l_659 = (VECTOR(uint8_t, 8))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 3UL), 3UL), 3UL, 0xFDL, 3UL);
    uint8_t l_666 = 0xD3L;
    int32_t l_669 = 0x482EA421L;
    int8_t ***l_745[1];
    uint64_t *l_748 = (void*)0;
    struct S0 ** volatile *l_751 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_745[i] = (void*)0;
    if ((safe_mod_func_uint8_t_u_u(p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 87))], l_4)))
    { /* block id: 5 */
        uint16_t l_14 = 0xB0BEL;
        struct S0 *l_499[9] = {(void*)0,&p_812->g_42[3],(void*)0,(void*)0,&p_812->g_42[3],(void*)0,(void*)0,&p_812->g_42[3],(void*)0};
        int32_t l_564 = 0x392DAFD0L;
        int32_t l_565 = 0x15666F80L;
        int32_t l_572[4][1][10];
        int8_t l_575 = (-3L);
        uint8_t l_615[5] = {251UL,251UL,251UL,251UL,251UL};
        VECTOR(uint8_t, 2) l_638 = (VECTOR(uint8_t, 2))(0xBEL, 0UL);
        uint8_t *l_664 = &p_812->g_100.f2;
        int32_t **l_665 = &p_812->g_38;
        int64_t *l_667[10][9] = {{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252},{&p_812->g_252,(void*)0,(void*)0,&p_812->g_252,(void*)0,&p_812->g_252,&p_812->g_252,(void*)0,&p_812->g_252}};
        uint64_t *l_668 = &p_812->g_231;
        int32_t *l_670 = &l_4;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 10; k++)
                    l_572[i][j][k] = 0x1B57BBF1L;
            }
        }
        p_812->g_500 = func_5((((((func_8(l_14, l_14, (p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 87))] , 0x43D6C1DFL), l_14, l_15, p_812) , p_812->g_449.f1) || (((VECTOR(int32_t, 16))(p_812->g_450.yyxxyxxyxxyyxyxx)).sb <= (l_4 ^ 4294967289UL))) , p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 87))]) == 1L) , l_14), l_15, p_812);
        for (p_812->g_214 = 0; (p_812->g_214 > 12); p_812->g_214 = safe_add_func_int8_t_s_s(p_812->g_214, 1))
        { /* block id: 229 */
            int32_t **l_512[7][6] = {{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38},{&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38,&p_812->g_38}};
            VECTOR(uint64_t, 8) l_522 = (VECTOR(uint64_t, 8))(0xF30E4A5F9A1D0599L, (VECTOR(uint64_t, 4))(0xF30E4A5F9A1D0599L, (VECTOR(uint64_t, 2))(0xF30E4A5F9A1D0599L, 0UL), 0UL), 0UL, 0xF30E4A5F9A1D0599L, 0UL);
            int16_t *l_527 = &p_812->g_500.f1;
            uint32_t l_580 = 0x787712D3L;
            uint16_t l_631 = 1UL;
            int i, j;
            for (p_812->g_498.f0 = 0; (p_812->g_498.f0 >= (-21)); p_812->g_498.f0 = safe_sub_func_uint16_t_u_u(p_812->g_498.f0, 1))
            { /* block id: 232 */
                int32_t **l_511 = &p_812->g_38;
                int8_t l_521 = 0L;
                l_521 ^= (safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(1L, (safe_sub_func_int64_t_s_s(((l_511 == l_512[4][2]) , ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_15, ((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((&p_812->g_365 != (((0x50DCL & p_812->g_498.f0) || (!l_15)) , &p_812->g_365)), l_4)) , 0x764CB716L), l_4)) , l_14))), p_812->g_498.f5)) , l_15)), l_14)))), 0x5C22L));
            }
            atomic_max(&p_812->l_atomic_reduction[0], (((VECTOR(uint64_t, 16))(l_522.s5606706660076501)).s3 <= (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xA2L, 250UL)), 0x5EL, 255UL)), ((VECTOR(uint8_t, 16))(0xC0L, (safe_mul_func_uint16_t_u_u(65534UL, ((p_812->g_525 , ((l_527 = l_526) == (p_812->g_500 , &p_812->g_39))) ^ p_812->g_449.f2))), 1UL, 0UL, (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_14, ((((p_812->g_188.f6 >= (((l_14 >= 4294967294UL) & l_532) < p_812->g_448.f1)) , p_812->g_42[3].f5) , &p_812->g_97) == (void*)0))), p_812->g_498.f1)), ((VECTOR(uint8_t, 8))(0xFBL)), ((VECTOR(uint8_t, 2))(0x74L)), 2UL)).s663a))))).w || FAKE_DIVERGE(p_812->local_1_offset, get_local_id(1), 10))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_812->v_collective += p_812->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (p_812->g_188.f0 = 3; (p_812->g_188.f0 <= (-25)); p_812->g_188.f0 = safe_sub_func_uint64_t_u_u(p_812->g_188.f0, 9))
            { /* block id: 239 */
                int8_t l_535[2][1][9];
                int32_t l_538 = 0x3FAA5A11L;
                int32_t l_563[3][5][8] = {{{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL}},{{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL}},{{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL},{1L,0x0A932E24L,0x2A6DD9CFL,0x0A932E24L,1L,1L,0x0A932E24L,0x2A6DD9CFL}}};
                int32_t l_601[4];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 9; k++)
                            l_535[i][j][k] = 0L;
                    }
                }
                for (i = 0; i < 4; i++)
                    l_601[i] = 1L;
                if (l_535[1][0][3])
                { /* block id: 240 */
                    int8_t ***l_543 = (void*)0;
                    int8_t ***l_544 = (void*)0;
                    int8_t **l_546 = &p_812->g_419;
                    int8_t ***l_545 = &l_546;
                    int8_t *l_549 = &l_535[0][0][0];
                    int32_t l_551 = (-8L);
                    int32_t l_552 = (-7L);
                    int32_t l_574 = 0L;
                    int32_t l_579 = 0x679FDA58L;
                    uint8_t l_599 = 0xBFL;
                    if (((safe_div_func_uint16_t_u_u(((((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(((l_538 |= 0L) , ((l_14 >= ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((((*l_545) = &p_812->g_419) == (void*)0) < 1L) <= (l_551 = (l_14 , ((p_812->g_498.f1 = (safe_add_func_int64_t_s_s(((((*l_549) = 5L) || (p_812->g_550 , (p_812->g_294 , l_15))) , 7L), (-4L)))) || p_812->g_550.f6)))), 0x0A1DEEFDL)), 9L)) != FAKE_DIVERGE(p_812->global_2_offset, get_global_id(2), 10))) < l_552)), ((VECTOR(int64_t, 2))((-9L))), 0x7F349928B7049F5DL, 0x0CBFA58E22372C77L, 0x5E26D8A0A7F04F34L, (-2L), 5L, 5L, ((VECTOR(int64_t, 2))(1L)), 0x27302EC606E46B5CL, ((VECTOR(int64_t, 2))(0x0BDCA0C240BA4ACBL)), 0x30F058F8693902CBL, 0x18AD10C9DA043739L)).sc4))), 18446744073709551606UL, 0x775074FBEEA0EEC3L)).zxwxwwwy, ((VECTOR(uint64_t, 8))(0x16B177AD30ED89BFL))))).s7 != 0x76D75767A1C0D4EAL) || GROUP_DIVERGE(0, 1)), p_812->g_353.s8)) || p_812->g_188.f1))
                    { /* block id: 246 */
                        int32_t l_555 = 0x71DF02F1L;
                        int32_t l_560 = 0x7D4C2DA8L;
                        uint32_t *l_561 = &p_812->g_562;
                        int32_t l_566 = 7L;
                        int32_t l_568 = 0x750697A9L;
                        int32_t l_573 = 0x777D9FA2L;
                        int32_t l_576 = 0x38D9C4ABL;
                        int32_t l_577 = 0x67FA5A1DL;
                        int32_t l_578 = 0x3524BE2FL;
                        p_812->g_448 = func_5(p_812->g_188.f1, (((((safe_div_func_uint64_t_u_u(((l_555 || l_535[1][0][7]) , (p_812->g_448.f1 | 0xB8FCL)), p_812->g_100.f4)) > (safe_sub_func_int32_t_s_s((p_812->g_550 , ((safe_lshift_func_int8_t_s_s((l_560 = 0x63L), (((*l_561) = p_812->g_comm_values[p_812->tid]) , l_555))) , l_560)), GROUP_DIVERGE(2, 1)))) >= 0x17C87F0EE823839BL) , l_563[0][4][0]) < l_14), p_812);
                        l_580--;
                    }
                    else
                    { /* block id: 251 */
                        uint16_t l_583 = 0x25D3L;
                        int32_t l_584 = 0L;
                        uint16_t l_585 = 0x91BBL;
                        if (l_535[1][0][3])
                            break;
                        l_584 = l_583;
                        if (l_585)
                            break;
                        if (l_535[1][0][3])
                            break;
                    }
                    if (l_571[0][6][1])
                    { /* block id: 257 */
                        uint32_t l_586 = 9UL;
                        uint64_t *l_588 = (void*)0;
                        uint64_t **l_587[5] = {&l_588,&l_588,&l_588,&l_588,&l_588};
                        uint64_t *l_589 = &p_812->g_231;
                        uint64_t *l_590 = (void*)0;
                        uint64_t *l_591 = &p_812->g_592;
                        int32_t l_600 = (-8L);
                        int32_t l_602 = 0x675FA1E1L;
                        int i;
                        l_551 = ((l_586 , (((l_589 = &p_812->g_231) != (void*)0) || ((((func_73(((*l_591)--), p_812) , (p_812->g_498.f2 , 0x09L)) & (p_812->g_208.s4 = 0x58L)) , p_812->g_448.f3) ^ (FAKE_DIVERGE(p_812->global_1_offset, get_global_id(1), 10) , (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((p_812->g_498.f4 && 0x412BL), p_812->g_357.y)), GROUP_DIVERGE(2, 1))))))) ^ l_14);
                        l_599 = l_563[0][0][3];
                        p_812->g_603++;
                        l_569 ^= (-10L);
                    }
                    else
                    { /* block id: 265 */
                        int16_t l_606 = (-9L);
                        l_563[1][4][1] ^= l_606;
                        l_565 ^= (-1L);
                        if (l_606)
                            continue;
                    }
                }
                else
                { /* block id: 270 */
                    uint32_t *l_607 = &p_812->g_90;
                    uint64_t l_629 = 0x611C21721937E9C4L;
                    int32_t l_630 = 0x309A570BL;
                    l_630 = (((*l_607)--) >= (0x075DC564L == (p_812->g_354.y = (0x15L < ((((safe_div_func_uint16_t_u_u((p_812->g_612 , (l_564 = (~p_812->g_42[3].f1))), 0x7E32L)) == ((safe_sub_func_int8_t_s_s(l_615[2], (((VECTOR(uint64_t, 16))(0xF71305E2CC1CE748L, ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_812->g_616.yxxyyyxx)).s40)).yyxy, (uint32_t)GROUP_DIVERGE(0, 1)))).even)).yxyxxxxx, ((VECTOR(uint32_t, 16))(p_812->g_617.s5217057062411723)).odd))), 18446744073709551611UL, ((VECTOR(uint64_t, 4))(p_812->g_618.s3924)), 0x558895A997448E31L, 18446744073709551615UL)).s3 != (safe_sub_func_int64_t_s_s(0x3A803E2F2B28BA5FL, (safe_rshift_func_uint16_t_u_u(0x00C0L, GROUP_DIVERGE(2, 1)))))))) , (safe_rshift_func_uint8_t_u_u((FAKE_DIVERGE(p_812->group_1_offset, get_group_id(1), 10) <= ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_629, l_15)), p_812->g_618.s5)) | 0xD3BEL)), l_571[1][0][1])))) & 0x61L) ^ 0x572A8F8DL)))));
                }
                return p_812->g_449.f0;
            }
            l_631--;
        }
        (*l_670) |= ((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((+(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_638.xy)))).xyxxyyyyyxxyxyyy))))).s77, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xF7L, 255UL)).xxxxxxxy)).s77))).xxxyyyyyyyyxxyxx, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(p_812->g_639.s4571)).wzwwzyyxzxwzxxzw, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(l_640.sc3f1391f)), ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 8))(l_641.s06376423)).lo, (uint8_t)(safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x8B56D17CL, 4294967286UL)).even, p_812->g_100.f2)), (uint8_t)(safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int8_t_s_s(l_615[2], 7)) >= l_648) , (0x5B4F216B85ED74D9L || ((*l_668) &= ((safe_sub_func_uint32_t_u_u((((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x0055EBADBAA40851L, 7L)))).hi, (l_572[3][0][9] = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_655.s77050524)).s5560774137764551)).sb9, (int64_t)((l_638.y != ((VECTOR(int32_t, 4))(p_812->g_656.yyxy)).w) || (((l_640.sf >= (safe_rshift_func_int16_t_s_s(((p_812->g_188.f0 , ((VECTOR(uint8_t, 16))(l_659.s1727033777106562)).s0) , (+(safe_mod_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u(((*l_664) = 0xA0L), ((l_665 == (void*)0) & l_641.s3))) || p_812->g_188.f2) < p_812->g_639.s0), 0x32A2D8BCL)))), p_812->g_450.y))) != l_564) | l_666))))), 1L, 1L, l_641.s6, l_615[2], (-1L), (-3L))).s7))) | 0x67F3L) ^ l_659.s7), l_564)) || 0x00L)))) >= l_669) , p_812->g_500.f3), 9))))).ywzzwyzz)).s13, ((VECTOR(uint8_t, 2))(1UL))))), ((VECTOR(uint8_t, 2))(1UL))))).yyyxyxyyyyyxxyyy))).hi))).s2400035160263457)))))).sc2a4, ((VECTOR(uint8_t, 4))(0xF0L))))).ywwzxzyw, ((VECTOR(uint8_t, 8))(0x28L))))).s66))).lo , l_640.s1)), p_812->g_233[1][5][4])), p_812->g_612.f2)) >= 0xAFF4L);
    }
    else
    { /* block id: 284 */
        int16_t l_718 = 0x016DL;
        int32_t ****l_721 = &p_812->g_369[1][0][0];
        uint32_t *l_722 = (void*)0;
        uint32_t *l_723 = &p_812->g_90;
        uint64_t l_743 = 0xE05C3086CC4459BFL;
        uint8_t *l_744 = &p_812->g_214;
        if ((atomic_inc(&p_812->g_atomic_input[80 * get_linear_group_id() + 71]) == 4))
        { /* block id: 286 */
            int32_t l_671 = 0x7E2679ABL;
            int32_t l_686 = 0x71FE3319L;
            int64_t l_687 = (-1L);
            int32_t l_688 = (-2L);
            int32_t l_689 = 0x1A1894CDL;
            int8_t l_690 = 0L;
            uint8_t l_691 = 0x04L;
            VECTOR(int64_t, 16) l_705 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
            VECTOR(int64_t, 4) l_706 = (VECTOR(int64_t, 4))(0x41FDF6E686B839A7L, (VECTOR(int64_t, 2))(0x41FDF6E686B839A7L, 0x28CA148EA848A581L), 0x28CA148EA848A581L);
            int64_t l_707[2];
            uint32_t l_708 = 4294967295UL;
            int32_t l_709 = 0L;
            uint16_t l_710 = 0x3C06L;
            uint32_t l_711 = 1UL;
            int64_t l_712 = 0x303DAB33F6FFCECFL;
            int8_t l_713 = 0L;
            int16_t l_714 = 2L;
            int32_t *l_715[5];
            int i;
            for (i = 0; i < 2; i++)
                l_707[i] = 0x7447C916B6E51A54L;
            for (i = 0; i < 5; i++)
                l_715[i] = &l_671;
            for (l_671 = 29; (l_671 > (-6)); l_671 = safe_sub_func_uint64_t_u_u(l_671, 6))
            { /* block id: 289 */
                int32_t l_674[5] = {0x73D519F1L,0x73D519F1L,0x73D519F1L,0x73D519F1L,0x73D519F1L};
                int32_t *l_685 = (void*)0;
                int i;
                for (l_674[0] = 1; (l_674[0] <= (-22)); --l_674[0])
                { /* block id: 292 */
                    int32_t l_677 = 0x075127CDL;
                    for (l_677 = 6; (l_677 > 24); l_677 = safe_add_func_int32_t_s_s(l_677, 1))
                    { /* block id: 295 */
                        struct S0 l_680[1] = {{6L,0x4E48L,0xC8L,18446744073709551606UL,8L,0L,0x339A906FL}};
                        struct S0 l_681[6][6] = {{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}},{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}},{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}},{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}},{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}},{{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L},{0x6D89L,0x08E3L,255UL,0x65A2B8C0B9CC2912L,0L,0x07F98DD2L,0x4ECCEAC6L}}};
                        uint8_t l_682 = 0UL;
                        uint32_t l_683 = 0UL;
                        int32_t *l_684 = &l_680[0].f5;
                        int i, j;
                        l_681[5][2] = l_680[0];
                        l_683 = (l_682 = 0x1F297211L);
                        l_684 = (void*)0;
                    }
                }
                l_685 = l_685;
            }
            ++l_691;
            for (l_690 = (-3); (l_690 == (-1)); ++l_690)
            { /* block id: 307 */
                int32_t l_696 = 0x48B9E9A5L;
                int32_t *l_704[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_704[i] = &l_696;
                for (l_696 = 0; (l_696 < (-30)); l_696--)
                { /* block id: 310 */
                    struct S0 l_699 = {-1L,0L,9UL,5UL,0x5F86436BL,0x6F38405FL,1UL};/* VOLATILE GLOBAL l_699 */
                    struct S0 l_700 = {0x7509L,-10L,0x7FL,18446744073709551615UL,9L,0L,7UL};/* VOLATILE GLOBAL l_700 */
                    uint8_t l_701[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_701[i] = 0x49L;
                    l_700 = l_699;
                    l_701[2]++;
                }
                l_704[1] = l_704[0];
            }
            l_715[4] = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(l_705.sd1c6)).yxxzzxxwwwzzwwxw, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_706.yz)).yxyx)).xyzxxzzy, (int64_t)(l_709 = (l_708 |= l_707[1]))))).s3511616050166502))).saf88)).x , (((l_710 , (l_714 = (l_711 , ((l_712 , 1L) , l_713)))) , 0x9B92CFFBL) , (void*)0));
            unsigned int result = 0;
            result += l_671;
            result += l_686;
            result += l_687;
            result += l_688;
            result += l_689;
            result += l_690;
            result += l_691;
            result += l_705.sf;
            result += l_705.se;
            result += l_705.sd;
            result += l_705.sc;
            result += l_705.sb;
            result += l_705.sa;
            result += l_705.s9;
            result += l_705.s8;
            result += l_705.s7;
            result += l_705.s6;
            result += l_705.s5;
            result += l_705.s4;
            result += l_705.s3;
            result += l_705.s2;
            result += l_705.s1;
            result += l_705.s0;
            result += l_706.w;
            result += l_706.z;
            result += l_706.y;
            result += l_706.x;
            int l_707_i0;
            for (l_707_i0 = 0; l_707_i0 < 2; l_707_i0++) {
                result += l_707[l_707_i0];
            }
            result += l_708;
            result += l_709;
            result += l_710;
            result += l_711;
            result += l_712;
            result += l_713;
            result += l_714;
            atomic_add(&p_812->g_special_values[80 * get_linear_group_id() + 71], result);
        }
        else
        { /* block id: 320 */
            (1 + 1);
        }
        atomic_or(&p_812->g_atomic_reduction[get_linear_group_id()], ((safe_sub_func_uint32_t_u_u((((((((l_718 || ((&p_812->g_364[0] != l_721) | ((*l_723) = ((void*)0 != &p_812->g_562)))) > ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((FAKE_DIVERGE(p_812->local_1_offset, get_local_id(1), 10) | (safe_div_func_uint16_t_u_u((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xEF82L, ((VECTOR(uint16_t, 2))(p_812->g_726.sb2)), 65535UL)), 0UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_812->g_727.s62e3)).lo)), 0x1C3DL)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_812->g_728.s6200637215562613)).hi)).hi))))), 0x5181L, ((VECTOR(uint16_t, 8))(65528UL, 0xDAC7L, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((!((VECTOR(uint8_t, 16))(((*l_744) = (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(FAKE_DIVERGE(p_812->group_1_offset, get_group_id(1), 10), ((VECTOR(uint32_t, 2))(p_812->g_737.s13)).lo)) && ((VECTOR(int64_t, 2))(0x2C0100C56B267AEEL, 7L)).hi) , (safe_lshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((~((p_812->g_500.f3 <= p_812->g_42[3].f5) & p_812->g_448.f1)) , (GROUP_DIVERGE(0, 1) < l_641.s4)))), l_567)) ^ l_743) == p_812->g_498.f0), 1))), FAKE_DIVERGE(p_812->local_0_offset, get_local_id(0), 10)))), GROUP_DIVERGE(1, 1), 0x28L, 0x3BL, 0xEAL, ((VECTOR(uint8_t, 2))(0x56L)), l_571[0][0][2], ((VECTOR(uint8_t, 4))(0UL)), 0xDEL, 0x08L, 0x59L, 3UL)).sa), p_812->g_500.f0)), FAKE_DIVERGE(p_812->local_0_offset, get_local_id(0), 10))) | p_812->g_100.f5), ((VECTOR(uint16_t, 4))(8UL)), 0x1F60L)).s4, 0UL, 0x57BCL)).s6 > GROUP_DIVERGE(1, 1)), 1L))) != 0x44550118076CB977L), ((VECTOR(uint8_t, 2))(0UL)), 0xEAL)), p_812->g_97, 0x14L, 0x3AL, 7UL)))).s7) , l_745[0]) != p_812->g_746) , l_748) == (void*)0) || l_669), p_812->g_612.f1)) || 65535UL));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_812->v_collective += p_812->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        return p_812->g_188.f3;
    }
    p_812->g_749 = p_812->g_749;
    if ((atomic_inc(&p_812->g_atomic_input[80 * get_linear_group_id() + 1]) == 3))
    { /* block id: 330 */
        uint16_t l_752 = 0UL;
        int64_t l_804 = 0x7C64B37C7B8D1B8AL;
        uint32_t l_805[6];
        int i;
        for (i = 0; i < 6; i++)
            l_805[i] = 0x22260B99L;
        l_752--;
        for (l_752 = 0; (l_752 == 13); l_752 = safe_add_func_uint16_t_u_u(l_752, 1))
        { /* block id: 334 */
            uint32_t l_757 = 0x4CD98995L;
            int32_t l_758 = 2L;
            int32_t *l_803 = (void*)0;
            if ((l_758 &= (l_757 = ((VECTOR(int32_t, 2))(1L, 1L)).hi)))
            { /* block id: 337 */
                int64_t l_759 = 0x4D318CADA8FE4987L;
                uint32_t l_760 = 4UL;
                int32_t l_761 = 0x351BF443L;
                l_758 &= l_759;
                l_761 |= l_760;
                for (l_760 = (-19); (l_760 <= 14); l_760 = safe_add_func_int16_t_s_s(l_760, 4))
                { /* block id: 342 */
                    int32_t l_764 = 0x6A536A54L;
                    VECTOR(int32_t, 16) l_782 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-10L)), (-10L)), (-10L), (-3L), (-10L), (VECTOR(int32_t, 2))((-3L), (-10L)), (VECTOR(int32_t, 2))((-3L), (-10L)), (-3L), (-10L), (-3L), (-10L));
                    int i;
                    l_761 |= 0x4B928DD2L;
                    for (l_764 = 27; (l_764 > (-28)); l_764 = safe_sub_func_uint32_t_u_u(l_764, 3))
                    { /* block id: 346 */
                        int32_t l_767[5] = {0x630FF5E3L,0x630FF5E3L,0x630FF5E3L,0x630FF5E3L,0x630FF5E3L};
                        int8_t l_768 = 1L;
                        uint64_t l_769 = 18446744073709551607UL;
                        int i;
                        l_769++;
                    }
                    for (l_764 = 0; (l_764 < (-17)); l_764 = safe_sub_func_uint8_t_u_u(l_764, 5))
                    { /* block id: 351 */
                        VECTOR(uint32_t, 16) l_774 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x47AC2D01L), 0x47AC2D01L), 0x47AC2D01L, 8UL, 0x47AC2D01L, (VECTOR(uint32_t, 2))(8UL, 0x47AC2D01L), (VECTOR(uint32_t, 2))(8UL, 0x47AC2D01L), 8UL, 0x47AC2D01L, 8UL, 0x47AC2D01L);
                        int8_t l_775 = 0L;
                        uint16_t l_776 = 8UL;
                        int8_t l_777 = 4L;
                        int32_t l_778 = 0L;
                        uint32_t l_779 = 0xF0BF9B1FL;
                        int i;
                        l_761 = (l_758 = ((l_775 = l_774.sd) , l_776));
                        l_778 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_777, 0x6FB9C16AL, 0x2346DA97L, 0x11A0D98FL)).xwwyzywz)).hi)).y;
                        ++l_779;
                    }
                    if (((VECTOR(int32_t, 4))(l_782.sc70f)).y)
                    { /* block id: 358 */
                        uint32_t l_783[5][1];
                        int16_t l_784 = 9L;
                        int32_t l_785 = 0L;
                        uint16_t l_786[5][7] = {{0x551AL,0x493EL,65532UL,7UL,65532UL,0x493EL,0x551AL},{0x551AL,0x493EL,65532UL,7UL,65532UL,0x493EL,0x551AL},{0x551AL,0x493EL,65532UL,7UL,65532UL,0x493EL,0x551AL},{0x551AL,0x493EL,65532UL,7UL,65532UL,0x493EL,0x551AL},{0x551AL,0x493EL,65532UL,7UL,65532UL,0x493EL,0x551AL}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_783[i][j] = 0x17C53D99L;
                        }
                        l_782.sa |= l_783[2][0];
                        --l_786[0][1];
                        l_758 &= 1L;
                    }
                    else
                    { /* block id: 362 */
                        uint16_t l_789 = 0x5912L;
                        int32_t l_791 = 0x7769D158L;
                        int32_t *l_790[7][7][3] = {{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}},{{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791},{&l_791,(void*)0,&l_791}}};
                        int32_t l_792 = 0x27E1E64FL;
                        int32_t *l_793 = &l_791;
                        int32_t *l_794 = &l_791;
                        uint16_t l_795 = 9UL;
                        int i, j, k;
                        l_764 |= l_789;
                        l_790[6][2][0] = (void*)0;
                        l_794 = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((((VECTOR(uint16_t, 2))(0x5BB8L, 0xF79DL)).even , (l_792 = 0x3FF94318L)) , FAKE_DIVERGE(p_812->local_0_offset, get_local_id(0), 10)), 0x173EE184L, 0x031E00C7L, 4294967295UL)).zxyzxxyxwzxxzxww)).s42db)).z , l_793);
                        l_782.s9 = l_795;
                    }
                }
            }
            else
            { /* block id: 370 */
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x31BA8688L)).xxxyyyxyxyyxyyxx)).s4d56)).xyyxxyyy)).s7)
                { /* block id: 371 */
                    l_758 = 0x2FBCCED9L;
                }
                else
                { /* block id: 373 */
                    int64_t l_796 = 1L;
                    int32_t l_798[2];
                    int32_t *l_797 = &l_798[1];
                    int32_t *l_799 = &l_798[1];
                    uint32_t l_800 = 0xDFE7D7CEL;
                    struct S0 l_801[1] = {{0L,-1L,9UL,18446744073709551611UL,0x713A5F4CL,8L,0xE4FF8002L}};
                    struct S0 l_802[8][2] = {{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}},{{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL},{7L,6L,0xDAL,18446744073709551607UL,3L,7L,0UL}}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_798[i] = (-7L);
                    l_799 = (l_796 , (l_797 = l_797));
                    l_758 = l_800;
                    l_802[3][0] = l_801[0];
                }
            }
            l_803 = l_803;
        }
        l_805[4]--;
        for (l_804 = 0; (l_804 <= (-25)); l_804 = safe_sub_func_int64_t_s_s(l_804, 4))
        { /* block id: 385 */
            int32_t l_811 = 0x3E5AA19CL;
            int32_t *l_810 = &l_811;
            l_810 = (void*)0;
        }
        unsigned int result = 0;
        result += l_752;
        result += l_804;
        int l_805_i0;
        for (l_805_i0 = 0; l_805_i0 < 6; l_805_i0++) {
            result += l_805[l_805_i0];
        }
        atomic_add(&p_812->g_special_values[80 * get_linear_group_id() + 1], result);
    }
    else
    { /* block id: 388 */
        (1 + 1);
    }
    return l_532;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_100.f5 p_812->g_188.f2 p_812->g_42.f6 p_812->g_498
 * writes: p_812->g_233 p_812->g_252
 */
struct S0  func_5(uint8_t  p_6, uint32_t  p_7, struct S1 * p_812)
{ /* block id: 218 */
    int64_t l_457 = 0x10FD2605B7C6904CL;
    uint16_t *l_458 = (void*)0;
    uint16_t *l_459[2][6] = {{&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4]},{&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4],&p_812->g_233[0][6][4]}};
    int64_t *l_482 = (void*)0;
    uint64_t *l_483 = &p_812->g_231;
    int64_t *l_484 = &p_812->g_252;
    uint64_t l_485 = 0x8FD535CE8056A8F8L;
    int32_t l_486[5][9] = {{0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L},{0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L},{0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L},{0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L},{0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L,0x1A9F0826L,0x65ECFBEBL,0x1A9F0826L}};
    VECTOR(int32_t, 8) l_487 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
    int32_t *l_488[7][2] = {{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5},{&p_812->g_449.f5,&p_812->g_449.f5}};
    int64_t l_489 = (-7L);
    int8_t l_490 = 0x19L;
    int16_t l_491 = (-5L);
    int32_t l_492 = 6L;
    int32_t l_494 = 0x4A898782L;
    uint16_t l_495 = 1UL;
    int i, j;
    l_487.s7 ^= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_486[0][2] = ((VECTOR(uint16_t, 8))(0xC59CL, (p_812->g_233[1][4][5] = (safe_add_func_int32_t_s_s(l_457, p_7))), (safe_mod_func_int16_t_s_s((((void*)0 != &p_812->g_233[0][6][4]) >= (l_457 & ((*l_484) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((p_6 <= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(((&p_812->g_252 == (l_482 = &p_812->g_252)) <= ((l_459[0][5] != (void*)0) , p_812->g_100.f5)), l_457)), 0)), p_7)) || 0x7CL), 5)), p_6))), l_457)) , l_482) != l_483), p_6)), GROUP_DIVERGE(1, 1))), p_812->g_188.f2)), 7))))), l_485)), 0xA725L, 5UL, l_457, 0x5A47L, 65535UL)).s7), p_812->g_42[3].f6)), p_7)) == l_485);
    --l_495;
    return p_812->g_498;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_21 p_812->l_comm_values p_812->g_39 p_812->g_42 p_812->g_56 p_812->g_57 p_812->g_90 p_812->g_97 p_812->g_100 p_812->g_94 p_812->g_188 p_812->g_208 p_812->g_223 p_812->g_comm_values p_812->g_214 p_812->g_253 p_812->g_256 p_812->g_231 p_812->g_237 p_812->g_357 p_812->g_419 p_812->g_38 p_812->g_448 p_812->g_449
 * writes: p_812->g_36 p_812->g_38 p_812->g_39 p_812->g_90 p_812->g_97 p_812->g_100.f2 p_812->g_94 p_812->g_42.f2 p_812->g_214 p_812->g_208 p_812->g_231 p_812->g_233 p_812->g_253 p_812->g_256 p_812->g_252 p_812->g_42.f0 p_812->g_188.f1 p_812->g_237 p_812->g_369 p_812->g_419 p_812->g_188.f5
 */
struct S0  func_8(uint64_t  p_9, uint64_t  p_10, int32_t  p_11, uint16_t  p_12, int32_t  p_13, struct S1 * p_812)
{ /* block id: 6 */
    VECTOR(int64_t, 16) l_18 = (VECTOR(int64_t, 16))(0x013C27F355C0C8FBL, (VECTOR(int64_t, 4))(0x013C27F355C0C8FBL, (VECTOR(int64_t, 2))(0x013C27F355C0C8FBL, 0x75DAA08BBD188380L), 0x75DAA08BBD188380L), 0x75DAA08BBD188380L, 0x013C27F355C0C8FBL, 0x75DAA08BBD188380L, (VECTOR(int64_t, 2))(0x013C27F355C0C8FBL, 0x75DAA08BBD188380L), (VECTOR(int64_t, 2))(0x013C27F355C0C8FBL, 0x75DAA08BBD188380L), 0x013C27F355C0C8FBL, 0x75DAA08BBD188380L, 0x013C27F355C0C8FBL, 0x75DAA08BBD188380L);
    VECTOR(int64_t, 16) l_19 = (VECTOR(int64_t, 16))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 1L), 1L), 1L, 4L, 1L, (VECTOR(int64_t, 2))(4L, 1L), (VECTOR(int64_t, 2))(4L, 1L), 4L, 1L, 4L, 1L);
    VECTOR(int64_t, 2) l_20 = (VECTOR(int64_t, 2))(0L, 0x4821F997EC53A21BL);
    int64_t *l_22 = (void*)0;
    int64_t *l_23 = (void*)0;
    int64_t *l_24 = (void*)0;
    int64_t *l_25 = (void*)0;
    int64_t *l_26 = (void*)0;
    int64_t *l_27 = (void*)0;
    int64_t *l_28 = (void*)0;
    int64_t *l_29 = (void*)0;
    int64_t *l_30 = (void*)0;
    int32_t l_31[3];
    int32_t l_32 = 1L;
    VECTOR(int64_t, 4) l_33 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x036206CBC8CA929EL), 0x036206CBC8CA929EL);
    VECTOR(int64_t, 16) l_34 = (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int64_t, 2))(3L, 0L), (VECTOR(int64_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
    int32_t **l_47 = &p_812->g_38;
    VECTOR(int16_t, 16) l_58 = (VECTOR(int16_t, 16))(0x0564L, (VECTOR(int16_t, 4))(0x0564L, (VECTOR(int16_t, 2))(0x0564L, (-1L)), (-1L)), (-1L), 0x0564L, (-1L), (VECTOR(int16_t, 2))(0x0564L, (-1L)), (VECTOR(int16_t, 2))(0x0564L, (-1L)), 0x0564L, (-1L), 0x0564L, (-1L));
    uint64_t l_63 = 18446744073709551615UL;
    uint16_t l_64 = 5UL;
    int i;
    for (i = 0; i < 3; i++)
        l_31[i] = (-7L);
    p_812->g_39 ^= (func_16((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(l_18.s09552053)).hi, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_19.s48bbe26b)).s54)).yyxx))).xzzwzxxzwxzyywzy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(0x1C79EBEF9F3B06D9L, 1L, ((VECTOR(int64_t, 2))(0x07972E7EB6652F09L, (-7L))), 0x5F402BE2FF5FF74FL, (-9L), 0x4D2C298C245E3205L, 0x47E4DDBB7A2E255BL)).s35, ((VECTOR(int64_t, 16))(l_20.yxxyyxxyyyxyyxxy)).s51))).yyxy, ((VECTOR(int64_t, 16))(p_812->g_21.zyzxxwyxyyxyxyxw)).sa1e2, ((VECTOR(int64_t, 4))(0L, (l_32 = (l_31[1] = p_812->l_comm_values[(safe_mod_func_uint32_t_u_u(p_812->tid, 87))])), 0L, 0x34ECA6696B495482L))))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_33.wxwwyyxx)))).s57)), 0x28ED3351F4A1AB70L, 0x6D4D441147C038D0L)))).s3506664712032523))).s8f)), ((VECTOR(int64_t, 4))(l_34.s6733)).hi))), 0x01CA9286DF497A84L, 0x08A84A000286F3A6L)).yyxzzzzw)).s5 , p_9), p_812) , (-7L));
    for (p_10 = 0; (p_10 < 3); p_10++)
    { /* block id: 17 */
        return p_812->g_42[3];
    }
    (*l_47) = func_43(l_47, (1L >= func_48(((safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_812->group_2_offset, get_group_id(2), 10), GROUP_DIVERGE(1, 1))) && 255UL), FAKE_DIVERGE(p_812->group_0_offset, get_group_id(0), 10))) , ((p_812->g_42[3] , ((((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_812->g_56.s9c35)).odd)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((p_812->g_57[0] != (void*)0) || ((VECTOR(int16_t, 4))(l_58.s9a55)).z), ((VECTOR(int16_t, 4))((((((safe_mul_func_uint16_t_u_u(((p_10 == (l_24 != (l_33.z , (void*)0))) == l_58.s7), (-5L))) , (void*)0) != (void*)0) , p_11) > p_10), ((VECTOR(int16_t, 2))((-1L))), 0L)), p_812->g_42[3].f6, 9L, (-1L))).hi)).xywyxyyxyyyxywzx)).s61))).yyxxxxyyxyxxxxyx, ((VECTOR(int16_t, 16))(7L))))).s7 | p_812->g_42[3].f0) == FAKE_DIVERGE(p_812->local_1_offset, get_local_id(1), 10))) >= l_63)), l_64, p_13, p_812)), p_812->g_42[3].f4, p_812);
    for (p_812->g_188.f5 = 4; (p_812->g_188.f5 >= (-22)); p_812->g_188.f5--)
    { /* block id: 208 */
        int32_t *l_444 = &p_812->g_42[3].f5;
        (*l_47) = l_444;
        for (p_812->g_39 = (-6); (p_812->g_39 >= 26); p_812->g_39 = safe_add_func_int8_t_s_s(p_812->g_39, 1))
        { /* block id: 212 */
            int32_t *l_447 = &p_812->g_188.f5;
            (*l_47) = l_447;
            return p_812->g_448;
        }
    }
    return p_812->g_449;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_21
 * writes: p_812->g_36 p_812->g_38
 */
int32_t  func_16(int8_t  p_17, struct S1 * p_812)
{ /* block id: 9 */
    int32_t *l_35 = &p_812->g_36;
    int32_t **l_37[4] = {&l_35,&l_35,&l_35,&l_35};
    int i;
    (*l_35) = (-1L);
    p_812->g_38 = (void*)0;
    (*l_35) = 2L;
    return p_812->g_21.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_100.f2 p_812->g_38
 * writes: p_812->g_38 p_812->g_100.f2
 */
int32_t * func_43(int32_t ** p_44, int16_t  p_45, int64_t  p_46, struct S1 * p_812)
{ /* block id: 196 */
    int32_t *l_433 = &p_812->g_36;
    int32_t *l_434[1];
    int8_t l_435 = 1L;
    int16_t l_436 = 0x38C7L;
    uint32_t l_437 = 0x32836FBDL;
    int i;
    for (i = 0; i < 1; i++)
        l_434[i] = &p_812->g_36;
    (*p_44) = l_433;
    l_437--;
    for (p_812->g_100.f2 = 0; (p_812->g_100.f2 >= 53); p_812->g_100.f2++)
    { /* block id: 201 */
        (*p_44) = (*p_44);
    }
    return l_434[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_42.f3 p_812->g_39 p_812->g_42.f5 p_812->g_21 p_812->g_90 p_812->g_97 p_812->g_100 p_812->g_94 p_812->g_188 p_812->g_42.f6 p_812->g_208 p_812->g_223 p_812->g_comm_values p_812->g_214 p_812->g_253 p_812->g_42.f4 p_812->g_256 p_812->g_231 p_812->g_42.f0 p_812->g_237 p_812->g_357 p_812->g_419
 * writes: p_812->g_39 p_812->g_36 p_812->g_38 p_812->g_90 p_812->g_97 p_812->g_100.f2 p_812->g_94 p_812->g_42.f2 p_812->g_214 p_812->g_208 p_812->g_231 p_812->g_233 p_812->g_253 p_812->g_256 p_812->g_252 p_812->g_42.f0 p_812->g_188.f1 p_812->g_237 p_812->g_369 p_812->g_419
 */
uint32_t  func_48(uint8_t  p_49, uint32_t  p_50, int32_t  p_51, struct S1 * p_812)
{ /* block id: 20 */
    VECTOR(int8_t, 4) l_189 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 1L), 1L);
    int32_t *l_203 = &p_812->g_42[3].f5;
    int32_t **l_202 = &l_203;
    int8_t *l_418 = (void*)0;
    int8_t **l_420[9];
    int32_t *l_421 = &p_812->g_188.f5;
    int32_t *l_422 = (void*)0;
    int32_t *l_423 = (void*)0;
    int32_t *l_424 = &p_812->g_36;
    int32_t *l_425 = &p_812->g_237;
    int32_t *l_426 = &p_812->g_188.f5;
    int32_t *l_427 = &p_812->g_237;
    int32_t *l_428[5][2][9] = {{{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237}},{{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237}},{{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237}},{{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237}},{{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_100.f5,(void*)0,&p_812->g_36,(void*)0,&p_812->g_100.f5,&p_812->g_237,&p_812->g_237}}};
    int64_t l_429 = 1L;
    uint16_t l_430 = 0x813AL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_420[i] = &p_812->g_419;
    (*l_202) = func_65(((safe_lshift_func_int8_t_s_u((func_73(p_812->g_42[3].f3, p_812) , ((VECTOR(int8_t, 16))(l_189.wzyzzwzxywzwxwzz)).s7), 7)) , p_812->g_42[3].f6), func_190(func_195(p_812->g_188.f5, l_189.x, (safe_unary_minus_func_uint8_t_u(p_50)), ((*l_202) = &p_51), p_49, p_812), p_812->g_188.f5, l_202, p_812->g_comm_values[p_812->tid], p_812), p_812->g_100.f1, l_202, p_812->g_42[3].f4, p_812);
    (*l_203) = ((l_418 != (p_812->g_419 = p_812->g_419)) | p_50);
    --l_430;
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_256 p_812->g_208 p_812->g_100.f5 p_812->g_231 p_812->g_223 p_812->g_comm_values p_812->g_42.f0 p_812->g_42.f5 p_812->g_21 p_812->g_90 p_812->g_97 p_812->g_100 p_812->g_188 p_812->g_237 p_812->g_357
 * writes: p_812->g_256 p_812->g_208 p_812->g_252 p_812->g_231 p_812->g_42.f0 p_812->g_39 p_812->g_36 p_812->g_38 p_812->g_90 p_812->g_97 p_812->g_100.f2 p_812->g_94 p_812->g_188.f1 p_812->g_42.f2 p_812->g_237 p_812->g_369
 */
int32_t * func_65(uint64_t  p_66, uint32_t  p_67, uint64_t  p_68, int32_t ** p_69, uint64_t  p_70, struct S1 * p_812)
{ /* block id: 111 */
    volatile struct S0 *l_257 = (void*)0;
    volatile struct S0 *l_258 = &p_812->g_256;
    int32_t l_269 = 0x2BD62752L;
    uint16_t *l_270 = &p_812->g_233[1][6][3];
    int8_t *l_271[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_278 = &p_812->g_252;
    uint64_t *l_279 = &p_812->g_231;
    int16_t *l_284 = &p_812->g_42[3].f0;
    int32_t l_288 = 1L;
    int32_t l_289 = 0x667E6C48L;
    int32_t l_290 = 0x2079E201L;
    int32_t l_291 = 0x4BE8DE9CL;
    int32_t l_292 = 0x3C1E511FL;
    int32_t l_293 = 0x11BB09EFL;
    int32_t l_295 = 0x144FC28BL;
    VECTOR(int32_t, 8) l_296 = (VECTOR(int32_t, 8))(0x0890295DL, (VECTOR(int32_t, 4))(0x0890295DL, (VECTOR(int32_t, 2))(0x0890295DL, 0x15896220L), 0x15896220L), 0x15896220L, 0x0890295DL, 0x15896220L);
    uint64_t l_298 = 18446744073709551609UL;
    int16_t l_376 = (-2L);
    int i;
    (*l_258) = p_812->g_256;
    (*l_258) = func_73((((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0UL, 0xBFL)).hi, (p_812->g_208.s5 |= ((l_269 , l_270) == &p_812->g_233[0][6][4])))) >= ((*l_284) &= ((safe_div_func_uint64_t_u_u(p_812->g_100.f5, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((((*l_278) = ((void*)0 == &p_812->g_231)) >= ((*l_279)++)), (safe_mod_func_uint8_t_u_u(((void*)0 != p_812->g_223), ((p_66 , p_812->g_comm_values[p_812->tid]) , p_812->g_256.f2))))) | GROUP_DIVERGE(0, 1)) , 0x04L), p_70)) || p_70))) , 0x1E0FL))), l_269)), 0x6EB6L)), FAKE_DIVERGE(p_812->group_2_offset, get_group_id(2), 10))), 0x3A45L)) , p_70) | (**p_69)), p_812);
    for (p_812->g_188.f1 = 0; (p_812->g_188.f1 <= 4); p_812->g_188.f1 = safe_add_func_uint16_t_u_u(p_812->g_188.f1, 1))
    { /* block id: 120 */
        int32_t *l_287[10];
        uint8_t *l_303 = (void*)0;
        VECTOR(uint32_t, 4) l_356 = (VECTOR(uint32_t, 4))(0xCAC60382L, (VECTOR(uint32_t, 2))(0xCAC60382L, 0x8EED9694L), 0x8EED9694L);
        VECTOR(int16_t, 8) l_361 = (VECTOR(int16_t, 8))(0x26F0L, (VECTOR(int16_t, 4))(0x26F0L, (VECTOR(int16_t, 2))(0x26F0L, 0x7763L), 0x7763L), 0x7763L, 0x26F0L, 0x7763L);
        int8_t *l_362 = (void*)0;
        VECTOR(int8_t, 4) l_377 = (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0x2BL), 0x2BL);
        int32_t ***l_381[2];
        int32_t ****l_380 = &l_381[1];
        int i;
        for (i = 0; i < 10; i++)
            l_287[i] = &p_812->g_237;
        for (i = 0; i < 2; i++)
            l_381[i] = (void*)0;
        (*l_258) = p_812->g_100;
        --l_298;
        if ((**p_69))
        { /* block id: 123 */
            int32_t l_306 = 0x7BF9409EL;
            uint8_t *l_309 = (void*)0;
            uint8_t *l_310 = &p_812->g_42[3].f2;
            VECTOR(uint32_t, 16) l_360 = (VECTOR(uint32_t, 16))(0xDF318528L, (VECTOR(uint32_t, 4))(0xDF318528L, (VECTOR(uint32_t, 2))(0xDF318528L, 0x849392E6L), 0x849392E6L), 0x849392E6L, 0xDF318528L, 0x849392E6L, (VECTOR(uint32_t, 2))(0xDF318528L, 0x849392E6L), (VECTOR(uint32_t, 2))(0xDF318528L, 0x849392E6L), 0xDF318528L, 0x849392E6L, 0xDF318528L, 0x849392E6L);
            int32_t ***l_368 = &p_812->g_365;
            int32_t ****l_367 = &l_368;
            int32_t ***l_371 = &p_812->g_365;
            int32_t ****l_370 = &l_371;
            VECTOR(uint8_t, 4) l_378 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0x0EL), 0x0EL);
            uint64_t *l_379 = &p_812->g_231;
            int i;
            if ((safe_div_func_uint64_t_u_u((l_303 != &p_812->g_214), (safe_sub_func_int8_t_s_s((l_303 == l_271[2]), ((l_306 , (safe_mul_func_uint8_t_u_u(((*l_310) = p_68), ((((((!l_306) , (safe_div_func_int8_t_s_s(p_70, p_70))) && GROUP_DIVERGE(1, 1)) || p_70) , 0UL) | GROUP_DIVERGE(2, 1))))) , p_66))))))
            { /* block id: 125 */
                VECTOR(uint32_t, 16) l_358 = (VECTOR(uint32_t, 16))(0x8ECBAB5EL, (VECTOR(uint32_t, 4))(0x8ECBAB5EL, (VECTOR(uint32_t, 2))(0x8ECBAB5EL, 1UL), 1UL), 1UL, 0x8ECBAB5EL, 1UL, (VECTOR(uint32_t, 2))(0x8ECBAB5EL, 1UL), (VECTOR(uint32_t, 2))(0x8ECBAB5EL, 1UL), 0x8ECBAB5EL, 1UL, 0x8ECBAB5EL, 1UL);
                VECTOR(uint32_t, 16) l_359 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL, (VECTOR(uint32_t, 2))(0UL, 8UL), (VECTOR(uint32_t, 2))(0UL, 8UL), 0UL, 8UL, 0UL, 8UL);
                int i;
                for (l_292 = 0; (l_292 < (-11)); l_292 = safe_sub_func_uint32_t_u_u(l_292, 6))
                { /* block id: 128 */
                    int8_t l_319 = 2L;
                    (*l_258) = func_73((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(2L, 9)), l_319)), p_812);
                    if ((atomic_inc(&p_812->l_atomic_input[14]) == 5))
                    { /* block id: 131 */
                        int32_t l_320 = 0x47291F4EL;
                        uint32_t l_321 = 0x974CA1F2L;
                        int8_t l_322 = (-1L);
                        int64_t l_323 = 1L;
                        uint16_t l_324 = 0x0704L;
                        struct S0 l_325 = {0x1B0DL,-1L,0x41L,18446744073709551612UL,0x27B3C5AFL,0x2F13EE54L,1UL};/* VOLATILE GLOBAL l_325 */
                        uint32_t l_326 = 4294967295UL;
                        uint32_t l_327 = 4294967293UL;
                        int64_t l_328 = 3L;
                        VECTOR(int64_t, 4) l_329 = (VECTOR(int64_t, 4))(0x3CC25B84161E4228L, (VECTOR(int64_t, 2))(0x3CC25B84161E4228L, (-10L)), (-10L));
                        VECTOR(int64_t, 16) l_330 = (VECTOR(int64_t, 16))(0x3BEA127158A5C257L, (VECTOR(int64_t, 4))(0x3BEA127158A5C257L, (VECTOR(int64_t, 2))(0x3BEA127158A5C257L, 6L), 6L), 6L, 0x3BEA127158A5C257L, 6L, (VECTOR(int64_t, 2))(0x3BEA127158A5C257L, 6L), (VECTOR(int64_t, 2))(0x3BEA127158A5C257L, 6L), 0x3BEA127158A5C257L, 6L, 0x3BEA127158A5C257L, 6L);
                        VECTOR(int64_t, 2) l_331 = (VECTOR(int64_t, 2))(0L, (-1L));
                        VECTOR(int64_t, 8) l_332 = (VECTOR(int64_t, 8))(0x0AAD10D603B3050BL, (VECTOR(int64_t, 4))(0x0AAD10D603B3050BL, (VECTOR(int64_t, 2))(0x0AAD10D603B3050BL, 1L), 1L), 1L, 0x0AAD10D603B3050BL, 1L);
                        VECTOR(int32_t, 8) l_333 = (VECTOR(int32_t, 8))(0x0315C233L, (VECTOR(int32_t, 4))(0x0315C233L, (VECTOR(int32_t, 2))(0x0315C233L, (-1L)), (-1L)), (-1L), 0x0315C233L, (-1L));
                        VECTOR(int32_t, 16) l_334 = (VECTOR(int32_t, 16))(0x103C6BBCL, (VECTOR(int32_t, 4))(0x103C6BBCL, (VECTOR(int32_t, 2))(0x103C6BBCL, 0x7A3299E8L), 0x7A3299E8L), 0x7A3299E8L, 0x103C6BBCL, 0x7A3299E8L, (VECTOR(int32_t, 2))(0x103C6BBCL, 0x7A3299E8L), (VECTOR(int32_t, 2))(0x103C6BBCL, 0x7A3299E8L), 0x103C6BBCL, 0x7A3299E8L, 0x103C6BBCL, 0x7A3299E8L);
                        uint16_t l_335 = 0x0CE4L;
                        uint16_t l_336 = 1UL;
                        int32_t l_337 = 1L;
                        int8_t l_338[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        VECTOR(int32_t, 4) l_339 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L));
                        VECTOR(int32_t, 4) l_340 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 6L), 6L);
                        VECTOR(int32_t, 8) l_341 = (VECTOR(int32_t, 8))(0x55A9A614L, (VECTOR(int32_t, 4))(0x55A9A614L, (VECTOR(int32_t, 2))(0x55A9A614L, (-1L)), (-1L)), (-1L), 0x55A9A614L, (-1L));
                        VECTOR(int32_t, 16) l_342 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5824E1A1L), 0x5824E1A1L), 0x5824E1A1L, 0L, 0x5824E1A1L, (VECTOR(int32_t, 2))(0L, 0x5824E1A1L), (VECTOR(int32_t, 2))(0L, 0x5824E1A1L), 0L, 0x5824E1A1L, 0L, 0x5824E1A1L);
                        VECTOR(int32_t, 8) l_343 = (VECTOR(int32_t, 8))(0x2FA983C5L, (VECTOR(int32_t, 4))(0x2FA983C5L, (VECTOR(int32_t, 2))(0x2FA983C5L, 0x251829DBL), 0x251829DBL), 0x251829DBL, 0x2FA983C5L, 0x251829DBL);
                        int8_t l_344 = 0x12L;
                        VECTOR(uint32_t, 4) l_345 = (VECTOR(uint32_t, 4))(0x64DF0AA5L, (VECTOR(uint32_t, 2))(0x64DF0AA5L, 0UL), 0UL);
                        VECTOR(uint16_t, 16) l_346 = (VECTOR(uint16_t, 16))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x3CEEL), 0x3CEEL), 0x3CEEL, 65531UL, 0x3CEEL, (VECTOR(uint16_t, 2))(65531UL, 0x3CEEL), (VECTOR(uint16_t, 2))(65531UL, 0x3CEEL), 65531UL, 0x3CEEL, 65531UL, 0x3CEEL);
                        uint32_t l_347 = 0x0427C1C3L;
                        uint32_t l_348 = 0UL;
                        int32_t l_349 = 4L;
                        struct S0 l_350 = {0x18A3L,6L,255UL,0xA4AFD84C814A6B91L,0x23CA1EC1L,6L,0UL};/* VOLATILE GLOBAL l_350 */
                        int i;
                        l_350 = (((l_322 = (l_320 , l_321)) , ((VECTOR(int64_t, 16))((l_324 = l_323), (l_328 ^= (l_327 &= (l_325 , l_326))), ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(l_329.zz)).yyyxxyyyyxyxxxxx, ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(l_330.sfc)), ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_331.xy)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x139B6406CD2A6AC0L, 1L)).xxxxyxxx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(l_332.s3045)).hi, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_333.s16600267)).s36)).yxxyxyyyxyxxyxxx)).s03, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_334.sac9fac7718b64a7c)).s32, (int32_t)(l_335 |= 6L)))))).xyyxxxxy)).lo)), l_336, (l_338[7] = l_337), (-1L), ((VECTOR(int32_t, 2))(l_339.xx)), ((VECTOR(int32_t, 4))(l_340.xxxy)), (-1L), 0L, 3L)).sda, ((VECTOR(int32_t, 4))(0x3D1EC19BL, ((VECTOR(int32_t, 2))(l_341.s05)), 1L)).odd, ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_342.s1db5)).zwyzxyzyxwwyxwwx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_343.s34)), ((l_344 , l_345.z) , l_346.s9), 1L, ((VECTOR(int32_t, 4))(0x3C0790F9L)))).s37)).yxxyxyyyyxxxyyyx))).s73ad)), 0L, 0x07EC5F80L, (-3L))).s34))).yxxyxyyy, ((VECTOR(int32_t, 8))(2L))))).s44))).yxxy, ((VECTOR(int32_t, 4))(0x379746DDL))))), ((VECTOR(int32_t, 2))(0x3603B03FL)), 0x73A545B3L, 1L, 0L, (-9L), 0L, l_347, 0x54F4399EL, l_348, 0x71866DFAL, 0L)).even, ((VECTOR(int32_t, 8))(0x5E33565DL))))).s5007754523015546)).sde)))).yyyxxyyy, ((VECTOR(uint32_t, 8))(0x4F640608L))))).s31, ((VECTOR(int64_t, 2))((-3L)))))), 0x32ADA4E3D26074DEL, 6L)).z, ((VECTOR(int64_t, 2))((-1L))), l_349, 0x423A7828EE9ED2F0L, 0x1618F63C8FB82FFCL)).sf27c, (int64_t)(-5L)))).hi, ((VECTOR(int64_t, 2))(0x28812CF314EE94A7L))))).xyyxxxxyxxyxyyyy, ((VECTOR(int64_t, 16))(3L)))))))), ((VECTOR(int64_t, 16))(0x2293F854D8CF652EL))))))).s9d10, ((VECTOR(int64_t, 4))(0x75DA50369AEC4979L))))), 0x4F72DB34764E136AL, ((VECTOR(int64_t, 4))(0x3447322CEEC35253L)), ((VECTOR(int64_t, 2))(0x4B8452413C0FBA9DL)), ((VECTOR(int64_t, 2))(0x036A0335CE69AB97L)), 7L)).s7) , l_350);
                        unsigned int result = 0;
                        result += l_320;
                        result += l_321;
                        result += l_322;
                        result += l_323;
                        result += l_324;
                        result += l_325.f0;
                        result += l_325.f1;
                        result += l_325.f2;
                        result += l_325.f3;
                        result += l_325.f4;
                        result += l_325.f5;
                        result += l_325.f6;
                        result += l_326;
                        result += l_327;
                        result += l_328;
                        result += l_329.w;
                        result += l_329.z;
                        result += l_329.y;
                        result += l_329.x;
                        result += l_330.sf;
                        result += l_330.se;
                        result += l_330.sd;
                        result += l_330.sc;
                        result += l_330.sb;
                        result += l_330.sa;
                        result += l_330.s9;
                        result += l_330.s8;
                        result += l_330.s7;
                        result += l_330.s6;
                        result += l_330.s5;
                        result += l_330.s4;
                        result += l_330.s3;
                        result += l_330.s2;
                        result += l_330.s1;
                        result += l_330.s0;
                        result += l_331.y;
                        result += l_331.x;
                        result += l_332.s7;
                        result += l_332.s6;
                        result += l_332.s5;
                        result += l_332.s4;
                        result += l_332.s3;
                        result += l_332.s2;
                        result += l_332.s1;
                        result += l_332.s0;
                        result += l_333.s7;
                        result += l_333.s6;
                        result += l_333.s5;
                        result += l_333.s4;
                        result += l_333.s3;
                        result += l_333.s2;
                        result += l_333.s1;
                        result += l_333.s0;
                        result += l_334.sf;
                        result += l_334.se;
                        result += l_334.sd;
                        result += l_334.sc;
                        result += l_334.sb;
                        result += l_334.sa;
                        result += l_334.s9;
                        result += l_334.s8;
                        result += l_334.s7;
                        result += l_334.s6;
                        result += l_334.s5;
                        result += l_334.s4;
                        result += l_334.s3;
                        result += l_334.s2;
                        result += l_334.s1;
                        result += l_334.s0;
                        result += l_335;
                        result += l_336;
                        result += l_337;
                        int l_338_i0;
                        for (l_338_i0 = 0; l_338_i0 < 8; l_338_i0++) {
                            result += l_338[l_338_i0];
                        }
                        result += l_339.w;
                        result += l_339.z;
                        result += l_339.y;
                        result += l_339.x;
                        result += l_340.w;
                        result += l_340.z;
                        result += l_340.y;
                        result += l_340.x;
                        result += l_341.s7;
                        result += l_341.s6;
                        result += l_341.s5;
                        result += l_341.s4;
                        result += l_341.s3;
                        result += l_341.s2;
                        result += l_341.s1;
                        result += l_341.s0;
                        result += l_342.sf;
                        result += l_342.se;
                        result += l_342.sd;
                        result += l_342.sc;
                        result += l_342.sb;
                        result += l_342.sa;
                        result += l_342.s9;
                        result += l_342.s8;
                        result += l_342.s7;
                        result += l_342.s6;
                        result += l_342.s5;
                        result += l_342.s4;
                        result += l_342.s3;
                        result += l_342.s2;
                        result += l_342.s1;
                        result += l_342.s0;
                        result += l_343.s7;
                        result += l_343.s6;
                        result += l_343.s5;
                        result += l_343.s4;
                        result += l_343.s3;
                        result += l_343.s2;
                        result += l_343.s1;
                        result += l_343.s0;
                        result += l_344;
                        result += l_345.w;
                        result += l_345.z;
                        result += l_345.y;
                        result += l_345.x;
                        result += l_346.sf;
                        result += l_346.se;
                        result += l_346.sd;
                        result += l_346.sc;
                        result += l_346.sb;
                        result += l_346.sa;
                        result += l_346.s9;
                        result += l_346.s8;
                        result += l_346.s7;
                        result += l_346.s6;
                        result += l_346.s5;
                        result += l_346.s4;
                        result += l_346.s3;
                        result += l_346.s2;
                        result += l_346.s1;
                        result += l_346.s0;
                        result += l_347;
                        result += l_348;
                        result += l_349;
                        result += l_350.f0;
                        result += l_350.f1;
                        result += l_350.f2;
                        result += l_350.f3;
                        result += l_350.f4;
                        result += l_350.f5;
                        result += l_350.f6;
                        atomic_add(&p_812->l_special_values[14], result);
                    }
                    else
                    { /* block id: 139 */
                        (1 + 1);
                    }
                    if ((**p_69))
                    { /* block id: 142 */
                        (*p_69) = &p_812->g_237;
                    }
                    else
                    { /* block id: 144 */
                        (*p_69) = (*p_69);
                    }
                }
                (*l_258) = func_73((((p_67 > ((**p_69) & (safe_mod_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(p_812->g_353.s12371c1b63b0cb27)).hi, ((VECTOR(uint32_t, 4))(p_812->g_354.yxxy)).yzzyxzxy))).s40, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(p_812->g_355.s94)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_356.ywzxwyyzywzxxzww)).s9d)), ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(p_812->g_253.sd, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_812->g_357.yyxyxxxyyxyyxyxy)).s33)).xyyx, ((VECTOR(uint32_t, 4))(4294967294UL, 0x2D269807L, 0xA2F894A0L, 0x8B08613AL)), ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_358.sdd)).xxxyxxyy)).s77)), ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(l_359.s83)).xxxy, ((VECTOR(uint32_t, 8))(l_360.s2c4eeca3)).odd))), 0UL, 0x2F16D198L)).odd, (uint32_t)l_293)))))), (((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(0x0168L, 0x0973L)), ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_361.s17326641)).s5, p_812->g_297, 0x357EL, ((VECTOR(int16_t, 4))(((((l_360.s9 >= (~l_288)) == p_66) & ((&p_812->g_214 != (void*)0) | (**p_69))) ^ l_296.s6), p_68, 0x56BBL, 0x3207L)), 0x52E0L)), ((VECTOR(int16_t, 8))((-5L))), ((VECTOR(int16_t, 8))(2L))))), ((VECTOR(int16_t, 8))(0x68A6L))))).s00))).xyxyxxyxyxyxxyyy, ((VECTOR(uint16_t, 16))(0x95FFL))))).s20ce, ((VECTOR(uint16_t, 4))(65535UL))))).w & l_359.s4), 0xEEB6C1D4L, 0xC7950D2EL)).s73, (uint32_t)p_812->g_354.x))).xxyyxyxxxxxxxxyx)))).sfd)).yyxxxxyxyyyxyxxx, ((VECTOR(uint32_t, 16))(0x67ABEDC6L))))).se1))).yxyy)), 9UL, 4294967294UL, 4294967295UL, 0x45DA0001L)).s04))))).xxxxxxxyyxyxxyyy)).sb > p_70), p_812->g_357.x)))) , l_362) != (void*)0), p_812);
            }
            else
            { /* block id: 149 */
                int32_t ***l_363 = (void*)0;
                int32_t **l_366 = &p_812->g_38;
                (**p_69) = (-4L);
                if ((**p_69))
                    break;
                (*l_258) = (*l_258);
                l_366 = &l_287[3];
            }
            (**p_69) ^= (((*l_279) = ((((*l_367) = &p_812->g_365) == (p_68 , ((*l_370) = (p_812->g_369[1][0][0] = &p_69)))) | (safe_rshift_func_int16_t_s_s(((p_812->g_208.sd = (!(safe_rshift_func_int16_t_s_s(l_376, (!(!((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(l_377.yyzzzyww)).s77, ((VECTOR(uint8_t, 8))(l_378.wwwzxxyy)).s03))).hi)))))) <= (l_379 != l_379)), 13)))) == (&p_812->g_364[0] == l_380));
        }
        else
        { /* block id: 161 */
            for (l_291 = 0; (l_291 >= 4); l_291 = safe_add_func_uint16_t_u_u(l_291, 6))
            { /* block id: 164 */
                return (*p_69);
            }
            if ((atomic_inc(&p_812->g_atomic_input[80 * get_linear_group_id() + 67]) == 6))
            { /* block id: 168 */
                int64_t l_384 = 0L;
                int8_t l_385 = 1L;
                uint16_t l_386 = 0x12FCL;
                int16_t l_389[1][1];
                uint16_t l_390 = 1UL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_389[i][j] = 0x4E88L;
                }
                --l_386;
                l_390 = (l_389[0][0] , 1L);
                for (l_384 = 17; (l_384 == (-18)); l_384 = safe_sub_func_int16_t_s_s(l_384, 1))
                { /* block id: 173 */
                    int16_t l_393[2][5] = {{0x7DDFL,(-1L),0L,(-1L),0x7DDFL},{0x7DDFL,(-1L),0L,(-1L),0x7DDFL}};
                    int64_t l_394[5];
                    VECTOR(int32_t, 2) l_395 = (VECTOR(int32_t, 2))(1L, 0x5B6891CEL);
                    int64_t l_396 = (-1L);
                    VECTOR(int32_t, 2) l_397 = (VECTOR(int32_t, 2))(0x46EFE492L, 0x4866349AL);
                    VECTOR(int32_t, 4) l_398 = (VECTOR(int32_t, 4))(0x2866B4ADL, (VECTOR(int32_t, 2))(0x2866B4ADL, 0x432F80F0L), 0x432F80F0L);
                    VECTOR(int32_t, 2) l_399 = (VECTOR(int32_t, 2))(0x2AB5D27EL, (-6L));
                    VECTOR(int32_t, 8) l_400 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
                    VECTOR(int32_t, 16) l_401 = (VECTOR(int32_t, 16))(0x5FD14493L, (VECTOR(int32_t, 4))(0x5FD14493L, (VECTOR(int32_t, 2))(0x5FD14493L, (-4L)), (-4L)), (-4L), 0x5FD14493L, (-4L), (VECTOR(int32_t, 2))(0x5FD14493L, (-4L)), (VECTOR(int32_t, 2))(0x5FD14493L, (-4L)), 0x5FD14493L, (-4L), 0x5FD14493L, (-4L));
                    VECTOR(int32_t, 4) l_402 = (VECTOR(int32_t, 4))(0x5AFC3680L, (VECTOR(int32_t, 2))(0x5AFC3680L, 0x2F90DE4CL), 0x2F90DE4CL);
                    VECTOR(int32_t, 16) l_403 = (VECTOR(int32_t, 16))(0x6BAFB630L, (VECTOR(int32_t, 4))(0x6BAFB630L, (VECTOR(int32_t, 2))(0x6BAFB630L, 1L), 1L), 1L, 0x6BAFB630L, 1L, (VECTOR(int32_t, 2))(0x6BAFB630L, 1L), (VECTOR(int32_t, 2))(0x6BAFB630L, 1L), 0x6BAFB630L, 1L, 0x6BAFB630L, 1L);
                    uint16_t l_404 = 0x3368L;
                    VECTOR(int32_t, 16) l_405 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-7L)), (-7L)), (-7L), (-3L), (-7L), (VECTOR(int32_t, 2))((-3L), (-7L)), (VECTOR(int32_t, 2))((-3L), (-7L)), (-3L), (-7L), (-3L), (-7L));
                    VECTOR(int32_t, 8) l_406 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5C62BF65L), 0x5C62BF65L), 0x5C62BF65L, 0L, 0x5C62BF65L);
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_394[i] = 0L;
                    if (((VECTOR(int32_t, 16))((l_393[1][2] , l_394[2]), 0x20A4E6D2L, ((VECTOR(int32_t, 2))(l_395.yy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(0x30816E5AL, ((VECTOR(int32_t, 2))((-1L), 1L)), 0x35841A13L)).wzwzwzxwwwwzzyxx))).sfa)), 0x2A0172E6L)).zxwwxwxyyxwwwywz, (int32_t)l_396))).se5e9, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_397.xyyx)).yzxyxyxx, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x37516A47L)))).xyyx, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_398.wx)).xyyy)).zyxyyxwxxyyyxzzw)).s4a, ((VECTOR(int32_t, 4))(0x444A98F3L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_399.xyxxxyxx)).s3056304234625253, ((VECTOR(int32_t, 4))(l_400.s0035)).yxzwwxyxwxwwwzww))).s08, ((VECTOR(int32_t, 8))(l_401.sbe50e91a)).s37))), 0L)).odd))).xxyxyxxyxxxyxyyx)).odd)).even, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))((-2L), ((VECTOR(int32_t, 8))((-1L), 8L, (-1L), 0x4FF27723L, 0x6C72C255L, 0x7B8644ADL, 0x177F39D5L, 0x5C2B32C3L)), 0x59867D08L, (-1L), (-1L), 0x32AB127AL, (-1L), 0x6AF27400L, (-4L))).s7cf4, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_402.zzzzxxzy)).lo)).w, (-7L), 0x1D96BFD2L, 0x6BA3CB1FL)).zwzzzxxxwzwyyyzx, ((VECTOR(int32_t, 2))(l_403.s38)).xxxyyyxyxxxxxyxx))).s46f4))))))))), 0x3AB2EEF9L, l_404, (-4L), 0x3226853BL)).s3167177375765017)).sae))).yxyyyyyx))).lo)).lo)).yxyx))))).wwyywyxw)).s13)), 1L, 0x55D8CE4BL)).zxwyyxxxyxwzyzzx)).s25)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_405.s81)), 0x6ED5FE6FL, 0L)))))).yyxwxywx, ((VECTOR(int32_t, 4))(l_406.s0706)).yxzwyyzx))), (-4L), 0x70BABB56L)).s2)
                    { /* block id: 174 */
                        uint32_t l_407 = 0x44917F6DL;
                        --l_407;
                    }
                    else
                    { /* block id: 176 */
                        uint32_t l_410 = 0UL;
                        int32_t **l_411 = (void*)0;
                        int32_t l_414 = 0x182332B9L;
                        int32_t *l_413 = &l_414;
                        int32_t **l_412 = &l_413;
                        int32_t **l_415 = &l_413;
                        int32_t **l_416 = &l_413;
                        VECTOR(int32_t, 2) l_417 = (VECTOR(int32_t, 2))((-1L), 0x4B3C485EL);
                        int i;
                        l_416 = (l_411 = (l_410 , (l_415 = (l_412 = l_411))));
                        l_401.s4 ^= ((VECTOR(int32_t, 2))(l_417.yx)).odd;
                    }
                }
                unsigned int result = 0;
                result += l_384;
                result += l_385;
                result += l_386;
                int l_389_i0, l_389_i1;
                for (l_389_i0 = 0; l_389_i0 < 1; l_389_i0++) {
                    for (l_389_i1 = 0; l_389_i1 < 1; l_389_i1++) {
                        result += l_389[l_389_i0][l_389_i1];
                    }
                }
                result += l_390;
                atomic_add(&p_812->g_special_values[80 * get_linear_group_id() + 67], result);
            }
            else
            { /* block id: 184 */
                (1 + 1);
            }
            (**p_69) = 0x6DEE1290L;
        }
    }
    return (*p_69);
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_39 p_812->g_42.f5 p_812->g_21 p_812->g_90 p_812->g_97 p_812->g_100 p_812->g_94 p_812->g_188
 * writes: p_812->g_39 p_812->g_36 p_812->g_38 p_812->g_90 p_812->g_97 p_812->g_100.f2 p_812->g_94
 */
struct S0  func_73(uint64_t  p_74, struct S1 * p_812)
{ /* block id: 21 */
    uint64_t l_84 = 9UL;
    int32_t l_87 = 0x6552C197L;
    int32_t l_88 = (-1L);
    int32_t l_89 = 0x6E8D0335L;
    int32_t l_96[10][8][3] = {{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}},{{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L},{0x04999CA7L,0x330E8A79L,6L}}};
    int i, j, k;
    for (p_74 = (-7); (p_74 == 2); p_74++)
    { /* block id: 24 */
        int8_t l_82 = (-1L);
        VECTOR(int32_t, 16) l_83 = (VECTOR(int32_t, 16))(0x7F86792DL, (VECTOR(int32_t, 4))(0x7F86792DL, (VECTOR(int32_t, 2))(0x7F86792DL, 0L), 0L), 0L, 0x7F86792DL, 0L, (VECTOR(int32_t, 2))(0x7F86792DL, 0L), (VECTOR(int32_t, 2))(0x7F86792DL, 0L), 0x7F86792DL, 0L, 0x7F86792DL, 0L);
        int32_t *l_93[3];
        int16_t l_95 = 0x0D21L;
        int i;
        for (i = 0; i < 3; i++)
            l_93[i] = &p_812->g_36;
        for (p_812->g_39 = 24; (p_812->g_39 > (-30)); --p_812->g_39)
        { /* block id: 27 */
            int32_t l_79 = 0x20A7086DL;
            int32_t *l_80 = &p_812->g_36;
            int32_t *l_81[7] = {&p_812->g_36,&p_812->g_36,&p_812->g_36,&p_812->g_36,&p_812->g_36,&p_812->g_36,&p_812->g_36};
            int i;
            l_84--;
            l_83.s6 |= ((*l_80) = func_16(p_812->g_42[3].f5, p_812));
            --p_812->g_90;
        }
        --p_812->g_97;
        return p_812->g_100;
    }
    for (p_812->g_100.f2 = 6; (p_812->g_100.f2 == 16); p_812->g_100.f2 = safe_add_func_uint16_t_u_u(p_812->g_100.f2, 6))
    { /* block id: 38 */
        int32_t *l_103[4] = {&l_87,&l_87,&l_87,&l_87};
        uint8_t l_104 = 0xE0L;
        int i;
        l_104++;
    }
    for (p_812->g_94 = 0; (p_812->g_94 != 11); p_812->g_94 = safe_add_func_int8_t_s_s(p_812->g_94, 2))
    { /* block id: 43 */
        int16_t l_183 = 0x21B3L;
        int32_t *l_184[3][4][7] = {{{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5}},{{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5}},{{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5},{&l_89,&l_96[3][4][1],&p_812->g_42[3].f5,(void*)0,&l_88,(void*)0,&p_812->g_42[3].f5}}};
        uint32_t l_185[7] = {0UL,0xCA64AB7DL,0UL,0UL,0xCA64AB7DL,0UL,0UL};
        int i, j, k;
        if ((atomic_inc(&p_812->l_atomic_input[60]) == 9))
        { /* block id: 45 */
            int32_t l_109 = 0x735A271BL;
            uint64_t l_116[3][10][8] = {{{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL}},{{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL}},{{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL},{18446744073709551615UL,0xBCFDD99D97B6011EL,1UL,18446744073709551611UL,1UL,0xBCFDD99D97B6011EL,18446744073709551615UL,7UL}}};
            int i, j, k;
            for (l_109 = 0; (l_109 >= 4); ++l_109)
            { /* block id: 48 */
                uint8_t l_112 = 0x36L;
                uint32_t l_113[10];
                struct S0 l_114[9][4] = {{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}},{{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{0x7BBEL,-1L,1UL,18446744073709551607UL,0x019CC9C0L,1L,3UL},{-1L,0x269AL,0UL,0x642D32AF4CE8BB6BL,1L,0x03237CEFL,0xF58305FEL}}};
                struct S0 l_115[9] = {{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L},{1L,0x568BL,0xE4L,0xA10EB1AB08536953L,-1L,0x389892B9L,2UL},{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L},{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L},{1L,0x568BL,0xE4L,0xA10EB1AB08536953L,-1L,0x389892B9L,2UL},{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L},{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L},{1L,0x568BL,0xE4L,0xA10EB1AB08536953L,-1L,0x389892B9L,2UL},{0x2ED7L,0x356FL,0UL,18446744073709551607UL,-7L,0x207BBA01L,0xD08A2D78L}};
                int i, j;
                for (i = 0; i < 10; i++)
                    l_113[i] = 4294967295UL;
                l_113[0] = l_112;
                l_115[8] = l_114[6][3];
            }
            l_116[1][6][4]++;
            for (l_109 = 22; (l_109 >= (-5)); l_109--)
            { /* block id: 55 */
                int32_t l_121[7][10][3] = {{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}},{{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L},{1L,(-5L),7L}}};
                VECTOR(int32_t, 4) l_126 = (VECTOR(int32_t, 4))(0x4DFA4226L, (VECTOR(int32_t, 2))(0x4DFA4226L, 8L), 8L);
                int i, j, k;
                for (l_121[1][4][0] = (-7); (l_121[1][4][0] != (-23)); l_121[1][4][0] = safe_sub_func_uint16_t_u_u(l_121[1][4][0], 4))
                { /* block id: 58 */
                    int64_t l_124 = 1L;
                    VECTOR(uint32_t, 2) l_125 = (VECTOR(uint32_t, 2))(0UL, 1UL);
                    int i;
                    l_125.y = l_124;
                }
                if (((VECTOR(int32_t, 4))(l_126.zzyy)).w)
                { /* block id: 61 */
                    uint32_t l_127[2];
                    VECTOR(int32_t, 16) l_128 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1895242DL), 0x1895242DL), 0x1895242DL, 1L, 0x1895242DL, (VECTOR(int32_t, 2))(1L, 0x1895242DL), (VECTOR(int32_t, 2))(1L, 0x1895242DL), 1L, 0x1895242DL, 1L, 0x1895242DL);
                    uint16_t l_129 = 0xFA6EL;
                    int32_t l_130 = 0x2417DDE3L;
                    VECTOR(int32_t, 4) l_131 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x04D78436L), 0x04D78436L);
                    VECTOR(int32_t, 8) l_132 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                    int16_t l_133 = 0x1B90L;
                    int64_t l_134 = 0x19A9337A3339974AL;
                    VECTOR(int32_t, 4) l_135 = (VECTOR(int32_t, 4))(0x0D023A19L, (VECTOR(int32_t, 2))(0x0D023A19L, 1L), 1L);
                    VECTOR(int32_t, 16) l_136 = (VECTOR(int32_t, 16))(0x3FF7CC21L, (VECTOR(int32_t, 4))(0x3FF7CC21L, (VECTOR(int32_t, 2))(0x3FF7CC21L, 0L), 0L), 0L, 0x3FF7CC21L, 0L, (VECTOR(int32_t, 2))(0x3FF7CC21L, 0L), (VECTOR(int32_t, 2))(0x3FF7CC21L, 0L), 0x3FF7CC21L, 0L, 0x3FF7CC21L, 0L);
                    VECTOR(int32_t, 2) l_137 = (VECTOR(int32_t, 2))(0x3874153CL, 0x216E4670L);
                    VECTOR(int32_t, 4) l_138 = (VECTOR(int32_t, 4))(0x1C0DFE4CL, (VECTOR(int32_t, 2))(0x1C0DFE4CL, 1L), 1L);
                    VECTOR(int32_t, 16) l_139 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    VECTOR(int32_t, 2) l_140 = (VECTOR(int32_t, 2))(2L, 0L);
                    uint64_t l_141 = 0x565C9793804D9622L;
                    int8_t l_142 = 0x51L;
                    int8_t l_143 = (-1L);
                    int32_t l_144 = 0x36DCFDDAL;
                    VECTOR(int16_t, 4) l_145 = (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 6L), 6L);
                    VECTOR(int16_t, 2) l_146 = (VECTOR(int16_t, 2))((-10L), 1L);
                    VECTOR(int16_t, 16) l_147 = (VECTOR(int16_t, 16))(0x0657L, (VECTOR(int16_t, 4))(0x0657L, (VECTOR(int16_t, 2))(0x0657L, 0x3D7CL), 0x3D7CL), 0x3D7CL, 0x0657L, 0x3D7CL, (VECTOR(int16_t, 2))(0x0657L, 0x3D7CL), (VECTOR(int16_t, 2))(0x0657L, 0x3D7CL), 0x0657L, 0x3D7CL, 0x0657L, 0x3D7CL);
                    VECTOR(uint16_t, 16) l_148 = (VECTOR(uint16_t, 16))(0xE978L, (VECTOR(uint16_t, 4))(0xE978L, (VECTOR(uint16_t, 2))(0xE978L, 0x4013L), 0x4013L), 0x4013L, 0xE978L, 0x4013L, (VECTOR(uint16_t, 2))(0xE978L, 0x4013L), (VECTOR(uint16_t, 2))(0xE978L, 0x4013L), 0xE978L, 0x4013L, 0xE978L, 0x4013L);
                    VECTOR(int32_t, 4) l_149 = (VECTOR(int32_t, 4))(0x4169CB32L, (VECTOR(int32_t, 2))(0x4169CB32L, 1L), 1L);
                    VECTOR(int16_t, 2) l_150 = (VECTOR(int16_t, 2))(5L, 0x5E47L);
                    VECTOR(int16_t, 4) l_151 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0014L), 0x0014L);
                    VECTOR(int16_t, 4) l_152 = (VECTOR(int16_t, 4))(0x5C24L, (VECTOR(int16_t, 2))(0x5C24L, 0x3B4DL), 0x3B4DL);
                    VECTOR(int16_t, 4) l_153 = (VECTOR(int16_t, 4))(0x51D3L, (VECTOR(int16_t, 2))(0x51D3L, 0x79D9L), 0x79D9L);
                    VECTOR(int16_t, 2) l_154 = (VECTOR(int16_t, 2))(0x42CAL, (-1L));
                    int32_t l_155 = (-9L);
                    uint32_t l_156 = 0x7A1FF17BL;
                    VECTOR(int16_t, 8) l_157 = (VECTOR(int16_t, 8))(0x120CL, (VECTOR(int16_t, 4))(0x120CL, (VECTOR(int16_t, 2))(0x120CL, (-1L)), (-1L)), (-1L), 0x120CL, (-1L));
                    uint64_t l_158 = 18446744073709551611UL;
                    int32_t l_159[6][5][4] = {{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}},{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}},{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}},{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}},{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}},{{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)},{0x490DD8B2L,1L,0x5EAF234EL,(-1L)}}};
                    uint32_t l_160[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                    int8_t l_161[1];
                    int8_t l_162 = 0x3AL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_127[i] = 1UL;
                    for (i = 0; i < 1; i++)
                        l_161[i] = 0x71L;
                    l_126.y = (l_133 &= (l_121[1][4][0] = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(9L, l_127[1], ((VECTOR(int32_t, 8))(l_128.se1a71a36)), l_129, l_130, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_131.ww)))), 0x75844AFDL, 0x391CD5F5L)).lo)).s4515241753360132, ((VECTOR(int32_t, 4))(l_132.s5412)).xwywxzwwywzwxxww))).sd));
                    l_121[6][7][1] &= l_134;
                    l_121[1][4][0] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_135.wyxwyzxy)).lo, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_136.sbf)))), 0x363680A1L, 0x7553D69DL)), ((VECTOR(int32_t, 16))(l_137.xyyyxyyxyyyyxxxx)).s44a4))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_138.wxyzzywy)))).s61, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(l_139.s3431c94d6678a5af)), (int32_t)((((VECTOR(int32_t, 2))(l_140.yx)).hi , 0x2915L) , l_141), (int32_t)((l_143 ^= l_142) , l_144)))))).s60, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(l_145.zwxzzyzz)).odd, ((VECTOR(int16_t, 4))(0x65C1L, ((VECTOR(int16_t, 2))(l_146.yx)), 0x6F88L)), ((VECTOR(int16_t, 8))(l_147.s05eb8092)).lo))).yxwxwwwyzywzywwz)).s32)).yyyyyyxx)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_148.s6c)).xyxyxxyyyyyyyyxx)).s2116))).zwxwywyw)).s26))), ((VECTOR(int32_t, 4))(l_149.xxzw)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(l_150.xyxyxxyyxyyyyyxx)).s78, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(l_151.wwxzwxww)), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_152.wyxyywww)).hi)).even, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(l_153.yxxy)).wyywwxyy, ((VECTOR(int16_t, 4))(l_154.xyxy)).xywzzzyy))).s66))).xyyyyxyy))).hi)).xzyzwzww, ((VECTOR(int16_t, 8))(l_155, ((VECTOR(int16_t, 2))(0L, (-1L))), l_156, ((VECTOR(int16_t, 2))(l_157.s33)), 0x7827L, 0x0E5AL))))).lo, ((VECTOR(int16_t, 4))(1L, (-4L), (-2L), (-10L)))))))))).odd, ((VECTOR(int16_t, 16))(1L, (-1L), (l_158 , l_159[0][3][0]), ((VECTOR(int16_t, 4))(2L)), l_160[0], ((VECTOR(int16_t, 8))(0x0038L)))).s2c))).xxyy)).lo, ((VECTOR(int16_t, 2))(0x2F9EL)), ((VECTOR(int16_t, 2))(7L))))), 0L, (-1L))).lo)), ((VECTOR(uint16_t, 2))(0UL))))), (int32_t)l_161[0], (int32_t)l_162))).yyxyyxxyyyyyyyyx)).sd4))).yyyy))))).zzxwwwwy)).s5;
                }
                else
                { /* block id: 68 */
                    int32_t l_163[2][9] = {{0x447F2C3CL,(-7L),0x447F2C3CL,0x447F2C3CL,(-7L),0x447F2C3CL,0x447F2C3CL,(-7L),0x447F2C3CL},{0x447F2C3CL,(-7L),0x447F2C3CL,0x447F2C3CL,(-7L),0x447F2C3CL,0x447F2C3CL,(-7L),0x447F2C3CL}};
                    VECTOR(uint8_t, 16) l_179 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x0CL), 0x0CL), 0x0CL, 0UL, 0x0CL, (VECTOR(uint8_t, 2))(0UL, 0x0CL), (VECTOR(uint8_t, 2))(0UL, 0x0CL), 0UL, 0x0CL, 0UL, 0x0CL);
                    int i, j;
                    for (l_163[1][4] = 0; (l_163[1][4] != (-28)); --l_163[1][4])
                    { /* block id: 71 */
                        int32_t l_168 = 0x55B75E65L;
                        int32_t *l_167[3][9][7] = {{{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168}},{{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168}},{{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168},{&l_168,&l_168,(void*)0,&l_168,&l_168,&l_168,&l_168}}};
                        int32_t **l_166 = &l_167[2][1][0];
                        int32_t **l_169 = (void*)0;
                        uint16_t l_170 = 65535UL;
                        int64_t l_173 = 0L;
                        int32_t l_174 = (-1L);
                        int16_t l_175 = 0x1206L;
                        uint8_t l_176 = 0x8BL;
                        int i, j, k;
                        l_121[2][2][2] |= 2L;
                        l_169 = l_166;
                        l_170++;
                        l_176++;
                    }
                    if (l_179.se)
                    { /* block id: 77 */
                        VECTOR(uint16_t, 4) l_180 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x8073L), 0x8073L);
                        int i;
                        l_126.y ^= (l_163[0][6] = l_180.x);
                    }
                    else
                    { /* block id: 80 */
                        struct S0 l_181[2][8][9] = {{{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}}},{{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}},{{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{-4L,6L,7UL,18446744073709551615UL,-4L,1L,4294967286UL},{0x14B1L,0x1DA7L,251UL,0UL,0x4B34C819L,0x009C6021L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x16E9L,0x3B8AL,0x98L,0xEFA681B2EEEA668FL,0x1760B0DCL,-1L,4294967288UL},{0x4848L,-5L,255UL,9UL,0x4218CA98L,-1L,1UL},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L},{0x3F34L,0x3A13L,0xB5L,1UL,0x5BD58738L,0x403BA694L,0xA984D779L},{0x55A9L,8L,255UL,0UL,6L,-1L,0xF1330DE8L}}}};
                        struct S0 l_182 = {-3L,0L,0UL,18446744073709551611UL,0x702C7A5CL,0x6BCC9911L,0x011C773FL};/* VOLATILE GLOBAL l_182 */
                        int i, j, k;
                        l_182 = l_181[1][6][8];
                    }
                }
            }
            unsigned int result = 0;
            result += l_109;
            int l_116_i0, l_116_i1, l_116_i2;
            for (l_116_i0 = 0; l_116_i0 < 3; l_116_i0++) {
                for (l_116_i1 = 0; l_116_i1 < 10; l_116_i1++) {
                    for (l_116_i2 = 0; l_116_i2 < 8; l_116_i2++) {
                        result += l_116[l_116_i0][l_116_i1][l_116_i2];
                    }
                }
            }
            atomic_add(&p_812->l_special_values[60], result);
        }
        else
        { /* block id: 85 */
            (1 + 1);
        }
        ++l_185[4];
    }
    return p_812->g_188;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_214 p_812->g_253
 * writes: p_812->g_214 p_812->g_253
 */
uint32_t  func_190(int64_t * p_191, int8_t  p_192, int32_t ** p_193, int8_t  p_194, struct S1 * p_812)
{ /* block id: 104 */
    int32_t l_241 = 0x40322A89L;
    int32_t l_243 = 2L;
    int32_t l_251[5][10][5] = {{{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L}},{{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L}},{{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L}},{{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L}},{{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L},{0L,0x5150329AL,0x24E53369L,0x7ADCC200L,9L}}};
    int i, j, k;
    for (p_812->g_214 = 0; (p_812->g_214 >= 56); ++p_812->g_214)
    { /* block id: 107 */
        int32_t *l_236 = &p_812->g_237;
        int32_t *l_238 = (void*)0;
        int32_t *l_239 = &p_812->g_237;
        int32_t *l_240 = &p_812->g_237;
        int32_t *l_242 = &p_812->g_237;
        int32_t *l_244 = (void*)0;
        int32_t *l_245 = &p_812->g_237;
        int32_t *l_246 = &p_812->g_237;
        int32_t *l_247 = (void*)0;
        int32_t *l_248 = &p_812->g_237;
        int32_t *l_249 = &p_812->g_237;
        int32_t *l_250[7][8] = {{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237},{&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237,&p_812->g_237}};
        int i, j;
        --p_812->g_253.s2;
    }
    return p_194;
}


/* ------------------------------------------ */
/* 
 * reads : p_812->g_208 p_812->g_100.f0 p_812->g_188.f5 p_812->g_223
 * writes: p_812->g_42.f2 p_812->g_214 p_812->g_208 p_812->g_231 p_812->g_233
 */
int64_t * func_195(int32_t  p_196, uint32_t  p_197, uint16_t  p_198, int32_t * p_199, uint64_t  p_200, struct S1 * p_812)
{ /* block id: 92 */
    VECTOR(int8_t, 8) l_206 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x72L), 0x72L), 0x72L, 1L, 0x72L);
    VECTOR(int8_t, 16) l_207 = (VECTOR(int8_t, 16))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x33L), 0x33L), 0x33L, 0x5FL, 0x33L, (VECTOR(int8_t, 2))(0x5FL, 0x33L), (VECTOR(int8_t, 2))(0x5FL, 0x33L), 0x5FL, 0x33L, 0x5FL, 0x33L);
    VECTOR(int8_t, 4) l_209 = (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x40L), 0x40L);
    uint8_t *l_212 = &p_812->g_42[3].f2;
    uint8_t *l_213 = &p_812->g_214;
    int8_t *l_215[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_216 = 0x5FCB4B0FL;
    uint64_t *l_230 = &p_812->g_231;
    uint16_t *l_232 = &p_812->g_233[0][6][4];
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_812->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 87)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x56L, 0x1DL)))), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(l_206.s0646)).odd, ((VECTOR(int8_t, 8))(l_207.sfae959db)).s55))).yyxx, (int8_t)0x31L))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(p_812->g_208.s5053)).xwyzwxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0x7DL, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(l_209.xzzxxzyx)), (int8_t)((l_216 = (safe_sub_func_uint8_t_u_u(((*l_213) = (p_197 , ((*l_212) = p_812->g_100.f0))), p_812->g_188.f5))) , (safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((*l_232) = ((((p_197 | ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, (-1L))).xyxxxyyx)).s7) , p_812->g_223) == ((safe_mod_func_uint64_t_u_u(((*l_230) = ((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x54L, 1)), l_209.z)) && ((*p_199) = (((p_812->g_208.s2 |= p_198) || 0x6FL) == p_200))) , (void*)0) != p_812->g_223)), l_216)) , (void*)0)) , p_812->g_188.f5)), 65526UL)), 18446744073709551615UL)), p_198)))))), (int8_t)l_206.s5))).s5715350452754073)), ((VECTOR(int8_t, 16))((-1L)))))).s2f, ((VECTOR(int8_t, 2))(0x6AL))))), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x02L))))), (-1L))))), ((VECTOR(int8_t, 4))((-5L)))))).even)).yxxxxxxy))).s54))).xxxxxyyy, ((VECTOR(int8_t, 8))(0x24L))))).s2323751751056375)).sef3a, ((VECTOR(int8_t, 4))(0x59L))))), ((VECTOR(int8_t, 4))(3L))))), ((VECTOR(int8_t, 4))(0x7EL)), 7L, (-1L), ((VECTOR(int8_t, 4))((-1L))))).hi, ((VECTOR(int8_t, 8))((-1L)))))).s3, p_197)), 10))][(safe_mod_func_uint32_t_u_u(p_812->tid, 87))]));
    return l_230;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_comm_values[i] = 1;
    struct S1 c_813;
    struct S1* p_812 = &c_813;
    struct S1 c_814 = {
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), // p_812->g_21
        0x63979D79L, // p_812->g_36
        &p_812->g_36, // p_812->g_38
        0L, // p_812->g_39
        {{8L,1L,0xBDL,0x6DA6125F89738BBDL,0L,0x6F270ADFL,0x402E8398L},{8L,1L,0xBDL,0x6DA6125F89738BBDL,0L,0x6F270ADFL,0x402E8398L},{8L,1L,0xBDL,0x6DA6125F89738BBDL,0L,0x6F270ADFL,0x402E8398L},{8L,1L,0xBDL,0x6DA6125F89738BBDL,0L,0x6F270ADFL,0x402E8398L},{8L,1L,0xBDL,0x6DA6125F89738BBDL,0L,0x6F270ADFL,0x402E8398L}}, // p_812->g_42
        (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x6581L), 0x6581L), 0x6581L, (-4L), 0x6581L, (VECTOR(int16_t, 2))((-4L), 0x6581L), (VECTOR(int16_t, 2))((-4L), 0x6581L), (-4L), 0x6581L, (-4L), 0x6581L), // p_812->g_56
        {(void*)0,(void*)0}, // p_812->g_57
        7UL, // p_812->g_90
        0x06077EAAL, // p_812->g_94
        6UL, // p_812->g_97
        {0x13F2L,0L,0x0FL,0UL,0x17B6AFEBL,-10L,7UL}, // p_812->g_100
        {0x2561L,3L,0x60L,1UL,0x77CA8C6DL,-6L,3UL}, // p_812->g_188
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_812->g_208
        0x15L, // p_812->g_214
        (void*)0, // p_812->g_223
        0x7285B826F6BB8693L, // p_812->g_231
        {{{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL}},{{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL},{0x6CAEL,0x6CAEL,0x5321L,0x074DL,0UL,0x074DL}}}, // p_812->g_233
        0x1B049E0BL, // p_812->g_237
        0x0C0C00E2A946E749L, // p_812->g_252
        (VECTOR(uint64_t, 16))(0xA4C8DF442A454FFEL, (VECTOR(uint64_t, 4))(0xA4C8DF442A454FFEL, (VECTOR(uint64_t, 2))(0xA4C8DF442A454FFEL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xA4C8DF442A454FFEL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xA4C8DF442A454FFEL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xA4C8DF442A454FFEL, 18446744073709551615UL), 0xA4C8DF442A454FFEL, 18446744073709551615UL, 0xA4C8DF442A454FFEL, 18446744073709551615UL), // p_812->g_253
        {0x476CL,0x18BFL,7UL,18446744073709551615UL,0L,1L,0x17C5CC1FL}, // p_812->g_256
        1L, // p_812->g_294
        0x6396L, // p_812->g_297
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL, (VECTOR(uint32_t, 2))(0UL, 9UL), (VECTOR(uint32_t, 2))(0UL, 9UL), 0UL, 9UL, 0UL, 9UL), // p_812->g_353
        (VECTOR(uint32_t, 2))(7UL, 4294967293UL), // p_812->g_354
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967290UL), 4294967290UL), 4294967290UL, 1UL, 4294967290UL, (VECTOR(uint32_t, 2))(1UL, 4294967290UL), (VECTOR(uint32_t, 2))(1UL, 4294967290UL), 1UL, 4294967290UL, 1UL, 4294967290UL), // p_812->g_355
        (VECTOR(uint32_t, 2))(1UL, 7UL), // p_812->g_357
        (void*)0, // p_812->g_365
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_812->g_364
        {{{&p_812->g_365,&p_812->g_365,&p_812->g_365}},{{&p_812->g_365,&p_812->g_365,&p_812->g_365}}}, // p_812->g_369
        (void*)0, // p_812->g_419
        {0x6BFFL,0x591DL,6UL,1UL,-9L,6L,0x738E2D4AL}, // p_812->g_448
        {0x0016L,-7L,0xA6L,1UL,0x4C3EF490L,0x7E9FF903L,4294967295UL}, // p_812->g_449
        (VECTOR(int32_t, 2))(0x0E1DA620L, 0x10AD20C6L), // p_812->g_450
        (-7L), // p_812->g_493
        {1L,7L,255UL,2UL,1L,0L,4294967295UL}, // p_812->g_498
        {0L,-1L,251UL,18446744073709551615UL,1L,0x75C4282EL,0x05F8611EL}, // p_812->g_500
        {1L,0x5FFAL,4UL,0x646BBBF4D98B74C5L,0x10672D1CL,0x31CD9254L,0xD849FB3DL}, // p_812->g_525
        {1L,0x6692L,251UL,6UL,1L,0x02E7282BL,0x8D308C50L}, // p_812->g_550
        0UL, // p_812->g_562
        0L, // p_812->g_570
        1UL, // p_812->g_592
        8UL, // p_812->g_603
        {0x2DC9L,0x4323L,252UL,1UL,0L,-9L,6UL}, // p_812->g_612
        (VECTOR(uint32_t, 2))(0x013AE92EL, 0x6914E155L), // p_812->g_616
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x6D399545L), 0x6D399545L), 0x6D399545L, 4294967295UL, 0x6D399545L), // p_812->g_617
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, 1UL), // p_812->g_618
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL), // p_812->g_639
        (VECTOR(int32_t, 2))(0x5A18CB78L, 0x697CCD8EL), // p_812->g_656
        (VECTOR(uint16_t, 16))(0x9674L, (VECTOR(uint16_t, 4))(0x9674L, (VECTOR(uint16_t, 2))(0x9674L, 0xC19BL), 0xC19BL), 0xC19BL, 0x9674L, 0xC19BL, (VECTOR(uint16_t, 2))(0x9674L, 0xC19BL), (VECTOR(uint16_t, 2))(0x9674L, 0xC19BL), 0x9674L, 0xC19BL, 0x9674L, 0xC19BL), // p_812->g_726
        (VECTOR(uint16_t, 16))(0x5C7CL, (VECTOR(uint16_t, 4))(0x5C7CL, (VECTOR(uint16_t, 2))(0x5C7CL, 0UL), 0UL), 0UL, 0x5C7CL, 0UL, (VECTOR(uint16_t, 2))(0x5C7CL, 0UL), (VECTOR(uint16_t, 2))(0x5C7CL, 0UL), 0x5C7CL, 0UL, 0x5C7CL, 0UL), // p_812->g_727
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 9UL), 9UL), 9UL, 65535UL, 9UL), // p_812->g_728
        (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0xB0980722L), 0xB0980722L), 0xB0980722L, 5UL, 0xB0980722L), // p_812->g_737
        &p_812->g_419, // p_812->g_747
        &p_812->g_747, // p_812->g_746
        (void*)0, // p_812->g_750
        &p_812->g_750, // p_812->g_749
        0, // p_812->v_collective
        sequence_input[get_global_id(0)], // p_812->global_0_offset
        sequence_input[get_global_id(1)], // p_812->global_1_offset
        sequence_input[get_global_id(2)], // p_812->global_2_offset
        sequence_input[get_local_id(0)], // p_812->local_0_offset
        sequence_input[get_local_id(1)], // p_812->local_1_offset
        sequence_input[get_local_id(2)], // p_812->local_2_offset
        sequence_input[get_group_id(0)], // p_812->group_0_offset
        sequence_input[get_group_id(1)], // p_812->group_1_offset
        sequence_input[get_group_id(2)], // p_812->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 87)), permutations[0][get_linear_local_id()])), // p_812->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_813 = c_814;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_812);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_812->g_21.x, "p_812->g_21.x", print_hash_value);
    transparent_crc(p_812->g_21.y, "p_812->g_21.y", print_hash_value);
    transparent_crc(p_812->g_21.z, "p_812->g_21.z", print_hash_value);
    transparent_crc(p_812->g_21.w, "p_812->g_21.w", print_hash_value);
    transparent_crc(p_812->g_36, "p_812->g_36", print_hash_value);
    transparent_crc(p_812->g_39, "p_812->g_39", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_812->g_42[i].f0, "p_812->g_42[i].f0", print_hash_value);
        transparent_crc(p_812->g_42[i].f1, "p_812->g_42[i].f1", print_hash_value);
        transparent_crc(p_812->g_42[i].f2, "p_812->g_42[i].f2", print_hash_value);
        transparent_crc(p_812->g_42[i].f3, "p_812->g_42[i].f3", print_hash_value);
        transparent_crc(p_812->g_42[i].f4, "p_812->g_42[i].f4", print_hash_value);
        transparent_crc(p_812->g_42[i].f5, "p_812->g_42[i].f5", print_hash_value);
        transparent_crc(p_812->g_42[i].f6, "p_812->g_42[i].f6", print_hash_value);

    }
    transparent_crc(p_812->g_56.s0, "p_812->g_56.s0", print_hash_value);
    transparent_crc(p_812->g_56.s1, "p_812->g_56.s1", print_hash_value);
    transparent_crc(p_812->g_56.s2, "p_812->g_56.s2", print_hash_value);
    transparent_crc(p_812->g_56.s3, "p_812->g_56.s3", print_hash_value);
    transparent_crc(p_812->g_56.s4, "p_812->g_56.s4", print_hash_value);
    transparent_crc(p_812->g_56.s5, "p_812->g_56.s5", print_hash_value);
    transparent_crc(p_812->g_56.s6, "p_812->g_56.s6", print_hash_value);
    transparent_crc(p_812->g_56.s7, "p_812->g_56.s7", print_hash_value);
    transparent_crc(p_812->g_56.s8, "p_812->g_56.s8", print_hash_value);
    transparent_crc(p_812->g_56.s9, "p_812->g_56.s9", print_hash_value);
    transparent_crc(p_812->g_56.sa, "p_812->g_56.sa", print_hash_value);
    transparent_crc(p_812->g_56.sb, "p_812->g_56.sb", print_hash_value);
    transparent_crc(p_812->g_56.sc, "p_812->g_56.sc", print_hash_value);
    transparent_crc(p_812->g_56.sd, "p_812->g_56.sd", print_hash_value);
    transparent_crc(p_812->g_56.se, "p_812->g_56.se", print_hash_value);
    transparent_crc(p_812->g_56.sf, "p_812->g_56.sf", print_hash_value);
    transparent_crc(p_812->g_90, "p_812->g_90", print_hash_value);
    transparent_crc(p_812->g_94, "p_812->g_94", print_hash_value);
    transparent_crc(p_812->g_97, "p_812->g_97", print_hash_value);
    transparent_crc(p_812->g_100.f0, "p_812->g_100.f0", print_hash_value);
    transparent_crc(p_812->g_100.f1, "p_812->g_100.f1", print_hash_value);
    transparent_crc(p_812->g_100.f2, "p_812->g_100.f2", print_hash_value);
    transparent_crc(p_812->g_100.f3, "p_812->g_100.f3", print_hash_value);
    transparent_crc(p_812->g_100.f4, "p_812->g_100.f4", print_hash_value);
    transparent_crc(p_812->g_100.f5, "p_812->g_100.f5", print_hash_value);
    transparent_crc(p_812->g_100.f6, "p_812->g_100.f6", print_hash_value);
    transparent_crc(p_812->g_188.f0, "p_812->g_188.f0", print_hash_value);
    transparent_crc(p_812->g_188.f1, "p_812->g_188.f1", print_hash_value);
    transparent_crc(p_812->g_188.f2, "p_812->g_188.f2", print_hash_value);
    transparent_crc(p_812->g_188.f3, "p_812->g_188.f3", print_hash_value);
    transparent_crc(p_812->g_188.f4, "p_812->g_188.f4", print_hash_value);
    transparent_crc(p_812->g_188.f5, "p_812->g_188.f5", print_hash_value);
    transparent_crc(p_812->g_188.f6, "p_812->g_188.f6", print_hash_value);
    transparent_crc(p_812->g_208.s0, "p_812->g_208.s0", print_hash_value);
    transparent_crc(p_812->g_208.s1, "p_812->g_208.s1", print_hash_value);
    transparent_crc(p_812->g_208.s2, "p_812->g_208.s2", print_hash_value);
    transparent_crc(p_812->g_208.s3, "p_812->g_208.s3", print_hash_value);
    transparent_crc(p_812->g_208.s4, "p_812->g_208.s4", print_hash_value);
    transparent_crc(p_812->g_208.s5, "p_812->g_208.s5", print_hash_value);
    transparent_crc(p_812->g_208.s6, "p_812->g_208.s6", print_hash_value);
    transparent_crc(p_812->g_208.s7, "p_812->g_208.s7", print_hash_value);
    transparent_crc(p_812->g_208.s8, "p_812->g_208.s8", print_hash_value);
    transparent_crc(p_812->g_208.s9, "p_812->g_208.s9", print_hash_value);
    transparent_crc(p_812->g_208.sa, "p_812->g_208.sa", print_hash_value);
    transparent_crc(p_812->g_208.sb, "p_812->g_208.sb", print_hash_value);
    transparent_crc(p_812->g_208.sc, "p_812->g_208.sc", print_hash_value);
    transparent_crc(p_812->g_208.sd, "p_812->g_208.sd", print_hash_value);
    transparent_crc(p_812->g_208.se, "p_812->g_208.se", print_hash_value);
    transparent_crc(p_812->g_208.sf, "p_812->g_208.sf", print_hash_value);
    transparent_crc(p_812->g_214, "p_812->g_214", print_hash_value);
    transparent_crc(p_812->g_231, "p_812->g_231", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_812->g_233[i][j][k], "p_812->g_233[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_812->g_237, "p_812->g_237", print_hash_value);
    transparent_crc(p_812->g_252, "p_812->g_252", print_hash_value);
    transparent_crc(p_812->g_253.s0, "p_812->g_253.s0", print_hash_value);
    transparent_crc(p_812->g_253.s1, "p_812->g_253.s1", print_hash_value);
    transparent_crc(p_812->g_253.s2, "p_812->g_253.s2", print_hash_value);
    transparent_crc(p_812->g_253.s3, "p_812->g_253.s3", print_hash_value);
    transparent_crc(p_812->g_253.s4, "p_812->g_253.s4", print_hash_value);
    transparent_crc(p_812->g_253.s5, "p_812->g_253.s5", print_hash_value);
    transparent_crc(p_812->g_253.s6, "p_812->g_253.s6", print_hash_value);
    transparent_crc(p_812->g_253.s7, "p_812->g_253.s7", print_hash_value);
    transparent_crc(p_812->g_253.s8, "p_812->g_253.s8", print_hash_value);
    transparent_crc(p_812->g_253.s9, "p_812->g_253.s9", print_hash_value);
    transparent_crc(p_812->g_253.sa, "p_812->g_253.sa", print_hash_value);
    transparent_crc(p_812->g_253.sb, "p_812->g_253.sb", print_hash_value);
    transparent_crc(p_812->g_253.sc, "p_812->g_253.sc", print_hash_value);
    transparent_crc(p_812->g_253.sd, "p_812->g_253.sd", print_hash_value);
    transparent_crc(p_812->g_253.se, "p_812->g_253.se", print_hash_value);
    transparent_crc(p_812->g_253.sf, "p_812->g_253.sf", print_hash_value);
    transparent_crc(p_812->g_256.f0, "p_812->g_256.f0", print_hash_value);
    transparent_crc(p_812->g_256.f1, "p_812->g_256.f1", print_hash_value);
    transparent_crc(p_812->g_256.f2, "p_812->g_256.f2", print_hash_value);
    transparent_crc(p_812->g_256.f3, "p_812->g_256.f3", print_hash_value);
    transparent_crc(p_812->g_256.f4, "p_812->g_256.f4", print_hash_value);
    transparent_crc(p_812->g_256.f5, "p_812->g_256.f5", print_hash_value);
    transparent_crc(p_812->g_256.f6, "p_812->g_256.f6", print_hash_value);
    transparent_crc(p_812->g_294, "p_812->g_294", print_hash_value);
    transparent_crc(p_812->g_297, "p_812->g_297", print_hash_value);
    transparent_crc(p_812->g_353.s0, "p_812->g_353.s0", print_hash_value);
    transparent_crc(p_812->g_353.s1, "p_812->g_353.s1", print_hash_value);
    transparent_crc(p_812->g_353.s2, "p_812->g_353.s2", print_hash_value);
    transparent_crc(p_812->g_353.s3, "p_812->g_353.s3", print_hash_value);
    transparent_crc(p_812->g_353.s4, "p_812->g_353.s4", print_hash_value);
    transparent_crc(p_812->g_353.s5, "p_812->g_353.s5", print_hash_value);
    transparent_crc(p_812->g_353.s6, "p_812->g_353.s6", print_hash_value);
    transparent_crc(p_812->g_353.s7, "p_812->g_353.s7", print_hash_value);
    transparent_crc(p_812->g_353.s8, "p_812->g_353.s8", print_hash_value);
    transparent_crc(p_812->g_353.s9, "p_812->g_353.s9", print_hash_value);
    transparent_crc(p_812->g_353.sa, "p_812->g_353.sa", print_hash_value);
    transparent_crc(p_812->g_353.sb, "p_812->g_353.sb", print_hash_value);
    transparent_crc(p_812->g_353.sc, "p_812->g_353.sc", print_hash_value);
    transparent_crc(p_812->g_353.sd, "p_812->g_353.sd", print_hash_value);
    transparent_crc(p_812->g_353.se, "p_812->g_353.se", print_hash_value);
    transparent_crc(p_812->g_353.sf, "p_812->g_353.sf", print_hash_value);
    transparent_crc(p_812->g_354.x, "p_812->g_354.x", print_hash_value);
    transparent_crc(p_812->g_354.y, "p_812->g_354.y", print_hash_value);
    transparent_crc(p_812->g_355.s0, "p_812->g_355.s0", print_hash_value);
    transparent_crc(p_812->g_355.s1, "p_812->g_355.s1", print_hash_value);
    transparent_crc(p_812->g_355.s2, "p_812->g_355.s2", print_hash_value);
    transparent_crc(p_812->g_355.s3, "p_812->g_355.s3", print_hash_value);
    transparent_crc(p_812->g_355.s4, "p_812->g_355.s4", print_hash_value);
    transparent_crc(p_812->g_355.s5, "p_812->g_355.s5", print_hash_value);
    transparent_crc(p_812->g_355.s6, "p_812->g_355.s6", print_hash_value);
    transparent_crc(p_812->g_355.s7, "p_812->g_355.s7", print_hash_value);
    transparent_crc(p_812->g_355.s8, "p_812->g_355.s8", print_hash_value);
    transparent_crc(p_812->g_355.s9, "p_812->g_355.s9", print_hash_value);
    transparent_crc(p_812->g_355.sa, "p_812->g_355.sa", print_hash_value);
    transparent_crc(p_812->g_355.sb, "p_812->g_355.sb", print_hash_value);
    transparent_crc(p_812->g_355.sc, "p_812->g_355.sc", print_hash_value);
    transparent_crc(p_812->g_355.sd, "p_812->g_355.sd", print_hash_value);
    transparent_crc(p_812->g_355.se, "p_812->g_355.se", print_hash_value);
    transparent_crc(p_812->g_355.sf, "p_812->g_355.sf", print_hash_value);
    transparent_crc(p_812->g_357.x, "p_812->g_357.x", print_hash_value);
    transparent_crc(p_812->g_357.y, "p_812->g_357.y", print_hash_value);
    transparent_crc(p_812->g_448.f0, "p_812->g_448.f0", print_hash_value);
    transparent_crc(p_812->g_448.f1, "p_812->g_448.f1", print_hash_value);
    transparent_crc(p_812->g_448.f2, "p_812->g_448.f2", print_hash_value);
    transparent_crc(p_812->g_448.f3, "p_812->g_448.f3", print_hash_value);
    transparent_crc(p_812->g_448.f4, "p_812->g_448.f4", print_hash_value);
    transparent_crc(p_812->g_448.f5, "p_812->g_448.f5", print_hash_value);
    transparent_crc(p_812->g_448.f6, "p_812->g_448.f6", print_hash_value);
    transparent_crc(p_812->g_449.f0, "p_812->g_449.f0", print_hash_value);
    transparent_crc(p_812->g_449.f1, "p_812->g_449.f1", print_hash_value);
    transparent_crc(p_812->g_449.f2, "p_812->g_449.f2", print_hash_value);
    transparent_crc(p_812->g_449.f3, "p_812->g_449.f3", print_hash_value);
    transparent_crc(p_812->g_449.f4, "p_812->g_449.f4", print_hash_value);
    transparent_crc(p_812->g_449.f5, "p_812->g_449.f5", print_hash_value);
    transparent_crc(p_812->g_449.f6, "p_812->g_449.f6", print_hash_value);
    transparent_crc(p_812->g_450.x, "p_812->g_450.x", print_hash_value);
    transparent_crc(p_812->g_450.y, "p_812->g_450.y", print_hash_value);
    transparent_crc(p_812->g_493, "p_812->g_493", print_hash_value);
    transparent_crc(p_812->g_498.f0, "p_812->g_498.f0", print_hash_value);
    transparent_crc(p_812->g_498.f1, "p_812->g_498.f1", print_hash_value);
    transparent_crc(p_812->g_498.f2, "p_812->g_498.f2", print_hash_value);
    transparent_crc(p_812->g_498.f3, "p_812->g_498.f3", print_hash_value);
    transparent_crc(p_812->g_498.f4, "p_812->g_498.f4", print_hash_value);
    transparent_crc(p_812->g_498.f5, "p_812->g_498.f5", print_hash_value);
    transparent_crc(p_812->g_498.f6, "p_812->g_498.f6", print_hash_value);
    transparent_crc(p_812->g_500.f0, "p_812->g_500.f0", print_hash_value);
    transparent_crc(p_812->g_500.f1, "p_812->g_500.f1", print_hash_value);
    transparent_crc(p_812->g_500.f2, "p_812->g_500.f2", print_hash_value);
    transparent_crc(p_812->g_500.f3, "p_812->g_500.f3", print_hash_value);
    transparent_crc(p_812->g_500.f4, "p_812->g_500.f4", print_hash_value);
    transparent_crc(p_812->g_500.f5, "p_812->g_500.f5", print_hash_value);
    transparent_crc(p_812->g_500.f6, "p_812->g_500.f6", print_hash_value);
    transparent_crc(p_812->g_525.f0, "p_812->g_525.f0", print_hash_value);
    transparent_crc(p_812->g_525.f1, "p_812->g_525.f1", print_hash_value);
    transparent_crc(p_812->g_525.f2, "p_812->g_525.f2", print_hash_value);
    transparent_crc(p_812->g_525.f3, "p_812->g_525.f3", print_hash_value);
    transparent_crc(p_812->g_525.f4, "p_812->g_525.f4", print_hash_value);
    transparent_crc(p_812->g_525.f5, "p_812->g_525.f5", print_hash_value);
    transparent_crc(p_812->g_525.f6, "p_812->g_525.f6", print_hash_value);
    transparent_crc(p_812->g_550.f0, "p_812->g_550.f0", print_hash_value);
    transparent_crc(p_812->g_550.f1, "p_812->g_550.f1", print_hash_value);
    transparent_crc(p_812->g_550.f2, "p_812->g_550.f2", print_hash_value);
    transparent_crc(p_812->g_550.f3, "p_812->g_550.f3", print_hash_value);
    transparent_crc(p_812->g_550.f4, "p_812->g_550.f4", print_hash_value);
    transparent_crc(p_812->g_550.f5, "p_812->g_550.f5", print_hash_value);
    transparent_crc(p_812->g_550.f6, "p_812->g_550.f6", print_hash_value);
    transparent_crc(p_812->g_562, "p_812->g_562", print_hash_value);
    transparent_crc(p_812->g_570, "p_812->g_570", print_hash_value);
    transparent_crc(p_812->g_592, "p_812->g_592", print_hash_value);
    transparent_crc(p_812->g_603, "p_812->g_603", print_hash_value);
    transparent_crc(p_812->g_612.f0, "p_812->g_612.f0", print_hash_value);
    transparent_crc(p_812->g_612.f1, "p_812->g_612.f1", print_hash_value);
    transparent_crc(p_812->g_612.f2, "p_812->g_612.f2", print_hash_value);
    transparent_crc(p_812->g_612.f3, "p_812->g_612.f3", print_hash_value);
    transparent_crc(p_812->g_612.f4, "p_812->g_612.f4", print_hash_value);
    transparent_crc(p_812->g_612.f5, "p_812->g_612.f5", print_hash_value);
    transparent_crc(p_812->g_612.f6, "p_812->g_612.f6", print_hash_value);
    transparent_crc(p_812->g_616.x, "p_812->g_616.x", print_hash_value);
    transparent_crc(p_812->g_616.y, "p_812->g_616.y", print_hash_value);
    transparent_crc(p_812->g_617.s0, "p_812->g_617.s0", print_hash_value);
    transparent_crc(p_812->g_617.s1, "p_812->g_617.s1", print_hash_value);
    transparent_crc(p_812->g_617.s2, "p_812->g_617.s2", print_hash_value);
    transparent_crc(p_812->g_617.s3, "p_812->g_617.s3", print_hash_value);
    transparent_crc(p_812->g_617.s4, "p_812->g_617.s4", print_hash_value);
    transparent_crc(p_812->g_617.s5, "p_812->g_617.s5", print_hash_value);
    transparent_crc(p_812->g_617.s6, "p_812->g_617.s6", print_hash_value);
    transparent_crc(p_812->g_617.s7, "p_812->g_617.s7", print_hash_value);
    transparent_crc(p_812->g_618.s0, "p_812->g_618.s0", print_hash_value);
    transparent_crc(p_812->g_618.s1, "p_812->g_618.s1", print_hash_value);
    transparent_crc(p_812->g_618.s2, "p_812->g_618.s2", print_hash_value);
    transparent_crc(p_812->g_618.s3, "p_812->g_618.s3", print_hash_value);
    transparent_crc(p_812->g_618.s4, "p_812->g_618.s4", print_hash_value);
    transparent_crc(p_812->g_618.s5, "p_812->g_618.s5", print_hash_value);
    transparent_crc(p_812->g_618.s6, "p_812->g_618.s6", print_hash_value);
    transparent_crc(p_812->g_618.s7, "p_812->g_618.s7", print_hash_value);
    transparent_crc(p_812->g_618.s8, "p_812->g_618.s8", print_hash_value);
    transparent_crc(p_812->g_618.s9, "p_812->g_618.s9", print_hash_value);
    transparent_crc(p_812->g_618.sa, "p_812->g_618.sa", print_hash_value);
    transparent_crc(p_812->g_618.sb, "p_812->g_618.sb", print_hash_value);
    transparent_crc(p_812->g_618.sc, "p_812->g_618.sc", print_hash_value);
    transparent_crc(p_812->g_618.sd, "p_812->g_618.sd", print_hash_value);
    transparent_crc(p_812->g_618.se, "p_812->g_618.se", print_hash_value);
    transparent_crc(p_812->g_618.sf, "p_812->g_618.sf", print_hash_value);
    transparent_crc(p_812->g_639.s0, "p_812->g_639.s0", print_hash_value);
    transparent_crc(p_812->g_639.s1, "p_812->g_639.s1", print_hash_value);
    transparent_crc(p_812->g_639.s2, "p_812->g_639.s2", print_hash_value);
    transparent_crc(p_812->g_639.s3, "p_812->g_639.s3", print_hash_value);
    transparent_crc(p_812->g_639.s4, "p_812->g_639.s4", print_hash_value);
    transparent_crc(p_812->g_639.s5, "p_812->g_639.s5", print_hash_value);
    transparent_crc(p_812->g_639.s6, "p_812->g_639.s6", print_hash_value);
    transparent_crc(p_812->g_639.s7, "p_812->g_639.s7", print_hash_value);
    transparent_crc(p_812->g_656.x, "p_812->g_656.x", print_hash_value);
    transparent_crc(p_812->g_656.y, "p_812->g_656.y", print_hash_value);
    transparent_crc(p_812->g_726.s0, "p_812->g_726.s0", print_hash_value);
    transparent_crc(p_812->g_726.s1, "p_812->g_726.s1", print_hash_value);
    transparent_crc(p_812->g_726.s2, "p_812->g_726.s2", print_hash_value);
    transparent_crc(p_812->g_726.s3, "p_812->g_726.s3", print_hash_value);
    transparent_crc(p_812->g_726.s4, "p_812->g_726.s4", print_hash_value);
    transparent_crc(p_812->g_726.s5, "p_812->g_726.s5", print_hash_value);
    transparent_crc(p_812->g_726.s6, "p_812->g_726.s6", print_hash_value);
    transparent_crc(p_812->g_726.s7, "p_812->g_726.s7", print_hash_value);
    transparent_crc(p_812->g_726.s8, "p_812->g_726.s8", print_hash_value);
    transparent_crc(p_812->g_726.s9, "p_812->g_726.s9", print_hash_value);
    transparent_crc(p_812->g_726.sa, "p_812->g_726.sa", print_hash_value);
    transparent_crc(p_812->g_726.sb, "p_812->g_726.sb", print_hash_value);
    transparent_crc(p_812->g_726.sc, "p_812->g_726.sc", print_hash_value);
    transparent_crc(p_812->g_726.sd, "p_812->g_726.sd", print_hash_value);
    transparent_crc(p_812->g_726.se, "p_812->g_726.se", print_hash_value);
    transparent_crc(p_812->g_726.sf, "p_812->g_726.sf", print_hash_value);
    transparent_crc(p_812->g_727.s0, "p_812->g_727.s0", print_hash_value);
    transparent_crc(p_812->g_727.s1, "p_812->g_727.s1", print_hash_value);
    transparent_crc(p_812->g_727.s2, "p_812->g_727.s2", print_hash_value);
    transparent_crc(p_812->g_727.s3, "p_812->g_727.s3", print_hash_value);
    transparent_crc(p_812->g_727.s4, "p_812->g_727.s4", print_hash_value);
    transparent_crc(p_812->g_727.s5, "p_812->g_727.s5", print_hash_value);
    transparent_crc(p_812->g_727.s6, "p_812->g_727.s6", print_hash_value);
    transparent_crc(p_812->g_727.s7, "p_812->g_727.s7", print_hash_value);
    transparent_crc(p_812->g_727.s8, "p_812->g_727.s8", print_hash_value);
    transparent_crc(p_812->g_727.s9, "p_812->g_727.s9", print_hash_value);
    transparent_crc(p_812->g_727.sa, "p_812->g_727.sa", print_hash_value);
    transparent_crc(p_812->g_727.sb, "p_812->g_727.sb", print_hash_value);
    transparent_crc(p_812->g_727.sc, "p_812->g_727.sc", print_hash_value);
    transparent_crc(p_812->g_727.sd, "p_812->g_727.sd", print_hash_value);
    transparent_crc(p_812->g_727.se, "p_812->g_727.se", print_hash_value);
    transparent_crc(p_812->g_727.sf, "p_812->g_727.sf", print_hash_value);
    transparent_crc(p_812->g_728.s0, "p_812->g_728.s0", print_hash_value);
    transparent_crc(p_812->g_728.s1, "p_812->g_728.s1", print_hash_value);
    transparent_crc(p_812->g_728.s2, "p_812->g_728.s2", print_hash_value);
    transparent_crc(p_812->g_728.s3, "p_812->g_728.s3", print_hash_value);
    transparent_crc(p_812->g_728.s4, "p_812->g_728.s4", print_hash_value);
    transparent_crc(p_812->g_728.s5, "p_812->g_728.s5", print_hash_value);
    transparent_crc(p_812->g_728.s6, "p_812->g_728.s6", print_hash_value);
    transparent_crc(p_812->g_728.s7, "p_812->g_728.s7", print_hash_value);
    transparent_crc(p_812->g_737.s0, "p_812->g_737.s0", print_hash_value);
    transparent_crc(p_812->g_737.s1, "p_812->g_737.s1", print_hash_value);
    transparent_crc(p_812->g_737.s2, "p_812->g_737.s2", print_hash_value);
    transparent_crc(p_812->g_737.s3, "p_812->g_737.s3", print_hash_value);
    transparent_crc(p_812->g_737.s4, "p_812->g_737.s4", print_hash_value);
    transparent_crc(p_812->g_737.s5, "p_812->g_737.s5", print_hash_value);
    transparent_crc(p_812->g_737.s6, "p_812->g_737.s6", print_hash_value);
    transparent_crc(p_812->g_737.s7, "p_812->g_737.s7", print_hash_value);
    transparent_crc(p_812->v_collective, "p_812->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 80; i++)
            transparent_crc(p_812->g_special_values[i + 80 * get_linear_group_id()], "p_812->g_special_values[i + 80 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 80; i++)
            transparent_crc(p_812->l_special_values[i], "p_812->l_special_values[i]", print_hash_value);
    transparent_crc(p_812->l_comm_values[get_linear_local_id()], "p_812->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_812->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()], "p_812->g_comm_values[get_linear_group_id() * 87 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
