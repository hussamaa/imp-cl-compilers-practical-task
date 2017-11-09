// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 38,28,1 -l 1,14,1
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

__constant uint32_t permutations[10][14] = {
{4,7,13,11,1,5,2,8,9,12,0,3,10,6}, // permutation 0
{10,4,3,1,7,6,12,13,5,11,2,8,0,9}, // permutation 1
{11,9,1,3,0,8,6,12,2,7,13,5,4,10}, // permutation 2
{2,10,1,4,3,6,8,11,13,7,5,12,9,0}, // permutation 3
{6,4,8,12,2,7,9,11,3,5,10,13,0,1}, // permutation 4
{13,4,7,11,10,8,5,12,6,1,0,9,2,3}, // permutation 5
{7,3,12,0,10,11,4,1,9,2,8,6,13,5}, // permutation 6
{12,0,6,7,1,9,2,10,8,13,5,11,4,3}, // permutation 7
{9,11,13,7,4,2,12,5,10,1,6,8,0,3}, // permutation 8
{3,0,1,2,9,8,4,11,12,13,10,7,5,6} // permutation 9
};

// Seed: 3421783126

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   volatile uint32_t  f1;
   int8_t  f2;
   volatile int32_t  f3;
   volatile uint32_t  f4;
   volatile int16_t  f5;
   uint16_t  f6;
   volatile int8_t  f7;
   uint32_t  f8;
   int8_t  f9;
};

struct S1 {
   volatile uint64_t  f0;
   volatile struct S0  f1;
   struct S0  f2;
   uint32_t  f3;
   uint64_t  f4;
   uint32_t  f5;
};

struct S2 {
   volatile int32_t  f0;
   uint16_t  f1;
   volatile int8_t  f2;
   volatile uint32_t  f3;
   uint32_t  f4;
   uint32_t  f5;
   volatile int64_t  f6;
   struct S1  f7;
   int32_t  f8;
};

union U3 {
   int8_t * volatile  f0;
   struct S1  f1;
};

struct S4 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    int8_t g_12;
    uint64_t g_15[10][4];
    int32_t g_18;
    volatile int32_t g_24;
    volatile int32_t g_25[4];
    volatile uint8_t g_26;
    int32_t *g_65;
    int32_t **g_64;
    int64_t g_75;
    VECTOR(uint16_t, 4) g_77;
    struct S2 g_102[9];
    int16_t g_108;
    volatile int8_t *g_111;
    volatile int8_t ** volatile g_110;
    union U3 g_113;
    volatile struct S2 g_118[6];
    int8_t *g_129;
    volatile uint32_t g_136;
    struct S2 g_139;
    int64_t g_141;
    int64_t *g_140;
    struct S2 g_181;
    struct S2 ** volatile g_188;
    struct S2 ** volatile g_189;
    struct S2 *g_191[5][2];
    struct S2 ** volatile g_190;
    uint8_t g_216[5][6];
    VECTOR(uint32_t, 8) g_222;
    uint32_t g_239[2][7];
    int32_t g_257;
    volatile uint16_t g_269;
    int16_t g_272;
    volatile int16_t g_288;
    int16_t g_290;
    int8_t g_293[2][8];
    int16_t g_294;
    int32_t g_295;
    volatile VECTOR(int64_t, 8) g_301;
    volatile uint32_t g_304;
    int32_t *g_309;
    int64_t g_311;
    struct S1 g_313;
    struct S1 * volatile g_314;
    struct S1 * volatile g_315;
    int32_t * volatile g_332;
    VECTOR(int32_t, 16) g_403;
    volatile VECTOR(uint8_t, 16) g_406;
    int16_t *g_417;
    int16_t **g_416;
    struct S0 *g_426;
    struct S0 ** volatile g_425;
    VECTOR(uint16_t, 16) g_432;
    VECTOR(int32_t, 8) g_437;
    volatile int32_t *g_464;
    volatile struct S0 g_467[3][5];
    volatile struct S0 * volatile g_468;
    union U3 *g_472;
    volatile VECTOR(int64_t, 4) g_489;
    volatile struct S2 g_490;
    struct S1 g_500;
    volatile uint8_t g_503;
    uint8_t g_532;
    VECTOR(int32_t, 4) g_555;
    VECTOR(int32_t, 16) g_556;
    VECTOR(uint16_t, 2) g_587;
    int16_t ***g_594;
    int8_t *g_603;
    int8_t **g_602;
    int32_t **g_604;
    volatile struct S0 g_609;
    volatile struct S0 g_610;
    volatile struct S0 g_637;
    volatile struct S1 g_650;
    struct S0 g_665;
    struct S0 g_666;
    volatile VECTOR(uint8_t, 8) g_680;
    VECTOR(int32_t, 4) g_705;
    VECTOR(int8_t, 4) g_721;
    VECTOR(int16_t, 2) g_733;
    volatile VECTOR(uint16_t, 4) g_734;
    uint64_t g_763;
    uint16_t *g_768;
    uint16_t **g_767;
    int32_t g_780;
    struct S1 g_791;
    int32_t g_800[2][7][8];
    union U3 g_817;
    union U3 g_818[1][3][10];
    VECTOR(uint8_t, 8) g_835;
    int16_t * volatile *g_841;
    int16_t * volatile ** volatile g_840;
    int16_t * volatile ** volatile * volatile g_839;
    int16_t * volatile ** volatile * volatile *g_838;
    VECTOR(uint32_t, 16) g_853;
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
struct S0  func_1(struct S4 * p_891);
int32_t * func_7(uint64_t  p_8, int8_t * p_9, struct S4 * p_891);
uint8_t  func_53(int32_t ** p_54, uint64_t * p_55, struct S4 * p_891);
int32_t ** func_56(uint64_t  p_57, int8_t ** p_58, int8_t  p_59, int32_t ** p_60, int32_t * p_61, struct S4 * p_891);
uint64_t  func_66(uint8_t  p_67, uint16_t  p_68, int64_t  p_69, int32_t  p_70, uint32_t  p_71, struct S4 * p_891);
uint16_t  func_78(int8_t * p_79, uint64_t  p_80, int64_t * p_81, int32_t  p_82, uint64_t  p_83, struct S4 * p_891);
int8_t * func_85(uint8_t  p_86, uint32_t  p_87, int8_t * p_88, struct S4 * p_891);
int32_t * func_89(uint32_t  p_90, int64_t * p_91, int32_t * p_92, int8_t ** p_93, struct S4 * p_891);
struct S2  func_94(int16_t  p_95, struct S4 * p_891);
union U3  func_96(uint64_t  p_97, uint64_t  p_98, uint64_t  p_99, struct S4 * p_891);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_891->g_4 p_891->g_26 p_891->g_12 p_891->g_18 p_891->g_75 p_891->g_313.f3 p_891->g_532 p_891->g_181.f8 p_891->g_602 p_891->g_604 p_891->g_609 p_891->g_603 p_891->g_102.f8 p_891->g_64 p_891->g_637 p_891->g_139.f7.f3 p_891->g_665 p_891->g_15 p_891->g_403 p_891->g_332 p_891->g_139.f8 p_891->g_650.f0 p_891->g_181 p_891->g_190 p_891->g_763 p_891->g_464 p_891->g_767 p_891->g_102.f0 p_891->g_594 p_891->g_416 p_891->g_417 p_891->g_467.f7 p_891->g_239 p_891->g_472 p_891->g_293 p_891->g_118.f7.f1.f1 p_891->g_500.f2.f6 p_891->g_838 p_891->g_257 p_891->g_666.f8 p_891->g_313.f2.f8 p_891->g_222 p_891->g_102.f7.f2.f6 p_891->g_136 p_891->g_139 p_891->g_118 p_891->g_102.f7.f2.f3 p_891->g_comm_values p_891->g_272 p_891->g_500.f2.f1 p_891->g_426 p_891->g_313.f2
 * writes: p_891->g_4 p_891->g_15 p_891->g_26 p_891->g_12 p_891->g_18 p_891->g_64 p_891->g_75 p_891->g_139.f7.f2.f9 p_891->g_532 p_891->g_181.f8 p_891->g_313.f5 p_891->g_610 p_891->g_603 p_891->g_102.f8 p_891->g_239 p_891->g_666 p_891->g_403 p_891->g_272 p_891->g_139.f8 p_891->g_139.f7.f2.f8 p_891->g_102 p_891->g_141 p_891->g_139.f7.f2.f6 p_891->g_191 p_891->g_65 p_891->g_181.f4 p_891->g_763 p_891->g_767 p_891->g_313.f4 p_891->g_800 p_891->g_500.f2.f6 p_891->g_129 p_891->g_136 p_891->g_108 p_891->g_139
 */
struct S0  func_1(struct S4 * p_891)
{ /* block id: 4 */
    int8_t *l_11 = &p_891->g_12;
    int32_t l_34[4][4][10] = {{{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L}},{{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L}},{{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L}},{{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L},{0x18D42F46L,0x2C279A1AL,(-1L),6L,0x17289F16L,6L,(-1L),0x2C279A1AL,0x18D42F46L,1L}}};
    int64_t *l_310 = &p_891->g_311;
    int16_t l_316 = 0x05DFL;
    int32_t l_861 = 0x68D8DE33L;
    uint32_t l_862 = 0xF2B3CCB3L;
    int i, j, k;
    for (p_891->g_4 = 0; (p_891->g_4 <= 9); p_891->g_4 = safe_add_func_uint64_t_u_u(p_891->g_4, 1))
    { /* block id: 7 */
        int8_t *l_10[9];
        int8_t **l_13 = &l_11;
        uint64_t *l_14 = &p_891->g_15[0][1];
        int32_t *l_33 = &p_891->g_18;
        int32_t **l_32 = &l_33;
        int i;
        for (i = 0; i < 9; i++)
            l_10[i] = (void*)0;
        (*l_32) = func_7(((*l_14) = (l_10[5] == ((*l_13) = l_11))), &p_891->g_12, p_891);
    }
    if ((l_34[2][0][3] , 0L))
    { /* block id: 20 */
        int32_t *l_63 = &p_891->g_4;
        int32_t **l_62 = &l_63;
        int32_t *l_860[10][3][4] = {{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}},{{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8},{(void*)0,(void*)0,(void*)0,&p_891->g_181.f8}}};
        int i, j, k;
        for (p_891->g_18 = 2; (p_891->g_18 == (-9)); --p_891->g_18)
        { /* block id: 23 */
            uint8_t l_46 = 0xE7L;
            VECTOR(uint16_t, 8) l_76 = (VECTOR(uint16_t, 8))(0x2390L, (VECTOR(uint16_t, 4))(0x2390L, (VECTOR(uint16_t, 2))(0x2390L, 1UL), 1UL), 1UL, 0x2390L, 1UL);
            int i;
            for (p_891->g_4 = 0; (p_891->g_4 <= (-9)); p_891->g_4--)
            { /* block id: 26 */
                int32_t *l_41 = &l_34[2][0][3];
                int32_t *l_42 = &l_34[2][0][3];
                int32_t *l_43 = &l_34[0][0][5];
                int32_t *l_44 = &l_34[2][0][3];
                int32_t *l_45 = &l_34[1][3][2];
                for (p_891->g_12 = 28; (p_891->g_12 != (-26)); p_891->g_12--)
                { /* block id: 29 */
                    if (p_891->g_18)
                        break;
                }
                ++l_46;
            }
            for (p_891->g_4 = 16; (p_891->g_4 == 18); ++p_891->g_4)
            { /* block id: 36 */
                int64_t *l_72 = (void*)0;
                int64_t *l_73 = (void*)0;
                int64_t *l_74 = &p_891->g_75;
                int8_t *l_84 = &p_891->g_12;
                int32_t l_312 = 2L;
                int32_t l_859 = 0x70E52D14L;
                l_859 &= ((safe_rshift_func_uint8_t_u_s(func_53(func_56(((((p_891->g_64 = l_62) == (void*)0) == func_66(l_34[2][2][7], p_891->g_18, ((*l_74) |= (~1L)), (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(0x81DCL, ((VECTOR(uint16_t, 8))(0x026CL, ((VECTOR(uint16_t, 2))(l_76.s11)), 65526UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_891->g_77.wzywzywywzxyxyyx)).sdd58)), 2UL, 0x24FAL, GROUP_DIVERGE(2, 1), 0x0C70L, func_78(((l_84 == l_11) , func_85(l_34[2][0][3], p_891->l_comm_values[(safe_mod_func_uint32_t_u_u(p_891->tid, 14))], l_84, p_891)), p_891->g_222.s5, l_310, l_34[2][0][3], l_312, p_891), 0x5235L, 0x6B93L, ((VECTOR(uint16_t, 4))(65530UL)), 0xBF90L)).s10)), 65535UL, 0xAAB9L)), 0UL, ((VECTOR(uint16_t, 2))(1UL)), 0xCBD8L, 0xB9DCL, 0x690EL, 0xD9E9L)).sfc, ((VECTOR(uint16_t, 2))(0x4260L))))), p_891->g_102[1].f7.f1.f8, l_316, l_76.s4, GROUP_DIVERGE(2, 1), 65529UL, 0x6D5BL)))).s2 , 0L), p_891->g_313.f3, p_891)) != (**l_62)), p_891->g_602, l_34[1][0][4], p_891->g_604, &l_312, p_891), &p_891->g_15[0][1], p_891), l_34[2][0][3])) && (**p_891->g_416));
                return (*p_891->g_426);
            }
        }
        --l_862;
    }
    else
    { /* block id: 391 */
        if ((atomic_inc(&p_891->l_atomic_input[9]) == 8))
        { /* block id: 393 */
            uint8_t l_865 = 0x22L;
            uint64_t l_866 = 0UL;
            struct S2 l_867[5] = {{0L,0UL,-1L,6UL,0x1F790972L,4294967292UL,0x01CBD785B9764136L,{18446744073709551615UL,{0xFA068D72L,4UL,0x44L,0x059F4C0FL,0x68DB871AL,0x754DL,0x8F8DL,0x6EL,0UL,-6L},{4294967292UL,0UL,-6L,0x0487CC84L,5UL,-1L,0xB988L,0x7DL,0x4CDB8052L,1L},0x9B7423EBL,18446744073709551610UL,0x83029CC4L},1L},{0L,0UL,-1L,6UL,0x1F790972L,4294967292UL,0x01CBD785B9764136L,{18446744073709551615UL,{0xFA068D72L,4UL,0x44L,0x059F4C0FL,0x68DB871AL,0x754DL,0x8F8DL,0x6EL,0UL,-6L},{4294967292UL,0UL,-6L,0x0487CC84L,5UL,-1L,0xB988L,0x7DL,0x4CDB8052L,1L},0x9B7423EBL,18446744073709551610UL,0x83029CC4L},1L},{0L,0UL,-1L,6UL,0x1F790972L,4294967292UL,0x01CBD785B9764136L,{18446744073709551615UL,{0xFA068D72L,4UL,0x44L,0x059F4C0FL,0x68DB871AL,0x754DL,0x8F8DL,0x6EL,0UL,-6L},{4294967292UL,0UL,-6L,0x0487CC84L,5UL,-1L,0xB988L,0x7DL,0x4CDB8052L,1L},0x9B7423EBL,18446744073709551610UL,0x83029CC4L},1L},{0L,0UL,-1L,6UL,0x1F790972L,4294967292UL,0x01CBD785B9764136L,{18446744073709551615UL,{0xFA068D72L,4UL,0x44L,0x059F4C0FL,0x68DB871AL,0x754DL,0x8F8DL,0x6EL,0UL,-6L},{4294967292UL,0UL,-6L,0x0487CC84L,5UL,-1L,0xB988L,0x7DL,0x4CDB8052L,1L},0x9B7423EBL,18446744073709551610UL,0x83029CC4L},1L},{0L,0UL,-1L,6UL,0x1F790972L,4294967292UL,0x01CBD785B9764136L,{18446744073709551615UL,{0xFA068D72L,4UL,0x44L,0x059F4C0FL,0x68DB871AL,0x754DL,0x8F8DL,0x6EL,0UL,-6L},{4294967292UL,0UL,-6L,0x0487CC84L,5UL,-1L,0xB988L,0x7DL,0x4CDB8052L,1L},0x9B7423EBL,18446744073709551610UL,0x83029CC4L},1L}};
            struct S2 l_868[5] = {{0x2DCBAB73L,1UL,5L,4294967295UL,0x528C5748L,4294967295UL,1L,{5UL,{0x6585AAD4L,0x08919363L,0x46L,0x3C563CC7L,0x07FDF5C8L,-9L,65535UL,0L,4294967295UL,0x4AL},{1UL,0UL,0x49L,0x5B82751DL,0x972AB5B7L,0L,1UL,1L,4294967295UL,0x4EL},0xC8308C61L,7UL,1UL},0x40793013L},{0x2DCBAB73L,1UL,5L,4294967295UL,0x528C5748L,4294967295UL,1L,{5UL,{0x6585AAD4L,0x08919363L,0x46L,0x3C563CC7L,0x07FDF5C8L,-9L,65535UL,0L,4294967295UL,0x4AL},{1UL,0UL,0x49L,0x5B82751DL,0x972AB5B7L,0L,1UL,1L,4294967295UL,0x4EL},0xC8308C61L,7UL,1UL},0x40793013L},{0x2DCBAB73L,1UL,5L,4294967295UL,0x528C5748L,4294967295UL,1L,{5UL,{0x6585AAD4L,0x08919363L,0x46L,0x3C563CC7L,0x07FDF5C8L,-9L,65535UL,0L,4294967295UL,0x4AL},{1UL,0UL,0x49L,0x5B82751DL,0x972AB5B7L,0L,1UL,1L,4294967295UL,0x4EL},0xC8308C61L,7UL,1UL},0x40793013L},{0x2DCBAB73L,1UL,5L,4294967295UL,0x528C5748L,4294967295UL,1L,{5UL,{0x6585AAD4L,0x08919363L,0x46L,0x3C563CC7L,0x07FDF5C8L,-9L,65535UL,0L,4294967295UL,0x4AL},{1UL,0UL,0x49L,0x5B82751DL,0x972AB5B7L,0L,1UL,1L,4294967295UL,0x4EL},0xC8308C61L,7UL,1UL},0x40793013L},{0x2DCBAB73L,1UL,5L,4294967295UL,0x528C5748L,4294967295UL,1L,{5UL,{0x6585AAD4L,0x08919363L,0x46L,0x3C563CC7L,0x07FDF5C8L,-9L,65535UL,0L,4294967295UL,0x4AL},{1UL,0UL,0x49L,0x5B82751DL,0x972AB5B7L,0L,1UL,1L,4294967295UL,0x4EL},0xC8308C61L,7UL,1UL},0x40793013L}};
            int i;
            l_866 ^= l_865;
            l_868[3] = l_867[1];
            for (l_868[3].f4 = 10; (l_868[3].f4 != 33); l_868[3].f4 = safe_add_func_uint32_t_u_u(l_868[3].f4, 5))
            { /* block id: 398 */
                int32_t l_871 = 0x5AB8CA45L;
                uint16_t l_887 = 0x6C7BL;
                union U3 l_890 = {0};/* VOLATILE GLOBAL l_890 */
                union U3 *l_889[9][10][2] = {{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}},{{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890},{(void*)0,&l_890}}};
                union U3 **l_888 = &l_889[4][5][0];
                int i, j, k;
                for (l_871 = 0; (l_871 > (-6)); l_871 = safe_sub_func_int64_t_s_s(l_871, 5))
                { /* block id: 401 */
                    int32_t l_874 = 0x68524B11L;
                    for (l_874 = (-1); (l_874 >= (-29)); l_874--)
                    { /* block id: 404 */
                        int64_t l_877 = 1L;
                        uint64_t l_878 = 0xD089EBB2D9BE22A7L;
                        uint64_t l_879 = 0UL;
                        int16_t l_880 = 0L;
                        int32_t *l_881 = (void*)0;
                        int32_t l_883 = 9L;
                        int32_t *l_882 = &l_883;
                        int16_t l_884 = 0x3B71L;
                        uint64_t l_885[1];
                        int16_t l_886 = 0x0D3CL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_885[i] = 1UL;
                        l_878 = l_877;
                        l_868[3].f0 ^= (l_868[3].f8 = (l_880 = l_879));
                        l_882 = (l_881 = (void*)0);
                        l_867[1].f0 |= (l_868[3].f8 = ((l_885[0] = l_884) , l_886));
                    }
                }
                l_868[3].f0 = l_887;
                l_888 = (void*)0;
                l_867[1].f0 |= (-1L);
            }
            unsigned int result = 0;
            result += l_865;
            result += l_866;
            int l_867_i0;
            for (l_867_i0 = 0; l_867_i0 < 5; l_867_i0++) {
                result += l_867[l_867_i0].f0;
                result += l_867[l_867_i0].f1;
                result += l_867[l_867_i0].f2;
                result += l_867[l_867_i0].f3;
                result += l_867[l_867_i0].f4;
                result += l_867[l_867_i0].f5;
                result += l_867[l_867_i0].f6;
                result += l_867[l_867_i0].f7.f0;
                result += l_867[l_867_i0].f7.f1.f0;
                result += l_867[l_867_i0].f7.f1.f1;
                result += l_867[l_867_i0].f7.f1.f2;
                result += l_867[l_867_i0].f7.f1.f3;
                result += l_867[l_867_i0].f7.f1.f4;
                result += l_867[l_867_i0].f7.f1.f5;
                result += l_867[l_867_i0].f7.f1.f6;
                result += l_867[l_867_i0].f7.f1.f7;
                result += l_867[l_867_i0].f7.f1.f8;
                result += l_867[l_867_i0].f7.f1.f9;
                result += l_867[l_867_i0].f7.f2.f0;
                result += l_867[l_867_i0].f7.f2.f1;
                result += l_867[l_867_i0].f7.f2.f2;
                result += l_867[l_867_i0].f7.f2.f3;
                result += l_867[l_867_i0].f7.f2.f4;
                result += l_867[l_867_i0].f7.f2.f5;
                result += l_867[l_867_i0].f7.f2.f6;
                result += l_867[l_867_i0].f7.f2.f7;
                result += l_867[l_867_i0].f7.f2.f8;
                result += l_867[l_867_i0].f7.f2.f9;
                result += l_867[l_867_i0].f7.f3;
                result += l_867[l_867_i0].f7.f4;
                result += l_867[l_867_i0].f7.f5;
                result += l_867[l_867_i0].f8;
            }
            int l_868_i0;
            for (l_868_i0 = 0; l_868_i0 < 5; l_868_i0++) {
                result += l_868[l_868_i0].f0;
                result += l_868[l_868_i0].f1;
                result += l_868[l_868_i0].f2;
                result += l_868[l_868_i0].f3;
                result += l_868[l_868_i0].f4;
                result += l_868[l_868_i0].f5;
                result += l_868[l_868_i0].f6;
                result += l_868[l_868_i0].f7.f0;
                result += l_868[l_868_i0].f7.f1.f0;
                result += l_868[l_868_i0].f7.f1.f1;
                result += l_868[l_868_i0].f7.f1.f2;
                result += l_868[l_868_i0].f7.f1.f3;
                result += l_868[l_868_i0].f7.f1.f4;
                result += l_868[l_868_i0].f7.f1.f5;
                result += l_868[l_868_i0].f7.f1.f6;
                result += l_868[l_868_i0].f7.f1.f7;
                result += l_868[l_868_i0].f7.f1.f8;
                result += l_868[l_868_i0].f7.f1.f9;
                result += l_868[l_868_i0].f7.f2.f0;
                result += l_868[l_868_i0].f7.f2.f1;
                result += l_868[l_868_i0].f7.f2.f2;
                result += l_868[l_868_i0].f7.f2.f3;
                result += l_868[l_868_i0].f7.f2.f4;
                result += l_868[l_868_i0].f7.f2.f5;
                result += l_868[l_868_i0].f7.f2.f6;
                result += l_868[l_868_i0].f7.f2.f7;
                result += l_868[l_868_i0].f7.f2.f8;
                result += l_868[l_868_i0].f7.f2.f9;
                result += l_868[l_868_i0].f7.f3;
                result += l_868[l_868_i0].f7.f4;
                result += l_868[l_868_i0].f7.f5;
                result += l_868[l_868_i0].f8;
            }
            atomic_add(&p_891->l_special_values[9], result);
        }
        else
        { /* block id: 420 */
            (1 + 1);
        }
    }
    return (*p_891->g_426);
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_26 p_891->g_12
 * writes: p_891->g_26 p_891->g_12
 */
int32_t * func_7(uint64_t  p_8, int8_t * p_9, struct S4 * p_891)
{ /* block id: 10 */
    int32_t *l_16 = (void*)0;
    int32_t *l_17 = &p_891->g_18;
    int32_t *l_19 = &p_891->g_18;
    int32_t *l_20 = &p_891->g_18;
    int32_t *l_21 = &p_891->g_18;
    int32_t *l_22 = &p_891->g_18;
    int32_t *l_23[4][7][4] = {{{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0}},{{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0}},{{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0}},{{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0},{&p_891->g_4,&p_891->g_18,&p_891->g_4,(void*)0}}};
    int32_t *l_31 = &p_891->g_18;
    int i, j, k;
    --p_891->g_26;
    for (p_891->g_12 = 0; (p_891->g_12 == (-27)); p_891->g_12--)
    { /* block id: 14 */
        return l_16;
    }
    return l_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_532 p_891->g_65 p_891->g_309 p_891->g_332 p_891->g_181.f8 p_891->g_665 p_891->g_15 p_891->g_680 p_891->g_403 p_891->g_666.f9 p_891->g_666.f8 p_891->g_666.f6 p_891->g_139.f8 p_891->g_650.f0 p_891->g_181 p_891->g_190 p_891->g_102.f8 p_891->g_705 p_891->g_721 p_891->g_733 p_891->g_734 p_891->g_77 p_891->g_293 p_891->g_763 p_891->g_464 p_891->g_767 p_891->g_313.f4 p_891->g_102.f0 p_891->g_594 p_891->g_416 p_891->g_417 p_891->g_467.f7 p_891->g_239 p_891->g_472 p_891->g_603 p_891->g_118.f7.f1.f1 p_891->g_500.f2.f6 p_891->g_835 p_891->g_838 p_891->g_853 p_891->g_257 p_891->g_313.f2.f8 p_891->g_222 p_891->g_26 p_891->g_102.f7.f2.f6 p_891->g_136 p_891->g_139 p_891->g_118 p_891->g_102.f7.f2.f3 p_891->g_18 p_891->g_comm_values p_891->g_272 p_891->g_500.f2.f1
 * writes: p_891->g_532 p_891->g_666 p_891->g_403 p_891->g_272 p_891->g_139.f8 p_891->g_139.f7.f2.f8 p_891->g_102 p_891->g_141 p_891->g_139.f7.f2.f6 p_891->g_191 p_891->g_65 p_891->g_181.f4 p_891->g_15 p_891->g_181.f8 p_891->g_763 p_891->g_767 p_891->g_313.f4 p_891->g_800 p_891->g_239 p_891->g_500.f2.f6 p_891->g_26 p_891->g_12 p_891->g_129 p_891->g_136 p_891->g_108 p_891->g_139
 */
uint8_t  func_53(int32_t ** p_54, uint64_t * p_55, struct S4 * p_891)
{ /* block id: 302 */
    uint64_t l_658 = 18446744073709551615UL;
    uint8_t *l_661 = &p_891->g_532;
    VECTOR(uint8_t, 16) l_662 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x57L), 0x57L), 0x57L, 1UL, 0x57L, (VECTOR(uint8_t, 2))(1UL, 0x57L), (VECTOR(uint8_t, 2))(1UL, 0x57L), 1UL, 0x57L, 1UL, 0x57L);
    VECTOR(uint64_t, 2) l_663 = (VECTOR(uint64_t, 2))(1UL, 0xE928BCD97A17E5B5L);
    int8_t **l_664[10][5] = {{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0},{&p_891->g_129,&p_891->g_603,&p_891->g_603,(void*)0,(void*)0}};
    VECTOR(uint64_t, 8) l_670 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 1UL, 18446744073709551608UL);
    int32_t l_713 = 0L;
    VECTOR(int8_t, 4) l_722 = (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x7BL), 0x7BL);
    int32_t l_779 = 0L;
    VECTOR(int8_t, 4) l_781 = (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-1L)), (-1L));
    int32_t l_782[9][1][2] = {{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}},{{(-2L),0x7C95ADD3L}}};
    uint16_t ***l_826 = &p_891->g_767;
    int i, j, k;
    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((safe_rshift_func_int16_t_s_u((l_658 > ((safe_rshift_func_int16_t_s_u((((*l_661) ^= (l_658 > l_658)) <= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_662.sa3a4f2ff)).lo)).xyzxzyxz)).s3), ((18446744073709551615UL < ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(l_663.xyxx)).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(18446744073709551610UL, ((VECTOR(uint64_t, 4))((l_664[9][3] != &p_891->g_129), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x6BB7BC558555E171L, 0xAFE64A462F2BAE0EL)))), 1UL)), 0xE1C376364160BC73L, (p_891->g_65 != p_891->g_309), FAKE_DIVERGE(p_891->local_0_offset, get_local_id(0), 10), 0xD594A2D8D041CB5CL, ((VECTOR(uint64_t, 2))(0x2548362E2526D13BL)), ((VECTOR(uint64_t, 2))(0x13A86F7DAB77B563L)), 18446744073709551608UL, 0x4151170EDD8A4546L, 18446744073709551615UL)).lo, ((VECTOR(uint64_t, 8))(18446744073709551611UL))))).s36, ((VECTOR(uint64_t, 2))(0x5C925112E38CC956L))))).xyxy)))).lo))))).yxyxyyxy)).s7) & (*p_891->g_332)))) || l_658)), l_663.x)), 1L, ((VECTOR(int32_t, 4))(0x186407DAL)), ((VECTOR(int32_t, 4))(2L)), 1L, 0L, (-8L), ((VECTOR(int32_t, 2))(0x2AD7DBE2L)), 0x3541CCACL)).sb7ce)).z)
    { /* block id: 304 */
        int64_t l_669 = 1L;
        int8_t **l_671 = &p_891->g_603;
        int8_t ***l_672 = &l_671;
        VECTOR(int16_t, 8) l_677 = (VECTOR(int16_t, 8))(0x73D0L, (VECTOR(int16_t, 4))(0x73D0L, (VECTOR(int16_t, 2))(0x73D0L, 0x58F8L), 0x58F8L), 0x58F8L, 0x73D0L, 0x58F8L);
        int32_t *l_681[2];
        int i;
        for (i = 0; i < 2; i++)
            l_681[i] = (void*)0;
        p_891->g_666 = p_891->g_665;
        p_891->g_403.sc |= (safe_mul_func_int8_t_s_s(((*p_55) < (l_669 ^ l_662.sf)), ((((((VECTOR(uint64_t, 2))(l_670.s65)).even ^ (&p_891->g_129 == ((*l_672) = l_671))) | (-7L)) | ((*l_661)++)) < ((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(l_677.s43543347)).s7063340156413442, ((VECTOR(int16_t, 8))(0L, 7L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x22EBL, 0x2640L)).xyyyxxxxyxyxyyxy)).scf)))), ((VECTOR(int16_t, 4))(0x201BL, (l_669 | (safe_add_func_int32_t_s_s((0L >= (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_891->g_680.s44275602)).s73)).hi >= 0x50L)), 0L))), 0x33CCL, 0x1205L)))).s2502477304505416, ((VECTOR(int16_t, 16))(0x678EL))))).s0, l_669)) | l_677.s7))));
        for (p_891->g_666.f9 = 0; (p_891->g_666.f9 >= 16); p_891->g_666.f9++)
        { /* block id: 311 */
            union U3 **l_691[10] = {(void*)0,&p_891->g_472,(void*)0,(void*)0,&p_891->g_472,(void*)0,(void*)0,&p_891->g_472,(void*)0,(void*)0};
            int i;
            for (p_891->g_666.f8 = (-22); (p_891->g_666.f8 < 51); ++p_891->g_666.f8)
            { /* block id: 314 */
                int32_t l_686 = 4L;
                union U3 **l_689[2][4] = {{&p_891->g_472,&p_891->g_472,&p_891->g_472,&p_891->g_472},{&p_891->g_472,&p_891->g_472,&p_891->g_472,&p_891->g_472}};
                int i, j;
                if (l_686)
                    break;
                for (p_891->g_666.f6 = (-7); (p_891->g_666.f6 > 30); p_891->g_666.f6 = safe_add_func_int16_t_s_s(p_891->g_666.f6, 9))
                { /* block id: 318 */
                    union U3 ***l_690[9][1][8] = {{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}},{{&l_689[0][3],&l_689[1][2],(void*)0,&l_689[0][1],&l_689[0][1],&l_689[1][2],(void*)0,(void*)0}}};
                    int i, j, k;
                    l_691[1] = l_689[0][1];
                }
            }
        }
    }
    else
    { /* block id: 323 */
        uint8_t l_692 = 255UL;
        l_692++;
        for (p_891->g_666.f8 = 0; (p_891->g_666.f8 <= 58); p_891->g_666.f8 = safe_add_func_uint64_t_u_u(p_891->g_666.f8, 4))
        { /* block id: 327 */
            int32_t *l_699 = &p_891->g_139.f8;
            int8_t **l_700 = &p_891->g_603;
            for (p_891->g_272 = 0; (p_891->g_272 > 10); ++p_891->g_272)
            { /* block id: 330 */
                return l_692;
            }
            (*l_699) ^= (*p_891->g_332);
            if ((*p_891->g_332))
                continue;
            (*p_54) = func_89(p_891->g_650.f0, &p_891->g_141, l_699, l_700, p_891);
        }
    }
    for (p_891->g_666.f6 = 0; (p_891->g_666.f6 <= 35); p_891->g_666.f6 = safe_add_func_int8_t_s_s(p_891->g_666.f6, 6))
    { /* block id: 340 */
        VECTOR(int32_t, 16) l_707 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int32_t, 2))(5L, (-1L)), (VECTOR(int32_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
        VECTOR(int32_t, 4) l_708 = (VECTOR(int32_t, 4))(0x7DC1B9B0L, (VECTOR(int32_t, 2))(0x7DC1B9B0L, 0x0E33D197L), 0x0E33D197L);
        VECTOR(int32_t, 16) l_710 = (VECTOR(int32_t, 16))(0x135AC4E4L, (VECTOR(int32_t, 4))(0x135AC4E4L, (VECTOR(int32_t, 2))(0x135AC4E4L, 0x1EAA3DBCL), 0x1EAA3DBCL), 0x1EAA3DBCL, 0x135AC4E4L, 0x1EAA3DBCL, (VECTOR(int32_t, 2))(0x135AC4E4L, 0x1EAA3DBCL), (VECTOR(int32_t, 2))(0x135AC4E4L, 0x1EAA3DBCL), 0x135AC4E4L, 0x1EAA3DBCL, 0x135AC4E4L, 0x1EAA3DBCL);
        VECTOR(int32_t, 4) l_712 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x6B819251L), 0x6B819251L);
        VECTOR(uint8_t, 4) l_718 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xB5L), 0xB5L);
        VECTOR(uint8_t, 2) l_719 = (VECTOR(uint8_t, 2))(0x63L, 253UL);
        VECTOR(int32_t, 16) l_740 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x18872E23L), 0x18872E23L), 0x18872E23L, (-2L), 0x18872E23L, (VECTOR(int32_t, 2))((-2L), 0x18872E23L), (VECTOR(int32_t, 2))((-2L), 0x18872E23L), (-2L), 0x18872E23L, (-2L), 0x18872E23L);
        int16_t ****l_747 = &p_891->g_594;
        VECTOR(int8_t, 8) l_760 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 9L), 9L), 9L, (-3L), 9L);
        struct S2 *l_764 = &p_891->g_181;
        struct S1 *l_790[10];
        VECTOR(uint16_t, 2) l_792 = (VECTOR(uint16_t, 2))(0x2026L, 0x05C1L);
        uint8_t *l_814 = &p_891->g_216[4][0];
        VECTOR(uint64_t, 16) l_850 = (VECTOR(uint64_t, 16))(0x411C59AAF93AFB4FL, (VECTOR(uint64_t, 4))(0x411C59AAF93AFB4FL, (VECTOR(uint64_t, 2))(0x411C59AAF93AFB4FL, 1UL), 1UL), 1UL, 0x411C59AAF93AFB4FL, 1UL, (VECTOR(uint64_t, 2))(0x411C59AAF93AFB4FL, 1UL), (VECTOR(uint64_t, 2))(0x411C59AAF93AFB4FL, 1UL), 0x411C59AAF93AFB4FL, 1UL, 0x411C59AAF93AFB4FL, 1UL);
        VECTOR(uint64_t, 2) l_851 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x7B4F4C5E1938EA15L);
        VECTOR(uint32_t, 4) l_852 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD38436BEL), 0xD38436BEL);
        int i;
        for (i = 0; i < 10; i++)
            l_790[i] = &p_891->g_791;
        for (p_891->g_181.f4 = 16; (p_891->g_181.f4 != 59); ++p_891->g_181.f4)
        { /* block id: 343 */
            VECTOR(int32_t, 16) l_706 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5645C121L), 0x5645C121L), 0x5645C121L, (-1L), 0x5645C121L, (VECTOR(int32_t, 2))((-1L), 0x5645C121L), (VECTOR(int32_t, 2))((-1L), 0x5645C121L), (-1L), 0x5645C121L, (-1L), 0x5645C121L);
            int64_t l_709 = 4L;
            VECTOR(int32_t, 16) l_711 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x02D48EB6L), 0x02D48EB6L), 0x02D48EB6L, 1L, 0x02D48EB6L, (VECTOR(int32_t, 2))(1L, 0x02D48EB6L), (VECTOR(int32_t, 2))(1L, 0x02D48EB6L), 1L, 0x02D48EB6L, 1L, 0x02D48EB6L);
            VECTOR(int8_t, 2) l_720 = (VECTOR(int8_t, 2))(0x51L, 0x42L);
            uint16_t l_730 = 0xB0A4L;
            VECTOR(int64_t, 2) l_736 = (VECTOR(int64_t, 2))(0x0E07C1B3FCCBE505L, 0L);
            struct S2 *l_766 = &p_891->g_102[1];
            VECTOR(uint64_t, 16) l_783 = (VECTOR(uint64_t, 16))(0xB4CA3C82317A4B5AL, (VECTOR(uint64_t, 4))(0xB4CA3C82317A4B5AL, (VECTOR(uint64_t, 2))(0xB4CA3C82317A4B5AL, 6UL), 6UL), 6UL, 0xB4CA3C82317A4B5AL, 6UL, (VECTOR(uint64_t, 2))(0xB4CA3C82317A4B5AL, 6UL), (VECTOR(uint64_t, 2))(0xB4CA3C82317A4B5AL, 6UL), 0xB4CA3C82317A4B5AL, 6UL, 0xB4CA3C82317A4B5AL, 6UL);
            union U3 *l_816[8][3] = {{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817},{&p_891->g_817,&p_891->g_817,&p_891->g_817}};
            int64_t l_819 = 0x29CA421E729BDDB8L;
            uint8_t l_823 = 0UL;
            int16_t *****l_828 = (void*)0;
            int32_t *l_856 = &p_891->g_181.f8;
            int32_t *l_857[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            struct S2 *l_858 = &p_891->g_139;
            int i, j;
            if ((&p_891->g_140 != (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 16))(p_891->g_705.xzyyyxwyyzyzzxxx)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_706.sdf4a8a12e6ea4610)).s8c)).yxyx, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_707.s36182cce38ef772c)), ((VECTOR(int32_t, 4))(l_708.y, l_707.s9, 0x538EBCF2L, 0x1FD9AEC4L)).wyxxzxxzxzwyzwyx))).s5977))).yyzzywxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x6E20F3AAL, 0x6A088D52L, l_709, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_710.s7c99)))).xyyxywzw, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x649CF861L, (-2L))).xxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_711.sa6a6fab20c5dc8ff)).s5da2)).wxzyzzxz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_708.x, ((VECTOR(int32_t, 2))(0L, 0x7E2CCF88L)), 0L)).wzwxwwwwywwzwzyw)).even))))).s5414154623573675)).even)).hi))).wzzywxyzywxzwzzx, ((VECTOR(int32_t, 2))(l_712.yw)).xxxxyxyyyxxxyyxx))).odd))), (l_708.x & (--(*l_661))), 0L, (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_718.xzyz)).wxywxxwzyxyzwzxx)).hi)).s65)).xyyyxxxx, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(l_719.xxxxyxxx))))).lo)).yzwywwyxwzwyyyyx)).s0f97, ((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_720.xy)), 0x65L, 1L)).wzwxyzzz, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_891->g_721.yz)), 0x13L, 0x3DL)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(l_722.xzyzxwxwxyywywxz)).s7a, (int8_t)(safe_div_func_int32_t_s_s(l_712.w, (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_u((0xEBA6BE238396FC66L != (((l_670.s1 , (*p_55)) & l_730) ^ l_662.s2)), GROUP_DIVERGE(1, 1))))), l_713))))))), ((VECTOR(int8_t, 2))(0x7AL)), l_722.x, 1L, 0x70L, ((VECTOR(int8_t, 4))(0x09L)), 0x2BL, l_709, ((VECTOR(int8_t, 2))((-1L))), 1L)).s5da0))).yxwzwxzw))))), ((VECTOR(int8_t, 8))(0x2AL))))).hi)))))).wwxwxyxy, ((VECTOR(uint8_t, 8))(0x9CL))))).s7, l_730)), 0x3423EE01L, (-6L))).s63af)).zwzwwywx, ((VECTOR(int32_t, 8))(0x36DD3F54L))))).s0774701541567013))).sf, ((VECTOR(uint32_t, 4))(0x0EB4CEFEL)), 9UL, 4UL)).s3751471125450077)).s1 , &p_891->g_140)))
            { /* block id: 345 */
                uint32_t l_761 = 4294967293UL;
                int32_t *l_772 = (void*)0;
                int32_t *l_773 = (void*)0;
                int32_t *l_774 = &p_891->g_181.f8;
                int32_t *l_775 = (void*)0;
                int32_t *l_776 = &l_713;
                int32_t *l_777 = (void*)0;
                int32_t *l_778[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if (l_722.x)
                { /* block id: 346 */
                    int8_t l_732 = 1L;
                    VECTOR(uint16_t, 2) l_735 = (VECTOR(uint16_t, 2))(1UL, 65532UL);
                    uint64_t *l_762[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S2 **l_765[7] = {&p_891->g_191[3][0],&p_891->g_191[3][0],&p_891->g_191[3][0],&p_891->g_191[3][0],&p_891->g_191[3][0],&p_891->g_191[3][0],&p_891->g_191[3][0]};
                    int i;
                    (*p_891->g_464) = ((((VECTOR(int32_t, 8))(0x117B3F20L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x55192D5FL, ((VECTOR(int32_t, 2))(0x3CC9E9A9L, 0x0F1F06BEL)), 1L)).lo, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))((safe_unary_minus_func_int16_t_s(l_732)), (-1L), 0x0E55C65FL, 8L))))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-2L), 0x204E1FFAL)), 0x461730B9L, 0x45A3010CL)).hi))).xyyx)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(p_891->g_733.xxyx)).wyyxxwww, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x6DB0L, 0L)), ((VECTOR(int16_t, 2))(8L, 0x118EL)), 3L, 0x0F49L, 0x5655L, 0x0D2CL)))).even)).lo)))).xxxyyxxy))).s40, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65534UL, 1UL)))).yyyxxxxy, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(0UL, 0xCB5AL)).yyyyxxxxyxyxxyyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 0x18E2L)).yxyxyyxy)).s5572771740223554, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(0x1B8EL, 65532UL)), ((VECTOR(uint16_t, 4))(p_891->g_734.yxzz)).odd))).yyyyyyxxyxxyyyyy))).hi, ((VECTOR(uint16_t, 2))(1UL, 65535UL)).xxxxyxyy))).s6260647530337430, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(l_735.yyyxxyyx)), ((VECTOR(uint16_t, 2))(65533UL, 0xA9FAL)).yyxyyyyy))).s3447161056041613, ((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(0x5919L, 0x75ACL)), 0xFA29L)).xzzzwyzxxyyxywxw)))))).sd1))), (-1L))).s7 || (((l_707.s7 <= l_710.sc) >= ((VECTOR(int64_t, 4))(l_736.xyyy)).z) && 0x09L)) == (((safe_unary_minus_func_int16_t_s((safe_mod_func_uint64_t_u_u((p_891->g_763 |= (((((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))((-1L), 0x734A36DFL, ((VECTOR(int32_t, 2))(0x494B9005L, 0x1FE85D69L)), ((VECTOR(int32_t, 8))(l_740.sc2d2adbd)), (safe_rshift_func_uint16_t_u_u(0x1014L, (((VECTOR(uint32_t, 2))(0x69248E54L, 0x8440B73FL)).odd && (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_747 == &p_891->g_594), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_720.x, (p_891->g_181.f8 = (safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(7L, 0x718FL)).lo, (safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((!((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(0x7AL, 5L)).xxxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(l_760.s11632747)).s75, (int8_t)((p_891->g_15[0][1] = p_891->g_77.y) < l_706.s3), (int8_t)l_718.y))))).xyyyxxxxxxyyxxxx, ((VECTOR(int8_t, 16))(0x75L)), ((VECTOR(int8_t, 16))(0x0CL))))).lo)).even, ((VECTOR(int8_t, 4))(1L))))).y), l_761)) < 65528UL) <= 6L), l_719.x)))) | (-4L)) , p_891->g_293[0][2]), (-1L))), l_740.s3)), l_761))), 0x3D3CE67AL, (-3L), l_722.w, 0x1C8FD22AL, 0L, 0L)).s30, (int32_t)0x09A79EC4L))).even)), l_730))))), l_761, 0x452B9F19L, 0L)).s73, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x7AEA3FE0L))))).even , l_670.s1) , l_707.s6) , l_761)), l_761)))) || p_891->g_15[2][0]) , 0x2526L));
                    l_766 = l_764;
                }
                else
                { /* block id: 352 */
                    uint16_t ***l_769 = &p_891->g_767;
                    uint16_t **l_771 = &p_891->g_768;
                    uint16_t ***l_770 = &l_771;
                    (*l_770) = ((*l_769) = p_891->g_767);
                    if (l_760.s5)
                        continue;
                }
                l_783.s9--;
            }
            else
            { /* block id: 358 */
                uint32_t l_797 = 0x59CD3B41L;
                int32_t *l_803 = &l_713;
                uint32_t *l_815 = &p_891->g_239[1][3];
                int32_t l_820 = 0x314094DEL;
                int32_t *l_821 = (void*)0;
                int32_t *l_822[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_822[i] = (void*)0;
                for (p_891->g_313.f4 = 0; (p_891->g_313.f4 != 38); p_891->g_313.f4 = safe_add_func_int8_t_s_s(p_891->g_313.f4, 1))
                { /* block id: 361 */
                    int32_t *l_798 = (void*)0;
                    int32_t *l_799 = &p_891->g_800[1][1][0];
                    int32_t l_801 = (-9L);
                    int64_t *l_802 = &l_709;
                    l_803 = func_89((!(((*l_802) |= (((*l_799) = (((((*p_891->g_464) != (((void*)0 == l_790[6]) != 0x3D8FD1EAL)) == ((VECTOR(uint16_t, 16))(l_792.yxyxxxyyyyyxxyyx)).sb) | (l_706.s3 <= ((safe_div_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u(((l_707.sf >= ((void*)0 == (**p_891->g_594))) != ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(1UL)), 0xC5B64F5821BB0AD9L)).odd, ((VECTOR(uint64_t, 4))(1UL))))).x), GROUP_DIVERGE(1, 1))) < 0x58CEB277L) > l_797) ^ (-10L)), l_782[8][0][1])) > l_719.x))) | (-1L))) , l_801)) & l_797)), &p_891->g_141, &l_801, l_664[4][3], p_891);
                    return l_711.s6;
                }
                (*p_891->g_464) = (l_783.s0 >= (((*l_803) == (safe_mod_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_891->g_467[2][2].f7 > (l_712.w = (((safe_mul_func_uint8_t_u_u(((l_740.s4 , ((*l_815) |= (l_814 == l_661))) , (((((*p_54) = &l_713) != l_803) , l_816[4][1]) != p_891->g_472)), l_740.s0)) > l_819) == (*p_891->g_603)))), FAKE_DIVERGE(p_891->group_1_offset, get_group_id(1), 10))), 0x18FFL)) , &p_891->g_111) == (void*)0), l_708.y))) , 0xE064L));
                l_823--;
                (*l_766) = (*l_764);
            }
            (*l_858) = func_94(((l_826 == ((((((safe_unary_minus_func_uint32_t_u(p_891->g_118[0].f7.f1.f1)) & (((l_740.s1 = ((*l_856) = ((l_747 = l_747) != ((l_711.s4 = (safe_sub_func_uint16_t_u_u(((p_891->g_500.f2.f6--) || (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_891->g_835.s45644323)))).s1613225624221673)).s8, 6))), ((((safe_add_func_int64_t_s_s(l_720.x, (((void*)0 == p_891->g_838) != (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x013AF3A7D0A5BF0BL, (-1L))).xxyy)).ywwzzxwwxwywzwxy)).lo)).s3, (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s(0x2FFB1557L, (((((*p_55)--) | ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_850.s7d5f)).zyxzzwzy)))).hi, ((VECTOR(uint64_t, 4))(l_851.yyyx))))).yxyyzwwy)).s25, ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_852.zx)), 1UL, 4294967294UL)).wzyyzyzxxwwxyyyx)).sa079, ((VECTOR(uint32_t, 8))(p_891->g_853.s1a264c2d)).lo))).lo))).lo) == (safe_div_func_uint8_t_u_u(p_891->g_181.f7.f2.f0, l_730))) && p_891->g_257))), p_891->g_666.f8))))))) , p_891->g_313.f2.f8) ^ 2L) <= l_662.sb)))) , &p_891->g_594)))) >= l_710.s5) , l_713)) , 0x3E17C94D8DC25CEBL) | GROUP_DIVERGE(2, 1)) & p_891->g_222.s3) , l_826)) > 0UL), p_891);
            (*l_858) = func_94((***p_891->g_594), p_891);
        }
        return l_760.s4;
    }
    return p_891->g_500.f2.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_313.f5 p_891->g_609 p_891->g_603 p_891->g_602 p_891->g_26 p_891->g_102.f8 p_891->g_64 p_891->g_637 p_891->g_594 p_891->g_416 p_891->g_417 p_891->g_650 p_891->g_118.f7.f5 p_891->g_139.f7.f3
 * writes: p_891->g_313.f5 p_891->g_610 p_891->g_603 p_891->g_26 p_891->g_12 p_891->g_102.f8 p_891->g_272 p_891->g_239
 */
int32_t ** func_56(uint64_t  p_57, int8_t ** p_58, int8_t  p_59, int32_t ** p_60, int32_t * p_61, struct S4 * p_891)
{ /* block id: 279 */
    int32_t l_614 = (-1L);
    int32_t l_624 = (-9L);
    int32_t l_625 = 8L;
    VECTOR(int32_t, 4) l_626 = (VECTOR(int32_t, 4))(0x784FAC8BL, (VECTOR(int32_t, 2))(0x784FAC8BL, 1L), 1L);
    int16_t l_627 = 0L;
    VECTOR(int32_t, 16) l_629 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int32_t, 2))((-4L), 1L), (VECTOR(int32_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
    uint8_t l_630 = 0xA5L;
    VECTOR(uint16_t, 8) l_644 = (VECTOR(uint16_t, 8))(0x7EE0L, (VECTOR(uint16_t, 4))(0x7EE0L, (VECTOR(uint16_t, 2))(0x7EE0L, 65535UL), 65535UL), 65535UL, 0x7EE0L, 65535UL);
    VECTOR(uint16_t, 8) l_645 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    VECTOR(uint16_t, 2) l_646 = (VECTOR(uint16_t, 2))(0xFD62L, 0xAC44L);
    int64_t *l_647 = &p_891->g_75;
    VECTOR(int16_t, 8) l_651 = (VECTOR(int16_t, 8))(0x21D6L, (VECTOR(int16_t, 4))(0x21D6L, (VECTOR(int16_t, 2))(0x21D6L, 0x3C1FL), 0x3C1FL), 0x3C1FL, 0x21D6L, 0x3C1FL);
    int16_t ****l_654 = &p_891->g_594;
    uint32_t *l_655 = &p_891->g_239[1][5];
    int i;
    for (p_57 = 23; (p_57 > 42); p_57 = safe_add_func_int8_t_s_s(p_57, 2))
    { /* block id: 282 */
        return &p_891->g_65;
    }
    for (p_891->g_313.f5 = 0; (p_891->g_313.f5 >= 10); p_891->g_313.f5 = safe_add_func_int16_t_s_s(p_891->g_313.f5, 1))
    { /* block id: 287 */
        int64_t l_611 = 0x57864AE9E20AEF2FL;
        int32_t l_612 = (-9L);
        VECTOR(int8_t, 8) l_613 = (VECTOR(int8_t, 8))(0x34L, (VECTOR(int8_t, 4))(0x34L, (VECTOR(int8_t, 2))(0x34L, 0x36L), 0x36L), 0x36L, 0x34L, 0x36L);
        int32_t *l_615 = &p_891->g_139.f8;
        int32_t *l_616 = &p_891->g_102[1].f8;
        int32_t *l_617 = (void*)0;
        int32_t *l_618 = &p_891->g_181.f8;
        int32_t *l_619 = &p_891->g_181.f8;
        int32_t *l_620 = (void*)0;
        int32_t *l_621 = (void*)0;
        int32_t *l_622 = &l_614;
        int32_t *l_623[4][4] = {{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8},{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8},{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8},{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8}};
        int16_t l_628[2][9][4] = {{{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL}},{{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL},{0x60C9L,0x60C9L,4L,0x5CFAL}}};
        uint32_t *l_634 = &p_891->g_239[1][6];
        uint32_t **l_633 = &l_634;
        uint32_t *l_636 = &p_891->g_239[1][5];
        uint32_t **l_635 = &l_636;
        int i, j, k;
        p_891->g_610 = p_891->g_609;
        l_630++;
        (*l_622) = ((*l_616) |= (((*l_633) = p_61) != ((*l_635) = func_7(p_57, ((*p_891->g_602) = (*p_58)), p_891))));
    }
    (*p_891->g_64) = &l_614;
    (*p_61) = (p_891->g_637 , (((*l_655) = ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_57 <= (18446744073709551613UL > (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(0UL, 0x96L, (((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(l_644.s53)), ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(l_645.s1255)).xxxxwyxxwyyzwywx, ((VECTOR(uint16_t, 8))(l_646.xxyyxyyx)).s6112300077540044))).sa5, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((void*)0 == l_647), 0x74L, 4UL, 1UL)).wzwzwwyxywwzyyww)).even, (uint8_t)(safe_add_func_int16_t_s_s(((***p_891->g_594) = 1L), (p_891->g_650 , (l_625 = ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(l_651.s5731044750013003)).sf6eb, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(0x4627L, l_651.s2, (safe_sub_func_int64_t_s_s((((&p_891->g_594 == l_654) || (-1L)) > FAKE_DIVERGE(p_891->local_2_offset, get_local_id(2), 10)), p_891->g_118[0].f7.f5)), 1L, 0L, ((VECTOR(int16_t, 8))(0x6358L)), (-5L), 0x6968L, 0x2400L)).sbcd9, ((VECTOR(int16_t, 4))(0x0F8CL)))))))))), ((VECTOR(int16_t, 4))((-9L)))))).xwzyxwzz, ((VECTOR(int16_t, 8))((-5L)))))).s5))))))).lo, ((VECTOR(uint8_t, 4))(0xCEL))))).xxwywzxw, ((VECTOR(uint8_t, 8))(0xE2L))))).s21))).odd , 0UL), 0UL, p_57, 0UL, 0x34L, 247UL)).s0, l_651.s4)))), 1L)), 0x1DL)), 0xD8920C97L, 4294967290UL, 0UL, p_59, 0UL, 0xB7CCF488L, 0UL)).hi, ((VECTOR(uint32_t, 4))(0xBD15709AL)), ((VECTOR(uint32_t, 4))(4294967292UL))))).z) == p_891->g_139.f7.f3));
    return &p_891->g_65;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_139.f7.f2.f9 p_891->g_532 p_891->g_467.f9 p_891->g_555 p_891->g_556 p_891->g_587 p_891->g_139.f7.f2.f3 p_891->g_417 p_891->g_272 p_891->g_139.f8 p_891->g_comm_values p_891->g_490.f7.f0 p_891->g_309 p_891->g_4 p_891->g_15 p_891->g_26 p_891->g_102.f7.f2.f6 p_891->g_136 p_891->g_139 p_891->g_118 p_891->g_102.f7.f2.f3 p_891->g_18 p_891->g_216 p_891->g_313.f5 p_891->g_416 p_891->g_102.f7.f3 p_891->g_181.f8
 * writes: p_891->g_139.f7.f2.f9 p_891->g_532 p_891->g_594 p_891->g_comm_values p_891->g_26 p_891->g_12 p_891->g_65 p_891->g_129 p_891->g_136 p_891->g_108 p_891->g_216 p_891->g_272 p_891->g_181.f8
 */
uint64_t  func_66(uint8_t  p_67, uint16_t  p_68, int64_t  p_69, int32_t  p_70, uint32_t  p_71, struct S4 * p_891)
{ /* block id: 138 */
    uint32_t l_336 = 0x685B0059L;
    VECTOR(uint64_t, 16) l_345 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2A0862CB02E6CFCAL), 0x2A0862CB02E6CFCAL), 0x2A0862CB02E6CFCAL, 0UL, 0x2A0862CB02E6CFCAL, (VECTOR(uint64_t, 2))(0UL, 0x2A0862CB02E6CFCAL), (VECTOR(uint64_t, 2))(0UL, 0x2A0862CB02E6CFCAL), 0UL, 0x2A0862CB02E6CFCAL, 0UL, 0x2A0862CB02E6CFCAL);
    VECTOR(uint32_t, 8) l_350 = (VECTOR(uint32_t, 8))(0x7F702173L, (VECTOR(uint32_t, 4))(0x7F702173L, (VECTOR(uint32_t, 2))(0x7F702173L, 2UL), 2UL), 2UL, 0x7F702173L, 2UL);
    VECTOR(int8_t, 4) l_357 = (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x3AL), 0x3AL);
    int8_t **l_395 = (void*)0;
    VECTOR(uint8_t, 4) l_407 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x6DL), 0x6DL);
    uint32_t l_423[1];
    VECTOR(uint32_t, 16) l_450 = (VECTOR(uint32_t, 16))(0x8F796B4DL, (VECTOR(uint32_t, 4))(0x8F796B4DL, (VECTOR(uint32_t, 2))(0x8F796B4DL, 0x06008BA2L), 0x06008BA2L), 0x06008BA2L, 0x8F796B4DL, 0x06008BA2L, (VECTOR(uint32_t, 2))(0x8F796B4DL, 0x06008BA2L), (VECTOR(uint32_t, 2))(0x8F796B4DL, 0x06008BA2L), 0x8F796B4DL, 0x06008BA2L, 0x8F796B4DL, 0x06008BA2L);
    VECTOR(int32_t, 16) l_451 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    int32_t l_456[5][6] = {{0x301DB778L,5L,0x00E0B081L,5L,0x301DB778L,0x301DB778L},{0x301DB778L,5L,0x00E0B081L,5L,0x301DB778L,0x301DB778L},{0x301DB778L,5L,0x00E0B081L,5L,0x301DB778L,0x301DB778L},{0x301DB778L,5L,0x00E0B081L,5L,0x301DB778L,0x301DB778L},{0x301DB778L,5L,0x00E0B081L,5L,0x301DB778L,0x301DB778L}};
    VECTOR(int32_t, 8) l_459 = (VECTOR(int32_t, 8))(0x1DA88DD9L, (VECTOR(int32_t, 4))(0x1DA88DD9L, (VECTOR(int32_t, 2))(0x1DA88DD9L, 3L), 3L), 3L, 0x1DA88DD9L, 3L);
    union U3 *l_471[3][4][7] = {{{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0}},{{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0}},{{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0},{&p_891->g_113,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0,&p_891->g_113,(void*)0}}};
    int32_t *l_494 = (void*)0;
    int8_t l_524 = (-4L);
    int16_t l_525 = 1L;
    int32_t *l_531[3];
    VECTOR(int8_t, 4) l_537 = (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x57L), 0x57L);
    VECTOR(uint32_t, 16) l_540 = (VECTOR(uint32_t, 16))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 6UL), 6UL), 6UL, 2UL, 6UL, (VECTOR(uint32_t, 2))(2UL, 6UL), (VECTOR(uint32_t, 2))(2UL, 6UL), 2UL, 6UL, 2UL, 6UL);
    VECTOR(uint64_t, 8) l_547 = (VECTOR(uint64_t, 8))(0x059DA734B4D4135EL, (VECTOR(uint64_t, 4))(0x059DA734B4D4135EL, (VECTOR(uint64_t, 2))(0x059DA734B4D4135EL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x059DA734B4D4135EL, 18446744073709551615UL);
    uint8_t *l_552 = (void*)0;
    VECTOR(uint16_t, 4) l_569 = (VECTOR(uint16_t, 4))(0xF65BL, (VECTOR(uint16_t, 2))(0xF65BL, 1UL), 1UL);
    struct S2 **l_570 = &p_891->g_191[0][0];
    struct S2 ***l_571 = (void*)0;
    VECTOR(uint16_t, 2) l_584 = (VECTOR(uint16_t, 2))(65533UL, 65535UL);
    VECTOR(uint16_t, 16) l_585 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x6086L), 0x6086L), 0x6086L, 0UL, 0x6086L, (VECTOR(uint16_t, 2))(0UL, 0x6086L), (VECTOR(uint16_t, 2))(0UL, 0x6086L), 0UL, 0x6086L, 0UL, 0x6086L);
    VECTOR(uint16_t, 16) l_586 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
    int16_t ***l_592 = &p_891->g_416;
    int16_t ****l_593[10] = {&l_592,&l_592,&l_592,&l_592,&l_592,&l_592,&l_592,&l_592,&l_592,&l_592};
    uint8_t l_595 = 0x22L;
    int64_t *l_596 = (void*)0;
    int64_t *l_597 = (void*)0;
    int64_t *l_598 = (void*)0;
    int64_t *l_599[6][6][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t *l_600 = &p_891->g_216[4][5];
    int64_t l_601 = 0x40E3BD32D1A65C00L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_423[i] = 0x040F7D72L;
    for (i = 0; i < 3; i++)
        l_531[i] = (void*)0;
    for (p_891->g_139.f7.f2.f9 = 0; (p_891->g_139.f7.f2.f9 > 1); p_891->g_139.f7.f2.f9 = safe_add_func_uint16_t_u_u(p_891->g_139.f7.f2.f9, 9))
    { /* block id: 141 */
        uint16_t l_329 = 0xA1A4L;
        int32_t l_335 = (-1L);
        uint16_t l_358 = 0UL;
        int32_t *l_359 = &p_891->g_181.f8;
        int16_t **l_415 = (void*)0;
        struct S2 *l_485 = &p_891->g_102[1];
        int32_t l_506[2];
        int32_t l_508[1][8] = {{1L,1L,1L,1L,1L,1L,1L,1L}};
        int16_t l_523 = 0x1829L;
        uint64_t l_526 = 1UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_506[i] = 0x31F5F882L;
        (1 + 1);
    }
    for (l_525 = 0; (l_525 == 13); l_525 = safe_add_func_int16_t_s_s(l_525, 1))
    { /* block id: 268 */
        return p_68;
    }
    p_891->g_532--;
    p_891->g_181.f8 |= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_537.wwzz)).x, ((safe_mod_func_uint16_t_u_u(p_71, ((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0xA8C2L)), 0UL, 5UL)), (((VECTOR(uint32_t, 8))(l_540.seef09642)).s3 , ((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((**p_891->g_416) = (safe_div_func_int16_t_s_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_547.s1704)).xwzzzwxzxyzwxwxy)))).se | (((*l_600) &= (safe_mul_func_int8_t_s_s(((p_67 | (l_552 == (p_891->g_467[2][2].f9 , &p_67))) || ((((safe_mul_func_uint16_t_u_u((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(p_891->g_555.zwyx)), ((VECTOR(int32_t, 4))(0x00E05C35L, 3L, 0x17CE9A5EL, 1L)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))((-4L), 2L)).xyxyyxyx, ((VECTOR(int32_t, 2))(p_891->g_556.sab)).yyyyyyxy))).hi))))).lo)), (func_94(((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_569.wxyxyzxw)).s43)).lo, ((l_570 = l_570) != (void*)0))), (safe_div_func_int32_t_s_s((1L & (((p_891->g_comm_values[p_891->tid] |= ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_584.xy)), 0x7CB8L, 9UL)).xzwywxwxxywwxyxx, ((VECTOR(uint16_t, 8))(l_585.s84959a57)).s5106062027717224))).lo, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(l_586.s7b)).xyxyyyyyyxyxyyxx, ((VECTOR(uint16_t, 2))(p_891->g_587.yx)).xxyyxxyxxxyxxyyy))).odd))).s2, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((p_891->g_594 = l_592) == (void*)0) > 0x61L) != p_70), p_891->g_139.f7.f2.f3)), p_67)))) < 0x14L), (*p_891->g_417))), p_68)) , l_595) != 0x686FL), p_891->g_139.f8)), p_68)) < 255UL)) < 1UL) || p_891->g_490.f7.f0)), (*p_891->g_309))))), 6UL)))) | FAKE_DIVERGE(p_891->global_1_offset, get_global_id(1), 10)), 18446744073709551615UL)), p_69)) == 0x79L), p_891) , (*p_891->g_309)), ((VECTOR(int32_t, 4))(0L)), 0x4FE15207L)).hi)).odd)).yxxyyxyy)).s7 > 0xB2C9BAB0L), 0xD70CL)) , p_68) > GROUP_DIVERGE(2, 1)) == p_69)), 0x77L))) == p_68)), p_891->g_313.f5))), p_68)), p_891->g_102[1].f7.f3)) == 0x303C8D9DL)), 1UL, 0x9339L)).s4)) != 1UL)));
    return l_601;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_313 p_891->g_315 p_891->g_118.f3
 * writes: p_891->g_181.f7
 */
uint16_t  func_78(int8_t * p_79, uint64_t  p_80, int64_t * p_81, int32_t  p_82, uint64_t  p_83, struct S4 * p_891)
{ /* block id: 135 */
    (*p_891->g_315) = p_891->g_313;
    return p_891->g_118[0].f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_102 p_891->g_15 p_891->g_12 p_891->g_108 p_891->g_110 p_891->g_113 p_891->g_65 p_891->g_4 p_891->g_26 p_891->g_118 p_891->g_18 p_891->g_comm_values p_891->g_136 p_891->g_139 p_891->g_140 p_891->g_181 p_891->g_141 p_891->g_190
 * writes: p_891->g_108 p_891->g_110 p_891->g_26 p_891->g_12 p_891->g_65 p_891->g_129 p_891->g_136 p_891->g_139.f7.f2.f8 p_891->g_102 p_891->g_141 p_891->g_139.f7.f2.f6 p_891->g_191 p_891->g_309
 */
int8_t * func_85(uint8_t  p_86, uint32_t  p_87, int8_t * p_88, struct S4 * p_891)
{ /* block id: 39 */
    VECTOR(int32_t, 4) l_103 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L);
    uint32_t l_106[5];
    int16_t *l_107 = &p_891->g_108;
    int16_t l_109 = (-1L);
    int32_t *l_142[1];
    int8_t *l_144 = &p_891->g_102[1].f7.f2.f2;
    int8_t **l_143 = &l_144;
    int32_t **l_307 = &p_891->g_65;
    int32_t **l_308 = &l_142[0];
    int i;
    for (i = 0; i < 5; i++)
        l_106[i] = 0x23E6BFF2L;
    for (i = 0; i < 1; i++)
        l_142[i] = &p_891->g_4;
    l_142[0] = func_89((func_94((((func_96((((VECTOR(uint16_t, 16))(((safe_add_func_uint16_t_u_u(p_87, (p_891->g_102[1] , l_103.w))) < ((0x75A32C323CAD433CL != (safe_rshift_func_uint8_t_u_s(((p_87 <= p_86) , FAKE_DIVERGE(p_891->local_2_offset, get_local_id(2), 10)), l_103.z))) , (((l_106[4] |= p_87) & ((~(((((((*l_107) &= (p_891->g_15[4][2] && (*p_88))) || l_109) == 0L) != GROUP_DIVERGE(0, 1)) | (-1L)) <= 0x0C22193E6AD7C107L)) >= 0x53AE5F8D8BDE85A3L)) , (-1L)))), ((VECTOR(uint16_t, 8))(65532UL)), ((VECTOR(uint16_t, 2))(0xC968L)), ((VECTOR(uint16_t, 4))(0UL)), 0xA6CAL)).s7 <= p_87), p_86, p_86, p_891) , (*p_891->g_65)) == p_891->g_102[1].f7.f2.f8) , (-1L)), p_891) , 4294967295UL), p_891->g_140, l_142[0], l_143, p_891);
    p_891->g_309 = ((*l_308) = ((*l_307) = &p_891->g_4));
    return &p_891->g_293[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_139.f7.f2.f8 p_891->g_181 p_891->g_141 p_891->g_139.f7.f2.f6 p_891->g_190 p_891->g_102.f8
 * writes: p_891->g_139.f7.f2.f8 p_891->g_102 p_891->g_141 p_891->g_139.f7.f2.f6 p_891->g_191
 */
int32_t * func_89(uint32_t  p_90, int64_t * p_91, int32_t * p_92, int8_t ** p_93, struct S4 * p_891)
{ /* block id: 54 */
    uint32_t l_183 = 0UL;
    VECTOR(uint32_t, 4) l_221 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0UL), 0UL);
    int64_t *l_234 = &p_891->g_141;
    uint32_t *l_258 = &p_891->g_181.f4;
    int32_t l_262 = 0x51F476ADL;
    int32_t l_268 = 1L;
    int32_t l_276 = 0x039301CEL;
    int32_t l_277 = 0x59A95541L;
    int32_t l_278 = 0x11B54257L;
    int32_t l_279 = 0x7DFB016FL;
    int32_t l_282 = 0L;
    int32_t l_283 = 0x40F323D7L;
    int i;
    if ((atomic_inc(&p_891->l_atomic_input[0]) == 1))
    { /* block id: 56 */
        uint16_t l_145 = 0x63BEL;
        int32_t l_147[3];
        int32_t *l_146[5][1];
        int32_t *l_148 = &l_147[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_147[i] = 0x01AE1F2AL;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_146[i][j] = &l_147[0];
        }
        l_148 = ((l_145 = 0x7CEAEE16L) , l_146[3][0]);
        unsigned int result = 0;
        result += l_145;
        int l_147_i0;
        for (l_147_i0 = 0; l_147_i0 < 3; l_147_i0++) {
            result += l_147[l_147_i0];
        }
        atomic_add(&p_891->l_special_values[0], result);
    }
    else
    { /* block id: 59 */
        (1 + 1);
    }
    for (p_891->g_139.f7.f2.f8 = 0; (p_891->g_139.f7.f2.f8 < 17); p_891->g_139.f7.f2.f8 = safe_add_func_int8_t_s_s(p_891->g_139.f7.f2.f8, 1))
    { /* block id: 64 */
        struct S2 *l_182 = &p_891->g_102[1];
        if ((atomic_inc(&p_891->g_atomic_input[82 * get_linear_group_id() + 17]) == 5))
        { /* block id: 66 */
            int32_t l_151[1];
            int32_t l_178 = 1L;
            VECTOR(uint8_t, 2) l_179 = (VECTOR(uint8_t, 2))(0UL, 0x72L);
            int32_t l_180 = 0x37B07397L;
            int i;
            for (i = 0; i < 1; i++)
                l_151[i] = (-1L);
            for (l_151[0] = 0; (l_151[0] >= 17); l_151[0]++)
            { /* block id: 69 */
                uint32_t l_154 = 8UL;
                VECTOR(uint32_t, 8) l_168 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x05DDFC62L), 0x05DDFC62L), 0x05DDFC62L, 1UL, 0x05DDFC62L);
                int64_t l_169[8] = {0x2D04D0B8DA7C8E9FL,0x78ECCA06ABC1FAA2L,0x2D04D0B8DA7C8E9FL,0x2D04D0B8DA7C8E9FL,0x78ECCA06ABC1FAA2L,0x2D04D0B8DA7C8E9FL,0x2D04D0B8DA7C8E9FL,0x78ECCA06ABC1FAA2L};
                int16_t l_170 = 0L;
                int64_t l_171[5];
                int64_t l_172 = 0x77EADD43F1477426L;
                int16_t l_173 = 0x5242L;
                uint16_t l_174 = 0xBCB9L;
                union U3 l_175 = {0};/* VOLATILE GLOBAL l_175 */
                VECTOR(int32_t, 8) l_176 = (VECTOR(int32_t, 8))(0x01A07439L, (VECTOR(int32_t, 4))(0x01A07439L, (VECTOR(int32_t, 2))(0x01A07439L, 1L), 1L), 1L, 0x01A07439L, 1L);
                uint16_t l_177 = 0x4210L;
                int i;
                for (i = 0; i < 5; i++)
                    l_171[i] = (-4L);
                if (l_154)
                { /* block id: 70 */
                    int32_t l_155 = 0x427E3807L;
                    uint32_t l_156[8][4][7] = {{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}},{{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL},{0xF3DB485DL,0xF3DB485DL,0x989AA41EL,1UL,0UL,1UL,0x989AA41EL}}};
                    uint8_t l_157 = 0xA4L;
                    VECTOR(uint64_t, 2) l_158 = (VECTOR(uint64_t, 2))(0x19BAF28728338B1BL, 6UL);
                    int i, j, k;
                    l_156[1][1][0] ^= l_155;
                    l_158.y &= (l_155 = l_157);
                }
                else
                { /* block id: 74 */
                    int32_t l_159[4];
                    int32_t *l_165 = (void*)0;
                    int32_t *l_166 = &l_159[2];
                    int32_t *l_167[2];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_159[i] = 1L;
                    for (i = 0; i < 2; i++)
                        l_167[i] = &l_159[2];
                    for (l_159[2] = 24; (l_159[2] < (-15)); l_159[2] = safe_sub_func_uint16_t_u_u(l_159[2], 4))
                    { /* block id: 77 */
                        VECTOR(uint16_t, 2) l_162 = (VECTOR(uint16_t, 2))(0UL, 0x0F54L);
                        int32_t l_163 = (-7L);
                        int64_t l_164 = 0x297F9D90B8971933L;
                        int i;
                        l_164 = (((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_162.xyyy)).xyzxwyxy)).even, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(65535UL, 0x4155L, 0xF50AL, 3UL, ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 65535UL, 0UL)).s27)).yyyy))).y , l_163);
                    }
                    l_167[1] = (l_166 = l_165);
                    l_166 = (void*)0;
                }
                l_177 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4C7A630BL, 0L)))).xxxy)), (l_174 = (l_173 = (l_172 = (l_171[4] = ((l_169[2] &= ((VECTOR(uint32_t, 2))(l_168.s30)).hi) , l_170))))), (l_175 , l_176.s7), (-1L), 3L)).s3;
            }
            l_178 = 0x536866BDL;
            l_180 = l_179.y;
            unsigned int result = 0;
            int l_151_i0;
            for (l_151_i0 = 0; l_151_i0 < 1; l_151_i0++) {
                result += l_151[l_151_i0];
            }
            result += l_178;
            result += l_179.y;
            result += l_179.x;
            result += l_180;
            atomic_add(&p_891->g_special_values[82 * get_linear_group_id() + 17], result);
        }
        else
        { /* block id: 93 */
            (1 + 1);
        }
        (*l_182) = p_891->g_181;
    }
    l_183 = 0x5E57CEDAL;
    for (p_891->g_141 = 0; (p_891->g_141 <= 24); p_891->g_141 = safe_add_func_uint16_t_u_u(p_891->g_141, 5))
    { /* block id: 101 */
        uint32_t l_199 = 0xC06E7D00L;
        VECTOR(uint8_t, 16) l_237 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
        int32_t *l_260 = &p_891->g_102[1].f8;
        VECTOR(int32_t, 2) l_264 = (VECTOR(int32_t, 2))(1L, (-8L));
        uint64_t l_296 = 0x672F7C703124CAEDL;
        VECTOR(int64_t, 2) l_302 = (VECTOR(int64_t, 2))((-1L), 0x16C296BDF4626809L);
        int i;
        for (p_891->g_139.f7.f2.f6 = 26; (p_891->g_139.f7.f2.f6 <= 23); p_891->g_139.f7.f2.f6--)
        { /* block id: 104 */
            uint32_t *l_196 = (void*)0;
            uint8_t *l_214 = (void*)0;
            uint8_t *l_215 = &p_891->g_216[4][0];
            int32_t *l_223 = &p_891->g_139.f8;
            int8_t *l_226 = &p_891->g_139.f7.f2.f9;
            int32_t l_267 = 1L;
            int32_t l_274 = 0x64CC1B72L;
            int32_t l_275 = 0x0F999477L;
            int32_t l_280 = (-1L);
            int32_t l_281 = 0x7F4B3580L;
            int32_t l_284 = 6L;
            int32_t l_285 = 0L;
            int32_t l_286 = 0x3765521EL;
            int32_t l_287 = 0x22407312L;
            int32_t l_289 = 1L;
            int32_t l_291 = 0x1B9444DDL;
            int32_t l_292 = 0x32BA3C33L;
            int32_t *l_303[6] = {(void*)0,&l_274,(void*)0,(void*)0,&l_274,(void*)0};
            int i;
            (*p_891->g_190) = &p_891->g_139;
        }
        (*l_260) |= 0x43F7FB4BL;
    }
    return p_92;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_15 p_891->g_26 p_891->g_118 p_891->g_102.f7.f2.f6 p_891->g_102.f7.f2.f3 p_891->g_18 p_891->g_comm_values p_891->g_136 p_891->g_139
 * writes: p_891->g_26 p_891->g_12 p_891->g_65 p_891->g_108 p_891->g_129 p_891->g_136
 */
struct S2  func_94(int16_t  p_95, struct S4 * p_891)
{ /* block id: 45 */
    int8_t *l_114 = &p_891->g_102[1].f7.f2.f2;
    int32_t **l_115 = (void*)0;
    int32_t *l_116 = (void*)0;
    int32_t **l_117 = &p_891->g_65;
    VECTOR(int16_t, 4) l_123 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-5L)), (-5L));
    uint64_t l_126 = 0xA65D4B91A1CE282AL;
    int16_t *l_127 = &p_891->g_108;
    uint32_t l_128 = 8UL;
    int32_t *l_130 = &p_891->g_102[1].f8;
    int32_t *l_131 = &p_891->g_102[1].f8;
    int32_t *l_132 = &p_891->g_102[1].f8;
    int32_t *l_133 = &p_891->g_102[1].f8;
    int32_t *l_134 = &p_891->g_102[1].f8;
    int32_t *l_135[3][3] = {{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8},{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8},{&p_891->g_102[1].f8,&p_891->g_102[1].f8,&p_891->g_102[1].f8}};
    int i, j;
    (*l_117) = (l_116 = func_7(p_891->g_15[0][1], l_114, p_891));
    atomic_max(&p_891->g_atomic_reduction[get_linear_group_id()], ((&p_891->g_65 == (p_95 , &l_116)) , (p_891->g_118[0] , (safe_add_func_uint16_t_u_u((p_891->g_102[1].f7.f2.f6 < (safe_rshift_func_int16_t_s_u(((*l_127) = (((VECTOR(int16_t, 16))((-1L), 0x2B3CL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(l_123.xzzyzyxxxxzxwyyz)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x5CE3L, ((((p_95 ^ (safe_mul_func_int8_t_s_s((-10L), ((p_95 | 4294967295UL) || p_95)))) & p_891->g_118[0].f7.f1.f8) > p_95) , p_891->g_118[0].f0), (-1L), 0x636AL, p_891->g_102[1].f7.f2.f3, ((VECTOR(int16_t, 4))((-1L))), p_95, 0x7C8CL, ((VECTOR(int16_t, 2))(0x0797L)), 0x1A31L, 0x4FC2L, 0x50C1L))))))).sd5)), p_891->g_15[9][2], p_95, l_126, 0L, p_891->g_18, ((VECTOR(int16_t, 4))(0x11CFL)), ((VECTOR(int16_t, 2))(0L)), (-9L))).s8 | 0x7AFAL)), l_128))), p_891->g_comm_values[p_891->tid])))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_891->v_collective += p_891->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    (*l_117) = func_7(p_891->g_102[1].f7.f2.f6, (p_891->g_129 = l_114), p_891);
    p_891->g_136++;
    return p_891->g_139;
}


/* ------------------------------------------ */
/* 
 * reads : p_891->g_110 p_891->g_113
 * writes: p_891->g_110
 */
union U3  func_96(uint64_t  p_97, uint64_t  p_98, uint64_t  p_99, struct S4 * p_891)
{ /* block id: 42 */
    volatile int8_t ** volatile *l_112 = &p_891->g_110;
    (*l_112) = p_891->g_110;
    return p_891->g_113;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[14];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 14; i++)
            l_comm_values[i] = 1;
    struct S4 c_892;
    struct S4* p_891 = &c_892;
    struct S4 c_893 = {
        0x0CAFA32FL, // p_891->g_2
        0x1A4E6659L, // p_891->g_3
        (-1L), // p_891->g_4
        0x6AL, // p_891->g_12
        {{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L},{0x13CEF339200279E5L,0xD4B4B26D8F9C3281L,0x13CEF339200279E5L,0x13CEF339200279E5L}}, // p_891->g_15
        (-5L), // p_891->g_18
        3L, // p_891->g_24
        {1L,1L,1L,1L}, // p_891->g_25
        0xE6L, // p_891->g_26
        &p_891->g_4, // p_891->g_65
        &p_891->g_65, // p_891->g_64
        1L, // p_891->g_75
        (VECTOR(uint16_t, 4))(0x8E64L, (VECTOR(uint16_t, 2))(0x8E64L, 65535UL), 65535UL), // p_891->g_77
        {{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L},{0x4E121556L,65535UL,0x6CL,1UL,0x8AE3155DL,0x8EE5A8B3L,0x0CBD639DC62CBA5FL,{18446744073709551615UL,{0x424E9327L,0x430796FFL,0x16L,0x32C6D1ADL,0x1F9A50F5L,1L,0x36A2L,0x02L,4294967287UL,0x05L},{0xBAFF8C07L,4294967292UL,0x4AL,0x4BA90E8DL,0x1E4D89ECL,-1L,65535UL,0x38L,0UL,0x4AL},0x6F82621FL,0x273B92431699C01AL,0x01D71951L},-4L}}, // p_891->g_102
        0L, // p_891->g_108
        (void*)0, // p_891->g_111
        &p_891->g_111, // p_891->g_110
        {0}, // p_891->g_113
        {{1L,65535UL,0x03L,1UL,5UL,0x4A1C8477L,0L,{0x0A6FF864FF1D34AEL,{6UL,4294967295UL,-9L,1L,3UL,-1L,0x38FAL,0x26L,0x1B0013EDL,0x32L},{0xCA9E05B6L,4294967295UL,0L,0x6BE899FAL,0xD070E6CDL,0x607CL,0x1F15L,0x48L,1UL,0x0CL},2UL,18446744073709551610UL,4294967295UL},1L},{0x2B941AA1L,0x5A60L,0x43L,0x4385C5DCL,0UL,0x84EC3894L,0x222E7C7CCD35490DL,{18446744073709551615UL,{1UL,0UL,-8L,0L,0UL,-1L,0x19FEL,0x01L,4294967292UL,0x0DL},{0x4B5F3555L,0xB47FFCAFL,0L,-1L,0UL,0x7B5EL,0x51ACL,-10L,0x608FC4C5L,-1L},1UL,0x30E9876F94ADAB24L,0x8DB606F9L},-2L},{1L,65535UL,0x03L,1UL,5UL,0x4A1C8477L,0L,{0x0A6FF864FF1D34AEL,{6UL,4294967295UL,-9L,1L,3UL,-1L,0x38FAL,0x26L,0x1B0013EDL,0x32L},{0xCA9E05B6L,4294967295UL,0L,0x6BE899FAL,0xD070E6CDL,0x607CL,0x1F15L,0x48L,1UL,0x0CL},2UL,18446744073709551610UL,4294967295UL},1L},{1L,65535UL,0x03L,1UL,5UL,0x4A1C8477L,0L,{0x0A6FF864FF1D34AEL,{6UL,4294967295UL,-9L,1L,3UL,-1L,0x38FAL,0x26L,0x1B0013EDL,0x32L},{0xCA9E05B6L,4294967295UL,0L,0x6BE899FAL,0xD070E6CDL,0x607CL,0x1F15L,0x48L,1UL,0x0CL},2UL,18446744073709551610UL,4294967295UL},1L},{0x2B941AA1L,0x5A60L,0x43L,0x4385C5DCL,0UL,0x84EC3894L,0x222E7C7CCD35490DL,{18446744073709551615UL,{1UL,0UL,-8L,0L,0UL,-1L,0x19FEL,0x01L,4294967292UL,0x0DL},{0x4B5F3555L,0xB47FFCAFL,0L,-1L,0UL,0x7B5EL,0x51ACL,-10L,0x608FC4C5L,-1L},1UL,0x30E9876F94ADAB24L,0x8DB606F9L},-2L},{1L,65535UL,0x03L,1UL,5UL,0x4A1C8477L,0L,{0x0A6FF864FF1D34AEL,{6UL,4294967295UL,-9L,1L,3UL,-1L,0x38FAL,0x26L,0x1B0013EDL,0x32L},{0xCA9E05B6L,4294967295UL,0L,0x6BE899FAL,0xD070E6CDL,0x607CL,0x1F15L,0x48L,1UL,0x0CL},2UL,18446744073709551610UL,4294967295UL},1L}}, // p_891->g_118
        &p_891->g_113.f1.f2.f2, // p_891->g_129
        0xE01A9132L, // p_891->g_136
        {4L,3UL,0x65L,1UL,0x053CD6AEL,6UL,0L,{6UL,{4294967295UL,4294967295UL,1L,-1L,4294967288UL,0x3162L,65535UL,-1L,4294967295UL,7L},{0x6649860CL,9UL,1L,0x64025190L,1UL,0L,0xD353L,0x4FL,0x0992C471L,-9L},0xF23D3C10L,0x686A80E99DC0556BL,0xCCCDA303L},0x4A0D5BF3L}, // p_891->g_139
        0x79F272DAA1F06FFCL, // p_891->g_141
        &p_891->g_141, // p_891->g_140
        {7L,0xB601L,-1L,0x85860A87L,1UL,0xFC807B8FL,0x3146E2101DCE6AB1L,{1UL,{0x9EDD30E9L,4294967295UL,0x15L,0x618ADBA3L,4294967292UL,0x2B21L,0x91E3L,0x3AL,0x2A3786C0L,0x00L},{1UL,0xBC4C52ABL,0x2EL,0x57571829L,8UL,-2L,0x8A5FL,0x29L,0UL,0x4EL},0x8AA7DBA1L,0xB856BF04042B0432L,8UL},0x5DAF8DDAL}, // p_891->g_181
        (void*)0, // p_891->g_188
        (void*)0, // p_891->g_189
        {{&p_891->g_181,&p_891->g_181},{&p_891->g_181,&p_891->g_181},{&p_891->g_181,&p_891->g_181},{&p_891->g_181,&p_891->g_181},{&p_891->g_181,&p_891->g_181}}, // p_891->g_191
        &p_891->g_191[1][0], // p_891->g_190
        {{0xA3L,255UL,0xA3L,0xA3L,255UL,0xA3L},{0xA3L,255UL,0xA3L,0xA3L,255UL,0xA3L},{0xA3L,255UL,0xA3L,0xA3L,255UL,0xA3L},{0xA3L,255UL,0xA3L,0xA3L,255UL,0xA3L},{0xA3L,255UL,0xA3L,0xA3L,255UL,0xA3L}}, // p_891->g_216
        (VECTOR(uint32_t, 8))(0x90AC5276L, (VECTOR(uint32_t, 4))(0x90AC5276L, (VECTOR(uint32_t, 2))(0x90AC5276L, 1UL), 1UL), 1UL, 0x90AC5276L, 1UL), // p_891->g_222
        {{4294967295UL,0xEE1040B6L,4294967295UL,4294967295UL,0xEE1040B6L,4294967295UL,4294967295UL},{4294967295UL,0xEE1040B6L,4294967295UL,4294967295UL,0xEE1040B6L,4294967295UL,4294967295UL}}, // p_891->g_239
        0x0569F4B4L, // p_891->g_257
        0xDE9EL, // p_891->g_269
        0L, // p_891->g_272
        1L, // p_891->g_288
        0x5DEBL, // p_891->g_290
        {{0x2AL,0x1AL,0x1AL,0x2AL,0x2AL,0x1AL,0x1AL,0x2AL},{0x2AL,0x1AL,0x1AL,0x2AL,0x2AL,0x1AL,0x1AL,0x2AL}}, // p_891->g_293
        4L, // p_891->g_294
        (-4L), // p_891->g_295
        (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x3C02121A2EB81A4DL), 0x3C02121A2EB81A4DL), 0x3C02121A2EB81A4DL, (-7L), 0x3C02121A2EB81A4DL), // p_891->g_301
        0x4A897BB4L, // p_891->g_304
        (void*)0, // p_891->g_309
        (-1L), // p_891->g_311
        {0x26FF3D3A7B81F921L,{0x76301610L,0xB94CEAFFL,4L,0x2A0031D7L,2UL,0x4922L,0x09B7L,0x63L,0x10574AFDL,0x02L},{4294967295UL,0UL,-1L,0x659855A0L,0xE3A7D100L,0x02C6L,65535UL,0x20L,0xECA207B6L,2L},0x25998427L,0x618F9BC03F2DFCA7L,4UL}, // p_891->g_313
        (void*)0, // p_891->g_314
        &p_891->g_181.f7, // p_891->g_315
        &p_891->g_181.f8, // p_891->g_332
        (VECTOR(int32_t, 16))(0x4F0CFF06L, (VECTOR(int32_t, 4))(0x4F0CFF06L, (VECTOR(int32_t, 2))(0x4F0CFF06L, 1L), 1L), 1L, 0x4F0CFF06L, 1L, (VECTOR(int32_t, 2))(0x4F0CFF06L, 1L), (VECTOR(int32_t, 2))(0x4F0CFF06L, 1L), 0x4F0CFF06L, 1L, 0x4F0CFF06L, 1L), // p_891->g_403
        (VECTOR(uint8_t, 16))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 0x34L), 0x34L), 0x34L, 0xFDL, 0x34L, (VECTOR(uint8_t, 2))(0xFDL, 0x34L), (VECTOR(uint8_t, 2))(0xFDL, 0x34L), 0xFDL, 0x34L, 0xFDL, 0x34L), // p_891->g_406
        &p_891->g_272, // p_891->g_417
        &p_891->g_417, // p_891->g_416
        &p_891->g_313.f2, // p_891->g_426
        &p_891->g_426, // p_891->g_425
        (VECTOR(uint16_t, 16))(0x4881L, (VECTOR(uint16_t, 4))(0x4881L, (VECTOR(uint16_t, 2))(0x4881L, 0UL), 0UL), 0UL, 0x4881L, 0UL, (VECTOR(uint16_t, 2))(0x4881L, 0UL), (VECTOR(uint16_t, 2))(0x4881L, 0UL), 0x4881L, 0UL, 0x4881L, 0UL), // p_891->g_432
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_891->g_437
        &p_891->g_102[1].f0, // p_891->g_464
        {{{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L}},{{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L}},{{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L},{0x53DD5018L,1UL,0x3FL,-4L,4294967294UL,1L,65534UL,0x69L,0xB1F233DCL,0x66L}}}, // p_891->g_467
        &p_891->g_139.f7.f1, // p_891->g_468
        &p_891->g_113, // p_891->g_472
        (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0L), 0L), // p_891->g_489
        {1L,65533UL,0x5DL,0UL,1UL,4294967295UL,-7L,{18446744073709551606UL,{0xAC99E83EL,1UL,0x2BL,-9L,0xB65298D9L,2L,65526UL,0x66L,0x376484A8L,-1L},{1UL,4294967295UL,-1L,0L,0x1AE7FF2DL,-1L,0xF49BL,0x3BL,0UL,0x19L},0x0AA3183BL,1UL,0UL},0x623B028EL}, // p_891->g_490
        {18446744073709551615UL,{0x3E862A48L,0UL,0L,1L,0x09C94D0DL,-1L,0x2E99L,3L,0x3358FD0FL,0x56L},{9UL,3UL,-4L,-6L,0xD69083A7L,-8L,1UL,-1L,0xC1B02E0FL,1L},0x5DEBA606L,1UL,0xB8F0FEAFL}, // p_891->g_500
        255UL, // p_891->g_503
        0x85L, // p_891->g_532
        (VECTOR(int32_t, 4))(0x5B23885CL, (VECTOR(int32_t, 2))(0x5B23885CL, (-6L)), (-6L)), // p_891->g_555
        (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x1F6FEEEFL), 0x1F6FEEEFL), 0x1F6FEEEFL, 6L, 0x1F6FEEEFL, (VECTOR(int32_t, 2))(6L, 0x1F6FEEEFL), (VECTOR(int32_t, 2))(6L, 0x1F6FEEEFL), 6L, 0x1F6FEEEFL, 6L, 0x1F6FEEEFL), // p_891->g_556
        (VECTOR(uint16_t, 2))(0x3C3EL, 0x0D4AL), // p_891->g_587
        &p_891->g_416, // p_891->g_594
        &p_891->g_293[1][6], // p_891->g_603
        &p_891->g_603, // p_891->g_602
        (void*)0, // p_891->g_604
        {0xCF42528DL,3UL,0x2BL,-9L,0xB6361286L,-3L,0x35FFL,1L,0x38A0B9A6L,-1L}, // p_891->g_609
        {4294967295UL,4294967295UL,-1L,-9L,0x9E82A0A1L,-1L,0x37D3L,1L,6UL,1L}, // p_891->g_610
        {4294967295UL,0x1F6AA10FL,0x52L,0x335381D8L,1UL,0x54D5L,0UL,0x56L,4294967295UL,0x2BL}, // p_891->g_637
        {0UL,{0UL,4294967295UL,0x4FL,0x43400450L,1UL,3L,1UL,3L,4294967295UL,1L},{4294967295UL,1UL,0L,0x1EE26711L,0x1829E86EL,0x6153L,65535UL,0L,0x61ABA3A0L,-1L},0x4E7473EDL,0xCAA0FB9BD17F47BBL,0xD619E5D1L}, // p_891->g_650
        {5UL,4294967295UL,0x30L,0x513743A0L,4294967295UL,0x5811L,65533UL,0x6BL,0x310CFEA7L,0x53L}, // p_891->g_665
        {0x18331AB2L,0x5BFFE50DL,0x1FL,-1L,4294967295UL,5L,9UL,0x2FL,0UL,0L}, // p_891->g_666
        (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x6AL), 0x6AL), 0x6AL, 246UL, 0x6AL), // p_891->g_680
        (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x6B749ACBL), 0x6B749ACBL), // p_891->g_705
        (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x65L), 0x65L), // p_891->g_721
        (VECTOR(int16_t, 2))((-1L), 0x6E9BL), // p_891->g_733
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x00FAL), 0x00FAL), // p_891->g_734
        0x9022F5CA165398F9L, // p_891->g_763
        (void*)0, // p_891->g_768
        &p_891->g_768, // p_891->g_767
        (-1L), // p_891->g_780
        {18446744073709551615UL,{1UL,0xC94EC562L,0x7BL,0x614D8591L,1UL,0x228EL,65531UL,0x7FL,0UL,0x40L},{4294967295UL,0x63EC7EF4L,-8L,0x1BA1B2D3L,0x4439F844L,3L,0x5237L,-1L,0x3F8CF113L,-1L},4294967295UL,0x4B441ADA1C36A6F1L,5UL}, // p_891->g_791
        {{{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)}},{{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)},{(-4L),0x41203C4BL,0x75C9FB07L,0x673F6C56L,0x07210731L,0x0C69AD26L,0x75C9FB07L,(-4L)}}}, // p_891->g_800
        {0}, // p_891->g_817
        {{{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}}}, // p_891->g_818
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x2BL), 0x2BL), 0x2BL, 1UL, 0x2BL), // p_891->g_835
        &p_891->g_417, // p_891->g_841
        &p_891->g_841, // p_891->g_840
        &p_891->g_840, // p_891->g_839
        &p_891->g_839, // p_891->g_838
        (VECTOR(uint32_t, 16))(0x85436DA9L, (VECTOR(uint32_t, 4))(0x85436DA9L, (VECTOR(uint32_t, 2))(0x85436DA9L, 0xD78AD522L), 0xD78AD522L), 0xD78AD522L, 0x85436DA9L, 0xD78AD522L, (VECTOR(uint32_t, 2))(0x85436DA9L, 0xD78AD522L), (VECTOR(uint32_t, 2))(0x85436DA9L, 0xD78AD522L), 0x85436DA9L, 0xD78AD522L, 0x85436DA9L, 0xD78AD522L), // p_891->g_853
        0, // p_891->v_collective
        sequence_input[get_global_id(0)], // p_891->global_0_offset
        sequence_input[get_global_id(1)], // p_891->global_1_offset
        sequence_input[get_global_id(2)], // p_891->global_2_offset
        sequence_input[get_local_id(0)], // p_891->local_0_offset
        sequence_input[get_local_id(1)], // p_891->local_1_offset
        sequence_input[get_local_id(2)], // p_891->local_2_offset
        sequence_input[get_group_id(0)], // p_891->group_0_offset
        sequence_input[get_group_id(1)], // p_891->group_1_offset
        sequence_input[get_group_id(2)], // p_891->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 14)), permutations[0][get_linear_local_id()])), // p_891->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_892 = c_893;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_891);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_891->g_2, "p_891->g_2", print_hash_value);
    transparent_crc(p_891->g_3, "p_891->g_3", print_hash_value);
    transparent_crc(p_891->g_4, "p_891->g_4", print_hash_value);
    transparent_crc(p_891->g_12, "p_891->g_12", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_891->g_15[i][j], "p_891->g_15[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_891->g_18, "p_891->g_18", print_hash_value);
    transparent_crc(p_891->g_24, "p_891->g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_891->g_25[i], "p_891->g_25[i]", print_hash_value);

    }
    transparent_crc(p_891->g_26, "p_891->g_26", print_hash_value);
    transparent_crc(p_891->g_75, "p_891->g_75", print_hash_value);
    transparent_crc(p_891->g_77.x, "p_891->g_77.x", print_hash_value);
    transparent_crc(p_891->g_77.y, "p_891->g_77.y", print_hash_value);
    transparent_crc(p_891->g_77.z, "p_891->g_77.z", print_hash_value);
    transparent_crc(p_891->g_77.w, "p_891->g_77.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_891->g_102[i].f0, "p_891->g_102[i].f0", print_hash_value);
        transparent_crc(p_891->g_102[i].f1, "p_891->g_102[i].f1", print_hash_value);
        transparent_crc(p_891->g_102[i].f2, "p_891->g_102[i].f2", print_hash_value);
        transparent_crc(p_891->g_102[i].f3, "p_891->g_102[i].f3", print_hash_value);
        transparent_crc(p_891->g_102[i].f4, "p_891->g_102[i].f4", print_hash_value);
        transparent_crc(p_891->g_102[i].f5, "p_891->g_102[i].f5", print_hash_value);
        transparent_crc(p_891->g_102[i].f6, "p_891->g_102[i].f6", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f0, "p_891->g_102[i].f7.f0", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f0, "p_891->g_102[i].f7.f1.f0", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f1, "p_891->g_102[i].f7.f1.f1", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f2, "p_891->g_102[i].f7.f1.f2", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f3, "p_891->g_102[i].f7.f1.f3", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f4, "p_891->g_102[i].f7.f1.f4", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f5, "p_891->g_102[i].f7.f1.f5", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f6, "p_891->g_102[i].f7.f1.f6", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f7, "p_891->g_102[i].f7.f1.f7", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f8, "p_891->g_102[i].f7.f1.f8", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f1.f9, "p_891->g_102[i].f7.f1.f9", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f0, "p_891->g_102[i].f7.f2.f0", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f1, "p_891->g_102[i].f7.f2.f1", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f2, "p_891->g_102[i].f7.f2.f2", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f3, "p_891->g_102[i].f7.f2.f3", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f4, "p_891->g_102[i].f7.f2.f4", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f5, "p_891->g_102[i].f7.f2.f5", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f6, "p_891->g_102[i].f7.f2.f6", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f7, "p_891->g_102[i].f7.f2.f7", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f8, "p_891->g_102[i].f7.f2.f8", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f2.f9, "p_891->g_102[i].f7.f2.f9", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f3, "p_891->g_102[i].f7.f3", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f4, "p_891->g_102[i].f7.f4", print_hash_value);
        transparent_crc(p_891->g_102[i].f7.f5, "p_891->g_102[i].f7.f5", print_hash_value);
        transparent_crc(p_891->g_102[i].f8, "p_891->g_102[i].f8", print_hash_value);

    }
    transparent_crc(p_891->g_108, "p_891->g_108", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_891->g_118[i].f0, "p_891->g_118[i].f0", print_hash_value);
        transparent_crc(p_891->g_118[i].f1, "p_891->g_118[i].f1", print_hash_value);
        transparent_crc(p_891->g_118[i].f2, "p_891->g_118[i].f2", print_hash_value);
        transparent_crc(p_891->g_118[i].f3, "p_891->g_118[i].f3", print_hash_value);
        transparent_crc(p_891->g_118[i].f4, "p_891->g_118[i].f4", print_hash_value);
        transparent_crc(p_891->g_118[i].f5, "p_891->g_118[i].f5", print_hash_value);
        transparent_crc(p_891->g_118[i].f6, "p_891->g_118[i].f6", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f0, "p_891->g_118[i].f7.f0", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f0, "p_891->g_118[i].f7.f1.f0", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f1, "p_891->g_118[i].f7.f1.f1", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f2, "p_891->g_118[i].f7.f1.f2", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f3, "p_891->g_118[i].f7.f1.f3", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f4, "p_891->g_118[i].f7.f1.f4", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f5, "p_891->g_118[i].f7.f1.f5", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f6, "p_891->g_118[i].f7.f1.f6", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f7, "p_891->g_118[i].f7.f1.f7", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f8, "p_891->g_118[i].f7.f1.f8", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f1.f9, "p_891->g_118[i].f7.f1.f9", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f0, "p_891->g_118[i].f7.f2.f0", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f1, "p_891->g_118[i].f7.f2.f1", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f2, "p_891->g_118[i].f7.f2.f2", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f3, "p_891->g_118[i].f7.f2.f3", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f4, "p_891->g_118[i].f7.f2.f4", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f5, "p_891->g_118[i].f7.f2.f5", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f6, "p_891->g_118[i].f7.f2.f6", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f7, "p_891->g_118[i].f7.f2.f7", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f8, "p_891->g_118[i].f7.f2.f8", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f2.f9, "p_891->g_118[i].f7.f2.f9", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f3, "p_891->g_118[i].f7.f3", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f4, "p_891->g_118[i].f7.f4", print_hash_value);
        transparent_crc(p_891->g_118[i].f7.f5, "p_891->g_118[i].f7.f5", print_hash_value);
        transparent_crc(p_891->g_118[i].f8, "p_891->g_118[i].f8", print_hash_value);

    }
    transparent_crc(p_891->g_136, "p_891->g_136", print_hash_value);
    transparent_crc(p_891->g_139.f0, "p_891->g_139.f0", print_hash_value);
    transparent_crc(p_891->g_139.f1, "p_891->g_139.f1", print_hash_value);
    transparent_crc(p_891->g_139.f2, "p_891->g_139.f2", print_hash_value);
    transparent_crc(p_891->g_139.f3, "p_891->g_139.f3", print_hash_value);
    transparent_crc(p_891->g_139.f4, "p_891->g_139.f4", print_hash_value);
    transparent_crc(p_891->g_139.f5, "p_891->g_139.f5", print_hash_value);
    transparent_crc(p_891->g_139.f6, "p_891->g_139.f6", print_hash_value);
    transparent_crc(p_891->g_139.f7.f0, "p_891->g_139.f7.f0", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f0, "p_891->g_139.f7.f1.f0", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f1, "p_891->g_139.f7.f1.f1", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f2, "p_891->g_139.f7.f1.f2", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f3, "p_891->g_139.f7.f1.f3", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f4, "p_891->g_139.f7.f1.f4", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f5, "p_891->g_139.f7.f1.f5", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f6, "p_891->g_139.f7.f1.f6", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f7, "p_891->g_139.f7.f1.f7", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f8, "p_891->g_139.f7.f1.f8", print_hash_value);
    transparent_crc(p_891->g_139.f7.f1.f9, "p_891->g_139.f7.f1.f9", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f0, "p_891->g_139.f7.f2.f0", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f1, "p_891->g_139.f7.f2.f1", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f2, "p_891->g_139.f7.f2.f2", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f3, "p_891->g_139.f7.f2.f3", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f4, "p_891->g_139.f7.f2.f4", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f5, "p_891->g_139.f7.f2.f5", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f6, "p_891->g_139.f7.f2.f6", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f7, "p_891->g_139.f7.f2.f7", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f8, "p_891->g_139.f7.f2.f8", print_hash_value);
    transparent_crc(p_891->g_139.f7.f2.f9, "p_891->g_139.f7.f2.f9", print_hash_value);
    transparent_crc(p_891->g_139.f7.f3, "p_891->g_139.f7.f3", print_hash_value);
    transparent_crc(p_891->g_139.f7.f4, "p_891->g_139.f7.f4", print_hash_value);
    transparent_crc(p_891->g_139.f7.f5, "p_891->g_139.f7.f5", print_hash_value);
    transparent_crc(p_891->g_139.f8, "p_891->g_139.f8", print_hash_value);
    transparent_crc(p_891->g_141, "p_891->g_141", print_hash_value);
    transparent_crc(p_891->g_181.f0, "p_891->g_181.f0", print_hash_value);
    transparent_crc(p_891->g_181.f1, "p_891->g_181.f1", print_hash_value);
    transparent_crc(p_891->g_181.f2, "p_891->g_181.f2", print_hash_value);
    transparent_crc(p_891->g_181.f3, "p_891->g_181.f3", print_hash_value);
    transparent_crc(p_891->g_181.f4, "p_891->g_181.f4", print_hash_value);
    transparent_crc(p_891->g_181.f5, "p_891->g_181.f5", print_hash_value);
    transparent_crc(p_891->g_181.f6, "p_891->g_181.f6", print_hash_value);
    transparent_crc(p_891->g_181.f7.f0, "p_891->g_181.f7.f0", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f0, "p_891->g_181.f7.f1.f0", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f1, "p_891->g_181.f7.f1.f1", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f2, "p_891->g_181.f7.f1.f2", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f3, "p_891->g_181.f7.f1.f3", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f4, "p_891->g_181.f7.f1.f4", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f5, "p_891->g_181.f7.f1.f5", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f6, "p_891->g_181.f7.f1.f6", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f7, "p_891->g_181.f7.f1.f7", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f8, "p_891->g_181.f7.f1.f8", print_hash_value);
    transparent_crc(p_891->g_181.f7.f1.f9, "p_891->g_181.f7.f1.f9", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f0, "p_891->g_181.f7.f2.f0", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f1, "p_891->g_181.f7.f2.f1", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f2, "p_891->g_181.f7.f2.f2", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f3, "p_891->g_181.f7.f2.f3", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f4, "p_891->g_181.f7.f2.f4", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f5, "p_891->g_181.f7.f2.f5", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f6, "p_891->g_181.f7.f2.f6", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f7, "p_891->g_181.f7.f2.f7", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f8, "p_891->g_181.f7.f2.f8", print_hash_value);
    transparent_crc(p_891->g_181.f7.f2.f9, "p_891->g_181.f7.f2.f9", print_hash_value);
    transparent_crc(p_891->g_181.f7.f3, "p_891->g_181.f7.f3", print_hash_value);
    transparent_crc(p_891->g_181.f7.f4, "p_891->g_181.f7.f4", print_hash_value);
    transparent_crc(p_891->g_181.f7.f5, "p_891->g_181.f7.f5", print_hash_value);
    transparent_crc(p_891->g_181.f8, "p_891->g_181.f8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_891->g_216[i][j], "p_891->g_216[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_891->g_222.s0, "p_891->g_222.s0", print_hash_value);
    transparent_crc(p_891->g_222.s1, "p_891->g_222.s1", print_hash_value);
    transparent_crc(p_891->g_222.s2, "p_891->g_222.s2", print_hash_value);
    transparent_crc(p_891->g_222.s3, "p_891->g_222.s3", print_hash_value);
    transparent_crc(p_891->g_222.s4, "p_891->g_222.s4", print_hash_value);
    transparent_crc(p_891->g_222.s5, "p_891->g_222.s5", print_hash_value);
    transparent_crc(p_891->g_222.s6, "p_891->g_222.s6", print_hash_value);
    transparent_crc(p_891->g_222.s7, "p_891->g_222.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_891->g_239[i][j], "p_891->g_239[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_891->g_257, "p_891->g_257", print_hash_value);
    transparent_crc(p_891->g_269, "p_891->g_269", print_hash_value);
    transparent_crc(p_891->g_272, "p_891->g_272", print_hash_value);
    transparent_crc(p_891->g_288, "p_891->g_288", print_hash_value);
    transparent_crc(p_891->g_290, "p_891->g_290", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_891->g_293[i][j], "p_891->g_293[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_891->g_294, "p_891->g_294", print_hash_value);
    transparent_crc(p_891->g_295, "p_891->g_295", print_hash_value);
    transparent_crc(p_891->g_301.s0, "p_891->g_301.s0", print_hash_value);
    transparent_crc(p_891->g_301.s1, "p_891->g_301.s1", print_hash_value);
    transparent_crc(p_891->g_301.s2, "p_891->g_301.s2", print_hash_value);
    transparent_crc(p_891->g_301.s3, "p_891->g_301.s3", print_hash_value);
    transparent_crc(p_891->g_301.s4, "p_891->g_301.s4", print_hash_value);
    transparent_crc(p_891->g_301.s5, "p_891->g_301.s5", print_hash_value);
    transparent_crc(p_891->g_301.s6, "p_891->g_301.s6", print_hash_value);
    transparent_crc(p_891->g_301.s7, "p_891->g_301.s7", print_hash_value);
    transparent_crc(p_891->g_304, "p_891->g_304", print_hash_value);
    transparent_crc(p_891->g_311, "p_891->g_311", print_hash_value);
    transparent_crc(p_891->g_313.f0, "p_891->g_313.f0", print_hash_value);
    transparent_crc(p_891->g_313.f1.f0, "p_891->g_313.f1.f0", print_hash_value);
    transparent_crc(p_891->g_313.f1.f1, "p_891->g_313.f1.f1", print_hash_value);
    transparent_crc(p_891->g_313.f1.f2, "p_891->g_313.f1.f2", print_hash_value);
    transparent_crc(p_891->g_313.f1.f3, "p_891->g_313.f1.f3", print_hash_value);
    transparent_crc(p_891->g_313.f1.f4, "p_891->g_313.f1.f4", print_hash_value);
    transparent_crc(p_891->g_313.f1.f5, "p_891->g_313.f1.f5", print_hash_value);
    transparent_crc(p_891->g_313.f1.f6, "p_891->g_313.f1.f6", print_hash_value);
    transparent_crc(p_891->g_313.f1.f7, "p_891->g_313.f1.f7", print_hash_value);
    transparent_crc(p_891->g_313.f1.f8, "p_891->g_313.f1.f8", print_hash_value);
    transparent_crc(p_891->g_313.f1.f9, "p_891->g_313.f1.f9", print_hash_value);
    transparent_crc(p_891->g_313.f2.f0, "p_891->g_313.f2.f0", print_hash_value);
    transparent_crc(p_891->g_313.f2.f1, "p_891->g_313.f2.f1", print_hash_value);
    transparent_crc(p_891->g_313.f2.f2, "p_891->g_313.f2.f2", print_hash_value);
    transparent_crc(p_891->g_313.f2.f3, "p_891->g_313.f2.f3", print_hash_value);
    transparent_crc(p_891->g_313.f2.f4, "p_891->g_313.f2.f4", print_hash_value);
    transparent_crc(p_891->g_313.f2.f5, "p_891->g_313.f2.f5", print_hash_value);
    transparent_crc(p_891->g_313.f2.f6, "p_891->g_313.f2.f6", print_hash_value);
    transparent_crc(p_891->g_313.f2.f7, "p_891->g_313.f2.f7", print_hash_value);
    transparent_crc(p_891->g_313.f2.f8, "p_891->g_313.f2.f8", print_hash_value);
    transparent_crc(p_891->g_313.f2.f9, "p_891->g_313.f2.f9", print_hash_value);
    transparent_crc(p_891->g_313.f3, "p_891->g_313.f3", print_hash_value);
    transparent_crc(p_891->g_313.f4, "p_891->g_313.f4", print_hash_value);
    transparent_crc(p_891->g_313.f5, "p_891->g_313.f5", print_hash_value);
    transparent_crc(p_891->g_403.s0, "p_891->g_403.s0", print_hash_value);
    transparent_crc(p_891->g_403.s1, "p_891->g_403.s1", print_hash_value);
    transparent_crc(p_891->g_403.s2, "p_891->g_403.s2", print_hash_value);
    transparent_crc(p_891->g_403.s3, "p_891->g_403.s3", print_hash_value);
    transparent_crc(p_891->g_403.s4, "p_891->g_403.s4", print_hash_value);
    transparent_crc(p_891->g_403.s5, "p_891->g_403.s5", print_hash_value);
    transparent_crc(p_891->g_403.s6, "p_891->g_403.s6", print_hash_value);
    transparent_crc(p_891->g_403.s7, "p_891->g_403.s7", print_hash_value);
    transparent_crc(p_891->g_403.s8, "p_891->g_403.s8", print_hash_value);
    transparent_crc(p_891->g_403.s9, "p_891->g_403.s9", print_hash_value);
    transparent_crc(p_891->g_403.sa, "p_891->g_403.sa", print_hash_value);
    transparent_crc(p_891->g_403.sb, "p_891->g_403.sb", print_hash_value);
    transparent_crc(p_891->g_403.sc, "p_891->g_403.sc", print_hash_value);
    transparent_crc(p_891->g_403.sd, "p_891->g_403.sd", print_hash_value);
    transparent_crc(p_891->g_403.se, "p_891->g_403.se", print_hash_value);
    transparent_crc(p_891->g_403.sf, "p_891->g_403.sf", print_hash_value);
    transparent_crc(p_891->g_406.s0, "p_891->g_406.s0", print_hash_value);
    transparent_crc(p_891->g_406.s1, "p_891->g_406.s1", print_hash_value);
    transparent_crc(p_891->g_406.s2, "p_891->g_406.s2", print_hash_value);
    transparent_crc(p_891->g_406.s3, "p_891->g_406.s3", print_hash_value);
    transparent_crc(p_891->g_406.s4, "p_891->g_406.s4", print_hash_value);
    transparent_crc(p_891->g_406.s5, "p_891->g_406.s5", print_hash_value);
    transparent_crc(p_891->g_406.s6, "p_891->g_406.s6", print_hash_value);
    transparent_crc(p_891->g_406.s7, "p_891->g_406.s7", print_hash_value);
    transparent_crc(p_891->g_406.s8, "p_891->g_406.s8", print_hash_value);
    transparent_crc(p_891->g_406.s9, "p_891->g_406.s9", print_hash_value);
    transparent_crc(p_891->g_406.sa, "p_891->g_406.sa", print_hash_value);
    transparent_crc(p_891->g_406.sb, "p_891->g_406.sb", print_hash_value);
    transparent_crc(p_891->g_406.sc, "p_891->g_406.sc", print_hash_value);
    transparent_crc(p_891->g_406.sd, "p_891->g_406.sd", print_hash_value);
    transparent_crc(p_891->g_406.se, "p_891->g_406.se", print_hash_value);
    transparent_crc(p_891->g_406.sf, "p_891->g_406.sf", print_hash_value);
    transparent_crc(p_891->g_432.s0, "p_891->g_432.s0", print_hash_value);
    transparent_crc(p_891->g_432.s1, "p_891->g_432.s1", print_hash_value);
    transparent_crc(p_891->g_432.s2, "p_891->g_432.s2", print_hash_value);
    transparent_crc(p_891->g_432.s3, "p_891->g_432.s3", print_hash_value);
    transparent_crc(p_891->g_432.s4, "p_891->g_432.s4", print_hash_value);
    transparent_crc(p_891->g_432.s5, "p_891->g_432.s5", print_hash_value);
    transparent_crc(p_891->g_432.s6, "p_891->g_432.s6", print_hash_value);
    transparent_crc(p_891->g_432.s7, "p_891->g_432.s7", print_hash_value);
    transparent_crc(p_891->g_432.s8, "p_891->g_432.s8", print_hash_value);
    transparent_crc(p_891->g_432.s9, "p_891->g_432.s9", print_hash_value);
    transparent_crc(p_891->g_432.sa, "p_891->g_432.sa", print_hash_value);
    transparent_crc(p_891->g_432.sb, "p_891->g_432.sb", print_hash_value);
    transparent_crc(p_891->g_432.sc, "p_891->g_432.sc", print_hash_value);
    transparent_crc(p_891->g_432.sd, "p_891->g_432.sd", print_hash_value);
    transparent_crc(p_891->g_432.se, "p_891->g_432.se", print_hash_value);
    transparent_crc(p_891->g_432.sf, "p_891->g_432.sf", print_hash_value);
    transparent_crc(p_891->g_437.s0, "p_891->g_437.s0", print_hash_value);
    transparent_crc(p_891->g_437.s1, "p_891->g_437.s1", print_hash_value);
    transparent_crc(p_891->g_437.s2, "p_891->g_437.s2", print_hash_value);
    transparent_crc(p_891->g_437.s3, "p_891->g_437.s3", print_hash_value);
    transparent_crc(p_891->g_437.s4, "p_891->g_437.s4", print_hash_value);
    transparent_crc(p_891->g_437.s5, "p_891->g_437.s5", print_hash_value);
    transparent_crc(p_891->g_437.s6, "p_891->g_437.s6", print_hash_value);
    transparent_crc(p_891->g_437.s7, "p_891->g_437.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_891->g_467[i][j].f0, "p_891->g_467[i][j].f0", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f1, "p_891->g_467[i][j].f1", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f2, "p_891->g_467[i][j].f2", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f3, "p_891->g_467[i][j].f3", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f4, "p_891->g_467[i][j].f4", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f5, "p_891->g_467[i][j].f5", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f6, "p_891->g_467[i][j].f6", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f7, "p_891->g_467[i][j].f7", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f8, "p_891->g_467[i][j].f8", print_hash_value);
            transparent_crc(p_891->g_467[i][j].f9, "p_891->g_467[i][j].f9", print_hash_value);

        }
    }
    transparent_crc(p_891->g_489.x, "p_891->g_489.x", print_hash_value);
    transparent_crc(p_891->g_489.y, "p_891->g_489.y", print_hash_value);
    transparent_crc(p_891->g_489.z, "p_891->g_489.z", print_hash_value);
    transparent_crc(p_891->g_489.w, "p_891->g_489.w", print_hash_value);
    transparent_crc(p_891->g_490.f0, "p_891->g_490.f0", print_hash_value);
    transparent_crc(p_891->g_490.f1, "p_891->g_490.f1", print_hash_value);
    transparent_crc(p_891->g_490.f2, "p_891->g_490.f2", print_hash_value);
    transparent_crc(p_891->g_490.f3, "p_891->g_490.f3", print_hash_value);
    transparent_crc(p_891->g_490.f4, "p_891->g_490.f4", print_hash_value);
    transparent_crc(p_891->g_490.f5, "p_891->g_490.f5", print_hash_value);
    transparent_crc(p_891->g_490.f6, "p_891->g_490.f6", print_hash_value);
    transparent_crc(p_891->g_490.f7.f0, "p_891->g_490.f7.f0", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f0, "p_891->g_490.f7.f1.f0", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f1, "p_891->g_490.f7.f1.f1", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f2, "p_891->g_490.f7.f1.f2", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f3, "p_891->g_490.f7.f1.f3", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f4, "p_891->g_490.f7.f1.f4", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f5, "p_891->g_490.f7.f1.f5", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f6, "p_891->g_490.f7.f1.f6", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f7, "p_891->g_490.f7.f1.f7", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f8, "p_891->g_490.f7.f1.f8", print_hash_value);
    transparent_crc(p_891->g_490.f7.f1.f9, "p_891->g_490.f7.f1.f9", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f0, "p_891->g_490.f7.f2.f0", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f1, "p_891->g_490.f7.f2.f1", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f2, "p_891->g_490.f7.f2.f2", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f3, "p_891->g_490.f7.f2.f3", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f4, "p_891->g_490.f7.f2.f4", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f5, "p_891->g_490.f7.f2.f5", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f6, "p_891->g_490.f7.f2.f6", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f7, "p_891->g_490.f7.f2.f7", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f8, "p_891->g_490.f7.f2.f8", print_hash_value);
    transparent_crc(p_891->g_490.f7.f2.f9, "p_891->g_490.f7.f2.f9", print_hash_value);
    transparent_crc(p_891->g_490.f7.f3, "p_891->g_490.f7.f3", print_hash_value);
    transparent_crc(p_891->g_490.f7.f4, "p_891->g_490.f7.f4", print_hash_value);
    transparent_crc(p_891->g_490.f7.f5, "p_891->g_490.f7.f5", print_hash_value);
    transparent_crc(p_891->g_490.f8, "p_891->g_490.f8", print_hash_value);
    transparent_crc(p_891->g_500.f0, "p_891->g_500.f0", print_hash_value);
    transparent_crc(p_891->g_500.f1.f0, "p_891->g_500.f1.f0", print_hash_value);
    transparent_crc(p_891->g_500.f1.f1, "p_891->g_500.f1.f1", print_hash_value);
    transparent_crc(p_891->g_500.f1.f2, "p_891->g_500.f1.f2", print_hash_value);
    transparent_crc(p_891->g_500.f1.f3, "p_891->g_500.f1.f3", print_hash_value);
    transparent_crc(p_891->g_500.f1.f4, "p_891->g_500.f1.f4", print_hash_value);
    transparent_crc(p_891->g_500.f1.f5, "p_891->g_500.f1.f5", print_hash_value);
    transparent_crc(p_891->g_500.f1.f6, "p_891->g_500.f1.f6", print_hash_value);
    transparent_crc(p_891->g_500.f1.f7, "p_891->g_500.f1.f7", print_hash_value);
    transparent_crc(p_891->g_500.f1.f8, "p_891->g_500.f1.f8", print_hash_value);
    transparent_crc(p_891->g_500.f1.f9, "p_891->g_500.f1.f9", print_hash_value);
    transparent_crc(p_891->g_500.f2.f0, "p_891->g_500.f2.f0", print_hash_value);
    transparent_crc(p_891->g_500.f2.f1, "p_891->g_500.f2.f1", print_hash_value);
    transparent_crc(p_891->g_500.f2.f2, "p_891->g_500.f2.f2", print_hash_value);
    transparent_crc(p_891->g_500.f2.f3, "p_891->g_500.f2.f3", print_hash_value);
    transparent_crc(p_891->g_500.f2.f4, "p_891->g_500.f2.f4", print_hash_value);
    transparent_crc(p_891->g_500.f2.f5, "p_891->g_500.f2.f5", print_hash_value);
    transparent_crc(p_891->g_500.f2.f6, "p_891->g_500.f2.f6", print_hash_value);
    transparent_crc(p_891->g_500.f2.f7, "p_891->g_500.f2.f7", print_hash_value);
    transparent_crc(p_891->g_500.f2.f8, "p_891->g_500.f2.f8", print_hash_value);
    transparent_crc(p_891->g_500.f2.f9, "p_891->g_500.f2.f9", print_hash_value);
    transparent_crc(p_891->g_500.f3, "p_891->g_500.f3", print_hash_value);
    transparent_crc(p_891->g_500.f4, "p_891->g_500.f4", print_hash_value);
    transparent_crc(p_891->g_500.f5, "p_891->g_500.f5", print_hash_value);
    transparent_crc(p_891->g_503, "p_891->g_503", print_hash_value);
    transparent_crc(p_891->g_532, "p_891->g_532", print_hash_value);
    transparent_crc(p_891->g_555.x, "p_891->g_555.x", print_hash_value);
    transparent_crc(p_891->g_555.y, "p_891->g_555.y", print_hash_value);
    transparent_crc(p_891->g_555.z, "p_891->g_555.z", print_hash_value);
    transparent_crc(p_891->g_555.w, "p_891->g_555.w", print_hash_value);
    transparent_crc(p_891->g_556.s0, "p_891->g_556.s0", print_hash_value);
    transparent_crc(p_891->g_556.s1, "p_891->g_556.s1", print_hash_value);
    transparent_crc(p_891->g_556.s2, "p_891->g_556.s2", print_hash_value);
    transparent_crc(p_891->g_556.s3, "p_891->g_556.s3", print_hash_value);
    transparent_crc(p_891->g_556.s4, "p_891->g_556.s4", print_hash_value);
    transparent_crc(p_891->g_556.s5, "p_891->g_556.s5", print_hash_value);
    transparent_crc(p_891->g_556.s6, "p_891->g_556.s6", print_hash_value);
    transparent_crc(p_891->g_556.s7, "p_891->g_556.s7", print_hash_value);
    transparent_crc(p_891->g_556.s8, "p_891->g_556.s8", print_hash_value);
    transparent_crc(p_891->g_556.s9, "p_891->g_556.s9", print_hash_value);
    transparent_crc(p_891->g_556.sa, "p_891->g_556.sa", print_hash_value);
    transparent_crc(p_891->g_556.sb, "p_891->g_556.sb", print_hash_value);
    transparent_crc(p_891->g_556.sc, "p_891->g_556.sc", print_hash_value);
    transparent_crc(p_891->g_556.sd, "p_891->g_556.sd", print_hash_value);
    transparent_crc(p_891->g_556.se, "p_891->g_556.se", print_hash_value);
    transparent_crc(p_891->g_556.sf, "p_891->g_556.sf", print_hash_value);
    transparent_crc(p_891->g_587.x, "p_891->g_587.x", print_hash_value);
    transparent_crc(p_891->g_587.y, "p_891->g_587.y", print_hash_value);
    transparent_crc(p_891->g_609.f0, "p_891->g_609.f0", print_hash_value);
    transparent_crc(p_891->g_609.f1, "p_891->g_609.f1", print_hash_value);
    transparent_crc(p_891->g_609.f2, "p_891->g_609.f2", print_hash_value);
    transparent_crc(p_891->g_609.f3, "p_891->g_609.f3", print_hash_value);
    transparent_crc(p_891->g_609.f4, "p_891->g_609.f4", print_hash_value);
    transparent_crc(p_891->g_609.f5, "p_891->g_609.f5", print_hash_value);
    transparent_crc(p_891->g_609.f6, "p_891->g_609.f6", print_hash_value);
    transparent_crc(p_891->g_609.f7, "p_891->g_609.f7", print_hash_value);
    transparent_crc(p_891->g_609.f8, "p_891->g_609.f8", print_hash_value);
    transparent_crc(p_891->g_609.f9, "p_891->g_609.f9", print_hash_value);
    transparent_crc(p_891->g_610.f0, "p_891->g_610.f0", print_hash_value);
    transparent_crc(p_891->g_610.f1, "p_891->g_610.f1", print_hash_value);
    transparent_crc(p_891->g_610.f2, "p_891->g_610.f2", print_hash_value);
    transparent_crc(p_891->g_610.f3, "p_891->g_610.f3", print_hash_value);
    transparent_crc(p_891->g_610.f4, "p_891->g_610.f4", print_hash_value);
    transparent_crc(p_891->g_610.f5, "p_891->g_610.f5", print_hash_value);
    transparent_crc(p_891->g_610.f6, "p_891->g_610.f6", print_hash_value);
    transparent_crc(p_891->g_610.f7, "p_891->g_610.f7", print_hash_value);
    transparent_crc(p_891->g_610.f8, "p_891->g_610.f8", print_hash_value);
    transparent_crc(p_891->g_610.f9, "p_891->g_610.f9", print_hash_value);
    transparent_crc(p_891->g_637.f0, "p_891->g_637.f0", print_hash_value);
    transparent_crc(p_891->g_637.f1, "p_891->g_637.f1", print_hash_value);
    transparent_crc(p_891->g_637.f2, "p_891->g_637.f2", print_hash_value);
    transparent_crc(p_891->g_637.f3, "p_891->g_637.f3", print_hash_value);
    transparent_crc(p_891->g_637.f4, "p_891->g_637.f4", print_hash_value);
    transparent_crc(p_891->g_637.f5, "p_891->g_637.f5", print_hash_value);
    transparent_crc(p_891->g_637.f6, "p_891->g_637.f6", print_hash_value);
    transparent_crc(p_891->g_637.f7, "p_891->g_637.f7", print_hash_value);
    transparent_crc(p_891->g_637.f8, "p_891->g_637.f8", print_hash_value);
    transparent_crc(p_891->g_637.f9, "p_891->g_637.f9", print_hash_value);
    transparent_crc(p_891->g_650.f0, "p_891->g_650.f0", print_hash_value);
    transparent_crc(p_891->g_650.f1.f0, "p_891->g_650.f1.f0", print_hash_value);
    transparent_crc(p_891->g_650.f1.f1, "p_891->g_650.f1.f1", print_hash_value);
    transparent_crc(p_891->g_650.f1.f2, "p_891->g_650.f1.f2", print_hash_value);
    transparent_crc(p_891->g_650.f1.f3, "p_891->g_650.f1.f3", print_hash_value);
    transparent_crc(p_891->g_650.f1.f4, "p_891->g_650.f1.f4", print_hash_value);
    transparent_crc(p_891->g_650.f1.f5, "p_891->g_650.f1.f5", print_hash_value);
    transparent_crc(p_891->g_650.f1.f6, "p_891->g_650.f1.f6", print_hash_value);
    transparent_crc(p_891->g_650.f1.f7, "p_891->g_650.f1.f7", print_hash_value);
    transparent_crc(p_891->g_650.f1.f8, "p_891->g_650.f1.f8", print_hash_value);
    transparent_crc(p_891->g_650.f1.f9, "p_891->g_650.f1.f9", print_hash_value);
    transparent_crc(p_891->g_650.f2.f0, "p_891->g_650.f2.f0", print_hash_value);
    transparent_crc(p_891->g_650.f2.f1, "p_891->g_650.f2.f1", print_hash_value);
    transparent_crc(p_891->g_650.f2.f2, "p_891->g_650.f2.f2", print_hash_value);
    transparent_crc(p_891->g_650.f2.f3, "p_891->g_650.f2.f3", print_hash_value);
    transparent_crc(p_891->g_650.f2.f4, "p_891->g_650.f2.f4", print_hash_value);
    transparent_crc(p_891->g_650.f2.f5, "p_891->g_650.f2.f5", print_hash_value);
    transparent_crc(p_891->g_650.f2.f6, "p_891->g_650.f2.f6", print_hash_value);
    transparent_crc(p_891->g_650.f2.f7, "p_891->g_650.f2.f7", print_hash_value);
    transparent_crc(p_891->g_650.f2.f8, "p_891->g_650.f2.f8", print_hash_value);
    transparent_crc(p_891->g_650.f2.f9, "p_891->g_650.f2.f9", print_hash_value);
    transparent_crc(p_891->g_650.f3, "p_891->g_650.f3", print_hash_value);
    transparent_crc(p_891->g_650.f4, "p_891->g_650.f4", print_hash_value);
    transparent_crc(p_891->g_650.f5, "p_891->g_650.f5", print_hash_value);
    transparent_crc(p_891->g_665.f0, "p_891->g_665.f0", print_hash_value);
    transparent_crc(p_891->g_665.f1, "p_891->g_665.f1", print_hash_value);
    transparent_crc(p_891->g_665.f2, "p_891->g_665.f2", print_hash_value);
    transparent_crc(p_891->g_665.f3, "p_891->g_665.f3", print_hash_value);
    transparent_crc(p_891->g_665.f4, "p_891->g_665.f4", print_hash_value);
    transparent_crc(p_891->g_665.f5, "p_891->g_665.f5", print_hash_value);
    transparent_crc(p_891->g_665.f6, "p_891->g_665.f6", print_hash_value);
    transparent_crc(p_891->g_665.f7, "p_891->g_665.f7", print_hash_value);
    transparent_crc(p_891->g_665.f8, "p_891->g_665.f8", print_hash_value);
    transparent_crc(p_891->g_665.f9, "p_891->g_665.f9", print_hash_value);
    transparent_crc(p_891->g_666.f0, "p_891->g_666.f0", print_hash_value);
    transparent_crc(p_891->g_666.f1, "p_891->g_666.f1", print_hash_value);
    transparent_crc(p_891->g_666.f2, "p_891->g_666.f2", print_hash_value);
    transparent_crc(p_891->g_666.f3, "p_891->g_666.f3", print_hash_value);
    transparent_crc(p_891->g_666.f4, "p_891->g_666.f4", print_hash_value);
    transparent_crc(p_891->g_666.f5, "p_891->g_666.f5", print_hash_value);
    transparent_crc(p_891->g_666.f6, "p_891->g_666.f6", print_hash_value);
    transparent_crc(p_891->g_666.f7, "p_891->g_666.f7", print_hash_value);
    transparent_crc(p_891->g_666.f8, "p_891->g_666.f8", print_hash_value);
    transparent_crc(p_891->g_666.f9, "p_891->g_666.f9", print_hash_value);
    transparent_crc(p_891->g_680.s0, "p_891->g_680.s0", print_hash_value);
    transparent_crc(p_891->g_680.s1, "p_891->g_680.s1", print_hash_value);
    transparent_crc(p_891->g_680.s2, "p_891->g_680.s2", print_hash_value);
    transparent_crc(p_891->g_680.s3, "p_891->g_680.s3", print_hash_value);
    transparent_crc(p_891->g_680.s4, "p_891->g_680.s4", print_hash_value);
    transparent_crc(p_891->g_680.s5, "p_891->g_680.s5", print_hash_value);
    transparent_crc(p_891->g_680.s6, "p_891->g_680.s6", print_hash_value);
    transparent_crc(p_891->g_680.s7, "p_891->g_680.s7", print_hash_value);
    transparent_crc(p_891->g_705.x, "p_891->g_705.x", print_hash_value);
    transparent_crc(p_891->g_705.y, "p_891->g_705.y", print_hash_value);
    transparent_crc(p_891->g_705.z, "p_891->g_705.z", print_hash_value);
    transparent_crc(p_891->g_705.w, "p_891->g_705.w", print_hash_value);
    transparent_crc(p_891->g_721.x, "p_891->g_721.x", print_hash_value);
    transparent_crc(p_891->g_721.y, "p_891->g_721.y", print_hash_value);
    transparent_crc(p_891->g_721.z, "p_891->g_721.z", print_hash_value);
    transparent_crc(p_891->g_721.w, "p_891->g_721.w", print_hash_value);
    transparent_crc(p_891->g_733.x, "p_891->g_733.x", print_hash_value);
    transparent_crc(p_891->g_733.y, "p_891->g_733.y", print_hash_value);
    transparent_crc(p_891->g_734.x, "p_891->g_734.x", print_hash_value);
    transparent_crc(p_891->g_734.y, "p_891->g_734.y", print_hash_value);
    transparent_crc(p_891->g_734.z, "p_891->g_734.z", print_hash_value);
    transparent_crc(p_891->g_734.w, "p_891->g_734.w", print_hash_value);
    transparent_crc(p_891->g_763, "p_891->g_763", print_hash_value);
    transparent_crc(p_891->g_780, "p_891->g_780", print_hash_value);
    transparent_crc(p_891->g_791.f0, "p_891->g_791.f0", print_hash_value);
    transparent_crc(p_891->g_791.f1.f0, "p_891->g_791.f1.f0", print_hash_value);
    transparent_crc(p_891->g_791.f1.f1, "p_891->g_791.f1.f1", print_hash_value);
    transparent_crc(p_891->g_791.f1.f2, "p_891->g_791.f1.f2", print_hash_value);
    transparent_crc(p_891->g_791.f1.f3, "p_891->g_791.f1.f3", print_hash_value);
    transparent_crc(p_891->g_791.f1.f4, "p_891->g_791.f1.f4", print_hash_value);
    transparent_crc(p_891->g_791.f1.f5, "p_891->g_791.f1.f5", print_hash_value);
    transparent_crc(p_891->g_791.f1.f6, "p_891->g_791.f1.f6", print_hash_value);
    transparent_crc(p_891->g_791.f1.f7, "p_891->g_791.f1.f7", print_hash_value);
    transparent_crc(p_891->g_791.f1.f8, "p_891->g_791.f1.f8", print_hash_value);
    transparent_crc(p_891->g_791.f1.f9, "p_891->g_791.f1.f9", print_hash_value);
    transparent_crc(p_891->g_791.f2.f0, "p_891->g_791.f2.f0", print_hash_value);
    transparent_crc(p_891->g_791.f2.f1, "p_891->g_791.f2.f1", print_hash_value);
    transparent_crc(p_891->g_791.f2.f2, "p_891->g_791.f2.f2", print_hash_value);
    transparent_crc(p_891->g_791.f2.f3, "p_891->g_791.f2.f3", print_hash_value);
    transparent_crc(p_891->g_791.f2.f4, "p_891->g_791.f2.f4", print_hash_value);
    transparent_crc(p_891->g_791.f2.f5, "p_891->g_791.f2.f5", print_hash_value);
    transparent_crc(p_891->g_791.f2.f6, "p_891->g_791.f2.f6", print_hash_value);
    transparent_crc(p_891->g_791.f2.f7, "p_891->g_791.f2.f7", print_hash_value);
    transparent_crc(p_891->g_791.f2.f8, "p_891->g_791.f2.f8", print_hash_value);
    transparent_crc(p_891->g_791.f2.f9, "p_891->g_791.f2.f9", print_hash_value);
    transparent_crc(p_891->g_791.f3, "p_891->g_791.f3", print_hash_value);
    transparent_crc(p_891->g_791.f4, "p_891->g_791.f4", print_hash_value);
    transparent_crc(p_891->g_791.f5, "p_891->g_791.f5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_891->g_800[i][j][k], "p_891->g_800[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_891->g_835.s0, "p_891->g_835.s0", print_hash_value);
    transparent_crc(p_891->g_835.s1, "p_891->g_835.s1", print_hash_value);
    transparent_crc(p_891->g_835.s2, "p_891->g_835.s2", print_hash_value);
    transparent_crc(p_891->g_835.s3, "p_891->g_835.s3", print_hash_value);
    transparent_crc(p_891->g_835.s4, "p_891->g_835.s4", print_hash_value);
    transparent_crc(p_891->g_835.s5, "p_891->g_835.s5", print_hash_value);
    transparent_crc(p_891->g_835.s6, "p_891->g_835.s6", print_hash_value);
    transparent_crc(p_891->g_835.s7, "p_891->g_835.s7", print_hash_value);
    transparent_crc(p_891->g_853.s0, "p_891->g_853.s0", print_hash_value);
    transparent_crc(p_891->g_853.s1, "p_891->g_853.s1", print_hash_value);
    transparent_crc(p_891->g_853.s2, "p_891->g_853.s2", print_hash_value);
    transparent_crc(p_891->g_853.s3, "p_891->g_853.s3", print_hash_value);
    transparent_crc(p_891->g_853.s4, "p_891->g_853.s4", print_hash_value);
    transparent_crc(p_891->g_853.s5, "p_891->g_853.s5", print_hash_value);
    transparent_crc(p_891->g_853.s6, "p_891->g_853.s6", print_hash_value);
    transparent_crc(p_891->g_853.s7, "p_891->g_853.s7", print_hash_value);
    transparent_crc(p_891->g_853.s8, "p_891->g_853.s8", print_hash_value);
    transparent_crc(p_891->g_853.s9, "p_891->g_853.s9", print_hash_value);
    transparent_crc(p_891->g_853.sa, "p_891->g_853.sa", print_hash_value);
    transparent_crc(p_891->g_853.sb, "p_891->g_853.sb", print_hash_value);
    transparent_crc(p_891->g_853.sc, "p_891->g_853.sc", print_hash_value);
    transparent_crc(p_891->g_853.sd, "p_891->g_853.sd", print_hash_value);
    transparent_crc(p_891->g_853.se, "p_891->g_853.se", print_hash_value);
    transparent_crc(p_891->g_853.sf, "p_891->g_853.sf", print_hash_value);
    transparent_crc(p_891->v_collective, "p_891->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 82; i++)
            transparent_crc(p_891->g_special_values[i + 82 * get_linear_group_id()], "p_891->g_special_values[i + 82 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 82; i++)
            transparent_crc(p_891->l_special_values[i], "p_891->l_special_values[i]", print_hash_value);
    transparent_crc(p_891->l_comm_values[get_linear_local_id()], "p_891->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_891->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()], "p_891->g_comm_values[get_linear_group_id() * 14 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
