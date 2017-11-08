// --atomics 90 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,53,1 -l 15,1,1
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

__constant uint32_t permutations[10][15] = {
{2,11,9,7,1,12,13,8,5,4,0,6,10,3,14}, // permutation 0
{14,5,0,6,7,13,2,9,10,8,1,4,3,12,11}, // permutation 1
{6,0,12,13,11,7,3,8,5,10,1,14,4,9,2}, // permutation 2
{9,10,7,1,5,4,3,2,13,12,11,14,6,8,0}, // permutation 3
{7,8,14,1,13,4,0,3,12,11,5,6,9,10,2}, // permutation 4
{5,10,6,2,9,12,1,14,3,11,4,7,13,8,0}, // permutation 5
{14,7,2,10,1,8,9,12,3,4,13,6,5,0,11}, // permutation 6
{8,6,5,11,0,2,9,4,14,3,1,7,13,12,10}, // permutation 7
{7,6,8,0,2,13,3,9,10,12,1,5,4,14,11}, // permutation 8
{8,11,13,1,2,4,3,9,12,7,5,0,6,14,10} // permutation 9
};

// Seed: 702198960

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   volatile uint64_t  f1;
   volatile uint32_t  f2;
};

struct S1 {
   int64_t  f0;
   volatile uint64_t  f1;
   volatile uint32_t  f2;
   int64_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

struct S2 {
   int32_t  f0;
   volatile int32_t  f1;
   uint32_t  f2;
   int64_t  f3;
};

struct S3 {
   volatile uint16_t  f0;
   struct S2  f1;
   struct S2  f2;
   int32_t  f3;
   uint64_t  f4;
};

struct S4 {
   uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   volatile struct S1  f3;
   uint8_t  f4;
   volatile uint32_t  f5;
   int64_t  f6;
   int32_t  f7;
};

struct S5 {
   int64_t  f0;
   volatile uint64_t  f1;
   struct S3  f2;
};

union U6 {
   struct S1  f0;
   int8_t  f1;
   volatile int8_t * f2;
   uint16_t  f3;
   uint32_t  f4;
};

struct S7 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile int32_t g_6;
    volatile int32_t g_7;
    volatile int32_t g_8;
    volatile int32_t g_9[8][2][3];
    volatile int32_t g_10;
    volatile int32_t g_11;
    volatile int32_t g_12;
    int32_t g_13[2][5][8];
    VECTOR(int32_t, 16) g_17;
    VECTOR(uint8_t, 8) g_63;
    volatile VECTOR(uint8_t, 2) g_64;
    int32_t g_67[6][5];
    int8_t g_69;
    volatile VECTOR(int64_t, 16) g_94;
    uint16_t g_95[1];
    int32_t * volatile g_103;
    int8_t *g_119[3];
    VECTOR(uint64_t, 4) g_159;
    struct S3 g_172;
    struct S3 *g_176;
    struct S3 g_178;
    struct S3 g_180;
    struct S3 *g_179;
    int32_t *g_186;
    int32_t ** volatile g_185;
    struct S1 g_187;
    struct S1 * volatile g_188;
    int32_t ** volatile g_223;
    struct S4 g_225[7];
    union U6 g_228;
    struct S1 g_229;
    struct S4 g_234;
    struct S4 g_235;
    struct S4 *g_233[4];
    struct S0 g_243;
    int64_t g_245;
    volatile struct S0 ** volatile g_249;
    volatile struct S0 ** volatile * volatile g_250;
    volatile struct S0 g_261;
    struct S2 g_290[9];
    VECTOR(int32_t, 2) g_292;
    int8_t **g_323;
    int8_t *** volatile g_322;
    volatile VECTOR(uint64_t, 16) g_343;
    volatile VECTOR(uint64_t, 8) g_344;
    volatile VECTOR(uint64_t, 16) g_345;
    volatile int16_t *g_351;
    int16_t *** volatile g_356;
    int32_t * volatile g_358;
    volatile struct S5 g_384;
    struct S0 g_385;
    int32_t * volatile g_389;
    int32_t * volatile g_390;
    int32_t * volatile g_391[2][6][4];
    int32_t * volatile g_392[2][6];
    int32_t * volatile g_393;
    int32_t * volatile g_394;
    int32_t * volatile g_396;
    int32_t * volatile g_400;
    int16_t *g_406;
    int32_t ** volatile g_409;
    volatile struct S5 g_411;
    int16_t **g_459;
    int16_t ***g_458;
    volatile struct S0 g_484[3][2];
    struct S2 g_489;
    volatile uint16_t g_510;
    volatile struct S2 g_533;
    volatile struct S2 * volatile g_534;
    struct S5 g_537;
    VECTOR(uint32_t, 2) g_552;
    VECTOR(uint64_t, 8) g_553;
    VECTOR(uint64_t, 4) g_556;
    VECTOR(uint64_t, 4) g_558;
    VECTOR(uint64_t, 8) g_559;
    union U6 *g_562;
    int32_t ** volatile g_582[6];
    int8_t g_585;
    int8_t *g_584;
    volatile struct S0 g_587;
    volatile struct S0 g_589;
    uint32_t * volatile g_628;
    uint32_t * volatile * volatile g_627;
    volatile struct S2 g_640;
    VECTOR(uint16_t, 4) g_651;
    struct S5 g_661;
    struct S1 * volatile g_668;
    struct S1 * volatile g_669;
    struct S1 g_704;
    struct S1 * volatile g_705;
    VECTOR(uint16_t, 2) g_762;
    struct S0 *g_766;
    struct S0 ** volatile g_765[5][10][3];
    int32_t * volatile g_770[9][4];
    int32_t * volatile g_772;
    VECTOR(int32_t, 2) g_773;
    volatile VECTOR(uint64_t, 16) g_799;
    struct S0 g_822;
    union U6 g_842;
    struct S5 * volatile g_844;
    struct S5 * volatile *g_843[10];
    volatile struct S0 g_845;
    int32_t g_867[5][10][5];
    union U6 g_872;
    VECTOR(int16_t, 2) g_875;
    VECTOR(int16_t, 2) g_886;
    VECTOR(int16_t, 16) g_891;
    VECTOR(uint16_t, 16) g_893;
    volatile struct S5 g_929[6];
    volatile struct S5 *g_928[5][10][3];
    uint32_t **g_947;
    VECTOR(int32_t, 4) g_980;
    VECTOR(uint64_t, 16) g_994;
    VECTOR(uint64_t, 16) g_995;
    uint32_t g_998;
    struct S1 * volatile *g_1013;
    struct S1 * volatile ** volatile g_1012;
    volatile struct S0 * volatile g_1025;
    volatile struct S0 * volatile * volatile g_1024;
    volatile struct S0 * volatile * volatile *g_1023;
    struct S4 g_1033;
    volatile VECTOR(int32_t, 16) g_1034;
    volatile struct S3 g_1037;
    int32_t ** volatile g_1038[10];
    VECTOR(int16_t, 4) g_1049;
    VECTOR(uint16_t, 4) g_1056;
    struct S4 g_1057;
    volatile struct S4 g_1062;
    int32_t ** volatile g_1064[2];
    int32_t ** volatile g_1065;
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
uint64_t  func_1(struct S7 * p_1067);
struct S2  func_39(uint64_t  p_40, int64_t  p_41, struct S7 * p_1067);
int32_t  func_42(int64_t  p_43, struct S7 * p_1067);
int16_t  func_46(int32_t  p_47, struct S7 * p_1067);
int32_t * func_49(uint16_t  p_50, int8_t * p_51, int8_t * p_52, int8_t * p_53, int8_t * p_54, struct S7 * p_1067);
uint16_t  func_55(uint32_t  p_56, uint32_t  p_57, int8_t  p_58, int8_t * p_59, int32_t  p_60, struct S7 * p_1067);
int32_t * func_74(int8_t * p_75, uint64_t  p_76, struct S7 * p_1067);
int8_t * func_77(int8_t * p_78, int8_t  p_79, uint32_t  p_80, int8_t  p_81, int32_t * p_82, struct S7 * p_1067);
int8_t * func_83(int8_t * p_84, uint64_t  p_85, uint32_t  p_86, int64_t  p_87, int8_t * p_88, struct S7 * p_1067);
uint64_t  func_90(int64_t  p_91, int64_t  p_92, uint16_t  p_93, struct S7 * p_1067);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1067->g_3 p_1067->g_13 p_1067->g_400 p_1067->g_67 p_1067->g_323 p_1067->g_119 p_1067->g_69 p_1067->g_552 p_1067->g_584 p_1067->g_585 p_1067->g_396 p_1067->g_186 p_1067->g_537.f2.f1.f0 p_1067->g_180.f1.f2 p_1067->g_406 p_1067->g_385.f0 p_1067->g_290.f2 p_1067->g_867 p_1067->g_225.f4 p_1067->g_537.f2.f2.f2 p_1067->g_178.f2.f3 p_1067->g_872 p_1067->g_875 p_1067->g_640.f0 p_1067->g_459 p_1067->g_180.f2.f3 p_1067->g_358 p_1067->g_1056 p_1067->g_842.f3 p_1067->g_1057 p_1067->g_1062 p_1067->g_766 p_1067->g_243 p_1067->g_385 p_1067->g_225.f2
 * writes: p_1067->g_3 p_1067->g_13 p_1067->g_67 p_1067->g_95 p_1067->g_842.f3 p_1067->g_63 p_1067->g_385.f0 p_1067->g_867 p_1067->g_172.f2.f3 p_1067->g_872.f3 p_1067->g_235.f1 p_1067->g_186
 */
uint64_t  func_1(struct S7 * p_1067)
{ /* block id: 4 */
    uint64_t l_32 = 18446744073709551615UL;
    VECTOR(uint8_t, 8) l_62 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xB0L), 0xB0L), 0xB0L, 1UL, 0xB0L);
    int32_t l_763 = 0x5EB30C2FL;
    int8_t *l_824 = (void*)0;
    uint16_t *l_851 = &p_1067->g_95[0];
    uint16_t *l_866 = &p_1067->g_842.f3;
    union U6 **l_869 = (void*)0;
    union U6 ***l_868 = &l_869;
    uint8_t *l_880[10][2] = {{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4},{&p_1067->g_225[3].f4,&p_1067->g_234.f4}};
    VECTOR(int16_t, 4) l_885 = (VECTOR(int16_t, 4))(0x14ACL, (VECTOR(int16_t, 2))(0x14ACL, 8L), 8L);
    uint32_t l_887 = 4294967288UL;
    VECTOR(int16_t, 16) l_892 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int16_t, 2))(1L, 5L), (VECTOR(int16_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
    int32_t l_934 = 4L;
    VECTOR(int32_t, 4) l_1036 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
    int32_t *l_1040 = (void*)0;
    VECTOR(int16_t, 2) l_1050 = (VECTOR(int16_t, 2))((-1L), (-4L));
    struct S0 **l_1052 = &p_1067->g_766;
    struct S0 ***l_1051 = &l_1052;
    uint32_t l_1055 = 0x54BE34F1L;
    int8_t *l_1063 = &p_1067->g_585;
    int i, j;
    for (p_1067->g_3 = 0; (p_1067->g_3 == (-29)); p_1067->g_3 = safe_sub_func_int64_t_s_s(p_1067->g_3, 3))
    { /* block id: 7 */
        int32_t l_31 = (-3L);
        int32_t *l_590 = (void*)0;
        int16_t **l_791 = &p_1067->g_406;
        int32_t *l_846[9];
        int i;
        for (i = 0; i < 9; i++)
            l_846[i] = (void*)0;
        for (p_1067->g_13[1][4][7] = 0; (p_1067->g_13[1][4][7] < 3); p_1067->g_13[1][4][7] = safe_add_func_uint32_t_u_u(p_1067->g_13[1][4][7], 4))
        { /* block id: 10 */
            int32_t *l_16 = (void*)0;
            int32_t *l_18 = (void*)0;
            int32_t *l_19 = (void*)0;
            int32_t *l_20 = (void*)0;
            int32_t *l_21 = (void*)0;
            int32_t *l_22 = (void*)0;
            int32_t *l_23 = (void*)0;
            int32_t *l_24 = (void*)0;
            int32_t l_25[1][3][2] = {{{0L,0x5CDCBD5FL},{0L,0x5CDCBD5FL},{0L,0x5CDCBD5FL}}};
            int32_t *l_26 = (void*)0;
            int32_t *l_27 = &l_25[0][2][1];
            int32_t *l_28 = &l_25[0][2][1];
            int32_t *l_29 = &l_25[0][2][1];
            int32_t *l_30[4][6] = {{&p_1067->g_13[0][1][2],&p_1067->g_3,(void*)0,&p_1067->g_3,&p_1067->g_13[0][1][2],&p_1067->g_13[0][1][2]},{&p_1067->g_13[0][1][2],&p_1067->g_3,(void*)0,&p_1067->g_3,&p_1067->g_13[0][1][2],&p_1067->g_13[0][1][2]},{&p_1067->g_13[0][1][2],&p_1067->g_3,(void*)0,&p_1067->g_3,&p_1067->g_13[0][1][2],&p_1067->g_13[0][1][2]},{&p_1067->g_13[0][1][2],&p_1067->g_3,(void*)0,&p_1067->g_3,&p_1067->g_13[0][1][2],&p_1067->g_13[0][1][2]}};
            uint16_t l_592 = 0xC273L;
            struct S0 *l_788[5];
            uint32_t *l_804 = &p_1067->g_187.f4;
            uint32_t *l_805 = &p_1067->g_704.f4;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_788[i] = &p_1067->g_385;
            --l_32;
            for (l_31 = 25; (l_31 == 27); l_31++)
            { /* block id: 14 */
                uint16_t l_48 = 8UL;
                VECTOR(uint8_t, 8) l_61 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x59L), 0x59L), 0x59L, 248UL, 0x59L);
                int8_t *l_68 = &p_1067->g_69;
                int64_t *l_591 = &p_1067->g_187.f3;
                uint64_t *l_593 = &p_1067->g_235.f0;
                uint16_t *l_759 = (void*)0;
                uint16_t *l_760 = &l_592;
                uint16_t *l_761 = (void*)0;
                struct S0 *l_787 = &p_1067->g_243;
                int16_t **l_792 = &p_1067->g_406;
                VECTOR(int32_t, 8) l_813 = (VECTOR(int32_t, 8))(0x1D8D501AL, (VECTOR(int32_t, 4))(0x1D8D501AL, (VECTOR(int32_t, 2))(0x1D8D501AL, 0x2E0B0D90L), 0x2E0B0D90L), 0x2E0B0D90L, 0x1D8D501AL, 0x2E0B0D90L);
                int i;
                (1 + 1);
            }
        }
        l_763 &= (*p_1067->g_400);
        (*p_1067->g_396) = (safe_mul_func_int8_t_s_s(((**p_1067->g_323) ^ p_1067->g_552.x), (*p_1067->g_584)));
    }
    (*p_1067->g_186) = (((safe_sub_func_int64_t_s_s((((*l_851) = l_62.s0) != ((((*p_1067->g_400) != ((safe_sub_func_int8_t_s_s((!((+0x57FDD20DL) || (0xA63ECA1DL <= l_62.s5))), ((safe_rshift_func_int16_t_s_u(1L, 13)) , (safe_lshift_func_uint16_t_u_s(((*l_866) = (safe_sub_func_int16_t_s_s((((*p_1067->g_186) || (safe_lshift_func_uint16_t_u_u(p_1067->g_537.f2.f1.f0, 9))) < (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_1067->g_180.f1.f2, (*p_1067->g_584))), 0x68D9715EL))), (*p_1067->g_406)))), 5))))) > p_1067->g_290[1].f2)) | p_1067->g_867[1][0][1]) & 0x44L)), p_1067->g_225[3].f4)) , p_1067->g_537.f2.f2.f2) > p_1067->g_178.f2.f3);
    if ((l_868 == (((0UL || ((safe_rshift_func_int8_t_s_u(0x6FL, 5)) >= (l_763 |= ((p_1067->g_872 , (safe_add_func_uint16_t_u_u((l_851 == l_866), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1067->g_875.xxxyxxyyxxyxyxyx)).lo)).s6))) , (+0x466F98562132B7EBL))))) || (safe_rshift_func_uint16_t_u_s((l_32 & (p_1067->g_63.s6 = ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((p_1067->g_640.f0 != 0x0467E6C1C1652D28L) < 0x45D8L), ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 2))(0x22L)), l_763, (-5L), 8L)).s6, GROUP_DIVERGE(0, 1))) || l_763))), (**p_1067->g_459)))) , (void*)0)))
    { /* block id: 444 */
        (*p_1067->g_186) ^= l_32;
    }
    else
    { /* block id: 446 */
        int8_t l_888 = 0x62L;
        VECTOR(int16_t, 8) l_889 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 8L), 8L), 8L, (-8L), 8L);
        struct S5 *l_905 = &p_1067->g_537;
        VECTOR(int8_t, 16) l_987 = (VECTOR(int8_t, 16))(0x33L, (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 1L), 1L), 1L, 0x33L, 1L, (VECTOR(int8_t, 2))(0x33L, 1L), (VECTOR(int8_t, 2))(0x33L, 1L), 0x33L, 1L, 0x33L, 1L);
        int32_t l_996 = 0x268C4149L;
        uint64_t l_1007 = 18446744073709551610UL;
        struct S0 **l_1027 = &p_1067->g_766;
        struct S0 ***l_1026 = &l_1027;
        int32_t l_1030 = 0x34531419L;
        VECTOR(int16_t, 16) l_1047 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x35AFL), 0x35AFL), 0x35AFL, 1L, 0x35AFL, (VECTOR(int16_t, 2))(1L, 0x35AFL), (VECTOR(int16_t, 2))(1L, 0x35AFL), 1L, 0x35AFL, 1L, 0x35AFL);
        VECTOR(int16_t, 8) l_1048 = (VECTOR(int16_t, 8))(0x628EL, (VECTOR(int16_t, 4))(0x628EL, (VECTOR(int16_t, 2))(0x628EL, 0x1C1DL), 0x1C1DL), 0x1C1DL, 0x628EL, 0x1C1DL);
        int32_t *l_1058[9][2] = {{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030},{(void*)0,&l_1030}};
        uint32_t l_1059 = 0x7D8C27B1L;
        int32_t **l_1066 = &p_1067->g_186;
        int i, j;
        for (p_1067->g_385.f0 = (-27); (p_1067->g_385.f0 != 15); p_1067->g_385.f0 = safe_add_func_uint64_t_u_u(p_1067->g_385.f0, 7))
        { /* block id: 449 */
            VECTOR(int16_t, 2) l_890 = (VECTOR(int16_t, 2))((-9L), (-1L));
            int16_t *l_896 = (void*)0;
            int16_t *l_897 = &p_1067->g_243.f0;
            int32_t *l_898 = (void*)0;
            int32_t *l_899 = (void*)0;
            int32_t *l_900 = &p_1067->g_867[0][5][2];
            int64_t l_932 = 0x6C3ED01CD2DEF604L;
            int8_t l_954 = 0x66L;
            VECTOR(uint64_t, 16) l_964 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL);
            int32_t l_1005 = (-10L);
            int32_t l_1006[10] = {0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L,0x31E86AF0L};
            int8_t *l_1044[9][5][3] = {{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}},{{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0},{&l_954,(void*)0,(void*)0}}};
            int i, j, k;
            (*l_900) ^= ((p_1067->g_180.f2.f3 != (safe_mul_func_int16_t_s_s((&p_1067->g_458 != &p_1067->g_356), (((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(l_885.xyzyxxyz)).odd, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(p_1067->g_886.yxyxyxxy)).s21, ((VECTOR(int16_t, 8))((func_39(l_887, l_888, p_1067) , ((*l_897) |= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_889.s54)), ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(3L, 1L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_890.yxyx)), ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(p_1067->g_891.s0e)).xyxyyyxyyxyxxyxy))).sa802, ((VECTOR(int16_t, 4))(l_892.s4031))))).hi)), ((0x3727132AL >= (((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(p_1067->g_893.s3b)).yxyxyyxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))((~(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))((((safe_lshift_func_uint16_t_u_s((l_890.y <= l_885.w), (**p_1067->g_459))) | 0L) & GROUP_DIVERGE(1, 1)), 0x3ABADE06L, (-6L), l_32, (*p_1067->g_358), 0x51807E4AL, 0x21DF96A2L, 0x6BA0E78AL)), ((VECTOR(int32_t, 8))(0L))))))).s4 >= 4294967294UL)), 65535UL, 0x5DD4L, 0UL)), ((VECTOR(uint16_t, 4))(8UL)), ((VECTOR(uint16_t, 4))(5UL))))).lo)), 0x15E0L, p_1067->g_178.f2.f3, 0x8714L, 0xC2B0L, 0xE0F7L, 0x0116L)))), ((VECTOR(uint16_t, 8))(5UL))))).s3 >= (*p_1067->g_406))) == p_1067->g_385.f0), 1L, ((VECTOR(int16_t, 4))(1L)))).s66))), ((VECTOR(int16_t, 4))(8L)))).s5)), ((VECTOR(int16_t, 4))(0x4803L)), 0L, 1L, (-6L))).s30))).yxyx, ((VECTOR(int16_t, 4))(1L))))), ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))((-7L)))))).lo))).lo == l_890.y)))) | (-2L));
            for (p_1067->g_172.f2.f3 = 0; (p_1067->g_172.f2.f3 > (-13)); p_1067->g_172.f2.f3 = safe_sub_func_int32_t_s_s(p_1067->g_172.f2.f3, 3))
            { /* block id: 454 */
                struct S5 **l_925 = &l_905;
                int32_t l_927 = (-1L);
                VECTOR(uint8_t, 8) l_975 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x15L), 0x15L), 0x15L, 247UL, 0x15L);
                struct S4 *l_1032 = &p_1067->g_1033;
                int32_t **l_1039[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int8_t *l_1041 = &l_954;
                int32_t *l_1042 = &p_1067->g_3;
                int8_t **l_1043[1][5] = {{&l_824,&l_824,&l_824,&l_824,&l_824}};
                int i, j;
                (1 + 1);
            }
        }
        (*p_1067->g_186) = ((l_996 && ((p_1067->g_872.f3 = ((l_1051 != &p_1067->g_765[2][7][2]) && 0x7A29D71EL)) < (((safe_rshift_func_uint16_t_u_u(1UL, (((l_1055 & (*p_1067->g_358)) < (l_1030 = ((*l_866) |= ((VECTOR(uint16_t, 16))(p_1067->g_1056.xxzzywywwxwzzzzw)).s9))) ^ (**p_1067->g_323)))) , p_1067->g_1057) , 0x46ABL))) >= 0x4CE0L);
        ++l_1059;
        (*l_1066) = ((p_1067->g_1062 , (**l_1027)) , func_74(l_1063, p_1067->g_1057.f3.f5, p_1067));
    }
    return l_763;
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_772 p_1067->g_67 p_1067->g_773 p_1067->g_534 p_1067->g_411.f2.f2
 * writes: p_1067->g_766 p_1067->g_67
 */
struct S2  func_39(uint64_t  p_40, int64_t  p_41, struct S7 * p_1067)
{ /* block id: 390 */
    struct S0 *l_764 = &p_1067->g_243;
    struct S0 **l_767 = &p_1067->g_766;
    struct S3 *l_768 = &p_1067->g_180;
    int32_t *l_769 = (void*)0;
    int32_t *l_771 = (void*)0;
    int32_t *l_774 = &p_1067->g_67[1][0];
    int32_t *l_775[3][6] = {{(void*)0,&p_1067->g_3,(void*)0,(void*)0,&p_1067->g_3,(void*)0},{(void*)0,&p_1067->g_3,(void*)0,(void*)0,&p_1067->g_3,(void*)0},{(void*)0,&p_1067->g_3,(void*)0,(void*)0,&p_1067->g_3,(void*)0}};
    uint32_t l_776 = 0x4994D503L;
    int i, j;
    (*l_767) = l_764;
    (*p_1067->g_772) &= ((void*)0 == l_768);
    l_776 = ((*l_774) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1067->g_773.yxyy)).odd)).even);
    return (*p_1067->g_534);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_42(int64_t  p_43, struct S7 * p_1067)
{ /* block id: 386 */
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_180.f3 p_1067->g_67 p_1067->g_188 p_1067->g_187 p_1067->g_534 p_1067->g_411.f2.f2 p_1067->g_627 p_1067->g_640 p_1067->g_584 p_1067->g_234.f0 p_1067->g_537.f2.f2.f2 p_1067->g_172.f3 p_1067->g_172.f2.f2 p_1067->g_651 p_1067->g_585 p_1067->g_661 p_1067->g_669 p_1067->g_225.f2 p_1067->g_178.f3 p_1067->g_704 p_1067->g_705 p_1067->g_250 p_1067->g_249 p_1067->g_180.f1.f2 p_1067->g_537.f2.f1.f3 p_1067->g_559 p_1067->g_63 p_1067->g_489.f3 p_1067->g_176 p_1067->g_172 p_1067->g_225.f3.f1
 * writes: p_1067->g_180.f3 p_1067->g_67 p_1067->g_627 p_1067->g_385.f0 p_1067->g_585 p_1067->g_234.f0 p_1067->g_229 p_1067->g_235.f1 p_1067->g_186 p_1067->g_178.f3 p_1067->g_180.f1.f2 p_1067->g_489.f3
 */
int16_t  func_46(int32_t  p_47, struct S7 * p_1067)
{ /* block id: 312 */
    int32_t *l_594 = (void*)0;
    int32_t *l_595 = &p_1067->g_67[1][2];
    int32_t *l_596 = &p_1067->g_67[4][0];
    int32_t *l_597 = &p_1067->g_67[5][4];
    int32_t *l_598 = (void*)0;
    int32_t *l_599 = (void*)0;
    int32_t *l_600[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_601[3][5] = {{0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L},{0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L},{0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L,0x8CABDBE4L}};
    union U6 **l_606 = (void*)0;
    VECTOR(uint64_t, 16) l_608 = (VECTOR(uint64_t, 16))(0x9CD09C04B77E6E94L, (VECTOR(uint64_t, 4))(0x9CD09C04B77E6E94L, (VECTOR(uint64_t, 2))(0x9CD09C04B77E6E94L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x9CD09C04B77E6E94L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x9CD09C04B77E6E94L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x9CD09C04B77E6E94L, 18446744073709551615UL), 0x9CD09C04B77E6E94L, 18446744073709551615UL, 0x9CD09C04B77E6E94L, 18446744073709551615UL);
    int16_t *l_625 = &p_1067->g_385.f0;
    VECTOR(int8_t, 2) l_660 = (VECTOR(int8_t, 2))(0x03L, (-8L));
    int8_t *l_670 = &p_1067->g_585;
    uint8_t l_749 = 6UL;
    uint8_t *l_756 = (void*)0;
    uint8_t *l_757[1];
    VECTOR(uint8_t, 4) l_758 = (VECTOR(uint8_t, 4))(0x4FL, (VECTOR(uint8_t, 2))(0x4FL, 0xF2L), 0xF2L);
    int i, j;
    for (i = 0; i < 1; i++)
        l_757[i] = (void*)0;
    l_601[2][0]++;
    for (p_1067->g_180.f3 = 0; (p_1067->g_180.f3 == (-4)); p_1067->g_180.f3 = safe_sub_func_int32_t_s_s(p_1067->g_180.f3, 2))
    { /* block id: 316 */
        union U6 ***l_607 = &l_606;
        (*l_607) = l_606;
        (*l_595) = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_608.s4721e925)).s77)).odd > p_47);
    }
    if (((*l_595) |= 0L))
    { /* block id: 321 */
        VECTOR(int16_t, 4) l_620 = (VECTOR(int16_t, 4))(0x6BB0L, (VECTOR(int16_t, 2))(0x6BB0L, 0x6067L), 0x6067L);
        int i;
        if ((atomic_inc(&p_1067->g_atomic_input[90 * get_linear_group_id() + 80]) == 4))
        { /* block id: 323 */
            int32_t l_610 = 0x10420AD4L;
            int32_t *l_609 = &l_610;
            int32_t *l_611 = &l_610;
            struct S4 l_613 = {0xF99A0EEDE3B1930FL,0x39ADB5B7L,4294967293UL,{0x16E68CC849299BF1L,18446744073709551615UL,0x096A1AE7L,0x5B5948636BEA7B3AL,0x2D39D91AL,0L},1UL,0UL,0x2B22CB9929CECBE1L,-6L};/* VOLATILE GLOBAL l_613 */
            struct S4 *l_612[3][5][4] = {{{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613}},{{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613},{&l_613,&l_613,&l_613,&l_613}}};
            struct S0 l_615 = {-3L,0x84EA60ED189104BCL,0xF513E2BDL};/* VOLATILE GLOBAL l_615 */
            struct S0 *l_614 = &l_615;
            struct S0 *l_616 = &l_615;
            uint16_t l_617[10] = {0x84CCL,0x952CL,0x84CCL,0x84CCL,0x952CL,0x84CCL,0x84CCL,0x952CL,0x84CCL,0x84CCL};
            int i, j, k;
            l_611 = l_609;
            l_612[1][1][1] = (void*)0;
            l_616 = l_614;
            l_617[2]++;
            unsigned int result = 0;
            result += l_610;
            result += l_613.f0;
            result += l_613.f1;
            result += l_613.f2;
            result += l_613.f3.f0;
            result += l_613.f3.f1;
            result += l_613.f3.f2;
            result += l_613.f3.f3;
            result += l_613.f3.f4;
            result += l_613.f3.f5;
            result += l_613.f4;
            result += l_613.f5;
            result += l_613.f6;
            result += l_613.f7;
            result += l_615.f0;
            result += l_615.f1;
            result += l_615.f2;
            int l_617_i0;
            for (l_617_i0 = 0; l_617_i0 < 10; l_617_i0++) {
                result += l_617[l_617_i0];
            }
            atomic_add(&p_1067->g_special_values[90 * get_linear_group_id() + 80], result);
        }
        else
        { /* block id: 328 */
            (1 + 1);
        }
        if (((GROUP_DIVERGE(2, 1) <= (2L && (0x66L || FAKE_DIVERGE(p_1067->local_2_offset, get_local_id(2), 10)))) || ((VECTOR(int16_t, 16))(l_620.zwzxwxxwxzzyyzwx)).s7))
        { /* block id: 331 */
            struct S5 *l_622 = &p_1067->g_537;
            struct S5 **l_621 = &l_622;
            struct S5 *l_623 = &p_1067->g_537;
            l_623 = ((*l_621) = &p_1067->g_537);
        }
        else
        { /* block id: 334 */
            (*l_596) = p_47;
        }
    }
    else
    { /* block id: 337 */
        int16_t *l_624 = &p_1067->g_385.f0;
        int32_t l_626 = 0x0847A873L;
        VECTOR(uint32_t, 4) l_647 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL);
        int32_t l_686 = 0L;
        int32_t l_687 = 0L;
        int32_t l_690 = (-3L);
        int32_t l_695 = 0x5D43B332L;
        int32_t l_698[3];
        struct S0 *l_709 = &p_1067->g_243;
        struct S0 **l_708 = &l_709;
        int64_t l_712[6] = {0x5CDAFF204B54051BL,0x2712B217DC08996DL,0x5CDAFF204B54051BL,0x5CDAFF204B54051BL,0x2712B217DC08996DL,0x5CDAFF204B54051BL};
        int8_t ***l_728 = &p_1067->g_323;
        union U6 *l_752 = &p_1067->g_228;
        int i;
        for (i = 0; i < 3; i++)
            l_698[i] = 5L;
        if ((l_624 != ((*p_1067->g_188) , l_625)))
        { /* block id: 338 */
            uint32_t l_654 = 6UL;
            struct S5 **l_666 = (void*)0;
            int32_t l_679 = (-10L);
            int32_t l_682[6][10][4] = {{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}},{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}},{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}},{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}},{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}},{{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)},{(-10L),(-3L),(-9L),(-7L)}}};
            uint16_t l_701 = 4UL;
            int i, j, k;
            if (l_626)
            { /* block id: 339 */
                uint32_t * volatile * volatile *l_629 = &p_1067->g_627;
                int32_t l_645 = 0x169CF020L;
                uint64_t *l_646 = &p_1067->g_234.f0;
                uint8_t l_648 = 0x30L;
                int32_t l_688 = 0x5FFF261FL;
                int32_t l_689 = 0x7C8668C4L;
                int32_t l_691 = 0x1CD909BEL;
                int32_t l_692 = 0L;
                int32_t l_694 = 0L;
                int32_t l_696 = 8L;
                int32_t l_699[5][1][8] = {{{2L,2L,0L,2L,0x31D58355L,(-1L),0x0E97EAA1L,0x5BAF0570L}},{{2L,2L,0L,2L,0x31D58355L,(-1L),0x0E97EAA1L,0x5BAF0570L}},{{2L,2L,0L,2L,0x31D58355L,(-1L),0x0E97EAA1L,0x5BAF0570L}},{{2L,2L,0L,2L,0x31D58355L,(-1L),0x0E97EAA1L,0x5BAF0570L}},{{2L,2L,0L,2L,0x31D58355L,(-1L),0x0E97EAA1L,0x5BAF0570L}}};
                uint32_t *l_725 = &p_1067->g_180.f1.f2;
                int64_t *l_747[5][10][5] = {{{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0}},{{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0}},{{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0}},{{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0}},{{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0},{&l_712[0],&p_1067->g_180.f1.f3,&p_1067->g_290[1].f3,&l_712[0],(void*)0}}};
                int8_t l_748 = 0x4BL;
                int i, j, k;
                (*l_629) = ((*p_1067->g_534) , p_1067->g_627);
                if ((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((*l_624) = 3L) < ((p_1067->g_640 , (((safe_add_func_int32_t_s_s((p_47 == (safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 15))), ((*l_597) = ((((-6L) <= ((*p_1067->g_584) = (l_645 = l_626))) , (void*)0) == (void*)0)))) != ((0L < (((*l_646) &= 0x4D3DBAFFD532D2F4L) && l_647.x)) != (-8L))) == p_47)) & 1UL)), p_1067->g_537.f2.f2.f2)), 0x0289L)) <= 0x53A2L), p_47)) , p_47) == l_647.w), l_648)) < p_1067->g_172.f3), p_1067->g_172.f2.f2)) , 0L) <= p_47))
                { /* block id: 346 */
                    VECTOR(uint64_t, 2) l_659 = (VECTOR(uint64_t, 2))(1UL, 0x614D565A78C92C4AL);
                    int i;
                    (*l_595) = (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(p_1067->g_651.xzyxzyyywwzzzyzw)).even, (uint16_t)(safe_add_func_uint64_t_u_u(l_654, ((*l_596) > (((((safe_mul_func_int8_t_s_s(l_648, (safe_sub_func_int8_t_s_s((((*p_1067->g_584) ^= (l_659.x , (-9L))) || p_47), ((VECTOR(int8_t, 4))(l_660.yxxy)).y)))) > ((p_1067->g_661 , ((void*)0 == &l_624)) > p_47)) , &p_1067->g_459) == &p_1067->g_459) > p_47))))))))).s5, p_47));
                }
                else
                { /* block id: 349 */
                    uint32_t l_665 = 4294967289UL;
                    int32_t **l_671 = &p_1067->g_186;
                    int8_t l_674 = (-1L);
                    int32_t l_678 = (-1L);
                    int32_t l_680 = 0x410C3EA6L;
                    int32_t l_681 = 0x042DC771L;
                    int32_t l_684 = 0x6E68296BL;
                    int32_t l_693 = 0x621A6276L;
                    int32_t l_697 = 0L;
                    int32_t l_700 = 0x4D184D15L;
                    for (p_1067->g_585 = 0; (p_1067->g_585 <= 5); p_1067->g_585++)
                    { /* block id: 352 */
                        int16_t l_664[10] = {(-2L),0x66E2L,(-2L),(-2L),0x66E2L,(-2L),(-2L),0x66E2L,(-2L),(-2L)};
                        struct S5 ***l_667[9] = {&l_666,&l_666,&l_666,&l_666,&l_666,&l_666,&l_666,&l_666,&l_666};
                        int i;
                        l_665 = l_664[0];
                        l_666 = l_666;
                    }
                    (*p_1067->g_669) = (*p_1067->g_188);
                    (*l_671) = func_74(l_670, l_654, p_1067);
                    for (p_1067->g_178.f3 = (-16); (p_1067->g_178.f3 < (-28)); p_1067->g_178.f3 = safe_sub_func_uint16_t_u_u(p_1067->g_178.f3, 5))
                    { /* block id: 360 */
                        int8_t l_675 = 0x3EL;
                        int32_t l_676 = 5L;
                        int32_t l_677 = 0x4543CC5CL;
                        int32_t l_683 = 0x25CCAEAEL;
                        int32_t l_685[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_685[i] = 0x580AC344L;
                        l_701--;
                        if (p_47)
                            continue;
                        (*p_1067->g_705) = p_1067->g_704;
                        (*l_596) &= l_694;
                    }
                }
                (*l_596) = (safe_lshift_func_int16_t_s_u(((l_708 == (*p_1067->g_250)) < (safe_div_func_uint8_t_u_u((((l_712[0] , (((safe_mul_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_1067->g_651.x, (+(safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((((*l_624) = ((((*l_725)--) , l_728) != ((safe_add_func_int64_t_s_s((l_682[5][5][2] = (safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(6L, ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_626 , (safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(p_1067->g_537.f2.f1.f3, 0x6267DEEE2C755905L)), FAKE_DIVERGE(p_1067->group_1_offset, get_group_id(1), 10)))), 0x26L)), 0x258BL)), 0x41L)) ^ 0xD58EL))), 0x6136911883AA7BC1L)), 0x407BB553L))), p_1067->g_559.s5)) , (void*)0))) && 0x8728L) > p_47), l_701)), GROUP_DIVERGE(2, 1)))), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(0x1DE2L)), 0xD57BL, 1UL)).s3, l_701)), l_645)) , p_47), 0xF4A41892L)) , p_47) , 0x69L) <= l_654) , p_47), l_748)) , l_712[2]) <= p_1067->g_63.s1)) , p_1067->g_704.f5) >= p_47), l_749))), 8));
            }
            else
            { /* block id: 371 */
                for (p_1067->g_489.f3 = (-16); (p_1067->g_489.f3 >= (-12)); p_1067->g_489.f3++)
                { /* block id: 374 */
                    return p_47;
                }
            }
        }
        else
        { /* block id: 378 */
            union U6 *l_753 = &p_1067->g_228;
            l_753 = l_752;
            (*l_596) ^= 0x76E24BFBL;
        }
    }
    l_597 = func_74(l_670, (safe_sub_func_uint16_t_u_u((l_606 == ((((*l_597) = FAKE_DIVERGE(p_1067->global_1_offset, get_global_id(1), 10)) < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_758.wxzx)).xzyxwxzzzzyyxzxz)).s4) , &p_1067->g_562)), (((*p_1067->g_176) , (p_1067->g_225[3].f3.f1 || p_47)) , p_47))), p_1067);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_587 p_1067->g_396 p_1067->g_67
 * writes: p_1067->g_589 p_1067->g_67
 */
int32_t * func_49(uint16_t  p_50, int8_t * p_51, int8_t * p_52, int8_t * p_53, int8_t * p_54, struct S7 * p_1067)
{ /* block id: 303 */
    int32_t *l_586[9][6][1] = {{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}},{{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]},{&p_1067->g_13[1][3][7]}}};
    volatile struct S0 *l_588[4] = {&p_1067->g_484[2][1],&p_1067->g_484[2][1],&p_1067->g_484[2][1],&p_1067->g_484[2][1]};
    int i, j, k;
    l_586[2][5][0] = l_586[2][5][0];
    p_1067->g_589 = p_1067->g_587;
    (*p_1067->g_396) &= (18446744073709551615UL | p_50);
    return l_586[2][5][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_10 p_1067->g_67 p_1067->g_94 p_1067->g_13 p_1067->g_9 p_1067->g_comm_values p_1067->g_63 p_1067->g_69 p_1067->g_2 p_1067->g_119 p_1067->g_3 p_1067->g_172 p_1067->g_185 p_1067->g_187 p_1067->g_188 p_1067->g_186 p_1067->g_223 p_1067->g_228 p_1067->g_229 p_1067->g_233 p_1067->l_comm_values p_1067->g_243 p_1067->g_245 p_1067->g_249 p_1067->g_250 p_1067->g_261 p_1067->g_290 p_1067->g_292 p_1067->g_95 p_1067->g_235.f5 p_1067->g_235.f2 p_1067->g_322 p_1067->g_358 p_1067->g_323 p_1067->g_396 p_1067->g_400 p_1067->g_345 p_1067->g_384 p_1067->g_458 p_1067->g_484 p_1067->g_489 p_1067->g_533 p_1067->g_534 p_1067->g_234.f3.f3 p_1067->g_552 p_1067->g_553 p_1067->g_556 p_1067->g_558 p_1067->g_559 p_1067->g_562 p_1067->g_159 p_1067->g_180.f1.f3 p_1067->g_225.f2 p_1067->g_235.f1
 * writes: p_1067->g_67 p_1067->g_95 p_1067->g_69 p_1067->g_2 p_1067->g_119 p_1067->g_176 p_1067->g_179 p_1067->g_186 p_1067->g_187 p_1067->g_172.f1.f3 p_1067->g_233 p_1067->g_180.f1.f2 p_1067->g_180.f1.f3 p_1067->g_243 p_1067->g_249 p_1067->g_178.f2.f2 p_1067->g_228.f1 p_1067->g_172.f3 p_1067->g_172.f2.f3 p_1067->g_178.f1.f3 p_1067->g_235.f2 p_1067->g_323 p_1067->g_180.f3 p_1067->g_229.f5 p_1067->g_406 p_1067->g_411 p_1067->g_235.f1 p_1067->g_292 p_1067->g_245 p_1067->g_235.f6 p_1067->g_537.f0 p_1067->g_225.f0 p_1067->g_229.f4
 */
uint16_t  func_55(uint32_t  p_56, uint32_t  p_57, int8_t  p_58, int8_t * p_59, int32_t  p_60, struct S7 * p_1067)
{ /* block id: 15 */
    uint64_t l_70 = 0UL;
    int32_t *l_71 = &p_1067->g_67[1][0];
    int8_t *l_89[4];
    int8_t **l_120 = &p_1067->g_119[2];
    int32_t **l_583 = &l_71;
    int i;
    for (i = 0; i < 4; i++)
        l_89[i] = (void*)0;
    (*l_71) = l_70;
    for (p_57 = 0; (p_57 == 1); p_57 = safe_add_func_uint16_t_u_u(p_57, 3))
    { /* block id: 19 */
        return p_1067->g_10;
    }
    (*l_583) = func_74(func_77(((*l_120) = func_83(l_89[3], func_90(p_60, (*l_71), ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_1067->g_94.se533b9e2)))).even)).z & ((p_1067->g_13[0][1][3] , ((p_1067->g_95[0] = p_58) , &p_60)) != (void*)0)) <= (safe_sub_func_uint16_t_u_u((*l_71), (1L != (*l_71))))), p_1067), p_1067->g_comm_values[p_1067->tid], p_1067->g_63.s5, &p_1067->g_69, p_1067)), (*l_71), p_1067->g_3, (*l_71), l_71, p_1067), p_58, p_1067);
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_234.f3.f3 p_1067->g_comm_values p_1067->g_552 p_1067->g_553 p_1067->g_556 p_1067->g_558 p_1067->g_559 p_1067->g_562 p_1067->g_229.f5 p_1067->g_229.f4 p_1067->g_159 p_1067->g_180.f1.f3 p_1067->g_225.f2 p_1067->g_67 p_1067->g_235.f1
 * writes: p_1067->g_537.f0 p_1067->g_225.f0 p_1067->g_229.f4 p_1067->g_67 p_1067->g_235.f1 p_1067->g_186
 */
int32_t * func_74(int8_t * p_75, uint64_t  p_76, struct S7 * p_1067)
{ /* block id: 287 */
    VECTOR(uint32_t, 4) l_549 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL);
    uint64_t *l_554 = (void*)0;
    uint64_t *l_555 = &p_1067->g_225[3].f0;
    VECTOR(uint64_t, 4) l_557 = (VECTOR(uint64_t, 4))(0x6C9917180B078ABEL, (VECTOR(uint64_t, 2))(0x6C9917180B078ABEL, 0xD44562B8035397D7L), 0xD44562B8035397D7L);
    int64_t *l_568 = &p_1067->g_537.f2.f1.f3;
    int64_t **l_567 = &l_568;
    int32_t l_569 = 0x243AD4F0L;
    uint32_t *l_570 = &p_1067->g_229.f4;
    int32_t **l_574 = &p_1067->g_186;
    int32_t *l_575 = &p_1067->g_67[4][3];
    int32_t *l_576 = &p_1067->g_67[1][0];
    int32_t *l_577[10] = {&p_1067->g_67[4][4],&p_1067->g_67[4][4],&p_1067->g_67[1][0],&p_1067->g_67[4][4],&p_1067->g_67[4][4],&p_1067->g_67[4][4],&p_1067->g_67[4][4],&p_1067->g_67[1][0],&p_1067->g_67[4][4],&p_1067->g_67[4][4]};
    uint32_t l_578 = 0xDD8ED3EDL;
    int32_t *l_581 = (void*)0;
    int i;
    p_1067->g_67[1][0] ^= (((+((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_549.zwzxxzyz)).hi, ((VECTOR(uint32_t, 8))(0UL, ((*l_570) ^= ((p_1067->g_234.f3.f3 , (safe_div_func_int64_t_s_s((p_1067->g_537.f0 = p_1067->g_comm_values[p_1067->tid]), l_549.z))) >= (FAKE_DIVERGE(p_1067->group_1_offset, get_group_id(1), 10) >= (((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(1UL, 0x6303B8D261DBEBE2L)).xyyyyyxx, ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(0xB955E56BL, 0UL)).xxxy, ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 4))(p_1067->g_552.yyyy)).wzwzyxywzwyzzzzw))).s3077))).zwxwxwzw)))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(6UL, 0xEEE4535C63B1BA39L)), 0xF4DD3EBB8039D4A6L, 0x93AC0714BC75C975L)).xyxwzyzw, ((VECTOR(uint64_t, 4))(p_1067->g_553.s3536)).xyywxxzx))))).s7255051450067253, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((*l_555) = l_549.x), 0x1416EC402760D71FL, ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1067->g_556.zywyxzxz)).s5505473433231062)).sce72, ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(l_557.zw)).xxyxxxxxyxyyyyyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1067->g_558.zyzyyxzy)).s24)).xyxxxxxxxxxxyyxy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1067->g_559.s07)).xyyyxyxxyxxyyyxy))))).s5d73))), 18446744073709551615UL, 1UL)).s7674116524006427)).s56, (uint64_t)(safe_lshift_func_int8_t_s_s((((p_1067->g_562 == p_1067->g_562) & l_549.z) && (((((l_557.x & (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((((*l_567) = &p_1067->g_245) == l_554) < GROUP_DIVERGE(0, 1)) != l_557.w), l_557.y)) | p_1067->g_229.f5), 5))) != l_549.z) || l_549.x) == l_557.x) ^ l_569)), l_549.x))))), 0xD51EF24A75DE8458L, 18446744073709551615UL)), ((VECTOR(uint64_t, 4))(1UL))))))).zwxwywwxzzwwywxy))).even))).s6 == (-1L))))), p_1067->g_159.z, 8UL, 0x25D0AD11L, p_1067->g_180.f1.f3, 0x4911453FL, 0xC6AAAB72L)).lo, ((VECTOR(uint32_t, 4))(0x4E2AF29FL))))).y) | l_557.w) & p_1067->g_225[3].f2);
    for (p_1067->g_235.f1 = 5; (p_1067->g_235.f1 != (-17)); p_1067->g_235.f1--)
    { /* block id: 295 */
        int32_t *l_573 = (void*)0;
        return l_573;
    }
    (*l_574) = &l_569;
    l_578--;
    return l_581;
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_69 p_1067->g_172 p_1067->g_185 p_1067->g_187 p_1067->g_188 p_1067->g_186 p_1067->g_223 p_1067->g_67 p_1067->g_228 p_1067->g_229 p_1067->g_233 p_1067->l_comm_values p_1067->g_243 p_1067->g_245 p_1067->g_249 p_1067->g_250 p_1067->g_261 p_1067->g_290 p_1067->g_292 p_1067->g_3 p_1067->g_95 p_1067->g_235.f5 p_1067->g_235.f2 p_1067->g_322 p_1067->g_358 p_1067->g_323 p_1067->g_119 p_1067->g_396 p_1067->g_400 p_1067->g_345 p_1067->g_384 p_1067->g_458 p_1067->g_484 p_1067->g_489 p_1067->g_533 p_1067->g_534
 * writes: p_1067->g_69 p_1067->g_176 p_1067->g_179 p_1067->g_186 p_1067->g_187 p_1067->g_172.f1.f3 p_1067->g_67 p_1067->g_95 p_1067->g_233 p_1067->g_180.f1.f2 p_1067->g_180.f1.f3 p_1067->g_243 p_1067->g_249 p_1067->g_178.f2.f2 p_1067->g_228.f1 p_1067->g_172.f3 p_1067->g_172.f2.f3 p_1067->g_178.f1.f3 p_1067->g_235.f2 p_1067->g_323 p_1067->g_180.f3 p_1067->g_229.f5 p_1067->g_406 p_1067->g_411 p_1067->g_235.f1 p_1067->g_292 p_1067->g_245 p_1067->g_235.f6
 */
int8_t * func_77(int8_t * p_78, int8_t  p_79, uint32_t  p_80, int8_t  p_81, int32_t * p_82, struct S7 * p_1067)
{ /* block id: 37 */
    struct S3 *l_164 = (void*)0;
    int32_t l_165 = 0L;
    VECTOR(int8_t, 8) l_183 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x0AL), 0x0AL), 0x0AL, 1L, 0x0AL);
    int32_t l_196 = 0x7E99ADD5L;
    int32_t l_198 = 0x52EE98ABL;
    int32_t l_200 = 0x35F938C1L;
    VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x7F016268L), 0x7F016268L), 0x7F016268L, (-10L), 0x7F016268L, (VECTOR(int32_t, 2))((-10L), 0x7F016268L), (VECTOR(int32_t, 2))((-10L), 0x7F016268L), (-10L), 0x7F016268L, (-10L), 0x7F016268L);
    struct S0 *l_260 = &p_1067->g_243;
    struct S0 **l_259 = &l_260;
    struct S0 ***l_258 = &l_259;
    VECTOR(uint64_t, 8) l_346 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x2C80E682F7A6DE3DL), 0x2C80E682F7A6DE3DL), 0x2C80E682F7A6DE3DL, 1UL, 0x2C80E682F7A6DE3DL);
    int16_t *l_367 = &p_1067->g_243.f0;
    int16_t **l_366 = &l_367;
    int16_t ***l_365[5] = {&l_366,&l_366,&l_366,&l_366,&l_366};
    VECTOR(int8_t, 16) l_383 = (VECTOR(int8_t, 16))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, (-1L)), (-1L)), (-1L), 0x56L, (-1L), (VECTOR(int8_t, 2))(0x56L, (-1L)), (VECTOR(int8_t, 2))(0x56L, (-1L)), 0x56L, (-1L), 0x56L, (-1L));
    int8_t ***l_387 = &p_1067->g_323;
    VECTOR(int64_t, 16) l_388 = (VECTOR(int64_t, 16))(0x1A6FD0C9EE209277L, (VECTOR(int64_t, 4))(0x1A6FD0C9EE209277L, (VECTOR(int64_t, 2))(0x1A6FD0C9EE209277L, 8L), 8L), 8L, 0x1A6FD0C9EE209277L, 8L, (VECTOR(int64_t, 2))(0x1A6FD0C9EE209277L, 8L), (VECTOR(int64_t, 2))(0x1A6FD0C9EE209277L, 8L), 0x1A6FD0C9EE209277L, 8L, 0x1A6FD0C9EE209277L, 8L);
    uint8_t l_530 = 3UL;
    int32_t *l_547 = &l_200;
    int8_t *l_548[3][5][6] = {{{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69}},{{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69}},{{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69},{(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69,(void*)0,&p_1067->g_69}}};
    int i, j, k;
    for (p_1067->g_69 = 0; (p_1067->g_69 <= (-29)); p_1067->g_69 = safe_sub_func_uint32_t_u_u(p_1067->g_69, 5))
    { /* block id: 40 */
        int8_t l_137 = 0x2FL;
        VECTOR(uint8_t, 16) l_140 = (VECTOR(uint8_t, 16))(0x36L, (VECTOR(uint8_t, 4))(0x36L, (VECTOR(uint8_t, 2))(0x36L, 0UL), 0UL), 0UL, 0x36L, 0UL, (VECTOR(uint8_t, 2))(0x36L, 0UL), (VECTOR(uint8_t, 2))(0x36L, 0UL), 0x36L, 0UL, 0x36L, 0UL);
        int8_t l_168 = 0x1BL;
        int32_t l_193 = 1L;
        int32_t l_194 = 0x57C2B75BL;
        int32_t l_195 = 0x49CEF6D5L;
        int32_t l_199[3];
        struct S4 *l_224[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int8_t, 16) l_246 = (VECTOR(int8_t, 16))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x39L), 0x39L), 0x39L, 0x19L, 0x39L, (VECTOR(int8_t, 2))(0x19L, 0x39L), (VECTOR(int8_t, 2))(0x19L, 0x39L), 0x19L, 0x39L, 0x19L, 0x39L);
        struct S0 ***l_256 = (void*)0;
        VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 1L), 1L), 1L, 3L, 1L, (VECTOR(int32_t, 2))(3L, 1L), (VECTOR(int32_t, 2))(3L, 1L), 3L, 1L, 3L, 1L);
        VECTOR(int32_t, 4) l_293 = (VECTOR(int32_t, 4))(0x2225837FL, (VECTOR(int32_t, 2))(0x2225837FL, 0x1FFD2F67L), 0x1FFD2F67L);
        VECTOR(int32_t, 16) l_294 = (VECTOR(int32_t, 16))(0x2FAC1601L, (VECTOR(int32_t, 4))(0x2FAC1601L, (VECTOR(int32_t, 2))(0x2FAC1601L, 0x19274E46L), 0x19274E46L), 0x19274E46L, 0x2FAC1601L, 0x19274E46L, (VECTOR(int32_t, 2))(0x2FAC1601L, 0x19274E46L), (VECTOR(int32_t, 2))(0x2FAC1601L, 0x19274E46L), 0x2FAC1601L, 0x19274E46L, 0x2FAC1601L, 0x19274E46L);
        VECTOR(int8_t, 2) l_303 = (VECTOR(int8_t, 2))(0x20L, 0x1DL);
        int i;
        for (i = 0; i < 3; i++)
            l_199[i] = 1L;
        if ((atomic_inc(&p_1067->l_atomic_input[41]) == 2))
        { /* block id: 42 */
            uint32_t l_123[2];
            int32_t l_126 = 0L;
            uint8_t l_127 = 1UL;
            uint32_t l_130 = 0x8ADDDDEFL;
            int i;
            for (i = 0; i < 2; i++)
                l_123[i] = 7UL;
            l_123[1]--;
            l_127--;
            l_130--;
            unsigned int result = 0;
            int l_123_i0;
            for (l_123_i0 = 0; l_123_i0 < 2; l_123_i0++) {
                result += l_123[l_123_i0];
            }
            result += l_126;
            result += l_127;
            result += l_130;
            atomic_add(&p_1067->l_special_values[41], result);
        }
        else
        { /* block id: 46 */
            (1 + 1);
        }
        for (p_79 = 4; (p_79 < (-10)); p_79 = safe_sub_func_int16_t_s_s(p_79, 6))
        { /* block id: 51 */
            uint16_t *l_147 = &p_1067->g_95[0];
            int32_t l_158 = (-1L);
            uint32_t l_166[2][10][4] = {{{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL}},{{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL},{4294967295UL,0x88FA3BE2L,3UL,0xF50C62AAL}}};
            int32_t l_167 = 0x7CBD7A91L;
            int32_t l_169 = 0x777F4DF6L;
            struct S3 *l_177 = &p_1067->g_178;
            int32_t l_197 = 0x0212C634L;
            int32_t l_202[9][8][3] = {{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}},{{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L},{0x334F8885L,(-9L),0L}}};
            int i, j, k;
            l_169 |= ((VECTOR(int32_t, 8))(((*p_82) = (safe_mod_func_uint64_t_u_u(l_137, 0x63820F02422DCD2DL))), (safe_lshift_func_int16_t_s_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_140.s148f47512d4483b5)).s97)))).yyyx)).x != ((((safe_mul_func_uint8_t_u_u(((0x5CB47B8EL != ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(0xA1EBL, ((*l_147)++))) && ((p_1067->g_95[0] = ((((safe_rshift_func_int16_t_s_u((l_167 |= ((safe_sub_func_uint8_t_u_u(0UL, l_137)) & (((VECTOR(uint16_t, 16))((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((VECTOR(uint64_t, 8))(l_158, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_1067->g_159.wwxz)))), (safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((l_164 == l_164), GROUP_DIVERGE(2, 1))) < (*p_82)) < 0x26A2F962L), l_165)), 3UL, 6UL)).s6 ^ l_158), l_158)), p_80)), ((VECTOR(uint16_t, 2))(0xF664L)), p_1067->g_comm_values[p_1067->tid], 0xD3F1L, 1UL, p_1067->g_10, 0x9FBBL, ((VECTOR(uint16_t, 8))(0xC1B7L)))).sa < l_166[0][1][1]))), l_166[1][3][2])) >= p_1067->g_13[0][1][0]) ^ 0x4625639F120E9FE6L) && l_167)) < l_168)), p_1067->g_159.x)), ((VECTOR(uint32_t, 8))(4294967293UL)), ((VECTOR(uint32_t, 4))(7UL)), l_168, 0x2E68C3BFL, 0xD7A2F4DFL)).s6c, ((VECTOR(uint32_t, 2))(1UL))))), 0xDC138165L, 0x824888C0L)).w) , 255UL), 9UL)) || p_1067->g_63.s4) , 0x7400B97599690810L) & l_166[0][1][1])), p_1067->g_63.s0)), 3L, (*p_82), 0L, ((VECTOR(int32_t, 2))(0x66B9EE8EL)), 0x1843AEAEL)).s0;
            for (p_81 = 0; (p_81 >= 25); p_81++)
            { /* block id: 59 */
                struct S3 **l_173 = &l_164;
                struct S3 **l_174[2];
                struct S3 *l_175[6][1] = {{&p_1067->g_172},{&p_1067->g_172},{&p_1067->g_172},{&p_1067->g_172},{&p_1067->g_172},{&p_1067->g_172}};
                int8_t *l_184 = &l_168;
                int32_t *l_189 = &l_167;
                int32_t l_190 = (-9L);
                int32_t *l_191 = &l_169;
                int32_t *l_192[6] = {(void*)0,&p_1067->g_3,(void*)0,(void*)0,&p_1067->g_3,(void*)0};
                uint64_t l_203[4] = {3UL,3UL,3UL,3UL};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_174[i] = (void*)0;
                (*p_1067->g_185) = ((((p_1067->g_172 , (p_1067->g_176 = (l_175[2][0] = ((*l_173) = &p_1067->g_172)))) == (p_1067->g_179 = l_177)) , (safe_rshift_func_int8_t_s_s((*p_78), ((*l_184) = ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x3BL)).xyxyxyyy)).s22)), (-10L), (-8L))).even, ((VECTOR(int8_t, 16))(l_183.s6561147772555325)).s80))).odd)))) , p_82);
                (*p_1067->g_188) = p_1067->g_187;
                l_203[1]--;
            }
        }
        for (l_198 = 0; (l_198 == 11); l_198++)
        { /* block id: 72 */
            uint16_t *l_232 = &p_1067->g_95[0];
            struct S4 **l_236 = &p_1067->g_233[2];
            struct S4 **l_237 = &l_224[1];
            int16_t l_247[10] = {1L,0x1F75L,0x4C62L,0x1F75L,1L,1L,0x1F75L,0x4C62L,0x1F75L,1L};
            int32_t *l_248 = &l_165;
            int64_t *l_314 = &p_1067->g_178.f1.f3;
            int16_t *l_319 = &l_247[2];
            int i;
            for (p_1067->g_172.f1.f3 = 0; (p_1067->g_172.f1.f3 != (-27)); p_1067->g_172.f1.f3 = safe_sub_func_uint32_t_u_u(p_1067->g_172.f1.f3, 6))
            { /* block id: 75 */
                int8_t **l_215 = &p_1067->g_119[0];
                int8_t ***l_214 = &l_215;
                int64_t *l_220 = &p_1067->g_178.f2.f3;
                if (((VECTOR(int32_t, 16))(1L, 5L, 0x680F40A1L, ((VECTOR(int32_t, 16))((l_194 |= (p_1067->g_95[0] <= p_81)), (p_81 || (safe_div_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((((*l_214) = &p_1067->g_119[0]) != (void*)0), ((*l_220) = (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_168 ^ ((*p_1067->g_188) , p_1067->g_178.f2.f1)) < l_183.s0), p_81)), 0x459CL))))) == l_201.sb), (*p_78)))), ((VECTOR(int32_t, 4))(0x0747C4E9L)), 0x678A2021L, 0x67737C8AL, (*p_82), ((VECTOR(int32_t, 4))(7L)), 0x0AF79392L, 0x3FCAEC78L, 1L)).sd, 0x102855B8L, 0x3B490FC0L, 6L, ((VECTOR(int32_t, 4))(0x05EC9B8CL)), 0L, ((VECTOR(int32_t, 2))((-1L))), 0x16988AD6L, 2L)).s2)
                { /* block id: 79 */
                    struct S4 **l_226 = &l_224[2];
                    for (l_165 = 27; (l_165 >= 12); l_165 = safe_sub_func_int64_t_s_s(l_165, 6))
                    { /* block id: 82 */
                        (*p_1067->g_223) = (*p_1067->g_185);
                    }
                    (*l_226) = l_224[1];
                }
                else
                { /* block id: 86 */
                    int32_t **l_227 = &p_1067->g_186;
                    (*l_227) = (void*)0;
                    if ((*p_82))
                        break;
                    (*p_82) &= l_140.s8;
                }
            }
            if ((0x7CDDL >= (p_1067->g_228 , (((l_140.sf , p_1067->g_229) , (safe_mod_func_uint64_t_u_u((((*l_232) = 0xB3A6L) && p_79), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x4D05746449A1E4A7L, 0x29D1AC3D0BC41B95L)).xxyx)).y))) < (((((*l_236) = p_1067->g_233[0]) == ((*l_237) = l_224[1])) , p_1067->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1067->tid, 15))]) <= p_80)))))
            { /* block id: 95 */
                int32_t **l_238[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                (*p_1067->g_185) = (*p_1067->g_223);
                for (p_1067->g_180.f1.f2 = 0; (p_1067->g_180.f1.f2 != 11); p_1067->g_180.f1.f2 = safe_add_func_int64_t_s_s(p_1067->g_180.f1.f2, 4))
                { /* block id: 99 */
                    for (p_1067->g_180.f1.f3 = 27; (p_1067->g_180.f1.f3 < (-9)); --p_1067->g_180.f1.f3)
                    { /* block id: 102 */
                        struct S0 *l_244 = &p_1067->g_243;
                        (*l_244) = p_1067->g_243;
                        if (p_1067->g_245)
                            continue;
                    }
                    l_247[8] &= ((*p_82) = (((VECTOR(int8_t, 16))(l_246.s8c5d40d41f283284)).se < l_194));
                    p_82 = l_248;
                }
                return &p_1067->g_69;
            }
            else
            { /* block id: 111 */
                int8_t l_263 = 1L;
                (*p_1067->g_250) = p_1067->g_249;
                for (p_1067->g_178.f2.f2 = 0; (p_1067->g_178.f2.f2 == 11); ++p_1067->g_178.f2.f2)
                { /* block id: 115 */
                    VECTOR(int64_t, 2) l_253 = (VECTOR(int64_t, 2))(1L, 1L);
                    struct S0 ****l_257 = &l_256;
                    int8_t *l_262 = &p_1067->g_228.f1;
                    int i;
                    (*p_82) ^= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_253.xy)).yyyxyyyy)).s1 | (safe_sub_func_int8_t_s_s((((*l_257) = l_256) == l_258), ((*l_262) = (p_1067->g_261 , 0x04L)))));
                }
                if (l_263)
                    continue;
                if ((atomic_inc(&p_1067->g_atomic_input[90 * get_linear_group_id() + 17]) == 0))
                { /* block id: 122 */
                    int16_t l_264 = 6L;
                    int16_t l_265[8] = {0x6984L,0x6ECEL,0x6984L,0x6984L,0x6ECEL,0x6984L,0x6984L,0x6ECEL};
                    uint8_t l_278 = 0x8EL;
                    int32_t l_281 = 0x71295B1AL;
                    int i;
                    l_265[6] &= l_264;
                    for (l_265[6] = 0; (l_265[6] <= (-10)); l_265[6] = safe_sub_func_uint8_t_u_u(l_265[6], 9))
                    { /* block id: 126 */
                        int16_t l_268 = 0x5ECBL;
                        uint32_t l_269 = 8UL;
                        int64_t l_270 = 0x4505BFE8EF02D1D4L;
                        int8_t l_271 = 0x13L;
                        uint32_t l_272 = 9UL;
                        int32_t l_276[3];
                        int32_t *l_275 = &l_276[0];
                        int32_t *l_277[6][6][7] = {{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}},{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}},{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}},{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}},{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}},{{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]},{(void*)0,&l_276[2],&l_276[0],&l_276[0],&l_276[0],&l_276[0],&l_276[0]}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_276[i] = 1L;
                        l_269 |= l_268;
                        l_270 = 1L;
                        l_272++;
                        l_277[3][2][5] = l_275;
                    }
                    --l_278;
                    l_281 = 0x41FDB081L;
                    unsigned int result = 0;
                    result += l_264;
                    int l_265_i0;
                    for (l_265_i0 = 0; l_265_i0 < 8; l_265_i0++) {
                        result += l_265[l_265_i0];
                    }
                    result += l_278;
                    result += l_281;
                    atomic_add(&p_1067->g_special_values[90 * get_linear_group_id() + 17], result);
                }
                else
                { /* block id: 134 */
                    (1 + 1);
                }
            }
            for (p_1067->g_172.f3 = (-22); (p_1067->g_172.f3 == (-15)); p_1067->g_172.f3 = safe_add_func_uint8_t_u_u(p_1067->g_172.f3, 5))
            { /* block id: 140 */
                for (p_1067->g_172.f2.f3 = 17; (p_1067->g_172.f2.f3 < (-29)); p_1067->g_172.f2.f3--)
                { /* block id: 143 */
                    int16_t *l_288[10] = {&l_247[7],&p_1067->g_243.f0,(void*)0,&p_1067->g_243.f0,&l_247[7],&l_247[7],&p_1067->g_243.f0,(void*)0,&p_1067->g_243.f0,&l_247[7]};
                    int i;
                    if (((safe_rshift_func_int16_t_s_u((l_194 = (-1L)), 12)) != 0UL))
                    { /* block id: 145 */
                        int8_t *l_289 = &l_137;
                        return &p_1067->g_69;
                    }
                    else
                    { /* block id: 147 */
                        atomic_max(&p_1067->g_atomic_reduction[get_linear_group_id()], ((p_1067->g_290[1] , l_200) && p_81));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1067->v_collective += p_1067->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if ((*p_82))
                            break;
                        return &p_1067->g_69;
                    }
                }
            }
            (*l_248) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((~(*p_82)), 2L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_291.sbdd09bc5)).s04, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(p_1067->g_292.xyyyyyyx)).s45, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_293.yzzwyzzx)).s7726123412531366)).s01))).yxxy)).even, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x46A7C08CL)))).xxyy)).zyzzywww, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_294.sa7c7)))).wzxwzywwzzyxzzwx, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))((safe_mod_func_uint8_t_u_u((p_1067->g_3 == (safe_div_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_303.yx)), (int8_t)(*p_78)))).yyyyxyxx)).s3, (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_80, l_200)), ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(3L, 1L)).yyxxxxyyxyyyxyxx)).s6e6e)).zwywywyxzxyzywww, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))((-1L), 0x435ACBBCE12E4BF4L, ((*l_314) = (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(0x76L, 0x95L)), p_1067->g_245))), 0x5E3F1211D8B41040L, (((*l_232)++) != (safe_add_func_int8_t_s_s((((*l_319) &= (l_168 >= (*p_82))) == p_1067->g_261.f0), GROUP_DIVERGE(0, 1)))), l_198, ((VECTOR(int64_t, 4))(1L)), ((VECTOR(int64_t, 2))(0x52831A427D1F946EL)), 0x1F0F9DEFF3D06E82L, ((VECTOR(int64_t, 2))(0x0461D223A280458CL)), 1L)).sc35a)), ((VECTOR(int64_t, 2))((-10L))), 0x68845FD41A6D2180L, 0x6A3DB87A49A58F88L)), ((VECTOR(int64_t, 8))(0L))))).s10)).yyyx, ((VECTOR(int64_t, 4))(0x0DFBD16688CF6836L))))).ywxyzyyywzxwxwzx))).sd, l_137)) , p_1067->g_235.f5))))), 1)) , (*p_78))))), 247UL)), ((VECTOR(int32_t, 2))(0x577C5ABDL)), (-9L))).wxwzwzxzxxyyzxxw, ((VECTOR(int32_t, 16))(1L)))))))).hi, ((VECTOR(int32_t, 8))((-2L))), ((VECTOR(int32_t, 8))((-2L)))))), (int32_t)(*p_82), (int32_t)(*p_82)))).lo)).yxzxzxxxxxyxzyyy)).sde, ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 2))(0x52EECA2CL))))), (int32_t)(*p_82), (int32_t)(*p_82)))), 0L, 8L)).yzyxxwyz))))).s32))).yxxx, (int32_t)l_291.sb))), 0x7824D973L, ((VECTOR(int32_t, 8))(0x6D1AA99EL)), 0x794DED78L)).s3f52)), 0x7CC3D62FL, l_293.x, 3L, 0x5D68ACB0L)).s32)), 0x3FF92EC1L, 0L)).z;
        }
    }
    for (p_1067->g_235.f2 = 4; (p_1067->g_235.f2 <= 42); p_1067->g_235.f2 = safe_add_func_uint64_t_u_u(p_1067->g_235.f2, 1))
    { /* block id: 162 */
        p_82 = (*p_1067->g_185);
        (*p_1067->g_322) = &p_78;
        for (p_1067->g_172.f3 = 3; (p_1067->g_172.f3 <= (-8)); --p_1067->g_172.f3)
        { /* block id: 167 */
            VECTOR(uint8_t, 16) l_326 = (VECTOR(uint8_t, 16))(0x52L, (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 0xF1L), 0xF1L), 0xF1L, 0x52L, 0xF1L, (VECTOR(uint8_t, 2))(0x52L, 0xF1L), (VECTOR(uint8_t, 2))(0x52L, 0xF1L), 0x52L, 0xF1L, 0x52L, 0xF1L);
            int i;
            if (l_326.s0)
                break;
        }
    }
    for (p_1067->g_243.f0 = 0; (p_1067->g_243.f0 > 24); ++p_1067->g_243.f0)
    { /* block id: 173 */
        VECTOR(uint64_t, 16) l_342 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xA732BECF8EA86473L), 0xA732BECF8EA86473L), 0xA732BECF8EA86473L, 0UL, 0xA732BECF8EA86473L, (VECTOR(uint64_t, 2))(0UL, 0xA732BECF8EA86473L), (VECTOR(uint64_t, 2))(0UL, 0xA732BECF8EA86473L), 0UL, 0xA732BECF8EA86473L, 0UL, 0xA732BECF8EA86473L);
        uint64_t l_352 = 0x54BD615530713DA4L;
        struct S4 **l_364 = &p_1067->g_233[0];
        int32_t l_368[7][5] = {{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L},{0x70A7E696L,0L,0x50FD662FL,0L,0x70A7E696L}};
        struct S0 ***l_404 = &l_259;
        int32_t l_475[6][1][8] = {{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}},{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}},{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}},{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}},{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}},{{0L,3L,0x197F00A0L,3L,0L,0L,3L,0x197F00A0L}}};
        int16_t ***l_477[2];
        int32_t **l_546[8];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_477[i] = (void*)0;
        for (i = 0; i < 8; i++)
            l_546[i] = (void*)0;
        for (p_1067->g_180.f3 = (-2); (p_1067->g_180.f3 >= 15); ++p_1067->g_180.f3)
        { /* block id: 176 */
            int64_t l_353 = (-5L);
            int16_t *l_355 = &p_1067->g_243.f0;
            int16_t **l_354 = &l_355;
            union U6 *l_407 = &p_1067->g_228;
            VECTOR(int16_t, 2) l_462 = (VECTOR(int16_t, 2))(3L, 0x4655L);
            int32_t l_463 = (-2L);
            int32_t l_476 = 0x2B649824L;
            int i;
            for (p_1067->g_69 = 0; (p_1067->g_69 == (-11)); --p_1067->g_69)
            { /* block id: 179 */
                VECTOR(uint32_t, 8) l_339 = (VECTOR(uint32_t, 8))(0x8737DB03L, (VECTOR(uint32_t, 4))(0x8737DB03L, (VECTOR(uint32_t, 2))(0x8737DB03L, 0xDB0A236AL), 0xDB0A236AL), 0xDB0A236AL, 0x8737DB03L, 0xDB0A236AL);
                int16_t ***l_357 = &l_354;
                uint8_t l_359 = 0UL;
                int i;
                l_200 ^= (safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((((l_165 &= 0x0612L) < ((p_79 <= (p_1067->g_172.f4 <= ((safe_div_func_uint32_t_u_u(((((VECTOR(uint32_t, 4))(l_339.s0607)).x > (((safe_div_func_int16_t_s_s((~(((((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(l_342.s17)), ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 2))(p_1067->g_343.s73)), (uint64_t)p_80))).yyyy, ((VECTOR(uint64_t, 8))(3UL, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(p_1067->g_344.s1005623572342017)).sff, ((VECTOR(uint64_t, 4))(p_1067->g_345.sa0ee)).even))).yyxxxxyy)).s16, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_346.s14610613)), ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_80, ((*p_78) & p_1067->g_159.y))), GROUP_DIVERGE(0, 1))), 1UL, (((((l_342.s8 || (p_1067->g_351 == (void*)0)) < 0L) >= GROUP_DIVERGE(0, 1)) != 0x6107DB0DL) ^ (*p_78)), FAKE_DIVERGE(p_1067->local_0_offset, get_local_id(0), 10), ((VECTOR(uint64_t, 4))(1UL)))).s00, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).hi, p_81, l_201.s1, ((VECTOR(uint64_t, 2))(0xE55A4685B6833D47L)), ((VECTOR(uint64_t, 2))(18446744073709551610UL)), 18446744073709551615UL)).scd))))), ((VECTOR(uint64_t, 4))(0UL)), 8UL)).even))).lo, ((VECTOR(uint64_t, 2))(0xC526B0E1D867E3C8L))))).lo , l_183.s2) , 0xAEL) != 0x18L)), 4UL)) || l_352) & l_339.s5)) <= l_196), (-1L))) <= p_81))) | l_339.s3)) != l_353), 0x5222L)) ^ 0x5971EFD2C5EDC73DL) && 0x6B65L), 0x597FL));
                (*l_357) = l_354;
                (*p_1067->g_358) = l_353;
                if (l_359)
                    break;
            }
            for (p_1067->g_229.f5 = 0; (p_1067->g_229.f5 < 10); p_1067->g_229.f5++)
            { /* block id: 188 */
                int16_t l_386 = 1L;
                int32_t l_395 = 0x27D8E071L;
                uint32_t l_449 = 0x8CFA09F3L;
                if ((l_368[2][3] = ((safe_sub_func_uint64_t_u_u(1UL, (l_364 != &p_1067->g_233[0]))) || (1UL < ((l_365[4] != &l_354) < (p_81 & (((-7L) & 4294967291UL) >= l_342.s1)))))))
                { /* block id: 190 */
                    int8_t *l_378 = &p_1067->g_69;
                    int8_t **l_377 = &l_378;
                    int32_t l_399 = (-7L);
                    int32_t *l_401[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t *l_405[9][4] = {{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0},{&l_386,&l_386,(void*)0,&p_1067->g_243.f0}};
                    int i, j;
                    if ((safe_rshift_func_int8_t_s_s((((*p_78) ^ ((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_342.s0 > ((*p_1067->g_323) == ((*l_377) = (*p_1067->g_323)))) | 6L), 2)), (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 2))(0L, 0L)).lo && p_1067->g_187.f3), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_383.s8153)), (FAKE_DIVERGE(p_1067->local_0_offset, get_local_id(0), 10) , (p_1067->g_384 , ((p_1067->g_385 , (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 8))(p_80, p_1067->g_17.s8, 0x33733C049724C7DBL, p_1067->g_290[1].f3, 0x2E9BFD41E4FE405FL, ((VECTOR(int64_t, 2))(0x2E80AA86F4DE2BB9L)), (-8L)))))), ((VECTOR(int64_t, 8))((-9L)))))).s42)).even < p_1067->g_64.y)) , l_368[4][4]))), l_386, 0x5CL, 1L, 0L, 0x2BL, (*p_78), l_368[2][3], ((VECTOR(int8_t, 4))(0x55L)))).sf)), p_79)))) == 1UL) , &p_1067->g_323) == l_387)) && 0x0BBE9803L), l_342.s4)))
                    { /* block id: 192 */
                        int32_t *l_397 = (void*)0;
                        int32_t l_398 = 0L;
                        l_395 = (((*p_78) && l_353) && ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_388.sc3601eacdb5e24fa)))).s4);
                        (*p_1067->g_396) = l_383.sc;
                        l_398 = p_79;
                    }
                    else
                    { /* block id: 196 */
                        (*p_1067->g_400) = l_399;
                    }
                    l_200 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_368[2][3] &= l_395), 2L, (-10L), (-5L))).xwxyxxwyxyyzwzyy)).s3;
                    if ((safe_sub_func_uint64_t_u_u(((void*)0 != l_404), (p_1067->g_345.s2 < ((p_1067->g_406 = l_405[8][2]) != (*l_354))))))
                    { /* block id: 202 */
                        union U6 **l_408 = &l_407;
                        int32_t **l_410 = &p_1067->g_186;
                        (*p_1067->g_185) = p_82;
                        (*l_408) = l_407;
                        l_368[3][4] = l_395;
                        (*l_410) = p_82;
                    }
                    else
                    { /* block id: 207 */
                        uint8_t l_412 = 0xEAL;
                        int32_t **l_415 = &l_401[4];
                        p_1067->g_411 = p_1067->g_384;
                        ++l_412;
                        (*l_415) = p_82;
                    }
                    if ((atomic_inc(&p_1067->l_atomic_input[9]) == 8))
                    { /* block id: 213 */
                        int16_t l_416[6] = {0x52A1L,0x52A1L,0x52A1L,0x52A1L,0x52A1L,0x52A1L};
                        int32_t *l_417 = (void*)0;
                        int32_t l_419 = 9L;
                        int32_t *l_418[4][1][1] = {{{&l_419}},{{&l_419}},{{&l_419}},{{&l_419}}};
                        VECTOR(int8_t, 2) l_420 = (VECTOR(int8_t, 2))(0L, (-1L));
                        VECTOR(int8_t, 8) l_421 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L));
                        VECTOR(int8_t, 8) l_422 = (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L);
                        VECTOR(int8_t, 8) l_423 = (VECTOR(int8_t, 8))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x00L), 0x00L), 0x00L, 0x62L, 0x00L);
                        VECTOR(int8_t, 8) l_424 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L));
                        struct S3 l_425 = {65534UL,{0x7BCEA7A1L,-1L,5UL,0x4B7B242BADE8B0EAL},{9L,7L,0UL,0x7DC910C9B0A1CA8CL},0x080DE68BL,0xE33EF8DA83E8E110L};/* VOLATILE GLOBAL l_425 */
                        uint32_t l_426 = 0x8B07EF5FL;
                        VECTOR(int8_t, 4) l_427 = (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x6BL), 0x6BL);
                        VECTOR(int8_t, 4) l_428 = (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x7DL), 0x7DL);
                        VECTOR(int8_t, 2) l_429 = (VECTOR(int8_t, 2))(0x56L, 0x6CL);
                        uint32_t l_430 = 0xF3132945L;
                        VECTOR(int8_t, 2) l_431 = (VECTOR(int8_t, 2))((-1L), 0x2CL);
                        VECTOR(int8_t, 8) l_432 = (VECTOR(int8_t, 8))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 0x4EL), 0x4EL), 0x4EL, 0x21L, 0x4EL);
                        VECTOR(int8_t, 8) l_433 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1BL), 0x1BL), 0x1BL, 1L, 0x1BL);
                        VECTOR(int8_t, 2) l_434 = (VECTOR(int8_t, 2))(6L, 0x4FL);
                        uint8_t l_435[1][8][1] = {{{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL}}};
                        int32_t l_436 = 0x2E624F42L;
                        int32_t l_437 = 0x1BE7D6B0L;
                        int32_t l_438 = (-4L);
                        uint32_t l_439 = 4294967289UL;
                        uint8_t l_440 = 0x56L;
                        int16_t l_441 = (-6L);
                        int32_t l_442 = (-9L);
                        struct S5 l_444[6][8] = {{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}},{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}},{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}},{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}},{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}},{{0L,1UL,{0x366DL,{1L,-1L,0x807B26FDL,-2L},{0x3DC0F223L,0x0376C1C0L,0x45286CE0L,0x6CCA5B954288256CL},0L,1UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{0x798BFE15739CFF8AL,18446744073709551615UL,{65535UL,{-1L,0x7F927494L,0xD587F6DCL,5L},{1L,1L,0xCC982926L,0x5AF9A47C8025EE34L},1L,0x671CC98240AA1FBCL}},{0x606D9D1A6E6F9562L,0x23A66873560EAD43L,{1UL,{0x6447D666L,-9L,0xF5226A5BL,1L},{0x6B77B865L,0L,0xFB54F016L,0x2B48150AE814B6C8L},0x622FD68AL,0UL}},{-1L,18446744073709551615UL,{0xEB20L,{0x755FC969L,3L,0x23F38767L,1L},{-6L,0x1BE74A69L,4294967295UL,0x535FDC7472D0E3FCL},0x1E75D403L,7UL}},{-10L,0x6A1E1B71E0002380L,{0xD4CFL,{-9L,-1L,0xA430C2DDL,0x3355A3633F547F16L},{3L,-10L,4294967286UL,7L},6L,18446744073709551606UL}}}};
                        struct S5 *l_443[1][4];
                        struct S5 *l_445 = &l_444[2][3];
                        struct S5 *l_446 = &l_444[2][3];
                        struct S5 *l_447[4][9][3] = {{{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]}},{{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]}},{{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]}},{{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]},{&l_444[5][5],&l_444[2][3],&l_444[2][3]}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_443[i][j] = &l_444[2][3];
                        }
                        l_418[3][0][0] = (l_416[1] , l_417);
                        l_447[0][0][1] = (l_446 = (l_445 = (((((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_420.xxyxxyxxxxxxxyxy)).s6a97)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(l_421.s14)).yxxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_422.s1570763443470011)).s92, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(l_423.s65437255)).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_424.s17)))).xxyxxxyx)).s6741274067026161)).sfd62))).wzwxzwyzxxwyyxzw, (int8_t)((VECTOR(int8_t, 16))((-8L), (l_425 , l_426), (-9L), 0x1EL, ((VECTOR(int8_t, 4))(l_427.yxyz)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_428.ywzyyyyz)).hi)), 2L, 0x76L, 0x7DL, 0x72L)).s2))).secc8)), ((VECTOR(int8_t, 16))(l_429.yxxyxyyxyxyxxxyx)).s00a1, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))((-1L), 0x30L)).yxxxyxxyxyyyxyxx, ((VECTOR(int8_t, 8))((-1L), 0L, (-8L), 0x62L, l_430, (-9L), 1L, 8L)).s0547033553507575))).s911d, ((VECTOR(int8_t, 4))(l_431.yyyx)), ((VECTOR(int8_t, 2))(l_432.s13)).yxxx)))))).hi, ((VECTOR(int8_t, 8))(1L, (-1L), (-1L), ((VECTOR(int8_t, 2))(l_433.s22)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_434.xx)))).yxxx)).wwzyxwxz)).s54)), 0x55L)).s60))))).yxyxyxyxyxyyyxxx, (int8_t)((l_435[0][2][0] , l_436) , l_437)))).hi)).s0652547433654677)).se755, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))((-1L)))))), (int8_t)0x72L, (int8_t)l_438))).xyyxwywx, (int8_t)l_439))), 1L, 0x27L, (-3L), 0x4EL, l_440, ((VECTOR(int8_t, 2))(0x60L)), 0x15L)).s1e)).yxyy))).zzwzxwyz)))).even))).y , l_441) , l_442) , l_443[0][0])));
                        unsigned int result = 0;
                        int l_416_i0;
                        for (l_416_i0 = 0; l_416_i0 < 6; l_416_i0++) {
                            result += l_416[l_416_i0];
                        }
                        result += l_419;
                        result += l_420.y;
                        result += l_420.x;
                        result += l_421.s7;
                        result += l_421.s6;
                        result += l_421.s5;
                        result += l_421.s4;
                        result += l_421.s3;
                        result += l_421.s2;
                        result += l_421.s1;
                        result += l_421.s0;
                        result += l_422.s7;
                        result += l_422.s6;
                        result += l_422.s5;
                        result += l_422.s4;
                        result += l_422.s3;
                        result += l_422.s2;
                        result += l_422.s1;
                        result += l_422.s0;
                        result += l_423.s7;
                        result += l_423.s6;
                        result += l_423.s5;
                        result += l_423.s4;
                        result += l_423.s3;
                        result += l_423.s2;
                        result += l_423.s1;
                        result += l_423.s0;
                        result += l_424.s7;
                        result += l_424.s6;
                        result += l_424.s5;
                        result += l_424.s4;
                        result += l_424.s3;
                        result += l_424.s2;
                        result += l_424.s1;
                        result += l_424.s0;
                        result += l_425.f0;
                        result += l_425.f1.f0;
                        result += l_425.f1.f1;
                        result += l_425.f1.f2;
                        result += l_425.f1.f3;
                        result += l_425.f2.f0;
                        result += l_425.f2.f1;
                        result += l_425.f2.f2;
                        result += l_425.f2.f3;
                        result += l_425.f3;
                        result += l_425.f4;
                        result += l_426;
                        result += l_427.w;
                        result += l_427.z;
                        result += l_427.y;
                        result += l_427.x;
                        result += l_428.w;
                        result += l_428.z;
                        result += l_428.y;
                        result += l_428.x;
                        result += l_429.y;
                        result += l_429.x;
                        result += l_430;
                        result += l_431.y;
                        result += l_431.x;
                        result += l_432.s7;
                        result += l_432.s6;
                        result += l_432.s5;
                        result += l_432.s4;
                        result += l_432.s3;
                        result += l_432.s2;
                        result += l_432.s1;
                        result += l_432.s0;
                        result += l_433.s7;
                        result += l_433.s6;
                        result += l_433.s5;
                        result += l_433.s4;
                        result += l_433.s3;
                        result += l_433.s2;
                        result += l_433.s1;
                        result += l_433.s0;
                        result += l_434.y;
                        result += l_434.x;
                        int l_435_i0, l_435_i1, l_435_i2;
                        for (l_435_i0 = 0; l_435_i0 < 1; l_435_i0++) {
                            for (l_435_i1 = 0; l_435_i1 < 8; l_435_i1++) {
                                for (l_435_i2 = 0; l_435_i2 < 1; l_435_i2++) {
                                    result += l_435[l_435_i0][l_435_i1][l_435_i2];
                                }
                            }
                        }
                        result += l_436;
                        result += l_437;
                        result += l_438;
                        result += l_439;
                        result += l_440;
                        result += l_441;
                        result += l_442;
                        int l_444_i0, l_444_i1;
                        for (l_444_i0 = 0; l_444_i0 < 6; l_444_i0++) {
                            for (l_444_i1 = 0; l_444_i1 < 8; l_444_i1++) {
                                result += l_444[l_444_i0][l_444_i1].f0;
                                result += l_444[l_444_i0][l_444_i1].f1;
                                result += l_444[l_444_i0][l_444_i1].f2.f0;
                                result += l_444[l_444_i0][l_444_i1].f2.f1.f0;
                                result += l_444[l_444_i0][l_444_i1].f2.f1.f1;
                                result += l_444[l_444_i0][l_444_i1].f2.f1.f2;
                                result += l_444[l_444_i0][l_444_i1].f2.f1.f3;
                                result += l_444[l_444_i0][l_444_i1].f2.f2.f0;
                                result += l_444[l_444_i0][l_444_i1].f2.f2.f1;
                                result += l_444[l_444_i0][l_444_i1].f2.f2.f2;
                                result += l_444[l_444_i0][l_444_i1].f2.f2.f3;
                                result += l_444[l_444_i0][l_444_i1].f2.f3;
                                result += l_444[l_444_i0][l_444_i1].f2.f4;
                            }
                        }
                        atomic_add(&p_1067->l_special_values[9], result);
                    }
                    else
                    { /* block id: 218 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 221 */
                    int32_t *l_448 = &l_368[2][3];
                    int8_t *l_452 = (void*)0;
                    --l_449;
                    return l_452;
                }
                if ((safe_sub_func_int16_t_s_s(l_342.s2, 65532UL)))
                { /* block id: 225 */
                    (*p_1067->g_185) = &l_395;
                }
                else
                { /* block id: 227 */
                    int8_t *l_457[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int16_t ****l_460 = (void*)0;
                    int16_t ****l_461 = &l_365[4];
                    VECTOR(int16_t, 4) l_464 = (VECTOR(int16_t, 4))(0x7189L, (VECTOR(int16_t, 2))(0x7189L, 0x70E1L), 0x70E1L);
                    uint16_t *l_465 = &p_1067->g_95[0];
                    int64_t *l_474 = (void*)0;
                    int32_t *l_478 = (void*)0;
                    int32_t *l_479[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_479[i] = &l_395;
                    for (p_1067->g_235.f1 = 0; (p_1067->g_235.f1 < (-3)); --p_1067->g_235.f1)
                    { /* block id: 230 */
                        return l_457[0][1];
                    }
                    p_1067->g_292.y &= (255UL > (((*l_461) = p_1067->g_458) == (((l_476 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x5B7FL, 0x2E31L)), ((VECTOR(int16_t, 2))(0x1CC7L, 0x52FEL)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0x0A8CL, 0x23C6L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_462.yyxy)).even)), 5L, (l_463 = (p_1067->g_290[1].f0 & GROUP_DIVERGE(2, 1))), ((VECTOR(int16_t, 2))(l_464.xw)).even, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(6L, 0x11BEL)).xxyx)).wwzyzxxz, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((GROUP_DIVERGE(0, 1) == ((((++(*l_465)) > ((l_368[5][0] = (l_463 |= (((((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x6FL, 1L)).odd, (safe_rshift_func_int8_t_s_u(((*p_1067->g_188) , (p_81 ^= (p_79 && ((safe_add_func_int32_t_s_s(l_449, ((*p_78) | (0x04F5018737E6D17BL > p_1067->g_411.f2.f2.f0)))) >= l_201.s4)))), FAKE_DIVERGE(p_1067->group_0_offset, get_group_id(0), 10))))) == 0x6DDB9F02L) < p_79) == 0x1E7DL) , (-8L)))) < 0L)) >= 0x9C746039L) != 0x26L)), 1L, (-3L), l_475[2][0][0], ((VECTOR(int16_t, 2))(0x77DFL)), (-1L), 3L)).lo)))).xyxzzwxz))), 1L)).s16)), 0x7C38L, 0x25EAL)).s11)), ((VECTOR(int16_t, 4))(0x6187L)), 9L, p_81, l_368[6][3], ((VECTOR(int16_t, 2))(1L)), l_353, ((VECTOR(int16_t, 4))(0x7611L)))).s9f)).odd) <= 65534UL) , l_477[1])));
                    l_395 = 0x38B7BDB8L;
                    if (l_200)
                        break;
                }
            }
        }
        if (l_201.s7)
            break;
        for (p_1067->g_245 = (-19); (p_1067->g_245 != 3); p_1067->g_245 = safe_add_func_int8_t_s_s(p_1067->g_245, 1))
        { /* block id: 249 */
            struct S0 ***l_490 = (void*)0;
            int32_t l_501 = 0x2D07874BL;
            int32_t l_518 = 0x707E964CL;
            int32_t l_519 = 0x0E779B2AL;
            int32_t l_520 = (-1L);
            int32_t l_521 = 0L;
            int32_t l_522 = (-7L);
            int32_t l_523 = 0x33EE6935L;
            int32_t l_524 = 0x24948B9CL;
            int32_t l_525 = 9L;
            int32_t l_527 = (-2L);
            int32_t l_528 = 0x587F193EL;
            int32_t l_529[10][7] = {{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L},{0x169E91AEL,1L,6L,0x1519BB33L,1L,0x1519BB33L,6L}};
            struct S5 *l_536[5];
            int32_t **l_538 = &p_1067->g_186;
            int i, j;
            for (i = 0; i < 5; i++)
                l_536[i] = &p_1067->g_537;
            for (p_1067->g_180.f1.f2 = 9; (p_1067->g_180.f1.f2 < 38); p_1067->g_180.f1.f2 = safe_add_func_uint32_t_u_u(p_1067->g_180.f1.f2, 1))
            { /* block id: 252 */
                uint16_t *l_502[9] = {(void*)0,&p_1067->g_95[0],(void*)0,(void*)0,&p_1067->g_95[0],(void*)0,(void*)0,&p_1067->g_95[0],(void*)0};
                VECTOR(int16_t, 16) l_509 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x757CL), 0x757CL), 0x757CL, 0L, 0x757CL, (VECTOR(int16_t, 2))(0L, 0x757CL), (VECTOR(int16_t, 2))(0L, 0x757CL), 0L, 0x757CL, 0L, 0x757CL);
                int32_t l_513[10] = {0x752C19E1L,0x26A0916CL,5L,0x26A0916CL,0x752C19E1L,0x752C19E1L,0x26A0916CL,5L,0x26A0916CL,0x752C19E1L};
                uint32_t l_514 = 4294967292UL;
                int32_t *l_535 = &l_522;
                int i;
                l_368[3][3] = (p_80 | (p_1067->g_484[2][1] , (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((p_1067->g_489 , ((l_258 = l_404) != l_490)) , ((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((-10L), l_501)) & (((--p_1067->g_95[0]) <= ((VECTOR(int16_t, 8))((safe_mod_func_uint64_t_u_u(((l_513[2] = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_509.s43)).hi, ((p_1067->g_510 != (safe_mod_func_uint16_t_u_u(0UL, 9UL))) ^ l_509.sa)))) > l_514), 0xF3C766EC97A6BF5EL)), ((VECTOR(int16_t, 2))(0x1CE3L)), 0x4CDEL, 0x3DDFL, 0L, 1L, 0x69FFL)).s3) & l_509.s3)) == 1UL), p_81)) ^ p_80), 7)), 5UL)), 3UL)) , 65534UL)), 9)) , (*p_78)), l_342.s4))));
                for (p_1067->g_235.f6 = 0; (p_1067->g_235.f6 != 1); p_1067->g_235.f6++)
                { /* block id: 259 */
                    int32_t *l_517[10];
                    int32_t l_526 = 0L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_517[i] = &l_200;
                    ++l_530;
                    (*p_1067->g_534) = p_1067->g_533;
                }
                l_196 &= ((*l_535) = l_183.s0);
                (*l_535) ^= ((void*)0 == l_536[3]);
            }
            (*l_538) = p_82;
            if (l_342.sa)
            { /* block id: 268 */
                int32_t *l_539 = &l_528;
                (*l_539) = l_368[2][1];
                if ((atomic_inc(&p_1067->g_atomic_input[90 * get_linear_group_id() + 22]) == 1))
                { /* block id: 271 */
                    uint32_t l_540 = 1UL;
                    struct S5 l_543 = {-2L,1UL,{0xA8DEL,{0x6CBB455AL,0x65D70064L,4294967294UL,-1L},{0x3C34368CL,0x1D5F6ECAL,7UL,2L},1L,0x48788AF495806751L}};/* VOLATILE GLOBAL l_543 */
                    uint32_t l_544[7] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
                    int16_t l_545 = (-8L);
                    int i;
                    --l_540;
                    l_545 &= (l_544[6] |= (l_543 , 0x30FF8123L));
                    unsigned int result = 0;
                    result += l_540;
                    result += l_543.f0;
                    result += l_543.f1;
                    result += l_543.f2.f0;
                    result += l_543.f2.f1.f0;
                    result += l_543.f2.f1.f1;
                    result += l_543.f2.f1.f2;
                    result += l_543.f2.f1.f3;
                    result += l_543.f2.f2.f0;
                    result += l_543.f2.f2.f1;
                    result += l_543.f2.f2.f2;
                    result += l_543.f2.f2.f3;
                    result += l_543.f2.f3;
                    result += l_543.f2.f4;
                    int l_544_i0;
                    for (l_544_i0 = 0; l_544_i0 < 7; l_544_i0++) {
                        result += l_544[l_544_i0];
                    }
                    result += l_545;
                    atomic_add(&p_1067->g_special_values[90 * get_linear_group_id() + 22], result);
                }
                else
                { /* block id: 275 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 278 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1067->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[(safe_mod_func_uint32_t_u_u(p_1067->g_533.f0, 10))][(safe_mod_func_uint32_t_u_u(p_1067->tid, 15))]));
            }
        }
        l_547 = p_82;
    }
    return l_548[2][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_69 p_1067->g_67 p_1067->g_2 p_1067->g_119
 * writes: p_1067->g_69 p_1067->g_2
 */
int8_t * func_83(int8_t * p_84, uint64_t  p_85, uint32_t  p_86, int64_t  p_87, int8_t * p_88, struct S7 * p_1067)
{ /* block id: 27 */
    int16_t l_113 = 2L;
    VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(0x355D27DBL, 0x62609B7AL);
    int i;
    for (p_1067->g_69 = (-1); (p_1067->g_69 <= 10); p_1067->g_69++)
    { /* block id: 30 */
        int32_t *l_104 = (void*)0;
        int32_t *l_105 = &p_1067->g_67[1][0];
        int32_t *l_106 = &p_1067->g_67[1][0];
        int32_t l_107[2];
        int32_t *l_108 = &p_1067->g_67[1][0];
        int32_t *l_109 = &l_107[0];
        int32_t *l_110 = &l_107[0];
        int32_t *l_111 = &p_1067->g_67[0][4];
        int32_t *l_112[10] = {&p_1067->g_13[1][4][7],(void*)0,&p_1067->g_67[1][0],(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][7],(void*)0,&p_1067->g_67[1][0],(void*)0,&p_1067->g_13[1][4][7]};
        uint8_t l_115 = 0xBCL;
        int8_t *l_118 = &p_1067->g_69;
        int i;
        for (i = 0; i < 2; i++)
            l_107[i] = 0x32EC2C21L;
        p_1067->g_2 ^= (+p_1067->g_67[1][0]);
        --l_115;
        return l_118;
    }
    return p_1067->g_119[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1067->g_9
 * writes:
 */
uint64_t  func_90(int64_t  p_91, int64_t  p_92, uint16_t  p_93, struct S7 * p_1067)
{ /* block id: 23 */
    struct S3 *l_98 = (void*)0;
    struct S3 **l_99 = &l_98;
    int32_t l_100 = 0x11CAA3E2L;
    (*l_99) = l_98;
    l_100 &= p_1067->g_9[3][0][1];
    return p_92;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S7 c_1068;
    struct S7* p_1067 = &c_1068;
    struct S7 c_1069 = {
        3L, // p_1067->g_2
        1L, // p_1067->g_3
        0x69934B0BL, // p_1067->g_6
        0x66B17B72L, // p_1067->g_7
        1L, // p_1067->g_8
        {{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}},{{(-10L),0x49A01C77L,0x268F62C4L},{(-10L),0x49A01C77L,0x268F62C4L}}}, // p_1067->g_9
        0x0477AE27L, // p_1067->g_10
        0L, // p_1067->g_11
        0x2F6082F4L, // p_1067->g_12
        {{{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL}},{{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL},{1L,0x20104353L,0x48E01AFEL,0x53709E8EL,0x2B5BF7C2L,0x2B5BF7C2L,0x53709E8EL,0x48E01AFEL}}}, // p_1067->g_13
        (VECTOR(int32_t, 16))(0x5734895CL, (VECTOR(int32_t, 4))(0x5734895CL, (VECTOR(int32_t, 2))(0x5734895CL, 0x1A97A8D1L), 0x1A97A8D1L), 0x1A97A8D1L, 0x5734895CL, 0x1A97A8D1L, (VECTOR(int32_t, 2))(0x5734895CL, 0x1A97A8D1L), (VECTOR(int32_t, 2))(0x5734895CL, 0x1A97A8D1L), 0x5734895CL, 0x1A97A8D1L, 0x5734895CL, 0x1A97A8D1L), // p_1067->g_17
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x2AL), 0x2AL), 0x2AL, 0UL, 0x2AL), // p_1067->g_63
        (VECTOR(uint8_t, 2))(0xF9L, 252UL), // p_1067->g_64
        {{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L},{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L},{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L},{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L},{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L},{0x738A40F9L,0x738A40F9L,(-7L),7L,0x7660C929L}}, // p_1067->g_67
        (-1L), // p_1067->g_69
        (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x4462F11252BC438EL), 0x4462F11252BC438EL), 0x4462F11252BC438EL, (-4L), 0x4462F11252BC438EL, (VECTOR(int64_t, 2))((-4L), 0x4462F11252BC438EL), (VECTOR(int64_t, 2))((-4L), 0x4462F11252BC438EL), (-4L), 0x4462F11252BC438EL, (-4L), 0x4462F11252BC438EL), // p_1067->g_94
        {0xDCB7L}, // p_1067->g_95
        (void*)0, // p_1067->g_103
        {&p_1067->g_69,&p_1067->g_69,&p_1067->g_69}, // p_1067->g_119
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x39519D29D4CF2364L), 0x39519D29D4CF2364L), // p_1067->g_159
        {0x4955L,{0x2477A056L,0x4A7D67C4L,4UL,0x1F002BF4545E75F0L},{0x5BD57F1BL,1L,0xB518762AL,0L},4L,0x9FBB45EB1093934FL}, // p_1067->g_172
        &p_1067->g_172, // p_1067->g_176
        {0xBDD4L,{1L,-1L,0x668A93EDL,1L},{1L,-1L,0x64E550A7L,1L},0x0C098CBDL,9UL}, // p_1067->g_178
        {0x0083L,{0x65BC4767L,0L,0xBD136BF0L,0x418026454160E171L},{0x2FFDF365L,0x0EE95946L,4294967288UL,0x7A9163CD058DED1CL},-2L,18446744073709551615UL}, // p_1067->g_180
        &p_1067->g_180, // p_1067->g_179
        &p_1067->g_67[1][1], // p_1067->g_186
        &p_1067->g_186, // p_1067->g_185
        {-6L,0xC40DF2919841E669L,0x7C8D7184L,0x2C9BB6F5C2226265L,0x6A667620L,0x4B1BB3E4L}, // p_1067->g_187
        &p_1067->g_187, // p_1067->g_188
        &p_1067->g_186, // p_1067->g_223
        {{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L},{0x0C5AEF02EE0E000EL,-2L,0x0436ECE7L,{0x4066E181E8E284A5L,0x7E6AA0FA19F6DDA7L,0x67F09A42L,0L,4294967295UL,0x4E01BCEAL},0UL,0xD9F60875L,0x1C7195CB3C5C33FCL,7L}}, // p_1067->g_225
        {{-1L,3UL,9UL,4L,0x3CF3447AL,1L}}, // p_1067->g_228
        {0x798C2746B81B9BB4L,0xEE753C971A0A197FL,1UL,0x6A1822A156F8766CL,0x97C8A839L,0L}, // p_1067->g_229
        {0x2ABB20481DE10863L,0x08620673L,3UL,{0x2289612D35162C1FL,0x2B386482958C2794L,0xBEF7379AL,-9L,0x970256F4L,0x02127C1FL},0x03L,0x89F36769L,0x6BECDB6F072E3335L,0x6DD22A97L}, // p_1067->g_234
        {0x8A1A81AF41BFAFFBL,0x25159711L,1UL,{0x598FD706E587C2F7L,0x7D65FC68337E1C1FL,4294967295UL,0x38100C5AB965B373L,0xAFE914E7L,0L},0xC6L,0x86DBEE4DL,-2L,0L}, // p_1067->g_235
        {&p_1067->g_234,&p_1067->g_234,&p_1067->g_234,&p_1067->g_234}, // p_1067->g_233
        {0L,18446744073709551614UL,0x44909103L}, // p_1067->g_243
        0x4E41395B5183514EL, // p_1067->g_245
        (void*)0, // p_1067->g_249
        &p_1067->g_249, // p_1067->g_250
        {9L,18446744073709551615UL,1UL}, // p_1067->g_261
        {{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L},{0x47B47D4CL,-7L,0x14C7D381L,0L},{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L},{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L},{0x47B47D4CL,-7L,0x14C7D381L,0L},{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L},{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L},{0x47B47D4CL,-7L,0x14C7D381L,0L},{-5L,1L,0x903CBE5BL,0x6F81E7EB0D783281L}}, // p_1067->g_290
        (VECTOR(int32_t, 2))(0x3CF38F01L, 0L), // p_1067->g_292
        &p_1067->g_119[0], // p_1067->g_323
        &p_1067->g_323, // p_1067->g_322
        (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x816B16BDFAA104E2L), 0x816B16BDFAA104E2L), 0x816B16BDFAA104E2L, 18446744073709551609UL, 0x816B16BDFAA104E2L, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x816B16BDFAA104E2L), (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x816B16BDFAA104E2L), 18446744073709551609UL, 0x816B16BDFAA104E2L, 18446744073709551609UL, 0x816B16BDFAA104E2L), // p_1067->g_343
        (VECTOR(uint64_t, 8))(0x014085F8C4AC007FL, (VECTOR(uint64_t, 4))(0x014085F8C4AC007FL, (VECTOR(uint64_t, 2))(0x014085F8C4AC007FL, 6UL), 6UL), 6UL, 0x014085F8C4AC007FL, 6UL), // p_1067->g_344
        (VECTOR(uint64_t, 16))(0x78A989C91ABEBC23L, (VECTOR(uint64_t, 4))(0x78A989C91ABEBC23L, (VECTOR(uint64_t, 2))(0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL), 0x82CB2F88E1740D2DL), 0x82CB2F88E1740D2DL, 0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL, (VECTOR(uint64_t, 2))(0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL), (VECTOR(uint64_t, 2))(0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL), 0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL, 0x78A989C91ABEBC23L, 0x82CB2F88E1740D2DL), // p_1067->g_345
        (void*)0, // p_1067->g_351
        (void*)0, // p_1067->g_356
        &p_1067->g_67[5][2], // p_1067->g_358
        {-1L,0xB0039A606B94084DL,{0x6275L,{0L,8L,4294967295UL,0x548A9DC16A3E06B2L},{-1L,0x27BF2785L,0xC50F4389L,0x07A36D73A02E538EL},0x27D77C0FL,0xA14E77CB0488DA91L}}, // p_1067->g_384
        {0x2121L,0xF8510DB3CA89DE9EL,4294967290UL}, // p_1067->g_385
        (void*)0, // p_1067->g_389
        (void*)0, // p_1067->g_390
        {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1067->g_391
        {{&p_1067->g_13[0][3][6],&p_1067->g_13[1][1][2],&p_1067->g_13[0][3][6],&p_1067->g_13[0][3][6],&p_1067->g_13[1][1][2],&p_1067->g_13[0][3][6]},{&p_1067->g_13[0][3][6],&p_1067->g_13[1][1][2],&p_1067->g_13[0][3][6],&p_1067->g_13[0][3][6],&p_1067->g_13[1][1][2],&p_1067->g_13[0][3][6]}}, // p_1067->g_392
        (void*)0, // p_1067->g_393
        (void*)0, // p_1067->g_394
        &p_1067->g_67[1][0], // p_1067->g_396
        &p_1067->g_67[1][0], // p_1067->g_400
        &p_1067->g_385.f0, // p_1067->g_406
        (void*)0, // p_1067->g_409
        {1L,18446744073709551608UL,{0xBF99L,{0L,8L,0xC7087AEAL,0L},{0L,5L,8UL,0L},-3L,3UL}}, // p_1067->g_411
        &p_1067->g_406, // p_1067->g_459
        &p_1067->g_459, // p_1067->g_458
        {{{-8L,0x271808C47986C8E0L,0x7606873AL},{-8L,0x271808C47986C8E0L,0x7606873AL}},{{-8L,0x271808C47986C8E0L,0x7606873AL},{-8L,0x271808C47986C8E0L,0x7606873AL}},{{-8L,0x271808C47986C8E0L,0x7606873AL},{-8L,0x271808C47986C8E0L,0x7606873AL}}}, // p_1067->g_484
        {9L,0x0A8F3293L,4UL,-5L}, // p_1067->g_489
        0xC71CL, // p_1067->g_510
        {0x1D127D2EL,0x6A16B913L,0xE539E432L,-1L}, // p_1067->g_533
        &p_1067->g_411.f2.f2, // p_1067->g_534
        {-1L,0x143337A952A907ACL,{0x0AD0L,{0x47261C93L,5L,4294967295UL,-1L},{0x5142E6EFL,0x1F05BEA7L,0x183298E7L,1L},0x39326AA5L,9UL}}, // p_1067->g_537
        (VECTOR(uint32_t, 2))(3UL, 1UL), // p_1067->g_552
        (VECTOR(uint64_t, 8))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 1UL), 1UL), 1UL, 6UL, 1UL), // p_1067->g_553
        (VECTOR(uint64_t, 4))(0x3DFF67717743CFE8L, (VECTOR(uint64_t, 2))(0x3DFF67717743CFE8L, 0UL), 0UL), // p_1067->g_556
        (VECTOR(uint64_t, 4))(0x9A179E563F0D8080L, (VECTOR(uint64_t, 2))(0x9A179E563F0D8080L, 0xFC44A9E430EFA31BL), 0xFC44A9E430EFA31BL), // p_1067->g_558
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_1067->g_559
        (void*)0, // p_1067->g_562
        {&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186}, // p_1067->g_582
        0x63L, // p_1067->g_585
        &p_1067->g_585, // p_1067->g_584
        {0x1E25L,0x0CA3C0572ED5FD24L,0xB24325F1L}, // p_1067->g_587
        {-1L,0UL,0xE3090D47L}, // p_1067->g_589
        &p_1067->g_229.f4, // p_1067->g_628
        &p_1067->g_628, // p_1067->g_627
        {0x16D03679L,0x617C2665L,0xC59ADDF0L,0L}, // p_1067->g_640
        (VECTOR(uint16_t, 4))(0x1D65L, (VECTOR(uint16_t, 2))(0x1D65L, 0x88B5L), 0x88B5L), // p_1067->g_651
        {0x5ADAC1C5A21466B4L,0UL,{1UL,{1L,0L,8UL,0x7B5A6B23EF9BD5BCL},{0x6F8C2663L,0x461CA23CL,4294967295UL,0x1EB1FA695E4FBBA2L},1L,0UL}}, // p_1067->g_661
        (void*)0, // p_1067->g_668
        &p_1067->g_229, // p_1067->g_669
        {0x3395E6F1CFB8D13DL,18446744073709551615UL,4294967294UL,1L,0xA0BB4CCEL,1L}, // p_1067->g_704
        &p_1067->g_229, // p_1067->g_705
        (VECTOR(uint16_t, 2))(65533UL, 65535UL), // p_1067->g_762
        &p_1067->g_385, // p_1067->g_766
        {{{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766}},{{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766}},{{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766}},{{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766}},{{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766},{&p_1067->g_766,&p_1067->g_766,&p_1067->g_766}}}, // p_1067->g_765
        {{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]},{(void*)0,&p_1067->g_13[1][4][7],&p_1067->g_13[1][4][4],&p_1067->g_67[2][3]}}, // p_1067->g_770
        &p_1067->g_67[0][4], // p_1067->g_772
        (VECTOR(int32_t, 2))(0x59A423D3L, 0x6E54A6B2L), // p_1067->g_773
        (VECTOR(uint64_t, 16))(0x6008B8C92EE1D8F3L, (VECTOR(uint64_t, 4))(0x6008B8C92EE1D8F3L, (VECTOR(uint64_t, 2))(0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L), 0x3D8CF2874FDE9C17L), 0x3D8CF2874FDE9C17L, 0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L, (VECTOR(uint64_t, 2))(0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L), (VECTOR(uint64_t, 2))(0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L), 0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L, 0x6008B8C92EE1D8F3L, 0x3D8CF2874FDE9C17L), // p_1067->g_799
        {-3L,0xEAE517667B55ED44L,0x53F94A14L}, // p_1067->g_822
        {{6L,0UL,1UL,5L,3UL,0x3F56E9C4L}}, // p_1067->g_842
        (void*)0, // p_1067->g_844
        {&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844,&p_1067->g_844}, // p_1067->g_843
        {4L,0x2E99F8978869D47BL,0x21C77193L}, // p_1067->g_845
        {{{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L}},{{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L}},{{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L}},{{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L}},{{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L},{7L,0x5D8F8DB4L,0L,1L,0x7A8C9572L}}}, // p_1067->g_867
        {{1L,0x25BBC89AF547E850L,0x65203447L,1L,0UL,0x5411A8B7L}}, // p_1067->g_872
        (VECTOR(int16_t, 2))(0L, 0x4EEAL), // p_1067->g_875
        (VECTOR(int16_t, 2))(0x6CA1L, (-7L)), // p_1067->g_886
        (VECTOR(int16_t, 16))(0x0A55L, (VECTOR(int16_t, 4))(0x0A55L, (VECTOR(int16_t, 2))(0x0A55L, 1L), 1L), 1L, 0x0A55L, 1L, (VECTOR(int16_t, 2))(0x0A55L, 1L), (VECTOR(int16_t, 2))(0x0A55L, 1L), 0x0A55L, 1L, 0x0A55L, 1L), // p_1067->g_891
        (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL), 0UL, 65534UL, 0UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), (VECTOR(uint16_t, 2))(65534UL, 0UL), 65534UL, 0UL, 65534UL, 0UL), // p_1067->g_893
        {{-2L,6UL,{1UL,{0x3675AAB5L,0x49CF7EF0L,8UL,0x077D541BAF7F7F33L},{0x1A93E74EL,0L,0x3A81D91CL,0x738E5676725DA3A8L},-1L,0xDC2AB5347FCD6802L}},{0x5A15AEC72DB6C7E9L,0UL,{0x7AF5L,{1L,1L,0xE03411D8L,0x2FB172F8ED530A28L},{0x23EAEA0BL,0x3EA78EF5L,4294967290UL,-1L},0x31268222L,0xB7FD6C9811A1DE42L}},{-2L,6UL,{1UL,{0x3675AAB5L,0x49CF7EF0L,8UL,0x077D541BAF7F7F33L},{0x1A93E74EL,0L,0x3A81D91CL,0x738E5676725DA3A8L},-1L,0xDC2AB5347FCD6802L}},{-2L,6UL,{1UL,{0x3675AAB5L,0x49CF7EF0L,8UL,0x077D541BAF7F7F33L},{0x1A93E74EL,0L,0x3A81D91CL,0x738E5676725DA3A8L},-1L,0xDC2AB5347FCD6802L}},{0x5A15AEC72DB6C7E9L,0UL,{0x7AF5L,{1L,1L,0xE03411D8L,0x2FB172F8ED530A28L},{0x23EAEA0BL,0x3EA78EF5L,4294967290UL,-1L},0x31268222L,0xB7FD6C9811A1DE42L}},{-2L,6UL,{1UL,{0x3675AAB5L,0x49CF7EF0L,8UL,0x077D541BAF7F7F33L},{0x1A93E74EL,0L,0x3A81D91CL,0x738E5676725DA3A8L},-1L,0xDC2AB5347FCD6802L}}}, // p_1067->g_929
        {{{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]}},{{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]}},{{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]}},{{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]}},{{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]},{&p_1067->g_929[2],&p_1067->g_929[2],&p_1067->g_929[2]}}}, // p_1067->g_928
        (void*)0, // p_1067->g_947
        (VECTOR(int32_t, 4))(0x69F3DA42L, (VECTOR(int32_t, 2))(0x69F3DA42L, 0x74005910L), 0x74005910L), // p_1067->g_980
        (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL), // p_1067->g_994
        (VECTOR(uint64_t, 16))(0x57529102B7B5F5A8L, (VECTOR(uint64_t, 4))(0x57529102B7B5F5A8L, (VECTOR(uint64_t, 2))(0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL), 0xF5B9E2E6CAEB55DEL), 0xF5B9E2E6CAEB55DEL, 0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL, (VECTOR(uint64_t, 2))(0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL), (VECTOR(uint64_t, 2))(0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL), 0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL, 0x57529102B7B5F5A8L, 0xF5B9E2E6CAEB55DEL), // p_1067->g_995
        0UL, // p_1067->g_998
        &p_1067->g_668, // p_1067->g_1013
        &p_1067->g_1013, // p_1067->g_1012
        (void*)0, // p_1067->g_1025
        &p_1067->g_1025, // p_1067->g_1024
        &p_1067->g_1024, // p_1067->g_1023
        {0UL,0x341E4461L,0x6F105649L,{0x4690766D61023600L,0x80DD27054F43C4F6L,4294967295UL,-1L,0xA8EDFBE9L,-7L},255UL,0x64A1DB79L,0x4654D51C0594F503L,1L}, // p_1067->g_1033
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_1067->g_1034
        {1UL,{0x67EC0294L,0x63492793L,4294967295UL,0x3E6FD575141A73CEL},{0x589CDB01L,-6L,0xA241BC28L,0x3330A01A6AAD5A83L},0x73800791L,0x57523A8302B489F8L}, // p_1067->g_1037
        {&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186,&p_1067->g_186}, // p_1067->g_1038
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0919L), 0x0919L), // p_1067->g_1049
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65528UL), 65528UL), // p_1067->g_1056
        {18446744073709551615UL,0x20AABAA3L,0x9F0D6DAFL,{4L,1UL,0x0929F0CDL,0L,4294967295UL,0x756ACECBL},6UL,0UL,1L,1L}, // p_1067->g_1057
        {0xE016B345DC5F42C1L,-1L,4294967288UL,{1L,18446744073709551607UL,4294967288UL,1L,4294967289UL,-2L},0xC4L,0xE55E53A3L,0L,0x0B6E510DL}, // p_1067->g_1062
        {&p_1067->g_186,&p_1067->g_186}, // p_1067->g_1064
        (void*)0, // p_1067->g_1065
        0, // p_1067->v_collective
        sequence_input[get_global_id(0)], // p_1067->global_0_offset
        sequence_input[get_global_id(1)], // p_1067->global_1_offset
        sequence_input[get_global_id(2)], // p_1067->global_2_offset
        sequence_input[get_local_id(0)], // p_1067->local_0_offset
        sequence_input[get_local_id(1)], // p_1067->local_1_offset
        sequence_input[get_local_id(2)], // p_1067->local_2_offset
        sequence_input[get_group_id(0)], // p_1067->group_0_offset
        sequence_input[get_group_id(1)], // p_1067->group_1_offset
        sequence_input[get_group_id(2)], // p_1067->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_1067->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1068 = c_1069;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1067);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1067->g_2, "p_1067->g_2", print_hash_value);
    transparent_crc(p_1067->g_3, "p_1067->g_3", print_hash_value);
    transparent_crc(p_1067->g_6, "p_1067->g_6", print_hash_value);
    transparent_crc(p_1067->g_7, "p_1067->g_7", print_hash_value);
    transparent_crc(p_1067->g_8, "p_1067->g_8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1067->g_9[i][j][k], "p_1067->g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1067->g_10, "p_1067->g_10", print_hash_value);
    transparent_crc(p_1067->g_11, "p_1067->g_11", print_hash_value);
    transparent_crc(p_1067->g_12, "p_1067->g_12", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1067->g_13[i][j][k], "p_1067->g_13[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1067->g_17.s0, "p_1067->g_17.s0", print_hash_value);
    transparent_crc(p_1067->g_17.s1, "p_1067->g_17.s1", print_hash_value);
    transparent_crc(p_1067->g_17.s2, "p_1067->g_17.s2", print_hash_value);
    transparent_crc(p_1067->g_17.s3, "p_1067->g_17.s3", print_hash_value);
    transparent_crc(p_1067->g_17.s4, "p_1067->g_17.s4", print_hash_value);
    transparent_crc(p_1067->g_17.s5, "p_1067->g_17.s5", print_hash_value);
    transparent_crc(p_1067->g_17.s6, "p_1067->g_17.s6", print_hash_value);
    transparent_crc(p_1067->g_17.s7, "p_1067->g_17.s7", print_hash_value);
    transparent_crc(p_1067->g_17.s8, "p_1067->g_17.s8", print_hash_value);
    transparent_crc(p_1067->g_17.s9, "p_1067->g_17.s9", print_hash_value);
    transparent_crc(p_1067->g_17.sa, "p_1067->g_17.sa", print_hash_value);
    transparent_crc(p_1067->g_17.sb, "p_1067->g_17.sb", print_hash_value);
    transparent_crc(p_1067->g_17.sc, "p_1067->g_17.sc", print_hash_value);
    transparent_crc(p_1067->g_17.sd, "p_1067->g_17.sd", print_hash_value);
    transparent_crc(p_1067->g_17.se, "p_1067->g_17.se", print_hash_value);
    transparent_crc(p_1067->g_17.sf, "p_1067->g_17.sf", print_hash_value);
    transparent_crc(p_1067->g_63.s0, "p_1067->g_63.s0", print_hash_value);
    transparent_crc(p_1067->g_63.s1, "p_1067->g_63.s1", print_hash_value);
    transparent_crc(p_1067->g_63.s2, "p_1067->g_63.s2", print_hash_value);
    transparent_crc(p_1067->g_63.s3, "p_1067->g_63.s3", print_hash_value);
    transparent_crc(p_1067->g_63.s4, "p_1067->g_63.s4", print_hash_value);
    transparent_crc(p_1067->g_63.s5, "p_1067->g_63.s5", print_hash_value);
    transparent_crc(p_1067->g_63.s6, "p_1067->g_63.s6", print_hash_value);
    transparent_crc(p_1067->g_63.s7, "p_1067->g_63.s7", print_hash_value);
    transparent_crc(p_1067->g_64.x, "p_1067->g_64.x", print_hash_value);
    transparent_crc(p_1067->g_64.y, "p_1067->g_64.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1067->g_67[i][j], "p_1067->g_67[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1067->g_69, "p_1067->g_69", print_hash_value);
    transparent_crc(p_1067->g_94.s0, "p_1067->g_94.s0", print_hash_value);
    transparent_crc(p_1067->g_94.s1, "p_1067->g_94.s1", print_hash_value);
    transparent_crc(p_1067->g_94.s2, "p_1067->g_94.s2", print_hash_value);
    transparent_crc(p_1067->g_94.s3, "p_1067->g_94.s3", print_hash_value);
    transparent_crc(p_1067->g_94.s4, "p_1067->g_94.s4", print_hash_value);
    transparent_crc(p_1067->g_94.s5, "p_1067->g_94.s5", print_hash_value);
    transparent_crc(p_1067->g_94.s6, "p_1067->g_94.s6", print_hash_value);
    transparent_crc(p_1067->g_94.s7, "p_1067->g_94.s7", print_hash_value);
    transparent_crc(p_1067->g_94.s8, "p_1067->g_94.s8", print_hash_value);
    transparent_crc(p_1067->g_94.s9, "p_1067->g_94.s9", print_hash_value);
    transparent_crc(p_1067->g_94.sa, "p_1067->g_94.sa", print_hash_value);
    transparent_crc(p_1067->g_94.sb, "p_1067->g_94.sb", print_hash_value);
    transparent_crc(p_1067->g_94.sc, "p_1067->g_94.sc", print_hash_value);
    transparent_crc(p_1067->g_94.sd, "p_1067->g_94.sd", print_hash_value);
    transparent_crc(p_1067->g_94.se, "p_1067->g_94.se", print_hash_value);
    transparent_crc(p_1067->g_94.sf, "p_1067->g_94.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1067->g_95[i], "p_1067->g_95[i]", print_hash_value);

    }
    transparent_crc(p_1067->g_159.x, "p_1067->g_159.x", print_hash_value);
    transparent_crc(p_1067->g_159.y, "p_1067->g_159.y", print_hash_value);
    transparent_crc(p_1067->g_159.z, "p_1067->g_159.z", print_hash_value);
    transparent_crc(p_1067->g_159.w, "p_1067->g_159.w", print_hash_value);
    transparent_crc(p_1067->g_172.f0, "p_1067->g_172.f0", print_hash_value);
    transparent_crc(p_1067->g_172.f1.f0, "p_1067->g_172.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_172.f1.f1, "p_1067->g_172.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_172.f1.f2, "p_1067->g_172.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_172.f1.f3, "p_1067->g_172.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_172.f2.f0, "p_1067->g_172.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_172.f2.f1, "p_1067->g_172.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_172.f2.f2, "p_1067->g_172.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_172.f2.f3, "p_1067->g_172.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_172.f3, "p_1067->g_172.f3", print_hash_value);
    transparent_crc(p_1067->g_172.f4, "p_1067->g_172.f4", print_hash_value);
    transparent_crc(p_1067->g_178.f0, "p_1067->g_178.f0", print_hash_value);
    transparent_crc(p_1067->g_178.f1.f0, "p_1067->g_178.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_178.f1.f1, "p_1067->g_178.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_178.f1.f2, "p_1067->g_178.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_178.f1.f3, "p_1067->g_178.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_178.f2.f0, "p_1067->g_178.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_178.f2.f1, "p_1067->g_178.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_178.f2.f2, "p_1067->g_178.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_178.f2.f3, "p_1067->g_178.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_178.f3, "p_1067->g_178.f3", print_hash_value);
    transparent_crc(p_1067->g_178.f4, "p_1067->g_178.f4", print_hash_value);
    transparent_crc(p_1067->g_180.f0, "p_1067->g_180.f0", print_hash_value);
    transparent_crc(p_1067->g_180.f1.f0, "p_1067->g_180.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_180.f1.f1, "p_1067->g_180.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_180.f1.f2, "p_1067->g_180.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_180.f1.f3, "p_1067->g_180.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_180.f2.f0, "p_1067->g_180.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_180.f2.f1, "p_1067->g_180.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_180.f2.f2, "p_1067->g_180.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_180.f2.f3, "p_1067->g_180.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_180.f3, "p_1067->g_180.f3", print_hash_value);
    transparent_crc(p_1067->g_180.f4, "p_1067->g_180.f4", print_hash_value);
    transparent_crc(p_1067->g_187.f0, "p_1067->g_187.f0", print_hash_value);
    transparent_crc(p_1067->g_187.f1, "p_1067->g_187.f1", print_hash_value);
    transparent_crc(p_1067->g_187.f2, "p_1067->g_187.f2", print_hash_value);
    transparent_crc(p_1067->g_187.f3, "p_1067->g_187.f3", print_hash_value);
    transparent_crc(p_1067->g_187.f4, "p_1067->g_187.f4", print_hash_value);
    transparent_crc(p_1067->g_187.f5, "p_1067->g_187.f5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1067->g_225[i].f0, "p_1067->g_225[i].f0", print_hash_value);
        transparent_crc(p_1067->g_225[i].f1, "p_1067->g_225[i].f1", print_hash_value);
        transparent_crc(p_1067->g_225[i].f2, "p_1067->g_225[i].f2", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f0, "p_1067->g_225[i].f3.f0", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f1, "p_1067->g_225[i].f3.f1", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f2, "p_1067->g_225[i].f3.f2", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f3, "p_1067->g_225[i].f3.f3", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f4, "p_1067->g_225[i].f3.f4", print_hash_value);
        transparent_crc(p_1067->g_225[i].f3.f5, "p_1067->g_225[i].f3.f5", print_hash_value);
        transparent_crc(p_1067->g_225[i].f4, "p_1067->g_225[i].f4", print_hash_value);
        transparent_crc(p_1067->g_225[i].f5, "p_1067->g_225[i].f5", print_hash_value);
        transparent_crc(p_1067->g_225[i].f6, "p_1067->g_225[i].f6", print_hash_value);
        transparent_crc(p_1067->g_225[i].f7, "p_1067->g_225[i].f7", print_hash_value);

    }
    transparent_crc(p_1067->g_228.f0.f0, "p_1067->g_228.f0.f0", print_hash_value);
    transparent_crc(p_1067->g_228.f0.f1, "p_1067->g_228.f0.f1", print_hash_value);
    transparent_crc(p_1067->g_228.f0.f2, "p_1067->g_228.f0.f2", print_hash_value);
    transparent_crc(p_1067->g_228.f0.f3, "p_1067->g_228.f0.f3", print_hash_value);
    transparent_crc(p_1067->g_228.f0.f4, "p_1067->g_228.f0.f4", print_hash_value);
    transparent_crc(p_1067->g_228.f0.f5, "p_1067->g_228.f0.f5", print_hash_value);
    transparent_crc(p_1067->g_229.f0, "p_1067->g_229.f0", print_hash_value);
    transparent_crc(p_1067->g_229.f1, "p_1067->g_229.f1", print_hash_value);
    transparent_crc(p_1067->g_229.f2, "p_1067->g_229.f2", print_hash_value);
    transparent_crc(p_1067->g_229.f3, "p_1067->g_229.f3", print_hash_value);
    transparent_crc(p_1067->g_229.f4, "p_1067->g_229.f4", print_hash_value);
    transparent_crc(p_1067->g_229.f5, "p_1067->g_229.f5", print_hash_value);
    transparent_crc(p_1067->g_234.f0, "p_1067->g_234.f0", print_hash_value);
    transparent_crc(p_1067->g_234.f1, "p_1067->g_234.f1", print_hash_value);
    transparent_crc(p_1067->g_234.f2, "p_1067->g_234.f2", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f0, "p_1067->g_234.f3.f0", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f1, "p_1067->g_234.f3.f1", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f2, "p_1067->g_234.f3.f2", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f3, "p_1067->g_234.f3.f3", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f4, "p_1067->g_234.f3.f4", print_hash_value);
    transparent_crc(p_1067->g_234.f3.f5, "p_1067->g_234.f3.f5", print_hash_value);
    transparent_crc(p_1067->g_234.f4, "p_1067->g_234.f4", print_hash_value);
    transparent_crc(p_1067->g_234.f5, "p_1067->g_234.f5", print_hash_value);
    transparent_crc(p_1067->g_234.f6, "p_1067->g_234.f6", print_hash_value);
    transparent_crc(p_1067->g_234.f7, "p_1067->g_234.f7", print_hash_value);
    transparent_crc(p_1067->g_235.f0, "p_1067->g_235.f0", print_hash_value);
    transparent_crc(p_1067->g_235.f1, "p_1067->g_235.f1", print_hash_value);
    transparent_crc(p_1067->g_235.f2, "p_1067->g_235.f2", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f0, "p_1067->g_235.f3.f0", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f1, "p_1067->g_235.f3.f1", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f2, "p_1067->g_235.f3.f2", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f3, "p_1067->g_235.f3.f3", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f4, "p_1067->g_235.f3.f4", print_hash_value);
    transparent_crc(p_1067->g_235.f3.f5, "p_1067->g_235.f3.f5", print_hash_value);
    transparent_crc(p_1067->g_235.f4, "p_1067->g_235.f4", print_hash_value);
    transparent_crc(p_1067->g_235.f5, "p_1067->g_235.f5", print_hash_value);
    transparent_crc(p_1067->g_235.f6, "p_1067->g_235.f6", print_hash_value);
    transparent_crc(p_1067->g_235.f7, "p_1067->g_235.f7", print_hash_value);
    transparent_crc(p_1067->g_243.f0, "p_1067->g_243.f0", print_hash_value);
    transparent_crc(p_1067->g_243.f1, "p_1067->g_243.f1", print_hash_value);
    transparent_crc(p_1067->g_243.f2, "p_1067->g_243.f2", print_hash_value);
    transparent_crc(p_1067->g_245, "p_1067->g_245", print_hash_value);
    transparent_crc(p_1067->g_261.f0, "p_1067->g_261.f0", print_hash_value);
    transparent_crc(p_1067->g_261.f1, "p_1067->g_261.f1", print_hash_value);
    transparent_crc(p_1067->g_261.f2, "p_1067->g_261.f2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1067->g_290[i].f0, "p_1067->g_290[i].f0", print_hash_value);
        transparent_crc(p_1067->g_290[i].f1, "p_1067->g_290[i].f1", print_hash_value);
        transparent_crc(p_1067->g_290[i].f2, "p_1067->g_290[i].f2", print_hash_value);
        transparent_crc(p_1067->g_290[i].f3, "p_1067->g_290[i].f3", print_hash_value);

    }
    transparent_crc(p_1067->g_292.x, "p_1067->g_292.x", print_hash_value);
    transparent_crc(p_1067->g_292.y, "p_1067->g_292.y", print_hash_value);
    transparent_crc(p_1067->g_343.s0, "p_1067->g_343.s0", print_hash_value);
    transparent_crc(p_1067->g_343.s1, "p_1067->g_343.s1", print_hash_value);
    transparent_crc(p_1067->g_343.s2, "p_1067->g_343.s2", print_hash_value);
    transparent_crc(p_1067->g_343.s3, "p_1067->g_343.s3", print_hash_value);
    transparent_crc(p_1067->g_343.s4, "p_1067->g_343.s4", print_hash_value);
    transparent_crc(p_1067->g_343.s5, "p_1067->g_343.s5", print_hash_value);
    transparent_crc(p_1067->g_343.s6, "p_1067->g_343.s6", print_hash_value);
    transparent_crc(p_1067->g_343.s7, "p_1067->g_343.s7", print_hash_value);
    transparent_crc(p_1067->g_343.s8, "p_1067->g_343.s8", print_hash_value);
    transparent_crc(p_1067->g_343.s9, "p_1067->g_343.s9", print_hash_value);
    transparent_crc(p_1067->g_343.sa, "p_1067->g_343.sa", print_hash_value);
    transparent_crc(p_1067->g_343.sb, "p_1067->g_343.sb", print_hash_value);
    transparent_crc(p_1067->g_343.sc, "p_1067->g_343.sc", print_hash_value);
    transparent_crc(p_1067->g_343.sd, "p_1067->g_343.sd", print_hash_value);
    transparent_crc(p_1067->g_343.se, "p_1067->g_343.se", print_hash_value);
    transparent_crc(p_1067->g_343.sf, "p_1067->g_343.sf", print_hash_value);
    transparent_crc(p_1067->g_344.s0, "p_1067->g_344.s0", print_hash_value);
    transparent_crc(p_1067->g_344.s1, "p_1067->g_344.s1", print_hash_value);
    transparent_crc(p_1067->g_344.s2, "p_1067->g_344.s2", print_hash_value);
    transparent_crc(p_1067->g_344.s3, "p_1067->g_344.s3", print_hash_value);
    transparent_crc(p_1067->g_344.s4, "p_1067->g_344.s4", print_hash_value);
    transparent_crc(p_1067->g_344.s5, "p_1067->g_344.s5", print_hash_value);
    transparent_crc(p_1067->g_344.s6, "p_1067->g_344.s6", print_hash_value);
    transparent_crc(p_1067->g_344.s7, "p_1067->g_344.s7", print_hash_value);
    transparent_crc(p_1067->g_345.s0, "p_1067->g_345.s0", print_hash_value);
    transparent_crc(p_1067->g_345.s1, "p_1067->g_345.s1", print_hash_value);
    transparent_crc(p_1067->g_345.s2, "p_1067->g_345.s2", print_hash_value);
    transparent_crc(p_1067->g_345.s3, "p_1067->g_345.s3", print_hash_value);
    transparent_crc(p_1067->g_345.s4, "p_1067->g_345.s4", print_hash_value);
    transparent_crc(p_1067->g_345.s5, "p_1067->g_345.s5", print_hash_value);
    transparent_crc(p_1067->g_345.s6, "p_1067->g_345.s6", print_hash_value);
    transparent_crc(p_1067->g_345.s7, "p_1067->g_345.s7", print_hash_value);
    transparent_crc(p_1067->g_345.s8, "p_1067->g_345.s8", print_hash_value);
    transparent_crc(p_1067->g_345.s9, "p_1067->g_345.s9", print_hash_value);
    transparent_crc(p_1067->g_345.sa, "p_1067->g_345.sa", print_hash_value);
    transparent_crc(p_1067->g_345.sb, "p_1067->g_345.sb", print_hash_value);
    transparent_crc(p_1067->g_345.sc, "p_1067->g_345.sc", print_hash_value);
    transparent_crc(p_1067->g_345.sd, "p_1067->g_345.sd", print_hash_value);
    transparent_crc(p_1067->g_345.se, "p_1067->g_345.se", print_hash_value);
    transparent_crc(p_1067->g_345.sf, "p_1067->g_345.sf", print_hash_value);
    transparent_crc(p_1067->g_384.f0, "p_1067->g_384.f0", print_hash_value);
    transparent_crc(p_1067->g_384.f1, "p_1067->g_384.f1", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f0, "p_1067->g_384.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f1.f0, "p_1067->g_384.f2.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f1.f1, "p_1067->g_384.f2.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f1.f2, "p_1067->g_384.f2.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f1.f3, "p_1067->g_384.f2.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f2.f0, "p_1067->g_384.f2.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f2.f1, "p_1067->g_384.f2.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f2.f2, "p_1067->g_384.f2.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f2.f3, "p_1067->g_384.f2.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f3, "p_1067->g_384.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_384.f2.f4, "p_1067->g_384.f2.f4", print_hash_value);
    transparent_crc(p_1067->g_385.f0, "p_1067->g_385.f0", print_hash_value);
    transparent_crc(p_1067->g_385.f1, "p_1067->g_385.f1", print_hash_value);
    transparent_crc(p_1067->g_385.f2, "p_1067->g_385.f2", print_hash_value);
    transparent_crc(p_1067->g_411.f0, "p_1067->g_411.f0", print_hash_value);
    transparent_crc(p_1067->g_411.f1, "p_1067->g_411.f1", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f0, "p_1067->g_411.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f1.f0, "p_1067->g_411.f2.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f1.f1, "p_1067->g_411.f2.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f1.f2, "p_1067->g_411.f2.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f1.f3, "p_1067->g_411.f2.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f2.f0, "p_1067->g_411.f2.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f2.f1, "p_1067->g_411.f2.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f2.f2, "p_1067->g_411.f2.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f2.f3, "p_1067->g_411.f2.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f3, "p_1067->g_411.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_411.f2.f4, "p_1067->g_411.f2.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1067->g_484[i][j].f0, "p_1067->g_484[i][j].f0", print_hash_value);
            transparent_crc(p_1067->g_484[i][j].f1, "p_1067->g_484[i][j].f1", print_hash_value);
            transparent_crc(p_1067->g_484[i][j].f2, "p_1067->g_484[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(p_1067->g_489.f0, "p_1067->g_489.f0", print_hash_value);
    transparent_crc(p_1067->g_489.f1, "p_1067->g_489.f1", print_hash_value);
    transparent_crc(p_1067->g_489.f2, "p_1067->g_489.f2", print_hash_value);
    transparent_crc(p_1067->g_489.f3, "p_1067->g_489.f3", print_hash_value);
    transparent_crc(p_1067->g_510, "p_1067->g_510", print_hash_value);
    transparent_crc(p_1067->g_533.f0, "p_1067->g_533.f0", print_hash_value);
    transparent_crc(p_1067->g_533.f1, "p_1067->g_533.f1", print_hash_value);
    transparent_crc(p_1067->g_533.f2, "p_1067->g_533.f2", print_hash_value);
    transparent_crc(p_1067->g_533.f3, "p_1067->g_533.f3", print_hash_value);
    transparent_crc(p_1067->g_537.f0, "p_1067->g_537.f0", print_hash_value);
    transparent_crc(p_1067->g_537.f1, "p_1067->g_537.f1", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f0, "p_1067->g_537.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f1.f0, "p_1067->g_537.f2.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f1.f1, "p_1067->g_537.f2.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f1.f2, "p_1067->g_537.f2.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f1.f3, "p_1067->g_537.f2.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f2.f0, "p_1067->g_537.f2.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f2.f1, "p_1067->g_537.f2.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f2.f2, "p_1067->g_537.f2.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f2.f3, "p_1067->g_537.f2.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f3, "p_1067->g_537.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_537.f2.f4, "p_1067->g_537.f2.f4", print_hash_value);
    transparent_crc(p_1067->g_552.x, "p_1067->g_552.x", print_hash_value);
    transparent_crc(p_1067->g_552.y, "p_1067->g_552.y", print_hash_value);
    transparent_crc(p_1067->g_553.s0, "p_1067->g_553.s0", print_hash_value);
    transparent_crc(p_1067->g_553.s1, "p_1067->g_553.s1", print_hash_value);
    transparent_crc(p_1067->g_553.s2, "p_1067->g_553.s2", print_hash_value);
    transparent_crc(p_1067->g_553.s3, "p_1067->g_553.s3", print_hash_value);
    transparent_crc(p_1067->g_553.s4, "p_1067->g_553.s4", print_hash_value);
    transparent_crc(p_1067->g_553.s5, "p_1067->g_553.s5", print_hash_value);
    transparent_crc(p_1067->g_553.s6, "p_1067->g_553.s6", print_hash_value);
    transparent_crc(p_1067->g_553.s7, "p_1067->g_553.s7", print_hash_value);
    transparent_crc(p_1067->g_556.x, "p_1067->g_556.x", print_hash_value);
    transparent_crc(p_1067->g_556.y, "p_1067->g_556.y", print_hash_value);
    transparent_crc(p_1067->g_556.z, "p_1067->g_556.z", print_hash_value);
    transparent_crc(p_1067->g_556.w, "p_1067->g_556.w", print_hash_value);
    transparent_crc(p_1067->g_558.x, "p_1067->g_558.x", print_hash_value);
    transparent_crc(p_1067->g_558.y, "p_1067->g_558.y", print_hash_value);
    transparent_crc(p_1067->g_558.z, "p_1067->g_558.z", print_hash_value);
    transparent_crc(p_1067->g_558.w, "p_1067->g_558.w", print_hash_value);
    transparent_crc(p_1067->g_559.s0, "p_1067->g_559.s0", print_hash_value);
    transparent_crc(p_1067->g_559.s1, "p_1067->g_559.s1", print_hash_value);
    transparent_crc(p_1067->g_559.s2, "p_1067->g_559.s2", print_hash_value);
    transparent_crc(p_1067->g_559.s3, "p_1067->g_559.s3", print_hash_value);
    transparent_crc(p_1067->g_559.s4, "p_1067->g_559.s4", print_hash_value);
    transparent_crc(p_1067->g_559.s5, "p_1067->g_559.s5", print_hash_value);
    transparent_crc(p_1067->g_559.s6, "p_1067->g_559.s6", print_hash_value);
    transparent_crc(p_1067->g_559.s7, "p_1067->g_559.s7", print_hash_value);
    transparent_crc(p_1067->g_585, "p_1067->g_585", print_hash_value);
    transparent_crc(p_1067->g_587.f0, "p_1067->g_587.f0", print_hash_value);
    transparent_crc(p_1067->g_587.f1, "p_1067->g_587.f1", print_hash_value);
    transparent_crc(p_1067->g_587.f2, "p_1067->g_587.f2", print_hash_value);
    transparent_crc(p_1067->g_589.f0, "p_1067->g_589.f0", print_hash_value);
    transparent_crc(p_1067->g_589.f1, "p_1067->g_589.f1", print_hash_value);
    transparent_crc(p_1067->g_589.f2, "p_1067->g_589.f2", print_hash_value);
    transparent_crc(p_1067->g_640.f0, "p_1067->g_640.f0", print_hash_value);
    transparent_crc(p_1067->g_640.f1, "p_1067->g_640.f1", print_hash_value);
    transparent_crc(p_1067->g_640.f2, "p_1067->g_640.f2", print_hash_value);
    transparent_crc(p_1067->g_640.f3, "p_1067->g_640.f3", print_hash_value);
    transparent_crc(p_1067->g_651.x, "p_1067->g_651.x", print_hash_value);
    transparent_crc(p_1067->g_651.y, "p_1067->g_651.y", print_hash_value);
    transparent_crc(p_1067->g_651.z, "p_1067->g_651.z", print_hash_value);
    transparent_crc(p_1067->g_651.w, "p_1067->g_651.w", print_hash_value);
    transparent_crc(p_1067->g_661.f0, "p_1067->g_661.f0", print_hash_value);
    transparent_crc(p_1067->g_661.f1, "p_1067->g_661.f1", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f0, "p_1067->g_661.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f1.f0, "p_1067->g_661.f2.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f1.f1, "p_1067->g_661.f2.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f1.f2, "p_1067->g_661.f2.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f1.f3, "p_1067->g_661.f2.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f2.f0, "p_1067->g_661.f2.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f2.f1, "p_1067->g_661.f2.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f2.f2, "p_1067->g_661.f2.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f2.f3, "p_1067->g_661.f2.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f3, "p_1067->g_661.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_661.f2.f4, "p_1067->g_661.f2.f4", print_hash_value);
    transparent_crc(p_1067->g_704.f0, "p_1067->g_704.f0", print_hash_value);
    transparent_crc(p_1067->g_704.f1, "p_1067->g_704.f1", print_hash_value);
    transparent_crc(p_1067->g_704.f2, "p_1067->g_704.f2", print_hash_value);
    transparent_crc(p_1067->g_704.f3, "p_1067->g_704.f3", print_hash_value);
    transparent_crc(p_1067->g_704.f4, "p_1067->g_704.f4", print_hash_value);
    transparent_crc(p_1067->g_704.f5, "p_1067->g_704.f5", print_hash_value);
    transparent_crc(p_1067->g_762.x, "p_1067->g_762.x", print_hash_value);
    transparent_crc(p_1067->g_762.y, "p_1067->g_762.y", print_hash_value);
    transparent_crc(p_1067->g_773.x, "p_1067->g_773.x", print_hash_value);
    transparent_crc(p_1067->g_773.y, "p_1067->g_773.y", print_hash_value);
    transparent_crc(p_1067->g_799.s0, "p_1067->g_799.s0", print_hash_value);
    transparent_crc(p_1067->g_799.s1, "p_1067->g_799.s1", print_hash_value);
    transparent_crc(p_1067->g_799.s2, "p_1067->g_799.s2", print_hash_value);
    transparent_crc(p_1067->g_799.s3, "p_1067->g_799.s3", print_hash_value);
    transparent_crc(p_1067->g_799.s4, "p_1067->g_799.s4", print_hash_value);
    transparent_crc(p_1067->g_799.s5, "p_1067->g_799.s5", print_hash_value);
    transparent_crc(p_1067->g_799.s6, "p_1067->g_799.s6", print_hash_value);
    transparent_crc(p_1067->g_799.s7, "p_1067->g_799.s7", print_hash_value);
    transparent_crc(p_1067->g_799.s8, "p_1067->g_799.s8", print_hash_value);
    transparent_crc(p_1067->g_799.s9, "p_1067->g_799.s9", print_hash_value);
    transparent_crc(p_1067->g_799.sa, "p_1067->g_799.sa", print_hash_value);
    transparent_crc(p_1067->g_799.sb, "p_1067->g_799.sb", print_hash_value);
    transparent_crc(p_1067->g_799.sc, "p_1067->g_799.sc", print_hash_value);
    transparent_crc(p_1067->g_799.sd, "p_1067->g_799.sd", print_hash_value);
    transparent_crc(p_1067->g_799.se, "p_1067->g_799.se", print_hash_value);
    transparent_crc(p_1067->g_799.sf, "p_1067->g_799.sf", print_hash_value);
    transparent_crc(p_1067->g_822.f0, "p_1067->g_822.f0", print_hash_value);
    transparent_crc(p_1067->g_822.f1, "p_1067->g_822.f1", print_hash_value);
    transparent_crc(p_1067->g_822.f2, "p_1067->g_822.f2", print_hash_value);
    transparent_crc(p_1067->g_842.f3, "p_1067->g_842.f3", print_hash_value);
    transparent_crc(p_1067->g_845.f0, "p_1067->g_845.f0", print_hash_value);
    transparent_crc(p_1067->g_845.f1, "p_1067->g_845.f1", print_hash_value);
    transparent_crc(p_1067->g_845.f2, "p_1067->g_845.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1067->g_867[i][j][k], "p_1067->g_867[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1067->g_875.x, "p_1067->g_875.x", print_hash_value);
    transparent_crc(p_1067->g_875.y, "p_1067->g_875.y", print_hash_value);
    transparent_crc(p_1067->g_886.x, "p_1067->g_886.x", print_hash_value);
    transparent_crc(p_1067->g_886.y, "p_1067->g_886.y", print_hash_value);
    transparent_crc(p_1067->g_891.s0, "p_1067->g_891.s0", print_hash_value);
    transparent_crc(p_1067->g_891.s1, "p_1067->g_891.s1", print_hash_value);
    transparent_crc(p_1067->g_891.s2, "p_1067->g_891.s2", print_hash_value);
    transparent_crc(p_1067->g_891.s3, "p_1067->g_891.s3", print_hash_value);
    transparent_crc(p_1067->g_891.s4, "p_1067->g_891.s4", print_hash_value);
    transparent_crc(p_1067->g_891.s5, "p_1067->g_891.s5", print_hash_value);
    transparent_crc(p_1067->g_891.s6, "p_1067->g_891.s6", print_hash_value);
    transparent_crc(p_1067->g_891.s7, "p_1067->g_891.s7", print_hash_value);
    transparent_crc(p_1067->g_891.s8, "p_1067->g_891.s8", print_hash_value);
    transparent_crc(p_1067->g_891.s9, "p_1067->g_891.s9", print_hash_value);
    transparent_crc(p_1067->g_891.sa, "p_1067->g_891.sa", print_hash_value);
    transparent_crc(p_1067->g_891.sb, "p_1067->g_891.sb", print_hash_value);
    transparent_crc(p_1067->g_891.sc, "p_1067->g_891.sc", print_hash_value);
    transparent_crc(p_1067->g_891.sd, "p_1067->g_891.sd", print_hash_value);
    transparent_crc(p_1067->g_891.se, "p_1067->g_891.se", print_hash_value);
    transparent_crc(p_1067->g_891.sf, "p_1067->g_891.sf", print_hash_value);
    transparent_crc(p_1067->g_893.s0, "p_1067->g_893.s0", print_hash_value);
    transparent_crc(p_1067->g_893.s1, "p_1067->g_893.s1", print_hash_value);
    transparent_crc(p_1067->g_893.s2, "p_1067->g_893.s2", print_hash_value);
    transparent_crc(p_1067->g_893.s3, "p_1067->g_893.s3", print_hash_value);
    transparent_crc(p_1067->g_893.s4, "p_1067->g_893.s4", print_hash_value);
    transparent_crc(p_1067->g_893.s5, "p_1067->g_893.s5", print_hash_value);
    transparent_crc(p_1067->g_893.s6, "p_1067->g_893.s6", print_hash_value);
    transparent_crc(p_1067->g_893.s7, "p_1067->g_893.s7", print_hash_value);
    transparent_crc(p_1067->g_893.s8, "p_1067->g_893.s8", print_hash_value);
    transparent_crc(p_1067->g_893.s9, "p_1067->g_893.s9", print_hash_value);
    transparent_crc(p_1067->g_893.sa, "p_1067->g_893.sa", print_hash_value);
    transparent_crc(p_1067->g_893.sb, "p_1067->g_893.sb", print_hash_value);
    transparent_crc(p_1067->g_893.sc, "p_1067->g_893.sc", print_hash_value);
    transparent_crc(p_1067->g_893.sd, "p_1067->g_893.sd", print_hash_value);
    transparent_crc(p_1067->g_893.se, "p_1067->g_893.se", print_hash_value);
    transparent_crc(p_1067->g_893.sf, "p_1067->g_893.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1067->g_929[i].f0, "p_1067->g_929[i].f0", print_hash_value);
        transparent_crc(p_1067->g_929[i].f1, "p_1067->g_929[i].f1", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f0, "p_1067->g_929[i].f2.f0", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f1.f0, "p_1067->g_929[i].f2.f1.f0", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f1.f1, "p_1067->g_929[i].f2.f1.f1", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f1.f2, "p_1067->g_929[i].f2.f1.f2", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f1.f3, "p_1067->g_929[i].f2.f1.f3", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f2.f0, "p_1067->g_929[i].f2.f2.f0", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f2.f1, "p_1067->g_929[i].f2.f2.f1", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f2.f2, "p_1067->g_929[i].f2.f2.f2", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f2.f3, "p_1067->g_929[i].f2.f2.f3", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f3, "p_1067->g_929[i].f2.f3", print_hash_value);
        transparent_crc(p_1067->g_929[i].f2.f4, "p_1067->g_929[i].f2.f4", print_hash_value);

    }
    transparent_crc(p_1067->g_980.x, "p_1067->g_980.x", print_hash_value);
    transparent_crc(p_1067->g_980.y, "p_1067->g_980.y", print_hash_value);
    transparent_crc(p_1067->g_980.z, "p_1067->g_980.z", print_hash_value);
    transparent_crc(p_1067->g_980.w, "p_1067->g_980.w", print_hash_value);
    transparent_crc(p_1067->g_994.s0, "p_1067->g_994.s0", print_hash_value);
    transparent_crc(p_1067->g_994.s1, "p_1067->g_994.s1", print_hash_value);
    transparent_crc(p_1067->g_994.s2, "p_1067->g_994.s2", print_hash_value);
    transparent_crc(p_1067->g_994.s3, "p_1067->g_994.s3", print_hash_value);
    transparent_crc(p_1067->g_994.s4, "p_1067->g_994.s4", print_hash_value);
    transparent_crc(p_1067->g_994.s5, "p_1067->g_994.s5", print_hash_value);
    transparent_crc(p_1067->g_994.s6, "p_1067->g_994.s6", print_hash_value);
    transparent_crc(p_1067->g_994.s7, "p_1067->g_994.s7", print_hash_value);
    transparent_crc(p_1067->g_994.s8, "p_1067->g_994.s8", print_hash_value);
    transparent_crc(p_1067->g_994.s9, "p_1067->g_994.s9", print_hash_value);
    transparent_crc(p_1067->g_994.sa, "p_1067->g_994.sa", print_hash_value);
    transparent_crc(p_1067->g_994.sb, "p_1067->g_994.sb", print_hash_value);
    transparent_crc(p_1067->g_994.sc, "p_1067->g_994.sc", print_hash_value);
    transparent_crc(p_1067->g_994.sd, "p_1067->g_994.sd", print_hash_value);
    transparent_crc(p_1067->g_994.se, "p_1067->g_994.se", print_hash_value);
    transparent_crc(p_1067->g_994.sf, "p_1067->g_994.sf", print_hash_value);
    transparent_crc(p_1067->g_995.s0, "p_1067->g_995.s0", print_hash_value);
    transparent_crc(p_1067->g_995.s1, "p_1067->g_995.s1", print_hash_value);
    transparent_crc(p_1067->g_995.s2, "p_1067->g_995.s2", print_hash_value);
    transparent_crc(p_1067->g_995.s3, "p_1067->g_995.s3", print_hash_value);
    transparent_crc(p_1067->g_995.s4, "p_1067->g_995.s4", print_hash_value);
    transparent_crc(p_1067->g_995.s5, "p_1067->g_995.s5", print_hash_value);
    transparent_crc(p_1067->g_995.s6, "p_1067->g_995.s6", print_hash_value);
    transparent_crc(p_1067->g_995.s7, "p_1067->g_995.s7", print_hash_value);
    transparent_crc(p_1067->g_995.s8, "p_1067->g_995.s8", print_hash_value);
    transparent_crc(p_1067->g_995.s9, "p_1067->g_995.s9", print_hash_value);
    transparent_crc(p_1067->g_995.sa, "p_1067->g_995.sa", print_hash_value);
    transparent_crc(p_1067->g_995.sb, "p_1067->g_995.sb", print_hash_value);
    transparent_crc(p_1067->g_995.sc, "p_1067->g_995.sc", print_hash_value);
    transparent_crc(p_1067->g_995.sd, "p_1067->g_995.sd", print_hash_value);
    transparent_crc(p_1067->g_995.se, "p_1067->g_995.se", print_hash_value);
    transparent_crc(p_1067->g_995.sf, "p_1067->g_995.sf", print_hash_value);
    transparent_crc(p_1067->g_998, "p_1067->g_998", print_hash_value);
    transparent_crc(p_1067->g_1033.f0, "p_1067->g_1033.f0", print_hash_value);
    transparent_crc(p_1067->g_1033.f1, "p_1067->g_1033.f1", print_hash_value);
    transparent_crc(p_1067->g_1033.f2, "p_1067->g_1033.f2", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f0, "p_1067->g_1033.f3.f0", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f1, "p_1067->g_1033.f3.f1", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f2, "p_1067->g_1033.f3.f2", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f3, "p_1067->g_1033.f3.f3", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f4, "p_1067->g_1033.f3.f4", print_hash_value);
    transparent_crc(p_1067->g_1033.f3.f5, "p_1067->g_1033.f3.f5", print_hash_value);
    transparent_crc(p_1067->g_1033.f4, "p_1067->g_1033.f4", print_hash_value);
    transparent_crc(p_1067->g_1033.f5, "p_1067->g_1033.f5", print_hash_value);
    transparent_crc(p_1067->g_1033.f6, "p_1067->g_1033.f6", print_hash_value);
    transparent_crc(p_1067->g_1033.f7, "p_1067->g_1033.f7", print_hash_value);
    transparent_crc(p_1067->g_1034.s0, "p_1067->g_1034.s0", print_hash_value);
    transparent_crc(p_1067->g_1034.s1, "p_1067->g_1034.s1", print_hash_value);
    transparent_crc(p_1067->g_1034.s2, "p_1067->g_1034.s2", print_hash_value);
    transparent_crc(p_1067->g_1034.s3, "p_1067->g_1034.s3", print_hash_value);
    transparent_crc(p_1067->g_1034.s4, "p_1067->g_1034.s4", print_hash_value);
    transparent_crc(p_1067->g_1034.s5, "p_1067->g_1034.s5", print_hash_value);
    transparent_crc(p_1067->g_1034.s6, "p_1067->g_1034.s6", print_hash_value);
    transparent_crc(p_1067->g_1034.s7, "p_1067->g_1034.s7", print_hash_value);
    transparent_crc(p_1067->g_1034.s8, "p_1067->g_1034.s8", print_hash_value);
    transparent_crc(p_1067->g_1034.s9, "p_1067->g_1034.s9", print_hash_value);
    transparent_crc(p_1067->g_1034.sa, "p_1067->g_1034.sa", print_hash_value);
    transparent_crc(p_1067->g_1034.sb, "p_1067->g_1034.sb", print_hash_value);
    transparent_crc(p_1067->g_1034.sc, "p_1067->g_1034.sc", print_hash_value);
    transparent_crc(p_1067->g_1034.sd, "p_1067->g_1034.sd", print_hash_value);
    transparent_crc(p_1067->g_1034.se, "p_1067->g_1034.se", print_hash_value);
    transparent_crc(p_1067->g_1034.sf, "p_1067->g_1034.sf", print_hash_value);
    transparent_crc(p_1067->g_1037.f0, "p_1067->g_1037.f0", print_hash_value);
    transparent_crc(p_1067->g_1037.f1.f0, "p_1067->g_1037.f1.f0", print_hash_value);
    transparent_crc(p_1067->g_1037.f1.f1, "p_1067->g_1037.f1.f1", print_hash_value);
    transparent_crc(p_1067->g_1037.f1.f2, "p_1067->g_1037.f1.f2", print_hash_value);
    transparent_crc(p_1067->g_1037.f1.f3, "p_1067->g_1037.f1.f3", print_hash_value);
    transparent_crc(p_1067->g_1037.f2.f0, "p_1067->g_1037.f2.f0", print_hash_value);
    transparent_crc(p_1067->g_1037.f2.f1, "p_1067->g_1037.f2.f1", print_hash_value);
    transparent_crc(p_1067->g_1037.f2.f2, "p_1067->g_1037.f2.f2", print_hash_value);
    transparent_crc(p_1067->g_1037.f2.f3, "p_1067->g_1037.f2.f3", print_hash_value);
    transparent_crc(p_1067->g_1037.f3, "p_1067->g_1037.f3", print_hash_value);
    transparent_crc(p_1067->g_1037.f4, "p_1067->g_1037.f4", print_hash_value);
    transparent_crc(p_1067->g_1049.x, "p_1067->g_1049.x", print_hash_value);
    transparent_crc(p_1067->g_1049.y, "p_1067->g_1049.y", print_hash_value);
    transparent_crc(p_1067->g_1049.z, "p_1067->g_1049.z", print_hash_value);
    transparent_crc(p_1067->g_1049.w, "p_1067->g_1049.w", print_hash_value);
    transparent_crc(p_1067->g_1056.x, "p_1067->g_1056.x", print_hash_value);
    transparent_crc(p_1067->g_1056.y, "p_1067->g_1056.y", print_hash_value);
    transparent_crc(p_1067->g_1056.z, "p_1067->g_1056.z", print_hash_value);
    transparent_crc(p_1067->g_1056.w, "p_1067->g_1056.w", print_hash_value);
    transparent_crc(p_1067->g_1057.f0, "p_1067->g_1057.f0", print_hash_value);
    transparent_crc(p_1067->g_1057.f1, "p_1067->g_1057.f1", print_hash_value);
    transparent_crc(p_1067->g_1057.f2, "p_1067->g_1057.f2", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f0, "p_1067->g_1057.f3.f0", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f1, "p_1067->g_1057.f3.f1", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f2, "p_1067->g_1057.f3.f2", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f3, "p_1067->g_1057.f3.f3", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f4, "p_1067->g_1057.f3.f4", print_hash_value);
    transparent_crc(p_1067->g_1057.f3.f5, "p_1067->g_1057.f3.f5", print_hash_value);
    transparent_crc(p_1067->g_1057.f4, "p_1067->g_1057.f4", print_hash_value);
    transparent_crc(p_1067->g_1057.f5, "p_1067->g_1057.f5", print_hash_value);
    transparent_crc(p_1067->g_1057.f6, "p_1067->g_1057.f6", print_hash_value);
    transparent_crc(p_1067->g_1057.f7, "p_1067->g_1057.f7", print_hash_value);
    transparent_crc(p_1067->g_1062.f0, "p_1067->g_1062.f0", print_hash_value);
    transparent_crc(p_1067->g_1062.f1, "p_1067->g_1062.f1", print_hash_value);
    transparent_crc(p_1067->g_1062.f2, "p_1067->g_1062.f2", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f0, "p_1067->g_1062.f3.f0", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f1, "p_1067->g_1062.f3.f1", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f2, "p_1067->g_1062.f3.f2", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f3, "p_1067->g_1062.f3.f3", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f4, "p_1067->g_1062.f3.f4", print_hash_value);
    transparent_crc(p_1067->g_1062.f3.f5, "p_1067->g_1062.f3.f5", print_hash_value);
    transparent_crc(p_1067->g_1062.f4, "p_1067->g_1062.f4", print_hash_value);
    transparent_crc(p_1067->g_1062.f5, "p_1067->g_1062.f5", print_hash_value);
    transparent_crc(p_1067->g_1062.f6, "p_1067->g_1062.f6", print_hash_value);
    transparent_crc(p_1067->g_1062.f7, "p_1067->g_1062.f7", print_hash_value);
    transparent_crc(p_1067->v_collective, "p_1067->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 90; i++)
            transparent_crc(p_1067->g_special_values[i + 90 * get_linear_group_id()], "p_1067->g_special_values[i + 90 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 90; i++)
            transparent_crc(p_1067->l_special_values[i], "p_1067->l_special_values[i]", print_hash_value);
    transparent_crc(p_1067->l_comm_values[get_linear_local_id()], "p_1067->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1067->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_1067->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
