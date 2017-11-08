// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 30,76,2 -l 3,19,2
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

__constant uint32_t permutations[10][114] = {
{8,54,50,44,43,16,0,100,101,63,53,108,39,35,30,23,9,97,90,73,13,88,77,65,78,85,94,49,72,2,82,60,112,102,92,15,34,14,52,38,89,4,105,111,17,32,20,69,106,28,93,55,96,24,12,21,25,6,29,75,81,5,76,37,26,46,45,10,58,47,67,7,19,87,48,66,1,22,51,33,98,11,18,70,99,64,71,107,42,41,36,74,80,103,83,113,86,109,57,59,68,3,31,40,56,110,95,27,104,84,79,61,91,62}, // permutation 0
{42,36,23,94,60,53,74,70,98,95,37,2,59,49,105,81,88,85,96,26,58,99,50,15,64,29,39,67,18,22,90,7,104,71,19,91,102,27,61,111,75,30,1,6,100,66,77,25,69,0,33,13,32,56,107,40,80,84,12,45,73,17,63,41,52,108,76,24,43,72,8,54,103,44,112,9,82,86,34,87,62,97,51,4,20,78,89,47,11,93,106,10,92,57,35,38,16,55,101,28,21,83,109,79,68,31,48,110,65,14,3,5,113,46}, // permutation 1
{97,87,92,11,39,76,73,44,53,83,88,15,68,16,69,18,86,72,62,34,56,33,70,66,82,102,94,90,84,59,23,101,111,55,75,80,47,108,35,9,98,24,6,64,81,51,89,105,74,1,85,8,31,12,71,99,95,112,52,0,110,106,91,46,78,65,14,27,103,49,7,37,3,93,41,96,25,40,28,67,38,54,20,32,10,36,22,58,30,4,5,43,113,17,26,57,21,48,104,13,45,100,61,79,42,50,63,60,19,107,77,29,2,109}, // permutation 2
{10,33,47,85,112,75,54,8,5,62,25,13,50,15,30,92,76,69,29,95,94,44,21,40,6,63,60,71,16,97,4,7,70,45,35,108,32,57,26,87,84,73,1,3,80,31,61,65,37,72,90,113,67,39,49,103,43,86,68,14,89,104,41,36,88,66,58,17,78,34,109,110,42,74,100,0,55,79,22,101,38,96,64,82,77,27,18,105,9,12,2,91,46,11,28,98,83,53,51,107,99,19,23,102,20,111,52,59,81,24,48,106,56,93}, // permutation 3
{52,95,60,111,97,70,26,50,92,27,48,10,35,112,45,22,85,33,69,105,7,78,5,83,110,11,74,21,98,61,37,96,17,14,94,88,109,68,12,42,66,19,25,106,3,103,81,15,86,46,38,16,56,0,34,29,63,53,72,102,24,108,59,40,93,80,44,58,51,30,13,2,77,99,23,79,75,104,49,54,43,113,36,71,4,20,73,28,62,82,101,31,100,55,32,6,84,76,57,67,64,41,9,1,90,91,107,39,89,65,87,47,18,8}, // permutation 4
{33,38,35,21,27,54,91,44,56,103,2,108,51,24,107,74,17,55,109,113,97,45,3,112,7,90,30,37,11,22,9,42,10,104,95,58,111,61,77,16,85,25,12,32,13,4,34,59,105,48,6,83,79,49,94,68,69,18,98,36,102,99,67,50,65,71,41,100,62,31,81,80,75,73,1,89,66,60,5,76,87,52,23,88,39,101,78,57,64,53,84,0,26,19,46,20,110,43,14,15,28,70,106,93,96,8,63,72,29,86,47,82,40,92}, // permutation 5
{65,93,54,46,100,8,98,9,37,95,28,60,85,47,96,68,66,36,1,74,109,92,70,45,58,82,44,76,101,59,63,108,83,5,81,71,33,35,18,105,31,43,99,55,50,13,7,88,72,90,38,67,102,27,111,22,40,48,73,25,14,61,17,112,29,80,97,19,41,34,79,32,75,113,15,0,30,42,53,57,26,77,86,87,51,16,103,78,23,39,91,4,62,64,3,107,12,69,104,2,20,89,52,84,106,6,11,49,56,10,94,110,24,21}, // permutation 6
{69,31,47,76,103,56,30,4,111,27,45,101,41,49,74,98,36,11,113,91,93,106,97,87,23,57,59,35,15,28,82,17,20,65,67,25,14,73,55,52,92,1,84,62,16,24,42,33,7,38,110,40,39,94,44,77,83,34,48,99,96,72,3,0,32,104,80,61,50,46,105,54,37,88,13,107,100,9,86,75,29,81,68,64,108,22,71,51,109,102,21,26,89,85,112,95,5,2,6,90,8,79,43,58,63,70,53,19,12,60,10,18,78,66}, // permutation 7
{39,61,102,6,18,82,92,5,26,72,93,65,91,60,44,47,101,94,0,97,99,113,23,76,51,50,63,36,42,41,52,71,9,110,55,105,15,95,24,1,112,111,74,78,81,22,28,40,108,13,46,77,21,67,35,32,11,54,17,64,34,84,69,27,106,85,10,31,25,4,62,100,73,58,89,75,48,70,37,29,104,56,59,57,43,20,16,8,86,66,53,83,12,98,45,7,33,88,79,107,68,49,80,90,14,96,2,103,30,3,38,19,87,109}, // permutation 8
{37,46,45,75,56,80,22,8,1,82,32,44,17,69,24,111,83,98,48,36,47,6,90,0,23,100,101,106,62,11,97,84,109,60,81,96,38,41,112,14,89,95,52,61,49,13,43,58,88,27,104,86,99,102,26,10,76,73,34,25,72,68,39,20,50,16,2,51,21,33,30,108,92,18,107,42,74,63,31,67,19,103,28,54,4,9,71,70,79,77,113,65,7,93,40,15,35,29,55,3,66,53,91,12,94,5,78,64,105,110,59,87,85,57} // permutation 9
};

// Seed: 1726101222

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint16_t  f1;
};

struct S1 {
    uint32_t g_115;
    uint16_t g_118;
    int64_t g_125[2];
    volatile int32_t g_159;
    volatile int32_t * volatile g_158[1][4];
    int32_t *g_160;
    int32_t g_171;
    uint64_t g_191;
    int16_t g_211;
    volatile VECTOR(int16_t, 2) g_457;
    int8_t g_459;
    volatile VECTOR(uint16_t, 16) g_468;
    VECTOR(uint16_t, 8) g_470;
    union U0 g_473[9][2][5];
    union U0 *g_476;
    VECTOR(uint16_t, 16) g_483;
    int32_t * volatile g_484;
    int32_t ** volatile g_485;
    union U0 g_492;
    int32_t g_501;
    uint64_t g_521;
    volatile VECTOR(int64_t, 8) g_528;
    uint16_t *g_538;
    uint16_t **g_537;
    uint16_t *** volatile g_539;
    volatile VECTOR(int32_t, 4) g_546;
    VECTOR(uint8_t, 8) g_556;
    volatile VECTOR(uint8_t, 8) g_557;
    int16_t g_567;
    int32_t * volatile g_582;
    int32_t * volatile g_599[9][2][7];
    int32_t * volatile g_600;
    VECTOR(uint64_t, 4) g_616;
    volatile VECTOR(uint16_t, 8) g_634;
    uint8_t g_663;
    uint32_t g_665;
    int32_t ** volatile g_671;
    uint64_t *g_679;
    int32_t * volatile g_690;
    VECTOR(int8_t, 16) g_708;
    int64_t g_719;
    int32_t * volatile g_720;
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
int8_t  func_1(struct S1 * p_727);
int32_t  func_126(uint32_t  p_127, uint64_t  p_128, uint16_t  p_129, struct S1 * p_727);
uint32_t  func_130(uint32_t  p_131, uint64_t * p_132, int32_t  p_133, uint32_t  p_134, uint8_t  p_135, struct S1 * p_727);
uint32_t  func_136(int64_t  p_137, uint32_t  p_138, int64_t  p_139, struct S1 * p_727);
int32_t * func_144(int32_t ** p_145, struct S1 * p_727);
int32_t ** func_146(uint32_t  p_147, int32_t * p_148, uint32_t  p_149, struct S1 * p_727);
union U0  func_165(int64_t  p_166, int32_t * p_167, struct S1 * p_727);
uint16_t ** func_183(int64_t  p_184, uint64_t  p_185, uint16_t ** p_186, struct S1 * p_727);
int64_t  func_187(uint8_t  p_188, uint64_t  p_189, struct S1 * p_727);
uint8_t  func_193(uint8_t  p_194, uint64_t  p_195, int32_t * p_196, int64_t * p_197, struct S1 * p_727);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_727->g_118 p_727->g_comm_values p_727->g_125 p_727->l_comm_values p_727->g_158 p_727->g_160 p_727->g_171 p_727->g_459 p_727->g_484 p_727->g_485 p_727->g_473.f0 p_727->g_501 p_727->g_537 p_727->g_539 p_727->g_582 p_727->g_600 p_727->g_492.f0 p_727->g_483 p_727->g_671 p_727->g_690 p_727->g_211 p_727->g_521 p_727->g_708 p_727->g_663 p_727->g_528 p_727->g_468
 * writes: p_727->g_115 p_727->g_118 p_727->g_125 p_727->g_171 p_727->g_comm_values p_727->g_211 p_727->g_459 p_727->g_473.f0 p_727->g_160 p_727->g_501 p_727->g_492.f0 p_727->g_537 p_727->g_679 p_727->g_719
 */
int8_t  func_1(struct S1 * p_727)
{ /* block id: 4 */
    uint64_t l_113 = 1UL;
    uint64_t *l_114[4][1];
    uint16_t *l_116 = (void*)0;
    uint16_t *l_117 = &p_727->g_118;
    uint32_t l_140 = 4294967295UL;
    uint8_t l_141 = 0x36L;
    int32_t *l_721[4][6] = {{(void*)0,&p_727->g_473[8][0][1].f0,(void*)0,(void*)0,&p_727->g_473[8][0][1].f0,(void*)0},{(void*)0,&p_727->g_473[8][0][1].f0,(void*)0,(void*)0,&p_727->g_473[8][0][1].f0,(void*)0},{(void*)0,&p_727->g_473[8][0][1].f0,(void*)0,(void*)0,&p_727->g_473[8][0][1].f0,(void*)0},{(void*)0,&p_727->g_473[8][0][1].f0,(void*)0,(void*)0,&p_727->g_473[8][0][1].f0,(void*)0}};
    int32_t l_722 = 1L;
    int8_t *l_725 = &p_727->g_459;
    int8_t *l_726[3];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_114[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_726[i] = &p_727->g_459;
    if ((atomic_inc(&p_727->g_atomic_input[4 * get_linear_group_id() + 3]) == 5))
    { /* block id: 6 */
        uint32_t l_2[5][2][4] = {{{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL},{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL}},{{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL},{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL}},{{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL},{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL}},{{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL},{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL}},{{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL},{4294967295UL,0x6A162C9CL,0x6A162C9CL,4294967295UL}}};
        int i, j, k;
        if ((l_2[0][0][2] = 0x4EFA9D19L))
        { /* block id: 8 */
            int32_t l_3[6] = {0x30BB8BFFL,0x30BB8BFFL,0x30BB8BFFL,0x30BB8BFFL,0x30BB8BFFL,0x30BB8BFFL};
            int32_t l_34 = 0L;
            uint64_t l_35 = 0x11DF381B91F40AC1L;
            uint8_t l_36 = 0xE4L;
            VECTOR(int32_t, 8) l_37 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
            int32_t l_38[9][8] = {{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L},{0x6EF7D18CL,0x1C76A876L,0x705760DCL,0x06A5961BL,0x705760DCL,0x1C76A876L,0x6EF7D18CL,9L}};
            int32_t l_39 = 0x6E181CB0L;
            VECTOR(int32_t, 8) l_40 = (VECTOR(int32_t, 8))(0x43225DEAL, (VECTOR(int32_t, 4))(0x43225DEAL, (VECTOR(int32_t, 2))(0x43225DEAL, 1L), 1L), 1L, 0x43225DEAL, 1L);
            VECTOR(int32_t, 4) l_41 = (VECTOR(int32_t, 4))(0x23697E17L, (VECTOR(int32_t, 2))(0x23697E17L, 0x20D89505L), 0x20D89505L);
            VECTOR(int32_t, 2) l_42 = (VECTOR(int32_t, 2))(2L, 1L);
            VECTOR(int32_t, 4) l_43 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-8L)), (-8L));
            VECTOR(int32_t, 16) l_44 = (VECTOR(int32_t, 16))(0x36E27599L, (VECTOR(int32_t, 4))(0x36E27599L, (VECTOR(int32_t, 2))(0x36E27599L, 0x2CE7FEFAL), 0x2CE7FEFAL), 0x2CE7FEFAL, 0x36E27599L, 0x2CE7FEFAL, (VECTOR(int32_t, 2))(0x36E27599L, 0x2CE7FEFAL), (VECTOR(int32_t, 2))(0x36E27599L, 0x2CE7FEFAL), 0x36E27599L, 0x2CE7FEFAL, 0x36E27599L, 0x2CE7FEFAL);
            uint64_t l_45 = 0UL;
            uint64_t l_46 = 0xB96EC4AE7C4FE17DL;
            int32_t *l_47 = (void*)0;
            int32_t *l_48 = (void*)0;
            int i, j;
            for (l_3[0] = 15; (l_3[0] > (-22)); l_3[0]--)
            { /* block id: 11 */
                int64_t l_6 = (-7L);
                int32_t l_7[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_7[i] = 0L;
                l_7[0] = l_6;
                for (l_6 = 16; (l_6 <= 6); l_6 = safe_sub_func_int8_t_s_s(l_6, 9))
                { /* block id: 15 */
                    VECTOR(uint32_t, 8) l_10 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967290UL), 4294967290UL), 4294967290UL, 0UL, 4294967290UL);
                    uint64_t l_11 = 0xE045DCEFBDE283BCL;
                    uint32_t l_12 = 0xE2CF4565L;
                    int32_t l_33[4][5][5] = {{{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL}},{{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL}},{{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL}},{{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL},{0x3A09F94EL,0x01D84CB4L,1L,0x01D84CB4L,0x3A09F94EL}}};
                    int32_t *l_32 = &l_33[2][0][3];
                    int i, j, k;
                    l_12 |= (l_11 = l_10.s5);
                    for (l_10.s3 = 0; (l_10.s3 < 17); l_10.s3 = safe_add_func_int64_t_s_s(l_10.s3, 2))
                    { /* block id: 20 */
                        VECTOR(uint16_t, 8) l_15 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xCD1BL), 0xCD1BL), 0xCD1BL, 1UL, 0xCD1BL);
                        VECTOR(uint16_t, 8) l_16 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL);
                        VECTOR(uint16_t, 8) l_17 = (VECTOR(uint16_t, 8))(0x232CL, (VECTOR(uint16_t, 4))(0x232CL, (VECTOR(uint16_t, 2))(0x232CL, 0x4E63L), 0x4E63L), 0x4E63L, 0x232CL, 0x4E63L);
                        int16_t l_18[3][6][7] = {{{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L}},{{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L}},{{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L},{1L,0x5BC1L,0x57DEL,3L,7L,0x19ACL,0L}}};
                        int32_t l_19 = (-3L);
                        int8_t l_20 = 0x6DL;
                        uint32_t l_21 = 4294967295UL;
                        VECTOR(int64_t, 16) l_22 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x41C5AB2A44BF8E16L), 0x41C5AB2A44BF8E16L), 0x41C5AB2A44BF8E16L, 1L, 0x41C5AB2A44BF8E16L, (VECTOR(int64_t, 2))(1L, 0x41C5AB2A44BF8E16L), (VECTOR(int64_t, 2))(1L, 0x41C5AB2A44BF8E16L), 1L, 0x41C5AB2A44BF8E16L, 1L, 0x41C5AB2A44BF8E16L);
                        uint64_t l_23 = 18446744073709551615UL;
                        int32_t *l_24[2][7][2] = {{{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19}},{{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19},{&l_19,&l_19}}};
                        int32_t l_26[9][7] = {{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L},{0x3B2D3F57L,(-1L),0x387E8D9FL,0x4BD95D60L,0L,0x3B2D3F57L,0x4BD95D60L}};
                        int32_t *l_25[10];
                        VECTOR(int32_t, 4) l_27 = (VECTOR(int32_t, 4))(0x3F56F60DL, (VECTOR(int32_t, 2))(0x3F56F60DL, 8L), 8L);
                        int64_t l_28 = 0x1334807DA0BF3FD2L;
                        uint64_t l_29 = 0x30FACFA70DAEE1FAL;
                        int32_t l_30 = 0x45DC7473L;
                        int16_t l_31 = 6L;
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                            l_25[i] = &l_26[0][0];
                        l_25[8] = (((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 16))(l_15.s7620037673744013)).s46, ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(0x16DEL, 1UL)).yxxyyyxxyxxyyyyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_16.s43)), 0xAE50L, 65535UL)).zxyzyzxzzzwyxxyx)).hi)).s2657477202116121, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(0xA339L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_17.s01714771)).hi)), 0x2570L, 0x32D7L, 0xAEE5L)).s11, (uint16_t)2UL))), 0xB498L, 1UL)))).xwwyxzxxzywxzyyx))).s22))).even , ((l_23 = (((l_19 |= l_18[2][4][6]) , (l_20 , l_21)) , ((VECTOR(int64_t, 4))(l_22.sd714)).z)) , (l_24[1][2][0] = (void*)0)));
                        l_31 &= (l_30 &= (l_29 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_27.xwzxywzxxzxzywyy)).even, (int32_t)l_28))).hi)).w));
                    }
                    l_32 = l_32;
                }
            }
            l_46 = ((VECTOR(int32_t, 8))(0x12777EF5L, (-9L), ((l_34 , l_35) , l_36), (-1L), 0x1DA88441L, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(4L, 0x6F9AD357L, (-6L), 6L)).hi)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_37.s65)).yxyx, ((VECTOR(int32_t, 8))(l_38[7][7], (l_39 , (-1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_40.s10611311)).s75)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_41.yyxxwzxz)).s12)).xyxxyyxx, ((VECTOR(int32_t, 2))(l_42.yy)).yxxxyyyy))).s2076153341404234, ((VECTOR(int32_t, 4))(l_43.zwxy)).wyzwyzyyzxwwyyzx))), ((VECTOR(int32_t, 2))(l_44.s8c)).xyyyyxxyyyxyxxxx))).s0e, (int32_t)l_45))), 0x563CFC51L, (-1L))).hi))).hi))), 0x25686424L)).s0;
            l_48 = l_47;
        }
        else
        { /* block id: 34 */
            int32_t l_49 = 0x3F78960EL;
            uint32_t l_50 = 4294967292UL;
            int32_t l_51[6];
            uint16_t l_52 = 0x3D1CL;
            VECTOR(uint32_t, 4) l_53 = (VECTOR(uint32_t, 4))(0x151F0AF6L, (VECTOR(uint32_t, 2))(0x151F0AF6L, 0x04140036L), 0x04140036L);
            int i;
            for (i = 0; i < 6; i++)
                l_51[i] = 0L;
            l_53.y = ((l_51[3] = (l_50 = l_49)) , l_52);
        }
        for (l_2[1][1][1] = 0; (l_2[1][1][1] == 54); l_2[1][1][1] = safe_add_func_uint64_t_u_u(l_2[1][1][1], 3))
        { /* block id: 41 */
            uint32_t l_56[5][4][9] = {{{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L}},{{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L}},{{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L}},{{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L}},{{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L},{6UL,0x32D400D3L,8UL,0xE1B1DC04L,4294967295UL,0x72AEA97FL,0x0ACF09C1L,5UL,0x66D203B3L}}};
            int i, j, k;
            if ((l_56[0][3][1] = 0x66290501L))
            { /* block id: 43 */
                uint8_t l_57 = 255UL;
                int8_t l_58 = 0L;
                uint64_t l_59 = 0x775BE2A38A8CD10DL;
                int8_t l_60 = 0x70L;
                int32_t l_62 = 0x496C5016L;
                int32_t *l_61 = &l_62;
                l_58 |= l_57;
                l_60 = l_59;
                l_61 = l_61;
            }
            else
            { /* block id: 47 */
                int32_t l_63 = 0x6630C7D5L;
                for (l_63 = (-12); (l_63 > 25); l_63 = safe_add_func_int32_t_s_s(l_63, 6))
                { /* block id: 50 */
                    int32_t l_66[1][6] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
                    int32_t *l_87 = &l_66[0][0];
                    int32_t *l_88[8] = {&l_66[0][2],&l_66[0][2],&l_66[0][2],&l_66[0][2],&l_66[0][2],&l_66[0][2],&l_66[0][2],&l_66[0][2]};
                    int32_t **l_89 = &l_88[2];
                    int i, j;
                    for (l_66[0][0] = (-13); (l_66[0][0] >= 23); l_66[0][0] = safe_add_func_uint32_t_u_u(l_66[0][0], 1))
                    { /* block id: 53 */
                        int32_t *l_69 = (void*)0;
                        int32_t l_71 = 0L;
                        int32_t *l_70 = &l_71;
                        uint8_t l_72 = 0xEBL;
                        int8_t l_73 = 2L;
                        l_70 = l_69;
                        l_73 = l_72;
                    }
                    for (l_66[0][0] = 0; (l_66[0][0] > (-8)); l_66[0][0] = safe_sub_func_int32_t_s_s(l_66[0][0], 5))
                    { /* block id: 59 */
                        VECTOR(uint32_t, 16) l_76 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x806B18C0L), 0x806B18C0L), 0x806B18C0L, 4294967292UL, 0x806B18C0L, (VECTOR(uint32_t, 2))(4294967292UL, 0x806B18C0L), (VECTOR(uint32_t, 2))(4294967292UL, 0x806B18C0L), 4294967292UL, 0x806B18C0L, 4294967292UL, 0x806B18C0L);
                        uint8_t l_77 = 250UL;
                        VECTOR(uint64_t, 2) l_78 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551607UL);
                        uint16_t l_79 = 0xFD07L;
                        int64_t l_80 = 5L;
                        int32_t l_81 = 0x2C86F730L;
                        int64_t l_82[10][2][1] = {{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}},{{0x05B248B132FC06C7L},{0x05B248B132FC06C7L}}};
                        int32_t *l_83 = (void*)0;
                        int32_t *l_84 = (void*)0;
                        int32_t l_86 = (-1L);
                        int32_t *l_85 = &l_86;
                        int i, j, k;
                        l_85 = (((VECTOR(uint32_t, 4))(l_76.s49e5)).x , ((l_82[6][1][0] = (l_81 = (l_80 |= ((l_79 = ((l_77 = 0x0B969CE4L) , ((VECTOR(uint64_t, 8))(l_78.yyxyxyyy)).s1)) , FAKE_DIVERGE(p_727->group_1_offset, get_group_id(1), 10))))) , (l_84 = l_83)));
                    }
                    l_88[2] = (l_87 = l_87);
                    l_89 = (void*)0;
                }
            }
        }
        for (l_2[0][0][2] = 0; (l_2[0][0][2] < 1); l_2[0][0][2]++)
        { /* block id: 76 */
            uint64_t l_92 = 0x4E8F995CB7F88A73L;
            int32_t *l_93 = (void*)0;
            int32_t l_95 = 1L;
            int32_t *l_94[2][6] = {{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95},{&l_95,&l_95,&l_95,&l_95,&l_95,&l_95}};
            int32_t *l_96 = &l_95;
            int i, j;
            l_96 = (l_94[0][5] = (l_92 , l_93));
        }
        for (l_2[2][0][0] = (-14); (l_2[2][0][0] < 37); ++l_2[2][0][0])
        { /* block id: 82 */
            VECTOR(int32_t, 2) l_99 = (VECTOR(int32_t, 2))(0x5C8BF38BL, 0x2DC3C1F5L);
            uint64_t l_100 = 0UL;
            uint8_t l_101 = 1UL;
            uint64_t l_105 = 0x24F74BF3BD94EE24L;
            int32_t *l_106 = (void*)0;
            int32_t *l_107[1][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int32_t *l_108 = (void*)0;
            int i, j, k;
            l_101 |= (l_100 &= ((VECTOR(int32_t, 8))(0x51F52E6AL, ((VECTOR(int32_t, 2))(0x45CBCC74L, 0x3C3B03ACL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_99.yxxyxyyxxxyyyyyx)).scd)), 0L, (-6L), 1L)).s1);
            for (l_100 = 20; (l_100 <= 44); l_100 = safe_add_func_int16_t_s_s(l_100, 1))
            { /* block id: 87 */
                uint32_t l_104[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_104[i] = 0x75615793L;
                l_99.x = l_104[2];
            }
            l_108 = (l_107[0][7][0] = (l_105 , l_106));
            for (l_100 = 0; (l_100 <= 39); l_100 = safe_add_func_int32_t_s_s(l_100, 9))
            { /* block id: 94 */
                uint64_t l_111 = 1UL;
                int32_t l_112 = 9L;
                l_112 &= l_111;
            }
        }
        unsigned int result = 0;
        int l_2_i0, l_2_i1, l_2_i2;
        for (l_2_i0 = 0; l_2_i0 < 5; l_2_i0++) {
            for (l_2_i1 = 0; l_2_i1 < 2; l_2_i1++) {
                for (l_2_i2 = 0; l_2_i2 < 4; l_2_i2++) {
                    result += l_2[l_2_i0][l_2_i1][l_2_i2];
                }
            }
        }
        atomic_add(&p_727->g_special_values[4 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 98 */
        (1 + 1);
    }
    l_722 = (((p_727->g_115 = l_113) != (p_727->g_125[0] = (((++(*l_117)) <= l_113) | ((!p_727->g_comm_values[p_727->tid]) , (((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x5F10AD92B7DB265EL, 0x42FE16E7D2BA4BABL)), 0x5CBB4F55AC2ACB64L, (-8L))), ((VECTOR(int64_t, 2))(4L, 0L)).yxxx))).y , (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), p_727->g_comm_values[p_727->tid])), 7))))))) , func_126(func_130(p_727->g_125[0], &l_113, l_113, p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 114))], (func_136(p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 114))], l_140, l_141, p_727) , l_141), p_727), p_727->g_483.se, l_140, p_727));
    p_727->g_473[8][0][1].f0 &= (safe_mul_func_int16_t_s_s((l_725 == (l_726[1] = l_725)), p_727->g_468.sc));
    return p_727->g_468.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_211 p_727->g_521 p_727->g_708 p_727->g_690 p_727->g_492.f0 p_727->g_663 p_727->g_528
 * writes: p_727->g_211 p_727->g_719
 */
int32_t  func_126(uint32_t  p_127, uint64_t  p_128, uint16_t  p_129, struct S1 * p_727)
{ /* block id: 410 */
    uint32_t l_699 = 0x36662135L;
    uint64_t **l_704 = &p_727->g_679;
    int16_t *l_715 = &p_727->g_567;
    int32_t *l_716 = (void*)0;
    int64_t *l_717 = (void*)0;
    int64_t *l_718 = &p_727->g_719;
    for (p_727->g_211 = (-19); (p_727->g_211 >= (-1)); p_727->g_211 = safe_add_func_int32_t_s_s(p_727->g_211, 4))
    { /* block id: 413 */
        return p_129;
    }
    atomic_sub(&p_727->l_atomic_reduction[0], (l_699 >= ((p_129 != (~((safe_div_func_int64_t_s_s((((*l_718) = (!((safe_rshift_func_int8_t_s_s(((p_727->g_521 , (l_704 != ((GROUP_DIVERGE(0, 1) | 3L) , l_704))) ^ (((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 8))(p_727->g_708.s18f6ce64)).s0)), (((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(0L, p_128)) >= ((safe_mod_func_int32_t_s_s(((func_165((((void*)0 == l_715) || p_127), l_716, p_727) , (*p_727->g_690)) != p_727->g_663), 0x29E6782CL)) == p_129)), p_129)) ^ 0x6799CB48792AA433L) , p_727->g_528.s7))) && (-2L)) != p_727->g_211)), 2)) >= 0x627CB178L))) , p_127), p_727->g_521)) ^ p_129))) ^ p_129)) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_727->v_collective += p_727->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_128;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_690 p_727->g_492.f0
 * writes: p_727->g_492.f0
 */
uint32_t  func_130(uint32_t  p_131, uint64_t * p_132, int32_t  p_133, uint32_t  p_134, uint8_t  p_135, struct S1 * p_727)
{ /* block id: 405 */
    uint16_t *l_686 = (void*)0;
    uint16_t *l_687 = (void*)0;
    uint16_t *l_688 = (void*)0;
    int32_t l_689[9][5] = {{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L},{(-2L),0x312CD257L,(-2L),(-2L),0x312CD257L}};
    int32_t *l_691 = &l_689[5][1];
    int32_t *l_692 = (void*)0;
    int32_t *l_693[7] = {&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_473[8][0][1].f0};
    uint8_t l_694 = 0x87L;
    int i, j;
    (*p_727->g_690) &= (safe_lshift_func_int8_t_s_s(((l_689[5][0] = 0x86F7L) <= 0x42ABL), 5));
    ++l_694;
    return p_135;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_158 p_727->g_160 p_727->g_125 p_727->g_118 p_727->g_171 p_727->l_comm_values p_727->g_comm_values p_727->g_459 p_727->g_484 p_727->g_485 p_727->g_473.f0 p_727->g_501 p_727->g_537 p_727->g_539 p_727->g_582 p_727->g_600 p_727->g_492.f0 p_727->g_483 p_727->g_671
 * writes: p_727->g_171 p_727->g_comm_values p_727->g_118 p_727->g_211 p_727->g_459 p_727->g_473.f0 p_727->g_160 p_727->g_501 p_727->g_492.f0 p_727->g_537 p_727->g_679
 */
uint32_t  func_136(int64_t  p_137, uint32_t  p_138, int64_t  p_139, struct S1 * p_727)
{ /* block id: 104 */
    uint16_t l_157[6][1] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
    uint16_t l_672 = 9UL;
    uint64_t *l_677[2][4][4] = {{{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191}},{{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191},{&p_727->g_191,&p_727->g_191,&p_727->g_191,&p_727->g_191}}};
    uint64_t **l_678[2];
    VECTOR(int32_t, 8) l_680 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6A020058L), 0x6A020058L), 0x6A020058L, (-1L), 0x6A020058L);
    int32_t *l_681 = &p_727->g_171;
    int32_t l_682 = 2L;
    int64_t l_683 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_678[i] = &l_677[0][3][0];
    for (p_137 = 0; (p_137 <= (-19)); p_137--)
    { /* block id: 107 */
        uint64_t l_152 = 0x188AF396E7CF41E0L;
        int64_t *l_153 = (void*)0;
        int64_t *l_154 = (void*)0;
        int64_t *l_155 = (void*)0;
        int64_t *l_156[1][3];
        VECTOR(uint16_t, 2) l_168 = (VECTOR(uint16_t, 2))(0x1FFCL, 0x131CL);
        VECTOR(uint16_t, 16) l_169 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 5UL), 5UL), 5UL, 5UL, 5UL, (VECTOR(uint16_t, 2))(5UL, 5UL), (VECTOR(uint16_t, 2))(5UL, 5UL), 5UL, 5UL, 5UL, 5UL);
        int32_t *l_170 = &p_727->g_171;
        uint64_t l_173[4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_156[i][j] = (void*)0;
        }
        for (i = 0; i < 4; i++)
            l_173[i] = 0x2750AFB25AEB3328L;
        (*p_727->g_671) = func_144(func_146((safe_mod_func_uint64_t_u_u(0xCAF3CC005B26D705L, (l_157[4][0] &= l_152))), ((p_727->g_158[0][1] == (void*)0) , p_727->g_160), ((safe_add_func_uint16_t_u_u((((0x24EB29F0F0CF3074L > ((((safe_add_func_int64_t_s_s((func_165(p_138, (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x221FL, 0x1C56L)).xyyxyyxxxyxyyxyx, ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(l_168.xyyx)), ((VECTOR(uint16_t, 2))(l_169.s32)), 65530UL)).s0306511023721167))).s8 , l_170), p_727) , 0x409FF84D38300118L), 0xAB036926210D50EAL)) ^ 0x60L) <= p_727->g_125[0]) > l_173[2])) >= p_138) , p_727->g_118), (*l_170))) , p_138), p_727), p_727);
    }
    l_682 ^= (l_672 != (safe_lshift_func_uint16_t_u_u((p_138 | ((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (p_137 ^ ((p_727->g_679 = l_677[0][3][0]) == &p_727->g_191)))) == ((*l_681) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_680.s35)).xyxxxyxy)).s7))), 3)));
    return l_683;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_171 p_727->l_comm_values p_727->g_125 p_727->g_comm_values p_727->g_459 p_727->g_484 p_727->g_485 p_727->g_160 p_727->g_473.f0 p_727->g_501 p_727->g_537 p_727->g_539 p_727->g_582 p_727->g_118 p_727->g_567 p_727->g_521 p_727->g_483 p_727->g_600 p_727->g_492.f0 p_727->g_616 p_727->g_634 p_727->g_528 p_727->g_470 p_727->g_665 p_727->g_191
 * writes: p_727->g_171 p_727->g_comm_values p_727->g_118 p_727->g_211 p_727->g_459 p_727->g_473.f0 p_727->g_160 p_727->g_501 p_727->g_492.f0 p_727->g_537 p_727->g_473 p_727->g_492 p_727->g_663
 */
int32_t * func_144(int32_t ** p_145, struct S1 * p_727)
{ /* block id: 113 */
    int32_t l_175 = 0x17A1A073L;
    int32_t *l_178 = &p_727->g_171;
    VECTOR(int32_t, 16) l_598 = (VECTOR(int32_t, 16))(0x63A1BD62L, (VECTOR(int32_t, 4))(0x63A1BD62L, (VECTOR(int32_t, 2))(0x63A1BD62L, 0x467F0B24L), 0x467F0B24L), 0x467F0B24L, 0x63A1BD62L, 0x467F0B24L, (VECTOR(int32_t, 2))(0x63A1BD62L, 0x467F0B24L), (VECTOR(int32_t, 2))(0x63A1BD62L, 0x467F0B24L), 0x63A1BD62L, 0x467F0B24L, 0x63A1BD62L, 0x467F0B24L);
    int8_t l_610[9] = {0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L,0x20L};
    uint8_t *l_638 = (void*)0;
    uint32_t l_669 = 0x364017E8L;
    int i;
    if (l_175)
    { /* block id: 114 */
        VECTOR(uint64_t, 4) l_493 = (VECTOR(uint64_t, 4))(0xFDDA69AC6619DF08L, (VECTOR(uint64_t, 2))(0xFDDA69AC6619DF08L, 0x822C0E4A5E2FF4F4L), 0x822C0E4A5E2FF4F4L);
        VECTOR(uint8_t, 16) l_555 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL, (VECTOR(uint8_t, 2))(4UL, 1UL), (VECTOR(uint8_t, 2))(4UL, 1UL), 4UL, 1UL, 4UL, 1UL);
        int32_t l_575 = 1L;
        int i;
        for (p_727->g_171 = (-21); (p_727->g_171 != (-13)); p_727->g_171 = safe_add_func_int32_t_s_s(p_727->g_171, 3))
        { /* block id: 117 */
            uint32_t l_499 = 4294967294UL;
            VECTOR(int32_t, 4) l_543 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L);
            union U0 **l_579 = &p_727->g_476;
            union U0 **l_580[2];
            int32_t *l_581 = &l_575;
            int i;
            for (i = 0; i < 2; i++)
                l_580[i] = &p_727->g_476;
            if (l_175)
            { /* block id: 118 */
                return l_178;
            }
            else
            { /* block id: 120 */
                uint8_t l_488 = 0x42L;
                VECTOR(int32_t, 8) l_547 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-6L)), (-6L)), (-6L), (-6L), (-6L));
                VECTOR(int64_t, 16) l_570 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x6A51605E5CB59845L), 0x6A51605E5CB59845L), 0x6A51605E5CB59845L, 8L, 0x6A51605E5CB59845L, (VECTOR(int64_t, 2))(8L, 0x6A51605E5CB59845L), (VECTOR(int64_t, 2))(8L, 0x6A51605E5CB59845L), 8L, 0x6A51605E5CB59845L, 8L, 0x6A51605E5CB59845L);
                int8_t l_573[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_573[i] = 0x31L;
                for (l_175 = (-10); (l_175 > 22); l_175 = safe_add_func_int32_t_s_s(l_175, 2))
                { /* block id: 123 */
                    return &p_727->g_171;
                }
                for (l_175 = 28; (l_175 <= (-19)); l_175--)
                { /* block id: 128 */
                    uint64_t *l_190[3];
                    int32_t l_192 = 0x51319C18L;
                    int32_t l_494 = 0L;
                    int32_t *l_500 = &p_727->g_501;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_190[i] = &p_727->g_191;
                    (*p_727->g_539) = func_183(func_187(p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 114))], (l_192 = p_727->g_125[0]), p_727), l_488, ((((safe_unary_minus_func_int8_t_s((((*l_500) ^= ((VECTOR(int32_t, 4))((safe_mul_func_int8_t_s_s(((p_727->g_492 , (((VECTOR(uint64_t, 8))(l_493.wzyzyyww)).s7 ^ l_488)) > (l_494 > p_727->g_483.s0)), ((((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((0xA9BC827E5613BDC9L <= p_727->g_492.f0) | l_499), p_727->g_125[0])), l_494)) , 0x6E4B886A133988E2L) ^ 0L) , 0xCCL))), 0x0F09966EL, (-1L), (-9L))).y) , 0x7FL))) && p_727->g_125[1]) == (-1L)) , (void*)0), p_727);
                    for (p_727->g_459 = (-13); (p_727->g_459 <= (-4)); p_727->g_459++)
                    { /* block id: 336 */
                        return (*p_145);
                    }
                    if (((void*)0 == (*p_727->g_539)))
                    { /* block id: 339 */
                        (*p_145) = (*p_727->g_485);
                    }
                    else
                    { /* block id: 341 */
                        int8_t l_542 = 0L;
                        l_543.w = l_542;
                        if ((*p_727->g_484))
                            break;
                    }
                    if (l_494)
                        break;
                }
                if (l_488)
                    break;
                for (p_727->g_211 = (-24); (p_727->g_211 == (-14)); p_727->g_211++)
                { /* block id: 350 */
                    VECTOR(uint8_t, 4) l_554 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL);
                    int16_t *l_566 = &p_727->g_567;
                    uint8_t *l_571 = (void*)0;
                    uint8_t *l_572 = &l_488;
                    int32_t *l_574[6][2][2] = {{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}},{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}},{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}},{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}},{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}},{{(void*)0,&p_727->g_171},{(void*)0,&p_727->g_171}}};
                    uint16_t l_576 = 0xF02EL;
                    int i, j, k;
                    l_547.s4 = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_727->g_546.yxyy)).lo)), ((VECTOR(int32_t, 2))(l_547.s43)), ((VECTOR(int32_t, 4))((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0UL, 0x43D6DC3B8AC384EFL)), 18446744073709551615UL, 0UL)).w >= (safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(l_547.s1, (((((safe_rshift_func_uint8_t_u_s(p_727->g_comm_values[p_727->tid], ((1L <= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_554.xyyxzyxy)), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_555.s726f)), ((VECTOR(uint8_t, 4))(p_727->g_556.s5022)), (l_554.z && (GROUP_DIVERGE(2, 1) && (l_493.x == ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xB808B5DA3D8559BFL, 0x03E6DC03A35D3335L)).yyxxxyxyyxxyyxyy)).sd))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_727->g_557.s45460556)).even)), 0xDAL, 5UL, 0x87L)))).s9627, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(0x4CL, 0x0EL, 0x99L, 0xCBL)).yxxyzzwzzzywyzyx, ((VECTOR(uint8_t, 4))(((*l_572) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_543.y, 14)), ((0x4AL ^ (safe_lshift_func_int16_t_s_u(((*l_566) = l_493.x), 5))) && ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_570.s5e5eff303f1e7e72)).sd, 0UL)) <= 0x7818L)))), l_493.z))), l_573[0], 0x21L, 255UL)).wwzwwwyxxzyzwyww, ((VECTOR(uint8_t, 16))(7UL))))).even)).lo)).yzwzywyx, ((VECTOR(uint8_t, 8))(0UL))))).s70, ((VECTOR(uint8_t, 2))(0x69L))))).xyyy))), ((VECTOR(uint8_t, 2))(0xA9L)), 0x71L, 1UL)).sf) & l_555.sc))) != (*l_178)) ^ 3L) && l_543.w) , (*p_727->g_484)))) , l_554.w), p_727->g_556.s1))), (*p_727->g_484), 0x3AFC21D9L, (-1L))).even))).hi;
                    l_576--;
                }
            }
            (*p_727->g_582) ^= ((*l_581) = ((l_579 == l_580[1]) <= (*l_178)));
            (*p_145) = l_178;
        }
        (*l_178) = (*p_727->g_582);
    }
    else
    { /* block id: 362 */
        int32_t l_583[1];
        int8_t *l_588 = &p_727->g_459;
        int32_t *l_589 = &p_727->g_473[8][0][1].f0;
        uint32_t l_611 = 0UL;
        uint8_t l_664 = 0xCFL;
        int32_t l_670 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_583[i] = 0x0CAB1BC7L;
        (*l_589) &= ((VECTOR(int32_t, 4))(0x36B9ADE2L, (((func_165(p_727->g_118, (l_583[0] , (*p_727->g_485)), p_727) , (0L >= (((*l_178) = (safe_div_func_int64_t_s_s((((*l_588) ^= ((p_727->g_567 && 0x57C5CF5D54B680A2L) < (((safe_lshift_func_uint8_t_u_u((+((*l_178) ^ (18446744073709551614UL || GROUP_DIVERGE(1, 1)))), 7)) | 0x9A32829D8D52754BL) >= p_727->g_521))) | 0L), 5L))) > l_583[0]))) & l_175) & p_727->g_483.sf), 1L, 0L)).z;
        for (p_727->g_171 = 0; (p_727->g_171 <= (-17)); p_727->g_171--)
        { /* block id: 368 */
            VECTOR(uint32_t, 16) l_594 = (VECTOR(uint32_t, 16))(0xDF5712BAL, (VECTOR(uint32_t, 4))(0xDF5712BAL, (VECTOR(uint32_t, 2))(0xDF5712BAL, 4294967295UL), 4294967295UL), 4294967295UL, 0xDF5712BAL, 4294967295UL, (VECTOR(uint32_t, 2))(0xDF5712BAL, 4294967295UL), (VECTOR(uint32_t, 2))(0xDF5712BAL, 4294967295UL), 0xDF5712BAL, 4294967295UL, 0xDF5712BAL, 4294967295UL);
            int32_t *l_597 = &l_583[0];
            int32_t *l_601 = (void*)0;
            int32_t *l_602 = (void*)0;
            int32_t *l_603 = (void*)0;
            int32_t *l_604 = (void*)0;
            int32_t *l_605 = &l_583[0];
            int32_t *l_606 = &p_727->g_492.f0;
            int32_t *l_607[1];
            int32_t l_608 = 0x190127C0L;
            VECTOR(int16_t, 2) l_609 = (VECTOR(int16_t, 2))(0x0B2FL, 0x403BL);
            union U0 l_649 = {7L};
            VECTOR(int64_t, 2) l_656 = (VECTOR(int64_t, 2))(0x00E8974938A687F6L, 1L);
            int i;
            for (i = 0; i < 1; i++)
                l_607[i] = &p_727->g_492.f0;
            (*p_727->g_600) &= (((*l_589) ^ (((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_594.s59)), 0UL, 1UL)).w, ((VECTOR(int32_t, 2))((-6L), 0x7B970581L)).hi)) & ((*l_589) , (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xC4L, 0x73L)).xyyxxxxxxyyyxyyy)).s3 | ((l_594.se && (((void*)0 == l_589) > ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((*l_597) ^= (*l_589)), 0x09B4FBA3L, 3L, (-1L))).yzzzyzww, ((VECTOR(int32_t, 16))(0x37B04CA5L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_598.s9e15dbbecf98be9e)))).s81, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))((!0x1DD24E30L), 0x04F21FEFL, ((VECTOR(int32_t, 4))(0L, (-4L), 0x43DFEBFAL, 9L)), ((VECTOR(int32_t, 8))(0x7361511FL)), 3L, 0x0732588FL)).s8d0c, ((VECTOR(int32_t, 4))(0x7737CC84L))))).hi, ((VECTOR(int32_t, 2))(0x7DBA6878L))))), (*l_597), ((VECTOR(int32_t, 4))((-5L))), (-1L), 0x2B4E7914L, 0x27F1F96CL, (*l_597), ((VECTOR(int32_t, 4))((-6L))))).even, ((VECTOR(int32_t, 8))((-1L)))))).s5, l_594.s5)) < (*l_589)))) , GROUP_DIVERGE(1, 1))))) , 7L)) > (*l_178));
            l_611++;
            for (p_727->g_459 = 0; (p_727->g_459 == (-16)); p_727->g_459 = safe_sub_func_int8_t_s_s(p_727->g_459, 5))
            { /* block id: 374 */
                uint64_t l_637 = 0UL;
                union U0 *l_650 = &p_727->g_473[8][0][1];
                union U0 *l_651 = &p_727->g_492;
                int8_t *l_661 = (void*)0;
                int8_t *l_662[10];
                uint32_t l_666 = 0x3C1F3850L;
                uint64_t *l_667[6] = {&p_727->g_521,&l_637,&p_727->g_521,&p_727->g_521,&l_637,&p_727->g_521};
                uint64_t l_668 = 0xADAB649DC82670CFL;
                int i;
                for (i = 0; i < 10; i++)
                    l_662[i] = &l_610[3];
                (*l_605) = ((*l_605) , (((VECTOR(uint64_t, 16))(p_727->g_616.wzxyywxzzwyxwwwx)).s3 != (*l_589)));
                (*l_606) = (*l_178);
                if ((atomic_inc(&p_727->l_atomic_input[1]) == 1))
                { /* block id: 378 */
                    int32_t l_618 = 0x369158A8L;
                    int32_t *l_617 = &l_618;
                    int32_t *l_619 = &l_618;
                    union U0 l_624 = {0x5FAC8A0BL};
                    int32_t l_625 = 0x3669A90FL;
                    l_619 = l_617;
                    for (l_618 = 0; (l_618 != (-15)); --l_618)
                    { /* block id: 382 */
                        uint16_t l_622 = 1UL;
                        int32_t l_623[9][3][7] = {{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}},{{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL},{0x147CA6FEL,(-3L),(-1L),0x4378B9FFL,(-1L),(-3L),0x147CA6FEL}}};
                        int i, j, k;
                        l_623[3][1][0] = (l_622 = 1L);
                    }
                    (*l_617) = (l_624 , l_625);
                    unsigned int result = 0;
                    result += l_618;
                    result += l_624.f0;
                    result += l_624.f1;
                    result += l_625;
                    atomic_add(&p_727->l_special_values[1], result);
                }
                else
                { /* block id: 387 */
                    (1 + 1);
                }
                l_670 = (((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(0x1DB8L, ((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65532UL, 0UL)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0xF7B0L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 65528UL)), ((VECTOR(uint16_t, 4))(p_727->g_634.s1120)), 65531UL, 0x5A80L)))).s24)), 0x2149L)).even)), 0UL, 0UL)).lo)).yyyy)).odd)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(1UL, 0x420EL)).xyyy)), 65535UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x3067L, 0UL)), 0xE838L, 7UL)), ((((((*l_597) = (safe_mod_func_int64_t_s_s(((l_637 & (((void*)0 != l_638) > (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((*l_178), (safe_add_func_int16_t_s_s((((((VECTOR(uint64_t, 2))(0xF218C6283C409492L, 2UL)).lo <= (((((safe_div_func_uint32_t_u_u(((((*l_651) = ((*l_650) = l_649)) , 0x240F8DEA8141C585L) != ((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_656.xy)), 0L, 2L)))).lo)).xyxyxxyx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(5L, (-9L))))).yyxxyyyyyxyyxyyx)).scc)).xxyxxyxx))).even)).z, (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_727->g_663 = ((l_661 == (void*)0) < (*l_178))), FAKE_DIVERGE(p_727->local_2_offset, get_local_id(2), 10))), p_727->g_634.s2)))), 12)) , p_727->g_521) , p_727->g_528.s3) , l_664)), p_727->g_470.s3)) >= 65535UL) , (*l_589)) > l_637) & 0L)) < p_727->g_665) >= l_637), 9UL)))), l_666)) , p_727->g_616.w), 18446744073709551608UL)))) <= p_727->g_483.s3), (*l_178)))) , (*l_178)) >= l_666) < 3L) >= p_727->g_191), (*l_178), 0x5B79L, 0xD0EDL, 0x279FL)).s76c1)), ((VECTOR(uint16_t, 4))(5UL)), ((VECTOR(uint16_t, 4))(0x66E3L))))))), ((VECTOR(uint16_t, 4))(65527UL))))), 1UL, 65535UL)).lo, ((VECTOR(uint16_t, 4))(0x9398L))))), ((VECTOR(uint16_t, 2))(0x074BL)), 1UL)).s6)) & l_668), 0x70FDCE710B16F0C5L)), 0x69L)), p_727->g_483.sa)) > l_669) ^ p_727->g_501);
            }
        }
    }
    return (*p_727->g_485);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_146(uint32_t  p_147, int32_t * p_148, uint32_t  p_149, struct S1 * p_727)
{ /* block id: 111 */
    int32_t **l_174 = &p_727->g_160;
    return l_174;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0  func_165(int64_t  p_166, int32_t * p_167, struct S1 * p_727)
{ /* block id: 109 */
    union U0 l_172 = {0x13F3FD84L};
    return l_172;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_473 p_727->g_459 p_727->g_521 p_727->g_528 p_727->g_492.f0 p_727->g_501 p_727->g_537
 * writes: p_727->g_459 p_727->g_521 p_727->g_211 p_727->g_492.f0
 */
uint16_t ** func_183(int64_t  p_184, uint64_t  p_185, uint16_t ** p_186, struct S1 * p_727)
{ /* block id: 313 */
    int32_t l_512 = 9L;
    int8_t *l_519 = (void*)0;
    int8_t *l_520 = &p_727->g_459;
    uint16_t *l_531 = (void*)0;
    int32_t l_532 = 0L;
    int16_t *l_533 = &p_727->g_211;
    int32_t *l_534 = &p_727->g_492.f0;
    if ((atomic_inc(&p_727->g_atomic_input[4 * get_linear_group_id() + 2]) == 5))
    { /* block id: 315 */
        uint32_t l_502 = 0xF401BF38L;
        int32_t l_505 = 0x0876D1C4L;
        int32_t l_506 = 0x5EE6731AL;
        uint8_t l_507 = 0x3AL;
        l_502++;
        l_507--;
        unsigned int result = 0;
        result += l_502;
        result += l_505;
        result += l_506;
        result += l_507;
        atomic_add(&p_727->g_special_values[4 * get_linear_group_id() + 2], result);
    }
    else
    { /* block id: 318 */
        (1 + 1);
    }
    (*l_534) = (safe_mul_func_uint8_t_u_u(l_512, (((p_184 , (safe_mod_func_int16_t_s_s(p_185, (+((VECTOR(int16_t, 16))(((((*l_533) = (safe_rshift_func_uint8_t_u_u(((p_184 = (safe_div_func_int8_t_s_s((p_727->g_473[8][0][1] , (p_727->g_521 |= ((*l_520) &= 1L))), (safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(3L, (-7L))).yxyxyxyx)).s67, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_727->g_528.s52715301)))).s63))).xxyyxyyx)).odd)).odd)).xxxy)).z, 18446744073709551615UL)), (l_532 = (((+0x77CED24451D8E2A6L) == (safe_div_func_uint8_t_u_u((l_512 && p_185), 7L))) > p_727->g_492.f0)))) > p_727->g_501), 3))))) & l_512), 5))) ^ l_512) , 1L), 5L, 0x312AL, p_185, ((VECTOR(int16_t, 8))(1L)), p_727->g_528.s3, (-8L), 0x4153L, 0x3DF4L)).s0)))) <= GROUP_DIVERGE(0, 1)) < 1L)));
    for (p_184 = 0; (p_184 == 26); ++p_184)
    { /* block id: 329 */
        return p_727->g_537;
    }
    return p_186;
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_171 p_727->g_comm_values p_727->g_125 p_727->l_comm_values p_727->g_459 p_727->g_484 p_727->g_485 p_727->g_160 p_727->g_473.f0
 * writes: p_727->g_comm_values p_727->g_118 p_727->g_211 p_727->g_459 p_727->g_473.f0 p_727->g_160
 */
int64_t  func_187(uint8_t  p_188, uint64_t  p_189, struct S1 * p_727)
{ /* block id: 130 */
    int16_t l_198 = (-1L);
    VECTOR(int64_t, 2) l_203 = (VECTOR(int64_t, 2))(0x5D1699B072CAEA93L, 9L);
    uint16_t *l_204 = &p_727->g_118;
    VECTOR(int8_t, 8) l_207 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4DL), 0x4DL), 0x4DL, 1L, 0x4DL);
    int16_t *l_210 = &p_727->g_211;
    int32_t *l_487 = &p_727->g_473[8][0][1].f0;
    int i;
    (*l_487) = ((func_193(l_198, (safe_sub_func_int16_t_s_s(p_727->g_171, (safe_mod_func_uint16_t_u_u(((*l_204) = ((p_727->g_comm_values[p_727->tid] ^= ((VECTOR(int64_t, 4))(l_203.xyxy)).z) , p_727->g_125[0])), 65526UL)))), ((safe_lshift_func_int16_t_s_u((((~((VECTOR(int8_t, 4))(l_207.s5472)).w) , l_207.s3) < (safe_rshift_func_uint16_t_u_s((p_727->g_125[1] <= FAKE_DIVERGE(p_727->group_2_offset, get_group_id(2), 10)), ((*l_210) = ((VECTOR(int16_t, 2))(0x26F4L, 0x45BDL)).even)))), (((p_727->g_171 , (((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s(p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 114))], p_188)) & p_188), 0x2523ACF0L)) >= GROUP_DIVERGE(2, 1)) || p_188)) != p_188) == l_207.s7))) , (void*)0), &p_727->g_125[0], p_727) >= 2UL) | p_189);
    return (*l_487);
}


/* ------------------------------------------ */
/* 
 * reads : p_727->g_459 p_727->g_125 p_727->l_comm_values p_727->g_484 p_727->g_485 p_727->g_160
 * writes: p_727->g_459 p_727->g_473.f0 p_727->g_160
 */
uint8_t  func_193(uint8_t  p_194, uint64_t  p_195, int32_t * p_196, int64_t * p_197, struct S1 * p_727)
{ /* block id: 134 */
    VECTOR(uint16_t, 8) l_469 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x8CA2L), 0x8CA2L), 0x8CA2L, 65534UL, 0x8CA2L);
    union U0 *l_472 = &p_727->g_473[8][0][1];
    int32_t *l_486 = &p_727->g_473[8][0][1].f0;
    int i;
    if ((atomic_inc(&p_727->l_atomic_input[0]) == 1))
    { /* block id: 136 */
        uint64_t l_216 = 0x0894DA3E1DE6E2E7L;
        uint32_t l_281 = 4294967295UL;
        int16_t l_282 = 0x568BL;
        uint64_t l_426 = 0x1F1FFBD9FDEA11C1L;
        if ((l_216 ^= 0x1424F645L))
        { /* block id: 138 */
            int32_t *l_217 = (void*)0;
            int32_t l_218[3];
            uint16_t l_219[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            VECTOR(int32_t, 2) l_220 = (VECTOR(int32_t, 2))((-9L), 0x45463681L);
            uint16_t l_221 = 0xC14FL;
            uint64_t l_222[2];
            int32_t l_223 = (-1L);
            VECTOR(int32_t, 4) l_224 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x47D9CDFDL), 0x47D9CDFDL);
            uint8_t l_225[6][10] = {{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L},{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L},{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L},{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L},{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L},{0xF1L,0x46L,0xB1L,0x46L,0xF1L,0xF1L,0x46L,0xB1L,0x46L,0xF1L}};
            int8_t l_226 = 0x16L;
            VECTOR(int64_t, 2) l_227 = (VECTOR(int64_t, 2))(1L, 0x5F94D6FDC2CA2C02L);
            int8_t l_228 = (-6L);
            VECTOR(int32_t, 4) l_229 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x33CEA2D9L), 0x33CEA2D9L);
            int8_t l_230[3][2][9] = {{{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L},{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L}},{{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L},{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L}},{{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L},{0L,1L,0x4EL,0x3EL,0x4EL,1L,0L,0x26L,0L}}};
            int16_t l_231 = 4L;
            int32_t l_232 = (-1L);
            uint16_t l_233 = 65534UL;
            int64_t l_234 = 0x3C4F20E0C4DDB9A7L;
            uint64_t l_235[8][9][3] = {{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}},{{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL},{18446744073709551609UL,0UL,0x0B6C39EAFD24687FL}}};
            int8_t l_236 = 0x21L;
            int64_t l_237 = 0x1DC24AF3A27D7E99L;
            int8_t l_238 = 0x4EL;
            uint32_t l_239 = 0UL;
            int32_t l_240 = 0x717AFA52L;
            uint8_t l_241[10][6][1] = {{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}},{{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}}};
            int8_t l_272 = 0x29L;
            uint16_t l_273 = 65535UL;
            uint64_t l_274 = 0x4428E2349722A27FL;
            uint8_t l_275 = 248UL;
            uint16_t l_276 = 0x6255L;
            int8_t l_277 = 8L;
            int16_t l_278 = 0L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_218[i] = 0x0B35B371L;
            for (i = 0; i < 2; i++)
                l_222[i] = 0xFB30011547D27101L;
            l_217 = (void*)0;
            l_240 = (l_239 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))((l_218[0] , l_219[3]), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(l_220.xxyxxxxx)).s61, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))), 0x4D6FE356L, 0x19102758L)).lo, ((VECTOR(int32_t, 16))((l_223 = (l_222[0] = l_221)), ((VECTOR(int32_t, 4))(l_224.wxzz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((GROUP_DIVERGE(0, 1) , l_225[1][2]) , (((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-4L), ((l_226 &= 0x2525884CL) , (((VECTOR(int64_t, 2))(l_227.yy)).hi , ((VECTOR(int32_t, 16))((l_228 , (l_230[0][1][3] = ((VECTOR(int32_t, 16))(l_229.xxxwxywzzwxyxzzw)).s5)), ((VECTOR(int32_t, 2))(0x0B5B80E2L, 0x6430C6EEL)).hi, 0x1BB49C2EL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x2E7404A6L)))).xxyyyyyyxyyxyxyx)).even)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(l_231, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4B69C616L, 0L)).yxyy)).hi)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(2L, 0x749BB185L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_232, (-10L), 1L, (-1L))).zywwzywx)).s62))))).xxyy, (int32_t)l_233))).zxzxyyyz, ((VECTOR(int32_t, 8))((-1L)))))).hi, ((VECTOR(int32_t, 4))(0x340D20FEL))))).w, l_234, 2L, 0L, (-1L))).hi, ((VECTOR(int32_t, 4))(0x66C5E4E9L))))).even)).xyyy)), (-6L))).s6)), 0L, 0x08B0BA48L)), l_235[4][0][2], 0x4F513EC3L, l_236, 0x2520D24FL, 0x64CE6463L, 0x02A619F6L, (-10L), l_237, ((VECTOR(int32_t, 2))(0x1E02E3F6L)), (-1L), 0x482B510AL)).s82b6)).x, 1L, 6L, ((VECTOR(int32_t, 2))(0x3F271D07L)), l_238, 1L, 8L)).s5404466154773645, ((VECTOR(int32_t, 16))(0x0C668514L)), ((VECTOR(int32_t, 16))(0x5AA3E19FL))))).even)).s53)), ((VECTOR(int32_t, 2))(0x14F07992L))))), ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 2))((-1L)))))).hi , 6L)), 0x665E6F25L, 0x7C371AC0L, (-3L), ((VECTOR(int32_t, 4))(0x3FC23E28L)))).s65)), ((VECTOR(int32_t, 8))((-4L))), (-5L))).s80))), 9L)), ((VECTOR(int32_t, 4))((-1L)))))).wyywzyyzzzwxyxwy)).sc);
            if ((l_241[2][4][0] , 0x26FDCA66L))
            { /* block id: 146 */
                int32_t l_243 = 0x0A278C17L;
                int32_t *l_242 = &l_243;
                int32_t *l_244 = &l_243;
                int64_t l_245 = (-1L);
                l_217 = (void*)0;
                l_244 = (l_217 = l_242);
                l_232 = (l_220.y = (l_223 = ((*l_217) = l_245)));
            }
            else
            { /* block id: 154 */
                uint32_t l_246 = 4294967289UL;
                VECTOR(int32_t, 4) l_247 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4C367E73L), 0x4C367E73L);
                int i;
                l_223 = ((VECTOR(int32_t, 8))(0x665CAF6BL, (-5L), l_246, ((VECTOR(int32_t, 4))(l_247.yxyz)), 0x16B1DF58L)).s1;
                for (l_246 = (-25); (l_246 != 8); l_246 = safe_add_func_int32_t_s_s(l_246, 9))
                { /* block id: 158 */
                    int32_t l_250 = 0x42B92E42L;
                    for (l_250 = 0; (l_250 != 15); l_250++)
                    { /* block id: 161 */
                        uint8_t l_253 = 255UL;
                        int32_t l_256 = 0x2F8367F4L;
                        int8_t l_257 = (-1L);
                        VECTOR(uint32_t, 4) l_258 = (VECTOR(uint32_t, 4))(0xF390D4E8L, (VECTOR(uint32_t, 2))(0xF390D4E8L, 1UL), 1UL);
                        int32_t l_259 = 0L;
                        int16_t l_260 = 0x247CL;
                        uint16_t l_261[10] = {0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L,0xFFC5L};
                        int i;
                        l_253--;
                        l_258.y ^= (l_256 , (l_229.x = l_257));
                        ++l_261[7];
                    }
                    for (l_250 = 0; (l_250 >= 6); l_250 = safe_add_func_int64_t_s_s(l_250, 4))
                    { /* block id: 169 */
                        int16_t l_266 = 0x695DL;
                        int64_t l_267 = 8L;
                        int64_t l_268 = 0x43B9F427DD3A2F44L;
                        uint8_t l_269 = 255UL;
                        uint64_t l_270 = 0xB3F4C96F0BE2BD0BL;
                        uint64_t l_271 = 18446744073709551607UL;
                        l_267 = l_266;
                        l_220.y |= (l_269 |= (l_224.z = l_268));
                        l_220.x |= l_270;
                        l_247.w = l_271;
                    }
                }
            }
            l_278 = (((l_275 = (l_272 , (l_274 |= (l_273 , 0L)))) , l_276) , l_277);
        }
        else
        { /* block id: 182 */
            int32_t l_279 = 0x5FA0B68FL;
            int16_t l_280 = 0x2A0FL;
            l_280 &= l_279;
        }
        l_282 = l_281;
        for (l_281 = 6; (l_281 == 37); l_281 = safe_add_func_uint32_t_u_u(l_281, 4))
        { /* block id: 188 */
            uint16_t l_285 = 65535UL;
            uint64_t l_414 = 18446744073709551615UL;
            uint64_t l_417 = 0x3BFA659DBCF3491EL;
            int32_t l_418 = 0x127D038FL;
            int16_t l_419 = 0x56B5L;
            uint32_t l_420 = 4294967289UL;
            int32_t l_423 = 1L;
            int32_t l_425 = 7L;
            int32_t *l_424 = &l_425;
            if (l_285)
            { /* block id: 189 */
                int32_t l_286 = 0x5E3E4F86L;
                VECTOR(int32_t, 2) l_316 = (VECTOR(int32_t, 2))((-3L), 0x21AEED54L);
                uint16_t l_317 = 65535UL;
                VECTOR(int16_t, 16) l_318 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int16_t, 2))(1L, (-2L)), (VECTOR(int16_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L));
                VECTOR(uint16_t, 8) l_319 = (VECTOR(uint16_t, 8))(0xDC8FL, (VECTOR(uint16_t, 4))(0xDC8FL, (VECTOR(uint16_t, 2))(0xDC8FL, 0x23DCL), 0x23DCL), 0x23DCL, 0xDC8FL, 0x23DCL);
                VECTOR(uint16_t, 4) l_320 = (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x0067L), 0x0067L);
                VECTOR(int16_t, 4) l_321 = (VECTOR(int16_t, 4))(0x4C1EL, (VECTOR(int16_t, 2))(0x4C1EL, 0x542FL), 0x542FL);
                VECTOR(int32_t, 8) l_322 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
                VECTOR(int32_t, 4) l_323 = (VECTOR(int32_t, 4))(0x50BB2A90L, (VECTOR(int32_t, 2))(0x50BB2A90L, 0x7BE7A53BL), 0x7BE7A53BL);
                int32_t l_324 = 1L;
                int64_t l_325 = 3L;
                uint16_t l_326 = 65527UL;
                int32_t l_327 = (-1L);
                int32_t l_328 = 0L;
                uint8_t l_329[4][7] = {{0xB2L,1UL,0xB2L,0xB2L,1UL,0xB2L,0xB2L},{0xB2L,1UL,0xB2L,0xB2L,1UL,0xB2L,0xB2L},{0xB2L,1UL,0xB2L,0xB2L,1UL,0xB2L,0xB2L},{0xB2L,1UL,0xB2L,0xB2L,1UL,0xB2L,0xB2L}};
                uint8_t l_330 = 1UL;
                int64_t l_331[2];
                int32_t l_350[1];
                uint8_t l_351 = 254UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_331[i] = (-4L);
                for (i = 0; i < 1; i++)
                    l_350[i] = 3L;
                if (l_286)
                { /* block id: 190 */
                    uint16_t l_287 = 1UL;
                    uint8_t l_295 = 0x0DL;
                    uint64_t l_296[1][7][1];
                    uint16_t l_299 = 8UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_296[i][j][k] = 0UL;
                        }
                    }
                    if ((l_286 = l_287))
                    { /* block id: 192 */
                        int32_t l_288[1][9];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_288[i][j] = (-1L);
                        }
                        l_288[0][8] = l_288[0][2];
                    }
                    else
                    { /* block id: 194 */
                        int32_t *l_289 = (void*)0;
                        int32_t l_291 = 0x15999D3EL;
                        int32_t *l_290 = &l_291;
                        int32_t *l_292 = &l_291;
                        int32_t *l_293[8][4] = {{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291},{&l_291,&l_291,&l_291,&l_291}};
                        int8_t l_294[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_294[i] = 0x08L;
                        l_286 |= (-8L);
                        l_290 = l_289;
                        l_293[7][1] = (l_292 = (void*)0);
                        l_286 = l_294[0];
                    }
                    l_286 |= l_295;
                    l_296[0][0][0]++;
                    if (l_299)
                    { /* block id: 203 */
                        int32_t l_301 = 6L;
                        int32_t *l_300 = &l_301;
                        VECTOR(int32_t, 2) l_302 = (VECTOR(int32_t, 2))((-1L), (-10L));
                        int16_t l_303[4][8] = {{(-1L),(-1L),1L,0x0DA7L,0x12C7L,0x0DA7L,1L,(-1L)},{(-1L),(-1L),1L,0x0DA7L,0x12C7L,0x0DA7L,1L,(-1L)},{(-1L),(-1L),1L,0x0DA7L,0x12C7L,0x0DA7L,1L,(-1L)},{(-1L),(-1L),1L,0x0DA7L,0x12C7L,0x0DA7L,1L,(-1L)}};
                        int i, j;
                        l_286 ^= (-5L);
                        l_300 = (void*)0;
                        l_286 = (-3L);
                        l_303[3][6] = (l_286 |= ((VECTOR(int32_t, 2))(l_302.yy)).lo);
                    }
                    else
                    { /* block id: 209 */
                        int64_t l_304[3][9][3] = {{{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL}},{{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL}},{{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL},{(-1L),0x103F125F35571660L,0x0239DE058419561DL}}};
                        int32_t l_305 = 0x29E181D6L;
                        int16_t l_306 = 1L;
                        uint64_t l_307 = 1UL;
                        int32_t *l_310 = &l_305;
                        int32_t *l_311 = (void*)0;
                        int32_t *l_312[1];
                        int32_t *l_313[7][1][7] = {{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}},{{&l_305,&l_305,(void*)0,&l_305,&l_305,&l_305,&l_305}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_312[i] = (void*)0;
                        l_286 &= (((VECTOR(uint16_t, 2))(0x7301L, 1UL)).odd , (-1L));
                        ++l_307;
                        l_311 = l_310;
                        l_313[2][0][5] = l_312[0];
                    }
                }
                else
                { /* block id: 215 */
                    int32_t l_314[9] = {0x66027D13L,0x0A35FD44L,0x66027D13L,0x66027D13L,0x0A35FD44L,0x66027D13L,0x66027D13L,0x0A35FD44L,0x66027D13L};
                    int32_t *l_315[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_315[i] = &l_314[2];
                    l_315[0] = (l_314[6] , l_315[1]);
                }
                if (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(0x258A9BDFL, ((VECTOR(int32_t, 4))(l_316.xxxx)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_317, (-1L), 0L, (-3L))).wxyzxyxz)).s6660561043165056, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x6D1B8953L, 0x34354BBBL, 0x1BB9CFE5L, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_318.s3397ec06545ed4ea)).s07c8, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(8UL, 9UL)).yxyx)))).hi, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(65533UL, 0x3704L, 0xA7E6L, 65535UL)).wzwzwzzz, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_319.s4764)).ywyxxwzx))))))).lo, ((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(l_320.zx)), 0x1824L))))).even))), ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(l_321.zzyzwwyx))))).s55))).xyxx))), 0x60F0CE56L)).s3650413212614670))))), (int32_t)(-1L)))).even, ((VECTOR(int32_t, 4))(l_322.s3474)).xwzxzyxx, ((VECTOR(int32_t, 8))(l_323.zwwzzwyz))))), l_324, 1L, 1L)).lo, ((VECTOR(int32_t, 16))(0x3283B7F0L, (((l_325 , 65526UL) , (l_326 , l_327)) , l_328), l_329[2][0], 8L, l_330, 0x750B7DF1L, l_331[0], 0x406C4E4BL, ((VECTOR(int32_t, 2))(0x2C77AA33L)), ((VECTOR(int32_t, 4))(0x1112B7DBL)), 0x2CA5B880L, 0x1579A839L)).hi, ((VECTOR(int32_t, 8))(1L))))).s6)
                { /* block id: 218 */
                    uint8_t l_332[7] = {0xC0L,0xC0L,0xC0L,0xC0L,0xC0L,0xC0L,0xC0L};
                    int i;
                    l_332[2]--;
                }
                else
                { /* block id: 220 */
                    int32_t l_335 = 1L;
                    int32_t *l_342 = &l_335;
                    int32_t *l_343 = &l_335;
                    uint64_t l_346 = 0xF2DF42169BD36923L;
                    uint64_t *l_345 = &l_346;
                    uint64_t **l_344 = &l_345;
                    uint64_t **l_347[4][9] = {{&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345}};
                    uint8_t l_348[10][1] = {{0x00L},{0x00L},{0x00L},{0x00L},{0x00L},{0x00L},{0x00L},{0x00L},{0x00L},{0x00L}};
                    int16_t l_349 = 0x0C83L;
                    int i, j;
                    for (l_335 = 16; (l_335 >= (-11)); l_335--)
                    { /* block id: 223 */
                        int32_t l_339 = 0x336EF018L;
                        int32_t *l_338 = &l_339;
                        int32_t *l_340[8][7] = {{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339},{&l_339,&l_339,&l_339,&l_339,&l_339,&l_339,&l_339}};
                        VECTOR(int32_t, 16) l_341 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x176E453CL), 0x176E453CL), 0x176E453CL, (-7L), 0x176E453CL, (VECTOR(int32_t, 2))((-7L), 0x176E453CL), (VECTOR(int32_t, 2))((-7L), 0x176E453CL), (-7L), 0x176E453CL, (-7L), 0x176E453CL);
                        int i, j;
                        l_340[3][2] = l_338;
                        l_316.y ^= ((VECTOR(int32_t, 8))(l_341.s7ec9c151)).s0;
                    }
                    l_343 = l_342;
                    l_347[0][8] = l_344;
                    l_322.s4 &= (l_348[3][0] , l_349);
                }
                l_286 ^= (l_350[0] , (l_351 , (-1L)));
            }
            else
            { /* block id: 232 */
                int32_t l_352 = 0x4DE15898L;
                int16_t l_378 = (-1L);
                uint8_t l_379 = 254UL;
                int64_t l_412[5] = {1L,1L,1L,1L,1L};
                int32_t *l_413 = &l_352;
                int i;
                for (l_352 = 0; (l_352 != 8); ++l_352)
                { /* block id: 235 */
                    uint16_t l_355 = 1UL;
                    uint8_t l_356 = 0xFEL;
                    int32_t l_357 = 0L;
                    uint32_t l_372 = 8UL;
                    l_356 &= l_355;
                    if (l_357)
                    { /* block id: 237 */
                        union U0 l_359 = {1L};
                        union U0 *l_358 = &l_359;
                        union U0 *l_360 = &l_359;
                        uint16_t l_361 = 0x24CCL;
                        uint64_t l_364 = 0xE34CD7436B87B797L;
                        VECTOR(int16_t, 8) l_365 = (VECTOR(int16_t, 8))(0x6CFEL, (VECTOR(int16_t, 4))(0x6CFEL, (VECTOR(int16_t, 2))(0x6CFEL, 0x5FE1L), 0x5FE1L), 0x5FE1L, 0x6CFEL, 0x5FE1L);
                        int32_t l_366 = 0x321D4D25L;
                        int i;
                        l_360 = l_358;
                        --l_361;
                        l_365.s6 = (l_364 , (-7L));
                        l_366 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(9L, 0x39FE3795L)).yyxyyxxxxxyxyxxy)))).s2;
                    }
                    else
                    { /* block id: 242 */
                        int32_t l_368[2][9][1];
                        int32_t *l_367[6] = {&l_368[1][5][0],&l_368[1][5][0],&l_368[1][5][0],&l_368[1][5][0],&l_368[1][5][0],&l_368[1][5][0]};
                        int32_t *l_369 = &l_368[0][1][0];
                        uint16_t l_370 = 65535UL;
                        uint8_t l_371 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 9; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_368[i][j][k] = (-1L);
                            }
                        }
                        l_369 = l_367[5];
                        l_371 &= l_370;
                    }
                    l_372 = (-7L);
                    for (l_357 = (-13); (l_357 < (-22)); l_357 = safe_sub_func_int8_t_s_s(l_357, 8))
                    { /* block id: 249 */
                        int32_t l_376 = 0x30DE17C3L;
                        int32_t *l_375 = &l_376;
                        int32_t *l_377 = &l_376;
                        l_377 = l_375;
                    }
                }
                if ((l_379 = l_378))
                { /* block id: 254 */
                    int32_t l_380 = 0x56D06CA2L;
                    uint32_t l_404 = 0UL;
                    uint32_t l_405 = 0x0330CD32L;
                    uint64_t l_408 = 0UL;
                    uint64_t *l_407 = &l_408;
                    uint64_t **l_406[9][4][3] = {{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}},{{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407},{&l_407,&l_407,&l_407}}};
                    int i, j, k;
                    for (l_380 = 5; (l_380 == (-19)); l_380 = safe_sub_func_int16_t_s_s(l_380, 5))
                    { /* block id: 257 */
                        VECTOR(int64_t, 2) l_383 = (VECTOR(int64_t, 2))(0L, (-3L));
                        VECTOR(int64_t, 2) l_384 = (VECTOR(int64_t, 2))((-2L), 1L);
                        uint16_t l_385 = 0xF3ADL;
                        uint8_t l_386 = 0x97L;
                        VECTOR(int64_t, 8) l_387 = (VECTOR(int64_t, 8))(0x6D2D776C4493FA2EL, (VECTOR(int64_t, 4))(0x6D2D776C4493FA2EL, (VECTOR(int64_t, 2))(0x6D2D776C4493FA2EL, (-8L)), (-8L)), (-8L), 0x6D2D776C4493FA2EL, (-8L));
                        int64_t l_388 = 0L;
                        int32_t l_389 = (-4L);
                        VECTOR(int64_t, 4) l_390 = (VECTOR(int64_t, 4))(0x66BF356E5ACCBC7FL, (VECTOR(int64_t, 2))(0x66BF356E5ACCBC7FL, 0L), 0L);
                        VECTOR(int64_t, 16) l_391 = (VECTOR(int64_t, 16))(0x20F93E4D36AF5C11L, (VECTOR(int64_t, 4))(0x20F93E4D36AF5C11L, (VECTOR(int64_t, 2))(0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L), 0x67ABCD14D87F1512L), 0x67ABCD14D87F1512L, 0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L, (VECTOR(int64_t, 2))(0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L), (VECTOR(int64_t, 2))(0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L), 0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L, 0x20F93E4D36AF5C11L, 0x67ABCD14D87F1512L);
                        uint64_t l_392[4][8][8] = {{{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL}},{{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL}},{{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL}},{{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL},{1UL,1UL,0x93F7C3BD085FA091L,0xC543D13061C28098L,4UL,0xC543D13061C28098L,0x93F7C3BD085FA091L,1UL}}};
                        VECTOR(int64_t, 8) l_393 = (VECTOR(int64_t, 8))(0x5B498FA7BCA6CF48L, (VECTOR(int64_t, 4))(0x5B498FA7BCA6CF48L, (VECTOR(int64_t, 2))(0x5B498FA7BCA6CF48L, 0L), 0L), 0L, 0x5B498FA7BCA6CF48L, 0L);
                        VECTOR(int64_t, 4) l_394 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-3L)), (-3L));
                        uint32_t l_395 = 0xBB694883L;
                        VECTOR(int64_t, 16) l_396 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x6846531833A8C14DL), 0x6846531833A8C14DL), 0x6846531833A8C14DL, (-1L), 0x6846531833A8C14DL, (VECTOR(int64_t, 2))((-1L), 0x6846531833A8C14DL), (VECTOR(int64_t, 2))((-1L), 0x6846531833A8C14DL), (-1L), 0x6846531833A8C14DL, (-1L), 0x6846531833A8C14DL);
                        VECTOR(uint64_t, 2) l_397 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551608UL);
                        int32_t l_398[10] = {0L,9L,0L,0L,9L,0L,0L,9L,0L,0L};
                        int16_t l_399[8][6] = {{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L},{(-1L),(-1L),0L,0L,0x4ADAL,0L}};
                        int16_t l_400 = 0L;
                        int32_t l_401[9][4] = {{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL},{0L,0x54519BFFL,(-1L),0x54519BFFL}};
                        int32_t l_403 = 0x1FFCE709L;
                        int32_t *l_402 = &l_403;
                        int i, j, k;
                        l_401[4][1] &= (l_400 = (l_352 ^= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(0x70BBE29961B5EECFL, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(l_383.xyxyxyxxyxyyxxyx)).s2f, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(0x79DD5C442291A3EEL, 0x320A03B9E8282D16L, 0x68786165B3B2AFB7L, 1L)).hi))))), (-1L), ((VECTOR(int64_t, 2))((-6L), 0x06B87F0C31D8D4A9L)), 0x2F6E727C3F0AD042L, 0x25B0AF15DCCE0515L)).s4, (-8L), 8L, ((VECTOR(int64_t, 2))(0L, 1L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x1538CD5A551108C7L, ((VECTOR(int64_t, 2))(0x37E0B912B3F791A4L, 3L)), 0x6E1D4F1E7513BDEFL)))), 0x1D2A51F566A28746L, (-4L), 3L, 0x5B022485EFD7D56FL)).s62)), 0x6DC629D475DE7E58L)).s34))), (-1L))).hi, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 8))(l_384.yxxxxyyx)).s72, (int64_t)(l_388 = ((VECTOR(int64_t, 8))((l_386 = l_385), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_387.s1720)))), (-1L), 0x733B2AC8EA3E9856L, (-1L))).s0), (int64_t)l_389))).xyxy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_390.yz)).xxxxxyyy)).hi))).lo))).xxxxxxxyyyyyyxyx, ((VECTOR(int64_t, 4))(l_391.s1ddc)).yzwwxwyzywxwxxzy))).s1868, ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, 0x3B52288F5D08C591L)))).yyyxxyyx)).even, (int64_t)l_392[0][5][5]))), ((VECTOR(int64_t, 8))(l_393.s06644517)).lo))).wzywzyxzwxyxxxzy)).sbe, ((VECTOR(int64_t, 16))(l_394.ywzxyzzxzxwxxzyx)).sb5))).xxyxyxxxxxyxyxxy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_395, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-1L), (-6L))).yyxy)).ywzxwywy, ((VECTOR(int64_t, 16))(0L, (-1L), 2L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_396.s8fb2c9ad8759cf60)).s8735)), l_397.x, ((VECTOR(int64_t, 8))(0L)))).lo, ((VECTOR(int64_t, 8))((-1L)))))).s2320741427660146)).s2bfa)).xyyzxxyz)), 0x037FA248BC0D39F2L, 0x514A264113C6A15DL, l_398[9], ((VECTOR(int64_t, 4))(0x736D592E75AAC8FBL)))).s9a)).xyyyxyxyxyyxyxxy))))).sa5f6)).odd)))).even , l_399[7][1])));
                        l_402 = (void*)0;
                    }
                    l_405 = l_404;
                    l_406[6][1][1] = (void*)0;
                }
                else
                { /* block id: 267 */
                    uint64_t l_409 = 0x0CE7516D5F1F278AL;
                    int32_t l_411 = 0x56F821B4L;
                    int32_t *l_410[6][5] = {{(void*)0,&l_411,&l_411,(void*)0,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411},{(void*)0,&l_411,&l_411,(void*)0,&l_411}};
                    int i, j;
                    l_410[5][1] = (l_409 , (FAKE_DIVERGE(p_727->group_1_offset, get_group_id(1), 10) , l_410[5][0]));
                }
                l_413 = (l_412[0] , l_413);
            }
            l_414++;
            l_424 = (l_417 , ((l_420--) , (l_423 , (void*)0)));
        }
        if (l_426)
        { /* block id: 276 */
            int16_t l_427 = 0x2BCDL;
            uint64_t l_428 = 0xC8170436DFBE6D28L;
            uint8_t l_429 = 0xB5L;
            uint64_t l_430 = 18446744073709551615UL;
            VECTOR(int32_t, 16) l_431 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4D81F35FL), 0x4D81F35FL), 0x4D81F35FL, 0L, 0x4D81F35FL, (VECTOR(int32_t, 2))(0L, 0x4D81F35FL), (VECTOR(int32_t, 2))(0L, 0x4D81F35FL), 0L, 0x4D81F35FL, 0L, 0x4D81F35FL);
            uint8_t l_432 = 0xF6L;
            int32_t l_433 = 0x76177223L;
            int i;
            l_428 = l_427;
            l_430 ^= l_429;
            l_433 = (l_432 = ((VECTOR(int32_t, 2))(l_431.sd1)).hi);
        }
        else
        { /* block id: 281 */
            int32_t l_434 = 0x17973129L;
            uint32_t l_435 = 4294967293UL;
            int8_t l_442 = 1L;
            int64_t l_443 = (-1L);
            int32_t l_444 = 6L;
            uint32_t l_445 = 1UL;
            uint32_t l_446 = 0x463A5F47L;
            VECTOR(int32_t, 16) l_447 = (VECTOR(int32_t, 16))(0x3EC201F3L, (VECTOR(int32_t, 4))(0x3EC201F3L, (VECTOR(int32_t, 2))(0x3EC201F3L, 6L), 6L), 6L, 0x3EC201F3L, 6L, (VECTOR(int32_t, 2))(0x3EC201F3L, 6L), (VECTOR(int32_t, 2))(0x3EC201F3L, 6L), 0x3EC201F3L, 6L, 0x3EC201F3L, 6L);
            int8_t l_448 = 0x1CL;
            int64_t l_449 = (-3L);
            uint32_t l_450 = 4294967295UL;
            uint32_t l_451 = 0xCD151A34L;
            int64_t l_452 = (-9L);
            uint16_t l_453[4];
            int64_t l_454 = 0x3892A02394813365L;
            int i;
            for (i = 0; i < 4; i++)
                l_453[i] = 0x642AL;
            l_435 ^= l_434;
            for (l_434 = 0; (l_434 <= (-26)); --l_434)
            { /* block id: 285 */
                union U0 l_439 = {5L};
                union U0 *l_438[1];
                int32_t l_440 = 0x657323E9L;
                int16_t l_441 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_438[i] = &l_439;
                l_438[0] = (void*)0;
                l_441 = l_440;
            }
            l_444 = (l_443 = (l_442 = ((VECTOR(int32_t, 2))(1L, 0x76A83A9BL)).even));
            l_447.s9 = ((VECTOR(int32_t, 16))(0x7161A77DL, l_445, ((VECTOR(int32_t, 4))(l_446, (-3L), 0x21810280L, 0x1CCE09CEL)), 0x38A26472L, ((VECTOR(int32_t, 4))(l_447.s258c)), (-1L), (l_448 , (l_449 , l_450)), ((l_451 , 1UL) , (l_434 = ((l_452 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))((-10L), 0x77B2L)), ((VECTOR(uint16_t, 8))(((l_216 = ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x8EBF98DFC27598A4L, 0x0911D47ED10DD289L)).xyxyyyxx)).even)).x) , l_453[3]), 0UL, ((VECTOR(uint16_t, 4))(0x0CAFL)), 0x9071L, 0x8B7AL)).s57))).xxyyxxxx)).s2) , l_454))), 8L, 0x2547C621L)).s9;
        }
        unsigned int result = 0;
        result += l_216;
        result += l_281;
        result += l_282;
        result += l_426;
        atomic_add(&p_727->l_special_values[0], result);
    }
    else
    { /* block id: 296 */
        (1 + 1);
    }
    for (p_194 = 15; (p_194 == 56); p_194 = safe_add_func_int8_t_s_s(p_194, 3))
    { /* block id: 301 */
        int8_t *l_458 = &p_727->g_459;
        uint32_t l_462 = 8UL;
        VECTOR(int16_t, 16) l_465 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1814L), 0x1814L), 0x1814L, (-1L), 0x1814L, (VECTOR(int16_t, 2))((-1L), 0x1814L), (VECTOR(int16_t, 2))((-1L), 0x1814L), (-1L), 0x1814L, (-1L), 0x1814L);
        VECTOR(uint16_t, 16) l_471 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x63A3L), 0x63A3L), 0x63A3L, 65526UL, 0x63A3L, (VECTOR(uint16_t, 2))(65526UL, 0x63A3L), (VECTOR(uint16_t, 2))(65526UL, 0x63A3L), 65526UL, 0x63A3L, 65526UL, 0x63A3L);
        union U0 *l_475[10] = {&p_727->g_473[8][0][1],&p_727->g_473[1][0][3],&p_727->g_473[8][0][1],&p_727->g_473[1][0][3],&p_727->g_473[8][0][1],&p_727->g_473[8][0][1],&p_727->g_473[1][0][3],&p_727->g_473[8][0][1],&p_727->g_473[1][0][3],&p_727->g_473[8][0][1]};
        union U0 **l_474 = &l_475[7];
        int i;
        (*p_727->g_484) = (((VECTOR(int16_t, 4))(p_727->g_457.yxyx)).x && ((((((*l_458) ^= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x62L, 0x4DL)).xyxx)).xwyxyzxz)).s3) ^ (safe_div_func_uint64_t_u_u(18446744073709551615UL, l_462))) > ((safe_lshift_func_uint16_t_u_s(p_727->g_125[0], ((VECTOR(int16_t, 4))(l_465.sde37)).y)) ^ (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_727->g_468.s86f55161749cae83)).s50)).yyyxxxyxyxyyxyxy)).s54, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_469.s0432654627613106)).s5d32)), 65533UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_727->g_470.s4277225005703211)).sb26c)))).lo)), 1UL)).s2462300267250107)).sd9)), ((VECTOR(uint16_t, 16))(l_471.s7e8ddb5e0ffbb8f9)).s92))).xxxy)).zwyxywxx))), (uint16_t)((l_472 != (p_727->g_476 = ((*l_474) = l_472))) < (l_469.s5 <= ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_469.s7, 5)) < (safe_div_func_int16_t_s_s(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_727->g_483.sea96)).xywxwwwzwyxxywwy)).sb ^ ((+l_469.s1) && 0L)) ^ 1L), p_727->g_211))), (-1L))) == 0L)))))).s2763544405017362, ((VECTOR(uint16_t, 16))(0xA49CL))))).s1, p_727->l_comm_values[(safe_mod_func_uint32_t_u_u(p_727->tid, 114))])))) != GROUP_DIVERGE(2, 1)) > l_462));
        (*p_727->g_485) = p_196;
    }
    l_486 = (*p_727->g_485);
    return l_469.s2;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[114];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 114; i++)
            l_comm_values[i] = 1;
    struct S1 c_728;
    struct S1* p_727 = &c_728;
    struct S1 c_729 = {
        4294967295UL, // p_727->g_115
        65535UL, // p_727->g_118
        {4L,4L}, // p_727->g_125
        1L, // p_727->g_159
        {{&p_727->g_159,&p_727->g_159,&p_727->g_159,&p_727->g_159}}, // p_727->g_158
        (void*)0, // p_727->g_160
        4L, // p_727->g_171
        0x734E232B65486D1CL, // p_727->g_191
        0L, // p_727->g_211
        (VECTOR(int16_t, 2))(0L, 0x2BB8L), // p_727->g_457
        0x3AL, // p_727->g_459
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), 65527UL), 65527UL, 1UL, 65527UL, (VECTOR(uint16_t, 2))(1UL, 65527UL), (VECTOR(uint16_t, 2))(1UL, 65527UL), 1UL, 65527UL, 1UL, 65527UL), // p_727->g_468
        (VECTOR(uint16_t, 8))(0xA10BL, (VECTOR(uint16_t, 4))(0xA10BL, (VECTOR(uint16_t, 2))(0xA10BL, 0xF45BL), 0xF45BL), 0xF45BL, 0xA10BL, 0xF45BL), // p_727->g_470
        {{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}},{{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}},{{5L},{5L},{0x3D292CAEL},{0x236F4A3EL},{0x0AA241CFL}}}}, // p_727->g_473
        (void*)0, // p_727->g_476
        (VECTOR(uint16_t, 16))(0x5CD7L, (VECTOR(uint16_t, 4))(0x5CD7L, (VECTOR(uint16_t, 2))(0x5CD7L, 65529UL), 65529UL), 65529UL, 0x5CD7L, 65529UL, (VECTOR(uint16_t, 2))(0x5CD7L, 65529UL), (VECTOR(uint16_t, 2))(0x5CD7L, 65529UL), 0x5CD7L, 65529UL, 0x5CD7L, 65529UL), // p_727->g_483
        &p_727->g_473[8][0][1].f0, // p_727->g_484
        &p_727->g_160, // p_727->g_485
        {0x2D896E52L}, // p_727->g_492
        0x5D5B7979L, // p_727->g_501
        0x9F880AFE2C6A5E0BL, // p_727->g_521
        (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x4B1EFA3EBFDBB4E8L), 0x4B1EFA3EBFDBB4E8L), 0x4B1EFA3EBFDBB4E8L, 9L, 0x4B1EFA3EBFDBB4E8L), // p_727->g_528
        (void*)0, // p_727->g_538
        &p_727->g_538, // p_727->g_537
        &p_727->g_537, // p_727->g_539
        (VECTOR(int32_t, 4))(0x193A75E1L, (VECTOR(int32_t, 2))(0x193A75E1L, 0x6541B975L), 0x6541B975L), // p_727->g_546
        (VECTOR(uint8_t, 8))(0xDBL, (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 252UL), 252UL), 252UL, 0xDBL, 252UL), // p_727->g_556
        (VECTOR(uint8_t, 8))(0x3DL, (VECTOR(uint8_t, 4))(0x3DL, (VECTOR(uint8_t, 2))(0x3DL, 3UL), 3UL), 3UL, 0x3DL, 3UL), // p_727->g_557
        (-8L), // p_727->g_567
        &p_727->g_473[8][0][1].f0, // p_727->g_582
        {{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}},{{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0},{&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_492.f0,&p_727->g_473[8][0][1].f0,&p_727->g_171,&p_727->g_171,&p_727->g_492.f0}}}, // p_727->g_599
        &p_727->g_492.f0, // p_727->g_600
        (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 6UL), 6UL), // p_727->g_616
        (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xEFCDL), 0xEFCDL), 0xEFCDL, 2UL, 0xEFCDL), // p_727->g_634
        0UL, // p_727->g_663
        6UL, // p_727->g_665
        &p_727->g_160, // p_727->g_671
        &p_727->g_191, // p_727->g_679
        &p_727->g_492.f0, // p_727->g_690
        (VECTOR(int8_t, 16))(0x5DL, (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0L), 0L), 0L, 0x5DL, 0L, (VECTOR(int8_t, 2))(0x5DL, 0L), (VECTOR(int8_t, 2))(0x5DL, 0L), 0x5DL, 0L, 0x5DL, 0L), // p_727->g_708
        0x38EEE37387C7F6C2L, // p_727->g_719
        (void*)0, // p_727->g_720
        0, // p_727->v_collective
        sequence_input[get_global_id(0)], // p_727->global_0_offset
        sequence_input[get_global_id(1)], // p_727->global_1_offset
        sequence_input[get_global_id(2)], // p_727->global_2_offset
        sequence_input[get_local_id(0)], // p_727->local_0_offset
        sequence_input[get_local_id(1)], // p_727->local_1_offset
        sequence_input[get_local_id(2)], // p_727->local_2_offset
        sequence_input[get_group_id(0)], // p_727->group_0_offset
        sequence_input[get_group_id(1)], // p_727->group_1_offset
        sequence_input[get_group_id(2)], // p_727->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 114)), permutations[0][get_linear_local_id()])), // p_727->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_728 = c_729;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_727);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_727->g_115, "p_727->g_115", print_hash_value);
    transparent_crc(p_727->g_118, "p_727->g_118", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_727->g_125[i], "p_727->g_125[i]", print_hash_value);

    }
    transparent_crc(p_727->g_159, "p_727->g_159", print_hash_value);
    transparent_crc(p_727->g_171, "p_727->g_171", print_hash_value);
    transparent_crc(p_727->g_191, "p_727->g_191", print_hash_value);
    transparent_crc(p_727->g_211, "p_727->g_211", print_hash_value);
    transparent_crc(p_727->g_457.x, "p_727->g_457.x", print_hash_value);
    transparent_crc(p_727->g_457.y, "p_727->g_457.y", print_hash_value);
    transparent_crc(p_727->g_459, "p_727->g_459", print_hash_value);
    transparent_crc(p_727->g_468.s0, "p_727->g_468.s0", print_hash_value);
    transparent_crc(p_727->g_468.s1, "p_727->g_468.s1", print_hash_value);
    transparent_crc(p_727->g_468.s2, "p_727->g_468.s2", print_hash_value);
    transparent_crc(p_727->g_468.s3, "p_727->g_468.s3", print_hash_value);
    transparent_crc(p_727->g_468.s4, "p_727->g_468.s4", print_hash_value);
    transparent_crc(p_727->g_468.s5, "p_727->g_468.s5", print_hash_value);
    transparent_crc(p_727->g_468.s6, "p_727->g_468.s6", print_hash_value);
    transparent_crc(p_727->g_468.s7, "p_727->g_468.s7", print_hash_value);
    transparent_crc(p_727->g_468.s8, "p_727->g_468.s8", print_hash_value);
    transparent_crc(p_727->g_468.s9, "p_727->g_468.s9", print_hash_value);
    transparent_crc(p_727->g_468.sa, "p_727->g_468.sa", print_hash_value);
    transparent_crc(p_727->g_468.sb, "p_727->g_468.sb", print_hash_value);
    transparent_crc(p_727->g_468.sc, "p_727->g_468.sc", print_hash_value);
    transparent_crc(p_727->g_468.sd, "p_727->g_468.sd", print_hash_value);
    transparent_crc(p_727->g_468.se, "p_727->g_468.se", print_hash_value);
    transparent_crc(p_727->g_468.sf, "p_727->g_468.sf", print_hash_value);
    transparent_crc(p_727->g_470.s0, "p_727->g_470.s0", print_hash_value);
    transparent_crc(p_727->g_470.s1, "p_727->g_470.s1", print_hash_value);
    transparent_crc(p_727->g_470.s2, "p_727->g_470.s2", print_hash_value);
    transparent_crc(p_727->g_470.s3, "p_727->g_470.s3", print_hash_value);
    transparent_crc(p_727->g_470.s4, "p_727->g_470.s4", print_hash_value);
    transparent_crc(p_727->g_470.s5, "p_727->g_470.s5", print_hash_value);
    transparent_crc(p_727->g_470.s6, "p_727->g_470.s6", print_hash_value);
    transparent_crc(p_727->g_470.s7, "p_727->g_470.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_727->g_473[i][j][k].f0, "p_727->g_473[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_727->g_483.s0, "p_727->g_483.s0", print_hash_value);
    transparent_crc(p_727->g_483.s1, "p_727->g_483.s1", print_hash_value);
    transparent_crc(p_727->g_483.s2, "p_727->g_483.s2", print_hash_value);
    transparent_crc(p_727->g_483.s3, "p_727->g_483.s3", print_hash_value);
    transparent_crc(p_727->g_483.s4, "p_727->g_483.s4", print_hash_value);
    transparent_crc(p_727->g_483.s5, "p_727->g_483.s5", print_hash_value);
    transparent_crc(p_727->g_483.s6, "p_727->g_483.s6", print_hash_value);
    transparent_crc(p_727->g_483.s7, "p_727->g_483.s7", print_hash_value);
    transparent_crc(p_727->g_483.s8, "p_727->g_483.s8", print_hash_value);
    transparent_crc(p_727->g_483.s9, "p_727->g_483.s9", print_hash_value);
    transparent_crc(p_727->g_483.sa, "p_727->g_483.sa", print_hash_value);
    transparent_crc(p_727->g_483.sb, "p_727->g_483.sb", print_hash_value);
    transparent_crc(p_727->g_483.sc, "p_727->g_483.sc", print_hash_value);
    transparent_crc(p_727->g_483.sd, "p_727->g_483.sd", print_hash_value);
    transparent_crc(p_727->g_483.se, "p_727->g_483.se", print_hash_value);
    transparent_crc(p_727->g_483.sf, "p_727->g_483.sf", print_hash_value);
    transparent_crc(p_727->g_492.f0, "p_727->g_492.f0", print_hash_value);
    transparent_crc(p_727->g_501, "p_727->g_501", print_hash_value);
    transparent_crc(p_727->g_521, "p_727->g_521", print_hash_value);
    transparent_crc(p_727->g_528.s0, "p_727->g_528.s0", print_hash_value);
    transparent_crc(p_727->g_528.s1, "p_727->g_528.s1", print_hash_value);
    transparent_crc(p_727->g_528.s2, "p_727->g_528.s2", print_hash_value);
    transparent_crc(p_727->g_528.s3, "p_727->g_528.s3", print_hash_value);
    transparent_crc(p_727->g_528.s4, "p_727->g_528.s4", print_hash_value);
    transparent_crc(p_727->g_528.s5, "p_727->g_528.s5", print_hash_value);
    transparent_crc(p_727->g_528.s6, "p_727->g_528.s6", print_hash_value);
    transparent_crc(p_727->g_528.s7, "p_727->g_528.s7", print_hash_value);
    transparent_crc(p_727->g_546.x, "p_727->g_546.x", print_hash_value);
    transparent_crc(p_727->g_546.y, "p_727->g_546.y", print_hash_value);
    transparent_crc(p_727->g_546.z, "p_727->g_546.z", print_hash_value);
    transparent_crc(p_727->g_546.w, "p_727->g_546.w", print_hash_value);
    transparent_crc(p_727->g_556.s0, "p_727->g_556.s0", print_hash_value);
    transparent_crc(p_727->g_556.s1, "p_727->g_556.s1", print_hash_value);
    transparent_crc(p_727->g_556.s2, "p_727->g_556.s2", print_hash_value);
    transparent_crc(p_727->g_556.s3, "p_727->g_556.s3", print_hash_value);
    transparent_crc(p_727->g_556.s4, "p_727->g_556.s4", print_hash_value);
    transparent_crc(p_727->g_556.s5, "p_727->g_556.s5", print_hash_value);
    transparent_crc(p_727->g_556.s6, "p_727->g_556.s6", print_hash_value);
    transparent_crc(p_727->g_556.s7, "p_727->g_556.s7", print_hash_value);
    transparent_crc(p_727->g_557.s0, "p_727->g_557.s0", print_hash_value);
    transparent_crc(p_727->g_557.s1, "p_727->g_557.s1", print_hash_value);
    transparent_crc(p_727->g_557.s2, "p_727->g_557.s2", print_hash_value);
    transparent_crc(p_727->g_557.s3, "p_727->g_557.s3", print_hash_value);
    transparent_crc(p_727->g_557.s4, "p_727->g_557.s4", print_hash_value);
    transparent_crc(p_727->g_557.s5, "p_727->g_557.s5", print_hash_value);
    transparent_crc(p_727->g_557.s6, "p_727->g_557.s6", print_hash_value);
    transparent_crc(p_727->g_557.s7, "p_727->g_557.s7", print_hash_value);
    transparent_crc(p_727->g_567, "p_727->g_567", print_hash_value);
    transparent_crc(p_727->g_616.x, "p_727->g_616.x", print_hash_value);
    transparent_crc(p_727->g_616.y, "p_727->g_616.y", print_hash_value);
    transparent_crc(p_727->g_616.z, "p_727->g_616.z", print_hash_value);
    transparent_crc(p_727->g_616.w, "p_727->g_616.w", print_hash_value);
    transparent_crc(p_727->g_634.s0, "p_727->g_634.s0", print_hash_value);
    transparent_crc(p_727->g_634.s1, "p_727->g_634.s1", print_hash_value);
    transparent_crc(p_727->g_634.s2, "p_727->g_634.s2", print_hash_value);
    transparent_crc(p_727->g_634.s3, "p_727->g_634.s3", print_hash_value);
    transparent_crc(p_727->g_634.s4, "p_727->g_634.s4", print_hash_value);
    transparent_crc(p_727->g_634.s5, "p_727->g_634.s5", print_hash_value);
    transparent_crc(p_727->g_634.s6, "p_727->g_634.s6", print_hash_value);
    transparent_crc(p_727->g_634.s7, "p_727->g_634.s7", print_hash_value);
    transparent_crc(p_727->g_663, "p_727->g_663", print_hash_value);
    transparent_crc(p_727->g_665, "p_727->g_665", print_hash_value);
    transparent_crc(p_727->g_708.s0, "p_727->g_708.s0", print_hash_value);
    transparent_crc(p_727->g_708.s1, "p_727->g_708.s1", print_hash_value);
    transparent_crc(p_727->g_708.s2, "p_727->g_708.s2", print_hash_value);
    transparent_crc(p_727->g_708.s3, "p_727->g_708.s3", print_hash_value);
    transparent_crc(p_727->g_708.s4, "p_727->g_708.s4", print_hash_value);
    transparent_crc(p_727->g_708.s5, "p_727->g_708.s5", print_hash_value);
    transparent_crc(p_727->g_708.s6, "p_727->g_708.s6", print_hash_value);
    transparent_crc(p_727->g_708.s7, "p_727->g_708.s7", print_hash_value);
    transparent_crc(p_727->g_708.s8, "p_727->g_708.s8", print_hash_value);
    transparent_crc(p_727->g_708.s9, "p_727->g_708.s9", print_hash_value);
    transparent_crc(p_727->g_708.sa, "p_727->g_708.sa", print_hash_value);
    transparent_crc(p_727->g_708.sb, "p_727->g_708.sb", print_hash_value);
    transparent_crc(p_727->g_708.sc, "p_727->g_708.sc", print_hash_value);
    transparent_crc(p_727->g_708.sd, "p_727->g_708.sd", print_hash_value);
    transparent_crc(p_727->g_708.se, "p_727->g_708.se", print_hash_value);
    transparent_crc(p_727->g_708.sf, "p_727->g_708.sf", print_hash_value);
    transparent_crc(p_727->g_719, "p_727->g_719", print_hash_value);
    transparent_crc(p_727->v_collective, "p_727->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 4; i++)
            transparent_crc(p_727->g_special_values[i + 4 * get_linear_group_id()], "p_727->g_special_values[i + 4 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 4; i++)
            transparent_crc(p_727->l_special_values[i], "p_727->l_special_values[i]", print_hash_value);
    transparent_crc(p_727->l_comm_values[get_linear_local_id()], "p_727->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_727->g_comm_values[get_linear_group_id() * 114 + get_linear_local_id()], "p_727->g_comm_values[get_linear_group_id() * 114 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
