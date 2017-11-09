// --atomics 42 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 87,24,4 -l 3,24,2
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

__constant uint32_t permutations[10][144] = {
{18,76,80,75,45,119,11,88,56,118,85,30,133,46,27,8,40,24,35,23,47,73,126,2,64,142,61,120,105,50,138,48,9,132,115,143,117,63,57,130,39,68,81,44,140,66,112,38,15,3,22,109,70,60,72,62,102,13,32,77,131,82,103,116,49,121,137,89,36,0,129,4,52,1,124,71,78,69,25,94,113,29,59,21,108,111,14,5,90,65,84,134,99,98,20,114,7,101,51,123,141,106,107,83,16,67,100,12,10,54,34,79,6,139,28,37,26,41,110,53,93,33,136,42,31,86,95,17,19,96,58,87,43,74,55,122,91,128,92,135,104,127,125,97}, // permutation 0
{76,60,142,3,65,33,56,140,13,21,67,43,12,95,115,10,123,91,75,93,49,141,83,122,133,119,1,81,20,19,114,131,15,70,55,32,35,139,26,44,106,87,105,111,61,137,0,73,46,84,58,22,85,135,8,54,68,129,130,51,66,109,63,97,25,118,116,64,27,47,23,90,108,45,71,101,52,99,134,36,7,125,62,39,69,86,38,128,82,124,107,16,50,112,57,104,11,72,100,102,40,103,127,9,74,53,28,37,88,143,77,78,5,2,89,48,80,110,18,138,30,98,79,14,41,31,94,120,24,136,92,113,132,6,126,34,59,17,96,117,42,4,29,121}, // permutation 1
{50,85,42,19,10,79,37,140,34,9,99,15,62,117,136,75,84,88,102,22,110,14,103,141,7,130,3,121,80,63,68,8,112,123,18,143,53,54,132,0,125,52,66,55,78,98,100,97,93,81,91,74,94,60,4,21,86,6,116,30,129,73,76,67,46,118,128,26,92,25,133,64,36,87,126,139,32,27,20,69,70,33,39,83,43,127,96,31,82,90,24,5,114,16,104,120,47,35,105,122,89,142,57,41,44,51,106,13,11,45,134,113,59,71,124,17,109,23,49,65,58,12,48,29,72,95,56,101,38,77,1,135,119,115,28,111,2,138,107,61,131,137,108,40}, // permutation 2
{3,110,51,92,131,32,102,111,83,35,101,59,69,88,28,7,64,61,107,67,138,38,85,129,55,13,45,126,63,99,9,82,133,53,120,1,124,93,113,118,75,81,72,20,121,90,98,8,127,46,15,49,22,139,44,6,4,39,128,141,112,94,79,142,108,89,114,5,78,96,31,117,56,140,116,74,17,76,52,37,123,71,97,26,50,29,41,66,40,14,65,16,119,73,143,30,10,70,105,134,91,21,33,135,122,104,60,42,19,84,132,58,125,136,109,0,57,62,103,2,87,43,100,68,115,36,86,27,34,80,24,25,137,95,106,18,47,48,54,77,12,23,130,11}, // permutation 3
{92,17,6,64,29,97,60,130,108,80,27,90,36,50,136,103,68,54,79,95,22,41,81,52,28,88,26,32,15,63,91,118,11,77,14,142,39,105,129,56,23,37,25,114,61,2,133,94,123,134,62,120,126,107,53,20,34,30,71,140,42,131,0,96,1,10,143,46,127,24,117,135,8,82,66,43,49,110,21,93,72,78,35,47,58,44,55,122,86,111,124,128,100,67,119,104,137,76,70,57,33,116,75,13,132,4,99,85,16,102,3,59,87,38,113,125,74,65,48,5,84,139,106,7,112,73,138,51,98,31,12,141,40,18,9,109,83,115,45,121,89,69,19,101}, // permutation 4
{65,75,123,0,115,110,140,32,62,109,118,70,131,26,143,97,69,136,60,43,102,124,106,44,11,39,122,114,61,84,58,132,10,73,27,34,59,57,45,14,90,135,111,68,137,64,127,78,19,72,94,29,6,71,112,15,139,20,13,129,16,5,46,130,49,56,82,125,9,4,88,23,12,17,113,104,76,85,30,119,1,7,25,83,31,74,42,54,121,2,142,67,87,98,133,126,8,35,53,3,47,63,28,21,108,51,77,36,41,37,141,40,107,103,101,38,80,91,92,128,116,105,93,95,66,18,100,89,22,48,86,96,52,120,138,99,134,33,117,50,55,79,24,81}, // permutation 5
{109,74,102,0,134,89,127,107,39,43,80,33,67,64,44,25,119,125,47,132,46,84,53,28,14,19,95,38,104,117,121,55,58,31,36,60,75,97,73,63,57,30,135,2,52,9,66,106,11,65,122,69,96,72,12,114,123,103,120,115,76,78,54,27,126,21,34,79,77,70,90,35,138,6,139,62,87,130,20,129,45,98,48,128,91,16,42,37,83,7,40,56,131,51,32,112,88,133,94,93,141,5,100,61,110,85,143,108,124,68,111,142,24,50,22,23,13,29,82,17,140,15,99,105,41,18,116,101,1,86,26,3,4,10,81,8,113,118,49,59,92,137,136,71}, // permutation 6
{36,17,81,25,87,111,16,97,118,62,41,33,126,91,129,6,20,0,9,82,84,42,11,124,37,58,46,52,121,128,13,34,14,19,96,72,115,67,95,69,15,4,48,108,30,53,56,114,74,31,70,38,43,127,134,110,51,125,26,117,135,50,94,104,120,3,133,73,140,59,100,78,137,142,89,29,28,123,106,109,44,47,99,10,105,92,116,131,68,102,23,119,136,45,49,113,83,101,90,39,85,7,2,24,32,138,88,143,21,63,60,55,80,12,40,141,54,107,86,64,77,8,27,75,112,132,130,71,79,122,139,22,76,65,18,103,5,66,57,61,98,93,35,1}, // permutation 7
{37,86,1,0,39,14,133,48,97,108,135,96,66,141,32,143,114,142,24,80,25,101,118,31,27,88,44,8,60,33,109,136,20,7,130,77,56,126,51,129,102,54,98,5,6,46,53,28,35,125,41,55,94,40,70,16,29,75,138,71,104,100,62,139,132,137,119,72,76,58,87,45,43,2,123,68,110,15,83,13,49,115,64,113,61,81,3,134,122,116,107,128,117,103,131,91,17,127,73,84,67,65,111,26,10,124,18,12,22,112,34,95,89,30,79,78,36,93,38,19,47,63,85,11,106,140,105,42,59,121,120,90,74,21,99,57,69,4,82,52,92,23,9,50}, // permutation 8
{48,107,38,40,8,31,121,139,36,55,22,81,138,60,115,45,94,53,67,32,15,119,77,75,70,137,61,28,101,57,52,76,74,24,13,85,130,51,88,103,66,84,50,2,117,134,56,106,46,64,59,126,128,5,108,93,3,125,123,113,41,141,78,99,104,127,109,47,10,116,122,44,72,29,97,100,20,30,17,23,118,18,54,135,112,90,16,86,80,33,69,37,7,133,34,120,9,136,12,65,1,79,27,26,4,35,71,143,105,62,124,87,132,42,19,82,14,129,49,114,58,11,102,96,39,131,43,73,98,95,89,25,91,68,92,83,0,63,6,142,21,140,111,110} // permutation 9
};

// Seed: 4190127301

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   volatile uint64_t  f1;
   int32_t  f2;
   uint16_t  f3;
   volatile int8_t  f4;
};

struct S1 {
    int32_t g_9;
    int16_t g_14;
    volatile int64_t g_15;
    volatile uint16_t g_16[1];
    uint8_t g_49;
    VECTOR(int16_t, 16) g_50;
    int8_t g_57;
    int8_t g_59[9][7];
    int32_t g_63[9][5][5];
    int32_t *g_62[9][7];
    volatile VECTOR(uint16_t, 2) g_75;
    int16_t *g_89;
    uint16_t g_92;
    uint8_t g_111;
    uint32_t g_122[10][7][3];
    uint32_t g_124;
    uint8_t *g_181[5][4];
    uint8_t **g_180[3];
    int32_t * volatile g_196;
    volatile VECTOR(int16_t, 2) g_200;
    uint32_t g_205;
    volatile VECTOR(int64_t, 16) g_206;
    int16_t **g_217;
    int16_t *** volatile g_216;
    uint64_t g_238[6][1][9];
    int32_t * volatile g_241[4];
    int32_t ** volatile g_255;
    volatile VECTOR(uint16_t, 16) g_301;
    volatile VECTOR(uint16_t, 16) g_313;
    volatile VECTOR(int32_t, 16) g_327;
    VECTOR(uint64_t, 4) g_332;
    VECTOR(uint64_t, 8) g_434;
    int32_t ** volatile g_482;
    int32_t ** volatile g_483;
    VECTOR(uint64_t, 2) g_484;
    volatile VECTOR(int8_t, 16) g_494;
    int32_t ** volatile g_554;
    volatile union U0 g_570;
    volatile VECTOR(uint8_t, 8) g_607;
    uint16_t *g_610[1];
    VECTOR(uint32_t, 4) g_614;
    VECTOR(int32_t, 4) g_618;
    VECTOR(int32_t, 16) g_619;
    volatile union U0 g_636;
    volatile VECTOR(int64_t, 2) g_639;
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
int32_t  func_1(struct S1 * p_656);
uint16_t  func_2(uint64_t  p_3, uint64_t  p_4, int16_t  p_5, struct S1 * p_656);
int8_t  func_6(uint32_t  p_7, struct S1 * p_656);
int32_t  func_21(int32_t  p_22, int32_t  p_23, uint32_t  p_24, int32_t  p_25, int64_t  p_26, struct S1 * p_656);
uint8_t  func_27(int32_t * p_28, int64_t  p_29, uint32_t  p_30, int64_t  p_31, uint8_t  p_32, struct S1 * p_656);
int32_t * func_33(int32_t * p_34, int32_t * p_35, struct S1 * p_656);
int32_t * func_36(int8_t  p_37, int32_t * p_38, int32_t * p_39, int32_t  p_40, uint16_t  p_41, struct S1 * p_656);
uint8_t  func_46(uint32_t  p_47, int32_t * p_48, struct S1 * p_656);
uint64_t  func_76(int8_t  p_77, int32_t  p_78, int32_t ** p_79, uint64_t  p_80, uint32_t  p_81, struct S1 * p_656);
int32_t ** func_85(int16_t * p_86, struct S1 * p_656);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_656->g_comm_values p_656->g_16 p_656->g_9 p_656->g_50 p_656->g_49 p_656->g_92 p_656->g_57 p_656->g_63 p_656->g_59 p_656->g_122 p_656->g_111 p_656->l_comm_values p_656->g_180 p_656->g_196 p_656->g_205 p_656->g_216 p_656->g_14 p_656->g_206 p_656->g_434 p_656->g_313 p_656->g_482 p_656->g_483 p_656->g_484 p_656->g_494 p_656->g_238 p_656->g_570 p_656->g_607 p_656->g_614 p_656->g_618 p_656->g_619 p_656->g_301 p_656->g_636 p_656->g_639 p_656->g_332 p_656->g_15
 * writes: p_656->g_9 p_656->g_16 p_656->g_57 p_656->g_59 p_656->g_62 p_656->g_49 p_656->g_89 p_656->g_92 p_656->g_14 p_656->g_111 p_656->g_122 p_656->g_63 p_656->g_50 p_656->g_124 p_656->g_180 p_656->g_205 p_656->g_217 p_656->g_610
 */
int32_t  func_1(struct S1 * p_656)
{ /* block id: 4 */
    int32_t l_510 = 1L;
    int32_t l_511[5] = {0x466CC750L,0x466CC750L,0x466CC750L,0x466CC750L,0x466CC750L};
    uint64_t l_596 = 18446744073709551610UL;
    int i;
    if ((func_2(((l_510 = func_6(p_656->g_comm_values[p_656->tid], p_656)) <= l_511[0]), p_656->g_comm_values[p_656->tid], p_656->g_484.x, p_656) || (--l_596)))
    { /* block id: 285 */
        int64_t l_602[10] = {0x6158D1C4D1A73CC5L,0x6BC5E58B0978D6A0L,0L,0x6BC5E58B0978D6A0L,0x6158D1C4D1A73CC5L,0x6158D1C4D1A73CC5L,0x6BC5E58B0978D6A0L,0L,0x6BC5E58B0978D6A0L,0x6158D1C4D1A73CC5L};
        int32_t l_622 = 1L;
        int i;
        for (p_656->g_92 = 8; (p_656->g_92 == 1); --p_656->g_92)
        { /* block id: 288 */
            int32_t *l_601[4][10] = {{&l_511[1],&p_656->g_63[2][4][2],&l_511[0],(void*)0,&p_656->g_63[2][4][2],(void*)0,&l_511[0],&p_656->g_63[2][4][2],&l_511[1],&l_511[1]},{&l_511[1],&p_656->g_63[2][4][2],&l_511[0],(void*)0,&p_656->g_63[2][4][2],(void*)0,&l_511[0],&p_656->g_63[2][4][2],&l_511[1],&l_511[1]},{&l_511[1],&p_656->g_63[2][4][2],&l_511[0],(void*)0,&p_656->g_63[2][4][2],(void*)0,&l_511[0],&p_656->g_63[2][4][2],&l_511[1],&l_511[1]},{&l_511[1],&p_656->g_63[2][4][2],&l_511[0],(void*)0,&p_656->g_63[2][4][2],(void*)0,&l_511[0],&p_656->g_63[2][4][2],&l_511[1],&l_511[1]}};
            int8_t l_603 = 0x49L;
            uint16_t *l_609 = &p_656->g_92;
            uint16_t **l_608 = &l_609;
            int64_t *l_611 = &l_602[5];
            VECTOR(int32_t, 8) l_617 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x3291CFA6L), 0x3291CFA6L), 0x3291CFA6L, 8L, 0x3291CFA6L);
            VECTOR(int32_t, 8) l_620 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            int16_t *l_621[6][10][4] = {{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}},{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}},{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}},{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}},{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}},{{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14}}};
            uint32_t l_623 = 1UL;
            int i, j, k;
            l_602[4] = 0L;
            l_623 |= ((l_603 || (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((p_656->g_206.s5 , (((~(*p_656->g_196)) , ((*l_611) ^= (((VECTOR(uint8_t, 4))(p_656->g_607.s4360)).y && (((*l_608) = (void*)0) == (p_656->g_610[0] = &p_656->g_92))))) <= ((safe_div_func_uint64_t_u_u(((((((p_656->g_122[0][5][1] , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_656->g_614.yz)).yxxyyxxx)).s6 , (((((void*)0 == &p_656->g_180[2]) , (safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_617.s2376242672430420)).s8b)))).yxyyxxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_656->g_618.wzxzyzzxwxwxwzyw)).s04f0)).zzxwwzxw, ((VECTOR(int32_t, 2))(p_656->g_619.s90)).yxxxyyxx))).s6144470154721137, ((VECTOR(int32_t, 16))(l_620.s0774561315612422))))).s6 != ((((p_656->g_14 = l_596) != p_656->g_59[3][6]) <= 0L) <= p_656->g_205)), p_656->g_63[3][1][1]))) , 0x28C76289L) , 0x7FE7085AL))) == 2L) || l_622) , l_622) & 0xE1C48EF2L) ^ 1L), GROUP_DIVERGE(0, 1))) < l_596))))), 6))) != l_596);
            return p_656->g_301.s6;
        }
        return p_656->g_122[0][5][1];
    }
    else
    { /* block id: 298 */
        uint64_t l_643 = 1UL;
        uint32_t l_649 = 4294967293UL;
        for (l_510 = (-28); (l_510 < (-27)); l_510 = safe_add_func_uint8_t_u_u(l_510, 3))
        { /* block id: 301 */
            uint16_t *l_628 = &p_656->g_92;
            int32_t l_635 = 0x07000B54L;
            VECTOR(int16_t, 16) l_640 = (VECTOR(int16_t, 16))(0x6993L, (VECTOR(int16_t, 4))(0x6993L, (VECTOR(int16_t, 2))(0x6993L, 1L), 1L), 1L, 0x6993L, 1L, (VECTOR(int16_t, 2))(0x6993L, 1L), (VECTOR(int16_t, 2))(0x6993L, 1L), 0x6993L, 1L, 0x6993L, 1L);
            int32_t **l_644 = &p_656->g_62[5][3];
            int32_t *l_645 = (void*)0;
            int32_t *l_646 = &p_656->g_9;
            int32_t *l_647 = &l_511[3];
            int32_t *l_648[8] = {&p_656->g_9,&l_511[0],&p_656->g_9,&p_656->g_9,&l_511[0],&p_656->g_9,&p_656->g_9,&l_511[0]};
            int i;
            (*l_644) = ((safe_mul_func_uint16_t_u_u(((*l_628)++), 65527UL)) , func_36(((safe_div_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s((l_635 < (p_656->g_636 , ((safe_mod_func_uint16_t_u_u((((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_656->g_639.yyyxyxyy)))).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x74C2C242745DD52FL, 0x53488010CF293AB8L)), 0x2EEDCD5AF89227CDL, 0x5ED58D065EE2D3FEL))))).z >= p_656->g_122[0][5][1]), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_640.s70d4)))).z)) == ((p_656->g_332.y , 0x672D270AL) != (((l_510 , (safe_lshift_func_int16_t_s_s(l_643, 15))) ^ p_656->g_205) != l_640.sb))))), p_656->g_618.y)) >= 0x24L) , p_656->g_15), p_656->g_50.sd)) == 0x64F2L), &l_635, &l_635, l_640.sf, l_640.sc, p_656));
            --l_649;
            atomic_and(&p_656->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x86L, (*l_647))), l_649)));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_656->v_collective += p_656->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        return p_656->g_607.s0;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_111 p_656->g_57 p_656->g_92 p_656->g_16 p_656->g_9 p_656->g_49 p_656->g_570 p_656->g_484 p_656->l_comm_values p_656->g_63
 * writes: p_656->g_111 p_656->g_57 p_656->g_92 p_656->g_14 p_656->g_49 p_656->g_205 p_656->g_63
 */
uint16_t  func_2(uint64_t  p_3, uint64_t  p_4, int16_t  p_5, struct S1 * p_656)
{ /* block id: 236 */
    uint32_t l_512 = 6UL;
    int32_t *l_517 = &p_656->g_9;
    int32_t l_581 = (-1L);
    int32_t *l_582 = &p_656->g_9;
    int32_t *l_583 = &p_656->g_63[2][4][2];
    int32_t *l_584 = &l_581;
    int32_t *l_585 = &p_656->g_63[3][1][0];
    int32_t *l_586 = &p_656->g_63[6][4][2];
    int32_t *l_587 = &p_656->g_9;
    int32_t l_588 = 9L;
    int32_t *l_589 = &l_588;
    int32_t *l_590 = &p_656->g_63[2][0][3];
    int32_t *l_591[8] = {&p_656->g_9,&p_656->g_9,&p_656->g_9,&p_656->g_9,&p_656->g_9,&p_656->g_9,&p_656->g_9,&p_656->g_9};
    int8_t l_592 = 0x7DL;
    uint32_t l_593 = 1UL;
    int i;
    l_512 = (-8L);
    for (l_512 = 0; (l_512 != 41); l_512 = safe_add_func_int8_t_s_s(l_512, 8))
    { /* block id: 240 */
        int32_t *l_518 = &p_656->g_63[2][4][2];
        VECTOR(int8_t, 16) l_575 = (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 0x4DL), 0x4DL), 0x4DL, 0x26L, 0x4DL, (VECTOR(int8_t, 2))(0x26L, 0x4DL), (VECTOR(int8_t, 2))(0x26L, 0x4DL), 0x26L, 0x4DL, 0x26L, 0x4DL);
        int i;
        for (p_656->g_111 = 15; (p_656->g_111 != 31); ++p_656->g_111)
        { /* block id: 243 */
            uint8_t l_567 = 1UL;
            l_518 = l_517;
            for (p_656->g_57 = (-6); (p_656->g_57 == 16); p_656->g_57 = safe_add_func_int32_t_s_s(p_656->g_57, 3))
            { /* block id: 247 */
                int32_t *l_555 = &p_656->g_9;
                int16_t *l_560 = (void*)0;
                int16_t *l_561 = (void*)0;
                int16_t *l_562 = (void*)0;
                int16_t *l_563 = &p_656->g_14;
                uint8_t *l_566 = &p_656->g_49;
                int16_t ***l_569 = &p_656->g_217;
                int16_t ****l_568[7] = {&l_569,&l_569,&l_569,&l_569,&l_569,&l_569,&l_569};
                VECTOR(uint16_t, 8) l_576 = (VECTOR(uint16_t, 8))(0x9777L, (VECTOR(uint16_t, 4))(0x9777L, (VECTOR(uint16_t, 2))(0x9777L, 0x724BL), 0x724BL), 0x724BL, 0x9777L, 0x724BL);
                int64_t l_577 = 9L;
                uint32_t *l_578 = (void*)0;
                uint32_t *l_579 = &p_656->g_205;
                int32_t *l_580 = &p_656->g_63[6][3][3];
                int i;
                for (p_3 = 0; (p_3 < 17); p_3 = safe_add_func_uint8_t_u_u(p_3, 7))
                { /* block id: 250 */
                    if ((atomic_inc(&p_656->g_atomic_input[42 * get_linear_group_id() + 24]) == 7))
                    { /* block id: 252 */
                        VECTOR(int64_t, 2) l_523 = (VECTOR(int64_t, 2))(0x3F93B832A04B7612L, 1L);
                        union U0 l_524[9] = {{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL},{0x2504865FL}};
                        VECTOR(int8_t, 8) l_525 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x47L), 0x47L), 0x47L, (-1L), 0x47L);
                        uint16_t l_526 = 0xCD92L;
                        VECTOR(int64_t, 8) l_527 = (VECTOR(int64_t, 8))(0x32F9CB817017F740L, (VECTOR(int64_t, 4))(0x32F9CB817017F740L, (VECTOR(int64_t, 2))(0x32F9CB817017F740L, 0x490410254067846AL), 0x490410254067846AL), 0x490410254067846AL, 0x32F9CB817017F740L, 0x490410254067846AL);
                        uint64_t l_528 = 18446744073709551610UL;
                        uint64_t l_529 = 0x5026F9D7DB107F30L;
                        VECTOR(int64_t, 16) l_530 = (VECTOR(int64_t, 16))(0x318EB09E57FF3AFDL, (VECTOR(int64_t, 4))(0x318EB09E57FF3AFDL, (VECTOR(int64_t, 2))(0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L), 0x1664ED70FDA71755L), 0x1664ED70FDA71755L, 0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L, (VECTOR(int64_t, 2))(0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L), (VECTOR(int64_t, 2))(0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L), 0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L, 0x318EB09E57FF3AFDL, 0x1664ED70FDA71755L);
                        uint8_t l_531 = 0x34L;
                        VECTOR(int64_t, 8) l_532 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                        int32_t l_533 = 0x450F60C2L;
                        int8_t l_534 = 0L;
                        VECTOR(int64_t, 2) l_535 = (VECTOR(int64_t, 2))(6L, 8L);
                        VECTOR(uint16_t, 2) l_536 = (VECTOR(uint16_t, 2))(6UL, 0x1C27L);
                        VECTOR(int32_t, 4) l_537 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L);
                        uint64_t l_538 = 0x5B5FFC3A8374A591L;
                        uint64_t l_539 = 1UL;
                        uint64_t l_540 = 0xB646BB072766D94FL;
                        uint8_t l_541 = 9UL;
                        int32_t l_542 = 0x5ADD643CL;
                        uint16_t l_543 = 0x09BAL;
                        int64_t l_544 = (-1L);
                        int32_t l_545 = (-1L);
                        uint32_t l_546 = 1UL;
                        uint32_t l_547 = 0xCDD07EBDL;
                        int8_t l_548 = 0x79L;
                        uint32_t l_549 = 0xC4BCDEFEL;
                        uint32_t l_550 = 1UL;
                        int64_t l_551 = 0x37921B04153DAF7FL;
                        int32_t l_552 = 0x1C79B88CL;
                        uint16_t l_553 = 0x2296L;
                        int i;
                        l_548 ^= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0xB04A3FAE70464C5EL, ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(l_523.xyyxyyxx)).s64))), 0UL)).xwxzwzywyzxwzxww)).sf , (((l_524[1] , (GROUP_DIVERGE(0, 1) , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_525.s27443564)).s52)).odd)) , (l_526 , (l_546 = ((VECTOR(int64_t, 16))(0x26C9F509BFBB7E6DL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(l_527.s34310517)), ((VECTOR(int64_t, 16))(l_528, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(1L, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))((-7L), l_529, 0x6DB292E5E6146937L, (-6L))).even, ((VECTOR(int64_t, 16))((l_541 &= (l_523.y ^= (l_527.s6 ^= ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_530.sdb)).xyxyxyyyxyxyyxxy)).sce)).xxxx, ((VECTOR(int64_t, 8))(l_531, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_532.s6755303042075751)))).s03fb)), (l_534 = l_533), 1L, (-7L))).odd, ((VECTOR(int64_t, 16))(l_535.yyyyxyxxxyxyyxyx)).s1824))).zwzzyzxyzzwywyzx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((((VECTOR(uint16_t, 8))(l_536.xyxyxyxx)).s7 , l_537.z), ((VECTOR(int64_t, 2))(0L, 0x61910E2C15E3BE40L)), 0x641D07083706DC6EL, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(0x6DAA3D38L, 7L)).xxyyxyxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 8))(l_538, l_539, l_540, 0x5F887E6FL, 0x445B6127L, ((VECTOR(int32_t, 2))((-3L))), 0L)).odd, ((VECTOR(int32_t, 4))((-6L))))))))).zxzywxzwxxyxwywx)).odd))).s3, ((VECTOR(int64_t, 2))(0L)), (-1L))).s53)).yyyyxyyxyxxxyxxx, ((VECTOR(int64_t, 16))(1L))))).s4))), ((VECTOR(int64_t, 4))(0x6DFE3E09F4FB16BEL)), 0x7F73D9066CC5BA4DL, 0x6419A60A01B95AB1L, 0x68A9EC253BFF9F72L, 0x76CDECE7E263CCF6L, 0x5AFCF8717785E725L, l_542, l_543, 0x676B04CB96F80007L, l_544, 0x3167E8BD5497A55BL, 0x4819387C92586DACL)).s3e))), 0x527377AA3415CA22L)), 0x4555105B7CBBC401L, (-1L), 0x264F7EFA0EA45F52L, 0x71C9F6D167AE1F51L, (-1L), (-6L), ((VECTOR(int64_t, 4))(0x3A150AF54E74A670L)), 2L, 0L)).s4ef5, ((VECTOR(int64_t, 4))(0x4FC2C966A0E48DB5L))))).wyzyxwxy)).s56, ((VECTOR(int64_t, 2))(0x55F38B75B855BF76L)), ((VECTOR(int64_t, 2))(0x549665BEA1B273A6L))))), ((VECTOR(int64_t, 8))(0x2BD991874E82B0F3L)), (-9L), l_545, (-5L), (-1L), 0x4A53D610730C591EL)).hi))).s14, (int64_t)0x622992B049D8A164L))), 0x42C8B4233847C393L, ((VECTOR(int64_t, 4))(1L)), 0x6977343D08BAAE0FL)).s0, 0x7A8A370C2E6ACEE0L, ((VECTOR(int64_t, 2))(0x173BFD05DBC2CACEL)), 0x1971561AE08AF426L, ((VECTOR(int64_t, 8))(6L)), (-10L), 1L)).s0))) , l_547));
                        l_551 &= (l_550 |= l_549);
                        l_553 = l_552;
                        unsigned int result = 0;
                        result += l_523.y;
                        result += l_523.x;
                        int l_524_i0;
                        for (l_524_i0 = 0; l_524_i0 < 9; l_524_i0++) {
                            result += l_524[l_524_i0].f0;
                            result += l_524[l_524_i0].f1;
                            result += l_524[l_524_i0].f2;
                            result += l_524[l_524_i0].f3;
                            result += l_524[l_524_i0].f4;
                        }
                        result += l_525.s7;
                        result += l_525.s6;
                        result += l_525.s5;
                        result += l_525.s4;
                        result += l_525.s3;
                        result += l_525.s2;
                        result += l_525.s1;
                        result += l_525.s0;
                        result += l_526;
                        result += l_527.s7;
                        result += l_527.s6;
                        result += l_527.s5;
                        result += l_527.s4;
                        result += l_527.s3;
                        result += l_527.s2;
                        result += l_527.s1;
                        result += l_527.s0;
                        result += l_528;
                        result += l_529;
                        result += l_530.sf;
                        result += l_530.se;
                        result += l_530.sd;
                        result += l_530.sc;
                        result += l_530.sb;
                        result += l_530.sa;
                        result += l_530.s9;
                        result += l_530.s8;
                        result += l_530.s7;
                        result += l_530.s6;
                        result += l_530.s5;
                        result += l_530.s4;
                        result += l_530.s3;
                        result += l_530.s2;
                        result += l_530.s1;
                        result += l_530.s0;
                        result += l_531;
                        result += l_532.s7;
                        result += l_532.s6;
                        result += l_532.s5;
                        result += l_532.s4;
                        result += l_532.s3;
                        result += l_532.s2;
                        result += l_532.s1;
                        result += l_532.s0;
                        result += l_533;
                        result += l_534;
                        result += l_535.y;
                        result += l_535.x;
                        result += l_536.y;
                        result += l_536.x;
                        result += l_537.w;
                        result += l_537.z;
                        result += l_537.y;
                        result += l_537.x;
                        result += l_538;
                        result += l_539;
                        result += l_540;
                        result += l_541;
                        result += l_542;
                        result += l_543;
                        result += l_544;
                        result += l_545;
                        result += l_546;
                        result += l_547;
                        result += l_548;
                        result += l_549;
                        result += l_550;
                        result += l_551;
                        result += l_552;
                        result += l_553;
                        atomic_add(&p_656->g_special_values[42 * get_linear_group_id() + 24], result);
                    }
                    else
                    { /* block id: 262 */
                        (1 + 1);
                    }
                    l_555 = l_518;
                    for (p_656->g_92 = 24; (p_656->g_92 != 9); --p_656->g_92)
                    { /* block id: 268 */
                        return p_656->g_16[0];
                    }
                }
                (*l_580) &= ((safe_add_func_uint32_t_u_u(((((*l_563) = (*l_517)) & ((safe_mul_func_uint8_t_u_u(((*l_566) ^= (*l_555)), l_567)) >= (l_568[2] == (p_656->g_570 , &p_656->g_216)))) != (-5L)), ((*l_579) = ((p_656->g_484.y , (safe_add_func_uint8_t_u_u((((((safe_div_func_int16_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_575.s523e44957cf21d6d)).odd)).s1 > (((VECTOR(uint16_t, 16))(l_576.s6340527445106365)).s2 && (l_577 = (p_5 ^ p_656->l_comm_values[(safe_mod_func_uint32_t_u_u(p_656->tid, 144))])))), (*l_518))) || (-5L)) , p_4) <= p_5) || p_4), 1L))) || 0x32981400A1CF511BL)))) > (*l_555));
            }
            if (p_4)
                continue;
        }
        if (p_4)
            continue;
    }
    --l_593;
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_16 p_656->g_9 p_656->g_50 p_656->g_49 p_656->g_92 p_656->g_57 p_656->g_63 p_656->g_59 p_656->g_122 p_656->g_111 p_656->l_comm_values p_656->g_180 p_656->g_196 p_656->g_205 p_656->g_216 p_656->g_comm_values p_656->g_14 p_656->g_206 p_656->g_434 p_656->g_313 p_656->g_482 p_656->g_483 p_656->g_484 p_656->g_494 p_656->g_238
 * writes: p_656->g_9 p_656->g_16 p_656->g_57 p_656->g_59 p_656->g_62 p_656->g_49 p_656->g_89 p_656->g_92 p_656->g_14 p_656->g_111 p_656->g_122 p_656->g_63 p_656->g_50 p_656->g_124 p_656->g_180 p_656->g_205 p_656->g_217
 */
int8_t  func_6(uint32_t  p_7, struct S1 * p_656)
{ /* block id: 5 */
    int32_t *l_8 = &p_656->g_9;
    int32_t *l_10 = &p_656->g_9;
    int32_t *l_11 = (void*)0;
    int32_t *l_12[6] = {(void*)0,&p_656->g_9,(void*)0,(void*)0,&p_656->g_9,(void*)0};
    int32_t l_13 = 0x54F8D36FL;
    VECTOR(int16_t, 8) l_51 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x032CL), 0x032CL), 0x032CL, (-2L), 0x032CL);
    int16_t ***l_266[4];
    VECTOR(uint16_t, 4) l_302 = (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0UL), 0UL);
    VECTOR(int8_t, 4) l_304 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5FL), 0x5FL);
    VECTOR(uint8_t, 8) l_307 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    int8_t l_324 = 5L;
    VECTOR(uint64_t, 4) l_335 = (VECTOR(uint64_t, 4))(0x1DD453DA7C996EF4L, (VECTOR(uint64_t, 2))(0x1DD453DA7C996EF4L, 9UL), 9UL);
    uint8_t **l_493 = &p_656->g_181[4][2];
    int32_t l_506 = (-6L);
    int i;
    for (i = 0; i < 4; i++)
        l_266[i] = &p_656->g_217;
    (*l_8) = (-1L);
    --p_656->g_16[0];
    for (p_656->g_9 = (-4); (p_656->g_9 >= 21); p_656->g_9 = safe_add_func_uint64_t_u_u(p_656->g_9, 9))
    { /* block id: 10 */
        int16_t *l_52 = (void*)0;
        int16_t *l_53 = (void*)0;
        int16_t *l_54 = &p_656->g_14;
        int32_t l_55 = 0x09E30C92L;
        int8_t *l_56 = &p_656->g_57;
        int8_t *l_58 = &p_656->g_59[3][0];
        int32_t l_218 = 6L;
        int32_t l_246 = 0L;
        VECTOR(uint16_t, 2) l_315 = (VECTOR(uint16_t, 2))(0x4DE5L, 8UL);
        uint8_t **l_345 = &p_656->g_181[1][1];
        int16_t ***l_346[2][2];
        int8_t l_400 = (-4L);
        int32_t l_466 = 0L;
        uint8_t l_468 = 251UL;
        VECTOR(uint64_t, 4) l_487 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x9C33F6CADF302686L), 0x9C33F6CADF302686L);
        VECTOR(int8_t, 4) l_492 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-1L)), (-1L));
        int32_t l_503[3][1];
        int32_t l_504 = (-7L);
        int64_t l_505 = 1L;
        uint16_t l_507 = 65529UL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_346[i][j] = &p_656->g_217;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_503[i][j] = 0x70D02CA8L;
        }
        l_246 &= func_21(((((void*)0 == &p_656->g_9) & func_27(func_33(func_36((+((*l_58) = ((*l_56) = (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(1L, 0x68L)), 0x6EL)), p_656->g_15, 0L, 1L, 0x64L)).s5351551421404503)).s4 < (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))((safe_lshift_func_uint8_t_u_u((func_46(p_7, &p_656->g_9, p_656) || ((p_7 | ((*l_54) = ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_656->g_50.s47)).xyxy)))).yyyxyywxwwyyywww)).even, ((VECTOR(int16_t, 16))(l_51.s5434065221731533)).lo))).s7)) | (((l_55 < p_7) > (-1L)) == 0L))), p_656->g_9)), p_7, 1UL, 4294967295UL, 5UL, ((VECTOR(uint32_t, 2))(4UL)), 4294967289UL)).s72, ((VECTOR(uint32_t, 2))(0xBAE6AC69L))))).yyxx, ((VECTOR(uint32_t, 4))(4294967295UL))))).even, (uint32_t)1UL))).yxxx)).y != p_7))))), &l_55, &l_55, l_55, p_7, p_656), &p_656->g_9, p_656), p_656->g_9, p_656->g_comm_values[p_656->tid], p_7, l_218, p_656)) , p_7), p_656->l_comm_values[(safe_mod_func_uint32_t_u_u(p_656->tid, 144))], p_656->g_comm_values[p_656->tid], p_7, l_218, p_656);
        if (l_218)
            break;
        for (p_656->g_124 = (-14); (p_656->g_124 <= 14); p_656->g_124 = safe_add_func_int8_t_s_s(p_656->g_124, 4))
        { /* block id: 96 */
            VECTOR(uint16_t, 2) l_300 = (VECTOR(uint16_t, 2))(65526UL, 0xCE29L);
            VECTOR(uint16_t, 16) l_314 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0xE7F1L), 0xE7F1L), 0xE7F1L, 65527UL, 0xE7F1L, (VECTOR(uint16_t, 2))(65527UL, 0xE7F1L), (VECTOR(uint16_t, 2))(65527UL, 0xE7F1L), 65527UL, 0xE7F1L, 65527UL, 0xE7F1L);
            VECTOR(uint16_t, 16) l_316 = (VECTOR(uint16_t, 16))(0x211BL, (VECTOR(uint16_t, 4))(0x211BL, (VECTOR(uint16_t, 2))(0x211BL, 0xB3D1L), 0xB3D1L), 0xB3D1L, 0x211BL, 0xB3D1L, (VECTOR(uint16_t, 2))(0x211BL, 0xB3D1L), (VECTOR(uint16_t, 2))(0x211BL, 0xB3D1L), 0x211BL, 0xB3D1L, 0x211BL, 0xB3D1L);
            int16_t ****l_347 = &l_266[0];
            uint32_t *l_348 = (void*)0;
            uint32_t *l_349 = &p_656->g_205;
            int32_t l_401[7];
            VECTOR(uint32_t, 8) l_406 = (VECTOR(uint32_t, 8))(0x9888E990L, (VECTOR(uint32_t, 4))(0x9888E990L, (VECTOR(uint32_t, 2))(0x9888E990L, 4294967295UL), 4294967295UL), 4294967295UL, 0x9888E990L, 4294967295UL);
            int i;
            for (i = 0; i < 7; i++)
                l_401[i] = 0x7FFA6E6CL;
            for (p_7 = 0; (p_7 <= 30); ++p_7)
            { /* block id: 99 */
                uint16_t l_289[6][8][5] = {{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}},{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}},{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}},{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}},{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}},{{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL},{65533UL,0xFB20L,3UL,0x1A19L,65526UL}}};
                uint32_t *l_292[7];
                int32_t l_293 = 0x480BC00FL;
                VECTOR(uint32_t, 8) l_321 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
                int32_t l_323 = 3L;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_292[i] = &p_656->g_205;
                for (l_13 = 0; (l_13 >= 16); l_13++)
                { /* block id: 102 */
                    int16_t ***l_261[3][2];
                    int32_t l_272[10][5][1] = {{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}},{{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L},{0x195D3167L}}};
                    uint64_t *l_312[6][5] = {{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]},{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]},{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]},{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]},{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]},{&p_656->g_238[3][0][3],&p_656->g_238[2][0][1],&p_656->g_238[3][0][3],&p_656->g_238[3][0][3],&p_656->g_238[2][0][1]}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_261[i][j] = (void*)0;
                    }
                    (*p_656->g_196) = 0x61258718L;
                    if ((*p_656->g_196))
                        continue;
                    for (p_656->g_49 = (-16); (p_656->g_49 == 23); ++p_656->g_49)
                    { /* block id: 107 */
                        int32_t **l_256 = &l_11;
                        (*l_256) = &p_656->g_63[2][4][2];
                    }
                    for (p_656->g_49 = 0; (p_656->g_49 <= 20); p_656->g_49++)
                    { /* block id: 112 */
                        int16_t ***l_264 = &p_656->g_217;
                        int16_t ****l_265[5];
                        int64_t l_267 = 0x1FB6B1B6B8CC406BL;
                        VECTOR(uint8_t, 2) l_303 = (VECTOR(uint8_t, 2))(0x0CL, 0x30L);
                        uint16_t *l_322[9][7] = {{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0},{&p_656->g_92,&p_656->g_92,(void*)0,&p_656->g_92,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_265[i] = &l_264;
                        l_267 = (safe_mod_func_int8_t_s_s(p_7, (p_7 || (l_261[1][1] == (l_266[0] = ((safe_sub_func_uint16_t_u_u(l_55, l_246)) , l_264))))));
                        (*p_656->g_196) &= ((p_7 & (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_272[4][2][0], (safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((&p_7 == ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_7, 0xFC6AL)), ((safe_sub_func_uint16_t_u_u(((l_289[1][4][0] = (safe_mul_func_uint8_t_u_u(249UL, l_55))) , (((safe_div_func_int8_t_s_s((((~3L) && (0x84L && l_267)) ^ 0x48L), 0xDCL)) | 0UL) | p_7)), l_267)) , p_7))), l_267)), 14)) , l_292[6])) || p_7) && p_656->g_59[3][0]), l_293)), p_7)))), 2L))) | 18446744073709551607UL);
                        l_293 ^= ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(0x55L, 2UL)).lo, p_656->g_14)) >= GROUP_DIVERGE(0, 1));
                        l_218 |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(l_300.xyyyxyyx)).s65, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(65535UL, 0x3199L)).yyyyxxxxyxxxyxxx, ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(p_656->g_301.s2432923fa3b0dd65)).lo, ((VECTOR(uint16_t, 8))(l_302.zywxyyxz))))).s16, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(l_303.xxyyyxyy)).lo, ((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(l_304.yxwzwzwxzwzzxzzx)).lo))).hi))), 65535UL, (+(p_656->g_92 = ((((p_7 , (*l_8)) ^ (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_307.s56274406)).s4, (safe_mul_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((void*)0 == l_312[5][2]), (((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(p_656->g_313.s1de906dd1e354960)).s39b7, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(0UL, 65535UL, ((VECTOR(uint16_t, 2))(l_314.se8)), ((VECTOR(uint16_t, 2))(l_315.yy)).lo, ((VECTOR(uint16_t, 2))(l_316.sc5)), 1UL)).s66, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_7, ((((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(9UL, 0UL)).yxxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_321.s0351)).zwzwywwz)).s21)).yxyy))).w <= 0x3130256894C693E4L) , (l_323 = (l_293 = ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(3UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65530UL, 0xB73EL)).xyxx)), ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(65535UL, 0xA444L, 0x8C20L, 0UL, 5UL, 0xDB7AL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x75ADL, 0x7156L)), 0UL, 0x3DDFL)).zwxzxzzw)).s31)), 0xD617L, p_656->g_50.sc, ((VECTOR(uint16_t, 4))(65529UL)), 0x14C7L, 65530UL)))).sa1, ((VECTOR(uint16_t, 2))(0xC5A4L))))), 65534UL)), ((VECTOR(uint16_t, 8))(65535UL))))).s56, (uint16_t)l_315.y))).xxyxyxxx))).s5))))), 9L)), ((VECTOR(uint16_t, 2))(65535UL)), 0x9215L, 0UL, l_316.s6, 0xC55CL, 65531UL)).s44, ((VECTOR(uint16_t, 2))(0x17C3L))))).xyyx, ((VECTOR(uint16_t, 4))(0x74A1L)), ((VECTOR(uint16_t, 4))(0x0EAAL))))).lo))).xxyx))).lo, ((VECTOR(uint16_t, 2))(0x2FBBL))))).odd , FAKE_DIVERGE(p_656->group_0_offset, get_group_id(0), 10)))) && (-1L)), 248UL))))) || 0x24961345L) & p_656->g_50.s1))), ((VECTOR(uint16_t, 2))(0x04ABL)), 65526UL, ((VECTOR(uint16_t, 2))(65533UL)), 0xFB0BL, ((VECTOR(uint16_t, 4))(65532UL)))).sa0, (uint16_t)p_656->g_124)))))).xyyxxyxyxxyyxyyx))).sb2))).even && l_324), FAKE_DIVERGE(p_656->global_0_offset, get_global_id(0), 10))), l_321.s7));
                    }
                }
            }
            for (p_656->g_57 = (-24); (p_656->g_57 < (-16)); p_656->g_57 = safe_add_func_uint64_t_u_u(p_656->g_57, 9))
            { /* block id: 127 */
                return p_7;
            }
            if ((((VECTOR(int32_t, 8))(p_656->g_327.s1fe580d8)).s3 ^ ((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), ((((*l_349) = ((safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_656->g_332.ywxy)), 0x5F09B39664933B06L, (safe_lshift_func_int16_t_s_u(p_7, 9)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_335.wxzx)).even)).yyxxxxxx)))).s5, 0x673A61B88068C0A9L, (safe_sub_func_int8_t_s_s((*l_10), 0x65L)), (safe_unary_minus_func_int16_t_s((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((safe_div_func_uint64_t_u_u((l_315.x < ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_7, (l_55 = (p_656->g_49 | (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_300.y >= (((*l_347) = (((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x0EA2810DL, 0x0B77A766L)), (int32_t)(&p_656->g_181[2][3] == l_345)))).lo , l_346[0][1])) == (void*)0)), p_7)), p_7)))), 5L, 0L)).even)).even), p_7)), 254UL, 0UL, 0x72L)).wxxxxxzw)), ((VECTOR(uint8_t, 8))(0xF6L))))), (uint8_t)p_7))).s6620434066503331)).sa6, ((VECTOR(uint8_t, 2))(6UL)), ((VECTOR(uint8_t, 2))(0xF5L))))), p_7, ((VECTOR(uint8_t, 2))(4UL)), 0x91L, 0x24L, 0UL)).s4 != p_656->g_9) ^ p_7) || 7L))), 0x5D76EC6D6B910900L, p_7, ((VECTOR(uint64_t, 4))(0xFA08B5089B286FDEL)))).sd || 0x2BFB4BC8B7194334L), 0x1CL)) != p_7)) & l_314.s6) < (*l_10)))) == 0xBE04A1150663E61FL)))
            { /* block id: 133 */
                if ((atomic_inc(&p_656->g_atomic_input[42 * get_linear_group_id() + 30]) == 7))
                { /* block id: 135 */
                    int32_t l_350 = (-9L);
                    uint32_t l_361 = 4294967290UL;
                    uint64_t l_364 = 7UL;
                    int64_t l_365 = (-4L);
                    uint8_t l_395 = 0x3DL;
                    int16_t l_396[7] = {3L,3L,3L,3L,3L,3L,3L};
                    int i;
                    for (l_350 = 17; (l_350 == (-29)); l_350 = safe_sub_func_int16_t_s_s(l_350, 6))
                    { /* block id: 138 */
                        int32_t l_353 = (-7L);
                        int64_t l_354 = 0x49364D3CE2FF09C4L;
                        uint32_t l_355 = 0xA4928264L;
                        int32_t *l_356 = (void*)0;
                        int32_t *l_357[9][7][4] = {{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}},{{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353},{&l_353,&l_353,&l_353,&l_353}}};
                        int32_t *l_358 = &l_353;
                        int32_t *l_359 = &l_353;
                        int32_t *l_360 = &l_353;
                        int i, j, k;
                        l_354 ^= l_353;
                        l_358 = (l_357[7][5][3] = ((l_355 = 0x16EE7056L) , l_356));
                        l_357[1][5][2] = (void*)0;
                        l_360 = l_359;
                    }
                    ++l_361;
                    if (((l_365 = l_364) , 8L))
                    { /* block id: 148 */
                        int8_t l_366[1];
                        VECTOR(uint64_t, 2) l_367 = (VECTOR(uint64_t, 2))(8UL, 18446744073709551610UL);
                        int8_t l_368 = (-1L);
                        uint32_t l_369[1][9][5] = {{{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL},{0x35F841BDL,4294967295UL,1UL,4294967295UL,0x35F841BDL}}};
                        uint32_t l_370[4] = {0x9E081993L,0x9E081993L,0x9E081993L,0x9E081993L};
                        int32_t l_372 = 2L;
                        int32_t *l_371 = &l_372;
                        int32_t *l_373 = (void*)0;
                        uint8_t l_376 = 1UL;
                        uint8_t *l_375 = &l_376;
                        uint8_t **l_374[9] = {&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375,&l_375};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_366[i] = 0x60L;
                        l_350 = ((l_364 = (l_366[0] , l_367.y)) , (l_368 , (l_369[0][8][0] , l_370[0])));
                        l_373 = l_371;
                        l_374[4] = (void*)0;
                    }
                    else
                    { /* block id: 153 */
                        uint8_t l_377[3];
                        uint8_t l_378[7] = {1UL,255UL,1UL,1UL,255UL,1UL,1UL};
                        uint32_t l_379 = 0xC8E91322L;
                        uint32_t l_380 = 1UL;
                        int32_t l_381[9][9][3] = {{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}},{{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L},{0L,0x6EFC33BFL,0L}}};
                        int8_t l_382 = (-1L);
                        int32_t l_383 = 9L;
                        int16_t l_384 = 0L;
                        int32_t l_385 = (-2L);
                        int32_t l_386 = 0x19182367L;
                        uint8_t l_387 = 1UL;
                        int16_t l_390[4] = {0L,0L,0L,0L};
                        int32_t l_391 = 1L;
                        uint32_t l_392 = 0x255FA594L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_377[i] = 0x55L;
                        l_379 ^= (l_378[3] = (l_350 |= l_377[1]));
                        l_350 |= l_380;
                        --l_387;
                        ++l_392;
                    }
                    l_396[6] = l_395;
                    unsigned int result = 0;
                    result += l_350;
                    result += l_361;
                    result += l_364;
                    result += l_365;
                    result += l_395;
                    int l_396_i0;
                    for (l_396_i0 = 0; l_396_i0 < 7; l_396_i0++) {
                        result += l_396[l_396_i0];
                    }
                    atomic_add(&p_656->g_special_values[42 * get_linear_group_id() + 30], result);
                }
                else
                { /* block id: 162 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 165 */
                int32_t **l_397 = &l_8;
                (*l_397) = l_10;
                (*l_397) = l_348;
            }
            for (p_656->g_92 = 0; (p_656->g_92 < 1); p_656->g_92 = safe_add_func_int8_t_s_s(p_656->g_92, 1))
            { /* block id: 171 */
                int8_t l_402 = 0x2CL;
                int32_t l_403 = 0x17CE0806L;
                int32_t l_404 = 0x4D192372L;
                int32_t l_405[8][2] = {{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)},{0x53C15AD4L,(-1L)}};
                uint16_t *l_421[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                VECTOR(uint16_t, 8) l_424 = (VECTOR(uint16_t, 8))(0x9BEDL, (VECTOR(uint16_t, 4))(0x9BEDL, (VECTOR(uint16_t, 2))(0x9BEDL, 0x6367L), 0x6367L), 0x6367L, 0x9BEDL, 0x6367L);
                uint32_t **l_431 = &l_348;
                uint32_t *l_444[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_406.s6--;
                if ((atomic_inc(&p_656->g_atomic_input[42 * get_linear_group_id() + 41]) == 1))
                { /* block id: 174 */
                    uint32_t l_409 = 0UL;
                    int16_t l_410 = (-1L);
                    l_410 = l_409;
                    unsigned int result = 0;
                    result += l_409;
                    result += l_410;
                    atomic_add(&p_656->g_special_values[42 * get_linear_group_id() + 41], result);
                }
                else
                { /* block id: 176 */
                    (1 + 1);
                }
                for (p_656->g_205 = 0; (p_656->g_205 <= 3); ++p_656->g_205)
                { /* block id: 181 */
                    for (l_402 = 5; (l_402 >= (-28)); l_402 = safe_sub_func_int32_t_s_s(l_402, 7))
                    { /* block id: 184 */
                        return p_7;
                    }
                    return p_7;
                }
                l_55 = (l_404 = (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((p_7 , (l_300.x | GROUP_DIVERGE(1, 1))), ((l_218 = p_656->g_206.sb) , (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0x34FAL, ((VECTOR(uint16_t, 2))(l_424.s57)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x0BA4L, 1UL)).xyyx)), ((VECTOR(uint16_t, 2))(0x35ACL, 2UL)), 65527UL, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(l_424.s2, (safe_sub_func_int8_t_s_s((((*l_431) = (void*)0) == (void*)0), (((safe_mod_func_uint32_t_u_u(((((VECTOR(uint64_t, 4))(p_656->g_434.s3643)).x , ((((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x5922L, (-5L), 0x5E97L, (((safe_lshift_func_uint16_t_u_s(((l_401[1] = (safe_lshift_func_int16_t_s_u(((((0x3AD9857C1E255D05L | (safe_unary_minus_func_uint8_t_u(((**l_345) = ((p_7 > ((((*l_349)--) && (safe_sub_func_int8_t_s_s(((l_246 |= (((p_7 == 0x0863L) ^ (*l_10)) ^ p_7)) , p_656->g_327.s6), 0UL))) , p_7)) != l_315.x))))) == p_656->g_50.s1) , p_656->g_14) && 0x397B9D95L), p_656->g_238[0][0][5]))) ^ (-6L)), 6)) , &p_656->g_124) != &p_656->g_124), p_7, l_403, 1L, 0x749DL)))).lo, ((VECTOR(int16_t, 4))(5L))))).zwywxyxzwwzxxzyx, ((VECTOR(int16_t, 16))(0x3CADL))))).sf7, ((VECTOR(int16_t, 2))(0x26F6L)), ((VECTOR(int16_t, 2))(0x4F1BL))))).even ^ p_656->g_238[5][0][2]) >= l_300.y)) | p_656->g_238[2][0][5]), l_406.s5)) | p_656->g_57) == p_656->g_63[0][0][3]))))), p_7)) && p_7), p_7, 0xE2AEL, FAKE_DIVERGE(p_656->group_2_offset, get_group_id(2), 10), 0xA1D8L, 65532UL)).s3, 8))))) == GROUP_DIVERGE(1, 1)) == p_7) < 0x2BCC187775D9F8CEL), 1UL)), (-3L))));
            }
        }
        for (l_324 = 0; (l_324 == (-8)); l_324 = safe_sub_func_int16_t_s_s(l_324, 8))
        { /* block id: 201 */
            int64_t l_449 = 0L;
            int32_t l_450 = (-1L);
            VECTOR(int32_t, 4) l_451 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), (-1L)), (-1L));
            uint8_t ***l_481[8][10][3] = {{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}},{{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345},{&p_656->g_180[2],&p_656->g_180[2],&l_345}}};
            int i, j, k;
            for (l_218 = 0; (l_218 >= 25); l_218 = safe_add_func_int32_t_s_s(l_218, 1))
            { /* block id: 204 */
                uint32_t l_452 = 3UL;
                int32_t l_462 = 0x6E1B6D20L;
                int32_t l_464 = 1L;
                int32_t l_465[2][8][1] = {{{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L}},{{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L},{0x7FFEC621L}}};
                VECTOR(uint64_t, 16) l_486 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL), 1UL, 18446744073709551608UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 18446744073709551608UL, 1UL, 18446744073709551608UL, 1UL);
                VECTOR(int8_t, 2) l_496 = (VECTOR(int8_t, 2))(0x2CL, 1L);
                int i, j, k;
                l_55 |= 0x6021FDB7L;
                ++l_452;
                for (p_656->g_14 = 0; (p_656->g_14 == (-27)); --p_656->g_14)
                { /* block id: 209 */
                    int32_t l_459 = 0x30705AA6L;
                    int32_t l_460 = 0x0AFBB91FL;
                    int32_t l_463 = 0x7C576EEFL;
                    int32_t l_467 = (-3L);
                    int32_t *l_485 = &l_463;
                    uint64_t l_495[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_495[i] = 18446744073709551613UL;
                    for (p_656->g_124 = 0; (p_656->g_124 >= 47); p_656->g_124++)
                    { /* block id: 212 */
                        int32_t l_461[10][3][4] = {{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}},{{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L},{0x75AF4E75L,0x6FC64567L,(-7L),0x271C0273L}}};
                        int i, j, k;
                        if (l_459)
                            break;
                        --l_468;
                        (*p_656->g_482) = ((0x72L <= (l_218 <= (l_449 || (safe_div_func_uint16_t_u_u((!((safe_add_func_uint8_t_u_u(0x49L, (p_7 & ((*l_58) = p_656->g_434.s3)))) && (safe_rshift_func_uint8_t_u_s((!((p_7 && (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((p_7 , &p_656->g_180[0]) == l_481[0][2][0]), p_656->g_313.se)) && FAKE_DIVERGE(p_656->group_1_offset, get_group_id(1), 10)), l_461[7][1][1]))) < p_7)), p_656->g_92)))), p_7))))) , &l_465[1][6][0]);
                        (*p_656->g_483) = &l_461[6][2][1];
                    }
                    l_465[0][2][0] = (((VECTOR(uint64_t, 16))(p_656->g_484.yxyyyyyyyxxyyxyy)).s2 <= FAKE_DIVERGE(p_656->local_0_offset, get_local_id(0), 10));
                    l_485 = (void*)0;
                    l_451.y = (((((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_486.sb274d798)).s3165507074313016)).odd, ((VECTOR(uint64_t, 2))(l_487.yw)).xxxyyxyx))).s6 || 0x599AD71CC998F23BL) >= (l_451.y , 0x9BB47C7C3BB8EAD9L)) || ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 16))((-4L), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_492.zx)), 0x00L, 0x4FL)).zxyzzxwzyzzxzzww, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(0x37L, ((void*)0 != l_493), 0L, (-3L))).wzxyzwxyzyyzzzyz, ((VECTOR(int8_t, 2))(p_656->g_494.sdd)).xxxxxxxxyxxxyyyy))).s9eb1)).wyxyxzyxxxwzzxyy))).sb3, ((VECTOR(int8_t, 4))(0x47L, 0x09L, 0L, (-10L))).odd))), ((*l_56) |= (l_495[2] & l_492.y)), (!0x2AL), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_496.yxxyyyyx)).s26)), p_7, 0x21L, l_451.x, p_656->g_238[0][0][5], 0x0AL, p_656->g_14, 6L, (-8L), (-4L))).sb, p_7)), p_656->g_122[9][1][1])) & p_7) >= l_315.y) < l_468));
                }
                if ((atomic_inc(&p_656->g_atomic_input[42 * get_linear_group_id() + 37]) == 3))
                { /* block id: 225 */
                    int32_t l_497 = 0L;
                    int8_t l_498 = 0L;
                    int32_t l_499 = 0x2FB98CACL;
                    uint8_t l_500[5][6][8] = {{{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL}},{{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL}},{{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL}},{{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL}},{{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL},{0x22L,0xD2L,0xEAL,255UL,0xFAL,0xFAL,255UL,0xEAL}}};
                    int i, j, k;
                    --l_500[1][4][6];
                    unsigned int result = 0;
                    result += l_497;
                    result += l_498;
                    result += l_499;
                    int l_500_i0, l_500_i1, l_500_i2;
                    for (l_500_i0 = 0; l_500_i0 < 5; l_500_i0++) {
                        for (l_500_i1 = 0; l_500_i1 < 6; l_500_i1++) {
                            for (l_500_i2 = 0; l_500_i2 < 8; l_500_i2++) {
                                result += l_500[l_500_i0][l_500_i1][l_500_i2];
                            }
                        }
                    }
                    atomic_add(&p_656->g_special_values[42 * get_linear_group_id() + 37], result);
                }
                else
                { /* block id: 227 */
                    (1 + 1);
                }
            }
            --l_507;
        }
    }
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_21(int32_t  p_22, int32_t  p_23, uint32_t  p_24, int32_t  p_25, int64_t  p_26, struct S1 * p_656)
{ /* block id: 84 */
    if ((atomic_inc(&p_656->l_atomic_input[36]) == 6))
    { /* block id: 86 */
        uint16_t l_243 = 0x8A9CL;
        --l_243;
        unsigned int result = 0;
        result += l_243;
        atomic_add(&p_656->l_special_values[36], result);
    }
    else
    { /* block id: 88 */
        (1 + 1);
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_9 p_656->g_111 p_656->g_205 p_656->g_75
 * writes: p_656->g_238 p_656->g_205
 */
uint8_t  func_27(int32_t * p_28, int64_t  p_29, uint32_t  p_30, int64_t  p_31, uint8_t  p_32, struct S1 * p_656)
{ /* block id: 78 */
    uint16_t l_223 = 5UL;
    uint8_t ***l_236 = &p_656->g_180[2];
    uint64_t *l_237 = &p_656->g_238[0][0][5];
    uint32_t *l_239 = &p_656->g_205;
    int32_t l_240 = 0x6680C010L;
    int32_t *l_242 = &l_240;
    (*l_242) = ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((l_223 | (0x3F771F14L > (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x7AL, (((+(*p_28)) , 0xEDC05529L) >= ((safe_div_func_int8_t_s_s(p_30, (safe_add_func_int8_t_s_s(((((*l_239) |= (p_30 && (((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((*l_237) = ((&p_656->g_180[0] == l_236) | p_656->g_111)), l_223)), l_223)) , &p_656->g_57) != (void*)0))) > (*p_28)) | 0x3DL), l_240)))) ^ l_240)))), p_656->g_75.x)))) && 4UL), ((VECTOR(int8_t, 2))(1L)), 1L)).x, l_240)) >= l_223);
    (*l_242) = (*l_242);
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_92 p_656->g_14 p_656->g_9 p_656->g_196 p_656->g_200 p_656->g_206 p_656->g_63 p_656->g_205 p_656->g_216
 * writes: p_656->g_92 p_656->g_14 p_656->g_63 p_656->g_205 p_656->g_217
 */
int32_t * func_33(int32_t * p_34, int32_t * p_35, struct S1 * p_656)
{ /* block id: 61 */
    VECTOR(int8_t, 2) l_212 = (VECTOR(int8_t, 2))(0L, 0x6CL);
    int16_t **l_215 = &p_656->g_89;
    int i;
    for (p_656->g_92 = 0; (p_656->g_92 <= 44); p_656->g_92 = safe_add_func_uint32_t_u_u(p_656->g_92, 2))
    { /* block id: 64 */
        int8_t l_194 = (-5L);
        VECTOR(int16_t, 2) l_201 = (VECTOR(int16_t, 2))(0x6101L, 0x6F28L);
        int32_t l_214 = 1L;
        int i;
        for (p_656->g_14 = (-23); (p_656->g_14 != (-13)); p_656->g_14++)
        { /* block id: 67 */
            int32_t *l_195 = (void*)0;
            VECTOR(int32_t, 4) l_197 = (VECTOR(int32_t, 4))(0x55EBF1CAL, (VECTOR(int32_t, 2))(0x55EBF1CAL, 0L), 0L);
            int32_t *l_202 = &p_656->g_63[1][4][3];
            uint32_t *l_204 = &p_656->g_205;
            uint32_t **l_203 = &l_204;
            uint32_t *l_209 = &p_656->g_205;
            int32_t *l_213 = (void*)0;
            int i;
            if ((*p_34))
                break;
            (*p_656->g_196) = l_194;
            (*l_202) = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_197.zzww)).lo, (int32_t)(safe_add_func_uint16_t_u_u(l_194, ((VECTOR(int16_t, 16))(6L, 0x1025L, 0x0B6BL, 3L, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(p_656->g_200.yyxyyyxx)), ((VECTOR(int16_t, 2))(l_201.xx)).xyxyxyyx))), 0L, 0x6D9FL, 5L, 1L)).sc))))).hi;
            l_214 ^= ((((*l_203) = (void*)0) == p_35) > ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_656->g_206.s251489be881b78ed)))).even)).s2 && (safe_rshift_func_int8_t_s_s(((*p_656->g_196) && ((*l_209)--)), 2))) ^ ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_212.yy)), 0x70L, 0L)).odd)).yxxxxxxyyxxxxyyy)).s0b)).odd));
        }
        (*p_656->g_216) = l_215;
    }
    return &p_656->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_50 p_656->g_49 p_656->g_75 p_656->g_9 p_656->g_92 p_656->g_57 p_656->g_63 p_656->g_59 p_656->g_122 p_656->g_124 p_656->g_14 p_656->g_111 p_656->l_comm_values p_656->g_180
 * writes: p_656->g_62 p_656->g_49 p_656->g_89 p_656->g_92 p_656->g_14 p_656->g_111 p_656->g_122 p_656->g_63 p_656->g_50 p_656->g_124 p_656->g_180
 */
int32_t * func_36(int8_t  p_37, int32_t * p_38, int32_t * p_39, int32_t  p_40, uint16_t  p_41, struct S1 * p_656)
{ /* block id: 16 */
    int32_t *l_61 = &p_656->g_9;
    int32_t **l_60[2][1][5] = {{{&l_61,&l_61,&l_61,&l_61,&l_61}},{{&l_61,&l_61,&l_61,&l_61,&l_61}}};
    VECTOR(uint16_t, 16) l_64 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    uint8_t l_65 = 251UL;
    uint8_t *l_72 = &p_656->g_49;
    int8_t *l_84[4];
    int16_t *l_87[2][10] = {{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14,(void*)0,(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14,(void*)0},{(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14,(void*)0,(void*)0,&p_656->g_14,&p_656->g_14,&p_656->g_14,(void*)0}};
    int16_t **l_88[5] = {&l_87[1][5],&l_87[1][5],&l_87[1][5],&l_87[1][5],&l_87[1][5]};
    int32_t *l_189 = &p_656->g_9;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_84[i] = &p_656->g_59[1][4];
    p_656->g_62[5][3] = &p_656->g_9;
    (*p_38) = (((VECTOR(uint16_t, 2))(l_64.s4d)).odd > func_46(p_656->g_50.sd, &p_656->g_9, p_656));
    (*p_38) = (!((func_46((l_65 < (func_46((safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(((func_46((p_41 ^ ((safe_add_func_uint8_t_u_u((--(*l_72)), GROUP_DIVERGE(0, 1))) > ((((VECTOR(uint16_t, 4))(p_656->g_75.yyyx)).x == (p_40 > ((func_76((p_37 = (safe_mod_func_int64_t_s_s(0x20AFAF418CC4BB82L, p_40))), (*l_61), func_85((p_656->g_89 = l_87[1][5]), p_656), p_656->g_57, (*l_61), p_656) , 0x7F30L) != 65535UL))) == p_40))), l_189, p_656) , (void*)0) != &p_656->g_57), GROUP_DIVERGE(2, 1))), p_656->g_59[3][0])), &p_656->g_9, p_656) | p_41)), &p_656->g_9, p_656) ^ 0x4805C145L) ^ p_656->g_59[3][0]));
    return &p_656->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_49
 * writes:
 */
uint8_t  func_46(uint32_t  p_47, int32_t * p_48, struct S1 * p_656)
{ /* block id: 11 */
    return p_656->g_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_63 p_656->g_59 p_656->g_50 p_656->g_122 p_656->g_92 p_656->g_124 p_656->g_14 p_656->g_9 p_656->g_57 p_656->g_111 p_656->l_comm_values p_656->g_180
 * writes: p_656->g_14 p_656->g_111 p_656->g_122 p_656->g_63 p_656->g_50 p_656->g_92 p_656->g_124 p_656->g_62 p_656->g_180
 */
uint64_t  func_76(int8_t  p_77, int32_t  p_78, int32_t ** p_79, uint64_t  p_80, uint32_t  p_81, struct S1 * p_656)
{ /* block id: 25 */
    uint32_t l_99[7][1];
    uint8_t *l_110 = &p_656->g_111;
    int32_t l_112 = 0x0C4E8C28L;
    int32_t l_138 = 0x3B4AA2B9L;
    uint32_t *l_154 = (void*)0;
    VECTOR(uint64_t, 4) l_159 = (VECTOR(uint64_t, 4))(0x8D3784CA32801D18L, (VECTOR(uint64_t, 2))(0x8D3784CA32801D18L, 18446744073709551611UL), 18446744073709551611UL);
    int32_t l_176 = 3L;
    int32_t *l_183 = &l_138;
    int32_t *l_184[6] = {&p_656->g_63[0][2][0],&p_656->g_63[0][2][0],&p_656->g_63[0][2][0],&p_656->g_63[0][2][0],&p_656->g_63[0][2][0],&p_656->g_63[0][2][0]};
    int16_t l_185[1][1][7] = {{{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}}};
    uint16_t l_186 = 0xECB8L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_99[i][j] = 0xD93BA38BL;
    }
    for (p_78 = 0; (p_78 <= 9); p_78++)
    { /* block id: 28 */
        int32_t *l_97 = &p_656->g_63[2][4][2];
        int32_t *l_98[6][4] = {{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]},{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]},{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]},{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]},{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]},{&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0],&p_656->g_63[1][2][0]}};
        uint32_t *l_113 = &l_99[4][0];
        int16_t *l_120 = &p_656->g_14;
        uint32_t *l_121 = &p_656->g_122[0][5][1];
        uint32_t *l_123[10] = {&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124,&p_656->g_124};
        int16_t *l_125 = (void*)0;
        int16_t *l_126 = (void*)0;
        int16_t *l_127 = (void*)0;
        int16_t *l_128 = (void*)0;
        int16_t *l_129 = (void*)0;
        int16_t *l_130 = (void*)0;
        int16_t *l_131 = (void*)0;
        int16_t *l_132 = (void*)0;
        int16_t *l_133 = (void*)0;
        int16_t *l_134 = (void*)0;
        int16_t *l_135 = (void*)0;
        int16_t *l_136 = (void*)0;
        int16_t *l_137 = (void*)0;
        int i, j;
        ++l_99[5][0];
        l_138 = ((((safe_div_func_int8_t_s_s((((VECTOR(int16_t, 4))(0x76E8L, 0x5084L, 0x6E28L, 0x72FFL)).z == (l_112 = (p_656->g_50.s8 = (safe_sub_func_int32_t_s_s(((((*l_97) = ((*l_121) &= (((4L <= (((safe_div_func_int16_t_s_s(p_80, (safe_sub_func_uint64_t_u_u((l_110 == (void*)0), ((((*l_113) &= l_112) || (l_112 & (((((*l_97) != ((*l_110) = (safe_lshift_func_int16_t_s_u(((*l_120) = (safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((6UL != 65534UL) >= (*l_97)), p_77)) > 0x43L), p_81))), l_99[6][0])))) > p_77) && p_656->g_59[3][0]) != 18446744073709551612UL))) , p_656->g_50.s2))))) && l_112) , (-2L))) , 0x32L) | l_112))) , (-9L)) , (-2L)), l_112))))), 0x46L)) < 0x04560B182A6E03DAL) || (-1L)) && p_656->g_59[3][0]);
        for (p_656->g_92 = 0; (p_656->g_92 == 44); p_656->g_92 = safe_add_func_uint8_t_u_u(p_656->g_92, 2))
        { /* block id: 40 */
            uint32_t l_143 = 0x08D76415L;
            for (p_656->g_124 = 0; (p_656->g_124 > 50); ++p_656->g_124)
            { /* block id: 43 */
                (*p_79) = &p_656->g_63[3][2][4];
            }
            if (l_112)
                break;
            ++l_143;
        }
    }
    for (p_656->g_14 = 28; (p_656->g_14 == 0); p_656->g_14 = safe_sub_func_int64_t_s_s(p_656->g_14, 3))
    { /* block id: 52 */
        uint16_t l_150[3][4][3] = {{{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L}},{{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L}},{{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L},{0x04B6L,0x04B6L,0x04B6L}}};
        VECTOR(uint32_t, 16) l_151 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x255F038DL), 0x255F038DL), 0x255F038DL, 1UL, 0x255F038DL, (VECTOR(uint32_t, 2))(1UL, 0x255F038DL), (VECTOR(uint32_t, 2))(1UL, 0x255F038DL), 1UL, 0x255F038DL, 1UL, 0x255F038DL);
        int32_t *l_164 = &l_138;
        int32_t *l_165 = &p_656->g_63[6][1][0];
        int32_t *l_166 = &l_112;
        int32_t *l_167 = &p_656->g_63[2][4][2];
        int32_t *l_168 = &p_656->g_63[2][4][2];
        int32_t *l_169 = &p_656->g_63[5][4][4];
        int32_t *l_170 = &p_656->g_63[7][0][4];
        int32_t *l_171 = &p_656->g_63[0][2][3];
        int32_t *l_172 = (void*)0;
        int32_t *l_173 = (void*)0;
        int32_t *l_174 = &l_138;
        int32_t *l_175[10] = {&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4],&p_656->g_63[8][4][4]};
        uint64_t l_177 = 0x6C83C06E78E42A5BL;
        uint8_t ***l_182 = &p_656->g_180[0];
        int i, j, k;
        l_112 &= (safe_add_func_int64_t_s_s(((l_150[1][1][0] , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_151.sd4)).yyxy)).even)).hi) ^ ((((-10L) > (((safe_mul_func_int16_t_s_s((((void*)0 == &p_656->g_59[8][2]) < (l_154 != &p_656->g_122[0][5][1])), (((safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((0x09L <= ((((VECTOR(uint64_t, 8))(l_159.wywzxxyz)).s7 == (safe_mul_func_uint16_t_u_u((p_77 , (~(((VECTOR(int64_t, 8))((safe_sub_func_uint64_t_u_u(p_77, p_656->g_9)), 3L, 0x641CA8B2C8D88053L, p_78, ((VECTOR(int64_t, 4))(1L)))).s3 | p_656->g_57))), 1UL))) , 0x5FL)), 0UL)) >= p_656->g_122[0][5][1]), l_150[1][1][0])) > l_138) ^ p_656->g_59[2][2]))) < (-8L)) , 0x5F1AL)) != p_656->g_111) | l_150[1][1][0])), p_656->l_comm_values[(safe_mod_func_uint32_t_u_u(p_656->tid, 144))]));
        ++l_177;
        (*l_182) = p_656->g_180[1];
    }
    --l_186;
    return p_656->g_50.s9;
}


/* ------------------------------------------ */
/* 
 * reads : p_656->g_92
 * writes: p_656->g_92
 */
int32_t ** func_85(int16_t * p_86, struct S1 * p_656)
{ /* block id: 22 */
    int32_t *l_90 = &p_656->g_63[5][1][3];
    int32_t *l_91[2];
    int i;
    for (i = 0; i < 2; i++)
        l_91[i] = &p_656->g_63[2][4][2];
    --p_656->g_92;
    return &p_656->g_62[0][6];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[42];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 42; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[42];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 42; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[144];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 144; i++)
            l_comm_values[i] = 1;
    struct S1 c_657;
    struct S1* p_656 = &c_657;
    struct S1 c_658 = {
        8L, // p_656->g_9
        0x0F3FL, // p_656->g_14
        0x21DC7E9069002FCEL, // p_656->g_15
        {0x0F4FL}, // p_656->g_16
        0xFCL, // p_656->g_49
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int16_t, 2))(0L, (-3L)), (VECTOR(int16_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L)), // p_656->g_50
        0x53L, // p_656->g_57
        {{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L},{(-7L),(-1L),(-1L),(-7L),8L,0x0CL,0x34L}}, // p_656->g_59
        {{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}},{{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L},{4L,0L,0x7CC60535L,0x519AA3B2L,0x7CC60535L}}}, // p_656->g_63
        {{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]},{&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_9,&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]}}, // p_656->g_62
        (VECTOR(uint16_t, 2))(4UL, 0xB754L), // p_656->g_75
        &p_656->g_14, // p_656->g_89
        65529UL, // p_656->g_92
        0xCEL, // p_656->g_111
        {{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}},{{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL},{4294967288UL,4294967288UL,4UL}}}, // p_656->g_122
        0xE47C6D75L, // p_656->g_124
        {{&p_656->g_111,&p_656->g_111,&p_656->g_111,&p_656->g_111},{&p_656->g_111,&p_656->g_111,&p_656->g_111,&p_656->g_111},{&p_656->g_111,&p_656->g_111,&p_656->g_111,&p_656->g_111},{&p_656->g_111,&p_656->g_111,&p_656->g_111,&p_656->g_111},{&p_656->g_111,&p_656->g_111,&p_656->g_111,&p_656->g_111}}, // p_656->g_181
        {&p_656->g_181[4][2],&p_656->g_181[4][2],&p_656->g_181[4][2]}, // p_656->g_180
        &p_656->g_63[5][0][0], // p_656->g_196
        (VECTOR(int16_t, 2))(0x6443L, 0x46AEL), // p_656->g_200
        0x4D1D46F6L, // p_656->g_205
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int64_t, 2))(0L, 5L), (VECTOR(int64_t, 2))(0L, 5L), 0L, 5L, 0L, 5L), // p_656->g_206
        &p_656->g_89, // p_656->g_217
        &p_656->g_217, // p_656->g_216
        {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}}}, // p_656->g_238
        {&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2],&p_656->g_63[2][4][2]}, // p_656->g_241
        (void*)0, // p_656->g_255
        (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0xF032L), 0xF032L), 0xF032L, 65527UL, 0xF032L, (VECTOR(uint16_t, 2))(65527UL, 0xF032L), (VECTOR(uint16_t, 2))(65527UL, 0xF032L), 65527UL, 0xF032L, 65527UL, 0xF032L), // p_656->g_301
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65533UL), 65533UL), 65533UL, 65535UL, 65533UL, (VECTOR(uint16_t, 2))(65535UL, 65533UL), (VECTOR(uint16_t, 2))(65535UL, 65533UL), 65535UL, 65533UL, 65535UL, 65533UL), // p_656->g_313
        (VECTOR(int32_t, 16))(0x6B50FD8BL, (VECTOR(int32_t, 4))(0x6B50FD8BL, (VECTOR(int32_t, 2))(0x6B50FD8BL, 0x33208D91L), 0x33208D91L), 0x33208D91L, 0x6B50FD8BL, 0x33208D91L, (VECTOR(int32_t, 2))(0x6B50FD8BL, 0x33208D91L), (VECTOR(int32_t, 2))(0x6B50FD8BL, 0x33208D91L), 0x6B50FD8BL, 0x33208D91L, 0x6B50FD8BL, 0x33208D91L), // p_656->g_327
        (VECTOR(uint64_t, 4))(0x11966ADCC8B48429L, (VECTOR(uint64_t, 2))(0x11966ADCC8B48429L, 1UL), 1UL), // p_656->g_332
        (VECTOR(uint64_t, 8))(0x7F57B31274F8E3D7L, (VECTOR(uint64_t, 4))(0x7F57B31274F8E3D7L, (VECTOR(uint64_t, 2))(0x7F57B31274F8E3D7L, 0UL), 0UL), 0UL, 0x7F57B31274F8E3D7L, 0UL), // p_656->g_434
        &p_656->g_62[1][3], // p_656->g_482
        &p_656->g_62[5][3], // p_656->g_483
        (VECTOR(uint64_t, 2))(0x7A90D7F2EA51787CL, 6UL), // p_656->g_484
        (VECTOR(int8_t, 16))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x41L), 0x41L), 0x41L, 0x73L, 0x41L, (VECTOR(int8_t, 2))(0x73L, 0x41L), (VECTOR(int8_t, 2))(0x73L, 0x41L), 0x73L, 0x41L, 0x73L, 0x41L), // p_656->g_494
        (void*)0, // p_656->g_554
        {0xF93FE468L}, // p_656->g_570
        (VECTOR(uint8_t, 8))(0x41L, (VECTOR(uint8_t, 4))(0x41L, (VECTOR(uint8_t, 2))(0x41L, 0UL), 0UL), 0UL, 0x41L, 0UL), // p_656->g_607
        {(void*)0}, // p_656->g_610
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), // p_656->g_614
        (VECTOR(int32_t, 4))(0x13EA8830L, (VECTOR(int32_t, 2))(0x13EA8830L, 0x4C45C5A0L), 0x4C45C5A0L), // p_656->g_618
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1C216290L), 0x1C216290L), 0x1C216290L, 8L, 0x1C216290L, (VECTOR(int32_t, 2))(8L, 0x1C216290L), (VECTOR(int32_t, 2))(8L, 0x1C216290L), 8L, 0x1C216290L, 8L, 0x1C216290L), // p_656->g_619
        {4294967295UL}, // p_656->g_636
        (VECTOR(int64_t, 2))(0x4A83207FBB77BBEAL, 0x53FF28E672D979F8L), // p_656->g_639
        0, // p_656->v_collective
        sequence_input[get_global_id(0)], // p_656->global_0_offset
        sequence_input[get_global_id(1)], // p_656->global_1_offset
        sequence_input[get_global_id(2)], // p_656->global_2_offset
        sequence_input[get_local_id(0)], // p_656->local_0_offset
        sequence_input[get_local_id(1)], // p_656->local_1_offset
        sequence_input[get_local_id(2)], // p_656->local_2_offset
        sequence_input[get_group_id(0)], // p_656->group_0_offset
        sequence_input[get_group_id(1)], // p_656->group_1_offset
        sequence_input[get_group_id(2)], // p_656->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 144)), permutations[0][get_linear_local_id()])), // p_656->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_657 = c_658;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_656);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_656->g_9, "p_656->g_9", print_hash_value);
    transparent_crc(p_656->g_14, "p_656->g_14", print_hash_value);
    transparent_crc(p_656->g_15, "p_656->g_15", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_656->g_16[i], "p_656->g_16[i]", print_hash_value);

    }
    transparent_crc(p_656->g_49, "p_656->g_49", print_hash_value);
    transparent_crc(p_656->g_50.s0, "p_656->g_50.s0", print_hash_value);
    transparent_crc(p_656->g_50.s1, "p_656->g_50.s1", print_hash_value);
    transparent_crc(p_656->g_50.s2, "p_656->g_50.s2", print_hash_value);
    transparent_crc(p_656->g_50.s3, "p_656->g_50.s3", print_hash_value);
    transparent_crc(p_656->g_50.s4, "p_656->g_50.s4", print_hash_value);
    transparent_crc(p_656->g_50.s5, "p_656->g_50.s5", print_hash_value);
    transparent_crc(p_656->g_50.s6, "p_656->g_50.s6", print_hash_value);
    transparent_crc(p_656->g_50.s7, "p_656->g_50.s7", print_hash_value);
    transparent_crc(p_656->g_50.s8, "p_656->g_50.s8", print_hash_value);
    transparent_crc(p_656->g_50.s9, "p_656->g_50.s9", print_hash_value);
    transparent_crc(p_656->g_50.sa, "p_656->g_50.sa", print_hash_value);
    transparent_crc(p_656->g_50.sb, "p_656->g_50.sb", print_hash_value);
    transparent_crc(p_656->g_50.sc, "p_656->g_50.sc", print_hash_value);
    transparent_crc(p_656->g_50.sd, "p_656->g_50.sd", print_hash_value);
    transparent_crc(p_656->g_50.se, "p_656->g_50.se", print_hash_value);
    transparent_crc(p_656->g_50.sf, "p_656->g_50.sf", print_hash_value);
    transparent_crc(p_656->g_57, "p_656->g_57", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_656->g_59[i][j], "p_656->g_59[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_656->g_63[i][j][k], "p_656->g_63[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_656->g_75.x, "p_656->g_75.x", print_hash_value);
    transparent_crc(p_656->g_75.y, "p_656->g_75.y", print_hash_value);
    transparent_crc(p_656->g_92, "p_656->g_92", print_hash_value);
    transparent_crc(p_656->g_111, "p_656->g_111", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_656->g_122[i][j][k], "p_656->g_122[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_656->g_124, "p_656->g_124", print_hash_value);
    transparent_crc(p_656->g_200.x, "p_656->g_200.x", print_hash_value);
    transparent_crc(p_656->g_200.y, "p_656->g_200.y", print_hash_value);
    transparent_crc(p_656->g_205, "p_656->g_205", print_hash_value);
    transparent_crc(p_656->g_206.s0, "p_656->g_206.s0", print_hash_value);
    transparent_crc(p_656->g_206.s1, "p_656->g_206.s1", print_hash_value);
    transparent_crc(p_656->g_206.s2, "p_656->g_206.s2", print_hash_value);
    transparent_crc(p_656->g_206.s3, "p_656->g_206.s3", print_hash_value);
    transparent_crc(p_656->g_206.s4, "p_656->g_206.s4", print_hash_value);
    transparent_crc(p_656->g_206.s5, "p_656->g_206.s5", print_hash_value);
    transparent_crc(p_656->g_206.s6, "p_656->g_206.s6", print_hash_value);
    transparent_crc(p_656->g_206.s7, "p_656->g_206.s7", print_hash_value);
    transparent_crc(p_656->g_206.s8, "p_656->g_206.s8", print_hash_value);
    transparent_crc(p_656->g_206.s9, "p_656->g_206.s9", print_hash_value);
    transparent_crc(p_656->g_206.sa, "p_656->g_206.sa", print_hash_value);
    transparent_crc(p_656->g_206.sb, "p_656->g_206.sb", print_hash_value);
    transparent_crc(p_656->g_206.sc, "p_656->g_206.sc", print_hash_value);
    transparent_crc(p_656->g_206.sd, "p_656->g_206.sd", print_hash_value);
    transparent_crc(p_656->g_206.se, "p_656->g_206.se", print_hash_value);
    transparent_crc(p_656->g_206.sf, "p_656->g_206.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_656->g_238[i][j][k], "p_656->g_238[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_656->g_301.s0, "p_656->g_301.s0", print_hash_value);
    transparent_crc(p_656->g_301.s1, "p_656->g_301.s1", print_hash_value);
    transparent_crc(p_656->g_301.s2, "p_656->g_301.s2", print_hash_value);
    transparent_crc(p_656->g_301.s3, "p_656->g_301.s3", print_hash_value);
    transparent_crc(p_656->g_301.s4, "p_656->g_301.s4", print_hash_value);
    transparent_crc(p_656->g_301.s5, "p_656->g_301.s5", print_hash_value);
    transparent_crc(p_656->g_301.s6, "p_656->g_301.s6", print_hash_value);
    transparent_crc(p_656->g_301.s7, "p_656->g_301.s7", print_hash_value);
    transparent_crc(p_656->g_301.s8, "p_656->g_301.s8", print_hash_value);
    transparent_crc(p_656->g_301.s9, "p_656->g_301.s9", print_hash_value);
    transparent_crc(p_656->g_301.sa, "p_656->g_301.sa", print_hash_value);
    transparent_crc(p_656->g_301.sb, "p_656->g_301.sb", print_hash_value);
    transparent_crc(p_656->g_301.sc, "p_656->g_301.sc", print_hash_value);
    transparent_crc(p_656->g_301.sd, "p_656->g_301.sd", print_hash_value);
    transparent_crc(p_656->g_301.se, "p_656->g_301.se", print_hash_value);
    transparent_crc(p_656->g_301.sf, "p_656->g_301.sf", print_hash_value);
    transparent_crc(p_656->g_313.s0, "p_656->g_313.s0", print_hash_value);
    transparent_crc(p_656->g_313.s1, "p_656->g_313.s1", print_hash_value);
    transparent_crc(p_656->g_313.s2, "p_656->g_313.s2", print_hash_value);
    transparent_crc(p_656->g_313.s3, "p_656->g_313.s3", print_hash_value);
    transparent_crc(p_656->g_313.s4, "p_656->g_313.s4", print_hash_value);
    transparent_crc(p_656->g_313.s5, "p_656->g_313.s5", print_hash_value);
    transparent_crc(p_656->g_313.s6, "p_656->g_313.s6", print_hash_value);
    transparent_crc(p_656->g_313.s7, "p_656->g_313.s7", print_hash_value);
    transparent_crc(p_656->g_313.s8, "p_656->g_313.s8", print_hash_value);
    transparent_crc(p_656->g_313.s9, "p_656->g_313.s9", print_hash_value);
    transparent_crc(p_656->g_313.sa, "p_656->g_313.sa", print_hash_value);
    transparent_crc(p_656->g_313.sb, "p_656->g_313.sb", print_hash_value);
    transparent_crc(p_656->g_313.sc, "p_656->g_313.sc", print_hash_value);
    transparent_crc(p_656->g_313.sd, "p_656->g_313.sd", print_hash_value);
    transparent_crc(p_656->g_313.se, "p_656->g_313.se", print_hash_value);
    transparent_crc(p_656->g_313.sf, "p_656->g_313.sf", print_hash_value);
    transparent_crc(p_656->g_327.s0, "p_656->g_327.s0", print_hash_value);
    transparent_crc(p_656->g_327.s1, "p_656->g_327.s1", print_hash_value);
    transparent_crc(p_656->g_327.s2, "p_656->g_327.s2", print_hash_value);
    transparent_crc(p_656->g_327.s3, "p_656->g_327.s3", print_hash_value);
    transparent_crc(p_656->g_327.s4, "p_656->g_327.s4", print_hash_value);
    transparent_crc(p_656->g_327.s5, "p_656->g_327.s5", print_hash_value);
    transparent_crc(p_656->g_327.s6, "p_656->g_327.s6", print_hash_value);
    transparent_crc(p_656->g_327.s7, "p_656->g_327.s7", print_hash_value);
    transparent_crc(p_656->g_327.s8, "p_656->g_327.s8", print_hash_value);
    transparent_crc(p_656->g_327.s9, "p_656->g_327.s9", print_hash_value);
    transparent_crc(p_656->g_327.sa, "p_656->g_327.sa", print_hash_value);
    transparent_crc(p_656->g_327.sb, "p_656->g_327.sb", print_hash_value);
    transparent_crc(p_656->g_327.sc, "p_656->g_327.sc", print_hash_value);
    transparent_crc(p_656->g_327.sd, "p_656->g_327.sd", print_hash_value);
    transparent_crc(p_656->g_327.se, "p_656->g_327.se", print_hash_value);
    transparent_crc(p_656->g_327.sf, "p_656->g_327.sf", print_hash_value);
    transparent_crc(p_656->g_332.x, "p_656->g_332.x", print_hash_value);
    transparent_crc(p_656->g_332.y, "p_656->g_332.y", print_hash_value);
    transparent_crc(p_656->g_332.z, "p_656->g_332.z", print_hash_value);
    transparent_crc(p_656->g_332.w, "p_656->g_332.w", print_hash_value);
    transparent_crc(p_656->g_434.s0, "p_656->g_434.s0", print_hash_value);
    transparent_crc(p_656->g_434.s1, "p_656->g_434.s1", print_hash_value);
    transparent_crc(p_656->g_434.s2, "p_656->g_434.s2", print_hash_value);
    transparent_crc(p_656->g_434.s3, "p_656->g_434.s3", print_hash_value);
    transparent_crc(p_656->g_434.s4, "p_656->g_434.s4", print_hash_value);
    transparent_crc(p_656->g_434.s5, "p_656->g_434.s5", print_hash_value);
    transparent_crc(p_656->g_434.s6, "p_656->g_434.s6", print_hash_value);
    transparent_crc(p_656->g_434.s7, "p_656->g_434.s7", print_hash_value);
    transparent_crc(p_656->g_484.x, "p_656->g_484.x", print_hash_value);
    transparent_crc(p_656->g_484.y, "p_656->g_484.y", print_hash_value);
    transparent_crc(p_656->g_494.s0, "p_656->g_494.s0", print_hash_value);
    transparent_crc(p_656->g_494.s1, "p_656->g_494.s1", print_hash_value);
    transparent_crc(p_656->g_494.s2, "p_656->g_494.s2", print_hash_value);
    transparent_crc(p_656->g_494.s3, "p_656->g_494.s3", print_hash_value);
    transparent_crc(p_656->g_494.s4, "p_656->g_494.s4", print_hash_value);
    transparent_crc(p_656->g_494.s5, "p_656->g_494.s5", print_hash_value);
    transparent_crc(p_656->g_494.s6, "p_656->g_494.s6", print_hash_value);
    transparent_crc(p_656->g_494.s7, "p_656->g_494.s7", print_hash_value);
    transparent_crc(p_656->g_494.s8, "p_656->g_494.s8", print_hash_value);
    transparent_crc(p_656->g_494.s9, "p_656->g_494.s9", print_hash_value);
    transparent_crc(p_656->g_494.sa, "p_656->g_494.sa", print_hash_value);
    transparent_crc(p_656->g_494.sb, "p_656->g_494.sb", print_hash_value);
    transparent_crc(p_656->g_494.sc, "p_656->g_494.sc", print_hash_value);
    transparent_crc(p_656->g_494.sd, "p_656->g_494.sd", print_hash_value);
    transparent_crc(p_656->g_494.se, "p_656->g_494.se", print_hash_value);
    transparent_crc(p_656->g_494.sf, "p_656->g_494.sf", print_hash_value);
    transparent_crc(p_656->g_570.f0, "p_656->g_570.f0", print_hash_value);
    transparent_crc(p_656->g_607.s0, "p_656->g_607.s0", print_hash_value);
    transparent_crc(p_656->g_607.s1, "p_656->g_607.s1", print_hash_value);
    transparent_crc(p_656->g_607.s2, "p_656->g_607.s2", print_hash_value);
    transparent_crc(p_656->g_607.s3, "p_656->g_607.s3", print_hash_value);
    transparent_crc(p_656->g_607.s4, "p_656->g_607.s4", print_hash_value);
    transparent_crc(p_656->g_607.s5, "p_656->g_607.s5", print_hash_value);
    transparent_crc(p_656->g_607.s6, "p_656->g_607.s6", print_hash_value);
    transparent_crc(p_656->g_607.s7, "p_656->g_607.s7", print_hash_value);
    transparent_crc(p_656->g_614.x, "p_656->g_614.x", print_hash_value);
    transparent_crc(p_656->g_614.y, "p_656->g_614.y", print_hash_value);
    transparent_crc(p_656->g_614.z, "p_656->g_614.z", print_hash_value);
    transparent_crc(p_656->g_614.w, "p_656->g_614.w", print_hash_value);
    transparent_crc(p_656->g_618.x, "p_656->g_618.x", print_hash_value);
    transparent_crc(p_656->g_618.y, "p_656->g_618.y", print_hash_value);
    transparent_crc(p_656->g_618.z, "p_656->g_618.z", print_hash_value);
    transparent_crc(p_656->g_618.w, "p_656->g_618.w", print_hash_value);
    transparent_crc(p_656->g_619.s0, "p_656->g_619.s0", print_hash_value);
    transparent_crc(p_656->g_619.s1, "p_656->g_619.s1", print_hash_value);
    transparent_crc(p_656->g_619.s2, "p_656->g_619.s2", print_hash_value);
    transparent_crc(p_656->g_619.s3, "p_656->g_619.s3", print_hash_value);
    transparent_crc(p_656->g_619.s4, "p_656->g_619.s4", print_hash_value);
    transparent_crc(p_656->g_619.s5, "p_656->g_619.s5", print_hash_value);
    transparent_crc(p_656->g_619.s6, "p_656->g_619.s6", print_hash_value);
    transparent_crc(p_656->g_619.s7, "p_656->g_619.s7", print_hash_value);
    transparent_crc(p_656->g_619.s8, "p_656->g_619.s8", print_hash_value);
    transparent_crc(p_656->g_619.s9, "p_656->g_619.s9", print_hash_value);
    transparent_crc(p_656->g_619.sa, "p_656->g_619.sa", print_hash_value);
    transparent_crc(p_656->g_619.sb, "p_656->g_619.sb", print_hash_value);
    transparent_crc(p_656->g_619.sc, "p_656->g_619.sc", print_hash_value);
    transparent_crc(p_656->g_619.sd, "p_656->g_619.sd", print_hash_value);
    transparent_crc(p_656->g_619.se, "p_656->g_619.se", print_hash_value);
    transparent_crc(p_656->g_619.sf, "p_656->g_619.sf", print_hash_value);
    transparent_crc(p_656->g_636.f0, "p_656->g_636.f0", print_hash_value);
    transparent_crc(p_656->g_639.x, "p_656->g_639.x", print_hash_value);
    transparent_crc(p_656->g_639.y, "p_656->g_639.y", print_hash_value);
    transparent_crc(p_656->v_collective, "p_656->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 42; i++)
            transparent_crc(p_656->g_special_values[i + 42 * get_linear_group_id()], "p_656->g_special_values[i + 42 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 42; i++)
            transparent_crc(p_656->l_special_values[i], "p_656->l_special_values[i]", print_hash_value);
    transparent_crc(p_656->l_comm_values[get_linear_local_id()], "p_656->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_656->g_comm_values[get_linear_group_id() * 144 + get_linear_local_id()], "p_656->g_comm_values[get_linear_group_id() * 144 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
