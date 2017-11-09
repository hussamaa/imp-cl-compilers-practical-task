// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,7,41 -l 17,1,1
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

__constant uint32_t permutations[10][17] = {
{13,4,14,9,6,15,2,3,1,11,8,16,12,5,0,7,10}, // permutation 0
{8,3,16,7,14,5,6,0,9,13,1,15,10,11,4,2,12}, // permutation 1
{13,8,11,2,15,1,5,3,0,7,10,6,14,9,12,16,4}, // permutation 2
{12,15,14,8,2,3,7,16,11,6,1,0,13,10,9,5,4}, // permutation 3
{1,10,2,0,6,16,4,3,9,15,14,11,7,5,12,8,13}, // permutation 4
{13,9,10,5,0,16,7,14,6,11,2,15,8,1,3,4,12}, // permutation 5
{3,2,7,10,5,13,1,16,11,9,12,8,14,6,15,4,0}, // permutation 6
{1,14,16,2,6,15,10,9,7,4,13,0,11,3,8,12,5}, // permutation 7
{11,3,1,8,5,0,10,2,14,13,12,7,15,9,4,6,16}, // permutation 8
{8,11,2,0,14,3,16,1,10,5,13,4,12,15,9,7,6} // permutation 9
};

// Seed: 757875220

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
};

union U1 {
   volatile int32_t  f0;
   int8_t * f1;
   int32_t  f2;
   uint64_t  f3;
   int8_t * f4;
};

union U2 {
   int64_t  f0;
   volatile uint32_t  f1;
   int16_t  f2;
   int8_t  f3;
};

struct S3 {
    volatile VECTOR(int32_t, 8) g_202;
    int32_t g_203;
    int32_t g_206;
    int32_t g_227;
    union U2 g_251;
    union U2 *g_250;
    union U2 **g_249;
    uint32_t g_265;
    uint16_t g_270;
    union U2 g_304;
    volatile int8_t g_306;
    volatile int8_t *g_305;
    union U1 g_310;
    union U1 g_397;
    union U1 *g_396;
    union U1 g_399;
    uint8_t g_401;
    uint16_t g_403;
    int32_t g_408;
    int16_t g_426;
    uint16_t g_429;
    int8_t g_670;
    int8_t *g_669[5];
    uint32_t g_672;
    uint32_t g_677;
    int8_t g_680;
    uint64_t g_681;
    VECTOR(uint8_t, 8) g_710;
    VECTOR(uint8_t, 8) g_711;
    VECTOR(uint8_t, 2) g_712;
    VECTOR(uint8_t, 16) g_713;
    VECTOR(uint8_t, 4) g_715;
    union U2 g_717;
    union U2 g_719;
    union U2 *g_718;
    union U2 g_721;
    union U2 g_722;
    union U2 g_723;
    union U2 g_724;
    union U2 g_725;
    union U2 g_726;
    union U2 g_727;
    union U2 g_728;
    uint64_t g_813;
    uint8_t g_816;
    int16_t g_824;
    uint8_t g_825;
    union U0 g_849[7][1][10];
    volatile union U0 g_851;
    volatile union U0 *g_850;
    uint64_t g_865[2];
    union U1 g_873;
    union U1 g_878;
    int16_t *g_913;
    int16_t **g_912;
    VECTOR(int16_t, 16) g_926;
    int16_t *g_930[5];
    VECTOR(uint32_t, 4) g_946;
    VECTOR(int16_t, 4) g_950;
    VECTOR(int32_t, 8) g_977;
    int32_t *g_989[6];
    int32_t ** volatile g_988;
    VECTOR(uint16_t, 8) g_991;
    volatile VECTOR(uint8_t, 2) g_993;
    volatile VECTOR(uint8_t, 2) g_994;
    VECTOR(int8_t, 16) g_997;
    uint32_t *g_1005;
    volatile uint8_t g_1011;
    VECTOR(int16_t, 16) g_1029;
    uint8_t *g_1102;
    VECTOR(int16_t, 2) g_1133;
    VECTOR(int32_t, 4) g_1142;
    VECTOR(uint64_t, 8) g_1152;
    uint32_t g_1162;
    int32_t ** volatile g_1164;
    VECTOR(int64_t, 8) g_1177;
    int32_t ** volatile g_1190;
    uint32_t g_1205;
    volatile VECTOR(uint16_t, 4) g_1248;
    volatile VECTOR(int8_t, 4) g_1259;
    VECTOR(uint64_t, 16) g_1271;
    int32_t g_1286;
    VECTOR(uint8_t, 16) g_1293;
    volatile union U1 g_1320;
    VECTOR(int16_t, 8) g_1345;
    volatile VECTOR(uint16_t, 8) g_1350;
    VECTOR(int32_t, 2) g_1378;
    int32_t g_1390[10][6][4];
    VECTOR(int32_t, 2) g_1391;
    volatile VECTOR(uint8_t, 8) g_1397;
    union U1 g_1400[5][6][3];
    VECTOR(uint64_t, 4) g_1409;
    volatile union U1 g_1430;
    volatile VECTOR(int16_t, 8) g_1436;
    VECTOR(int8_t, 4) g_1457;
    volatile union U2 g_1475;
    VECTOR(int16_t, 8) g_1506;
    VECTOR(int32_t, 4) g_1562;
    volatile union U2 g_1569[1];
    int64_t g_1587[5];
    int64_t g_1589;
    VECTOR(uint32_t, 2) g_1655;
    VECTOR(uint64_t, 4) g_1660;
    volatile VECTOR(int8_t, 2) g_1671;
    union U1 g_1692;
    VECTOR(uint64_t, 8) g_1697;
    union U0 ** volatile g_1728;
    volatile uint8_t * volatile g_1740;
    VECTOR(uint32_t, 8) g_1750;
    int32_t ** volatile g_1788;
    uint32_t * volatile *g_1851;
    uint32_t * volatile * volatile *g_1850;
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
int16_t  func_1(struct S3 * p_1855);
int32_t  func_209(uint64_t  p_210, uint8_t  p_211, int32_t  p_212, union U1 * p_213, uint8_t  p_214, struct S3 * p_1855);
uint8_t  func_215(uint8_t  p_216, int64_t  p_217, union U2 ** p_218, union U1 * p_219, struct S3 * p_1855);
union U2 ** func_222(uint16_t  p_223, struct S3 * p_1855);
union U1 * func_252(uint16_t  p_253, int32_t * p_254, struct S3 * p_1855);
int32_t * func_257(union U2 * p_258, struct S3 * p_1855);
union U2 * func_279(int16_t  p_280, int32_t  p_281, int8_t * p_282, struct S3 * p_1855);
int8_t * func_285(int8_t * p_286, int8_t * p_287, uint16_t  p_288, struct S3 * p_1855);
int8_t * func_289(uint64_t  p_290, uint64_t  p_291, uint64_t  p_292, struct S3 * p_1855);
int16_t  func_295(int64_t  p_296, uint32_t  p_297, union U2 ** p_298, union U1 * p_299, struct S3 * p_1855);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1855->g_203 p_1855->g_202 p_1855->l_comm_values p_1855->g_249 p_1855->g_250 p_1855->g_265 p_1855->g_270 p_1855->g_305 p_1855->g_206 p_1855->g_227 p_1855->g_408 p_1855->g_251.f0 p_1855->g_426 p_1855->g_403 p_1855->g_429 p_1855->g_669 p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_670 p_1855->g_813 p_1855->g_816 p_1855->g_825 p_1855->g_850 p_1855->g_912 p_1855->g_913 p_1855->g_926 p_1855->g_824 p_1855->g_715 p_1855->g_comm_values p_1855->g_865 p_1855->g_396 p_1855->g_988 p_1855->g_712 p_1855->g_1011 p_1855->g_306 p_1855->g_1029 p_1855->g_1562 p_1855->g_1740 p_1855->g_1788 p_1855->g_993 p_1855->g_991 p_1855->g_1162 p_1855->g_851 p_1855->g_1850 p_1855->g_1177
 * writes: p_1855->g_203 p_1855->g_206 p_1855->g_251.f0 p_1855->g_265 p_1855->g_227 p_1855->g_270 p_1855->g_408 p_1855->g_304.f3 p_1855->g_426 p_1855->g_429 p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_401 p_1855->g_670 p_1855->g_813 p_1855->g_816 p_1855->g_825 p_1855->g_723.f3 p_1855->g_728.f3 p_1855->g_726.f3 p_1855->g_912 p_1855->g_930 p_1855->g_719.f0 p_1855->g_725.f2 p_1855->g_727.f0 p_1855->g_727.f3 p_1855->g_989 p_1855->g_1005 p_1855->g_719.f2 p_1855->g_722.f3 p_1855->g_1562 p_1855->g_721.f3 p_1855->g_991 p_1855->g_1162 p_1855->g_1286
 */
int16_t  func_1(struct S3 * p_1855)
{ /* block id: 4 */
    int32_t l_220 = 0x5A54A31DL;
    int32_t l_1820 = 0x027B3BD8L;
    int32_t l_1821 = 0x555ED77BL;
    int32_t l_1822 = (-1L);
    int32_t l_1823 = 0x0DBCB573L;
    union U2 **l_1839 = &p_1855->g_718;
    uint32_t **l_1849[8];
    uint32_t ***l_1848 = &l_1849[1];
    int i;
    for (i = 0; i < 8; i++)
        l_1849[i] = (void*)0;
    if ((atomic_inc(&p_1855->l_atomic_input[14]) == 0))
    { /* block id: 6 */
        int64_t l_2 = (-7L);
        VECTOR(int16_t, 16) l_3 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x0EF3L), 0x0EF3L), 0x0EF3L, 8L, 0x0EF3L, (VECTOR(int16_t, 2))(8L, 0x0EF3L), (VECTOR(int16_t, 2))(8L, 0x0EF3L), 8L, 0x0EF3L, 8L, 0x0EF3L);
        uint16_t l_4 = 65526UL;
        uint32_t l_130 = 4294967295UL;
        int64_t l_131[3][7][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
        int i, j, k;
        ++l_4;
        for (l_4 = 0; (l_4 == 57); ++l_4)
        { /* block id: 10 */
            union U1 l_9 = {1L};/* VOLATILE GLOBAL l_9 */
            int32_t l_10 = (-1L);
            uint8_t l_11 = 0x3AL;
            uint8_t l_79 = 0xF0L;
            uint64_t l_80[4][2] = {{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L}};
            uint32_t l_81 = 0UL;
            int64_t l_82 = 0x16B4A016C9CC5FAEL;
            int16_t l_83 = 0x08CEL;
            VECTOR(int32_t, 16) l_84 = (VECTOR(int32_t, 16))(0x68EBAD55L, (VECTOR(int32_t, 4))(0x68EBAD55L, (VECTOR(int32_t, 2))(0x68EBAD55L, 0x1293E9D6L), 0x1293E9D6L), 0x1293E9D6L, 0x68EBAD55L, 0x1293E9D6L, (VECTOR(int32_t, 2))(0x68EBAD55L, 0x1293E9D6L), (VECTOR(int32_t, 2))(0x68EBAD55L, 0x1293E9D6L), 0x68EBAD55L, 0x1293E9D6L, 0x68EBAD55L, 0x1293E9D6L);
            VECTOR(uint16_t, 8) l_85 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 2UL), 2UL), 2UL, 7UL, 2UL);
            VECTOR(uint16_t, 4) l_86 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65529UL), 65529UL);
            VECTOR(uint16_t, 16) l_87 = (VECTOR(uint16_t, 16))(0xE8C1L, (VECTOR(uint16_t, 4))(0xE8C1L, (VECTOR(uint16_t, 2))(0xE8C1L, 0UL), 0UL), 0UL, 0xE8C1L, 0UL, (VECTOR(uint16_t, 2))(0xE8C1L, 0UL), (VECTOR(uint16_t, 2))(0xE8C1L, 0UL), 0xE8C1L, 0UL, 0xE8C1L, 0UL);
            int32_t l_88 = 0x30C446B9L;
            int32_t l_89 = 0x29079C9DL;
            VECTOR(int16_t, 4) l_90 = (VECTOR(int16_t, 4))(0x0811L, (VECTOR(int16_t, 2))(0x0811L, 0x751BL), 0x751BL);
            VECTOR(int16_t, 16) l_91 = (VECTOR(int16_t, 16))(0x02E3L, (VECTOR(int16_t, 4))(0x02E3L, (VECTOR(int16_t, 2))(0x02E3L, 0x115BL), 0x115BL), 0x115BL, 0x02E3L, 0x115BL, (VECTOR(int16_t, 2))(0x02E3L, 0x115BL), (VECTOR(int16_t, 2))(0x02E3L, 0x115BL), 0x02E3L, 0x115BL, 0x02E3L, 0x115BL);
            VECTOR(int16_t, 2) l_92 = (VECTOR(int16_t, 2))(0x32E5L, 0x1C88L);
            uint32_t l_93 = 4294967295UL;
            int32_t l_94 = 0x42F6D645L;
            int8_t l_95 = 0x46L;
            VECTOR(int16_t, 4) l_96 = (VECTOR(int16_t, 4))(0x358AL, (VECTOR(int16_t, 2))(0x358AL, 0x0067L), 0x0067L);
            int8_t l_97 = 0x47L;
            int32_t l_98 = 0x5450317EL;
            int32_t l_99 = 1L;
            uint16_t l_100[4][10][6] = {{{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L}},{{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L}},{{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L}},{{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L},{65529UL,0x97D3L,9UL,65535UL,0UL,0x4023L}}};
            int64_t l_101 = 0x27CBF15030246D12L;
            int i, j, k;
            if ((l_11 &= (l_9 , l_10)))
            { /* block id: 12 */
                int32_t l_13 = 1L;
                int32_t *l_12[2];
                VECTOR(int8_t, 2) l_14 = (VECTOR(int8_t, 2))(5L, 1L);
                VECTOR(int8_t, 2) l_15 = (VECTOR(int8_t, 2))(0x7AL, 0L);
                union U2 l_17 = {0x39E6A4137D6C5051L};/* VOLATILE GLOBAL l_17 */
                union U2 *l_16[2][1];
                union U2 *l_18 = (void*)0;
                uint8_t l_19 = 0x8CL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_12[i] = &l_13;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_16[i][j] = &l_17;
                }
                l_12[0] = (void*)0;
                l_18 = (l_16[1][0] = (((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0L, 0L, 0x53L, ((VECTOR(int8_t, 8))(0L, (-1L), (-2L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_14.xxxyyyxxyxxyxyyy)).se7c1)), 1L)), ((VECTOR(int8_t, 8))(l_15.yxxxxyyx)).s0, 0x13L, 0x6AL, (-5L), 0x3BL)).s0866))))).y , (void*)0));
                --l_19;
            }
            else
            { /* block id: 17 */
                int8_t l_22 = 0L;
                uint16_t l_23[6][7] = {{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL},{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL},{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL},{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL},{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL},{0x9964L,1UL,0xD045L,1UL,0x9964L,0x9964L,1UL}};
                int64_t l_57 = (-4L);
                int i, j;
                --l_23[4][1];
                for (l_23[5][0] = 0; (l_23[5][0] <= 55); l_23[5][0]++)
                { /* block id: 21 */
                    int8_t l_28 = 0x76L;
                    uint16_t l_29 = 0x18EBL;
                    uint8_t l_42 = 0UL;
                    uint16_t l_45 = 0UL;
                    int32_t l_55[2];
                    int32_t *l_54[9][10][2] = {{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}},{{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]},{&l_55[1],&l_55[1]}}};
                    int32_t *l_56[5];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_55[i] = 0x0C97D735L;
                    for (i = 0; i < 5; i++)
                        l_56[i] = &l_55[1];
                    if ((l_29 &= l_28))
                    { /* block id: 23 */
                        int32_t l_31 = (-8L);
                        int32_t *l_30 = &l_31;
                        l_30 = (void*)0;
                    }
                    else
                    { /* block id: 25 */
                        union U1 l_33[8][2] = {{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}},{{0x732AFCB0L},{0x31C2FBF3L}}};
                        union U1 *l_32[4];
                        int8_t l_36[5];
                        int8_t *l_35[9][10][2] = {{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}},{{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]},{(void*)0,&l_36[3]}}};
                        int8_t **l_34 = &l_35[2][2][1];
                        int32_t l_38[6][5] = {{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L},{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L},{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L},{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L},{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L},{0x774B76FEL,0x774B76FEL,(-6L),(-8L),0L}};
                        int32_t *l_37 = &l_38[1][2];
                        uint64_t l_39 = 0x2628F0FC5A51F3E6L;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_32[i] = &l_33[3][0];
                        for (i = 0; i < 5; i++)
                            l_36[i] = 8L;
                        l_32[1] = l_32[3];
                        l_34 = (void*)0;
                        l_37 = (void*)0;
                        l_39--;
                    }
                    --l_42;
                    if (l_45)
                    { /* block id: 32 */
                        uint32_t l_46 = 1UL;
                        int32_t l_50 = (-1L);
                        int32_t *l_49 = &l_50;
                        l_46--;
                        l_49 = (void*)0;
                    }
                    else
                    { /* block id: 35 */
                        int32_t l_52 = 0x5C6606A8L;
                        int32_t *l_51 = &l_52;
                        uint16_t l_53 = 65529UL;
                        l_51 = (void*)0;
                        l_10 = l_53;
                    }
                    l_56[3] = l_54[5][4][0];
                }
                if ((l_57 , (l_10 = 1L)))
                { /* block id: 42 */
                    int16_t l_58 = (-1L);
                    int32_t l_60 = 0x0A938281L;
                    int32_t *l_59 = &l_60;
                    int32_t *l_61 = &l_60;
                    l_10 = l_58;
                    l_61 = l_59;
                    for (l_60 = (-11); (l_60 == 20); ++l_60)
                    { /* block id: 47 */
                        uint8_t l_64[5][3] = {{0xF5L,0xF5L,255UL},{0xF5L,0xF5L,255UL},{0xF5L,0xF5L,255UL},{0xF5L,0xF5L,255UL},{0xF5L,0xF5L,255UL}};
                        uint32_t l_65 = 0x66EE5324L;
                        VECTOR(int32_t, 8) l_66 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x0E0CE775L), 0x0E0CE775L), 0x0E0CE775L, 8L, 0x0E0CE775L);
                        uint32_t l_67[9][10][2] = {{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}},{{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL},{0x7691369FL,4294967295UL}}};
                        int32_t l_68 = (-1L);
                        uint8_t l_69[9][2] = {{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL},{0x19L,255UL}};
                        uint32_t l_72 = 1UL;
                        uint32_t l_73 = 9UL;
                        union U2 l_76 = {-5L};/* VOLATILE GLOBAL l_76 */
                        union U2 *l_75 = &l_76;
                        union U2 **l_74 = &l_75;
                        union U2 **l_77 = &l_75;
                        int i, j, k;
                        l_67[7][3][1] &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0L, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x35DAE8CEL, 3L)))).xyyy)), 0x773635D5L, 0x0404C693L)), 1L, (l_10 = (l_64[3][1] , l_65)), ((VECTOR(int32_t, 2))(0L, 2L)), ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(l_66.s34)), 0x18FE3B64L)))).sd;
                        ++l_69[6][0];
                        l_66.s2 = (l_73 = l_72);
                        l_77 = l_74;
                    }
                }
                else
                { /* block id: 55 */
                    int8_t l_78 = (-1L);
                    l_10 &= l_78;
                }
            }
            l_82 &= (l_81 = (l_80[3][0] ^= l_79));
            l_10 = l_83;
            if ((((VECTOR(int32_t, 8))(l_84.sa3610563)).s2 , (((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(l_85.s1573552376102404)).s4da8, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((l_85.s5 &= ((VECTOR(uint16_t, 4))(7UL, ((VECTOR(uint16_t, 2))(1UL, 1UL)), 0x7406L)).x), 0x1C84L, ((VECTOR(uint16_t, 8))(l_86.yxzxyzzx)), ((VECTOR(uint16_t, 2))(l_87.scd)), l_88, l_89, 0xD8D3L, 6UL)))).sb2a7, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 16))(l_90.xyyyxwxwxzxwyyzx)).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(l_91.sded7)).xyzxxzyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_92.yy)).xyxx)).wwzxxyxx))), 0x5F5FL, (l_93 , (l_94 , l_95)), ((VECTOR(int16_t, 4))(l_96.wxyy)).w, 1L, ((VECTOR(int16_t, 4))(l_97, 7L, 0x6F9CL, 0x6A79L)))).even))).s74)).yyxy))), (uint16_t)(((l_99 &= l_98) , l_100[2][2][0]) , 0xAABBL)))).z , l_101)))
            { /* block id: 65 */
                union U2 *l_102 = (void*)0;
                union U2 l_104 = {1L};/* VOLATILE GLOBAL l_104 */
                union U2 *l_103 = &l_104;
                int32_t *l_105 = (void*)0;
                int32_t l_107 = (-1L);
                int32_t *l_106 = &l_107;
                uint16_t l_108 = 65529UL;
                union U2 l_109[2] = {{0x574962EC189EFAF6L},{0x574962EC189EFAF6L}};
                VECTOR(int16_t, 2) l_110 = (VECTOR(int16_t, 2))((-8L), (-7L));
                VECTOR(uint16_t, 16) l_111 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
                VECTOR(uint16_t, 16) l_112 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xAA72L), 0xAA72L), 0xAA72L, 65535UL, 0xAA72L, (VECTOR(uint16_t, 2))(65535UL, 0xAA72L), (VECTOR(uint16_t, 2))(65535UL, 0xAA72L), 65535UL, 0xAA72L, 65535UL, 0xAA72L);
                union U2 l_113 = {-2L};/* VOLATILE GLOBAL l_113 */
                uint64_t l_114 = 0xBE9B9E4C78807F30L;
                VECTOR(int64_t, 2) l_115 = (VECTOR(int64_t, 2))(0x2A6CCB9D5BE66359L, (-1L));
                int32_t l_116 = 0x1F34FACAL;
                int8_t l_117[1];
                VECTOR(int64_t, 8) l_118 = (VECTOR(int64_t, 8))(0x03723A6807BAAA9AL, (VECTOR(int64_t, 4))(0x03723A6807BAAA9AL, (VECTOR(int64_t, 2))(0x03723A6807BAAA9AL, 3L), 3L), 3L, 0x03723A6807BAAA9AL, 3L);
                VECTOR(int64_t, 4) l_119 = (VECTOR(int64_t, 4))(0x4C02797321386D8FL, (VECTOR(int64_t, 2))(0x4C02797321386D8FL, 1L), 1L);
                VECTOR(int64_t, 4) l_120 = (VECTOR(int64_t, 4))(0x04EBC73C5DB116D7L, (VECTOR(int64_t, 2))(0x04EBC73C5DB116D7L, 0x3BEC019993031956L), 0x3BEC019993031956L);
                uint64_t l_121 = 0xB560D96E28CD386DL;
                int8_t l_122 = 0x51L;
                VECTOR(uint8_t, 4) l_123 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x44L), 0x44L);
                int16_t l_124[8][4][6] = {{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}},{{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L},{0x6182L,0x7D22L,0x5990L,0x7D9CL,0x02DDL,4L}}};
                int16_t l_125 = 0x76B8L;
                uint8_t l_126 = 0x9FL;
                int16_t l_127 = 0x50D4L;
                int64_t l_128[5][5][10] = {{{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL}},{{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL}},{{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL}},{{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL}},{{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL},{(-1L),(-1L),(-4L),0x1326CC6B5D01FEC4L,(-4L),(-1L),(-1L),0x1CFFFDCFAA0CEB8EL,0x25ABD8B400A94A8AL,0x5FA5EDEFCC24070BL}}};
                int8_t l_129 = 0L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_117[i] = 0x39L;
                l_103 = (l_102 = (void*)0);
                l_106 = l_105;
                l_10 ^= ((l_108 , l_109[0]) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0L, 6L, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_110.xx)).xyyyxxyx)).s34)).xxxy, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(l_111.s3fee94d8)), ((VECTOR(uint16_t, 8))(l_112.s2102788a)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0x5E40L, 0xBE37L, 65528UL, 0UL)).odd)).xyyyyxxy))).s04)).yyxxxyxy)).s61, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(0xE39EL, (l_111.s2 = (l_113 , (l_114 , (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))((-9L), (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(l_115.yxyyyyyxyxyxyyxy)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((l_116 |= 0x64F9C2C9L) , (l_82 &= l_117[0])), 5L, ((VECTOR(int64_t, 4))(l_118.s4011)), 5L, ((VECTOR(int64_t, 4))(6L, ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(l_119.zwywxyzwzwxzyxxx)).hi))))).odd, ((VECTOR(int64_t, 4))(l_120.yzxw))))).zyyxxzxx, ((VECTOR(int64_t, 16))(0x1B4A03188522CE91L, 0L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x3E1635C7AEBA4817L, (-4L))).yyyx)).yywwxyzy)), 0x5D942F1CC1EF9869L, ((VECTOR(int64_t, 2))(0x6B52307CD24EA2A6L, 0x1ED92AE5AED9F937L)), l_121, (-8L), 0x39FB383223A29AB7L)).lo))).s04, ((VECTOR(int64_t, 2))(0L))))), (-4L))), ((VECTOR(int64_t, 2))(0x4B03EBDBDEA83D7FL)), 0x022FEA0E9085B802L, 0L, 0x54040A6DBE89911EL)).sf981)).wyyyzwzyywxwxxyx)).sc356, ((VECTOR(int64_t, 4))(1L))))), l_122, ((VECTOR(int64_t, 2))(0x703EE88BD6EBF7B4L)), 0x1CA70F6C1F0966B1L)).lo)).wwyzzxyyzwzwxywy, ((VECTOR(int64_t, 16))((-7L)))))).even)).s7 , l_123.x), 0x6341L, 0L)), ((VECTOR(int16_t, 4))(0x78DBL))))).zwywyzywzyzxzzzx)))))))).lo, ((VECTOR(int16_t, 8))(0x204FL))))).s36)), ((VECTOR(int16_t, 4))(1L)), 2L, 0x797CL)))), ((VECTOR(int16_t, 8))(0x1540L))))).lo)).y , l_124[7][3][5])))), l_125, 0xB9BCL, ((VECTOR(uint16_t, 2))(65527UL)), 0x7BA8L, 65535UL, 0x924EL, 0UL, l_126, l_127, 65531UL, 5UL, 8UL, 0x93EEL)).s84, ((VECTOR(uint16_t, 2))(1UL)))))))).xxxx, ((VECTOR(uint16_t, 4))(0xC128L)), ((VECTOR(uint16_t, 4))(0x1510L))))), ((VECTOR(uint16_t, 4))(0xD41EL)))))))), ((VECTOR(int32_t, 4))(0x373E6FF0L)), ((VECTOR(int32_t, 4))((-1L)))))).xzxwwwwwywywwyyz)).s84, ((VECTOR(int32_t, 2))(0x58316058L))))).yyyyyxxx)), (int32_t)l_128[3][1][3]))).s5, 0x09F821FCL, 0L, 1L, (-7L), l_129, ((VECTOR(int32_t, 4))((-6L))), 9L, ((VECTOR(int32_t, 2))(0x403A1E7AL)), 1L)).s0f0d)).y);
            }
            else
            { /* block id: 73 */
                l_10 ^= (-1L);
            }
        }
        if ((l_131[2][0][0] ^= l_130))
        { /* block id: 78 */
            int16_t l_132 = (-3L);
            l_132 = 0L;
        }
        else
        { /* block id: 80 */
            int32_t l_134 = 0x1ECD1750L;
            int32_t *l_133 = &l_134;
            VECTOR(int32_t, 2) l_135 = (VECTOR(int32_t, 2))(0x5F17608BL, 0x2667C334L);
            int16_t l_136 = 0L;
            int i;
            l_133 = (void*)0;
            l_136 = ((VECTOR(int32_t, 16))(l_135.yxyyyxyyyyxyyyyy)).sd;
        }
        for (l_131[1][5][0] = 0; (l_131[1][5][0] == 17); l_131[1][5][0] = safe_add_func_uint64_t_u_u(l_131[1][5][0], 1))
        { /* block id: 86 */
            VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))(0x1DC01494L, (VECTOR(int32_t, 4))(0x1DC01494L, (VECTOR(int32_t, 2))(0x1DC01494L, 1L), 1L), 1L, 0x1DC01494L, 1L);
            VECTOR(int32_t, 2) l_140 = (VECTOR(int32_t, 2))(0x34F77BA6L, 4L);
            uint32_t l_141[5] = {0x3D422F2DL,0x3D422F2DL,0x3D422F2DL,0x3D422F2DL,0x3D422F2DL};
            int i;
            if ((l_141[0] &= ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(9L, 0x0FCDA900L)).yyyyyxxx, ((VECTOR(int32_t, 16))(l_139.s6053313473132761)).odd))).hi)).zwwyzzxxwxxzxyzz, ((VECTOR(int32_t, 16))(l_140.xxyyxyyxyxyxyxyx))))).s6))
            { /* block id: 88 */
                int32_t l_143[5] = {0x27ABC4D6L,0x27ABC4D6L,0x27ABC4D6L,0x27ABC4D6L,0x27ABC4D6L};
                int32_t *l_142[1][9][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                VECTOR(uint8_t, 2) l_144 = (VECTOR(uint8_t, 2))(0x7CL, 0xB2L);
                VECTOR(uint8_t, 16) l_145 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL, (VECTOR(uint8_t, 2))(7UL, 1UL), (VECTOR(uint8_t, 2))(7UL, 1UL), 7UL, 1UL, 7UL, 1UL);
                VECTOR(uint8_t, 16) l_146 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                VECTOR(uint8_t, 2) l_147 = (VECTOR(uint8_t, 2))(0x7FL, 0x5AL);
                int16_t l_148 = 0L;
                int i, j, k;
                l_142[0][1][0] = (void*)0;
                l_140.x |= (l_139.s6 |= (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(l_144.xyxx)).wxyyzyyw, ((VECTOR(uint8_t, 8))(l_145.s1bcb7600))))).s74)).xxxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 0xB2L)).yxxxyyxyxyyxxxyx)).s88, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_146.sae)).yxyyxxxyyyxyxxyx)).se4))).xxyxxxyyyyyyyxxy)).s49ee)).wxzwzyzyyywxwyxw)), ((VECTOR(uint8_t, 4))(0x8FL, 0xF5L, 250UL, 0x66L)).yzzxwyzyxzzwyxzx))).sfc)).yxxy))))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_147.yyyyyxxyyyyyxyxy)).s29)), 8UL, 0x22L))))).xyyyxzzzyzxzzzwy)))).s5 , l_148));
                l_139.s7 = (l_140.x = 0x65EB9F0FL);
                if (((VECTOR(int32_t, 2))((-8L), 0x5B5BBEE7L)).lo)
                { /* block id: 94 */
                    union U2 l_149 = {1L};/* VOLATILE GLOBAL l_149 */
                    uint8_t l_150 = 255UL;
                    if ((l_149 , (l_150 ^= (-9L))))
                    { /* block id: 96 */
                        union U2 l_152 = {-6L};/* VOLATILE GLOBAL l_152 */
                        union U2 *l_151 = &l_152;
                        union U2 *l_153 = &l_152;
                        union U2 l_154 = {0x16C76EF8A6834DD0L};/* VOLATILE GLOBAL l_154 */
                        VECTOR(uint32_t, 16) l_155 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL);
                        VECTOR(uint32_t, 4) l_156 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xD3885CE2L), 0xD3885CE2L);
                        uint8_t l_157 = 0x34L;
                        int16_t l_158 = 1L;
                        int32_t l_159[1][2][6] = {{{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}}};
                        int64_t l_160 = (-7L);
                        int32_t l_161 = 0x22AF9DCFL;
                        int i, j, k;
                        l_153 = l_151;
                        l_161 &= (l_160 = (l_159[0][0][4] &= (l_154 , (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_155.s4f0f)).even, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x27ECB843L, 4294967295UL)), 4294967295UL, 6UL)).hi, ((VECTOR(uint32_t, 4))(l_156.yxzw)).even))), 0UL, 0x42405EA5L)).w , (l_158 |= l_157)))));
                    }
                    else
                    { /* block id: 102 */
                        uint16_t l_162 = 65535UL;
                        int32_t l_165[6][6][7] = {{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}},{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}},{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}},{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}},{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}},{{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L},{0x756E5E30L,1L,0x69515FB0L,4L,(-10L),0x06D20A70L,1L}}};
                        int32_t l_167 = 0x08C21DECL;
                        int32_t *l_166 = &l_167;
                        union U1 l_169 = {0x243F07FCL};/* VOLATILE GLOBAL l_169 */
                        union U1 *l_168 = &l_169;
                        union U1 *l_170[4];
                        uint32_t l_171 = 0x365AD23FL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_170[i] = (void*)0;
                        --l_162;
                        l_142[0][3][2] = ((l_165[0][4][0] = 0UL) , l_166);
                        l_170[2] = l_168;
                        (*l_166) &= (l_171 = 0x7486EB96L);
                    }
                    for (l_150 = 0; (l_150 > 24); ++l_150)
                    { /* block id: 112 */
                        int64_t l_174 = 0x540C0448F3F0D8E2L;
                        int16_t l_175[2][4] = {{0x2266L,(-1L),0x2266L,0x2266L},{0x2266L,(-1L),0x2266L,0x2266L}};
                        int32_t l_176 = (-4L);
                        VECTOR(int32_t, 2) l_177 = (VECTOR(int32_t, 2))(1L, 0x19D96A46L);
                        int32_t l_178[2][6];
                        uint8_t l_179 = 0x7DL;
                        uint32_t l_180 = 0x2B93D780L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_178[i][j] = 1L;
                        }
                        l_176 = (l_175[0][2] = l_174);
                        l_176 ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_177.xxxyxxyy)).s31)).hi;
                        l_180 = ((VECTOR(int32_t, 4))((l_178[1][0] = 0x129365FEL), l_179, 0x0E3D2E3BL, 0x1A467A13L)).x;
                    }
                }
                else
                { /* block id: 119 */
                    int32_t l_181 = 0x317E7085L;
                    for (l_181 = (-16); (l_181 != (-11)); l_181 = safe_add_func_int32_t_s_s(l_181, 5))
                    { /* block id: 122 */
                        uint64_t l_184[2];
                        uint32_t l_185 = 0x91811AB4L;
                        uint16_t l_186 = 65535UL;
                        VECTOR(int32_t, 16) l_189 = (VECTOR(int32_t, 16))(0x0A9068FDL, (VECTOR(int32_t, 4))(0x0A9068FDL, (VECTOR(int32_t, 2))(0x0A9068FDL, 1L), 1L), 1L, 0x0A9068FDL, 1L, (VECTOR(int32_t, 2))(0x0A9068FDL, 1L), (VECTOR(int32_t, 2))(0x0A9068FDL, 1L), 0x0A9068FDL, 1L, 0x0A9068FDL, 1L);
                        VECTOR(int64_t, 2) l_190 = (VECTOR(int64_t, 2))(0x0E6689439229954BL, 0x67012BB54E963DF3L);
                        int32_t l_191 = 0x3465951AL;
                        VECTOR(int32_t, 4) l_192 = (VECTOR(int32_t, 4))(0x31BB6D1EL, (VECTOR(int32_t, 2))(0x31BB6D1EL, 0x69904F22L), 0x69904F22L);
                        VECTOR(int32_t, 16) l_193 = (VECTOR(int32_t, 16))(0x7B2F358DL, (VECTOR(int32_t, 4))(0x7B2F358DL, (VECTOR(int32_t, 2))(0x7B2F358DL, 0x4A643F7BL), 0x4A643F7BL), 0x4A643F7BL, 0x7B2F358DL, 0x4A643F7BL, (VECTOR(int32_t, 2))(0x7B2F358DL, 0x4A643F7BL), (VECTOR(int32_t, 2))(0x7B2F358DL, 0x4A643F7BL), 0x7B2F358DL, 0x4A643F7BL, 0x7B2F358DL, 0x4A643F7BL);
                        VECTOR(int32_t, 8) l_194 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x703AA0D6L), 0x703AA0D6L), 0x703AA0D6L, 8L, 0x703AA0D6L);
                        VECTOR(uint16_t, 8) l_195 = (VECTOR(uint16_t, 8))(0x9DE8L, (VECTOR(uint16_t, 4))(0x9DE8L, (VECTOR(uint16_t, 2))(0x9DE8L, 5UL), 5UL), 5UL, 0x9DE8L, 5UL);
                        VECTOR(int16_t, 4) l_196 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-10L)), (-10L));
                        uint8_t l_197 = 0UL;
                        int8_t l_198[7];
                        uint32_t l_199 = 0x89F56B13L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_184[i] = 0xB72BA6D88E89CEA8L;
                        for (i = 0; i < 7; i++)
                            l_198[i] = 0L;
                        l_185 = l_184[1];
                        l_186 = 0x35E8C61DL;
                        l_189.se = (((l_147.y--) , GROUP_DIVERGE(0, 1)) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 4))(0x7EA07E3DL, ((VECTOR(int32_t, 2))(l_189.sa7)), 2L)), (((VECTOR(int64_t, 8))((l_191 = l_190.y), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(l_192.xwzzwyywxzxxywyx)).sd2, ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(0x18AFD80EL, 0x65B617F0L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_193.sd035dc35)).s5754653512025525, ((VECTOR(int32_t, 4))(l_194.s5763)).yzyxzzzwzzzwzzxz))).se2))), 0x94C77F9DL, 0xCC4721F4L)), 4294967291UL, 0UL))))).s75))), (-9L), 0x6773E6724607D914L)), ((VECTOR(int64_t, 2))(0x19E8A7EA4D04EF10L, (-10L))), 0L)).s4 , 1L), (-5L), (-8L), (-3L), 0x73C63427L, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0x1C9EL, 0L)).yyyxxxyx, ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(l_195.s2341)).zzwwwwyzwwzyyyyy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(l_196.wy)).xyyx, ((VECTOR(int16_t, 8))((-1L), l_197, ((VECTOR(int16_t, 4))(l_198[5], ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_199, 1L, 1L, 0x4324L)).lo)), 0x7012L)), 0L, 0x16A4L)).odd))).lo)).yyyyxyyyxyyxyyxx))).odd))).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x026E7F9DL, 0x0743BC17L)).xxyxyxxxyyxxxyxy)))).sc8df)))))), (-1L), 0x4A76B666L)).hi)).s6);
                    }
                }
            }
            else
            { /* block id: 130 */
                int32_t l_201 = 0x3CB0EC13L;
                int32_t *l_200[9] = {&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201};
                int i;
                l_200[5] = l_200[6];
            }
        }
        unsigned int result = 0;
        result += l_2;
        result += l_3.sf;
        result += l_3.se;
        result += l_3.sd;
        result += l_3.sc;
        result += l_3.sb;
        result += l_3.sa;
        result += l_3.s9;
        result += l_3.s8;
        result += l_3.s7;
        result += l_3.s6;
        result += l_3.s5;
        result += l_3.s4;
        result += l_3.s3;
        result += l_3.s2;
        result += l_3.s1;
        result += l_3.s0;
        result += l_4;
        result += l_130;
        int l_131_i0, l_131_i1, l_131_i2;
        for (l_131_i0 = 0; l_131_i0 < 3; l_131_i0++) {
            for (l_131_i1 = 0; l_131_i1 < 7; l_131_i1++) {
                for (l_131_i2 = 0; l_131_i2 < 1; l_131_i2++) {
                    result += l_131[l_131_i0][l_131_i1][l_131_i2];
                }
            }
        }
        atomic_add(&p_1855->l_special_values[14], result);
    }
    else
    { /* block id: 134 */
        (1 + 1);
    }
    for (p_1855->g_203 = 0; (p_1855->g_203 <= (-6)); p_1855->g_203 = safe_sub_func_int64_t_s_s(p_1855->g_203, 6))
    { /* block id: 139 */
        uint64_t l_221 = 18446744073709551610UL;
        uint64_t l_256 = 18446744073709551611UL;
        int32_t l_1802 = 0L;
        int32_t l_1804 = 0x3B1F8BE8L;
        int32_t l_1824 = 0x43AAD475L;
        for (p_1855->g_206 = (-18); (p_1855->g_206 < 18); p_1855->g_206++)
        { /* block id: 142 */
            uint64_t l_255 = 0x121E595985F0D162L;
            int32_t l_1761 = 1L;
            union U1 **l_1799 = &p_1855->g_396;
            uint32_t l_1806 = 0xA95C4DA8L;
            uint32_t l_1834 = 0x149ACF0AL;
            uint16_t *l_1840 = (void*)0;
            uint16_t *l_1841[6][8][5] = {{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}},{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}},{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}},{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}},{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}},{{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270},{(void*)0,(void*)0,&p_1855->g_429,&p_1855->g_270,&p_1855->g_270}}};
            uint32_t *l_1842 = (void*)0;
            uint32_t *l_1843 = &p_1855->g_1162;
            int32_t *l_1852 = &l_1822;
            int i, j, k;
            l_1761 = (p_1855->g_1562.w &= func_209(p_1855->g_202.s2, func_215((p_1855->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1855->tid, 17))] , l_220), l_221, func_222((safe_lshift_func_int8_t_s_u(p_1855->g_203, 0)), p_1855), func_252(l_255, (l_256 , func_257((*p_1855->g_249), p_1855)), p_1855), p_1855), l_255, p_1855->g_396, l_256, p_1855));
            for (p_1855->g_721.f3 = (-3); (p_1855->g_721.f3 < (-19)); p_1855->g_721.f3--)
            { /* block id: 899 */
                uint8_t l_1766 = 0x7BL;
                int64_t *l_1777 = &p_1855->g_727.f0;
                uint32_t *l_1785 = &p_1855->g_265;
                int8_t l_1805 = 0x4FL;
                VECTOR(int32_t, 4) l_1818 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                int64_t l_1825 = 1L;
                int32_t l_1826 = 0x17EE1D37L;
                int i;
                if ((l_256 == (l_1766 >= ((*l_1785) = (((l_1761 = (((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((+(((safe_add_func_uint8_t_u_u((0x2C4204758EAF2756L >= ((*l_1777) = (-2L))), (p_1855->g_429 || l_1766))) == (**p_1855->g_912)) | (safe_div_func_uint32_t_u_u((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0xC322985A8BFEF075L)), 0xC5C610375B3AEA58L, 1UL)).x > ((safe_mul_func_uint16_t_u_u(0x2785L, (safe_unary_minus_func_int8_t_s(((safe_sub_func_int8_t_s_s(0x50L, l_1761)) , 7L))))) & p_1855->g_1029.s5)), l_221)))) < 0xD6L), 7)), 65530UL)), (*p_1855->g_1740))), l_1761)) == l_256) , 4L)) & l_1766) <= l_1766)))))
                { /* block id: 903 */
                    int32_t *l_1797[5];
                    int32_t l_1798 = 1L;
                    int32_t *l_1800 = (void*)0;
                    int32_t *l_1801 = &p_1855->g_227;
                    int32_t *l_1803[7][3] = {{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802},{&p_1855->g_227,&l_1802,&l_1802}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1797[i] = &p_1855->g_1286;
                    for (p_1855->g_270 = 23; (p_1855->g_270 == 18); p_1855->g_270 = safe_sub_func_int32_t_s_s(p_1855->g_270, 7))
                    { /* block id: 906 */
                        (*p_1855->g_1788) = &l_220;
                    }
                    (*l_1801) |= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((((((l_1766 < (*p_1855->g_1740)) , (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(p_1855->g_1152.s5, p_1855->g_1671.y)), (((l_1798 |= (p_1855->g_1286 = (l_1761 = (safe_div_func_int64_t_s_s((-5L), ((*l_1777) = (safe_mul_func_int8_t_s_s(l_256, 1UL)))))))) , l_1799) == &p_1855->g_396)))) < l_255) , 0x14329AAAL) , 0x1A9C7797L), ((VECTOR(int32_t, 2))(0x17A50EC0L)), (-7L), 0L, ((VECTOR(int32_t, 2))(1L)), 0L)))).lo)).xyxxyzyx, ((VECTOR(int32_t, 8))((-1L)))))).s3;
                    ++l_1806;
                }
                else
                { /* block id: 915 */
                    int32_t *l_1809 = (void*)0;
                    int32_t *l_1810 = &p_1855->g_227;
                    int32_t *l_1811 = &p_1855->g_227;
                    int32_t *l_1812 = (void*)0;
                    int32_t *l_1813 = &l_1761;
                    int32_t *l_1814 = &l_1802;
                    int32_t *l_1815 = &l_1802;
                    int32_t *l_1816 = &p_1855->g_1390[4][5][3];
                    int32_t *l_1817[9][1];
                    int32_t l_1819 = 1L;
                    uint64_t l_1827 = 0x5BDF242E00717E39L;
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1817[i][j] = &p_1855->g_1390[9][5][1];
                    }
                    ++l_1827;
                    return l_1821;
                }
                return l_1766;
            }
            (*l_1852) = ((safe_sub_func_int32_t_s_s((((((((safe_lshift_func_int16_t_s_u(l_1804, (l_1834 , (safe_add_func_uint16_t_u_u((p_1855->g_991.s5 |= (safe_mul_func_uint16_t_u_u(p_1855->g_993.y, (l_1839 != (void*)0)))), (p_1855->g_429 = (((--(*l_1843)) , &l_1761) != (void*)0))))))) , (((((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1855->group_0_offset, get_group_id(0), 10), 2)) >= l_1802) >= (FAKE_DIVERGE(p_1855->local_0_offset, get_local_id(0), 10) , (((((*p_1855->g_850) , l_1824) , l_1848) == p_1855->g_1850) || (-4L)))) > p_1855->g_1177.s6) < l_1834)) <= l_1806) <= (-3L)) & l_1820) , l_220) , l_221), 0UL)) <= l_1821);
            for (p_1855->g_1286 = (-20); (p_1855->g_1286 <= 18); p_1855->g_1286++)
            { /* block id: 927 */
                return (**p_1855->g_912);
            }
        }
    }
    return l_1822;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_727.f3 p_1855->g_988 p_1855->g_712 p_1855->g_672 p_1855->g_227 p_1855->g_1011 p_1855->g_719.f2 p_1855->g_813 p_1855->g_305 p_1855->g_306 p_1855->g_1029
 * writes: p_1855->g_727.f3 p_1855->g_825 p_1855->g_989 p_1855->g_1005 p_1855->g_672 p_1855->g_681 p_1855->g_227 p_1855->g_719.f2 p_1855->g_813 p_1855->g_722.f3
 */
int32_t  func_209(uint64_t  p_210, uint8_t  p_211, int32_t  p_212, union U1 * p_213, uint8_t  p_214, struct S3 * p_1855)
{ /* block id: 586 */
    uint8_t l_982 = 249UL;
    int32_t *l_987[6];
    VECTOR(int64_t, 16) l_1000 = (VECTOR(int64_t, 16))(0x77B387F0F6A0E264L, (VECTOR(int64_t, 4))(0x77B387F0F6A0E264L, (VECTOR(int64_t, 2))(0x77B387F0F6A0E264L, (-1L)), (-1L)), (-1L), 0x77B387F0F6A0E264L, (-1L), (VECTOR(int64_t, 2))(0x77B387F0F6A0E264L, (-1L)), (VECTOR(int64_t, 2))(0x77B387F0F6A0E264L, (-1L)), 0x77B387F0F6A0E264L, (-1L), 0x77B387F0F6A0E264L, (-1L));
    int32_t l_1020 = 0L;
    VECTOR(int16_t, 8) l_1030 = (VECTOR(int16_t, 8))(0x637DL, (VECTOR(int16_t, 4))(0x637DL, (VECTOR(int16_t, 2))(0x637DL, 0x2351L), 0x2351L), 0x2351L, 0x637DL, 0x2351L);
    int8_t l_1034 = 0x6DL;
    VECTOR(int32_t, 8) l_1145 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x33E37810L), 0x33E37810L), 0x33E37810L, 1L, 0x33E37810L);
    int64_t *l_1218 = &p_1855->g_726.f0;
    int64_t *l_1219 = &p_1855->g_719.f0;
    VECTOR(int8_t, 4) l_1258 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x43L), 0x43L);
    union U1 **l_1332 = &p_1855->g_396;
    int32_t l_1335 = 0x4D86E32FL;
    VECTOR(int8_t, 8) l_1356 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-4L)), (-4L)), (-4L), (-10L), (-4L));
    VECTOR(int16_t, 16) l_1363 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x464FL), 0x464FL), 0x464FL, 0L, 0x464FL, (VECTOR(int16_t, 2))(0L, 0x464FL), (VECTOR(int16_t, 2))(0L, 0x464FL), 0L, 0x464FL, 0L, 0x464FL);
    VECTOR(uint16_t, 2) l_1381 = (VECTOR(uint16_t, 2))(0x36F7L, 0x62E3L);
    VECTOR(uint64_t, 4) l_1411 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL);
    int16_t l_1418 = 0x0AC6L;
    uint8_t **l_1466 = &p_1855->g_1102;
    VECTOR(uint16_t, 2) l_1486 = (VECTOR(uint16_t, 2))(8UL, 65534UL);
    VECTOR(int32_t, 8) l_1512 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2C91D1C3L), 0x2C91D1C3L), 0x2C91D1C3L, (-1L), 0x2C91D1C3L);
    VECTOR(uint64_t, 16) l_1539 = (VECTOR(uint64_t, 16))(0x368B90A532102428L, (VECTOR(uint64_t, 4))(0x368B90A532102428L, (VECTOR(uint64_t, 2))(0x368B90A532102428L, 0x727E0A01ABC6EA6CL), 0x727E0A01ABC6EA6CL), 0x727E0A01ABC6EA6CL, 0x368B90A532102428L, 0x727E0A01ABC6EA6CL, (VECTOR(uint64_t, 2))(0x368B90A532102428L, 0x727E0A01ABC6EA6CL), (VECTOR(uint64_t, 2))(0x368B90A532102428L, 0x727E0A01ABC6EA6CL), 0x368B90A532102428L, 0x727E0A01ABC6EA6CL, 0x368B90A532102428L, 0x727E0A01ABC6EA6CL);
    int64_t l_1613[6] = {0x42496E5E70168911L,0x42496E5E70168911L,0x42496E5E70168911L,0x42496E5E70168911L,0x42496E5E70168911L,0x42496E5E70168911L};
    VECTOR(int8_t, 2) l_1712 = (VECTOR(int8_t, 2))(0L, 0x16L);
    int64_t l_1757 = 0x1CD08FDB09909C34L;
    int32_t **l_1758[6][8][5] = {{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}},{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}},{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}},{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}},{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}},{{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]},{&l_987[0],&p_1855->g_989[4],&l_987[0],&l_987[0],&p_1855->g_989[4]}}};
    int32_t *l_1759[9] = {(void*)0,&p_1855->g_1390[9][5][1],(void*)0,(void*)0,&p_1855->g_1390[9][5][1],(void*)0,(void*)0,&p_1855->g_1390[9][5][1],(void*)0};
    uint8_t l_1760 = 0xCDL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_987[i] = (void*)0;
    for (p_1855->g_727.f3 = 25; (p_1855->g_727.f3 < (-1)); p_1855->g_727.f3 = safe_sub_func_uint64_t_u_u(p_1855->g_727.f3, 1))
    { /* block id: 589 */
        int32_t *l_980 = &p_1855->g_227;
        int32_t *l_981[7] = {&p_1855->g_227,&p_1855->g_227,&p_1855->g_227,&p_1855->g_227,&p_1855->g_227,&p_1855->g_227,&p_1855->g_227};
        VECTOR(int64_t, 2) l_1031 = (VECTOR(int64_t, 2))(0x222BF6F7BF0F981AL, 0x06305931951B4A31L);
        int32_t l_1032[4] = {0x24EE8C89L,0x24EE8C89L,0x24EE8C89L,0x24EE8C89L};
        int i;
        l_982--;
        for (p_1855->g_825 = 0; (p_1855->g_825 == 46); p_1855->g_825++)
        { /* block id: 593 */
            VECTOR(uint16_t, 8) l_990 = (VECTOR(uint16_t, 8))(0xAD7AL, (VECTOR(uint16_t, 4))(0xAD7AL, (VECTOR(uint16_t, 2))(0xAD7AL, 0x51F4L), 0x51F4L), 0x51F4L, 0xAD7AL, 0x51F4L);
            VECTOR(uint16_t, 2) l_992 = (VECTOR(uint16_t, 2))(1UL, 0x599BL);
            uint32_t *l_1001[7][3][2] = {{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}},{{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672},{(void*)0,&p_1855->g_672}}};
            uint32_t **l_1006 = (void*)0;
            uint32_t **l_1007 = (void*)0;
            uint32_t *l_1009 = (void*)0;
            uint32_t **l_1008 = &l_1009;
            uint64_t *l_1010 = &p_1855->g_681;
            int i, j, k;
            (*p_1855->g_988) = l_987[0];
            (*l_980) ^= (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 16))(l_990.s4066015252470672)), ((VECTOR(uint16_t, 4))(p_1855->g_991.s1776)).yxxyzwxwyzwwxzzx, ((VECTOR(uint16_t, 2))(l_992.xx)).yyxyxyxxxxyyyxyy))).sf4, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(3UL, 251UL)))).xyxxyyyy, ((VECTOR(uint8_t, 8))(p_1855->g_993.xxxyyyyy))))).hi, ((VECTOR(uint8_t, 2))(p_1855->g_994.yx)).xyyx))).odd))), 0xEC6FL)).yywzxxwz)).s4 , (safe_sub_func_uint64_t_u_u(((0xB3FF3DC56805095CL || 18446744073709551612UL) == (0L == ((VECTOR(int8_t, 2))(p_1855->g_997.s52)).even)), ((*l_1010) = (safe_lshift_func_int16_t_s_u(((l_992.x ^ (p_1855->g_672 &= ((0x71348DE580538252L && ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1000.s97c5f734746d554d)).s19)).odd) , ((l_1001[2][2][0] != ((*l_1008) = (p_1855->g_1005 = ((safe_unary_minus_func_uint8_t_u((safe_add_func_uint64_t_u_u(p_214, p_1855->g_712.x)))) , (void*)0)))) <= 0x00L)))) || p_210), 4))))));
            if (p_1855->g_1011)
                continue;
        }
        for (p_1855->g_719.f2 = 24; (p_1855->g_719.f2 >= 3); p_1855->g_719.f2 = safe_sub_func_int32_t_s_s(p_1855->g_719.f2, 5))
        { /* block id: 604 */
            uint64_t *l_1016[5] = {&p_1855->g_681,&p_1855->g_681,&p_1855->g_681,&p_1855->g_681,&p_1855->g_681};
            int32_t l_1017 = 6L;
            int32_t l_1018 = (-2L);
            int32_t l_1019[7] = {3L,0x7666CD7BL,3L,3L,0x7666CD7BL,3L,3L};
            VECTOR(uint8_t, 2) l_1027 = (VECTOR(uint8_t, 2))(255UL, 6UL);
            VECTOR(int16_t, 4) l_1028 = (VECTOR(int16_t, 4))(0x2B5FL, (VECTOR(int16_t, 2))(0x2B5FL, (-1L)), (-1L));
            int8_t *l_1033 = &p_1855->g_722.f3;
            int i;
            atomic_and(&p_1855->l_atomic_reduction[0], (safe_sub_func_uint64_t_u_u((++p_1855->g_813), (safe_lshift_func_int8_t_s_s((((*p_1855->g_305) == (safe_sub_func_uint64_t_u_u((((VECTOR(uint8_t, 16))(l_1027.yyxyyyyyyyyyxxxy)).s3 <= ((*l_980) | ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_1028.zxzzwzyx)))).s47, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1855->g_1029.sdb)))).yyxxxyyx)).s41, ((VECTOR(int16_t, 2))(0x0882L, 0x0577L))))).xxxyxyxy, ((VECTOR(int16_t, 8))(l_1030.s22226740))))).s1)), ((VECTOR(int64_t, 8))(l_1031.yxxxyxxy)).s4))) & p_211), ((*l_1033) = l_1032[0]))))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1855->v_collective += p_1855->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            return l_1034;
        }
        if ((atomic_inc(&p_1855->g_atomic_input[57 * get_linear_group_id() + 24]) == 1))
        { /* block id: 611 */
            int32_t l_1036 = 8L;
            int32_t *l_1035 = &l_1036;
            VECTOR(uint64_t, 4) l_1037 = (VECTOR(uint64_t, 4))(0x301BD8BDAF2E063FL, (VECTOR(uint64_t, 2))(0x301BD8BDAF2E063FL, 18446744073709551615UL), 18446744073709551615UL);
            uint8_t l_1040 = 250UL;
            uint8_t l_1041 = 0x74L;
            int32_t l_1042 = 0L;
            uint32_t l_1043 = 0xB6F323D8L;
            int i;
            l_1035 = (void*)0;
            l_1037.x--;
            l_1041 ^= l_1040;
            l_1043 ^= l_1042;
            unsigned int result = 0;
            result += l_1036;
            result += l_1037.w;
            result += l_1037.z;
            result += l_1037.y;
            result += l_1037.x;
            result += l_1040;
            result += l_1041;
            result += l_1042;
            result += l_1043;
            atomic_add(&p_1855->g_special_values[57 * get_linear_group_id() + 24], result);
        }
        else
        { /* block id: 616 */
            (1 + 1);
        }
    }
    for (p_211 = 21; (p_211 != 43); ++p_211)
    { /* block id: 622 */
        uint8_t l_1051 = 0x5EL;
        VECTOR(int32_t, 4) l_1095 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x11D5B79AL), 0x11D5B79AL);
        VECTOR(int32_t, 2) l_1104 = (VECTOR(int32_t, 2))(0x705BE79CL, 0x6081CD13L);
        union U0 *l_1108[4][6];
        int64_t *l_1121 = &p_1855->g_723.f0;
        int64_t *l_1130 = &p_1855->g_727.f0;
        int8_t *l_1134[8][9] = {{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3},{&p_1855->g_717.f3,&p_1855->g_717.f3,&p_1855->g_680,(void*)0,(void*)0,(void*)0,&p_1855->g_680,&p_1855->g_717.f3,&p_1855->g_717.f3}};
        union U2 **l_1140 = &p_1855->g_250;
        int8_t l_1163 = 0x47L;
        int64_t l_1226[5][4][5] = {{{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)}},{{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)}},{{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)}},{{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)}},{{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)},{0x626E1CAD90CADCDBL,3L,(-1L),(-8L),(-1L)}}};
        union U2 **l_1235[6] = {&p_1855->g_250,(void*)0,&p_1855->g_250,&p_1855->g_250,(void*)0,&p_1855->g_250};
        uint16_t l_1280 = 0x1F24L;
        int32_t l_1337 = 1L;
        union U2 ***l_1347 = &p_1855->g_249;
        union U2 ***l_1348 = &l_1235[0];
        VECTOR(int8_t, 4) l_1357 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 6L), 6L);
        int16_t ***l_1369 = &p_1855->g_912;
        int32_t l_1388[2][7] = {{0L,(-1L),0L,0L,(-1L),0L,0L},{0L,(-1L),0L,0L,(-1L),0L,0L}};
        VECTOR(int32_t, 4) l_1395 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
        VECTOR(int32_t, 4) l_1396 = (VECTOR(int32_t, 4))(0x401D046EL, (VECTOR(int32_t, 2))(0x401D046EL, 0x6F7FFCCBL), 0x6F7FFCCBL);
        VECTOR(int8_t, 8) l_1450 = (VECTOR(int8_t, 8))(0x53L, (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, (-9L)), (-9L)), (-9L), 0x53L, (-9L));
        uint32_t **l_1458 = &p_1855->g_1005;
        VECTOR(int8_t, 4) l_1467 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x6DL), 0x6DL);
        VECTOR(uint32_t, 4) l_1598 = (VECTOR(uint32_t, 4))(0x343BBF28L, (VECTOR(uint32_t, 2))(0x343BBF28L, 0xCE682DE4L), 0xCE682DE4L);
        uint32_t l_1678 = 0UL;
        uint32_t **l_1684[6][2][3] = {{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}},{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}},{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}},{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}},{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}},{{&p_1855->g_1005,(void*)0,(void*)0},{&p_1855->g_1005,(void*)0,(void*)0}}};
        VECTOR(int64_t, 4) l_1700 = (VECTOR(int64_t, 4))(0x7F255768C8D9C161L, (VECTOR(int64_t, 2))(0x7F255768C8D9C161L, 0x6CF81C9479E8A950L), 0x6CF81C9479E8A950L);
        int32_t *l_1702 = (void*)0;
        VECTOR(int16_t, 2) l_1707 = (VECTOR(int16_t, 2))(1L, 0x4235L);
        VECTOR(uint32_t, 16) l_1749 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 0UL, 4294967295UL, 0UL, 4294967295UL);
        uint16_t l_1756 = 0x041CL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_1108[i][j] = (void*)0;
        }
        if ((atomic_inc(&p_1855->l_atomic_input[48]) == 5))
        { /* block id: 624 */
            int32_t l_1047 = (-10L);
            int32_t *l_1046 = &l_1047;
            int32_t *l_1048 = &l_1047;
            int32_t *l_1049 = &l_1047;
            int32_t *l_1050 = (void*)0;
            l_1050 = (l_1049 = (l_1048 = l_1046));
            unsigned int result = 0;
            result += l_1047;
            atomic_add(&p_1855->l_special_values[48], result);
        }
        else
        { /* block id: 628 */
            (1 + 1);
        }
    }
    l_1759[5] = &l_1020;
    l_1760 = p_214;
    return p_214;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_725.f2 p_1855->g_715 p_1855->g_946 p_1855->g_comm_values p_1855->g_227 p_1855->g_408 p_1855->g_950 p_1855->g_713 p_1855->g_203 p_1855->g_721.f0 p_1855->g_926 p_1855->g_977 p_1855->g_865
 * writes: p_1855->g_725.f2 p_1855->g_727.f0 p_1855->g_227 p_1855->g_408 p_1855->g_713
 */
uint8_t  func_215(uint8_t  p_216, int64_t  p_217, union U2 ** p_218, union U1 * p_219, struct S3 * p_1855)
{ /* block id: 569 */
    uint64_t l_940 = 1UL;
    int32_t *l_945 = &p_1855->g_203;
    int32_t l_948 = 0x6A654E5BL;
    VECTOR(int16_t, 4) l_949 = (VECTOR(int16_t, 4))(0x2154L, (VECTOR(int16_t, 2))(0x2154L, (-1L)), (-1L));
    int64_t *l_954 = &p_1855->g_723.f0;
    int64_t **l_953 = &l_954;
    int64_t *l_963 = &p_1855->g_724.f0;
    int8_t l_974 = (-10L);
    uint64_t *l_975 = &p_1855->g_873.f3;
    int32_t *l_976 = &p_1855->g_408;
    int i;
    for (p_1855->g_725.f2 = (-2); (p_1855->g_725.f2 < (-22)); p_1855->g_725.f2--)
    { /* block id: 572 */
        int32_t *l_936 = &p_1855->g_227;
        int32_t *l_937 = &p_1855->g_227;
        int32_t *l_938 = &p_1855->g_227;
        int32_t *l_939[2][3][10] = {{{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203},{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203},{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203}},{{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203},{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203},{&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203,(void*)0,&p_1855->g_203,&p_1855->g_203}}};
        int64_t *l_947 = &p_1855->g_727.f0;
        int i, j, k;
        if (p_1855->g_715.y)
            break;
        l_940++;
        p_1855->g_408 = (l_948 = (((void*)0 == &p_219) ^ ((p_217 | ((safe_rshift_func_uint16_t_u_u(((void*)0 == l_945), ((((((*l_936) = ((0xE15533BAL <= ((VECTOR(uint32_t, 2))(p_1855->g_946.xy)).odd) ^ ((((*l_947) = (p_217 , (((18446744073709551613UL | p_1855->g_comm_values[p_1855->tid]) >= (*l_938)) , p_217))) != p_1855->g_227) < p_1855->g_408))) && 5UL) != (-1L)) >= FAKE_DIVERGE(p_1855->local_1_offset, get_local_id(1), 10)) || 1L))) , p_216)) <= 0x4DL)));
    }
    (*l_976) = (((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))((-10L), 0x2E2CL)).xyyxxxxx, ((VECTOR(int16_t, 8))(l_949.yywxwzxy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(0x4464L, 1L)), ((VECTOR(int16_t, 16))(p_1855->g_950.zyzzywzyyywzyyyx)).s79))))).xyxxyyyy))).s6717624541667171)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((safe_lshift_func_int16_t_s_u((((((*l_953) = &p_217) != (void*)0) >= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((l_948 ^= (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((p_217 | (safe_rshift_func_int8_t_s_s((((p_1855->g_713.s6++) , l_963) == &p_217), (*l_945)))), ((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((*l_945) ^ (*l_945)) < (safe_mul_func_uint16_t_u_u(p_1855->g_721.f0, p_216))), 0x5C9177D4749636DFL)), 0x0D70FE7AA342B8CBL)), 4294967295UL)), l_974)) < p_1855->g_926.s1))), (*l_945)))) > p_217), 4294967295UL, 6UL, 4294967295UL, 0x5AC6DDDFL, ((VECTOR(uint32_t, 2))(4294967289UL)), 0x8A682A54L)).s3146253672321550)))).sac5c)))).hi, ((VECTOR(uint32_t, 2))(3UL))))))).hi != p_1855->g_946.y)) | p_216), (*l_945))), 0x643FL, ((VECTOR(int16_t, 4))((-1L))), 1L, ((VECTOR(int16_t, 4))(0x768CL)), 0x5C79L, 0x7D63L, ((VECTOR(int16_t, 2))(0x1FF3L)), 0x1A71L)))).sd, 0L, ((VECTOR(int16_t, 2))(0x259DL)), 0x55E5L, 1L, 1L, 0x1E1FL)).s0574062072640626))).s8 , 0L);
    (*l_976) &= ((VECTOR(int32_t, 2))(p_1855->g_977.s66)).lo;
    return p_1855->g_865[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_249
 * writes:
 */
union U2 ** func_222(uint16_t  p_223, struct S3 * p_1855)
{ /* block id: 143 */
    int32_t *l_226 = &p_1855->g_227;
    uint16_t l_228 = 0x7F39L;
    ++l_228;
    if ((atomic_inc(&p_1855->g_atomic_input[57 * get_linear_group_id() + 34]) == 6))
    { /* block id: 146 */
        int32_t l_231 = 0x5EE33AE4L;
        uint32_t l_232 = 4294967295UL;
        int32_t l_234[10] = {0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L,0x14597D60L};
        int32_t *l_233 = &l_234[3];
        int32_t *l_246 = &l_234[3];
        int32_t *l_247 = &l_234[5];
        int32_t *l_248[5][6][6] = {{{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0}},{{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0}},{{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0}},{{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0}},{{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0},{&l_234[3],&l_234[3],&l_234[3],&l_234[3],&l_234[3],(void*)0}}};
        int i, j, k;
        l_232 |= l_231;
        l_233 = (void*)0;
        for (l_232 = 0; (l_232 > 37); l_232 = safe_add_func_uint8_t_u_u(l_232, 5))
        { /* block id: 151 */
            int32_t l_237 = (-1L);
            l_234[3] &= 0L;
            for (l_237 = (-10); (l_237 >= 28); l_237 = safe_add_func_int16_t_s_s(l_237, 1))
            { /* block id: 155 */
                VECTOR(int32_t, 2) l_240 = (VECTOR(int32_t, 2))((-4L), 0x7A1EC111L);
                int32_t l_242 = 9L;
                int32_t *l_241 = &l_242;
                int i;
                l_233 = (((VECTOR(int32_t, 16))(l_240.yyxyyxxxyyyxyxyy)).s2 , l_241);
                l_234[6] = ((*l_241) = (-1L));
            }
            for (l_237 = 0; (l_237 < 21); l_237++)
            { /* block id: 162 */
                int32_t *l_245 = (void*)0;
                l_233 = l_245;
            }
        }
        l_248[1][4][1] = (l_247 = l_246);
        unsigned int result = 0;
        result += l_231;
        result += l_232;
        int l_234_i0;
        for (l_234_i0 = 0; l_234_i0 < 10; l_234_i0++) {
            result += l_234[l_234_i0];
        }
        atomic_add(&p_1855->g_special_values[57 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 168 */
        (1 + 1);
    }
    return p_1855->g_249;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_723.f3 p_1855->g_426 p_1855->g_850 p_1855->g_912 p_1855->g_408 p_1855->g_203 p_1855->g_913 p_1855->g_926 p_1855->g_824 p_1855->g_672
 * writes: p_1855->g_723.f3 p_1855->g_825 p_1855->g_408 p_1855->g_728.f3 p_1855->g_726.f3 p_1855->g_912 p_1855->g_930 p_1855->g_719.f0 p_1855->g_672
 */
union U1 * func_252(uint16_t  p_253, int32_t * p_254, struct S3 * p_1855)
{ /* block id: 521 */
    uint8_t l_840 = 0x7AL;
    union U1 *l_872 = &p_1855->g_873;
    int32_t l_911 = 0x73BF6F6CL;
    int32_t l_933 = (-3L);
    for (p_1855->g_723.f3 = 0; (p_1855->g_723.f3 == (-8)); --p_1855->g_723.f3)
    { /* block id: 524 */
        union U0 *l_848 = &p_1855->g_849[4][0][6];
        int32_t l_866 = (-3L);
        VECTOR(int8_t, 4) l_879 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x17L), 0x17L);
        int8_t *l_923 = &p_1855->g_670;
        int16_t *l_927 = &p_1855->g_824;
        int i;
        for (p_253 = 0; (p_253 <= 10); p_253 = safe_add_func_int32_t_s_s(p_253, 4))
        { /* block id: 527 */
            uint32_t l_863 = 0UL;
            VECTOR(int64_t, 4) l_887 = (VECTOR(int64_t, 4))(0x5633B6F59E9E0C4CL, (VECTOR(int64_t, 2))(0x5633B6F59E9E0C4CL, (-1L)), (-1L));
            VECTOR(int32_t, 16) l_896 = (VECTOR(int32_t, 16))(0x78985957L, (VECTOR(int32_t, 4))(0x78985957L, (VECTOR(int32_t, 2))(0x78985957L, 0x0A68BB40L), 0x0A68BB40L), 0x0A68BB40L, 0x78985957L, 0x0A68BB40L, (VECTOR(int32_t, 2))(0x78985957L, 0x0A68BB40L), (VECTOR(int32_t, 2))(0x78985957L, 0x0A68BB40L), 0x78985957L, 0x0A68BB40L, 0x78985957L, 0x0A68BB40L);
            int16_t *l_929 = &p_1855->g_426;
            int16_t **l_928[5] = {&l_929,&l_929,&l_929,&l_929,&l_929};
            int64_t *l_931 = &p_1855->g_719.f0;
            uint32_t *l_932 = &p_1855->g_672;
            int i, j;
            if (l_840)
                break;
            for (p_1855->g_825 = 0; (p_1855->g_825 > 41); p_1855->g_825++)
            { /* block id: 531 */
                uint8_t l_845 = 0x90L;
                int16_t *l_856[10][7][3] = {{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}},{{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0},{&p_1855->g_824,&p_1855->g_824,(void*)0}}};
                uint64_t *l_864 = &p_1855->g_865[1];
                int32_t *l_867 = &p_1855->g_408;
                union U1 *l_877 = &p_1855->g_878;
                VECTOR(uint64_t, 4) l_889 = (VECTOR(uint64_t, 4))(0xD01CE173DDF3E207L, (VECTOR(uint64_t, 2))(0xD01CE173DDF3E207L, 0xE91F0A983B6E7B8FL), 0xE91F0A983B6E7B8FL);
                int i, j, k;
                (*l_867) = ((safe_mod_func_uint64_t_u_u(p_1855->g_426, l_845)) & (safe_lshift_func_uint16_t_u_s((l_848 == p_1855->g_850), ((safe_lshift_func_int16_t_s_s(0x2C1EL, 7)) || (safe_add_func_int64_t_s_s(((l_856[6][0][0] == &p_1855->g_426) , ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))((((-5L) || (l_866 = (safe_mul_func_uint8_t_u_u((((((*l_864) = (l_863 = ((p_253 & 0UL) > 0x0BL))) , 0UL) < p_1855->g_677) ^ p_1855->g_265), p_1855->g_728.f0)))) == 1UL), ((VECTOR(int8_t, 4))(0x18L)), l_866, 0L, 0x60L)).s1, 0L)) > l_840)), l_845))))));
                for (p_1855->g_728.f3 = (-17); (p_1855->g_728.f3 > (-25)); p_1855->g_728.f3 = safe_sub_func_uint64_t_u_u(p_1855->g_728.f3, 5))
                { /* block id: 538 */
                    int32_t **l_874 = &l_867;
                    uint8_t *l_884 = &p_1855->g_401;
                    int64_t *l_888 = &p_1855->g_721.f0;
                    uint8_t *l_901[5][5] = {{&p_1855->g_825,(void*)0,&p_1855->g_825,&p_1855->g_825,(void*)0},{&p_1855->g_825,(void*)0,&p_1855->g_825,&p_1855->g_825,(void*)0},{&p_1855->g_825,(void*)0,&p_1855->g_825,&p_1855->g_825,(void*)0},{&p_1855->g_825,(void*)0,&p_1855->g_825,&p_1855->g_825,(void*)0},{&p_1855->g_825,(void*)0,&p_1855->g_825,&p_1855->g_825,(void*)0}};
                    uint16_t l_910 = 1UL;
                    int16_t ***l_914 = &p_1855->g_912;
                    int i, j;
                    for (p_1855->g_726.f3 = 0; (p_1855->g_726.f3 >= 25); p_1855->g_726.f3 = safe_add_func_uint16_t_u_u(p_1855->g_726.f3, 5))
                    { /* block id: 541 */
                        return l_872;
                    }
                    (*l_874) = &p_1855->g_227;
                    p_1855->g_408 |= (((*l_914) = (((safe_mul_func_int16_t_s_s(((l_877 = l_877) == (void*)0), (p_253 >= ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_879.xz)), 0x7FL, 0x1CL)), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x22L, (-1L))).xyxyxyyyyxxxyyyy)).even, ((VECTOR(int8_t, 16))((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((*l_884)++), ((((*l_888) = ((VECTOR(int64_t, 8))(l_887.yzxxxyxw)).s1) < ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_889.wyzzzxyw)).s5615132411105646)).s1066)).even)).even) , 0x10L))), ((*l_867) = ((l_911 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_896.s24ca)).zxxxwwzxwyxwwyyx)).sf, GROUP_DIVERGE(1, 1))) , (safe_mul_func_int16_t_s_s(((p_1855->g_824 && ((safe_lshift_func_int8_t_s_u((*l_867), (p_1855->g_710.s3 = 0x7FL))) || (FAKE_DIVERGE(p_1855->local_1_offset, get_local_id(1), 10) < ((((((((~(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s((!((p_1855->g_824 = (FAKE_DIVERGE(p_1855->group_0_offset, get_group_id(0), 10) && (safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((-5L), ((~0UL) & p_1855->g_825))), p_253)))) | 0x39C8L)), l_887.y)), GROUP_DIVERGE(0, 1))) >= l_879.y) , 0xE80537A340D23276L)) , p_1855->g_715.y) , (*l_867)) && 0xF9L) & p_253) , l_896.s0) , p_1855->g_670) , p_1855->g_824)))) ^ l_840), p_1855->g_816))) , p_253) ^ p_253), 1)), l_910))) , 0x25B8F7A4L)))), 0x6FL, 1L, l_887.z, (-10L), (**l_874), 0x4EL, 0x04L, 0x1DL, 0x5BL, (-2L), ((VECTOR(int8_t, 2))(4L)), 0x55L, (-5L), (-9L))).even, ((VECTOR(int8_t, 8))(1L))))).lo))), 0x41L, ((VECTOR(int8_t, 2))(0x04L)), 0x03L)), ((VECTOR(int8_t, 8))(0x4DL)), ((VECTOR(int8_t, 8))(0x6AL))))))).s3571455473642502, ((VECTOR(uint8_t, 16))(3UL))))).s09b0, ((VECTOR(int16_t, 4))(4L))))).yzxzwyyz, ((VECTOR(int16_t, 8))(3L))))).s5))) || 255UL) , p_1855->g_912)) == &p_1855->g_913);
                    (*l_874) = &p_1855->g_203;
                }
            }
            if ((*p_254))
                continue;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1855->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_933 = (((safe_mod_func_int32_t_s_s(((((VECTOR(uint32_t, 2))(0x36E1B84DL, 0xA9DA5C90L)).lo , l_923) == &p_1855->g_680), 0xDF14EBD4L)) | ((*p_254) <= ((*l_932) |= ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x3490B180L, 0x6BF3F1FBL, 0x2B313848L, 1UL)), ((VECTOR(uint32_t, 4))(((l_911 = p_253) && ((((**p_1855->g_912) | ((((VECTOR(int16_t, 16))(p_1855->g_926.saf0f2eeb87629d62)).s2 , l_927) != (p_1855->g_930[2] = (void*)0))) >= ((*l_931) = p_253)) == p_253)), 0xB7D85E19L, 0x5F6C340EL, 1UL)))))), ((VECTOR(uint32_t, 8))(0x082600CCL))))), p_1855->g_824, 0x911CA937L, 0xF5C64F37L, 4UL, 9UL, 0xE9393225L, 4294967290UL, 4294967295UL)).sf))) != 5UL)), p_253)), p_1855->g_926.s2)), p_253)), 10))][(safe_mod_func_uint32_t_u_u(p_1855->tid, 17))]));
        }
    }
    return l_872;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_251.f0 p_1855->g_265 p_1855->g_270 p_1855->g_249 p_1855->g_250 p_1855->g_305 p_1855->g_206 p_1855->g_227 p_1855->l_comm_values p_1855->g_408 p_1855->g_426 p_1855->g_403 p_1855->g_429 p_1855->g_669 p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_670 p_1855->g_203 p_1855->g_813 p_1855->g_816 p_1855->g_825
 * writes: p_1855->g_251.f0 p_1855->g_265 p_1855->g_227 p_1855->g_270 p_1855->g_408 p_1855->g_304.f3 p_1855->g_426 p_1855->g_429 p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_401 p_1855->g_670 p_1855->g_813 p_1855->g_816 p_1855->g_825
 */
int32_t * func_257(union U2 * p_258, struct S3 * p_1855)
{ /* block id: 172 */
    int32_t l_284 = 0x23358E23L;
    union U2 **l_308 = (void*)0;
    int32_t *l_835 = &l_284;
    for (p_1855->g_251.f0 = 19; (p_1855->g_251.f0 == 28); p_1855->g_251.f0++)
    { /* block id: 175 */
        int32_t *l_261 = (void*)0;
        int32_t *l_262 = &p_1855->g_227;
        int32_t *l_263 = &p_1855->g_227;
        int32_t *l_264 = (void*)0;
        VECTOR(int8_t, 8) l_430 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6FL), 0x6FL), 0x6FL, 0L, 0x6FL);
        int i;
        --p_1855->g_265;
        for (p_1855->g_227 = 10; (p_1855->g_227 <= (-9)); --p_1855->g_227)
        { /* block id: 179 */
            uint32_t l_275[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t l_276 = 0x6516010AL;
            int32_t l_283[7][2] = {{(-6L),0x7075214EL},{(-6L),0x7075214EL},{(-6L),0x7075214EL},{(-6L),0x7075214EL},{(-6L),0x7075214EL},{(-6L),0x7075214EL},{(-6L),0x7075214EL}};
            int i, j;
            p_1855->g_270++;
            for (p_1855->g_265 = 0; (p_1855->g_265 != 23); ++p_1855->g_265)
            { /* block id: 183 */
                union U2 *l_303 = &p_1855->g_304;
                union U2 **l_302 = &l_303;
                int32_t l_307 = 0L;
                union U1 *l_309 = &p_1855->g_310;
                uint16_t *l_428 = &p_1855->g_429;
                uint32_t l_832 = 0x118346F3L;
                int32_t *l_833 = (void*)0;
                int32_t *l_834 = &p_1855->g_408;
                l_276 |= l_275[5];
                l_284 = ((-1L) > ((*p_1855->g_249) == ((*l_302) = func_279(l_283[1][1], l_284, func_285(func_289(((((*l_428) |= ((l_276 = ((safe_lshift_func_uint8_t_u_s(((func_295(((safe_rshift_func_int16_t_s_s((p_258 == ((*l_302) = (void*)0)), ((0L <= (((((p_1855->g_305 == (void*)0) & FAKE_DIVERGE(p_1855->group_0_offset, get_group_id(0), 10)) <= p_1855->g_206) || p_1855->g_227) == 0x2E880600L)) != 9UL))) || l_276), l_307, l_308, l_309, p_1855) ^ 65529UL) ^ 249UL), 7)) && 0x18F73722EAA72FD7L)) <= l_307)) == p_1855->g_270) , FAKE_DIVERGE(p_1855->global_0_offset, get_global_id(0), 10)), l_430.s4, l_283[1][1], p_1855), p_1855->g_669[3], l_275[5], p_1855), p_1855))));
                (*l_834) ^= (safe_lshift_func_int8_t_s_s((0x7D4EL | (safe_lshift_func_int16_t_s_u(l_832, 7))), 0));
            }
        }
    }
    (*l_835) ^= 0x7332E64AL;
    return &p_1855->g_203;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_670 p_1855->g_203 p_1855->g_408 p_1855->g_403 p_1855->g_710 p_1855->g_711 p_1855->g_712 p_1855->g_713 p_1855->g_715 p_1855->g_813 p_1855->g_816 p_1855->g_825 p_1855->g_249 p_1855->g_250 p_1855->g_717.f3 p_1855->g_680
 * writes: p_1855->g_672 p_1855->g_677 p_1855->g_681 p_1855->g_401 p_1855->g_399.f3 p_1855->g_718 p_1855->g_670 p_1855->g_408 p_1855->g_813 p_1855->g_816 p_1855->g_825
 */
union U2 * func_279(int16_t  p_280, int32_t  p_281, int8_t * p_282, struct S3 * p_1855)
{ /* block id: 459 */
    int32_t *l_671[5][9] = {{&p_1855->g_408,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_408},{&p_1855->g_408,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_408},{&p_1855->g_408,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_408},{&p_1855->g_408,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_408},{&p_1855->g_408,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_203,&p_1855->g_203,&p_1855->g_206,&p_1855->g_408}};
    int16_t l_675[3];
    int16_t l_676[8][8] = {{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L},{(-1L),1L,0L,0L,1L,0L,0L,1L}};
    VECTOR(uint8_t, 8) l_714 = (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0x2DL), 0x2DL), 0x2DL, 0x5FL, 0x2DL);
    union U2 *l_720[3][10] = {{&p_1855->g_722,&p_1855->g_726,&p_1855->g_725,(void*)0,&p_1855->g_726,(void*)0,&p_1855->g_725,&p_1855->g_726,&p_1855->g_722,&p_1855->g_722},{&p_1855->g_722,&p_1855->g_726,&p_1855->g_725,(void*)0,&p_1855->g_726,(void*)0,&p_1855->g_725,&p_1855->g_726,&p_1855->g_722,&p_1855->g_722},{&p_1855->g_722,&p_1855->g_726,&p_1855->g_725,(void*)0,&p_1855->g_726,(void*)0,&p_1855->g_725,&p_1855->g_726,&p_1855->g_722,&p_1855->g_722}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_675[i] = 0x62D0L;
    p_1855->g_672--;
    ++p_1855->g_677;
    ++p_1855->g_681;
    if ((safe_lshift_func_uint8_t_u_s(p_1855->g_670, 7)))
    { /* block id: 463 */
        uint32_t *l_686 = &p_1855->g_677;
        uint8_t *l_701 = &p_1855->g_401;
        uint64_t *l_702 = &p_1855->g_399.f3;
        VECTOR(uint64_t, 2) l_703 = (VECTOR(uint64_t, 2))(0UL, 9UL);
        union U2 *l_716 = &p_1855->g_717;
        int32_t l_729 = 0x283211EBL;
        int i;
        l_729 ^= (((*l_686)++) , (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_686 == l_686) < (safe_mul_func_uint8_t_u_u(0xC5L, ((*l_701) = p_1855->g_203)))), 1)) != ((p_1855->g_681 , GROUP_DIVERGE(0, 1)) == ((VECTOR(uint64_t, 16))(p_1855->g_408, ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(((*l_702) = p_1855->g_403), ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(0xDB4ACA3E0D9AB048L, 18446744073709551615UL)), ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 0x79761991AB3A7C1DL, 0x96134348459020D6L, 6UL)), ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 2))(1UL, 0x309F90B98D906191L))))), 1UL, 0x811C729AD7311001L)))).s7311525707505775, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(l_703.yxxxxyxyxxxxyxxx)), ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 8))(((safe_lshift_func_int8_t_s_u((p_281 != ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((((VECTOR(uint8_t, 8))(0x7AL, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(p_1855->g_710.s1742)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1855->g_711.s0272132320673670)).s3d)).yyxx, ((VECTOR(uint8_t, 4))(p_1855->g_712.xyxx))))).lo)).xxyyxyyxyxxxyxxy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(0xE1L, 0UL)).yxxxxyxy, ((VECTOR(uint8_t, 2))(p_1855->g_713.s97)).xxyxyxyy))).even)).zzwywzzxzxxwzwyz, ((VECTOR(uint8_t, 2))(l_714.s25)).xyxxyxyxxyyxxxxx))).odd, ((VECTOR(uint8_t, 16))(p_1855->g_715.zzwyyzwzyxzzwwxx)).lo, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 0xDBL)), ((p_1855->g_718 = l_716) == l_720[2][7]), p_281, 0UL, ((VECTOR(uint8_t, 2))(0x44L)), l_703.y, 246UL, 6UL, p_1855->g_715.x, 255UL, 1UL, 254UL, 0xC8L, 0x54L))))).even))).lo)).yxzzyywx, ((VECTOR(uint8_t, 8))(0x35L))))).s2140153262313201))).sa, p_1855->g_710.s1, 2UL, 1UL, ((VECTOR(uint8_t, 2))(0x1EL)), 255UL)).s1 && (*p_282)), p_1855->g_681)), 4)) == 0x9B20L)), 0)) == l_703.y), ((VECTOR(uint64_t, 4))(5UL)), l_703.x, 0x56AB04D456B1B1E3L, 0UL)).s3557747034750372, ((VECTOR(uint64_t, 16))(0xDDB789766F2C8069L)), ((VECTOR(uint64_t, 16))(0x359B9672E9CAB956L))))))))))))).s9d39)).even))), ((VECTOR(uint64_t, 2))(0xB1D9E4203570F3EBL))))), 0xCC4EE5CB67193DD4L, 0xA616788461E8734EL, 0x4DD8AA6E1BB765DFL, ((VECTOR(uint64_t, 2))(0x1AF9E396A49705E8L)), 18446744073709551615UL)).s24, ((VECTOR(uint64_t, 2))(0xAB5D04F014A4191DL))))), (uint64_t)p_281, (uint64_t)1UL))), 18446744073709551615UL)).xwzxwzzwyyywwxxy, ((VECTOR(uint64_t, 16))(0x4C6233E695F74907L))))).s20, ((VECTOR(uint64_t, 2))(9UL))))), 0UL, 0x34DE02F97DACD236L, 18446744073709551613UL, ((VECTOR(uint64_t, 4))(5UL)), ((VECTOR(uint64_t, 4))(3UL)), 18446744073709551609UL, 0UL)).s8)), (*p_282))), p_280)), 3)), 1UL)));
        for (p_1855->g_670 = (-7); (p_1855->g_670 < (-12)); p_1855->g_670 = safe_sub_func_uint64_t_u_u(p_1855->g_670, 2))
        { /* block id: 471 */
            uint64_t l_733 = 18446744073709551615UL;
            p_1855->g_408 = (safe_unary_minus_func_int64_t_s(l_733));
            if ((atomic_inc(&p_1855->l_atomic_input[25]) == 2))
            { /* block id: 474 */
                VECTOR(int32_t, 16) l_734 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x11D8C6ACL), 0x11D8C6ACL), 0x11D8C6ACL, (-5L), 0x11D8C6ACL, (VECTOR(int32_t, 2))((-5L), 0x11D8C6ACL), (VECTOR(int32_t, 2))((-5L), 0x11D8C6ACL), (-5L), 0x11D8C6ACL, (-5L), 0x11D8C6ACL);
                int32_t l_735 = 1L;
                int16_t l_736 = 0x5177L;
                int16_t l_737 = 9L;
                VECTOR(int16_t, 8) l_738 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 1L), 1L), 1L, 9L, 1L);
                uint64_t l_739 = 0x9ECF599D609D6380L;
                int16_t l_740 = 0x17F3L;
                uint64_t l_741 = 18446744073709551610UL;
                uint16_t l_742 = 65535UL;
                VECTOR(int16_t, 4) l_743 = (VECTOR(int16_t, 4))(0x1E8AL, (VECTOR(int16_t, 2))(0x1E8AL, (-8L)), (-8L));
                int32_t l_744 = 1L;
                VECTOR(int16_t, 2) l_745 = (VECTOR(int16_t, 2))(0x5A2CL, (-10L));
                VECTOR(int16_t, 4) l_746 = (VECTOR(int16_t, 4))(0x7C53L, (VECTOR(int16_t, 2))(0x7C53L, 0x7B44L), 0x7B44L);
                int32_t l_747 = 0L;
                uint32_t l_748 = 0UL;
                int16_t l_751 = 0x481BL;
                int8_t l_752 = (-10L);
                VECTOR(int16_t, 2) l_753 = (VECTOR(int16_t, 2))((-3L), 0L);
                int32_t l_754 = 0x44D3714FL;
                VECTOR(int16_t, 8) l_755 = (VECTOR(int16_t, 8))(0x338DL, (VECTOR(int16_t, 4))(0x338DL, (VECTOR(int16_t, 2))(0x338DL, 0x158BL), 0x158BL), 0x158BL, 0x338DL, 0x158BL);
                VECTOR(int16_t, 8) l_756 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
                int8_t l_757 = 0x32L;
                int32_t l_758 = 0x215496D6L;
                uint32_t l_759 = 0xFB0EA1D1L;
                int32_t l_760 = 0x3E6AF8F5L;
                uint8_t l_761 = 250UL;
                int8_t l_762 = 0x57L;
                uint16_t l_763[10][5][2] = {{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}},{{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL},{0x6636L,65533UL}}};
                uint32_t l_764 = 1UL;
                VECTOR(int32_t, 4) l_765 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x5B31CEC2L), 0x5B31CEC2L);
                int32_t *l_766 = &l_760;
                int32_t *l_767 = &l_758;
                uint16_t l_768 = 65532UL;
                int16_t l_769 = 0x035FL;
                uint32_t l_770 = 0UL;
                int32_t l_771 = (-1L);
                uint32_t l_772 = 1UL;
                int32_t l_773 = 2L;
                VECTOR(int32_t, 16) l_774 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                VECTOR(int32_t, 4) l_775 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                VECTOR(int32_t, 8) l_776 = (VECTOR(int32_t, 8))(0x0E73AC5FL, (VECTOR(int32_t, 4))(0x0E73AC5FL, (VECTOR(int32_t, 2))(0x0E73AC5FL, (-1L)), (-1L)), (-1L), 0x0E73AC5FL, (-1L));
                VECTOR(int32_t, 4) l_777 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                VECTOR(int32_t, 16) l_778 = (VECTOR(int32_t, 16))(0x2DCE8A5AL, (VECTOR(int32_t, 4))(0x2DCE8A5AL, (VECTOR(int32_t, 2))(0x2DCE8A5AL, 0x0340C3DAL), 0x0340C3DAL), 0x0340C3DAL, 0x2DCE8A5AL, 0x0340C3DAL, (VECTOR(int32_t, 2))(0x2DCE8A5AL, 0x0340C3DAL), (VECTOR(int32_t, 2))(0x2DCE8A5AL, 0x0340C3DAL), 0x2DCE8A5AL, 0x0340C3DAL, 0x2DCE8A5AL, 0x0340C3DAL);
                VECTOR(int32_t, 8) l_779 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x4E7DC10DL), 0x4E7DC10DL), 0x4E7DC10DL, (-6L), 0x4E7DC10DL);
                VECTOR(int32_t, 2) l_780 = (VECTOR(int32_t, 2))(0x600CFEB6L, 0x21038EEBL);
                uint8_t l_781 = 7UL;
                int64_t l_782 = 0x46BCB15FE70AC024L;
                VECTOR(int32_t, 16) l_783 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x37C7484BL), 0x37C7484BL), 0x37C7484BL, (-7L), 0x37C7484BL, (VECTOR(int32_t, 2))((-7L), 0x37C7484BL), (VECTOR(int32_t, 2))((-7L), 0x37C7484BL), (-7L), 0x37C7484BL, (-7L), 0x37C7484BL);
                VECTOR(int32_t, 2) l_784 = (VECTOR(int32_t, 2))(0x71CC9A37L, 0x6470A145L);
                VECTOR(int32_t, 4) l_785 = (VECTOR(int32_t, 4))(0x0FE7D97BL, (VECTOR(int32_t, 2))(0x0FE7D97BL, 3L), 3L);
                int8_t l_786 = 1L;
                VECTOR(int32_t, 8) l_787 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0E61C108L), 0x0E61C108L), 0x0E61C108L, (-1L), 0x0E61C108L);
                int8_t l_788 = 5L;
                VECTOR(int32_t, 4) l_789 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0FDFCDFAL), 0x0FDFCDFAL);
                uint32_t l_790 = 0x042C94F7L;
                uint32_t l_791[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                int8_t l_792 = 0x3BL;
                uint32_t l_793 = 0x1C7F17A1L;
                int64_t l_794 = (-1L);
                uint16_t l_795 = 0x2326L;
                int32_t l_796 = (-1L);
                int16_t l_797 = (-1L);
                int64_t l_798 = 1L;
                int i, j, k;
                l_764 &= ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_734.s3664bf0c)))).s2 , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))((l_763[8][3][0] = (l_742 = ((l_737 &= (l_736 = l_735)) , ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x329DL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(0x4D76L, (-8L))), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(0x3AEEL, ((VECTOR(int16_t, 4))(l_738.s0223)), l_739, (-1L), 0x30F7L, (l_741 ^= l_740), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_742, 0x0A9BL, 0x48C2L, 0x1036L)), ((VECTOR(int16_t, 2))(l_743.xw)), 0x367CL, 1L)).s7146050043155231)).sd6)), ((VECTOR(int16_t, 4))(6L, ((VECTOR(int16_t, 2))(0x1E6BL, 0L)), 0x630EL)).even))), l_744, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, (-4L))), 0x7D33L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(l_745.yyyyxxyxyxxxyxxx)).s14eb, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_746.wz)), 0x64C7L, (-1L)))))), (int16_t)((l_751 = (l_748--)) , l_752)))).z, ((VECTOR(int16_t, 2))(l_753.xy)), 0x4576L, 0x292DL)).lo, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))((l_754 ^= (FAKE_DIVERGE(p_1855->global_0_offset, get_global_id(0), 10) , (-5L))), 0x5895L, 0x15F5L, 0x5055L)).yxwwxyxx, ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_755.s64001502)).hi)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-4L), ((VECTOR(int16_t, 2))(0x6251L, 0x3EA3L)), ((VECTOR(int16_t, 2))(l_756.s31)), 1L, (-1L), (l_757 , l_758), ((VECTOR(int16_t, 4))(0x64F1L)), l_759, ((VECTOR(int16_t, 2))(0x1652L)), 0L)))).s36, ((VECTOR(int16_t, 2))(0x2D1CL))))), 0x6C4AL, 7L)).zyyywywxywyyxwyz, ((VECTOR(int16_t, 16))(0x3E71L))))).sdd)).xyxxxxyyxyyyyxyx)), ((VECTOR(int16_t, 16))(0x2E32L)), ((VECTOR(int16_t, 16))(9L))))).odd))).lo))))).hi, ((VECTOR(int16_t, 8))(0x67CBL))))).s76))), 0x6E62L, 0x6699L)).y, l_760, 0x61A1L, l_761, 1L, (-1L), 3L)).s71)), (int16_t)0x045EL, (int16_t)l_762))).yyxxyyyy)), ((VECTOR(int16_t, 8))(0x43DDL))))).hi, ((VECTOR(int16_t, 4))((-10L)))))).xwyyywww, ((VECTOR(uint16_t, 8))(2UL))))).s6))), ((VECTOR(uint16_t, 4))(0xEE51L)), 0x4B16L, 1UL, 0x4A69L)))).s33)).even) , (-8L));
                l_767 = (l_765.x , (l_766 = l_766));
                (*l_766) = l_768;
                if ((l_798 = ((VECTOR(int32_t, 16))(0x2AE99764L, 0x3C4421DEL, ((VECTOR(int32_t, 8))(0x31C0D978L, 0x53E857D6L, l_769, (l_771 = l_770), 0x389BDAC7L, 0x0F31B2CDL, 0x00F40E55L, 0x0AA85214L)), (l_773 &= (l_772 &= 0L)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_774.sf1a69ffbd2464d6b)).s132e, ((VECTOR(int32_t, 16))(l_775.yzzyxwxyxwzyxxxz)).sd336, ((VECTOR(int32_t, 8))((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_776.s0011326314220032)).s8052, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(l_777.zxzx)), ((VECTOR(int32_t, 8))(l_778.s034d433f)).hi)))))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_779.s50411077)).s57)), 0L, 0L)).s6 , ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_780.xxxy)))).wzxxxxzx, ((VECTOR(int32_t, 4))(((*l_767) = (l_781 , l_782)), 0x5FC0C5A5L, 0x4D0863C7L, 0x3E7ADAD7L)).zyxyxzzx, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_783.sd893c5028124f19e)).se4, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(l_784.xx)).yxyyyxyyyxyxyyyy, ((VECTOR(int32_t, 8))(l_785.xyxwyzxw)).s6555227336541101))).sdf))).yyyxyxxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))((-6L), 0x21FE9644L)).xyxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_786, (-4L), 0x3F177008L, 0x179931A6L, (-9L), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_787.s60003074)).hi, (int32_t)l_788))))).zywwwxwy, ((VECTOR(int32_t, 2))(l_789.zz)).xyyxxyyx))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(0x6A1C60F3L, 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_790 , (-1L)), ((VECTOR(int32_t, 8))(0x0F9819ADL)), l_791[3], ((VECTOR(int32_t, 2))(0x1648F6AEL)), 0x4E096BECL, l_792, 0L, 0x7C24FA13L)).s38)).xxxy)), 4L, 0x00F6F5C6L)).s2332425731066016, (int32_t)l_793))).s1bbd, ((VECTOR(int32_t, 4))(0x4431FA97L)), ((VECTOR(int32_t, 4))(0x63030B87L))))).odd, ((VECTOR(int32_t, 2))((-1L)))))), 0x35F5F126L)))).sde))), 0L, 0x23CC50B2L, l_794, ((VECTOR(int32_t, 2))((-7L))), 0x581225F7L)).hi)).yywxxzzz, ((VECTOR(int32_t, 8))(1L))))).s44, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))((-7L)))))), 1L, 0x6E55B0B8L))))).lo))).yxxy)).odd)).xxxxyxyx, ((VECTOR(int32_t, 8))((-1L)))))).even, ((VECTOR(int32_t, 4))(0x3DDE6B84L))))).ywzywwww))))).s3555537500563146, ((VECTOR(int32_t, 16))(0x2E205563L)), ((VECTOR(int32_t, 16))(0x194034ABL))))).hi, (int32_t)l_795, (int32_t)l_796))), ((VECTOR(int32_t, 2))(0x3FB41FC0L)), ((VECTOR(int32_t, 2))(0x30D33DF8L)), 0x47DD26F7L, 0x7CD59DD3L, 0x22EBBF02L, 0x5834B45DL)).s54, ((VECTOR(int32_t, 2))(9L))))).even), 1L, 5L, ((VECTOR(int32_t, 2))(0x4A2A9DFAL)), 0x665294FEL, 0x77600042L, 0x40AFB3DCL)).lo))).hi)), (-5L), ((VECTOR(int32_t, 2))(0x44BA94EAL)), 0x7AAE9C8BL, l_797, 0x648881E3L, ((VECTOR(int32_t, 2))(0x58C1FBADL)), ((VECTOR(int32_t, 4))(0x0945A05BL)), 0x0C477457L, 6L)).sa9eb, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))(0L))))).hi, ((VECTOR(int32_t, 2))(0x6A1DFAEBL)), ((VECTOR(int32_t, 2))(0x0195B438L))))), ((VECTOR(int32_t, 2))(0x028F6BC8L)), (-1L))).sa))
                { /* block id: 492 */
                    int16_t **l_799 = (void*)0;
                    int16_t **l_800 = (void*)0;
                    int32_t l_801 = 0x2EF2341FL;
                    int32_t l_802 = (-3L);
                    int64_t l_803 = (-2L);
                    int32_t l_804 = 0x28BBCA6EL;
                    uint64_t l_805[5] = {1UL,1UL,1UL,1UL,1UL};
                    int i;
                    l_800 = l_799;
                    (*l_767) = (l_801 = 0x4A09C00CL);
                    --l_805[2];
                    l_804 = ((*l_766) = 0x48B5F48FL);
                }
                else
                { /* block id: 499 */
                    int64_t l_808 = (-4L);
                    uint64_t l_809 = 0xDB861CB54A70B06DL;
                    l_809--;
                }
                unsigned int result = 0;
                result += l_734.sf;
                result += l_734.se;
                result += l_734.sd;
                result += l_734.sc;
                result += l_734.sb;
                result += l_734.sa;
                result += l_734.s9;
                result += l_734.s8;
                result += l_734.s7;
                result += l_734.s6;
                result += l_734.s5;
                result += l_734.s4;
                result += l_734.s3;
                result += l_734.s2;
                result += l_734.s1;
                result += l_734.s0;
                result += l_735;
                result += l_736;
                result += l_737;
                result += l_738.s7;
                result += l_738.s6;
                result += l_738.s5;
                result += l_738.s4;
                result += l_738.s3;
                result += l_738.s2;
                result += l_738.s1;
                result += l_738.s0;
                result += l_739;
                result += l_740;
                result += l_741;
                result += l_742;
                result += l_743.w;
                result += l_743.z;
                result += l_743.y;
                result += l_743.x;
                result += l_744;
                result += l_745.y;
                result += l_745.x;
                result += l_746.w;
                result += l_746.z;
                result += l_746.y;
                result += l_746.x;
                result += l_747;
                result += l_748;
                result += l_751;
                result += l_752;
                result += l_753.y;
                result += l_753.x;
                result += l_754;
                result += l_755.s7;
                result += l_755.s6;
                result += l_755.s5;
                result += l_755.s4;
                result += l_755.s3;
                result += l_755.s2;
                result += l_755.s1;
                result += l_755.s0;
                result += l_756.s7;
                result += l_756.s6;
                result += l_756.s5;
                result += l_756.s4;
                result += l_756.s3;
                result += l_756.s2;
                result += l_756.s1;
                result += l_756.s0;
                result += l_757;
                result += l_758;
                result += l_759;
                result += l_760;
                result += l_761;
                result += l_762;
                int l_763_i0, l_763_i1, l_763_i2;
                for (l_763_i0 = 0; l_763_i0 < 10; l_763_i0++) {
                    for (l_763_i1 = 0; l_763_i1 < 5; l_763_i1++) {
                        for (l_763_i2 = 0; l_763_i2 < 2; l_763_i2++) {
                            result += l_763[l_763_i0][l_763_i1][l_763_i2];
                        }
                    }
                }
                result += l_764;
                result += l_765.w;
                result += l_765.z;
                result += l_765.y;
                result += l_765.x;
                result += l_768;
                result += l_769;
                result += l_770;
                result += l_771;
                result += l_772;
                result += l_773;
                result += l_774.sf;
                result += l_774.se;
                result += l_774.sd;
                result += l_774.sc;
                result += l_774.sb;
                result += l_774.sa;
                result += l_774.s9;
                result += l_774.s8;
                result += l_774.s7;
                result += l_774.s6;
                result += l_774.s5;
                result += l_774.s4;
                result += l_774.s3;
                result += l_774.s2;
                result += l_774.s1;
                result += l_774.s0;
                result += l_775.w;
                result += l_775.z;
                result += l_775.y;
                result += l_775.x;
                result += l_776.s7;
                result += l_776.s6;
                result += l_776.s5;
                result += l_776.s4;
                result += l_776.s3;
                result += l_776.s2;
                result += l_776.s1;
                result += l_776.s0;
                result += l_777.w;
                result += l_777.z;
                result += l_777.y;
                result += l_777.x;
                result += l_778.sf;
                result += l_778.se;
                result += l_778.sd;
                result += l_778.sc;
                result += l_778.sb;
                result += l_778.sa;
                result += l_778.s9;
                result += l_778.s8;
                result += l_778.s7;
                result += l_778.s6;
                result += l_778.s5;
                result += l_778.s4;
                result += l_778.s3;
                result += l_778.s2;
                result += l_778.s1;
                result += l_778.s0;
                result += l_779.s7;
                result += l_779.s6;
                result += l_779.s5;
                result += l_779.s4;
                result += l_779.s3;
                result += l_779.s2;
                result += l_779.s1;
                result += l_779.s0;
                result += l_780.y;
                result += l_780.x;
                result += l_781;
                result += l_782;
                result += l_783.sf;
                result += l_783.se;
                result += l_783.sd;
                result += l_783.sc;
                result += l_783.sb;
                result += l_783.sa;
                result += l_783.s9;
                result += l_783.s8;
                result += l_783.s7;
                result += l_783.s6;
                result += l_783.s5;
                result += l_783.s4;
                result += l_783.s3;
                result += l_783.s2;
                result += l_783.s1;
                result += l_783.s0;
                result += l_784.y;
                result += l_784.x;
                result += l_785.w;
                result += l_785.z;
                result += l_785.y;
                result += l_785.x;
                result += l_786;
                result += l_787.s7;
                result += l_787.s6;
                result += l_787.s5;
                result += l_787.s4;
                result += l_787.s3;
                result += l_787.s2;
                result += l_787.s1;
                result += l_787.s0;
                result += l_788;
                result += l_789.w;
                result += l_789.z;
                result += l_789.y;
                result += l_789.x;
                result += l_790;
                int l_791_i0;
                for (l_791_i0 = 0; l_791_i0 < 8; l_791_i0++) {
                    result += l_791[l_791_i0];
                }
                result += l_792;
                result += l_793;
                result += l_794;
                result += l_795;
                result += l_796;
                result += l_797;
                result += l_798;
                atomic_add(&p_1855->l_special_values[25], result);
            }
            else
            { /* block id: 502 */
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 506 */
        int32_t l_812 = (-1L);
        int32_t *l_819 = (void*)0;
        int32_t **l_820 = &l_819;
        int16_t l_821 = 0x5291L;
        int32_t l_822 = 1L;
        VECTOR(int32_t, 2) l_823 = (VECTOR(int32_t, 2))(0x60BBE31BL, (-1L));
        int i;
        --p_1855->g_813;
        p_1855->g_816--;
        (*l_820) = l_819;
        p_1855->g_825--;
    }
    return (*p_1855->g_249);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_285(int8_t * p_286, int8_t * p_287, uint16_t  p_288, struct S3 * p_1855)
{ /* block id: 457 */
    return p_287;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->g_206 p_1855->g_408
 * writes: p_1855->g_408
 */
int8_t * func_289(uint64_t  p_290, uint64_t  p_291, uint64_t  p_292, struct S3 * p_1855)
{ /* block id: 261 */
    int32_t *l_431 = &p_1855->g_408;
    int32_t l_432 = 0x26EC612AL;
    int8_t *l_668 = &p_1855->g_304.f3;
    (*l_431) |= p_1855->g_206;
    (*l_431) &= l_432;
    if ((atomic_inc(&p_1855->l_atomic_input[17]) == 1))
    { /* block id: 265 */
        uint64_t l_433 = 18446744073709551615UL;
        uint64_t l_434[7][7][5] = {{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}},{{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L},{9UL,0xA22766F41D7D2CB3L,0x1E52B521CD879DCAL,4UL,0xC100B024130CED23L}}};
        int16_t l_435 = 0x1E96L;
        int64_t l_436 = 0x214C782C03D9FE38L;
        int16_t l_437[5][7][7] = {{{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L}},{{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L}},{{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L}},{{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L}},{{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L},{0x79ABL,0x79ABL,0x0430L,0x77ECL,0x06FCL,(-2L),0x02C6L}}};
        VECTOR(uint16_t, 4) l_438 = (VECTOR(uint16_t, 4))(0x793DL, (VECTOR(uint16_t, 2))(0x793DL, 0UL), 0UL);
        VECTOR(int16_t, 16) l_439 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x2AD1L), 0x2AD1L), 0x2AD1L, 2L, 0x2AD1L, (VECTOR(int16_t, 2))(2L, 0x2AD1L), (VECTOR(int16_t, 2))(2L, 0x2AD1L), 2L, 0x2AD1L, 2L, 0x2AD1L);
        VECTOR(int32_t, 4) l_440 = (VECTOR(int32_t, 4))(0x10E8A6C7L, (VECTOR(int32_t, 2))(0x10E8A6C7L, 0x04D6B138L), 0x04D6B138L);
        uint16_t l_441 = 65526UL;
        uint64_t l_442 = 18446744073709551606UL;
        uint32_t l_443 = 0UL;
        int32_t l_444 = 0L;
        uint64_t l_445 = 0x04E6018D80943470L;
        VECTOR(int32_t, 16) l_446 = (VECTOR(int32_t, 16))(0x7BD506A4L, (VECTOR(int32_t, 4))(0x7BD506A4L, (VECTOR(int32_t, 2))(0x7BD506A4L, (-1L)), (-1L)), (-1L), 0x7BD506A4L, (-1L), (VECTOR(int32_t, 2))(0x7BD506A4L, (-1L)), (VECTOR(int32_t, 2))(0x7BD506A4L, (-1L)), 0x7BD506A4L, (-1L), 0x7BD506A4L, (-1L));
        uint64_t l_447[6][4] = {{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL},{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL},{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL},{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL},{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL},{0x97A8213EF97A3386L,1UL,0x7C1040AA028305BFL,0x6F6286624227BE1CL}};
        uint16_t l_448 = 65535UL;
        int16_t l_449 = 4L;
        int32_t l_450[4][1];
        int32_t l_451 = 0x3F141958L;
        int32_t l_452 = 0L;
        uint64_t l_453 = 1UL;
        int16_t l_454 = 0x5AFAL;
        int32_t l_455[6] = {(-10L),3L,(-10L),(-10L),3L,(-10L)};
        int32_t l_456 = 7L;
        int64_t l_516 = 0L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_450[i][j] = 0x7BA3FA40L;
        }
        l_435 |= (l_433 , l_434[4][6][2]);
        if (((VECTOR(int32_t, 8))((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(7L, 0x3C16BA3BL)), 0L, 0x755515DEL)).z , ((l_437[1][3][6] = l_436) , (l_456 = ((((l_446.s4 = (l_438.w , (l_445 = (((VECTOR(int16_t, 4))(l_439.s0db9)).y , (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_440.zywy)).zwyyyzzz)).s4 , ((l_442 ^= l_441) , (l_443 , l_444))))))) , (l_449 = (l_447[4][2] , l_448))) , (l_454 = ((((l_450[0][0] = 0x5309304970F70621L) , l_451) , l_452) , l_453))) , l_455[0])))), 1L, ((VECTOR(int32_t, 4))(0x1FEEB1A5L)), 1L, 0x281F6287L)).s1)
        { /* block id: 275 */
            int16_t l_457 = 0x037EL;
            VECTOR(int64_t, 16) l_471 = (VECTOR(int64_t, 16))(0x35B1DDC988CEA49BL, (VECTOR(int64_t, 4))(0x35B1DDC988CEA49BL, (VECTOR(int64_t, 2))(0x35B1DDC988CEA49BL, 6L), 6L), 6L, 0x35B1DDC988CEA49BL, 6L, (VECTOR(int64_t, 2))(0x35B1DDC988CEA49BL, 6L), (VECTOR(int64_t, 2))(0x35B1DDC988CEA49BL, 6L), 0x35B1DDC988CEA49BL, 6L, 0x35B1DDC988CEA49BL, 6L);
            uint16_t l_472 = 0xA314L;
            int32_t l_475 = 0x1513B74CL;
            int i;
            l_446.s1 = l_457;
            for (l_457 = (-11); (l_457 != (-11)); ++l_457)
            { /* block id: 279 */
                VECTOR(int32_t, 4) l_460 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L));
                int i;
                for (l_460.y = 11; (l_460.y == 0); l_460.y = safe_sub_func_uint16_t_u_u(l_460.y, 7))
                { /* block id: 282 */
                    int8_t l_463 = 0x70L;
                    uint16_t l_464 = 65535UL;
                    union U1 l_470[5][5][2] = {{{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}}},{{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}}},{{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}}},{{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}}},{{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}},{{1L},{0x3769E396L}}}};
                    union U1 *l_469 = &l_470[1][4][1];
                    int i, j, k;
                    l_464++;
                    for (l_463 = 0; (l_463 <= (-21)); l_463 = safe_sub_func_uint64_t_u_u(l_463, 2))
                    { /* block id: 286 */
                        l_446.sf |= 0x688220A4L;
                    }
                    l_469 = (void*)0;
                }
            }
            ++l_472;
            if (l_475)
            { /* block id: 293 */
                int32_t l_476 = 0x61229404L;
                uint64_t l_501 = 0xEE452DA981F19F47L;
                int32_t *l_502 = &l_476;
                for (l_476 = (-10); (l_476 < (-20)); l_476 = safe_sub_func_uint32_t_u_u(l_476, 3))
                { /* block id: 296 */
                    uint8_t l_479 = 0xB3L;
                    int64_t l_488 = 0L;
                    VECTOR(uint64_t, 8) l_499 = (VECTOR(uint64_t, 8))(0xAAF882D50D5812F4L, (VECTOR(uint64_t, 4))(0xAAF882D50D5812F4L, (VECTOR(uint64_t, 2))(0xAAF882D50D5812F4L, 0x020B3A1E3D3D516CL), 0x020B3A1E3D3D516CL), 0x020B3A1E3D3D516CL, 0xAAF882D50D5812F4L, 0x020B3A1E3D3D516CL);
                    VECTOR(int32_t, 16) l_500 = (VECTOR(int32_t, 16))(0x0118A972L, (VECTOR(int32_t, 4))(0x0118A972L, (VECTOR(int32_t, 2))(0x0118A972L, 0x6C53EE8BL), 0x6C53EE8BL), 0x6C53EE8BL, 0x0118A972L, 0x6C53EE8BL, (VECTOR(int32_t, 2))(0x0118A972L, 0x6C53EE8BL), (VECTOR(int32_t, 2))(0x0118A972L, 0x6C53EE8BL), 0x0118A972L, 0x6C53EE8BL, 0x0118A972L, 0x6C53EE8BL);
                    int i;
                    if (l_479)
                    { /* block id: 297 */
                        VECTOR(int32_t, 16) l_480 = (VECTOR(int32_t, 16))(0x26378305L, (VECTOR(int32_t, 4))(0x26378305L, (VECTOR(int32_t, 2))(0x26378305L, 0x792F5C42L), 0x792F5C42L), 0x792F5C42L, 0x26378305L, 0x792F5C42L, (VECTOR(int32_t, 2))(0x26378305L, 0x792F5C42L), (VECTOR(int32_t, 2))(0x26378305L, 0x792F5C42L), 0x26378305L, 0x792F5C42L, 0x26378305L, 0x792F5C42L);
                        int32_t l_481 = 6L;
                        VECTOR(int32_t, 16) l_482 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5C72AB02L), 0x5C72AB02L), 0x5C72AB02L, 1L, 0x5C72AB02L, (VECTOR(int32_t, 2))(1L, 0x5C72AB02L), (VECTOR(int32_t, 2))(1L, 0x5C72AB02L), 1L, 0x5C72AB02L, 1L, 0x5C72AB02L);
                        uint16_t l_483 = 0x24A6L;
                        int i;
                        l_481 |= (l_475 = ((VECTOR(int32_t, 4))(l_480.sc419)).x);
                        l_446.sc ^= (l_475 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_482.s4f)).xxxx)).z);
                        l_483++;
                    }
                    else
                    { /* block id: 303 */
                        int32_t l_486 = 0x2372AB03L;
                        VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))(0x0B6239FAL, (VECTOR(int32_t, 4))(0x0B6239FAL, (VECTOR(int32_t, 2))(0x0B6239FAL, 0L), 0L), 0L, 0x0B6239FAL, 0L, (VECTOR(int32_t, 2))(0x0B6239FAL, 0L), (VECTOR(int32_t, 2))(0x0B6239FAL, 0L), 0x0B6239FAL, 0L, 0x0B6239FAL, 0L);
                        int i;
                        l_452 &= l_486;
                        l_475 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_487.s1eefccb8ef837c0f)).s9aff)).w;
                    }
                    if (l_488)
                    { /* block id: 307 */
                        VECTOR(uint8_t, 2) l_489 = (VECTOR(uint8_t, 2))(6UL, 3UL);
                        uint64_t l_490 = 0xAC79D4347E3F54B1L;
                        uint32_t l_491[2][5][1] = {{{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L}},{{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L},{0x4F063EF6L}}};
                        int i, j, k;
                        l_475 = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_489.xy)), 1UL, 0UL)).y , l_490);
                        l_452 = l_491[1][3][0];
                    }
                    else
                    { /* block id: 310 */
                        int64_t l_492 = (-6L);
                        int8_t l_493 = 0x4AL;
                        uint32_t l_494 = 0x2AB73A84L;
                        int32_t l_497 = (-2L);
                        VECTOR(int32_t, 2) l_498 = (VECTOR(int32_t, 2))((-1L), 5L);
                        int i;
                        l_494++;
                        l_446.se |= (l_475 = l_497);
                        l_452 = ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_498.xyxxxyxxxyxyyyxx)).hi)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0L, 0L)), ((VECTOR(int32_t, 2))(0x7E9A1D14L, 8L))))).xyxxyyyy))).s7227156041436477, ((VECTOR(int32_t, 2))((-1L), 0x645C702DL)).xxxyxyyxyxyxyyyx))).s3;
                    }
                    l_446.s1 = (((VECTOR(uint64_t, 8))(l_499.s22033275)).s5 , ((VECTOR(int32_t, 16))(l_500.s16206822afa91e29)).s9);
                }
                l_502 = (l_501 , (void*)0);
            }
            else
            { /* block id: 319 */
                uint16_t l_503 = 0xF3DCL;
                union U0 l_505 = {0x2949L};/* VOLATILE GLOBAL l_505 */
                union U0 *l_504 = &l_505;
                union U0 l_507 = {0x501CL};/* VOLATILE GLOBAL l_507 */
                union U0 *l_506 = &l_507;
                l_506 = (l_503 , l_504);
                l_475 = ((l_438.y = (l_503 = 0x21E2L)) , ((VECTOR(int32_t, 8))((-9L), 0x2CDAD82CL, 0x0F6BB181L, 1L, 0L, 0x64D91C60L, 0L, (-6L))).s4);
            }
        }
        else
        { /* block id: 325 */
            int32_t l_508 = 1L;
            VECTOR(int32_t, 2) l_509 = (VECTOR(int32_t, 2))(0L, (-6L));
            VECTOR(int16_t, 4) l_510 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-6L)), (-6L));
            VECTOR(uint16_t, 2) l_511 = (VECTOR(uint16_t, 2))(0xA207L, 65535UL);
            VECTOR(int32_t, 2) l_512 = (VECTOR(int32_t, 2))(0x26BCD6A6L, 0x77E5F164L);
            uint16_t l_513[6] = {65533UL,65533UL,65533UL,65533UL,65533UL,65533UL};
            int i;
            l_452 |= ((VECTOR(int32_t, 4))(0x3D436FD0L, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(0x1ADDFFD7L, (-1L))).yyyyyyyyyxxxxyxx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((l_446.s3 &= l_508), 0x2739BD94L, 9L, 0L)).wwyxxyzw, ((VECTOR(int32_t, 2))(0L, 0x5633E236L)).yxxyxxxy, ((VECTOR(int32_t, 4))(l_509.yyyx)).zyzyxwxy))).lo, (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x69100222L, (-9L))).yxyyxyyxxxyxxyxy)).sb))).xzzwzwxzyxxwyyzw, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_510.xzyzxyywzyxxxwwy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_511.xyyxyxxyyxyyyyyx)).s6a)).yxxxyxyxyyyxxxxx)))))), ((VECTOR(int32_t, 8))(l_512.yxxyxyxy)).s7156166735422642))).s4, 0x2B1A9E05L, 1L)).w;
            --l_513[1];
        }
        if (l_516)
        { /* block id: 330 */
            int32_t *l_517 = (void*)0;
            int32_t l_519 = 5L;
            int32_t *l_518[5][9] = {{&l_519,&l_519,&l_519,&l_519,(void*)0,(void*)0,&l_519,&l_519,&l_519},{&l_519,&l_519,&l_519,&l_519,(void*)0,(void*)0,&l_519,&l_519,&l_519},{&l_519,&l_519,&l_519,&l_519,(void*)0,(void*)0,&l_519,&l_519,&l_519},{&l_519,&l_519,&l_519,&l_519,(void*)0,(void*)0,&l_519,&l_519,&l_519},{&l_519,&l_519,&l_519,&l_519,(void*)0,(void*)0,&l_519,&l_519,&l_519}};
            VECTOR(int32_t, 2) l_520 = (VECTOR(int32_t, 2))(0x0F36B97AL, 1L);
            VECTOR(int32_t, 16) l_521 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L, (VECTOR(int32_t, 2))((-7L), 0L), (VECTOR(int32_t, 2))((-7L), 0L), (-7L), 0L, (-7L), 0L);
            uint32_t l_522[5][1];
            int8_t l_523 = 0x5CL;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_522[i][j] = 0xEC3667B1L;
            }
            l_518[0][2] = l_517;
            l_522[3][0] ^= (l_452 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_446.s3 |= 6L), ((VECTOR(int32_t, 2))(l_520.xy)), 0x5C6E0412L, 0x0D590459L, ((VECTOR(int32_t, 2))(l_521.scc)), 0x18E5E05CL)).s11)))).odd);
            if (l_523)
            { /* block id: 335 */
                int32_t l_524[7] = {0x4560A9A5L,0x4A782E56L,0x4560A9A5L,0x4560A9A5L,0x4A782E56L,0x4560A9A5L,0x4560A9A5L};
                VECTOR(int32_t, 4) l_525 = (VECTOR(int32_t, 4))(0x3FA367F3L, (VECTOR(int32_t, 2))(0x3FA367F3L, 0x2312BEA5L), 0x2312BEA5L);
                uint16_t l_526 = 0xA5F2L;
                uint32_t l_527 = 0UL;
                uint32_t l_530 = 0xFD37E42AL;
                int i;
                l_524[6] ^= 0x2CAFEA47L;
                l_526 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_525.wzxxzyzxzwxwzxxx)).s7217)).w;
                l_527++;
                l_530 = 0x57EA1C4DL;
            }
            else
            { /* block id: 340 */
                int64_t l_531[8] = {7L,7L,7L,7L,7L,7L,7L,7L};
                int64_t l_532 = 0x1B2A03B033E1DF58L;
                int64_t l_533 = 0x4CA10DA5E3E2A3F9L;
                int i;
                l_533 = (l_532 = l_531[7]);
            }
        }
        else
        { /* block id: 344 */
            VECTOR(int32_t, 4) l_534 = (VECTOR(int32_t, 4))(0x73C95D2DL, (VECTOR(int32_t, 2))(0x73C95D2DL, 0L), 0L);
            uint64_t l_605 = 0x2603BF46E384BFB2L;
            VECTOR(int32_t, 8) l_606 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0F7056E0L), 0x0F7056E0L), 0x0F7056E0L, 0L, 0x0F7056E0L);
            uint32_t l_607 = 0x824CC4A7L;
            uint16_t l_608 = 0xF4ACL;
            int64_t l_609 = 1L;
            int32_t l_610[2][8][3] = {{{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L}},{{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L},{3L,0x78204EE3L,3L}}};
            uint32_t l_611[4][4][9] = {{{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}},{{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}},{{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}},{{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL}}};
            uint16_t l_612 = 0x1B10L;
            VECTOR(int8_t, 8) l_613 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x6BL), 0x6BL), 0x6BL, 0L, 0x6BL);
            VECTOR(int8_t, 2) l_614 = (VECTOR(int8_t, 2))(0x68L, 2L);
            uint8_t l_617[6] = {0xD3L,9UL,0xD3L,0xD3L,9UL,0xD3L};
            VECTOR(int8_t, 16) l_618 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, (-9L)), (-9L)), (-9L), 0x41L, (-9L), (VECTOR(int8_t, 2))(0x41L, (-9L)), (VECTOR(int8_t, 2))(0x41L, (-9L)), 0x41L, (-9L), 0x41L, (-9L));
            int64_t l_619 = 0x1122E78E293242C4L;
            int16_t l_620 = (-1L);
            int16_t l_621 = 0x5FD4L;
            uint32_t l_622[3];
            uint32_t l_623 = 0x551B63CEL;
            int64_t l_624 = 0x66300791E6367EE4L;
            VECTOR(int32_t, 8) l_625 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L);
            VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(0x59906056L, (VECTOR(int32_t, 4))(0x59906056L, (VECTOR(int32_t, 2))(0x59906056L, (-8L)), (-8L)), (-8L), 0x59906056L, (-8L), (VECTOR(int32_t, 2))(0x59906056L, (-8L)), (VECTOR(int32_t, 2))(0x59906056L, (-8L)), 0x59906056L, (-8L), 0x59906056L, (-8L));
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_622[i] = 0x49DB6A04L;
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_534.wxww)), 0x6F643513L, 0x2EA74442L, (-1L), 0L)).s6)
            { /* block id: 345 */
                int16_t l_535 = 7L;
                int32_t l_578[6] = {0x67D71D94L,3L,0x67D71D94L,0x67D71D94L,3L,0x67D71D94L};
                int i;
                if (l_535)
                { /* block id: 346 */
                    int32_t l_536[6][4][4] = {{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}},{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}},{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}},{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}},{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}},{{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL},{(-7L),1L,3L,0x57ECF6DCL}}};
                    int i, j, k;
                    l_446.sb = 0x46180B9AL;
                    for (l_536[4][3][0] = (-2); (l_536[4][3][0] <= 24); ++l_536[4][3][0])
                    { /* block id: 350 */
                        int32_t l_540[3];
                        int32_t *l_539 = &l_540[2];
                        int32_t *l_541 = &l_540[2];
                        int32_t *l_542 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_540[i] = 0x6596CF20L;
                        l_539 = (void*)0;
                        l_446.se = ((VECTOR(int32_t, 2))(0x2C388A77L, 0x54BFA707L)).lo;
                        l_542 = l_541;
                        l_446.s9 ^= 0x4FC78B60L;
                    }
                    l_452 = 0x5811EB96L;
                }
                else
                { /* block id: 357 */
                    uint64_t l_543 = 0x0001370444DC0829L;
                    uint32_t l_544 = 0UL;
                    VECTOR(int32_t, 8) l_551 = (VECTOR(int32_t, 8))(0x3A8F0054L, (VECTOR(int32_t, 4))(0x3A8F0054L, (VECTOR(int32_t, 2))(0x3A8F0054L, 0L), 0L), 0L, 0x3A8F0054L, 0L);
                    int8_t l_552 = 1L;
                    int32_t *l_576 = (void*)0;
                    int32_t *l_577 = (void*)0;
                    int i;
                    if ((((l_543 , l_544) , FAKE_DIVERGE(p_1855->local_2_offset, get_local_id(2), 10)) , ((VECTOR(int32_t, 2))(0x1F4C8475L, 6L)).lo))
                    { /* block id: 358 */
                        VECTOR(int32_t, 2) l_545 = (VECTOR(int32_t, 2))(0x4DEAB7ACL, 1L);
                        int i;
                        l_452 = (l_534.x = ((VECTOR(int32_t, 16))(l_545.yxxxxxxxyyxxxxyy)).sf);
                        l_534.z = ((VECTOR(int32_t, 2))(0x45227FEEL, 5L)).even;
                    }
                    else
                    { /* block id: 362 */
                        VECTOR(int32_t, 4) l_546 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                        uint32_t l_547 = 0x1DF5EA1AL;
                        int8_t l_548 = 0x02L;
                        int32_t l_549 = 0x361FE882L;
                        int32_t l_550 = 0x0AA142D8L;
                        int i;
                        l_446.sa |= ((l_549 |= ((l_546.z , GROUP_DIVERGE(0, 1)) , (l_548 |= l_547))) , l_550);
                    }
                    l_446.s3 = ((VECTOR(int32_t, 4))(l_551.s7163)).x;
                    if (l_552)
                    { /* block id: 368 */
                        VECTOR(int64_t, 4) l_553 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x7A0D164B01776A5BL), 0x7A0D164B01776A5BL);
                        VECTOR(int8_t, 4) l_554 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x72L), 0x72L);
                        uint32_t l_555 = 0x602C0C71L;
                        int32_t l_557 = 0x4F2B3E52L;
                        int32_t *l_556[5][5][10] = {{{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557}},{{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557}},{{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557}},{{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557}},{{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557},{&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557,&l_557}}};
                        int32_t *l_558 = &l_557;
                        VECTOR(int32_t, 2) l_559 = (VECTOR(int32_t, 2))((-2L), 0x1648F8B1L);
                        int32_t l_560 = 0x61C5BBF5L;
                        VECTOR(int32_t, 4) l_561 = (VECTOR(int32_t, 4))(0x27A04A50L, (VECTOR(int32_t, 2))(0x27A04A50L, 0x557E9AAFL), 0x557E9AAFL);
                        uint64_t l_562 = 0xF762AB1EB5ED2453L;
                        int16_t l_563 = 6L;
                        VECTOR(int32_t, 16) l_564 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x4CCAD009L), 0x4CCAD009L), 0x4CCAD009L, (-6L), 0x4CCAD009L, (VECTOR(int32_t, 2))((-6L), 0x4CCAD009L), (VECTOR(int32_t, 2))((-6L), 0x4CCAD009L), (-6L), 0x4CCAD009L, (-6L), 0x4CCAD009L);
                        int16_t l_565 = 5L;
                        uint8_t l_566 = 1UL;
                        int64_t l_567 = 0L;
                        uint32_t l_568 = 4294967295UL;
                        uint8_t l_569 = 0x96L;
                        int32_t l_570[9];
                        int8_t l_571 = 0x06L;
                        int16_t l_572 = 0L;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_570[i] = 0x4E095EB3L;
                        l_558 = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_553.xwzwyywyxyzywwyy)))).sa , (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(l_554.zy))))).yyyxxxxy)).s4 , (((l_450[1][0] = l_555) , FAKE_DIVERGE(p_1855->group_1_offset, get_group_id(1), 10)) , l_556[3][4][9])));
                        l_551.s4 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_559.yyyxxxyxyyxyyxxy)).se3f9, ((VECTOR(int32_t, 4))((l_560 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(0x342703E1L, 0x0A6B67B4L)).yyyyyyxyyyxxyyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(l_561.ww)), 0x2CFC3798L)))).xwwxyyxxwwxxxxyy))))).sc, 4L, l_562, l_563, 0x4EAB760EL, ((VECTOR(int32_t, 4))(l_564.s17c3)), l_565, 6L, l_566, (-1L), (l_567 , (l_568 , l_569)), (-1L), 0x402E766FL)))).sc), 0x188C94E4L, 1L, 0x7685CFD5L))))), ((VECTOR(int32_t, 16))(l_570[8], 0x3E44AE83L, ((VECTOR(int32_t, 4))(1L)), 0x05BE1DE8L, 0x5E350BE1L, l_571, ((VECTOR(int32_t, 4))(0x68306ACBL)), l_572, 0L, 0x6FD1CC9FL)).s0c34, ((VECTOR(int32_t, 4))(0x6BEDAE11L))))).z;
                    }
                    else
                    { /* block id: 372 */
                        uint8_t l_573[4] = {0UL,0UL,0UL,0UL};
                        int32_t l_574[2];
                        uint32_t l_575 = 4294967295UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_574[i] = 0x65894700L;
                        l_452 ^= l_573[3];
                        l_452 |= l_574[1];
                        l_574[0] = l_575;
                    }
                    l_577 = (l_576 = (void*)0);
                }
                l_446.sb = l_578[1];
            }
            else
            { /* block id: 381 */
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(9L, 0x2481F43AL)), (-1L), 0x39B13244L)))).z)
                { /* block id: 382 */
                    int32_t l_579 = 0x3A5183F9L;
                    for (l_579 = 0; (l_579 == 9); ++l_579)
                    { /* block id: 385 */
                        VECTOR(uint64_t, 8) l_582 = (VECTOR(uint64_t, 8))(0x87E695375E05E6E3L, (VECTOR(uint64_t, 4))(0x87E695375E05E6E3L, (VECTOR(uint64_t, 2))(0x87E695375E05E6E3L, 1UL), 1UL), 1UL, 0x87E695375E05E6E3L, 1UL);
                        uint32_t l_583 = 0xA7A60C50L;
                        int64_t l_584 = 0L;
                        uint32_t l_585 = 4294967286UL;
                        int16_t l_586 = 0x721BL;
                        uint64_t l_587 = 0xA66E47280A8B3DB9L;
                        int8_t l_588 = 0L;
                        int8_t l_589[9];
                        uint32_t l_590 = 0xA6BD114DL;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_589[i] = 0x73L;
                        l_587 = (((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(l_582.s0474134616224700)).hi))).s6 , (((l_583 , l_584) , l_585) , l_586));
                        ++l_590;
                    }
                }
                else
                { /* block id: 389 */
                    int32_t l_594 = 5L;
                    int32_t *l_593[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                    int32_t *l_595 = &l_594;
                    int32_t l_604 = 0x0FC5739FL;
                    int i, j;
                    l_595 = l_593[3][0];
                    for (l_594 = 0; (l_594 >= 29); ++l_594)
                    { /* block id: 393 */
                        VECTOR(int8_t, 16) l_598 = (VECTOR(int8_t, 16))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 0x57L), 0x57L), 0x57L, 0x02L, 0x57L, (VECTOR(int8_t, 2))(0x02L, 0x57L), (VECTOR(int8_t, 2))(0x02L, 0x57L), 0x02L, 0x57L, 0x02L, 0x57L);
                        uint32_t l_599[7][2][5] = {{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}},{{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL},{4294967295UL,0x3B8A5B6AL,0x3B8A5B6AL,4294967295UL,0xD2B2564EL}}};
                        int32_t l_602 = 0x104A7106L;
                        int32_t *l_603[8] = {&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602};
                        int i, j, k;
                        l_599[1][1][2]--;
                        l_595 = ((l_436 = (l_516 = l_602)) , l_603[2]);
                    }
                    l_446.s9 = l_604;
                }
            }
            l_446.s4 ^= ((VECTOR(int32_t, 16))(5L, 6L, 0x6DBC97B9L, l_605, (-1L), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_606.s5771)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(0x00L, (l_608 = l_607), (l_610[1][6][1] &= l_609), 0x0CL, l_611[2][2][0], ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))((l_612 , ((VECTOR(int8_t, 16))(l_613.s1300161162007401)).s5), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_614.xxxyxxxx)).odd)), ((l_617[0] = (--l_443)) , ((VECTOR(int8_t, 2))(l_618.s54)).odd), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(0x41L, 0x20L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-3L), 0x54L)).yyxy)).hi))), ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(0x74L, 0L, ((VECTOR(int8_t, 2))(0x2DL, 0x0CL)), 0x48L, 1L, 0L, (l_613.s3 ^= l_619), ((VECTOR(int8_t, 4))(0x37L)), (-3L), 5L, 0x12L, 0L)).s9cf5, ((VECTOR(int8_t, 4))(2L)), ((VECTOR(int8_t, 4))((-7L)))))).hi))).yyxyyxyx)), 0L, (-4L))).sad31))), ((VECTOR(int8_t, 2))((-3L))), 1L, l_620, 0x2DL, 1L, l_621, 0x3FL, 0x3AL, ((VECTOR(int8_t, 2))(0x19L)), 0x68L)).s49, ((VECTOR(int8_t, 2))(6L))))).xxyxxxxx)).s4553303205233525, ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(0L))))).s95)), ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 2))(0x52L)), l_622[1], 0x69L, 0x32L)), (int8_t)0x1BL))).s95, ((VECTOR(uint8_t, 2))(255UL))))).xyyy, ((VECTOR(uint16_t, 4))(0x3C4EL))))).zzxywzww)).lo))), l_623, l_624, ((VECTOR(int32_t, 4))(0L)), 0x33904604L)).s8;
            if ((l_452 = ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(0x602F95B1L, ((VECTOR(int32_t, 2))(l_625.s15)), 0x1232EEC4L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(6L, 1L)))).yxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_626.s0a)), 0x1B079C1DL, 0x4625F87CL))))).z))
            { /* block id: 409 */
                int32_t *l_627 = (void*)0;
                int32_t l_629 = (-2L);
                int32_t *l_628 = &l_629;
                int32_t *l_630 = &l_629;
                union U2 l_632 = {-1L};/* VOLATILE GLOBAL l_632 */
                union U2 *l_631 = &l_632;
                l_630 = (l_628 = (l_627 = (void*)0));
                l_631 = (void*)0;
            }
            else
            { /* block id: 414 */
                int32_t l_633 = 0x0D5D11CFL;
                int32_t *l_643 = &l_633;
                int32_t *l_644 = &l_633;
                for (l_633 = 0; (l_633 >= (-20)); l_633 = safe_sub_func_uint8_t_u_u(l_633, 1))
                { /* block id: 417 */
                    uint8_t l_636 = 4UL;
                    int32_t l_640 = 0x6DFF4E97L;
                    int32_t *l_639 = &l_640;
                    int32_t *l_641 = (void*)0;
                    int32_t *l_642 = &l_640;
                    ++l_636;
                    l_642 = (l_641 = l_639);
                }
                l_644 = l_643;
                for (l_633 = 0; (l_633 >= (-20)); l_633--)
                { /* block id: 425 */
                    uint8_t l_647 = 1UL;
                    uint32_t l_648 = 4294967290UL;
                    uint16_t l_649 = 65535UL;
                    VECTOR(int32_t, 4) l_654 = (VECTOR(int32_t, 4))(0x49B73A93L, (VECTOR(int32_t, 2))(0x49B73A93L, (-1L)), (-1L));
                    int i;
                    l_626.s1 = (l_625.s5 = (l_606.s2 = l_647));
                    l_649 = l_648;
                    for (l_647 = 0; (l_647 != 33); l_647++)
                    { /* block id: 432 */
                        int32_t l_653[2];
                        int32_t *l_652 = &l_653[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_653[i] = 9L;
                        l_643 = l_652;
                    }
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_654.zz)).yyyyxyyxxxxyxxyy)).s2)
                    { /* block id: 435 */
                        int32_t l_656[9][4][7] = {{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}},{{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)},{0x5335A500L,0x5335A500L,(-6L),(-1L),0x4382E57AL,(-1L),(-6L)}}};
                        int32_t *l_655 = &l_656[7][0][6];
                        int32_t *l_657 = &l_656[3][1][5];
                        union U0 l_659 = {0x4F0FL};/* VOLATILE GLOBAL l_659 */
                        union U0 *l_658 = &l_659;
                        VECTOR(int32_t, 16) l_660 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x62E310EDL), 0x62E310EDL), 0x62E310EDL, 5L, 0x62E310EDL, (VECTOR(int32_t, 2))(5L, 0x62E310EDL), (VECTOR(int32_t, 2))(5L, 0x62E310EDL), 5L, 0x62E310EDL, 5L, 0x62E310EDL);
                        uint32_t l_661 = 1UL;
                        int i, j, k;
                        l_657 = (l_644 = (l_643 = l_655));
                        l_658 = (void*)0;
                        l_626.s3 = ((*l_657) = ((VECTOR(int32_t, 8))(l_660.sfce04a02)).s1);
                        (*l_643) = l_661;
                    }
                    else
                    { /* block id: 443 */
                        int16_t l_662[8][7] = {{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L},{0x7819L,1L,0x7819L,0x7819L,1L,0x7819L,0x7819L}};
                        VECTOR(int32_t, 2) l_663 = (VECTOR(int32_t, 2))(0L, 0x0B32B121L);
                        uint32_t l_664 = 0x77F5D383L;
                        uint8_t l_665 = 1UL;
                        uint32_t l_666[1];
                        VECTOR(int16_t, 8) l_667 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_666[i] = 0x14A0D81AL;
                        l_643 = (void*)0;
                        l_663.x = ((l_662[1][0] , 0x50FFL) , (l_606.s0 = ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_663.yxyxyxxy)).s3013257024165311, ((VECTOR(int32_t, 4))((-1L), (l_665 = l_664), 0x25A58F9FL, 1L)).xwywzxzxywywyxyy))).se));
                        l_446.s9 ^= (l_666[0] , l_667.s5);
                    }
                }
            }
        }
        unsigned int result = 0;
        result += l_433;
        int l_434_i0, l_434_i1, l_434_i2;
        for (l_434_i0 = 0; l_434_i0 < 7; l_434_i0++) {
            for (l_434_i1 = 0; l_434_i1 < 7; l_434_i1++) {
                for (l_434_i2 = 0; l_434_i2 < 5; l_434_i2++) {
                    result += l_434[l_434_i0][l_434_i1][l_434_i2];
                }
            }
        }
        result += l_435;
        result += l_436;
        int l_437_i0, l_437_i1, l_437_i2;
        for (l_437_i0 = 0; l_437_i0 < 5; l_437_i0++) {
            for (l_437_i1 = 0; l_437_i1 < 7; l_437_i1++) {
                for (l_437_i2 = 0; l_437_i2 < 7; l_437_i2++) {
                    result += l_437[l_437_i0][l_437_i1][l_437_i2];
                }
            }
        }
        result += l_438.w;
        result += l_438.z;
        result += l_438.y;
        result += l_438.x;
        result += l_439.sf;
        result += l_439.se;
        result += l_439.sd;
        result += l_439.sc;
        result += l_439.sb;
        result += l_439.sa;
        result += l_439.s9;
        result += l_439.s8;
        result += l_439.s7;
        result += l_439.s6;
        result += l_439.s5;
        result += l_439.s4;
        result += l_439.s3;
        result += l_439.s2;
        result += l_439.s1;
        result += l_439.s0;
        result += l_440.w;
        result += l_440.z;
        result += l_440.y;
        result += l_440.x;
        result += l_441;
        result += l_442;
        result += l_443;
        result += l_444;
        result += l_445;
        result += l_446.sf;
        result += l_446.se;
        result += l_446.sd;
        result += l_446.sc;
        result += l_446.sb;
        result += l_446.sa;
        result += l_446.s9;
        result += l_446.s8;
        result += l_446.s7;
        result += l_446.s6;
        result += l_446.s5;
        result += l_446.s4;
        result += l_446.s3;
        result += l_446.s2;
        result += l_446.s1;
        result += l_446.s0;
        int l_447_i0, l_447_i1;
        for (l_447_i0 = 0; l_447_i0 < 6; l_447_i0++) {
            for (l_447_i1 = 0; l_447_i1 < 4; l_447_i1++) {
                result += l_447[l_447_i0][l_447_i1];
            }
        }
        result += l_448;
        result += l_449;
        int l_450_i0, l_450_i1;
        for (l_450_i0 = 0; l_450_i0 < 4; l_450_i0++) {
            for (l_450_i1 = 0; l_450_i1 < 1; l_450_i1++) {
                result += l_450[l_450_i0][l_450_i1];
            }
        }
        result += l_451;
        result += l_452;
        result += l_453;
        result += l_454;
        int l_455_i0;
        for (l_455_i0 = 0; l_455_i0 < 6; l_455_i0++) {
            result += l_455[l_455_i0];
        }
        result += l_456;
        result += l_516;
        atomic_add(&p_1855->l_special_values[17], result);
    }
    else
    { /* block id: 453 */
        (1 + 1);
    }
    return l_668;
}


/* ------------------------------------------ */
/* 
 * reads : p_1855->l_comm_values p_1855->g_396 p_1855->g_270 p_1855->g_comm_values p_1855->g_408 p_1855->g_251.f0 p_1855->g_426 p_1855->g_403
 * writes: p_1855->g_401 p_1855->g_403 p_1855->g_408 p_1855->g_304.f3 p_1855->g_426
 */
int16_t  func_295(int64_t  p_296, uint32_t  p_297, union U2 ** p_298, union U1 * p_299, struct S3 * p_1855)
{ /* block id: 186 */
    union U1 *l_398 = &p_1855->g_399;
    uint8_t *l_400 = &p_1855->g_401;
    uint16_t *l_402 = &p_1855->g_403;
    int32_t l_404 = 0x45B8DCA5L;
    int32_t l_405 = 4L;
    int32_t *l_406 = (void*)0;
    int32_t *l_407[9] = {&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408};
    uint8_t *l_415 = (void*)0;
    int8_t *l_416 = &p_1855->g_304.f3;
    int16_t *l_425[6] = {&p_1855->g_426,&p_1855->g_426,&p_1855->g_426,&p_1855->g_426,&p_1855->g_426,&p_1855->g_426};
    uint8_t l_427 = 0UL;
    int i;
    if ((atomic_inc(&p_1855->g_atomic_input[57 * get_linear_group_id() + 27]) == 0))
    { /* block id: 188 */
        int32_t l_311[10] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
        int i;
        for (l_311[0] = 0; (l_311[0] == (-24)); l_311[0] = safe_sub_func_int32_t_s_s(l_311[0], 1))
        { /* block id: 191 */
            uint16_t l_314 = 0x379CL;
            int32_t l_315[7][10] = {{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L},{0x6B708064L,(-1L),0x4F73EE0BL,9L,0x472531EAL,0x6B708064L,9L,0x0F9FB7C1L,9L,0x6B708064L}};
            int i, j;
            if ((l_315[2][4] = l_314))
            { /* block id: 193 */
                union U1 *l_317 = (void*)0;
                union U1 **l_316 = &l_317;
                union U1 **l_318 = &l_317;
                union U1 **l_319 = &l_317;
                union U1 **l_320 = &l_317;
                int32_t l_321 = (-1L);
                int8_t l_322 = 0x29L;
                uint64_t l_323 = 0x17CB9F2D00B81805L;
                VECTOR(int32_t, 2) l_324 = (VECTOR(int32_t, 2))(0L, 0x00E61919L);
                uint32_t l_325 = 0x375346E9L;
                VECTOR(int32_t, 8) l_326 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
                uint64_t l_327 = 18446744073709551615UL;
                uint32_t l_328[6][4] = {{4294967286UL,4294967286UL,4UL,0x9FB52959L},{4294967286UL,4294967286UL,4UL,0x9FB52959L},{4294967286UL,4294967286UL,4UL,0x9FB52959L},{4294967286UL,4294967286UL,4UL,0x9FB52959L},{4294967286UL,4294967286UL,4UL,0x9FB52959L},{4294967286UL,4294967286UL,4UL,0x9FB52959L}};
                uint16_t l_329 = 0xF7C9L;
                uint64_t l_330 = 0UL;
                int i, j;
                l_320 = (l_319 = (l_318 = l_316));
                l_325 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(0x4E02EA31L, 0x30EF2923L)), 0x6461B692L)), 0x652DDF69L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x2FE8383EL)), (l_323 |= (l_321 , l_322)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_324.xxyy)).lo)).xyyx)), (-1L))), 0x28AA7910L, 0x1639F522L, 1L)).sb;
                l_329 &= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(l_326.s75615520)), (int32_t)(l_324.x ^= l_327), (int32_t)l_328[3][2]))).s7;
                --l_330;
            }
            else
            { /* block id: 202 */
                uint32_t l_333 = 8UL;
                int32_t l_334 = (-1L);
                int32_t *l_335[9] = {&l_334,(void*)0,&l_334,&l_334,(void*)0,&l_334,&l_334,(void*)0,&l_334};
                int32_t *l_336 = (void*)0;
                int32_t *l_337 = &l_334;
                uint16_t l_338 = 65535UL;
                int i;
                l_334 &= l_333;
                l_337 = (l_336 = l_335[4]);
                if (l_338)
                { /* block id: 206 */
                    int32_t l_339 = 0x65D8CDCAL;
                    for (l_339 = 0; (l_339 <= (-25)); l_339 = safe_sub_func_int32_t_s_s(l_339, 8))
                    { /* block id: 209 */
                        int16_t l_342[2];
                        VECTOR(uint16_t, 4) l_343 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 65535UL), 65535UL);
                        uint8_t l_344 = 0xB7L;
                        uint32_t l_345 = 0x9521A3EEL;
                        VECTOR(int64_t, 2) l_346 = (VECTOR(int64_t, 2))((-2L), 0L);
                        int8_t l_347 = 0x2EL;
                        VECTOR(int64_t, 8) l_348 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x42E49EBBCC51002CL), 0x42E49EBBCC51002CL), 0x42E49EBBCC51002CL, 1L, 0x42E49EBBCC51002CL);
                        uint64_t l_349 = 5UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_342[i] = 0L;
                        l_345 &= (l_344 = (l_342[1] , (((VECTOR(uint16_t, 4))(l_343.wwzx)).x , 1L)));
                        l_349 = (((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(l_346.yy)).yyyy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0x388691C0B45EBCFDL)), (-1L), 0x384DC00473BA1AB9L))))).x , (l_348.s1 = l_347));
                    }
                }
                else
                { /* block id: 215 */
                    int64_t l_350 = 0x76B0EA0F8AD327F9L;
                    uint16_t l_351 = 0xBF1FL;
                    VECTOR(int16_t, 8) l_352 = (VECTOR(int16_t, 8))(0x5E54L, (VECTOR(int16_t, 4))(0x5E54L, (VECTOR(int16_t, 2))(0x5E54L, 0x33B5L), 0x33B5L), 0x33B5L, 0x5E54L, 0x33B5L);
                    VECTOR(uint16_t, 4) l_353 = (VECTOR(uint16_t, 4))(0x64CAL, (VECTOR(uint16_t, 2))(0x64CAL, 0xDCAEL), 0xDCAEL);
                    VECTOR(int32_t, 4) l_354 = (VECTOR(int32_t, 4))(0x0F6A262DL, (VECTOR(int32_t, 2))(0x0F6A262DL, 0x79965478L), 0x79965478L);
                    int32_t l_355 = 0x7EA88888L;
                    int i;
                    l_355 &= ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_350 , l_351), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_352.s3734670570342254)).s86, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_353.yw))))))), 1L)).even)).yyyyyxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_354.yxwzxwwxyxwzwyzz)).even)), ((VECTOR(int32_t, 2))(3L, 0x5A533F50L)).yyyxxxxy))).s1;
                    for (l_353.y = (-1); (l_353.y < 20); l_353.y = safe_add_func_int64_t_s_s(l_353.y, 6))
                    { /* block id: 219 */
                        VECTOR(int32_t, 16) l_358 = (VECTOR(int32_t, 16))(0x32D7A865L, (VECTOR(int32_t, 4))(0x32D7A865L, (VECTOR(int32_t, 2))(0x32D7A865L, 0x6D5E83C0L), 0x6D5E83C0L), 0x6D5E83C0L, 0x32D7A865L, 0x6D5E83C0L, (VECTOR(int32_t, 2))(0x32D7A865L, 0x6D5E83C0L), (VECTOR(int32_t, 2))(0x32D7A865L, 0x6D5E83C0L), 0x32D7A865L, 0x6D5E83C0L, 0x32D7A865L, 0x6D5E83C0L);
                        uint16_t l_359 = 0x0CA8L;
                        int i;
                        l_358.sc = ((VECTOR(int32_t, 16))(l_358.sed96d27c4b87a6c4)).s4;
                        l_359 &= 0x70D1B4B3L;
                    }
                }
            }
            for (l_315[3][8] = 0; (l_315[3][8] > 29); l_315[3][8] = safe_add_func_int64_t_s_s(l_315[3][8], 4))
            { /* block id: 227 */
                int32_t l_362 = 0L;
                union U1 l_368[9] = {{-10L},{0x41FB1360L},{-10L},{-10L},{0x41FB1360L},{-10L},{-10L},{0x41FB1360L},{-10L}};
                union U1 *l_367 = &l_368[3];
                union U1 **l_366[4] = {&l_367,&l_367,&l_367,&l_367};
                int i;
                for (l_362 = 1; (l_362 != (-2)); --l_362)
                { /* block id: 230 */
                    int16_t l_365 = 0x0490L;
                    l_365 &= 5L;
                }
                l_366[2] = l_366[2];
                for (l_362 = 0; (l_362 <= (-17)); l_362--)
                { /* block id: 236 */
                    uint16_t l_371 = 0xD740L;
                    VECTOR(uint32_t, 8) l_372 = (VECTOR(uint32_t, 8))(0xF80A26F1L, (VECTOR(uint32_t, 4))(0xF80A26F1L, (VECTOR(uint32_t, 2))(0xF80A26F1L, 6UL), 6UL), 6UL, 0xF80A26F1L, 6UL);
                    int32_t l_373 = (-8L);
                    int32_t l_375 = 0x6821305DL;
                    int32_t *l_374 = &l_375;
                    int32_t *l_376 = &l_375;
                    int32_t *l_377 = &l_375;
                    int32_t *l_378[10][9] = {{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375},{&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375}};
                    int32_t *l_379 = &l_375;
                    uint64_t l_380 = 1UL;
                    uint16_t l_381 = 0x3BFEL;
                    int i, j;
                    l_372.s7 = l_371;
                    l_379 = (l_378[1][3] = (l_373 , (l_377 = (l_376 = (l_374 = (((VECTOR(int8_t, 2))(2L, (-1L))).lo , l_374))))));
                    l_381 = l_380;
                }
            }
        }
        unsigned int result = 0;
        int l_311_i0;
        for (l_311_i0 = 0; l_311_i0 < 10; l_311_i0++) {
            result += l_311[l_311_i0];
        }
        atomic_add(&p_1855->g_special_values[57 * get_linear_group_id() + 27], result);
    }
    else
    { /* block id: 247 */
        (1 + 1);
    }
    p_1855->g_408 |= (safe_div_func_int64_t_s_s((+((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_1855->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1855->tid, 17))], ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(0xE4L, 0x03L, 0UL, 0x24L, (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((*l_400) = ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((p_1855->g_396 != l_398), p_1855->g_270)) ^ (-2L)), 3)) != ((void*)0 != &p_299))), (((l_404 = ((*l_402) = 1UL)) & p_1855->g_comm_values[p_1855->tid]) ^ l_405))), p_1855->g_comm_values[p_1855->tid])), 255UL, 0x12L, FAKE_DIVERGE(p_1855->group_0_offset, get_group_id(0), 10), GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 2))(0xE4L)), 0x16L, 255UL, ((VECTOR(uint8_t, 2))(9UL)), 255UL)), ((VECTOR(uint8_t, 16))(0x92L))))).s3)), p_1855->g_270)) >= 18446744073709551609UL)), 0x455F90A5D42A5252L));
    l_427 = (((safe_lshift_func_uint16_t_u_s((p_296 , GROUP_DIVERGE(0, 1)), (safe_rshift_func_int16_t_s_u((p_1855->g_426 |= (safe_add_func_uint32_t_u_u((((l_400 = &p_1855->g_401) == l_415) , (0L | ((*l_416) = 0x6BL))), (((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(1L, 2)) || FAKE_DIVERGE(p_1855->global_0_offset, get_global_id(0), 10)) <= p_1855->g_251.f0), (GROUP_DIVERGE(1, 1) == (p_296 , p_297)))) ^ p_1855->g_270) , &l_398) == &p_1855->g_396), p_296)) ^ p_296), p_297)) ^ p_1855->g_270) == GROUP_DIVERGE(2, 1)) , p_1855->g_270) , p_1855->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1855->tid, 17))])))), 2)))) == 0x5DFEL) ^ p_1855->g_403);
    return p_297;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S3 c_1856;
    struct S3* p_1855 = &c_1856;
    struct S3 c_1857 = {
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1855->g_202
        0x6663B30EL, // p_1855->g_203
        (-1L), // p_1855->g_206
        (-5L), // p_1855->g_227
        {-7L}, // p_1855->g_251
        &p_1855->g_251, // p_1855->g_250
        &p_1855->g_250, // p_1855->g_249
        1UL, // p_1855->g_265
        0x54B9L, // p_1855->g_270
        {-7L}, // p_1855->g_304
        0L, // p_1855->g_306
        &p_1855->g_306, // p_1855->g_305
        {-6L}, // p_1855->g_310
        {0x049F30D6L}, // p_1855->g_397
        &p_1855->g_397, // p_1855->g_396
        {0x70A4E525L}, // p_1855->g_399
        0UL, // p_1855->g_401
        0x8787L, // p_1855->g_403
        9L, // p_1855->g_408
        4L, // p_1855->g_426
        0x6592L, // p_1855->g_429
        (-5L), // p_1855->g_670
        {&p_1855->g_670,&p_1855->g_670,&p_1855->g_670,&p_1855->g_670,&p_1855->g_670}, // p_1855->g_669
        1UL, // p_1855->g_672
        0xFCEC4D8CL, // p_1855->g_677
        0x4BL, // p_1855->g_680
        0xE1F2A764356D8214L, // p_1855->g_681
        (VECTOR(uint8_t, 8))(0x26L, (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 0x1DL), 0x1DL), 0x1DL, 0x26L, 0x1DL), // p_1855->g_710
        (VECTOR(uint8_t, 8))(0x49L, (VECTOR(uint8_t, 4))(0x49L, (VECTOR(uint8_t, 2))(0x49L, 0x9FL), 0x9FL), 0x9FL, 0x49L, 0x9FL), // p_1855->g_711
        (VECTOR(uint8_t, 2))(0xEFL, 0x24L), // p_1855->g_712
        (VECTOR(uint8_t, 16))(0xCEL, (VECTOR(uint8_t, 4))(0xCEL, (VECTOR(uint8_t, 2))(0xCEL, 0x57L), 0x57L), 0x57L, 0xCEL, 0x57L, (VECTOR(uint8_t, 2))(0xCEL, 0x57L), (VECTOR(uint8_t, 2))(0xCEL, 0x57L), 0xCEL, 0x57L, 0xCEL, 0x57L), // p_1855->g_713
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x5BL), 0x5BL), // p_1855->g_715
        {-1L}, // p_1855->g_717
        {1L}, // p_1855->g_719
        &p_1855->g_719, // p_1855->g_718
        {1L}, // p_1855->g_721
        {0x3770DFFC26921811L}, // p_1855->g_722
        {0x67FB27312A12A772L}, // p_1855->g_723
        {0x74EC440B2D12DCF2L}, // p_1855->g_724
        {0x304649EAA56359BDL}, // p_1855->g_725
        {0x0DC2B89CF5DAA8E0L}, // p_1855->g_726
        {0x5F36C62A748D5641L}, // p_1855->g_727
        {8L}, // p_1855->g_728
        0xD030F35FE0CC3130L, // p_1855->g_813
        254UL, // p_1855->g_816
        (-1L), // p_1855->g_824
        0xE2L, // p_1855->g_825
        {{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}},{{{0x7DCAL},{4L},{0x11BFL},{-3L},{1L},{0x05A5L},{0x7DCAL},{0x2DC4L},{0x35EAL},{0x35EAL}}}}, // p_1855->g_849
        {-8L}, // p_1855->g_851
        &p_1855->g_851, // p_1855->g_850
        {18446744073709551615UL,18446744073709551615UL}, // p_1855->g_865
        {0x42694E73L}, // p_1855->g_873
        {0x459BBF20L}, // p_1855->g_878
        &p_1855->g_426, // p_1855->g_913
        &p_1855->g_913, // p_1855->g_912
        (VECTOR(int16_t, 16))(0x7AA4L, (VECTOR(int16_t, 4))(0x7AA4L, (VECTOR(int16_t, 2))(0x7AA4L, 0L), 0L), 0L, 0x7AA4L, 0L, (VECTOR(int16_t, 2))(0x7AA4L, 0L), (VECTOR(int16_t, 2))(0x7AA4L, 0L), 0x7AA4L, 0L, 0x7AA4L, 0L), // p_1855->g_926
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1855->g_930
        (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0xBBDD7844L), 0xBBDD7844L), // p_1855->g_946
        (VECTOR(int16_t, 4))(0x6734L, (VECTOR(int16_t, 2))(0x6734L, 0x6713L), 0x6713L), // p_1855->g_950
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1855->g_977
        {&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408,&p_1855->g_408}, // p_1855->g_989
        &p_1855->g_989[4], // p_1855->g_988
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL), // p_1855->g_991
        (VECTOR(uint8_t, 2))(0UL, 255UL), // p_1855->g_993
        (VECTOR(uint8_t, 2))(0x54L, 0xBFL), // p_1855->g_994
        (VECTOR(int8_t, 16))(0x00L, (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 1L), 1L), 1L, 0x00L, 1L, (VECTOR(int8_t, 2))(0x00L, 1L), (VECTOR(int8_t, 2))(0x00L, 1L), 0x00L, 1L, 0x00L, 1L), // p_1855->g_997
        &p_1855->g_265, // p_1855->g_1005
        252UL, // p_1855->g_1011
        (VECTOR(int16_t, 16))(0x68ABL, (VECTOR(int16_t, 4))(0x68ABL, (VECTOR(int16_t, 2))(0x68ABL, (-1L)), (-1L)), (-1L), 0x68ABL, (-1L), (VECTOR(int16_t, 2))(0x68ABL, (-1L)), (VECTOR(int16_t, 2))(0x68ABL, (-1L)), 0x68ABL, (-1L), 0x68ABL, (-1L)), // p_1855->g_1029
        (void*)0, // p_1855->g_1102
        (VECTOR(int16_t, 2))(0x12EAL, 0x435BL), // p_1855->g_1133
        (VECTOR(int32_t, 4))(0x57B46C57L, (VECTOR(int32_t, 2))(0x57B46C57L, 0x680F6485L), 0x680F6485L), // p_1855->g_1142
        (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 2UL, 18446744073709551615UL), // p_1855->g_1152
        0x1D8218E2L, // p_1855->g_1162
        &p_1855->g_989[4], // p_1855->g_1164
        (VECTOR(int64_t, 8))(0x6C5F64C81177F417L, (VECTOR(int64_t, 4))(0x6C5F64C81177F417L, (VECTOR(int64_t, 2))(0x6C5F64C81177F417L, 0x5C8C3EC9C2C492DEL), 0x5C8C3EC9C2C492DEL), 0x5C8C3EC9C2C492DEL, 0x6C5F64C81177F417L, 0x5C8C3EC9C2C492DEL), // p_1855->g_1177
        &p_1855->g_989[4], // p_1855->g_1190
        0xAA7F6C06L, // p_1855->g_1205
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8559L), 0x8559L), // p_1855->g_1248
        (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 7L), 7L), // p_1855->g_1259
        (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0xA6C7465255A7CBE4L), 0xA6C7465255A7CBE4L), 0xA6C7465255A7CBE4L, 5UL, 0xA6C7465255A7CBE4L, (VECTOR(uint64_t, 2))(5UL, 0xA6C7465255A7CBE4L), (VECTOR(uint64_t, 2))(5UL, 0xA6C7465255A7CBE4L), 5UL, 0xA6C7465255A7CBE4L, 5UL, 0xA6C7465255A7CBE4L), // p_1855->g_1271
        0x039E9A8BL, // p_1855->g_1286
        (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 8UL), 8UL), 8UL, 2UL, 8UL, (VECTOR(uint8_t, 2))(2UL, 8UL), (VECTOR(uint8_t, 2))(2UL, 8UL), 2UL, 8UL, 2UL, 8UL), // p_1855->g_1293
        {-1L}, // p_1855->g_1320
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x76E9L), 0x76E9L), 0x76E9L, 0L, 0x76E9L), // p_1855->g_1345
        (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0UL), 0UL), 0UL, 2UL, 0UL), // p_1855->g_1350
        (VECTOR(int32_t, 2))(2L, 0x49686D5BL), // p_1855->g_1378
        {{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}},{{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)},{0x5D742FB4L,9L,6L,(-3L)}}}, // p_1855->g_1390
        (VECTOR(int32_t, 2))(9L, 0L), // p_1855->g_1391
        (VECTOR(uint8_t, 8))(0xB4L, (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 2UL), 2UL), 2UL, 0xB4L, 2UL), // p_1855->g_1397
        {{{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}}},{{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}}},{{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}}},{{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}}},{{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}},{{0x4EFC5420L},{0x4EFC5420L},{0x2B977705L}}}}, // p_1855->g_1400
        (VECTOR(uint64_t, 4))(0x57C75648225F7488L, (VECTOR(uint64_t, 2))(0x57C75648225F7488L, 9UL), 9UL), // p_1855->g_1409
        {0L}, // p_1855->g_1430
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4E44L), 0x4E44L), 0x4E44L, 1L, 0x4E44L), // p_1855->g_1436
        (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0L), 0L), // p_1855->g_1457
        {0x11099A515589AD76L}, // p_1855->g_1475
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x27DBL), 0x27DBL), 0x27DBL, (-1L), 0x27DBL), // p_1855->g_1506
        (VECTOR(int32_t, 4))(0x22B9A705L, (VECTOR(int32_t, 2))(0x22B9A705L, 0x286E9515L), 0x286E9515L), // p_1855->g_1562
        {{0x582C2AB274472E10L}}, // p_1855->g_1569
        {0x38A146F304DD907FL,0x38A146F304DD907FL,0x38A146F304DD907FL,0x38A146F304DD907FL,0x38A146F304DD907FL}, // p_1855->g_1587
        0x62ACC6B46D7147BCL, // p_1855->g_1589
        (VECTOR(uint32_t, 2))(0x72D7FF0BL, 0x74EF70ACL), // p_1855->g_1655
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xA40919D08DBE9A54L), 0xA40919D08DBE9A54L), // p_1855->g_1660
        (VECTOR(int8_t, 2))((-3L), 1L), // p_1855->g_1671
        {0L}, // p_1855->g_1692
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 1UL, 18446744073709551608UL), // p_1855->g_1697
        (void*)0, // p_1855->g_1728
        &p_1855->g_1011, // p_1855->g_1740
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x097749B1L), 0x097749B1L), 0x097749B1L, 0UL, 0x097749B1L), // p_1855->g_1750
        &p_1855->g_989[4], // p_1855->g_1788
        &p_1855->g_1005, // p_1855->g_1851
        &p_1855->g_1851, // p_1855->g_1850
        0, // p_1855->v_collective
        sequence_input[get_global_id(0)], // p_1855->global_0_offset
        sequence_input[get_global_id(1)], // p_1855->global_1_offset
        sequence_input[get_global_id(2)], // p_1855->global_2_offset
        sequence_input[get_local_id(0)], // p_1855->local_0_offset
        sequence_input[get_local_id(1)], // p_1855->local_1_offset
        sequence_input[get_local_id(2)], // p_1855->local_2_offset
        sequence_input[get_group_id(0)], // p_1855->group_0_offset
        sequence_input[get_group_id(1)], // p_1855->group_1_offset
        sequence_input[get_group_id(2)], // p_1855->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_1855->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1856 = c_1857;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1855);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1855->g_202.s0, "p_1855->g_202.s0", print_hash_value);
    transparent_crc(p_1855->g_202.s1, "p_1855->g_202.s1", print_hash_value);
    transparent_crc(p_1855->g_202.s2, "p_1855->g_202.s2", print_hash_value);
    transparent_crc(p_1855->g_202.s3, "p_1855->g_202.s3", print_hash_value);
    transparent_crc(p_1855->g_202.s4, "p_1855->g_202.s4", print_hash_value);
    transparent_crc(p_1855->g_202.s5, "p_1855->g_202.s5", print_hash_value);
    transparent_crc(p_1855->g_202.s6, "p_1855->g_202.s6", print_hash_value);
    transparent_crc(p_1855->g_202.s7, "p_1855->g_202.s7", print_hash_value);
    transparent_crc(p_1855->g_203, "p_1855->g_203", print_hash_value);
    transparent_crc(p_1855->g_206, "p_1855->g_206", print_hash_value);
    transparent_crc(p_1855->g_227, "p_1855->g_227", print_hash_value);
    transparent_crc(p_1855->g_251.f0, "p_1855->g_251.f0", print_hash_value);
    transparent_crc(p_1855->g_265, "p_1855->g_265", print_hash_value);
    transparent_crc(p_1855->g_270, "p_1855->g_270", print_hash_value);
    transparent_crc(p_1855->g_306, "p_1855->g_306", print_hash_value);
    transparent_crc(p_1855->g_310.f0, "p_1855->g_310.f0", print_hash_value);
    transparent_crc(p_1855->g_397.f0, "p_1855->g_397.f0", print_hash_value);
    transparent_crc(p_1855->g_401, "p_1855->g_401", print_hash_value);
    transparent_crc(p_1855->g_403, "p_1855->g_403", print_hash_value);
    transparent_crc(p_1855->g_408, "p_1855->g_408", print_hash_value);
    transparent_crc(p_1855->g_426, "p_1855->g_426", print_hash_value);
    transparent_crc(p_1855->g_429, "p_1855->g_429", print_hash_value);
    transparent_crc(p_1855->g_670, "p_1855->g_670", print_hash_value);
    transparent_crc(p_1855->g_672, "p_1855->g_672", print_hash_value);
    transparent_crc(p_1855->g_677, "p_1855->g_677", print_hash_value);
    transparent_crc(p_1855->g_680, "p_1855->g_680", print_hash_value);
    transparent_crc(p_1855->g_681, "p_1855->g_681", print_hash_value);
    transparent_crc(p_1855->g_710.s0, "p_1855->g_710.s0", print_hash_value);
    transparent_crc(p_1855->g_710.s1, "p_1855->g_710.s1", print_hash_value);
    transparent_crc(p_1855->g_710.s2, "p_1855->g_710.s2", print_hash_value);
    transparent_crc(p_1855->g_710.s3, "p_1855->g_710.s3", print_hash_value);
    transparent_crc(p_1855->g_710.s4, "p_1855->g_710.s4", print_hash_value);
    transparent_crc(p_1855->g_710.s5, "p_1855->g_710.s5", print_hash_value);
    transparent_crc(p_1855->g_710.s6, "p_1855->g_710.s6", print_hash_value);
    transparent_crc(p_1855->g_710.s7, "p_1855->g_710.s7", print_hash_value);
    transparent_crc(p_1855->g_711.s0, "p_1855->g_711.s0", print_hash_value);
    transparent_crc(p_1855->g_711.s1, "p_1855->g_711.s1", print_hash_value);
    transparent_crc(p_1855->g_711.s2, "p_1855->g_711.s2", print_hash_value);
    transparent_crc(p_1855->g_711.s3, "p_1855->g_711.s3", print_hash_value);
    transparent_crc(p_1855->g_711.s4, "p_1855->g_711.s4", print_hash_value);
    transparent_crc(p_1855->g_711.s5, "p_1855->g_711.s5", print_hash_value);
    transparent_crc(p_1855->g_711.s6, "p_1855->g_711.s6", print_hash_value);
    transparent_crc(p_1855->g_711.s7, "p_1855->g_711.s7", print_hash_value);
    transparent_crc(p_1855->g_712.x, "p_1855->g_712.x", print_hash_value);
    transparent_crc(p_1855->g_712.y, "p_1855->g_712.y", print_hash_value);
    transparent_crc(p_1855->g_713.s0, "p_1855->g_713.s0", print_hash_value);
    transparent_crc(p_1855->g_713.s1, "p_1855->g_713.s1", print_hash_value);
    transparent_crc(p_1855->g_713.s2, "p_1855->g_713.s2", print_hash_value);
    transparent_crc(p_1855->g_713.s3, "p_1855->g_713.s3", print_hash_value);
    transparent_crc(p_1855->g_713.s4, "p_1855->g_713.s4", print_hash_value);
    transparent_crc(p_1855->g_713.s5, "p_1855->g_713.s5", print_hash_value);
    transparent_crc(p_1855->g_713.s6, "p_1855->g_713.s6", print_hash_value);
    transparent_crc(p_1855->g_713.s7, "p_1855->g_713.s7", print_hash_value);
    transparent_crc(p_1855->g_713.s8, "p_1855->g_713.s8", print_hash_value);
    transparent_crc(p_1855->g_713.s9, "p_1855->g_713.s9", print_hash_value);
    transparent_crc(p_1855->g_713.sa, "p_1855->g_713.sa", print_hash_value);
    transparent_crc(p_1855->g_713.sb, "p_1855->g_713.sb", print_hash_value);
    transparent_crc(p_1855->g_713.sc, "p_1855->g_713.sc", print_hash_value);
    transparent_crc(p_1855->g_713.sd, "p_1855->g_713.sd", print_hash_value);
    transparent_crc(p_1855->g_713.se, "p_1855->g_713.se", print_hash_value);
    transparent_crc(p_1855->g_713.sf, "p_1855->g_713.sf", print_hash_value);
    transparent_crc(p_1855->g_715.x, "p_1855->g_715.x", print_hash_value);
    transparent_crc(p_1855->g_715.y, "p_1855->g_715.y", print_hash_value);
    transparent_crc(p_1855->g_715.z, "p_1855->g_715.z", print_hash_value);
    transparent_crc(p_1855->g_715.w, "p_1855->g_715.w", print_hash_value);
    transparent_crc(p_1855->g_717.f0, "p_1855->g_717.f0", print_hash_value);
    transparent_crc(p_1855->g_724.f0, "p_1855->g_724.f0", print_hash_value);
    transparent_crc(p_1855->g_813, "p_1855->g_813", print_hash_value);
    transparent_crc(p_1855->g_816, "p_1855->g_816", print_hash_value);
    transparent_crc(p_1855->g_824, "p_1855->g_824", print_hash_value);
    transparent_crc(p_1855->g_825, "p_1855->g_825", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1855->g_849[i][j][k].f0, "p_1855->g_849[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1855->g_851.f0, "p_1855->g_851.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1855->g_865[i], "p_1855->g_865[i]", print_hash_value);

    }
    transparent_crc(p_1855->g_873.f0, "p_1855->g_873.f0", print_hash_value);
    transparent_crc(p_1855->g_878.f0, "p_1855->g_878.f0", print_hash_value);
    transparent_crc(p_1855->g_926.s0, "p_1855->g_926.s0", print_hash_value);
    transparent_crc(p_1855->g_926.s1, "p_1855->g_926.s1", print_hash_value);
    transparent_crc(p_1855->g_926.s2, "p_1855->g_926.s2", print_hash_value);
    transparent_crc(p_1855->g_926.s3, "p_1855->g_926.s3", print_hash_value);
    transparent_crc(p_1855->g_926.s4, "p_1855->g_926.s4", print_hash_value);
    transparent_crc(p_1855->g_926.s5, "p_1855->g_926.s5", print_hash_value);
    transparent_crc(p_1855->g_926.s6, "p_1855->g_926.s6", print_hash_value);
    transparent_crc(p_1855->g_926.s7, "p_1855->g_926.s7", print_hash_value);
    transparent_crc(p_1855->g_926.s8, "p_1855->g_926.s8", print_hash_value);
    transparent_crc(p_1855->g_926.s9, "p_1855->g_926.s9", print_hash_value);
    transparent_crc(p_1855->g_926.sa, "p_1855->g_926.sa", print_hash_value);
    transparent_crc(p_1855->g_926.sb, "p_1855->g_926.sb", print_hash_value);
    transparent_crc(p_1855->g_926.sc, "p_1855->g_926.sc", print_hash_value);
    transparent_crc(p_1855->g_926.sd, "p_1855->g_926.sd", print_hash_value);
    transparent_crc(p_1855->g_926.se, "p_1855->g_926.se", print_hash_value);
    transparent_crc(p_1855->g_926.sf, "p_1855->g_926.sf", print_hash_value);
    transparent_crc(p_1855->g_946.x, "p_1855->g_946.x", print_hash_value);
    transparent_crc(p_1855->g_946.y, "p_1855->g_946.y", print_hash_value);
    transparent_crc(p_1855->g_946.z, "p_1855->g_946.z", print_hash_value);
    transparent_crc(p_1855->g_946.w, "p_1855->g_946.w", print_hash_value);
    transparent_crc(p_1855->g_950.x, "p_1855->g_950.x", print_hash_value);
    transparent_crc(p_1855->g_950.y, "p_1855->g_950.y", print_hash_value);
    transparent_crc(p_1855->g_950.z, "p_1855->g_950.z", print_hash_value);
    transparent_crc(p_1855->g_950.w, "p_1855->g_950.w", print_hash_value);
    transparent_crc(p_1855->g_977.s0, "p_1855->g_977.s0", print_hash_value);
    transparent_crc(p_1855->g_977.s1, "p_1855->g_977.s1", print_hash_value);
    transparent_crc(p_1855->g_977.s2, "p_1855->g_977.s2", print_hash_value);
    transparent_crc(p_1855->g_977.s3, "p_1855->g_977.s3", print_hash_value);
    transparent_crc(p_1855->g_977.s4, "p_1855->g_977.s4", print_hash_value);
    transparent_crc(p_1855->g_977.s5, "p_1855->g_977.s5", print_hash_value);
    transparent_crc(p_1855->g_977.s6, "p_1855->g_977.s6", print_hash_value);
    transparent_crc(p_1855->g_977.s7, "p_1855->g_977.s7", print_hash_value);
    transparent_crc(p_1855->g_991.s0, "p_1855->g_991.s0", print_hash_value);
    transparent_crc(p_1855->g_991.s1, "p_1855->g_991.s1", print_hash_value);
    transparent_crc(p_1855->g_991.s2, "p_1855->g_991.s2", print_hash_value);
    transparent_crc(p_1855->g_991.s3, "p_1855->g_991.s3", print_hash_value);
    transparent_crc(p_1855->g_991.s4, "p_1855->g_991.s4", print_hash_value);
    transparent_crc(p_1855->g_991.s5, "p_1855->g_991.s5", print_hash_value);
    transparent_crc(p_1855->g_991.s6, "p_1855->g_991.s6", print_hash_value);
    transparent_crc(p_1855->g_991.s7, "p_1855->g_991.s7", print_hash_value);
    transparent_crc(p_1855->g_993.x, "p_1855->g_993.x", print_hash_value);
    transparent_crc(p_1855->g_993.y, "p_1855->g_993.y", print_hash_value);
    transparent_crc(p_1855->g_994.x, "p_1855->g_994.x", print_hash_value);
    transparent_crc(p_1855->g_994.y, "p_1855->g_994.y", print_hash_value);
    transparent_crc(p_1855->g_997.s0, "p_1855->g_997.s0", print_hash_value);
    transparent_crc(p_1855->g_997.s1, "p_1855->g_997.s1", print_hash_value);
    transparent_crc(p_1855->g_997.s2, "p_1855->g_997.s2", print_hash_value);
    transparent_crc(p_1855->g_997.s3, "p_1855->g_997.s3", print_hash_value);
    transparent_crc(p_1855->g_997.s4, "p_1855->g_997.s4", print_hash_value);
    transparent_crc(p_1855->g_997.s5, "p_1855->g_997.s5", print_hash_value);
    transparent_crc(p_1855->g_997.s6, "p_1855->g_997.s6", print_hash_value);
    transparent_crc(p_1855->g_997.s7, "p_1855->g_997.s7", print_hash_value);
    transparent_crc(p_1855->g_997.s8, "p_1855->g_997.s8", print_hash_value);
    transparent_crc(p_1855->g_997.s9, "p_1855->g_997.s9", print_hash_value);
    transparent_crc(p_1855->g_997.sa, "p_1855->g_997.sa", print_hash_value);
    transparent_crc(p_1855->g_997.sb, "p_1855->g_997.sb", print_hash_value);
    transparent_crc(p_1855->g_997.sc, "p_1855->g_997.sc", print_hash_value);
    transparent_crc(p_1855->g_997.sd, "p_1855->g_997.sd", print_hash_value);
    transparent_crc(p_1855->g_997.se, "p_1855->g_997.se", print_hash_value);
    transparent_crc(p_1855->g_997.sf, "p_1855->g_997.sf", print_hash_value);
    transparent_crc(p_1855->g_1011, "p_1855->g_1011", print_hash_value);
    transparent_crc(p_1855->g_1029.s0, "p_1855->g_1029.s0", print_hash_value);
    transparent_crc(p_1855->g_1029.s1, "p_1855->g_1029.s1", print_hash_value);
    transparent_crc(p_1855->g_1029.s2, "p_1855->g_1029.s2", print_hash_value);
    transparent_crc(p_1855->g_1029.s3, "p_1855->g_1029.s3", print_hash_value);
    transparent_crc(p_1855->g_1029.s4, "p_1855->g_1029.s4", print_hash_value);
    transparent_crc(p_1855->g_1029.s5, "p_1855->g_1029.s5", print_hash_value);
    transparent_crc(p_1855->g_1029.s6, "p_1855->g_1029.s6", print_hash_value);
    transparent_crc(p_1855->g_1029.s7, "p_1855->g_1029.s7", print_hash_value);
    transparent_crc(p_1855->g_1029.s8, "p_1855->g_1029.s8", print_hash_value);
    transparent_crc(p_1855->g_1029.s9, "p_1855->g_1029.s9", print_hash_value);
    transparent_crc(p_1855->g_1029.sa, "p_1855->g_1029.sa", print_hash_value);
    transparent_crc(p_1855->g_1029.sb, "p_1855->g_1029.sb", print_hash_value);
    transparent_crc(p_1855->g_1029.sc, "p_1855->g_1029.sc", print_hash_value);
    transparent_crc(p_1855->g_1029.sd, "p_1855->g_1029.sd", print_hash_value);
    transparent_crc(p_1855->g_1029.se, "p_1855->g_1029.se", print_hash_value);
    transparent_crc(p_1855->g_1029.sf, "p_1855->g_1029.sf", print_hash_value);
    transparent_crc(p_1855->g_1133.x, "p_1855->g_1133.x", print_hash_value);
    transparent_crc(p_1855->g_1133.y, "p_1855->g_1133.y", print_hash_value);
    transparent_crc(p_1855->g_1142.x, "p_1855->g_1142.x", print_hash_value);
    transparent_crc(p_1855->g_1142.y, "p_1855->g_1142.y", print_hash_value);
    transparent_crc(p_1855->g_1142.z, "p_1855->g_1142.z", print_hash_value);
    transparent_crc(p_1855->g_1142.w, "p_1855->g_1142.w", print_hash_value);
    transparent_crc(p_1855->g_1152.s0, "p_1855->g_1152.s0", print_hash_value);
    transparent_crc(p_1855->g_1152.s1, "p_1855->g_1152.s1", print_hash_value);
    transparent_crc(p_1855->g_1152.s2, "p_1855->g_1152.s2", print_hash_value);
    transparent_crc(p_1855->g_1152.s3, "p_1855->g_1152.s3", print_hash_value);
    transparent_crc(p_1855->g_1152.s4, "p_1855->g_1152.s4", print_hash_value);
    transparent_crc(p_1855->g_1152.s5, "p_1855->g_1152.s5", print_hash_value);
    transparent_crc(p_1855->g_1152.s6, "p_1855->g_1152.s6", print_hash_value);
    transparent_crc(p_1855->g_1152.s7, "p_1855->g_1152.s7", print_hash_value);
    transparent_crc(p_1855->g_1162, "p_1855->g_1162", print_hash_value);
    transparent_crc(p_1855->g_1177.s0, "p_1855->g_1177.s0", print_hash_value);
    transparent_crc(p_1855->g_1177.s1, "p_1855->g_1177.s1", print_hash_value);
    transparent_crc(p_1855->g_1177.s2, "p_1855->g_1177.s2", print_hash_value);
    transparent_crc(p_1855->g_1177.s3, "p_1855->g_1177.s3", print_hash_value);
    transparent_crc(p_1855->g_1177.s4, "p_1855->g_1177.s4", print_hash_value);
    transparent_crc(p_1855->g_1177.s5, "p_1855->g_1177.s5", print_hash_value);
    transparent_crc(p_1855->g_1177.s6, "p_1855->g_1177.s6", print_hash_value);
    transparent_crc(p_1855->g_1177.s7, "p_1855->g_1177.s7", print_hash_value);
    transparent_crc(p_1855->g_1205, "p_1855->g_1205", print_hash_value);
    transparent_crc(p_1855->g_1248.x, "p_1855->g_1248.x", print_hash_value);
    transparent_crc(p_1855->g_1248.y, "p_1855->g_1248.y", print_hash_value);
    transparent_crc(p_1855->g_1248.z, "p_1855->g_1248.z", print_hash_value);
    transparent_crc(p_1855->g_1248.w, "p_1855->g_1248.w", print_hash_value);
    transparent_crc(p_1855->g_1259.x, "p_1855->g_1259.x", print_hash_value);
    transparent_crc(p_1855->g_1259.y, "p_1855->g_1259.y", print_hash_value);
    transparent_crc(p_1855->g_1259.z, "p_1855->g_1259.z", print_hash_value);
    transparent_crc(p_1855->g_1259.w, "p_1855->g_1259.w", print_hash_value);
    transparent_crc(p_1855->g_1271.s0, "p_1855->g_1271.s0", print_hash_value);
    transparent_crc(p_1855->g_1271.s1, "p_1855->g_1271.s1", print_hash_value);
    transparent_crc(p_1855->g_1271.s2, "p_1855->g_1271.s2", print_hash_value);
    transparent_crc(p_1855->g_1271.s3, "p_1855->g_1271.s3", print_hash_value);
    transparent_crc(p_1855->g_1271.s4, "p_1855->g_1271.s4", print_hash_value);
    transparent_crc(p_1855->g_1271.s5, "p_1855->g_1271.s5", print_hash_value);
    transparent_crc(p_1855->g_1271.s6, "p_1855->g_1271.s6", print_hash_value);
    transparent_crc(p_1855->g_1271.s7, "p_1855->g_1271.s7", print_hash_value);
    transparent_crc(p_1855->g_1271.s8, "p_1855->g_1271.s8", print_hash_value);
    transparent_crc(p_1855->g_1271.s9, "p_1855->g_1271.s9", print_hash_value);
    transparent_crc(p_1855->g_1271.sa, "p_1855->g_1271.sa", print_hash_value);
    transparent_crc(p_1855->g_1271.sb, "p_1855->g_1271.sb", print_hash_value);
    transparent_crc(p_1855->g_1271.sc, "p_1855->g_1271.sc", print_hash_value);
    transparent_crc(p_1855->g_1271.sd, "p_1855->g_1271.sd", print_hash_value);
    transparent_crc(p_1855->g_1271.se, "p_1855->g_1271.se", print_hash_value);
    transparent_crc(p_1855->g_1271.sf, "p_1855->g_1271.sf", print_hash_value);
    transparent_crc(p_1855->g_1286, "p_1855->g_1286", print_hash_value);
    transparent_crc(p_1855->g_1293.s0, "p_1855->g_1293.s0", print_hash_value);
    transparent_crc(p_1855->g_1293.s1, "p_1855->g_1293.s1", print_hash_value);
    transparent_crc(p_1855->g_1293.s2, "p_1855->g_1293.s2", print_hash_value);
    transparent_crc(p_1855->g_1293.s3, "p_1855->g_1293.s3", print_hash_value);
    transparent_crc(p_1855->g_1293.s4, "p_1855->g_1293.s4", print_hash_value);
    transparent_crc(p_1855->g_1293.s5, "p_1855->g_1293.s5", print_hash_value);
    transparent_crc(p_1855->g_1293.s6, "p_1855->g_1293.s6", print_hash_value);
    transparent_crc(p_1855->g_1293.s7, "p_1855->g_1293.s7", print_hash_value);
    transparent_crc(p_1855->g_1293.s8, "p_1855->g_1293.s8", print_hash_value);
    transparent_crc(p_1855->g_1293.s9, "p_1855->g_1293.s9", print_hash_value);
    transparent_crc(p_1855->g_1293.sa, "p_1855->g_1293.sa", print_hash_value);
    transparent_crc(p_1855->g_1293.sb, "p_1855->g_1293.sb", print_hash_value);
    transparent_crc(p_1855->g_1293.sc, "p_1855->g_1293.sc", print_hash_value);
    transparent_crc(p_1855->g_1293.sd, "p_1855->g_1293.sd", print_hash_value);
    transparent_crc(p_1855->g_1293.se, "p_1855->g_1293.se", print_hash_value);
    transparent_crc(p_1855->g_1293.sf, "p_1855->g_1293.sf", print_hash_value);
    transparent_crc(p_1855->g_1320.f0, "p_1855->g_1320.f0", print_hash_value);
    transparent_crc(p_1855->g_1345.s0, "p_1855->g_1345.s0", print_hash_value);
    transparent_crc(p_1855->g_1345.s1, "p_1855->g_1345.s1", print_hash_value);
    transparent_crc(p_1855->g_1345.s2, "p_1855->g_1345.s2", print_hash_value);
    transparent_crc(p_1855->g_1345.s3, "p_1855->g_1345.s3", print_hash_value);
    transparent_crc(p_1855->g_1345.s4, "p_1855->g_1345.s4", print_hash_value);
    transparent_crc(p_1855->g_1345.s5, "p_1855->g_1345.s5", print_hash_value);
    transparent_crc(p_1855->g_1345.s6, "p_1855->g_1345.s6", print_hash_value);
    transparent_crc(p_1855->g_1345.s7, "p_1855->g_1345.s7", print_hash_value);
    transparent_crc(p_1855->g_1350.s0, "p_1855->g_1350.s0", print_hash_value);
    transparent_crc(p_1855->g_1350.s1, "p_1855->g_1350.s1", print_hash_value);
    transparent_crc(p_1855->g_1350.s2, "p_1855->g_1350.s2", print_hash_value);
    transparent_crc(p_1855->g_1350.s3, "p_1855->g_1350.s3", print_hash_value);
    transparent_crc(p_1855->g_1350.s4, "p_1855->g_1350.s4", print_hash_value);
    transparent_crc(p_1855->g_1350.s5, "p_1855->g_1350.s5", print_hash_value);
    transparent_crc(p_1855->g_1350.s6, "p_1855->g_1350.s6", print_hash_value);
    transparent_crc(p_1855->g_1350.s7, "p_1855->g_1350.s7", print_hash_value);
    transparent_crc(p_1855->g_1378.x, "p_1855->g_1378.x", print_hash_value);
    transparent_crc(p_1855->g_1378.y, "p_1855->g_1378.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1855->g_1390[i][j][k], "p_1855->g_1390[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1855->g_1391.x, "p_1855->g_1391.x", print_hash_value);
    transparent_crc(p_1855->g_1391.y, "p_1855->g_1391.y", print_hash_value);
    transparent_crc(p_1855->g_1397.s0, "p_1855->g_1397.s0", print_hash_value);
    transparent_crc(p_1855->g_1397.s1, "p_1855->g_1397.s1", print_hash_value);
    transparent_crc(p_1855->g_1397.s2, "p_1855->g_1397.s2", print_hash_value);
    transparent_crc(p_1855->g_1397.s3, "p_1855->g_1397.s3", print_hash_value);
    transparent_crc(p_1855->g_1397.s4, "p_1855->g_1397.s4", print_hash_value);
    transparent_crc(p_1855->g_1397.s5, "p_1855->g_1397.s5", print_hash_value);
    transparent_crc(p_1855->g_1397.s6, "p_1855->g_1397.s6", print_hash_value);
    transparent_crc(p_1855->g_1397.s7, "p_1855->g_1397.s7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1855->g_1400[i][j][k].f0, "p_1855->g_1400[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1855->g_1409.x, "p_1855->g_1409.x", print_hash_value);
    transparent_crc(p_1855->g_1409.y, "p_1855->g_1409.y", print_hash_value);
    transparent_crc(p_1855->g_1409.z, "p_1855->g_1409.z", print_hash_value);
    transparent_crc(p_1855->g_1409.w, "p_1855->g_1409.w", print_hash_value);
    transparent_crc(p_1855->g_1430.f0, "p_1855->g_1430.f0", print_hash_value);
    transparent_crc(p_1855->g_1436.s0, "p_1855->g_1436.s0", print_hash_value);
    transparent_crc(p_1855->g_1436.s1, "p_1855->g_1436.s1", print_hash_value);
    transparent_crc(p_1855->g_1436.s2, "p_1855->g_1436.s2", print_hash_value);
    transparent_crc(p_1855->g_1436.s3, "p_1855->g_1436.s3", print_hash_value);
    transparent_crc(p_1855->g_1436.s4, "p_1855->g_1436.s4", print_hash_value);
    transparent_crc(p_1855->g_1436.s5, "p_1855->g_1436.s5", print_hash_value);
    transparent_crc(p_1855->g_1436.s6, "p_1855->g_1436.s6", print_hash_value);
    transparent_crc(p_1855->g_1436.s7, "p_1855->g_1436.s7", print_hash_value);
    transparent_crc(p_1855->g_1457.x, "p_1855->g_1457.x", print_hash_value);
    transparent_crc(p_1855->g_1457.y, "p_1855->g_1457.y", print_hash_value);
    transparent_crc(p_1855->g_1457.z, "p_1855->g_1457.z", print_hash_value);
    transparent_crc(p_1855->g_1457.w, "p_1855->g_1457.w", print_hash_value);
    transparent_crc(p_1855->g_1475.f0, "p_1855->g_1475.f0", print_hash_value);
    transparent_crc(p_1855->g_1506.s0, "p_1855->g_1506.s0", print_hash_value);
    transparent_crc(p_1855->g_1506.s1, "p_1855->g_1506.s1", print_hash_value);
    transparent_crc(p_1855->g_1506.s2, "p_1855->g_1506.s2", print_hash_value);
    transparent_crc(p_1855->g_1506.s3, "p_1855->g_1506.s3", print_hash_value);
    transparent_crc(p_1855->g_1506.s4, "p_1855->g_1506.s4", print_hash_value);
    transparent_crc(p_1855->g_1506.s5, "p_1855->g_1506.s5", print_hash_value);
    transparent_crc(p_1855->g_1506.s6, "p_1855->g_1506.s6", print_hash_value);
    transparent_crc(p_1855->g_1506.s7, "p_1855->g_1506.s7", print_hash_value);
    transparent_crc(p_1855->g_1562.x, "p_1855->g_1562.x", print_hash_value);
    transparent_crc(p_1855->g_1562.y, "p_1855->g_1562.y", print_hash_value);
    transparent_crc(p_1855->g_1562.z, "p_1855->g_1562.z", print_hash_value);
    transparent_crc(p_1855->g_1562.w, "p_1855->g_1562.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1855->g_1569[i].f0, "p_1855->g_1569[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1855->g_1587[i], "p_1855->g_1587[i]", print_hash_value);

    }
    transparent_crc(p_1855->g_1589, "p_1855->g_1589", print_hash_value);
    transparent_crc(p_1855->g_1655.x, "p_1855->g_1655.x", print_hash_value);
    transparent_crc(p_1855->g_1655.y, "p_1855->g_1655.y", print_hash_value);
    transparent_crc(p_1855->g_1660.x, "p_1855->g_1660.x", print_hash_value);
    transparent_crc(p_1855->g_1660.y, "p_1855->g_1660.y", print_hash_value);
    transparent_crc(p_1855->g_1660.z, "p_1855->g_1660.z", print_hash_value);
    transparent_crc(p_1855->g_1660.w, "p_1855->g_1660.w", print_hash_value);
    transparent_crc(p_1855->g_1671.x, "p_1855->g_1671.x", print_hash_value);
    transparent_crc(p_1855->g_1671.y, "p_1855->g_1671.y", print_hash_value);
    transparent_crc(p_1855->g_1692.f0, "p_1855->g_1692.f0", print_hash_value);
    transparent_crc(p_1855->g_1697.s0, "p_1855->g_1697.s0", print_hash_value);
    transparent_crc(p_1855->g_1697.s1, "p_1855->g_1697.s1", print_hash_value);
    transparent_crc(p_1855->g_1697.s2, "p_1855->g_1697.s2", print_hash_value);
    transparent_crc(p_1855->g_1697.s3, "p_1855->g_1697.s3", print_hash_value);
    transparent_crc(p_1855->g_1697.s4, "p_1855->g_1697.s4", print_hash_value);
    transparent_crc(p_1855->g_1697.s5, "p_1855->g_1697.s5", print_hash_value);
    transparent_crc(p_1855->g_1697.s6, "p_1855->g_1697.s6", print_hash_value);
    transparent_crc(p_1855->g_1697.s7, "p_1855->g_1697.s7", print_hash_value);
    transparent_crc(p_1855->g_1750.s0, "p_1855->g_1750.s0", print_hash_value);
    transparent_crc(p_1855->g_1750.s1, "p_1855->g_1750.s1", print_hash_value);
    transparent_crc(p_1855->g_1750.s2, "p_1855->g_1750.s2", print_hash_value);
    transparent_crc(p_1855->g_1750.s3, "p_1855->g_1750.s3", print_hash_value);
    transparent_crc(p_1855->g_1750.s4, "p_1855->g_1750.s4", print_hash_value);
    transparent_crc(p_1855->g_1750.s5, "p_1855->g_1750.s5", print_hash_value);
    transparent_crc(p_1855->g_1750.s6, "p_1855->g_1750.s6", print_hash_value);
    transparent_crc(p_1855->g_1750.s7, "p_1855->g_1750.s7", print_hash_value);
    transparent_crc(p_1855->v_collective, "p_1855->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_1855->g_special_values[i + 57 * get_linear_group_id()], "p_1855->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_1855->l_special_values[i], "p_1855->l_special_values[i]", print_hash_value);
    transparent_crc(p_1855->l_comm_values[get_linear_local_id()], "p_1855->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1855->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_1855->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
