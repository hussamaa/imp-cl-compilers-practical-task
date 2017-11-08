// --atomics 1 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,49,47 -l 3,49,1
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

__constant uint32_t permutations[10][147] = {
{64,82,94,116,44,38,2,55,14,74,119,128,16,32,141,106,91,122,23,101,104,123,9,37,85,18,100,107,42,145,43,120,10,20,35,59,125,87,86,71,0,135,45,8,140,31,79,11,72,15,1,4,3,89,133,131,61,136,13,73,97,54,69,19,7,81,142,24,30,124,109,26,143,95,33,58,88,117,21,93,138,105,57,48,77,41,114,83,112,92,70,6,25,56,5,110,47,121,130,129,90,12,27,52,28,34,126,108,78,50,99,40,127,67,76,118,134,62,53,17,98,46,75,68,60,49,111,80,137,66,84,115,51,29,65,102,96,63,139,36,22,146,103,113,144,132,39}, // permutation 0
{13,28,64,33,90,62,83,15,17,34,36,65,135,127,25,39,111,31,128,138,24,116,131,113,115,44,96,9,117,35,137,80,67,132,145,21,75,84,126,66,10,86,100,101,139,50,76,102,73,52,43,79,46,98,133,19,55,144,37,106,1,110,129,122,42,69,54,120,142,32,56,105,22,68,72,61,123,134,18,107,29,20,93,41,5,58,112,6,109,53,91,27,71,63,125,49,16,82,59,85,130,74,12,95,47,87,124,30,94,119,92,11,104,108,45,89,78,99,23,26,70,2,97,51,114,77,146,40,57,0,88,38,7,118,48,3,143,136,60,8,4,121,140,103,141,81,14}, // permutation 1
{35,105,76,79,54,46,67,29,30,94,56,103,73,83,90,81,93,42,82,130,74,101,16,0,136,143,119,17,97,128,133,77,65,123,95,127,78,26,106,108,57,31,68,20,117,28,1,99,109,12,137,125,22,96,40,112,122,45,132,126,44,50,61,19,92,115,80,8,4,138,142,124,58,145,91,60,111,24,114,3,121,48,52,34,55,36,15,63,62,87,141,86,37,144,25,146,2,11,41,134,70,113,13,84,102,14,32,10,107,88,51,110,23,53,66,38,9,140,43,64,129,21,69,118,6,47,139,49,89,120,5,85,71,98,131,39,7,75,59,72,18,104,27,116,100,135,33}, // permutation 2
{83,68,53,117,71,84,134,46,27,141,56,77,64,130,39,142,97,107,118,85,38,3,25,48,86,10,119,14,87,36,32,45,23,131,111,44,12,128,37,47,7,61,54,22,139,110,127,11,136,13,18,109,81,50,28,72,29,108,143,9,90,16,42,125,100,31,65,138,101,41,112,57,40,35,0,34,24,1,95,135,60,80,129,121,4,55,62,63,96,52,21,76,105,59,140,51,66,98,133,122,146,69,103,93,144,82,137,104,89,58,102,115,92,114,99,73,106,91,120,26,79,17,116,113,33,75,74,8,43,132,30,124,123,78,145,6,20,2,126,67,70,19,5,15,88,94,49}, // permutation 3
{86,80,82,101,106,125,4,120,52,92,25,26,51,10,127,100,102,22,108,7,40,94,27,28,139,31,47,79,37,123,85,134,41,137,138,6,54,65,43,146,77,12,64,122,117,133,76,121,118,9,49,24,112,124,42,144,96,88,136,119,91,63,36,129,109,115,105,103,60,1,111,20,59,8,143,83,68,145,16,58,135,13,93,72,45,78,19,113,50,116,70,130,56,34,18,98,84,75,29,66,21,55,107,15,39,30,17,128,57,81,38,97,104,99,114,33,23,46,126,87,67,90,5,73,32,53,142,2,14,62,61,48,110,3,71,74,95,69,131,44,140,11,35,0,141,89,132}, // permutation 4
{14,16,58,26,111,85,145,52,80,55,47,45,102,143,44,133,117,123,74,109,24,34,124,8,138,99,7,132,39,88,129,115,40,110,64,59,105,139,82,120,84,131,43,22,69,75,128,112,95,134,136,86,38,31,119,135,92,18,87,62,36,125,27,5,66,29,116,21,3,73,68,15,97,13,2,107,101,140,142,0,46,50,122,83,17,144,130,106,89,79,103,32,54,4,77,20,98,51,37,19,60,10,76,65,114,49,41,146,61,63,1,12,23,35,78,48,104,53,118,91,137,72,70,81,127,33,9,126,67,6,90,25,96,42,57,94,28,141,93,56,11,108,121,71,30,113,100}, // permutation 5
{129,94,16,38,110,28,30,115,33,123,137,67,86,95,88,26,32,102,111,49,17,125,43,37,15,75,21,1,76,133,18,34,45,138,4,83,127,56,55,91,59,98,68,8,118,50,112,64,46,117,52,146,139,58,142,9,121,108,70,35,72,61,53,119,25,19,47,82,113,29,7,14,63,145,143,140,54,51,87,0,11,104,84,22,40,13,62,109,97,116,5,71,20,124,79,85,57,77,134,103,120,23,39,144,65,136,100,78,44,93,105,135,73,90,66,81,80,114,106,74,24,92,96,27,141,131,42,107,130,6,31,99,2,41,48,101,89,36,69,126,132,12,60,128,122,10,3}, // permutation 6
{136,104,101,145,98,43,77,84,108,126,4,135,74,21,14,131,90,57,127,10,27,12,125,29,146,121,30,11,117,103,3,142,36,66,0,61,52,76,86,47,65,80,115,102,34,130,137,116,124,144,95,18,41,132,89,24,113,82,139,71,19,7,37,33,13,81,58,42,128,25,83,105,140,40,143,31,68,44,22,119,55,129,72,56,16,64,69,120,59,123,50,15,75,2,73,1,20,122,46,91,99,5,92,32,138,134,49,8,26,85,17,79,111,54,67,107,106,9,109,48,114,23,39,60,93,100,110,88,133,62,38,94,96,141,63,112,45,6,53,70,78,97,28,118,51,87,35}, // permutation 7
{104,133,13,45,17,9,28,23,130,57,25,82,93,38,4,137,105,73,6,85,87,30,92,108,53,10,0,1,63,55,122,142,51,129,18,75,61,64,102,145,2,46,77,124,42,120,56,115,21,106,131,117,90,140,80,27,68,31,14,52,35,29,41,114,67,37,5,88,144,79,132,43,128,116,135,39,110,127,3,126,121,70,44,109,111,69,138,81,24,83,97,100,58,78,76,71,34,107,11,74,62,65,86,54,49,139,16,103,59,36,112,91,141,60,118,19,20,84,99,72,94,32,125,98,89,66,12,143,96,26,47,123,134,15,7,101,50,146,48,136,40,8,113,119,22,95,33}, // permutation 8
{108,59,87,117,118,142,119,37,27,56,46,29,75,146,82,88,14,42,24,92,39,10,128,138,71,97,58,140,53,81,68,5,51,126,101,86,52,34,61,120,67,94,139,100,17,48,19,78,26,22,133,35,93,21,15,76,129,136,130,121,83,135,105,40,3,50,89,102,90,47,63,99,30,114,95,60,79,28,45,98,65,20,25,49,123,112,6,62,110,41,85,43,0,141,7,33,143,11,109,31,44,144,122,13,54,84,106,12,38,111,9,2,23,70,113,145,55,77,131,69,8,96,137,80,107,125,64,57,124,36,116,115,103,72,127,4,74,66,16,132,104,32,91,73,134,18,1} // permutation 9
};

// Seed: 15956768

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_8;
    volatile int32_t g_11[10][1];
    uint8_t g_81;
    uint8_t g_91;
    uint8_t *g_90;
    int16_t g_93;
    VECTOR(int32_t, 4) g_119;
    int64_t *g_122;
    int8_t g_124;
    uint32_t g_127;
    VECTOR(uint64_t, 2) g_139;
    uint64_t g_141;
    int32_t *g_145;
    int32_t **g_144;
    int64_t g_191;
    VECTOR(int32_t, 8) g_210;
    int8_t g_230;
    volatile VECTOR(uint32_t, 4) g_239;
    VECTOR(uint32_t, 4) g_240;
    volatile VECTOR(uint32_t, 16) g_241;
    volatile VECTOR(uint32_t, 16) g_242;
    uint16_t g_278;
    int64_t g_292;
    VECTOR(uint8_t, 4) g_339;
    uint64_t *g_343[8][4];
    volatile VECTOR(uint32_t, 16) g_362;
    volatile VECTOR(uint32_t, 2) g_364;
    VECTOR(uint32_t, 8) g_365;
    uint32_t g_368;
    uint8_t g_369[4];
    int32_t g_380[9];
    volatile VECTOR(uint16_t, 8) g_417;
    volatile VECTOR(uint64_t, 2) g_479;
    VECTOR(int8_t, 8) g_486;
    VECTOR(uint64_t, 4) g_493;
    VECTOR(uint64_t, 8) g_494;
    VECTOR(uint64_t, 8) g_496;
    uint8_t **g_545;
    uint8_t ** volatile * volatile g_544;
    uint8_t ** volatile * volatile *g_543[5];
    VECTOR(uint16_t, 16) g_580;
    int32_t g_605;
    volatile VECTOR(uint8_t, 2) g_617;
    VECTOR(int8_t, 2) g_625;
    volatile VECTOR(int32_t, 4) g_644;
    VECTOR(int32_t, 8) g_649;
    volatile VECTOR(int8_t, 8) g_668;
    uint32_t g_702;
    int32_t * volatile g_703[9][3];
    int32_t * volatile g_704;
    VECTOR(int32_t, 8) g_710;
    volatile VECTOR(int32_t, 4) g_717;
    VECTOR(int32_t, 16) g_718;
    VECTOR(int32_t, 4) g_721;
    VECTOR(uint8_t, 4) g_730;
    VECTOR(uint8_t, 2) g_731;
    uint32_t g_744[1];
    volatile VECTOR(int8_t, 8) g_758;
    uint16_t *g_759;
    uint32_t g_768;
    VECTOR(int32_t, 2) g_769;
    int16_t g_781;
    int16_t *g_780;
    int16_t **g_779;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S0 * p_786);
uint16_t  func_4(uint32_t  p_5, struct S0 * p_786);
int64_t  func_22(int32_t * p_23, int32_t * p_24, int32_t * p_25, struct S0 * p_786);
int32_t * func_26(uint64_t  p_27, uint64_t  p_28, uint64_t  p_29, int32_t * p_30, uint16_t  p_31, struct S0 * p_786);
uint64_t  func_32(int32_t  p_33, int8_t  p_34, struct S0 * p_786);
int32_t * func_54(int64_t  p_55, struct S0 * p_786);
uint32_t  func_56(uint32_t  p_57, int64_t * p_58, struct S0 * p_786);
uint32_t  func_61(int32_t * p_62, int32_t  p_63, int32_t ** p_64, struct S0 * p_786);
int32_t * func_65(int32_t * p_66, int16_t  p_67, int16_t  p_68, uint64_t  p_69, uint32_t  p_70, struct S0 * p_786);
int32_t * func_71(uint32_t  p_72, int32_t * p_73, uint16_t  p_74, int32_t * p_75, struct S0 * p_786);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_786->g_8 p_786->g_11 p_786->g_comm_values p_786->g_81 p_786->g_90 p_786->g_91 p_786->g_119 p_786->g_122 p_786->g_127 p_786->g_139 p_786->g_93 p_786->g_141 p_786->g_144 p_786->g_145 p_786->g_191 p_786->g_210 p_786->g_124 p_786->g_230 p_786->g_479 p_786->g_486 p_786->g_339 p_786->g_493 p_786->g_494 p_786->g_496 p_786->g_369 p_786->g_240 p_786->g_241 p_786->g_543 p_786->g_580 p_786->g_617 p_786->g_365 p_786->g_625 p_786->l_comm_values p_786->g_644 p_786->g_649 p_786->g_292 p_786->g_668 p_786->g_380 p_786->g_544 p_786->g_545 p_786->g_710 p_786->g_717 p_786->g_718 p_786->g_721 p_786->g_730 p_786->g_731 p_786->g_758 p_786->g_362 p_786->g_768 p_786->g_759 p_786->g_278 p_786->g_769 p_786->g_779 p_786->g_781 p_786->g_780
 * writes: p_786->g_8 p_786->g_comm_values p_786->g_81 p_786->g_93 p_786->g_91 p_786->g_124 p_786->g_127 p_786->g_141 p_786->g_119 p_786->g_191 p_786->g_145 p_786->g_90 p_786->g_230 p_786->g_11 p_786->g_144 p_786->g_278 p_786->g_210 p_786->g_240 p_786->g_486 p_786->g_702 p_786->l_comm_values p_786->g_744 p_786->g_759 p_786->g_718 p_786->g_768 p_786->g_781
 */
int16_t  func_1(struct S0 * p_786)
{ /* block id: 4 */
    uint64_t l_6 = 0xCDB8FAAAEB9AE77AL;
    uint16_t *l_778 = &p_786->g_278;
    int32_t *l_782[8][10];
    int16_t l_783[7][5][1] = {{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)},{(-2L)}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
            l_782[i][j] = (void*)0;
    }
    l_783[5][0][0] = (safe_mul_func_uint16_t_u_u(((*l_778) = func_4(l_6, p_786)), (p_786->g_779 != (void*)0)));
    for (p_786->g_781 = (-14); (p_786->g_781 >= (-30)); --p_786->g_781)
    { /* block id: 305 */
        return (**p_786->g_779);
    }
    return (*p_786->g_780);
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_8 p_786->g_11 p_786->g_comm_values p_786->g_81 p_786->g_90 p_786->g_91 p_786->g_119 p_786->g_122 p_786->g_127 p_786->g_139 p_786->g_93 p_786->g_141 p_786->g_144 p_786->g_145 p_786->g_191 p_786->g_210 p_786->g_124 p_786->g_230 p_786->g_479 p_786->g_486 p_786->g_339 p_786->g_493 p_786->g_494 p_786->g_496 p_786->g_369 p_786->g_240 p_786->g_241 p_786->g_543 p_786->g_580 p_786->g_617 p_786->g_365 p_786->g_625 p_786->l_comm_values p_786->g_644 p_786->g_649 p_786->g_292 p_786->g_668 p_786->g_380 p_786->g_544 p_786->g_545 p_786->g_710 p_786->g_717 p_786->g_718 p_786->g_721 p_786->g_730 p_786->g_731 p_786->g_758 p_786->g_362 p_786->g_768 p_786->g_759 p_786->g_278 p_786->g_769
 * writes: p_786->g_8 p_786->g_comm_values p_786->g_81 p_786->g_93 p_786->g_91 p_786->g_124 p_786->g_127 p_786->g_141 p_786->g_119 p_786->g_191 p_786->g_145 p_786->g_90 p_786->g_230 p_786->g_11 p_786->g_144 p_786->g_278 p_786->g_210 p_786->g_240 p_786->g_486 p_786->g_702 p_786->l_comm_values p_786->g_744 p_786->g_759 p_786->g_718 p_786->g_768
 */
uint16_t  func_4(uint32_t  p_5, struct S0 * p_786)
{ /* block id: 5 */
    int32_t *l_7 = &p_786->g_8;
    int32_t *l_9 = &p_786->g_8;
    int32_t *l_10[7] = {&p_786->g_8,&p_786->g_8,&p_786->g_8,&p_786->g_8,&p_786->g_8,&p_786->g_8,&p_786->g_8};
    uint64_t l_12 = 0x894FF5452FA814B1L;
    VECTOR(int32_t, 2) l_17 = (VECTOR(int32_t, 2))(0x730B91EEL, 1L);
    VECTOR(int32_t, 16) l_18 = (VECTOR(int32_t, 16))(0x38CFF26AL, (VECTOR(int32_t, 4))(0x38CFF26AL, (VECTOR(int32_t, 2))(0x38CFF26AL, 9L), 9L), 9L, 0x38CFF26AL, 9L, (VECTOR(int32_t, 2))(0x38CFF26AL, 9L), (VECTOR(int32_t, 2))(0x38CFF26AL, 9L), 0x38CFF26AL, 9L, 0x38CFF26AL, 9L);
    VECTOR(int32_t, 2) l_19 = (VECTOR(int32_t, 2))(0x6DD3ED23L, 0x2D058BBEL);
    uint32_t l_35 = 4294967292UL;
    int16_t l_36 = (-1L);
    int64_t *l_37 = (void*)0;
    int64_t *l_38[4][10][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t l_39[4] = {0L,0L,0L,0L};
    int32_t **l_770 = &l_10[4];
    int i, j, k;
    --l_12;
    for (p_5 = 25; (p_5 >= 40); p_5++)
    { /* block id: 9 */
        (*l_7) ^= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(l_17.yyxx)).wxxxyyyzxywxxxzw, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(l_18.s1e)).xxxx, ((VECTOR(int32_t, 16))(l_19.yxxyxyyxyxyyyyyx)).sa1d2, ((VECTOR(int32_t, 4))(0L, 5L, (-1L), 1L))))).zyzwxywywwzxywxx))).s6;
    }
    (*l_9) = (safe_sub_func_int16_t_s_s(((func_22(l_9, (((*l_7) = (((*l_770) = func_26((*l_7), func_32(((((((p_5 > p_786->g_11[3][0]) != (p_786->g_comm_values[p_786->tid] &= (p_786->g_8 || (l_36 = (l_35 | FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10)))))) <= ((void*)0 == l_38[1][1][4])) < p_786->g_8) > p_786->g_8) == l_39[3]), p_786->g_8, p_786), p_5, l_10[3], p_786->g_339.w, p_786)) == l_9)) , (*l_770)), l_9, p_786) , (*p_786->g_759)) != p_5), p_786->g_580.sb));
    (*l_7) |= p_5;
    return (*p_786->g_759);
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_768
 * writes: p_786->g_768 p_786->g_8
 */
int64_t  func_22(int32_t * p_23, int32_t * p_24, int32_t * p_25, struct S0 * p_786)
{ /* block id: 289 */
    int8_t l_771[9][9] = {{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L},{0x0DL,0x60L,0L,0x60L,0x0DL,0x0DL,0x60L,0L,0x60L}};
    int32_t l_772 = 0x678202CDL;
    uint32_t *l_777 = &p_786->g_127;
    uint32_t **l_776 = &l_777;
    int i, j;
    l_772 ^= l_771[2][4];
    for (p_786->g_768 = 0; (p_786->g_768 == 41); p_786->g_768 = safe_add_func_int8_t_s_s(p_786->g_768, 2))
    { /* block id: 293 */
        VECTOR(uint32_t, 16) l_775 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint32_t, 2))(0UL, 7UL), (VECTOR(uint32_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
        int i;
        (*p_23) = l_775.sf;
    }
    l_776 = (void*)0;
    return l_772;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_144 p_786->g_145 p_786->g_241 p_786->g_8 p_786->g_543 p_786->g_127 p_786->g_496 p_786->g_90 p_786->g_91 p_786->g_81 p_786->g_230 p_786->g_11 p_786->g_580 p_786->g_369 p_786->g_119 p_786->g_240 p_786->g_617 p_786->g_124 p_786->g_365 p_786->g_625 p_786->l_comm_values p_786->g_644 p_786->g_649 p_786->g_292 p_786->g_668 p_786->g_494 p_786->g_380 p_786->g_544 p_786->g_545 p_786->g_710 p_786->g_717 p_786->g_718 p_786->g_721 p_786->g_730 p_786->g_731 p_786->g_479 p_786->g_758 p_786->g_362 p_786->g_768 p_786->g_759 p_786->g_278 p_786->g_769
 * writes: p_786->g_145 p_786->g_8 p_786->g_127 p_786->g_144 p_786->g_93 p_786->g_278 p_786->g_124 p_786->g_210 p_786->g_141 p_786->g_240 p_786->g_230 p_786->g_486 p_786->g_702 p_786->l_comm_values p_786->g_744 p_786->g_759 p_786->g_718 p_786->g_191
 */
int32_t * func_26(uint64_t  p_27, uint64_t  p_28, uint64_t  p_29, int32_t * p_30, uint16_t  p_31, struct S0 * p_786)
{ /* block id: 186 */
    int16_t *l_501 = &p_786->g_93;
    int16_t **l_502 = (void*)0;
    int16_t **l_503 = &l_501;
    uint8_t **l_505 = &p_786->g_90;
    uint8_t ***l_504 = &l_505;
    int16_t *l_506 = &p_786->g_93;
    int32_t l_509 = 0x00CB263CL;
    VECTOR(int32_t, 2) l_510 = (VECTOR(int32_t, 2))(0x6C7007D7L, 0x254CB22AL);
    uint8_t l_535 = 255UL;
    int32_t **l_565 = &p_786->g_145;
    int64_t *l_567 = (void*)0;
    uint16_t l_606 = 5UL;
    VECTOR(int32_t, 2) l_647 = (VECTOR(int32_t, 2))(0x6F5444E7L, 0x7E590033L);
    VECTOR(int32_t, 16) l_648 = (VECTOR(int32_t, 16))(0x5544F2ABL, (VECTOR(int32_t, 4))(0x5544F2ABL, (VECTOR(int32_t, 2))(0x5544F2ABL, (-10L)), (-10L)), (-10L), 0x5544F2ABL, (-10L), (VECTOR(int32_t, 2))(0x5544F2ABL, (-10L)), (VECTOR(int32_t, 2))(0x5544F2ABL, (-10L)), 0x5544F2ABL, (-10L), 0x5544F2ABL, (-10L));
    uint8_t l_709 = 0x06L;
    VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(0x7F309B02L, 0x051E8C12L);
    VECTOR(int32_t, 4) l_722 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
    uint16_t *l_729 = &p_786->g_278;
    uint16_t **l_728[4];
    int i;
    for (i = 0; i < 4; i++)
        l_728[i] = &l_729;
    if ((((*l_503) = l_501) == (((void*)0 == l_504) , l_506)))
    { /* block id: 188 */
        int32_t l_507 = 0x31232260L;
        int32_t *l_508[1];
        int64_t l_511 = 0x0BD923C2ED7B5348L;
        int64_t l_512 = 0x31D7C1D2E2FC2EDEL;
        uint32_t l_513 = 7UL;
        uint8_t *l_518 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_508[i] = &p_786->g_8;
        --l_513;
        (*p_786->g_144) = p_30;
        (*p_786->g_144) = (*p_786->g_144);
    }
    else
    { /* block id: 192 */
        VECTOR(int32_t, 8) l_536 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        int64_t *l_546[8][5][5] = {{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}},{{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0},{&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,(void*)0}}};
        int32_t l_571[6][5][8] = {{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}},{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}},{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}},{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}},{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}},{{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L},{(-6L),0x50A538E9L,0L,0x3BCAC0BDL,0x63C5978EL,0x3BCAC0BDL,0L,0x50A538E9L}}};
        int8_t l_572 = 0x44L;
        uint64_t l_573 = 0x26F9748FE03E5D47L;
        VECTOR(int8_t, 2) l_624 = (VECTOR(int8_t, 2))((-10L), 0L);
        int i, j, k;
        (*p_30) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_536.s6725667657354375)).odd, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))((safe_div_func_uint8_t_u_u((((p_27 != 2UL) != ((((l_536.s0 , ((((p_786->g_241.se ^ ((&p_786->g_292 == (((*p_30) , ((safe_lshift_func_int16_t_s_u(7L, ((safe_div_func_uint16_t_u_u(((void*)0 != p_786->g_543[3]), p_31)) | l_510.y))) && 0x3AC756206D8F1896L)) , l_546[2][4][3])) | p_29)) & 0xD7F4L) && 0x34L) || l_510.x)) ^ (-1L)) , 0x3197902C49AEC3C3L) != l_536.s7)) , p_29), p_27)), 0x485B55EAL, 0x113010B4L, 0x68A24411L, (*p_30), 0L, 0x24DF535EL, (*p_30), 1L, ((VECTOR(int32_t, 4))(0x06FE7499L)), (*p_30), (-8L), 0x6DD76205L)).s7e, (int32_t)(*p_30)))).xxyxyxxy))).lo)).z;
        (*p_786->g_144) = (*p_786->g_144);
        for (p_786->g_127 = 0; (p_786->g_127 == 19); ++p_786->g_127)
        { /* block id: 197 */
            int16_t l_557 = 1L;
            VECTOR(uint32_t, 2) l_558 = (VECTOR(uint32_t, 2))(0xF484DB90L, 5UL);
            int32_t l_566 = 0x165E5A92L;
            int64_t l_568 = 0x54D0D83BC5D9009AL;
            int32_t *l_569 = (void*)0;
            int32_t *l_570[4];
            VECTOR(uint8_t, 2) l_588 = (VECTOR(uint8_t, 2))(0x43L, 0xEBL);
            int32_t l_627 = (-1L);
            VECTOR(int32_t, 16) l_645 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L), (VECTOR(int32_t, 2))((-2L), (-1L)), (VECTOR(int32_t, 2))((-2L), (-1L)), (-2L), (-1L), (-2L), (-1L));
            int i;
            for (i = 0; i < 4; i++)
                l_570[i] = (void*)0;
            (*p_30) = (0x111AB3EAL == (((((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x57CEL, (-7L))).xxxyyxxxyxyxyyxx)).se, ((p_29 | (l_557 & ((VECTOR(uint32_t, 16))(l_558.xyxxxxxxyyxyxyxx)).s6)) ^ (safe_mod_func_int16_t_s_s(((0x43A2L && p_786->g_496.s1) > (18446744073709551613UL & ((((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((l_566 &= ((((p_786->g_144 = l_565) != (void*)0) >= (*p_786->g_90)) != p_28)) , p_786->g_230), p_786->g_11[3][0])) , p_31), p_31)) , &p_786->g_191) != l_567) && p_31))), p_31))))), l_568)), p_29)) & p_786->g_8) == p_28) , p_27) < 1L));
            l_573--;
            (*p_30) = (*p_30);
            if ((*p_30))
            { /* block id: 203 */
                (*p_30) ^= 0x7E5C98CBL;
                (*p_30) = (safe_rshift_func_uint16_t_u_s(0x7062L, 11));
            }
            else
            { /* block id: 206 */
                uint16_t *l_581[2][3][1];
                int32_t l_582 = 0x3069B19DL;
                int32_t l_587 = 0x6A0312D2L;
                int32_t l_600 = 0x50F77E3DL;
                uint32_t l_602 = 4294967295UL;
                VECTOR(int8_t, 16) l_623 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x2CL), 0x2CL), 0x2CL, 0x0CL, 0x2CL, (VECTOR(int8_t, 2))(0x0CL, 0x2CL), (VECTOR(int8_t, 2))(0x0CL, 0x2CL), 0x0CL, 0x2CL, 0x0CL, 0x2CL);
                uint8_t **l_626 = &p_786->g_90;
                VECTOR(int32_t, 4) l_646 = (VECTOR(int32_t, 4))(0x4C9CC943L, (VECTOR(int32_t, 2))(0x4C9CC943L, 0L), 0L);
                uint16_t *l_653[4];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_581[i][j][k] = &p_786->g_278;
                    }
                }
                for (i = 0; i < 4; i++)
                    l_653[i] = (void*)0;
                (*p_30) ^= (safe_add_func_int32_t_s_s((&p_786->g_141 == ((l_582 &= ((VECTOR(uint16_t, 16))(p_786->g_580.sbe9ef1e536dfe159)).s6) , &p_27)), ((0xDFL < (safe_rshift_func_uint8_t_u_u((p_786->g_369[2] & p_786->g_119.y), 1))) != ((safe_mul_func_uint16_t_u_u((((!(p_786->g_93 = l_587)) <= 0x7133L) <= ((((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(l_588.xxyyyxyy)).odd, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(1UL, 6UL, 1UL, 7UL))))))).x , l_587) & (safe_mul_func_int8_t_s_s(((p_786->g_278 = 1UL) >= 0x1C97L), p_28)))), p_786->g_240.y)) , 0UL))));
                if ((*p_30))
                    continue;
                for (l_535 = 0; (l_535 <= 28); l_535 = safe_add_func_uint32_t_u_u(l_535, 5))
                { /* block id: 214 */
                    uint64_t l_593 = 7UL;
                    int32_t l_596 = 1L;
                    int32_t l_597 = 1L;
                    int32_t l_598 = 0x4300712CL;
                    int32_t l_599 = 4L;
                    int32_t l_601[10] = {0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L,0x14F29EF3L};
                    int i;
                    l_593++;
                    l_602--;
                    l_606--;
                    return p_30;
                }
                if ((safe_div_func_int64_t_s_s((l_546[2][4][3] != &p_786->g_191), (-8L))))
                { /* block id: 220 */
                    uint8_t ****l_611 = (void*)0;
                    (*p_30) = (l_611 != (void*)0);
                    for (l_535 = 0; (l_535 >= 48); l_535 = safe_add_func_int16_t_s_s(l_535, 6))
                    { /* block id: 224 */
                        return p_30;
                    }
                }
                else
                { /* block id: 227 */
                    int16_t l_614 = 2L;
                    uint8_t *l_622 = &p_786->g_369[2];
                    uint64_t *l_628 = &p_786->g_141;
                    uint64_t *l_629 = (void*)0;
                    uint64_t *l_630 = (void*)0;
                    uint64_t *l_631 = (void*)0;
                    uint64_t *l_632 = (void*)0;
                    uint64_t *l_633 = (void*)0;
                    uint64_t *l_634[1];
                    VECTOR(int32_t, 4) l_635 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x49DDAD25L), 0x49DDAD25L);
                    uint16_t **l_652 = &l_581[1][1][0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_634[i] = (void*)0;
                    if (l_614)
                        break;
                    l_582 ^= (l_635.y |= ((((l_536.s5 = ((*l_628) = (((*p_30) = (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(p_786->g_617.yxxx)).z, (p_786->g_124 &= ((*p_30) , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, (-10L))).xxyxxyyxyyyxyyxx)).s84))).yxyx)).x))))) <= ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(p_786->g_365.s3, p_29)) < ((p_786->g_210.s6 = l_602) & (((*l_505) != l_622) ^ ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(l_623.sd3)).yyyyyyxyyyxxxyxy, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(l_624.yyxy)).wyyzxzzz, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_786->g_625.yy)), (l_626 != (void*)0), p_31, l_627, ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 2))(0x23L)), 0x5DL, p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 147))], l_614, ((VECTOR(int8_t, 2))(1L)), 0L, (-5L))).lo, ((VECTOR(int8_t, 8))((-10L)))))).s3254264732203200, ((VECTOR(int8_t, 16))((-5L)))))).lo, ((VECTOR(int8_t, 8))(0x1BL)))))))).s0726731040171067))))).s8))), 0x03L)) && 0L)))) , p_29) != p_786->g_625.y) , (*p_30)));
                    (*p_30) ^= (p_30 != (((p_31 || (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((((((safe_mod_func_uint64_t_u_u(p_31, 1UL)) == ((p_27 , (safe_div_func_uint32_t_u_u(((p_29 >= (((((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(p_786->g_644.wwwywwzzzxzzzxzx)).s1b, ((VECTOR(int32_t, 2))(l_645.s0a))))).xyyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_646.zxxyxwwzyzxxzyxy)).sda4a, ((VECTOR(int32_t, 4))(l_647.xyyx))))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_648.s5dbe)).x, (-2L), (-7L), 0x0A87F399L)).even))).yyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_786->g_649.s64424130)).s75)).xxyx))).lo)).xyyx))).odd, (int64_t)(((safe_sub_func_int16_t_s_s(((((*l_652) = &p_786->g_278) == (((**l_503) = l_646.w) , l_653[3])) , p_29), p_29)) | 0x0012L) == p_31), (int64_t)l_624.y))).even ^ p_29) || l_614) < 0x67C4D9C0L)) < p_28), p_786->g_292))) , p_29)) , p_27) && 0xB134L) < 0L) || GROUP_DIVERGE(2, 1)), 3)) <= p_786->g_365.s5), 0x27L))) , p_786->g_649.s4) , (void*)0));
                }
            }
        }
        for (l_573 = 0; (l_573 != 23); ++l_573)
        { /* block id: 244 */
            int32_t *l_658 = (void*)0;
            (*p_30) = (safe_add_func_int64_t_s_s(l_571[5][1][1], 0x319CD8A6B86CFA49L));
            return l_658;
        }
    }
    for (p_29 = 0; (p_29 != 11); p_29 = safe_add_func_uint32_t_u_u(p_29, 5))
    { /* block id: 251 */
        uint32_t l_661 = 0UL;
        int32_t l_698 = 0x0B4CED76L;
        int16_t l_707 = (-4L);
        int32_t *l_708 = (void*)0;
        int64_t *l_711[8] = {&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292,&p_786->g_292};
        int8_t *l_714 = &p_786->g_124;
        VECTOR(int32_t, 16) l_716 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x18F71748L), 0x18F71748L), 0x18F71748L, (-1L), 0x18F71748L, (VECTOR(int32_t, 2))((-1L), 0x18F71748L), (VECTOR(int32_t, 2))((-1L), 0x18F71748L), (-1L), 0x18F71748L, (-1L), 0x18F71748L);
        VECTOR(int32_t, 2) l_719 = (VECTOR(int32_t, 2))(0x2D7392FCL, (-10L));
        VECTOR(int32_t, 8) l_720 = (VECTOR(int32_t, 8))(0x7D7DB9FFL, (VECTOR(int32_t, 4))(0x7D7DB9FFL, (VECTOR(int32_t, 2))(0x7D7DB9FFL, 0x142D74A6L), 0x142D74A6L), 0x142D74A6L, 0x7D7DB9FFL, 0x142D74A6L);
        int32_t *l_723 = (void*)0;
        int32_t *l_724[8][1];
        uint8_t l_725 = 0x00L;
        VECTOR(int8_t, 16) l_738 = (VECTOR(int8_t, 16))(0x08L, (VECTOR(int8_t, 4))(0x08L, (VECTOR(int8_t, 2))(0x08L, 0x00L), 0x00L), 0x00L, 0x08L, 0x00L, (VECTOR(int8_t, 2))(0x08L, 0x00L), (VECTOR(int8_t, 2))(0x08L, 0x00L), 0x08L, 0x00L, 0x08L, 0x00L);
        uint32_t *l_743 = &p_786->g_744[0];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_724[i][j] = (void*)0;
        }
        if ((*p_30))
        { /* block id: 252 */
            int16_t l_671 = 1L;
            uint32_t *l_696 = (void*)0;
            uint32_t *l_697 = &l_661;
            int16_t l_699 = (-3L);
            int8_t *l_700 = (void*)0;
            int8_t *l_701 = &p_786->g_230;
            int32_t *l_705 = (void*)0;
            int32_t *l_706[1];
            int i;
            for (i = 0; i < 1; i++)
                l_706[i] = (void*)0;
            --l_661;
            l_707 = (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(0x45CFE991L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0UL, (((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 2))(p_786->g_668.s21)).yyxyyxyyxyxyyxyx, (int8_t)((p_786->g_702 = (((*p_30) = 0x076167B0L) < ((safe_lshift_func_uint16_t_u_u(l_671, ((safe_sub_func_uint8_t_u_u((p_786->g_494.s3 >= (safe_add_func_int32_t_s_s(l_671, (p_786->g_127 > (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x93L, 0x37L)).hi, (safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 2)))))))), (((~((p_786->g_486.s2 = ((0x51E4L | (safe_rshift_func_int8_t_s_u(((*l_701) &= (safe_mul_func_uint8_t_u_u((((!l_671) | (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((*l_697) = (p_786->g_240.x = ((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((~p_786->g_380[3]) >= (((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_671, l_661)), p_27)) || 0x4258F0FCL) ^ 18446744073709551610UL) > 0xBDB7L) && p_31)) || 0xB9L), 0xB0L)), p_28)) && p_786->g_380[1]))), l_698)), l_699))) & (***p_786->g_544)), l_698))), 4))) ^ p_29)) == l_698)) <= l_671) == 0x63L))) == 0x4456AFB5L))) == p_31))) >= p_31), (int8_t)p_786->g_494.s1))).s8 | l_671), 0xB5CE08E3L, FAKE_DIVERGE(p_786->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 2))(0x3328F841L)), 4294967290UL, 1UL)).s74)), 4294967295UL)).z, p_786->g_365.s0)), p_31));
            (*l_565) = l_708;
            (*p_30) = l_647.y;
        }
        else
        { /* block id: 263 */
            (*p_30) &= 0x1EC496A0L;
        }
        l_709 |= (!(-6L));
        l_725 &= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_786->g_710.s3157352623036023)).even)).s64)).yxyx)).wyxyxwxwyxwzwzxx, (int32_t)((((p_786->g_93 = (0x670AD774L & ((l_698 |= 0x15A742DE0FA30E9CL) != 18446744073709551615UL))) | p_786->g_241.s1) | 0UL) , (safe_lshift_func_int16_t_s_u((((*l_714) = p_786->g_11[1][0]) , 0L), 5))), (int32_t)(*p_30)))).hi, ((VECTOR(int32_t, 2))(l_715.yy)).yyyyyxyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_716.s50262640be447a7e)).sec6e, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(p_786->g_717.wzyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_786->g_718.s8a7dc41b)).s2236157741541354)).sf474))).xwzxzyyy, ((VECTOR(int32_t, 8))(l_719.yxyyxyyy))))).odd, ((VECTOR(int32_t, 2))(0L, 0x55C83099L)).xxxy))).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))((-6L), ((VECTOR(int32_t, 2))(l_720.s54)), (-9L))).odd, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_786->g_721.xzxxwyzx)).hi)).hi, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-10L), 0x0A035176L)).xxxyxxyy)).s1253372557507711, ((VECTOR(int32_t, 16))(l_722.zyzyzyxzxwwwywyw))))).s5, 0L, (*p_30), ((VECTOR(int32_t, 2))((-1L))), 0L, 1L)).s01, (int32_t)l_661)))))))))))))))).yyyyyyyy, ((VECTOR(int32_t, 8))((-1L)))))).odd))))), ((VECTOR(int32_t, 4))(0x559F3122L)), 0x436BA243L, 3L, 0x6293CCB3L, (-4L), (*p_30), ((VECTOR(int32_t, 2))(0x5E2DDDC1L)), 0x4416A798L)).s75)).yyyyyyyy))).s15, ((VECTOR(int32_t, 2))(0x663497A4L)), ((VECTOR(int32_t, 2))(0x0C8EB3C1L))))).yyyxxyxx, ((VECTOR(int32_t, 8))(0x31867231L))))).s1;
        if ((safe_div_func_int32_t_s_s((((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xAD42A5D4L, 0x62861A68L)).yyyy)).z , l_728[0]) != (void*)0) | p_27) , &p_30) != &p_786->g_704), (GROUP_DIVERGE(0, 1) , (0x590BA106F2B8631BL | (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))((-1L), (p_786->l_comm_values[(safe_mod_func_uint32_t_u_u(p_786->tid, 147))] = ((p_28 , ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(251UL, ((VECTOR(uint8_t, 2))(p_786->g_730.wy)), 0UL, ((VECTOR(uint8_t, 2))(p_786->g_731.yy)).lo, 0xBFL, 0xE5L, 0x0BL)).s2525642067266273)).s5) && ((VECTOR(uint8_t, 2))(0x1AL, 0UL)).lo)), (((*l_743) = ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_786->local_0_offset, get_local_id(0), 10), (safe_mul_func_int16_t_s_s(0x2407L, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_738.safec)).x, (((VECTOR(uint64_t, 4))((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((-4L), 0x8ECE24A907B4BCBEL)), p_29)), 0x1D08EFD9F1DE2E31L, 0x09E4AC68B1EA9369L, 0UL)).z < p_786->g_479.y))))))) ^ p_786->g_240.w)) , 1L), (-1L), (-2L), (-4L), 1L, (-6L))).s12)).odd >= 0x360F968F263972CBL))))))
        { /* block id: 273 */
            VECTOR(int8_t, 2) l_757 = (VECTOR(int8_t, 2))(1L, 0x0AL);
            int i;
            (*p_786->g_144) = (*l_565);
            p_786->g_718.sa ^= (safe_sub_func_int32_t_s_s(((*p_30) = (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((!((safe_rshift_func_uint8_t_u_s((((&p_786->g_702 != (void*)0) | (((VECTOR(int8_t, 16))(0x14L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_757.xxxyxyxx)).even)), ((VECTOR(int8_t, 8))(p_786->g_758.s06556644)), 5L, 0x31L, (-6L))).s9 && ((p_786->g_759 = &p_786->g_278) != (FAKE_DIVERGE(p_786->global_0_offset, get_global_id(0), 10) , &p_786->g_278)))) && (safe_add_func_int64_t_s_s(1L, (((*l_729) = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((l_509 & (p_28 > 1L)) == p_786->g_362.s6), p_27)) >= p_786->g_119.x), 7)), p_786->g_768))) == p_29)))), p_29)) >= 4UL)), l_757.y)), 0x77L)), 12)) , (**p_786->g_545)) , (*p_786->g_759)), p_786->g_710.s3))), FAKE_DIVERGE(p_786->local_2_offset, get_local_id(2), 10)));
        }
        else
        { /* block id: 279 */
            (*p_30) = l_647.y;
            (*p_786->g_144) = func_54(((void*)0 != &p_27), p_786);
            l_722.z &= ((**p_786->g_144) = ((VECTOR(int32_t, 16))(p_786->g_769.xyyxyyxxxxyyxyyx)).s3);
        }
    }
    return (*p_786->g_144);
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_11 p_786->g_81 p_786->g_90 p_786->g_91 p_786->g_comm_values p_786->g_8 p_786->g_119 p_786->g_122 p_786->g_127 p_786->g_139 p_786->g_93 p_786->g_141 p_786->g_144 p_786->g_145 p_786->g_191 p_786->g_210 p_786->g_124 p_786->g_230 p_786->g_479 p_786->g_486 p_786->g_339 p_786->g_493 p_786->g_494 p_786->g_496 p_786->g_369 p_786->g_240
 * writes: p_786->g_81 p_786->g_93 p_786->g_91 p_786->g_124 p_786->g_127 p_786->g_141 p_786->g_119 p_786->g_191 p_786->g_145 p_786->g_90 p_786->g_230 p_786->g_11
 */
uint64_t  func_32(int32_t  p_33, int8_t  p_34, struct S0 * p_786)
{ /* block id: 14 */
    volatile int32_t *l_41 = &p_786->g_11[1][0];
    volatile int32_t **l_40 = &l_41;
    int32_t l_42[3][1];
    int32_t l_131 = 0x13C069BDL;
    int32_t l_206 = 0x7AFCBD41L;
    uint8_t *l_224 = &p_786->g_81;
    VECTOR(uint32_t, 4) l_246 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
    int64_t l_276 = 4L;
    VECTOR(int8_t, 8) l_397 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x27L), 0x27L), 0x27L, (-1L), 0x27L);
    VECTOR(int16_t, 8) l_410 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x420FL), 0x420FL), 0x420FL, (-2L), 0x420FL);
    uint64_t *l_477 = (void*)0;
    int64_t **l_490 = (void*)0;
    VECTOR(uint64_t, 2) l_495 = (VECTOR(uint64_t, 2))(0x31DCA00ADE46BE63L, 0x488147B73748A15FL);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_42[i][j] = 1L;
    }
    (*l_40) = &p_786->g_11[3][0];
    if (p_786->g_11[7][0])
    { /* block id: 16 */
        int32_t *l_43 = &l_42[1][0];
        int32_t *l_44 = &l_42[0][0];
        int32_t *l_45 = &l_42[2][0];
        int32_t *l_46 = &l_42[1][0];
        int32_t *l_47 = &l_42[2][0];
        int32_t *l_48 = &l_42[0][0];
        int32_t *l_49 = (void*)0;
        int32_t *l_50[2];
        uint32_t l_51 = 4294967290UL;
        uint8_t *l_80 = &p_786->g_81;
        int16_t *l_92 = &p_786->g_93;
        VECTOR(uint8_t, 16) l_197 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 252UL), 252UL), 252UL, 1UL, 252UL, (VECTOR(uint8_t, 2))(1UL, 252UL), (VECTOR(uint8_t, 2))(1UL, 252UL), 1UL, 252UL, 1UL, 252UL);
        int i;
        for (i = 0; i < 2; i++)
            l_50[i] = &l_42[1][0];
        --l_51;
        (*p_786->g_144) = func_54((p_786->g_11[9][0] == func_56((safe_sub_func_uint32_t_u_u(func_61(func_65(func_71((p_34 < (safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_42[1][0], 0UL)), (((((!((VECTOR(int64_t, 2))((-3L), 0x711EE9290BC8DDD0L)).lo) != (FAKE_DIVERGE(p_786->local_2_offset, get_local_id(2), 10) && (0UL <= p_34))) > 0x2574B05BL) == ((*l_80) ^= 1UL)) | ((*l_92) = (safe_mul_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 == p_786->g_90), p_786->g_91)), 0x03CC42B59B2D93A8L)), 0xF742L)) >= p_786->g_comm_values[p_786->tid]) <= (*l_48)) <= l_42[1][0]), 249UL))))))), l_45, p_786->g_91, &p_786->g_8, p_786), p_786->g_119.x, p_34, l_131, l_131, p_786), p_33, p_786->g_144, p_786), (-1L))), p_786->g_122, p_786)), p_786);
        (*p_786->g_144) = func_65((*p_786->g_144), (p_786->g_191 != 0UL), ((safe_div_func_int32_t_s_s((-7L), 0x258F5251L)) && ((*l_48) = (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_197.sda2d)).w, (safe_add_func_uint8_t_u_u((*l_41), (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(p_34, (!(safe_lshift_func_uint8_t_u_s(l_206, 1))))) >= 0x47291DF9L) != l_42[1][0]), l_42[1][0])))))))), p_786->g_91, p_786->g_139.y, p_786);
    }
    else
    { /* block id: 65 */
        VECTOR(int16_t, 4) l_209 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0L), 0L);
        uint8_t *l_220 = &p_786->g_81;
        uint8_t **l_221 = (void*)0;
        uint8_t *l_222[4] = {&p_786->g_91,&p_786->g_91,&p_786->g_91,&p_786->g_91};
        uint8_t **l_223 = &l_222[2];
        uint8_t **l_225 = &p_786->g_90;
        int16_t *l_226 = &p_786->g_93;
        int8_t *l_227 = (void*)0;
        int8_t *l_228 = &p_786->g_124;
        int8_t *l_229 = &p_786->g_230;
        VECTOR(int32_t, 8) l_251 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 6L), 6L), 6L, 7L, 6L);
        VECTOR(uint32_t, 2) l_363 = (VECTOR(uint32_t, 2))(0xD074B489L, 0x4EB9D772L);
        VECTOR(int16_t, 16) l_408 = (VECTOR(int16_t, 16))(0x53ECL, (VECTOR(int16_t, 4))(0x53ECL, (VECTOR(int16_t, 2))(0x53ECL, 0x5A57L), 0x5A57L), 0x5A57L, 0x53ECL, 0x5A57L, (VECTOR(int16_t, 2))(0x53ECL, 0x5A57L), (VECTOR(int16_t, 2))(0x53ECL, 0x5A57L), 0x53ECL, 0x5A57L, 0x53ECL, 0x5A57L);
        int16_t l_429 = 0x7961L;
        VECTOR(int16_t, 16) l_455 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        int i;
        (**l_40) = ((+p_33) || (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_209.wxzw)).x, (((VECTOR(int32_t, 4))(p_786->g_210.s2102)).z == (safe_lshift_func_int8_t_s_s(((*l_229) ^= ((*l_228) |= (safe_mul_func_uint16_t_u_u(((*l_41) , (((l_209.x <= (((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(p_34)), (safe_lshift_func_uint16_t_u_s(((l_220 = l_220) != ((*l_223) = l_222[3])), (!((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(0x66A2L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x3A00L, ((VECTOR(int16_t, 2))(0x31D9L, 0x201EL)), 0x5BD9L)))).even)))).lo, (-1L), ((*l_226) = (((*l_41) , l_224) != ((*l_225) = l_224))), 1L, p_786->g_139.x, 0x1F6FL, (-3L))).s05, ((VECTOR(int16_t, 2))(0x2A28L)), ((VECTOR(int16_t, 2))(0x19B2L))))).hi))))) != 0x57FA70DFL) != 1UL)) < l_131) > l_209.z)), 0x1D72L)))), l_42[0][0]))))));
        for (l_131 = 0; (l_131 != 27); l_131 = safe_add_func_int8_t_s_s(l_131, 9))
        { /* block id: 75 */
            return l_209.y;
        }
        (*l_41) = (*p_786->g_145);
        for (p_786->g_191 = 0; (p_786->g_191 == (-5)); --p_786->g_191)
        { /* block id: 81 */
            int32_t *l_245 = &l_42[1][0];
            uint16_t l_299 = 0xC5F1L;
            uint32_t l_315 = 0x0426B1E9L;
            uint8_t ***l_321[8][6] = {{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225},{&l_223,(void*)0,(void*)0,&l_223,&l_221,&l_225}};
            VECTOR(int32_t, 8) l_345 = (VECTOR(int32_t, 8))(0x02F1A0E5L, (VECTOR(int32_t, 4))(0x02F1A0E5L, (VECTOR(int32_t, 2))(0x02F1A0E5L, 1L), 1L), 1L, 0x02F1A0E5L, 1L);
            VECTOR(int16_t, 16) l_403 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            int32_t *l_478 = &l_131;
            int i, j;
            (1 + 1);
        }
    }
    (**l_40) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_786->g_479.yxxxxxyx)).s42)).xyxyyyxx)).hi)).w ^ ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(8L, (((VECTOR(int8_t, 2))(p_786->g_486.s50)).even != (safe_add_func_int8_t_s_s(l_246.x, p_34))))), (safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((l_490 == &p_786->g_122) > (p_786->g_339.z || (safe_sub_func_uint32_t_u_u(((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x24524DB425F3536FL, ((VECTOR(uint64_t, 2))(0x1486F05A0C139598L, 0x51043381CA4A4E66L)), ((VECTOR(uint64_t, 2))(p_786->g_493.ww)), ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 8))(p_786->g_494.s06452064)).s60, ((VECTOR(uint64_t, 8))(l_495.yxyyxyxy)).s66, ((VECTOR(uint64_t, 2))(p_786->g_496.s20))))), 18446744073709551615UL)))).s4 != l_42[1][0]) , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0x0245L, 13)), ((!p_786->g_496.s0) | p_33)))), 1L)))), ((VECTOR(int8_t, 4))(0x73L)), p_786->g_comm_values[p_786->tid], 7L, (-8L))).s40)), ((VECTOR(int8_t, 8))(0L)), p_786->g_369[2], 0L, l_410.s0, p_786->g_240.x, 0L, 0x0EL)).even, ((VECTOR(int8_t, 8))(0x7DL))))).s63, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0L))))).odd)))), p_786->g_369[2])) , 0L));
    return (**l_40);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_786->g_191
 */
int32_t * func_54(int64_t  p_55, struct S0 * p_786)
{ /* block id: 58 */
    int64_t *l_190[1];
    int32_t *l_192 = &p_786->g_8;
    int i;
    for (i = 0; i < 1; i++)
        l_190[i] = &p_786->g_191;
    l_192 = ((p_786->g_191 = p_55) , l_192);
    return l_192;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_141
 * writes:
 */
uint32_t  func_56(uint32_t  p_57, int64_t * p_58, struct S0 * p_786)
{ /* block id: 43 */
    if ((atomic_inc(&p_786->l_atomic_input[0]) == 5))
    { /* block id: 45 */
        VECTOR(int32_t, 16) l_164 = (VECTOR(int32_t, 16))(0x3FBD1E1DL, (VECTOR(int32_t, 4))(0x3FBD1E1DL, (VECTOR(int32_t, 2))(0x3FBD1E1DL, 0x43416D66L), 0x43416D66L), 0x43416D66L, 0x3FBD1E1DL, 0x43416D66L, (VECTOR(int32_t, 2))(0x3FBD1E1DL, 0x43416D66L), (VECTOR(int32_t, 2))(0x3FBD1E1DL, 0x43416D66L), 0x3FBD1E1DL, 0x43416D66L, 0x3FBD1E1DL, 0x43416D66L);
        int16_t l_165 = 0L;
        uint8_t l_166 = 7UL;
        VECTOR(int32_t, 16) l_167 = (VECTOR(int32_t, 16))(0x14BA5551L, (VECTOR(int32_t, 4))(0x14BA5551L, (VECTOR(int32_t, 2))(0x14BA5551L, 0x2A5C8871L), 0x2A5C8871L), 0x2A5C8871L, 0x14BA5551L, 0x2A5C8871L, (VECTOR(int32_t, 2))(0x14BA5551L, 0x2A5C8871L), (VECTOR(int32_t, 2))(0x14BA5551L, 0x2A5C8871L), 0x14BA5551L, 0x2A5C8871L, 0x14BA5551L, 0x2A5C8871L);
        VECTOR(int32_t, 4) l_168 = (VECTOR(int32_t, 4))(0x68144AFDL, (VECTOR(int32_t, 2))(0x68144AFDL, (-3L)), (-3L));
        int32_t l_169 = 0x1D257C1AL;
        VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))(0x26F3B492L, (VECTOR(int32_t, 2))(0x26F3B492L, 1L), 1L);
        VECTOR(int32_t, 16) l_171 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int32_t, 2))((-1L), (-2L)), (VECTOR(int32_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
        VECTOR(int32_t, 16) l_172 = (VECTOR(int32_t, 16))(0x38309D0DL, (VECTOR(int32_t, 4))(0x38309D0DL, (VECTOR(int32_t, 2))(0x38309D0DL, 0x1E785CDDL), 0x1E785CDDL), 0x1E785CDDL, 0x38309D0DL, 0x1E785CDDL, (VECTOR(int32_t, 2))(0x38309D0DL, 0x1E785CDDL), (VECTOR(int32_t, 2))(0x38309D0DL, 0x1E785CDDL), 0x38309D0DL, 0x1E785CDDL, 0x38309D0DL, 0x1E785CDDL);
        VECTOR(int32_t, 16) l_173 = (VECTOR(int32_t, 16))(0x659004A7L, (VECTOR(int32_t, 4))(0x659004A7L, (VECTOR(int32_t, 2))(0x659004A7L, 1L), 1L), 1L, 0x659004A7L, 1L, (VECTOR(int32_t, 2))(0x659004A7L, 1L), (VECTOR(int32_t, 2))(0x659004A7L, 1L), 0x659004A7L, 1L, 0x659004A7L, 1L);
        int32_t l_174 = 0x693B77E5L;
        VECTOR(int64_t, 8) l_175 = (VECTOR(int64_t, 8))(0x3B6ED5BF0DDE07FDL, (VECTOR(int64_t, 4))(0x3B6ED5BF0DDE07FDL, (VECTOR(int64_t, 2))(0x3B6ED5BF0DDE07FDL, 0x267530FD64B41A18L), 0x267530FD64B41A18L), 0x267530FD64B41A18L, 0x3B6ED5BF0DDE07FDL, 0x267530FD64B41A18L);
        uint32_t l_176 = 0xDCC07344L;
        int64_t l_177 = 0x6629D0FCF4C61EB7L;
        int32_t l_178 = 1L;
        uint32_t l_179 = 0x4F0F1C35L;
        uint32_t l_182 = 4294967294UL;
        uint64_t l_183 = 0x35EEA618A1754566L;
        int32_t l_184 = 0L;
        VECTOR(int32_t, 8) l_185 = (VECTOR(int32_t, 8))(0x4BB74991L, (VECTOR(int32_t, 4))(0x4BB74991L, (VECTOR(int32_t, 2))(0x4BB74991L, 0x48C8C459L), 0x48C8C459L), 0x48C8C459L, 0x4BB74991L, 0x48C8C459L);
        uint8_t l_186 = 0UL;
        uint16_t l_187 = 0UL;
        uint32_t l_188[3];
        uint32_t l_189 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_188[i] = 1UL;
        l_174 = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_164.s1313447b)).s4647623302317700, ((VECTOR(int32_t, 16))(l_165, l_166, 0x1EBDC434L, 0x14248C0BL, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_167.se699fb92)).s2172374326056046)).sd414))), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x7C28A9D4L, 0x6A3E293BL)).yyyyyxyy, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_168.xwxx)).xxywxwwy, (int32_t)l_169))).s50)), ((VECTOR(int32_t, 8))(l_170.yzyyzwyz)).s03, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_171.s9b0c5a6c)))).s41))).yxyxxxyx)))))))).s8d3f, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_172.s8e)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_173.s7732)))).lo))).yxxxyyxx)).s70)).yyyx))).x;
        l_189 &= (l_188[2] = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_175.s64)).xyxx)).w , (((l_177 |= (l_176 &= 0x390B3FAD78BCD146L)) , (l_178 , (((--l_179) , 0x0DD309EBL) , l_182))) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x11F7702CL)).yxyy)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_186 &= (l_183 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, l_184, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(5L, 0L)), 0x109606A0L, 1L)), 0x62287291L, (-1L))).s2776770124225312)).s58c6, ((VECTOR(int32_t, 2))(0x6247B451L, 0x00FDE94FL)).yyyx, ((VECTOR(int32_t, 16))(l_185.s2305433065406541)).sbebc))).lo)).hi)), ((l_187 &= FAKE_DIVERGE(p_786->local_1_offset, get_local_id(1), 10)) , (-1L)), 0x44E7A1F0L, 9L)), 0x5E7019B2L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x43F378C7L, (-1L), 3L, 0L)).hi)), 0x37C3847FL)), ((VECTOR(int32_t, 8))(0x2D80EDC8L))))).even))))).w)));
        unsigned int result = 0;
        result += l_164.sf;
        result += l_164.se;
        result += l_164.sd;
        result += l_164.sc;
        result += l_164.sb;
        result += l_164.sa;
        result += l_164.s9;
        result += l_164.s8;
        result += l_164.s7;
        result += l_164.s6;
        result += l_164.s5;
        result += l_164.s4;
        result += l_164.s3;
        result += l_164.s2;
        result += l_164.s1;
        result += l_164.s0;
        result += l_165;
        result += l_166;
        result += l_167.sf;
        result += l_167.se;
        result += l_167.sd;
        result += l_167.sc;
        result += l_167.sb;
        result += l_167.sa;
        result += l_167.s9;
        result += l_167.s8;
        result += l_167.s7;
        result += l_167.s6;
        result += l_167.s5;
        result += l_167.s4;
        result += l_167.s3;
        result += l_167.s2;
        result += l_167.s1;
        result += l_167.s0;
        result += l_168.w;
        result += l_168.z;
        result += l_168.y;
        result += l_168.x;
        result += l_169;
        result += l_170.w;
        result += l_170.z;
        result += l_170.y;
        result += l_170.x;
        result += l_171.sf;
        result += l_171.se;
        result += l_171.sd;
        result += l_171.sc;
        result += l_171.sb;
        result += l_171.sa;
        result += l_171.s9;
        result += l_171.s8;
        result += l_171.s7;
        result += l_171.s6;
        result += l_171.s5;
        result += l_171.s4;
        result += l_171.s3;
        result += l_171.s2;
        result += l_171.s1;
        result += l_171.s0;
        result += l_172.sf;
        result += l_172.se;
        result += l_172.sd;
        result += l_172.sc;
        result += l_172.sb;
        result += l_172.sa;
        result += l_172.s9;
        result += l_172.s8;
        result += l_172.s7;
        result += l_172.s6;
        result += l_172.s5;
        result += l_172.s4;
        result += l_172.s3;
        result += l_172.s2;
        result += l_172.s1;
        result += l_172.s0;
        result += l_173.sf;
        result += l_173.se;
        result += l_173.sd;
        result += l_173.sc;
        result += l_173.sb;
        result += l_173.sa;
        result += l_173.s9;
        result += l_173.s8;
        result += l_173.s7;
        result += l_173.s6;
        result += l_173.s5;
        result += l_173.s4;
        result += l_173.s3;
        result += l_173.s2;
        result += l_173.s1;
        result += l_173.s0;
        result += l_174;
        result += l_175.s7;
        result += l_175.s6;
        result += l_175.s5;
        result += l_175.s4;
        result += l_175.s3;
        result += l_175.s2;
        result += l_175.s1;
        result += l_175.s0;
        result += l_176;
        result += l_177;
        result += l_178;
        result += l_179;
        result += l_182;
        result += l_183;
        result += l_184;
        result += l_185.s7;
        result += l_185.s6;
        result += l_185.s5;
        result += l_185.s4;
        result += l_185.s3;
        result += l_185.s2;
        result += l_185.s1;
        result += l_185.s0;
        result += l_186;
        result += l_187;
        int l_188_i0;
        for (l_188_i0 = 0; l_188_i0 < 3; l_188_i0++) {
            result += l_188[l_188_i0];
        }
        result += l_189;
        atomic_add(&p_786->l_special_values[0], result);
    }
    else
    { /* block id: 54 */
        (1 + 1);
    }
    return p_786->g_141;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_144 p_786->g_145 p_786->g_8 p_786->g_119
 * writes: p_786->g_119
 */
uint32_t  func_61(int32_t * p_62, int32_t  p_63, int32_t ** p_64, struct S0 * p_786)
{ /* block id: 33 */
    int32_t *l_146 = (void*)0;
    int32_t *l_147 = (void*)0;
    int32_t *l_148 = (void*)0;
    int32_t l_149 = (-1L);
    int32_t *l_150 = (void*)0;
    int32_t *l_151 = (void*)0;
    int32_t *l_152 = &l_149;
    int32_t l_153 = (-7L);
    int32_t *l_154 = (void*)0;
    int32_t *l_155[7] = {&l_153,&p_786->g_8,&l_153,&l_153,&p_786->g_8,&l_153,&l_153};
    int64_t l_156 = 1L;
    int16_t l_157 = 0x1DC2L;
    uint32_t l_158 = 4294967286UL;
    int i;
    l_158++;
    if (((*l_152) = (-1L)))
    { /* block id: 36 */
        uint16_t l_161 = 2UL;
        p_786->g_119.y &= (**p_786->g_144);
        l_161--;
    }
    else
    { /* block id: 39 */
        return p_63;
    }
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_127 p_786->g_8 p_786->g_139 p_786->g_93 p_786->g_119 p_786->g_91 p_786->g_141
 * writes: p_786->g_141
 */
int32_t * func_65(int32_t * p_66, int16_t  p_67, int16_t  p_68, uint64_t  p_69, uint32_t  p_70, struct S0 * p_786)
{ /* block id: 28 */
    uint8_t l_134 = 0xFFL;
    uint64_t *l_140[6] = {(void*)0,&p_786->g_141,(void*)0,(void*)0,&p_786->g_141,(void*)0};
    int32_t *l_143[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_142[4][10][6] = {{{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]}},{{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]}},{{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]}},{{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]},{&l_143[2][4],&l_143[8][4],(void*)0,&l_143[2][4],(void*)0,&l_143[2][4]}}};
    int i, j, k;
    p_66 = ((safe_mul_func_uint8_t_u_u((l_134 && (p_786->g_127 <= (p_786->g_141 |= ((((((!(safe_add_func_int8_t_s_s((((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0x4C97AD9788A37CDCL, ((safe_lshift_func_uint16_t_u_s(p_786->g_8, 14)) < ((0x3981B1BC71CFC68CL ^ (!((VECTOR(uint64_t, 8))(p_786->g_139.yxxyyyxx)).s1)) , (0x799D2B88L || (~((*p_66) = p_786->g_93))))), ((p_786->g_119.x <= (p_786->g_93 | 0x4D170816L)) , p_786->g_93), 18446744073709551613UL, 1UL, 1UL, GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 4))(0x82580673BC7C59C4L)), l_134, 7UL, ((VECTOR(uint64_t, 2))(0xE2500355CF6CD2DBL)), 0x021B652CE760C5D1L)).sec)), (uint64_t)p_786->g_8, (uint64_t)FAKE_DIVERGE(p_786->group_1_offset, get_group_id(1), 10)))).lo >= p_69), p_786->g_91))) < l_134) , 18446744073709551609UL) & l_134) , l_134) || p_68)))), FAKE_DIVERGE(p_786->group_1_offset, get_group_id(1), 10))) , (void*)0);
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_786->g_90 p_786->g_91 p_786->g_8 p_786->g_119 p_786->g_122
 * writes: p_786->g_91 p_786->g_93 p_786->g_124 p_786->g_127
 */
int32_t * func_71(uint32_t  p_72, int32_t * p_73, uint16_t  p_74, int32_t * p_75, struct S0 * p_786)
{ /* block id: 20 */
    uint8_t l_114 = 4UL;
    int16_t *l_120 = &p_786->g_93;
    int64_t *l_121 = (void*)0;
    int8_t *l_123 = &p_786->g_124;
    int32_t *l_125 = (void*)0;
    uint32_t *l_126[10][9][2] = {{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}},{{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127},{&p_786->g_127,&p_786->g_127}}};
    uint64_t l_128 = 0xEB179A86176E3802L;
    int32_t l_129[6] = {0x788430C3L,0L,0x788430C3L,0x788430C3L,0L,0x788430C3L};
    VECTOR(int32_t, 16) l_130 = (VECTOR(int32_t, 16))(0x6BF440EAL, (VECTOR(int32_t, 4))(0x6BF440EAL, (VECTOR(int32_t, 2))(0x6BF440EAL, 0x64377C88L), 0x64377C88L), 0x64377C88L, 0x6BF440EAL, 0x64377C88L, (VECTOR(int32_t, 2))(0x6BF440EAL, 0x64377C88L), (VECTOR(int32_t, 2))(0x6BF440EAL, 0x64377C88L), 0x6BF440EAL, 0x64377C88L, 0x6BF440EAL, 0x64377C88L);
    int i, j, k;
    l_129[1] |= ((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((((p_786->g_127 = ((FAKE_DIVERGE(p_786->group_2_offset, get_group_id(2), 10) & (((safe_mul_func_uint8_t_u_u(((*p_786->g_90)--), (p_786->g_8 != ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(((*l_123) = (safe_rshift_func_uint16_t_u_s((p_786->g_8 <= ((safe_mul_func_int16_t_s_s((GROUP_DIVERGE(2, 1) && l_114), (p_74 ^ (l_114 >= (&p_786->g_81 != &l_114))))) | ((safe_mul_func_int16_t_s_s(((*l_120) = (FAKE_DIVERGE(p_786->group_0_offset, get_group_id(0), 10) || ((VECTOR(int32_t, 8))(p_786->g_119.xwyyyxxy)).s6)), (l_121 != p_786->g_122))) <= p_72))), 9))), l_114)), p_786->g_8)) == 5UL)))) , l_125) != p_73)) , 0xCC493F27L)) != p_74) ^ p_74) >= p_74), 0x6313L, 0x5562L, ((VECTOR(uint16_t, 4))(65535UL)), 65535UL)))), ((VECTOR(uint16_t, 8))(0x7435L))))).s7, 0x26FFL)) , p_72) == l_128) > 0x3C76L), 0x8A67L)), 0x0FB1967CBA6E04B3L)), FAKE_DIVERGE(p_786->global_2_offset, get_global_id(2), 10))) != 255UL);
    (*p_73) = ((VECTOR(int32_t, 8))(l_130.s31fd11e1)).s0;
    return p_73;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[147];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 147; i++)
            l_comm_values[i] = 1;
    struct S0 c_787;
    struct S0* p_786 = &c_787;
    struct S0 c_788 = {
        0x44555950L, // p_786->g_8
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_786->g_11
        1UL, // p_786->g_81
        0UL, // p_786->g_91
        &p_786->g_91, // p_786->g_90
        (-9L), // p_786->g_93
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5D00D045L), 0x5D00D045L), // p_786->g_119
        (void*)0, // p_786->g_122
        (-8L), // p_786->g_124
        4294967293UL, // p_786->g_127
        (VECTOR(uint64_t, 2))(5UL, 0xD2C2FFDF52C73AE8L), // p_786->g_139
        0xD67A6C11A0814C53L, // p_786->g_141
        &p_786->g_8, // p_786->g_145
        &p_786->g_145, // p_786->g_144
        0x14D8A2F051051B63L, // p_786->g_191
        (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1F7142EEL), 0x1F7142EEL), 0x1F7142EEL, (-6L), 0x1F7142EEL), // p_786->g_210
        (-5L), // p_786->g_230
        (VECTOR(uint32_t, 4))(0xA4E9850EL, (VECTOR(uint32_t, 2))(0xA4E9850EL, 4294967290UL), 4294967290UL), // p_786->g_239
        (VECTOR(uint32_t, 4))(0xD59C3A3EL, (VECTOR(uint32_t, 2))(0xD59C3A3EL, 0xFF1F7D47L), 0xFF1F7D47L), // p_786->g_240
        (VECTOR(uint32_t, 16))(0x05599F8BL, (VECTOR(uint32_t, 4))(0x05599F8BL, (VECTOR(uint32_t, 2))(0x05599F8BL, 0x5130F8F4L), 0x5130F8F4L), 0x5130F8F4L, 0x05599F8BL, 0x5130F8F4L, (VECTOR(uint32_t, 2))(0x05599F8BL, 0x5130F8F4L), (VECTOR(uint32_t, 2))(0x05599F8BL, 0x5130F8F4L), 0x05599F8BL, 0x5130F8F4L, 0x05599F8BL, 0x5130F8F4L), // p_786->g_241
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xD956FEEAL), 0xD956FEEAL), 0xD956FEEAL, 1UL, 0xD956FEEAL, (VECTOR(uint32_t, 2))(1UL, 0xD956FEEAL), (VECTOR(uint32_t, 2))(1UL, 0xD956FEEAL), 1UL, 0xD956FEEAL, 1UL, 0xD956FEEAL), // p_786->g_242
        65527UL, // p_786->g_278
        (-3L), // p_786->g_292
        (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 255UL), 255UL), // p_786->g_339
        {{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141},{&p_786->g_141,(void*)0,&p_786->g_141,&p_786->g_141}}, // p_786->g_343
        (VECTOR(uint32_t, 16))(0x269ACA42L, (VECTOR(uint32_t, 4))(0x269ACA42L, (VECTOR(uint32_t, 2))(0x269ACA42L, 0x841DA2F4L), 0x841DA2F4L), 0x841DA2F4L, 0x269ACA42L, 0x841DA2F4L, (VECTOR(uint32_t, 2))(0x269ACA42L, 0x841DA2F4L), (VECTOR(uint32_t, 2))(0x269ACA42L, 0x841DA2F4L), 0x269ACA42L, 0x841DA2F4L, 0x269ACA42L, 0x841DA2F4L), // p_786->g_362
        (VECTOR(uint32_t, 2))(0x5961EB2EL, 0UL), // p_786->g_364
        (VECTOR(uint32_t, 8))(0x22C98856L, (VECTOR(uint32_t, 4))(0x22C98856L, (VECTOR(uint32_t, 2))(0x22C98856L, 0x57A34201L), 0x57A34201L), 0x57A34201L, 0x22C98856L, 0x57A34201L), // p_786->g_365
        4294967295UL, // p_786->g_368
        {3UL,3UL,3UL,3UL}, // p_786->g_369
        {0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L,0x48058D35L}, // p_786->g_380
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL), // p_786->g_417
        (VECTOR(uint64_t, 2))(0x94D2E51C9F50EDBBL, 18446744073709551613UL), // p_786->g_479
        (VECTOR(int8_t, 8))(0x63L, (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, 0x3AL), 0x3AL), 0x3AL, 0x63L, 0x3AL), // p_786->g_486
        (VECTOR(uint64_t, 4))(0xE56A34E9C08F3AE7L, (VECTOR(uint64_t, 2))(0xE56A34E9C08F3AE7L, 18446744073709551610UL), 18446744073709551610UL), // p_786->g_493
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 1UL, 18446744073709551606UL), // p_786->g_494
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF3FDD34F56F5195AL), 0xF3FDD34F56F5195AL), 0xF3FDD34F56F5195AL, 1UL, 0xF3FDD34F56F5195AL), // p_786->g_496
        &p_786->g_90, // p_786->g_545
        &p_786->g_545, // p_786->g_544
        {&p_786->g_544,&p_786->g_544,&p_786->g_544,&p_786->g_544,&p_786->g_544}, // p_786->g_543
        (VECTOR(uint16_t, 16))(0xF098L, (VECTOR(uint16_t, 4))(0xF098L, (VECTOR(uint16_t, 2))(0xF098L, 65535UL), 65535UL), 65535UL, 0xF098L, 65535UL, (VECTOR(uint16_t, 2))(0xF098L, 65535UL), (VECTOR(uint16_t, 2))(0xF098L, 65535UL), 0xF098L, 65535UL, 0xF098L, 65535UL), // p_786->g_580
        5L, // p_786->g_605
        (VECTOR(uint8_t, 2))(6UL, 255UL), // p_786->g_617
        (VECTOR(int8_t, 2))(0x48L, 0L), // p_786->g_625
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), // p_786->g_644
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L)), // p_786->g_649
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_786->g_668
        0xDD0F253FL, // p_786->g_702
        {{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605},{&p_786->g_605,&p_786->g_605,&p_786->g_605}}, // p_786->g_703
        (void*)0, // p_786->g_704
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L)), // p_786->g_710
        (VECTOR(int32_t, 4))(0x4C3C14B5L, (VECTOR(int32_t, 2))(0x4C3C14B5L, (-5L)), (-5L)), // p_786->g_717
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int32_t, 2))((-1L), (-6L)), (VECTOR(int32_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L)), // p_786->g_718
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_786->g_721
        (VECTOR(uint8_t, 4))(0x45L, (VECTOR(uint8_t, 2))(0x45L, 0UL), 0UL), // p_786->g_730
        (VECTOR(uint8_t, 2))(0x05L, 255UL), // p_786->g_731
        {0xB3E9E51BL}, // p_786->g_744
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 4L), 4L), 4L, 1L, 4L), // p_786->g_758
        &p_786->g_278, // p_786->g_759
        0x8963A32CL, // p_786->g_768
        (VECTOR(int32_t, 2))(0L, 0x55B72F2DL), // p_786->g_769
        (-1L), // p_786->g_781
        &p_786->g_781, // p_786->g_780
        &p_786->g_780, // p_786->g_779
        0, // p_786->v_collective
        sequence_input[get_global_id(0)], // p_786->global_0_offset
        sequence_input[get_global_id(1)], // p_786->global_1_offset
        sequence_input[get_global_id(2)], // p_786->global_2_offset
        sequence_input[get_local_id(0)], // p_786->local_0_offset
        sequence_input[get_local_id(1)], // p_786->local_1_offset
        sequence_input[get_local_id(2)], // p_786->local_2_offset
        sequence_input[get_group_id(0)], // p_786->group_0_offset
        sequence_input[get_group_id(1)], // p_786->group_1_offset
        sequence_input[get_group_id(2)], // p_786->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 147)), permutations[0][get_linear_local_id()])), // p_786->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_787 = c_788;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_786);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_786->g_8, "p_786->g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_786->g_11[i][j], "p_786->g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_786->g_81, "p_786->g_81", print_hash_value);
    transparent_crc(p_786->g_91, "p_786->g_91", print_hash_value);
    transparent_crc(p_786->g_93, "p_786->g_93", print_hash_value);
    transparent_crc(p_786->g_119.x, "p_786->g_119.x", print_hash_value);
    transparent_crc(p_786->g_119.y, "p_786->g_119.y", print_hash_value);
    transparent_crc(p_786->g_119.z, "p_786->g_119.z", print_hash_value);
    transparent_crc(p_786->g_119.w, "p_786->g_119.w", print_hash_value);
    transparent_crc(p_786->g_124, "p_786->g_124", print_hash_value);
    transparent_crc(p_786->g_127, "p_786->g_127", print_hash_value);
    transparent_crc(p_786->g_139.x, "p_786->g_139.x", print_hash_value);
    transparent_crc(p_786->g_139.y, "p_786->g_139.y", print_hash_value);
    transparent_crc(p_786->g_141, "p_786->g_141", print_hash_value);
    transparent_crc(p_786->g_191, "p_786->g_191", print_hash_value);
    transparent_crc(p_786->g_210.s0, "p_786->g_210.s0", print_hash_value);
    transparent_crc(p_786->g_210.s1, "p_786->g_210.s1", print_hash_value);
    transparent_crc(p_786->g_210.s2, "p_786->g_210.s2", print_hash_value);
    transparent_crc(p_786->g_210.s3, "p_786->g_210.s3", print_hash_value);
    transparent_crc(p_786->g_210.s4, "p_786->g_210.s4", print_hash_value);
    transparent_crc(p_786->g_210.s5, "p_786->g_210.s5", print_hash_value);
    transparent_crc(p_786->g_210.s6, "p_786->g_210.s6", print_hash_value);
    transparent_crc(p_786->g_210.s7, "p_786->g_210.s7", print_hash_value);
    transparent_crc(p_786->g_230, "p_786->g_230", print_hash_value);
    transparent_crc(p_786->g_239.x, "p_786->g_239.x", print_hash_value);
    transparent_crc(p_786->g_239.y, "p_786->g_239.y", print_hash_value);
    transparent_crc(p_786->g_239.z, "p_786->g_239.z", print_hash_value);
    transparent_crc(p_786->g_239.w, "p_786->g_239.w", print_hash_value);
    transparent_crc(p_786->g_240.x, "p_786->g_240.x", print_hash_value);
    transparent_crc(p_786->g_240.y, "p_786->g_240.y", print_hash_value);
    transparent_crc(p_786->g_240.z, "p_786->g_240.z", print_hash_value);
    transparent_crc(p_786->g_240.w, "p_786->g_240.w", print_hash_value);
    transparent_crc(p_786->g_241.s0, "p_786->g_241.s0", print_hash_value);
    transparent_crc(p_786->g_241.s1, "p_786->g_241.s1", print_hash_value);
    transparent_crc(p_786->g_241.s2, "p_786->g_241.s2", print_hash_value);
    transparent_crc(p_786->g_241.s3, "p_786->g_241.s3", print_hash_value);
    transparent_crc(p_786->g_241.s4, "p_786->g_241.s4", print_hash_value);
    transparent_crc(p_786->g_241.s5, "p_786->g_241.s5", print_hash_value);
    transparent_crc(p_786->g_241.s6, "p_786->g_241.s6", print_hash_value);
    transparent_crc(p_786->g_241.s7, "p_786->g_241.s7", print_hash_value);
    transparent_crc(p_786->g_241.s8, "p_786->g_241.s8", print_hash_value);
    transparent_crc(p_786->g_241.s9, "p_786->g_241.s9", print_hash_value);
    transparent_crc(p_786->g_241.sa, "p_786->g_241.sa", print_hash_value);
    transparent_crc(p_786->g_241.sb, "p_786->g_241.sb", print_hash_value);
    transparent_crc(p_786->g_241.sc, "p_786->g_241.sc", print_hash_value);
    transparent_crc(p_786->g_241.sd, "p_786->g_241.sd", print_hash_value);
    transparent_crc(p_786->g_241.se, "p_786->g_241.se", print_hash_value);
    transparent_crc(p_786->g_241.sf, "p_786->g_241.sf", print_hash_value);
    transparent_crc(p_786->g_242.s0, "p_786->g_242.s0", print_hash_value);
    transparent_crc(p_786->g_242.s1, "p_786->g_242.s1", print_hash_value);
    transparent_crc(p_786->g_242.s2, "p_786->g_242.s2", print_hash_value);
    transparent_crc(p_786->g_242.s3, "p_786->g_242.s3", print_hash_value);
    transparent_crc(p_786->g_242.s4, "p_786->g_242.s4", print_hash_value);
    transparent_crc(p_786->g_242.s5, "p_786->g_242.s5", print_hash_value);
    transparent_crc(p_786->g_242.s6, "p_786->g_242.s6", print_hash_value);
    transparent_crc(p_786->g_242.s7, "p_786->g_242.s7", print_hash_value);
    transparent_crc(p_786->g_242.s8, "p_786->g_242.s8", print_hash_value);
    transparent_crc(p_786->g_242.s9, "p_786->g_242.s9", print_hash_value);
    transparent_crc(p_786->g_242.sa, "p_786->g_242.sa", print_hash_value);
    transparent_crc(p_786->g_242.sb, "p_786->g_242.sb", print_hash_value);
    transparent_crc(p_786->g_242.sc, "p_786->g_242.sc", print_hash_value);
    transparent_crc(p_786->g_242.sd, "p_786->g_242.sd", print_hash_value);
    transparent_crc(p_786->g_242.se, "p_786->g_242.se", print_hash_value);
    transparent_crc(p_786->g_242.sf, "p_786->g_242.sf", print_hash_value);
    transparent_crc(p_786->g_278, "p_786->g_278", print_hash_value);
    transparent_crc(p_786->g_292, "p_786->g_292", print_hash_value);
    transparent_crc(p_786->g_339.x, "p_786->g_339.x", print_hash_value);
    transparent_crc(p_786->g_339.y, "p_786->g_339.y", print_hash_value);
    transparent_crc(p_786->g_339.z, "p_786->g_339.z", print_hash_value);
    transparent_crc(p_786->g_339.w, "p_786->g_339.w", print_hash_value);
    transparent_crc(p_786->g_362.s0, "p_786->g_362.s0", print_hash_value);
    transparent_crc(p_786->g_362.s1, "p_786->g_362.s1", print_hash_value);
    transparent_crc(p_786->g_362.s2, "p_786->g_362.s2", print_hash_value);
    transparent_crc(p_786->g_362.s3, "p_786->g_362.s3", print_hash_value);
    transparent_crc(p_786->g_362.s4, "p_786->g_362.s4", print_hash_value);
    transparent_crc(p_786->g_362.s5, "p_786->g_362.s5", print_hash_value);
    transparent_crc(p_786->g_362.s6, "p_786->g_362.s6", print_hash_value);
    transparent_crc(p_786->g_362.s7, "p_786->g_362.s7", print_hash_value);
    transparent_crc(p_786->g_362.s8, "p_786->g_362.s8", print_hash_value);
    transparent_crc(p_786->g_362.s9, "p_786->g_362.s9", print_hash_value);
    transparent_crc(p_786->g_362.sa, "p_786->g_362.sa", print_hash_value);
    transparent_crc(p_786->g_362.sb, "p_786->g_362.sb", print_hash_value);
    transparent_crc(p_786->g_362.sc, "p_786->g_362.sc", print_hash_value);
    transparent_crc(p_786->g_362.sd, "p_786->g_362.sd", print_hash_value);
    transparent_crc(p_786->g_362.se, "p_786->g_362.se", print_hash_value);
    transparent_crc(p_786->g_362.sf, "p_786->g_362.sf", print_hash_value);
    transparent_crc(p_786->g_364.x, "p_786->g_364.x", print_hash_value);
    transparent_crc(p_786->g_364.y, "p_786->g_364.y", print_hash_value);
    transparent_crc(p_786->g_365.s0, "p_786->g_365.s0", print_hash_value);
    transparent_crc(p_786->g_365.s1, "p_786->g_365.s1", print_hash_value);
    transparent_crc(p_786->g_365.s2, "p_786->g_365.s2", print_hash_value);
    transparent_crc(p_786->g_365.s3, "p_786->g_365.s3", print_hash_value);
    transparent_crc(p_786->g_365.s4, "p_786->g_365.s4", print_hash_value);
    transparent_crc(p_786->g_365.s5, "p_786->g_365.s5", print_hash_value);
    transparent_crc(p_786->g_365.s6, "p_786->g_365.s6", print_hash_value);
    transparent_crc(p_786->g_365.s7, "p_786->g_365.s7", print_hash_value);
    transparent_crc(p_786->g_368, "p_786->g_368", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_786->g_369[i], "p_786->g_369[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_786->g_380[i], "p_786->g_380[i]", print_hash_value);

    }
    transparent_crc(p_786->g_417.s0, "p_786->g_417.s0", print_hash_value);
    transparent_crc(p_786->g_417.s1, "p_786->g_417.s1", print_hash_value);
    transparent_crc(p_786->g_417.s2, "p_786->g_417.s2", print_hash_value);
    transparent_crc(p_786->g_417.s3, "p_786->g_417.s3", print_hash_value);
    transparent_crc(p_786->g_417.s4, "p_786->g_417.s4", print_hash_value);
    transparent_crc(p_786->g_417.s5, "p_786->g_417.s5", print_hash_value);
    transparent_crc(p_786->g_417.s6, "p_786->g_417.s6", print_hash_value);
    transparent_crc(p_786->g_417.s7, "p_786->g_417.s7", print_hash_value);
    transparent_crc(p_786->g_479.x, "p_786->g_479.x", print_hash_value);
    transparent_crc(p_786->g_479.y, "p_786->g_479.y", print_hash_value);
    transparent_crc(p_786->g_486.s0, "p_786->g_486.s0", print_hash_value);
    transparent_crc(p_786->g_486.s1, "p_786->g_486.s1", print_hash_value);
    transparent_crc(p_786->g_486.s2, "p_786->g_486.s2", print_hash_value);
    transparent_crc(p_786->g_486.s3, "p_786->g_486.s3", print_hash_value);
    transparent_crc(p_786->g_486.s4, "p_786->g_486.s4", print_hash_value);
    transparent_crc(p_786->g_486.s5, "p_786->g_486.s5", print_hash_value);
    transparent_crc(p_786->g_486.s6, "p_786->g_486.s6", print_hash_value);
    transparent_crc(p_786->g_486.s7, "p_786->g_486.s7", print_hash_value);
    transparent_crc(p_786->g_493.x, "p_786->g_493.x", print_hash_value);
    transparent_crc(p_786->g_493.y, "p_786->g_493.y", print_hash_value);
    transparent_crc(p_786->g_493.z, "p_786->g_493.z", print_hash_value);
    transparent_crc(p_786->g_493.w, "p_786->g_493.w", print_hash_value);
    transparent_crc(p_786->g_494.s0, "p_786->g_494.s0", print_hash_value);
    transparent_crc(p_786->g_494.s1, "p_786->g_494.s1", print_hash_value);
    transparent_crc(p_786->g_494.s2, "p_786->g_494.s2", print_hash_value);
    transparent_crc(p_786->g_494.s3, "p_786->g_494.s3", print_hash_value);
    transparent_crc(p_786->g_494.s4, "p_786->g_494.s4", print_hash_value);
    transparent_crc(p_786->g_494.s5, "p_786->g_494.s5", print_hash_value);
    transparent_crc(p_786->g_494.s6, "p_786->g_494.s6", print_hash_value);
    transparent_crc(p_786->g_494.s7, "p_786->g_494.s7", print_hash_value);
    transparent_crc(p_786->g_496.s0, "p_786->g_496.s0", print_hash_value);
    transparent_crc(p_786->g_496.s1, "p_786->g_496.s1", print_hash_value);
    transparent_crc(p_786->g_496.s2, "p_786->g_496.s2", print_hash_value);
    transparent_crc(p_786->g_496.s3, "p_786->g_496.s3", print_hash_value);
    transparent_crc(p_786->g_496.s4, "p_786->g_496.s4", print_hash_value);
    transparent_crc(p_786->g_496.s5, "p_786->g_496.s5", print_hash_value);
    transparent_crc(p_786->g_496.s6, "p_786->g_496.s6", print_hash_value);
    transparent_crc(p_786->g_496.s7, "p_786->g_496.s7", print_hash_value);
    transparent_crc(p_786->g_580.s0, "p_786->g_580.s0", print_hash_value);
    transparent_crc(p_786->g_580.s1, "p_786->g_580.s1", print_hash_value);
    transparent_crc(p_786->g_580.s2, "p_786->g_580.s2", print_hash_value);
    transparent_crc(p_786->g_580.s3, "p_786->g_580.s3", print_hash_value);
    transparent_crc(p_786->g_580.s4, "p_786->g_580.s4", print_hash_value);
    transparent_crc(p_786->g_580.s5, "p_786->g_580.s5", print_hash_value);
    transparent_crc(p_786->g_580.s6, "p_786->g_580.s6", print_hash_value);
    transparent_crc(p_786->g_580.s7, "p_786->g_580.s7", print_hash_value);
    transparent_crc(p_786->g_580.s8, "p_786->g_580.s8", print_hash_value);
    transparent_crc(p_786->g_580.s9, "p_786->g_580.s9", print_hash_value);
    transparent_crc(p_786->g_580.sa, "p_786->g_580.sa", print_hash_value);
    transparent_crc(p_786->g_580.sb, "p_786->g_580.sb", print_hash_value);
    transparent_crc(p_786->g_580.sc, "p_786->g_580.sc", print_hash_value);
    transparent_crc(p_786->g_580.sd, "p_786->g_580.sd", print_hash_value);
    transparent_crc(p_786->g_580.se, "p_786->g_580.se", print_hash_value);
    transparent_crc(p_786->g_580.sf, "p_786->g_580.sf", print_hash_value);
    transparent_crc(p_786->g_605, "p_786->g_605", print_hash_value);
    transparent_crc(p_786->g_617.x, "p_786->g_617.x", print_hash_value);
    transparent_crc(p_786->g_617.y, "p_786->g_617.y", print_hash_value);
    transparent_crc(p_786->g_625.x, "p_786->g_625.x", print_hash_value);
    transparent_crc(p_786->g_625.y, "p_786->g_625.y", print_hash_value);
    transparent_crc(p_786->g_644.x, "p_786->g_644.x", print_hash_value);
    transparent_crc(p_786->g_644.y, "p_786->g_644.y", print_hash_value);
    transparent_crc(p_786->g_644.z, "p_786->g_644.z", print_hash_value);
    transparent_crc(p_786->g_644.w, "p_786->g_644.w", print_hash_value);
    transparent_crc(p_786->g_649.s0, "p_786->g_649.s0", print_hash_value);
    transparent_crc(p_786->g_649.s1, "p_786->g_649.s1", print_hash_value);
    transparent_crc(p_786->g_649.s2, "p_786->g_649.s2", print_hash_value);
    transparent_crc(p_786->g_649.s3, "p_786->g_649.s3", print_hash_value);
    transparent_crc(p_786->g_649.s4, "p_786->g_649.s4", print_hash_value);
    transparent_crc(p_786->g_649.s5, "p_786->g_649.s5", print_hash_value);
    transparent_crc(p_786->g_649.s6, "p_786->g_649.s6", print_hash_value);
    transparent_crc(p_786->g_649.s7, "p_786->g_649.s7", print_hash_value);
    transparent_crc(p_786->g_668.s0, "p_786->g_668.s0", print_hash_value);
    transparent_crc(p_786->g_668.s1, "p_786->g_668.s1", print_hash_value);
    transparent_crc(p_786->g_668.s2, "p_786->g_668.s2", print_hash_value);
    transparent_crc(p_786->g_668.s3, "p_786->g_668.s3", print_hash_value);
    transparent_crc(p_786->g_668.s4, "p_786->g_668.s4", print_hash_value);
    transparent_crc(p_786->g_668.s5, "p_786->g_668.s5", print_hash_value);
    transparent_crc(p_786->g_668.s6, "p_786->g_668.s6", print_hash_value);
    transparent_crc(p_786->g_668.s7, "p_786->g_668.s7", print_hash_value);
    transparent_crc(p_786->g_702, "p_786->g_702", print_hash_value);
    transparent_crc(p_786->g_710.s0, "p_786->g_710.s0", print_hash_value);
    transparent_crc(p_786->g_710.s1, "p_786->g_710.s1", print_hash_value);
    transparent_crc(p_786->g_710.s2, "p_786->g_710.s2", print_hash_value);
    transparent_crc(p_786->g_710.s3, "p_786->g_710.s3", print_hash_value);
    transparent_crc(p_786->g_710.s4, "p_786->g_710.s4", print_hash_value);
    transparent_crc(p_786->g_710.s5, "p_786->g_710.s5", print_hash_value);
    transparent_crc(p_786->g_710.s6, "p_786->g_710.s6", print_hash_value);
    transparent_crc(p_786->g_710.s7, "p_786->g_710.s7", print_hash_value);
    transparent_crc(p_786->g_717.x, "p_786->g_717.x", print_hash_value);
    transparent_crc(p_786->g_717.y, "p_786->g_717.y", print_hash_value);
    transparent_crc(p_786->g_717.z, "p_786->g_717.z", print_hash_value);
    transparent_crc(p_786->g_717.w, "p_786->g_717.w", print_hash_value);
    transparent_crc(p_786->g_718.s0, "p_786->g_718.s0", print_hash_value);
    transparent_crc(p_786->g_718.s1, "p_786->g_718.s1", print_hash_value);
    transparent_crc(p_786->g_718.s2, "p_786->g_718.s2", print_hash_value);
    transparent_crc(p_786->g_718.s3, "p_786->g_718.s3", print_hash_value);
    transparent_crc(p_786->g_718.s4, "p_786->g_718.s4", print_hash_value);
    transparent_crc(p_786->g_718.s5, "p_786->g_718.s5", print_hash_value);
    transparent_crc(p_786->g_718.s6, "p_786->g_718.s6", print_hash_value);
    transparent_crc(p_786->g_718.s7, "p_786->g_718.s7", print_hash_value);
    transparent_crc(p_786->g_718.s8, "p_786->g_718.s8", print_hash_value);
    transparent_crc(p_786->g_718.s9, "p_786->g_718.s9", print_hash_value);
    transparent_crc(p_786->g_718.sa, "p_786->g_718.sa", print_hash_value);
    transparent_crc(p_786->g_718.sb, "p_786->g_718.sb", print_hash_value);
    transparent_crc(p_786->g_718.sc, "p_786->g_718.sc", print_hash_value);
    transparent_crc(p_786->g_718.sd, "p_786->g_718.sd", print_hash_value);
    transparent_crc(p_786->g_718.se, "p_786->g_718.se", print_hash_value);
    transparent_crc(p_786->g_718.sf, "p_786->g_718.sf", print_hash_value);
    transparent_crc(p_786->g_721.x, "p_786->g_721.x", print_hash_value);
    transparent_crc(p_786->g_721.y, "p_786->g_721.y", print_hash_value);
    transparent_crc(p_786->g_721.z, "p_786->g_721.z", print_hash_value);
    transparent_crc(p_786->g_721.w, "p_786->g_721.w", print_hash_value);
    transparent_crc(p_786->g_730.x, "p_786->g_730.x", print_hash_value);
    transparent_crc(p_786->g_730.y, "p_786->g_730.y", print_hash_value);
    transparent_crc(p_786->g_730.z, "p_786->g_730.z", print_hash_value);
    transparent_crc(p_786->g_730.w, "p_786->g_730.w", print_hash_value);
    transparent_crc(p_786->g_731.x, "p_786->g_731.x", print_hash_value);
    transparent_crc(p_786->g_731.y, "p_786->g_731.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_786->g_744[i], "p_786->g_744[i]", print_hash_value);

    }
    transparent_crc(p_786->g_758.s0, "p_786->g_758.s0", print_hash_value);
    transparent_crc(p_786->g_758.s1, "p_786->g_758.s1", print_hash_value);
    transparent_crc(p_786->g_758.s2, "p_786->g_758.s2", print_hash_value);
    transparent_crc(p_786->g_758.s3, "p_786->g_758.s3", print_hash_value);
    transparent_crc(p_786->g_758.s4, "p_786->g_758.s4", print_hash_value);
    transparent_crc(p_786->g_758.s5, "p_786->g_758.s5", print_hash_value);
    transparent_crc(p_786->g_758.s6, "p_786->g_758.s6", print_hash_value);
    transparent_crc(p_786->g_758.s7, "p_786->g_758.s7", print_hash_value);
    transparent_crc(p_786->g_768, "p_786->g_768", print_hash_value);
    transparent_crc(p_786->g_769.x, "p_786->g_769.x", print_hash_value);
    transparent_crc(p_786->g_769.y, "p_786->g_769.y", print_hash_value);
    transparent_crc(p_786->g_781, "p_786->g_781", print_hash_value);
    transparent_crc(p_786->v_collective, "p_786->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 1; i++)
            transparent_crc(p_786->l_special_values[i], "p_786->l_special_values[i]", print_hash_value);
    transparent_crc(p_786->l_comm_values[get_linear_local_id()], "p_786->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_786->g_comm_values[get_linear_group_id() * 147 + get_linear_local_id()], "p_786->g_comm_values[get_linear_group_id() * 147 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
