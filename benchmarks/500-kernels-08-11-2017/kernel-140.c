// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 79,37,2 -l 79,1,1
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

__constant uint32_t permutations[10][79] = {
{70,59,35,65,17,71,37,50,57,68,13,62,48,42,26,8,76,6,49,64,56,22,20,45,31,78,58,60,15,67,12,4,21,23,63,69,19,25,46,3,75,7,9,18,72,38,11,24,53,36,33,54,61,52,34,43,1,32,77,16,40,73,44,10,51,41,66,74,39,14,29,55,0,28,30,47,27,2,5}, // permutation 0
{47,59,9,53,61,38,6,44,27,36,31,23,55,48,4,57,37,19,71,5,78,42,29,21,39,62,30,63,65,34,69,0,56,45,49,72,73,20,66,2,22,18,7,54,12,58,25,17,76,64,52,26,16,75,24,15,50,60,8,67,32,11,35,41,77,68,14,43,10,33,74,13,1,70,28,46,3,51,40}, // permutation 1
{8,75,54,7,15,43,22,32,34,19,40,21,23,16,10,27,17,45,49,48,2,35,18,13,30,53,74,9,68,77,11,60,55,67,58,65,36,57,50,44,69,29,47,12,39,56,64,66,59,24,61,4,73,5,72,6,42,70,33,28,63,1,46,41,25,14,20,3,78,37,76,26,38,52,71,51,31,62,0}, // permutation 2
{9,60,59,18,30,67,65,73,5,20,28,19,64,51,71,1,47,4,3,61,52,41,53,66,46,72,37,45,48,10,40,58,35,49,57,50,2,75,21,8,76,34,31,55,33,68,17,42,44,39,6,23,78,27,54,24,22,11,56,74,32,43,25,13,14,26,29,38,36,12,16,70,62,63,0,69,15,7,77}, // permutation 3
{51,73,43,74,25,6,62,65,14,69,33,16,64,20,4,9,70,37,44,57,3,21,66,15,76,34,7,10,28,31,72,38,71,42,40,50,36,22,29,19,49,60,56,63,13,53,67,41,54,68,61,12,75,47,39,78,0,77,18,1,48,5,8,24,45,52,35,59,27,46,30,32,55,2,11,26,58,23,17}, // permutation 4
{40,41,8,59,58,50,66,37,57,69,74,52,1,39,62,20,51,12,70,60,17,76,2,65,19,68,33,43,26,22,31,61,54,4,55,11,44,34,13,45,46,14,29,38,23,25,21,9,7,18,49,24,27,0,28,16,15,6,36,10,67,77,42,73,78,71,72,30,56,64,75,53,5,48,3,47,63,35,32}, // permutation 5
{60,15,25,19,11,46,10,63,7,73,55,29,72,36,43,59,47,71,42,21,26,0,77,44,76,52,9,18,61,20,66,17,64,32,51,57,56,40,41,12,78,50,49,33,24,4,23,75,45,31,6,3,27,2,62,70,34,69,58,5,74,16,37,54,68,53,14,48,8,22,65,39,35,30,1,28,38,67,13}, // permutation 6
{35,64,52,74,41,8,51,60,58,66,48,55,5,26,30,20,50,43,76,57,27,77,42,40,11,10,32,46,18,63,44,71,31,39,24,47,7,54,67,21,23,62,34,17,53,19,25,12,61,38,73,16,15,28,3,29,33,75,14,4,0,70,36,49,37,72,45,65,68,1,9,78,2,6,59,56,69,22,13}, // permutation 7
{49,35,73,2,72,16,26,34,76,21,77,54,4,53,46,33,50,29,60,75,36,8,66,38,68,55,3,13,57,24,61,58,14,6,41,30,9,44,43,15,22,48,5,52,20,45,31,71,37,70,10,65,1,19,39,28,11,69,40,25,74,56,78,62,63,12,18,67,17,59,32,42,23,0,64,7,27,47,51}, // permutation 8
{77,61,9,63,4,39,53,1,47,21,58,26,73,18,5,20,60,75,54,43,64,59,17,66,6,57,33,7,16,23,11,2,45,37,74,36,19,71,31,13,49,27,32,72,3,70,51,30,34,68,25,29,76,0,35,28,52,55,40,8,24,44,12,10,15,69,48,67,62,46,42,50,38,14,41,56,22,78,65} // permutation 9
};

// Seed: 3333354032

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int16_t  f3;
   int64_t  f4;
   int32_t  f5;
   uint32_t  f6;
   int16_t  f7;
   int64_t  f8;
};

struct S1 {
   int16_t  f0;
};

union U2 {
   uint32_t  f0;
   int32_t  f1;
};

struct S3 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    int32_t g_11[1];
    int32_t g_21;
    volatile int32_t g_24;
    volatile int32_t g_25;
    int32_t g_26[3][9];
    VECTOR(uint16_t, 2) g_50;
    VECTOR(uint16_t, 8) g_51;
    VECTOR(uint64_t, 16) g_52;
    union U2 g_60;
    union U2 * volatile g_59;
    int16_t g_66;
    int32_t *g_69;
    int32_t ** volatile g_68;
    struct S1 g_80;
    volatile VECTOR(uint64_t, 2) g_91;
    VECTOR(uint32_t, 4) g_101;
    uint64_t *g_109;
    uint64_t **g_108;
    struct S1 g_114;
    struct S1 g_116;
    int8_t g_181;
    struct S0 g_182;
    uint8_t g_198;
    volatile VECTOR(int32_t, 16) g_214;
    volatile int16_t g_250;
    volatile int16_t *g_249;
    volatile int16_t * volatile *g_248;
    volatile int64_t * volatile g_289;
    volatile int64_t * volatile * volatile g_288;
    int32_t ** volatile g_293;
    volatile VECTOR(int32_t, 2) g_316;
    VECTOR(int8_t, 8) g_330;
    union U2 *g_336;
    union U2 **g_335;
    union U2 ***g_334;
    int16_t **g_346;
    int16_t *** volatile g_345[3][2];
    VECTOR(int16_t, 4) g_380;
    int32_t * volatile g_383;
    int32_t * volatile g_390[6];
    int8_t g_398;
    uint8_t * volatile g_408;
    uint8_t * volatile *g_407;
    volatile VECTOR(uint16_t, 4) g_415;
    int8_t *g_475[2][1][2];
    int8_t **g_474;
    struct S1 *g_480;
    struct S1 **g_479;
    struct S1 ** volatile * volatile g_478;
    VECTOR(int8_t, 4) g_483;
    int64_t *g_521[10][3];
    volatile VECTOR(uint16_t, 16) g_551;
    volatile VECTOR(int32_t, 16) g_560;
    VECTOR(uint32_t, 2) g_575;
    volatile VECTOR(uint32_t, 4) g_578;
    volatile VECTOR(uint32_t, 16) g_580;
    VECTOR(uint64_t, 8) g_581;
    struct S0 * volatile g_585;
    int32_t ** volatile g_587[6];
    int32_t ** volatile g_588;
    int32_t ** volatile g_589;
    uint8_t g_590;
    volatile uint8_t g_623;
    uint64_t *** volatile g_628;
    int64_t *g_632;
    volatile VECTOR(int16_t, 16) g_633;
    VECTOR(int64_t, 4) g_644;
    int32_t ** volatile g_675;
    VECTOR(uint8_t, 2) g_681;
    VECTOR(int32_t, 8) g_698;
    VECTOR(int16_t, 4) g_705;
    VECTOR(int16_t, 16) g_709;
    volatile VECTOR(int32_t, 4) g_718;
    VECTOR(int8_t, 4) g_728;
    struct S1 ***g_742;
    union U2 ***g_750;
    union U2 ****g_749;
    volatile VECTOR(int16_t, 4) g_760;
    VECTOR(uint32_t, 4) g_764;
    VECTOR(int8_t, 4) g_765;
    VECTOR(int8_t, 16) g_786;
    VECTOR(uint8_t, 16) g_797;
    volatile uint8_t g_807;
    int32_t ** volatile g_829;
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
uint32_t  func_1(struct S3 * p_830);
int32_t  func_17(uint8_t  p_18, struct S3 * p_830);
uint64_t ** func_74(uint8_t  p_75, int16_t * p_76, int32_t ** p_77, uint64_t ** p_78, struct S3 * p_830);
int32_t ** func_83(int16_t * p_84, int32_t  p_85, struct S3 * p_830);
int64_t  func_94(uint8_t  p_95, uint64_t ** p_96, int32_t  p_97, uint8_t  p_98, struct S3 * p_830);
union U2  func_102(uint64_t ** p_103, int32_t ** p_104, struct S0  p_105, uint64_t ** p_106, union U2 * p_107, struct S3 * p_830);
struct S1 * func_130(int32_t ** p_131, uint64_t  p_132, struct S3 * p_830);
union U2 * func_136(uint64_t ** p_137, int8_t  p_138, uint64_t * p_139, struct S0  p_140, int64_t  p_141, struct S3 * p_830);
struct S0  func_143(uint64_t  p_144, uint32_t  p_145, uint8_t  p_146, union U2 * p_147, struct S3 * p_830);
int32_t  func_155(int32_t * p_156, uint64_t  p_157, struct S3 * p_830);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_830->g_5 p_830->g_2 p_830->l_comm_values p_830->g_11 p_830->g_68 p_830->g_479 p_830->g_480 p_830->g_588 p_830->g_69 p_830->g_675 p_830->g_589 p_830->g_334 p_830->g_335 p_830->g_336 p_830->g_60 p_830->g_4 p_830->g_483 p_830->g_632 p_830->g_182.f8 p_830->g_728 p_830->g_182.f7 p_830->g_26 p_830->g_60.f0 p_830->g_50 p_830->g_581 p_830->g_51 p_830->g_705 p_830->g_108 p_830->g_109 p_830->g_749 p_830->g_750 p_830->g_52 p_830->g_182.f5 p_830->g_585 p_830->g_182 p_830->g_786 p_830->g_765 p_830->g_21 p_830->g_807 p_830->g_198 p_830->g_829
 * writes: p_830->g_5 p_830->g_21 p_830->g_26 p_830->g_11 p_830->g_69 p_830->g_60.f0 p_830->g_66 p_830->g_480 p_830->g_114.f0 p_830->g_101 p_830->g_749 p_830->g_182.f6 p_830->g_198 p_830->g_182.f0 p_830->g_182.f5 p_830->g_182 p_830->g_60 p_830->g_807
 */
uint32_t  func_1(struct S3 * p_830)
{ /* block id: 4 */
    VECTOR(uint32_t, 4) l_685 = (VECTOR(uint32_t, 4))(0x9EF38C6DL, (VECTOR(uint32_t, 2))(0x9EF38C6DL, 1UL), 1UL);
    int32_t l_691 = 0x38AB331CL;
    VECTOR(int16_t, 16) l_710 = (VECTOR(int16_t, 16))(0x02ECL, (VECTOR(int16_t, 4))(0x02ECL, (VECTOR(int16_t, 2))(0x02ECL, 0x57A2L), 0x57A2L), 0x57A2L, 0x02ECL, 0x57A2L, (VECTOR(int16_t, 2))(0x02ECL, 0x57A2L), (VECTOR(int16_t, 2))(0x02ECL, 0x57A2L), 0x02ECL, 0x57A2L, 0x02ECL, 0x57A2L);
    VECTOR(int16_t, 4) l_711 = (VECTOR(int16_t, 4))(0x2D0DL, (VECTOR(int16_t, 2))(0x2D0DL, 6L), 6L);
    union U2 **l_747 = &p_830->g_336;
    uint64_t ***l_769 = &p_830->g_108;
    struct S0 *l_777 = &p_830->g_182;
    struct S0 **l_776[1][4];
    VECTOR(int64_t, 16) l_793 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x69C707C3D5CFE658L), 0x69C707C3D5CFE658L), 0x69C707C3D5CFE658L, (-1L), 0x69C707C3D5CFE658L, (VECTOR(int64_t, 2))((-1L), 0x69C707C3D5CFE658L), (VECTOR(int64_t, 2))((-1L), 0x69C707C3D5CFE658L), (-1L), 0x69C707C3D5CFE658L, (-1L), 0x69C707C3D5CFE658L);
    int32_t l_806 = 0x36F2C759L;
    int32_t l_814 = (-1L);
    int32_t l_815 = 0L;
    int64_t l_818 = (-7L);
    int32_t l_820 = 0x270F0A45L;
    uint8_t l_821 = 3UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_776[i][j] = &l_777;
    }
    for (p_830->g_5 = 0; (p_830->g_5 > 28); p_830->g_5 = safe_add_func_uint16_t_u_u(p_830->g_5, 5))
    { /* block id: 7 */
        int64_t l_13[2][6][3] = {{{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL}},{{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL},{0x62718B9628EAF608L,0x7C42FF18C9A01C77L,0x7D02268F62C4DF8EL}}};
        uint64_t l_14 = 0UL;
        VECTOR(uint32_t, 4) l_684 = (VECTOR(uint32_t, 4))(0x1BF23D45L, (VECTOR(uint32_t, 2))(0x1BF23D45L, 0x78B14327L), 0x78B14327L);
        uint16_t *l_706 = (void*)0;
        uint16_t *l_707[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_708 = 0x0A60L;
        int64_t **l_721 = &p_830->g_521[4][1];
        union U2 ****l_735 = &p_830->g_334;
        union U2 ****l_736 = &p_830->g_334;
        VECTOR(int16_t, 16) l_737 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x6BD5L), 0x6BD5L), 0x6BD5L, (-3L), 0x6BD5L, (VECTOR(int16_t, 2))((-3L), 0x6BD5L), (VECTOR(int16_t, 2))((-3L), 0x6BD5L), (-3L), 0x6BD5L, (-3L), 0x6BD5L);
        int32_t l_738 = 0x44B0F25CL;
        struct S1 ***l_741 = &p_830->g_479;
        struct S0 *l_755[7][5] = {{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0},{&p_830->g_182,(void*)0,&p_830->g_182,&p_830->g_182,(void*)0}};
        VECTOR(int16_t, 4) l_763 = (VECTOR(int16_t, 4))(0x3862L, (VECTOR(int16_t, 2))(0x3862L, 0x04E3L), 0x04E3L);
        int8_t l_771 = (-5L);
        union U2 *****l_789 = &l_735;
        uint8_t l_812 = 0xD3L;
        int32_t l_816 = 0x524BB243L;
        int32_t l_819[3];
        uint8_t *l_826[7];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_819[i] = 0x5CDCA015L;
        for (i = 0; i < 7; i++)
            l_826[i] = (void*)0;
        if ((safe_add_func_int64_t_s_s(p_830->g_2, p_830->l_comm_values[(safe_mod_func_uint32_t_u_u(p_830->tid, 79))])))
        { /* block id: 8 */
            int32_t *l_10 = &p_830->g_11[0];
            int32_t *l_12[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_14--;
        }
        else
        { /* block id: 10 */
            uint32_t l_683 = 4UL;
            int16_t *l_689 = &p_830->g_116.f0;
            int16_t **l_688 = &l_689;
            if (func_17(p_830->g_11[0], p_830))
            { /* block id: 295 */
                uint8_t l_678 = 252UL;
                int16_t *l_682 = &p_830->g_114.f0;
                int16_t ***l_690 = &p_830->g_346;
                (*p_830->g_69) ^= (((((*l_682) = (safe_sub_func_int16_t_s_s(l_678, (safe_mod_func_int8_t_s_s(0x23L, ((VECTOR(uint8_t, 8))(p_830->g_681.yxyyyxyy)).s2))))) ^ (l_683 && ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x6A6792E8L, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_684.xxwzwzzwwwwwwzzx)).sa1)).yxxx, ((VECTOR(uint32_t, 4))(l_685.yywz))))).ywzwzwwx, ((VECTOR(uint32_t, 16))(0xB88B63BFL, 4294967295UL, 0x0B25E65DL, p_830->g_644.y, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((safe_mul_func_int8_t_s_s((l_691 |= ((l_685.w , l_688) != ((*l_690) = &l_682))), (safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((~((*p_830->g_632) = (safe_rshift_func_int8_t_s_u((0L <= l_678), l_685.x)))), 0x70555E6BC01440DEL)), l_14)))) || l_678), l_691, ((VECTOR(uint16_t, 2))(8UL)), 65532UL, 1UL, 1UL, 0xBD9BL)), 0xBD59L, 0x13B6L, ((VECTOR(uint16_t, 4))(3UL)), 0UL, 0xF664L)).s1c, ((VECTOR(uint16_t, 2))(1UL))))).yyyy, (uint16_t)p_830->g_380.y, (uint16_t)p_830->g_91.x))))).yxwxwxwyzyyzwzzx, ((VECTOR(uint16_t, 16))(0x4404L))))).sc1)), ((VECTOR(uint32_t, 4))(0xD6AFA2EEL)), 1UL, 0x908E9641L, 0xC5AFAA56L, ((VECTOR(uint32_t, 2))(0UL)), 4294967292UL)).odd, ((VECTOR(uint32_t, 8))(4294967292UL))))).s26, ((VECTOR(uint32_t, 2))(3UL)), ((VECTOR(uint32_t, 2))(0x7CD219A3L))))), ((VECTOR(uint32_t, 4))(0xEDA2BF4EL)), 1UL)).s04)).yyxx)).zxzwxwywxxwwyxzy)).sfccd)).ywzzzxxwyyxxyxzy, ((VECTOR(uint32_t, 16))(4294967295UL))))).even)), 0xD3E06695L, ((VECTOR(uint32_t, 2))(4294967294UL)), 1UL, 2UL, ((VECTOR(uint32_t, 2))(0xB117A4A8L)), 1UL)).sc2cf, ((VECTOR(uint32_t, 4))(0UL))))).zzyyyxwyyzxwzzwz, ((VECTOR(uint32_t, 16))(0x44D9224FL))))).sa)) ^ 1L) | 3UL);
                if ((l_683 , ((**p_830->g_589) |= ((VECTOR(int32_t, 8))(p_830->g_698.s57161356)).s4)))
                { /* block id: 302 */
                    int32_t **l_699[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_699[i] = &p_830->g_69;
                    (*p_830->g_68) = &l_691;
                    for (l_683 = 27; (l_683 >= 36); l_683++)
                    { /* block id: 306 */
                        int32_t *l_702 = &l_691;
                        l_702 = (((***p_830->g_334) , p_830->g_4) , &l_691);
                        return p_830->g_483.x;
                    }
                }
                else
                { /* block id: 310 */
                    if ((atomic_inc(&p_830->g_atomic_input[29 * get_linear_group_id() + 26]) == 0))
                    { /* block id: 312 */
                        uint32_t l_703[3][10] = {{0x58F26A03L,0UL,0xA2EF1F4BL,0x948BDBB7L,0xA2EF1F4BL,0UL,0x58F26A03L,0UL,1UL,1UL},{0x58F26A03L,0UL,0xA2EF1F4BL,0x948BDBB7L,0xA2EF1F4BL,0UL,0x58F26A03L,0UL,1UL,1UL},{0x58F26A03L,0UL,0xA2EF1F4BL,0x948BDBB7L,0xA2EF1F4BL,0UL,0x58F26A03L,0UL,1UL,1UL}};
                        int64_t l_704 = (-1L);
                        int i, j;
                        l_704 = l_703[0][3];
                        unsigned int result = 0;
                        int l_703_i0, l_703_i1;
                        for (l_703_i0 = 0; l_703_i0 < 3; l_703_i0++) {
                            for (l_703_i1 = 0; l_703_i1 < 10; l_703_i1++) {
                                result += l_703[l_703_i0][l_703_i1];
                            }
                        }
                        result += l_704;
                        atomic_add(&p_830->g_special_values[29 * get_linear_group_id() + 26], result);
                    }
                    else
                    { /* block id: 314 */
                        (1 + 1);
                    }
                }
            }
            else
            { /* block id: 318 */
                (*p_830->g_69) = ((VECTOR(int32_t, 2))(0x235C5C76L, (-1L))).hi;
            }
        }
        if (((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x232F3820L, (-8L))), 0x32CE8B89L, 0x1AE21386L)).odd, (int32_t)(((VECTOR(int16_t, 2))(p_830->g_705.wz)).even && ((VECTOR(int16_t, 8))((!((l_708 = GROUP_DIVERGE(1, 1)) ^ (-1L))), 0x52E2L, 0x3E02L, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(1L, (-1L))).yxxxxyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_830->g_709.s69525a6a)).s13)).xyyxyxxx))))).s70, ((VECTOR(int16_t, 8))(l_710.s701d2fca)).s56, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_711.zywz)), ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_830->g_718.xwyx)))).w == ((FAKE_DIVERGE(p_830->group_1_offset, get_group_id(1), 10) != (safe_div_func_int16_t_s_s((l_721 == (p_830->g_182 , (void*)0)), (p_830->g_483.x || (((void*)0 != p_830->g_521[9][0]) != (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(p_830->g_728.xy)).yxyyyxyx))).s7, (0UL < ((0x6DF3L >= 0x2027L) == p_830->g_181)))) != 0x0C46L), (*p_830->g_632))), 5))))))) == l_684.z)), l_685.x)), l_710.s7)) && (**p_830->g_248)), (-6L), 0x66DCL, 0x2C09L)).s1020351764467401)).sf9, ((VECTOR(int16_t, 2))(1L)))))))), (-1L), 1L, (-5L))).s3), (int32_t)(**p_830->g_589)))), (-6L), 0x71BDBD70L)).even, ((VECTOR(int32_t, 2))((-10L)))))).odd)
        { /* block id: 323 */
            union U2 *****l_748[9];
            int32_t l_751 = 1L;
            int i;
            for (i = 0; i < 9; i++)
                l_748[i] = &l_735;
            (**p_830->g_588) |= (((safe_div_func_int64_t_s_s((*p_830->g_632), 0xDD5BEF80BDD17B9AL)) | 0x4BE32ACB7CED546AL) != (((((safe_mod_func_int8_t_s_s((FAKE_DIVERGE(p_830->global_1_offset, get_global_id(1), 10) | (l_738 &= (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_830->group_0_offset, get_group_id(0), 10), (GROUP_DIVERGE(0, 1) >= ((((+p_830->g_728.y) , l_735) != l_736) ^ ((VECTOR(int16_t, 16))(l_737.s6260b1693373810e)).s1)))))), (safe_mul_func_int8_t_s_s(l_710.sd, (l_711.x || ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(18446744073709551615UL, ((p_830->g_742 = l_741) == (void*)0), 0x9326AA5D2B5ACBE0L, 1UL)).zyyyxzzx)).s0))))) != l_737.s7) ^ p_830->g_182.f7) <= FAKE_DIVERGE(p_830->local_1_offset, get_local_id(1), 10)) >= 0x262F0F0CL));
            (*p_830->g_69) ^= ((safe_div_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(((p_830->g_101.w = p_830->g_60.f0) & ((!(-3L)) == (l_747 != (l_684.w , (*p_830->g_334))))), ((p_830->g_50.x , &p_830->g_334) == (p_830->g_749 = (p_830->g_581.s5 , (l_735 = &p_830->g_334)))))) || p_830->g_51.s6) == p_830->g_728.z), l_751)) ^ 0x39L);
        }
        else
        { /* block id: 331 */
            struct S0 *l_754 = &p_830->g_182;
            struct S0 **l_756 = &l_755[6][2];
            uint32_t *l_757 = &p_830->g_182.f6;
            int8_t *l_766 = (void*)0;
            int8_t *l_767 = &p_830->g_181;
            struct S1 l_768[5][1][8] = {{{{0L},{0L},{-3L},{0x7413L},{0x520FL},{0x26A7L},{0x66A4L},{0x3766L}}},{{{0L},{0L},{-3L},{0x7413L},{0x520FL},{0x26A7L},{0x66A4L},{0x3766L}}},{{{0L},{0L},{-3L},{0x7413L},{0x520FL},{0x26A7L},{0x66A4L},{0x3766L}}},{{{0L},{0L},{-3L},{0x7413L},{0x520FL},{0x26A7L},{0x66A4L},{0x3766L}}},{{{0L},{0L},{-3L},{0x7413L},{0x520FL},{0x26A7L},{0x66A4L},{0x3766L}}}};
            int16_t *l_770 = &p_830->g_114.f0;
            int16_t *l_772 = (void*)0;
            int16_t *l_773 = (void*)0;
            int16_t *l_774 = &p_830->g_182.f7;
            uint8_t *l_775 = &p_830->g_198;
            int i, j, k;
            (*l_754) = func_143((safe_lshift_func_uint16_t_u_s((l_754 == ((*l_756) = l_755[6][2])), 7)), ((*l_757) = 7UL), ((*l_775) = ((((safe_mod_func_int32_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_830->g_760.zzzywyzy)))).s7 >= p_830->g_705.z), (((!(((safe_mul_func_uint8_t_u_u(((void*)0 != (*p_830->g_108)), (((VECTOR(int16_t, 16))(0x35B9L, ((VECTOR(int16_t, 2))(l_763.yw)), ((*l_774) ^= ((((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(p_830->g_764.xyxzxyzx)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(8UL, ((VECTOR(uint32_t, 8))((((*l_767) = ((VECTOR(int8_t, 16))(p_830->g_765.wyxwywxzyyxywyzz)).s3) & ((((((*l_770) ^= ((l_768[4][0][0] , l_769) == (void*)0)) & l_771) , l_691) , l_711.w) & 0UL)), 2UL, ((VECTOR(uint32_t, 4))(4UL)), 0UL, 0x80BEE0C7L)), ((VECTOR(uint32_t, 4))(0x21AE3164L)), 0x55C401EBL, 0xA44508AAL, 0x943C3D62L)).s1340)).wyywwzxy))).s4 >= 0xD0946F28L) & l_708) ^ l_685.z) <= p_830->g_330.s1)), 0L, ((VECTOR(int16_t, 2))(0x551DL)), ((VECTOR(int16_t, 4))(0x2398L)), l_691, 0L, 0x2A37L, 0x140FL, (-1L))).se , l_685.y))) , (void*)0) == (*p_830->g_749))) || 18446744073709551611UL) ^ 0x39L))) != p_830->g_52.s3) ^ FAKE_DIVERGE(p_830->local_2_offset, get_local_id(2), 10)) | (*p_830->g_69))), (***p_830->g_749), p_830);
        }
        if (((((*p_830->g_336) = (****l_736)) , &p_830->g_585) == l_776[0][2]))
        { /* block id: 341 */
            uint32_t l_802 = 0UL;
            int32_t *l_804 = &p_830->g_11[0];
            int32_t *l_805[7][9][1] = {{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}},{{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5},{&p_830->g_182.f5}}};
            int i, j, k;
            for (p_830->g_182.f8 = 0; (p_830->g_182.f8 >= (-28)); --p_830->g_182.f8)
            { /* block id: 344 */
                uint64_t **l_790[7];
                int32_t l_796[3];
                uint64_t l_798 = 0xE7FA39F885D2990AL;
                int16_t *l_799 = (void*)0;
                int16_t *l_800 = (void*)0;
                int16_t *l_801[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t *l_803 = &p_830->g_21;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_790[i] = &p_830->g_109;
                for (i = 0; i < 3; i++)
                    l_796[i] = 9L;
                (*l_803) ^= ((*p_830->g_69) = ((l_802 = (safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(l_763.x, ((*p_830->g_585) , ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_830->g_786.sbf2adb5c6065d854)))).sfb43)).w, 3)) < ((safe_rshift_func_uint8_t_u_s((l_789 != &p_830->g_749), 4)) || ((void*)0 == l_790[2])))))) != (+((safe_lshift_func_int16_t_s_s((((((VECTOR(int64_t, 4))(l_793.s4379)).z & (((safe_lshift_func_uint16_t_u_s(((l_796[0] |= (-1L)) , ((p_830->g_182 , ((VECTOR(uint8_t, 4))(p_830->g_797.sf520)).y) != ((*p_830->g_108) != (*p_830->g_108)))), 14)) & (*p_830->g_632)) , l_798)) ^ 4294967295UL) , 0x6A0CL), p_830->g_786.se)) < 0L))), 6UL))) | p_830->g_765.y));
                if ((**p_830->g_589))
                    continue;
            }
            p_830->g_807--;
        }
        else
        { /* block id: 352 */
            int32_t *l_810 = &l_806;
            int32_t **l_811 = &p_830->g_69;
            int32_t *l_813[6] = {&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21};
            int32_t l_817 = 0x5BB0D1E2L;
            int i;
            (*l_811) = l_810;
            if (l_812)
                break;
            l_821++;
        }
        l_738 &= (safe_rshift_func_int8_t_s_u(l_711.x, (l_819[0] = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x17L, 0x2EL)).xxxx)).w)));
    }
    for (p_830->g_60.f0 = 0; (p_830->g_60.f0 <= 10); p_830->g_60.f0 = safe_add_func_uint64_t_u_u(p_830->g_60.f0, 2))
    { /* block id: 362 */
        return p_830->g_198;
    }
    (*p_830->g_829) = &l_815;
    return l_691;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_21 p_830->g_26 p_830->g_50 p_830->g_51 p_830->g_52 p_830->g_59 p_830->g_5 p_830->g_11 p_830->g_68 p_830->g_60.f0 p_830->g_66 p_830->g_479 p_830->g_480 p_830->g_588 p_830->g_69 p_830->g_675
 * writes: p_830->g_21 p_830->g_26 p_830->g_66 p_830->g_11 p_830->g_69 p_830->g_60.f0 p_830->g_480
 */
int32_t  func_17(uint8_t  p_18, struct S3 * p_830)
{ /* block id: 11 */
    uint64_t *l_53 = (void*)0;
    uint64_t *l_54[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_55[9] = {0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L,0x6040F3C6L};
    VECTOR(uint8_t, 8) l_56 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0xB0L), 0xB0L), 0xB0L, 4UL, 0xB0L);
    union U2 *l_63[9][1] = {{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60},{&p_830->g_60}};
    union U2 *l_64 = &p_830->g_60;
    int16_t *l_65 = &p_830->g_66;
    VECTOR(int32_t, 16) l_67 = (VECTOR(int32_t, 16))(0x366BA460L, (VECTOR(int32_t, 4))(0x366BA460L, (VECTOR(int32_t, 2))(0x366BA460L, 1L), 1L), 1L, 0x366BA460L, 1L, (VECTOR(int32_t, 2))(0x366BA460L, 1L), (VECTOR(int32_t, 2))(0x366BA460L, 1L), 0x366BA460L, 1L, 0x366BA460L, 1L);
    VECTOR(int8_t, 4) l_659 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x18L), 0x18L);
    int i, j;
    for (p_18 = 0; (p_18 != 60); ++p_18)
    { /* block id: 14 */
        for (p_830->g_21 = 0; (p_830->g_21 != (-14)); p_830->g_21--)
        { /* block id: 17 */
            for (p_830->g_26[1][1] = 22; (p_830->g_26[1][1] > (-13)); --p_830->g_26[1][1])
            { /* block id: 20 */
                if ((atomic_inc(&p_830->l_atomic_input[22]) == 9))
                { /* block id: 22 */
                    union U2 l_30 = {4294967295UL};
                    union U2 *l_29[6][10][4] = {{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}}};
                    union U2 *l_31 = &l_30;
                    int32_t l_33 = 6L;
                    int32_t *l_32 = &l_33;
                    int32_t *l_34 = &l_33;
                    int32_t *l_35 = &l_33;
                    uint32_t l_36 = 0x429B0536L;
                    uint32_t l_37 = 1UL;
                    struct S1 l_38 = {-1L};
                    uint32_t l_39 = 0x408375F0L;
                    VECTOR(int16_t, 2) l_40 = (VECTOR(int16_t, 2))(0x3D44L, 0x77CCL);
                    int32_t l_41 = 0x37607968L;
                    VECTOR(int16_t, 4) l_42 = (VECTOR(int16_t, 4))(0x0980L, (VECTOR(int16_t, 2))(0x0980L, (-8L)), (-8L));
                    VECTOR(uint16_t, 16) l_43 = (VECTOR(uint16_t, 16))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x944DL), 0x944DL), 0x944DL, 2UL, 0x944DL, (VECTOR(uint16_t, 2))(2UL, 0x944DL), (VECTOR(uint16_t, 2))(2UL, 0x944DL), 2UL, 0x944DL, 2UL, 0x944DL);
                    VECTOR(int32_t, 8) l_44 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5DCA5B7FL), 0x5DCA5B7FL), 0x5DCA5B7FL, 1L, 0x5DCA5B7FL);
                    union U2 l_45 = {0x9E4B39C2L};
                    union U2 l_46 = {0xA127326BL};
                    int32_t l_47 = 0L;
                    int i, j, k;
                    l_31 = l_29[3][5][3];
                    l_35 = (l_34 = l_32);
                    (*l_32) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_36, 0x06CCCE42L, l_37, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))((-1L), 1L)).yxxx, (int16_t)(l_38 , l_39)))).xzwxwyzzzxwyxwyz)))).s8f, (int16_t)(l_41 = (l_40.y , 0x754BL)), (int16_t)((VECTOR(int16_t, 4))(l_42.wwyw)).w))).yxxyxxyx, ((VECTOR(uint16_t, 4))(l_43.s42be)).wxzywwxx))).s62)), 0L, 0x1B16E5D1L)), ((VECTOR(int32_t, 2))((-1L), 0x2EAAC79EL)).xxyy, ((VECTOR(int32_t, 2))(l_44.s44)).xxyx))).zywywxwxwwzwwywx, ((VECTOR(int32_t, 8))(((l_46 = l_45) , l_47), ((VECTOR(int32_t, 2))(7L)), 0L, ((VECTOR(int32_t, 4))(0x6D4114ABL)))).s5440220667155125, ((VECTOR(int32_t, 16))(0x7BCD5AEBL))))).lo)).s17)), 1L, (-6L))), 0x12890375L)).hi, ((VECTOR(int32_t, 4))(0x4DD171CFL))))).z, ((VECTOR(int32_t, 4))(0x4B68985BL)), 0x7FE427CCL, 0x6CA68EB2L, 1L)).hi, ((VECTOR(int32_t, 4))(0x71AF85E6L))))).xyzxxwzx, ((VECTOR(int32_t, 8))(0x0566A4DCL)), ((VECTOR(int32_t, 8))(0x599A0A08L))))))), ((VECTOR(int32_t, 8))(0x18031143L))))).s1463510342142557)).sa;
                    unsigned int result = 0;
                    result += l_30.f0;
                    result += l_30.f1;
                    result += l_33;
                    result += l_36;
                    result += l_37;
                    result += l_38.f0;
                    result += l_39;
                    result += l_40.y;
                    result += l_40.x;
                    result += l_41;
                    result += l_42.w;
                    result += l_42.z;
                    result += l_42.y;
                    result += l_42.x;
                    result += l_43.sf;
                    result += l_43.se;
                    result += l_43.sd;
                    result += l_43.sc;
                    result += l_43.sb;
                    result += l_43.sa;
                    result += l_43.s9;
                    result += l_43.s8;
                    result += l_43.s7;
                    result += l_43.s6;
                    result += l_43.s5;
                    result += l_43.s4;
                    result += l_43.s3;
                    result += l_43.s2;
                    result += l_43.s1;
                    result += l_43.s0;
                    result += l_44.s7;
                    result += l_44.s6;
                    result += l_44.s5;
                    result += l_44.s4;
                    result += l_44.s3;
                    result += l_44.s2;
                    result += l_44.s1;
                    result += l_44.s0;
                    result += l_45.f0;
                    result += l_45.f1;
                    result += l_46.f0;
                    result += l_46.f1;
                    result += l_47;
                    atomic_add(&p_830->l_special_values[22], result);
                }
                else
                { /* block id: 29 */
                    (1 + 1);
                }
                if (p_18)
                    continue;
            }
        }
    }
    p_830->g_26[1][1] = (p_830->g_11[0] |= (p_18 || (l_67.se = ((p_18 | ((safe_lshift_func_uint16_t_u_u(0UL, 4)) >= (((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(p_830->g_50.xxxxxyxy)).hi, ((VECTOR(uint16_t, 16))(0x7A17L, 65535UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_830->g_51.s67017714)))), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(1UL, (18446744073709551615UL > (l_55[7] |= ((VECTOR(uint64_t, 2))(p_830->g_52.s32)).hi)), 0x48L, 255UL)), ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_56.s61)), 0x7AL, 1UL)).yxxzwxxy, ((VECTOR(uint8_t, 8))(0xFAL, 3UL, 0x32L, (safe_lshift_func_uint8_t_u_s(p_830->g_26[1][1], ((p_830->g_59 != &p_830->g_60) , (((*l_65) = ((((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4B749617L, 9L)).yyxy)).wwyzwwwz, ((VECTOR(int32_t, 4))(((safe_rshift_func_uint16_t_u_u(((l_56.s6 && l_55[7]) ^ 0x11CAA3E211E8D535L), FAKE_DIVERGE(p_830->global_0_offset, get_global_id(0), 10))) == 0x2217A8330C07BB3EL), 0x3BEE733DL, 0x33387B99L, (-2L))).wxzwwywy))).s7272241477131013, ((VECTOR(int32_t, 16))((-1L)))))).s6 , l_63[4][0]) == l_64)) & p_18)))), GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 2))(255UL)), 0x93L))))).s2022555111546511, ((VECTOR(uint8_t, 16))(4UL)), ((VECTOR(uint8_t, 16))(0x63L))))))), ((VECTOR(uint8_t, 16))(248UL))))).sc33a))), 0xA3L, ((VECTOR(uint8_t, 2))(0xBEL)), 255UL)).hi, (uint8_t)GROUP_DIVERGE(1, 1)))).zxwzwywzwzzzwzyw))))).s6355, ((VECTOR(uint8_t, 4))(253UL))))), 0xBC66L, 1UL)).sb7ab, ((VECTOR(uint16_t, 4))(0x48CDL))))).odd, ((VECTOR(uint16_t, 2))(65533UL))))).even , l_55[7]))) , p_830->g_5))));
    (*p_830->g_68) = &p_830->g_11[0];
    for (p_830->g_60.f0 = 5; (p_830->g_60.f0 >= 2); --p_830->g_60.f0)
    { /* block id: 44 */
        int16_t *l_86 = &p_830->g_66;
        uint64_t **l_112 = &l_54[3];
        int32_t l_121 = 0x1F120E9FL;
        int16_t **l_665 = (void*)0;
        int32_t l_667 = 0x3A14DFF1L;
        for (p_830->g_66 = (-20); (p_830->g_66 <= 13); p_830->g_66 = safe_add_func_int16_t_s_s(p_830->g_66, 1))
        { /* block id: 47 */
            struct S1 l_79 = {0x74E9L};
            VECTOR(uint64_t, 4) l_89 = (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xF19563820F02422DL), 0xF19563820F02422DL);
            int32_t **l_110[5];
            struct S0 *l_648 = (void*)0;
            struct S0 **l_647 = &l_648;
            struct S0 *l_650 = (void*)0;
            struct S0 **l_649 = &l_650;
            uint16_t *l_662[5];
            int16_t ***l_663 = &p_830->g_346;
            int16_t ***l_664 = &p_830->g_346;
            int64_t *l_666 = &p_830->g_182.f8;
            int64_t *l_668 = (void*)0;
            int64_t *l_669 = (void*)0;
            int64_t *l_670[2][10][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint32_t *l_671 = (void*)0;
            uint32_t *l_672 = (void*)0;
            uint32_t *l_673 = (void*)0;
            uint32_t *l_674 = &p_830->g_182.f1;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_110[i] = &p_830->g_69;
            for (i = 0; i < 5; i++)
                l_662[i] = (void*)0;
            (1 + 1);
        }
        if (p_18)
            break;
        (*p_830->g_479) = (*p_830->g_479);
        (*p_830->g_675) = (*p_830->g_588);
    }
    return l_56.s1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t ** func_74(uint8_t  p_75, int16_t * p_76, int32_t ** p_77, uint64_t ** p_78, struct S3 * p_830)
{ /* block id: 272 */
    return p_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_182.f3 p_830->g_66 p_830->g_181 p_830->g_407 p_830->g_408 p_830->g_590 p_830->g_249 p_830->g_250 p_830->g_182.f4 p_830->g_383 p_830->g_623
 * writes: p_830->g_182.f3 p_830->g_181 p_830->g_590 p_830->g_198 p_830->g_623
 */
int32_t ** func_83(int16_t * p_84, int32_t  p_85, struct S3 * p_830)
{ /* block id: 260 */
    int32_t l_595[4][8] = {{0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L},{0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L},{0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L},{0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L,0x66C65428L}};
    VECTOR(int16_t, 4) l_608 = (VECTOR(int16_t, 4))(0x3D6FL, (VECTOR(int16_t, 2))(0x3D6FL, 1L), 1L);
    uint64_t **l_617 = (void*)0;
    int32_t l_621 = 1L;
    int32_t *l_622[6][7] = {{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621},{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621},{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621},{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621},{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621},{&l_621,&p_830->g_5,&l_621,&p_830->g_26[1][8],&p_830->g_5,&p_830->g_26[1][8],&l_621}};
    int32_t **l_626 = (void*)0;
    int i, j;
    for (p_830->g_182.f3 = 0; (p_830->g_182.f3 == (-7)); --p_830->g_182.f3)
    { /* block id: 263 */
        uint16_t l_609 = 0xF9F7L;
        VECTOR(uint32_t, 4) l_612 = (VECTOR(uint32_t, 4))(0x1B8793FDL, (VECTOR(uint32_t, 2))(0x1B8793FDL, 0x0EED66F2L), 0x0EED66F2L);
        int8_t *l_613 = (void*)0;
        int8_t *l_614 = &p_830->g_181;
        uint64_t **l_618 = &p_830->g_109;
        uint8_t *l_619 = &p_830->g_198;
        int32_t *l_620[8] = {&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21,&p_830->g_21};
        int i;
        l_621 = (safe_mul_func_uint8_t_u_u(p_85, ((((GROUP_DIVERGE(1, 1) | (l_595[2][2] != (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0xBDL, 9UL, ((safe_lshift_func_uint8_t_u_s(p_85, 0)) & (safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((l_609 = (safe_mul_func_int16_t_s_s((!((VECTOR(int16_t, 8))(l_608.zywxxywy)).s7), (*p_84)))), ((*l_619) = (((((VECTOR(uint32_t, 8))(l_612.xyyzyxxw)).s6 != (0x5BL != ((*l_614) ^= (p_85 & FAKE_DIVERGE(p_830->group_0_offset, get_group_id(0), 10))))) ^ 0x45L) , (safe_div_func_int64_t_s_s(((l_617 == ((p_830->g_590 |= ((*p_830->g_407) != &p_830->g_198)) , l_618)) && p_85), l_608.y)))))) || (*p_830->g_249)), p_830->g_182.f4))), ((VECTOR(uint8_t, 2))(0x93L)), l_612.w, 3UL, 0x0CL)))).s0, p_85)), l_608.w)))) & FAKE_DIVERGE(p_830->global_2_offset, get_global_id(2), 10)) , p_830->g_383) == (void*)0)));
    }
    p_830->g_623--;
    return l_626;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_114.f0 p_830->g_69 p_830->g_11 p_830->g_108 p_830->g_109 p_830->g_116.f0 p_830->g_68 p_830->g_52 p_830->g_3 p_830->g_182 p_830->g_50 p_830->g_26 p_830->g_80 p_830->g_60 p_830->g_24 p_830->g_51 p_830->g_101 p_830->g_214 p_830->g_248 p_830->g_249 p_830->g_250 p_830->g_288 p_830->g_316 p_830->g_330 p_830->g_334 p_830->g_336 p_830->g_198 p_830->g_380 p_830->g_181 p_830->g_383 p_830->g_335 p_830->g_407 p_830->g_21 p_830->g_116 p_830->g_560 p_830->g_575 p_830->g_578 p_830->g_580 p_830->g_581 p_830->g_479 p_830->g_480 p_830->g_585 p_830->g_588 p_830->g_589
 * writes: p_830->g_114.f0 p_830->g_11 p_830->g_181 p_830->g_114 p_830->g_116 p_830->g_198 p_830->g_50 p_830->g_182.f7 p_830->g_182.f0 p_830->g_69 p_830->g_26 p_830->g_52 p_830->g_346 p_830->g_51 p_830->g_182.f5 p_830->g_182 p_830->g_336 p_830->g_21 p_830->g_330 p_830->g_474 p_830->g_480
 */
int64_t  func_94(uint8_t  p_95, uint64_t ** p_96, int32_t  p_97, uint8_t  p_98, struct S3 * p_830)
{ /* block id: 59 */
    uint32_t l_126 = 4294967288UL;
    int32_t l_129 = 0x74BB7FEAL;
    for (p_830->g_114.f0 = (-14); (p_830->g_114.f0 != 17); ++p_830->g_114.f0)
    { /* block id: 62 */
        int8_t l_124 = (-5L);
        int32_t *l_125[9][4][7] = {{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}},{{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]},{&p_830->g_11[0],&p_830->g_11[0],(void*)0,&p_830->g_26[2][3],&p_830->g_11[0],(void*)0,&p_830->g_26[2][6]}}};
        int i, j, k;
        --l_126;
        l_129 ^= (*p_830->g_69);
    }
    (*p_830->g_479) = func_130(&p_830->g_69, p_95, p_830);
    (*p_830->g_588) = (*p_830->g_68);
    (*p_830->g_589) = &l_129;
    return l_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_80 p_830->g_60
 * writes: p_830->g_114 p_830->g_116
 */
union U2  func_102(uint64_t ** p_103, int32_t ** p_104, struct S0  p_105, uint64_t ** p_106, union U2 * p_107, struct S3 * p_830)
{ /* block id: 52 */
    struct S1 *l_113 = &p_830->g_114;
    struct S1 *l_115 = &p_830->g_116;
    union U2 *l_118 = (void*)0;
    union U2 **l_117 = &l_118;
    (*l_115) = ((*l_113) = p_830->g_80);
    (*l_117) = (void*)0;
    return (*p_107);
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_69 p_830->g_108 p_830->g_109 p_830->g_116.f0 p_830->g_68 p_830->g_11 p_830->g_52 p_830->g_3 p_830->g_182 p_830->g_50 p_830->g_26 p_830->g_80 p_830->g_60 p_830->g_24 p_830->g_51 p_830->g_101 p_830->g_214 p_830->g_248 p_830->g_249 p_830->g_250 p_830->g_288 p_830->g_316 p_830->g_330 p_830->g_334 p_830->g_336 p_830->g_198 p_830->g_380 p_830->g_181 p_830->g_383 p_830->g_335 p_830->g_407 p_830->g_21 p_830->g_116 p_830->g_560 p_830->g_575 p_830->g_578 p_830->g_580 p_830->g_581 p_830->g_479 p_830->g_480 p_830->g_585
 * writes: p_830->g_11 p_830->g_181 p_830->g_114 p_830->g_116 p_830->g_198 p_830->g_50 p_830->g_182.f7 p_830->g_182.f0 p_830->g_69 p_830->g_26 p_830->g_52 p_830->g_346 p_830->g_51 p_830->g_182.f5 p_830->g_182 p_830->g_336 p_830->g_21 p_830->g_330 p_830->g_474
 */
struct S1 * func_130(int32_t ** p_131, uint64_t  p_132, struct S3 * p_830)
{ /* block id: 66 */
    VECTOR(uint64_t, 8) l_135 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x08EFB34F4D14C442L), 0x08EFB34F4D14C442L), 0x08EFB34F4D14C442L, 1UL, 0x08EFB34F4D14C442L);
    uint64_t **l_142[1];
    int32_t *l_430 = &p_830->g_21;
    struct S1 *l_434[2];
    struct S1 **l_433 = &l_434[1];
    int32_t l_459 = 0x474084C3L;
    int32_t l_461 = 0x6918533BL;
    int32_t l_463 = 0x064E0885L;
    int32_t l_464[9];
    uint32_t l_465 = 0xD3B2996DL;
    int8_t *l_473[8][5] = {{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&p_830->g_398,&p_830->g_181,&p_830->g_181}};
    int8_t **l_472 = &l_473[1][2];
    VECTOR(int32_t, 8) l_543 = (VECTOR(int32_t, 8))(0x30F560C3L, (VECTOR(int32_t, 4))(0x30F560C3L, (VECTOR(int32_t, 2))(0x30F560C3L, 3L), 3L), 3L, 0x30F560C3L, 3L);
    int16_t *l_555 = (void*)0;
    VECTOR(uint32_t, 4) l_559 = (VECTOR(uint32_t, 4))(0x1D109B82L, (VECTOR(uint32_t, 2))(0x1D109B82L, 4294967295UL), 4294967295UL);
    VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(0x4CL, (VECTOR(uint8_t, 2))(0x4CL, 247UL), 247UL);
    int64_t **l_569[2][3][9] = {{{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]},{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]},{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]}},{{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]},{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]},{&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1],&p_830->g_521[4][1],&p_830->g_521[5][0],&p_830->g_521[4][1]}}};
    int64_t ***l_568[8][6] = {{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]},{&l_569[1][1][3],&l_569[0][1][8],&l_569[0][0][1],&l_569[1][1][3],&l_569[0][0][1],&l_569[0][1][8]}};
    int64_t **l_570 = &p_830->g_521[9][0];
    VECTOR(uint32_t, 2) l_571 = (VECTOR(uint32_t, 2))(0x3E273461L, 0xBAD18B4BL);
    VECTOR(uint32_t, 2) l_572 = (VECTOR(uint32_t, 2))(1UL, 3UL);
    VECTOR(uint32_t, 4) l_573 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x090691D5L), 0x090691D5L);
    VECTOR(uint32_t, 16) l_574 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    VECTOR(uint32_t, 16) l_576 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 2UL), 2UL), 2UL, 4294967292UL, 2UL, (VECTOR(uint32_t, 2))(4294967292UL, 2UL), (VECTOR(uint32_t, 2))(4294967292UL, 2UL), 4294967292UL, 2UL, 4294967292UL, 2UL);
    VECTOR(uint32_t, 2) l_577 = (VECTOR(uint32_t, 2))(0x1891B3FFL, 0x694FF472L);
    VECTOR(uint32_t, 16) l_579 = (VECTOR(uint32_t, 16))(0xC5D1CE8DL, (VECTOR(uint32_t, 4))(0xC5D1CE8DL, (VECTOR(uint32_t, 2))(0xC5D1CE8DL, 1UL), 1UL), 1UL, 0xC5D1CE8DL, 1UL, (VECTOR(uint32_t, 2))(0xC5D1CE8DL, 1UL), (VECTOR(uint32_t, 2))(0xC5D1CE8DL, 1UL), 0xC5D1CE8DL, 1UL, 0xC5D1CE8DL, 1UL);
    struct S0 l_584 = {3L,0xE9A76665L,0xCAAA95F4L,0x49F6L,0x3D2C620E8F94FF3FL,0x39298756L,0x464EB903L,0L,-4L};
    struct S1 *l_586 = &p_830->g_114;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_142[i] = &p_830->g_109;
    for (i = 0; i < 2; i++)
        l_434[i] = &p_830->g_116;
    for (i = 0; i < 9; i++)
        l_464[i] = (-7L);
    if (((**p_131) = (safe_mod_func_int64_t_s_s(0x657383A1794BD295L, ((VECTOR(uint64_t, 8))(l_135.s37031155)).s1))))
    { /* block id: 68 */
        int8_t l_148 = 0x3DL;
        uint32_t *l_151 = (void*)0;
        uint32_t *l_152 = (void*)0;
        uint32_t *l_153[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int32_t, 8) l_154 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int64_t l_442 = 0L;
        struct S0 *l_453 = &p_830->g_182;
        int32_t *l_460[1][8];
        int32_t l_462 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_460[i][j] = &p_830->g_11[0];
        }
        (*p_830->g_335) = func_136(l_142[0], p_132, (*p_830->g_108), func_143(l_148, l_135.s7, ((safe_mod_func_uint64_t_u_u(((l_154.s1 = 0x467824FAL) >= p_830->g_116.f0), (-1L))) || (func_155((*p_830->g_68), l_154.s1, p_830) >= l_154.s2)), (**p_830->g_334), p_830), p_830->g_182.f8, p_830);
        for (p_830->g_116.f0 = 0; (p_830->g_116.f0 >= 26); p_830->g_116.f0++)
        { /* block id: 173 */
            struct S1 l_414[8][7][4] = {{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}},{{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}},{{0L},{2L},{0L},{0x714DL}}}};
            uint8_t *l_422 = &p_830->g_198;
            uint32_t *l_423 = &p_830->g_182.f6;
            int8_t *l_427 = &p_830->g_181;
            int8_t **l_426 = &l_427;
            int i, j, k;
            (1 + 1);
        }
        for (p_830->g_182.f6 = (-4); (p_830->g_182.f6 <= 22); p_830->g_182.f6 = safe_add_func_int32_t_s_s(p_830->g_182.f6, 7))
        { /* block id: 188 */
            struct S1 **l_435[10] = {&l_434[1],(void*)0,&l_434[1],&l_434[1],(void*)0,&l_434[1],&l_434[1],(void*)0,&l_434[1],&l_434[1]};
            uint64_t l_454 = 0UL;
            int8_t *l_455 = &p_830->g_181;
            uint32_t l_456 = 0x35E825FBL;
            int16_t *l_457 = (void*)0;
            int16_t *l_458 = &p_830->g_114.f0;
            int i;
            (*p_830->g_69) |= (l_433 != l_435[7]);
            for (p_830->g_21 = 0; (p_830->g_21 == (-23)); --p_830->g_21)
            { /* block id: 192 */
                return &p_830->g_114;
            }
            p_830->g_116 = (((((((((9UL == (safe_mul_func_uint16_t_u_u(0UL, ((*l_458) = (safe_add_func_uint32_t_u_u(l_442, (((safe_mod_func_uint8_t_u_u((!((safe_sub_func_int16_t_s_s(((0UL < (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((p_830->g_182 , (p_830->g_330.s1 = (safe_add_func_uint16_t_u_u((((+(p_132 < (l_453 != l_453))) != ((((*l_455) = l_454) & p_132) == p_132)) || (-1L)), 2L)))), p_830->g_51.s6)), p_132))) ^ l_154.s5), l_454)) , FAKE_DIVERGE(p_830->local_1_offset, get_local_id(1), 10))), (*l_430))) , 0L) >= l_456))))))) , 0UL) >= l_454) < FAKE_DIVERGE(p_830->local_1_offset, get_local_id(1), 10)) && l_459) < p_132) && (-1L)) < 0x58L) , p_830->g_116);
            (*p_830->g_68) = (*p_830->g_68);
        }
        l_465++;
    }
    else
    { /* block id: 202 */
        uint16_t l_491 = 65535UL;
        uint64_t l_528 = 18446744073709551615UL;
        VECTOR(uint16_t, 8) l_535 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL);
        VECTOR(int8_t, 4) l_546 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
        int i;
        for (p_830->g_182.f0 = 22; (p_830->g_182.f0 < (-11)); p_830->g_182.f0 = safe_sub_func_uint32_t_u_u(p_830->g_182.f0, 9))
        { /* block id: 205 */
            VECTOR(int8_t, 8) l_485 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
            VECTOR(int32_t, 4) l_531 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1173FEBBL), 0x1173FEBBL);
            VECTOR(uint16_t, 8) l_532 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0UL), 0UL), 0UL, 65533UL, 0UL);
            VECTOR(uint16_t, 8) l_534 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x2D8AL), 0x2D8AL), 0x2D8AL, 0UL, 0x2D8AL);
            VECTOR(uint16_t, 2) l_536 = (VECTOR(uint16_t, 2))(0x735AL, 0x69CAL);
            struct S1 *l_548 = &p_830->g_116;
            int16_t *l_554 = &p_830->g_116.f0;
            int i;
            for (l_465 = 0; (l_465 != 58); l_465 = safe_add_func_uint8_t_u_u(l_465, 1))
            { /* block id: 208 */
                VECTOR(int8_t, 4) l_484 = (VECTOR(int8_t, 4))(0x42L, (VECTOR(int8_t, 2))(0x42L, 0L), 0L);
                uint64_t **l_486 = &p_830->g_109;
                VECTOR(int64_t, 16) l_488 = (VECTOR(int64_t, 16))(0x30285C02DEE44807L, (VECTOR(int64_t, 4))(0x30285C02DEE44807L, (VECTOR(int64_t, 2))(0x30285C02DEE44807L, (-9L)), (-9L)), (-9L), 0x30285C02DEE44807L, (-9L), (VECTOR(int64_t, 2))(0x30285C02DEE44807L, (-9L)), (VECTOR(int64_t, 2))(0x30285C02DEE44807L, (-9L)), 0x30285C02DEE44807L, (-9L), 0x30285C02DEE44807L, (-9L));
                int32_t l_523 = 0x3AD89612L;
                int32_t l_525 = (-1L);
                VECTOR(uint16_t, 16) l_533 = (VECTOR(uint16_t, 16))(0x4881L, (VECTOR(uint16_t, 4))(0x4881L, (VECTOR(uint16_t, 2))(0x4881L, 0x9BC3L), 0x9BC3L), 0x9BC3L, 0x4881L, 0x9BC3L, (VECTOR(uint16_t, 2))(0x4881L, 0x9BC3L), (VECTOR(uint16_t, 2))(0x4881L, 0x9BC3L), 0x4881L, 0x9BC3L, 0x4881L, 0x9BC3L);
                VECTOR(uint16_t, 16) l_537 = (VECTOR(uint16_t, 16))(0xF562L, (VECTOR(uint16_t, 4))(0xF562L, (VECTOR(uint16_t, 2))(0xF562L, 0xC27BL), 0xC27BL), 0xC27BL, 0xF562L, 0xC27BL, (VECTOR(uint16_t, 2))(0xF562L, 0xC27BL), (VECTOR(uint16_t, 2))(0xF562L, 0xC27BL), 0xF562L, 0xC27BL, 0xF562L, 0xC27BL);
                int8_t *l_540 = (void*)0;
                int i;
                p_830->g_474 = l_472;
            }
        }
    }
    (*p_830->g_585) = (((l_459 |= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(l_559.wwyx)).yyxwzyyz))).s3446355746352320, ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(p_830->g_560.s822aa8d0a66da820)).even, (int32_t)(*l_430)))).s41)), (safe_rshift_func_uint8_t_u_u((((VECTOR(uint8_t, 16))(l_563.zwxxzzzxyxwxyxxw)).se ^ (((((safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0x5FCB699F7905916DL, ((l_570 = (void*)0) != ((((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(l_571.xyyyyyyxxyxxyyyy)).s48, (uint32_t)((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(l_572.xy)).yxyyyxxyxyyyyyxx, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(l_573.yx)), ((VECTOR(uint32_t, 4))(5UL, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(9UL, 0xBD7E87D1L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 4))(0x1F685559L, 0x3950EC9BL, 0x09314B53L, 1L)).yyyyzxyy))), ((VECTOR(uint32_t, 2))(0x85B03924L, 1UL)).yxxyyyxy))).s13, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(l_574.se10568f7fdc6a77d)).s60, (uint32_t)((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_830->g_575.xxxyyyyy)))))).s1)))))), 0xE0A1389DL, 1UL)).lo))), ((VECTOR(uint32_t, 2))(l_576.s2f))))), 6UL)).even))).xyyxxyyyxyyyyxxy))).s5, (uint32_t)(*l_430)))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(l_577.xxxyyyyx)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 2))(p_830->g_578.wy)), 0UL, ((VECTOR(uint32_t, 8))(0xCABD1F33L, ((VECTOR(uint32_t, 2))(l_579.s3a)), ((VECTOR(uint32_t, 4))(p_830->g_580.saa22)), 0xF55A0EAEL)).s3, 0x1738D008L, 0xFECEB4D1L, (((0x0AL == (FAKE_DIVERGE(p_830->local_2_offset, get_local_id(2), 10) | (*l_430))) == 0x3FL) & (((**p_131) |= (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_830->g_581.s1107)).wyzxzxwz)).s6 <= ((**p_830->g_479) , (safe_lshift_func_uint16_t_u_s((&l_434[1] == (void*)0), 0))))) <= 7UL)), 0x02716619L, 0xECC8CE6EL, 4294967295UL, (*l_430), ((VECTOR(uint32_t, 4))(0x43A84E27L)))).lo)), ((VECTOR(uint32_t, 8))(4294967295UL))))).odd)).hi, ((VECTOR(uint32_t, 2))(6UL)), ((VECTOR(uint32_t, 2))(0xCA16465FL))))).yxxxxyyx)).even))))), 0xE13D5828L, 0x0A274076L, 0xC8C8669AL, 0x12DE2DA9L)), 0xD52AF9D1L, 4294967295UL, ((VECTOR(uint32_t, 2))(6UL)), ((VECTOR(uint32_t, 4))(4294967286UL)))).s15))).odd < (*l_430)) , &p_830->g_289)))), (*l_430))) || 0xD8L) , (*l_430)) , (void*)0) == l_430)), (*l_430))), (*l_430), 9L, (**p_131), 0x2E236E9CL, 0x0EA15B5AL))))))), ((VECTOR(uint32_t, 8))(0x67FF7296L)), ((VECTOR(uint32_t, 8))(0xCB50BDD9L))))).s5417573771715654, ((VECTOR(uint32_t, 16))(0x3CD3F2B6L))))))).s8 & p_830->g_52.s6)) ^ (*l_430)) , l_584);
    return l_586;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_182 p_830->g_407 p_830->g_69
 * writes: p_830->g_182 p_830->g_11 p_830->g_26
 */
union U2 * func_136(uint64_t ** p_137, int8_t  p_138, uint64_t * p_139, struct S0  p_140, int64_t  p_141, struct S3 * p_830)
{ /* block id: 165 */
    int32_t *l_393 = (void*)0;
    int32_t *l_394 = (void*)0;
    int32_t *l_395 = &p_830->g_21;
    int32_t l_396[9] = {0x04621554L,0x04621554L,0x04621554L,0x04621554L,0x04621554L,0x04621554L,0x04621554L,0x04621554L,0x04621554L};
    int32_t *l_397[3][1];
    uint64_t l_399 = 18446744073709551610UL;
    struct S0 *l_402 = &p_830->g_182;
    uint8_t *l_406 = &p_830->g_198;
    uint8_t **l_405 = &l_406;
    union U2 *l_409 = &p_830->g_60;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_397[i][j] = &p_830->g_11[0];
    }
    l_399--;
    (*l_402) = p_830->g_182;
    (*p_830->g_69) = (safe_div_func_uint64_t_u_u((l_405 == p_830->g_407), GROUP_DIVERGE(1, 1)));
    return l_409;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_182.f0 p_830->g_68 p_830->g_69 p_830->g_11 p_830->g_26 p_830->g_182.f5
 * writes: p_830->g_182.f0 p_830->g_69 p_830->g_182.f5
 */
struct S0  func_143(uint64_t  p_144, uint32_t  p_145, uint8_t  p_146, union U2 * p_147, struct S3 * p_830)
{ /* block id: 156 */
    int32_t *l_388 = &p_830->g_26[1][1];
    int32_t **l_389 = &p_830->g_69;
    int32_t *l_391 = &p_830->g_182.f5;
    struct S0 l_392 = {-1L,4294967294UL,7UL,0x2A50L,0x325F462AB24DED77L,1L,0UL,0x5FB4L,0x0948B21EA59DCF31L};
    for (p_830->g_182.f0 = 0; (p_830->g_182.f0 > 23); p_830->g_182.f0++)
    { /* block id: 159 */
        int32_t **l_387 = (void*)0;
        l_388 = (*p_830->g_68);
    }
    (*l_389) = l_388;
    (*l_391) |= (*p_830->g_69);
    return l_392;
}


/* ------------------------------------------ */
/* 
 * reads : p_830->g_11 p_830->g_52 p_830->g_116.f0 p_830->g_3 p_830->g_182 p_830->g_50 p_830->g_69 p_830->g_26 p_830->g_80 p_830->g_60 p_830->g_24 p_830->g_51 p_830->g_101 p_830->g_214 p_830->g_109 p_830->g_248 p_830->g_68 p_830->g_249 p_830->g_250 p_830->g_288 p_830->g_316 p_830->g_330 p_830->g_334 p_830->g_336 p_830->g_198 p_830->g_380 p_830->g_181 p_830->g_383
 * writes: p_830->g_11 p_830->g_181 p_830->g_114 p_830->g_116 p_830->g_198 p_830->g_50 p_830->g_182.f7 p_830->g_182.f0 p_830->g_69 p_830->g_26 p_830->g_52 p_830->g_346 p_830->g_51
 */
int32_t  func_155(int32_t * p_156, uint64_t  p_157, struct S3 * p_830)
{ /* block id: 70 */
    union U2 *l_159 = &p_830->g_60;
    union U2 **l_158 = &l_159;
    int32_t l_162 = (-7L);
    uint64_t *l_163 = (void*)0;
    uint64_t *l_164 = (void*)0;
    uint64_t *l_165[1][1];
    int32_t l_166 = 0x6FDE07D2L;
    uint8_t *l_173 = (void*)0;
    int64_t l_189 = 0x45E4DCB4F3F161F6L;
    int8_t l_190 = 0x24L;
    struct S1 l_199[2] = {{3L},{3L}};
    struct S1 l_202 = {0x379EL};
    uint8_t *l_229 = &p_830->g_198;
    int16_t *l_230 = &p_830->g_66;
    int16_t *l_232 = &p_830->g_182.f3;
    int8_t *l_240[9][10] = {{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181},{&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181,&l_190,&p_830->g_181,&p_830->g_181,&p_830->g_181}};
    VECTOR(uint32_t, 2) l_246 = (VECTOR(uint32_t, 2))(9UL, 0x4D871698L);
    VECTOR(uint32_t, 16) l_247 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 1UL), 1UL), 1UL, 4294967287UL, 1UL, (VECTOR(uint32_t, 2))(4294967287UL, 1UL), (VECTOR(uint32_t, 2))(4294967287UL, 1UL), 4294967287UL, 1UL, 4294967287UL, 1UL);
    VECTOR(uint32_t, 2) l_273 = (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL);
    union U2 ***l_338[4][7][7] = {{{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335}},{{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335}},{{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335}},{{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335},{&p_830->g_335,&l_158,&l_158,&l_158,(void*)0,&l_158,&p_830->g_335}}};
    VECTOR(uint16_t, 2) l_376 = (VECTOR(uint16_t, 2))(2UL, 65535UL);
    uint16_t *l_377 = (void*)0;
    uint16_t *l_378 = (void*)0;
    uint16_t *l_379[5][6][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t l_384 = 7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_165[i][j] = (void*)0;
    }
    (*p_156) = ((l_158 != &l_159) && (((((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 8))((l_166 &= (((p_157 >= (safe_mod_func_uint32_t_u_u(4294967293UL, l_162))) < (-10L)) | (!l_162))), 0x79F787DA68F4A9C1L, 0x1E57589B60EE2D55L, (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_157, (safe_mod_func_uint16_t_u_u(p_830->g_11[0], p_157)))), p_157)), p_157, 0xD63D6F2558EA937BL, 0xA77DD4E24FC960D3L, 18446744073709551615UL)), ((VECTOR(uint64_t, 8))(0UL))))).s0 < p_157) == 0L) == p_830->g_52.sb));
    if (((((p_830->g_116.f0 , l_163) != (void*)0) , l_173) == l_173))
    { /* block id: 73 */
        int8_t *l_180 = &p_830->g_181;
        union U2 *l_187 = &p_830->g_60;
        int32_t l_188 = 0x442EEB04L;
        uint64_t **l_195 = &l_165[0][0];
        int32_t **l_196[2][4][10] = {{{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69}},{{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69},{&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69}}};
        uint8_t *l_197 = &p_830->g_198;
        struct S1 *l_200 = (void*)0;
        struct S1 *l_201[1][10];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_201[i][j] = (void*)0;
        }
        (*p_830->g_69) = (safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((*l_180) = p_830->g_3), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x72L, 0x4EL, (l_162 |= (p_830->g_182 , (p_830->g_182.f2 != (safe_add_func_int16_t_s_s((((1UL & ((safe_mul_func_int8_t_s_s((((l_187 == ((*l_158) = (*l_158))) & 0x54B0218DL) , l_188), l_189)) , p_830->g_50.y)) > 0x66L) || 255UL), GROUP_DIVERGE(0, 1)))))), p_157, ((VECTOR(int8_t, 8))(0x52L)), ((VECTOR(int8_t, 4))(0x3DL)))))))).lo)).s5)) > l_189) & l_190), 0x1918L)) > (*p_830->g_69)) , p_830->g_182.f3), 3));
        l_202 = (l_199[0] = (((VECTOR(uint32_t, 8))(0x9984349FL, (((safe_lshift_func_uint8_t_u_s(((-1L) & ((*l_197) = ((p_830->g_26[2][4] > 4UL) || ((func_102(l_195, l_196[1][2][1], p_830->g_182, &p_830->g_109, ((*l_158) = l_187), p_830) , GROUP_DIVERGE(1, 1)) <= 0x2D44DE8C6923B6ADL)))), p_157)) >= p_830->g_24) & p_830->g_51.s5), p_830->g_101.y, ((VECTOR(uint32_t, 2))(4294967295UL)), l_190, 0x0BAC577DL, 0xAF282634L)).s0 , l_199[1]));
    }
    else
    { /* block id: 82 */
        VECTOR(int64_t, 2) l_213 = (VECTOR(int64_t, 2))(9L, (-8L));
        VECTOR(int32_t, 2) l_215 = (VECTOR(int32_t, 2))(0x51242CBDL, (-8L));
        uint8_t *l_224 = &p_830->g_198;
        uint16_t *l_225[10];
        uint8_t **l_228[6][1][7] = {{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}},{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}},{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}},{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}},{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}},{{&l_224,(void*)0,(void*)0,&l_224,&l_224,(void*)0,(void*)0}}};
        int16_t **l_231 = &l_230;
        int16_t **l_233 = &l_232;
        int64_t *l_234 = &p_830->g_182.f0;
        int16_t l_235 = 0x2CBFL;
        int8_t *l_237[3];
        int8_t **l_236 = &l_237[1];
        int8_t *l_239 = &l_190;
        int8_t **l_238[2];
        uint32_t *l_251 = (void*)0;
        uint32_t *l_252 = (void*)0;
        uint32_t *l_253 = (void*)0;
        uint32_t *l_254 = (void*)0;
        uint32_t *l_255 = (void*)0;
        uint32_t *l_256[10] = {(void*)0,&p_830->g_60.f0,(void*)0,&p_830->g_60.f0,(void*)0,(void*)0,&p_830->g_60.f0,(void*)0,&p_830->g_60.f0,(void*)0};
        int32_t l_257 = 1L;
        int32_t l_258 = (-5L);
        int64_t **l_261 = &l_234;
        VECTOR(int16_t, 4) l_272 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 1L), 1L);
        union U2 **l_291 = &l_159;
        int32_t l_304 = 0x03F634CEL;
        int16_t ***l_344 = &l_231;
        int16_t ***l_347 = &p_830->g_346;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_225[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_237[i] = &l_190;
        for (i = 0; i < 2; i++)
            l_238[i] = &l_239;
        (*p_156) = (((*l_234) &= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 2))(1L, 0x1F1F8B01E69F638CL)).yyxxyxxxxxyyxyxx, ((VECTOR(int64_t, 2))(l_213.yx)).yxxyyxxyxyyyxxyy))).s2159, ((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(9L, 0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_830->g_214.sa5f5d61c98cff197)).s6e, ((VECTOR(int32_t, 8))(l_215.xyyyxxyx)).s66, ((VECTOR(int32_t, 2))(0x0DE9F75FL, 0L))))).xxxy)), 0x2F0F951EL, ((safe_rshift_func_uint16_t_u_s(p_157, (safe_mod_func_uint32_t_u_u(p_157, (safe_rshift_func_uint8_t_u_s(p_157, l_213.x)))))) == (((*l_224) = (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(1L, 0x13C8L)).hi, 8))) == ((VECTOR(uint8_t, 2))(0UL, 0xA1L)).lo)), 8L, 0x3EF140DDL)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))((((p_830->g_182.f7 = ((p_830->g_50.x--) == (l_173 != (l_229 = l_224)))) , ((*l_231) = l_230)) != ((*l_233) = l_232)), ((VECTOR(int32_t, 2))(0x44009B8FL)), 4L)).zzxwwxzx))).even, ((VECTOR(int32_t, 4))(0x5ADF492DL))))), 0x2C32E7B3L, 0x2D0A15EDL)).sd2b9, ((VECTOR(uint32_t, 4))(4294967295UL)))))))))).z, 0x34B2B7A41384D2E4L)), GROUP_DIVERGE(1, 1))), 0UL)) | l_213.x), p_157)) , (-9L)), l_199[1].f0))) > l_235);
        l_166 |= ((((*l_236) = &p_830->g_181) != (l_240[1][1] = &p_830->g_181)) , (safe_mod_func_int16_t_s_s(((((void*)0 != p_830->g_109) , (safe_rshift_func_int16_t_s_u(((void*)0 != (*l_158)), (GROUP_DIVERGE(1, 1) <= (safe_unary_minus_func_int64_t_s(p_157)))))) , ((p_157 <= (l_258 = ((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_246.xxyx)))), 0x502D7826L, ((VECTOR(uint32_t, 2))(l_247.s01)), (l_257 = (p_830->g_248 == &p_830->g_249)), p_830->g_51.s2, 0UL, ((VECTOR(uint32_t, 4))(4294967295UL)), 3UL, 0x3634BA4EL)).hi)).even)))).zxzywyxxyxywzwzw, ((VECTOR(uint32_t, 16))(0xDE2EC5B3L))))).s8)) ^ 0xC9L)), (-1L))));
        if ((safe_sub_func_uint16_t_u_u((p_830->g_109 != ((*l_261) = &l_189)), 65535UL)))
        { /* block id: 97 */
            int8_t l_277 = 0x27L;
            int32_t l_286[3];
            int i;
            for (i = 0; i < 3; i++)
                l_286[i] = (-5L);
            atomic_and(&p_830->g_atomic_reduction[get_linear_group_id()], 0x0D279C50L);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_830->v_collective += p_830->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            for (l_202.f0 = (-6); (l_202.f0 != (-25)); l_202.f0--)
            { /* block id: 101 */
                int64_t **l_264 = &l_234;
                int32_t l_276 = 7L;
                int32_t l_305 = (-5L);
                int32_t l_306 = 1L;
                int32_t l_307 = 0x6409F750L;
                int32_t l_308 = (-1L);
                int32_t l_309 = 9L;
                VECTOR(int32_t, 2) l_310 = (VECTOR(int32_t, 2))((-3L), 0x12EF3164L);
                uint32_t l_311 = 4294967295UL;
                int i;
                if ((**p_830->g_68))
                { /* block id: 102 */
                    int32_t **l_265[6] = {&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69};
                    int i;
                    atomic_max(&p_830->g_atomic_reduction[get_linear_group_id()], ((&l_234 != ((p_157 != p_157) , l_264)) , (*p_830->g_69)));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_830->v_collective += p_830->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*p_830->g_68) = (*p_830->g_68);
                    p_830->g_26[1][1] &= (**p_830->g_68);
                }
                else
                { /* block id: 106 */
                    int32_t *l_295 = &l_162;
                    int32_t *l_296 = &l_162;
                    int32_t *l_297 = &p_830->g_26[1][1];
                    int32_t *l_298 = &p_830->g_182.f5;
                    int32_t *l_299 = (void*)0;
                    int32_t *l_300 = &p_830->g_11[0];
                    int32_t *l_301 = &l_286[1];
                    int32_t *l_302 = &p_830->g_11[0];
                    int32_t *l_303[9][3] = {{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]},{&l_286[2],&l_162,&l_286[0]}};
                    int i, j;
                    if (l_190)
                    { /* block id: 107 */
                        return (*p_156);
                    }
                    else
                    { /* block id: 109 */
                        VECTOR(int8_t, 2) l_287 = (VECTOR(int8_t, 2))(1L, 0x48L);
                        int64_t **l_290 = &l_234;
                        int32_t *l_292 = &p_830->g_26[1][8];
                        int32_t **l_294 = &l_292;
                        int i;
                        (*l_292) &= (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((*p_156), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(l_272.ywxy)).wwxzxwzyxyzwxxyy, ((VECTOR(uint16_t, 4))(FAKE_DIVERGE(p_830->local_0_offset, get_local_id(0), 10), FAKE_DIVERGE(p_830->global_0_offset, get_global_id(0), 10), 65528UL, 1UL)).yxxwwwzywxwwxxwz))).sf)) , ((*p_156) <= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_273.xxyxyyyyyxxxxyyy)))).sc | (safe_rshift_func_uint16_t_u_s((+l_276), ((**p_830->g_248) , ((0UL | (0xE8445573L ^ GROUP_DIVERGE(2, 1))) || ((((((((--p_830->g_52.sb) > (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((((((safe_mul_func_uint8_t_u_u((l_286[2] = l_276), ((VECTOR(int8_t, 8))(l_287.xyyxxxyy)).s4)) & ((((p_830->g_288 == l_290) != 0x2A97E7C0L) && p_830->g_24) ^ GROUP_DIVERGE(2, 1))) | 0xEE5F72F8L) , (*p_156)) , FAKE_DIVERGE(p_830->global_1_offset, get_global_id(1), 10)) != 0x4A1BCADBL), l_213.y)), 15))) , p_157) < p_157) != p_157) >= 0x6692C0D943B245BDL) , (void*)0) == l_291)))))))) , (void*)0) == (void*)0), 15)), l_276));
                        if (l_189)
                            continue;
                        (*l_294) = p_156;
                        if ((*p_156))
                            continue;
                    }
                    l_311++;
                    (*l_297) = (**p_830->g_68);
                }
                for (l_307 = 0; (l_307 >= 29); l_307 = safe_add_func_uint16_t_u_u(l_307, 7))
                { /* block id: 122 */
                    (*p_830->g_69) ^= ((VECTOR(int32_t, 2))(p_830->g_316.xy)).even;
                }
            }
        }
        else
        { /* block id: 126 */
            union U2 **l_323[9][8] = {{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159},{(void*)0,&l_159,&l_159,(void*)0,&l_159,(void*)0,&l_159,&l_159}};
            union U2 ***l_324 = &l_323[4][3];
            int32_t l_333 = 9L;
            union U2 ****l_337[8] = {&p_830->g_334,&p_830->g_334,&p_830->g_334,&p_830->g_334,&p_830->g_334,&p_830->g_334,&p_830->g_334,&p_830->g_334};
            struct S1 *l_341 = &l_199[1];
            struct S1 **l_340 = &l_341;
            struct S1 ***l_339 = &l_340;
            int i, j;
            l_162 &= (safe_add_func_int32_t_s_s((*p_830->g_69), ((65526UL || (safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((((*l_324) = l_323[0][4]) == ((safe_mod_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(p_157, (l_189 != ((VECTOR(int8_t, 2))(p_830->g_330.s32)).even))))) , (safe_div_func_uint64_t_u_u(p_157, ((*l_234) = (l_333 || ((l_338[3][5][4] = p_830->g_334) != (void*)0)))))) <= 255UL), 6L)) , (void*)0)) , (*p_830->g_68)) != &l_304), 0x0BL)), p_157))) ^ p_830->g_101.z)));
            (*l_339) = (void*)0;
            (*p_830->g_69) ^= (safe_div_func_uint64_t_u_u(((*p_830->g_336) , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(0xB192F1295B1A4478L, 3UL)).xxyx, ((VECTOR(uint64_t, 2))(18446744073709551608UL, 2UL)).xyxx))), ((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(0x36D6CFD9D4A11782L, 9UL)), 9UL))))).yywxwwwz)).s3), p_157));
        }
        (*l_347) = ((*l_344) = &l_230);
    }
    if ((atomic_inc(&p_830->g_atomic_input[29 * get_linear_group_id() + 0]) == 0))
    { /* block id: 138 */
        int32_t l_348[2][5] = {{0x6502A305L,0x6502A305L,0x6502A305L,0x6502A305L,0x6502A305L},{0x6502A305L,0x6502A305L,0x6502A305L,0x6502A305L,0x6502A305L}};
        int i, j;
        for (l_348[1][4] = 0; (l_348[1][4] == 24); l_348[1][4] = safe_add_func_int8_t_s_s(l_348[1][4], 6))
        { /* block id: 141 */
            int32_t l_351[9][10] = {{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L},{0x261DB9A2L,6L,0x214C7D38L,(-1L),0L,0x2305750DL,3L,1L,6L,0x6569B615L}};
            uint64_t l_352 = 1UL;
            int64_t l_353 = 1L;
            uint32_t l_354 = 1UL;
            uint8_t l_355 = 0UL;
            uint16_t l_356 = 0x0A20L;
            VECTOR(int32_t, 4) l_357 = (VECTOR(int32_t, 4))(0x10AEB036L, (VECTOR(int32_t, 2))(0x10AEB036L, (-8L)), (-8L));
            VECTOR(uint64_t, 8) l_358 = (VECTOR(uint64_t, 8))(0xEBCB20591139D9ACL, (VECTOR(uint64_t, 4))(0xEBCB20591139D9ACL, (VECTOR(uint64_t, 2))(0xEBCB20591139D9ACL, 4UL), 4UL), 4UL, 0xEBCB20591139D9ACL, 4UL);
            uint64_t l_359 = 0xF3B7FE7ACB5062E5L;
            int16_t l_360 = 0x43A5L;
            uint64_t l_361 = 0UL;
            int i, j;
            l_358.s1 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((l_352 ^= l_351[2][9]) , (l_354 = l_353)), 0x23A6EA59L, (l_356 = (l_355 , 1L)), 1L, 0x2ABF6E8AL, 0x3794DB26L, 0L, 0x41601FB9L)).s1274646274776472, ((VECTOR(int32_t, 4))(l_357.xxzy)).zxwyxyywwwxxwzyy))).sd7dd)).z;
            l_361 = (l_359 , l_360);
        }
        unsigned int result = 0;
        int l_348_i0, l_348_i1;
        for (l_348_i0 = 0; l_348_i0 < 2; l_348_i0++) {
            for (l_348_i1 = 0; l_348_i1 < 5; l_348_i1++) {
                result += l_348[l_348_i0][l_348_i1];
            }
        }
        atomic_add(&p_830->g_special_values[29 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 148 */
        (1 + 1);
    }
    (*p_830->g_383) = ((p_157 < (-7L)) && ((safe_rshift_func_int8_t_s_u(l_247.s5, l_199[1].f0)) <= (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((*p_156) = (safe_add_func_uint8_t_u_u(p_830->g_182.f3, (+((((((safe_lshift_func_uint16_t_u_u(((p_830->g_51.s5 = ((VECTOR(uint16_t, 4))(p_830->g_198, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_376.xyyx)).odd)).xxxxyyxy)).s71)), 0x5F72L)).x) | (l_162 = (0L == (((VECTOR(int16_t, 16))(p_830->g_380.yywzzzyywxwwzyxz)).s0 && 0x3A81L)))), ((safe_add_func_uint64_t_u_u((&l_158 != &l_158), GROUP_DIVERGE(1, 1))) > p_157))) | 0x639EL) , l_199[0]) , p_830->g_181) , (void*)0) == &l_229))))), p_830->g_182.f4)), 2)) <= p_830->g_380.x) && 0L)));
    return l_384;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[29];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 29; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[29];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 29; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_comm_values[i] = 1;
    struct S3 c_831;
    struct S3* p_830 = &c_831;
    struct S3 c_832 = {
        0x3B1A9565L, // p_830->g_2
        0L, // p_830->g_3
        0x51D8F8F5L, // p_830->g_4
        0x5165352FL, // p_830->g_5
        {0x729ACD40L}, // p_830->g_11
        1L, // p_830->g_21
        0x7BA7DA82L, // p_830->g_24
        0x40C8E82BL, // p_830->g_25
        {{0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L},{0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L},{0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L,0x495DD686L,0L,0x495DD686L}}, // p_830->g_26
        (VECTOR(uint16_t, 2))(1UL, 0xEAE4L), // p_830->g_50
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL), 65535UL, 8UL, 65535UL), // p_830->g_51
        (VECTOR(uint64_t, 16))(0xD6DA29A6A910B13AL, (VECTOR(uint64_t, 4))(0xD6DA29A6A910B13AL, (VECTOR(uint64_t, 2))(0xD6DA29A6A910B13AL, 0UL), 0UL), 0UL, 0xD6DA29A6A910B13AL, 0UL, (VECTOR(uint64_t, 2))(0xD6DA29A6A910B13AL, 0UL), (VECTOR(uint64_t, 2))(0xD6DA29A6A910B13AL, 0UL), 0xD6DA29A6A910B13AL, 0UL, 0xD6DA29A6A910B13AL, 0UL), // p_830->g_52
        {4UL}, // p_830->g_60
        &p_830->g_60, // p_830->g_59
        (-4L), // p_830->g_66
        &p_830->g_26[1][4], // p_830->g_69
        &p_830->g_69, // p_830->g_68
        {0x68EBL}, // p_830->g_80
        (VECTOR(uint64_t, 2))(1UL, 3UL), // p_830->g_91
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x419D3951L), 0x419D3951L), // p_830->g_101
        (void*)0, // p_830->g_109
        &p_830->g_109, // p_830->g_108
        {0x61D0L}, // p_830->g_114
        {0x0132L}, // p_830->g_116
        (-3L), // p_830->g_181
        {0x0D1F882ED2A023C0L,1UL,0x99ADD518L,2L,0x06015CD3094BA521L,-1L,0x8C9BA08DL,2L,0x49A6DFD2DB431697L}, // p_830->g_182
        0xD3L, // p_830->g_198
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_830->g_214
        0x5AEFL, // p_830->g_250
        &p_830->g_250, // p_830->g_249
        &p_830->g_249, // p_830->g_248
        (void*)0, // p_830->g_289
        &p_830->g_289, // p_830->g_288
        (void*)0, // p_830->g_293
        (VECTOR(int32_t, 2))(9L, 0x2CE8FD7EL), // p_830->g_316
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-6L)), (-6L)), (-6L), (-7L), (-6L)), // p_830->g_330
        &p_830->g_60, // p_830->g_336
        &p_830->g_336, // p_830->g_335
        &p_830->g_335, // p_830->g_334
        (void*)0, // p_830->g_346
        {{&p_830->g_346,&p_830->g_346},{&p_830->g_346,&p_830->g_346},{&p_830->g_346,&p_830->g_346}}, // p_830->g_345
        (VECTOR(int16_t, 4))(0x35F3L, (VECTOR(int16_t, 2))(0x35F3L, 0x0703L), 0x0703L), // p_830->g_380
        &p_830->g_26[1][1], // p_830->g_383
        {&p_830->g_182.f5,&p_830->g_182.f5,&p_830->g_182.f5,&p_830->g_182.f5,&p_830->g_182.f5,&p_830->g_182.f5}, // p_830->g_390
        9L, // p_830->g_398
        (void*)0, // p_830->g_408
        &p_830->g_408, // p_830->g_407
        (VECTOR(uint16_t, 4))(0x19B9L, (VECTOR(uint16_t, 2))(0x19B9L, 0xF39EL), 0xF39EL), // p_830->g_415
        {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}}, // p_830->g_475
        &p_830->g_475[0][0][0], // p_830->g_474
        &p_830->g_116, // p_830->g_480
        &p_830->g_480, // p_830->g_479
        &p_830->g_479, // p_830->g_478
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x56L), 0x56L), // p_830->g_483
        {{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8},{&p_830->g_182.f0,(void*)0,&p_830->g_182.f8}}, // p_830->g_521
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x8A4CL), 0x8A4CL), 0x8A4CL, 1UL, 0x8A4CL, (VECTOR(uint16_t, 2))(1UL, 0x8A4CL), (VECTOR(uint16_t, 2))(1UL, 0x8A4CL), 1UL, 0x8A4CL, 1UL, 0x8A4CL), // p_830->g_551
        (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x2F8BFF56L), 0x2F8BFF56L), 0x2F8BFF56L, 5L, 0x2F8BFF56L, (VECTOR(int32_t, 2))(5L, 0x2F8BFF56L), (VECTOR(int32_t, 2))(5L, 0x2F8BFF56L), 5L, 0x2F8BFF56L, 5L, 0x2F8BFF56L), // p_830->g_560
        (VECTOR(uint32_t, 2))(7UL, 0x3891B830L), // p_830->g_575
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xCAF7F022L), 0xCAF7F022L), // p_830->g_578
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x46F818C4L), 0x46F818C4L), 0x46F818C4L, 0UL, 0x46F818C4L, (VECTOR(uint32_t, 2))(0UL, 0x46F818C4L), (VECTOR(uint32_t, 2))(0UL, 0x46F818C4L), 0UL, 0x46F818C4L, 0UL, 0x46F818C4L), // p_830->g_580
        (VECTOR(uint64_t, 8))(0x465AE333F7A588D8L, (VECTOR(uint64_t, 4))(0x465AE333F7A588D8L, (VECTOR(uint64_t, 2))(0x465AE333F7A588D8L, 0xB0618AB0D5A16AE0L), 0xB0618AB0D5A16AE0L), 0xB0618AB0D5A16AE0L, 0x465AE333F7A588D8L, 0xB0618AB0D5A16AE0L), // p_830->g_581
        &p_830->g_182, // p_830->g_585
        {&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69,&p_830->g_69}, // p_830->g_587
        &p_830->g_69, // p_830->g_588
        &p_830->g_69, // p_830->g_589
        255UL, // p_830->g_590
        0x4FL, // p_830->g_623
        &p_830->g_108, // p_830->g_628
        &p_830->g_182.f8, // p_830->g_632
        (VECTOR(int16_t, 16))(0x7EB2L, (VECTOR(int16_t, 4))(0x7EB2L, (VECTOR(int16_t, 2))(0x7EB2L, 0x32C6L), 0x32C6L), 0x32C6L, 0x7EB2L, 0x32C6L, (VECTOR(int16_t, 2))(0x7EB2L, 0x32C6L), (VECTOR(int16_t, 2))(0x7EB2L, 0x32C6L), 0x7EB2L, 0x32C6L, 0x7EB2L, 0x32C6L), // p_830->g_633
        (VECTOR(int64_t, 4))(0x05B180E4EADC1B42L, (VECTOR(int64_t, 2))(0x05B180E4EADC1B42L, 0x273BD8A8B038DAAFL), 0x273BD8A8B038DAAFL), // p_830->g_644
        &p_830->g_69, // p_830->g_675
        (VECTOR(uint8_t, 2))(250UL, 0xCBL), // p_830->g_681
        (VECTOR(int32_t, 8))(0x63DBCCDEL, (VECTOR(int32_t, 4))(0x63DBCCDEL, (VECTOR(int32_t, 2))(0x63DBCCDEL, 7L), 7L), 7L, 0x63DBCCDEL, 7L), // p_830->g_698
        (VECTOR(int16_t, 4))(0x05ACL, (VECTOR(int16_t, 2))(0x05ACL, 0x2F6BL), 0x2F6BL), // p_830->g_705
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_830->g_709
        (VECTOR(int32_t, 4))(0x2B3EE693L, (VECTOR(int32_t, 2))(0x2B3EE693L, 0x2E402A65L), 0x2E402A65L), // p_830->g_718
        (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 9L), 9L), // p_830->g_728
        &p_830->g_479, // p_830->g_742
        &p_830->g_335, // p_830->g_750
        &p_830->g_750, // p_830->g_749
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 6L), 6L), // p_830->g_760
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x3E19F5EFL), 0x3E19F5EFL), // p_830->g_764
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x09L), 0x09L), // p_830->g_765
        (VECTOR(int8_t, 16))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 1L), 1L), 1L, 0x3CL, 1L, (VECTOR(int8_t, 2))(0x3CL, 1L), (VECTOR(int8_t, 2))(0x3CL, 1L), 0x3CL, 1L, 0x3CL, 1L), // p_830->g_786
        (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 1UL), 1UL), 1UL, 6UL, 1UL, (VECTOR(uint8_t, 2))(6UL, 1UL), (VECTOR(uint8_t, 2))(6UL, 1UL), 6UL, 1UL, 6UL, 1UL), // p_830->g_797
        0x4CL, // p_830->g_807
        &p_830->g_69, // p_830->g_829
        0, // p_830->v_collective
        sequence_input[get_global_id(0)], // p_830->global_0_offset
        sequence_input[get_global_id(1)], // p_830->global_1_offset
        sequence_input[get_global_id(2)], // p_830->global_2_offset
        sequence_input[get_local_id(0)], // p_830->local_0_offset
        sequence_input[get_local_id(1)], // p_830->local_1_offset
        sequence_input[get_local_id(2)], // p_830->local_2_offset
        sequence_input[get_group_id(0)], // p_830->group_0_offset
        sequence_input[get_group_id(1)], // p_830->group_1_offset
        sequence_input[get_group_id(2)], // p_830->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 79)), permutations[0][get_linear_local_id()])), // p_830->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_831 = c_832;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_830);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_830->g_2, "p_830->g_2", print_hash_value);
    transparent_crc(p_830->g_3, "p_830->g_3", print_hash_value);
    transparent_crc(p_830->g_4, "p_830->g_4", print_hash_value);
    transparent_crc(p_830->g_5, "p_830->g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_830->g_11[i], "p_830->g_11[i]", print_hash_value);

    }
    transparent_crc(p_830->g_21, "p_830->g_21", print_hash_value);
    transparent_crc(p_830->g_24, "p_830->g_24", print_hash_value);
    transparent_crc(p_830->g_25, "p_830->g_25", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_830->g_26[i][j], "p_830->g_26[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_830->g_50.x, "p_830->g_50.x", print_hash_value);
    transparent_crc(p_830->g_50.y, "p_830->g_50.y", print_hash_value);
    transparent_crc(p_830->g_51.s0, "p_830->g_51.s0", print_hash_value);
    transparent_crc(p_830->g_51.s1, "p_830->g_51.s1", print_hash_value);
    transparent_crc(p_830->g_51.s2, "p_830->g_51.s2", print_hash_value);
    transparent_crc(p_830->g_51.s3, "p_830->g_51.s3", print_hash_value);
    transparent_crc(p_830->g_51.s4, "p_830->g_51.s4", print_hash_value);
    transparent_crc(p_830->g_51.s5, "p_830->g_51.s5", print_hash_value);
    transparent_crc(p_830->g_51.s6, "p_830->g_51.s6", print_hash_value);
    transparent_crc(p_830->g_51.s7, "p_830->g_51.s7", print_hash_value);
    transparent_crc(p_830->g_52.s0, "p_830->g_52.s0", print_hash_value);
    transparent_crc(p_830->g_52.s1, "p_830->g_52.s1", print_hash_value);
    transparent_crc(p_830->g_52.s2, "p_830->g_52.s2", print_hash_value);
    transparent_crc(p_830->g_52.s3, "p_830->g_52.s3", print_hash_value);
    transparent_crc(p_830->g_52.s4, "p_830->g_52.s4", print_hash_value);
    transparent_crc(p_830->g_52.s5, "p_830->g_52.s5", print_hash_value);
    transparent_crc(p_830->g_52.s6, "p_830->g_52.s6", print_hash_value);
    transparent_crc(p_830->g_52.s7, "p_830->g_52.s7", print_hash_value);
    transparent_crc(p_830->g_52.s8, "p_830->g_52.s8", print_hash_value);
    transparent_crc(p_830->g_52.s9, "p_830->g_52.s9", print_hash_value);
    transparent_crc(p_830->g_52.sa, "p_830->g_52.sa", print_hash_value);
    transparent_crc(p_830->g_52.sb, "p_830->g_52.sb", print_hash_value);
    transparent_crc(p_830->g_52.sc, "p_830->g_52.sc", print_hash_value);
    transparent_crc(p_830->g_52.sd, "p_830->g_52.sd", print_hash_value);
    transparent_crc(p_830->g_52.se, "p_830->g_52.se", print_hash_value);
    transparent_crc(p_830->g_52.sf, "p_830->g_52.sf", print_hash_value);
    transparent_crc(p_830->g_60.f0, "p_830->g_60.f0", print_hash_value);
    transparent_crc(p_830->g_66, "p_830->g_66", print_hash_value);
    transparent_crc(p_830->g_80.f0, "p_830->g_80.f0", print_hash_value);
    transparent_crc(p_830->g_91.x, "p_830->g_91.x", print_hash_value);
    transparent_crc(p_830->g_91.y, "p_830->g_91.y", print_hash_value);
    transparent_crc(p_830->g_101.x, "p_830->g_101.x", print_hash_value);
    transparent_crc(p_830->g_101.y, "p_830->g_101.y", print_hash_value);
    transparent_crc(p_830->g_101.z, "p_830->g_101.z", print_hash_value);
    transparent_crc(p_830->g_101.w, "p_830->g_101.w", print_hash_value);
    transparent_crc(p_830->g_114.f0, "p_830->g_114.f0", print_hash_value);
    transparent_crc(p_830->g_116.f0, "p_830->g_116.f0", print_hash_value);
    transparent_crc(p_830->g_181, "p_830->g_181", print_hash_value);
    transparent_crc(p_830->g_182.f0, "p_830->g_182.f0", print_hash_value);
    transparent_crc(p_830->g_182.f1, "p_830->g_182.f1", print_hash_value);
    transparent_crc(p_830->g_182.f2, "p_830->g_182.f2", print_hash_value);
    transparent_crc(p_830->g_182.f3, "p_830->g_182.f3", print_hash_value);
    transparent_crc(p_830->g_182.f4, "p_830->g_182.f4", print_hash_value);
    transparent_crc(p_830->g_182.f5, "p_830->g_182.f5", print_hash_value);
    transparent_crc(p_830->g_182.f6, "p_830->g_182.f6", print_hash_value);
    transparent_crc(p_830->g_182.f7, "p_830->g_182.f7", print_hash_value);
    transparent_crc(p_830->g_182.f8, "p_830->g_182.f8", print_hash_value);
    transparent_crc(p_830->g_198, "p_830->g_198", print_hash_value);
    transparent_crc(p_830->g_214.s0, "p_830->g_214.s0", print_hash_value);
    transparent_crc(p_830->g_214.s1, "p_830->g_214.s1", print_hash_value);
    transparent_crc(p_830->g_214.s2, "p_830->g_214.s2", print_hash_value);
    transparent_crc(p_830->g_214.s3, "p_830->g_214.s3", print_hash_value);
    transparent_crc(p_830->g_214.s4, "p_830->g_214.s4", print_hash_value);
    transparent_crc(p_830->g_214.s5, "p_830->g_214.s5", print_hash_value);
    transparent_crc(p_830->g_214.s6, "p_830->g_214.s6", print_hash_value);
    transparent_crc(p_830->g_214.s7, "p_830->g_214.s7", print_hash_value);
    transparent_crc(p_830->g_214.s8, "p_830->g_214.s8", print_hash_value);
    transparent_crc(p_830->g_214.s9, "p_830->g_214.s9", print_hash_value);
    transparent_crc(p_830->g_214.sa, "p_830->g_214.sa", print_hash_value);
    transparent_crc(p_830->g_214.sb, "p_830->g_214.sb", print_hash_value);
    transparent_crc(p_830->g_214.sc, "p_830->g_214.sc", print_hash_value);
    transparent_crc(p_830->g_214.sd, "p_830->g_214.sd", print_hash_value);
    transparent_crc(p_830->g_214.se, "p_830->g_214.se", print_hash_value);
    transparent_crc(p_830->g_214.sf, "p_830->g_214.sf", print_hash_value);
    transparent_crc(p_830->g_250, "p_830->g_250", print_hash_value);
    transparent_crc(p_830->g_316.x, "p_830->g_316.x", print_hash_value);
    transparent_crc(p_830->g_316.y, "p_830->g_316.y", print_hash_value);
    transparent_crc(p_830->g_330.s0, "p_830->g_330.s0", print_hash_value);
    transparent_crc(p_830->g_330.s1, "p_830->g_330.s1", print_hash_value);
    transparent_crc(p_830->g_330.s2, "p_830->g_330.s2", print_hash_value);
    transparent_crc(p_830->g_330.s3, "p_830->g_330.s3", print_hash_value);
    transparent_crc(p_830->g_330.s4, "p_830->g_330.s4", print_hash_value);
    transparent_crc(p_830->g_330.s5, "p_830->g_330.s5", print_hash_value);
    transparent_crc(p_830->g_330.s6, "p_830->g_330.s6", print_hash_value);
    transparent_crc(p_830->g_330.s7, "p_830->g_330.s7", print_hash_value);
    transparent_crc(p_830->g_380.x, "p_830->g_380.x", print_hash_value);
    transparent_crc(p_830->g_380.y, "p_830->g_380.y", print_hash_value);
    transparent_crc(p_830->g_380.z, "p_830->g_380.z", print_hash_value);
    transparent_crc(p_830->g_380.w, "p_830->g_380.w", print_hash_value);
    transparent_crc(p_830->g_398, "p_830->g_398", print_hash_value);
    transparent_crc(p_830->g_415.x, "p_830->g_415.x", print_hash_value);
    transparent_crc(p_830->g_415.y, "p_830->g_415.y", print_hash_value);
    transparent_crc(p_830->g_415.z, "p_830->g_415.z", print_hash_value);
    transparent_crc(p_830->g_415.w, "p_830->g_415.w", print_hash_value);
    transparent_crc(p_830->g_483.x, "p_830->g_483.x", print_hash_value);
    transparent_crc(p_830->g_483.y, "p_830->g_483.y", print_hash_value);
    transparent_crc(p_830->g_483.z, "p_830->g_483.z", print_hash_value);
    transparent_crc(p_830->g_483.w, "p_830->g_483.w", print_hash_value);
    transparent_crc(p_830->g_551.s0, "p_830->g_551.s0", print_hash_value);
    transparent_crc(p_830->g_551.s1, "p_830->g_551.s1", print_hash_value);
    transparent_crc(p_830->g_551.s2, "p_830->g_551.s2", print_hash_value);
    transparent_crc(p_830->g_551.s3, "p_830->g_551.s3", print_hash_value);
    transparent_crc(p_830->g_551.s4, "p_830->g_551.s4", print_hash_value);
    transparent_crc(p_830->g_551.s5, "p_830->g_551.s5", print_hash_value);
    transparent_crc(p_830->g_551.s6, "p_830->g_551.s6", print_hash_value);
    transparent_crc(p_830->g_551.s7, "p_830->g_551.s7", print_hash_value);
    transparent_crc(p_830->g_551.s8, "p_830->g_551.s8", print_hash_value);
    transparent_crc(p_830->g_551.s9, "p_830->g_551.s9", print_hash_value);
    transparent_crc(p_830->g_551.sa, "p_830->g_551.sa", print_hash_value);
    transparent_crc(p_830->g_551.sb, "p_830->g_551.sb", print_hash_value);
    transparent_crc(p_830->g_551.sc, "p_830->g_551.sc", print_hash_value);
    transparent_crc(p_830->g_551.sd, "p_830->g_551.sd", print_hash_value);
    transparent_crc(p_830->g_551.se, "p_830->g_551.se", print_hash_value);
    transparent_crc(p_830->g_551.sf, "p_830->g_551.sf", print_hash_value);
    transparent_crc(p_830->g_560.s0, "p_830->g_560.s0", print_hash_value);
    transparent_crc(p_830->g_560.s1, "p_830->g_560.s1", print_hash_value);
    transparent_crc(p_830->g_560.s2, "p_830->g_560.s2", print_hash_value);
    transparent_crc(p_830->g_560.s3, "p_830->g_560.s3", print_hash_value);
    transparent_crc(p_830->g_560.s4, "p_830->g_560.s4", print_hash_value);
    transparent_crc(p_830->g_560.s5, "p_830->g_560.s5", print_hash_value);
    transparent_crc(p_830->g_560.s6, "p_830->g_560.s6", print_hash_value);
    transparent_crc(p_830->g_560.s7, "p_830->g_560.s7", print_hash_value);
    transparent_crc(p_830->g_560.s8, "p_830->g_560.s8", print_hash_value);
    transparent_crc(p_830->g_560.s9, "p_830->g_560.s9", print_hash_value);
    transparent_crc(p_830->g_560.sa, "p_830->g_560.sa", print_hash_value);
    transparent_crc(p_830->g_560.sb, "p_830->g_560.sb", print_hash_value);
    transparent_crc(p_830->g_560.sc, "p_830->g_560.sc", print_hash_value);
    transparent_crc(p_830->g_560.sd, "p_830->g_560.sd", print_hash_value);
    transparent_crc(p_830->g_560.se, "p_830->g_560.se", print_hash_value);
    transparent_crc(p_830->g_560.sf, "p_830->g_560.sf", print_hash_value);
    transparent_crc(p_830->g_575.x, "p_830->g_575.x", print_hash_value);
    transparent_crc(p_830->g_575.y, "p_830->g_575.y", print_hash_value);
    transparent_crc(p_830->g_578.x, "p_830->g_578.x", print_hash_value);
    transparent_crc(p_830->g_578.y, "p_830->g_578.y", print_hash_value);
    transparent_crc(p_830->g_578.z, "p_830->g_578.z", print_hash_value);
    transparent_crc(p_830->g_578.w, "p_830->g_578.w", print_hash_value);
    transparent_crc(p_830->g_580.s0, "p_830->g_580.s0", print_hash_value);
    transparent_crc(p_830->g_580.s1, "p_830->g_580.s1", print_hash_value);
    transparent_crc(p_830->g_580.s2, "p_830->g_580.s2", print_hash_value);
    transparent_crc(p_830->g_580.s3, "p_830->g_580.s3", print_hash_value);
    transparent_crc(p_830->g_580.s4, "p_830->g_580.s4", print_hash_value);
    transparent_crc(p_830->g_580.s5, "p_830->g_580.s5", print_hash_value);
    transparent_crc(p_830->g_580.s6, "p_830->g_580.s6", print_hash_value);
    transparent_crc(p_830->g_580.s7, "p_830->g_580.s7", print_hash_value);
    transparent_crc(p_830->g_580.s8, "p_830->g_580.s8", print_hash_value);
    transparent_crc(p_830->g_580.s9, "p_830->g_580.s9", print_hash_value);
    transparent_crc(p_830->g_580.sa, "p_830->g_580.sa", print_hash_value);
    transparent_crc(p_830->g_580.sb, "p_830->g_580.sb", print_hash_value);
    transparent_crc(p_830->g_580.sc, "p_830->g_580.sc", print_hash_value);
    transparent_crc(p_830->g_580.sd, "p_830->g_580.sd", print_hash_value);
    transparent_crc(p_830->g_580.se, "p_830->g_580.se", print_hash_value);
    transparent_crc(p_830->g_580.sf, "p_830->g_580.sf", print_hash_value);
    transparent_crc(p_830->g_581.s0, "p_830->g_581.s0", print_hash_value);
    transparent_crc(p_830->g_581.s1, "p_830->g_581.s1", print_hash_value);
    transparent_crc(p_830->g_581.s2, "p_830->g_581.s2", print_hash_value);
    transparent_crc(p_830->g_581.s3, "p_830->g_581.s3", print_hash_value);
    transparent_crc(p_830->g_581.s4, "p_830->g_581.s4", print_hash_value);
    transparent_crc(p_830->g_581.s5, "p_830->g_581.s5", print_hash_value);
    transparent_crc(p_830->g_581.s6, "p_830->g_581.s6", print_hash_value);
    transparent_crc(p_830->g_581.s7, "p_830->g_581.s7", print_hash_value);
    transparent_crc(p_830->g_590, "p_830->g_590", print_hash_value);
    transparent_crc(p_830->g_623, "p_830->g_623", print_hash_value);
    transparent_crc(p_830->g_633.s0, "p_830->g_633.s0", print_hash_value);
    transparent_crc(p_830->g_633.s1, "p_830->g_633.s1", print_hash_value);
    transparent_crc(p_830->g_633.s2, "p_830->g_633.s2", print_hash_value);
    transparent_crc(p_830->g_633.s3, "p_830->g_633.s3", print_hash_value);
    transparent_crc(p_830->g_633.s4, "p_830->g_633.s4", print_hash_value);
    transparent_crc(p_830->g_633.s5, "p_830->g_633.s5", print_hash_value);
    transparent_crc(p_830->g_633.s6, "p_830->g_633.s6", print_hash_value);
    transparent_crc(p_830->g_633.s7, "p_830->g_633.s7", print_hash_value);
    transparent_crc(p_830->g_633.s8, "p_830->g_633.s8", print_hash_value);
    transparent_crc(p_830->g_633.s9, "p_830->g_633.s9", print_hash_value);
    transparent_crc(p_830->g_633.sa, "p_830->g_633.sa", print_hash_value);
    transparent_crc(p_830->g_633.sb, "p_830->g_633.sb", print_hash_value);
    transparent_crc(p_830->g_633.sc, "p_830->g_633.sc", print_hash_value);
    transparent_crc(p_830->g_633.sd, "p_830->g_633.sd", print_hash_value);
    transparent_crc(p_830->g_633.se, "p_830->g_633.se", print_hash_value);
    transparent_crc(p_830->g_633.sf, "p_830->g_633.sf", print_hash_value);
    transparent_crc(p_830->g_644.x, "p_830->g_644.x", print_hash_value);
    transparent_crc(p_830->g_644.y, "p_830->g_644.y", print_hash_value);
    transparent_crc(p_830->g_644.z, "p_830->g_644.z", print_hash_value);
    transparent_crc(p_830->g_644.w, "p_830->g_644.w", print_hash_value);
    transparent_crc(p_830->g_681.x, "p_830->g_681.x", print_hash_value);
    transparent_crc(p_830->g_681.y, "p_830->g_681.y", print_hash_value);
    transparent_crc(p_830->g_698.s0, "p_830->g_698.s0", print_hash_value);
    transparent_crc(p_830->g_698.s1, "p_830->g_698.s1", print_hash_value);
    transparent_crc(p_830->g_698.s2, "p_830->g_698.s2", print_hash_value);
    transparent_crc(p_830->g_698.s3, "p_830->g_698.s3", print_hash_value);
    transparent_crc(p_830->g_698.s4, "p_830->g_698.s4", print_hash_value);
    transparent_crc(p_830->g_698.s5, "p_830->g_698.s5", print_hash_value);
    transparent_crc(p_830->g_698.s6, "p_830->g_698.s6", print_hash_value);
    transparent_crc(p_830->g_698.s7, "p_830->g_698.s7", print_hash_value);
    transparent_crc(p_830->g_705.x, "p_830->g_705.x", print_hash_value);
    transparent_crc(p_830->g_705.y, "p_830->g_705.y", print_hash_value);
    transparent_crc(p_830->g_705.z, "p_830->g_705.z", print_hash_value);
    transparent_crc(p_830->g_705.w, "p_830->g_705.w", print_hash_value);
    transparent_crc(p_830->g_709.s0, "p_830->g_709.s0", print_hash_value);
    transparent_crc(p_830->g_709.s1, "p_830->g_709.s1", print_hash_value);
    transparent_crc(p_830->g_709.s2, "p_830->g_709.s2", print_hash_value);
    transparent_crc(p_830->g_709.s3, "p_830->g_709.s3", print_hash_value);
    transparent_crc(p_830->g_709.s4, "p_830->g_709.s4", print_hash_value);
    transparent_crc(p_830->g_709.s5, "p_830->g_709.s5", print_hash_value);
    transparent_crc(p_830->g_709.s6, "p_830->g_709.s6", print_hash_value);
    transparent_crc(p_830->g_709.s7, "p_830->g_709.s7", print_hash_value);
    transparent_crc(p_830->g_709.s8, "p_830->g_709.s8", print_hash_value);
    transparent_crc(p_830->g_709.s9, "p_830->g_709.s9", print_hash_value);
    transparent_crc(p_830->g_709.sa, "p_830->g_709.sa", print_hash_value);
    transparent_crc(p_830->g_709.sb, "p_830->g_709.sb", print_hash_value);
    transparent_crc(p_830->g_709.sc, "p_830->g_709.sc", print_hash_value);
    transparent_crc(p_830->g_709.sd, "p_830->g_709.sd", print_hash_value);
    transparent_crc(p_830->g_709.se, "p_830->g_709.se", print_hash_value);
    transparent_crc(p_830->g_709.sf, "p_830->g_709.sf", print_hash_value);
    transparent_crc(p_830->g_718.x, "p_830->g_718.x", print_hash_value);
    transparent_crc(p_830->g_718.y, "p_830->g_718.y", print_hash_value);
    transparent_crc(p_830->g_718.z, "p_830->g_718.z", print_hash_value);
    transparent_crc(p_830->g_718.w, "p_830->g_718.w", print_hash_value);
    transparent_crc(p_830->g_728.x, "p_830->g_728.x", print_hash_value);
    transparent_crc(p_830->g_728.y, "p_830->g_728.y", print_hash_value);
    transparent_crc(p_830->g_728.z, "p_830->g_728.z", print_hash_value);
    transparent_crc(p_830->g_728.w, "p_830->g_728.w", print_hash_value);
    transparent_crc(p_830->g_760.x, "p_830->g_760.x", print_hash_value);
    transparent_crc(p_830->g_760.y, "p_830->g_760.y", print_hash_value);
    transparent_crc(p_830->g_760.z, "p_830->g_760.z", print_hash_value);
    transparent_crc(p_830->g_760.w, "p_830->g_760.w", print_hash_value);
    transparent_crc(p_830->g_764.x, "p_830->g_764.x", print_hash_value);
    transparent_crc(p_830->g_764.y, "p_830->g_764.y", print_hash_value);
    transparent_crc(p_830->g_764.z, "p_830->g_764.z", print_hash_value);
    transparent_crc(p_830->g_764.w, "p_830->g_764.w", print_hash_value);
    transparent_crc(p_830->g_765.x, "p_830->g_765.x", print_hash_value);
    transparent_crc(p_830->g_765.y, "p_830->g_765.y", print_hash_value);
    transparent_crc(p_830->g_765.z, "p_830->g_765.z", print_hash_value);
    transparent_crc(p_830->g_765.w, "p_830->g_765.w", print_hash_value);
    transparent_crc(p_830->g_786.s0, "p_830->g_786.s0", print_hash_value);
    transparent_crc(p_830->g_786.s1, "p_830->g_786.s1", print_hash_value);
    transparent_crc(p_830->g_786.s2, "p_830->g_786.s2", print_hash_value);
    transparent_crc(p_830->g_786.s3, "p_830->g_786.s3", print_hash_value);
    transparent_crc(p_830->g_786.s4, "p_830->g_786.s4", print_hash_value);
    transparent_crc(p_830->g_786.s5, "p_830->g_786.s5", print_hash_value);
    transparent_crc(p_830->g_786.s6, "p_830->g_786.s6", print_hash_value);
    transparent_crc(p_830->g_786.s7, "p_830->g_786.s7", print_hash_value);
    transparent_crc(p_830->g_786.s8, "p_830->g_786.s8", print_hash_value);
    transparent_crc(p_830->g_786.s9, "p_830->g_786.s9", print_hash_value);
    transparent_crc(p_830->g_786.sa, "p_830->g_786.sa", print_hash_value);
    transparent_crc(p_830->g_786.sb, "p_830->g_786.sb", print_hash_value);
    transparent_crc(p_830->g_786.sc, "p_830->g_786.sc", print_hash_value);
    transparent_crc(p_830->g_786.sd, "p_830->g_786.sd", print_hash_value);
    transparent_crc(p_830->g_786.se, "p_830->g_786.se", print_hash_value);
    transparent_crc(p_830->g_786.sf, "p_830->g_786.sf", print_hash_value);
    transparent_crc(p_830->g_797.s0, "p_830->g_797.s0", print_hash_value);
    transparent_crc(p_830->g_797.s1, "p_830->g_797.s1", print_hash_value);
    transparent_crc(p_830->g_797.s2, "p_830->g_797.s2", print_hash_value);
    transparent_crc(p_830->g_797.s3, "p_830->g_797.s3", print_hash_value);
    transparent_crc(p_830->g_797.s4, "p_830->g_797.s4", print_hash_value);
    transparent_crc(p_830->g_797.s5, "p_830->g_797.s5", print_hash_value);
    transparent_crc(p_830->g_797.s6, "p_830->g_797.s6", print_hash_value);
    transparent_crc(p_830->g_797.s7, "p_830->g_797.s7", print_hash_value);
    transparent_crc(p_830->g_797.s8, "p_830->g_797.s8", print_hash_value);
    transparent_crc(p_830->g_797.s9, "p_830->g_797.s9", print_hash_value);
    transparent_crc(p_830->g_797.sa, "p_830->g_797.sa", print_hash_value);
    transparent_crc(p_830->g_797.sb, "p_830->g_797.sb", print_hash_value);
    transparent_crc(p_830->g_797.sc, "p_830->g_797.sc", print_hash_value);
    transparent_crc(p_830->g_797.sd, "p_830->g_797.sd", print_hash_value);
    transparent_crc(p_830->g_797.se, "p_830->g_797.se", print_hash_value);
    transparent_crc(p_830->g_797.sf, "p_830->g_797.sf", print_hash_value);
    transparent_crc(p_830->g_807, "p_830->g_807", print_hash_value);
    transparent_crc(p_830->v_collective, "p_830->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 29; i++)
            transparent_crc(p_830->g_special_values[i + 29 * get_linear_group_id()], "p_830->g_special_values[i + 29 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 29; i++)
            transparent_crc(p_830->l_special_values[i], "p_830->l_special_values[i]", print_hash_value);
    transparent_crc(p_830->l_comm_values[get_linear_local_id()], "p_830->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_830->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()], "p_830->g_comm_values[get_linear_group_id() * 79 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
