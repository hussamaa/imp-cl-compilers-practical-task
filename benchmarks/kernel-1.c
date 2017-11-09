// --atomics 74 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 69,63,1 -l 23,7,1
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

__constant uint32_t permutations[10][161] = {
{134,75,139,112,125,150,157,69,152,6,94,153,32,136,149,59,114,31,52,58,135,111,160,93,98,27,113,22,82,137,79,29,12,118,64,70,33,88,154,28,61,108,95,90,120,46,131,19,87,99,72,126,10,51,129,16,13,39,128,17,92,96,43,35,23,25,133,156,4,77,122,9,138,100,55,47,50,7,124,21,24,56,144,76,102,110,80,109,45,67,104,130,115,132,106,60,66,37,140,74,44,15,8,127,65,81,141,123,107,57,155,85,73,97,63,116,68,2,146,26,36,3,42,40,159,83,117,18,142,101,14,48,11,38,105,103,54,41,34,0,71,20,5,147,84,121,78,53,158,151,49,1,62,148,86,119,30,89,143,145,91}, // permutation 0
{18,116,72,136,5,138,122,64,27,28,9,98,39,60,36,30,48,128,152,104,115,13,17,68,53,123,1,6,80,42,132,142,65,100,135,117,105,110,0,50,21,24,73,56,156,4,130,148,74,67,10,43,47,94,97,66,19,71,25,149,125,154,119,3,31,151,92,49,57,106,20,140,145,107,82,126,111,58,37,112,15,63,129,70,93,155,118,85,96,51,103,61,55,88,46,144,159,32,34,29,44,143,131,77,120,89,147,83,12,11,133,35,150,139,102,26,137,7,134,52,87,33,158,76,75,40,16,81,90,127,141,22,124,78,59,113,41,79,23,45,160,109,108,95,62,69,157,84,54,38,146,86,153,8,2,91,114,121,99,101,14}, // permutation 1
{148,88,8,58,42,140,24,31,107,102,150,100,62,113,10,19,84,103,80,98,32,92,99,4,6,126,39,94,47,60,115,33,110,95,67,121,132,116,78,147,85,9,30,23,101,127,13,114,158,144,35,123,36,26,83,20,45,52,141,53,117,131,119,90,77,106,111,3,133,109,65,66,112,75,76,157,68,120,71,159,37,70,5,0,12,81,129,41,153,154,51,128,93,21,136,43,63,38,124,87,146,151,160,34,44,79,56,46,108,14,15,142,149,40,1,57,25,2,59,86,122,145,55,105,49,143,50,27,69,152,28,48,64,130,29,61,125,22,138,73,82,72,156,16,89,18,104,155,7,134,96,11,139,97,17,135,118,74,54,137,91}, // permutation 2
{65,71,86,141,36,27,45,75,47,144,99,51,63,28,24,155,93,61,123,128,58,119,34,31,132,76,139,5,121,149,20,1,4,90,117,53,130,12,108,127,68,158,64,38,6,9,94,131,116,83,91,102,87,160,35,96,135,32,70,105,115,57,106,54,73,37,66,3,101,22,43,140,77,0,26,84,39,30,59,89,146,60,134,74,50,95,25,23,18,42,56,14,110,122,138,143,125,153,150,124,40,98,72,10,17,81,126,142,80,79,7,13,21,85,152,19,118,148,15,88,145,154,109,8,46,67,11,78,133,112,147,49,48,55,114,44,113,41,156,157,82,97,100,62,52,111,69,120,16,129,151,103,92,33,159,29,104,136,137,2,107}, // permutation 3
{127,143,2,50,34,134,62,89,46,132,19,72,99,13,119,40,160,75,39,6,141,42,58,57,104,16,48,1,146,82,3,159,22,37,25,36,94,122,140,120,139,15,117,96,106,152,136,148,44,125,92,41,144,83,53,18,105,49,52,38,65,113,88,103,7,151,29,130,112,21,78,131,63,54,102,79,126,157,74,118,93,23,33,85,61,69,81,66,111,77,108,17,11,97,90,0,150,60,128,26,24,145,12,43,30,109,87,100,142,14,121,115,32,76,55,135,59,153,71,67,147,70,95,35,8,149,4,80,64,68,51,107,20,101,116,56,158,5,129,28,154,84,137,114,123,45,27,73,10,138,155,124,86,110,98,91,156,9,133,47,31}, // permutation 4
{11,87,68,156,28,82,14,60,108,12,63,76,20,62,98,110,138,36,126,40,113,59,5,52,102,34,54,120,30,46,64,83,141,118,73,158,149,104,145,123,129,127,3,31,47,142,89,132,130,134,56,45,24,144,101,147,51,116,135,146,44,81,150,53,148,88,93,57,119,86,42,74,90,41,18,109,106,121,114,27,125,35,91,7,26,15,19,38,103,71,117,55,92,111,67,58,85,139,107,9,128,136,155,97,80,37,160,157,4,21,78,50,112,61,29,43,49,2,1,105,152,137,153,100,122,77,84,66,6,115,32,99,13,48,79,133,159,8,39,143,124,140,17,65,10,151,154,25,22,95,94,72,70,96,16,0,69,131,33,23,75}, // permutation 5
{56,146,114,61,91,87,38,28,108,141,2,95,81,110,126,21,55,94,119,139,65,149,140,66,80,147,64,51,15,125,101,8,97,75,48,143,77,23,49,16,26,137,41,67,106,153,156,62,1,129,31,46,78,37,43,42,10,99,136,18,115,29,120,83,145,85,36,47,102,53,44,11,158,60,73,86,12,45,24,93,3,121,71,40,117,96,98,19,134,127,159,59,90,155,5,157,104,151,34,30,112,128,84,144,7,107,76,148,109,25,9,14,63,50,142,52,57,58,6,92,116,22,154,113,68,74,138,70,82,133,122,35,17,72,130,132,152,4,13,39,32,33,89,124,105,100,0,88,79,20,118,123,160,131,103,150,27,135,111,54,69}, // permutation 6
{51,107,10,67,9,126,153,32,138,123,151,8,83,77,13,7,82,117,134,150,33,46,65,144,99,109,90,108,21,58,62,5,127,27,100,154,152,28,116,96,52,19,80,42,98,139,0,104,86,142,95,16,24,137,61,71,47,119,75,25,111,18,66,54,64,148,93,115,34,12,3,146,38,57,60,103,22,114,120,118,31,133,72,145,85,44,156,110,147,97,63,17,45,11,132,36,102,73,59,79,155,121,20,74,40,15,101,50,130,122,78,56,128,37,49,158,41,81,23,35,29,55,4,141,26,30,84,157,2,149,6,113,76,91,105,112,14,1,92,129,48,53,136,106,94,143,159,69,43,131,87,88,70,124,160,140,125,89,135,68,39}, // permutation 7
{152,109,46,154,18,83,34,66,86,115,70,87,72,44,41,11,132,76,53,19,30,128,27,57,62,159,145,21,150,50,24,38,78,43,113,33,151,26,55,7,15,40,6,111,156,147,126,58,101,125,68,98,130,48,153,35,129,31,104,106,105,52,117,37,61,45,20,2,16,89,91,85,142,77,5,29,138,0,71,75,127,155,148,133,17,9,63,108,22,67,88,74,137,140,141,47,99,93,4,157,95,131,80,54,116,81,23,144,84,94,102,139,123,112,56,82,135,60,143,14,96,107,121,79,118,13,25,103,49,158,32,90,119,42,114,97,28,3,149,12,100,160,36,92,8,134,73,124,110,1,64,146,136,69,120,39,10,51,122,59,65}, // permutation 8
{30,90,67,69,133,32,11,27,91,143,0,16,140,117,146,47,128,33,83,124,51,44,59,80,38,35,144,102,100,113,132,147,50,36,66,86,134,155,43,141,45,48,31,130,64,77,58,103,25,109,159,70,158,73,17,89,114,22,88,145,78,71,87,79,111,55,99,54,97,13,92,98,62,20,23,5,7,137,19,28,106,26,39,142,37,160,4,1,3,82,8,63,104,118,72,9,115,151,149,153,6,18,156,84,60,129,131,127,53,119,12,61,85,29,107,2,34,120,14,24,81,150,123,21,52,57,68,10,139,148,122,42,93,40,95,108,65,49,126,154,105,101,46,110,138,96,135,136,74,94,157,121,152,41,112,56,76,116,75,125,15} // permutation 9
};

// Seed: 4117275924

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   uint32_t  f1;
   volatile int16_t  f2;
   uint32_t  f3;
   volatile uint16_t  f4;
   volatile int32_t  f5;
   int64_t  f6;
};

struct S1 {
   uint32_t  f0;
};

struct S2 {
   int8_t  f0;
   uint64_t  f1;
   int8_t  f2;
   int32_t  f3;
   int16_t  f4;
   uint32_t  f5;
};

union U3 {
   struct S2  f0;
   int8_t * volatile  f1;
   int8_t * f2;
   struct S2  f3;
   int32_t  f4;
};

struct S4 {
    int32_t g_8[7];
    int8_t g_13;
    struct S1 g_29[1][1][2];
    uint16_t g_46;
    int32_t * volatile g_64[3];
    struct S1 *g_73;
    struct S1 **g_72;
    int32_t *g_87;
    int32_t ** volatile g_86;
    struct S1 *g_88;
    union U3 g_98;
    int16_t g_121;
    int16_t g_127;
    VECTOR(uint32_t, 2) g_132;
    volatile struct S0 g_136;
    VECTOR(int32_t, 8) g_159;
    uint16_t *g_175;
    uint16_t * volatile *g_174;
    VECTOR(int8_t, 4) g_178;
    int32_t * volatile g_183;
    int32_t * volatile g_184;
    uint8_t g_191;
    int16_t g_230;
    VECTOR(int64_t, 8) g_233;
    int32_t * volatile g_234;
    int16_t *g_238;
    int16_t **g_237[5][6];
    int32_t g_241;
    int32_t * volatile g_240;
    int32_t * volatile *g_239;
    volatile VECTOR(uint8_t, 4) g_272;
    volatile VECTOR(uint32_t, 16) g_273;
    volatile VECTOR(uint32_t, 2) g_274;
    volatile VECTOR(uint32_t, 2) g_275;
    VECTOR(uint8_t, 8) g_297;
    VECTOR(int8_t, 16) g_322;
    int32_t * volatile g_355;
    int32_t * volatile g_356;
    volatile struct S0 g_359[6][2][1];
    int32_t ** volatile g_383;
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
uint8_t  func_1(struct S4 * p_384);
int32_t * func_2(int32_t * p_3, uint32_t  p_4, int8_t * p_5, uint16_t  p_6, struct S4 * p_384);
uint32_t  func_9(int8_t * p_10, uint64_t  p_11, struct S4 * p_384);
struct S1 * func_17(int32_t * p_18, uint32_t  p_19, int8_t * p_20, struct S1 * p_21, uint8_t  p_22, struct S4 * p_384);
int8_t * func_24(struct S1 * p_25, int8_t  p_26, int8_t  p_27, struct S4 * p_384);
uint64_t  func_32(int32_t * p_33, int8_t * p_34, struct S4 * p_384);
union U3  func_35(uint64_t  p_36, struct S1 * p_37, int8_t * p_38, int32_t  p_39, uint64_t  p_40, struct S4 * p_384);
struct S1 * func_41(uint32_t  p_42, struct S4 * p_384);
int32_t * func_66(struct S1 ** p_67, int64_t  p_68, int32_t  p_69, struct S1 ** p_70, struct S4 * p_384);
uint16_t  func_74(uint16_t * p_75, uint32_t  p_76, struct S4 * p_384);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_384->l_comm_values p_384->g_comm_values p_384->g_29.f0 p_384->g_8 p_384->g_46 p_384->g_86 p_384->g_88 p_384->g_13 p_384->g_98 p_384->g_98.f0.f0 p_384->g_98.f0.f5 p_384->g_121 p_384->g_87 p_384->g_136 p_384->g_174 p_384->g_191 p_384->g_230 p_384->g_98.f0.f1 p_384->g_239 p_384->g_98.f0 p_384->g_241 p_384->g_322 p_384->g_159 p_384->g_359.f6 p_384->g_73 p_384->g_29
 * writes: p_384->g_46 p_384->g_8 p_384->g_72 p_384->g_87 p_384->g_98.f0.f0 p_384->g_98.f3.f4 p_384->g_121 p_384->g_132 p_384->g_136 p_384->g_127 p_384->g_98.f0.f4 p_384->g_191 p_384->g_230 p_384->g_237 p_384->g_239 p_384->g_98.f3.f2 p_384->g_241 p_384->g_98.f0.f2 p_384->g_359 p_384->g_297
 */
uint8_t  func_1(struct S4 * p_384)
{ /* block id: 4 */
    int32_t *l_7[9] = {&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1]};
    int8_t *l_12[8] = {(void*)0,&p_384->g_13,(void*)0,(void*)0,&p_384->g_13,(void*)0,(void*)0,&p_384->g_13};
    int8_t *l_14[7][10] = {{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13},{&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13,&p_384->g_13}};
    int i, j;
    (*p_384->g_86) = func_2(l_7[5], func_9(l_12[0], p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))], p_384), (l_14[1][8] = (void*)0), p_384->g_comm_values[p_384->tid], p_384);
    return p_384->g_comm_values[p_384->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_29.f0 p_384->g_8 p_384->l_comm_values p_384->g_46 p_384->g_86 p_384->g_88 p_384->g_13 p_384->g_98 p_384->g_98.f0.f0 p_384->g_98.f0.f5 p_384->g_121 p_384->g_comm_values p_384->g_87 p_384->g_136 p_384->g_174 p_384->g_191 p_384->g_230 p_384->g_98.f0.f1 p_384->g_239 p_384->g_98.f0 p_384->g_241 p_384->g_322 p_384->g_159 p_384->g_359.f6 p_384->g_73 p_384->g_29
 * writes: p_384->g_46 p_384->g_8 p_384->g_72 p_384->g_87 p_384->g_98.f0.f0 p_384->g_98.f3.f4 p_384->g_121 p_384->g_132 p_384->g_136 p_384->g_127 p_384->g_98.f0.f4 p_384->g_191 p_384->g_230 p_384->g_237 p_384->g_239 p_384->g_98.f3.f2 p_384->g_241 p_384->g_98.f0.f2 p_384->g_359 p_384->g_297
 */
int32_t * func_2(int32_t * p_3, uint32_t  p_4, int8_t * p_5, uint16_t  p_6, struct S4 * p_384)
{ /* block id: 8 */
    int16_t l_23 = 0x53B1L;
    struct S1 *l_28 = &p_384->g_29[0][0][0];
    int32_t *l_304 = &p_384->g_241;
    int32_t **l_303[10] = {&l_304,&l_304,&l_304,&l_304,&l_304,&l_304,&l_304,&l_304,&l_304,&l_304};
    int32_t ***l_302[2];
    int32_t ****l_301[8][5] = {{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0},{(void*)0,&l_302[1],&l_302[1],(void*)0,(void*)0}};
    uint32_t l_319 = 0xF8FA77A2L;
    uint32_t l_330 = 1UL;
    int32_t l_332[8] = {4L,4L,4L,4L,4L,4L,4L,4L};
    uint16_t **l_344 = &p_384->g_175;
    int i, j;
    for (i = 0; i < 2; i++)
        l_302[i] = &l_303[5];
    for (p_6 = 0; (p_6 != 40); p_6 = safe_add_func_int8_t_s_s(p_6, 7))
    { /* block id: 11 */
        int32_t *****l_305 = &l_301[3][2];
        VECTOR(uint32_t, 2) l_306 = (VECTOR(uint32_t, 2))(0xE4CC71D7L, 0x137E17DEL);
        VECTOR(uint32_t, 8) l_309 = (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967294UL, 4294967295UL);
        uint16_t l_331 = 0x8ADDL;
        VECTOR(int16_t, 2) l_339 = (VECTOR(int16_t, 2))(0x28C2L, (-5L));
        int32_t l_352 = 0x6D16A30CL;
        int i;
        l_28 = func_17(p_3, l_23, func_24(l_28, p_384->g_29[0][0][0].f0, (safe_add_func_uint64_t_u_u(func_32((func_35(((void*)0 == &p_384->g_29[0][0][0]), func_41((l_28 != l_28), p_384), p_5, p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))], p_4, p_384) , (void*)0), &p_384->g_13, p_384), 0x7AD59D9401A70457L)), p_384), l_28, p_4, p_384);
        (*p_384->g_87) = (*p_3);
        if ((((*l_305) = l_301[3][2]) != (void*)0))
        { /* block id: 134 */
            int64_t l_316[10][10] = {{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L},{(-4L),0L,0x58312F437F50E561L,0x31ABCB7791EFC5F4L,0x58312F437F50E561L,0L,(-4L),0x70576821305D79B2L,0L,0L}};
            int8_t *l_323 = &p_384->g_98.f3.f2;
            struct S1 *l_334 = &p_384->g_29[0][0][0];
            uint16_t **l_343 = &p_384->g_175;
            int32_t l_358 = 0x5DF65F03L;
            int i, j;
            if ((p_4 > (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_306.xxyx)).even)), 0xD5DF07A8L, 1UL)).even)).even != ((0x41FBL >= (safe_add_func_int64_t_s_s(((0xE8BFC4DCL != ((VECTOR(uint32_t, 8))(l_309.s06736700)).s2) >= (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_316[7][5] ^ (safe_lshift_func_int16_t_s_u(l_319, (safe_lshift_func_int8_t_s_u((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((*l_323) = ((VECTOR(int8_t, 2))(p_384->g_322.s24)).hi), 1L, ((((p_384->g_98 , &p_384->g_237[2][1]) != (((*l_304) = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(p_4, l_330)) || 0x73C31E116E1489CDL), p_384->g_98.f0.f1)), 0))) , (void*)0)) >= 0x2878L) || p_4), 0x2FL, ((VECTOR(int8_t, 4))((-10L))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 4))(0x2EL)), 0x60L, (-9L))))), ((VECTOR(int8_t, 16))(2L))))).s1 || l_331), p_384->g_230))))), l_332[0])), p_384->g_8[1])), p_4))), p_6))) < p_384->g_159.s6))))
            { /* block id: 137 */
                int8_t *l_333 = &p_384->g_98.f0.f2;
                int32_t l_335 = 0x4905D4C1L;
                struct S1 **l_336 = &l_28;
                (*l_336) = func_17((*p_384->g_86), l_316[7][5], l_333, l_334, l_335, p_384);
                if ((atomic_inc(&p_384->l_atomic_input[71]) == 3))
                { /* block id: 140 */
                    uint16_t l_337 = 0xD97DL;
                    uint8_t l_338 = 0x7DL;
                    l_338 ^= l_337;
                    unsigned int result = 0;
                    result += l_337;
                    result += l_338;
                    atomic_add(&p_384->l_special_values[71], result);
                }
                else
                { /* block id: 142 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 145 */
                struct S1 l_342 = {0UL};
                uint8_t *l_345 = (void*)0;
                uint8_t *l_346 = &p_384->g_191;
                uint8_t *l_347 = (void*)0;
                uint8_t *l_348 = (void*)0;
                uint8_t *l_349 = (void*)0;
                uint8_t *l_350 = (void*)0;
                uint8_t *l_351[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_353 = &l_332[0];
                int32_t *l_354 = (void*)0;
                int32_t *l_357[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j;
                l_358 ^= ((*l_353) = (((l_352 = ((*l_346) = (((*p_384->g_87) = (((VECTOR(int16_t, 8))(0x7A9EL, ((VECTOR(int16_t, 2))(0x768DL, (-1L))), ((VECTOR(int16_t, 4))(l_339.yyyy)), 0x6E5AL)).s2 || p_4)) , (safe_sub_func_int64_t_s_s(((l_342 , l_343) != l_344), p_384->g_8[1]))))) > (p_6 & ((p_6 , p_3) != (void*)0))) && 0UL));
                atomic_or(&p_384->l_atomic_reduction[0], l_316[7][5]);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_384->v_collective += p_384->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if ((*p_3))
                    continue;
            }
        }
        else
        { /* block id: 154 */
            p_384->g_359[4][1][0] = p_384->g_136;
        }
    }
    for (p_4 = (-12); (p_4 < 22); p_4 = safe_add_func_int16_t_s_s(p_4, 3))
    { /* block id: 160 */
        int32_t *l_362 = &p_384->g_8[5];
        int32_t *l_363 = (void*)0;
        int32_t *l_364 = &l_332[0];
        int32_t *l_365 = &p_384->g_8[1];
        int32_t l_366 = 0x231140BBL;
        int32_t *l_367 = &p_384->g_8[1];
        int32_t *l_368[3];
        uint16_t l_369 = 0x5392L;
        int16_t l_380 = 0x2362L;
        uint8_t *l_381 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_368[i] = &p_384->g_8[5];
        l_369++;
        l_332[0] = ((VECTOR(int32_t, 8))(0x7A19AC10L, 0x024130CEL, ((VECTOR(int32_t, 2))(0x42EC7A17L, 0x49E541D1L)), ((safe_mod_func_uint64_t_u_u(p_384->g_359[4][1][0].f6, (p_6 && p_384->g_98.f0.f5))) == (safe_lshift_func_int8_t_s_s(0x70L, ((!((p_384->g_297.s3 = (safe_lshift_func_int8_t_s_u(l_380, GROUP_DIVERGE(1, 1)))) & (((*p_384->g_73) , (safe_unary_minus_func_int64_t_s(l_319))) == 4294967294UL))) >= l_23)))), (*p_3), 0x0BA16A38L, (-8L))).s6;
    }
    return (*p_384->g_86);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_9(int8_t * p_10, uint64_t  p_11, struct S4 * p_384)
{ /* block id: 5 */
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_191 p_384->g_8 p_384->g_136.f5 p_384->g_297 p_384->g_175 p_384->g_46 p_384->g_87 p_384->g_98.f0.f2
 * writes: p_384->g_8 p_384->g_191 p_384->g_98.f0.f2
 */
struct S1 * func_17(int32_t * p_18, uint32_t  p_19, int8_t * p_20, struct S1 * p_21, uint8_t  p_22, struct S4 * p_384)
{ /* block id: 125 */
    uint8_t l_290 = 0x00L;
    int32_t *l_296[8] = {&p_384->g_241,&p_384->g_241,&p_384->g_241,&p_384->g_241,&p_384->g_241,&p_384->g_241,&p_384->g_241,&p_384->g_241};
    int32_t **l_295 = &l_296[6];
    int32_t ***l_294[9] = {&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295};
    int32_t ****l_293[6][2] = {{&l_294[1],&l_294[5]},{&l_294[1],&l_294[5]},{&l_294[1],&l_294[5]},{&l_294[1],&l_294[5]},{&l_294[1],&l_294[5]},{&l_294[1],&l_294[5]}};
    VECTOR(int32_t, 16) l_300 = (VECTOR(int32_t, 16))(0x08857139L, (VECTOR(int32_t, 4))(0x08857139L, (VECTOR(int32_t, 2))(0x08857139L, 0L), 0L), 0L, 0x08857139L, 0L, (VECTOR(int32_t, 2))(0x08857139L, 0L), (VECTOR(int32_t, 2))(0x08857139L, 0L), 0x08857139L, 0L, 0x08857139L, 0L);
    int i, j;
    (*p_18) ^= (safe_lshift_func_int8_t_s_s((*p_20), ((VECTOR(int8_t, 2))(0x3CL, 0x7AL)).even));
    (*p_18) &= (safe_rshift_func_uint16_t_u_s(((((*p_20) = ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))((-1L), 0x18L)).odd, (safe_mul_func_int8_t_s_s((+(0xDAL >= p_384->g_136.f5)), l_290)))) >= 1UL)) , (safe_lshift_func_int8_t_s_s(((void*)0 != l_293[3][0]), 7))) ^ ((-1L) ^ ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_384->g_297.s0606)), ((VECTOR(uint8_t, 2))(0x4CL, 0UL)), p_384->g_297.s7, (safe_sub_func_uint16_t_u_u((*p_384->g_175), (*p_384->g_175))), 255UL, 0x65L, 0UL, 0x28L, ((VECTOR(uint8_t, 4))(0x9CL)))).sb)), l_290));
    (*p_384->g_87) ^= (l_290 >= ((VECTOR(int32_t, 16))(l_300.sf4395179d26cc64d)).sc);
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_98.f0.f5 p_384->g_136.f3 p_384->g_191 p_384->g_87 p_384->g_8 p_384->g_230 p_384->g_86 p_384->g_233 p_384->g_98.f0.f1 p_384->g_239 p_384->g_98.f0 p_384->g_174 p_384->g_175 p_384->g_46 p_384->g_272 p_384->g_273 p_384->g_274 p_384->g_275 p_384->g_132 p_384->g_178 p_384->g_241
 * writes: p_384->g_121 p_384->g_191 p_384->g_230 p_384->g_87 p_384->g_237 p_384->g_239 p_384->g_8
 */
int8_t * func_24(struct S1 * p_25, int8_t  p_26, int8_t  p_27, struct S4 * p_384)
{ /* block id: 94 */
    int16_t *l_196 = &p_384->g_121;
    VECTOR(int16_t, 16) l_207 = (VECTOR(int16_t, 16))(0x667CL, (VECTOR(int16_t, 4))(0x667CL, (VECTOR(int16_t, 2))(0x667CL, 8L), 8L), 8L, 0x667CL, 8L, (VECTOR(int16_t, 2))(0x667CL, 8L), (VECTOR(int16_t, 2))(0x667CL, 8L), 0x667CL, 8L, 0x667CL, 8L);
    int32_t l_208 = 0x666AEDDCL;
    VECTOR(int32_t, 8) l_209 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x13243FBCL), 0x13243FBCL), 0x13243FBCL, (-6L), 0x13243FBCL);
    uint8_t *l_218 = &p_384->g_191;
    int32_t **l_219 = (void*)0;
    uint32_t l_220 = 5UL;
    int16_t *l_221 = (void*)0;
    int32_t l_222[1];
    int32_t l_223[2][4][3] = {{{0L,(-1L),(-1L)},{0L,(-1L),(-1L)},{0L,(-1L),(-1L)},{0L,(-1L),(-1L)}},{{0L,(-1L),(-1L)},{0L,(-1L),(-1L)},{0L,(-1L),(-1L)},{0L,(-1L),(-1L)}}};
    int32_t *l_224 = &p_384->g_98.f4;
    int32_t *l_225 = &p_384->g_98.f4;
    int32_t *l_226 = (void*)0;
    int32_t *l_227 = &p_384->g_98.f4;
    int32_t *l_228 = &p_384->g_98.f4;
    int32_t *l_229 = (void*)0;
    uint8_t *l_232 = (void*)0;
    uint8_t **l_231 = &l_232;
    int16_t l_251 = 0x0E1DL;
    struct S1 *l_280 = &p_384->g_29[0][0][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_222[i] = 8L;
    l_223[0][1][1] |= ((l_209.s7 = (l_222[0] &= (safe_mod_func_uint32_t_u_u((((*l_196) = p_384->g_98.f0.f5) , 5UL), (safe_add_func_int32_t_s_s((p_27 <= (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_27, 1)), 9))), ((((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((l_208 = ((VECTOR(int16_t, 16))(l_207.s556c0729c8df1828)).sc), (((VECTOR(int32_t, 16))(l_207.s2, ((VECTOR(int32_t, 8))(l_209.s65725663)), (safe_sub_func_int64_t_s_s(p_384->g_136.f3, l_209.s0)), ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x08L, 3L)).even, (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((&p_384->g_64[2] != (((*l_218) ^= 0xA6L) , l_219)) == p_27), 1L)), 0x67L)))) , (-7L)), ((VECTOR(int32_t, 2))(0x7C44B101L)), 0x09A76C44L, 0x3B548336L, (-1L))).s3 > 1L))), l_220)) | 4L) == (*p_384->g_87)) > 0x597D608EL))))))) >= GROUP_DIVERGE(0, 1));
    if ((l_218 == ((p_384->g_230 |= 1L) , ((*l_231) = l_218))))
    { /* block id: 103 */
        (*p_384->g_86) = (*p_384->g_86);
        l_222[0] ^= ((((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_384->g_233.s3576)).wzzzwwwwyzyywwwy)).sa121, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x0D162033E1AD203FL, (-1L), (-7L), (-1L))))).xwyyyzyz)).lo))).z , p_384->g_98.f0.f1) | p_384->g_8[1]);
    }
    else
    { /* block id: 106 */
        int16_t **l_235 = &l_196;
        int16_t ***l_236[7][6] = {{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235},{&l_235,(void*)0,&l_235,(void*)0,&l_235,&l_235}};
        int32_t * volatile **l_242 = &p_384->g_239;
        int i, j;
        p_384->g_237[2][1] = l_235;
        (*l_242) = p_384->g_239;
    }
    for (p_384->g_230 = 9; (p_384->g_230 != (-14)); p_384->g_230 = safe_sub_func_int16_t_s_s(p_384->g_230, 6))
    { /* block id: 112 */
        int32_t **l_245 = (void*)0;
        int32_t **l_246[1][8][7] = {{{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0},{(void*)0,&p_384->g_87,(void*)0,&p_384->g_87,&p_384->g_87,&p_384->g_87,(void*)0}}};
        VECTOR(int16_t, 8) l_255 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L));
        VECTOR(int16_t, 2) l_256 = (VECTOR(int16_t, 2))(8L, (-7L));
        VECTOR(int32_t, 16) l_259 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x1B8B89D7L), 0x1B8B89D7L), 0x1B8B89D7L, (-10L), 0x1B8B89D7L, (VECTOR(int32_t, 2))((-10L), 0x1B8B89D7L), (VECTOR(int32_t, 2))((-10L), 0x1B8B89D7L), (-10L), 0x1B8B89D7L, (-10L), 0x1B8B89D7L);
        int32_t ***l_264 = (void*)0;
        int32_t ****l_265 = &l_264;
        int32_t ***l_267 = (void*)0;
        int32_t ****l_266[2];
        int32_t **l_269 = &l_228;
        int32_t ***l_268 = &l_269;
        struct S1 **l_281 = &l_280;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_266[i] = &l_267;
        (*p_384->g_86) = (*p_384->g_86);
        if (p_26)
            break;
        (*l_281) = ((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(0x75214E21L, 4294967292UL)).xyxy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967287UL, 0xE68CE1ACL)).yxxyyyxyxyxxyxyx)).s2ca0))).x, (l_209.s6 = ((*p_384->g_87) = (safe_sub_func_int16_t_s_s((p_384->g_98.f0 , (l_251 = ((*l_196) = (-3L)))), (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(0x5326L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_255.s21710237)).lo)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_256.yx)))), 0x0181L)).s5375376341534510, ((VECTOR(int16_t, 8))(((safe_mul_func_int16_t_s_s(p_26, ((!(((((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_259.sd271)), 0x74E1D7CEL, ((((*l_232) |= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((**p_384->g_174), 4)), ((l_268 = ((*l_265) = l_264)) != (((safe_sub_func_int32_t_s_s(0L, (1UL < (((VECTOR(uint8_t, 16))(p_384->g_272.wwzxwwwzxwywwwxy)).s7 || (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL)), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_384->g_273.sca357e05)).s6314435150322066)).s50, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_384->g_274.yxxy)).xzxzzzwy)).s2, 0x0EF29236L, 0x461B6927L)).yzyzyywz, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_384->g_275.xxyx)))).zxxzzwxz))).s55))), 0UL, 0x93017CB9L, 0xD00B8180L, 3UL)).s0 >= ((safe_mul_func_int16_t_s_s(1L, (safe_rshift_func_int8_t_s_s((-5L), 6)))) | p_384->g_230)))))) , p_384->g_132.x) , &p_384->g_239))))) != (-1L)) ^ p_384->g_98.f0.f4), 0x37643B92L, 0x28D8049FL)).s35)).xyyyxyyyxxyxyxxy, (int32_t)(**p_384->g_86)))).s3 , p_26) <= p_27) > p_384->g_178.z)) > p_27))) & p_27), p_26, ((VECTOR(int16_t, 4))(0x7CC0L)), 0L, 0x288AL)).s3255475542006326))).s5d8c, ((VECTOR(int16_t, 4))(4L)), ((VECTOR(int16_t, 4))(0x59B2L))))).x)) > p_384->g_241), p_26)))))))) , l_280);
    }
    return l_218;
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_98.f0.f5 p_384->g_132 p_384->g_136 p_384->g_127 p_384->g_87 p_384->g_8 p_384->l_comm_values p_384->g_174 p_384->g_178 p_384->g_191
 * writes: p_384->g_132 p_384->g_136 p_384->g_127 p_384->g_98.f0.f4 p_384->g_191
 */
uint64_t  func_32(int32_t * p_33, int8_t * p_34, struct S4 * p_384)
{ /* block id: 76 */
    uint32_t l_129[2];
    VECTOR(uint32_t, 2) l_130 = (VECTOR(uint32_t, 2))(0x34479281L, 1UL);
    VECTOR(uint32_t, 16) l_131 = (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL, (VECTOR(uint32_t, 2))(5UL, 0UL), (VECTOR(uint32_t, 2))(5UL, 0UL), 5UL, 0UL, 5UL, 0UL);
    VECTOR(uint32_t, 8) l_133 = (VECTOR(uint32_t, 8))(0xEA6FF285L, (VECTOR(uint32_t, 4))(0xEA6FF285L, (VECTOR(uint32_t, 2))(0xEA6FF285L, 4294967293UL), 4294967293UL), 4294967293UL, 0xEA6FF285L, 4294967293UL);
    int32_t **l_134 = &p_384->g_87;
    int32_t **l_135 = &p_384->g_87;
    volatile struct S0 *l_137 = &p_384->g_136;
    int32_t l_141 = 0L;
    int32_t l_142 = 0x324B621EL;
    int32_t l_143 = 1L;
    int32_t l_144 = (-1L);
    int32_t l_145 = 5L;
    int32_t l_146 = 5L;
    uint8_t l_147 = 0xFAL;
    uint16_t *l_152 = &p_384->g_46;
    int16_t l_167 = 0x253AL;
    uint32_t l_173 = 4294967295UL;
    VECTOR(int16_t, 4) l_176 = (VECTOR(int16_t, 4))(0x17D9L, (VECTOR(int16_t, 2))(0x17D9L, 8L), 8L);
    VECTOR(int16_t, 16) l_177 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    int16_t *l_179 = &p_384->g_98.f0.f4;
    int16_t *l_180 = (void*)0;
    int16_t *l_181 = (void*)0;
    int16_t *l_182 = &p_384->g_127;
    int32_t *l_185 = &l_146;
    int32_t *l_186[10] = {&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143};
    int32_t l_187 = 0x1759D767L;
    int8_t l_188 = 0L;
    int32_t l_189 = 0x74853F64L;
    int64_t l_190 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_129[i] = 0x9C94463EL;
    (*l_137) = (p_384->g_98.f0.f5 , (((GROUP_DIVERGE(0, 1) <= l_129[1]) | (+(p_384->g_132.x = ((((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_130.yx)).xyxxyyxyxyyxyxxx)).even)).s36, ((VECTOR(uint32_t, 4))(l_131.sf607)).lo, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(p_384->g_132.yxyxyxyxxyxxyxyy)).lo, ((VECTOR(uint32_t, 2))(1UL, 0xD05F7741L)).yyyxxxxx, ((VECTOR(uint32_t, 8))(l_133.s11725427))))).s1423531061277236, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4294967289UL, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(0xE8A8DCBEL, 0xAE0A1952L)).yyyy, ((VECTOR(uint32_t, 2))(0xBAD6A7F7L, 0xD9C3D7FAL)).yxyy))), ((VECTOR(uint32_t, 2))(0xB87C57D7L, 7UL)), 1UL)).s60)).xyyxyxyyyyxxyyxx))).sac))).hi , l_134) == l_135)))) , p_384->g_136));
    for (p_384->g_127 = 0; (p_384->g_127 > (-26)); p_384->g_127 = safe_sub_func_uint16_t_u_u(p_384->g_127, 1))
    { /* block id: 81 */
        int32_t *l_140[6] = {&p_384->g_8[4],&p_384->g_8[4],&p_384->g_8[4],&p_384->g_8[4],&p_384->g_8[4],&p_384->g_8[4]};
        uint16_t **l_153 = (void*)0;
        uint16_t *l_155 = (void*)0;
        uint16_t **l_154 = &l_155;
        VECTOR(uint64_t, 2) l_156 = (VECTOR(uint64_t, 2))(0xB743FEE94D8E95E8L, 18446744073709551608UL);
        VECTOR(int64_t, 4) l_162 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x6F66C249806CA2BCL), 0x6F66C249806CA2BCL);
        int8_t l_168 = 0x2AL;
        int i;
        ++l_147;
        l_141 = ((safe_add_func_int16_t_s_s(((l_152 = (void*)0) != ((*l_154) = (void*)0)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-5L), 0x0DF1L)))).odd)) > (((VECTOR(uint64_t, 16))(l_156.xxyxxyxxyxxxxyyy)).s9 != (+(safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0x6F6173B2L, ((*p_384->g_87) > (**l_135)), ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_384->g_159.s20)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_142 ^= (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_162.wy)).hi, (safe_rshift_func_int16_t_s_s((**l_135), 7))))), 5L, 1L, 0x18311241L)), 0x7755CB3DL, 0x72A9CDD8L, (safe_sub_func_int64_t_s_s((((**l_134) = p_384->g_132.x) | ((~l_167) != l_168)), ((p_384->g_121 ^ p_384->g_98.f0.f0) != p_384->g_121))), ((VECTOR(int32_t, 4))(9L)), 0x5BC96B2BL, 1L, ((VECTOR(int32_t, 2))(0x3529F704L)), (-1L))).s3c, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 2))((-8L)))))).yyyx)).wwzxxyyy, ((VECTOR(int32_t, 8))((-2L))), ((VECTOR(int32_t, 8))(0L))))).lo))).even, ((VECTOR(uint32_t, 2))(4294967286UL))))), 4294967287UL, 0x68C70531L, 0xA0318852L, 0xE914191BL)).s5, FAKE_DIVERGE(p_384->global_2_offset, get_global_id(2), 10))))));
    }
    (*l_185) &= (((((safe_mul_func_uint16_t_u_u((**l_134), p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))])) < (FAKE_DIVERGE(p_384->group_2_offset, get_group_id(2), 10) & 0x229AL)) , ((safe_mul_func_uint16_t_u_u((l_173 || ((void*)0 != p_384->g_174)), (((VECTOR(int16_t, 4))(l_176.yywx)).w , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_177.s9c865190)).s67)), 0x6E88L, 0x6EBFL)).w))) , (**l_135))) || ((**l_134) == ((*l_182) = ((*l_179) = (((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(p_384->g_178.yx)), (-1L))).x && 0x13L))))) , (**l_134));
    --p_384->g_191;
    return p_384->g_8[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_13 p_384->g_98 p_384->g_98.f0.f0 p_384->g_98.f0.f5 p_384->g_121 p_384->l_comm_values p_384->g_comm_values p_384->g_87 p_384->g_8
 * writes: p_384->g_98.f0.f0 p_384->g_98.f3.f4 p_384->g_121 p_384->g_8
 */
union U3  func_35(uint64_t  p_36, struct S1 * p_37, int8_t * p_38, int32_t  p_39, uint64_t  p_40, struct S4 * p_384)
{ /* block id: 57 */
    uint32_t l_107[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int32_t l_123 = 1L;
    int32_t l_128 = 0x0B1D6983L;
    int i;
    if ((atomic_inc(&p_384->g_atomic_input[74 * get_linear_group_id() + 9]) == 2))
    { /* block id: 59 */
        int32_t l_89 = 0L;
        uint16_t l_90[8] = {0xACC2L,0x0137L,0xACC2L,0xACC2L,0x0137L,0xACC2L,0xACC2L,0x0137L};
        int32_t l_91 = 0x15E77405L;
        int i;
        l_91 |= (l_90[7] = l_89);
        unsigned int result = 0;
        result += l_89;
        int l_90_i0;
        for (l_90_i0 = 0; l_90_i0 < 8; l_90_i0++) {
            result += l_90[l_90_i0];
        }
        result += l_91;
        atomic_add(&p_384->g_special_values[74 * get_linear_group_id() + 9], result);
    }
    else
    { /* block id: 62 */
        (1 + 1);
    }
    for (p_39 = 0; (p_39 >= 4); p_39++)
    { /* block id: 67 */
        uint8_t l_108 = 255UL;
        int8_t *l_109 = &p_384->g_98.f0.f0;
        VECTOR(uint8_t, 16) l_112 = (VECTOR(uint8_t, 16))(0xCCL, (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 0xB0L), 0xB0L), 0xB0L, 0xCCL, 0xB0L, (VECTOR(uint8_t, 2))(0xCCL, 0xB0L), (VECTOR(uint8_t, 2))(0xCCL, 0xB0L), 0xCCL, 0xB0L, 0xCCL, 0xB0L);
        int16_t *l_119 = &p_384->g_98.f3.f4;
        int16_t *l_120 = &p_384->g_121;
        uint32_t *l_122 = &l_107[2];
        int16_t *l_124 = (void*)0;
        int16_t *l_125 = (void*)0;
        int16_t *l_126[10][10] = {{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127},{&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127,&p_384->g_127}};
        int i, j;
        (*p_384->g_87) |= ((safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((p_384->g_13 != (p_384->g_98 , (l_128 |= (safe_div_func_uint32_t_u_u(((*l_122) = (safe_div_func_int16_t_s_s(p_39, (safe_rshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u(l_107[2], l_108)) , (((((*l_109) &= (2L == (!252UL))) && (safe_rshift_func_uint16_t_u_s((((VECTOR(uint8_t, 2))(l_112.s1a)).even , (((-10L) | (safe_sub_func_uint16_t_u_u((((VECTOR(uint64_t, 4))(0xF8105A18A5C6425FL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xDB549FED5CAB5B23L, 0xF7F6FD02479DA46AL)))))))), 0x618026BCB33D27CFL)).y | (((*l_120) ^= ((*l_119) = ((safe_rshift_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((-1L), p_384->g_98.f0.f5)) | p_36) == p_39) | 255UL), l_112.s5)) , 0L))) & p_39)), 0x6BC9L))) | p_36)), l_107[2]))) > p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))]) != p_36)), p_384->g_comm_values[p_384->tid]))))), l_123))))) , p_384->g_98.f0.f5), 0x2E5439C88BF8F4ABL)), l_123)) == p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))]);
    }
    return p_384->g_98;
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_46 p_384->g_8 p_384->l_comm_values p_384->g_86 p_384->g_88
 * writes: p_384->g_46 p_384->g_8 p_384->g_72 p_384->g_87
 */
struct S1 * func_41(uint32_t  p_42, struct S4 * p_384)
{ /* block id: 12 */
    struct S1 *l_43 = (void*)0;
    struct S1 **l_44 = &l_43;
    uint16_t *l_45[8][1][3] = {{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}},{{&p_384->g_46,&p_384->g_46,&p_384->g_46}}};
    int32_t l_81[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_81[i] = 1L;
    if ((p_42 == (p_384->g_46 = (((*l_44) = l_43) != &p_384->g_29[0][0][0]))))
    { /* block id: 15 */
        uint64_t l_63 = 18446744073709551607UL;
        for (p_384->g_46 = 5; (p_384->g_46 < 34); p_384->g_46 = safe_add_func_int16_t_s_s(p_384->g_46, 5))
        { /* block id: 18 */
            if ((atomic_inc(&p_384->l_atomic_input[73]) == 7))
            { /* block id: 20 */
                struct S2 l_49 = {1L,0xF40BF68D270C1731L,0x49L,0x4242EA6AL,0x2024L,0x597EEDF6L};
                struct S2 l_50 = {-4L,0x77F0A061FA46B4C0L,-1L,0x3A798BE4L,-9L,0x60546153L};
                int32_t l_52 = 0x6FEF6F1AL;
                int32_t *l_51 = &l_52;
                int32_t *l_53 = &l_52;
                int32_t *l_54 = &l_52;
                int32_t *l_55 = &l_52;
                l_50 = l_49;
                l_51 = (void*)0;
                l_55 = (l_54 = (l_53 = (void*)0));
                for (l_50.f5 = 7; (l_50.f5 != 3); --l_50.f5)
                { /* block id: 28 */
                    int32_t *l_58 = (void*)0;
                    int32_t l_60[9][3] = {{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL},{0x1DEA6CBAL,0x227FA52EL,0x1DEA6CBAL}};
                    int32_t *l_59 = &l_60[0][2];
                    int i, j;
                    l_59 = l_58;
                }
                unsigned int result = 0;
                result += l_49.f0;
                result += l_49.f1;
                result += l_49.f2;
                result += l_49.f3;
                result += l_49.f4;
                result += l_49.f5;
                result += l_50.f0;
                result += l_50.f1;
                result += l_50.f2;
                result += l_50.f3;
                result += l_50.f4;
                result += l_50.f5;
                result += l_52;
                atomic_add(&p_384->l_special_values[73], result);
            }
            else
            { /* block id: 31 */
                (1 + 1);
            }
        }
        for (p_384->g_46 = 0; (p_384->g_46 < 28); p_384->g_46 = safe_add_func_int16_t_s_s(p_384->g_46, 4))
        { /* block id: 37 */
            int32_t *l_65 = &p_384->g_8[6];
            (*l_65) ^= l_63;
        }
    }
    else
    { /* block id: 40 */
        struct S1 ***l_71[8][3][5] = {{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}},{{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44,&l_44}}};
        VECTOR(int16_t, 2) l_79 = (VECTOR(int16_t, 2))(6L, (-1L));
        int32_t *l_80 = (void*)0;
        int32_t **l_85 = (void*)0;
        int i, j, k;
        (*p_384->g_86) = func_66((p_384->g_72 = &l_43), p_42, (l_81[3] |= (func_74(&p_384->g_46, p_384->l_comm_values[(safe_mod_func_uint32_t_u_u(p_384->tid, 161))], p_384) || ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_79.xx)).yxyx)).y)), &l_43, p_384);
    }
    return p_384->g_88;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_384->g_8
 */
int32_t * func_66(struct S1 ** p_67, int64_t  p_68, int32_t  p_69, struct S1 ** p_70, struct S4 * p_384)
{ /* block id: 50 */
    VECTOR(int32_t, 8) l_82 = (VECTOR(int32_t, 8))(0x5AE8CE1FL, (VECTOR(int32_t, 4))(0x5AE8CE1FL, (VECTOR(int32_t, 2))(0x5AE8CE1FL, 0x43DB8877L), 0x43DB8877L), 0x43DB8877L, 0x5AE8CE1FL, 0x43DB8877L);
    int32_t *l_83 = &p_384->g_8[3];
    int32_t **l_84 = &l_83;
    int i;
    (*l_83) = ((VECTOR(int32_t, 4))(l_82.s3635)).y;
    (*l_84) = &p_69;
    return &p_384->g_8[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_384->g_46
 * writes: p_384->g_46
 */
uint16_t  func_74(uint16_t * p_75, uint32_t  p_76, struct S4 * p_384)
{ /* block id: 42 */
    for (p_384->g_46 = (-5); (p_384->g_46 != 53); p_384->g_46++)
    { /* block id: 45 */
        if (p_76)
            break;
    }
    return (*p_75);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[74];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 74; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[161];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 161; i++)
            l_comm_values[i] = 1;
    struct S4 c_385;
    struct S4* p_384 = &c_385;
    struct S4 c_386 = {
        {3L,3L,3L,3L,3L,3L,3L}, // p_384->g_8
        (-1L), // p_384->g_13
        {{{{4294967295UL},{4294967295UL}}}}, // p_384->g_29
        65533UL, // p_384->g_46
        {&p_384->g_8[1],&p_384->g_8[1],&p_384->g_8[1]}, // p_384->g_64
        &p_384->g_29[0][0][0], // p_384->g_73
        &p_384->g_73, // p_384->g_72
        &p_384->g_8[1], // p_384->g_87
        &p_384->g_87, // p_384->g_86
        &p_384->g_29[0][0][1], // p_384->g_88
        {{0L,0xF706C0A8DCCB6772L,0x3CL,-7L,0L,0xC62902D2L}}, // p_384->g_98
        0L, // p_384->g_121
        0x46B9L, // p_384->g_127
        (VECTOR(uint32_t, 2))(2UL, 0xDD545031L), // p_384->g_132
        {-7L,0x67B20451L,0x112CL,4294967295UL,0xF722L,0x3515A1FBL,0x5B9FFA4CC697D3C6L}, // p_384->g_136
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6F2F1483L), 0x6F2F1483L), 0x6F2F1483L, 7L, 0x6F2F1483L), // p_384->g_159
        &p_384->g_46, // p_384->g_175
        &p_384->g_175, // p_384->g_174
        (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, (-8L)), (-8L)), // p_384->g_178
        (void*)0, // p_384->g_183
        (void*)0, // p_384->g_184
        0UL, // p_384->g_191
        0x486AL, // p_384->g_230
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2D7C64DFFC00522FL), 0x2D7C64DFFC00522FL), 0x2D7C64DFFC00522FL, (-1L), 0x2D7C64DFFC00522FL), // p_384->g_233
        (void*)0, // p_384->g_234
        (void*)0, // p_384->g_238
        {{&p_384->g_238,(void*)0,&p_384->g_238,&p_384->g_238,(void*)0,&p_384->g_238},{&p_384->g_238,(void*)0,&p_384->g_238,&p_384->g_238,(void*)0,&p_384->g_238},{&p_384->g_238,(void*)0,&p_384->g_238,&p_384->g_238,(void*)0,&p_384->g_238},{&p_384->g_238,(void*)0,&p_384->g_238,&p_384->g_238,(void*)0,&p_384->g_238},{&p_384->g_238,(void*)0,&p_384->g_238,&p_384->g_238,(void*)0,&p_384->g_238}}, // p_384->g_237
        0L, // p_384->g_241
        &p_384->g_241, // p_384->g_240
        &p_384->g_240, // p_384->g_239
        (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 5UL), 5UL), // p_384->g_272
        (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4UL), 4UL), 4UL, 4294967287UL, 4UL, (VECTOR(uint32_t, 2))(4294967287UL, 4UL), (VECTOR(uint32_t, 2))(4294967287UL, 4UL), 4294967287UL, 4UL, 4294967287UL, 4UL), // p_384->g_273
        (VECTOR(uint32_t, 2))(0x1870DE6CL, 1UL), // p_384->g_274
        (VECTOR(uint32_t, 2))(0x97AE2AFEL, 0x83E0AA7AL), // p_384->g_275
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x5CL), 0x5CL), 0x5CL, 254UL, 0x5CL), // p_384->g_297
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 6L), 6L), 6L, (-9L), 6L, (VECTOR(int8_t, 2))((-9L), 6L), (VECTOR(int8_t, 2))((-9L), 6L), (-9L), 6L, (-9L), 6L), // p_384->g_322
        (void*)0, // p_384->g_355
        (void*)0, // p_384->g_356
        {{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}},{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}},{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}},{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}},{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}},{{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}},{{-1L,4294967286UL,0x07B0L,4294967286UL,1UL,0L,0L}}}}, // p_384->g_359
        (void*)0, // p_384->g_383
        0, // p_384->v_collective
        sequence_input[get_global_id(0)], // p_384->global_0_offset
        sequence_input[get_global_id(1)], // p_384->global_1_offset
        sequence_input[get_global_id(2)], // p_384->global_2_offset
        sequence_input[get_local_id(0)], // p_384->local_0_offset
        sequence_input[get_local_id(1)], // p_384->local_1_offset
        sequence_input[get_local_id(2)], // p_384->local_2_offset
        sequence_input[get_group_id(0)], // p_384->group_0_offset
        sequence_input[get_group_id(1)], // p_384->group_1_offset
        sequence_input[get_group_id(2)], // p_384->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 161)), permutations[0][get_linear_local_id()])), // p_384->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_385 = c_386;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_384);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_384->g_8[i], "p_384->g_8[i]", print_hash_value);

    }
    transparent_crc(p_384->g_13, "p_384->g_13", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_384->g_29[i][j][k].f0, "p_384->g_29[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_384->g_46, "p_384->g_46", print_hash_value);
    transparent_crc(p_384->g_98.f0.f0, "p_384->g_98.f0.f0", print_hash_value);
    transparent_crc(p_384->g_98.f0.f1, "p_384->g_98.f0.f1", print_hash_value);
    transparent_crc(p_384->g_98.f0.f2, "p_384->g_98.f0.f2", print_hash_value);
    transparent_crc(p_384->g_98.f0.f3, "p_384->g_98.f0.f3", print_hash_value);
    transparent_crc(p_384->g_98.f0.f4, "p_384->g_98.f0.f4", print_hash_value);
    transparent_crc(p_384->g_98.f0.f5, "p_384->g_98.f0.f5", print_hash_value);
    transparent_crc(p_384->g_121, "p_384->g_121", print_hash_value);
    transparent_crc(p_384->g_127, "p_384->g_127", print_hash_value);
    transparent_crc(p_384->g_132.x, "p_384->g_132.x", print_hash_value);
    transparent_crc(p_384->g_132.y, "p_384->g_132.y", print_hash_value);
    transparent_crc(p_384->g_136.f0, "p_384->g_136.f0", print_hash_value);
    transparent_crc(p_384->g_136.f1, "p_384->g_136.f1", print_hash_value);
    transparent_crc(p_384->g_136.f2, "p_384->g_136.f2", print_hash_value);
    transparent_crc(p_384->g_136.f3, "p_384->g_136.f3", print_hash_value);
    transparent_crc(p_384->g_136.f4, "p_384->g_136.f4", print_hash_value);
    transparent_crc(p_384->g_136.f5, "p_384->g_136.f5", print_hash_value);
    transparent_crc(p_384->g_136.f6, "p_384->g_136.f6", print_hash_value);
    transparent_crc(p_384->g_159.s0, "p_384->g_159.s0", print_hash_value);
    transparent_crc(p_384->g_159.s1, "p_384->g_159.s1", print_hash_value);
    transparent_crc(p_384->g_159.s2, "p_384->g_159.s2", print_hash_value);
    transparent_crc(p_384->g_159.s3, "p_384->g_159.s3", print_hash_value);
    transparent_crc(p_384->g_159.s4, "p_384->g_159.s4", print_hash_value);
    transparent_crc(p_384->g_159.s5, "p_384->g_159.s5", print_hash_value);
    transparent_crc(p_384->g_159.s6, "p_384->g_159.s6", print_hash_value);
    transparent_crc(p_384->g_159.s7, "p_384->g_159.s7", print_hash_value);
    transparent_crc(p_384->g_178.x, "p_384->g_178.x", print_hash_value);
    transparent_crc(p_384->g_178.y, "p_384->g_178.y", print_hash_value);
    transparent_crc(p_384->g_178.z, "p_384->g_178.z", print_hash_value);
    transparent_crc(p_384->g_178.w, "p_384->g_178.w", print_hash_value);
    transparent_crc(p_384->g_191, "p_384->g_191", print_hash_value);
    transparent_crc(p_384->g_230, "p_384->g_230", print_hash_value);
    transparent_crc(p_384->g_233.s0, "p_384->g_233.s0", print_hash_value);
    transparent_crc(p_384->g_233.s1, "p_384->g_233.s1", print_hash_value);
    transparent_crc(p_384->g_233.s2, "p_384->g_233.s2", print_hash_value);
    transparent_crc(p_384->g_233.s3, "p_384->g_233.s3", print_hash_value);
    transparent_crc(p_384->g_233.s4, "p_384->g_233.s4", print_hash_value);
    transparent_crc(p_384->g_233.s5, "p_384->g_233.s5", print_hash_value);
    transparent_crc(p_384->g_233.s6, "p_384->g_233.s6", print_hash_value);
    transparent_crc(p_384->g_233.s7, "p_384->g_233.s7", print_hash_value);
    transparent_crc(p_384->g_241, "p_384->g_241", print_hash_value);
    transparent_crc(p_384->g_272.x, "p_384->g_272.x", print_hash_value);
    transparent_crc(p_384->g_272.y, "p_384->g_272.y", print_hash_value);
    transparent_crc(p_384->g_272.z, "p_384->g_272.z", print_hash_value);
    transparent_crc(p_384->g_272.w, "p_384->g_272.w", print_hash_value);
    transparent_crc(p_384->g_273.s0, "p_384->g_273.s0", print_hash_value);
    transparent_crc(p_384->g_273.s1, "p_384->g_273.s1", print_hash_value);
    transparent_crc(p_384->g_273.s2, "p_384->g_273.s2", print_hash_value);
    transparent_crc(p_384->g_273.s3, "p_384->g_273.s3", print_hash_value);
    transparent_crc(p_384->g_273.s4, "p_384->g_273.s4", print_hash_value);
    transparent_crc(p_384->g_273.s5, "p_384->g_273.s5", print_hash_value);
    transparent_crc(p_384->g_273.s6, "p_384->g_273.s6", print_hash_value);
    transparent_crc(p_384->g_273.s7, "p_384->g_273.s7", print_hash_value);
    transparent_crc(p_384->g_273.s8, "p_384->g_273.s8", print_hash_value);
    transparent_crc(p_384->g_273.s9, "p_384->g_273.s9", print_hash_value);
    transparent_crc(p_384->g_273.sa, "p_384->g_273.sa", print_hash_value);
    transparent_crc(p_384->g_273.sb, "p_384->g_273.sb", print_hash_value);
    transparent_crc(p_384->g_273.sc, "p_384->g_273.sc", print_hash_value);
    transparent_crc(p_384->g_273.sd, "p_384->g_273.sd", print_hash_value);
    transparent_crc(p_384->g_273.se, "p_384->g_273.se", print_hash_value);
    transparent_crc(p_384->g_273.sf, "p_384->g_273.sf", print_hash_value);
    transparent_crc(p_384->g_274.x, "p_384->g_274.x", print_hash_value);
    transparent_crc(p_384->g_274.y, "p_384->g_274.y", print_hash_value);
    transparent_crc(p_384->g_275.x, "p_384->g_275.x", print_hash_value);
    transparent_crc(p_384->g_275.y, "p_384->g_275.y", print_hash_value);
    transparent_crc(p_384->g_297.s0, "p_384->g_297.s0", print_hash_value);
    transparent_crc(p_384->g_297.s1, "p_384->g_297.s1", print_hash_value);
    transparent_crc(p_384->g_297.s2, "p_384->g_297.s2", print_hash_value);
    transparent_crc(p_384->g_297.s3, "p_384->g_297.s3", print_hash_value);
    transparent_crc(p_384->g_297.s4, "p_384->g_297.s4", print_hash_value);
    transparent_crc(p_384->g_297.s5, "p_384->g_297.s5", print_hash_value);
    transparent_crc(p_384->g_297.s6, "p_384->g_297.s6", print_hash_value);
    transparent_crc(p_384->g_297.s7, "p_384->g_297.s7", print_hash_value);
    transparent_crc(p_384->g_322.s0, "p_384->g_322.s0", print_hash_value);
    transparent_crc(p_384->g_322.s1, "p_384->g_322.s1", print_hash_value);
    transparent_crc(p_384->g_322.s2, "p_384->g_322.s2", print_hash_value);
    transparent_crc(p_384->g_322.s3, "p_384->g_322.s3", print_hash_value);
    transparent_crc(p_384->g_322.s4, "p_384->g_322.s4", print_hash_value);
    transparent_crc(p_384->g_322.s5, "p_384->g_322.s5", print_hash_value);
    transparent_crc(p_384->g_322.s6, "p_384->g_322.s6", print_hash_value);
    transparent_crc(p_384->g_322.s7, "p_384->g_322.s7", print_hash_value);
    transparent_crc(p_384->g_322.s8, "p_384->g_322.s8", print_hash_value);
    transparent_crc(p_384->g_322.s9, "p_384->g_322.s9", print_hash_value);
    transparent_crc(p_384->g_322.sa, "p_384->g_322.sa", print_hash_value);
    transparent_crc(p_384->g_322.sb, "p_384->g_322.sb", print_hash_value);
    transparent_crc(p_384->g_322.sc, "p_384->g_322.sc", print_hash_value);
    transparent_crc(p_384->g_322.sd, "p_384->g_322.sd", print_hash_value);
    transparent_crc(p_384->g_322.se, "p_384->g_322.se", print_hash_value);
    transparent_crc(p_384->g_322.sf, "p_384->g_322.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_384->g_359[i][j][k].f0, "p_384->g_359[i][j][k].f0", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f1, "p_384->g_359[i][j][k].f1", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f2, "p_384->g_359[i][j][k].f2", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f3, "p_384->g_359[i][j][k].f3", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f4, "p_384->g_359[i][j][k].f4", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f5, "p_384->g_359[i][j][k].f5", print_hash_value);
                transparent_crc(p_384->g_359[i][j][k].f6, "p_384->g_359[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_384->v_collective, "p_384->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 74; i++)
            transparent_crc(p_384->g_special_values[i + 74 * get_linear_group_id()], "p_384->g_special_values[i + 74 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 74; i++)
            transparent_crc(p_384->l_special_values[i], "p_384->l_special_values[i]", print_hash_value);
    transparent_crc(p_384->l_comm_values[get_linear_local_id()], "p_384->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_384->g_comm_values[get_linear_group_id() * 161 + get_linear_local_id()], "p_384->g_comm_values[get_linear_group_id() * 161 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
