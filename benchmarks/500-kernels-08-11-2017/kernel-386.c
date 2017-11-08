// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 21,79,3 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{6,5,4,0,1,3,2}, // permutation 0
{3,6,4,1,0,5,2}, // permutation 1
{2,4,5,0,3,6,1}, // permutation 2
{1,5,6,3,0,4,2}, // permutation 3
{5,0,2,3,6,4,1}, // permutation 4
{6,4,2,5,0,1,3}, // permutation 5
{5,0,1,4,2,6,3}, // permutation 6
{4,2,6,0,5,1,3}, // permutation 7
{4,2,3,0,6,5,1}, // permutation 8
{2,3,1,4,5,0,6} // permutation 9
};

// Seed: 111953684

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

union U1 {
   uint16_t  f0;
};

union U2 {
   volatile int64_t  f0;
   volatile struct S0  f1;
   volatile int8_t  f2;
   uint64_t  f3;
   struct S0  f4;
};

union U3 {
   int8_t * volatile  f0;
   uint32_t  f1;
   int8_t * f2;
   volatile int8_t * f3;
   uint32_t  f4;
};

union U4 {
   uint64_t  f0;
   int32_t  f1;
};

union U5 {
   struct S0  f0;
   int32_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   uint32_t  f4;
};

struct S6 {
    union U3 g_109;
    union U3 *g_108;
    struct S0 g_122;
    struct S0 *g_121[6][1];
    volatile VECTOR(uint8_t, 2) g_134;
    union U1 g_167;
    volatile union U2 g_178;
    int32_t g_185[1][4][5];
    int8_t g_188;
    union U4 g_201;
    union U4 *g_200;
    union U4 ** volatile g_203;
    union U4 *g_205;
    union U4 ** volatile g_204;
    union U5 g_207;
    union U5 *g_206[2][6][8];
    union U2 g_210;
    VECTOR(int32_t, 4) g_230;
    int64_t g_247[5][5];
    int32_t g_249;
    int32_t g_268;
    uint32_t g_271;
    volatile VECTOR(uint8_t, 8) g_284;
    union U2 g_289;
    int32_t *g_295;
    int32_t ** volatile g_294;
    int8_t g_314;
    int8_t *g_313;
    union U2 *g_318;
    union U2 ** volatile g_317;
    union U1 *g_321;
    union U1 ** volatile g_320;
    struct S0 **g_323;
    struct S0 *** volatile g_322;
    int32_t ** volatile g_325;
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
union U5  func_1(struct S6 * p_329);
uint16_t  func_105(union U3 * p_106, uint16_t  p_107, struct S6 * p_329);
union U1 * func_110(uint8_t  p_111, uint32_t  p_112, uint8_t  p_113, int32_t  p_114, int8_t * p_115, struct S6 * p_329);
int32_t  func_117(struct S0 * p_118, union U1 * p_119, union U5  p_120, struct S6 * p_329);
union U1 * func_123(int8_t * p_124, int8_t * p_125, uint64_t  p_126, union U5  p_127, struct S6 * p_329);
int8_t * func_128(uint64_t  p_129, int16_t  p_130, struct S6 * p_329);
uint16_t  func_147(int8_t  p_148, uint64_t  p_149, int8_t * p_150, union U1 * p_151, union U5 * p_152, struct S6 * p_329);
uint8_t  func_153(int32_t * p_154, uint64_t  p_155, struct S6 * p_329);
int32_t * func_156(union U3 * p_157, int32_t * p_158, int8_t * p_159, int32_t  p_160, struct S6 * p_329);
int32_t * func_162(union U1 * p_163, union U5  p_164, uint32_t  p_165, struct S6 * p_329);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_329->g_108 p_329->g_comm_values p_329->g_121 p_329->l_comm_values p_329->g_134 p_329->g_178 p_329->g_200 p_329->g_204 p_329->g_185 p_329->g_206 p_329->g_178.f0 p_329->g_167.f0 p_329->g_201.f0 p_329->g_230 p_329->g_122.f0 p_329->g_247 p_329->g_249 p_329->g_268 p_329->g_271 p_329->g_188 p_329->g_284 p_329->g_289 p_329->g_207.f0.f0 p_329->g_294 p_329->g_295 p_329->g_313 p_329->g_317 p_329->g_320 p_329->g_322 p_329->g_325 p_329->g_289.f0
 * writes: p_329->g_185 p_329->g_200 p_329->g_205 p_329->g_167.f0 p_329->g_247 p_329->g_249 p_329->g_268 p_329->g_271 p_329->g_230 p_329->g_188 p_329->g_295 p_329->g_318 p_329->g_321 p_329->g_323
 */
union U5  func_1(struct S6 * p_329)
{ /* block id: 4 */
    int64_t l_326 = (-1L);
    uint32_t l_327 = 0UL;
    union U5 l_328[5][8][6] = {{{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}}},{{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}}},{{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}}},{{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}}},{{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}},{{{1UL}},{{4294967295UL}},{{4294967290UL}},{{8UL}},{{0x8691C0B4L}},{{4294967290UL}}}}};
    int i, j, k;
    if ((atomic_inc(&p_329->g_atomic_input[47 * get_linear_group_id() + 40]) == 6))
    { /* block id: 6 */
        uint32_t l_2 = 0x963AB194L;
        int16_t l_3 = 0x623AL;
        VECTOR(int32_t, 2) l_4 = (VECTOR(int32_t, 2))(0x65256810L, 0x31D14CD4L);
        uint32_t l_5 = 4294967289UL;
        int32_t l_6[1];
        union U1 l_7 = {0xCF1CL};
        uint64_t l_8 = 0x51FA4C8210466712L;
        uint16_t l_9 = 65535UL;
        int64_t l_10 = 0x137D6C5051DD2E91L;
        VECTOR(int32_t, 8) l_11 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
        uint16_t l_12 = 0x4DFDL;
        uint64_t l_13 = 0x747C914A3A6D7D04L;
        union U5 l_14[5] = {{{0xF13550E3L}},{{0xF13550E3L}},{{0xF13550E3L}},{{0xF13550E3L}},{{0xF13550E3L}}};
        uint64_t l_15 = 0xDD253D975123020FL;
        VECTOR(int32_t, 2) l_16 = (VECTOR(int32_t, 2))(6L, 0x30BADCABL);
        VECTOR(int32_t, 8) l_17 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        VECTOR(int32_t, 4) l_18 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 2L), 2L);
        int i;
        for (i = 0; i < 1; i++)
            l_6[i] = 3L;
        l_3 ^= l_2;
        l_6[0] |= (((VECTOR(int32_t, 8))(l_4.yyyxxxyx)).s2 , l_5);
        if ((l_17.s4 = (l_7 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-6L), (l_16.y = ((l_8 , (((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(1L, (l_9 , l_10), (-9L), 9L)), ((VECTOR(int32_t, 2))(l_11.s60)).yyyx))).w , ((l_13 &= l_12) , l_14[3]))) , l_15)), (-6L), 9L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_17.s6651343142737370)).s79)).xyxyyyyyxxyxyxxx)).s9beb)).wzwzwzyx, ((VECTOR(int32_t, 16))(l_18.xywwyyxywxzxzzzz)).lo))).s62)), 0x45597EEDL)).s7667105645331227)))).s7)))
        { /* block id: 12 */
            int64_t l_19 = 1L;
            int32_t l_20[4];
            uint64_t l_21 = 0xA7D8E2DC6606A86EL;
            int i;
            for (i = 0; i < 4; i++)
                l_20[i] = 0x4C01F903L;
            l_21--;
        }
        else
        { /* block id: 14 */
            int32_t l_24 = 0x4CC853D3L;
            union U3 l_83[4][6][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
            int16_t l_84 = (-1L);
            int i, j, k;
            if (l_24)
            { /* block id: 15 */
                union U5 l_26 = {{4294967293UL}};
                union U5 *l_25 = &l_26;
                union U5 *l_27[6][2] = {{(void*)0,&l_26},{(void*)0,&l_26},{(void*)0,&l_26},{(void*)0,&l_26},{(void*)0,&l_26},{(void*)0,&l_26}};
                int i, j;
                l_27[4][1] = l_25;
            }
            else
            { /* block id: 17 */
                int32_t l_29 = (-9L);
                int32_t *l_28 = &l_29;
                int32_t *l_30 = &l_29;
                VECTOR(int32_t, 8) l_31 = (VECTOR(int32_t, 8))(0x21BFDB9CL, (VECTOR(int32_t, 4))(0x21BFDB9CL, (VECTOR(int32_t, 2))(0x21BFDB9CL, 1L), 1L), 1L, 0x21BFDB9CL, 1L);
                int32_t *l_67 = (void*)0;
                int32_t *l_68[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_68[i] = &l_29;
                l_17.s7 = 5L;
                l_30 = (l_28 = (void*)0);
                if ((((VECTOR(int32_t, 16))(l_31.s5656215244426337)).sa , 0x6091E6DCL))
                { /* block id: 21 */
                    int32_t l_32[8][2];
                    uint64_t l_38 = 0x5E26160D4A066EE5L;
                    int64_t l_46 = (-1L);
                    uint32_t l_47 = 1UL;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_32[i][j] = 1L;
                    }
                    for (l_32[2][1] = 18; (l_32[2][1] > (-12)); --l_32[2][1])
                    { /* block id: 24 */
                        int32_t l_35 = 0x51B8438CL;
                        int32_t *l_36[8] = {&l_35,&l_35,&l_35,&l_35,&l_35,&l_35,&l_35,&l_35};
                        uint64_t l_37 = 0x4C6930A875637402L;
                        int i;
                        l_11.s1 &= l_35;
                        l_36[6] = (void*)0;
                        l_30 = (void*)0;
                        l_16.y = (l_4.y |= l_37);
                    }
                    l_32[6][1] = l_38;
                    for (l_38 = 0; (l_38 <= 39); ++l_38)
                    { /* block id: 34 */
                        int16_t l_41[9][1];
                        int16_t l_42[1];
                        uint64_t l_43 = 0UL;
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_41[i][j] = 0x4C2AL;
                        }
                        for (i = 0; i < 1; i++)
                            l_42[i] = 0x7392L;
                        ++l_43;
                    }
                    ++l_47;
                }
                else
                { /* block id: 38 */
                    int32_t l_51[1];
                    int32_t *l_50 = &l_51[0];
                    VECTOR(int32_t, 2) l_52 = (VECTOR(int32_t, 2))(3L, 0L);
                    int64_t l_53[2];
                    VECTOR(int8_t, 4) l_54 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x50L), 0x50L);
                    int16_t l_55 = (-8L);
                    int64_t l_56[8][8][4] = {{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}},{{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL},{0x39C88BF8F4ABBE4CL,0x1F5868DEE43C49EEL,0x1F5868DEE43C49EEL,0x39C88BF8F4ABBE4CL}}};
                    int32_t l_57 = (-10L);
                    int8_t l_58 = 0x22L;
                    int8_t l_59 = (-1L);
                    int8_t l_60 = 0x4EL;
                    int8_t l_61 = 0x64L;
                    VECTOR(int8_t, 16) l_62 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x21L), 0x21L), 0x21L, 0x6AL, 0x21L, (VECTOR(int8_t, 2))(0x6AL, 0x21L), (VECTOR(int8_t, 2))(0x6AL, 0x21L), 0x6AL, 0x21L, 0x6AL, 0x21L);
                    uint64_t l_63 = 2UL;
                    uint32_t l_66 = 0xCA2BCBDFL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_51[i] = 0x6F706C0AL;
                    for (i = 0; i < 2; i++)
                        l_53[i] = 0x3207691369F8C36BL;
                    l_28 = l_50;
                    (*l_28) = ((VECTOR(int32_t, 2))(l_52.yx)).hi;
                    l_63--;
                    (*l_28) = l_66;
                }
                l_68[0] = l_67;
            }
            for (l_24 = 0; (l_24 >= 1); l_24 = safe_add_func_int32_t_s_s(l_24, 7))
            { /* block id: 48 */
                int32_t l_71 = (-1L);
                VECTOR(int32_t, 16) l_79 = (VECTOR(int32_t, 16))(0x704C9F34L, (VECTOR(int32_t, 4))(0x704C9F34L, (VECTOR(int32_t, 2))(0x704C9F34L, 0x4A1CDE34L), 0x4A1CDE34L), 0x4A1CDE34L, 0x704C9F34L, 0x4A1CDE34L, (VECTOR(int32_t, 2))(0x704C9F34L, 0x4A1CDE34L), (VECTOR(int32_t, 2))(0x704C9F34L, 0x4A1CDE34L), 0x704C9F34L, 0x4A1CDE34L, 0x704C9F34L, 0x4A1CDE34L);
                union U5 l_81 = {{0x7BAAA9AAL}};
                union U5 *l_80 = &l_81;
                union U5 *l_82 = &l_81;
                int i;
                for (l_71 = (-23); (l_71 > 4); ++l_71)
                { /* block id: 51 */
                    int32_t l_74 = 0x18311241L;
                    int32_t l_75 = 0x5CC72A9CL;
                    uint32_t l_76 = 0x6CB78A07L;
                    --l_76;
                }
                l_16.y = ((VECTOR(int32_t, 2))(l_79.s25)).odd;
                l_82 = (l_80 = (void*)0);
            }
            if ((l_83[3][2][0] , l_84))
            { /* block id: 58 */
                int32_t l_85 = (-6L);
                int32_t *l_97[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_98 = &l_85;
                int32_t *l_99 = (void*)0;
                int i;
                for (l_85 = (-1); (l_85 != (-18)); l_85 = safe_sub_func_int8_t_s_s(l_85, 9))
                { /* block id: 61 */
                    uint16_t l_88 = 0xB116L;
                    if ((l_88 , (l_4.x ^= 0x652836DDL)))
                    { /* block id: 63 */
                        l_4.x &= (-1L);
                    }
                    else
                    { /* block id: 65 */
                        int32_t *l_89 = (void*)0;
                        union U3 l_91 = {0};/* VOLATILE GLOBAL l_91 */
                        union U3 *l_90 = &l_91;
                        l_89 = (void*)0;
                        l_90 = (void*)0;
                    }
                    for (l_88 = 22; (l_88 <= 45); l_88 = safe_add_func_uint32_t_u_u(l_88, 7))
                    { /* block id: 71 */
                        uint64_t l_94 = 0UL;
                        struct S0 l_95 = {1UL};
                        uint32_t l_96 = 0xAB560D96L;
                        l_14[3].f0 = (l_94 , l_95);
                        l_11.s0 &= l_96;
                    }
                }
                l_99 = (l_98 = l_97[5]);
            }
            else
            { /* block id: 78 */
                struct S0 l_101 = {0UL};
                struct S0 *l_100 = &l_101;
                struct S0 *l_102 = &l_101;
                l_102 = l_100;
            }
        }
        unsigned int result = 0;
        result += l_2;
        result += l_3;
        result += l_4.y;
        result += l_4.x;
        result += l_5;
        int l_6_i0;
        for (l_6_i0 = 0; l_6_i0 < 1; l_6_i0++) {
            result += l_6[l_6_i0];
        }
        result += l_7.f0;
        result += l_8;
        result += l_9;
        result += l_10;
        result += l_11.s7;
        result += l_11.s6;
        result += l_11.s5;
        result += l_11.s4;
        result += l_11.s3;
        result += l_11.s2;
        result += l_11.s1;
        result += l_11.s0;
        result += l_12;
        result += l_13;
        int l_14_i0;
        for (l_14_i0 = 0; l_14_i0 < 5; l_14_i0++) {
            result += l_14[l_14_i0].f0.f0;
            result += l_14[l_14_i0].f1;
            result += l_14[l_14_i0].f2;
            result += l_14[l_14_i0].f3;
            result += l_14[l_14_i0].f4;
        }
        result += l_15;
        result += l_16.y;
        result += l_16.x;
        result += l_17.s7;
        result += l_17.s6;
        result += l_17.s5;
        result += l_17.s4;
        result += l_17.s3;
        result += l_17.s2;
        result += l_17.s1;
        result += l_17.s0;
        result += l_18.w;
        result += l_18.z;
        result += l_18.y;
        result += l_18.x;
        atomic_add(&p_329->g_special_values[47 * get_linear_group_id() + 40], result);
    }
    else
    { /* block id: 82 */
        (1 + 1);
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_329->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(func_105(p_329->g_108, p_329->g_comm_values[p_329->tid], p_329), (l_326 < (l_327 > l_326)))), 10))][(safe_mod_func_uint32_t_u_u(p_329->tid, 7))]));
    return l_328[2][4][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_121 p_329->l_comm_values p_329->g_134 p_329->g_178 p_329->g_comm_values p_329->g_200 p_329->g_204 p_329->g_185 p_329->g_206 p_329->g_178.f0 p_329->g_167.f0 p_329->g_201.f0 p_329->g_230 p_329->g_122.f0 p_329->g_247 p_329->g_249 p_329->g_268 p_329->g_271 p_329->g_188 p_329->g_284 p_329->g_289 p_329->g_207.f0.f0 p_329->g_294 p_329->g_295 p_329->g_313 p_329->g_317 p_329->g_320 p_329->g_322 p_329->g_325 p_329->g_289.f0
 * writes: p_329->g_185 p_329->g_200 p_329->g_205 p_329->g_167.f0 p_329->g_247 p_329->g_249 p_329->g_268 p_329->g_271 p_329->g_230 p_329->g_188 p_329->g_295 p_329->g_318 p_329->g_321 p_329->g_323
 */
uint16_t  func_105(union U3 * p_106, uint16_t  p_107, struct S6 * p_329)
{ /* block id: 85 */
    uint64_t l_116 = 0x0966B1C7B1A2CD96L;
    VECTOR(uint8_t, 4) l_133 = (VECTOR(uint8_t, 4))(0x74L, (VECTOR(uint8_t, 2))(0x74L, 0x2FL), 0x2FL);
    VECTOR(uint64_t, 2) l_143 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x0F7AC18CAC2623A6L);
    VECTOR(uint64_t, 2) l_144 = (VECTOR(uint64_t, 2))(1UL, 0xA22433CC30774E2FL);
    VECTOR(int64_t, 8) l_145 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3A4ED1C8C2AAD687L), 0x3A4ED1C8C2AAD687L), 0x3A4ED1C8C2AAD687L, 0L, 0x3A4ED1C8C2AAD687L);
    VECTOR(uint64_t, 4) l_146 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5F6AA3A504EC7D9EL), 0x5F6AA3A504EC7D9EL);
    union U3 *l_161 = (void*)0;
    union U1 *l_166 = &p_329->g_167;
    union U5 l_168[6][10] = {{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}},{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}},{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}},{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}},{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}},{{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}},{{0xEC4C8C8FL}},{{0xF4821EC3L}},{{3UL}},{{0xF4821EC3L}},{{0xEC4C8C8FL}}}};
    int8_t *l_187[2];
    int32_t **l_324 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_187[i] = &p_329->g_188;
    (*p_329->g_320) = func_110((p_107 >= (l_116 , func_117(p_329->g_121[5][0], func_123(func_128((safe_mul_func_uint8_t_u_u(p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 7))], ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_133.yz)), ((VECTOR(uint8_t, 4))(p_329->g_134.yxxx)).odd))).xyxyyyxyxxyxyyyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0xA2L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x3BL, (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_143.yyxxyyxx)).s3323500475221401)).s6b02))))), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_144.yx)), 5UL, 0UL)).xyxxzwwx)).hi)), 0xEEF5A3A185DD0340L, ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(l_145.s5661)).xyyzzzyw))).s3, ((VECTOR(uint64_t, 2))(18446744073709551608UL, 0xA406F6B8A0B9BCC1L)), ((VECTOR(uint64_t, 4))(0x7BA8037360924E14L, 0UL, 0x2FA70736F6A9FABDL, 18446744073709551606UL)))).s2ad8)), 18446744073709551615UL, 0x6DFC68BD2B6BC98AL, 0x93EE8434840841C1L, 0x41510BD41EAB73E6L)), 0x05A5C68B7B371797L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(l_146.xxwx)).zzwywyzy, (uint64_t)(func_147((l_146.x | func_153(func_156(l_161, func_162(l_166, l_168[5][1], l_133.w, p_329), l_187[1], p_329->g_comm_values[p_329->tid], p_329), p_107, p_329)), p_107, l_187[1], l_166, p_329->g_206[1][1][7], p_329) != p_329->g_comm_values[p_329->tid])))).odd)), ((VECTOR(uint64_t, 2))(0x855E6FC1642C3FEEL)), 18446744073709551607UL))))).s84)), ((VECTOR(uint64_t, 2))(0UL))))).hi, l_143.y)), 0L, 0x6EL)).xywwzzyz)).s5662235211350042, ((VECTOR(int8_t, 16))(0x5EL)), ((VECTOR(int8_t, 16))(0x6CL))))).sb74f, ((VECTOR(int8_t, 4))(0x63L)), ((VECTOR(int8_t, 4))(0L))))))).xxzyxxyy, ((VECTOR(int8_t, 8))(0x6BL))))).s47, ((VECTOR(uint8_t, 2))(1UL))))).hi || p_329->g_185[0][3][0]), FAKE_DIVERGE(p_329->group_0_offset, get_group_id(0), 10))), 0x7486L)), 0x7592L)), p_329->g_178.f0, ((VECTOR(uint8_t, 4))(0x30L)), ((VECTOR(uint8_t, 8))(255UL)), 1UL, 0x3BL)).lo)), ((VECTOR(uint8_t, 4))(0UL)), 1UL, 1UL, 255UL)).s78)).xxyyxxyx)).s1534653116035511))).s0)), p_107, p_329), l_187[1], p_107, l_168[5][1], p_329), l_168[5][1], p_329))), p_329->g_122.f0, l_168[5][1].f0.f0, p_107, p_329->g_313, p_329);
    (*p_329->g_322) = &p_329->g_121[5][0];
    (*p_329->g_325) = (*p_329->g_294);
    return p_329->g_289.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_247 p_329->g_295 p_329->g_185 p_329->g_317
 * writes: p_329->g_185 p_329->g_318
 */
union U1 * func_110(uint8_t  p_111, uint32_t  p_112, uint8_t  p_113, int32_t  p_114, int8_t * p_115, struct S6 * p_329)
{ /* block id: 150 */
    uint8_t l_319 = 0xE0L;
    (*p_329->g_295) ^= (safe_mod_func_uint8_t_u_u(p_329->g_247[3][4], p_111));
    (*p_329->g_317) = &p_329->g_210;
    (*p_329->g_295) = (l_319 > (-1L));
    return &p_329->g_167;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_295 p_329->g_185
 * writes: p_329->g_185
 */
int32_t  func_117(struct S0 * p_118, union U1 * p_119, union U5  p_120, struct S6 * p_329)
{ /* block id: 131 */
    int16_t l_312[2][1];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_312[i][j] = (-1L);
    }
    if ((atomic_inc(&p_329->g_atomic_input[47 * get_linear_group_id() + 4]) == 5))
    { /* block id: 133 */
        int64_t l_299 = 0x2E880600A618006FL;
        int8_t l_300 = 0x71L;
        struct S0 l_308 = {0xFC0DC315L};
        struct S0 l_309 = {1UL};
        int8_t l_310 = 0x73L;
        uint16_t l_311 = 65533UL;
        l_300 &= l_299;
        for (l_299 = 0; (l_299 > (-25)); l_299 = safe_sub_func_int32_t_s_s(l_299, 6))
        { /* block id: 137 */
            int16_t l_303[9][1] = {{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L},{0x49E8L}};
            int16_t l_304 = (-9L);
            int32_t l_306 = 5L;
            int32_t *l_305 = &l_306;
            int32_t *l_307 = &l_306;
            int i, j;
            l_304 &= l_303[7][0];
            l_307 = (l_305 = (void*)0);
        }
        l_309 = (((VECTOR(uint8_t, 2))(2UL, 254UL)).lo , l_308);
        l_311 = l_310;
        unsigned int result = 0;
        result += l_299;
        result += l_300;
        result += l_308.f0;
        result += l_309.f0;
        result += l_310;
        result += l_311;
        atomic_add(&p_329->g_special_values[47 * get_linear_group_id() + 4], result);
    }
    else
    { /* block id: 144 */
        (1 + 1);
    }
    (*p_329->g_295) = l_312[1][0];
    (*p_329->g_295) |= p_120.f0.f0;
    return l_312[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_134 p_329->g_185 p_329->g_268 p_329->g_271 p_329->g_230 p_329->g_188 p_329->g_284 p_329->g_289 p_329->g_207.f0.f0 p_329->g_167.f0 p_329->g_247 p_329->g_249 p_329->g_294
 * writes: p_329->g_268 p_329->g_271 p_329->g_230 p_329->g_185 p_329->g_188 p_329->g_247 p_329->g_249 p_329->g_295
 */
union U1 * func_123(int8_t * p_124, int8_t * p_125, uint64_t  p_126, union U5  p_127, struct S6 * p_329)
{ /* block id: 116 */
    int32_t *l_254 = (void*)0;
    VECTOR(int16_t, 4) l_257 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x4A63L), 0x4A63L);
    VECTOR(int32_t, 2) l_258 = (VECTOR(int32_t, 2))(0x4442C3B5L, 0x336797F3L);
    union U5 *l_259[5];
    union U1 *l_264 = &p_329->g_167;
    union U1 *l_266 = &p_329->g_167;
    union U1 **l_265 = &l_266;
    int16_t *l_267 = (void*)0;
    uint64_t l_269 = 0xA4613B58B0D0B993L;
    struct S0 *l_270 = &p_329->g_122;
    int32_t *l_272 = (void*)0;
    int32_t *l_273 = (void*)0;
    int32_t *l_274[4][5] = {{&p_329->g_249,&p_329->g_185[0][3][0],&p_329->g_249,&p_329->g_249,&p_329->g_185[0][3][0]},{&p_329->g_249,&p_329->g_185[0][3][0],&p_329->g_249,&p_329->g_249,&p_329->g_185[0][3][0]},{&p_329->g_249,&p_329->g_185[0][3][0],&p_329->g_249,&p_329->g_249,&p_329->g_185[0][3][0]},{&p_329->g_249,&p_329->g_185[0][3][0],&p_329->g_249,&p_329->g_249,&p_329->g_185[0][3][0]}};
    union U3 *l_277 = &p_329->g_109;
    VECTOR(uint16_t, 16) l_286 = (VECTOR(uint16_t, 16))(0x5ED2L, (VECTOR(uint16_t, 4))(0x5ED2L, (VECTOR(uint16_t, 2))(0x5ED2L, 65531UL), 65531UL), 65531UL, 0x5ED2L, 65531UL, (VECTOR(uint16_t, 2))(0x5ED2L, 65531UL), (VECTOR(uint16_t, 2))(0x5ED2L, 65531UL), 0x5ED2L, 65531UL, 0x5ED2L, 65531UL);
    int64_t *l_288 = (void*)0;
    int8_t *l_298 = (void*)0;
    int8_t **l_297[9] = {&l_298,&l_298,&l_298,&l_298,&l_298,&l_298,&l_298,&l_298,&l_298};
    int8_t ***l_296 = &l_297[6];
    int i, j;
    for (i = 0; i < 5; i++)
        l_259[i] = &p_329->g_207;
    l_254 = l_254;
    p_329->g_185[0][2][1] = (p_329->g_230.y = ((safe_mod_func_int32_t_s_s((((p_126 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_257.wwyz)).xwxyzxzx)).s3416315254231501, ((VECTOR(uint16_t, 2))(0xD8E7L, 65535UL)).yxxyyyyyxyyxxxyy))).s01, ((VECTOR(int32_t, 8))(l_258.yxxyyyxy)).s27))).yyxy)).y) , l_259[0]) == &p_127), p_329->g_134.x)) || (safe_mul_func_int8_t_s_s(l_258.y, (((p_329->g_271 &= ((((p_329->g_185[0][1][3] == (!(safe_rshift_func_uint8_t_u_s(((p_329->g_268 &= (p_127.f0.f0 , ((l_264 == ((*l_265) = (p_127.f0 , l_264))) <= p_127.f0.f0))) ^ (-1L)), l_269)))) == p_127.f0.f0) , l_270) == l_270)) ^ p_329->g_230.y) > p_126)))));
    for (p_329->g_188 = (-24); (p_329->g_188 <= (-11)); p_329->g_188 = safe_add_func_int8_t_s_s(p_329->g_188, 3))
    { /* block id: 125 */
        VECTOR(uint8_t, 8) l_285 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x31L), 0x31L), 0x31L, 255UL, 0x31L);
        int64_t *l_287 = &p_329->g_247[2][2];
        VECTOR(int8_t, 2) l_292 = (VECTOR(int8_t, 2))((-6L), 0x49L);
        uint64_t *l_293 = &l_269;
        int i;
        (*p_329->g_294) = func_156(l_277, l_273, func_128(((*l_293) = ((safe_sub_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s(0x2677L, p_126)) || (((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(p_329->g_284.s21)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_285.s17)).xxxx)).odd))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_286.s6782ca0c)))).s13))).xxyyxyyy)).s6135516525024442)).s7, (l_287 != l_288))) , p_329->g_289) , p_329->g_188)) >= (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_292.yx)).xxxxxyyyxxxxyxyy)).s3, p_329->g_207.f0.f0))) > l_285.s1), 0x7222L)) | p_329->g_185[0][3][0])), p_126, p_329), l_292.x, p_329);
    }
    (*l_296) = &p_125;
    return &p_329->g_167;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_185 p_329->g_167.f0 p_329->g_201.f0 p_329->g_230 p_329->g_122.f0 p_329->g_247 p_329->g_249
 * writes: p_329->g_167.f0 p_329->g_247 p_329->g_185 p_329->g_249
 */
int8_t * func_128(uint64_t  p_129, int16_t  p_130, struct S6 * p_329)
{ /* block id: 102 */
    int32_t *l_212 = &p_329->g_185[0][1][1];
    uint32_t l_235 = 4294967291UL;
    int8_t *l_250 = (void*)0;
    l_212 = &p_329->g_185[0][3][2];
    if ((safe_sub_func_uint32_t_u_u(0x8EC09F5AL, (safe_mul_func_int8_t_s_s(((*l_212) , p_130), (safe_sub_func_uint8_t_u_u((*l_212), (safe_add_func_int32_t_s_s(p_329->g_167.f0, (*l_212))))))))))
    { /* block id: 104 */
        int64_t l_223[7][2][8] = {{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}},{{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L},{0x08576735B96C2F8AL,0x07F491811AB46CC7L,0x45276D528FEA07E3L,0x45276D528FEA07E3L,0x07F491811AB46CC7L,0x08576735B96C2F8AL,7L,0x78E3D2E3B119A467L}}};
        int64_t *l_231 = (void*)0;
        int64_t *l_232 = (void*)0;
        int64_t *l_233 = (void*)0;
        int64_t *l_234 = (void*)0;
        uint16_t *l_236 = &p_329->g_167.f0;
        int64_t *l_237 = (void*)0;
        int64_t *l_238 = (void*)0;
        int64_t *l_239 = (void*)0;
        int64_t *l_240 = (void*)0;
        int64_t *l_241 = (void*)0;
        int64_t *l_242 = (void*)0;
        int64_t *l_243 = (void*)0;
        int64_t *l_244 = (void*)0;
        int64_t *l_245[2][1][2];
        int32_t l_246 = 0L;
        int32_t *l_248 = &p_329->g_249;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_245[i][j][k] = (void*)0;
            }
        }
        (*l_248) ^= ((*l_212) = (p_329->g_247[0][0] &= (safe_rshift_func_int16_t_s_u((((p_130 , 0x44A4L) | ((((VECTOR(int8_t, 8))((p_329->g_201.f0 == (l_223[3][0][6] | (((void*)0 == &p_329->g_207) >= (l_246 = (((*l_236) = (safe_add_func_uint32_t_u_u((l_223[3][0][6] , ((safe_lshift_func_uint8_t_u_u(255UL, 0)) ^ (safe_lshift_func_uint16_t_u_s((((VECTOR(int32_t, 4))(p_329->g_230.wwwy)).x > ((l_235 ^= 0x25D2DD311D72E1F0L) == p_329->g_201.f0)), 8)))), p_329->g_185[0][0][2]))) > 65527UL))))), 0L, (*l_212), p_329->g_122.f0, 1L, (-2L), 0x53L, (-10L))).s2 | 0x2DL) , l_223[0][1][7])) <= 0x26E7F9DEC0743BC1L), 6))));
        return l_250;
    }
    else
    { /* block id: 112 */
        union U1 *l_252 = &p_329->g_167;
        union U1 **l_251 = &l_252;
        int8_t *l_253 = &p_329->g_188;
        (*l_251) = &p_329->g_167;
        return l_253;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_185 p_329->l_comm_values
 * writes: p_329->g_185
 */
uint16_t  func_147(int8_t  p_148, uint64_t  p_149, int8_t * p_150, union U1 * p_151, union U5 * p_152, struct S6 * p_329)
{ /* block id: 98 */
    int32_t *l_208[1][8] = {{&p_329->g_185[0][2][2],&p_329->g_185[0][2][4],&p_329->g_185[0][2][2],&p_329->g_185[0][2][2],&p_329->g_185[0][2][4],&p_329->g_185[0][2][2],&p_329->g_185[0][2][2],&p_329->g_185[0][2][4]}};
    union U2 *l_209 = &p_329->g_210;
    union U2 **l_211 = &l_209;
    int i, j;
    p_329->g_185[0][3][4] |= 0x1EDF93BDL;
    (*l_211) = l_209;
    return p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 7))];
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_200 p_329->g_204 p_329->g_185
 * writes: p_329->g_200 p_329->g_205
 */
uint8_t  func_153(int32_t * p_154, uint64_t  p_155, struct S6 * p_329)
{ /* block id: 93 */
    int32_t *l_189 = (void*)0;
    int32_t l_190 = 0x351F7D06L;
    int32_t *l_191 = (void*)0;
    int32_t *l_192 = &p_329->g_185[0][1][2];
    int32_t l_193 = 4L;
    int32_t *l_194 = &p_329->g_185[0][2][3];
    int32_t *l_195[6] = {&p_329->g_185[0][3][0],&l_190,&p_329->g_185[0][3][0],&p_329->g_185[0][3][0],&l_190,&p_329->g_185[0][3][0]};
    int16_t l_196 = 0L;
    uint32_t l_197 = 0x78FFEAB3L;
    union U4 **l_202 = &p_329->g_200;
    int i;
    ++l_197;
    (*p_329->g_204) = ((*l_202) = (p_155 , p_329->g_200));
    return p_329->g_185[0][3][2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_156(union U3 * p_157, int32_t * p_158, int8_t * p_159, int32_t  p_160, struct S6 * p_329)
{ /* block id: 91 */
    return &p_329->g_185[0][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_178 p_329->g_134 p_329->g_comm_values p_329->l_comm_values
 * writes: p_329->g_185
 */
int32_t * func_162(union U1 * p_163, union U5  p_164, uint32_t  p_165, struct S6 * p_329)
{ /* block id: 86 */
    VECTOR(uint8_t, 8) l_169 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    struct S0 l_170[5][5] = {{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}},{{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}}};
    struct S0 l_171[4][6] = {{{0x8BF9470FL},{4294967295UL},{0x8BF9470FL},{0x8BF9470FL},{4294967295UL},{0x8BF9470FL}},{{0x8BF9470FL},{4294967295UL},{0x8BF9470FL},{0x8BF9470FL},{4294967295UL},{0x8BF9470FL}},{{0x8BF9470FL},{4294967295UL},{0x8BF9470FL},{0x8BF9470FL},{4294967295UL},{0x8BF9470FL}},{{0x8BF9470FL},{4294967295UL},{0x8BF9470FL},{0x8BF9470FL},{4294967295UL},{0x8BF9470FL}}};
    int32_t l_183 = (-1L);
    int32_t *l_184 = &p_329->g_185[0][3][0];
    int32_t *l_186 = &p_329->g_185[0][3][3];
    int i, j;
    (*l_184) = ((0x3828B4F0L >= ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(1UL, 0x8AL, 5UL, 4UL, ((VECTOR(uint8_t, 8))(0x82L, 8UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_169.s3441)).wwzwwyww)).hi)), 0xB8L, 0xD3L)), ((((l_171[1][1] = l_170[3][3]) , p_164.f0.f0) > (safe_add_func_int32_t_s_s(0x134FB932L, l_170[3][3].f0))) | (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((p_329->g_178 , ((((l_183 = (safe_rshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(p_329->g_134.y, p_329->g_comm_values[p_329->tid])), l_169.s7))) , 7UL) == p_165) ^ 0x56D82E6C5166A148L)), p_164.f0.f0)) , p_329->g_134.y), p_329->g_comm_values[p_329->tid]))), ((VECTOR(uint8_t, 2))(5UL)), 9UL)).s8c53)).x >= p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 7))]) <= 1UL)) && 0x2D3B0460979C41ABL);
    return l_186;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S6 c_330;
    struct S6* p_329 = &c_330;
    struct S6 c_331 = {
        {0}, // p_329->g_109
        &p_329->g_109, // p_329->g_108
        {1UL}, // p_329->g_122
        {{&p_329->g_122},{&p_329->g_122},{&p_329->g_122},{&p_329->g_122},{&p_329->g_122},{&p_329->g_122}}, // p_329->g_121
        (VECTOR(uint8_t, 2))(5UL, 0UL), // p_329->g_134
        {0x271CL}, // p_329->g_167
        {0L}, // p_329->g_178
        {{{0x63E55E6CL,0x12883884L,(-1L),0x12883884L,0x63E55E6CL},{0x63E55E6CL,0x12883884L,(-1L),0x12883884L,0x63E55E6CL},{0x63E55E6CL,0x12883884L,(-1L),0x12883884L,0x63E55E6CL},{0x63E55E6CL,0x12883884L,(-1L),0x12883884L,0x63E55E6CL}}}, // p_329->g_185
        (-1L), // p_329->g_188
        {18446744073709551615UL}, // p_329->g_201
        &p_329->g_201, // p_329->g_200
        (void*)0, // p_329->g_203
        &p_329->g_201, // p_329->g_205
        &p_329->g_205, // p_329->g_204
        {{0x4E9515FBL}}, // p_329->g_207
        {{{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0}},{{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0},{(void*)0,&p_329->g_207,&p_329->g_207,&p_329->g_207,&p_329->g_207,(void*)0,&p_329->g_207,(void*)0}}}, // p_329->g_206
        {1L}, // p_329->g_210
        (VECTOR(int32_t, 4))(0x41A7B2F3L, (VECTOR(int32_t, 2))(0x41A7B2F3L, 0x53A4A643L), 0x53A4A643L), // p_329->g_230
        {{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}}, // p_329->g_247
        4L, // p_329->g_249
        1L, // p_329->g_268
        0x35F6FEA2L, // p_329->g_271
        (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL), // p_329->g_284
        {0x7B93EAB8D326D1E2L}, // p_329->g_289
        &p_329->g_185[0][2][0], // p_329->g_295
        &p_329->g_295, // p_329->g_294
        (-1L), // p_329->g_314
        &p_329->g_314, // p_329->g_313
        &p_329->g_289, // p_329->g_318
        &p_329->g_318, // p_329->g_317
        (void*)0, // p_329->g_321
        &p_329->g_321, // p_329->g_320
        &p_329->g_121[5][0], // p_329->g_323
        &p_329->g_323, // p_329->g_322
        &p_329->g_295, // p_329->g_325
        0, // p_329->v_collective
        sequence_input[get_global_id(0)], // p_329->global_0_offset
        sequence_input[get_global_id(1)], // p_329->global_1_offset
        sequence_input[get_global_id(2)], // p_329->global_2_offset
        sequence_input[get_local_id(0)], // p_329->local_0_offset
        sequence_input[get_local_id(1)], // p_329->local_1_offset
        sequence_input[get_local_id(2)], // p_329->local_2_offset
        sequence_input[get_group_id(0)], // p_329->group_0_offset
        sequence_input[get_group_id(1)], // p_329->group_1_offset
        sequence_input[get_group_id(2)], // p_329->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_329->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_330 = c_331;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_329);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_329->g_122.f0, "p_329->g_122.f0", print_hash_value);
    transparent_crc(p_329->g_134.x, "p_329->g_134.x", print_hash_value);
    transparent_crc(p_329->g_134.y, "p_329->g_134.y", print_hash_value);
    transparent_crc(p_329->g_167.f0, "p_329->g_167.f0", print_hash_value);
    transparent_crc(p_329->g_178.f0, "p_329->g_178.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_329->g_185[i][j][k], "p_329->g_185[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_329->g_188, "p_329->g_188", print_hash_value);
    transparent_crc(p_329->g_201.f0, "p_329->g_201.f0", print_hash_value);
    transparent_crc(p_329->g_207.f0.f0, "p_329->g_207.f0.f0", print_hash_value);
    transparent_crc(p_329->g_210.f0, "p_329->g_210.f0", print_hash_value);
    transparent_crc(p_329->g_230.x, "p_329->g_230.x", print_hash_value);
    transparent_crc(p_329->g_230.y, "p_329->g_230.y", print_hash_value);
    transparent_crc(p_329->g_230.z, "p_329->g_230.z", print_hash_value);
    transparent_crc(p_329->g_230.w, "p_329->g_230.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_329->g_247[i][j], "p_329->g_247[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_329->g_249, "p_329->g_249", print_hash_value);
    transparent_crc(p_329->g_268, "p_329->g_268", print_hash_value);
    transparent_crc(p_329->g_271, "p_329->g_271", print_hash_value);
    transparent_crc(p_329->g_284.s0, "p_329->g_284.s0", print_hash_value);
    transparent_crc(p_329->g_284.s1, "p_329->g_284.s1", print_hash_value);
    transparent_crc(p_329->g_284.s2, "p_329->g_284.s2", print_hash_value);
    transparent_crc(p_329->g_284.s3, "p_329->g_284.s3", print_hash_value);
    transparent_crc(p_329->g_284.s4, "p_329->g_284.s4", print_hash_value);
    transparent_crc(p_329->g_284.s5, "p_329->g_284.s5", print_hash_value);
    transparent_crc(p_329->g_284.s6, "p_329->g_284.s6", print_hash_value);
    transparent_crc(p_329->g_284.s7, "p_329->g_284.s7", print_hash_value);
    transparent_crc(p_329->g_289.f0, "p_329->g_289.f0", print_hash_value);
    transparent_crc(p_329->g_314, "p_329->g_314", print_hash_value);
    transparent_crc(p_329->v_collective, "p_329->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 47; i++)
            transparent_crc(p_329->g_special_values[i + 47 * get_linear_group_id()], "p_329->g_special_values[i + 47 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_329->l_comm_values[get_linear_local_id()], "p_329->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_329->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_329->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
