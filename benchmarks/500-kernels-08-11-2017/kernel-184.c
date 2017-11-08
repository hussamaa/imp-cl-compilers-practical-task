// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,99,1 -l 17,9,1
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

__constant uint32_t permutations[10][153] = {
{35,120,84,61,152,47,103,118,8,113,34,107,44,85,67,82,98,32,124,51,117,111,90,106,151,95,15,45,56,27,132,18,99,23,22,115,49,123,72,42,139,4,43,92,87,48,57,38,83,112,19,74,55,1,41,143,30,125,24,121,128,0,25,71,100,2,62,6,130,75,146,110,10,102,39,17,21,53,101,116,52,46,140,50,129,26,5,40,60,104,81,59,66,63,13,73,93,114,150,108,133,9,3,97,29,64,148,14,109,79,137,141,78,77,134,145,96,11,105,119,94,54,127,76,28,136,70,126,88,58,31,147,135,69,80,89,37,16,65,144,149,20,131,68,122,91,138,7,33,12,142,86,36}, // permutation 0
{150,36,144,3,118,124,117,67,49,131,129,11,139,10,46,99,16,20,76,81,8,75,101,146,77,78,89,47,2,83,37,145,64,138,143,55,53,111,120,102,21,54,15,147,104,25,50,141,74,108,112,27,68,39,73,34,95,0,80,30,98,51,115,26,132,137,35,7,136,18,92,57,38,86,71,69,32,119,31,114,128,58,79,96,40,1,12,90,6,109,106,148,135,52,65,28,93,17,44,113,62,63,41,84,91,97,134,105,13,22,5,116,103,23,125,85,59,48,107,14,140,29,87,19,61,88,82,121,9,130,70,152,42,110,43,100,24,56,149,122,45,94,127,60,126,133,72,151,142,33,4,123,66}, // permutation 1
{115,74,86,21,6,146,8,11,82,85,121,128,112,143,73,19,135,150,76,37,30,113,65,34,16,123,51,53,47,49,10,97,18,66,88,52,28,117,124,133,40,92,4,114,147,90,130,103,152,56,25,127,15,79,132,91,67,137,22,100,69,61,125,7,45,62,119,78,39,120,54,43,75,84,3,0,122,104,105,99,83,5,32,136,111,12,144,96,23,26,141,58,13,64,24,149,55,131,1,151,63,46,95,148,106,140,134,77,36,80,118,94,38,72,42,41,33,29,110,89,50,17,31,107,14,116,139,20,142,68,60,108,35,109,2,81,129,102,93,27,44,71,138,87,98,101,145,57,59,126,9,48,70}, // permutation 2
{10,142,85,71,46,132,96,115,104,55,38,23,60,88,116,51,98,147,26,72,70,148,42,124,133,64,75,141,0,63,86,82,100,32,130,139,34,103,7,97,113,92,57,126,28,47,37,52,138,39,76,36,140,112,101,33,106,31,110,18,131,93,111,102,66,5,44,56,35,146,135,73,14,17,151,119,105,78,43,62,91,150,40,21,8,48,67,84,81,107,58,50,3,15,118,27,108,77,53,2,89,49,20,29,13,122,16,80,65,54,137,123,1,95,41,90,117,9,59,11,61,99,12,30,136,69,4,144,129,87,79,22,152,149,120,83,125,94,127,24,114,128,68,143,134,145,74,121,19,6,25,45,109}, // permutation 3
{103,109,80,124,33,23,117,108,29,144,58,102,92,9,123,32,54,71,16,5,130,152,8,127,88,19,43,116,22,51,137,141,7,20,98,1,114,110,105,95,47,26,55,142,69,14,30,73,25,134,151,107,39,85,97,75,135,78,45,125,139,145,77,56,96,37,140,120,15,65,27,104,0,28,79,94,12,101,44,112,84,76,4,17,93,106,34,121,61,133,38,40,72,66,62,82,111,74,131,60,87,81,100,86,126,18,57,118,129,64,53,89,136,128,99,2,50,48,52,41,68,148,119,147,67,49,113,90,36,13,21,24,149,122,10,35,115,63,6,132,150,42,3,59,91,146,83,143,11,46,138,70,31}, // permutation 4
{125,131,150,96,129,3,48,2,71,116,132,88,10,49,64,99,12,61,39,37,63,104,110,97,4,59,148,20,93,43,98,105,119,81,77,108,146,25,60,79,128,139,28,69,95,31,101,6,89,124,51,66,120,44,118,137,82,13,73,123,42,7,29,26,9,21,1,138,115,87,11,53,54,70,113,152,84,127,68,147,17,72,114,92,74,27,18,14,40,52,8,151,85,117,75,149,143,55,50,141,38,140,22,91,100,76,62,122,130,103,41,32,24,34,94,102,57,106,45,107,23,121,78,80,111,46,109,16,15,83,56,5,36,67,47,35,133,142,144,112,65,30,19,90,126,58,135,136,33,0,86,134,145}, // permutation 5
{5,92,38,64,29,89,73,6,81,2,93,58,128,151,131,59,127,106,83,21,138,60,124,117,13,130,126,23,144,116,100,3,86,65,141,46,103,69,113,33,20,31,125,148,146,101,84,56,39,136,98,48,27,129,135,17,87,1,142,82,79,150,19,11,75,51,139,134,85,61,34,32,94,122,109,28,80,115,147,68,108,12,63,77,47,22,104,55,25,49,95,96,67,119,8,152,50,145,45,102,7,99,26,88,52,15,41,70,114,91,30,123,40,16,18,78,132,90,105,57,4,111,118,97,107,36,42,44,76,74,149,54,112,35,72,14,43,120,133,24,140,9,0,110,143,137,53,121,62,37,71,10,66}, // permutation 6
{82,31,48,61,58,17,20,149,26,106,134,121,127,34,65,36,137,150,46,92,145,24,42,81,148,37,120,41,101,80,110,71,90,126,74,53,124,28,109,115,77,9,152,78,144,98,8,50,88,87,21,69,19,91,129,13,122,10,86,35,142,6,73,133,60,49,99,16,15,55,136,132,119,11,123,32,83,97,14,114,47,4,100,139,116,76,128,94,75,70,118,141,68,143,43,25,2,38,66,22,59,57,63,56,52,130,131,103,39,27,62,113,146,102,105,3,125,135,18,51,33,89,79,12,147,29,108,30,54,138,44,72,140,104,0,112,7,84,96,85,95,45,151,1,93,117,64,5,111,67,23,107,40}, // permutation 7
{72,134,151,86,100,0,107,44,141,82,58,80,66,90,94,138,78,146,128,43,108,148,106,7,123,15,6,11,81,99,59,37,101,96,68,23,60,56,25,87,36,42,63,116,130,29,119,83,112,30,21,104,19,13,69,115,92,97,113,27,109,129,122,26,75,8,40,144,126,105,41,55,118,147,76,53,124,70,140,45,38,103,5,127,95,16,145,50,149,131,67,137,79,34,33,143,20,4,35,121,120,125,117,142,98,2,48,102,57,71,24,17,74,132,62,93,114,150,39,54,32,65,110,22,46,31,91,89,77,52,88,84,1,136,133,152,47,12,18,64,61,14,28,85,10,49,73,3,139,9,111,51,135}, // permutation 8
{38,112,91,144,127,82,134,139,85,60,35,93,105,116,33,65,130,94,6,7,113,143,128,63,103,137,87,40,23,5,45,119,83,31,88,92,110,20,59,64,98,61,124,39,11,19,78,133,28,72,56,115,77,29,30,25,150,135,15,95,132,118,75,8,22,68,79,117,2,71,111,49,120,41,122,151,96,14,54,146,102,84,13,58,125,147,0,148,86,131,104,121,109,46,138,107,50,62,24,53,36,16,12,21,17,4,26,18,37,52,34,90,114,136,106,129,10,145,126,76,42,55,74,100,1,67,51,108,81,70,27,101,140,66,9,152,57,44,142,149,99,97,89,69,47,80,141,73,3,123,48,43,32} // permutation 9
};

// Seed: 2296844444

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3[5];
    int64_t g_12;
    int32_t * volatile g_13;
    int32_t g_15;
    uint16_t g_16;
    VECTOR(int16_t, 8) g_38;
    VECTOR(uint64_t, 16) g_61;
    uint64_t g_63;
    int32_t *g_77;
    int32_t ** volatile g_76;
    VECTOR(uint32_t, 16) g_79;
    VECTOR(uint8_t, 4) g_90;
    VECTOR(int16_t, 8) g_110;
    volatile VECTOR(int16_t, 4) g_117;
    int8_t g_121;
    volatile int32_t g_122;
    uint32_t g_144;
    volatile uint8_t g_161[3][4];
    volatile uint8_t *g_160;
    volatile uint8_t ** volatile g_159[6];
    VECTOR(uint64_t, 8) g_183;
    VECTOR(uint8_t, 2) g_208;
    VECTOR(uint8_t, 2) g_228;
    VECTOR(uint8_t, 16) g_229;
    VECTOR(int16_t, 4) g_243;
    volatile VECTOR(int16_t, 2) g_244;
    int8_t *g_253[9];
    volatile uint64_t g_259[7];
    volatile uint64_t *g_258;
    volatile uint16_t g_277;
    volatile VECTOR(uint16_t, 16) g_304;
    int32_t ** volatile g_308;
    int8_t g_338;
    int8_t **g_357;
    int8_t *** volatile g_356;
    uint64_t ** volatile g_419;
    VECTOR(uint8_t, 4) g_430;
    VECTOR(uint8_t, 2) g_432;
    VECTOR(uint8_t, 8) g_433;
    VECTOR(uint8_t, 2) g_435;
    VECTOR(uint8_t, 16) g_438;
    VECTOR(int16_t, 8) g_442;
    int32_t ** volatile g_459;
    VECTOR(int16_t, 16) g_464;
    int32_t * volatile g_488;
    volatile uint8_t g_499[10][2];
    VECTOR(uint16_t, 2) g_539;
    volatile VECTOR(int64_t, 4) g_571;
    VECTOR(int8_t, 2) g_609;
    int64_t g_619;
    int64_t g_621;
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
uint64_t  func_1(struct S0 * p_642);
int16_t  func_7(int32_t  p_8, uint32_t  p_9, struct S0 * p_642);
int32_t * func_18(int32_t * p_19, int32_t * p_20, int64_t  p_21, int32_t * p_22, int8_t  p_23, struct S0 * p_642);
int32_t * func_24(uint64_t  p_25, int32_t * p_26, int64_t  p_27, int32_t * p_28, struct S0 * p_642);
int32_t * func_31(int64_t  p_32, int32_t * p_33, struct S0 * p_642);
int64_t  func_34(int32_t  p_35, uint16_t  p_36, int32_t  p_37, struct S0 * p_642);
int32_t * func_42(uint64_t  p_43, struct S0 * p_642);
int32_t * func_44(int32_t * p_45, int8_t  p_46, int32_t  p_47, int32_t * p_48, uint64_t  p_49, struct S0 * p_642);
uint32_t  func_67(uint64_t * p_68, struct S0 * p_642);
int32_t  func_71(int32_t * p_72, struct S0 * p_642);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_642->g_comm_values p_642->g_3 p_642->l_comm_values p_642->g_15 p_642->g_16 p_642->g_12 p_642->g_433 p_642->g_459 p_642->g_121 p_642->g_38 p_642->g_63 p_642->g_183 p_642->g_308 p_642->g_356 p_642->g_228 p_642->g_208 p_642->g_304 p_642->g_419 p_642->g_76 p_642->g_77 p_642->g_499 p_642->g_442 p_642->g_539 p_642->g_144 p_642->g_258 p_642->g_259 p_642->g_464 p_642->g_229 p_642->g_79
 * writes: p_642->g_3 p_642->g_12 p_642->g_15 p_642->g_16 p_642->g_77 p_642->g_38 p_642->g_63 p_642->g_357 p_642->g_499 p_642->g_comm_values p_642->g_144 p_642->g_338 p_642->g_121 p_642->g_619
 */
uint64_t  func_1(struct S0 * p_642)
{ /* block id: 4 */
    int32_t *l_2[8][10] = {{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]},{(void*)0,(void*)0,&p_642->g_3[3],&p_642->g_3[4],(void*)0,&p_642->g_3[2],&p_642->g_3[0],&p_642->g_3[3],&p_642->g_3[0],&p_642->g_3[2]}};
    uint8_t l_6 = 255UL;
    int16_t l_17 = 7L;
    int32_t **l_529 = &p_642->g_77;
    int i, j;
    p_642->g_3[2] = (-10L);
    p_642->g_16 |= (safe_mul_func_uint16_t_u_u(((void*)0 != &p_642->g_3[2]), ((p_642->g_comm_values[p_642->tid] , (l_6 <= (p_642->g_3[3] != p_642->l_comm_values[(safe_mod_func_uint32_t_u_u(p_642->tid, 153))]))) <= (4294967294UL ^ (func_7(p_642->g_comm_values[p_642->tid], p_642->g_3[3], p_642) ^ 0x6F99L)))));
    l_17 = p_642->l_comm_values[(safe_mod_func_uint32_t_u_u(p_642->tid, 153))];
    (*l_529) = func_18(l_2[3][2], l_2[7][4], p_642->g_12, ((*l_529) = func_24(p_642->g_3[3], l_2[3][2], p_642->g_15, l_2[3][2], p_642)), (0xAB22L || 0x0017L), p_642);
    return p_642->g_79.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_15
 * writes: p_642->g_12 p_642->g_15
 */
int16_t  func_7(int32_t  p_8, uint32_t  p_9, struct S0 * p_642)
{ /* block id: 6 */
    uint16_t l_10 = 8UL;
    int32_t *l_11 = (void*)0;
    int32_t *l_14 = &p_642->g_15;
    (*l_14) &= (p_642->g_12 = l_10);
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_539 p_642->g_3 p_642->g_121 p_642->l_comm_values p_642->g_15 p_642->g_144 p_642->g_76 p_642->g_77 p_642->g_433 p_642->g_459 p_642->g_16 p_642->g_38 p_642->g_63 p_642->g_183 p_642->g_308 p_642->g_12 p_642->g_356 p_642->g_228 p_642->g_208 p_642->g_304 p_642->g_419 p_642->g_499 p_642->g_442 p_642->g_258 p_642->g_259 p_642->g_464 p_642->g_229
 * writes: p_642->g_comm_values p_642->g_15 p_642->g_144 p_642->g_338 p_642->g_121 p_642->g_77 p_642->g_38 p_642->g_3 p_642->g_16 p_642->g_63 p_642->g_357 p_642->g_499 p_642->g_619
 */
int32_t * func_18(int32_t * p_19, int32_t * p_20, int64_t  p_21, int32_t * p_22, int8_t  p_23, struct S0 * p_642)
{ /* block id: 195 */
    int32_t *l_530 = (void*)0;
    int32_t l_531 = 0x463D9F51L;
    uint8_t l_543 = 246UL;
    int32_t l_557[6][4] = {{0x27542130L,(-1L),0x27542130L,0x27542130L},{0x27542130L,(-1L),0x27542130L,0x27542130L},{0x27542130L,(-1L),0x27542130L,0x27542130L},{0x27542130L,(-1L),0x27542130L,0x27542130L},{0x27542130L,(-1L),0x27542130L,0x27542130L},{0x27542130L,(-1L),0x27542130L,0x27542130L}};
    int32_t *l_627 = &p_642->g_15;
    int32_t *l_628 = &l_557[1][1];
    int32_t *l_629 = &l_531;
    int32_t *l_630 = (void*)0;
    int32_t *l_631 = (void*)0;
    int32_t *l_632 = &p_642->g_15;
    int32_t *l_633 = &l_531;
    int32_t *l_634[5] = {&l_557[5][1],&l_557[5][1],&l_557[5][1],&l_557[5][1],&l_557[5][1]};
    int16_t l_635 = 0L;
    int32_t l_636 = 0L;
    int64_t l_637 = 0x6AF69D0B866C32BBL;
    int32_t l_638 = 0x581C150DL;
    uint16_t l_639 = 0x743BL;
    int i, j;
    l_531 &= (-2L);
    if (l_531)
    { /* block id: 197 */
        VECTOR(uint16_t, 16) l_538 = (VECTOR(uint16_t, 16))(0x47C4L, (VECTOR(uint16_t, 4))(0x47C4L, (VECTOR(uint16_t, 2))(0x47C4L, 0xAB66L), 0xAB66L), 0xAB66L, 0x47C4L, 0xAB66L, (VECTOR(uint16_t, 2))(0x47C4L, 0xAB66L), (VECTOR(uint16_t, 2))(0x47C4L, 0xAB66L), 0x47C4L, 0xAB66L, 0x47C4L, 0xAB66L);
        uint8_t l_540 = 255UL;
        int64_t *l_544[6][10][4] = {{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}},{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}},{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}},{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}},{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}},{{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12},{(void*)0,(void*)0,&p_642->g_12,&p_642->g_12}}};
        int32_t *l_545 = &p_642->g_15;
        int i, j, k;
        (*l_545) &= ((safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((p_21 && p_21), (((VECTOR(uint16_t, 8))(0x2F31L, ((VECTOR(uint16_t, 4))(l_538.s109d)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_642->g_539.yx)))), 65534UL)).s3 | (l_540 >= 1L)))) >= (safe_lshift_func_int8_t_s_u(0x77L, (l_543 != p_642->g_3[2])))), ((p_642->g_comm_values[p_642->tid] = (&p_642->g_159[0] != (p_642->g_121 , (void*)0))) & p_642->l_comm_values[(safe_mod_func_uint32_t_u_u(p_642->tid, 153))]))) || p_23);
        for (p_23 = 0; (p_23 <= (-15)); p_23 = safe_sub_func_int8_t_s_s(p_23, 3))
        { /* block id: 202 */
            if ((atomic_inc(&p_642->g_atomic_input[55 * get_linear_group_id() + 9]) == 3))
            { /* block id: 204 */
                VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x144F482BL), 0x144F482BL);
                uint8_t l_549 = 252UL;
                int i;
                l_549 = ((VECTOR(int32_t, 4))(l_548.zwyz)).y;
                unsigned int result = 0;
                result += l_548.w;
                result += l_548.z;
                result += l_548.y;
                result += l_548.x;
                result += l_549;
                atomic_add(&p_642->g_special_values[55 * get_linear_group_id() + 9], result);
            }
            else
            { /* block id: 206 */
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 210 */
        uint32_t l_558 = 0UL;
        int32_t l_576 = 0x16D4587BL;
        int32_t l_588 = (-5L);
        int32_t l_590 = 0x6B05191DL;
        int32_t l_591 = 1L;
        int32_t l_593 = (-9L);
        int32_t l_595 = 1L;
        for (p_642->g_144 = 0; (p_642->g_144 <= 2); p_642->g_144 = safe_add_func_int32_t_s_s(p_642->g_144, 1))
        { /* block id: 213 */
            int16_t l_552 = 0x0C6CL;
            int32_t l_553 = 0x1B3732FDL;
            int32_t l_554 = 0L;
            int32_t *l_555 = &p_642->g_3[4];
            int32_t *l_556[2];
            uint8_t l_596 = 255UL;
            uint16_t l_604 = 0xE05EL;
            uint16_t l_625 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_556[i] = (void*)0;
            ++l_558;
            for (p_642->g_338 = 0; (p_642->g_338 != (-17)); p_642->g_338 = safe_sub_func_uint32_t_u_u(p_642->g_338, 1))
            { /* block id: 217 */
                int16_t l_574[10][9] = {{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L},{1L,0x2934L,(-5L),(-5L),0x2934L,1L,0x4972L,0x3CA6L,0x32D7L}};
                int i, j;
                for (p_642->g_121 = 21; (p_642->g_121 < 4); p_642->g_121 = safe_sub_func_int64_t_s_s(p_642->g_121, 7))
                { /* block id: 220 */
                    uint64_t *l_567 = (void*)0;
                    uint64_t *l_568 = (void*)0;
                    uint64_t *l_569 = (void*)0;
                    int32_t l_570 = 1L;
                    int32_t **l_572 = (void*)0;
                    int32_t **l_573 = &l_556[0];
                    uint64_t l_575 = 0xC34CD8EBF8BA6149L;
                    l_576 &= ((((((*l_573) = (((((safe_div_func_uint64_t_u_u((l_570 = 0xBAF6297457613CE8L), (+((p_21 , p_23) , ((VECTOR(int64_t, 2))(p_642->g_571.yw)).odd)))) | p_21) ^ p_23) <= 0x2EE76299L) , func_24((l_558 < (p_642->g_15 || l_570)), &l_570, l_570, (*p_642->g_76), p_642))) == (void*)0) || 7L) != l_574[0][7]) , l_575);
                    (*l_555) = p_21;
                    if (l_576)
                        break;
                    if ((atomic_inc(&p_642->g_atomic_input[55 * get_linear_group_id() + 12]) == 3))
                    { /* block id: 227 */
                        int32_t l_578 = (-9L);
                        int32_t *l_577 = &l_578;
                        uint32_t l_579[5][6][2] = {{{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL}},{{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL}},{{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL}},{{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL}},{{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL},{0x17A54514L,0x7102FE2AL}}};
                        uint64_t l_580 = 0UL;
                        uint8_t l_581 = 0UL;
                        int64_t l_582 = 0x243DFC03CBD36F2CL;
                        int32_t *l_583 = &l_578;
                        int32_t *l_584 = &l_578;
                        int i, j, k;
                        l_577 = (void*)0;
                        l_582 = ((l_580 &= l_579[3][1][1]) , l_581);
                        l_584 = l_583;
                        unsigned int result = 0;
                        result += l_578;
                        int l_579_i0, l_579_i1, l_579_i2;
                        for (l_579_i0 = 0; l_579_i0 < 5; l_579_i0++) {
                            for (l_579_i1 = 0; l_579_i1 < 6; l_579_i1++) {
                                for (l_579_i2 = 0; l_579_i2 < 2; l_579_i2++) {
                                    result += l_579[l_579_i0][l_579_i1][l_579_i2];
                                }
                            }
                        }
                        result += l_580;
                        result += l_581;
                        result += l_582;
                        atomic_add(&p_642->g_special_values[55 * get_linear_group_id() + 12], result);
                    }
                    else
                    { /* block id: 232 */
                        (1 + 1);
                    }
                }
                (*l_555) = p_23;
            }
            for (p_642->g_15 = (-11); (p_642->g_15 > 14); ++p_642->g_15)
            { /* block id: 240 */
                int32_t l_587 = 0x60682826L;
                int32_t l_589 = 1L;
                int32_t l_592 = 7L;
                int32_t l_594[3][10][2] = {{{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)}},{{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)}},{{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)},{1L,(-10L)}}};
                int i, j, k;
                --l_596;
                for (p_642->g_63 = (-16); (p_642->g_63 >= 20); ++p_642->g_63)
                { /* block id: 244 */
                    uint16_t l_603 = 0x92E1L;
                    uint64_t *l_614[3];
                    int32_t l_615 = (-1L);
                    int64_t *l_618 = &p_642->g_619;
                    int64_t *l_620[10] = {&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621,&p_642->g_621};
                    int16_t *l_624 = &l_552;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_614[i] = (void*)0;
                    l_595 = (safe_div_func_uint32_t_u_u(((*l_555) = (*l_555)), (l_594[1][4][1] |= (l_603 = (~(-1L))))));
                    if (l_604)
                        break;
                    if (((safe_div_func_uint32_t_u_u((((l_594[1][4][1] && (((safe_mul_func_int8_t_s_s(0x1AL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_642->g_609.yy)), 0L, 8L)).y)) > (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((l_615 ^= (*p_642->g_258)) , (((safe_lshift_func_int8_t_s_u(0x18L, 6)) && ((l_588 = ((*l_618) = p_23)) , (safe_add_func_uint16_t_u_u(((void*)0 != p_642->g_419), ((l_531 ^= p_23) >= ((*l_624) = (p_642->g_464.s5 , (-1L)))))))) == p_21)), l_625)), 6))) , l_592)) | 5L) , GROUP_DIVERGE(1, 1)), p_642->g_229.s6)) == 3L))
                    { /* block id: 255 */
                        uint8_t l_626 = 0xB4L;
                        if (l_626)
                            break;
                    }
                    else
                    { /* block id: 257 */
                        return (*p_642->g_76);
                    }
                    p_22 = (*p_642->g_459);
                }
            }
        }
        return p_19;
    }
    (*l_627) ^= (-1L);
    ++l_639;
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_15 p_642->g_433 p_642->g_459 p_642->g_121 p_642->g_16 p_642->g_3 p_642->g_38 p_642->g_63 p_642->g_183 p_642->g_308 p_642->g_12 p_642->g_356 p_642->g_228 p_642->g_208 p_642->g_304 p_642->g_419 p_642->g_76 p_642->g_77 p_642->g_499 p_642->g_442
 * writes: p_642->g_15 p_642->g_77 p_642->g_38 p_642->g_3 p_642->g_16 p_642->g_63 p_642->g_357 p_642->g_499
 */
int32_t * func_24(uint64_t  p_25, int32_t * p_26, int64_t  p_27, int32_t * p_28, struct S0 * p_642)
{ /* block id: 12 */
    VECTOR(int16_t, 8) l_39 = (VECTOR(int16_t, 8))(0x6AE2L, (VECTOR(int16_t, 4))(0x6AE2L, (VECTOR(int16_t, 2))(0x6AE2L, 1L), 1L), 1L, 0x6AE2L, 1L);
    VECTOR(int16_t, 4) l_424 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L));
    VECTOR(uint8_t, 16) l_431 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    int8_t l_443 = 0x09L;
    int8_t l_457 = (-1L);
    int32_t l_525 = 0x091452AEL;
    uint8_t l_526[4][7][9] = {{{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL}},{{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL}},{{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL}},{{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL},{0x21L,0x0CL,0xF3L,0xF3L,0x0CL,0x21L,0x2DL,0x43L,1UL}}};
    int32_t l_528 = (-8L);
    int i, j, k;
    for (p_642->g_15 = (-7); (p_642->g_15 >= 17); p_642->g_15 = safe_add_func_uint32_t_u_u(p_642->g_15, 7))
    { /* block id: 15 */
        uint64_t l_425 = 1UL;
        VECTOR(uint8_t, 16) l_434 = (VECTOR(uint8_t, 16))(0x9CL, (VECTOR(uint8_t, 4))(0x9CL, (VECTOR(uint8_t, 2))(0x9CL, 247UL), 247UL), 247UL, 0x9CL, 247UL, (VECTOR(uint8_t, 2))(0x9CL, 247UL), (VECTOR(uint8_t, 2))(0x9CL, 247UL), 0x9CL, 247UL, 0x9CL, 247UL);
        VECTOR(uint8_t, 8) l_436 = (VECTOR(uint8_t, 8))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xF3L), 0xF3L), 0xF3L, 8UL, 0xF3L);
        VECTOR(uint8_t, 4) l_437 = (VECTOR(uint8_t, 4))(0x71L, (VECTOR(uint8_t, 2))(0x71L, 1UL), 1UL);
        VECTOR(uint8_t, 4) l_439 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0UL), 0UL);
        uint8_t *l_444 = (void*)0;
        VECTOR(int32_t, 16) l_445 = (VECTOR(int32_t, 16))(0x5674A06DL, (VECTOR(int32_t, 4))(0x5674A06DL, (VECTOR(int32_t, 2))(0x5674A06DL, (-4L)), (-4L)), (-4L), 0x5674A06DL, (-4L), (VECTOR(int32_t, 2))(0x5674A06DL, (-4L)), (VECTOR(int32_t, 2))(0x5674A06DL, (-4L)), 0x5674A06DL, (-4L), 0x5674A06DL, (-4L));
        uint8_t *l_446 = (void*)0;
        uint8_t *l_447 = (void*)0;
        uint8_t *l_448 = (void*)0;
        uint8_t *l_449 = (void*)0;
        uint8_t *l_450 = (void*)0;
        uint8_t *l_451 = (void*)0;
        uint8_t *l_452 = (void*)0;
        int32_t l_453 = (-10L);
        VECTOR(int8_t, 8) l_454 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x50L), 0x50L), 0x50L, (-3L), 0x50L);
        int8_t *l_455 = (void*)0;
        int8_t *l_456 = &l_443;
        int32_t *l_484[5];
        int32_t **l_498 = &l_484[4];
        int64_t *l_522 = (void*)0;
        int64_t *l_523[6] = {&p_642->g_12,&p_642->g_12,&p_642->g_12,&p_642->g_12,&p_642->g_12,&p_642->g_12};
        int16_t *l_524[9][2][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int64_t l_527[8] = {0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L,0x11D9A1DD73BC7EB4L};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_484[i] = &p_642->g_15;
        (*l_498) = func_31(func_34((((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(p_642->g_38.s0473241634053751)).even, ((VECTOR(int16_t, 4))(l_39.s1153)).zzywzzwy))).s4120177566336110)).even, (int16_t)(safe_mul_func_uint16_t_u_u(((FAKE_DIVERGE(p_642->local_1_offset, get_local_id(1), 10) , func_42(p_27, p_642)) == (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(l_424.ywzyxxwz)).s01, (int16_t)(((VECTOR(int8_t, 4))(l_425, ((*l_456) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((p_642->g_243.y & ((((((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(p_642->g_430.yzwyxxxw)).s7100163007765231, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(0x20L, 255UL)), ((VECTOR(uint8_t, 16))(l_431.s5c5df8c29b2d5446)).s66, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_642->g_432.yx)), 0UL, 0UL)).xzyxxwyy, ((VECTOR(uint8_t, 8))(p_642->g_433.s50440252)), ((VECTOR(uint8_t, 2))(247UL, 0x43L)).yyxyyxyx))).s66))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_434.sd4))))))).yyyy)).wxzzyzxz, ((VECTOR(uint8_t, 4))(p_642->g_435.xxyy)).zzzwxyzz))), ((VECTOR(uint8_t, 8))(p_27, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(0x06L, 0x1EL)).yyxyxxyyyxyyyyxx))).even, ((VECTOR(uint8_t, 2))(l_436.s74)).yxyyxxyx))).hi)).ywxzwwyyyzzzyywz)))))).sba, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_437.zw)), ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(p_642->g_438.s9a950528)).s7571271430711334))))).s847e, ((VECTOR(uint8_t, 2))(0xBDL, 0xF4L)).yxxx))), 0xCBL, 1UL)), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(3UL, 1UL)).yyxyxyyxxxxxyxxx, ((VECTOR(uint8_t, 2))(l_439.xz)).xyyxxyxxxyyxxyxx))).even))).s05))))), (l_453 ^= (l_445.s7 = (safe_rshift_func_int16_t_s_s(((p_25 & ((VECTOR(int16_t, 2))(p_642->g_442.s03)).odd) <= (l_443 || p_642->g_208.x)), 10)))), 0x24L, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_454.s0136)).hi))))), 9UL))))).s2642306424644220))))).s3 >= p_25) , 0UL) , 0x4492B2E6L) , p_642->g_438.s2) & 0xBAL) == 18446744073709551609UL)), p_642->g_432.x)), 0))), 0x38L, 0x50L)).y != 0x5FL), (int16_t)p_642->g_15))), 0x7251L, 0x4B02L)).zxzwwwxz)).s0 , &l_453)), l_457))))).s5 & FAKE_DIVERGE(p_642->group_0_offset, get_group_id(0), 10)), p_642->g_433.s2, l_434.s5, p_642), l_484[4], p_642);
        p_642->g_499[9][0] ^= 7L;
        l_528 = ((0x09EFL > (safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((p_25 , ((p_27 , ((((p_642->g_16 = 65529UL) <= ((safe_add_func_int16_t_s_s((l_525 = (0x2BAAL ^ ((((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0xF7L, (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_642->global_0_offset, get_global_id(0), 10), l_424.x)) || (((FAKE_DIVERGE(p_642->global_0_offset, get_global_id(0), 10) || (0x0D34078E2F21E255L > (p_27 ^= 0x3E090AADA7C75178L))) < 0UL) & l_39.s7)) , 0x51FC1162L), p_642->g_3[3])), GROUP_DIVERGE(2, 1))))), p_25)) , p_25) , (void*)0) == &p_642->g_277) , p_27) >= l_424.w))), 0x6DD6L)) | l_526[3][2][4])) <= GROUP_DIVERGE(1, 1)) == p_25)) && l_527[1])), p_642->g_433.s1)) && FAKE_DIVERGE(p_642->local_1_offset, get_local_id(1), 10)) != 0x14DEB2C4L), (**l_498))), (**l_498))) == p_642->g_442.s1), 6))) <= FAKE_DIVERGE(p_642->local_2_offset, get_local_id(2), 10));
        (*l_498) = (*p_642->g_76);
    }
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_16 p_642->g_3 p_642->g_15 p_642->g_38 p_642->g_63 p_642->g_183 p_642->g_308 p_642->g_12 p_642->g_356 p_642->g_228 p_642->g_208 p_642->g_304 p_642->g_419 p_642->g_76 p_642->g_77
 * writes: p_642->g_3 p_642->g_16 p_642->g_63 p_642->g_77 p_642->g_357
 */
int32_t * func_31(int64_t  p_32, int32_t * p_33, struct S0 * p_642)
{ /* block id: 179 */
    uint8_t *l_487 = (void*)0;
    uint8_t **l_486[7][10][3] = {{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}},{{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487},{&l_487,&l_487,&l_487}}};
    uint8_t ***l_485 = &l_486[4][8][1];
    int32_t *l_489 = &p_642->g_3[3];
    uint16_t *l_490 = &p_642->g_16;
    int16_t *l_493 = (void*)0;
    int32_t **l_496 = (void*)0;
    int32_t *l_497 = &p_642->g_15;
    int i, j, k;
    (*l_489) = (l_485 == &p_642->g_159[0]);
    p_33 = func_42((((((p_32 || (++(*l_490))) || ((void*)0 == &l_486[1][1][0])) , l_490) != (l_493 = l_490)) , (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x6F6BL, (-5L))).hi, 12))), p_642);
    return l_497;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_459 p_642->g_464 p_642->g_15 p_642->g_304 p_642->g_121
 * writes: p_642->g_77 p_642->g_38 p_642->g_3
 */
int64_t  func_34(int32_t  p_35, uint16_t  p_36, int32_t  p_37, struct S0 * p_642)
{ /* block id: 173 */
    int32_t *l_458 = &p_642->g_15;
    uint64_t l_471 = 0x09FD67BF3BA1469EL;
    VECTOR(int16_t, 16) l_476 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 5L), 5L), 5L, 5L, 5L, (VECTOR(int16_t, 2))(5L, 5L), (VECTOR(int16_t, 2))(5L, 5L), 5L, 5L, 5L, 5L);
    VECTOR(int64_t, 4) l_477 = (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x2FDA0C3135628A89L), 0x2FDA0C3135628A89L);
    uint8_t *l_478 = (void*)0;
    uint8_t *l_479 = (void*)0;
    uint8_t *l_480 = (void*)0;
    uint8_t *l_481[1][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t l_482 = 4L;
    int32_t *l_483 = &p_642->g_3[3];
    int i, j, k;
    (*p_642->g_459) = l_458;
    (*l_483) = (((safe_div_func_int32_t_s_s(p_35, (safe_rshift_func_int16_t_s_s((p_642->g_38.s1 = ((VECTOR(int16_t, 2))(p_642->g_464.s5c)).lo), 15)))) > ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(0x52C98F5FL, ((safe_add_func_int64_t_s_s(((((safe_mod_func_uint64_t_u_u((!(((p_36 == (l_482 = ((*l_458) || ((safe_lshift_func_int8_t_s_s((l_471 ^ (((safe_add_func_uint64_t_u_u(((*l_458) & (safe_mul_func_int16_t_s_s(p_36, ((VECTOR(int16_t, 16))(l_476.s60255be359ecbbd0)).s5))), (*l_458))) ^ ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_477.wwyz)))).x) & (p_36 >= (*l_458)))), p_37)) , p_37)))) , 0x46L) >= (*l_458))), 18446744073709551615UL)) <= (*l_458)) && p_642->g_304.se) & p_36), 0x3207761BF09A8C35L)) & p_36), ((VECTOR(uint32_t, 4))(4294967295UL)), 1UL, 0UL)).lo, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0UL))))).zzxxxzzwwxzzyxzy)).sc3de)), ((VECTOR(uint32_t, 4))(4294967291UL)), ((VECTOR(uint32_t, 4))(4294967287UL))))).z) > (*l_458));
    return p_642->g_121;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_3 p_642->g_15 p_642->g_61 p_642->g_38 p_642->g_63 p_642->g_76 p_642->g_77 p_642->g_79 p_642->g_110 p_642->g_159 p_642->g_117 p_642->g_90 p_642->g_144 p_642->g_121 p_642->g_16 p_642->g_208 p_642->g_228 p_642->g_160 p_642->g_161 p_642->g_277 p_642->g_304 p_642->g_183 p_642->g_308 p_642->g_258 p_642->g_259 p_642->g_12 p_642->g_356 p_642->g_comm_values p_642->g_419
 * writes: p_642->g_63 p_642->g_3 p_642->g_77 p_642->g_121 p_642->g_16 p_642->g_79 p_642->g_144 p_642->g_159 p_642->g_90 p_642->g_277 p_642->g_338 p_642->g_357 p_642->g_228 p_642->g_229
 */
int32_t * func_42(uint64_t  p_43, struct S0 * p_642)
{ /* block id: 16 */
    int32_t *l_50 = &p_642->g_15;
    uint64_t *l_62[5];
    int32_t l_64 = 8L;
    int32_t **l_422 = (void*)0;
    int32_t **l_423 = &l_50;
    int i;
    for (i = 0; i < 5; i++)
        l_62[i] = &p_642->g_63;
    (*l_423) = func_44(l_50, ((safe_mul_func_int16_t_s_s(p_642->g_3[4], 0x5637L)) || (((*l_50) < (((0x181CA8FD5F396434L && (p_43 & 0x62DA72DF2008693CL)) , (safe_add_func_uint16_t_u_u(((l_64 = (safe_div_func_int32_t_s_s((((VECTOR(uint64_t, 2))(p_642->g_61.s61)).even , (((void*)0 == &p_642->g_15) & p_43)), (*l_50)))) , p_642->g_38.s1), 1UL))) <= (*l_50))) == p_43)), p_642->g_3[4], l_50, p_642->g_15, p_642);
    return (*p_642->g_76);
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_63 p_642->g_15 p_642->g_76 p_642->g_77 p_642->g_79 p_642->g_3 p_642->g_110 p_642->g_159 p_642->g_117 p_642->g_38 p_642->g_90 p_642->g_144 p_642->g_61 p_642->g_121 p_642->g_16 p_642->g_208 p_642->g_228 p_642->g_160 p_642->g_161 p_642->g_277 p_642->g_304 p_642->g_183 p_642->g_308 p_642->g_258 p_642->g_259 p_642->g_12 p_642->g_356 p_642->g_comm_values p_642->g_419
 * writes: p_642->g_63 p_642->g_3 p_642->g_77 p_642->g_121 p_642->g_16 p_642->g_79 p_642->g_144 p_642->g_159 p_642->g_90 p_642->g_277 p_642->g_338 p_642->g_357 p_642->g_228 p_642->g_229
 */
int32_t * func_44(int32_t * p_45, int8_t  p_46, int32_t  p_47, int32_t * p_48, uint64_t  p_49, struct S0 * p_642)
{ /* block id: 18 */
    int32_t *l_70[2][4] = {{&p_642->g_3[3],&p_642->g_3[3],&p_642->g_3[3],&p_642->g_3[3]},{&p_642->g_3[3],&p_642->g_3[3],&p_642->g_3[3],&p_642->g_3[3]}};
    int16_t l_296[5] = {0x25D4L,0x25D4L,0x25D4L,0x25D4L,0x25D4L};
    int8_t **l_303 = &p_642->g_253[5];
    VECTOR(uint32_t, 4) l_306 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xA42387D9L), 0xA42387D9L);
    uint8_t *l_307[3][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    VECTOR(uint64_t, 8) l_321 = (VECTOR(uint64_t, 8))(0x7C9763C3B2AD67E0L, (VECTOR(uint64_t, 4))(0x7C9763C3B2AD67E0L, (VECTOR(uint64_t, 2))(0x7C9763C3B2AD67E0L, 0UL), 0UL), 0UL, 0x7C9763C3B2AD67E0L, 0UL);
    VECTOR(uint16_t, 8) l_343 = (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x588AL), 0x588AL), 0x588AL, 4UL, 0x588AL);
    uint16_t *l_351 = (void*)0;
    uint32_t l_355 = 0xEB0016C5L;
    int16_t l_396 = (-4L);
    int8_t l_399 = 0L;
    int16_t l_400[7][10][2] = {{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}},{{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)},{0x353BL,(-8L)}}};
    VECTOR(int32_t, 16) l_409 = (VECTOR(int32_t, 16))(0x0953B056L, (VECTOR(int32_t, 4))(0x0953B056L, (VECTOR(int32_t, 2))(0x0953B056L, 8L), 8L), 8L, 0x0953B056L, 8L, (VECTOR(int32_t, 2))(0x0953B056L, 8L), (VECTOR(int32_t, 2))(0x0953B056L, 8L), 0x0953B056L, 8L, 0x0953B056L, 8L);
    uint64_t *l_418 = &p_642->g_63;
    uint64_t **l_417 = &l_418;
    uint64_t *l_420 = &p_642->g_63;
    int8_t l_421 = (-9L);
    int i, j, k;
    for (p_642->g_63 = 0; (p_642->g_63 < 50); p_642->g_63++)
    { /* block id: 21 */
        return p_45;
    }
    p_642->g_3[4] = ((*p_45) | func_67(&p_642->g_63, p_642));
    if ((*p_48))
    { /* block id: 27 */
        VECTOR(int16_t, 16) l_282 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        uint16_t l_283 = 0x01A3L;
        int32_t l_286[10][7][3] = {{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}},{{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)},{(-1L),0x4E7E1903L,(-6L)}}};
        int i, j, k;
        atomic_sub(&p_642->l_atomic_reduction[0], (*p_48) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_642->v_collective += p_642->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_286[9][4][2] = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x2755FCA9L, 0x2037C870L, 0x041160C0L, 0x6742402BL)).wywxxwyx)))))).odd)).zwwzxywz, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x3F0BED92L, (-6L))), ((VECTOR(int32_t, 4))(func_71((p_48 = &p_642->g_15), p_642), 0x4C4A44EAL, (-1L), 0L)).lo))).yxyyxxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_282.sc28290d2c805c99a)).sbe)).yyyx)).hi)).xyxxyyyxyxyxxyxy)).s13, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(1UL, ((l_283 ^ ((safe_div_func_uint32_t_u_u((p_46 <= (*p_45)), (*p_48))) , FAKE_DIVERGE(p_642->group_2_offset, get_group_id(2), 10))) | 65526UL), 0x3FB0L, 0UL)).xxwxwzyx)).odd)).hi))).xxxyxyxx)))))))).s0;
    }
    else
    { /* block id: 123 */
        VECTOR(uint16_t, 8) l_305 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL);
        int32_t l_349 = (-1L);
        VECTOR(int32_t, 8) l_350 = (VECTOR(int32_t, 8))(0x3E3E66BAL, (VECTOR(int32_t, 4))(0x3E3E66BAL, (VECTOR(int32_t, 2))(0x3E3E66BAL, 0x051B160FL), 0x051B160FL), 0x051B160FL, 0x3E3E66BAL, 0x051B160FL);
        int32_t l_358 = 0L;
        int8_t l_359 = 0x53L;
        int32_t l_360 = 0L;
        int32_t l_361[4][3] = {{0x062C073BL,0x062C073BL,0x062C073BL},{0x062C073BL,0x062C073BL,0x062C073BL},{0x062C073BL,0x062C073BL,0x062C073BL},{0x062C073BL,0x062C073BL,0x062C073BL}};
        uint64_t *l_398[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_414 = &l_399;
        uint32_t l_415 = 0x87A0334DL;
        int64_t l_416 = (-7L);
        int i, j;
        if ((*p_45))
        { /* block id: 124 */
            uint64_t l_291 = 0x417CCAD504F892F0L;
            int32_t l_310 = (-10L);
            uint8_t l_347[5][5][2] = {{{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L}},{{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L}},{{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L}},{{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L}},{{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L},{0xD8L,0xE7L}}};
            int32_t *l_354 = (void*)0;
            uint32_t l_362[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_362[i] = 4294967295UL;
            if ((safe_div_func_uint8_t_u_u(0x17L, ((safe_sub_func_int64_t_s_s(l_291, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x7C810448B7FE5EFDL, 3UL)).yxxxyxxxxxxyyxyx)).s0)) , (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4605L, 1L)).xyyxxxyyxyxxyxxy)).s5, l_296[3])), ((safe_add_func_uint64_t_u_u(((((+((safe_add_func_uint16_t_u_u((l_291 ^ 0x3CF06E90CA4A02CCL), (((void*)0 == l_303) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_642->g_304.s3c)), 0UL, 65532UL)), ((VECTOR(uint16_t, 2))(l_305.s31)), 3UL, 6UL)))).s1))) == (((VECTOR(uint32_t, 2))(l_306.yw)).even == (l_307[0][8][0] == ((p_642->g_63 != p_49) , (void*)0))))) , l_291) >= p_642->g_183.s3) , l_291), l_305.s2)) , 0xA4L)))))))
            { /* block id: 125 */
                int32_t **l_309 = &l_70[0][3];
                VECTOR(int64_t, 4) l_324 = (VECTOR(int64_t, 4))(0x1C65E47087E23382L, (VECTOR(int64_t, 2))(0x1C65E47087E23382L, 0x08993D4E9186E969L), 0x08993D4E9186E969L);
                uint16_t *l_334 = &p_642->g_16;
                int32_t ***l_337 = &l_309;
                VECTOR(uint64_t, 16) l_346 = (VECTOR(uint64_t, 16))(0xF7A1C22950938F23L, (VECTOR(uint64_t, 4))(0xF7A1C22950938F23L, (VECTOR(uint64_t, 2))(0xF7A1C22950938F23L, 0x353D06A86FCC0C62L), 0x353D06A86FCC0C62L), 0x353D06A86FCC0C62L, 0xF7A1C22950938F23L, 0x353D06A86FCC0C62L, (VECTOR(uint64_t, 2))(0xF7A1C22950938F23L, 0x353D06A86FCC0C62L), (VECTOR(uint64_t, 2))(0xF7A1C22950938F23L, 0x353D06A86FCC0C62L), 0xF7A1C22950938F23L, 0x353D06A86FCC0C62L, 0xF7A1C22950938F23L, 0x353D06A86FCC0C62L);
                uint64_t *l_348 = &l_291;
                int i;
                (*p_642->g_308) = p_45;
                (*l_309) = p_45;
                l_310 = (FAKE_DIVERGE(p_642->global_0_offset, get_global_id(0), 10) <= ((void*)0 != l_307[0][8][0]));
                l_349 = ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((!(safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((((*l_348) &= ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(0x5CBD456A31D1CE11L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0UL, 0xA8C639169E03884AL, ((VECTOR(uint64_t, 2))(l_321.s74)), (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_324.zwzzxwwz)).s1, (l_305.s1 && (((*p_642->g_258) <= (safe_div_func_uint8_t_u_u(((l_310 = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((VECTOR(int64_t, 2))(1L, 0x57E27B0052FD0EB9L)).lo >= 1L))), 6))) == (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((p_642->g_338 = ((((p_46 <= (++(*l_334))) , p_49) , &p_45) == ((*l_337) = &p_48))), 65529UL)) , ((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_343.s0266)).xxzxyyxx)).s3, ((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_346.sab)).hi, 0xE2166E6F039C6838L)) || l_347[2][0][0]))), FAKE_DIVERGE(p_642->global_2_offset, get_global_id(2), 10))) & (*p_45)) , 255UL) != l_347[0][4][0])), 0UL))), 0xC2L))) < l_347[2][0][0])))), ((VECTOR(uint64_t, 8))(1UL)), l_305.s6, 1UL, 0xCAAD83EB671C6B98L)).s46)), 0x6C7DE986F67EDA57L)).yxwxwyww, ((VECTOR(uint64_t, 8))(0xE437D307D6FE7D91L))))).s3) && p_47), (-4L))) && l_310) | p_46) < p_49), l_305.s0)) & 247UL) , l_347[2][0][0]), p_642->g_3[3]))) , l_347[1][1][0]) , p_49), p_47)), 0x35L)) , &p_642->g_308) != l_337) != p_49);
            }
            else
            { /* block id: 135 */
                l_349 = ((((VECTOR(int32_t, 4))(l_350.s7426)).y , (((void*)0 != l_351) <= p_642->g_12)) && (p_47 < p_49));
                for (p_642->g_16 = 0; (p_642->g_16 < 56); p_642->g_16++)
                { /* block id: 139 */
                    l_354 = &l_310;
                }
                l_355 |= 0x7687097DL;
            }
            (*p_642->g_356) = &p_642->g_253[4];
            l_362[2]--;
            l_310 |= (safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_49));
        }
        else
        { /* block id: 147 */
            uint16_t l_367 = 65533UL;
            VECTOR(int64_t, 16) l_380 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x1AC892489905B9DCL), 0x1AC892489905B9DCL), 0x1AC892489905B9DCL, (-3L), 0x1AC892489905B9DCL, (VECTOR(int64_t, 2))((-3L), 0x1AC892489905B9DCL), (VECTOR(int64_t, 2))((-3L), 0x1AC892489905B9DCL), (-3L), 0x1AC892489905B9DCL, (-3L), 0x1AC892489905B9DCL);
            int8_t *l_381 = &p_642->g_338;
            int i;
            l_367++;
            for (l_355 = (-23); (l_355 == 60); l_355++)
            { /* block id: 151 */
                int16_t *l_394 = &l_296[0];
                int8_t *l_395[9][7][4] = {{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}},{{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121},{(void*)0,(void*)0,&p_642->g_121,&p_642->g_121}}};
                uint64_t l_397 = 18446744073709551615UL;
                int i, j, k;
                if ((*p_45))
                    break;
                l_349 = (safe_sub_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(246UL, (0x0BA6A2CC60A6073CL | ((safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(l_380.s806b)), ((VECTOR(int64_t, 16))(p_642->g_comm_values[p_642->tid], 3L, (((l_381 == ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_642->g_229.se = (p_642->g_228.x = (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((((VECTOR(int32_t, 2))(0x6274C8EFL, 0x5D5DC21CL)).odd >= (&p_48 == &l_70[0][3])) != p_46), (((*l_394) = (safe_rshift_func_int16_t_s_s(l_350.s5, 14))) | 0UL))), 0x400FL)))), 6)), 7)), p_49)) , l_395[5][2][1])) || 0xDF27A3E9L) > p_49), l_305.s7, p_47, ((VECTOR(int64_t, 8))(0x528EC2FF9F3DD974L)), 0L, 0L, 4L)).s5dc1))).odd, ((VECTOR(int64_t, 2))(0x7E73E84269E60072L))))).odd | p_49), l_396)) , p_642->g_3[3])))), (-4L))) >= 1L) ^ (-9L)) , l_397), p_47));
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_642->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 153)), permutations[(safe_mod_func_uint32_t_u_u(((l_399 = p_642->g_228.x) , (((l_400[0][8][1] & ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(((((((*l_414) = ((0L || (safe_lshift_func_int16_t_s_s((((FAKE_DIVERGE(p_642->local_2_offset, get_local_id(2), 10) >= l_305.s6) ^ (((VECTOR(int8_t, 4))(((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_409.sf47fe37894983641)).sc, (p_642->g_183.s2 | ((safe_rshift_func_int16_t_s_u((0L || ((((+p_49) <= ((((safe_add_func_uint16_t_u_u((3UL == FAKE_DIVERGE(p_642->local_1_offset, get_local_id(1), 10)), 0x005EL)) , 255UL) ^ GROUP_DIVERGE(1, 1)) && 4UL)) , p_642->g_208.y) && 18446744073709551608UL)), 13)) && p_642->g_208.x)))) || 0x65L), p_49, 0x1AL, 1L)).z || (-8L))) , p_642->g_63), 0))) <= (*p_45))) || 0x6FL) <= 0x856CL) != GROUP_DIVERGE(2, 1)) || l_350.s0), 4)) != 0x99232DE5L), l_415)) != l_416)) >= p_642->g_304.se) == l_305.s4)), 10))][(safe_mod_func_uint32_t_u_u(p_642->tid, 153))]));
    }
    l_421 ^= (FAKE_DIVERGE(p_642->local_1_offset, get_local_id(1), 10) != ((+0x19953FFBL) ^ ((((l_417 == p_642->g_419) == 0UL) , (((*l_417) = (void*)0) == l_420)) ^ (*p_48))));
    return l_70[0][3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_67(uint64_t * p_68, struct S0 * p_642)
{ /* block id: 24 */
    uint32_t l_69 = 0x6C5FB330L;
    return l_69;
}


/* ------------------------------------------ */
/* 
 * reads : p_642->g_63 p_642->g_76 p_642->g_77 p_642->g_79 p_642->g_15 p_642->g_3 p_642->g_110 p_642->g_159 p_642->g_117 p_642->g_38 p_642->g_90 p_642->g_144 p_642->g_61 p_642->g_121 p_642->g_16 p_642->g_208 p_642->g_228 p_642->g_160 p_642->g_161 p_642->g_277
 * writes: p_642->g_63 p_642->g_77 p_642->g_3 p_642->g_121 p_642->g_16 p_642->g_79 p_642->g_144 p_642->g_159 p_642->g_90 p_642->g_277
 */
int32_t  func_71(int32_t * p_72, struct S0 * p_642)
{ /* block id: 30 */
    uint8_t l_80 = 0x90L;
    int32_t l_93 = 0x5DAF8E45L;
    int32_t l_94 = 0x324D4651L;
    VECTOR(uint32_t, 16) l_95 = (VECTOR(uint32_t, 16))(0x1997BD6DL, (VECTOR(uint32_t, 4))(0x1997BD6DL, (VECTOR(uint32_t, 2))(0x1997BD6DL, 3UL), 3UL), 3UL, 0x1997BD6DL, 3UL, (VECTOR(uint32_t, 2))(0x1997BD6DL, 3UL), (VECTOR(uint32_t, 2))(0x1997BD6DL, 3UL), 0x1997BD6DL, 3UL, 0x1997BD6DL, 3UL);
    VECTOR(int16_t, 4) l_111 = (VECTOR(int16_t, 4))(0x574CL, (VECTOR(int16_t, 2))(0x574CL, 0x16B9L), 0x16B9L);
    VECTOR(int16_t, 4) l_112 = (VECTOR(int16_t, 4))(0x751AL, (VECTOR(int16_t, 2))(0x751AL, (-3L)), (-3L));
    VECTOR(int8_t, 4) l_114 = (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, 0x75L), 0x75L);
    VECTOR(uint64_t, 4) l_152 = (VECTOR(uint64_t, 4))(0xC55D5BA149CD5C75L, (VECTOR(uint64_t, 2))(0xC55D5BA149CD5C75L, 18446744073709551611UL), 18446744073709551611UL);
    int32_t **l_157 = (void*)0;
    volatile uint8_t ** volatile *l_162 = &p_642->g_159[5];
    VECTOR(uint32_t, 2) l_185 = (VECTOR(uint32_t, 2))(0x237C0BC5L, 0x2F786672L);
    uint32_t l_199 = 4294967295UL;
    uint32_t l_201 = 1UL;
    int32_t l_232 = 8L;
    int32_t *l_262[6] = {&p_642->g_15,(void*)0,&p_642->g_15,&p_642->g_15,(void*)0,&p_642->g_15};
    VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))(0x2F53FA4BL, (VECTOR(int32_t, 2))(0x2F53FA4BL, 0x6F6295AFL), 0x6F6295AFL);
    int16_t l_281[5];
    int i;
    for (i = 0; i < 5; i++)
        l_281[i] = 6L;
    for (p_642->g_63 = 0; (p_642->g_63 > 46); ++p_642->g_63)
    { /* block id: 33 */
        int32_t **l_75 = (void*)0;
        int32_t **l_78[4][5][9] = {{{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77}},{{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77}},{{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77}},{{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77},{(void*)0,&p_642->g_77,&p_642->g_77,&p_642->g_77,(void*)0,&p_642->g_77,(void*)0,&p_642->g_77,&p_642->g_77}}};
        int i, j, k;
        (*p_642->g_76) = &p_642->g_3[3];
        (*p_642->g_76) = (*p_642->g_76);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_642->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 153)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_642->g_79.sc81c9d71)).s02)).even, 10))][(safe_mod_func_uint32_t_u_u(p_642->tid, 153))]));
        l_80--;
    }
    for (p_642->g_63 = (-20); (p_642->g_63 <= 16); p_642->g_63 = safe_add_func_uint8_t_u_u(p_642->g_63, 1))
    { /* block id: 43 */
        uint64_t *l_85 = &p_642->g_63;
        uint64_t *l_87 = (void*)0;
        uint64_t **l_86 = &l_87;
        uint8_t *l_91 = (void*)0;
        uint8_t *l_92[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int16_t, 2) l_113 = (VECTOR(int16_t, 2))(0x3C9AL, 0L);
        int8_t *l_120 = &p_642->g_121;
        int32_t *l_123 = &p_642->g_3[0];
        int8_t l_143 = (-8L);
        VECTOR(uint64_t, 2) l_151 = (VECTOR(uint64_t, 2))(7UL, 0xA0E6F0F138F814AEL);
        int i, j;
        (*l_123) |= ((((l_85 != ((*l_86) = &p_642->g_63)) , ((safe_mul_func_uint8_t_u_u((l_94 = (l_93 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_642->g_90.yxyzyxzyxzxzywxw)))).s8)), l_80)) <= (((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_95.sae7a)).y, (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((*l_120) &= (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(0x604081ECF37D808BL, p_642->g_61.s0)), ((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((*p_72), (safe_mod_func_uint16_t_u_u(l_80, ((+(l_95.s1 , ((VECTOR(uint32_t, 2))(4294967288UL, 0xC05F70B0L)).hi)) , ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(p_642->g_110.s43)).yyxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x50D1L, 6L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_111.ywxyyyxw)).s43)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_112.wxzz)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_113.xyyx)).ywwywzzyxwyxxxww)).sc3, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_114.zx)).xyxy)).even)).xyxxxxxxxxyyxxyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_642->g_117.zyzxyywywyxyxxzw)).s2, (safe_rshift_func_int8_t_s_s((+p_642->g_90.y), 3)))), 0UL, 0xC1L, 0xD1L)).xxzxzxwy)))).s4510211700356454))).s52))))), ((VECTOR(int16_t, 4))(0x2F2EL)))).s35, ((VECTOR(int16_t, 2))(0x30DFL)), ((VECTOR(int16_t, 2))(0x3A0EL))))).yyxy)), 0x0E88L, 9L)).s7732437744464132)).s0219))).x))))), p_642->g_79.s5)) || l_113.x)))), l_113.y)), l_114.y)), 4294967295UL, l_113.x, 0UL, p_642->g_90.z, p_642->g_110.s4, 4294967295UL, p_642->g_122, l_114.x, 0x1B028D9AL, ((VECTOR(uint32_t, 4))(4294967295UL)), 4294967291UL)).s6319, ((VECTOR(uint32_t, 4))(0xCE3922E0L)), ((VECTOR(uint32_t, 4))(1UL))))).x >= (*p_72)))) <= p_642->g_79.s0) != l_113.x);
        for (p_642->g_121 = (-25); (p_642->g_121 > (-4)); ++p_642->g_121)
        { /* block id: 51 */
            VECTOR(int32_t, 8) l_139 = (VECTOR(int32_t, 8))(0x05B67D8BL, (VECTOR(int32_t, 4))(0x05B67D8BL, (VECTOR(int32_t, 2))(0x05B67D8BL, 1L), 1L), 1L, 0x05B67D8BL, 1L);
            uint32_t *l_140[1];
            VECTOR(int64_t, 16) l_153 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), (-10L)), (-10L)), (-10L), (-3L), (-10L), (VECTOR(int64_t, 2))((-3L), (-10L)), (VECTOR(int64_t, 2))((-3L), (-10L)), (-3L), (-10L), (-3L), (-10L));
            VECTOR(uint64_t, 8) l_154 = (VECTOR(uint64_t, 8))(0x97EC7B67EAC4BFEEL, (VECTOR(uint64_t, 4))(0x97EC7B67EAC4BFEEL, (VECTOR(uint64_t, 2))(0x97EC7B67EAC4BFEEL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 0x97EC7B67EAC4BFEEL, 18446744073709551612UL);
            int32_t **l_156 = &l_123;
            int32_t ***l_155[6] = {&l_156,&l_156,&l_156,&l_156,&l_156,&l_156};
            int i;
            for (i = 0; i < 1; i++)
                l_140[i] = (void*)0;
            for (p_642->g_16 = (-5); (p_642->g_16 <= 56); ++p_642->g_16)
            { /* block id: 54 */
                if ((atomic_inc(&p_642->l_atomic_input[51]) == 0))
                { /* block id: 56 */
                    int32_t l_129[5][1] = {{0x74AAFBA0L},{0x74AAFBA0L},{0x74AAFBA0L},{0x74AAFBA0L},{0x74AAFBA0L}};
                    int32_t *l_128 = &l_129[3][0];
                    int32_t *l_130 = &l_129[0][0];
                    int32_t l_131 = (-6L);
                    VECTOR(int32_t, 4) l_132 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 8L), 8L);
                    int64_t l_133 = 0x2D627FB3206E961CL;
                    uint64_t l_134 = 0UL;
                    int i, j;
                    l_130 = l_128;
                    l_133 ^= (l_131 , ((VECTOR(int32_t, 16))(l_132.xxwzwxwzxyxwywww)).sc);
                    l_134 = 1L;
                    unsigned int result = 0;
                    int l_129_i0, l_129_i1;
                    for (l_129_i0 = 0; l_129_i0 < 5; l_129_i0++) {
                        for (l_129_i1 = 0; l_129_i1 < 1; l_129_i1++) {
                            result += l_129[l_129_i0][l_129_i1];
                        }
                    }
                    result += l_131;
                    result += l_132.w;
                    result += l_132.z;
                    result += l_132.y;
                    result += l_132.x;
                    result += l_133;
                    result += l_134;
                    atomic_add(&p_642->l_special_values[51], result);
                }
                else
                { /* block id: 60 */
                    (1 + 1);
                }
            }
            (*l_123) = (safe_lshift_func_uint16_t_u_s(0xFF2AL, (((*l_123) ^ ((l_80 >= l_139.s6) | ((p_642->g_79.s4 &= l_139.s7) > (&p_642->g_77 != (void*)0)))) >= (p_642->g_144 = ((safe_sub_func_int32_t_s_s(l_143, (l_140[0] != p_72))) != (*l_123))))));
            (*l_156) = (((p_642->g_110.s7 , &p_642->g_77) != ((((l_139.s0 || (safe_add_func_int32_t_s_s((*p_72), 0xA3A5B7F6L))) & (+(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(18446744073709551615UL, (safe_mod_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((l_93 ^= 4294967295UL), l_94)), p_642->g_63)), 1UL, 18446744073709551609UL)).xyxxxzwy)))), ((VECTOR(uint64_t, 8))(l_151.yyyxxyxy)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0x1E77F117623E6EA0L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_152.ywww)).yyxwwyxx)).s3665011406624720, ((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(abs(((VECTOR(int64_t, 8))(l_153.sd3783e0e)).hi))).even)).yxyxxyyyyyxxxyyy, ((VECTOR(uint64_t, 8))(l_154.s67104553)).s4734614734743402, ((VECTOR(uint64_t, 16))(0xB9236ECDBE248804L, (((l_157 = &p_72) == &p_642->g_77) , (**l_157)), ((VECTOR(uint64_t, 2))(0x1140AC0B4975F8E4L)), 1UL, 0x85D5F9AD4D960969L, 8UL, ((VECTOR(uint64_t, 2))(18446744073709551612UL)), ((VECTOR(uint64_t, 4))(0x8C5B517A9B7ED1FFL)), ((VECTOR(uint64_t, 2))(0x18CC6211D8635005L)), 0xDCADDED1B2F9674BL)))))))).s0168)).z, ((VECTOR(uint64_t, 2))(18446744073709551608UL)), ((VECTOR(uint64_t, 4))(0x1D6E29E21D3D7B66L)))).lo)), (**l_157), ((VECTOR(uint64_t, 8))(0x7CA1D526E17D3F7CL)), GROUP_DIVERGE(1, 1), 0xFB240BFACF2A4E10L, 0x72F1F12EC71B3094L)).odd))).s63)).odd <= 0UL))) <= (*l_123)) , &l_123)) , (*l_156));
            l_93 = (safe_unary_minus_func_int64_t_s(0x4DC079ADF89C97DBL));
        }
    }
    (*l_162) = p_642->g_159[0];
    for (l_80 = 0; (l_80 < 27); ++l_80)
    { /* block id: 76 */
        int16_t l_167[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t l_168 = 0x5C6483FAL;
        int64_t l_200 = 7L;
        int32_t l_202 = (-1L);
        int32_t l_203 = 0x10458D82L;
        VECTOR(uint8_t, 4) l_227 = (VECTOR(uint8_t, 4))(0x99L, (VECTOR(uint8_t, 2))(0x99L, 253UL), 253UL);
        uint32_t l_230 = 0xEF5F2331L;
        int32_t ***l_260 = &l_157;
        int32_t l_268 = 0x13B3B70AL;
        int32_t l_269 = (-2L);
        int32_t l_270 = 1L;
        int32_t l_271 = 0L;
        int32_t l_273 = (-1L);
        int32_t l_274[6] = {(-10L),(-1L),(-10L),(-10L),(-1L),(-10L)};
        int i;
        for (l_93 = 0; (l_93 <= 13); l_93 = safe_add_func_int16_t_s_s(l_93, 9))
        { /* block id: 79 */
            uint8_t l_179[1][2][5] = {{{255UL,0xFCL,0x7DL,0xFCL,255UL},{255UL,0xFCL,0x7DL,0xFCL,255UL}}};
            VECTOR(uint32_t, 8) l_186 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xE82150C0L), 0xE82150C0L), 0xE82150C0L, 4294967292UL, 0xE82150C0L);
            int32_t *l_206 = (void*)0;
            uint32_t *l_213 = &p_642->g_144;
            uint8_t **l_220 = (void*)0;
            uint8_t *l_222[10] = {&l_179[0][1][0],(void*)0,&l_179[0][1][0],(void*)0,&l_179[0][1][0],&l_179[0][1][0],(void*)0,&l_179[0][1][0],(void*)0,&l_179[0][1][0]};
            uint8_t **l_221 = &l_222[4];
            uint8_t **l_223 = (void*)0;
            uint8_t *l_225[2];
            uint8_t **l_224 = &l_225[0];
            VECTOR(uint8_t, 16) l_226 = (VECTOR(uint8_t, 16))(0xFEL, (VECTOR(uint8_t, 4))(0xFEL, (VECTOR(uint8_t, 2))(0xFEL, 0xB6L), 0xB6L), 0xB6L, 0xFEL, 0xB6L, (VECTOR(uint8_t, 2))(0xFEL, 0xB6L), (VECTOR(uint8_t, 2))(0xFEL, 0xB6L), 0xFEL, 0xB6L, 0xFEL, 0xB6L);
            int32_t *l_231 = &l_94;
            int32_t l_233 = 1L;
            int64_t l_234 = 0L;
            int32_t *l_235[10];
            int32_t *l_236 = &l_203;
            int32_t l_275 = (-1L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_225[i] = &l_179[0][1][0];
            for (i = 0; i < 10; i++)
                l_235[i] = &p_642->g_3[3];
            l_168 ^= (l_167[4] ^= (*p_72));
            for (l_94 = 25; (l_94 > (-27)); l_94 = safe_sub_func_uint32_t_u_u(l_94, 6))
            { /* block id: 84 */
                uint64_t *l_182[1];
                VECTOR(uint64_t, 2) l_184 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5AF4611E251C85CDL);
                uint64_t *l_196 = (void*)0;
                uint64_t *l_197 = (void*)0;
                uint64_t *l_198[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 1; i++)
                    l_182[i] = &p_642->g_63;
                for (p_642->g_144 = 0; (p_642->g_144 < 2); p_642->g_144 = safe_add_func_int64_t_s_s(p_642->g_144, 1))
                { /* block id: 87 */
                    return (*p_72);
                }
                l_203 |= (l_202 = (safe_mul_func_int16_t_s_s(p_642->g_117.x, (safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(l_179[0][1][0], ((p_642->g_38.s0 | (safe_mod_func_uint32_t_u_u((((((void*)0 != l_182[0]) <= (((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(p_642->g_183.s06062676)).hi, ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(l_184.yy)).xxyyxxxxxxyyxxyx, ((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))(l_185.xyyxyxyx)).s1114704355630061, ((VECTOR(uint32_t, 4))(l_186.s6661)).zxwyzzyxyyzzzyww)))))).s94)), 1UL, 0xEE84A3AFCE4FDF00L)), ((VECTOR(uint64_t, 4))(0x94BFEC47B7A4D682L, 18446744073709551609UL, 18446744073709551609UL, 0xEB4B7A3AED3EF12DL))))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(0x8E7A130ACF16FAF0L, 0xE50D722C878C84C8L)).yxyxxxyy))))).odd))).x | (safe_mul_func_uint8_t_u_u((p_642->g_90.z |= (~((((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))((l_184.y & ((l_168 = ((6UL && (safe_unary_minus_func_uint64_t_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_642->g_3[3], 1)) && ((~((safe_rshift_func_int8_t_s_s((((l_184.y && 1UL) >= l_168) || FAKE_DIVERGE(p_642->global_0_offset, get_global_id(0), 10)), 2)) ^ GROUP_DIVERGE(1, 1))) ^ 1L)), l_184.x))))) || l_179[0][1][0])) != l_186.s7)), l_199, 0x5B32L, 0x31F7L, l_179[0][1][0], (-4L), p_642->g_61.s6, ((VECTOR(int16_t, 2))(0x7B67L)), 0x3DCFL, (-6L), ((VECTOR(int16_t, 4))(1L)), 0x63CEL)).sdb52, ((VECTOR(int16_t, 4))(0x15B9L))))).x < p_642->g_63) && (-10L)))), p_642->g_110.s0)))) != 0x3C35L) , 4294967292UL), l_200))) , l_184.y))) == 0x69B0L), l_201)))));
            }
            if ((l_168 = ((((((safe_mul_func_uint16_t_u_u(p_642->g_117.w, ((((void*)0 == l_206) > (safe_unary_minus_func_int8_t_s(((((VECTOR(uint8_t, 4))(p_642->g_208.xxyx)).z < ((void*)0 == &l_206)) > ((((safe_mul_func_int8_t_s_s(((((((safe_mod_func_int8_t_s_s(((((*l_213) |= l_168) || ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((safe_add_func_int8_t_s_s((p_642->g_160 == ((*l_224) = ((*l_221) = (void*)0))), ((VECTOR(uint8_t, 16))(0xE1L, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_226.sdd)).xyxy, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 8))(l_227.wwzwxzyy)).s23, ((VECTOR(uint8_t, 2))(p_642->g_228.yx))))), ((VECTOR(uint8_t, 4))(p_642->g_229.se292)).odd))).yyxyyxxx, ((VECTOR(uint8_t, 4))(0x10L, (((VECTOR(uint64_t, 16))(((((*l_231) = (l_230 <= p_642->g_16)) , p_642->g_38.s3) <= (*p_72)), ((VECTOR(uint64_t, 4))(1UL)), l_227.x, ((VECTOR(uint64_t, 4))(0xF8841FB543D22430L)), FAKE_DIVERGE(p_642->group_1_offset, get_group_id(1), 10), l_232, 1UL, ((VECTOR(uint64_t, 2))(1UL)), 0x41CB1931DE071CABL)).s4 != 0x343DD389AC96B20FL), 0x7EL, 8UL)).zxzzxwxy))).hi, ((VECTOR(uint8_t, 4))(1UL))))), 3UL, l_201, ((VECTOR(uint8_t, 8))(5UL)), 0xD8L)).s6)), ((VECTOR(int16_t, 2))(0x2E97L)), (-1L))).wywxxxyxwzwwzwwx)).hi)).s3, 9)), l_233)) , 4294967289UL)) == 0UL), 5L)) || 0x443893D3L) ^ l_179[0][1][3]) <= l_168) || p_642->g_61.s0) != 0xF4L), 0x6AL)) == 0x58A4AC17L) , p_642->g_121) >= l_227.z))))) , l_234))) > 0x4DD6817D36292349L) || 0x5D77L) & p_642->g_79.s4) | 0x8A1B20B8C973A812L) > p_642->g_110.s3)))
            { /* block id: 100 */
                l_236 = p_72;
                if ((*p_72))
                    continue;
                if ((*l_236))
                    break;
            }
            else
            { /* block id: 104 */
                VECTOR(int16_t, 8) l_245 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0F47L), 0x0F47L), 0x0F47L, (-1L), 0x0F47L);
                int32_t ***l_250 = &l_157;
                int8_t *l_255 = &p_642->g_121;
                int8_t **l_254 = &l_255;
                int8_t *l_261 = &p_642->g_121;
                int i;
                if (l_200)
                    break;
                if ((*p_72))
                    break;
                l_262[3] = ((safe_div_func_uint32_t_u_u((((*l_261) = (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x6B1DL, ((VECTOR(int16_t, 2))(0L, 0x74F3L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 2))(p_642->g_243.xx)).yyxx, ((VECTOR(int16_t, 4))(p_642->g_244.yyxx))))).xwywyzyw)), (-1L), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(0x2920L, (-2L))), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(l_245.s21033375)), ((VECTOR(int16_t, 4))((((safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(p_642->g_79.s8, (((*p_642->g_76) != &p_642->g_15) <= 0x4EFAL))) < ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(((l_250 == (((((p_642->l_comm_values[(safe_mod_func_uint32_t_u_u(p_642->tid, 153))] != (((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_642->group_1_offset, get_group_id(1), 10) , (((~(((*l_254) = (p_642->g_253[4] = (void*)0)) == (void*)0)) > (l_168 ^= (~((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_642->global_1_offset, get_global_id(1), 10), (0x655BC204L ^ FAKE_DIVERGE(p_642->group_2_offset, get_group_id(2), 10)))) != p_642->g_12)))) == l_167[7])), 0x6AA6L)) != p_642->g_228.x) & l_227.w)) || FAKE_DIVERGE(p_642->global_2_offset, get_global_id(2), 10)) , p_642->g_258) != p_642->g_258) , l_260)) , l_245.s5), 0x8ABE574FL, 1UL, 0xDBE8BD68L)).xwxywzxwxwwyyzzz, ((VECTOR(uint32_t, 16))(0xD71BC48CL))))).sfe87)).y), l_111.z)) && p_642->g_15) ^ 0xFEL), ((VECTOR(int16_t, 2))(0x42CDL)), (-1L))).xxwzwxzx))).s06, ((VECTOR(int16_t, 2))((-1L)))))), 0x4408L, 0x0FFDL)).scb38)).y < p_642->g_16) & p_642->g_15) >= 0xE7L) <= p_642->g_208.x) == p_642->g_15), 0x15L)), p_642->g_228.x))) || (*p_642->g_160)), (-1L))) , &l_233);
            }
            for (p_642->g_63 = (-19); (p_642->g_63 < 41); p_642->g_63++)
            { /* block id: 115 */
                int32_t l_265 = 0x1521E2DDL;
                int32_t l_266 = 0x45CE31C4L;
                VECTOR(int64_t, 2) l_267 = (VECTOR(int64_t, 2))(0L, 0x10B18ADAF65EDA58L);
                int32_t l_272[7][7][1] = {{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}},{{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L},{0x34F66C18L}}};
                int32_t l_276 = (-5L);
                int i, j, k;
                p_642->g_277--;
            }
        }
        l_274[3] = ((VECTOR(int32_t, 16))(l_280.xwxxwxxyzwyyzywx)).s7;
    }
    return l_281[1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[153];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 153; i++)
            l_comm_values[i] = 1;
    struct S0 c_643;
    struct S0* p_642 = &c_643;
    struct S0 c_644 = {
        {(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_642->g_3
        0x0D8AF8716B5B3847L, // p_642->g_12
        (void*)0, // p_642->g_13
        0x5B2B058EL, // p_642->g_15
        0x2AE8L, // p_642->g_16
        (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-3L)), (-3L)), (-3L), 5L, (-3L)), // p_642->g_38
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL), // p_642->g_61
        18446744073709551615UL, // p_642->g_63
        (void*)0, // p_642->g_77
        &p_642->g_77, // p_642->g_76
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 4294967293UL), 4294967293UL, 1UL, 4294967293UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 1UL, 4294967293UL, 1UL, 4294967293UL), // p_642->g_79
        (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 0x3CL), 0x3CL), // p_642->g_90
        (VECTOR(int16_t, 8))(0x4088L, (VECTOR(int16_t, 4))(0x4088L, (VECTOR(int16_t, 2))(0x4088L, 0x5611L), 0x5611L), 0x5611L, 0x4088L, 0x5611L), // p_642->g_110
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x7063L), 0x7063L), // p_642->g_117
        9L, // p_642->g_121
        (-9L), // p_642->g_122
        0xCC7AA637L, // p_642->g_144
        {{0x2DL,0x2DL,0x2DL,0x2DL},{0x2DL,0x2DL,0x2DL,0x2DL},{0x2DL,0x2DL,0x2DL,0x2DL}}, // p_642->g_161
        &p_642->g_161[0][2], // p_642->g_160
        {&p_642->g_160,&p_642->g_160,&p_642->g_160,&p_642->g_160,&p_642->g_160,&p_642->g_160}, // p_642->g_159
        (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0xD46ABB7C243BE05CL), 0xD46ABB7C243BE05CL), 0xD46ABB7C243BE05CL, 18446744073709551610UL, 0xD46ABB7C243BE05CL), // p_642->g_183
        (VECTOR(uint8_t, 2))(6UL, 255UL), // p_642->g_208
        (VECTOR(uint8_t, 2))(0x4FL, 1UL), // p_642->g_228
        (VECTOR(uint8_t, 16))(0x83L, (VECTOR(uint8_t, 4))(0x83L, (VECTOR(uint8_t, 2))(0x83L, 0UL), 0UL), 0UL, 0x83L, 0UL, (VECTOR(uint8_t, 2))(0x83L, 0UL), (VECTOR(uint8_t, 2))(0x83L, 0UL), 0x83L, 0UL, 0x83L, 0UL), // p_642->g_229
        (VECTOR(int16_t, 4))(0x792AL, (VECTOR(int16_t, 2))(0x792AL, 0x242DL), 0x242DL), // p_642->g_243
        (VECTOR(int16_t, 2))((-9L), 0x5673L), // p_642->g_244
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_642->g_253
        {18446744073709551613UL,0x96855F1F0AA9D284L,18446744073709551613UL,18446744073709551613UL,0x96855F1F0AA9D284L,18446744073709551613UL,18446744073709551613UL}, // p_642->g_259
        &p_642->g_259[4], // p_642->g_258
        0x8D60L, // p_642->g_277
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 65535UL), 65535UL), 65535UL, 65530UL, 65535UL, (VECTOR(uint16_t, 2))(65530UL, 65535UL), (VECTOR(uint16_t, 2))(65530UL, 65535UL), 65530UL, 65535UL, 65530UL, 65535UL), // p_642->g_304
        &p_642->g_77, // p_642->g_308
        0x07L, // p_642->g_338
        &p_642->g_253[5], // p_642->g_357
        &p_642->g_357, // p_642->g_356
        (void*)0, // p_642->g_419
        (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 248UL), 248UL), // p_642->g_430
        (VECTOR(uint8_t, 2))(0x0EL, 0x6EL), // p_642->g_432
        (VECTOR(uint8_t, 8))(0x77L, (VECTOR(uint8_t, 4))(0x77L, (VECTOR(uint8_t, 2))(0x77L, 0xA0L), 0xA0L), 0xA0L, 0x77L, 0xA0L), // p_642->g_433
        (VECTOR(uint8_t, 2))(0x95L, 252UL), // p_642->g_435
        (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 252UL), 252UL), 252UL, 251UL, 252UL, (VECTOR(uint8_t, 2))(251UL, 252UL), (VECTOR(uint8_t, 2))(251UL, 252UL), 251UL, 252UL, 251UL, 252UL), // p_642->g_438
        (VECTOR(int16_t, 8))(0x7160L, (VECTOR(int16_t, 4))(0x7160L, (VECTOR(int16_t, 2))(0x7160L, 8L), 8L), 8L, 0x7160L, 8L), // p_642->g_442
        &p_642->g_77, // p_642->g_459
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_642->g_464
        (void*)0, // p_642->g_488
        {{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL},{0x03L,1UL}}, // p_642->g_499
        (VECTOR(uint16_t, 2))(3UL, 0x4390L), // p_642->g_539
        (VECTOR(int64_t, 4))(0x45F43943D4FB7C6DL, (VECTOR(int64_t, 2))(0x45F43943D4FB7C6DL, 0x58E41C5EAD42964FL), 0x58E41C5EAD42964FL), // p_642->g_571
        (VECTOR(int8_t, 2))(0x6FL, 0x03L), // p_642->g_609
        (-5L), // p_642->g_619
        0x7A9EE6C1D983D743L, // p_642->g_621
        0, // p_642->v_collective
        sequence_input[get_global_id(0)], // p_642->global_0_offset
        sequence_input[get_global_id(1)], // p_642->global_1_offset
        sequence_input[get_global_id(2)], // p_642->global_2_offset
        sequence_input[get_local_id(0)], // p_642->local_0_offset
        sequence_input[get_local_id(1)], // p_642->local_1_offset
        sequence_input[get_local_id(2)], // p_642->local_2_offset
        sequence_input[get_group_id(0)], // p_642->group_0_offset
        sequence_input[get_group_id(1)], // p_642->group_1_offset
        sequence_input[get_group_id(2)], // p_642->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 153)), permutations[0][get_linear_local_id()])), // p_642->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_643 = c_644;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_642);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_642->g_3[i], "p_642->g_3[i]", print_hash_value);

    }
    transparent_crc(p_642->g_12, "p_642->g_12", print_hash_value);
    transparent_crc(p_642->g_15, "p_642->g_15", print_hash_value);
    transparent_crc(p_642->g_16, "p_642->g_16", print_hash_value);
    transparent_crc(p_642->g_38.s0, "p_642->g_38.s0", print_hash_value);
    transparent_crc(p_642->g_38.s1, "p_642->g_38.s1", print_hash_value);
    transparent_crc(p_642->g_38.s2, "p_642->g_38.s2", print_hash_value);
    transparent_crc(p_642->g_38.s3, "p_642->g_38.s3", print_hash_value);
    transparent_crc(p_642->g_38.s4, "p_642->g_38.s4", print_hash_value);
    transparent_crc(p_642->g_38.s5, "p_642->g_38.s5", print_hash_value);
    transparent_crc(p_642->g_38.s6, "p_642->g_38.s6", print_hash_value);
    transparent_crc(p_642->g_38.s7, "p_642->g_38.s7", print_hash_value);
    transparent_crc(p_642->g_61.s0, "p_642->g_61.s0", print_hash_value);
    transparent_crc(p_642->g_61.s1, "p_642->g_61.s1", print_hash_value);
    transparent_crc(p_642->g_61.s2, "p_642->g_61.s2", print_hash_value);
    transparent_crc(p_642->g_61.s3, "p_642->g_61.s3", print_hash_value);
    transparent_crc(p_642->g_61.s4, "p_642->g_61.s4", print_hash_value);
    transparent_crc(p_642->g_61.s5, "p_642->g_61.s5", print_hash_value);
    transparent_crc(p_642->g_61.s6, "p_642->g_61.s6", print_hash_value);
    transparent_crc(p_642->g_61.s7, "p_642->g_61.s7", print_hash_value);
    transparent_crc(p_642->g_61.s8, "p_642->g_61.s8", print_hash_value);
    transparent_crc(p_642->g_61.s9, "p_642->g_61.s9", print_hash_value);
    transparent_crc(p_642->g_61.sa, "p_642->g_61.sa", print_hash_value);
    transparent_crc(p_642->g_61.sb, "p_642->g_61.sb", print_hash_value);
    transparent_crc(p_642->g_61.sc, "p_642->g_61.sc", print_hash_value);
    transparent_crc(p_642->g_61.sd, "p_642->g_61.sd", print_hash_value);
    transparent_crc(p_642->g_61.se, "p_642->g_61.se", print_hash_value);
    transparent_crc(p_642->g_61.sf, "p_642->g_61.sf", print_hash_value);
    transparent_crc(p_642->g_63, "p_642->g_63", print_hash_value);
    transparent_crc(p_642->g_79.s0, "p_642->g_79.s0", print_hash_value);
    transparent_crc(p_642->g_79.s1, "p_642->g_79.s1", print_hash_value);
    transparent_crc(p_642->g_79.s2, "p_642->g_79.s2", print_hash_value);
    transparent_crc(p_642->g_79.s3, "p_642->g_79.s3", print_hash_value);
    transparent_crc(p_642->g_79.s4, "p_642->g_79.s4", print_hash_value);
    transparent_crc(p_642->g_79.s5, "p_642->g_79.s5", print_hash_value);
    transparent_crc(p_642->g_79.s6, "p_642->g_79.s6", print_hash_value);
    transparent_crc(p_642->g_79.s7, "p_642->g_79.s7", print_hash_value);
    transparent_crc(p_642->g_79.s8, "p_642->g_79.s8", print_hash_value);
    transparent_crc(p_642->g_79.s9, "p_642->g_79.s9", print_hash_value);
    transparent_crc(p_642->g_79.sa, "p_642->g_79.sa", print_hash_value);
    transparent_crc(p_642->g_79.sb, "p_642->g_79.sb", print_hash_value);
    transparent_crc(p_642->g_79.sc, "p_642->g_79.sc", print_hash_value);
    transparent_crc(p_642->g_79.sd, "p_642->g_79.sd", print_hash_value);
    transparent_crc(p_642->g_79.se, "p_642->g_79.se", print_hash_value);
    transparent_crc(p_642->g_79.sf, "p_642->g_79.sf", print_hash_value);
    transparent_crc(p_642->g_90.x, "p_642->g_90.x", print_hash_value);
    transparent_crc(p_642->g_90.y, "p_642->g_90.y", print_hash_value);
    transparent_crc(p_642->g_90.z, "p_642->g_90.z", print_hash_value);
    transparent_crc(p_642->g_90.w, "p_642->g_90.w", print_hash_value);
    transparent_crc(p_642->g_110.s0, "p_642->g_110.s0", print_hash_value);
    transparent_crc(p_642->g_110.s1, "p_642->g_110.s1", print_hash_value);
    transparent_crc(p_642->g_110.s2, "p_642->g_110.s2", print_hash_value);
    transparent_crc(p_642->g_110.s3, "p_642->g_110.s3", print_hash_value);
    transparent_crc(p_642->g_110.s4, "p_642->g_110.s4", print_hash_value);
    transparent_crc(p_642->g_110.s5, "p_642->g_110.s5", print_hash_value);
    transparent_crc(p_642->g_110.s6, "p_642->g_110.s6", print_hash_value);
    transparent_crc(p_642->g_110.s7, "p_642->g_110.s7", print_hash_value);
    transparent_crc(p_642->g_117.x, "p_642->g_117.x", print_hash_value);
    transparent_crc(p_642->g_117.y, "p_642->g_117.y", print_hash_value);
    transparent_crc(p_642->g_117.z, "p_642->g_117.z", print_hash_value);
    transparent_crc(p_642->g_117.w, "p_642->g_117.w", print_hash_value);
    transparent_crc(p_642->g_121, "p_642->g_121", print_hash_value);
    transparent_crc(p_642->g_122, "p_642->g_122", print_hash_value);
    transparent_crc(p_642->g_144, "p_642->g_144", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_642->g_161[i][j], "p_642->g_161[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_642->g_183.s0, "p_642->g_183.s0", print_hash_value);
    transparent_crc(p_642->g_183.s1, "p_642->g_183.s1", print_hash_value);
    transparent_crc(p_642->g_183.s2, "p_642->g_183.s2", print_hash_value);
    transparent_crc(p_642->g_183.s3, "p_642->g_183.s3", print_hash_value);
    transparent_crc(p_642->g_183.s4, "p_642->g_183.s4", print_hash_value);
    transparent_crc(p_642->g_183.s5, "p_642->g_183.s5", print_hash_value);
    transparent_crc(p_642->g_183.s6, "p_642->g_183.s6", print_hash_value);
    transparent_crc(p_642->g_183.s7, "p_642->g_183.s7", print_hash_value);
    transparent_crc(p_642->g_208.x, "p_642->g_208.x", print_hash_value);
    transparent_crc(p_642->g_208.y, "p_642->g_208.y", print_hash_value);
    transparent_crc(p_642->g_228.x, "p_642->g_228.x", print_hash_value);
    transparent_crc(p_642->g_228.y, "p_642->g_228.y", print_hash_value);
    transparent_crc(p_642->g_229.s0, "p_642->g_229.s0", print_hash_value);
    transparent_crc(p_642->g_229.s1, "p_642->g_229.s1", print_hash_value);
    transparent_crc(p_642->g_229.s2, "p_642->g_229.s2", print_hash_value);
    transparent_crc(p_642->g_229.s3, "p_642->g_229.s3", print_hash_value);
    transparent_crc(p_642->g_229.s4, "p_642->g_229.s4", print_hash_value);
    transparent_crc(p_642->g_229.s5, "p_642->g_229.s5", print_hash_value);
    transparent_crc(p_642->g_229.s6, "p_642->g_229.s6", print_hash_value);
    transparent_crc(p_642->g_229.s7, "p_642->g_229.s7", print_hash_value);
    transparent_crc(p_642->g_229.s8, "p_642->g_229.s8", print_hash_value);
    transparent_crc(p_642->g_229.s9, "p_642->g_229.s9", print_hash_value);
    transparent_crc(p_642->g_229.sa, "p_642->g_229.sa", print_hash_value);
    transparent_crc(p_642->g_229.sb, "p_642->g_229.sb", print_hash_value);
    transparent_crc(p_642->g_229.sc, "p_642->g_229.sc", print_hash_value);
    transparent_crc(p_642->g_229.sd, "p_642->g_229.sd", print_hash_value);
    transparent_crc(p_642->g_229.se, "p_642->g_229.se", print_hash_value);
    transparent_crc(p_642->g_229.sf, "p_642->g_229.sf", print_hash_value);
    transparent_crc(p_642->g_243.x, "p_642->g_243.x", print_hash_value);
    transparent_crc(p_642->g_243.y, "p_642->g_243.y", print_hash_value);
    transparent_crc(p_642->g_243.z, "p_642->g_243.z", print_hash_value);
    transparent_crc(p_642->g_243.w, "p_642->g_243.w", print_hash_value);
    transparent_crc(p_642->g_244.x, "p_642->g_244.x", print_hash_value);
    transparent_crc(p_642->g_244.y, "p_642->g_244.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_642->g_259[i], "p_642->g_259[i]", print_hash_value);

    }
    transparent_crc(p_642->g_277, "p_642->g_277", print_hash_value);
    transparent_crc(p_642->g_304.s0, "p_642->g_304.s0", print_hash_value);
    transparent_crc(p_642->g_304.s1, "p_642->g_304.s1", print_hash_value);
    transparent_crc(p_642->g_304.s2, "p_642->g_304.s2", print_hash_value);
    transparent_crc(p_642->g_304.s3, "p_642->g_304.s3", print_hash_value);
    transparent_crc(p_642->g_304.s4, "p_642->g_304.s4", print_hash_value);
    transparent_crc(p_642->g_304.s5, "p_642->g_304.s5", print_hash_value);
    transparent_crc(p_642->g_304.s6, "p_642->g_304.s6", print_hash_value);
    transparent_crc(p_642->g_304.s7, "p_642->g_304.s7", print_hash_value);
    transparent_crc(p_642->g_304.s8, "p_642->g_304.s8", print_hash_value);
    transparent_crc(p_642->g_304.s9, "p_642->g_304.s9", print_hash_value);
    transparent_crc(p_642->g_304.sa, "p_642->g_304.sa", print_hash_value);
    transparent_crc(p_642->g_304.sb, "p_642->g_304.sb", print_hash_value);
    transparent_crc(p_642->g_304.sc, "p_642->g_304.sc", print_hash_value);
    transparent_crc(p_642->g_304.sd, "p_642->g_304.sd", print_hash_value);
    transparent_crc(p_642->g_304.se, "p_642->g_304.se", print_hash_value);
    transparent_crc(p_642->g_304.sf, "p_642->g_304.sf", print_hash_value);
    transparent_crc(p_642->g_338, "p_642->g_338", print_hash_value);
    transparent_crc(p_642->g_430.x, "p_642->g_430.x", print_hash_value);
    transparent_crc(p_642->g_430.y, "p_642->g_430.y", print_hash_value);
    transparent_crc(p_642->g_430.z, "p_642->g_430.z", print_hash_value);
    transparent_crc(p_642->g_430.w, "p_642->g_430.w", print_hash_value);
    transparent_crc(p_642->g_432.x, "p_642->g_432.x", print_hash_value);
    transparent_crc(p_642->g_432.y, "p_642->g_432.y", print_hash_value);
    transparent_crc(p_642->g_433.s0, "p_642->g_433.s0", print_hash_value);
    transparent_crc(p_642->g_433.s1, "p_642->g_433.s1", print_hash_value);
    transparent_crc(p_642->g_433.s2, "p_642->g_433.s2", print_hash_value);
    transparent_crc(p_642->g_433.s3, "p_642->g_433.s3", print_hash_value);
    transparent_crc(p_642->g_433.s4, "p_642->g_433.s4", print_hash_value);
    transparent_crc(p_642->g_433.s5, "p_642->g_433.s5", print_hash_value);
    transparent_crc(p_642->g_433.s6, "p_642->g_433.s6", print_hash_value);
    transparent_crc(p_642->g_433.s7, "p_642->g_433.s7", print_hash_value);
    transparent_crc(p_642->g_435.x, "p_642->g_435.x", print_hash_value);
    transparent_crc(p_642->g_435.y, "p_642->g_435.y", print_hash_value);
    transparent_crc(p_642->g_438.s0, "p_642->g_438.s0", print_hash_value);
    transparent_crc(p_642->g_438.s1, "p_642->g_438.s1", print_hash_value);
    transparent_crc(p_642->g_438.s2, "p_642->g_438.s2", print_hash_value);
    transparent_crc(p_642->g_438.s3, "p_642->g_438.s3", print_hash_value);
    transparent_crc(p_642->g_438.s4, "p_642->g_438.s4", print_hash_value);
    transparent_crc(p_642->g_438.s5, "p_642->g_438.s5", print_hash_value);
    transparent_crc(p_642->g_438.s6, "p_642->g_438.s6", print_hash_value);
    transparent_crc(p_642->g_438.s7, "p_642->g_438.s7", print_hash_value);
    transparent_crc(p_642->g_438.s8, "p_642->g_438.s8", print_hash_value);
    transparent_crc(p_642->g_438.s9, "p_642->g_438.s9", print_hash_value);
    transparent_crc(p_642->g_438.sa, "p_642->g_438.sa", print_hash_value);
    transparent_crc(p_642->g_438.sb, "p_642->g_438.sb", print_hash_value);
    transparent_crc(p_642->g_438.sc, "p_642->g_438.sc", print_hash_value);
    transparent_crc(p_642->g_438.sd, "p_642->g_438.sd", print_hash_value);
    transparent_crc(p_642->g_438.se, "p_642->g_438.se", print_hash_value);
    transparent_crc(p_642->g_438.sf, "p_642->g_438.sf", print_hash_value);
    transparent_crc(p_642->g_442.s0, "p_642->g_442.s0", print_hash_value);
    transparent_crc(p_642->g_442.s1, "p_642->g_442.s1", print_hash_value);
    transparent_crc(p_642->g_442.s2, "p_642->g_442.s2", print_hash_value);
    transparent_crc(p_642->g_442.s3, "p_642->g_442.s3", print_hash_value);
    transparent_crc(p_642->g_442.s4, "p_642->g_442.s4", print_hash_value);
    transparent_crc(p_642->g_442.s5, "p_642->g_442.s5", print_hash_value);
    transparent_crc(p_642->g_442.s6, "p_642->g_442.s6", print_hash_value);
    transparent_crc(p_642->g_442.s7, "p_642->g_442.s7", print_hash_value);
    transparent_crc(p_642->g_464.s0, "p_642->g_464.s0", print_hash_value);
    transparent_crc(p_642->g_464.s1, "p_642->g_464.s1", print_hash_value);
    transparent_crc(p_642->g_464.s2, "p_642->g_464.s2", print_hash_value);
    transparent_crc(p_642->g_464.s3, "p_642->g_464.s3", print_hash_value);
    transparent_crc(p_642->g_464.s4, "p_642->g_464.s4", print_hash_value);
    transparent_crc(p_642->g_464.s5, "p_642->g_464.s5", print_hash_value);
    transparent_crc(p_642->g_464.s6, "p_642->g_464.s6", print_hash_value);
    transparent_crc(p_642->g_464.s7, "p_642->g_464.s7", print_hash_value);
    transparent_crc(p_642->g_464.s8, "p_642->g_464.s8", print_hash_value);
    transparent_crc(p_642->g_464.s9, "p_642->g_464.s9", print_hash_value);
    transparent_crc(p_642->g_464.sa, "p_642->g_464.sa", print_hash_value);
    transparent_crc(p_642->g_464.sb, "p_642->g_464.sb", print_hash_value);
    transparent_crc(p_642->g_464.sc, "p_642->g_464.sc", print_hash_value);
    transparent_crc(p_642->g_464.sd, "p_642->g_464.sd", print_hash_value);
    transparent_crc(p_642->g_464.se, "p_642->g_464.se", print_hash_value);
    transparent_crc(p_642->g_464.sf, "p_642->g_464.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_642->g_499[i][j], "p_642->g_499[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_642->g_539.x, "p_642->g_539.x", print_hash_value);
    transparent_crc(p_642->g_539.y, "p_642->g_539.y", print_hash_value);
    transparent_crc(p_642->g_571.x, "p_642->g_571.x", print_hash_value);
    transparent_crc(p_642->g_571.y, "p_642->g_571.y", print_hash_value);
    transparent_crc(p_642->g_571.z, "p_642->g_571.z", print_hash_value);
    transparent_crc(p_642->g_571.w, "p_642->g_571.w", print_hash_value);
    transparent_crc(p_642->g_609.x, "p_642->g_609.x", print_hash_value);
    transparent_crc(p_642->g_609.y, "p_642->g_609.y", print_hash_value);
    transparent_crc(p_642->g_619, "p_642->g_619", print_hash_value);
    transparent_crc(p_642->g_621, "p_642->g_621", print_hash_value);
    transparent_crc(p_642->v_collective, "p_642->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 55; i++)
            transparent_crc(p_642->g_special_values[i + 55 * get_linear_group_id()], "p_642->g_special_values[i + 55 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 55; i++)
            transparent_crc(p_642->l_special_values[i], "p_642->l_special_values[i]", print_hash_value);
    transparent_crc(p_642->l_comm_values[get_linear_local_id()], "p_642->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_642->g_comm_values[get_linear_group_id() * 153 + get_linear_local_id()], "p_642->g_comm_values[get_linear_group_id() * 153 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
