// --atomics 36 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,85,1 -l 75,1,1
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

__constant uint32_t permutations[10][75] = {
{19,28,0,54,23,74,41,68,22,55,49,73,35,33,51,34,9,71,39,38,21,4,47,42,31,52,40,29,63,61,5,1,72,12,48,7,67,36,11,6,17,58,30,16,69,62,65,64,57,59,2,26,66,45,53,13,24,10,14,50,18,44,15,3,37,43,56,46,70,60,20,8,32,25,27}, // permutation 0
{3,14,0,55,47,45,60,56,17,50,51,28,68,6,61,73,59,66,26,41,10,37,63,33,11,35,69,5,48,8,34,39,4,12,1,2,19,23,27,57,30,70,44,43,40,71,24,22,20,72,21,64,29,18,49,74,52,32,54,53,7,15,16,65,36,25,67,38,62,46,31,42,58,9,13}, // permutation 1
{16,17,67,21,3,71,55,0,40,20,53,33,64,12,28,11,13,48,61,65,46,66,34,10,22,70,63,25,74,14,37,15,69,57,36,45,6,29,9,35,68,24,39,49,1,60,58,50,19,73,23,5,38,54,32,2,56,4,42,72,47,26,62,18,52,7,59,41,51,43,8,31,30,44,27}, // permutation 2
{39,30,26,59,32,71,15,55,0,41,66,37,61,48,12,52,7,58,70,2,63,44,53,51,6,40,21,50,24,64,20,54,10,34,14,65,8,1,43,11,38,42,9,16,13,73,35,72,17,23,18,46,45,60,47,25,74,57,68,4,69,31,19,5,28,36,62,29,56,22,49,67,27,3,33}, // permutation 3
{12,54,64,3,61,11,8,30,60,74,23,24,22,69,10,43,51,14,37,50,56,68,18,13,53,45,1,44,66,70,72,58,20,31,39,34,4,27,63,59,46,5,6,15,35,16,47,40,21,52,65,48,38,67,0,25,57,32,73,41,19,42,62,9,28,29,7,49,2,36,33,17,26,71,55}, // permutation 4
{3,42,55,71,51,22,41,2,5,45,64,31,47,69,4,50,67,38,14,24,35,11,0,68,23,8,49,29,39,59,16,70,19,21,53,40,12,36,74,52,54,25,63,9,13,17,37,15,18,6,72,48,58,30,33,34,26,73,60,66,32,1,61,56,46,7,57,20,62,65,28,44,43,10,27}, // permutation 5
{71,4,10,44,33,63,17,12,68,27,19,38,5,31,13,51,7,58,30,69,50,21,45,14,42,28,24,47,39,62,54,49,53,6,9,70,52,3,15,8,11,29,55,67,40,72,20,0,2,46,60,66,18,65,74,1,48,37,73,43,41,59,34,56,35,23,22,36,64,57,25,61,16,32,26}, // permutation 6
{2,20,17,53,72,5,43,29,19,13,37,56,28,39,24,27,44,10,45,67,9,8,35,23,12,30,48,69,57,64,74,7,11,68,15,61,22,18,38,65,41,40,54,71,60,55,73,6,26,25,21,32,52,46,62,34,36,66,63,1,49,58,33,50,14,31,3,47,0,70,59,16,42,4,51}, // permutation 7
{37,58,17,7,54,63,21,74,67,69,6,18,34,38,5,70,48,20,40,72,16,25,23,32,36,1,50,66,39,73,26,24,30,45,57,9,65,10,64,46,42,27,55,22,0,41,35,2,60,43,49,44,71,15,14,28,51,31,4,68,19,59,8,33,13,56,61,62,12,11,47,53,52,29,3}, // permutation 8
{20,0,27,24,72,74,64,61,51,50,12,67,59,41,19,63,39,73,6,10,9,7,43,26,71,54,4,62,49,17,66,23,58,52,8,65,38,32,1,13,22,25,69,44,5,56,33,3,16,21,14,35,68,31,28,36,2,34,18,53,45,57,11,46,29,55,40,42,70,37,47,60,48,15,30} // permutation 9
};

// Seed: 2081646184

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
};

struct S1 {
   uint32_t  f0;
   volatile uint16_t  f1;
   uint32_t  f2;
   volatile int32_t  f3;
   int32_t  f4;
   int32_t  f5;
};

struct S2 {
   int32_t  f0;
   volatile struct S0  f1;
   volatile int32_t  f2;
   struct S0  f3;
   int64_t  f4;
   volatile struct S1  f5;
};

struct S3 {
   uint32_t  f0;
   volatile uint32_t  f1;
   volatile int32_t  f2;
   int64_t  f3;
   int32_t  f4;
   volatile uint64_t  f5;
   volatile int64_t  f6;
};

struct S4 {
   uint8_t  f0;
   volatile int64_t  f1;
   volatile uint32_t  f2;
};

union U5 {
   int8_t * volatile  f0;
   volatile struct S3  f1;
};

struct S6 {
    int32_t g_300;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S6 * p_301);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_301->g_300 p_301->l_comm_values
 * writes: p_301->g_300
 */
int32_t  func_1(struct S6 * p_301)
{ /* block id: 4 */
    int32_t *l_299 = &p_301->g_300;
    if ((atomic_inc(&p_301->g_atomic_input[36 * get_linear_group_id() + 10]) == 3))
    { /* block id: 6 */
        uint64_t l_2 = 0x96B779C63C407858L;
        uint32_t l_5 = 0x5F07C70AL;
        VECTOR(int32_t, 2) l_6 = (VECTOR(int32_t, 2))(0x373A4C92L, (-1L));
        int32_t l_7 = 0x61BE360DL;
        uint32_t l_8 = 4294967288UL;
        VECTOR(int8_t, 2) l_9 = (VECTOR(int8_t, 2))(0x62L, 0x2EL);
        int32_t l_10 = 6L;
        VECTOR(int8_t, 2) l_11 = (VECTOR(int8_t, 2))(0x08L, 0x35L);
        VECTOR(int8_t, 4) l_12 = (VECTOR(int8_t, 4))(0x20L, (VECTOR(int8_t, 2))(0x20L, (-1L)), (-1L));
        uint8_t l_13 = 0xD4L;
        uint16_t l_14 = 0UL;
        VECTOR(int8_t, 8) l_15 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
        VECTOR(int8_t, 4) l_16 = (VECTOR(int8_t, 4))(0x14L, (VECTOR(int8_t, 2))(0x14L, 0x32L), 0x32L);
        uint64_t l_17 = 0x63964E48C0C84A4EL;
        VECTOR(uint16_t, 8) l_18 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x132DL), 0x132DL), 0x132DL, 65528UL, 0x132DL);
        VECTOR(int8_t, 2) l_19 = (VECTOR(int8_t, 2))((-1L), 0x07L);
        VECTOR(int8_t, 8) l_20 = (VECTOR(int8_t, 8))(0x4CL, (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x34L), 0x34L), 0x34L, 0x4CL, 0x34L);
        VECTOR(int8_t, 8) l_21 = (VECTOR(int8_t, 8))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0L), 0L), 0L, 0x3CL, 0L);
        uint32_t l_22 = 4294967287UL;
        int32_t l_23 = 0x2065BBD9L;
        int64_t l_24 = 0x11A13C53D1739C36L;
        int32_t l_25[2][10] = {{0L,6L,6L,0L,0L,6L,6L,0L,0L,6L},{0L,6L,6L,0L,0L,6L,6L,0L,0L,6L}};
        VECTOR(uint32_t, 4) l_26 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xE2CD2A19L), 0xE2CD2A19L);
        int8_t l_27[8] = {0x66L,0x66L,0x66L,0x66L,0x66L,0x66L,0x66L,0x66L};
        VECTOR(int32_t, 2) l_196 = (VECTOR(int32_t, 2))((-1L), 0L);
        uint32_t l_197 = 0UL;
        uint32_t l_198 = 0x4D2FEC2DL;
        VECTOR(int32_t, 4) l_199 = (VECTOR(int32_t, 4))(0x52544692L, (VECTOR(int32_t, 2))(0x52544692L, 0x1CE934E2L), 0x1CE934E2L);
        uint32_t l_200 = 4294967295UL;
        uint32_t l_201 = 6UL;
        uint64_t l_202 = 0UL;
        uint32_t l_203 = 0x0F2A8A3EL;
        VECTOR(int32_t, 16) l_204 = (VECTOR(int32_t, 16))(0x3C560E69L, (VECTOR(int32_t, 4))(0x3C560E69L, (VECTOR(int32_t, 2))(0x3C560E69L, (-1L)), (-1L)), (-1L), 0x3C560E69L, (-1L), (VECTOR(int32_t, 2))(0x3C560E69L, (-1L)), (VECTOR(int32_t, 2))(0x3C560E69L, (-1L)), 0x3C560E69L, (-1L), 0x3C560E69L, (-1L));
        uint32_t l_205[6];
        uint32_t l_206 = 4294967293UL;
        VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(0L, 0L);
        int64_t l_208 = 0x4320A9F108549FEFL;
        VECTOR(uint8_t, 4) l_297 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 6UL), 6UL);
        int16_t l_298 = 0x4428L;
        int i, j;
        for (i = 0; i < 6; i++)
            l_205[i] = 9UL;
        --l_2;
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x090C5440L, l_5, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_6.yyxyyyxyyyxyxyxy)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_7, (-1L), (-1L), 1L, l_8, 0x03L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(l_9.xxyyxxyyyyyxxxxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(l_10, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_11.yyxx)))), 5L, 0x33L, 9L)).s54, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-8L), (-1L))), ((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(0x61L, 0x3EL)).xyxx))).wywzzwzw)).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_12.zwzz)).wwywwwxw, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))((l_14 |= l_13), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x49L, 0x14L)), ((VECTOR(int8_t, 2))(l_15.s22))))), 0x70L, 1L)).xwwyzywz)).s4, (-1L), ((VECTOR(int8_t, 2))(0x52L, (-9L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(l_16.yzzy)), (int8_t)l_17))))), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x75L)).yyxxyyxyyxxyyxyx)).sa447, (int8_t)(((VECTOR(uint16_t, 4))(l_18.s4132)).y , ((VECTOR(int8_t, 8))((-6L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_19.yyyy)).zwyyywzz)).s00)).xxxx)))), ((VECTOR(int8_t, 2))(l_20.s11)), 0x65L)).s1)))), ((VECTOR(int8_t, 2))(l_21.s61)), 0L)).sdc0a, ((VECTOR(int8_t, 2))(0L, 9L)).xxxy, ((VECTOR(int8_t, 16))(l_22, 0x67L, l_23, 0x29L, ((VECTOR(int8_t, 4))(0x0CL)), ((VECTOR(int8_t, 8))(1L)))).scc99))).xwxxwxyx, ((VECTOR(int8_t, 8))((-1L)))))))).odd, ((VECTOR(int8_t, 4))(0x64L))))).wyzxwzyz, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))(0L))))), ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))(0x3DL))))).s7123673305501421)).sa0, ((VECTOR(int8_t, 2))(0x57L)), ((VECTOR(int8_t, 2))(0x1FL))))), 0x4FL)), 0x02L, 2L)).s0020673261506662, ((VECTOR(int8_t, 16))((-3L)))))).s56, ((VECTOR(int8_t, 2))(0x27L))))).yyxyyyyyxxxyxyyx))))).s4a6b)).lo)).odd, l_24, ((VECTOR(int8_t, 2))((-8L))), ((VECTOR(int8_t, 2))(0x27L)), 0x7BL, 0x4FL)), 0x3CL, 0L)).sb1)), 0x68L, 0x4FL)), ((VECTOR(uint8_t, 4))(0x24L))))).wyywywzx, ((VECTOR(uint16_t, 8))(0xA070L))))).s7043746664055146))).odd)), l_25[1][0], ((VECTOR(int32_t, 4))((-1L))), (-4L))).s5, 0x48A60B10L, l_26.x, l_27[3], 0x72784030L, 0x6420880FL, 6L, ((VECTOR(int32_t, 2))(0x5A07F58EL)), 0x26DE3FE2L, (-1L), 0L, 0x09175669L, 0x10DD0679L, 8L, 0x22B5195EL)).s1)
        { /* block id: 9 */
            uint32_t l_28[1];
            int i;
            for (i = 0; i < 1; i++)
                l_28[i] = 4294967286UL;
            l_25[1][0] |= l_28[0];
        }
        else
        { /* block id: 11 */
            int32_t l_29 = 0x3D8B2F93L;
            uint16_t l_30 = 65530UL;
            int32_t l_31 = 1L;
            l_29 ^= (-1L);
            if ((l_30 , (l_6.y |= l_31)))
            { /* block id: 14 */
                int32_t l_32 = 0x7E6D0914L;
                uint8_t l_33[8][7][4] = {{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}},{{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL},{251UL,1UL,0x55L,7UL}}};
                int i, j, k;
                l_25[1][0] |= l_32;
                if (l_33[7][6][1])
                { /* block id: 16 */
                    uint32_t l_34 = 0x8C15133AL;
                    uint32_t l_37 = 0UL;
                    VECTOR(int32_t, 2) l_53 = (VECTOR(int32_t, 2))((-1L), (-7L));
                    int32_t *l_71 = (void*)0;
                    int32_t *l_72 = (void*)0;
                    int i;
                    l_34--;
                    if ((l_7 = l_37))
                    { /* block id: 19 */
                        int64_t l_38[5][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
                        int16_t l_39 = 0x0ADFL;
                        uint16_t l_40 = 0UL;
                        uint32_t l_43 = 0UL;
                        int i, j;
                        l_40++;
                        l_25[1][6] = (l_23 = l_43);
                    }
                    else
                    { /* block id: 23 */
                        union U5 l_45 = {0};/* VOLATILE GLOBAL l_45 */
                        union U5 *l_44 = &l_45;
                        int64_t l_46 = 1L;
                        int64_t l_47 = 0L;
                        int64_t l_48 = 0L;
                        uint16_t l_49 = 65535UL;
                        int32_t l_52 = 0L;
                        l_44 = l_44;
                        ++l_49;
                        l_10 = l_52;
                    }
                    if (((VECTOR(int32_t, 2))(l_53.yy)).lo)
                    { /* block id: 28 */
                        l_7 ^= ((VECTOR(int32_t, 2))(0L, 7L)).even;
                    }
                    else
                    { /* block id: 30 */
                        int32_t l_54 = (-1L);
                        uint32_t l_55 = 0x577CD183L;
                        struct S1 *l_58 = (void*)0;
                        struct S1 l_60 = {0x0EB00D6BL,0x4B6FL,0xE529FE0DL,1L,0x16A8AB26L,0x1336AE27L};/* VOLATILE GLOBAL l_60 */
                        struct S1 *l_59 = &l_60;
                        int32_t l_61 = 0x5CBA93E3L;
                        uint32_t l_62[7];
                        int32_t l_63[10];
                        struct S2 l_64 = {0x78A64327L,{0x2FL},0x13D487E5L,{0UL},0x5121EC5D866FAEDDL,{4294967295UL,0UL,0x153C6A96L,-1L,1L,0x688EED36L}};/* VOLATILE GLOBAL l_64 */
                        struct S3 *l_65 = (void*)0;
                        struct S3 l_67[2][7][2] = {{{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}}},{{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}},{{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L},{0x7943A2B2L,0xC0CBE003L,1L,0x71CAE4519CD97943L,7L,0x6EEABB79EB048EBAL,-1L}}}};
                        struct S3 *l_66 = &l_67[1][6][1];
                        int16_t l_68 = 0x4E7FL;
                        struct S1 *l_69[1];
                        struct S1 *l_70 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_62[i] = 1UL;
                        for (i = 0; i < 10; i++)
                            l_63[i] = 0x1A53783AL;
                        for (i = 0; i < 1; i++)
                            l_69[i] = &l_60;
                        l_55++;
                        l_59 = l_58;
                        l_66 = (l_65 = ((l_61 , (l_62[2] , ((l_63[6] , l_64) , 0xE9E3L))) , (void*)0));
                        l_70 = ((l_68 , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 5L)), 0x5C81AE9100010583L, (-1L))))))).zxzxywxw)).s2455326266352663)).sb) , l_69[0]);
                    }
                    l_72 = l_71;
                }
                else
                { /* block id: 38 */
                    uint64_t l_73 = 0xBFA83A99FBD2CEF0L;
                    int32_t l_85[4];
                    VECTOR(int8_t, 16) l_86 = (VECTOR(int8_t, 16))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x35L), 0x35L), 0x35L, 5L, 0x35L, (VECTOR(int8_t, 2))(5L, 0x35L), (VECTOR(int8_t, 2))(5L, 0x35L), 5L, 0x35L, 5L, 0x35L);
                    VECTOR(int8_t, 16) l_87 = (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int8_t, 2))((-8L), 0L), (VECTOR(int8_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L);
                    VECTOR(int8_t, 4) l_88 = (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, (-1L)), (-1L));
                    struct S0 l_89[4] = {{1UL},{1UL},{1UL},{1UL}};
                    struct S4 l_90 = {0xCBL,0x07BCC87407B9BD9CL,0x82C0EE4DL};/* VOLATILE GLOBAL l_90 */
                    VECTOR(int8_t, 2) l_91 = (VECTOR(int8_t, 2))(0x25L, (-9L));
                    VECTOR(int8_t, 8) l_92 = (VECTOR(int8_t, 8))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 0x5AL), 0x5AL), 0x5AL, 0x32L, 0x5AL);
                    VECTOR(int8_t, 2) l_93 = (VECTOR(int8_t, 2))(0x6AL, 0L);
                    int8_t l_94 = 7L;
                    int16_t l_95 = 0x3CCEL;
                    VECTOR(int8_t, 4) l_96 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-10L)), (-10L));
                    uint16_t l_97 = 65535UL;
                    VECTOR(int8_t, 16) l_98 = (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x45L), 0x45L), 0x45L, 0x1AL, 0x45L, (VECTOR(int8_t, 2))(0x1AL, 0x45L), (VECTOR(int8_t, 2))(0x1AL, 0x45L), 0x1AL, 0x45L, 0x1AL, 0x45L);
                    VECTOR(int8_t, 16) l_99 = (VECTOR(int8_t, 16))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 0x4DL), 0x4DL), 0x4DL, 0x05L, 0x4DL, (VECTOR(int8_t, 2))(0x05L, 0x4DL), (VECTOR(int8_t, 2))(0x05L, 0x4DL), 0x05L, 0x4DL, 0x05L, 0x4DL);
                    VECTOR(int8_t, 2) l_100 = (VECTOR(int8_t, 2))(0x36L, (-1L));
                    VECTOR(int8_t, 16) l_101 = (VECTOR(int8_t, 16))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x3BL), 0x3BL), 0x3BL, 0x30L, 0x3BL, (VECTOR(int8_t, 2))(0x30L, 0x3BL), (VECTOR(int8_t, 2))(0x30L, 0x3BL), 0x30L, 0x3BL, 0x30L, 0x3BL);
                    int16_t l_102 = 1L;
                    int32_t l_103[5];
                    int8_t l_104 = 0x47L;
                    uint32_t l_105 = 0UL;
                    int32_t l_106 = 1L;
                    struct S3 l_108 = {0xE293B496L,0UL,1L,0x496808D468FBE2ECL,0x4F0A1780L,0x233C0C79DF27BCF0L,-1L};/* VOLATILE GLOBAL l_108 */
                    struct S3 *l_107[5];
                    struct S3 *l_109 = &l_108;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_85[i] = 2L;
                    for (i = 0; i < 5; i++)
                        l_103[i] = 0x51952070L;
                    for (i = 0; i < 5; i++)
                        l_107[i] = &l_108;
                    if (l_73)
                    { /* block id: 39 */
                        uint64_t l_74[10] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
                        int32_t l_76 = 0x592CA975L;
                        int32_t *l_75 = &l_76;
                        int32_t *l_77 = (void*)0;
                        int32_t *l_78 = &l_76;
                        int32_t *l_79 = &l_76;
                        int32_t *l_80 = &l_76;
                        VECTOR(int32_t, 8) l_81 = (VECTOR(int32_t, 8))(0x42E7D5C8L, (VECTOR(int32_t, 4))(0x42E7D5C8L, (VECTOR(int32_t, 2))(0x42E7D5C8L, 0L), 0L), 0L, 0x42E7D5C8L, 0L);
                        int i;
                        l_7 = l_74[7];
                        l_78 = (l_77 = l_75);
                        l_80 = l_79;
                        l_25[1][0] |= ((VECTOR(int32_t, 16))(l_81.s4754251454022154)).sc;
                    }
                    else
                    { /* block id: 45 */
                        uint32_t l_82 = 0x9ADA1A68L;
                        int32_t l_84 = 0x31C82E66L;
                        int32_t *l_83 = &l_84;
                        l_83 = (l_82 , (void*)0);
                    }
                    l_109 = (l_85[3] , (((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(l_86.sa5bbf8f4)).s2507726026127535, ((VECTOR(int8_t, 8))(l_87.s033e3335)).s7032374674750305, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_88.xw)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((l_89[1] , l_90) , 0x10L), 0x1DL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_91.yxxxyyyy)).s67)))), ((VECTOR(int8_t, 4))(l_92.s2424)).x, ((VECTOR(int8_t, 2))(l_93.xx)), 0L)).s01)).yxyyyyyx)).s5477561623265703, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(l_94, 0x00L, (-7L), (-1L), (l_20.s7 = (l_95 , ((VECTOR(int8_t, 4))(l_96.ywyy)).w)), 0x25L, l_97, ((VECTOR(int8_t, 8))(l_98.sf5f0b503)), 0x40L)).s0aba, ((VECTOR(int8_t, 2))(l_99.s16)).xxyy, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_100.xxyyyxxxyxxyxyyy)).even)).hi, ((VECTOR(int8_t, 8))(l_101.sa691a814)).even, ((VECTOR(int8_t, 2))(0L, (-9L))).xyxx)))))).wzywywxwzxyxyyxx))).even)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_102, (l_103[0] , l_104), ((VECTOR(int8_t, 8))(0x15L)), 0L, l_105, ((VECTOR(int8_t, 2))(0x16L)), 1L, 1L)).sa960)), (-1L), 0x15L))))).s20a1, ((VECTOR(int8_t, 4))(0x46L))))).w, 1UL, 0xAEL, FAKE_DIVERGE(p_301->local_1_offset, get_local_id(1), 10), l_106, ((VECTOR(uint8_t, 2))(253UL)), 0x6BL, ((VECTOR(uint8_t, 4))(0xB8L)), GROUP_DIVERGE(0, 1), 0x16L, 0x91L)))).even, ((VECTOR(uint8_t, 8))(0x90L)), ((VECTOR(uint8_t, 8))(1UL))))).s6 , l_107[3]));
                }
                for (l_33[5][3][3] = 3; (l_33[5][3][3] <= 41); l_33[5][3][3] = safe_add_func_int8_t_s_s(l_33[5][3][3], 1))
                { /* block id: 53 */
                    int32_t l_112 = 0x78BC2CC7L;
                    int8_t l_122 = 1L;
                    int32_t l_129 = 0x1EC935B3L;
                    for (l_112 = 0; (l_112 == 1); ++l_112)
                    { /* block id: 56 */
                        uint8_t l_115[1];
                        union U5 l_117 = {0};/* VOLATILE GLOBAL l_117 */
                        union U5 *l_116 = &l_117;
                        union U5 *l_118 = &l_117;
                        uint64_t l_119 = 18446744073709551615UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_115[i] = 255UL;
                        l_115[0] = 5L;
                        l_118 = l_116;
                        --l_119;
                    }
                    l_122 ^= 0x5434852DL;
                    for (l_122 = 0; (l_122 >= 24); ++l_122)
                    { /* block id: 64 */
                        struct S4 l_125 = {0xECL,0x29ADD83B3E919F61L,0UL};/* VOLATILE GLOBAL l_125 */
                        struct S4 l_126 = {3UL,0x65D540DA225B3849L,1UL};/* VOLATILE GLOBAL l_126 */
                        int32_t l_128[3];
                        int32_t *l_127 = &l_128[2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_128[i] = (-1L);
                        l_127 = ((l_125 , l_126) , l_127);
                    }
                    if (l_129)
                    { /* block id: 67 */
                        uint32_t l_130[7] = {0x2CAAE911L,0x2CAAE911L,0x2CAAE911L,0x2CAAE911L,0x2CAAE911L,0x2CAAE911L,0x2CAAE911L};
                        int i;
                        l_130[2]--;
                    }
                    else
                    { /* block id: 69 */
                        struct S3 l_133 = {1UL,0x56B58E44L,0L,0x0DC0C5F0CBEB70EFL,0x0CC2756EL,1UL,0x5D7D14D15A417533L};/* VOLATILE GLOBAL l_133 */
                        struct S3 l_134 = {4294967295UL,0x21BBF2BBL,0x11FC20C0L,0x13E44FBD2D9BE9A1L,0x12858AB2L,18446744073709551607UL,7L};/* VOLATILE GLOBAL l_134 */
                        uint16_t l_135 = 0x4EA9L;
                        uint8_t l_136[1];
                        struct S3 l_137 = {0x21BD9B32L,4294967293UL,7L,0L,4L,0x02D27C78632126A5L,1L};/* VOLATILE GLOBAL l_137 */
                        struct S1 *l_139 = (void*)0;
                        struct S1 **l_138 = &l_139;
                        struct S1 **l_140 = &l_139;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_136[i] = 0UL;
                        l_23 = (l_25[0][1] = 0x3393D079L);
                        l_140 = (((((l_133 , l_134) , l_135) , (l_29 = (-2L))) , (l_136[0] , l_137)) , l_138);
                    }
                }
            }
            else
            { /* block id: 76 */
                VECTOR(int32_t, 8) l_141 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x64E493BEL), 0x64E493BEL), 0x64E493BEL, 0L, 0x64E493BEL);
                struct S2 *l_195 = (void*)0;
                int i;
                if ((l_25[1][0] ^= ((VECTOR(int32_t, 8))(l_141.s05365475)).s5))
                { /* block id: 78 */
                    uint16_t l_142 = 1UL;
                    if (l_142)
                    { /* block id: 79 */
                        uint8_t l_143 = 0x7CL;
                        struct S1 **l_146 = (void*)0;
                        struct S1 l_149 = {0x030061F0L,0x6C89L,4294967295UL,4L,0x0A57D7B1L,1L};/* VOLATILE GLOBAL l_149 */
                        struct S1 *l_148[1];
                        struct S1 **l_147 = &l_148[0];
                        struct S1 **l_150 = &l_148[0];
                        struct S1 **l_151 = &l_148[0];
                        uint32_t l_152 = 0xA103EE57L;
                        int32_t *l_153 = &l_149.f5;
                        int32_t *l_154 = &l_149.f5;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_148[i] = &l_149;
                        l_143++;
                        l_151 = (l_150 = (l_147 = l_146));
                        l_154 = (l_152 , l_153);
                    }
                    else
                    { /* block id: 85 */
                        uint8_t l_155 = 250UL;
                        l_6.x &= 0x155F64EDL;
                        --l_155;
                    }
                }
                else
                { /* block id: 89 */
                    uint32_t l_158 = 0UL;
                    ++l_158;
                }
                l_141.s5 &= (-7L);
                for (l_141.s7 = (-5); (l_141.s7 != (-5)); ++l_141.s7)
                { /* block id: 95 */
                    int32_t l_163 = 0x731CA428L;
                    int8_t l_171 = 0x6DL;
                    for (l_163 = 0; (l_163 > 29); l_163++)
                    { /* block id: 98 */
                        int8_t l_166 = 0x1EL;
                        int16_t l_167 = (-1L);
                        struct S0 l_168 = {254UL};
                        struct S0 l_169 = {6UL};
                        int16_t l_170 = (-8L);
                        l_166 &= 0x2130829EL;
                        l_169 = (l_167 , l_168);
                        l_7 &= l_170;
                    }
                    if (l_171)
                    { /* block id: 103 */
                        uint32_t l_172[2];
                        struct S1 l_174[2][4] = {{{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L}},{{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L},{4294967295UL,0UL,0xB64537C1L,-7L,0x7D59EA4EL,-9L}}};
                        struct S1 *l_173[8] = {&l_174[0][1],&l_174[0][1],&l_174[0][1],&l_174[0][1],&l_174[0][1],&l_174[0][1],&l_174[0][1],&l_174[0][1]};
                        struct S1 *l_175[7][8] = {{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]},{(void*)0,&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][0],(void*)0,&l_174[0][1],&l_174[1][3]}};
                        union U5 l_176 = {0};/* VOLATILE GLOBAL l_176 */
                        uint16_t l_177[3];
                        uint16_t l_178 = 0xEDF9L;
                        int8_t l_179 = 0L;
                        struct S0 l_180 = {1UL};
                        struct S0 l_181 = {0UL};
                        struct S0 l_182[2] = {{0x78L},{0x78L}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_172[i] = 0x760C7681L;
                        for (i = 0; i < 3; i++)
                            l_177[i] = 0x7590L;
                        l_10 &= l_172[0];
                        l_175[1][4] = (l_173[7] = (void*)0);
                        l_182[1] = (((l_176 , l_177[0]) , (l_17 = (l_178 , l_179))) , (l_181 = l_180));
                    }
                    else
                    { /* block id: 110 */
                        uint16_t l_183 = 0xD117L;
                        uint8_t l_184 = 0x5FL;
                        int16_t l_187 = 0L;
                        struct S3 l_188 = {1UL,0x241AC8A1L,-10L,0x27F0016306CED180L,0x2E726D7FL,0x537B6BF432456AF5L,-2L};/* VOLATILE GLOBAL l_188 */
                        int64_t l_189[10] = {(-6L),0x30C6D8FC74D14176L,0x2BC9011C2D9155A2L,0x30C6D8FC74D14176L,(-6L),(-6L),0x30C6D8FC74D14176L,0x2BC9011C2D9155A2L,0x30C6D8FC74D14176L,(-6L)};
                        uint32_t l_190[9] = {0xF8CB437DL,9UL,0xF8CB437DL,0xF8CB437DL,9UL,0xF8CB437DL,0xF8CB437DL,9UL,0xF8CB437DL};
                        int32_t l_191 = 0x6621D1AFL;
                        uint16_t l_192[1][1][1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_192[i][j][k] = 0xCF01L;
                            }
                        }
                        l_7 = l_183;
                        ++l_184;
                        l_163 &= ((l_190[4] = (((l_187 , l_188) , (l_26.z |= 0xE4760E0FL)) , (l_189[4] = (-3L)))) , 0x57FBB295L);
                        l_192[0][0][0]--;
                    }
                }
                l_195 = (void*)0;
            }
        }
        if ((l_208 = ((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_196.xxxyxxyy)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_197 = 5L), l_198, 0x6ABBF705L, 0x0CD818A9L, 0L, (-1L), 9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_199.yzwyxzyz)).s55)), l_200, (l_202 &= l_201), (l_203 = 3L), (-4L), (-1L), 1L, 0x3A266CB6L)))).sd5b2, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_204.sc0acd78a)).even))))), l_205[1], l_206, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_207.xyyx)).wxyxwwxz)), 0x4210DF2FL)).s0))
        { /* block id: 127 */
            int32_t l_209 = 0x2EA817F4L;
            uint8_t l_239 = 0UL;
            for (l_209 = (-12); (l_209 >= 4); l_209++)
            { /* block id: 130 */
                int32_t l_212 = 0x082BE534L;
                int32_t *l_236 = &l_212;
                int32_t *l_237 = (void*)0;
                uint8_t l_238 = 1UL;
                for (l_212 = 0; (l_212 <= 29); l_212++)
                { /* block id: 133 */
                    int32_t l_216 = 1L;
                    int32_t *l_215 = &l_216;
                    int32_t *l_217 = &l_216;
                    uint32_t l_231 = 4294967295UL;
                    int32_t *l_234 = (void*)0;
                    int32_t *l_235[5][1][4] = {{{&l_216,&l_216,&l_216,&l_216}},{{&l_216,&l_216,&l_216,&l_216}},{{&l_216,&l_216,&l_216,&l_216}},{{&l_216,&l_216,&l_216,&l_216}},{{&l_216,&l_216,&l_216,&l_216}}};
                    int i, j, k;
                    l_217 = l_215;
                    for (l_216 = (-25); (l_216 != (-18)); l_216++)
                    { /* block id: 137 */
                        VECTOR(int32_t, 2) l_220 = (VECTOR(int32_t, 2))(0x0311AFBFL, (-7L));
                        int32_t l_221[6];
                        int32_t l_222 = 0x0E5995FAL;
                        int32_t l_223[5] = {1L,1L,1L,1L,1L};
                        int16_t l_224 = 6L;
                        int16_t l_225[4][2][7];
                        int64_t l_226 = 0x56C6D53B586226D4L;
                        int16_t l_227 = 0x4F59L;
                        uint8_t l_228[5][10] = {{255UL,0x1EL,4UL,255UL,4UL,0x1EL,255UL,249UL,1UL,1UL},{255UL,0x1EL,4UL,255UL,4UL,0x1EL,255UL,249UL,1UL,1UL},{255UL,0x1EL,4UL,255UL,4UL,0x1EL,255UL,249UL,1UL,1UL},{255UL,0x1EL,4UL,255UL,4UL,0x1EL,255UL,249UL,1UL,1UL},{255UL,0x1EL,4UL,255UL,4UL,0x1EL,255UL,249UL,1UL,1UL}};
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_221[i] = (-5L);
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 7; k++)
                                    l_225[i][j][k] = 0L;
                            }
                        }
                        ++l_228[0][8];
                    }
                    l_231++;
                    l_235[2][0][0] = l_234;
                }
                l_237 = l_236;
                l_199.x = (l_10 = (l_238 , (GROUP_DIVERGE(0, 1) , 0x126EB2AEL)));
            }
            --l_239;
            l_204.sf &= (-6L);
        }
        else
        { /* block id: 149 */
            int32_t l_242 = 0x65148E35L;
            for (l_242 = 0; (l_242 != 25); l_242 = safe_add_func_int8_t_s_s(l_242, 3))
            { /* block id: 152 */
                int16_t l_245 = 4L;
                l_207.x &= (GROUP_DIVERGE(2, 1) , 0x645BF232L);
                if (l_245)
                { /* block id: 154 */
                    struct S1 *l_246 = (void*)0;
                    uint32_t l_247 = 0xA1B3EB41L;
                    uint64_t l_248 = 0xD07085DC86D78697L;
                    l_246 = (void*)0;
                    if ((l_247 , l_248))
                    { /* block id: 156 */
                        struct S1 l_250 = {4294967295UL,0UL,0x44C8F225L,0x0C950F7EL,0x1795FE38L,-2L};/* VOLATILE GLOBAL l_250 */
                        struct S1 *l_249 = &l_250;
                        uint32_t l_251 = 0UL;
                        int32_t *l_252 = (void*)0;
                        l_249 = (l_246 = l_249);
                        l_25[1][4] = (l_207.x &= l_251);
                        l_252 = (void*)0;
                    }
                    else
                    { /* block id: 162 */
                        uint16_t l_253 = 5UL;
                        VECTOR(uint8_t, 2) l_254 = (VECTOR(uint8_t, 2))(4UL, 255UL);
                        int8_t l_257 = 1L;
                        int32_t l_258 = 0x0915A19DL;
                        uint32_t l_259 = 4294967289UL;
                        int i;
                        l_25[0][9] = (l_253 , (-1L));
                        --l_254.y;
                        l_204.se &= (l_257 , l_258);
                        --l_259;
                    }
                    for (l_247 = 27; (l_247 > 50); l_247 = safe_add_func_int16_t_s_s(l_247, 4))
                    { /* block id: 170 */
                        struct S3 l_265[6][1] = {{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}},{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}},{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}},{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}},{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}},{{4294967289UL,5UL,0x2FB8C2D5L,0x34FC2D1835A0E910L,0x13A5BBB0L,0xCBC0E3DA29574716L,1L}}};
                        struct S3 *l_264[10] = {&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0],&l_265[4][0]};
                        int i, j;
                        l_264[2] = (void*)0;
                    }
                }
                else
                { /* block id: 173 */
                    struct S4 l_266 = {4UL,0x3987274B98C5EABFL,4294967290UL};/* VOLATILE GLOBAL l_266 */
                    int32_t l_267[7] = {0x5AA2A863L,0x5AA2A863L,0x5AA2A863L,0x5AA2A863L,0x5AA2A863L,0x5AA2A863L,0x5AA2A863L};
                    VECTOR(int64_t, 16) l_268 = (VECTOR(int64_t, 16))(0x67B2451EDD1ABF67L, (VECTOR(int64_t, 4))(0x67B2451EDD1ABF67L, (VECTOR(int64_t, 2))(0x67B2451EDD1ABF67L, 1L), 1L), 1L, 0x67B2451EDD1ABF67L, 1L, (VECTOR(int64_t, 2))(0x67B2451EDD1ABF67L, 1L), (VECTOR(int64_t, 2))(0x67B2451EDD1ABF67L, 1L), 0x67B2451EDD1ABF67L, 1L, 0x67B2451EDD1ABF67L, 1L);
                    VECTOR(int32_t, 16) l_269 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x301228ECL), 0x301228ECL), 0x301228ECL, 0L, 0x301228ECL, (VECTOR(int32_t, 2))(0L, 0x301228ECL), (VECTOR(int32_t, 2))(0L, 0x301228ECL), 0L, 0x301228ECL, 0L, 0x301228ECL);
                    int i;
                    if (((VECTOR(int32_t, 4))(0x5B8B5F7BL, (l_266 , ((l_267[4] = 0x4E8A4B93L) , (l_268.s4 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_269.sa0db158a)).s1734540730525265)).s2))), 0x05F3CF5AL, 0x3A183D2DL)).z)
                    { /* block id: 175 */
                        uint8_t l_270 = 252UL;
                        int32_t l_273 = (-1L);
                        int64_t l_274 = 1L;
                        int32_t l_276 = 0x30266327L;
                        int32_t *l_275[5][6][7] = {{{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276,&l_276,&l_276,&l_276}}};
                        int32_t *l_277[6] = {&l_276,&l_276,&l_276,&l_276,&l_276,&l_276};
                        uint8_t l_278 = 255UL;
                        uint16_t l_281 = 65535UL;
                        int i, j, k;
                        l_25[0][6] &= (l_269.s0 |= ((++l_270) , l_273));
                        l_277[3] = (l_274 , l_275[2][0][1]);
                        l_278--;
                        l_281 |= (l_199.z = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-3L), 0x7155C611L)), 0x29B9D1EBL, 0x3AA9610FL)).z);
                    }
                    else
                    { /* block id: 183 */
                        struct S4 l_282 = {0x7AL,7L,1UL};/* VOLATILE GLOBAL l_282 */
                        VECTOR(uint64_t, 2) l_283 = (VECTOR(uint64_t, 2))(0x700EA1A5F82760A4L, 0xD3415281CBC50086L);
                        struct S2 l_284[5] = {{0x10B6FDA8L,{1UL},1L,{0UL},-9L,{1UL,0xC494L,4294967295UL,0x4A2085ECL,0x7BDF4B2BL,0x2B96D31CL}},{0x10B6FDA8L,{1UL},1L,{0UL},-9L,{1UL,0xC494L,4294967295UL,0x4A2085ECL,0x7BDF4B2BL,0x2B96D31CL}},{0x10B6FDA8L,{1UL},1L,{0UL},-9L,{1UL,0xC494L,4294967295UL,0x4A2085ECL,0x7BDF4B2BL,0x2B96D31CL}},{0x10B6FDA8L,{1UL},1L,{0UL},-9L,{1UL,0xC494L,4294967295UL,0x4A2085ECL,0x7BDF4B2BL,0x2B96D31CL}},{0x10B6FDA8L,{1UL},1L,{0UL},-9L,{1UL,0xC494L,4294967295UL,0x4A2085ECL,0x7BDF4B2BL,0x2B96D31CL}}};
                        VECTOR(int8_t, 2) l_285 = (VECTOR(int8_t, 2))(0x0DL, 0x7FL);
                        struct S3 *l_286 = (void*)0;
                        struct S3 l_288[7][6][6] = {{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}},{{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}},{{0x78ADEA07L,4294967289UL,0L,-8L,0x40EE63E6L,0xD6348DCAB2CDC517L,7L},{0UL,4UL,0x59756EE1L,0x73B51DBB9EB235EAL,0x5A283362L,18446744073709551615UL,0x5E9FD722CDDAEF62L},{8UL,0x98B15086L,0x1EE37CEBL,0x60953FFDE29D6655L,-10L,0x509A934FB1EDB388L,0L},{0x614259A3L,4294967294UL,-2L,-4L,-1L,0UL,0x747D597A77BCCCA7L},{4294967287UL,1UL,0x42C9004BL,-5L,0x1924687CL,0UL,5L},{0x2631EB68L,0x2CDB755EL,0x0A026383L,6L,1L,0x7AADC6A7CF218528L,0x212C75C99B3F84FEL}}}};
                        struct S3 *l_287[4][2][5] = {{{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]},{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]}},{{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]},{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]}},{{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]},{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]}},{{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]},{&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0],&l_288[4][2][0]}}};
                        struct S3 *l_289 = &l_288[3][3][4];
                        struct S3 *l_290 = &l_288[6][0][3];
                        uint64_t l_291 = 0x87A80F3679650910L;
                        uint32_t l_294 = 0UL;
                        int i, j, k;
                        l_290 = (l_289 = (l_287[2][0][4] = (((l_282 , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_283.xy)).yxyx)).y) , l_284[4]) , (((VECTOR(int8_t, 16))(l_285.xxyxxxyyyxxxyyxy)).s8 , (l_286 = l_286)))));
                        ++l_291;
                        --l_294;
                    }
                }
            }
        }
        l_298 = l_297.z;
        unsigned int result = 0;
        result += l_2;
        result += l_5;
        result += l_6.y;
        result += l_6.x;
        result += l_7;
        result += l_8;
        result += l_9.y;
        result += l_9.x;
        result += l_10;
        result += l_11.y;
        result += l_11.x;
        result += l_12.w;
        result += l_12.z;
        result += l_12.y;
        result += l_12.x;
        result += l_13;
        result += l_14;
        result += l_15.s7;
        result += l_15.s6;
        result += l_15.s5;
        result += l_15.s4;
        result += l_15.s3;
        result += l_15.s2;
        result += l_15.s1;
        result += l_15.s0;
        result += l_16.w;
        result += l_16.z;
        result += l_16.y;
        result += l_16.x;
        result += l_17;
        result += l_18.s7;
        result += l_18.s6;
        result += l_18.s5;
        result += l_18.s4;
        result += l_18.s3;
        result += l_18.s2;
        result += l_18.s1;
        result += l_18.s0;
        result += l_19.y;
        result += l_19.x;
        result += l_20.s7;
        result += l_20.s6;
        result += l_20.s5;
        result += l_20.s4;
        result += l_20.s3;
        result += l_20.s2;
        result += l_20.s1;
        result += l_20.s0;
        result += l_21.s7;
        result += l_21.s6;
        result += l_21.s5;
        result += l_21.s4;
        result += l_21.s3;
        result += l_21.s2;
        result += l_21.s1;
        result += l_21.s0;
        result += l_22;
        result += l_23;
        result += l_24;
        int l_25_i0, l_25_i1;
        for (l_25_i0 = 0; l_25_i0 < 2; l_25_i0++) {
            for (l_25_i1 = 0; l_25_i1 < 10; l_25_i1++) {
                result += l_25[l_25_i0][l_25_i1];
            }
        }
        result += l_26.w;
        result += l_26.z;
        result += l_26.y;
        result += l_26.x;
        int l_27_i0;
        for (l_27_i0 = 0; l_27_i0 < 8; l_27_i0++) {
            result += l_27[l_27_i0];
        }
        result += l_196.y;
        result += l_196.x;
        result += l_197;
        result += l_198;
        result += l_199.w;
        result += l_199.z;
        result += l_199.y;
        result += l_199.x;
        result += l_200;
        result += l_201;
        result += l_202;
        result += l_203;
        result += l_204.sf;
        result += l_204.se;
        result += l_204.sd;
        result += l_204.sc;
        result += l_204.sb;
        result += l_204.sa;
        result += l_204.s9;
        result += l_204.s8;
        result += l_204.s7;
        result += l_204.s6;
        result += l_204.s5;
        result += l_204.s4;
        result += l_204.s3;
        result += l_204.s2;
        result += l_204.s1;
        result += l_204.s0;
        int l_205_i0;
        for (l_205_i0 = 0; l_205_i0 < 6; l_205_i0++) {
            result += l_205[l_205_i0];
        }
        result += l_206;
        result += l_207.y;
        result += l_207.x;
        result += l_208;
        result += l_297.w;
        result += l_297.z;
        result += l_297.y;
        result += l_297.x;
        result += l_298;
        atomic_add(&p_301->g_special_values[36 * get_linear_group_id() + 10], result);
    }
    else
    { /* block id: 195 */
        (1 + 1);
    }
    (*l_299) &= 0x5E8B3B8DL;
    return p_301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_301->tid, 75))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_comm_values[i] = 1;
    struct S6 c_302;
    struct S6* p_301 = &c_302;
    struct S6 c_303 = {
        (-1L), // p_301->g_300
        0, // p_301->v_collective
        sequence_input[get_global_id(0)], // p_301->global_0_offset
        sequence_input[get_global_id(1)], // p_301->global_1_offset
        sequence_input[get_global_id(2)], // p_301->global_2_offset
        sequence_input[get_local_id(0)], // p_301->local_0_offset
        sequence_input[get_local_id(1)], // p_301->local_1_offset
        sequence_input[get_local_id(2)], // p_301->local_2_offset
        sequence_input[get_group_id(0)], // p_301->group_0_offset
        sequence_input[get_group_id(1)], // p_301->group_1_offset
        sequence_input[get_group_id(2)], // p_301->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[0][get_linear_local_id()])), // p_301->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_302 = c_303;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_301);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_301->g_300, "p_301->g_300", print_hash_value);
    transparent_crc(p_301->v_collective, "p_301->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 36; i++)
            transparent_crc(p_301->g_special_values[i + 36 * get_linear_group_id()], "p_301->g_special_values[i + 36 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_301->l_comm_values[get_linear_local_id()], "p_301->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_301->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()], "p_301->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
