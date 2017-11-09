// --atomics 69 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,42,4 -l 2,14,2
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

__constant uint32_t permutations[10][56] = {
{55,5,9,47,37,48,50,25,4,51,14,20,2,33,21,29,42,54,40,28,0,41,36,13,44,45,38,19,30,11,12,17,23,46,35,24,43,31,6,27,52,22,3,49,53,10,18,8,15,16,26,39,1,34,32,7}, // permutation 0
{5,44,41,7,10,37,20,29,9,14,33,52,15,13,39,16,24,51,34,55,31,49,54,23,35,43,8,17,6,50,26,38,25,46,3,0,47,18,27,42,2,45,22,30,21,36,11,53,12,40,4,1,19,32,48,28}, // permutation 1
{52,20,28,17,7,13,43,21,33,37,14,12,39,50,25,32,10,31,4,19,48,44,3,49,41,46,15,22,55,38,54,30,16,26,1,51,53,9,0,8,40,18,27,42,11,36,2,29,24,23,34,45,6,35,5,47}, // permutation 2
{44,18,1,13,21,28,24,22,47,17,9,3,29,30,54,2,8,39,41,11,48,25,55,45,33,7,32,52,23,14,35,31,40,38,10,51,6,20,16,12,50,15,43,26,46,34,5,27,4,19,37,49,36,42,0,53}, // permutation 3
{41,15,34,7,26,37,32,6,2,21,48,44,18,1,30,14,4,29,39,19,49,0,46,53,22,24,51,31,28,27,35,11,8,3,16,47,40,43,54,23,36,38,10,50,20,13,9,17,42,55,45,25,52,12,5,33}, // permutation 4
{45,40,50,25,52,11,42,51,53,30,23,2,20,16,7,3,5,9,10,21,4,39,22,38,46,48,47,43,35,19,29,12,34,0,49,1,24,15,17,8,14,13,32,55,28,18,44,41,27,37,36,31,33,26,6,54}, // permutation 5
{11,37,18,30,35,51,24,12,22,41,2,29,45,34,26,42,9,4,21,7,19,49,17,43,6,14,40,52,54,46,55,1,28,32,16,33,36,0,8,27,15,44,13,5,10,3,31,39,47,38,53,25,20,48,23,50}, // permutation 6
{18,51,45,14,42,28,16,10,31,13,52,6,35,4,43,20,37,2,24,29,53,54,55,49,11,30,15,25,17,23,36,21,50,19,40,8,0,34,48,47,41,1,39,38,5,26,44,7,3,33,12,46,22,9,32,27}, // permutation 7
{12,2,33,3,49,50,23,4,9,31,54,11,45,46,18,27,7,35,42,14,19,13,52,20,53,26,28,51,37,38,15,47,36,16,5,43,41,8,1,29,25,10,40,6,34,32,55,44,30,17,22,24,48,21,39,0}, // permutation 8
{52,30,11,50,47,2,8,14,49,42,21,38,48,22,0,24,5,37,45,16,19,4,13,33,1,31,43,20,53,44,12,39,26,9,23,27,3,40,55,25,15,18,7,17,28,46,10,36,41,34,35,54,29,32,6,51} // permutation 9
};

// Seed: 832522930

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   int64_t  f1;
   int64_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int64_t  f5;
   uint16_t  f6;
   volatile uint32_t  f7;
   int32_t  f8;
   int8_t  f9;
};

struct S1 {
    VECTOR(uint8_t, 2) g_24;
    VECTOR(uint8_t, 8) g_27;
    uint32_t g_47;
    int32_t g_88;
    int32_t *g_87;
    volatile uint8_t g_90[9];
    volatile uint8_t * volatile g_89[1][4];
    volatile VECTOR(uint32_t, 2) g_93;
    uint32_t g_97;
    VECTOR(uint16_t, 2) g_106;
    uint32_t g_123[6];
    VECTOR(int16_t, 2) g_142;
    uint8_t g_155[8][5];
    uint64_t g_157;
    int8_t g_174[4];
    uint32_t g_175;
    uint32_t g_177;
    int32_t g_189;
    uint64_t *g_192;
    int8_t g_195[9][9];
    VECTOR(uint8_t, 16) g_197;
    VECTOR(int16_t, 8) g_199;
    VECTOR(int16_t, 4) g_221;
    int32_t **g_225;
    int32_t ***g_224;
    VECTOR(int64_t, 4) g_241;
    VECTOR(int64_t, 4) g_242;
    VECTOR(uint16_t, 8) g_259;
    VECTOR(uint32_t, 8) g_287;
    struct S0 g_306;
    uint8_t g_315;
    int64_t g_333;
    uint32_t g_334;
    int32_t g_339;
    uint16_t g_341;
    uint8_t *g_348;
    uint16_t g_351;
    uint64_t g_368;
    int8_t g_392;
    int8_t g_393;
    uint8_t g_396;
    uint32_t g_399;
    int16_t g_406;
    uint32_t g_411[6];
    VECTOR(uint64_t, 2) g_420;
    VECTOR(int8_t, 8) g_435;
    uint64_t g_440;
    uint8_t g_448;
    uint8_t g_450;
    uint16_t g_514;
    VECTOR(uint16_t, 4) g_520;
    VECTOR(uint16_t, 16) g_522;
    VECTOR(int16_t, 8) g_530;
    VECTOR(int16_t, 16) g_531;
    uint64_t g_538;
    VECTOR(uint16_t, 4) g_539;
    VECTOR(uint16_t, 16) g_540;
    VECTOR(uint64_t, 16) g_541;
    uint16_t *g_564;
    volatile int64_t g_578;
    volatile struct S0 g_582;
    volatile int16_t * volatile * volatile g_594;
    struct S0 g_641;
    struct S0 g_643[4];
    VECTOR(int8_t, 4) g_670;
    volatile struct S0 g_699;
    int16_t *g_732;
    int16_t **g_731[5][6][8];
    volatile struct S0 g_746;
    VECTOR(int64_t, 16) g_754;
    int32_t g_777[5];
    volatile int16_t g_779;
    volatile int32_t g_780[8][4][8];
    volatile uint32_t g_783;
    volatile struct S0 g_790;
    volatile struct S0 g_798;
    volatile VECTOR(int16_t, 16) g_808;
    int32_t *g_823;
    int32_t g_825[6][7][5];
    struct S0 * volatile g_826;
    VECTOR(uint64_t, 16) g_861;
    volatile VECTOR(int32_t, 2) g_865;
    VECTOR(int32_t, 16) g_867;
    uint16_t g_870;
    volatile struct S0 g_881[9];
    volatile struct S0 ** volatile g_882;
    struct S0 *g_887[4][3];
    struct S0 ** volatile g_886;
    volatile VECTOR(int32_t, 2) g_897;
    volatile VECTOR(int32_t, 8) g_898;
    volatile VECTOR(int8_t, 2) g_903;
    volatile VECTOR(int16_t, 8) g_929;
    VECTOR(int32_t, 2) g_938;
    VECTOR(int32_t, 2) g_942;
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
uint64_t  func_1(struct S1 * p_953);
int8_t  func_13(int32_t  p_14, uint16_t  p_15, int32_t  p_16, uint16_t  p_17, struct S1 * p_953);
int32_t * func_50(int32_t * p_51, uint32_t  p_52, uint16_t  p_53, struct S1 * p_953);
int32_t * func_54(int64_t  p_55, int32_t * p_56, int32_t * p_57, struct S1 * p_953);
int32_t * func_58(int32_t  p_59, struct S1 * p_953);
uint64_t  func_74(int64_t  p_75, int32_t * p_76, int32_t * p_77, uint32_t  p_78, struct S1 * p_953);
uint16_t  func_80(uint8_t * p_81, int32_t  p_82, int8_t  p_83, int32_t * p_84, int8_t  p_85, struct S1 * p_953);
uint8_t  func_115(int16_t  p_116, struct S1 * p_953);
uint32_t  func_130(int64_t  p_131, uint32_t * p_132, struct S1 * p_953);
uint16_t  func_138(uint32_t  p_139, struct S1 * p_953);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_953->g_comm_values p_953->g_24 p_953->g_27 p_953->l_comm_values p_953->g_47 p_953->g_87 p_953->g_89 p_953->g_93 p_953->g_97 p_953->g_106 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_241 p_953->g_348 p_953->g_450 p_953->g_333 p_953->g_259 p_953->g_435 p_953->g_155 p_953->g_514 p_953->g_224 p_953->g_225 p_953->g_520 p_953->g_522 p_953->g_530 p_953->g_531 p_953->g_315 p_953->g_406 p_953->g_306.f9 p_953->g_539 p_953->g_540 p_953->g_541 p_953->g_287 p_953->g_157 p_953->g_177 p_953->g_174 p_953->g_334 p_953->g_242 p_953->g_396 p_953->g_582 p_953->g_594 p_953->g_641 p_953->g_783 p_953->g_699 p_953->g_798 p_953->g_790.f7 p_953->g_808 p_953->g_197 p_953->g_199 p_953->g_823 p_953->g_339 p_953->g_670 p_953->g_643 p_953->g_826 p_953->g_420 p_953->g_578 p_953->g_564 p_953->g_306.f6 p_953->g_732 p_953->g_861 p_953->g_411 p_953->g_865 p_953->g_867 p_953->g_870 p_953->g_881 p_953->g_886 p_953->g_897 p_953->g_898 p_953->g_903 p_953->g_175 p_953->g_189 p_953->g_790.f0 p_953->g_777 p_953->g_341 p_953->g_929 p_953->g_938 p_953->g_942 p_953->g_306.f1 p_953->g_448
 * writes: p_953->g_27 p_953->g_47 p_953->g_97 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_348 p_953->g_306.f6 p_953->g_341 p_953->g_440 p_953->g_450 p_953->g_514 p_953->g_87 p_953->g_406 p_953->g_306.f8 p_953->g_538 p_953->g_142 p_953->g_174 p_953->g_334 p_953->g_564 p_953->g_582 p_953->g_189 p_953->g_643 p_953->g_783 p_953->g_175 p_953->g_306.f9 p_953->g_790 p_953->g_411 p_953->g_641.f8 p_953->g_641.f5 p_953->g_887 p_953->g_867
 */
uint64_t  func_1(struct S1 * p_953)
{ /* block id: 4 */
    uint32_t l_2 = 0UL;
    VECTOR(uint8_t, 2) l_28 = (VECTOR(uint8_t, 2))(0x8EL, 0x12L);
    uint8_t *l_35 = (void*)0;
    uint8_t *l_36 = (void*)0;
    uint8_t *l_37 = (void*)0;
    uint8_t *l_38 = (void*)0;
    uint8_t *l_39[1];
    int32_t l_40 = 0x63F78CAFL;
    VECTOR(uint8_t, 4) l_67 = (VECTOR(uint8_t, 4))(0xBCL, (VECTOR(uint8_t, 2))(0xBCL, 248UL), 248UL);
    int32_t *l_824[9][7] = {{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]},{(void*)0,&p_953->g_825[0][0][1],&p_953->g_825[4][3][2],&p_953->g_825[0][0][1],(void*)0,(void*)0,&p_953->g_825[0][0][1]}};
    VECTOR(int16_t, 2) l_860 = (VECTOR(int16_t, 2))(1L, 0L);
    VECTOR(int8_t, 8) l_879 = (VECTOR(int8_t, 8))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x68L), 0x68L), 0x68L, 0x29L, 0x68L);
    VECTOR(uint16_t, 2) l_880 = (VECTOR(uint16_t, 2))(65535UL, 0x15DAL);
    uint64_t *l_911[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_930 = 0xCBAEAD90L;
    VECTOR(uint32_t, 16) l_931 = (VECTOR(uint32_t, 16))(0xA07246D1L, (VECTOR(uint32_t, 4))(0xA07246D1L, (VECTOR(uint32_t, 2))(0xA07246D1L, 0xE9E25941L), 0xE9E25941L), 0xE9E25941L, 0xA07246D1L, 0xE9E25941L, (VECTOR(uint32_t, 2))(0xA07246D1L, 0xE9E25941L), (VECTOR(uint32_t, 2))(0xA07246D1L, 0xE9E25941L), 0xA07246D1L, 0xE9E25941L, 0xA07246D1L, 0xE9E25941L);
    uint32_t *l_939 = &p_953->g_47;
    struct S0 **l_951 = (void*)0;
    uint16_t l_952 = 0x2425L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_39[i] = (void*)0;
    l_2++;
    if ((0x6A66L || ((l_2 > (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_953->g_27.s1 = (safe_mul_func_int8_t_s_s(func_13(l_2, p_953->g_comm_values[p_953->tid], (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((l_2 && ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x90L, 250UL, ((VECTOR(uint8_t, 4))((safe_div_func_uint16_t_u_u(l_2, 0x2BB2L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_953->g_24.xyxy)), (GROUP_DIVERGE(1, 1) & l_2), (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x2BL, 1UL)).hi, 0x95L, 0x1DL, 0x6FL)).yzxyyywx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 4))(0xBBL, 0x25L, 255UL, 246UL)).wyywxywzzxwzwxyz, ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(1UL, ((VECTOR(uint8_t, 2))(0UL, 2UL)), 0x9BL)).zzwzwxxwyzyyxzxw, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(p_953->g_27.s12)).xyyyxyyxxxxxxyxx, ((VECTOR(uint8_t, 2))(0x49L, 255UL)).xyyyyxyxyyxyxyxy))), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_28.yxyxxyxyyyxxxxxy)).s16)).xyyx, (uint8_t)(p_953->g_27.s0 = ((safe_rshift_func_int16_t_s_s((p_953->g_27.s4 && l_2), l_28.y)) , p_953->g_comm_values[p_953->tid]))))).xxzyyxzyyzxwxywx)))))))).s26)).xyyxxyxx))))).s3, p_953->g_comm_values[p_953->tid])), ((VECTOR(uint8_t, 4))(0UL)), FAKE_DIVERGE(p_953->group_1_offset, get_group_id(1), 10), l_2, l_2, 255UL, 0UL, 253UL)).sc6)), 1UL)), 0x5BL, 0UL)).s74)).odd) != p_953->l_comm_values[(safe_mod_func_uint32_t_u_u(p_953->tid, 56))]) , l_28.x), p_953->g_24.y)), l_28.y)), l_28.x, p_953), p_953->g_comm_values[p_953->tid]))), l_28.x)), 0x95L)) , l_28.y), l_40))) , p_953->g_27.s1)))
    { /* block id: 19 */
        int32_t *l_41 = &l_40;
        int32_t *l_42 = &l_40;
        int32_t *l_43 = &l_40;
        int32_t *l_44 = &l_40;
        int32_t *l_45 = &l_40;
        int32_t l_46 = 0x68EE08A9L;
        uint8_t *l_60 = (void*)0;
        int32_t l_70[10][7][3] = {{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}},{{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L},{0x6D53B0E2L,0x17125C8CL,2L}}};
        int i, j, k;
        p_953->g_47--;
        (*p_953->g_225) = func_50(func_54(l_28.y, func_58((((void*)0 == l_60) < ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((*l_44) = (safe_mod_func_int64_t_s_s(l_28.x, (p_953->g_27.s7 & (safe_add_func_int16_t_s_s((-8L), (safe_lshift_func_int16_t_s_s((-10L), l_28.x)))))))), 0xD9L, 253UL, 255UL)).lo)), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(253UL, 246UL)), 255UL, 0x66L)).xyxxywxwywyzwyzy)).scc66)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(0x92L, 0x36L)).yxxyxyxxxyxxxyxx, ((VECTOR(uint8_t, 2))(l_67.wy)).yyyyxyyxyxxyxxyx))).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x99L, (safe_lshift_func_uint16_t_u_u(0x2F17L, 13)), 0xEDL, 0UL, 1UL, 0x0CL, p_953->g_24.y, ((VECTOR(uint8_t, 2))(0xEBL)), 9UL, 0x44L, l_28.x, ((VECTOR(uint8_t, 2))(255UL)), 255UL, 0xF4L)).odd))))))).s17, ((VECTOR(uint8_t, 2))(0x4CL))))), 0x7FL)).s71)), l_70[2][6][0], 0xE9L, GROUP_DIVERGE(2, 1), p_953->g_27.s2, 0x50L, 9UL)), ((VECTOR(uint8_t, 8))(0x4AL))))).s37))).xxxyxxxxyxxxyxyx, ((VECTOR(uint8_t, 16))(0x93L))))).se), p_953), l_824[6][5], p_953), p_953->g_339, p_953->g_670.x, p_953);
    }
    else
    { /* block id: 332 */
        struct S0 *l_828 = &p_953->g_643[3];
        int32_t l_829 = 9L;
        VECTOR(int16_t, 2) l_830 = (VECTOR(int16_t, 2))(8L, 0x6EA2L);
        VECTOR(int16_t, 16) l_835 = (VECTOR(int16_t, 16))(0x263EL, (VECTOR(int16_t, 4))(0x263EL, (VECTOR(int16_t, 2))(0x263EL, 7L), 7L), 7L, 0x263EL, 7L, (VECTOR(int16_t, 2))(0x263EL, 7L), (VECTOR(int16_t, 2))(0x263EL, 7L), 0x263EL, 7L, 0x263EL, 7L);
        int16_t l_874 = 0x61A3L;
        VECTOR(int32_t, 2) l_899 = (VECTOR(int32_t, 2))(0L, 0x6B627A13L);
        uint32_t l_912 = 0xCAF25EE6L;
        int i;
        (*l_828) = (*p_953->g_826);
        if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_829 , (((VECTOR(int16_t, 16))(l_830.xxxxxyxyxxxxyxxx)).s5 >= (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(l_835.se39dfbebc8a879fa)).lo, ((VECTOR(int16_t, 8))(8L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0L, 0x7BE6L, (-4L), 4L)).xwzxwzzxxwxwxzzz)).sfe75)), (l_829 , (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((!0x3074A86AC9C30557L), (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((p_953->g_97 = FAKE_DIVERGE(p_953->global_0_offset, get_global_id(0), 10)) & (p_953->g_420.y ^ ((p_953->g_823 == p_953->g_823) != (safe_rshift_func_uint8_t_u_u((!(p_953->g_578 && ((l_830.x , (((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((***p_953->g_224) < (**p_953->g_225)), 0x84C06F16L)) >= 0x95C8L), 15)) , 0x43B9L), (*p_953->g_564))) && l_835.s5) , 0x25F8L)) == 0UL))), 7))))), (*p_953->g_732))), (*p_953->g_564))))), GROUP_DIVERGE(0, 1)))), 5L, 1L))))).s4 <= 0x5E20L) >= l_835.s2) >= (-1L)) <= GROUP_DIVERGE(2, 1)), l_835.s2)), l_830.x)))), ((VECTOR(int32_t, 4))((-8L))), (***p_953->g_224), 0x27F8D8FBL, 0L)))).s4)
        { /* block id: 335 */
            uint32_t l_852 = 4294967295UL;
            return l_852;
        }
        else
        { /* block id: 337 */
            int32_t l_866 = 0x1E695449L;
            struct S0 *l_885 = &p_953->g_306;
            for (p_953->g_641.f8 = 0; (p_953->g_641.f8 <= (-25)); --p_953->g_641.f8)
            { /* block id: 340 */
                if ((*p_953->g_87))
                    break;
                (*p_953->g_225) = (**p_953->g_224);
                if ((*p_953->g_823))
                    continue;
                for (p_953->g_175 = 0; (p_953->g_175 <= 24); ++p_953->g_175)
                { /* block id: 346 */
                    uint16_t **l_859 = &p_953->g_564;
                    uint32_t *l_864 = &p_953->g_411[0];
                    int32_t l_873 = 0L;
                    (*p_953->g_823) &= (safe_add_func_uint32_t_u_u(0xF280E59FL, ((((*l_859) = (void*)0) != &p_953->g_341) >= ((VECTOR(int16_t, 16))(l_860.yxyxyyxyyxxxxxxy)).s7)));
                    (**p_953->g_225) ^= ((l_830.x && ((((VECTOR(uint64_t, 16))(p_953->g_861.s1b89a5d07f712bab)).s3 || (safe_add_func_int32_t_s_s((((*l_864) ^= 0x51EECC3EL) , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_953->g_865.yy)).xyxxyxxyyyxyxxxy)).even))).even)).x || (l_866 ^ l_830.y))), ((VECTOR(int32_t, 2))(p_953->g_867.s60)).hi))) , (l_866 , l_866))) == (((safe_mul_func_uint16_t_u_u(p_953->g_870, l_829)) | (safe_div_func_uint8_t_u_u(l_866, l_873))) , l_874));
                }
            }
            for (p_953->g_641.f5 = (-16); (p_953->g_641.f5 < (-11)); p_953->g_641.f5 = safe_add_func_int8_t_s_s(p_953->g_641.f5, 4))
            { /* block id: 355 */
                int8_t *l_902 = &p_953->g_174[0];
                int32_t l_908[6][8][4] = {{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}},{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}},{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}},{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}},{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}},{{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)},{1L,0x70851FA2L,(-1L),(-1L)}}};
                int i, j, k;
                (**p_953->g_225) = ((safe_div_func_uint16_t_u_u(l_879.s1, ((VECTOR(uint16_t, 4))(l_880.xxxx)).x)) != (-1L));
                if ((*p_953->g_823))
                { /* block id: 357 */
                    (*l_828) = (*p_953->g_826);
                    (*l_828) = p_953->g_881[8];
                }
                else
                { /* block id: 360 */
                    volatile struct S0 *l_884 = &p_953->g_798;
                    volatile struct S0 **l_883 = &l_884;
                    (*l_883) = &p_953->g_699;
                }
                (*p_953->g_886) = l_885;
                atomic_xor(&p_953->l_atomic_reduction[0], (p_953->g_241.x < (safe_sub_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(l_866)), l_866)) != ((((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_953->g_897.yx)).yyxy)).zxxwzyyx)).hi, ((VECTOR(int32_t, 2))(p_953->g_898.s75)).yyxx))).lo)), (-1L), ((VECTOR(int32_t, 4))(l_899.xxxx)))).s0 , l_835.s8) , FAKE_DIVERGE(p_953->global_0_offset, get_global_id(0), 10))) , (safe_div_func_int64_t_s_s(p_953->g_242.y, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((((*l_902) = p_953->g_155[3][4]) ^ ((VECTOR(int8_t, 16))((-4L), 0x3FL, ((VECTOR(int8_t, 8))(p_953->g_903.yxyxyxyy)), (0xFE8E0D56L != ((*p_953->g_87) = ((safe_lshift_func_int16_t_s_u(0x34A8L, (safe_sub_func_uint32_t_u_u(p_953->g_175, FAKE_DIVERGE(p_953->local_2_offset, get_local_id(2), 10))))) ^ (*p_953->g_823)))), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x3DL)), 0x48L)).s8), ((VECTOR(int64_t, 2))(1L)), (-8L))))).y))) ^ l_866), l_908[4][2][0])), p_953->g_641.f8)) & l_830.y), p_953->g_189))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_953->v_collective += p_953->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
        }
        l_899.x = (safe_lshift_func_int16_t_s_s((l_899.x , (p_953->g_790.f0 || ((l_911[6] != l_911[6]) != p_953->g_777[2]))), (((l_912 ^= l_874) < (safe_rshift_func_int16_t_s_s(((GROUP_DIVERGE(0, 1) , ((-1L) || p_953->g_47)) & (safe_rshift_func_int8_t_s_u(0x16L, 3))), 11))) & p_953->g_341)));
        if ((atomic_inc(&p_953->g_atomic_input[69 * get_linear_group_id() + 48]) == 1))
        { /* block id: 372 */
            uint32_t l_917[7] = {0x4DB4BFECL,4294967295UL,0x4DB4BFECL,0x4DB4BFECL,4294967295UL,0x4DB4BFECL,0x4DB4BFECL};
            VECTOR(int8_t, 8) l_918 = (VECTOR(int8_t, 8))(0x0AL, (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, (-1L)), (-1L)), (-1L), 0x0AL, (-1L));
            int8_t l_919 = 0L;
            uint16_t l_920 = 1UL;
            VECTOR(int32_t, 2) l_921 = (VECTOR(int32_t, 2))(0L, 0x5B24258EL);
            uint32_t l_922 = 4294967295UL;
            int64_t l_925 = 4L;
            int64_t *l_924 = &l_925;
            int64_t **l_923[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int64_t **l_926 = &l_924;
            int i, j;
            l_921.x = (l_917[1] , (l_918.s0 , ((l_920 = l_919) , (l_922 |= ((VECTOR(int32_t, 8))(l_921.yxyyxxyy)).s4))));
            l_926 = l_923[1][1];
            unsigned int result = 0;
            int l_917_i0;
            for (l_917_i0 = 0; l_917_i0 < 7; l_917_i0++) {
                result += l_917[l_917_i0];
            }
            result += l_918.s7;
            result += l_918.s6;
            result += l_918.s5;
            result += l_918.s4;
            result += l_918.s3;
            result += l_918.s2;
            result += l_918.s1;
            result += l_918.s0;
            result += l_919;
            result += l_920;
            result += l_921.y;
            result += l_921.x;
            result += l_922;
            result += l_925;
            atomic_add(&p_953->g_special_values[69 * get_linear_group_id() + 48], result);
        }
        else
        { /* block id: 377 */
            (1 + 1);
        }
    }
    p_953->g_867.sc |= (*p_953->g_823);
    (*p_953->g_823) |= ((((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(p_953->g_929.s4645)).z, 0)) & l_930) != ((((VECTOR(uint32_t, 16))(l_931.s1a40d488e0c15cd9)).s4 < (((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(p_953->g_938.yxyxxyyx)).s1, (((*l_939)++) , ((VECTOR(int32_t, 8))(p_953->g_942.yxyxxxxx)).s7))), p_953->g_435.s3)), p_953->g_155[1][2])) , &p_953->g_348) != &p_953->g_348)) == FAKE_DIVERGE(p_953->group_2_offset, get_group_id(2), 10))) >= ((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_s(p_953->g_641.f1, 2)) , (l_951 == l_951)) < p_953->g_306.f1) == (*p_953->g_732)), l_952)) | p_953->g_448) , 0x55E3D0E777C2FA56L) == p_953->g_comm_values[p_953->tid]), p_953->g_comm_values[p_953->tid])), (*p_953->g_732))) != 0xDE4BC46CL));
    return p_953->g_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->l_comm_values p_953->g_24
 * writes:
 */
int8_t  func_13(int32_t  p_14, uint16_t  p_15, int32_t  p_16, uint16_t  p_17, struct S1 * p_953)
{ /* block id: 7 */
    for (p_17 = 27; (p_17 != 8); p_17--)
    { /* block id: 10 */
        for (p_16 = 28; (p_16 != 24); p_16 = safe_sub_func_uint32_t_u_u(p_16, 4))
        { /* block id: 13 */
            if (p_953->l_comm_values[(safe_mod_func_uint32_t_u_u(p_953->tid, 56))])
                break;
        }
    }
    return p_953->g_24.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_643 p_953->g_826
 * writes: p_953->g_643
 */
int32_t * func_50(int32_t * p_51, uint32_t  p_52, uint16_t  p_53, struct S1 * p_953)
{ /* block id: 328 */
    int32_t *l_827[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    int i, j;
    (*p_953->g_826) = p_953->g_643[3];
    return l_827[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_225
 * writes: p_953->g_87
 */
int32_t * func_54(int64_t  p_55, int32_t * p_56, int32_t * p_57, struct S1 * p_953)
{ /* block id: 325 */
    (*p_953->g_225) = p_56;
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_comm_values p_953->l_comm_values p_953->g_24 p_953->g_47 p_953->g_27 p_953->g_87 p_953->g_89 p_953->g_93 p_953->g_97 p_953->g_106 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_241 p_953->g_348 p_953->g_450 p_953->g_333 p_953->g_259 p_953->g_435 p_953->g_155 p_953->g_514 p_953->g_224 p_953->g_225 p_953->g_520 p_953->g_522 p_953->g_530 p_953->g_531 p_953->g_315 p_953->g_406 p_953->g_306.f9 p_953->g_539 p_953->g_540 p_953->g_541 p_953->g_287 p_953->g_157 p_953->g_177 p_953->g_174 p_953->g_334 p_953->g_242 p_953->g_396 p_953->g_582 p_953->g_594 p_953->g_641 p_953->g_783 p_953->g_699 p_953->g_798 p_953->g_790.f7 p_953->g_808 p_953->g_197 p_953->g_199 p_953->g_823
 * writes: p_953->g_97 p_953->g_27 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_348 p_953->g_306.f6 p_953->g_341 p_953->g_440 p_953->g_450 p_953->g_514 p_953->g_87 p_953->g_406 p_953->g_306.f8 p_953->g_538 p_953->g_142 p_953->g_174 p_953->g_334 p_953->g_564 p_953->g_582 p_953->g_189 p_953->g_643 p_953->g_783 p_953->g_175 p_953->g_306.f9 p_953->g_790 p_953->g_411
 */
int32_t * func_58(int32_t  p_59, struct S1 * p_953)
{ /* block id: 22 */
    uint32_t l_73 = 0xE8FF3A2FL;
    uint8_t *l_86 = (void*)0;
    int8_t *l_545 = &p_953->g_174[0];
    int32_t *l_546 = (void*)0;
    uint64_t l_547 = 0xBA62748F77146BCEL;
    int32_t l_822[6][10] = {{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L},{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L},{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L},{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L},{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L},{0L,0x0463E138L,0x09D5FE7AL,0x6A77EE21L,1L,0L,0x6A77EE21L,1L,0x6A77EE21L,0L}};
    int i, j;
    l_822[1][9] &= (((safe_sub_func_int64_t_s_s((l_73 < func_13(p_59, p_59, l_73, p_953->g_comm_values[p_953->tid], p_953)), func_74((safe_unary_minus_func_int16_t_s(((((*l_545) ^= (p_953->g_47 > func_13(((p_953->g_27.s6 , (func_80(l_86, p_953->g_27.s0, p_953->g_24.y, p_953->g_87, p_953->g_comm_values[p_953->tid], p_953) == 4L)) , p_59), p_953->g_157, p_953->g_177, p_953->g_539.w, p_953))) >= 0x3BL) ^ l_73))), l_546, l_546, l_547, p_953))) >= p_59) & 0x56L);
    return p_953->g_823;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_334 p_953->g_225 p_953->g_87 p_953->g_224 p_953->g_242 p_953->g_396 p_953->g_582 p_953->g_88 p_953->g_594 p_953->g_641 p_953->g_783 p_953->g_699 p_953->g_798 p_953->g_790.f7 p_953->g_808 p_953->g_197 p_953->g_199 p_953->g_514 p_953->g_comm_values
 * writes: p_953->g_334 p_953->g_87 p_953->g_348 p_953->g_564 p_953->g_582 p_953->g_88 p_953->g_189 p_953->g_643 p_953->g_783 p_953->g_175 p_953->g_306.f9 p_953->g_790 p_953->g_411 p_953->g_514
 */
uint64_t  func_74(int64_t  p_75, int32_t * p_76, int32_t * p_77, uint32_t  p_78, struct S1 * p_953)
{ /* block id: 186 */
    int16_t l_559 = 1L;
    uint16_t *l_560[3];
    int32_t l_593 = 0x3FA0CD9AL;
    uint64_t *l_696 = (void*)0;
    int16_t *l_730 = &l_559;
    int16_t **l_729 = &l_730;
    VECTOR(int64_t, 8) l_761 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
    struct S0 *l_769 = (void*)0;
    struct S0 **l_768 = &l_769;
    int32_t l_778 = 0x28D4D776L;
    uint32_t l_817 = 3UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_560[i] = (void*)0;
    for (p_953->g_334 = (-25); (p_953->g_334 != 48); ++p_953->g_334)
    { /* block id: 189 */
        uint8_t **l_552 = &p_953->g_348;
        int32_t l_555 = 0x315E01A7L;
        VECTOR(uint32_t, 2) l_558 = (VECTOR(uint32_t, 2))(0x41860962L, 1UL);
        uint16_t **l_561 = &l_560[0];
        uint16_t *l_563 = &p_953->g_341;
        uint16_t **l_562[3];
        int32_t *l_565 = &l_555;
        int16_t *l_654 = (void*)0;
        int16_t **l_653 = &l_654;
        int32_t l_664 = 0x64166372L;
        int16_t l_728 = 0x1169L;
        int32_t ****l_818 = &p_953->g_224;
        uint32_t l_819[1][1][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_562[i] = &l_563;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_819[i][j][k] = 0x38178BA9L;
            }
        }
        if ((safe_div_func_int32_t_s_s((((**p_953->g_224) = (*p_953->g_225)) != ((((*l_552) = (void*)0) == (void*)0) , ((p_953->g_242.w & ((((safe_div_func_int16_t_s_s((l_555 ^= 0L), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_558.xyyx)).w, l_559)))) , (p_953->g_564 = ((*l_561) = l_560[0]))) != (void*)0) && 1UL)) , l_565))), p_953->g_396)))
        { /* block id: 195 */
            int16_t l_566 = 0x0CF7L;
            int32_t *l_567 = &l_555;
            int32_t *l_568 = &p_953->g_88;
            int32_t *l_569 = &l_555;
            int32_t *l_570 = (void*)0;
            int32_t *l_571 = &l_555;
            int32_t *l_572 = &p_953->g_88;
            int32_t *l_573 = (void*)0;
            int32_t *l_574 = &p_953->g_88;
            int32_t *l_575 = &l_555;
            int32_t *l_576 = &p_953->g_88;
            int32_t *l_577[5];
            uint8_t l_579 = 0UL;
            int i;
            for (i = 0; i < 5; i++)
                l_577[i] = &p_953->g_88;
            (*p_953->g_225) = (void*)0;
            --l_579;
            p_953->g_582 = p_953->g_582;
        }
        else
        { /* block id: 199 */
            uint32_t l_591 = 4294967294UL;
            int32_t l_592 = 1L;
            int64_t l_686 = 0L;
            int32_t l_781 = 0x2BC91E46L;
            int32_t l_782 = (-6L);
            (**p_953->g_225) ^= ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_75, (l_592 ^= (safe_lshift_func_int8_t_s_u((0x7FL >= l_559), (safe_mul_func_uint8_t_u_u((+l_591), (*l_565)))))))), (l_593 = l_591))) > 0x5F04L);
            if (((p_953->g_594 == (void*)0) ^ ((+l_592) , 0x6D598A00538D2559L)))
            { /* block id: 203 */
                atomic_max(&p_953->g_atomic_reduction[get_linear_group_id()], 8L);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_953->v_collective += p_953->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                (*p_953->g_225) = (void*)0;
                (*p_953->g_225) = p_77;
                return l_593;
            }
            else
            { /* block id: 208 */
                uint16_t l_655 = 0xC317L;
                int32_t l_662 = 1L;
                uint64_t l_733 = 0UL;
                struct S0 *l_745[5][7] = {{&p_953->g_306,&p_953->g_306,&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3]},{&p_953->g_306,&p_953->g_306,&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3]},{&p_953->g_306,&p_953->g_306,&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3]},{&p_953->g_306,&p_953->g_306,&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3]},{&p_953->g_306,&p_953->g_306,&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3],&p_953->g_643[3]}};
                uint8_t **l_774 = &p_953->g_348;
                int32_t *l_776[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_776[i] = &p_953->g_88;
                if ((atomic_inc(&p_953->g_atomic_input[69 * get_linear_group_id() + 67]) == 7))
                { /* block id: 210 */
                    int32_t l_596 = 0x4C97DBDEL;
                    int32_t *l_595 = &l_596;
                    int32_t *l_597 = &l_596;
                    int32_t *l_598[7] = {&l_596,&l_596,&l_596,&l_596,&l_596,&l_596,&l_596};
                    int i;
                    l_595 = (void*)0;
                    l_598[0] = l_597;
                    for (l_596 = 0; (l_596 <= (-7)); l_596 = safe_sub_func_uint8_t_u_u(l_596, 8))
                    { /* block id: 215 */
                        VECTOR(int32_t, 4) l_601 = (VECTOR(int32_t, 4))(0x70C8043AL, (VECTOR(int32_t, 2))(0x70C8043AL, 0x6D3A457EL), 0x6D3A457EL);
                        VECTOR(int32_t, 4) l_602 = (VECTOR(int32_t, 4))(0x7B266FF9L, (VECTOR(int32_t, 2))(0x7B266FF9L, 9L), 9L);
                        VECTOR(int32_t, 8) l_603 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-8L)), (-8L)), (-8L), 5L, (-8L));
                        VECTOR(int32_t, 16) l_604 = (VECTOR(int32_t, 16))(0x13FEBA26L, (VECTOR(int32_t, 4))(0x13FEBA26L, (VECTOR(int32_t, 2))(0x13FEBA26L, 0x77E728FAL), 0x77E728FAL), 0x77E728FAL, 0x13FEBA26L, 0x77E728FAL, (VECTOR(int32_t, 2))(0x13FEBA26L, 0x77E728FAL), (VECTOR(int32_t, 2))(0x13FEBA26L, 0x77E728FAL), 0x13FEBA26L, 0x77E728FAL, 0x13FEBA26L, 0x77E728FAL);
                        VECTOR(int32_t, 4) l_605 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 4L), 4L);
                        VECTOR(int32_t, 4) l_606 = (VECTOR(int32_t, 4))(0x42CB526CL, (VECTOR(int32_t, 2))(0x42CB526CL, 0x5A66D421L), 0x5A66D421L);
                        VECTOR(int32_t, 2) l_607 = (VECTOR(int32_t, 2))(0L, (-10L));
                        VECTOR(int32_t, 16) l_608 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                        VECTOR(int32_t, 8) l_609 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6058C7ADL), 0x6058C7ADL), 0x6058C7ADL, (-8L), 0x6058C7ADL);
                        VECTOR(int32_t, 8) l_610 = (VECTOR(int32_t, 8))(0x75954DC3L, (VECTOR(int32_t, 4))(0x75954DC3L, (VECTOR(int32_t, 2))(0x75954DC3L, 6L), 6L), 6L, 0x75954DC3L, 6L);
                        VECTOR(int32_t, 16) l_611 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
                        VECTOR(int32_t, 4) l_612 = (VECTOR(int32_t, 4))(0x7ECE2254L, (VECTOR(int32_t, 2))(0x7ECE2254L, 6L), 6L);
                        uint16_t l_613 = 0UL;
                        VECTOR(int16_t, 16) l_614 = (VECTOR(int16_t, 16))(0x3DC6L, (VECTOR(int16_t, 4))(0x3DC6L, (VECTOR(int16_t, 2))(0x3DC6L, 9L), 9L), 9L, 0x3DC6L, 9L, (VECTOR(int16_t, 2))(0x3DC6L, 9L), (VECTOR(int16_t, 2))(0x3DC6L, 9L), 0x3DC6L, 9L, 0x3DC6L, 9L);
                        VECTOR(uint16_t, 2) l_615 = (VECTOR(uint16_t, 2))(65535UL, 65528UL);
                        VECTOR(uint16_t, 8) l_616 = (VECTOR(uint16_t, 8))(0xE10EL, (VECTOR(uint16_t, 4))(0xE10EL, (VECTOR(uint16_t, 2))(0xE10EL, 0x55BBL), 0x55BBL), 0x55BBL, 0xE10EL, 0x55BBL);
                        VECTOR(uint16_t, 16) l_617 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x899AL), 0x899AL), 0x899AL, 0UL, 0x899AL, (VECTOR(uint16_t, 2))(0UL, 0x899AL), (VECTOR(uint16_t, 2))(0UL, 0x899AL), 0UL, 0x899AL, 0UL, 0x899AL);
                        VECTOR(uint16_t, 4) l_618 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3800L), 0x3800L);
                        int16_t l_619 = 0x7CB5L;
                        VECTOR(int32_t, 16) l_620 = (VECTOR(int32_t, 16))(0x336C644DL, (VECTOR(int32_t, 4))(0x336C644DL, (VECTOR(int32_t, 2))(0x336C644DL, (-9L)), (-9L)), (-9L), 0x336C644DL, (-9L), (VECTOR(int32_t, 2))(0x336C644DL, (-9L)), (VECTOR(int32_t, 2))(0x336C644DL, (-9L)), 0x336C644DL, (-9L), 0x336C644DL, (-9L));
                        VECTOR(int32_t, 8) l_621 = (VECTOR(int32_t, 8))(0x5F439485L, (VECTOR(int32_t, 4))(0x5F439485L, (VECTOR(int32_t, 2))(0x5F439485L, 0x75E8D5DDL), 0x75E8D5DDL), 0x75E8D5DDL, 0x5F439485L, 0x75E8D5DDL);
                        int32_t l_622[5][3] = {{0x6444203EL,9L,9L},{0x6444203EL,9L,9L},{0x6444203EL,9L,9L},{0x6444203EL,9L,9L},{0x6444203EL,9L,9L}};
                        int16_t l_623 = 0x42BFL;
                        VECTOR(int32_t, 16) l_624 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int32_t, 2))(0L, (-3L)), (VECTOR(int32_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L));
                        int32_t l_625[3][8] = {{0x2D7251EDL,0x1A74E384L,(-2L),0x1A74E384L,0x2D7251EDL,0x2D7251EDL,0x1A74E384L,(-2L)},{0x2D7251EDL,0x1A74E384L,(-2L),0x1A74E384L,0x2D7251EDL,0x2D7251EDL,0x1A74E384L,(-2L)},{0x2D7251EDL,0x1A74E384L,(-2L),0x1A74E384L,0x2D7251EDL,0x2D7251EDL,0x1A74E384L,(-2L)}};
                        VECTOR(int32_t, 8) l_626 = (VECTOR(int32_t, 8))(0x51CD7375L, (VECTOR(int32_t, 4))(0x51CD7375L, (VECTOR(int32_t, 2))(0x51CD7375L, (-10L)), (-10L)), (-10L), 0x51CD7375L, (-10L));
                        VECTOR(int32_t, 4) l_627 = (VECTOR(int32_t, 4))(0x25AE520FL, (VECTOR(int32_t, 2))(0x25AE520FL, 1L), 1L);
                        int8_t l_628 = 0L;
                        VECTOR(int32_t, 2) l_629 = (VECTOR(int32_t, 2))(0x03BACB27L, 0x230A8324L);
                        int64_t l_630 = 0x445CAFA4342E0ACDL;
                        uint32_t l_631 = 1UL;
                        int32_t l_632 = (-1L);
                        VECTOR(uint16_t, 8) l_633 = (VECTOR(uint16_t, 8))(0x2EE9L, (VECTOR(uint16_t, 4))(0x2EE9L, (VECTOR(uint16_t, 2))(0x2EE9L, 0x9505L), 0x9505L), 0x9505L, 0x2EE9L, 0x9505L);
                        uint32_t l_634[2][8] = {{0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL},{0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL,0xC103A1CCL}};
                        VECTOR(uint64_t, 16) l_635 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x0C134BB4E95CCCFDL), 0x0C134BB4E95CCCFDL), 0x0C134BB4E95CCCFDL, 0UL, 0x0C134BB4E95CCCFDL, (VECTOR(uint64_t, 2))(0UL, 0x0C134BB4E95CCCFDL), (VECTOR(uint64_t, 2))(0UL, 0x0C134BB4E95CCCFDL), 0UL, 0x0C134BB4E95CCCFDL, 0UL, 0x0C134BB4E95CCCFDL);
                        uint8_t l_636 = 0x00L;
                        struct S0 l_637 = {65531UL,0x2147613354CFBD47L,1L,0x6F5E458F744E919EL,1UL,0L,0x6581L,0x1B444764L,0x36EE97DCL,0x45L};/* VOLATILE GLOBAL l_637 */
                        struct S0 l_638 = {0xCD64L,-1L,-6L,0x67EBAF6876E518CEL,2UL,0x51E533F907280689L,65527UL,0x35ACC180L,0x4FD2CCC5L,0x13L};/* VOLATILE GLOBAL l_638 */
                        int i, j;
                        l_603.s2 = ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_601.ywxyzzwz)).s77, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x531477A3L, (-1L))).xxxxyyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x1C26FDCEL, 0x7463CB0FL, 0x5876D9D2L, 0x67CDE46CL)))).wyxxwyzy, ((VECTOR(int32_t, 16))(l_602.wwxxywzzwyxzwywx)).odd))).s3503553342760445)).sa9, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_603.s17157537)).s01, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_604.se7)), 0L, 0x0E817719L)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_605.yzywwyyw)))).s47))))).yyxyyxyx)).s0551241653676615, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_606.xxyywwww)).s2160325735442404)).se281)).xwwzwwyzyzxyxwzw))).sed2d, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x0C7ECD9CL, 0x7BBB87B2L, (-1L), 0x6E067EB8L)).xxxwzwyy)).hi))).odd))).yxxxxxyx, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(0x524CB075L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))((l_601.z = (-1L)), 0x0085C6BEL, 0x6B11F9F8L, 0x459069F2L)).xzwwywzzzwxywxxz))).s6a, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_607.yyxx)).ywxyxxwy, ((VECTOR(int32_t, 8))(l_608.s114fdc36)), ((VECTOR(int32_t, 8))(0x009732DAL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_609.s6114674254275345)).s82)), 0x4628B6C1L, (l_608.s3 = (l_602.z |= ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_610.s2147206531742020)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_611.sf674)).zwzxwzxwzzzwyxxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_612.zz)).yyyy)).lo, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))((FAKE_DIVERGE(p_953->global_2_offset, get_global_id(2), 10) , (l_605.z &= l_613)), 7L, (-3L), (-1L))), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_614.sa9ca8ec8)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(l_615.yyxyyyyyxyxyxyyx)).s2c, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_616.s17707654)), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(l_617.s0ec7302f)).s02))).yxxxxxyxxyxxyyyx)).sf6)).yxyx, ((VECTOR(uint16_t, 2))(l_618.xw)).xxxy))), l_619, ((VECTOR(uint16_t, 2))(65535UL, 0x6FDFL)), 0x1F56L)).sac, ((VECTOR(uint16_t, 4))(0x7A27L, 65535UL, 65526UL, 2UL)).hi))).yxxx)).ywzxyxwz))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), (-10L), ((VECTOR(int32_t, 8))(l_620.s2e5f008a)), 1L, (l_622[0][1] = ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))((-1L), 1L)).yxyyxxxx, ((VECTOR(int32_t, 4))(l_621.s4562)).yzxxxyyy))).s6), l_623, (-1L), 1L, 7L)))).hi)))), ((VECTOR(int32_t, 4))(l_624.s2829)).zywyzwzwwwyzwxxw))).even))), (int32_t)(l_611.sc |= (l_620.s1 &= l_625[0][3]))))), ((VECTOR(int32_t, 4))(0x219D0A20L, (l_621.s6 = (-1L)), 5L, 0x757616D7L)).ywywywyy))).even))).even, ((VECTOR(int32_t, 4))(l_626.s5755)).odd))).xxyx)).hi)).xyxyyxxyxxxyyxyx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x77BC1F5CL, (-1L))).xxxx, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(0x3B9BBA4DL, ((VECTOR(int32_t, 2))(l_627.zy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x118C24D9L, 0x54DEB92EL)), (l_611.s7 = (l_628 = (l_609.s1 ^= 6L))), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_629.yx)).xyyx, (int32_t)0x66ED1FC0L))), l_630, 0L, ((VECTOR(int32_t, 8))(0x4B57AE19L)), 0L, 0x5F3A9B52L)).sd85b, ((VECTOR(int32_t, 4))(0x643801DCL))))), 0x5521ABD1L)), 0x705AE7CCL, l_631, 0x1563625CL, 1L, 0x317DB7EAL)).s11, ((VECTOR(int32_t, 2))(1L)))))))).yyyx, ((VECTOR(int32_t, 4))(0x7FC4C98DL)))))))).yywxxxzwywxzwyzz)))))).s3c, ((VECTOR(int32_t, 2))(0x582756D0L))))).odd)), 0x51110495L, 0x6BF44933L, 0L))))).s01))))), ((VECTOR(int32_t, 2))(0x5261F19EL)), ((VECTOR(int32_t, 2))(0x5E053925L)), 0x0A15A925L)), ((VECTOR(int32_t, 8))(0x23992469L))))).s57, (int32_t)0x4486DB54L))), ((VECTOR(int32_t, 2))((-5L)))))).xyyxyxyy, ((VECTOR(int32_t, 8))(1L))))).s7;
                        l_598[6] = (void*)0;
                        l_634[0][2] ^= (l_633.s1 ^= (l_605.x ^= (l_632 = 0x4265F1EAL)));
                        l_638 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_635.s32203255)).s11)).yyxyyyyxyyxxxxxx)).se , (l_636 , l_637));
                    }
                    unsigned int result = 0;
                    result += l_596;
                    atomic_add(&p_953->g_special_values[69 * get_linear_group_id() + 67], result);
                }
                else
                { /* block id: 235 */
                    (1 + 1);
                }
                for (p_953->g_189 = 28; (p_953->g_189 == 19); p_953->g_189 = safe_sub_func_uint16_t_u_u(p_953->g_189, 1))
                { /* block id: 240 */
                    struct S0 *l_642[10][9] = {{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_953->g_306,(void*)0,&p_953->g_306,(void*)0,(void*)0,(void*)0}};
                    uint32_t *l_648 = (void*)0;
                    int32_t l_663[2];
                    uint8_t *l_665[4][10] = {{&p_953->g_448,&p_953->g_155[7][2],&p_953->g_155[1][2],(void*)0,&p_953->g_155[1][2],&p_953->g_155[7][2],&p_953->g_448,&p_953->g_396,&p_953->g_155[1][2],&p_953->g_155[1][2]},{&p_953->g_448,&p_953->g_155[7][2],&p_953->g_155[1][2],(void*)0,&p_953->g_155[1][2],&p_953->g_155[7][2],&p_953->g_448,&p_953->g_396,&p_953->g_155[1][2],&p_953->g_155[1][2]},{&p_953->g_448,&p_953->g_155[7][2],&p_953->g_155[1][2],(void*)0,&p_953->g_155[1][2],&p_953->g_155[7][2],&p_953->g_448,&p_953->g_396,&p_953->g_155[1][2],&p_953->g_155[1][2]},{&p_953->g_448,&p_953->g_155[7][2],&p_953->g_155[1][2],(void*)0,&p_953->g_155[1][2],&p_953->g_155[7][2],&p_953->g_448,&p_953->g_396,&p_953->g_155[1][2],&p_953->g_155[1][2]}};
                    int32_t l_697 = 4L;
                    struct S0 **l_747 = &l_642[6][8];
                    uint32_t l_764 = 0x0A1DF61AL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_663[i] = 0L;
                    p_953->g_643[3] = p_953->g_641;
                }
                p_953->g_783++;
                if (l_592)
                    break;
            }
            for (p_953->g_175 = 0; (p_953->g_175 >= 28); p_953->g_175 = safe_add_func_uint8_t_u_u(p_953->g_175, 5))
            { /* block id: 287 */
                int8_t l_793 = (-1L);
                int32_t l_794 = 0x5CC1DEAFL;
                uint8_t l_795 = 0x58L;
                for (p_953->g_306.f9 = 22; (p_953->g_306.f9 == (-22)); p_953->g_306.f9--)
                { /* block id: 290 */
                    p_953->g_790 = p_953->g_699;
                    if (p_78)
                        break;
                    if ((**p_953->g_225))
                    { /* block id: 293 */
                        int32_t *l_791 = &l_782;
                        int32_t *l_792[6] = {&l_592,&l_778,&l_592,&l_592,&l_778,&l_592};
                        int i;
                        ++l_795;
                    }
                    else
                    { /* block id: 295 */
                        (*p_953->g_225) = (*p_953->g_225);
                        p_953->g_643[3] = p_953->g_798;
                    }
                    if ((atomic_inc(&p_953->l_atomic_input[25]) == 1))
                    { /* block id: 300 */
                        int32_t l_800 = 1L;
                        int32_t *l_799 = &l_800;
                        int32_t *l_801 = &l_800;
                        l_801 = l_799;
                        unsigned int result = 0;
                        result += l_800;
                        atomic_add(&p_953->l_special_values[25], result);
                    }
                    else
                    { /* block id: 302 */
                        (1 + 1);
                    }
                }
            }
            return p_953->g_790.f7;
        }
        (*l_565) = ((safe_lshift_func_int8_t_s_u(((l_778 = (((((((&l_552 != ((((*l_565) >= GROUP_DIVERGE(0, 1)) ^ ((-7L) <= (safe_rshift_func_uint8_t_u_s(p_78, (((((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((!GROUP_DIVERGE(1, 1)), (p_75 > (safe_lshift_func_int16_t_s_s((*l_565), ((VECTOR(int16_t, 16))(0L, 0x7B63L, 0x2E4DL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_953->g_808.s95d56bea)).hi)), (safe_mul_func_int8_t_s_s(p_75, ((p_953->g_411[0] = (((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(p_78, (*l_565))) < 0xD7L), 3L)), 0x45L)) || l_761.s4) != 0x67E3A369A958969DL)) , p_75))), (-1L), ((VECTOR(int16_t, 4))(0x5999L)), 0x1D9CL, (-1L), 0x2625L)).s5))), 0x0D68L, 65532UL)).odd)).xxxxyyyyxyxxyyyx)).s6 || p_78) || p_953->g_197.s1) , FAKE_DIVERGE(p_953->global_2_offset, get_global_id(2), 10)) == 0x37L) < l_817))))) , &l_552)) >= p_78) >= (*l_565)) , l_818) == l_818) && l_817) & p_953->g_199.s5)) & FAKE_DIVERGE(p_953->group_1_offset, get_group_id(1), 10)), 7)) & l_819[0][0][0]);
        (**p_953->g_224) = &l_778;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_953->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u(l_559, 10))][(safe_mod_func_uint32_t_u_u(p_953->tid, 56))]));
    for (p_953->g_514 = 0; (p_953->g_514 == 8); p_953->g_514 = safe_add_func_int16_t_s_s(p_953->g_514, 2))
    { /* block id: 319 */
        return p_953->g_comm_values[p_953->tid];
    }
    return l_761.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_89 p_953->g_93 p_953->g_97 p_953->g_27 p_953->g_106 p_953->g_87 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_241 p_953->g_348 p_953->g_450 p_953->g_333 p_953->g_259 p_953->g_435 p_953->g_155 p_953->g_514 p_953->g_224 p_953->g_225 p_953->g_520 p_953->g_522 p_953->g_530 p_953->g_531 p_953->g_315 p_953->g_406 p_953->g_306.f9 p_953->g_539 p_953->g_540 p_953->g_541 p_953->g_287
 * writes: p_953->g_97 p_953->g_27 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_348 p_953->g_306.f6 p_953->g_341 p_953->g_440 p_953->g_450 p_953->g_514 p_953->g_87 p_953->g_406 p_953->g_306.f8 p_953->g_538 p_953->g_142
 */
uint16_t  func_80(uint8_t * p_81, int32_t  p_82, int8_t  p_83, int32_t * p_84, int8_t  p_85, struct S1 * p_953)
{ /* block id: 23 */
    uint8_t *l_91 = (void*)0;
    VECTOR(int16_t, 16) l_92 = (VECTOR(int16_t, 16))(0x036DL, (VECTOR(int16_t, 4))(0x036DL, (VECTOR(int16_t, 2))(0x036DL, 0x5D31L), 0x5D31L), 0x5D31L, 0x036DL, 0x5D31L, (VECTOR(int16_t, 2))(0x036DL, 0x5D31L), (VECTOR(int16_t, 2))(0x036DL, 0x5D31L), 0x036DL, 0x5D31L, 0x036DL, 0x5D31L);
    uint32_t *l_96[9] = {&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97,&p_953->g_97};
    int32_t l_98 = 0x5F954543L;
    int32_t l_101 = 0x62955A46L;
    VECTOR(uint32_t, 4) l_102 = (VECTOR(uint32_t, 4))(0x94988135L, (VECTOR(uint32_t, 2))(0x94988135L, 2UL), 2UL);
    VECTOR(uint16_t, 2) l_103 = (VECTOR(uint16_t, 2))(0x05A6L, 0x5659L);
    VECTOR(uint16_t, 16) l_104 = (VECTOR(uint16_t, 16))(0x86D8L, (VECTOR(uint16_t, 4))(0x86D8L, (VECTOR(uint16_t, 2))(0x86D8L, 0x4749L), 0x4749L), 0x4749L, 0x86D8L, 0x4749L, (VECTOR(uint16_t, 2))(0x86D8L, 0x4749L), (VECTOR(uint16_t, 2))(0x86D8L, 0x4749L), 0x86D8L, 0x4749L, 0x86D8L, 0x4749L);
    VECTOR(uint16_t, 16) l_105 = (VECTOR(uint16_t, 16))(0x60C6L, (VECTOR(uint16_t, 4))(0x60C6L, (VECTOR(uint16_t, 2))(0x60C6L, 0x45E1L), 0x45E1L), 0x45E1L, 0x60C6L, 0x45E1L, (VECTOR(uint16_t, 2))(0x60C6L, 0x45E1L), (VECTOR(uint16_t, 2))(0x60C6L, 0x45E1L), 0x60C6L, 0x45E1L, 0x60C6L, 0x45E1L);
    uint8_t *l_109 = (void*)0;
    uint8_t *l_110 = (void*)0;
    uint8_t *l_111 = (void*)0;
    uint8_t *l_112[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 4) l_542 = (VECTOR(uint64_t, 4))(0x8087FA0A190729D9L, (VECTOR(uint64_t, 2))(0x8087FA0A190729D9L, 0UL), 0UL);
    int16_t *l_543[9][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_544 = 0x613F9603L;
    int i, j, k;
    l_544 = ((p_953->g_89[0][2] != (l_91 = p_81)) , (((~(-4L)) >= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))((GROUP_DIVERGE(0, 1) == ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_92.sc889)), 0x62B7L, ((VECTOR(int16_t, 2))(0L, 0L)), 0x0720L)).s6), 0x6CEBAF42L, 4294967286UL, 1UL)).ywxxyzzy, ((VECTOR(uint32_t, 16))(p_953->g_93.yxxyyxyyxxyxxxyy)).even))).s7737174003345063)).hi)).s2323351020176676)).s6) == (((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))((l_101 |= (l_98 &= (p_953->g_97--))), (p_83 == p_953->g_27.s4), 0xA244BBC7L, ((VECTOR(uint32_t, 8))(l_102.xywxzyzx)), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(l_103.yx)), ((VECTOR(uint16_t, 16))(l_104.s91cb9547baeca1bb)).sda))), 0x52A42942L, 4294967289UL, 0xB84CAB45L)).s55, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(l_105.s72)).yxyy, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_953->g_106.yyyx)))).wxxzxzywwwzyyyzz)), ((VECTOR(uint16_t, 2))(8UL, 0x93CCL)).xyyxxxyyxyxyxyxy))).sd6aa, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_mul_func_uint8_t_u_u((!(--p_953->g_27.s2)), func_115(l_105.sa, p_953))), 65526UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x5CB8L, 0xE816L)))), ((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(p_953->g_539.wyyzyzzwzxzzxxyx)).s28db, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x340BL, 6UL)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(9UL, 0x34D4L)))), ((VECTOR(uint16_t, 2))(65532UL, 0x611FL)), 0x2A03L, 0xAB80L)).odd, ((VECTOR(uint16_t, 16))(p_953->g_540.s445fc5a362551601)).s20d0))).odd, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(((((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_953->g_541.s69bd)).wxxxyzxyyxxxywwz)).hi, ((VECTOR(uint64_t, 16))(l_542.wyywzywywzxwyxyx)).even))).s5 == ((VECTOR(int64_t, 16))(0x75525967E2837F0FL, ((VECTOR(int64_t, 2))(0L, 0x1F0B240698A7F41DL)), (((((p_953->g_142.x = p_953->g_520.x) ^ (-1L)) != p_83) < l_105.sd) ^ p_82), ((VECTOR(int64_t, 2))(0x7FF678EB1019DBAFL)), (-1L), 0x374A1D6175D3F2C4L, l_103.y, ((VECTOR(int64_t, 2))(0x0E54417EC245B2AFL)), 0x75C63B57A14252B1L, ((VECTOR(int64_t, 4))(0x593A93FDF6202489L)))).s3) != p_953->g_531.s1), 0x2AL, ((VECTOR(uint8_t, 2))(1UL)), 0x66L, GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 4))(0x99L)), 0xEBL, 0xACL, GROUP_DIVERGE(2, 1), 0UL, 246UL, 0x0CL)).s06, ((VECTOR(uint8_t, 2))(1UL))))))).xyyyyyyxxyxxyyyx, ((VECTOR(uint8_t, 16))(0xA0L))))).s45))), 0UL)))), ((VECTOR(uint16_t, 4))(1UL)), l_92.s6, 65533UL, 65535UL, 65534UL)).odd, ((VECTOR(uint16_t, 8))(0x580DL))))).s37)).yxyy))).zwyxzzxz, ((VECTOR(uint16_t, 8))(0UL))))).s1277141447076540, ((VECTOR(uint16_t, 16))(0xB8ADL))))))).s63))).yyyyxxyyxxyyxxxx, ((VECTOR(uint32_t, 16))(0xF23A64DAL)), ((VECTOR(uint32_t, 16))(0xC13162CBL))))).s0, l_102.x)) , p_84) != p_84) <= 0UL) , p_953->g_287.s6)));
    return p_953->g_406;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_87 p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_241 p_953->g_348 p_953->g_450 p_953->g_333 p_953->g_259 p_953->g_435 p_953->g_155 p_953->g_514 p_953->g_224 p_953->g_225 p_953->g_520 p_953->g_522 p_953->g_530 p_953->g_531 p_953->g_315 p_953->g_406 p_953->g_306.f9
 * writes: p_953->g_88 p_953->g_123 p_953->g_368 p_953->g_348 p_953->g_306.f6 p_953->g_341 p_953->g_440 p_953->g_450 p_953->g_514 p_953->g_87 p_953->g_406 p_953->g_306.f8 p_953->g_538
 */
uint8_t  func_115(int16_t  p_116, struct S1 * p_953)
{ /* block id: 29 */
    int32_t l_120 = 0x0F8F40BAL;
    int32_t l_121 = (-1L);
    int32_t l_122[8][5] = {{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L)}};
    VECTOR(uint8_t, 4) l_196 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0UL), 0UL);
    VECTOR(int8_t, 16) l_484 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x47L), 0x47L), 0x47L, 1L, 0x47L, (VECTOR(int8_t, 2))(1L, 0x47L), (VECTOR(int8_t, 2))(1L, 0x47L), 1L, 0x47L, 1L, 0x47L);
    VECTOR(uint8_t, 8) l_487 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x6DL), 0x6DL), 0x6DL, 8UL, 0x6DL);
    VECTOR(int64_t, 16) l_492 = (VECTOR(int64_t, 16))(0x614122C2887185A8L, (VECTOR(int64_t, 4))(0x614122C2887185A8L, (VECTOR(int64_t, 2))(0x614122C2887185A8L, 0x726C7B0923F2E145L), 0x726C7B0923F2E145L), 0x726C7B0923F2E145L, 0x614122C2887185A8L, 0x726C7B0923F2E145L, (VECTOR(int64_t, 2))(0x614122C2887185A8L, 0x726C7B0923F2E145L), (VECTOR(int64_t, 2))(0x614122C2887185A8L, 0x726C7B0923F2E145L), 0x614122C2887185A8L, 0x726C7B0923F2E145L, 0x614122C2887185A8L, 0x726C7B0923F2E145L);
    int32_t *l_519 = &p_953->g_339;
    VECTOR(uint16_t, 2) l_521 = (VECTOR(uint16_t, 2))(0UL, 65535UL);
    VECTOR(int16_t, 2) l_523 = (VECTOR(int16_t, 2))(7L, 0x6E71L);
    VECTOR(int16_t, 16) l_524 = (VECTOR(int16_t, 16))(0x6D4EL, (VECTOR(int16_t, 4))(0x6D4EL, (VECTOR(int16_t, 2))(0x6D4EL, (-9L)), (-9L)), (-9L), 0x6D4EL, (-9L), (VECTOR(int16_t, 2))(0x6D4EL, (-9L)), (VECTOR(int16_t, 2))(0x6D4EL, (-9L)), 0x6D4EL, (-9L), 0x6D4EL, (-9L));
    VECTOR(int16_t, 4) l_525 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1EAAL), 0x1EAAL);
    VECTOR(uint16_t, 8) l_534 = (VECTOR(uint16_t, 8))(0xF57CL, (VECTOR(uint16_t, 4))(0xF57CL, (VECTOR(uint16_t, 2))(0xF57CL, 0UL), 0UL), 0UL, 0xF57CL, 0UL);
    VECTOR(int64_t, 16) l_535 = (VECTOR(int64_t, 16))(0x5F1DCE3FB34E902BL, (VECTOR(int64_t, 4))(0x5F1DCE3FB34E902BL, (VECTOR(int64_t, 2))(0x5F1DCE3FB34E902BL, 0L), 0L), 0L, 0x5F1DCE3FB34E902BL, 0L, (VECTOR(int64_t, 2))(0x5F1DCE3FB34E902BL, 0L), (VECTOR(int64_t, 2))(0x5F1DCE3FB34E902BL, 0L), 0x5F1DCE3FB34E902BL, 0L, 0x5F1DCE3FB34E902BL, 0L);
    int32_t *l_536 = &p_953->g_306.f8;
    int32_t *l_537[4][9][7] = {{{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]}},{{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]}},{{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]}},{{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]},{(void*)0,(void*)0,&l_122[7][4],&l_122[2][0],&l_121,&l_121,&l_122[4][1]}}};
    int i, j, k;
    for (p_116 = 9; (p_116 >= 27); p_116 = safe_add_func_uint8_t_u_u(p_116, 9))
    { /* block id: 32 */
        int32_t *l_119[6][1] = {{&p_953->g_88},{&p_953->g_88},{&p_953->g_88},{&p_953->g_88},{&p_953->g_88},{&p_953->g_88}};
        int i, j;
        (*p_953->g_87) &= p_116;
        p_953->g_123[0]--;
        for (p_953->g_88 = 3; (p_953->g_88 > 3); p_953->g_88 = safe_add_func_int64_t_s_s(p_953->g_88, 2))
        { /* block id: 37 */
            int32_t *l_193[10] = {&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121,&l_121};
            int8_t *l_194 = &p_953->g_195[4][7];
            int16_t *l_198 = (void*)0;
            int16_t *l_200 = (void*)0;
            int16_t *l_201 = (void*)0;
            uint32_t *l_202 = (void*)0;
            int i;
            (1 + 1);
        }
    }
    for (p_953->g_368 = 19; (p_953->g_368 == 10); p_953->g_368--)
    { /* block id: 162 */
        uint8_t **l_472 = &p_953->g_348;
        uint8_t **l_473 = (void*)0;
        uint8_t *l_475 = &p_953->g_155[2][1];
        uint8_t **l_474 = &l_475;
        uint8_t *l_476 = &p_953->g_315;
        uint16_t *l_477 = &p_953->g_306.f6;
        uint16_t *l_478 = &p_953->g_341;
        uint16_t *l_479[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        uint64_t *l_495 = (void*)0;
        uint64_t *l_496 = &p_953->g_440;
        int32_t l_497 = 0x62ACA16DL;
        int32_t *l_498 = &l_122[0][0];
        int32_t *l_499 = (void*)0;
        int32_t *l_500 = (void*)0;
        int32_t *l_501 = (void*)0;
        int32_t *l_502 = &l_497;
        int32_t *l_503 = &l_122[0][0];
        int32_t *l_504 = &p_953->g_88;
        int32_t *l_505 = &l_122[0][0];
        int32_t *l_506 = &l_122[0][0];
        int32_t *l_507 = &l_122[0][0];
        int32_t *l_508 = &l_120;
        int32_t *l_509 = (void*)0;
        int32_t *l_510 = &l_122[2][4];
        int32_t *l_511 = &l_497;
        int32_t *l_512 = &p_953->g_88;
        int32_t *l_513[7];
        int i, j;
        for (i = 0; i < 7; i++)
            l_513[i] = (void*)0;
        (*p_953->g_87) ^= (((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s(p_116, (((((safe_add_func_uint64_t_u_u(p_116, ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_122[0][0] = ((*l_478) = (+((safe_mod_func_int8_t_s_s(p_116, (safe_mod_func_uint16_t_u_u((((*l_474) = ((*l_472) = &p_953->g_450)) != (l_476 = (void*)0)), ((*l_477) = p_116))))) , p_116)))) , (l_121 = ((*p_953->g_348) = (((safe_mul_func_int16_t_s_s(((((*l_496) = (((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(l_484.s77cfbb92)).s40, ((VECTOR(int8_t, 2))(0x2CL, (-4L)))))).hi, 6)) , p_116) == (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_487.s0202)).z, (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(l_492.s2412)).zyyzyxww, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0x5742E39CD8FEF0D4L)).yxxx)), 6L, (~((safe_mod_func_int64_t_s_s(p_116, (-8L))) <= 18446744073709551613UL)), (-5L), 0x34E2971B4B37FD45L))))), 1L, l_120, (-1L), 0x054DCCC375D1D049L, 1L, l_484.s0, 0x6B7636962805C59EL, 0x79DDF9F80160D09FL)).s8 || p_116), p_953->g_241.w)), 0x31EEL)))))) == 0x5F5E8CBEC45E6D6BL) & l_497), l_497)) | l_492.sa) , (*p_953->g_348))))), FAKE_DIVERGE(p_953->local_1_offset, get_local_id(1), 10))), p_953->g_333)) == p_116), 0x031D3BC1L)), p_116)) != 0x351E6FFAL))) <= 0x0FL) ^ p_953->g_259.s1) | 0x18L) , 0x7EL))))) , p_953->g_241.y) > p_953->g_435.s7) ^ l_497) >= p_953->g_155[1][2]);
        if ((*p_953->g_87))
            break;
        p_953->g_514--;
        (*p_953->g_225) = (**p_953->g_224);
    }
    p_953->g_538 = (((*l_536) = ((((***p_953->g_224) = (safe_mul_func_uint16_t_u_u(((p_953->g_435.s3 > (((**p_953->g_225) , l_519) == &p_953->g_339)) | ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(p_953->g_520.zwzzzyxzwyyzzyxy)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x64DDL, 0xF379L)), 0x2561L, ((VECTOR(uint16_t, 2))(l_521.yx)), ((VECTOR(uint16_t, 2))(p_953->g_522.s8d)), 0xAA94L)), ((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_523.xy)), ((VECTOR(int16_t, 8))(l_524.s901f03b7)).s37, ((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(l_525.xwzw)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0x1348L, 0L)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 4))(0x4746L, 0L, 0L, 0x567BL)), 2L, 0x6E62L, (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(p_953->g_530.s2514)), ((VECTOR(int16_t, 16))(p_953->g_531.se590b6edeb6afdd1)).sda26))).z, (((safe_add_func_int64_t_s_s((p_953->g_315 , ((VECTOR(int64_t, 8))((((VECTOR(uint16_t, 8))(l_534.s33402030)).s0 >= (p_953->g_406 &= p_116)), p_953->g_306.f9, 0x63BF303B75086393L, ((VECTOR(int64_t, 2))(l_535.s0e)), 5L, 1L, 0x20F8008E90DAB274L)).s1), (((VECTOR(int16_t, 4))(0x73C6L, 0x7BE0L, (-3L), (-1L))).z >= p_116))) > p_116) | p_116))), 0x5819B2ECL)), ((VECTOR(int16_t, 4))(0x2387L)), l_524.s8, l_122[1][1], 7L, 1L)))).s38)).xyyx, ((VECTOR(int16_t, 4))(0L))))).hi))).yyxx, ((VECTOR(int16_t, 4))(0x2572L))))).hi, ((VECTOR(int16_t, 2))(0x06E3L))))), 1L)).s20))), ((VECTOR(int16_t, 2))(0x60DDL))))).xyyx)))).even, (uint16_t)p_116))), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(0xAE54L))))).xyyyyxyy))).s1), 0L))) || 0x2092BADAL) & p_953->g_241.x)) , l_521.y);
    return p_116;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_189 p_953->g_177 p_953->g_197 p_953->g_306.f2 p_953->g_225 p_953->g_87 p_953->g_224 p_953->g_411 p_953->g_420 p_953->g_88 p_953->g_333 p_953->g_339 p_953->g_351 p_953->g_435 p_953->g_123 p_953->g_195 p_953->g_155 p_953->g_396 p_953->g_440 p_953->g_306.f0
 * writes: p_953->g_189 p_953->g_175 p_953->g_306.f2 p_953->g_87 p_953->g_411 p_953->g_333 p_953->g_195 p_953->g_155 p_953->g_396 p_953->g_351 p_953->g_448
 */
uint32_t  func_130(int64_t  p_131, uint32_t * p_132, struct S1 * p_953)
{ /* block id: 49 */
    VECTOR(int32_t, 8) l_208 = (VECTOR(int32_t, 8))(0x2F36F420L, (VECTOR(int32_t, 4))(0x2F36F420L, (VECTOR(int32_t, 2))(0x2F36F420L, (-4L)), (-4L)), (-4L), 0x2F36F420L, (-4L));
    VECTOR(int32_t, 2) l_209 = (VECTOR(int32_t, 2))(0L, 0L);
    int32_t l_230 = 0x07D645D2L;
    int32_t l_232 = 0x28C4036EL;
    uint16_t l_251[4];
    int32_t *l_277 = (void*)0;
    VECTOR(uint32_t, 16) l_288 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 4294967295UL, 0UL, 4294967295UL, 0UL);
    VECTOR(uint16_t, 8) l_301 = (VECTOR(uint16_t, 8))(0xA55AL, (VECTOR(uint16_t, 4))(0xA55AL, (VECTOR(uint16_t, 2))(0xA55AL, 0xE6C3L), 0xE6C3L), 0xE6C3L, 0xA55AL, 0xE6C3L);
    uint64_t *l_359 = &p_953->g_157;
    int64_t l_365 = (-1L);
    int32_t ***l_366 = &p_953->g_225;
    uint64_t *l_367 = &p_953->g_157;
    int32_t **l_382 = &l_277;
    int64_t *l_425 = (void*)0;
    int64_t *l_426 = &p_953->g_333;
    VECTOR(uint16_t, 16) l_431 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    VECTOR(int8_t, 2) l_434 = (VECTOR(int8_t, 2))((-1L), 0x33L);
    int8_t *l_436 = &p_953->g_195[1][7];
    int64_t *l_437 = &l_365;
    uint8_t *l_438 = &p_953->g_155[7][2];
    uint8_t *l_439 = &p_953->g_396;
    uint16_t *l_441 = (void*)0;
    uint16_t *l_442 = (void*)0;
    uint16_t *l_443 = (void*)0;
    uint16_t *l_444 = (void*)0;
    uint16_t *l_445 = (void*)0;
    uint16_t *l_446[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_447[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int16_t l_449 = 0L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_251[i] = 0UL;
    for (p_953->g_189 = (-2); (p_953->g_189 != (-10)); p_953->g_189 = safe_sub_func_uint64_t_u_u(p_953->g_189, 1))
    { /* block id: 52 */
        int32_t l_205[9][2] = {{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L},{0x02E33435L,0x516FDD71L}};
        int32_t **l_212 = &p_953->g_87;
        int32_t ***l_213 = (void*)0;
        int32_t ***l_214 = &l_212;
        int32_t ****l_226 = (void*)0;
        int32_t ****l_227 = &p_953->g_224;
        int16_t *l_228 = (void*)0;
        int16_t *l_229[2][4][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t *l_231 = &p_953->g_175;
        int32_t *l_233 = (void*)0;
        int32_t *l_234 = &l_205[6][0];
        int32_t *l_235[4];
        VECTOR(int16_t, 8) l_243 = (VECTOR(int16_t, 8))(0x488BL, (VECTOR(int16_t, 4))(0x488BL, (VECTOR(int16_t, 2))(0x488BL, 0x3E16L), 0x3E16L), 0x3E16L, 0x488BL, 0x3E16L);
        VECTOR(uint16_t, 4) l_244 = (VECTOR(uint16_t, 4))(0xCF20L, (VECTOR(uint16_t, 2))(0xCF20L, 0x61E8L), 0x61E8L);
        int8_t *l_297 = &p_953->g_195[3][8];
        VECTOR(int16_t, 2) l_299 = (VECTOR(int16_t, 2))(0x6FD4L, 0x3125L);
        int32_t l_304 = 0x19F1E4A5L;
        struct S0 *l_305 = &p_953->g_306;
        int32_t l_309 = 0x32F4127EL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_235[i] = &l_230;
        (*l_234) = (l_232 = ((((p_953->g_177 || ((l_205[8][1] , ((!((*l_231) = (!((safe_add_func_int32_t_s_s((-3L), ((&p_953->g_157 == &p_953->g_157) , (l_208.s5 = (l_230 |= ((VECTOR(int32_t, 8))(0x182AE61EL, (-8L), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_208.s3714)).odd, ((VECTOR(int32_t, 2))(l_209.yx))))), (l_209.y = (safe_sub_func_uint8_t_u_u((((*l_214) = (p_131 , l_212)) == ((p_953->g_199.s0 ^= (((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_953->g_221.xz)).hi, (safe_sub_func_uint8_t_u_u(0xF6L, ((((VECTOR(uint64_t, 2))(0xB6EB93942DFEF78AL, 1UL)).hi < (((((*l_227) = (l_213 = p_953->g_224)) != &p_953->g_225) , p_131) == 0UL)) != p_131))))) >= l_209.y), p_953->g_24.y)), l_208.s1)) < FAKE_DIVERGE(p_953->global_1_offset, get_global_id(1), 10)) , p_953->g_195[4][7])) , (*p_953->g_224))), 0x64L))), (***l_214), 1L, 0x6BA9F227L)).s2))))) == p_131)))) <= 0x4D4D221AL)) < p_953->g_197.sb)) & p_131) == 0x84C74275F4499494L) > FAKE_DIVERGE(p_953->group_2_offset, get_group_id(2), 10)));
        l_232 = (+((*l_234) = l_208.s3));
    }
    for (p_953->g_306.f2 = (-1); (p_953->g_306.f2 > (-11)); p_953->g_306.f2 = safe_sub_func_uint64_t_u_u(p_953->g_306.f2, 5))
    { /* block id: 135 */
        int32_t *l_404 = (void*)0;
        int32_t *l_405 = &l_230;
        int32_t *l_407 = &l_230;
        int32_t *l_408 = &l_230;
        int32_t *l_409 = &l_232;
        int32_t *l_410 = &l_232;
        (**p_953->g_224) = (*p_953->g_225);
        p_953->g_411[0]--;
    }
    p_953->g_448 = ((((p_953->g_351 = (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_div_func_int64_t_s_s(((((*l_439) &= ((*l_438) = (((VECTOR(uint64_t, 2))(p_953->g_420.xx)).hi != (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))((safe_sub_func_int64_t_s_s(((*l_426) &= ((***l_366) < 0x42L)), ((*l_437) = ((p_131 > (safe_lshift_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (((safe_mod_func_int8_t_s_s((p_953->g_339 | p_953->g_351), (-8L))) == p_131) , (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_431.sf1281afc)))).s4 & (safe_rshift_func_int8_t_s_u(((*l_436) &= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(l_434.xx)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_953->g_435.s5335)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((p_953->g_123[0] | (p_953->g_177 && 255UL)), 0x04L, 0x30L, 2L)).odd)), 0x1AL, 4L)).s1267072241155320)).se8))), ((VECTOR(int8_t, 2))(0x00L)), 0x53L, ((VECTOR(int8_t, 8))(0x1AL)), (-4L), 2L, 0x48L)).sb), GROUP_DIVERGE(1, 1)))))))) != p_953->g_155[1][2])))), 0xE6L, ((VECTOR(uint8_t, 4))(1UL)), 0x24L, ((VECTOR(uint8_t, 2))(3UL)), 255UL, 0xF4L, GROUP_DIVERGE(1, 1), (***l_366), p_131, 0xACL, 0x0DL)).s7316)).w, (***l_366)))))) || p_131) == p_953->g_88), p_953->g_440)), p_131)) && p_953->g_306.f0), p_131))) | p_131) && p_131) ^ p_131);
    l_447[0][3] = ((*l_382) = ((**p_953->g_224) = p_132));
    return l_449;
}


/* ------------------------------------------ */
/* 
 * reads : p_953->g_142 p_953->g_155 p_953->g_157 p_953->g_87 p_953->g_88 p_953->g_123 p_953->g_comm_values p_953->g_24 p_953->g_47
 * writes: p_953->g_155 p_953->g_157 p_953->g_87 p_953->g_174 p_953->g_175 p_953->g_177 p_953->g_189
 */
uint16_t  func_138(uint32_t  p_139, struct S1 * p_953)
{ /* block id: 38 */
    VECTOR(int32_t, 16) l_145 = (VECTOR(int32_t, 16))(0x5691CFF7L, (VECTOR(int32_t, 4))(0x5691CFF7L, (VECTOR(int32_t, 2))(0x5691CFF7L, 0x50297C0CL), 0x50297C0CL), 0x50297C0CL, 0x5691CFF7L, 0x50297C0CL, (VECTOR(int32_t, 2))(0x5691CFF7L, 0x50297C0CL), (VECTOR(int32_t, 2))(0x5691CFF7L, 0x50297C0CL), 0x5691CFF7L, 0x50297C0CL, 0x5691CFF7L, 0x50297C0CL);
    uint8_t *l_154 = &p_953->g_155[1][2];
    uint64_t *l_156 = &p_953->g_157;
    int32_t *l_158 = &p_953->g_88;
    VECTOR(int32_t, 16) l_161 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int32_t, 2))((-1L), 6L), (VECTOR(int32_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
    VECTOR(int32_t, 8) l_162 = (VECTOR(int32_t, 8))(0x6723CEFFL, (VECTOR(int32_t, 4))(0x6723CEFFL, (VECTOR(int32_t, 2))(0x6723CEFFL, 6L), 6L), 6L, 0x6723CEFFL, 6L);
    int32_t **l_163 = (void*)0;
    int32_t **l_164[3][1];
    int8_t *l_173 = &p_953->g_174[0];
    int32_t *l_176 = &p_953->g_88;
    VECTOR(uint8_t, 2) l_180 = (VECTOR(uint8_t, 2))(6UL, 252UL);
    VECTOR(uint32_t, 2) l_183 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL);
    VECTOR(int16_t, 16) l_188 = (VECTOR(int16_t, 16))(0x02D6L, (VECTOR(int16_t, 4))(0x02D6L, (VECTOR(int16_t, 2))(0x02D6L, 1L), 1L), 1L, 0x02D6L, 1L, (VECTOR(int16_t, 2))(0x02D6L, 1L), (VECTOR(int16_t, 2))(0x02D6L, 1L), 0x02D6L, 1L, 0x02D6L, 1L);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_164[i][j] = &p_953->g_87;
    }
    p_953->g_177 = (safe_mod_func_uint64_t_u_u(((((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(p_953->g_142.xy)).xyxyxyyyyyyyyxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((((safe_lshift_func_int8_t_s_s(p_139, ((((((VECTOR(int32_t, 2))(0x286230F5L, 0L)).hi == ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_145.s01)), 0x74E8889EL, ((0x2CE6A80779CC8352L > ((safe_add_func_int8_t_s_s((p_953->g_175 = ((*l_173) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_154) ^= (safe_rshift_func_int16_t_s_s(p_139, 12))), ((((*l_156) &= (0x667C51289C804F76L == p_139)) & ((l_158 == (p_953->g_87 = ((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_161.s9016659d)).odd)))).wxxyxzzz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_162.s62547167))))))).s6, (*p_953->g_87))) , l_158))) == (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_953->local_0_offset, get_local_id(0), 10), (0x536A7B672675DE23L | 18446744073709551615UL))), p_953->g_123[0])), p_953->g_comm_values[p_953->tid])), 18446744073709551615UL)))) , 0x5EL))), p_953->g_142.x)))), p_953->g_24.x)) ^ p_139)) || FAKE_DIVERGE(p_953->group_1_offset, get_group_id(1), 10)), (-7L), (-10L), ((VECTOR(int32_t, 4))((-3L))), ((VECTOR(int32_t, 2))(0x0DA9A9A7L)), (-1L), 0x465A0541L, 6L, 0x3C71E506L)).s7) == (*l_158)) , p_139) && (*l_158)))) , (void*)0) == l_176) , p_139), 0x2B5DL, ((VECTOR(int16_t, 2))(0x490DL)), 0L, 0x6CB2L, ((VECTOR(int16_t, 4))(0x143DL)), ((VECTOR(int16_t, 4))(0x2409L)), (-7L), 5L)).sf2aa)).yxywwzxx, ((VECTOR(int16_t, 8))(1L))))).s50, ((VECTOR(int16_t, 2))(5L))))), 0x7FA7L, 0x1048L)))))).hi)).xxxxyxyyyyyxyyyx, ((VECTOR(int16_t, 16))(0x2264L))))).s0d8b, (int16_t)(-1L)))).z , p_953->g_47) , 0x768CD56C25D7B920L), p_139));
    p_953->g_189 = (safe_mul_func_int8_t_s_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_180.xxyx)), ((safe_mod_func_uint32_t_u_u(2UL, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(4294967286UL, 0xEB8CE4A9L)).xxyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(l_183.xy)).xxyy, ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(1UL, (((*l_158) , ((((*l_176) && p_139) ^ (p_953->g_142.y | (p_953->g_123[0] , (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_188.scdf4c687c5984a7a)).s5, p_953->g_123[0])), p_953->g_142.y))))) , FAKE_DIVERGE(p_953->local_2_offset, get_local_id(2), 10))) | 0x2EL), ((VECTOR(uint32_t, 2))(0UL)), p_953->g_24.x, ((VECTOR(uint32_t, 2))(0x5DD464BDL)), 4294967295UL, 4294967290UL, 1UL, p_953->g_142.y, 4294967287UL, p_953->g_157, 0xCE4B447FL, 9UL, 0xBE1782E8L)))).se3)).xxxxyxyx)).s1456605177237174, ((VECTOR(uint32_t, 16))(4294967292UL))))).s0c7e))), 0x626E11B9L, ((VECTOR(uint32_t, 2))(0xDAADAC5AL)), ((VECTOR(uint32_t, 8))(1UL)), 8UL)).s6dd6)), 4294967287UL, 4294967295UL, 0xAB2C1C67L, 0xB6CA204FL, p_953->g_157, 0x41B4FA77L, 0x85B639F8L, ((VECTOR(uint32_t, 2))(0xDD93009DL)), p_139, 0x77CD82FAL, 0UL)).s4599))).z)) == 0x0DF6F84DL), p_953->g_142.x, 0xBFL, 0xD3L)).s5 || p_139), 0x22L));
    return (*l_158);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_comm_values[i] = 1;
    struct S1 c_954;
    struct S1* p_953 = &c_954;
    struct S1 c_955 = {
        (VECTOR(uint8_t, 2))(0xE5L, 0xA5L), // p_953->g_24
        (VECTOR(uint8_t, 8))(0x28L, (VECTOR(uint8_t, 4))(0x28L, (VECTOR(uint8_t, 2))(0x28L, 1UL), 1UL), 1UL, 0x28L, 1UL), // p_953->g_27
        0x3638B4FDL, // p_953->g_47
        0x678E9A5FL, // p_953->g_88
        &p_953->g_88, // p_953->g_87
        {0xEFL,0x72L,0xEFL,0xEFL,0x72L,0xEFL,0xEFL,0x72L,0xEFL}, // p_953->g_90
        {{&p_953->g_90[2],&p_953->g_90[2],&p_953->g_90[2],&p_953->g_90[2]}}, // p_953->g_89
        (VECTOR(uint32_t, 2))(4294967292UL, 0x8F5E8599L), // p_953->g_93
        0x2FCB6F9DL, // p_953->g_97
        (VECTOR(uint16_t, 2))(0xE7E8L, 0x78DFL), // p_953->g_106
        {0x3B1A0225L,0x3B1A0225L,0x3B1A0225L,0x3B1A0225L,0x3B1A0225L,0x3B1A0225L}, // p_953->g_123
        (VECTOR(int16_t, 2))(1L, (-8L)), // p_953->g_142
        {{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L},{0x08L,0x0BL,0x41L,0x0BL,0x08L}}, // p_953->g_155
        0x876320E90B94B682L, // p_953->g_157
        {0x59L,0x59L,0x59L,0x59L}, // p_953->g_174
        0xC1190EECL, // p_953->g_175
        4294967295UL, // p_953->g_177
        0x471F8D7BL, // p_953->g_189
        (void*)0, // p_953->g_192
        {{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL},{(-4L),0x0CL,(-6L),0x1DL,0x3FL,(-4L),0x1DL,0x74L,0x1DL}}, // p_953->g_195
        (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 0UL), 0UL), 0UL, 0x31L, 0UL, (VECTOR(uint8_t, 2))(0x31L, 0UL), (VECTOR(uint8_t, 2))(0x31L, 0UL), 0x31L, 0UL, 0x31L, 0UL), // p_953->g_197
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_953->g_199
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x40D3L), 0x40D3L), // p_953->g_221
        &p_953->g_87, // p_953->g_225
        &p_953->g_225, // p_953->g_224
        (VECTOR(int64_t, 4))(0x5FEEDADD87B538F5L, (VECTOR(int64_t, 2))(0x5FEEDADD87B538F5L, 0x3769E7DFF19B28CFL), 0x3769E7DFF19B28CFL), // p_953->g_241
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3E920F85839FD0B5L), 0x3E920F85839FD0B5L), // p_953->g_242
        (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 1UL), 1UL), 1UL, 65530UL, 1UL), // p_953->g_259
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xCA2178FBL), 0xCA2178FBL), 0xCA2178FBL, 4294967295UL, 0xCA2178FBL), // p_953->g_287
        {0x3528L,0x24E89D2B46AF8636L,-1L,0x5985C54A5D215F1DL,0x32825DC1L,1L,0x4C09L,2UL,0x07AF10A2L,0x57L}, // p_953->g_306
        1UL, // p_953->g_315
        0L, // p_953->g_333
        0UL, // p_953->g_334
        0x3FA5466DL, // p_953->g_339
        1UL, // p_953->g_341
        (void*)0, // p_953->g_348
        0x1B4AL, // p_953->g_351
        0x4EF5AFA5C4AD845DL, // p_953->g_368
        (-1L), // p_953->g_392
        0x01L, // p_953->g_393
        1UL, // p_953->g_396
        1UL, // p_953->g_399
        0L, // p_953->g_406
        {0x36DB2D15L,0x36DB2D15L,0x36DB2D15L,0x36DB2D15L,0x36DB2D15L,0x36DB2D15L}, // p_953->g_411
        (VECTOR(uint64_t, 2))(0x95383CB7436B2F34L, 8UL), // p_953->g_420
        (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0L), 0L), 0L, 8L, 0L), // p_953->g_435
        0x0BD5225C5E89263CL, // p_953->g_440
        0x1AL, // p_953->g_448
        0xD2L, // p_953->g_450
        0UL, // p_953->g_514
        (VECTOR(uint16_t, 4))(0x7884L, (VECTOR(uint16_t, 2))(0x7884L, 0x0C2BL), 0x0C2BL), // p_953->g_520
        (VECTOR(uint16_t, 16))(0xF8A7L, (VECTOR(uint16_t, 4))(0xF8A7L, (VECTOR(uint16_t, 2))(0xF8A7L, 0x0B76L), 0x0B76L), 0x0B76L, 0xF8A7L, 0x0B76L, (VECTOR(uint16_t, 2))(0xF8A7L, 0x0B76L), (VECTOR(uint16_t, 2))(0xF8A7L, 0x0B76L), 0xF8A7L, 0x0B76L, 0xF8A7L, 0x0B76L), // p_953->g_522
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5913L), 0x5913L), 0x5913L, 1L, 0x5913L), // p_953->g_530
        (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L, (VECTOR(int16_t, 2))(8L, 0L), (VECTOR(int16_t, 2))(8L, 0L), 8L, 0L, 8L, 0L), // p_953->g_531
        18446744073709551615UL, // p_953->g_538
        (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 7UL), 7UL), // p_953->g_539
        (VECTOR(uint16_t, 16))(0x7F40L, (VECTOR(uint16_t, 4))(0x7F40L, (VECTOR(uint16_t, 2))(0x7F40L, 0x81D3L), 0x81D3L), 0x81D3L, 0x7F40L, 0x81D3L, (VECTOR(uint16_t, 2))(0x7F40L, 0x81D3L), (VECTOR(uint16_t, 2))(0x7F40L, 0x81D3L), 0x7F40L, 0x81D3L, 0x7F40L, 0x81D3L), // p_953->g_540
        (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0x4E72912EF00CD2AEL), 0x4E72912EF00CD2AEL), 0x4E72912EF00CD2AEL, 5UL, 0x4E72912EF00CD2AEL, (VECTOR(uint64_t, 2))(5UL, 0x4E72912EF00CD2AEL), (VECTOR(uint64_t, 2))(5UL, 0x4E72912EF00CD2AEL), 5UL, 0x4E72912EF00CD2AEL, 5UL, 0x4E72912EF00CD2AEL), // p_953->g_541
        &p_953->g_306.f6, // p_953->g_564
        0L, // p_953->g_578
        {8UL,1L,0x41AF88B749215C68L,0x12EAA8A0A293D646L,0x528214A4L,0L,8UL,4294967295UL,0x62DADF5EL,-6L}, // p_953->g_582
        (void*)0, // p_953->g_594
        {1UL,0x327C3DBC8445A2DCL,0x516CA574B229C029L,0L,0xDFE5DE08L,1L,6UL,0x3FDD2651L,0x0623C721L,0x4DL}, // p_953->g_641
        {{0xAFA5L,0x21D6D86E28755E90L,0L,0L,0xADAE7DFAL,0L,0x98B0L,0xD95B0D5CL,4L,0x18L},{0xAFA5L,0x21D6D86E28755E90L,0L,0L,0xADAE7DFAL,0L,0x98B0L,0xD95B0D5CL,4L,0x18L},{0xAFA5L,0x21D6D86E28755E90L,0L,0L,0xADAE7DFAL,0L,0x98B0L,0xD95B0D5CL,4L,0x18L},{0xAFA5L,0x21D6D86E28755E90L,0L,0L,0xADAE7DFAL,0L,0x98B0L,0xD95B0D5CL,4L,0x18L}}, // p_953->g_643
        (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x14L), 0x14L), // p_953->g_670
        {0x2FEFL,3L,6L,-4L,4294967295UL,1L,0x3847L,0x2F4F8E69L,0x4C6AFE6FL,0x77L}, // p_953->g_699
        &p_953->g_406, // p_953->g_732
        {{{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732}},{{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732}},{{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732}},{{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732}},{{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732},{&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732,&p_953->g_732}}}, // p_953->g_731
        {0x3164L,0x18E45326D6863FC3L,5L,-1L,0x49F91BC3L,1L,0x3C84L,0x5F0C3B77L,0x3EA73D1EL,-10L}, // p_953->g_746
        (VECTOR(int64_t, 16))(0x3D7EA8EFD78C33B9L, (VECTOR(int64_t, 4))(0x3D7EA8EFD78C33B9L, (VECTOR(int64_t, 2))(0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L), 0x139D43FD5C945727L), 0x139D43FD5C945727L, 0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L, (VECTOR(int64_t, 2))(0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L), (VECTOR(int64_t, 2))(0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L), 0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L, 0x3D7EA8EFD78C33B9L, 0x139D43FD5C945727L), // p_953->g_754
        {0x6A8033A3L,0x6A8033A3L,0x6A8033A3L,0x6A8033A3L,0x6A8033A3L}, // p_953->g_777
        0x0A31L, // p_953->g_779
        {{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}},{{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)},{0x265965C7L,0x06C3E103L,0x6206B42CL,0x06C3E103L,0x265965C7L,0x401AA331L,0x43F88B83L,(-3L)}}}, // p_953->g_780
        9UL, // p_953->g_783
        {0xC304L,-1L,0x718F5DF0B8E778D8L,0x31E0490D08646A4CL,4294967287UL,-1L,0x6A33L,4294967289UL,0x74996D76L,0x76L}, // p_953->g_790
        {0xDAEEL,0x674DECBF2D476EF1L,0x7E597224C1AF299DL,-4L,6UL,-1L,0UL,0x1DA1382DL,2L,1L}, // p_953->g_798
        (VECTOR(int16_t, 16))(0x47E0L, (VECTOR(int16_t, 4))(0x47E0L, (VECTOR(int16_t, 2))(0x47E0L, 0x37B9L), 0x37B9L), 0x37B9L, 0x47E0L, 0x37B9L, (VECTOR(int16_t, 2))(0x47E0L, 0x37B9L), (VECTOR(int16_t, 2))(0x47E0L, 0x37B9L), 0x47E0L, 0x37B9L, 0x47E0L, 0x37B9L), // p_953->g_808
        &p_953->g_88, // p_953->g_823
        {{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}},{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}},{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}},{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}},{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}},{{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)},{(-1L),0x58E6AC9EL,0x1B452894L,0x12F08EB7L,(-1L)}}}, // p_953->g_825
        &p_953->g_643[2], // p_953->g_826
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x3ADDB695B69D171DL), 0x3ADDB695B69D171DL), 0x3ADDB695B69D171DL, 0UL, 0x3ADDB695B69D171DL, (VECTOR(uint64_t, 2))(0UL, 0x3ADDB695B69D171DL), (VECTOR(uint64_t, 2))(0UL, 0x3ADDB695B69D171DL), 0UL, 0x3ADDB695B69D171DL, 0UL, 0x3ADDB695B69D171DL), // p_953->g_861
        (VECTOR(int32_t, 2))(0x2CC79458L, 0x13BE6863L), // p_953->g_865
        (VECTOR(int32_t, 16))(0x53C26810L, (VECTOR(int32_t, 4))(0x53C26810L, (VECTOR(int32_t, 2))(0x53C26810L, 0x5E83479CL), 0x5E83479CL), 0x5E83479CL, 0x53C26810L, 0x5E83479CL, (VECTOR(int32_t, 2))(0x53C26810L, 0x5E83479CL), (VECTOR(int32_t, 2))(0x53C26810L, 0x5E83479CL), 0x53C26810L, 0x5E83479CL, 0x53C26810L, 0x5E83479CL), // p_953->g_867
        0x8E3FL, // p_953->g_870
        {{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L},{65535UL,9L,4L,0L,4294967295UL,0x29D3141DE609416CL,0x9D1DL,4294967289UL,0x04795C6CL,0x59L}}, // p_953->g_881
        (void*)0, // p_953->g_882
        {{&p_953->g_306,&p_953->g_306,&p_953->g_306},{&p_953->g_306,&p_953->g_306,&p_953->g_306},{&p_953->g_306,&p_953->g_306,&p_953->g_306},{&p_953->g_306,&p_953->g_306,&p_953->g_306}}, // p_953->g_887
        &p_953->g_887[0][2], // p_953->g_886
        (VECTOR(int32_t, 2))(0L, 0L), // p_953->g_897
        (VECTOR(int32_t, 8))(0x51812379L, (VECTOR(int32_t, 4))(0x51812379L, (VECTOR(int32_t, 2))(0x51812379L, 0x09E8E626L), 0x09E8E626L), 0x09E8E626L, 0x51812379L, 0x09E8E626L), // p_953->g_898
        (VECTOR(int8_t, 2))(0L, 0x70L), // p_953->g_903
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6959L), 0x6959L), 0x6959L, (-1L), 0x6959L), // p_953->g_929
        (VECTOR(int32_t, 2))(0x2510A1F1L, 2L), // p_953->g_938
        (VECTOR(int32_t, 2))((-6L), 1L), // p_953->g_942
        0, // p_953->v_collective
        sequence_input[get_global_id(0)], // p_953->global_0_offset
        sequence_input[get_global_id(1)], // p_953->global_1_offset
        sequence_input[get_global_id(2)], // p_953->global_2_offset
        sequence_input[get_local_id(0)], // p_953->local_0_offset
        sequence_input[get_local_id(1)], // p_953->local_1_offset
        sequence_input[get_local_id(2)], // p_953->local_2_offset
        sequence_input[get_group_id(0)], // p_953->group_0_offset
        sequence_input[get_group_id(1)], // p_953->group_1_offset
        sequence_input[get_group_id(2)], // p_953->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_953->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_954 = c_955;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_953);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_953->g_24.x, "p_953->g_24.x", print_hash_value);
    transparent_crc(p_953->g_24.y, "p_953->g_24.y", print_hash_value);
    transparent_crc(p_953->g_27.s0, "p_953->g_27.s0", print_hash_value);
    transparent_crc(p_953->g_27.s1, "p_953->g_27.s1", print_hash_value);
    transparent_crc(p_953->g_27.s2, "p_953->g_27.s2", print_hash_value);
    transparent_crc(p_953->g_27.s3, "p_953->g_27.s3", print_hash_value);
    transparent_crc(p_953->g_27.s4, "p_953->g_27.s4", print_hash_value);
    transparent_crc(p_953->g_27.s5, "p_953->g_27.s5", print_hash_value);
    transparent_crc(p_953->g_27.s6, "p_953->g_27.s6", print_hash_value);
    transparent_crc(p_953->g_27.s7, "p_953->g_27.s7", print_hash_value);
    transparent_crc(p_953->g_47, "p_953->g_47", print_hash_value);
    transparent_crc(p_953->g_88, "p_953->g_88", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_953->g_90[i], "p_953->g_90[i]", print_hash_value);

    }
    transparent_crc(p_953->g_93.x, "p_953->g_93.x", print_hash_value);
    transparent_crc(p_953->g_93.y, "p_953->g_93.y", print_hash_value);
    transparent_crc(p_953->g_97, "p_953->g_97", print_hash_value);
    transparent_crc(p_953->g_106.x, "p_953->g_106.x", print_hash_value);
    transparent_crc(p_953->g_106.y, "p_953->g_106.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_953->g_123[i], "p_953->g_123[i]", print_hash_value);

    }
    transparent_crc(p_953->g_142.x, "p_953->g_142.x", print_hash_value);
    transparent_crc(p_953->g_142.y, "p_953->g_142.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_953->g_155[i][j], "p_953->g_155[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_953->g_157, "p_953->g_157", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_953->g_174[i], "p_953->g_174[i]", print_hash_value);

    }
    transparent_crc(p_953->g_175, "p_953->g_175", print_hash_value);
    transparent_crc(p_953->g_177, "p_953->g_177", print_hash_value);
    transparent_crc(p_953->g_189, "p_953->g_189", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_953->g_195[i][j], "p_953->g_195[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_953->g_197.s0, "p_953->g_197.s0", print_hash_value);
    transparent_crc(p_953->g_197.s1, "p_953->g_197.s1", print_hash_value);
    transparent_crc(p_953->g_197.s2, "p_953->g_197.s2", print_hash_value);
    transparent_crc(p_953->g_197.s3, "p_953->g_197.s3", print_hash_value);
    transparent_crc(p_953->g_197.s4, "p_953->g_197.s4", print_hash_value);
    transparent_crc(p_953->g_197.s5, "p_953->g_197.s5", print_hash_value);
    transparent_crc(p_953->g_197.s6, "p_953->g_197.s6", print_hash_value);
    transparent_crc(p_953->g_197.s7, "p_953->g_197.s7", print_hash_value);
    transparent_crc(p_953->g_197.s8, "p_953->g_197.s8", print_hash_value);
    transparent_crc(p_953->g_197.s9, "p_953->g_197.s9", print_hash_value);
    transparent_crc(p_953->g_197.sa, "p_953->g_197.sa", print_hash_value);
    transparent_crc(p_953->g_197.sb, "p_953->g_197.sb", print_hash_value);
    transparent_crc(p_953->g_197.sc, "p_953->g_197.sc", print_hash_value);
    transparent_crc(p_953->g_197.sd, "p_953->g_197.sd", print_hash_value);
    transparent_crc(p_953->g_197.se, "p_953->g_197.se", print_hash_value);
    transparent_crc(p_953->g_197.sf, "p_953->g_197.sf", print_hash_value);
    transparent_crc(p_953->g_199.s0, "p_953->g_199.s0", print_hash_value);
    transparent_crc(p_953->g_199.s1, "p_953->g_199.s1", print_hash_value);
    transparent_crc(p_953->g_199.s2, "p_953->g_199.s2", print_hash_value);
    transparent_crc(p_953->g_199.s3, "p_953->g_199.s3", print_hash_value);
    transparent_crc(p_953->g_199.s4, "p_953->g_199.s4", print_hash_value);
    transparent_crc(p_953->g_199.s5, "p_953->g_199.s5", print_hash_value);
    transparent_crc(p_953->g_199.s6, "p_953->g_199.s6", print_hash_value);
    transparent_crc(p_953->g_199.s7, "p_953->g_199.s7", print_hash_value);
    transparent_crc(p_953->g_221.x, "p_953->g_221.x", print_hash_value);
    transparent_crc(p_953->g_221.y, "p_953->g_221.y", print_hash_value);
    transparent_crc(p_953->g_221.z, "p_953->g_221.z", print_hash_value);
    transparent_crc(p_953->g_221.w, "p_953->g_221.w", print_hash_value);
    transparent_crc(p_953->g_241.x, "p_953->g_241.x", print_hash_value);
    transparent_crc(p_953->g_241.y, "p_953->g_241.y", print_hash_value);
    transparent_crc(p_953->g_241.z, "p_953->g_241.z", print_hash_value);
    transparent_crc(p_953->g_241.w, "p_953->g_241.w", print_hash_value);
    transparent_crc(p_953->g_242.x, "p_953->g_242.x", print_hash_value);
    transparent_crc(p_953->g_242.y, "p_953->g_242.y", print_hash_value);
    transparent_crc(p_953->g_242.z, "p_953->g_242.z", print_hash_value);
    transparent_crc(p_953->g_242.w, "p_953->g_242.w", print_hash_value);
    transparent_crc(p_953->g_259.s0, "p_953->g_259.s0", print_hash_value);
    transparent_crc(p_953->g_259.s1, "p_953->g_259.s1", print_hash_value);
    transparent_crc(p_953->g_259.s2, "p_953->g_259.s2", print_hash_value);
    transparent_crc(p_953->g_259.s3, "p_953->g_259.s3", print_hash_value);
    transparent_crc(p_953->g_259.s4, "p_953->g_259.s4", print_hash_value);
    transparent_crc(p_953->g_259.s5, "p_953->g_259.s5", print_hash_value);
    transparent_crc(p_953->g_259.s6, "p_953->g_259.s6", print_hash_value);
    transparent_crc(p_953->g_259.s7, "p_953->g_259.s7", print_hash_value);
    transparent_crc(p_953->g_287.s0, "p_953->g_287.s0", print_hash_value);
    transparent_crc(p_953->g_287.s1, "p_953->g_287.s1", print_hash_value);
    transparent_crc(p_953->g_287.s2, "p_953->g_287.s2", print_hash_value);
    transparent_crc(p_953->g_287.s3, "p_953->g_287.s3", print_hash_value);
    transparent_crc(p_953->g_287.s4, "p_953->g_287.s4", print_hash_value);
    transparent_crc(p_953->g_287.s5, "p_953->g_287.s5", print_hash_value);
    transparent_crc(p_953->g_287.s6, "p_953->g_287.s6", print_hash_value);
    transparent_crc(p_953->g_287.s7, "p_953->g_287.s7", print_hash_value);
    transparent_crc(p_953->g_306.f0, "p_953->g_306.f0", print_hash_value);
    transparent_crc(p_953->g_306.f1, "p_953->g_306.f1", print_hash_value);
    transparent_crc(p_953->g_306.f2, "p_953->g_306.f2", print_hash_value);
    transparent_crc(p_953->g_306.f3, "p_953->g_306.f3", print_hash_value);
    transparent_crc(p_953->g_306.f4, "p_953->g_306.f4", print_hash_value);
    transparent_crc(p_953->g_306.f5, "p_953->g_306.f5", print_hash_value);
    transparent_crc(p_953->g_306.f6, "p_953->g_306.f6", print_hash_value);
    transparent_crc(p_953->g_306.f7, "p_953->g_306.f7", print_hash_value);
    transparent_crc(p_953->g_306.f8, "p_953->g_306.f8", print_hash_value);
    transparent_crc(p_953->g_306.f9, "p_953->g_306.f9", print_hash_value);
    transparent_crc(p_953->g_315, "p_953->g_315", print_hash_value);
    transparent_crc(p_953->g_333, "p_953->g_333", print_hash_value);
    transparent_crc(p_953->g_334, "p_953->g_334", print_hash_value);
    transparent_crc(p_953->g_339, "p_953->g_339", print_hash_value);
    transparent_crc(p_953->g_341, "p_953->g_341", print_hash_value);
    transparent_crc(p_953->g_351, "p_953->g_351", print_hash_value);
    transparent_crc(p_953->g_368, "p_953->g_368", print_hash_value);
    transparent_crc(p_953->g_392, "p_953->g_392", print_hash_value);
    transparent_crc(p_953->g_393, "p_953->g_393", print_hash_value);
    transparent_crc(p_953->g_396, "p_953->g_396", print_hash_value);
    transparent_crc(p_953->g_399, "p_953->g_399", print_hash_value);
    transparent_crc(p_953->g_406, "p_953->g_406", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_953->g_411[i], "p_953->g_411[i]", print_hash_value);

    }
    transparent_crc(p_953->g_420.x, "p_953->g_420.x", print_hash_value);
    transparent_crc(p_953->g_420.y, "p_953->g_420.y", print_hash_value);
    transparent_crc(p_953->g_435.s0, "p_953->g_435.s0", print_hash_value);
    transparent_crc(p_953->g_435.s1, "p_953->g_435.s1", print_hash_value);
    transparent_crc(p_953->g_435.s2, "p_953->g_435.s2", print_hash_value);
    transparent_crc(p_953->g_435.s3, "p_953->g_435.s3", print_hash_value);
    transparent_crc(p_953->g_435.s4, "p_953->g_435.s4", print_hash_value);
    transparent_crc(p_953->g_435.s5, "p_953->g_435.s5", print_hash_value);
    transparent_crc(p_953->g_435.s6, "p_953->g_435.s6", print_hash_value);
    transparent_crc(p_953->g_435.s7, "p_953->g_435.s7", print_hash_value);
    transparent_crc(p_953->g_440, "p_953->g_440", print_hash_value);
    transparent_crc(p_953->g_448, "p_953->g_448", print_hash_value);
    transparent_crc(p_953->g_450, "p_953->g_450", print_hash_value);
    transparent_crc(p_953->g_514, "p_953->g_514", print_hash_value);
    transparent_crc(p_953->g_520.x, "p_953->g_520.x", print_hash_value);
    transparent_crc(p_953->g_520.y, "p_953->g_520.y", print_hash_value);
    transparent_crc(p_953->g_520.z, "p_953->g_520.z", print_hash_value);
    transparent_crc(p_953->g_520.w, "p_953->g_520.w", print_hash_value);
    transparent_crc(p_953->g_522.s0, "p_953->g_522.s0", print_hash_value);
    transparent_crc(p_953->g_522.s1, "p_953->g_522.s1", print_hash_value);
    transparent_crc(p_953->g_522.s2, "p_953->g_522.s2", print_hash_value);
    transparent_crc(p_953->g_522.s3, "p_953->g_522.s3", print_hash_value);
    transparent_crc(p_953->g_522.s4, "p_953->g_522.s4", print_hash_value);
    transparent_crc(p_953->g_522.s5, "p_953->g_522.s5", print_hash_value);
    transparent_crc(p_953->g_522.s6, "p_953->g_522.s6", print_hash_value);
    transparent_crc(p_953->g_522.s7, "p_953->g_522.s7", print_hash_value);
    transparent_crc(p_953->g_522.s8, "p_953->g_522.s8", print_hash_value);
    transparent_crc(p_953->g_522.s9, "p_953->g_522.s9", print_hash_value);
    transparent_crc(p_953->g_522.sa, "p_953->g_522.sa", print_hash_value);
    transparent_crc(p_953->g_522.sb, "p_953->g_522.sb", print_hash_value);
    transparent_crc(p_953->g_522.sc, "p_953->g_522.sc", print_hash_value);
    transparent_crc(p_953->g_522.sd, "p_953->g_522.sd", print_hash_value);
    transparent_crc(p_953->g_522.se, "p_953->g_522.se", print_hash_value);
    transparent_crc(p_953->g_522.sf, "p_953->g_522.sf", print_hash_value);
    transparent_crc(p_953->g_530.s0, "p_953->g_530.s0", print_hash_value);
    transparent_crc(p_953->g_530.s1, "p_953->g_530.s1", print_hash_value);
    transparent_crc(p_953->g_530.s2, "p_953->g_530.s2", print_hash_value);
    transparent_crc(p_953->g_530.s3, "p_953->g_530.s3", print_hash_value);
    transparent_crc(p_953->g_530.s4, "p_953->g_530.s4", print_hash_value);
    transparent_crc(p_953->g_530.s5, "p_953->g_530.s5", print_hash_value);
    transparent_crc(p_953->g_530.s6, "p_953->g_530.s6", print_hash_value);
    transparent_crc(p_953->g_530.s7, "p_953->g_530.s7", print_hash_value);
    transparent_crc(p_953->g_531.s0, "p_953->g_531.s0", print_hash_value);
    transparent_crc(p_953->g_531.s1, "p_953->g_531.s1", print_hash_value);
    transparent_crc(p_953->g_531.s2, "p_953->g_531.s2", print_hash_value);
    transparent_crc(p_953->g_531.s3, "p_953->g_531.s3", print_hash_value);
    transparent_crc(p_953->g_531.s4, "p_953->g_531.s4", print_hash_value);
    transparent_crc(p_953->g_531.s5, "p_953->g_531.s5", print_hash_value);
    transparent_crc(p_953->g_531.s6, "p_953->g_531.s6", print_hash_value);
    transparent_crc(p_953->g_531.s7, "p_953->g_531.s7", print_hash_value);
    transparent_crc(p_953->g_531.s8, "p_953->g_531.s8", print_hash_value);
    transparent_crc(p_953->g_531.s9, "p_953->g_531.s9", print_hash_value);
    transparent_crc(p_953->g_531.sa, "p_953->g_531.sa", print_hash_value);
    transparent_crc(p_953->g_531.sb, "p_953->g_531.sb", print_hash_value);
    transparent_crc(p_953->g_531.sc, "p_953->g_531.sc", print_hash_value);
    transparent_crc(p_953->g_531.sd, "p_953->g_531.sd", print_hash_value);
    transparent_crc(p_953->g_531.se, "p_953->g_531.se", print_hash_value);
    transparent_crc(p_953->g_531.sf, "p_953->g_531.sf", print_hash_value);
    transparent_crc(p_953->g_538, "p_953->g_538", print_hash_value);
    transparent_crc(p_953->g_539.x, "p_953->g_539.x", print_hash_value);
    transparent_crc(p_953->g_539.y, "p_953->g_539.y", print_hash_value);
    transparent_crc(p_953->g_539.z, "p_953->g_539.z", print_hash_value);
    transparent_crc(p_953->g_539.w, "p_953->g_539.w", print_hash_value);
    transparent_crc(p_953->g_540.s0, "p_953->g_540.s0", print_hash_value);
    transparent_crc(p_953->g_540.s1, "p_953->g_540.s1", print_hash_value);
    transparent_crc(p_953->g_540.s2, "p_953->g_540.s2", print_hash_value);
    transparent_crc(p_953->g_540.s3, "p_953->g_540.s3", print_hash_value);
    transparent_crc(p_953->g_540.s4, "p_953->g_540.s4", print_hash_value);
    transparent_crc(p_953->g_540.s5, "p_953->g_540.s5", print_hash_value);
    transparent_crc(p_953->g_540.s6, "p_953->g_540.s6", print_hash_value);
    transparent_crc(p_953->g_540.s7, "p_953->g_540.s7", print_hash_value);
    transparent_crc(p_953->g_540.s8, "p_953->g_540.s8", print_hash_value);
    transparent_crc(p_953->g_540.s9, "p_953->g_540.s9", print_hash_value);
    transparent_crc(p_953->g_540.sa, "p_953->g_540.sa", print_hash_value);
    transparent_crc(p_953->g_540.sb, "p_953->g_540.sb", print_hash_value);
    transparent_crc(p_953->g_540.sc, "p_953->g_540.sc", print_hash_value);
    transparent_crc(p_953->g_540.sd, "p_953->g_540.sd", print_hash_value);
    transparent_crc(p_953->g_540.se, "p_953->g_540.se", print_hash_value);
    transparent_crc(p_953->g_540.sf, "p_953->g_540.sf", print_hash_value);
    transparent_crc(p_953->g_541.s0, "p_953->g_541.s0", print_hash_value);
    transparent_crc(p_953->g_541.s1, "p_953->g_541.s1", print_hash_value);
    transparent_crc(p_953->g_541.s2, "p_953->g_541.s2", print_hash_value);
    transparent_crc(p_953->g_541.s3, "p_953->g_541.s3", print_hash_value);
    transparent_crc(p_953->g_541.s4, "p_953->g_541.s4", print_hash_value);
    transparent_crc(p_953->g_541.s5, "p_953->g_541.s5", print_hash_value);
    transparent_crc(p_953->g_541.s6, "p_953->g_541.s6", print_hash_value);
    transparent_crc(p_953->g_541.s7, "p_953->g_541.s7", print_hash_value);
    transparent_crc(p_953->g_541.s8, "p_953->g_541.s8", print_hash_value);
    transparent_crc(p_953->g_541.s9, "p_953->g_541.s9", print_hash_value);
    transparent_crc(p_953->g_541.sa, "p_953->g_541.sa", print_hash_value);
    transparent_crc(p_953->g_541.sb, "p_953->g_541.sb", print_hash_value);
    transparent_crc(p_953->g_541.sc, "p_953->g_541.sc", print_hash_value);
    transparent_crc(p_953->g_541.sd, "p_953->g_541.sd", print_hash_value);
    transparent_crc(p_953->g_541.se, "p_953->g_541.se", print_hash_value);
    transparent_crc(p_953->g_541.sf, "p_953->g_541.sf", print_hash_value);
    transparent_crc(p_953->g_578, "p_953->g_578", print_hash_value);
    transparent_crc(p_953->g_582.f0, "p_953->g_582.f0", print_hash_value);
    transparent_crc(p_953->g_582.f1, "p_953->g_582.f1", print_hash_value);
    transparent_crc(p_953->g_582.f2, "p_953->g_582.f2", print_hash_value);
    transparent_crc(p_953->g_582.f3, "p_953->g_582.f3", print_hash_value);
    transparent_crc(p_953->g_582.f4, "p_953->g_582.f4", print_hash_value);
    transparent_crc(p_953->g_582.f5, "p_953->g_582.f5", print_hash_value);
    transparent_crc(p_953->g_582.f6, "p_953->g_582.f6", print_hash_value);
    transparent_crc(p_953->g_582.f7, "p_953->g_582.f7", print_hash_value);
    transparent_crc(p_953->g_582.f8, "p_953->g_582.f8", print_hash_value);
    transparent_crc(p_953->g_582.f9, "p_953->g_582.f9", print_hash_value);
    transparent_crc(p_953->g_641.f0, "p_953->g_641.f0", print_hash_value);
    transparent_crc(p_953->g_641.f1, "p_953->g_641.f1", print_hash_value);
    transparent_crc(p_953->g_641.f2, "p_953->g_641.f2", print_hash_value);
    transparent_crc(p_953->g_641.f3, "p_953->g_641.f3", print_hash_value);
    transparent_crc(p_953->g_641.f4, "p_953->g_641.f4", print_hash_value);
    transparent_crc(p_953->g_641.f5, "p_953->g_641.f5", print_hash_value);
    transparent_crc(p_953->g_641.f6, "p_953->g_641.f6", print_hash_value);
    transparent_crc(p_953->g_641.f7, "p_953->g_641.f7", print_hash_value);
    transparent_crc(p_953->g_641.f8, "p_953->g_641.f8", print_hash_value);
    transparent_crc(p_953->g_641.f9, "p_953->g_641.f9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_953->g_643[i].f0, "p_953->g_643[i].f0", print_hash_value);
        transparent_crc(p_953->g_643[i].f1, "p_953->g_643[i].f1", print_hash_value);
        transparent_crc(p_953->g_643[i].f2, "p_953->g_643[i].f2", print_hash_value);
        transparent_crc(p_953->g_643[i].f3, "p_953->g_643[i].f3", print_hash_value);
        transparent_crc(p_953->g_643[i].f4, "p_953->g_643[i].f4", print_hash_value);
        transparent_crc(p_953->g_643[i].f5, "p_953->g_643[i].f5", print_hash_value);
        transparent_crc(p_953->g_643[i].f6, "p_953->g_643[i].f6", print_hash_value);
        transparent_crc(p_953->g_643[i].f7, "p_953->g_643[i].f7", print_hash_value);
        transparent_crc(p_953->g_643[i].f8, "p_953->g_643[i].f8", print_hash_value);
        transparent_crc(p_953->g_643[i].f9, "p_953->g_643[i].f9", print_hash_value);

    }
    transparent_crc(p_953->g_670.x, "p_953->g_670.x", print_hash_value);
    transparent_crc(p_953->g_670.y, "p_953->g_670.y", print_hash_value);
    transparent_crc(p_953->g_670.z, "p_953->g_670.z", print_hash_value);
    transparent_crc(p_953->g_670.w, "p_953->g_670.w", print_hash_value);
    transparent_crc(p_953->g_699.f0, "p_953->g_699.f0", print_hash_value);
    transparent_crc(p_953->g_699.f1, "p_953->g_699.f1", print_hash_value);
    transparent_crc(p_953->g_699.f2, "p_953->g_699.f2", print_hash_value);
    transparent_crc(p_953->g_699.f3, "p_953->g_699.f3", print_hash_value);
    transparent_crc(p_953->g_699.f4, "p_953->g_699.f4", print_hash_value);
    transparent_crc(p_953->g_699.f5, "p_953->g_699.f5", print_hash_value);
    transparent_crc(p_953->g_699.f6, "p_953->g_699.f6", print_hash_value);
    transparent_crc(p_953->g_699.f7, "p_953->g_699.f7", print_hash_value);
    transparent_crc(p_953->g_699.f8, "p_953->g_699.f8", print_hash_value);
    transparent_crc(p_953->g_699.f9, "p_953->g_699.f9", print_hash_value);
    transparent_crc(p_953->g_746.f0, "p_953->g_746.f0", print_hash_value);
    transparent_crc(p_953->g_746.f1, "p_953->g_746.f1", print_hash_value);
    transparent_crc(p_953->g_746.f2, "p_953->g_746.f2", print_hash_value);
    transparent_crc(p_953->g_746.f3, "p_953->g_746.f3", print_hash_value);
    transparent_crc(p_953->g_746.f4, "p_953->g_746.f4", print_hash_value);
    transparent_crc(p_953->g_746.f5, "p_953->g_746.f5", print_hash_value);
    transparent_crc(p_953->g_746.f6, "p_953->g_746.f6", print_hash_value);
    transparent_crc(p_953->g_746.f7, "p_953->g_746.f7", print_hash_value);
    transparent_crc(p_953->g_746.f8, "p_953->g_746.f8", print_hash_value);
    transparent_crc(p_953->g_746.f9, "p_953->g_746.f9", print_hash_value);
    transparent_crc(p_953->g_754.s0, "p_953->g_754.s0", print_hash_value);
    transparent_crc(p_953->g_754.s1, "p_953->g_754.s1", print_hash_value);
    transparent_crc(p_953->g_754.s2, "p_953->g_754.s2", print_hash_value);
    transparent_crc(p_953->g_754.s3, "p_953->g_754.s3", print_hash_value);
    transparent_crc(p_953->g_754.s4, "p_953->g_754.s4", print_hash_value);
    transparent_crc(p_953->g_754.s5, "p_953->g_754.s5", print_hash_value);
    transparent_crc(p_953->g_754.s6, "p_953->g_754.s6", print_hash_value);
    transparent_crc(p_953->g_754.s7, "p_953->g_754.s7", print_hash_value);
    transparent_crc(p_953->g_754.s8, "p_953->g_754.s8", print_hash_value);
    transparent_crc(p_953->g_754.s9, "p_953->g_754.s9", print_hash_value);
    transparent_crc(p_953->g_754.sa, "p_953->g_754.sa", print_hash_value);
    transparent_crc(p_953->g_754.sb, "p_953->g_754.sb", print_hash_value);
    transparent_crc(p_953->g_754.sc, "p_953->g_754.sc", print_hash_value);
    transparent_crc(p_953->g_754.sd, "p_953->g_754.sd", print_hash_value);
    transparent_crc(p_953->g_754.se, "p_953->g_754.se", print_hash_value);
    transparent_crc(p_953->g_754.sf, "p_953->g_754.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_953->g_777[i], "p_953->g_777[i]", print_hash_value);

    }
    transparent_crc(p_953->g_779, "p_953->g_779", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_953->g_780[i][j][k], "p_953->g_780[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_953->g_783, "p_953->g_783", print_hash_value);
    transparent_crc(p_953->g_790.f0, "p_953->g_790.f0", print_hash_value);
    transparent_crc(p_953->g_790.f1, "p_953->g_790.f1", print_hash_value);
    transparent_crc(p_953->g_790.f2, "p_953->g_790.f2", print_hash_value);
    transparent_crc(p_953->g_790.f3, "p_953->g_790.f3", print_hash_value);
    transparent_crc(p_953->g_790.f4, "p_953->g_790.f4", print_hash_value);
    transparent_crc(p_953->g_790.f5, "p_953->g_790.f5", print_hash_value);
    transparent_crc(p_953->g_790.f6, "p_953->g_790.f6", print_hash_value);
    transparent_crc(p_953->g_790.f7, "p_953->g_790.f7", print_hash_value);
    transparent_crc(p_953->g_790.f8, "p_953->g_790.f8", print_hash_value);
    transparent_crc(p_953->g_790.f9, "p_953->g_790.f9", print_hash_value);
    transparent_crc(p_953->g_798.f0, "p_953->g_798.f0", print_hash_value);
    transparent_crc(p_953->g_798.f1, "p_953->g_798.f1", print_hash_value);
    transparent_crc(p_953->g_798.f2, "p_953->g_798.f2", print_hash_value);
    transparent_crc(p_953->g_798.f3, "p_953->g_798.f3", print_hash_value);
    transparent_crc(p_953->g_798.f4, "p_953->g_798.f4", print_hash_value);
    transparent_crc(p_953->g_798.f5, "p_953->g_798.f5", print_hash_value);
    transparent_crc(p_953->g_798.f6, "p_953->g_798.f6", print_hash_value);
    transparent_crc(p_953->g_798.f7, "p_953->g_798.f7", print_hash_value);
    transparent_crc(p_953->g_798.f8, "p_953->g_798.f8", print_hash_value);
    transparent_crc(p_953->g_798.f9, "p_953->g_798.f9", print_hash_value);
    transparent_crc(p_953->g_808.s0, "p_953->g_808.s0", print_hash_value);
    transparent_crc(p_953->g_808.s1, "p_953->g_808.s1", print_hash_value);
    transparent_crc(p_953->g_808.s2, "p_953->g_808.s2", print_hash_value);
    transparent_crc(p_953->g_808.s3, "p_953->g_808.s3", print_hash_value);
    transparent_crc(p_953->g_808.s4, "p_953->g_808.s4", print_hash_value);
    transparent_crc(p_953->g_808.s5, "p_953->g_808.s5", print_hash_value);
    transparent_crc(p_953->g_808.s6, "p_953->g_808.s6", print_hash_value);
    transparent_crc(p_953->g_808.s7, "p_953->g_808.s7", print_hash_value);
    transparent_crc(p_953->g_808.s8, "p_953->g_808.s8", print_hash_value);
    transparent_crc(p_953->g_808.s9, "p_953->g_808.s9", print_hash_value);
    transparent_crc(p_953->g_808.sa, "p_953->g_808.sa", print_hash_value);
    transparent_crc(p_953->g_808.sb, "p_953->g_808.sb", print_hash_value);
    transparent_crc(p_953->g_808.sc, "p_953->g_808.sc", print_hash_value);
    transparent_crc(p_953->g_808.sd, "p_953->g_808.sd", print_hash_value);
    transparent_crc(p_953->g_808.se, "p_953->g_808.se", print_hash_value);
    transparent_crc(p_953->g_808.sf, "p_953->g_808.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_953->g_825[i][j][k], "p_953->g_825[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_953->g_861.s0, "p_953->g_861.s0", print_hash_value);
    transparent_crc(p_953->g_861.s1, "p_953->g_861.s1", print_hash_value);
    transparent_crc(p_953->g_861.s2, "p_953->g_861.s2", print_hash_value);
    transparent_crc(p_953->g_861.s3, "p_953->g_861.s3", print_hash_value);
    transparent_crc(p_953->g_861.s4, "p_953->g_861.s4", print_hash_value);
    transparent_crc(p_953->g_861.s5, "p_953->g_861.s5", print_hash_value);
    transparent_crc(p_953->g_861.s6, "p_953->g_861.s6", print_hash_value);
    transparent_crc(p_953->g_861.s7, "p_953->g_861.s7", print_hash_value);
    transparent_crc(p_953->g_861.s8, "p_953->g_861.s8", print_hash_value);
    transparent_crc(p_953->g_861.s9, "p_953->g_861.s9", print_hash_value);
    transparent_crc(p_953->g_861.sa, "p_953->g_861.sa", print_hash_value);
    transparent_crc(p_953->g_861.sb, "p_953->g_861.sb", print_hash_value);
    transparent_crc(p_953->g_861.sc, "p_953->g_861.sc", print_hash_value);
    transparent_crc(p_953->g_861.sd, "p_953->g_861.sd", print_hash_value);
    transparent_crc(p_953->g_861.se, "p_953->g_861.se", print_hash_value);
    transparent_crc(p_953->g_861.sf, "p_953->g_861.sf", print_hash_value);
    transparent_crc(p_953->g_865.x, "p_953->g_865.x", print_hash_value);
    transparent_crc(p_953->g_865.y, "p_953->g_865.y", print_hash_value);
    transparent_crc(p_953->g_867.s0, "p_953->g_867.s0", print_hash_value);
    transparent_crc(p_953->g_867.s1, "p_953->g_867.s1", print_hash_value);
    transparent_crc(p_953->g_867.s2, "p_953->g_867.s2", print_hash_value);
    transparent_crc(p_953->g_867.s3, "p_953->g_867.s3", print_hash_value);
    transparent_crc(p_953->g_867.s4, "p_953->g_867.s4", print_hash_value);
    transparent_crc(p_953->g_867.s5, "p_953->g_867.s5", print_hash_value);
    transparent_crc(p_953->g_867.s6, "p_953->g_867.s6", print_hash_value);
    transparent_crc(p_953->g_867.s7, "p_953->g_867.s7", print_hash_value);
    transparent_crc(p_953->g_867.s8, "p_953->g_867.s8", print_hash_value);
    transparent_crc(p_953->g_867.s9, "p_953->g_867.s9", print_hash_value);
    transparent_crc(p_953->g_867.sa, "p_953->g_867.sa", print_hash_value);
    transparent_crc(p_953->g_867.sb, "p_953->g_867.sb", print_hash_value);
    transparent_crc(p_953->g_867.sc, "p_953->g_867.sc", print_hash_value);
    transparent_crc(p_953->g_867.sd, "p_953->g_867.sd", print_hash_value);
    transparent_crc(p_953->g_867.se, "p_953->g_867.se", print_hash_value);
    transparent_crc(p_953->g_867.sf, "p_953->g_867.sf", print_hash_value);
    transparent_crc(p_953->g_870, "p_953->g_870", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_953->g_881[i].f0, "p_953->g_881[i].f0", print_hash_value);
        transparent_crc(p_953->g_881[i].f1, "p_953->g_881[i].f1", print_hash_value);
        transparent_crc(p_953->g_881[i].f2, "p_953->g_881[i].f2", print_hash_value);
        transparent_crc(p_953->g_881[i].f3, "p_953->g_881[i].f3", print_hash_value);
        transparent_crc(p_953->g_881[i].f4, "p_953->g_881[i].f4", print_hash_value);
        transparent_crc(p_953->g_881[i].f5, "p_953->g_881[i].f5", print_hash_value);
        transparent_crc(p_953->g_881[i].f6, "p_953->g_881[i].f6", print_hash_value);
        transparent_crc(p_953->g_881[i].f7, "p_953->g_881[i].f7", print_hash_value);
        transparent_crc(p_953->g_881[i].f8, "p_953->g_881[i].f8", print_hash_value);
        transparent_crc(p_953->g_881[i].f9, "p_953->g_881[i].f9", print_hash_value);

    }
    transparent_crc(p_953->g_897.x, "p_953->g_897.x", print_hash_value);
    transparent_crc(p_953->g_897.y, "p_953->g_897.y", print_hash_value);
    transparent_crc(p_953->g_898.s0, "p_953->g_898.s0", print_hash_value);
    transparent_crc(p_953->g_898.s1, "p_953->g_898.s1", print_hash_value);
    transparent_crc(p_953->g_898.s2, "p_953->g_898.s2", print_hash_value);
    transparent_crc(p_953->g_898.s3, "p_953->g_898.s3", print_hash_value);
    transparent_crc(p_953->g_898.s4, "p_953->g_898.s4", print_hash_value);
    transparent_crc(p_953->g_898.s5, "p_953->g_898.s5", print_hash_value);
    transparent_crc(p_953->g_898.s6, "p_953->g_898.s6", print_hash_value);
    transparent_crc(p_953->g_898.s7, "p_953->g_898.s7", print_hash_value);
    transparent_crc(p_953->g_903.x, "p_953->g_903.x", print_hash_value);
    transparent_crc(p_953->g_903.y, "p_953->g_903.y", print_hash_value);
    transparent_crc(p_953->g_929.s0, "p_953->g_929.s0", print_hash_value);
    transparent_crc(p_953->g_929.s1, "p_953->g_929.s1", print_hash_value);
    transparent_crc(p_953->g_929.s2, "p_953->g_929.s2", print_hash_value);
    transparent_crc(p_953->g_929.s3, "p_953->g_929.s3", print_hash_value);
    transparent_crc(p_953->g_929.s4, "p_953->g_929.s4", print_hash_value);
    transparent_crc(p_953->g_929.s5, "p_953->g_929.s5", print_hash_value);
    transparent_crc(p_953->g_929.s6, "p_953->g_929.s6", print_hash_value);
    transparent_crc(p_953->g_929.s7, "p_953->g_929.s7", print_hash_value);
    transparent_crc(p_953->g_938.x, "p_953->g_938.x", print_hash_value);
    transparent_crc(p_953->g_938.y, "p_953->g_938.y", print_hash_value);
    transparent_crc(p_953->g_942.x, "p_953->g_942.x", print_hash_value);
    transparent_crc(p_953->g_942.y, "p_953->g_942.y", print_hash_value);
    transparent_crc(p_953->v_collective, "p_953->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 69; i++)
            transparent_crc(p_953->g_special_values[i + 69 * get_linear_group_id()], "p_953->g_special_values[i + 69 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 69; i++)
            transparent_crc(p_953->l_special_values[i], "p_953->l_special_values[i]", print_hash_value);
    transparent_crc(p_953->l_comm_values[get_linear_local_id()], "p_953->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_953->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_953->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
