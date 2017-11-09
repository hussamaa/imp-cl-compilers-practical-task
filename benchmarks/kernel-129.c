// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 28,49,7 -l 2,49,1
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

__constant uint32_t permutations[10][98] = {
{48,65,78,39,50,25,71,51,11,94,89,95,1,33,73,85,58,96,93,30,28,35,19,97,55,46,68,57,31,41,54,56,38,90,44,5,63,77,59,34,79,4,40,26,18,53,43,21,69,92,76,9,15,20,16,52,3,36,64,37,88,67,42,24,27,7,60,10,70,13,91,22,84,29,45,14,66,17,80,62,23,87,0,12,6,74,82,2,61,83,81,49,8,47,86,75,72,32}, // permutation 0
{54,23,5,65,7,57,78,52,40,4,79,53,10,29,62,1,76,48,16,38,26,95,73,94,49,46,0,55,22,58,30,82,86,60,85,36,63,42,27,93,50,20,37,61,77,51,14,34,2,31,45,32,21,64,47,6,39,74,81,70,3,72,80,41,69,84,44,96,68,89,24,9,75,15,91,59,83,56,66,12,43,90,71,33,13,25,8,11,92,88,97,18,17,19,67,28,87,35}, // permutation 1
{5,7,65,21,45,97,35,82,63,81,59,28,50,10,60,22,93,77,76,64,88,14,85,58,84,78,37,8,83,16,79,48,24,4,54,41,92,43,44,15,90,56,3,87,61,72,86,20,17,74,27,42,19,2,75,80,23,39,36,33,66,1,47,53,38,40,13,32,67,68,51,91,49,30,89,95,31,6,29,94,9,46,18,52,0,71,11,96,25,12,73,57,26,62,34,70,69,55}, // permutation 2
{51,87,48,22,86,13,75,6,76,73,33,27,7,77,42,11,31,46,62,56,84,23,94,55,72,74,10,40,66,32,17,47,35,67,15,63,43,3,5,64,81,97,95,68,82,30,57,36,79,53,59,58,14,9,21,1,52,71,54,90,60,18,25,38,91,70,45,85,65,89,41,50,34,29,96,2,26,80,37,8,28,49,16,78,20,24,19,44,39,93,92,88,69,12,4,0,83,61}, // permutation 3
{95,31,29,72,47,26,21,33,24,2,97,71,11,7,78,44,76,79,10,88,41,36,83,73,45,57,59,92,38,60,65,56,89,69,96,23,9,54,6,49,22,61,17,86,42,93,52,18,19,80,66,39,87,34,8,62,4,27,68,64,16,63,28,46,84,74,50,12,1,20,82,90,53,43,35,30,25,14,37,81,5,85,55,48,70,3,13,75,32,77,0,58,67,15,91,94,40,51}, // permutation 4
{53,26,57,16,46,92,60,56,28,33,41,21,85,97,70,14,11,76,73,36,25,75,77,40,64,3,29,91,18,7,12,17,62,71,8,84,94,90,38,74,50,55,93,43,34,0,20,54,61,95,19,42,82,59,15,80,48,49,27,22,79,52,47,86,9,87,13,72,89,5,96,30,35,68,23,81,88,24,66,32,58,69,31,65,37,45,78,6,67,44,63,51,2,83,10,4,39,1}, // permutation 5
{41,33,68,88,0,15,49,94,43,59,52,21,22,80,31,58,97,65,54,73,93,83,13,20,26,16,4,30,90,70,34,61,86,82,76,37,2,46,63,7,8,74,92,66,62,35,96,3,89,47,79,81,9,36,91,67,19,29,6,84,24,53,11,85,28,56,23,87,57,27,45,78,55,95,25,48,69,10,38,42,77,75,32,17,40,72,5,18,60,12,39,44,50,14,51,64,1,71}, // permutation 6
{31,86,82,92,71,5,53,7,49,87,24,0,20,21,26,56,58,25,61,19,62,73,13,67,48,6,47,36,29,68,14,34,16,72,23,55,74,17,52,28,89,51,75,44,32,38,3,66,97,64,70,95,4,91,78,50,42,2,79,76,12,84,22,63,57,15,94,10,30,96,37,39,69,90,18,1,41,77,60,85,8,65,35,11,59,83,93,43,9,40,88,54,46,45,80,27,81,33}, // permutation 7
{45,88,55,50,64,84,7,6,66,51,90,21,31,69,5,25,57,78,3,56,18,47,43,83,65,96,74,39,40,15,48,22,94,87,28,35,2,70,37,76,60,23,29,82,92,11,13,95,42,86,77,24,58,63,4,72,38,80,1,89,61,16,68,75,85,67,33,53,93,41,46,44,19,81,59,9,8,36,71,26,54,91,34,30,27,17,79,97,12,0,32,49,10,73,20,52,14,62}, // permutation 8
{8,50,30,59,82,37,94,88,4,32,72,73,35,23,27,42,38,75,10,31,80,51,39,45,56,74,25,29,14,24,9,47,7,18,66,70,63,87,2,91,16,44,19,33,6,48,62,57,5,61,67,22,12,3,86,46,21,95,92,64,17,77,78,81,60,89,84,85,55,76,93,83,69,96,65,79,90,71,68,36,58,34,54,49,40,20,13,53,15,52,11,26,28,0,1,43,97,41} // permutation 9
};

// Seed: 1895939983

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
   uint8_t  f1;
   volatile uint64_t  f2;
};

union U1 {
   int8_t * volatile  f0;
};

union U2 {
   volatile uint32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   volatile uint32_t  f3;
   uint32_t  f4;
};

union U3 {
   int64_t  f0;
   volatile int32_t  f1;
   int16_t  f2;
   uint32_t  f3;
   uint64_t  f4;
};

union U4 {
   uint8_t  f0;
};

union U5 {
   int32_t  f0;
   volatile uint64_t  f1;
   volatile int16_t  f2;
};

union U6 {
   volatile uint32_t  f0;
   volatile uint8_t  f1;
   int32_t  f2;
   uint16_t  f3;
   volatile uint16_t  f4;
};

union U7 {
   uint64_t  f0;
   uint8_t  f1;
   int8_t * f2;
};

union U8 {
   int32_t  f0;
   uint32_t  f1;
   int8_t * volatile  f2;
   int32_t  f3;
};

struct S9 {
    int8_t g_10;
    volatile VECTOR(uint32_t, 8) g_51;
    uint32_t g_68[10][1][6];
    uint16_t g_87;
    int8_t g_89;
    int32_t g_92[9];
    union U4 g_93;
    volatile VECTOR(int32_t, 2) g_108;
    int8_t g_117;
    volatile union U5 g_122;
    uint16_t g_140;
    int32_t g_143;
    int32_t *g_156;
    VECTOR(uint8_t, 8) g_163;
    volatile union U6 g_171;
    union U8 g_181;
    int32_t g_187;
    uint64_t g_189;
    volatile int8_t * volatile g_194;
    volatile int8_t * volatile *g_193[2][7][1];
    VECTOR(uint16_t, 16) g_207;
    volatile uint16_t g_221;
    volatile uint16_t *g_220;
    volatile uint16_t * volatile *g_219[5];
    int32_t ** volatile g_222;
    int32_t **g_234;
    int32_t ***g_233;
    uint32_t g_236;
    volatile union U2 g_241;
    int8_t *g_243;
    int64_t * volatile g_250;
    union U3 g_257;
    union U3 *g_259;
    union U3 ** volatile g_258;
    VECTOR(int32_t, 2) g_260;
    volatile VECTOR(uint8_t, 2) g_263;
    volatile union U8 g_279;
    volatile union U3 g_318;
    union U7 g_319;
    int16_t g_326;
    VECTOR(int64_t, 2) g_351;
    VECTOR(int64_t, 8) g_353;
    volatile union U0 g_368;
    volatile union U5 g_369;
    VECTOR(int32_t, 2) g_382;
    VECTOR(int32_t, 4) g_384;
    uint16_t g_401;
    volatile union U3 g_403;
    union U8 g_407;
    int32_t * volatile g_426;
    int32_t * volatile g_428;
    union U8 g_431;
    int32_t *g_436;
    int32_t ** volatile g_435;
    union U6 g_460[4];
    uint8_t g_462;
    int16_t g_477;
    union U4 g_478;
    VECTOR(int16_t, 4) g_494;
    int32_t * volatile * volatile g_498;
    int32_t * volatile * volatile * volatile g_497;
    int32_t * volatile g_512;
    uint32_t g_530[2];
    uint64_t *g_579;
    uint64_t **g_578;
    VECTOR(int16_t, 8) g_582;
    volatile union U5 g_583[3];
    union U5 g_589;
    uint16_t g_605;
    union U6 g_611;
    union U5 *g_642;
    union U5 **g_641[7][6];
    volatile union U0 g_664;
    uint16_t g_683;
    VECTOR(uint8_t, 4) g_685;
    union U1 g_701;
    union U1 *g_703[3][6];
    union U1 ** volatile g_702;
    volatile uint32_t g_725;
    uint32_t g_732;
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
int32_t  func_1(struct S9 * p_772);
uint8_t  func_3(int64_t  p_4, int8_t * p_5, uint8_t  p_6, uint32_t  p_7, struct S9 * p_772);
uint16_t  func_15(int8_t * p_16, uint32_t  p_17, struct S9 * p_772);
uint32_t  func_18(int8_t * p_19, struct S9 * p_772);
int8_t * func_20(int8_t  p_21, uint16_t  p_22, uint64_t  p_23, int16_t  p_24, union U4  p_25, struct S9 * p_772);
int32_t  func_28(uint64_t  p_29, uint8_t  p_30, int8_t * p_31, uint8_t  p_32, int8_t * p_33, struct S9 * p_772);
union U6  func_38(int8_t * p_39, uint16_t  p_40, int32_t  p_41, struct S9 * p_772);
int8_t * func_42(int32_t  p_43, int16_t  p_44, uint8_t  p_45, struct S9 * p_772);
union U8  func_46(int32_t  p_47, union U4  p_48, int64_t  p_49, int8_t  p_50, struct S9 * p_772);
uint32_t  func_52(uint8_t  p_53, int8_t * p_54, int8_t * p_55, struct S9 * p_772);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_772->g_10 p_772->g_51 p_772->l_comm_values p_772->g_comm_values p_772->g_87 p_772->g_68 p_772->g_92 p_772->g_93 p_772->g_108 p_772->g_117 p_772->g_122 p_772->g_140 p_772->g_143 p_772->g_89 p_772->g_163 p_772->g_171 p_772->g_93.f0 p_772->g_156 p_772->g_181 p_772->g_171.f0 p_772->g_189 p_772->g_193 p_772->g_219 p_772->g_222 p_772->g_207 p_772->g_233 p_772->g_181.f0 p_772->g_236 p_772->g_241 p_772->g_250 p_772->g_258 p_772->g_260 p_772->g_263 p_772->g_279 p_772->g_243 p_772->g_187 p_772->g_259 p_772->g_234 p_772->g_318 p_772->g_319 p_772->g_326 p_772->g_351 p_772->g_353 p_772->g_368 p_772->g_257 p_772->g_369 p_772->g_382 p_772->g_384 p_772->g_401 p_772->g_403 p_772->g_319.f0 p_772->g_407 p_772->g_431 p_772->g_435 p_772->g_460 p_772->g_462 p_772->g_477 p_772->g_257.f0 p_772->g_407.f0 p_772->g_478 p_772->g_497 p_772->g_512 p_772->g_530 p_772->g_436 p_772->g_578 p_772->g_582 p_772->g_583 p_772->g_589.f0 p_772->g_220 p_772->g_221 p_772->g_579 p_772->g_431.f0 p_772->g_605 p_772->g_611 p_772->g_494 p_772->g_498 p_772->g_641 p_772->g_664 p_772->g_257.f2 p_772->g_683 p_772->g_685 p_772->g_611.f3 p_772->g_702 p_772->g_725 p_772->g_732
 * writes: p_772->g_68 p_772->g_87 p_772->g_89 p_772->g_92 p_772->g_117 p_772->g_140 p_772->g_143 p_772->g_156 p_772->g_comm_values p_772->g_189 p_772->g_93.f0 p_772->g_233 p_772->g_236 p_772->g_243 p_772->g_259 p_772->g_436 p_772->g_462 p_772->g_326 p_772->g_477 p_772->g_187 p_772->g_257.f2 p_772->g_683 p_772->g_685 p_772->g_611.f3 p_772->g_703 p_772->g_725 p_772->g_732 p_772->l_comm_values p_772->g_257.f0
 */
int32_t  func_1(struct S9 * p_772)
{ /* block id: 4 */
    uint32_t l_2 = 0xCA4E8652L;
    uint8_t l_8[10] = {0xEEL,0xF2L,0UL,0xF2L,0xEEL,0xEEL,0xF2L,0UL,0xF2L,0xEEL};
    int8_t *l_9[6][3] = {{&p_772->g_10,&p_772->g_10,&p_772->g_10},{&p_772->g_10,&p_772->g_10,&p_772->g_10},{&p_772->g_10,&p_772->g_10,&p_772->g_10},{&p_772->g_10,&p_772->g_10,&p_772->g_10},{&p_772->g_10,&p_772->g_10,&p_772->g_10},{&p_772->g_10,&p_772->g_10,&p_772->g_10}};
    uint32_t l_432 = 0xD4CD5FD0L;
    int8_t l_437 = 3L;
    uint8_t *l_461 = &p_772->g_462;
    int32_t l_463 = (-1L);
    int32_t l_464 = (-2L);
    int16_t *l_476 = &p_772->g_326;
    uint16_t *l_682[4];
    uint8_t *l_684 = (void*)0;
    uint8_t *l_686 = (void*)0;
    uint8_t *l_687 = (void*)0;
    uint8_t *l_688 = (void*)0;
    uint8_t *l_689 = (void*)0;
    uint8_t *l_690 = (void*)0;
    uint8_t *l_691 = (void*)0;
    uint8_t *l_692 = (void*)0;
    uint8_t *l_693 = (void*)0;
    uint8_t *l_694 = (void*)0;
    uint8_t *l_695 = (void*)0;
    uint8_t *l_696 = (void*)0;
    uint8_t *l_697[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_729 = (-8L);
    int32_t l_730 = 1L;
    int32_t l_731 = 4L;
    union U1 *l_735 = &p_772->g_701;
    union U3 **l_745 = &p_772->g_259;
    int32_t l_754 = 0x7CA00BA1L;
    int32_t l_755 = (-5L);
    int32_t l_756 = 1L;
    int32_t l_757 = 0L;
    int32_t l_758 = 0x117EE04BL;
    int32_t l_759 = 0x5A23AC7DL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_682[i] = &p_772->g_683;
    if ((l_2 & ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(0x7CL, func_3(l_8[4], l_9[1][1], (p_772->g_685.z ^= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((p_772->g_683 &= func_15(l_9[1][1], func_18(func_20((safe_mul_func_int16_t_s_s((p_772->g_477 &= ((*l_476) = (func_28((((&p_772->g_10 == &p_772->g_10) < (safe_lshift_func_int8_t_s_s((l_464 = (l_463 = ((safe_mul_func_uint8_t_u_u(((*l_461) ^= (((func_38(func_42(p_772->g_10, (func_46((((VECTOR(uint32_t, 16))(p_772->g_51.s3126147546705602)).sf <= func_52(p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))], l_9[4][1], l_9[2][0], p_772)), p_772->g_93, p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))], p_772->g_comm_values[p_772->tid], p_772) , 0x75B6L), l_432, p_772), p_772->g_384.y, l_437, p_772) , (void*)0) != (void*)0) || p_772->g_263.y)), p_772->g_207.s5)) , (*p_772->g_243)))), 4))) <= l_8[4]), p_772->g_326, &p_772->g_10, l_8[4], &l_437, p_772) <= GROUP_DIVERGE(1, 1)))), p_772->g_257.f0)), p_772->g_207.s0, p_772->g_407.f0, p_772->g_181.f0, p_772->g_478, p_772), p_772), p_772)), 5)), 0))), l_8[6], p_772), 0UL, 255UL)).yyxxxywy, ((VECTOR(uint8_t, 8))(0x34L)), ((VECTOR(uint8_t, 8))(0xE1L))))).s1))
    { /* block id: 300 */
        int32_t *l_728[9][10] = {{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0},{(void*)0,&p_772->g_92[2],&l_463,&p_772->g_92[1],&l_464,(void*)0,&p_772->g_92[1],(void*)0,&p_772->g_92[1],(void*)0}};
        union U1 **l_736 = (void*)0;
        VECTOR(uint64_t, 16) l_739 = (VECTOR(uint64_t, 16))(0x56BA72419EDF8ED8L, (VECTOR(uint64_t, 4))(0x56BA72419EDF8ED8L, (VECTOR(uint64_t, 2))(0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L), 0xDA2BFB687A0CA893L), 0xDA2BFB687A0CA893L, 0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L, (VECTOR(uint64_t, 2))(0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L), (VECTOR(uint64_t, 2))(0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L), 0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L, 0x56BA72419EDF8ED8L, 0xDA2BFB687A0CA893L);
        VECTOR(uint8_t, 4) l_742 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xF9L), 0xF9L);
        union U3 **l_744 = &p_772->g_259;
        union U3 ***l_743 = &l_744;
        int64_t *l_746 = (void*)0;
        int64_t *l_747 = (void*)0;
        int64_t *l_748 = (void*)0;
        int64_t *l_749 = (void*)0;
        int64_t *l_750 = (void*)0;
        int64_t *l_751 = (void*)0;
        int i, j;
        --p_772->g_732;
        l_735 = l_735;
        l_731 = (l_8[4] ^ 0UL);
        l_463 &= (safe_add_func_int8_t_s_s(((((VECTOR(uint64_t, 4))(l_739.s2fa9)).x & (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(l_742.wx)).odd, 1))) > (p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))] &= ((((*l_743) = (void*)0) != l_745) < ((void*)0 != &p_772->g_220)))), 0x18L));
    }
    else
    { /* block id: 307 */
        int32_t *l_752 = &l_730;
        int32_t *l_753[9][10] = {{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463},{(void*)0,&p_772->g_92[1],&p_772->g_92[1],&p_772->g_92[1],(void*)0,&p_772->g_187,&l_729,&p_772->g_187,(void*)0,&l_463}};
        uint32_t l_760[9][3][4] = {{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}},{{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL},{0x4620956BL,0x806EBC72L,4294967295UL,0UL}}};
        int i, j, k;
        (**p_772->g_233) = (*p_772->g_435);
        --l_760[7][0][3];
        for (p_772->g_257.f0 = 0; (p_772->g_257.f0 < 16); ++p_772->g_257.f0)
        { /* block id: 312 */
            int32_t l_765 = (-9L);
            int32_t l_766 = (-1L);
            int32_t l_767 = 0x51BAF7D1L;
            int32_t l_768[4][7] = {{0x145BA296L,0x49EC977EL,0x00AFBACEL,0x49EC977EL,0x145BA296L,0x145BA296L,0x49EC977EL},{0x145BA296L,0x49EC977EL,0x00AFBACEL,0x49EC977EL,0x145BA296L,0x145BA296L,0x49EC977EL},{0x145BA296L,0x49EC977EL,0x00AFBACEL,0x49EC977EL,0x145BA296L,0x145BA296L,0x49EC977EL},{0x145BA296L,0x49EC977EL,0x00AFBACEL,0x49EC977EL,0x145BA296L,0x145BA296L,0x49EC977EL}};
            uint32_t l_769 = 4294967287UL;
            int i, j;
            l_769++;
            l_758 = (*p_772->g_512);
        }
    }
    return p_772->g_207.se;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_611.f3 p_772->g_702 p_772->g_87 p_772->g_725 p_772->g_530
 * writes: p_772->g_611.f3 p_772->g_703 p_772->g_87 p_772->g_725
 */
uint8_t  func_3(int64_t  p_4, int8_t * p_5, uint8_t  p_6, uint32_t  p_7, struct S9 * p_772)
{ /* block id: 288 */
    union U1 *l_700 = &p_772->g_701;
    int32_t l_706 = 0x4D143CB4L;
    int32_t l_723 = 0x29FEDBFBL;
    int32_t l_724[4][6][10] = {{{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L}},{{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L}},{{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L}},{{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L},{0x6DB71BA8L,1L,2L,1L,0x5A3303C6L,0L,0x120009A3L,(-2L),0x5631761EL,0x6DB71BA8L}}};
    int i, j, k;
    for (p_772->g_611.f3 = 5; (p_772->g_611.f3 != 55); p_772->g_611.f3 = safe_add_func_int64_t_s_s(p_772->g_611.f3, 2))
    { /* block id: 291 */
        (*p_772->g_702) = l_700;
    }
    for (p_772->g_87 = (-7); (p_772->g_87 == 52); p_772->g_87 = safe_add_func_int64_t_s_s(p_772->g_87, 9))
    { /* block id: 296 */
        int32_t *l_707 = &p_772->g_187;
        int32_t l_708 = 0x4ED3AB5EL;
        int32_t *l_709 = (void*)0;
        int32_t *l_710 = (void*)0;
        int32_t *l_711 = &p_772->g_92[0];
        int32_t l_712 = 0x58CFAB83L;
        int32_t *l_713 = &l_706;
        int32_t *l_714 = &l_712;
        int32_t *l_715 = (void*)0;
        int32_t *l_716 = &p_772->g_92[1];
        int32_t *l_717 = &p_772->g_187;
        int32_t *l_718 = &p_772->g_187;
        int32_t *l_719 = &l_706;
        int32_t *l_720 = &l_706;
        int32_t *l_721 = &l_706;
        int32_t *l_722[3][5][2] = {{{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712}},{{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712}},{{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712},{&l_712,&l_712}}};
        int i, j, k;
        p_772->g_725++;
    }
    return p_772->g_530[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_257.f2
 * writes: p_772->g_257.f2
 */
uint16_t  func_15(int8_t * p_16, uint32_t  p_17, struct S9 * p_772)
{ /* block id: 278 */
    int32_t l_674[6][8] = {{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L},{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L},{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L},{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L},{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L},{0L,1L,0x55741977L,1L,0L,0L,1L,0x55741977L}};
    int32_t *l_675 = &l_674[1][7];
    int32_t *l_676 = &p_772->g_92[7];
    int32_t *l_677[9][8][3] = {{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}},{{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0},{&p_772->g_92[1],&l_674[2][0],(void*)0}}};
    int16_t l_678 = 0x687FL;
    uint32_t l_679 = 1UL;
    int i, j, k;
    for (p_772->g_257.f2 = 0; (p_772->g_257.f2 <= 25); ++p_772->g_257.f2)
    { /* block id: 281 */
        return l_674[2][0];
    }
    l_679--;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_664 p_772->g_579 p_772->g_319.f0 p_772->g_578 p_772->g_494 p_772->g_401
 * writes:
 */
uint32_t  func_18(int8_t * p_19, struct S9 * p_772)
{ /* block id: 273 */
    VECTOR(int32_t, 16) l_656 = (VECTOR(int32_t, 16))(0x2AE510A4L, (VECTOR(int32_t, 4))(0x2AE510A4L, (VECTOR(int32_t, 2))(0x2AE510A4L, 0x655FAEA1L), 0x655FAEA1L), 0x655FAEA1L, 0x2AE510A4L, 0x655FAEA1L, (VECTOR(int32_t, 2))(0x2AE510A4L, 0x655FAEA1L), (VECTOR(int32_t, 2))(0x2AE510A4L, 0x655FAEA1L), 0x2AE510A4L, 0x655FAEA1L, 0x2AE510A4L, 0x655FAEA1L);
    int8_t *l_663 = (void*)0;
    int32_t l_665 = 0x1812D98DL;
    union U5 *l_666 = (void*)0;
    int32_t l_667 = 0x5D728899L;
    int32_t *l_668[4];
    uint8_t l_669 = 1UL;
    int i;
    for (i = 0; i < 4; i++)
        l_668[i] = &p_772->g_92[1];
    l_665 = (((safe_lshift_func_uint16_t_u_u(((((((l_656.s2 || 0x01L) != (safe_sub_func_uint32_t_u_u(0xBFF17467L, l_656.sf))) == (safe_lshift_func_uint16_t_u_u(65535UL, (safe_mod_func_int8_t_s_s(((l_663 == (p_772->g_664 , p_19)) <= (((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))((*p_772->g_579), 0x55FB328A1354BEEAL, 0x372BC951E9419954L, (**p_772->g_578), 18446744073709551615UL, ((VECTOR(uint64_t, 8))(0UL)), ((VECTOR(uint64_t, 2))(0x3D883A7D59A113D8L)), 0x1DCE72DFB2EEA22FL)).s1768, ((VECTOR(uint64_t, 4))(18446744073709551614UL))))).y >= 1L)), p_772->g_494.y))))) , 4L) <= 0x4CL) & l_656.sf), 12)) < 0x77042B83L) == 0xB2FD2763L);
    l_666 = l_666;
    l_669--;
    return p_772->g_401;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_497 p_772->g_512 p_772->g_233 p_772->g_234 p_772->g_530 p_772->g_92 p_772->g_435 p_772->g_436 p_772->g_187 p_772->g_258 p_772->g_259 p_772->g_578 p_772->g_384 p_772->g_140 p_772->g_156 p_772->g_582 p_772->g_583 p_772->g_353 p_772->g_243 p_772->g_589.f0 p_772->g_220 p_772->g_221 p_772->g_579 p_772->g_319.f0 p_772->g_431.f0 p_772->g_605 p_772->g_611 p_772->g_10 p_772->g_89 p_772->g_494 p_772->g_68 p_772->g_498 p_772->g_478 p_772->g_641
 * writes: p_772->g_68 p_772->g_187 p_772->g_156 p_772->g_93.f0 p_772->g_92 p_772->g_89 p_772->g_326 p_772->g_436 p_772->g_477 p_772->g_140
 */
int8_t * func_20(int8_t  p_21, uint16_t  p_22, uint64_t  p_23, int16_t  p_24, union U4  p_25, struct S9 * p_772)
{ /* block id: 168 */
    VECTOR(int8_t, 16) l_501 = (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x0AL), 0x0AL), 0x0AL, 0x6CL, 0x0AL, (VECTOR(int8_t, 2))(0x6CL, 0x0AL), (VECTOR(int8_t, 2))(0x6CL, 0x0AL), 0x6CL, 0x0AL, 0x6CL, 0x0AL);
    int32_t *l_513 = &p_772->g_92[1];
    int32_t *l_514 = &p_772->g_92[5];
    int32_t l_565 = 2L;
    int32_t l_568 = 0x4D20BFB8L;
    union U5 *l_590 = &p_772->g_589;
    uint16_t *l_614 = &p_772->g_140;
    uint16_t **l_613[7] = {&l_614,(void*)0,&l_614,&l_614,(void*)0,&l_614,&l_614};
    int32_t l_650 = (-1L);
    int i;
    if (((safe_sub_func_uint8_t_u_u(p_22, (-1L))) < p_24))
    { /* block id: 169 */
        VECTOR(uint16_t, 2) l_486 = (VECTOR(uint16_t, 2))(0x5332L, 65530UL);
        uint8_t l_491[6] = {0x72L,0x72L,0x72L,0x72L,0x72L,0x72L};
        int32_t ***l_495 = &p_772->g_234;
        int8_t *l_521 = &p_772->g_10;
        VECTOR(int64_t, 4) l_533 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2334DEEADCC382CDL), 0x2334DEEADCC382CDL);
        int8_t l_534 = 0x03L;
        union U3 *l_547 = (void*)0;
        int32_t l_562[1][2][4];
        VECTOR(int32_t, 16) l_586 = (VECTOR(int32_t, 16))(0x4996F71AL, (VECTOR(int32_t, 4))(0x4996F71AL, (VECTOR(int32_t, 2))(0x4996F71AL, 9L), 9L), 9L, 0x4996F71AL, 9L, (VECTOR(int32_t, 2))(0x4996F71AL, 9L), (VECTOR(int32_t, 2))(0x4996F71AL, 9L), 0x4996F71AL, 9L, 0x4996F71AL, 9L);
        union U5 *l_588 = &p_772->g_589;
        union U5 **l_587[7][2][4] = {{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}},{{&l_588,&l_588,&l_588,&l_588},{&l_588,&l_588,&l_588,&l_588}}};
        VECTOR(int32_t, 16) l_595 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_562[i][j][k] = 0x15A1296BL;
            }
        }
        for (p_25.f0 = 4; (p_25.f0 >= 24); p_25.f0 = safe_add_func_int16_t_s_s(p_25.f0, 6))
        { /* block id: 172 */
            uint32_t *l_483 = &p_772->g_68[2][0][1];
            int32_t ****l_496 = &l_495;
            uint8_t *l_510 = &p_772->g_93.f0;
            uint8_t *l_511 = &l_491[2];
            int32_t *l_524 = &p_772->g_407.f0;
            int8_t l_535[4] = {(-1L),(-1L),(-1L),(-1L)};
            int32_t l_561[6];
            int32_t l_567 = 0L;
            uint32_t l_571 = 0xEDBC7107L;
            union U7 l_576 = {0xB4852A4874C2CAE2L};
            int i;
            for (i = 0; i < 6; i++)
                l_561[i] = (-6L);
            if (((((*l_483) = ((void*)0 == &p_772->g_194)) , ((*l_511) = (safe_rshift_func_int16_t_s_s((l_486.y & (safe_mul_func_uint16_t_u_u(65535UL, (safe_add_func_uint32_t_u_u((l_491[3] <= ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))((-1L), 8L)).xxxxxyxx, ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(p_772->g_494.wy)), 0x2AFBL)).wwxzywzw))).s6064316342702273)).s4, (((*l_496) = l_495) != p_772->g_497))) < (((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))((1L || (safe_sub_func_uint16_t_u_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_501.s1046)).hi)).lo && ((*l_510) ^= (safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(p_772->g_351.x, 1L)), 4)), 0x55L)), 2)))), (-6L)))), 0x142036ABL, 0x12B33DF5L, 5L, p_23, ((VECTOR(int32_t, 2))((-1L))), 0x59F8B13BL)), ((VECTOR(int32_t, 8))(0x2CA498FFL))))).s55, ((VECTOR(int32_t, 2))(2L))))).odd ^ GROUP_DIVERGE(1, 1)))), 0x71CC5BD5L))))), 14)))) ^ 0x39L))
            { /* block id: 177 */
                (*p_772->g_512) = l_501.sa;
                (**p_772->g_233) = l_513;
                (**l_495) = l_514;
            }
            else
            { /* block id: 181 */
                int32_t **l_525 = &l_524;
                int32_t **l_526 = (void*)0;
                int32_t *l_528[6][2] = {{&p_772->g_181.f0,&p_772->g_431.f0},{&p_772->g_181.f0,&p_772->g_431.f0},{&p_772->g_181.f0,&p_772->g_431.f0},{&p_772->g_181.f0,&p_772->g_431.f0},{&p_772->g_181.f0,&p_772->g_431.f0},{&p_772->g_181.f0,&p_772->g_431.f0}};
                int32_t **l_527 = &l_528[5][1];
                int32_t l_529 = 0x7A9F0206L;
                int i, j;
                if ((atomic_inc(&p_772->l_atomic_input[71]) == 5))
                { /* block id: 183 */
                    VECTOR(int32_t, 4) l_515 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L));
                    int i;
                    for (l_515.z = 0; (l_515.z <= (-13)); l_515.z = safe_sub_func_uint16_t_u_u(l_515.z, 1))
                    { /* block id: 186 */
                        uint16_t l_518 = 65531UL;
                        l_518 = 0x568E0D74L;
                    }
                    unsigned int result = 0;
                    result += l_515.w;
                    result += l_515.z;
                    result += l_515.y;
                    result += l_515.x;
                    atomic_add(&p_772->l_special_values[71], result);
                }
                else
                { /* block id: 189 */
                    (1 + 1);
                }
                for (p_772->g_93.f0 = 0; (p_772->g_93.f0 <= 39); ++p_772->g_93.f0)
                { /* block id: 194 */
                    return l_521;
                }
                (*l_513) |= (p_22 && (safe_sub_func_uint8_t_u_u((((*l_527) = ((*l_525) = l_524)) == (void*)0), ((((l_529 &= p_25.f0) & ((*l_510) = p_772->g_530[0])) , &p_772->g_189) == &p_23))));
                (*l_514) |= ((void*)0 == &l_529);
            }
            if (((safe_rshift_func_uint16_t_u_s((((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_533.zy)))).yxxyyyyxyxxyyxxx, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))((l_534 > (p_772->g_163.s1 == l_535[2])), ((VECTOR(int64_t, 2))(2L, 0x090BEF9F9378A53FL)), (((--(*l_510)) <= (safe_rshift_func_int16_t_s_s(((0UL > ((*l_514) & (safe_lshift_func_int8_t_s_s(p_23, 3)))) == (*l_514)), 11))) >= p_25.f0), 0x04E2AC11F3E49716L, ((VECTOR(int64_t, 4))(1L)), ((VECTOR(int64_t, 4))((-4L))), 0x4309569969D21181L, 0x10332B5A33A5DC26L, 0x3F886E5F10C52716L)).s46))).xxyyxyyyxxxyyyyx))).s0 < 1UL), 4)) ^ 0UL))
            { /* block id: 205 */
                for (p_22 = 0; (p_22 > 24); ++p_22)
                { /* block id: 208 */
                    uint16_t l_546 = 65532UL;
                    for (p_772->g_89 = 18; (p_772->g_89 <= (-22)); p_772->g_89--)
                    { /* block id: 211 */
                        int16_t *l_548 = &p_772->g_326;
                        int8_t **l_549 = &l_521;
                        atomic_add(&p_772->g_atomic_reduction[get_linear_group_id()], ((*l_514) != (((*l_549) = func_42(l_546, ((*l_548) = ((l_547 == (void*)0) || p_21)), p_25.f0, p_772)) == &p_772->g_10)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_772->v_collective += p_772->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    (**p_772->g_233) = (*p_772->g_435);
                }
            }
            else
            { /* block id: 218 */
                int32_t *l_557 = &p_772->g_187;
                int32_t l_563 = 0x6B833DC4L;
                int32_t l_564 = 0x27FAC06CL;
                int16_t l_566 = 0x1A1DL;
                int32_t l_569 = 0x10967B2BL;
                int32_t l_570 = 0x33078131L;
                if ((atomic_inc(&p_772->g_atomic_input[89 * get_linear_group_id() + 36]) == 9))
                { /* block id: 220 */
                    int32_t l_550 = 0x764E9B1DL;
                    uint64_t l_551 = 0xD74AA3FAA64741DDL;
                    int32_t **l_554 = (void*)0;
                    int32_t *l_556 = (void*)0;
                    int32_t **l_555[6][1][4];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_555[i][j][k] = &l_556;
                        }
                    }
                    --l_551;
                    l_555[4][0][1] = l_554;
                    unsigned int result = 0;
                    result += l_550;
                    result += l_551;
                    atomic_add(&p_772->g_special_values[89 * get_linear_group_id() + 36], result);
                }
                else
                { /* block id: 223 */
                    (1 + 1);
                }
                (*p_772->g_234) = l_557;
                for (p_22 = (-10); (p_22 > 2); p_22 = safe_add_func_int32_t_s_s(p_22, 1))
                { /* block id: 229 */
                    int32_t *l_560[1][6];
                    int32_t **l_577 = (void*)0;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_560[i][j] = &p_772->g_92[1];
                    }
                    --l_571;
                    if ((*p_772->g_512))
                    { /* block id: 231 */
                        (****l_496) ^= (safe_add_func_uint16_t_u_u((l_576 , (!(((void*)0 == (*p_772->g_258)) != (((**l_496) != (l_577 = &l_514)) , ((VECTOR(uint16_t, 2))(0x205BL, 0x0E75L)).odd)))), (p_772->g_578 != (((safe_rshift_func_uint8_t_u_u(p_772->g_384.w, p_22)) , p_772->g_140) , &p_772->g_579))));
                        if ((*p_772->g_156))
                            break;
                    }
                    else
                    { /* block id: 235 */
                        (****l_496) = ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(1L, (-1L))), (-1L))).y;
                        (*l_513) = ((*l_557) = (((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(p_772->g_582.s30570337)).s10, (int16_t)(p_772->g_583[0] , 0x128BL)))).lo ^ (safe_div_func_int16_t_s_s(p_21, 0x6A67L))));
                        (***p_772->g_233) = (&p_772->g_530[0] != l_514);
                    }
                }
            }
        }
        l_586.sc |= 0x08575AFBL;
        l_590 = (void*)0;
        if (p_25.f0)
        { /* block id: 246 */
            int16_t l_591 = 0x1F4DL;
            uint8_t *l_596 = &l_491[3];
            int16_t *l_603 = (void*)0;
            int16_t *l_604 = &p_772->g_477;
            int32_t l_606 = 0x5B7CCC30L;
            uint16_t **l_612 = (void*)0;
            VECTOR(uint32_t, 16) l_631 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 6UL), 6UL), 6UL, 5UL, 6UL, (VECTOR(uint32_t, 2))(5UL, 6UL), (VECTOR(uint32_t, 2))(5UL, 6UL), 5UL, 6UL, 5UL, 6UL);
            VECTOR(int16_t, 16) l_634 = (VECTOR(int16_t, 16))(0x286EL, (VECTOR(int16_t, 4))(0x286EL, (VECTOR(int16_t, 2))(0x286EL, 1L), 1L), 1L, 0x286EL, 1L, (VECTOR(int16_t, 2))(0x286EL, 1L), (VECTOR(int16_t, 2))(0x286EL, 1L), 0x286EL, 1L, 0x286EL, 1L);
            VECTOR(int16_t, 2) l_635 = (VECTOR(int16_t, 2))(0x50A8L, (-1L));
            int i;
            l_606 ^= (l_591 > ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 2))(0x42L, 0x0FL)).xxyxyxxyyxxxyxxy, ((VECTOR(uint8_t, 16))(p_23, ((((((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u(p_23, (*l_513))))) || (+(((p_772->g_353.s7 <= ((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_595.sbe)).yxxxyyxyyxyxyyxy)).se > (+((-4L) || (((*l_513) = ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((*l_596) = ((p_22 & ((*p_772->g_243) = ((VECTOR(int8_t, 2))(0x23L, 9L)).even)) > (((VECTOR(int64_t, 8))(0x775F6411542FE53CL, 0L, 0L, 0x12E9CB8CF27B1620L, ((VECTOR(int64_t, 2))(0x20C10189C0C57FE6L, 0x0EFDB7C8F3D0CEE7L)), 0x2B9F2492573088E6L, (-1L))).s0 < p_23))), 0UL, 254UL, 0x32L)), ((safe_div_func_int16_t_s_s(((*l_604) = (((((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0x0157L, p_24)), p_772->g_589.f0)) & p_772->g_92[1]) , (*p_772->g_220)) || 0x5E62L) >= (*p_772->g_579))), p_22)) && (-1L)), 252UL, 255UL, ((VECTOR(uint8_t, 2))(0x05L)), p_772->g_353.s1, 0xBCL, ((VECTOR(uint8_t, 4))(1UL)), 255UL)).even, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 8))(0xFEL))))).odd))), ((VECTOR(uint8_t, 4))(0x5AL))))).xxwxywww)).odd, ((VECTOR(uint8_t, 4))(0x23L))))).wyzxxywy)).s1 >= 0x30EEL) <= 0xB2C14FB7L)) >= 0x0F288694L)))) >= p_772->g_431.f0) <= (-1L)) || (*l_514))) <= p_772->g_605) , p_23))) && 1L) , p_22) <= p_22) || p_772->g_140), ((VECTOR(uint8_t, 2))(255UL)), 0x59L, 246UL, 0x4EL, ((VECTOR(uint8_t, 8))(0x1BL)), 254UL)), ((VECTOR(uint8_t, 16))(255UL))))), ((VECTOR(uint8_t, 16))(0xDEL)), ((VECTOR(uint8_t, 16))(1UL))))).s2ec0, ((VECTOR(uint8_t, 4))(3UL))))))), 0xF2L, ((VECTOR(uint8_t, 2))(0xB7L)), 255UL)).s0);
            (*l_514) |= (0x0F0AL > (~((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_596) = (((p_772->g_611 , l_612) != l_613[4]) | 0x50D0L)), ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(p_24, (safe_sub_func_int16_t_s_s(p_772->g_384.z, (safe_add_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_631.s05)).odd, 0x46C0289DL, (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_634.s2f6e)), ((VECTOR(int16_t, 16))(l_635.xxyxyxyxxyyxxyyx)).s5348))))).xyxyzywywyxxyywz)).sd, p_772->g_10)), 4294967295UL, 4294967288UL, p_24, 0x2B4E8CC5L, 0x49282FC8L)).s2, p_23)), (*p_772->g_243))) != p_21), FAKE_DIVERGE(p_772->global_1_offset, get_global_id(1), 10))) == p_22), (**p_772->g_578))))))) ^ p_23), p_772->g_319.f0)), p_772->g_494.w)) || p_23))), (-1L))) < 0x70C07E591E967822L) , p_772->g_68[0][0][0]) , 1UL)));
        }
        else
        { /* block id: 254 */
            uint32_t l_639 = 4294967295UL;
            int32_t l_640[6] = {7L,7L,7L,7L,7L,7L};
            int i;
            (*l_513) = ((*p_772->g_497) == (*p_772->g_233));
            l_640[0] = (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u(l_639, (p_772->g_478 , ((*l_614) = FAKE_DIVERGE(p_772->global_2_offset, get_global_id(2), 10))))) | (~FAKE_DIVERGE(p_772->local_1_offset, get_local_id(1), 10)))));
            (**l_495) = &l_568;
        }
    }
    else
    { /* block id: 260 */
        int32_t *l_648 = &p_772->g_187;
        int32_t *l_649[5][9] = {{(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0},{(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0},{(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0},{(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0},{(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0,(void*)0,&l_568,(void*)0}};
        uint64_t l_651 = 0xEE608186BF5439B2L;
        int i, j;
        (*l_513) = ((void*)0 == p_772->g_641[6][2]);
        if ((atomic_inc(&p_772->l_atomic_input[40]) == 6))
        { /* block id: 263 */
            int32_t l_644 = (-1L);
            int32_t *l_643 = &l_644;
            int32_t *l_645 = &l_644;
            int32_t l_646 = 0x238934DCL;
            uint16_t l_647 = 0xEB40L;
            l_645 = l_643;
            l_647 = l_646;
            unsigned int result = 0;
            result += l_644;
            result += l_646;
            result += l_647;
            atomic_add(&p_772->l_special_values[40], result);
        }
        else
        { /* block id: 266 */
            (1 + 1);
        }
        (*l_513) = ((p_23 , 0x993BL) < 1UL);
        --l_651;
    }
    return &p_772->g_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_92
 * writes: p_772->g_92
 */
int32_t  func_28(uint64_t  p_29, uint8_t  p_30, int8_t * p_31, uint8_t  p_32, int8_t * p_33, struct S9 * p_772)
{ /* block id: 162 */
    int8_t l_465 = 0x1BL;
    int32_t *l_466 = &p_772->g_92[1];
    int32_t *l_467 = (void*)0;
    int32_t *l_468 = &p_772->g_92[2];
    int32_t *l_469[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_470 = (-5L);
    int16_t l_471 = 0L;
    int32_t l_472 = 1L;
    uint32_t l_473 = 4294967289UL;
    int i;
    (*l_466) = l_465;
    --l_473;
    return (*l_468);
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_460
 * writes:
 */
union U6  func_38(int8_t * p_39, uint16_t  p_40, int32_t  p_41, struct S9 * p_772)
{ /* block id: 139 */
    int32_t *l_455 = &p_772->g_143;
    int32_t *l_456[10][2] = {{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0},{&p_772->g_92[1],(void*)0}};
    uint16_t l_457 = 1UL;
    int i, j;
    if ((atomic_inc(&p_772->l_atomic_input[3]) == 8))
    { /* block id: 141 */
        union U2 l_439[6] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
        union U2 *l_438 = &l_439[0];
        uint32_t l_440[6] = {1UL,0x8D67EFEDL,1UL,1UL,0x8D67EFEDL,1UL};
        int16_t l_453 = 0x222FL;
        int8_t l_454 = 4L;
        int i;
        l_438 = (void*)0;
        l_440[5] &= ((VECTOR(int32_t, 2))(1L, 0x7C91CB36L)).even;
        for (l_440[4] = 0; (l_440[4] > 4); l_440[4] = safe_add_func_uint64_t_u_u(l_440[4], 6))
        { /* block id: 146 */
            uint32_t l_443 = 0x2DBFFE54L;
            int32_t l_444 = 0x574E489BL;
            int32_t l_445 = (-5L);
            uint32_t l_446[8] = {0x6BF70BF6L,1UL,0x6BF70BF6L,0x6BF70BF6L,1UL,0x6BF70BF6L,0x6BF70BF6L,1UL};
            uint32_t l_447 = 0UL;
            int32_t l_449 = (-6L);
            int32_t *l_448 = &l_449;
            uint16_t l_450 = 0x26B5L;
            int i;
            l_444 = l_443;
            l_447 |= (l_446[0] ^= l_445);
            l_448 = (void*)0;
            l_450++;
        }
        l_454 ^= (l_453 , 0x16A66A90L);
        unsigned int result = 0;
        int l_439_i0;
        for (l_439_i0 = 0; l_439_i0 < 6; l_439_i0++) {
            result += l_439[l_439_i0].f0;
            result += l_439[l_439_i0].f1;
            result += l_439[l_439_i0].f2;
            result += l_439[l_439_i0].f3;
            result += l_439[l_439_i0].f4;
        }
        int l_440_i0;
        for (l_440_i0 = 0; l_440_i0 < 6; l_440_i0++) {
            result += l_440[l_440_i0];
        }
        result += l_453;
        result += l_454;
        atomic_add(&p_772->l_special_values[3], result);
    }
    else
    { /* block id: 154 */
        (1 + 1);
    }
    l_457++;
    return p_772->g_460[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_233 p_772->g_234 p_772->g_435
 * writes: p_772->g_156 p_772->g_436
 */
int8_t * func_42(int32_t  p_43, int16_t  p_44, uint8_t  p_45, struct S9 * p_772)
{ /* block id: 134 */
    int32_t *l_433[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_434 = &l_433[2];
    int i;
    (*p_772->g_435) = ((*l_434) = ((**p_772->g_233) = l_433[2]));
    return &p_772->g_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_108 p_772->g_92 p_772->l_comm_values p_772->g_68 p_772->g_117 p_772->g_122 p_772->g_51 p_772->g_87 p_772->g_140 p_772->g_10 p_772->g_143 p_772->g_89 p_772->g_163 p_772->g_171 p_772->g_93.f0 p_772->g_156 p_772->g_181 p_772->g_171.f0 p_772->g_comm_values p_772->g_189 p_772->g_193 p_772->g_219 p_772->g_222 p_772->g_207 p_772->g_233 p_772->g_181.f0 p_772->g_236 p_772->g_241 p_772->g_250 p_772->g_258 p_772->g_260 p_772->g_263 p_772->g_279 p_772->g_243 p_772->g_187 p_772->g_259 p_772->g_234 p_772->g_318 p_772->g_319 p_772->g_326 p_772->g_351 p_772->g_353 p_772->g_368 p_772->g_257 p_772->g_369 p_772->g_382 p_772->g_384 p_772->g_401 p_772->g_403 p_772->g_319.f0 p_772->g_407 p_772->g_431
 * writes: p_772->g_89 p_772->g_117 p_772->g_87 p_772->g_140 p_772->g_92 p_772->g_143 p_772->g_156 p_772->g_comm_values p_772->g_189 p_772->g_93.f0 p_772->g_233 p_772->g_236 p_772->g_243 p_772->g_259
 */
union U8  func_46(int32_t  p_47, union U4  p_48, int64_t  p_49, int8_t  p_50, struct S9 * p_772)
{ /* block id: 14 */
    int8_t *l_109 = &p_772->g_89;
    int32_t *l_112 = &p_772->g_92[1];
    VECTOR(int8_t, 16) l_157 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x33L), 0x33L), 0x33L, 0L, 0x33L, (VECTOR(int8_t, 2))(0L, 0x33L), (VECTOR(int8_t, 2))(0L, 0x33L), 0L, 0x33L, 0L, 0x33L);
    union U4 l_282 = {0x05L};
    int32_t l_296 = 0x23589F06L;
    int8_t l_302 = (-1L);
    int32_t l_303 = 0x33414484L;
    int32_t l_305 = 0x170F00ABL;
    VECTOR(int32_t, 4) l_306 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0L), 0L);
    int32_t l_307 = 0L;
    VECTOR(uint16_t, 4) l_308 = (VECTOR(uint16_t, 4))(0x6D83L, (VECTOR(uint16_t, 2))(0x6D83L, 0UL), 0UL);
    VECTOR(uint16_t, 16) l_322 = (VECTOR(uint16_t, 16))(0x517CL, (VECTOR(uint16_t, 4))(0x517CL, (VECTOR(uint16_t, 2))(0x517CL, 0x8D60L), 0x8D60L), 0x8D60L, 0x517CL, 0x8D60L, (VECTOR(uint16_t, 2))(0x517CL, 0x8D60L), (VECTOR(uint16_t, 2))(0x517CL, 0x8D60L), 0x517CL, 0x8D60L, 0x517CL, 0x8D60L);
    uint64_t *l_330 = &p_772->g_189;
    VECTOR(uint16_t, 2) l_344 = (VECTOR(uint16_t, 2))(1UL, 0xC15DL);
    int16_t *l_345 = &p_772->g_257.f2;
    int16_t *l_346 = &p_772->g_257.f2;
    VECTOR(int64_t, 2) l_352 = (VECTOR(int64_t, 2))((-1L), 0x25716E25D9C95540L);
    union U3 *l_360 = (void*)0;
    uint32_t *l_361 = &p_772->g_236;
    uint16_t *l_362[5][1][10];
    int32_t l_363 = (-1L);
    VECTOR(int32_t, 4) l_367 = (VECTOR(int32_t, 4))(0x61018A83L, (VECTOR(int32_t, 2))(0x61018A83L, 6L), 6L);
    union U7 *l_393 = (void*)0;
    VECTOR(int32_t, 4) l_394 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2A69606FL), 0x2A69606FL);
    VECTOR(uint16_t, 2) l_405 = (VECTOR(uint16_t, 2))(1UL, 65526UL);
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
                l_362[i][j][k] = &p_772->g_140;
        }
    }
    if ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_772->global_2_offset, get_global_id(2), 10), (safe_sub_func_uint16_t_u_u((p_47 , (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_772->g_117 = (((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(p_772->g_108.yyxyxxyx)).s7350207126237704))).s9 , (p_50 = ((((((*l_109) = (-7L)) | (p_47 == (safe_mul_func_uint16_t_u_u(((0x73E9L ^ (&p_772->g_92[1] != l_112)) | ((((safe_mul_func_int16_t_s_s((0L | (safe_sub_func_int8_t_s_s(0x41L, (0x6284L <= p_772->g_92[1])))), 0x6CE7L)) , (void*)0) == &p_50) != p_772->g_92[1])), p_50)))) ^ p_772->g_108.x) != 4294967290UL) , 0x45L)))), (*l_112))), 0x2A4FL)), (*l_112)))), p_772->g_92[5])))), p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))])), p_772->g_68[0][0][1])))
    { /* block id: 18 */
        int32_t l_136 = 0x12DA420BL;
        VECTOR(int8_t, 4) l_175 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x55L), 0x55L);
        int8_t **l_218 = (void*)0;
        int32_t **l_239 = &p_772->g_156;
        int i;
        for (p_772->g_117 = (-19); (p_772->g_117 >= 20); p_772->g_117 = safe_add_func_int64_t_s_s(p_772->g_117, 5))
        { /* block id: 21 */
            VECTOR(uint8_t, 16) l_135 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 253UL), 253UL), 253UL, 1UL, 253UL, (VECTOR(uint8_t, 2))(1UL, 253UL), (VECTOR(uint8_t, 2))(1UL, 253UL), 1UL, 253UL, 1UL, 253UL);
            int32_t l_137 = 0x257FB1E3L;
            int32_t *l_160[2][1];
            uint8_t l_180 = 0x2CL;
            VECTOR(int16_t, 8) l_210 = (VECTOR(int16_t, 8))(0x3034L, (VECTOR(int16_t, 4))(0x3034L, (VECTOR(int16_t, 2))(0x3034L, 6L), 6L), 6L, 0x3034L, 6L);
            VECTOR(int64_t, 4) l_242 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 5L), 5L);
            uint32_t l_255 = 0UL;
            union U3 *l_256 = &p_772->g_257;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_160[i][j] = (void*)0;
            }
            for (p_49 = 0; (p_49 <= 26); ++p_49)
            { /* block id: 24 */
                uint16_t *l_138 = &p_772->g_87;
                uint16_t *l_139 = &p_772->g_140;
                int32_t l_141 = (-10L);
                int32_t *l_142 = &p_772->g_143;
                VECTOR(int32_t, 16) l_192 = (VECTOR(int32_t, 16))(0x675671FDL, (VECTOR(int32_t, 4))(0x675671FDL, (VECTOR(int32_t, 2))(0x675671FDL, 0x7D62526AL), 0x7D62526AL), 0x7D62526AL, 0x675671FDL, 0x7D62526AL, (VECTOR(int32_t, 2))(0x675671FDL, 0x7D62526AL), (VECTOR(int32_t, 2))(0x675671FDL, 0x7D62526AL), 0x675671FDL, 0x7D62526AL, 0x675671FDL, 0x7D62526AL);
                volatile int8_t * volatile *l_195[9][6] = {{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194},{(void*)0,&p_772->g_194,&p_772->g_194,(void*)0,&p_772->g_194,&p_772->g_194}};
                int64_t *l_251[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_251[i] = (void*)0;
                (*l_142) = ((*l_112) = (p_772->g_122 , ((l_141 = (safe_sub_func_int16_t_s_s((-3L), ((*l_139) ^= ((*l_138) &= (safe_div_func_int64_t_s_s((0x96A5E243L > p_772->g_51.s3), (safe_add_func_uint64_t_u_u(((+(&p_772->g_87 == &p_772->g_87)) , (1UL >= (l_137 = (((safe_div_func_int64_t_s_s(((safe_div_func_int16_t_s_s(1L, ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(0x37L, ((((((VECTOR(uint8_t, 8))(l_135.s8bb94ac6)).s0 & p_48.f0) || 65527UL) , p_49) <= l_136), 0x0EL, 0x54L, 0x63L, 0x59L, 0x0AL, 1L)).s5, (-1L))) , 0xC52DL))) > (-10L)), l_135.s4)) & p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))]) || 1L)))), 0x547904A2F46FD790L))))))))) ^ p_772->g_10)));
                if ((*l_142))
                { /* block id: 31 */
                    int16_t l_148 = 0L;
                    int32_t **l_155[9] = {&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112,&l_112};
                    int64_t *l_184 = (void*)0;
                    int64_t *l_185 = (void*)0;
                    int64_t *l_186[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    uint64_t *l_188 = &p_772->g_189;
                    int i, j, k;
                    if ((atomic_inc(&p_772->g_atomic_input[89 * get_linear_group_id() + 8]) == 4))
                    { /* block id: 33 */
                        uint16_t l_146 = 0UL;
                        uint16_t *l_145 = &l_146;
                        uint16_t **l_144 = &l_145;
                        uint16_t **l_147 = &l_145;
                        l_147 = l_144;
                        unsigned int result = 0;
                        result += l_146;
                        atomic_add(&p_772->g_special_values[89 * get_linear_group_id() + 8], result);
                    }
                    else
                    { /* block id: 35 */
                        (1 + 1);
                    }
                    if ((((l_148 ^ ((((safe_mod_func_int8_t_s_s((l_136 , ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((~FAKE_DIVERGE(p_772->local_2_offset, get_local_id(2), 10)), 4)), (&p_772->g_92[1] == (p_772->g_156 = &p_47)))), (-1L), (-1L), (-3L))).yyzyzywz)).hi)).zzxywwww, ((VECTOR(int8_t, 2))(l_157.sb9)).yyyxyyxx))).s4), p_772->g_92[1])) > (safe_sub_func_int8_t_s_s(((l_160[1][0] = &p_47) == (void*)0), (safe_lshift_func_uint16_t_u_s(p_772->g_68[2][0][0], 11))))) , (0x22L | p_772->g_51.s4)) == 0L)) >= p_50) <= p_772->g_89))
                    { /* block id: 40 */
                        VECTOR(int64_t, 8) l_170 = (VECTOR(int64_t, 8))(0x03D8830F4877578BL, (VECTOR(int64_t, 4))(0x03D8830F4877578BL, (VECTOR(int64_t, 2))(0x03D8830F4877578BL, 0x377992E5D78F8258L), 0x377992E5D78F8258L), 0x377992E5D78F8258L, 0x03D8830F4877578BL, 0x377992E5D78F8258L);
                        int i;
                        p_772->g_156 = &p_772->g_92[3];
                        (*p_772->g_156) = (((p_772->g_122 , ((((-6L) | ((-1L) | 1L)) != (((VECTOR(int16_t, 2))(0x02EDL, 0x7D21L)).hi == (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_772->g_163.s7023)).zyyyzwxyyywwwwzz)).se , (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(2L, (safe_add_func_int8_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_170.s14101363)))).s3 > 0L), ((p_772->g_117 | ((VECTOR(uint32_t, 16))(0UL, (((((p_772->g_171 , (safe_unary_minus_func_int64_t_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_175.zxxw)).z, ((safe_add_func_uint16_t_u_u(((*l_139) |= l_170.s3), l_180)) >= 0UL)))))) , p_772->g_89) | FAKE_DIVERGE(p_772->global_2_offset, get_global_id(2), 10)) <= p_49) <= p_49), p_772->g_143, 0x51E17A11L, 0xBA8154FDL, 6UL, p_772->g_117, ((VECTOR(uint32_t, 4))(0x3C4D6EFBL)), 4294967295UL, ((VECTOR(uint32_t, 4))(0x4783F6A3L)))).sd) ^ l_136))))), p_772->g_93.f0))))) , 0L)) | 0x00L) != FAKE_DIVERGE(p_772->group_1_offset, get_group_id(1), 10));
                    }
                    else
                    { /* block id: 44 */
                        return p_772->g_181;
                    }
                    if ((safe_div_func_int64_t_s_s((p_772->g_comm_values[p_772->tid] &= (p_772->g_171.f0 || ((*l_109) = ((*l_112) | p_772->g_140)))), ((*l_188)++))))
                    { /* block id: 50 */
                        (*l_112) = ((VECTOR(int32_t, 8))(l_192.sd9819071)).s5;
                        l_195[3][1] = p_772->g_193[1][4][0];
                        p_772->g_143 &= (safe_lshift_func_uint16_t_u_u(0xFF02L, (*l_112)));
                    }
                    else
                    { /* block id: 54 */
                        int8_t l_202[9][10] = {{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL},{0x5BL,0x79L,(-7L),0x3AL,(-7L),0x79L,0x5BL,0x67L,0x7EL,0x5DL}};
                        int i, j;
                        (*l_142) = ((*l_112) ^= (l_202[0][6] &= (safe_lshift_func_uint16_t_u_u((++(*l_138)), 3))));
                    }
                }
                else
                { /* block id: 60 */
                    int32_t l_205 = 0x04DE00D5L;
                    VECTOR(uint16_t, 8) l_206 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65535UL), 65535UL), 65535UL, 6UL, 65535UL);
                    uint8_t *l_211 = &p_772->g_93.f0;
                    int i;
                    (*p_772->g_222) = (((FAKE_DIVERGE(p_772->global_2_offset, get_global_id(2), 10) <= 0x35BA2BE6L) < (((((safe_rshift_func_uint8_t_u_u(l_205, ((*l_211) = (((VECTOR(uint16_t, 8))(0xDABCL, 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(l_206.s3540171375107616)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_772->g_207.sea)).yyyy)).zywyxwyy)).s65)).yyxxxxxxyxxyxxxx))).se7a0)), 65535UL, 1UL)).s1 >= (safe_add_func_int16_t_s_s(p_772->g_87, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_210.s46050355)).s0260247631527430)).sb9b3)).x)))))) > (((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((l_218 == &l_109) ^ l_205), p_772->g_108.x)), (p_772->g_219[4] != (void*)0))), 0x653F050AL)) > p_48.f0) <= p_772->g_92[1])) < p_47) , p_772->g_171.f0) == p_47)) , &p_47);
                }
                for (p_772->g_87 = 0; (p_772->g_87 <= 46); p_772->g_87++)
                { /* block id: 66 */
                    int32_t **l_228 = (void*)0;
                    int32_t ***l_227 = &l_228;
                    uint32_t *l_235 = &p_772->g_236;
                    int32_t l_240 = 0x589DC981L;
                    int64_t **l_252 = &l_251[1];
                    int i, j;
                    l_240 = ((*l_142) = (p_47 ^= (((*l_142) || (((*l_227) = &l_112) != ((((safe_lshift_func_int8_t_s_u(0x09L, 4)) >= ((p_772->g_207.s0 > ((safe_mul_func_int16_t_s_s(0L, ((p_772->g_233 = p_772->g_233) == (p_772->g_181.f0 , (void*)0)))) != ((*l_235)++))) > ((l_109 != &p_50) != (-1L)))) , 0x5B96B6CEL) , l_239))) || (*l_112))));
                    (*p_772->g_156) |= (-2L);
                    (**l_239) = (((p_772->g_241 , p_48.f0) , ((VECTOR(int64_t, 16))(0L, 0x7C50ED043E5B959EL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_242.yyxzwwyz)).even)), (((p_772->g_243 = l_109) == &p_50) > (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((safe_add_func_uint8_t_u_u((p_772->g_250 != ((*l_252) = l_251[1])), (**l_239))) & (safe_sub_func_uint8_t_u_u(l_255, (((((*l_235) = (((VECTOR(uint32_t, 4))(0x48D36CFCL, 4294967295UL, 0x13317710L, 4294967295UL)).z != p_50)) == p_772->g_181.f0) > FAKE_DIVERGE(p_772->global_1_offset, get_global_id(1), 10)) & FAKE_DIVERGE(p_772->global_0_offset, get_global_id(0), 10))))), 0xC9D2L, ((VECTOR(uint16_t, 4))(0x5F62L)), 65535UL, 0x35A3L)).s7, p_49)), p_49))), 0x54BA92695958FE57L, 1L, ((VECTOR(int64_t, 4))((-7L))), 0x0739EEF94E82CD3DL, 0x2F45142B981AEEA3L, 0x2D9DD56EC37419D2L)).s2) , p_49);
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_772->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 98)), permutations[(safe_mod_func_uint32_t_u_u(0x931CDDB0L, 10))][(safe_mod_func_uint32_t_u_u(p_772->tid, 98))]));
                }
            }
            (*p_772->g_258) = (p_50 , l_256);
        }
    }
    else
    { /* block id: 85 */
        int64_t *l_284 = (void*)0;
        int64_t **l_283 = &l_284;
        uint8_t *l_285 = &l_282.f0;
        int32_t l_290 = (-1L);
        union U3 *l_293 = &p_772->g_257;
        VECTOR(int32_t, 2) l_295 = (VECTOR(int32_t, 2))(0x0D30FA18L, 0L);
        int32_t l_304 = 0x7D199610L;
        int32_t *l_311 = &p_772->g_143;
        int i;
        if (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_772->g_260.xxyyxxyx)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x3F30FDA5L, (safe_lshift_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_772->g_263.yyxy)))).wyxzyxxy)).s3753427236012256, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((((((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_mod_func_uint16_t_u_u((!(((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s(p_47, (p_772->g_279 , (safe_lshift_func_uint8_t_u_s((l_282 , ((*l_285) = ((void*)0 != l_283))), 6))))) && (safe_add_func_int64_t_s_s(p_48.f0, p_49))) && ((-1L) | ((((*p_772->g_243) |= (safe_rshift_func_int16_t_s_s((*l_112), p_47))) && (-10L)) != p_50))), FAKE_DIVERGE(p_772->local_1_offset, get_local_id(1), 10))), 9L)) , 0UL) >= 0x39L)), FAKE_DIVERGE(p_772->global_0_offset, get_global_id(0), 10))))), 3)) || p_772->g_comm_values[p_772->tid]), 6)) , (-7L)), p_772->g_187)) , p_48.f0) != p_772->g_187) ^ 1L) || l_290), ((VECTOR(uint8_t, 2))(0x0FL)), 0x26L)).zwxxxzzxxzwzwxxy)).s13)).xxyyyyyxyyyxyyyy, ((VECTOR(uint8_t, 16))(8UL))))))).s3 > l_290), l_290)), 5L, ((VECTOR(int32_t, 4))((-1L))), 0x4AB78EE6L)).odd)), 7L, 0L, 1L, 1L)).s73, ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x10350B1FL)), ((VECTOR(int32_t, 4))(0L)))), ((VECTOR(int32_t, 16))(0x04A42141L))))).s0)
        { /* block id: 88 */
            union U3 **l_294 = &p_772->g_259;
            int32_t *l_297 = (void*)0;
            int32_t *l_298 = &p_772->g_187;
            int32_t *l_299 = &p_772->g_143;
            int32_t *l_300 = &l_296;
            int32_t *l_301[2];
            int i;
            for (i = 0; i < 2; i++)
                l_301[i] = &p_772->g_187;
            (***p_772->g_233) |= ((-1L) <= (l_293 == ((*l_294) = (*p_772->g_258))));
            (***p_772->g_233) |= ((VECTOR(int32_t, 4))(l_295.yyxy)).z;
            --l_308.z;
            l_311 = &p_47;
        }
        else
        { /* block id: 94 */
            int16_t *l_323 = (void*)0;
            int16_t *l_324 = &p_772->g_257.f2;
            int16_t *l_325[8] = {&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2,&p_772->g_257.f2};
            int32_t l_327 = 0x29253BF1L;
            uint64_t *l_329 = &p_772->g_189;
            uint64_t **l_328 = &l_329;
            int32_t l_331 = 8L;
            int32_t *l_332 = &p_772->g_187;
            int32_t *l_333 = &p_772->g_92[2];
            int32_t *l_334[8] = {&p_772->g_143,&p_772->g_143,&p_772->g_143,&p_772->g_143,&p_772->g_143,&p_772->g_143,&p_772->g_143,&p_772->g_143};
            uint16_t l_335 = 0xD69AL;
            int i;
            (*l_112) = ((safe_lshift_func_uint16_t_u_s(0x9A5BL, (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((safe_add_func_uint8_t_u_u((p_772->g_318 , ((p_772->g_319 , 0x2C08AB6BL) && (((0x1A13487EL || ((**p_772->g_222) , ((***p_772->g_233) = (p_772->g_122 , ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_322.sb0f3)).y, (l_327 &= (-8L)))) < (((*l_328) = &p_772->g_189) != l_330)))))) | 0x41L) != 0UL))), l_331)), ((VECTOR(int16_t, 4))(0x7C2DL)), 0x3E22L, 0x1326L, (-10L))).s4037142110753336))))).sed1c, ((VECTOR(uint16_t, 4))(0xA14AL))))), 65528UL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(65535UL)), 0x89BCL, ((VECTOR(uint16_t, 4))(0x8551L)))).scb4c)).y, 7)))) < l_331);
            --l_335;
        }
        return p_772->g_279;
    }
    if (((18446744073709551615UL & ((*l_330) = ((p_50 | (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0xD653L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0xE057L, 0x04A1L, 0x3F12L, 0xE2E2L, (safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_add_func_int32_t_s_s((-2L), p_772->g_326)))), 0x983FL, 0x36B8L, 2UL)).s12)), 0x60F6L)), 65534UL, 0x0DE5L, 0x324DL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_344.yx)))).xyyyxxxyxxyyxxyx))).lo)), 0x1ECBL)).hi))).s2, (((((*l_112) ^= p_772->g_181.f0) ^ 0x6581L) , ((safe_div_func_uint32_t_u_u(((p_50 > (safe_sub_func_uint64_t_u_u((p_772->g_171.f0 ^ GROUP_DIVERGE(2, 1)), ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_772->g_351.yxxyxyyxyxyxyyyy)).s7560)), ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_352.xyxxxxxy)).lo)).zyxywxzw, ((VECTOR(int64_t, 4))(0x5CE3B4DF4E63ADF2L, 0x78612B10208DEA3BL, 0x532267C3B2963E06L, (-2L))).xzwyxxwy))).even, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(p_772->g_353.s0511)).odd))).xyxy))).y))) && ((*l_112) = (safe_add_func_uint32_t_u_u(((*l_361) &= (((safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((!(((l_360 != (*p_772->g_258)) , (*p_772->g_243)) ^ p_49)), (*l_112))), (*l_112))) <= 1UL) ^ p_772->g_92[3])), 0x12DBA808L)))), p_772->g_181.f0)) > (-10L))) >= l_363)))) == 0L))) < p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))]))
    { /* block id: 107 */
        union U7 *l_364[9][3][1] = {{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}},{{&p_772->g_319},{&p_772->g_319},{&p_772->g_319}}};
        union U7 **l_365[7] = {&l_364[3][2][0],&l_364[3][2][0],&l_364[3][2][0],&l_364[3][2][0],&l_364[3][2][0],&l_364[3][2][0],&l_364[3][2][0]};
        union U7 *l_366 = &p_772->g_319;
        int32_t l_378 = 0x4AF80C35L;
        int32_t *l_381[8][9] = {{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187},{&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187,&l_305,&l_305,&p_772->g_187,&p_772->g_187}};
        VECTOR(int32_t, 4) l_383 = (VECTOR(int32_t, 4))(0x7BB3D654L, (VECTOR(int32_t, 2))(0x7BB3D654L, 0x62EDF9CFL), 0x62EDF9CFL);
        int i, j, k;
        l_366 = l_364[1][1][0];
        (**p_772->g_234) = ((VECTOR(int32_t, 16))(0x69437AFCL, 0x1208CAB9L, 1L, 0x35758709L, 0L, ((VECTOR(int32_t, 8))(l_367.xwxxxwzy)), 0x24EE8857L, 1L, 0x22181DD4L)).sf;
        p_772->g_143 |= ((((p_772->g_368 , (**p_772->g_258)) , p_772->g_369) , (!(safe_add_func_int64_t_s_s((((safe_rshift_func_int16_t_s_s(0L, (((*l_361) = GROUP_DIVERGE(2, 1)) || ((*l_361) = (p_48.f0 , ((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_378, GROUP_DIVERGE(2, 1))) & (safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), 0x4374L))), (((p_772->g_353.s5 != (*l_112)) > 0xFB039B658798CC1BL) >= p_50))) | l_378)))))) < p_48.f0) <= 0x61L), (-1L))))) >= (*l_112));
        (*p_772->g_156) &= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_772->g_382.yx)).yyyx)).wyxywwzw, ((VECTOR(int32_t, 8))(l_383.wwxzwzxy)), ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(p_772->g_384.xxwywzwwywzwzwwz)).even, ((VECTOR(int32_t, 2))(0x2E68A92CL, 1L)).yyxxyxyx)))))).s2;
    }
    else
    { /* block id: 114 */
        union U7 *l_398 = &p_772->g_319;
        int32_t l_413 = 0x64032D32L;
        int8_t l_414 = 0x17L;
        int32_t l_415 = 1L;
        int32_t l_416 = 0x41C3FA0FL;
        int32_t l_419 = 3L;
        uint64_t l_420 = 0xC153BD5B5AC59ABEL;
        int32_t *l_427 = (void*)0;
        if (((*p_772->g_156) | 0x1A18FB62L))
        { /* block id: 115 */
            int32_t *l_395 = &p_772->g_181.f3;
            int32_t *l_396 = (void*)0;
            int32_t *l_397 = &l_363;
            int8_t **l_402 = &l_109;
            int32_t l_404 = 0L;
            (*l_112) = (safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((p_772->g_117 , ((GROUP_DIVERGE(1, 1) ^ p_48.f0) , (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_393 == (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_394.xy)).xxyy)).even)), (int32_t)(((*l_397) |= 0x6E13537DL) , 3L)))).yxxxyyxx)).s7 , l_398)) && (safe_mul_func_int8_t_s_s(((p_772->g_401 ^ p_49) <= ((((l_402 != l_402) , p_48.f0) , p_772->g_403) , l_404)), p_772->g_319.f0))), 15)) , l_405.y), (-3L))))), l_404)), p_772->g_87));
        }
        else
        { /* block id: 118 */
            uint16_t l_406 = 1UL;
            int32_t l_417 = (-8L);
            int32_t l_418 = (-1L);
            uint8_t l_423 = 0x68L;
            if (l_406)
            { /* block id: 119 */
                return p_772->g_407;
            }
            else
            { /* block id: 121 */
                int32_t *l_408 = &l_305;
                int32_t *l_409 = &l_303;
                int32_t *l_410 = &l_296;
                int32_t *l_411 = &p_772->g_143;
                int32_t *l_412[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                ++l_420;
                l_423++;
            }
        }
        l_416 ^= (***p_772->g_233);
        for (p_772->g_117 = 1; (p_772->g_117 > 19); p_772->g_117 = safe_add_func_int64_t_s_s(p_772->g_117, 9))
        { /* block id: 129 */
            (**p_772->g_233) = &l_296;
        }
    }
    return p_772->g_431;
}


/* ------------------------------------------ */
/* 
 * reads : p_772->g_comm_values p_772->g_10 p_772->g_87 p_772->g_68 p_772->l_comm_values p_772->g_92
 * writes: p_772->g_68 p_772->g_87 p_772->g_89 p_772->g_92
 */
uint32_t  func_52(uint8_t  p_53, int8_t * p_54, int8_t * p_55, struct S9 * p_772)
{ /* block id: 5 */
    VECTOR(int64_t, 2) l_62 = (VECTOR(int64_t, 2))(0x42D225D8BAC8E9BDL, 0x34F7BC72EA128966L);
    VECTOR(int8_t, 16) l_67 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0DL), 0x0DL), 0x0DL, 0L, 0x0DL, (VECTOR(int8_t, 2))(0L, 0x0DL), (VECTOR(int8_t, 2))(0L, 0x0DL), 0L, 0x0DL, 0L, 0x0DL);
    int8_t *l_75 = &p_772->g_10;
    int8_t **l_74 = &l_75;
    uint16_t *l_85 = (void*)0;
    uint16_t *l_86[5] = {&p_772->g_87,&p_772->g_87,&p_772->g_87,&p_772->g_87,&p_772->g_87};
    int8_t *l_88[6] = {&p_772->g_89,&p_772->g_89,&p_772->g_89,&p_772->g_89,&p_772->g_89,&p_772->g_89};
    int8_t **l_90 = &l_88[1];
    int32_t *l_91 = &p_772->g_92[1];
    int i;
    atomic_or(&p_772->g_atomic_reduction[get_linear_group_id()], ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(l_62.yyxx)).z, (safe_lshift_func_uint16_t_u_u((&p_772->g_10 == ((*l_90) = (((p_53 | (((p_772->g_68[2][0][3] = ((VECTOR(int8_t, 4))(l_67.s6799)).z) && (safe_lshift_func_int8_t_s_u((p_772->g_89 = (((p_772->g_comm_values[p_772->tid] == l_62.y) & ((p_772->g_87 ^= (safe_unary_minus_func_int8_t_s(((8UL > (safe_lshift_func_int8_t_s_u(((((*l_74) = p_54) != &p_772->g_10) || ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(5L, ((safe_lshift_func_int8_t_s_s((((safe_unary_minus_func_uint32_t_u(0x839C7238L)) == FAKE_DIVERGE(p_772->global_0_offset, get_global_id(0), 10)) < p_53), l_62.y)) >= p_772->g_10))) | 0L), p_53)), p_772->g_10)) < 0x097B3892L)), 3))) <= 0x6652566A56D104A7L)))) && p_772->g_10)) , 0L)), 4))) > 0xAA6EL)) || p_772->g_68[2][0][3]) , p_55))), p_772->g_comm_values[p_772->tid])))) | l_67.se) , 0xA94A57C3L) , p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))]), p_53)) , 0x35L), 3)) | l_67.sc));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_772->v_collective += p_772->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*l_91) &= 0x63256063L;
    return p_772->l_comm_values[(safe_mod_func_uint32_t_u_u(p_772->tid, 98))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
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
    __local int64_t l_comm_values[98];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 98; i++)
            l_comm_values[i] = 1;
    struct S9 c_773;
    struct S9* p_772 = &c_773;
    struct S9 c_774 = {
        9L, // p_772->g_10
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1966BA05L), 0x1966BA05L), 0x1966BA05L, 1UL, 0x1966BA05L), // p_772->g_51
        {{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}},{{0x861E80F9L,0x066EAA9BL,0x861E80F9L,0x861E80F9L,0x066EAA9BL,0x861E80F9L}}}, // p_772->g_68
        0UL, // p_772->g_87
        4L, // p_772->g_89
        {0x22E340D7L,(-1L),0x22E340D7L,0x22E340D7L,(-1L),0x22E340D7L,0x22E340D7L,(-1L),0x22E340D7L}, // p_772->g_92
        {0x1EL}, // p_772->g_93
        (VECTOR(int32_t, 2))(0x2CAAEB7CL, 0x7E6EF1F7L), // p_772->g_108
        (-1L), // p_772->g_117
        {0x3AD18702L}, // p_772->g_122
        0x348BL, // p_772->g_140
        0x431E8507L, // p_772->g_143
        &p_772->g_143, // p_772->g_156
        (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0UL), 0UL), 0UL, 9UL, 0UL), // p_772->g_163
        {0x46795E05L}, // p_772->g_171
        {0x67B1A390L}, // p_772->g_181
        (-1L), // p_772->g_187
        18446744073709551612UL, // p_772->g_189
        (void*)0, // p_772->g_194
        {{{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194}},{{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194},{&p_772->g_194}}}, // p_772->g_193
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x07ABL), 0x07ABL), 0x07ABL, 0UL, 0x07ABL, (VECTOR(uint16_t, 2))(0UL, 0x07ABL), (VECTOR(uint16_t, 2))(0UL, 0x07ABL), 0UL, 0x07ABL, 0UL, 0x07ABL), // p_772->g_207
        0xE58EL, // p_772->g_221
        &p_772->g_221, // p_772->g_220
        {&p_772->g_220,&p_772->g_220,&p_772->g_220,&p_772->g_220,&p_772->g_220}, // p_772->g_219
        &p_772->g_156, // p_772->g_222
        &p_772->g_156, // p_772->g_234
        &p_772->g_234, // p_772->g_233
        0x6C923159L, // p_772->g_236
        {0x572653D7L}, // p_772->g_241
        &p_772->g_89, // p_772->g_243
        (void*)0, // p_772->g_250
        {0x34D346F2252D0A62L}, // p_772->g_257
        &p_772->g_257, // p_772->g_259
        &p_772->g_259, // p_772->g_258
        (VECTOR(int32_t, 2))((-1L), 6L), // p_772->g_260
        (VECTOR(uint8_t, 2))(248UL, 255UL), // p_772->g_263
        {-1L}, // p_772->g_279
        {-5L}, // p_772->g_318
        {0xAA0B69B365FFFEB7L}, // p_772->g_319
        (-1L), // p_772->g_326
        (VECTOR(int64_t, 2))(0x1D6E4C45B6543DA5L, 1L), // p_772->g_351
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_772->g_353
        {5L}, // p_772->g_368
        {-5L}, // p_772->g_369
        (VECTOR(int32_t, 2))(0L, 0x7C6CBDADL), // p_772->g_382
        (VECTOR(int32_t, 4))(0x2B8D8767L, (VECTOR(int32_t, 2))(0x2B8D8767L, 5L), 5L), // p_772->g_384
        0x417FL, // p_772->g_401
        {0x66A7898F86669DA2L}, // p_772->g_403
        {0x032C8552L}, // p_772->g_407
        (void*)0, // p_772->g_426
        (void*)0, // p_772->g_428
        {0x147BEC53L}, // p_772->g_431
        &p_772->g_143, // p_772->g_436
        &p_772->g_436, // p_772->g_435
        {{4294967289UL},{4294967289UL},{4294967289UL},{4294967289UL}}, // p_772->g_460
        0x46L, // p_772->g_462
        0x603BL, // p_772->g_477
        {0xFAL}, // p_772->g_478
        (VECTOR(int16_t, 4))(0x0F82L, (VECTOR(int16_t, 2))(0x0F82L, 0x18F5L), 0x18F5L), // p_772->g_494
        (void*)0, // p_772->g_498
        &p_772->g_498, // p_772->g_497
        &p_772->g_187, // p_772->g_512
        {0x27BA272DL,0x27BA272DL}, // p_772->g_530
        &p_772->g_319.f0, // p_772->g_579
        &p_772->g_579, // p_772->g_578
        (VECTOR(int16_t, 8))(0x465AL, (VECTOR(int16_t, 4))(0x465AL, (VECTOR(int16_t, 2))(0x465AL, 0x0122L), 0x0122L), 0x0122L, 0x465AL, 0x0122L), // p_772->g_582
        {{-1L},{-1L},{-1L}}, // p_772->g_583
        {-8L}, // p_772->g_589
        1UL, // p_772->g_605
        {0xF9AE47CDL}, // p_772->g_611
        &p_772->g_589, // p_772->g_642
        {{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642},{&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642,&p_772->g_642}}, // p_772->g_641
        {0x611C666C9AC66C81L}, // p_772->g_664
        65529UL, // p_772->g_683
        (VECTOR(uint8_t, 4))(0x7BL, (VECTOR(uint8_t, 2))(0x7BL, 8UL), 8UL), // p_772->g_685
        {0}, // p_772->g_701
        {{&p_772->g_701,(void*)0,&p_772->g_701,(void*)0,&p_772->g_701,&p_772->g_701},{&p_772->g_701,(void*)0,&p_772->g_701,(void*)0,&p_772->g_701,&p_772->g_701},{&p_772->g_701,(void*)0,&p_772->g_701,(void*)0,&p_772->g_701,&p_772->g_701}}, // p_772->g_703
        &p_772->g_703[1][4], // p_772->g_702
        4294967291UL, // p_772->g_725
        1UL, // p_772->g_732
        0, // p_772->v_collective
        sequence_input[get_global_id(0)], // p_772->global_0_offset
        sequence_input[get_global_id(1)], // p_772->global_1_offset
        sequence_input[get_global_id(2)], // p_772->global_2_offset
        sequence_input[get_local_id(0)], // p_772->local_0_offset
        sequence_input[get_local_id(1)], // p_772->local_1_offset
        sequence_input[get_local_id(2)], // p_772->local_2_offset
        sequence_input[get_group_id(0)], // p_772->group_0_offset
        sequence_input[get_group_id(1)], // p_772->group_1_offset
        sequence_input[get_group_id(2)], // p_772->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 98)), permutations[0][get_linear_local_id()])), // p_772->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_773 = c_774;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_772);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_772->g_10, "p_772->g_10", print_hash_value);
    transparent_crc(p_772->g_51.s0, "p_772->g_51.s0", print_hash_value);
    transparent_crc(p_772->g_51.s1, "p_772->g_51.s1", print_hash_value);
    transparent_crc(p_772->g_51.s2, "p_772->g_51.s2", print_hash_value);
    transparent_crc(p_772->g_51.s3, "p_772->g_51.s3", print_hash_value);
    transparent_crc(p_772->g_51.s4, "p_772->g_51.s4", print_hash_value);
    transparent_crc(p_772->g_51.s5, "p_772->g_51.s5", print_hash_value);
    transparent_crc(p_772->g_51.s6, "p_772->g_51.s6", print_hash_value);
    transparent_crc(p_772->g_51.s7, "p_772->g_51.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_772->g_68[i][j][k], "p_772->g_68[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_772->g_87, "p_772->g_87", print_hash_value);
    transparent_crc(p_772->g_89, "p_772->g_89", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_772->g_92[i], "p_772->g_92[i]", print_hash_value);

    }
    transparent_crc(p_772->g_93.f0, "p_772->g_93.f0", print_hash_value);
    transparent_crc(p_772->g_108.x, "p_772->g_108.x", print_hash_value);
    transparent_crc(p_772->g_108.y, "p_772->g_108.y", print_hash_value);
    transparent_crc(p_772->g_117, "p_772->g_117", print_hash_value);
    transparent_crc(p_772->g_122.f0, "p_772->g_122.f0", print_hash_value);
    transparent_crc(p_772->g_140, "p_772->g_140", print_hash_value);
    transparent_crc(p_772->g_143, "p_772->g_143", print_hash_value);
    transparent_crc(p_772->g_163.s0, "p_772->g_163.s0", print_hash_value);
    transparent_crc(p_772->g_163.s1, "p_772->g_163.s1", print_hash_value);
    transparent_crc(p_772->g_163.s2, "p_772->g_163.s2", print_hash_value);
    transparent_crc(p_772->g_163.s3, "p_772->g_163.s3", print_hash_value);
    transparent_crc(p_772->g_163.s4, "p_772->g_163.s4", print_hash_value);
    transparent_crc(p_772->g_163.s5, "p_772->g_163.s5", print_hash_value);
    transparent_crc(p_772->g_163.s6, "p_772->g_163.s6", print_hash_value);
    transparent_crc(p_772->g_163.s7, "p_772->g_163.s7", print_hash_value);
    transparent_crc(p_772->g_171.f0, "p_772->g_171.f0", print_hash_value);
    transparent_crc(p_772->g_181.f0, "p_772->g_181.f0", print_hash_value);
    transparent_crc(p_772->g_187, "p_772->g_187", print_hash_value);
    transparent_crc(p_772->g_189, "p_772->g_189", print_hash_value);
    transparent_crc(p_772->g_207.s0, "p_772->g_207.s0", print_hash_value);
    transparent_crc(p_772->g_207.s1, "p_772->g_207.s1", print_hash_value);
    transparent_crc(p_772->g_207.s2, "p_772->g_207.s2", print_hash_value);
    transparent_crc(p_772->g_207.s3, "p_772->g_207.s3", print_hash_value);
    transparent_crc(p_772->g_207.s4, "p_772->g_207.s4", print_hash_value);
    transparent_crc(p_772->g_207.s5, "p_772->g_207.s5", print_hash_value);
    transparent_crc(p_772->g_207.s6, "p_772->g_207.s6", print_hash_value);
    transparent_crc(p_772->g_207.s7, "p_772->g_207.s7", print_hash_value);
    transparent_crc(p_772->g_207.s8, "p_772->g_207.s8", print_hash_value);
    transparent_crc(p_772->g_207.s9, "p_772->g_207.s9", print_hash_value);
    transparent_crc(p_772->g_207.sa, "p_772->g_207.sa", print_hash_value);
    transparent_crc(p_772->g_207.sb, "p_772->g_207.sb", print_hash_value);
    transparent_crc(p_772->g_207.sc, "p_772->g_207.sc", print_hash_value);
    transparent_crc(p_772->g_207.sd, "p_772->g_207.sd", print_hash_value);
    transparent_crc(p_772->g_207.se, "p_772->g_207.se", print_hash_value);
    transparent_crc(p_772->g_207.sf, "p_772->g_207.sf", print_hash_value);
    transparent_crc(p_772->g_221, "p_772->g_221", print_hash_value);
    transparent_crc(p_772->g_236, "p_772->g_236", print_hash_value);
    transparent_crc(p_772->g_241.f0, "p_772->g_241.f0", print_hash_value);
    transparent_crc(p_772->g_257.f0, "p_772->g_257.f0", print_hash_value);
    transparent_crc(p_772->g_260.x, "p_772->g_260.x", print_hash_value);
    transparent_crc(p_772->g_260.y, "p_772->g_260.y", print_hash_value);
    transparent_crc(p_772->g_263.x, "p_772->g_263.x", print_hash_value);
    transparent_crc(p_772->g_263.y, "p_772->g_263.y", print_hash_value);
    transparent_crc(p_772->g_279.f0, "p_772->g_279.f0", print_hash_value);
    transparent_crc(p_772->g_318.f0, "p_772->g_318.f0", print_hash_value);
    transparent_crc(p_772->g_319.f0, "p_772->g_319.f0", print_hash_value);
    transparent_crc(p_772->g_326, "p_772->g_326", print_hash_value);
    transparent_crc(p_772->g_351.x, "p_772->g_351.x", print_hash_value);
    transparent_crc(p_772->g_351.y, "p_772->g_351.y", print_hash_value);
    transparent_crc(p_772->g_353.s0, "p_772->g_353.s0", print_hash_value);
    transparent_crc(p_772->g_353.s1, "p_772->g_353.s1", print_hash_value);
    transparent_crc(p_772->g_353.s2, "p_772->g_353.s2", print_hash_value);
    transparent_crc(p_772->g_353.s3, "p_772->g_353.s3", print_hash_value);
    transparent_crc(p_772->g_353.s4, "p_772->g_353.s4", print_hash_value);
    transparent_crc(p_772->g_353.s5, "p_772->g_353.s5", print_hash_value);
    transparent_crc(p_772->g_353.s6, "p_772->g_353.s6", print_hash_value);
    transparent_crc(p_772->g_353.s7, "p_772->g_353.s7", print_hash_value);
    transparent_crc(p_772->g_368.f0, "p_772->g_368.f0", print_hash_value);
    transparent_crc(p_772->g_369.f0, "p_772->g_369.f0", print_hash_value);
    transparent_crc(p_772->g_382.x, "p_772->g_382.x", print_hash_value);
    transparent_crc(p_772->g_382.y, "p_772->g_382.y", print_hash_value);
    transparent_crc(p_772->g_384.x, "p_772->g_384.x", print_hash_value);
    transparent_crc(p_772->g_384.y, "p_772->g_384.y", print_hash_value);
    transparent_crc(p_772->g_384.z, "p_772->g_384.z", print_hash_value);
    transparent_crc(p_772->g_384.w, "p_772->g_384.w", print_hash_value);
    transparent_crc(p_772->g_401, "p_772->g_401", print_hash_value);
    transparent_crc(p_772->g_403.f0, "p_772->g_403.f0", print_hash_value);
    transparent_crc(p_772->g_407.f0, "p_772->g_407.f0", print_hash_value);
    transparent_crc(p_772->g_431.f0, "p_772->g_431.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_772->g_460[i].f0, "p_772->g_460[i].f0", print_hash_value);

    }
    transparent_crc(p_772->g_462, "p_772->g_462", print_hash_value);
    transparent_crc(p_772->g_477, "p_772->g_477", print_hash_value);
    transparent_crc(p_772->g_478.f0, "p_772->g_478.f0", print_hash_value);
    transparent_crc(p_772->g_494.x, "p_772->g_494.x", print_hash_value);
    transparent_crc(p_772->g_494.y, "p_772->g_494.y", print_hash_value);
    transparent_crc(p_772->g_494.z, "p_772->g_494.z", print_hash_value);
    transparent_crc(p_772->g_494.w, "p_772->g_494.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_772->g_530[i], "p_772->g_530[i]", print_hash_value);

    }
    transparent_crc(p_772->g_582.s0, "p_772->g_582.s0", print_hash_value);
    transparent_crc(p_772->g_582.s1, "p_772->g_582.s1", print_hash_value);
    transparent_crc(p_772->g_582.s2, "p_772->g_582.s2", print_hash_value);
    transparent_crc(p_772->g_582.s3, "p_772->g_582.s3", print_hash_value);
    transparent_crc(p_772->g_582.s4, "p_772->g_582.s4", print_hash_value);
    transparent_crc(p_772->g_582.s5, "p_772->g_582.s5", print_hash_value);
    transparent_crc(p_772->g_582.s6, "p_772->g_582.s6", print_hash_value);
    transparent_crc(p_772->g_582.s7, "p_772->g_582.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_772->g_583[i].f0, "p_772->g_583[i].f0", print_hash_value);

    }
    transparent_crc(p_772->g_589.f0, "p_772->g_589.f0", print_hash_value);
    transparent_crc(p_772->g_605, "p_772->g_605", print_hash_value);
    transparent_crc(p_772->g_611.f0, "p_772->g_611.f0", print_hash_value);
    transparent_crc(p_772->g_664.f0, "p_772->g_664.f0", print_hash_value);
    transparent_crc(p_772->g_683, "p_772->g_683", print_hash_value);
    transparent_crc(p_772->g_685.x, "p_772->g_685.x", print_hash_value);
    transparent_crc(p_772->g_685.y, "p_772->g_685.y", print_hash_value);
    transparent_crc(p_772->g_685.z, "p_772->g_685.z", print_hash_value);
    transparent_crc(p_772->g_685.w, "p_772->g_685.w", print_hash_value);
    transparent_crc(p_772->g_725, "p_772->g_725", print_hash_value);
    transparent_crc(p_772->g_732, "p_772->g_732", print_hash_value);
    transparent_crc(p_772->v_collective, "p_772->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 89; i++)
            transparent_crc(p_772->g_special_values[i + 89 * get_linear_group_id()], "p_772->g_special_values[i + 89 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_772->l_special_values[i], "p_772->l_special_values[i]", print_hash_value);
    transparent_crc(p_772->l_comm_values[get_linear_local_id()], "p_772->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_772->g_comm_values[get_linear_group_id() * 98 + get_linear_local_id()], "p_772->g_comm_values[get_linear_group_id() * 98 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
