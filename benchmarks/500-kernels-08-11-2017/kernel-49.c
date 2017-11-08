// --atomics 13 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,39,2 -l 23,3,1
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

__constant uint32_t permutations[10][69] = {
{26,28,11,17,2,67,33,29,54,7,5,8,41,0,6,42,61,4,3,43,63,15,30,39,56,14,27,25,24,13,40,1,32,35,23,57,21,38,36,64,47,22,31,68,18,55,20,45,51,44,16,37,19,46,10,53,9,34,59,12,66,60,65,52,48,62,49,58,50}, // permutation 0
{38,46,12,55,0,5,23,34,29,8,9,53,35,57,64,13,42,68,24,63,18,22,40,17,27,11,58,44,37,20,36,28,48,39,51,67,61,41,7,49,2,54,6,14,60,16,43,4,62,56,26,21,65,15,47,25,59,3,52,33,10,1,32,30,19,31,50,45,66}, // permutation 1
{15,25,14,26,20,13,17,61,27,64,51,18,43,30,55,5,1,48,46,9,67,58,35,45,53,47,11,39,12,65,63,3,68,33,42,8,16,50,44,0,36,4,37,49,40,6,34,32,60,41,66,59,62,57,29,2,31,54,24,28,19,38,10,7,56,22,21,23,52}, // permutation 2
{26,18,1,6,4,23,35,57,41,13,21,31,47,17,20,58,48,12,49,14,68,7,56,5,43,38,54,19,42,59,15,46,37,3,28,2,67,52,51,27,33,44,64,40,0,65,24,22,55,8,53,34,39,11,45,62,36,50,16,61,9,10,32,25,29,60,30,63,66}, // permutation 3
{51,27,19,60,10,40,11,3,28,13,44,37,57,1,55,25,30,63,33,54,48,8,16,4,62,50,31,5,36,42,35,17,23,6,0,52,34,46,18,66,65,7,68,20,22,2,15,49,53,67,56,32,9,29,39,38,61,64,43,21,59,14,24,26,41,45,47,12,58}, // permutation 4
{46,11,28,66,27,14,43,50,24,52,37,23,34,62,48,67,4,20,47,61,60,56,40,57,32,8,30,9,35,49,0,63,53,36,25,38,3,33,7,12,58,31,45,18,17,13,29,59,5,54,64,15,41,2,19,68,26,22,65,42,10,1,16,21,55,39,51,6,44}, // permutation 5
{52,27,22,28,21,7,40,42,10,61,68,15,50,46,43,41,20,4,26,25,6,24,67,29,30,23,58,3,16,13,34,65,11,59,45,63,66,64,47,0,32,48,14,57,62,8,60,12,56,5,9,51,18,44,49,31,39,36,37,55,19,35,2,38,33,54,1,17,53}, // permutation 6
{60,30,0,21,66,8,13,16,52,55,65,28,64,45,26,18,11,23,25,48,5,3,54,32,29,58,22,33,39,17,2,12,38,43,42,20,31,56,15,37,6,46,19,34,53,9,10,36,27,47,61,51,49,59,67,41,44,35,63,4,57,7,14,24,40,1,68,62,50}, // permutation 7
{61,48,44,42,53,40,1,57,65,9,39,38,63,26,13,4,15,23,50,55,2,59,43,35,16,14,46,51,34,28,60,5,68,12,24,0,64,32,54,17,6,58,7,10,36,8,11,66,29,33,52,25,21,27,37,56,22,18,45,31,30,3,19,62,41,47,20,67,49}, // permutation 8
{26,24,5,17,50,68,40,32,66,11,9,64,42,3,62,13,29,37,16,44,8,51,31,2,25,54,49,56,38,27,10,57,63,19,15,4,18,58,46,48,53,59,35,28,41,0,67,52,14,65,55,1,7,23,34,20,47,43,6,36,21,22,60,30,33,39,45,61,12} // permutation 9
};

// Seed: 1013908252

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   uint8_t  f1;
   volatile int64_t  f2;
   volatile uint8_t  f3;
   int32_t  f4;
   volatile int32_t  f5;
   int32_t  f6;
};

union U1 {
   volatile struct S0  f0;
   int32_t  f1;
   int64_t  f2;
};

struct S2 {
    VECTOR(int16_t, 4) g_3;
    uint64_t g_19;
    uint64_t g_25;
    uint64_t *g_24;
    uint16_t g_57;
    uint64_t *g_66;
    uint64_t **g_65;
    uint16_t g_75;
    struct S0 g_80[1];
    int8_t g_108;
    int32_t g_116;
    VECTOR(int8_t, 16) g_129;
    VECTOR(int8_t, 2) g_130;
    struct S0 g_135;
    volatile VECTOR(int64_t, 4) g_136;
    int32_t *g_143;
    int32_t ** volatile g_142[2][6];
    volatile VECTOR(int32_t, 4) g_146;
    int32_t ** volatile g_151;
    union U1 g_160[2];
    uint64_t *** volatile g_164;
    volatile struct S0 g_181;
    struct S0 g_210;
    volatile VECTOR(uint16_t, 16) g_211;
    VECTOR(int32_t, 16) g_212;
    VECTOR(int32_t, 2) g_216;
    struct S0 g_223;
    volatile union U1 **g_259;
    uint32_t g_280;
    volatile struct S0 g_281;
    VECTOR(uint8_t, 8) g_282;
    volatile uint32_t g_294;
    struct S0 g_298;
    struct S0 g_301;
    struct S0 *g_300;
    struct S0 g_304[3];
    int8_t g_321[6][7][6];
    uint64_t g_431;
    int32_t ** volatile g_433;
    int16_t *g_443;
    uint64_t *g_445[6];
    VECTOR(uint32_t, 2) g_463;
    int32_t **g_464;
    union U1 g_484;
    union U1 *g_483;
    union U1 **g_482;
    volatile VECTOR(int16_t, 2) g_499;
    VECTOR(int16_t, 2) g_501;
    VECTOR(int8_t, 8) g_502;
    VECTOR(int16_t, 16) g_511;
    volatile VECTOR(int16_t, 8) g_512;
    volatile VECTOR(int16_t, 2) g_514;
    volatile VECTOR(int64_t, 2) g_517;
    uint32_t g_525;
    volatile struct S0 g_528;
    struct S0 g_566;
    volatile uint32_t g_586;
    int32_t * volatile g_589;
    VECTOR(uint16_t, 4) g_602;
    uint8_t *g_604[2][6];
    int16_t **g_614;
    int16_t **g_615;
    int16_t **g_619;
    struct S0 **g_629;
    struct S0 ***g_628;
    volatile struct S0 g_669;
    struct S0 g_728[10][4];
    volatile VECTOR(uint32_t, 4) g_762;
    VECTOR(int16_t, 4) g_786;
    VECTOR(int32_t, 4) g_788;
    VECTOR(int32_t, 2) g_789;
    volatile VECTOR(int32_t, 16) g_790;
    volatile VECTOR(uint32_t, 16) g_798;
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
uint8_t  func_1(struct S2 * p_828);
int8_t  func_12(uint64_t  p_13, uint16_t  p_14, int16_t  p_15, int8_t  p_16, struct S2 * p_828);
int16_t  func_20(uint64_t * p_21, int64_t  p_22, uint64_t * p_23, struct S2 * p_828);
uint32_t  func_31(int32_t  p_32, uint64_t * p_33, int64_t  p_34, int64_t  p_35, int32_t  p_36, struct S2 * p_828);
uint32_t  func_41(uint8_t  p_42, int64_t  p_43, struct S2 * p_828);
int32_t * func_47(uint32_t  p_48, uint16_t  p_49, int32_t * p_50, uint16_t  p_51, struct S2 * p_828);
int32_t * func_58(uint8_t  p_59, uint64_t * p_60, uint64_t  p_61, uint64_t ** p_62, struct S2 * p_828);
int32_t  func_71(uint16_t * p_72, int16_t  p_73, struct S2 * p_828);
uint8_t  func_83(uint64_t * p_84, uint64_t * p_85, uint64_t ** p_86, struct S2 * p_828);
uint64_t * func_87(int32_t  p_88, uint16_t * p_89, uint64_t  p_90, uint16_t * p_91, int32_t * p_92, struct S2 * p_828);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_828->g_3 p_828->g_comm_values p_828->g_19 p_828->g_24 p_828->g_464 p_828->g_143 p_828->g_589 p_828->g_304.f4 p_828->g_135.f6 p_828->g_528.f5 p_828->g_602 p_828->g_604 p_828->g_321 p_828->g_298.f1 p_828->g_135.f1 p_828->g_212 p_828->g_57 p_828->g_116 p_828->g_223.f4
 * writes: p_828->g_19 p_828->g_135.f4 p_828->g_304.f4 p_828->g_604 p_828->g_614 p_828->g_615 p_828->g_619 p_828->g_135.f1 p_828->g_57 p_828->g_116 p_828->g_108 p_828->g_502 p_828->g_223.f4
 */
uint8_t  func_1(struct S2 * p_828)
{ /* block id: 4 */
    VECTOR(int32_t, 8) l_2 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x74B1B055L), 0x74B1B055L), 0x74B1B055L, 0L, 0x74B1B055L);
    uint64_t *l_17 = (void*)0;
    uint64_t *l_18 = &p_828->g_19;
    uint64_t *l_28 = &p_828->g_25;
    int8_t *l_820 = &p_828->g_108;
    int8_t *l_821 = (void*)0;
    int8_t *l_822[2][8][7] = {{{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]}},{{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]},{&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0],&p_828->g_321[5][1][4],&p_828->g_321[4][5][0],&p_828->g_321[4][5][0]}}};
    uint8_t l_823 = 0x9FL;
    uint8_t l_824 = 255UL;
    VECTOR(uint64_t, 4) l_825 = (VECTOR(uint64_t, 4))(0xFBB0DA21CAC59769L, (VECTOR(uint64_t, 2))(0xFBB0DA21CAC59769L, 0x715F17E8E874EDBEL), 0x715F17E8E874EDBEL);
    int32_t *l_826 = (void*)0;
    int32_t *l_827 = &p_828->g_223.f4;
    int i, j, k;
    (*l_827) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_2.s4425374006310764)), ((VECTOR(int32_t, 8))(0x591B68DEL, ((VECTOR(int32_t, 2))(0L, 0x4FDA7EF5L)), 2L, (0x2076L <= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_828->g_3.yxyyyxzz)))).s3465763367136117)).s2), (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((safe_div_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s(p_828->g_comm_values[p_828->tid], (safe_div_func_int8_t_s_s((p_828->g_502.s3 = ((*l_820) = func_12(((*l_18) &= 0xADAA237F4A7D2AE8L), (0x17L >= l_2.s5), func_20(p_828->g_24, ((safe_mul_func_uint8_t_u_u((l_2.s1 >= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x7911L, 0x71DBL)))).even), (&p_828->g_25 == &p_828->g_25))) && l_2.s5), l_28, p_828), p_828->g_135.f6, p_828))), FAKE_DIVERGE(p_828->local_1_offset, get_local_id(1), 10))))) > l_823) ^ 247UL) , l_824), 0x781FL)) , l_823), 0UL, 0x6CL, GROUP_DIVERGE(0, 1), l_2.s5, 0UL, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(5UL)), ((VECTOR(uint8_t, 2))(0x4AL)), l_825.x, l_825.x, 0x76L, 255UL)).s06, ((VECTOR(uint8_t, 2))(1UL))))).xyyx, ((VECTOR(uint16_t, 4))(1UL))))))).z, 7)), 0L, 2L)).s3215307610354450))).odd)), ((VECTOR(int32_t, 8))(1L))))).s31, ((VECTOR(int32_t, 2))(0x7C3BF371L))))), ((VECTOR(int32_t, 2))(0x2F152691L)), ((VECTOR(int32_t, 2))(0x31A0B50BL))))).yxyy, ((VECTOR(int32_t, 4))(0x3E251FADL))))))).hi)).lo;
    return (*l_827);
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_528.f5 p_828->g_602 p_828->g_604 p_828->g_321 p_828->g_298.f1 p_828->g_135.f1 p_828->g_212 p_828->g_57 p_828->g_116
 * writes: p_828->g_604 p_828->g_614 p_828->g_615 p_828->g_619 p_828->g_135.f1 p_828->g_57 p_828->g_116
 */
int8_t  func_12(uint64_t  p_13, uint16_t  p_14, int16_t  p_15, int8_t  p_16, struct S2 * p_828)
{ /* block id: 248 */
    VECTOR(uint16_t, 2) l_603 = (VECTOR(uint16_t, 2))(7UL, 0xF62DL);
    uint8_t **l_605 = &p_828->g_604[0][3];
    uint8_t *l_606 = &p_828->g_135.f1;
    int16_t *l_607 = (void*)0;
    int16_t *l_608 = (void*)0;
    int16_t *l_609 = (void*)0;
    int16_t *l_610[8][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_611 = 5L;
    int16_t **l_613 = &l_609;
    int16_t ***l_612[5][7] = {{&l_613,&l_613,(void*)0,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,(void*)0,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,(void*)0,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,(void*)0,&l_613,&l_613,&l_613,(void*)0},{&l_613,&l_613,(void*)0,&l_613,&l_613,&l_613,(void*)0}};
    VECTOR(int32_t, 4) l_616 = (VECTOR(int32_t, 4))(0x03C069D3L, (VECTOR(int32_t, 2))(0x03C069D3L, (-3L)), (-3L));
    int32_t l_620 = 1L;
    int32_t l_621 = 0x0AB8EF55L;
    struct S0 **l_625[6][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
    struct S0 ***l_624 = &l_625[0][0][0];
    struct S0 ***l_630 = &l_625[2][2][0];
    uint8_t l_638[2][2][5] = {{{253UL,0xCCL,253UL,253UL,0xCCL},{253UL,0xCCL,253UL,253UL,0xCCL}},{{253UL,0xCCL,253UL,253UL,0xCCL},{253UL,0xCCL,253UL,253UL,0xCCL}}};
    uint64_t **l_644 = &p_828->g_66;
    VECTOR(uint8_t, 2) l_661 = (VECTOR(uint8_t, 2))(255UL, 1UL);
    union U1 ***l_674[4][2] = {{&p_828->g_482,(void*)0},{&p_828->g_482,(void*)0},{&p_828->g_482,(void*)0},{&p_828->g_482,(void*)0}};
    VECTOR(uint32_t, 8) l_722 = (VECTOR(uint32_t, 8))(0x9FD08859L, (VECTOR(uint32_t, 4))(0x9FD08859L, (VECTOR(uint32_t, 2))(0x9FD08859L, 0x1FC90BD0L), 0x1FC90BD0L), 0x1FC90BD0L, 0x9FD08859L, 0x1FC90BD0L);
    VECTOR(uint32_t, 2) l_796 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967290UL);
    union U1 *l_808 = &p_828->g_160[0];
    uint8_t l_817[4][4][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
    int i, j, k;
    l_621 ^= (safe_lshift_func_uint8_t_u_s(((((*l_606) &= (safe_lshift_func_int8_t_s_s((+((safe_sub_func_int32_t_s_s((p_828->g_528.f5 == (safe_div_func_int32_t_s_s((((safe_add_func_uint32_t_u_u((((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(p_828->g_602.zx)), ((VECTOR(uint16_t, 4))(l_603.xxyy)).lo))).hi & (((*l_605) = p_828->g_604[0][0]) == l_606)), (((((((p_15 = (l_611 &= 1L)) , ((p_828->g_615 = (p_828->g_614 = &l_610[1][2][2])) == (void*)0)) & ((VECTOR(int32_t, 2))(l_616.yy)).even) | (safe_lshift_func_int8_t_s_s(((void*)0 == &p_828->g_525), 0))) & ((p_828->g_619 = &p_828->g_443) != &p_828->g_443)) > p_828->g_321[1][1][0]) >= p_16))) , p_828->g_298.f1) & p_16), l_616.y))), 4294967295UL)) ^ 0xB5EAL)), l_620))) && p_828->g_212.sd) && l_616.x), l_616.w));
    for (p_828->g_57 = 0; (p_828->g_57 > 34); p_828->g_57 = safe_add_func_int8_t_s_s(p_828->g_57, 7))
    { /* block id: 259 */
        struct S0 ****l_626 = (void*)0;
        struct S0 ***l_627 = (void*)0;
        int32_t l_633 = 1L;
        int32_t *l_647 = (void*)0;
        union U1 ***l_676 = &p_828->g_482;
        uint8_t *l_779 = &p_828->g_304[2].f1;
        VECTOR(uint16_t, 16) l_799 = (VECTOR(uint16_t, 16))(0x439AL, (VECTOR(uint16_t, 4))(0x439AL, (VECTOR(uint16_t, 2))(0x439AL, 0xA428L), 0xA428L), 0xA428L, 0x439AL, 0xA428L, (VECTOR(uint16_t, 2))(0x439AL, 0xA428L), (VECTOR(uint16_t, 2))(0x439AL, 0xA428L), 0x439AL, 0xA428L, 0x439AL, 0xA428L);
        VECTOR(uint16_t, 2) l_800 = (VECTOR(uint16_t, 2))(0x2F4FL, 4UL);
        int i;
        (1 + 1);
    }
    for (p_828->g_116 = (-5); (p_828->g_116 > (-25)); p_828->g_116 = safe_sub_func_uint64_t_u_u(p_828->g_116, 5))
    { /* block id: 357 */
        int32_t l_813 = 0x675AE4C6L;
        int32_t *l_814 = &p_828->g_304[2].f4;
        int32_t *l_815[6][1][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_816 = (-1L);
        int i, j, k;
        l_813 &= 0L;
        l_817[3][1][1]++;
    }
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_464 p_828->g_143 p_828->g_589 p_828->g_304.f4
 * writes: p_828->g_135.f4 p_828->g_304.f4
 */
int16_t  func_20(uint64_t * p_21, int64_t  p_22, uint64_t * p_23, struct S2 * p_828)
{ /* block id: 6 */
    int8_t l_44 = 1L;
    int16_t *l_441[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_567 = 1L;
    int32_t l_572 = 1L;
    int32_t l_573 = 0x3BB603CEL;
    int32_t l_574 = (-5L);
    int32_t l_575 = (-7L);
    int32_t l_576 = (-1L);
    int32_t l_577 = 0x54B001DAL;
    int32_t l_578 = 0x28024DADL;
    int32_t l_579 = 0x6EBACF5AL;
    int32_t l_580 = 0x7750206CL;
    int32_t l_581 = 0L;
    int32_t l_582 = 0L;
    int32_t l_583 = 0x55165785L;
    int32_t l_584 = 1L;
    int32_t l_585 = 0x6D1D67D3L;
    int i;
    for (p_22 = (-22); (p_22 != (-30)); p_22 = safe_sub_func_uint16_t_u_u(p_22, 9))
    { /* block id: 9 */
        int16_t **l_442 = &l_441[0];
        int16_t **l_444[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_446 = 0L;
        int32_t *l_564 = (void*)0;
        int32_t *l_565 = &p_828->g_304[2].f6;
        int32_t *l_568 = &p_828->g_210.f4;
        int32_t *l_569 = &p_828->g_116;
        int32_t *l_570 = &p_828->g_135.f4;
        int32_t *l_571[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_571[i][j] = &p_828->g_566.f4;
        }
        (1 + 1);
    }
    (*p_828->g_589) &= ((**p_828->g_464) = p_22);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_143 p_828->g_151 p_828->g_135.f4 p_828->g_135.f0 p_828->g_300 p_828->g_301 p_828->g_223.f0 p_828->g_482 p_828->g_499 p_828->g_501 p_828->g_502 p_828->g_463 p_828->g_3 p_828->g_210.f1 p_828->g_comm_values p_828->g_80 p_828->g_116 p_828->g_129 p_828->g_164 p_828->g_181 p_828->g_135.f6 p_828->g_210 p_828->g_259 p_828->g_108 p_828->g_75 p_828->g_281 p_828->g_216 p_828->g_282 p_828->g_160.f0.f6 p_828->g_135.f1 p_828->g_280 p_828->l_comm_values p_828->g_130 p_828->g_294 p_828->g_298.f6 p_828->g_223 p_828->g_298 p_828->g_212 p_828->g_464 p_828->g_528 p_828->g_525 p_828->g_483 p_828->g_304.f4 p_828->g_431
 * writes: p_828->g_135.f4 p_828->g_482 p_828->g_463 p_828->g_301.f0 p_828->g_135.f6 p_828->g_298.f1 p_828->g_431 p_828->g_80.f4 p_828->g_116 p_828->g_75 p_828->g_108 p_828->g_80 p_828->g_143 p_828->g_135.f1 p_828->g_25 p_828->g_65 p_828->g_181 p_828->g_210.f4 p_828->g_3 p_828->g_223 p_828->g_280 p_828->g_298 p_828->g_212 p_828->g_301.f4 p_828->g_301 p_828->g_483 p_828->g_304.f4
 */
uint32_t  func_31(int32_t  p_32, uint64_t * p_33, int64_t  p_34, int64_t  p_35, int32_t  p_36, struct S2 * p_828)
{ /* block id: 201 */
    VECTOR(int32_t, 2) l_449 = (VECTOR(int32_t, 2))(0x4723A77AL, 0x19903DA2L);
    int64_t l_524 = (-1L);
    struct S0 *l_526 = (void*)0;
    union U1 *l_544 = &p_828->g_484;
    VECTOR(int32_t, 8) l_547 = (VECTOR(int32_t, 8))(0x0B54DFE2L, (VECTOR(int32_t, 4))(0x0B54DFE2L, (VECTOR(int32_t, 2))(0x0B54DFE2L, 0x0C340FE1L), 0x0C340FE1L), 0x0C340FE1L, 0x0B54DFE2L, 0x0C340FE1L);
    int16_t *l_553 = (void*)0;
    uint16_t *l_556 = (void*)0;
    uint16_t *l_557[3];
    VECTOR(uint16_t, 4) l_562 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x2D09L), 0x2D09L);
    uint32_t l_563 = 0x3149CD9EL;
    int i;
    for (i = 0; i < 3; i++)
        l_557[i] = &p_828->g_57;
    (*p_828->g_143) = 2L;
    for (p_32 = 1; (p_32 < 12); p_32 = safe_add_func_int64_t_s_s(p_32, 4))
    { /* block id: 205 */
        VECTOR(int16_t, 4) l_460 = (VECTOR(int16_t, 4))(0x3ACBL, (VECTOR(int16_t, 2))(0x3ACBL, 0x40ACL), 0x40ACL);
        union U1 **l_486 = &p_828->g_483;
        VECTOR(int16_t, 2) l_513 = (VECTOR(int16_t, 2))(0x6C17L, (-3L));
        VECTOR(int16_t, 4) l_516 = (VECTOR(int16_t, 4))(0x3059L, (VECTOR(int16_t, 2))(0x3059L, 0x6061L), 0x6061L);
        struct S0 **l_543 = &l_526;
        struct S0 ***l_542 = &l_543;
        struct S0 **l_546 = &p_828->g_300;
        struct S0 ***l_545 = &l_546;
        int32_t *l_548 = &p_828->g_304[2].f4;
        int i;
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_449.yxxxxxxy)).s44, (int32_t)(0x0B4DD5587C629BE1L || 0x2FDBD955F57B4BA0L)))))).even)
        { /* block id: 206 */
            int32_t *l_450 = &p_828->g_301.f4;
            int32_t **l_451 = (void*)0;
            int16_t **l_475 = &p_828->g_443;
            VECTOR(int16_t, 2) l_500 = (VECTOR(int16_t, 2))(1L, 4L);
            int32_t *l_527 = &p_828->g_301.f4;
            int i;
            l_450 = l_450;
            if ((**p_828->g_151))
            { /* block id: 208 */
                uint64_t ***l_469 = &p_828->g_65;
                int32_t l_476 = (-1L);
                (*p_828->g_143) &= (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((!((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_460.wwwx)).even)), ((VECTOR(int16_t, 2))(0x3BF2L, (-1L))), (safe_div_func_int8_t_s_s(((&p_828->g_143 != (((VECTOR(uint32_t, 16))(p_828->g_463.xyyxxyxyxyyxyyxy)).s5 , (p_828->g_464 = &p_828->g_143))) || ((*p_828->g_66) , 0L)), (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((GROUP_DIVERGE(2, 1) || (((void*)0 == l_469) , (l_460.w & (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u(p_828->g_304[2].f4)) ^ (safe_div_func_int64_t_s_s(((void*)0 == l_475), p_828->g_301.f4))), 1))))), l_476)), p_828->g_463.x)))), l_449.y, 0L, (-10L))), ((VECTOR(int16_t, 8))(0x4861L)), ((VECTOR(int16_t, 8))(5L))))).lo, ((VECTOR(int16_t, 4))(4L))))).y, l_476)) != 1UL), p_828->g_135.f0)) , p_36)), l_476)), 0x60CE8494FA5F5133L));
            }
            else
            { /* block id: 211 */
                int16_t l_481 = 5L;
                union U1 ***l_485 = &p_828->g_482;
                union U1 ***l_487 = &l_486;
                uint32_t *l_503[2];
                VECTOR(int16_t, 2) l_510 = (VECTOR(int16_t, 2))(1L, 1L);
                VECTOR(int16_t, 2) l_515 = (VECTOR(int16_t, 2))((-1L), 0L);
                int16_t *l_520 = (void*)0;
                int16_t *l_521 = (void*)0;
                uint16_t *l_522 = (void*)0;
                uint16_t *l_523[4] = {&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75};
                int i;
                for (i = 0; i < 2; i++)
                    l_503[i] = (void*)0;
                atomic_or(&p_828->g_atomic_reduction[get_linear_group_id()], ((+(safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(0x00C3L, ((*p_828->g_300) , l_481))) <= p_34), ((VECTOR(int16_t, 4))(((p_828->g_223.f0 , ((*l_485) = p_828->g_482)) == ((*l_487) = l_486)), 0x336CL, 0x17AEL, 0x3868L)).w))) , (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u((p_828->g_463.x |= (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(p_828->g_499.xxxxyxxy)), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))((-1L), (-1L), ((VECTOR(int16_t, 4))(l_500.xxxx)), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 0x5DE6L))))))))).yxyxxyxyyyxyxyyx)))))).s7b, ((VECTOR(int16_t, 16))(p_828->g_501.yxxyyyyyxyxyxyyx)).sd5, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x32L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(p_828->g_502.s6126655725074515)).sb1, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((!p_34), p_35, 0x51L, ((VECTOR(int8_t, 4))(0x76L)), 0x2AL)))).s57, ((VECTOR(int8_t, 2))(0x3BL))))), 0x67L)).yxzxwyxz)).s4767206060202624, ((VECTOR(int8_t, 16))(0x66L))))), ((VECTOR(int8_t, 16))((-4L)))))).s6d))), ((VECTOR(uint8_t, 2))(0UL))))).xxyxxyxxxxxyyxyy, ((VECTOR(int16_t, 16))(5L))))).sc2))).yyxy, ((VECTOR(int16_t, 4))(4L))))), ((VECTOR(int16_t, 4))(0x7A30L)), (-1L), 0x0560L)).s251a, ((VECTOR(int16_t, 4))((-5L)))))).lo, ((VECTOR(uint16_t, 2))(0x365FL)), ((VECTOR(uint16_t, 2))(0x50D8L))))), 2UL, 0x7C0AL)), ((VECTOR(uint16_t, 4))(0UL))))).yzyxxzxy))).s3, (*p_828->g_143)))))), 18446744073709551613UL)), p_36)) | l_460.x), 0)), p_828->g_301.f4)) > 0xFCBDBA5DL) && GROUP_DIVERGE(1, 1))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_828->v_collective += p_828->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                (*p_828->g_464) = func_47((safe_mod_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((&p_828->g_321[1][1][0] != (((~((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(l_510.xyxyxxyy)).s1451661346236306, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(p_828->g_511.se5)).yxxyxyyx, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(p_828->g_512.s66415401)).s51))).xyxx, ((VECTOR(int16_t, 8))(l_513.xyxxyyxx)).odd))).zywzwzxz, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_828->g_514.xyxxxxxy)).s4454635017012627)).lo))).s07)).xxxxyyxx, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))((-2L), 1L)), ((VECTOR(int16_t, 4))(l_515.xyxx)).odd))).yxxxyxyy))).s5366727633026317))).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(l_516.zyzwxxyxwzzwyxxz)).lo, ((VECTOR(int16_t, 8))(l_460.y, 0x6719L, (((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(p_828->g_517.yxyyyyxxyyyyxxxx)), ((VECTOR(int64_t, 8))((safe_rshift_func_uint16_t_u_u(((p_828->g_75 &= (((p_828->g_501.y |= l_515.x) , p_35) , 65535UL)) > (p_36 & ((0UL < (*l_450)) < p_828->g_223.f5))), l_524)), ((VECTOR(int64_t, 4))(0x5727E86DC89E04C0L)), p_828->g_136.y, 0x435D724F210B20CAL, 0x00E1066D13027965L)).s0451762675764564))).even, (int64_t)p_828->g_525, (int64_t)p_828->g_181.f5))).s1 & p_34), p_36, p_828->g_484.f0.f3, p_828->g_301.f1, 0x3C1CL, 0x096EL)))))))))).s1) == p_828->g_3.z) , (void*)0)) || l_515.y) , l_510.x), 0x39L)), p_828->g_210.f1)) , l_526) == (void*)0) | p_35), p_828->g_135.f0)), l_481, l_527, p_34, p_828);
            }
            (*p_828->g_300) = p_828->g_528;
        }
        else
        { /* block id: 221 */
            uint8_t l_529 = 1UL;
            l_529--;
            return l_529;
        }
        (*p_828->g_143) = (safe_add_func_uint64_t_u_u(((0x60L <= ((safe_lshift_func_int16_t_s_s((0x57633749L >= ((safe_sub_func_uint32_t_u_u(((l_524 || (&p_32 == (FAKE_DIVERGE(p_828->group_2_offset, get_group_id(2), 10) , (void*)0))) | p_828->g_282.s3), l_449.y)) , 1L)), ((safe_rshift_func_int8_t_s_u(p_828->g_80[0].f3, p_828->g_129.se)) || p_35))) & 1L)) <= p_828->l_comm_values[(safe_mod_func_uint32_t_u_u(p_828->tid, 69))]), p_828->g_525));
        (*l_548) ^= ((**p_828->g_464) |= ((p_35 && ((-8L) != ((((*l_542) = &p_828->g_300) != ((*l_545) = ((((*p_828->g_482) = (*p_828->g_482)) != l_544) , &p_828->g_300))) <= 0x17E2B818L))) < ((VECTOR(int32_t, 16))(l_547.s0246670602376520)).s3));
        for (p_828->g_431 = (-29); (p_828->g_431 >= 40); p_828->g_431 = safe_add_func_int32_t_s_s(p_828->g_431, 4))
        { /* block id: 233 */
            return p_828->g_130.y;
        }
    }
    (*p_828->g_464) = func_47(p_32, (safe_mul_func_int16_t_s_s(((-2L) | ((void*)0 == l_553)), (safe_add_func_uint16_t_u_u((p_828->g_75++), p_35)))), ((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_562.xxyyyyyyxxzxwyxz)).odd)).hi)).y, (p_828->g_304[2].f4 ^ l_563))) , &p_32), p_828->g_298.f4, p_828);
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_3 p_828->g_143 p_828->g_135.f4
 * writes: p_828->g_135.f4
 */
uint32_t  func_41(uint8_t  p_42, int64_t  p_43, struct S2 * p_828)
{ /* block id: 11 */
    int32_t l_63 = (-8L);
    uint64_t *l_64 = &p_828->g_25;
    int32_t *l_434 = &p_828->g_298.f4;
    int32_t *l_435 = (void*)0;
    int32_t *l_436 = &p_828->g_210.f4;
    int32_t *l_437[10] = {&p_828->g_298.f4,&p_828->g_223.f4,&p_828->g_116,&p_828->g_223.f4,&p_828->g_298.f4,&p_828->g_298.f4,&p_828->g_223.f4,&p_828->g_116,&p_828->g_223.f4,&p_828->g_298.f4};
    uint32_t l_438[7][3][3] = {{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}},{{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L},{7UL,0x96F2C16AL,0x5A9717C4L}}};
    int i, j, k;
    for (p_43 = 0; (p_43 == (-10)); p_43 = safe_sub_func_int16_t_s_s(p_43, 3))
    { /* block id: 14 */
        uint64_t *l_52 = (void*)0;
        uint64_t **l_53 = (void*)0;
        uint64_t **l_54 = &p_828->g_24;
        VECTOR(uint8_t, 2) l_55 = (VECTOR(uint8_t, 2))(255UL, 0xD6L);
        uint16_t *l_56 = &p_828->g_57;
        int i;
        (1 + 1);
    }
    (*p_828->g_143) |= (p_828->g_3.w & (p_43 &= l_63));
    l_438[2][0][0]++;
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_301.f0 p_828->g_135.f6 p_828->g_comm_values p_828->g_80 p_828->g_116 p_828->g_3 p_828->g_129 p_828->g_151 p_828->g_143 p_828->g_135.f4 p_828->g_164 p_828->g_181 p_828->g_210 p_828->g_135.f0 p_828->g_259 p_828->g_108 p_828->g_75 p_828->g_160.f0.f6 p_828->g_135.f1 p_828->g_280 p_828->l_comm_values p_828->g_130 p_828->g_281 p_828->g_216 p_828->g_282 p_828->g_294 p_828->g_300 p_828->g_298.f6 p_828->g_223 p_828->g_298 p_828->g_212 p_828->g_301.f4
 * writes: p_828->g_301.f0 p_828->g_135.f6 p_828->g_298.f1 p_828->g_431 p_828->g_80.f4 p_828->g_116 p_828->g_75 p_828->g_108 p_828->g_80 p_828->g_143 p_828->g_135.f1 p_828->g_25 p_828->g_65 p_828->g_135.f4 p_828->g_181 p_828->g_210.f4 p_828->g_3 p_828->g_280 p_828->g_223 p_828->g_298 p_828->g_212 p_828->g_301.f4
 */
int32_t * func_47(uint32_t  p_48, uint16_t  p_49, int32_t * p_50, uint16_t  p_51, struct S2 * p_828)
{ /* block id: 164 */
    int64_t l_403 = 0x5CD2F7F6E290F47EL;
    int32_t l_404 = 0x00B4B6EDL;
    int32_t l_405 = 1L;
    int32_t l_406 = 0x0F3F6716L;
    int8_t l_407[5] = {0x49L,0x49L,0x49L,0x49L,0x49L};
    uint32_t l_408 = 0x11295CDDL;
    int32_t *l_432 = (void*)0;
    int i;
    for (p_828->g_301.f0 = 0; (p_828->g_301.f0 < 27); ++p_828->g_301.f0)
    { /* block id: 167 */
        int32_t *l_389 = (void*)0;
        int32_t *l_390 = &p_828->g_135.f4;
        int32_t *l_391 = &p_828->g_301.f4;
        int32_t *l_392 = &p_828->g_223.f4;
        int32_t *l_393 = &p_828->g_301.f4;
        int32_t *l_394 = (void*)0;
        int32_t *l_395 = (void*)0;
        int32_t *l_396 = &p_828->g_223.f4;
        int32_t *l_397 = &p_828->g_80[0].f4;
        int32_t *l_398 = &p_828->g_301.f4;
        int32_t *l_399 = &p_828->g_223.f4;
        int32_t *l_400 = (void*)0;
        int32_t *l_401 = (void*)0;
        int32_t *l_402[7] = {(void*)0,&p_828->g_135.f4,(void*)0,(void*)0,&p_828->g_135.f4,(void*)0,(void*)0};
        int i;
        l_408--;
        if ((atomic_inc(&p_828->l_atomic_input[5]) == 5))
        { /* block id: 170 */
            uint16_t l_411 = 65528UL;
            uint8_t l_412 = 250UL;
            uint64_t l_413 = 8UL;
            int16_t l_414 = 0x6C08L;
            uint32_t l_415 = 1UL;
            int8_t l_416 = 1L;
            uint8_t l_417 = 9UL;
            uint32_t l_418 = 0x672FDFCCL;
            VECTOR(int32_t, 4) l_419 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x08E850C2L), 0x08E850C2L);
            uint16_t l_420 = 0x1DB3L;
            uint32_t l_421 = 0UL;
            int i;
            l_421 ^= (l_420 = ((VECTOR(int32_t, 16))(0x668AD2A7L, l_411, (l_414 = (l_413 = l_412)), 0x2D276EDCL, 0x7756F43EL, l_415, ((l_417 = l_416) , (l_418 &= 0x5F54145BL)), ((VECTOR(int32_t, 2))((-1L), 0x04D9328AL)), ((VECTOR(int32_t, 4))(l_419.xwwz)), ((VECTOR(int32_t, 2))(5L, 1L)), 0L)).s2);
            unsigned int result = 0;
            result += l_411;
            result += l_412;
            result += l_413;
            result += l_414;
            result += l_415;
            result += l_416;
            result += l_417;
            result += l_418;
            result += l_419.w;
            result += l_419.z;
            result += l_419.y;
            result += l_419.x;
            result += l_420;
            result += l_421;
            atomic_add(&p_828->l_special_values[5], result);
        }
        else
        { /* block id: 177 */
            (1 + 1);
        }
        for (p_828->g_135.f6 = 0; (p_828->g_135.f6 == 29); p_828->g_135.f6++)
        { /* block id: 182 */
            uint32_t l_426 = 0UL;
            uint8_t *l_427[6][10] = {{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1},{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1},{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1},{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1},{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1},{&p_828->g_298.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_210.f1,(void*)0,&p_828->g_298.f1,&p_828->g_304[2].f1,&p_828->g_304[2].f1,&p_828->g_298.f1}};
            uint64_t *l_428 = &p_828->g_25;
            uint64_t *l_429 = (void*)0;
            uint64_t *l_430 = &p_828->g_431;
            int i, j;
            l_432 = func_58((p_828->g_298.f1 = ((safe_div_func_int16_t_s_s(0x7A41L, l_426)) <= FAKE_DIVERGE(p_828->group_0_offset, get_group_id(0), 10))), l_428, ((*l_430) = p_49), &l_428, p_828);
            return (*p_828->g_151);
        }
        (*p_50) = (*p_50);
    }
    return (*p_828->g_151);
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_comm_values p_828->g_80 p_828->g_116 p_828->g_3 p_828->g_129 p_828->g_151 p_828->g_143 p_828->g_135.f4 p_828->g_164 p_828->g_181 p_828->g_135.f6 p_828->g_210 p_828->g_135.f0 p_828->g_259 p_828->g_108 p_828->g_75 p_828->g_281 p_828->g_216 p_828->g_282 p_828->g_160.f0.f6 p_828->g_135.f1 p_828->g_280 p_828->l_comm_values p_828->g_130 p_828->g_294 p_828->g_300 p_828->g_298.f6 p_828->g_223 p_828->g_298 p_828->g_212
 * writes: p_828->g_80.f4 p_828->g_116 p_828->g_75 p_828->g_108 p_828->g_80 p_828->g_143 p_828->g_135.f1 p_828->g_25 p_828->g_65 p_828->g_135.f4 p_828->g_181 p_828->g_210.f4 p_828->g_3 p_828->g_223 p_828->g_280 p_828->g_298 p_828->g_212
 */
int32_t * func_58(uint8_t  p_59, uint64_t * p_60, uint64_t  p_61, uint64_t ** p_62, struct S2 * p_828)
{ /* block id: 17 */
    uint32_t l_67 = 0x342871EBL;
    int16_t l_68 = 1L;
    int32_t l_381 = (-1L);
    int32_t l_382 = 1L;
    int32_t l_383[8][5] = {{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL},{(-6L),9L,(-3L),(-1L),0x36AD07AAL}};
    uint32_t l_384 = 0UL;
    int i, j;
    l_68 = (l_67 != (&p_60 == &p_60));
    for (p_61 = 0; (p_61 > 40); p_61 = safe_add_func_uint64_t_u_u(p_61, 4))
    { /* block id: 21 */
        uint16_t *l_74[2][9][6] = {{{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0}},{{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0},{(void*)0,&p_828->g_75,&p_828->g_75,&p_828->g_75,&p_828->g_75,(void*)0}}};
        int32_t *l_378 = (void*)0;
        int32_t *l_379 = (void*)0;
        int32_t *l_380[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        p_828->g_212.s0 |= (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x3793L, 0x6773L)).yxxyxyyx)).hi)).z , func_71(l_74[1][8][1], p_828->g_comm_values[p_828->tid], p_828));
        l_384++;
    }
    return (*p_828->g_151);
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_80 p_828->g_comm_values p_828->g_116 p_828->g_3 p_828->g_129 p_828->g_151 p_828->g_143 p_828->g_135.f4 p_828->g_164 p_828->g_181 p_828->g_135.f6 p_828->g_210 p_828->g_135.f0 p_828->g_259 p_828->g_108 p_828->g_75 p_828->g_160.f0.f6 p_828->g_135.f1 p_828->g_280 p_828->l_comm_values p_828->g_130 p_828->g_281 p_828->g_216 p_828->g_282 p_828->g_294 p_828->g_300 p_828->g_298.f6 p_828->g_223 p_828->g_298
 * writes: p_828->g_80.f4 p_828->g_116 p_828->g_75 p_828->g_108 p_828->g_80 p_828->g_143 p_828->g_135.f1 p_828->g_25 p_828->g_65 p_828->g_135.f4 p_828->g_181 p_828->g_210.f4 p_828->g_3 p_828->g_280 p_828->g_223 p_828->g_298
 */
int32_t  func_71(uint16_t * p_72, int16_t  p_73, struct S2 * p_828)
{ /* block id: 22 */
    int8_t l_106 = 0x24L;
    int32_t l_109 = 4L;
    int32_t *l_111[5] = {&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_80[0].f4};
    struct S0 *l_222 = &p_828->g_223;
    VECTOR(int64_t, 16) l_247 = (VECTOR(int64_t, 16))(0x0576873F0A9B6922L, (VECTOR(int64_t, 4))(0x0576873F0A9B6922L, (VECTOR(int64_t, 2))(0x0576873F0A9B6922L, 5L), 5L), 5L, 0x0576873F0A9B6922L, 5L, (VECTOR(int64_t, 2))(0x0576873F0A9B6922L, 5L), (VECTOR(int64_t, 2))(0x0576873F0A9B6922L, 5L), 0x0576873F0A9B6922L, 5L, 0x0576873F0A9B6922L, 5L);
    VECTOR(uint32_t, 16) l_307 = (VECTOR(uint32_t, 16))(0xB86C484FL, (VECTOR(uint32_t, 4))(0xB86C484FL, (VECTOR(uint32_t, 2))(0xB86C484FL, 0UL), 0UL), 0UL, 0xB86C484FL, 0UL, (VECTOR(uint32_t, 2))(0xB86C484FL, 0UL), (VECTOR(uint32_t, 2))(0xB86C484FL, 0UL), 0xB86C484FL, 0UL, 0xB86C484FL, 0UL);
    VECTOR(int8_t, 16) l_330 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x7DL), 0x7DL), 0x7DL, (-7L), 0x7DL, (VECTOR(int8_t, 2))((-7L), 0x7DL), (VECTOR(int8_t, 2))((-7L), 0x7DL), (-7L), 0x7DL, (-7L), 0x7DL);
    int i;
    for (p_73 = (-4); (p_73 != 26); p_73 = safe_add_func_int32_t_s_s(p_73, 4))
    { /* block id: 25 */
        int64_t l_105 = 0x5A6083B6D91310E3L;
        int8_t *l_107 = &p_828->g_108;
        uint16_t *l_110[4];
        uint64_t **l_113[3];
        int32_t l_198[1];
        int32_t **l_215[10][9][2] = {{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}},{{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]},{(void*)0,&l_111[4]}}};
        struct S0 *l_297 = &p_828->g_298;
        struct S0 *l_303 = &p_828->g_304[2];
        uint64_t **l_308 = &p_828->g_66;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_110[i] = &p_828->g_75;
        for (i = 0; i < 3; i++)
            l_113[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_198[i] = 1L;
        if ((safe_div_func_uint16_t_u_u(((p_828->g_80[0] , (safe_mod_func_int32_t_s_s((((VECTOR(uint16_t, 2))(0x7203L, 65535UL)).hi & (func_83(func_87(((!(FAKE_DIVERGE(p_828->local_0_offset, get_local_id(0), 10) <= (((VECTOR(uint32_t, 16))((((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(p_73, 2)) , (&p_828->g_66 == (p_828->g_65 = &p_828->g_66))), ((safe_mod_func_int16_t_s_s(p_828->g_80[0].f1, (l_105 |= (safe_add_func_int8_t_s_s((~6L), (safe_mul_func_uint8_t_u_u(255UL, p_828->g_80[0].f4))))))) , ((*l_107) |= ((l_106 && l_106) , 0x50L))))) != 1L), 0x7AD1L)) == l_109) | p_828->g_25), l_105, ((VECTOR(uint32_t, 8))(4294967295UL)), 0xE90A8693L, ((VECTOR(uint32_t, 4))(0x8704077EL)), 0x98D32190L)).se || 0xA31468BDL))) != p_828->g_comm_values[p_828->tid]), p_72, p_73, l_110[3], l_111[4], p_828), &p_828->g_25, l_113[2], p_828) ^ l_198[0])), l_198[0]))) == p_73), p_73)))
        { /* block id: 93 */
            VECTOR(uint8_t, 4) l_199 = (VECTOR(uint8_t, 4))(0x17L, (VECTOR(uint8_t, 2))(0x17L, 248UL), 248UL);
            VECTOR(int32_t, 4) l_213 = (VECTOR(int32_t, 4))(0x55EE9946L, (VECTOR(int32_t, 2))(0x55EE9946L, (-1L)), (-1L));
            int32_t **l_214 = &p_828->g_143;
            uint64_t ***l_221[4];
            VECTOR(int8_t, 8) l_230 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1CL), 0x1CL), 0x1CL, 1L, 0x1CL);
            VECTOR(int64_t, 8) l_309 = (VECTOR(int64_t, 8))(0x4B4F9CFB12D965E7L, (VECTOR(int64_t, 4))(0x4B4F9CFB12D965E7L, (VECTOR(int64_t, 2))(0x4B4F9CFB12D965E7L, 0x5C3BD3D90A31A084L), 0x5C3BD3D90A31A084L), 0x5C3BD3D90A31A084L, 0x4B4F9CFB12D965E7L, 0x5C3BD3D90A31A084L);
            uint16_t l_333 = 0x0528L;
            int32_t l_347 = (-1L);
            int i;
            for (i = 0; i < 4; i++)
                l_221[i] = &l_113[2];
            p_828->g_116 |= ((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_199.yzwxyyywxwywwxwz)).hi)).s6 && (safe_sub_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((((-1L) < (GROUP_DIVERGE(2, 1) > (safe_mod_func_int64_t_s_s((p_828->g_210 , ((((VECTOR(uint16_t, 8))(p_828->g_211.sd9b12feb)).s1 | l_198[0]) == ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_828->g_212.s1a42)).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_213.wyzx)).odd))))).yyyy, ((VECTOR(int32_t, 8))(((((VECTOR(int32_t, 2))(8L, (-1L))).even , 5UL) || ((*l_107) ^= (l_214 == l_215[0][4][1]))), ((VECTOR(int32_t, 2))(p_828->g_216.xy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-5L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(0x2F96AB8CL, (-5L))).xyxx, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((**l_214) & (safe_sub_func_int8_t_s_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0L, 0x596F55D181BC6CD9L)).xxyxyyyxxyyyyxxy)).s9 == (p_73 > (l_221[2] == &p_828->g_65))), (**l_214)))), ((VECTOR(int32_t, 2))(0x5FB90B17L)), 1L)).xxxxxxwwwxyxzzxz)).hi, ((VECTOR(int32_t, 8))(0x7E115835L)), ((VECTOR(int32_t, 8))(0x12B72CE6L))))).lo))).zzwzzzyy, ((VECTOR(int32_t, 8))(0x2A8A7F0CL))))).s40, (int32_t)(**l_214)))), (*p_828->g_143), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 8))((-5L))))).sae)), (**l_214), (-7L), 0x16855F1FL)).lo))).z)), p_828->g_210.f6)))) , &p_828->g_80[0]) != l_222), (**l_214))), p_73)), (*p_828->g_143))) == 1UL) > p_828->g_80[0].f4) || FAKE_DIVERGE(p_828->group_0_offset, get_group_id(0), 10)), p_73))) , 0x65B47ADFL) , p_73) != 0xB7L);
            for (p_828->g_210.f4 = 0; (p_828->g_210.f4 >= (-19)); p_828->g_210.f4--)
            { /* block id: 98 */
                uint32_t l_233 = 4294967295UL;
                VECTOR(int64_t, 4) l_238 = (VECTOR(int64_t, 4))(0x6D4CA97DAE8E1FBBL, (VECTOR(int64_t, 2))(0x6D4CA97DAE8E1FBBL, 0x31B6190532696713L), 0x31B6190532696713L);
                int16_t *l_252 = (void*)0;
                int16_t *l_253 = (void*)0;
                int16_t *l_254 = (void*)0;
                int16_t *l_255 = (void*)0;
                int16_t *l_256 = (void*)0;
                VECTOR(int64_t, 8) l_260 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x09CB75D7DDBA5227L), 0x09CB75D7DDBA5227L), 0x09CB75D7DDBA5227L, 9L, 0x09CB75D7DDBA5227L);
                int32_t l_272 = (-1L);
                uint32_t *l_283 = (void*)0;
                int32_t l_315 = 0x67BD0364L;
                int32_t l_316 = 4L;
                int32_t l_317 = 1L;
                int32_t l_319 = 1L;
                int32_t l_320 = 0x1186E969L;
                int32_t l_325 = 4L;
                int32_t l_326 = 0x6C549242L;
                int32_t l_328 = 0x1CBD10E8L;
                int32_t l_329 = 0x6C21145FL;
                int i;
                l_213.y = ((*p_828->g_143) = (safe_sub_func_int16_t_s_s((-1L), ((**l_214) || (((((VECTOR(int8_t, 8))(l_230.s42132172)).s5 >= 0x15L) ^ (p_72 != ((p_73 != (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_828->g_comm_values[p_828->tid], ((VECTOR(uint64_t, 4))((p_828->g_210.f3 , ((((l_233 , (safe_add_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((p_828->g_135.f3 >= (**l_214)) == 0x3548L), p_828->g_129.sa)), p_73))) > (-8L)) , p_73) | p_828->g_135.f6)), p_828->g_211.s1, 18446744073709551615UL, 18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x93277F54225877B5L)), 0UL)).s5, 1L))) , &p_828->g_75))) <= 0L)))));
                (*l_214) = (*l_214);
                l_260.s6 &= (((!((((VECTOR(int64_t, 2))(l_238.yx)).lo , (safe_rshift_func_int16_t_s_u(((p_73 || ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_247.s6a)), 0x77D55AAA7F7423C3L, (-1L))).z, (((**l_214) < p_828->g_181.f2) & p_73))) > ((safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(l_238.z, (p_828->g_3.x |= p_828->g_135.f0))), (safe_mul_func_int16_t_s_s(p_73, (((VECTOR(uint16_t, 2))(0x5286L, 9UL)).hi > (((void*)0 != p_828->g_259) < p_828->g_108)))))) | 0x78L)))), (-1L))) != p_73)) != 1L), 14))) ^ l_238.w)) > p_828->g_75) > p_73);
                for (l_106 = (-28); (l_106 >= (-18)); l_106 = safe_add_func_int64_t_s_s(l_106, 5))
                { /* block id: 106 */
                    uint8_t l_265[8][4] = {{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL},{0x8BL,0UL,255UL,0UL}};
                    uint32_t *l_284 = &p_828->g_280;
                    uint64_t **l_289 = &p_828->g_66;
                    struct S0 **l_299 = &l_222;
                    struct S0 **l_302[7][2] = {{&l_297,&p_828->g_300},{&l_297,&p_828->g_300},{&l_297,&p_828->g_300},{&l_297,&p_828->g_300},{&l_297,&p_828->g_300},{&l_297,&p_828->g_300},{&l_297,&p_828->g_300}};
                    int32_t l_310 = 6L;
                    int32_t l_311 = (-6L);
                    int32_t l_313 = 0x0D00478DL;
                    int32_t l_314 = 0x08100EEAL;
                    VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))(0x243773C3L, (VECTOR(int32_t, 4))(0x243773C3L, (VECTOR(int32_t, 2))(0x243773C3L, 0L), 0L), 0L, 0x243773C3L, 0L, (VECTOR(int32_t, 2))(0x243773C3L, 0L), (VECTOR(int32_t, 2))(0x243773C3L, 0L), 0x243773C3L, 0L, 0x243773C3L, 0L);
                    int i, j;
                    if ((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), l_260.s6)))
                    { /* block id: 107 */
                        ++l_265[7][2];
                        if (p_73)
                            continue;
                    }
                    else
                    { /* block id: 110 */
                        uint32_t *l_279 = &p_828->g_280;
                        atomic_or(&p_828->l_atomic_reduction[0], (((((p_828->g_160[0].f0.f6 , p_73) || ((p_73 <= l_265[7][2]) > 254UL)) <= ((safe_mod_func_uint32_t_u_u(p_73, ((safe_add_func_int32_t_s_s((l_272 |= (*p_828->g_143)), ((*l_279) ^= (safe_div_func_uint64_t_u_u((0x24L & ((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((p_73 & 0x40L), 0L)) | FAKE_DIVERGE(p_828->group_1_offset, get_group_id(1), 10)), 7)) < (**l_214))), p_828->g_135.f1))))) & p_828->l_comm_values[(safe_mod_func_uint32_t_u_u(p_828->tid, 69))]))) || p_73)) <= p_828->g_75) | p_828->g_130.x));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_828->v_collective += p_828->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*l_222) = p_828->g_281;
                        (**l_214) |= (((p_828->g_216.y < (((l_283 = ((0x41L && ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_828->g_282.s74)), 0xB1L, 0x52L)).z) , l_283)) == l_284) || (safe_mod_func_int8_t_s_s((GROUP_DIVERGE(1, 1) || (((p_828->g_282.s7 ^ 0xC2L) , &p_828->g_75) != (void*)0)), (safe_sub_func_uint32_t_u_u(p_828->g_129.se, p_73)))))) , 0x359E41F5763B2EF7L) , 0x3E01A304L);
                        return (**p_828->g_151);
                    }
                    if (((0UL || ((l_113[2] = l_289) != (((p_828->g_75 |= (safe_mod_func_uint16_t_u_u(l_260.s4, ((0x73L >= (safe_lshift_func_uint8_t_u_u((p_828->g_210.f6 <= (p_828->g_294 == (safe_add_func_uint16_t_u_u((((*l_299) = l_297) == (l_303 = p_828->g_300)), ((safe_mul_func_int16_t_s_s(p_828->l_comm_values[(safe_mod_func_uint32_t_u_u(p_828->tid, 69))], p_828->g_129.sb)) && p_828->g_298.f6))))), 0))) & l_307.sc)))) < l_238.y) , l_308))) >= 7L))
                    { /* block id: 123 */
                        int32_t l_312 = 3L;
                        int32_t l_322 = 0x2F23841EL;
                        int32_t l_323 = 0x2A3851B1L;
                        int32_t l_324 = 0x79C2AFCCL;
                        int32_t l_327 = 0x4A23CE95L;
                        int32_t l_331 = 0x7D0AADB1L;
                        int32_t l_332[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_332[i] = 0x478CD3E2L;
                        --l_333;
                    }
                    else
                    { /* block id: 125 */
                        return (**p_828->g_151);
                    }
                    l_111[3] = &l_109;
                    if ((atomic_inc(&p_828->g_atomic_input[13 * get_linear_group_id() + 4]) == 7))
                    { /* block id: 130 */
                        uint64_t l_336 = 0UL;
                        uint64_t l_337 = 1UL;
                        VECTOR(int64_t, 8) l_338 = (VECTOR(int64_t, 8))(0x7B2055C3B75EF002L, (VECTOR(int64_t, 4))(0x7B2055C3B75EF002L, (VECTOR(int64_t, 2))(0x7B2055C3B75EF002L, (-1L)), (-1L)), (-1L), 0x7B2055C3B75EF002L, (-1L));
                        uint16_t l_339 = 0xA5A3L;
                        struct S0 l_340[3][2][10] = {{{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}},{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}}},{{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}},{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}}},{{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}},{{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{250UL,0x25L,-9L,0UL,0L,-3L,3L},{0xCDL,255UL,0x27BC74970BD63908L,1UL,6L,-1L,4L},{255UL,0x8EL,0L,0UL,0x3E8953B0L,0x67B6EF47L,-3L},{0xDEL,1UL,-9L,246UL,1L,-1L,0x36EBD1A4L},{254UL,2UL,0L,1UL,0L,1L,0x5A724D8DL},{1UL,0xAEL,0L,253UL,-6L,-1L,7L}}}};
                        int32_t *l_341[4][5][8] = {{{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4}},{{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4}},{{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4}},{{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4},{(void*)0,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4,&l_340[1][1][9].f4}}};
                        int32_t *l_342 = &l_340[1][1][9].f4;
                        uint32_t l_343 = 0x33F38517L;
                        int32_t l_344 = 2L;
                        struct S0 l_345 = {7UL,255UL,2L,255UL,0L,1L,-1L};/* VOLATILE GLOBAL l_345 */
                        struct S0 l_346 = {255UL,0UL,0x55381B19517187A3L,0UL,0x473BB524L,0x32DE1133L,0x3E535BFFL};/* VOLATILE GLOBAL l_346 */
                        int i, j, k;
                        l_342 = (((l_337 &= l_336) , (((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 4))(1L, ((VECTOR(int64_t, 2))(0x51634EBFB925DB91L, (-4L))), (-1L))).even))).xyyyxyxx))).s5 , ((l_339 = ((VECTOR(int64_t, 16))(l_338.s4201072107525314)).s5) , l_340[1][1][9]))) , (l_341[3][2][6] = (void*)0));
                        l_344 = l_343;
                        l_346 = l_345;
                        unsigned int result = 0;
                        result += l_336;
                        result += l_337;
                        result += l_338.s7;
                        result += l_338.s6;
                        result += l_338.s5;
                        result += l_338.s4;
                        result += l_338.s3;
                        result += l_338.s2;
                        result += l_338.s1;
                        result += l_338.s0;
                        result += l_339;
                        int l_340_i0, l_340_i1, l_340_i2;
                        for (l_340_i0 = 0; l_340_i0 < 3; l_340_i0++) {
                            for (l_340_i1 = 0; l_340_i1 < 2; l_340_i1++) {
                                for (l_340_i2 = 0; l_340_i2 < 10; l_340_i2++) {
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f0;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f1;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f2;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f3;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f4;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f5;
                                    result += l_340[l_340_i0][l_340_i1][l_340_i2].f6;
                                }
                            }
                        }
                        result += l_343;
                        result += l_344;
                        result += l_345.f0;
                        result += l_345.f1;
                        result += l_345.f2;
                        result += l_345.f3;
                        result += l_345.f4;
                        result += l_345.f5;
                        result += l_345.f6;
                        result += l_346.f0;
                        result += l_346.f1;
                        result += l_346.f2;
                        result += l_346.f3;
                        result += l_346.f4;
                        result += l_346.f5;
                        result += l_346.f6;
                        atomic_add(&p_828->g_special_values[13 * get_linear_group_id() + 4], result);
                    }
                    else
                    { /* block id: 137 */
                        (1 + 1);
                    }
                }
            }
            l_347 = ((**l_214) = (*p_828->g_143));
        }
        else
        { /* block id: 144 */
            return p_73;
        }
        (*p_828->g_143) ^= (p_828->g_181.f4 != p_73);
    }
    (*p_828->g_143) = (~3L);
    (*l_222) = (*l_222);
    if ((atomic_inc(&p_828->g_atomic_input[13 * get_linear_group_id() + 7]) == 2))
    { /* block id: 152 */
        uint32_t l_348 = 0xAEDA8E92L;
        VECTOR(uint32_t, 16) l_349 = (VECTOR(uint32_t, 16))(0xD249B98DL, (VECTOR(uint32_t, 4))(0xD249B98DL, (VECTOR(uint32_t, 2))(0xD249B98DL, 0xB80903C9L), 0xB80903C9L), 0xB80903C9L, 0xD249B98DL, 0xB80903C9L, (VECTOR(uint32_t, 2))(0xD249B98DL, 0xB80903C9L), (VECTOR(uint32_t, 2))(0xD249B98DL, 0xB80903C9L), 0xD249B98DL, 0xB80903C9L, 0xD249B98DL, 0xB80903C9L);
        VECTOR(uint32_t, 2) l_350 = (VECTOR(uint32_t, 2))(0xE29DB6BAL, 0x2F9AB202L);
        int16_t l_351 = (-9L);
        VECTOR(uint32_t, 2) l_352 = (VECTOR(uint32_t, 2))(0x133C847EL, 1UL);
        VECTOR(uint32_t, 16) l_353 = (VECTOR(uint32_t, 16))(0x747F2304L, (VECTOR(uint32_t, 4))(0x747F2304L, (VECTOR(uint32_t, 2))(0x747F2304L, 0xAFDBE4B1L), 0xAFDBE4B1L), 0xAFDBE4B1L, 0x747F2304L, 0xAFDBE4B1L, (VECTOR(uint32_t, 2))(0x747F2304L, 0xAFDBE4B1L), (VECTOR(uint32_t, 2))(0x747F2304L, 0xAFDBE4B1L), 0x747F2304L, 0xAFDBE4B1L, 0x747F2304L, 0xAFDBE4B1L);
        int16_t l_354 = 6L;
        VECTOR(uint32_t, 2) l_355 = (VECTOR(uint32_t, 2))(0UL, 0UL);
        VECTOR(int32_t, 8) l_356 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
        VECTOR(uint32_t, 8) l_357 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0xB90CAB9EL), 0xB90CAB9EL), 0xB90CAB9EL, 5UL, 0xB90CAB9EL);
        VECTOR(uint32_t, 2) l_358 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
        VECTOR(uint32_t, 4) l_359 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL);
        VECTOR(uint32_t, 8) l_360 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xC4A3C352L), 0xC4A3C352L), 0xC4A3C352L, 4294967289UL, 0xC4A3C352L);
        int16_t l_361 = 9L;
        VECTOR(uint32_t, 4) l_362 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
        VECTOR(uint32_t, 4) l_363 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967291UL), 4294967291UL);
        VECTOR(uint32_t, 2) l_364 = (VECTOR(uint32_t, 2))(0x7162EB88L, 0x7232F6F1L);
        VECTOR(uint32_t, 16) l_365 = (VECTOR(uint32_t, 16))(0xFB6D1F15L, (VECTOR(uint32_t, 4))(0xFB6D1F15L, (VECTOR(uint32_t, 2))(0xFB6D1F15L, 0UL), 0UL), 0UL, 0xFB6D1F15L, 0UL, (VECTOR(uint32_t, 2))(0xFB6D1F15L, 0UL), (VECTOR(uint32_t, 2))(0xFB6D1F15L, 0UL), 0xFB6D1F15L, 0UL, 0xFB6D1F15L, 0UL);
        int32_t l_366 = 0L;
        VECTOR(uint32_t, 8) l_367 = (VECTOR(uint32_t, 8))(0x0974CB4AL, (VECTOR(uint32_t, 4))(0x0974CB4AL, (VECTOR(uint32_t, 2))(0x0974CB4AL, 9UL), 9UL), 9UL, 0x0974CB4AL, 9UL);
        VECTOR(uint32_t, 8) l_368 = (VECTOR(uint32_t, 8))(0x356E20B2L, (VECTOR(uint32_t, 4))(0x356E20B2L, (VECTOR(uint32_t, 2))(0x356E20B2L, 4294967286UL), 4294967286UL), 4294967286UL, 0x356E20B2L, 4294967286UL);
        VECTOR(uint32_t, 16) l_369 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEB4BBC62L), 0xEB4BBC62L), 0xEB4BBC62L, 4294967295UL, 0xEB4BBC62L, (VECTOR(uint32_t, 2))(4294967295UL, 0xEB4BBC62L), (VECTOR(uint32_t, 2))(4294967295UL, 0xEB4BBC62L), 4294967295UL, 0xEB4BBC62L, 4294967295UL, 0xEB4BBC62L);
        VECTOR(int32_t, 4) l_370 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x28A893BDL), 0x28A893BDL);
        int64_t l_371 = 0x49D516C3505959B2L;
        int64_t l_372 = 0x4EFA9CAE8408D34EL;
        int16_t l_373 = 0x546EL;
        int64_t l_374 = 0L;
        int32_t l_375 = 0x2376C821L;
        VECTOR(uint8_t, 4) l_376 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL);
        int32_t l_377 = 0x691F352FL;
        int i;
        l_377 = (l_376.y &= ((((l_348 = 1UL) , (-4L)) , ((VECTOR(uint64_t, 8))(0x01AEAC6BB2935A87L, ((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_349.s904e)).even)).yyyyxyxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(l_350.yyyxyyyxyyxyxyxy)), ((VECTOR(uint32_t, 16))(0x02CE77B9L, l_351, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_352.yy)).xyyxyxxx, ((VECTOR(uint32_t, 8))(l_353.s9618110a))))), 0x856A8434L, ((VECTOR(uint32_t, 4))(l_354, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(0UL, 1UL)), ((VECTOR(uint32_t, 8))(l_355.xyxyyxyx)).s54))), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(0x9FF160E3L, 0xA2EED5A8L, 0UL, 4294967295UL)), ((VECTOR(uint32_t, 2))(4294967295UL, 0xA0EBC629L)).xxyx))), 0xA06D5FCEL, 1UL)).s72, ((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(l_356.s4760)).hi))), ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(l_357.s0060545023023120)).sbd93, ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 8))(l_358.xxxyyyyy)).even))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x8A8ACC49L, 4294967287UL, 2UL, 0x2472EED9L)).xxywxyzy)).s1326500136154272, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x2A0317B2L, 0xE0B42C94L)).xyxy)), 4294967295UL, ((VECTOR(uint32_t, 4))(4294967292UL, 0UL, 0xA3FCB67CL, 4294967292UL)), ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(l_359.xy)).yyyy, ((VECTOR(uint32_t, 2))(l_360.s57)).xxxy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_361, ((VECTOR(uint32_t, 2))(l_362.zx)), 0x541E9272L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_363.ywxw)).xwwwzywxzzwwzyzz)))).s3a, ((VECTOR(uint32_t, 2))(l_364.xy))))), 0x62E19902L, 0x48553C1FL)).x, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_365.s6295f52c98f5f015)).s99)))), 0xEFB06963L)).s6362572530632252)))).s4104))), l_366, 0xED6EE6F7L, 0x4709322AL)).hi))).s6133456142055233, ((VECTOR(uint32_t, 4))(4294967295UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(l_367.s05427440)).s17, ((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 2))(4294967295UL, 0x9A9DA036L)), ((VECTOR(uint32_t, 2))(l_368.s04)), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_369.s2a37772b)).s60))), 0x5BE359ECL)).s3350503034724525)))).s27ab, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_370.zxxy))))).ywyxyyywzxzxwwww, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(1L, 0x46C0BA1AL)), 6L)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(l_371, l_372, 0x75302040L, 0x7157C6E6L)).even, (int32_t)l_373, (int32_t)l_374))), ((VECTOR(int32_t, 4))(0x32DD74D1L)), (-1L), (-10L))).s57))).xyxyxxxxyxyxxyyx))).s85a7))).lo))), 0x8F163207L)).wzywwxyzxxwyywyz))).se5e0))))), ((VECTOR(uint32_t, 8))(0xC655D077L)), 4294967295UL)).scc))), ((VECTOR(uint32_t, 2))(4294967295UL))))), 4294967290UL)), 0x6ABBCEE5L))))).s86))).yxyy)).zyxyzyyz))).odd, ((VECTOR(uint32_t, 4))(0x7EC34498L))))).odd, ((VECTOR(uint32_t, 2))(4294967289UL))))), ((VECTOR(uint64_t, 4))(0xF4FE7F809D96D4D1L)), 0x16677945A8C7C1A3L, 0xBD3AD2D03E415A8FL)), ((VECTOR(uint64_t, 8))(0x5BBAE9F0B6799FDCL))))), ((VECTOR(uint64_t, 2))(0xF391E21ABC9B0463L)), 0x37B5610BE7CF8715L, 0UL, 0xB370E6A587B32712L, ((VECTOR(uint64_t, 2))(0x32BA29CA75C89A46L)), 0UL)).s58, ((VECTOR(uint64_t, 2))(0x5887BD62D508D49BL))))), 0x99A6A2B036F7296AL, l_375, ((VECTOR(uint64_t, 2))(0x1831C80CA1C4CB7CL)), 18446744073709551611UL)).s1) , (-8L)));
        unsigned int result = 0;
        result += l_348;
        result += l_349.sf;
        result += l_349.se;
        result += l_349.sd;
        result += l_349.sc;
        result += l_349.sb;
        result += l_349.sa;
        result += l_349.s9;
        result += l_349.s8;
        result += l_349.s7;
        result += l_349.s6;
        result += l_349.s5;
        result += l_349.s4;
        result += l_349.s3;
        result += l_349.s2;
        result += l_349.s1;
        result += l_349.s0;
        result += l_350.y;
        result += l_350.x;
        result += l_351;
        result += l_352.y;
        result += l_352.x;
        result += l_353.sf;
        result += l_353.se;
        result += l_353.sd;
        result += l_353.sc;
        result += l_353.sb;
        result += l_353.sa;
        result += l_353.s9;
        result += l_353.s8;
        result += l_353.s7;
        result += l_353.s6;
        result += l_353.s5;
        result += l_353.s4;
        result += l_353.s3;
        result += l_353.s2;
        result += l_353.s1;
        result += l_353.s0;
        result += l_354;
        result += l_355.y;
        result += l_355.x;
        result += l_356.s7;
        result += l_356.s6;
        result += l_356.s5;
        result += l_356.s4;
        result += l_356.s3;
        result += l_356.s2;
        result += l_356.s1;
        result += l_356.s0;
        result += l_357.s7;
        result += l_357.s6;
        result += l_357.s5;
        result += l_357.s4;
        result += l_357.s3;
        result += l_357.s2;
        result += l_357.s1;
        result += l_357.s0;
        result += l_358.y;
        result += l_358.x;
        result += l_359.w;
        result += l_359.z;
        result += l_359.y;
        result += l_359.x;
        result += l_360.s7;
        result += l_360.s6;
        result += l_360.s5;
        result += l_360.s4;
        result += l_360.s3;
        result += l_360.s2;
        result += l_360.s1;
        result += l_360.s0;
        result += l_361;
        result += l_362.w;
        result += l_362.z;
        result += l_362.y;
        result += l_362.x;
        result += l_363.w;
        result += l_363.z;
        result += l_363.y;
        result += l_363.x;
        result += l_364.y;
        result += l_364.x;
        result += l_365.sf;
        result += l_365.se;
        result += l_365.sd;
        result += l_365.sc;
        result += l_365.sb;
        result += l_365.sa;
        result += l_365.s9;
        result += l_365.s8;
        result += l_365.s7;
        result += l_365.s6;
        result += l_365.s5;
        result += l_365.s4;
        result += l_365.s3;
        result += l_365.s2;
        result += l_365.s1;
        result += l_365.s0;
        result += l_366;
        result += l_367.s7;
        result += l_367.s6;
        result += l_367.s5;
        result += l_367.s4;
        result += l_367.s3;
        result += l_367.s2;
        result += l_367.s1;
        result += l_367.s0;
        result += l_368.s7;
        result += l_368.s6;
        result += l_368.s5;
        result += l_368.s4;
        result += l_368.s3;
        result += l_368.s2;
        result += l_368.s1;
        result += l_368.s0;
        result += l_369.sf;
        result += l_369.se;
        result += l_369.sd;
        result += l_369.sc;
        result += l_369.sb;
        result += l_369.sa;
        result += l_369.s9;
        result += l_369.s8;
        result += l_369.s7;
        result += l_369.s6;
        result += l_369.s5;
        result += l_369.s4;
        result += l_369.s3;
        result += l_369.s2;
        result += l_369.s1;
        result += l_369.s0;
        result += l_370.w;
        result += l_370.z;
        result += l_370.y;
        result += l_370.x;
        result += l_371;
        result += l_372;
        result += l_373;
        result += l_374;
        result += l_375;
        result += l_376.w;
        result += l_376.z;
        result += l_376.y;
        result += l_376.x;
        result += l_377;
        atomic_add(&p_828->g_special_values[13 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 156 */
        (1 + 1);
    }
    return (*p_828->g_143);
}


/* ------------------------------------------ */
/* 
 * reads : p_828->g_116 p_828->g_80.f4 p_828->g_3 p_828->g_80 p_828->g_129 p_828->g_151 p_828->g_143 p_828->g_135.f4 p_828->g_164 p_828->g_181 p_828->g_135.f6
 * writes: p_828->g_80.f4 p_828->g_116 p_828->g_75 p_828->g_108 p_828->g_80 p_828->g_143 p_828->g_135.f1 p_828->g_25 p_828->g_65 p_828->g_135.f4 p_828->g_181
 */
uint8_t  func_83(uint64_t * p_84, uint64_t * p_85, uint64_t ** p_86, struct S2 * p_828)
{ /* block id: 31 */
    int32_t *l_114 = &p_828->g_80[0].f4;
    int32_t *l_115 = &p_828->g_116;
    VECTOR(int8_t, 8) l_127 = (VECTOR(int8_t, 8))(0x75L, (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, 1L), 1L), 1L, 0x75L, 1L);
    union U1 *l_163 = (void*)0;
    int32_t l_167 = (-4L);
    int32_t l_168 = (-1L);
    int32_t l_169 = 0x70DAF6FCL;
    int32_t l_171 = 0L;
    int32_t l_172 = (-2L);
    int32_t l_173 = 0L;
    int32_t l_174 = (-2L);
    int32_t l_175 = 0x3B826330L;
    int32_t l_193[6][9] = {{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)},{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)},{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)},{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)},{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)},{(-3L),(-3L),0x3D755E53L,1L,(-9L),0x3F4A9CFAL,(-1L),(-2L),(-1L)}};
    int64_t l_194 = 1L;
    int i, j;
    (*l_115) |= ((*l_114) = 5L);
    if (((*l_114) != (p_828->g_3.w | FAKE_DIVERGE(p_828->global_1_offset, get_global_id(1), 10))))
    { /* block id: 34 */
        VECTOR(int8_t, 8) l_125 = (VECTOR(int8_t, 8))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 1L), 1L), 1L, 0x4BL, 1L);
        VECTOR(int8_t, 4) l_126 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0L), 0L);
        int32_t *l_145 = &p_828->g_80[0].f4;
        int32_t *l_150 = &p_828->g_135.f4;
        union U1 *l_159 = &p_828->g_160[0];
        int32_t *l_165 = &p_828->g_116;
        int32_t *l_166[2][8][6] = {{{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4}},{{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4},{(void*)0,&p_828->g_80[0].f4,(void*)0,&p_828->g_80[0].f4,&p_828->g_80[0].f4,&p_828->g_135.f4}}};
        int32_t l_170 = 0x10BE2FE8L;
        uint16_t l_176 = 65532UL;
        int i, j, k;
        for (p_828->g_116 = 13; (p_828->g_116 <= 5); p_828->g_116 = safe_sub_func_int64_t_s_s(p_828->g_116, 7))
        { /* block id: 37 */
            int32_t *l_138 = &p_828->g_80[0].f4;
            for (p_828->g_75 = 0; (p_828->g_75 <= 12); ++p_828->g_75)
            { /* block id: 40 */
                int16_t l_121 = 0L;
                int8_t *l_139 = (void*)0;
                int32_t l_140 = 7L;
                int32_t l_149 = 0x5D1B8DA6L;
                l_121 = (+(-1L));
                for (p_828->g_108 = 0; (p_828->g_108 > (-23)); p_828->g_108 = safe_sub_func_int32_t_s_s(p_828->g_108, 9))
                { /* block id: 44 */
                    VECTOR(int8_t, 4) l_124 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x3DL), 0x3DL);
                    VECTOR(int8_t, 16) l_128 = (VECTOR(int8_t, 16))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x55L), 0x55L), 0x55L, 0x0AL, 0x55L, (VECTOR(int8_t, 2))(0x0AL, 0x55L), (VECTOR(int8_t, 2))(0x0AL, 0x55L), 0x0AL, 0x55L, 0x0AL, 0x55L);
                    VECTOR(uint8_t, 2) l_137 = (VECTOR(uint8_t, 2))(0x95L, 255UL);
                    int32_t **l_141 = (void*)0;
                    int32_t **l_144[6][1][8] = {{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}},{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}},{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}},{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}},{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}},{{&l_138,&l_115,&l_138,&l_138,&l_115,&l_138,&l_138,&l_115}}};
                    int i, j, k;
                    l_140 = (((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((*l_114), ((VECTOR(int8_t, 2))((-1L), 0x01L)), ((VECTOR(int8_t, 2))(5L, 9L)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_124.xy)).yyxy)).even, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_125.s74)), (-1L), 0x51L)).lo))).hi, (-2L), (-2L))).s34)).yxxxyyyxxyyxyyyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_126.yzywxyzxxzyxywxy)).s3b57)).zzyxwyxxxwwxwxzw))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(l_127.s05723602)).s0220075061162651, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1CL, (-1L))).yxyy)).yyzyywwxzwzyzxyy, ((VECTOR(int8_t, 16))(l_128.sf9f679cedcc4ab30))))).s5134, ((VECTOR(int8_t, 8))(p_828->g_129.sc2020794)).even))).even)).xxyyyxxyyxxyxyxy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 5L)))).xyyyxxxx, ((VECTOR(int8_t, 16))(p_828->g_130.xxxxxyyxxxyyxxxx)).odd))))).even)).yxyxwywzwxwxwxzy))), (int8_t)((VECTOR(int8_t, 4))(0x5CL, (p_828->g_130.y == (((safe_sub_func_int8_t_s_s(l_124.x, (safe_mod_func_uint64_t_u_u(l_121, (p_828->g_135 , ((VECTOR(int64_t, 16))(p_828->g_136.yyxzwyzzzxywzxyx)).sc))))) > (((VECTOR(uint8_t, 2))(l_137.yy)).lo >= (&p_828->g_116 == l_138))) || (l_124.z >= (l_139 == (void*)0)))), (-1L), 0x58L)).w))).s4 >= p_828->g_3.z);
                    l_145 = &p_828->g_116;
                    if ((*l_138))
                        break;
                    if (((VECTOR(int32_t, 16))(p_828->g_146.xwzzyzywwxwzzzyy)).sb)
                    { /* block id: 48 */
                        struct S0 *l_147 = &p_828->g_80[0];
                        int32_t l_148 = 1L;
                        (*l_147) = p_828->g_80[0];
                        if (l_148)
                            break;
                        l_149 |= 5L;
                        if (l_121)
                            break;
                    }
                    else
                    { /* block id: 53 */
                        return p_828->g_129.sb;
                    }
                }
                (*l_138) &= 0x11E324BCL;
            }
            if ((*l_138))
                break;
            (*p_828->g_151) = l_150;
            for (p_828->g_75 = 0; (p_828->g_75 >= 16); p_828->g_75++)
            { /* block id: 63 */
                VECTOR(uint64_t, 16) l_156 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x2D81C2D92C0DBAEEL), 0x2D81C2D92C0DBAEEL), 0x2D81C2D92C0DBAEEL, 18446744073709551606UL, 0x2D81C2D92C0DBAEEL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x2D81C2D92C0DBAEEL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x2D81C2D92C0DBAEEL), 18446744073709551606UL, 0x2D81C2D92C0DBAEEL, 18446744073709551606UL, 0x2D81C2D92C0DBAEEL);
                union U1 *l_162 = (void*)0;
                int i;
                (*l_114) &= (*p_828->g_143);
                for (p_828->g_135.f1 = 5; (p_828->g_135.f1 < 22); ++p_828->g_135.f1)
                { /* block id: 67 */
                    return l_156.sb;
                }
                for (p_828->g_25 = 0; (p_828->g_25 > 17); p_828->g_25 = safe_add_func_uint16_t_u_u(p_828->g_25, 2))
                { /* block id: 72 */
                    union U1 **l_161[6] = {&l_159,&l_159,&l_159,&l_159,&l_159,&l_159};
                    int i;
                    l_163 = (l_162 = l_159);
                }
                if ((*l_115))
                    break;
            }
        }
        (*l_114) &= 0x488EF96AL;
        (*p_828->g_164) = &p_85;
        --l_176;
    }
    else
    { /* block id: 82 */
        int32_t *l_183 = &p_828->g_135.f4;
        int32_t l_184 = 3L;
        int32_t *l_185 = &p_828->g_80[0].f4;
        int32_t *l_186 = &l_169;
        int32_t *l_187 = &p_828->g_135.f4;
        int32_t *l_188 = &l_175;
        int32_t *l_189 = &p_828->g_135.f4;
        int32_t *l_190 = (void*)0;
        int32_t *l_191 = &l_173;
        int32_t *l_192[2][10] = {{&l_167,&l_167,&l_184,(void*)0,&l_167,(void*)0,&l_184,&l_167,&l_167,&l_184},{&l_167,&l_167,&l_184,(void*)0,&l_167,(void*)0,&l_184,&l_167,&l_167,&l_184}};
        uint64_t l_195 = 0x25C1C1F29E83EF55L;
        int i, j;
        for (p_828->g_135.f4 = 0; (p_828->g_135.f4 != (-28)); --p_828->g_135.f4)
        { /* block id: 85 */
            volatile struct S0 *l_182 = &p_828->g_181;
            atomic_add(&p_828->l_atomic_reduction[0], (*l_115));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_828->v_collective += p_828->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*l_182) = p_828->g_181;
        }
        l_195--;
        (*l_191) = (*l_188);
    }
    return p_828->g_135.f6;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_87(int32_t  p_88, uint16_t * p_89, uint64_t  p_90, uint16_t * p_91, int32_t * p_92, struct S2 * p_828)
{ /* block id: 29 */
    uint64_t *l_112[10];
    int i;
    for (i = 0; i < 10; i++)
        l_112[i] = &p_828->g_25;
    return l_112[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_comm_values[i] = 1;
    struct S2 c_829;
    struct S2* p_828 = &c_829;
    struct S2 c_830 = {
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), // p_828->g_3
        3UL, // p_828->g_19
        0xC3E1B8D8131DDA87L, // p_828->g_25
        &p_828->g_25, // p_828->g_24
        0x1CA8L, // p_828->g_57
        &p_828->g_25, // p_828->g_66
        &p_828->g_66, // p_828->g_65
        8UL, // p_828->g_75
        {{1UL,0UL,0x7C03C79A39DA5D7AL,1UL,0x14124F91L,-6L,3L}}, // p_828->g_80
        (-1L), // p_828->g_108
        (-1L), // p_828->g_116
        (VECTOR(int8_t, 16))(0x17L, (VECTOR(int8_t, 4))(0x17L, (VECTOR(int8_t, 2))(0x17L, (-2L)), (-2L)), (-2L), 0x17L, (-2L), (VECTOR(int8_t, 2))(0x17L, (-2L)), (VECTOR(int8_t, 2))(0x17L, (-2L)), 0x17L, (-2L), 0x17L, (-2L)), // p_828->g_129
        (VECTOR(int8_t, 2))(0x3AL, (-7L)), // p_828->g_130
        {255UL,250UL,0x102CEC10F2CAE24EL,0xD9L,0x757F4CF0L,3L,-7L}, // p_828->g_135
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), // p_828->g_136
        &p_828->g_135.f4, // p_828->g_143
        {{(void*)0,&p_828->g_143,(void*)0,(void*)0,&p_828->g_143,(void*)0},{(void*)0,&p_828->g_143,(void*)0,(void*)0,&p_828->g_143,(void*)0}}, // p_828->g_142
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x02C1C9F6L), 0x02C1C9F6L), // p_828->g_146
        &p_828->g_143, // p_828->g_151
        {{{9UL,1UL,6L,0UL,0x22B2FAD4L,0L,2L}},{{9UL,1UL,6L,0UL,0x22B2FAD4L,0L,2L}}}, // p_828->g_160
        &p_828->g_65, // p_828->g_164
        {0x3DL,0x4BL,0L,0x7BL,1L,0x68258FFCL,0x2B63EB4BL}, // p_828->g_181
        {246UL,0xEFL,1L,252UL,0x09B306FAL,0x24ABC332L,0x77126A5EL}, // p_828->g_210
        (VECTOR(uint16_t, 16))(0x1768L, (VECTOR(uint16_t, 4))(0x1768L, (VECTOR(uint16_t, 2))(0x1768L, 1UL), 1UL), 1UL, 0x1768L, 1UL, (VECTOR(uint16_t, 2))(0x1768L, 1UL), (VECTOR(uint16_t, 2))(0x1768L, 1UL), 0x1768L, 1UL, 0x1768L, 1UL), // p_828->g_211
        (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4F9F92A5L), 0x4F9F92A5L), 0x4F9F92A5L, (-2L), 0x4F9F92A5L, (VECTOR(int32_t, 2))((-2L), 0x4F9F92A5L), (VECTOR(int32_t, 2))((-2L), 0x4F9F92A5L), (-2L), 0x4F9F92A5L, (-2L), 0x4F9F92A5L), // p_828->g_212
        (VECTOR(int32_t, 2))(0x3DA78BECL, 0x1045112FL), // p_828->g_216
        {0xABL,5UL,0x76E834FDBE8BD684L,0x81L,1L,9L,-1L}, // p_828->g_223
        (void*)0, // p_828->g_259
        4294967288UL, // p_828->g_280
        {1UL,0xF9L,0x7D72EFC176A15261L,6UL,0x41EE8A46L,0x3DC67B74L,-2L}, // p_828->g_281
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xFCL), 0xFCL), 0xFCL, 255UL, 0xFCL), // p_828->g_282
        4294967295UL, // p_828->g_294
        {0xEBL,0x0AL,-8L,1UL,0L,-1L,7L}, // p_828->g_298
        {0x8BL,0x7AL,0x30FDB2BAECEEBD54L,251UL,0x7D39667CL,9L,0x5F87B978L}, // p_828->g_301
        &p_828->g_301, // p_828->g_300
        {{2UL,0UL,0x4EAE28C13ABD7D43L,0x0DL,7L,0x5192ABE0L,0x6262A0CCL},{2UL,0UL,0x4EAE28C13ABD7D43L,0x0DL,7L,0x5192ABE0L,0x6262A0CCL},{2UL,0UL,0x4EAE28C13ABD7D43L,0x0DL,7L,0x5192ABE0L,0x6262A0CCL}}, // p_828->g_304
        {{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}},{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}},{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}},{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}},{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}},{{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)},{0x7CL,0x74L,0x1CL,0x52L,(-1L),(-6L)}}}, // p_828->g_321
        5UL, // p_828->g_431
        &p_828->g_143, // p_828->g_433
        (void*)0, // p_828->g_443
        {&p_828->g_25,&p_828->g_25,&p_828->g_25,&p_828->g_25,&p_828->g_25,&p_828->g_25}, // p_828->g_445
        (VECTOR(uint32_t, 2))(2UL, 1UL), // p_828->g_463
        &p_828->g_143, // p_828->g_464
        {{0x87L,0xC4L,-2L,0x00L,0x1D095AFDL,0x2C792D07L,0x4449CE7EL}}, // p_828->g_484
        &p_828->g_484, // p_828->g_483
        &p_828->g_483, // p_828->g_482
        (VECTOR(int16_t, 2))(0x5451L, 0x43F3L), // p_828->g_499
        (VECTOR(int16_t, 2))((-10L), 0x2302L), // p_828->g_501
        (VECTOR(int8_t, 8))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, (-1L)), (-1L)), (-1L), 0x1CL, (-1L)), // p_828->g_502
        (VECTOR(int16_t, 16))(0x4DECL, (VECTOR(int16_t, 4))(0x4DECL, (VECTOR(int16_t, 2))(0x4DECL, 1L), 1L), 1L, 0x4DECL, 1L, (VECTOR(int16_t, 2))(0x4DECL, 1L), (VECTOR(int16_t, 2))(0x4DECL, 1L), 0x4DECL, 1L, 0x4DECL, 1L), // p_828->g_511
        (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-7L)), (-7L)), (-7L), 4L, (-7L)), // p_828->g_512
        (VECTOR(int16_t, 2))(0L, 0x2AC7L), // p_828->g_514
        (VECTOR(int64_t, 2))(0x21FBD97286ACF5C8L, 0x79E127D77286F7D9L), // p_828->g_517
        0x1E80BC6EL, // p_828->g_525
        {0xB3L,255UL,2L,248UL,0x2CB782ADL,0x11CEEA25L,0x7BA913FAL}, // p_828->g_528
        {9UL,253UL,4L,0xD9L,8L,0x4C514691L,1L}, // p_828->g_566
        6UL, // p_828->g_586
        &p_828->g_304[2].f4, // p_828->g_589
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x2C0BL), 0x2C0BL), // p_828->g_602
        {{&p_828->g_135.f1,(void*)0,&p_828->g_135.f1,&p_828->g_135.f1,(void*)0,&p_828->g_135.f1},{&p_828->g_135.f1,(void*)0,&p_828->g_135.f1,&p_828->g_135.f1,(void*)0,&p_828->g_135.f1}}, // p_828->g_604
        &p_828->g_443, // p_828->g_614
        &p_828->g_443, // p_828->g_615
        &p_828->g_443, // p_828->g_619
        &p_828->g_300, // p_828->g_629
        &p_828->g_629, // p_828->g_628
        {0x11L,0UL,0x1F92FA13C46A7C5BL,0x64L,0x63965C5FL,0x4E718A31L,2L}, // p_828->g_669
        {{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}},{{0UL,0xFCL,0x26D1A660B1E6F201L,1UL,-1L,0x2F080395L,0x65218024L},{255UL,0x94L,-1L,0UL,0x7D7669E0L,0x46B6D35EL,0x3BF5E98CL},{4UL,0UL,0x550ED7B460FCA55BL,1UL,0x037B311AL,0L,8L},{1UL,0xDDL,0x51EE7484CAC2FA3EL,0xA6L,0x15DCCCF2L,0x68FA58F4L,-3L}}}, // p_828->g_728
        (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967288UL), 4294967288UL), // p_828->g_762
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), // p_828->g_786
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), // p_828->g_788
        (VECTOR(int32_t, 2))(0x4A19D1F0L, 0x3FE498CFL), // p_828->g_789
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_828->g_790
        (VECTOR(uint32_t, 16))(0x5409408CL, (VECTOR(uint32_t, 4))(0x5409408CL, (VECTOR(uint32_t, 2))(0x5409408CL, 0x3522BB53L), 0x3522BB53L), 0x3522BB53L, 0x5409408CL, 0x3522BB53L, (VECTOR(uint32_t, 2))(0x5409408CL, 0x3522BB53L), (VECTOR(uint32_t, 2))(0x5409408CL, 0x3522BB53L), 0x5409408CL, 0x3522BB53L, 0x5409408CL, 0x3522BB53L), // p_828->g_798
        0, // p_828->v_collective
        sequence_input[get_global_id(0)], // p_828->global_0_offset
        sequence_input[get_global_id(1)], // p_828->global_1_offset
        sequence_input[get_global_id(2)], // p_828->global_2_offset
        sequence_input[get_local_id(0)], // p_828->local_0_offset
        sequence_input[get_local_id(1)], // p_828->local_1_offset
        sequence_input[get_local_id(2)], // p_828->local_2_offset
        sequence_input[get_group_id(0)], // p_828->group_0_offset
        sequence_input[get_group_id(1)], // p_828->group_1_offset
        sequence_input[get_group_id(2)], // p_828->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 69)), permutations[0][get_linear_local_id()])), // p_828->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_829 = c_830;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_828);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_828->g_3.x, "p_828->g_3.x", print_hash_value);
    transparent_crc(p_828->g_3.y, "p_828->g_3.y", print_hash_value);
    transparent_crc(p_828->g_3.z, "p_828->g_3.z", print_hash_value);
    transparent_crc(p_828->g_3.w, "p_828->g_3.w", print_hash_value);
    transparent_crc(p_828->g_19, "p_828->g_19", print_hash_value);
    transparent_crc(p_828->g_25, "p_828->g_25", print_hash_value);
    transparent_crc(p_828->g_57, "p_828->g_57", print_hash_value);
    transparent_crc(p_828->g_75, "p_828->g_75", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_828->g_80[i].f0, "p_828->g_80[i].f0", print_hash_value);
        transparent_crc(p_828->g_80[i].f1, "p_828->g_80[i].f1", print_hash_value);
        transparent_crc(p_828->g_80[i].f2, "p_828->g_80[i].f2", print_hash_value);
        transparent_crc(p_828->g_80[i].f3, "p_828->g_80[i].f3", print_hash_value);
        transparent_crc(p_828->g_80[i].f4, "p_828->g_80[i].f4", print_hash_value);
        transparent_crc(p_828->g_80[i].f5, "p_828->g_80[i].f5", print_hash_value);
        transparent_crc(p_828->g_80[i].f6, "p_828->g_80[i].f6", print_hash_value);

    }
    transparent_crc(p_828->g_108, "p_828->g_108", print_hash_value);
    transparent_crc(p_828->g_116, "p_828->g_116", print_hash_value);
    transparent_crc(p_828->g_129.s0, "p_828->g_129.s0", print_hash_value);
    transparent_crc(p_828->g_129.s1, "p_828->g_129.s1", print_hash_value);
    transparent_crc(p_828->g_129.s2, "p_828->g_129.s2", print_hash_value);
    transparent_crc(p_828->g_129.s3, "p_828->g_129.s3", print_hash_value);
    transparent_crc(p_828->g_129.s4, "p_828->g_129.s4", print_hash_value);
    transparent_crc(p_828->g_129.s5, "p_828->g_129.s5", print_hash_value);
    transparent_crc(p_828->g_129.s6, "p_828->g_129.s6", print_hash_value);
    transparent_crc(p_828->g_129.s7, "p_828->g_129.s7", print_hash_value);
    transparent_crc(p_828->g_129.s8, "p_828->g_129.s8", print_hash_value);
    transparent_crc(p_828->g_129.s9, "p_828->g_129.s9", print_hash_value);
    transparent_crc(p_828->g_129.sa, "p_828->g_129.sa", print_hash_value);
    transparent_crc(p_828->g_129.sb, "p_828->g_129.sb", print_hash_value);
    transparent_crc(p_828->g_129.sc, "p_828->g_129.sc", print_hash_value);
    transparent_crc(p_828->g_129.sd, "p_828->g_129.sd", print_hash_value);
    transparent_crc(p_828->g_129.se, "p_828->g_129.se", print_hash_value);
    transparent_crc(p_828->g_129.sf, "p_828->g_129.sf", print_hash_value);
    transparent_crc(p_828->g_130.x, "p_828->g_130.x", print_hash_value);
    transparent_crc(p_828->g_130.y, "p_828->g_130.y", print_hash_value);
    transparent_crc(p_828->g_135.f0, "p_828->g_135.f0", print_hash_value);
    transparent_crc(p_828->g_135.f1, "p_828->g_135.f1", print_hash_value);
    transparent_crc(p_828->g_135.f2, "p_828->g_135.f2", print_hash_value);
    transparent_crc(p_828->g_135.f3, "p_828->g_135.f3", print_hash_value);
    transparent_crc(p_828->g_135.f4, "p_828->g_135.f4", print_hash_value);
    transparent_crc(p_828->g_135.f5, "p_828->g_135.f5", print_hash_value);
    transparent_crc(p_828->g_135.f6, "p_828->g_135.f6", print_hash_value);
    transparent_crc(p_828->g_136.x, "p_828->g_136.x", print_hash_value);
    transparent_crc(p_828->g_136.y, "p_828->g_136.y", print_hash_value);
    transparent_crc(p_828->g_136.z, "p_828->g_136.z", print_hash_value);
    transparent_crc(p_828->g_136.w, "p_828->g_136.w", print_hash_value);
    transparent_crc(p_828->g_146.x, "p_828->g_146.x", print_hash_value);
    transparent_crc(p_828->g_146.y, "p_828->g_146.y", print_hash_value);
    transparent_crc(p_828->g_146.z, "p_828->g_146.z", print_hash_value);
    transparent_crc(p_828->g_146.w, "p_828->g_146.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_828->g_160[i].f0.f0, "p_828->g_160[i].f0.f0", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f1, "p_828->g_160[i].f0.f1", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f2, "p_828->g_160[i].f0.f2", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f3, "p_828->g_160[i].f0.f3", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f4, "p_828->g_160[i].f0.f4", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f5, "p_828->g_160[i].f0.f5", print_hash_value);
        transparent_crc(p_828->g_160[i].f0.f6, "p_828->g_160[i].f0.f6", print_hash_value);

    }
    transparent_crc(p_828->g_181.f0, "p_828->g_181.f0", print_hash_value);
    transparent_crc(p_828->g_181.f1, "p_828->g_181.f1", print_hash_value);
    transparent_crc(p_828->g_181.f2, "p_828->g_181.f2", print_hash_value);
    transparent_crc(p_828->g_181.f3, "p_828->g_181.f3", print_hash_value);
    transparent_crc(p_828->g_181.f4, "p_828->g_181.f4", print_hash_value);
    transparent_crc(p_828->g_181.f5, "p_828->g_181.f5", print_hash_value);
    transparent_crc(p_828->g_181.f6, "p_828->g_181.f6", print_hash_value);
    transparent_crc(p_828->g_210.f0, "p_828->g_210.f0", print_hash_value);
    transparent_crc(p_828->g_210.f1, "p_828->g_210.f1", print_hash_value);
    transparent_crc(p_828->g_210.f2, "p_828->g_210.f2", print_hash_value);
    transparent_crc(p_828->g_210.f3, "p_828->g_210.f3", print_hash_value);
    transparent_crc(p_828->g_210.f4, "p_828->g_210.f4", print_hash_value);
    transparent_crc(p_828->g_210.f5, "p_828->g_210.f5", print_hash_value);
    transparent_crc(p_828->g_210.f6, "p_828->g_210.f6", print_hash_value);
    transparent_crc(p_828->g_211.s0, "p_828->g_211.s0", print_hash_value);
    transparent_crc(p_828->g_211.s1, "p_828->g_211.s1", print_hash_value);
    transparent_crc(p_828->g_211.s2, "p_828->g_211.s2", print_hash_value);
    transparent_crc(p_828->g_211.s3, "p_828->g_211.s3", print_hash_value);
    transparent_crc(p_828->g_211.s4, "p_828->g_211.s4", print_hash_value);
    transparent_crc(p_828->g_211.s5, "p_828->g_211.s5", print_hash_value);
    transparent_crc(p_828->g_211.s6, "p_828->g_211.s6", print_hash_value);
    transparent_crc(p_828->g_211.s7, "p_828->g_211.s7", print_hash_value);
    transparent_crc(p_828->g_211.s8, "p_828->g_211.s8", print_hash_value);
    transparent_crc(p_828->g_211.s9, "p_828->g_211.s9", print_hash_value);
    transparent_crc(p_828->g_211.sa, "p_828->g_211.sa", print_hash_value);
    transparent_crc(p_828->g_211.sb, "p_828->g_211.sb", print_hash_value);
    transparent_crc(p_828->g_211.sc, "p_828->g_211.sc", print_hash_value);
    transparent_crc(p_828->g_211.sd, "p_828->g_211.sd", print_hash_value);
    transparent_crc(p_828->g_211.se, "p_828->g_211.se", print_hash_value);
    transparent_crc(p_828->g_211.sf, "p_828->g_211.sf", print_hash_value);
    transparent_crc(p_828->g_212.s0, "p_828->g_212.s0", print_hash_value);
    transparent_crc(p_828->g_212.s1, "p_828->g_212.s1", print_hash_value);
    transparent_crc(p_828->g_212.s2, "p_828->g_212.s2", print_hash_value);
    transparent_crc(p_828->g_212.s3, "p_828->g_212.s3", print_hash_value);
    transparent_crc(p_828->g_212.s4, "p_828->g_212.s4", print_hash_value);
    transparent_crc(p_828->g_212.s5, "p_828->g_212.s5", print_hash_value);
    transparent_crc(p_828->g_212.s6, "p_828->g_212.s6", print_hash_value);
    transparent_crc(p_828->g_212.s7, "p_828->g_212.s7", print_hash_value);
    transparent_crc(p_828->g_212.s8, "p_828->g_212.s8", print_hash_value);
    transparent_crc(p_828->g_212.s9, "p_828->g_212.s9", print_hash_value);
    transparent_crc(p_828->g_212.sa, "p_828->g_212.sa", print_hash_value);
    transparent_crc(p_828->g_212.sb, "p_828->g_212.sb", print_hash_value);
    transparent_crc(p_828->g_212.sc, "p_828->g_212.sc", print_hash_value);
    transparent_crc(p_828->g_212.sd, "p_828->g_212.sd", print_hash_value);
    transparent_crc(p_828->g_212.se, "p_828->g_212.se", print_hash_value);
    transparent_crc(p_828->g_212.sf, "p_828->g_212.sf", print_hash_value);
    transparent_crc(p_828->g_216.x, "p_828->g_216.x", print_hash_value);
    transparent_crc(p_828->g_216.y, "p_828->g_216.y", print_hash_value);
    transparent_crc(p_828->g_223.f0, "p_828->g_223.f0", print_hash_value);
    transparent_crc(p_828->g_223.f1, "p_828->g_223.f1", print_hash_value);
    transparent_crc(p_828->g_223.f2, "p_828->g_223.f2", print_hash_value);
    transparent_crc(p_828->g_223.f3, "p_828->g_223.f3", print_hash_value);
    transparent_crc(p_828->g_223.f4, "p_828->g_223.f4", print_hash_value);
    transparent_crc(p_828->g_223.f5, "p_828->g_223.f5", print_hash_value);
    transparent_crc(p_828->g_223.f6, "p_828->g_223.f6", print_hash_value);
    transparent_crc(p_828->g_280, "p_828->g_280", print_hash_value);
    transparent_crc(p_828->g_281.f0, "p_828->g_281.f0", print_hash_value);
    transparent_crc(p_828->g_281.f1, "p_828->g_281.f1", print_hash_value);
    transparent_crc(p_828->g_281.f2, "p_828->g_281.f2", print_hash_value);
    transparent_crc(p_828->g_281.f3, "p_828->g_281.f3", print_hash_value);
    transparent_crc(p_828->g_281.f4, "p_828->g_281.f4", print_hash_value);
    transparent_crc(p_828->g_281.f5, "p_828->g_281.f5", print_hash_value);
    transparent_crc(p_828->g_281.f6, "p_828->g_281.f6", print_hash_value);
    transparent_crc(p_828->g_282.s0, "p_828->g_282.s0", print_hash_value);
    transparent_crc(p_828->g_282.s1, "p_828->g_282.s1", print_hash_value);
    transparent_crc(p_828->g_282.s2, "p_828->g_282.s2", print_hash_value);
    transparent_crc(p_828->g_282.s3, "p_828->g_282.s3", print_hash_value);
    transparent_crc(p_828->g_282.s4, "p_828->g_282.s4", print_hash_value);
    transparent_crc(p_828->g_282.s5, "p_828->g_282.s5", print_hash_value);
    transparent_crc(p_828->g_282.s6, "p_828->g_282.s6", print_hash_value);
    transparent_crc(p_828->g_282.s7, "p_828->g_282.s7", print_hash_value);
    transparent_crc(p_828->g_294, "p_828->g_294", print_hash_value);
    transparent_crc(p_828->g_298.f0, "p_828->g_298.f0", print_hash_value);
    transparent_crc(p_828->g_298.f1, "p_828->g_298.f1", print_hash_value);
    transparent_crc(p_828->g_298.f2, "p_828->g_298.f2", print_hash_value);
    transparent_crc(p_828->g_298.f3, "p_828->g_298.f3", print_hash_value);
    transparent_crc(p_828->g_298.f4, "p_828->g_298.f4", print_hash_value);
    transparent_crc(p_828->g_298.f5, "p_828->g_298.f5", print_hash_value);
    transparent_crc(p_828->g_298.f6, "p_828->g_298.f6", print_hash_value);
    transparent_crc(p_828->g_301.f0, "p_828->g_301.f0", print_hash_value);
    transparent_crc(p_828->g_301.f1, "p_828->g_301.f1", print_hash_value);
    transparent_crc(p_828->g_301.f2, "p_828->g_301.f2", print_hash_value);
    transparent_crc(p_828->g_301.f3, "p_828->g_301.f3", print_hash_value);
    transparent_crc(p_828->g_301.f4, "p_828->g_301.f4", print_hash_value);
    transparent_crc(p_828->g_301.f5, "p_828->g_301.f5", print_hash_value);
    transparent_crc(p_828->g_301.f6, "p_828->g_301.f6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_828->g_304[i].f0, "p_828->g_304[i].f0", print_hash_value);
        transparent_crc(p_828->g_304[i].f1, "p_828->g_304[i].f1", print_hash_value);
        transparent_crc(p_828->g_304[i].f2, "p_828->g_304[i].f2", print_hash_value);
        transparent_crc(p_828->g_304[i].f3, "p_828->g_304[i].f3", print_hash_value);
        transparent_crc(p_828->g_304[i].f4, "p_828->g_304[i].f4", print_hash_value);
        transparent_crc(p_828->g_304[i].f5, "p_828->g_304[i].f5", print_hash_value);
        transparent_crc(p_828->g_304[i].f6, "p_828->g_304[i].f6", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_828->g_321[i][j][k], "p_828->g_321[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_828->g_431, "p_828->g_431", print_hash_value);
    transparent_crc(p_828->g_463.x, "p_828->g_463.x", print_hash_value);
    transparent_crc(p_828->g_463.y, "p_828->g_463.y", print_hash_value);
    transparent_crc(p_828->g_484.f0.f0, "p_828->g_484.f0.f0", print_hash_value);
    transparent_crc(p_828->g_484.f0.f1, "p_828->g_484.f0.f1", print_hash_value);
    transparent_crc(p_828->g_484.f0.f2, "p_828->g_484.f0.f2", print_hash_value);
    transparent_crc(p_828->g_484.f0.f3, "p_828->g_484.f0.f3", print_hash_value);
    transparent_crc(p_828->g_484.f0.f4, "p_828->g_484.f0.f4", print_hash_value);
    transparent_crc(p_828->g_484.f0.f5, "p_828->g_484.f0.f5", print_hash_value);
    transparent_crc(p_828->g_484.f0.f6, "p_828->g_484.f0.f6", print_hash_value);
    transparent_crc(p_828->g_499.x, "p_828->g_499.x", print_hash_value);
    transparent_crc(p_828->g_499.y, "p_828->g_499.y", print_hash_value);
    transparent_crc(p_828->g_501.x, "p_828->g_501.x", print_hash_value);
    transparent_crc(p_828->g_501.y, "p_828->g_501.y", print_hash_value);
    transparent_crc(p_828->g_502.s0, "p_828->g_502.s0", print_hash_value);
    transparent_crc(p_828->g_502.s1, "p_828->g_502.s1", print_hash_value);
    transparent_crc(p_828->g_502.s2, "p_828->g_502.s2", print_hash_value);
    transparent_crc(p_828->g_502.s3, "p_828->g_502.s3", print_hash_value);
    transparent_crc(p_828->g_502.s4, "p_828->g_502.s4", print_hash_value);
    transparent_crc(p_828->g_502.s5, "p_828->g_502.s5", print_hash_value);
    transparent_crc(p_828->g_502.s6, "p_828->g_502.s6", print_hash_value);
    transparent_crc(p_828->g_502.s7, "p_828->g_502.s7", print_hash_value);
    transparent_crc(p_828->g_511.s0, "p_828->g_511.s0", print_hash_value);
    transparent_crc(p_828->g_511.s1, "p_828->g_511.s1", print_hash_value);
    transparent_crc(p_828->g_511.s2, "p_828->g_511.s2", print_hash_value);
    transparent_crc(p_828->g_511.s3, "p_828->g_511.s3", print_hash_value);
    transparent_crc(p_828->g_511.s4, "p_828->g_511.s4", print_hash_value);
    transparent_crc(p_828->g_511.s5, "p_828->g_511.s5", print_hash_value);
    transparent_crc(p_828->g_511.s6, "p_828->g_511.s6", print_hash_value);
    transparent_crc(p_828->g_511.s7, "p_828->g_511.s7", print_hash_value);
    transparent_crc(p_828->g_511.s8, "p_828->g_511.s8", print_hash_value);
    transparent_crc(p_828->g_511.s9, "p_828->g_511.s9", print_hash_value);
    transparent_crc(p_828->g_511.sa, "p_828->g_511.sa", print_hash_value);
    transparent_crc(p_828->g_511.sb, "p_828->g_511.sb", print_hash_value);
    transparent_crc(p_828->g_511.sc, "p_828->g_511.sc", print_hash_value);
    transparent_crc(p_828->g_511.sd, "p_828->g_511.sd", print_hash_value);
    transparent_crc(p_828->g_511.se, "p_828->g_511.se", print_hash_value);
    transparent_crc(p_828->g_511.sf, "p_828->g_511.sf", print_hash_value);
    transparent_crc(p_828->g_512.s0, "p_828->g_512.s0", print_hash_value);
    transparent_crc(p_828->g_512.s1, "p_828->g_512.s1", print_hash_value);
    transparent_crc(p_828->g_512.s2, "p_828->g_512.s2", print_hash_value);
    transparent_crc(p_828->g_512.s3, "p_828->g_512.s3", print_hash_value);
    transparent_crc(p_828->g_512.s4, "p_828->g_512.s4", print_hash_value);
    transparent_crc(p_828->g_512.s5, "p_828->g_512.s5", print_hash_value);
    transparent_crc(p_828->g_512.s6, "p_828->g_512.s6", print_hash_value);
    transparent_crc(p_828->g_512.s7, "p_828->g_512.s7", print_hash_value);
    transparent_crc(p_828->g_514.x, "p_828->g_514.x", print_hash_value);
    transparent_crc(p_828->g_514.y, "p_828->g_514.y", print_hash_value);
    transparent_crc(p_828->g_517.x, "p_828->g_517.x", print_hash_value);
    transparent_crc(p_828->g_517.y, "p_828->g_517.y", print_hash_value);
    transparent_crc(p_828->g_525, "p_828->g_525", print_hash_value);
    transparent_crc(p_828->g_528.f0, "p_828->g_528.f0", print_hash_value);
    transparent_crc(p_828->g_528.f1, "p_828->g_528.f1", print_hash_value);
    transparent_crc(p_828->g_528.f2, "p_828->g_528.f2", print_hash_value);
    transparent_crc(p_828->g_528.f3, "p_828->g_528.f3", print_hash_value);
    transparent_crc(p_828->g_528.f4, "p_828->g_528.f4", print_hash_value);
    transparent_crc(p_828->g_528.f5, "p_828->g_528.f5", print_hash_value);
    transparent_crc(p_828->g_528.f6, "p_828->g_528.f6", print_hash_value);
    transparent_crc(p_828->g_566.f0, "p_828->g_566.f0", print_hash_value);
    transparent_crc(p_828->g_566.f1, "p_828->g_566.f1", print_hash_value);
    transparent_crc(p_828->g_566.f2, "p_828->g_566.f2", print_hash_value);
    transparent_crc(p_828->g_566.f3, "p_828->g_566.f3", print_hash_value);
    transparent_crc(p_828->g_566.f4, "p_828->g_566.f4", print_hash_value);
    transparent_crc(p_828->g_566.f5, "p_828->g_566.f5", print_hash_value);
    transparent_crc(p_828->g_566.f6, "p_828->g_566.f6", print_hash_value);
    transparent_crc(p_828->g_586, "p_828->g_586", print_hash_value);
    transparent_crc(p_828->g_602.x, "p_828->g_602.x", print_hash_value);
    transparent_crc(p_828->g_602.y, "p_828->g_602.y", print_hash_value);
    transparent_crc(p_828->g_602.z, "p_828->g_602.z", print_hash_value);
    transparent_crc(p_828->g_602.w, "p_828->g_602.w", print_hash_value);
    transparent_crc(p_828->g_669.f0, "p_828->g_669.f0", print_hash_value);
    transparent_crc(p_828->g_669.f1, "p_828->g_669.f1", print_hash_value);
    transparent_crc(p_828->g_669.f2, "p_828->g_669.f2", print_hash_value);
    transparent_crc(p_828->g_669.f3, "p_828->g_669.f3", print_hash_value);
    transparent_crc(p_828->g_669.f4, "p_828->g_669.f4", print_hash_value);
    transparent_crc(p_828->g_669.f5, "p_828->g_669.f5", print_hash_value);
    transparent_crc(p_828->g_669.f6, "p_828->g_669.f6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_828->g_728[i][j].f0, "p_828->g_728[i][j].f0", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f1, "p_828->g_728[i][j].f1", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f2, "p_828->g_728[i][j].f2", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f3, "p_828->g_728[i][j].f3", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f4, "p_828->g_728[i][j].f4", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f5, "p_828->g_728[i][j].f5", print_hash_value);
            transparent_crc(p_828->g_728[i][j].f6, "p_828->g_728[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_828->g_762.x, "p_828->g_762.x", print_hash_value);
    transparent_crc(p_828->g_762.y, "p_828->g_762.y", print_hash_value);
    transparent_crc(p_828->g_762.z, "p_828->g_762.z", print_hash_value);
    transparent_crc(p_828->g_762.w, "p_828->g_762.w", print_hash_value);
    transparent_crc(p_828->g_786.x, "p_828->g_786.x", print_hash_value);
    transparent_crc(p_828->g_786.y, "p_828->g_786.y", print_hash_value);
    transparent_crc(p_828->g_786.z, "p_828->g_786.z", print_hash_value);
    transparent_crc(p_828->g_786.w, "p_828->g_786.w", print_hash_value);
    transparent_crc(p_828->g_788.x, "p_828->g_788.x", print_hash_value);
    transparent_crc(p_828->g_788.y, "p_828->g_788.y", print_hash_value);
    transparent_crc(p_828->g_788.z, "p_828->g_788.z", print_hash_value);
    transparent_crc(p_828->g_788.w, "p_828->g_788.w", print_hash_value);
    transparent_crc(p_828->g_789.x, "p_828->g_789.x", print_hash_value);
    transparent_crc(p_828->g_789.y, "p_828->g_789.y", print_hash_value);
    transparent_crc(p_828->g_790.s0, "p_828->g_790.s0", print_hash_value);
    transparent_crc(p_828->g_790.s1, "p_828->g_790.s1", print_hash_value);
    transparent_crc(p_828->g_790.s2, "p_828->g_790.s2", print_hash_value);
    transparent_crc(p_828->g_790.s3, "p_828->g_790.s3", print_hash_value);
    transparent_crc(p_828->g_790.s4, "p_828->g_790.s4", print_hash_value);
    transparent_crc(p_828->g_790.s5, "p_828->g_790.s5", print_hash_value);
    transparent_crc(p_828->g_790.s6, "p_828->g_790.s6", print_hash_value);
    transparent_crc(p_828->g_790.s7, "p_828->g_790.s7", print_hash_value);
    transparent_crc(p_828->g_790.s8, "p_828->g_790.s8", print_hash_value);
    transparent_crc(p_828->g_790.s9, "p_828->g_790.s9", print_hash_value);
    transparent_crc(p_828->g_790.sa, "p_828->g_790.sa", print_hash_value);
    transparent_crc(p_828->g_790.sb, "p_828->g_790.sb", print_hash_value);
    transparent_crc(p_828->g_790.sc, "p_828->g_790.sc", print_hash_value);
    transparent_crc(p_828->g_790.sd, "p_828->g_790.sd", print_hash_value);
    transparent_crc(p_828->g_790.se, "p_828->g_790.se", print_hash_value);
    transparent_crc(p_828->g_790.sf, "p_828->g_790.sf", print_hash_value);
    transparent_crc(p_828->g_798.s0, "p_828->g_798.s0", print_hash_value);
    transparent_crc(p_828->g_798.s1, "p_828->g_798.s1", print_hash_value);
    transparent_crc(p_828->g_798.s2, "p_828->g_798.s2", print_hash_value);
    transparent_crc(p_828->g_798.s3, "p_828->g_798.s3", print_hash_value);
    transparent_crc(p_828->g_798.s4, "p_828->g_798.s4", print_hash_value);
    transparent_crc(p_828->g_798.s5, "p_828->g_798.s5", print_hash_value);
    transparent_crc(p_828->g_798.s6, "p_828->g_798.s6", print_hash_value);
    transparent_crc(p_828->g_798.s7, "p_828->g_798.s7", print_hash_value);
    transparent_crc(p_828->g_798.s8, "p_828->g_798.s8", print_hash_value);
    transparent_crc(p_828->g_798.s9, "p_828->g_798.s9", print_hash_value);
    transparent_crc(p_828->g_798.sa, "p_828->g_798.sa", print_hash_value);
    transparent_crc(p_828->g_798.sb, "p_828->g_798.sb", print_hash_value);
    transparent_crc(p_828->g_798.sc, "p_828->g_798.sc", print_hash_value);
    transparent_crc(p_828->g_798.sd, "p_828->g_798.sd", print_hash_value);
    transparent_crc(p_828->g_798.se, "p_828->g_798.se", print_hash_value);
    transparent_crc(p_828->g_798.sf, "p_828->g_798.sf", print_hash_value);
    transparent_crc(p_828->v_collective, "p_828->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 13; i++)
            transparent_crc(p_828->g_special_values[i + 13 * get_linear_group_id()], "p_828->g_special_values[i + 13 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 13; i++)
            transparent_crc(p_828->l_special_values[i], "p_828->l_special_values[i]", print_hash_value);
    transparent_crc(p_828->l_comm_values[get_linear_local_id()], "p_828->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_828->g_comm_values[get_linear_group_id() * 69 + get_linear_local_id()], "p_828->g_comm_values[get_linear_group_id() * 69 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
