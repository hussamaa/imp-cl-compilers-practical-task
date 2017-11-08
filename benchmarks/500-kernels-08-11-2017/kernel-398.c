// --atomics 66 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 32,14,18 -l 2,14,6
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

__constant uint32_t permutations[10][168] = {
{40,73,55,159,62,166,157,136,116,167,66,32,23,130,6,88,139,100,102,89,127,135,29,145,125,37,7,115,0,142,18,107,113,144,28,137,119,96,146,80,161,83,14,140,112,98,75,148,131,124,64,152,9,13,110,20,77,76,27,65,38,25,120,61,123,53,46,68,138,33,97,19,133,104,34,164,103,155,48,153,132,67,156,86,158,30,8,45,106,22,81,50,59,105,141,35,70,74,5,2,72,122,63,160,4,51,99,129,94,56,36,162,54,44,1,114,41,79,154,143,117,71,90,52,57,150,82,149,47,134,101,15,78,92,42,17,21,39,111,126,16,12,11,118,43,95,87,91,109,24,121,58,163,93,60,85,165,31,151,147,10,69,3,108,84,49,128,26}, // permutation 0
{123,33,145,136,40,139,1,5,57,116,121,102,4,72,62,21,32,148,150,18,55,155,45,56,51,34,65,73,0,76,95,8,49,16,54,151,36,141,91,28,75,129,15,22,162,90,60,112,29,96,88,89,122,105,160,42,137,10,111,157,86,97,109,140,120,108,104,81,6,41,23,147,103,106,78,128,47,92,126,84,93,50,143,20,77,14,153,133,110,166,70,37,59,159,7,124,2,58,46,24,98,53,125,94,67,79,12,99,127,64,66,134,80,25,85,149,30,144,132,87,52,35,39,74,135,101,100,113,82,48,9,38,17,158,165,26,130,27,167,71,119,69,142,13,117,44,107,161,114,156,164,68,31,138,19,61,63,83,152,3,11,146,43,154,163,118,131,115}, // permutation 1
{159,101,91,73,97,122,61,114,30,65,132,118,71,44,66,94,156,5,123,49,18,167,78,54,33,68,153,36,11,2,25,40,81,92,145,160,24,139,126,130,9,105,129,119,0,56,138,134,135,100,22,148,93,50,55,115,39,70,113,166,96,20,26,62,7,121,162,116,140,133,79,4,41,23,21,57,84,117,14,1,45,35,154,17,19,88,163,106,48,128,107,136,155,86,164,149,98,42,59,43,111,3,51,29,150,77,144,72,104,108,37,137,151,147,85,46,125,161,89,63,69,143,142,131,28,32,16,27,80,12,120,157,8,102,152,13,127,67,53,75,87,74,76,141,82,99,112,110,124,158,47,109,58,60,52,31,64,103,15,95,10,34,165,146,83,6,90,38}, // permutation 2
{127,164,30,166,53,96,112,1,81,101,38,136,151,79,12,40,11,121,59,85,64,37,130,102,7,19,95,23,56,122,2,49,146,152,15,62,92,34,90,157,47,147,145,46,3,119,74,0,10,65,144,83,128,76,94,89,6,58,162,142,133,16,20,70,126,129,21,24,111,106,141,13,26,155,80,73,105,158,18,43,97,78,115,27,44,109,41,72,139,39,113,33,8,148,98,87,123,161,52,150,132,60,22,154,71,149,69,77,84,108,42,88,140,120,48,91,104,5,32,160,36,86,118,114,66,29,134,55,67,125,159,45,25,17,131,163,117,31,54,156,99,107,9,93,82,165,68,167,103,137,116,138,135,14,61,75,57,110,143,51,28,153,50,35,124,100,63,4}, // permutation 3
{70,122,135,108,84,129,110,92,106,160,113,62,50,1,86,61,141,77,114,25,80,45,123,5,78,34,152,154,118,73,130,99,40,68,27,147,149,21,104,143,94,56,30,19,90,4,146,66,107,12,133,134,96,41,57,9,144,124,115,63,36,8,156,13,3,157,26,140,22,166,37,125,55,59,76,98,127,85,162,52,148,145,43,29,83,153,64,138,88,74,159,82,126,128,97,93,44,119,15,58,10,7,51,150,60,14,165,101,39,81,28,18,151,161,42,132,121,33,105,65,112,79,75,35,95,53,67,23,131,120,167,71,32,48,89,0,158,137,6,16,72,49,136,139,117,91,111,163,24,102,2,116,47,155,31,69,164,103,17,109,11,38,46,142,100,87,20,54}, // permutation 4
{73,78,144,46,44,35,1,88,157,80,161,40,167,130,99,124,119,14,67,74,47,153,143,105,150,55,70,154,96,58,90,129,54,6,101,19,5,98,108,43,22,51,116,50,155,165,25,83,121,103,97,38,28,162,146,102,85,107,128,117,62,16,31,15,69,100,57,56,11,39,63,113,140,33,34,10,45,64,41,139,66,20,126,120,134,18,32,92,84,123,159,79,49,53,4,72,21,75,13,136,160,12,52,48,24,141,115,94,142,81,60,0,42,122,137,127,29,95,158,132,104,118,65,68,133,8,76,151,125,27,59,163,156,164,7,77,26,89,135,166,106,111,145,36,91,138,112,82,109,23,61,110,148,114,2,87,93,37,30,131,17,149,3,71,152,9,86,147}, // permutation 5
{13,43,100,130,83,66,10,149,137,25,69,59,106,144,140,46,76,152,35,157,84,18,53,16,24,54,1,88,133,86,71,112,68,115,128,11,146,62,77,57,160,139,6,113,161,108,4,38,102,163,127,79,145,153,82,116,104,74,23,107,9,15,97,61,166,63,136,26,50,40,154,159,141,93,65,165,70,103,0,123,155,47,56,60,122,73,19,7,87,120,20,138,148,14,51,27,41,90,8,72,126,3,129,85,67,105,167,48,81,92,121,119,55,75,124,150,29,162,58,31,135,42,64,32,44,28,2,156,158,33,17,89,34,30,45,131,118,164,91,21,94,147,114,110,49,36,132,109,78,143,111,95,125,98,80,142,101,37,96,12,39,99,22,52,151,5,117,134}, // permutation 6
{12,35,134,30,24,86,130,0,28,165,118,66,148,11,123,161,41,69,17,146,64,76,157,112,94,92,109,88,162,81,131,121,5,132,155,22,33,95,85,15,50,48,136,160,27,151,79,90,59,87,73,39,91,18,3,116,115,114,9,71,32,97,42,54,141,45,166,21,125,23,38,126,128,158,72,31,99,70,25,103,57,44,159,84,60,122,8,67,83,4,82,137,46,14,152,61,55,106,20,142,108,53,75,13,167,40,10,147,77,65,16,37,43,80,26,104,120,62,100,56,111,129,138,63,139,145,101,98,164,133,19,78,135,52,110,68,49,47,74,93,117,96,149,143,34,36,89,1,119,102,105,58,124,153,163,29,107,144,150,156,2,154,127,140,6,7,113,51}, // permutation 7
{16,8,155,158,26,129,63,124,137,72,111,128,61,42,136,62,86,149,29,103,7,68,100,49,17,23,54,73,107,11,35,37,146,130,13,47,75,99,22,162,78,57,94,28,116,65,48,91,117,164,33,90,118,77,95,150,138,141,153,52,109,56,131,20,115,74,50,45,120,93,145,112,4,30,144,80,84,104,27,36,32,121,79,167,43,123,81,151,14,24,44,98,41,166,163,96,85,126,67,59,97,69,39,51,139,38,132,159,114,46,152,76,133,108,106,113,122,157,161,101,125,3,34,134,40,165,87,135,147,88,12,25,5,9,10,2,71,19,70,148,53,1,18,15,160,119,102,140,89,21,156,127,6,66,154,92,105,83,58,60,0,55,31,143,64,110,82,142}, // permutation 8
{13,145,70,140,147,108,85,65,104,21,1,151,123,52,41,117,38,120,141,5,39,84,80,40,49,98,83,45,18,15,159,152,29,14,128,131,56,136,111,68,158,109,42,8,143,33,96,74,110,44,87,163,62,86,17,112,72,126,129,4,35,165,89,167,60,150,121,25,37,113,23,63,95,78,69,24,124,27,26,28,88,127,43,59,51,90,73,164,154,102,11,46,149,19,92,119,130,12,0,32,54,97,64,93,153,116,132,79,6,142,22,81,34,57,16,138,67,101,36,77,118,31,82,122,76,107,162,66,55,99,47,139,7,53,115,2,75,155,9,137,103,134,125,144,71,114,58,135,10,61,166,48,146,100,91,133,106,157,50,148,160,156,161,105,20,94,3,30} // permutation 9
};

// Seed: 3494785394

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int64_t  f1;
   volatile int32_t  f2;
   uint32_t  f3;
   int64_t  f4;
   int64_t  f5;
   uint64_t  f6;
   int64_t  f7;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint8_t  f3;
   int64_t  f4;
   int16_t  f5;
   int16_t  f6;
   uint32_t  f7;
};

struct S2 {
   uint64_t  f0;
   uint64_t  f1;
   volatile int32_t  f2;
   volatile int32_t  f3;
   volatile uint8_t  f4;
   uint32_t  f5;
   volatile int32_t  f6;
   volatile int16_t  f7;
   uint64_t  f8;
};

struct S3 {
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
uint16_t  func_1(struct S3 * p_186);
int64_t  func_3(int16_t  p_4, struct S3 * p_186);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_186->g_comm_values p_186->l_comm_values
 * writes:
 */
uint16_t  func_1(struct S3 * p_186)
{ /* block id: 4 */
    uint16_t l_2[2];
    int32_t l_128 = 4L;
    VECTOR(int32_t, 2) l_183 = (VECTOR(int32_t, 2))(0L, 0x1168C6D5L);
    int32_t *l_184 = (void*)0;
    int32_t *l_185 = &l_128;
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 65531UL;
    l_128 &= (((l_2[0] > l_2[0]) > func_3(p_186->g_comm_values[p_186->tid], p_186)) < l_2[0]);
    if ((atomic_inc(&p_186->g_atomic_input[66 * get_linear_group_id() + 34]) == 8))
    { /* block id: 113 */
        int32_t l_129 = (-1L);
        for (l_129 = (-28); (l_129 >= 24); l_129 = safe_add_func_int8_t_s_s(l_129, 9))
        { /* block id: 116 */
            int32_t l_132 = (-1L);
            uint16_t l_163 = 9UL;
            int8_t l_164 = 0x3CL;
            VECTOR(int32_t, 16) l_165 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x77252120L), 0x77252120L), 0x77252120L, (-1L), 0x77252120L, (VECTOR(int32_t, 2))((-1L), 0x77252120L), (VECTOR(int32_t, 2))((-1L), 0x77252120L), (-1L), 0x77252120L, (-1L), 0x77252120L);
            int64_t l_166 = 0x7C8B555A2FE9D70BL;
            int32_t l_167 = (-8L);
            int64_t l_168 = 0L;
            VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x040E07A6L), 0x040E07A6L), 0x040E07A6L, 0L, 0x040E07A6L, (VECTOR(int32_t, 2))(0L, 0x040E07A6L), (VECTOR(int32_t, 2))(0L, 0x040E07A6L), 0L, 0x040E07A6L, 0L, 0x040E07A6L);
            uint32_t l_170 = 0x55FC125FL;
            VECTOR(int32_t, 8) l_171 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L);
            int32_t l_172 = 0x5E2D5F28L;
            int64_t l_173 = 0x6CA1D19CB76B11A2L;
            uint32_t l_174 = 4294967295UL;
            int32_t l_175 = 0x5BE3D278L;
            uint64_t l_176 = 18446744073709551614UL;
            int64_t l_177 = 0x17E9293A9199F791L;
            uint64_t l_178 = 18446744073709551608UL;
            int16_t l_179[8][5][6] = {{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}},{{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)},{3L,3L,1L,0x0097L,0L,(-6L)}}};
            uint32_t l_180 = 0UL;
            int i, j, k;
            for (l_132 = 0; (l_132 >= (-13)); l_132--)
            { /* block id: 119 */
                VECTOR(int32_t, 4) l_135 = (VECTOR(int32_t, 4))(0x39D8917AL, (VECTOR(int32_t, 2))(0x39D8917AL, (-6L)), (-6L));
                VECTOR(int32_t, 8) l_136 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x6ABF2251L), 0x6ABF2251L), 0x6ABF2251L, (-8L), 0x6ABF2251L);
                struct S0 l_137 = {-6L,-1L,0x1FF62609L,4294967293UL,0x43726885EA758C6BL,9L,18446744073709551610UL,-1L};/* VOLATILE GLOBAL l_137 */
                int32_t l_138 = 8L;
                uint32_t l_139 = 0x00197DB5L;
                uint32_t l_140 = 4294967293UL;
                struct S0 l_141 = {1L,1L,-1L,0xBACE53A0L,1L,2L,0x1F6F2E04991E0ECAL,0x33B253682DA734ADL};/* VOLATILE GLOBAL l_141 */
                VECTOR(int32_t, 16) l_142 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x246BA99FL), 0x246BA99FL), 0x246BA99FL, (-1L), 0x246BA99FL, (VECTOR(int32_t, 2))((-1L), 0x246BA99FL), (VECTOR(int32_t, 2))((-1L), 0x246BA99FL), (-1L), 0x246BA99FL, (-1L), 0x246BA99FL);
                VECTOR(int32_t, 4) l_143 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                int32_t l_144 = 1L;
                VECTOR(int16_t, 16) l_145 = (VECTOR(int16_t, 16))(0x3CE8L, (VECTOR(int16_t, 4))(0x3CE8L, (VECTOR(int16_t, 2))(0x3CE8L, 0L), 0L), 0L, 0x3CE8L, 0L, (VECTOR(int16_t, 2))(0x3CE8L, 0L), (VECTOR(int16_t, 2))(0x3CE8L, 0L), 0x3CE8L, 0L, 0x3CE8L, 0L);
                VECTOR(uint16_t, 4) l_146 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65531UL), 65531UL);
                VECTOR(uint16_t, 8) l_147 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x5FA5L), 0x5FA5L), 0x5FA5L, 9UL, 0x5FA5L);
                VECTOR(uint16_t, 4) l_148 = (VECTOR(uint16_t, 4))(0xDD1AL, (VECTOR(uint16_t, 2))(0xDD1AL, 0x27C7L), 0x27C7L);
                VECTOR(uint16_t, 4) l_149 = (VECTOR(uint16_t, 4))(0xC9A2L, (VECTOR(uint16_t, 2))(0xC9A2L, 65535UL), 65535UL);
                uint64_t l_150 = 18446744073709551613UL;
                int32_t l_151 = 0x01F5611FL;
                int32_t l_152 = (-7L);
                int64_t l_153 = (-1L);
                int8_t l_154 = 0x1CL;
                uint64_t l_155 = 0x836C0247A357FC2DL;
                int32_t *l_158 = (void*)0;
                int32_t *l_159 = &l_152;
                uint8_t l_160 = 0UL;
                uint32_t l_161 = 4294967286UL;
                uint8_t l_162 = 1UL;
                int i;
                l_154 ^= (l_153 = ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(0L, (-1L), ((VECTOR(int32_t, 2))(1L, 0x74E354F5L)), ((VECTOR(int32_t, 8))(0L, 0x59ACDC3DL, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_135.yzzyzxwz)).s30))), ((VECTOR(int32_t, 2))(l_136.s13)), 0x5A484C74L, (-1L))), (l_137 , l_138), (-1L), 0x59B12E33L, (-1L))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_139, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(0x006EA017L, (-6L), (l_151 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_140, 0x405694DDL, (-1L), 7L)), (int32_t)(l_141 , ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_142.sda0db310052acf59)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_143.zyxxxyzzzwwyyyyy)).s52)).xyxyxyxxyyxyyyxy, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_144, 0x33D2L, ((VECTOR(int16_t, 16))(l_145.s2f1d17cbe859488b)).s6, (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_146.xx)))), 0x55CFL, 65534UL)), 0UL, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(l_147.s52)).xxxy, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(l_148.yz)).xyyy, ((VECTOR(uint16_t, 2))(0x654EL, 0x0886L)).yxyx)))))).lo, ((VECTOR(uint16_t, 4))(l_149.wxzy)).hi))), 0xBEEAL)).s2 , l_150), 1L, ((VECTOR(int16_t, 2))(1L)), (-1L))))).s55, ((VECTOR(int16_t, 2))(0x63A5L))))), ((VECTOR(int16_t, 2))((-1L)))))))).yxxyxxyx, ((VECTOR(uint16_t, 8))(1UL))))).s1215165175553207))), ((VECTOR(int32_t, 16))(0x262085F3L)), ((VECTOR(int32_t, 16))(0L))))), ((VECTOR(int32_t, 16))(0x4E76E706L))))), ((VECTOR(int32_t, 16))(0x6CE06D04L))))).s1)))).lo, ((VECTOR(int32_t, 2))(0x2665165BL))))).yyxxxxyx)).s7), 0x7FB7F731L, l_152, 0x18895E42L, (-1L), 0x27922238L)).s01, ((VECTOR(int32_t, 2))(0x0CD3D3DFL))))), 0L)).yxzyzzzxwyyxwzzz)).sc2)).xyxxxyyyxyxyxyxy)))).s5e, ((VECTOR(int32_t, 2))(0x6A01EA18L)), ((VECTOR(int32_t, 2))(0x44433856L))))))).yyxxyxyy))).even, ((VECTOR(int32_t, 4))(0x47EC100DL))))).y);
                l_155++;
                l_159 = l_158;
                l_162 = (l_161 ^= l_160);
            }
            l_179[7][3][0] &= (l_178 = (l_177 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_163, l_164, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x1D19148BL, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_165.s971debe7)).s13, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x6B9C2185L, (-5L), 0x260C09D1L, 0x2BD2FAB7L)).odd))))), (-1L))).even)), l_166, l_167, ((VECTOR(int32_t, 2))(8L, 0x06EF7DE8L)), l_168, ((VECTOR(int32_t, 2))((-2L), 0x0EBDDEA6L)), 0x32F45397L, 0x012C4547L, (l_170 ^= ((VECTOR(int32_t, 2))(l_169.s73)).odd), 1L, 0L)).sfe, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_171.s05)), l_172, (l_171.s2 ^= (((l_173 , l_174) , l_175) , l_176)), (-1L), 0L, 0x614E49BFL, 0L)).s70, ((VECTOR(int32_t, 2))(0L))))).xyxx, ((VECTOR(int32_t, 4))(0x390CCFE5L)), ((VECTOR(int32_t, 4))(0x05023016L))))), ((VECTOR(int32_t, 4))(0x55AB82B6L)), ((VECTOR(int32_t, 4))(0x4C4634F6L))))).zywxwzwxywxywzxw)).s7));
            l_180--;
        }
        unsigned int result = 0;
        result += l_129;
        atomic_add(&p_186->g_special_values[66 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 135 */
        (1 + 1);
    }
    (*l_185) = ((VECTOR(int32_t, 2))(l_183.yy)).odd;
    return p_186->g_comm_values[p_186->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_186->l_comm_values
 * writes:
 */
int64_t  func_3(int16_t  p_4, struct S3 * p_186)
{ /* block id: 5 */
    if ((atomic_inc(&p_186->g_atomic_input[66 * get_linear_group_id() + 41]) == 9))
    { /* block id: 7 */
        VECTOR(int32_t, 2) l_5 = (VECTOR(int32_t, 2))(0x44C3F4F8L, (-5L));
        VECTOR(int32_t, 4) l_6 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x4E5A945CL), 0x4E5A945CL);
        uint8_t l_7 = 6UL;
        int32_t *l_8 = (void*)0;
        int32_t *l_9 = (void*)0;
        int16_t l_10 = 0x2445L;
        VECTOR(int32_t, 2) l_11 = (VECTOR(int32_t, 2))(0x758B39D2L, (-2L));
        VECTOR(int32_t, 16) l_12 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4254E7F1L), 0x4254E7F1L), 0x4254E7F1L, 0L, 0x4254E7F1L, (VECTOR(int32_t, 2))(0L, 0x4254E7F1L), (VECTOR(int32_t, 2))(0L, 0x4254E7F1L), 0L, 0x4254E7F1L, 0L, 0x4254E7F1L);
        int i;
        l_7 ^= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_5.yx)).yyxx, ((VECTOR(int32_t, 4))(l_6.wxyz))))).x;
        l_9 = l_8;
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_10, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_11.xx)))), 7L, 2L, 1L, 0x79DC8669L, (-5L))).s5226712451170660)).s5fcb, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_12.s3b)))).xyyy))).odd)).even)
        { /* block id: 10 */
            uint8_t l_13 = 1UL;
            if (l_13)
            { /* block id: 11 */
                int32_t l_15 = 1L;
                int32_t *l_14 = &l_15;
                l_14 = (void*)0;
            }
            else
            { /* block id: 13 */
                int32_t l_16 = 0x04B52DD8L;
                for (l_16 = 0; (l_16 != 10); l_16 = safe_add_func_uint8_t_u_u(l_16, 6))
                { /* block id: 16 */
                    int32_t l_19[7] = {(-9L),0x25575278L,(-9L),(-9L),0x25575278L,(-9L),(-9L)};
                    int i;
                    l_9 = (void*)0;
                    for (l_19[2] = (-4); (l_19[2] > 5); ++l_19[2])
                    { /* block id: 20 */
                        uint8_t l_22 = 0xE8L;
                        struct S1 l_23 = {8UL,0x3E4F6F48L,0x6E1D67A3L,255UL,0x56A96DAD8BE776E9L,-1L,0L,0xAACC702BL};
                        struct S1 l_24 = {0UL,1L,-9L,0x65L,0x62E31B5465392FB3L,0x283AL,0x6CF6L,0x70783DB4L};
                        uint32_t l_25 = 0x6722525AL;
                        uint32_t l_26 = 0x564FCBDFL;
                        l_5.y |= (l_22 = 1L);
                        l_24 = l_23;
                        l_12.s7 |= l_25;
                        l_26++;
                    }
                }
                for (l_16 = 0; (l_16 != 18); ++l_16)
                { /* block id: 30 */
                    VECTOR(int8_t, 16) l_31 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int8_t, 2))((-1L), (-5L)), (VECTOR(int8_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L));
                    struct S2 l_32[5] = {{8UL,0x8AC39FBD05855809L,5L,0x1A665386L,7UL,6UL,0x51CF616DL,1L,0xDE384C7D0E75FCAAL},{8UL,0x8AC39FBD05855809L,5L,0x1A665386L,7UL,6UL,0x51CF616DL,1L,0xDE384C7D0E75FCAAL},{8UL,0x8AC39FBD05855809L,5L,0x1A665386L,7UL,6UL,0x51CF616DL,1L,0xDE384C7D0E75FCAAL},{8UL,0x8AC39FBD05855809L,5L,0x1A665386L,7UL,6UL,0x51CF616DL,1L,0xDE384C7D0E75FCAAL},{8UL,0x8AC39FBD05855809L,5L,0x1A665386L,7UL,6UL,0x51CF616DL,1L,0xDE384C7D0E75FCAAL}};
                    uint16_t l_33 = 65531UL;
                    VECTOR(uint8_t, 8) l_34 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xA6L), 0xA6L), 0xA6L, 1UL, 0xA6L);
                    struct S2 l_35 = {1UL,1UL,-1L,0x50C570B9L,0UL,4294967292UL,1L,1L,0xEAAC298B4A01C31EL};/* VOLATILE GLOBAL l_35 */
                    VECTOR(int8_t, 16) l_36 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x22L), 0x22L), 0x22L, (-5L), 0x22L, (VECTOR(int8_t, 2))((-5L), 0x22L), (VECTOR(int8_t, 2))((-5L), 0x22L), (-5L), 0x22L, (-5L), 0x22L);
                    VECTOR(uint8_t, 8) l_37 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x77L), 0x77L), 0x77L, 5UL, 0x77L);
                    uint64_t l_38[7] = {0UL,18446744073709551606UL,0UL,0UL,18446744073709551606UL,0UL,0UL};
                    int64_t l_39 = 0L;
                    VECTOR(uint8_t, 4) l_40 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 247UL), 247UL);
                    VECTOR(uint8_t, 4) l_41 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL);
                    VECTOR(uint8_t, 4) l_42 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
                    int8_t l_43 = 0x4AL;
                    VECTOR(uint8_t, 16) l_44 = (VECTOR(uint8_t, 16))(0x5CL, (VECTOR(uint8_t, 4))(0x5CL, (VECTOR(uint8_t, 2))(0x5CL, 9UL), 9UL), 9UL, 0x5CL, 9UL, (VECTOR(uint8_t, 2))(0x5CL, 9UL), (VECTOR(uint8_t, 2))(0x5CL, 9UL), 0x5CL, 9UL, 0x5CL, 9UL);
                    uint8_t l_45[1][4][8] = {{{0x77L,0xEFL,1UL,0x34L,0x3FL,0x77L,0x34L,0x9DL},{0x77L,0xEFL,1UL,0x34L,0x3FL,0x77L,0x34L,0x9DL},{0x77L,0xEFL,1UL,0x34L,0x3FL,0x77L,0x34L,0x9DL},{0x77L,0xEFL,1UL,0x34L,0x3FL,0x77L,0x34L,0x9DL}}};
                    int16_t l_46 = 1L;
                    int32_t l_47 = 1L;
                    int32_t l_48 = (-1L);
                    int64_t l_49 = 0L;
                    int16_t l_50 = 5L;
                    int16_t l_51 = 0L;
                    int64_t l_52 = (-1L);
                    uint32_t l_53 = 0x437DEDC8L;
                    int64_t l_54 = 0x623CC279608170AEL;
                    int64_t l_55 = 0x4930389EC31A1128L;
                    uint8_t l_56 = 0x9AL;
                    int i, j, k;
                    l_53 &= (l_6.y |= (l_52 |= ((((l_49 = (l_10 = ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(l_31.sf1)), ((VECTOR(uint8_t, 16))(GROUP_DIVERGE(1, 1), 255UL, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x3CL, 0x66L)).xxxxyxxxxyyxyxxy)).sfdca)).hi, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x4BL, (-2L))).yxyxyxyy)).s0011544641534546, (int8_t)(l_32[0] , 3L)))).sd1))).xxyyyxxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(l_33, 0x9FL, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(l_34.s57))))), 0x7BL, (l_35 , (l_7 ^= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_36.s5c)).yyxy))))))).wzzxwxxx))).hi)).xzxxzywzyxxzyxzw, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_37.s43)), 6UL, 253UL)).zxxxwyxxyywwzzyx)), ((VECTOR(uint8_t, 2))(0xBDL, 251UL)).xyxyxyyyxxxxxyyx))).s79f8, ((VECTOR(uint8_t, 2))(0UL, 255UL)).yyyx))))).w)), 255UL, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(0x67L, l_38[1], FAKE_DIVERGE(p_186->global_0_offset, get_global_id(0), 10), 0x97L, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x2EL, 1UL)).xxxy)).xwxyxwyx)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(8UL, GROUP_DIVERGE(0, 1), 1UL, l_39, 255UL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(l_40.xwwyyzwzzzxyzwzx)).s53, ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_41.xzzy)).wxwyxxxywwwyyxzx)))).s55, ((VECTOR(uint8_t, 2))(l_42.xy))))).yyxy)).hi, ((VECTOR(uint8_t, 2))(0xC9L, 246UL))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((l_7 ^= l_43), (l_7 &= ((VECTOR(uint8_t, 4))(l_44.sb745)).w), 5UL, 248UL)).hi))))), 0x89L)), (uint8_t)l_45[0][1][5]))).even))))))))).s77, ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(253UL))))).xyyxyyyx, (uint8_t)0UL))), 0xDCL)), ((VECTOR(uint8_t, 16))(252UL))))).hi)).even, ((VECTOR(uint8_t, 4))(0x26L)), ((VECTOR(uint8_t, 4))(246UL))))).wzxwxxzw)), ((VECTOR(uint8_t, 8))(255UL))))))).s67)).yyyxyyxyxyxxyxyx)).s4, ((VECTOR(uint8_t, 2))(0x48L)), l_46, 0x8BL, 6UL, l_47, ((VECTOR(uint8_t, 2))(0UL)), l_48, 1UL, ((VECTOR(uint8_t, 2))(0x38L)), 0xA6L)).sf5))).lo)) , (-2L)) , l_50) , l_51)));
                    l_11.y = l_54;
                    l_56 = l_55;
                }
                for (l_16 = 23; (l_16 > 26); l_16 = safe_add_func_int32_t_s_s(l_16, 6))
                { /* block id: 44 */
                    int32_t l_59 = (-4L);
                    int32_t l_79 = 0x49F0A9E8L;
                    for (l_59 = (-3); (l_59 < (-28)); --l_59)
                    { /* block id: 47 */
                        int8_t l_62 = 8L;
                        uint32_t l_63 = 4294967295UL;
                        int32_t l_68 = 7L;
                        int32_t *l_67 = &l_68;
                        int32_t **l_66 = &l_67;
                        int32_t **l_69[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t **l_70[9][3][9] = {{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}},{{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,(void*)0,(void*)0,&l_67}}};
                        int i, j, k;
                        l_12.sd = l_62;
                        l_63++;
                        l_69[6] = l_66;
                        l_70[5][1][1] = (void*)0;
                    }
                    for (l_59 = (-19); (l_59 > 22); ++l_59)
                    { /* block id: 55 */
                        int32_t l_74 = 0x17E6F66AL;
                        int32_t *l_73 = &l_74;
                        int32_t **l_75 = (void*)0;
                        uint32_t l_76 = 4294967295UL;
                        struct S1 l_77 = {0x6641FEA6L,-1L,0x6F9D6693L,255UL,1L,0x5F4AL,0L,0xA03D7E57L};
                        int32_t l_78[3][4][2] = {{{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)}},{{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)}},{{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)},{0x5010A2F6L,(-4L)}}};
                        int i, j, k;
                        l_9 = (l_8 = l_73);
                        l_75 = (void*)0;
                        (*l_8) = l_76;
                        l_6.x |= ((*l_8) &= (l_77 , l_78[1][1][0]));
                    }
                    l_12.s1 = (l_79 |= (l_59 = 0x3F1E6694L));
                }
            }
            for (l_13 = (-14); (l_13 < 2); l_13 = safe_add_func_int32_t_s_s(l_13, 1))
            { /* block id: 70 */
                uint32_t l_82 = 4294967295UL;
                int32_t l_85 = 0x3260C6B0L;
                struct S0 l_86 = {-7L,0x6553E7E88078DF31L,-7L,0x424657F3L,3L,1L,0x598F6BB93CCABF06L,0L};/* VOLATILE GLOBAL l_86 */
                int16_t l_87 = 0x619EL;
                int8_t l_88 = (-1L);
                int16_t l_89 = (-1L);
                uint64_t l_90 = 0x7FF3C2B3F84D8DA1L;
                int32_t l_125 = (-8L);
                int32_t *l_124 = &l_125;
                l_82--;
                l_89 = ((l_85 , l_86) , (l_88 ^= l_87));
                if (l_90)
                { /* block id: 74 */
                    int32_t l_91[5] = {5L,5L,5L,5L,5L};
                    int32_t l_96 = 6L;
                    int32_t l_97 = 1L;
                    uint32_t l_98[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_98[i] = 0x4B0433D1L;
                    for (l_91[3] = (-23); (l_91[3] < (-23)); l_91[3] = safe_add_func_int64_t_s_s(l_91[3], 9))
                    { /* block id: 77 */
                        int8_t l_94 = (-3L);
                        int8_t l_95 = 0x26L;
                        l_95 = (FAKE_DIVERGE(p_186->group_1_offset, get_group_id(1), 10) , (l_5.x = l_94));
                    }
                    l_97 &= l_96;
                    if (((l_86.f4 |= l_98[1]) , 8L))
                    { /* block id: 83 */
                        uint8_t l_99 = 0UL;
                        l_99--;
                    }
                    else
                    { /* block id: 85 */
                        int32_t l_102 = 0x699FB6E1L;
                        int32_t l_103 = 0x27663907L;
                        int16_t l_104 = 0x1A02L;
                        l_5.y &= (l_102 , l_103);
                        l_12.s3 |= l_104;
                    }
                }
                else
                { /* block id: 89 */
                    VECTOR(uint32_t, 16) l_105 = (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint32_t, 2))(6UL, 0UL), (VECTOR(uint32_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL);
                    uint64_t l_106 = 0xED3A1DB9036F656CL;
                    int16_t l_107[3];
                    uint16_t l_108 = 1UL;
                    int8_t l_109 = (-1L);
                    VECTOR(uint32_t, 8) l_110 = (VECTOR(uint32_t, 8))(0xB9843563L, (VECTOR(uint32_t, 4))(0xB9843563L, (VECTOR(uint32_t, 2))(0xB9843563L, 0xB46B89D6L), 0xB46B89D6L), 0xB46B89D6L, 0xB9843563L, 0xB46B89D6L);
                    VECTOR(int8_t, 16) l_111 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int8_t, 2))((-9L), (-1L)), (VECTOR(int8_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L));
                    VECTOR(int8_t, 4) l_112 = (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, 0x52L), 0x52L);
                    VECTOR(int8_t, 8) l_113 = (VECTOR(int8_t, 8))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 7L), 7L), 7L, 0x1FL, 7L);
                    VECTOR(int8_t, 4) l_114 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x6EL), 0x6EL);
                    uint8_t l_115 = 1UL;
                    int64_t l_116 = 0x75DE231E16E7FE30L;
                    int16_t l_117 = (-7L);
                    int32_t l_118 = 0x0D318FAEL;
                    uint32_t l_119 = 0xD1FF27FFL;
                    uint64_t l_120 = 1UL;
                    struct S1 l_121[5][3][6] = {{{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}}},{{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}}},{{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}}},{{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}}},{{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}},{{0xE33435BBL,0x1102A6E8L,4L,9UL,0x7E5EA9AE306D4112L,6L,-3L,4294967290UL},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{0x21FC0D30L,0L,0x50D2704CL,0xF6L,0x627E5E9984260BFFL,0x0253L,0L,5UL},{8UL,0x130C64E2L,0x5A980174L,254UL,0x23BB9FAC3A7E1613L,0x66C8L,0L,0x16ACC421L},{1UL,0x5EFED8C7L,0x189D1740L,251UL,0x1C1F599A488BF626L,0x67D4L,0x5AFEL,0x8D32F107L}}}};
                    struct S1 l_122 = {0x26F59999L,0x229A52E5L,0x1160525EL,249UL,-8L,0L,0x6D3DL,0x72699EA8L};
                    uint32_t l_123 = 4294967288UL;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_107[i] = 0L;
                    l_122 = ((((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(l_105.sf7c8c0ef)).s6044145765043317, ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(1UL, 0UL)).yyyyxxyxxxxxyxyx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0xA909A0BAL, 7UL, ((VECTOR(uint32_t, 8))(4294967295UL, 0xD08AE745L, 0xBDE43701L, 4294967295UL, 0x42DECD23L, 4294967291UL, 0x95111C09L, 0UL)).s5, ((VECTOR(uint32_t, 2))(4294967290UL, 0x9DD3993FL)), 0x4978895DL, 0UL, ((l_107[1] = l_106) , l_108), ((VECTOR(uint32_t, 8))(l_109, 0x77550297L, ((VECTOR(uint32_t, 2))(0x6474E888L, 6UL)), ((VECTOR(uint32_t, 2))(4294967295UL, 1UL)), 0x638F02CEL, 4294967290UL)))).s77)).yxxxyyxyxyyyyxxy, ((VECTOR(uint32_t, 4))(l_110.s0766)).xyywxxyzyzwxzxyy)))))).odd)).hi, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((l_10 = (l_89 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_111.s7d)).yxyyxyxxxxxyxyyx, ((VECTOR(int8_t, 2))((-1L), (-8L))).yyxyxyyyxyxyxxxy))).s0b)).yxyx)), (-5L), ((VECTOR(int8_t, 2))(l_112.zx)), (-1L))).odd, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_113.s03)))).xxxyxxyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(0x2AL, (-10L))).xyyx, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(0x7EL, ((VECTOR(int8_t, 2))((-10L), 0L)), 0x7BL, 0x28L, ((VECTOR(int8_t, 8))(l_114.wywzzywx)), 0x1EL, 0L, 6L)).hi))).lo))), ((VECTOR(int8_t, 8))((((l_115 , l_116) , 0UL) , l_117), (-5L), ((VECTOR(int8_t, 4))((-7L))), 0x15L, 5L)).odd))).lo, ((VECTOR(int8_t, 2))(0x18L))))).yxxy))), ((VECTOR(int8_t, 8))(0x6EL)), 1L, ((VECTOR(int8_t, 2))(7L)), 0x3DL)).lo)).even)).zwywzxzw, (int8_t)l_118, (int8_t)0x5AL)))))))).even, ((VECTOR(int8_t, 4))((-5L)))))).wyyxwxwx, ((VECTOR(uint8_t, 8))(0x1EL))))).s50)).odd)), l_119, 0x3CB4L, 0L)).hi)), 0x64F0L, 0x6665L)).yzzwxyxw, ((VECTOR(uint16_t, 8))(0x7EE6L))))))), l_120, 0x7A4C42D5L, 0x10F75760L, 1L, ((VECTOR(int32_t, 4))(4L)))))).s02))).xyxyxyxx)).s12)).yxyyxyxxxyyyyyxy, ((VECTOR(uint32_t, 16))(0xCB2FF314L))))).s3d)).yyyxxxyx, ((VECTOR(uint32_t, 8))(0x4B2E43F2L))))).lo))).z , 0L) , l_121[2][1][4]);
                    l_121[2][1][4].f1 |= (l_122.f2 = (l_12.s7 &= l_123));
                    l_121[2][1][4].f2 &= 0x481F4E8CL;
                }
                l_8 = l_124;
            }
        }
        else
        { /* block id: 101 */
            int32_t *l_126 = (void*)0;
            int64_t l_127 = 0x14FFD6B91F25ED7FL;
            l_9 = (l_8 = l_126);
            l_5.x = (-2L);
            l_5.y &= l_127;
        }
        unsigned int result = 0;
        result += l_5.y;
        result += l_5.x;
        result += l_6.w;
        result += l_6.z;
        result += l_6.y;
        result += l_6.x;
        result += l_7;
        result += l_10;
        result += l_11.y;
        result += l_11.x;
        result += l_12.sf;
        result += l_12.se;
        result += l_12.sd;
        result += l_12.sc;
        result += l_12.sb;
        result += l_12.sa;
        result += l_12.s9;
        result += l_12.s8;
        result += l_12.s7;
        result += l_12.s6;
        result += l_12.s5;
        result += l_12.s4;
        result += l_12.s3;
        result += l_12.s2;
        result += l_12.s1;
        result += l_12.s0;
        atomic_add(&p_186->g_special_values[66 * get_linear_group_id() + 41], result);
    }
    else
    { /* block id: 107 */
        (1 + 1);
    }
    return p_186->l_comm_values[(safe_mod_func_uint32_t_u_u(p_186->tid, 168))];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[168];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 168; i++)
            l_comm_values[i] = 1;
    struct S3 c_187;
    struct S3* p_186 = &c_187;
    struct S3 c_188 = {
        0, // p_186->v_collective
        sequence_input[get_global_id(0)], // p_186->global_0_offset
        sequence_input[get_global_id(1)], // p_186->global_1_offset
        sequence_input[get_global_id(2)], // p_186->global_2_offset
        sequence_input[get_local_id(0)], // p_186->local_0_offset
        sequence_input[get_local_id(1)], // p_186->local_1_offset
        sequence_input[get_local_id(2)], // p_186->local_2_offset
        sequence_input[get_group_id(0)], // p_186->group_0_offset
        sequence_input[get_group_id(1)], // p_186->group_1_offset
        sequence_input[get_group_id(2)], // p_186->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 168)), permutations[0][get_linear_local_id()])), // p_186->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_187 = c_188;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_186);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_186->v_collective, "p_186->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 66; i++)
            transparent_crc(p_186->g_special_values[i + 66 * get_linear_group_id()], "p_186->g_special_values[i + 66 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_186->l_comm_values[get_linear_local_id()], "p_186->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_186->g_comm_values[get_linear_group_id() * 168 + get_linear_local_id()], "p_186->g_comm_values[get_linear_group_id() * 168 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
